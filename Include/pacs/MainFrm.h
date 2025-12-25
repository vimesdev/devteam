#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "HMSMainFrame.h"
#include "GUISplitterWnd.h"
#include "PACSPatientList.h"
#include "PACSPatientProfile.h"
#include "PACSImageCapture.h"


class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;
public:
	CVIMESCaptureVideo	m_wndVideo;
	CGuiGroupBox	m_wndPicture;
	CGuiGroupBox	m_wndDevices;
	CGuiComboBox	m_wndDeviceControl;

	CString		m_szModID;
	BOOL		m_bExternalInput;
	int			m_nInstID;
	long		m_nOrderID;
	long		m_nOrderIDTmp;
	long		m_nDownloadOrderID;

	CString		m_szOrderDate;
	CString		m_szImageDir;
	CString		m_szDeptID;
	int			m_nRoomID;
	int			m_nUserGroup;
	bool		m_bHISReference;
	bool		m_bTabActiveImage;
	bool		m_bDicomMode;

	int m_nReportID;
	TCHAR szPath[MAX_PATH];
	CString m_szID;
	CString m_szFileName;
	CString	m_szGetCurrentDirectoryPath;
	
	

	CGuiSplitterWnd m_wndSplitterV;
	
	CPACSPatientList		m_wndPatientList;
	CPACSPatientProfile		m_wndPatientProfile;
	CPACSImageCapture		m_wndImageCapture;
	void	OnSetupSelect();
	CMainFrame();
	virtual ~CMainFrame();
	CString GetDeptName();
	bool	IsDicomMode();
	
	bool IsActiveDocument();

protected: 
	void OnInitializes();
	void OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);

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
	afx_msg void OnCommandSetupformresult();
	afx_msg void OnCommandDailyorder();
		
	afx_msg void OnFileMedicalcabinetmanagement();	
	afx_msg void OnFileReport32786();
	afx_msg void OnSetupSetuppacsfrom();
	afx_msg void OnSetupSetingcapture();
};

void ParseResultFields(LPCTSTR lpszData, LPCTSTR lpszSeperators, CStringArray& fields);
int GetEncoderClsid(const WCHAR* format, CLSID* pClsid);
#endif