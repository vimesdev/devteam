#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "HMSMainFrame.h"
#include "GUISplitterWnd.h"
#include "PACSPatientList.h"
#include "PACSPatientProfile.h"
#include "PACSImageCapture.h"
#include "OperationResult.h"
#include "PACSInpackageMaterialView.h"
#include "HMSSignaturePendingView.h"

#define WM_REFRESH	WM_USER+100

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
	int			m_nPRoomID;
	long		m_nOrderID;
	long		m_nOrderIDTmp;
	long		m_nDownloadOrderID;
	
	CString		m_szOrderDate;
	CString		m_szImageDir;
	CString		m_szDeptID;
	CString		m_szXDeptID;
	CString		m_szZoneID;
	int			m_nRoomID;
	int			m_nUserGroup;
	bool		m_bHISReference;
	bool		m_bTabActiveImage;
	bool		m_bDicomMode;
	BOOL		m_bAverCapture;

	int m_nReportID;
	TCHAR szPath[MAX_PATH];
	CString m_szID;
	CString m_szFileName;
	CString	m_szGetCurrentDirectoryPath;
	
	

	CGuiSplitterWnd m_wndSplitterV;
	
	CPACSPatientList		m_wndPatientList;
	CPACSPatientProfile		m_wndPatientProfile;
	CPACSImageCapture		m_wndImageCapture;
	COperationResult		m_wndOperationResult;
	CPACSInpackageMaterialView	m_wndMaterialView;
    
	CHMSSignaturePendingView m_wndSignaturePendingView;

	void	OnSetupSelect();
	CMainFrame();
	virtual ~CMainFrame();
	CString GetDeptName();
	bool	IsDicomMode();
	
	bool IsActiveDocument();
    void OnTabSelectChange(int nOld, int nNew);


	CString		m_szAverCaptureName;

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
	afx_msg void OnChangeDepartment();
		
	afx_msg void OnFileMedicalcabinetmanagement();	
	afx_msg void OnFileReport32786();
	afx_msg void OnSetupSetuppacsfrom();
	afx_msg void OnSetupSetingcapture();
	afx_msg void OnFileTrackingmedicalcabinet();
	afx_msg void OnFileExporttestbreakordersheet();
	afx_msg void OnSetupSetuphitsimaging();
	afx_msg void OnSetupSetupprescriptionlist();
	afx_msg void OnSetupPrescriptionscontradictions();
	afx_msg void OnFileSetupOperationGroup();
	afx_msg void OnFileGeneralCabinetOrderSheet();
	afx_msg void OnMenuAnestheticSheet();
	afx_msg void OnFileBosungtutruckhongcobenhnhan();
	afx_msg void OnAverCapture();
	afx_msg void OnSetupContrastmaterialsetup();
	afx_msg void OnCommandDoctorinfo();
	afx_msg void OnSetupPerfromeRoom();
	afx_msg void OnSetupPerfromeOrderRoom();
	afx_msg void OnRoomStatus();
};

void ParseResultFields(LPCTSTR lpszData, LPCTSTR lpszSeperators, CStringArray& fields);
//comment ham nay lai vi da khai bao trong hmsmainframe roi
//int GetEncoderClsid(const WCHAR* format, CLSID* pClsid);
#endif