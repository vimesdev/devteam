#include "SysUserRolesDialog.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CSysUserRolesDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CSysUserRolesDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CSysUserRolesDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CSysUserRolesDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CSysUserRolesDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CSysUserRolesDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CSysUserRolesDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CSysUserRolesDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysUserRolesDialog *pVw = (CSysUserRolesDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSysUserRolesDialog *pVw = (CSysUserRolesDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddSysUserRolesDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesDialog*)pWnd)->OnAddSysUserRolesDialog();
} 
static int _OnEditSysUserRolesDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesDialog*)pWnd)->OnEditSysUserRolesDialog();
} 
static int _OnDeleteSysUserRolesDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesDialog*)pWnd)->OnDeleteSysUserRolesDialog();
} 
static int _OnSaveSysUserRolesDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesDialog*)pWnd)->OnSaveSysUserRolesDialog();
} 
static int _OnCancelSysUserRolesDialogFnc(CWnd *pWnd){
	 return ((CSysUserRolesDialog*)pWnd)->OnCancelSysUserRolesDialog();
} 
CSysUserRolesDialog::CSysUserRolesDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CSysUserRolesDialog::~CSysUserRolesDialog(){
}
void CSysUserRolesDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 6, 85, 31);
	m_wndName.Create(this,90, 6, 390, 31); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 36, 85, 61);
	m_wndDescription.Create(this,90, 36, 390, 61); 
	m_wndSave.Create(this, _T("&Save"), 225, 66, 305, 91);
	m_wndClose.Create(this, _T("&Close"), 310, 66, 390, 91);

}
void CSysUserRolesDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(128);
	m_wndName.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(true);
	m_sys_user_rolesTbl.SetTableName(_T("sys_user_roles"));
	m_sys_user_rolesTbl.AddField(_T("SYS_USER_ROLES_ID"), dfText, 32); 
	m_sys_user_rolesTbl.AddField(_T("NAME"), dfText, 128); 
	m_sys_user_rolesTbl.AddField(_T("DESCRIPTION"), dfText, 254); 

}
void CSysUserRolesDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CSysUserRolesDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CSysUserRolesDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CSysUserRolesDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("NAME"), m_szName);
	rs.GetValue(_T("DESCRIPTION"), m_szDescription);

}
void CSysUserRolesDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_sys_user_rolesTbl.SetValue(_T("NAME"), m_szName);
	m_sys_user_rolesTbl.SetValue(_T("DESCRIPTION"), m_szDescription);

}
void CSysUserRolesDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szDescription.Empty();

}
int CSysUserRolesDialog::SetMode(int nMode){
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
/*void CSysUserRolesDialog::OnNameChange(){
	
} */
/*void CSysUserRolesDialog::OnNameSetfocus(){
	
} */
/*void CSysUserRolesDialog::OnNameKillfocus(){
	
} */
int CSysUserRolesDialog::OnNameCheckValue(){
	return 0;
} 
/*void CSysUserRolesDialog::OnDescriptionChange(){
	
} */
/*void CSysUserRolesDialog::OnDescriptionSetfocus(){
	
} */
/*void CSysUserRolesDialog::OnDescriptionKillfocus(){
	
} */
int CSysUserRolesDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CSysUserRolesDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysUserRolesDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysUserRolesDialog::OnAddSysUserRolesDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysUserRolesDialog::OnEditSysUserRolesDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysUserRolesDialog::OnDeleteSysUserRolesDialog(){
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
 		OnCancelSysUserRolesDialog();
 	}
	return 0;
}
int CSysUserRolesDialog::OnSaveSysUserRolesDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_sys_user_rolesTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_sys_user_rolesTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnSysUserRolesDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysUserRolesDialog::OnCancelSysUserRolesDialog(){
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
int CSysUserRolesDialog::OnSysUserRolesDialogListLoadData(){
	return 0;
}
