#include "AdCostAccumulationView.h"
#include "MainFrame_E10.h"
#include "AdCostAccumulation.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdCostAccumulationView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdCostAccumulationView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdCostAccumulationView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdCostAccumulationView*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdCostAccumulationView *pVw = (CAdCostAccumulationView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdCostAccumulationView *pVw = (CAdCostAccumulationView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdCostAccumulationView *pVw = (CAdCostAccumulationView *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CAdCostAccumulationView *)pWnd)->OnSearchNameChange();
}
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulationView *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulationView *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CAdCostAccumulationView *)pWnd)->OnSearchNameCheckValue();
} 
static int _OnAddAdCostAccumulationViewFnc(CWnd *pWnd){
	 return ((CAdCostAccumulationView*)pWnd)->OnAddAdCostAccumulationView();
} 
static int _OnEditAdCostAccumulationViewFnc(CWnd *pWnd){
	 return ((CAdCostAccumulationView*)pWnd)->OnEditAdCostAccumulationView();
} 
static int _OnDeleteAdCostAccumulationViewFnc(CWnd *pWnd){
	 return ((CAdCostAccumulationView*)pWnd)->OnDeleteAdCostAccumulationView();
} 
static int _OnSaveAdCostAccumulationViewFnc(CWnd *pWnd){
	 return ((CAdCostAccumulationView*)pWnd)->OnSaveAdCostAccumulationView();
} 
static int _OnCancelAdCostAccumulationViewFnc(CWnd *pWnd){
	 return ((CAdCostAccumulationView*)pWnd)->OnCancelAdCostAccumulationView();
} 
CAdCostAccumulationView::CAdCostAccumulationView(){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CAdCostAccumulationView::~CAdCostAccumulationView(){
}
void CAdCostAccumulationView::OnCreateComponents(){
	m_wndGroupList.Create(this, _T("List"), 5, 4, 635, 444);
	m_wndList.Create(this,10, 30, 630, 440); 
	m_wndAdd.Create(this, _T("&Add"), 385, 450, 465, 475);
	m_wndEdit.Create(this, _T("&Edit"), 470, 450, 550, 475);
	m_wndDelete.Create(this, _T("&Delete"), 555, 450, 635, 475);
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 5, 450, 85, 475);
	m_wndSearchName.Create(this,90, 450, 380, 475); 

}
void CAdCostAccumulationView::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

}
void CAdCostAccumulationView::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	SetMode(VM_ADD);
	OnListLoadData();

}
void CAdCostAccumulationView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CAdCostAccumulationView::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdCostAccumulationView::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdCostAccumulationView::SetDefaultValues(){

	m_szSearchName.Empty();

}
int CAdCostAccumulationView::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
		m_wndSearchName.EnableWindow(true);
 		return nOldMode; 
}
void CAdCostAccumulationView::OnListDblClick(){
	CAdCostAccumulation *newPopup = new CAdCostAccumulation(this);
	newPopup->SetMode(VM_EDIT);
	newPopup->m_nMode = GetMode();
	newPopup->m_szID = m_szID;
	newPopup->ShowPopup(&m_wndList);
	SetMode(VM_EDIT);	
} 
void CAdCostAccumulationView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
	//CAdCostAccumulation *newPopup = new CAdCostAccumulation(this);
	//newPopup->ClosePopup();

	
} 
int CAdCostAccumulationView::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdCostAccumulationView();
	return 0;
} 
long CAdCostAccumulationView::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("Select aca_id as id, aca_name as name From acc_cost_accumulation Order by aca_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CAdCostAccumulationView::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	////pMF->SetStatusText(_T("|"));
	CAdCostAccumulation *newPopup = new CAdCostAccumulation(this);
	newPopup->SetMode(VM_ADD);
	newPopup->m_nMode = GetMode();
	newPopup->ShowPopup(&m_wndList);
	SetMode(VM_ADD);	
} 
void CAdCostAccumulationView::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	////pMF->SetStatusText(_T("*"));
	CAdCostAccumulation *newPopup = new CAdCostAccumulation(this);
	newPopup->SetMode(VM_EDIT);
	newPopup->m_nMode = GetMode();
	newPopup->m_szID = m_szID;
	newPopup->ShowPopup(&m_wndList);
	SetMode(VM_EDIT);
	
} 
void CAdCostAccumulationView::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	////pMF->SetStatusText(_T("-"));
	OnDeleteAdCostAccumulationView();
} 
void CAdCostAccumulationView::OnSearchNameChange(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	////pMF->SetStatusText(_T("@"), 1);
	UpdateData(TRUE);
	m_wndList.Search(1, m_szSearchName, SEARCH_LIKE);	
}
/*void CAdCostAccumulationView::OnSearchNameSetfocus(){
	
} */
/*void CAdCostAccumulationView::OnSearchNameKillfocus(){
	
} */
int CAdCostAccumulationView::OnSearchNameCheckValue(){
	return 0;
} 
int CAdCostAccumulationView::OnAddAdCostAccumulationView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAdCostAccumulationView::OnEditAdCostAccumulationView(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdCostAccumulationView::OnDeleteAdCostAccumulationView(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM acc_cost_accumulation WHERE aca_id = '%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
		m_wndList.DeleteItem(nSel); 
 	}
	return 0;
}
int CAdCostAccumulationView::OnSaveAdCostAccumulationView(){
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
 		//OnAdCostAccumulationViewListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAdCostAccumulationView::OnCancelAdCostAccumulationView(){
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
int CAdCostAccumulationView::OnAdCostAccumulationViewListLoadData(){
	return 0;
}
