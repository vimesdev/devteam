#include "AdContractInfoView.h"
#include "MainFrm.h"
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CAdContractInfoView*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnAddAdContractInfoView();
} 
static int _OnEditAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnEditAdContractInfoView();
} 
static int _OnDeleteAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnDeleteAdContractInfoView();
} 
static int _OnSaveAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnSaveAdContractInfoView();
} 
static int _OnCancelAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnCancelAdContractInfoView();
} 
CAdContractInfoView::CAdContractInfoView(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CAdContractInfoView::~CAdContractInfoView(){
}
void CAdContractInfoView::OnCreateComponents(){
	m_wndTab.Create(this,1, 1, 798, 197); 

}
void CAdContractInfoView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdContractInfoView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdContractInfoViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdContractInfoViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdContractInfoViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdContractInfoViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdContractInfoViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdContractInfoView::OnDoDataExchange(CDataExchange* pDX){

}
void CAdContractInfoView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdContractInfoView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdContractInfoView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdContractInfoView::SetDefaultValues(){


}
int CAdContractInfoView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CAdContractInfoView::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdContractInfoView::OnAddAdContractInfoView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdContractInfoView::OnEditAdContractInfoView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdContractInfoView::OnDeleteAdContractInfoView(){
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
 		OnCancelAdContractInfoView();
 	}
	return 0;
}
int CAdContractInfoView::OnSaveAdContractInfoView(){
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
 		//OnAdContractInfoViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdContractInfoView::OnCancelAdContractInfoView(){
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
int CAdContractInfoView::OnAdContractInfoViewListLoadData(){
	return 0;
}
