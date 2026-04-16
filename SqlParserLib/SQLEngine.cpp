#include "SQLEngine.h"
#include "../Common/Include/AntlrProxy.h"
#include <algorithm>
#include <set>
#include <map>

using namespace antlrcpp_oracle;
using namespace antlrcpp_mysql;
// antlrcpp_sqlserver는 명시적으로 네임스페이스를 지정하여 사용
using namespace antlr4;


// ============================================================
// 서브쿼리 탐색 공통 헬퍼 (파일 내부 전용, anonymous namespace)
// ============================================================
namespace {

// 파스 트리에서 특정 타입의 컨텍스트를 재귀적으로 모두 수집
template<typename TCtx>
void CollectSubQueryContextsDeep(antlr4::tree::ParseTree* pNode, std::vector<TCtx*>& outVec)
{
	if (!pNode) return;
	if (auto* pTyped = dynamic_cast<TCtx*>(pNode))
		outVec.push_back(pTyped);
	for (auto* pChild : pNode->children)
		CollectSubQueryContextsDeep<TCtx>(pChild, outVec);
}

// 파스 트리 컨텍스트에서 SqlStatementInfo 서브쿼리 정보 생성
SqlStatementInfo BuildSubQueryInfoFromCtx(
	antlr4::ParserRuleContext* pCtx, const std::string& sqlSource, int nSubIndex)
{
	SqlStatementInfo sub;
	sub.index        = nSubIndex;
	sub.type         = SqlStatementType::SELECT_STATEMENT;
	sub.bHasError    = false;
	sub.nDatabaseType = -1;
	sub.bHasSubQuery = false;

	if (pCtx)
	{
		auto* pStart = pCtx->getStart();
		auto* pStop  = pCtx->getStop();
		if (pStart && pStop)
		{
			sub.startLine   = pStart->getLine();
			sub.startColumn = pStart->getCharPositionInLine();
			size_t nStart   = pStart->getStartIndex();
			size_t nStop    = pStop->getStopIndex();
			if (nStart != (size_t)-1 && nStop != (size_t)-1 && nStop >= nStart)
				sub.sqlText = sqlSource.substr(nStart, nStop - nStart + 1);
		}
	}
	return sub;
}

// -------------------------------------------------------
// 테이블 참조 추출 헬퍼 (파일 내부 전용, anonymous namespace)
// -------------------------------------------------------

// 공백 토큰을 건너뛰고 다음 유효한 토큰의 인덱스 반환
static size_t SkipWS(const std::vector<TokenInfo>& vecTokens, size_t nIdx)
{
	while (nIdx < vecTokens.size() && vecTokens[nIdx].role == TokenRole::WHITESPACE)
		++nIdx;
	return nIdx;
}

// 내부 테이블 참조 구조체 (별칭 포함)
struct TableRef
{
	std::string szDatabase;
	std::string szSchema;
	std::string szTable;
	std::string szAlias;
};

// 토큰 목록에서 테이블 참조 목록 추출 (별칭 + 사용된 토큰 인덱스 추적)
// 분석 대상 키워드: FROM / JOIN / INTO(INSERT INTO) / UPDATE
// 식별자 체인: table / schema.table / db.schema.table
// 별칭:       table [AS] alias
static std::vector<TableRef> ExtractTableRefsEx(
	const std::vector<TokenInfo>& vecTokens,
	std::set<size_t>&             outUsedIdx)
{
	std::vector<TableRef> vecRefs;
	size_t nCount = vecTokens.size();

	for (size_t i = 0; i < nCount; ++i)
	{
		const TokenRole eRole = vecTokens[i].role;

		bool bTableNext = (eRole == TokenRole::KEYWORD_FROM)
			|| (eRole == TokenRole::KEYWORD_JOIN)
			|| (eRole == TokenRole::KEYWORD_INTO)
			|| (eRole == TokenRole::KEYWORD_UPDATE);

		if (!bTableNext)
			continue;

		size_t nNext = SkipWS(vecTokens, i + 1);
		if (nNext >= nCount)
			continue;

		// 서브쿼리 '(' 이면 건너뜀
		if (vecTokens[nNext].role != TokenRole::IDENTIFIER)
			continue;

		// --- 식별자 체인 파싱 ---
		size_t nP1 = nNext;
		std::string szPart1 = vecTokens[nP1].text;
		size_t nD1 = nCount, nP2 = nCount;
		size_t nD2 = nCount, nP3 = nCount;
		std::string szPart2, szPart3;
		size_t nLastUsed = nP1;

		size_t nAfterP1 = SkipWS(vecTokens, nP1 + 1);
		if (nAfterP1 < nCount && vecTokens[nAfterP1].role == TokenRole::SEPARATOR_DOT)
		{
			nD1 = nAfterP1;
			size_t nTryP2 = SkipWS(vecTokens, nD1 + 1);
			if (nTryP2 < nCount && vecTokens[nTryP2].role == TokenRole::IDENTIFIER)
			{
				nP2 = nTryP2;
				szPart2  = vecTokens[nP2].text;
				nLastUsed = nP2;

				size_t nAfterP2 = SkipWS(vecTokens, nP2 + 1);
				if (nAfterP2 < nCount && vecTokens[nAfterP2].role == TokenRole::SEPARATOR_DOT)
				{
					nD2 = nAfterP2;
					size_t nTryP3 = SkipWS(vecTokens, nD2 + 1);
					if (nTryP3 < nCount && vecTokens[nTryP3].role == TokenRole::IDENTIFIER)
					{
						nP3 = nTryP3;
						szPart3  = vecTokens[nP3].text;
						nLastUsed = nP3;
					}
				}
			}
		}

		// --- 별칭 파싱 (AS keyword 또는 단순 IDENTIFIER) ---
		std::string szAlias;
		size_t nAliasIdx = nCount;
		size_t nAfterTable = SkipWS(vecTokens, nLastUsed + 1);
		if (nAfterTable < nCount)
		{
			// AS 키워드 건너뜀
			if (vecTokens[nAfterTable].role == TokenRole::KEYWORD_AS)
				nAfterTable = SkipWS(vecTokens, nAfterTable + 1);

			if (nAfterTable < nCount && vecTokens[nAfterTable].role == TokenRole::IDENTIFIER)
			{
				szAlias   = vecTokens[nAfterTable].text;
				nAliasIdx = nAfterTable;
				nLastUsed = nAfterTable;
			}
		}

		// --- 사용된 인덱스 기록 ---
		outUsedIdx.insert(nP1);
		if (nD1    < nCount) outUsedIdx.insert(nD1);
		if (nP2    < nCount) outUsedIdx.insert(nP2);
		if (nD2    < nCount) outUsedIdx.insert(nD2);
		if (nP3    < nCount) outUsedIdx.insert(nP3);
		if (nAliasIdx < nCount) outUsedIdx.insert(nAliasIdx);

		// --- 역할 결정 ---
		TableRef stRef;
		if (!szPart3.empty())
		{
			stRef.szDatabase = szPart1;
			stRef.szSchema   = szPart2;
			stRef.szTable    = szPart3;
		}
		else if (!szPart2.empty())
		{
			stRef.szSchema = szPart1;
			stRef.szTable  = szPart2;
		}
		else
		{
			stRef.szTable = szPart1;
		}
		stRef.szAlias = szAlias;

		vecRefs.push_back(stRef);
	}

	return vecRefs;
}

// 하위 호환 래퍼 (인덱스 추적 불필요 시 사용)
static std::vector<TableRef> ExtractTableRefs(const std::vector<TokenInfo>& vecTokens)
{
	std::set<size_t> dummy;
	return ExtractTableRefsEx(vecTokens, dummy);
}

// 컬럼 참조 목록 추출
// qualifier.column 패턴과 단독 column 패턴을 모두 처리
// - 테이블 참조에 이미 사용된 토큰(usedIdx)은 건너뜀
// - alias → table 맵으로 테이블 결정
static std::vector<ColumnRefInfo> ExtractColumnRefs(
	const std::vector<TokenInfo>&       vecTokens,
	const std::vector<TableRef>&        vecTableRefs,
	const std::set<size_t>&             usedIdx)
{
	std::vector<ColumnRefInfo> vecResult;
	size_t nCount = vecTokens.size();

	// alias(또는 table명) → table명 맵 구성
	std::map<std::string, std::string> mapQualToTable;
	for (const TableRef& stRef : vecTableRefs)
	{
		if (!stRef.szTable.empty())
		{
			// 별칭이 있으면 별칭→테이블, 없으면 테이블명 자체→테이블
			if (!stRef.szAlias.empty())
				mapQualToTable[stRef.szAlias] = stRef.szTable;
			else
				mapQualToTable[stRef.szTable] = stRef.szTable;
		}
	}

	for (size_t i = 0; i < nCount; ++i)
	{
		// 테이블 참조에 사용된 토큰은 건너뜀
		if (usedIdx.count(i))
			continue;

		if (vecTokens[i].role != TokenRole::IDENTIFIER)
			continue;

		// 직전 비공백 토큰이 DOT이면 이미 다른 패턴에서 컬럼으로 처리됨
		bool bPrevIsDot = false;
		if (i > 0)
		{
			size_t nPrev = i - 1;
			while (nPrev > 0 && vecTokens[nPrev].role == TokenRole::WHITESPACE)
				--nPrev;
			if (vecTokens[nPrev].role == TokenRole::SEPARATOR_DOT && !usedIdx.count(nPrev))
				bPrevIsDot = true;
		}
		if (bPrevIsDot)
			continue;

		// qualifier.column 패턴 확인
		size_t nDotIdx = SkipWS(vecTokens, i + 1);
		if (nDotIdx < nCount
			&& vecTokens[nDotIdx].role == TokenRole::SEPARATOR_DOT
			&& !usedIdx.count(nDotIdx))
		{
			size_t nColIdx = SkipWS(vecTokens, nDotIdx + 1);
			if (nColIdx < nCount
				&& vecTokens[nColIdx].role == TokenRole::IDENTIFIER
				&& !usedIdx.count(nColIdx))
			{
				ColumnRefInfo stCol;
				stCol.szQualifier = vecTokens[i].text;
				stCol.szColumn    = vecTokens[nColIdx].text;

				auto it = mapQualToTable.find(stCol.szQualifier);
				if (it != mapQualToTable.end())
				{
					stCol.bTableDetermined = true;
					stCol.szResolvedTable  = it->second;
				}
				else
				{
					stCol.bTableDetermined = false;
				}

				vecResult.push_back(stCol);
				i = nColIdx; // 처리된 토큰 건너뜀
				continue;
			}
		}

		// 단독 컬럼 패턴
		ColumnRefInfo stCol;
		stCol.szQualifier = "";
		stCol.szColumn    = vecTokens[i].text;

		// 테이블이 1개이면 자동 결정
		if (vecTableRefs.size() == 1 && !vecTableRefs[0].szTable.empty())
		{
			stCol.bTableDetermined = true;
			stCol.szResolvedTable  = vecTableRefs[0].szTable;
		}
		else
		{
			stCol.bTableDetermined = false;
		}

		vecResult.push_back(stCol);
	}

	return vecResult;
}

} // namespace

static SqlStatementType IdentifyStatementOracle(antlrcpp_oracle::PlSqlParser::Unit_statementContext* unitStmt)
{
	using SqlType = SqlStatementType;

	if (!unitStmt) {
		return SqlType::UNKNOWN;
	}

	// DML 체크 (data_manipulation_language_statements)
	if (auto* dmlStmt = unitStmt->data_manipulation_language_statements())
	{
		if (dmlStmt->select_statement()) 			return SqlType::SELECT_STATEMENT;
		if (dmlStmt->insert_statement()) 			return SqlType::INSERT_STATEMENT;
		if (dmlStmt->update_statement()) 			return SqlType::UPDATE_STATEMENT;
		if (dmlStmt->delete_statement()) 			return SqlType::DELETE_STATEMENT;
	}

	// DDL: CREATE 문들
	if (unitStmt->create_table()) 			return SqlType::CREATE_STATEMENT;
	if (unitStmt->create_view()) 			return SqlType::CREATE_STATEMENT;
	if (unitStmt->create_index()) 			return SqlType::CREATE_STATEMENT;
	if (unitStmt->create_sequence()) 		return SqlType::CREATE_STATEMENT;
	if (unitStmt->create_synonym()) 		return SqlType::CREATE_STATEMENT;
	if (unitStmt->create_database()) 		return SqlType::CREATE_STATEMENT;
	if (unitStmt->create_user())			return SqlType::CREATE_STATEMENT;
	if (unitStmt->create_role())			return SqlType::CREATE_STATEMENT;
	if (unitStmt->create_tablespace()) 		return SqlType::CREATE_STATEMENT;

	// PL/SQL 프로시저/함수/트리거/패키지
	if (unitStmt->create_procedure_body()) 		return SqlType::CREATE_PROCEDURE;
	if (unitStmt->create_function_body()) 		return SqlType::CREATE_FUNCTION;
	if (unitStmt->create_trigger())				return SqlType::CREATE_TRIGGER;
	if (unitStmt->create_package()) 			return SqlType::CREATE_PROCEDURE;  // 패키지도 프로시저 계열로
	if (unitStmt->create_package_body()) 		return SqlType::CREATE_PROCEDURE;

	// DDL: ALTER 문들
	if (unitStmt->alter_table()) 					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_index()) 					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_view()) 					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_sequence())					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_user()) 					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_session()) 					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_procedure()) 				return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_function()) 				return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_trigger()) 					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_package())					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_analytic_view())			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_attribute_dimension())		return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_audit_policy())				return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_cluster())					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_database())					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_database_link())			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_dimension())				return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_diskgroup())				return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_flashback_archive())		return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_hierarchy())				return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_inmemory_join_group())		return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_java())						return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_library())					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_lockdown_profile())			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_materialized_view())		return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_materialized_view_log())	return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_materialized_zonemap())		return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_operator())					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_outline())					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_pmem_filestore())			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_resource_cost())			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_role())						return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_rollback_segment())			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_synonym())					return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_tablespace())				return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_tablespace_set())			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_type())						return SqlType::ALTER_STATEMENT;

	// DDL: DROP 문들
	if (unitStmt->drop_table()) 		return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_view())			return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_index()) 		return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_sequence()) 		return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_synonym()) 		return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_user())			return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_role())			return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_procedure()) 	return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_function()) 		return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_trigger()) 		return SqlType::DROP_STATEMENT;
	if (unitStmt->drop_package()) 		return SqlType::DROP_STATEMENT;

	// DDL: TRUNCATE
	if (unitStmt->truncate_table()) 	return SqlType::TRUNCATE_STATEMENT;

	// DCL: GRANT/REVOKE
	if (unitStmt->grant_statement()) 	return SqlType::GRANT_STATEMENT;
	if (unitStmt->revoke_statement()) 	return SqlType::REVOKE_STATEMENT;

	// TCL: COMMIT/ROLLBACK 등
	if (unitStmt->transaction_control_statements()) 		return SqlType::TRANSACTION_STATEMENT;

	// PL/SQL: CALL 문
	if (unitStmt->call_statement()) 		return SqlType::CALL_STATEMENT;

	// PL/SQL: Anonymous Block (BEGIN ... END)
	if (unitStmt->anonymous_block())		return SqlType::CALL_STATEMENT;  // 익명 블록은 CALL 계열로 분류

	return SqlType::UNKNOWN;
}

std::vector<SqlStatementInfo> SQLEngine::ParseMultipleQueries(const std::string& sqlQueries, int nDatabaseType)
{
	std::vector<SqlStatementInfo> vecResult;

	switch (static_cast<DatabaseType>(nDatabaseType))
	{
	case DatabaseType::DB_ORACLE:
		vecResult = ParseMultipleQueriesOracle(sqlQueries);
		break;
	case DatabaseType::DB_MYSQL:
		vecResult = ParseMultipleQueriesMySQL(sqlQueries);
		break;
	case DatabaseType::DB_SQLSERVER:
		vecResult = ParseMultipleQueriesSQLServer(sqlQueries);
		break;
	case DatabaseType::DB_POSTGRESQL:
		vecResult = ParseMultipleQueriesPostgreSQL(sqlQueries);
		break;
	case DatabaseType::DB_DB2:
		vecResult = ParseMultipleQueriesDB2(sqlQueries);
		break;
	default:
		return {};
	}

	// nDatabaseType 설정 (bHasError는 각 ParseMultipleQueriesXXX에서 개별 설정됨)
	for (auto& stInfo : vecResult)
	{
		stInfo.nDatabaseType = nDatabaseType;

		// [GSP: TCustomSqlStatement.getTableList() / getLinkedColumns() 대응]
		// 문장 텍스트를 개별 토큰화하여 테이블·컬럼 참조 추출
		std::vector<TokenInfo> stmtTokens = TokenizeQuery(stInfo.sqlText, nDatabaseType);
		std::set<size_t> usedIdx;
		std::vector<TableRef> innerRefs = ExtractTableRefsEx(stmtTokens, usedIdx);

		stInfo.vecTableRefs.reserve(innerRefs.size());
		for (const TableRef& r : innerRefs)
		{
			TableRefInfo info;
			info.szDatabase = r.szDatabase;
			info.szSchema   = r.szSchema;
			info.szTable    = r.szTable;
			info.szAlias    = r.szAlias;
			stInfo.vecTableRefs.push_back(info);
		}
		stInfo.vecColumnRefs = ExtractColumnRefs(stmtTokens, innerRefs, usedIdx);
	}

	return vecResult;
}

std::vector<SqlStatementInfo> SQLEngine::ParseMultipleQueriesOracle(const std::string& sqlQueries)
{
	std::vector<SqlStatementInfo> results;

	try
	{
		// 렉서로 전체 토큰화 후 SEMICOLON 기준으로 문장 분리 (MySQL과 동일한 방식)
		// parser.sql_script() 방식 대신 토큰 스트림을 직접 순회하여 개별 오류에 강건하게 처리
		antlr4::ANTLRInputStream input(sqlQueries);
		antlrcpp_oracle::PlSqlLexer lexer(&input);
		antlr4::CommonTokenStream tokenStream(&lexer);

		lexer.removeErrorListeners();
		tokenStream.fill();

		const std::vector<antlr4::Token*>& vecAllTokens = tokenStream.getTokens();

		int nIndex = 1;
		bool bInStmt = false;
		size_t nStmtStartChar = 0;
		size_t nStmtStartLine = 1;
		size_t nStmtStartCol  = 0;
		size_t nLastStopChar  = 0;

		for (size_t i = 0; i < vecAllTokens.size(); i++)
		{
			antlr4::Token* pTok = vecAllTokens[i];
			if (!pTok)
				continue;

			int nTokType = static_cast<int>(pTok->getType());

			// EOF: 세미콜론 없이 끝나는 마지막 문장 처리
			if (nTokType == static_cast<int>(antlr4::Token::EOF))
			{
				if (bInStmt)
				{
					SqlStatementInfo stInfo;
					stInfo.index       = nIndex++;
					stInfo.sqlText     = sqlQueries.substr(nStmtStartChar, nLastStopChar - nStmtStartChar + 1);
					stInfo.startLine   = nStmtStartLine;
					stInfo.startColumn = nStmtStartCol;
					stInfo.type        = IdentifySqlTypeOracle(stInfo.sqlText);
					results.push_back(stInfo);
					bInStmt = false;
				}
				break;
			}

			// 공백/주석 건너뜀
			if (nTokType == static_cast<int>(antlrcpp_oracle::PlSqlLexer::SPACES) ||
				nTokType == static_cast<int>(antlrcpp_oracle::PlSqlLexer::SINGLE_LINE_COMMENT) ||
				nTokType == static_cast<int>(antlrcpp_oracle::PlSqlLexer::MULTI_LINE_COMMENT))
				continue;

			// SEMICOLON: 현재 문장 종료
			if (nTokType == static_cast<int>(antlrcpp_oracle::PlSqlLexer::SEMICOLON))
			{
				if (bInStmt)
				{
					SqlStatementInfo stInfo;
					stInfo.index       = nIndex++;
					stInfo.sqlText     = sqlQueries.substr(nStmtStartChar, nLastStopChar - nStmtStartChar + 1);
					stInfo.startLine   = nStmtStartLine;
					stInfo.startColumn = nStmtStartCol;
					stInfo.type        = IdentifySqlTypeOracle(stInfo.sqlText);
					results.push_back(stInfo);
					bInStmt = false;
				}
				continue;
			}

			// 일반 토큰: 문장 범위 갱신
			if (!bInStmt)
			{
				nStmtStartChar = pTok->getStartIndex();
				nStmtStartLine = pTok->getLine();
				nStmtStartCol  = pTok->getCharPositionInLine();
				bInStmt = true;
			}
			nLastStopChar = pTok->getStopIndex();
		}
	}
	catch (...) {}

	for (auto& stInfo : results)
	{
		if (!stInfo.sqlText.empty())
			stInfo.bHasError = CheckSyntaxErrorOracle(stInfo.sqlText);
	}

	// 서브쿼리 수집 (토큰 기반 분리이므로 각 문장을 재파싱)
	for (auto& stInfo : results)
	{
		if (stInfo.sqlText.empty())
			continue;
		try
		{
			ANTLRInputStream subInput(stInfo.sqlText);
			antlrcpp_oracle::PlSqlLexer subLexer(&subInput);
			CommonTokenStream subTokens(&subLexer);
			antlrcpp_oracle::PlSqlParser subParser(&subTokens);
			subLexer.removeErrorListeners();
			subParser.removeErrorListeners();

			auto* pScriptCtx = subParser.sql_script();
			if (pScriptCtx)
			{
				// SubqueryContext를 수집하되, 최상위 SELECT를 제외하고 실제 서브쿼리만 감지
				// 판별 기준: 부모 체인에 SubqueryContext 조상이 있으면 → 진짜 서브쿼리
				//           부모 체인에 SubqueryContext 조상이 없으면 → 최상위 SELECT (제외)
				// 직접 parent 타입 비교 대신 조상 탐색으로 error recovery 구조에서도 안정 동작
				std::vector<antlrcpp_oracle::PlSqlParser::SubqueryContext*> vecSubCtxs;
				CollectSubQueryContextsDeep<antlrcpp_oracle::PlSqlParser::SubqueryContext>(pScriptCtx, vecSubCtxs);
				int nSubIdx = 1;
				for (auto* pSub : vecSubCtxs)
				{
					bool bHasSubqueryAncestor = false;
					antlr4::tree::ParseTree* pAnc = pSub->parent;
					while (pAnc)
					{
						if (dynamic_cast<antlrcpp_oracle::PlSqlParser::SubqueryContext*>(pAnc))
						{
							bHasSubqueryAncestor = true;
							break;
						}
						pAnc = pAnc->parent;
					}
					if (bHasSubqueryAncestor)
						stInfo.vecSubQueries.push_back(BuildSubQueryInfoFromCtx(pSub, stInfo.sqlText, nSubIdx++));
				}
				stInfo.bHasSubQuery = !stInfo.vecSubQueries.empty();
			}
		}
		catch (...) {}
	}

	return results;
}

TokenRole SQLEngine::GetRoleFromLexerTokenOracle(size_t tokenType, const std::string& tokenText) const
{
	using TR = TokenRole;

	// antlrcpp_oracle::PlSqlLexer의 토큰 타입 상수 사용
	switch (tokenType) {
		// 키워드들
	case antlrcpp_oracle::PlSqlLexer::SELECT:     return TR::KEYWORD_SELECT;
	case antlrcpp_oracle::PlSqlLexer::FROM:       return TR::KEYWORD_FROM;
	case antlrcpp_oracle::PlSqlLexer::WHERE:      return TR::KEYWORD_WHERE;
	case antlrcpp_oracle::PlSqlLexer::INSERT:     return TR::KEYWORD_INSERT;
	case antlrcpp_oracle::PlSqlLexer::UPDATE:     return TR::KEYWORD_UPDATE;
	case antlrcpp_oracle::PlSqlLexer::DELETE:     return TR::KEYWORD_DELETE;
	case antlrcpp_oracle::PlSqlLexer::INTO:       return TR::KEYWORD_INTO;
	case antlrcpp_oracle::PlSqlLexer::VALUES:     return TR::KEYWORD_VALUES;
	case antlrcpp_oracle::PlSqlLexer::SET:        return TR::KEYWORD_SET;
	case antlrcpp_oracle::PlSqlLexer::AND:        return TR::KEYWORD_AND;
	case antlrcpp_oracle::PlSqlLexer::OR:         return TR::KEYWORD_OR;
	case antlrcpp_oracle::PlSqlLexer::ORDER:      return TR::KEYWORD_ORDER_BY;
	case antlrcpp_oracle::PlSqlLexer::GROUP:      return TR::KEYWORD_GROUP_BY;
	case antlrcpp_oracle::PlSqlLexer::HAVING:     return TR::KEYWORD_HAVING;
	case antlrcpp_oracle::PlSqlLexer::JOIN:       return TR::KEYWORD_JOIN;
	case antlrcpp_oracle::PlSqlLexer::INNER:
	case antlrcpp_oracle::PlSqlLexer::LEFT:
	case antlrcpp_oracle::PlSqlLexer::RIGHT:
	case antlrcpp_oracle::PlSqlLexer::OUTER:
	case antlrcpp_oracle::PlSqlLexer::CROSS:
	case antlrcpp_oracle::PlSqlLexer::FULL:       return TR::KEYWORD_JOIN;
	case antlrcpp_oracle::PlSqlLexer::ON:         return TR::KEYWORD_ON;
	case antlrcpp_oracle::PlSqlLexer::AS:         return TR::KEYWORD_AS;

		// 기타 예약어들
	case antlrcpp_oracle::PlSqlLexer::CREATE:
	case antlrcpp_oracle::PlSqlLexer::ALTER:
	case antlrcpp_oracle::PlSqlLexer::DROP:
	case antlrcpp_oracle::PlSqlLexer::TABLE:
	case antlrcpp_oracle::PlSqlLexer::DATABASE:
	case antlrcpp_oracle::PlSqlLexer::INDEX:
	case antlrcpp_oracle::PlSqlLexer::VIEW:
	case antlrcpp_oracle::PlSqlLexer::PROCEDURE:
	case antlrcpp_oracle::PlSqlLexer::FUNCTION:
	case antlrcpp_oracle::PlSqlLexer::TRIGGER:
	case antlrcpp_oracle::PlSqlLexer::GRANT:
	case antlrcpp_oracle::PlSqlLexer::REVOKE:
	case antlrcpp_oracle::PlSqlLexer::BEGIN:
	case antlrcpp_oracle::PlSqlLexer::COMMIT:
	case antlrcpp_oracle::PlSqlLexer::ROLLBACK:
	case antlrcpp_oracle::PlSqlLexer::DISTINCT:
	case antlrcpp_oracle::PlSqlLexer::ALL:
	case antlrcpp_oracle::PlSqlLexer::BY:
	case antlrcpp_oracle::PlSqlLexer::ASC:
	case antlrcpp_oracle::PlSqlLexer::DESC:
	case antlrcpp_oracle::PlSqlLexer::LIKE:
	case antlrcpp_oracle::PlSqlLexer::IN:
	case antlrcpp_oracle::PlSqlLexer::BETWEEN:
	case antlrcpp_oracle::PlSqlLexer::IS:
	case antlrcpp_oracle::PlSqlLexer::NOT:
	case antlrcpp_oracle::PlSqlLexer::EXISTS:
	case antlrcpp_oracle::PlSqlLexer::CASE:
	case antlrcpp_oracle::PlSqlLexer::WHEN:
	case antlrcpp_oracle::PlSqlLexer::THEN:
	case antlrcpp_oracle::PlSqlLexer::ELSE:
	case antlrcpp_oracle::PlSqlLexer::END:
	case antlrcpp_oracle::PlSqlLexer::DECLARE:
	case antlrcpp_oracle::PlSqlLexer::EXCEPTION:
	case antlrcpp_oracle::PlSqlLexer::CURSOR:
	case antlrcpp_oracle::PlSqlLexer::LOOP:
	case antlrcpp_oracle::PlSqlLexer::FOR:
	case antlrcpp_oracle::PlSqlLexer::WHILE:
	case antlrcpp_oracle::PlSqlLexer::RETURN:   return TR::KEYWORD_RETURN;
	case antlrcpp_oracle::PlSqlLexer::IF:
	case antlrcpp_oracle::PlSqlLexer::EXECUTE:
	case antlrcpp_oracle::PlSqlLexer::PACKAGE:
	case antlrcpp_oracle::PlSqlLexer::BODY:
	case antlrcpp_oracle::PlSqlLexer::SEQUENCE:
	case antlrcpp_oracle::PlSqlLexer::SYNONYM:
	case antlrcpp_oracle::PlSqlLexer::TRUNCATE:
	case antlrcpp_oracle::PlSqlLexer::MERGE:
	case antlrcpp_oracle::PlSqlLexer::USING:
	case antlrcpp_oracle::PlSqlLexer::MATCHED:
	case antlrcpp_oracle::PlSqlLexer::WITH:
	case antlrcpp_oracle::PlSqlLexer::UNION:
	case antlrcpp_oracle::PlSqlLexer::MINUS:
	case antlrcpp_oracle::PlSqlLexer::INTERSECT:
	case antlrcpp_oracle::PlSqlLexer::FETCH:
	case antlrcpp_oracle::PlSqlLexer::OFFSET:
	case antlrcpp_oracle::PlSqlLexer::ROWNUM:
	case antlrcpp_oracle::PlSqlLexer::ROWID:
		return TR::KEYWORD_OTHER;

		// 숫자 리터럴
	case antlrcpp_oracle::PlSqlLexer::UNSIGNED_INTEGER:    return TR::LITERAL_INTEGER;
	case antlrcpp_oracle::PlSqlLexer::APPROXIMATE_NUM_LIT: return TR::LITERAL_FLOAT;

		// 문자열 리터럴
	case antlrcpp_oracle::PlSqlLexer::CHAR_STRING:
	case antlrcpp_oracle::PlSqlLexer::NATIONAL_CHAR_STRING_LIT:
		return TR::LITERAL_STRING;

		// NULL
	case antlrcpp_oracle::PlSqlLexer::NULL_:
		return TR::LITERAL_NULL;

		// 불린
	case antlrcpp_oracle::PlSqlLexer::TRUE:
	case antlrcpp_oracle::PlSqlLexer::FALSE:
		return TR::LITERAL_BOOLEAN;

		// 비교 연산자
	case antlrcpp_oracle::PlSqlLexer::EQUALS_OP:
	case antlrcpp_oracle::PlSqlLexer::NOT_EQUAL_OP:
	case antlrcpp_oracle::PlSqlLexer::LESS_THAN_OP:
	case antlrcpp_oracle::PlSqlLexer::GREATER_THAN_OP:
		// 아래 2개는 어디서 왔을까????
	//case antlrcpp_oracle::PlSqlLexer::LESS_THAN_OR_EQUALS_OP:
	//case antlrcpp_oracle::PlSqlLexer::GREATER_THAN_OR_EQUALS_OP:
		return TR::OPERATOR_COMPARISON;

		// 산술 연산자
	case antlrcpp_oracle::PlSqlLexer::PLUS_SIGN:
	case antlrcpp_oracle::PlSqlLexer::MINUS_SIGN:
	case antlrcpp_oracle::PlSqlLexer::ASTERISK:
	case antlrcpp_oracle::PlSqlLexer::SOLIDUS:
		return TR::OPERATOR_ARITHMETIC;

		// 구분자
	case antlrcpp_oracle::PlSqlLexer::COMMA:
		return TR::SEPARATOR_COMMA;
	case antlrcpp_oracle::PlSqlLexer::PERIOD:
		return TR::SEPARATOR_DOT;
	case antlrcpp_oracle::PlSqlLexer::SEMICOLON:
		return TR::SEPARATOR_SEMICOLON;
	case antlrcpp_oracle::PlSqlLexer::LEFT_PAREN:
		return TR::SEPARATOR_PAREN_OPEN;
	case antlrcpp_oracle::PlSqlLexer::RIGHT_PAREN:
		return TR::SEPARATOR_PAREN_CLOSE;

		// 공백
	case antlrcpp_oracle::PlSqlLexer::SPACES:
		return TR::WHITESPACE;

		// 주석
	case antlrcpp_oracle::PlSqlLexer::SINGLE_LINE_COMMENT:
	case antlrcpp_oracle::PlSqlLexer::MULTI_LINE_COMMENT:
		return TR::COMMENT;

		// 파라미터/바인드 변수
	case antlrcpp_oracle::PlSqlLexer::BINDVAR:
	case antlrcpp_oracle::PlSqlLexer::COLON:
		return TR::PARAMETER;

		// 식별자
	case antlrcpp_oracle::PlSqlLexer::REGULAR_ID:
	case antlrcpp_oracle::PlSqlLexer::DELIMITED_ID:
		return TR::IDENTIFIER;

	default:
		return TR::UNKNOWN;
	}
}
std::vector<TokenInfo> SQLEngine::TokenizeQuery(const std::string& sqlQuery, int nDatabaseType)
{
	switch (static_cast<DatabaseType>(nDatabaseType))
	{
	case DatabaseType::DB_ORACLE:
		return TokenizeQueryOracle(sqlQuery);
	case DatabaseType::DB_MYSQL:
		return TokenizeQueryMySQL(sqlQuery);
	case DatabaseType::DB_SQLSERVER:
		return TokenizeQuerySQLServer(sqlQuery);
	case DatabaseType::DB_POSTGRESQL:
		return TokenizeQueryPostgreSQL(sqlQuery);
	case DatabaseType::DB_DB2:
		return TokenizeQueryDB2(sqlQuery);
	default:
		return {};
	}
}

std::vector<TokenInfo> SQLEngine::TokenizeQueryOracle(const std::string& sqlQuery)
{
	std::vector<TokenInfo> tokens;

	try {
		ANTLRInputStream input(sqlQuery);
		antlrcpp_oracle::PlSqlLexer lexer(&input);
		CommonTokenStream tokenStream(&lexer);

		// 모든 토큰 가져오기
		lexer.removeErrorListeners();
		tokenStream.fill();

		int index = 1;
		std::vector<antlr4::Token*> allTokens = tokenStream.getTokens();

		for (antlr4::Token* token : allTokens) {
			if (token->getType() == antlr4::Token::EOF) {
				break;
			}

			// 공백은 기본적으로 건너뛰기
			if (token->getType() == antlrcpp_oracle::PlSqlLexer::SPACES) {
				continue;
			}

			TokenInfo info;
			info.index = index++;
			info.text = token->getText();
			info.tokenTypeId = static_cast<size_t>(token->getType());
			info.tokenType = lexer.getVocabulary().getSymbolicName(token->getType());
			if (info.tokenType.empty()) {
				info.tokenType = lexer.getVocabulary().getLiteralName(token->getType());
			}
			info.role = GetRoleFromLexerTokenOracle(token->getType(), info.text);
			info.roleDesc = SQLEngine::TokenRoleToString(info.role);
			info.line = token->getLine();
			info.column = token->getCharPositionInLine();
			info.startIndex = token->getStartIndex();
			info.stopIndex = token->getStopIndex();

			tokens.push_back(info);
		}
	}
	catch (...) {
		// 예외 발생 시 현재까지의 토큰 반환
	}

	return tokens;
}
std::vector<TokenInfo> SQLEngine::TokenizeQueryMySQL(const std::string& sqlQuery)
{
	std::vector<TokenInfo> tokens;

	try {
		ANTLRInputStream input(sqlQuery);
		antlrcpp_mysql::MySQLLexer lexer(&input);
		CommonTokenStream tokenStream(&lexer);

		// 모든 토큰 가져오기
		lexer.removeErrorListeners();
		tokenStream.fill();

		int index = 1;
		std::vector<antlr4::Token*> allTokens = tokenStream.getTokens();

		for (antlr4::Token* token : allTokens) {
			if (token->getType() == antlr4::Token::EOF) {
				break;
			}

			// 공백은 기본적으로 건너뛰기 (필요시 포함 가능)
			if (token->getType() == antlrcpp_mysql::MySQLLexer::WHITESPACE) {
				continue;
			}

			TokenInfo info;
			info.index = index++;
			info.text = token->getText();
			info.tokenTypeId = static_cast<size_t>(token->getType());
			info.tokenType = lexer.getVocabulary().getSymbolicName(token->getType());
			if (info.tokenType.empty()) {
				info.tokenType = lexer.getVocabulary().getLiteralName(token->getType());
			}
			info.role = SQLEngine::GetRoleFromLexerTokenMySQL(token->getType(), info.text);
			info.roleDesc = SQLEngine::TokenRoleToString(info.role);
			info.line = token->getLine();
			info.column = token->getCharPositionInLine();
			info.startIndex = token->getStartIndex();
			info.stopIndex = token->getStopIndex();

			tokens.push_back(info);
		}

		// ============================================================
		// Parser를 사용하여 문맥 기반 역할 재분류
		// ============================================================
		ANTLRInputStream input2(sqlQuery);
		antlrcpp_mysql::MySQLLexer lexer2(&input2);
		CommonTokenStream tokenStream2(&lexer2);
		antlrcpp_mysql::MySQLParser parser(&tokenStream2);
		parser.removeErrorListeners();

		antlrcpp_mysql::MySQLParser::QueryContext* queryCtx = parser.query();

		if (queryCtx && parser.getNumberOfSyntaxErrors() == 0) {
			auto* simpleStmt = queryCtx->simpleStatement();
			if (simpleStmt) {
				// SELECT 문인 경우
				if (auto* selectStmt = simpleStmt->selectStatement()) {
					// fromClause에서 테이블명 추출
					// 파서 트리를 순회하여 tableRef, columnRef 등을 찾아 토큰 역할 업데이트
					// (간단한 버전: 첫 번째 FROM 이후의 첫 IDENTIFIER를 테이블명으로)
				}
			}
		}
	}
	catch (...) {
		// 예외 발생 시 현재까지의 토큰 반환
	}

	return tokens;
}

std::string SQLEngine::SqlTypeToString(SqlStatementType type)
{
	switch (type) {
	case SqlStatementType::SELECT_STATEMENT:      return "SELECT (DML)";
	case SqlStatementType::INSERT_STATEMENT:      return "INSERT (DML)";
	case SqlStatementType::UPDATE_STATEMENT:      return "UPDATE (DML)";
	case SqlStatementType::DELETE_STATEMENT:      return "DELETE (DML)";
	case SqlStatementType::MERGE_STATEMENT:       return "MERGE (DML)";
	case SqlStatementType::REPLACE_STATEMENT:     return "REPLACE (DML)";
	case SqlStatementType::CREATE_STATEMENT:      return "CREATE (DDL)";
	case SqlStatementType::ALTER_STATEMENT:       return "ALTER (DDL)";
	case SqlStatementType::DROP_STATEMENT:        return "DROP (DDL)";
	case SqlStatementType::TRUNCATE_STATEMENT:    return "TRUNCATE (DDL)";
	case SqlStatementType::GRANT_STATEMENT:       return "GRANT (DCL)";
	case SqlStatementType::REVOKE_STATEMENT:      return "REVOKE (DCL)";
	case SqlStatementType::TRANSACTION_STATEMENT: return "TRANSACTION (TCL)";
	case SqlStatementType::CALL_STATEMENT:        return "CALL (PL/SQL)";
	case SqlStatementType::CREATE_PROCEDURE:      return "CREATE PROCEDURE (PL/SQL)";
	case SqlStatementType::CREATE_FUNCTION:       return "CREATE FUNCTION (PL/SQL)";
	case SqlStatementType::CREATE_TRIGGER:        return "CREATE TRIGGER (PL/SQL)";
	case SqlStatementType::CREATE_EVENT:          return "CREATE EVENT (PL/SQL)";
	case SqlStatementType::SET_STATEMENT:         return "SET";
	case SqlStatementType::SHOW_STATEMENT:        return "SHOW";
	case SqlStatementType::USE_STATEMENT:         return "USE";
	default:                                      return "UNKNOWN";
	}
}

std::string SQLEngine::TokenRoleToString(TokenRole role)
{
	switch (role) {
		// 키워드/예약어
	case TokenRole::KEYWORD_SELECT:     return "예약어-SELECT";
	case TokenRole::KEYWORD_FROM:       return "예약어-FROM";
	case TokenRole::KEYWORD_WHERE:      return "예약어-WHERE";
	case TokenRole::KEYWORD_INSERT:     return "예약어-INSERT";
	case TokenRole::KEYWORD_UPDATE:     return "예약어-UPDATE";
	case TokenRole::KEYWORD_DELETE:     return "예약어-DELETE";
	case TokenRole::KEYWORD_INTO:       return "예약어-INTO";
	case TokenRole::KEYWORD_VALUES:     return "예약어-VALUES";
	case TokenRole::KEYWORD_SET:        return "예약어-SET";
	case TokenRole::KEYWORD_AND:        return "예약어-AND";
	case TokenRole::KEYWORD_OR:         return "예약어-OR";
	case TokenRole::KEYWORD_ORDER_BY:   return "예약어-ORDER BY";
	case TokenRole::KEYWORD_GROUP_BY:   return "예약어-GROUP BY";
	case TokenRole::KEYWORD_HAVING:     return "예약어-HAVING";
	case TokenRole::KEYWORD_JOIN:       return "예약어-JOIN";
	case TokenRole::KEYWORD_ON:         return "예약어-ON";
	case TokenRole::KEYWORD_AS:         return "예약어-AS";
	case TokenRole::KEYWORD_RETURN:     return "예약어-RETURN";
	case TokenRole::KEYWORD_OTHER:      return "예약어-기타";

		// 식별자
	case TokenRole::IDENTIFIER:         return "식별자";
	case TokenRole::COLUMN_NAME:        return "컬럼명";
	case TokenRole::TABLE_NAME:         return "테이블명";
	case TokenRole::ALIAS_NAME:         return "별칭";
	case TokenRole::SCHEMA_NAME:        return "스키마명";
	case TokenRole::FUNCTION_NAME:      return "함수명";

		// 리터럴
	case TokenRole::LITERAL_NUMBER:     return "숫자값";
	case TokenRole::LITERAL_INTEGER:    return "정수값";
	case TokenRole::LITERAL_FLOAT:      return "실수값";
	case TokenRole::LITERAL_STRING:     return "문자열값";
	case TokenRole::LITERAL_NULL:       return "NULL값";
	case TokenRole::LITERAL_BOOLEAN:    return "불린값";

		// 연산자
	case TokenRole::OPERATOR_COMPARISON: return "비교연산자";
	case TokenRole::OPERATOR_ARITHMETIC: return "산술연산자";
	case TokenRole::OPERATOR_LOGICAL:    return "논리연산자";

		// 구분자
	case TokenRole::SEPARATOR_COMMA:       return "구분자-쉼표";
	case TokenRole::SEPARATOR_DOT:         return "구분자-점";
	case TokenRole::SEPARATOR_SEMICOLON:   return "구분자-세미콜론";
	case TokenRole::SEPARATOR_PAREN_OPEN:  return "구분자-여는괄호";
	case TokenRole::SEPARATOR_PAREN_CLOSE: return "구분자-닫는괄호";

		// 기타
	case TokenRole::WHITESPACE:         return "공백";
	case TokenRole::COMMENT:            return "주석";
	case TokenRole::PARAMETER:          return "파라미터";

	default:                            return "알수없음";
	}
}

// GSP TokenTypeComment { get_ttsimplecomment, get_ttbracketedcomment, get_ttsemicolon } 대응
// 단일 행 주석(--)  / 다중 행 주석(/* */) / 세미콜론(;) 여부 반환
bool SQLEngine::IsCommentType(const TokenInfo& stToken)
{
	// 단일 행 주석 (--)
	// 다중 행 주석 (/* ... */)
	//   - 두 타입 모두 TokenRole::COMMENT 로 매핑됨
	if (stToken.role == TokenRole::COMMENT)
		return true;

	// 세미콜론 (;)
	if (stToken.role == TokenRole::SEPARATOR_SEMICOLON)
		return true;

	return false;
}

// 1. MySQL용 내부 도우미 함수 (static으로 선언하여 외부 노출 차단)
// 인자 타입에 antlrcpp_mysql 네임스페이스를 명시합니다.
static SqlStatementType IdentifyFromSimpleStatementMySQL(antlrcpp_mysql::MySQLParser::SimpleStatementContext* simpleStmt)
{
	if (!simpleStmt) return SqlStatementType::UNKNOWN;

	// DML 체크
	if (simpleStmt->selectStatement())  return SqlStatementType::SELECT_STATEMENT;
	if (simpleStmt->insertStatement())  return SqlStatementType::INSERT_STATEMENT;
	if (simpleStmt->updateStatement())  return SqlStatementType::UPDATE_STATEMENT;
	if (simpleStmt->deleteStatement())  return SqlStatementType::DELETE_STATEMENT;
	if (simpleStmt->replaceStatement()) return SqlStatementType::REPLACE_STATEMENT;

	// DDL 체크 (CREATE, ALTER, DROP)
	if (auto* createStmt = simpleStmt->createStatement()) 
	{
		if (createStmt->createProcedure()) return SqlStatementType::CREATE_PROCEDURE;
		if (createStmt->createFunction())  return SqlStatementType::CREATE_FUNCTION;
		if (createStmt->createTrigger())   return SqlStatementType::CREATE_TRIGGER;
		if (createStmt->createEvent())     return SqlStatementType::CREATE_EVENT;
		return SqlStatementType::CREATE_STATEMENT;
	}

	if (simpleStmt->alterStatement())         return SqlStatementType::ALTER_STATEMENT;
	if (simpleStmt->dropStatement())          return SqlStatementType::DROP_STATEMENT;
	if (simpleStmt->truncateTableStatement()) return SqlStatementType::TRUNCATE_STATEMENT;

	// DCL 체크 (GRANT, REVOKE)
	if (auto* accountStmt = simpleStmt->accountManagementStatement()) 
	{
		if (accountStmt->grantStatement())  return SqlStatementType::GRANT_STATEMENT;
		if (accountStmt->revokeStatement()) return SqlStatementType::REVOKE_STATEMENT;
	}

	// TCL, CALL, SET, SHOW... (기존 로직 그대로 복사)
	if (simpleStmt->transactionOrLockingStatement()) return SqlStatementType::TRANSACTION_STATEMENT;
	if (simpleStmt->callStatement())                  return SqlStatementType::CALL_STATEMENT;
	if (simpleStmt->setStatement())                   return SqlStatementType::SET_STATEMENT;

	if (simpleStmt->showDatabasesStatement() || simpleStmt->showTablesStatement() ||
		simpleStmt->showColumnsStatement() || simpleStmt->showStatusStatement()) 
	{
		return SqlStatementType::SHOW_STATEMENT;
	}

	if (simpleStmt->utilityStatement()) return SqlStatementType::USE_STATEMENT;

	return SqlStatementType::UNKNOWN;
}
std::vector<SqlStatementInfo> SQLEngine::ParseMultipleQueriesMySQL(const std::string& sqlQueries)
{
	std::vector<SqlStatementInfo> results;

	try
	{
		// 렉서로 전체 토큰화 후 SEMICOLON_SYMBOL 기준으로 문장 분리
		// parser.queries() 방식 대신 토큰 스트림을 직접 순회하여 안정성 확보
		antlr4::ANTLRInputStream input(sqlQueries);
		antlrcpp_mysql::MySQLLexer lexer(&input);
		antlr4::CommonTokenStream tokenStream(&lexer);

		lexer.removeErrorListeners();
		tokenStream.fill();

		const std::vector<antlr4::Token*>& vecAllTokens = tokenStream.getTokens();

		int nIndex = 1;
		bool bInStmt = false;
		size_t nStmtStartChar = 0;
		size_t nStmtStartLine = 1;
		size_t nStmtStartCol  = 0;
		size_t nLastStopChar  = 0;

		for (size_t i = 0; i < vecAllTokens.size(); i++)
		{
			antlr4::Token* pTok = vecAllTokens[i];
			if (!pTok)
				continue;

			int nTokType = static_cast<int>(pTok->getType());

			// EOF: 세미콜론 없이 끝나는 마지막 문장 처리
			if (nTokType == static_cast<int>(antlr4::Token::EOF))
			{
				if (bInStmt)
				{
					SqlStatementInfo stInfo;
					stInfo.index       = nIndex++;
					stInfo.sqlText     = sqlQueries.substr(nStmtStartChar, nLastStopChar - nStmtStartChar + 1);
					stInfo.startLine   = nStmtStartLine;
					stInfo.startColumn = nStmtStartCol;
					stInfo.type        = IdentifySqlTypeMySQL(stInfo.sqlText);
					results.push_back(stInfo);
					bInStmt = false;
				}
				break;
			}

			// 공백 건너뜀
			if (nTokType == static_cast<int>(antlrcpp_mysql::MySQLLexer::WHITESPACE))
				continue;

			// SEMICOLON: 현재 문장 종료
			if (nTokType == static_cast<int>(antlrcpp_mysql::MySQLLexer::SEMICOLON_SYMBOL))
			{
				if (bInStmt)
				{
					SqlStatementInfo stInfo;
					stInfo.index       = nIndex++;
					stInfo.sqlText     = sqlQueries.substr(nStmtStartChar, nLastStopChar - nStmtStartChar + 1);
					stInfo.startLine   = nStmtStartLine;
					stInfo.startColumn = nStmtStartCol;
					stInfo.type        = IdentifySqlTypeMySQL(stInfo.sqlText);
					results.push_back(stInfo);
					bInStmt = false;
				}
				continue;
			}

			// 일반 토큰: 문장 범위 갱신
			if (!bInStmt)
			{
				nStmtStartChar = pTok->getStartIndex();
				nStmtStartLine = pTok->getLine();
				nStmtStartCol  = pTok->getCharPositionInLine();
				bInStmt = true;
			}
			nLastStopChar = pTok->getStopIndex();
		}
	}
	catch (...) {}

	for (auto& stInfo : results)
	{
		if (!stInfo.sqlText.empty())
			stInfo.bHasError = CheckSyntaxErrorMySQL(stInfo.sqlText);
	}

	// 서브쿼리 수집 (MySQL은 토큰 기반 분리이므로 각 문장을 재파싱)
	for (auto& stInfo : results)
	{
		if (stInfo.sqlText.empty())
			continue;
		try
		{
			ANTLRInputStream subInput(stInfo.sqlText);
			antlrcpp_mysql::MySQLLexer subLexer(&subInput);
			CommonTokenStream subTokens(&subLexer);
			antlrcpp_mysql::MySQLParser subParser(&subTokens);
			subLexer.removeErrorListeners();
			subParser.removeErrorListeners();

			auto* pQueryCtx = subParser.query();
			if (pQueryCtx)
			{
				std::vector<antlrcpp_mysql::MySQLParser::SubqueryContext*> vecSubCtxs;
				CollectSubQueryContextsDeep<antlrcpp_mysql::MySQLParser::SubqueryContext>(pQueryCtx, vecSubCtxs);
				stInfo.bHasSubQuery = !vecSubCtxs.empty();
				int nSubIdx = 1;
				for (auto* pSub : vecSubCtxs)
					stInfo.vecSubQueries.push_back(BuildSubQueryInfoFromCtx(pSub, stInfo.sqlText, nSubIdx++));
			}
		}
		catch (...) {}
	}

	return results;
}



SqlStatementType SQLEngine::IdentifySqlTypeMySQL(const std::string& sqlQuery)
{
	try {
		ANTLRInputStream input(sqlQuery);
		antlrcpp_mysql::MySQLLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_mysql::MySQLParser parser(&tokens);

		lexer.removeErrorListeners();
		parser.removeErrorListeners();

		antlrcpp_mysql::MySQLParser::QueryContext* queryCtx = parser.query();
		if (!queryCtx)
			return SqlStatementType::UNKNOWN;

		auto* simpleStmt = queryCtx->simpleStatement();
		if (!simpleStmt)
			return SqlStatementType::UNKNOWN;

		// 파서 오류 여부와 무관하게 파싱 컨텍스트로 타입 식별 먼저 시도

		// DML 체크
		if (simpleStmt->selectStatement()) 			return SqlStatementType::SELECT_STATEMENT;
		if (simpleStmt->insertStatement())			return SqlStatementType::INSERT_STATEMENT;
		if (simpleStmt->updateStatement())			return SqlStatementType::UPDATE_STATEMENT;
		if (simpleStmt->deleteStatement())			return SqlStatementType::DELETE_STATEMENT;
		if (simpleStmt->replaceStatement())			return SqlStatementType::REPLACE_STATEMENT;

		// DDL 체크 (CREATE, ALTER, DROP)
		if (auto* createStmt = simpleStmt->createStatement())
		{
			// PL/SQL 관련 CREATE 문 세분화
			if (createStmt->createProcedure())			return SqlStatementType::CREATE_PROCEDURE;
			if (createStmt->createFunction()) 			return SqlStatementType::CREATE_FUNCTION;
			if (createStmt->createTrigger()) 			return SqlStatementType::CREATE_TRIGGER;
			if (createStmt->createEvent()) 				return SqlStatementType::CREATE_EVENT;
			return SqlStatementType::CREATE_STATEMENT;
		}
		if (simpleStmt->alterStatement()) 			return SqlStatementType::ALTER_STATEMENT;
		if (simpleStmt->dropStatement()) 			return SqlStatementType::DROP_STATEMENT;
		if (simpleStmt->truncateTableStatement()) 	return SqlStatementType::TRUNCATE_STATEMENT;

		// DCL 체크 (GRANT, REVOKE)
		if (auto* accountStmt = simpleStmt->accountManagementStatement())
		{
			if (accountStmt->grantStatement()) 			return SqlStatementType::GRANT_STATEMENT;
			if (accountStmt->revokeStatement()) 		return SqlStatementType::REVOKE_STATEMENT;
		}

		// TCL 체크 (BEGIN, COMMIT, ROLLBACK 등)
		if (simpleStmt->transactionOrLockingStatement()) 		return SqlStatementType::TRANSACTION_STATEMENT;

		// PL/SQL: CALL 문
		if (simpleStmt->callStatement()) 		return SqlStatementType::CALL_STATEMENT;

		// SET 문
		if (simpleStmt->setStatement()) 		return SqlStatementType::SET_STATEMENT;

		// SHOW 문들 체크
		if (simpleStmt->showDatabasesStatement() ||
			simpleStmt->showTablesStatement() ||
			simpleStmt->showColumnsStatement() ||
			simpleStmt->showStatusStatement() ||
			simpleStmt->showVariablesStatement() ||
			simpleStmt->showGrantsStatement() ||
			simpleStmt->showCreateTableStatement() ||
			simpleStmt->showCreateDatabaseStatement())
			return SqlStatementType::SHOW_STATEMENT;

		// USE 문 (utilityStatement 내부)
		if (simpleStmt->utilityStatement()) 			return SqlStatementType::USE_STATEMENT;

		// 컨텍스트로 식별 못하고 파서 오류도 있으면 텍스트 기반 폴백
		if (parser.getNumberOfSyntaxErrors() > 0)
		{
			std::string szUpper = sqlQuery;
			std::transform(szUpper.begin(), szUpper.end(), szUpper.begin(), ::toupper);
			size_t nPos = szUpper.find_first_not_of(" \t\r\n");
			if (nPos != std::string::npos)
			{
				if (szUpper.compare(nPos, 7,  "SELECT ") == 0)  return SqlStatementType::SELECT_STATEMENT;
				if (szUpper.compare(nPos, 7,  "INSERT ") == 0)  return SqlStatementType::INSERT_STATEMENT;
				if (szUpper.compare(nPos, 7,  "UPDATE ") == 0)  return SqlStatementType::UPDATE_STATEMENT;
				if (szUpper.compare(nPos, 7,  "DELETE ") == 0)  return SqlStatementType::DELETE_STATEMENT;
				if (szUpper.compare(nPos, 8,  "REPLACE ") == 0) return SqlStatementType::REPLACE_STATEMENT;
				if (szUpper.compare(nPos, 7,  "CREATE ") == 0)  return SqlStatementType::CREATE_STATEMENT;
				if (szUpper.compare(nPos, 6,  "ALTER ") == 0)   return SqlStatementType::ALTER_STATEMENT;
				if (szUpper.compare(nPos, 5,  "DROP ") == 0)    return SqlStatementType::DROP_STATEMENT;
				if (szUpper.compare(nPos, 6,  "GRANT ") == 0)   return SqlStatementType::GRANT_STATEMENT;
				if (szUpper.compare(nPos, 7,  "REVOKE ") == 0)  return SqlStatementType::REVOKE_STATEMENT;
				if (szUpper.compare(nPos, 9,  "TRUNCATE ") == 0) return SqlStatementType::TRUNCATE_STATEMENT;
			}
		}
	}
	catch (...) {
		return SqlStatementType::UNKNOWN;
	}

	return SqlStatementType::UNKNOWN;
}

SqlStatementInfo SQLEngine::GetQueryAtMySQL(const std::string& sqlQueries, size_t index)
{
	SqlStatementInfo emptyInfo = { -1, SqlStatementType::UNKNOWN, "", 0, 0 };

	try {
		ANTLRInputStream input(sqlQueries);
		antlrcpp_mysql::MySQLLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_mysql::MySQLParser parser(&tokens);

		parser.removeErrorListeners();

		antlrcpp_mysql::MySQLParser::QueriesContext* queriesCtx = parser.queries();
		if (!queriesCtx) {
			return emptyInfo;
		}

		// 특정 인덱스의 쿼리 가져오기
		antlrcpp_mysql::MySQLParser::QueryContext* queryCtx = queriesCtx->query(index);
		if (!queryCtx) {
			return emptyInfo;
		}

		SqlStatementInfo info;
		info.index = static_cast<int>(index + 1);  // 1부터 시작하는 인덱스

		auto* simpleStmt = queryCtx->simpleStatement();
		info.type = IdentifyFromSimpleStatementMySQL(simpleStmt);

		if (simpleStmt) {
			antlr4::Token* startToken = simpleStmt->getStart();
			antlr4::Token* stopToken = simpleStmt->getStop();

			if (startToken && stopToken) {
				info.startLine = startToken->getLine();
				info.startColumn = startToken->getCharPositionInLine();

				size_t startIdx = startToken->getStartIndex();
				size_t stopIdx = stopToken->getStopIndex();
				if (startIdx != INVALID_INDEX && stopIdx != INVALID_INDEX && stopIdx >= startIdx) {
					info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
				}
			}
		}

		return info;
	}
	catch (...) {
		return emptyInfo;
	}
}
TokenRole SQLEngine::GetRoleFromLexerTokenMySQL(size_t tokenType, const std::string& tokenText) const
{
	using TR = TokenRole;

	// antlrcpp_mysql::MySQLLexer의 토큰 타입 상수 사용
	switch (tokenType) {
		// 키워드들
	case antlrcpp_mysql::MySQLLexer::SELECT_SYMBOL:    return TR::KEYWORD_SELECT;
	case antlrcpp_mysql::MySQLLexer::FROM_SYMBOL:      return TR::KEYWORD_FROM;
	case antlrcpp_mysql::MySQLLexer::WHERE_SYMBOL:     return TR::KEYWORD_WHERE;
	case antlrcpp_mysql::MySQLLexer::INSERT_SYMBOL:    return TR::KEYWORD_INSERT;
	case antlrcpp_mysql::MySQLLexer::UPDATE_SYMBOL:    return TR::KEYWORD_UPDATE;
	case antlrcpp_mysql::MySQLLexer::DELETE_SYMBOL:    return TR::KEYWORD_DELETE;
	case antlrcpp_mysql::MySQLLexer::INTO_SYMBOL:      return TR::KEYWORD_INTO;
	case antlrcpp_mysql::MySQLLexer::VALUES_SYMBOL:    return TR::KEYWORD_VALUES;
	case antlrcpp_mysql::MySQLLexer::SET_SYMBOL:       return TR::KEYWORD_SET;
	case antlrcpp_mysql::MySQLLexer::AND_SYMBOL:       return TR::KEYWORD_AND;
	case antlrcpp_mysql::MySQLLexer::OR_SYMBOL:        return TR::KEYWORD_OR;
	case antlrcpp_mysql::MySQLLexer::ORDER_SYMBOL:     return TR::KEYWORD_ORDER_BY;
	case antlrcpp_mysql::MySQLLexer::GROUP_SYMBOL:     return TR::KEYWORD_GROUP_BY;
	case antlrcpp_mysql::MySQLLexer::HAVING_SYMBOL:    return TR::KEYWORD_HAVING;
	case antlrcpp_mysql::MySQLLexer::JOIN_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::INNER_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::LEFT_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::RIGHT_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::OUTER_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::CROSS_SYMBOL:     return TR::KEYWORD_JOIN;
	case antlrcpp_mysql::MySQLLexer::ON_SYMBOL:        return TR::KEYWORD_ON;
	case antlrcpp_mysql::MySQLLexer::AS_SYMBOL:        return TR::KEYWORD_AS;

		// 기타 예약어들
	case antlrcpp_mysql::MySQLLexer::CREATE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::ALTER_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::DROP_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::TABLE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::DATABASE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::INDEX_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::VIEW_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::PROCEDURE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::FUNCTION_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::TRIGGER_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::GRANT_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::REVOKE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::BEGIN_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::COMMIT_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::ROLLBACK_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::DISTINCT_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::ALL_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::LIMIT_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::OFFSET_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::BY_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::ASC_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::DESC_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::LIKE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::IN_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::BETWEEN_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::IS_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::NOT_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::EXISTS_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::CASE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::WHEN_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::THEN_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::ELSE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::END_SYMBOL:
		return TR::KEYWORD_OTHER;
	case antlrcpp_mysql::MySQLLexer::RETURN_SYMBOL: return TR::KEYWORD_RETURN;

		// 숫자 리터럴
	case antlrcpp_mysql::MySQLLexer::INT_NUMBER:
	case antlrcpp_mysql::MySQLLexer::LONG_NUMBER:
	case antlrcpp_mysql::MySQLLexer::ULONGLONG_NUMBER:
		return TR::LITERAL_INTEGER;
	case antlrcpp_mysql::MySQLLexer::DECIMAL_NUMBER:
	case antlrcpp_mysql::MySQLLexer::FLOAT_NUMBER:
		return TR::LITERAL_FLOAT;

		// 문자열 리터럴
	case antlrcpp_mysql::MySQLLexer::SINGLE_QUOTED_TEXT:
	case antlrcpp_mysql::MySQLLexer::DOUBLE_QUOTED_TEXT:
		return TR::LITERAL_STRING;

		// NULL
	case antlrcpp_mysql::MySQLLexer::NULL_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::NULL2_SYMBOL:
		return TR::LITERAL_NULL;

		// 불린
	case antlrcpp_mysql::MySQLLexer::TRUE_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::FALSE_SYMBOL:
		return TR::LITERAL_BOOLEAN;

		// 비교 연산자
	case antlrcpp_mysql::MySQLLexer::EQUAL_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::NOT_EQUAL_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::LESS_THAN_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::GREATER_THAN_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::LESS_OR_EQUAL_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::GREATER_OR_EQUAL_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::NULL_SAFE_EQUAL_OPERATOR:
		return TR::OPERATOR_COMPARISON;

		// 산술 연산자
	case antlrcpp_mysql::MySQLLexer::PLUS_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::MINUS_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::MULT_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::DIV_OPERATOR:
	case antlrcpp_mysql::MySQLLexer::MOD_OPERATOR:
		return TR::OPERATOR_ARITHMETIC;

		// 구분자
	case antlrcpp_mysql::MySQLLexer::COMMA_SYMBOL:
		return TR::SEPARATOR_COMMA;
	case antlrcpp_mysql::MySQLLexer::DOT_SYMBOL:
		return TR::SEPARATOR_DOT;
	case antlrcpp_mysql::MySQLLexer::SEMICOLON_SYMBOL:
		return TR::SEPARATOR_SEMICOLON;
	case antlrcpp_mysql::MySQLLexer::OPEN_PAR_SYMBOL:
		return TR::SEPARATOR_PAREN_OPEN;
	case antlrcpp_mysql::MySQLLexer::CLOSE_PAR_SYMBOL:
		return TR::SEPARATOR_PAREN_CLOSE;

		// 공백
	case antlrcpp_mysql::MySQLLexer::WHITESPACE:
		return TR::WHITESPACE;

		// 주석
	case antlrcpp_mysql::MySQLLexer::BLOCK_COMMENT:
	case antlrcpp_mysql::MySQLLexer::POUND_COMMENT:
	case antlrcpp_mysql::MySQLLexer::DASHDASH_COMMENT:
		return TR::COMMENT;

		// 파라미터
	case antlrcpp_mysql::MySQLLexer::PARAM_MARKER:
	case antlrcpp_mysql::MySQLLexer::AT_SIGN_SYMBOL:
	case antlrcpp_mysql::MySQLLexer::AT_AT_SIGN_SYMBOL:
		return TR::PARAMETER;

		// 식별자
	case antlrcpp_mysql::MySQLLexer::IDENTIFIER:
	case antlrcpp_mysql::MySQLLexer::BACK_TICK_QUOTED_ID:
		return TR::IDENTIFIER;

	default:
		return TR::UNKNOWN;
	}
}

// ============================================================
// SQL Server (TSql) 관련 함수들
// ============================================================

// SQL Server용 내부 도우미: sql_clauses에서 문장 유형 식별
static SqlStatementType IdentifyFromSqlClausesSQLServer(antlrcpp_sqlserver::TSqlParser::Sql_clausesContext* sqlClauses)
{
	if (!sqlClauses) return SqlStatementType::UNKNOWN;

	// DML 체크
	if (auto* dmlClause = sqlClauses->dml_clause()) {
		if (dmlClause->select_statement_standalone()) return SqlStatementType::SELECT_STATEMENT;
		if (dmlClause->insert_statement())            return SqlStatementType::INSERT_STATEMENT;
		if (dmlClause->update_statement())             return SqlStatementType::UPDATE_STATEMENT;
		if (dmlClause->delete_statement())             return SqlStatementType::DELETE_STATEMENT;
	}

	// DDL 체크
	if (auto* ddlClause = sqlClauses->ddl_clause()) {
		// CREATE 문들
		if (ddlClause->create_table())     return SqlStatementType::CREATE_STATEMENT;
		if (ddlClause->create_index())     return SqlStatementType::CREATE_STATEMENT;
		if (ddlClause->create_database())  return SqlStatementType::CREATE_STATEMENT;
		if (ddlClause->create_sequence())  return SqlStatementType::CREATE_STATEMENT;
		if (ddlClause->create_synonym())   return SqlStatementType::CREATE_STATEMENT;
		if (ddlClause->create_schema())    return SqlStatementType::CREATE_STATEMENT;
		if (ddlClause->create_type())      return SqlStatementType::CREATE_STATEMENT;

		// ALTER 문들
		if (ddlClause->alter_table())      return SqlStatementType::ALTER_STATEMENT;
		if (ddlClause->alter_database())   return SqlStatementType::ALTER_STATEMENT;
		if (ddlClause->alter_sequence())   return SqlStatementType::ALTER_STATEMENT;

		// DROP 문들
		if (ddlClause->drop_table())       return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_index())       return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_database())    return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_function())    return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_procedure())   return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_trigger())     return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_view())        return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_sequence())    return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_synonym())     return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_schema())      return SqlStatementType::DROP_STATEMENT;
		if (ddlClause->drop_user())        return SqlStatementType::DROP_STATEMENT;

		// TRUNCATE
		if (ddlClause->truncate_table())   return SqlStatementType::TRUNCATE_STATEMENT;

		return SqlStatementType::CREATE_STATEMENT;  // 기타 DDL
	}

	// CFL (Control-of-Flow) 문
	if (sqlClauses->cfl_statement()) {
		return SqlStatementType::CALL_STATEMENT;  // BEGIN...END, IF, WHILE 등
	}

	// another_statement (EXECUTE, SET, USE, GRANT/REVOKE, TCL 등)
	if (auto* anotherStmt = sqlClauses->another_statement()) {
		if (anotherStmt->execute_statement())      return SqlStatementType::CALL_STATEMENT;
		if (anotherStmt->set_statement())           return SqlStatementType::SET_STATEMENT;
		if (anotherStmt->use_statement())           return SqlStatementType::USE_STATEMENT;
		if (anotherStmt->transaction_statement())   return SqlStatementType::TRANSACTION_STATEMENT;
		if (anotherStmt->security_statement())      return SqlStatementType::GRANT_STATEMENT;
		if (anotherStmt->declare_statement())       return SqlStatementType::CALL_STATEMENT;
	}

	return SqlStatementType::UNKNOWN;
}

// SQL Server용 내부 도우미: batch_level_statement에서 문장 유형 식별
static SqlStatementType IdentifyFromBatchLevelSQLServer(antlrcpp_sqlserver::TSqlParser::Batch_level_statementContext* batchLevel)
{
	if (!batchLevel) return SqlStatementType::UNKNOWN;

	if (batchLevel->create_or_alter_procedure()) return SqlStatementType::CREATE_PROCEDURE;
	if (batchLevel->create_or_alter_function())  return SqlStatementType::CREATE_FUNCTION;
	if (batchLevel->create_or_alter_trigger())   return SqlStatementType::CREATE_TRIGGER;
	if (batchLevel->create_view())               return SqlStatementType::CREATE_STATEMENT;

	return SqlStatementType::UNKNOWN;
}

std::vector<SqlStatementInfo> SQLEngine::ParseMultipleQueriesSQLServer(const std::string& sqlQueries)
{
	std::vector<SqlStatementInfo> results;

	try {
		ANTLRInputStream input(sqlQueries);
		antlrcpp_sqlserver::TSqlLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_sqlserver::TSqlParser parser(&tokens);

		parser.removeErrorListeners();
		lexer.removeErrorListeners();

		// tsql_file() -> batch() 목록
		antlrcpp_sqlserver::TSqlParser::Tsql_fileContext* fileCtx = parser.tsql_file();
		if (!fileCtx) return results;

		auto batchList = fileCtx->batch();
		int index = 1;

		for (auto* batchCtx : batchList) {
			if (!batchCtx) continue;

			// batch_level_statement (CREATE PROCEDURE/FUNCTION/TRIGGER/VIEW)
			if (auto* batchLevel = batchCtx->batch_level_statement()) {
				SqlStatementInfo info;
				info.index = index++;
				info.type = IdentifyFromBatchLevelSQLServer(batchLevel);

				antlr4::Token* startToken = batchLevel->getStart();
				antlr4::Token* stopToken = batchLevel->getStop();
				if (startToken && stopToken) {
					info.startLine = startToken->getLine();
					info.startColumn = startToken->getCharPositionInLine();
					size_t startIdx = startToken->getStartIndex();
					size_t stopIdx = stopToken->getStopIndex();
					if (startIdx != (size_t)-1 && stopIdx != (size_t)-1 && stopIdx >= startIdx) {
						info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
					}
				}
				// [SQLServer] batchLevel subquery collection
				{
					std::vector<antlrcpp_sqlserver::TSqlParser::SubqueryContext*> vecSubCtxs;
					CollectSubQueryContextsDeep<antlrcpp_sqlserver::TSqlParser::SubqueryContext>(batchLevel, vecSubCtxs);
					info.bHasSubQuery = !vecSubCtxs.empty();
					int nSubIdx = 1;
					for (auto* pSub : vecSubCtxs)
						info.vecSubQueries.push_back(BuildSubQueryInfoFromCtx(pSub, sqlQueries, nSubIdx++));
				}

				results.push_back(info);
			}

			// sql_clauses 목록 (일반 SQL문)
			auto sqlClausesList = batchCtx->sql_clauses();
			for (auto* sqlClauses : sqlClausesList) {
				if (!sqlClauses) continue;

				SqlStatementInfo info;
				info.index = index++;
				info.type = IdentifyFromSqlClausesSQLServer(sqlClauses);

				antlr4::Token* startToken = sqlClauses->getStart();
				antlr4::Token* stopToken = sqlClauses->getStop();
				if (startToken && stopToken) {
					info.startLine = startToken->getLine();
					info.startColumn = startToken->getCharPositionInLine();
					size_t startIdx = startToken->getStartIndex();
					size_t stopIdx = stopToken->getStopIndex();
					if (startIdx != (size_t)-1 && stopIdx != (size_t)-1 && stopIdx >= startIdx) {
						info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
					}
				}
				// [SQLServer] sqlClauses 서브쿼리 수집
				{
					std::vector<antlrcpp_sqlserver::TSqlParser::SubqueryContext*> vecSubCtxs;
					CollectSubQueryContextsDeep<antlrcpp_sqlserver::TSqlParser::SubqueryContext>(sqlClauses, vecSubCtxs);
					info.bHasSubQuery = !vecSubCtxs.empty();
					int nSubIdx = 1;
					for (auto* pSub : vecSubCtxs)
						info.vecSubQueries.push_back(BuildSubQueryInfoFromCtx(pSub, sqlQueries, nSubIdx++));
				}

				results.push_back(info);
			}
		}
	}
	catch (...) {}

	for (auto& stInfo : results)
	{
		if (!stInfo.sqlText.empty())
			stInfo.bHasError = CheckSyntaxErrorSQLServer(stInfo.sqlText);
	}

	return results;
}

TokenRole SQLEngine::GetRoleFromLexerTokenSQLServer(size_t tokenType, const std::string& tokenText) const
{
	using TR = TokenRole;

	switch (tokenType) {
		// 키워드들
	case antlrcpp_sqlserver::TSqlLexer::SELECT:     return TR::KEYWORD_SELECT;
	case antlrcpp_sqlserver::TSqlLexer::FROM:       return TR::KEYWORD_FROM;
	case antlrcpp_sqlserver::TSqlLexer::WHERE:      return TR::KEYWORD_WHERE;
	case antlrcpp_sqlserver::TSqlLexer::INSERT:     return TR::KEYWORD_INSERT;
	case antlrcpp_sqlserver::TSqlLexer::UPDATE:     return TR::KEYWORD_UPDATE;
	case antlrcpp_sqlserver::TSqlLexer::DELETE:     return TR::KEYWORD_DELETE;
	case antlrcpp_sqlserver::TSqlLexer::INTO:       return TR::KEYWORD_INTO;
	case antlrcpp_sqlserver::TSqlLexer::VALUES:     return TR::KEYWORD_VALUES;
	case antlrcpp_sqlserver::TSqlLexer::SET:        return TR::KEYWORD_SET;
	case antlrcpp_sqlserver::TSqlLexer::AND:        return TR::KEYWORD_AND;
	case antlrcpp_sqlserver::TSqlLexer::OR:         return TR::KEYWORD_OR;
	case antlrcpp_sqlserver::TSqlLexer::ORDER:      return TR::KEYWORD_ORDER_BY;
	case antlrcpp_sqlserver::TSqlLexer::GROUP:      return TR::KEYWORD_GROUP_BY;
	case antlrcpp_sqlserver::TSqlLexer::HAVING:     return TR::KEYWORD_HAVING;
	case antlrcpp_sqlserver::TSqlLexer::JOIN:
	case antlrcpp_sqlserver::TSqlLexer::INNER:
	case antlrcpp_sqlserver::TSqlLexer::LEFT:
	case antlrcpp_sqlserver::TSqlLexer::RIGHT:
	case antlrcpp_sqlserver::TSqlLexer::OUTER:
	case antlrcpp_sqlserver::TSqlLexer::CROSS:
	case antlrcpp_sqlserver::TSqlLexer::FULL:       return TR::KEYWORD_JOIN;
	case antlrcpp_sqlserver::TSqlLexer::ON:         return TR::KEYWORD_ON;
	case antlrcpp_sqlserver::TSqlLexer::AS:         return TR::KEYWORD_AS;

		// 기타 예약어들
	case antlrcpp_sqlserver::TSqlLexer::CREATE:
	case antlrcpp_sqlserver::TSqlLexer::ALTER:
	case antlrcpp_sqlserver::TSqlLexer::DROP:
	case antlrcpp_sqlserver::TSqlLexer::TABLE:
	case antlrcpp_sqlserver::TSqlLexer::DATABASE:
	case antlrcpp_sqlserver::TSqlLexer::INDEX:
	case antlrcpp_sqlserver::TSqlLexer::VIEW:
	case antlrcpp_sqlserver::TSqlLexer::PROCEDURE:
	case antlrcpp_sqlserver::TSqlLexer::FUNCTION:
	case antlrcpp_sqlserver::TSqlLexer::TRIGGER:
	case antlrcpp_sqlserver::TSqlLexer::GRANT:
	case antlrcpp_sqlserver::TSqlLexer::REVOKE:
	case antlrcpp_sqlserver::TSqlLexer::BEGIN:
	case antlrcpp_sqlserver::TSqlLexer::COMMIT:
	case antlrcpp_sqlserver::TSqlLexer::ROLLBACK:
	case antlrcpp_sqlserver::TSqlLexer::DISTINCT:
	case antlrcpp_sqlserver::TSqlLexer::ALL:
	case antlrcpp_sqlserver::TSqlLexer::BY:
	case antlrcpp_sqlserver::TSqlLexer::ASC:
	case antlrcpp_sqlserver::TSqlLexer::DESC:
	case antlrcpp_sqlserver::TSqlLexer::LIKE:
	case antlrcpp_sqlserver::TSqlLexer::IN:
	case antlrcpp_sqlserver::TSqlLexer::BETWEEN:
	case antlrcpp_sqlserver::TSqlLexer::IS:
	case antlrcpp_sqlserver::TSqlLexer::NOT:
	case antlrcpp_sqlserver::TSqlLexer::EXISTS:
	case antlrcpp_sqlserver::TSqlLexer::CASE:
	case antlrcpp_sqlserver::TSqlLexer::WHEN:
	case antlrcpp_sqlserver::TSqlLexer::THEN:
	case antlrcpp_sqlserver::TSqlLexer::ELSE:
	case antlrcpp_sqlserver::TSqlLexer::END:
	case antlrcpp_sqlserver::TSqlLexer::DECLARE:
	case antlrcpp_sqlserver::TSqlLexer::CURSOR:
	case antlrcpp_sqlserver::TSqlLexer::FOR:
	case antlrcpp_sqlserver::TSqlLexer::WHILE:
	case antlrcpp_sqlserver::TSqlLexer::RETURN:   return TR::KEYWORD_RETURN;
	case antlrcpp_sqlserver::TSqlLexer::IF:
	case antlrcpp_sqlserver::TSqlLexer::EXECUTE:
	case antlrcpp_sqlserver::TSqlLexer::SEQUENCE:
	case antlrcpp_sqlserver::TSqlLexer::TRUNCATE:
	case antlrcpp_sqlserver::TSqlLexer::MERGE:
	case antlrcpp_sqlserver::TSqlLexer::USING:
	case antlrcpp_sqlserver::TSqlLexer::WITH:
	case antlrcpp_sqlserver::TSqlLexer::UNION:
	case antlrcpp_sqlserver::TSqlLexer::INTERSECT:
	case antlrcpp_sqlserver::TSqlLexer::EXCEPT:
	case antlrcpp_sqlserver::TSqlLexer::FETCH:
	case antlrcpp_sqlserver::TSqlLexer::OFFSET:
	case antlrcpp_sqlserver::TSqlLexer::TOP:
	case antlrcpp_sqlserver::TSqlLexer::CONSTRAINT:
	case antlrcpp_sqlserver::TSqlLexer::DEFAULT:
	case antlrcpp_sqlserver::TSqlLexer::CHECK:
	case antlrcpp_sqlserver::TSqlLexer::PRIMARY:
	case antlrcpp_sqlserver::TSqlLexer::FOREIGN:
	case antlrcpp_sqlserver::TSqlLexer::REFERENCES:
	case antlrcpp_sqlserver::TSqlLexer::CLUSTERED:
	case antlrcpp_sqlserver::TSqlLexer::GO:
	case antlrcpp_sqlserver::TSqlLexer::USE:
	case antlrcpp_sqlserver::TSqlLexer::PRINT:
	case antlrcpp_sqlserver::TSqlLexer::TRAN:
	case antlrcpp_sqlserver::TSqlLexer::TRANSACTION:
	case antlrcpp_sqlserver::TSqlLexer::DENY:
		return TR::KEYWORD_OTHER;

		// 숫자 리터럴
	case antlrcpp_sqlserver::TSqlLexer::DECIMAL:
		// DECIMAL 토큰은 정수('100')와 실수('3.14') 모두에 사용 - '.' 포함 여부로 구분
		if (tokenText.find('.') != std::string::npos)
			return TR::LITERAL_FLOAT;
		return TR::LITERAL_INTEGER;
	case antlrcpp_sqlserver::TSqlLexer::FLOAT:
	case antlrcpp_sqlserver::TSqlLexer::REAL:
		return TR::LITERAL_FLOAT;

		// 문자열 리터럴
	case antlrcpp_sqlserver::TSqlLexer::STRING:
		return TR::LITERAL_STRING;

		// NULL
	case antlrcpp_sqlserver::TSqlLexer::NULL_:
		return TR::LITERAL_NULL;

		// 비교 연산자
	case antlrcpp_sqlserver::TSqlLexer::EQUAL:
	case antlrcpp_sqlserver::TSqlLexer::GREATER:
	case antlrcpp_sqlserver::TSqlLexer::LESS:
	case antlrcpp_sqlserver::TSqlLexer::EXCLAMATION:
		return TR::OPERATOR_COMPARISON;

		// 산술 연산자
	case antlrcpp_sqlserver::TSqlLexer::PLUS:
	case antlrcpp_sqlserver::TSqlLexer::MINUS:
	case antlrcpp_sqlserver::TSqlLexer::STAR:
	case antlrcpp_sqlserver::TSqlLexer::DIVIDE:
	case antlrcpp_sqlserver::TSqlLexer::MODULE:
		return TR::OPERATOR_ARITHMETIC;

		// 구분자
	case antlrcpp_sqlserver::TSqlLexer::COMMA:
		return TR::SEPARATOR_COMMA;
	case antlrcpp_sqlserver::TSqlLexer::DOT:
		return TR::SEPARATOR_DOT;
	case antlrcpp_sqlserver::TSqlLexer::SEMI:
		return TR::SEPARATOR_SEMICOLON;
	case antlrcpp_sqlserver::TSqlLexer::LR_BRACKET:
		return TR::SEPARATOR_PAREN_OPEN;
	case antlrcpp_sqlserver::TSqlLexer::RR_BRACKET:
		return TR::SEPARATOR_PAREN_CLOSE;

		// 공백
	case antlrcpp_sqlserver::TSqlLexer::SPACE:
		return TR::WHITESPACE;

		// 주석
	case antlrcpp_sqlserver::TSqlLexer::COMMENT:
	case antlrcpp_sqlserver::TSqlLexer::LINE_COMMENT:
		return TR::COMMENT;

		// 파라미터/변수
	case antlrcpp_sqlserver::TSqlLexer::LOCAL_ID:   // @변수
		return TR::PARAMETER;

		// 식별자
	case antlrcpp_sqlserver::TSqlLexer::ID:
	case antlrcpp_sqlserver::TSqlLexer::DOUBLE_QUOTE_ID:
	case antlrcpp_sqlserver::TSqlLexer::SQUARE_BRACKET_ID:
	case antlrcpp_sqlserver::TSqlLexer::TEMP_ID:    // #임시테이블
		return TR::IDENTIFIER;

	default:
		return TR::UNKNOWN;
	}
}

std::vector<TokenInfo> SQLEngine::TokenizeQuerySQLServer(const std::string& sqlQuery)
{
	std::vector<TokenInfo> tokens;

	try {
		ANTLRInputStream input(sqlQuery);
		antlrcpp_sqlserver::TSqlLexer lexer(&input);
		CommonTokenStream tokenStream(&lexer);

		// 모든 토큰 가져오기
		lexer.removeErrorListeners();
		tokenStream.fill();

		int index = 1;
		std::vector<antlr4::Token*> allTokens = tokenStream.getTokens();

		for (antlr4::Token* token : allTokens) {
			if (token->getType() == antlr4::Token::EOF) {
				break;
			}

			// 공백은 기본적으로 건너뛰기
			if (token->getType() == antlrcpp_sqlserver::TSqlLexer::SPACE) {
				continue;
			}

			TokenInfo info;
			info.index = index++;
			info.text = token->getText();
			info.tokenTypeId = static_cast<size_t>(token->getType());
			info.tokenType = lexer.getVocabulary().getSymbolicName(token->getType());
			if (info.tokenType.empty()) {
				info.tokenType = lexer.getVocabulary().getLiteralName(token->getType());
			}
			info.role = GetRoleFromLexerTokenSQLServer(token->getType(), info.text);
			info.roleDesc = SQLEngine::TokenRoleToString(info.role);
			info.line = token->getLine();
			info.column = token->getCharPositionInLine();
			info.startIndex = token->getStartIndex();
			info.stopIndex = token->getStopIndex();

			tokens.push_back(info);
		}
	}
	catch (...) {
		// 예외 발생 시 현재까지의 토큰 반환
	}

	return tokens;
}

// ============================================================
// PostgreSQL 관련 함수들
// ============================================================

// PostgreSQL용 내부 도우미: stmt에서 문장 유형 식별
static SqlStatementType IdentifyFromStmtPostgreSQL(antlrcpp_postgresql::PostgreSQLParser::StmtContext* stmtCtx)
{
	if (!stmtCtx) return SqlStatementType::UNKNOWN;

	// DML 체크
	if (stmtCtx->selectstmt())      return SqlStatementType::SELECT_STATEMENT;
	if (stmtCtx->insertstmt())      return SqlStatementType::INSERT_STATEMENT;
	if (stmtCtx->updatestmt())      return SqlStatementType::UPDATE_STATEMENT;
	if (stmtCtx->deletestmt())      return SqlStatementType::DELETE_STATEMENT;
	if (stmtCtx->mergestmt())       return SqlStatementType::SELECT_STATEMENT;  // MERGE는 DML 계열

	// DDL: CREATE 문들
	if (stmtCtx->createstmt())             return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createdbstmt())           return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->indexstmt())              return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createseqstmt())          return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createschemastmt())       return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createextensionstmt())    return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createtablespacestmt())   return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createdomainstmt())       return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createrolestmt())         return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createuserstmt())         return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createasstmt())           return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->creatematviewstmt())      return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createstatsstmt())        return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createpublicationstmt())  return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createsubscriptionstmt()) return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createforeigntablestmt()) return SqlStatementType::CREATE_STATEMENT;

	// DDL: CREATE PROCEDURE/FUNCTION/TRIGGER/VIEW
	if (stmtCtx->createfunctionstmt())     return SqlStatementType::CREATE_FUNCTION;
	if (stmtCtx->createtrigstmt())         return SqlStatementType::CREATE_TRIGGER;
	if (stmtCtx->createeventtrigstmt())    return SqlStatementType::CREATE_TRIGGER;
	if (stmtCtx->viewstmt())              return SqlStatementType::CREATE_STATEMENT;
	if (stmtCtx->createplangstmt())        return SqlStatementType::CREATE_PROCEDURE;

	// DDL: ALTER 문들
	if (stmtCtx->altertablestmt())         return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterdatabasestmt())      return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterdatabasesetstmt())   return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterseqstmt())           return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterrolestmt())          return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterrolesetstmt())       return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterfunctionstmt())      return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterdomainstmt())        return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterextensionstmt())     return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->alterownerstmt())         return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->altercompositetypestmt()) return SqlStatementType::ALTER_STATEMENT;
	if (stmtCtx->altereventtrigstmt())     return SqlStatementType::ALTER_STATEMENT;

	// DDL: DROP 문들
	if (stmtCtx->dropstmt())              return SqlStatementType::DROP_STATEMENT;
	if (stmtCtx->dropdbstmt())            return SqlStatementType::DROP_STATEMENT;
	if (stmtCtx->droprolestmt())          return SqlStatementType::DROP_STATEMENT;
	if (stmtCtx->droptablespacestmt())    return SqlStatementType::DROP_STATEMENT;
	if (stmtCtx->dropsubscriptionstmt())  return SqlStatementType::DROP_STATEMENT;
	if (stmtCtx->dropownedstmt())         return SqlStatementType::DROP_STATEMENT;

	// DDL: TRUNCATE
	if (stmtCtx->truncatestmt())          return SqlStatementType::TRUNCATE_STATEMENT;

	// DCL: GRANT/REVOKE
	if (stmtCtx->grantstmt())             return SqlStatementType::GRANT_STATEMENT;
	if (stmtCtx->grantrolestmt())         return SqlStatementType::GRANT_STATEMENT;
	if (stmtCtx->revokestmt())            return SqlStatementType::REVOKE_STATEMENT;
	if (stmtCtx->revokerolestmt())        return SqlStatementType::REVOKE_STATEMENT;

	// TCL: TRANSACTION 문
	if (stmtCtx->transactionstmt())       return SqlStatementType::TRANSACTION_STATEMENT;

	// PL/pgSQL: CALL, DO, EXECUTE
	if (stmtCtx->callstmt())              return SqlStatementType::CALL_STATEMENT;
	if (stmtCtx->dostmt())                return SqlStatementType::CALL_STATEMENT;
	if (stmtCtx->executestmt())           return SqlStatementType::CALL_STATEMENT;

	// SET/SHOW
	if (stmtCtx->variablesetstmt())       return SqlStatementType::SET_STATEMENT;
	if (stmtCtx->variableshowstmt())      return SqlStatementType::SHOW_STATEMENT;
	if (stmtCtx->variableresetstmt())     return SqlStatementType::SET_STATEMENT;

	return SqlStatementType::UNKNOWN;
}

std::vector<SqlStatementInfo> SQLEngine::ParseMultipleQueriesPostgreSQL(const std::string& sqlQueries)
{
	std::vector<SqlStatementInfo> results;

	try {
		ANTLRInputStream input(sqlQueries);
		antlrcpp_postgresql::PostgreSQLLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_postgresql::PostgreSQLParser parser(&tokens);

		parser.removeErrorListeners();
		lexer.removeErrorListeners();

		// root() -> stmtblock() -> stmtmulti() -> stmt() 목록
		auto* rootCtx = parser.root();
		if (!rootCtx) return results;

		auto* stmtBlock = rootCtx->stmtblock();
		if (!stmtBlock) return results;

		auto* stmtMulti = stmtBlock->stmtmulti();
		if (!stmtMulti) return results;

		auto stmtList = stmtMulti->stmt();
		int index = 1;

		for (auto* stmtCtx : stmtList) {
			if (!stmtCtx) continue;

			// 빈 문장 건너뛰기 (세미콜론만 있는 경우)
			if (!stmtCtx->getStart() || stmtCtx->getStart()->getType() == antlr4::Token::EOF) {
				continue;
			}

			SqlStatementInfo info;
			info.index = index++;
			info.type = IdentifyFromStmtPostgreSQL(stmtCtx);

			antlr4::Token* startToken = stmtCtx->getStart();
			antlr4::Token* stopToken = stmtCtx->getStop();
			if (startToken && stopToken) {
				info.startLine = startToken->getLine();
				info.startColumn = startToken->getCharPositionInLine();
				size_t startIdx = startToken->getStartIndex();
				size_t stopIdx = stopToken->getStopIndex();
				if (startIdx != (size_t)-1 && stopIdx != (size_t)-1 && stopIdx >= startIdx) {
					info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
				}
			}
			// 서브쿼리 수집
			{
				std::vector<antlrcpp_postgresql::PostgreSQLParser::Select_with_parensContext*> vecSubCtxs;
				CollectSubQueryContextsDeep<antlrcpp_postgresql::PostgreSQLParser::Select_with_parensContext>(stmtCtx, vecSubCtxs);
				info.bHasSubQuery = !vecSubCtxs.empty();
				int nSubIdx = 1;
				for (auto* pSub : vecSubCtxs)
					info.vecSubQueries.push_back(BuildSubQueryInfoFromCtx(pSub, sqlQueries, nSubIdx++));
			}

			results.push_back(info);
		}
	}
	catch (...) {}

	for (auto& stInfo : results)
	{
		if (!stInfo.sqlText.empty())
			stInfo.bHasError = CheckSyntaxErrorPostgreSQL(stInfo.sqlText);
	}

	return results;
}

TokenRole SQLEngine::GetRoleFromLexerTokenPostgreSQL(size_t tokenType, const std::string& tokenText) const
{
	using TR = TokenRole;
	using PgLexer = antlrcpp_postgresql::PostgreSQLLexer;

	switch (tokenType) {
		// 키워드들
	case PgLexer::SELECT:       return TR::KEYWORD_SELECT;
	case PgLexer::FROM:         return TR::KEYWORD_FROM;
	case PgLexer::WHERE:        return TR::KEYWORD_WHERE;
	case PgLexer::INSERT:       return TR::KEYWORD_INSERT;
	case PgLexer::UPDATE:       return TR::KEYWORD_UPDATE;
	case PgLexer::DELETE_P:     return TR::KEYWORD_DELETE;
	case PgLexer::INTO:         return TR::KEYWORD_INTO;
	case PgLexer::VALUES:       return TR::KEYWORD_VALUES;
	case PgLexer::SET:          return TR::KEYWORD_SET;
	case PgLexer::AND:          return TR::KEYWORD_AND;
	case PgLexer::OR:           return TR::KEYWORD_OR;
	case PgLexer::ORDER:        return TR::KEYWORD_ORDER_BY;
	case PgLexer::GROUP_P:      return TR::KEYWORD_GROUP_BY;
	case PgLexer::HAVING:       return TR::KEYWORD_HAVING;
	case PgLexer::JOIN:
	case PgLexer::INNER_P:
	case PgLexer::LEFT:
	case PgLexer::RIGHT:
	case PgLexer::OUTER_P:
	case PgLexer::CROSS:
	case PgLexer::FULL:
	case PgLexer::NATURAL:      return TR::KEYWORD_JOIN;
	case PgLexer::ON:           return TR::KEYWORD_ON;
	case PgLexer::AS:           return TR::KEYWORD_AS;

		// 기타 예약어들
	case PgLexer::CREATE:
	case PgLexer::ALTER:
	case PgLexer::DROP:
	case PgLexer::TABLE:
	case PgLexer::DATABASE:
	case PgLexer::INDEX:
	case PgLexer::VIEW:
	case PgLexer::PROCEDURE:
	case PgLexer::FUNCTION:
	case PgLexer::TRIGGER:
	case PgLexer::GRANT:
	case PgLexer::REVOKE:
	case PgLexer::BEGIN_P:
	case PgLexer::COMMIT:
	case PgLexer::ROLLBACK:
	case PgLexer::DISTINCT:
	case PgLexer::ALL:
	case PgLexer::BY:
	case PgLexer::ASC:
	case PgLexer::DESC:
	case PgLexer::LIKE:
	case PgLexer::ILIKE:
	case PgLexer::IN_P:
	case PgLexer::BETWEEN:
	case PgLexer::IS:
	case PgLexer::NOT:
	case PgLexer::EXISTS:
	case PgLexer::CASE:
	case PgLexer::WHEN:
	case PgLexer::THEN:
	case PgLexer::ELSE:
	case PgLexer::END_P:
	case PgLexer::DECLARE:
	case PgLexer::CURSOR:
	case PgLexer::FOR:
	case PgLexer::RETURN:   return TR::KEYWORD_RETURN;
	case PgLexer::WHILE:
	case PgLexer::EXECUTE:
	case PgLexer::SEQUENCE:
	case PgLexer::TRUNCATE:
	case PgLexer::MERGE:
	case PgLexer::USING:
	case PgLexer::WITH:
	case PgLexer::UNION:
	case PgLexer::INTERSECT:
	case PgLexer::EXCEPT:
	case PgLexer::FETCH:
	case PgLexer::OFFSET:
	case PgLexer::LIMIT:
	case PgLexer::CONSTRAINT:
	case PgLexer::DEFAULT:
	case PgLexer::CHECK:
	case PgLexer::PRIMARY:
	case PgLexer::FOREIGN:
	case PgLexer::REFERENCES:
	case PgLexer::DO:
	case PgLexer::CALL:
	case PgLexer::SCHEMA:
	case PgLexer::TRANSACTION:
	case PgLexer::SAVEPOINT:
	case PgLexer::RETURNING:
	case PgLexer::EXPLAIN:
	case PgLexer::VACUUM:
	case PgLexer::ANALYZE:
	case PgLexer::SHOW:
	case PgLexer::COPY:
	case PgLexer::PREPARE:
	case PgLexer::PARTITION:
	case PgLexer::MATERIALIZED:
	case PgLexer::RECURSIVE:
	case PgLexer::ONLY:
	case PgLexer::LATERAL_P:
	case PgLexer::WINDOW:
	case PgLexer::ARRAY:
	case PgLexer::SOME:
	case PgLexer::ANY:
		return TR::KEYWORD_OTHER;

		// 숫자 리터럴
	case PgLexer::Integral:
	case PgLexer::BinaryIntegral:
	case PgLexer::OctalIntegral:
	case PgLexer::HexadecimalIntegral:
		return TR::LITERAL_INTEGER;
	case PgLexer::Numeric:
		return TR::LITERAL_FLOAT;

		// 문자열 리터럴
	case PgLexer::StringConstant:
	case PgLexer::UnicodeEscapeStringConstant:
	case PgLexer::EscapeStringConstant:
	case PgLexer::BeginDollarStringConstant:
	case PgLexer::DollarText:
	case PgLexer::EndDollarStringConstant:
		return TR::LITERAL_STRING;

		// NULL
	case PgLexer::NULL_P:
		return TR::LITERAL_NULL;

		// 불린
	case PgLexer::TRUE_P:
	case PgLexer::FALSE_P:
		return TR::LITERAL_BOOLEAN;

		// 비교 연산자
	case PgLexer::EQUAL:
	case PgLexer::NOT_EQUALS:
	case PgLexer::LT:
	case PgLexer::GT:
	case PgLexer::LESS_EQUALS:
	case PgLexer::GREATER_EQUALS:
		return TR::OPERATOR_COMPARISON;

		// 산술 연산자
	case PgLexer::PLUS:
	case PgLexer::MINUS:
	case PgLexer::STAR:
	case PgLexer::SLASH:
	case PgLexer::PERCENT:
		return TR::OPERATOR_ARITHMETIC;

		// 구분자
	case PgLexer::COMMA:
		return TR::SEPARATOR_COMMA;
	case PgLexer::DOT:
		return TR::SEPARATOR_DOT;
	case PgLexer::SEMI:
		return TR::SEPARATOR_SEMICOLON;
	case PgLexer::OPEN_PAREN:
		return TR::SEPARATOR_PAREN_OPEN;
	case PgLexer::CLOSE_PAREN:
		return TR::SEPARATOR_PAREN_CLOSE;

		// 공백
	case PgLexer::Whitespace:
	case PgLexer::Newline:
		return TR::WHITESPACE;

		// 주석
	case PgLexer::LineComment:
	case PgLexer::BlockComment:
		return TR::COMMENT;

		// 파라미터
	case PgLexer::PARAM:        // $1, $2 등
	case PgLexer::COLON:
		return TR::PARAMETER;

		// 식별자
	case PgLexer::Identifier:
	case PgLexer::QuotedIdentifier:
	case PgLexer::UnicodeQuotedIdentifier:
	case PgLexer::PLSQLIDENTIFIER:
	case PgLexer::PLSQLVARIABLENAME:
		return TR::IDENTIFIER;

	default:
		return TR::UNKNOWN;
	}
}

std::vector<TokenInfo> SQLEngine::TokenizeQueryPostgreSQL(const std::string& sqlQuery)
{
	std::vector<TokenInfo> tokens;

	try {
		ANTLRInputStream input(sqlQuery);
		antlrcpp_postgresql::PostgreSQLLexer lexer(&input);
		CommonTokenStream tokenStream(&lexer);

		// 모든 토큰 가져오기
		lexer.removeErrorListeners();
		tokenStream.fill();

		int index = 1;
		std::vector<antlr4::Token*> allTokens = tokenStream.getTokens();

		for (antlr4::Token* token : allTokens) {
			if (token->getType() == antlr4::Token::EOF) {
				break;
			}

			// 공백/줄바꿈은 기본적으로 건너뛰기
			if (token->getType() == antlrcpp_postgresql::PostgreSQLLexer::Whitespace ||
				token->getType() == antlrcpp_postgresql::PostgreSQLLexer::Newline) {
				continue;
			}

			TokenInfo info;
			info.index = index++;
			info.text = token->getText();
			info.tokenTypeId = static_cast<size_t>(token->getType());
			info.tokenType = lexer.getVocabulary().getSymbolicName(token->getType());
			if (info.tokenType.empty()) {
				info.tokenType = lexer.getVocabulary().getLiteralName(token->getType());
			}
			info.role = GetRoleFromLexerTokenPostgreSQL(token->getType(), info.text);
			info.roleDesc = SQLEngine::TokenRoleToString(info.role);
			info.line = token->getLine();
			info.column = token->getCharPositionInLine();
			info.startIndex = token->getStartIndex();
			info.stopIndex = token->getStopIndex();

			tokens.push_back(info);
		}
	}
	catch (...) {
		// 예외 발생 시 현재까지의 토큰 반환
	}

	return tokens;
}

// ============================================================
// DB2 관련 함수들
// ============================================================

// DB2용 내부 도우미: sql_statement에서 문장 유형 식별
static SqlStatementType IdentifyFromSqlStatementDB2(antlrcpp_db2::Db2Parser::Sql_statementContext* sqlStmt)
{
	if (!sqlStmt)
		return SqlStatementType::UNKNOWN;

	// SELECT 문 (sql_statement에서 직접 참조)
	if (sqlStmt->select_statement())
		return SqlStatementType::SELECT_STATEMENT;

	// DML (sql_data_change_statement)
	if (auto* dataChange = sqlStmt->sql_data_change_statement())
	{
		if (dataChange->insert_statement() || dataChange->insert_datalake_statement())
			return SqlStatementType::INSERT_STATEMENT;
		if (dataChange->update_statement() || dataChange->update_datalake_statement())
			return SqlStatementType::UPDATE_STATEMENT;
		if (dataChange->delete_statement() || dataChange->delete_deltalake_statement())
			return SqlStatementType::DELETE_STATEMENT;
		if (dataChange->merge_statement())
			return SqlStatementType::INSERT_STATEMENT;  // MERGE는 DML 계열
		if (dataChange->truncate_statement())
			return SqlStatementType::TRUNCATE_STATEMENT;
	}

	// DDL/DCL (sql_schema_statement)
	if (auto* schemaStmt = sqlStmt->sql_schema_statement())
	{
		// CREATE 문들
		if (schemaStmt->create_table_statement() ||
			schemaStmt->create_index_statement() ||
			schemaStmt->create_view_statement() ||
			schemaStmt->create_alias_statement() ||
			schemaStmt->create_sequence_statement() ||
			schemaStmt->create_schema_statement() ||
			schemaStmt->create_bufferpool_statement() ||
			schemaStmt->create_tablespace_statement() ||
			schemaStmt->create_role_statement() ||
			schemaStmt->create_global_temporary_table_statement() ||
			schemaStmt->create_nickname_statement() ||
			schemaStmt->create_type_statement() ||
			schemaStmt->create_type_array_statement() ||
			schemaStmt->create_type_cursor_statement() ||
			schemaStmt->create_type_distinct_statement() ||
			schemaStmt->create_type_row_statement() ||
			schemaStmt->create_type_structured_statement() ||
			schemaStmt->create_variable_statement() ||
			schemaStmt->create_mask_statement() ||
			schemaStmt->create_permission_statement() ||
			schemaStmt->create_module_statement() ||
			schemaStmt->create_external_table_statement() ||
			schemaStmt->create_synonym_statement() ||
			schemaStmt->create_server_statement() ||
			schemaStmt->create_wrapper_statement() ||
			schemaStmt->create_workload_statement())
			return SqlStatementType::CREATE_STATEMENT;

		// CREATE PROCEDURE
		if (schemaStmt->create_procedure_statement() ||
			schemaStmt->create_procedure_external_statement() ||
			schemaStmt->create_procedure_sourced_statement() ||
			schemaStmt->create_procedure_sql_statement())
			return SqlStatementType::CREATE_PROCEDURE;

		// CREATE FUNCTION
		if (schemaStmt->create_function_statement() ||
			schemaStmt->create_function_external_scalar_statement() ||
			schemaStmt->create_function_external_table_statement() ||
			schemaStmt->create_function_sql_scalar_table_or_row_statement() ||
			schemaStmt->create_function_sourced_or_template_statement() ||
			schemaStmt->create_function_aggregate_interface_statement() ||
			schemaStmt->create_function_old_db_external_function_statement())
			return SqlStatementType::CREATE_FUNCTION;

		// CREATE TRIGGER
		if (schemaStmt->create_trigger_statement())
			return SqlStatementType::CREATE_TRIGGER;

		// ALTER 문들
		if (schemaStmt->alter_table_statement() ||
			schemaStmt->alter_index_statement() ||
			schemaStmt->alter_view_statement() ||
			schemaStmt->alter_sequence_statement() ||
			schemaStmt->alter_bufferpool_statement() ||
			schemaStmt->alter_tablespace_statement() ||
			schemaStmt->alter_database_statement() ||
			schemaStmt->alter_function_statement() ||
			schemaStmt->alter_procedure_external_statement() ||
			schemaStmt->alter_procedure_sourced_statement() ||
			schemaStmt->alter_procedure_sql_statement() ||
			schemaStmt->alter_trigger_statement() ||
			schemaStmt->alter_module_statement() ||
			schemaStmt->alter_nickname_statement() ||
			schemaStmt->alter_schema_statement() ||
			schemaStmt->alter_server_statement() ||
			schemaStmt->alter_workload_statement() ||
			schemaStmt->alter_type_statement() ||
			schemaStmt->alter_mask_statement() ||
			schemaStmt->alter_permission_statement())
			return SqlStatementType::ALTER_STATEMENT;

		// DROP 문
		if (schemaStmt->drop_statement())
			return SqlStatementType::DROP_STATEMENT;

		// GRANT 문들
		if (schemaStmt->grant_database_authorities_statement() ||
			schemaStmt->grant_role_statement() ||
			schemaStmt->grant_table_view_or_nickname_privileges_statement() ||
			schemaStmt->grant_schema_privileges_statement() ||
			schemaStmt->grant_sequence_privileges_statement() ||
			schemaStmt->grant_routine_privileges_statement() ||
			schemaStmt->grant_package_privileges_statement() ||
			schemaStmt->grant_index_privileges_statement() ||
			schemaStmt->grant_module_privileges_statement() ||
			schemaStmt->grant_server_privileges_statement() ||
			schemaStmt->grant_table_space_privileges_statement() ||
			schemaStmt->grant_workload_privileges_statement() ||
			schemaStmt->grant_global_variable_privileges_statement() ||
			schemaStmt->grant_exemption_statement() ||
			schemaStmt->grant_security_label_statement() ||
			schemaStmt->grant_setsessionuser_privilege_statement() ||
			schemaStmt->grant_xsr_object_privileges_statement())
			return SqlStatementType::GRANT_STATEMENT;

		// REVOKE 문들
		if (schemaStmt->revoke_database_authorities_statement() ||
			schemaStmt->revoke_role_statement() ||
			schemaStmt->revoke_table_view_or_nickname_privileges_statement() ||
			schemaStmt->revoke_schema_privileges_statement() ||
			schemaStmt->revoke_sequence_privileges_statement() ||
			schemaStmt->revoke_routine_privileges_statement() ||
			schemaStmt->revoke_package_privileges_statement() ||
			schemaStmt->revoke_index_privileges_statement() ||
			schemaStmt->revoke_module_privileges_statement() ||
			schemaStmt->revoke_server_privileges_statement() ||
			schemaStmt->revoke_table_space_privileges_statement() ||
			schemaStmt->revoke_workload_privileges_statement() ||
			schemaStmt->revoke_global_variable_privileges_statement() ||
			schemaStmt->revoke_exemption_statement() ||
			schemaStmt->revoke_security_label_statement() ||
			schemaStmt->revoke_setsessionuser_privilege_statement() ||
			schemaStmt->revoke_xsr_object_privileges_statement())
			return SqlStatementType::REVOKE_STATEMENT;
	}

	// TCL (sql_transaction_statement)
	if (sqlStmt->sql_transaction_statement())
		return SqlStatementType::TRANSACTION_STATEMENT;

	// 제어문 (sql_constrol_statement - CALL, CASE, IF, WHILE 등)
	if (auto* ctrlStmt = sqlStmt->sql_constrol_statement())
	{
		if (ctrlStmt->call_statement())
			return SqlStatementType::CALL_STATEMENT;
		return SqlStatementType::CALL_STATEMENT;  // 기타 제어문도 CALL 계열로
	}

	// 세션 문 (SET, EXPLAIN 등)
	if (auto* sessionStmt = sqlStmt->sql_session_statement())
	{
		if (sessionStmt->set_statement())
			return SqlStatementType::SET_STATEMENT;
	}

	// 동적 SQL (EXECUTE, PREPARE 등)
	if (sqlStmt->sql_dynamic_statement())
		return SqlStatementType::CALL_STATEMENT;

	// 데이터 문 (OPEN, CLOSE, FETCH 등)
	if (sqlStmt->sql_data_statement())
		return SqlStatementType::CALL_STATEMENT;

	return SqlStatementType::UNKNOWN;
}

std::vector<SqlStatementInfo> SQLEngine::ParseMultipleQueriesDB2(const std::string& sqlQueries)
{
	std::vector<SqlStatementInfo> results;

	try
	{
		ANTLRInputStream input(sqlQueries);
		antlrcpp_db2::Db2Lexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_db2::Db2Parser parser(&tokens);

		parser.removeErrorListeners();
		lexer.removeErrorListeners();

		// db2_file() -> batch() -> sql_statement() 목록
		auto* fileCtx = parser.db2_file();
		if (!fileCtx)
			return results;

		auto* batchCtx = fileCtx->batch();
		if (!batchCtx)
			return results;

		auto stmtList = batchCtx->sql_statement();
		int nIndex = 1;

		for (auto* sqlStmt : stmtList)
		{
			if (!sqlStmt)
				continue;

			// 빈 문장 건너뛰기
			if (!sqlStmt->getStart() || sqlStmt->getStart()->getType() == antlr4::Token::EOF)
				continue;

			SqlStatementInfo info;
			info.index = nIndex++;
			info.type = IdentifyFromSqlStatementDB2(sqlStmt);

			antlr4::Token* pStartToken = sqlStmt->getStart();
			antlr4::Token* pStopToken = sqlStmt->getStop();
			if (pStartToken && pStopToken)
			{
				info.startLine = pStartToken->getLine();
				info.startColumn = pStartToken->getCharPositionInLine();
				size_t nStartIdx = pStartToken->getStartIndex();
				size_t nStopIdx = pStopToken->getStopIndex();
				if (nStartIdx != (size_t)-1 && nStopIdx != (size_t)-1 && nStopIdx >= nStartIdx)
				{
					info.sqlText = sqlQueries.substr(nStartIdx, nStopIdx - nStartIdx + 1);
				}
			}
			// 서브쿼리 수집
			{
				std::vector<antlrcpp_db2::Db2Parser::Fullselect_in_parenthesesContext*> vecSubCtxs;
				CollectSubQueryContextsDeep<antlrcpp_db2::Db2Parser::Fullselect_in_parenthesesContext>(sqlStmt, vecSubCtxs);
				info.bHasSubQuery = !vecSubCtxs.empty();
				int nSubIdx = 1;
				for (auto* pSub : vecSubCtxs)
					info.vecSubQueries.push_back(BuildSubQueryInfoFromCtx(pSub, sqlQueries, nSubIdx++));
			}

			results.push_back(info);
		}
	}
	catch (...) {}

	for (auto& stInfo : results)
	{
		if (!stInfo.sqlText.empty())
			stInfo.bHasError = CheckSyntaxErrorDB2(stInfo.sqlText);
	}

	return results;
}

TokenRole SQLEngine::GetRoleFromLexerTokenDB2(size_t tokenType, const std::string& tokenText) const
{
	using TR = TokenRole;
	using Db2Lex = antlrcpp_db2::Db2Lexer;

	switch (tokenType)
	{
		// 키워드들
	case Db2Lex::SELECT:     return TR::KEYWORD_SELECT;
	case Db2Lex::FROM:       return TR::KEYWORD_FROM;
	case Db2Lex::WHERE:      return TR::KEYWORD_WHERE;
	case Db2Lex::INSERT:     return TR::KEYWORD_INSERT;
	case Db2Lex::UPDATE:     return TR::KEYWORD_UPDATE;
	case Db2Lex::DELETE:     return TR::KEYWORD_DELETE;
	case Db2Lex::INTO:       return TR::KEYWORD_INTO;
	case Db2Lex::VALUES:     return TR::KEYWORD_VALUES;
	case Db2Lex::SET:        return TR::KEYWORD_SET;
	case Db2Lex::AND:        return TR::KEYWORD_AND;
	case Db2Lex::OR:         return TR::KEYWORD_OR;
	case Db2Lex::ORDER:      return TR::KEYWORD_ORDER_BY;
	case Db2Lex::GROUP:      return TR::KEYWORD_GROUP_BY;
	case Db2Lex::JOIN:
	case Db2Lex::INNER:
	case Db2Lex::LEFT:
	case Db2Lex::RIGHT:
	case Db2Lex::OUTER:
	case Db2Lex::CROSS:
	case Db2Lex::FULL:       return TR::KEYWORD_JOIN;
	case Db2Lex::ON:         return TR::KEYWORD_ON;
	case Db2Lex::AS:         return TR::KEYWORD_AS;

		// 기타 예약어들
	case Db2Lex::CREATE:
	case Db2Lex::ALTER:
	case Db2Lex::DROP:
	case Db2Lex::TABLE:
	case Db2Lex::DATABASE:
	case Db2Lex::INDEX:
	case Db2Lex::VIEW:
	case Db2Lex::PROCEDURE:
	case Db2Lex::FUNCTION:
	case Db2Lex::TRIGGER:
	case Db2Lex::GRANT:
	case Db2Lex::REVOKE:
	case Db2Lex::BEGIN:
	case Db2Lex::COMMIT:
	case Db2Lex::ROLLBACK:
	case Db2Lex::DISTINCT:
	case Db2Lex::ALL:
	case Db2Lex::BY:
	case Db2Lex::ASC:
	case Db2Lex::DESC:
	case Db2Lex::LIKE:
	case Db2Lex::IN:
	case Db2Lex::BETWEEN:
	case Db2Lex::IS:
	case Db2Lex::NOT:
	case Db2Lex::EXISTS:
	case Db2Lex::CASE:
	case Db2Lex::WHEN:
	case Db2Lex::THEN:
	case Db2Lex::ELSE:
	case Db2Lex::END:
	case Db2Lex::DECLARE:
	case Db2Lex::CURSOR:
	case Db2Lex::FOR:
	case Db2Lex::WHILE:
	case Db2Lex::RETURN:   return TR::KEYWORD_RETURN;
	case Db2Lex::IF:
	case Db2Lex::EXECUTE:
	case Db2Lex::SEQUENCE:
	case Db2Lex::TRUNCATE:
	case Db2Lex::MERGE:
	case Db2Lex::USING:
	case Db2Lex::WITH:
	case Db2Lex::UNION:
	case Db2Lex::INTERSECT:
	case Db2Lex::EXCEPT:
	case Db2Lex::FETCH:
	case Db2Lex::OFFSET:
	case Db2Lex::LIMIT:
	case Db2Lex::CONSTRAINT:
	case Db2Lex::DEFAULT:
	case Db2Lex::CHECK:
	case Db2Lex::PRIMARY:
	case Db2Lex::FOREIGN:
	case Db2Lex::REFERENCES:
	case Db2Lex::CALL:
	case Db2Lex::SCHEMA:
	case Db2Lex::TRANSACTION:
	case Db2Lex::SAVEPOINT:
	case Db2Lex::PACKAGE:
	case Db2Lex::BODY:
	case Db2Lex::TABLESPACE:
	case Db2Lex::BUFFERPOOL:
	case Db2Lex::ROLE:
	case Db2Lex::PARTITION:
	case Db2Lex::ONLY:
	case Db2Lex::LATERAL:
	case Db2Lex::SOME:
	case Db2Lex::ANY:
		return TR::KEYWORD_OTHER;

		// 숫자 리터럴
	case Db2Lex::SINGLE_DIGIT:
		return TR::LITERAL_INTEGER;
	case Db2Lex::DECIMAL_LITERAL:
	case Db2Lex::FLOAT_LITERAL:
	case Db2Lex::REAL_LITERAL:
		return TR::LITERAL_FLOAT;

		// 문자열 리터럴
	case Db2Lex::SINGLE_QUOTE:
	case Db2Lex::STRING_LITERAL:
	case Db2Lex::CHAR_LITERAL:
		return TR::LITERAL_STRING;

		// NULL
	case Db2Lex::NULL_:
		return TR::LITERAL_NULL;

		// 불린
	case Db2Lex::TRUE:
	case Db2Lex::FALSE:
		return TR::LITERAL_BOOLEAN;

		// 비교 연산자
	case Db2Lex::EQ:
	case Db2Lex::NE:
	case Db2Lex::LTGT:
	case Db2Lex::LT:
	case Db2Lex::GT:
	case Db2Lex::LE:
	case Db2Lex::GE:
		return TR::OPERATOR_COMPARISON;

		// 산술 연산자
	case Db2Lex::PLUS:
	case Db2Lex::MINUS:
	case Db2Lex::STAR:
	case Db2Lex::DIVIDE:
	case Db2Lex::MODULE:
		return TR::OPERATOR_ARITHMETIC;

		// 구분자
	case Db2Lex::COMMA:
		return TR::SEPARATOR_COMMA;
	case Db2Lex::DOT:
		return TR::SEPARATOR_DOT;
	case Db2Lex::SEMI:
		return TR::SEPARATOR_SEMICOLON;
	case Db2Lex::LEFT_RND_BKT:
		return TR::SEPARATOR_PAREN_OPEN;
	case Db2Lex::RIGHT_RND_BKT:
		return TR::SEPARATOR_PAREN_CLOSE;

		// 공백
	case Db2Lex::WHITE_SPACE:
		return TR::WHITESPACE;

		// 주석
	case Db2Lex::SQL_COMMENT:
	case Db2Lex::LINE_COMMENT:
		return TR::COMMENT;

		// 파라미터
	case Db2Lex::COLON:
		return TR::PARAMETER;

		// 식별자
	case Db2Lex::ID:
	case Db2Lex::DOUBLE_QUOTE_ID:
		return TR::IDENTIFIER;

	default:
		return TR::UNKNOWN;
	}
}

std::vector<TokenInfo> SQLEngine::TokenizeQueryDB2(const std::string& sqlQuery)
{
	std::vector<TokenInfo> tokens;

	try
	{
		ANTLRInputStream input(sqlQuery);
		antlrcpp_db2::Db2Lexer lexer(&input);
		CommonTokenStream tokenStream(&lexer);

		// 모든 토큰 가져오기
		lexer.removeErrorListeners();
		tokenStream.fill();

		int nIndex = 1;
		std::vector<antlr4::Token*> allTokens = tokenStream.getTokens();

		for (antlr4::Token* pToken : allTokens)
		{
			if (pToken->getType() == antlr4::Token::EOF)
				break;

			// 공백은 기본적으로 건너뛰기
			if (pToken->getType() == antlrcpp_db2::Db2Lexer::WHITE_SPACE)
				continue;

			TokenInfo info;
			info.index = nIndex++;
			info.text = pToken->getText();
			info.tokenTypeId = static_cast<size_t>(pToken->getType());
			info.tokenType = lexer.getVocabulary().getSymbolicName(pToken->getType());
			if (info.tokenType.empty())
				info.tokenType = lexer.getVocabulary().getLiteralName(pToken->getType());
			info.role = GetRoleFromLexerTokenDB2(pToken->getType(), info.text);
			info.roleDesc = SQLEngine::TokenRoleToString(info.role);
			info.line = pToken->getLine();
			info.column = pToken->getCharPositionInLine();
			info.startIndex = pToken->getStartIndex();
			info.stopIndex = pToken->getStopIndex();

			tokens.push_back(info);
		}
	}
	catch (...)
	{
		// 예외 발생 시 현재까지의 토큰 반환
	}

	return tokens;
}

// ============================================================
// DB 독립적 SQL 문장 유형 판별 (ANTLR 파서 기반)
// ============================================================

SqlStatementType SQLEngine::IdentifySqlTypeOracle(const std::string& szSql)
{
	try
	{
		ANTLRInputStream input(szSql);
		PlSqlLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		PlSqlParser parser(&tokens);

		parser.removeErrorListeners();
		lexer.removeErrorListeners();

		PlSqlParser::Sql_scriptContext* scriptCtx = parser.sql_script();
		if (scriptCtx)
		{
			auto stmtList = scriptCtx->unit_statement();
			if (!stmtList.empty() && stmtList[0])
			{
				auto* unitStmt = stmtList[0];
				if (auto* dmlStmt = unitStmt->data_manipulation_language_statements())
				{
					if (dmlStmt->select_statement()) return SqlStatementType::SELECT_STATEMENT;
					if (dmlStmt->insert_statement()) return SqlStatementType::INSERT_STATEMENT;
					if (dmlStmt->update_statement()) return SqlStatementType::UPDATE_STATEMENT;
					if (dmlStmt->delete_statement()) return SqlStatementType::DELETE_STATEMENT;
					if (dmlStmt->merge_statement())  return SqlStatementType::MERGE_STATEMENT;
				}
				SqlStatementType eType = IdentifyStatementOracle(unitStmt);
				if (eType != SqlStatementType::UNKNOWN)
					return eType;
			}
		}

		// 파스 트리 식별 실패 시 텍스트 기반 폴백
		// (syntax errors, stmtList 비어있는 경우, SELECT* 같은 비표준 형식 포함)
		std::string szUpper = szSql;
		std::transform(szUpper.begin(), szUpper.end(), szUpper.begin(), ::toupper);
		size_t nPos = szUpper.find_first_not_of(" \t\r\n");
		if (nPos != std::string::npos)
		{
			// 첫 키워드 추출 (공백, *, (, 탭 이전까지)
			size_t nEnd = nPos;
			while (nEnd < szUpper.size() &&
				szUpper[nEnd] != ' ' && szUpper[nEnd] != '\t' &&
				szUpper[nEnd] != '\r' && szUpper[nEnd] != '\n' &&
				szUpper[nEnd] != '*' && szUpper[nEnd] != '(')
				nEnd++;
			std::string firstWord = szUpper.substr(nPos, nEnd - nPos);
			if (firstWord == "SELECT")   return SqlStatementType::SELECT_STATEMENT;
			if (firstWord == "INSERT")   return SqlStatementType::INSERT_STATEMENT;
			if (firstWord == "UPDATE")   return SqlStatementType::UPDATE_STATEMENT;
			if (firstWord == "DELETE")   return SqlStatementType::DELETE_STATEMENT;
			if (firstWord == "MERGE")    return SqlStatementType::MERGE_STATEMENT;
			if (firstWord == "CREATE")   return SqlStatementType::CREATE_STATEMENT;
			if (firstWord == "ALTER")    return SqlStatementType::ALTER_STATEMENT;
			if (firstWord == "DROP")     return SqlStatementType::DROP_STATEMENT;
			if (firstWord == "TRUNCATE") return SqlStatementType::TRUNCATE_STATEMENT;
			if (firstWord == "GRANT")    return SqlStatementType::GRANT_STATEMENT;
			if (firstWord == "REVOKE")   return SqlStatementType::REVOKE_STATEMENT;
			if (firstWord == "COMMIT" || firstWord == "ROLLBACK" || firstWord == "SAVEPOINT")
				return SqlStatementType::TRANSACTION_STATEMENT;
			if (firstWord == "CALL")     return SqlStatementType::CALL_STATEMENT;
			if (firstWord == "SET")      return SqlStatementType::SET_STATEMENT;
		}

		return SqlStatementType::UNKNOWN;
	}
	catch (...)
	{
		return SqlStatementType::UNKNOWN;
	}
}

SqlStatementType SQLEngine::IdentifySqlTypeSQLServer(const std::string& szSql)
{
	try
	{
		ANTLRInputStream input(szSql);
		antlrcpp_sqlserver::TSqlLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_sqlserver::TSqlParser parser(&tokens);

		parser.removeErrorListeners();
		lexer.removeErrorListeners();

		auto* fileCtx = parser.tsql_file();
		if (!fileCtx || parser.getNumberOfSyntaxErrors() > 0)
			return SqlStatementType::UNKNOWN;

		auto batchList = fileCtx->batch();
		if (batchList.empty())
			return SqlStatementType::UNKNOWN;

		auto* batchCtx = batchList[0];
		if (!batchCtx)
			return SqlStatementType::UNKNOWN;

		if (auto* batchLevel = batchCtx->batch_level_statement())
			return IdentifyFromBatchLevelSQLServer(batchLevel);

		auto sqlClausesList = batchCtx->sql_clauses();
		if (sqlClausesList.empty())
			return SqlStatementType::UNKNOWN;

		auto* sqlClauses = sqlClausesList[0];
		if (auto* dmlClause = sqlClauses->dml_clause())
		{
			if (dmlClause->select_statement_standalone()) return SqlStatementType::SELECT_STATEMENT;
			if (dmlClause->insert_statement())            return SqlStatementType::INSERT_STATEMENT;
			if (dmlClause->update_statement())            return SqlStatementType::UPDATE_STATEMENT;
			if (dmlClause->delete_statement())            return SqlStatementType::DELETE_STATEMENT;
			if (dmlClause->merge_statement())             return SqlStatementType::MERGE_STATEMENT;
		}

		return IdentifyFromSqlClausesSQLServer(sqlClauses);
	}
	catch (...)
	{
		return SqlStatementType::UNKNOWN;
	}
}

SqlStatementType SQLEngine::IdentifySqlTypePostgreSQL(const std::string& szSql)
{
	try
	{
		ANTLRInputStream input(szSql);
		antlrcpp_postgresql::PostgreSQLLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_postgresql::PostgreSQLParser parser(&tokens);

		parser.removeErrorListeners();
		lexer.removeErrorListeners();

		auto* rootCtx = parser.root();
		if (!rootCtx || parser.getNumberOfSyntaxErrors() > 0)
			return SqlStatementType::UNKNOWN;

		auto* stmtBlock = rootCtx->stmtblock();
		if (!stmtBlock)
			return SqlStatementType::UNKNOWN;

		auto* stmtMulti = stmtBlock->stmtmulti();
		if (!stmtMulti)
			return SqlStatementType::UNKNOWN;

		auto stmtList = stmtMulti->stmt();
		if (stmtList.empty())
			return SqlStatementType::UNKNOWN;

		auto* stmtCtx = stmtList[0];
		if (!stmtCtx)
			return SqlStatementType::UNKNOWN;

		if (stmtCtx->selectstmt()) return SqlStatementType::SELECT_STATEMENT;
		if (stmtCtx->insertstmt()) return SqlStatementType::INSERT_STATEMENT;
		if (stmtCtx->updatestmt()) return SqlStatementType::UPDATE_STATEMENT;
		if (stmtCtx->deletestmt()) return SqlStatementType::DELETE_STATEMENT;
		if (stmtCtx->mergestmt()) return SqlStatementType::MERGE_STATEMENT;

		return IdentifyFromStmtPostgreSQL(stmtCtx);
	}
	catch (...)
	{
		return SqlStatementType::UNKNOWN;
	}
}

SqlStatementType SQLEngine::IdentifySqlTypeDB2(const std::string& szSql)
{
	try
	{
		ANTLRInputStream input(szSql);
		antlrcpp_db2::Db2Lexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_db2::Db2Parser parser(&tokens);

		parser.removeErrorListeners();
		lexer.removeErrorListeners();

		auto* fileCtx = parser.db2_file();
		if (!fileCtx || parser.getNumberOfSyntaxErrors() > 0)
			return SqlStatementType::UNKNOWN;

		auto* batchCtx = fileCtx->batch();
		if (!batchCtx)
			return SqlStatementType::UNKNOWN;

		auto stmtList = batchCtx->sql_statement();
		if (stmtList.empty())
			return SqlStatementType::UNKNOWN;

		auto* sqlStmt = stmtList[0];
		if (!sqlStmt)
			return SqlStatementType::UNKNOWN;

		if (sqlStmt->select_statement())
			return SqlStatementType::SELECT_STATEMENT;

		if (auto* dataChange = sqlStmt->sql_data_change_statement())
		{
			if (dataChange->insert_statement() || dataChange->insert_datalake_statement())
				return SqlStatementType::INSERT_STATEMENT;
			if (dataChange->update_statement() || dataChange->update_datalake_statement())
				return SqlStatementType::UPDATE_STATEMENT;
			if (dataChange->delete_statement() || dataChange->delete_deltalake_statement())
				return SqlStatementType::DELETE_STATEMENT;
			if (dataChange->merge_statement())
				return SqlStatementType::MERGE_STATEMENT;
		}

		return IdentifyFromSqlStatementDB2(sqlStmt);
	}
	catch (...)
	{
		return SqlStatementType::UNKNOWN;
	}
}

// 모든 DB 파서를 순차적으로 시도하여 문장 유형 반환
// MySQL -> Oracle -> SQLServer -> PostgreSQL -> DB2 순으로 시도
SqlStatementType SQLEngine::IdentifySqlTypeAny(const std::string& szSql)
{
	SqlStatementType eType = IdentifySqlTypeMySQL(szSql);
	if (eType != SqlStatementType::UNKNOWN)
		return eType;

	eType = IdentifySqlTypeOracle(szSql);
	if (eType != SqlStatementType::UNKNOWN)
		return eType;

	eType = IdentifySqlTypeSQLServer(szSql);
	if (eType != SqlStatementType::UNKNOWN)
		return eType;

	eType = IdentifySqlTypePostgreSQL(szSql);
	if (eType != SqlStatementType::UNKNOWN)
		return eType;

	return IdentifySqlTypeDB2(szSql);
}


// ============================================================
// 내부 오류 감지용 리스너 (파일 내부 전용)
// ============================================================

namespace
{
	class SqlSyntaxErrorListener : public antlr4::BaseErrorListener
	{
	public:
		bool m_bHasError = false;

		void syntaxError(
			antlr4::Recognizer* /*recognizer*/,
			antlr4::Token* /*offendingSymbol*/,
			size_t /*line*/,
			size_t /*charPositionInLine*/,
			const std::string& /*msg*/,
			std::exception_ptr /*e*/) override
		{
			m_bHasError = true;
		}
	};
}


// ============================================================
// 문법 오류 감지 (내부 전용) - 개별 SQL 문장을 재파싱하여 확인
// ============================================================

bool SQLEngine::CheckSyntaxErrorOracle(const std::string& szSql)
{
	try
	{
		antlr4::ANTLRInputStream input(szSql);
		antlrcpp_oracle::PlSqlLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		antlrcpp_oracle::PlSqlParser parser(&tokens);

		SqlSyntaxErrorListener oErrListener;
		lexer.removeErrorListeners();
		parser.removeErrorListeners();
		lexer.addErrorListener(&oErrListener);
		parser.addErrorListener(&oErrListener);

		parser.sql_script();
		return oErrListener.m_bHasError;
	}
	catch (...)
	{
		return true;
	}
}

bool SQLEngine::CheckSyntaxErrorMySQL(const std::string& szSql)
{
	try
	{
		// MySQL parser는 세미콜론 없는 SQL에서 오류를 발생시킬 수 있으므로 자동 추가
		std::string szInput = szSql;
		size_t nLastNonSpace = szInput.find_last_not_of(" \t\r\n");
		if (nLastNonSpace != std::string::npos && szInput[nLastNonSpace] != ';')
			szInput += ";";

		antlr4::ANTLRInputStream input(szInput);
		antlrcpp_mysql::MySQLLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		antlrcpp_mysql::MySQLParser parser(&tokens);

		SqlSyntaxErrorListener oErrListener;
		lexer.removeErrorListeners();
		parser.removeErrorListeners();
		lexer.addErrorListener(&oErrListener);
		parser.addErrorListener(&oErrListener);

		parser.query();
		return oErrListener.m_bHasError;
	}
	catch (...)
	{
		return true;
	}
}

bool SQLEngine::CheckSyntaxErrorSQLServer(const std::string& szSql)
{
	try
	{
		antlr4::ANTLRInputStream input(szSql);
		antlrcpp_sqlserver::TSqlLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		antlrcpp_sqlserver::TSqlParser parser(&tokens);

		SqlSyntaxErrorListener oErrListener;
		lexer.removeErrorListeners();
		parser.removeErrorListeners();
		lexer.addErrorListener(&oErrListener);
		parser.addErrorListener(&oErrListener);

		parser.tsql_file();
		return oErrListener.m_bHasError;
	}
	catch (...)
	{
		return true;
	}
}

bool SQLEngine::CheckSyntaxErrorPostgreSQL(const std::string& szSql)
{
	try
	{
		antlr4::ANTLRInputStream input(szSql);
		antlrcpp_postgresql::PostgreSQLLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		antlrcpp_postgresql::PostgreSQLParser parser(&tokens);

		SqlSyntaxErrorListener oErrListener;
		lexer.removeErrorListeners();
		parser.removeErrorListeners();
		lexer.addErrorListener(&oErrListener);
		parser.addErrorListener(&oErrListener);

		parser.root();
		return oErrListener.m_bHasError;
	}
	catch (...)
	{
		return true;
	}
}

bool SQLEngine::CheckSyntaxErrorDB2(const std::string& szSql)
{
	try
	{
		antlr4::ANTLRInputStream input(szSql);
		antlrcpp_db2::Db2Lexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		antlrcpp_db2::Db2Parser parser(&tokens);

		SqlSyntaxErrorListener oErrListener;
		lexer.removeErrorListeners();
		parser.removeErrorListeners();
		lexer.addErrorListener(&oErrListener);
		parser.addErrorListener(&oErrListener);

		parser.db2_file();
		return oErrListener.m_bHasError;
	}
	catch (...)
	{
		return true;
	}
}


// ============================================================
// [인스턴스 기반] 파싱 후 멤버변수에 저장
// ============================================================

// 파싱 실행 - 결과를 m_vecStatements, m_vecTokens에 저장
bool SQLEngine::Parse(const std::string& szSqlQueries, int nDatabaseType)
{
	m_nDatabaseType = nDatabaseType;
	m_vecStatements = ParseMultipleQueries(szSqlQueries, nDatabaseType);
	// ParseMultipleQueries() 내부에서 nDatabaseType 및 vecTableRefs/vecColumnRefs 설정됨

	// 전체 입력에 대한 토큰 목록 수집
	m_vecTokens = TokenizeQuery(szSqlQueries, nDatabaseType);

	m_bIsParsed = true;
	return !m_vecStatements.empty();
}

// 저장된 stmt 목록의 SQL 문장 수 반환
int SQLEngine::GetStatementCount() const
{
	return static_cast<int>(m_vecStatements.size());
}

// 저장된 stmt 목록에서 n번째 SQL 문장의 타입 반환 (0-based index)
SqlStatementType SQLEngine::GetStatementTypeAt(int nIndex) const
{
	if (nIndex < 0 || nIndex >= static_cast<int>(m_vecStatements.size()))
		return SqlStatementType::UNKNOWN;

	return m_vecStatements[nIndex].type;
}

// 저장된 stmt 목록에서 n번째 SQL 문장의 문법 오류 여부 반환 (0-based index)
bool SQLEngine::HasSyntaxError(int nIndex) const
{
	if (nIndex < 0 || nIndex >= static_cast<int>(m_vecStatements.size()))
		return true;

	return m_vecStatements[nIndex].bHasError;
}

// 저장된 stmt 목록 전체 반환
const std::vector<SqlStatementInfo>& SQLEngine::GetStatements() const
{
	return m_vecStatements;
}

// 저장된 토큰 목록 전체 반환
const std::vector<TokenInfo>& SQLEngine::GetTokens() const
{
	return m_vecTokens;
}

// 저장된 토큰 수 반환
int SQLEngine::GetTokenCount() const
{
	return static_cast<int>(m_vecTokens.size());
}

// 파싱된 토큰에서 테이블명 목록 반환 (m_vecStatements 집계)
std::vector<std::string> SQLEngine::GetTableNames() const
{
	std::vector<std::string> vecResult;
	for (const auto& stmt : m_vecStatements)
	{
		for (const TableRefInfo& stRef : stmt.vecTableRefs)
		{
			if (!stRef.szTable.empty())
				vecResult.push_back(stRef.szTable);
		}
	}
	return vecResult;
}

// 파싱된 토큰에서 스키마명 목록 반환 (m_vecStatements 집계)
std::vector<std::string> SQLEngine::GetSchemaNames() const
{
	std::vector<std::string> vecResult;
	for (const auto& stmt : m_vecStatements)
	{
		for (const TableRefInfo& stRef : stmt.vecTableRefs)
		{
			if (!stRef.szSchema.empty())
				vecResult.push_back(stRef.szSchema);
		}
	}
	return vecResult;
}

// 파싱된 토큰에서 데이터베이스명 목록 반환 (m_vecStatements 집계)
std::vector<std::string> SQLEngine::GetDatabaseNames() const
{
	std::vector<std::string> vecResult;
	for (const auto& stmt : m_vecStatements)
	{
		for (const TableRefInfo& stRef : stmt.vecTableRefs)
		{
			if (!stRef.szDatabase.empty())
				vecResult.push_back(stRef.szDatabase);
		}
	}
	return vecResult;
}

// [GSP: getTableName / getSchemaString 대응]
// 별칭(Alias) 포함 테이블 참조 전체 목록 반환
std::vector<TableRefInfo> SQLEngine::GetTableRefs() const
{
	std::vector<TableRefInfo> vecResult;
	for (const auto& stmt : m_vecStatements)
		vecResult.insert(vecResult.end(), stmt.vecTableRefs.begin(), stmt.vecTableRefs.end());
	return vecResult;
}

// [GSP: getLinkedColumns 대응]
// 컬럼 참조 목록 반환 (한정자-테이블 매핑 포함)
std::vector<ColumnRefInfo> SQLEngine::GetLinkedColumns() const
{
	std::vector<ColumnRefInfo> vecResult;
	for (const auto& stmt : m_vecStatements)
		vecResult.insert(vecResult.end(), stmt.vecColumnRefs.begin(), stmt.vecColumnRefs.end());
	return vecResult;
}

// [GSP: isTableDetermined 대응]
// 해당 컬럼 참조의 테이블이 결정되었는지 반환
bool SQLEngine::IsTableDetermined(const ColumnRefInfo& stCol)
{
	return stCol.bTableDetermined;
}

// Parse() 호출 여부 반환
bool SQLEngine::IsParse() const
{
	return m_bIsParsed;
}

// 파싱 결과 초기화
void SQLEngine::Clear()
{
	m_vecStatements.clear();
	m_vecTokens.clear();
	m_nDatabaseType = -1;
	m_bIsParsed = false;
}

// 저장된 stmt 목록에서 n번째 문장에 서브쿼리가 존재하는지 반환 (0-based index)
bool SQLEngine::HasSubQuery(int nIndex) const
{
	if (nIndex < 0 || nIndex >= static_cast<int>(m_vecStatements.size()))
		return false;

	return m_vecStatements[nIndex].bHasSubQuery;
}

// 저장된 stmt 목록에서 n번째 문장의 서브쿼리 개수 반환 (0-based index)
int SQLEngine::GetSubQueryCount(int nIndex) const
{
	if (nIndex < 0 || nIndex >= static_cast<int>(m_vecStatements.size()))
		return 0;

	return static_cast<int>(m_vecStatements[nIndex].vecSubQueries.size());
}

// 저장된 stmt 목록에서 n번째 문장의 m번째 서브쿼리 정보 반환 (0-based index)
SqlStatementInfo SQLEngine::GetSubQueryAt(int nIndex, int nSubIndex) const
{
	SqlStatementInfo emptyInfo;
	emptyInfo.index = -1;
	emptyInfo.type = SqlStatementType::UNKNOWN;
	emptyInfo.bHasSubQuery = false;

	if (nIndex < 0 || nIndex >= static_cast<int>(m_vecStatements.size()))
		return emptyInfo;

	const auto& vecSubs = m_vecStatements[nIndex].vecSubQueries;
	if (nSubIndex < 0 || nSubIndex >= static_cast<int>(vecSubs.size()))
		return emptyInfo;

	return vecSubs[nSubIndex];
}

// -------------------------------------------------------
// [통합] GetRoleFromLexerToken - DB 타입 코드로 분기
// -------------------------------------------------------

// [정적] nDatabaseType에 맞는 DB별 함수로 분기
TokenRole SQLEngine::GetRoleFromLexerToken(size_t tokenTypeId, const std::string& tokenText, int nDatabaseType) const
{
	switch (nDatabaseType)
	{
	case (int)DatabaseType::DB_ORACLE:
		return GetRoleFromLexerTokenOracle(tokenTypeId, tokenText);
	case (int)DatabaseType::DB_MYSQL:
		return GetRoleFromLexerTokenMySQL(tokenTypeId, tokenText);
	case (int)DatabaseType::DB_SQLSERVER:
		return GetRoleFromLexerTokenSQLServer(tokenTypeId, tokenText);
	case (int)DatabaseType::DB_POSTGRESQL:
		return GetRoleFromLexerTokenPostgreSQL(tokenTypeId, tokenText);
	case (int)DatabaseType::DB_DB2:
		return GetRoleFromLexerTokenDB2(tokenTypeId, tokenText);
	default:
		return TokenRole::UNKNOWN;
	}
}

// [인스턴스] 마지막 Parse()에서 저장된 m_nDatabaseType으로 분기
TokenRole SQLEngine::GetRoleFromLexerToken(size_t tokenTypeId, const std::string& tokenText) const
{
	return GetRoleFromLexerToken(tokenTypeId, tokenText, m_nDatabaseType);
}


// ============================================================
// [정적 편의 함수] 외부에서 vector를 직접 넘겨 메타정보 조회
// ============================================================

// stmt 목록의 SQL 문장 수 반환
int SQLEngine::GetStatementCount(const std::vector<SqlStatementInfo>& vecStmts)
{
	return static_cast<int>(vecStmts.size());
}

// stmt 목록에서 n번째 SQL 문장의 타입 반환 (0-based index)
SqlStatementType SQLEngine::GetStatementTypeAt(const std::vector<SqlStatementInfo>& vecStmts, int nIndex)
{
	if (nIndex < 0 || nIndex >= static_cast<int>(vecStmts.size()))
		return SqlStatementType::UNKNOWN;

	return vecStmts[nIndex].type;
}

// stmt 목록에서 n번째 SQL 문장의 문법 오류 여부 반환 (0-based index)
// - vecStmts의 각 항목에 nDatabaseType이 설정되어 있어야 정확히 동작
// - ParseMultipleQueries + Parse() 경유 시 자동 설정됨
bool SQLEngine::HasSyntaxError(const std::vector<SqlStatementInfo>& vecStmts, int nIndex)
{
	if (nIndex < 0 || nIndex >= static_cast<int>(vecStmts.size()))
		return true;

	// bHasError가 이미 설정된 경우 그대로 반환
	if (vecStmts[nIndex].bHasError)
		return true;

	// bHasError가 false라도 nDatabaseType이 없으면 재파싱 불가
	const SqlStatementInfo& stInfo = vecStmts[nIndex];
	if (stInfo.sqlText.empty())
		return false;

	// nDatabaseType 기반으로 개별 문장을 재파싱하여 오류 감지
	switch (static_cast<DatabaseType>(stInfo.nDatabaseType))
	{
	case DatabaseType::DB_ORACLE:
		return CheckSyntaxErrorOracle(stInfo.sqlText);
	case DatabaseType::DB_MYSQL:
		return CheckSyntaxErrorMySQL(stInfo.sqlText);
	case DatabaseType::DB_SQLSERVER:
		return CheckSyntaxErrorSQLServer(stInfo.sqlText);
	case DatabaseType::DB_POSTGRESQL:
		return CheckSyntaxErrorPostgreSQL(stInfo.sqlText);
	case DatabaseType::DB_DB2:
		return CheckSyntaxErrorDB2(stInfo.sqlText);
	default:
		return false;
	}
}
