#include "FAMTransactionOrderDialog.h"
#include "ReportDocument.h"
#include "MainFrm.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrderDialog* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrderDialog* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnToStorageAddNew();
}*/
/*static void _OnDeliveredByChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnDeliveredByChange();
} */
/*static void _OnDeliveredBySetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnDeliveredBySetfocus();} */ 
/*static void _OnDeliveredByKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnDeliveredByKillfocus();
} */
static int _OnDeliveredByCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnDeliveredByCheckValue();
} 
/*static void _OnReceivedByChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnReceivedByChange();
} */
/*static void _OnReceivedBySetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnReceivedBySetfocus();} */ 
/*static void _OnReceivedByKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnReceivedByKillfocus();
} */
static int _OnReceivedByCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnReceivedByCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderDialog *)pWnd)->OnStatusKillfocus();
}*/
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderDialog *)pWnd)->OnStatusCheckValue();
}
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMTransactionOrderDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderDialog *pVw = (CFAMTransactionOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnAddFAMTransactionOrderDialog();
} 
static int _OnEditFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnEditFAMTransactionOrderDialog();
} 
static int _OnDeleteFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnDeleteFAMTransactionOrderDialog();
} 
static int _OnSaveFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnSaveFAMTransactionOrderDialog();
} 
static int _OnCancelFAMTransactionOrderDialogFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderDialog*)pWnd)->OnCancelFAMTransactionOrderDialog();
} 
CFAMTransactionOrderDialog::CFAMTransactionOrderDialog(CWnd *pParent, int nMode, CString szDocType):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_bRefresh = false;
	m_szDocType = szDocType;
_tprintf(_T("\r\n%s"), m_szDocType);
	CGuiDialog::SetMode(nMode);
}
CFAMTransactionOrderDialog::~CFAMTransactionOrderDialog(){
}
void CFAMTransactionOrderDialog::OnCreateComponents(){
	
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 795, 150);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 120, 55);
	m_wndOrderNo.Create(this,125, 30, 395, 55); 
	m_wndOrderDateLabel.Create(this, _T("ORDER_DATE"), 400, 30, 510, 55);
	m_wndOrderDate.Create(this,515, 30, 785, 55); 
	m_wndFromStorageLabel.Create(this, _T("ITS_EXP_STORAGE"), 10, 60, 120, 85);
	m_wndFromStorage.Create(this,125, 60, 395, 85); 
	m_wndToStorageLabel.Create(this, _T("ITS_IMP_STORAGE"), 400, 60, 510, 85);
	m_wndToStorage.Create(this,515, 60, 785, 85); 
	m_wndDeliveredByLabel.Create(this, _T("Delivered By"), 10, 90, 120, 115);
	m_wndDeliveredBy.Create(this,125, 90, 395, 115); 
	m_wndReceivedByLabel.Create(this, _T("Received By"), 400, 90, 510, 115);
	m_wndReceivedBy.Create(this,515, 90, 785, 115); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 120, 120, 142);
	m_wndNote.Create(this,125, 120, 785, 145);

	m_wndAdd.Create(this, _T("Add"), 210, 575, 290, 600);
	m_wndEdit.Create(this, _T("Edit"), 295, 575, 375, 600);
	m_wndSave.Create(this, _T("Save"), 380, 575, 460, 600);
	m_wndCancel.Create(this, _T("Cancel"), 465, 575, 545, 600);
	m_wndPrint.Create(this, _T("Print"), 550, 575, 630, 600);
	m_wndImport.Create(this, _T("&Import"), 635, 575, 715, 600);
	m_wndClose.Create(this, _T("Close"), 720, 575, 800, 600);

	m_wndLineTab.Create(this,5, 155, 795, 570); 

	m_wndROL.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndROL);
	m_wndROL.OnInitDialog();
	m_wndROL.SetMode(VM_NONE);

}
void CFAMTransactionOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetReadOnly(TRUE);
	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndToStorage.SetCheckValue(true);
	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(35);
	m_wndNote.SetLimitText(1024);
	m_wndDeliveredBy.SetLimitText(250);
	m_wndReceivedBy.SetLimitText(250);
	
	
	m_wndToStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndToStorage.InsertColumn(2, _T(""), CFMT_TEXT, 0);

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndFromStorage.InsertColumn(2, _T(""), CFMT_TEXT, 0);


	m_transactionTbl.SetTableName(_T("storage_transaction"));
	m_transactionTbl.AddField(_T("st_org_id"), dfText, 3);
	m_transactionTbl.AddField(_T("st_orderno"), dfText, 15);
	m_transactionTbl.AddField(_T("st_orderdate"), dfDateTime);
	m_transactionTbl.AddField(_T("st_imp_storage_id"), dfText, 20);
	m_transactionTbl.AddField(_T("st_imp_department_id"), dfText, 7);
	m_transactionTbl.AddField(_T("st_exp_storage_id"), dfText, 20);
	m_transactionTbl.AddField(_T("st_exp_department_id"), dfText, 7);
	m_transactionTbl.AddField(_T("st_invoiceno"), dfText, 15);
	m_transactionTbl.AddField(_T("st_invoicedate"), dfDate);
	m_transactionTbl.AddField(_T("st_note"), dfText, 254);
	m_transactionTbl.AddField(_T("st_processing"), dfText, 1);
	m_transactionTbl.AddField(_T("st_deliveredby"), dfText, 250);
	m_transactionTbl.AddField(_T("st_receivedby"), dfText, 250);
	
}
void CFAMTransactionOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
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
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndLineTab.SetEvent(WE_SELCHANGE, _OnLineTabSelectChangeFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnImportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	
	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
	{
		GetDataToScreen();
	}
_tprintf(_T("\r\n%d"), nMode);
	SetMode(nMode);
	
}
void CFAMTransactionOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToStorage.GetDlgCtrlID(), m_szToStorageKey);
	DDX_Text(pDX, m_wndDeliveredBy.GetDlgCtrlID(), m_szDeliveredBy);
	DDX_Text(pDX, m_wndReceivedBy.GetDlgCtrlID(), m_szReceivedBy);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMTransactionOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT st_orderno, st_orderdate, st_createdby, st_imp_storage_id, st_deliveredby, st_receivedby,") \
		_T(" st_exp_storage_id, st_invoiceno, st_invoicedate, st_status, st_note ") \
		_T(" FROM storage_transaction WHERE st_transaction_id = '%s'"), m_szTransactionID);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("st_orderno"), m_szOrderNo);
		rs.GetValue(_T("st_orderdate"), m_szOrderDate);
		rs.GetValue(_T("st_imp_storage_id"), m_szToStorageKey);
		rs.GetValue(_T("st_exp_storage_id"), m_szFromStorageKey);
		rs.GetValue(_T("st_deliveredby"), m_szDeliveredBy);
		rs.GetValue(_T("st_receivedby"), m_szReceivedBy);
		rs.GetValue(_T("st_status"), m_szStatus);
		rs.GetValue(_T("st_note"), m_szNote);
		UpdateData(FALSE);
		m_wndROL.m_szTransactionID = m_szTransactionID;
		m_wndROL.OnItemListLoadData();
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CFAMTransactionOrderDialog::GetScreenToData(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_transactionTbl.SetValue(_T("st_org_id"), pMF->GetModuleID());
	m_transactionTbl.SetValue(_T("st_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("st_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("st_imp_storage_id"), m_szToStorageKey);
	m_transactionTbl.SetValue(_T("st_exp_storage_id"), m_szFromStorageKey);
	m_transactionTbl.SetValue(_T("st_deliveredby"), m_szDeliveredBy);
	m_transactionTbl.SetValue(_T("st_receivedby"), m_szReceivedBy);
	m_transactionTbl.SetValue(_T("st_note"), m_szNote);
	m_transactionTbl.SetValue(_T("st_processing"), _T("S"));

}
void CFAMTransactionOrderDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szFromStorageKey.Empty();
	m_szToStorageKey.Empty();
	m_szNote.Empty();

}
int CFAMTransactionOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			
			m_szOrderDate = pMF->GetSysDate();
			CreateNewOrder();

			m_wndROL.m_szOrderNo = m_szOrderNo;
			m_wndROL.Refresh();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			m_wndFromStorage.EnableWindow(FALSE);
			m_wndToStorage.EnableWindow(FALSE);
			m_wndROL.SetMode(VM_EDIT);
			m_wndROL.m_szTransactionID = m_szTransactionID;
			m_wndROL.m_szOrderNo = m_szOrderNo;
 			break;
 		case VM_VIEW: 
			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, 2, 3, -1);
			if(m_szStatus == _T("P"))
				m_wndImport.EnableWindow(FALSE);
			m_wndROL.m_szTransactionID = m_szTransactionID;
			m_wndROL.m_szOrderNo = m_szOrderNo;
			m_wndEdit.EnableWindow(TRUE);
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
/*void CFAMTransactionOrderDialog::OnOrderNoChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnOrderNoKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderDialog::OnOrderDateChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnOrderDateKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CFAMTransactionOrderDialog::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrderDialog::OnFromStorageSelendok(){
	UpdateData(TRUE);

}
/*void CFAMTransactionOrderDialog::OnFromStorageSetfocus(){
	
}*/
/*void CFAMTransactionOrderDialog::OnFromStorageKillfocus(){
	
}*/
long CFAMTransactionOrderDialog::OnFromStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();

	if(!m_szToStorageKey.IsEmpty())
	{
		szFilter.AppendFormat(_T(" and sl_storage_id <> '%s' "), m_szToStorageKey);
	}
	if(m_szDocType == _T("EAO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') = 'GL' "));
	}
	else if(m_szDocType == _T("IRO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') <> 'GL' "));
	}


	_tprintf(_T("\r\n%s: %s"), m_szDocType, szFilter);


	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szFilter);
/*
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromStorage.IsSearchKey() && !m_szFromStorageKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), m_szFromStorageKey);
	}
	m_wndFromStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name ") \
		_T(" FROM storage_location ") \
		_T(" WHERE sl_org_id = '%s'  %s ORDER BY sl_storage_id "), 
		pMF->GetModuleID(), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
}
/*void CFAMTransactionOrderDialog::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMTransactionOrderDialog::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrderDialog::OnToStorageSelendok(){
	 
}
/*void CFAMTransactionOrderDialog::OnToStorageSetfocus(){
	
}*/
/*void CFAMTransactionOrderDialog::OnToStorageKillfocus(){
	
}*/
long CFAMTransactionOrderDialog::OnToStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	CString szFStorageType;

	szFilter.Empty();
	szFStorageType = m_wndFromStorage.GetCurrent(2);

	if(!m_szFromStorageKey.IsEmpty())
	{
		szFilter.Format(_T(" and sl_storage_id <> '%s' "), m_szFromStorageKey);
	}

	if(m_szDocType == _T("IRO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') = 'GL' "));
	}
	if(m_szDocType == _T("EAO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') <> 'GL' "));
	}
	if(m_szDocType == _T("EMO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') = '%s' "), szFStorageType);
	}

	return pMF->LoadStorageList(&m_wndToStorage, m_szToStorageKey, szFilter);
	/*
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndToStorage.IsSearchKey() && !m_szToStorageKey.IsEmpty())
	{
		szWhere.Format(_T(" AND fase_id='%s' "), m_szToStorageKey);
	}
	m_wndToStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fase_id AS id, fase_desc AS description ") \
		_T(" FROM fam_ToStorages ") \
		_T(" WHERE fam_org_id='%s' %s ORDER BY fase_id"), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndToStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
	*/
}

/*void CFAMTransactionOrderDialog::OnToStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceNoChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceNoKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderDialog::OnInvoiceDateChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceDateSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnInvoiceDateKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderDialog::OnNoteChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnNoteSetfocus(){
	
} */
/*void CFAMTransactionOrderDialog::OnNoteKillfocus(){
	
} */
int CFAMTransactionOrderDialog::OnNoteCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderDialog::OnStatusChange(){
	
} */
/*void CFAMTransactionOrderDialog::OnStatusSetfocus(){
	
}*/
/*void CFAMTransactionOrderDialog::OnStatusKillfocus(){
	
}*/
int CFAMTransactionOrderDialog::OnStatusCheckValue(){
	return 0;
}
void CFAMTransactionOrderDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMTransactionOrderDialog();
} 
void CFAMTransactionOrderDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("P"))
	{
		OnEditFAMTransactionOrderDialog();
	}
	else
		MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
} 
void CFAMTransactionOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMTransactionOrderDialog();
} 
void CFAMTransactionOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMTransactionOrderDialog();
} 
void CFAMTransactionOrderDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szDocType == _T("IPO") || m_szDocType == _T("IRO"))
	{
		PrintOrder();
	}else if(m_szDocType == _T("EAO"))
	{
		PrintAllocateToDept();
	}else if(m_szDocType == _T("EMO"))
	{
		PrintTransfer();
	}
} 
void CFAMTransactionOrderDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szSQL2;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("STORAGE_TRANSACTION_POST('%s', '%s')"), m_szTransactionID, pMF->GetCurrentUser());
		pMF->ExecDML(szSQL);
		m_szStatus.Format(_T("P"));
		if(m_szDocType != _T("IRO"))
		{
			szSQL2.Format(_T("STORAGE_UPDATE_ITEMUSES('%s')"), m_szTransactionID);
			pMF->ExecDML(szSQL2);
		}
		SetMode(VM_VIEW);
		m_wndROL.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMTransactionOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("STORAGE_TRANSACTION_DISCARD('%s')"), m_szTransactionID);
	pMF->ExecDML(szSQL);
	pMF->m_wndReceiptOrder.OnOrderListLoadData();
	OnCancel();
} 

int CFAMTransactionOrderDialog::OnAddFAMTransactionOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	m_wndROL.SetMode(VM_ADD);
	return 0;
}
int CFAMTransactionOrderDialog::OnEditFAMTransactionOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMTransactionOrderDialog::OnDeleteFAMTransactionOrderDialog(){
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
 		OnCancelFAMTransactionOrderDialog();
 	}
	return 0;
}
int CFAMTransactionOrderDialog::OnSaveFAMTransactionOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szExceptions;
	
	szExceptions.Empty();

	if(m_szStatus != _T("O"))
		szExceptions.Format(_T(" st_org_id,st_orderno,st_orderdate,st_status,st_transaction_id,st_imp_storage_id,st_exp_storage_id"));

	szSQL.Format(_T("%s"), m_transactionTbl.GetUpdateSQL(szExceptions));
	szSQL.AppendFormat(_T(" WHERE st_transaction_id='%s' "), m_szTransactionID);

 _tprintf(_T("\r\n%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		m_bRefresh = true;
		GetDataToScreen();
		SetMode(VM_VIEW);
		return 1;
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMTransactionOrderDialog::OnCancelFAMTransactionOrderDialog(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
		m_wndROL.SetMode(VM_NONE);
 	} 
 	else 
 	{
		m_wndROL.Refresh();
		m_wndROL.SetDefaultValues();
		SetMode(VM_NONE);
 	}
 	return 0;
} 
int CFAMTransactionOrderDialog::OnFAMTransactionOrderDialogListLoadData(){
	return 0;
}


void CFAMTransactionOrderDialog::CreateNewOrder()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL, szRetCode;
	CString szDocType = _T("EMO");
	UpdateData(true);

	szSQL.Format(_T("STORAGE_TRANSACTION_CREATE('ITS', '', '%s', '%s')"), pMF->GetCurrentUser(), m_szDocType);
	szRetCode = pMF->ExecDML(szSQL);
	if(szRetCode == _T("ERROR") || szRetCode == _T("-2000"))
	{
		ShowMessageBox(szRetCode);
		return;
	}
	m_szTransactionID = szRetCode;
	GetDataToScreen();

}

void CFAMTransactionOrderDialog::PrintOrder()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, szSQL2, tmpStr, szTemp, szDate, szOrderID, szToStorage, szInvoiceNo;
	long double nGroupTotal;
	long double nTotal;
	double nCost, nUPrice;
	int nIndex = 1;

	szSQL2.Format(_T("SELECT st_orderid, (select fase_desc from fam_sources where fase_id = st_source) as fsource, st_invoiceno ") \
		_T(" FROM storage_transaction WHERE st_doctype = 'IPO' and st_transaction_id = '%s'"), m_szTransactionID);
	rs1.ExecSQL(szSQL2);
	szOrderID = rs1.GetValue(_T("st_orderid"));
	szToStorage =  rs1.GetValue(_T("fsource"));
	szInvoiceNo = rs1.GetValue(_T("st_invoiceno"));

	szSQL.Format(_T("SELECT stl_item_id, si_name, stl_uom_id,  stl_unitprice, stl_qtyorder, stl_amount, st_orderid, si_model, stl_seri ") \
				_T("FROM      storage_transactionline ") \
				_T("LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T("LEFT JOIN storage_item ON( si_item_id = stl_item_id ) ") \
				_T("WHERE     st_doctype = '%s' and st_transaction_id = '%s'"), m_szDocType ,m_szTransactionID);
	_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/ITS/ITS_PHIEUNHAPKHO.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("PH\xD2NG KHQS"));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("OrderNo"), m_szOrderNo);
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndFromStorage.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("ToStorage"), szToStorage);
	rpt.GetReportHeader()->SetValue(_T("ReferenceNo"),szOrderID);
	rpt.GetReportHeader()->SetValue(_T("DeliveredBy"),m_szDeliveredBy);
	rpt.GetReportHeader()->SetValue(_T("ReceivedBy"),m_szReceivedBy);
	nGroupTotal = 0;
	nTotal = 0;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("si_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("si_model"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("stl_seri"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("stl_uom_id"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("expdate"), tmpStr);
		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("6"), szTemp);

		rs.GetValue(_T("stl_qtyorder"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("stl_unitprice"), nUPrice);
		FormatCurrency(nUPrice, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("stl_amount"), nCost);
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		nGroupTotal += nCost;

		rs.MoveNext();
	}
	if(nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("s12"), tmpStr);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if(nTotal > 0)
	{
		//FormatCurrency(nTotal+(nTotal*0.1), tmpStr);
		FormatCurrency(nTotal, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	}

	CString szMoney;
	tmpStr.Replace(_T("."), _T(""));
	MoneyToString(tmpStr, szMoney);
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), szMoney + _T(" \x111\x1ED3ng"));
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), int2str(nIndex-1));
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
}

void CFAMTransactionOrderDialog::PrintAllocateToDept()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, szSQL2,tmpStr, szTemp, szDate, szOrderID;
	long double nGroupTotal;
	long double nTotal;
	double nCost, nUPrice;
	int nIndex = 1;

	/*szSQL2.Format(_T("SELECT st_orderid FROM storage_transaction WHERE st_doctype = 'EAO' and st_transaction_id = '%s'"), m_szTransactionID);
	rs1.ExecSQL(szSQL2);
	szOrderID = rs1.GetValue(_T("st_orderid"));*/
	szSQL2.Format(_T(" SELECT su_name, su_deptid, 'chucvu' as chucvu ") \
			_T(" FROM storage_transaction ") \
			_T(" LEFT JOIN sys_user ON(su_userid = st_createdby) ") \
			_T(" WHERE st_transaction_id = '%s'"), m_szTransactionID);
	rs1.ExecSQL(szSQL2);

	szSQL.Format(_T("SELECT stl_item_id, si_name, STORAGE_GET_UOMNAME(stl_uom_id) AS uomid, sil_mfgid, stl_qtyorder, stl_amount, ") \
				_T(" trim(si_model||'/'||si_serial) as modelseri ") \
				_T("FROM      storage_transactionline ") \
				_T("LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T("LEFT JOIN storage_item ON( si_item_id = stl_item_id ) ") \
				_T("LEFT JOIN storage_item_list ON( sil_item_list_id = si_item_list_id ) ") \
				_T("WHERE     st_doctype = 'EAO' and st_transaction_id = '%s'"), m_szTransactionID);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/ITS/ITS_PHIEUXUATKHO.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("PH\xD2NG KHO\x41 H\x1ECC\x43 \x43\xD4NG NGH\x1EC6"));
	CString szOrderDate;
	szOrderDate.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), m_szOrderDate.Mid(8, 2),m_szOrderDate.Mid(5,2),m_szOrderDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), szOrderDate);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szOrderNo);
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndFromStorage.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("ToDept"), m_szToStorageKey);
	rpt.GetReportHeader()->SetValue(_T("ReferenceNo"), szOrderID);
	//rpt.GetReportHeader()->SetValue(_T("DeliverBy"), rs1.GetValue(_T("su_name")));
	rpt.GetReportHeader()->SetValue(_T("Position"), rs1.GetValue(_T("chucvu")));
	rpt.GetReportHeader()->SetValue(_T("Dept"), rs1.GetValue(_T("su_deptid")));
	rpt.GetReportHeader()->SetValue(_T("DeliveredBy"),m_szDeliveredBy);
	rpt.GetReportHeader()->SetValue(_T("ReceivedBy"),m_szReceivedBy);


	nGroupTotal = 0;
	nTotal = 0;

	while(!rs.IsEOF())
	{
		/*if(nGroupTotal > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			FormatCurrency(nGroupTotal, tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			nTotal += nGroupTotal;
			nGroupTotal = 0;
		}*/
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("si_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("uomid"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("stl_qtyorder"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("sil_mfgid"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("modelseri"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("usedtarget"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.MoveNext();
	}
	/*if(nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("tongso"), _T("T\x1ED5ng \x63\x1ED9ng:"));
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("s8"), tmpStr);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if(nTotal > 0)
	{
		FormatCurrency(nTotal, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	}

	CString szMoney;
	tmpStr.Replace(_T("."), _T(""));
	MoneyToString(tmpStr, szMoney);
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), szMoney + _T(" \x111\x1ED3ng"));

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);*/

	EndWaitCursor();
	rpt.PrintPreview();
}

void CFAMTransactionOrderDialog::PrintTransfer()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate;
	int nIndex = 1;

	szSQL.Format(_T("SELECT stl_item_id, si_name, stl_uom_id,  stl_unitprice, stl_qtyorder, stl_amount, si_model, si_serial ") \
				_T("FROM      storage_transactionline ") \
				_T("LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T("LEFT JOIN storage_item ON( si_item_id = stl_item_id ) ") \
				_T("WHERE     st_doctype = 'EMO' and st_transaction_id = '%s'"), m_szTransactionID);
	
	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/ITS/ITS_PHIEUDIEUCHUYEN.RPT")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("PH\xD2NG KHO\x41 H\x1ECC\x43 QU\xC2N S\x1EF0"));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szOrderNo);
	rpt.GetReportHeader()->SetValue(_T("FromDept"), m_szFromStorageKey);
	rpt.GetReportHeader()->SetValue(_T("ToDept"), m_szToStorageKey);
	rpt.GetReportHeader()->SetValue(_T("Reason"), m_szNote);
	rpt.GetReportHeader()->SetValue(_T("DeliveredBy"),m_szDeliveredBy);
	rpt.GetReportHeader()->SetValue(_T("ReceivedBy"),m_szReceivedBy);

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("stl_item_id"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("si_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("si_model"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("si_serial"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("stl_qtyorder"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
}