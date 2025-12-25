#include "AdChangePasswordDialog.h"
//#include "stdafx.h"
#include "MainFrame_E10.h"
/*static void _OnOldPasswordChangeFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnOldPasswordChange();
} */
/*static void _OnOldPasswordSetfocusFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnOldPasswordSetfocus();} */ 
/*static void _OnOldPasswordKillfocusFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnOldPasswordKillfocus();
} */
static int _OnOldPasswordCheckValueFnc(CWnd *pWnd){
	return ((CAdChangePasswordDialog *)pWnd)->OnOldPasswordCheckValue();
} 
/*static void _OnNewPasswordChangeFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnNewPasswordChange();
} */
/*static void _OnNewPasswordSetfocusFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnNewPasswordSetfocus();} */ 
/*static void _OnNewPasswordKillfocusFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnNewPasswordKillfocus();
} */
static int _OnNewPasswordCheckValueFnc(CWnd *pWnd){
	return ((CAdChangePasswordDialog *)pWnd)->OnNewPasswordCheckValue();
} 
/*static void _OnConfirmPasswordChangeFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnConfirmPasswordChange();
} */
/*static void _OnConfirmPasswordSetfocusFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnConfirmPasswordSetfocus();} */ 
/*static void _OnConfirmPasswordKillfocusFnc(CWnd *pWnd){
	((CAdChangePasswordDialog *)pWnd)->OnConfirmPasswordKillfocus();
} */
static int _OnConfirmPasswordCheckValueFnc(CWnd *pWnd){
	return ((CAdChangePasswordDialog *)pWnd)->OnConfirmPasswordCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CAdChangePasswordDialog *pVw = (CAdChangePasswordDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAdChangePasswordDialog *pVw = (CAdChangePasswordDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddAdChangePasswordDialogFnc(CWnd *pWnd){
	 return ((CAdChangePasswordDialog*)pWnd)->OnAddAdChangePasswordDialog();
} 
static int _OnEditAdChangePasswordDialogFnc(CWnd *pWnd){
	 return ((CAdChangePasswordDialog*)pWnd)->OnEditAdChangePasswordDialog();
} 
static int _OnDeleteAdChangePasswordDialogFnc(CWnd *pWnd){
	 return ((CAdChangePasswordDialog*)pWnd)->OnDeleteAdChangePasswordDialog();
} 
static int _OnSaveAdChangePasswordDialogFnc(CWnd *pWnd){
	 return ((CAdChangePasswordDialog*)pWnd)->OnSaveAdChangePasswordDialog();
} 
static int _OnCancelAdChangePasswordDialogFnc(CWnd *pWnd){
	 return ((CAdChangePasswordDialog*)pWnd)->OnCancelAdChangePasswordDialog();
} 
CAdChangePasswordDialog::CAdChangePasswordDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 305;
	m_nDlgHeight = 145;
	SetDefaultValues();
}
CAdChangePasswordDialog::~CAdChangePasswordDialog(){
}
void CAdChangePasswordDialog::OnCreateComponents(){
	m_wndPasswordSetting.Create(this, _T("Change your password"), 5, 5, 330, 120);
	m_wndOldPasswordLabel.Create(this, _T("Current password"), 10, 30, 160, 55);
	m_wndOldPassword.SetPassword(true);
	m_wndOldPassword.Create(this,165, 30, 325, 55); 
	m_wndNewPasswordLabel.Create(this, _T("New password"), 10, 60, 160, 85);
	m_wndNewPassword.SetReadOnly(true);
	m_wndNewPassword.Create(this,165, 60, 325, 85); 
	m_wndConfirmPasswordLabel.Create(this, _T("Confirm new password"), 10, 90, 160, 115);
	m_wndConfirmPassword.SetPassword(true);
	m_wndConfirmPassword.Create(this,165, 90, 325, 115); 
	m_wndApply.Create(this, _T("&Apply"), 165, 125, 245, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 250, 125, 330, 150);


}
void CAdChangePasswordDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
void CAdChangePasswordDialog::OnSetWindowEvents(){
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
void CAdChangePasswordDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOldPassword.GetDlgCtrlID(), m_szOldPassword);
	DDX_Text(pDX, m_wndNewPassword.GetDlgCtrlID(), m_szNewPassword);
	DDX_Text(pDX, m_wndConfirmPassword.GetDlgCtrlID(), m_szConfirmPassword);

}
void CAdChangePasswordDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
void CAdChangePasswordDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdChangePasswordDialog::SetDefaultValues(){

	m_szOldPassword.Empty();
	m_szNewPassword.Empty();
	m_szConfirmPassword.Empty();

}
int CAdChangePasswordDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
/*void CAdChangePasswordDialog::OnOldPasswordChange(){
	
} */
/*void CAdChangePasswordDialog::OnOldPasswordSetfocus(){
	
} */
/*void CAdChangePasswordDialog::OnOldPasswordKillfocus(){
	
} */
int CAdChangePasswordDialog::OnOldPasswordCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szPassword;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select trim(su_password) as su_password from sys_user where su_userid='%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("su_password"), szPassword);
	if(szPassword != m_szOldPassword)
	{

		m_wndOldPassword.SetToolTipMessage(_T("Invalid password"));
		return -1;
	}
	return 0;
} 
/*void CAdChangePasswordDialog::OnNewPasswordChange(){
	
} */
/*void CAdChangePasswordDialog::OnNewPasswordSetfocus(){
	
} */
/*void CAdChangePasswordDialog::OnNewPasswordKillfocus(){
	
} */
int CAdChangePasswordDialog::OnNewPasswordCheckValue(){
	return 0;
} 
/*void CAdChangePasswordDialog::OnConfirmPasswordChange(){
	
} */
/*void CAdChangePasswordDialog::OnConfirmPasswordSetfocus(){
	
} */
/*void CAdChangePasswordDialog::OnConfirmPasswordKillfocus(){
	
} */
int CAdChangePasswordDialog::OnConfirmPasswordCheckValue(){
	return 0;
} 
void CAdChangePasswordDialog::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdChangePasswordDialog();	
} 
void CAdChangePasswordDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CAdChangePasswordDialog::OnAddAdChangePasswordDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CAdChangePasswordDialog::OnEditAdChangePasswordDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CAdChangePasswordDialog::OnDeleteAdChangePasswordDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelAdChangePasswordDialog(); 
 	}
return 0;
 } 
int CAdChangePasswordDialog::OnSaveAdChangePasswordDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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
		szSQL.Format(_T("UPDATE sys_user SET su_password='%s' WHERE lower(su_userid)=lower('%s') "), m_szNewPassword, pMF->GetCurrentUser());
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
int CAdChangePasswordDialog::OnCancelAdChangePasswordDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	 
 	return 0;
} 
int CAdChangePasswordDialog::OnAdChangePasswordDialogListLoadData(){
	return 0;
}
