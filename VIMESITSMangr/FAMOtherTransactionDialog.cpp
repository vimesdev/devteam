#include "FAMOtherTransactionDialog.h"
#include "ReportDocument.h"
#include "MainFrm.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMOtherTransactionDialog* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionDialog *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMOtherTransactionDialog* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionDialog *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnToStorageAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMOtherTransactionDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CCCFAMOtherTransactionDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMOtherTransactionDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMOtherTransactionDialog *pVw = (CFAMOtherTransactionDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMOtherTransactionDialog *pVw = (CFAMOtherTransactionDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMOtherTransactionDialog *pVw = (CFAMOtherTransactionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMOtherTransactionDialog *pVw = (CFAMOtherTransactionDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMOtherTransactionDialog *pVw = (CFAMOtherTransactionDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMOtherTransactionDialog *pVw = (CFAMOtherTransactionDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMOtherTransactionDialog *pVw = (CFAMOtherTransactionDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMOtherTransactionDialogFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionDialog*)pWnd)->OnAddFAMOtherTransactionDialog();
} 
static int _OnEditFAMOtherTransactionDialogFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionDialog*)pWnd)->OnEditFAMOtherTransactionDialog();
} 
static int _OnDeleteFAMOtherTransactionDialogFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionDialog*)pWnd)->OnDeleteFAMOtherTransactionDialog();
} 
static int _OnSaveFAMOtherTransactionDialogFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionDialog*)pWnd)->OnSaveFAMOtherTransactionDialog();
} 
static int _OnCancelFAMOtherTransactionDialogFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionDialog*)pWnd)->OnCancelFAMOtherTransactionDialog();
} 
CFAMOtherTransactionDialog::CFAMOtherTransactionDialog(CWnd *pParent, int nMode, CString szDocType):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_bRefresh = false;
	m_szDocType = szDocType;
_tprintf(_T("\r\n%s"), m_szDocType);
	CGuiDialog::SetMode(nMode);
}
CFAMOtherTransactionDialog::~CFAMOtherTransactionDialog(){
}
void CFAMOtherTransactionDialog::OnCreateComponents(){
	if(m_szDocType == _T("EOO"))
	{
		m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 795, 90);
		m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 120, 55);
		m_wndOrderNo.Create(this,125, 30, 275, 55); 
		m_wndOrderDateLabel.Create(this, _T("ORDER_DATE"), 280, 30, 390, 55);
		m_wndOrderDate.Create(this,395, 30, 525, 55); 
		//m_wndFromStorageLabel.Create(this, _T("ITS_EXP_STORAGE"), 530, 30, 600, 55);
		//m_wndFromStorage.Create(this,605, 30, 790, 55); 
		m_wndTypeLabel.Create(this, _T("Type"), 530, 30, 600, 55);
		m_wndType.Create(this,605, 30, 790, 55); 
		m_wndToStorageLabel.Create(this, _T("ITS_IMP_STORAGE"), 0, 0, 0, 0);
		m_wndToStorage.Create(this,0, 0, 0, 0); 
		//m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 120, 85);
		//m_wndType.Create(this,125, 60, 275, 85); 
		m_wndFromStorageLabel.Create(this, _T("ITS_EXP_STORAGE"), 10, 60, 120, 85);
		m_wndFromStorage.Create(this,125, 60, 275, 85); 
		m_wndNoteLabel.Create(this, _T("Note"), 280, 60, 390, 85);
		m_wndNote.Create(this,395, 60, 790, 85);  
	}else
	{
		m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 795, 90);
		m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 120, 55);
		m_wndOrderNo.Create(this,125, 30, 275, 55); 
		m_wndOrderDateLabel.Create(this, _T("ORDER_DATE"), 280, 30, 390, 55);
		m_wndOrderDate.Create(this,395, 30, 525, 55); 
		m_wndFromStorageLabel.Create(this, _T("ITS_EXP_STORAGE"), 0, 0, 0, 0);
		m_wndFromStorage.Create(this,0, 0, 0, 0); 
		m_wndToStorageLabel.Create(this, _T("ITS_IMP_STORAGE"), 530, 30, 600, 55);
		m_wndToStorage.Create(this,605, 30, 790, 55); 
		m_wndTypeLabel.Create(this, _T("Type"), 0, 0, 0, 0);
		m_wndType.Create(this,0, 0, 0, 0);
		m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 120, 85);
		m_wndNote.Create(this,125, 60, 790, 85); 
	}

	m_wndLineTab.Create(this,5, 95, 795, 570); 
	m_wndAdd.Create(this, _T("Add"), 210, 575, 290, 600);
	m_wndEdit.Create(this, _T("Edit"), 295, 575, 375, 600);
	m_wndSave.Create(this, _T("Save"), 380, 575, 460, 600);
	m_wndCancel.Create(this, _T("Cancel"), 465, 575, 545, 600);
	m_wndPrint.Create(this, _T("Print"), 550, 575, 630, 600);
	m_wndImport.Create(this, _T("&Import"), 635, 575, 715, 600);
	m_wndClose.Create(this, _T("Close"), 720, 575, 800, 600);

	//m_wndLineTab.Create(this,5, 125, 795, 570);
	m_wndROL.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndROL);
	m_wndROL.OnInitDialog();
	m_wndROL.SetMode(VM_NONE);
	m_wndROL.m_szDocType = m_szDocType;
}
void CFAMOtherTransactionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	if(m_szDocType == _T("EOO"))
	{
		m_wndFromStorage.SetCheckValue(true);
		m_wndFromStorage.LimitText(1024);
	}
	else
	{
		m_wndToStorage.SetCheckValue(true);
		m_wndToStorage.LimitText(1024);
	}
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	
	m_wndToStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndToStorage.InsertColumn(2, _T(""), CFMT_TEXT, 0);

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndFromStorage.InsertColumn(2, _T(""), CFMT_TEXT, 0);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

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
	m_transactionTbl.AddField(_T("st_type"), dfText, 5);
}
void CFAMOtherTransactionDialog::OnSetWindowEvents(){
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
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
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
void CFAMOtherTransactionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToStorage.GetDlgCtrlID(), m_szToStorageKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMOtherTransactionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	szSQL.Format(_T("SELECT st_orderno, st_orderdate, st_createdby, st_imp_storage_id, ") \
		_T(" st_exp_storage_id, st_invoiceno, st_invoicedate, st_status, st_note, st_type ") \
		_T(" FROM storage_transaction WHERE st_transaction_id = '%s' "), m_szTransactionID);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("st_orderno"), m_szOrderNo);
		rs.GetValue(_T("st_orderdate"), m_szOrderDate);
		rs.GetValue(_T("st_imp_storage_id"), m_szToStorageKey);
		rs.GetValue(_T("st_exp_storage_id"), m_szFromStorageKey);
		rs.GetValue(_T("st_status"), m_szStatus);
		rs.GetValue(_T("st_note"), m_szNote);
		rs.GetValue(_T("st_type"), m_szTypeKey);
		UpdateData(FALSE);
		m_wndROL.m_szTransactionID = m_szTransactionID;
		m_wndROL.OnItemListLoadData();
		m_wndROL.m_szToStorageID = m_szToStorageKey;
	}
	else
	{
		SetMode(VM_NONE);
	}

}
void CFAMOtherTransactionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_transactionTbl.SetValue(_T("st_org_id"), pMF->GetModuleID());
	m_transactionTbl.SetValue(_T("st_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("st_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("st_imp_storage_id"), m_szToStorageKey);
	m_transactionTbl.SetValue(_T("st_exp_storage_id"), m_szFromStorageKey);
	m_transactionTbl.SetValue(_T("st_note"), m_szNote);
	m_transactionTbl.SetValue(_T("st_processing"), _T("S"));
	m_transactionTbl.SetValue(_T("st_type"), m_szTypeKey);
}
void CFAMOtherTransactionDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szFromStorageKey.Empty();
	m_szTypeKey.Empty();
	m_szToStorageKey.Empty();
	m_szNote.Empty();

}
int CFAMOtherTransactionDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
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
/*void CFAMOtherTransactionDialog::OnOrderNoChange(){
	
} */
/*void CFAMOtherTransactionDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMOtherTransactionDialog::OnOrderNoKillfocus(){
	
} */
int CFAMOtherTransactionDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CFAMOtherTransactionDialog::OnOrderDateChange(){
	
} */
/*void CFAMOtherTransactionDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMOtherTransactionDialog::OnOrderDateKillfocus(){
	
} */
int CFAMOtherTransactionDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CFAMOtherTransactionDialog::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMOtherTransactionDialog::OnFromStorageSelendok(){
	 
}
/*void CFAMOtherTransactionDialog::OnFromStorageSetfocus(){
	
}*/
/*void CFAMOtherTransactionDialog::OnFromStorageKillfocus(){
	
}*/
long CFAMOtherTransactionDialog::OnFromStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();

	if(m_szDocType == _T("IOO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') = 'GL' "));
	}
	else if(m_szDocType == _T("EOO"))
	{
		szFilter.AppendFormat(_T(" "));
	}


	_tprintf(_T("\r\n%s: %s"), m_szDocType, szFilter);


	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szFilter);
}
/*void CFAMOtherTransactionDialog::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMOtherTransactionDialog::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMOtherTransactionDialog::OnToStorageSelendok(){
	 
}
/*void CFAMOtherTransactionDialog::OnToStorageSetfocus(){
	
}*/
/*void CFAMOtherTransactionDialog::OnToStorageKillfocus(){
	
}*/
long CFAMOtherTransactionDialog::OnToStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();

	if(m_szDocType == _T("IOO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') = 'GL' "));
	}
	if(m_szDocType == _T("EOO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') <> 'GL' "));
	}

	return pMF->LoadStorageList(&m_wndToStorage, m_szToStorageKey, szFilter);
}
/*void CFAMOtherTransactionDialog::OnToStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMOtherTransactionDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMOtherTransactionDialog::OnTypeSelendok(){
	 
}
/*void CFAMOtherTransactionDialog::OnTypeSetfocus(){
	
}*/
/*void CFAMOtherTransactionDialog::OnTypeKillfocus(){
	
}*/
long CFAMOtherTransactionDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'its_otherexport' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMOtherTransactionDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMOtherTransactionDialog::OnNoteChange(){
	
} */
/*void CFAMOtherTransactionDialog::OnNoteSetfocus(){
	
} */
/*void CFAMOtherTransactionDialog::OnNoteKillfocus(){
	
} */
int CFAMOtherTransactionDialog::OnNoteCheckValue(){
	return 0;
} 
void CFAMOtherTransactionDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMOtherTransactionDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMOtherTransactionDialog();
} 
void CFAMOtherTransactionDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("P"))
	{
		OnEditFAMOtherTransactionDialog();
	}
	else
		MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
} 
void CFAMOtherTransactionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMOtherTransactionDialog();
} 
void CFAMOtherTransactionDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMOtherTransactionDialog();
} 
void CFAMOtherTransactionDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szDocType == _T("IOO"))
		PrintOtherImport();
	else
		PrintOtherExport();
} 
void CFAMOtherTransactionDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("STORAGE_TRANSACTION_POST('%s', '%s')"), m_szTransactionID, pMF->GetCurrentUser());
		pMF->ExecDML(szSQL);
		m_szStatus.Format(_T("P"));
		SetMode(VM_VIEW);
		m_wndROL.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMOtherTransactionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("STORAGE_TRANSACTION_DISCARD('%s')"), m_szTransactionID);
	pMF->ExecDML(szSQL);
	OnCancel();
} 
int CFAMOtherTransactionDialog::OnAddFAMOtherTransactionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMOtherTransactionDialog::OnEditFAMOtherTransactionDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMOtherTransactionDialog::OnDeleteFAMOtherTransactionDialog(){
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
 		OnCancelFAMOtherTransactionDialog();
 	}
	return 0;
}
int CFAMOtherTransactionDialog::OnSaveFAMOtherTransactionDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szExceptions;
	
	szExceptions.Empty();

	if(m_szStatus != _T("O"))
		szExceptions.Format(_T("st_org_id,st_orderno,st_orderdate,st_status,st_transaction_id,st_imp_storage_id,st_exp_storage_id"));

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
int CFAMOtherTransactionDialog::OnCancelFAMOtherTransactionDialog(){
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
int CFAMOtherTransactionDialog::OnFAMOtherTransactionDialogListLoadData(){
	return 0;
}
void CFAMOtherTransactionDialog::CreateNewOrder()
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

void CFAMOtherTransactionDialog::PrintOtherExport()
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
				_T("WHERE     st_doctype = 'EOO' and st_transaction_id = '%s'"), m_szTransactionID);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/ITS/ITS_PHIEUXUATKHAC.RPT")))
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
	rpt.GetReportHeader()->SetValue(_T("Reason"), m_wndType.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("Position"), rs1.GetValue(_T("chucvu")));
	rpt.GetReportHeader()->SetValue(_T("Dept"), rs1.GetValue(_T("su_deptid")));

	nGroupTotal = 0;
	nTotal = 0;

	while(!rs.IsEOF())
	{
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
	EndWaitCursor();
	rpt.PrintPreview();
}

void CFAMOtherTransactionDialog::PrintOtherImport()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, szSQL2, tmpStr, szTemp, szDate, szOrderID, szSource, szInvoiceNo;
	long double nGroupTotal;
	long double nTotal;
	double nCost, nUPrice;
	int nIndex = 1;

	szSQL2.Format(_T(" SELECT su_name, su_deptid, 'chucvu' as chucvu ") \
			_T(" FROM storage_transaction ") \
			_T(" LEFT JOIN sys_user ON(su_userid = st_createdby) ") \
			_T(" WHERE st_transaction_id = '%s'"), m_szTransactionID);
	rs1.ExecSQL(szSQL2);
	
	szSQL.Format(_T(" SELECT stl_item_id, ") \
				_T(" si_name, ") \
				_T(" STORAGE_GET_UOMNAME(si_uom_id) AS uomid, ") \
				_T(" stl_qtyorder, ") \
				_T(" st_orderid, ") \
				_T(" trim(stl_seri ||'/'||si_model) AS modelseri ") \
				_T("FROM storage_transactionline ") \
				_T("LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T("LEFT JOIN storage_item ON( si_item_id = stl_item_id ) ") \
				_T("LEFT JOIN storage_item_list ON(sil_item_list_id = si_item_list_id) ") \
				_T("WHERE st_doctype      = 'IOO' ") \
				_T("AND st_transaction_id = '%s'"), m_szTransactionID);
	_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/ITS/ITS_PHIEUNHAPKHAC.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("PH\xD2NG KHO\x41 H\x1ECC\x43 QU\xC2N S\x1EF0"));
	rpt.GetReportHeader()->SetValue(_T("OrderNo"), m_szOrderNo);
	CString szOrderDate;
	szOrderDate.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), m_szOrderDate.Mid(8, 2),m_szOrderDate.Mid(5,2),m_szOrderDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), szOrderDate);
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndToStorage.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("SupplierName"), rs1.GetValue(_T("su_name")));
	rpt.GetReportHeader()->SetValue(_T("Position"), rs1.GetValue(_T("chucvu")));
	rpt.GetReportHeader()->SetValue(_T("Dept"), rs1.GetValue(_T("su_deptid")));


	nGroupTotal = 0;
	nTotal = 0;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("si_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("si_mfgid"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("uomid"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("stl_qtyorder"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		//rs.GetValue(_T("stl_qtyorder"), tmpStr);
		//rptDetail->SetValue(_T("8"), m_szInvoiceNo);

		rs.GetValue(_T("modelseri"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.MoveNext();
	}

	EndWaitCursor();
	rpt.PrintPreview();
}