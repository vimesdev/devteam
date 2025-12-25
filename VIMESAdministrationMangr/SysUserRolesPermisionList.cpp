#include "SysUserRolesPermisionList.h"
#include "MainFrm.h"
#include "SysUserRolesPermisionDialog.h"
static long _OnPermListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserRolesPermisionList*)pWnd)->OnPermListLoadData();
} 
static void _OnPermListDblClickFnc(CWnd *pWnd){
	((CSysUserRolesPermisionList*)pWnd)->OnPermListDblClick();
} 
static void _OnPermListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserRolesPermisionList*)pWnd)->OnPermListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermListAddItemFnc(CWnd* pWnd) {
    return ((CSysUserRolesPermisionList*)pWnd)->OnPermListAddItem();
}
static int _OnPermListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionList*)pWnd)->OnPermListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CSysUserRolesPermisionList *pVw = (CSysUserRolesPermisionList *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnDeleteSelectFnc(CWnd* pWnd) {
    CSysUserRolesPermisionList* pVw = (CSysUserRolesPermisionList*)pWnd;
    pVw->OnDeleteSelect();
}
static int _OnAddSysUserRolesPermisionListFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionList*)pWnd)->OnAddSysUserRolesPermisionList();
} 
static int _OnEditSysUserRolesPermisionListFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionList*)pWnd)->OnEditSysUserRolesPermisionList();
} 
static int _OnDeleteSysUserRolesPermisionListFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionList*)pWnd)->OnDeleteSysUserRolesPermisionList();
} 
static int _OnSaveSysUserRolesPermisionListFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionList*)pWnd)->OnSaveSysUserRolesPermisionList();
} 
static int _OnCancelSysUserRolesPermisionListFnc(CWnd *pWnd){
	 return ((CSysUserRolesPermisionList*)pWnd)->OnCancelSysUserRolesPermisionList();
} 
CSysUserRolesPermisionList::CSysUserRolesPermisionList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSysUserRolesPermisionList::~CSysUserRolesPermisionList(){
}
void CSysUserRolesPermisionList::OnCreateComponents(){
    m_wndPermList.Create(this, 5, 5, 585, 235);
    m_wndApply.Create(this, _T("&Add"), 420, 240, 500, 265);
    m_wndDelete.Create(this, _T("Delete"), 505, 240, 585, 265);
}
void CSysUserRolesPermisionList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

    m_wndPermList.InsertColumn(0, _T("Role ID"), CFMT_TEXT, 1);
    m_wndPermList.InsertColumn(1, _T("Module ID"), CFMT_TEXT, 100);
    m_wndPermList.InsertColumn(2, _T("Permision ID"), CFMT_TEXT, 100);
    m_wndPermList.InsertColumn(3, _T("Description"), CFMT_TEXT, 350);

    m_wndPermList.SetCheckBox(true);

    m_sys_userpermTbl.SetTableName(_T("sys_user_roles_permissions"));
    m_sys_userpermTbl.AddField(_T("role_id"), dfText, 32);
    m_sys_userpermTbl.AddField(_T("mod_id"), dfText, 15);
    m_sys_userpermTbl.AddField(_T("permission_id"), dfText, 32);
    m_sys_userpermTbl.AddField(_T("description"), dfText, 32);

    //m_szRoleID.Empty();
    GetDataToScreen();
}
void CSysUserRolesPermisionList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPermList.SetEvent(WE_SELCHANGE, _OnPermListSelectChangeFnc);
	m_wndPermList.SetEvent(WE_LOADDATA, _OnPermListLoadDataFnc);
	m_wndPermList.SetEvent(WE_DBLCLICK, _OnPermListDblClickFnc);
    m_wndPermList.AddEvent(1, _T("Add"), _OnPermListAddItemFnc, 0, VK_ADD, 0);
	m_wndPermList.AddEvent(2, _T("Delete"), _OnPermListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
    m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddSysUserRolesPermisionListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSysUserRolesPermisionListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSysUserRolesPermisionListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSysUserRolesPermisionListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSysUserRolesPermisionListFnc, 0, 'T', VK_CONTROL);*/
	//SetMode(VM_NONE);

}
void CSysUserRolesPermisionList::OnDoDataExchange(CDataExchange* pDX){

}
void CSysUserRolesPermisionList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CSysUserRolesPermisionList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();;
    OnPermListLoadData();

}
void CSysUserRolesPermisionList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysUserRolesPermisionList::SetDefaultValues(){


}
int CSysUserRolesPermisionList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CSysUserRolesPermisionList::OnPermListDblClick(){
	
} 
void CSysUserRolesPermisionList::OnPermListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    m_szCurModID = m_wndPermList.GetItemText(nNewItem, 1);
    m_szCurPermID = m_wndPermList.GetItemText(nNewItem, 2);
} 
int CSysUserRolesPermisionList::OnPermListAddItem() {
    CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
    CSysUserRolesPermisionDialog dlg(this);
    dlg.SetMode(VM_ADD);
    dlg.m_szRoleID = m_szRoleID;
    if (dlg.DoModal() != IDOK) {
        OnPermListLoadData();
    }
    return 0;
}
int CSysUserRolesPermisionList::OnPermListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CString szSQL, szWhere, szPerms, szMods, szOldMod, szNewMod, szSQLUP, szWhereUP;
    szWhere.Empty();
    szPerms.Empty();
    szMods.Empty();

    if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return -1;

    for (int i = 0; i < m_wndPermList.GetItemCount(); i++) {
        if (m_wndPermList.GetCheck(i)) {
            if (!szPerms.IsEmpty())
                szPerms += _T(",");
            szPerms.AppendFormat(_T("'%s'"), m_wndPermList.GetItemText(i, 2));

            szOldMod = m_wndPermList.GetItemText(i-1, 1);
            szNewMod = m_wndPermList.GetItemText(i, 1);
            if (szOldMod != szNewMod)
            {
                if (!szMods.IsEmpty())
                    szMods += _T(",");
                szMods.AppendFormat(_T("'%s'"), szNewMod);
            }
           
        }
    }
    if (!szPerms.IsEmpty())
    { 
        szWhere.Format(_T(" and permission_id in (%s) and mod_id in (%s)"), szPerms, szMods);
		szWhereUP.Format(_T(" and sup_permid in (%s) and sup_moduleid in (%s) and sup_userid in (%s) "), szPerms, szMods, m_szUserList);
    }
    else {
        szWhere.Format(_T(" and permission_id = '%s' and mod_id = '%s' "), m_szCurPermID, m_szCurModID);
        szWhereUP.Format(_T(" and sup_permid = '%s' and sup_moduleid = '%s' and sup_userid in (%s) "), m_szCurPermID, m_szCurModID, m_szUserList);
    }

    szSQL.Format(_T("DELETE FROM sys_user_roles_permissions WHERE 1=1 and role_id = '%s' %s")
        ,m_szRoleID, szWhere);
    
    szSQLUP.Format(_T("DELETE FROM sys_userperm where 1=1 %s"), szWhereUP);
    pMF->ExecSQL(szSQLUP);

    int ret = pMF->ExecSQL(szSQL);
    if (ret >= 0) {
        OnPermListLoadData();
    }
    return 0;
} 
long CSysUserRolesPermisionList::OnPermListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOldMod, szNewMod, szModIDs;
	szOldMod.Empty();
	szNewMod.Empty();
    if (m_szRoleID.IsEmpty())
        return 0;

	m_wndPermList.BeginLoad(); 
    
    szSQL.Format(_T("select * from sys_user_roles_permissions WHERE role_id = '%s'"), m_szRoleID);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
        m_wndPermList.AddItems(
            rs.GetValue(_T("role_id")),
            rs.GetValue(_T("mod_id")),
            rs.GetValue(_T("permission_id")),
            rs.GetValue(_T("description")), NULL);
		szNewMod = rs.GetValue(_T("mod_id"));
        if (szOldMod != szNewMod)
        {
            if (!szModIDs.IsEmpty())
                szModIDs += _T(",");
            szModIDs.AppendFormat(_T("'%s'"), szNewMod);
			szOldMod = szNewMod;
        }
		rs.MoveNext();
	}
    m_szModIDs = szModIDs;
	m_wndPermList.EndLoad(); 
	return nCount;

	return 0;
}
void CSysUserRolesPermisionList::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    OnPermListAddItem();
} 
void CSysUserRolesPermisionList::OnDeleteSelect() {
    CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
    OnPermListDeleteItem();
}
int CSysUserRolesPermisionList::OnAddSysUserRolesPermisionList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysUserRolesPermisionList::OnEditSysUserRolesPermisionList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CSysUserRolesPermisionList::OnDeleteSysUserRolesPermisionList(){
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
 		OnCancelSysUserRolesPermisionList();
 	}
	return 0;
}
int CSysUserRolesPermisionList::OnSaveSysUserRolesPermisionList(){
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
 		//OnSysUserRolesPermisionListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysUserRolesPermisionList::OnCancelSysUserRolesPermisionList(){
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
int CSysUserRolesPermisionList::OnSysUserRolesPermisionListListLoadData(){
	return 0;
}
