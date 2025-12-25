#include "IVFLabView.h"
#include "MainFrm.h"
static long _OnTaskListLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabView*)pWnd)->OnTaskListLoadData();
} 
static void _OnTaskListDblClickFnc(CWnd *pWnd){
	((CIVFLabView*)pWnd)->OnTaskListDblClick();
} 
static void _OnTaskListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFLabView*)pWnd)->OnTaskListSelectChange(nOldItem, nNewItem);
} 
static int _OnTaskListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnTaskListDeleteItem();
} 
static void _OnViewSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CIVFLabView*)pWnd)->OnViewSelectChange(nOld, nNew);
} 
static int _OnAddIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnAddIVFLabView();
} 
static int _OnEditIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnEditIVFLabView();
} 
static int _OnDeleteIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnDeleteIVFLabView();
} 
static int _OnSaveIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnSaveIVFLabView();
} 
static int _OnCancelIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnCancelIVFLabView();
} 
CIVFLabView::CIVFLabView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CIVFLabView::~CIVFLabView(){
}
void CIVFLabView::OnCreateComponents(){
	m_wndTaskList.Create(this,5, 5, 205, 597); 
	m_wndView.Create(this,210, 5, 960, 597); 

}
void CIVFLabView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFLabView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTaskList.SetEvent(WE_SELCHANGE, _OnTaskListSelectChangeFnc);
	m_wndTaskList.SetEvent(WE_LOADDATA, _OnTaskListLoadDataFnc);
	m_wndTaskList.SetEvent(WE_DBLCLICK, _OnTaskListDblClickFnc);
	m_wndTaskList.AddEvent(1, _T("Delete"), _OnTaskListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndView.SetEvent(WE_SELCHANGE, _OnViewSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFLabViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFLabViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFLabViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFLabViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFLabViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CIVFLabView::OnDoDataExchange(CDataExchange* pDX){

}
void CIVFLabView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFLabView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFLabView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFLabView::SetDefaultValues(){


}
int CIVFLabView::SetMode(int nMode){
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
void CIVFLabView::OnTaskListDblClick(){
	
} 
void CIVFLabView::OnTaskListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabView::OnTaskListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFLabView::OnTaskListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTaskList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaskList.AddItems(
		rs.MoveNext();
	}
	m_wndTaskList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFLabView::OnViewSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabView::OnAddIVFLabView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabView::OnEditIVFLabView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabView::OnDeleteIVFLabView(){
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
 		OnCancelIVFLabView();
 	}
	return 0;
}
int CIVFLabView::OnSaveIVFLabView(){
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
 		//OnIVFLabViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabView::OnCancelIVFLabView(){
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
int CIVFLabView::OnIVFLabViewListLoadData(){
	return 0;
}
