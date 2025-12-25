#include "SysUserRolesPermisionDialog.h"
#include "MainFrm.h"
static void _OnModuleIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserRolesPermisionDialog* )pWnd)->OnModuleIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnModuleIDSelendokFnc(CWnd *pWnd){
	((CSysUserRolesPermisionDialog *)pWnd)->OnModuleIDSelendok();
}
/*static void _OnModuleIDSetfocusFnc(CWnd *pWnd){
	((CSysUserRolesPermisionDialog *)pWnd)->OnModuleIDKillfocus();
}*/
/*static void _OnModuleIDKillfocusFnc(CWnd *pWnd){
	((CSysUserRolesPermisionDialog *)pWnd)->OnModuleIDKillfocus();
}*/
static long _OnModuleIDLoadDataFnc(CWnd *pWnd){
	return ((CSysUserRolesPermisionDialog *)pWnd)->OnModuleIDLoadData();
}
/*static void _OnModuleIDAddNewFnc(CWnd *pWnd){
	((CSysUserRolesPermisionDialog *)pWnd)->OnModuleIDAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserRolesPermisionDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSysUserRolesPermisionDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserRolesPermisionDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CSysUserRolesPermisionDialog *pVw = (CSysUserRolesPermisionDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSysUserRolesPermisionDialog *pVw = (CSysUserRolesPermisionDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddSysUserRolesPermisionDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionDialog*)pWnd)->OnAddSysUserRolesPermisionDialog();
} 
static int _OnEditSysUserRolesPermisionDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionDialog*)pWnd)->OnEditSysUserRolesPermisionDialog();
} 
static int _OnDeleteSysUserRolesPermisionDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionDialog*)pWnd)->OnDeleteSysUserRolesPermisionDialog();
} 
static int _OnSaveSysUserRolesPermisionDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionDialog*)pWnd)->OnSaveSysUserRolesPermisionDialog();
} 
static int _OnCancelSysUserRolesPermisionDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionDialog*)pWnd)->OnCancelSysUserRolesPermisionDialog();
} 
CSysUserRolesPermisionDialog::CSysUserRolesPermisionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 610;
	m_nDlgHeight = 545;
	SetDefaultValues();
}
CSysUserRolesPermisionDialog::~CSysUserRolesPermisionDialog(){
}
void CSysUserRolesPermisionDialog::OnCreateComponents(){
	m_wndModuleIDLabel.Create(this, _T("Module ID"), 5, 5, 85, 30);
	m_wndModuleID.Create(this,90, 5, 390, 30); 
	m_wndList.Create(this,5, 35, 605, 495); 
	m_wndApply.Create(this, _T("&Apply"), 440, 500, 520, 525);
	m_wndClose.Create(this, _T("&Close"), 525, 500, 605, 525);

}
void CSysUserRolesPermisionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndModuleID.SetCheckValue(true);
	m_wndModuleID.LimitText(15);


	m_wndModuleID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndModuleID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_SYS_USER_ROLES_PERMISSIONSTbl.SetTableName(_T("SYS_USER_ROLES_PERMISSIONS"));
	m_SYS_USER_ROLES_PERMISSIONSTbl.AddField(_T("ROLE_ID"), dfText, 32); 
	m_SYS_USER_ROLES_PERMISSIONSTbl.AddField(_T("MOD_ID"), dfText, 15); 
	m_SYS_USER_ROLES_PERMISSIONSTbl.AddField(_T("PERMISSION_ID"), dfText, 32); 

}
void CSysUserRolesPermisionDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndModuleID.SetEvent(WE_SELENDOK, _OnModuleIDSelendokFnc);
	//m_wndModuleID.SetEvent(WE_SETFOCUS, _OnModuleIDSetfocusFnc);
	//m_wndModuleID.SetEvent(WE_KILLFOCUS, _OnModuleIDKillfocusFnc);
	m_wndModuleID.SetEvent(WE_SELCHANGE, _OnModuleIDSelectChangeFnc);
	m_wndModuleID.SetEvent(WE_LOADDATA, _OnModuleIDLoadDataFnc);
	//m_wndModuleID.SetEvent(WE_ADDNEW, _OnModuleIDAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CSysUserRolesPermisionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndModuleID.GetDlgCtrlID(), m_szModuleIDKey);

}
void CSysUserRolesPermisionDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ModuleID")] =  m_szModuleIDKey;
	}
	else
	{
			
	m_jData[_T("ModuleID")].GetValue(m_szModuleIDKey);
	}

}
void CSysUserRolesPermisionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("MOD_ID"), m_szModuleIDKey);

}
void CSysUserRolesPermisionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_SYS_USER_ROLES_PERMISSIONSTbl.SetValue(_T("MOD_ID"), m_szModuleIDKey);

}
void CSysUserRolesPermisionDialog::SetDefaultValues(){

	m_szModuleIDKey.Empty();

}
int CSysUserRolesPermisionDialog::SetMode(int nMode){
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
void CSysUserRolesPermisionDialog::OnModuleIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserRolesPermisionDialog::OnModuleIDSelendok(){
	 
}
/*void CSysUserRolesPermisionDialog::OnModuleIDSetfocus(){
	
}*/
/*void CSysUserRolesPermisionDialog::OnModuleIDKillfocus(){
	
}*/
long CSysUserRolesPermisionDialog::OnModuleIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModuleID.IsSearchKey() && !m_szModuleIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szModuleIDKey
};
	m_wndModuleID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndModuleID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysUserRolesPermisionDialog::OnModuleIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSysUserRolesPermisionDialog::OnListDblClick(){
	
} 
void CSysUserRolesPermisionDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserRolesPermisionDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysUserRolesPermisionDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CSysUserRolesPermisionDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserRolesPermisionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserRolesPermisionDialog::OnAddSysUserRolesPermisionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysUserRolesPermisionDialog::OnEditSysUserRolesPermisionDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysUserRolesPermisionDialog::OnDeleteSysUserRolesPermisionDialog(){
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
 		OnCancelSysUserRolesPermisionDialog();
 	}
	return 0;
}
int CSysUserRolesPermisionDialog::OnSaveSysUserRolesPermisionDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_SYS_USER_ROLES_PERMISSIONSTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_SYS_USER_ROLES_PERMISSIONSTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnSysUserRolesPermisionDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysUserRolesPermisionDialog::OnCancelSysUserRolesPermisionDialog(){
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
int CSysUserRolesPermisionDialog::OnSysUserRolesPermisionDialogListLoadData(){
	return 0;
}
