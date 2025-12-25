#include "AdCostingRule.h"
#include "MainFrame_E10.h"
static int _OnAddAdCostingRuleFnc(CWnd *pWnd){
	 return ((CAdCostingRule*)pWnd)->OnAddAdCostingRule();
} 
static int _OnEditAdCostingRuleFnc(CWnd *pWnd){
	 return ((CAdCostingRule*)pWnd)->OnEditAdCostingRule();
} 
static int _OnDeleteAdCostingRuleFnc(CWnd *pWnd){
	 return ((CAdCostingRule*)pWnd)->OnDeleteAdCostingRule();
} 
static int _OnSaveAdCostingRuleFnc(CWnd *pWnd){
	 return ((CAdCostingRule*)pWnd)->OnSaveAdCostingRule();
} 
static int _OnCancelAdCostingRuleFnc(CWnd *pWnd){
	 return ((CAdCostingRule*)pWnd)->OnCancelAdCostingRule();
} 
CAdCostingRule::CAdCostingRule(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 380;
	SetDefaultValues();
}
CAdCostingRule::~CAdCostingRule(){
}
void CAdCostingRule::OnCreateComponents(){
	m_wndCostingRule.Create(this, _T("Costing Rule"), 0, 0, 790, 380);

}
void CAdCostingRule::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdCostingRule::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetMode(VM_NONE);

}
void CAdCostingRule::OnDoDataExchange(CDataExchange* pDX){

}
void CAdCostingRule::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdCostingRule::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdCostingRule::SetDefaultValues(){


}
int CAdCostingRule::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
int CAdCostingRule::OnAddAdCostingRule(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdCostingRule::OnEditAdCostingRule(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdCostingRule::OnDeleteAdCostingRule(){
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
 		OnCancelAdCostingRule();
 	}
	return 0;
}
int CAdCostingRule::OnSaveAdCostingRule(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnAdCostingRuleListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdCostingRule::OnCancelAdCostingRule(){
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
int CAdCostingRule::OnAdCostingRuleListLoadData(){
	return 0;
}
