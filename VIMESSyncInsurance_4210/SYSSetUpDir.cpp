#include "SYSSetUpDir.h"
#include "MainFrm.h"
/*static void _OnPathBHXHChangeFnc(CWnd *pWnd){
	((CSYSSetUpDir *)pWnd)->OnPathBHXHChange();
} */
/*static void _OnPathBHXHSetfocusFnc(CWnd *pWnd){
	((CSYSSetUpDir *)pWnd)->OnPathBHXHSetfocus();} */ 
/*static void _OnPathBHXHKillfocusFnc(CWnd *pWnd){
	((CSYSSetUpDir *)pWnd)->OnPathBHXHKillfocus();
} */
static int _OnPathBHXHCheckValueFnc(CWnd *pWnd){
	return ((CSYSSetUpDir *)pWnd)->OnPathBHXHCheckValue();
} 
/*static void _OnPathBHBQPChangeFnc(CWnd *pWnd){
	((CSYSSetUpDir *)pWnd)->OnPathBHBQPChange();
} */
/*static void _OnPathBHBQPSetfocusFnc(CWnd *pWnd){
	((CSYSSetUpDir *)pWnd)->OnPathBHBQPSetfocus();} */ 
/*static void _OnPathBHBQPKillfocusFnc(CWnd *pWnd){
	((CSYSSetUpDir *)pWnd)->OnPathBHBQPKillfocus();
} */
static int _OnPathBHBQPCheckValueFnc(CWnd *pWnd){
	return ((CSYSSetUpDir *)pWnd)->OnPathBHBQPCheckValue();
} 
static void _OnBrBHXHSelectFnc(CWnd *pWnd){
	CSYSSetUpDir *pVw = (CSYSSetUpDir *)pWnd;
	pVw->OnBrBHXHSelect();
} 
static void _OnOpeanBHXHSelectFnc(CWnd *pWnd){
	CSYSSetUpDir *pVw = (CSYSSetUpDir *)pWnd;
	pVw->OnOpeanBHXHSelect();
} 
static void _OnBrBHBQPSelectFnc(CWnd *pWnd){
	CSYSSetUpDir *pVw = (CSYSSetUpDir *)pWnd;
	pVw->OnBrBHBQPSelect();
} 
static void _OnOpenBHBQPSelectFnc(CWnd *pWnd){
	CSYSSetUpDir *pVw = (CSYSSetUpDir *)pWnd;
	pVw->OnOpenBHBQPSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSYSSetUpDir *pVw = (CSYSSetUpDir *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddSYSSetUpDirFnc(CWnd *pWnd){
	 return ((CSYSSetUpDir*)pWnd)->OnAddSYSSetUpDir();
} 
static int _OnEditSYSSetUpDirFnc(CWnd *pWnd){
	 return ((CSYSSetUpDir*)pWnd)->OnEditSYSSetUpDir();
} 
static int _OnDeleteSYSSetUpDirFnc(CWnd *pWnd){
	 return ((CSYSSetUpDir*)pWnd)->OnDeleteSYSSetUpDir();
} 
static int _OnSaveSYSSetUpDirFnc(CWnd *pWnd){
	 return ((CSYSSetUpDir*)pWnd)->OnSaveSYSSetUpDir();
} 
static int _OnCancelSYSSetUpDirFnc(CWnd *pWnd){
	 return ((CSYSSetUpDir*)pWnd)->OnCancelSYSSetUpDir();
} 
CSYSSetUpDir::CSYSSetUpDir(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSYSSetUpDir::~CSYSSetUpDir(){
}
void CSYSSetUpDir::OnCreateComponents(){
	m_wndSetUpDir.Create(this, _T("Setup Dir"), 5, 5, 665, 90);
	m_wndBHXHLabel.Create(this, _T("Dir BHXH"), 10, 30, 110, 55);
	m_wndPathBHXH.Create(this,115, 30, 545, 55); 
	m_wndBHBQPLabel.Create(this, _T("Dir BQP"), 10, 60, 110, 85);
	m_wndPathBHBQP.Create(this,115, 60, 545, 85); 
	m_wndBrBHXH.Create(this, _T("@"), 550, 29, 575, 54);
	m_wndOpeanBHXH.Create(this, _T("Open Dir"), 579, 30, 659, 55);
	m_wndBrBHBQP.Create(this, _T("@"), 550, 60, 575, 85);
	m_wndOpenBHBQP.Create(this, _T("Open Dir"), 579, 60, 659, 85);
	m_wndClose.Create(this, _T("Close"), 580, 95, 660, 120);

}
void CSYSSetUpDir::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPathBHXH.SetLimitText(35);
	m_wndPathBHXH.SetCheckValue(true);
	m_wndPathBHBQP.SetLimitText(35);
	m_wndPathBHBQP.SetCheckValue(true);

}
void CSYSSetUpDir::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPathBHXH.SetEvent(WE_CHANGE, _OnPathBHXHChangeFnc);
	//m_wndPathBHXH.SetEvent(WE_SETFOCUS, _OnPathBHXHSetfocusFnc);
	//m_wndPathBHXH.SetEvent(WE_KILLFOCUS, _OnPathBHXHKillfocusFnc);
	m_wndPathBHXH.SetEvent(WE_CHECKVALUE, _OnPathBHXHCheckValueFnc);
	//m_wndPathBHBQP.SetEvent(WE_CHANGE, _OnPathBHBQPChangeFnc);
	//m_wndPathBHBQP.SetEvent(WE_SETFOCUS, _OnPathBHBQPSetfocusFnc);
	//m_wndPathBHBQP.SetEvent(WE_KILLFOCUS, _OnPathBHBQPKillfocusFnc);
	m_wndPathBHBQP.SetEvent(WE_CHECKVALUE, _OnPathBHBQPCheckValueFnc);
	m_wndBrBHXH.SetEvent(WE_CLICK, _OnBrBHXHSelectFnc);
	m_wndOpeanBHXH.SetEvent(WE_CLICK, _OnOpeanBHXHSelectFnc);
	m_wndBrBHBQP.SetEvent(WE_CLICK, _OnBrBHBQPSelectFnc);
	m_wndOpenBHBQP.SetEvent(WE_CLICK, _OnOpenBHBQPSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndPathBHXH.EnableWindow(false);
	m_szPathBHXH=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"));

	m_wndPathBHBQP.EnableWindow(false);
	m_szPathBHBQP=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory_BQP"));

	SetMode(VM_ADD);

	//GetDataToScreen();

}
void CSYSSetUpDir::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPathBHXH.GetDlgCtrlID(), m_szPathBHXH);
	DDX_Text(pDX, m_wndPathBHBQP.GetDlgCtrlID(), m_szPathBHBQP);

}
void CSYSSetUpDir::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PathBHXH")] =  m_szPathBHXH;
	m_jData[_T("PathBHBQP")] =  m_szPathBHBQP;
	}
	else
	{
			
	m_jData[_T("PathBHXH")].GetValue(m_szPathBHXH);
	m_jData[_T("PathBHBQP")].GetValue(m_szPathBHBQP);
	}

}
void CSYSSetUpDir::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);


}
void CSYSSetUpDir::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSYSSetUpDir::SetDefaultValues(){

	m_szPathBHXH.Empty();
	m_szPathBHBQP.Empty();

}
int CSYSSetUpDir::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0,1,2,3, 4, -1);
 			//SetDefaultValues();
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
/*void CSYSSetUpDir::OnPathBHXHChange(){
	
} */
/*void CSYSSetUpDir::OnPathBHXHSetfocus(){
	
} */
/*void CSYSSetUpDir::OnPathBHXHKillfocus(){
	
} */
int CSYSSetUpDir::OnPathBHXHCheckValue(){
	return 0;
} 
/*void CSYSSetUpDir::OnPathBHBQPChange(){
	
} */
/*void CSYSSetUpDir::OnPathBHBQPSetfocus(){
	
} */
/*void CSYSSetUpDir::OnPathBHBQPKillfocus(){
	
} */
int CSYSSetUpDir::OnPathBHBQPCheckValue(){
	return 0;
} 
void CSYSSetUpDir::OnBrBHXHSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CString szPath= _T("");
	::GetFolder(szPath, "Select Folder",NULL);
	if(!szPath.IsEmpty())
	{
		m_szPathBHXH=szPath;
		UpdateData(false);
		AfxGetApp()->WriteProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"), m_szPathBHXH);
	}
	
} 
void CSYSSetUpDir::OnOpeanBHXHSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ShellExecute(NULL, _T("open"), m_szPathBHXH, NULL, NULL,SW_SHOW);
	
} 
void CSYSSetUpDir::OnBrBHBQPSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CString szPath= _T("");
	::GetFolder(szPath, "Select Folder",NULL);
	if(!szPath.IsEmpty())
	{
		m_szPathBHBQP=szPath;
		UpdateData(false);
		AfxGetApp()->WriteProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory_BQP"), m_szPathBHBQP);
	}
	
} 
void CSYSSetUpDir::OnOpenBHBQPSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ShellExecute(NULL, _T("open"), m_szPathBHBQP, NULL, NULL,SW_SHOW);
	
} 
void CSYSSetUpDir::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSYSSetUpDir::OnAddSYSSetUpDir(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSYSSetUpDir::OnEditSYSSetUpDir(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSYSSetUpDir::OnDeleteSYSSetUpDir(){
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
 		OnCancelSYSSetUpDir();
 	}
	return 0;
}
int CSYSSetUpDir::OnSaveSYSSetUpDir(){
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
 		//OnSYSSetUpDirListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSYSSetUpDir::OnCancelSYSSetUpDir(){
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
int CSYSSetUpDir::OnSYSSetUpDirListLoadData(){
	return 0;
}
