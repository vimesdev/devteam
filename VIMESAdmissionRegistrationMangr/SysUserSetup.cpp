#include "SysUserSetup.h"
//#include "stdafx.h"
#include "GuiMainFrame.h"
#include "GuiPictureCtrl.h"
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CSysUserSetup*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserSetup*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListPermissionFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnUserListPermission();
} 
static int _OnUserListAddSignatureFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnUserListAddSignature();
} 
static int _OnUserListStockPermissionFnc(CWnd *pWnd){
	return ((CSysUserSetup*)pWnd)->OnUserListStockPermission();
}
static long _OnPermListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup*)pWnd)->OnPermListLoadData();
} 
static void _OnPermListDblClickFnc(CWnd *pWnd){
	((CSysUserSetup*)pWnd)->OnPermListDblClick();
} 
static void _OnPermListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserSetup*)pWnd)->OnPermListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnPermListDeleteItem();
} 
static void _OnPermListChangeFnc(CWnd *pWnd){
	((CSysUserSetup*)pWnd)->OnPermListChange();
} 

static void _OnSearchDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup* )pWnd)->OnSearchDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchDeptSelendokFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchDeptSelendok();
}
/*static void _OnSearchDeptSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchDeptKillfocus();
}*/
/*static void _OnSearchDeptKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchDeptKillfocus();
}*/
static long _OnSearchDeptLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnSearchDeptLoadData();
}
/*static void _OnSearchDeptAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchDeptAddNew();
}*/
static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchNameChange();
}
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnRoomAddNew();
}*/
/*static void _OnUserIDChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnUserIDChange();
} */
/*static void _OnUserIDSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnUserIDSetfocus();} */ 
/*static void _OnUserIDKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnUserIDKillfocus();
} */
static int _OnUserIDCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnUserIDCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnUserNameChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnUserNameChange();
} */
/*static void _OnUserNameSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnUserNameSetfocus();} */ 
/*static void _OnUserNameKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnUserNameKillfocus();
} */
static int _OnUserNameCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnUserNameCheckValue();
} 
/*static void _OnPasswordChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnPasswordChange();
} */
/*static void _OnPasswordSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnPasswordSetfocus();} */ 
/*static void _OnPasswordKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnPasswordKillfocus();
} */
static int _OnPasswordCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnPasswordCheckValue();
} 
/*static void _OnConfirmChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnConfirmChange();
} */
/*static void _OnConfirmSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnConfirmSetfocus();} */ 
/*static void _OnConfirmKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnConfirmKillfocus();
} */
static int _OnConfirmCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnConfirmCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CSysUserSetup *pVw = (CSysUserSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSysUserSetup *pVw = (CSysUserSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSysUserSetup *pVw = (CSysUserSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysUserSetup *pVw = (CSysUserSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSysUserSetup *pVw = (CSysUserSetup *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CSysUserSetup *pVw = (CSysUserSetup *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnAddSysUserSetup();
} 
static int _OnEditSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnEditSysUserSetup();
} 
static int _OnDeleteSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnDeleteSysUserSetup();
} 
static int _OnSaveSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnSaveSysUserSetup();
} 
static int _OnCancelSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnCancelSysUserSetup();
} 

static int _OnUserAdditionPermissionFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnUserAdditionPermission();
} 

CSysUserSetup::CSysUserSetup(CWnd* pParent){

	m_nDlgWidth = 810;
	m_nDlgHeight = 615;
	SetDefaultValues();
	m_szModules = _T("''");
}
CSysUserSetup::~CSysUserSetup(){
}
void CSysUserSetup::OnCreateComponents(){
	m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 405, 580);
	m_wndPermissionInformation.Create(this, _T("Permission Information"), 410, 5, 800, 580);
	m_wndSearchDeptLabel.Create(this, _T("Search For Dept"), 10, 30, 118, 55);
	m_wndSearchDept.Create(this,123, 30, 218, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 223, 30, 313, 55);
	m_wndSearchName.Create(this,318, 30, 400, 55); 
	m_wndUserList.Create(this,10, 60, 400, 430); 
	m_wndPermList.Create(this,415, 30, 795, 575); 
	m_wndUserIDLabel.Create(this, _T("User ID"), 10, 433, 95, 458);
	m_wndUserID.Create(this,100, 433, 200, 458); 
	m_wndGroupLabel.Create(this, _T("Group"), 205, 433, 275, 458);
	m_wndGroup.Create(this,280, 433, 400, 458); 
	m_wndUserNameLabel.Create(this, _T("User Name"), 10, 463, 95, 488);
	m_wndUserName.Create(this,100, 463, 400, 488); 
	m_wndPasswordLabel.Create(this, _T("Password"), 10, 493, 95, 518);
	m_wndPassword.Create(this,100, 493, 200, 518); 
	m_wndConfirmLabel.Create(this, _T("Confirm"), 205, 493, 275, 518);
	m_wndConfirm.Create(this,280, 493, 400, 518); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 523, 95, 548);
	m_wndDepartment.Create(this,100, 523, 400, 548); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 552, 95, 577);
	m_wndRoom.Create(this,100, 552, 400, 577); 
	m_wndAdd.Create(this, _T("&Add"), 10, 585, 85, 610);
	m_wndEdit.Create(this, _T("&Edit"), 90, 585, 165, 610);
	m_wndDelete.Create(this, _T("&Delete"), 170, 585, 245, 610);
	m_wndSave.Create(this, _T("&Save"), 250, 585, 325, 610);
	m_wndCancel.Create(this, _T("&Cancel"), 330, 585, 405, 610);
	m_wndApply.Create(this, _T("&Apply"), 725, 585, 800, 610);
}
void CSysUserSetup::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
//	m_wndSearchDept.SetCheckValue(true);
	m_wndSearchDept.LimitText(81);
	m_wndSearchName.SetLimitText(65);
	m_wndSearchName.SetCheckValue(true);
	m_wndSearchName.SetNotEmpty(false);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(128);
//	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(128);
	m_wndUserID.SetLimitText(15);
	m_wndUserID.SetCheckValue(true);
//	m_wndUserID.SetInitCap(true);
	m_wndGroup.SetCheckValue(true);
	m_wndUserName.SetLimitText(65);
	m_wndUserName.SetCheckValue(true);
	m_wndUserName.SetInitCap(true);
	m_wndPassword.SetLimitText(81);
	
//	m_wndPassword.SetCheckValue(true);
	m_wndConfirm.SetLimitText(81);
//	m_wndConfirm.SetCheckValue(true);


	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 80);
	m_wndUserList.InsertColumn(1, _T("User Name"), CFMT_TEXT, 180);
	m_wndUserList.InsertColumn(2, _T("Department"), CFMT_TEXT, 100);
	


	m_wndPermList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPermList.InsertColumn(1, _T("Module"), CFMT_TEXT,60);
	m_wndPermList.InsertColumn(2, _T("Name"), CFMT_TEXT, 210);
	m_wndPermList.SetCheckBox(true);
	m_wndPermList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndSearchDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSearchDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndDepartment.InsertColumn(2, _T("type"), CFMT_TEXT, 0);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_sys_userTbl.SetTableName(_T("sys_user"));
	m_sys_userTbl.AddField(_T("su_userid"), dfText, 15); 
	m_sys_userTbl.AddField(_T("su_groupid"), dfInteger); 

	m_sys_userTbl.AddField(_T("su_name"), dfText, 65); 
	m_sys_userTbl.AddField(_T("su_password"), dfText, 81); 
	m_sys_userTbl.AddField(_T("su_deptid"), dfText, 7); 
	m_sys_userTbl.AddField(_T("su_roomid"), dfInteger); 
	

	m_sys_userpermTbl.SetTableName(_T("sys_userperm"));
	m_sys_userpermTbl.AddField(_T("sup_userid"), dfText, 15); 
	m_sys_userpermTbl.AddField(_T("sup_permid"), dfText, 11); 
	m_sys_userpermTbl.AddField(_T("sup_moduleid"), dfText, 11); 

}
void CSysUserSetup::OnSetWindowEvents(){
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
#ifdef UNICODE
	m_wndUserList.SetWindowText(_T("User List"));
	m_wndUserList.AddEvent(1, _T("Permission"), _OnUserListPermissionFnc);
	m_wndUserList.AddEvent(2, _T("Add Signature"), _OnUserListAddSignatureFnc);
	m_wndUserList.AddEvent(3, _T("Stock Permission"), _OnUserListStockPermissionFnc);
	//m_wndUserList.AddEvent(3, _T("Additon Permission"), _OnUserAdditionPermissionFnc);
#endif
	m_wndPermList.SetEvent(WE_CHANGE, _OnPermListChangeFnc);
	m_wndPermList.SetEvent(WE_SELCHANGE, _OnPermListSelectChangeFnc);
	m_wndPermList.SetEvent(WE_LOADDATA, _OnPermListLoadDataFnc);
	m_wndPermList.SetEvent(WE_DBLCLICK, _OnPermListDblClickFnc);

	//m_wndPermList.AddEvent(1, _T("Delete"), _OnPermListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	//m_wndUserID.SetEvent(WE_CHANGE, _OnUserIDChangeFnc);
	//m_wndUserID.SetEvent(WE_SETFOCUS, _OnUserIDSetfocusFnc);
	//m_wndUserID.SetEvent(WE_KILLFOCUS, _OnUserIDKillfocusFnc);
	m_wndUserID.SetEvent(WE_CHECKVALUE, _OnUserIDCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndUserName.SetEvent(WE_CHANGE, _OnUserNameChangeFnc);
	//m_wndUserName.SetEvent(WE_SETFOCUS, _OnUserNameSetfocusFnc);
	//m_wndUserName.SetEvent(WE_KILLFOCUS, _OnUserNameKillfocusFnc);
	m_wndUserName.SetEvent(WE_CHECKVALUE, _OnUserNameCheckValueFnc);
	//m_wndPassword.SetEvent(WE_CHANGE, _OnPasswordChangeFnc);
	//m_wndPassword.SetEvent(WE_SETFOCUS, _OnPasswordSetfocusFnc);
	//m_wndPassword.SetEvent(WE_KILLFOCUS, _OnPasswordKillfocusFnc);
	m_wndPassword.SetEvent(WE_CHECKVALUE, _OnPasswordCheckValueFnc);
	//m_wndConfirm.SetEvent(WE_CHANGE, _OnConfirmChangeFnc);
	//m_wndConfirm.SetEvent(WE_SETFOCUS, _OnConfirmSetfocusFnc);
	//m_wndConfirm.SetEvent(WE_KILLFOCUS, _OnConfirmKillfocusFnc);
	m_wndConfirm.SetEvent(WE_CHECKVALUE, _OnConfirmCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSysUserSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSysUserSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSysUserSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSysUserSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSysUserSetupFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	OnUserListLoadData();

}
void CSysUserSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSearchDept.GetDlgCtrlID(), m_szSearchDeptKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Text(pDX, m_wndUserID.GetDlgCtrlID(), m_szUserID);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndUserName.GetDlgCtrlID(), m_szUserName);
	DDX_Text(pDX, m_wndPassword.GetDlgCtrlID(), m_szPassword);
	DDX_Text(pDX, m_wndConfirm.GetDlgCtrlID(), m_szConfirm);

}
void CSysUserSetup::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_user WHERE su_userid='%s'"), m_szUserID);
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0){
		m_szUserID = rs.GetValue(_T("su_userid"));
		m_szUserName = rs.GetValue(_T("su_name"));
		m_szDepartmentKey = rs.GetValue(_T("su_deptid"));
		m_szRoomKey = rs.GetValue(_T("su_roomid"));
		m_szGroupKey = rs.GetValue(_T("su_groupid"));
		rs.GetValue(_T("su_password"), m_szPassword);
		m_szCurrentPassword = m_szPassword;
if(pMF->GetCurrentUser() != _T("admin"))
	m_szPassword.Empty();

		rs.GetValue(_T("su_hms_rmmodule"), m_szRMModule);
		rs.GetValue(_T("su_hms_emmodule"), m_szEMModule);
		rs.GetValue(_T("su_hms_tmmodule"), m_szTMModule);
		rs.GetValue(_T("su_hms_hfmodule"), m_szHFModule);
		rs.GetValue(_T("su_hms_pmmodule"), m_szPMModule);
		rs.GetValue(_T("su_hms_pamodule"), m_szPACSModule);
		rs.GetValue(_T("su_hms_labmodule"), m_szLIMSModule);
		m_szConfirm = m_szPassword;
		EnableButtons(TRUE, 0, 1, 2, 5, -1);
		SetMode(VM_VIEW);
		OnPermListLoadData();
	}
	else
	{
		SetDefaultValues();
		EnableButtons(TRUE, 0, 5, -1);
		SetMode(VM_NONE);
	}
//	
//	EnableControls(false);
//	UpdateData(FALSE);


}
void CSysUserSetup::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
#ifndef UNICODE
	if(m_szPassword != m_szCurrentPassword)
	{
		CString szSQL, szPassword;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("select md5('%s') "), m_szPassword);
		rs.ExecSQL(szSQL);
		m_szPassword = rs.GetStringValue();
	}
#endif
	m_sys_userTbl.SetValue(_T("su_userid"), m_szUserID);
	m_sys_userTbl.SetValue(_T("su_groupid"), 1);
	
	m_sys_userTbl.SetValue(_T("su_password"), m_szPassword);
	m_sys_userTbl.SetValue(_T("su_deptid"), m_szDepartmentKey);
	m_sys_userTbl.SetValue(_T("su_roomid"), m_szRoomKey);
	m_sys_userTbl.SetValue(_T("su_name"), m_szUserName);

}
void CSysUserSetup::SetDefaultValues(){

	m_szSearchDeptKey.Empty();
	m_szSearchName.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_szUserID.Empty();
	m_szGroupKey.Empty();
	m_szUserName.Empty();
	m_szPassword.Empty();
	m_szConfirm.Empty();
}
int CSysUserSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndUserID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndUserID.EnableWindow(false);
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
		m_wndSearchDept.EnableWindow(true);
		m_wndSearchName.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CSysUserSetup::OnUserListDblClick(){
	
} 
void CSysUserSetup::OnUserListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return;
	if(nNewItem < 0)
		return;
	m_szUserID = m_wndUserList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	
} 
int CSysUserSetup::OnUserListPermission(){
	return 0;
} 

int CSysUserSetup::OnUserListAddSignature(){
	int nSel = m_wndUserList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szFileName;
	szFileName.Format(_T("HMS_%s.jpg"), m_wndUserList.GetItemText(nSel, 0));
	CPictureFileDialog dlg(true, _T("*.jpg||*.JPG"), _T("jpg||JPG"));
	if(dlg.DoModal() ==IDOK)
	{
		CFile file;
		file.Open(dlg.GetPathName(), CFile::modeRead);
		if(file.GetLength() > 1024*10)
		{
			ShowMessageBox(_T("Image too large."));
			file.Close();
			return 0;			
		}
		else
			file.Close();

		CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
		pMF->lo_import(szFileName, dlg.GetPathName());
	}
	return 0;
} 

long CSysUserSetup::OnUserListLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	UpdateData(true);
	if(!m_szSearchDeptKey.IsEmpty())
		szWhere.Format(_T(" AND su_deptid='%s' "), m_szSearchDeptKey);
	if(!m_szSearchName.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(su_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearchName);

	szSQL.Format(_T("SELECT * FROM sys_user WHERE 0=0 %s ORDER BY su_userid"), szWhere);
	m_wndUserList.BeginLoad();
//	m_wndUserList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserList.AddItems(
			rs.GetValue(_T("su_userid")), 
			rs.GetValue(_T("su_name")), 
			rs.GetValue(_T("su_deptid")), 
			NULL);
		rs.MoveNext();
	}
	m_wndUserList.EndLoad();
	return nCount;

}
//thiet lap quyen nhin thay kho thuoc
int CSysUserSetup::OnUserListStockPermission(){
	return 0;
}
void CSysUserSetup::OnPermListDblClick(){
	int nSel = m_wndPermList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndPermList.GetCheck(nSel);
	m_wndPermList.SetCheck(nSel, !bCheck);
	CString szPermID, tmpStr, szModule, szCurMod;
	szPermID = m_wndPermList.GetItemText(nSel, 0);
	szCurMod = m_wndPermList.GetItemText(nSel, 1);
	for (int i = nSel; i < m_wndPermList.GetItemCount(); i++){
		szModule = m_wndPermList.GetItemText(i, 1);
		if(szModule != szCurMod)
			break;
		tmpStr = m_wndPermList.GetItemText(i, 0);
		if(tmpStr.Left(szPermID.GetLength()) == szPermID)
		{
			m_wndPermList.SetCheck(i, !bCheck);
		}
		
	}
} 
void CSysUserSetup::OnPermListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
	int nCurSel = m_wndPermList.GetCurSel();
	if(nCurSel < 0)
		return ;
	CString tmpStr, permId;
	BOOL bCheck = m_wndPermList.GetCheck(nCurSel);
	permId = m_wndPermList.GetItemText(nCurSel, 0);
	if(bCheck)
	{
		for (int j = nCurSel; j < m_wndPermList.GetItemCount(); j++)
		{
			tmpStr = m_wndPermList.GetItemText(j, 0);
			if(tmpStr.Left(permId.GetLength()) == permId)
			{
				m_wndPermList.SetCheck(j, TRUE);
			}
			else
				break;
		}
	}
	else
	{

		for (int j = nCurSel; j < m_wndPermList.GetItemCount(); j++)
		{
			tmpStr = m_wndPermList.GetItemText(j, 0);
			if(tmpStr.Left(permId.GetLength()) == permId)
			{
				m_wndPermList.SetCheck(j, FALSE);
			}
			else
				break;
		}
	}
	UpdateData(FALSE);

	
} 
void CSysUserSetup::OnPermListChange(){

	
}
int CSysUserSetup::OnPermListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysUserSetup::OnPermListLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPermID, szOldPermID, szSub, szModule;
	CString	szWhere;
	if(m_szUserID.IsEmpty())
		return 0;
	szWhere.Empty();
	if(m_szRMModule == _T("1"))
		szWhere = _T("'RM'");
	if(m_szEMModule == _T("1"))
	{
		if(!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'EM'");
	}
	if(m_szTMModule == _T("1"))
	{
		if(!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'TM'");
	}
	if(m_szPMModule == _T("1"))
	{
		if(!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'PM'");
	}

	if(m_szHFModule == _T("1"))
	{
		if(!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'FM'");
	}
	if(m_szPACSModule == _T("1"))
	{
		if(!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'PACS'");
	}
	if(m_szLIMSModule ==_T("1"))
	{
		if(!szWhere.IsEmpty())
				szWhere += _T(",");
		szWhere += _T("'LIMS'");
	}
	if(szWhere.IsEmpty())
		szWhere.Format(_T("'XX'"));

	szSQL.Format(_T("SELECT distinct sp_id, sp_moduleid,sp_name, \
					case when sp_moduleid=sup_moduleid and sup_permid IS NOT NULL then 'Y' else 'N' end as sp_permflg \
					FROM sys_permission \
					LEFT JOIN sys_userperm ON(sp_id=sup_permid and sp_moduleid=sup_moduleid AND sup_userid='%s' ) \
					WHERE sp_moduleid in(%s) \
					ORDER BY sp_moduleid, sp_id"), m_szUserID, szWhere);
	//_fmsg(_T("%s"), szSQL);
	//m_wndPermList.DeleteAllItems(); 
	int nCount = 0;
	int nItem = 0;
	nCount = rs.ExecSQL(szSQL);

	szOldPermID.Empty();
	m_wndPermList.BeginLoad();
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("sp_moduleid"), szModule);
		rs.GetValue(_T("sp_permflg"), tmpStr);
		rs.GetValue(_T("sp_id"), szPermID);
		szSub.Empty();
		for(int i=0; i < szPermID.GetLength(); i++)
		{
			szSub += _T(" ");
		}

		szOldPermID = szPermID;
		nItem = m_wndPermList.AddItems(
			szPermID,
			rs.GetValue(_T("sp_moduleid")),
			szSub+rs.GetValue(_T("sp_name")), NULL);
		if(tmpStr == _T("Y"))
			m_wndPermList.SetCheck(nItem, TRUE);
		if(szPermID.GetLength() == 2)
			m_wndPermList.SetItemBkColor(nItem, COLOR_BORDER, FALSE);
		tmpStr.Empty();
		rs.MoveNext();
	}
	m_wndPermList.EndLoad();
	return nCount;

}
void CSysUserSetup::OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnSearchDeptSelendok(){
	OnUserListLoadData();
}
/*void CSysUserSetup::OnSearchDeptSetfocus(){
	
}*/
/*void CSysUserSetup::OnSearchDeptKillfocus(){
	
}*/
long CSysUserSetup::OnSearchDeptLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchDept.IsSearchKey() && !m_szSearchDeptKey.IsEmpty()){
		szWhere.Format(_T(" WHERE sd_id='%s'"), m_szSearchDeptKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept %s ORDER BY sd_id "), szWhere);
	m_wndSearchDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CSysUserSetup::OnSearchDeptAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
void CSysUserSetup::OnSearchNameChange(){
	OnUserListLoadData();
}
/*void CSysUserSetup::OnSearchNameSetfocus(){
	
} */
/*void CSysUserSetup::OnSearchNameKillfocus(){
	
} */
int CSysUserSetup::OnSearchNameCheckValue(){
	//OnUserListLoadData();
	m_wndUserList.SetCurSel(0);
	return 1;
} 
void CSysUserSetup::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnDepartmentSelendok(){
	 
}
/*void CSysUserSetup::OnDepartmentSetfocus(){
	
}*/
/*void CSysUserSetup::OnDepartmentKillfocus(){
	
}*/
long CSysUserSetup::OnDepartmentLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("WHERE sd_id='%s' "), m_szDepartmentKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name, sd_type as dept_type FROM sys_dept %s ORDER BY sd_id "), szWhere);

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("dept_type")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CSysUserSetup::OnDepartmentAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
void CSysUserSetup::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnRoomSelendok(){
	 
}
/*void CSysUserSetup::OnRoomSetfocus(){
	
}*/
/*void CSysUserSetup::OnRoomKillfocus(){
	
}*/
long CSysUserSetup::OnRoomLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szDeptType;
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	if(m_szDepartmentKey.IsEmpty())
		return 0;
	szDeptType = m_wndDepartment.GetCurrent(2);
	if(szDeptType == _T("DT"))
	{
		if(m_wndRoom.IsSearchKey() && str2int(m_szRoomKey)> 0)
		{
			szWhere.Format(_T("and cast(ss_code as integer)=%d"), str2int(m_szRoomKey));
		}
		szSQL.Format(_T("SELECT cast(ss_code as integer) as id, ss_desc as name FROM sys_sel  WHERE ss_id='hms_floor' %s ORDER BY id "), szWhere);
	}
	else
	{
		if(m_wndRoom.IsSearchKey() && str2int(m_szRoomKey)> 0)
		{
			szWhere.Format(_T("and hrl_id=%d "), str2int(m_szRoomKey));
		}
		szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid='%s' %s ORDER BY hrl_id "), m_szDepartmentKey, szWhere);
	}

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSysUserSetup::OnRoomAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
/*void CSysUserSetup::OnUserIDChange(){
	
} */
/*void CSysUserSetup::OnUserIDSetfocus(){
	
} */
/*void CSysUserSetup::OnUserIDKillfocus(){
	
} */
int CSysUserSetup::OnUserIDCheckValue(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr = m_szUserID;
	StringLower(tmpStr, m_szUserID);
	UpdateData(false);
	if(GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT COUNT(*) FROM sys_user WHERE su_userid='%s'"), m_szUserID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
			return -1;
	}
	return 0;
} 
void CSysUserSetup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnGroupSelendok(){
	 
}
/*void CSysUserSetup::OnGroupSetfocus(){
	
}*/
/*void CSysUserSetup::OnGroupKillfocus(){
	
}*/
long CSysUserSetup::OnGroupLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_user_group' %s ORDER BY ss_code"), szWhere);
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return 0;

}
/*void CSysUserSetup::OnGroupAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
/*void CSysUserSetup::OnUserNameChange(){
	
} */
/*void CSysUserSetup::OnUserNameSetfocus(){
	
} */
/*void CSysUserSetup::OnUserNameKillfocus(){
	
} */
int CSysUserSetup::OnUserNameCheckValue(){
	return 0;
} 
/*void CSysUserSetup::OnPasswordChange(){
	
} */
/*void CSysUserSetup::OnPasswordSetfocus(){
	
} */
/*void CSysUserSetup::OnPasswordKillfocus(){
	
} */
int CSysUserSetup::OnPasswordCheckValue(){
	return 0;
} 
/*void CSysUserSetup::OnConfirmChange(){
	
} */
/*void CSysUserSetup::OnConfirmSetfocus(){
	
} */
/*void CSysUserSetup::OnConfirmKillfocus(){
	
} */
int CSysUserSetup::OnConfirmCheckValue(){
	if(m_szPassword != m_szConfirm)
		return -1;
	return 0;

} 
void CSysUserSetup::OnAddSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnAddSysUserSetup();

} 
void CSysUserSetup::OnEditSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnEditSysUserSetup();

} 
void CSysUserSetup::OnDeleteSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnDeleteSysUserSetup();

} 
void CSysUserSetup::OnSaveSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnSaveSysUserSetup();

} 
void CSysUserSetup::OnCancelSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnCancelSysUserSetup();

} 
void CSysUserSetup::OnApplySelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_szUserID.IsEmpty())
		return;

	szSQL.Format(_T("DELETE FROM sys_userperm WHERE sup_userid='%s'"), m_szUserID);
	rs.ExecSQL(szSQL);
	for (int i =0; i < m_wndPermList.GetItemCount(); i++)
	{
		if(m_wndPermList.GetCheck(i))
		{
			m_sys_userpermTbl.SetValue(_T("sup_userid"), m_szUserID);
			m_sys_userpermTbl.SetValue(_T("sup_permid"), m_wndPermList.GetItemText(i, 0));
			m_sys_userpermTbl.SetValue(_T("sup_moduleid"), m_wndPermList.GetItemText(i, 1));
			szSQL.Format(_T("%s"), m_sys_userpermTbl.GetInsertSQL());
			rs.ExecSQL(szSQL);
		}
	}
	AfxMessageBox(_T("Permission apply successfull"));
} 
int CSysUserSetup::OnAddSysUserSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;


	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
	CString szCurrentUser = pMF->GetCurrentUser();
	if(szCurrentUser.CompareNoCase(_T("admin")) != 0)
		return -1;
	SetMode(VM_ADD);
	return 0;  
} 
int CSysUserSetup::OnEditSysUserSetup(){
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();

	if(m_szUserID.IsEmpty())
		return -1;
	CString szCurrentUser = pMF->GetCurrentUser();
	if(szCurrentUser.CompareNoCase(_T("admin")) != 0)
		return -1;

	if(GetMode() != VM_VIEW)
		return -1;
	SetMode(VM_EDIT);
	return 0;

 
} 
int CSysUserSetup::OnDeleteSysUserSetup(){
	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
	CString szCurrentUser = pMF->GetCurrentUser();

	
 	if(GetMode() != VM_VIEW)
		return -1;
	
	if(m_szUserID.MakeUpper() ==	_T("ADMIN"))
		return -1;
	
	CString szSQL;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
		return -1;

	szSQL.Format(_T("DELETE FROM sys_userperm WHERE lower(sup_userid)=lower('%s') ;") \
				_T("DELETE FROM sys_user WHERE lower(su_userid)=lower('%s') ;"), m_szUserID,m_szUserID);
	//_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if(ret >= 0){
		SetMode(VM_NONE);
		OnCancelSysUserSetup();
		m_wndUserList.DeleteItem(m_wndUserList.GetCurSel());
	}
	return 0;

 } 
int CSysUserSetup::OnSaveSysUserSetup(){
	int nMode = GetMode();
 	if(nMode != VM_ADD && nMode != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;

	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
	CString szSQL,szWhere;
	
	szWhere.Format(_T(" WHERE su_userid='%s' "), m_szUserID);

	
	if(nMode == VM_ADD){
		szSQL = m_sys_userTbl.GetInsertSQL();
	}
	else if(nMode == VM_EDIT){
		CString szUser = pMF->GetCurrentUser();
		szUser.MakeLower();
		if(szUser == _T("admin"))
			szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid"));
		else
			szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid,su_password"));
		szSQL += szWhere;
	}


	int ret = pMF->ExecSQL(szSQL);

	if(ret > 0)
	{
		SetMode(VM_VIEW);
		OnUserListLoadData();
		m_wndAdd.SetFocus();
	}
	return ret;

}
int CSysUserSetup::OnCancelSysUserSetup(){
 	EnableControls(FALSE);
	if(GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	return 0;
} 
int CSysUserSetup::OnSysUserSetupListLoadData(){
	return 0;
}

int CSysUserSetup::OnUserAdditionPermission(){
	//CVIMESPermissionPACS dlg(this);
	//dlg.m_szUserID = m_szUserID;
	//dlg.DoModal();
	return 0;
}
void CSysUserSetup::Refresh(){
	static bool bLoaded = false;
	if(!bLoaded){
		OnUserListLoadData();
		bLoaded =true;
	}
}