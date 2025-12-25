#include "StorageMovementDialog.h"
#include "MainFrame_E10.h"
#include "StorageMovementLineInput.h"
#include "HMSReportForms/PrintForms.h"

static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementDialog* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementDialog* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnToStorageAddNew();
}*/
static void _OnDelivererSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementDialog* )pWnd)->OnDelivererSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDelivererSelendokFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDelivererSelendok();
}
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDelivererKillfocus();
}*/
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDelivererKillfocus();
}*/
static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnDelivererLoadData();
}
/*static void _OnDelivererAddNewFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDelivererAddNew();
}*/
static void _OnReceiverSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementDialog* )pWnd)->OnReceiverSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiverSelendokFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnReceiverSelendok();
}
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnReceiverKillfocus();
}*/
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnReceiverKillfocus();
}*/
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnReceiverLoadData();
}
/*static void _OnReceiverAddNewFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnReceiverAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnAccountingDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementDialog* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnTransportMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementDialog* )pWnd)->OnTransportMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportMethodSelendokFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTransportMethodSelendok();
}
/*static void _OnTransportMethodSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTransportMethodKillfocus();
}*/
/*static void _OnTransportMethodKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTransportMethodKillfocus();
}*/
static long _OnTransportMethodLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnTransportMethodLoadData();
}
/*static void _OnTransportMethodAddNewFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTransportMethodAddNew();
}*/
static void _OnDeliveryMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementDialog* )pWnd)->OnDeliveryMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryMethodSelendokFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryMethodSelendok();
}
/*static void _OnDeliveryMethodSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryMethodKillfocus();
}*/
/*static void _OnDeliveryMethodKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryMethodKillfocus();
}*/
static long _OnDeliveryMethodLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnDeliveryMethodLoadData();
}
/*static void _OnDeliveryMethodAddNewFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryMethodAddNew();
}*/
/*static void _OnDeliveryDateChangeFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryDateChange();
} */
/*static void _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryDateSetfocus();} */ 
/*static void _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnDeliveryDateCheckValue();
} 
/*static void _OnDeliveryAddressChangeFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryAddressChange();
} */
/*static void _OnDeliveryAddressSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryAddressSetfocus();} */ 
/*static void _OnDeliveryAddressKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnDeliveryAddressKillfocus();
} */
static int _OnDeliveryAddressCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnDeliveryAddressCheckValue();
} 
/*static void _OnTotalLineChangeFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTotalLineChange();
} */
/*static void _OnTotalLineSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTotalLineSetfocus();} */ 
/*static void _OnTotalLineKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTotalLineKillfocus();
} */
static int _OnTotalLineCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnTotalLineCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CStorageMovementDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CStorageMovementDialog *pVw = (CStorageMovementDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CStorageMovementDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddStorageMovementDialogFnc(CWnd *pWnd){
	 return ((CStorageMovementDialog*)pWnd)->OnAddStorageMovementDialog();
} 
static int _OnEditStorageMovementDialogFnc(CWnd *pWnd){
	 return ((CStorageMovementDialog*)pWnd)->OnEditStorageMovementDialog();
} 
static int _OnDeleteStorageMovementDialogFnc(CWnd *pWnd){
	 return ((CStorageMovementDialog*)pWnd)->OnDeleteStorageMovementDialog();
} 
static int _OnSaveStorageMovementDialogFnc(CWnd *pWnd){
	 return ((CStorageMovementDialog*)pWnd)->OnSaveStorageMovementDialog();
} 
static int _OnDiscardStorageMovementDialogFnc(CWnd *pWnd){
	 return ((CStorageMovementDialog*)pWnd)->OnDiscardStorageMovementDialog();
} 
CStorageMovementDialog::CStorageMovementDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szTransactionTypeKey = _T("MOV");

	SetWindowTitle(_T("Transfer Orders"));
	m_bImport = false;
}
CStorageMovementDialog::~CStorageMovementDialog(){
	
}
void CStorageMovementDialog::OnCreateComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 150);
	m_wndOrderInformation.Create(this, _T("Order Information"), 690, 5, 1005, 150);
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 10, 30, 160, 55);
	m_wndFromStorage.Create(this,165, 30, 680, 55); 
	m_wndToStorageLabel.Create(this, _T("To Storage"), 10, 60, 160, 85);
	m_wndToStorage.Create(this,165, 60, 680, 85); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 90, 160, 115);
	m_wndDeliverer.Create(this,165, 90, 355, 115); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 360, 90, 480, 115);
	m_wndReceiver.Create(this,485, 90, 680, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 160, 145);
	m_wndDescription.Create(this,165, 120, 680, 145); 
	m_wndOrderNoLabel.Create(this, _T("ORDERNO"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("ORDERDATE"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 

if(pMF->GetModuleID() == _T("GL"))
{
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 695, 90, 845, 115);
	m_wndAccountingDate.Create(this,850, 90, 1000, 115); 
	m_wndApprovedDate.Create(this,850, 90, 1000, 115); 
	m_wndApprovedDate.ShowWindow(SW_HIDE);
}
else
{
	m_wndAccountingDateLabel.Create(this, _T("Approved Date"), 695, 90, 845, 115);
	m_wndApprovedDate.Create(this,850, 90, 1000, 115); 
	m_wndAccountingDate.Create(this,850, 90, 1000, 115); 
	m_wndAccountingDate.ShowWindow(SW_HIDE);
}
	
	m_wndTransactionTypeLabel.Create(this, _T("Transaction Type"), 695, 120, 845, 145);
	m_wndTransactionType.Create(this,850, 120, 1000, 145); 
	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 8, 545, 158, 570);
	m_wndTotalLines.Create(this,163, 545, 240, 570); 
	m_wndTotalAmountLabel.Create(this, _T("Amount"), 695, 545, 845, 570);
	m_wndTotalAmount.Create(this,850, 545, 1000, 570); 
	m_wndAdd.Create(this, _T("&Add"), 245, 575, 335, 600);
	m_wndEdit.Create(this, _T("&Edit"), 340, 575, 430, 600);
	m_wndDelete.Create(this, _T("&Delete"), 435, 575, 525, 600);
	m_wndSave.Create(this, _T("&Save"), 530, 575, 620, 600);

	m_wndDiscard.Create(this, _T("&Discard"), 625, 575, 715, 600);
	m_wndPrint.Create(this, _T("&Print"), 720, 575, 810, 600);
	
	if(pMF->GetModuleID() == _T("GL"))
		m_wndPost.Create(this, _T("Post"), 815, 575, 905, 600);
	else
	{
		m_wndPost.Create(this, _T("Approval"), 815, 575, 905, 600);
	}
	

	m_wndClose.Create(this, _T("&Close"), 910, 575, 1000, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndTab.Create(this,5, 155, 1005, 540); 
	

}
void CStorageMovementDialog::OnInitializeComponents(){

	

	//	m_wndOrderNo.SetMask(_T("&&########"));
	m_wndOrderNo.SetLimitText(10);
	m_wndOrderNo.SetCheckValue(true);
//	m_wndOrderNo.SetReadOnly(pMF->m_bSheetReatOnly);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndOrderDate.SetCheckValue(true);
	//m_wndOrderDate.ModifyStyle(WS_TABSTOP, 0);
	m_wndFromStorage.SetCheckValue(true);
	m_wndToStorage.SetCheckValue(true);
//	m_wndDeliverer.SetInitCap(true);
//	m_wndDeliverer.SetCheckValue(true);
//	m_wndReceiver.SetCheckValue(true);
	m_wndDescription.SetLimitText(81);
//	m_wndDescription.SetCheckValue(true);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.ModifyStyle(0, ES_RIGHT);


	m_wndTotalLines.SetLimitText(16);
	m_wndTotalLines.SetReadOnly(TRUE);
//	m_wndTotalLine.SetCheckValue(true);
	m_wndTotalLines.SetCurrencyFormat(true);
	m_wndTotalLines.SetTextColor(RGB(0, 128, 192));
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetReadOnly(TRUE);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.SetTextColor(RGB(0, 128, 255));
//	m_wndTotalAmount.SetCheckValue(true);

	m_wndTransactionType.SetReadOnly(FALSE);
	

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndFromStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndToStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndToStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	
	m_wndDeliverer.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndDeliverer.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);

	m_wndReceiver.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndReceiver.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);


	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 310);

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

	m_wndOrderDate.SetReadOnly(true);
	m_wndApprovedDate.SetReadOnly(true);
	m_wndOrderNo.SetReadOnly(true);
	
}

void CStorageMovementDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	m_wndToStorage.SetEvent(WE_SELENDOK, _OnToStorageSelendokFnc);
	//m_wndToStorage.SetEvent(WE_SETFOCUS, _OnToStorageSetfocusFnc);
	//m_wndToStorage.SetEvent(WE_KILLFOCUS, _OnToStorageKillfocusFnc);
	m_wndToStorage.SetEvent(WE_SELCHANGE, _OnToStorageSelectChangeFnc);
	m_wndToStorage.SetEvent(WE_LOADDATA, _OnToStorageLoadDataFnc);
	//m_wndToStorage.SetEvent(WE_ADDNEW, _OnToStorageAddNewFnc);
	m_wndDeliverer.SetEvent(WE_SELENDOK, _OnDelivererSelendokFnc);
	//m_wndDeliverer.SetEvent(WE_SETFOCUS, _OnDelivererSetfocusFnc);
	//m_wndDeliverer.SetEvent(WE_KILLFOCUS, _OnDelivererKillfocusFnc);
	m_wndDeliverer.SetEvent(WE_SELCHANGE, _OnDelivererSelectChangeFnc);
	m_wndDeliverer.SetEvent(WE_LOADDATA, _OnDelivererLoadDataFnc);
	//m_wndDeliverer.SetEvent(WE_ADDNEW, _OnDelivererAddNewFnc);
	m_wndReceiver.SetEvent(WE_SELENDOK, _OnReceiverSelendokFnc);
	//m_wndReceiver.SetEvent(WE_SETFOCUS, _OnReceiverSetfocusFnc);
	//m_wndReceiver.SetEvent(WE_KILLFOCUS, _OnReceiverKillfocusFnc);
	m_wndReceiver.SetEvent(WE_SELCHANGE, _OnReceiverSelectChangeFnc);
	m_wndReceiver.SetEvent(WE_LOADDATA, _OnReceiverLoadDataFnc);
	//m_wndReceiver.SetEvent(WE_ADDNEW, _OnReceiverAddNewFnc);
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
	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);
	//m_wndTotalLines.SetEvent(WE_CHANGE, _OnTotalLineChangeFnc);
	//m_wndTotalLines.SetEvent(WE_SETFOCUS, _OnTotalLineSetfocusFnc);
	//m_wndTotalLines.SetEvent(WE_KILLFOCUS, _OnTotalLineKillfocusFnc);
	m_wndTotalLines.SetEvent(WE_CHECKVALUE, _OnTotalLineCheckValueFnc);
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
	m_wndLines.Refresh(m_nID);

}
void CStorageMovementDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToStorage.GetDlgCtrlID(), m_szToStorageKey);
	DDX_TextEx(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDelivererKey);
	DDX_TextEx(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiverKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLine);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CStorageMovementDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	//szWhere.AppendFormat(_T(" and mt_org_id in('GL', '%s') "), pMF->GetModuleID());
	if(pMF->m_szStoragePerm.IsEmpty())
		pMF->m_szStoragePerm = _T("-1");
	
	//szWhere.AppendFormat(_T(" and mt_storage_id in(%s) "), pMF->m_szStoragePerm);

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
		_T("mt_approvedby, ") \
		_T("mt_storage_to_id, ") \
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
		rs.GetValue(_T("mt_deliveryby"), m_szDelivererKey);
		rs.GetValue(_T("mt_approveddate"), m_szApprovedDate);
		rs.GetValue(_T("mt_approvedby"), m_szApprovedBy);
		rs.GetValue(_T("mt_storage_to_id"), m_szToStorageKey);
		rs.GetValue(_T("mt_receiveby"), m_szReceiverKey);
		rs.GetValue(_T("mt_description"), m_szDescription);
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("mt_doctype"), m_szTransactionTypeKey);

		m_wndLines.m_nStorageID = str2int(m_szFromStorageKey);
		m_wndLines.m_nStorageToID = str2int(m_szToStorageKey);
		m_wndLines.m_nOrderID = m_nID;
		

		if(m_szStatus != _T("A"))
		{

			m_szApprovedDate.Empty();
		}

		
	}
	
}

void CStorageMovementDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_transactionTbl.SetValue(_T("mt_storage_to_id"), m_szToStorageKey);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_acctdate"), m_szAccountingDate);
	m_transactionTbl.SetValue(_T("mt_deliveryby"), m_szDelivererKey);
	m_transactionTbl.SetValue(_T("mt_receiveby"), m_szReceiverKey);
	m_transactionTbl.SetValue(_T("mt_description"), m_szDescription);
	m_transactionTbl.SetValue(_T("mt_status"), m_szStatus);
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szTransactionTypeKey);
	m_transactionTbl.SetValue(_T("mt_org_id"), pMF->GetModuleID());
	m_transactionTbl.SetValue(_T("mt_department_id"), pMF->GetDepartmentID());
	
}

void CStorageMovementDialog::SetDefaultValues(){

	m_szFromStorageKey.Empty();
	m_szToStorageKey.Empty();
	m_szDelivererKey.Empty();
	m_szReceiverKey.Empty();
	m_szDescription.Empty();
	m_szOrderDate.Empty();
	m_szStatus.Empty();
	m_nTotalAmount=0;
	m_nTotalLine = 0;
	m_szTransactionTypeKey = _T("MOV");

}

int CStorageMovementDialog::SetMode(int nMode){
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
			m_szOrderDate =  pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGEMOVEMENT_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szAccountingDate= m_szOrderDate;
			m_szApprovedDate.Empty();
			m_wndFromStorage.SetFocus();		
			m_szStatus = _T("O");
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			
			szSQL.Format(_T("SELECT count(*) FROM m_transactionline WHERE mtl_transaction_id=%ld"), m_nID);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
			{
				m_wndFromStorage.EnableWindow(FALSE);
			}
			m_wndDeliverer.SetFocus();

 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			m_wndAddLine.SetFocus();
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szOrderNo.Empty();
 			break; 
 		};

		if(m_szStatus == _T("S")){
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}

		if(m_szOrgID != pMF->GetModuleID())
		{
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
			if(m_szStatus != _T("S"))
			{
				m_wndPost.EnableWindow(FALSE);
			}
		}
		else
		{
			if(m_szStatus != _T("O"))
			{
				m_wndPost.EnableWindow(FALSE);
			}
		}

		m_wndTransactionType.EnableWindow(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 


}

void CStorageMovementDialog::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageMovementDialog::OnFromStorageSelendok(){
	 
}

/*void CStorageMovementDialog::OnFromStorageSetfocus(){
	
}*/
/*void CStorageMovementDialog::OnFromStorageKillfocus(){
	
}*/
long CStorageMovementDialog::OnFromStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	UpdateData(true);
	CString szWhere;
	szWhere.Empty();
	if(!m_szToStorageKey.IsEmpty())
		szWhere.Format(_T(" and msl_storage_id <> %d "), str2int(m_szToStorageKey));
	//szWhere.AppendFormat(_T(" AND msl_type <> 'C'"));
	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szWhere);
}

/*void CStorageMovementDialog::OnFromStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageMovementDialog::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageMovementDialog::OnToStorageSelendok(){
	 
}

/*void CStorageMovementDialog::OnToStorageSetfocus(){
	
}*/
/*void CStorageMovementDialog::OnToStorageKillfocus(){
	
}*/
long CStorageMovementDialog::OnToStorageLoadData(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	UpdateData(true);
	CString szWhere;
	szWhere.Empty();
	if(!m_szFromStorageKey.IsEmpty())
		szWhere.Format(_T(" and msl_storage_id <> %d "), str2int(m_szFromStorageKey));
	//szWhere.AppendFormat(_T(" AND msl_type <> 'C'"));
	return pMF->LoadStorageList(&m_wndToStorage, m_szToStorageKey, szWhere);


}

/*void CStorageMovementDialog::OnToStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageMovementDialog::OnDelivererSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageMovementDialog::OnDelivererSelendok(){
	 
}

/*void CStorageMovementDialog::OnDelivererSetfocus(){
	
}*/
/*void CStorageMovementDialog::OnDelivererKillfocus(){
	
}*/
long CStorageMovementDialog::OnDelivererLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_deptid='%s' "), pMF->m_szDeptID);
	return pMF->LoadUserList(&m_wndDeliverer, m_szDelivererKey, szFilter);
}

/*void CStorageMovementDialog::OnDelivererAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageMovementDialog::OnReceiverSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageMovementDialog::OnReceiverSelendok(){
	 
}

/*void CStorageMovementDialog::OnReceiverSetfocus(){
	
}*/
/*void CStorageMovementDialog::OnReceiverKillfocus(){
	
}*/
long CStorageMovementDialog::OnReceiverLoadData(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	CString szFilter;
	szFilter.Format(_T(" and su_deptid='%s' "), pMF->m_szDeptID);

	return pMF->LoadUserList(&m_wndReceiver, m_szReceiverKey, szFilter);
}

/*void CStorageMovementDialog::OnReceiverAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageMovementDialog::OnDescriptionChange(){
	
} */
/*void CStorageMovementDialog::OnDescriptionSetfocus(){
	
} */
/*void CStorageMovementDialog::OnDescriptionKillfocus(){
	
} */
int CStorageMovementDialog::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CStorageMovementDialog::OnOrderNoChange(){
	
} */
/*void CStorageMovementDialog::OnOrderNoSetfocus(){
	
} */
/*void CStorageMovementDialog::OnOrderNoKillfocus(){
	
} */
int CStorageMovementDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CStorageMovementDialog::OnOrderDateChange(){
	
} */
/*void CStorageMovementDialog::OnOrderDateSetfocus(){
	
} */
/*void CStorageMovementDialog::OnOrderDateKillfocus(){
	
} */
int CStorageMovementDialog::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CStorageMovementDialog::OnAccountingDateChange(){
	
} */
/*void CStorageMovementDialog::OnAccountingDateSetfocus(){
	
} */
/*void CStorageMovementDialog::OnAccountingDateKillfocus(){
	
} */
int CStorageMovementDialog::OnAccountingDateCheckValue(){
	return 0;
} 
void CStorageMovementDialog::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageMovementDialog::OnTransactionTypeSelendok(){
	 
}
/*void CStorageMovementDialog::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageMovementDialog::OnTransactionTypeKillfocus(){
	
}*/
long CStorageMovementDialog::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id in('MOV') "));

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
/*void CStorageMovementDialog::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
 
/*void CStorageMovementDialog::OnTotalLineChange(){
	
} */
/*void CStorageMovementDialog::OnTotalLineSetfocus(){
	
} */
/*void CStorageMovementDialog::OnTotalLineKillfocus(){
	
} */
int CStorageMovementDialog::OnTotalLineCheckValue(){
	return 0;
} 
/*void CStorageMovementDialog::OnTotalAmountChange(){
	
} */
/*void CStorageMovementDialog::OnTotalAmountSetfocus(){
	
} */
/*void CStorageMovementDialog::OnTotalAmountKillfocus(){
	
} */
int CStorageMovementDialog::OnTotalAmountCheckValue(){
	return 0;
}
 
void CStorageMovementDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageMovementDialog();
}
 
void CStorageMovementDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageMovementDialog();

}
 
void CStorageMovementDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageMovementDialog();
}
 
void CStorageMovementDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageMovementDialog();
}
 
void CStorageMovementDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardStorageMovementDialog();
}
 
void CStorageMovementDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	if(!pMF->CheckPermission(_T("02.05")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return;
	}
	CGuiMenu menu(this);
	CRect rect;
	menu.CreatePopupMenu();
	TranslateString(_T("Print Export Order"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Print Movement Sheet"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	m_wndPrint.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN, rect.right, rect.top, this); 
	CPrintForms printer;
	switch(nPos)
	{
		case 1:
			_debug(_T("X"));
			printer.PrintStorageExportOrder(m_nID);
			//printer.PrintStorageExportOrder_v2(m_nID);
			break;
		case 2:
			printer.PrintStorageMovementOrder(m_nID);
			break;
	}
	

}
 
void CStorageMovementDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("02.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}

	CString szSQL;
	if(pMF->GetModuleID() != m_szOrgID)
	{
		if(m_szStatus != _T("S"))
		{
			ShowMessageBox(_T("Cannot process with current status."));
				return;
		}
	}
	else
	{
		if(m_szStatus != _T("O"))
		{
			ShowMessageBox(_T("Cannot process with current status."));
				return;
		}
	}
	int retMsg = ShowMessageBox(_T("Do you want to approval order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return;
	szSQL.Format(_T("M_TRANSACTION_POST(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	//}
	//else
	//{
	//	if(m_szStatus != _T("O"))
	//		return;
	//	int retMsg = ShowMessageBox(_T("Do you want to send order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	//	if(retMsg == IDNO)
	//		return;
	//	szSQL.Format(_T("M_TRANSACTION_SEND(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	//}

	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		CString tmpStr;
		m_szStatus = GetOrderStatus();
		if(m_szStatus != _T("O")){
			if(!m_bImport)
				m_wndPost.EnableWindow(FALSE);
			
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}
		else
		{
			m_wndPost.EnableWindow(TRUE);

		}

	}
	else
	{
		ShowMessageBox(_T("Có lỗi xảy ra khi duyệt phiếu!"));
	}

} 
void CStorageMovementDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CStorageMovementDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.m_nOrderID = m_nID;
	m_wndLines.OnListAddItem();

} 
void CStorageMovementDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CStorageMovementDialog::OnAddStorageMovementDialog(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("02.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 

	if(!pMF->CheckPermission(_T("02.01")))
	{
		//ShowMessageBox(_T("Permission denined"), MB_OK);
		//return 0;
	}
 	SetMode(VM_ADD);
	m_szOrderDate = pMF->GetSysDateTime();
	m_wndFromStorage.SetFocus();
	m_szStatus = _T("O");
	UpdateData(false);
	return 0;
}

int CStorageMovementDialog::OnEditStorageMovementDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("02.02")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}



	if(!pMF->CheckPermission(_T("02.02")))
	{/*
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return 0;*/
	}
		if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not edit it"), 0);
		return 0;
	}
 	
 	SetMode(VM_EDIT);
	return 0;  

}

int CStorageMovementDialog::OnDeleteStorageMovementDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("02.03")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

 	CString szSQL; 

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}



	if(!pMF->CheckPermission(_T("02.03")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return 0;
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
 		OnDiscardStorageMovementDialog(); 
 	}
	return 0;

}

int CStorageMovementDialog::OnSaveStorageMovementDialog(){
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
	CString szSQL;
	

	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
 	if(!IsValidateData()) 
 		return -1; 
	if(m_szFromStorageKey == m_szToStorageKey || str2int(m_szFromStorageKey) <= 0 || str2int(m_szToStorageKey) <= 0)
	{
		ShowMessageBox(_T("Invalid storage identify movement"), 0);
		m_wndToStorage.SetFocus();
		return -1;
	}

 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("AD_NEXTSEQUENCE('M_TRANSACTION_ID_ASQ') "));
		m_nID = str2long(pMF->ExecDML(szSQL));	
		if(m_nID <=0) return -1;		
		m_transactionTbl.SetValue(_T("mt_transaction_id"), m_nID); 		
 		szSQL = m_transactionTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		if(m_szStatus == _T("A"))
		{
			szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_deliverydate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id,mt_department_id, mt_storage_to_id, mt_department_to_id")); 
		}
		else
		{
			szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_deliverydate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id,mt_department_id")); 
		}

 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT){
		}
		else
		{
			GetDataToScreen();

		}
 		SetMode(VM_VIEW); 
		
 	} 
 	return ret; 

}

int CStorageMovementDialog::OnDiscardStorageMovementDialog(){
	if(m_bImport)
	{
		CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
		CString szSQL;
		int ret = ShowMessageBox(_T("Do you want to cancel order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
		if(ret == IDNO)
			return 0;
		szSQL.Format(_T("UPDATE m_transaction SET mt_status='O' WHERE mt_transaction_id=%ld "), m_nID);
		pMF->ExecSQL(szSQL);
		CGuiDialog::OnCancel();
	}
	else
	{
 		if(GetMode() == VM_ADD || GetMode() == VM_NONE) 
 			SetMode(VM_NONE); 
 		else 
 			SetMode(VM_VIEW); 
		m_wndOrderNo.SetFocus();
	}
 	return 0;

}
 
int CStorageMovementDialog::OnStorageMovementDialogListLoadData(){
	return 0;
}


CString CStorageMovementDialog::GetOrderStatus(){
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szStatus = _T("X");
	szSQL.Format(_T("SELECT mt_status FROM m_transaction WHERE mt_transaction_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("mt_status"), szStatus);
	return szStatus;
}

bool CStorageMovementDialog::IsAllowEdit(){
	if(m_szStatus != _T("O") || GetMode() != VM_VIEW)
		return false;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if(m_szOrgID != pMF->GetModuleID())
		return false;
	return true;
}