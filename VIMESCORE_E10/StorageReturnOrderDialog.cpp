#include "StorageReturnOrderDialog.h"
#include "MainFrame_E10.h"
#include "StorageReturnOrderLineInput.h"
#include "HMSReportForms/PrintForms.h"

static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderDialog* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnImportStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderDialog* )pWnd)->OnImportStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnImportStorageSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnImportStorageSelendok();
}
/*static void _OnImportStorageSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnImportStorageKillfocus();
}*/
/*static void _OnImportStorageKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnImportStorageKillfocus();
}*/
static long _OnImportStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnImportStorageLoadData();
}
/*static void _OnImportStorageAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnImportStorageAddNew();
}*/
static void _OnReturnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderDialog* )pWnd)->OnReturnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReturnStorageSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnReturnStorageSelendok();
}
/*static void _OnReturnStorageSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnReturnStorageKillfocus();
}*/
/*static void _OnReturnStorageKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnReturnStorageKillfocus();
}*/
static long _OnReturnStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnReturnStorageLoadData();
}
/*static void _OnReturnStorageAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnReturnStorageAddNew();
}*/
static void _OnDelivererSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderDialog* )pWnd)->OnDelivererSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDelivererSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDelivererSelendok();
}
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDelivererKillfocus();
}*/
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDelivererKillfocus();
}*/
static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnDelivererLoadData();
}
/*static void _OnDelivererAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDelivererAddNew();
}*/
static void _OnReceiverSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderDialog* )pWnd)->OnReceiverSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiverSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnReceiverSelendok();
}
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnReceiverKillfocus();
}*/
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnReceiverKillfocus();
}*/
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnReceiverLoadData();
}
/*static void _OnReceiverAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnReceiverAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnApprovedDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnApprovedDateKillfocus();
} */

/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CStorageReturnOrderDialog *pVw = (CStorageReturnOrderDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CStorageReturnOrderDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddStorageReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderDialog*)pWnd)->OnAddStorageReturnOrderDialog();
} 
static int _OnEditStorageReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderDialog*)pWnd)->OnEditStorageReturnOrderDialog();
} 
static int _OnDeleteStorageReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderDialog*)pWnd)->OnDeleteStorageReturnOrderDialog();
} 
static int _OnSaveStorageReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderDialog*)pWnd)->OnSaveStorageReturnOrderDialog();
} 
static int _OnDiscardStorageReturnOrderDialogFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderDialog*)pWnd)->OnDiscardStorageReturnOrderDialog();
} 
CStorageReturnOrderDialog::CStorageReturnOrderDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CStorageReturnOrderDialog::~CStorageReturnOrderDialog(){
	
}
void CStorageReturnOrderDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 6, 5, 686, 150);
	m_wndOrderInformation.Create(this, _T("Order Information"), 690, 5, 1005, 150);
	m_wndTransactionTypeLabel.Create(this, _T("Transaction Type"), 10, 30, 135, 55);
	m_wndTransactionType.Create(this,140, 30, 340, 55); 
	m_wndDepartmentLabel.Create(this, _T("Return Department"), 345, 30, 470, 55);
	m_wndDepartment.Create(this,475, 30, 680, 55); 
	m_wndImportStorageLabel.Create(this, _T("Import Storage"), 10, 60, 135, 85);
	m_wndImportStorage.Create(this,140, 60, 340, 85); 
	m_wndReturnStorageLabel.Create(this, _T("Return Storage"), 345, 59, 470, 84);
	m_wndReturnStorage.Create(this,475, 59, 680, 84); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 11, 89, 136, 114);
	m_wndDeliverer.Create(this,141, 89, 341, 114); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 345, 90, 470, 115);
	m_wndReceiver.Create(this,475, 90, 680, 115); 
	m_wndDescriptionLabel.Create(this, _T("Reason"), 12, 119, 137, 144);
	m_wndDescription.Create(this,140, 119, 680, 144); 
	m_wndOrderNoLabel.Create(this, _T("ORDERNO"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("ORDERDATE"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndApprovedDateLabel.Create(this, _T("Accounting Date"), 695, 90, 845, 115);
	m_wndApprovedDate.Create(this,850, 90, 1000, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 695, 119, 845, 144);
	m_wndStatus.Create(this,850, 119, 1000, 144); 
	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 4, 545, 104, 570);
	m_wndTotalLines.Create(this,109, 545, 184, 570); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 700, 545, 850, 570);
	m_wndTotalAmount.Create(this,855, 545, 1005, 570); 
	m_wndAdd.Create(this, _T("&Add"), 250, 575, 340, 600);
	m_wndEdit.Create(this, _T("&Edit"), 345, 575, 435, 600);
	m_wndDelete.Create(this, _T("&Delete"), 440, 575, 530, 600);
	m_wndSave.Create(this, _T("&Save"), 535, 575, 625, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 630, 575, 720, 600);
	m_wndPrint.Create(this, _T("&Print"), 725, 575, 815, 600);
	m_wndPost.Create(this, _T("Post"), 820, 575, 910, 600);
	m_wndClose.Create(this, _T("&Close"), 915, 575, 1005, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndTab.Create(this,5, 155, 1005, 540); 

}
void CStorageReturnOrderDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowTitle(_T("Return Order"));

	m_wndTransactionType.SetCheckValue(true);
	m_wndTransactionType.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndImportStorage.SetCheckValue(true);
	m_wndImportStorage.LimitText(1024);
	m_wndReturnStorage.SetCheckValue(true);
	m_wndReturnStorage.LimitText(35);
	m_wndDeliverer.SetCheckValue(true);
	m_wndDeliverer.LimitText(35);
	m_wndReceiver.SetCheckValue(true);
	m_wndReceiver.LimitText(35);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndApprovedDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndApprovedDate.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetReadOnly(TRUE);
	m_wndTotalLines.SetLimitText(1024);
	m_wndTotalLines.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(1024);
	m_wndTotalAmount.SetCheckValue(true);





	m_wndApprovedDate.SetReadOnly(true);
	m_wndApprovedDate.SetReadOnly(true);
	m_wndOrderDate.SetReadOnly(true);
	m_wndOrderNo.SetReadOnly(true);

	//	m_wndOrderNo.SetMask(_T("&&########"));
	m_wndOrderNo.SetLimitText(10);
	m_wndOrderNo.SetCheckValue(true);
//	m_wndOrderNo.SetReadOnly(pMF->m_bSheetReatOnly);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndOrderDate.SetCheckValue(true);
	//m_wndOrderDate.ModifyStyle(WS_TABSTOP, 0);
	m_wndImportStorage.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
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
	

	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndImportStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndImportStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndReturnStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndReturnStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndDeliverer.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndDeliverer.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);

	m_wndReceiver.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndReceiver.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);


	m_wndDeliverer.SetCheckValue(FALSE);
	m_wndReceiver.SetCheckValue(FALSE);
	m_wndDescription.SetCheckValue(FALSE);

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

void CStorageReturnOrderDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndImportStorage.SetEvent(WE_SELENDOK, _OnImportStorageSelendokFnc);
	//m_wndImportStorage.SetEvent(WE_SETFOCUS, _OnImportStorageSetfocusFnc);
	//m_wndImportStorage.SetEvent(WE_KILLFOCUS, _OnImportStorageKillfocusFnc);
	m_wndImportStorage.SetEvent(WE_SELCHANGE, _OnImportStorageSelectChangeFnc);
	m_wndImportStorage.SetEvent(WE_LOADDATA, _OnImportStorageLoadDataFnc);
	//m_wndImportStorage.SetEvent(WE_ADDNEW, _OnImportStorageAddNewFnc);
	m_wndReturnStorage.SetEvent(WE_SELENDOK, _OnReturnStorageSelendokFnc);
	//m_wndReturnStorage.SetEvent(WE_SETFOCUS, _OnReturnStorageSetfocusFnc);
	//m_wndReturnStorage.SetEvent(WE_KILLFOCUS, _OnReturnStorageKillfocusFnc);
	m_wndReturnStorage.SetEvent(WE_SELCHANGE, _OnReturnStorageSelectChangeFnc);
	m_wndReturnStorage.SetEvent(WE_LOADDATA, _OnReturnStorageLoadDataFnc);
	//m_wndReturnStorage.SetEvent(WE_ADDNEW, _OnReturnStorageAddNewFnc);
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
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
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
void CStorageReturnOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndImportStorage.GetDlgCtrlID(), m_szImportStorageKey);
	DDX_TextEx(pDX, m_wndReturnStorage.GetDlgCtrlID(), m_szReturnStorageKey);
	DDX_TextEx(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDelivererKey);
	DDX_TextEx(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiverKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDescription);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CStorageReturnOrderDialog::GetDataToScreen(){
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
		_T("mt_department_id, ") \
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
		rs.GetValue(_T("mt_department_id"), m_szDepartmentKey);
		rs.GetValue(_T("mt_storage_id"), m_szReturnStorageKey);
		rs.GetValue(_T("mt_storage_to_id"), m_szImportStorageKey);
		rs.GetValue(_T("mt_orderno"), m_szOrderNo);
		rs.GetValue(_T("mt_orderdate"), m_szOrderDate);
		rs.GetValue(_T("mt_acctdate"), m_szApprovedDate);
		rs.GetValue(_T("mt_approveddate"), m_szApprovedDate);
		rs.GetValue(_T("mt_description"), m_szDescription);
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_netamount"), m_nTotalLines);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("mt_doctype"), m_szTransactionTypeKey);
		
		if(m_szTransactionTypeKey == _T("MRO") || m_szTransactionTypeKey == _T("CRO") || m_szTransactionTypeKey == _T("DRO"))
		{
			m_wndLines.m_nStorageID = str2int(m_szReturnStorageKey);
			m_wndLines.m_nStorageToID = str2int(m_szImportStorageKey);
		}
		else
			m_wndLines.m_nStorageID = str2int(m_szImportStorageKey);

		if(m_szStatus == _T("S"))
			
		m_wndLines.m_nOrderID = m_nID;
		m_wndLines.Refresh(m_nID);		
	}
}

void CStorageReturnOrderDialog::GetScreenToData(){
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
	m_transactionTbl.SetValue(_T("mt_storage_id"), m_szReturnStorageKey);
	m_transactionTbl.SetValue(_T("mt_department_id"), m_szDepartmentKey);
	m_transactionTbl.SetValue(_T("mt_department_to_id"), pMF->GetDepartmentID());
	m_transactionTbl.SetValue(_T("mt_storage_to_id"), m_szImportStorageKey);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_description"), m_szDescription);
	m_transactionTbl.SetValue(_T("mt_status"), m_szStatus);
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szTransactionTypeKey);
	m_transactionTbl.SetValue(_T("mt_org_id"), pMF->GetModuleID());


}

void CStorageReturnOrderDialog::SetDefaultValues(){

	m_szTransactionTypeKey.Empty();
	m_szDepartmentKey.Empty();
	m_szImportStorageKey.Empty();
	m_szReturnStorageKey.Empty();
	m_szDelivererKey.Empty();
	m_szReceiverKey.Empty();
	m_szDescription.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szApprovedDate.Empty();
	m_szApprovedDate.Empty();
	m_szStatus.Empty();
	m_nTotalLines=0;
	m_nTotalAmount=0;
	m_nTotalLines = 0;
	m_szTransactionTypeKey = _T("DRO");

}

int CStorageReturnOrderDialog::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGERETURNORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szApprovedDate= m_szOrderDate;
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
				m_wndImportStorage.EnableWindow(FALSE);
				m_wndReturnStorage.EnableWindow(FALSE);
				m_wndDepartment.EnableWindow(FALSE);
				m_wndTransactionType.EnableWindow(FALSE);
			}
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

		
		if(m_szOrgID != pMF->GetModuleID())
		{
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
			if(m_szStatus != _T("S")){
				m_wndPost.EnableWindow(FALSE);
			}
			if(m_szStatus == _T("O"))
			{
				m_wndPrint.EnableWindow(FALSE);
				
			}

			if(m_szStatus == _T("S"))
			{
				m_wndDiscard.EnableWindow(TRUE);
			}

		}
		else
		{
			if (m_szStatus == _T("O"))
				m_wndAddLine.SetFocus();
			else
			{
				m_wndPost.EnableWindow(FALSE);
			}
		}

		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 


}

void CStorageReturnOrderDialog::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderDialog::OnTransactionTypeSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	UpdateData(TRUE);
	if(m_szTransactionTypeKey == _T("DRO"))
	{
		m_wndReturnStorage.EnableWindow(FALSE);
		m_wndReturnStorage.SetReadOnly(TRUE);
		m_wndReturnStorage.SetCheckValue(FALSE);
	}
	else
	{
		m_szDepartmentKey.Empty();
		m_szReturnStorageKey.Empty();

		//Truong hop tra lai tu kho
		if(m_szTransactionTypeKey == _T("MRO"))
		{
			m_szDepartmentKey = pMF->GetDepartmentID();
			m_wndDepartment.SetReadOnly(TRUE);
			m_wndDepartment.SetCheckValue(FALSE);
			m_wndDepartment.EnableWindow(FALSE);
			
		}
		else
		{
			m_wndDepartment.SetReadOnly(FALSE);
			m_wndDepartment.SetCheckValue(TRUE);
			m_wndDepartment.EnableWindow(TRUE);
			
		}

		m_wndReturnStorage.EnableWindow(TRUE);
		m_wndReturnStorage.SetReadOnly(FALSE);
		m_wndReturnStorage.SetCheckValue(TRUE);


	}
	UpdateData(FALSE);
	 
}
/*void CStorageReturnOrderDialog::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageReturnOrderDialog::OnTransactionTypeKillfocus(){
	
}*/
long CStorageReturnOrderDialog::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and addt_doctype_id IN('MRO','CRO','DRO') "));
	return pMF->LoadTransactionTypeList(&m_wndTransactionType, m_szTransactionTypeKey, szWhere);

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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageReturnOrderDialog::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageReturnOrderDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderDialog::OnDepartmentSelendok(){
	 
}
/*void CStorageReturnOrderDialog::OnDepartmentSetfocus(){
	
}*/
/*void CStorageReturnOrderDialog::OnDepartmentKillfocus(){
	
}*/
long CStorageReturnOrderDialog::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadDepartmentList(&m_wndDepartment, m_szDepartmentKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageReturnOrderDialog::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageReturnOrderDialog::OnImportStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageReturnOrderDialog::OnImportStorageSelendok(){
	 
}

/*void CStorageReturnOrderDialog::OnImportStorageSetfocus(){
	
}*/
/*void CStorageReturnOrderDialog::OnImportStorageKillfocus(){
	
}*/
long CStorageReturnOrderDialog::OnImportStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Empty();
	if(!m_szReturnStorageKey.IsEmpty())
		szWhere.Format(_T(" and msl_storage_id <> %d "), str2int(m_szReturnStorageKey));

	return pMF->LoadStorageList(&m_wndImportStorage, m_szImportStorageKey, szWhere);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndImportStorage.IsSearchKey() && !m_szImportStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szImportStorageKey
};
	m_wndImportStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndImportStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageReturnOrderDialog::OnImportStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageReturnOrderDialog::OnReturnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderDialog::OnReturnStorageSelendok(){
	 
}
/*void CStorageReturnOrderDialog::OnReturnStorageSetfocus(){
	
}*/
/*void CStorageReturnOrderDialog::OnReturnStorageKillfocus(){
	
}*/
long CStorageReturnOrderDialog::OnReturnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Empty();
	if(!m_szImportStorageKey.IsEmpty())
		szWhere.Format(_T(" and msl_storage_id <> %d "), str2int(m_szImportStorageKey));
	szWhere.AppendFormat(_T(" and msl_dept_id='%s' "), m_szDepartmentKey);
	return pMF->LoadStorageList(&m_wndReturnStorage, m_szReturnStorageKey, szWhere);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReturnStorage.IsSearchKey() && !m_szReturnStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReturnStorageKey
};
	m_wndReturnStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReturnStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageReturnOrderDialog::OnReturnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageReturnOrderDialog::OnDelivererSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderDialog::OnDelivererSelendok(){
	 
}
/*void CStorageReturnOrderDialog::OnDelivererSetfocus(){
	
}*/
/*void CStorageReturnOrderDialog::OnDelivererKillfocus(){
	
}*/
long CStorageReturnOrderDialog::OnDelivererLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CString szFilter;
	szFilter.Format(_T(" and su_deptid='%s' "), m_szDepartmentKey);
	return pMF->LoadUserList(&m_wndDeliverer, m_szDelivererKey, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeliverer.IsSearchKey() && !m_szDelivererKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDelivererKey
};
	m_wndDeliverer.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeliverer.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageReturnOrderDialog::OnDelivererAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageReturnOrderDialog::OnReceiverSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderDialog::OnReceiverSelendok(){
	 
}
/*void CStorageReturnOrderDialog::OnReceiverSetfocus(){
	
}*/
/*void CStorageReturnOrderDialog::OnReceiverKillfocus(){
	
}*/
long CStorageReturnOrderDialog::OnReceiverLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	CString szFilter;
	szFilter.Format(_T(" and su_deptid='%s' "), pMF->m_szDeptID);
	return pMF->LoadUserList(&m_wndReceiver, m_szReceiverKey, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReceiver.IsSearchKey() && !m_szReceiverKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReceiverKey
};
	m_wndReceiver.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReceiver.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageReturnOrderDialog::OnReceiverAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageReturnOrderDialog::OnDescriptionChange(){
	
} */
/*void CStorageReturnOrderDialog::OnDescriptionSetfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnDescriptionKillfocus(){
	
} */
int CStorageReturnOrderDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderDialog::OnOrderNoChange(){
	
} */
/*void CStorageReturnOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnOrderNoKillfocus(){
	
} */
int CStorageReturnOrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderDialog::OnOrderDateChange(){
	
} */
/*void CStorageReturnOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnOrderDateKillfocus(){
	
} */
int CStorageReturnOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderDialog::OnApprovedDateChange(){
	
} */
/*void CStorageReturnOrderDialog::OnApprovedDateSetfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnApprovedDateKillfocus(){
	
} */
int CStorageReturnOrderDialog::OnApprovedDateCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderDialog::OnApprovedDateChange(){
	
} */
/*void CStorageReturnOrderDialog::OnApprovedDateSetfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnApprovedDateKillfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnStatusChange(){
	
} */
/*void CStorageReturnOrderDialog::OnStatusSetfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnStatusKillfocus(){
	
} */
int CStorageReturnOrderDialog::OnStatusCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderDialog::OnTotalLinesChange(){
	
} */
/*void CStorageReturnOrderDialog::OnTotalLinesSetfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnTotalLinesKillfocus(){
	
} */
int CStorageReturnOrderDialog::OnTotalLinesCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderDialog::OnTotalAmountChange(){
	
} */
/*void CStorageReturnOrderDialog::OnTotalAmountSetfocus(){
	
} */
/*void CStorageReturnOrderDialog::OnTotalAmountKillfocus(){
	
} */
int CStorageReturnOrderDialog::OnTotalAmountCheckValue(){
	return 0;
}
 
void CStorageReturnOrderDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageReturnOrderDialog();
}
 
void CStorageReturnOrderDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageReturnOrderDialog();

}
 
void CStorageReturnOrderDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageReturnOrderDialog();
}
 
void CStorageReturnOrderDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageReturnOrderDialog();
}
 
void CStorageReturnOrderDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szOrgID != pMF->GetModuleID())
	{
		int ret;
		ret = ShowMessageBox(_T("Do you want to discard order?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
		if(ret != IDYES)
			return;
		CString szSQL;
		szSQL.Format(_T("UPDATE m_transaction SET mt_status='O' WHERE mt_transaction_id=%ld and mt_status='S' "),
			m_nID);
		ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			m_szStatus = _T("O");
			SetMode(VM_VIEW);
			m_bRefresh = true;
		}
	}
	else
		OnDiscardStorageReturnOrderDialog();
}
 
void CStorageReturnOrderDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("06.05")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return;
	}
	CString szSQL, szLabel;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT nvl(mt_status, 'O') FROM m_transaction WHERE mt_transaction_id = %ld"), m_nID);
	rs.ExecSQL(szSQL);
	if (rs.GetStringValue() == _T("O"))
	{
		ShowMessageBox(_T("Order is open.Can not print!"));
		return;
	}
	CPrintForms printer;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	TranslateString(_T("Print Order"), szLabel);
	menu.AppendMenu(MF_BYPOSITION, 1, szLabel);
	TranslateString(_T("Print Return Import"), szLabel);
	menu.AppendMenu(MF_BYPOSITION, 2, szLabel);
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret)
	{
	case 1:
		_tprintf(_T("\r\nOnDefineTransactionType %d"), OnDefineTransactionType(m_nID));
	if (OnDefineTransactionType(m_nID) > 0)
		{
			if (pMF->GetProp(_T("hms_inphieutralai_docx")) == _T("Y"))
			{
				pMF->OnPrintReturnMTransaction(_T(""), m_nID, false, true);
				printer.TM_PrintDrugReturnPatientList(m_nID);	
			}
			else
			{
				printer.PrintDRO(m_nID);
				printer.TM_PrintDrugReturnPatientList(m_nID);
			}
				
		}
		else printer.PM_OnPrintCROwoPatient(m_nID);

		break;
	case 2:
		printer.E10_PrintReturnImport(m_nID);
		break;
	}

}

int CStorageReturnOrderDialog::OnDefineTransactionType(long nTransactionID){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("WITH pharma_view AS (SELECT hpol_retorder_id retorder_id FROM hms_pharmaorderline UNION ALL SELECT hpol_retorder_id FROM hms_ipharmaorderline)") \
		_T(" SELECT count(*) FROM pharma_view WHERE retorder_id = %ld"), nTransactionID);
	rs.ExecSQL(szSQL);
	return rs.GetIntValue(); 
}
 
void CStorageReturnOrderDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("06.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	CString szSQL;
	if(m_szOrgID !=  pMF->GetModuleID() )
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
	}
	else
	{
		ShowMessageBox(_T("Cannot approval return order"));
	}

} 
void CStorageReturnOrderDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_bRefresh)
		CGuiDialog::OnOK();
	else
		CGuiDialog::OnCancel();
} 
void CStorageReturnOrderDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.m_nOrderID = m_nID;
	m_wndLines.OnListAddItem();

} 
void CStorageReturnOrderDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CStorageReturnOrderDialog::OnAddStorageReturnOrderDialog(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("06.01")))
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
	return 0;
}

int CStorageReturnOrderDialog::OnEditStorageReturnOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("06.02")))
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

int CStorageReturnOrderDialog::OnDeleteStorageReturnOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("06.03")))
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
 		OnDiscardStorageReturnOrderDialog(); 
		m_bRefresh = true;
 	}
	return 0;

}

int CStorageReturnOrderDialog::OnSaveStorageReturnOrderDialog(){
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
 		szSQL = m_transactionTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE mt_transaction_id=%ld and mt_status in('O','S', 'A','I') "), m_nID); 
		m_szStatus = GetOrderStatus();
		if(m_szStatus == _T("A"))
		{
			szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_deliverydate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id,mt_storage_to_id,mt_department_to_id")); 
		}
		else
		{
			szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_deliverydate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id")); 
		}
 		
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

int CStorageReturnOrderDialog::OnDiscardStorageReturnOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_NONE) 
 		SetMode(VM_NONE); 
 	else 
 		SetMode(VM_VIEW); 
	m_wndOrderNo.SetFocus();
 	return 0;

}
 
int CStorageReturnOrderDialog::OnStorageReturnOrderDialogListLoadData(){
	return 0;
}


CString CStorageReturnOrderDialog::GetOrderStatus(){
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

bool CStorageReturnOrderDialog::IsAllowEdit(){
	if(m_szStatus != _T("O") || GetMode() != VM_VIEW)
		return false;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if(m_szOrgID != pMF->GetModuleID())
		return false;
	return true;
}