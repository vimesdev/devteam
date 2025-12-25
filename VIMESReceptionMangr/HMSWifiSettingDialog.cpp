#include "HMSWifiSettingDialog.h"
#include "MainFrm.h"
/*static void _OnWifiNameChangeFnc(CWnd *pWnd){
	((CHMSWifiSettingDialog *)pWnd)->OnWifiNameChange();
} */
/*static void _OnWifiNameSetfocusFnc(CWnd *pWnd){
	((CHMSWifiSettingDialog *)pWnd)->OnWifiNameSetfocus();} */ 
/*static void _OnWifiNameKillfocusFnc(CWnd *pWnd){
	((CHMSWifiSettingDialog *)pWnd)->OnWifiNameKillfocus();
} */
static int _OnWifiNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSWifiSettingDialog *)pWnd)->OnWifiNameCheckValue();
} 
/*static void _OnPasswordChangeFnc(CWnd *pWnd){
	((CHMSWifiSettingDialog *)pWnd)->OnPasswordChange();
} */
/*static void _OnPasswordSetfocusFnc(CWnd *pWnd){
	((CHMSWifiSettingDialog *)pWnd)->OnPasswordSetfocus();} */ 
/*static void _OnPasswordKillfocusFnc(CWnd *pWnd){
	((CHMSWifiSettingDialog *)pWnd)->OnPasswordKillfocus();
} */
static int _OnPasswordCheckValueFnc(CWnd *pWnd){
	return ((CHMSWifiSettingDialog *)pWnd)->OnPasswordCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSWifiSettingDialog *pVw = (CHMSWifiSettingDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddHMSWifiSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSWifiSettingDialog*)pWnd)->OnAddHMSWifiSettingDialog();
} 
static int _OnEditHMSWifiSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSWifiSettingDialog*)pWnd)->OnEditHMSWifiSettingDialog();
} 
static int _OnDeleteHMSWifiSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSWifiSettingDialog*)pWnd)->OnDeleteHMSWifiSettingDialog();
} 
static int _OnSaveHMSWifiSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSWifiSettingDialog*)pWnd)->OnSaveHMSWifiSettingDialog();
} 
static int _OnCancelHMSWifiSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSWifiSettingDialog*)pWnd)->OnCancelHMSWifiSettingDialog();
} 
CHMSWifiSettingDialog::CHMSWifiSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){
	
	m_nDlgWidth = 507;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CHMSWifiSettingDialog::~CHMSWifiSettingDialog(){
}
void CHMSWifiSettingDialog::OnCreateComponents(){
	m_wndWifiInformation.Create(this, _T("Wifi Information"), 5, 5, 455, 90);
	m_wndWifiNameLabel.Create(this, _T("Wifi Name"), 10, 30, 90, 55);
	m_wndWifiName.Create(this,95, 30, 450, 55); 
	m_wndPasswordLabel.Create(this, _T("Password"), 10, 60, 90, 85);
	m_wndPassword.Create(this,95, 60, 450, 85); 
	m_wndSave.Create(this, _T("Save"), 375, 95, 455, 120);

}
void CHMSWifiSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWifiName.SetLimitText(35);
	m_wndWifiName.SetCheckValue(true);
	m_wndPassword.SetLimitText(35);
	m_wndPassword.SetCheckValue(true);

}
void CHMSWifiSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndWifiName.SetEvent(WE_CHANGE, _OnWifiNameChangeFnc);
	//m_wndWifiName.SetEvent(WE_SETFOCUS, _OnWifiNameSetfocusFnc);
	//m_wndWifiName.SetEvent(WE_KILLFOCUS, _OnWifiNameKillfocusFnc);
	m_wndWifiName.SetEvent(WE_CHECKVALUE, _OnWifiNameCheckValueFnc);
	//m_wndPassword.SetEvent(WE_CHANGE, _OnPasswordChangeFnc);
	//m_wndPassword.SetEvent(WE_SETFOCUS, _OnPasswordSetfocusFnc);
	//m_wndPassword.SetEvent(WE_KILLFOCUS, _OnPasswordKillfocusFnc);
	m_wndPassword.SetEvent(WE_CHECKVALUE, _OnPasswordCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	GetDataToScreen();

}
void CHMSWifiSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndWifiName.GetDlgCtrlID(), m_szWifiName);
	DDX_Text(pDX, m_wndPassword.GetDlgCtrlID(), m_szPassword);

}
void CHMSWifiSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id='WIFI' and ss_code='WIFI_NAME' "));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ss_desc"), m_szWifiName);
	}

	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id='WIFI' and ss_code='WIFI_PASSWORD' "));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ss_desc"), m_szPassword);
	}

	SetMode(VM_EDIT);
}
void CHMSWifiSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSWifiSettingDialog::SetDefaultValues(){

	m_szWifiName.Empty();
	m_szPassword.Empty();

}
int CHMSWifiSettingDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
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
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSWifiSettingDialog::OnWifiNameChange(){
	
} */
/*void CHMSWifiSettingDialog::OnWifiNameSetfocus(){
	
} */
/*void CHMSWifiSettingDialog::OnWifiNameKillfocus(){
	
} */
int CHMSWifiSettingDialog::OnWifiNameCheckValue(){
	return 0;
} 
/*void CHMSWifiSettingDialog::OnPasswordChange(){
	
} */
/*void CHMSWifiSettingDialog::OnPasswordSetfocus(){
	
} */
/*void CHMSWifiSettingDialog::OnPasswordKillfocus(){
	
} */
int CHMSWifiSettingDialog::OnPasswordCheckValue(){
	if(m_szPassword.GetLength() < 8)
	{
		MessageBox(_T("Wifi password at least 8 characters"), _T(""), MB_ICONERROR);
		return -1;
	}
	return 0;
} 
void CHMSWifiSettingDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSWifiSettingDialog();
} 
int CHMSWifiSettingDialog::OnAddHMSWifiSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSWifiSettingDialog::OnEditHMSWifiSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSWifiSettingDialog::OnDeleteHMSWifiSettingDialog(){
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
 		OnCancelHMSWifiSettingDialog();
 	}
	return 0;
}
int CHMSWifiSettingDialog::OnSaveHMSWifiSettingDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("UPDATE sys_sel SET ss_desc='%s' WHERE ss_id = 'WIFI' and ss_code='WIFI_NAME' "),m_szWifiName);
 	int ret = pMF->ExecSQL(szSQL);
	szSQL.Format(_T("UPDATE sys_sel SET ss_desc='%s' WHERE ss_id = 'WIFI' and ss_code='WIFI_PASSWORD' "),m_szPassword);
 	ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		CGuiDialog::OnOK();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSWifiSettingDialog::OnCancelHMSWifiSettingDialog(){
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
int CHMSWifiSettingDialog::OnHMSWifiSettingDialogListLoadData(){
	return 0;
}
