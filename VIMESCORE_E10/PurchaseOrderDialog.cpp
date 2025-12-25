#include "PurchaseOrderDialog.h"
#include "MainFrame_E10.h"
#include "HMSReportForms/PrintForms.h"
#include "PurchaseOrderLineInput.h"
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnDelivererCheckValue();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnReceiverCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnReferneceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnReferneceChange();
} */
/*static void _OnReferneceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnReferneceSetfocus();} */ 
/*static void _OnReferneceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnReferneceKillfocus();
} */
static int _OnReferneceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnReferneceCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnAccountingDateCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnExchangeRateCheckValue();
} 
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnResourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnResourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResourceSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnResourceSelendok();
}
/*static void _OnResourceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnResourceKillfocus();
}*/
/*static void _OnResourceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnResourceKillfocus();
}*/
static long _OnResourceLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnResourceLoadData();
}
/*static void _OnResourceAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnResourceAddNew();
}*/
static void _OnDebitAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnDebitAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAcctSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDebitAcctSelendok();
}
/*static void _OnDebitAcctSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDebitAcctKillfocus();
}*/
/*static void _OnDebitAcctKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDebitAcctKillfocus();
}*/
static long _OnDebitAcctLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnDebitAcctLoadData();
}
/*static void _OnDebitAcctAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDebitAcctAddNew();
}*/
static void _OnCreditAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnCreditAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAcctSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnCreditAcctSelendok();
}
/*static void _OnCreditAcctSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnCreditAcctKillfocus();
}*/
/*static void _OnCreditAcctKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnCreditAcctKillfocus();
}*/
static long _OnCreditAcctLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnCreditAcctLoadData();
}
/*static void _OnCreditAcctAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnCreditAcctAddNew();
}*/
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnPaymentTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnPaymentTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTermsSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnPaymentTermsSelendok();
}
/*static void _OnPaymentTermsSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnPaymentTermsKillfocus();
}*/
/*static void _OnPaymentTermsKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnPaymentTermsKillfocus();
}*/
static long _OnPaymentTermsLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnPaymentTermsLoadData();
}
/*static void _OnPaymentTermsAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnPaymentTermsAddNew();
}*/
static void _OnDeliveryMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialog* )pWnd)->OnDeliveryMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryMethodSelendok();
}
/*static void _OnDeliveryMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryMethodKillfocus();
}*/
/*static void _OnDeliveryMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryMethodKillfocus();
}*/
static long _OnDeliveryMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnDeliveryMethodLoadData();
}
/*static void _OnDeliveryMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryMethodAddNew();
}*/
/*static void _OnDeliveryDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryDateChange();
} */
/*static void _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryDateSetfocus();} */ 
/*static void _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnDeliveryDateCheckValue();
} 
/*static void _OnDeliveryAddressChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryAddressChange();
} */
/*static void _OnDeliveryAddressSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryAddressSetfocus();} */ 
/*static void _OnDeliveryAddressKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnDeliveryAddressKillfocus();
} */
static int _OnDeliveryAddressCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnDeliveryAddressCheckValue();
} 
/*static void _OnNetAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnNetAmountChange();
} */
/*static void _OnNetAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnNetAmountSetfocus();} */ 
/*static void _OnNetAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnNetAmountKillfocus();
} */
static int _OnNetAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnNetAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnTotalExchangeAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTotalExchangeAmountChange();
} */
/*static void _OnTotalExchangeAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTotalExchangeAmountSetfocus();} */ 
/*static void _OnTotalExchangeAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialog *)pWnd)->OnTotalExchangeAmountKillfocus();
} */
static int _OnTotalExchangeAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialog *)pWnd)->OnTotalExchangeAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialog *pVw = (CPurchaseOrderDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPurchaseOrderDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddPurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialog*)pWnd)->OnAddPurchaseOrderDialog();
} 
static int _OnEditPurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialog*)pWnd)->OnEditPurchaseOrderDialog();
} 
static int _OnDeletePurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialog*)pWnd)->OnDeletePurchaseOrderDialog();
} 
static int _OnSavePurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialog*)pWnd)->OnSavePurchaseOrderDialog();
} 
static int _OnDiscardPurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialog*)pWnd)->OnDiscardPurchaseOrderDialog();
} 
CPurchaseOrderDialog::CPurchaseOrderDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("POO");

	SetWindowName(_T("PurchaseOrderDialog"));
}
CPurchaseOrderDialog::~CPurchaseOrderDialog(){
}
void CPurchaseOrderDialog::OnCreateComponents(){
	m_wndOrderDate.EnableCalendar(true);
	m_wndAccountingDate.EnableCalendar(true);


	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 690, 5, 1005, 180);
	m_wndSupplierInformation.Create(this, _T("General Information"), 5, 5, 685, 180);
	m_wndTerms.Create(this, _T("Extra Information"), 5, 419, 685, 564);
	m_wndSummary.Create(this, _T(""), 690, 420, 1005, 565);
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 30, 160, 55);
	m_wndSupplier.Create(this,165, 30, 680, 55); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 60, 160, 85);
	m_wndDeliverer.Create(this,165, 60, 355, 85); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 360, 60, 480, 85);
	m_wndReceiver.Create(this,485, 60, 680, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 160, 115);
	m_wndAddress.Create(this,165, 90, 680, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 160, 145);
	m_wndDescription.Create(this,165, 120, 680, 145); 
	m_wndReferneceLabel.Create(this, _T("Reference"), 10, 150, 160, 175);
	m_wndRefernece.Create(this,165, 150, 480, 175); 
	m_wndOriginalDocument.Create(this, _T("Original Document"), 485, 150, 680, 175);
	m_wndOrderNoLabel.Create(this, _T("Voucher No"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("Voucher Date"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 695, 90, 845, 115);
	m_wndAccountingDate.Create(this,850, 90, 1000, 115); 
	m_wndCurrencyLabel.Create(this, _T("Currency"), 695, 120, 845, 145);
	m_wndExchangeRateLabel.Create(this, _T("Exchange Rate"), 695, 150, 845, 175);
	m_wndCurrency.Create(this,850, 120, 1000, 145); 
	m_wndExchangeRate.Create(this,850, 150, 1000, 175); 
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 10, 445, 160, 470);
	m_wndWarehouse.Create(this,165, 445, 365, 470); 
	m_wndResourceLabel.Create(this, _T("Resource"), 370, 445, 520, 470);
	m_wndResource.Create(this,525, 445, 680, 471); 
	m_wndDebitAcctLabel.Create(this, _T("Debit Acct"), 10, 476, 160, 501);
	m_wndDebitAcct.Create(this,165, 476, 365, 501); 
	m_wndCreditAcctLabel.Create(this, _T("Credit Acct"), 370, 476, 520, 501);
	m_wndCreditAcct.Create(this,525, 476, 680, 501); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 506, 160, 531);
	m_wndPaymentMethod.Create(this,165, 506, 365, 531); 
	m_wndPaymentTermsLabel.Create(this, _T("Payment Terms"), 370, 506, 520, 531);
	m_wndPaymentTerms.Create(this,525, 506, 680, 531); 
	m_wndDeliveryMethodLabel.Create(this, _T("Delivery Method"), 10, 535, 160, 560);
	m_wndDeliveryMethod.Create(this,165, 535, 365, 560); 
	m_wndDeliveryDateLabel.Create(this, _T("Delivery Date"), 370, 535, 520, 560);
	m_wndDeliveryDate.Create(this,525, 535, 680, 560); 
	m_wndNetAmountLabel.Create(this, _T("Net Amount"), 695, 445, 845, 470);
	m_wndNetAmount.Create(this,850, 445, 1000, 470); 
	m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 695, 476, 845, 501);
	m_wndTaxesAmount.Create(this,850, 476, 1000, 501); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 695, 506, 845, 531);
	m_wndTotalAmount.Create(this,850, 506, 1000, 531); 
	m_wndTotalExchangeAmountLabel.Create(this, _T("Total Amount(GBP)"), 695, 535, 845, 560);
	m_wndTotalExchangeAmount.Create(this,850, 535, 1000, 560); 
	m_wndAdd.Create(this, _T("&Add"), 245, 570, 335, 595);
	m_wndEdit.Create(this, _T("&Edit"), 340, 570, 430, 595);
	m_wndDelete.Create(this, _T("&Delete"), 435, 570, 525, 595);
	m_wndSave.Create(this, _T("&Save"), 530, 570, 620, 595);
	m_wndDiscard.Create(this, _T("&Cancel"), 625, 570, 715, 595);
	m_wndPrint.Create(this, _T("&Print"), 720, 570, 810, 595);
	m_wndPost.Create(this, _T("Post"), 815, 570, 905, 595);
	m_wndClose.Create(this, _T("&Close"), 910, 570, 1000, 595);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 570, 95, 595);
	m_wndTab.Create(this,5, 185, 1005, 415); 


	CreateTabViews();

}
void CPurchaseOrderDialog::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	
	m_wndOrderNo.SetLimitText(15);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetCheckValue(true);
//	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(3);
	m_wndExchangeRate.SetLimitText(15);
	m_wndExchangeRate.SetCheckValue(true);
	m_wndExchangeRate.SetNumberDecimal(3);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(254);
	m_wndAddress.SetLimitText(250);
//	m_wndAddress.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
//	m_wndDescription.SetCheckValue(true);
	m_wndNetAmount.SetLimitText(16);
	m_wndNetAmount.SetReadOnly(TRUE);
//	m_wndNetAmount.SetCheckValue(true);
	m_wndNetAmount.SetCurrencyFormat(true);
	m_wndNetAmount.SetTextColor(RGB(0, 128, 192));
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetReadOnly(TRUE);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.SetTextColor(RGB(0, 128, 255));
//	m_wndTotalAmount.SetCheckValue(true);
	m_wndTaxesAmount.SetLimitText(16);
	m_wndTaxesAmount.SetReadOnly(TRUE);
	m_wndTaxesAmount.SetCurrencyFormat(true);
	m_wndTaxesAmount.SetTextColor(RGB(0, 64, 128));
//	m_wndTaxesAmount.SetCheckValue(true);
//	m_wndAddress.SetReadOnly(true);
	
	m_wndTotalExchangeAmount.SetReadOnly(TRUE);
	m_wndTotalExchangeAmount.SetCurrencyFormat(TRUE);

	m_wndDeliverer.SetInitCap(1);
	m_wndReceiver.SetInitCap(1);
	m_wndAddress.SetInitCap(0);
//	m_wndDeliveryAddress.SetInitCap(0);
	m_wndRefernece.SetInitCap(0);

	
	m_wndCurrency.Format(2, 0, 10, 1);
	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	
	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndSupplier.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);


	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndResource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResource.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndDebitAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDebitAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndCreditAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCreditAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);



	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndPaymentTerms.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPaymentTerms.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);



	m_wndDeliveryMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDeliveryMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);





	m_purchase_orderTbl.SetTableName(_T("purchase_order"));
	m_purchase_orderTbl.AddField(_T("po_purchase_order_id"), dfLong); 
	m_purchase_orderTbl.AddField(_T("po_client_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_org_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_user_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_createdby"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_updatedby"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_updateddate"), dfDateTime); 
	m_purchase_orderTbl.AddField(_T("po_doctype"), dfText, 1); 
	m_purchase_orderTbl.AddField(_T("po_orderno"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_orderdate"), dfDate); 
	m_purchase_orderTbl.AddField(_T("po_acctdate"), dfDate); 
	m_purchase_orderTbl.AddField(_T("po_currency_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_exchangerate"), dfDouble); 
	m_purchase_orderTbl.AddField(_T("po_expense_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_contract_id"), dfText, 32);
	m_purchase_orderTbl.AddField(_T("po_partner_type_id"), dfText, 3); 
	m_purchase_orderTbl.AddField(_T("po_partner_id"), dfText, 32); 
	m_purchase_orderTbl.AddField(_T("po_partneraddress"), dfText, 255); 
	m_purchase_orderTbl.AddField(_T("po_description"), dfText, 255); 
	m_purchase_orderTbl.AddField(_T("po_reference"), dfText, 255); 
	m_purchase_orderTbl.AddField(_T("po_deliveryby"), dfText, 60); 
	m_purchase_orderTbl.AddField(_T("po_receivedby"), dfText, 60); 
	m_purchase_orderTbl.AddField(_T("po_payment_method_id"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_payment_terms_id"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_delivery_method_id"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_delivery_terms_id"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_deliverydate"), dfDate); 
	m_purchase_orderTbl.AddField(_T("po_deliveryaddress"), dfText, 255);
	m_purchase_orderTbl.AddField(_T("po_storage_id"), dfInteger); 
	m_purchase_orderTbl.AddField(_T("po_resource_id"), dfInteger); 
	m_purchase_orderTbl.AddField(_T("po_creditacct"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_debitacct"), dfText, 15); 

	m_wndExchangeRate.SetCurrencyFormat(TRUE);
	m_wndExchangeRate.SetNumberDecimal(2);


	m_wndOrderDate.SetCheckValue(TRUE);
	m_wndOrderDate.SetMax(pMF->GetSysDateTime());

	m_wndAccountingDate.SetCheckValue(TRUE);
	m_wndAccountingDate.SetMax((LPCTSTR)pMF->GetSysDate());

	m_wndWarehouse.SetCheckValue(true);
	m_wndResource.SetCheckValue(true);
	m_wndDebitAcct.SetCheckValue(true);
	m_wndCreditAcct.SetCheckValue(true);

}

void CPurchaseOrderDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	//m_wndDeliverer.SetEvent(WE_CHANGE, _OnDelivererChangeFnc);
	//m_wndDeliverer.SetEvent(WE_SETFOCUS, _OnDelivererSetfocusFnc);
	//m_wndDeliverer.SetEvent(WE_KILLFOCUS, _OnDelivererKillfocusFnc);
	m_wndDeliverer.SetEvent(WE_CHECKVALUE, _OnDelivererCheckValueFnc);
	//m_wndReceiver.SetEvent(WE_CHANGE, _OnReceiverChangeFnc);
	//m_wndReceiver.SetEvent(WE_SETFOCUS, _OnReceiverSetfocusFnc);
	//m_wndReceiver.SetEvent(WE_KILLFOCUS, _OnReceiverKillfocusFnc);
	m_wndReceiver.SetEvent(WE_CHECKVALUE, _OnReceiverCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndRefernece.SetEvent(WE_CHANGE, _OnReferneceChangeFnc);
	//m_wndRefernece.SetEvent(WE_SETFOCUS, _OnReferneceSetfocusFnc);
	//m_wndRefernece.SetEvent(WE_KILLFOCUS, _OnReferneceKillfocusFnc);
	m_wndRefernece.SetEvent(WE_CHECKVALUE, _OnReferneceCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndAccountingDate.SetEvent(WE_CHANGE, _OnAccountingDateChangeFnc);
	//m_wndAccountingDate.SetEvent(WE_SETFOCUS, _OnAccountingDateSetfocusFnc);
	//m_wndAccountingDate.SetEvent(WE_KILLFOCUS, _OnAccountingDateKillfocusFnc);
	m_wndAccountingDate.SetEvent(WE_CHECKVALUE, _OnAccountingDateCheckValueFnc);
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
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	m_wndResource.SetEvent(WE_SELENDOK, _OnResourceSelendokFnc);
	//m_wndResource.SetEvent(WE_SETFOCUS, _OnResourceSetfocusFnc);
	//m_wndResource.SetEvent(WE_KILLFOCUS, _OnResourceKillfocusFnc);
	m_wndResource.SetEvent(WE_SELCHANGE, _OnResourceSelectChangeFnc);
	m_wndResource.SetEvent(WE_LOADDATA, _OnResourceLoadDataFnc);
	//m_wndResource.SetEvent(WE_ADDNEW, _OnResourceAddNewFnc);
	m_wndDebitAcct.SetEvent(WE_SELENDOK, _OnDebitAcctSelendokFnc);
	//m_wndDebitAcct.SetEvent(WE_SETFOCUS, _OnDebitAcctSetfocusFnc);
	//m_wndDebitAcct.SetEvent(WE_KILLFOCUS, _OnDebitAcctKillfocusFnc);
	m_wndDebitAcct.SetEvent(WE_SELCHANGE, _OnDebitAcctSelectChangeFnc);
	m_wndDebitAcct.SetEvent(WE_LOADDATA, _OnDebitAcctLoadDataFnc);
	//m_wndDebitAcct.SetEvent(WE_ADDNEW, _OnDebitAcctAddNewFnc);
	m_wndCreditAcct.SetEvent(WE_SELENDOK, _OnCreditAcctSelendokFnc);
	//m_wndCreditAcct.SetEvent(WE_SETFOCUS, _OnCreditAcctSetfocusFnc);
	//m_wndCreditAcct.SetEvent(WE_KILLFOCUS, _OnCreditAcctKillfocusFnc);
	m_wndCreditAcct.SetEvent(WE_SELCHANGE, _OnCreditAcctSelectChangeFnc);
	m_wndCreditAcct.SetEvent(WE_LOADDATA, _OnCreditAcctLoadDataFnc);
	//m_wndCreditAcct.SetEvent(WE_ADDNEW, _OnCreditAcctAddNewFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	m_wndPaymentTerms.SetEvent(WE_SELENDOK, _OnPaymentTermsSelendokFnc);
	//m_wndPaymentTerms.SetEvent(WE_SETFOCUS, _OnPaymentTermsSetfocusFnc);
	//m_wndPaymentTerms.SetEvent(WE_KILLFOCUS, _OnPaymentTermsKillfocusFnc);
	m_wndPaymentTerms.SetEvent(WE_SELCHANGE, _OnPaymentTermsSelectChangeFnc);
	m_wndPaymentTerms.SetEvent(WE_LOADDATA, _OnPaymentTermsLoadDataFnc);
	//m_wndPaymentTerms.SetEvent(WE_ADDNEW, _OnPaymentTermsAddNewFnc);
	m_wndDeliveryMethod.SetEvent(WE_SELENDOK, _OnDeliveryMethodSelendokFnc);
	//m_wndDeliveryMethod.SetEvent(WE_SETFOCUS, _OnDeliveryMethodSetfocusFnc);
	//m_wndDeliveryMethod.SetEvent(WE_KILLFOCUS, _OnDeliveryMethodKillfocusFnc);
	m_wndDeliveryMethod.SetEvent(WE_SELCHANGE, _OnDeliveryMethodSelectChangeFnc);
	m_wndDeliveryMethod.SetEvent(WE_LOADDATA, _OnDeliveryMethodLoadDataFnc);
	//m_wndDeliveryMethod.SetEvent(WE_ADDNEW, _OnDeliveryMethodAddNewFnc);
	//m_wndDeliveryDate.SetEvent(WE_CHANGE, _OnDeliveryDateChangeFnc);
	//m_wndDeliveryDate.SetEvent(WE_SETFOCUS, _OnDeliveryDateSetfocusFnc);
	//m_wndDeliveryDate.SetEvent(WE_KILLFOCUS, _OnDeliveryDateKillfocusFnc);
	m_wndDeliveryDate.SetEvent(WE_CHECKVALUE, _OnDeliveryDateCheckValueFnc);
	//m_wndDeliveryAddress.SetEvent(WE_CHANGE, _OnDeliveryAddressChangeFnc);
	//m_wndDeliveryAddress.SetEvent(WE_SETFOCUS, _OnDeliveryAddressSetfocusFnc);
	//m_wndDeliveryAddress.SetEvent(WE_KILLFOCUS, _OnDeliveryAddressKillfocusFnc);
	//m_wndDeliveryAddress.SetEvent(WE_CHECKVALUE, _OnDeliveryAddressCheckValueFnc);
	//m_wndNetAmount.SetEvent(WE_CHANGE, _OnNetAmountChangeFnc);
	//m_wndNetAmount.SetEvent(WE_SETFOCUS, _OnNetAmountSetfocusFnc);
	//m_wndNetAmount.SetEvent(WE_KILLFOCUS, _OnNetAmountKillfocusFnc);
	m_wndNetAmount.SetEvent(WE_CHECKVALUE, _OnNetAmountCheckValueFnc);
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
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);


	int nMode = GetMode();

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
	szLabel.Format(_T("%s (%s)"), tmpStr, pMF->m_szDefaultCurrency);
	m_wndTotalExchangeAmountLabel.SetWindowText(szLabel);

	
}
void CPurchaseOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDeliverer);
	DDX_Text(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiver);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndRefernece.GetDlgCtrlID(), m_szRefernece);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchangeRate.GetDlgCtrlID(), m_nExchangeRate);
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndResource.GetDlgCtrlID(), m_szResourceKey);
	DDX_TextEx(pDX, m_wndDebitAcct.GetDlgCtrlID(), m_szDebitAcctKey);
	DDX_TextEx(pDX, m_wndCreditAcct.GetDlgCtrlID(), m_szCreditAcctKey);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndPaymentTerms.GetDlgCtrlID(), m_szPaymentTermsKey);
	DDX_TextEx(pDX, m_wndDeliveryMethod.GetDlgCtrlID(), m_szDeliveryMethodKey);
	DDX_TextEx(pDX, m_wndDeliveryDate.GetDlgCtrlID(), m_szDeliveryDate);
//	DDX_Text(pDX, m_wndDeliveryAddress.GetDlgCtrlID(), m_szDeliveryAddress);
	DDX_Text(pDX, m_wndNetAmount.GetDlgCtrlID(), m_nNetAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndTotalExchangeAmount.GetDlgCtrlID(), m_nTotalExchangeAmount);

}
void CPurchaseOrderDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * ") \
	_T(" FROM purchase_order ") \
	_T("WHERE po_purchase_order_id=%ld  ") \
	_T(" and po_doctype='%s' and po_org_id IN('GL','EM','TM','LIMS','PACS','%s') "), 
		m_nID, m_szType, pMF->GetModuleID());
//Notice(szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("po_orderno"), m_szOrderNo);
		rs.GetValue(_T("po_orderdate"), m_szOrderDate);
		rs.GetValue(_T("po_acctdate"), m_szAccountingDate);

		rs.GetValue(_T("po_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("po_exchangerate"), m_nExchangeRate);
		rs.GetValue(_T("po_partner_id"), m_szSupplierKey);
		rs.GetValue(_T("po_partneraddress"), m_szAddress);
		
		rs.GetValue(_T("po_status"), m_szStatus);
		rs.GetValue(_T("po_netamount"), m_nNetAmount);
		rs.GetValue(_T("po_taxamount"), m_nTaxesAmount);
		rs.GetValue(_T("po_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("po_exchangeamount"), m_nTotalExchangeAmount);
		rs.GetValue(_T("po_posted"), m_szPosted);
		rs.GetValue(_T("po_deliveryby"), m_szDeliverer);
		rs.GetValue(_T("po_receivedby"), m_szReceiver);
		rs.GetValue(_T("po_reference"), m_szRefernece);
		rs.GetValue(_T("po_description"), m_szDescription);
		rs.GetValue(_T("po_payment_method_id"), m_szPaymentMethodKey);
		rs.GetValue(_T("po_payment_terms_id"), m_szPaymentTermsKey);
		rs.GetValue(_T("po_delivery_method_id"), m_szDeliveryMethodKey);
		rs.GetValue(_T("po_deliverydate"), m_szDeliveryDate);
		rs.GetValue(_T("po_deliveryaddress"), m_szDeliveryAddress);
		rs.GetValue(_T("po_tax_id"), m_nTaxID);
		rs.GetValue(_T("po_storage_id"), m_szWarehouseKey);
		rs.GetValue(_T("po_resource_id"), m_szResourceKey);
		rs.GetValue(_T("po_debitacct"), m_szDebitAcctKey);
		rs.GetValue(_T("po_creditacct"), m_szCreditAcctKey);
		m_nStorageID = str2int(m_szWarehouseKey);
		

		m_wndLines.m_nStorageID = m_nStorageID;
		m_wndLines.m_nTaxID = m_nTaxID;
		m_wndLines.Refresh(m_nID);
	}

}

void CPurchaseOrderDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	
	m_purchase_orderTbl.SetValue(_T("po_createdby"), pMF->GetCurrentUser());

	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE po_purchase_order_id=%ld "), m_nID);
		m_purchase_orderTbl.Open(&pMF->m_db, szWhere);
	}
	m_purchase_orderTbl.SetValue(_T("po_client_id"), _T(""));
	m_purchase_orderTbl.SetValue(_T("po_user_id"), pMF->GetCurrentUser());
	m_purchase_orderTbl.SetValue(_T("po_org_id"), pMF->GetModuleID());
	m_purchase_orderTbl.SetValue(_T("po_updatedby"), pMF->GetCurrentUser());
	m_purchase_orderTbl.SetValue(_T("po_updateddate"), pMF->GetSysDateTime());
	m_purchase_orderTbl.SetValue(_T("po_doctype"), m_szType);
	m_purchase_orderTbl.SetValue(_T("po_orderno"), m_szOrderNo);
	m_purchase_orderTbl.SetValue(_T("po_orderdate"), m_szOrderDate);
	m_purchase_orderTbl.SetValue(_T("po_acctdate"), m_szAccountingDate);
	m_purchase_orderTbl.SetValue(_T("po_currency_id"), m_szCurrencyKey);
	
	if(m_szCurrencyKey == pMF->m_szDefaultCurrency)
		m_nExchangeRate = 1;
	UpdateControlData(&m_wndExchangeRate, m_nExchangeRate, FALSE);


	m_purchase_orderTbl.SetValue(_T("po_exchangerate"), m_nExchangeRate);
	m_purchase_orderTbl.SetValue(_T("po_partner_type_id"), m_szSupplierTypeKey);
	m_purchase_orderTbl.SetValue(_T("po_partner_id"), m_szSupplierKey);
	m_purchase_orderTbl.SetValue(_T("po_partneraddress"), m_szAddress);
	m_purchase_orderTbl.SetValue(_T("po_deliveryby"), m_szDeliverer);
	m_purchase_orderTbl.SetValue(_T("po_receivedby"), m_szReceiver);
	m_purchase_orderTbl.SetValue(_T("po_payment_method_id"), m_szPaymentMethodKey);
	m_purchase_orderTbl.SetValue(_T("po_payment_terms_id"), m_szPaymentTermsKey);
	m_purchase_orderTbl.SetValue(_T("po_delivery_method_id"), m_szDeliveryMethodKey);
	m_purchase_orderTbl.SetValue(_T("po_deliverydate"), m_szDeliveryDate);
	m_purchase_orderTbl.SetValue(_T("po_deliveryaddress"), m_szDeliveryAddress);
	m_purchase_orderTbl.SetValue(_T("po_reference"), m_szRefernece);
	m_purchase_orderTbl.SetValue(_T("po_description"), m_szDescription);
	m_purchase_orderTbl.SetValue(_T("po_storage_id"), m_szWarehouseKey);
	m_purchase_orderTbl.SetValue(_T("po_resource_id"), m_szResourceKey);
	m_purchase_orderTbl.SetValue(_T("po_debitacct"), m_szDebitAcctKey);
	m_purchase_orderTbl.SetValue(_T("po_creditacct"), m_szCreditAcctKey);

}

void CPurchaseOrderDialog::SetDefaultValues(){

	//m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_nExchangeRate=1;
	m_szSupplierKey.Empty();
	m_szDeliverer.Empty();
	m_szReceiver.Empty();
	m_szAddress.Empty();
	m_szDescription.Empty();
	m_szRefernece.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szAccountingDate.Empty();
	m_szCurrencyKey.Empty();
	m_nExchangeRate=0;
	m_szWarehouseKey.Empty();
	m_szResourceKey.Empty();
	m_szDebitAcctKey.Empty();
	m_szCreditAcctKey.Empty();
	m_szPaymentMethodKey.Empty();
	m_szPaymentTermsKey.Empty();
	m_szDeliveryMethodKey.Empty();
	m_szDeliveryDate.Empty();
	m_szDeliveryAddress.Empty();
	m_nNetAmount=0;
	m_nTaxesAmount=0;
	m_nTotalAmount=0;
	m_nTotalExchangeAmount = 0;
	m_szStatus=_T("O");
	m_szPosted = _T("N");
}

int CPurchaseOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL;
		CString tmpStr;
 		CRecord rs(&pMF->m_db); 

		

  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_szOrderDate =  pMF->GetSysDate();
			szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_NO','N') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szAccountingDate= m_szOrderDate;
			m_szDeliveryDate = m_szOrderDate;
			m_szCurrencyKey = pMF->m_szDefaultCurrency;
			m_wndSupplier.SetFocus();
			m_wndLines.m_nOrderID = -1;
			m_wndLines.m_nOrderLine = -1;
			m_wndLines.m_nStorageID = 0;
			m_wndLines.Refresh(-1);
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
			TranslateString(_T("Unpos"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}
		else
		{
			TranslateString(_T("Post"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);

		}

		if(!pMF->IsMultipleCurrency()){
			m_wndCurrency.EnableWindow(FALSE);
			m_wndExchangeRate.EnableWindow(FALSE);
			m_nExchangeRate = 1;
		}
		
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

void CPurchaseOrderDialog::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialog::OnSupplierSelendok(){
	 
}
/*void CPurchaseOrderDialog::OnSupplierSetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnSupplierKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and adp_issupplier='Y' "));

	pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey, _T(""));
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
/*void CPurchaseOrderDialog::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDialog::OnDelivererChange(){
	
} */
/*void CPurchaseOrderDialog::OnDelivererSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnContactNameKillfocus(){
	
} */
int CPurchaseOrderDialog::OnDelivererCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnReceiverChange(){
	
} */
/*void CPurchaseOrderDialog::OnReceiverSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnReceiverKillfocus(){
	
} */
int CPurchaseOrderDialog::OnReceiverCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnAddressChange(){
	
} */
/*void CPurchaseOrderDialog::OnAddressSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnAddressKillfocus(){
	
} */
int CPurchaseOrderDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnDescriptionChange(){
	
} */
/*void CPurchaseOrderDialog::OnDescriptionSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnDescriptionKillfocus(){
	
} */
int CPurchaseOrderDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnReferneceChange(){
	
} */
/*void CPurchaseOrderDialog::OnReferneceSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnReferneceKillfocus(){
	
} */
int CPurchaseOrderDialog::OnReferneceCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnOrderNoChange(){
	
} */
/*void CPurchaseOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnOrderNoKillfocus(){
	
} */
int CPurchaseOrderDialog::OnOrderNoCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return 0;
	
	szWhere.Empty();
	if(GetMode() == VM_EDIT)
		szWhere.Format(_T(" and po_purchase_order_id<> %ld "), m_nID);

	szWhere.AppendFormat(_T(" and trunc_date(sysdate, 'year')=trunc_date(po_orderdate, 'year') "));

	szSQL.Format(_T("SELECT count(*) FROM purchase_order WHERE po_orderno='%s'  %s "), m_szOrderNo, szWhere);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}
	return 0;
} 
/*void CPurchaseOrderDialog::OnOrderDateChange(){
	
} */
/*void CPurchaseOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnOrderDateKillfocus(){
	
} */
int CPurchaseOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnAccountingDateChange(){
	
} */
/*void CPurchaseOrderDialog::OnAccountingDateSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnAccountingDateKillfocus(){
	
} */
int CPurchaseOrderDialog::OnAccountingDateCheckValue(){
	return 0;
} 
void CPurchaseOrderDialog::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CPurchaseOrderDialog::OnCurrencySelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateControlData(&m_wndCurrency, m_szCurrencyKey, TRUE);
	if(m_szCurrencyKey == pMF->m_szDefaultCurrency)
		m_nExchangeRate = 1;
	UpdateControlData(&m_wndExchangeRate, m_nExchangeRate, FALSE);
}

/*void CPurchaseOrderDialog::OnCurrencySetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnCurrencyKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnCurrencyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCurrencyList(&m_wndCurrency, m_szCurrencyKey);

	
}

/*void CPurchaseOrderDialog::OnCurrencyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDialog::OnExchangeRateChange(){
	
} */
/*void CPurchaseOrderDialog::OnExchangeRateSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnExchangeRateKillfocus(){
	
} */
int CPurchaseOrderDialog::OnExchangeRateCheckValue(){
	if(m_nExchangeRate <= 0)
	{
		m_nExchangeRate = 1;
	}
	return 0;
} 
void CPurchaseOrderDialog::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialog::OnWarehouseSelendok(){
	 
}
/*void CPurchaseOrderDialog::OnWarehouseSetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnWarehouseKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnWarehouseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndWarehouse, m_szWarehouseKey, _T(""));

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szWarehouseKey
};
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialog::OnWarehouseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialog::OnResourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialog::OnResourceSelendok(){
	 
}
/*void CPurchaseOrderDialog::OnResourceSetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnResourceKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnResourceLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadResourceList(&m_wndResource, m_szResourceKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResource.IsSearchKey() && !m_szResourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szResourceKey
};
	m_wndResource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialog::OnResourceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialog::OnDebitAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialog::OnDebitAcctSelendok(){
	 
}
/*void CPurchaseOrderDialog::OnDebitAcctSetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnDebitAcctKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnDebitAcctLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndDebitAcct, m_szDebitAcctKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDebitAcct.IsSearchKey() && !m_szDebitAcctKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDebitAcctKey
};
	m_wndDebitAcct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDebitAcct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialog::OnDebitAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialog::OnCreditAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialog::OnCreditAcctSelendok(){
	 
}
/*void CPurchaseOrderDialog::OnCreditAcctSetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnCreditAcctKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnCreditAcctLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndCreditAcct, m_szCreditAcctKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCreditAcct.IsSearchKey() && !m_szCreditAcctKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCreditAcctKey
};
	m_wndCreditAcct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCreditAcct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialog::OnCreditAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialog::OnPaymentMethodSelendok(){
	 
}
/*void CPurchaseOrderDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnPaymentMethodKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnPaymentMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPaymentMethodList(&m_wndPaymentMethod, m_szPaymentMethodKey);
	
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialog::OnPaymentMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialog::OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderDialog::OnPaymentTermsSelendok(){
	 
}

/*void CPurchaseOrderDialog::OnPaymentTermsSetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnPaymentTermsKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnPaymentTermsLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPaymentTermList(&m_wndPaymentTerms, m_szPaymentTermsKey);
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

/*void CPurchaseOrderDialog::OnPaymentTermsAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialog::OnDeliveryMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialog::OnDeliveryMethodSelendok(){
	 
}
/*void CPurchaseOrderDialog::OnDeliveryMethodSetfocus(){
	
}*/
/*void CPurchaseOrderDialog::OnDeliveryMethodKillfocus(){
	
}*/
long CPurchaseOrderDialog::OnDeliveryMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadDeliveryMethodList(&m_wndDeliveryMethod, m_szDeliveryMethodKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeliveryMethod.IsSearchKey() && !m_szDeliveryMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeliveryMethodKey
};
	m_wndDeliveryMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeliveryMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialog::OnDeliveryMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDialog::OnDeliveryDateChange(){
	
} */
/*void CPurchaseOrderDialog::OnDeliveryDateSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnDeliveryDateKillfocus(){
	
} */
int CPurchaseOrderDialog::OnDeliveryDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnDeliveryAddressChange(){
	
} */
/*void CPurchaseOrderDialog::OnDeliveryAddressSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnDeliveryAddressKillfocus(){
	
} */
int CPurchaseOrderDialog::OnDeliveryAddressCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnNetAmountChange(){
	
} */
/*void CPurchaseOrderDialog::OnNetAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnNetAmountKillfocus(){
	
} */
int CPurchaseOrderDialog::OnNetAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnTaxesAmountChange(){
	
} */
/*void CPurchaseOrderDialog::OnTaxesAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnTaxesAmountKillfocus(){
	
} */
int CPurchaseOrderDialog::OnTaxesAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnTotalAmountChange(){
	
} */
/*void CPurchaseOrderDialog::OnTotalAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnTotalAmountKillfocus(){
	
} */
int CPurchaseOrderDialog::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialog::OnTotalExchangeAmountChange(){
	
} */
/*void CPurchaseOrderDialog::OnTotalExchangeAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialog::OnTotalExchangeAmountKillfocus(){
	
} */
int CPurchaseOrderDialog::OnTotalExchangeAmountCheckValue(){
	return 0;
}
 
void CPurchaseOrderDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddPurchaseOrderDialog();
}
 
void CPurchaseOrderDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditPurchaseOrderDialog();
}
 
void CPurchaseOrderDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderDialog();
}
 
void CPurchaseOrderDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePurchaseOrderDialog();
}
 
void CPurchaseOrderDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardPurchaseOrderDialog();
}
 
void CPurchaseOrderDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPrintForms printer;
	CString szVoucherNo = m_szOrderNo;
	CString szLabel;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	//menu.AppendMenu(MF_BYPOSITION, 1, _T("Print I/E Order"));
	//menu.AppendMenu(MF_BYPOSITION, 2, _T("Print Test Report"));
	//menu.AppendMenu(MF_BYPOSITION, 3, _T("Print Purchase List"));
	//menu.AppendMenu(MF_BYPOSITION, 4, _T("Print Material Report"));
	//menu.AppendMenu(MF_BYPOSITION, 5, _T("Print Material Remain"));
	//menu.AppendMenu(MF_BYPOSITION, 6, _T("Print Distribution"));
	TranslateString(_T("Print Purchase Order"), szLabel);
	menu.AppendMenu(MF_BYPOSITION, 7, szLabel);
	TranslateString(_T("Print Checkin"), szLabel);
	menu.AppendMenu(MF_BYPOSITION, 8, szLabel);
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret){
	case 1:
		printer.PrintIESheet(szVoucherNo, _T("I"), m_szOrderDate.Left(10));
		break;
	case 2:
		printer.PrintTestReport();
		break;
	case 3:
		printer.PrintPurchaseList();
		break;
	case 4:
		printer.PrintMaterialReport();
		break;
	case 5:
		printer.PrintMaterialRemain();
		break;
	case 6:
		printer.PrintDistribution();
		break;
	case 7:
		printer.PrintPurchaseOrder(m_nID);
		break;
	case 8:
		printer.PrintCheckinPurchaseOrder(m_nID);
		break;
	}
}
 
void CPurchaseOrderDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("O"))
		return;
	
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDNO)
		return;

	szSQL.Format(_T("PURCHASE_ORDER_APPROVAL(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		CString tmpStr;
		RecalcAmount();
		if(m_szStatus != _T("O")){
			TranslateString(_T("Unpost"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}
		else
		{
			TranslateString(_T("Post"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);

		}

	}
	else
	{
		ShowMessageBox(_T("Cannot post purchase order"));
	}
}
 
void CPurchaseOrderDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
void CPurchaseOrderDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.m_nStorageID = m_nStorageID;
	m_wndLines.m_nTaxID = m_nTaxID;
	m_wndLines.OnListAddItem();
/*
	CRect rect;
	m_wndTerms.GetWindowRect(&rect);
	CPurchaseOrderLineInput dlg(this, VM_ADD, rect.left, rect.top);
	dlg.m_nOrderID = m_nID;
	dlg.m_nStorageID = m_nStorageID;
	dlg.m_nTaxID = m_nTaxID;
		
	if(dlg.DoModal() == IDOK){

	}
*/
}
 
void CPurchaseOrderDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseOrderDialog::OnAddPurchaseOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPurchaseOrderDialog::OnEditPurchaseOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CPurchaseOrderDialog::OnDeletePurchaseOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
	
 	if(ShowMessageBox(_T("Do you want to delete order?(Y/N"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("PURCHASE_ORDER_DELETE(%ld, '%s', '%s') "), m_nID, pMF->GetModuleID(), pMF->GetCurrentUser()); 
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
 		OnDiscardPurchaseOrderDialog(); 
 	}
	else
	{
		ShowMessageBox(_T("Can not delete order"));
	}
	return 0;
}

int CPurchaseOrderDialog::OnSavePurchaseOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	m_wndOrderDate.SetMax(pMF->GetSysDateTime());
//	m_wndAccountingDate.SetMax(pMF->GetSysDate());
 	if(!IsValidateData()) 
 		return -1; 

 	CString szSQL; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("purchase_order_create(%s) "), m_purchase_orderTbl.FormatSQL());
	else
		szSQL.Format(_T("purchase_order_update(%s) "),  m_purchase_orderTbl.FormatSQL());
 
 //Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_ID_ASQ','Y') "));
		m_nID = str2long(pMF->ExecDML(szSQL));
		//_msg(_T("%s %ld"), szSQL, m_nID);
		if(m_nID <= 0) return -1;
		m_purchase_orderTbl.SetValue(_T("po_purchase_order_id"), m_nID);
		szSQL.Format(_T("%s"), m_purchase_orderTbl.GetInsertSQL());
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE po_purchase_order_id=%ld"), m_nID);

		szSQL = m_purchase_orderTbl.GetUpdateSQL(_T("po_purchase_order_id"));
		szSQL.AppendFormat(_T(" %s"), szWhere);

	}
//Notice(szSQL);
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
 	{ 

		
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);

		}
		else{
			szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
//			_msg(_T("%s"), m_szOrderNo);
			GetDataToScreen();
			SetMode(VM_VIEW);
			m_wndAddLine.SetFocus();
		}
		return 1;
 	} 
 	return -1; 
}

int CPurchaseOrderDialog::OnDiscardPurchaseOrderDialog(){
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
 
int CPurchaseOrderDialog::OnPurchaseOrderDialogListLoadData(){
	return 0;
}


void CPurchaseOrderDialog::CreateTabViews(){
	m_wndLines.m_pWndOrder = this;
	m_wndLines.Create(&m_wndTab);
	m_wndLines.OnInitDialog();
	m_wndTab.Add(_T("Items"), &m_wndLines);
//	m_wndTab.Add(_T("Tax"), NULL);
//	m_wndTab.Add(_T("Basic Discounts"), NULL);

	
	m_wndTab.SetCurSel(0);
}

void CPurchaseOrderDialog::RecalcAmount(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT po_status, po_netamount, po_taxamount, po_disamount, po_totalamount, po_exchangeamount ") \
		_T("FROM purchase_order ") \
		_T("WHERE po_Purchase_order_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("po_netamount"), m_nNetAmount);
		rs.GetValue(_T("po_taxamount"), m_nTaxesAmount);
		rs.GetValue(_T("po_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("po_exchangeamount"), m_nTotalExchangeAmount);
		rs.GetValue(_T("po_status"), m_szStatus);

	}
	else
	{
		m_nNetAmount = 0;
		m_nTaxesAmount = 0;
		m_nTotalAmount = 0;
		m_nTotalExchangeAmount = 0;
		m_szStatus = _T("O");
	}
	UpdateData(FALSE);
}
