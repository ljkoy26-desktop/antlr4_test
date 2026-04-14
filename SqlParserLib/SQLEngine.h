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
	KEYWORD_OTHER,
	// 식별자
	COLUMN_NAME,           // 컬럼명
	TABLE_NAME,            // 테이블명
	ALIAS_NAME,            // 별칭
	SCHEMA_NAME,           // 스키마명
	FUNCTION_NAME,         // 함수명
	// 리터럴 값
	LITERAL_NUMBER,        // 숫자 리터럴
	LITERAL_STRING,        // 문자열 리터럴
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

// 2. DB 종류 식별자
enum class DatabaseType
{
	DB_ORACLE     = 0,
	DB_MYSQL      = 1,
	DB_SQLSERVER  = 2,
	DB_POSTGRESQL = 3,
	DB_DB2        = 4
};

// 3. 엔진 클래스
class SQLPARSERLIB_API SQLEngine
{
public:
	// -------------------------------------------------------
	// [인스턴스 기반] 파싱 후 멤버변수에 저장하여 메타정보 조회
	// -------------------------------------------------------

	// 파싱 실행 후 결과를 m_vecStatements에 저장 (true: 성공, false: 결과 없음)
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

	// 파싱 결과 초기화 (m_vecStatements, m_nDatabaseType, m_bIsParsed 리셋)
	void Clear();

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

	SqlStatementInfo GetQueryAtMySQL(const std::string& sqlQueries, size_t index);
	SqlStatementType IdentifySqlTypeMySQL(const std::string& sqlQuery);

private:
	// 마지막 Parse() 호출 결과를 저장하는 멤버변수
	std::vector<SqlStatementInfo> m_vecStatements;

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
