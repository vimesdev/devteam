#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "GuiMainFrame.h"
#include "FAMAsset.h"
#include "FAMAssetDetail.h"
//#include "FAMSetupCategory.h"
#include "FAMWarehouseSetup.h"
#include "FinancialAccountSetupDialog.h"
#include "CategorySetupDialog.h"
#include "ManufactureSetupDialog.h"
#include "TypeSetupDialog.h"
#include "VendorSetupDialog.h"
#include "EmployeeSetupDialog.h"
#include "DepartmentSetupDialog.h"
#include "IncReasonSetupDialog.h"
#include "ConditionSetupDialog.h"
#include "FAMUpdateAccumDeprDialog.h"
#include "FAMListSetupDialog.h"
#include "FAMAssetType.h"
#include "FAMSerialSetupDlg.h"
#include "FAMTransactionOrder.h"
#include "FAMOtherTransaction.h"

//chuc nang

#include "FAMAssetDept.h"
#include "FAMAssetDepreciation.h"
#include "FAMMaintenance.h"
#include "FAMAttachment.h"
#include "FAMUsageProcess.h"
#include "FAMAccessories.h"
#include "IncReasonSetupDialog.h"
#include "ConditionSetupDialog.h"
#include "FAMInventory.h"
#include "FAMInventoryDlg.h"
#include "FAMTransfer.h"
#include "FAMReceiptOrder.h"
#include "FAMTransferToDept.h"
#include "FAMAllocateToDept.h"
#include "FAMLiquidated.h"
#include "FAMInvent.h"
#include "FAMMaintenanceRepair.h"
#include "FAMComponents.h"
#include "FAMDepreciation.h"
#include "FAMAdjustment.h"
#include "FAMWarehouse.h"


class CMainFrame : public CGuiMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;
public:
	CFAMAsset	m_wndAsset;
	CFAMAssetDetail m_wndAssetDetail;
	CFAMAssetType m_wndAssetType;
	CFAMAssetDepreciation m_wndAssetDepr;
	CFAMMaintenance m_wndMaintenance;
	CFAMAttachment m_wndAttach;
	CFAMUsageProcess m_wndUsageProcess;
	//CFAMAssetExtraInformation m_wndExtraInfo;
	CFAMAccessories m_wndAccessories;
	CFAMInventory m_wndInventory;
	CFAMTransfer m_wndTransfer;
	CFAMReceiptOrder m_wndReceiptOrder;
	CFAMTransactionOrder	m_wndTransferList;
	CFAMTransactionOrder	m_wndAllocateList;
	CFAMTransactionOrder	m_wndReturnList;
	CFAMOtherTransaction	m_wndOtherImport;
	CFAMOtherTransaction	m_wndOtherExport;

	CFAMTransferToDept m_wndTransferToDept;
	CFAMAllocateToDept m_wndAllocateToDept;
	CFAMLiquidated m_wndLiquidated;
	CFAMInvent m_wndInvent;
	CFAMMaintenanceRepair m_wndMR;
	CFAMComponents m_wndComponents;
	CFAMDepreciation m_wndDepr;
	CFAMAdjustment m_wndAdjustment;
	CFAMWarehouse m_wndWarehouse;
	CString m_szAssetNo;

	double m_nCost;
	double m_nCurValue;
	long m_nDeprTerm;
	double m_nAccumDepr;
	
	bool m_bChangeType;
	bool m_bChangeDept;

	CString m_szCategory;
	CString m_szPurchaseDate;
	CString m_szInService;
	//CString m_szStatus;
	//CString m_szOldDept;
	CString m_szDepartment;
	CString m_szEmployee;
	CString m_szDeprUnit;
	CString m_szDeprMethod;

	CString m_szStandAlone;
	CString m_szUseHRM;
	CString m_szHealthService;
	CString m_szCompanyName;
	CString szType;
	CString GetHealthService() 
	{ 
		return m_szHealthService;
	}
	CString GetCompanyName()
	{
		return m_szCompanyName;
	}

	CMainFrame();
	void	OnCreateComponents();
	void	OnCreateMMComponents();
	virtual ~CMainFrame();
protected: 
// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSetupCategorylist();
	//afx_msg void OnReportAssetlist();
	afx_msg void OnSetupAccountlist();
	afx_msg void OnSetupManufacturerlist();
	afx_msg void OnSetupAssettypelist();
	afx_msg void OnSetupVendorlist();
	afx_msg void OnToolsUpdateaccumulateddepreciation();
	afx_msg void OnSetupEmployeelist();
	afx_msg void OnReportIncreasefixedasset();
	afx_msg void OnReportDecreaseoffixedasset();
	afx_msg void OnSetupDepartmentlist();
	afx_msg void OnSetupIncReason();
	afx_msg void OnSetupConditionoffixedasset();
	afx_msg void OnSetupListssetup();
	afx_msg void OnReportInventoryoffixedasset();
	afx_msg void OnRecIncreaseMgr();
	afx_msg void OnRecDecreaseMgr();
	afx_msg void OnMachineInventoryRecord();
	afx_msg void OnWarehouseSetup();
	afx_msg void OnReportSelect();
	afx_msg void ExecDMLEx(CString szSQL, long &resCode, CString &resDetail);

	long	LoadStorageList(CWnd* pCB, CString szKey, CString szFilter=_T(""));
	long	LoadSourceList(CWnd* pCB, CString szKey, CString szFilter=_T(""));
	long	LoadStdItemList(CWnd* pCB, CString szKey, CString szFilter=_T(""));
	long	LoadItemList(CString szStorageID, CWnd* pCB, CString szKey, CString szFilter=_T(""), bool bCheckAvaiable=false);
	long	LoadItemList_Other(CString szStorageID, CWnd* pCB, CString szKey, CString szFilter=_T(""), bool bCheckAvaiable=false);
	long	LoadStdItemListOther(CWnd* pCB, CString szKey, CString szFilter=_T(""));

};
#endif