#ifndef MAINFRAME_H
#define MAINFRAME_H
#pragma once

#include "GuiMainFrame.h"
#include "afxinet.h"
#include "SysInsuranceView.h"
#include "SysPaperView.h"
#include <string>
using namespace std;
#ifdef _UNICODE
typedef std::wstring  STLString;
#else
typedef std::string	 STLString;
#endif
#include "AutoSync.h"
class CMainFrame : public CGuiMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;
public:
	CAutoSync	m_autoSync;
	CString	m_szPath;
	CString	m_szCurrentDir;
// Construction
	CMainFrame();
	CString		m_szFtpHost;
	CString		m_szHost;
	CString		m_szUser;
	CString		m_szPassword;

	CString	m_szProviID ;
	CString m_szCompany ;
	CString m_szCompanyName ;
	CString m_szCeoName;
	CSysInsuranceView m_wndSysInsuranceView;
	CSysPaperView	m_wndPaperView;
	CInternetSession*	m_pSession;
	CFtpConnection*		m_pFtp;
	bool bIsAutoSysXML;
	bool bIsAutoCheckout;
	
	void	ConnectFtp();

// Attributes
public:

// Operations
public:
	virtual ~CMainFrame();
	bool	AutoCheckOut();
	bool	WriteCheckIn();
	bool	WriteCheckOut();

	
protected: 
	void OnInitializes();
	
	
	void	SendFiles();
	
	void	OnSyncData();
	void*	WriteXMLData(LPCTSTR lpszNodeName, CRecord* rs, void* xmlNode, bool bUpper=true);
	void	OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);
// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileCheckin();
	afx_msg void OnFileCheckout();
	
	afx_msg void OnTimer(UINT nIDEvent);
	bool	WriteCheckOutOne(CString szMaLK);
	bool	OnDeleteCheckOut(CString szMaLK);
	CString Lay_MaLK(long nDocumentNo, long nInvoiceNo);
	STLString GetXML1(CString szMa_lk);
	STLString GetXML2(CString szMa_lk);
	STLString GetXML3(CString szMa_lk);
	STLString GetXML4(CString szMa_lk);
	STLString GetXML5(CString szMa_lk);

	STLString GetXMLCT(CString szSQL,CString szType);
	int OnWriteCheckOut4210(CString szMaLK,bool bBQP = false);
	int OnWriteHoSoGiayTo(long nDocumentNo,int nTreatTime );
	int	OnWriteHoSoGiayTo(long nDocumentNo,int nTreatTime ,CString szType);


	afx_msg void OnFileAutosys();

//	afx_msg void OnDestroy();
	afx_msg void OnFileInsurancenameedit();
};
#endif