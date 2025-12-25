#include "AdDeliveryTerm.h"
#include "MainFrame_E10.h"
#include "AdDeliveryTermDialog.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdDeliveryTerm *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdDeliveryTerm *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdDeliveryTerm *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdDeliveryTerm *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeOfFilterSelectFnc(CWnd *pWnd){
	CAdDeliveryTerm *pVw = (CAdDeliveryTerm *)pWnd;
	pVw->OnTypeOfFilterSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdDeliveryTerm*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdDeliveryTerm*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdDeliveryTerm*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdDeliveryTerm*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdDeliveryTerm *pVw = (CAdDeliveryTerm *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdDeliveryTerm *pVw = (CAdDeliveryTerm *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdDeliveryTerm *pVw = (CAdDeliveryTerm *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdDeliveryTermFnc(CWnd *pWnd){
	 return ((CAdDeliveryTerm*)pWnd)->OnAddAdDeliveryTerm();
} 
static int _OnEditAdDeliveryTermFnc(CWnd *pWnd){
	 return ((CAdDeliveryTerm*)pWnd)->OnEditAdDeliveryTerm();
} 
static int _OnDeleteAdDeliveryTermFnc(CWnd *pWnd){
	 return ((CAdDeliveryTerm*)pWnd)->OnDeleteAdDeliveryTerm();
} 
static int _OnSaveAdDeliveryTermFnc(CWnd *pWnd){
	 return ((CAdDeliveryTerm*)pWnd)->OnSaveAdDeliveryTerm();
} 
static int _OnCancelAdDeliveryTermFnc(CWnd *pWnd){
	 return ((CAdDeliveryTerm*)pWnd)->OnCancelAdDeliveryTerm();
} 
CAdDeliveryTerm::CAdDeliveryTerm(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdDeliveryTerm::~CAdDeliveryTerm(){
}
void CAdDeliveryTerm::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Delivery Term Information"), 5, 5, 810, 590);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 415, 55); 
	m_wndTypeOfFilter.Create(this, _T("@"), 420, 30, 445, 55);
	m_wndList.Create(this,10, 60, 805, 585); 
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
}
void CAdDeliveryTerm::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("DELIVERY TERM"));
	m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);

	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 103);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 640);
	
	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("ID"));
	m_arFilters.Add(_T("Term"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;
	
}

void CAdDeliveryTerm::OnSetWindowEvents(){
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
void CAdDeliveryTerm::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdDeliveryTerm::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdDeliveryTerm::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdDeliveryTerm::SetDefaultValues(){


}

int CAdDeliveryTerm::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, -1);
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, -1); 
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

/*void CAdDeliveryTerm::OnSearchChange(){
	
} */
/*void CAdDeliveryTerm::OnSearchSetfocus(){
	
} */
/*void CAdDeliveryTerm::OnSearchKillfocus(){
	
} */
int CAdDeliveryTerm::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
}
 
void CAdDeliveryTerm::OnTypeOfFilterSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
	//CGuiMenu menu(this);
	//CString szName;
	//menu.CreatePopupMenu();
	//for (int i =0; i < m_arFilters.GetCount(); i++){
	//	
	//	if(i > 0) menu.AppendMenu(MF_SEPARATOR);

	//	TranslateString(m_arFilters[i], szName);
	//	menu.AppendMenu(MF_BYPOSITION, i+1, szName);
	//}

	//menu.MakeOwnerDraw(FALSE);
	//CPoint pt;
	//CRect rect;
	//m_wndTypeOfFilter.GetWindowRect(&rect);
	//pt.x = rect.right;
	//pt.y = rect.bottom+1;
	//int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	////Mac dinh luon la tim kiem ten
	//m_nSearchID = 1;
	//if(ret > 0){
	//	ret --;
	//	TranslateString(m_arFilters[ret], szName);
	//	m_wndTypeOfFilterDesc.SetWindowText(szName);
	//	m_nSearchID = ret;
	//}

}
 
void CAdDeliveryTerm::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	OnEditAdDeliveryTerm();
}
 
void CAdDeliveryTerm::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
	
}
 
int CAdDeliveryTerm::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdDeliveryTerm();
	 return 0;
}
 
long CAdDeliveryTerm::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nSearchID == 2){
		szWhere.Format(_T(" and addt_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and addt_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_nSearchID == 0){
			szWhere.AppendFormat(_T(" and lower(addt_delivery_term_id) like(lower('%%%s%%')) "), m_szSearch);
		}
		if(m_nSearchID == 1){
			szWhere.AppendFormat(_T(" and lower(addt_description) like(lower('%%%s%%'))  "), m_szSearch);
		}
	}


	szSQL.Format(_T("SELECT addt_delivery_term_id as id, ") \
		_T("addt_description as name ") \
		_T("FROM ad_delivery_term ") \
		_T("WHERE 1=1 %s ") \
		_T("ORDER BY addt_delivery_term_id"), szWhere);

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

void CAdDeliveryTerm::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdDeliveryTerm();
}
 
void CAdDeliveryTerm::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdDeliveryTerm();
}
 
void CAdDeliveryTerm::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdDeliveryTerm();
}
 
int CAdDeliveryTerm::OnAddAdDeliveryTerm(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdDeliveryTermDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}

int CAdDeliveryTerm::OnEditAdDeliveryTerm(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdDeliveryTermDialog dlg(this, VM_EDIT);
	dlg.m_szID = m_szID;
	dlg.DoModal();
	return 0;  
}

int CAdDeliveryTerm::OnDeleteAdDeliveryTerm(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_delivery_term WHERE addt_delivery_term_id = '%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}

int CAdDeliveryTerm::OnSaveAdDeliveryTerm(){
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
 		//OnAdDeliveryTermListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdDeliveryTerm::OnCancelAdDeliveryTerm(){
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
 
int CAdDeliveryTerm::OnAdDeliveryTermListLoadData(){
	return 0;
}

