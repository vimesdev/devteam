#include "AdBudgetItem.h"
#include "MainFrame_E10.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdBudgetItem *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdBudgetItem *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdBudgetItem *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdBudgetItem *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeOfFilterSelectFnc(CWnd *pWnd){
	CAdBudgetItem *pVw = (CAdBudgetItem *)pWnd;
	pVw->OnTypeOfFilterSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBudgetItem*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBudgetItem*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBudgetItem*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBudgetItem*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdBudgetItem *pVw = (CAdBudgetItem *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdBudgetItem *pVw = (CAdBudgetItem *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdBudgetItem *pVw = (CAdBudgetItem *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdBudgetItemFnc(CWnd *pWnd){
	 return ((CAdBudgetItem*)pWnd)->OnAddAdBudgetItem();
} 
static int _OnEditAdBudgetItemFnc(CWnd *pWnd){
	 return ((CAdBudgetItem*)pWnd)->OnEditAdBudgetItem();
} 
static int _OnDeleteAdBudgetItemFnc(CWnd *pWnd){
	 return ((CAdBudgetItem*)pWnd)->OnDeleteAdBudgetItem();
} 
static int _OnSaveAdBudgetItemFnc(CWnd *pWnd){
	 return ((CAdBudgetItem*)pWnd)->OnSaveAdBudgetItem();
} 
static int _OnCancelAdBudgetItemFnc(CWnd *pWnd){
	 return ((CAdBudgetItem*)pWnd)->OnCancelAdBudgetItem();
} 
CAdBudgetItem::CAdBudgetItem(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdBudgetItem::~CAdBudgetItem(){
}
void CAdBudgetItem::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Budget Item Information"), 5, 5, 800, 570);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 545, 55); 
	m_wndTypeOfFilter.Create(this, _T("..."), 770, 30, 795, 55);
	m_wndList.Create(this,10, 60, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 530, 575, 615, 600);
	m_wndEdit.Create(this, _T("&Edit"), 620, 575, 705, 600);
	m_wndDelete.Create(this, _T("&Delete"), 710, 575, 795, 600);
	m_wndTypeOfFilterDesc.Create(this, _T("Budget Item"), 550, 30, 765, 55);
	m_wndPopup.Create(this);
	//m_wndPopup.OnInitDialog();
	m_wndPopup.ShowWindow(SW_HIDE);
}
void CAdBudgetItem::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("ACCOUNT LIST"));
	m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);

	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Budget Item"), CFMT_TEXT, 640);
	
	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("ID"));
	m_arFilters.Add(_T("Budget Item"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;
	
}

void CAdBudgetItem::OnSetWindowEvents(){
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
void CAdBudgetItem::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdBudgetItem::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdBudgetItem::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdBudgetItem::SetDefaultValues(){


}

int CAdBudgetItem::SetMode(int nMode){
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

/*void CAdBudgetItem::OnSearchChange(){
	
} */
/*void CAdBudgetItem::OnSearchSetfocus(){
	
} */
/*void CAdBudgetItem::OnSearchKillfocus(){
	
} */
int CAdBudgetItem::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
}
 
void CAdBudgetItem::OnTypeOfFilterSelect(){
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
 
void CAdBudgetItem::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
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
 
void CAdBudgetItem::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	m_wndPopup.ClosePopup();
	SetMode(VM_VIEW);
	
}
 
int CAdBudgetItem::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdBudgetItem();
	 return 0;
}
 
long CAdBudgetItem::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nSearchID == 2){
		szWhere.Format(_T(" and adbi_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and adbi_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_nSearchID == 0){
			szWhere.AppendFormat(_T(" and lower(adbi_budget_item_id) like(lower('%%%s%%')) "), m_szSearch);
		}
		if(m_nSearchID == 1){
			szWhere.AppendFormat(_T(" and lower(adbi_name) like(lower('%%%s%%'))  "), m_szSearch);
		}
	}


	szSQL.Format(_T("SELECT adbi_budget_item_id as id, ") \
		_T("adbi_name as name ") \
		_T("FROM ad_budget_item ") \
		_T("WHERE 1=1 %s ") \
		_T("ORDER BY adbi_budget_item_id"), szWhere);

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

void CAdBudgetItem::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPopup.SetMode(VM_ADD);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_ADD);
	//CSMBankPopup *newPopup = new CSMBankPopup(this);
	//newPopup->SetMode(VM_ADD);
	//newPopup->ShowPopup(&m_wndList);
}
 
void CAdBudgetItem::OnEditSelect(){
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
 
void CAdBudgetItem::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdBudgetItem();
}
 
int CAdBudgetItem::OnAddAdBudgetItem(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdBudgetItem::OnEditAdBudgetItem(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdBudgetItem::OnDeleteAdBudgetItem(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_budget_item WHERE adbi_budget_item_id = '%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}

int CAdBudgetItem::OnSaveAdBudgetItem(){
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
 		//OnAdBudgetItemListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdBudgetItem::OnCancelAdBudgetItem(){
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
 
int CAdBudgetItem::OnAdBudgetItemListLoadData(){
	return 0;
}

