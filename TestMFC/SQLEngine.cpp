#include "SQLEngine.h"
#include "../Common/Include/AntlrProxy.h"

using namespace antlrcpp_oracle;
using namespace antlrcpp_mysql;
using namespace antlr4;

// 내부 헬퍼 함수 (노출 안 함)
SqlStatementType IdentifyFromUnitStatement(PlSqlParser::Unit_statementContext* unitStmt) {
    if (!unitStmt) return SqlStatementType::UNKNOWN;
    if (unitStmt->data_manipulation_language_statements()) {
        auto* dml = unitStmt->data_manipulation_language_statements();
        if (dml->select_statement()) return SqlStatementType::SELECT_STATEMENT;
        if (dml->insert_statement()) return SqlStatementType::INSERT_STATEMENT;
    }
    // ... 나머지 Identify 로직 TestMFCDlg.cpp에서 복사해서 붙여넣기 ...
    return SqlStatementType::UNKNOWN;
}

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
	if (unitStmt->alter_table()) 			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_index()) 			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_view()) 			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_sequence())			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_user()) 			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_session()) 			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_procedure()) 		return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_function()) 		return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_trigger()) 			return SqlType::ALTER_STATEMENT;
	if (unitStmt->alter_package())			return SqlType::ALTER_STATEMENT;

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

std::vector<SqlStatementInfo> SQLEngine::ParseMultipleQueriesOracle(const std::string& sqlQueries)
{
	std::vector<SqlStatementInfo> results;
	try {
		ANTLRInputStream input(sqlQueries);
		PlSqlLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		PlSqlParser parser(&tokens);

		parser.removeErrorListeners();
		lexer.removeErrorListeners();

		PlSqlParser::Sql_scriptContext* scriptCtx = parser.sql_script();
		if (!scriptCtx) return results;

		auto stmtList = scriptCtx->unit_statement();
		int index = 1;

		for (auto* unitStmt : stmtList) {
			SqlStatementInfo info;
			info.index = index++;

			// 이전에 옮긴 Identify 함수 호출
			// info.type = (int)IdentifyFromUnitStatementOracle(unitStmt); 

			if (unitStmt) {
				Token* startToken = unitStmt->getStart();
				Token* stopToken = unitStmt->getStop();

				if (startToken && stopToken) {
					info.startLine = startToken->getLine();
					info.startColumn = startToken->getCharPositionInLine();

					size_t startIdx = startToken->getStartIndex();
					size_t stopIdx = stopToken->getStopIndex();
					// INVALID_INDEX 대신 직접 값을 비교하거나 antlr4::Token::INVALID_INDEX 사용
					if (startIdx != (size_t)-1 && stopIdx != (size_t)-1 && stopIdx >= startIdx) {
						info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
					}
				}
			}
			results.push_back(info);
		}
	}
	catch (...) {}

	return results;
}

TokenRole SQLEngine::GetRoleFromLexerTokenOracle(size_t tokenType, const std::string& tokenText)
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
	case antlrcpp_oracle::PlSqlLexer::IF:
	case antlrcpp_oracle::PlSqlLexer::RETURN:
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
	case antlrcpp_oracle::PlSqlLexer::UNSIGNED_INTEGER:
	case antlrcpp_oracle::PlSqlLexer::APPROXIMATE_NUM_LIT:
		return TR::LITERAL_NUMBER;

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
		return TR::COLUMN_NAME;  // 기본값, 문맥에 따라 재분류 가능

	default:
		return TR::UNKNOWN;
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
	case TokenRole::KEYWORD_OTHER:      return "예약어-기타";

		// 식별자
	case TokenRole::COLUMN_NAME:        return "컬럼명";
	case TokenRole::TABLE_NAME:         return "테이블명";
	case TokenRole::ALIAS_NAME:         return "별칭";
	case TokenRole::SCHEMA_NAME:        return "스키마명";
	case TokenRole::FUNCTION_NAME:      return "함수명";

		// 리터럴
	case TokenRole::LITERAL_NUMBER:     return "숫자값";
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
	if (auto* createStmt = simpleStmt->createStatement()) {
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
	if (auto* accountStmt = simpleStmt->accountManagementStatement()) {
		if (accountStmt->grantStatement())  return SqlStatementType::GRANT_STATEMENT;
		if (accountStmt->revokeStatement()) return SqlStatementType::REVOKE_STATEMENT;
	}

	// TCL, CALL, SET, SHOW... (기존 로직 그대로 복사)
	if (simpleStmt->transactionOrLockingStatement()) return SqlStatementType::TRANSACTION_STATEMENT;
	if (simpleStmt->callStatement())                  return SqlStatementType::CALL_STATEMENT;
	if (simpleStmt->setStatement())                   return SqlStatementType::SET_STATEMENT;

	if (simpleStmt->showDatabasesStatement() || simpleStmt->showTablesStatement() ||
		simpleStmt->showColumnsStatement() || simpleStmt->showStatusStatement()) {
		return SqlStatementType::SHOW_STATEMENT;
	}

	if (simpleStmt->utilityStatement()) return SqlStatementType::USE_STATEMENT;

	return SqlStatementType::UNKNOWN;
}
std::vector<SqlStatementInfo> SQLEngine::ParseMultipleQueriesMySQL(const std::string& sqlQueries)
{
	std::vector<SqlStatementInfo> results;

	try {
		ANTLRInputStream input(sqlQueries);
		antlrcpp_mysql::MySQLLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_mysql::MySQLParser parser(&tokens);

		parser.removeErrorListeners();

		// queries() 규칙으로 여러 쿼리 파싱
		antlrcpp_mysql::MySQLParser::QueriesContext* queriesCtx = parser.queries();

		if (!queriesCtx) {
			return results;
		}

		// 모든 쿼리 가져오기
		std::vector<antlrcpp_mysql::MySQLParser::QueryContext*> queryList = queriesCtx->query();

		int index = 1;
		for (auto* queryCtx : queryList) {
			SqlStatementInfo info;
			info.index = index++;

			// simpleStatement 가져오기
			auto* simpleStmt = queryCtx->simpleStatement();
			info.type = IdentifyFromSimpleStatementMySQL(simpleStmt);

			// 토큰에서 원본 SQL 텍스트 추출
			if (simpleStmt) {
				antlr4::Token* startToken = simpleStmt->getStart();
				antlr4::Token* stopToken = simpleStmt->getStop();

				if (startToken && stopToken) {
					info.startLine = startToken->getLine();
					info.startColumn = startToken->getCharPositionInLine();

					// 원본 텍스트 추출
					size_t startIdx = startToken->getStartIndex();
					size_t stopIdx = stopToken->getStopIndex();
					if (startIdx != INVALID_INDEX && stopIdx != INVALID_INDEX && stopIdx >= startIdx) {
						info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
					}
				}
			}

			results.push_back(info);
		}
	}
	catch (...) {
		// 예외 발생 시 빈 결과 반환
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

		parser.removeErrorListeners();

		// 최상위 규칙으로 파싱
		antlrcpp_mysql::MySQLParser::QueryContext* queryCtx = parser.query();

		if (parser.getNumberOfSyntaxErrors() > 0) return SqlStatementType::UNKNOWN;

		// simpleStatement를 가져옴
		auto* simpleStmt = queryCtx->simpleStatement();
		if (!simpleStmt) return SqlStatementType::UNKNOWN;

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
TokenRole SQLEngine::GetRoleFromLexerTokenMySQL(size_t tokenType, const std::string& tokenText)
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

		// 숫자 리터럴
	case antlrcpp_mysql::MySQLLexer::INT_NUMBER:
	case antlrcpp_mysql::MySQLLexer::LONG_NUMBER:
	case antlrcpp_mysql::MySQLLexer::ULONGLONG_NUMBER:
	case antlrcpp_mysql::MySQLLexer::DECIMAL_NUMBER:
	case antlrcpp_mysql::MySQLLexer::FLOAT_NUMBER:
		return TR::LITERAL_NUMBER;

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

		// 식별자 (기본값 - 문맥에 따라 나중에 재분류됨)
	case antlrcpp_mysql::MySQLLexer::IDENTIFIER:
	case antlrcpp_mysql::MySQLLexer::BACK_TICK_QUOTED_ID:
		return TR::COLUMN_NAME;  // 기본값, 나중에 Parser에서 정확히 분류

	default:
		return TR::UNKNOWN;
	}
}

