#include "HMSExpenseTypeDialog.h"
#include "..\MainFrm.h"
#include "HMSExpenseTypeSetupDialog.h"
/*static void _OnFindChangeFnc(CWnd *pWnd){
	((CHMSExpenseTypeDialog *)pWnd)->OnFindChange();
} */
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseTypeDialog *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseTypeDialog *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSExpenseTypeDialog *)pWnd)->OnFindCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseTypeDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExpenseTypeDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExpenseTypeDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnExtraSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeDialog *pVw = (CHMSExpenseTypeDialog *)pWnd;
	pVw->OnExtraSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeDialog *pVw = (CHMSExpenseTypeDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeDialog *pVw = (CHMSExpenseTypeDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeDialog *pVw = (CHMSExpenseTypeDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSExpenseTypeDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeDialog*)pWnd)->OnAddHMSExpenseTypeDialog();
} 
static int _OnEditHMSExpenseTypeDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeDialog*)pWnd)->OnEditHMSExpenseTypeDialog();
} 
static int _OnDeleteHMSExpenseTypeDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeDialog*)pWnd)->OnDeleteHMSExpenseTypeDialog();
} 
static int _OnSaveHMSExpenseTypeDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeDialog*)pWnd)->OnSaveHMSExpenseTypeDialog();
} 
static int _OnCancelHMSExpenseTypeDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeDialog*)pWnd)->OnCancelHMSExpenseTypeDialog();
} 
CHMSExpenseTypeDialog::CHMSExpenseTypeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nExpenseTypeID = 0;
	m_szTitle = _T("Expense Type");
	//SetWindowText(m_szTitle);
}
CHMSExpenseTypeDialog::~CHMSExpenseTypeDialog(){
}
void CHMSExpenseTypeDialog::OnCreateComponents(){
	m_wndFindLabel.Create(this, _T("Find"), 5, 5, 85, 30);
	m_wndFind.Create(this,90, 5, 350, 30); 
	m_wndList.Create(this,5, 35, 350, 285); 
	m_wndExtra.Create(this, _T("..."), 5, 290, 45, 315);
	m_wndAdd.Create(this, _T("Add"), 100, 290, 180, 315);
	m_wndEdit.Create(this, _T("Edit"), 185, 290, 265, 315);
	m_wndDelete.Create(this, _T("Delete"), 270, 290, 350, 315);
	m_wndExtra.ShowWindow(SW_HIDE);
}
void CHMSExpenseTypeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFind.SetLimitText(35);
	//m_wndFind.SetCheckValue(true);

	m_wndList.SetAutoIndex(true);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Type"), CFMT_TEXT, 100);
}
void CHMSExpenseTypeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExtra.SetEvent(WE_CLICK, _OnExtraSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	OnListLoadData();
}
void CHMSExpenseTypeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);

}
void CHMSExpenseTypeDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Text")] =  m_szFind;
	}
	else
	{
			
	m_jData[_T("Text")].GetValue(m_szFind);
	}

}
void CHMSExpenseTypeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExpenseTypeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExpenseTypeDialog::SetDefaultValues(){

	m_szFind.Empty();

}
int CHMSExpenseTypeDialog::SetMode(int nMode){
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
/*void CHMSExpenseTypeDialog::OnFindChange(){
	
} */
/*void CHMSExpenseTypeDialog::OnFindSetfocus(){
	
} */
/*void CHMSExpenseTypeDialog::OnFindKillfocus(){
	
} */
int CHMSExpenseTypeDialog::OnFindCheckValue(){
	UpdateData();
	OnListLoadData();
	return 0;
} 
void CHMSExpenseTypeDialog::OnListDblClick(){
	
} 
void CHMSExpenseTypeDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nExpenseTypeID = str2long(m_wndList.GetItemText(nNewItem, 0));
} 
int CHMSExpenseTypeDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExpenseTypeDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFilter;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if (m_szFind.IsEmpty() == false)
	{
		szWhere.AppendFormat(_T(" and lower(et_name) like ") \
				_T(" chr(37)||lower('%s')||chr(37)"), m_szFind);
	}
	szSQL.Format(_T("SELECT et_id, et_name, et_type_id ") \
				_T(" FROM hms_expense_type_view ") \
				_T(" WHERE 1=1 %s %s"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("et_id")),
			rs.GetValue(_T("et_name")),
			rs.GetValue(_T("et_type_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSExpenseTypeDialog::OnExtraSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*Hide*/
} 
void CHMSExpenseTypeDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSExpenseTypeSetupDialog dlg(this, VM_ADD);
	dlg.DoModal();
} 
void CHMSExpenseTypeDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSExpenseTypeSetupDialog dlg(this, VM_EDIT);
	dlg.m_nExpenseTypeID = m_nExpenseTypeID;
	if (dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 
void CHMSExpenseTypeDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return;
 	szSQL.Format(_T("hms_expense_type_delete('%s', %ld)")
			, pMF->GetCurrentUser(), m_nExpenseTypeID);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){
		OnListLoadData();
 	}
	return;
} 
int CHMSExpenseTypeDialog::OnAddHMSExpenseTypeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExpenseTypeDialog::OnEditHMSExpenseTypeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExpenseTypeDialog::OnDeleteHMSExpenseTypeDialog(){
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
 		OnCancelHMSExpenseTypeDialog();
 	}
	return 0;
}
int CHMSExpenseTypeDialog::OnSaveHMSExpenseTypeDialog(){
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
 		//OnHMSExpenseTypeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExpenseTypeDialog::OnCancelHMSExpenseTypeDialog(){
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
int CHMSExpenseTypeDialog::OnHMSExpenseTypeDialogListLoadData(){
	return 0;
}
