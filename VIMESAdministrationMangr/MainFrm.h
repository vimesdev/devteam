#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "HMSMainFrame.h"
#include "SysCompany.h"
#include "SysConfig.h"
#include "SysSetupList.h"
#include "SysMessageSetup.h"
#include "SysUserSetup.h"
#include "SysDictionarySetup.h"
#include "SysPermission.h"
#include "SysDepartment.h"
#include "HMSHospitals.h"
#include "HMSICD10.h"
#include "HMSFeeTabs.h"
#include "VIMESAddress.h"
#include "SysInsuranceCode.h"
#include "SYSCongGiamDinhNoiBoVIMES.h"
#include "DocPane.h"
#include "DanhMucNhiemKhuanBenhVien.h"
#include "./PriceSchema/HMSPriceSchemaFullView.h"
#include "./PriceSchema/HMSFeePriceSchemaView.h"
#include "HMSPerforRoomSetup.h"
#include "HMSPerforRoomOrderSetup.h"
#include "HMSExt\HMSExtDef.h"

class CMainFrame : public CHMSMainFrame
{
	
public:
	CSysCompanySetup			m_wndCompany;
	CSysConfigSetup		m_wndConfig;
	CSysSetupList			m_wndSetupList;
	CSysUserSetup			m_wndUser;
	CSysMessageSetup		m_wndMessage;
	CSysDictionarySetup	m_wndDictionary;
	CSysPermissionSetup		m_wndPermission;
	CSysDepartmentSetup		m_wndDepartment;
	CHMSHospitalListSetup			m_wndHospital;
	CHMSICD10Setup				m_wndICD10;
	CHMSFeeTabSetup				m_wndFeeTabs;
	CVIMESAddress		m_wndAddress;
	CSysInsuranceCode	m_wndInsurance;
	CSYSCongGiamDinhNoiBoVIMES m_wndCongGiamDinh;
	CDanhMucNhiemKhuanBenhVienSetup		m_wndDanhMucNhiemKhuanBenhVien;
	CString m_szLocalHostName;
	CHMSPriceSchemaFullView m_wndPriceSchemaFullView;
	CHMSFeePriceSchemaView m_wndFeePriceSchemaView;
	//CHMSPerforRoomSetup m_wndPerforRoomSetup;
	//CHMSPerforRoomOrderSetup m_wndPerforRoomOrderSetup;
protected: 
	DECLARE_DYNAMIC(CMainFrame)

// Attributes
public:
    CMainFrame();
    virtual ~CMainFrame();
	vector<SProductItem> m_vtProductItem;	
	struct SFee
	{
		CString fee_id;
		CString fee_name;
		long	price_schema_id;
	};
	vector<SFee> m_vtFee;
// Operations
public:
	int CreatePopupMenu(CGuiMenu* pMenu, CRect* pRect, CString szItemStr);
	int	LoadExpenseType(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int	LoadExpense(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int	LoadPriceSchema(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int	LoadFeeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int	LoadFeeList(CGuiListCtrl* pList, CString szFilter=_T(""));
	int	LoadFeeGroup(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	CString GetCheckData(CGuiListCtrl* pList, int nColumn = 0);
	long LoadProductItem(CGuiComboBox* pWnd, CString szKey, CString szFilter=_T(""));
	long PreInitData();
	long LoadExpenseList(CGuiListCtrl* pList, long nPriceSchemaID, CString szFilter=_T(""));
	int	LoadFeeList(CGridListView* pList, CString szFilter=_T(""));
	long LoadExpenseList(CGridListView* pList, long nPriceSchemaID, CString szFilter=_T(""));
	long LoadPriceSchemaVerLine(CGuiListCtrl* pList, CString szFilter=_T(""));

	//Machine Setup
	int	LoadMachineTaskList(CWnd* pWnd, CString szFilter=_T(""));
	int	LoadFeeListView(CWnd* pWnd, CString szFilter=_T(""));
	CString GetCheckListView(CWnd* pWnd, int nColCheck, int nColGet=0);
// Implementation
public:
    
	void OnInitializes();
	void OnExportFeelistExcel();
	int		OnPaneSelChange(int nOldItem, int nNewItem);

protected:  // control bar embedded members


// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	BOOL PreTranslateMessage(MSG *pMsg);
	LRESULT OnHotKey(WPARAM wParam, LPARAM lParam);
	afx_msg void OnFileExport();
	afx_msg void OnFileStockpermission();
	afx_msg void OnFileTestprofilesetup();
	afx_msg void OnFileMapItem();
	afx_msg void OnFileExportfeelist();
	afx_msg void OnFileSetprivoritypatient();
	afx_msg void OnMenuTransferInwardPatient();
	afx_msg void OnMenuCancelRecord();
	afx_msg void OnFileConfigsetup();
	afx_msg void OnMenu32803();
	afx_msg void OnStorageDefaultSetup();
	afx_msg void OnParaClinicalICDSetting();
	afx_msg void OnSettingAutoCheckCard();	
	afx_msg void OnFeeListApproval();
	afx_msg void OnMergeIVFDocno();	
	afx_msg void OnSetupHtmlformsetup();
	afx_msg void OnSetupAdmissionformsetup();
	afx_msg void OnSetupInsurancenameeditor();
	afx_msg void OnSetupFeewarningsetup();
	afx_msg void OnSetupDanhmucmiengiam();
	afx_msg void OnSetupMiengiamTienanHaucan();
	void OnSetupMachine();
	afx_msg void OnSetupHoliday();
	afx_msg void OnSetupSignatureforms();
	afx_msg void OnSetupSignatureSetup();
	afx_msg void OnSetupSignatureImport();
	afx_msg void OnSetupUserRoles();
	 void OnSetupPerfrome();
	 void OnSetupPerfromeOrderRoom();
};

#endif