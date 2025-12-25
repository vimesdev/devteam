#include "HMSOperationGroupSetup.h"
#include "MainFrm.h"

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSOperationGroupSetup*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddHMSOperationGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupSetup*)pWnd)->OnAddHMSOperationGroupSetup();
} 
static int _OnEditHMSOperationGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupSetup*)pWnd)->OnEditHMSOperationGroupSetup();
} 
static int _OnDeleteHMSOperationGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupSetup*)pWnd)->OnDeleteHMSOperationGroupSetup();
} 
static int _OnSaveHMSOperationGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupSetup*)pWnd)->OnSaveHMSOperationGroupSetup();
} 
static int _OnCancelHMSOperationGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupSetup*)pWnd)->OnCancelHMSOperationGroupSetup();
} 
CHMSOperationGroupSetup::CHMSOperationGroupSetup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSOperationGroupSetup::~CHMSOperationGroupSetup(){
}
void CHMSOperationGroupSetup::OnCreateComponents(){
	m_wndOperationGroupSetup.Create(this, _T("Operation Group Setup"), 5, 5, 830, 645);
	m_wndTab.Create(this,10, 30, 825, 640);
	m_wndOperationList.Create(&m_wndTab);
	m_wndParaList.Create(&m_wndTab);
	m_wndTab.Add(_T("Operation List"), &m_wndOperationList);
	m_wndTab.Add(_T("Paraclinical List"), &m_wndParaList);

}
void CHMSOperationGroupSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndParaList.OnInitDialog();
	m_wndOperationList.OnInitDialog();
}
void CHMSOperationGroupSetup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	SetMode(VM_NONE);

}
void CHMSOperationGroupSetup::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSOperationGroupSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationGroupSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOperationGroupSetup::SetDefaultValues(){


}
int CHMSOperationGroupSetup::SetMode(int nMode){
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
void CHMSOperationGroupSetup::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNew == 0)
		m_wndParaList.OnFeeListLoadData();
	else if (nNew == 1)
		m_wndOperationList.OnFeeListLoadData();
	
} 
int CHMSOperationGroupSetup::OnAddHMSOperationGroupSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationGroupSetup::OnEditHMSOperationGroupSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationGroupSetup::OnDeleteHMSOperationGroupSetup(){
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
 		OnCancelHMSOperationGroupSetup();
 	}
	return 0;
}
int CHMSOperationGroupSetup::OnSaveHMSOperationGroupSetup(){
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
 		//OnHMSOperationGroupSetupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationGroupSetup::OnCancelHMSOperationGroupSetup(){
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
int CHMSOperationGroupSetup::OnHMSOperationGroupSetupListLoadData(){
	return 0;
}
