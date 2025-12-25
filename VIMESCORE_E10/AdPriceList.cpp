#include "AdPriceList.h"
#include "MainFrame_E10.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdPriceList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdPriceList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdPriceList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceList *)pWnd)->OnSearchCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdPriceList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPriceList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdPriceList*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdPriceList *pVw = (CAdPriceList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdPriceList *pVw = (CAdPriceList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdPriceList *pVw = (CAdPriceList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdPriceListFnc(CWnd *pWnd){
	 return ((CAdPriceList*)pWnd)->OnAddAdPriceList();
} 
static int _OnEditAdPriceListFnc(CWnd *pWnd){
	 return ((CAdPriceList*)pWnd)->OnEditAdPriceList();
} 
static int _OnDeleteAdPriceListFnc(CWnd *pWnd){
	 return ((CAdPriceList*)pWnd)->OnDeleteAdPriceList();
} 
static int _OnSaveAdPriceListFnc(CWnd *pWnd){
	 return ((CAdPriceList*)pWnd)->OnSaveAdPriceList();
} 
static int _OnCancelAdPriceListFnc(CWnd *pWnd){
	 return ((CAdPriceList*)pWnd)->OnCancelAdPriceList();
} 
CAdPriceList::CAdPriceList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdPriceList::~CAdPriceList(){
}
void CAdPriceList::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Price List Information"), 5, 5, 800, 570);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 535, 55); 
	m_wndList.Create(this,10, 60, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 530, 575, 615, 600);
	m_wndEdit.Create(this, _T("&Edit"), 620, 575, 705, 600);
	m_wndDelete.Create(this, _T("&Delete"), 710, 575, 795, 600);
	m_wndPopup.Create(this);
	m_wndPopup.ShowWindow(SW_HIDE);
	m_wndProductPrice.Create(this);
	m_wndProductPrice.ShowWindow(SW_HIDE);
}
void CAdPriceList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 450);
	m_wndList.InsertColumn(3, _T("Currency"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Start Date"), CFMT_DATE, 100);
}
void CAdPriceList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	OnListLoadData();
	SetMode(VM_VIEW);

}
void CAdPriceList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdPriceList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdPriceList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdPriceList::SetDefaultValues(){

	m_szSearch.Empty();

}
int CAdPriceList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, -1);
			m_wndPopup.ShowPopup(&m_wndList);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, -1);
			if (!m_wndProductPrice.IsWindowVisible())
				m_wndPopup.ShowPopup(&m_wndList);
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
		m_wndSearch.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CAdPriceList::OnSearchChange(){
	
} */
/*void CAdPriceList::OnSearchSetfocus(){
	
} */
/*void CAdPriceList::OnSearchKillfocus(){
	
} */
int CAdPriceList::OnSearchCheckValue(){
	m_wndList.Search(2, m_szSearch, SEARCH_LIKE);
	return 0;
} 
void CAdPriceList::OnListDblClick(){
	if (m_wndPopup.IsWindowVisible())
	{
		m_wndPopup.SetDefaultValues();
		m_wndPopup.ClosePopup();
	}
	if (m_wndProductPrice.IsWindowVisible())
		return;
	int nSel = m_wndList.GetCurSel();
	CString szID = m_wndList.GetItemText(nSel, 0);
	m_wndProductPrice.SetMode(VM_VIEW);
	m_wndProductPrice.m_nMode = GetMode();
	m_wndProductPrice.m_szPriceListID = szID;
	m_wndProductPrice.ShowPopup(&m_wndList);
	SetMode(VM_EDIT);
} 
void CAdPriceList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPopup.m_szID = m_wndList.GetItemText(nNewItem, 0);
} 
int CAdPriceList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;
} 
long CAdPriceList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTmp;
	int nIndex = 1;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpl_price_list_id as id,") \
				_T(" adpl_name as name,") \
				_T(" (select adc_description from ad_currency where adc_currency_id = adpl_currency_id) as currency,") \
				_T(" adpl_startdate as startdate") \
				_T(" FROM ad_price_list "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szTmp.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			szTmp,
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("currency")),
			rs.GetValue(_T("startdate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CAdPriceList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPopup.SetMode(VM_ADD);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_ADD);
} 
void CAdPriceList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdPriceList();
} 
void CAdPriceList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdPriceList();
} 
int CAdPriceList::OnAddAdPriceList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdPriceList::OnEditAdPriceList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
	m_wndPopup.SetMode(VM_EDIT);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_EDIT);
	return 0;  
}
int CAdPriceList::OnDeleteAdPriceList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szID;
	szID = m_wndList.GetItemText(nSel, 0);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_price_list WHERE adpl_price_list_id = '%s'"), szID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}
int CAdPriceList::OnSaveAdPriceList(){
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
 		//OnAdPriceListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPriceList::OnCancelAdPriceList(){
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
int CAdPriceList::OnAdPriceListListLoadData(){
	return 0;
}
