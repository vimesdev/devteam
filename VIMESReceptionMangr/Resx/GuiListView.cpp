#include "GuiListView.h"
#include "MainFrm.h"
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CGuiListView *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CGuiListView *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CGuiListView *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CGuiListView *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CGuiListView *pVw = (CGuiListView *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CGuiListView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CGuiListView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CGuiListView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CGuiListView*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CGuiListView *pVw = (CGuiListView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CGuiListView *pVw = (CGuiListView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CGuiListView *pVw = (CGuiListView *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddGuiListViewFnc(CWnd *pWnd){
	 return ((CGuiListView*)pWnd)->OnAddGuiListView();
} 
static int _OnEditGuiListViewFnc(CWnd *pWnd){
	 return ((CGuiListView*)pWnd)->OnEditGuiListView();
} 
static int _OnDeleteGuiListViewFnc(CWnd *pWnd){
	 return ((CGuiListView*)pWnd)->OnDeleteGuiListView();
} 
static int _OnSaveGuiListViewFnc(CWnd *pWnd){
	 return ((CGuiListView*)pWnd)->OnSaveGuiListView();
} 
static int _OnCancelGuiListViewFnc(CWnd *pWnd){
	 return ((CGuiListView*)pWnd)->OnCancelGuiListView();
} 
CGuiListView::CGuiListView(){

	m_nDlgWidth = 485;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CGuiListView::~CGuiListView(){
}
void CGuiListView::OnCreateComponents(){
	m_wndListInformation.Create(this, _T("List Information"), 5, 65, 480, 450);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 480, 60);
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 10, 30, 110, 55);
	m_wndSearchName.Create(this,114, 30, 390, 55); 
	m_wndRefresh.Create(this, _T("Refresh"), 395, 30, 475, 55);
	m_wndList.Create(this,10, 90, 476, 445); 
	m_wndAdd.Create(this, _T("&Add"), 230, 455, 310, 480);
	m_wndEdit.Create(this, _T("&Edit"), 315, 455, 395, 480);
	m_wndDelete.Create(this, _T("&Delete"), 400, 455, 480, 480);

}
void CGuiListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CGuiListView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	AddLayoutControl(&m_wndListInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndSearchName, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndRefresh, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndAdd, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndEdit, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDelete, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddGuiListViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditGuiListViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteGuiListViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveGuiListViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelGuiListViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CGuiListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CGuiListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CGuiListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CGuiListView::SetDefaultValues(){

	m_szSearchName.Empty();

}
int CGuiListView::SetMode(int nMode){
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
/*void CGuiListView::OnSearchNameChange(){
	
} */
/*void CGuiListView::OnSearchNameSetfocus(){
	
} */
/*void CGuiListView::OnSearchNameKillfocus(){
	
} */
int CGuiListView::OnSearchNameCheckValue(){
	return 0;
} 
void CGuiListView::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGuiListView::OnListDblClick(){
	
} 
void CGuiListView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CGuiListView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CGuiListView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CGuiListView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGuiListView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGuiListView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CGuiListView::OnAddGuiListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CGuiListView::OnEditGuiListView(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CGuiListView::OnDeleteGuiListView(){
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
 		OnCancelGuiListView(); 
 	}
	return 0;
}
int CGuiListView::OnSaveGuiListView(){
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
 		//OnGuiListViewListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CGuiListView::OnCancelGuiListView(){
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
int CGuiListView::OnGuiListViewListLoadData(){
	return 0;
}
