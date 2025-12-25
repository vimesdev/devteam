#include "SysConfigConfirmDialog.h"
#include "MainFrm.h"
/*static void _OnPasswordChangeFnc(CWnd *pWnd){
	((CSysConfigConfirmDialog *)pWnd)->OnPasswordChange();
} */
/*static void _OnPasswordSetfocusFnc(CWnd *pWnd){
	((CSysConfigConfirmDialog *)pWnd)->OnPasswordSetfocus();} */ 
/*static void _OnPasswordKillfocusFnc(CWnd *pWnd){
	((CSysConfigConfirmDialog *)pWnd)->OnPasswordKillfocus();
} */
static int _OnPasswordCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigConfirmDialog *)pWnd)->OnPasswordCheckValue();
} 
static int _OnAddSysConfigConfirmDialogFnc(CWnd *pWnd){
	 return ((CSysConfigConfirmDialog*)pWnd)->OnAddSysConfigConfirmDialog();
} 
static int _OnEditSysConfigConfirmDialogFnc(CWnd *pWnd){
	 return ((CSysConfigConfirmDialog*)pWnd)->OnEditSysConfigConfirmDialog();
} 
static int _OnDeleteSysConfigConfirmDialogFnc(CWnd *pWnd){
	 return ((CSysConfigConfirmDialog*)pWnd)->OnDeleteSysConfigConfirmDialog();
} 
static int _OnSaveSysConfigConfirmDialogFnc(CWnd *pWnd){
	 return ((CSysConfigConfirmDialog*)pWnd)->OnSaveSysConfigConfirmDialog();
} 
static int _OnCancelSysConfigConfirmDialogFnc(CWnd *pWnd){
	 return ((CSysConfigConfirmDialog*)pWnd)->OnCancelSysConfigConfirmDialog();
} 
CSysConfigConfirmDialog::CSysConfigConfirmDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 260;
	m_nDlgHeight = 70;
	SetDefaultValues();
}
CSysConfigConfirmDialog::~CSysConfigConfirmDialog(){
}
void CSysConfigConfirmDialog::OnCreateComponents(){
	m_wndConfirm.Create(this, _T("Confirm"), 5, 5, 250, 60);
	m_wndPasswordLabel.Create(this, _T("Password"), 10, 30, 90, 55);
	m_wndPassword.Create(this,95, 30, 245, 55); 

}
void CSysConfigConfirmDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPassword.SetLimitText(35);
	m_wndPassword.SetCheckValue(true);

}
void CSysConfigConfirmDialog::OnSetWindowEvents(){
	//m_wndPassword.SetEvent(WE_CHANGE, _OnPasswordChangeFnc);
	//m_wndPassword.SetEvent(WE_SETFOCUS, _OnPasswordSetfocusFnc);
	//m_wndPassword.SetEvent(WE_KILLFOCUS, _OnPasswordKillfocusFnc);
	m_wndPassword.SetEvent(WE_CHECKVALUE, _OnPasswordCheckValueFnc);

}
void CSysConfigConfirmDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPassword.GetDlgCtrlID(), m_szPassword);

}
void CSysConfigConfirmDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysConfigConfirmDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysConfigConfirmDialog::SetDefaultValues(){

	m_szPassword.Empty();

}
int CSysConfigConfirmDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
/*void CSysConfigConfirmDialog::OnPasswordChange(){
	
} */
/*void CSysConfigConfirmDialog::OnPasswordSetfocus(){
	
} */
/*void CSysConfigConfirmDialog::OnPasswordKillfocus(){
	
} */
int CSysConfigConfirmDialog::OnPasswordCheckValue(){
	return 0;
} 
int CSysConfigConfirmDialog::OnAddSysConfigConfirmDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSysConfigConfirmDialog::OnEditSysConfigConfirmDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysConfigConfirmDialog::OnDeleteSysConfigConfirmDialog(){
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
 		OnCancelSysConfigConfirmDialog(); 
 	}
	return 0;
}
int CSysConfigConfirmDialog::OnSaveSysConfigConfirmDialog(){
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
 		//OnSysConfigConfirmDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSysConfigConfirmDialog::OnCancelSysConfigConfirmDialog(){
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
int CSysConfigConfirmDialog::OnSysConfigConfirmDialogListLoadData(){
	return 0;
}
