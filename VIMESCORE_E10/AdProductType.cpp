#include "AdProductType.h"
#include "MainFrame_E10.h"
#include "AdProductTypeDialog.h"
#include ".\adproducttype.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdProductType *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdProductType *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdProductType *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdProductType *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeOfFilterSelectFnc(CWnd *pWnd){
	CAdProductType *pVw = (CAdProductType *)pWnd;
	pVw->OnTypeOfFilterSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdProductType*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdProductType*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdProductType*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdProductType*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdProductType*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdProductType*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdProductType *pVw = (CAdProductType *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdProductType *pVw = (CAdProductType *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdProductType *pVw = (CAdProductType *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdProductTypeFnc(CWnd *pWnd){
	 return ((CAdProductType*)pWnd)->OnAddAdProductType();
} 
static int _OnEditAdProductTypeFnc(CWnd *pWnd){
	 return ((CAdProductType*)pWnd)->OnEditAdProductType();
} 
static int _OnDeleteAdProductTypeFnc(CWnd *pWnd){
	 return ((CAdProductType*)pWnd)->OnDeleteAdProductType();
} 
static int _OnSaveAdProductTypeFnc(CWnd *pWnd){
	 return ((CAdProductType*)pWnd)->OnSaveAdProductType();
} 
static int _OnCancelAdProductTypeFnc(CWnd *pWnd){
	 return ((CAdProductType*)pWnd)->OnCancelAdProductType();
} 
CAdProductType::CAdProductType(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdProductType::~CAdProductType(){
}
void CAdProductType::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Product Type Information"), 5, 5, 810, 590);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 415, 55); 
	m_wndTypeOfFilter.Create(this, _T("@"), 420, 30, 445, 55);
	m_wndList.Create(this,10, 60, 805, 585); 
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
}
void CAdProductType::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("PRODUCT_TYPE"));
	m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);
	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 103);
	m_wndList.InsertColumn(1, _T("Product Name"), CFMT_TEXT, 640);
	
	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("ID"));
	m_arFilters.Add(_T("Method"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;
	
}


void CAdProductType::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndTypeOfFilter.SetEvent(WE_CLICK, _OnTypeOfFilterSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	SetMode(VM_VIEW);
	OnListLoadData();
}
void CAdProductType::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdProductType::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}


void CAdProductType::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}


void CAdProductType::SetDefaultValues(){


}


int CAdProductType::SetMode(int nMode){
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


/*void CAdProductType::OnSearchChange(){
	
} */
/*void CAdProductType::OnSearchSetfocus(){
	
} */
/*void CAdProductType::OnSearchKillfocus(){
	
} */
int CAdProductType::OnSearchCheckValue(){
	OnListLoadData();
	//m_wndList.Search(m_nSearchID, m_szSearch, 1);
	return 1;
}

 
void CAdProductType::OnTypeOfFilterSelect(){
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

 
void CAdProductType::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	OnEditAdProductType();
}

 
void CAdProductType::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
	
}
int CAdProductType::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdProductType();
	return 0;
}
int CAdProductType::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdProductType();
	return 0;
}
 
int CAdProductType::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdProductType();
	return 0;
}

 
long CAdProductType::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nSearchID == 2){
		szWhere.Format(_T(" and mpt_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and mpt_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_nSearchID == 0){
			szWhere.AppendFormat(_T(" and lower(mpt_product_type_id) like(lower('%%%s%%')) "), m_szSearch);
		}
		if(m_nSearchID == 1){
			szWhere.AppendFormat(_T(" and lower(mpt_name) like(lower('%%%s%%'))  "), m_szSearch);
		}
	}


	szWhere.AppendFormat(_T(" and mpt_org_id in('GL','%s') "), pMF->GetModuleID());

	szSQL.Format(_T("SELECT mpt_product_type_id as id, ") \
		_T("mpt_name as name ") \
		_T("FROM m_product_type ") \
		_T("WHERE substr(mpt_product_type_id, 1, 1)='A'  %s ") \
		_T("ORDER BY mpt_product_type_id"), szWhere);

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


void CAdProductType::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdProductType();
}

 
void CAdProductType::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdProductType();
}

 
void CAdProductType::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdProductType();
}

 
int CAdProductType::OnAddAdProductType(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdProductTypeDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}


int CAdProductType::OnEditAdProductType(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdProductTypeDialog dlg(this, VM_EDIT);
	dlg.m_szID = m_szID;
	dlg.DoModal();
	return 0;  
}


int CAdProductType::OnDeleteAdProductType(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) FROM m_product WHERE mp_producttype = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		return -1;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

 	szSQL.Format(_T("DELETE FROM m_product_type WHERE mpt_product_type_id = '%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}


int CAdProductType::OnSaveAdProductType(){
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
 		//OnAdProductTypeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}


int CAdProductType::OnCancelAdProductType(){
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

 
int CAdProductType::OnAdProductTypeListLoadData(){
	return 0;
}


BEGIN_MESSAGE_MAP(CAdProductType, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdProductType::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}
