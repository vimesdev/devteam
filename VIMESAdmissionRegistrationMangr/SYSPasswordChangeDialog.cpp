#include "SYSPasswordChangeDialog.h"
//#include "stdafx.h"
#include "GuiMainFrame.h"
/*static void _OnOldPasswordChangeFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnOldPasswordChange();
} */
/*static void _OnOldPasswordSetfocusFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnOldPasswordSetfocus();} */ 
/*static void _OnOldPasswordKillfocusFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnOldPasswordKillfocus();
} */
static int _OnOldPasswordCheckValueFnc(CWnd *pWnd){
	return ((CSYSPasswordChangeDialog *)pWnd)->OnOldPasswordCheckValue();
} 
/*static void _OnNewPasswordChangeFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnNewPasswordChange();
} */
/*static void _OnNewPasswordSetfocusFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnNewPasswordSetfocus();} */ 
/*static void _OnNewPasswordKillfocusFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnNewPasswordKillfocus();
} */
static int _OnNewPasswordCheckValueFnc(CWnd *pWnd){
	return ((CSYSPasswordChangeDialog *)pWnd)->OnNewPasswordCheckValue();
} 
/*static void _OnConfirmPasswordChangeFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnConfirmPasswordChange();
} */
/*static void _OnConfirmPasswordSetfocusFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnConfirmPasswordSetfocus();} */ 
/*static void _OnConfirmPasswordKillfocusFnc(CWnd *pWnd){
	((CSYSPasswordChangeDialog *)pWnd)->OnConfirmPasswordKillfocus();
} */
static int _OnConfirmPasswordCheckValueFnc(CWnd *pWnd){
	return ((CSYSPasswordChangeDialog *)pWnd)->OnConfirmPasswordCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CSYSPasswordChangeDialog *pVw = (CSYSPasswordChangeDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSYSPasswordChangeDialog *pVw = (CSYSPasswordChangeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddSYSPasswordChangeDialogFnc(CWnd *pWnd){
	 return ((CSYSPasswordChangeDialog*)pWnd)->OnAddSYSPasswordChangeDialog();
} 
static int _OnEditSYSPasswordChangeDialogFnc(CWnd *pWnd){
	 return ((CSYSPasswordChangeDialog*)pWnd)->OnEditSYSPasswordChangeDialog();
} 
static int _OnDeleteSYSPasswordChangeDialogFnc(CWnd *pWnd){
	 return ((CSYSPasswordChangeDialog*)pWnd)->OnDeleteSYSPasswordChangeDialog();
} 
static int _OnSaveSYSPasswordChangeDialogFnc(CWnd *pWnd){
	 return ((CSYSPasswordChangeDialog*)pWnd)->OnSaveSYSPasswordChangeDialog();
} 
static int _OnCancelSYSPasswordChangeDialogFnc(CWnd *pWnd){
	 return ((CSYSPasswordChangeDialog*)pWnd)->OnCancelSYSPasswordChangeDialog();
} 
CSYSPasswordChangeDialog::CSYSPasswordChangeDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 305;
	m_nDlgHeight = 145;
	SetDefaultValues();
}
CSYSPasswordChangeDialog::~CSYSPasswordChangeDialog(){
}
void CSYSPasswordChangeDialog::OnCreateComponents(){
	m_wndPermissionSetting.Create(this, _T("Permission Setting"), 5, 5, 290, 108);
	m_wndOldPasswordLabel.Create(this, _T("Old Password"), 11, 27, 131, 49);
	m_wndOldPassword.SetPassword(true);
	m_wndOldPassword.SetReadOnly(TRUE);
	m_wndOldPassword.Create(this,136, 27, 286, 49); 
	m_wndNewPasswordLabel.Create(this, _T("New Password"), 11, 54, 131, 76);
	m_wndNewPassword.SetPassword(true);
	m_wndNewPassword.Create(this,136, 54, 286, 76); 
	m_wndConfirmPasswordLabel.Create(this, _T("Confirm Password"), 11, 81, 131, 103);
	m_wndConfirmPassword.SetPassword(true);
	m_wndConfirmPassword.Create(this,136, 81, 286, 103); 
	m_wndApply.Create(this, _T("&Apply"), 145, 113, 215, 135);
	m_wndCancel.Create(this, _T("&Cancel"), 220, 113, 290, 135);

}
void CSYSPasswordChangeDialog::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndOldPassword.SetLimitText(35);
	m_wndOldPassword.SetCheckValue(true);
	m_wndOldPassword.SetNotEmpty(false);
	m_wndNewPassword.SetLimitText(35);
	//m_wndNewPassword.SetCheckValue(true);
	m_wndConfirmPassword.SetLimitText(35);
	//m_wndConfirmPassword.SetCheckValue(true);
	GetDataToScreen();
//	m_wndOldPassword.EnableWindow(false);
//	m_wndNewPassword.SetFocus();
	m_wndOldPassword.SetFocus();

}
void CSYSPasswordChangeDialog::OnSetWindowEvents(){
	//m_wndOldPassword.SetEvent(WE_CHANGE, _OnOldPasswordChangeFnc);
	//m_wndOldPassword.SetEvent(WE_SETFOCUS, _OnOldPasswordSetfocusFnc);
	//m_wndOldPassword.SetEvent(WE_KILLFOCUS, _OnOldPasswordKillfocusFnc);
	m_wndOldPassword.SetEvent(WE_CHECKVALUE, _OnOldPasswordCheckValueFnc);
	//m_wndNewPassword.SetEvent(WE_CHANGE, _OnNewPasswordChangeFnc);
	//m_wndNewPassword.SetEvent(WE_SETFOCUS, _OnNewPasswordSetfocusFnc);
	//m_wndNewPassword.SetEvent(WE_KILLFOCUS, _OnNewPasswordKillfocusFnc);
	m_wndNewPassword.SetEvent(WE_CHECKVALUE, _OnNewPasswordCheckValueFnc);
	//m_wndConfirmPassword.SetEvent(WE_CHANGE, _OnConfirmPasswordChangeFnc);
	//m_wndConfirmPassword.SetEvent(WE_SETFOCUS, _OnConfirmPasswordSetfocusFnc);
	//m_wndConfirmPassword.SetEvent(WE_KILLFOCUS, _OnConfirmPasswordKillfocusFnc);
	m_wndConfirmPassword.SetEvent(WE_CHECKVALUE, _OnConfirmPasswordCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CSYSPasswordChangeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOldPassword.GetDlgCtrlID(), m_szOldPassword);
	DDX_Text(pDX, m_wndNewPassword.GetDlgCtrlID(), m_szNewPassword);
	DDX_Text(pDX, m_wndConfirmPassword.GetDlgCtrlID(), m_szConfirmPassword);

}
void CSYSPasswordChangeDialog::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_user WHERE lower(su_userid)=lower('%s') "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
	//	rs.GetValue(_T("su_password"), m_szOldPassword);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_NONE);

}
void CSYSPasswordChangeDialog::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CSYSPasswordChangeDialog::SetDefaultValues(){

	m_szOldPassword.Empty();
	m_szNewPassword.Empty();
	m_szConfirmPassword.Empty();

}
int CSYSPasswordChangeDialog::SetMode(int nMode){ 
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
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
/*void CSYSPasswordChangeDialog::OnOldPasswordChange(){
	
} */
/*void CSYSPasswordChangeDialog::OnOldPasswordSetfocus(){
	
} */
/*void CSYSPasswordChangeDialog::OnOldPasswordKillfocus(){
	
} */
int CSYSPasswordChangeDialog::OnOldPasswordCheckValue(){
	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szPassword, szOldPassword;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select su_password, md5('%s') as su_oldpassword from sys_user where su_userid='%s'"), m_szOldPassword, pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("su_password"), szPassword);
	rs.GetValue(_T("su_oldpassword"), szOldPassword);
//_msg(_T("%s, |%s|%s|"), szSQL, szPassword, szOldPassword);
	if(szPassword != szOldPassword)
	{

		m_wndOldPassword.SetToolTipMessage(_T("Invalid password"));
		return -1;
	}
	return 0;
} 
/*void CSYSPasswordChangeDialog::OnNewPasswordChange(){
	
} */
/*void CSYSPasswordChangeDialog::OnNewPasswordSetfocus(){
	
} */
/*void CSYSPasswordChangeDialog::OnNewPasswordKillfocus(){
	
} */
int CSYSPasswordChangeDialog::OnNewPasswordCheckValue(){
	return 0;
} 
/*void CSYSPasswordChangeDialog::OnConfirmPasswordChange(){
	
} */
/*void CSYSPasswordChangeDialog::OnConfirmPasswordSetfocus(){
	
} */
/*void CSYSPasswordChangeDialog::OnConfirmPasswordKillfocus(){
	
} */
int CSYSPasswordChangeDialog::OnConfirmPasswordCheckValue(){
	return 0;
} 
void CSYSPasswordChangeDialog::OnApplySelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnSaveSYSPasswordChangeDialog();	
} 
void CSYSPasswordChangeDialog::OnCancelSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CSYSPasswordChangeDialog::OnAddSYSPasswordChangeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CSYSPasswordChangeDialog::OnEditSYSPasswordChangeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CSYSPasswordChangeDialog::OnDeleteSYSPasswordChangeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelSYSPasswordChangeDialog(); 
 	}
return 0;
 } 
int CSYSPasswordChangeDialog::OnSaveSYSPasswordChangeDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
/*
	szSQL.Format(_T("SELECT su_password=md5('%s') WHERE lower(su_userid)=lower('%s') "), m_szOldPassword, pMF->GetCurrentUser());
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(rs.GetStringValue() == _T("f"))
	{
		ShowMessageBox(_T("Invalid password"), MB_OK|MB_ICONWARNING);
		return -1;
	}
*/
	if(m_szNewPassword != m_szConfirmPassword){
		ShowMessageBox(_T("Invalid confirm password"), MB_OK|MB_ICONWARNING);
		return -1;
	}
 	if(GetMode() == VM_EDIT){ 
		szSQL.Format(_T("UPDATE sys_user SET su_password=md5('%s') WHERE lower(su_userid)=lower('%s') "), m_szNewPassword, pMF->GetCurrentUser());
 	} 
// //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSYSPasswordChangeDialog::OnCancelSYSPasswordChangeDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
 	 
 	return 0;
} 
int CSYSPasswordChangeDialog::OnSYSPasswordChangeDialogListLoadData(){
	return 0;
}
