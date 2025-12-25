#include "SysUserRolesSettingDialog.h"
#include "MainFrm.h"
static long _OnRolesLoadDataFnc(CWnd *pWnd){
	return ((CSysUserRolesSettingDialog*)pWnd)->OnRolesLoadData();
} 
static void _OnRolesDblClickFnc(CWnd *pWnd){
	((CSysUserRolesSettingDialog*)pWnd)->OnRolesDblClick();
} 
static void _OnRolesSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserRolesSettingDialog*)pWnd)->OnRolesSelectChange(nOldItem, nNewItem);
} 
static int _OnRolesDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserRolesSettingDialog*)pWnd)->OnRolesDeleteItem();
} 
static void _OnPermissionsSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CSysUserRolesSettingDialog*)pWnd)->OnPermissionsSelectChange(nOld, nNew);
} 
static long _OnUsersLoadDataFnc(CWnd *pWnd){
	return ((CSysUserRolesSettingDialog*)pWnd)->OnUsersLoadData();
} 
static void _OnUsersDblClickFnc(CWnd *pWnd){
	((CSysUserRolesSettingDialog*)pWnd)->OnUsersDblClick();
} 
static void _OnUsersSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserRolesSettingDialog*)pWnd)->OnUsersSelectChange(nOldItem, nNewItem);
} 
static int _OnUsersDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserRolesSettingDialog*)pWnd)->OnUsersDeleteItem();
} 
static void _OnAddUsersSelectFnc(CWnd *pWnd){
	CSysUserRolesSettingDialog *pVw = (CSysUserRolesSettingDialog *)pWnd;
	pVw->OnAddUsersSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSysUserRolesSettingDialog *pVw = (CSysUserRolesSettingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddSysUserRolesSettingDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesSettingDialog*)pWnd)->OnAddSysUserRolesSettingDialog();
} 
static int _OnEditSysUserRolesSettingDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesSettingDialog*)pWnd)->OnEditSysUserRolesSettingDialog();
} 
static int _OnDeleteSysUserRolesSettingDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesSettingDialog*)pWnd)->OnDeleteSysUserRolesSettingDialog();
} 
static int _OnSaveSysUserRolesSettingDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesSettingDialog*)pWnd)->OnSaveSysUserRolesSettingDialog();
} 
static int _OnCancelSysUserRolesSettingDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesSettingDialog*)pWnd)->OnCancelSysUserRolesSettingDialog();
} 
CSysUserRolesSettingDialog::CSysUserRolesSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 655;
	SetDefaultValues();
}
CSysUserRolesSettingDialog::~CSysUserRolesSettingDialog(){
}
void CSysUserRolesSettingDialog::OnCreateComponents(){
	m_wndRoles.Create(this,5, 5, 340, 620); 
	m_wndPermissions.Create(this,345, 5, 955, 305); 
	m_wndUsers.Create(this,345, 310, 955, 620); 
	m_wndAddUsers.Create(this, _T("&Add Users"), 790, 625, 870, 650);
	m_wndClose.Create(this, _T("Close"), 875, 625, 955, 650);

}
void CSysUserRolesSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();




	m_wndUsers.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndUsers.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndUsers.InsertColumn(2, _T("Department"), CFMT_TEXT, 100);

}
void CSysUserRolesSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoles.SetEvent(WE_SELCHANGE, _OnRolesSelectChangeFnc);
	m_wndRoles.SetEvent(WE_LOADDATA, _OnRolesLoadDataFnc);
	m_wndRoles.SetEvent(WE_DBLCLICK, _OnRolesDblClickFnc);
	m_wndRoles.AddEvent(1, _T("Delete"), _OnRolesDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPermissions.SetEvent(WE_SELCHANGE, _OnPermissionsSelectChangeFnc);
	m_wndUsers.SetEvent(WE_SELCHANGE, _OnUsersSelectChangeFnc);
	m_wndUsers.SetEvent(WE_LOADDATA, _OnUsersLoadDataFnc);
	m_wndUsers.SetEvent(WE_DBLCLICK, _OnUsersDblClickFnc);
	m_wndUsers.AddEvent(1, _T("Delete"), _OnUsersDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddUsers.SetEvent(WE_CLICK, _OnAddUsersSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CSysUserRolesSettingDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CSysUserRolesSettingDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CSysUserRolesSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysUserRolesSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysUserRolesSettingDialog::SetDefaultValues(){


}
int CSysUserRolesSettingDialog::SetMode(int nMode){
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
void CSysUserRolesSettingDialog::OnRolesDblClick(){
	
} 
void CSysUserRolesSettingDialog::OnRolesSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserRolesSettingDialog::OnRolesDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysUserRolesSettingDialog::OnRolesLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoles.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoles.AddItems(
		rs.MoveNext();
	}
	m_wndRoles.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CSysUserRolesSettingDialog::OnPermissionsSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserRolesSettingDialog::OnUsersDblClick(){
	
} 
void CSysUserRolesSettingDialog::OnUsersSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserRolesSettingDialog::OnUsersDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysUserRolesSettingDialog::OnUsersLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndUsers.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUsers.AddItems(
			rs.GetValue(_T("UserID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Department")), NULL);
		rs.MoveNext();
	}
	m_wndUsers.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CSysUserRolesSettingDialog::OnAddUsersSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserRolesSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserRolesSettingDialog::OnAddSysUserRolesSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysUserRolesSettingDialog::OnEditSysUserRolesSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysUserRolesSettingDialog::OnDeleteSysUserRolesSettingDialog(){
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
 		OnCancelSysUserRolesSettingDialog();
 	}
	return 0;
}
int CSysUserRolesSettingDialog::OnSaveSysUserRolesSettingDialog(){
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
 		//OnSysUserRolesSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysUserRolesSettingDialog::OnCancelSysUserRolesSettingDialog(){
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
int CSysUserRolesSettingDialog::OnSysUserRolesSettingDialogListLoadData(){
	return 0;
}
