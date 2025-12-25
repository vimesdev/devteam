#include "AdProductResource.h"
#include "MainFrame_E10.h"
#include "AdProductResourceDialog.h"
#include ".\adproductresource.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdProductResource*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdProductResource*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdProductResource*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd* pWnd){
	return ((CAdProductResource*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdProductResource*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdProductResource*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdProductResource *pVw = (CAdProductResource *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdProductResource *pVw = (CAdProductResource *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdProductResource *pVw = (CAdProductResource *)pWnd;
	pVw->OnDeleteSelect();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdProductResource *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdProductResource *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdProductResource *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdProductResource *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdProductResource *pVw = (CAdProductResource *)pWnd;
	pVw->OnFindSelect();
} 
static int _OnAddAdProductResourceFnc(CWnd *pWnd){
	 return ((CAdProductResource*)pWnd)->OnAddAdProductResource();
} 
static int _OnEditAdProductResourceFnc(CWnd *pWnd){
	 return ((CAdProductResource*)pWnd)->OnEditAdProductResource();
} 
static int _OnDeleteAdProductResourceFnc(CWnd *pWnd){
	 return ((CAdProductResource*)pWnd)->OnDeleteAdProductResource();
} 
static int _OnSaveAdProductResourceFnc(CWnd *pWnd){
	 return ((CAdProductResource*)pWnd)->OnSaveAdProductResource();
} 
static int _OnCancelAdProductResourceFnc(CWnd *pWnd){
	 return ((CAdProductResource*)pWnd)->OnCancelAdProductResource();
} 
CAdProductResource::CAdProductResource(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CAdProductResource::~CAdProductResource(){
}
void CAdProductResource::OnCreateComponents(){
	m_wndGroupList.Create(this, _T("Source drug list"), 5, 65, 810, 590);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndList.Create(this,10, 90, 805, 585); 
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 395, 55); 
	m_wndFind.Create(this, _T("@"), 400, 30, 430, 55);

}
void CAdProductResource::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 83);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 640);

}
void CAdProductResource::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdProductResourceFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdProductResourceFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdProductResourceFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdProductResourceFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdProductResourceFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);
	OnListLoadData();
}
void CAdProductResource::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdProductResource::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdProductResource::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdProductResource::SetDefaultValues(){

	m_szSearch.Empty();

}
int CAdProductResource::SetMode(int nMode){
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
		m_wndFind.EnableWindow(true);
		m_wndSearch.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CAdProductResource::OnListDblClick(){
	OnEditAdProductResource();
} 
void CAdProductResource::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nID = ToInt(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}
int CAdProductResource::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdProductResource();
	 return 0;
} 
int CAdProductResource::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdProductResource();
	 return 0;
} 
int CAdProductResource::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdProductResource();
	 return 0;
} 
long CAdProductResource::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (!m_szSearch.IsEmpty())
		szWhere.Format(_T(" AND mpr_name LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearch);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpr_product_resource_id as id, mpr_name as name FROM m_product_resource WHERE 1=1 %s ORDER BY id"), szWhere);
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
void CAdProductResource::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdProductResource();
} 
void CAdProductResource::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdProductResource();
} 
void CAdProductResource::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdProductResource();
} 
/*void CAdProductResource::OnSearchChange(){
	
} */
/*void CAdProductResource::OnSearchSetfocus(){
	
} */
/*void CAdProductResource::OnSearchKillfocus(){
	
} */
int CAdProductResource::OnSearchCheckValue(){
	m_wndList.Search(1, m_szSearch, SEARCH_LIKE);
	return 0;
} 
void CAdProductResource::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
int CAdProductResource::OnAddAdProductResource(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdProductResourceDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}
int CAdProductResource::OnEditAdProductResource(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdProductResourceDialog dlg(this, VM_EDIT);
	dlg.m_nID = m_nID;
	dlg.DoModal();
	return 0;  
}
int CAdProductResource::OnDeleteAdProductResource(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("SELECT count(*) FROM m_product WHERE mp_resource_id = %d"), m_nID);
	rs.ExecSQL(szSQL);
	int ret = rs.GetIntValue();
	if (ret > 0)
	{
		AfxMessageBox(_T("This resource has been used.Can not delete."), MB_OK);	
		return -1;
	}
 	szSQL.Format(_T("DELETE FROM m_product_resource WHERE mpr_product_resource_id = %d"), m_nID);
 	ret = pMF->ExecSQL(szSQL);
 	if(ret > 0){
 		OnListLoadData();
 	}
	return 0;
}
int CAdProductResource::OnSaveAdProductResource(){
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
 		//OnAdProductResourceListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdProductResource::OnCancelAdProductResource(){
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
int CAdProductResource::OnAdProductResourceListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CAdProductResource, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdProductResource::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}
void CAdProductResource::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
}