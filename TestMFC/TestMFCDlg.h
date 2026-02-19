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
	void AddTraceLog(LPCTSTR lpszFormat, ...);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);

protected:
	HICON m_hIcon;

	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedButtonIdentifyMySQL(); // 쿼리 타입 분석

	afx_msg void OnBnClickedButtonMultiParseMySQL();  // 복합 쿼리 파싱 버튼 (MySQL)
	afx_msg void OnBnClickedButtonTokenizeMySQL();    // 토큰화 버튼 (MySQL)

	afx_msg void OnBnClickedButtonMultiParseOracle();  // 복합 쿼리 파싱 버튼 (Oracle)
	afx_msg void OnBnClickedButtonTokenizeOracle();    // 토큰화 버튼 (Oracle)

	afx_msg void OnBnClickedButtonMultiParseSQLServer();  // 복합 쿼리 파싱 버튼 (SQL Server)
	afx_msg void OnBnClickedButtonTokenizeSQLServer();    // 토큰화 버튼 (SQL Server)

	afx_msg void OnBnClickedButtonMultiParsePostgreSQL();  // 복합 쿼리 파싱 버튼 (PostgreSQL)
	afx_msg void OnBnClickedButtonTokenizePostgreSQL();    // 토큰화 버튼 (PostgreSQL)

	afx_msg void OnBnClickedButtonMultiParseDB2();  // 복합 쿼리 파싱 버튼 (DB2)
	afx_msg void OnBnClickedButtonTokenizeDB2();    // 토큰화 버튼 (DB2)
};
