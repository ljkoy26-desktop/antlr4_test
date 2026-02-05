#include "SQLEngine.h"
#include "../Common/Include/AntlrProxy.h"

using namespace antlrcpp_oracle;
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

static SqlStatementType IdentifyOracleStatement(antlrcpp_oracle::PlSqlParser::Unit_statementContext* unitStmt)
{
	using SqlType = SqlStatementType;

	if (!unitStmt) {
		return SqlType::UNKNOWN;
	}

	// DML 체크 (data_manipulation_language_statements)
	if (auto* dmlStmt = unitStmt->data_manipulation_language_statements()) {
		if (dmlStmt->select_statement()) {
			return SqlType::SELECT_STATEMENT;
		}
		if (dmlStmt->insert_statement()) {
			return SqlType::INSERT_STATEMENT;
		}
		if (dmlStmt->update_statement()) {
			return SqlType::UPDATE_STATEMENT;
		}
		if (dmlStmt->delete_statement()) {
			return SqlType::DELETE_STATEMENT;
		}
	}

	// DDL: CREATE 문들
	if (unitStmt->create_table()) {
		return SqlType::CREATE_STATEMENT;
	}
	if (unitStmt->create_view()) {
		return SqlType::CREATE_STATEMENT;
	}
	if (unitStmt->create_index()) {
		return SqlType::CREATE_STATEMENT;
	}
	if (unitStmt->create_sequence()) {
		return SqlType::CREATE_STATEMENT;
	}
	if (unitStmt->create_synonym()) {
		return SqlType::CREATE_STATEMENT;
	}
	if (unitStmt->create_database()) {
		return SqlType::CREATE_STATEMENT;
	}
	if (unitStmt->create_user()) {
		return SqlType::CREATE_STATEMENT;
	}
	if (unitStmt->create_role()) {
		return SqlType::CREATE_STATEMENT;
	}
	if (unitStmt->create_tablespace()) {
		return SqlType::CREATE_STATEMENT;
	}

	// PL/SQL 프로시저/함수/트리거/패키지
	if (unitStmt->create_procedure_body()) {
		return SqlType::CREATE_PROCEDURE;
	}
	if (unitStmt->create_function_body()) {
		return SqlType::CREATE_FUNCTION;
	}
	if (unitStmt->create_trigger()) {
		return SqlType::CREATE_TRIGGER;
	}
	if (unitStmt->create_package()) {
		return SqlType::CREATE_PROCEDURE;  // 패키지도 프로시저 계열로
	}
	if (unitStmt->create_package_body()) {
		return SqlType::CREATE_PROCEDURE;
	}

	// DDL: ALTER 문들
	if (unitStmt->alter_table()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_index()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_view()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_sequence()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_user()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_session()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_procedure()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_function()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_trigger()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (unitStmt->alter_package()) {
		return SqlType::ALTER_STATEMENT;
	}

	// DDL: DROP 문들
	if (unitStmt->drop_table()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_view()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_index()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_sequence()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_synonym()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_user()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_role()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_procedure()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_function()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_trigger()) {
		return SqlType::DROP_STATEMENT;
	}
	if (unitStmt->drop_package()) {
		return SqlType::DROP_STATEMENT;
	}

	// DDL: TRUNCATE
	if (unitStmt->truncate_table()) {
		return SqlType::TRUNCATE_STATEMENT;
	}

	// DCL: GRANT/REVOKE
	if (unitStmt->grant_statement()) {
		return SqlType::GRANT_STATEMENT;
	}
	if (unitStmt->revoke_statement()) {
		return SqlType::REVOKE_STATEMENT;
	}

	// TCL: COMMIT/ROLLBACK 등
	if (unitStmt->transaction_control_statements()) {
		return SqlType::TRANSACTION_STATEMENT;
	}

	// PL/SQL: CALL 문
	if (unitStmt->call_statement()) {
		return SqlType::CALL_STATEMENT;
	}

	// PL/SQL: Anonymous Block (BEGIN ... END)
	if (unitStmt->anonymous_block()) {
		return SqlType::CALL_STATEMENT;  // 익명 블록은 CALL 계열로 분류
	}

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