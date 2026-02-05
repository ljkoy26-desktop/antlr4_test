#pragma once
#include <string>
#include <vector>

// 1. 유형 정의 (Dlg 클래스 안에 있던 것을 이리로 이동)
enum class SqlStatementType {
    UNKNOWN, SELECT_STATEMENT, INSERT_STATEMENT, UPDATE_STATEMENT, DELETE_STATEMENT,
    CREATE_STATEMENT, ALTER_STATEMENT, DROP_STATEMENT, TRUNCATE_STATEMENT,
    GRANT_STATEMENT, REVOKE_STATEMENT, TRANSACTION_STATEMENT, CALL_STATEMENT,
    CREATE_PROCEDURE, CREATE_FUNCTION, CREATE_TRIGGER, CREATE_EVENT,
    SET_STATEMENT, SHOW_STATEMENT, USE_STATEMENT, REPLACE_STATEMENT
};

enum class TokenRole {
    UNKNOWN, KEYWORD_SELECT, KEYWORD_FROM, KEYWORD_WHERE, KEYWORD_INSERT,
    KEYWORD_UPDATE, KEYWORD_DELETE, KEYWORD_INTO, KEYWORD_VALUES, KEYWORD_SET,
    KEYWORD_AND, KEYWORD_OR, KEYWORD_ORDER_BY, KEYWORD_GROUP_BY, KEYWORD_HAVING,
    KEYWORD_JOIN, KEYWORD_ON, KEYWORD_AS, KEYWORD_OTHER,
    COLUMN_NAME, TABLE_NAME, ALIAS_NAME, SCHEMA_NAME, FUNCTION_NAME,
    LITERAL_NUMBER, LITERAL_STRING, LITERAL_NULL, LITERAL_BOOLEAN,
    OPERATOR_COMPARISON, OPERATOR_ARITHMETIC, OPERATOR_LOGICAL,
    SEPARATOR_COMMA, SEPARATOR_DOT, SEPARATOR_SEMICOLON, SEPARATOR_PAREN_OPEN, SEPARATOR_PAREN_CLOSE,
    WHITESPACE, COMMENT, PARAMETER
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
    static std::vector<TokenInfo> TokenizeQueryOracle(const std::string& sqlQuery);
    static std::string SqlTypeToString(SqlStatementType type);
    static std::string TokenRoleToString(TokenRole role);

    // static SqlStatementType IdentifyOracleStatement(antlrcpp_oracle::PlSqlParser::Unit_statementContext* unitStmt);

    // static std::vector<SqlStatementInfo> ParseMultipleQueriesOracle(const std::string& sqlQueries);

    static TokenRole GetRoleFromLexerTokenOracle(size_t tokenType, const std::string& tokenText);

};