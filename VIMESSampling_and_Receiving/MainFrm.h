#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "HMSMainFrame.h"
#include "GUISplitterWnd.h"
#include "LIMSPatientProfile.h"
#include "LIMSPatientProfile_ex.h"
#include "LIMSPatientList.h"
#include "HMSWorkorder.h"
#include "HMSSurgerySchedule.h"
#include "LIMSBatchView.h"



#pragma comment( lib, "../Lib/HMSReportForms.lib" )

class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;
	CDbfMap	m_lims_orderTbl;
	CDbfMap	m_lims_order_lineTbl;
	

public:
	BOOL		m_bAutoPrint;
	bool		m_bMap;
	CString		m_szInPatient;
	CString		m_szModID;
	CString		m_szDepartment;
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
	CString		m_szDeptType;


	CGuiSplitterWnd m_wndSplitterV;
	CLIMSPatientList		m_wndPatientList;
	CLIMSPatientProfile		m_wndPatientProfile;
	CLIMSPatientProfile_ex	m_wndPatientProfile_ex;
	CHMSSurgerySchedule		m_wndSurgerySchedule;
	

	CLIMSBatchView			m_wndBatchView;


	CMainFrame();
	virtual ~CMainFrame();
	CString GetDeptName();
	CString		GetDoctorName(CString szUserId, bool bFirstName=false);
	void	OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);
	void	SetModuleID(LPCTSTR lpszMod);
	long	LoadTestGroup(CWnd* pWnd, CString szKey, CString szFilter=_T(""));

	CString	GetDeptType() { return m_szDeptType; }

protected: 
	void OnInitializes();
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSetupDescribegroupsetup();
	afx_msg void OnSetupDescribeentrysetup();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSetupPermissionsetup();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnSetupInstrumentprotocol();
	afx_msg void OnSetupInstrumentsetting();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnFileCleanuptemplate();
	afx_msg void OnFileChangepassword();
	afx_msg void OnSetupParsesampleresult();
	afx_msg void OnFileConnectrs232();
	afx_msg void OnCommandPreviewresult();
	afx_msg void OnCommandDrugmaterialordersheet();
	
	
	afx_msg void OnFileMedicalcabinetmanager();	
	afx_msg void OnFileReports32804();
	afx_msg void OnFileCreatedrugmaterialorder();
	afx_msg void OnFileMedicalcabinetmanagement();
	afx_msg void OnFileAutoprint();
	afx_msg void OnFileSetupOperationGroup();
	afx_msg void OnFileSetupSmartPrescriptionList();
};

void ParseResultFields(LPCTSTR lpszData, LPCTSTR lpszSeperators, CStringArray& fields);

#endif