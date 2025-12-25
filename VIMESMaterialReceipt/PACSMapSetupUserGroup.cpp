#include "PACSMapSetupUserGroup.h"
#include "MainFrm.h"
#include "StringToken.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPACSMapSetupUserGroup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSMapSetupUserGroup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSMapSetupUserGroup*)pWnd)->OnListDeleteItem();
} 
static void _OnUserIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSMapSetupUserGroup* )pWnd)->OnUserIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUserIDSelendokFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnUserIDSelendok();
}
/*static void _OnUserIDSetfocusFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnUserIDKillfocus();
}*/
/*static void _OnUserIDKillfocusFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnUserIDKillfocus();
}*/
static long _OnUserIDLoadDataFnc(CWnd *pWnd){
	return ((CPACSMapSetupUserGroup *)pWnd)->OnUserIDLoadData();
}
/*static void _OnUserIDAddNewFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnUserIDAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSMapSetupUserGroup* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPACSMapSetupUserGroup *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSMapSetupUserGroup* )pWnd)->OnRoomIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomIDSelendokFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnRoomIDSelendok();
}
/*static void _OnRoomIDSetfocusFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnRoomIDKillfocus();
}*/
/*static void _OnRoomIDKillfocusFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnRoomIDKillfocus();
}*/
static long _OnRoomIDLoadDataFnc(CWnd *pWnd){
	return ((CPACSMapSetupUserGroup *)pWnd)->OnRoomIDLoadData();
}
/*static void _OnRoomIDAddNewFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnRoomIDAddNew();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSMapSetupUserGroup* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSMapSetupUserGroup *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSMapSetupUserGroup *)pWnd)->OnGroupAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CPACSMapSetupUserGroup *pVw = (CPACSMapSetupUserGroup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPACSMapSetupUserGroup *pVw = (CPACSMapSetupUserGroup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPACSMapSetupUserGroup *pVw = (CPACSMapSetupUserGroup *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPACSMapSetupUserGroup *pVw = (CPACSMapSetupUserGroup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSMapSetupUserGroup *pVw = (CPACSMapSetupUserGroup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddPACSMapSetupUserGroupFnc(CWnd *pWnd){
	 return ((CPACSMapSetupUserGroup*)pWnd)->OnAddPACSMapSetupUserGroup();
} 
static int _OnEditPACSMapSetupUserGroupFnc(CWnd *pWnd){
	 return ((CPACSMapSetupUserGroup*)pWnd)->OnEditPACSMapSetupUserGroup();
} 
static int _OnDeletePACSMapSetupUserGroupFnc(CWnd *pWnd){
	 return ((CPACSMapSetupUserGroup*)pWnd)->OnDeletePACSMapSetupUserGroup();
} 
static int _OnSavePACSMapSetupUserGroupFnc(CWnd *pWnd){
	 return ((CPACSMapSetupUserGroup*)pWnd)->OnSavePACSMapSetupUserGroup();
} 
static int _OnCancelPACSMapSetupUserGroupFnc(CWnd *pWnd){
	 return ((CPACSMapSetupUserGroup*)pWnd)->OnCancelPACSMapSetupUserGroup();
} 
CPACSMapSetupUserGroup::CPACSMapSetupUserGroup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szUserIDKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomIDKey.Empty();
	m_szGroupKey.Empty();

}
CPACSMapSetupUserGroup::~CPACSMapSetupUserGroup(){
}
void CPACSMapSetupUserGroup::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 600, 385); 
	m_wndUserIDLabel.Create(this, _T("User ID"), 10, 390, 90, 415);
	m_wndUserID.Create(this,95, 390, 295, 415); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 300, 390, 380, 415);
	m_wndDepartment.Create(this,385, 390, 600, 415); 
	m_wndRoomIDLabel.Create(this, _T("Room ID"), 10, 419, 90, 444);
	m_wndRoomID.Create(this,95, 419, 295, 444); 
	m_wndGroupLabel.Create(this, _T("Group"), 300, 420, 380, 445);
	m_wndGroup.Create(this,384, 420, 599, 445); 
	m_wndAdd.Create(this, _T("Add"), 180, 450, 260, 475);
	m_wndEdit.Create(this, _T("Edit"), 265, 450, 345, 475);
	m_wndDelete.Create(this, _T("Delete"), 350, 450, 430, 475);
	m_wndSave.Create(this, _T("Save"), 435, 450, 515, 475);
	m_wndClose.Create(this, _T("Close"), 520, 450, 600, 475);	

}
void CPACSMapSetupUserGroup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUserID.SetCheckValue(true);
	m_wndUserID.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndRoomID.SetCheckValue(true);
	
	m_wndGroup.LimitText(35);
	m_wndGroup.SetCheckBox(true);
	m_wndGroup.SetCheckValue(true);

	m_wndUserID.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndUserID.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndRoomID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoomID.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Dept ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Room ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Group"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(4, _T("Group Name"), CFMT_TEXT, 500);

	m_tbl_UserGroup.SetTableName(_T("HMS_PACSMAP_CONFIG"));
	m_tbl_UserGroup.AddField(_T("HPC_USERID"), dfText, 20);
	m_tbl_UserGroup.AddField(_T("HPC_DEPTID"), dfText, 7);
	m_tbl_UserGroup.AddField(_T("HPC_ROOMID"), dfInteger);
	m_tbl_UserGroup.AddField(_T("HPC_GROUPS"), dfText, 128);

}
void CPACSMapSetupUserGroup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUserID.SetEvent(WE_SELENDOK, _OnUserIDSelendokFnc);
	//m_wndUserID.SetEvent(WE_SETFOCUS, _OnUserIDSetfocusFnc);
	//m_wndUserID.SetEvent(WE_KILLFOCUS, _OnUserIDKillfocusFnc);
	m_wndUserID.SetEvent(WE_SELCHANGE, _OnUserIDSelectChangeFnc);
	m_wndUserID.SetEvent(WE_LOADDATA, _OnUserIDLoadDataFnc);
	//m_wndUserID.SetEvent(WE_ADDNEW, _OnUserIDAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoomID.SetEvent(WE_SELENDOK, _OnRoomIDSelendokFnc);
	//m_wndRoomID.SetEvent(WE_SETFOCUS, _OnRoomIDSetfocusFnc);
	//m_wndRoomID.SetEvent(WE_KILLFOCUS, _OnRoomIDKillfocusFnc);
	m_wndRoomID.SetEvent(WE_SELCHANGE, _OnRoomIDSelectChangeFnc);
	m_wndRoomID.SetEvent(WE_LOADDATA, _OnRoomIDLoadDataFnc);
	//m_wndRoomID.SetEvent(WE_ADDNEW, _OnRoomIDAddNewFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	
	OnListLoadData();
	SetMode(VM_ADD);

}
void CPACSMapSetupUserGroup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndUserID.GetDlgCtrlID(), m_szUserIDKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoomID.GetDlgCtrlID(), m_szRoomIDKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);

}
void CPACSMapSetupUserGroup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szGroups, szGroup, szGrp;
	m_szGroups.Empty();
	
	szSQL.Format(_T("SELECT * FROM HMS_PACSMAP_CONFIG WHERE HPC_USERID = '%s' and HPC_DEPTID = '%s' and HPC_ROOMID = %ld"), m_curUserID, m_curDeptID, m_curRoomID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HPC_USERID"), m_szUserIDKey);
		rs.GetValue(_T("HPC_DEPTID"), m_szDepartmentKey);
		rs.GetValue(_T("HPC_ROOMID"), m_szRoomIDKey);
		rs.GetValue(_T("HPC_GROUPS"), m_szGroups);

		OnGroupLoadData();
		SetMode(VM_VIEW);
	}else
		SetMode(VM_ADD);

}
void CPACSMapSetupUserGroup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szGroups;
	m_tbl_UserGroup.SetValue(_T("HPC_USERID"), m_szUserIDKey);
	m_tbl_UserGroup.SetValue(_T("HPC_DEPTID"), m_szDepartmentKey);
	m_tbl_UserGroup.SetValue(_T("HPC_ROOMID"), m_szRoomIDKey);
	for (int i = 0; i < m_wndGroup.GetCount(); i++)
	{
		if (m_wndGroup.GetCheck(i))
		{
			if (!szGroups.IsEmpty())
				szGroups += _T("|");

			szGroups.AppendFormat(_T("%s"), m_wndGroup.GetCheck(i, 0));
		}
	}

	m_tbl_UserGroup.SetValue(_T("HPC_GROUPS"), szGroups);
}
void CPACSMapSetupUserGroup::SetDefaultValues(){

	m_szRoomIDKey.Empty();

}
int CPACSMapSetupUserGroup::SetMode(int nMode){
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
void CPACSMapSetupUserGroup::OnListDblClick(){
	
} 
void CPACSMapSetupUserGroup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_curUserID = m_wndList.GetItemText(nNewItem, 0);
	m_curDeptID = m_wndList.GetItemText(nNewItem, 1);
	m_curRoomID = ToLong(m_wndList.GetItemText(nNewItem, 2));
	GetDataToScreen();
} 
int CPACSMapSetupUserGroup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSMapSetupUserGroup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, szSQL2, szGroupName;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM HMS_PACSMAP_CONFIG WHERE hpc_userid='%s' "), pMF->GetCurrentUser());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szSQL2.Format(_T(" select listagg(to_char(hfg_name), '|') within group (order by hfg_name) as gname from hms_fee_group ") \
					_T(" where hfg_id IN (select regexp_substr('%s','[^|]+', 1, level) as str from hms_pacsmap_config ") \
					_T(" connect by regexp_substr('%s', '[^|]+', 1, level) is not null )"), rs.GetValue(_T("HPC_GROUPS")), rs.GetValue(_T("HPC_GROUPS")));
		rs2.ExecSQL(szSQL2);
		szGroupName = rs2.GetValue(_T("gname"));
		m_wndList.AddItems(
			rs.GetValue(_T("HPC_USERID")),
			rs.GetValue(_T("HPC_DEPTID")),
			rs.GetValue(_T("HPC_ROOMID")),
			rs.GetValue(_T("HPC_GROUPS")),
			szGroupName, NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CPACSMapSetupUserGroup::OnUserIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSMapSetupUserGroup::OnUserIDSelendok(){
	 
}
/*void CPACSMapSetupUserGroup::OnUserIDSetfocus(){
	
}*/
/*void CPACSMapSetupUserGroup::OnUserIDKillfocus(){
	
}*/
long CPACSMapSetupUserGroup::OnUserIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	szWhere.Format(_T(" and su_userid='%s' "), pMF->GetCurrentUser());

	m_wndUserID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 %s ORDER BY su_userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserID.AddItems(
			rs.GetValue(_T("id")), 

			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSMapSetupUserGroup::OnUserIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPACSMapSetupUserGroup::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSMapSetupUserGroup::OnDepartmentSelendok(){
	 
}
/*void CPACSMapSetupUserGroup::OnDepartmentSetfocus(){
	
}*/
/*void CPACSMapSetupUserGroup::OnDepartmentKillfocus(){
	
}*/
long CPACSMapSetupUserGroup::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_id IN ('C7', 'C8', 'C8-D', 'A3', 'A3-D', 'C8-C', 'TYC') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSMapSetupUserGroup::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPACSMapSetupUserGroup::OnRoomIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSMapSetupUserGroup::OnRoomIDSelendok(){
	 
}
/*void CPACSMapSetupUserGroup::OnRoomIDSetfocus(){
	
}*/
/*void CPACSMapSetupUserGroup::OnRoomIDKillfocus(){
	
}*/
long CPACSMapSetupUserGroup::OnRoomIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hrl_deptid = '%s'"), m_szDepartmentKey);
	}
	if(m_wndRoomID.IsSearchKey() && !m_szRoomIDKey.IsEmpty()){
		szWhere.AppendFormat(_T(" and hrl_id='%s' "), m_szRoomIDKey);
	}
	
	m_wndRoomID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_section = 'HA' %s ORDER BY hrl_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomID.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSMapSetupUserGroup::OnRoomIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPACSMapSetupUserGroup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSMapSetupUserGroup::OnGroupSelendok(){
	 
}
/*void CPACSMapSetupUserGroup::OnGroupSetfocus(){
	
}*/
/*void CPACSMapSetupUserGroup::OnGroupKillfocus(){
	
}*/
long CPACSMapSetupUserGroup::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szID;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE substr(hfg_id, 0, 2) IN ('B2','B3') ") \
		_T(" AND hfg_id NOT IN ('B2000','B3000') AND hfg_active = 'Y' %s ORDER BY hfg_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("id"), szID);
		int item =
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		if(m_szGroups.Find(szID) != -1)
		{
			m_wndGroup.SetCheck(item, true);
		}
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSMapSetupUserGroup::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPACSMapSetupUserGroup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddPACSMapSetupUserGroup();
} 
void CPACSMapSetupUserGroup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeletePACSMapSetupUserGroup();
} 
void CPACSMapSetupUserGroup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CPACSMapSetupUserGroup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditPACSMapSetupUserGroup();
} 
void CPACSMapSetupUserGroup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSavePACSMapSetupUserGroup();
} 
int CPACSMapSetupUserGroup::OnAddPACSMapSetupUserGroup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSMapSetupUserGroup::OnEditPACSMapSetupUserGroup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSMapSetupUserGroup::OnDeletePACSMapSetupUserGroup(){

 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM HMS_PACSMAP_CONFIG WHERE HPC_USERID = '%s' AND HPC_DEPTID = '%s' AND HPC_ROOMID = %ld"), m_curUserID, m_curDeptID, m_curRoomID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnListLoadData();
 	}
	return 0;
}
int CPACSMapSetupUserGroup::OnSavePACSMapSetupUserGroup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_UserGroup.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE HPC_USERID = '%s' AND HPC_DEPTID = '%s' AND HPC_ROOMID = %ld"), m_curUserID, m_curDeptID, m_curRoomID);
 		szSQL = m_tbl_UserGroup.GetUpdateSQL(_T("hpc_userid"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		OnListLoadData();
 		SetMode(VM_ADD);
		m_szGroups.Empty();
		m_wndUserID.SetFocus();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSMapSetupUserGroup::OnCancelPACSMapSetupUserGroup(){
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
int CPACSMapSetupUserGroup::OnPACSMapSetupUserGroupListLoadData(){
	return 0;
}
