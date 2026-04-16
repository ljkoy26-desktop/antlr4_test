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
	ON_BN_CLICKED(IDC_BUTTON_OUTPUT_CLEAR, &CTestMFCDlg::OnBnClickedButtonOutputClear)
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

	CString sSQL;
	// mysql 

	//sSQL = _T("SELECT * FROM emp;\r\nINSERT INTO emp VALUES(1, 'John');\r\nGRANT SELECT ON db.* TO 'user'@'localhost';");
	//SetDlgItemText(IDC_EDIT_SQL, sSQL);

	
	// oracle
	sSQL = _T("SELECT* FROM scott.emp;	\r\nINSERT INTO emp a VALUES(1, 'John');	\r\nSELECT* FROM scott.emp a WHERE a.id IN(SELECT b.id FROM scott.dept b);");
	SetDlgItemText(IDC_EDIT_SQL, sSQL);

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

void CTestMFCDlg::MultiParse(int nDatabaseType)
{
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	// CString(유니코드) -> std::string(멀티바이트) 변환
	std::string sqlQueries = CT2A(strInput);

	if (sqlQueries.empty())
	{
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	m_oSQLEngine.Clear();
	m_oSQLEngine.Parse(sqlQueries, nDatabaseType);

	int nSQLCount = m_oSQLEngine.GetStatementCount();
	int nTokenCount = m_oSQLEngine.GetTokenCount();
	AddTraceLog(_T("파싱 완료 - SQL 문장: %d개 / 토큰: %d개"), nSQLCount, nTokenCount);
	AddTraceLog(_T(""));

	if (nSQLCount == 0)
	{
		AddTraceLog(_T("파싱된 SQL 문이 없습니다."));
		return;
	}

	AddTraceLog(_T("총 %d개의 SQL문 발견"), nSQLCount);
	AddTraceLog(_T(""));

	const std::vector<SqlStatementInfo>& Statements = m_oSQLEngine.GetStatements();

	for (const auto& info : Statements)
	{
		// [변경] 모든 로직을 std::string으로 처리
		std::string stdType = m_oSQLEngine.SqlTypeToString(info.type);
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

	for (int i = 0; i < nSQLCount; i++)
	{
		SqlStatementType eType = m_oSQLEngine.GetStatementTypeAt(i);
		bool bError = m_oSQLEngine.HasSyntaxError(i);
		std::string strType = m_oSQLEngine.SqlTypeToString(eType);
		AddTraceLog(_T("[%d번째] 타입: %s / 문법 오류: %s"),
			i,
			CString(strType.c_str()),
			bError ? _T("있음") : _T("없음"));
	}

	// -------------------------------------------------------
	// [테이블 참조 정보] GetTableRefs - 별칭 포함
	// -------------------------------------------------------
	AddTraceLog(_T(""));
	AddTraceLog(_T("===== [테이블 참조 정보] ====="));

	std::vector<TableRefInfo> vecTableRefs = m_oSQLEngine.GetTableRefs();
	AddTraceLog(_T("테이블 참조 (%d개):"), (int)vecTableRefs.size());

	for (const TableRefInfo& stRef : vecTableRefs)
	{
		CString strDB(stRef.szDatabase.c_str());
		CString strSchema(stRef.szSchema.c_str());
		CString strTable(stRef.szTable.c_str());
		CString strAlias(stRef.szAlias.c_str());

		AddTraceLog(_T("    DB=%-10s Schema=%-10s Table=%-15s Alias=%s"),
			strDB.IsEmpty()     ? _T("-") : strDB,
			strSchema.IsEmpty() ? _T("-") : strSchema,
			strTable.IsEmpty()  ? _T("-") : strTable,
			strAlias.IsEmpty()  ? _T("-") : strAlias);
	}

	// -------------------------------------------------------
	// [컬럼 참조 정보] GetLinkedColumns - 테이블 매핑 포함
	// -------------------------------------------------------
	AddTraceLog(_T(""));
	AddTraceLog(_T("===== [컬럼 참조 정보] ====="));

	std::vector<ColumnRefInfo> vecColumns = m_oSQLEngine.GetLinkedColumns();
	AddTraceLog(_T("컬럼 참조 (%d개):"), (int)vecColumns.size());

	for (const ColumnRefInfo& stCol : vecColumns)
	{
		CString strQual(stCol.szQualifier.c_str());
		CString strCol(stCol.szColumn.c_str());
		CString strResolved(stCol.szResolvedTable.c_str());
		BOOL bDetermined = SQLEngine::IsTableDetermined(stCol) ? TRUE : FALSE;

		AddTraceLog(_T("    한정자=%-10s 컬럼=%-15s 테이블결정=%s (→%s)"),
			strQual.IsEmpty() ? _T("-") : strQual,
			strCol,
			bDetermined ? _T("Y") : _T("N"),
			strResolved.IsEmpty() ? _T("-") : strResolved);
	}

	// -------------------------------------------------------
	// [서브쿼리 정보] 인스턴스 기반 서브쿼리 감지
	// -------------------------------------------------------
	AddTraceLog(_T(""));
	AddTraceLog(_T("===== [서브쿼리 정보] 서브쿼리 감지 ====="));

	for (int i = 0; i < nSQLCount; i++)
	{
		bool bHasSub = m_oSQLEngine.HasSubQuery(i);
		int nSubCount = m_oSQLEngine.GetSubQueryCount(i);
		AddTraceLog(_T("[%d번째] 서브쿼리: %s (개수: %d)"),
			i,
			bHasSub ? _T("있음") : _T("없음"),
			nSubCount);

		for (int j = 0; j < nSubCount; j++)
		{
			SqlStatementInfo subInfo = m_oSQLEngine.GetSubQueryAt(i, j);
			std::string subSql = subInfo.sqlText;
			if (subSql.length() > 40)
				subSql = subSql.substr(0, 40) + "...";
			AddTraceLog(_T("    [서브쿼리 %d] Line %d, Col %d: %s"),
				j + 1,
				(int)subInfo.startLine,
				(int)subInfo.startColumn,
				CString(subSql.c_str()));
		}
	}
}

void CTestMFCDlg::OnBnClickedButtonMultiParseMySQL()
{
	AddTraceLog(_T("===== MySQL 복합 쿼리 파싱 시작 ====="));
	MultiParse((int)DatabaseType::DB_MYSQL);
}
void CTestMFCDlg::OnBnClickedButtonMultiParseOracle()
{
	AddTraceLog(_T("===== Oracle 복합 쿼리 파싱 시작 ====="));
	MultiParse((int)DatabaseType::DB_MYSQL);
}
void CTestMFCDlg::OnBnClickedButtonMultiParseSQLServer()
{
	AddTraceLog(_T("===== SQL Server 복합 쿼리 파싱 결과 ====="));
	MultiParse((int)DatabaseType::DB_SQLSERVER);
}
void CTestMFCDlg::OnBnClickedButtonMultiParsePostgreSQL()
{
	AddTraceLog(_T("===== Oracle 복합 쿼리 파싱 시작 ====="));
	MultiParse((int)DatabaseType::DB_POSTGRESQL);
}
void CTestMFCDlg::OnBnClickedButtonMultiParseDB2()
{
	AddTraceLog(_T("===== DB2 복합 쿼리 파싱 시작 ====="));
	MultiParse((int)DatabaseType::DB_DB2);
}
void CTestMFCDlg::OnBnClickedButtonTokenizeMySQL()
{
	AddTraceLog(_T("===== MySQL 토큰화 결과 ====="));
	Tokenize((int)DatabaseType::DB_MYSQL);
}
void CTestMFCDlg::OnBnClickedButtonTokenizeOracle()
{
	AddTraceLog(_T("===== Oracle 토큰화 결과 ====="));
	Tokenize((int)DatabaseType::DB_ORACLE);
}
void CTestMFCDlg::OnBnClickedButtonTokenizeSQLServer()
{
	AddTraceLog(_T("===== SQLServer 토큰화 결과 ====="));
	Tokenize((int)DatabaseType::DB_SQLSERVER);
}
void CTestMFCDlg::OnBnClickedButtonTokenizePostgreSQL()
{
	AddTraceLog(_T("===== PostgreSQL 토큰화 결과 ====="));
	Tokenize((int)DatabaseType::DB_POSTGRESQL);
}
void CTestMFCDlg::OnBnClickedButtonTokenizeDB2()
{
	AddTraceLog(_T("===== DB2 토큰화 결과 ====="));
	Tokenize((int)DatabaseType::DB_DB2);
}

void CTestMFCDlg::Tokenize(int nDatabaseType)
{	// 1. UI에서 SQL 가져오기
	CString strInput;
	GetDlgItemText(IDC_EDIT_SQL, strInput);

	// MFC CString -> 표준 std::string 변환
	std::string sqlQuery = CT2A(strInput);

	if (sqlQuery.empty()) {
		AfxMessageBox(_T("SQL을 입력해주세요."));
		return;
	}

	// 2. 엔진 호출 (청정 구역에서 토큰화 수행)
	std::vector<TokenInfo> tokens = m_oSQLEngine.TokenizeQuery(sqlQuery, nDatabaseType);

	if (tokens.empty()) {
		AddTraceLog(_T("토큰이 없습니다."));
		return;
	}

	// 3. 결과 출력 시작
	AddTraceLog(_T("입력: %s"), strInput);
	AddTraceLog(_T(""));
	AddTraceLog(_T("총 %d개의 토큰 발견"), (int)tokens.size());
	AddTraceLog(_T(""));

	// 테이블 헤더 출력
	AddTraceLog(_T("%-4s %-20s %-25s %s"), _T("순번"), _T("토큰"), _T("토큰타입"), _T("역할"));
	AddTraceLog(_T("--------------------------------------------------------------"));

	int i(0);
	for (const auto& tok : tokens) {
		// [변경점] 엔진에서 넘어온 std::string 데이터들을 CString으로 변환
		CString strText(tok.text.c_str());
		CString strType(tok.tokenType.c_str());

		// m_oSQLEngine.TokenRoleToString은 이제 std::string을 반환합니다.
		std::string stdRole = m_oSQLEngine.TokenRoleToString(tok.role);
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

		if (tok.role == TokenRole::SEPARATOR_SEMICOLON)
		{
			AddTraceLog(_T("문장 마무리 ; ( PL/SQL 블록이 아닌경우 ) "));
			AddTraceLog(_T(""));
		}
	}

	// -------------------------------------------------------
	// [GetRoleFromLexerToken] 통합 함수 사용 예시 (첫 3개 토큰)
	// 위의 함수와 너무 중복됨 ( 아직까지는 뭐에 사용하는지 모름 ) 
	// -------------------------------------------------------

	//AddTraceLog(_T(""));
	//AddTraceLog(_T("===== [GetRoleFromLexerToken] 역할 조회 예시 ====="));

	//for (int i = 0; i < tokens.size(); i++)
	//{
	//	TokenRole eStaticRole = m_oSQLEngine.GetRoleFromLexerToken(tokens[i].tokenTypeId, tokens[i].text, nDatabaseType);

	//	CString strText(tokens[i].text.c_str());
	//	CString strInst(m_oSQLEngine.TokenRoleToString(eStaticRole).c_str());
	//	AddTraceLog(_T("[%3d] %20s -> %25s"), i + 1, strText, strInst);
	//}
}

bool CTestMFCDlg::TokenEquals(const TokenInfo& stToken) const
{
	// 1. RETURN 키워드
	if (stToken.role == TokenRole::KEYWORD_RETURN)
		return true;

	// 2. 단일 행 주석 (--)
	// 3. 다중 행 주석 (/* ... */)
	//    - 두 타입 모두 ANTLR TokenRole::COMMENT 로 매핑됨
	if (stToken.role == TokenRole::COMMENT)
		return true;

	// 4. 세미콜론 (;)
	if (stToken.role == TokenRole::SEPARATOR_SEMICOLON)
		return true;

	// 5. 공백 (스페이스, 탭 \t, 줄바꿈 \n \r)
	if (stToken.role == TokenRole::WHITESPACE)
		return true;

	return false;
}

void CTestMFCDlg::OnBnClickedButtonOutputClear()
{
	CEdit* pEditTrace = (CEdit*)GetDlgItem(IDC_EDIT_TRACE);
	if (pEditTrace == nullptr)
		return; 

	pEditTrace->SetWindowText(_T(""));

	// 컨트롤을 찾을 수 없으면 중단


}
