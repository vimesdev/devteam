#include "HMSExpenseDialog.h"
#include "..\MainFrm.h"
#include "HMSExpenseSetupDialog.h"
/*static void _OnFindChangeFnc(CWnd *pWnd){
	((CHMSExpenseDialog *)pWnd)->OnFindChange();
} */
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseDialog *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseDialog *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSExpenseDialog *)pWnd)->OnFindCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExpenseDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExpenseDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExpenseDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExpenseDialog *pVw = (CHMSExpenseDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSExpenseDialog *pVw = (CHMSExpenseDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSExpenseDialog *pVw = (CHMSExpenseDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExpenseDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSExpenseDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSExpenseDialog *)pWnd)->OnTypeAddNew();
}*/
static int _OnAddHMSExpenseDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseDialog*)pWnd)->OnAddHMSExpenseDialog();
} 
static int _OnEditHMSExpenseDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseDialog*)pWnd)->OnEditHMSExpenseDialog();
} 
static int _OnDeleteHMSExpenseDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseDialog*)pWnd)->OnDeleteHMSExpenseDialog();
} 
static int _OnSaveHMSExpenseDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseDialog*)pWnd)->OnSaveHMSExpenseDialog();
} 
static int _OnCancelHMSExpenseDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseDialog*)pWnd)->OnCancelHMSExpenseDialog();
} 
CHMSExpenseDialog::CHMSExpenseDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nExpenseID = 0;
	m_szTitle = _T("Expense");
	SetWindowText(m_szTitle);
}
CHMSExpenseDialog::~CHMSExpenseDialog(){
}
void CHMSExpenseDialog::OnCreateComponents(){
	m_wndFindLabel.Create(this, _T("Find"), 5, 5, 85, 30);
	m_wndFind.Create(this,90, 5, 405, 30); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 35, 85, 60);
	m_wndType.Create(this,90, 35, 405, 60); 
	m_wndList.Create(this,5, 65, 405, 315); 
	m_wndAdd.Create(this, _T("Add"), 155, 320, 235, 345);
	m_wndEdit.Create(this, _T("Edit"), 240, 320, 320, 345);
	m_wndDelete.Create(this, _T("Delete"), 325, 320, 405, 345);
}
void CHMSExpenseDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFind.SetLimitText(35);
	/*
	m_wndFind.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	*/
	m_wndType.LimitText(35);

	m_wndList.SetAutoIndex(true);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Type"), CFMT_TEXT, 200);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSExpenseDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	OnListLoadData();
}
void CHMSExpenseDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

}
void CHMSExpenseDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Text")] =  m_szFind;
	m_jData[_T("Type")] =  m_szTypeKey;
	}
	else
	{
			
	m_jData[_T("Text")].GetValue(m_szFind);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	}

}
void CHMSExpenseDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExpenseDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExpenseDialog::SetDefaultValues(){

	m_szFind.Empty();
	m_szTypeKey.Empty();

}
int CHMSExpenseDialog::SetMode(int nMode){
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
/*void CHMSExpenseDialog::OnFindChange(){
	
} */
/*void CHMSExpenseDialog::OnFindSetfocus(){
	
} */
/*void CHMSExpenseDialog::OnFindKillfocus(){
	
} */
int CHMSExpenseDialog::OnFindCheckValue(){
	UpdateData();
	OnListLoadData();
	return 0;
} 
void CHMSExpenseDialog::OnListDblClick(){
	
} 
void CHMSExpenseDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nExpenseID = str2long(m_wndList.GetItemText(nNewItem, 0));
} 
int CHMSExpenseDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExpenseDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFilter;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if (m_szFind.IsEmpty() == false)
	{
		szWhere.AppendFormat(_T(" and lower(e_name) like ") \
			_T(" chr(37)||lower('%s')||chr(37)"), m_szFind);
	}
	if (m_szTypeKey.IsEmpty() == false)
	{
		szWhere.AppendFormat(_T(" and e_type_id = '%s'")
			, m_szTypeKey);
	}
	szSQL.Format(_T("SELECT e_id as id, e_name as name, ") \
				_T("	e_type_name as type_name") \
				_T(" FROM hms_expense_view ") \
				_T(" WHERE 1=1 %s %s"), szWhere, szFilter);	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("type_name")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSExpenseDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSExpenseSetupDialog dlg(this, VM_ADD);
	dlg.DoModal();
} 
void CHMSExpenseDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSExpenseSetupDialog dlg(this, VM_EDIT);
	dlg.m_nExpenseID = m_nExpenseID;
	if (dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 
void CHMSExpenseDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return;
 	szSQL.Format(_T("hms_expense_delete('%s',%ld)")
		, pMF->GetCurrentUser(), m_nExpenseID);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){
		OnListLoadData();
	}
	return;	
} 
void CHMSExpenseDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CHMSExpenseDialog::OnTypeSelendok(){
	 
}
/*void CHMSExpenseDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSExpenseDialog::OnTypeKillfocus(){
	
}*/
long CHMSExpenseDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadExpenseType(&m_wndType, m_szTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExpenseDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSExpenseDialog::OnAddHMSExpenseDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExpenseDialog::OnEditHMSExpenseDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExpenseDialog::OnDeleteHMSExpenseDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("hms_expense_delete('%s',%ld)")
		, pMF->GetCurrentUser(), m_nExpenseID);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){
		OnListLoadData();
	}
	return ret;	
}
int CHMSExpenseDialog::OnSaveHMSExpenseDialog(){
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
 		//OnHMSExpenseDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExpenseDialog::OnCancelHMSExpenseDialog(){
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
int CHMSExpenseDialog::OnHMSExpenseDialogListLoadData(){
	return 0;
}
