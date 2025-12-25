#include "CHMSCreateMultiUser.h"
#include "MainFrm.h"
/*static void _OnUserIDChangeFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnUserIDChange();
} */
/*static void _OnUserIDSetfocusFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnUserIDSetfocus();} */ 
/*static void _OnUserIDKillfocusFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnUserIDKillfocus();
} */
static int _OnUserIDCheckValueFnc(CWnd *pWnd){
	return ((CCHMSCreateMultiUser *)pWnd)->OnUserIDCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSCreateMultiUser* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CCHMSCreateMultiUser *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnDeptAddNew();
}*/
static void _OnGroupUserSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSCreateMultiUser* )pWnd)->OnGroupUserSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupUserSelendokFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnGroupUserSelendok();
}
/*static void _OnGroupUserSetfocusFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnGroupUserKillfocus();
}*/
/*static void _OnGroupUserKillfocusFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnGroupUserKillfocus();
}*/
static long _OnGroupUserLoadDataFnc(CWnd *pWnd){
	return ((CCHMSCreateMultiUser *)pWnd)->OnGroupUserLoadData();
}
/*static void _OnGroupUserAddNewFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnGroupUserAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CCHMSCreateMultiUser *)pWnd)->OnSearchCheckValue();
} 
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CCHMSCreateMultiUser*)pWnd)->OnNameLoadData();
} 
static void _OnNameDblClickFnc(CWnd *pWnd){
	((CCHMSCreateMultiUser*)pWnd)->OnNameDblClick();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSCreateMultiUser*)pWnd)->OnNameSelectChange(nOldItem, nNewItem);
} 
static int _OnNameDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSCreateMultiUser*)pWnd)->OnNameDeleteItem();
} 
static void _OnCreateSelectFnc(CWnd *pWnd){
	CCHMSCreateMultiUser *pVw = (CCHMSCreateMultiUser *)pWnd;
	pVw->OnCreateSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCHMSCreateMultiUser *pVw = (CCHMSCreateMultiUser *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSCreateMultiUserFnc(CWnd *pWnd){
	 return ((CCHMSCreateMultiUser*)pWnd)->OnAddCHMSCreateMultiUser();
} 
static int _OnEditCHMSCreateMultiUserFnc(CWnd *pWnd){
	 return ((CCHMSCreateMultiUser*)pWnd)->OnEditCHMSCreateMultiUser();
} 
static int _OnDeleteCHMSCreateMultiUserFnc(CWnd *pWnd){
	 return ((CCHMSCreateMultiUser*)pWnd)->OnDeleteCHMSCreateMultiUser();
} 
static int _OnSaveCHMSCreateMultiUserFnc(CWnd *pWnd){
	 return ((CCHMSCreateMultiUser*)pWnd)->OnSaveCHMSCreateMultiUser();
} 
static int _OnCancelCHMSCreateMultiUserFnc(CWnd *pWnd){
	 return ((CCHMSCreateMultiUser*)pWnd)->OnCancelCHMSCreateMultiUser();
}
static int _OnListCheckAllFnc(CWnd* pWnd){
	((CCHMSCreateMultiUser*)pWnd)->OnListCheckAll();
	return 0;
}
static int _OnListUnCheckAllFnc(CWnd* pWnd){
	((CCHMSCreateMultiUser*)pWnd)->OnListUnCheckAll();
	return 0;
}
static void _OnCreateJobSelectFnc(CWnd *pWnd){
	CCHMSCreateMultiUser *pVw = (CCHMSCreateMultiUser *)pWnd;
	pVw->OnCreateJobSelect();
} 
static void _OnCreateStockJobSelectFnc(CWnd *pWnd){
	CCHMSCreateMultiUser *pVw = (CCHMSCreateMultiUser *)pWnd;
	pVw->OnCreateStockJobSelect();
}
static long _OnModuleLoadDataFnc(CWnd *pWnd){
	return ((CCHMSCreateMultiUser *)pWnd)->OnModuleLoadData();
}
CCHMSCreateMultiUser::CCHMSCreateMultiUser(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCHMSCreateMultiUser::~CCHMSCreateMultiUser(){
}
void CCHMSCreateMultiUser::OnCreateComponents()
{
	/*m_wndUserIDLabel.Create(this, _T("User ID"), 10, 30, 90, 55);
	m_wndUserID.Create(this,95, 30, 605, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
	m_wndDept.Create(this,95, 60, 605, 85); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 90, 90, 115);
	m_wndGroupUser.Create(this,95, 90, 605, 115); 
	m_wndCreateUser.Create(this, _T("Chức năng copy quyền hàng loạt"), 5, 6, 605, 546);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 120, 90, 145);
	m_wndSearch.Create(this,95, 120, 605, 145); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 149, 90, 174);
	m_wndName.Create(this,95, 148, 605, 545); 
	m_wndCreate.Create(this, _T("Phân quyền Module"), 96, 555, 515, 580);
	m_wndCreateJob.Create(this, _T("Phân quyền tác vụ"), 96, 583, 515, 608);
	m_wndCreateStockJob.Create(this, _T("Phân quyền Kho"), 96, 612, 515, 637);
	m_wndClose.Create(this, _T("&Close"), 520, 555, 605, 636);*/

	m_wndUserIDLabel.Create(this, _T("User ID"), 10, 30, 90, 55);
	m_wndUserID.Create(this,95, 30, 605, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
	m_wndDept.Create(this,95, 60, 605, 85); 
	m_wndGroupLabel.Create(this, _T("Group"), 11, 90, 91, 115);
	m_wndGroupUser.Create(this,95, 90, 605, 115); 
	m_wndModuleLabel.Create(this, _T("Module"), 11, 121, 91, 146);
	m_wndCreateUser.Create(this, _T("Chức năng copy quyền hàng loạt"), 5, 6, 605, 529);
	m_wndModule.Create(this,95, 121, 605, 146);	
	m_wndSearch.Create(this,95, 149, 605, 174); 
	m_wndSearchLabel.Create(this, _T("Search"), 10, 150, 90, 175);
	m_wndNameLabel.Create(this, _T("Name"), 10, 179, 90, 204);
	m_wndName.Create(this,95, 178, 605, 530); 
	m_wndCreate.Create(this, _T("Phân quyền Module"), 96, 535, 515, 560);
	m_wndCreateJob.Create(this, _T("Phân quyền tác vụ"), 96, 563, 515, 588);
	m_wndClose.Create(this, _T("&Close"), 520, 535, 605, 616);
	m_wndCreateStockJob.Create(this, _T("Phân quyền Kho"), 96, 592, 515, 617);
}
void CCHMSCreateMultiUser::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUserID.SetLimitText(1024);
	m_wndUserID.SetCheckValue(true);
	m_wndUserID.SetReadOnly(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	//m_wndGroupUser.SetCheckValue(true);
	m_wndGroupUser.LimitText(35);
	m_wndSearch.SetLimitText(35);
	


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);


	m_wndGroupUser.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndGroupUser.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndName.InsertColumn(0, _T("User ID"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(1, _T("User Name"), CFMT_TEXT, 350);
	m_wndName.InsertColumn(2, _T("Department"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(3, _T("PID"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(4, _T(""), CFMT_TEXT, 0);
	m_wndName.SetCheckBox(true);



}
void CCHMSCreateMultiUser::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndUserID.SetEvent(WE_CHANGE, _OnUserIDChangeFnc);
	//m_wndUserID.SetEvent(WE_SETFOCUS, _OnUserIDSetfocusFnc);
	//m_wndUserID.SetEvent(WE_KILLFOCUS, _OnUserIDKillfocusFnc);
	m_wndUserID.SetEvent(WE_CHECKVALUE, _OnUserIDCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndGroupUser.SetEvent(WE_SELENDOK, _OnGroupUserSelendokFnc);
	//m_wndGroupUser.SetEvent(WE_SETFOCUS, _OnGroupUserSetfocusFnc);
	//m_wndGroupUser.SetEvent(WE_KILLFOCUS, _OnGroupUserKillfocusFnc);
	m_wndGroupUser.SetEvent(WE_SELCHANGE, _OnGroupUserSelectChangeFnc);
	m_wndGroupUser.SetEvent(WE_LOADDATA, _OnGroupUserLoadDataFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	//m_wndGroupUser.SetEvent(WE_ADDNEW, _OnGroupUserAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	m_wndName.SetEvent(WE_DBLCLICK, _OnNameDblClickFnc);
	m_wndName.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndName.AddEvent(2, _T("Uncheck All"), _OnListUnCheckAllFnc);
	m_wndCreate.SetEvent(WE_CLICK, _OnCreateSelectFnc);
	m_wndCreateJob.SetEvent(WE_CLICK, _OnCreateJobSelectFnc);
	m_wndCreateStockJob.SetEvent(WE_CLICK, _OnCreateStockJobSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);
	GetDataToScreen();
	//OnNameLoadData();

}
void CCHMSCreateMultiUser::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndUserID.GetDlgCtrlID(), m_szUserID);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndGroupUser.GetDlgCtrlID(), m_szGroupUserKey);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CCHMSCreateMultiUser::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("UserID")] =  m_szUserID;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("GroupUser")] =  m_szGroupUserKey;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("UserID")].GetValue(m_szUserID);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("GroupUser")].GetValue(m_szGroupUserKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CCHMSCreateMultiUser::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT SU_USERID FROM sys_user where su_userid='%s'"), m_szOriginID);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("SU_USERID"), m_szUserID);		
	}
	SetMode(VM_NONE);

}
void CCHMSCreateMultiUser::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSCreateMultiUser::SetDefaultValues(){

	m_szDeptKey.Empty();
	m_szGroupUserKey.Empty();
	m_szSearch.Empty();
	m_szModuleKey.Empty();
	m_wndModule.SetReadOnly(TRUE);

}
int CCHMSCreateMultiUser::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0,1,2,3, -1);
			
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CCHMSCreateMultiUser::OnUserIDChange(){
	
} */
/*void CCHMSCreateMultiUser::OnUserIDSetfocus(){
	
} */
/*void CCHMSCreateMultiUser::OnUserIDKillfocus(){
	
} */
int CCHMSCreateMultiUser::OnUserIDCheckValue(){
	return 0;
} 
void CCHMSCreateMultiUser::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSCreateMultiUser::OnDeptSelendok()
{
	UpdateData(true);
	OnNameLoadData();
}
/*void CCHMSCreateMultiUser::OnDeptSetfocus(){
	
}*/
/*void CCHMSCreateMultiUser::OnDeptKillfocus(){
	
}*/
long CCHMSCreateMultiUser::OnDeptLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" WHERE sd_id='%s'"), m_szDeptKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept %s ORDER BY sd_id "), szWhere);
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

long CCHMSCreateMultiUser::OnModuleLoadData()
{
	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szModuleKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_module_type' %s ORDER BY ss_code"), szWhere);
	m_wndModule.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndModule.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCHMSCreateMultiUser::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSCreateMultiUser::OnGroupUserSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSCreateMultiUser::OnGroupUserSelendok()
{
	UpdateData(TRUE);
	OnNameLoadData(); 
}
/*void CCHMSCreateMultiUser::OnGroupUserSetfocus(){
	
}*/
/*void CCHMSCreateMultiUser::OnGroupUserKillfocus(){
	
}*/
long CCHMSCreateMultiUser::OnGroupUserLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupUser.IsSearchKey() && !m_szGroupUserKey.IsEmpty()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szGroupUserKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_user_group' %s ORDER BY ss_code"), szWhere);
	m_wndGroupUser.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupUser.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return 0;

}
/*void CCHMSCreateMultiUser::OnGroupUserAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSCreateMultiUser::OnSearchChange(){
	
} */
/*void CCHMSCreateMultiUser::OnSearchSetfocus(){
	
} */
/*void CCHMSCreateMultiUser::OnSearchKillfocus(){
	
} */
int CCHMSCreateMultiUser::OnSearchCheckValue()
{
	UpdateData(TRUE);
	OnNameLoadData();
	return 0;
} 
void CCHMSCreateMultiUser::OnNameDblClick(){
	
} 
void CCHMSCreateMultiUser::OnNameSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSCreateMultiUser::OnNameDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSCreateMultiUser::OnNameLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, szWhere;
	CString tmpStr, szTemp;

	if (!m_szDeptKey.IsEmpty())
		szWhere.Format(_T(" AND su_deptid='%s' "), m_szDeptKey);
	
	if (!m_szGroupUserKey.IsEmpty())
		szWhere.Format(_T(" AND su_deptid='%s' AND SU_GROUPID='%s' "), m_szDeptKey, m_szGroupUserKey);

	if (!m_szSearch.IsEmpty())
		szWhere.AppendFormat(_T(" AND (lower(su_name) like (chr(37)||lower('%s')||chr(37)) OR lower(su_userid) LIKE (chr(37)||lower('%s')||chr(37))) "), m_szSearch, m_szSearch);
	
	if (pMF->GetCurrentUser().CompareNoCase(_T("admin")) != 0)
		szWhere.AppendFormat(_T(" AND lower(su_userid) <> 'admin'"));
	szSQL.Format(_T("SELECT * FROM sys_user WHERE 0=0 %s  and su_userid  <> '%s' ORDER BY su_userid"), szWhere, m_szOriginID);
	
	m_wndName.BeginLoad();
//	m_wndUserList.DeleteAllItems(); 
	int nCount = 0;
	int nItem;

	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{ 

		rs.GetValue(_T("su_userid"), tmpStr);
		szTemp.Empty();		
	
		nItem = m_wndName.AddItems(
			rs.GetValue(_T("su_userid")), 
			rs.GetValue(_T("su_name")), 
			rs.GetValue(_T("su_deptid")),
			szTemp,
			rs.GetValue(_T("su_isactive")),
			NULL);		

		rs.MoveNext();
	}
	m_wndName.EndLoad();
	return nCount;
}
void CCHMSCreateMultiUser::OnCreateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szSQL1;

	if(!IsValidateData())
 		return;

	int retMsg = AfxMessageBox(_T("Chức năng này reset lại quyền thao tác với các module, sau đó update từ user chuẩn sang, bạn chắc chắn chứ?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(retMsg != IDYES)
		return;	
	
	//1. Cập nhật quyền thao tác với các phân hệ về 0
	for (int i = 0; i < m_wndName.GetItemCount(); i++)
	{
		if (m_wndName.GetCheck(i))
		{
			szSQL.Format(_T("RESET_MODULE_PER('%s')"), m_wndName.GetItemText(i, 0));
			pMF->ExecDML(szSQL);
		}
	}	

	//2. Cập nhật quyền thao tác với các phân hệ từ user chuẩn sang
	for (int i = 0; i < m_wndName.GetItemCount(); i++)
	{
		if (m_wndName.GetCheck(i))
		{
			szSQL.Format(_T("RECOVER_MODULE_PER('%s', '%s')"), m_szOriginID, m_wndName.GetItemText(i, 0));
			pMF->ExecDML(szSQL);
		}
	}
	AfxMessageBox(_T("Permission apply successfull, Check Again"));
}

void CCHMSCreateMultiUser::OnCreateJobSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szSQL1;

	if(!IsValidateData())
 		return;

	int retMsg = AfxMessageBox(_T("Chức năng này sẽ reset lại quyền của các user được chọn, sau đó áp dụng quyền user chuẩn sang, bạn chắc chắn chứ?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(retMsg != IDYES)
		return;
	//1. Xóa quyền trước
	for (int i = 0; i < m_wndName.GetItemCount(); i++)
	{
		if (m_wndName.GetCheck(i))
		{
			szSQL.Format(_T("DELETE FROM sys_userperm  ") \
				_T("	WHERE sup_userid='%s'"),  m_wndName.GetItemText(i, 0));				
			pMF->ExecSQL(szSQL);
			
		}
	}	
	//2. Insert quyền vào
	for (int i = 0; i < m_wndName.GetItemCount(); i++)
	{
		if (m_wndName.GetCheck(i))
		{
			szSQL.Format(_T("COPY_PERMISSION_MULTIUSER('%s', '%s' )"), m_szOriginID, m_wndName.GetItemText(i, 0));
			pMF->ExecDML(szSQL);
		}
	}	

	AfxMessageBox(_T("Permission apply successfull, Check Again"));
	
} 
void CCHMSCreateMultiUser::OnCreateStockJobSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szSQL1;

	if(!IsValidateData())
 		return;

	int retMsg = AfxMessageBox(_T("Chức năng này sẽ reset lại quyền thao tác với kho, sau đó áp dụng quyền user chuẩn sang, bạn chắc chắn chứ?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(retMsg != IDYES)
		return;
	//1. Xóa quyền trước
	for (int i = 0; i < m_wndName.GetItemCount(); i++)
	{
		if (m_wndName.GetCheck(i))
		{
			szSQL1.Format(_T("DELETE FROM m_userperm  ") \
				_T("	WHERE MUP_USERID='%s'"), m_wndName.GetItemText(i, 0));				
			pMF->ExecSQL(szSQL1);
		}
	}	
	
	//2. Insert quyền vào
	for (int i = 0; i < m_wndName.GetItemCount(); i++)
	{
		if (m_wndName.GetCheck(i))
		{
			szSQL.Format(_T("COPY_STOCK_PER_MULTIUSER('%s', '%s')"), m_szOriginID, m_wndName.GetItemText(i, 0));
			pMF->ExecDML(szSQL);
		}
	}	

	AfxMessageBox(_T("Permission apply successfull, Check Again"));	
	
}

void CCHMSCreateMultiUser::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CCHMSCreateMultiUser::OnAddCHMSCreateMultiUser(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSCreateMultiUser::OnEditCHMSCreateMultiUser(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSCreateMultiUser::OnDeleteCHMSCreateMultiUser(){
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
 		OnCancelCHMSCreateMultiUser();
 	}
	return 0;
}
int CCHMSCreateMultiUser::OnSaveCHMSCreateMultiUser(){
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
 		//OnCHMSCreateMultiUserListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSCreateMultiUser::OnCancelCHMSCreateMultiUser(){
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
int CCHMSCreateMultiUser::OnCHMSCreateMultiUserListLoadData(){
	return 0;
}
void CCHMSCreateMultiUser::OnListCheckAll()
{
	for (int i = 0;i < m_wndName.GetItemCount(); i++)
		if (!m_wndName.GetCheck(i))
			m_wndName.SetCheck(i, true);
}

void CCHMSCreateMultiUser::OnListUnCheckAll(){
	for (int i = 0;i < m_wndName.GetItemCount(); i++)
		if (m_wndName.GetCheck(i))
			m_wndName.SetCheck(i, false);
}