#include "pch.h"
#include "framework.h"
#include "TestMFC.h"
#include "TestMFCDlg.h"
#include "afxdialogex.h"
#include "SQLEngine.h" // 엔진 인터페이스만 포함

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CTestMFCDlg::CTestMFCDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TestMFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTestMFCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//ON_BN_CLICKED(IDC_BUTTON_PARSE, &CTestMFCDlg::OnBnClickedButtonParseMySQL)
	//ON_BN_CLICKED(IDC_BUTTON_TYPE, &CTestMFCDlg::OnBnClickedButtonIdentifyMySQL)
	//ON_BN_CLICKED(IDC_BUTTON_MULTI_MYSQL, &CTestMFCDlg::OnBnClickedButtonMultiParseMySQL)
	//ON_BN_CLICKED(IDC_BUTTON_TOKEN_MYSQL, &CTestMFCDlg::OnBnClickedButtonTokenizeMySQL)
	ON_BN_CLICKED(IDC_BUTTON_MULTI_ORACLE, &CTestMFCDlg::OnBnClickedButtonMultiParseOracle)
	ON_BN_CLICKED(IDC_BUTTON_TOKEN_ORACLE, &CTestMFCDlg::OnBnClickedButtonTokenizeOracle)
END_MESSAGE_MAP()


BOOL CTestMFCDlg::OnInitDialog()
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

void CTestMFCDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	CDialogEx::OnSysCommand(nID, lParam);
}
void CTestMFCDlg::OnPaint()
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

HCURSOR CTestMFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

//void CTestMFCDlg::OnBnClickedButtonParseMySQL()
//{
//	// 1. UI에서 SQL 가져오기
//
//	CString strInput;
//	GetDlgItemText(IDC_EDIT_SQL, strInput);
//
//	// CString -> std::string 변환 (ANTLR는 std::string을 씁니다)
//	std::string sqlQuery = CT2A(strInput);
//
//	if (sqlQuery.empty()) {
//		AfxMessageBox(_T("SQL을 입력해주세요."));
//		return;
//	}
//
//	try {
//		// 2. ANTLR 파이프라인 구축
//		ANTLRInputStream input(sqlQuery);
//
//		// Lexer (토큰 분리)
//		antlrcpp_mysql::MySQLLexer lexer(&input);
//		CommonTokenStream tokens(&lexer);
//
//		// Parser (구조 분석)
//		antlrcpp_mysql::MySQLParser parser(&tokens);
//
//		// [중요] 에러 리스너 설정 (콘솔 에러 방지)
//		parser.removeErrorListeners();
//		// 필요하면 커스텀 에러 리스너를 추가할 수 있습니다.
//
//		// 3. 파싱 시작 (MySQL 문법의 최상위 규칙 호출)
//		// 보통 'query', 'root', 'sqlStatements' 등이 최상위입니다.
//		// antlrcpp_mysql::MySQLParser.h를 열어보면 최상위 함수를 알 수 있습니다. 
//		// 여기서는 예시로 'query()' 또는 'root()'를 가정합니다.
//
//		// ★ .g4 파일 확인 결과 MySQL 최상위는 보통 'query' 또는 'sqlStatements' 입니다.
//		// 자동완성으로 parser. 치고 나오는 함수 중 가장 그럴싸한 것을 고르세요.
//		antlrcpp_mysql::MySQLParser::QueryContext* tree = parser.query();
//
//		// 4. 결과 확인
//		size_t errorCount = parser.getNumberOfSyntaxErrors();
//
//		if (errorCount == 0)
//		{
//			std::string s = tree->toStringTree(&parser);
//			CStringA sTraceA = s.c_str();
//			CString sTrace = (CString)sTraceA;
//
//			AddTraceLog(sTrace);
//		}
//		else
//		{
//			std::string s = tree->toStringTree(&parser);
//			CStringA sTraceA = s.c_str();
//
//			CString sTrace;
//			sTrace.Format(_T("파싱 실패..\n오류 개수: %d"), errorCount);
//			AddTraceLog(sTrace);
//		}
//	}
//	catch (const std::exception& e) {
//		// C++ 표준 예외 처리
//		CString msg;
//		msg.Format(_T("Exception 발생: %s"), CString(e.what()));
//		AfxMessageBox(msg);
//	}
//	catch (...) {
//		AfxMessageBox(_T("알 수 없는 에러 발생"));
//	}
//}

void CTestMFCDlg::AddTraceLog(LPCTSTR lpszFormat, ...)
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
//CTestMFCDlg::SqlStatementType CTestMFCDlg::IdentifySqlTypeMySQL(const std::string& sqlQuery)
//{
//	try {
//		ANTLRInputStream input(sqlQuery);
//		antlrcpp_mysql::MySQLLexer lexer(&input);
//		CommonTokenStream tokens(&lexer);
//		antlrcpp_mysql::MySQLParser parser(&tokens);
//
//		parser.removeErrorListeners();
//
//		// 최상위 규칙으로 파싱
//		antlrcpp_mysql::MySQLParser::QueryContext* queryCtx = parser.query();
//
//		if (parser.getNumberOfSyntaxErrors() > 0) {
//			return SqlStatementType::UNKNOWN;
//		}
//
//		// simpleStatement를 가져옴
//		auto* simpleStmt = queryCtx->simpleStatement();
//		if (!simpleStmt) {
//			return SqlStatementType::UNKNOWN;
//		}
//
//		// DML 체크
//		if (simpleStmt->selectStatement()) {
//			return SqlStatementType::SELECT_STATEMENT;
//		}
//		if (simpleStmt->insertStatement()) {
//			return SqlStatementType::INSERT_STATEMENT;
//		}
//		if (simpleStmt->updateStatement()) {
//			return SqlStatementType::UPDATE_STATEMENT;
//		}
//		if (simpleStmt->deleteStatement()) {
//			return SqlStatementType::DELETE_STATEMENT;
//		}
//		if (simpleStmt->replaceStatement()) {
//			return SqlStatementType::REPLACE_STATEMENT;
//		}
//
//		// DDL 체크 (CREATE, ALTER, DROP)
//		if (auto* createStmt = simpleStmt->createStatement()) {
//			// PL/SQL 관련 CREATE 문 세분화
//			if (createStmt->createProcedure()) {
//				return SqlStatementType::CREATE_PROCEDURE;
//			}
//			if (createStmt->createFunction()) {
//				return SqlStatementType::CREATE_FUNCTION;
//			}
//			if (createStmt->createTrigger()) {
//				return SqlStatementType::CREATE_TRIGGER;
//			}
//			if (createStmt->createEvent()) {
//				return SqlStatementType::CREATE_EVENT;
//			}
//			return SqlStatementType::CREATE_STATEMENT;
//		}
//		if (simpleStmt->alterStatement()) {
//			return SqlStatementType::ALTER_STATEMENT;
//		}
//		if (simpleStmt->dropStatement()) {
//			return SqlStatementType::DROP_STATEMENT;
//		}
//		if (simpleStmt->truncateTableStatement()) {
//			return SqlStatementType::TRUNCATE_STATEMENT;
//		}
//
//		// DCL 체크 (GRANT, REVOKE)
//		if (auto* accountStmt = simpleStmt->accountManagementStatement()) {
//			if (accountStmt->grantStatement()) {
//				return SqlStatementType::GRANT_STATEMENT;
//			}
//			if (accountStmt->revokeStatement()) {
//				return SqlStatementType::REVOKE_STATEMENT;
//			}
//		}
//
//		// TCL 체크 (BEGIN, COMMIT, ROLLBACK 등)
//		if (simpleStmt->transactionOrLockingStatement()) {
//			return SqlStatementType::TRANSACTION_STATEMENT;
//		}
//
//		// PL/SQL: CALL 문
//		if (simpleStmt->callStatement()) {
//			return SqlStatementType::CALL_STATEMENT;
//		}
//
//		// SET 문
//		if (simpleStmt->setStatement()) {
//			return SqlStatementType::SET_STATEMENT;
//		}
//
//		// SHOW 문들 체크
//		if (simpleStmt->showDatabasesStatement() ||
//			simpleStmt->showTablesStatement() ||
//			simpleStmt->showColumnsStatement() ||
//			simpleStmt->showStatusStatement() ||
//			simpleStmt->showVariablesStatement() ||
//			simpleStmt->showGrantsStatement() ||
//			simpleStmt->showCreateTableStatement() ||
//			simpleStmt->showCreateDatabaseStatement()) {
//			return SqlStatementType::SHOW_STATEMENT;
//		}
//
//		// USE 문 (utilityStatement 내부)
//		if (simpleStmt->utilityStatement()) {
//			return SqlStatementType::USE_STATEMENT;
//		}
//
//	}
//	catch (...) {
//		return SqlStatementType::UNKNOWN;
//	}
//
//	return SqlStatementType::UNKNOWN;
//}



//void CTestMFCDlg::OnBnClickedButtonIdentifyMySQL()
//{
//	CString strInput;
//	GetDlgItemText(IDC_EDIT_SQL, strInput);
//
//	std::string sqlQuery = CT2A(strInput);
//
//	if (sqlQuery.empty()) {
//		AfxMessageBox(_T("SQL을 입력해주세요."));
//		return;
//	}
//
//	SqlStatementType stmtType = IdentifySqlTypeMySQL(sqlQuery);
//	CString strType = SqlTypeToString(stmtType);
//
//	CString strResult;
//	strResult.Format(_T("SQL 유형: %s"), strType.GetString());
//	AddTraceLog(strResult);
//}

// 복합 쿼리 파싱: SimpleStatement에서 유형 식별하는 헬퍼 함수
//CTestMFCDlg::SqlStatementType IdentifyFromSimpleStatementMySQL(antlrcpp_mysql::MySQLParser::SimpleStatementContext* simpleStmt)
//{
//	using SqlType = CTestMFCDlg::SqlStatementType;
//
//	if (!simpleStmt) {
//		return SqlType::UNKNOWN;
//	}
//
//	// DML 체크
//	if (simpleStmt->selectStatement()) {
//		return SqlType::SELECT_STATEMENT;
//	}
//	if (simpleStmt->insertStatement()) {
//		return SqlType::INSERT_STATEMENT;
//	}
//	if (simpleStmt->updateStatement()) {
//		return SqlType::UPDATE_STATEMENT;
//	}
//	if (simpleStmt->deleteStatement()) {
//		return SqlType::DELETE_STATEMENT;
//	}
//	if (simpleStmt->replaceStatement()) {
//		return SqlType::REPLACE_STATEMENT;
//	}
//
//	// DDL 체크 (CREATE, ALTER, DROP)
//	if (auto* createStmt = simpleStmt->createStatement()) {
//		if (createStmt->createProcedure()) {
//			return SqlType::CREATE_PROCEDURE;
//		}
//		if (createStmt->createFunction()) {
//			return SqlType::CREATE_FUNCTION;
//		}
//		if (createStmt->createTrigger()) {
//			return SqlType::CREATE_TRIGGER;
//		}
//		if (createStmt->createEvent()) {
//			return SqlType::CREATE_EVENT;
//		}
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (simpleStmt->alterStatement()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (simpleStmt->dropStatement()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (simpleStmt->truncateTableStatement()) {
//		return SqlType::TRUNCATE_STATEMENT;
//	}
//
//	// DCL 체크 (GRANT, REVOKE)
//	if (auto* accountStmt = simpleStmt->accountManagementStatement()) {
//		if (accountStmt->grantStatement()) {
//			return SqlType::GRANT_STATEMENT;
//		}
//		if (accountStmt->revokeStatement()) {
//			return SqlType::REVOKE_STATEMENT;
//		}
//	}
//
//	// TCL 체크
//	if (simpleStmt->transactionOrLockingStatement()) {
//		return SqlType::TRANSACTION_STATEMENT;
//	}
//
//	// CALL 문
//	if (simpleStmt->callStatement()) {
//		return SqlType::CALL_STATEMENT;
//	}
//
//	// SET 문
//	if (simpleStmt->setStatement()) {
//		return SqlType::SET_STATEMENT;
//	}
//
//	// SHOW 문들
//	if (simpleStmt->showDatabasesStatement() ||
//		simpleStmt->showTablesStatement() ||
//		simpleStmt->showColumnsStatement() ||
//		simpleStmt->showStatusStatement() ||
//		simpleStmt->showVariablesStatement() ||
//		simpleStmt->showGrantsStatement() ||
//		simpleStmt->showCreateTableStatement() ||
//		simpleStmt->showCreateDatabaseStatement()) {
//		return SqlType::SHOW_STATEMENT;
//	}
//
//	// USE 문
//	if (simpleStmt->utilityStatement()) {
//		return SqlType::USE_STATEMENT;
//	}
//
//	return SqlType::UNKNOWN;
//}

// 복합 쿼리 파싱 함수 구현
//std::vector<CTestMFCDlg::SqlStatementInfo> CTestMFCDlg::ParseMultipleQueriesMySQL(const std::string& sqlQueries)
//{
//	std::vector<SqlStatementInfo> results;
//
//	try {
//		ANTLRInputStream input(sqlQueries);
//		antlrcpp_mysql::MySQLLexer lexer(&input);
//		CommonTokenStream tokens(&lexer);
//		antlrcpp_mysql::MySQLParser parser(&tokens);
//
//		parser.removeErrorListeners();
//
//		// queries() 규칙으로 여러 쿼리 파싱
//		antlrcpp_mysql::MySQLParser::QueriesContext* queriesCtx = parser.queries();
//
//		if (!queriesCtx) {
//			return results;
//		}
//
//		// 모든 쿼리 가져오기
//		std::vector<antlrcpp_mysql::MySQLParser::QueryContext*> queryList = queriesCtx->query();
//
//		int index = 1;
//		for (auto* queryCtx : queryList) {
//			SqlStatementInfo info;
//			info.index = index++;
//
//			// simpleStatement 가져오기
//			auto* simpleStmt = queryCtx->simpleStatement();
//			info.type = IdentifyFromSimpleStatementMySQL(simpleStmt);
//
//			// 토큰에서 원본 SQL 텍스트 추출
//			if (simpleStmt) {
//				antlr4::Token* startToken = simpleStmt->getStart();
//				antlr4::Token* stopToken = simpleStmt->getStop();
//
//				if (startToken && stopToken) {
//					info.startLine = startToken->getLine();
//					info.startColumn = startToken->getCharPositionInLine();
//
//					// 원본 텍스트 추출
//					size_t startIdx = startToken->getStartIndex();
//					size_t stopIdx = stopToken->getStopIndex();
//					if (startIdx != INVALID_INDEX && stopIdx != INVALID_INDEX && stopIdx >= startIdx) {
//						info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
//					}
//				}
//			}
//
//			results.push_back(info);
//		}
//	}
//	catch (...) {
//		// 예외 발생 시 빈 결과 반환
//	}
//
//	return results;
//}

// 특정 인덱스의 쿼리 가져오기 (0부터 시작)
//CTestMFCDlg::SqlStatementInfo CTestMFCDlg::GetQueryAtMySQL(const std::string& sqlQueries, size_t index)
//{
//	SqlStatementInfo emptyInfo = { -1, SqlStatementType::UNKNOWN, "", 0, 0 };
//
//	try {
//		ANTLRInputStream input(sqlQueries);
//		antlrcpp_mysql::MySQLLexer lexer(&input);
//		CommonTokenStream tokens(&lexer);
//		antlrcpp_mysql::MySQLParser parser(&tokens);
//
//		parser.removeErrorListeners();
//
//		antlrcpp_mysql::MySQLParser::QueriesContext* queriesCtx = parser.queries();
//		if (!queriesCtx) {
//			return emptyInfo;
//		}
//
//		// 특정 인덱스의 쿼리 가져오기
//		antlrcpp_mysql::MySQLParser::QueryContext* queryCtx = queriesCtx->query(index);
//		if (!queryCtx) {
//			return emptyInfo;
//		}
//
//		SqlStatementInfo info;
//		info.index = static_cast<int>(index + 1);  // 1부터 시작하는 인덱스
//
//		auto* simpleStmt = queryCtx->simpleStatement();
//		info.type = IdentifyFromSimpleStatementMySQL(simpleStmt);
//
//		if (simpleStmt) {
//			antlr4::Token* startToken = simpleStmt->getStart();
//			antlr4::Token* stopToken = simpleStmt->getStop();
//
//			if (startToken && stopToken) {
//				info.startLine = startToken->getLine();
//				info.startColumn = startToken->getCharPositionInLine();
//
//				size_t startIdx = startToken->getStartIndex();
//				size_t stopIdx = stopToken->getStopIndex();
//				if (startIdx != INVALID_INDEX && stopIdx != INVALID_INDEX && stopIdx >= startIdx) {
//					info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
//				}
//			}
//		}
//
//		return info;
//	}
//	catch (...) {
//		return emptyInfo;
//	}
//}

// 복합 쿼리 파싱 버튼 핸들러
//void CTestMFCDlg::OnBnClickedButtonMultiParseMySQL()
//{
//	CString strInput;
//	GetDlgItemText(IDC_EDIT_SQL, strInput);
//
//	std::string sqlQueries = CT2A(strInput);
//
//	if (sqlQueries.empty()) {
//		AfxMessageBox(_T("SQL을 입력해주세요."));
//		return;
//	}
//
//	// 복합 쿼리 파싱
//	std::vector<SqlStatementInfo> results = ParseMultipleQueries(sqlQueries);
//
//	if (results.empty()) {
//		AddTraceLog(_T("파싱된 SQL 문이 없습니다."));
//		return;
//	}
//
//	AddTraceLog(_T("===== 복합 쿼리 파싱 결과 ====="));
//	AddTraceLog(_T("총 %d개의 SQL문 발견"), static_cast<int>(results.size()));
//	AddTraceLog(_T(""));
//
//	for (const auto& info : results) {
//		CString strType = SqlTypeToString(info.type);
//		CString strSql = CString(info.sqlText.c_str());
//
//		// 긴 SQL은 50자로 자르기
//		if (strSql.GetLength() > 50) {
//			strSql = strSql.Left(50) + _T("...");
//		}
//
//		AddTraceLog(_T("[%d번째 문장] 유형: %s"), info.index, strType.GetString());
//		AddTraceLog(_T("    위치: Line %d, Column %d"), static_cast<int>(info.startLine), static_cast<int>(info.startColumn));
//		AddTraceLog(_T("    SQL: %s"), strSql.GetString());
//		AddTraceLog(_T(""));
//	}
//
//	AddTraceLog(_T("===== 개별 쿼리 접근 예시 ====="));
//	// 첫번째 쿼리 접근 예시
//	SqlStatementInfo first = GetQueryAtMySQL(sqlQueries, 0);
//	if (first.index > 0) {
//		AddTraceLog(_T("첫번째 문장: %s"), SqlTypeToString(first.type).GetString());
//	}
//
//	// 두번째 쿼리가 있다면
//	if (results.size() >= 2) {
//		SqlStatementInfo second = GetQueryAtMySQL(sqlQueries, 1);
//		if (second.index > 0) {
//			AddTraceLog(_T("두번째 문장: %s"), SqlTypeToString(second.type).GetString());
//		}
//	}
//}

// ============================================================
// 토큰화 관련 함수 구현
// ============================================================

// TokenRole을 문자열로 변환


// Lexer 토큰 타입에서 기본 역할 결정
//CTestMFCDlg::TokenRole GetRoleFromLexerTokenMySQL(size_t tokenType, const std::string& tokenText)
//{
//	using TR = CTestMFCDlg::TokenRole;
//
//	// antlrcpp_mysql::MySQLLexer의 토큰 타입 상수 사용
//	switch (tokenType) {
//	// 키워드들
//	case antlrcpp_mysql::MySQLLexer::SELECT_SYMBOL:    return TR::KEYWORD_SELECT;
//	case antlrcpp_mysql::MySQLLexer::FROM_SYMBOL:      return TR::KEYWORD_FROM;
//	case antlrcpp_mysql::MySQLLexer::WHERE_SYMBOL:     return TR::KEYWORD_WHERE;
//	case antlrcpp_mysql::MySQLLexer::INSERT_SYMBOL:    return TR::KEYWORD_INSERT;
//	case antlrcpp_mysql::MySQLLexer::UPDATE_SYMBOL:    return TR::KEYWORD_UPDATE;
//	case antlrcpp_mysql::MySQLLexer::DELETE_SYMBOL:    return TR::KEYWORD_DELETE;
//	case antlrcpp_mysql::MySQLLexer::INTO_SYMBOL:      return TR::KEYWORD_INTO;
//	case antlrcpp_mysql::MySQLLexer::VALUES_SYMBOL:    return TR::KEYWORD_VALUES;
//	case antlrcpp_mysql::MySQLLexer::SET_SYMBOL:       return TR::KEYWORD_SET;
//	case antlrcpp_mysql::MySQLLexer::AND_SYMBOL:       return TR::KEYWORD_AND;
//	case antlrcpp_mysql::MySQLLexer::OR_SYMBOL:        return TR::KEYWORD_OR;
//	case antlrcpp_mysql::MySQLLexer::ORDER_SYMBOL:     return TR::KEYWORD_ORDER_BY;
//	case antlrcpp_mysql::MySQLLexer::GROUP_SYMBOL:     return TR::KEYWORD_GROUP_BY;
//	case antlrcpp_mysql::MySQLLexer::HAVING_SYMBOL:    return TR::KEYWORD_HAVING;
//	case antlrcpp_mysql::MySQLLexer::JOIN_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::INNER_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::LEFT_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::RIGHT_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::OUTER_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::CROSS_SYMBOL:     return TR::KEYWORD_JOIN;
//	case antlrcpp_mysql::MySQLLexer::ON_SYMBOL:        return TR::KEYWORD_ON;
//	case antlrcpp_mysql::MySQLLexer::AS_SYMBOL:        return TR::KEYWORD_AS;
//
//	// 기타 예약어들
//	case antlrcpp_mysql::MySQLLexer::CREATE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::ALTER_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::DROP_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::TABLE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::DATABASE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::INDEX_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::VIEW_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::PROCEDURE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::FUNCTION_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::TRIGGER_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::GRANT_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::REVOKE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::BEGIN_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::COMMIT_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::ROLLBACK_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::DISTINCT_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::ALL_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::LIMIT_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::OFFSET_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::BY_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::ASC_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::DESC_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::LIKE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::IN_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::BETWEEN_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::IS_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::NOT_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::EXISTS_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::CASE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::WHEN_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::THEN_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::ELSE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::END_SYMBOL:
//		return TR::KEYWORD_OTHER;
//
//	// 숫자 리터럴
//	case antlrcpp_mysql::MySQLLexer::INT_NUMBER:
//	case antlrcpp_mysql::MySQLLexer::LONG_NUMBER:
//	case antlrcpp_mysql::MySQLLexer::ULONGLONG_NUMBER:
//	case antlrcpp_mysql::MySQLLexer::DECIMAL_NUMBER:
//	case antlrcpp_mysql::MySQLLexer::FLOAT_NUMBER:
//		return TR::LITERAL_NUMBER;
//
//	// 문자열 리터럴
//	case antlrcpp_mysql::MySQLLexer::SINGLE_QUOTED_TEXT:
//	case antlrcpp_mysql::MySQLLexer::DOUBLE_QUOTED_TEXT:
//		return TR::LITERAL_STRING;
//
//	// NULL
//	case antlrcpp_mysql::MySQLLexer::NULL_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::NULL2_SYMBOL:
//		return TR::LITERAL_NULL;
//
//	// 불린
//	case antlrcpp_mysql::MySQLLexer::TRUE_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::FALSE_SYMBOL:
//		return TR::LITERAL_BOOLEAN;
//
//	// 비교 연산자
//	case antlrcpp_mysql::MySQLLexer::EQUAL_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::NOT_EQUAL_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::LESS_THAN_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::GREATER_THAN_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::LESS_OR_EQUAL_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::GREATER_OR_EQUAL_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::NULL_SAFE_EQUAL_OPERATOR:
//		return TR::OPERATOR_COMPARISON;
//
//	// 산술 연산자
//	case antlrcpp_mysql::MySQLLexer::PLUS_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::MINUS_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::MULT_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::DIV_OPERATOR:
//	case antlrcpp_mysql::MySQLLexer::MOD_OPERATOR:
//		return TR::OPERATOR_ARITHMETIC;
//
//	// 구분자
//	case antlrcpp_mysql::MySQLLexer::COMMA_SYMBOL:
//		return TR::SEPARATOR_COMMA;
//	case antlrcpp_mysql::MySQLLexer::DOT_SYMBOL:
//		return TR::SEPARATOR_DOT;
//	case antlrcpp_mysql::MySQLLexer::SEMICOLON_SYMBOL:
//		return TR::SEPARATOR_SEMICOLON;
//	case antlrcpp_mysql::MySQLLexer::OPEN_PAR_SYMBOL:
//		return TR::SEPARATOR_PAREN_OPEN;
//	case antlrcpp_mysql::MySQLLexer::CLOSE_PAR_SYMBOL:
//		return TR::SEPARATOR_PAREN_CLOSE;
//
//	// 공백
//	case antlrcpp_mysql::MySQLLexer::WHITESPACE:
//		return TR::WHITESPACE;
//
//	// 주석
//	case antlrcpp_mysql::MySQLLexer::BLOCK_COMMENT:
//	case antlrcpp_mysql::MySQLLexer::POUND_COMMENT:
//	case antlrcpp_mysql::MySQLLexer::DASHDASH_COMMENT:
//		return TR::COMMENT;
//
//	// 파라미터
//	case antlrcpp_mysql::MySQLLexer::PARAM_MARKER:
//	case antlrcpp_mysql::MySQLLexer::AT_SIGN_SYMBOL:
//	case antlrcpp_mysql::MySQLLexer::AT_AT_SIGN_SYMBOL:
//		return TR::PARAMETER;
//
//	// 식별자 (기본값 - 문맥에 따라 나중에 재분류됨)
//	case antlrcpp_mysql::MySQLLexer::IDENTIFIER:
//	case antlrcpp_mysql::MySQLLexer::BACK_TICK_QUOTED_ID:
//		return TR::COLUMN_NAME;  // 기본값, 나중에 Parser에서 정확히 분류
//
//	default:
//		return TR::UNKNOWN;
//	}
//}

// 토큰화 함수 구현
//std::vector<CTestMFCDlg::TokenInfo> CTestMFCDlg::TokenizeQueryMySQL(const std::string& sqlQuery)
//{
//	std::vector<TokenInfo> tokens;
//
//	try {
//		ANTLRInputStream input(sqlQuery);
//		antlrcpp_mysql::MySQLLexer lexer(&input);
//		CommonTokenStream tokenStream(&lexer);
//
//		// 모든 토큰 가져오기
//		lexer.removeErrorListeners();
//		tokenStream.fill();
//
//		int index = 1;
//		std::vector<antlr4::Token*> allTokens = tokenStream.getTokens();
//
//		for (antlr4::Token* token : allTokens) {
//			if (token->getType() == antlr4::Token::EOF) {
//				break;
//			}
//
//			// 공백은 기본적으로 건너뛰기 (필요시 포함 가능)
//			if (token->getType() == antlrcpp_mysql::MySQLLexer::WHITESPACE) {
//				continue;
//			}
//
//			TokenInfo info;
//			info.index = index++;
//			info.text = token->getText();
//			info.tokenType = lexer.getVocabulary().getSymbolicName(token->getType());
//			if (info.tokenType.empty()) {
//				info.tokenType = lexer.getVocabulary().getLiteralName(token->getType());
//			}
//			info.role = GetRoleFromLexerTokenMySQL(token->getType(), info.text);
//			info.roleDesc = std::string(CT2A(TokenRoleToString(info.role)));
//			info.line = token->getLine();
//			info.column = token->getCharPositionInLine();
//			info.startIndex = token->getStartIndex();
//			info.stopIndex = token->getStopIndex();
//
//			tokens.push_back(info);
//		}
//
//		// ============================================================
//		// Parser를 사용하여 문맥 기반 역할 재분류
//		// ============================================================
//		ANTLRInputStream input2(sqlQuery);
//		antlrcpp_mysql::MySQLLexer lexer2(&input2);
//		CommonTokenStream tokenStream2(&lexer2);
//		antlrcpp_mysql::MySQLParser parser(&tokenStream2);
//		parser.removeErrorListeners();
//
//		antlrcpp_mysql::MySQLParser::QueryContext* queryCtx = parser.query();
//
//		if (queryCtx && parser.getNumberOfSyntaxErrors() == 0) {
//			auto* simpleStmt = queryCtx->simpleStatement();
//			if (simpleStmt) {
//				// SELECT 문인 경우
//				if (auto* selectStmt = simpleStmt->selectStatement()) {
//					// fromClause에서 테이블명 추출
//					// 파서 트리를 순회하여 tableRef, columnRef 등을 찾아 토큰 역할 업데이트
//					// (간단한 버전: 첫 번째 FROM 이후의 첫 IDENTIFIER를 테이블명으로)
//				}
//			}
//		}
//	}
//	catch (...) {
//		// 예외 발생 시 현재까지의 토큰 반환
//	}
//
//	return tokens;
//}

// 토큰화 버튼 핸들러
//void CTestMFCDlg::OnBnClickedButtonTokenizeMySQL()
//{
//	CString strInput;
//	GetDlgItemText(IDC_EDIT_SQL, strInput);
//
//	std::string sqlQuery = CT2A(strInput);
//
//	if (sqlQuery.empty()) {
//		AfxMessageBox(_T("SQL을 입력해주세요."));
//		return;
//	}
//
//	std::vector<TokenInfo> tokens = TokenizeQueryMySQL(sqlQuery);
//
//	if (tokens.empty()) {
//		AddTraceLog(_T("토큰이 없습니다."));
//		return;
//	}
//
//	AddTraceLog(_T("===== SQL 토큰화 결과 ====="));
//	AddTraceLog(_T("입력: %s"), strInput.GetString());
//	AddTraceLog(_T(""));
//	AddTraceLog(_T("총 %d개의 토큰 발견"), static_cast<int>(tokens.size()));
//	AddTraceLog(_T(""));
//	AddTraceLog(_T("%-4s %-20s %-25s %s"), _T("순번"), _T("토큰"), _T("토큰타입"), _T("역할"));
//	AddTraceLog(_T("--------------------------------------------------------------"));
//
//	for (const auto& tok : tokens) {
//		CString strText = CString(tok.text.c_str());
//		CString strType = CString(tok.tokenType.c_str());
//		CString strRole = TokenRoleToString(tok.role);
//
//		// 긴 텍스트 자르기
//		if (strText.GetLength() > 18) {
//			strText = strText.Left(15) + _T("...");
//		}
//		if (strType.GetLength() > 23) {
//			strType = strType.Left(20) + _T("...");
//		}
//
//		AddTraceLog(_T("%-4d %-20s %-25s %s"),
//			tok.index,
//			strText.GetString(),
//			strType.GetString(),
//			strRole.GetString());
//	}
//
//	AddTraceLog(_T(""));
//	AddTraceLog(_T("===== 상세 정보 ====="));
//	for (const auto& tok : tokens) {
//		AddTraceLog(_T("%d) %s ( %s )"),
//			tok.index,
//			CString(tok.text.c_str()).GetString(),
//			TokenRoleToString(tok.role).GetString());
//	}
//}

// ============================================================
// Oracle용 함수들 구현
// ============================================================

// Oracle: Unit_statementContext에서 유형 식별하는 헬퍼 함수

// 해당 소스 제거예정
//CTestMFCDlg::SqlStatementType IdentifyFromUnitStatementOracle(antlrcpp_oracle::PlSqlParser::Unit_statementContext* unitStmt)
//{
//	using SqlType = CTestMFCDlg::SqlStatementType;
//
//	if (!unitStmt) {
//		return SqlType::UNKNOWN;
//	}
//
//	// DML 체크 (data_manipulation_language_statements)
//	if (auto* dmlStmt = unitStmt->data_manipulation_language_statements()) {
//		if (dmlStmt->select_statement()) {
//			return SqlType::SELECT_STATEMENT;
//		}
//		if (dmlStmt->insert_statement()) {
//			return SqlType::INSERT_STATEMENT;
//		}
//		if (dmlStmt->update_statement()) {
//			return SqlType::UPDATE_STATEMENT;
//		}
//		if (dmlStmt->delete_statement()) {
//			return SqlType::DELETE_STATEMENT;
//		}
//	}
//
//	// DDL: CREATE 문들
//	if (unitStmt->create_table()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (unitStmt->create_view()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (unitStmt->create_index()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (unitStmt->create_sequence()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (unitStmt->create_synonym()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (unitStmt->create_database()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (unitStmt->create_user()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (unitStmt->create_role()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//	if (unitStmt->create_tablespace()) {
//		return SqlType::CREATE_STATEMENT;
//	}
//
//	// PL/SQL 프로시저/함수/트리거/패키지
//	if (unitStmt->create_procedure_body()) {
//		return SqlType::CREATE_PROCEDURE;
//	}
//	if (unitStmt->create_function_body()) {
//		return SqlType::CREATE_FUNCTION;
//	}
//	if (unitStmt->create_trigger()) {
//		return SqlType::CREATE_TRIGGER;
//	}
//	if (unitStmt->create_package()) {
//		return SqlType::CREATE_PROCEDURE;  // 패키지도 프로시저 계열로
//	}
//	if (unitStmt->create_package_body()) {
//		return SqlType::CREATE_PROCEDURE;
//	}
//
//	// DDL: ALTER 문들
//	if (unitStmt->alter_table()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_index()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_view()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_sequence()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_user()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_session()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_procedure()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_function()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_trigger()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//	if (unitStmt->alter_package()) {
//		return SqlType::ALTER_STATEMENT;
//	}
//
//	// DDL: DROP 문들
//	if (unitStmt->drop_table()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_view()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_index()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_sequence()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_synonym()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_user()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_role()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_procedure()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_function()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_trigger()) {
//		return SqlType::DROP_STATEMENT;
//	}
//	if (unitStmt->drop_package()) {
//		return SqlType::DROP_STATEMENT;
//	}
//
//	// DDL: TRUNCATE
//	if (unitStmt->truncate_table()) {
//		return SqlType::TRUNCATE_STATEMENT;
//	}
//
//	// DCL: GRANT/REVOKE
//	if (unitStmt->grant_statement()) {
//		return SqlType::GRANT_STATEMENT;
//	}
//	if (unitStmt->revoke_statement()) {
//		return SqlType::REVOKE_STATEMENT;
//	}
//
//	// TCL: COMMIT/ROLLBACK 등
//	if (unitStmt->transaction_control_statements()) {
//		return SqlType::TRANSACTION_STATEMENT;
//	}
//
//	// PL/SQL: CALL 문
//	if (unitStmt->call_statement()) {
//		return SqlType::CALL_STATEMENT;
//	}
//
//	// PL/SQL: Anonymous Block (BEGIN ... END)
//	if (unitStmt->anonymous_block()) {
//		return SqlType::CALL_STATEMENT;  // 익명 블록은 CALL 계열로 분류
//	}
//
//	return SqlType::UNKNOWN;
//}

// Oracle용 복합 쿼리 파싱 함수 구현
//std::vector<CTestMFCDlg::SqlStatementInfo> CTestMFCDlg::ParseMultipleQueriesOracle(const std::string& sqlQueries)
//{
//	std::vector<SqlStatementInfo> results;
//
//	try {
//		ANTLRInputStream input(sqlQueries);
//		antlrcpp_oracle::PlSqlLexer lexer(&input);
//		CommonTokenStream tokens(&lexer);
//		antlrcpp_oracle::PlSqlParser parser(&tokens);
//
//		parser.removeErrorListeners();
//		lexer.removeErrorListeners();
//
//		// sql_script() 규칙으로 여러 쿼리 파싱
//		antlrcpp_oracle::PlSqlParser::Sql_scriptContext* scriptCtx = parser.sql_script();
//
//		if (!scriptCtx) {
//			return results;
//		}
//
//		// 모든 unit_statement 가져오기
//		std::vector<antlrcpp_oracle::PlSqlParser::Unit_statementContext*> stmtList = scriptCtx->unit_statement();
//
//		int index = 1;
//		for (auto* unitStmt : stmtList) {
//			SqlStatementInfo info;
//			info.index = index++;
//
//			info.type = IdentifyFromUnitStatementOracle(unitStmt);
//
//			// 토큰에서 원본 SQL 텍스트 추출
//			if (unitStmt) {
//				antlr4::Token* startToken = unitStmt->getStart();
//				antlr4::Token* stopToken = unitStmt->getStop();
//
//				if (startToken && stopToken) {
//					info.startLine = startToken->getLine();
//					info.startColumn = startToken->getCharPositionInLine();
//
//					// 원본 텍스트 추출
//					size_t startIdx = startToken->getStartIndex();
//					size_t stopIdx = stopToken->getStopIndex();
//					if (startIdx != INVALID_INDEX && stopIdx != INVALID_INDEX && stopIdx >= startIdx) {
//						info.sqlText = sqlQueries.substr(startIdx, stopIdx - startIdx + 1);
//					}
//				}
//			}
//
//			results.push_back(info);
//		}
//	}
//	catch (...) {
//		// 예외 발생 시 빈 결과 반환
//	}
//
//	return results;
//}

// Oracle용 토큰 역할 결정 함수
//CTestMFCDlg::TokenRole GetRoleFromLexerTokenOracle(size_t tokenType, const std::string& tokenText)
//{
//	using TR = CTestMFCDlg::TokenRole;
//
//	// antlrcpp_oracle::PlSqlLexer의 토큰 타입 상수 사용
//	switch (tokenType) {
//	// 키워드들
//	case antlrcpp_oracle::PlSqlLexer::SELECT:     return TR::KEYWORD_SELECT;
//	case antlrcpp_oracle::PlSqlLexer::FROM:       return TR::KEYWORD_FROM;
//	case antlrcpp_oracle::PlSqlLexer::WHERE:      return TR::KEYWORD_WHERE;
//	case antlrcpp_oracle::PlSqlLexer::INSERT:     return TR::KEYWORD_INSERT;
//	case antlrcpp_oracle::PlSqlLexer::UPDATE:     return TR::KEYWORD_UPDATE;
//	case antlrcpp_oracle::PlSqlLexer::DELETE:     return TR::KEYWORD_DELETE;
//	case antlrcpp_oracle::PlSqlLexer::INTO:       return TR::KEYWORD_INTO;
//	case antlrcpp_oracle::PlSqlLexer::VALUES:     return TR::KEYWORD_VALUES;
//	case antlrcpp_oracle::PlSqlLexer::SET:        return TR::KEYWORD_SET;
//	case antlrcpp_oracle::PlSqlLexer::AND:        return TR::KEYWORD_AND;
//	case antlrcpp_oracle::PlSqlLexer::OR:         return TR::KEYWORD_OR;
//	case antlrcpp_oracle::PlSqlLexer::ORDER:      return TR::KEYWORD_ORDER_BY;
//	case antlrcpp_oracle::PlSqlLexer::GROUP:      return TR::KEYWORD_GROUP_BY;
//	case antlrcpp_oracle::PlSqlLexer::HAVING:     return TR::KEYWORD_HAVING;
//	case antlrcpp_oracle::PlSqlLexer::JOIN:       return TR::KEYWORD_JOIN;
//	case antlrcpp_oracle::PlSqlLexer::INNER:
//	case antlrcpp_oracle::PlSqlLexer::LEFT:
//	case antlrcpp_oracle::PlSqlLexer::RIGHT:
//	case antlrcpp_oracle::PlSqlLexer::OUTER:
//	case antlrcpp_oracle::PlSqlLexer::CROSS:
//	case antlrcpp_oracle::PlSqlLexer::FULL:       return TR::KEYWORD_JOIN;
//	case antlrcpp_oracle::PlSqlLexer::ON:         return TR::KEYWORD_ON;
//	case antlrcpp_oracle::PlSqlLexer::AS:         return TR::KEYWORD_AS;
//
//	// 기타 예약어들
//	case antlrcpp_oracle::PlSqlLexer::CREATE:
//	case antlrcpp_oracle::PlSqlLexer::ALTER:
//	case antlrcpp_oracle::PlSqlLexer::DROP:
//	case antlrcpp_oracle::PlSqlLexer::TABLE:
//	case antlrcpp_oracle::PlSqlLexer::DATABASE:
//	case antlrcpp_oracle::PlSqlLexer::INDEX:
//	case antlrcpp_oracle::PlSqlLexer::VIEW:
//	case antlrcpp_oracle::PlSqlLexer::PROCEDURE:
//	case antlrcpp_oracle::PlSqlLexer::FUNCTION:
//	case antlrcpp_oracle::PlSqlLexer::TRIGGER:
//	case antlrcpp_oracle::PlSqlLexer::GRANT:
//	case antlrcpp_oracle::PlSqlLexer::REVOKE:
//	case antlrcpp_oracle::PlSqlLexer::BEGIN:
//	case antlrcpp_oracle::PlSqlLexer::COMMIT:
//	case antlrcpp_oracle::PlSqlLexer::ROLLBACK:
//	case antlrcpp_oracle::PlSqlLexer::DISTINCT:
//	case antlrcpp_oracle::PlSqlLexer::ALL:
//	case antlrcpp_oracle::PlSqlLexer::BY:
//	case antlrcpp_oracle::PlSqlLexer::ASC:
//	case antlrcpp_oracle::PlSqlLexer::DESC:
//	case antlrcpp_oracle::PlSqlLexer::LIKE:
//	case antlrcpp_oracle::PlSqlLexer::IN:
//	case antlrcpp_oracle::PlSqlLexer::BETWEEN:
//	case antlrcpp_oracle::PlSqlLexer::IS:
//	case antlrcpp_oracle::PlSqlLexer::NOT:
//	case antlrcpp_oracle::PlSqlLexer::EXISTS:
//	case antlrcpp_oracle::PlSqlLexer::CASE:
//	case antlrcpp_oracle::PlSqlLexer::WHEN:
//	case antlrcpp_oracle::PlSqlLexer::THEN:
//	case antlrcpp_oracle::PlSqlLexer::ELSE:
//	case antlrcpp_oracle::PlSqlLexer::END:
//	case antlrcpp_oracle::PlSqlLexer::DECLARE:
//	case antlrcpp_oracle::PlSqlLexer::EXCEPTION:
//	case antlrcpp_oracle::PlSqlLexer::CURSOR:
//	case antlrcpp_oracle::PlSqlLexer::LOOP:
//	case antlrcpp_oracle::PlSqlLexer::FOR:
//	case antlrcpp_oracle::PlSqlLexer::WHILE:
//	case antlrcpp_oracle::PlSqlLexer::IF:
//	case antlrcpp_oracle::PlSqlLexer::RETURN:
//	case antlrcpp_oracle::PlSqlLexer::EXECUTE:
//	case antlrcpp_oracle::PlSqlLexer::PACKAGE:
//	case antlrcpp_oracle::PlSqlLexer::BODY:
//	case antlrcpp_oracle::PlSqlLexer::SEQUENCE:
//	case antlrcpp_oracle::PlSqlLexer::SYNONYM:
//	case antlrcpp_oracle::PlSqlLexer::TRUNCATE:
//	case antlrcpp_oracle::PlSqlLexer::MERGE:
//	case antlrcpp_oracle::PlSqlLexer::USING:
//	case antlrcpp_oracle::PlSqlLexer::MATCHED:
//	case antlrcpp_oracle::PlSqlLexer::WITH:
//	case antlrcpp_oracle::PlSqlLexer::UNION:
//	case antlrcpp_oracle::PlSqlLexer::MINUS:
//	case antlrcpp_oracle::PlSqlLexer::INTERSECT:
//	case antlrcpp_oracle::PlSqlLexer::FETCH:
//	case antlrcpp_oracle::PlSqlLexer::OFFSET:
//	case antlrcpp_oracle::PlSqlLexer::ROWNUM:
//	case antlrcpp_oracle::PlSqlLexer::ROWID:
//		return TR::KEYWORD_OTHER;
//
//	// 숫자 리터럴
//	case antlrcpp_oracle::PlSqlLexer::UNSIGNED_INTEGER:
//	case antlrcpp_oracle::PlSqlLexer::APPROXIMATE_NUM_LIT:
//		return TR::LITERAL_NUMBER;
//
//	// 문자열 리터럴
//	case antlrcpp_oracle::PlSqlLexer::CHAR_STRING:
//	case antlrcpp_oracle::PlSqlLexer::NATIONAL_CHAR_STRING_LIT:
//		return TR::LITERAL_STRING;
//
//	// NULL
//	case antlrcpp_oracle::PlSqlLexer::NULL_:
//		return TR::LITERAL_NULL;
//
//	// 불린
//	case antlrcpp_oracle::PlSqlLexer::TRUE:
//	case antlrcpp_oracle::PlSqlLexer::FALSE:
//		return TR::LITERAL_BOOLEAN;
//
//	// 비교 연산자
//	case antlrcpp_oracle::PlSqlLexer::EQUALS_OP:
//	case antlrcpp_oracle::PlSqlLexer::NOT_EQUAL_OP:
//	case antlrcpp_oracle::PlSqlLexer::LESS_THAN_OP:
//	case antlrcpp_oracle::PlSqlLexer::GREATER_THAN_OP:
//	case antlrcpp_oracle::PlSqlLexer::LESS_THAN_OR_EQUALS_OP:
//	case antlrcpp_oracle::PlSqlLexer::GREATER_THAN_OR_EQUALS_OP:
//		return TR::OPERATOR_COMPARISON;
//
//	// 산술 연산자
//	case antlrcpp_oracle::PlSqlLexer::PLUS_SIGN:
//	case antlrcpp_oracle::PlSqlLexer::MINUS_SIGN:
//	case antlrcpp_oracle::PlSqlLexer::ASTERISK:
//	case antlrcpp_oracle::PlSqlLexer::SOLIDUS:
//		return TR::OPERATOR_ARITHMETIC;
//
//	// 구분자
//	case antlrcpp_oracle::PlSqlLexer::COMMA:
//		return TR::SEPARATOR_COMMA;
//	case antlrcpp_oracle::PlSqlLexer::PERIOD:
//		return TR::SEPARATOR_DOT;
//	case antlrcpp_oracle::PlSqlLexer::SEMICOLON:
//		return TR::SEPARATOR_SEMICOLON;
//	case antlrcpp_oracle::PlSqlLexer::LEFT_PAREN:
//		return TR::SEPARATOR_PAREN_OPEN;
//	case antlrcpp_oracle::PlSqlLexer::RIGHT_PAREN:
//		return TR::SEPARATOR_PAREN_CLOSE;
//
//	// 공백
//	case antlrcpp_oracle::PlSqlLexer::SPACES:
//		return TR::WHITESPACE;
//
//	// 주석
//	case antlrcpp_oracle::PlSqlLexer::SINGLE_LINE_COMMENT:
//	case antlrcpp_oracle::PlSqlLexer::MULTI_LINE_COMMENT:
//		return TR::COMMENT;
//
//	// 파라미터/바인드 변수
//	case antlrcpp_oracle::PlSqlLexer::BINDVAR:
//	case antlrcpp_oracle::PlSqlLexer::COLON:
//		return TR::PARAMETER;
//
//	// 식별자
//	case antlrcpp_oracle::PlSqlLexer::REGULAR_ID:
//	case antlrcpp_oracle::PlSqlLexer::DELIMITED_ID:
//		return TR::COLUMN_NAME;  // 기본값, 문맥에 따라 재분류 가능
//
//	default:
//		return TR::UNKNOWN;
//	}
//}

// Oracle용 토큰화 함수 구현
//std::vector<CTestMFCDlg::TokenInfo> CTestMFCDlg::TokenizeQueryOracle(const std::string& sqlQuery)
//{
//	std::vector<TokenInfo> tokens;
//
//	try {
//		ANTLRInputStream input(sqlQuery);
//		antlrcpp_oracle::PlSqlLexer lexer(&input);
//		CommonTokenStream tokenStream(&lexer);
//
//		// 모든 토큰 가져오기
//		lexer.removeErrorListeners();
//		tokenStream.fill();
//
//		int index = 1;
//		std::vector<antlr4::Token*> allTokens = tokenStream.getTokens();
//
//		for (antlr4::Token* token : allTokens) {
//			if (token->getType() == antlr4::Token::EOF) {
//				break;
//			}
//
//			// 공백은 기본적으로 건너뛰기
//			if (token->getType() == antlrcpp_oracle::PlSqlLexer::SPACES) {
//				continue;
//			}
//
//			TokenInfo info;
//			info.index = index++;
//			info.text = token->getText();
//			info.tokenType = lexer.getVocabulary().getSymbolicName(token->getType());
//			if (info.tokenType.empty()) {
//				info.tokenType = lexer.getVocabulary().getLiteralName(token->getType());
//			}
//			info.role = GetRoleFromLexerTokenOracle(token->getType(), info.text);
//			info.roleDesc = std::string(CT2A(TokenRoleToString(info.role)));
//			info.line = token->getLine();
//			info.column = token->getCharPositionInLine();
//			info.startIndex = token->getStartIndex();
//			info.stopIndex = token->getStopIndex();
//
//			tokens.push_back(info);
//		}
//	}
//	catch (...) {
//		// 예외 발생 시 현재까지의 토큰 반환
//	}
//
//	return tokens;
//}

// Oracle 복합 쿼리 파싱 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonMultiParseOracle()
{
	// 1. UI에서 데이터 가져오기 (MFC 영역)
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	// CString(유니코드) -> std::string(멀티바이트) 변환
	std::string sqlQueries = CT2A(strInput);

	if (sqlQueries.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	// 2. 엔진에게 파싱 요청 (청정 구역 호출)
	// SQLEngine은 오직 표준 자료형(std::vector, std::string)만 반환합니다.
	auto results = SQLEngine::ParseMultipleQueriesOracle(sqlQueries);

	// 3. 결과 출력 (MFC 영역)
	if (results.empty()) {
		AddTraceLog(_T("파싱된 Oracle SQL 문이 없습니다."));
		return;
	}

	AddTraceLog(_T("===== Oracle 복합 쿼리 파싱 결과 ====="));
	AddTraceLog(_T("총 %d개의 SQL문 발견"), static_cast<int>(results.size()));

	for (const auto& info : results) {
		// [변경점] 엔진에서 std::string으로 받아옵니다.
		std::string stdType = SQLEngine::SqlTypeToString(info.type);
		std::string stdSql = info.sqlText;

		// [변경점] 긴 SQL은 std::string 단계에서 먼저 자르는 것이 효율적입니다.
		if (stdSql.length() > 50) {
			stdSql = stdSql.substr(0, 50) + "...";
		}

		// [변경점] std::string -> CString 변환
		// 유니코드 프로젝트 환경에서 멀티바이트 string을 가장 안전하게 넣는 방법입니다.
		CString strType(stdType.c_str());
		CString strSql(stdSql.c_str());

		AddTraceLog(_T("[%d번째 문장] 유형: %s"), info.index, strType);
		AddTraceLog(_T("    위치: Line %d, Column %d"), (int)info.startLine, (int)info.startColumn);
		AddTraceLog(_T("    SQL: %s"), strSql);
		AddTraceLog(_T("")); // 가독성을 위한 줄바꿈
	}
}

// Oracle 토큰화 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonTokenizeOracle()
{
	// 1. UI에서 SQL 가져오기
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	// MFC CString -> 표준 std::string 변환
	std::string sqlQuery = CT2A(strInput);

	if (sqlQuery.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	// 2. 엔진 호출 (청정 구역에서 토큰화 수행)
	std::vector<TokenInfo> tokens = SQLEngine::TokenizeQueryOracle(sqlQuery);

	if (tokens.empty()) {
		AddTraceLog(_T("Oracle 토큰이 없습니다."));
		return;
	}

	// 3. 결과 출력 시작
	AddTraceLog(_T("===== Oracle SQL 토큰화 결과 ====="));
	AddTraceLog(_T("입력: %s"), strInput);
	AddTraceLog(_T(""));
	AddTraceLog(_T("총 %d개의 토큰 발견"), (int)tokens.size());
	AddTraceLog(_T(""));

	// 테이블 헤더 출력
	AddTraceLog(_T("%-4s %-20s %-25s %s"), _T("순번"), _T("토큰"), _T("토큰타입"), _T("역할"));
	AddTraceLog(_T("--------------------------------------------------------------"));

	for (const auto& tok : tokens) {
		// [변경점] 엔진에서 넘어온 std::string 데이터들을 CString으로 변환
		CString strText(tok.text.c_str());
		CString strType(tok.tokenType.c_str());

		// SQLEngine::TokenRoleToString은 이제 std::string을 반환합니다.
		std::string stdRole = SQLEngine::TokenRoleToString(tok.role);
		CString strRole(stdRole.c_str());

		// UI 출력을 위한 길이 제한 처리
		if (strText.GetLength() > 18) {
			strText = strText.Left(15) + _T("...");
		}
		if (strType.GetLength() > 23) {
			strType = strType.Left(20) + _T("...");
		}

		// 포맷에 맞춰 로그 출력
		AddTraceLog(_T("%-4d %-20s %-25s %s"),
			tok.index,
			strText,
			strType,
			strRole);
	}

	AddTraceLog(_T(""));
	AddTraceLog(_T("===== 상세 정보 ====="));
	for (const auto& tok : tokens) {
		CString strText(tok.text.c_str());
		std::string stdRole = SQLEngine::TokenRoleToString(tok.role);
		CString strRole(stdRole.c_str());

		AddTraceLog(_T("%d) %s ( %s )"),
			tok.index,
			strText,
			strRole);
	}
}