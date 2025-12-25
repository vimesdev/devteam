#include "SysUserRolesAddUserDialog.h"
#include "MainFrm.h"
#include "SysUserRolesSettingDialog.h"
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserRolesAddUserDialog*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CSysUserRolesAddUserDialog*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserRolesAddUserDialog*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserRolesAddUserDialog*)pWnd)->OnUserListDeleteItem();
} 
static void _OnSearchDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserRolesAddUserDialog* )pWnd)->OnSearchDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchDeptSelendokFnc(CWnd *pWnd){
	((CSysUserRolesAddUserDialog *)pWnd)->OnSearchDeptSelendok();
}
/*static void _OnSearchDeptSetfocusFnc(CWnd *pWnd){
	((CSysUserRolesAddUserDialog *)pWnd)->OnSearchDeptKillfocus();
}*/
/*static void _OnSearchDeptKillfocusFnc(CWnd *pWnd){
	((CSysUserRolesAddUserDialog *)pWnd)->OnSearchDeptKillfocus();
}*/
static long _OnSearchDeptLoadDataFnc(CWnd *pWnd){
	return ((CSysUserRolesAddUserDialog *)pWnd)->OnSearchDeptLoadData();
}
/*static void _OnSearchDeptAddNewFnc(CWnd *pWnd){
	((CSysUserRolesAddUserDialog *)pWnd)->OnSearchDeptAddNew();
}*/
static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CSysUserRolesAddUserDialog *)pWnd)->OnSearchNameChange();
} 
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CSysUserRolesAddUserDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CSysUserRolesAddUserDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CSysUserRolesAddUserDialog *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnInactiveUserSelectFnc(CWnd *pWnd){
	 ((CSysUserRolesAddUserDialog*)pWnd)->OnInactiveUserSelect();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CSysUserRolesAddUserDialog *pVw = (CSysUserRolesAddUserDialog *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddSysUserRolesAddUserDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesAddUserDialog*)pWnd)->OnAddSysUserRolesAddUserDialog();
} 
static int _OnEditSysUserRolesAddUserDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesAddUserDialog*)pWnd)->OnEditSysUserRolesAddUserDialog();
} 
static int _OnDeleteSysUserRolesAddUserDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesAddUserDialog*)pWnd)->OnDeleteSysUserRolesAddUserDialog();
} 
static int _OnSaveSysUserRolesAddUserDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesAddUserDialog*)pWnd)->OnSaveSysUserRolesAddUserDialog();
} 
static int _OnCancelSysUserRolesAddUserDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesAddUserDialog*)pWnd)->OnCancelSysUserRolesAddUserDialog();
} 
CSysUserRolesAddUserDialog::CSysUserRolesAddUserDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSysUserRolesAddUserDialog::~CSysUserRolesAddUserDialog(){
}
void CSysUserRolesAddUserDialog::OnCreateComponents(){
	m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 555, 315);
	m_wndUserList.Create(this, 10, 60, 550, 310);
	m_wndSearchDeptLabel.Create(this, _T("Dept"), 5, 30, 55, 55);
	m_wndSearchDept.Create(this, 60, 30, 210, 55);
	m_wndSearchNameLabel.Create(this, _T("Name"), 215, 30, 265, 55);
	m_wndSearchName.Create(this, 270, 30, 430, 55);
	m_wndInactiveUser.Create(this, _T("Inactive"), 433, 30, 548, 55);
	m_wndApply.Create(this, _T("&Apply"), 480, 320, 555, 345);

}
void CSysUserRolesAddUserDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchDept.LimitText(81);
	m_wndSearchName.SetLimitText(65);
	//m_wndSearchName.SetCheckValue(true);
	m_wndSearchName.SetNotEmpty(false);

	m_wndSearchDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndSearchDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndSearchDept.Format(2, 0);

	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 120);
	m_wndUserList.InsertColumn(1, _T("User Name"), CFMT_TEXT, 250);
	m_wndUserList.InsertColumn(2, _T("Department"), CFMT_TEXT, 100);
	m_wndUserList.InsertColumn(3, _T("PID"), CFMT_TEXT, 0);
	m_wndUserList.InsertColumn(4, _T(""), CFMT_TEXT, 0);
	m_wndUserList.SetCheckBox(true);
	m_wndUserList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_tblUserRolesMembers.SetTableName(_T("SYS_USER_ROLES_MEMBERS"));
	m_tblUserRolesMembers.AddField(_T("USER_ID"), dfText, 32);
	m_tblUserRolesMembers.AddField(_T("ROLE_ID"), dfText, 32);

}
void CSysUserRolesAddUserDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
	m_wndUserList.AddEvent(1, _T("Delete"), _OnUserListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearchDept.SetEvent(WE_SELENDOK, _OnSearchDeptSelendokFnc);
	//m_wndSearchDept.SetEvent(WE_SETFOCUS, _OnSearchDeptSetfocusFnc);
	//m_wndSearchDept.SetEvent(WE_KILLFOCUS, _OnSearchDeptKillfocusFnc);
	m_wndSearchDept.SetEvent(WE_SELCHANGE, _OnSearchDeptSelectChangeFnc);
	m_wndSearchDept.SetEvent(WE_LOADDATA, _OnSearchDeptLoadDataFnc);
	//m_wndSearchDept.SetEvent(WE_ADDNEW, _OnSearchDeptAddNewFnc);
	m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndInactiveUser.SetEvent(WE_CLICK, _OnInactiveUserSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	//SetMode(VM_NONE);

}
void CSysUserRolesAddUserDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSearchDept.GetDlgCtrlID(), m_szSearchDeptKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Check(pDX, m_wndInactiveUser.GetDlgCtrlID(), m_bInactiveUser);

}
void CSysUserRolesAddUserDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("SearchDept")] =  m_szSearchDeptKey;
	m_jData[_T("SearchName")] =  m_szSearchName;
	m_jData[_T("InactiveUser")] =  m_bInactiveUser;
	}
	else
	{
			
	m_jData[_T("SearchDept")].GetValue(m_szSearchDeptKey);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	m_jData[_T("InactiveUser")].GetValue(m_bInactiveUser);
	}

}
void CSysUserRolesAddUserDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysUserRolesAddUserDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysUserRolesAddUserDialog::SetDefaultValues(){

	m_szSearchDeptKey.Empty();
	m_szSearchName.Empty();
	m_bInactiveUser=FALSE;

}
int CSysUserRolesAddUserDialog::SetMode(int nMode){
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
void CSysUserRolesAddUserDialog::OnUserListDblClick(){
	
} 
void CSysUserRolesAddUserDialog::OnUserListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserRolesAddUserDialog::OnUserListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysUserRolesAddUserDialog::OnUserListLoadData(){
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, szWhere;
	CString tmpStr, szTemp;

	szSQL = GetQueryString_user();

	m_wndUserList.BeginLoad();
	//	m_wndUserList.DeleteAllItems(); 
	int nCount = 0;
	int nItem;

	nCount = rs.ExecSQL(szSQL);

	_debug(_T("%s"), szSQL);

	while (!rs.IsEOF())
	{

		rs.GetValue(_T("su_userid"), tmpStr);
		szTemp.Empty();

		/*	szSQL.Format(_T(" select pid") \
						_T(" from") \
						_T(" (") \
						_T("  select sfd_no as pid,") \
						_T("         row_number() over (order by sfd_no desc) as rownumber") \
						_T("  from sys_filedir") \
						_T("  where sfd_name='HMS_%s.jpg'") \
						_T("  order by sfd_no") \
						_T(" ) Tbl") \
						_T(" where rownumber=1"), tmpStr);*/

						/*szSQL.Format(_T("SELECT Count(*) FROM sys_filedir WHERE sfd_name like(chr(37)||lower('%s')||chr(37))"),
									 tmpStr);*/
									 /*rss.ExecSQL(szSQL);

									 if (!rss.IsEOF())
									 {
										 rss.GetValue(_T("pid"), szTemp);
									 }*/
									 //User status
		nItem = m_wndUserList.AddItems(
			rs.GetValue(_T("su_userid")),
			rs.GetValue(_T("su_name")),
			rs.GetValue(_T("su_deptid")),
			szTemp,
			rs.GetValue(_T("su_isactive")),
			NULL);

		/*if (szTemp == _T("Y"))
		{
			m_wndUserList.SetSubItemBkColor(nItem, 1, RGB(255, 128, 64), FALSE);
			m_wndUserList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
		}*/

		rs.MoveNext();
	}
	m_wndUserList.EndLoad();
	return nCount;
}
void CSysUserRolesAddUserDialog::OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserRolesAddUserDialog::OnSearchDeptSelendok(){
	UpdateData(true);
	OnUserListLoadData();
}
/*void CSysUserRolesAddUserDialog::OnSearchDeptSetfocus(){
	
}*/
/*void CSysUserRolesAddUserDialog::OnSearchDeptKillfocus(){
	
}*/
long CSysUserRolesAddUserDialog::OnSearchDeptLoadData(){
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndSearchDept.IsSearchKey() && !m_szSearchDeptKey.IsEmpty()) {
		szWhere.Format(_T(" AND sd_id='%s'"), m_szSearchDeptKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_isactive='Y' %s ORDER BY sd_id "), szWhere);
	m_wndSearchDept.DeleteAllItems();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndSearchDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSysUserRolesAddUserDialog::OnSearchDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSysUserRolesAddUserDialog::OnSearchNameChange(){
	UpdateData(true);
	OnUserListLoadData();
} 
/*void CSysUserRolesAddUserDialog::OnSearchNameSetfocus(){
	
} */
/*void CSysUserRolesAddUserDialog::OnSearchNameKillfocus(){
	
} */
int CSysUserRolesAddUserDialog::OnSearchNameCheckValue(){
	return 0;
} 
	void CSysUserRolesAddUserDialog::OnInactiveUserSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CSysUserRolesAddUserDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szUser_ids;

	CString szUser = pMF->GetCurrentUser();
	szUser_ids.Empty();
	for (int i = 0; i < m_wndUserList.GetItemCount(); i++)
	{
		if (!m_wndUserList.GetCheck(i))
		{
			continue;
		}
		if (!szUser_ids.IsEmpty())
		{
			szUser_ids += _T(",");
		}
		szUser_ids.AppendFormat(_T("%s|%s"), m_wndUserList.GetItemText(i, 1), m_wndUserList.GetItemText(i, 0));
	}
	
	/*if (szUser == _T("admin"))
	{
		szSQL.Format(_T("DELETE FROM sys_user_roles_permissions  ") \
			_T("	WHERE role_id='%s'   ") \
			_T("	and ( mod_id not in ('EM','PM') or (mod_id='EM' ") \
			_T("		and permission_id not in ('05.06','05.07','05.08','05.10'))  ") \
			_T("       or  (mod_id='PM' and permission_id <>'10.14') ) "), m_szRoleID);
	}
	else
	{
		szSQL.Format(_T("DELETE FROM sys_user_roles_permissions  ") \
			_T("	WHERE role_id='%s' and mod_id not in ('SYS')") \
			_T("	and (mod_id not in ('EM','PM') or (mod_id='EM' ") \
			_T("		and permission_id not in ('05.06','05.07','05.08','05.10'))  ") \
			_T("       or  (mod_id='PM' and permission_id <>'10.14') ) "), m_szRoleID);
	}
	pMF->ExecSQL(szSQL);*/
	//_msg(_T("%s"),szSQL);
	for (int i = 0; i < m_wndUserList.GetItemCount(); i++)
	{
		if (m_wndUserList.GetCheck(i))
		{
			m_tblUserRolesMembers.SetValue(_T("role_id"), m_szRoleID);
			m_tblUserRolesMembers.SetValue(_T("user_id"), m_wndUserList.GetItemText(i, 0));
			
			szSQL.Format(_T("%s"), m_tblUserRolesMembers.GetInsertSQL());
			pMF->ExecSQL(szSQL);
		}
	}

	ApplyPermListToUserList();

	AfxMessageBox(_T("Users apply successfull"));

	((CSysUserRolesSettingDialog*)m_wndMainDlg)->OnUsersLoadData();
} 
int CSysUserRolesAddUserDialog::OnAddSysUserRolesAddUserDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysUserRolesAddUserDialog::OnEditSysUserRolesAddUserDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysUserRolesAddUserDialog::OnDeleteSysUserRolesAddUserDialog(){
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
 		OnCancelSysUserRolesAddUserDialog();
 	}
	return 0;
}
int CSysUserRolesAddUserDialog::OnSaveSysUserRolesAddUserDialog(){
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
 		//OnSysUserRolesAddUserDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysUserRolesAddUserDialog::OnCancelSysUserRolesAddUserDialog(){
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
int CSysUserRolesAddUserDialog::OnSysUserRolesAddUserDialogListLoadData(){
	return 0;
}
CString CSysUserRolesAddUserDialog::GetQueryString_user(bool bExport)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	if (!m_szSearchDeptKey.IsEmpty())
		szWhere.Format(_T(" AND su_deptid='%s' "), m_szSearchDeptKey);

	if (!m_szSearchName.IsEmpty())
		szWhere.AppendFormat(_T(" AND (lower(su_name) like (chr(37)||lower('%s')||chr(37)) OR lower(su_userid) LIKE (chr(37)||lower('%s')||chr(37))) "), m_szSearchName, m_szSearchName);

	if (m_bInactiveUser)
		szWhere.AppendFormat(_T(" AND NVL(su_isactive, 'N') <> 'Y'"));
	else
		szWhere.AppendFormat(_T(" AND su_isactive = 'Y'"));

	if (pMF->GetCurrentUser().CompareNoCase(_T("admin")) != 0)
		szWhere.AppendFormat(_T(" AND lower(su_userid) <> 'admin' AND su_deptid <> 'C1.2'"));

	szSQL.Format(_T("SELECT * FROM sys_user WHERE 0=0 %s ORDER BY su_userid"), szWhere);
	if (bExport)
	{
		szSQL.Format(_T("SELECT su_userid as user_id, su_name as user_name, su_deptid as dept, ss_desc as nametype, SU_CERTIFICATE as cchn, GET_SYSSEL_DESC_V2('su_practising_range', su_practising_range) AS pvhn ") \
			_T(" FROM sys_user left join sys_sel ON (su_groupid = ss_code AND ss_id='sys_user_group')  WHERE 0=0 %s ORDER BY su_userid"), szWhere);
	}
	return szSQL;
}
void CSysUserRolesAddUserDialog::ApplyPermListToUserList()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szPerm_ids;

	szSQL.Format(_T("SYS_APPLY_PERM_TO_USER('%s')"), m_szRoleID);
	CString szRes = pMF->ExecDML(szSQL);
	_tprintf(_T("\nnRes%s"), szRes);
	if (!szRes.IsEmpty())
	{
		AfxMessageBox(_T("Permission apply successfull"));
	}else
		AfxMessageBox(_T("Error !"));
}