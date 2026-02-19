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
	ON_BN_CLICKED(IDC_BUTTON_TYPE, &CTestMFCDlg::OnBnClickedButtonIdentifyMySQL)


	ON_BN_CLICKED(IDC_BUTTON_MULTI_MYSQL, &CTestMFCDlg::OnBnClickedButtonMultiParseMySQL)
	ON_BN_CLICKED(IDC_BUTTON_TOKEN_MYSQL, &CTestMFCDlg::OnBnClickedButtonTokenizeMySQL)
	ON_BN_CLICKED(IDC_BUTTON_MULTI_ORACLE, &CTestMFCDlg::OnBnClickedButtonMultiParseOracle)
	ON_BN_CLICKED(IDC_BUTTON_TOKEN_ORACLE, &CTestMFCDlg::OnBnClickedButtonTokenizeOracle)
	ON_BN_CLICKED(IDC_BUTTON_MULTI_SQLSERVER, &CTestMFCDlg::OnBnClickedButtonMultiParseSQLServer)
	ON_BN_CLICKED(IDC_BUTTON_TOKEN_SQLSERVER, &CTestMFCDlg::OnBnClickedButtonTokenizeSQLServer)
	ON_BN_CLICKED(IDC_BUTTON_MULTI_POSTGRESQL, &CTestMFCDlg::OnBnClickedButtonMultiParsePostgreSQL)
	ON_BN_CLICKED(IDC_BUTTON_TOKEN_POSTGRESQL, &CTestMFCDlg::OnBnClickedButtonTokenizePostgreSQL)
	ON_BN_CLICKED(IDC_BUTTON_MULTI_DB2, &CTestMFCDlg::OnBnClickedButtonMultiParseDB2)
	ON_BN_CLICKED(IDC_BUTTON_TOKEN_DB2, &CTestMFCDlg::OnBnClickedButtonTokenizeDB2)
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
void CTestMFCDlg::OnBnClickedButtonIdentifyMySQL()
{
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	std::string sqlQuery = CT2A(strInput);

	if (sqlQuery.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	SqlStatementType stmtType = SQLEngine::IdentifySqlTypeMySQL(sqlQuery);
	std::string strType = SQLEngine::SqlTypeToString(stmtType);

	CString strResult;
	strResult.Format(_T("SQL 유형: %s"), strType.c_str());
	AddTraceLog(strResult);
}

// 복합 쿼리 파싱 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonMultiParseMySQL()
{
	// 1. UI에서 데이터 가져오기 (MFC 영역)
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	// CString -> std::string 변환
	std::string sqlQueries = CT2A(strInput);

	if (sqlQueries.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	// 2. 엔진에게 파싱 요청 (청정 구역 호출)
	std::vector<SqlStatementInfo> results = SQLEngine::ParseMultipleQueriesMySQL(sqlQueries);

	if (results.empty()) {
		AddTraceLog(_T("파싱된 SQL 문이 없습니다."));
		return;
	}

	AddTraceLog(_T("===== 복합 쿼리 파싱 결과 ====="));
	AddTraceLog(_T("총 %d개의 SQL문 발견"), (int)results.size());
	AddTraceLog(_T(""));

	for (const auto& info : results) {
		// [변경] 모든 로직을 std::string으로 처리
		std::string stdType = SQLEngine::SqlTypeToString(info.type);
		std::string stdSql = info.sqlText;

		// [변경] std::string의 substr과 length를 사용하여 50자 자르기
		if (stdSql.length() > 50) {
			stdSql = stdSql.substr(0, 50) + "...";
		}

		// [변경] 출력 시점에만 CString으로 변환 (유니코드 대응)
		CString strType(stdType.c_str());
		CString strSql(stdSql.c_str());

		AddTraceLog(_T("[%d번째 문장] 유형: %s"), info.index, strType);
		AddTraceLog(_T("    위치: Line %d, Column %d"), (int)info.startLine, (int)info.startColumn);
		AddTraceLog(_T("    SQL: %s"), strSql);
		AddTraceLog(_T(""));
	}

	AddTraceLog(_T("===== 개별 쿼리 접근 예시 ====="));

	// 첫번째 쿼리 접근 예시
	SqlStatementInfo first = SQLEngine::GetQueryAtMySQL(sqlQueries, 0);
	if (first.index > 0) {
		std::string firstTypeName = SQLEngine::SqlTypeToString(first.type);
		AddTraceLog(_T("첫번째 문장: %s"), CString(firstTypeName.c_str()));
	}

	// 두번째 쿼리가 있다면
	if (results.size() >= 2) {
		SqlStatementInfo second = SQLEngine::GetQueryAtMySQL(sqlQueries, 1);
		if (second.index > 0) {
			std::string secondTypeName = SQLEngine::SqlTypeToString(second.type);
			AddTraceLog(_T("두번째 문장: %s"), CString(secondTypeName.c_str()));
		}
	}
}

void CTestMFCDlg::OnBnClickedButtonTokenizeMySQL()
{
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	std::string sqlQuery = CT2A(strInput);

	if (sqlQuery.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	std::vector<TokenInfo> tokens = SQLEngine::TokenizeQueryMySQL(sqlQuery);

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
		CString strRole = CString(SQLEngine::TokenRoleToString(tok.role).c_str());
		// std::string strRole = SQLEngine::TokenRoleToString(tok.role);

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
			CString(SQLEngine::TokenRoleToString(tok.role).c_str()));
	}
}

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

// SQL Server 복합 쿼리 파싱 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonMultiParseSQLServer()
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
	auto results = SQLEngine::ParseMultipleQueriesSQLServer(sqlQueries);

	// 3. 결과 출력 (MFC 영역)
	if (results.empty()) {
		AddTraceLog(_T("파싱된 SQL Server SQL 문이 없습니다."));
		return;
	}

	AddTraceLog(_T("===== SQL Server 복합 쿼리 파싱 결과 ====="));
	AddTraceLog(_T("총 %d개의 SQL문 발견"), static_cast<int>(results.size()));

	for (const auto& info : results) {
		std::string stdType = SQLEngine::SqlTypeToString(info.type);
		std::string stdSql = info.sqlText;

		if (stdSql.length() > 50) {
			stdSql = stdSql.substr(0, 50) + "...";
		}

		CString strType(stdType.c_str());
		CString strSql(stdSql.c_str());

		AddTraceLog(_T("[%d번째 문장] 유형: %s"), info.index, strType);
		AddTraceLog(_T("    위치: Line %d, Column %d"), (int)info.startLine, (int)info.startColumn);
		AddTraceLog(_T("    SQL: %s"), strSql);
		AddTraceLog(_T(""));
	}
}

// SQL Server 토큰화 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonTokenizeSQLServer()
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
	std::vector<TokenInfo> tokens = SQLEngine::TokenizeQuerySQLServer(sqlQuery);

	if (tokens.empty()) {
		AddTraceLog(_T("SQL Server 토큰이 없습니다."));
		return;
	}

	// 3. 결과 출력 시작
	AddTraceLog(_T("===== SQL Server SQL 토큰화 결과 ====="));
	AddTraceLog(_T("입력: %s"), strInput);
	AddTraceLog(_T(""));
	AddTraceLog(_T("총 %d개의 토큰 발견"), (int)tokens.size());
	AddTraceLog(_T(""));

	// 테이블 헤더 출력
	AddTraceLog(_T("%-4s %-20s %-25s %s"), _T("순번"), _T("토큰"), _T("토큰타입"), _T("역할"));
	AddTraceLog(_T("--------------------------------------------------------------"));

	for (const auto& tok : tokens) {
		CString strText(tok.text.c_str());
		CString strType(tok.tokenType.c_str());

		std::string stdRole = SQLEngine::TokenRoleToString(tok.role);
		CString strRole(stdRole.c_str());

		if (strText.GetLength() > 18) {
			strText = strText.Left(15) + _T("...");
		}
		if (strType.GetLength() > 23) {
			strType = strType.Left(20) + _T("...");
		}

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

// PostgreSQL 복합 쿼리 파싱 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonMultiParsePostgreSQL()
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
	auto results = SQLEngine::ParseMultipleQueriesPostgreSQL(sqlQueries);

	// 3. 결과 출력 (MFC 영역)
	if (results.empty()) {
		AddTraceLog(_T("파싱된 PostgreSQL SQL 문이 없습니다."));
		return;
	}

	AddTraceLog(_T("===== PostgreSQL 복합 쿼리 파싱 결과 ====="));
	AddTraceLog(_T("총 %d개의 SQL문 발견"), static_cast<int>(results.size()));

	for (const auto& info : results) {
		std::string stdType = SQLEngine::SqlTypeToString(info.type);
		std::string stdSql = info.sqlText;

		if (stdSql.length() > 50) {
			stdSql = stdSql.substr(0, 50) + "...";
		}

		CString strType(stdType.c_str());
		CString strSql(stdSql.c_str());

		AddTraceLog(_T("[%d번째 문장] 유형: %s"), info.index, strType);
		AddTraceLog(_T("    위치: Line %d, Column %d"), (int)info.startLine, (int)info.startColumn);
		AddTraceLog(_T("    SQL: %s"), strSql);
		AddTraceLog(_T(""));
	}
}

// PostgreSQL 토큰화 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonTokenizePostgreSQL()
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
	std::vector<TokenInfo> tokens = SQLEngine::TokenizeQueryPostgreSQL(sqlQuery);

	if (tokens.empty()) {
		AddTraceLog(_T("PostgreSQL 토큰이 없습니다."));
		return;
	}

	// 3. 결과 출력 시작
	AddTraceLog(_T("===== PostgreSQL SQL 토큰화 결과 ====="));
	AddTraceLog(_T("입력: %s"), strInput);
	AddTraceLog(_T(""));
	AddTraceLog(_T("총 %d개의 토큰 발견"), (int)tokens.size());
	AddTraceLog(_T(""));

	// 테이블 헤더 출력
	AddTraceLog(_T("%-4s %-20s %-25s %s"), _T("순번"), _T("토큰"), _T("토큰타입"), _T("역할"));
	AddTraceLog(_T("--------------------------------------------------------------"));

	for (const auto& tok : tokens) {
		CString strText(tok.text.c_str());
		CString strType(tok.tokenType.c_str());

		std::string stdRole = SQLEngine::TokenRoleToString(tok.role);
		CString strRole(stdRole.c_str());

		if (strText.GetLength() > 18) {
			strText = strText.Left(15) + _T("...");
		}
		if (strType.GetLength() > 23) {
			strType = strType.Left(20) + _T("...");
		}

		AddTraceLog(_T("%-4d %-20s %-25s %s"),
			tok.index,
			strText,
			strType,
			strRole);
	}

	AddTraceLog(_T(""));
	AddTraceLog(_T("===== PostgreSQL 상세 정보 ====="));
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

// DB2 복합 쿼리 파싱 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonMultiParseDB2()
{
	// 1. UI에서 데이터 가져오기 (MFC 영역)
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	// CString(유니코드) -> std::string(멀티바이트) 변환
	std::string sqlQueries = CT2A(strInput);

	if (sqlQueries.empty())
	{
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	// 2. 엔진에게 파싱 요청 (청정 구역 호출)
	auto results = SQLEngine::ParseMultipleQueriesDB2(sqlQueries);

	// 3. 결과 출력 (MFC 영역)
	if (results.empty())
	{
		AddTraceLog(_T("파싱된 DB2 SQL 문이 없습니다."));
		return;
	}

	AddTraceLog(_T("===== DB2 복합 쿼리 파싱 결과 ====="));
	AddTraceLog(_T("총 %d개의 SQL문 발견"), static_cast<int>(results.size()));

	for (const auto& info : results)
	{
		std::string stdType = SQLEngine::SqlTypeToString(info.type);
		std::string stdSql = info.sqlText;

		if (stdSql.length() > 50)
			stdSql = stdSql.substr(0, 50) + "...";

		CString strType(stdType.c_str());
		CString strSql(stdSql.c_str());

		AddTraceLog(_T("[%d번째 문장] 유형: %s"), info.index, strType);
		AddTraceLog(_T("    위치: Line %d, Column %d"), (int)info.startLine, (int)info.startColumn);
		AddTraceLog(_T("    SQL: %s"), strSql);
		AddTraceLog(_T(""));
	}
}

// DB2 토큰화 버튼 핸들러
void CTestMFCDlg::OnBnClickedButtonTokenizeDB2()
{
	// 1. UI에서 SQL 가져오기
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	// MFC CString -> 표준 std::string 변환
	std::string sqlQuery = CT2A(strInput);

	if (sqlQuery.empty())
	{
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	// 2. 엔진 호출 (청정 구역에서 토큰화 수행)
	std::vector<TokenInfo> tokens = SQLEngine::TokenizeQueryDB2(sqlQuery);

	if (tokens.empty())
	{
		AddTraceLog(_T("DB2 토큰이 없습니다."));
		return;
	}

	// 3. 결과 출력 시작
	AddTraceLog(_T("===== DB2 SQL 토큰화 결과 ====="));
	AddTraceLog(_T("입력: %s"), strInput);
	AddTraceLog(_T(""));
	AddTraceLog(_T("총 %d개의 토큰 발견"), (int)tokens.size());
	AddTraceLog(_T(""));

	// 테이블 헤더 출력
	AddTraceLog(_T("%-4s %-20s %-25s %s"), _T("순번"), _T("토큰"), _T("토큰타입"), _T("역할"));
	AddTraceLog(_T("--------------------------------------------------------------"));

	for (const auto& tok : tokens)
	{
		CString strText(tok.text.c_str());
		CString strType(tok.tokenType.c_str());

		std::string stdRole = SQLEngine::TokenRoleToString(tok.role);
		CString strRole(stdRole.c_str());

		if (strText.GetLength() > 18)
			strText = strText.Left(15) + _T("...");
		if (strType.GetLength() > 23)
			strType = strType.Left(20) + _T("...");

		AddTraceLog(_T("%-4d %-20s %-25s %s"),
			tok.index,
			strText,
			strType,
			strRole);
	}

	AddTraceLog(_T(""));
	AddTraceLog(_T("===== DB2 상세 정보 ====="));
	for (const auto& tok : tokens)
	{
		CString strText(tok.text.c_str());
		std::string stdRole = SQLEngine::TokenRoleToString(tok.role);
		CString strRole(stdRole.c_str());

		AddTraceLog(_T("%d) %s ( %s )"),
			tok.index,
			strText,
			strRole);
	}
}