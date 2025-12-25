#include "SysUserSetup.h"
#include "MainFrm.h"
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CSysUserSetup*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysUserSetup*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysUserSetup*)pWnd)->OnUserListDeleteItem();
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
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnInactiveUserSelectFnc(CWnd *pWnd){
	 ((CSysUserSetup*)pWnd)->OnInactiveUserSelect();
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
/*static void _OnCertificateChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnCertificateChange();
} */
/*static void _OnCertificateSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnCertificateSetfocus();} */ 
/*static void _OnCertificateKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnCertificateKillfocus();
} */
static int _OnCertificateCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnCertificateCheckValue();
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
/*static void _OnZoneChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnZoneChange();
} */
/*static void _OnZoneSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnZoneSetfocus();} */ 
/*static void _OnZoneKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnZoneKillfocus();
} */
static int _OnZoneCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnZoneCheckValue();
} 
/*static void _OnSignIDChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignIDChange();
} */
/*static void _OnSignIDSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignIDSetfocus();} */ 
/*static void _OnSignIDKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignIDKillfocus();
} */
static int _OnSignIDCheckValueFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnSignIDCheckValue();
} 
static void _OnSignPartSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysUserSetup* )pWnd)->OnSignPartSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSignPartSelendokFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignPartSelendok();
}
/*static void _OnSignPartSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignPartKillfocus();
}*/
/*static void _OnSignPartKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignPartKillfocus();
}*/
static long _OnSignPartLoadDataFnc(CWnd *pWnd){
	return ((CSysUserSetup *)pWnd)->OnSignPartLoadData();
}
/*static void _OnSignPartAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignPartAddNew();
}*/
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
CSysUserSetup::CSysUserSetup(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSysUserSetup::~CSysUserSetup(){
}
void CSysUserSetup::OnCreateComponents(){
	m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 405, 590);
	m_wndPermissionInformation.Create(this, _T("Permission Information"), 410, 5, 805, 590);
	m_wndUserList.Create(this,10, 60, 400, 310); 
	m_wndPermList.Create(this,409, 30, 794, 585); 
	m_wndSearchDeptLabel.Create(this, _T("Dept"), 5, 30, 55, 55);
	m_wndSearchDept.Create(this,60, 30, 130, 55); 
	m_wndSearchNameLabel.Create(this, _T("Name"), 135, 30, 185, 55);
	m_wndSearchName.Create(this,190, 30, 285, 55); 
	m_wndInactiveUser.Create(this, _T("Inactive"), 290, 30, 404, 55);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 405, 95, 430);
	m_wndDepartment.Create(this,100, 405, 400, 430); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 435, 95, 460);
	m_wndRoom.Create(this,100, 435, 400, 460); 
	m_wndUserIDLabel.Create(this, _T("User ID"), 10, 315, 95, 340);
	m_wndUserID.Create(this,100, 315, 200, 340); 
	m_wndGroupLabel.Create(this, _T("Group"), 205, 315, 275, 340);
	m_wndGroup.Create(this,280, 315, 400, 340); 
	m_wndUserNameLabel.Create(this, _T("User Name"), 10, 345, 95, 370);
	m_wndUserName.Create(this,100, 345, 400, 370); 
	m_wndPasswordLabel.Create(this, _T("Password"), 10, 375, 95, 400);
	m_wndPassword.Create(this,100, 375, 200, 400); 
	m_wndConfirmLabel.Create(this, _T("Confirm"), 205, 375, 275, 400);
	m_wndConfirm.Create(this,280, 375, 400, 400); 
	m_wndCertificateLabel.Create(this, _T("Chứng chỉ HN"), 10, 465, 95, 490);
	m_wndCertificate.Create(this,100, 465, 200, 490); 
	m_wndAdd.Create(this, _T("&Add"), 5, 594, 80, 619);
	m_wndEdit.Create(this, _T("&Edit"), 85, 594, 160, 619);
	m_wndDelete.Create(this, _T("&Delete"), 165, 594, 240, 619);
	m_wndSave.Create(this, _T("&Save"), 245, 594, 320, 619);
	m_wndCancel.Create(this, _T("&Cancel"), 325, 594, 400, 619);
	m_wndApply.Create(this, _T("&Apply"), 730, 594, 805, 619);
	m_wndZoneLabel.Create(this, _T("Zone"), 205, 465, 275, 490);
	m_wndZone.Create(this,280, 465, 400, 490); 
	m_wndSignIDLabel.Create(this, _T("SignID"), 10, 495, 95, 520);
	m_wndSignID.Create(this,100, 495, 200, 520); 
	m_wndSignCertLabel.Create(this, _T("Sign Part"), 205, 495, 275, 520);
	m_wndSignPart.Create(this,280, 495, 400, 520); 
	m_wndSign1Image.Create(this, _T("Sign1Image"), 10, 525, 200, 585);
	m_wndSignImage.Create(this, _T("Sign2Image"), 205, 525, 400, 585);

}
void CSysUserSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchDept.SetCheckValue(true);
	m_wndSearchDept.LimitText(1024);
	m_wndSearchName.SetLimitText(1024);
	m_wndSearchName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndUserID.SetLimitText(1024);
	m_wndUserID.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndUserName.SetLimitText(1024);
	m_wndUserName.SetCheckValue(true);
	m_wndPassword.SetLimitText(1024);
	m_wndPassword.SetCheckValue(true);
	m_wndConfirm.SetLimitText(1024);
	m_wndConfirm.SetCheckValue(true);
	m_wndCertificate.SetLimitText(1024);
	m_wndCertificate.SetCheckValue(true);
	m_wndZone.SetLimitText(1024);
	m_wndZone.SetCheckValue(true);
	m_wndSignID.SetLimitText(1024);
	m_wndSignID.SetCheckValue(true);
	m_wndSignPart.SetCheckValue(true);
	m_wndSignPart.LimitText(1024);















}
void CSysUserSetup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
	m_wndUserList.AddEvent(1, _T("Delete"), _OnUserListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPermList.SetEvent(WE_SELCHANGE, _OnPermListSelectChangeFnc);
	m_wndPermList.SetEvent(WE_LOADDATA, _OnPermListLoadDataFnc);
	m_wndPermList.SetEvent(WE_DBLCLICK, _OnPermListDblClickFnc);
	m_wndPermList.AddEvent(1, _T("Delete"), _OnPermListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearchDept.SetEvent(WE_SELENDOK, _OnSearchDeptSelendokFnc);
	//m_wndSearchDept.SetEvent(WE_SETFOCUS, _OnSearchDeptSetfocusFnc);
	//m_wndSearchDept.SetEvent(WE_KILLFOCUS, _OnSearchDeptKillfocusFnc);
	m_wndSearchDept.SetEvent(WE_SELCHANGE, _OnSearchDeptSelectChangeFnc);
	m_wndSearchDept.SetEvent(WE_LOADDATA, _OnSearchDeptLoadDataFnc);
	//m_wndSearchDept.SetEvent(WE_ADDNEW, _OnSearchDeptAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
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
	//m_wndCertificate.SetEvent(WE_CHANGE, _OnCertificateChangeFnc);
	//m_wndCertificate.SetEvent(WE_SETFOCUS, _OnCertificateSetfocusFnc);
	//m_wndCertificate.SetEvent(WE_KILLFOCUS, _OnCertificateKillfocusFnc);
	m_wndCertificate.SetEvent(WE_CHECKVALUE, _OnCertificateCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	//m_wndZone.SetEvent(WE_CHANGE, _OnZoneChangeFnc);
	//m_wndZone.SetEvent(WE_SETFOCUS, _OnZoneSetfocusFnc);
	//m_wndZone.SetEvent(WE_KILLFOCUS, _OnZoneKillfocusFnc);
	m_wndZone.SetEvent(WE_CHECKVALUE, _OnZoneCheckValueFnc);
	//m_wndSignID.SetEvent(WE_CHANGE, _OnSignIDChangeFnc);
	//m_wndSignID.SetEvent(WE_SETFOCUS, _OnSignIDSetfocusFnc);
	//m_wndSignID.SetEvent(WE_KILLFOCUS, _OnSignIDKillfocusFnc);
	m_wndSignID.SetEvent(WE_CHECKVALUE, _OnSignIDCheckValueFnc);
	m_wndSignPart.SetEvent(WE_SELENDOK, _OnSignPartSelendokFnc);
	//m_wndSignPart.SetEvent(WE_SETFOCUS, _OnSignPartSetfocusFnc);
	//m_wndSignPart.SetEvent(WE_KILLFOCUS, _OnSignPartKillfocusFnc);
	m_wndSignPart.SetEvent(WE_SELCHANGE, _OnSignPartSelectChangeFnc);
	m_wndSignPart.SetEvent(WE_LOADDATA, _OnSignPartLoadDataFnc);
	//m_wndSignPart.SetEvent(WE_ADDNEW, _OnSignPartAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSysUserSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSysUserSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSysUserSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSysUserSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSysUserSetupFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CSysUserSetup::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Text(pDX, m_wndSignID.GetDlgCtrlID(), m_szSignID);
	DDX_TextEx(pDX, m_wndSignPart.GetDlgCtrlID(), m_szSignPartKey);

}
void CSysUserSetup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("SearchDept")] =  m_szSearchDeptKey;
	m_jData[_T("SearchName")] =  m_szSearchName;
	m_jData[_T("InactiveUser")] =  m_bInactiveUser;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("Room")] =  m_szRoomKey;
	m_jData[_T("UserID")] =  m_szUserID;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("UserName")] =  m_szUserName;
	m_jData[_T("Password")] =  m_szPassword;
	m_jData[_T("Confirm")] =  m_szConfirm;
	m_jData[_T("Certificate")] =  m_szCertificate;
	m_jData[_T("Zone")] =  m_szZone;
	m_jData[_T("SignID")] =  m_szSignID;
	m_jData[_T("SignPart")] =  m_szSignPartKey;
	}
	else
	{
			
	m_jData[_T("SearchDept")].GetValue(m_szSearchDeptKey);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	m_jData[_T("InactiveUser")].GetValue(m_bInactiveUser);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("Room")].GetValue(m_szRoomKey);
	m_jData[_T("UserID")].GetValue(m_szUserID);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("UserName")].GetValue(m_szUserName);
	m_jData[_T("Password")].GetValue(m_szPassword);
	m_jData[_T("Confirm")].GetValue(m_szConfirm);
	m_jData[_T("Certificate")].GetValue(m_szCertificate);
	m_jData[_T("Zone")].GetValue(m_szZone);
	m_jData[_T("SignID")].GetValue(m_szSignID);
	m_jData[_T("SignPart")].GetValue(m_szSignPartKey);
	}

}
void CSysUserSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysUserSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysUserSetup::SetDefaultValues(){

	m_szSearchDeptKey.Empty();
	m_szSearchName.Empty();
	m_bInactiveUser=FALSE;
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_szUserID.Empty();
	m_szGroupKey.Empty();
	m_szUserName.Empty();
	m_szPassword.Empty();
	m_szConfirm.Empty();
	m_szCertificate.Empty();
	m_szZone.Empty();
	m_szSignID.Empty();
	m_szSignPartKey.Empty();

}
int CSysUserSetup::SetMode(int nMode){
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
void CSysUserSetup::OnUserListDblClick(){
	
} 
void CSysUserSetup::OnUserListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserSetup::OnUserListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysUserSetup::OnUserListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndUserList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserList.AddItems(
		rs.MoveNext();
	}
	m_wndUserList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CSysUserSetup::OnPermListDblClick(){
	
} 
void CSysUserSetup::OnPermListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserSetup::OnPermListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysUserSetup::OnPermListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPermList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPermList.AddItems(
		rs.MoveNext();
	}
	m_wndPermList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CSysUserSetup::OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnSearchDeptSelendok(){
	 
}
/*void CSysUserSetup::OnSearchDeptSetfocus(){
	
}*/
/*void CSysUserSetup::OnSearchDeptKillfocus(){
	
}*/
long CSysUserSetup::OnSearchDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchDept.IsSearchKey() && !m_szSearchDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSearchDeptKey
};
	m_wndSearchDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchDept.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysUserSetup::OnSearchDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CSysUserSetup::OnSearchNameChange(){
	
} */
/*void CSysUserSetup::OnSearchNameSetfocus(){
	
} */
/*void CSysUserSetup::OnSearchNameKillfocus(){
	
} */
int CSysUserSetup::OnSearchNameCheckValue(){
	return 0;
} 
	void CSysUserSetup::OnInactiveUserSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CSysUserSetup::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnDepartmentSelendok(){
	 
}
/*void CSysUserSetup::OnDepartmentSetfocus(){
	
}*/
/*void CSysUserSetup::OnDepartmentKillfocus(){
	
}*/
long CSysUserSetup::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysUserSetup::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSysUserSetup::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnRoomSelendok(){
	 
}
/*void CSysUserSetup::OnRoomSetfocus(){
	
}*/
/*void CSysUserSetup::OnRoomKillfocus(){
	
}*/
long CSysUserSetup::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRoomKey
};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysUserSetup::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CSysUserSetup::OnUserIDChange(){
	
} */
/*void CSysUserSetup::OnUserIDSetfocus(){
	
} */
/*void CSysUserSetup::OnUserIDKillfocus(){
	
} */
int CSysUserSetup::OnUserIDCheckValue(){
	return 0;
} 
void CSysUserSetup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnGroupSelendok(){
	 
}
/*void CSysUserSetup::OnGroupSetfocus(){
	
}*/
/*void CSysUserSetup::OnGroupKillfocus(){
	
}*/
long CSysUserSetup::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupKey
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysUserSetup::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
	return 0;
} 
/*void CSysUserSetup::OnCertificateChange(){
	
} */
/*void CSysUserSetup::OnCertificateSetfocus(){
	
} */
/*void CSysUserSetup::OnCertificateKillfocus(){
	
} */
int CSysUserSetup::OnCertificateCheckValue(){
	return 0;
} 
void CSysUserSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CSysUserSetup::OnZoneChange(){
	
} */
/*void CSysUserSetup::OnZoneSetfocus(){
	
} */
/*void CSysUserSetup::OnZoneKillfocus(){
	
} */
int CSysUserSetup::OnZoneCheckValue(){
	return 0;
} 
/*void CSysUserSetup::OnSignIDChange(){
	
} */
/*void CSysUserSetup::OnSignIDSetfocus(){
	
} */
/*void CSysUserSetup::OnSignIDKillfocus(){
	
} */
int CSysUserSetup::OnSignIDCheckValue(){
	return 0;
} 
void CSysUserSetup::OnSignPartSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserSetup::OnSignPartSelendok(){
	 
}
/*void CSysUserSetup::OnSignPartSetfocus(){
	
}*/
/*void CSysUserSetup::OnSignPartKillfocus(){
	
}*/
long CSysUserSetup::OnSignPartLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSignPart.IsSearchKey() && !m_szSignPartKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSignPartKey
};
	m_wndSignPart.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSignPart.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysUserSetup::OnSignPartAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CSysUserSetup::OnAddSysUserSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysUserSetup::OnEditSysUserSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysUserSetup::OnDeleteSysUserSetup(){
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
 		OnCancelSysUserSetup();
 	}
	return 0;
}
int CSysUserSetup::OnSaveSysUserSetup(){
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
 		//OnSysUserSetupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysUserSetup::OnCancelSysUserSetup(){
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
int CSysUserSetup::OnSysUserSetupListLoadData(){
	return 0;
}
