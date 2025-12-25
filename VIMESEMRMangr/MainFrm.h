#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "HMSMainFrame.h"
#include "Notification.h"
#include "HMSPatientListRecord.h"
#include "HMSPatientInforDialog.h"
#include "HMSPatientRecordInfo.h"
#include "EMRView.h"
#include "EMRPatientProfile.h"
#include "EMRPatientList.h"
#include "HMSSignatureTransfer.h"
#include "HMSServerInformation.h"
#include "HMSBackupEMRList.h"
#include "EMRView.h"

#include "DocPane.h"

class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;	
public:
	CNotification		m_wndNotification;
	CGuiTabCtrl		m_wndEMRTab;	
	CGuiTabCtrl		m_wndTransferTab;
	CGuiTabCtrl		m_wndTransferDownTab;
	CGuiTabCtrl		m_wndMeetingOnlineTab;
	CGuiTabCtrl		m_wndStudentListTab;

	
	//EMR
	CEMRView m_wndEMRView;	
	CEMRPatientList m_wndEMRPatientList;
	CHMSServerInformation m_wndSServerInformation;

	//CHMSSpeechText m_wndSHMSSpeechText;

	//PatientRecord cu	
	CHMSPatientListRecord m_wndPatientListRecord;
	CHMSPatientRecordInfo m_wndPatientInfor;
	CHMSSignatureTransfer m_wndTrinhKy;

	CHMSBackupEMRList m_wndBackupEMRList;

	bool		m_bMap;
	CString		m_szModID;
	BOOL		m_bExternalInput;
	int			m_nInstID;
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
	CString m_szBackupDir;

	long		m_nOutPatientID;
	BOOL		m_bIsOutPatient;

	CMainFrame();
	void CMainFrame::OnCreateComponents();
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