#include "ARQuoteDialog.h"
#include "MainFrame_E10.h"
#include "HMSReportForms/PrintForms.h"

/*static void _OnQuoteNoChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnQuoteNoChange();
} */
/*static void _OnQuoteNoSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnQuoteNoSetfocus();} */ 
/*static void _OnQuoteNoKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnQuoteNoKillfocus();
} */
static int _OnQuoteNoCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnQuoteNoCheckValue();
} 
/*static void _OnQuoteDateChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnQuoteDateChange();
} */
/*static void _OnQuoteDateSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnQuoteDateSetfocus();} */ 
/*static void _OnQuoteDateKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnQuoteDateKillfocus();
} */
static int _OnQuoteDateCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnQuoteDateCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CARQuoteDialog* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnExchangeRateCheckValue();
} 
static void _OnSalesPersonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CARQuoteDialog* )pWnd)->OnSalesPersonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSalesPersonSelendokFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnSalesPersonSelendok();
}
/*static void _OnSalesPersonSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnSalesPersonKillfocus();
}*/
/*static void _OnSalesPersonKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnSalesPersonKillfocus();
}*/
static long _OnSalesPersonLoadDataFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnSalesPersonLoadData();
}
/*static void _OnSalesPersonAddNewFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnSalesPersonAddNew();
}*/
static void _OnCustomerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CARQuoteDialog* )pWnd)->OnCustomerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCustomerSelendokFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnCustomerSelendok();
}
/*static void _OnCustomerSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnCustomerKillfocus();
}*/
/*static void _OnCustomerKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnCustomerKillfocus();
}*/
static long _OnCustomerLoadDataFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnCustomerLoadData();
}
/*static void _OnCustomerAddNewFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnCustomerAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnContactNameChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnContactNameChange();
} */
/*static void _OnContactNameSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnContactNameSetfocus();} */ 
/*static void _OnContactNameKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnContactNameKillfocus();
} */
static int _OnContactNameCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnContactNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnPhoneCheckValue();
} 
static void _OnPaymentTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CARQuoteDialog* )pWnd)->OnPaymentTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTermsSelendokFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnPaymentTermsSelendok();
}
/*static void _OnPaymentTermsSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnPaymentTermsKillfocus();
}*/
/*static void _OnPaymentTermsKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnPaymentTermsKillfocus();
}*/
static long _OnPaymentTermsLoadDataFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnPaymentTermsLoadData();
}
/*static void _OnPaymentTermsAddNewFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnPaymentTermsAddNew();
}*/
/*static void _OnExpirationDateChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnExpirationDateChange();
} */
/*static void _OnExpirationDateSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnExpirationDateSetfocus();} */ 
/*static void _OnExpirationDateKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnExpirationDateKillfocus();
} */
static int _OnExpirationDateCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnExpirationDateCheckValue();
} 
static void _OnTransportMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CARQuoteDialog* )pWnd)->OnTransportMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportMethodSelendokFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTransportMethodSelendok();
}
/*static void _OnTransportMethodSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTransportMethodKillfocus();
}*/
/*static void _OnTransportMethodKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTransportMethodKillfocus();
}*/
static long _OnTransportMethodLoadDataFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnTransportMethodLoadData();
}
/*static void _OnTransportMethodAddNewFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTransportMethodAddNew();
}*/
/*static void _OnDeliveryDateChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnDeliveryDateChange();
} */
/*static void _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnDeliveryDateSetfocus();} */ 
/*static void _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnDeliveryDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CARQuoteDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CARQuoteDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CARQuoteDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CARQuoteDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnMemoChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnMemoChange();
} */
/*static void _OnMemoSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnMemoSetfocus();} */ 
/*static void _OnMemoKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnMemoKillfocus();
} */
static int _OnMemoCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnMemoCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnReferenceCheckValue();
} 
/*static void _OnNetAmountChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnNetAmountChange();
} */
/*static void _OnNetAmountSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnNetAmountSetfocus();} */ 
/*static void _OnNetAmountKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnNetAmountKillfocus();
} */
static int _OnNetAmountCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnNetAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnTotalExchangeAmountChangeFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTotalExchangeAmountChange();
} */
/*static void _OnTotalExchangeAmountSetfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTotalExchangeAmountSetfocus();} */ 
/*static void _OnTotalExchangeAmountKillfocusFnc(CWnd *pWnd){
	((CARQuoteDialog *)pWnd)->OnTotalExchangeAmountKillfocus();
} */
static int _OnTotalExchangeAmountCheckValueFnc(CWnd *pWnd){
	return ((CARQuoteDialog *)pWnd)->OnTotalExchangeAmountCheckValue();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnUtilitiesSelectFnc(CWnd *pWnd){
	CARQuoteDialog *pVw = (CARQuoteDialog *)pWnd;
	pVw->OnUtilitiesSelect();
} 
static int _OnAddARQuoteDialogFnc(CWnd *pWnd){
	 return ((CARQuoteDialog*)pWnd)->OnAddARQuoteDialog();
} 
static int _OnEditARQuoteDialogFnc(CWnd *pWnd){
	 return ((CARQuoteDialog*)pWnd)->OnEditARQuoteDialog();
} 
static int _OnDeleteARQuoteDialogFnc(CWnd *pWnd){
	 return ((CARQuoteDialog*)pWnd)->OnDeleteARQuoteDialog();
} 
static int _OnSaveARQuoteDialogFnc(CWnd *pWnd){
	 return ((CARQuoteDialog*)pWnd)->OnSaveARQuoteDialog();
} 
static int _OnCancelARQuoteDialogFnc(CWnd *pWnd){
	 return ((CARQuoteDialog*)pWnd)->OnCancelARQuoteDialog();
} 
CARQuoteDialog::CARQuoteDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent)
{
	CGuiDialog::SetMode(nMode);

	m_nDlgWidth = 800;
	m_nDlgHeight = 600;
	SetDefaultValues();
}
CARQuoteDialog::~CARQuoteDialog(){
}
void CARQuoteDialog::OnCreateComponents(){
	m_wndQuoteInformation.Create(this, _T("Quote Information"), 5, 4, 225, 179);
	m_wndGeneralInformation.Create(this, _T("General Information"), 230, 5, 800, 180);
	m_wndLines.Create(this, _T("Lines"), 5, 185, 800, 570);
	m_wndQuoteNoLabel.Create(this, _T("Quote No"), 10, 30, 110, 55);
	m_wndQuoteNo.Create(this,115, 30, 220, 55); 
	m_wndQuoteDateLabel.Create(this, _T("Quote Date"), 10, 60, 110, 85);
	m_wndQuoteDate.Create(this,115, 60, 220, 85); 
	m_wndCurrencyLabel.Create(this, _T("Currency"), 10, 90, 110, 115);
	m_wndCurrency.Create(this,115, 90, 220, 115); 
	m_wndExchangeRateLabel.Create(this, _T("Exchange Rate"), 10, 120, 110, 145);
	m_wndExchangeRate.Create(this,115, 120, 220, 145); 
	m_wndSalesPersonLabel.Create(this, _T("Sales Person"), 10, 150, 110, 175);
	m_wndSalesPerson.Create(this,115, 150, 220, 175); 
	m_wndCustomerLabel.Create(this, _T("Customer"), 235, 30, 355, 55);
	m_wndCustomer.Create(this,360, 30, 796, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 235, 60, 355, 85);
	m_wndAddress.Create(this,360, 60, 796, 85); 
	m_wndContactNameLabel.Create(this, _T("Contact Name"), 235, 90, 355, 115);
	m_wndContactName.Create(this,360, 90, 570, 115); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 575, 90, 675, 115);
	m_wndPhone.Create(this,680, 90, 796, 115); 
	m_wndPaymentTermsLabel.Create(this, _T("PaymentTerms"), 235, 120, 355, 145);
	m_wndPaymentTerms.Create(this,360, 120, 570, 145); 
	m_wndExpirationDateLabel.Create(this, _T("Expiration Date"), 575, 120, 675, 145);
	m_wndExpirationDate.Create(this,680, 120, 796, 145); 
	m_wndTransportMethodLabel.Create(this, _T("Transport Method"), 235, 150, 355, 175);
	m_wndTransportMethod.Create(this,360, 150, 570, 175); 
	m_wndDeliveryDateLabel.Create(this, _T("Delivery Date"), 575, 150, 675, 175);
	m_wndDeliveryDate.Create(this,680, 150, 796, 175); 
	m_wndList.Create(this,10, 210, 795, 445); 
	m_wndMemoLabel.Create(this, _T("Memo"), 10, 450, 110, 475);
	m_wndMemo.Create(this,115, 450, 570, 535); 
	m_wndReferenceLabel.Create(this, _T("Reference"), 10, 540, 110, 565);
	m_wndReference.Create(this,115, 540, 570, 565); 
	m_wndNetAmountLabel.Create(this, _T("Net Amount"), 575, 450, 675, 475);
	m_wndNetAmount.Create(this,680, 450, 795, 475); 
	m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 575, 480, 675, 505);
	m_wndTaxesAmount.Create(this,680, 480, 795, 505); 
	m_wndAmountLabel.Create(this, _T("Total Amount"), 575, 510, 675, 535);
	m_wndAmount.Create(this,680, 510, 795, 535); 
	m_wndTotalExchangeAmountLabel.Create(this, _T("Total(VND)"), 575, 540, 675, 565);
	m_wndTotalExchangeAmount.Create(this,680, 540, 795, 565); 
	m_wndAddLine.Create(this, _T("Add Line"), 10, 575, 110, 600);
	m_wndAdd.Create(this, _T("&Add"), 115, 575, 195, 600);
	m_wndEdit.Create(this, _T("&Edit"), 200, 575, 280, 600);
	m_wndDelete.Create(this, _T("&Delete"), 285, 575, 365, 600);
	m_wndSave.Create(this, _T("&Save"), 370, 575, 450, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 455, 575, 535, 600);
	m_wndPrint.Create(this, _T("&Print"), 540, 575, 620, 600);
	m_wndPost.Create(this, _T("Post"), 625, 575, 705, 600);
	m_wndUtilities.Create(this, _T("&Utilities"), 710, 575, 795, 600);

}
void CARQuoteDialog::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndBookNo.SetLimitText(35);
//	m_wndBookNo.SetCheckValue(true);
	m_wndQuoteNo.SetLimitText(11);
	m_wndQuoteNo.SetCheckValue(true);
//	m_wndQuoteDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndQuoteDate.SetCheckValue(true);
	
	
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(3);
	m_wndExchangeRate.SetLimitText(15);
	m_wndExchangeRate.SetCheckValue(true);
	m_wndExchangeRate.SetNumberDecimal(3);
	m_wndCustomer.SetCheckValue(true);
	m_wndCustomer.LimitText(254);
	m_wndAddress.SetLimitText(250);
//	m_wndAddress.SetCheckValue(true);
	m_wndMemo.SetLimitText(2048);
//	m_wndMemo.SetCheckValue(true);
	m_wndNetAmount.SetLimitText(16);
	m_wndNetAmount.SetReadOnly(TRUE);
//	m_wndNetAmount.SetCheckValue(true);
	m_wndNetAmount.SetCurrencyFormat(true);
	m_wndNetAmount.SetTextColor(RGB(0, 128, 192));
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetReadOnly(TRUE);
	m_wndAmount.SetCurrencyFormat(true);
	m_wndAmount.SetTextColor(RGB(0, 128, 255));
//	m_wndAmount.SetCheckValue(true);
	m_wndTaxesAmount.SetLimitText(16);
	m_wndTaxesAmount.SetReadOnly(TRUE);
	m_wndTaxesAmount.SetCurrencyFormat(true);
	m_wndTaxesAmount.SetTextColor(RGB(0, 64, 128));
//	m_wndTaxesAmount.SetCheckValue(true);
	m_wndAddress.SetReadOnly(true);
	
	
	m_wndCurrency.Format(2, 0, 10, 1);
	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	
	m_wndCustomer.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndCustomer.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndCustomer.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndCustomer.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);


	m_wndList.GetHeaderControl()->SetItemHeight(1);

	m_wndList.InsertColumn(0, _T("Debit Account"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(1, _T("Credit Account"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 185);
	m_wndList.InsertColumn(3, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(4, _T("% Tax Rate"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(5, _T("Tax Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Tax Account"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T("Job ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(8, _T("lineidx"), CFMT_TEXT, 0);



	m_ar_quoteTbl.SetTableName(_T("fa_order"));
	m_ar_quoteTbl.AddField(_T("fac_cash_id"), dfText, 32); 
	m_ar_quoteTbl.AddField(_T("fac_client_id"), dfText, 32); 
	m_ar_quoteTbl.AddField(_T("fac_org_id"), dfText, 32); 
	m_ar_quoteTbl.AddField(_T("fac_user_id"), dfText, 32); 
	m_ar_quoteTbl.AddField(_T("fac_invoicetype"), dfText, 1); 
	m_ar_quoteTbl.AddField(_T("fac_invoiceno"), dfText, 32); 
	m_ar_quoteTbl.AddField(_T("fac_invoicedate"), dfDate); 
	m_ar_quoteTbl.AddField(_T("fac_acctdate"), dfDate); 
	m_ar_quoteTbl.AddField(_T("fac_currency_id"), dfText, 32); 
	m_ar_quoteTbl.AddField(_T("fac_exchangerate"), dfDouble); 
	m_ar_quoteTbl.AddField(_T("fac_expense_id"), dfText, 32); 
	m_ar_quoteTbl.AddField(_T("fac_contract_id"), dfText, 32);
	m_ar_quoteTbl.AddField(_T("fac_partner_type_id"), dfText, 3); 
	m_ar_quoteTbl.AddField(_T("fac_partner_id"), dfText, 32); 
	m_ar_quoteTbl.AddField(_T("fac_partner_address"), dfText, 255); 
	m_ar_quoteTbl.AddField(_T("fac_reason"), dfText, 255); 
	m_ar_quoteTbl.AddField(_T("fac_description"), dfText, 255); 
	m_ar_quoteTbl.AddField(_T("fac_transactor"), dfText, 128); 
	m_ar_quoteTbl.AddField(_T("fac_org_document"), dfText, 255); 

}

void CARQuoteDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndQuoteNo.SetEvent(WE_CHANGE, _OnQuoteNoChangeFnc);
	//m_wndQuoteNo.SetEvent(WE_SETFOCUS, _OnQuoteNoSetfocusFnc);
	//m_wndQuoteNo.SetEvent(WE_KILLFOCUS, _OnQuoteNoKillfocusFnc);
	m_wndQuoteNo.SetEvent(WE_CHECKVALUE, _OnQuoteNoCheckValueFnc);
	//m_wndQuoteDate.SetEvent(WE_CHANGE, _OnQuoteDateChangeFnc);
	//m_wndQuoteDate.SetEvent(WE_SETFOCUS, _OnQuoteDateSetfocusFnc);
	//m_wndQuoteDate.SetEvent(WE_KILLFOCUS, _OnQuoteDateKillfocusFnc);
	m_wndQuoteDate.SetEvent(WE_CHECKVALUE, _OnQuoteDateCheckValueFnc);
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
	m_wndSalesPerson.SetEvent(WE_SELENDOK, _OnSalesPersonSelendokFnc);
	//m_wndSalesPerson.SetEvent(WE_SETFOCUS, _OnSalesPersonSetfocusFnc);
	//m_wndSalesPerson.SetEvent(WE_KILLFOCUS, _OnSalesPersonKillfocusFnc);
	m_wndSalesPerson.SetEvent(WE_SELCHANGE, _OnSalesPersonSelectChangeFnc);
	m_wndSalesPerson.SetEvent(WE_LOADDATA, _OnSalesPersonLoadDataFnc);
	//m_wndSalesPerson.SetEvent(WE_ADDNEW, _OnSalesPersonAddNewFnc);
	m_wndCustomer.SetEvent(WE_SELENDOK, _OnCustomerSelendokFnc);
	//m_wndCustomer.SetEvent(WE_SETFOCUS, _OnCustomerSetfocusFnc);
	//m_wndCustomer.SetEvent(WE_KILLFOCUS, _OnCustomerKillfocusFnc);
	m_wndCustomer.SetEvent(WE_SELCHANGE, _OnCustomerSelectChangeFnc);
	m_wndCustomer.SetEvent(WE_LOADDATA, _OnCustomerLoadDataFnc);
	//m_wndCustomer.SetEvent(WE_ADDNEW, _OnCustomerAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndContactName.SetEvent(WE_CHANGE, _OnContactNameChangeFnc);
	//m_wndContactName.SetEvent(WE_SETFOCUS, _OnContactNameSetfocusFnc);
	//m_wndContactName.SetEvent(WE_KILLFOCUS, _OnContactNameKillfocusFnc);
	m_wndContactName.SetEvent(WE_CHECKVALUE, _OnContactNameCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndPaymentTerms.SetEvent(WE_SELENDOK, _OnPaymentTermsSelendokFnc);
	//m_wndPaymentTerms.SetEvent(WE_SETFOCUS, _OnPaymentTermsSetfocusFnc);
	//m_wndPaymentTerms.SetEvent(WE_KILLFOCUS, _OnPaymentTermsKillfocusFnc);
	m_wndPaymentTerms.SetEvent(WE_SELCHANGE, _OnPaymentTermsSelectChangeFnc);
	m_wndPaymentTerms.SetEvent(WE_LOADDATA, _OnPaymentTermsLoadDataFnc);
	//m_wndPaymentTerms.SetEvent(WE_ADDNEW, _OnPaymentTermsAddNewFnc);
	//m_wndExpirationDate.SetEvent(WE_CHANGE, _OnExpirationDateChangeFnc);
	//m_wndExpirationDate.SetEvent(WE_SETFOCUS, _OnExpirationDateSetfocusFnc);
	//m_wndExpirationDate.SetEvent(WE_KILLFOCUS, _OnExpirationDateKillfocusFnc);
	m_wndExpirationDate.SetEvent(WE_CHECKVALUE, _OnExpirationDateCheckValueFnc);
	m_wndTransportMethod.SetEvent(WE_SELENDOK, _OnTransportMethodSelendokFnc);
	//m_wndTransportMethod.SetEvent(WE_SETFOCUS, _OnTransportMethodSetfocusFnc);
	//m_wndTransportMethod.SetEvent(WE_KILLFOCUS, _OnTransportMethodKillfocusFnc);
	m_wndTransportMethod.SetEvent(WE_SELCHANGE, _OnTransportMethodSelectChangeFnc);
	m_wndTransportMethod.SetEvent(WE_LOADDATA, _OnTransportMethodLoadDataFnc);
	//m_wndTransportMethod.SetEvent(WE_ADDNEW, _OnTransportMethodAddNewFnc);
	//m_wndDeliveryDate.SetEvent(WE_CHANGE, _OnDeliveryDateChangeFnc);
	//m_wndDeliveryDate.SetEvent(WE_SETFOCUS, _OnDeliveryDateSetfocusFnc);
	//m_wndDeliveryDate.SetEvent(WE_KILLFOCUS, _OnDeliveryDateKillfocusFnc);
	m_wndDeliveryDate.SetEvent(WE_CHECKVALUE, _OnDeliveryDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	//m_wndMemo.SetEvent(WE_CHANGE, _OnMemoChangeFnc);
	//m_wndMemo.SetEvent(WE_SETFOCUS, _OnMemoSetfocusFnc);
	//m_wndMemo.SetEvent(WE_KILLFOCUS, _OnMemoKillfocusFnc);
	m_wndMemo.SetEvent(WE_CHECKVALUE, _OnMemoCheckValueFnc);
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	//m_wndNetAmount.SetEvent(WE_CHANGE, _OnNetAmountChangeFnc);
	//m_wndNetAmount.SetEvent(WE_SETFOCUS, _OnNetAmountSetfocusFnc);
	//m_wndNetAmount.SetEvent(WE_KILLFOCUS, _OnNetAmountKillfocusFnc);
	m_wndNetAmount.SetEvent(WE_CHECKVALUE, _OnNetAmountCheckValueFnc);
	//m_wndTaxesAmount.SetEvent(WE_CHANGE, _OnTaxesAmountChangeFnc);
	//m_wndTaxesAmount.SetEvent(WE_SETFOCUS, _OnTaxesAmountSetfocusFnc);
	//m_wndTaxesAmount.SetEvent(WE_KILLFOCUS, _OnTaxesAmountKillfocusFnc);
	m_wndTaxesAmount.SetEvent(WE_CHECKVALUE, _OnTaxesAmountCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndTotalExchangeAmount.SetEvent(WE_CHANGE, _OnTotalExchangeAmountChangeFnc);
	//m_wndTotalExchangeAmount.SetEvent(WE_SETFOCUS, _OnTotalExchangeAmountSetfocusFnc);
	//m_wndTotalExchangeAmount.SetEvent(WE_KILLFOCUS, _OnTotalExchangeAmountKillfocusFnc);
	m_wndTotalExchangeAmount.SetEvent(WE_CHECKVALUE, _OnTotalExchangeAmountCheckValueFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndUtilities.SetEvent(WE_CLICK, _OnUtilitiesSelectFnc);
	SetMode(VM_NONE);

}
void CARQuoteDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndQuoteNo.GetDlgCtrlID(), m_szQuoteNo);
	DDX_TextEx(pDX, m_wndQuoteDate.GetDlgCtrlID(), m_szQuoteDate);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchangeRate.GetDlgCtrlID(), m_nExchangeRate);
	DDX_TextEx(pDX, m_wndSalesPerson.GetDlgCtrlID(), m_szSalesPersonKey);
	DDX_TextEx(pDX, m_wndCustomer.GetDlgCtrlID(), m_szCustomerKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndContactName.GetDlgCtrlID(), m_szContactName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndPaymentTerms.GetDlgCtrlID(), m_szPaymentTermsKey);
	DDX_TextEx(pDX, m_wndExpirationDate.GetDlgCtrlID(), m_szExpirationDate);
	DDX_TextEx(pDX, m_wndTransportMethod.GetDlgCtrlID(), m_szTransportMethodKey);
	DDX_TextEx(pDX, m_wndDeliveryDate.GetDlgCtrlID(), m_szDeliveryDate);
	DDX_Text(pDX, m_wndMemo.GetDlgCtrlID(), m_szMemo);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_Text(pDX, m_wndNetAmount.GetDlgCtrlID(), m_nNetAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndTotalExchangeAmount.GetDlgCtrlID(), m_nTotalExchangeAmount);

}
void CARQuoteDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_order WHERE fac_cash_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fac_cash_id"), m_szID);
		rs.GetValue(_T("fac_invoiceno"), m_szQuoteNo);
		rs.GetValue(_T("fac_invoicedate"), m_szQuoteDate);

		rs.GetValue(_T("fac_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("fac_exchangerate"), m_nExchangeRate);
		rs.GetValue(_T("fac_partner_id"), m_szCustomerKey);
		rs.GetValue(_T("fac_partner_address"), m_szAddress);
		rs.GetValue(_T("fac_description"), m_szMemo);
		rs.GetValue(_T("fac_status"), m_szStatus);
		rs.GetValue(_T("fac_baseamt"), m_nNetAmount);
		rs.GetValue(_T("fac_taxamt"), m_nTaxesAmount);
		rs.GetValue(_T("fac_amount"), m_nAmount);
		rs.GetValue(_T("fac_posted"), m_szPosted);
		OnListLoadData();
	}

}

void CARQuoteDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	if(GetMode() == VM_ADD){
		CRecord rs(&pMF->m_db);
		CString szSQL;
		m_szID = pMF->ExecDML(_T("get_uuid()"));
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE fac_cash_id='%s' "), m_szID);
		m_ar_quoteTbl.Open(&pMF->m_db, szWhere);
	}
	m_ar_quoteTbl.SetValue(_T("fac_cash_id"), m_szID);
	m_ar_quoteTbl.SetValue(_T("fac_client_id"), _T(""));
	m_ar_quoteTbl.SetValue(_T("fac_org_id"), _T(""));
	m_ar_quoteTbl.SetValue(_T("fac_user_id"), pMF->GetCurrentUser());
	m_ar_quoteTbl.SetValue(_T("fac_invoiceno"), m_szQuoteNo);
	m_ar_quoteTbl.SetValue(_T("fac_invoicedate"), m_szQuoteDate);
	m_ar_quoteTbl.SetValue(_T("fac_currency_id"), m_szCurrencyKey);
	m_ar_quoteTbl.SetValue(_T("fac_exchangerate"), m_nExchangeRate);
	m_ar_quoteTbl.SetValue(_T("fac_partner_type_id"), m_szCustomerTypeKey);
	m_ar_quoteTbl.SetValue(_T("fac_partner_id"), m_szCustomerKey);
	m_ar_quoteTbl.SetValue(_T("fac_partner_address"), m_szAddress);
	m_ar_quoteTbl.SetValue(_T("fac_salesperson"), m_szSalesPersonKey);
	m_ar_quoteTbl.SetValue(_T("fac_description"), m_szMemo);



}

void CARQuoteDialog::SetDefaultValues(){

	//m_szQuoteNo.Empty();
	m_szQuoteDate.Empty();
	m_szCurrencyKey = _T("VND");
	m_nExchangeRate=1;
	m_szCustomerKey.Empty();
	m_szAddress.Empty();
	m_szSalesPersonKey.Empty();
	m_szMemo.Empty();
	m_nNetAmount=0;
	m_nTaxesAmount=0;
	m_nAmount=0;
	m_nTotalExchangeAmount = 0;
	m_szStatus=_T("O");
	m_szPosted = _T("N");
}

int CARQuoteDialog::SetMode(int nMode){
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
			m_szQuoteDate =  pMF->GetSysDate();
			
			szSQL.Format(_T("ADM_GETNEXTVAL('FA_CASH_PINVOICENO_ASQ','N') "));

			m_szQuoteNo = pMF->ExecDML(szSQL);
			m_wndQuoteDate.SetFocus();
			m_wndList.DeleteAllItems();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndCustomer.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szQuoteNo.Empty();
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

/*void CARQuoteDialog::OnQuoteNoChange(){
	
} */
/*void CARQuoteDialog::OnQuoteNoSetfocus(){
	
} */
/*void CARQuoteDialog::OnQuoteNoKillfocus(){
	
} */
int CARQuoteDialog::OnQuoteNoCheckValue(){
	return 0;
} 
/*void CARQuoteDialog::OnQuoteDateChange(){
	
} */
/*void CARQuoteDialog::OnQuoteDateSetfocus(){
	
} */
/*void CARQuoteDialog::OnQuoteDateKillfocus(){
	
} */
int CARQuoteDialog::OnQuoteDateCheckValue(){
	return 0;
} 
void CARQuoteDialog::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CARQuoteDialog::OnCurrencySelendok(){
	 UpdateData(TRUE);
	 if(m_szCurrencyKey != _T("VND"))
	 {
		 m_wndList.SetColumnWidth(4, 90);
	 }
	 else
	 {
		 m_wndList.SetColumnWidth(4, 0);
	 } 
}

/*void CARQuoteDialog::OnCurrencySetfocus(){
	
}*/
/*void CARQuoteDialog::OnCurrencyKillfocus(){
	
}*/
long CARQuoteDialog::OnCurrencyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCurrencyList(&m_wndCurrency, m_szCurrencyKey);

	
}

/*void CARQuoteDialog::OnCurrencyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CARQuoteDialog::OnExchangeRateChange(){
	
} */
/*void CARQuoteDialog::OnExchangeRateSetfocus(){
	
} */
/*void CARQuoteDialog::OnExchangeRateKillfocus(){
	
} */
int CARQuoteDialog::OnExchangeRateCheckValue(){
	return 0;
}
 
void CARQuoteDialog::OnSalesPersonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CARQuoteDialog::OnSalesPersonSelendok(){
	 
}
/*void CARQuoteDialog::OnSalesPersonSetfocus(){
	
}*/
/*void CARQuoteDialog::OnSalesPersonKillfocus(){
	
}*/
long CARQuoteDialog::OnSalesPersonLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSalesPerson.IsSearchKey() && !m_szSalesPersonKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSalesPersonKey
};
	m_wndSalesPerson.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSalesPerson.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CARQuoteDialog::OnSalesPersonAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CARQuoteDialog::OnCustomerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CARQuoteDialog::OnCustomerSelendok(){
	 
}
/*void CARQuoteDialog::OnCustomerSetfocus(){
	
}*/
/*void CARQuoteDialog::OnCustomerKillfocus(){
	
}*/
long CARQuoteDialog::OnCustomerLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCustomer.IsSearchKey() && !m_szCustomerKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCustomerKey
};
	m_wndCustomer.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCustomer.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CARQuoteDialog::OnCustomerAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CARQuoteDialog::OnAddressChange(){
	
} */
/*void CARQuoteDialog::OnAddressSetfocus(){
	
} */
/*void CARQuoteDialog::OnAddressKillfocus(){
	
} */
int CARQuoteDialog::OnAddressCheckValue(){
	return 0;
}
 
/*void CARQuoteDialog::OnContactNameChange(){
	
} */
/*void CARQuoteDialog::OnContactNameSetfocus(){
	
} */
/*void CARQuoteDialog::OnContactNameKillfocus(){
	
} */
int CARQuoteDialog::OnContactNameCheckValue(){
	return 0;
} 
/*void CARQuoteDialog::OnPhoneChange(){
	
} */
/*void CARQuoteDialog::OnPhoneSetfocus(){
	
} */
/*void CARQuoteDialog::OnPhoneKillfocus(){
	
} */
int CARQuoteDialog::OnPhoneCheckValue(){
	return 0;
} 
void CARQuoteDialog::OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CARQuoteDialog::OnPaymentTermsSelendok(){
	 
}
/*void CARQuoteDialog::OnPaymentTermsSetfocus(){
	
}*/
/*void CARQuoteDialog::OnPaymentTermsKillfocus(){
	
}*/
long CARQuoteDialog::OnPaymentTermsLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentTerms.IsSearchKey() && !m_szPaymentTermsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentTermsKey
};
	m_wndPaymentTerms.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentTerms.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CARQuoteDialog::OnPaymentTermsAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CARQuoteDialog::OnExpirationDateChange(){
	
} */
/*void CARQuoteDialog::OnExpirationDateSetfocus(){
	
} */
/*void CARQuoteDialog::OnExpirationDateKillfocus(){
	
} */
int CARQuoteDialog::OnExpirationDateCheckValue(){
	return 0;
} 
void CARQuoteDialog::OnTransportMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CARQuoteDialog::OnTransportMethodSelendok(){
	 
}
/*void CARQuoteDialog::OnTransportMethodSetfocus(){
	
}*/
/*void CARQuoteDialog::OnTransportMethodKillfocus(){
	
}*/
long CARQuoteDialog::OnTransportMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransportMethod.IsSearchKey() && !m_szTransportMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTransportMethodKey
};
	m_wndTransportMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransportMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CARQuoteDialog::OnTransportMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CARQuoteDialog::OnDeliveryDateChange(){
	
} */
/*void CARQuoteDialog::OnDeliveryDateSetfocus(){
	
} */
/*void CARQuoteDialog::OnDeliveryDateKillfocus(){
	
} */
int CARQuoteDialog::OnDeliveryDateCheckValue(){
	return 0;
} 
void CARQuoteDialog::OnListDblClick(){
	OnListEditItem();
}
 
void CARQuoteDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	CString szLineID = m_wndList.GetItemText(nNewItem, 8);
//	m_wndInput.SetReference(m_szID , szLineID);

}


int CARQuoteDialog::OnListAddItem(){
	if(GetMode() != VM_VIEW)
		return 0;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can't add item with current status"), MB_OK);
		return -1;
	}
	if(m_wndInput.IsWindowVisible()){
		return -1;
	}
	m_wndInput.SetMode(VM_ADD);
	m_wndList.AddNewLine();
	return 0;
}
int CARQuoteDialog::OnListEditItem(){
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

 
int CARQuoteDialog::OnListDeleteItem(){
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
	int retMsg = ShowMessageBox(_T("Do you want to delete item?(Y/)"), MB_YESNO);
	if(retMsg == IDNO)
 		return -1; 

 	szSQL.Format(_T("fa_orderline_delete('%s', '%s', '%s') "), m_szID, szLineID, pMF->GetCurrentUser()); 
//Notice(szSQL);
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
		m_wndList.DeleteItem(nSel);
		RecalcTotalAmount();
 	}
	return 0;
}
 
long CARQuoteDialog::OnListLoadData(){
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
		_T("FROM fa_orderline WHERE facl_cash_id='%s' ORDER BY facl_line "), m_nExchangeRate, m_szID);



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

/*void CARQuoteDialog::OnMemoChange(){
	
} */
/*void CARQuoteDialog::OnMemoSetfocus(){
	
} */
/*void CARQuoteDialog::OnMemoKillfocus(){
	
} */
int CARQuoteDialog::OnMemoCheckValue(){
	return 0;
} 
/*void CARQuoteDialog::OnReferenceChange(){
	
} */
/*void CARQuoteDialog::OnReferenceSetfocus(){
	
} */
/*void CARQuoteDialog::OnReferenceKillfocus(){
	
} */
int CARQuoteDialog::OnReferenceCheckValue(){
	return 0;
} 
/*void CARQuoteDialog::OnNetAmountChange(){
	
} */
/*void CARQuoteDialog::OnNetAmountSetfocus(){
	
} */
/*void CARQuoteDialog::OnNetAmountKillfocus(){
	
} */
int CARQuoteDialog::OnNetAmountCheckValue(){
	return 0;
}
 
/*void CARQuoteDialog::OnTaxesAmountChange(){
	
} */
/*void CARQuoteDialog::OnTaxesAmountSetfocus(){
	
} */
/*void CARQuoteDialog::OnTaxesAmountKillfocus(){
	
} */
int CARQuoteDialog::OnTaxesAmountCheckValue(){
	return 0;
}
 
/*void CARQuoteDialog::OnAmountChange(){
	
} */
/*void CARQuoteDialog::OnAmountSetfocus(){
	
} */
/*void CARQuoteDialog::OnAmountKillfocus(){
	
} */
int CARQuoteDialog::OnAmountCheckValue(){
	return 0;
}
 
/*void CARQuoteDialog::OnTotalExchangeAmountChange(){
	
} */
/*void CARQuoteDialog::OnTotalExchangeAmountSetfocus(){
	
} */
/*void CARQuoteDialog::OnTotalExchangeAmountKillfocus(){
	
} */
int CARQuoteDialog::OnTotalExchangeAmountCheckValue(){
	return 0;
} 
void CARQuoteDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListAddItem();

}
 
void CARQuoteDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnAddARQuoteDialog();
}
 
void CARQuoteDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnEditARQuoteDialog();
}
 
void CARQuoteDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	OnDeleteARQuoteDialog();
}
 
void CARQuoteDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveARQuoteDialog();
}
 
void CARQuoteDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelARQuoteDialog();
}
 
void CARQuoteDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	CPrintForms printer;
	//printer.PrintReceipts(m_szQuoteNo, m_szQuoteType);
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Print Quote"));
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
 
void CARQuoteDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.EndEdit(TRUE);
	CString szSQL, tmpStr;
	if(m_szPosted != _T("Y"))
	{
		szSQL.Format(_T("UPDATE fa_order SET fac_posted='Y', fac_posteddate=systimestamp, fac_postedby='%s', fac_status='P' ") \
			_T(" WHERE fac_cash_id='%s' and fac_status='O' and fac_posted<>'Y'"), pMF->GetCurrentUser(), m_szID);

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
		szSQL.Format(_T("UPDATE fa_order SET fac_posted='N', fac_status='O' ") \
			_T(" WHERE fac_cash_id='%s' and fac_status='P' and fac_posted='Y'"),  m_szID);
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
 
void CARQuoteDialog::OnUtilitiesSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Add Customer-Vendor"));
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
 
int CARQuoteDialog::OnAddARQuoteDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CARQuoteDialog::OnEditARQuoteDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CARQuoteDialog::OnDeleteARQuoteDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessageBox(_T("Do you want to delete voucher?(Y/)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("fa_order_delete('%s', '','', '%s') "), m_szID, pMF->GetCurrentUser()); 
 	CString szRes = pMF->ExecDML(szSQL); 
 	if(szRes == _T("OK")){ 
 		SetMode(VM_NONE); 
 		OnCancelARQuoteDialog(); 
 	}
	return 0;
}

int CARQuoteDialog::OnSaveARQuoteDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("fa_order_create(%s) "), m_ar_quoteTbl.FormatSQL());
	else
		szSQL.Format(_T("fa_order_update(%s) "),  m_ar_quoteTbl.FormatSQL());
 
 //Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("%s"), m_ar_quoteTbl.GetInsertSQL());
	}
	else
	{
		szSQL.Format(_T("%s"), m_ar_quoteTbl.GetUpdateSQL(_T("fac_cash_id")));
	}
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

int CARQuoteDialog::OnCancelARQuoteDialog(){
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
 
int CARQuoteDialog::OnARQuoteDialogListLoadData(){
	return 0;
}




void CARQuoteDialog::RecalcTotalAmount(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fa_cash WHERE fac_cash_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fac_baseamt"), m_nNetAmount);
		rs.GetValue(_T("fac_taxamt"), m_nTaxesAmount);
		rs.GetValue(_T("fac_amount"), m_nAmount);
		UpdateData(false);
	}
}



bool CARQuoteDialog::OnCloseWindow(){
_tprintf(_T("adas"));
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		int nMsg = ShowMessageBox(_T("Data is not save. Do you want to save?"), MB_YESNOCANCEL|MB_ICONWARNING);
		if(nMsg == IDNO)
			return true;
		if(nMsg == IDCANCEL)
			return false;
		if(OnSaveARQuoteDialog() > 0)
			return true;
		else
			return false;
	}
	return true;
}