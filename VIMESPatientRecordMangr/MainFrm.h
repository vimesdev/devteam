#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "ChildView.h"
#include "GuiMainFrame.h"
#include "HMSPatientRecordInfo.h"
#include "HMSPatientListRecord.h"
#include "HMSRecordNoSetupDialog.h"
#include "HMSUserSetup.h"

class CMainFrame : public CGuiMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;
public:

	CHMSPatientRecordInfo m_wndPatientRecord;
	CHMSPatientListRecord m_wndPatientListRecord;

	CString m_szIDCode;
	CString m_szHealthSvc;
	CString m_szHospitalName;
	CString m_szStoreAll;
	CString m_szPermID;
	
	
	CMainFrame();
	virtual ~CMainFrame();
protected: 
	void OnInitializes();

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg LRESULT OnMyHotKey(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSetupArchivalnumber();
	afx_msg void OnSetupUsersetup();

	CString GetPreviousDay(CString szDay);
	afx_msg void OnFileSetup32774();
	afx_msg void OnFileReport();
};
#endif