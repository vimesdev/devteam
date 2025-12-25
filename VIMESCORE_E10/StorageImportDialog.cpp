#include "StorageImportDialog.h"
#include "MainFrame_E10.h"
#include "StorageImportLineInput.h"
#include "HMSReportForms/PrintForms.h"
#include "AdBusinessPartnerDialog.h"

static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportDialog* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportDialog* )pWnd)->OnToDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnToDepartmentSelendok();
}
/*static void _OnToDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnToDepartmentKillfocus();
}*/
/*static void _OnToDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnToDepartmentKillfocus();
}*/
static long _OnToDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnToDepartmentLoadData();
}
/*static void _OnToDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnToDepartmentAddNew();
}*/
static void _OnDelivererSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportDialog* )pWnd)->OnDelivererSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDelivererSelendokFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDelivererSelendok();
}
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDelivererKillfocus();
}*/
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDelivererKillfocus();
}*/
static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnDelivererLoadData();
}
/*static void _OnDelivererAddNewFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDelivererAddNew();
}*/
static void _OnReceiverSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportDialog* )pWnd)->OnReceiverSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiverSelendokFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnReceiverSelendok();
}
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnReceiverKillfocus();
}*/
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnReceiverKillfocus();
}*/
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnReceiverLoadData();
}
/*static void _OnReceiverAddNewFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnReceiverAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnAccountingDateCheckValue();
}


static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnApprovedDateCheckValue();
}

static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportDialog* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTransactionTypeAddNew();
}*/

static void _OnReferenceLabelSelectFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnReferenceLabelSelect();
}
static void _OnDeliveryObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportDialog* )pWnd)->OnDeliveryObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryObjectSelendokFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDeliveryObjectSelendok();
}
/*static void _OnDeliveryObjectSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDeliveryObjectKillfocus();
}*/
/*static void _OnDeliveryObjectKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDeliveryObjectKillfocus();
}*/
static long _OnDeliveryObjectLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnDeliveryObjectLoadData();
}
/*static void _OnDeliveryObjectAddNewFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnDeliveryObjectAddNew();
}*/

/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CStorageImportDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CStorageImportDialog *pVw = (CStorageImportDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CStorageImportDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddStorageDeliveryOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageImportDialog*)pWnd)->OnAddStorageDeliveryOrderDialog();
} 
static int _OnEditStorageDeliveryOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageImportDialog*)pWnd)->OnEditStorageDeliveryOrderDialog();
} 
static int _OnDeleteStorageDeliveryOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageImportDialog*)pWnd)->OnDeleteStorageDeliveryOrderDialog();
} 
static int _OnSaveStorageDeliveryOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageImportDialog*)pWnd)->OnSaveStorageDeliveryOrderDialog();
} 
static int _OnDiscardStorageDeliveryOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageImportDialog*)pWnd)->OnDiscardStorageDeliveryOrderDialog();
} 
CStorageImportDialog::CStorageImportDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	SetWindowName(_T("StorageImportDialog"));
	m_bRefresh = false;

}
CStorageImportDialog::~CStorageImportDialog(){
	
}
void CStorageImportDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 120);
	m_wndOrderInformation.Create(this, _T("Order Information"), 690, 5, 1005, 120);
	m_wndTransactionTypeLabel.Create(this, _T("Transaction Type"), 10, 30, 135, 55);
	m_wndTransactionType.Create(this,140, 30, 340, 55); 
	m_wndFromStorageLabel.Create(this, _T("To Storage"), 345, 30, 470, 55);
	m_wndFromStorage.Create(this,475, 30, 680, 55); 
	
	m_wndReferenceLabel.Create(this, _T("Delivery To"), 10, 60, 110, 85);
//	m_wndReference.Create(this,140, 90, 470, 115); 
	m_wndDeliveryObject.Create(this,140, 60, 680, 85); 
	
	m_wndDescriptionLabel.Create(this, _T("Reason"), 10, 90, 135, 115);
	m_wndDescription.Create(this,140, 90, 680, 115); 

//	m_wndOriginalDocument.Create(this, _T("Original Document"), 475, 90, 680, 115);
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
void CStorageImportDialog::OnInitializeComponents(){

	SetWindowTitle(_T("Other Delivery Order"));

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndReferenceLabel.SetHyperlink(true);

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);


	m_wndDeliveryObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeliveryObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

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

void CStorageImportDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	
	m_wndReferenceLabel.SetEvent(WE_CLICK, _OnReferenceLabelSelectFnc);
	m_wndDeliveryObject.SetEvent(WE_SELENDOK, _OnDeliveryObjectSelendokFnc);
	//m_wndDeliveryObject.SetEvent(WE_SETFOCUS, _OnDeliveryObjectSetfocusFnc);
	//m_wndDeliveryObject.SetEvent(WE_KILLFOCUS, _OnDeliveryObjectKillfocusFnc);
	m_wndDeliveryObject.SetEvent(WE_SELCHANGE, _OnDeliveryObjectSelectChangeFnc);
	m_wndDeliveryObject.SetEvent(WE_LOADDATA, _OnDeliveryObjectLoadDataFnc);
	//m_wndDeliveryObject.SetEvent(WE_ADDNEW, _OnDeliveryObjectAddNewFnc);
	
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
void CStorageImportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
//	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);

	DDX_TextEx(pDX, m_wndDeliveryObject.GetDlgCtrlID(), m_szDeliveryObjectKey);

	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CStorageImportDialog::GetDataToScreen(){
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
		rs.GetValue(_T("mt_storage_to_id"), m_szFromStorageKey);
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

void CStorageImportDialog::GetScreenToData(){
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
	m_transactionTbl.SetValue(_T("mt_storage_to_id"), m_szFromStorageKey);
	m_transactionTbl.SetValue(_T("mt_partner_id"), m_szDeliveryObjectKey);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_acctdate"), m_szAccountingDate);
	m_transactionTbl.SetValue(_T("mt_description"), m_szDescription);
	m_transactionTbl.SetValue(_T("mt_status"), m_szStatus);
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szTransactionTypeKey);
	m_transactionTbl.SetValue(_T("mt_org_id"), pMF->GetModuleID());


}

void CStorageImportDialog::SetDefaultValues(){

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

int CStorageImportDialog::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGEIMPORT_NO','N') "));
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
			m_wndPost.SetWindowText(_T("Unpost"));
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

void CStorageImportDialog::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageImportDialog::OnFromStorageSelendok(){
	 
}

/*void CStorageImportDialog::OnFromStorageSetfocus(){
	
}*/
/*void CStorageImportDialog::OnFromStorageKillfocus(){
	
}*/
long CStorageImportDialog::OnFromStorageLoadData(){
	
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey);
}

/*void CStorageImportDialog::OnFromStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageImportDialog::OnDescriptionChange(){
	
} */
/*void CStorageImportDialog::OnDescriptionSetfocus(){
	
} */
/*void CStorageImportDialog::OnDescriptionKillfocus(){
	
} */
int CStorageImportDialog::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CStorageImportDialog::OnOrderNoChange(){
	
} */
/*void CStorageImportDialog::OnOrderNoSetfocus(){
	
} */
/*void CStorageImportDialog::OnOrderNoKillfocus(){
	
} */
int CStorageImportDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CStorageImportDialog::OnOrderDateChange(){
	
} */
/*void CStorageImportDialog::OnOrderDateSetfocus(){
	
} */
/*void CStorageImportDialog::OnOrderDateKillfocus(){
	
} */
int CStorageImportDialog::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CStorageImportDialog::OnAccountingDateChange(){
	
} */
/*void CStorageImportDialog::OnAccountingDateSetfocus(){
	
} */
/*void CStorageImportDialog::OnAccountingDateKillfocus(){
	
} */
int CStorageImportDialog::OnAccountingDateCheckValue(){
	return 0;
}

int CStorageImportDialog::OnApprovedDateCheckValue(){
	return 0;
}
void CStorageImportDialog::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageImportDialog::OnTransactionTypeSelendok(){
	 UpdateData(true);

	 if(m_szTransactionTypeKey == _T("EXP") || m_szTransactionTypeKey == _T("EOH") || m_szTransactionTypeKey == _T("IMP")){
		 m_wndDeliveryObject.SetReadOnly(FALSE);
		 m_wndDeliveryObject.EnableWindow(TRUE);
		 m_wndDeliveryObject.SetCheckValue(TRUE);
	 }
	 else
	 {
		 m_wndDeliveryObject.SetReadOnly(TRUE);
		 m_wndDeliveryObject.EnableWindow(FALSE);
		 m_wndDeliveryObject.SetCheckValue(FALSE);
		 m_szDeliveryObjectKey.Empty();
	 }
}
/*void CStorageImportDialog::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageImportDialog::OnTransactionTypeKillfocus(){
	
}*/
long CStorageImportDialog::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id = 'IMP' "));

	if(pMF->GetModuleID() == _T("BB"))
	{
		szFilter.Format(_T(" and addt_doctype_id = 'IMP' "));

	}
	else
	{
		szFilter.Format(_T(" and addt_doctype_id = 'IMP' "));
	}


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
/*void CStorageImportDialog::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

void CStorageImportDialog::OnReferenceLabelSelect(){
	if(m_szTransactionTypeKey != _T("EXP") && m_szTransactionTypeKey != _T("EOH"))
		return;
	CAdBusinessPartnerDialog dlg(this, VM_ADD);
	dlg.m_szPartnerTypeKey = _T("CT");
	dlg.DoModal();
}

void CStorageImportDialog::OnDeliveryObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageImportDialog::OnDeliveryObjectSelendok(){
	 
}
/*void CStorageImportDialog::OnDeliveryObjectSetfocus(){
	
}*/
/*void CStorageImportDialog::OnDeliveryObjectKillfocus(){
	
}*/
long CStorageImportDialog::OnDeliveryObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and adp_partner_type_id='CT'"));
	return pMF->LoadPartnerList(&m_wndDeliveryObject, m_szDeliveryObjectKey, szFilter);
}
/*void CStorageImportDialog::OnDeliveryObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
 

/*void CStorageImportDialog::OnTotalLinesChange(){
	
} */
/*void CStorageImportDialog::OnTotalLinesSetfocus(){
	
} */
/*void CStorageImportDialog::OnTotalLinesKillfocus(){
	
} */
int CStorageImportDialog::OnTotalLinesCheckValue(){
	return 0;
} 
/*void CStorageImportDialog::OnTotalAmountChange(){
	
} */
/*void CStorageImportDialog::OnTotalAmountSetfocus(){
	
} */
/*void CStorageImportDialog::OnTotalAmountKillfocus(){
	
} */
int CStorageImportDialog::OnTotalAmountCheckValue(){
	return 0;
}
 
void CStorageImportDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageDeliveryOrderDialog();
}
 
void CStorageImportDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageDeliveryOrderDialog();

}
 
void CStorageImportDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageDeliveryOrderDialog();
}
 
void CStorageImportDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageDeliveryOrderDialog();
}
 
void CStorageImportDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardStorageDeliveryOrderDialog();
}
 
void CStorageImportDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("05.05")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return;
	}
	CPrintForms printer;
	printer.PM_PrintOtherImport(m_nID);
}
 
void CStorageImportDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("05.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}

	CString szSQL;
	if(m_szStatus != _T("O"))
		return;
	
	int retMsg = ShowMessageBox(_T("Do you want to approval order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return;



	szSQL.Format(_T("M_TRANSACTION_POST_IMP(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
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
			TranslateString(_T("Post"), tmpStr);
			m_wndPost.SetWindowText(tmpStr);

		}

	}
	else
	{
		ShowMessageBox(_T("Cannot approval order"));
	}

} 
void CStorageImportDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_bRefresh)
		CGuiDialog::OnOK();
	else
		CGuiDialog::OnCancel();
} 

void CStorageImportDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	CRect rect;
	CString tmpStr;
	m_wndAddLine.GetWindowRect(&rect);
	TranslateString(_T("Add Exported Line"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR, 0);
	TranslateString(_T("Add New Line"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_LEFTALIGN, rect.left, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnAddExportedLine();
			break;
		case 2:
			OnAddNewLine();
			break;
	}
}

void CStorageImportDialog::OnAddExportedLine(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.m_nOrderID = m_nID;
	m_wndLines.OnListAddItem();

} 

void CStorageImportDialog::OnAddNewLine(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.m_nOrderID = m_nID;
	m_wndLines.OnListAddItem2();
}

void CStorageImportDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CStorageImportDialog::OnAddStorageDeliveryOrderDialog(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("05.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 

 	SetMode(VM_ADD);
	return 0;
}

int CStorageImportDialog::OnEditStorageDeliveryOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("05.02")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

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

int CStorageImportDialog::OnDeleteStorageDeliveryOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("05.03")))
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
 		OnDiscardStorageDeliveryOrderDialog(); 
		m_bRefresh = true;
 	}
	return 0;

}

int CStorageImportDialog::OnSaveStorageDeliveryOrderDialog(){
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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
		szSQL.Format(_T("AD_GETNEXTVAL('STORAGEIMPORT_NO','Y') "));
		m_szOrderNo = pMF->ExecDML(szSQL);
		m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo); 		
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

int CStorageImportDialog::OnDiscardStorageDeliveryOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_NONE) 
 		SetMode(VM_NONE); 
 	else 
 		SetMode(VM_VIEW); 
	m_wndOrderNo.SetFocus();
 	return 0;

}
 
int CStorageImportDialog::OnStorageDeliveryOrderDialogListLoadData(){
	return 0;
}


CString CStorageImportDialog::GetOrderStatus(){
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szStatus = _T("");
	szSQL.Format(_T("SELECT mt_status FROM m_transaction WHERE mt_transaction_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("mt_status"), szStatus);
	return szStatus;
}

bool CStorageImportDialog::IsAllowEdit(){
	if(m_szStatus != _T("O") || GetMode() != VM_VIEW)
		return false;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if(m_szOrgID != pMF->GetModuleID())
		return false;
	return true;
}