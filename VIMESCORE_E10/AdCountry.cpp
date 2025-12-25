#include "AdCountry.h"
#include "MainFrame_E10.h"
#include "AdCountryDialog.h"
#include ".\adcountry.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdCountry *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdCountry *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdCountry *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdCountry *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdCountry *pVw = (CAdCountry *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdCountry *pVw = (CAdCountry *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdCountry *pVw = (CAdCountry *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdCountry *pVw = (CAdCountry *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnLoadInactiveSelectFnc(CWnd *pWnd){
	CAdCountry *pVw = (CAdCountry *)pWnd;
	pVw->OnLoadInactiveSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdCountry*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdCountry*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdCountry*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdCountry*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdCountry*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdCountry*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdCountryFnc(CWnd *pWnd){
	 return ((CAdCountry*)pWnd)->OnAddAdCountry();
} 
static int _OnEditAdCountryFnc(CWnd *pWnd){
	 return ((CAdCountry*)pWnd)->OnEditAdCountry();
} 
static int _OnDeleteAdCountryFnc(CWnd *pWnd){
	 return ((CAdCountry*)pWnd)->OnDeleteAdCountry();
} 
static int _OnSaveAdCountryFnc(CWnd *pWnd){
	 return ((CAdCountry*)pWnd)->OnSaveAdCountry();
} 
static int _OnCancelAdCountryFnc(CWnd *pWnd){
	 return ((CAdCountry*)pWnd)->OnCancelAdCountry();
} 
CAdCountry::CAdCountry(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CAdCountry::~CAdCountry(){
}
void CAdCountry::OnCreateComponents(){
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
void CAdCountry::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 103);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 640);

}
void CAdCountry::OnSetWindowEvents(){
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
void CAdCountry::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndLoadInactive.GetDlgCtrlID(), m_bLoadInactive);
}
void CAdCountry::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdCountry::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdCountry::SetDefaultValues(){

	m_szSearch.Empty();
	m_bLoadInactive = false;
}
int CAdCountry::SetMode(int nMode){
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
/*void CAdCountry::OnSearchChange(){
	
} */
/*void CAdCountry::OnSearchSetfocus(){
	
} */
/*void CAdCountry::OnSearchKillfocus(){
	
} */
int CAdCountry::OnSearchCheckValue(){
	m_wndList.Search(1, m_szSearch, SEARCH_LIKE);
	return 0;
} 
void CAdCountry::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
void CAdCountry::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdCountry();
} 
void CAdCountry::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdCountry();
} 
void CAdCountry::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdCountry();
} 
void CAdCountry::OnLoadInactiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
}
void CAdCountry::OnListDblClick(){
	OnEditAdCountry();
} 
void CAdCountry::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
} 

int CAdCountry::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdCountry();
	 return 0;
} 

int CAdCountry::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdCountry();
	 return 0;
} 

int CAdCountry::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdCountry();
	 return 0;
} 
long CAdCountry::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Format(_T(" AND adc_isactive = 'Y'"));
	if (m_bLoadInactive)
		szWhere.Format(_T(" AND adc_isactive = 'N'"));
	if (!m_szSearch.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(adc_name) LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearch);
	szSQL.Format(_T(" SELECT") \
	_T("   adc_country_id AS id,") \
	_T("   adc_name       AS name") \
	_T(" FROM   ad_country") \
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
int CAdCountry::OnAddAdCountry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdCountryDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}
int CAdCountry::OnEditAdCountry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdCountryDialog dlg(this, VM_EDIT);
	dlg.m_szID = m_szID;
	dlg.DoModal();
	return 0;  
}
int CAdCountry::OnDeleteAdCountry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_manufacture WHERE adm_country_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		return -1;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_country WHERE adc_country_id = '%s'"), m_szID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
		OnListLoadData();
 	}
	return 0;
}
int CAdCountry::OnSaveAdCountry(){
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
 		//OnAdCountryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdCountry::OnCancelAdCountry(){
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
int CAdCountry::OnAdCountryListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CAdCountry, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdCountry::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}

void CAdCountry::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);

	AddBottom(&m_wndLoadInactive);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
	
}