#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "MainFrame_E10.h"
#include "PurchaseOrderList.h"
#include "PurchaseReturnOrderList.h"
#include "PurchaseOrderInvoicePaymentList.h"
#include "ARSaleOrderList.h"
#include "ARQuoteList.h"
#include "AdBusinessPartnerList.h"
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
#include "PMSPrescriptionOrderIN.h"
#include "PMSPrescriptionReturnList.h"
#include "PurchaseDesktop.h"
#include "StorageAdjustmentList.h"
#include "AdCountry.h"
#include "AdProductResource.h"
#include "PMSSaleOrderList.h"
#include "COContractList.h"
#include "AdBankList.h"
#include "StorageReturnOrderList.h"
#include "StorageMedicalCabinetList.h"
#include "AdDeptIndexSetup_HC.h"

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

	CAdPaymentTerm		m_wndPaymentTerm;
	CAdDeliveryMethod	m_wndDeliveryMethod;
	CAdDeliveryTerm		m_wndDeliveryTerm;
	CAdUOM				m_wndUom;
	CAdBusinessPartnerList		m_wndAdBusinessPartnerList;
	CAdManufactureList	m_wndManufactureList;

	CStorageList			m_wndStorageList;

	CProductList			m_wndProduct;
	CProductClassList		m_wndProductClass;
	CProductCategoryList	m_wndProductCategory;
	CAdCountry				m_wndCountry;
	CAdProductResource		m_wndProductResource;
	CAdPermSetup			m_wndPermSetup;
	CAdProductType			m_wndProductType;
	//Dang sach mua hang
	CPurchaseDesktop			m_wndPurchaseDesktop;

	CPurchaseOrderList			m_wndPurchaseOrderList;
	
	CPurchaseReturnOrderList	m_wndPurchaseReturnOrderList;
	CPurchaseOrderInvoicePaymentList		m_wndPurchaseOrderInvoicePaymentList;

	//Danh sach ban hang
	CARSaleOrderList			m_wndARSaleOrderList;

	CARQuoteList			m_wndARQuoteList;
	CPMSSaleOrderList		m_wndSaleOrderList;

//Import management
	CStorageMovementList		m_wndStorageMovementImportList;
	CStorageReturnOrderList		m_wndStorageReturnOrderList;
	CStorageMedicalCabinetList	m_wndStorageMedicalCabinetList;

//Export Management
	CStorageMovementList	m_wndStorageMovementList;
	CStorageTransactionList	m_wndStorageTransactionList;
	CStorageDeliveryOrderList m_wndStorageDeliveryOrderList;
	
	CPMSPrescriptionOrder	m_wndPrescription;
	CPMSPrescriptionOrderIN	m_wndPrescriptionIN;

	CPMSPrescriptionReturnList	m_wndPrescriptionReturnList;
	
	CStorageAdjustmentList	m_wndStorageAdjustmentList;
	
	CStorageInventory		m_wndStorageInventory;

	CHREmployeeList	m_wndHREmployeeList;
	
	CCOContractList			m_wndContractList;
	CAdBankList					m_wndBankList;
	CAdDeptIndexSetup_HC		m_wndDeptIndexSetup_HC;

	

	



	CMainFrame();
	void	OnCreateComponents();
	void	OnCreateMMComponents();
	
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
	afx_msg void OnFileChangepassswod();
};



#endif