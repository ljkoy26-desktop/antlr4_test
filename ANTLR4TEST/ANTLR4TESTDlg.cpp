#include "pch.h"
#include "framework.h"
#include "ANTLR4TEST.h"
#include "ANTLR4TESTDlg.h"
#include "afxdialogex.h"

// 모든 ANTLR 관련 설정은 이 하나로 끝냅니다.
#include "../Common/Include/AntlrProxy.h"

// 네임스페이스 사용
using namespace antlr4;

// [주의] DEBUG_NEW는 반드시 ANTLR 헤더들 "아래"에 있어야 합니다.
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CANTLR4TESTDlg::CANTLR4TESTDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ANTLR4TEST_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CANTLR4TESTDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CANTLR4TESTDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_PARSE, &CANTLR4TESTDlg::OnBnClickedButtonParse)
	ON_BN_CLICKED(IDC_BUTTON_TYPE, &CANTLR4TESTDlg::OnBnClickedButtonIdentify)
	ON_BN_CLICKED(IDC_BUTTON_MULTI, &CANTLR4TESTDlg::OnBnClickedButtonMultiParse)
	ON_BN_CLICKED(IDC_BUTTON_TOKEN, &CANTLR4TESTDlg::OnBnClickedButtonTokenize)
END_MESSAGE_MAP()


BOOL CANTLR4TESTDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}


	SetIcon(m_hIcon, TRUE);
	SetIcon(m_hIcon, FALSE);

	// 복합 쿼리 테스트용 기본 SQL
	SetDlgItemText(IDC_EDIT_SQL, _T("SELECT * FROM emp;\r\nINSERT INTO emp VALUES(1, 'John');\r\nGRANT SELECT ON db.* TO 'user'@'localhost';"));

	return TRUE;
}

void CANTLR4TESTDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	CDialogEx::OnSysCommand(nID, lParam);
}
void CANTLR4TESTDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this);

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

HCURSOR CANTLR4TESTDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CANTLR4TESTDlg::OnBnClickedButtonParse()
{
	// 1. UI에서 SQL 가져오기

	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	// CString -> std::string 변환 (ANTLR는 std::string을 씁니다)
	std::string sqlQuery = CT2A(strInput);

	if (sqlQuery.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	try {
		// 2. ANTLR 파이프라인 구축
		ANTLRInputStream input(sqlQuery);

		// Lexer (토큰 분리)
		antlrcpp_mysql::MySQLLexer lexer(&input);
		CommonTokenStream tokens(&lexer);

		// Parser (구조 분석)
		antlrcpp_mysql::MySQLParser parser(&tokens);

		// [중요] 에러 리스너 설정 (콘솔 에러 방지)
		parser.removeErrorListeners();
		// 필요하면 커스텀 에러 리스너를 추가할 수 있습니다.

		// 3. 파싱 시작 (MySQL 문법의 최상위 규칙 호출)
		// 보통 'query', 'root', 'sqlStatements' 등이 최상위입니다.
		// antlrcpp_mysql::MySQLParser.h를 열어보면 최상위 함수를 알 수 있습니다. 
		// 여기서는 예시로 'query()' 또는 'root()'를 가정합니다.

		// ★ .g4 파일 확인 결과 MySQL 최상위는 보통 'query' 또는 'sqlStatements' 입니다.
		// 자동완성으로 parser. 치고 나오는 함수 중 가장 그럴싸한 것을 고르세요.
		antlrcpp_mysql::MySQLParser::QueryContext* tree = parser.query();

		// 4. 결과 확인
		size_t errorCount = parser.getNumberOfSyntaxErrors();

		if (errorCount == 0)
		{
			std::string s = tree->toStringTree(&parser);
			CStringA sTraceA = s.c_str();
			CString sTrace = (CString)sTraceA;

			AddTraceLog(sTrace);
		}
		else
		{
			std::string s = tree->toStringTree(&parser);
			CStringA sTraceA = s.c_str();

			CString sTrace;
			sTrace.Format(_T("파싱 실패..\n오류 개수: %d"), errorCount);
			AddTraceLog(sTrace);
		}
	}
	catch (const std::exception& e) {
		// C++ 표준 예외 처리
		CString msg;
		msg.Format(_T("Exception 발생: %s"), CString(e.what()));
		AfxMessageBox(msg);
	}
	catch (...) {
		AfxMessageBox(_T("알 수 없는 에러 발생"));
	}
}

void CANTLR4TESTDlg::AddTraceLog(LPCTSTR lpszFormat, ...)
{
	// 1. 가변 인자 문자열 구성
	CString strLog;
	va_list args;
	va_start(args, lpszFormat);
	strLog.FormatV(lpszFormat, args);
	va_end(args);

	strLog += _T("\r\n");

	// 2. 컨트롤 포인터 가져오기 및 안전성 검사
	CEdit* pEditTrace = (CEdit*)GetDlgItem(IDC_EDIT_TRACE);
	if (pEditTrace == nullptr) return; // 컨트롤을 찾을 수 없으면 중단

	// 3. 커서를 마지막 위치로 이동
	int nLength = pEditTrace->GetWindowTextLength();
	pEditTrace->SetSel(nLength, nLength);

	// 4. 선택 영역에 텍스트 삽입
	pEditTrace->ReplaceSel(strLog);

	// 5. 스크롤을 마지막으로 이동 (WM_ 추가)
	pEditTrace->SendMessage(WM_VSCROLL, SB_BOTTOM, NULL);
}

// SQL 유형 식별 함수 구현
CANTLR4TESTDlg::SqlStatementType CANTLR4TESTDlg::IdentifySqlType(const std::string& sqlQuery)
{
	try {
		ANTLRInputStream input(sqlQuery);
		antlrcpp_mysql::MySQLLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		antlrcpp_mysql::MySQLParser parser(&tokens);

		parser.removeErrorListeners();

		// 최상위 규칙으로 파싱
		antlrcpp_mysql::MySQLParser::QueryContext* queryCtx = parser.query();

		if (parser.getNumberOfSyntaxErrors() > 0) {
			return SqlStatementType::UNKNOWN;
		}

		// simpleStatement를 가져옴
		auto* simpleStmt = queryCtx->simpleStatement();
		if (!simpleStmt) {
			return SqlStatementType::UNKNOWN;
		}

		// DML 체크
		if (simpleStmt->selectStatement()) {
			return SqlStatementType::SELECT_STATEMENT;
		}
		if (simpleStmt->insertStatement()) {
			return SqlStatementType::INSERT_STATEMENT;
		}
		if (simpleStmt->updateStatement()) {
			return SqlStatementType::UPDATE_STATEMENT;
		}
		if (simpleStmt->deleteStatement()) {
			return SqlStatementType::DELETE_STATEMENT;
		}
		if (simpleStmt->replaceStatement()) {
			return SqlStatementType::REPLACE_STATEMENT;
		}

		// DDL 체크 (CREATE, ALTER, DROP)
		if (auto* createStmt = simpleStmt->createStatement()) {
			// PL/SQL 관련 CREATE 문 세분화
			if (createStmt->createProcedure()) {
				return SqlStatementType::CREATE_PROCEDURE;
			}
			if (createStmt->createFunction()) {
				return SqlStatementType::CREATE_FUNCTION;
			}
			if (createStmt->createTrigger()) {
				return SqlStatementType::CREATE_TRIGGER;
			}
			if (createStmt->createEvent()) {
				return SqlStatementType::CREATE_EVENT;
			}
			return SqlStatementType::CREATE_STATEMENT;
		}
		if (simpleStmt->alterStatement()) {
			return SqlStatementType::ALTER_STATEMENT;
		}
		if (simpleStmt->dropStatement()) {
			return SqlStatementType::DROP_STATEMENT;
		}
		if (simpleStmt->truncateTableStatement()) {
			return SqlStatementType::TRUNCATE_STATEMENT;
		}

		// DCL 체크 (GRANT, REVOKE)
		if (auto* accountStmt = simpleStmt->accountManagementStatement()) {
			if (accountStmt->grantStatement()) {
				return SqlStatementType::GRANT_STATEMENT;
			}
			if (accountStmt->revokeStatement()) {
				return SqlStatementType::REVOKE_STATEMENT;
			}
		}

		// TCL 체크 (BEGIN, COMMIT, ROLLBACK 등)
		if (simpleStmt->transactionOrLockingStatement()) {
			return SqlStatementType::TRANSACTION_STATEMENT;
		}

		// PL/SQL: CALL 문
		if (simpleStmt->callStatement()) {
			return SqlStatementType::CALL_STATEMENT;
		}

		// SET 문
		if (simpleStmt->setStatement()) {
			return SqlStatementType::SET_STATEMENT;
		}

		// SHOW 문들 체크
		if (simpleStmt->showDatabasesStatement() ||
			simpleStmt->showTablesStatement() ||
			simpleStmt->showColumnsStatement() ||
			simpleStmt->showStatusStatement() ||
			simpleStmt->showVariablesStatement() ||
			simpleStmt->showGrantsStatement() ||
			simpleStmt->showCreateTableStatement() ||
			simpleStmt->showCreateDatabaseStatement()) {
			return SqlStatementType::SHOW_STATEMENT;
		}

		// USE 문 (utilityStatement 내부)
		if (simpleStmt->utilityStatement()) {
			return SqlStatementType::USE_STATEMENT;
		}

	}
	catch (...) {
		return SqlStatementType::UNKNOWN;
	}

	return SqlStatementType::UNKNOWN;
}

CString CANTLR4TESTDlg::SqlTypeToString(SqlStatementType type)
{
	switch (type) {
	case SqlStatementType::SELECT_STATEMENT:   return _T("SELECT (DML)");
	case SqlStatementType::INSERT_STATEMENT:   return _T("INSERT (DML)");
	case SqlStatementType::UPDATE_STATEMENT:   return _T("UPDATE (DML)");
	case SqlStatementType::DELETE_STATEMENT:   return _T("DELETE (DML)");
	case SqlStatementType::REPLACE_STATEMENT:  return _T("REPLACE (DML)");
	case SqlStatementType::CREATE_STATEMENT:   return _T("CREATE (DDL)");
	case SqlStatementType::ALTER_STATEMENT:    return _T("ALTER (DDL)");
	case SqlStatementType::DROP_STATEMENT:     return _T("DROP (DDL)");
	case SqlStatementType::TRUNCATE_STATEMENT: return _T("TRUNCATE (DDL)");
	case SqlStatementType::GRANT_STATEMENT:    return _T("GRANT (DCL)");
	case SqlStatementType::REVOKE_STATEMENT:   return _T("REVOKE (DCL)");
	case SqlStatementType::TRANSACTION_STATEMENT: return _T("TRANSACTION (TCL)");
	case SqlStatementType::CALL_STATEMENT:     return _T("CALL (PL/SQL)");
	case SqlStatementType::CREATE_PROCEDURE:   return _T("CREATE PROCEDURE (PL/SQL)");
	case SqlStatementType::CREATE_FUNCTION:    return _T("CREATE FUNCTION (PL/SQL)");
	case SqlStatementType::CREATE_TRIGGER:     return _T("CREATE TRIGGER (PL/SQL)");
	case SqlStatementType::CREATE_EVENT:       return _T("CREATE EVENT (PL/SQL)");
	case SqlStatementType::SET_STATEMENT:      return _T("SET");
	case SqlStatementType::SHOW_STATEMENT:     return _T("SHOW");
	case SqlStatementType::USE_STATEMENT:      return _T("USE");
	default:                                   return _T("UNKNOWN");
	}
}

void CANTLR4TESTDlg::OnBnClickedButtonIdentify()
{
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	std::string sqlQuery = CT2A(strInput);

	if (sqlQuery.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	SqlStatementType stmtType = IdentifySqlType(sqlQuery);
	CString strType = SqlTypeToString(stmtType);

	CString strResult;
	strResult.Format(_T("SQL 유형: %s"), strType.GetString());
	AddTraceLog(strResult);
}

// 복합 쿼리 파싱: SimpleStatement에서 유형 식별하는 헬퍼 함수
CANTLR4TESTDlg::SqlStatementType CANTLR4TESTDlg_IdentifyFromSimpleStatement(antlrcpp_mysql::MySQLParser::SimpleStatementContext* simpleStmt)
{
	using SqlType = CANTLR4TESTDlg::SqlStatementType;

	if (!simpleStmt) {
		return SqlType::UNKNOWN;
	}

	// DML 체크
	if (simpleStmt->selectStatement()) {
		return SqlType::SELECT_STATEMENT;
	}
	if (simpleStmt->insertStatement()) {
		return SqlType::INSERT_STATEMENT;
	}
	if (simpleStmt->updateStatement()) {
		return SqlType::UPDATE_STATEMENT;
	}
	if (simpleStmt->deleteStatement()) {
		return SqlType::DELETE_STATEMENT;
	}
	if (simpleStmt->replaceStatement()) {
		return SqlType::REPLACE_STATEMENT;
	}

	// DDL 체크 (CREATE, ALTER, DROP)
	if (auto* createStmt = simpleStmt->createStatement()) {
		if (createStmt->createProcedure()) {
			return SqlType::CREATE_PROCEDURE;
		}
		if (createStmt->createFunction()) {
			return SqlType::CREATE_FUNCTION;
		}
		if (createStmt->createTrigger()) {
			return SqlType::CREATE_TRIGGER;
		}
		if (createStmt->createEvent()) {
			return SqlType::CREATE_EVENT;
		}
		return SqlType::CREATE_STATEMENT;
	}
	if (simpleStmt->alterStatement()) {
		return SqlType::ALTER_STATEMENT;
	}
	if (simpleStmt->dropStatement()) {
		return SqlType::DROP_STATEMENT;
	}
	if (simpleStmt->truncateTableStatement()) {
		return SqlType::TRUNCATE_STATEMENT;
	}

	// DCL 체크 (GRANT, REVOKE)
	if (auto* accountStmt = simpleStmt->accountManagementStatement()) {
		if (accountStmt->grantStatement()) {
			return SqlType::GRANT_STATEMENT;
		}
		if (accountStmt->revokeStatement()) {
			return SqlType::REVOKE_STATEMENT;
		}
	}

	// TCL 체크
	if (simpleStmt->transactionOrLockingStatement()) {
		return SqlType::TRANSACTION_STATEMENT;
	}

	// CALL 문
	if (simpleStmt->callStatement()) {
		return SqlType::CALL_STATEMENT;
	}

	// SET 문
	if (simpleStmt->setStatement()) {
		return SqlType::SET_STATEMENT;
	}

	// SHOW 문들
	if (simpleStmt->showDatabasesStatement() ||
		simpleStmt->showTablesStatement() ||
		simpleStmt->showColumnsStatement() ||
		simpleStmt->showStatusStatement() ||
		simpleStmt->showVariablesStatement() ||
		simpleStmt->showGrantsStatement() ||
		simpleStmt->showCreateTableStatement() ||
		simpleStmt->showCreateDatabaseStatement()) {
		return SqlType::SHOW_STATEMENT;
	}

	// USE 문
	if (simpleStmt->utilityStatement()) {
		return SqlType::USE_STATEMENT;
	}

	return SqlType::UNKNOWN;
}

// 복합 쿼리 파싱 함수 구현
std::vector<CANTLR4TESTDlg::SqlStatementInfo> CANTLR4TESTDlg::ParseMultipleQueries(const std::string& sqlQueries)
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
			info.type = CANTLR4TESTDlg_IdentifyFromSimpleStatement(simpleStmt);

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

// 특정 인덱스의 쿼리 가져오기 (0부터 시작)
CANTLR4TESTDlg::SqlStatementInfo CANTLR4TESTDlg::GetQueryAt(const std::string& sqlQueries, size_t index)
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
		info.type = CANTLR4TESTDlg_IdentifyFromSimpleStatement(simpleStmt);

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

// 복합 쿼리 파싱 버튼 핸들러
void CANTLR4TESTDlg::OnBnClickedButtonMultiParse()
{
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	std::string sqlQueries = CT2A(strInput);

	if (sqlQueries.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	// 복합 쿼리 파싱
	std::vector<SqlStatementInfo> results = ParseMultipleQueries(sqlQueries);

	if (results.empty()) {
		AddTraceLog(_T("파싱된 SQL 문이 없습니다."));
		return;
	}

	AddTraceLog(_T("===== 복합 쿼리 파싱 결과 ====="));
	AddTraceLog(_T("총 %d개의 SQL문 발견"), static_cast<int>(results.size()));
	AddTraceLog(_T(""));

	for (const auto& info : results) {
		CString strType = SqlTypeToString(info.type);
		CString strSql = CString(info.sqlText.c_str());

		// 긴 SQL은 50자로 자르기
		if (strSql.GetLength() > 50) {
			strSql = strSql.Left(50) + _T("...");
		}

		AddTraceLog(_T("[%d번째 문장] 유형: %s"), info.index, strType.GetString());
		AddTraceLog(_T("    위치: Line %d, Column %d"), static_cast<int>(info.startLine), static_cast<int>(info.startColumn));
		AddTraceLog(_T("    SQL: %s"), strSql.GetString());
		AddTraceLog(_T(""));
	}

	AddTraceLog(_T("===== 개별 쿼리 접근 예시 ====="));
	// 첫번째 쿼리 접근 예시
	SqlStatementInfo first = GetQueryAt(sqlQueries, 0);
	if (first.index > 0) {
		AddTraceLog(_T("첫번째 문장: %s"), SqlTypeToString(first.type).GetString());
	}

	// 두번째 쿼리가 있다면
	if (results.size() >= 2) {
		SqlStatementInfo second = GetQueryAt(sqlQueries, 1);
		if (second.index > 0) {
			AddTraceLog(_T("두번째 문장: %s"), SqlTypeToString(second.type).GetString());
		}
	}
}

// ============================================================
// 토큰화 관련 함수 구현
// ============================================================

// TokenRole을 문자열로 변환
CString CANTLR4TESTDlg::TokenRoleToString(TokenRole role)
{
	switch (role) {
	// 키워드/예약어
	case TokenRole::KEYWORD_SELECT:    return _T("예약어-SELECT");
	case TokenRole::KEYWORD_FROM:      return _T("예약어-FROM");
	case TokenRole::KEYWORD_WHERE:     return _T("예약어-WHERE");
	case TokenRole::KEYWORD_INSERT:    return _T("예약어-INSERT");
	case TokenRole::KEYWORD_UPDATE:    return _T("예약어-UPDATE");
	case TokenRole::KEYWORD_DELETE:    return _T("예약어-DELETE");
	case TokenRole::KEYWORD_INTO:      return _T("예약어-INTO");
	case TokenRole::KEYWORD_VALUES:    return _T("예약어-VALUES");
	case TokenRole::KEYWORD_SET:       return _T("예약어-SET");
	case TokenRole::KEYWORD_AND:       return _T("예약어-AND");
	case TokenRole::KEYWORD_OR:        return _T("예약어-OR");
	case TokenRole::KEYWORD_ORDER_BY:  return _T("예약어-ORDER BY");
	case TokenRole::KEYWORD_GROUP_BY:  return _T("예약어-GROUP BY");
	case TokenRole::KEYWORD_HAVING:    return _T("예약어-HAVING");
	case TokenRole::KEYWORD_JOIN:      return _T("예약어-JOIN");
	case TokenRole::KEYWORD_ON:        return _T("예약어-ON");
	case TokenRole::KEYWORD_AS:        return _T("예약어-AS");
	case TokenRole::KEYWORD_OTHER:     return _T("예약어-기타");
	// 식별자
	case TokenRole::COLUMN_NAME:       return _T("컬럼명");
	case TokenRole::TABLE_NAME:        return _T("테이블명");
	case TokenRole::ALIAS_NAME:        return _T("별칭");
	case TokenRole::SCHEMA_NAME:       return _T("스키마명");
	case TokenRole::FUNCTION_NAME:     return _T("함수명");
	// 리터럴
	case TokenRole::LITERAL_NUMBER:    return _T("숫자값");
	case TokenRole::LITERAL_STRING:    return _T("문자열값");
	case TokenRole::LITERAL_NULL:      return _T("NULL값");
	case TokenRole::LITERAL_BOOLEAN:   return _T("불린값");
	// 연산자
	case TokenRole::OPERATOR_COMPARISON:  return _T("비교연산자");
	case TokenRole::OPERATOR_ARITHMETIC:  return _T("산술연산자");
	case TokenRole::OPERATOR_LOGICAL:     return _T("논리연산자");
	// 구분자
	case TokenRole::SEPARATOR_COMMA:       return _T("구분자-쉼표");
	case TokenRole::SEPARATOR_DOT:         return _T("구분자-점");
	case TokenRole::SEPARATOR_SEMICOLON:   return _T("구분자-세미콜론");
	case TokenRole::SEPARATOR_PAREN_OPEN:  return _T("구분자-여는괄호");
	case TokenRole::SEPARATOR_PAREN_CLOSE: return _T("구분자-닫는괄호");
	// 기타
	case TokenRole::WHITESPACE:        return _T("공백");
	case TokenRole::COMMENT:           return _T("주석");
	case TokenRole::PARAMETER:         return _T("파라미터");
	default:                           return _T("알수없음");
	}
}

// Lexer 토큰 타입에서 기본 역할 결정
CANTLR4TESTDlg::TokenRole GetRoleFromLexerToken(size_t tokenType, const std::string& tokenText)
{
	using TR = CANTLR4TESTDlg::TokenRole;

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

// 토큰화 함수 구현
std::vector<CANTLR4TESTDlg::TokenInfo> CANTLR4TESTDlg::TokenizeQuery(const std::string& sqlQuery)
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
			info.role = GetRoleFromLexerToken(token->getType(), info.text);
			info.roleDesc = std::string(CT2A(TokenRoleToString(info.role)));
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

// 토큰화 버튼 핸들러
void CANTLR4TESTDlg::OnBnClickedButtonTokenize()
{
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	std::string sqlQuery = CT2A(strInput);

	if (sqlQuery.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	std::vector<TokenInfo> tokens = TokenizeQuery(sqlQuery);

	if (tokens.empty()) {
		AddTraceLog(_T("토큰이 없습니다."));
		return;
	}

	AddTraceLog(_T("===== SQL 토큰화 결과 ====="));
	AddTraceLog(_T("입력: %s"), strInput.GetString());
	AddTraceLog(_T(""));
	AddTraceLog(_T("총 %d개의 토큰 발견"), static_cast<int>(tokens.size()));
	AddTraceLog(_T(""));
	AddTraceLog(_T("%-4s %-20s %-25s %s"), _T("순번"), _T("토큰"), _T("토큰타입"), _T("역할"));
	AddTraceLog(_T("--------------------------------------------------------------"));

	for (const auto& tok : tokens) {
		CString strText = CString(tok.text.c_str());
		CString strType = CString(tok.tokenType.c_str());
		CString strRole = TokenRoleToString(tok.role);

		// 긴 텍스트 자르기
		if (strText.GetLength() > 18) {
			strText = strText.Left(15) + _T("...");
		}
		if (strType.GetLength() > 23) {
			strType = strType.Left(20) + _T("...");
		}

		AddTraceLog(_T("%-4d %-20s %-25s %s"),
			tok.index,
			strText.GetString(),
			strType.GetString(),
			strRole.GetString());
	}

	AddTraceLog(_T(""));
	AddTraceLog(_T("===== 상세 정보 ====="));
	for (const auto& tok : tokens) {
		AddTraceLog(_T("%d) %s ( %s )"),
			tok.index,
			CString(tok.text.c_str()).GetString(),
			TokenRoleToString(tok.role).GetString());
	}
}