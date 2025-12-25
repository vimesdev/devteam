#include "ProductDefault.h"
#include "MainFrame_E10.h"
#include "ProductPriceSetupDialog.h"
static void _OnStorageIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDefault* )pWnd)->OnStorageIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageIDSelendokFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnStorageIDSelendok();
}
/*static void _OnStorageIDSetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnStorageIDKillfocus();
}*/
/*static void _OnStorageIDKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnStorageIDKillfocus();
}*/
static long _OnStorageIDLoadDataFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnStorageIDLoadData();
}
/*static void _OnStorageIDAddNewFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnStorageIDAddNew();
}*/
static void _OnStorageAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDefault* )pWnd)->OnStorageAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageAccountSelendokFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnStorageAccountSelendok();
}
/*static void _OnStorageAccountSetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnStorageAccountKillfocus();
}*/
/*static void _OnStorageAccountKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnStorageAccountKillfocus();
}*/
static long _OnStorageAccountLoadDataFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnStorageAccountLoadData();
}
/*static void _OnStorageAccountAddNewFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnStorageAccountAddNew();
}*/
static void _OnExpenseAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDefault* )pWnd)->OnExpenseAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExpenseAccountSelendokFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnExpenseAccountSelendok();
}
/*static void _OnExpenseAccountSetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnExpenseAccountKillfocus();
}*/
/*static void _OnExpenseAccountKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnExpenseAccountKillfocus();
}*/
static long _OnExpenseAccountLoadDataFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnExpenseAccountLoadData();
}
/*static void _OnExpenseAccountAddNewFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnExpenseAccountAddNew();
}*/
static void _OnRevenueAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDefault* )pWnd)->OnRevenueAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRevenueAccountSelendokFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnRevenueAccountSelendok();
}
/*static void _OnRevenueAccountSetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnRevenueAccountKillfocus();
}*/
/*static void _OnRevenueAccountKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnRevenueAccountKillfocus();
}*/
static long _OnRevenueAccountLoadDataFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnRevenueAccountLoadData();
}
/*static void _OnRevenueAccountAddNewFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnRevenueAccountAddNew();
}*/
static void _OnTaxCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDefault* )pWnd)->OnTaxCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxCategorySelendokFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnTaxCategorySelendok();
}
/*static void _OnTaxCategorySetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnTaxCategoryKillfocus();
}*/
/*static void _OnTaxCategoryKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnTaxCategoryKillfocus();
}*/
static long _OnTaxCategoryLoadDataFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnTaxCategoryLoadData();
}
/*static void _OnTaxCategoryAddNewFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnTaxCategoryAddNew();
}*/
static void _OnPrioritySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductDefault* )pWnd)->OnPrioritySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPrioritySelendokFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnPrioritySelendok();
}
/*static void _OnPrioritySetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnPriorityKillfocus();
}*/
/*static void _OnPriorityKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnPriorityKillfocus();
}*/
static long _OnPriorityLoadDataFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnPriorityLoadData();
}
/*static void _OnPriorityAddNewFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnPriorityAddNew();
}*/
/*static void _OnMinQuantityChangeFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnMinQuantityChange();
} */
/*static void _OnMinQuantitySetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnMinQuantitySetfocus();} */ 
/*static void _OnMinQuantityKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnMinQuantityKillfocus();
} */
static int _OnMinQuantityCheckValueFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnMinQuantityCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnMaxQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnSalePriceChangeFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnSalePriceChange();
} */
/*static void _OnSalePriceSetfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnSalePriceSetfocus();} */ 
/*static void _OnSalePriceKillfocusFnc(CWnd *pWnd){
	((CProductDefault *)pWnd)->OnSalePriceKillfocus();
} */
static int _OnSalePriceCheckValueFnc(CWnd *pWnd){
	return ((CProductDefault *)pWnd)->OnSalePriceCheckValue();
} 
static void _OnPriceButtonSelectFnc(CWnd *pWnd){
	CProductDefault *pVw = (CProductDefault *)pWnd;
	pVw->OnPriceButtonSelect();
} 
static int _OnAddProductDefaultFnc(CWnd *pWnd){
	 return ((CProductDefault*)pWnd)->OnAddProductDefault();
} 
static int _OnEditProductDefaultFnc(CWnd *pWnd){
	 return ((CProductDefault*)pWnd)->OnEditProductDefault();
} 
static int _OnDeleteProductDefaultFnc(CWnd *pWnd){
	 return ((CProductDefault*)pWnd)->OnDeleteProductDefault();
} 
static int _OnSaveProductDefaultFnc(CWnd *pWnd){
	 return ((CProductDefault*)pWnd)->OnSaveProductDefault();
} 
static int _OnCancelProductDefaultFnc(CWnd *pWnd){
	 return ((CProductDefault*)pWnd)->OnCancelProductDefault();
} 
CProductDefault::CProductDefault(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 205;
	SetDefaultValues();
	m_product_defaultTbl = NULL;
	m_rs = NULL;
}
CProductDefault::~CProductDefault(){
}
void CProductDefault::OnCreateComponents(){
	m_wndStorageIDLabel.Create(this, _T("Warehouse"), 5, 5, 125, 30);
	m_wndStorageID.Create(this,130, 5, 380, 30); 
	m_wndStorageAccountLabel.Create(this, _T("Warehouse Account"), 385, 5, 505, 30);
	m_wndStorageAccount.Create(this,510, 5, 790, 30); 
	m_wndExpenseAccountLabel.Create(this, _T("Expense Account"), 5, 35, 125, 60);
	m_wndExpenseAccount.Create(this,130, 35, 380, 60); 
	m_wndRevenueAccountLabel.Create(this, _T("Revenue Account"), 385, 35, 505, 60);
	m_wndRevenueAccount.Create(this,510, 35, 790, 60); 
	m_wndTaxCategoryLabel.Create(this, _T("Tax Category"), 5, 65, 125, 90);
	m_wndTaxCategory.Create(this,130, 65, 380, 90); 
	m_wndPriorityLabel.Create(this, _T("Priority"), 385, 65, 505, 90);
	m_wndPriority.Create(this,510, 65, 590, 90); 
	m_wndDamageLabel.Create(this, _T("Damage"), 595, 65, 695, 90);
	m_wndDamage.Create(this,700, 65, 770, 90); 
	m_wndPercentLabel.Create(this, _T("%"), 775, 65, 790, 90);
	m_wndMinQuantityLabel.Create(this, _T("Min Quantity"), 5, 95, 125, 120);
	m_wndMinQuantity.Create(this,130, 95, 380, 120); 
	m_wndMaxQuantityLabel.Create(this, _T("Max Quantity"), 385, 95, 505, 120);
	m_wndMaxQuantity.Create(this,510, 95, 590, 120); 
	m_wndWarningQuantityLabel.Create(this, _T("Warning Qty"), 595, 95, 695, 120);
	m_wndWarningQuantity.Create(this,700, 95, 790, 120); 
	m_wndPackageLimitLabel.Create(this, _T("Package Limit(%)"), 5, 125, 125, 150);
	m_wndPackageLimit.Create(this,130, 125, 195, 150); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 200, 125, 275, 150);
	m_wndUnitPrice.Create(this,280, 125, 380, 150); 
	m_wndSalePriceLabel.Create(this, _T("Sale Price"), 385, 125, 505, 150);
	m_wndSalePrice.Create(this,510, 125, 760, 150); 
	m_wndPriceButton.Create(this, _T("..."), 765, 125, 790, 150);
}
void CProductDefault::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndStorageID.SetCheckValue(true);
	m_wndStorageID.LimitText(35);
	//m_wndStorageAccount.SetCheckValue(true);
	m_wndStorageAccount.LimitText(35);
	//m_wndExpenseAccount.SetCheckValue(true);
	m_wndExpenseAccount.LimitText(35);
	//m_wndRevenueAccount.SetCheckValue(true);
	m_wndRevenueAccount.LimitText(35);
	//m_wndTaxCategory.SetCheckValue(true);
	m_wndTaxCategory.LimitText(35);
	//m_wndPriority.SetCheckValue(true);
	m_wndPriority.LimitText(35);
	m_wndMinQuantity.SetLimitText(16);
	//m_wndMinQuantity.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(16);
	//m_wndMaxQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(16);
//	m_wndUnitPrice.SetCheckValue(true);
	m_wndSalePrice.SetLimitText(16);
//	m_wndSalePrice.SetCheckValue(true);

	

	m_wndStorageID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndStorageID.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndStorageAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorageAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);


	m_wndExpenseAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExpenseAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);


	m_wndRevenueAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRevenueAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);


	m_wndTaxCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 25);
	m_wndTaxCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndPriority.InsertColumn(0, _T("ID"), CFMT_NUMBER, 25);
	m_wndPriority.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CProductDefault::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorageID.SetEvent(WE_SELENDOK, _OnStorageIDSelendokFnc);
	//m_wndStorageID.SetEvent(WE_SETFOCUS, _OnStorageIDSetfocusFnc);
	//m_wndStorageID.SetEvent(WE_KILLFOCUS, _OnStorageIDKillfocusFnc);
	m_wndStorageID.SetEvent(WE_SELCHANGE, _OnStorageIDSelectChangeFnc);
	m_wndStorageID.SetEvent(WE_LOADDATA, _OnStorageIDLoadDataFnc);
	//m_wndStorageID.SetEvent(WE_ADDNEW, _OnStorageIDAddNewFnc);
	m_wndStorageAccount.SetEvent(WE_SELENDOK, _OnStorageAccountSelendokFnc);
	//m_wndStorageAccount.SetEvent(WE_SETFOCUS, _OnStorageAccountSetfocusFnc);
	//m_wndStorageAccount.SetEvent(WE_KILLFOCUS, _OnStorageAccountKillfocusFnc);
	m_wndStorageAccount.SetEvent(WE_SELCHANGE, _OnStorageAccountSelectChangeFnc);
	m_wndStorageAccount.SetEvent(WE_LOADDATA, _OnStorageAccountLoadDataFnc);
	//m_wndStorageAccount.SetEvent(WE_ADDNEW, _OnStorageAccountAddNewFnc);
	m_wndExpenseAccount.SetEvent(WE_SELENDOK, _OnExpenseAccountSelendokFnc);
	//m_wndExpenseAccount.SetEvent(WE_SETFOCUS, _OnExpenseAccountSetfocusFnc);
	//m_wndExpenseAccount.SetEvent(WE_KILLFOCUS, _OnExpenseAccountKillfocusFnc);
	m_wndExpenseAccount.SetEvent(WE_SELCHANGE, _OnExpenseAccountSelectChangeFnc);
	m_wndExpenseAccount.SetEvent(WE_LOADDATA, _OnExpenseAccountLoadDataFnc);
	//m_wndExpenseAccount.SetEvent(WE_ADDNEW, _OnExpenseAccountAddNewFnc);
	m_wndRevenueAccount.SetEvent(WE_SELENDOK, _OnRevenueAccountSelendokFnc);
	//m_wndRevenueAccount.SetEvent(WE_SETFOCUS, _OnRevenueAccountSetfocusFnc);
	//m_wndRevenueAccount.SetEvent(WE_KILLFOCUS, _OnRevenueAccountKillfocusFnc);
	m_wndRevenueAccount.SetEvent(WE_SELCHANGE, _OnRevenueAccountSelectChangeFnc);
	m_wndRevenueAccount.SetEvent(WE_LOADDATA, _OnRevenueAccountLoadDataFnc);
	//m_wndRevenueAccount.SetEvent(WE_ADDNEW, _OnRevenueAccountAddNewFnc);
	m_wndTaxCategory.SetEvent(WE_SELENDOK, _OnTaxCategorySelendokFnc);
	//m_wndTaxCategory.SetEvent(WE_SETFOCUS, _OnTaxCategorySetfocusFnc);
	//m_wndTaxCategory.SetEvent(WE_KILLFOCUS, _OnTaxCategoryKillfocusFnc);
	m_wndTaxCategory.SetEvent(WE_SELCHANGE, _OnTaxCategorySelectChangeFnc);
	m_wndTaxCategory.SetEvent(WE_LOADDATA, _OnTaxCategoryLoadDataFnc);
	//m_wndTaxCategory.SetEvent(WE_ADDNEW, _OnTaxCategoryAddNewFnc);
	m_wndPriority.SetEvent(WE_SELENDOK, _OnPrioritySelendokFnc);
	//m_wndPriority.SetEvent(WE_SETFOCUS, _OnPrioritySetfocusFnc);
	//m_wndPriority.SetEvent(WE_KILLFOCUS, _OnPriorityKillfocusFnc);
	m_wndPriority.SetEvent(WE_SELCHANGE, _OnPrioritySelectChangeFnc);
	m_wndPriority.SetEvent(WE_LOADDATA, _OnPriorityLoadDataFnc);
	//m_wndPriority.SetEvent(WE_ADDNEW, _OnPriorityAddNewFnc);
	//m_wndMinQuantity.SetEvent(WE_CHANGE, _OnMinQuantityChangeFnc);
	//m_wndMinQuantity.SetEvent(WE_SETFOCUS, _OnMinQuantitySetfocusFnc);
	//m_wndMinQuantity.SetEvent(WE_KILLFOCUS, _OnMinQuantityKillfocusFnc);
	m_wndMinQuantity.SetEvent(WE_CHECKVALUE, _OnMinQuantityCheckValueFnc);
	//m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
	//m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
	//m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
	m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndSalePrice.SetEvent(WE_CHANGE, _OnSalePriceChangeFnc);
	//m_wndSalePrice.SetEvent(WE_SETFOCUS, _OnSalePriceSetfocusFnc);
	//m_wndSalePrice.SetEvent(WE_KILLFOCUS, _OnSalePriceKillfocusFnc);
	m_wndSalePrice.SetEvent(WE_CHECKVALUE, _OnSalePriceCheckValueFnc);
	m_wndPriceButton.SetEvent(WE_CLICK, _OnPriceButtonSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddProductDefaultFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditProductDefaultFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteProductDefaultFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveProductDefaultFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelProductDefaultFnc, 0, 'T', VK_CONTROL);
*/	
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CProductDefault::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPackageLimit.GetDlgCtrlID(), m_nPackageLimit);
	DDX_TextEx(pDX, m_wndStorageID.GetDlgCtrlID(), m_szStorageIDKey);
	DDX_TextEx(pDX, m_wndStorageAccount.GetDlgCtrlID(), m_szStorageAccountKey);
	DDX_TextEx(pDX, m_wndExpenseAccount.GetDlgCtrlID(), m_szExpenseAccountKey);
	DDX_TextEx(pDX, m_wndRevenueAccount.GetDlgCtrlID(), m_szRevenueAccountKey);
	DDX_TextEx(pDX, m_wndTaxCategory.GetDlgCtrlID(), m_szTaxCategoryKey);
	DDX_TextEx(pDX, m_wndPriority.GetDlgCtrlID(), m_szPriorityKey);
	DDX_Text(pDX, m_wndDamage.GetDlgCtrlID(), m_nDamage);
	DDX_Text(pDX, m_wndMinQuantity.GetDlgCtrlID(), m_nMinQuantity);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_Text(pDX, m_wndWarningQuantity.GetDlgCtrlID(), m_nWarningQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndSalePrice.GetDlgCtrlID(), m_nSalePrice);

}
void CProductDefault::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM m_product WHERE mp_product_id=%ld"), m_nProductID);
	rs.ExecSQL(szSQL);

	SetDefaultValues();
	if(!rs.IsEOF()){
		rs.GetValue(_T("mp_locator_id"), m_szStorageIDKey);
		rs.GetValue(_T("mp_storage_acct"), m_szStorageAccountKey);
		rs.GetValue(_T("mp_expense_acct"), m_szExpenseAccountKey);
		rs.GetValue(_T("mp_revenue_acct"), m_szRevenueAccountKey);
		rs.GetValue(_T("mp_taxcategory_id"), m_szTaxCategoryKey);
		rs.GetValue(_T("mp_priority"), m_szPriorityKey);
		m_szOldPriority = m_szPriorityKey;
		rs.GetValue(_T("mp_qtymin"), m_nMinQuantity);
		rs.GetValue(_T("mp_qtymax"), m_nMaxQuantity);
		rs.GetValue(_T("mp_qtywarning"), m_nWarningQuantity);
		rs.GetValue(_T("mp_unitprice"), m_nUnitPrice);
		rs.GetValue(_T("mp_saleprice1"), m_nSalePrice);
		rs.GetValue(_T("mp_saleprice2"), m_nSalePrice2);
		rs.GetValue(_T("mp_saleprice3"), m_nSalePrice3);
		rs.GetValue(_T("mp_saleprice4"), m_nSalePrice4);
		
		CString tmpStr;
		rs.GetValue(_T("mp_ispaid1"), tmpStr);
		STR2BOOL(tmpStr, m_bIsPaid1);
		rs.GetValue(_T("mp_ispaid2"), tmpStr);
		STR2BOOL(tmpStr, m_bIsPaid2);
		rs.GetValue(_T("mp_ispaid3"), tmpStr);
		STR2BOOL(tmpStr, m_bIsPaid3);
		rs.GetValue(_T("mp_ispaid4"), tmpStr);
		STR2BOOL(tmpStr, m_bIsPaid4);
		rs.GetValue(_T("mp_damagepercent"), m_nDamage);
		rs.GetValue(_T("mp_package_limit_percent"), m_nPackageLimit);
	}
	UpdateData(FALSE);
}
void CProductDefault::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_product_defaultTbl)
	{
		m_product_defaultTbl->SetValue(_T("mp_locator_id"), m_szStorageIDKey);
		m_product_defaultTbl->SetValue(_T("mp_storage_acct"), m_szStorageAccountKey);
		m_product_defaultTbl->SetValue(_T("mp_expense_acct"), m_szExpenseAccountKey);
		m_product_defaultTbl->SetValue(_T("mp_revenue_acct"), m_szRevenueAccountKey);
		m_product_defaultTbl->SetValue(_T("mp_taxcategory_id"), m_szTaxCategoryKey);
		m_product_defaultTbl->SetValue(_T("mp_priority"), m_szPriorityKey);
		m_product_defaultTbl->SetValue(_T("mp_qtymin"), m_nMinQuantity);
		m_product_defaultTbl->SetValue(_T("mp_qtymax"), m_nMaxQuantity);
		m_product_defaultTbl->SetValue(_T("mp_qtywarning"), m_nWarningQuantity);
		m_product_defaultTbl->SetValue(_T("mp_unitprice"), m_nUnitPrice);
		
		m_product_defaultTbl->SetValue(_T("mp_saleprice1"), m_nSalePrice);
		m_product_defaultTbl->SetValue(_T("mp_saleprice2"), m_nSalePrice2);
		m_product_defaultTbl->SetValue(_T("mp_saleprice3"), m_nSalePrice3);
		m_product_defaultTbl->SetValue(_T("mp_saleprice4"), m_nSalePrice4);
		
		
		

		CString tmpStr;
		BOOL2STR(m_bIsPaid1, tmpStr);
		m_product_defaultTbl->SetValue(_T("mp_ispaid1"), tmpStr);
		BOOL2STR(m_bIsPaid2, tmpStr);
		m_product_defaultTbl->SetValue(_T("mp_ispaid2"), tmpStr);
		BOOL2STR(m_bIsPaid3, tmpStr);
		m_product_defaultTbl->SetValue(_T("mp_ispaid3"), tmpStr);
		BOOL2STR(m_bIsPaid4, tmpStr);
		m_product_defaultTbl->SetValue(_T("mp_ispaid4"), tmpStr);

		m_product_defaultTbl->SetValue(_T("mp_damagepercent"), m_nDamage);
		m_product_defaultTbl->SetValue(_T("mp_package_limit_percent"), m_nPackageLimit);
	}

}
void CProductDefault::SetDefaultValues(){
	m_nPackageLimit = 0;
	m_szStorageIDKey.Empty();
	m_szStorageAccountKey.Empty();
	m_szExpenseAccountKey.Empty();
	m_szRevenueAccountKey.Empty();
	m_szTaxCategoryKey.Empty();
	m_szPriorityKey.Empty();
	m_nDamage = 0;
	m_nMinQuantity=0;
	m_nMaxQuantity=0;
	m_nWarningQuantity = 0;
	m_nUnitPrice=0;
	m_nSalePrice=0;
	m_nSalePrice2 = 0;
	m_nSalePrice3 = 0;
	m_nSalePrice4 = 0;
	m_bIsPaid1 = TRUE;
	m_bIsPaid2 = TRUE;
	m_bIsPaid3 = FALSE;
	m_bIsPaid4 = TRUE;

}
int CProductDefault::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT:
			if (pMF->CheckPermission(_T("10.07.1")))
 				EnableControls(TRUE);
			else
				EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
			if (!pMF->CheckPermission(_T("10.14")))
				m_wndPriority.EnableWindow(FALSE);

			m_wndUnitPrice.EnableWindow(FALSE);
			m_wndSalePrice.EnableWindow(FALSE);

 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		};
		
		m_wndPriceButton.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}	
void CProductDefault::OnStorageIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductDefault::OnStorageIDSelendok(){
	 
}
/*void CProductDefault::OnStorageIDSetfocus(){
	
}*/
/*void CProductDefault::OnStorageIDKillfocus(){
	
}*/
long CProductDefault::OnStorageIDLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorageID, m_szStorageIDKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorageID.IsSearchKey() && !m_szStorageIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageIDKey
};
	m_wndStorageID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorageID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductDefault::OnStorageIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductDefault::OnStorageAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductDefault::OnStorageAccountSelendok(){
	 
}
/*void CProductDefault::OnStorageAccountSetfocus(){
	
}*/
/*void CProductDefault::OnStorageAccountKillfocus(){
	
}*/
long CProductDefault::OnStorageAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndStorageAccount, m_szStorageAccountKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorageAccount.IsSearchKey() && !m_szStorageAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageAccountKey
};
	m_wndStorageAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorageAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductDefault::OnStorageAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductDefault::OnExpenseAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductDefault::OnExpenseAccountSelendok(){
	 
}
/*void CProductDefault::OnExpenseAccountSetfocus(){
	
}*/
/*void CProductDefault::OnExpenseAccountKillfocus(){
	
}*/
long CProductDefault::OnExpenseAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndExpenseAccount, m_szExpenseAccountKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExpenseAccount.IsSearchKey() && !m_szExpenseAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szExpenseAccountKey
};
	m_wndExpenseAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExpenseAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductDefault::OnExpenseAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductDefault::OnRevenueAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductDefault::OnRevenueAccountSelendok(){
	 
}
/*void CProductDefault::OnRevenueAccountSetfocus(){
	
}*/
/*void CProductDefault::OnRevenueAccountKillfocus(){
	
}*/
long CProductDefault::OnRevenueAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndRevenueAccount, m_szRevenueAccountKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRevenueAccount.IsSearchKey() && !m_szRevenueAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRevenueAccountKey
};
	m_wndRevenueAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRevenueAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductDefault::OnRevenueAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductDefault::OnTaxCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductDefault::OnTaxCategorySelendok(){
	 
}
/*void CProductDefault::OnTaxCategorySetfocus(){
	
}*/
/*void CProductDefault::OnTaxCategoryKillfocus(){
	
}*/
long CProductDefault::OnTaxCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadTaxList(&m_wndTaxCategory, m_szTaxCategoryKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxCategory.IsSearchKey() && !m_szTaxCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxCategoryKey
};
	m_wndTaxCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductDefault::OnTaxCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductDefault::OnPrioritySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductDefault::OnPrioritySelendok(){
	 
}
/*void CProductDefault::OnPrioritySetfocus(){
	
}*/
/*void CProductDefault::OnPriorityKillfocus(){
	
}*/
long CProductDefault::OnPriorityLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szPriorityKey == _T("0"))
		m_szPriorityKey.Empty();
	return pMF->LoadSelectionList(&m_wndPriority, m_szPriorityKey, _T("product_priority"));

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPriority.IsSearchKey() && !m_szPriorityKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPriorityKey
};
	m_wndPriority.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriority.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductDefault::OnPriorityAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductDefault::OnMinQuantityChange(){
	
} */
/*void CProductDefault::OnMinQuantitySetfocus(){
	
} */
/*void CProductDefault::OnMinQuantityKillfocus(){
	
} */
int CProductDefault::OnMinQuantityCheckValue(){
	return 0;
} 
/*void CProductDefault::OnMaxQuantityChange(){
	
} */
/*void CProductDefault::OnMaxQuantitySetfocus(){
	
} */
/*void CProductDefault::OnMaxQuantityKillfocus(){
	
} */
int CProductDefault::OnMaxQuantityCheckValue(){
	return 0;
} 
/*void CProductDefault::OnUnitPriceChange(){
	
} */
/*void CProductDefault::OnUnitPriceSetfocus(){
	
} */
/*void CProductDefault::OnUnitPriceKillfocus(){
	
} */
int CProductDefault::OnUnitPriceCheckValue(){
	_tprintf(_T("\r\nUnit Price: %f"), m_nUnitPrice);
	//if(m_nUnitPrice <= 0)
	//	return -1;
	return 0;
} 
/*void CProductDefault::OnSalePriceChange(){
	
} */
/*void CProductDefault::OnSalePriceSetfocus(){
	
} */
/*void CProductDefault::OnSalePriceKillfocus(){
	
} */
int CProductDefault::OnSalePriceCheckValue(){
	UpdateData(TRUE);
	_tprintf(_T("\r\n%f"), m_nSalePrice);
	/*if(m_nSalePrice <= 0)
		return -1;*/
	if(m_nSalePrice2 == 0)
		m_nSalePrice2 = m_nSalePrice;
	if(m_nSalePrice3 == 0)
		m_nSalePrice3 = m_nSalePrice;
	if(m_nSalePrice4 == 0)
		m_nSalePrice4 = m_nSalePrice;
	
	return 0;
} 
void CProductDefault::OnPriceButtonSelect(){
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CProductPriceSetupDialog dlg(this);
	dlg.m_nProductID = m_nProductID;
	dlg.m_nSale1 = m_nSalePrice;
	dlg.m_nSale2 = m_nSalePrice2;
	dlg.m_nSale3 = m_nSalePrice3;
	dlg.m_nSale4 = m_nSalePrice4;
	dlg.m_bApply1 = m_bIsPaid1;
	dlg.m_bApply2 = m_bIsPaid2;
	dlg.m_bApply3 = m_bIsPaid3;
	dlg.m_bApply4 = m_bIsPaid4;

	if (dlg.DoModal() == IDOK)
	{
		m_nSalePrice = dlg.m_nSale1;
		m_nSalePrice2 = dlg.m_nSale2;
		m_nSalePrice3 = dlg.m_nSale3;
		m_nSalePrice4 = dlg.m_nSale4;
		m_bIsPaid1 = dlg.m_bApply1;
		m_bIsPaid2 = dlg.m_bApply2;
		m_bIsPaid3 = dlg.m_bApply3;
		m_bIsPaid4 = dlg.m_bApply4;
		UpdateData(false);
	}
} 
int CProductDefault::OnAddProductDefault(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductDefault::OnEditProductDefault(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductDefault::OnDeleteProductDefault(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelProductDefault();
 	}
	return 0;
}
int CProductDefault::OnSaveProductDefault(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	return 1;


	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	CString szWhere;
 	szWhere.Format(_T(" WHERE mp_product_id=%ld "), m_nProductID);
 	szSQL = m_product_defaultTbl->GetUpdateSQL(_T("mp_product_id,mp_createdby,mp_createddate, mp_unitprice, mp_saleprice1, mp_saleprice2, mp_saleprice3, mp_saleprice4"));
 	szSQL += szWhere;
 	
 _tprintf(_T("\r\n%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnProductDefaultListLoadData();
		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductDefault::OnCancelProductDefault(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CProductDefault::OnProductDefaultListLoadData(){
	return 0;
}

BOOL CProductDefault::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN){
		switch(pMsg->wParam){
		case VK_TAB:
		case VK_RETURN:
			if(pMsg->hwnd == m_wndSalePrice.GetSafeHwnd())
				return CWnd::PreTranslateMessage(pMsg);
			break;
		};
	}
	return CGuiView::PreTranslateMessage(pMsg);
}

void CProductDefault::Refresh(){
	GetDataToScreen();
}