#include "AdDeliveryMethod.h"
#include "MainFrame_E10.h"
#include "AdDeliveryMethodDialog.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdDeliveryMethod *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdDeliveryMethod *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdDeliveryMethod *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdDeliveryMethod *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeOfFilterSelectFnc(CWnd *pWnd){
	CAdDeliveryMethod *pVw = (CAdDeliveryMethod *)pWnd;
	pVw->OnTypeOfFilterSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdDeliveryMethod*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdDeliveryMethod*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdDeliveryMethod*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethod*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdDeliveryMethod *pVw = (CAdDeliveryMethod *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdDeliveryMethod *pVw = (CAdDeliveryMethod *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdDeliveryMethod *pVw = (CAdDeliveryMethod *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdDeliveryMethodFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethod*)pWnd)->OnAddAdDeliveryMethod();
} 
static int _OnEditAdDeliveryMethodFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethod*)pWnd)->OnEditAdDeliveryMethod();
} 
static int _OnDeleteAdDeliveryMethodFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethod*)pWnd)->OnDeleteAdDeliveryMethod();
} 
static int _OnSaveAdDeliveryMethodFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethod*)pWnd)->OnSaveAdDeliveryMethod();
} 
static int _OnCancelAdDeliveryMethodFnc(CWnd *pWnd){
	 return ((CAdDeliveryMethod*)pWnd)->OnCancelAdDeliveryMethod();
} 
CAdDeliveryMethod::CAdDeliveryMethod(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdDeliveryMethod::~CAdDeliveryMethod(){
}
void CAdDeliveryMethod::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Delivery Method Information"), 5, 5, 810, 590);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 415, 55); 
	m_wndTypeOfFilter.Create(this, _T("@"), 420, 30, 445, 55);
	m_wndList.Create(this,10, 60, 805, 585); 
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
}
void CAdDeliveryMethod::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("DELIVERY METHOD"));
	m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);

	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 103);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 640);
	
	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("ID"));
	m_arFilters.Add(_T("Method"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;
	
}

void CAdDeliveryMethod::OnSetWindowEvents(){
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
void CAdDeliveryMethod::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdDeliveryMethod::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdDeliveryMethod::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdDeliveryMethod::SetDefaultValues(){


}

int CAdDeliveryMethod::SetMode(int nMode){
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

/*void CAdDeliveryMethod::OnSearchChange(){
	
} */
/*void CAdDeliveryMethod::OnSearchSetfocus(){
	
} */
/*void CAdDeliveryMethod::OnSearchKillfocus(){
	
} */
int CAdDeliveryMethod::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
}
 
void CAdDeliveryMethod::OnTypeOfFilterSelect(){
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
 
void CAdDeliveryMethod::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	OnEditAdDeliveryMethod();
}
 
void CAdDeliveryMethod::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
	
}
 
int CAdDeliveryMethod::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdDeliveryMethod();
	 return 0;
}
 
long CAdDeliveryMethod::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nSearchID == 2){
		szWhere.Format(_T(" and addm_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and addm_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_nSearchID == 0){
			szWhere.AppendFormat(_T(" and lower(addm_delivery_method_id) like(lower('%%%s%%')) "), m_szSearch);
		}
		if(m_nSearchID == 1){
			szWhere.AppendFormat(_T(" and lower(addm_description) like(lower('%%%s%%'))  "), m_szSearch);
		}
	}


	szSQL.Format(_T("SELECT addm_delivery_method_id as id, ") \
		_T("addm_description as name ") \
		_T("FROM ad_delivery_method ") \
		_T("WHERE 1=1 %s ") \
		_T("ORDER BY addm_delivery_method_id"), szWhere);

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

void CAdDeliveryMethod::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdDeliveryMethod();	
}
 
void CAdDeliveryMethod::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdDeliveryMethod();	
}
 
void CAdDeliveryMethod::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdDeliveryMethod();
}
 
int CAdDeliveryMethod::OnAddAdDeliveryMethod(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdDeliveryMethodDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}

int CAdDeliveryMethod::OnEditAdDeliveryMethod(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdDeliveryMethodDialog dlg(this, VM_EDIT);
	dlg.m_szID = m_szID;
	dlg.DoModal();
	return 0;  
}

int CAdDeliveryMethod::OnDeleteAdDeliveryMethod(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_delivery_method WHERE addm_delivery_method_id = '%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}

int CAdDeliveryMethod::OnSaveAdDeliveryMethod(){
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
 		//OnAdDeliveryMethodListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdDeliveryMethod::OnCancelAdDeliveryMethod(){
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
 
int CAdDeliveryMethod::OnAdDeliveryMethodListLoadData(){
	return 0;
}

