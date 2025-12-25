#include "PurchaseOrderNonStockDialog.h"
#include "MainFrame_E10.h"
#include "HMSReportForms/PrintForms.h"


static void _OnResourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonStockDialog* )pWnd)->OnResourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResourceSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnResourceSelendok();
}
/*static void _OnResourceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnResourceKillfocus();
}*/
/*static void _OnResourceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnResourceKillfocus();
}*/
static long _OnResourceLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnResourceLoadData();
}
/*static void _OnResourceAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnResourceAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonStockDialog* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnDelivererCheckValue();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnReceiverCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnReferenceCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnInvoiceDateCheckValue();
} 
static void _OnVATSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderNonStockDialog* )pWnd)->OnVATSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVATSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnVATSelendok();
}
/*static void _OnVATSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnVATKillfocus();
}*/
/*static void _OnVATKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnVATKillfocus();
}*/
static long _OnVATLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnVATLoadData();
}
/*static void _OnVATAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnVATAddNew();
}*/
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPurchaseOrderNonStockDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnNetAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnNetAmountChange();
} */
/*static void _OnNetAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnNetAmountSetfocus();} */ 
/*static void _OnNetAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnNetAmountKillfocus();
} */
static int _OnNetAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnNetAmountCheckValue();
} 
/*static void _OnTaxesAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTaxesAmountChange();
} */
/*static void _OnTaxesAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTaxesAmountSetfocus();} */ 
/*static void _OnTaxesAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTaxesAmountKillfocus();
} */
static int _OnTaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnTaxesAmountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderNonStockDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderNonStockDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderNonStockDialog *pVw = (CPurchaseOrderNonStockDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonStockDialog*)pWnd)->OnAddPurchaseOrderDialogEx();
} 
static int _OnEditPurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonStockDialog*)pWnd)->OnEditPurchaseOrderDialogEx();
} 
static int _OnDeletePurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonStockDialog*)pWnd)->OnDeletePurchaseOrderDialogEx();
} 
static int _OnSavePurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonStockDialog*)pWnd)->OnSavePurchaseOrderDialogEx();
} 
static int _OnDiscardPurchaseOrderDialogExFnc(CWnd *pWnd){
	 return ((CPurchaseOrderNonStockDialog*)pWnd)->OnDiscardPurchaseOrderDialogEx();
} 
CPurchaseOrderNonStockDialog::CPurchaseOrderNonStockDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1019;
	m_nDlgHeight = 644;
	SetDefaultValues();

	m_szType = _T("POO");

	m_szCurrencyKey.Empty();
	m_nExchangeRate=1;
	m_szWarehouseKey.Empty();
	m_szResourceKey.Empty();

	SetWindowTitle(_T("Purchase Order Non-Stock"));
	
	m_bRefresh = false;

}
CPurchaseOrderNonStockDialog::~CPurchaseOrderNonStockDialog(){
}
void CPurchaseOrderNonStockDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 180);
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 690, 5, 1005, 180);
	m_wndResourceLabel.Create(this, _T("Resource"), 370, 30, 475, 55);
	m_wndResource.Create(this,480, 30, 680, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 160, 85);
	m_wndSupplier.Create(this,165, 60, 680, 85); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 90, 160, 115);
	m_wndDeliverer.Create(this,165, 90, 365, 115); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 370, 90, 475, 115);
	m_wndReceiver.Create(this,480, 90, 680, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 160, 145);
	m_wndDescription.Create(this,165, 120, 680, 145); 
	m_wndReferenceLabel.Create(this, _T("Reference"), 10, 150, 160, 175);
	m_wndReference.Create(this,165, 150, 475, 175); 
	m_wndOriginalDocument.Create(this, _T("Original Document"), 480, 150, 680, 175);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 695, 90, 845, 115);
	m_wndInvoiceNo.Create(this,850, 90, 1000, 115); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 695, 120, 845, 145);
	m_wndInvoiceDate.Create(this,850, 120, 1000, 145); 
	m_wndVATLabel.Create(this, _T("VAT"), 695, 150, 845, 175);
	m_wndVAT.Create(this,850, 150, 1000, 175); 
	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 10, 545, 135, 570);
	m_wndTotalLines.Create(this,140, 545, 225, 570); 
	m_wndNetAmountLabel.Create(this, _T("Net Amount"), 230, 545, 355, 570);
	m_wndNetAmount.Create(this,360, 545, 485, 570); 
	m_wndTaxesAmountLabel.Create(this, _T("Taxes Amount"), 490, 545, 615, 570);
	m_wndTaxesAmount.Create(this,620, 545, 745, 570); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 750, 545, 875, 570);
	m_wndTotalAmount.Create(this,880, 545, 1005, 570); 
	
	m_wndAdd.Create(this, _T("&Add"), 250, 575, 340, 600);
	m_wndEdit.Create(this, _T("&Edit"), 345, 575, 435, 600);
	m_wndDelete.Create(this, _T("&Delete"), 440, 575, 530, 600);
	m_wndSave.Create(this, _T("&Save"), 535, 575, 625, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 630, 575, 720, 600);
	m_wndPrint.Create(this, _T("&Print-F3"), 725, 575, 815, 600);
	m_wndPost.Create(this, _T("&Import-F2"), 820, 575, 910, 600);
	m_wndClose.Create(this, _T("&Close"), 915, 575, 1005, 600);

	m_wndTab.Create(this,5, 185, 1005, 540); 
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	CreateTabViews();

}
void CPurchaseOrderNonStockDialog::OnInitializeComponents(){
	
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


	m_wndInvoiceNo.SetCheckValue(false);
	m_wndInvoiceDate.SetCheckValue(false);

	m_wndTotalLines.SetLimitText(16);
	m_wndTotalLines.SetReadOnly(true);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndSupplier.InsertColumn(2, _T("address"), CFMT_TEXT, 0);
	m_wndSupplier.InsertColumn(3, _T("taxcode"), CFMT_TEXT, 0);


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
	m_purchase_orderTbl.AddField(_T("po_invoiceno"), dfText, 20); 
	m_purchase_orderTbl.AddField(_T("po_invoicedate"), dfDate); 
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


	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndOrderNo.SetReadOnly(TRUE);
	m_wndResource.SetCheckValue(true);
}

void CPurchaseOrderNonStockDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndResource.SetEvent(WE_SELENDOK, _OnResourceSelendokFnc);
	//m_wndResource.SetEvent(WE_SETFOCUS, _OnResourceSetfocusFnc);
	//m_wndResource.SetEvent(WE_KILLFOCUS, _OnResourceKillfocusFnc);
	m_wndResource.SetEvent(WE_SELCHANGE, _OnResourceSelectChangeFnc);
	m_wndResource.SetEvent(WE_LOADDATA, _OnResourceLoadDataFnc);
	//m_wndResource.SetEvent(WE_ADDNEW, _OnResourceAddNewFnc);
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
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	m_wndVAT.SetEvent(WE_SELENDOK, _OnVATSelendokFnc);
	//m_wndVAT.SetEvent(WE_SETFOCUS, _OnVATSetfocusFnc);
	//m_wndVAT.SetEvent(WE_KILLFOCUS, _OnVATKillfocusFnc);
	m_wndVAT.SetEvent(WE_SELCHANGE, _OnVATSelectChangeFnc);
	m_wndVAT.SetEvent(WE_LOADDATA, _OnVATLoadDataFnc);
	//m_wndVAT.SetEvent(WE_ADDNEW, _OnVATAddNewFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
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
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW){
		GetDataToScreen();
	}
	SetMode(nMode);

}
void CPurchaseOrderNonStockDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndResource.GetDlgCtrlID(), m_szResourceKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDeliverer);
	DDX_Text(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiver);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_TextEx(pDX, m_wndVAT.GetDlgCtrlID(), m_szVATKey);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_Text(pDX, m_wndNetAmount.GetDlgCtrlID(), m_nNetAmount);
	DDX_Text(pDX, m_wndTaxesAmount.GetDlgCtrlID(), m_nTaxesAmount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CPurchaseOrderNonStockDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM purchase_order ") \
		_T(" WHERE po_purchase_order_id=%ld  ") \
		_T(" and po_doctype='%s' and po_org_id IN('GL','%s') "), 
			m_nID, m_szType, pMF->GetModuleID());

	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("po_orderno"), m_szOrderNo);
		rs.GetValue(_T("po_orderdate"), m_szOrderDate);
		
		rs.GetValue(_T("po_invoiceno"), m_szInvoiceNo);
		rs.GetValue(_T("po_invoicedate"), m_szInvoiceDate);

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
		rs.GetValue(_T("po_reference"), m_szReference);
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

void CPurchaseOrderNonStockDialog::GetScreenToData(){
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
	m_purchase_orderTbl.SetValue(_T("po_invoiceno"), m_szInvoiceNo);
	m_purchase_orderTbl.SetValue(_T("po_invoicedate"), m_szInvoiceDate);
	m_purchase_orderTbl.SetValue(_T("po_acctdate"), m_szApprovedDate);
	m_purchase_orderTbl.SetValue(_T("po_currency_id"), m_szCurrencyKey);
	
	if(m_szCurrencyKey == pMF->m_szDefaultCurrency)
		m_nExchangeRate = 1;


	m_purchase_orderTbl.SetValue(_T("po_exchangerate"), m_nExchangeRate);
	m_purchase_orderTbl.SetValue(_T("po_partner_type_id"), m_szPartnerType_ID);
	m_purchase_orderTbl.SetValue(_T("po_partner_id"), m_szSupplierKey);
	m_purchase_orderTbl.SetValue(_T("po_partneraddress"), m_szAddress);
	m_purchase_orderTbl.SetValue(_T("po_deliveryby"), m_szDeliverer);
	m_purchase_orderTbl.SetValue(_T("po_receivedby"), m_szReceiver);
	m_purchase_orderTbl.SetValue(_T("po_payment_method_id"), m_szPaymentMethodKey);
	m_purchase_orderTbl.SetValue(_T("po_payment_terms_id"), m_szPaymentTermsKey);
	m_purchase_orderTbl.SetValue(_T("po_delivery_method_id"), m_szDeliveryMethodKey);
	m_purchase_orderTbl.SetValue(_T("po_deliverydate"), m_szDeliveryDate);
	m_purchase_orderTbl.SetValue(_T("po_deliveryaddress"), m_szDeliveryAddress);
	m_purchase_orderTbl.SetValue(_T("po_reference"), m_szReference);
	m_purchase_orderTbl.SetValue(_T("po_description"), m_szDescription);
	m_purchase_orderTbl.SetValue(_T("po_storage_id"), m_szWarehouseKey);
	m_purchase_orderTbl.SetValue(_T("po_resource_id"), m_szResourceKey);
	m_purchase_orderTbl.SetValue(_T("po_tax_id"), m_szVATKey);
	m_purchase_orderTbl.SetValue(_T("po_debitacct"), m_szDebitAcctKey);
	m_purchase_orderTbl.SetValue(_T("po_creditacct"), m_szCreditAcctKey);

}

void CPurchaseOrderNonStockDialog::SetDefaultValues(){

	//m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	
	m_szSupplierKey.Empty();
	m_szDeliverer.Empty();
	m_szReceiver.Empty();
	m_szAddress.Empty();
	m_szDescription.Empty();
	m_szReference.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szApprovedDate.Empty();
	m_szDebitAcctKey.Empty();
	m_szCreditAcctKey.Empty();
	m_szPaymentMethodKey.Empty();
	m_szPaymentTermsKey.Empty();
	m_szDeliveryMethodKey.Empty();
	m_szDeliveryDate.Empty();
	m_szDeliveryAddress.Empty();

	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_nNetAmount=0;
	m_nTaxesAmount=0;
	m_nTotalAmount=0;
	m_nTotalExchangeAmount = 0;
	m_szStatus=_T("O");
	m_szPosted = _T("N");
	m_szVATKey = _T("5");
}

int CPurchaseOrderNonStockDialog::SetMode(int nMode){
	
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
			szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_NO','N') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szApprovedDate= m_szOrderDate;
			m_szDeliveryDate = m_szOrderDate;
			m_szInvoiceDate = m_szOrderDate;
			m_szCurrencyKey = pMF->m_szDefaultCurrency;
			m_wndSupplier.SetFocus();
			m_wndLines.Refresh(-1);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
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
 		};


		if(!pMF->IsMultipleCurrency()){
			m_nExchangeRate = 1;
		}
		
		if(m_szStatus != _T("O"))
		{
			m_wndPost.EnableWindow(FALSE);
//			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);

			m_wndSupplier.EnableWindow(FALSE);
			m_wndResource.EnableWindow(FALSE);
			m_wndVAT.EnableWindow(FALSE);
		}

		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}


void CPurchaseOrderNonStockDialog::OnResourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderNonStockDialog::OnResourceSelendok(){
	 
}

/*void CPurchaseOrderNonStockDialog::OnResourceSetfocus(){
	
}*/
/*void CPurchaseOrderNonStockDialog::OnResourceKillfocus(){
	
}*/
long CPurchaseOrderNonStockDialog::OnResourceLoadData(){
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

/*void CPurchaseOrderNonStockDialog::OnResourceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderNonStockDialog::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderNonStockDialog::OnSupplierSelendok(){
	 
}

/*void CPurchaseOrderNonStockDialog::OnSupplierSetfocus(){
	
}*/
/*void CPurchaseOrderNonStockDialog::OnSupplierKillfocus(){
	
}*/
long CPurchaseOrderNonStockDialog::OnSupplierLoadData(){
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

/*void CPurchaseOrderNonStockDialog::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderNonStockDialog::OnDelivererChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnDelivererSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnDelivererKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnDelivererCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonStockDialog::OnReceiverChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnReceiverSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnReceiverKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnReceiverCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonStockDialog::OnDescriptionChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnDescriptionSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnDescriptionKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonStockDialog::OnReferenceChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnReferenceSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnReferenceKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnReferenceCheckValue(){
	return 0;
} 
/*void CPurchaseOrderNonStockDialog::OnOrderNoChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnOrderNoKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnOrderNoCheckValue(){
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
 
/*void CPurchaseOrderNonStockDialog::OnOrderDateChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnOrderDateSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnOrderDateKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonStockDialog::OnInvoiceNoChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnInvoiceNoKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CPurchaseOrderNonStockDialog::OnInvoiceDateChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnInvoiceDateSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnInvoiceDateKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnInvoiceDateCheckValue(){
	return 0;
} 
void CPurchaseOrderNonStockDialog::OnVATSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPurchaseOrderNonStockDialog::OnVATSelendok(){
	 
}

/*void CPurchaseOrderNonStockDialog::OnVATSetfocus(){
	
}*/
/*void CPurchaseOrderNonStockDialog::OnVATKillfocus(){
	
}*/
long CPurchaseOrderNonStockDialog::OnVATLoadData(){
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

/*void CPurchaseOrderNonStockDialog::OnVATAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderNonStockDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
/*void CPurchaseOrderNonStockDialog::OnTotalLinesChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnTotalLinesSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnTotalLinesKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnTotalLinesCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonStockDialog::OnNetAmountChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnNetAmountSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnNetAmountKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnNetAmountCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonStockDialog::OnTaxesAmountChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnTaxesAmountSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnTaxesAmountKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnTaxesAmountCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderNonStockDialog::OnTotalAmountChange(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnTotalAmountSetfocus(){
	
} */
/*void CPurchaseOrderNonStockDialog::OnTotalAmountKillfocus(){
	
} */
int CPurchaseOrderNonStockDialog::OnTotalAmountCheckValue(){
	return 0;
}
 
void CPurchaseOrderNonStockDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.OnListAddItem();
}
 
void CPurchaseOrderNonStockDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddPurchaseOrderDialogEx();
}
 
void CPurchaseOrderNonStockDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditPurchaseOrderDialogEx();
}
 
void CPurchaseOrderNonStockDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderDialogEx();
}
 
void CPurchaseOrderNonStockDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePurchaseOrderDialogEx();
}
 
void CPurchaseOrderNonStockDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardPurchaseOrderDialogEx();
}
 
void CPurchaseOrderNonStockDialog::OnPrintSelect(){
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
 
void CPurchaseOrderNonStockDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("O"))
		return;
	
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDNO)
		return;

	szSQL.Format(_T("PURCHASE_ORDER_APPROVAL(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
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
			m_wndAdd.SetFocus();
		}
	}
	else
	{
		ShowMessageBox(_T("Cannot post purchase order"));
	}
}
 
void CPurchaseOrderNonStockDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_bRefresh)
		CGuiDialog::OnOK();
	else
		CGuiDialog::OnCancel();
}
 
int CPurchaseOrderNonStockDialog::OnAddPurchaseOrderDialogEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderNonStockDialog::OnEditPurchaseOrderDialogEx(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderNonStockDialog::OnDeletePurchaseOrderDialogEx(){
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
		m_bRefresh = true;
 		OnDiscardPurchaseOrderDialogEx(); 
 	}
	else
	{
		ShowMessageBox(_T("Can not delete order"));
	}
	return 0;
}
int CPurchaseOrderNonStockDialog::OnSavePurchaseOrderDialogEx(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
//	m_wndOrderDate.SetMax((LPCTSTR)pMF->GetSysDateTime());
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

		szSQL = m_purchase_orderTbl.GetUpdateSQL(_T("po_purchase_order_id,po_createddate,po_createdby,po_storage_id,po_partner_id,po_resource,po_tax_id,po_orderno,po_orderdate"));
		szSQL.AppendFormat(_T(" %s "), szWhere);

	}
Notice(szSQL);
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
 	{ 

		m_bRefresh = true;

		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);

		}
		else{
			szSQL.Format(_T("AD_GETNEXTVAL('PURCHASE_ORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			GetDataToScreen();
			SetMode(VM_VIEW);
			OnAddLineSelect();
		}
		return 1;
 	} 
 	return -1; 

}
int CPurchaseOrderNonStockDialog::OnDiscardPurchaseOrderDialogEx(){
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
int CPurchaseOrderNonStockDialog::OnPurchaseOrderDialogExListLoadData(){
	return 0;
}

void CPurchaseOrderNonStockDialog::CreateTabViews(){
	m_wndLines.m_pWndOrder = this;
	m_wndLines.Create(&m_wndTab);
	m_wndLines.OnInitDialog();
	m_wndTab.Add(_T("Items"), &m_wndLines);
//	m_wndTab.Add(_T("Tax"), NULL);
//	m_wndTab.Add(_T("Basic Discounts"), NULL);

	
	m_wndTab.SetCurSel(0);
}

void CPurchaseOrderNonStockDialog::RecalcAmount(){
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


BOOL CPurchaseOrderNonStockDialog::PreTranslateMessage(MSG* pMsg){
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