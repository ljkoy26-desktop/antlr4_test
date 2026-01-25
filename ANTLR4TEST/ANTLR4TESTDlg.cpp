#include "pch.h"
#include "framework.h"
#include "ANTLR4TEST.h"
#include "ANTLR4TESTDlg.h"
#include "afxdialogex.h"

// 1. 모든 ANTLR 관련 설정은 이 하나로 끝냅니다.
#include "../Common/Include/AntlrProxy.h"

// 2. 네임스페이스 사용
using namespace antlr4;
using namespace antlrcpptest;

// 3. [주의] DEBUG_NEW는 반드시 ANTLR 헤더들 "아래"에 있어야 합니다.
#ifdef _DEBUG
#define new DEBUG_NEW
#endif




#include "pch.h"
#include "framework.h"
#include "ANTLR4TEST.h"
#include "ANTLR4TESTDlg.h"
#include "afxdialogex.h"

// #include "AntlrProxy.h"

#include "../Common/Include/AntlrProxy.h"

// =========================================================
// [중요] Windows 매크로와 ANTLR 충돌 방지
// 반드시 ANTLR 헤더보다 먼저 해제해야 합니다.
// =========================================================
#undef min
#undef max
#undef ERROR
#undef NO_ERROR

//// 1. ANTLR 런타임
//#include <antlr4-runtime.h>
//
//// 2. 부모 클래스들 (Base 클래스)
//#include "MySQL/MySQLLexerBase.h"
//#include "MySQL/MySQLParserBase.h"
//
//// 3. 렉서와 파서 (반드시 Parser가 Visitor보다 먼저!)
//#include "MySQL/MySQLLexer.h"
//#include "MySQL/MySQLParser.h"
//
//// 4. 비지터 (필요한 경우에만 Parser 뒤에 위치)
//#include "MySQL/MySQLParserVisitor.h"
//#include "MySQL/MySQLParserBaseVisitor.h"



// 
// 네임스페이스 사용 (편의상)
using namespace antlr4;
using namespace antlrcpptest; // Grammer 변환 시 지정했던 패키지명


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


// CANTLR4TESTDlg 메시지 처리기

BOOL CANTLR4TESTDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
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

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CANTLR4TESTDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	CDialogEx::OnSysCommand(nID, lParam);
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CANTLR4TESTDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

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

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CANTLR4TESTDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CANTLR4TESTDlg::OnBnClickedButtonParse()
{// 1. UI에서 SQL 가져오기
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

		if (errorCount == 0) {
			CString msg;
			msg.Format(_T("파싱 성공! \n구조: %s"), CString(tree->toStringTree(&parser).c_str()));
			AfxMessageBox(msg);
		}
		else {
			CString msg;
			msg.Format(_T("파싱 실패..\n오류 개수: %d"), errorCount);
			AfxMessageBox(msg);
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
