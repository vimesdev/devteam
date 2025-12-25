#include "EMRInfoView.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRInfoView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CEMRInfoView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CEMRInfoView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CEMRInfoView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CEMRInfoView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CEMRInfoView *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnFilterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRInfoView* )pWnd)->OnFilterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFilterSelendokFnc(CWnd *pWnd){
	((CEMRInfoView *)pWnd)->OnFilterSelendok();
}
/*static void _OnFilterSetfocusFnc(CWnd *pWnd){
	((CEMRInfoView *)pWnd)->OnFilterKillfocus();
}*/
/*static void _OnFilterKillfocusFnc(CWnd *pWnd){
	((CEMRInfoView *)pWnd)->OnFilterKillfocus();
}*/
static long _OnFilterLoadDataFnc(CWnd *pWnd){
	return ((CEMRInfoView *)pWnd)->OnFilterLoadData();
}
/*static void _OnFilterAddNewFnc(CWnd *pWnd){
	((CEMRInfoView *)pWnd)->OnFilterAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CEMRInfoView *pVw = (CEMRInfoView *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEMRInfoView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEMRInfoView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMRInfoView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEMRInfoView*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CEMRInfoView *pVw = (CEMRInfoView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEMRInfoView *pVw = (CEMRInfoView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEMRInfoView *pVw = (CEMRInfoView *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddEMRInfoViewFnc(CWnd *pWnd){
	 return ((CEMRInfoView*)pWnd)->OnAddEMRInfoView();
} 
static int _OnEditEMRInfoViewFnc(CWnd *pWnd){
	 return ((CEMRInfoView*)pWnd)->OnEditEMRInfoView();
} 
static int _OnDeleteEMRInfoViewFnc(CWnd *pWnd){
	 return ((CEMRInfoView*)pWnd)->OnDeleteEMRInfoView();
} 
static int _OnSaveEMRInfoViewFnc(CWnd *pWnd){
	 return ((CEMRInfoView*)pWnd)->OnSaveEMRInfoView();
} 
static int _OnCancelEMRInfoViewFnc(CWnd *pWnd){
	 return ((CEMRInfoView*)pWnd)->OnCancelEMRInfoView();
} 
CEMRInfoView::CEMRInfoView(){

	m_nDlgWidth = 685;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CEMRInfoView::~CEMRInfoView(){
}
void CEMRInfoView::OnCreateComponents(){
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 5, 105, 30);
	m_wndDepartment.Create(this,110, 5, 265, 30); 
	m_wndFilterLabel.Create(this, _T("Filter"), 270, 5, 370, 30);
	m_wndFilter.Create(this,375, 5, 595, 30); 
	m_wndRefresh.Create(this, _T("Refresh"), 600, 5, 680, 30);
	m_wndList.Create(this,5, 35, 685, 600); 
	m_wndAdd.Create(this, _T("&Add"), 435, 605, 515, 630);
	m_wndEdit.Create(this, _T("&Edit"), 520, 605, 600, 630);
	m_wndDelete.Create(this, _T("&Delete"), 605, 605, 685, 630);

}
void CEMRInfoView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndFilter.SetCheckValue(true);
	m_wndFilter.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndFilter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFilter.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CEMRInfoView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndFilter.SetEvent(WE_SELENDOK, _OnFilterSelendokFnc);
	//m_wndFilter.SetEvent(WE_SETFOCUS, _OnFilterSetfocusFnc);
	//m_wndFilter.SetEvent(WE_KILLFOCUS, _OnFilterKillfocusFnc);
	m_wndFilter.SetEvent(WE_SELCHANGE, _OnFilterSelectChangeFnc);
	m_wndFilter.SetEvent(WE_LOADDATA, _OnFilterLoadDataFnc);
	//m_wndFilter.SetEvent(WE_ADDNEW, _OnFilterAddNewFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEMRInfoViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEMRInfoViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEMRInfoViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEMRInfoViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEMRInfoViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEMRInfoView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFilter.GetDlgCtrlID(), m_szFilterKey);

}
void CEMRInfoView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMRInfoView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CEMRInfoView::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szFilterKey.Empty();

}
int CEMRInfoView::SetMode(int nMode){
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
void CEMRInfoView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRInfoView::OnDepartmentSelendok(){
	 
}
/*void CEMRInfoView::OnDepartmentSetfocus(){
	
}*/
/*void CEMRInfoView::OnDepartmentKillfocus(){
	
}*/
long CEMRInfoView::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMRInfoView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEMRInfoView::OnFilterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRInfoView::OnFilterSelendok(){
	 
}
/*void CEMRInfoView::OnFilterSetfocus(){
	
}*/
/*void CEMRInfoView::OnFilterKillfocus(){
	
}*/
long CEMRInfoView::OnFilterLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFilter.IsSearchKey() && !m_szFilterKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFilterKey
};
	m_wndFilter.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFilter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMRInfoView::OnFilterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEMRInfoView::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRInfoView::OnListDblClick(){
	
} 
void CEMRInfoView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEMRInfoView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEMRInfoView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CEMRInfoView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRInfoView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRInfoView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEMRInfoView::OnAddEMRInfoView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMRInfoView::OnEditEMRInfoView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMRInfoView::OnDeleteEMRInfoView(){
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
 		OnCancelEMRInfoView();
 	}
	return 0;
}
int CEMRInfoView::OnSaveEMRInfoView(){
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
 		//OnEMRInfoViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMRInfoView::OnCancelEMRInfoView(){
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
int CEMRInfoView::OnEMRInfoViewListLoadData(){
	return 0;
}
