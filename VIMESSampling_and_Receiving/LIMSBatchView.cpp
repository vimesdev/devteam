#include "LIMSBatchView.h"
#include "MainFrm.h"
static int _OnAddLIMSBatchViewFnc(CWnd *pWnd){
	 return ((CLIMSBatchView*)pWnd)->OnAddLIMSBatchView();
} 
static int _OnEditLIMSBatchViewFnc(CWnd *pWnd){
	 return ((CLIMSBatchView*)pWnd)->OnEditLIMSBatchView();
} 
static int _OnDeleteLIMSBatchViewFnc(CWnd *pWnd){
	 return ((CLIMSBatchView*)pWnd)->OnDeleteLIMSBatchView();
} 
static int _OnSaveLIMSBatchViewFnc(CWnd *pWnd){
	 return ((CLIMSBatchView*)pWnd)->OnSaveLIMSBatchView();
} 
static int _OnCancelLIMSBatchViewFnc(CWnd *pWnd){
	 return ((CLIMSBatchView*)pWnd)->OnCancelLIMSBatchView();
} 
CLIMSBatchView::CLIMSBatchView(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CLIMSBatchView::~CLIMSBatchView(){
}
void CLIMSBatchView::OnCreateComponents(){
	m_wndBatchList.Create(this, CRect(5, 5, 510, 600));
	m_wndBatchPatientList.Create(this, CRect(520, 5, 1010, 600));
	m_wndBatchList.m_wndPatientList = &m_wndBatchPatientList;
}
void CLIMSBatchView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSBatchView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSBatchViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSBatchViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSBatchViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSBatchViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSBatchViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);
*/
}
void CLIMSBatchView::OnDoDataExchange(CDataExchange* pDX){

}
void CLIMSBatchView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CLIMSBatchView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSBatchView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSBatchView::SetDefaultValues(){


}
int CLIMSBatchView::SetMode(int nMode){
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
int CLIMSBatchView::OnAddLIMSBatchView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSBatchView::OnEditLIMSBatchView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSBatchView::OnDeleteLIMSBatchView(){
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
 		OnCancelLIMSBatchView();
 	}
	return 0;
}
int CLIMSBatchView::OnSaveLIMSBatchView(){
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
 		//OnLIMSBatchViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSBatchView::OnCancelLIMSBatchView(){
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
int CLIMSBatchView::OnLIMSBatchViewListLoadData(){
	return 0;
}
