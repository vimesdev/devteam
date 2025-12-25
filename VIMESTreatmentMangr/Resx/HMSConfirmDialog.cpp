#include "HMSConfirmDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnDoctorChangeFnc(CWnd *pWnd){
	return ((CHMSConfirmDialog *)pWnd)->OnDoctorChange();
} */
/*static int _OnDoctorSetfocusFnc(CWnd *pWnd){
	return ((CHMSConfirmDialog *)pWnd)->OnDoctorKillfocus();} */ 
/*static int _OnDoctorKillfocusFnc(CWnd *pWnd){
	return ((CHMSConfirmDialog *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfirmDialog *)pWnd)->OnDoctorCheckValue();
} 
/*static int _OnConfirmPasswordChangeFnc(CWnd *pWnd){
	return ((CHMSConfirmDialog *)pWnd)->OnConfirmPasswordChange();
} */
/*static int _OnConfirmPasswordSetfocusFnc(CWnd *pWnd){
	return ((CHMSConfirmDialog *)pWnd)->OnConfirmPasswordKillfocus();} */ 
/*static int _OnConfirmPasswordKillfocusFnc(CWnd *pWnd){
	return ((CHMSConfirmDialog *)pWnd)->OnConfirmPasswordKillfocus();
} */
static int _OnConfirmPasswordCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfirmDialog *)pWnd)->OnConfirmPasswordCheckValue();
} 
static int _OnOKSelectFnc(CWnd *pWnd){
	CHMSConfirmDialog *pVw = (CHMSConfirmDialog *)pWnd;
	return pVw->OnOKSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSConfirmDialog *pVw = (CHMSConfirmDialog *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialog*)pWnd)->OnAddHMSConfirmDialog();
} 
static int _OnEditHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialog*)pWnd)->OnEditHMSConfirmDialog();
} 
static int _OnDeleteHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialog*)pWnd)->OnDeleteHMSConfirmDialog();
} 
static int _OnSaveHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialog*)pWnd)->OnSaveHMSConfirmDialog();
} 
static int _OnCancelHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialog*)pWnd)->OnCancelHMSConfirmDialog();
} 
CHMSConfirmDialog::CHMSConfirmDialog(){

	m_nDlgWidth = 255;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
CHMSConfirmDialog::~CHMSConfirmDialog(){
}
void CHMSConfirmDialog::OnCreateComponents(){
	m_wndDoctorLabel.Create(this, _T("Doctor"), 5, 7, 99, 29);
	m_wndDoctor.Create(this,104, 7, 243, 29); 
	m_wndConfirmPasswordLabel.Create(this, _T("Confirm Password"), 5, 34, 99, 56);
	m_wndConfirmPassword.Create(this,104, 34, 243, 56); 
	m_wndOK.Create(this, _T("&OK"), 97, 63, 167, 85);
	m_wndCancel.Create(this, _T("&Cancel"), 172, 63, 242, 85);

}
void CHMSConfirmDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDoctor.SetLimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndConfirmPassword.SetLimitText(35);
	m_wndConfirmPassword.SetCheckValue(true);

}
void CHMSConfirmDialog::OnSetWindowEvents(){
	//m_wndDoctor.SetEvent(WE_CHANGE, _OnDoctorChangeFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_CHECKVALUE, _OnDoctorCheckValueFnc);
	//m_wndConfirmPassword.SetEvent(WE_CHANGE, _OnConfirmPasswordChangeFnc);
	//m_wndConfirmPassword.SetEvent(WE_SETFOCUS, _OnConfirmPasswordSetfocusFnc);
	//m_wndConfirmPassword.SetEvent(WE_KILLFOCUS, _OnConfirmPasswordKillfocusFnc);
	m_wndConfirmPassword.SetEvent(WE_CHECKVALUE, _OnConfirmPasswordCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSConfirmDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSConfirmDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSConfirmDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSConfirmDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSConfirmDialogFnc, 0, 'T', VK_CONTROL);

}
void CHMSConfirmDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndConfirmPassword.GetDlgCtrlID(), m_szConfirmPassword);

}
void CHMSConfirmDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSConfirmDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSConfirmDialog::SetDefaultValues(){

	m_szDoctor.Empty();
	m_szConfirmPassword.Empty();

}
int CHMSConfirmDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
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
/*int CHMSConfirmDialog::OnDoctorChange(){
	return 0;
} */
/*int CHMSConfirmDialog::OnDoctorSetfocus(){
	return 0;
} */
/*int CHMSConfirmDialog::OnDoctorKillfocus(){
	return 0;
} */
int CHMSConfirmDialog::OnDoctorCheckValue(){
	return 0;
} 
/*int CHMSConfirmDialog::OnConfirmPasswordChange(){
	return 0;
} */
/*int CHMSConfirmDialog::OnConfirmPasswordSetfocus(){
	return 0;
} */
/*int CHMSConfirmDialog::OnConfirmPasswordKillfocus(){
	return 0;
} */
int CHMSConfirmDialog::OnConfirmPasswordCheckValue(){
	return 0;
} 
int CHMSConfirmDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSConfirmDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSConfirmDialog::OnAddHMSConfirmDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSConfirmDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSConfirmDialog::OnEditHMSConfirmDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSConfirmDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSConfirmDialog::OnDeleteHMSConfirmDialog(){
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
 		OnCancelHMSConfirmDialog(); 
 	}
return 0;
 } 
int CHMSConfirmDialog::OnSaveHMSConfirmDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSConfirmDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSConfirmDialog::OnCancelHMSConfirmDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSConfirmDialog::OnHMSConfirmDialogListLoadData(){
	return 0;
}
