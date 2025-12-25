#include "AdTaxRate.h"
#include "MainFrame_E10.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdTaxRate *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdTaxRate *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdTaxRate *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdTaxRate *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeOfFilterSelectFnc(CWnd *pWnd){
	CAdTaxRate *pVw = (CAdTaxRate *)pWnd;
	pVw->OnTypeOfFilterSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdTaxRate*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdTaxRate*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdTaxRate*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdTaxRate*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdTaxRate *pVw = (CAdTaxRate *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdTaxRate *pVw = (CAdTaxRate *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdTaxRate *pVw = (CAdTaxRate *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdTaxRateFnc(CWnd *pWnd){
	 return ((CAdTaxRate*)pWnd)->OnAddAdTaxRate();
} 
static int _OnEditAdTaxRateFnc(CWnd *pWnd){
	 return ((CAdTaxRate*)pWnd)->OnEditAdTaxRate();
} 
static int _OnDeleteAdTaxRateFnc(CWnd *pWnd){
	 return ((CAdTaxRate*)pWnd)->OnDeleteAdTaxRate();
} 
static int _OnSaveAdTaxRateFnc(CWnd *pWnd){
	 return ((CAdTaxRate*)pWnd)->OnSaveAdTaxRate();
} 
static int _OnCancelAdTaxRateFnc(CWnd *pWnd){
	 return ((CAdTaxRate*)pWnd)->OnCancelAdTaxRate();
} 
CAdTaxRate::CAdTaxRate(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdTaxRate::~CAdTaxRate(){
}
void CAdTaxRate::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Tax Rate Information"), 5, 5, 800, 570);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 545, 55); 
	m_wndTypeOfFilter.Create(this, _T("..."), 770, 30, 795, 55);
	m_wndList.Create(this,10, 60, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 530, 575, 615, 600);
	m_wndEdit.Create(this, _T("&Edit"), 620, 575, 705, 600);
	m_wndDelete.Create(this, _T("&Delete"), 710, 575, 795, 600);
	m_wndTypeOfFilterDesc.Create(this, _T("Tax Rate"), 550, 30, 765, 55);
	m_wndPopup.Create(this);
	//m_wndPopup.OnInitDialog();
	m_wndPopup.ShowWindow(SW_HIDE);
}
void CAdTaxRate::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("ACCOUNT LIST"));
	m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);

	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Tax Rate"), CFMT_TEXT, 640);
	
	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("ID"));
	m_arFilters.Add(_T("Tax Rate"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;
	
}

void CAdTaxRate::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndTypeOfFilter.SetEvent(WE_CLICK, _OnTypeOfFilterSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	SetMode(VM_VIEW);
	OnListLoadData();
}
void CAdTaxRate::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdTaxRate::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdTaxRate::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdTaxRate::SetDefaultValues(){


}

int CAdTaxRate::SetMode(int nMode){
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
			m_wndPopup.ShowPopup(&m_wndList);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndSearch.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CAdTaxRate::OnSearchChange(){
	
} */
/*void CAdTaxRate::OnSearchSetfocus(){
	
} */
/*void CAdTaxRate::OnSearchKillfocus(){
	
} */
int CAdTaxRate::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
}
 
void CAdTaxRate::OnTypeOfFilterSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString szName;
	menu.CreatePopupMenu();
	for (int i =0; i < m_arFilters.GetCount(); i++){
		
		if(i > 0) menu.AppendMenu(MF_SEPARATOR);

		TranslateString(m_arFilters[i], szName);
		menu.AppendMenu(MF_BYPOSITION, i+1, szName);
	}

	menu.MakeOwnerDraw(FALSE);
	CPoint pt;
	CRect rect;
	m_wndTypeOfFilter.GetWindowRect(&rect);
	pt.x = rect.right;
	pt.y = rect.bottom+1;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	//Mac dinh luon la tim kiem ten
	m_nSearchID = 1;
	if(ret > 0){
		ret --;
		TranslateString(m_arFilters[ret], szName);
		m_wndTypeOfFilterDesc.SetWindowText(szName);
		m_nSearchID = ret;
	}

}
 
void CAdTaxRate::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CString szID;
	szID = m_wndList.GetItemText(nSel, 0);
	if (m_szID == szID && m_wndPopup.IsWindowVisible())
		return;
	m_wndPopup.m_szID = m_szID;
	m_wndPopup.SetMode(VM_EDIT);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_EDIT);
	//CSMBankPopup *newPopup = new CSMBankPopup(this);
	//newPopup->SetMode(VM_EDIT);
	//newPopup->m_szID = m_szID;
	//newPopup->ShowPopup(&m_wndList);
}
 
void CAdTaxRate::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	m_wndPopup.ClosePopup();
	SetMode(VM_VIEW);
	
}
 
int CAdTaxRate::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdTaxRate();
	 return 0;
}
 
long CAdTaxRate::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nSearchID == 2){
		szWhere.Format(_T(" and adt_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and adt_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_nSearchID == 0){
			szWhere.AppendFormat(_T(" and lower(adt_taxrate_id) like(lower('%%%s%%')) "), m_szSearch);
		}
		if(m_nSearchID == 1){
			szWhere.AppendFormat(_T(" and lower(adt_description) like(lower('%%%s%%'))  "), m_szSearch);
		}
	}


	szSQL.Format(_T("SELECT adt_taxrate_id as id, ") \
		_T("adt_description as name ") \
		_T("FROM ad_taxrate ") \
		_T("WHERE 1=1 %s ") \
		_T("ORDER BY adt_taxrate_id"), szWhere);

_fmsg(_T("%s"), szSQL);
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

void CAdTaxRate::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPopup.SetMode(VM_ADD);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_ADD);
	//CSMBankPopup *newPopup = new CSMBankPopup(this);
	//newPopup->SetMode(VM_ADD);
	//newPopup->ShowPopup(&m_wndList);
}
 
void CAdTaxRate::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	m_wndPopup.m_szID = m_szID;
	m_wndPopup.SetMode(VM_EDIT);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_EDIT);
	//CSMBankPopup *newPopup = new CSMBankPopup(this);
	//newPopup->SetMode(VM_EDIT);
	//newPopup->m_szID = m_szID;
	//newPopup->ShowPopup(&m_wndList);
}
 
void CAdTaxRate::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdTaxRate();
}
 
int CAdTaxRate::OnAddAdTaxRate(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdTaxRate::OnEditAdTaxRate(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdTaxRate::OnDeleteAdTaxRate(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_taxrate WHERE adt_taxrate_id = '%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}

int CAdTaxRate::OnSaveAdTaxRate(){
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
 		//OnAdTaxRateListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdTaxRate::OnCancelAdTaxRate(){
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
 
int CAdTaxRate::OnAdTaxRateListLoadData(){
	return 0;
}

