#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "Notification.h"
#include "HMSMainFrame.h"
#include "RegimenOrder.h"
#include "RegimenOrderList.h"
#include "HMSPhacDoSettingDlg.h"
class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;	
public:
	CNotification		m_wndNotification;
	CGuiTabCtrl		m_wndRegimenTab;
	CRegimenOrder	m_wndRegimen;
	CRegimenOrderList	m_wndRegimenList;
	CHMSPhacDoSettingDlg m_wndPhacDoSetting;

	bool		m_bMap;
	CString		m_szModID;	
	long		m_nOrderID;
	CString		m_szImageDir;
	CString		m_szDeptID;
	CString		m_szDeptPatient;
	int			m_nRoomID;
	int			m_nReportID;
	int			m_nUserGroup;
	bool		m_bHISReference;
	CString		m_szAutoPrint;
	CString		m_szConfirmResult;
	CString		m_szGroupID;
	CString		m_szTestGroup;
	CString		m_szLabConnHost;
	CString		m_szReceiptDeptID;
	CString m_szLocalHostName;
	CString m_szZone;
	CString		m_szDoctorConclusion;

	void CMainFrame::OnCreateComponents();
	void CMainFrame::OnEduCreateComponents();
	
	CMainFrame();
	virtual ~CMainFrame();
	CString GetDeptName();
	void	OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);
	void	SetModuleID(LPCTSTR lpszMod);
	long	LoadTestGroup(CWnd* pWnd, CString szKey, CString szFilter=_T(""));	
	CString GetStudentName(long nStudentID);
protected: 
	void OnInitializes();
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnFileChangepassword();
	afx_msg void OnMenuReportForms();

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnSettingCustomersetup();
	afx_msg void OnCommandSetupCompany();
	afx_msg void OnTestServicePackage();
	afx_msg void OnCountrySetup();
	afx_msg void OnGuideSetup();
	afx_msg void OnSetUpFeeList();
	afx_msg void OnSetZoneWorking();
};


#endif