#pragma once
#include <string>
#include <vector>

// 1. 유형 정의 (Dlg 클래스 안에 있던 것을 이리로 이동)

enum class SqlStatementType {
	UNKNOWN,
	// DML (Data Manipulation Language)
	SELECT_STATEMENT,
	INSERT_STATEMENT,
	UPDATE_STATEMENT,
	DELETE_STATEMENT,
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
};

struct TokenInfo {
    int index;
    std::string text;
    std::string tokenType;
    TokenRole role;
    std::string roleDesc;
    size_t line;
    size_t column;
    size_t startIndex;
    size_t stopIndex;
};

// 2. 엔진 클래스
class SQLEngine 
{
public:
    static std::vector<SqlStatementInfo> ParseMultipleQueriesOracle(const std::string& sqlQueries);
    static std::vector<SqlStatementInfo> ParseMultipleQueriesMySQL(const std::string& sqlQueries);

    static std::vector<TokenInfo> TokenizeQueryOracle(const std::string& sqlQuery);
    static std::vector<TokenInfo> TokenizeQueryMySQL(const std::string& sqlQuery);

	static TokenRole GetRoleFromLexerTokenOracle(size_t tokenType, const std::string& tokenText);
    static TokenRole GetRoleFromLexerTokenMySQL(size_t tokenType, const std::string& tokenText);



    static std::string SqlTypeToString(SqlStatementType type);
    static std::string TokenRoleToString(TokenRole role);


    static SqlStatementInfo GetQueryAtMySQL(const std::string& sqlQueries, size_t index);
    static SqlStatementType IdentifySqlTypeMySQL(const std::string& sqlQuery);

    


};