#include "PurchaseOrderDialogEx.h"
#include "MainFrame_E10.h"
#include "PrintForms.h"
#include "PurchaseOrderLineInput.h"
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnDelivererCheckValue();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnReceiverCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnReferneceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReferneceChange();
} */
/*static void _OnReferneceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReferneceSetfocus();} */ 
/*static void _OnReferneceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnReferneceKillfocus();
} */
static int _OnReferneceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnReferneceCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnApprovedDateCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnExchangeRateCheckValue();
} 


static void _OnVATSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnVATSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVATSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnVATSelendok();
}
/*static void _OnVATSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnVATKillfocus();
}*/
/*static void _OnVATKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnVATKillfocus();
}*/
static long _OnVATLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnVATLoadData();
}
/*static void _OnVATAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnVATAddNew();
}*/


/*
static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalLinesChange();

} */

/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnTotalLinesCheckValue();
} 

static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnResourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnResourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResourceSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnResourceSelendok();
}
/*static void _OnResourceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnResourceKillfocus();
}*/
/*static void _OnResourceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnResourceKillfocus();
}*/
static long _OnResourceLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnResourceLoadData();
}
/*static void _OnResourceAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnResourceAddNew();
}*/
static void _OnDebitAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnDebitAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAcctSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDebitAcctSelendok();
}
/*static void _OnDebitAcctSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDebitAcctKillfocus();
}*/
/*static void _OnDebitAcctKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDebitAcctKillfocus();
}*/
static long _OnDebitAcctLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnDebitAcctLoadData();
}
/*static void _OnDebitAcctAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDebitAcctAddNew();
}*/
static void _OnCreditAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnCreditAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAcctSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnCreditAcctSelendok();
}
/*static void _OnCreditAcctSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnCreditAcctKillfocus();
}*/
/*static void _OnCreditAcctKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnCreditAcctKillfocus();
}*/
static long _OnCreditAcctLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnCreditAcctLoadData();
}
/*static void _OnCreditAcctAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnCreditAcctAddNew();
}*/
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnPaymentTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnPaymentTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTermsSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnPaymentTermsSelendok();
}
/*static void _OnPaymentTermsSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnPaymentTermsKillfocus();
}*/
/*static void _OnPaymentTermsKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnPaymentTermsKillfocus();
}*/
static long _OnPaymentTermsLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnPaymentTermsLoadData();
}
/*static void _OnPaymentTermsAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnPaymentTermsAddNew();
}*/
static void _OnDeliveryMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDialogEx* )pWnd)->OnDeliveryMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryMethodSelendok();
}
/*static void _OnDeliveryMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryMethodKillfocus();
}*/
/*static void _OnDeliveryMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryMethodKillfocus();
}*/
static long _OnDeliveryMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryMethodLoadData();
}
/*static void _OnDeliveryMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryMethodAddNew();
}*/
/*static void _OnDeliveryDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryDateChange();
} */
/*static void _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryDateSetfocus();} */ 
/*static void _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryDateCheckValue();
} 
/*static void _OnDeliveryAddressChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryAddressChange();
} */
/*static void _OnDeliveryAddressSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryAddressSetfocus();} */ 
/*static void _OnDeliveryAddressKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryAddressKillfocus();
} */
static int _OnDeliveryAddressCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnDeliveryAddressCheckValue();
} 
/*static void _OnNetAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnNetAmountChange();
} */
/*static void _OnNetAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnNetAmountSetfocus();} */ 
/*static void _OnNetAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnNetAmountKillfocus();
} */
static int _OnNetAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnNetAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnTotalExchangeAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalExchangeAmountChange();
} */
/*static void _OnTotalExchangeAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalExchangeAmountSetfocus();} */ 
/*static void _OnTotalExchangeAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDialogEx *)pWnd)->OnTotalExchangeAmountKillfocus();
} */
static int _OnTotalExchangeAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDialogEx *)pWnd)->OnTotalExchangeAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CPurchaseOrderDialogEx *pVw = (CPurchaseOrderDialogEx *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPurchaseOrderDialogEx*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddPurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnAddPurchaseOrderDialog();
} 
static int _OnEditPurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnEditPurchaseOrderDialog();
} 
static int _OnDeletePurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnDeletePurchaseOrderDialog();
} 
static int _OnSavePurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnSavePurchaseOrderDialog();
} 
static int _OnDiscardPurchaseOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDialogEx*)pWnd)->OnDiscardPurchaseOrderDialog();
} 
CPurchaseOrderDialogEx::CPurchaseOrderDialogEx(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("POO");

	SetWindowName(_T("PurchaseOrderDialogEx"));
}
CPurchaseOrderDialogEx::~CPurchaseOrderDialogEx(){
}
void CPurchaseOrderDialogEx::OnCreateComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndOrderDate.EnableCalendar(true);
	m_wndApprovedDate.EnableCalendar(true);
	m_wndSupplierInformation.Create(this, _T("General Information"), 5, 5, 685, 150);
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 690, 5, 1005, 150);
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 10, 30, 160, 55);
	m_wndWarehouse.Create(this,165, 30, 360, 55); 
	m_wndResourceLabel.Create(this, _T("Resource"), 365, 30, 470, 55);
	m_wndResource.Create(this,475, 30, 680, 56); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 160, 85);
	m_wndSupplier.Create(this,165, 60, 680, 85); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 90, 160, 115);
	m_wndDeliverer.Create(this,165, 90, 360, 115); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 365, 90, 470, 115);
	m_wndReceiver.Create(this,475, 90, 680, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 160, 145);
	m_wndDescription.Create(this,165, 120, 680, 145); 
	m_wndOrderNoLabel.Create(this, _T("Invoice No"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("Invoice Date"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndApprovedDateLabel.Create(this, _T("Import Date"), 695, 90, 845, 115);
	m_wndApprovedDate.Create(this,850, 90, 1000, 115); 
	m_wndVATLabel.Create(this, _T("VAT"), 695, 120, 845, 145);
	m_wndVAT.Create(this,850, 120, 1000, 145); 
	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 5, 545, 130, 570);
	m_wndTotalLines.Create(this,135, 545, 220, 570); 
	m_wndNetAmountLabel.Create(this, _T("Net Amount"), 225, 545, 350, 570);
	m_wndNetAmount.Create(this,355, 545, 480, 570); 
	m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 485, 545, 610, 570);
	m_wndTaxesAmount.Create(this,615, 545, 740, 570); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 745, 545, 870, 570);
	m_wndTotalAmount.Create(this,875, 545, 1000, 570); 
	m_wndAdd.Create(this, _T("&Add"), 250, 575, 340, 600);
	m_wndEdit.Create(this, _T("&Edit"), 345, 575, 435, 600);
	m_wndDelete.Create(this, _T("&Delete"), 440, 575, 530, 600);
	m_wndSave.Create(this, _T("&Save"), 535, 575, 625, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 630, 575, 720, 600);
	m_wndPrint.Create(this, _T("&Print"), 725, 575, 815, 600);
	m_wndPost.Create(this, _T("Post"), 820, 575, 910, 600);
	m_wndClose.Create(this, _T("&Close"), 915, 575, 1005, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndTab.Create(this,5, 150, 1005, 540); 
	
	CreateTabViews();

}
void CPurchaseOrderDialogEx::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	
	m_wndOrderNo.SetLimitText(15);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetCheckValue(true);
//	m_wndOrderDate.SetReadOnly(TRUE);

	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(254);
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
	
	m_wndDeliverer.SetInitCap(1);
	m_wndReceiver.SetInitCap(1);
	m_wndVAT.SetCheckValue(TRUE);
	
	m_wndVAT.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndVAT.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTotalLines.SetLimitText(16);
	m_wndTotalLines.SetCheckValue(true);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndSupplier.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);


	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndResource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResource.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);



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
	m_purchase_orderTbl.AddField(_T("po_tax_id"), dfInteger); 
	m_purchase_orderTbl.AddField(_T("po_creditacct"), dfText, 15); 
	m_purchase_orderTbl.AddField(_T("po_debitacct"), dfText, 15); 

	m_wndOrderDate.SetCheckValue(TRUE);
	m_wndOrderDate.SetMax((LPCTSTR)pMF->GetSysDate());

	m_wndApprovedDate.SetReadOnly(true);

	m_wndWarehouse.SetCheckValue(true);
	m_wndResource.SetCheckValue(true);
}

void CPurchaseOrderDialogEx::OnSetWindowEvents(){
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
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);

	//m_wndVAT.SetEvent(WE_SETFOCUS, _OnVATSetfocusFnc);
	//m_wndVAT.SetEvent(WE_KILLFOCUS, _OnVATKillfocusFnc);
	m_wndVAT.SetEvent(WE_SELCHANGE, _OnVATSelectChangeFnc);
	m_wndVAT.SetEvent(WE_LOADDATA, _OnVATLoadDataFnc);
	//m_wndVAT.SetEvent(WE_ADDNEW, _OnVATAddNewFnc);

	//m_wndTotalLines.SetEvent(WE_CHANGE, _OnTotalLinesChangeFnc);
	//m_wndTotalLines.SetEvent(WE_SETFOCUS, _OnTotalLinesSetfocusFnc);
	//m_wndTotalLines.SetEvent(WE_KILLFOCUS, _OnTotalLinesKillfocusFnc);
	m_wndTotalLines.SetEvent(WE_CHECKVALUE, _OnTotalLinesCheckValueFnc);

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

	

	
}
void CPurchaseOrderDialogEx::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDeliverer);
	DDX_Text(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiver);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_TextEx(pDX, m_wndVAT.GetDlgCtrlID(), m_szVATKey);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndResource.GetDlgCtrlID(), m_szResourceKey);

	DDX_Text(pDX, m_wndNetAmount.GetDlgCtrlID(), m_nNetAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CPurchaseOrderDialogEx::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * ") \
	_T(" FROM purchase_order ") \
	_T("WHERE po_purchase_order_id=%ld  ") \
	_T(" and po_doctype='%s' and po_org_id IN('GL','EM','TM','LIMS','PACS','%s') "), 
		m_nID, m_szType, pMF->GetModuleID());
Notice(szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("po_orderno"), m_szOrderNo);
		rs.GetValue(_T("po_orderdate"), m_szOrderDate);
		rs.GetValue(_T("po_acctdate"), m_szApprovedDate);

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
		rs.GetValue(_T("po_tax_id"), m_szVATKey);
		rs.GetValue(_T("po_storage_id"), m_szWarehouseKey);
		rs.GetValue(_T("po_resource_id"), m_szResourceKey);
		rs.GetValue(_T("po_debitacct"), m_szDebitAcctKey);
		rs.GetValue(_T("po_creditacct"), m_szCreditAcctKey);

		m_wndLines.Refresh(m_nID);
	//	m_wndVAT.ModifyStyle(WS_TABSTOP, 0);
	}

}

void CPurchaseOrderDialogEx::GetScreenToData(){
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
	m_purchase_orderTbl.SetValue(_T("po_acctdate"), m_szApprovedDate);
	m_purchase_orderTbl.SetValue(_T("po_currency_id"), m_szCurrencyKey);
	
	if(m_szCurrencyKey == pMF->m_szDefaultCurrency)
		m_nExchangeRate = 1;


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
	m_purchase_orderTbl.SetValue(_T("po_tax_id"), m_szVATKey);
	m_purchase_orderTbl.SetValue(_T("po_debitacct"), m_szDebitAcctKey);
	m_purchase_orderTbl.SetValue(_T("po_creditacct"), m_szCreditAcctKey);

}

void CPurchaseOrderDialogEx::SetDefaultValues(){

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
	m_szApprovedDate.Empty();
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

int CPurchaseOrderDialogEx::SetMode(int nMode){
	
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
			m_szApprovedDate= m_szOrderDate;
			m_szDeliveryDate = m_szOrderDate;
			m_szCurrencyKey = pMF->m_szDefaultCurrency;
			m_wndWarehouse.SetFocus();
			m_wndLines.Refresh(-1);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndWarehouse.SetFocus();
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
			m_nExchangeRate = 1;
		}
		
		//m_wndVAT.EnableWindow(TRUE);
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

void CPurchaseOrderDialogEx::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnSupplierSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnSupplierSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnSupplierKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnSupplierLoadData(){
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
/*void CPurchaseOrderDialogEx::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDialogEx::OnDelivererChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnDelivererSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnContactNameKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnDelivererCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnReceiverChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnReceiverSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnReceiverKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnReceiverCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnAddressChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnAddressSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnAddressKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnAddressCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnDescriptionChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnDescriptionSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnDescriptionKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnDescriptionCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnReferneceChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnReferneceSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnReferneceKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnReferneceCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnOrderNoChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnOrderNoKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnOrderNoCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return 0;
	
	szWhere.Empty();
	if(GetMode() == VM_EDIT)
		szWhere.Format(_T(" and po_purchase_order_id<> %ld "), m_nID);

	szWhere.AppendFormat(_T(" and trunc(sysdate, 'year')=trunc(po_orderdate, 'year') "));

	szSQL.Format(_T("SELECT count(*) FROM purchase_order WHERE po_orderno='%s'  %s "), m_szOrderNo, szWhere);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnOrderDateChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnOrderDateSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnOrderDateKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnApprovedDateChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnApprovedDateSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnApprovedDateKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnApprovedDateCheckValue(){
	return 0;
} 
void CPurchaseOrderDialogEx::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CPurchaseOrderDialogEx::OnCurrencySelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
}

/*void CPurchaseOrderDialogEx::OnCurrencySetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnCurrencyKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnCurrencyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;	
}

/*void CPurchaseOrderDialogEx::OnCurrencyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDialogEx::OnExchangeRateChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnExchangeRateSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnExchangeRateKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnExchangeRateCheckValue(){
	if(m_nExchangeRate <= 0)
	{
		m_nExchangeRate = 1;
	}
	return 0;
} 



void CPurchaseOrderDialogEx::OnVATSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnVATSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnVATSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnVATKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnVATLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadTaxList(&m_wndVAT, m_szVATKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVAT.IsSearchKey() && !m_szVATKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szVATKey
};
	m_wndVAT.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVAT.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDialogEx::OnVATAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

void CPurchaseOrderDialogEx::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnWarehouseSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnWarehouseSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnWarehouseKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnWarehouseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndWarehouse, m_szWarehouseKey);
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
/*void CPurchaseOrderDialogEx::OnWarehouseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnResourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnResourceSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnResourceSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnResourceKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnResourceLoadData(){
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
/*void CPurchaseOrderDialogEx::OnResourceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnDebitAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnDebitAcctSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnDebitAcctSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnDebitAcctKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnDebitAcctLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;
}
/*void CPurchaseOrderDialogEx::OnDebitAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnCreditAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnCreditAcctSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnCreditAcctSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnCreditAcctKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnCreditAcctLoadData(){
	return 0;
}
/*void CPurchaseOrderDialogEx::OnCreditAcctAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnPaymentMethodSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnPaymentMethodSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnPaymentMethodKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnPaymentMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
/*void CPurchaseOrderDialogEx::OnPaymentMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderDialogEx::OnPaymentTermsSelendok(){
	 
}

/*void CPurchaseOrderDialogEx::OnPaymentTermsSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnPaymentTermsKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnPaymentTermsLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	return pMF->LoadPaymentTermList(&m_wndPaymentTerms, m_szPaymentTermsKey);
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

/*void CPurchaseOrderDialogEx::OnPaymentTermsAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDialogEx::OnDeliveryMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDialogEx::OnDeliveryMethodSelendok(){
	 
}
/*void CPurchaseOrderDialogEx::OnDeliveryMethodSetfocus(){
	
}*/
/*void CPurchaseOrderDialogEx::OnDeliveryMethodKillfocus(){
	
}*/
long CPurchaseOrderDialogEx::OnDeliveryMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	return pMF->LoadDeliveryMethodList(&m_wndDeliveryMethod, m_szDeliveryMethodKey);

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
/*void CPurchaseOrderDialogEx::OnDeliveryMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDialogEx::OnDeliveryDateChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnDeliveryDateSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnDeliveryDateKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnDeliveryDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnDeliveryAddressChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnDeliveryAddressSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnDeliveryAddressKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnDeliveryAddressCheckValue(){
	return 0;
} 


/*void CPurchaseOrderDialogEx::OnTotalLinesChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalLinesSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalLinesKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnTotalLinesCheckValue(){
	return 0;
}
/*void CPurchaseOrderDialogEx::OnNetAmountChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnNetAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnNetAmountKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnNetAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnTaxesAmountChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnTaxesAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnTaxesAmountKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnTaxesAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnTotalAmountChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalAmountKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDialogEx::OnTotalExchangeAmountChange(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalExchangeAmountSetfocus(){
	
} */
/*void CPurchaseOrderDialogEx::OnTotalExchangeAmountKillfocus(){
	
} */
int CPurchaseOrderDialogEx::OnTotalExchangeAmountCheckValue(){
	return 0;
}
 
void CPurchaseOrderDialogEx::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddPurchaseOrderDialog();
}
 
void CPurchaseOrderDialogEx::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditPurchaseOrderDialog();
}
 
void CPurchaseOrderDialogEx::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderDialog();
}
 
void CPurchaseOrderDialogEx::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePurchaseOrderDialog();
}
 
void CPurchaseOrderDialogEx::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardPurchaseOrderDialog();
}
 
void CPurchaseOrderDialogEx::OnPrintSelect(){
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
 
void CPurchaseOrderDialogEx::OnPostSelect(){
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
 
void CPurchaseOrderDialogEx::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
void CPurchaseOrderDialogEx::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.OnListAddItem();
}
 
void CPurchaseOrderDialogEx::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPurchaseOrderDialogEx::OnAddPurchaseOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPurchaseOrderDialogEx::OnEditPurchaseOrderDialog(){
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

int CPurchaseOrderDialogEx::OnDeletePurchaseOrderDialog(){
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

	szSQL.Format(_T("purchase_order_delete(%ld, '%s', '%s') "), m_nID, pMF->GetModuleID(), pMF->GetCurrentUser()); 
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

int CPurchaseOrderDialogEx::OnSavePurchaseOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	m_wndOrderDate.SetMax((LPCTSTR)pMF->GetSysDate());
 	if(!IsValidateData()) 
 		return -1; 

 	CString szSQL; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("purchase_order_create(%s) "), m_purchase_orderTbl.FormatSQL());
	else
		szSQL.Format(_T("purchase_order_update(%s) "),  m_purchase_orderTbl.FormatSQL());
 
 Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("select purchase_order_id_asq.nextval from dual"));
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		m_nID = (long)rs.GetDoubleValue();
		m_purchase_orderTbl.SetValue(_T("po_purchase_order_id"), m_nID);
		szSQL.Format(_T("%s"), m_purchase_orderTbl.GetInsertSQL());
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE po_purchase_order_id=%ld"), m_nID);

		szSQL = m_purchase_orderTbl.GetUpdateSQL(_T("po_purchase_order_id"));
		szSQL.AppendFormat(_T(" %s "), szWhere);

	}
Notice(szSQL);
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
 	{ 

		
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);

		}
		else{
			szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			GetDataToScreen();
			SetMode(VM_VIEW);
			m_wndAddLine.SetFocus();
		}
		return 1;
 	} 
 	return -1; 
}

int CPurchaseOrderDialogEx::OnDiscardPurchaseOrderDialog(){
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
 
int CPurchaseOrderDialogEx::OnPurchaseOrderDialogListLoadData(){
	return 0;
}


void CPurchaseOrderDialogEx::CreateTabViews(){
	m_wndLines.m_pWndOrder = this;
	m_wndLines.Create(&m_wndTab);
	m_wndLines.OnInitDialog();
	m_wndTab.Add(_T("Items"), &m_wndLines);
//	m_wndTab.Add(_T("Tax"), NULL);
//	m_wndTab.Add(_T("Basic Discounts"), NULL);

	
	m_wndTab.SetCurSel(0);
}

void CPurchaseOrderDialogEx::RecalcAmount(){
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
