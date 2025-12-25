#ifndef MAINFRAME_H
#define MAINFRAME_H
#pragma once

#include "GuiMainFrame.h"
#include "afxinet.h"
#include "SysInsuranceView.h"
#include "SysPaperView.h"
#include "AutoSync.h"
#include <string>
#include "HMSSignature.h"
using namespace std;
#ifdef _UNICODE
typedef std::wstring  STLString;
#else
typedef std::string	 STLString;
#endif

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
	CHMSSignature m_wndSign;

	CString	m_szFromDate;
	CString	m_szToDate;

	CString	m_szProviID ;
	CString m_szCompany ;
	CString m_szCompanyName ;
	CString m_szCeoName;
	CString m_szSeviceName();
	CSysInsuranceView m_wndSysInsuranceView;
	CSysPaperView	m_wndPaperView;
	CInternetSession*	m_pSession;
	CFtpConnection*		m_pFtp;

	void	ConnectFtp();
	bool bIsAutoSysXML;
	bool bIsAutoCheckout;
	bool AutoCheckOut();
	bool WriteCheckOut();

// Attributes
public:

// Operations
public:
	virtual ~CMainFrame();
protected: 
	void OnInitializes();
	bool	WriteCheckIn();
	
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
	afx_msg void OnFileAutosys();
	afx_msg void OnFile79a();
	afx_msg void OnFile80a();

	bool	WriteCheckOutOne(CString szMaLK);
	bool	OnDeleteCheckOut(CString szMaLK);
	CString Lay_MaLK(long nDocumentNo, long nInvoiceNo);
	CString GetSelectionString(CString szID, CString szCode);
	STLString GetXML1(CString szMa_lk);
	STLString GetXML2(CString szMa_lk);
	STLString GetXML3(CString szMa_lk);
	STLString GetXML4(CString szMa_lk);
	STLString GetXML5(CString szMa_lk);

	STLString GetXML1_Base64(CString szMa_lk);
	STLString GetXML2_Base64(CString szMa_lk);
	STLString GetXML3_Base64(CString szMa_lk);
	STLString GetXML4_Base64(CString szMa_lk);
	STLString GetXML5_Base64(CString szMa_lk);

	STLString GetXML6_Base64(CString szMa_lk);
	STLString GetXML7_Base64(CString szMa_lk);
	STLString GetXML8_Base64(CString szMa_lk);
	STLString GetXML9_Base64(CString szMa_lk);
	STLString GetXML10_Base64(CString szMa_lk);
	STLString GetXML11_Base64(CString szMa_lk);
	STLString GetXML12_Base64(CString szMa_lk);
	STLString GetXML13_Base64(CString szMa_lk);
	STLString GetXML14_Base64(CString szMa_lk);
	STLString GetXML15_Base64(CString szMa_lk);
	

	STLString GetXMLCT(CString szSQL,CString szType);
	int OnWriteCheckOut130(CString szMaLK, bool bSign = false);
	int OnWriteHoSoGiayTo(long nDocumentNo,int nTreatTime );
	int OnWriteHoSoGiayTo(long nDocumentNo,int nTreatTime , CString szType);

	std::string GetXML0_Base64(CString szMaLK);
	int WriteXML0(CString szMaLK);
    bool Sign(CString szFilePath);

	afx_msg void OnDestroy();
};
#endif