#pragma once

class CANTLR4TESTDlg : public CDialogEx
{
public:
	CANTLR4TESTDlg(CWnd* pParent = nullptr);

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ANTLR4TEST_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);


	void AddTraceLog(LPCTSTR lpszFormat, ...);

protected:
	HICON m_hIcon;


	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonParse();
};
