#include "PurchaseReturnOrderDialog.h"
#include "MainFrame_E10.h"
#include "HMSReportForms/PrintForms.h"

static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseReturnOrderDialog* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseReturnOrderDialog* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnDelivererCheckValue();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnReceiverCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnApprovedDateCheckValue();
} 
/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnNetAmountChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnNetAmountChange();
} */
/*static void _OnNetAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnNetAmountSetfocus();} */ 
/*static void _OnNetAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnNetAmountKillfocus();
} */
static int _OnNetAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnNetAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnPayMentSelectFnc(CWnd *pWnd){
	CPurchaseReturnOrderDialog *pVw = (CPurchaseReturnOrderDialog *)pWnd;
	pVw->OnPayMentSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPurchaseReturnOrderDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
//static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
//	((CPurchaseReturnOrderDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
//} 
//static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
//	((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentMethodSelendok();
//}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
/*static void _OnPaymentDateChangeFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentDateChange();
} */
/*static void _OnPaymentDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentDateSetfocus();} */ 
/*static void _OnPaymentDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentDateKillfocus();
} */
static int _OnPaymentDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseReturnOrderDialog *)pWnd)->OnPaymentDateCheckValue();
} 
static int _OnAddPurchaseReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderDialog*)pWnd)->OnAddPurchaseReturnOrderDialog();
} 
static int _OnEditPurchaseReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderDialog*)pWnd)->OnEditPurchaseReturnOrderDialog();
} 
static int _OnDeletePurchaseReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderDialog*)pWnd)->OnDeletePurchaseReturnOrderDialog();
} 
static int _OnSavePurchaseReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderDialog*)pWnd)->OnSavePurchaseReturnOrderDialog();
} 
static int _OnCancelPurchaseReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CPurchaseReturnOrderDialog*)pWnd)->OnCancelPurchaseReturnOrderDialog();
}

static long _OnSourceLoadDataFnc(CWnd* pWnd)
{
	return ((CPurchaseReturnOrderDialog*) pWnd)->OnSourceLoadData();
}
CPurchaseReturnOrderDialog::CPurchaseReturnOrderDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("PRO");
	SetWindowTitle(_T("Purchase Return Order"));
	m_bIsPayment=false;

}
CPurchaseReturnOrderDialog::~CPurchaseReturnOrderDialog(){
}
void CPurchaseReturnOrderDialog::OnCreateComponents(){
	

	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 690, 5, 1005, 150);
	m_wndSupplierInformation.Create(this, _T("General Information"), 5, 5, 685, 150);
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 10, 30, 160, 55);
	m_wndWarehouse.Create(this,165, 30, 360, 55); 
	m_wndSourceLabel.Create(this, _T("Source"), 365, 30, 470, 55);
	m_wndSource.Create(this,475, 30, 680, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 160, 85);
	m_wndSupplier.Create(this,165, 61, 680, 86); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 90, 160, 115);
	m_wndDeliverer.Create(this,165, 90, 360, 115); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 365, 90, 470, 115);
	m_wndReceiver.Create(this,475, 90, 680, 115); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 120, 160, 145);
	m_wndReason.Create(this,165, 120, 360, 145);
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 366, 120, 471, 145);
	m_wndPaymentMethod.Create(this,476, 120, 680, 145); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 695, 89, 845, 114);
	m_wndApprovedDate.Create(this,850, 89, 1000, 114);
	m_wndPaymentDateLabel.Create(this, _T("Payment Date"), 695, 120, 845, 145);
	m_wndPaymentDate.Create(this,850, 120, 1000, 145);
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
	m_wndPost.Create(this, _T("Approval"), 820, 575, 910, 600);
	m_wndClose.Create(this, _T("&Close"), 915, 575, 1005, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndPayMent.Create(this, _T("Payment"), 100, 575, 190, 600);
	m_wndTab.Create(this,5, 150, 1005, 540); 

	CreateTabViews();
}
void CPurchaseReturnOrderDialog::OnInitializeComponents(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	m_wndOrderNo.SetLimitText(15);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetCheckValue(true);
//	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(254);
	m_wndReason.SetLimitText(254);
//	m_wndReason.SetCheckValue(true);
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
	m_wndTotalLines.SetReadOnly(TRUE);
	

	m_wndOrderNo.SetReadOnly(true);
	m_wndOrderDate.SetReadOnly(true);
	m_wndApprovedDate.SetReadOnly(TRUE);
	m_wndDeliverer.SetInitCap(1);
	m_wndReceiver.SetInitCap(1);
	
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndPaymentMethod.SetCheckValue(true);
	
	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndSupplier.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);
	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



	m_transactionTbl.SetTableName(_T("m_transaction"));
	m_transactionTbl.AddField(_T("mt_transaction_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_client_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_org_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_createdby"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_updatedby"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_updateddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_doctype"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_orderno"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_orderdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_acctdate"), dfDate); 
	m_transactionTbl.AddField(_T("mt_currency_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_exchangerate"), dfDouble); 
	m_transactionTbl.AddField(_T("mt_expense_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_contract_id"), dfText, 32);
	m_transactionTbl.AddField(_T("mt_partner_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_description"), dfText, 255); 
	m_transactionTbl.AddField(_T("mt_reference"), dfText, 255); 
	m_transactionTbl.AddField(_T("mt_note"), dfText, 1024); 
	m_transactionTbl.AddField(_T("mt_deliveryby"), dfText, 60); 
	m_transactionTbl.AddField(_T("mt_receiveby"), dfText, 60); 
	m_transactionTbl.AddField(_T("mt_storage_id"), dfInteger);
	m_transactionTbl.AddField(_T("mt_payment_method"), dfText, 5);
	

	m_wndOrderDate.SetCheckValue(TRUE);
	m_wndOrderDate.SetMax(pMF->GetSysDateTime());

	m_wndApprovedDate.SetCheckValue(TRUE);
	m_wndApprovedDate.SetMax(pMF->GetSysDateTime());

	m_wndSource.InsertColumn(0, L"ID", CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, L"Name", CFMT_TEXT, 150);
}

void CPurchaseReturnOrderDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
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
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
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
	//m_wndTotalLines.SetEvent(WE_CHANGE, _OnTotalLinesChangeFnc);
	//m_wndTotalLines.SetEvent(WE_SETFOCUS, _OnTotalLinesSetfocusFnc);
	//m_wndTotalLines.SetEvent(WE_KILLFOCUS, _OnTotalLinesKillfocusFnc);
	m_wndTotalLines.SetEvent(WE_CHECKVALUE, _OnTotalLinesCheckValueFnc);
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
	m_wndPayMent.SetEvent(WE_CLICK, _OnPayMentSelectFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
//	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
//	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	//m_wndPaymentDate.SetEvent(WE_CHANGE, _OnPaymentDateChangeFnc);
	//m_wndPaymentDate.SetEvent(WE_SETFOCUS, _OnPaymentDateSetfocusFnc);
	//m_wndPaymentDate.SetEvent(WE_KILLFOCUS, _OnPaymentDateKillfocusFnc);
	m_wndPaymentDate.SetEvent(WE_CHECKVALUE, _OnPaymentDateCheckValueFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
	{
		GetDataToScreen();
	}
	SetMode(nMode);

}
void CPurchaseReturnOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDeliverer);
	DDX_Text(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiver);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_Text(pDX, m_wndNetAmount.GetDlgCtrlID(), m_nNetAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndPaymentDate.GetDlgCtrlID(), m_szPaymentDate);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
}
void CPurchaseReturnOrderDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL, szWhere;
	
	szWhere.Format(_T(" and mt_org_id IN('GL','%s') "), pMF->GetModuleID());
	szWhere.AppendFormat(_T(" and mt_doctype='PRO' "));

	szSQL.Format(_T("SELECT * ") \
	_T(" FROM m_transaction ") \
	_T("WHERE mt_transaction_id=%ld %s "), m_nID, szWhere);

	//Notice(szSQL);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_orderno"), m_szOrderNo);
		rs.GetValue(_T("mt_orderdate"), m_szOrderDate);
		rs.GetValue(_T("mt_approveddate"), m_szApprovedDate);

		rs.GetValue(_T("mt_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("mt_exchangerate"), m_nExchangeRate);
		rs.GetValue(_T("mt_partner_id"), m_szSupplierKey);
		
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_netamount"), m_nNetAmount);
		rs.GetValue(_T("mt_taxamount"), m_nTaxesAmount);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("mt_exchangeamount"), m_nTotalExchangeAmount);
		rs.GetValue(_T("mt_posted"), m_szPosted);
		rs.GetValue(_T("mt_deliveryby"), m_szDeliverer);
		rs.GetValue(_T("mt_receiveby"), m_szReceiver);
		rs.GetValue(_T("mt_reference"), m_szReference);
		rs.GetValue(_T("mt_description"), m_szReason);
		rs.GetValue(_T("mt_note"), m_szNote);
		rs.GetValue(_T("mt_storage_id"), m_szWarehouseKey);
		rs.GetValue(_T("mt_tax_id"), m_nTaxID);
		rs.GetValue(_T("mt_note"), m_szNote);
		m_wndLines.m_nStorageID = str2int(m_szWarehouseKey);
		m_wndLines.Refresh(m_nID);
		rs.GetValue(_T("mt_payment_method"), m_szPaymentMethodKey);
		rs.GetValue(_T("mt_payment"),m_szPayment);
		if(m_szPayment == _T("Y"))
		{	
			rs.GetValue(_T("mt_payment_date"),m_szPaymentDate);
			rs.GetValue(L"mt_resource_id", m_szSourceKey);
			m_wndPayMent.SetWindowText(_T("Un Payment"));
		}
		else
		{
			m_szPaymentDate.Empty();
			m_szSourceKey.Empty();
			m_wndPayMent.SetWindowText(_T("Payment"));
		}
	}
	
	szSQL.Format(_T(" SELECT") \
				_T("   sum(mtl_qtydelivery*PRODUCT_VATPRICE) AS amt") \
				_T(" FROM m_transactionline") \
				_T(" LEFT JOIN m_productitem_view ON (product_item_id=mtl_product_item_id)") \
				_T(" WHERE mtl_transaction_id = %ld"), m_nID);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("amt"), m_nTotalAmount);		
	}
}

void CPurchaseReturnOrderDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	
	m_transactionTbl.SetValue(_T("mt_createdby"), pMF->GetCurrentUser());

	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld "), m_nID);
		m_transactionTbl.Open(&pMF->m_db, szWhere);
	}
	m_transactionTbl.SetValue(_T("mt_client_id"), _T(""));
	m_transactionTbl.SetValue(_T("mt_org_id"), pMF->GetModuleID());
	m_transactionTbl.SetValue(_T("mt_updatedby"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_updateddate"), pMF->GetSysDateTime());
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szType);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_acctdate"),m_szOrderDate ); //m_szApprovedDate
	m_transactionTbl.SetValue(_T("mt_currency_id"), m_szCurrencyKey);
	
	if(m_szCurrencyKey == pMF->m_szDefaultCurrency)
		m_nExchangeRate = 1;

	m_transactionTbl.SetValue(_T("mt_exchangerate"), m_nExchangeRate);
	m_transactionTbl.SetValue(_T("mt_partner_id"), m_szSupplierKey);
	m_transactionTbl.SetValue(_T("mt_deliveryby"), m_szDeliverer);
	m_transactionTbl.SetValue(_T("mt_receiveby"), m_szReceiver);
	m_transactionTbl.SetValue(_T("mt_reference"), m_szReference);
	m_transactionTbl.SetValue(_T("mt_description"), m_szReason);
	m_transactionTbl.SetValue(_T("mt_note"), m_szNote);
	m_transactionTbl.SetValue(_T("mt_storage_id"), m_szWarehouseKey);
	m_transactionTbl.SetValue(_T("mt_payment_method"), m_szPaymentMethodKey);
	

}

void CPurchaseReturnOrderDialog::SetDefaultValues(){

	//m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_nExchangeRate=1;
	m_szSupplierKey.Empty();
	m_szDeliverer.Empty();
	m_szReceiver.Empty();
	m_szAddress.Empty();
	m_szReason.Empty();
	m_szReference.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szApprovedDate.Empty();
	m_szCurrencyKey.Empty();
	
	m_szNote.Empty();
	m_nNetAmount=0;
	m_nTaxesAmount=0;
	m_nTotalAmount=0;
	m_nTotalExchangeAmount = 0;
	m_szStatus=_T("O");
	m_szPosted = _T("N");
	m_szPaymentMethodKey.Empty();
	m_szPaymentDate.Empty();
	m_szSourceKey.Empty();
}

int CPurchaseReturnOrderDialog::SetMode(int nMode){
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
			m_szOrderDate =  pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_RETURN_ORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szApprovedDate= m_szOrderDate;
			m_szCurrencyKey = pMF->m_szDefaultCurrency;
			m_wndWarehouse.SetFocus();
			m_wndLines.Refresh(-1);

 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			
			m_wndWarehouse.EnableWindow(FALSE);
			m_wndSupplier.EnableWindow(FALSE);
			m_wndDeliverer.SetFocus();
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
 		};	//switch


		if(!pMF->IsMultipleCurrency()){
			m_nExchangeRate = 1;
		}


		if(m_szStatus != _T("O"))
		{
			m_wndPost.EnableWindow(FALSE);
//			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);

			m_wndWarehouse.EnableWindow(FALSE);
			m_wndSupplier.EnableWindow(FALSE);
		}
		if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		{
			m_wndPaymentMethod.EnableWindow(true);
		}
		m_wndClose.EnableWindow(TRUE);
		m_wndPaymentDate.EnableWindow(false);
		m_wndSource.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

void CPurchaseReturnOrderDialog::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseReturnOrderDialog::OnWarehouseSelendok(){
	 
}
/*void CPurchaseReturnOrderDialog::OnWarehouseSetfocus(){
	
}*/
/*void CPurchaseReturnOrderDialog::OnWarehouseKillfocus(){
	
}*/
long CPurchaseReturnOrderDialog::OnWarehouseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();

	return pMF->LoadStorageList(&m_wndWarehouse, m_szWarehouseKey, szFilter);
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
/*void CPurchaseReturnOrderDialog::OnWarehouseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseReturnOrderDialog::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseReturnOrderDialog::OnSupplierSelendok(){
	 
}

/*void CPurchaseReturnOrderDialog::OnSupplierSetfocus(){
	
}*/
/*void CPurchaseReturnOrderDialog::OnSupplierKillfocus(){
	
}*/
long CPurchaseReturnOrderDialog::OnSupplierLoadData(){
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

/*void CPurchaseReturnOrderDialog::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseReturnOrderDialog::OnDelivererChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnDelivererSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnDelivererKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnDelivererCheckValue(){
	return 0;
}
 
/*void CPurchaseReturnOrderDialog::OnReceiverChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnReceiverSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnReceiverKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnReceiverCheckValue(){
	return 0;
}
 
/*void CPurchaseReturnOrderDialog::OnReasonChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnReasonSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnReasonKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnReasonCheckValue(){
	return 0;
} 
/*void CPurchaseReturnOrderDialog::OnOrderNoChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnOrderNoKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnOrderNoCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return 0;
	
	szWhere.Empty();
	if(GetMode() == VM_EDIT)
		szWhere.Format(_T(" and mt_transaction_id<> %ld "), m_nID);

	szWhere.AppendFormat(_T(" and trunc_date(sysdate, 'year')=trunc_date(mt_orderdate, 'year') "));

	szSQL.Format(_T("SELECT count(*) FROM m_transaction WHERE mt_orderno='%s'  %s "), m_szOrderNo, szWhere);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}
	return 0;
}
 
/*void CPurchaseReturnOrderDialog::OnOrderDateChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnOrderDateKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CPurchaseReturnOrderDialog::OnApprovedDateChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnApprovedDateSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnApprovedDateKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnApprovedDateCheckValue(){
	return 0;
}
 
/*void CPurchaseReturnOrderDialog::OnTotalLinesChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnTotalLinesSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnTotalLinesKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnTotalLinesCheckValue(){
	return 0;
} 
/*void CPurchaseReturnOrderDialog::OnNetAmountChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnNetAmountSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnNetAmountKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnNetAmountCheckValue(){
	return 0;
}
 
/*void CPurchaseReturnOrderDialog::OnTaxesAmountChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnTaxesAmountSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnTaxesAmountKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnTaxesAmountCheckValue(){
	return 0;
}
 
/*void CPurchaseReturnOrderDialog::OnTotalAmountChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnTotalAmountSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnTotalAmountKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnTotalAmountCheckValue(){
	return 0;
}
 
void CPurchaseReturnOrderDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddPurchaseReturnOrderDialog();
}
 
void CPurchaseReturnOrderDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditPurchaseReturnOrderDialog();
}
 
void CPurchaseReturnOrderDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseReturnOrderDialog();
}
 
void CPurchaseReturnOrderDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	if(m_bIsPayment)
	{
		
		szSQL.Format(_T("Update m_transaction set mt_payment='Y', mt_payment_date=to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS'),mt_payment_method='%s', ") \
					_T(" mt_resource_id = '%s'") \
					_T(" where mt_transaction_id=%ld"), m_szPaymentDate,m_szPaymentMethodKey, m_szSourceKey, m_nID);
		int nCount = pMF->ExecSQL(szSQL);
		if(nCount >0)
		{
		//	m_wndPayMent.SetWindowText(_T("Un Payment"));
			GetDataToScreen();
			SetMode(VM_VIEW);
		}
		else
		{
			_msg(_T("SQL: %s"),szSQL);
		}

		
	}
	else
		OnSavePurchaseReturnOrderDialog();
}
 
void CPurchaseReturnOrderDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelPurchaseReturnOrderDialog();
}
 
void CPurchaseReturnOrderDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPrintForms printer;
	printer.PrintPurchaseReturnOrder(m_nID);
}
 
void CPurchaseReturnOrderDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("O"))
		return;
	int retMsg = ShowMessageBox(_T("Do you want to approve order?(Y/N)"), MB_YESNO|MB_ICONQUESTION);
	if (retMsg == IDNO)
		return;
	szSQL.Format(_T("M_TRANSACTION_POST(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		CString tmpStr;
		RecalcAmount();
		if(m_szStatus != _T("O")){
			m_wndPost.EnableWindow(FALSE);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}

	}
	else
	{
		ShowMessageBox(_T("Cannot post purchase order"));
	}
}
 
void CPurchaseReturnOrderDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
void CPurchaseReturnOrderDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.OnListAddItem();

}
void CPurchaseReturnOrderDialog::OnPayMentSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("A"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	if(m_szPayment != _T("Y"))
	{
		m_wndPaymentMethod.EnableWindow(true);
		m_wndPaymentDate.EnableWindow(true);
		m_wndSource.EnableWindow(true);
		m_szPaymentDate= pMF->GetSysDateTime();
		EnableButtons(TRUE, 3, 4, -1);
		m_bIsPayment=true;
		
		UpdateData(false);
	}
	else
	{
		int retMsg = ShowMessageBox(_T("Do you want rool back payment?(Y/N)"), MB_YESNO|MB_ICONQUESTION);
		if (retMsg == IDNO)
			return;

		szSQL.Format(_T("Update m_transaction set mt_payment='N' where mt_transaction_id=%ld"),m_nID);
		int nCount = pMF->ExecSQL(szSQL);
		if(nCount >0)
		{
			GetDataToScreen();
			SetMode(VM_VIEW);
		}
		else
			return;

	}


}
 
void CPurchaseReturnOrderDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
/*void CPurchaseReturnOrderDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CPurchaseReturnOrderDialog::OnPaymentMethodKillfocus(){
	
}*/
long CPurchaseReturnOrderDialog::OnPaymentMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Format(_T(" and adpm_payment_method_id in ('TM','UNC') "));
	return pMF->LoadPaymentMethodList(&m_wndPaymentMethod, m_szPaymentMethodKey,szWhere);
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
/*void CPurchaseReturnOrderDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPurchaseReturnOrderDialog::OnPaymentDateChange(){
	
} */
/*void CPurchaseReturnOrderDialog::OnPaymentDateSetfocus(){
	
} */
/*void CPurchaseReturnOrderDialog::OnPaymentDateKillfocus(){
	
} */
int CPurchaseReturnOrderDialog::OnPaymentDateCheckValue(){
	return 0;
} 
 
int CPurchaseReturnOrderDialog::OnAddPurchaseReturnOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPurchaseReturnOrderDialog::OnEditPurchaseReturnOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CPurchaseReturnOrderDialog::OnDeletePurchaseReturnOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
	
 	if(ShowMessageBox(_T("Do you want to delete order?(Y/"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("M_TRANSACTION_DELETE(%ld, '%s') "), m_nID, pMF->GetCurrentUser()); 
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
 		OnCancelPurchaseReturnOrderDialog(); 
 	}
	else
	{
		ShowMessageBox(_T("Can not delete order"));
	}
	return 0;
}

int CPurchaseReturnOrderDialog::OnSavePurchaseReturnOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	m_wndOrderDate.SetMax(pMF->GetSysDateTime());
	m_wndApprovedDate.SetMax(pMF->GetSysDateTime());
 	if(!IsValidateData()) 
 		return -1; 

 	CString szSQL; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("m_transaction_create(%s) "), m_transactionTbl.FormatSQL());
	else
		szSQL.Format(_T("m_transaction_update(%s) "),  m_transactionTbl.FormatSQL());
 
 //Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("select m_transaction_id_asq.nextval from dual"));
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		m_nID = (long)rs.GetIntValue();
		if(m_nID <= 0) return -1;
		m_transactionTbl.SetValue(_T("mt_transaction_id"), m_nID);
		szSQL.Format(_T("%s"), m_transactionTbl.GetInsertSQL());
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld"), m_nID);

		szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_transaction_id,mt_orderno,mt_orderdate,mt_approveddte,mt_doctype,mt_partner_id"));
		szSQL.AppendFormat(_T(" %s "), szWhere);

	}
//Notice(szSQL);
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
 	{ 

		
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);

		}
		else{
			GetDataToScreen();
			SetMode(VM_VIEW);
			m_wndAddLine.SetFocus();
		}
		return 1;
 	} 
 	return -1; 
}

int CPurchaseReturnOrderDialog::OnCancelPurchaseReturnOrderDialog(){
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
int CPurchaseReturnOrderDialog::OnPurchaseReturnOrderDialogListLoadData(){
	return 0;
}



void CPurchaseReturnOrderDialog::RecalcAmount(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("update m_transaction set mt_totalamount = (select sum(mtl_ttlamount) from m_transactionline  ") \
				_T("	where mtl_transaction_id=%ld) where mt_transaction_id=%ld ") ,m_nID,m_nID );
	pMF->ExecSQL(szSQL);
	szSQL.Format(_T("SELECT mt_status, mt_netamount, mt_taxamount, ") \
		_T("mt_disamount, mt_totalamount, mt_totalamount*mt_exchangerate as mt_exchangeamount ") \
		_T("FROM m_transaction ") \
		_T("WHERE mt_transaction_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_netamount"), m_nNetAmount);
		rs.GetValue(_T("mt_taxamount"), m_nTaxesAmount);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("mt_exchangeamount"), m_nTotalExchangeAmount);
		rs.GetValue(_T("mt_status"), m_szStatus);

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


BOOL CPurchaseReturnOrderDialog::PreTranslateMessage(MSG* pMsg){
	if(pMsg->message == WM_KEYDOWN){
		if(pMsg->wParam == VK_F3){
			CPrintForms printer;
			printer.PrintPurchaseOrder(m_nID);
			return TRUE;
		}
		if(pMsg->wParam == VK_F2)
		{
			OnPostSelect();
			return TRUE;	
		}
		
	}


	return CGuiDialog::PreTranslateMessage(pMsg);
}

void CPurchaseReturnOrderDialog::CreateTabViews(){
	m_wndLines.m_pWndOrder = this;
	m_wndLines.Create(&m_wndTab);
	m_wndLines.OnInitDialog();
	m_wndTab.Add(_T("Items"), &m_wndLines);
//	m_wndTab.Add(_T("Tax"), NULL);
//	m_wndTab.Add(_T("Basic Discounts"), NULL);

	
	m_wndTab.SetCurSel(0);
}

long CPurchaseReturnOrderDialog::OnSourceLoadData()
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPaymentResourceList(&m_wndSource, m_szSourceKey);
}