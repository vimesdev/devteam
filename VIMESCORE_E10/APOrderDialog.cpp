#include "APOrderDialog.h"
#include "MainFrame_E10.h"
#include "PrintForms.h"

static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAPOrderDialog* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnContactNameChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnContactNameChange();
} */
/*static void _OnContactNameSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnContactNameSetfocus();} */ 
/*static void _OnContactNameKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnContactNameKillfocus();
} */
static int _OnContactNameCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnContactNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAPOrderDialog* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnExchangeRateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAPOrderDialog* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CAPOrderDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
/*static void _OnNetAmountChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnNetAmountChange();
} */
/*static void _OnNetAmountSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnNetAmountSetfocus();} */ 
/*static void _OnNetAmountKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnNetAmountKillfocus();
} */
static int _OnNetAmountCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnNetAmountCheckValue();
} 
/*static void _OnDiscountAmountChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnDiscountAmountChange();
} */
/*static void _OnDiscountAmountSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnDiscountAmountSetfocus();} */ 
/*static void _OnDiscountAmountKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnDiscountAmountKillfocus();
} */
static int _OnDiscountAmountCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnDiscountAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnTotalExchangeAmountChangeFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTotalExchangeAmountChange();
} */
/*static void _OnTotalExchangeAmountSetfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTotalExchangeAmountSetfocus();} */ 
/*static void _OnTotalExchangeAmountKillfocusFnc(CWnd *pWnd){
	((CAPOrderDialog *)pWnd)->OnTotalExchangeAmountKillfocus();
} */
static int _OnTotalExchangeAmountCheckValueFnc(CWnd *pWnd){
	return ((CAPOrderDialog *)pWnd)->OnTotalExchangeAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnUtilitiesSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnUtilitiesSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CAPOrderDialog *pVw = (CAPOrderDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAPOrderDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAPOrderDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAPOrderDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAPOrderDialog*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAPOrderDialog*)pWnd)->OnListEditItem();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAPOrderDialog*)pWnd)->OnListDeleteItem();
} 
 
static int _OnAddAPOrderDialogFnc(CWnd *pWnd){
	 return ((CAPOrderDialog*)pWnd)->OnAddAPOrderDialog();
} 
static int _OnEditAPOrderDialogFnc(CWnd *pWnd){
	 return ((CAPOrderDialog*)pWnd)->OnEditAPOrderDialog();
} 
static int _OnDeleteAPOrderDialogFnc(CWnd *pWnd){
	 return ((CAPOrderDialog*)pWnd)->OnDeleteAPOrderDialog();
} 
static int _OnSaveAPOrderDialogFnc(CWnd *pWnd){
	 return ((CAPOrderDialog*)pWnd)->OnSaveAPOrderDialog();
} 
static int _OnCancelAPOrderDialogFnc(CWnd *pWnd){
	 return ((CAPOrderDialog*)pWnd)->OnCancelAPOrderDialog();
} 
CAPOrderDialog::CAPOrderDialog(CWnd *pParent, int nMode, CString szType):
	CGuiDialog(pParent){
	
	CGuiDialog::SetMode(nMode);
	m_szType=szType;
	m_nDlgWidth = 952;
	m_nDlgHeight = 744;
	SetDefaultValues();
	m_szSupplierTypeKey = _T("NCC");
}
CAPOrderDialog::~CAPOrderDialog(){
}
void CAPOrderDialog::OnCreateComponents(){
	m_wndSupplierInformation.Create(this, _T("Supplier Information"), 5, 5, 715, 180);
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 720, 5, 1005, 180);
	m_wndLines.Create(this, _T("Lines"), 5, 185, 1005, 410);
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 30, 130, 55);
	m_wndSupplier.Create(this,135, 30, 710, 55); 
	m_wndContactNameLabel.Create(this, _T("Contact Name"), 10, 60, 130, 85);
	m_wndContactName.Create(this,135, 60, 709, 85); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 10, 90, 130, 115);
	m_wndPhone.Create(this,135, 90, 709, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 130, 145);
	m_wndAddress.Create(this,135, 120, 709, 175); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 725, 30, 865, 55);
	m_wndOrderNo.Create(this,870, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 725, 60, 865, 85);
	m_wndOrderDate.Create(this,869, 60, 999, 85); 
	m_wndCurrencyLabel.Create(this, _T("Currency"), 725, 90, 865, 115);
	m_wndCurrency.Create(this,870, 90, 1000, 115); 
	m_wndExchangeRateLabel.Create(this, _T("Exchange Rate"), 725, 120, 865, 145);
	m_wndExchangeRate.Create(this,870, 120, 1000, 145); 
	m_wndTransactionTypeLabel.Create(this, _T("Transaction Type"), 725, 150, 865, 175);
	m_wndTransactionType.Create(this,870, 150, 1000, 175); 
	m_wndTab.Create(this,5, 415, 720, 570); 
	m_wndNetAmountLabel.Create(this, _T("Sub Total"), 725, 415, 865, 440);
	m_wndNetAmount.Create(this,870, 415, 1000, 440); 
	m_wndDiscountAmountLabel.Create(this, _T("Discount Amount"), 725, 445, 865, 470);
	m_wndDiscountAmount.Create(this,870, 445, 1000, 470); 
	m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 725, 475, 865, 500);
	m_wndTaxesAmount.Create(this,870, 475, 1000, 500); 
	m_wndAmountLabel.Create(this, _T("Total Amount"), 725, 505, 865, 530);
	m_wndTotalAmount.Create(this,870, 505, 1000, 530); 
	m_wndTotalExchangeAmountLabel.Create(this, _T("TotalExchangeAmount"), 725, 535, 865, 560);
	m_wndTotalExchangeAmount.Create(this,870, 535, 1000, 560); 
	m_wndAdd.Create(this, _T("&Add"), 245, 575, 335, 600);
	m_wndEdit.Create(this, _T("&Edit"), 340, 575, 430, 600);
	m_wndDelete.Create(this, _T("&Delete"), 435, 575, 525, 600);
	m_wndSave.Create(this, _T("&Save"), 530, 575, 620, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 625, 575, 715, 600);
	m_wndPrint.Create(this, _T("&Print"), 720, 575, 810, 600);
	m_wndPost.Create(this, _T("Post"), 815, 575, 905, 600);
	m_wndUtilities.Create(this, _T("&Utilities"), 910, 575, 1000, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndList.SetAutoIndex(true);
	m_wndList.Create(this,10, 210, 1000, 405); 

	


	//m_wndTab.SetItemSize(CSize(50,30));

	
	m_szTitle = _T("PURCHASE ORDER");


}
void CAPOrderDialog::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
	m_wndContactName.SetLimitText(1024);
	m_wndContactName.SetCheckValue(true);
	m_wndPhone.SetLimitText(35);
	m_wndPhone.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
//	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(1024);
	m_wndExchangeRate.SetLimitText(10);
	m_wndExchangeRate.SetCheckValue(true);
	m_wndExchangeRate.SetNumberDecimal(5);
	m_wndExchangeRate.SetCurrencyFormat(TRUE);
	m_wndTransactionType.SetCheckValue(true);
	m_wndTransactionType.LimitText(35);
	m_wndNetAmount.SetLimitText(1024);
	m_wndNetAmount.SetCheckValue(true);
	m_wndDiscountAmount.SetLimitText(16);
	m_wndDiscountAmount.SetCheckValue(true);
	m_wndTaxesAmount.SetLimitText(1024);
	m_wndTaxesAmount.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(1024);
	m_wndTotalAmount.SetCheckValue(true);
	m_wndTotalExchangeAmount.SetLimitText(16);
	m_wndTotalExchangeAmount.SetCheckValue(true);

	m_wndNetAmount.SetReadOnly(TRUE);
	m_wndNetAmount.SetCurrencyFormat(true);
	m_wndNetAmount.SetTextColor(RGB(0, 128, 192));
	m_wndDiscountAmount.SetReadOnly(TRUE);
	m_wndTaxesAmount.SetReadOnly(TRUE);
	m_wndTaxesAmount.SetCurrencyFormat(true);
	m_wndTaxesAmount.SetTextColor(RGB(0, 64, 128));
	m_wndTotalAmount.SetReadOnly(TRUE);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.SetTextColor(RGB(0, 128, 255));
	m_wndTotalExchangeAmount.SetReadOnly(true);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndSupplier.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(4, _T("contact_name"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(5, _T("office_tel"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(6, _T("contact_mobile"), CFMT_TEXT, 0);


	
	m_wndCurrency.Format(2, 0, 10, 1);
	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTransactionType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T("lineidx"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Product Code"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(3, _T("UOM"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("On Hand"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(5, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("VAT Code"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(9, _T("VAT Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(10, _T("Job Code"), CFMT_TEXT, 60);
	


	m_ap_orderTbl.SetTableName(_T("fa_order"));
	m_ap_orderTbl.AddField(_T("fao_order_id"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_client_id"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_org_id"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_user_id"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_createdby"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_updatedby"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_updateddate"), dfDateTime); 
	m_ap_orderTbl.AddField(_T("fao_ordertype"), dfText, 1); 
	m_ap_orderTbl.AddField(_T("fao_orderno"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_orderdate"), dfDate); 
	m_ap_orderTbl.AddField(_T("fao_acctdate"), dfDate); 
	m_ap_orderTbl.AddField(_T("fao_currency_id"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_exchangerate"), dfDouble); 
	m_ap_orderTbl.AddField(_T("fao_expense_id"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_contract_id"), dfText, 32);
	m_ap_orderTbl.AddField(_T("fao_partner_type_id"), dfText, 3); 
	m_ap_orderTbl.AddField(_T("fao_partner_id"), dfText, 32); 
	m_ap_orderTbl.AddField(_T("fao_partneraddress"), dfText, 255); 
	m_ap_orderTbl.AddField(_T("fao_description"), dfText, 255); 


	m_wndExtraInfo.Create(&m_wndTab);
	m_wndExtraInfo.OnInitDialog();
	m_wndInvoice.Create(&m_wndTab);
	m_wndInvoice.OnInitDialog();
	m_wndDelivery.Create(&m_wndTab);
	m_wndDelivery.OnInitDialog();
	m_wndVATTotals.Create(&m_wndTab);
	m_wndVATTotals.OnInitDialog();

	m_wndTab.SetItemSize(CSize(31, 31));
	m_wndTab.SetPadding(CSize(20, 10));
	m_wndTab.Add(_T("Extra Info"), &m_wndExtraInfo);
	m_wndTab.Add(_T("Payment Info"), &m_wndInvoice);
	m_wndTab.Add(_T("Delivery Info"), &m_wndDelivery);
	m_wndTab.Add(_T("VAT Totals"), &m_wndVATTotals);


}

void CAPOrderDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	//m_wndContactName.SetEvent(WE_CHANGE, _OnContactNameChangeFnc);
	//m_wndContactName.SetEvent(WE_SETFOCUS, _OnContactNameSetfocusFnc);
	//m_wndContactName.SetEvent(WE_KILLFOCUS, _OnContactNameKillfocusFnc);
	m_wndContactName.SetEvent(WE_CHECKVALUE, _OnContactNameCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndCurrency.SetEvent(WE_SELENDOK, _OnCurrencySelendokFnc);
	//m_wndCurrency.SetEvent(WE_SETFOCUS, _OnCurrencySetfocusFnc);
	//m_wndCurrency.SetEvent(WE_KILLFOCUS, _OnCurrencyKillfocusFnc);
	m_wndCurrency.SetEvent(WE_SELCHANGE, _OnCurrencySelectChangeFnc);
	m_wndCurrency.SetEvent(WE_LOADDATA, _OnCurrencyLoadDataFnc);
	//m_wndCurrency.SetEvent(WE_ADDNEW, _OnCurrencyAddNewFnc);
	//m_wndExchangeRate.SetEvent(WE_CHANGE, _OnExchangeRateChangeFnc);
	//m_wndExchangeRate.SetEvent(WE_SETFOCUS, _OnExchangeRateSetfocusFnc);
	//m_wndExchangeRate.SetEvent(WE_KILLFOCUS, _OnExchangeRateKillfocusFnc);
	m_wndExchangeRate.SetEvent(WE_CHECKVALUE, _OnExchangeRateCheckValueFnc);
	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	//m_wndNetAmount.SetEvent(WE_CHANGE, _OnNetAmountChangeFnc);
	//m_wndNetAmount.SetEvent(WE_SETFOCUS, _OnNetAmountSetfocusFnc);
	//m_wndNetAmount.SetEvent(WE_KILLFOCUS, _OnNetAmountKillfocusFnc);
	m_wndNetAmount.SetEvent(WE_CHECKVALUE, _OnNetAmountCheckValueFnc);
	//m_wndDiscountAmount.SetEvent(WE_CHANGE, _OnDiscountAmountChangeFnc);
	//m_wndDiscountAmount.SetEvent(WE_SETFOCUS, _OnDiscountAmountSetfocusFnc);
	//m_wndDiscountAmount.SetEvent(WE_KILLFOCUS, _OnDiscountAmountKillfocusFnc);
	m_wndDiscountAmount.SetEvent(WE_CHECKVALUE, _OnDiscountAmountCheckValueFnc);
	//m_wndTaxesAmount.SetEvent(WE_CHANGE, _OnTaxesAmountChangeFnc);
	//m_wndTaxesAmount.SetEvent(WE_SETFOCUS, _OnTaxesAmountSetfocusFnc);
	//m_wndTaxesAmount.SetEvent(WE_KILLFOCUS, _OnTaxesAmountKillfocusFnc);
	m_wndTaxesAmount.SetEvent(WE_CHECKVALUE, _OnTaxesAmountCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	//m_wndTotalExchangeAmount.SetEvent(WE_CHANGE, _OnTotalExchangeAmountChangeFnc);
	//m_wndTotalExchangeAmount.SetEvent(WE_SETFOCUS, _OnTotalExchangeAmountSetfocusFnc);
	//m_wndTotalExchangeAmount.SetEvent(WE_KILLFOCUS, _OnTotalExchangeAmountKillfocusFnc);
	m_wndTotalExchangeAmount.SetEvent(WE_CHECKVALUE, _OnTotalExchangeAmountCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndUtilities.SetEvent(WE_CLICK, _OnUtilitiesSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.SetWindowText(_T("Receipt Vouchers"));
	m_wndList.AddEvent(1, _T("Add Line"), _OnListAddItemFnc, 0, VK_INSERT, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Edit Line"), _OnListEditItemFnc, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Delete Line"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

	if(!m_wndInput.GetSafeHwnd())
	{
		m_wndInput.Create(&m_wndList);
		m_wndInput.OnInitDialog();
		m_wndList.SetEditView(&m_wndInput);
	}

	int nMode = GetMode();
_tprintf(_T("\r\n%d"), nMode);
	if(nMode == VM_EDIT){
		GetDataToScreen();
		SetMode(VM_EDIT);
	}
	else if(nMode == VM_ADD){
		SetMode(VM_ADD);
	}
	else
	{
		GetDataToScreen();
		SetMode(VM_VIEW);
	}

	
	CString szLabel, tmpStr;
	TranslateString(_T("Total Amount"), tmpStr);
	szLabel.Format(_T("%s (%s)"), tmpStr, m_szCurrencyKey);
	m_wndTotalExchangeAmountLabel.SetWindowText(szLabel);

	m_wndTab.SetCurSel(0);
	m_wndList.Invalidate();
}
void CAPOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndContactName.GetDlgCtrlID(), m_szContactName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchangeRate.GetDlgCtrlID(), m_nExchangeRate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_Text(pDX, m_wndNetAmount.GetDlgCtrlID(), m_nNetAmount);
	DDX_Text(pDX, m_wndDiscountAmount.GetDlgCtrlID(), m_nDiscountAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndTotalExchangeAmount.GetDlgCtrlID(), m_nTotalExchangeAmount);

}
void CAPOrderDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_order WHERE fao_order_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fao_order_id"), m_szID);
		rs.GetValue(_T("fao_orderno"), m_szOrderNo);
		rs.GetValue(_T("fao_orderdate"), m_szOrderDate);

		rs.GetValue(_T("fao_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("fao_exchangerate"), m_nExchangeRate);
		rs.GetValue(_T("fao_partner_id"), m_szSupplierKey);
		rs.GetValue(_T("fao_partneraddress"), m_szAddress);
	//	rs.GetValue(_T("fao_memo"), _T(""));
	//	rs.GetValue(_T("fao_reference"), _T(""));
		
		rs.GetValue(_T("fao_status"), m_szStatus);
		rs.GetValue(_T("fao_netamount"), m_nNetAmount);
		rs.GetValue(_T("fao_taxamount"), m_nTaxesAmount);
		rs.GetValue(_T("fao_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("fao_posted"), m_szPosted);
		OnListLoadData();
	}
}

void CAPOrderDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	if(GetMode() == VM_ADD){
		CRecord rs(&pMF->m_db);
		CString szSQL;
		m_szID = pMF->ExecDML(_T("get_uuid()"));
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE fao_order_id='%s' "), m_szID);
		m_ap_orderTbl.Open(&pMF->m_db, szWhere);
	}
	m_ap_orderTbl.SetValue(_T("fao_order_id"), m_szID);
	m_ap_orderTbl.SetValue(_T("fao_client_id"), _T(""));
	m_ap_orderTbl.SetValue(_T("fao_org_id"), _T(""));
	m_ap_orderTbl.SetValue(_T("fao_user_id"), pMF->GetCurrentUser());
	m_ap_orderTbl.SetValue(_T("fao_createdby"), pMF->GetCurrentUser());
	m_ap_orderTbl.SetValue(_T("fao_updatedby"), pMF->GetCurrentUser());
	m_ap_orderTbl.SetValue(_T("fao_updateddate"), pMF->GetSysDateTime());
	m_ap_orderTbl.SetValue(_T("fao_orderno"), m_szOrderNo);
	m_ap_orderTbl.SetValue(_T("fao_orderdate"), m_szOrderDate);
	m_ap_orderTbl.SetValue(_T("fao_currency_id"), m_szCurrencyKey);
	m_ap_orderTbl.SetValue(_T("fao_exchangerate"), m_nExchangeRate);
	m_ap_orderTbl.SetValue(_T("fao_partner_type_id"), m_szSupplierTypeKey);
	m_ap_orderTbl.SetValue(_T("fao_partner_id"), m_szSupplierKey);
	m_ap_orderTbl.SetValue(_T("fao_partneraddress"), m_szAddress);
	
//	m_wndMemo.UpdateData(TRUE);
//	m_ap_orderTbl.SetValue(_T("fao_memo"), m_wndMemo.m_szJournalMemo);
//	m_ap_orderTbl.SetValue(_T("fao_reference"), m_wndMemo.m_szReference);

}

void CAPOrderDialog::SetDefaultValues(){

	m_szSupplierKey.Empty();
	m_szContactName.Empty();
	m_szPhone.Empty();
	m_szAddress.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szCurrencyKey.Empty();
	m_nExchangeRate=0;
	m_szTransactionTypeKey.Empty();
	m_nDiscountAmount=0;
	m_nNetAmount=0;
	m_nTaxesAmount=0;
	m_nTotalAmount=0;
	m_nTotalExchangeAmount = 0;
	m_szStatus=_T("O");
	m_szPosted = _T("N");
}

int CAPOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_szOrderDate =  pMF->GetSysDate();
			
			szSQL.Format(_T("ADM_GETNEXTVAL('PURCHASE_ORDER_ASQ','N') "));

			m_szOrderNo = pMF->ExecDML(szSQL);
			m_wndOrderDate.SetFocus();
			m_wndList.DeleteAllItems();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndSupplier.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szOrderNo.Empty();
 			break; 
 		};

		if(m_szStatus != _T("O")){
			m_wndPost.SetWindowText(_T("Unpost"));
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
			m_wndList.EnableEdit(false);
		}
		m_wndUtilities.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

void CAPOrderDialog::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAPOrderDialog::OnSupplierSelendok(){
	 UpdateData(TRUE);
	 m_szAddress = m_wndSupplier.GetCurrent(2);
	 m_szContactName = m_wndSupplier.GetCurrent(4);
	 m_szPhone = m_wndSupplier.GetCurrent(5);
	 UpdateData(FALSE);


}
/*void CAPOrderDialog::OnSupplierSetfocus(){
	
}*/
/*void CAPOrderDialog::OnSupplierKillfocus(){
	
}*/
long CAPOrderDialog::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and fap_partner_type_id='NCC' "));

	pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSupplierKey
};
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAPOrderDialog::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAPOrderDialog::OnContactNameChange(){
	
} */
/*void CAPOrderDialog::OnContactNameSetfocus(){
	
} */
/*void CAPOrderDialog::OnContactNameKillfocus(){
	
} */
int CAPOrderDialog::OnContactNameCheckValue(){
	return 0;
}
 
/*void CAPOrderDialog::OnPhoneChange(){
	
} */
/*void CAPOrderDialog::OnPhoneSetfocus(){
	
} */
/*void CAPOrderDialog::OnPhoneKillfocus(){
	
} */
int CAPOrderDialog::OnPhoneCheckValue(){
	return 0;
}
 
/*void CAPOrderDialog::OnAddressChange(){
	
} */
/*void CAPOrderDialog::OnAddressSetfocus(){
	
} */
/*void CAPOrderDialog::OnAddressKillfocus(){
	
} */
int CAPOrderDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CAPOrderDialog::OnOrderNoChange(){
	
} */
/*void CAPOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CAPOrderDialog::OnOrderNoKillfocus(){
	
} */
int CAPOrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CAPOrderDialog::OnOrderDateChange(){
	
} */
/*void CAPOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CAPOrderDialog::OnOrderDateKillfocus(){
	
} */
int CAPOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CAPOrderDialog::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAPOrderDialog::OnCurrencySelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd(); 
	UpdateData(TRUE);
	CString szLabel, tmpStr;
	TranslateString(_T("Total Amount"), tmpStr);
	szLabel.Format(_T("%s (%s)"), tmpStr, m_szCurrencyKey);
	m_wndTotalExchangeAmountLabel.SetWindowText(szLabel);
	if(m_szCurrencyKey == pMF->m_szDefaultCurrency){
		m_nExchangeRate = 1;
		m_wndExchangeRate.EnableWindow(FALSE);

	}
	else
	{
		m_wndExchangeRate.EnableWindow(TRUE);
	}
	UpdateData(FALSE);
}

/*void CAPOrderDialog::OnCurrencySetfocus(){
	
}*/
/*void CAPOrderDialog::OnCurrencyKillfocus(){
	
}*/
long CAPOrderDialog::OnCurrencyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCurrencyList(&m_wndCurrency, m_szCurrencyKey);

	
}

/*void CAPOrderDialog::OnCurrencyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAPOrderDialog::OnExchangeRateChange(){
	
} */
/*void CAPOrderDialog::OnExchangeRateSetfocus(){
	
} */
/*void CAPOrderDialog::OnExchangeRateKillfocus(){
	
} */
int CAPOrderDialog::OnExchangeRateCheckValue(){
	if(m_nExchangeRate <= 0)
		return -1;
	return 0;
}
 
void CAPOrderDialog::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAPOrderDialog::OnTransactionTypeSelendok(){
	 
}
/*void CAPOrderDialog::OnTransactionTypeSetfocus(){
	
}*/
/*void CAPOrderDialog::OnTransactionTypeKillfocus(){
	
}*/
long CAPOrderDialog::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransactionType.IsSearchKey() && !m_szTransactionTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTransactionTypeKey
};
	m_wndTransactionType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransactionType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAPOrderDialog::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAPOrderDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
/*void CAPOrderDialog::OnNetAmountChange(){
	
} */
/*void CAPOrderDialog::OnNetAmountSetfocus(){
	
} */
/*void CAPOrderDialog::OnNetAmountKillfocus(){
	
} */
int CAPOrderDialog::OnNetAmountCheckValue(){
	return 0;
} 
/*void CAPOrderDialog::OnDiscountAmountChange(){
	
} */
/*void CAPOrderDialog::OnDiscountAmountSetfocus(){
	
} */
/*void CAPOrderDialog::OnDiscountAmountKillfocus(){
	
} */
int CAPOrderDialog::OnDiscountAmountCheckValue(){
	return 0;
} 
/*void CAPOrderDialog::OnTaxesAmountChange(){
	
} */
/*void CAPOrderDialog::OnTaxesAmountSetfocus(){
	
} */
/*void CAPOrderDialog::OnTaxesAmountKillfocus(){
	
} */
int CAPOrderDialog::OnTaxesAmountCheckValue(){
	return 0;
}
 
/*void CAPOrderDialog::OnTotalAmountChange(){
	
} */
/*void CAPOrderDialog::OnTotalAmountSetfocus(){
	
} */
/*void CAPOrderDialog::OnTotalAmountKillfocus(){
	
} */
int CAPOrderDialog::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CAPOrderDialog::OnTotalExchangeAmountChange(){
	
} */
/*void CAPOrderDialog::OnTotalExchangeAmountSetfocus(){
	
} */
/*void CAPOrderDialog::OnTotalExchangeAmountKillfocus(){
	
} */
int CAPOrderDialog::OnTotalExchangeAmountCheckValue(){
	return 0;
} 
 
void CAPOrderDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnAddAPOrderDialog();
}
 
void CAPOrderDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnEditAPOrderDialog();
}
 
void CAPOrderDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnDeleteAPOrderDialog();
}
 
void CAPOrderDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAPOrderDialog();
}
 
void CAPOrderDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelAPOrderDialog();
}
 
void CAPOrderDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	CPrintForms printer;
	//printer.PrintReceipts(m_szOrderNo, m_szOrderType);
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Print Order"));
	menu.MakeOwnerDraw(FALSE);
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.right;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret){
	case 1:
		break;
	}
}
 
void CAPOrderDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	CString szSQL, tmpStr;
	if(m_szPosted != _T("Y"))
	{
		szSQL.Format(_T("UPDATE fa_order SET fao_posted='Y', fao_posteddate=current_timestamp, fao_postedby='%s', fao_status='P' ") \
			_T(" WHERE fao_order_id='%s' and fao_status='O' and fao_posted<>'Y'"), pMF->GetCurrentUser(), m_szID);

		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndList.EnableEdit(false);
			TranslateString(_T("Unpost"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);
			m_szPosted = _T("Y");
			m_szStatus = _T("P");
		}
	}
	else
	{
		szSQL.Format(_T("UPDATE fa_order SET fao_posted='N', fao_status='O' ") \
			_T(" WHERE fao_order_id='%s' and fao_status='P' and fao_posted='Y'"),  m_szID);
		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			m_wndEdit.EnableWindow(TRUE);
			m_wndDelete.EnableWindow(TRUE);
			m_wndList.EnableEdit(true);
			TranslateString(_T("Post"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);
			m_szPosted = _T("N");
			m_szStatus = _T("O");

		}

	}
_fmsg(_T("%s"), szSQL);
}
 
void CAPOrderDialog::OnUtilitiesSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Add Supplier-Vendor"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Add Employeer"));
	menu.AppendMenu(MF_BYPOSITION, 3, _T("Add Expense"));
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Add Job"));

	menu.MakeOwnerDraw(FALSE);
	CPoint pt;
	CRect rect;
	m_wndUtilities.GetWindowRect(&rect);
	pt.x = rect.right;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret){
	case 1:
		break;
	case 2:
		break;
	case 3: 
		break;
	case 4:
		break;
	}
	_msg(_T("\r\nSelected: %d"), ret);
}

void CAPOrderDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListAddItem();

}
 
void CAPOrderDialog::OnListDblClick(){
	OnListEditItem();
}
 
void CAPOrderDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	CString szLineID = m_wndList.GetItemText(nNewItem, 8);
//	m_wndInput.SetReference(m_szID , szLineID);

}
 
int CAPOrderDialog::OnListAddItem(){
	if(GetMode() != VM_VIEW)
		return 0;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't add item with current status"), MB_OK);
		return -1;
	}
_tprintf(_T("\r\n%d"), m_wndInput.GetMode());
	if(m_wndInput.IsWindowVisible()){
		return -1;
	}
	m_wndInput.SetMode(VM_ADD);
	m_wndList.AddNewLine();
	return 0;
}
int CAPOrderDialog::OnListEditItem(){
	if(GetMode() != VM_VIEW)
		return 0;
	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0){
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return -1;
	}
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't edit item with current status"), MB_OK);
		return -1;
	}
	if(m_wndInput.IsWindowVisible()){
		return -1;
	}

	m_wndInput.SetMode(VM_EDIT);
	m_wndList.EditLine(nSel);

	return 0;
}
int CAPOrderDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CString szSQL; 
 	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't delete item with current status"), MB_OK);
		return -1;
	}
	CString szLineID = m_wndList.GetItemText(nSel, 8);
	int retMsg = ShowMessageBox(_T("Do you want to delete item?(Y/N)"), MB_YESNO);
	if(retMsg == IDNO)
 		return -1; 

 	szSQL.Format(_T("fa_cashline_delete('%s', '%s', '%s') "), m_szID, szLineID, pMF->GetCurrentUser()); 
Notice(szSQL);
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
		m_wndList.DeleteItem(nSel);
		RecalcTotalAmount();
 	}
	return 0;
}
 


long CAPOrderDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	
	int nCount = 0;
	int nIndex = 1;
	CString tmpStr;
	szSQL.Format(_T("SELECT facl_cashline_id as cashline_id, ") \
		_T("facl_line as lineidx, ") \
		_T("facl_description as description, ") \
		_T("facl_debit_acct as debitaccount, ") \
		_T("facl_credit_acct as creditaccount, ") \
		_T("facl_baseamt as amount, ") \
		_T("facl_baseamt*%f as cvtamount, ") \
		_T("facl_taxamt as taxamount, ") \
		_T("facl_tax_id as taxid, ") \
		_T("facl_tax_acct as taxaccount, ") \
		_T("facl_job_id as jobid ") \
		_T("FROM fa_orderline WHERE facl_order_id='%s' ORDER BY facl_line "), m_nExchangeRate, m_szID);



	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("DebitAccount")), 
			rs.GetValue(_T("CreditAccount")),
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Amount")),
			rs.GetValue(_T("CvtAmount")),
			rs.GetValue(_T("TaxID")), 
			rs.GetValue(_T("TaxAmount")), 
			rs.GetValue(_T("TaxAccount")), 
			rs.GetValue(_T("JobID")), 
			rs.GetValue(_T("cashline_id")),
			rs.GetValue(_T("lineidx")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nCount;
}
 
int CAPOrderDialog::OnAddAPOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAPOrderDialog::OnEditAPOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAPOrderDialog::OnDeleteAPOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessageBox(_T("Do you want to delete voucher?(Y/"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("fa_order_delete('%s', '','', '%s') "), m_szID, pMF->GetCurrentUser()); 
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
 		SetMode(VM_NONE); 
 		OnCancelAPOrderDialog(); 
 	}
	return 0;
}

int CAPOrderDialog::OnSaveAPOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("fa_order_create(%s) "), m_ap_orderTbl.FormatSQL());
	else
		szSQL.Format(_T("fa_order_update(%s) "),  m_ap_orderTbl.FormatSQL());
 
 Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("%s"), m_ap_orderTbl.GetInsertSQL());
	}
	else
	{
		szSQL.Format(_T("%s"), m_ap_orderTbl.GetUpdateSQL(_T("fao_order_id")));
	}
_fmsg(_T("%s"), szSQL);
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
 	{ 

		
		if(GetMode() == VM_EDIT){
//			CGuiDialog::OnCancel();
			SetMode(VM_VIEW);

		}
		else{
//			m_szID = szRes;
			SetMode(VM_VIEW);
			OnListAddItem();
		}
		return 1;
 	} 
 	return -1; 
}

int CAPOrderDialog::OnCancelAPOrderDialog(){
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
 
int CAPOrderDialog::OnAPOrderDialogListLoadData(){
	return 0;
}



void CAPOrderDialog::RecalcTotalAmount(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_cash WHERE fao_order_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fao_net_amount"), m_nNetAmount);
		rs.GetValue(_T("fao_tax_amount"), m_nTaxesAmount);
		rs.GetValue(_T("fao_total_amount"), m_nTotalAmount);
		UpdateData(false);
	}
}



bool CAPOrderDialog::OnCloseWindow(){
return true;
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		int nMsg = ShowMessageBox(_T("Data is not save. Do you want to save?"), MB_YESNOCANCEL|MB_ICONWARNING);
		if(nMsg == IDNO)
			return true;
		if(nMsg == IDCANCEL)
			return false;
		if(OnSaveAPOrderDialog() > 0)
			return true;
		else
			return false;
	}
	return true;
}
BOOL CAPOrderDialog::PreTranslateMessage(MSG* pMsg)
{
	/*if(pMsg->message == WM_SYSKEYDOWN){
		m_wndTab.SetFocus();
		UINT nChar = pMsg->wParam;
		nChar -=48;
		m_wndTab.SetCurSel(nChar-1);

	}*/
	return CGuiDialog::PreTranslateMessage(pMsg);
}
