#include "StorageMedicalCabinetDialog.h"
#include "MainFrame_E10.h"
#include "StorageMedicalCabinetLineInput.h"
#include "HMSReportForms/PrintForms.h"
#include "WardPatientMedicalDebtDialog.h"

static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetDialog* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetDialog* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnToStorageAddNew();
}*/
static void _OnDelivererSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetDialog* )pWnd)->OnDelivererSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDelivererSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDelivererSelendok();
}
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDelivererKillfocus();
}*/
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDelivererKillfocus();
}*/
static long _OnDelivererLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnDelivererLoadData();
}
/*static void _OnDelivererAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDelivererAddNew();
}*/
static void _OnReceiverSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetDialog* )pWnd)->OnReceiverSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiverSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnReceiverSelendok();
}
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnReceiverKillfocus();
}*/
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnReceiverKillfocus();
}*/
static long _OnReceiverLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnReceiverLoadData();
}
/*static void _OnReceiverAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnReceiverAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnAccountingDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetDialog* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnTransportMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetDialog* )pWnd)->OnTransportMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportMethodSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTransportMethodSelendok();
}
/*static void _OnTransportMethodSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTransportMethodKillfocus();
}*/
/*static void _OnTransportMethodKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTransportMethodKillfocus();
}*/
static long _OnTransportMethodLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnTransportMethodLoadData();
}
/*static void _OnTransportMethodAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTransportMethodAddNew();
}*/
static void _OnDeliveryMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMedicalCabinetDialog* )pWnd)->OnDeliveryMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryMethodSelendokFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryMethodSelendok();
}
/*static void _OnDeliveryMethodSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryMethodKillfocus();
}*/
/*static void _OnDeliveryMethodKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryMethodKillfocus();
}*/
static long _OnDeliveryMethodLoadDataFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryMethodLoadData();
}
/*static void _OnDeliveryMethodAddNewFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryMethodAddNew();
}*/
/*static void _OnDeliveryDateChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryDateChange();
} */
/*static void _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryDateSetfocus();} */ 
/*static void _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryDateCheckValue();
} 
/*static void _OnDeliveryAddressChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryAddressChange();
} */
/*static void _OnDeliveryAddressSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryAddressSetfocus();} */ 
/*static void _OnDeliveryAddressKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryAddressKillfocus();
} */
static int _OnDeliveryAddressCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnDeliveryAddressCheckValue();
} 
/*static void _OnTotalLineChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTotalLineChange();
} */
/*static void _OnTotalLineSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTotalLineSetfocus();} */ 
/*static void _OnTotalLineKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTotalLineKillfocus();
} */
static int _OnTotalLineCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnTotalLineCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CStorageMedicalCabinetDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CStorageMedicalCabinetDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnAddLineSelect();
} 

static void _OnExportSelectFnc(CWnd *pWnd){
	CStorageMedicalCabinetDialog *pVw = (CStorageMedicalCabinetDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CStorageMedicalCabinetDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddStorageMedicalCabinetDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetDialog*)pWnd)->OnAddStorageMedicalCabinetDialog();
} 
static int _OnEditStorageMedicalCabinetDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetDialog*)pWnd)->OnEditStorageMedicalCabinetDialog();
} 
static int _OnDeleteStorageMedicalCabinetDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetDialog*)pWnd)->OnDeleteStorageMedicalCabinetDialog();
} 
static int _OnSaveStorageMedicalCabinetDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetDialog*)pWnd)->OnSaveStorageMedicalCabinetDialog();
} 
static int _OnDiscardStorageMedicalCabinetDialogFnc(CWnd *pWnd){
	 return ((CStorageMedicalCabinetDialog*)pWnd)->OnDiscardStorageMedicalCabinetDialog();
} 
CStorageMedicalCabinetDialog::CStorageMedicalCabinetDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szTransactionTypeKey = _T("CSO");
	SetWindowName(_T("StorageMedicalCabinetDialog"));
	m_bImport = false;
	m_bRefresh = false;
	m_bDebtResolve = FALSE;
}
CStorageMedicalCabinetDialog::~CStorageMedicalCabinetDialog(){
	
}
void CStorageMedicalCabinetDialog::OnCreateComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 150);
	m_wndOrderInformation.Create(this, _T("Order Information"), 690, 5, 1005, 150);
	m_wndFromStorageLabel.Create(this, _T("Storage"), 10, 30, 160, 55);
	m_wndFromStorage.Create(this,165, 30, 680, 55); 
	m_wndToStorageLabel.Create(this, _T("Medical Cabinet"), 10, 60, 160, 85);
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
	m_wndExport.Create(this, _T("Export"), 100, 575, 180, 600);
	m_wndTab.Create(this,5, 155, 1005, 540); 
	

}
void CStorageMedicalCabinetDialog::OnInitializeComponents(){

	
	SetWindowTitle(_T("Medical Cabinet Order"));

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

//	m_wndTransactionType.SetCheckValue(TRUE);
	m_wndTransactionType.SetReadOnly(TRUE);
	
	m_wndExport.ModifyStyle(WS_TABSTOP, 0);
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
	m_transactionTbl.AddField(_T("mt_category"), dfText, 1);

	m_wndLines.Create(&m_wndTab);
	m_wndPatientList.Create(&m_wndTab);
	m_wndTab.Add(_T("Items"), &m_wndLines);
	m_wndTab.Add(_T("Patient List"), &m_wndPatientList);
	m_wndLines.m_pWndOrder = this;
	m_wndPatientList.m_pWndOrder = this;
	m_wndLines.OnInitDialog();
	m_wndPatientList.OnInitDialog();
	m_wndTab.SetCurSel(0);

	m_wndOrderDate.SetReadOnly(true);
	m_wndApprovedDate.SetReadOnly(true);
	m_wndOrderNo.SetReadOnly(true);
	
}

void CStorageMedicalCabinetDialog::OnSetWindowEvents(){
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
//	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CStorageMedicalCabinetDialog::OnDoDataExchange(CDataExchange* pDX){
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
void CStorageMedicalCabinetDialog::GetDataToScreen()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, szWhere;

	//szWhere.AppendFormat(_T(" and mt_org_id in('GL', '%s') "), pMF->GetModuleID());
	if(pMF->m_szStoragePerm.IsEmpty())
		pMF->m_szStoragePerm = _T("-1");
	
	//szWhere.AppendFormat(_T(" and mt_storage_id in(%s) "), pMF->m_szStoragePerm);

	szSQL.Format(_T("SELECT mt_org_id, mt_createdby, ") \
		_T("mt_doctype, mt_ordertype, ") \
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
		_T("mt_department_to_id, ") \
		_T("mt_receiveby, ") \
		_T("mt_description, ") \
		_T("mt_status, ") \
		_T("mt_netamount, ") \
		_T("mt_taxamount, ") \
		_T("mt_totalamount, ") \
		_T(" mt_category") \
		_T(" FROM m_transaction ") \
		_T(" WHERE mt_transaction_id=%ld  ") \
		_T(" %s "), m_nID, szWhere);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	//Notice(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_org_id"), m_szOrgID);

		rs.GetValue(_T("mt_createdby"), m_szCreatedBy);
		rs.GetValue(_T("mt_transaction_id"), m_nID);
		
		rs.GetValue(_T("mt_orderno"), m_szOrderNo);
		rs.GetValue(_T("mt_orderdate"), m_szOrderDate);
		rs.GetValue(_T("mt_acctdate"), m_szAccountingDate);
		rs.GetValue(_T("mt_deliveryby"), m_szDelivererKey);
		rs.GetValue(_T("mt_approveddate"), m_szApprovedDate);
		rs.GetValue(_T("mt_approvedby"), m_szApprovedBy);
		
		
		rs.GetValue(_T("mt_receiveby"), m_szReceiverKey);
		rs.GetValue(_T("mt_description"), m_szDescription);
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		//_msg(_T("%.2f"), m_nTotalAmount);
		rs.GetValue(_T("mt_doctype"), m_szTransactionTypeKey);
		rs.GetValue(_T("mt_ordertype"), m_szOrderType);

		if(m_szTransactionTypeKey == _T("CSO"))
		{
			rs.GetValue(_T("mt_storage_id"), m_szFromStorageKey);
			rs.GetValue(_T("mt_storage_to_id"), m_szToStorageKey);
			rs.GetValue(_T("mt_department_to_id"), m_szDepartmentto_ID);
		}
		else
		{
			rs.GetValue(_T("mt_storage_to_id"), m_szFromStorageKey);
			rs.GetValue(_T("mt_storage_id"), m_szToStorageKey);
		}
		rs.GetValue(_T("mt_category"), m_szCategory);
		if (m_szCategory == _T("D"))
		{
			m_bDebtResolve = TRUE;
		}
		m_wndLines.m_nStorageID = str2int(m_szFromStorageKey);
		m_wndLines.m_nStorageToID = str2int(m_szToStorageKey);
		m_wndLines.m_nOrderID = m_nID;
		m_wndLines.Refresh(m_nID);
		
		m_wndPatientList.m_nTransactionID = m_nID;
		m_wndPatientList.Refresh(m_nID);
		if(m_szStatus != _T("A"))
		{

			m_szApprovedDate.Empty();
		}

		CString szDeptType = _T("DT");
		szSQL.Format(_T("SELECT sd_type FROM sys_dept WHERE sd_id='%s' "), m_szDepartmentto_ID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("sd_type"), szDeptType);
		}
		
		if(szDeptType == _T("KB") || szDeptType == _T("HA"))
		{
			m_wndLines.m_szOrgID = _T("EM");
			m_wndPatientList.m_bInPatient = false;
			
		}
		else
		{
			m_wndLines.m_szOrgID = _T("TM");
			m_wndPatientList.m_bInPatient = true;
		}
_tprintf(_T("\r\n%s"), szDeptType);
		
	}
	if(m_szTransactionTypeKey == _T("CSO"))
	{
	szSQL.Format(_T(" SELECT ") \
					_T(" sum(mtl_qtyorder*mtl_saleprice) as amount ") \
					_T(" FROM m_transactionline") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=mtl_product_item_id)") \
					_T(" WHERE mtl_transaction_id=%ld ") \
					_T(" and nvl(mtl_client_id,'XXX') <> 'REP' "), m_nID);
	
			rs2.ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);

			if(!rs2.IsEOF())
			{
				rs2.GetValue(_T("amount"), m_nTotalAmount);				
			}
	}
	
}

void CStorageMedicalCabinetDialog::GetScreenToData(){
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
	m_transactionTbl.SetValue(_T("mt_category"), m_bDebtResolve?_T("D"):_T(""));
}

void CStorageMedicalCabinetDialog::SetDefaultValues(){
	m_szCategory.Empty();
	m_szFromStorageKey.Empty();
	m_szToStorageKey.Empty();
	m_szDelivererKey.Empty();
	m_szReceiverKey.Empty();
	m_szDescription.Empty();
	m_szOrderDate.Empty();
	m_szStatus.Empty();
	m_nTotalAmount=0;
	m_nTotalLine = 0;
	m_szTransactionTypeKey = _T("CSO");

}

int CStorageMedicalCabinetDialog::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGE_MEDICALCABINET_NO','Y') "));
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
			else
			{
				m_wndDiscard.EnableWindow(TRUE);
			}
			if(m_szStatus == _T("O"))
			{
				m_wndPrint.EnableWindow(FALSE);
			}
		}
		else
		{
			if(m_szStatus != _T("O"))
			{
				m_wndPost.EnableWindow(FALSE);
			}
		}
		if (GetOrderStatus() == _T("A"))
		{
			m_wndExport.EnableWindow();
		}
		else
		{
			m_wndExport.EnableWindow(FALSE);
		}
		m_wndTransactionType.EnableWindow(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 


}

void CStorageMedicalCabinetDialog::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageMedicalCabinetDialog::OnFromStorageSelendok(){
	 
}

/*void CStorageMedicalCabinetDialog::OnFromStorageSetfocus(){
	
}*/
/*void CStorageMedicalCabinetDialog::OnFromStorageKillfocus(){
	
}*/
long CStorageMedicalCabinetDialog::OnFromStorageLoadData(){
	
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and msl_type <>'C' "));

	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szWhere);
}

/*void CStorageMedicalCabinetDialog::OnFromStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageMedicalCabinetDialog::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageMedicalCabinetDialog::OnToStorageSelendok(){
	 
}

/*void CStorageMedicalCabinetDialog::OnToStorageSetfocus(){
	
}*/
/*void CStorageMedicalCabinetDialog::OnToStorageKillfocus(){
	
}*/
long CStorageMedicalCabinetDialog::OnToStorageLoadData(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.AppendFormat(_T(" and msl_type ='C' "));
	return pMF->LoadStorageList(&m_wndToStorage, m_szToStorageKey, szWhere);


}

/*void CStorageMedicalCabinetDialog::OnToStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageMedicalCabinetDialog::OnDelivererSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageMedicalCabinetDialog::OnDelivererSelendok(){
	 
}

/*void CStorageMedicalCabinetDialog::OnDelivererSetfocus(){
	
}*/
/*void CStorageMedicalCabinetDialog::OnDelivererKillfocus(){
	
}*/
long CStorageMedicalCabinetDialog::OnDelivererLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_deptid='%s' "), pMF->m_szDeptID);
	return pMF->LoadUserList(&m_wndDeliverer, m_szDelivererKey, szFilter);
}

/*void CStorageMedicalCabinetDialog::OnDelivererAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageMedicalCabinetDialog::OnReceiverSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageMedicalCabinetDialog::OnReceiverSelendok(){
	 
}

/*void CStorageMedicalCabinetDialog::OnReceiverSetfocus(){
	
}*/
/*void CStorageMedicalCabinetDialog::OnReceiverKillfocus(){
	
}*/
long CStorageMedicalCabinetDialog::OnReceiverLoadData(){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	CString szFilter;
	szFilter.Format(_T(" and su_deptid='%s' "), pMF->m_szDeptID);

	return pMF->LoadUserList(&m_wndReceiver, m_szReceiverKey, szFilter);
}

/*void CStorageMedicalCabinetDialog::OnReceiverAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageMedicalCabinetDialog::OnDescriptionChange(){
	
} */
/*void CStorageMedicalCabinetDialog::OnDescriptionSetfocus(){
	
} */
/*void CStorageMedicalCabinetDialog::OnDescriptionKillfocus(){
	
} */
int CStorageMedicalCabinetDialog::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CStorageMedicalCabinetDialog::OnOrderNoChange(){
	
} */
/*void CStorageMedicalCabinetDialog::OnOrderNoSetfocus(){
	
} */
/*void CStorageMedicalCabinetDialog::OnOrderNoKillfocus(){
	
} */
int CStorageMedicalCabinetDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetDialog::OnOrderDateChange(){
	
} */
/*void CStorageMedicalCabinetDialog::OnOrderDateSetfocus(){
	
} */
/*void CStorageMedicalCabinetDialog::OnOrderDateKillfocus(){
	
} */
int CStorageMedicalCabinetDialog::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CStorageMedicalCabinetDialog::OnAccountingDateChange(){
	
} */
/*void CStorageMedicalCabinetDialog::OnAccountingDateSetfocus(){
	
} */
/*void CStorageMedicalCabinetDialog::OnAccountingDateKillfocus(){
	
} */
int CStorageMedicalCabinetDialog::OnAccountingDateCheckValue(){
	return 0;
} 
void CStorageMedicalCabinetDialog::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageMedicalCabinetDialog::OnTransactionTypeSelendok(){
	 
}
/*void CStorageMedicalCabinetDialog::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageMedicalCabinetDialog::OnTransactionTypeKillfocus(){
	
}*/
long CStorageMedicalCabinetDialog::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id in('CSO','CRO') "));

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
/*void CStorageMedicalCabinetDialog::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
 
/*void CStorageMedicalCabinetDialog::OnTotalLineChange(){
	
} */
/*void CStorageMedicalCabinetDialog::OnTotalLineSetfocus(){
	
} */
/*void CStorageMedicalCabinetDialog::OnTotalLineKillfocus(){
	
} */
int CStorageMedicalCabinetDialog::OnTotalLineCheckValue(){
	return 0;
} 
/*void CStorageMedicalCabinetDialog::OnTotalAmountChange(){
	
} */
/*void CStorageMedicalCabinetDialog::OnTotalAmountSetfocus(){
	
} */
/*void CStorageMedicalCabinetDialog::OnTotalAmountKillfocus(){
	
} */
int CStorageMedicalCabinetDialog::OnTotalAmountCheckValue(){
	return 0;
}
 
void CStorageMedicalCabinetDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageMedicalCabinetDialog();
}
 
void CStorageMedicalCabinetDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageMedicalCabinetDialog();

}
 
void CStorageMedicalCabinetDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageMedicalCabinetDialog();
}
 
void CStorageMedicalCabinetDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageMedicalCabinetDialog();
}
 
void CStorageMedicalCabinetDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() != m_szOrgID)
	{
		CString szSQL;

		szSQL.Format(_T("SELECT count(*) FROM m_transactionline_ref WHERE mtlr_transaction_id=%ld "), m_nID);
			CRecord rs(&pMF->m_db);
			rs.ExecSQL(szSQL);

			if(rs.GetIntValue() > 0 )
			{
				ShowMessageBox(_T("Phi\x1EBFu \x111\xE3 \x63\xF3 thu\x1ED1\x63,v\x1EADt t\x1B0 \x111\x1B0\x1EE3\x63 th\x61y th\x1EBF. Kh\xF4ng \x63ho ph\xE9p h\x1EE7y phi\x1EBFu"));
				return;
			}

			szSQL.Format(_T("SELECT count(*) FROM m_transaction_debit WHERE mtd_transaction_id=%ld "), m_nID);
			rs.ExecSQL(szSQL);

			if(rs.GetIntValue() > 0 )
			{
				ShowMessageBox(_T("Ghi n\x1EE3 kh\xF4ng th\x1EC3 h\x1EE7y \x111\x1B0\x1EE3\x63"));
				return;
			}



		int ret = ShowMessageBox(_T("Do you want to cancel order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
		if(ret == IDNO)
			return;


		szSQL.Format(_T("UPDATE m_transaction SET mt_status='O' WHERE mt_transaction_id=%ld and mt_status='S' "), m_nID);
		ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			m_bRefresh = true;
			CGuiDialog::OnCancel();
		}
	}
	else
		OnDiscardStorageMedicalCabinetDialog();
}
 
void CStorageMedicalCabinetDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("04.05")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return;
	}

	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	CString tmpStr;
	TranslateString(_T("Print Export Order"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	TranslateString(_T("Print Cabinet Sheet"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	
	m_wndPrint.GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN, rect.right, rect.top, this);

	CPrintForms printer;
	switch(nPos){
	case 1:
		if(pMF->GetModuleID() == _T("PM"))
			printer.PM_PrintExportCabinetSheet(m_nID);
		else
			printer.PrintStorageExportOrder(m_nID);
		break;
	case 2:
		printer.PM_PrintCabinetSheet(m_nID);
		break;
	};	

}
 
void CStorageMedicalCabinetDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("04.04")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	CString szSQL;
	CRecord rs(&pMF->m_db);
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

	szSQL.Format(_T("SELECT count(*) FROM m_transactionline ") \
		_T(" WHERE mtl_transaction_id=%ld and mtl_qtydelivery=0 and mtl_status = 'Y'"),
		m_nID);

	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i m\x1EE5\x63 thu\x1ED1\x63,v\x1EADt t\x1B0 kh\xF4ng \x111\x1EE7 s\x1ED1 l\x1B0\x1EE3ng y\xEAu \x63\x1EA7u.\r\nB\x1EA1n ph\x1EA3i \x78\xF3\x61 ho\x1EB7\x63 th\x61y th\x1EBF thu\x1ED1\x63, v\x1EADt t\x1B0"));
		return;
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
void CStorageMedicalCabinetDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CStorageMedicalCabinetDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	if (m_bDebtResolve)
	{
		CWardPatientMedicalDebtDialog dlg(this, m_nID);
		if (dlg.DoModal() == IDOK)
		{
			m_wndLines.OnListLoadData();
		}
	}
	else
	{
		m_wndLines.m_nOrderID = m_nID;
		m_wndLines.OnListAddItem();
	}

} 
void CStorageMedicalCabinetDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CStorageMedicalCabinetDialog::OnAddStorageMedicalCabinetDialog(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("04.01")))
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

int CStorageMedicalCabinetDialog::OnEditStorageMedicalCabinetDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("04.02")))
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

int CStorageMedicalCabinetDialog::OnDeleteStorageMedicalCabinetDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("04.03")))
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
		m_bRefresh = true;
 		SetMode(VM_NONE); 
 		OnDiscardStorageMedicalCabinetDialog(); 
 	}
	return 0;

}

int CStorageMedicalCabinetDialog::OnSaveStorageMedicalCabinetDialog(){
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
 		szWhere.Format(_T(" WHERE mt_transaction_id=%ld and mt_status in('O','S', 'A','I') "), m_nID); 
		m_szStatus = GetOrderStatus();
		if(m_szStatus == _T("A"))
		{
			 		szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_deliverydate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id,mt_department_id,mt_storage_to_id, mt_department_to_id")); 
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
		m_bRefresh = true;
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

int CStorageMedicalCabinetDialog::OnDiscardStorageMedicalCabinetDialog(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if(m_szOrgID != pMF->GetModuleID())
	{
		if(m_szStatus == _T("S"))
		{
			CString szSQL;
			szSQL.Format(_T("SELECT count(*) FROM m_transactionline WHERE mtl_transaction_id=%ld and mtl_client_id in('TT','REP') "), m_nID);
			CRecord rs(&pMF->m_db);
			rs.ExecSQL(szSQL);

			if(rs.GetIntValue() > 0 )
			{
				ShowMessageBox(_T("Phi\x1EBFu \x111\xE3 \x63\xF3 thu\x1ED1\x63,v\x1EADt t\x1B0 \x111\x1B0\x1EE3\x63 th\x61y th\x1EBF. Kh\xF4ng \x63ho ph\xE9p h\x1EE7y phi\x1EBFu"));
				return 0;
			}
			int ret = ShowMessageBox(_T("Do you want to cancel order?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
			if(ret == IDNO)
				return 0;
			szSQL.Format(_T("UPDATE m_transaction SET mt_status='O' WHERE mt_transaction_id=%ld "), m_nID);
			pMF->ExecSQL(szSQL);
			CGuiDialog::OnCancel();
		}
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
 
int CStorageMedicalCabinetDialog::OnStorageMedicalCabinetDialogListLoadData(){
	return 0;
}


CString CStorageMedicalCabinetDialog::GetOrderStatus(){
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

bool CStorageMedicalCabinetDialog::IsAllowEdit()
{
	if(GetMode() != VM_VIEW)
		return false;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if(m_szOrgID == pMF->GetModuleID())
	{
		if(m_szStatus != _T("O"))
			return false;
	}
	else
	{
		if(m_szStatus != _T("S"))
			return false;
	}
	return true;
}

void CStorageMedicalCabinetDialog::OnExportSelect()
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilePath, szFileName, szMsg, tmpStr, szSysDate = pMF->GetSysDate();
	CExcel xls;
	int nIdx = 1, nRow = 0;
	double nDelivery = 0, nAmount = 0;
	CGuiListCtrl* pList = &(m_wndLines.m_wndList);
	szFileName = _T("Mau_bstt_phieu_xuat_kho");
	szFilePath.Format(_T("Exports\\Template\\%s.xls"), szFileName);
	if (!xls.Load(szFilePath))
	{
		szMsg.Format(_T("Thiếu file %s"), szFilePath);
		ShowMessageBox(szMsg);
		return;
	}
	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->GetDepartmentName(pMF->m_szDeptID), FMT_TEXT | FMT_CENTER);
	tmpStr.Format(_T("Ngày %s tháng %s năm %s"), szSysDate.Mid(8,2), szSysDate.Mid(5,2), szSysDate.Left(4));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER);
	xls.SetCellText(0, 5, _T("Số phiếu: ") + m_szOrderNo, FMT_TEXT);
	tmpStr.Format(_T("%s/%s/%s")
		, m_szApprovedDate.Mid(8,2), m_szApprovedDate.Mid(5,2), m_szApprovedDate.Left(4));
	xls.SetCellText(2, 5, _T("Ngày xuất: ") + tmpStr, FMT_TEXT);
	xls.SetCellText(0, 6, _T("Kho xuất: ") + m_wndFromStorage.GetCurrent(1), FMT_TEXT);
	xls.SetCellText(2, 6, _T("Người giao hàng: ") + m_wndDeliverer.GetCurrent(1), FMT_TEXT);
	xls.SetCellText(0, 7, _T("Kho nhập: ") + m_wndToStorage.GetCurrent(1), FMT_TEXT);
	xls.SetCellText(2, 7, _T("Người nhận hàng: ") + m_wndReceiver.GetCurrent(1), FMT_TEXT);
	xls.SetCellText(0, 8, _T("Số chứng từ: "), FMT_TEXT);
	xls.SetCellText(0, 9, _T("Ghi chú: ") + m_szDescription, FMT_TEXT);
	nRow = 12;
	for (int i = 0 ; i < pList->GetItemCount(); i++)
	{
		nDelivery = str2float(pList->GetItemText(i, 8));
		if (nDelivery <= 0)
		{
			continue;
		}
		nAmount += str2double(pList->GetItemText(i, 9));
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, pList->GetItemText(i, 2), FMT_TEXT);
		xls.SetCellText(2, nRow, pList->GetItemText(i, 3), FMT_TEXT);
		xls.SetCellText(3, nRow, pList->GetItemText(i, 7), FMT_NUMBER1);
		xls.SetCellText(4, nRow, pList->GetItemText(i, 8), FMT_NUMBER1);
		xls.SetCellText(5, nRow, pList->GetItemText(i, 6), FMT_NUMBER1);
		xls.SetCellText(6, nRow, pList->GetItemText(i, 9), FMT_NUMBER1);
		xls.SetCellText(7, nRow, pList->GetItemText(i, 4), FMT_DATE);
		nRow++;	
	}
	tmpStr.Format(_T("Cộng khoản: %s"), int2str(nIdx - 1));
	xls.SetCellText(1, nRow++, tmpStr, FMT_TEXT);
	tmpStr.Format(_T("Tổng tiền: %.3f"), nAmount);
	xls.SetCellText(1, nRow++, tmpStr, FMT_TEXT);
	MoneyToString(double2str(nAmount), tmpStr);
	xls.SetCellText(1, nRow++, _T("Tổng tiền bằng chữ: ") + tmpStr, FMT_TEXT);
	szFileName = _T("bstt_phieu_xuat_kho");
	szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szFilePath);
}