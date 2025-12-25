#include "AdProduct.h"
#include "MainFrame_E10.h"
#include "AdProductDialog.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdProduct *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdProduct *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdProduct *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdProduct *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeOfFilterSelectFnc(CWnd *pWnd){
	CAdProduct *pVw = (CAdProduct *)pWnd;
	pVw->OnTypeOfFilterSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdProduct*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdProduct*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdProduct*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdProduct*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdProduct *pVw = (CAdProduct *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdProduct *pVw = (CAdProduct *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdProduct *pVw = (CAdProduct *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdProductFnc(CWnd *pWnd){
	 return ((CAdProduct*)pWnd)->OnAddAdProduct();
} 
static int _OnEditAdProductFnc(CWnd *pWnd){
	 return ((CAdProduct*)pWnd)->OnEditAdProduct();
} 
static int _OnDeleteAdProductFnc(CWnd *pWnd){
	 return ((CAdProduct*)pWnd)->OnDeleteAdProduct();
} 
static int _OnSaveAdProductFnc(CWnd *pWnd){
	 return ((CAdProduct*)pWnd)->OnSaveAdProduct();
} 
static int _OnCancelAdProductFnc(CWnd *pWnd){
	 return ((CAdProduct*)pWnd)->OnCancelAdProduct();
} 
CAdProduct::CAdProduct(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdProduct::~CAdProduct(){
}
void CAdProduct::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Product Information"), 5, 5, 800, 570);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 545, 55); 
	m_wndTypeOfFilter.Create(this, _T("..."), 770, 30, 795, 55);
	m_wndList.Create(this,10, 60, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 530, 575, 615, 600);
	m_wndEdit.Create(this, _T("&Edit"), 620, 575, 705, 600);
	m_wndDelete.Create(this, _T("&Delete"), 710, 575, 795, 600);
	m_wndTypeOfFilterDesc.Create(this, _T("Product Name"), 550, 30, 765, 55);
	m_wndPopup.Create(this);
	m_wndPopup.ShowWindow(SW_HIDE);
}
void CAdProduct::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("PRODUCT LIST"));
	m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);

	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 640);
	
	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("ID"));
	m_arFilters.Add(_T("Product"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;
	
}

void CAdProduct::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndTypeOfFilter.SetEvent(WE_CLICK, _OnTypeOfFilterSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	if (OnListLoadData() > 0)
		SetMode(VM_VIEW);
	else
		SetMode(VM_NONE);

}
void CAdProduct::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdProduct::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdProduct::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdProduct::SetDefaultValues(){


}

int CAdProduct::SetMode(int nMode){
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

/*void CAdProduct::OnSearchChange(){
	
} */
/*void CAdProduct::OnSearchSetfocus(){
	
} */
/*void CAdProduct::OnSearchKillfocus(){
	
} */
int CAdProduct::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
}
 
void CAdProduct::OnTypeOfFilterSelect(){
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
 
void CAdProduct::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CAdProductDialog dlg(this);
	dlg.m_pWnd = this;
	dlg.SetMode(VM_VIEW);
	dlg.m_szProductID = m_szID;
	if (dlg.DoModal() == IDOK)
		OnListLoadData();
	//CString szID;
	//szID = m_wndList.GetItemText(nSel, 0);
	//if (m_szID == szID && m_wndPopup.IsWindowVisible())
	//	return;
	//m_wndPopup.m_szProductID = m_szID;
	//m_wndPopup.SetMode(VM_EDIT);
	//m_wndPopup.m_nMode = GetMode();
	//SetMode(VM_EDIT);
}
 
void CAdProduct::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	m_wndPopup.ClosePopup();
	SetMode(VM_VIEW);
	
}
 
int CAdProduct::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdProduct();
	 return 0;
}
 
long CAdProduct::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nSearchID == 2){
		szWhere.Format(_T(" and mp_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and mp_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_nSearchID == 0){
			szWhere.AppendFormat(_T(" and lower(mp_product_id) like(lower('%%%s%%')) "), m_szSearch);
		}
		if(m_nSearchID == 1){
			szWhere.AppendFormat(_T(" and lower(mp_name) like(lower('%%%s%%'))  "), m_szSearch);
		}
	}


	szSQL.Format(_T("SELECT mp_product_id as id, ") \
		_T("mp_name as name ") \
		_T("FROM m_product ") \
		_T("WHERE 1=1 %s ") \
		_T("ORDER BY mp_product_id"), szWhere);

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

void CAdProduct::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CAdProductDialog dlg(this);
	dlg.SetMode(VM_ADD);
	dlg.m_pWnd = this;
	dlg.DoModal();
	//m_wndPopup.SetMode(VM_ADD);
	//m_wndPopup.m_nMode = GetMode();
	//SetMode(VM_ADD);
}
 
void CAdProduct::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	CAdProductDialog dlg(this);
	dlg.m_pWnd = this;
	dlg.SetMode(VM_EDIT);
	dlg.m_szProductID = m_szID;
	if (dlg.DoModal() == IDOK)
		OnListLoadData();
	//m_wndPopup.m_szProductID = m_szID;
	//m_wndPopup.SetMode(VM_EDIT);
	//m_wndPopup.m_nMode = GetMode();
	//SetMode(VM_EDIT);
}
 
void CAdProduct::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdProduct();
}
 
int CAdProduct::OnAddAdProduct(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdProduct::OnEditAdProduct(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdProduct::OnDeleteAdProduct(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM m_product WHERE mp_product_id = '%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}

int CAdProduct::OnSaveAdProduct(){
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
 		//OnAdProductListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdProduct::OnCancelAdProduct(){
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
 
int CAdProduct::OnAdProductListLoadData(){
	return 0;
}

