#include "SysUserSetup_v2.h"
//#include "stdafx.h"
#include "MainFrame_E10.h"
#include "GuiPictureCtrl.h"
#include "HMSPermissionDialog.h"
#include "VIMESPermissionPACS.h"
#include "HMSExt/ReportUtils.h"
#include "SearchPopup.h"


static int _OnPermListSearchFnc(CWnd *pWnd)
{
	 ((CSysUserSetup_V2*)pWnd)->OnPermListSearch();
	 return 0;
}
static int _OnPermListSearchByNameFnc(CWnd *pWnd)
{
	 ((CSysUserSetup_V2*)pWnd)->OnPermListSearchByName();
	 return 0;
}

static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CSysUserSetup_V2*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserSetup_V2*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListPermissionFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnUserListPermission();
} 
static int _OnUserListAddSignatureFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnUserListAddSignature();
} 

static int _OnUserListDeleteSignatureFnc(CWnd *pWnd){
	((CSysUserSetup_V2*)pWnd)->OnDeleteSignature();
	return 0;
} 
static int _OnUserListStockPermissionFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnUserListStockPermission();
}
static int _OnUserListExamTypePermissionFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnUserListExamTypePermission();
}
static int _OnUserListPerformDeptPermissionFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnUserListPerformDeptPermission();
}

static int _OnUserListExportFnc(CWnd *pWnd)
{
	return ((CSysUserSetup_V2*)pWnd)->OnUserListExport();
}
static int _OnSetupAdUserFnc(CWnd *pWnd){
	((CSysUserSetup_V2*)pWnd)->OnSetupAdUser();
	return 0;
}
static long _OnPermListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnPermListLoadData();
} 
static void _OnPermListDblClickFnc(CWnd *pWnd){
	((CSysUserSetup_V2*)pWnd)->OnPermListDblClick();
} 
static void _OnPermListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserSetup_V2*)pWnd)->OnPermListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnPermListDeleteItem();
} 
static void _OnPermListChangeFnc(CWnd *pWnd){
	((CSysUserSetup_V2*)pWnd)->OnPermListChange();
} 

static void _OnSearchDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup_V2* )pWnd)->OnSearchDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchDeptSelendokFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSearchDeptSelendok();
}
/*static void _OnSearchDeptSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSearchDeptKillfocus();
}*/
/*static void _OnSearchDeptKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSearchDeptKillfocus();
}*/
static long _OnSearchDeptLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnSearchDeptLoadData();
}
/*static void _OnSearchDeptAddNewFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSearchDeptAddNew();
}*/
static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSearchNameChange();
}
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnInactiveUserSelectFnc(CWnd* pWnd){
	((CSysUserSetup_V2*)pWnd)->OnInactiveUserSelect();
}

static int _OnEmptyUserFnc(CWnd* pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnEmptyUser();
}

static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup_V2* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup_V2* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnRoomAddNew();
}*/
/*static void _OnUserIDChangeFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnUserIDChange();
} */
/*static void _OnUserIDSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnUserIDSetfocus();} */ 
/*static void _OnUserIDKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnUserIDKillfocus();
} */
static int _OnUserIDCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnUserIDCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup_V2* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnUserNameChangeFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnUserNameChange();
} */
/*static void _OnUserNameSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnUserNameSetfocus();} */ 
/*static void _OnUserNameKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnUserNameKillfocus();
} */
static int _OnUserNameCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnUserNameCheckValue();
} 
/*static void _OnPasswordChangeFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnPasswordChange();
} */
/*static void _OnPasswordSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnPasswordSetfocus();} */ 
/*static void _OnPasswordKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnPasswordKillfocus();
} */
static int _OnPasswordCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnPasswordCheckValue();
} 
/*static void _OnConfirmChangeFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnConfirmChange();
} */
/*static void _OnConfirmSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnConfirmSetfocus();} */ 
/*static void _OnConfirmKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnConfirmKillfocus();
} */
static int _OnConfirmCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnConfirmCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CSysUserSetup_V2 *pVw = (CSysUserSetup_V2 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSysUserSetup_V2 *pVw = (CSysUserSetup_V2 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSysUserSetup_V2 *pVw = (CSysUserSetup_V2 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysUserSetup_V2 *pVw = (CSysUserSetup_V2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSysUserSetup_V2 *pVw = (CSysUserSetup_V2 *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CSysUserSetup_V2 *pVw = (CSysUserSetup_V2 *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnAddSysUserSetup();
} 
static int _OnEditSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnEditSysUserSetup();
} 
static int _OnDeleteSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnDeleteSysUserSetup();
} 
static int _OnSaveSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnSaveSysUserSetup();
} 
static int _OnCancelSysUserSetupFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnCancelSysUserSetup();
} 

static int _OnUserAdditionPermissionFnc(CWnd *pWnd){
	 return ((CSysUserSetup_V2*)pWnd)->OnUserAdditionPermission();
}

static int _OnViewSignatureFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnViewSignature();
}

static int _OnManipulateUserFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnManipulateUser();
}
static int _OnDuplicateUserFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnDuplicateUser();
}

static int _OnExportSignatureUserFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnExportSignatureUser();
}

static int _OnDuplicateMultiUserFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2*)pWnd)->OnDuplicateMultiUser();
}
static int _OnZoneCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnZoneCheckValue();
} 
/*static void _OnSignIDChangeFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSignIDChange();
} */
/*static void _OnSignIDSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSignIDSetfocus();} */ 
/*static void _OnSignIDKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSignIDKillfocus();
} */
static int _OnSignIDCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnSignIDCheckValue();
} 
/*static void _OnSignCertChangeFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSignCertChange();
} */
/*static void _OnSignCertSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSignCertSetfocus();} */ 
/*static void _OnSignCertKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup_V2 *)pWnd)->OnSignCertKillfocus();
} */
static int _OnSignCertCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup_V2 *)pWnd)->OnSignCertCheckValue();
} 
static int _OnSoBHYTCheckValueFnc(CWnd *pWnd)
{
	return ((CSysUserSetup_V2 *)pWnd)->OnSoBHYTCheckValue();
}
static long _OnPosisionLoadDataFnc(CWnd *pWnd)
{
	return ((CSysUserSetup_V2 *)pWnd)->OnPosisionLoadData();
}

CSysUserSetup_V2::CSysUserSetup_V2()
{

	m_nDlgWidth = 815;
	m_nDlgHeight = 630;
	SetDefaultValues();
	m_szModules = _T("''");
	m_szUserStatus.Empty();
}
CSysUserSetup_V2::~CSysUserSetup_V2(){
}
void CSysUserSetup_V2::OnCreateComponents()
{
	m_wndPermissionInformation.Create(this, _T("Permission Information"), 410, 5, 805, 590);
	m_wndSearchDeptLabel.Create(this, _T("Search For Dept"), 10, 30, 115, 55);
	m_wndSearchDept.Create(this,120, 30, 400, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 10, 60, 115, 85);
	m_wndSearchName.Create(this,120, 60, 250, 85); 
	m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 405, 590);
	m_wndInactiveUser.Create(this, _T("Inactive user"), 0, 0, 0, 0);
	m_wndUserList.Create(this,10, 90, 400, 350); 
	m_wndUserIDLabel.Create(this, _T("User ID"), 10, 355, 95, 380);
	m_wndUserID.Create(this,100, 355, 200, 380); 
	m_wndGroupLabel.Create(this, _T("Group"), 205, 355, 275, 380);
	m_wndGroup.Create(this,280, 355, 400, 380); 
	m_wndUserNameLabel.Create(this, _T("User Name"), 10, 385, 95, 410);
	m_wndUserName.Create(this,100, 385, 400, 410); 
	m_wndPasswordLabel.Create(this, _T("Password"), 10, 415, 95, 440);
	m_wndPassword.Create(this,100, 415, 200, 440); 
	m_wndConfirmLabel.Create(this, _T("Confirm"), 205, 415, 275, 440);
	m_wndConfirm.Create(this,280, 415, 400, 440); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 445, 95, 470);
	m_wndDepartment.Create(this,100, 445, 400, 470); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 475, 95, 500);
	m_wndRoom.Create(this,100, 475, 400, 500); 
	m_wndCertificateLabel.Create(this, _T("Chứng chỉ HN"), 10, 505, 95, 530);
	m_wndCertificate.Create(this,100, 505, 400, 530); 
	m_wndZoneLabel.Create(this, _T("Zone"), 10, 535, 95, 560);
	m_wndZone.Create(this,100, 535, 400, 560); 
	m_wndPermList.Create(this,415, 30, 800, 585); 
	m_wndSoBHYTLabel.Create(this, _T("Số BHXH"), 10, 565, 95, 590);
	m_wndSoBHYT.Create(this,100, 565, 200, 590); 
	m_wndPosisionLabel.Create(this, _T("Loại ký số"), 205, 565, 275, 590);
	m_wndPosision.Create(this,280, 565, 400, 590); 
	m_wndAdd.Create(this, _T("&Add"), 15, 595, 90, 620);
	m_wndEdit.Create(this, _T("&Edit"), 95, 595, 170, 620);
	m_wndDelete.Create(this, _T("&Delete"), 175, 595, 250, 620);
	m_wndSave.Create(this, _T("&Save"), 255, 595, 330, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 335, 595, 410, 620);
	m_wndApply.Create(this, _T("&Apply"), 730, 595, 805, 620);
	m_wndGroupPer.Create(this, _T("Nhóm quyền"), 630, 595, 720, 620);
	m_wndSignIDLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndSignID.Create(this,0, 0, 0, 0); 
	m_wndSignCertLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndSignCert.Create(this,0, 0, 0, 0);

}
void CSysUserSetup_V2::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndSearchDept.SetCheckValue(true);
	m_wndSearchDept.LimitText(81);
	m_wndSearchName.SetLimitText(65);
	//m_wndSearchName.SetCheckValue(true);
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
	m_wndZone.SetLimitText(35);
	m_wndSignID.SetLimitText(32);
	m_wndSignCert.SetLimitText(2000);

	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 80);
	m_wndUserList.InsertColumn(1, _T("User Name"), CFMT_TEXT, 180);
	m_wndUserList.InsertColumn(2, _T("Department"), CFMT_TEXT, 100);
	m_wndUserList.InsertColumn(3, _T("PID"), CFMT_TEXT, 0);
	m_wndUserList.InsertColumn(4, _T(""), CFMT_TEXT, 0);
	


	m_wndPermList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPermList.InsertColumn(1, _T("Module"), CFMT_TEXT,60);
	m_wndPermList.InsertColumn(2, _T("Name"), CFMT_TEXT, 500);
	m_wndPermList.SetCheckBox(true);
	m_wndPermList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndSearchDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndSearchDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndDepartment.InsertColumn(2, _T("type"), CFMT_TEXT, 0);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	
	m_wndPosision.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPosision.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_sys_userTbl.SetTableName(_T("sys_user"));
	m_sys_userTbl.AddField(_T("su_userid"), dfText, 15); 
	m_sys_userTbl.AddField(_T("su_groupid"), dfText, 1); 
	m_sys_userTbl.AddField(_T("SU_ZONEFORDEPT"), dfText, 15);

	m_sys_userTbl.AddField(_T("su_name"), dfText, 65); 
	m_sys_userTbl.AddField(_T("su_password"), dfText, 81); 
	m_sys_userTbl.AddField(_T("su_deptid"), dfText, 7); 
	m_sys_userTbl.AddField(_T("su_roomid"), dfInteger); 
	m_sys_userTbl.AddField(_T("su_certificate"), dfText, 35);
	m_sys_userTbl.AddField(_T("su_position"), dfText, 15); 
	m_sys_userTbl.AddField(_T("su_sobhyt"), dfText, 10); 
	m_sys_userTbl.AddField(_T("SU_SIGNATUREID"), dfText, 32); 
	m_sys_userTbl.AddField(_T("SU_SIGN_CERT"), dfText, 2000); 



	m_sys_userpermTbl.SetTableName(_T("sys_userperm"));
	m_sys_userpermTbl.AddField(_T("sup_userid"), dfText, 15); 
	m_sys_userpermTbl.AddField(_T("sup_permid"), dfText, 15); 
	m_sys_userpermTbl.AddField(_T("sup_moduleid"), dfText, 11); 

	//m_wndPassword.ModifyStyle(0, ES_PASSWORD);
	//m_wndConfirm.ModifyStyle(0, ES_PASSWORD);

	m_wndPassword.SetPassword(TRUE);
	m_wndConfirm.SetPassword(TRUE);
	m_szSearchDeptKey = _T("KD");
	
	
}
void CSysUserSetup_V2::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
#ifdef UNICODE
	m_wndUserList.SetWindowText(_T("User List"));	

	//m_wndPermList.AddEvent(1, _T("Search mã quyền"), _OnPermListSearchFnc);
	//m_wndPermList.AddEvent(0, _T("-"));
	//m_wndPermList.AddEvent(2, _T("Search tên quyền"), _OnPermListSearchByNameFnc);

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
	m_wndInactiveUser.SetEvent(WE_CLICK, _OnInactiveUserSelectFnc);
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
	m_wndZone.SetEvent(WE_CHECKVALUE, _OnZoneCheckValueFnc);


	m_wndSoBHYT.SetEvent(WE_CHECKVALUE, _OnSoBHYTCheckValueFnc);
	m_wndPosision.SetEvent(WE_LOADDATA, _OnPosisionLoadDataFnc);

	//m_wndSignID.SetEvent(WE_CHANGE, _OnSignIDChangeFnc);
	//m_wndSignID.SetEvent(WE_SETFOCUS, _OnSignIDSetfocusFnc);
	//m_wndSignID.SetEvent(WE_KILLFOCUS, _OnSignIDKillfocusFnc);
	m_wndSignID.SetEvent(WE_CHECKVALUE, _OnSignIDCheckValueFnc);
	//m_wndSignCert.SetEvent(WE_CHANGE, _OnSignCertChangeFnc);
	//m_wndSignCert.SetEvent(WE_SETFOCUS, _OnSignCertSetfocusFnc);
	//m_wndSignCert.SetEvent(WE_KILLFOCUS, _OnSignCertKillfocusFnc);
	m_wndSignCert.SetEvent(WE_CHECKVALUE, _OnSignCertCheckValueFnc);
	//m_wndGroupPer.SetEvent(WE_CLICK, _OnGroupPerSelectFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSysUserSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSysUserSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSysUserSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSysUserSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSysUserSetupFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	//OnUserListLoadData();
	m_mSkipPermID[_T("EM")] = _T("05.06,05.07,05.08,05.10");
	m_mSkipPermID[_T("PM")] = _T("10.14");
	m_mSkipPermID[_T("SYS")] = _T("01.05,01.09,01.10,01.11,01.12");
	OnUserListLoadData();
	
	
}
void CSysUserSetup_V2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSearchDept.GetDlgCtrlID(), m_szSearchDeptKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Check(pDX, m_wndInactiveUser.GetDlgCtrlID(), m_bInactiveUser);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Text(pDX, m_wndUserID.GetDlgCtrlID(), m_szUserID);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndUserName.GetDlgCtrlID(), m_szUserName);
	DDX_Text(pDX, m_wndPassword.GetDlgCtrlID(), m_szPassword);
	DDX_Text(pDX, m_wndConfirm.GetDlgCtrlID(), m_szConfirm);
	DDX_Text(pDX, m_wndCertificate.GetDlgCtrlID(), m_szCertificate);
	DDX_Text(pDX, m_wndZone.GetDlgCtrlID(), m_szZone);

	DDX_Text(pDX, m_wndSoBHYT.GetDlgCtrlID(), m_szSoBHYT);
	DDX_TextEx(pDX, m_wndPosision.GetDlgCtrlID(), m_szPosisionKey);

	DDX_Text(pDX, m_wndSignID.GetDlgCtrlID(), m_szSignID);
	DDX_Text(pDX, m_wndSignCert.GetDlgCtrlID(), m_szSignCert);

}
void CSysUserSetup_V2::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
		rs.GetValue(_T("su_certificate"), m_szCertificate);

		
		rs.GetValue(_T("su_hms_pmmodule"), m_szPMModule);		
		
		rs.GetValue(_T("SU_ZONEFORDEPT"), m_szZone);

		rs.GetValue(_T("su_password"), m_szPassword);
		rs.GetValue(_T("su_position"), m_szPosisionKey);

		rs.GetValue(_T("SU_SIGNATUREID"), m_szSignID);
		rs.GetValue(_T("SU_SIGN_CERT"), m_szSignCert);

		rs.GetValue(_T("SU_HMS_OEM"), m_szOEMModule);
		//_msg(_T("%s"), m_szOEMModule);

		m_szConfirm = m_szPassword;
		//pMF->SetStatusText(_T(""), 0);
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
	GetScreenToData();
}
void CSysUserSetup_V2::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
#ifndef UNICODE
	CString szSQL, szPassword;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select md5('%s') "), m_szPassword);
	rs.ExecSQL(szSQL);
	m_szPassword = rs.GetStringValue();
#endif
*/
	m_sys_userTbl.SetValue(_T("su_userid"), m_szUserID);	
	m_sys_userTbl.SetValue(_T("su_groupid"), m_szGroupKey);
	
	m_sys_userTbl.SetValue(_T("su_password"), m_szPassword);
	m_sys_userTbl.SetValue(_T("su_deptid"), m_szDepartmentKey);
	m_sys_userTbl.SetValue(_T("su_roomid"), m_szRoomKey);
	m_sys_userTbl.SetValue(_T("su_name"), m_szUserName);
	m_sys_userTbl.SetValue(_T("su_certificate"), m_szCertificate);
	m_sys_userTbl.SetValue(_T("SU_ZONEFORDEPT"), m_szZone);

	m_sys_userTbl.SetValue(_T("su_position"), m_szPosisionKey);
	m_sys_userTbl.SetValue(_T("su_sobhyt"), m_szSoBHYT);

	m_sys_userTbl.SetValue(_T("SU_SIGNATUREID"), m_szSignID);
	m_sys_userTbl.SetValue(_T("SU_SIGN_CERT"), m_szSignCert);

	if (GetMode() == VM_VIEW)
	{
		m_parser.PushRowData(&m_sys_userTbl);
	}
	else if (GetMode() == VM_EDIT)
	{
		m_parser.PushRowData(&m_sys_userTbl, true);
	}
	
}
void CSysUserSetup_V2::SetDefaultValues(){

	//m_szSearchDeptKey.Empty();
	m_szSearchName.Empty();
	if (GetMode() == VM_NONE)
		m_szDepartmentKey.Empty();
	m_bInactiveUser = FALSE;
	m_szRoomKey.Empty();

	m_szUserID.Empty();
	m_szGroupKey.Empty();
	m_szUserName.Empty();
	m_szPassword.Empty();
	m_szConfirm.Empty();
	m_szCertificate.Empty();
	m_szZone.Empty();

	m_szPosisionKey.Empty();
	m_szSoBHYT.Empty();


	m_szSignID.Empty();
	m_szSignCert.Empty();

}
int CSysUserSetup_V2::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
		m_wndDelete.EnableWindow(false);
		m_wndAdd.EnableWindow(false);
		m_wndEdit.EnableWindow(false);
		m_wndSearchDept.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CSysUserSetup_V2::OnUserListDblClick(){
	
} 
int CSysUserSetup_V2::OnUserListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return 0;
	m_szUserID = m_wndUserList.GetItemText(nNewItem, 0);
	m_szUserStatus = m_wndUserList.GetItemText(nNewItem, 4);
	GetDataToScreen();
	return 0;
}
int CSysUserSetup_V2::OnZoneCheckValue(){
	return 0;
} 
/*void CSysUserSetup_V2::OnSignIDChange(){
	
} */
/*void CSysUserSetup_V2::OnSignIDSetfocus(){
	
} */
/*void CSysUserSetup_V2::OnSignIDKillfocus(){
	
} */
int CSysUserSetup_V2::OnSignIDCheckValue(){
	return 0;
} 
/*void CSysUserSetup_V2::OnSignCertChange(){
	
} */
/*void CSysUserSetup_V2::OnSignCertSetfocus(){
	
} */
/*void CSysUserSetup_V2::OnSignCertKillfocus(){
	
} */
int CSysUserSetup_V2::OnSignCertCheckValue(){
	return 0;
} 


int CSysUserSetup_V2::OnUserListAddSignature()
{
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
		if(file.GetLength() > 240*120)
		{
			ShowMessageBox(_T("Image too large."));
			file.Close();
			return 0;			
		}
		else
			file.Close();

		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		bool res = pMF->lo_import(szFileName, dlg.GetPathName());
		//_msg(_T("%d: %s: %s"), res, szFileName, dlg.GetPathName());

	}
	return 0;
} 

long CSysUserSetup_V2::OnUserListLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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

	while(!rs.IsEOF())
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




void CSysUserSetup_V2::OnPermListDblClick()
{
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
void CSysUserSetup_V2::OnPermListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
void CSysUserSetup_V2::OnPermListChange(){

	
}
int CSysUserSetup_V2::OnPermListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
#include "StringToken.h"
long CSysUserSetup_V2::OnPermListLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPermID, szType, szOldPermID, szSub, szModule,szWhere,szWhere1;
	if(m_szUserID.IsEmpty())
		return 0;
	szWhere.Empty();

	
	if(m_szPMModule == _T("1"))
	{	
		if(!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'PM'");
	}	

	if(szWhere.IsEmpty())
		szWhere.Format(_T("'XX'"));

	if (pMF->GetCurrentUser() != _T("admin"))
		szWhere1.AppendFormat(_T(" AND sp_moduleid <> 'SYS'"));

	szWhere1.Format(_T(" AND sp_moduleid = 'PM'"));


	szSQL.Format(_T(" SELECT  DISTINCT sp_id,sp_moduleid,sp_name, sp_type, ") \
				_T("                 CASE WHEN sp_moduleid = 'PM' THEN 4 ") \
				_T("                 ELSE 12 END AS idx, ") \
				_T("			CASE WHEN sp_moduleid = sup_moduleid AND sup_permid IS NOT NULL THEN 'Y'  ELSE 'N'  END AS sp_permflg ") \
				_T(" FROM      sys_permission ") \
				_T(" LEFT JOIN sys_userperm ON( sp_id = sup_permid AND sp_moduleid = sup_moduleid AND sup_userid = '%s' ) ") \
				_T(" WHERE     sp_moduleid IN ( SELECT regexp_substr(GetModulePermissions('%s'),'[^,]+',1,LEVEL) AS val FROM dual ") \
				_T("		CONNECT BY regexp_substr(GetModulePermissions('%s'),'[^,]+',1,LEVEL) IS NOT NULL") \
				_T("		)  %s ORDER  BY Cast(idx AS INTEGER), sp_moduleid, sp_id ")
				, m_szUserID, m_szUserID, m_szUserID, szWhere1);
	//szSQL = GetPermListQueryString(szWhere);

	//m_wndPermList.DeleteAllItems(); 
	int nCount = 0;
	int nItem = 0;
	nCount = rs.ExecSQL(szSQL);

	szOldPermID.Empty();
	m_wndPermList.BeginLoad();
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("sp_moduleid"), szModule);
		rs.GetValue(_T("sp_permflg"), tmpStr);
		rs.GetValue(_T("sp_id"), szPermID);
		rs.GetValue(_T("sp_type"), szType);
		szSub.Empty();
		for(int i=0; i < szPermID.GetLength(); i++)
		{
			szSub += _T(" ");
		}
		szOldPermID = szPermID;
		nItem = m_wndPermList.AddItems
	(
			szPermID,
			rs.GetValue(_T("sp_moduleid")),
			szSub+rs.GetValue(_T("sp_name")), NULL);
		if(tmpStr == _T("Y"))
			m_wndPermList.SetCheck(nItem, TRUE);
		if(szPermID.GetLength() == 2)
			m_wndPermList.SetItemBkColor(nItem, COLOR_BORDER, FALSE);
		if (szType == _T("A"))
		{
			m_wndPermList.SetItemBkColor(nItem, RGB(128, 0, 0), FALSE);
			m_wndPermList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}

		tmpStr.Empty();
		rs.MoveNext();
	}
	m_wndPermList.EndLoad();
	SkipPermission(&m_wndPermList);
	return nCount;
}

void CSysUserSetup_V2::SkipPermission(CGuiListCtrl *pList){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CArray<int, int> arr_ItemSkip;
	CString szModuleID, tmpStr;
	for (int i = 0; i < pList->GetItemCount(); i++){
		szModuleID = pList->GetItemText(i, 1);
		if (!m_mSkipPermID.Lookup(szModuleID, tmpStr))
			continue;
		if (szModuleID == _T("SYS") && pMF->GetCurrentUser() == _T("admin"))
			continue;
		CStringToken token(tmpStr);
		for (int j = 0; j < token.GetSize(); j++){
			token.GetAt(j, tmpStr);
			if (tmpStr == pList->GetItemText(i, 0))
				arr_ItemSkip.Add(i);
		}
	}
	for (int i = 0; i < arr_ItemSkip.GetCount(); i++)
		pList->DeleteItem(arr_ItemSkip.GetAt(i) - i);
}

CString CSysUserSetup_V2::GetPermListQueryString(CString szWhere){
	CString szSQL;
	szSQL.Format(_T("WITH tbl0") \
		_T("     AS (SELECT    DISTINCT sp_id,sp_moduleid,sp_name,") \
		_T("					CASE WHEN sp_moduleid = 'RM' THEN 1") \
		_T("                    WHEN sp_moduleid = 'EM' THEN 2") \
		_T("                    WHEN sp_moduleid = 'TM' THEN 3") \
		_T("                    WHEN sp_moduleid = 'PM' THEN 4") \
		_T("                    WHEN sp_moduleid = 'FM' THEN 5") \
		_T("                    WHEN sp_moduleid = 'LIMS' THEN 6") \
		_T("                    WHEN sp_moduleid = 'PACS' THEN 7") \
		_T("                    WHEN sp_moduleid = 'SMM' THEN 8") \
		_T("                    WHEN sp_moduleid = 'WM' THEN 9") \
		_T("                    WHEN sp_moduleid = 'BB' THEN 10") \
		_T("                    WHEN sp_moduleid = 'FAM' THEN 11") \
		_T("                    ELSE 12") \
		_T("                    END AS idx,CASE WHEN sp_moduleid = sup_moduleid AND sup_permid IS NOT NULL THEN 'Y'") \
		_T("                    ELSE 'N'") \
		_T("                    END AS sp_permflg") \
		_T("         FROM      sys_permission") \
		_T("         LEFT JOIN sys_userperm ON( sp_id = sup_permid AND sp_moduleid = sup_moduleid AND sup_userid = '%s' )") \
		_T("         WHERE     sp_moduleid IN ( %s, 'EM', 'PM', 'SYS' )  ") \
		_T("        )"), m_szUserID, szWhere);
	
	szSQL.AppendFormat(
		_T("SELECT *") \
		_T("FROM   (SELECT *") \
		_T("        FROM   tbl0") \
		_T("        )") \
		_T("ORDER  BY Cast(idx AS INTEGER),") \
		_T("          sp_moduleid,") \
		_T("          sp_id "));
	return szSQL;
}

void CSysUserSetup_V2::OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CSysUserSetup_V2::OnSearchDeptSelendok()
{
	UpdateData(true);
	OnUserListLoadData();
}
/*void CSysUserSetup_V2::OnSearchDeptSetfocus(){
	
}*/
/*void CSysUserSetup_V2::OnSearchDeptKillfocus(){
	
}*/
long CSysUserSetup_V2::OnSearchDeptLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CSysUserSetup_V2::OnSearchDeptAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CSysUserSetup_V2::OnSearchNameChange()
{
	UpdateData(TRUE);
	OnUserListLoadData();
}
/*void CSysUserSetup_V2::OnSearchNameSetfocus(){
	
} */
/*void CSysUserSetup_V2::OnSearchNameKillfocus(){
	
} */
int CSysUserSetup_V2::OnSearchNameCheckValue(){
	//OnUserListLoadData();
	//m_wndUserList.SetCurSel(0);
	return 0;
} 

void CSysUserSetup_V2::OnInactiveUserSelect(){
	OnUserListLoadData();
}

int CSysUserSetup_V2::OnEmptyUser()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	CString szUser = pMF->GetCurrentUser();
	szSQL.Format(_T("hvlinh_account_delete('%s', '%s')"), szUser, m_szUserID);
	int nRet = str2int(pMF->ExecDML(szSQL));
	_tprintf(_T("\nnRet:%d"), nRet);
	if (nRet > 0)
	{
		AfxMessageBox(_T("Permission apply successfull"));
	}

	OnUserListLoadData();
	return 0;
}

void CSysUserSetup_V2::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CSysUserSetup_V2::OnDepartmentSelendok(){
	 
}
/*void CSysUserSetup_V2::OnDepartmentSetfocus(){
	
}*/
/*void CSysUserSetup_V2::OnDepartmentKillfocus(){
	
}*/
long CSysUserSetup_V2::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T("AND sd_id='%s' "), m_szDepartmentKey);
	};
	
	/*if (pMF->GetCurrentUser().CompareNoCase(_T("admin")) != 0)
	{
		szWhere.AppendFormat(_T("AND sd_id NOT IN ('C1.2')"));
	};*/

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name, sd_type as dept_type FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);

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
/*void CSysUserSetup_V2::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CSysUserSetup_V2::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CSysUserSetup_V2::OnRoomSelendok(){
	 
}
/*void CSysUserSetup_V2::OnRoomSetfocus(){
	
}*/
/*void CSysUserSetup_V2::OnRoomKillfocus(){
	
}*/
long CSysUserSetup_V2::OnRoomLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CSysUserSetup_V2::OnRoomAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CSysUserSetup_V2::OnUserIDChange(){
	
} */
/*void CSysUserSetup_V2::OnUserIDSetfocus(){
	
} */
/*void CSysUserSetup_V2::OnUserIDKillfocus(){
	
} */
int CSysUserSetup_V2::OnUserIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr = m_szUserID;
_debug(_T("%s"), tmpStr);
	StringLower(tmpStr, m_szUserID);
_debug(_T("%s"), m_szUserID);
	UpdateData(false);
	if(GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT COUNT(*) FROM v_user WHERE user_id='%s'"), m_szUserID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
			return -1;
	}
	return 0;
} 
void CSysUserSetup_V2::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CSysUserSetup_V2::OnGroupSelendok(){
	 
}
/*void CSysUserSetup_V2::OnGroupSetfocus(){
	
}*/
/*void CSysUserSetup_V2::OnGroupKillfocus(){
	
}*/
long CSysUserSetup_V2::OnGroupLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CSysUserSetup_V2::OnGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CSysUserSetup_V2::OnUserNameChange(){
	
} */
/*void CSysUserSetup_V2::OnUserNameSetfocus(){
	
} */
/*void CSysUserSetup_V2::OnUserNameKillfocus(){
	
} */
int CSysUserSetup_V2::OnUserNameCheckValue(){
	return 0;
} 
/*void CSysUserSetup_V2::OnPasswordChange(){
	
} */
/*void CSysUserSetup_V2::OnPasswordSetfocus(){
	
} */
/*void CSysUserSetup_V2::OnPasswordKillfocus(){
	
} */
int CSysUserSetup_V2::OnPasswordCheckValue(){
	return 0;
} 
/*void CSysUserSetup_V2::OnConfirmChange(){
	
} */
/*void CSysUserSetup_V2::OnConfirmSetfocus(){
	
} */
/*void CSysUserSetup_V2::OnConfirmKillfocus(){
	
} */
int CSysUserSetup_V2::OnConfirmCheckValue(){
	if(m_szPassword != m_szConfirm)
		return -1;
	return 0;

} 
void CSysUserSetup_V2::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddSysUserSetup();

} 
void CSysUserSetup_V2::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditSysUserSetup();

} 
void CSysUserSetup_V2::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteSysUserSetup();

} 
void CSysUserSetup_V2::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveSysUserSetup();

} 
void CSysUserSetup_V2::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelSysUserSetup();

} 
void CSysUserSetup_V2::OnApplySelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szPerm_ids;
	if(m_szUserID.IsEmpty())
		return;
	CString szUser = pMF->GetCurrentUser();
	szPerm_ids.Empty();

	for (int i = 0; i < m_wndPermList.GetItemCount(); i++)
	{
		if (!m_wndPermList.GetCheck(i))
		{
			continue;
		}
		if (!szPerm_ids.IsEmpty())
		{
			szPerm_ids += _T(",");
		}
		szPerm_ids.AppendFormat(_T("%s|%s"), m_wndPermList.GetItemText(i, 1), m_wndPermList.GetItemText(i, 0));
	}

	szSQL.Format(_T("PM_ADD_PERMISSION('%s', '%s', '%s')"),
					m_szUserID, szPerm_ids, szUser);
	int nRet = str2int(pMF->ExecDML(szSQL));
	_tprintf(_T("\nnRet:%d"), nRet);
	if (nRet > 0)
	{
		AfxMessageBox(_T("Permission apply successfull"));
	}
	return;
	 
	{
		szSQL.Format(_T("DELETE FROM sys_userperm  ") \
				_T("	WHERE sup_userid='%s' and sup_moduleid in ('PM')"), m_szUserID);               
	}
	pMF->ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	for (int i = 0; i < m_wndPermList.GetItemCount(); i++)
	{
		if (m_wndPermList.GetCheck(i))
		{
			m_sys_userpermTbl.SetValue(_T("sup_userid"), m_szUserID);
			m_sys_userpermTbl.SetValue(_T("sup_permid"), m_wndPermList.GetItemText(i, 0));
			m_sys_userpermTbl.SetValue(_T("sup_moduleid"), m_wndPermList.GetItemText(i, 1));
			szSQL.Format(_T("%s"), m_sys_userpermTbl.GetInsertSQL());
			pMF->ExecSQL(szSQL);
		}
	}
	AfxMessageBox(_T("Permission apply successfull"));
} 

int CSysUserSetup_V2::OnAddSysUserSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;


	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CString szCurrentUser = pMF->GetCurrentUser();
	//if(szCurrentUser.CompareNoCase(_T("Admin")) != 0)
		//return 0;

	SetMode(VM_ADD);
	return 0;  
} 
int CSysUserSetup_V2::OnEditSysUserSetup()
{
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();


	if(m_szUserID.IsEmpty())
		return -1;
	CString szCurrentUser = pMF->GetCurrentUser();
	/*if(szCurrentUser.CompareNoCase(_T("Admin")) != 0 )
		return -1;*/

	if(!pMF->CheckPermission(_T("01.03")))
		{
			return -1;
		}

	if(GetMode() != VM_VIEW)
		return -1;
	/*//pMF->SetStatusText(m_szPassword, 0);	
	SetMode(VM_EDIT);
	return 0;*/

	//pMF->SetStatusText(_T("Vì quyền riêng tư của người sử dụng"), 0);
	_tprintf(_T("\r\n Password: %s"),m_szPassword);
	SetMode(VM_EDIT);
	return 0; 
} 
int CSysUserSetup_V2::OnDeleteSysUserSetup(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szCurrentUser = pMF->GetCurrentUser();
	CRecord rs(&pMF->m_db);
	
 	if(GetMode() != VM_VIEW)
		return -1;
	
	if(m_szUserID.MakeUpper() ==	_T("ADMIN"))
		return -1;
	
	CString szSQL;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
		return -1;
	//Kt Bn da dc cap quyen thi k xoa
	szSQL.Format(_T("SELECT count(*) FROM sys_userperm WHERE lower(sup_userid) = lower('%s')"), m_szUserID);
	rs.ExecSQL(szSQL);
	int ret = rs.GetIntValue();
	if (ret > 0 || ret < 0)
		return -1;
	szSQL.Format(_T("DELETE FROM sys_userperm WHERE lower(sup_userid)=lower('%s')"), m_szUserID);
	ret = pMF->ExecSQL(szSQL);
	szSQL.Format(_T("DELETE FROM sys_user WHERE lower(su_userid)=lower('%s')"), m_szUserID);
	//_fmsg(_T("%s"), szSQL);
	ret = pMF->ExecSQL(szSQL);
	if(ret > 0){
		SetMode(VM_NONE);
		OnCancelSysUserSetup();
		m_wndUserList.DeleteItem(m_wndUserList.GetCurSel());
	}
	return 0;

 } 
int CSysUserSetup_V2::OnSaveSysUserSetup(){
	int nMode = GetMode();
 	if(nMode != VM_ADD && nMode != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL,szWhere, szEvent, szDescr;	
	/*szWhere.Format(_T(" WHERE su_userid='%s' "), m_szUserID);
	
	if(nMode == VM_ADD)
	{
		szSQL = m_sys_userTbl.GetInsertSQL();
	}
	else
	{
		CString szUser = pMF->GetCurrentUser();
		szUser.MakeLower();
		if(szUser == _T("admin") )
			szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid"));
		else
			szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid,su_password"));
		szSQL += szWhere;

	}*/
	CString szUser = pMF->GetCurrentUser();
	if(szUser == _T("admin") )
	{
		szWhere.Format(_T(" WHERE su_userid='%s' "), m_szUserID);
	}
	else
	{
		szWhere.Format(_T(" WHERE su_userid='%s' AND su_userid <> 'admin'"), m_szUserID);
	}
	
	if(nMode == VM_ADD)
	{
		szSQL = m_sys_userTbl.GetInsertSQL();
		szEvent = _T("sys_user_create");
		szDescr.Format(_T("[su_userid=%s]"), m_szUserID);
		pMF->SystemLog(szEvent, szDescr);
	}
	else
	{
		CString szUser = pMF->GetCurrentUser();
		szUser.MakeLower();
		if(szUser == _T("admin") )
			szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid"));
		else
			szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid"));
		szSQL += szWhere;

	}

	int ret = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if(ret > 0)
	{
		CString szRowChange = m_parser.GetRowChange();
		if (!szRowChange.IsEmpty())
		{
			szEvent.Format(_T("sys_user_edit"));
			szDescr.Format(_T("[su_userid=%s] %s"), m_szUserID, szRowChange);
			pMF->SystemLog(szEvent, szDescr);
		}
		SetMode(VM_VIEW);
		OnUserListLoadData();
	}
	return ret;

}
int CSysUserSetup_V2::OnCancelSysUserSetup()
{
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
int CSysUserSetup_V2::OnSysUserSetupListLoadData(){
	return 0;
}

int CSysUserSetup_V2::OnUserAdditionPermission(){
	//CVIMESPermissionPACS dlg(this);
	//dlg.m_szUserID = m_szUserID;
	//dlg.DoModal();
	return 0;
}
void CSysUserSetup_V2::Refresh()
{
	static bool bLoaded = false;
	if (!bLoaded)
	{
		OnUserListLoadData();
		bLoaded = true;
	}
}

int CSysUserSetup_V2::OnExportSignatureUser(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szPath;
	GetFolder(szPath, _T("Image Folder"));
	CString szUserId, szFile, szName;
	for (int i=0; i < m_wndUserList.GetItemCount(); i++)
	{
		szUserId = m_wndUserList.GetItemText(i, 0);
		szName.Format(_T("HMS_%s.jpg"), szUserId);
		szFile.Format(_T("%s\\%s.jpg"), szPath, szUserId);
_tprintf(_T("\r\n%s"), szFile);
		pMF->lo_export(szName, szFile);
	}
	return 0;
}

void CSysUserSetup_V2::OnDeleteSignature()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("DELETE FROM sys_filedir WHERE sfd_name='HMS_%s.jpg'"),
			m_szUserID);
	pMF->ExecSQL(szSQL);
}

CString CSysUserSetup_V2::GetQueryString_user(bool bExport)
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
		szWhere.AppendFormat(_T(" AND lower(su_userid) <> 'admin'"));

	szSQL.Format(_T("SELECT * FROM sys_user WHERE 0=0 %s ORDER BY su_userid"), szWhere);
	if (bExport)
	{
		szSQL.Format(_T("SELECT su_userid as user_id, su_name as user_name, su_deptid as dept, ss_desc as nametype, SU_CERTIFICATE as cchn, GET_SYSSEL_DESC_V2('su_practising_range', su_practising_range) AS pvhn ") \
					_T(" FROM sys_user left join sys_sel ON (su_groupid = ss_code AND ss_id='sys_user_group')  WHERE 0=0 %s ORDER BY su_userid"), szWhere);	
	}
	return szSQL;
}

int CSysUserSetup_V2::OnUserListExport()
{
	CExcel xls;
	bool bExport = true;
	CString szSQL = GetQueryString_user(bExport), szFileName = _T("Danh_sach_nguoi_su_dung"), szFilePath;
	JSONVALUE jFormat;
	CReportUtils ru;
	ru.Export(&xls, szSQL, szFileName, jFormat);
	szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szFilePath);
	return 0;
}
void CSysUserSetup_V2::OnPermListSearch()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndPermList);
	newPopup->m_nSearchCol = 0;
	newPopup->ShowPopup(&m_wndPermList);	
}
void CSysUserSetup_V2::OnPermListSearchByName()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndPermList);
	newPopup->m_nSearchCol = 2;
	newPopup->ShowPopup(&m_wndPermList);	
}

int CSysUserSetup_V2::OnSoBHYTCheckValue(){
	return 0;
} 

long CSysUserSetup_V2::OnPosisionLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPosision.IsSearchKey() && !m_szPosisionKey.IsEmpty())
	{
		szWhere.Format(_T("AND ss_code='%s' "), m_szPosisionKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_signature_position' %s ORDER BY ss_code"), szWhere);
	m_wndPosision.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPosision.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return 0;
}