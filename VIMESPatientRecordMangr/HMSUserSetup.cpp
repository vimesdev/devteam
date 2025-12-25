#include "HMSUserSetup.h"
#include "MainFrm.h"
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CHMSUserSetup*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CHMSUserSetup*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSUserSetup*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSUserSetup*)pWnd)->OnUserListDeleteItem();
} 
static long _OnPermListLoadDataFnc(CWnd *pWnd){
	return ((CHMSUserSetup*)pWnd)->OnPermListLoadData();
} 
static void _OnPermListDblClickFnc(CWnd *pWnd){
	((CHMSUserSetup*)pWnd)->OnPermListDblClick();
} 
static void _OnPermListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSUserSetup*)pWnd)->OnPermListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSUserSetup*)pWnd)->OnPermListDeleteItem();
}
static int _OnPermListChangeFnc(CWnd *pWnd){
	 return ((CHMSUserSetup*)pWnd)->OnPermListChange();
}
/*static void _OnUserIDChangeFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnUserIDChange();
} */
/*static void _OnUserIDSetfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnUserIDSetfocus();} */ 
/*static void _OnUserIDKillfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnUserIDKillfocus();
} */
static int _OnUserIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSUserSetup *)pWnd)->OnUserIDCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSUserSetup* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSUserSetup *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnUserNameChangeFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnUserNameChange();
} */
/*static void _OnUserNameSetfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnUserNameSetfocus();} */ 
/*static void _OnUserNameKillfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnUserNameKillfocus();
} */
static int _OnUserNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSUserSetup *)pWnd)->OnUserNameCheckValue();
} 
/*static void _OnPasswordChangeFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnPasswordChange();
} */
/*static void _OnPasswordSetfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnPasswordSetfocus();} */ 
/*static void _OnPasswordKillfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnPasswordKillfocus();
} */
static int _OnPasswordCheckValueFnc(CWnd *pWnd){
	return ((CHMSUserSetup *)pWnd)->OnPasswordCheckValue();
} 
/*static void _OnConfirmChangeFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnConfirmChange();
} */
/*static void _OnConfirmSetfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnConfirmSetfocus();} */ 
/*static void _OnConfirmKillfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnConfirmKillfocus();
} */
static int _OnConfirmCheckValueFnc(CWnd *pWnd){
	return ((CHMSUserSetup *)pWnd)->OnConfirmCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSUserSetup* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSUserSetup *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSUserSetup *pVw = (CHMSUserSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSUserSetup *pVw = (CHMSUserSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSUserSetup *pVw = (CHMSUserSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSUserSetup *pVw = (CHMSUserSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSUserSetup *pVw = (CHMSUserSetup *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSUserSetup *pVw = (CHMSUserSetup *)pWnd;
	pVw->OnApplySelect();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CHMSUserSetup *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSUserSetup *)pWnd)->OnSearchNameCheckValue();
} 
static int _OnAddHMSUserSetupFnc(CWnd *pWnd){
	 return ((CHMSUserSetup*)pWnd)->OnAddHMSUserSetup();
} 
static int _OnEditHMSUserSetupFnc(CWnd *pWnd){
	 return ((CHMSUserSetup*)pWnd)->OnEditHMSUserSetup();
} 
static int _OnDeleteHMSUserSetupFnc(CWnd *pWnd){
	 return ((CHMSUserSetup*)pWnd)->OnDeleteHMSUserSetup();
} 
static int _OnSaveHMSUserSetupFnc(CWnd *pWnd){
	 return ((CHMSUserSetup*)pWnd)->OnSaveHMSUserSetup();
} 
static int _OnCancelHMSUserSetupFnc(CWnd *pWnd){
	 return ((CHMSUserSetup*)pWnd)->OnCancelHMSUserSetup();
}
static int _OnSelectAllFnc(CWnd *pWnd){
	return ((CHMSUserSetup*)pWnd)->OnSelectAll();
}
static int _OnUnselectAllFnc(CWnd *pWnd){
	return ((CHMSUserSetup*)pWnd)->OnUnselectAll();
}
CHMSUserSetup::CHMSUserSetup(CWnd *pParent) : CGuiDialog(pParent)
{
	m_nDlgWidth = 815;
	m_nDlgHeight = 250;
	SetDefaultValues();
}
CHMSUserSetup::~CHMSUserSetup()
{
}
void CHMSUserSetup::OnCreateComponents()
{
	/*m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 805, 240);
	m_wndPermissionInformation.Create(this, _T("Permission Information"), 5, 245, 805, 585);
	m_wndSearchInformation.Create(this, _T("Search Information"), 365, 30, 800, 85);
	m_wndUserList.Create(this,10, 30, 360, 235); 
	m_wndPermList.Create(this,10, 270, 800, 580); 
	m_wndUserIDLabel.Create(this, _T("User ID"), 365, 90, 445, 115);
	m_wndUserID.Create(this,450, 90, 580, 115); 
	m_wndGroupLabel.Create(this, _T("Group"), 585, 90, 665, 115);
	m_wndGroup.Create(this,670, 90, 800, 115); 
	m_wndUserNameLabel.Create(this, _T("User Name"), 365, 120, 445, 145);
	m_wndUserName.Create(this,450, 120, 800, 145); 
	m_wndPasswordLabel.Create(this, _T("Password"), 365, 150, 445, 175);
	m_wndPassword.Create(this,450, 150, 580, 175); 
	m_wndConfirmLabel.Create(this, _T("Confirm"), 585, 150, 665, 175);
	m_wndConfirm.Create(this,670, 150, 800, 175); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 365, 180, 445, 205);
	m_wndDepartment.Create(this,450, 180, 800, 205); 
	m_wndAdd.Create(this, _T("&Add"), 380, 210, 460, 235);
	m_wndEdit.Create(this, _T("&Edit"), 465, 210, 545, 235);
	m_wndDelete.Create(this, _T("&Delete"), 550, 210, 630, 235);
	m_wndSave.Create(this, _T("&Save"), 635, 210, 715, 235);
	m_wndCancel.Create(this, _T("&Cancel"), 720, 210, 800, 235);
	m_wndApply.Create(this, _T("&Apply"), 725, 590, 805, 615);
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 370, 55, 450, 80);
	m_wndSearchName.Create(this,455, 55, 795, 80);*/

	m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 805, 240);
	m_wndSearchInformation.Create(this, _T("Search Information"), 365, 30, 800, 85);
	m_wndUserList.Create(this,10, 30, 360, 235); 
	m_wndUserIDLabel.Create(this, _T("User ID"), 365, 90, 445, 115);
	m_wndUserID.Create(this,450, 90, 580, 115); 
	m_wndGroupLabel.Create(this, _T("Group"), 585, 90, 665, 115);
	m_wndGroup.Create(this,670, 90, 800, 115); 
	m_wndUserNameLabel.Create(this, _T("User Name"), 365, 120, 445, 145);
	m_wndUserName.Create(this,450, 120, 800, 145); 
	m_wndPasswordLabel.Create(this, _T("Password"), 365, 150, 445, 175);
	m_wndPassword.Create(this,450, 150, 580, 175); 
	m_wndConfirmLabel.Create(this, _T("Confirm"), 585, 150, 665, 175);
	m_wndConfirm.Create(this,670, 150, 800, 175); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 365, 180, 445, 205);
	m_wndDepartment.Create(this,450, 180, 800, 205); 
	m_wndAdd.Create(this, _T("&Add"), 380, 210, 460, 235);
	m_wndEdit.Create(this, _T("&Edit"), 465, 210, 545, 235);
	m_wndDelete.Create(this, _T("&Delete"), 550, 210, 630, 235);
	m_wndSave.Create(this, _T("&Save"), 635, 210, 715, 235);
	m_wndCancel.Create(this, _T("&Cancel"), 720, 210, 800, 235);
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 370, 55, 450, 80);
	m_wndSearchName.Create(this,455, 55, 795, 80);
}

void CHMSUserSetup::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndUserID.SetLimitText(15);
	m_wndUserID.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndUserName.SetLimitText(65);
	m_wndUserName.SetCheckValue(true);
	m_wndUserName.SetInitCap(true);
	m_wndPassword.SetLimitText(254);
	m_wndPassword.SetNotEmpty(false);
	m_wndPassword.SetCheckValue(true);
	m_wndConfirm.SetLimitText(254);
	m_wndConfirm.SetNotEmpty(false);
	m_wndConfirm.SetCheckValue(true);

	m_wndPassword.SetPasswordChar(TCHAR(9679));
	m_wndPassword.ModifyStyle(0, ES_PASSWORD);

	m_wndConfirm.SetPasswordChar(TCHAR(9679));
	m_wndConfirm.ModifyStyle(0, ES_PASSWORD);

	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);
	m_wndSearchName.SetLimitText(65);
	//m_wndSearchName.SetCheckValue(true);


	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 80);
	m_wndUserList.InsertColumn(1, _T("User Name"), CFMT_TEXT, 250);


	//m_wndPermList.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	//m_wndPermList.InsertColumn(1, _T("Name"), CFMT_TEXT, 580);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	//m_wndPermList.SetCheckBox(TRUE);

	m_sys_userTbl.SetTableName(_T("sys_user"));
	m_sys_userTbl.AddField(_T("su_userid"), dfText, 15); 
	m_sys_userTbl.AddField(_T("su_groupid"), dfText, 1); 
	m_sys_userTbl.AddField(_T("su_name"), dfText, 65); 
	m_sys_userTbl.AddField(_T("su_password"), dfText, 254); 
	m_sys_userTbl.AddField(_T("su_deptid"), dfText, 7);
	m_sys_userTbl.AddField(_T("su_hms_xdept"), dfText, 7);

	m_sys_userpermTbl.SetTableName(_T("sys_userperm"));
	m_sys_userpermTbl.AddField(_T("sup_userid"), dfText, 15); 
	m_sys_userpermTbl.AddField(_T("sup_permid"), dfText, 11); 
	m_sys_userpermTbl.AddField(_T("sup_moduleid"), dfText, 11);
}
void CHMSUserSetup::OnSetWindowEvents()
{
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
	m_wndUserList.SetWindowText(_T("User Information"));
	m_wndUserList.AddEvent(1, _T("Delete"), _OnUserListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPermList.SetEvent(WE_SELCHANGE, _OnPermListSelectChangeFnc);
	m_wndPermList.SetEvent(WE_LOADDATA, _OnPermListLoadDataFnc);
	m_wndPermList.SetEvent(WE_DBLCLICK, _OnPermListDblClickFnc);
	//m_wndPermList.SetWindowText(_T("Permission Information"));
	//m_wndPermList.AddEvent(1, _T("Select All"), _OnSelectAllFnc);
	//m_wndPermList.AddEvent(2, _T("Unselect All"), _OnUnselectAllFnc);
	//m_wndPermList.SetEvent(WE_CHANGE, _OnPermListChangeFnc);
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	SetWindowText(_T("User Information"));
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSUserSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSUserSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSUserSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSUserSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSUserSetupFnc, 0, 'T', VK_CONTROL);*/

	OnUserListLoadData();
	if (m_wndUserList.GetItemCount() > 0)
	{
		m_wndUserList.SetCurSel(0);
		m_nIndex = 0;
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}

}
void CHMSUserSetup::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndUserID.GetDlgCtrlID(), m_szUserID);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndUserName.GetDlgCtrlID(), m_szUserName);
	DDX_Text(pDX, m_wndPassword.GetDlgCtrlID(), m_szPassword);
	DDX_Text(pDX, m_wndConfirm.GetDlgCtrlID(), m_szConfirm);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
}
void CHMSUserSetup::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_user WHERE su_userid='%s'"), m_szUserID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("su_userid"), m_szUserID);
		rs.GetValue(_T("su_groupid"), m_szGroupKey);
		rs.GetValue(_T("su_password"), m_szPassword);
		rs.GetValue(_T("su_name"), m_szUserName);
		rs.GetValue(_T("su_deptid"), m_szDepartmentKey);
		rs.GetValue(_T("su_hms_xdept"), m_szXDepartment);
		m_szConfirm = m_szPassword;
		SetMode(VM_VIEW);
		//OnPermListLoadData();
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CHMSUserSetup::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_fhe_userTbl.SetValue(_T("fu_userid"), m_szUserID);
	m_fhe_userTbl.SetValue(_T("fu_groupid"), m_szGroupKey);
	m_fhe_userTbl.SetValue(_T("fu_password"), m_szPassword);
	m_fhe_userTbl.SetValue(_T("fu_name"), m_szUserName);
	m_fhe_userTbl.SetValue(_T("fu_deptid"), m_szDepartmentKey);
	m_fhe_userTbl.SetValue(_T("fu_xdeptid"), m_szXDepartment);*/

	m_sys_userTbl.SetValue(_T("su_userid"), m_szUserID);
	m_sys_userTbl.SetValue(_T("su_groupid"), m_szGroupKey);
	m_sys_userTbl.SetValue(_T("su_password"), m_szPassword);
	m_sys_userTbl.SetValue(_T("su_name"), m_szUserName);
	m_sys_userTbl.SetValue(_T("su_deptid"), m_szDepartmentKey);
	m_sys_userTbl.SetValue(_T("su_hms_xdept"), m_szXDepartment);
}
void CHMSUserSetup::SetDefaultValues()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szTemp;
	StringLower(pMF->GetModuleID(), szTemp);
	m_szUserID = szTemp + _T("_");
	m_szGroupKey.Empty();
	m_szUserName.Empty();
	m_szPassword.Empty();
	m_szConfirm.Empty();
	m_szDepartmentKey.Empty();
	m_szXDepartment.Empty();
	m_szSearchName.Empty();

}
int CHMSUserSetup::SetMode(int nMode)
{
 		int nOldMode = GetMode();
		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues();
			/*if (m_wndPermList.GetItemCount() > 0)
				m_wndPermList.DeleteAllItems();*/
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndUserID.EnableWindow(FALSE);
			m_wndUserName.SetFocus();
			m_wndUserName.SetSel(m_wndUserName.GetWindowTextLength(), m_wndUserName.GetWindowTextLength());
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
		m_wndSearchName.EnableWindow(TRUE);
 		UpdateData(FALSE);
		if (GetMode() == VM_ADD)
		{
			m_wndUserID.SetFocus();
			m_wndUserID.SetSel(m_wndUserID.GetWindowTextLength(), m_wndUserID.GetWindowTextLength());
		}
 		return nOldMode; 
}
void CHMSUserSetup::OnUserListDblClick()
{
} 
void CHMSUserSetup::OnUserListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szUserID = m_wndUserList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CHMSUserSetup::OnUserListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSUserSetup();
	return 0;
} 
long CHMSUserSetup::OnUserListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, szWhere;
	m_wndUserList.BeginLoad(); 
	m_wndUserList.DeleteAllItems(); 
	int nCount = 0;

	if (!m_szSearchName.IsEmpty())
		szWhere.Format(_T(" WHERE upper(su_name) LIKE upper('%s%s%s') "), _T("%"), m_szSearchName, _T("%"));
	else
		szWhere.Empty();

	StringLower(pMF->GetModuleID(), szTemp);

	szSQL.Format(_T("SELECT su_userid AS UserID, su_name AS UserName FROM sys_user ")\
				 _T("WHERE upper(su_userid) LIKE upper('%s_%s') %s ORDER BY UserID, UserName"), 
				 szTemp, _T("%"), szWhere);
	nCount = rs.ExecSQL(szSQL);

	//_fmsg(_T("%s"), szSQL);

	while(!rs.IsEOF())
	{ 
		m_wndUserList.AddItems(
			rs.GetValue(_T("UserID")), 
			rs.GetValue(_T("UserName")), NULL);
		rs.MoveNext();
	}
	m_wndUserList.EndLoad(); 
	return nCount;
}
void CHMSUserSetup::OnPermListDblClick(){
	
} 
void CHMSUserSetup::OnPermListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSUserSetup::OnPermListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSUserSetup::OnPermListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPermList.BeginLoad(); 
	m_wndPermList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT	fp_id AS ID, fp_name AS Name, ")\
			     _T("case when fup_permid IS NOT NULL then 'Y' else 'N' end AS Flag ")\
				 _T("FROM fhe_permission ")\
				 _T("LEFT JOIN fhe_userperm ON(fp_id=fup_permid AND fp_moduleid=fup_moduleid AND fup_userid='%s') ")\
				 _T("WHERE fp_moduleid='%s' ")\
				 _T("ORDER BY fp_id"), m_szUserID, pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	CString szID, szName, szTemp;
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("ID"), szID);
		rs.GetValue(_T("Name"), szName);
		szTemp.Empty();
		for (int i = 0; i < szID.GetLength(); i++)
		{
			szTemp += _T(" ");
		}
		m_wndPermList.AddItems(szID, szTemp + szName, NULL);
		if (rs.GetValue(_T("Flag")) == _T("Y"))
			m_wndPermList.SetCheck(m_wndPermList.GetItemCount() - 1, true);
		if (szID.GetLength() == 2)
		{
			m_wndPermList.SetItemBkColor(m_wndPermList.GetItemCount() - 1, RGB(230, 230, 250), FALSE);
			m_wndPermList.SetItemTextColor(m_wndPermList.GetItemCount() - 1, RGB(0, 0, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndPermList.EndLoad(); 
	return nCount;
}
int CHMSUserSetup::OnPermListChange()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	return 0;
}
/*void CHMSUserSetup::OnUserIDChange(){
	
} */
/*void CHMSUserSetup::OnUserIDSetfocus(){
	
} */
/*void CHMSUserSetup::OnUserIDKillfocus(){
	
} */
int CHMSUserSetup::OnUserIDCheckValue()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM sys_user WHERE su_userid='%s'"), m_szUserID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndUserID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
void CHMSUserSetup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSUserSetup::OnGroupSelendok(){
	 
}
/*void CHMSUserSetup::OnGroupSetfocus(){
	
}*/
/*void CHMSUserSetup::OnGroupKillfocus(){
	
}*/
long CHMSUserSetup::OnGroupLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel ")\
				 _T("WHERE ss_id='sys_user_group' %s ORDER BY id, name"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSUserSetup::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSUserSetup::OnUserNameChange(){
	
} */
/*void CHMSUserSetup::OnUserNameSetfocus(){
	
} */
/*void CHMSUserSetup::OnUserNameKillfocus(){
	
} */
int CHMSUserSetup::OnUserNameCheckValue(){
	return 0;
} 
/*void CHMSUserSetup::OnPasswordChange(){
	
} */
/*void CHMSUserSetup::OnPasswordSetfocus(){
	
} */
/*void CHMSUserSetup::OnPasswordKillfocus(){
	
} */
int CHMSUserSetup::OnPasswordCheckValue(){
	return 0;
} 
/*void CHMSUserSetup::OnConfirmChange(){
	
} */
/*void CHMSUserSetup::OnConfirmSetfocus(){
	
} */
/*void CHMSUserSetup::OnConfirmKillfocus(){
	
} */
int CHMSUserSetup::OnConfirmCheckValue()
{
	UpdateData(TRUE);
	if (!m_szPassword.IsEmpty() && m_szConfirm != m_szPassword)
	{
		m_wndConfirm.SetToolTipMessage(_T("This value is invalid"));
		return -1;
	}
	return 0;
} 
void CHMSUserSetup::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
} 
void CHMSUserSetup::OnDepartmentSelendok()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sd_type AS Type FROM sys_dept WHERE sd_id='%s'"), m_szDepartmentKey);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("Type"), m_szXDepartment);
	}
}
/*void CHMSUserSetup::OnDepartmentSetfocus(){
	
}*/
/*void CHMSUserSetup::OnDepartmentKillfocus(){
	
}*/
long CHMSUserSetup::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept %s ORDER BY id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSUserSetup::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSUserSetup::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSUserSetup();
} 
void CHMSUserSetup::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSUserSetup();
} 
void CHMSUserSetup::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSUserSetup();
} 
void CHMSUserSetup::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSUserSetup();
} 
void CHMSUserSetup::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSUserSetup();
} 
void CHMSUserSetup::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	if (m_szUserID.IsEmpty())
		return;
	szSQL.Format(_T("DELETE FROM fhe_userperm WHERE fup_userid='%s'"), m_szUserID);
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0)
	{
		for (int i = 0; i < m_wndPermList.GetItemCount(); i++)
		{
			if (m_wndPermList.GetCheck(i))
			{
				m_sys_userpermTbl.SetValue(_T("fup_userid"), m_szUserID);
				m_sys_userpermTbl.SetValue(_T("fup_permid"), m_wndPermList.GetItemText(i, 0));
				m_sys_userpermTbl.SetValue(_T("fup_moduleid"), pMF->GetModuleID());
				szSQL = m_sys_userpermTbl.GetInsertSQL();
				ret = pMF->ExecSQL(szSQL);
				if (ret < 0)
					break;
			}
		}
		if (ret > 0)
			ShowMessageBox(_T("Update permit successfully!"), MB_OK | MB_ICONINFORMATION);
		else
			ShowMessageBox(_T("Can not update permit!"), MB_OK | MB_ICONERROR);
	}
} 
/*void CHMSUserSetup::OnSearchNameChange(){
	
} */
/*void CHMSUserSetup::OnSearchNameSetfocus(){
	
} */
/*void CHMSUserSetup::OnSearchNameKillfocus(){
	
} */
int CHMSUserSetup::OnSearchNameCheckValue()
{
	UpdateData(TRUE);
	OnUserListLoadData();
	return 0;
} 
int CHMSUserSetup::OnAddHMSUserSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSUserSetup::OnEditHMSUserSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUserSetup::OnDeleteHMSUserSetup()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndUserList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1;
	int ret = -1;
	szSQL.Format(_T("DELETE FROM sys_user WHERE su_userid='%s'"), m_szUserID); 
 	ret = pMF->ExecSQL(szSQL);
	if (ret >= 0)
	{
		szSQL.Format(_T("DELETE FROM sys_userperm WHERE sup_userid='%s' AND sup_moduleid='%s'"),
					 m_szUserID, pMF->GetModuleID());
		ret = pMF->ExecSQL(szSQL);
 		if(ret >= 0)
		{ 
			OnUserListLoadData();
			if (m_wndUserList.GetItemCount() > 0)
			{
				SetItemSel(&m_wndUserList, m_szUserID, m_nIndex);		
			}
			else
			{
				SetMode(VM_NONE);
				//m_wndPermList.DeleteAllItems();
				m_wndAdd.SetFocus();
			} 
 		}
	}
	return 0;
}
int CHMSUserSetup::OnSaveHMSUserSetup()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	bool bAdd = false;
	int ret = -1;
 	if(GetMode() == VM_ADD)
	{ 
		bAdd = true;
		szSQL = m_sys_userTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE su_userid='%s' "), m_szUserID); 
		szSQL = m_sys_userTbl.GetUpdateSQL(_T("su_userid")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL);
 	ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSUserSetupListLoadData(); 
 		//SetMode(VM_VIEW);
		/*if(GetMode() == VM_ADD)
		{ 
			szSQL = m_fhe_userTbl.GetInsertSQL(); 
 		} 
 		else if(GetMode() == VM_EDIT)
		{ 
 			CString szWhere; 
			szWhere.Format(_T(" WHERE fu_userid='%s' "), m_szUserID); 
			szSQL = m_fhe_userTbl.GetUpdateSQL(_T("fu_userid")); 
 			szSQL += szWhere; 
 		}
		ret = pMF->ExecSQL(szSQL);*/
		if (GetMode() == VM_ADD)
		{
			m_sys_userpermTbl.SetValue(_T("sup_userid"), m_szUserID);
			m_sys_userpermTbl.SetValue(_T("sup_permid"), pMF->m_szPermID);
			m_sys_userpermTbl.SetValue(_T("sup_moduleid"), pMF->GetModuleID());
			szSQL = m_sys_userpermTbl.GetInsertSQL();
			pMF->ExecSQL(szSQL);
		}
		OnUserListLoadData();
		SetItemSel(&m_wndUserList, m_szUserID, m_nIndex);
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 	/*else 
 	{ 
 	}*/ 
 	return ret; 
 	//return 0; 
}
int CHMSUserSetup::OnCancelHMSUserSetup()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndUserList.GetCurSel() >= 0)
		{
			m_szUserID = m_wndUserList.GetItemText(m_wndUserList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CHMSUserSetup::OnHMSUserSetupListLoadData(){
	return 0;
}

void CHMSUserSetup::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				m_nIndex = i;
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				pList->SetCurSel(m_nIndex);				
			}
		}
	}
}

int CHMSUserSetup::OnSelectAll()
{
	for (int i = 0; i < m_wndPermList.GetItemCount(); i++)
	{
		if (!m_wndPermList.GetCheck(i))
			m_wndPermList.SetCheck(i, TRUE);
	}
	return 0;
}

int CHMSUserSetup::OnUnselectAll()
{
	for (int i = 0; i < m_wndPermList.GetItemCount(); i++)
	{
		if (m_wndPermList.GetCheck(i))
			m_wndPermList.SetCheck(i, FALSE);
	}
	return 0;
}