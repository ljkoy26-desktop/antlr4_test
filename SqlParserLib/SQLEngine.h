#pragma once
#include <string>
#include <vector>

// SqlParserLib DLL 매크로
#include "../SqlParserLib/framework.h"

// 1. 유형 정의 (Dlg 클래스 안에 있던 것을 이리로 이동)

enum class SqlStatementType {
	UNKNOWN,
	// DML (Data Manipulation Language)
	SELECT_STATEMENT,
	INSERT_STATEMENT,
	UPDATE_STATEMENT,
	DELETE_STATEMENT,
	MERGE_STATEMENT,
	REPLACE_STATEMENT,
	// DDL (Data Definition Language)
	CREATE_STATEMENT,
	ALTER_STATEMENT,
	DROP_STATEMENT,
	TRUNCATE_STATEMENT,
	// DCL (Data Control Language)
	GRANT_STATEMENT,
	REVOKE_STATEMENT,
	// TCL (Transaction Control Language)
	TRANSACTION_STATEMENT,
	// PL/SQL / Procedural
	CALL_STATEMENT,
	CREATE_PROCEDURE,
	CREATE_FUNCTION,
	CREATE_TRIGGER,
	CREATE_EVENT,
	// Others
	SET_STATEMENT,
	SHOW_STATEMENT,
	USE_STATEMENT
};

enum class TokenRole {
	UNKNOWN,
	// 키워드/예약어
	KEYWORD_SELECT,
	KEYWORD_FROM,
	KEYWORD_WHERE,
	KEYWORD_INSERT,
	KEYWORD_UPDATE,
	KEYWORD_DELETE,
	KEYWORD_INTO,
	KEYWORD_VALUES,
	KEYWORD_SET,
	KEYWORD_AND,
	KEYWORD_OR,
	KEYWORD_ORDER_BY,
	KEYWORD_GROUP_BY,
	KEYWORD_HAVING,
	KEYWORD_JOIN,
	KEYWORD_ON,
	KEYWORD_AS,
	KEYWORD_RETURN,
	KEYWORD_OTHER,
	// 식별자
	IDENTIFIER,            // 식별자 (ident) - 렉서 수준, 파서 컨텍스트 미분류 상태
	COLUMN_NAME,           // 컬럼명 (파서 컨텍스트 기반 재분류 후)
	TABLE_NAME,            // 테이블명 (파서 컨텍스트 기반 재분류 후)
	ALIAS_NAME,            // 별칭 (파서 컨텍스트 기반 재분류 후)
	SCHEMA_NAME,           // 스키마명 (파서 컨텍스트 기반 재분류 후)
	FUNCTION_NAME,         // 함수명 (파서 컨텍스트 기반 재분류 후)
	// 리터럴 값
	LITERAL_NUMBER,        // 숫자 리터럴 (레거시 - 정수/실수 미분류)
	LITERAL_INTEGER,       // 정수 리터럴 (iconst) ex) 100, -5
	LITERAL_FLOAT,         // 실수 리터럴 (fconst) ex) 3.14, 10.5
	LITERAL_STRING,        // 문자열 리터럴 (sconst)
	LITERAL_NULL,          // NULL
	LITERAL_BOOLEAN,       // TRUE/FALSE
	// 연산자
	OPERATOR_COMPARISON,   // =, <, >, <=, >=, <>, !=
	OPERATOR_ARITHMETIC,   // +, -, *, /
	OPERATOR_LOGICAL,      // AND, OR, NOT
	// 구분자
	SEPARATOR_COMMA,       // ,
	SEPARATOR_DOT,         // .
	SEPARATOR_SEMICOLON,   // ;
	SEPARATOR_PAREN_OPEN,  // (
	SEPARATOR_PAREN_CLOSE, // )
	// 기타
	WHITESPACE,
	COMMENT,
	PARAMETER              // ? 또는 @param
};

struct TokenInfo {
	int index;
	std::string text;
	size_t tokenTypeId;    // ANTLR 원시 토큰 타입 ID (GetRoleFromLexerToken 재조회용)
	std::string tokenType;
	TokenRole role;
	std::string roleDesc;
	size_t line;
	size_t column;
	size_t startIndex;
	size_t stopIndex;
};

// 2-1. 테이블 참조 정보 (스키마·별칭 포함)
struct SQLPARSERLIB_API TableRefInfo
{
	std::string szDatabase;   // DB명     (db.schema.table 형태)
	std::string szSchema;     // 스키마명 (schema.table 형태)
	std::string szTable;      // 테이블명
	std::string szAlias;      // 별칭     (FROM table [AS] alias 형태)
};

// 2-2. 컬럼 참조 정보
struct SQLPARSERLIB_API ColumnRefInfo
{
	std::string szQualifier;       // 한정자 (테이블 별칭 또는 테이블명)
	std::string szColumn;          // 컬럼명
	bool        bTableDetermined;  // 테이블 결정 여부
	std::string szResolvedTable;   // 결정된 테이블명 (bTableDetermined=true 시)
};

// 2-3. DB 종류 식별자
enum class DatabaseType
{
	DB_ORACLE     = 0,
	DB_MYSQL      = 1,
	DB_SQLSERVER  = 2,
	DB_POSTGRESQL = 3,
	DB_DB2        = 4
};

struct SqlStatementInfo {
	int index;
	SqlStatementType type;
	std::string sqlText;
	size_t startLine;
	size_t startColumn;
	bool bHasError;       // 문법 오류 여부
	int nDatabaseType;    // 파싱에 사용된 DB 타입 (DatabaseType enum 값)
	bool bHasSubQuery;    // 서브쿼리 존재 여부
	std::vector<SqlStatementInfo> vecSubQueries; // 서브쿼리 목록
	std::vector<TableRefInfo>  vecTableRefs;   // [GSP: getTableList] 이 문장의 테이블 참조 목록
	std::vector<ColumnRefInfo> vecColumnRefs;  // [GSP: getLinkedColumns] 이 문장의 컬럼 참조 목록

	// -------------------------------------------------------
	// [편의 메서드] vecTableRefs / vecColumnRefs 에서 특정 항목만 추출
	// -------------------------------------------------------

	// 이 문장에서 참조된 테이블명 목록 반환 (중복 포함)
	std::vector<std::string> GetTableNames() const
	{
		std::vector<std::string> vec;
		for (const auto& r : vecTableRefs)
		{
			if (!r.szTable.empty())
				vec.push_back(r.szTable);
		}
		return vec;
	}

	// 이 문장에서 참조된 스키마명 목록 반환 (중복 포함)
	std::vector<std::string> GetSchemaNames() const
	{
		std::vector<std::string> vec;
		for (const auto& r : vecTableRefs)
		{
			if (!r.szSchema.empty())
				vec.push_back(r.szSchema);
		}
		return vec;
	}

	// 이 문장에서 참조된 데이터베이스명 목록 반환 (중복 포함)
	std::vector<std::string> GetDatabaseNames() const
	{
		std::vector<std::string> vec;
		for (const auto& r : vecTableRefs)
		{
			if (!r.szDatabase.empty())
				vec.push_back(r.szDatabase);
		}
		return vec;
	}

	// 이 문장에서 참조된 테이블 별칭 목록 반환 (중복 포함)
	std::vector<std::string> GetTableAliases() const
	{
		std::vector<std::string> vec;
		for (const auto& r : vecTableRefs)
		{
			if (!r.szAlias.empty())
				vec.push_back(r.szAlias);
		}
		return vec;
	}

	// 이 문장에서 참조된 컬럼명 목록 반환 (중복 포함)
	std::vector<std::string> GetColumnNames() const
	{
		std::vector<std::string> vec;
		for (const auto& c : vecColumnRefs)
		{
			if (!c.szColumn.empty())
				vec.push_back(c.szColumn);
		}
		return vec;
	}
};

// 3. 엔진 클래스
class SQLPARSERLIB_API SQLEngine
{
public:
	// -------------------------------------------------------
	// [인스턴스 기반] 파싱 후 멤버변수에 저장하여 메타정보 조회
	// -------------------------------------------------------

	// 파싱 실행 후 결과를 m_vecStatements, m_vecTokens에 저장 (true: 성공, false: 결과 없음)
	bool Parse(const std::string& szSqlQueries, int nDatabaseType);

	// 저장된 stmt 목록의 SQL 문장 수 반환
	int GetStatementCount() const;

	// 저장된 stmt 목록에서 n번째 SQL 문장의 타입 반환 (0-based index)
	SqlStatementType GetStatementTypeAt(int nIndex) const;

	// 저장된 stmt 목록에서 n번째 SQL 문장의 문법 오류 여부 반환 (0-based index)
	bool HasSyntaxError(int nIndex) const;

	// 저장된 stmt 목록 전체 반환
	const std::vector<SqlStatementInfo>& GetStatements() const;

	// Parse() 호출 여부 반환 (true: 호출됨, false: 미호출 또는 Clear() 이후)
	bool IsParse() const;

	// 파싱 결과 초기화 (m_vecStatements, m_vecTokens, m_nDatabaseType, m_bIsParsed 리셋)
	void Clear();

	// 저장된 토큰 목록 전체 반환 (Parse() 호출 시 자동 수집)
	const std::vector<TokenInfo>& GetTokens() const;

	// 저장된 토큰 수 반환
	int GetTokenCount() const;

	// -------------------------------------------------------
	// [테이블 참조 추출] Parse() 후 m_vecTokens 기반 분석
	// FROM / JOIN / INTO / UPDATE 뒤의 식별자 체인을 분석
	// 식별자 체인 규칙: table / schema.table / db.schema.table
	// -------------------------------------------------------

	// 파싱된 토큰에서 테이블명 목록 반환 (중복 포함)
	std::vector<std::string> GetTableNames() const;

	// 파싱된 토큰에서 스키마명 목록 반환 (중복 포함)
	std::vector<std::string> GetSchemaNames() const;

	// 파싱된 토큰에서 데이터베이스명 목록 반환 (중복 포함)
	std::vector<std::string> GetDatabaseNames() const;

	// [GSP: getTableName / getSchemaString 대응]
	// 별칭(Alias) 포함 테이블 참조 전체 목록 반환
	std::vector<TableRefInfo> GetTableRefs() const;

	// [GSP: getLinkedColumns 대응]
	// 컬럼 참조 목록 반환 (한정자-테이블 매핑 포함)
	std::vector<ColumnRefInfo> GetLinkedColumns() const;

	// [GSP: isTableDetermined 대응]
	// 해당 컬럼 참조의 테이블이 결정되었는지 반환
	static bool IsTableDetermined(const ColumnRefInfo& stCol);

	// 마지막 Parse()에서 설정된 DB 타입으로 토큰 역할 반환 (인스턴스 기반)
	TokenRole GetRoleFromLexerToken(size_t tokenTypeId, const std::string& tokenText) const;

	// 통합 토큰 역할 반환 함수 (nDatabaseType: DatabaseType enum 값 사용)
	TokenRole GetRoleFromLexerToken(size_t tokenTypeId, const std::string& tokenText, int nDatabaseType) const;

	// 저장된 stmt 목록에서 n번째 문장에 서브쿼리가 존재하는지 반환
	bool HasSubQuery(int nIndex) const;

	// 저장된 stmt 목록에서 n번째 문장의 서브쿼리 개수 반환
	int GetSubQueryCount(int nIndex) const;

	// 저장된 stmt 목록에서 n번째 문장의 m번째 서브쿼리 정보 반환 (0-based index)
	SqlStatementInfo GetSubQueryAt(int nIndex, int nSubIndex) const;

	// -------------------------------------------------------
	// [편의 함수] 외부에서 vector를 직접 넘겨 메타정보 조회
	// -------------------------------------------------------

	// stmt 목록의 SQL 문장 수 반환
	int GetStatementCount(const std::vector<SqlStatementInfo>& vecStmts);

	// stmt 목록에서 n번째 SQL 문장의 타입 반환 (0-based index)
	SqlStatementType GetStatementTypeAt(const std::vector<SqlStatementInfo>& vecStmts, int nIndex);

	// stmt 목록에서 n번째 SQL 문장의 문법 오류 여부 반환 (0-based index)
	bool HasSyntaxError(const std::vector<SqlStatementInfo>& vecStmts, int nIndex);

	// -------------------------------------------------------
	// [기존 함수]
	// -------------------------------------------------------

	// 통합 파싱 함수 (nDatabaseType: DatabaseType enum 값 사용)
	std::vector<SqlStatementInfo> ParseMultipleQueries(const std::string& sqlQueries, int nDatabaseType);

	// 통합 토큰화 함수 (nDatabaseType: DatabaseType enum 값 사용)
	std::vector<TokenInfo> TokenizeQuery(const std::string& sqlQuery, int nDatabaseType);

	std::string SqlTypeToString(SqlStatementType type);
	std::string TokenRoleToString(TokenRole role);

	// 토큰이 주석/세미콜론 타입인지 확인
	// 대상: 단일 행 주석(--) / 다중 행 주석(/**/) / 세미콜론(;)
	// GSP: TokenTypeComment { get_ttsimplecomment, get_ttbracketedcomment, get_ttsemicolon }
	static bool IsCommentType(const TokenInfo& stToken);

	SqlStatementInfo GetQueryAtMySQL(const std::string& sqlQueries, size_t index);
	SqlStatementType IdentifySqlTypeMySQL(const std::string& sqlQuery);

private:
	// 마지막 Parse() 에 의해 파싱된 SQL 문장목록을 저장 
	std::vector<SqlStatementInfo> m_vecStatements;

	// 마지막 Parse() 에 의해 파싱된 SQL 토큰목록을 전체저장 
	std::vector<TokenInfo> m_vecTokens;

	// 마지막 Parse() 호출에서 사용된 DB 타입 (GetRoleFromLexerToken 인스턴스 메서드에서 사용)
	int m_nDatabaseType = -1;

	// Parse() 호출 여부 플래그
	bool m_bIsParsed = false;

	// DB별 파싱 구현 (내부 전용)
	std::vector<SqlStatementInfo> ParseMultipleQueriesOracle(const std::string& sqlQueries);
	std::vector<SqlStatementInfo> ParseMultipleQueriesMySQL(const std::string& sqlQueries);
	std::vector<SqlStatementInfo> ParseMultipleQueriesSQLServer(const std::string& sqlQueries);
	std::vector<SqlStatementInfo> ParseMultipleQueriesPostgreSQL(const std::string& sqlQueries);
	std::vector<SqlStatementInfo> ParseMultipleQueriesDB2(const std::string& sqlQueries);

	// DB별 토큰화 구현 (내부 전용)
	std::vector<TokenInfo> TokenizeQueryOracle(const std::string& sqlQuery);
	std::vector<TokenInfo> TokenizeQueryMySQL(const std::string& sqlQuery);
	std::vector<TokenInfo> TokenizeQuerySQLServer(const std::string& sqlQuery);
	std::vector<TokenInfo> TokenizeQueryPostgreSQL(const std::string& sqlQuery);
	std::vector<TokenInfo> TokenizeQueryDB2(const std::string& sqlQuery);

	// DB별 문장 유형 판별 (내부 전용)
	SqlStatementType IdentifySqlTypeOracle(const std::string& szSql);
	SqlStatementType IdentifySqlTypeSQLServer(const std::string& szSql);
	SqlStatementType IdentifySqlTypePostgreSQL(const std::string& szSql);
	SqlStatementType IdentifySqlTypeDB2(const std::string& szSql);
	SqlStatementType IdentifySqlTypeAny(const std::string& szSql);

	// 통합 토큰 역할 반환 함수 (nDatabaseType: DatabaseType enum 값 사용)
	TokenRole GetRoleFromLexerTokenOracle(size_t tokenType, const std::string& tokenText) const;
	TokenRole GetRoleFromLexerTokenMySQL(size_t tokenType, const std::string& tokenText) const;
	TokenRole GetRoleFromLexerTokenSQLServer(size_t tokenType, const std::string& tokenText) const;
	TokenRole GetRoleFromLexerTokenPostgreSQL(size_t tokenType, const std::string& tokenText) const;
	TokenRole GetRoleFromLexerTokenDB2(size_t tokenType, const std::string& tokenText) const;

	// 문법 오류 감지 (내부 전용 - 개별 SQL 문장을 재파싱하여 오류 확인)
	bool CheckSyntaxErrorOracle(const std::string& szSql);
	bool CheckSyntaxErrorMySQL(const std::string& szSql);
	bool CheckSyntaxErrorSQLServer(const std::string& szSql);
	bool CheckSyntaxErrorPostgreSQL(const std::string& szSql);
	bool CheckSyntaxErrorDB2(const std::string& szSql);
};
