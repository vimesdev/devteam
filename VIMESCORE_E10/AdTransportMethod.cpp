#include "AdTransportMethod.h"
#include "MainFrame_E10.h"
#include "AdTransportMethodDialog.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdTransportMethod *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdTransportMethod *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdTransportMethod *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdTransportMethod *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeOfFilterSelectFnc(CWnd *pWnd){
	CAdTransportMethod *pVw = (CAdTransportMethod *)pWnd;
	pVw->OnTypeOfFilterSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdTransportMethod*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdTransportMethod*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdTransportMethod*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdTransportMethod*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdTransportMethod *pVw = (CAdTransportMethod *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdTransportMethod *pVw = (CAdTransportMethod *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdTransportMethod *pVw = (CAdTransportMethod *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdTransportMethodFnc(CWnd *pWnd){
	 return ((CAdTransportMethod*)pWnd)->OnAddAdTransportMethod();
} 
static int _OnEditAdTransportMethodFnc(CWnd *pWnd){
	 return ((CAdTransportMethod*)pWnd)->OnEditAdTransportMethod();
} 
static int _OnDeleteAdTransportMethodFnc(CWnd *pWnd){
	 return ((CAdTransportMethod*)pWnd)->OnDeleteAdTransportMethod();
} 
static int _OnSaveAdTransportMethodFnc(CWnd *pWnd){
	 return ((CAdTransportMethod*)pWnd)->OnSaveAdTransportMethod();
} 
static int _OnCancelAdTransportMethodFnc(CWnd *pWnd){
	 return ((CAdTransportMethod*)pWnd)->OnCancelAdTransportMethod();
} 
CAdTransportMethod::CAdTransportMethod(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdTransportMethod::~CAdTransportMethod(){
}
void CAdTransportMethod::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Transport Method Information"), 5, 5, 800, 570);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 415, 55); 
	m_wndTypeOfFilter.Create(this, _T("@"), 420, 30, 445, 55);
	m_wndList.Create(this,10, 60, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 530, 575, 615, 600);
	m_wndEdit.Create(this, _T("&Edit"), 620, 575, 705, 600);
	m_wndDelete.Create(this, _T("&Delete"), 710, 575, 795, 600);
}
void CAdTransportMethod::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("TRANSPORT METHOD"));
	m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);
	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 103);
	m_wndList.InsertColumn(1, _T("Method Name"), CFMT_TEXT, 640);
	
	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("ID"));
	m_arFilters.Add(_T("Method"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;
	
}


void CAdTransportMethod::OnSetWindowEvents(){
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
void CAdTransportMethod::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdTransportMethod::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}


void CAdTransportMethod::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}


void CAdTransportMethod::SetDefaultValues(){


}


int CAdTransportMethod::SetMode(int nMode){
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


/*void CAdTransportMethod::OnSearchChange(){
	
} */
/*void CAdTransportMethod::OnSearchSetfocus(){
	
} */
/*void CAdTransportMethod::OnSearchKillfocus(){
	
} */
int CAdTransportMethod::OnSearchCheckValue(){
	OnListLoadData();
	//m_wndList.Search(m_nSearchID, m_szSearch, 1);
	return 1;
}

 
void CAdTransportMethod::OnTypeOfFilterSelect(){
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

 
void CAdTransportMethod::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	OnEditAdTransportMethod();
}

 
void CAdTransportMethod::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
	
}

 
int CAdTransportMethod::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdTransportMethod();
	return 0;
}

 
long CAdTransportMethod::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nSearchID == 2){
		szWhere.Format(_T(" and adtm_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and adtm_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_nSearchID == 0){
			szWhere.AppendFormat(_T(" and lower(adtm_transport_method_id) like(lower('%%%s%%')) "), m_szSearch);
		}
		if(m_nSearchID == 1){
			szWhere.AppendFormat(_T(" and lower(adtm_name) like(lower('%%%s%%'))  "), m_szSearch);
		}
	}


	szSQL.Format(_T("SELECT adtm_transport_method_id as id, ") \
		_T("adtm_name as name ") \
		_T("FROM ad_transport_method ") \
		_T("WHERE 1=1 %s ") \
		_T("ORDER BY adtm_transport_method_id"), szWhere);

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


void CAdTransportMethod::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdTransportMethod();
}

 
void CAdTransportMethod::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdTransportMethod();
}

 
void CAdTransportMethod::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdTransportMethod();
}

 
int CAdTransportMethod::OnAddAdTransportMethod(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdTransportMethodDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}


int CAdTransportMethod::OnEditAdTransportMethod(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdTransportMethodDialog dlg(this, VM_EDIT);
	dlg.m_szID = m_szID;
	dlg.DoModal();
	return 0;  
}


int CAdTransportMethod::OnDeleteAdTransportMethod(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_transport_method WHERE adtm_transport_method_id = '%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}


int CAdTransportMethod::OnSaveAdTransportMethod(){
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
 		//OnAdTransportMethodListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}


int CAdTransportMethod::OnCancelAdTransportMethod(){
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

 
int CAdTransportMethod::OnAdTransportMethodListLoadData(){
	return 0;
}


