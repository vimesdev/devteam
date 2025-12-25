#include "FAMTransferToDeptDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferToDeptDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferToDeptDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnFromDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransferToDeptDialog* )pWnd)->OnFromDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromDeptSelendokFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnFromDeptSelendok();
}
/*static void _OnFromDeptSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnFromDeptKillfocus();
}*/
/*static void _OnFromDeptKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnFromDeptKillfocus();
}*/
static long _OnFromDeptLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferToDeptDialog *)pWnd)->OnFromDeptLoadData();
}
/*static void _OnFromDeptAddNewFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnFromDeptAddNew();
}*/
static void _OnToDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransferToDeptDialog* )pWnd)->OnToDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDeptSelendokFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnToDeptSelendok();
}
/*static void _OnToDeptSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnToDeptKillfocus();
}*/
/*static void _OnToDeptKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnToDeptKillfocus();
}*/
static long _OnToDeptLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferToDeptDialog *)pWnd)->OnToDeptLoadData();
}
/*static void _OnToDeptAddNewFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnToDeptAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDeptDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferToDeptDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMTransferToDeptDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMTransferToDeptDialog *pVw = (CFAMTransferToDeptDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMTransferToDeptDialog *pVw = (CFAMTransferToDeptDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMTransferToDeptDialog *pVw = (CFAMTransferToDeptDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMTransferToDeptDialog *pVw = (CFAMTransferToDeptDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMTransferToDeptDialog *pVw = (CFAMTransferToDeptDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMTransferToDeptDialog *pVw = (CFAMTransferToDeptDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMTransferToDeptDialog *pVw = (CFAMTransferToDeptDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMTransferToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptDialog*)pWnd)->OnAddFAMTransferToDeptDialog();
} 
static int _OnEditFAMTransferToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptDialog*)pWnd)->OnEditFAMTransferToDeptDialog();
} 
static int _OnDeleteFAMTransferToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptDialog*)pWnd)->OnDeleteFAMTransferToDeptDialog();
} 
static int _OnSaveFAMTransferToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptDialog*)pWnd)->OnSaveFAMTransferToDeptDialog();
} 
static int _OnCancelFAMTransferToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferToDeptDialog*)pWnd)->OnCancelFAMTransferToDeptDialog();
} 
CFAMTransferToDeptDialog::CFAMTransferToDeptDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMTransferToDeptDialog::~CFAMTransferToDeptDialog(){
}
void CFAMTransferToDeptDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 805, 90);
	m_wndTransferNoLabel.Create(this, _T("Transfer No"), 9, 30, 109, 55);
	m_wndOrderNo.Create(this,115, 30, 265, 55); 
	m_wndTransferDateLabel.Create(this, _T("Transfer Date"), 270, 30, 370, 55);
	m_wndOrderDate.Create(this,375, 30, 525, 55); 
	m_wndFromDeptLabel.Create(this, _T("From Dept"), 530, 30, 610, 55);
	m_wndFromDept.Create(this,615, 30, 800, 55); 
	m_wndToDeptLabel.Create(this, _T("To Dept"), 10, 60, 110, 85);
	m_wndToDept.Create(this,115, 60, 265, 85); 
	m_wndNoteLabel.Create(this, _T("Note"), 270, 60, 370, 85);
	m_wndNote.Create(this,375, 60, 800, 85); 
	m_wndLineTab.Create(this,5, 95, 805, 490); 
	m_wndAdd.Create(this, _T("Add"), 215, 495, 295, 520);
	m_wndEdit.Create(this, _T("Edit"), 300, 495, 380, 520);
	m_wndSave.Create(this, _T("Save"), 385, 495, 465, 520);
	m_wndCancel.Create(this, _T("Cancel"), 470, 495, 550, 520);
	m_wndPrint.Create(this, _T("Print"), 555, 495, 635, 520);
	m_wndImport.Create(this, _T("Post1"), 640, 495, 720, 520);
	m_wndClose.Create(this, _T("Close"), 725, 495, 805, 520);

	m_wndOrderDate.EnableWindow(FALSE);
	m_wndOrderNo.EnableWindow(FALSE);
	m_wndTTDL.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndTTDL);
	m_wndTTDL.OnInitDialog();
	m_wndTTDL.SetMode(VM_NONE);

}
void CFAMTransferToDeptDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetCheckValue(true);
	m_wndFromDept.SetCheckValue(true);
	m_wndToDept.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);

	m_wndFromDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndToDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CFAMTransferToDeptDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndFromDept.SetEvent(WE_SELENDOK, _OnFromDeptSelendokFnc);
	//m_wndFromDept.SetEvent(WE_SETFOCUS, _OnFromDeptSetfocusFnc);
	//m_wndFromDept.SetEvent(WE_KILLFOCUS, _OnFromDeptKillfocusFnc);
	m_wndFromDept.SetEvent(WE_SELCHANGE, _OnFromDeptSelectChangeFnc);
	m_wndFromDept.SetEvent(WE_LOADDATA, _OnFromDeptLoadDataFnc);
	//m_wndFromDept.SetEvent(WE_ADDNEW, _OnFromDeptAddNewFnc);
	m_wndToDept.SetEvent(WE_SELENDOK, _OnToDeptSelendokFnc);
	//m_wndToDept.SetEvent(WE_SETFOCUS, _OnToDeptSetfocusFnc);
	//m_wndToDept.SetEvent(WE_KILLFOCUS, _OnToDeptKillfocusFnc);
	m_wndToDept.SetEvent(WE_SELCHANGE, _OnToDeptSelectChangeFnc);
	m_wndToDept.SetEvent(WE_LOADDATA, _OnToDeptLoadDataFnc);
	//m_wndToDept.SetEvent(WE_ADDNEW, _OnToDeptAddNewFnc);
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
	
	OnToDeptLoadData();
	OnFromDeptLoadData();
	if(GetMode() == VM_ADD)
	{
		SetMode(VM_ADD);
		CString szSQL,szResDetail;
		long res;
		szSQL.Format(_T("STORAGE_TRANSACTION_CREATE('FAM', '', '%s', 'EMO')"), pMF->GetCurrentUser());
		pMF->ExecDMLEx(szSQL, res, szResDetail);
		if(res<0)
		{
			ShowMessageBox(szResDetail);
			return ;
		}
		m_szTransactionID = szResDetail;
		GetDataToScreen();
		m_wndTTDL.m_szTransactionID = m_szTransactionID;
			
	}else if(GetMode() == VM_EDIT)
	{
		SetMode(VM_EDIT);
		GetDataToScreen();
	}else if(GetMode() == VM_VIEW)
		{
			SetMode(VM_VIEW);
			m_wndTTDL.SetMode(VM_VIEW);
			GetDataToScreen();
		}

}
void CFAMTransferToDeptDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szTransferID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndFromDept.GetDlgCtrlID(), m_szFromDeptKey);
	DDX_TextEx(pDX, m_wndToDept.GetDlgCtrlID(), m_szToDeptKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMTransferToDeptDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT st_orderno, st_orderdate, st_createdby, st_exp_storage_id, st_source, st_imp_storage_id, st_note ") \
		_T(" FROM storage_transaction WHERE st_transaction_id = '%s'"), m_szTransactionID);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("st_orderno"), m_szTransferID);
		rs.GetValue(_T("st_exp_storage_id"), m_szFromDeptKey);
		rs.GetValue(_T("st_imp_storage_id"), m_szToDeptKey);
		rs.GetValue(_T("st_orderdate"), m_szOrderDate);
		rs.GetValue(_T("st_note"), m_szNote);
		UpdateData(FALSE);
	}

}
void CFAMTransferToDeptDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMTransferToDeptDialog::SetDefaultValues(){

	m_szTransferID.Empty();
	m_szOrderDate.Empty();
	m_szFromDeptKey.Empty();
	m_szToDeptKey.Empty();
	m_szNote.Empty();

}
int CFAMTransferToDeptDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
 			SetDefaultValues();
			m_szOrderDate =  pMF->GetSysDateTime();
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			m_wndTTDL.szTransferID = m_szTransferID;
			m_wndTTDL.m_szTransactionID = m_szTransactionID;
			m_wndTTDL.szDate = m_szOrderDate;
			//m_wndTTDL.Refresh();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
			if(szStatusDlg == _T("P"))
				m_wndImport.EnableWindow(FALSE);
			m_wndTTDL.SetMode(VM_EDIT);
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			m_wndFromDept.EnableWindow(FALSE);
			m_wndToDept.EnableWindow(FALSE);
			m_szTransferID = szTransferID;
			m_wndTTDL.m_szTransactionID = m_szTransactionID;
 			break;
 		case VM_VIEW: 
			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, 2, 3, -1);
			if(szStatusDlg == _T("P"))
				m_wndImport.EnableWindow(FALSE);
			m_wndTTDL.szTransferID = m_szTransferID;
			m_wndTTDL.m_szTransactionID = m_szTransactionID;
			GetDataToScreen();
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 6, -1);
 			//SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CFAMTransferToDeptDialog::OnOrderNoChange(){
	
} */
/*void CFAMTransferToDeptDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMTransferToDeptDialog::OnOrderNoKillfocus(){
	
} */
int CFAMTransferToDeptDialog::OnOrderNoCheckValue(){
	UpdateData(TRUE);
	m_wndTTDL.szTransferID = m_szTransferID;
	return 0;
} 
/*void CFAMTransferToDeptDialog::OnOrderDateChange(){
	
} */
/*void CFAMTransferToDeptDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMTransferToDeptDialog::OnOrderDateKillfocus(){
	
} */
int CFAMTransferToDeptDialog::OnOrderDateCheckValue(){
	UpdateData(TRUE);
	m_wndTTDL.szDate = m_szOrderDate;
	return 0;
} 
void CFAMTransferToDeptDialog::OnFromDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransferToDeptDialog::OnFromDeptSelendok(){
	UpdateData(TRUE);
	m_wndTTDL.szFromDept = m_szFromDeptKey;

}
/*void CFAMTransferToDeptDialog::OnFromDeptSetfocus(){
	
}*/
/*void CFAMTransferToDeptDialog::OnFromDeptKillfocus(){
	
}*/
long CFAMTransferToDeptDialog::OnFromDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromDept.IsSearchKey() && !m_szFromDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), m_szFromDeptKey);
	}
	m_wndFromDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name FROM storage_location WHERE sl_type = 'dpt' %s ORDER BY sl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMTransferToDeptDialog::OnFromDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMTransferToDeptDialog::OnToDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransferToDeptDialog::OnToDeptSelendok(){
	UpdateData(TRUE);
	m_wndTTDL.szToDept = m_szToDeptKey;
}
/*void CFAMTransferToDeptDialog::OnToDeptSetfocus(){
	
}*/
/*void CFAMTransferToDeptDialog::OnToDeptKillfocus(){
	
}*/
long CFAMTransferToDeptDialog::OnToDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToDept.IsSearchKey() && !m_szToDeptKey.IsEmpty()){
		szWhere.AppendFormat(_T(" and sl_storage_id='%s' "), m_szToDeptKey);
	}
	if(!m_szFromDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and sl_storage_id <> '%s'"), m_szFromDeptKey);
	}
	m_wndToDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name FROM storage_location WHERE sl_type = 'dpt' %s ORDER BY sl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMTransferToDeptDialog::OnToDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMTransferToDeptDialog::OnNoteChange(){
	
} */
/*void CFAMTransferToDeptDialog::OnNoteSetfocus(){
	
} */
/*void CFAMTransferToDeptDialog::OnNoteKillfocus(){
	
} */
int CFAMTransferToDeptDialog::OnNoteCheckValue(){
	return 0;
} 
void CFAMTransferToDeptDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransferToDeptDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMTransferToDeptDialog();
} 
void CFAMTransferToDeptDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(szStatusDlg != _T("P"))
	{
		OnEditFAMTransferToDeptDialog();
	}else
		MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
	
} 
void CFAMTransferToDeptDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMTransferToDeptDialog();
} 
void CFAMTransferToDeptDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMTransferToDeptDialog();
} 
void CFAMTransferToDeptDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate;
	int nIndex = 1;

	szSQL.Format(_T("SELECT stl_item_id, fal_assetname, stl_uom_id,  stl_unitprice, stl_qtyorder, stl_amount, fal_model, stl_seri ") \
				_T("FROM      storage_transactionline ") \
				_T("LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T("LEFT JOIN fam_asset_list ON( fal_assetno = stl_item_id ) ") \
				_T("WHERE     st_doctype = 'EMO' and st_transaction_id = '%s'"), m_szTransactionID);
	
	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_PHIEUDIEUCHUYEN.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("KHO\x41 TR\x41NG \x42\x1ECA"));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szTransferID);
	rpt.GetReportHeader()->SetValue(_T("FromDept"), m_szFromDeptKey);
	rpt.GetReportHeader()->SetValue(_T("ToDept"), m_szToDeptKey);
	rpt.GetReportHeader()->SetValue(_T("Reason"), m_szNote);

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("stl_item_id"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fal_assetname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fal_model"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("stl_seri"), tmpStr);
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
void CFAMTransferToDeptDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szSQLPost;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("STORAGE_TRANSACTION_POST('%s', '%s')"), m_szTransactionID, pMF->GetCurrentUser());
		pMF->ExecDML(szSQL);
		szSQLPost.Format(_T("FAM_TRANSFERTODEPT_POSTED('%s')"), m_szTransferID);
		pMF->ExecDML(szSQLPost);
		szStatusDlg.Format(_T("P"));
		SetMode(VM_VIEW);
		m_wndTTDL.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMTransferToDeptDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("STORAGE_TRANSACTION_DISCARD('%s')"), m_szTransactionID);
	pMF->ExecDML(szSQL);
	pMF->m_wndTransferToDept.OnTransferToDeptListLoadData();
	OnCancel();
} 
int CFAMTransferToDeptDialog::OnAddFAMTransferToDeptDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	m_wndTTDL.SetMode(VM_ADD);
	m_wndTTDL.m_wndItemList.DeleteAllItems();
	return 0;
}
int CFAMTransferToDeptDialog::OnEditFAMTransferToDeptDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMTransferToDeptDialog::OnDeleteFAMTransferToDeptDialog(){
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
 		OnCancelFAMTransferToDeptDialog();
 	}
	return 0;
}
int CFAMTransferToDeptDialog::OnSaveFAMTransferToDeptDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL.Format(_T("UPDATE storage_transaction SET st_processing = 'S', st_exp_storage_id = '%s', st_imp_storage_id = '%s',st_imp_department_id = '%s', st_exp_department_id = '%s', st_note = '%s'") \
			_T(" WHERE st_transaction_id = '%s' and st_org_id = 'FAM'"), m_szFromDeptKey, m_szToDeptKey, m_szToDeptKey, m_szFromDeptKey, m_szNote, m_szTransactionID );
 	}
 	else {
		
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);
			pMF->m_wndTransferToDept.OnTransferToDeptListLoadData();
			m_wndTTDL.m_wndItemName.SetFocus();
		}
		else
		{
			m_wndTTDL.SetMode(VM_ADD);
			pMF->m_wndTransferToDept.OnTransferToDeptListLoadData();
			m_wndTTDL.m_wndItemName.SetFocus();
			SetMode(VM_VIEW);
		}
		return 1;
 	}
 	else
 	{

 	}
 	return ret;

}
int CFAMTransferToDeptDialog::OnCancelFAMTransferToDeptDialog(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
		m_wndTTDL.SetMode(VM_NONE);
 	} 
 	else 
 	{
		m_wndTTDL.SetDefaultValues();
		SetMode(VM_NONE);
 	} 
	return 0;
} 
int CFAMTransferToDeptDialog::OnFAMTransferToDeptDialogListLoadData(){
	return 0;
}
