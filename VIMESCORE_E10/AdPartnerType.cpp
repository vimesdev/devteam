#include "AdPartnerType.h"
#include "MainFrame_E10.h"
#include "AdPartnerTypeDialog.h"

/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdPartnerType *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdPartnerType *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdPartnerType *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdPartnerType *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdPartnerType *pVw = (CAdPartnerType *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdPartnerType *pVw = (CAdPartnerType *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdPartnerType *pVw = (CAdPartnerType *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdPartnerType *pVw = (CAdPartnerType *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnLoadInactiveSelectFnc(CWnd *pWnd){
	CAdPartnerType *pVw = (CAdPartnerType *)pWnd;
	pVw->OnLoadInactiveSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdPartnerType*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdPartnerType*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPartnerType*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdPartnerType*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdPartnerType*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdPartnerType*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerType*)pWnd)->OnAddAdPartnerType();
} 
static int _OnEditAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerType*)pWnd)->OnEditAdPartnerType();
} 
static int _OnDeleteAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerType*)pWnd)->OnDeleteAdPartnerType();
} 
static int _OnSaveAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerType*)pWnd)->OnSaveAdPartnerType();
} 
static int _OnCancelAdPartnerTypeFnc(CWnd *pWnd){
	 return ((CAdPartnerType*)pWnd)->OnCancelAdPartnerType();
} 
CAdPartnerType::CAdPartnerType(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CAdPartnerType::~CAdPartnerType(){
}
void CAdPartnerType::OnCreateComponents(){
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
void CAdPartnerType::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 103);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 640);

}
void CAdPartnerType::OnSetWindowEvents(){
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
void CAdPartnerType::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndLoadInactive.GetDlgCtrlID(), m_bLoadInactive);
}
void CAdPartnerType::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdPartnerType::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdPartnerType::SetDefaultValues(){

	m_szSearch.Empty();
	m_bLoadInactive = false;
}
int CAdPartnerType::SetMode(int nMode){
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
/*void CAdPartnerType::OnSearchChange(){
	
} */
/*void CAdPartnerType::OnSearchSetfocus(){
	
} */
/*void CAdPartnerType::OnSearchKillfocus(){
	
} */
int CAdPartnerType::OnSearchCheckValue(){
	m_wndList.Search(1, m_szSearch, SEARCH_LIKE);
	return 0;
} 
void CAdPartnerType::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
void CAdPartnerType::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdPartnerType();
} 
void CAdPartnerType::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdPartnerType();
} 
void CAdPartnerType::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdPartnerType();
} 
void CAdPartnerType::OnLoadInactiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
}
void CAdPartnerType::OnListDblClick(){
	OnEditAdPartnerType();
} 
void CAdPartnerType::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
} 

int CAdPartnerType::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdPartnerType();
	 return 0;
} 

int CAdPartnerType::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdPartnerType();
	 return 0;
} 

int CAdPartnerType::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdPartnerType();
	 return 0;
} 
long CAdPartnerType::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Format(_T(" AND adpt_isactive = 'Y'"));
	if (m_bLoadInactive)
		szWhere.Format(_T(" AND adpt_isactive = 'N'"));
	if (!m_szSearch.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(adpt_description) LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearch);
	szSQL.Format(_T(" SELECT") \
	_T("   adpt_partner_type_id AS id,") \
	_T("   adpt_description       AS name") \
	_T(" FROM   ad_partner_type") \
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
int CAdPartnerType::OnAddAdPartnerType(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdPartnerTypeDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}
int CAdPartnerType::OnEditAdPartnerType(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdPartnerTypeDialog dlg(this, VM_EDIT);
	dlg.m_szID = m_szID;
	dlg.DoModal();
	return 0;  
}
int CAdPartnerType::OnDeleteAdPartnerType(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_partner WHERE adp_partner_type_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		return -1;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM ad_partner_type WHERE adpt_partner_type_id = '%s'"), m_szID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
		OnListLoadData();
 	}
	return 0;
}
int CAdPartnerType::OnSaveAdPartnerType(){
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
 		//OnAdPartnerTypeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPartnerType::OnCancelAdPartnerType(){
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
int CAdPartnerType::OnAdPartnerTypeListLoadData(){
	return 0;
}

BEGIN_MESSAGE_MAP(CAdPartnerType, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdPartnerType::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}
