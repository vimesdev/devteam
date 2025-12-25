#include "PurchasePaymentDialog.h"
#include "MainFrm.h"
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchasePaymentDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
/*static void _OnDepositNumberChangeFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDepositNumberChange();
} */
/*static void _OnDepositNumberSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDepositNumberSetfocus();} */ 
/*static void _OnDepositNumberKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDepositNumberKillfocus();
} */
static int _OnDepositNumberCheckValueFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnDepositNumberCheckValue();
} 
static void _OnResourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchasePaymentDialog* )pWnd)->OnResourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResourceSelendokFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnResourceSelendok();
}
/*static void _OnResourceSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnResourceKillfocus();
}*/
/*static void _OnResourceKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnResourceKillfocus();
}*/
static long _OnResourceLoadDataFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnResourceLoadData();
}
/*static void _OnResourceAddNewFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnResourceAddNew();
}*/
static void _OnDebitAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchasePaymentDialog* )pWnd)->OnDebitAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAcctSelendokFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDebitAcctSelendok();
}
/*static void _OnDebitAcctSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDebitAcctKillfocus();
}*/
/*static void _OnDebitAcctKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDebitAcctKillfocus();
}*/
static long _OnDebitAcctLoadDataFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnDebitAcctLoadData();
}
/*static void _OnDebitAcctAddNewFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDebitAcctAddNew();
}*/
static void _OnCreditAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchasePaymentDialog* )pWnd)->OnCreditAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAcctSelendokFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnCreditAcctSelendok();
}
/*static void _OnCreditAcctSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnCreditAcctKillfocus();
}*/
/*static void _OnCreditAcctKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnCreditAcctKillfocus();
}*/
static long _OnCreditAcctLoadDataFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnCreditAcctLoadData();
}
/*static void _OnCreditAcctAddNewFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnCreditAcctAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CPurchasePaymentDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog *)pWnd)->OnAccountingDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchasePaymentDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchasePaymentDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchasePaymentDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchasePaymentDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchasePaymentDialog *pVw = (CPurchasePaymentDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchasePaymentDialog *pVw = (CPurchasePaymentDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchasePaymentDialog *pVw = (CPurchasePaymentDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchasePaymentDialog *pVw = (CPurchasePaymentDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchasePaymentDialog *pVw = (CPurchasePaymentDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPurchasePaymentDialog *pVw = (CPurchasePaymentDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchasePaymentDialog *pVw = (CPurchasePaymentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddInvoiceSelectFnc(CWnd *pWnd){
	CPurchasePaymentDialog *pVw = (CPurchasePaymentDialog *)pWnd;
	pVw->OnAddInvoiceSelect();
} 
static int _OnAddPurchasePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchasePaymentDialog*)pWnd)->OnAddPurchasePaymentDialog();
} 
static int _OnEditPurchasePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchasePaymentDialog*)pWnd)->OnEditPurchasePaymentDialog();
} 
static int _OnDeletePurchasePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchasePaymentDialog*)pWnd)->OnDeletePurchasePaymentDialog();
} 
static int _OnSavePurchasePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchasePaymentDialog*)pWnd)->OnSavePurchasePaymentDialog();
} 
static int _OnCancelPurchasePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchasePaymentDialog*)pWnd)->OnCancelPurchasePaymentDialog();
} 
CPurchasePaymentDialog::CPurchasePaymentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1025;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CPurchasePaymentDialog::~CPurchasePaymentDialog(){
}
void CPurchasePaymentDialog::OnCreateComponents(){
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 5, 5, 125, 30);
	m_wndPaymentMethod.Create(this,130, 5, 380, 30); 
	m_wndDepositNumberLabel.Create(this, _T("Deposit Number"), 385, 5, 505, 30);
	m_wndDepositNumber.Create(this,510, 5, 590, 30); 
	m_wndResourceLabel.Create(this, _T("Resource"), 595, 5, 675, 30);
	m_wndResource.Create(this,680, 5, 760, 30); 
	m_wndDebitAcctLabel.Create(this, _T("Debit Acct"), 5, 35, 125, 60);
	m_wndDebitAcct.Create(this,130, 35, 380, 60); 
	m_wndCreditAcctLabel.Create(this, _T("Credit Acct"), 385, 35, 505, 60);
	m_wndCreditAcct.Create(this,510, 35, 760, 60); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 65, 125, 90);
	m_wndDescription.Create(this,130, 65, 760, 90); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 765, 5, 885, 30);
	m_wndOrderNo.Create(this,890, 5, 1010, 30); 
	m_wndOrderDate.Create(this,890, 35, 1010, 60); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 765, 35, 885, 60);
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 765, 65, 885, 90);
	m_wndAccountingDate.Create(this,890, 65, 1010, 90); 
	m_wndList.Create(this,5, 95, 1010, 570); 
	m_wndAdd.Create(this, _T("&Add"), 350, 575, 440, 600);
	m_wndEdit.Create(this, _T("&Edit"), 445, 575, 535, 600);
	m_wndDelete.Create(this, _T("&Delete"), 540, 575, 630, 600);
	m_wndSave.Create(this, _T("&Save"), 635, 575, 725, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 730, 575, 820, 600);
	m_wndPrint.Create(this, _T("&Print"), 825, 575, 915, 600);
	m_wndClose.Create(this, _T("&Close"), 920, 575, 1010, 600);
	m_wndAddInvoice.Create(this, _T("Add Invoice"), 5, 575, 95, 600);

}
void CPurchasePaymentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(15);
	m_wndDepositNumber.SetLimitText(35);
	m_wndDepositNumber.SetCheckValue(true);
	m_wndResource.SetCheckValue(true);
	m_wndResource.LimitText(35);
	m_wndDebitAcct.SetCheckValue(true);
	m_wndDebitAcct.LimitText(32);
	m_wndCreditAcct.SetCheckValue(true);
	m_wndCreditAcct.LimitText(32);
	m_wndDescription.SetLimitText(255);
	m_wndDescription.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(15);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);


	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndResource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDebitAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDebitAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndList.InsertColumn(0, _T("PO_ORDERNO"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("PO_ORDERDATE"), CFMT_DATE, 110);
	m_wndList.InsertColumn(2, _T("Invoice No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Invoice Date"), CFMT_DATE, 110);
	m_wndList.InsertColumn(4, _T("Supplier"), CFMT_TEXT, 450);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 110);
	m_purchase_paymentTbl.SetTableName(_T("purchase_payment"));
	m_purchase_paymentTbl.AddField(_T("PP_PURCHASE_PAYMENT_ID"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_CLIENT_ID"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_ORG_ID"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_USER_ID"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_ISACTIVE"), dfText, 1); 
	m_purchase_paymentTbl.AddField(_T("PP_CREATEDDATE"), dfDateTime); 
	m_purchase_paymentTbl.AddField(_T("PP_CREATEDBY"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_UPDATEDDATE"), dfDateTime); 
	m_purchase_paymentTbl.AddField(_T("PP_UPDATEDBY"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_ORDERNO"), dfText, 15); 
	m_purchase_paymentTbl.AddField(_T("PP_ORDERDATE"), dfDateTime); 
	m_purchase_paymentTbl.AddField(_T("PP_ACCTDATE"), dfDate); 
	m_purchase_paymentTbl.AddField(_T("PP_CURRENCY_ID"), dfText, 3); 
	m_purchase_paymentTbl.AddField(_T("PP_EXCHANGERATE"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_DEBITACCT"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_CREDITACCT"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_DESCRIPTION"), dfText, 255); 
	m_purchase_paymentTbl.AddField(_T("PP_TRANSACTOR"), dfText, 128); 
	m_purchase_paymentTbl.AddField(_T("PP_SALEPERSON_ID"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_PAYMENT_METHOD_ID"), dfText, 15); 
	m_purchase_paymentTbl.AddField(_T("PP_PAYMENT_TERMS_ID"), dfText, 15); 
	m_purchase_paymentTbl.AddField(_T("PP_EXPIRATIONDATE"), dfDate); 
	m_purchase_paymentTbl.AddField(_T("PP_DELIVERY_METHOD_ID"), dfText, 15); 
	m_purchase_paymentTbl.AddField(_T("PP_DELIVERY_TERMS_ID"), dfText, 15); 
	m_purchase_paymentTbl.AddField(_T("PP_DELIVERYDATE"), dfDate); 
	m_purchase_paymentTbl.AddField(_T("PP_DELIVERYADDRESS"), dfText, 255); 
	m_purchase_paymentTbl.AddField(_T("PP_BEGININGBALANCE"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_ENDINGBALANCE"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_STATUS"), dfText, 1); 
	m_purchase_paymentTbl.AddField(_T("PP_POSTED"), dfText, 1); 
	m_purchase_paymentTbl.AddField(_T("PP_POSTEDBY"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_POSTEDDATE"), dfDateTime); 
	m_purchase_paymentTbl.AddField(_T("PP_LOCKED"), dfText, 1); 
	m_purchase_paymentTbl.AddField(_T("PP_NETAMOUNT"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_DISAMOUNT"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_TAXAMOUNT"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_TOTALAMOUNT"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_EXCHANGEAMOUNT"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_ISPRINTED"), dfText, 1); 
	m_purchase_paymentTbl.AddField(_T("PP_ISTAXINCLUDED"), dfText, 1); 
	m_purchase_paymentTbl.AddField(_T("PP_ISDISCOUNT"), dfText, 1); 
	m_purchase_paymentTbl.AddField(_T("PP_EXPENSE_ID"), dfText, 32); 
	m_purchase_paymentTbl.AddField(_T("PP_DELIVERYBY"), dfText, 60); 
	m_purchase_paymentTbl.AddField(_T("PP_RECEIVEDBY"), dfText, 60); 
	m_purchase_paymentTbl.AddField(_T("PP_APPROVEDDATE"), dfDateTime); 
	m_purchase_paymentTbl.AddField(_T("PP_APPROVEDBY"), dfText, 20); 
	m_purchase_paymentTbl.AddField(_T("PP_CASH_ID"), dfLong); 
	m_purchase_paymentTbl.AddField(_T("PP_PAIDAMOUNT"), dfLong); 

}
void CPurchasePaymentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	//m_wndDepositNumber.SetEvent(WE_CHANGE, _OnDepositNumberChangeFnc);
	//m_wndDepositNumber.SetEvent(WE_SETFOCUS, _OnDepositNumberSetfocusFnc);
	//m_wndDepositNumber.SetEvent(WE_KILLFOCUS, _OnDepositNumberKillfocusFnc);
	m_wndDepositNumber.SetEvent(WE_CHECKVALUE, _OnDepositNumberCheckValueFnc);
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
	//m_wndAccountingDate.SetEvent(WE_CHANGE, _OnAccountingDateChangeFnc);
	//m_wndAccountingDate.SetEvent(WE_SETFOCUS, _OnAccountingDateSetfocusFnc);
	//m_wndAccountingDate.SetEvent(WE_KILLFOCUS, _OnAccountingDateKillfocusFnc);
	m_wndAccountingDate.SetEvent(WE_CHECKVALUE, _OnAccountingDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddInvoice.SetEvent(WE_CLICK, _OnAddInvoiceSelectFnc);
	SetMode(VM_NONE);

}
void CPurchasePaymentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_Text(pDX, m_wndDepositNumber.GetDlgCtrlID(), m_szDepositNumber);
	DDX_TextEx(pDX, m_wndResource.GetDlgCtrlID(), m_szResourceKey);
	DDX_TextEx(pDX, m_wndDebitAcct.GetDlgCtrlID(), m_szDebitAcctKey);
	DDX_TextEx(pDX, m_wndCreditAcct.GetDlgCtrlID(), m_szCreditAcctKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);

}
void CPurchasePaymentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("PP_ORDERNO"), m_szOrderNo);
	rs.GetValue(_T("PP_ORDERDATE"), m_szOrderDate);
	rs.GetValue(_T("PP_ACCTDATE"), m_szAccountingDate);
	rs.GetValue(_T("PP_DEBITACCT"), m_szDebitAcctKey);
	rs.GetValue(_T("PP_CREDITACCT"), m_szCreditAcctKey);
	rs.GetValue(_T("PP_DESCRIPTION"), m_szDescription);
	rs.GetValue(_T("PP_PAYMENT_METHOD_ID"), m_szPaymentMethodKey);

}
void CPurchasePaymentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_purchase_paymentTbl.SetValue(_T("PP_ORDERNO"), m_szOrderNo);
	m_purchase_paymentTbl.SetValue(_T("PP_ORDERDATE"), m_szOrderDate);
	m_purchase_paymentTbl.SetValue(_T("PP_ACCTDATE"), m_szAccountingDate);
	m_purchase_paymentTbl.SetValue(_T("PP_DEBITACCT"), m_szDebitAcctKey);
	m_purchase_paymentTbl.SetValue(_T("PP_CREDITACCT"), m_szCreditAcctKey);
	m_purchase_paymentTbl.SetValue(_T("PP_DESCRIPTION"), m_szDescription);
	m_purchase_paymentTbl.SetValue(_T("PP_PAYMENT_METHOD_ID"), m_szPaymentMethodKey);

}
void CPurchasePaymentDialog::SetDefaultValues(){

	m_szPaymentMethodKey.Empty();
	m_szDepositNumber.Empty();
	m_szResourceKey.Empty();
	m_szDebitAcctKey.Empty();
	m_szCreditAcctKey.Empty();
	m_szDescription.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szAccountingDate.Empty();

}
int CPurchasePaymentDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CPurchasePaymentDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnPaymentMethodSelendok(){
	 
}
/*void CPurchasePaymentDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CPurchasePaymentDialog::OnPaymentMethodKillfocus(){
	
}*/
long CPurchasePaymentDialog::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CPurchasePaymentDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPurchasePaymentDialog::OnDepositNumberChange(){
	
} */
/*void CPurchasePaymentDialog::OnDepositNumberSetfocus(){
	
} */
/*void CPurchasePaymentDialog::OnDepositNumberKillfocus(){
	
} */
int CPurchasePaymentDialog::OnDepositNumberCheckValue(){
	return 0;
} 
void CPurchasePaymentDialog::OnResourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnResourceSelendok(){
	 
}
/*void CPurchasePaymentDialog::OnResourceSetfocus(){
	
}*/
/*void CPurchasePaymentDialog::OnResourceKillfocus(){
	
}*/
long CPurchasePaymentDialog::OnResourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CPurchasePaymentDialog::OnResourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchasePaymentDialog::OnDebitAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnDebitAcctSelendok(){
	 
}
/*void CPurchasePaymentDialog::OnDebitAcctSetfocus(){
	
}*/
/*void CPurchasePaymentDialog::OnDebitAcctKillfocus(){
	
}*/
long CPurchasePaymentDialog::OnDebitAcctLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CPurchasePaymentDialog::OnDebitAcctAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchasePaymentDialog::OnCreditAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnCreditAcctSelendok(){
	 
}
/*void CPurchasePaymentDialog::OnCreditAcctSetfocus(){
	
}*/
/*void CPurchasePaymentDialog::OnCreditAcctKillfocus(){
	
}*/
long CPurchasePaymentDialog::OnCreditAcctLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchasePaymentDialog::OnCreditAcctAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPurchasePaymentDialog::OnDescriptionChange(){
	
} */
/*void CPurchasePaymentDialog::OnDescriptionSetfocus(){
	
} */
/*void CPurchasePaymentDialog::OnDescriptionKillfocus(){
	
} */
int CPurchasePaymentDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CPurchasePaymentDialog::OnOrderNoChange(){
	
} */
/*void CPurchasePaymentDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchasePaymentDialog::OnOrderNoKillfocus(){
	
} */
int CPurchasePaymentDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CPurchasePaymentDialog::OnOrderDateChange(){
	
} */
/*void CPurchasePaymentDialog::OnOrderDateSetfocus(){
	
} */
/*void CPurchasePaymentDialog::OnOrderDateKillfocus(){
	
} */
int CPurchasePaymentDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPurchasePaymentDialog::OnAccountingDateChange(){
	
} */
/*void CPurchasePaymentDialog::OnAccountingDateSetfocus(){
	
} */
/*void CPurchasePaymentDialog::OnAccountingDateKillfocus(){
	
} */
int CPurchasePaymentDialog::OnAccountingDateCheckValue(){
	return 0;
} 
void CPurchasePaymentDialog::OnListDblClick(){
	
} 
void CPurchasePaymentDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchasePaymentDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPurchasePaymentDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("PO_ORDERNO")), 
			rs.GetValue(_T("PO_ORDERDATE")), 
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Supplier")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPurchasePaymentDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchasePaymentDialog::OnAddInvoiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchasePaymentDialog::OnAddPurchasePaymentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchasePaymentDialog::OnEditPurchasePaymentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchasePaymentDialog::OnDeletePurchasePaymentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPurchasePaymentDialog();
 	}
	return 0;
}
int CPurchasePaymentDialog::OnSavePurchasePaymentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_purchase_paymentTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_purchase_paymentTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnPurchasePaymentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchasePaymentDialog::OnCancelPurchasePaymentDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CPurchasePaymentDialog::OnPurchasePaymentDialogListLoadData(){
	return 0;
}
