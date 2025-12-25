#include "SysUserRolesSettingDialog.h"
#include "MainFrm.h"
#include "SysUserRolesAddUserDialog.h"
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
static void _OnDeleteSelectFnc(CWnd* pWnd) {
	CSysUserRolesSettingDialog* pVw = (CSysUserRolesSettingDialog*)pWnd;
	pVw->OnDeleteSelect();
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
	//m_wndRoles.Create(this,5, 5, 340, 620); 
	m_wndSysURL.Create(this, CRect(5, 5, 340, 620), L"URL");
	m_wndPermissions.Create(this,345, 5, 955, 305); 
	m_wndUsers.Create(this,345, 310, 955, 620); 
	m_wndAddUsers.Create(this, _T("&Add Users"), 705, 625, 785, 650);
	m_wndDelete.Create(this, _T("Delete"), 790, 625, 870, 650);
	m_wndClose.Create(this, _T("Close"), 875, 625, 955, 650);

	m_wndSysURPList.Create(this);
	m_wndSysURPList.OnInitDialog();
	m_wndSysURPList.m_wndTabPermList = &m_wndSysURL;

	m_wndSysURStoragePermList.Create(this);
	m_wndSysURStoragePermList.OnInitDialog();
	m_wndSysURStoragePermList.m_wndTabStoragePermList = &m_wndSysURL;
	
	m_wndSysURL.m_wndTabPermStorage = &m_wndSysURStoragePermList;
	m_wndSysURL.m_wndTabDlg = &m_wndSysURPList;
	m_wndSysURL.m_wndMainDlg = this;
}
void CSysUserRolesSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndUsers.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndUsers.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndUsers.InsertColumn(2, _T("Department"), CFMT_TEXT, 100);
	m_wndUsers.InsertColumn(3, _T("Group"), CFMT_TEXT, 200);
	m_wndUsers.SetCheckBox(true);

	m_wndPermissions.Add(_T("Permisions"), &m_wndSysURPList);
	m_wndPermissions.Add(_T("Storage"), &m_wndSysURStoragePermList);
	//m_wndPermissions.Add(_T("Tab3"));
	m_wndPermissions.SetActiveTab(0);

}
void CSysUserRolesSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoles.SetEvent(WE_SELCHANGE, _OnRolesSelectChangeFnc);
	m_wndRoles.SetEvent(WE_LOADDATA, _OnRolesLoadDataFnc);
	m_wndRoles.SetEvent(WE_DBLCLICK, _OnRolesDblClickFnc);
	
	m_wndPermissions.SetEvent(WE_SELCHANGE, _OnPermissionsSelectChangeFnc);
	m_wndUsers.SetEvent(WE_SELCHANGE, _OnUsersSelectChangeFnc);
	m_wndUsers.SetEvent(WE_LOADDATA, _OnUsersLoadDataFnc);
	m_wndUsers.SetEvent(WE_DBLCLICK, _OnUsersDblClickFnc);
	m_wndUsers.AddEvent(1, _T("Delete"), _OnUsersDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddUsers.SetEvent(WE_CLICK, _OnAddUsersSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	SetMode(VM_ADD);

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
void CSysUserRolesSettingDialog::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnUsersLoadData();
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
 			EnableButtons(TRUE, 0, 1, -1);
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
	m_szCurUser = m_wndUsers.GetItemText(nNewItem, 0);
} 
int CSysUserRolesSettingDialog::OnUsersDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szUserIDs, szSQL2, szWhere2, szModIDs, szOldMod, szNewMod, szWhere3;
	szWhere.Empty();
	szUserIDs.Empty();
	szOldMod.Empty();
	szNewMod.Empty();
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2, L"Tác vụ sẽ xóa quyền/toàn bộ quyền của user. \r\n Bạn có chắc chắn không?") == IDNO)
		return -1;

	for (int i = 0; i < m_wndUsers.GetItemCount(); i++) {
		if (m_wndUsers.GetCheck(i)) {
			if (!szUserIDs.IsEmpty())
				szUserIDs += _T(",");
			szUserIDs.AppendFormat(_T("'%s'"), m_wndUsers.GetItemText(i, 0));
		}
	}

	if (!szUserIDs.IsEmpty())
	{
		szWhere.Format(_T(" and user_id in (%s) "), szUserIDs);
		szWhere2.Format(_T(" and sup_userid in (%s) "), szUserIDs);
	}
	else {
		szWhere.Format(_T(" and user_id = '%s' "), m_szCurUser);
		szWhere2.Format(_T(" and sup_userid = '%s' "), m_szCurUser);
	}
		
	if (!m_wndSysURPList.m_szModIDs.IsEmpty())
		szWhere3.Format(_T(" and sup_moduleid in (%s) "), m_wndSysURPList.m_szModIDs);


	szSQL.Format(_T("DELETE FROM sys_user_roles_members WHERE 1=1 %s AND role_id = '%s'"), szWhere, m_szRoleID);
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		//Delete in sys_userperm
		szSQL2.Format(_T("DELETE FROM sys_userperm WHERE 1=1 %s %s"), szWhere2, szWhere3);
		pMF->ExecSQL(szSQL2);
		OnUsersLoadData();
	}
	 return 0;
} 
long CSysUserRolesSettingDialog::OnUsersLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szAllUsers;
	m_wndUsers.DeleteAllItems();
	if(!m_szRoleID.IsEmpty())
		szWhere.Format(_T(" and role_id = '%s'"), m_szRoleID);
	m_wndUsers.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT user_id, su_name, su_deptid, name ") \
				_T(" FROM sys_user_roles_members ") \
				_T(" LEFT JOIN sys_user_roles ON(sys_user_roles_id = role_id)  ") \
				_T(" LEFT JOIN sys_user ON(su_userid = user_id)  ") \
				_T(" WHERE 1 = 1 %s "), szWhere);
	_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUsers.AddItems(
			rs.GetValue(_T("user_id")), 
			rs.GetValue(_T("su_name")), 
			rs.GetValue(_T("su_deptid")),
			rs.GetValue(_T("name")), NULL);

		if (!szAllUsers.IsEmpty())
			szAllUsers += _T(",");
		szAllUsers.AppendFormat(_T("'%s'"), rs.GetValue(_T("user_id")));

		rs.MoveNext();
	}
	m_wndSysURPList.m_szUserList = szAllUsers;

	m_wndUsers.EndLoad(); 
	return nCount;
}
void CSysUserRolesSettingDialog::OnAddUsersSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CSysUserRolesAddUserDialog dlg(this);
	dlg.SetMode(VM_ADD);
	dlg.m_szRoleID = m_wndSysURL.szUserRolesID;
	dlg.DoModal();
	OnUsersLoadData();
	
} 
void CSysUserRolesSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CSysUserRolesSettingDialog::OnDeleteSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnUsersDeleteItem();
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
