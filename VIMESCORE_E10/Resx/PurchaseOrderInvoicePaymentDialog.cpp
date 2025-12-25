#include "PurchaseOrderInvoicePaymentDialog.h"
#include "MainFrm.h"
static void _OnPayOrderSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderInvoicePaymentDialog* )pWnd)->OnPayOrderSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayOrderSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPayOrderSelendok();
}
/*static void _OnPayOrderSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPayOrderKillfocus();
}*/
/*static void _OnPayOrderKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPayOrderKillfocus();
}*/
static long _OnPayOrderLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPayOrderLoadData();
}
/*static void _OnPayOrderAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPayOrderAddNew();
}*/
static void _OnResourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderInvoicePaymentDialog* )pWnd)->OnResourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResourceSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnResourceSelendok();
}
/*static void _OnResourceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnResourceKillfocus();
}*/
/*static void _OnResourceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnResourceKillfocus();
}*/
static long _OnResourceLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnResourceLoadData();
}
/*static void _OnResourceAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnResourceAddNew();
}*/
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderInvoicePaymentDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnDebitAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderInvoicePaymentDialog* )pWnd)->OnDebitAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAcctSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDebitAcctSelendok();
}
/*static void _OnDebitAcctSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDebitAcctKillfocus();
}*/
/*static void _OnDebitAcctKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDebitAcctKillfocus();
}*/
static long _OnDebitAcctLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDebitAcctLoadData();
}
/*static void _OnDebitAcctAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDebitAcctAddNew();
}*/
static void _OnCreditAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderInvoicePaymentDialog* )pWnd)->OnCreditAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAcctSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnCreditAcctSelendok();
}
/*static void _OnCreditAcctSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnCreditAcctKillfocus();
}*/
/*static void _OnCreditAcctKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnCreditAcctKillfocus();
}*/
static long _OnCreditAcctLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnCreditAcctLoadData();
}
/*static void _OnCreditAcctAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnCreditAcctAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog *)pWnd)->OnAccountingDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddInvoiceSelectFnc(CWnd *pWnd){
	CPurchaseOrderInvoicePaymentDialog *pVw = (CPurchaseOrderInvoicePaymentDialog *)pWnd;
	pVw->OnAddInvoiceSelect();
} 
static int _OnAddPurchaseOrderInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnAddPurchaseOrderInvoicePaymentDialog();
} 
static int _OnEditPurchaseOrderInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnEditPurchaseOrderInvoicePaymentDialog();
} 
static int _OnDeletePurchaseOrderInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnDeletePurchaseOrderInvoicePaymentDialog();
} 
static int _OnSavePurchaseOrderInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnSavePurchaseOrderInvoicePaymentDialog();
} 
static int _OnCancelPurchaseOrderInvoicePaymentDialogFnc(CWnd *pWnd){
	 return ((CPurchaseOrderInvoicePaymentDialog*)pWnd)->OnCancelPurchaseOrderInvoicePaymentDialog();
} 
CPurchaseOrderInvoicePaymentDialog::CPurchaseOrderInvoicePaymentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CPurchaseOrderInvoicePaymentDialog::~CPurchaseOrderInvoicePaymentDialog(){
}
void CPurchaseOrderInvoicePaymentDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 1000, 120);
	m_wndPayOrderLabel.Create(this, _T("Pay Order"), 10, 30, 110, 55);
	m_wndPayOrder.Create(this,115, 30, 195, 55); 
	m_wndResourceLabel.Create(this, _T("Resource"), 200, 30, 270, 55);
	m_wndResource.Create(this,275, 30, 395, 55); 
	m_wndPaymentMethodLabel.Create(this, _T("Pay Method"), 400, 30, 500, 55);
	m_wndPaymentMethod.Create(this,505, 30, 745, 55); 
	m_wndDebitAcctLabel.Create(this, _T("Debit Acct"), 10, 60, 110, 85);
	m_wndDebitAcct.Create(this,115, 60, 395, 85); 
	m_wndCreditAcctLabel.Create(this, _T("Credit Acct"), 400, 60, 500, 85);
	m_wndCreditAcct.Create(this,505, 60, 745, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 110, 115);
	m_wndDescription.Create(this,115, 90, 745, 115); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 750, 30, 870, 55);
	m_wndOrderNo.Create(this,875, 30, 995, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 750, 60, 870, 85);
	m_wndOrderDate.Create(this,875, 60, 995, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 750, 90, 870, 115);
	m_wndAccountingDate.Create(this,875, 90, 995, 115); 
	m_wndList.Create(this,5, 125, 1000, 570); 
	m_wndAdd.Create(this, _T("&Add"), 245, 575, 335, 600);
	m_wndEdit.Create(this, _T("&Edit"), 340, 575, 430, 600);
	m_wndDelete.Create(this, _T("&Delete"), 435, 575, 525, 600);
	m_wndSave.Create(this, _T("&Save"), 530, 575, 620, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 625, 575, 715, 600);
	m_wndPrint.Create(this, _T("&Print"), 720, 575, 810, 600);
	m_wndApproval.Create(this, _T("&Approval"), 815, 575, 905, 600);
	m_wndClose.Create(this, _T("&Close"), 910, 575, 1000, 600);
	m_wndAddInvoice.Create(this, _T("Add Invoice"), 5, 575, 125, 600);

}
void CPurchaseOrderInvoicePaymentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPayOrder.SetCheckValue(true);
	m_wndPayOrder.LimitText(35);
	m_wndResource.SetCheckValue(true);
	m_wndResource.LimitText(1024);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(1024);
	m_wndDebitAcct.SetCheckValue(true);
	m_wndDebitAcct.LimitText(1024);
	m_wndCreditAcct.SetCheckValue(true);
	m_wndCreditAcct.LimitText(1024);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);


	m_wndPayOrder.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPayOrder.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);











}
void CPurchaseOrderInvoicePaymentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPayOrder.SetEvent(WE_SELENDOK, _OnPayOrderSelendokFnc);
	//m_wndPayOrder.SetEvent(WE_SETFOCUS, _OnPayOrderSetfocusFnc);
	//m_wndPayOrder.SetEvent(WE_KILLFOCUS, _OnPayOrderKillfocusFnc);
	m_wndPayOrder.SetEvent(WE_SELCHANGE, _OnPayOrderSelectChangeFnc);
	m_wndPayOrder.SetEvent(WE_LOADDATA, _OnPayOrderLoadDataFnc);
	//m_wndPayOrder.SetEvent(WE_ADDNEW, _OnPayOrderAddNewFnc);
	m_wndResource.SetEvent(WE_SELENDOK, _OnResourceSelendokFnc);
	//m_wndResource.SetEvent(WE_SETFOCUS, _OnResourceSetfocusFnc);
	//m_wndResource.SetEvent(WE_KILLFOCUS, _OnResourceKillfocusFnc);
	m_wndResource.SetEvent(WE_SELCHANGE, _OnResourceSelectChangeFnc);
	m_wndResource.SetEvent(WE_LOADDATA, _OnResourceLoadDataFnc);
	//m_wndResource.SetEvent(WE_ADDNEW, _OnResourceAddNewFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
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
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddInvoice.SetEvent(WE_CLICK, _OnAddInvoiceSelectFnc);
	SetMode(VM_NONE);

}
void CPurchaseOrderInvoicePaymentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPayOrder.GetDlgCtrlID(), m_szPayOrderKey);
	DDX_TextEx(pDX, m_wndResource.GetDlgCtrlID(), m_szResourceKey);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndDebitAcct.GetDlgCtrlID(), m_szDebitAcctKey);
	DDX_TextEx(pDX, m_wndCreditAcct.GetDlgCtrlID(), m_szCreditAcctKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);

}
void CPurchaseOrderInvoicePaymentDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PayOrder")] =  m_szPayOrderKey;
	m_jData[_T("Resource")] =  m_szResourceKey;
	m_jData[_T("PaymentMethod")] =  m_szPaymentMethodKey;
	m_jData[_T("DebitAcct")] =  m_szDebitAcctKey;
	m_jData[_T("CreditAcct")] =  m_szCreditAcctKey;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("OrderNo")] =  m_szOrderNo;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("AccountingDate")] =  m_szAccountingDate;
	}
	else
	{
			
	m_jData[_T("PayOrder")].GetValue(m_szPayOrderKey);
	m_jData[_T("Resource")].GetValue(m_szResourceKey);
	m_jData[_T("PaymentMethod")].GetValue(m_szPaymentMethodKey);
	m_jData[_T("DebitAcct")].GetValue(m_szDebitAcctKey);
	m_jData[_T("CreditAcct")].GetValue(m_szCreditAcctKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("OrderNo")].GetValue(m_szOrderNo);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("AccountingDate")].GetValue(m_szAccountingDate);
	}

}
void CPurchaseOrderInvoicePaymentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderInvoicePaymentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPurchaseOrderInvoicePaymentDialog::SetDefaultValues(){

	m_szPayOrderKey.Empty();
	m_szResourceKey.Empty();
	m_szPaymentMethodKey.Empty();
	m_szDebitAcctKey.Empty();
	m_szCreditAcctKey.Empty();
	m_szDescription.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szAccountingDate.Empty();

}
int CPurchaseOrderInvoicePaymentDialog::SetMode(int nMode){
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
void CPurchaseOrderInvoicePaymentDialog::OnPayOrderSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnPayOrderSelendok(){
	 
}
/*void CPurchaseOrderInvoicePaymentDialog::OnPayOrderSetfocus(){
	
}*/
/*void CPurchaseOrderInvoicePaymentDialog::OnPayOrderKillfocus(){
	
}*/
long CPurchaseOrderInvoicePaymentDialog::OnPayOrderLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPayOrder.IsSearchKey() && !m_szPayOrderKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayOrderKey
};
	m_wndPayOrder.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPayOrder.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderInvoicePaymentDialog::OnPayOrderAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderInvoicePaymentDialog::OnResourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnResourceSelendok(){
	 
}
/*void CPurchaseOrderInvoicePaymentDialog::OnResourceSetfocus(){
	
}*/
/*void CPurchaseOrderInvoicePaymentDialog::OnResourceKillfocus(){
	
}*/
long CPurchaseOrderInvoicePaymentDialog::OnResourceLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderInvoicePaymentDialog::OnResourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderInvoicePaymentDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnPaymentMethodSelendok(){
	 
}
/*void CPurchaseOrderInvoicePaymentDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CPurchaseOrderInvoicePaymentDialog::OnPaymentMethodKillfocus(){
	
}*/
long CPurchaseOrderInvoicePaymentDialog::OnPaymentMethodLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderInvoicePaymentDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderInvoicePaymentDialog::OnDebitAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnDebitAcctSelendok(){
	 
}
/*void CPurchaseOrderInvoicePaymentDialog::OnDebitAcctSetfocus(){
	
}*/
/*void CPurchaseOrderInvoicePaymentDialog::OnDebitAcctKillfocus(){
	
}*/
long CPurchaseOrderInvoicePaymentDialog::OnDebitAcctLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderInvoicePaymentDialog::OnDebitAcctAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPurchaseOrderInvoicePaymentDialog::OnCreditAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnCreditAcctSelendok(){
	 
}
/*void CPurchaseOrderInvoicePaymentDialog::OnCreditAcctSetfocus(){
	
}*/
/*void CPurchaseOrderInvoicePaymentDialog::OnCreditAcctKillfocus(){
	
}*/
long CPurchaseOrderInvoicePaymentDialog::OnCreditAcctLoadData(){
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
/*void CPurchaseOrderInvoicePaymentDialog::OnCreditAcctAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnDescriptionChange(){
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnDescriptionSetfocus(){
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnDescriptionKillfocus(){
	
} */
int CPurchaseOrderInvoicePaymentDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoicePaymentDialog::OnOrderNoChange(){
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnOrderNoSetfocus(){
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnOrderNoKillfocus(){
	
} */
int CPurchaseOrderInvoicePaymentDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoicePaymentDialog::OnOrderDateChange(){
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnOrderDateSetfocus(){
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnOrderDateKillfocus(){
	
} */
int CPurchaseOrderInvoicePaymentDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderInvoicePaymentDialog::OnAccountingDateChange(){
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnAccountingDateSetfocus(){
	
} */
/*void CPurchaseOrderInvoicePaymentDialog::OnAccountingDateKillfocus(){
	
} */
int CPurchaseOrderInvoicePaymentDialog::OnAccountingDateCheckValue(){
	return 0;
} 
void CPurchaseOrderInvoicePaymentDialog::OnListDblClick(){
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderInvoicePaymentDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPurchaseOrderInvoicePaymentDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPurchaseOrderInvoicePaymentDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnApprovalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPurchaseOrderInvoicePaymentDialog::OnAddInvoiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPurchaseOrderInvoicePaymentDialog::OnAddPurchaseOrderInvoicePaymentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderInvoicePaymentDialog::OnEditPurchaseOrderInvoicePaymentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderInvoicePaymentDialog::OnDeletePurchaseOrderInvoicePaymentDialog(){
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
 		OnCancelPurchaseOrderInvoicePaymentDialog();
 	}
	return 0;
}
int CPurchaseOrderInvoicePaymentDialog::OnSavePurchaseOrderInvoicePaymentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnPurchaseOrderInvoicePaymentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderInvoicePaymentDialog::OnCancelPurchaseOrderInvoicePaymentDialog(){
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
int CPurchaseOrderInvoicePaymentDialog::OnPurchaseOrderInvoicePaymentDialogListLoadData(){
	return 0;
}
