#include "AdPriceSchema.h"
#include "MainFrame_E10.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdPriceSchema *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdPriceSchema *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdPriceSchema *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceSchema *)pWnd)->OnSearchCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceSchema*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdPriceSchema*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPriceSchema*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdPriceSchema*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdPriceSchema*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdPriceSchema *pVw = (CAdPriceSchema *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdPriceSchema *pVw = (CAdPriceSchema *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdPriceSchema *pVw = (CAdPriceSchema *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdPriceSchemaFnc(CWnd *pWnd){
	 return ((CAdPriceSchema*)pWnd)->OnAddAdPriceSchema();
} 
static int _OnEditAdPriceSchemaFnc(CWnd *pWnd){
	 return ((CAdPriceSchema*)pWnd)->OnEditAdPriceSchema();
} 
static int _OnDeleteAdPriceSchemaFnc(CWnd *pWnd){
	 return ((CAdPriceSchema*)pWnd)->OnDeleteAdPriceSchema();
} 
static int _OnSaveAdPriceSchemaFnc(CWnd *pWnd){
	 return ((CAdPriceSchema*)pWnd)->OnSaveAdPriceSchema();
} 
static int _OnCancelAdPriceSchemaFnc(CWnd *pWnd){
	 return ((CAdPriceSchema*)pWnd)->OnCancelAdPriceSchema();
} 
CAdPriceSchema::CAdPriceSchema(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdPriceSchema::~CAdPriceSchema(){
}
void CAdPriceSchema::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Price Schema Information"), 5, 5, 800, 570);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 535, 55); 
	m_wndList.Create(this,10, 60, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 530, 575, 615, 600);
	m_wndEdit.Create(this, _T("&Edit"), 620, 575, 705, 600);
	m_wndDelete.Create(this, _T("&Delete"), 710, 575, 795, 600);
	m_wndPopup.Create(this);
	m_wndPopup.ShowWindow(SW_HIDE);
	m_wndSchemaLine.Create(this);
	m_wndSchemaLine.ShowWindow(SW_HIDE);
}
void CAdPriceSchema::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 450);

}
void CAdPriceSchema::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _*OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Edit"), _OnListEditItemFnc, 0, 0, 0);
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	SetMode(VM_VIEW);
	OnListLoadData();
}
void CAdPriceSchema::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdPriceSchema::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdPriceSchema::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdPriceSchema::SetDefaultValues(){

	m_szSearch.Empty();

}
int CAdPriceSchema::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndPopup.ShowPopup(&m_wndList);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			if (!m_wndSchemaLine.IsWindowVisible())
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
 		UpdateData(FALSE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndDelete.EnableWindow(FALSE);
 		return nOldMode;
}
/*void CAdPriceSchema::OnSearchChange(){
	
} */
/*void CAdPriceSchema::OnSearchSetfocus(){
	
} */
/*void CAdPriceSchema::OnSearchKillfocus(){
	
} */
int CAdPriceSchema::OnSearchCheckValue(){
	m_wndList.Search(2, m_szSearch, SEARCH_LIKE);
	return 0;
} 
void CAdPriceSchema::OnListDblClick(){
	if (m_wndPopup.IsWindowVisible())
	{
		m_wndPopup.SetDefaultValues();
		m_wndPopup.ClosePopup();
	}
	if (m_wndSchemaLine.IsWindowVisible())
		return;
	int nSel = m_wndList.GetCurSel();
	CString szID = m_wndList.GetItemText(nSel, 0);
	m_wndSchemaLine.SetMode(VM_VIEW);
	m_wndSchemaLine.m_nMode = GetMode();
	m_wndSchemaLine.m_szPriceSchemaID = szID;
	m_wndSchemaLine.ShowPopup(&m_wndList);
	SetMode(VM_EDIT);

} 
void CAdPriceSchema::OnListSelectChange(int nOldItem, int nNewItem){
	//CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//CString szID = m_wndList.GetItemText(nNewItem, 0);
	//m_wndSchemaLine.m_szPriceSchemaID = szID;
	//if (m_wndSchemaLine.IsWindowVisible())
	//	m_wndSchemaLine.Refresh();
	if (m_wndPopup.IsWindowVisible())
		m_wndPopup.ClosePopup();
	if (m_wndSchemaLine.IsWindowVisible())
		m_wndSchemaLine.ClosePopup();
} 
int CAdPriceSchema::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return OnEditAdPriceSchema();
} 
int CAdPriceSchema::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;
} 
long CAdPriceSchema::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTmp;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex = 1;
	szSQL.Format(_T("SELECT adps_price_schema_id as id, adps_name as name FROM ad_price_schema"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szTmp.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			szTmp,
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CAdPriceSchema::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPopup.SetMode(VM_ADD);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_ADD);
} 
void CAdPriceSchema::OnEditSelect(){
	OnEditAdPriceSchema();
} 
void CAdPriceSchema::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CAdPriceSchema::OnAddAdPriceSchema(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdPriceSchema::OnEditAdPriceSchema(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
	CString szID = m_wndList.GetItemText(nSel, 0);
	m_wndPopup.SetMode(VM_EDIT);
	m_wndPopup.m_nMode = GetMode();
	m_wndPopup.m_szID = szID;
	SetMode(VM_EDIT);
	return 0;  
}
int CAdPriceSchema::OnDeleteAdPriceSchema(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelAdPriceSchema();
 	}
	return 0;
}
int CAdPriceSchema::OnSaveAdPriceSchema(){
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
 		//OnAdPriceSchemaListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPriceSchema::OnCancelAdPriceSchema(){
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
int CAdPriceSchema::OnAdPriceSchemaListLoadData(){
	return 0;
}
