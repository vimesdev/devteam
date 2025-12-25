#include "SysUserSetup.h"
#include "SysUserSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "GuiPictureCtrl.h"
#include "HMSPermissionDialog.h"
#include "HMSPermissionDialog_v2.h"
#include "VIMESPermissionPACS.h"
#include "PMSPermSetupDialog.h"
#include "HMSSignatureDialog.h"
#include "HMSCreateUser.h"
#include "CHMSCreateMultiUser.h"
#include "HMSExamTypePermSetupDialog.h"
#include "HMSPerformDeptPermSetupDialog.h"
#include "AdUserSetup.h"
#include "HMSExt/ReportUtils.h"
#include "SearchPopup.h"
//#include "RestClient.h"
#include "fml.h"

//#pragma comment(lib, "../lib/private/libcurl.lib")


static int _OnPermListSearchFnc(CWnd* pWnd)
{
	((CSysUserSetup*)pWnd)->OnPermListSearch();
	return 0;
}
static int _OnPermListSearchByNameFnc(CWnd* pWnd)
{
	((CSysUserSetup*)pWnd)->OnPermListSearchByName();
	return 0;
}

static long _OnUserListLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserListLoadData();
}
static void _OnUserListDblClickFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnUserListDblClick();
}
static void _OnUserListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CSysUserSetup*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
}
static int _OnUserListPermissionFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserListPermission();
}
static int _OnUserListAddSignatureFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserListAddSignature();
}

static int _OnUserListDeleteSignatureFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnDeleteSignature();
	return 0;
}
static int _OnUserListStockPermissionFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserListStockPermission();
}
static int _OnUserListExamTypePermissionFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserListExamTypePermission();
}
static int _OnUserListPerformDeptPermissionFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserListPerformDeptPermission();
}

static int _OnUserListExportFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserListExport();
}
static int _OnSetupAdUserFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnSetupAdUser();
	return 0;
}
static long _OnPermListLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnPermListLoadData();
}
static void _OnPermListDblClickFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnPermListDblClick();
}
static void _OnPermListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CSysUserSetup*)pWnd)->OnPermListSelectChange(nOldItem, nNewItem);
}
static int _OnPermListDeleteItemFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnPermListDeleteItem();
}
static void _OnPermListChangeFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnPermListChange();
}

static void _OnSearchDeptSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSysUserSetup*)pWnd)->OnSearchDeptSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSearchDeptSelendokFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnSearchDeptSelendok();
}
/*static void _OnSearchDeptSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchDeptKillfocus();
}*/
/*static void _OnSearchDeptKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchDeptKillfocus();
}*/
static long _OnSearchDeptLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnSearchDeptLoadData();
}
/*static void _OnSearchDeptAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchDeptAddNew();
}*/
static void _OnSearchNameChangeFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnSearchNameChange();
}
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSearchNameSetfocus();} */
	/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
		((CSysUserSetup *)pWnd)->OnSearchNameKillfocus();
	} */
static int _OnSearchNameCheckValueFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnSearchNameCheckValue();
}
static void _OnInactiveUserSelectFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnInactiveUserSelect();
}
static void _OnDepartmentSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSysUserSetup*)pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDepartmentSelendokFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSysUserSetup*)pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnRoomSelendokFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnRoomLoadData();
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
static int _OnUserIDCheckValueFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserIDCheckValue();
}
static void _OnGroupSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSysUserSetup*)pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnGroupSelendokFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnGroupLoadData();
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
static int _OnUserNameCheckValueFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserNameCheckValue();
}
/*static void _OnPasswordChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnPasswordChange();
} */
/*static void _OnPasswordSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnPasswordSetfocus();} */
	/*static void _OnPasswordKillfocusFnc(CWnd *pWnd){
		((CSysUserSetup *)pWnd)->OnPasswordKillfocus();
	} */
static int _OnPasswordCheckValueFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnPasswordCheckValue();
}
/*static void _OnConfirmChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnConfirmChange();
} */
/*static void _OnConfirmSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnConfirmSetfocus();} */
	/*static void _OnConfirmKillfocusFnc(CWnd *pWnd){
		((CSysUserSetup *)pWnd)->OnConfirmKillfocus();
	} */
static int _OnConfirmCheckValueFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnConfirmCheckValue();
}
/*static void _OnCertificateChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnCertificateChange();
} */
/*static void _OnCertificateSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnCertificateSetfocus();} */
	/*static void _OnCertificateKillfocusFnc(CWnd *pWnd){
		((CSysUserSetup *)pWnd)->OnCertificateKillfocus();
	} */
static void _OnPositionSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSysUserSetup*)pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnPositionSelendokFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnPositionAddNew();
}*/
static void _OnTitleSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSysUserSetup*)pWnd)->OnTitleSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTitleSelendokFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnTitleSelendok();
}
/*static void _OnTitleSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnTitleKillfocus();
}*/
/*static void _OnTitleKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnTitleKillfocus();
}*/
static long _OnTitleLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnTitleLoadData();
}
/*static void _OnTitleAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnTitleAddNew();
}*/
static void _OnAddGroupSelectFnc(CWnd* pWnd) {
	CSysUserSetup* pVw = (CSysUserSetup*)pWnd;
	pVw->OnAddGroupSelect();
}

static void _OnAddSelectFnc(CWnd* pWnd) {
	CSysUserSetup* pVw = (CSysUserSetup*)pWnd;
	pVw->OnAddSelect();
}
static void _OnEditSelectFnc(CWnd* pWnd) {
	CSysUserSetup* pVw = (CSysUserSetup*)pWnd;
	pVw->OnEditSelect();
}
static void _OnDeleteSelectFnc(CWnd* pWnd) {
	CSysUserSetup* pVw = (CSysUserSetup*)pWnd;
	pVw->OnDeleteSelect();
}
static void _OnSaveSelectFnc(CWnd* pWnd) {
	CSysUserSetup* pVw = (CSysUserSetup*)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd* pWnd) {
	CSysUserSetup* pVw = (CSysUserSetup*)pWnd;
	pVw->OnCancelSelect();
}
static void _OnApplySelectFnc(CWnd* pWnd) {
	CSysUserSetup* pVw = (CSysUserSetup*)pWnd;
	pVw->OnApplySelect();
}
static int _OnAddSysUserSetupFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnAddSysUserSetup();
}
static int _OnEditSysUserSetupFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnEditSysUserSetup();
}
static int _OnDeleteSysUserSetupFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnDeleteSysUserSetup();
}
static int _OnSaveSysUserSetupFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnSaveSysUserSetup();
}
static int _OnCancelSysUserSetupFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnCancelSysUserSetup();
}

static int _OnUserAdditionPermissionFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnUserAdditionPermission();
}

static int _OnViewSignatureFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnViewSignature();
}

static int _OnManipulateUserFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnManipulateUser();
}
static int _OnDuplicateUserFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnDuplicateUser();
}

static int _OnExportSignatureUserFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnExportSignatureUser();
}

static int _OnCreateCertificateFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnCreateCertificate();
}

static int _OnDuplicateMultiUserFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnDuplicateMultiUser();
}
static int _OnZoneCheckValueFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnZoneCheckValue();
}
/*static void _OnSignIDChangeFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignIDChange();
} */
/*static void _OnSignIDSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignIDSetfocus();} */
	/*static void _OnSignIDKillfocusFnc(CWnd *pWnd){
		((CSysUserSetup *)pWnd)->OnSignIDKillfocus();
	} */
static int _OnSignIDCheckValueFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnSignIDCheckValue();
}
static void _OnSignPartSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSysUserSetup*)pWnd)->OnSignPartSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSignPartSelendokFnc(CWnd* pWnd) {
	((CSysUserSetup*)pWnd)->OnSignPartSelendok();
}
/*static void _OnSignPartSetfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignPartKillfocus();
}*/
/*static void _OnSignPartKillfocusFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignPartKillfocus();
}*/
static long _OnSignPartLoadDataFnc(CWnd* pWnd) {
	return ((CSysUserSetup*)pWnd)->OnSignPartLoadData();
}
/*static void _OnSignPartAddNewFnc(CWnd *pWnd){
	((CSysUserSetup *)pWnd)->OnSignPartAddNew();
}*/

//BOOL()(CWnd*, CString)

static BOOL _OnSignImageAddFnc(CWnd* pWnd, CString szFile)
{
	return ((CSysUserSetup*)pWnd->GetParent())->OnAddSignImage(szFile);
}
static BOOL _OnSignImageEditFnc(CWnd* pWnd, CString szFile)
{
	return ((CSysUserSetup*)pWnd->GetParent())->OnEditSignImage(szFile);
}
static BOOL _OnSignImageRemoveFnc(CWnd* pWnd, CString szFile)
{
	return ((CSysUserSetup*)pWnd->GetParent())->OnRemoveSignImage(szFile);
}


static BOOL _OnSign2ImageAddFnc(CWnd* pWnd, CString szFile)
{
	return ((CSysUserSetup*)pWnd->GetParent())->OnAddSign2Image(szFile);
}
static BOOL _OnSign2ImageEditFnc(CWnd* pWnd, CString szFile)
{
	return ((CSysUserSetup*)pWnd->GetParent())->OnEditSign2Image(szFile);
}
static BOOL _OnSign2ImageRemoveFnc(CWnd* pWnd, CString szFile)
{
	return ((CSysUserSetup*)pWnd->GetParent())->OnRemoveSign2Image(szFile);
}


CSysUserSetup::CSysUserSetup() {

	m_nDlgWidth = 815;
	m_nDlgHeight = 630;
	SetDefaultValues();
	m_szModules = _T("''");
	m_szUserStatus.Empty();
}
CSysUserSetup::~CSysUserSetup() {
}
void CSysUserSetup::OnCreateComponents()
{
	/*
	m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 405, 590);
	m_wndPermissionInformation.Create(this, _T("Permission Information"), 410, 5, 805, 590);
	m_wndUserList.Create(this,10, 90, 400, 375);
	m_wndPermList.Create(this,415, 30, 800, 585);
	m_wndSearchDeptLabel.Create(this, _T("Search For Dept"), 10, 30, 115, 55);
	m_wndSearchDept.Create(this,120, 30, 400, 55);
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 10, 60, 115, 85);
	m_wndSearchName.Create(this,120, 60, 250, 85);
	m_wndInactiveUser.Create(this, _T("Inactive user"), 255, 60, 400, 85);
	m_wndUserIDLabel.Create(this, _T("User ID"), 10, 380, 95, 405);
	m_wndUserID.Create(this,100, 380, 200, 405);
	m_wndGroupLabel.Create(this, _T("Group"), 205, 380, 275, 405);
	m_wndGroup.Create(this,280, 380, 400, 405);
	m_wndUserNameLabel.Create(this, _T("User Name"), 10, 410, 95, 435);
	m_wndUserName.Create(this,100, 410, 400, 435);
	m_wndPasswordLabel.Create(this, _T("Password"), 10, 440, 95, 465);
	m_wndPassword.Create(this,100, 440, 200, 465);
	m_wndConfirmLabel.Create(this, _T("Confirm"), 205, 440, 275, 465);
	m_wndConfirm.Create(this,280, 440, 400, 465);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 470, 95, 495);
	m_wndDepartment.Create(this,100, 470, 400, 495);
	m_wndRoomLabel.Create(this, _T("Room"), 10, 500, 95, 525);
	m_wndRoom.Create(this,100, 500, 400, 525);
	m_wndCertificateLabel.Create(this, _T("Chứng chỉ HN"), 10, 530, 95, 555);
	m_wndCertificate.Create(this,100, 530, 200, 555);
	m_wndZoneLabel.Create(this, _T("Zone"), 205, 530, 275, 555);
	m_wndZone.Create(this,280, 530, 400, 555);
	m_wndSignIDLabel.Create(this, _T("SignID"), 10, 560, 95, 585);
	m_wndSignID.Create(this,100, 560, 200, 585);
	m_wndSignCertLabel.Create(this, _T("SignCert"), 205, 560, 275, 585);
	m_wndSignCert.Create(this,280, 560, 400, 585);
	m_wndAdd.Create(this, _T("&Add"), 15, 595, 90, 620);
	m_wndEdit.Create(this, _T("&Edit"), 95, 595, 170, 620);
	m_wndDelete.Create(this, _T("&Delete"), 175, 595, 250, 620);
	m_wndSave.Create(this, _T("&Save"), 255, 595, 330, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 335, 595, 410, 620);
	m_wndApply.Create(this, _T("&Apply"), 730, 595, 805, 620);
	*/




	m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 405, 590);
	m_wndPermissionInformation.Create(this, _T("Permission Information"), 410, 5, 805, 590);
	m_wndUserList.Create(this, 10, 60, 400, 310);
	m_wndPermList.Create(this, 409, 30, 794, 585);
	m_wndSearchDeptLabel.Create(this, _T("Dept"), 5, 30, 55, 55);
	m_wndSearchDept.Create(this, 60, 30, 130, 55);
	m_wndSearchNameLabel.Create(this, _T("Name"), 135, 30, 185, 55);
	m_wndSearchName.Create(this, 190, 30, 285, 55);
	m_wndInactiveUser.Create(this, _T("Inactive"), 290, 30, 404, 55);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 405, 95, 430);
	m_wndDepartment.Create(this, 100, 405, 200, 430);
	m_wndRoomLabel.Create(this, _T("Room"), 10, 435, 95, 460);
	m_wndRoom.Create(this, 100, 435, 200, 460);
	m_wndTitleLabel.Create(this, _T("Chức danh"), 205, 406, 275, 431);
	m_wndTitle.Create(this, 280, 406, 400, 431);
	m_wndUserIDLabel.Create(this, _T("User ID"), 10, 315, 95, 340);
	m_wndUserID.Create(this, 100, 315, 200, 340);
	m_wndGroupLabel.Create(this, _T("Group"), 205, 315, 275, 340);
	m_wndGroup.Create(this, 280, 315, 400, 340);
	m_wndUserNameLabel.Create(this, _T("User Name"), 10, 345, 95, 370);
	m_wndUserName.Create(this, 100, 345, 400, 370);

	m_wndPasswordLabel.Create(this, _T("Password"), 10, 375, 95, 400);

	m_wndPassword.SetPassword(TRUE);
	m_wndConfirm.SetPassword(TRUE);

	m_wndPassword.Create(this, 100, 375, 200, 400);
	m_wndConfirmLabel.Create(this, _T("Confirm"), 205, 375, 275, 400);
	m_wndConfirm.Create(this, 280, 375, 400, 400);
	m_wndCertificateLabel.Create(this, _T("Chứng chỉ HN"), 10, 465, 95, 490);
	m_wndCertificate.Create(this, 100, 465, 200, 490);
	m_wndAdd.Create(this, _T("&Add"), 5, 594, 80, 619);
	m_wndEdit.Create(this, _T("&Edit"), 85, 594, 160, 619);
	m_wndDelete.Create(this, _T("&Delete"), 165, 594, 240, 619);
	m_wndSave.Create(this, _T("&Save"), 245, 594, 320, 619);
	m_wndCancel.Create(this, _T("&Cancel"), 325, 594, 400, 619);
	m_wndApply.Create(this, _T("&Apply"), 730, 594, 805, 619);
	m_wndZoneLabel.Create(this, _T("Zone"), 205, 465, 275, 490);
	m_wndZone.Create(this, 280, 465, 400, 490);
	m_wndSignIDLabel.Create(this, _T("Sign ID"), 10, 495, 95, 520);
	m_wndSignID.Create(this, 100, 495, 200, 520);
	m_wndSignCertLabel.Create(this, _T("Sign Part"), 205, 495, 275, 520);
	m_wndSignPart.Create(this, 280, 495, 400, 520);
	m_wndSignImage.Create(this, 10, 525, 200, 585);
	m_wndSign2Image.Create(this, 205, 525, 400, 585);
	m_wndAddGroup.Create(this, _T("AddGroup"), 645, 595, 725, 620);
	m_wndPositionLabel.Create(this, _T("Position"), 205, 435, 275, 460);
	m_wndPosition.Create(this, 280, 435, 400, 460);

}
void CSysUserSetup::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
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
	m_wndZone.SetCheckValue(false);
	m_wndSignID.SetLimitText(32);

	m_wndSignPart.SetCheckValue(false);
	m_wndSignPart.LimitText(1024);

	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 120);
	m_wndUserList.InsertColumn(1, _T("User Name"), CFMT_TEXT, 250);
	m_wndUserList.InsertColumn(2, _T("Department"), CFMT_TEXT, 100);
	m_wndUserList.InsertColumn(3, _T("PID"), CFMT_TEXT, 0);
	m_wndUserList.InsertColumn(4, _T(""), CFMT_TEXT, 0);



	m_wndPermList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPermList.InsertColumn(1, _T("Module"), CFMT_TEXT, 60);
	m_wndPermList.InsertColumn(2, _T("Name"), CFMT_TEXT, 500);
	m_wndPermList.SetCheckBox(true);
	m_wndPermList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndSearchDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndSearchDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndSearchDept.Format(2, 0);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndDepartment.InsertColumn(2, _T("type"), CFMT_TEXT, 0);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndSignPart.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndSignPart.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndTitle.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTitle.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_sys_userTbl.SetTableName(_T("sys_user"));
	m_sys_userTbl.AddField(_T("su_userid"), dfText, 15);
	m_sys_userTbl.AddField(_T("su_groupid"), dfText, 1);
	m_sys_userTbl.AddField(_T("SU_ZONEFORDEPT"), dfText, 15);

	m_sys_userTbl.AddField(_T("su_name"), dfText, 65);
	m_sys_userTbl.AddField(_T("su_password"), dfText, 81);
	m_sys_userTbl.AddField(_T("su_deptid"), dfText, 7);
	m_sys_userTbl.AddField(_T("su_roomid"), dfInteger);
	m_sys_userTbl.AddField(_T("su_certificate"), dfText, 35);
	m_sys_userTbl.AddField(_T("SU_SIGNATUREID"), dfText, 32);
	m_sys_userTbl.AddField(_T("SU_SIGN_CERT"), dfText, 2000);
	m_sys_userTbl.AddField(_T("SU_SIGN_USERID"), dfText, 32);
	m_sys_userTbl.AddField(_T("SU_SIGN_PARTNER"), dfText, 32);
	m_sys_userTbl.AddField(_T("SU_POSITION"), dfText, 15);
	m_sys_userTbl.AddField(_T("SU_TITLE"), dfText, 15);


	m_sys_userpermTbl.SetTableName(_T("sys_userperm"));
	m_sys_userpermTbl.AddField(_T("sup_userid"), dfText, 15);
	m_sys_userpermTbl.AddField(_T("sup_permid"), dfText, 15);
	m_sys_userpermTbl.AddField(_T("sup_moduleid"), dfText, 11);

	//m_wndPassword.ModifyStyle(0, ES_PASSWORD);
	//m_wndConfirm.ModifyStyle(0, ES_PASSWORD);

	m_wndSignImage.SetAddImageFnc(_OnSignImageAddFnc);
	m_wndSignImage.SetEditImageFnc(_OnSignImageEditFnc);
	m_wndSignImage.SetRemoveImageFnc(_OnSignImageRemoveFnc);

	m_wndSign2Image.SetAddImageFnc(_OnSign2ImageAddFnc);
	m_wndSign2Image.SetEditImageFnc(_OnSign2ImageEditFnc);
	m_wndSign2Image.SetRemoveImageFnc(_OnSign2ImageRemoveFnc);

}
void CSysUserSetup::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
#ifdef UNICODE
	m_wndUserList.SetWindowText(_T("User List"));
	m_wndUserList.AddEvent(1, _T("Permission"), _OnUserListPermissionFnc);
	m_wndUserList.AddEvent(3, _T("Phân quyền kho"), _OnUserListStockPermissionFnc);
	m_wndUserList.AddEvent(9, _T("Phân quyền nhìn thấy phí khám tiếp đón"), _OnUserListExamTypePermissionFnc);
	m_wndUserList.AddEvent(12, _T("Phân quyền nhìn thấy phòng thực hiện ở module hình ảnh"), _OnUserListPerformDeptPermissionFnc);
	//m_wndUserList.AddEvent(3, _T("Additon Permission"), _OnUserAdditionPermissionFnc);


	m_wndUserList.AddEvent(0, _T("-"));
	m_wndUserList.AddEvent(2, _T("Add Signature"), _OnUserListAddSignatureFnc);
	m_wndUserList.AddEvent(11, _T("Delete Signature"), _OnUserListDeleteSignatureFnc);
	m_wndUserList.AddEvent(4, _T("View Signature"), _OnViewSignatureFnc);
	m_wndUserList.AddEvent(7, _T("Export Signature"), _OnExportSignatureUserFnc);
	m_wndUserList.AddEvent(14, _T("Tạo chứng thư ký số"), _OnCreateCertificateFnc);

	m_wndUserList.AddEvent(0, _T("-"));
	m_wndUserList.AddEvent(6, _T("Duplicate User"), _OnDuplicateUserFnc);
	m_wndUserList.AddEvent(8, _T("Copy quyền hàng loạt"), _OnDuplicateMultiUserFnc);

	m_wndUserList.AddEvent(0, _T("-"));
	m_wndUserList.AddEvent(10, _T("Thiết lập user các module online"), _OnSetupAdUserFnc);

	m_wndUserList.AddEvent(0, _T("-"));
	m_wndUserList.AddEvent(13, _T("Xuất danh sách người sử dụng"), _OnUserListExportFnc);
	m_wndUserList.AddEvent(0, _T("-"));
	m_wndUserList.AddEvent(5, _T("Activate/Deactivate User"), _OnManipulateUserFnc);

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
	//m_wndCertificate.SetEvent(WE_CHANGE, _OnCertificateChangeFnc);
	//m_wndCertificate.SetEvent(WE_SETFOCUS, _OnCertificateSetfocusFnc);
	//m_wndCertificate.SetEvent(WE_KILLFOCUS, _OnCertificateKillfocusFnc);
	//m_wndCertificate.SetEvent(WE_CHECKVALUE, _OnCertificateCheckValueFnc);
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
	m_wndAddGroup.SetEvent(WE_CLICK, _OnAddGroupSelectFnc);
	m_wndPosition.SetEvent(WE_SELENDOK, _OnPositionSelendokFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_SELCHANGE, _OnPositionSelectChangeFnc);
	m_wndPosition.SetEvent(WE_LOADDATA, _OnPositionLoadDataFnc);
	//m_wndPosition.SetEvent(WE_ADDNEW, _OnPositionAddNewFnc);
	m_wndTitle.SetEvent(WE_SELENDOK, _OnTitleSelendokFnc);
	//m_wndTitle.SetEvent(WE_SETFOCUS, _OnTitleSetfocusFnc);
	//m_wndTitle.SetEvent(WE_KILLFOCUS, _OnTitleKillfocusFnc);
	m_wndTitle.SetEvent(WE_SELCHANGE, _OnTitleSelectChangeFnc);
	m_wndTitle.SetEvent(WE_LOADDATA, _OnTitleLoadDataFnc);
	//m_wndTitle.SetEvent(WE_ADDNEW, _OnTitleAddNewFnc);
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
}
void CSysUserSetup::OnDoDataExchange(CDataExchange* pDX) {
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
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_TextEx(pDX, m_wndTitle.GetDlgCtrlID(), m_szTitleKey);
}
void CSysUserSetup::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsx(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_user WHERE su_userid='%s'"), m_szUserID);
	int ret = rs.ExecSQL(szSQL);
	if (ret > 0) {
		m_szUserID = rs.GetValue(_T("su_userid"));
		m_szUserName = rs.GetValue(_T("su_name"));
		m_szDepartmentKey = rs.GetValue(_T("su_deptid"));
		m_szRoomKey = rs.GetValue(_T("su_roomid"));
		m_szGroupKey = rs.GetValue(_T("su_groupid"));
		m_szTitleKey = rs.GetValue(_T("su_title"));

		rs.GetValue(_T("su_password"), m_szPassword);
		rs.GetValue(_T("su_certificate"), m_szCertificate);
		rs.GetValue(_T("su_hms_rmmodule"), m_szRMModule);
		rs.GetValue(_T("su_hms_emmodule"), m_szEMModule);
		rs.GetValue(_T("su_hms_tmmodule"), m_szTMModule);
		rs.GetValue(_T("su_hms_hfmodule"), m_szHFModule);
		rs.GetValue(_T("su_hms_pmmodule"), m_szPMModule);
		rs.GetValue(_T("su_hms_pamodule"), m_szPACSModule);
		rs.GetValue(_T("su_hms_labmodule"), m_szLIMSModule);
		rs.GetValue(_T("su_hms_smmodule"), m_szSMModule);
		rs.GetValue(_T("su_hms_mmmodule"), m_szMMModule);
		rs.GetValue(_T("su_hms_wmmodule"), m_szWMModule);
		rs.GetValue(_T("su_hms_armodule"), m_szARModule);
		rs.GetValue(_T("su_hms_mamodule"), m_szMAModule);
		rs.GetValue(_T("su_hms_sysmodule"), m_szSysModule);
		rs.GetValue(_T("su_hms_bbmodule"), m_szBBModule);
		rs.GetValue(_T("su_hms_fammodule"), m_szFAMModule);
		rs.GetValue(_T("su_hms_sipmodule"), m_szSIPModule);
		rs.GetValue(_T("su_hms_stmodule"), m_szSTModule);
		rs.GetValue(_T("su_hms_srmmodule"), m_szSRMModule);
		rs.GetValue(_T("su_hms_mramodule"), m_szMRAModule);
		rs.GetValue(_T("su_hms_sm2module"), m_szSM2Module);
		rs.GetValue(_T("su_hms_srmodule"), m_szSRModule);
		rs.GetValue(_T("su_hms_vpmmodule"), m_szVPMModule);
		rs.GetValue(_T("su_hms_hcmodule"), m_szHCModule);
		rs.GetValue(_T("SU_HMS_MATRECMODULE"), m_szMATRECModule);
		rs.GetValue(_T("SU_ZONEFORDEPT"), m_szZone);
		rs.GetValue(_T("SU_sign_userid"), m_szSignID);
		rs.GetValue(_T("SU_SIGN_PARTNER"), m_szSignPartKey);
		rs.GetValue(_T("SU_POSITION"), m_szPositionKey);
		//rs.GetValue(_T("SU_SIGN_CERT"), m_szSignCert);
		m_szConfirm = m_szPassword;
		//pMF->SetStatusText(_T(""), 0);

		m_wndSignImage.Release();
		m_wndSignImage.AddHBITMAP(pMF->GetSignatureImage(m_szUserID));
		m_wndSignImage.RedrawWindow();
		CString szUser2;
		szUser2.Format(_T("%s_s"), m_szUserID);
		m_wndSign2Image.Release();
		m_wndSign2Image.AddHBITMAP(pMF->GetSignatureImage(szUser2));
		m_wndSign2Image.RedrawWindow();

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
void CSysUserSetup::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
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
	m_sys_userTbl.SetValue(_T("su_title"), m_szTitleKey);

	m_sys_userTbl.SetValue(_T("su_password"), m_szPassword);
	m_sys_userTbl.SetValue(_T("su_deptid"), m_szDepartmentKey);
	m_sys_userTbl.SetValue(_T("su_roomid"), m_szRoomKey);
	m_sys_userTbl.SetValue(_T("su_name"), m_szUserName);
	m_sys_userTbl.SetValue(_T("su_certificate"), m_szCertificate);
	m_sys_userTbl.SetValue(_T("su_ZONEFORDEPT"), m_szZone);
	m_sys_userTbl.SetValue(_T("su_sign_userid"), m_szSignID);
	m_sys_userTbl.SetValue(_T("su_sign_partner"), m_szSignPartKey);
	m_sys_userTbl.SetValue(_T("su_position"), m_szPositionKey);



	//m_sys_userTbl.SetValue(_T("SU_SIGN_CERT"), m_szSignCert);
	if (GetMode() == VM_VIEW)
	{
		m_parser.PushRowData(&m_sys_userTbl);
	}
	else if (GetMode() == VM_EDIT)
	{
		m_parser.PushRowData(&m_sys_userTbl, true);
	}

}
void CSysUserSetup::SetDefaultValues() {

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
	m_szSignID.Empty();
	m_szSignPartKey.Empty();
	m_szPositionKey.Empty();
	m_szTitleKey.Empty();
}
int CSysUserSetup::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiView::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
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
	UpdateData(FALSE);
	return nOldMode;
}
void CSysUserSetup::OnUserListDblClick() {

}
int CSysUserSetup::OnUserListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (nNewItem < 0)
		return 0;
	m_szUserID = m_wndUserList.GetItemText(nNewItem, 0);
	m_szUserStatus = m_wndUserList.GetItemText(nNewItem, 4);
	GetDataToScreen();
	return 0;
}
int CSysUserSetup::OnZoneCheckValue() {
	return 0;
}
/*void CSysUserSetup::OnSignIDChange(){

} */
/*void CSysUserSetup::OnSignIDSetfocus(){

} */
/*void CSysUserSetup::OnSignIDKillfocus(){

} */
int CSysUserSetup::OnSignIDCheckValue() {
	return 0;
}
/*void CSysUserSetup::OnSignCertChange(){

} */
/*void CSysUserSetup::OnSignCertSetfocus(){

} */
/*void CSysUserSetup::OnSignCertKillfocus(){

} */

int CSysUserSetup::OnUserListPermission() {
	//CHMSPermissionDialog dlg(this);
	CHMSPermissionDialog_v2 dlg(this);
	dlg.m_szUserID = m_szUserID;
	dlg.DoModal();
	return 0;
}

int CSysUserSetup::OnUserListAddSignature()
{
	int nSel = m_wndUserList.GetCurSel();
	if (nSel < 0)
		return 0;
	CString szFileName;
	szFileName.Format(_T("HMS_%s.jpg"), m_wndUserList.GetItemText(nSel, 0));
	CPictureFileDialog dlg(true, _T("*.png||*.PNG"), _T("png||PNG"));
	if (dlg.DoModal() == IDOK)
	{
		CFile file;
		file.Open(dlg.GetPathName(), CFile::modeRead);
		if (file.GetLength() > 240 * 120)
		{
			ShowMessageBox(_T("Image too large."));
			file.Close();
			return 0;
		}
		else
			file.Close();

		CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
		bool res = pMF->lo_import(szFileName, dlg.GetPathName());
		//_msg(_T("%d: %s: %s"), res, szFileName, dlg.GetPathName());

	}
	return 0;
}

long CSysUserSetup::OnUserListLoadData()
{
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
//thiet lap quyen nhin thay kho thuoc
int CSysUserSetup::OnUserListStockPermission()
{
	CPMSPermSetupDialog dlg(this);
	int nSel = 0;
	nSel = m_wndUserList.GetCurSel();
	dlg.m_szDeptKey = m_wndUserList.GetItemText(nSel, 2);
	dlg.m_szUserKey = m_szUserID;
	dlg.DoModal();
	return 0;
}
//Thiết lập quyền nhìn thấy kiểu khám ở tiếp đón, list nhiều quá dễ nhầm
int CSysUserSetup::OnUserListExamTypePermission()
{
	CHMSExamTypePermSetupDialog dlg(this);
	int nSel = 0;
	nSel = m_wndUserList.GetCurSel();
	dlg.m_szDeptKey = m_wndUserList.GetItemText(nSel, 2);
	dlg.m_szUserKey = m_szUserID;
	dlg.DoModal();
	return 0;
}

//Thiết lập user đươc phép nhìn thấy phòng thực hiện nào ở module hình ảnh, hiện tại đang load lên tất cả viện, phân theo khoa
int CSysUserSetup::OnUserListPerformDeptPermission()
{
	CHMSPerformDeptPermSetupDialog dlg(this);
	int nSel = 0;
	nSel = m_wndUserList.GetCurSel();
	dlg.m_szDeptKey = m_wndUserList.GetItemText(nSel, 2);
	dlg.m_szUserKey = m_szUserID;
	dlg.DoModal();
	return 0;
}
void CSysUserSetup::OnPermListDblClick()
{
	int nSel = m_wndPermList.GetCurSel();
	if (nSel < 0) return;
	BOOL bCheck = m_wndPermList.GetCheck(nSel);
	m_wndPermList.SetCheck(nSel, !bCheck);
	CString szPermID, tmpStr, szModule, szCurMod;
	szPermID = m_wndPermList.GetItemText(nSel, 0);
	szCurMod = m_wndPermList.GetItemText(nSel, 1);
	for (int i = nSel; i < m_wndPermList.GetItemCount(); i++) {
		szModule = m_wndPermList.GetItemText(i, 1);
		if (szModule != szCurMod)
			break;
		tmpStr = m_wndPermList.GetItemText(i, 0);
		if (tmpStr.Left(szPermID.GetLength()) == szPermID)
		{
			m_wndPermList.SetCheck(i, !bCheck);
		}

	}

}
void CSysUserSetup::OnPermListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	int nCurSel = m_wndPermList.GetCurSel();
	if (nCurSel < 0)
		return;
	CString tmpStr, permId;
	BOOL bCheck = m_wndPermList.GetCheck(nCurSel);
	permId = m_wndPermList.GetItemText(nCurSel, 0);
	if (bCheck)
	{
		for (int j = nCurSel; j < m_wndPermList.GetItemCount(); j++)
		{
			tmpStr = m_wndPermList.GetItemText(j, 0);
			if (tmpStr.Left(permId.GetLength()) == permId)
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
			if (tmpStr.Left(permId.GetLength()) == permId)
			{
				m_wndPermList.SetCheck(j, FALSE);
			}
			else
				break;
		}
	}
	UpdateData(FALSE);


}
void CSysUserSetup::OnPermListChange() {


}
int CSysUserSetup::OnPermListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
#include "StringToken.h"
long CSysUserSetup::OnPermListLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPermID, szType, szOldPermID, szSub, szModule, szWhere, szWhere1;
	if (m_szUserID.IsEmpty())
		return 0;
	szWhere.Empty();
	if (m_szRMModule == _T("1"))
		szWhere = _T("'RM'");
	if (m_szEMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(", ");
		szWhere += _T("'EM'");
	}
	if (m_szTMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'TM'");
	}
	if (m_szPMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'PM'");
	}

	if (m_szHFModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'FM'");
	}
	if (m_szPACSModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'PACS'");
	}
	if (m_szLIMSModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'LIMS'");
	}
	if (m_szSMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'SMM'");
	}
	if (m_szMMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'MM'");
	}
	if (m_szWMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'WM'");
	}
	if (m_szARModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'HAR'");
	}
	if (m_szMAModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'MA'");
	}

	if (m_szSysModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'SYS'");
	}

	if (m_szBBModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'BB'");
	}

	if (m_szFAMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'FAM'");
	}

	if (m_szSIPModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'SIP'");
	}

	if (m_szSTModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'ST'");
	}

	if (m_szSRMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'SRM'");
	}

	if (m_szMRAModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'MRA'");
	}
	if (m_szSM2Module == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'SMM2'");
	}
	if (m_szSRModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'SOM'");
	}
	if (m_szVPMModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'VPM'");
	}

	if (m_szHCModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'HC'");
	}

	if (m_szHCModule == _T("1"))
	{
		if (!szWhere.IsEmpty())
			szWhere += _T(",");
		szWhere += _T("'MATREC'");
	}

	if (szWhere.IsEmpty())
		szWhere.Format(_T("'XX'"));

	if (pMF->GetCurrentUser() != _T("admin"))
		szWhere1.AppendFormat(_T(" AND sp_moduleid <> 'SYS'"));

	szSQL.Format(_T(" SELECT  DISTINCT sp_id,sp_moduleid,sp_name, sp_type, ") \
		_T("			CASE WHEN sp_moduleid = 'RM' THEN 1 ") \
		_T("                WHEN sp_moduleid = 'EM' THEN 2 ") \
		_T("                 WHEN sp_moduleid = 'TM' THEN 3 ") \
		_T("                 WHEN sp_moduleid = 'PM' THEN 4 ") \
		_T("                 WHEN sp_moduleid = 'FM' THEN 5 ") \
		_T("                 WHEN sp_moduleid = 'LIMS' THEN 6 ") \
		_T("                 WHEN sp_moduleid = 'PACS' THEN 7 ") \
		_T("                 WHEN sp_moduleid = 'SMM' THEN 8 ") \
		_T("                 WHEN sp_moduleid = 'WM' THEN 9 ") \
		_T("                 WHEN sp_moduleid = 'BB' THEN 10 ") \
		_T("                 WHEN sp_moduleid = 'FAM' THEN 11 ") \
		_T("                 ELSE 12 END AS idx, ") \
		_T("			CASE WHEN sp_moduleid = sup_moduleid AND sup_permid IS NOT NULL THEN 'Y'  ELSE 'N'  END AS sp_permflg ") \
		_T(" FROM      sys_permission ") \
		_T(" LEFT JOIN sys_userperm ON( sp_id = sup_permid AND sp_moduleid = sup_moduleid AND sup_userid = '%s' ) ") \
		_T(" WHERE     sp_moduleid IN ( SELECT regexp_substr(GetModulePermissions('%s'),'[^,]+',1,LEVEL) AS val FROM dual ") \
		_T("		CONNECT BY regexp_substr(GetModulePermissions('%s'),'[^,]+',1,LEVEL) IS NOT NULL") \
		_T("		)  %s ORDER  BY Cast(idx AS INTEGER), sp_moduleid, sp_id ")
		, m_szUserID, m_szUserID, m_szUserID, szWhere1);
	//szSQL = GetPermListQueryString(szWhere);
//_msg(_T("%s"), szSQL);
	//m_wndPermList.DeleteAllItems(); 
	int nCount = 0;
	int nItem = 0;
	nCount = rs.ExecSQL(szSQL);

	szOldPermID.Empty();
	m_wndPermList.BeginLoad();
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("sp_moduleid"), szModule);
		rs.GetValue(_T("sp_permflg"), tmpStr);
		rs.GetValue(_T("sp_id"), szPermID);
		rs.GetValue(_T("sp_type"), szType);
		szSub.Empty();
		for (int i = 0; i < szPermID.GetLength(); i++)
		{
			szSub += _T(" ");
		}
		szOldPermID = szPermID;
		nItem = m_wndPermList.AddItems
		(
			szPermID,
			rs.GetValue(_T("sp_moduleid")),
			szSub + rs.GetValue(_T("sp_name")), NULL);
		if (tmpStr == _T("Y"))
			m_wndPermList.SetCheck(nItem, TRUE);
		if (szPermID.GetLength() == 2)
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

void CSysUserSetup::SkipPermission(CGuiListCtrl* pList) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CArray<int, int> arr_ItemSkip;
	CString szModuleID, tmpStr;
	for (int i = 0; i < pList->GetItemCount(); i++) {
		szModuleID = pList->GetItemText(i, 1);
		if (!m_mSkipPermID.Lookup(szModuleID, tmpStr))
			continue;
		if (szModuleID == _T("SYS") && pMF->GetCurrentUser() == _T("admin"))
			continue;
		CStringToken token(tmpStr);
		for (int j = 0; j < token.GetSize(); j++) {
			token.GetAt(j, tmpStr);
			if (tmpStr == pList->GetItemText(i, 0))
				arr_ItemSkip.Add(i);
		}
	}
	for (int i = 0; i < arr_ItemSkip.GetCount(); i++)
		pList->DeleteItem(arr_ItemSkip.GetAt(i) - i);
}

CString CSysUserSetup::GetPermListQueryString(CString szWhere) {
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
	//szSQL.AppendFormat(_T(", tbl_em") \
	//	_T("     AS (SELECT    DISTINCT sp_id,sp_moduleid,sp_name,2,") \
	//	_T("					CASE WHEN sp_moduleid = sup_moduleid AND sup_permid IS NOT NULL THEN 'Y' ELSE 'N' END AS sp_permflg") \
	//	_T("         FROM      sys_permission") \
	//	_T("         LEFT JOIN sys_userperm ON( sp_id = sup_permid AND sp_moduleid = sup_moduleid AND sup_userid = '%s' )") \
	//	_T("         WHERE     %s ") \
	//	_T("        )"), m_szUserID, szWhere1);
	//szSQL.AppendFormat(_T(", tbl_pm") \
	//	_T("     AS (SELECT    DISTINCT sp_id,sp_moduleid,sp_name,4, ") \
	//	_T("					CASE WHEN sp_moduleid = sup_moduleid AND sup_permid IS NOT NULL THEN 'Y' ELSE 'N' END AS sp_permflg") \
	//	_T("         FROM      sys_permission") \
	//	_T("         LEFT JOIN sys_userperm ON( sp_id = sup_permid AND sp_moduleid = sup_moduleid AND sup_userid = '%s' )") \
	//	_T("         WHERE     %s") \
	//	_T("        )"), m_szUserID, szWhere2);
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

void CSysUserSetup::OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CSysUserSetup::OnSearchDeptSelendok()
{
	UpdateData(true);
	OnUserListLoadData();
}
/*void CSysUserSetup::OnSearchDeptSetfocus(){

}*/
/*void CSysUserSetup::OnSearchDeptKillfocus(){

}*/
long CSysUserSetup::OnSearchDeptLoadData()
{
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
/*void CSysUserSetup::OnSearchDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CSysUserSetup::OnSearchNameChange()
{
	UpdateData(TRUE);
	OnUserListLoadData();
}
/*void CSysUserSetup::OnSearchNameSetfocus(){

} */
/*void CSysUserSetup::OnSearchNameKillfocus(){

} */
int CSysUserSetup::OnSearchNameCheckValue() {
	//OnUserListLoadData();
	//m_wndUserList.SetCurSel(0);
	return 0;
}

void CSysUserSetup::OnInactiveUserSelect() {
	OnUserListLoadData();
}

void CSysUserSetup::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CSysUserSetup::OnDepartmentSelendok() {

}
/*void CSysUserSetup::OnDepartmentSetfocus(){

}*/
/*void CSysUserSetup::OnDepartmentKillfocus(){

}*/
long CSysUserSetup::OnDepartmentLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndDepartment.IsSearchKey() && m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T("AND sd_id='%s' "), m_szDepartmentKey);
	};

	/* if (pMF->GetCurrentUser().CompareNoCase(_T("admin")) != 0)
	{
		szWhere.AppendFormat(_T("AND sd_id NOT IN ('C1.2')"));
	};*/

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name, sd_type as dept_type FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);

	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CSysUserSetup::OnRoomSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CSysUserSetup::OnRoomSelendok() {

}
/*void CSysUserSetup::OnRoomSetfocus(){

}*/
/*void CSysUserSetup::OnRoomKillfocus(){

}*/
long CSysUserSetup::OnRoomLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szDeptType;
	m_wndRoom.DeleteAllItems();
	int nCount = 0;
	if (m_szDepartmentKey.IsEmpty())
		return 0;
	szDeptType = m_wndDepartment.GetCurrent(2);
	if (szDeptType == _T("DT"))
	{
		if (m_wndRoom.IsSearchKey() && str2int(m_szRoomKey) > 0)
		{
			szWhere.Format(_T("and cast(ss_code as integer)=%d"), str2int(m_szRoomKey));
		}
		szSQL.Format(_T("SELECT cast(ss_code as integer) as id, ss_desc as name FROM sys_sel  WHERE ss_id='hms_floor' %s ORDER BY id "), szWhere);
	}
	else
	{
		if (m_wndRoom.IsSearchKey() && str2int(m_szRoomKey) > 0)
		{
			szWhere.Format(_T("and hrl_id=%d "), str2int(m_szRoomKey));
		}
		szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid='%s' %s ORDER BY hrl_id "), m_szDepartmentKey, szWhere);
	}

	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
int CSysUserSetup::OnUserIDCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr = m_szUserID;
	_debug(_T("%s"), tmpStr);
	StringLower(tmpStr, m_szUserID);
	_debug(_T("%s"), m_szUserID);
	UpdateData(false);
	if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT COUNT(*) FROM v_user WHERE user_id='%s'"), m_szUserID);
		rs.ExecSQL(szSQL);
		if (rs.GetIntValue() > 0)
			return -1;
	}
	return 0;
}
void CSysUserSetup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CSysUserSetup::OnGroupSelendok() {

}
/*void CSysUserSetup::OnGroupSetfocus(){

}*/
/*void CSysUserSetup::OnGroupKillfocus(){

}*/
long CSysUserSetup::OnGroupLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()) {
		szWhere.Format(_T("AND ss_code='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_user_group' %s ORDER BY ss_code"), szWhere);
	m_wndGroup.DeleteAllItems();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
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
int CSysUserSetup::OnUserNameCheckValue() {
	return 0;
}
/*void CSysUserSetup::OnPasswordChange(){

} */
/*void CSysUserSetup::OnPasswordSetfocus(){

} */
/*void CSysUserSetup::OnPasswordKillfocus(){

} */
int CSysUserSetup::OnPasswordCheckValue() {
	return 0;
}
/*void CSysUserSetup::OnConfirmChange(){

} */
/*void CSysUserSetup::OnConfirmSetfocus(){

} */
/*void CSysUserSetup::OnConfirmKillfocus(){

} */
int CSysUserSetup::OnConfirmCheckValue() {
	if (m_szPassword != m_szConfirm)
		return -1;
	return 0;

}


void CSysUserSetup::OnSignPartSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CSysUserSetup::OnSignPartSelendok() {

}
/*void CSysUserSetup::OnSignPartSetfocus(){

}*/
/*void CSysUserSetup::OnSignPartKillfocus(){

}*/
long CSysUserSetup::OnSignPartLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndSignPart, L"SYS_SIGNPART", m_szSignPartKey);
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

void CSysUserSetup::OnPositionSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CSysUserSetup::OnPositionSelendok() {

}
/*void CSysUserSetup::OnPositionSetfocus(){

}*/
/*void CSysUserSetup::OnPositionKillfocus(){

}*/
long CSysUserSetup::OnPositionLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndPosition.IsSearchKey() && !m_szPositionKey.IsEmpty()) {
		szWhere.Format(_T(" and ss_code='%s' "), m_szPositionKey);
	}
	m_wndPosition.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_position' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndPosition.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CSysUserSetup::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CSysUserSetup::OnTitleSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CSysUserSetup::OnTitleSelendok() {

}
/*void CSysUserSetup::OnTitleSetfocus(){

}*/
/*void CSysUserSetup::OnTittleKillfocus(){

}*/
long CSysUserSetup::OnTitleLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndTitle, L"hms_signature_position", m_szTitleKey);
	//hms_title
	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndTitle.IsSearchKey() && !m_szTitleKey.IsEmpty()){
		 szWhere.Format(_T(" and id='%s' "), m_szTitleKey
	};
		m_wndTitle.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndTitle.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CSysUserSetup::OnTitleAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CSysUserSetup::OnAddSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnAddSysUserSetup();

}
void CSysUserSetup::OnEditSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnEditSysUserSetup();

}
void CSysUserSetup::OnDeleteSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnDeleteSysUserSetup();

}
void CSysUserSetup::OnSaveSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnSaveSysUserSetup();

}
void CSysUserSetup::OnCancelSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnCancelSysUserSetup();

}
void CSysUserSetup::OnApplySelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szPerm_ids;
	if (m_szUserID.IsEmpty())
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
	szSQL.Format(_T("SYS_GRANTPERMISSION('%s', '%s', '%s')"),
		m_szUserID, szPerm_ids, szUser);
	int nRet = str2int(pMF->ExecDML(szSQL));
	_tprintf(_T("\nnRet:%d"), nRet);
	if (nRet > 0)
	{
		AfxMessageBox(_T("Permission apply successfull"));
	}
	return;
	if (szUser == _T("admin"))
	{
		szSQL.Format(_T("DELETE FROM sys_userperm  ") \
			_T("	WHERE sup_userid='%s'   ") \
			_T("	and ( sup_moduleid not in ('EM','PM') or (sup_moduleid='EM' ") \
			_T("		and sup_permid not in ('05.06','05.07','05.08','05.10'))  ") \
			_T("       or  (sup_moduleid='PM' and sup_permid <>'10.14') ) "), m_szUserID);
	}
	else
	{
		szSQL.Format(_T("DELETE FROM sys_userperm  ") \
			_T("	WHERE sup_userid='%s' and sup_moduleid not in ('SYS')") \
			_T("	and (sup_moduleid not in ('EM','PM') or (sup_moduleid='EM' ") \
			_T("		and sup_permid not in ('05.06','05.07','05.08','05.10'))  ") \
			_T("       or  (sup_moduleid='PM' and sup_permid <>'10.14') ) "), m_szUserID);
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

int CSysUserSetup::OnAddSysUserSetup() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;


	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szCurrentUser = pMF->GetCurrentUser();
	//if(szCurrentUser.CompareNoCase(_T("Admin")) != 0)
		//return 0;

	SetMode(VM_ADD);
	return 0;
}
int CSysUserSetup::OnEditSysUserSetup()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();


	if (m_szUserID.IsEmpty())
		return -1;
	CString szCurrentUser = pMF->GetCurrentUser();
	/*if(szCurrentUser.CompareNoCase(_T("Admin")) != 0 )
		return -1;*/

	if (!pMF->CheckPermission(_T("01.03")))
	{
		return -1;
	}

	if (GetMode() != VM_VIEW)
		return -1;
	/*//pMF->SetStatusText(m_szPassword, 0);
	SetMode(VM_EDIT);
	return 0;*/

	//pMF->SetStatusText(_T("Vì quyền riêng tư của người sử dụng"), 0);
	_tprintf(_T("\r\n Password: %s"), m_szPassword);
	SetMode(VM_EDIT);
	return 0;


}
int CSysUserSetup::OnDeleteSysUserSetup() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szCurrentUser = pMF->GetCurrentUser();
	CRecord rs(&pMF->m_db);

	if (GetMode() != VM_VIEW)
		return -1;

	if (m_szUserID.MakeUpper() == _T("ADMIN"))
		return -1;

	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
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
	if (ret > 0) {
		SetMode(VM_NONE);
		OnCancelSysUserSetup();
		m_wndUserList.DeleteItem(m_wndUserList.GetCurSel());
	}
	return 0;

}
int CSysUserSetup::OnSaveSysUserSetup() {
	int nMode = GetMode();
	if (nMode != VM_ADD && nMode != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szEvent, szDescr;
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
	if (szUser == _T("admin"))
	{
		szWhere.Format(_T(" WHERE su_userid='%s' "), m_szUserID);
	}
	else
	{
		szWhere.Format(_T(" WHERE su_userid='%s' AND su_userid <> 'admin'"), m_szUserID);
	}

	if (nMode == VM_ADD)
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
		if (szUser == _T("admin"))
			szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid"));
		else
			szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid"));
		szSQL += szWhere;

	}
	_debug(L"\r\n%s\r\n", szSQL);
	int ret = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (ret > 0)
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
int CSysUserSetup::OnCancelSysUserSetup()
{
	EnableControls(FALSE);
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	return 0;
}
int CSysUserSetup::OnSysUserSetupListLoadData() {
	return 0;
}

int CSysUserSetup::OnUserAdditionPermission() {
	//CVIMESPermissionPACS dlg(this);
	//dlg.m_szUserID = m_szUserID;
	//dlg.DoModal();
	return 0;
}
static bool bLoaded = false;

void CSysUserSetup::Refresh()
{
	OnUserListLoadData();
}

int CSysUserSetup::OnViewSignature()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	int nSel = m_wndUserList.GetCurSel();

	if (nSel < 0)
		return -1;

	CRecord rs(&pMF->m_db);
	CString szSQL;

	//CString szPID = m_wndUserList.GetItemText(nSel, 3);
	CString szUserID = m_wndUserList.GetItemText(nSel, 0);

	szSQL.Format(_T("SELECT sfd_name AS fname FROM sys_filedir WHERE sfd_name='HMS_%s.jpg'"),
		szUserID);

	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		CString szFileName;
		szFileName.Empty();

		rs.GetValue(_T("fname"), szFileName);

		CHMSSignatureDialog dlg(pMF);
		dlg.m_szFileName = szFileName;
		dlg.m_szUserID = szUserID;
		dlg.DoModal();
	}
	else
	{
		ShowMessageBox(_T("Ng\x1B0\x1EDDi \x64\xF9ng \x63h\x1B0\x61 \x63\xF3 \x63h\x1EEF k\xFD!"),
			MB_OK | MB_ICONINFORMATION);
	}

	return 1;
}

int CSysUserSetup::OnManipulateUser() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (m_szUserID.MakeUpper() == _T("ADMIN"))
		return -1;
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, szModulePerm, tmpStr;
	szModulePerm.Empty();
	int nSel = m_wndUserList.GetCurSel();
	m_szUserStatus = m_wndUserList.GetItemText(nSel, 4);
	_debug(_T("%s"), m_szUserStatus);
	if (m_szUserStatus == _T("Y"))
		szStatus = _T("N");
	else
		szStatus = _T("Y");
	if (szStatus == _T("N"))
	{
		szSQL.Format(_T("SELECT column_name FROM all_tab_columns WHERE table_name = 'SYS_USER' AND column_name LIKE 'SU_%%MODULE'"));
		int nRet = rs.ExecSQL(szSQL);
		while (!rs.IsEOF())
		{
			szModulePerm.AppendFormat(_T(", %s = 0"), rs.GetValue(_T("column_name")));
			rs.MoveNext();
		}
		//_debug(_T("%s"), szModulePerm);
	}
	szSQL.Format(_T("UPDATE sys_user SET su_isactive = '%s' %s WHERE lower(su_userid) = lower('%s')"), szStatus, szModulePerm, m_szUserID);
	//_debug(_T("%s"), szSQL);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
		OnUserListLoadData();
	return 0;
}

int CSysUserSetup::OnDuplicateUser() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CHMSCreateUser dlg(this);
	dlg.m_szOriginID = m_szUserID;
	dlg.DoModal();
	return 0;
}

int CSysUserSetup::OnDuplicateMultiUser()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (pMF->GetCurrentUser() == _T("admin"))
	{
		CCHMSCreateMultiUser dlg(this);
		dlg.m_szOriginID = m_szUserID;
		dlg.DoModal();
	}
	return 0;
}

int CSysUserSetup::OnExportSignatureUser() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szPath;
	GetFolder(szPath, _T("Image Folder"));
	CString szUserId, szFile, szName;
	for (int i = 0; i < m_wndUserList.GetItemCount(); i++)
	{
		szUserId = m_wndUserList.GetItemText(i, 0);
		szName.Format(_T("HMS_%s.jpg"), szUserId);
		szFile.Format(_T("%s\\%s.jpg"), szPath, szUserId);
		_tprintf(_T("\r\n%s"), szFile);
		pMF->lo_export(szName, szFile);
	}
	return 0;
}

int CSysUserSetup::OnCreateCertificate() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szUrl;
	JSONVALUE json;

	json["userid"] = m_szUserID;
	json["username"] = m_szUserName;
	json["deptid"] = m_szDepartmentKey;

	szUrl = pMF->GetProp(L"hms_web");
	/*
	CRestClient client;
	CRestClient::HttpResponse response;
	std::string strData;
	json.ToString(strData);
	if (!client.Post(fml::WideStringToUtf8(std::wstring(szUrl)), client.m_Headers, strData, response))
	{
		cout << "Error post create certificate" << endl;
	}

	if (response.iCode == 200)
	{
		OnUserListLoadData();
	}
	*/

	return 0;
}

void CSysUserSetup::OnSetupAdUser()
{
	CAdUserSetup dlg(this);
	dlg.DoModal();
}

void CSysUserSetup::OnDeleteSignature()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("DELETE FROM sys_filedir WHERE sfd_name='HMS_%s.jpg'"),
		m_szUserID);
	pMF->ExecSQL(szSQL);
}

CString CSysUserSetup::GetQueryString_user(bool bExport)
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
		//szWhere.AppendFormat(_T(" AND lower(su_userid) <> 'admin' AND su_deptid <> 'C1.2'"));
		szWhere.AppendFormat(_T(" AND lower(su_userid) <> 'admin'"));

	szSQL.Format(_T("SELECT * FROM sys_user WHERE 0=0 %s ORDER BY su_userid"), szWhere);
	if (bExport)
	{
		szSQL.Format(_T("SELECT su_userid as user_id, su_name as user_name, su_deptid as dept, ss_desc as nametype, SU_CERTIFICATE as cchn, GET_SYSSEL_DESC_V2('su_practising_range', su_practising_range) AS pvhn ") \
			_T(" FROM sys_user left join sys_sel ON (su_groupid = ss_code AND ss_id='sys_user_group')  WHERE 0=0 %s ORDER BY su_userid"), szWhere);
	}
	return szSQL;
}

int CSysUserSetup::OnUserListExport()
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
void CSysUserSetup::OnPermListSearch()
{
	CSearchPopup* newPopup = new CSearchPopup(&m_wndPermList);
	newPopup->m_nSearchCol = 0;
	newPopup->ShowPopup(&m_wndPermList);
}
void CSysUserSetup::OnPermListSearchByName()
{
	CSearchPopup* newPopup = new CSearchPopup(&m_wndPermList);
	newPopup->m_nSearchCol = 2;
	newPopup->ShowPopup(&m_wndPermList);
}

BOOL CSysUserSetup::OnAddSignImage(CString szFile)
{
	if (m_szUserID.IsEmpty())
		return FALSE;

	CFile file;
	file.Open(szFile, CFile::modeRead);
	if (file.GetLength() > 250 * 250)
	{
		ShowMessageBox(_T("Image too large."));
		file.Close();
		return FALSE;
	}
	file.Close();

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szName;
	szName.Format(L"HMS_%s.jpg", m_szUserID);

	bool res = pMF->lo_import(szName, szFile);
	if (!res)
	{
		ShowMessageBox(L"Không cập nhật được chữ ký");
		return FALSE;
	}
	return TRUE;
}

BOOL CSysUserSetup::OnEditSignImage(CString szFile)
{

	return TRUE;
}

BOOL CSysUserSetup::OnRemoveSignImage(CString szFile)
{

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szFileName;
	szFileName.Format(_T("HMS_%s.jpg"), m_szUserID);
	bool res = pMF->lo_unlink(szFileName);
	if (!res)
	{
		ShowMessageBox(L"Không xóa được ảnh ký");
		return FALSE;
	}

	return TRUE;
}


BOOL CSysUserSetup::OnAddSign2Image(CString szFile)
{
	if (m_szUserID.IsEmpty())
		return FALSE;
	CFile file;
	file.Open(szFile, CFile::modeRead);
	if (file.GetLength() > 250 * 250)
	{
		ShowMessageBox(_T("Image too large."));
		file.Close();
		return FALSE;
	}
	file.Close();

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szName;
	szName.Format(L"HMS_%s_s.jpg", m_szUserID);
	bool res = pMF->lo_import(szName, szFile);
	if (!res)
	{
		ShowMessageBox(L"Không cập nhật được chữ ký");
		return FALSE;
	}
	return TRUE;

}

BOOL CSysUserSetup::OnEditSign2Image(CString szFile)
{
	return TRUE;
}

BOOL CSysUserSetup::OnRemoveSign2Image(CString szFile)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (m_szUserID.IsEmpty())
	{
		return FALSE;
	}
	CString szFileName;
	szFileName.Format(_T("HMS_%s_s.jpg"), m_szUserID);
	bool res = pMF->lo_unlink(szFileName);
	if (!res)
	{
		ShowMessageBox(L"Không xóa được ảnh ký");
		return FALSE;
	}


	return TRUE;
}
void CSysUserSetup::OnAddGroupSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}