#include "HMSCreateUser.h"
#include "MainFrm.h"
/*static void _OnUserIDChangeFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnUserIDChange();
} */
/*static void _OnUserIDSetfocusFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnUserIDSetfocus();} */ 
/*static void _OnUserIDKillfocusFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnUserIDKillfocus();
} */
static int _OnUserIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateUser *)pWnd)->OnUserIDCheckValue();
} 
/*static void _OnPasswordChangeFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnPasswordChange();
} */
/*static void _OnPasswordSetfocusFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnPasswordSetfocus();} */ 
/*static void _OnPasswordKillfocusFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnPasswordKillfocus();
} */
static int _OnPasswordCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateUser *)pWnd)->OnPasswordCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSCreateUser *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateUser *)pWnd)->OnNameCheckValue();
} 
static void _OnCreateSelectFnc(CWnd *pWnd){
	CHMSCreateUser *pVw = (CHMSCreateUser *)pWnd;
	pVw->OnCreateSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCreateUser *pVw = (CHMSCreateUser *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCreateUserFnc(CWnd *pWnd){
	 return ((CHMSCreateUser*)pWnd)->OnAddHMSCreateUser();
} 
static int _OnEditHMSCreateUserFnc(CWnd *pWnd){
	 return ((CHMSCreateUser*)pWnd)->OnEditHMSCreateUser();
} 
static int _OnDeleteHMSCreateUserFnc(CWnd *pWnd){
	 return ((CHMSCreateUser*)pWnd)->OnDeleteHMSCreateUser();
} 
static int _OnSaveHMSCreateUserFnc(CWnd *pWnd){
	 return ((CHMSCreateUser*)pWnd)->OnSaveHMSCreateUser();
} 
static int _OnCancelHMSCreateUserFnc(CWnd *pWnd){
	 return ((CHMSCreateUser*)pWnd)->OnCancelHMSCreateUser();
} 
CHMSCreateUser::CHMSCreateUser(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCreateUser::~CHMSCreateUser(){
}
void CHMSCreateUser::OnCreateComponents(){
	m_wndCreateUser.Create(this, _T("Create User"), 5, 5, 380, 90);
	m_wndUserIDLabel.Create(this, _T("User ID"), 10, 30, 90, 55);
	m_wndUserID.Create(this,95, 30, 190, 55); 
	m_wndPasswordLabel.Create(this, _T("Password"), 195, 30, 275, 55);
	m_wndPassword.Create(this,280, 30, 375, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 375, 85); 
	m_wndCreate.Create(this, _T("&Create"), 215, 95, 295, 120);
	m_wndClose.Create(this, _T("&Close"), 300, 95, 380, 120);

}
void CHMSCreateUser::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUserID.SetLimitText(35);
	m_wndUserID.SetCheckValue(true);
	m_wndPassword.SetLimitText(35);
	//m_wndPassword.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);

}
void CHMSCreateUser::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndUserID.SetEvent(WE_CHANGE, _OnUserIDChangeFnc);
	//m_wndUserID.SetEvent(WE_SETFOCUS, _OnUserIDSetfocusFnc);
	//m_wndUserID.SetEvent(WE_KILLFOCUS, _OnUserIDKillfocusFnc);
	m_wndUserID.SetEvent(WE_CHECKVALUE, _OnUserIDCheckValueFnc);
	//m_wndPassword.SetEvent(WE_CHANGE, _OnPasswordChangeFnc);
	//m_wndPassword.SetEvent(WE_SETFOCUS, _OnPasswordSetfocusFnc);
	//m_wndPassword.SetEvent(WE_KILLFOCUS, _OnPasswordKillfocusFnc);
	m_wndPassword.SetEvent(WE_CHECKVALUE, _OnPasswordCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndCreate.SetEvent(WE_CLICK, _OnCreateSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);

}
void CHMSCreateUser::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndUserID.GetDlgCtrlID(), m_szUserID);
	DDX_Text(pDX, m_wndPassword.GetDlgCtrlID(), m_szPassword);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSCreateUser::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCreateUser::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCreateUser::SetDefaultValues(){

	m_szUserID.Empty();
	m_szPassword.Empty();
	m_szName.Empty();

}
int CHMSCreateUser::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CHMSCreateUser::OnUserIDChange(){
	
} */
/*void CHMSCreateUser::OnUserIDSetfocus(){
	
} */
/*void CHMSCreateUser::OnUserIDKillfocus(){
	
} */
int CHMSCreateUser::OnUserIDCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	//Check if user id exists
	szSQL.Format(_T("SELECT count(*) FROM sys_user WHERE su_userid = '%s'"), m_szUserID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		//AfxMessageBox(_T("This user id is existing!"));
		return -1;
	}
	return 0;
} 
/*void CHMSCreateUser::OnPasswordChange(){
	
} */
/*void CHMSCreateUser::OnPasswordSetfocus(){
	
} */
/*void CHMSCreateUser::OnPasswordKillfocus(){
	
} */
int CHMSCreateUser::OnPasswordCheckValue(){
	return 0;
} 
/*void CHMSCreateUser::OnNameChange(){
	
} */
/*void CHMSCreateUser::OnNameSetfocus(){
	
} */
/*void CHMSCreateUser::OnNameKillfocus(){
	
} */
int CHMSCreateUser::OnNameCheckValue(){
	return 0;
} 
void CHMSCreateUser::OnCreateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsValidateData())
 		return;
	CString szSQL;
	szSQL.Format(_T("DUP_USER('%s', '%s', '%s', '%s')"), m_szOriginID, m_szUserID, m_szPassword, m_szName);
	pMF->ExecDML(szSQL);
} 
void CHMSCreateUser::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCreateUser::OnAddHMSCreateUser(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCreateUser::OnEditHMSCreateUser(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCreateUser::OnDeleteHMSCreateUser(){
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
 		OnCancelHMSCreateUser();
 	}
	return 0;
}
int CHMSCreateUser::OnSaveHMSCreateUser(){
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
 		//OnHMSCreateUserListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCreateUser::OnCancelHMSCreateUser(){
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
int CHMSCreateUser::OnHMSCreateUserListLoadData(){
	return 0;
}
