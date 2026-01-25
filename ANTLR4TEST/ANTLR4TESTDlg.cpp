#include "pch.h"
#include "framework.h"
#include "ANTLR4TEST.h"
#include "ANTLR4TESTDlg.h"
#include "afxdialogex.h"

// 모든 ANTLR 관련 설정은 이 하나로 끝냅니다.
#include "../Common/Include/AntlrProxy.h"

// 네임스페이스 사용
using namespace antlr4;
using namespace antlrcpptest;

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


	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	SetDlgItemText(IDC_EDIT_SQL, _T("select* from scott.emp7;"));


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
		MySQLLexer lexer(&input);
		CommonTokenStream tokens(&lexer);

		// Parser (구조 분석)
		MySQLParser parser(&tokens);

		// [중요] 에러 리스너 설정 (콘솔 에러 방지)
		parser.removeErrorListeners();
		// 필요하면 커스텀 에러 리스너를 추가할 수 있습니다.

		// 3. 파싱 시작 (MySQL 문법의 최상위 규칙 호출)
		// 보통 'query', 'root', 'sqlStatements' 등이 최상위입니다.
		// MySQLParser.h를 열어보면 최상위 함수를 알 수 있습니다. 
		// 여기서는 예시로 'query()' 또는 'root()'를 가정합니다.

		// ★ .g4 파일 확인 결과 MySQL 최상위는 보통 'query' 또는 'sqlStatements' 입니다.
		// 자동완성으로 parser. 치고 나오는 함수 중 가장 그럴싸한 것을 고르세요.
		MySQLParser::QueryContext* tree = parser.query();

		// 4. 결과 확인
		size_t errorCount = parser.getNumberOfSyntaxErrors();

		if (errorCount == 0)
		{


			std::string s = tree->toStringTree(&parser);
			CStringA sTraceA = s.c_str();
			CString sTrace = (CString)sTraceA;

			AddTraceLog(sTrace);


			//GetDlgItem(IDC_EDIT_TRACE)->SetWindowText()

			//SetDlgItemText(IDC_EDIT_TRACE, sTrace);
			//SetDlgItemText(IDC_EDIT_TRACE, _T("\r\n"));
		}
		else
		{


			std::string s = tree->toStringTree(&parser);
			CStringA sTraceA = s.c_str();



			CString sTrace;
			sTrace.Format(_T("파싱 실패..\n오류 개수: %d"), errorCount);
			AddTraceLog(sTrace);

			//SetDlgItemText(IDC_EDIT_TRACE, sTrace);
			//SetDlgItemText(IDC_EDIT_TRACE, _T("\r\n"));
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