#pragma once

#include <string>
#include <vector>

class CTestMFCDlg : public CDialogEx
{
public:
	CTestMFCDlg(CWnd* pParent = nullptr);

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TestMFC_DIALOG };
#endif

	// SQL 문 유형을 나타내는 열거형
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

protected:
	virtual void DoDataExchange(CDataExchange* pDX);


	void AddTraceLog(LPCTSTR lpszFormat, ...);

	// SQL 유형 식별 함수
	SqlStatementType IdentifySqlType(const std::string& sqlQuery);
	CString SqlTypeToString(SqlStatementType type);

	// 복합 쿼리 파싱 결과를 저장하는 구조체
	struct SqlStatementInfo {
		int index;                  // 쿼리 순번 (1부터 시작)
		SqlStatementType type;      // SQL 유형
		std::string sqlText;        // 원본 SQL 텍스트
		size_t startLine;           // 시작 라인
		size_t startColumn;         // 시작 컬럼
	};

	// 복합 쿼리 파싱 함수
	std::vector<SqlStatementInfo> ParseMultipleQueries(const std::string& sqlQueries);

	// 특정 인덱스의 쿼리 가져오기 (0부터 시작)
	SqlStatementInfo GetQueryAt(const std::string& sqlQueries, size_t index);

	// ============================================================
	// 토큰 정보 관련
	// ============================================================

	// 토큰의 의미적 역할
public:
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

	// 토큰 정보 구조체
	struct TokenInfo {
		int index;              // 토큰 순번 (1부터)
		std::string text;       // 토큰 텍스트
		std::string tokenType;  // Lexer 토큰 타입명 (SELECT_SYMBOL 등)
		TokenRole role;         // 의미적 역할
		std::string roleDesc;   // 역할 설명 (한글)
		size_t line;            // 라인 번호
		size_t column;          // 컬럼 위치
		size_t startIndex;      // 시작 인덱스
		size_t stopIndex;       // 종료 인덱스
	};

	// 토큰화 함수
	std::vector<TokenInfo> TokenizeQuery(const std::string& sqlQuery);

	// TokenRole을 문자열로 변환
	CString TokenRoleToString(TokenRole role);

protected:
	HICON m_hIcon;


	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonParse(); // 파싱시작 ( 지금사용안함 )
	afx_msg void OnBnClickedButtonIdentify(); // 쿼리 타입 분석 
	afx_msg void OnBnClickedButtonMultiParse();  // 복합 쿼리 파싱 버튼
	afx_msg void OnBnClickedButtonTokenize();    // 토큰화 버튼
};
