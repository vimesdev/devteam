#include "GroupSetupDialog.h"
#include "MainFrame_E10.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CGroupSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CGroupSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CGroupSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CGroupSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CGroupSetupDialog *pVw = (CGroupSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CGroupSetupDialog *pVw = (CGroupSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
CGroupSetupDialog::CGroupSetupDialog(CWnd *pParent, int nGroupID):
	CGuiDialog(pParent){
	m_nGroupID = nGroupID;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CGroupSetupDialog::~CGroupSetupDialog(){
}
void CGroupSetupDialog::OnCreateComponents(){
	m_wndGroupInput.Create(this, _T("Group Input"), 5, 5, 300, 60);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 45, 55);
	m_wndName.Create(this,50, 30, 295, 55); 
	m_wndSave.Create(this, _T("&Save"), 135, 64, 215, 89);
	m_wndClose.Create(this, _T("&Close"), 220, 64, 300, 89);

}
void CGroupSetupDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);


}
void CGroupSetupDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if (GetMode() == VM_EDIT)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT mlg_name FROM m_location_group WHERE mlg_id = %d"), m_nGroupID);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("mlg_name"), m_szName);
	}
	SetMode(GetMode());

}
void CGroupSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CGroupSetupDialog::SetDefaultValues(){

	m_szName.Empty();

}
int CGroupSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CGroupSetupDialog::OnNameChange(){
	
} */
/*void CGroupSetupDialog::OnNameSetfocus(){
	
} */
/*void CGroupSetupDialog::OnNameKillfocus(){
	
} */
int CGroupSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CGroupSetupDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL;
	int nCount = 0;
	if (GetMode() == VM_ADD)
		szSQL.Format(_T("INSERT INTO m_location_group(mlg_name) VALUES ('%s')"), m_szName);
	else if (GetMode() == VM_EDIT)
		szSQL.Format(_T("UPDATE m_location_group SET mlg_name = '%s' WHERE mlg_id = %d"), m_szName, m_nGroupID);
	nCount = pMF->ExecSQL(szSQL);
	if (nCount > 0);
		OnOK();

} 
void CGroupSetupDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
