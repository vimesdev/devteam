#include "AdPartnerCategory.h"
#include "MainFrame_E10.h"
#include "AdPartnerCategoryDialog.h"

/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdPartnerCategory *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdPartnerCategory *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdPartnerCategory *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdPartnerCategory *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdPartnerCategory *pVw = (CAdPartnerCategory *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdPartnerCategory *pVw = (CAdPartnerCategory *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdPartnerCategory *pVw = (CAdPartnerCategory *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdPartnerCategory *pVw = (CAdPartnerCategory *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnLoadInactiveSelectFnc(CWnd *pWnd){
	CAdPartnerCategory *pVw = (CAdPartnerCategory *)pWnd;
	pVw->OnLoadInactiveSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdPartnerCategory*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdPartnerCategory*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPartnerCategory*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdPartnerCategory*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdPartnerCategory*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdPartnerCategory*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerCategory*)pWnd)->OnAddAdPartnerCategory();
} 
static int _OnEditAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerCategory*)pWnd)->OnEditAdPartnerCategory();
} 
static int _OnDeleteAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerCategory*)pWnd)->OnDeleteAdPartnerCategory();
} 
static int _OnSaveAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerCategory*)pWnd)->OnSaveAdPartnerCategory();
} 
static int _OnCancelAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerCategory*)pWnd)->OnCancelAdPartnerCategory();
} 
CAdPartnerCategory::CAdPartnerCategory(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CAdPartnerCategory::~CAdPartnerCategory(){
}
void CAdPartnerCategory::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndCountryInformation.Create(this, _T("Country List"), 5, 65, 810, 590);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 415, 55);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndLoadInactive.Create(this, _T("Load Inactive Item"), 5, 595, 205, 620);
	m_wndList.Create(this,10, 90, 805, 585); 
	m_wndFind.Create(this, _T("@"), 420, 30, 445, 55);
}
void CAdPartnerCategory::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 103);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 640);

}
void CAdPartnerCategory::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndLoadInactive.SetEvent(WE_CLICK, _OnLoadInactiveSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	SetMode(VM_NONE);
	OnListLoadData();
}
void CAdPartnerCategory::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndLoadInactive.GetDlgCtrlID(), m_bLoadInactive);
}
void CAdPartnerCategory::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdPartnerCategory::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdPartnerCategory::SetDefaultValues(){

	m_szSearch.Empty();
	m_bLoadInactive = false;
}
int CAdPartnerCategory::SetMode(int nMode){
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
		m_wndFind.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CAdPartnerCategory::OnSearchChange(){
	
} */
/*void CAdPartnerCategory::OnSearchSetfocus(){
	
} */
/*void CAdPartnerCategory::OnSearchKillfocus(){
	
} */
int CAdPartnerCategory::OnSearchCheckValue(){
	m_wndList.Search(1, m_szSearch, SEARCH_LIKE);
	return 0;
} 
void CAdPartnerCategory::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
void CAdPartnerCategory::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdPartnerCategory();
} 
void CAdPartnerCategory::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdPartnerCategory();
} 
void CAdPartnerCategory::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdPartnerCategory();
} 
void CAdPartnerCategory::OnLoadInactiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
}
void CAdPartnerCategory::OnListDblClick(){
	OnEditAdPartnerCategory();
} 
void CAdPartnerCategory::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
} 

int CAdPartnerCategory::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdPartnerCategory();
	 return 0;
} 

int CAdPartnerCategory::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdPartnerCategory();
	 return 0;
} 

int CAdPartnerCategory::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdPartnerCategory();
	 return 0;
} 
long CAdPartnerCategory::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Format(_T(" AND adpc_isactive = 'Y'"));
	if (m_bLoadInactive)
		szWhere.Format(_T(" AND adpc_isactive = 'N'"));
	if (!m_szSearch.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(adpc_description) LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearch);
	szSQL.Format(_T(" SELECT") \
	_T("   adpc_partner_category_id AS id,") \
	_T("   adpc_description       AS name") \
	_T(" FROM   ad_partner_category") \
	_T(" WHERE  1=1 %s"), szWhere);
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
int CAdPartnerCategory::OnAddAdPartnerCategory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdPartnerCategoryDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}
int CAdPartnerCategory::OnEditAdPartnerCategory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdPartnerCategoryDialog dlg(this, VM_EDIT);
	dlg.m_szID = m_szID;
	dlg.DoModal();
	return 0;  
}
int CAdPartnerCategory::OnDeleteAdPartnerCategory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_partner WHERE adp_partner_caetgory_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		return -1;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_partner_category WHERE adpc_partner_category_id = '%s'"), m_szID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
		OnListLoadData();
 	}
	return 0;
}
int CAdPartnerCategory::OnSaveAdPartnerCategory(){
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
 		//OnAdPartnerTypeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPartnerCategory::OnCancelAdPartnerCategory(){
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
int CAdPartnerCategory::OnAdPartnerTypeListLoadData(){
	return 0;
}

BEGIN_MESSAGE_MAP(CAdPartnerCategory, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdPartnerCategory::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}
