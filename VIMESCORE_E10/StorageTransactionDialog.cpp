#include "StorageTransactionDialog.h"
#include "MainFrame_E10.h"
#include "StorageTransactionLineInput.h"
#include "HMSReportForms\PrintForms.h"
#include <typeinfo>
#include "RejectOrderNoteDialog.h"

static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageTransactionDialog* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageTransactionDialog* )pWnd)->OnToDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnToDepartmentSelendok();
}
/*static void _OnToDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnToDepartmentKillfocus();
}*/
/*static void _OnToDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnToDepartmentKillfocus();
}*/
static long _OnToDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnToDepartmentLoadData();
}
/*static void _OnToDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnToDepartmentAddNew();
}*/
static void _OnDelivererSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageTransactionDialog* )pWnd)->OnDelivererSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDelivererSelendokFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnDelivererSelendok();
}
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnDelivererKillfocus();
}*/
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnDelivererKillfocus();
}*/
static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnDelivererLoadData();
}
/*static void _OnDelivererAddNewFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnDelivererAddNew();
}*/
static void _OnReceiverSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageTransactionDialog* )pWnd)->OnReceiverSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiverSelendokFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnReceiverSelendok();
}
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnReceiverKillfocus();
}*/
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnReceiverKillfocus();
}*/
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnReceiverLoadData();
}
/*static void _OnReceiverAddNewFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnReceiverAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnAccountingDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageTransactionDialog* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTransactionTypeAddNew();
}*/
/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CStorageTransactionDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CStorageTransactionDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnCloseSelect();
}

static void _OnConfirmSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnConfirmSelect();
}

static void _OnDisconfirmSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnDisconfirmSelect();
}


static void _OnAddLineSelectFnc(CWnd *pWnd){
	CStorageTransactionDialog *pVw = (CStorageTransactionDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CStorageTransactionDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddStorageTransactionDialogFnc(CWnd *pWnd){
	 return ((CStorageTransactionDialog*)pWnd)->OnAddStorageTransactionDialog();
} 
static int _OnEditStorageTransactionDialogFnc(CWnd *pWnd){
	 return ((CStorageTransactionDialog*)pWnd)->OnEditStorageTransactionDialog();
} 
static int _OnDeleteStorageTransactionDialogFnc(CWnd *pWnd){
	 return ((CStorageTransactionDialog*)pWnd)->OnDeleteStorageTransactionDialog();
} 
static int _OnSaveStorageTransactionDialogFnc(CWnd *pWnd){
	 return ((CStorageTransactionDialog*)pWnd)->OnSaveStorageTransactionDialog();
} 
static int _OnDiscardStorageTransactionDialogFnc(CWnd *pWnd){
	 return ((CStorageTransactionDialog*)pWnd)->OnDiscardStorageTransactionDialog();
} 
CStorageTransactionDialog::CStorageTransactionDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szTransactionTypeKey = _T("MOV");
	SetWindowName(_T("StorageTransactionDialog"));
	m_bRefresh  = false;
	

}
CStorageTransactionDialog::~CStorageTransactionDialog(){
	
}
void CStorageTransactionDialog::OnCreateComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szOrgID = pMF->GetModuleID();

	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 150);
	m_wndOrderInformation.Create(this, _T("Order Information"), 690, 5, 1005, 150);
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 10, 30, 160, 55);
	m_wndFromStorage.Create(this,165, 30, 680, 55); 
	m_wndToDepartmentLabel.Create(this, _T("To Storage"), 10, 60, 160, 85);
	m_wndToDepartment.Create(this,165, 60, 680, 85); 
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
	if(m_szOrgID != pMF->GetModuleID())
		m_wndDiscard.Create(this, _T("&Discard"), 625, 575, 715, 600);
	else
		m_wndDiscard.Create(this, _T("&Cancel"), 625, 575, 715, 600);

	m_wndPrint.Create(this, _T("&Print"), 720, 575, 810, 600);
	
	if(pMF->GetModuleID() == _T("GL"))
		m_wndPost.Create(this, _T("Post"), 815, 575, 905, 600);
	else
		m_wndPost.Create(this, _T("Approval"), 815, 575, 905, 600);


	m_wndClose.Create(this, _T("&Close"), 910, 575, 1000, 600);
	
	m_wndConfirm.Create(this, _T("Confirm"), 5, 575, 100, 600);
//	m_wndDisconfirm.Create(this, _T("Disconfirm"), 105, 575, 200, 600);

	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);

	m_wndTab.Create(this,5, 155, 1005, 540); 

	m_wndNotifications.Create(&m_wndTab, 10, 160, 1000, 535);

}
void CStorageTransactionDialog::OnInitializeComponents(){

	SetWindowTitle(_T("Delivery to Department"));

	//m_wndOrderNo.SetMask(_T("&&########"));
	m_wndOrderNo.SetLimitText(10);
	m_wndOrderNo.SetCheckValue(true);
//	m_wndOrderNo.SetReadOnly(pMF->m_bSheetReatOnly);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndOrderDate.SetCheckValue(true);
	//m_wndOrderDate.SetReadOnly(TRUE);
	m_wndAccountingDate.SetReadOnly(TRUE);
	//m_wndOrderDate.ModifyStyle(WS_TABSTOP, 0);
	m_wndFromStorage.SetCheckValue(true);
	m_wndToDepartment.SetCheckValue(true);
//	m_wndDeliverer.SetInitCap(true);
//	m_wndDeliverer.SetCheckValue(true);
//	m_wndReceiver.SetCheckValue(true);
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

//	m_wndTransactionType.SetCheckValue(TRUE);
	m_wndTransactionType.SetReadOnly(TRUE);
	m_wndApprovedDate.SetReadOnly(TRUE);

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndFromStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndToDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndToDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndToDepartment.InsertColumn(2, _T("Description"), CFMT_TEXT, 350);

	
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
	m_transactionTbl.AddField(_T("mt_orderno"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_orderdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_acctdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_deliveryby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_department_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_department_to_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_receiveby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_description"), dfText, 254); 
	m_transactionTbl.AddField(_T("mt_note"), dfText, 2000); 
	m_transactionTbl.AddField(_T("mt_status"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_doctype"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_org_id"), dfText, 3);

	m_wndLines.Create(&m_wndTab);
	m_wndPatientList.Create(&m_wndTab);
	m_wndTab.Add(_T("Items"), &m_wndLines);
	m_wndTab.Add(_T("Detail Patient List"), &m_wndPatientList);
	m_wndTab.Add(_T("Notes"), &m_wndNotifications);

	m_wndLines.m_pWndOrder = this;
	m_wndPatientList.m_pWndOrder = this;
	m_wndLines.OnInitDialog();
	m_wndPatientList.OnInitDialog();
	
	m_wndTab.SetCurSel(0);	
}

void CStorageTransactionDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	m_wndToDepartment.SetEvent(WE_SELENDOK, _OnToDepartmentSelendokFnc);
	//m_wndToDepartment.SetEvent(WE_SETFOCUS, _OnToDepartmentSetfocusFnc);
	//m_wndToDepartment.SetEvent(WE_KILLFOCUS, _OnToDepartmentKillfocusFnc);
	m_wndToDepartment.SetEvent(WE_SELCHANGE, _OnToDepartmentSelectChangeFnc);
	m_wndToDepartment.SetEvent(WE_LOADDATA, _OnToDepartmentLoadDataFnc);
	//m_wndToDepartment.SetEvent(WE_ADDNEW, _OnToDepartmentAddNewFnc);
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
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
//	m_wndDisconfirm.SetEvent(WE_CLICK, _OnDisconfirmSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
//	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	
	
	
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	else
	{
		OnTransactionTypeLoadData();
	}
	SetMode(nMode);

}
void CStorageTransactionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToDepartment.GetDlgCtrlID(), m_szToDepartmentKey);
	DDX_TextEx(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDelivererKey);
	DDX_TextEx(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiverKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CStorageTransactionDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	szWhere.AppendFormat(_T(" and mt_org_id in('GL', '%s') "), pMF->GetModuleID());
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
		_T("mt_approveddate, ") \
		_T("mt_deliverydate, ") \
		_T("mt_deliveryby, ") \
		_T("mt_department_to_id, ") \
		_T("mt_receiveby, ") \
		_T("mt_description, ") \
		_T("mt_status, ") \
		_T("mt_netamount, ") \
		_T("mt_taxamount, ") \
		_T("mt_totalamount, mt_isprinted, mt_postedby ") \
		_T("FROM m_transaction ") \
		_T("WHERE mt_transaction_id=%ld  ") \
		_T(" %s "), m_nID,  szWhere);
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

		rs.GetValue(_T("mt_deliveryby"), m_szDelivererKey);
		rs.GetValue(_T("mt_department_to_id"), m_szToDepartmentKey);
		rs.GetValue(_T("mt_receiveby"), m_szReceiverKey);
		rs.GetValue(_T("mt_description"), m_szDescription);
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_netamount"), m_nTotalLines);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("mt_doctype"), m_szTransactionTypeKey);
		rs.GetValue(_T("mt_postedby"), m_szSubmitedBy);


		rs.GetValue(_T("mt_isprinted"), m_szConfirmed);
		m_wndLines.m_nStorageID = str2int(m_szFromStorageKey);
		m_wndLines.m_nStorageToID = str2int(m_szToDepartmentKey);
		m_wndLines.m_nOrderID = m_nID;		
		m_wndLines.Refresh(m_nID);
		m_wndPatientList.m_nTransactionID = m_nID;
		m_wndPatientList.Refresh(m_nID);
		if(m_szStatus != _T("A"))
			m_szApprovedDate.Empty();

		
		CString tmpStr;
		CString szWardApproved;
		CString szCurWard;

		
		szSQL.Format(_T("SELECT HC_PHARMA_NEWAPPROVEMETHOD,hc_pharma_wardapproved FROM hms_config"));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("HC_PHARMA_NEWAPPROVEMETHOD"), tmpStr);
		rs.GetValue(_T("hc_pharma_wardapproved"), szWardApproved);

		szCurWard.Format(_T("[%s]"), m_szToDepartmentKey);

		if(tmpStr == _T("Y") && szWardApproved.Find(szCurWard) >= 0)
		{
			if(pMF->GetModuleID() != _T("PM"))
			{
				m_szConfirmed = _T("Y");
			}
		
		}
		else
		{
			m_szConfirmed = _T("Y");
		}

		if(m_szFromStorageKey == _T("14"))
		{
			m_szConfirmed = _T("Y");
		}

		LoadNotifications();


		
		
	}
}

void CStorageTransactionDialog::GetScreenToData(){
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
	m_transactionTbl.SetValue(_T("mt_department_id"), pMF->GetDepartmentID());
	m_transactionTbl.SetValue(_T("mt_department_to_id"), m_szToDepartmentKey);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_acctdate"), m_szAccountingDate);
	m_transactionTbl.SetValue(_T("mt_deliveryby"), m_szDelivererKey);
	m_transactionTbl.SetValue(_T("mt_receiveby"), m_szReceiverKey);
	m_transactionTbl.SetValue(_T("mt_description"), m_szDescription);
	m_transactionTbl.SetValue(_T("mt_status"), m_szStatus);
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szTransactionTypeKey);
	m_transactionTbl.SetValue(_T("mt_org_id"), pMF->GetModuleID());


}

void CStorageTransactionDialog::SetDefaultValues(){

	m_szFromStorageKey.Empty();
	m_szToDepartmentKey.Empty();
	m_szDelivererKey.Empty();
	m_szReceiverKey.Empty();
	m_szDescription.Empty();
	m_szOrderDate.Empty();
	m_szStatus.Empty();
	m_nTotalAmount=0;
	m_nTotalLines = 0;

}

int CStorageTransactionDialog::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGETRANSACTION_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szAccountingDate= m_szOrderDate;
			m_szApprovedDate = pMF->GetSysDateTime();
			m_wndFromStorage.SetFocus();		
			m_szStatus = _T("O");
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			szSQL.Format(_T("SELECT count(*) FROM m_transactionline WHERE mtl_transaction_id=%ld"), m_nID);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
				m_wndFromStorage.EnableWindow(FALSE);			
			m_wndDeliverer.SetFocus();	
			m_wndOrderDate.EnableWindow(FALSE);
			if (m_szStatus == _T("O") && pMF->CheckPermission(_T("03.08")))
				m_wndOrderDate.EnableWindow(TRUE);
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

		if(m_szStatus == _T("O"))
		{		
		}
		else{
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}

		if(m_szOrgID != pMF->GetModuleID()){

			if(m_szStatus != _T("S")){
				m_wndPost.EnableWindow(FALSE);
				m_wndDiscard.EnableWindow(FALSE);
			}
			else
				m_wndDiscard.EnableWindow(TRUE);
			if(m_szStatus == _T("O"))
				m_wndPrint.EnableWindow(FALSE);

			if(m_szConfirmed != _T("Y"))
				m_wndPost.EnableWindow(FALSE);
		}
		else
		{
			if(m_szStatus != _T("O"))
				m_wndPost.EnableWindow(FALSE);
		}

		if(m_szOrgID != pMF->GetModuleID()){
			m_wndAdd.ShowWindow(SW_HIDE);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
			m_wndAddLine.ShowWindow(SW_HIDE);
		//	m_wndDiscard.EnableWindow(TRUE);
			m_wndEdit.ShowWindow(SW_HIDE);
			m_wndSave.ShowWindow(SW_HIDE);
			m_wndDelete.ShowWindow(SW_HIDE);
			CString tmpStr;
			TranslateString(_T("Cancel"), tmpStr);
			m_wndDiscard.SetWindowText(tmpStr);
			if(m_szStatus != _T("S"))
				m_wndDiscard.EnableWindow(FALSE);
		}
		else
			m_wndConfirm.ShowWindow(SW_HIDE);

		m_wndTransactionType.EnableWindow(FALSE);
		m_wndClose.EnableWindow(TRUE);
		
		if(m_szStatus == _T("S")){
			if(m_szConfirmed == _T("Y")){
				m_wndDisconfirm.EnableWindow(TRUE);
				m_wndConfirm.EnableWindow(FALSE);
			}
			else{
				m_wndConfirm.EnableWindow(TRUE);
				m_wndDisconfirm.EnableWindow(FALSE);
			}
		}
 		UpdateData(FALSE); 
 		return nOldMode; 


}

void CStorageTransactionDialog::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageTransactionDialog::OnFromStorageSelendok(){
	 
}

/*void CStorageTransactionDialog::OnFromStorageSetfocus(){
	
}*/
/*void CStorageTransactionDialog::OnFromStorageKillfocus(){
	
}*/
long CStorageTransactionDialog::OnFromStorageLoadData(){
	
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey);
}

/*void CStorageTransactionDialog::OnFromStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageTransactionDialog::OnToDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageTransactionDialog::OnToDepartmentSelendok(){
	 
}

/*void CStorageTransactionDialog::OnToDepartmentSetfocus(){
	
}*/
/*void CStorageTransactionDialog::OnToDepartmentKillfocus(){
	
}*/
long CStorageTransactionDialog::OnToDepartmentLoadData(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadDepartmentList(&m_wndToDepartment, m_szToDepartmentKey);


}

/*void CStorageTransactionDialog::OnToDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageTransactionDialog::OnDelivererSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageTransactionDialog::OnDelivererSelendok(){
	 
}

/*void CStorageTransactionDialog::OnDelivererSetfocus(){
	
}*/
/*void CStorageTransactionDialog::OnDelivererKillfocus(){
	
}*/
long CStorageTransactionDialog::OnDelivererLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadUserList(&m_wndDeliverer, m_szDelivererKey);
}

/*void CStorageTransactionDialog::OnDelivererAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageTransactionDialog::OnReceiverSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageTransactionDialog::OnReceiverSelendok(){
	 
}

/*void CStorageTransactionDialog::OnReceiverSetfocus(){
	
}*/
/*void CStorageTransactionDialog::OnReceiverKillfocus(){
	
}*/
long CStorageTransactionDialog::OnReceiverLoadData(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadUserList(&m_wndReceiver, m_szReceiverKey);
}

/*void CStorageTransactionDialog::OnReceiverAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageTransactionDialog::OnDescriptionChange(){
	
} */
/*void CStorageTransactionDialog::OnDescriptionSetfocus(){
	
} */
/*void CStorageTransactionDialog::OnDescriptionKillfocus(){
	
} */
int CStorageTransactionDialog::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CStorageTransactionDialog::OnOrderNoChange(){
	
} */
/*void CStorageTransactionDialog::OnOrderNoSetfocus(){
	
} */
/*void CStorageTransactionDialog::OnOrderNoKillfocus(){
	
} */
int CStorageTransactionDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CStorageTransactionDialog::OnOrderDateChange(){
	
} */
/*void CStorageTransactionDialog::OnOrderDateSetfocus(){
	
} */
/*void CStorageTransactionDialog::OnOrderDateKillfocus(){
	
} */
int CStorageTransactionDialog::OnOrderDateCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("M_TRANSACTION_EDIT('%s', '%s')"), m_szOrderNo, m_szOrderDate);
	//_tprintf(_T("\r\nszSQL: %s"), szSQL);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0) AfxMessageBox(_T("Updated!"));
	//else _msg(_T("nRet: %d|result: %s"), nRet, pMF->ExecDML(szSQL));
	return 0;
}
 
/*void CStorageTransactionDialog::OnAccountingDateChange(){
	
} */
/*void CStorageTransactionDialog::OnAccountingDateSetfocus(){
	
} */
/*void CStorageTransactionDialog::OnAccountingDateKillfocus(){
	
} */
int CStorageTransactionDialog::OnAccountingDateCheckValue(){
	return 0;
} 
void CStorageTransactionDialog::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageTransactionDialog::OnTransactionTypeSelendok(){
	 
}
/*void CStorageTransactionDialog::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageTransactionDialog::OnTransactionTypeKillfocus(){
	
}*/
long CStorageTransactionDialog::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id in('DDO', 'DPO','DMO') "));


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
/*void CStorageTransactionDialog::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
 
/*void CStorageTransactionDialog::OnTotalLinesChange(){
	
} */
/*void CStorageTransactionDialog::OnTotalLinesSetfocus(){
	
} */
/*void CStorageTransactionDialog::OnTotalLinesKillfocus(){
	
} */
int CStorageTransactionDialog::OnTotalLinesCheckValue(){
	return 0;
} 
/*void CStorageTransactionDialog::OnTotalAmountChange(){
	
} */
/*void CStorageTransactionDialog::OnTotalAmountSetfocus(){
	
} */
/*void CStorageTransactionDialog::OnTotalAmountKillfocus(){
	
} */
int CStorageTransactionDialog::OnTotalAmountCheckValue(){
	return 0;
}
 
void CStorageTransactionDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageTransactionDialog();
}
 
void CStorageTransactionDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageTransactionDialog();

}
 
void CStorageTransactionDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageTransactionDialog();
}
 
void CStorageTransactionDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageTransactionDialog();
}
 
void CStorageTransactionDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szOrgID == pMF->GetModuleID())
		OnDiscardStorageTransactionDialog();
	else
	{
		CString szSQL;
//		int ret = ShowMessageBox(_T("Do you want to cancel order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
//		if(ret == IDNO)
//			return;
		CRejectOrderNoteDialog dlg(this);
		dlg.m_szSubmitedBy = m_szSubmitedBy;
		if(dlg.DoModal() == IDOK)
		{
			szSQL.Format(_T("M_TRANSACTION_DISCARD(%ld, '%s', '%s') "), m_nID, pMF->GetCurrentUser(), dlg.m_szNote);
			int ret = str2int(pMF->ExecDML(szSQL));
			if(ret > 0)
			{
				m_bRefresh = true;
				CGuiDialog::OnCancel();
			}
			else
			{
				ShowMessageBox(_T("Cannot process with current status"));
			}
		}
	}
}

void CStorageTransactionDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("03.05")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return;
	}
	CPrintForms printer;
	//if(m_szTransactionTypeKey == _T("DMO"))
	{
		CGuiMenu menu(this);
		menu.CreatePopupMenu();
		menu.AppendMenu(MF_BYPOSITION, 1, _T("Print Export Order"));
		menu.AppendMenu(MF_SEPARATOR, 0);
		menu.AppendMenu(MF_BYPOSITION, 2, _T("Print Daily Order"));
		menu.AppendMenu(MF_SEPARATOR, 0);
		menu.AppendMenu(MF_BYPOSITION, 3, _T("Print Synthesis by Storage"));
		CPoint pt;
		CRect rect;
		m_wndPrint.GetWindowRect(&rect);
		pt.x = rect.right;
		pt.y = rect.top-2;
		int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
		switch (ret){
		case 1:
			printer.PrintDepartmentExportSheet(m_nID);
			break;
		case 2:
			 if (pMF->GetProp(_T("hms_inphieulinh_docx")) == _T("Y"))			
                pMF->OnPrintMTransaction(_T(""), m_nID, false, true);
            else
			printer.PrintDDO2(m_nID);
			
			break;
		case 3:
			CRecord rs(&pMF->m_db), rss(&pMF->m_db);
			CString szSQL, szOrderID, tmpStr;
			szSQL.Format(_T(" SELECT mt_transaction_id FROM m_transaction ") \
						 _T(" WHERE mt_orderno = '%s' AND mt_status IN ('A', 'S') AND mt_storage_id IN (7, 8)"), m_szOrderNo);
			rs.ExecSQL(szSQL);
			if (rs.IsEOF())
			{
				_debug(_T("No transaction!"));
				break;
			}
			szSQL.Format(_T(" SELECT get_storagename(mt_storage_id) storage_name FROM m_transaction WHERE mt_orderno = '%s' AND mt_storage_id IN (7, 8)") \
				_T(" AND mt_status = 'O'"), m_szOrderNo);
			rss.ExecSQL(szSQL);
			if (!rss.IsEOF())
			{
				//Phieu du tru [%s] o kho [%s] chua xac nhan!Can xac nhan truoc khi in phieu tong!
				tmpStr.Format(_T("Phi\x1EBFu \x64\x1EF1 tr\xF9 [%s] \x1EDF kho [%s] \x63h\x1B0\x61 \x78\xE1\x63 nh\xE2n!\x43\x1EA7n \x78\xE1\x63 nh\x1EADn tr\x1B0\x1EDB\x63 khi in phi\x1EBFu t\x1ED5ng!"), m_szOrderNo, rss.GetValue(_T("storage_name")));
				AfxMessageBox(tmpStr);
				break;
			}
			while (!rs.IsEOF())
			{
				if (!szOrderID.IsEmpty())
					szOrderID += _T(", ");
				szOrderID += rs.GetValue(_T("mt_transaction_id"));
				rs.MoveNext();
			}
			_debug(_T("szOrderID: %s"), szOrderID);
			printer.PrintDDO2X(szOrderID);
		}
	}
	//else
	//	printer.PrintDepartmentExportSheet(m_nID);

}
 
void CStorageTransactionDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("03.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}

	CString szSQL;
	CRecord rs(&pMF->m_db);

	if(m_szOrgID != pMF->GetModuleID())
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
	
	if (ToInt(m_szFromStorageKey) == 14)
	{
		ShowMessageBox(_T("Kho 14, Không cần qua bộ phận duyệt thuốc ở phòng tài chính!"));
	}

	if (ToInt(m_szFromStorageKey) == 14 && !pMF->CheckPermission(_T("PM.100.01")))	
	{

		szSQL.Format(_T(" SELECT hpo_orderid,") \
		_T("	hpo_docno , hpo_transaction_id,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("	TRUNC_DATE(hpo_orderdate) as hpo_orderdate,") \
		_T("	hpo_deptid") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno) ") \
		_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
		_T(" WHERE hpo_storage_id =%d") \
		_T(" AND hpo_ordertype IN('P','D') AND hpo_processed='N' AND hpo_transaction_id=%ld "), ToInt(m_szFromStorageKey), m_nID);
//_fmsg(_T("%s"), szSQL);
		rs.ExecSQL(szSQL);
		CString szTmp;
		while(!rs.IsEOF())
		{
			szTmp.AppendFormat(_T("[%s - %s - %s] \r\n"), rs.GetValue(_T("hpo_docno")), rs.GetValue(_T("pname")), rs.GetValue(_T("orderdate")));
			
			rs.MoveNext();
		}

		if(!szTmp.IsEmpty())
		{
			CString szMsg;
			szMsg.Format(_T("T\x1ED3n t\x1EA1i \x111\x1A1n thu\x1ED1\x63 \x63h\x1B0\x61 \x64uy\x1EC7t ph\xED:\r\n %s r\n Kh\xF4ng th\x1EC3 \x63\x1EA5p ph\xE1t \x111\x1B0\x1EE3\x63 phi\x1EBFu!"), szTmp);
			ShowMessageBox( szMsg, MB_ICONSTOP|MB_OK);
			return ;
		}

	}
	
	int retMsg = ShowMessageBox(_T("Do you want to approval order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return;



	szSQL.Format(_T("M_TRANSACTION_POST(%ld, '%s') "), m_nID,  pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		m_bRefresh = true;

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
			m_wndPost.EnableWindow(TRUE);

		}

	}
	else
	{
		ShowMessageBox(_T("Cannot approval order"));
	}

} 
void CStorageTransactionDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_bRefresh)
		CGuiDialog::OnOK();
	else
		CGuiDialog::OnCancel();
}


void CStorageTransactionDialog::OnConfirmSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("S"))
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}
	int ret = ShowMessageBox(_T("Do you want to confirm order?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(ret == IDNO)
		return;
	
//		int ret = ShowMessageBox(_T("Do you want to cancel order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
//		if(ret == IDNO)
//			return;
	

	CString szSQL;
//	szSQL.Format(_T("UPDATE m_transaction SET mt_isprinted='Y' ") \
//		_T("WHERE mt_transaction_id=%ld and mt_status='S' and mt_processed<>'Y' "), m_nID);
//	int ret = pMF->ExecSQL(szSQL);
	szSQL.Format(_T("M_TRANSACTION_CONFIRMPRINT(%ld,'%s', '') "), m_nID, pMF->GetCurrentUser());
	ret= str2int(pMF->ExecDML(szSQL));
	if(ret > 0){
		m_bRefresh = true;
		CGuiDialog::OnOK();
	}
	else
	{
		ShowMessageBox(_T("Cannot confirm order"));
	}
}

void CStorageTransactionDialog::OnDisconfirmSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("S"))
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}
	int ret = ShowMessageBox(_T("Do you want to disconfirm order?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(ret == IDNO)
		return;
	CString szSQL;
	szSQL.Format(_T("UPDATE m_transaction SET mt_isprinted='N' WHERE mt_transaction_id=%ld and mt_status='S' and mt_processed<>'Y' "), m_nID);
	ret = pMF->ExecSQL(szSQL);
	if(ret > 0){
		m_bRefresh = true;
		CGuiDialog::OnOK();
	}
	else
	{
		ShowMessageBox(_T("Cannot disconfirm order"));
	}
}


void CStorageTransactionDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.m_nOrderID = m_nID;
	m_wndLines.OnListAddItem();

} 
void CStorageTransactionDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CStorageTransactionDialog::OnAddStorageTransactionDialog(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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

int CStorageTransactionDialog::OnEditStorageTransactionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if(m_szStatus != _T("O")){
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}
	if(!pMF->CheckPermission(_T("02.02"))){/*
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return 0;*/
	}
	if(pMF->GetCurrentUser() != m_szCreatedBy){
		ShowMessageBox(_T("This order is created by other user. Can not edit it"), 0);
		return 0;
	}
 	SetMode(VM_EDIT);
	return 0;  

}

int CStorageTransactionDialog::OnDeleteStorageTransactionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}



	if(!pMF->CheckPermission(_T("02.03")))
	{
//		ShowMessageBox(_T("Permission denined"), MB_OK);
//		return 0;
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
		m_bRefresh = true;
 		SetMode(VM_NONE); 
 		OnDiscardStorageTransactionDialog(); 
 	}
	return 0;

}

int CStorageTransactionDialog::OnSaveStorageTransactionDialog(){
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
	CString szSQL;
	

	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
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

		m_szStatus = GetOrderStatus();
		if(m_szStatus == _T("A"))
		{
			szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_approveddate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id, mt_storage_to_id,mt_department_to_id")); 
		}
		else
		{
			szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_approveddate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id")); 
		}

 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		m_bRefresh = true;
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW); 
		}
		else
		{
			GetDataToScreen();
			SetMode(VM_VIEW); 
			m_wndAddLine.SetFocus();
		}
 		
		
 	} 
 	return ret; 

}

int CStorageTransactionDialog::OnDiscardStorageTransactionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_NONE) 
 		SetMode(VM_NONE); 
 	else 
 		SetMode(VM_VIEW); 
	m_wndOrderNo.SetFocus();
 	return 0;

}
 
int CStorageTransactionDialog::OnStorageTransactionDialogListLoadData(){
	return 0;
}


CString CStorageTransactionDialog::GetOrderStatus(){
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

bool CStorageTransactionDialog::IsAllowEdit(){
	if(m_szStatus != _T("O") || GetMode() != VM_VIEW)
		return false;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szUserID = pMF->GetCurrentUser();
	if (szUserID == _T("admin") || szUserID == _T("lpminh"))
		return true;
	if(m_szOrgID != pMF->GetModuleID())
		return false;
	return true;
}

void CStorageTransactionDialog::LoadNotifications()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);

	CString szNotice, szSQL;
	
	szSQL.Format(_T("SELECT mtn_createdby, mtn_createddate, mtn_notice ") \
			_T(" FROM m_transaction_notice ") \
			_T(" WHERE mtn_transaction_id=%ld ") \
			_T(" ORDER BY mtn_createddate "), m_nID);

	rs.ExecSQL(szSQL);
	m_wndNotifications.ResetContent();
	while(!rs.IsEOF())
	{
			szNotice.Format(_T("<b>[%s]- <i>%s</i></b><p><i>%s</i></p>"),
				rs.GetValue(_T("mtn_createdby")),
				rs.GetValue(_T("mtn_createddate")),
				rs.GetValue(_T("mtn_notice")));
			m_wndNotifications.AddString(szNotice);
			rs.MoveNext();
		}
}