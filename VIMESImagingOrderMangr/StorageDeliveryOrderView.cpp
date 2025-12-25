#include "StorageDeliveryOrderView.h"
#include "MainFrm.h"
#include "StorageDeliveryOrderLineInput.h"
#include "HMSReportForms/PrintForms.h"

static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDeliveryOrderView* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDeliveryOrderView* )pWnd)->OnToDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnToDepartmentSelendok();
}
/*static void _OnToDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnToDepartmentKillfocus();
}*/
/*static void _OnToDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnToDepartmentKillfocus();
}*/
static long _OnToDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnToDepartmentLoadData();
}
/*static void _OnToDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnToDepartmentAddNew();
}*/
static void _OnDelivererSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDeliveryOrderView* )pWnd)->OnDelivererSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDelivererSelendokFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDelivererSelendok();
}
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDelivererKillfocus();
}*/
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDelivererKillfocus();
}*/
static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnDelivererLoadData();
}
/*static void _OnDelivererAddNewFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDelivererAddNew();
}*/
static void _OnReceiverSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDeliveryOrderView* )pWnd)->OnReceiverSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiverSelendokFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnReceiverSelendok();
}
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnReceiverKillfocus();
}*/
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnReceiverKillfocus();
}*/
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnReceiverLoadData();
}
/*static void _OnReceiverAddNewFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnReceiverAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnAccountingDateCheckValue();
}


static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnApprovedDateCheckValue();
}

static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDeliveryOrderView* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeAddNew();
}*/

static void _OnReferenceLabelSelectFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnReferenceLabelSelect();
}
static void _OnDeliveryObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDeliveryOrderView* )pWnd)->OnDeliveryObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryObjectSelendokFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDeliveryObjectSelendok();
}
/*static void _OnDeliveryObjectSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDeliveryObjectKillfocus();
}*/
/*static void _OnDeliveryObjectKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDeliveryObjectKillfocus();
}*/
static long _OnDeliveryObjectLoadDataFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnDeliveryObjectLoadData();
}
/*static void _OnDeliveryObjectAddNewFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDeliveryObjectAddNew();
}*/

/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CStorageDeliveryOrderView*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnAddStorageDeliveryOrderView();
} 
static int _OnEditStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnEditStorageDeliveryOrderView();
} 
static int _OnDeleteStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnDeleteStorageDeliveryOrderView();
} 
static int _OnSaveStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnSaveStorageDeliveryOrderView();
} 
static int _OnDiscardStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnDiscardStorageDeliveryOrderView();
} 
CStorageDeliveryOrderView::CStorageDeliveryOrderView()
{
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	SetWindowName(_T("StorageDeliveryOrderView"));
	m_bRefresh = false;
	m_wndList = NULL;

}
CStorageDeliveryOrderView::~CStorageDeliveryOrderView(){
	
}
void CStorageDeliveryOrderView::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 120);
	m_wndOrderInformation.Create(this, _T("Order Information"), 690, 5, 1005, 120);
	m_wndTransactionTypeLabel.Create(this, _T("Transaction Type"), 10, 30, 135, 55);
	m_wndTransactionType.Create(this,140, 30, 340, 55); 
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 345, 30, 470, 55);
	m_wndFromStorage.Create(this,475, 30, 680, 55); 
	m_wndDescriptionLabel.Create(this, _T("Reason"), 10, 60, 135, 85);
	m_wndDescription.Create(this,140, 60, 680, 115); 
	m_wndOrderNoLabel.Create(this, _T("ORDERNO"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("ORDERDATE"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 695, 90, 845, 115);
	m_wndAccountingDate.Create(this,850, 90, 1000, 115); 
	m_wndApprovedDate.Create(this,850, 90, 1000, 115); 
	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 4, 545, 104, 570);
	m_wndTotalLines.Create(this,109, 545, 184, 570); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 696, 545, 846, 570);
	m_wndTotalAmount.Create(this,851, 545, 1001, 570); 
	m_wndAdd.Create(this, _T("&Add"), 245, 575, 335, 600);
	m_wndEdit.Create(this, _T("&Edit"), 340, 575, 430, 600);
	m_wndDelete.Create(this, _T("&Delete"), 435, 575, 525, 600);
	m_wndSave.Create(this, _T("&Save"), 530, 575, 620, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 625, 575, 715, 600);
	m_wndPrint.Create(this, _T("&Print"), 720, 575, 810, 600);
	m_wndPost.Create(this, _T("Approval"), 815, 575, 905, 600);
	m_wndClose.Create(this, _T("&Close"), 910, 575, 1000, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndTab.Create(this,5, 125, 1005, 540); 

}
void CStorageDeliveryOrderView::OnInitializeComponents(){

//	SetWindowTitle(_T("Other Delivery Order"));

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->GetModuleID() == _T("GL"))
	{
		m_wndApprovedDate.ShowWindow(SW_HIDE);
	}
	else
	{
		m_wndAccountingDate.ShowWindow(SW_HIDE);
		m_wndAccountingDateLabel.SetWindowText(_T("Approved Date"));
	}

	m_wndApprovedDate.SetReadOnly(true);
	m_wndAccountingDate.SetReadOnly(true);
	m_wndOrderDate.SetReadOnly(true);
	m_wndOrderNo.SetReadOnly(true);

	//	m_wndOrderNo.SetMask(_T("&&########"));
	m_wndOrderNo.SetLimitText(10);
	m_wndOrderNo.SetCheckValue(true);
//	m_wndOrderNo.SetReadOnly(pMF->m_bSheetReatOnly);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndOrderDate.SetCheckValue(true);
	//m_wndOrderDate.ModifyStyle(WS_TABSTOP, 0);
	m_wndFromStorage.SetCheckValue(true);
	m_wndDescription.SetLimitText(81);
//	m_wndDescription.SetCheckValue(true);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.ModifyStyle(0, ES_RIGHT);


	m_wndTotalLines.SetLimitText(16);
	m_wndTotalLines.SetReadOnly(TRUE);
//	m_wndTotalLines.SetCheckValue(true);
	m_wndTotalLines.SetCurrencyFormat(true);
	m_wndTotalLines.SetTextColor(RGB(0, 128, 192));
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetReadOnly(TRUE);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.SetTextColor(RGB(0, 128, 255));
//	m_wndTotalAmount.SetCheckValue(true);

	m_wndTransactionType.SetCheckValue(TRUE);

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);


	m_transactionTbl.SetTableName(_T("m_transaction"));
	m_transactionTbl.AddField(_T("mt_transaction_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_createdby"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_createddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_updatedby"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_updateddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_storage_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_storage_to_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_orderno"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_orderdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_acctdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_deliveryby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_deliverydate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_department_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_department_to_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_partner_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_receiveby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_description"), dfText, 254); 
	m_transactionTbl.AddField(_T("mt_note"), dfText, 2000); 
	m_transactionTbl.AddField(_T("mt_status"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_doctype"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_org_id"), dfText, 3);

	m_wndLines.Create(&m_wndTab);
	m_wndTab.Add(_T("Items"), &m_wndLines);
	m_wndLines.m_pWndOrder = this;
	m_wndLines.OnInitDialog();
	m_wndTab.SetCurSel(0);
	
}

void CStorageDeliveryOrderView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
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
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);
	
	//m_wndTotalLines.SetEvent(WE_CHANGE, _OnTotalLinesChangeFnc);
	//m_wndTotalLines.SetEvent(WE_SETFOCUS, _OnTotalLinesSetfocusFnc);
	//m_wndTotalLines.SetEvent(WE_KILLFOCUS, _OnTotalLinesKillfocusFnc);
	m_wndTotalLines.SetEvent(WE_CHECKVALUE, _OnTotalLinesCheckValueFnc);
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
//	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CStorageDeliveryOrderView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);

	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CStorageDeliveryOrderView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	szWhere.AppendFormat(_T(" and mt_org_id in('GL', '%s') "), pMF->GetModuleID());
	if(pMF->m_szStoragePerm.IsEmpty())
		pMF->m_szStoragePerm = _T("-1");
	
	//szWhere.AppendFormat(_T(" and mt_storage_id in(%s) "), pMF->m_szStoragePerm);
	szWhere.AppendFormat(_T(" and mt_doctype in('BOO','TST') "));
	szSQL.Format(_T("SELECT mt_org_id, mt_createdby, ") \
		_T("mt_doctype, ") \
		_T("mt_transaction_id, ") \
		_T("mt_storage_id, ") \
		_T("mt_orderno, ") \
		_T("mt_orderdate, ") \
		_T("mt_acctdate, ") \
		_T("mt_deliverydate, ") \
		_T("mt_deliveryby, ") \
		_T("mt_approveddate, ") \
		_T("mt_storage_to_id, ") \
		_T("mt_partner_id, ") \
		_T("mt_receiveby, ") \
		_T("mt_description, ") \
		_T("mt_status, ") \
		_T("mt_netamount, ") \
		_T("mt_taxamount, ") \
		_T("mt_totalamount ") \
		_T("FROM m_transaction ") \
		_T("WHERE mt_transaction_id=%ld  ") \
		_T(" %s "), m_nID, szWhere);
	rs.ExecSQL(szSQL);

	//Notice(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_org_id"), m_szOrgID);
		
		rs.GetValue(_T("mt_createdby"), m_szCreatedBy);
		rs.GetValue(_T("mt_transaction_id"), m_nID);
		rs.GetValue(_T("mt_storage_id"), m_szFromStorageKey);
		rs.GetValue(_T("mt_orderno"), m_szOrderNo);
		rs.GetValue(_T("mt_orderdate"), m_szOrderDate);
		rs.GetValue(_T("mt_acctdate"), m_szAccountingDate);
		rs.GetValue(_T("mt_approveddate"), m_szApprovedDate);
		rs.GetValue(_T("mt_description"), m_szDescription);
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_netamount"), m_nTotalLines);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("mt_doctype"), m_szTransactionTypeKey);
		rs.GetValue(_T("mt_partner_id"), m_szDeliveryObjectKey);
		m_wndLines.m_nStorageID = str2int(m_szFromStorageKey);
		m_wndLines.m_nOrderID = m_nID;
		m_wndLines.Refresh(m_nID);

		
	}
}

void CStorageDeliveryOrderView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_EDIT)
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld "), m_nID);
		m_transactionTbl.Open(&pMF->m_db, szWhere);
	}
	m_transactionTbl.SetValue(_T("mt_createdby"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_createddate"), pMF->GetSysDateTime());
	m_transactionTbl.SetValue(_T("mt_updatedby"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_updateddate"), pMF->GetSysDateTime());
	m_transactionTbl.SetValue(_T("mt_storage_id"), m_szFromStorageKey);
	m_transactionTbl.SetValue(_T("mt_partner_id"), m_szDeliveryObjectKey);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_acctdate"), m_szAccountingDate);
	m_transactionTbl.SetValue(_T("mt_description"), m_szDescription);
	m_transactionTbl.SetValue(_T("mt_status"), m_szStatus);
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szTransactionTypeKey);
	m_transactionTbl.SetValue(_T("mt_org_id"), pMF->GetModuleID());


}

void CStorageDeliveryOrderView::SetDefaultValues(){

	m_szFromStorageKey.Empty();
	m_szDescription.Empty();
	m_szOrderDate.Empty();
	m_szStatus.Empty();
	m_nTotalAmount=0;
	m_nTotalLines = 0;
	m_szTransactionTypeKey.Empty();
	m_szReference.Empty();
	m_szDeliveryObjectKey.Empty();

}

int CStorageDeliveryOrderView::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 

  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_szOrderDate =  pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGEDELIVERYORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szAccountingDate= m_szOrderDate;
			m_wndTransactionType.SetFocus();		
			m_szStatus = _T("O");
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			
			szSQL.Format(_T("SELECT count(*) FROM m_transactionline WHERE mtl_transaction_id=%ld"), m_nID);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
			{
				m_wndTransactionType.EnableWindow(FALSE);
				m_wndFromStorage.EnableWindow(FALSE);			
			}
			m_wndDescription.SetFocus();
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
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}
		if (m_szStatus == _T("O"))
			m_wndAddLine.SetFocus();
		if(m_szOrgID != pMF->GetModuleID())
		{
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}

		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 


}

void CStorageDeliveryOrderView::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
void CStorageDeliveryOrderView::OnFromStorageSelendok(){
	 
}

/*void CStorageDeliveryOrderView::OnFromStorageSetfocus(){
	
}*/
/*void CStorageDeliveryOrderView::OnFromStorageKillfocus(){
	
}*/
long CStorageDeliveryOrderView::OnFromStorageLoadData(){
	
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_type='C' and msl_dept_id='%s' "), pMF->m_szDept);
	szFilter.AppendFormat(_T(" and msl_storage_id in(%s) "), pMF->m_szStoragePerm);
	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szFilter);
}

/*void CStorageDeliveryOrderView::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CStorageDeliveryOrderView::OnDescriptionChange(){
	
} */
/*void CStorageDeliveryOrderView::OnDescriptionSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnDescriptionKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CStorageDeliveryOrderView::OnOrderNoChange(){
	
} */
/*void CStorageDeliveryOrderView::OnOrderNoSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnOrderNoKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnOrderNoCheckValue(){
	return 0;
} 
/*void CStorageDeliveryOrderView::OnOrderDateChange(){
	
} */
/*void CStorageDeliveryOrderView::OnOrderDateSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnOrderDateKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CStorageDeliveryOrderView::OnAccountingDateChange(){
	
} */
/*void CStorageDeliveryOrderView::OnAccountingDateSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnAccountingDateKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnAccountingDateCheckValue(){
	return 0;
}

int CStorageDeliveryOrderView::OnApprovedDateCheckValue(){
	return 0;
}
void CStorageDeliveryOrderView::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnTransactionTypeSelendok(){
}
/*void CStorageDeliveryOrderView::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageDeliveryOrderView::OnTransactionTypeKillfocus(){
	
}*/
long CStorageDeliveryOrderView::OnTransactionTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id in('BOO','TST') "));

	return pMF->LoadTransactionTypeList(&m_wndTransactionType, m_szTransactionTypeKey, szFilter);
	
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
/*void CStorageDeliveryOrderView::OnTransactionTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CStorageDeliveryOrderView::OnReferenceLabelSelect(){
	if(m_szTransactionTypeKey != _T("EXP") && m_szTransactionTypeKey != _T("EOH"))
		return;
}

void CStorageDeliveryOrderView::OnDeliveryObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnDeliveryObjectSelendok(){
	 
}
/*void CStorageDeliveryOrderView::OnDeliveryObjectSetfocus(){
	
}*/
/*void CStorageDeliveryOrderView::OnDeliveryObjectKillfocus(){
	
}*/
long CStorageDeliveryOrderView::OnDeliveryObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and adp_partner_type_id='CT'"));
//	return pMF->LoadPartnerList(&m_wndDeliveryObject, m_szDeliveryObjectKey, szFilter);
	return 0;
}
/*void CStorageDeliveryOrderView::OnDeliveryObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
 

/*void CStorageDeliveryOrderView::OnTotalLinesChange(){
	
} */
/*void CStorageDeliveryOrderView::OnTotalLinesSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnTotalLinesKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnTotalLinesCheckValue(){
	return 0;
} 
/*void CStorageDeliveryOrderView::OnTotalAmountChange(){
	
} */
/*void CStorageDeliveryOrderView::OnTotalAmountSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnTotalAmountKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnTotalAmountCheckValue(){
	return 0;
}
 
void CStorageDeliveryOrderView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddStorageDeliveryOrderView();
}
 
void CStorageDeliveryOrderView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditStorageDeliveryOrderView();

}
 
void CStorageDeliveryOrderView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteStorageDeliveryOrderView();
}
 
void CStorageDeliveryOrderView::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveStorageDeliveryOrderView();
}
 
void CStorageDeliveryOrderView::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDiscardStorageDeliveryOrderView();
}
 
void CStorageDeliveryOrderView::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*if(!pMF->CheckPermission(_T("05.05")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return;
	}*/
	CPrintForms printer;
	printer.PrintCompositeExportSheet(m_nID);
}
 
void CStorageDeliveryOrderView::OnPostSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*if (!pMF->CheckPermission(_T("05.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}*/

	CString szSQL;
	if(m_szStatus != _T("O"))
		return;
	
	int retMsg = ShowMessageBox(_T("Do you want to approval order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return;



	szSQL.Format(_T("M_TRANSACTION_POST_V2(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		CString tmpStr;
		m_szStatus = GetOrderStatus();
		if(m_szStatus != _T("O")){
			m_wndPost.EnableWindow(FALSE);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}
		else
		{
		}

	}
	else
	{
		ShowMessageBox(_T("Cannot approval order"));
	}

} 
void CStorageDeliveryOrderView::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CStorageDeliveryOrderView::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.m_nOrderID = m_nID;
	m_wndLines.OnListAddItem();

} 
void CStorageDeliveryOrderView::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CStorageDeliveryOrderView::OnAddStorageDeliveryOrderView(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	/*if (!pMF->CheckPermission(_T("05.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}*/

 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 

 	SetMode(VM_ADD);
	return 0;
}

int CStorageDeliveryOrderView::OnEditStorageDeliveryOrderView(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	/*if (!pMF->CheckPermission(_T("05.02")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}*/

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not edit it"), 0);
		return 0;
	}
 	
 	SetMode(VM_EDIT);
	return 0;  

}

int CStorageDeliveryOrderView::OnDeleteStorageDeliveryOrderView(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	/*if (!pMF->CheckPermission(_T("05.03")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}*/

 	CString szSQL; 

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not delete it"), 0);
		return 0;
	}

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("M_TRANSACTION_DELETE(%ld, '%s') "), m_nID, pMF->GetCurrentUser()); 

 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnDiscardStorageDeliveryOrderView(); 
		m_bRefresh = true;
 	}
	return 0;

}

int CStorageDeliveryOrderView::OnSaveStorageDeliveryOrderView(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
	CString szSQL;
	

	m_wndOrderDate.SetMax(pMF->GetSysDateTime());
 	if(!IsValidateData()) 
 		return -1; 

 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("AD_NEXTSEQUENCE('M_TRANSACTION_ID_ASQ') "));
		m_nID = str2long(pMF->ExecDML(szSQL));	
		if(m_nID <=0) return -1;		
		m_transactionTbl.SetValue(_T("mt_transaction_id"), m_nID); 		
 		szSQL = m_transactionTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE mt_transaction_id=%ld and mt_status in('O','S', 'A','I') "), m_nID); 
 		szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_deliverydate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		m_bRefresh = true;
		if(GetMode() == VM_EDIT){
		}
		else
		{
			GetDataToScreen();
		}
 		SetMode(VM_VIEW); 
		//m_wndAddLine.SetFocus();
 	} 
 	return ret; 

}

int CStorageDeliveryOrderView::OnDiscardStorageDeliveryOrderView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_NONE) 
 		SetMode(VM_NONE); 
 	else 
 		SetMode(VM_VIEW); 
	m_wndOrderNo.SetFocus();
 	return 0;

}
 
int CStorageDeliveryOrderView::OnStorageDeliveryOrderViewListLoadData(){
	return 0;
}


CString CStorageDeliveryOrderView::GetOrderStatus(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szStatus = _T("");
	szSQL.Format(_T("SELECT mt_status FROM m_transaction WHERE mt_transaction_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("mt_status"), szStatus);
	return szStatus;
}

bool CStorageDeliveryOrderView::IsAllowEdit(){
	return true;
	if(m_szStatus != _T("O") || GetMode() != VM_VIEW)
		return false;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(m_szOrgID != pMF->GetModuleID())
		return false;
	return true;
}

void CStorageDeliveryOrderView::Load(long nTransactio_ID)
{
	m_nID = nTransactio_ID;
	GetDataToScreen();
	SetMode(VM_VIEW);
}