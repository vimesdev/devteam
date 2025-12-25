#include "VIMESUserSetup.h"
#include "MainFrm.h"
static void _OnSearchDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESUserSetup* )pWnd)->OnSearchDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchDeptSelendokFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnSearchDeptSelendok();
}
/*static void _OnSearchDeptSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnSearchDeptKillfocus();
}*/
/*static void _OnSearchDeptKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnSearchDeptKillfocus();
}*/
static long _OnSearchDeptLoadDataFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnSearchDeptLoadData();
}
/*static void _OnSearchDeptAddNewFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnSearchDeptAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnSearchNameCheckValue();
} 
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESUserSetup*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CVIMESUserSetup*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESUserSetup*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESUserSetup*)pWnd)->OnUserListDeleteItem();
} 
static long _OnPermListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESUserSetup*)pWnd)->OnPermListLoadData();
} 
static void _OnPermListDblClickFnc(CWnd *pWnd){
	((CVIMESUserSetup*)pWnd)->OnPermListDblClick();
} 
static void _OnPermListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESUserSetup*)pWnd)->OnPermListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESUserSetup*)pWnd)->OnPermListDeleteItem();
} 
/*static void _OnUserIDChangeFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnUserIDChange();
} */
/*static void _OnUserIDSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnUserIDSetfocus();} */ 
/*static void _OnUserIDKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnUserIDKillfocus();
} */
static int _OnUserIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnUserIDCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESUserSetup* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnUserNameChangeFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnUserNameChange();
} */
/*static void _OnUserNameSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnUserNameSetfocus();} */ 
/*static void _OnUserNameKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnUserNameKillfocus();
} */
static int _OnUserNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnUserNameCheckValue();
} 
/*static void _OnPasswordChangeFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnPasswordChange();
} */
/*static void _OnPasswordSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnPasswordSetfocus();} */ 
/*static void _OnPasswordKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnPasswordKillfocus();
} */
static int _OnPasswordCheckValueFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnPasswordCheckValue();
} 
/*static void _OnConfirmChangeFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnConfirmChange();
} */
/*static void _OnConfirmSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnConfirmSetfocus();} */ 
/*static void _OnConfirmKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnConfirmKillfocus();
} */
static int _OnConfirmCheckValueFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnConfirmCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESUserSetup* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESUserSetup* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CVIMESUserSetup *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CVIMESUserSetup *)pWnd)->OnRoomAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESUserSetup *pVw = (CVIMESUserSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESUserSetup *pVw = (CVIMESUserSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESUserSetup *pVw = (CVIMESUserSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESUserSetup *pVw = (CVIMESUserSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESUserSetup *pVw = (CVIMESUserSetup *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CVIMESUserSetup *pVw = (CVIMESUserSetup *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddVIMESUserSetupFnc(CWnd *pWnd){
	 return ((CVIMESUserSetup*)pWnd)->OnAddVIMESUserSetup();
} 
static int _OnEditVIMESUserSetupFnc(CWnd *pWnd){
	 return ((CVIMESUserSetup*)pWnd)->OnEditVIMESUserSetup();
} 
static int _OnDeleteVIMESUserSetupFnc(CWnd *pWnd){
	 return ((CVIMESUserSetup*)pWnd)->OnDeleteVIMESUserSetup();
} 
static int _OnSaveVIMESUserSetupFnc(CWnd *pWnd){
	 return ((CVIMESUserSetup*)pWnd)->OnSaveVIMESUserSetup();
} 
static int _OnCancelVIMESUserSetupFnc(CWnd *pWnd){
	 return ((CVIMESUserSetup*)pWnd)->OnCancelVIMESUserSetup();
} 
CVIMESUserSetup::CVIMESUserSetup(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CVIMESUserSetup::~CVIMESUserSetup(){
}
void CVIMESUserSetup::OnCreateComponents(){
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
void CVIMESUserSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchDept.SetCheckValue(true);
	m_wndSearchDept.LimitText(1024);
	m_wndSearchName.SetLimitText(1024);
	m_wndSearchName.SetCheckValue(true);
	m_wndUserID.SetLimitText(15);
	m_wndUserID.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndUserName.SetLimitText(65);
	m_wndUserName.SetCheckValue(true);
	m_wndPassword.SetLimitText(81);
	m_wndPassword.SetCheckValue(true);
	m_wndConfirm.SetLimitText(1024);
	m_wndConfirm.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndSearchDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSearchDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 80);
	m_wndUserList.InsertColumn(1, _T("User Name"), CFMT_TEXT, 180);


	m_wndPermList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPermList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_vimes_userTbl.SetTableName(_T("vimes_user"));
	m_vimes_userTbl.AddField(_T("vmsu_userid"), dfText, 15); 
	m_vimes_userTbl.AddField(_T("vmsu_groupid"), dfInteger); 
	m_vimes_userTbl.AddField(_T("vmsu_password"), dfText, 81); 
	m_vimes_userTbl.AddField(_T("vmsu_deptid"), dfText, 7); 
	m_vimes_userTbl.AddField(_T("vmsu_name"), dfText, 65); 

}
void CVIMESUserSetup::OnSetWindowEvents(){
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
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
	m_wndUserList.AddEvent(1, _T("Delete"), _OnUserListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPermList.SetEvent(WE_SELCHANGE, _OnPermListSelectChangeFnc);
	m_wndPermList.SetEvent(WE_LOADDATA, _OnPermListLoadDataFnc);
	m_wndPermList.SetEvent(WE_DBLCLICK, _OnPermListDblClickFnc);
	m_wndPermList.AddEvent(1, _T("Delete"), _OnPermListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESUserSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESUserSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESUserSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESUserSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESUserSetupFnc, 0, 'T', VK_CONTROL);

}
void CVIMESUserSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSearchDept.GetDlgCtrlID(), m_szSearchDeptKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Text(pDX, m_wndUserID.GetDlgCtrlID(), m_szUserID);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndUserName.GetDlgCtrlID(), m_szUserName);
	DDX_Text(pDX, m_wndPassword.GetDlgCtrlID(), m_szPassword);
	DDX_Text(pDX, m_wndConfirm.GetDlgCtrlID(), m_szConfirm);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CVIMESUserSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("vmsu_userid"), m_szUserID);
	rs.GetValue(_T("vmsu_groupid"), m_szGroupKey);
	rs.GetValue(_T("vmsu_password"), m_szPassword);
	rs.GetValue(_T("vmsu_deptid"), m_szDepartmentKey);
	rs.GetValue(_T("vmsu_name"), m_szUserName);

}
void CVIMESUserSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_vimes_userTbl.SetValue(_T("vmsu_userid"), m_szUserID);
	m_vimes_userTbl.SetValue(_T("vmsu_groupid"), m_szGroupKey);
	m_vimes_userTbl.SetValue(_T("vmsu_password"), m_szPassword);
	m_vimes_userTbl.SetValue(_T("vmsu_deptid"), m_szDepartmentKey);
	m_vimes_userTbl.SetValue(_T("vmsu_name"), m_szUserName);

}
void CVIMESUserSetup::SetDefaultValues(){

	m_szSearchDeptKey.Empty();
	m_szSearchName.Empty();
	m_szUserID.Empty();
	m_szGroupKey.Empty();
	m_szUserName.Empty();
	m_szPassword.Empty();
	m_szConfirm.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();

}
int CVIMESUserSetup::SetMode(int nMode){
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
void CVIMESUserSetup::OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnSearchDeptSelendok(){
	 
}
/*void CVIMESUserSetup::OnSearchDeptSetfocus(){
	
}*/
/*void CVIMESUserSetup::OnSearchDeptKillfocus(){
	
}*/
long CVIMESUserSetup::OnSearchDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchDept.IsSearchKey() && !m_szSearchDeptKey.IsEmpty()){
	};
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
*/
	return 0;
}
/*void CVIMESUserSetup::OnSearchDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESUserSetup::OnSearchNameChange(){
	
} */
/*void CVIMESUserSetup::OnSearchNameSetfocus(){
	
} */
/*void CVIMESUserSetup::OnSearchNameKillfocus(){
	
} */
int CVIMESUserSetup::OnSearchNameCheckValue(){
	return 0;
} 
void CVIMESUserSetup::OnUserListDblClick(){
	
} 
void CVIMESUserSetup::OnUserListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESUserSetup::OnUserListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESUserSetup::OnUserListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndUserList.BeginLoad(); 
	m_wndUserList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserList.AddItems(
			rs.GetValue(_T("UserID")), 
			rs.GetValue(_T("UserName")), NULL);
		rs.MoveNext();
	}
	m_wndUserList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CVIMESUserSetup::OnPermListDblClick(){
	
} 
void CVIMESUserSetup::OnPermListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESUserSetup::OnPermListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESUserSetup::OnPermListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPermList.BeginLoad(); 
	m_wndPermList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPermList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndPermList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CVIMESUserSetup::OnUserIDChange(){
	
} */
/*void CVIMESUserSetup::OnUserIDSetfocus(){
	
} */
/*void CVIMESUserSetup::OnUserIDKillfocus(){
	
} */
int CVIMESUserSetup::OnUserIDCheckValue(){
	return 0;
} 
void CVIMESUserSetup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnGroupSelendok(){
	 
}
/*void CVIMESUserSetup::OnGroupSetfocus(){
	
}*/
/*void CVIMESUserSetup::OnGroupKillfocus(){
	
}*/
long CVIMESUserSetup::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESUserSetup::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESUserSetup::OnUserNameChange(){
	
} */
/*void CVIMESUserSetup::OnUserNameSetfocus(){
	
} */
/*void CVIMESUserSetup::OnUserNameKillfocus(){
	
} */
int CVIMESUserSetup::OnUserNameCheckValue(){
	return 0;
} 
/*void CVIMESUserSetup::OnPasswordChange(){
	
} */
/*void CVIMESUserSetup::OnPasswordSetfocus(){
	
} */
/*void CVIMESUserSetup::OnPasswordKillfocus(){
	
} */
int CVIMESUserSetup::OnPasswordCheckValue(){
	return 0;
} 
/*void CVIMESUserSetup::OnConfirmChange(){
	
} */
/*void CVIMESUserSetup::OnConfirmSetfocus(){
	
} */
/*void CVIMESUserSetup::OnConfirmKillfocus(){
	
} */
int CVIMESUserSetup::OnConfirmCheckValue(){
	return 0;
} 
void CVIMESUserSetup::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnDepartmentSelendok(){
	 
}
/*void CVIMESUserSetup::OnDepartmentSetfocus(){
	
}*/
/*void CVIMESUserSetup::OnDepartmentKillfocus(){
	
}*/
long CVIMESUserSetup::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESUserSetup::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESUserSetup::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnRoomSelendok(){
	 
}
/*void CVIMESUserSetup::OnRoomSetfocus(){
	
}*/
/*void CVIMESUserSetup::OnRoomKillfocus(){
	
}*/
long CVIMESUserSetup::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESUserSetup::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESUserSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESUserSetup::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESUserSetup::OnAddVIMESUserSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESUserSetup::OnEditVIMESUserSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESUserSetup::OnDeleteVIMESUserSetup(){
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
 		OnCancelVIMESUserSetup(); 
 	}
	return 0;
}
int CVIMESUserSetup::OnSaveVIMESUserSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_vimes_userTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_vimes_userTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESUserSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESUserSetup::OnCancelVIMESUserSetup(){
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
int CVIMESUserSetup::OnVIMESUserSetupListLoadData(){
	return 0;
}
