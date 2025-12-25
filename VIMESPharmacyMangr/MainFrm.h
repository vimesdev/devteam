#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "MainFrame_E10.h"
#include "PurchaseOrderList.h"
#include "PurchaseReturnOrderList.h"
#include "PurchaseOrderInvoicePaymentList.h"
#include "ARSaleOrderList.h"
#include "ARQuoteList.h"
#include "AdBusinessPartnerList.h"
#include "AdPartnerType.h"
#include "AdPartnerCategory.h"
#include "HREmployeeList.h"
#include "AdCurrency.h"
#include "AdPaymentTerm.h" 
#include "AdDeliveryMethod.h"
#include "AdDeliveryTerm.h"
#include "AdUOM.h"
#include "AdManufactureList.h"
#include "AdPermSetup.h"
#include "AdProductType.h"
#include "StorageList.h"
#include "ProductCategoryList.h"
#include "ProductClassList.h"
#include "ProductList.h"
#include "StorageMovementList.h"
#include "StorageInventory.h"
#include "StorageTransactionList.h"
#include "StorageDeliveryOrderList.h"
#include "PMSPrescriptionOrder.h"
#include "PMSPrescriptionOrder_Ex.h"
#include "PMSPrescriptionOrderIN.h"
#include "PMSPrescriptionOrderIN_EX.h"
#include "PMSPrescriptionReturnList.h"
#include "PurchaseDesktop.h"
#include "StorageAdjustmentList.h"
#include "AdCountry.h"
#include "AdProductResource.h"
#include "AdPaymentResource.h"
#include "PMSSaleOrderList.h"
#include "A11OrderList.h"
#include "COContractList.h"
#include "AdBankList.h"
#include "StorageReturnOrderList.h"
#include "StorageMedicalCabinetList.h"
#include "BalanceImportList.h"
#include "Notification.h"
#include "AdDeptIndexSetup.h"
#include "HMSDocApprove.h"
#include "HMSDocApproveA11.h"
#include "StorageImportList.h"
#include "AdContractPackageList.h"
#include "ContractPaymentOrderList.h"
#include "PaymentOrderList.h"
#include "AdContractList.h"
//#include "CancerStorageTransactionList.h"
#include "CancerPrescriptionOrderIN.h"
//#include "HMSAdviseDrug/HMSAdviseOrder.h"
#include "AdContractLiquidationList.h"
#include "HMSExt/HMSAdviseOrder.h"
#include "ProductTenderList.h"
#include "HMSSignatureTransfer.h"
#include "PMSPrescriptionClearOrder.h"
#include "SysUserSetup_v2.h"

/**********************************************
	GL: General Ledger
	FA: Financial accounting
	AR: Sale & Account Receivables (Ban hang va cong no phai thu)
	AP: Purchase & Account payables (Mua hang va cong no phai tra)
	WA: Warehouse management
	FA:  Assets (Tai san co dinh)
	HR: Human resources and payroll
	TAX: Tax Accounting (Ke toan thue)
	AD:	Administration Management(Quan tri he thong)
	RPT: Reports
**********************************************/

#define QueryOpener(szSQL){_fmsg(_T("%s"), szSQL);ShellExecute( NULL, _T("open"), _T("c:\\windows\\notepad.exe"), _T("C:\\tmp.dat"), _T(""), SW_SHOWNORMAL);};

class CMainFrame : public CMainFrame_E10
{
	
public:
	CNotification		m_wndNotification;

	CAdPaymentTerm		m_wndPaymentTerm;
	CAdDeliveryMethod	m_wndDeliveryMethod;
	CAdDeliveryTerm		m_wndDeliveryTerm;
	CAdUOM				m_wndUom;
	CAdBusinessPartnerList		m_wndAdBusinessPartnerList;
	CAdPartnerType		m_wndPartnerType;
	CAdPartnerCategory		m_wndPartnerCategory;
	CAdManufactureList	m_wndManufactureList;

	CStorageList			m_wndStorageList;
	CProductTenderList		m_wndProductTender;
	CProductList			m_wndProduct;
	CProductClassList		m_wndProductClass;
	CProductCategoryList	m_wndProductCategory;
	CAdCountry				m_wndCountry;
	CAdProductResource		m_wndProductResource;
	CAdPaymentResource		m_wndPaymentResource;
	CAdPermSetup			m_wndPermSetup;
	CAdProductType			m_wndProductType;
	CAdBankList				m_wndBankList;
	
	CProductTenderList		m_wndProdutTenderList;
    CSysUserSetup_V2		m_wndUser;

	//Danh sách gói thầu
	CAdContractPackageList	m_wndContractPackageList;
	//Danh sách hợp đồng
	CAdContractList			m_wndContractList;
	//Dang sach mua hang
	CPurchaseDesktop			m_wndPurchaseDesktop;

	CPurchaseOrderList			m_wndPurchaseOrderList;
	
	CPurchaseReturnOrderList	m_wndPurchaseReturnOrderList;
	//1. Thanh toán hóa đơn
	CPurchaseOrderInvoicePaymentList		m_wndPurchaseOrderInvoicePaymentList;
	//2. Thanh toán hợp đồng
	CContractPaymentOrderList		m_wndContractPaymentOrderList;
	//3. Đề nghị thanh toán
	CPaymentOrderList		m_wndPaymentOrderList;
	//Danh sach ban hang
	CARSaleOrderList			m_wndARSaleOrderList;

	CARQuoteList			m_wndARQuoteList;
	CPMSSaleOrderList		m_wndSaleOrderList;
	CA11OrderList			m_wndA11OrderList;

//Import management
	CStorageMovementList	m_wndStorageMovementImportList;
	CStorageReturnOrderList	m_wndStorageReturnOrderList;

	CStorageMedicalCabinetList	m_wndStorageMedicalCabinetList;

//Export Management
	CStorageMovementList	m_wndStorageMovementList;
	CStorageTransactionList	m_wndStorageTransactionList;
	CStorageDeliveryOrderList m_wndStorageDeliveryOrderList;
	//Duyet cap phat don thuoc ngoai tru
	CPMSPrescriptionOrder	m_wndPrescription;
	CPMSPrescriptionOrderEX	m_wndPrescriptionEX;
	//Xử lý đơn treo khi đã duyệt TC nhưng bệnh nhân không lĩnh
	CPMSPrescriptionClearOrder	m_wndPrescriptionClearOrder;

	//Duyet cap phat don thuoc noi tru
	CPMSPrescriptionOrderIN	m_wndPrescriptionIN;
	
	CPMSPrescriptionOrderINEX	m_wndPrescriptionOrderINEX;

	CPMSPrescriptionReturnList	m_wndPrescriptionReturnList;
	
	CStorageAdjustmentList	m_wndStorageAdjustmentList;
	
	CBalanceImportList		m_wndStorageAdjImport;

	CStorageInventory		m_wndStorageInventory;

	CHREmployeeList	m_wndHREmployeeList;
	
	//CCOContractList			m_wndContractList;
	CBalanceImportList		m_wndBalanceImportList;

	CAdDeptIndexSetup		m_wndDeptIndexSetup;
	//Duyệt hồ sơ ra viện
	CHMSDocApprove			m_wndDocApprove;
	//Duyệt hồ sơ ra viện A11
	CHMSDocApproveA11	    m_wndDocApproveA11;
	CHMSAdviseOrder			m_wndAdviseOrder;

	CStorageImportList		m_wndStorageImportList;
// Thuoc pha che
	//CCancerStorageTransactionList	m_wndCancerStorageTransactionList;
	CCancerPrescriptionOrderIN m_wndCancerPrescriptionIN;

	CAdContractLiquidationList	m_wndContractLiquidationList;
	//trinh ky
    CHMSSignatureTransfer m_wndTrinhKy;

	CMainFrame();
	void	OnCreateComponents();
	void	OnPMCreateComponents();
	
protected: 
	DECLARE_DYNAMIC(CMainFrame)

// Attributes
public:

// Operations
public:

// Overrides
public:

// Implementation
public:
	virtual ~CMainFrame();
// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileReports();
	afx_msg void OnFileChangepassword();
	afx_msg void OnAppExit();
	afx_msg void OnFileCommand();
	afx_msg void OnCommandRecalorderquanlity();
	afx_msg void OnFileSetupmember();
	afx_msg void OnFilePatientprofiletrack();
	afx_msg void OnFileSetupdrugcancer();
	afx_msg void OnFileSetupdruglevel();
	void OnTimer();
	afx_msg void OnMenu();
	afx_msg void OnSettingsImportinsurancelist();
	afx_msg void OnSettingsTreatDiagram();
	afx_msg void OnPatientProfile();
	afx_msg void OnSetupIot131();

	afx_msg void OnSettingsInteractionsetup();
	afx_msg void OnCommandLockorder();
	afx_msg void OnCommandPosttonationalgate();
	void	OnSettingsExpense();
    void OnTabSelectChange(int nOld, int nNew);
};

#endif