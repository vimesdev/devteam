#include "AdPaymentResource.h"
#include "MainFrame_E10.h"
#include "AdPaymentResourceDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdPaymentResource*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdPaymentResource*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPaymentResource*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd* pWnd){
	return ((CAdPaymentResource*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdPaymentResource*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdPaymentResource*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdPaymentResource *pVw = (CAdPaymentResource *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdPaymentResource *pVw = (CAdPaymentResource *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdPaymentResource *pVw = (CAdPaymentResource *)pWnd;
	pVw->OnDeleteSelect();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdPaymentResource *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdPaymentResource *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdPaymentResource *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdPaymentResource *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdPaymentResource *pVw = (CAdPaymentResource *)pWnd;
	pVw->OnFindSelect();
} 
static int _OnAddAdPaymentResourceFnc(CWnd *pWnd){
	 return ((CAdPaymentResource*)pWnd)->OnAddAdPaymentResource();
} 
static int _OnEditAdPaymentResourceFnc(CWnd *pWnd){
	 return ((CAdPaymentResource*)pWnd)->OnEditAdPaymentResource();
} 
static int _OnDeleteAdPaymentResourceFnc(CWnd *pWnd){
	 return ((CAdPaymentResource*)pWnd)->OnDeleteAdPaymentResource();
} 
static int _OnSaveAdPaymentResourceFnc(CWnd *pWnd){
	 return ((CAdPaymentResource*)pWnd)->OnSaveAdPaymentResource();
} 
static int _OnCancelAdPaymentResourceFnc(CWnd *pWnd){
	 return ((CAdPaymentResource*)pWnd)->OnCancelAdPaymentResource();
} 
CAdPaymentResource::CAdPaymentResource(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CAdPaymentResource::~CAdPaymentResource(){
}
void CAdPaymentResource::OnCreateComponents(){
	m_wndGroupList.Create(this, _T("Source drug list"), 5, 65, 810, 590);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndList.Create(this,10, 90, 805, 585); 
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 395, 55); 
	m_wndFind.Create(this, _T("@"), 400, 30, 430, 55);

}
void CAdPaymentResource::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 83);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 640);

}
void CAdPaymentResource::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdPaymentResourceFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdPaymentResourceFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdPaymentResourceFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdPaymentResourceFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdPaymentResourceFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);
	OnListLoadData();
}
void CAdPaymentResource::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdPaymentResource::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdPaymentResource::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdPaymentResource::SetDefaultValues(){

	m_szSearch.Empty();

}
int CAdPaymentResource::SetMode(int nMode){
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
		m_wndFind.EnableWindow(true);
		m_wndSearch.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CAdPaymentResource::OnListDblClick(){
	OnEditAdPaymentResource();
} 
void CAdPaymentResource::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nID = ToInt(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}
int CAdPaymentResource::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdPaymentResource();
	 return 0;
} 
int CAdPaymentResource::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdPaymentResource();
	 return 0;
} 
int CAdPaymentResource::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdPaymentResource();
	 return 0;
} 
long CAdPaymentResource::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (!m_szSearch.IsEmpty())
		szWhere.Format(_T(" AND adpr_name LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearch);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpr_payment_resource_id as id, adpr_description as name FROM ad_payment_resource WHERE 1=1 %s ORDER BY id"), szWhere);
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
void CAdPaymentResource::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdPaymentResource();
} 
void CAdPaymentResource::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdPaymentResource();
} 
void CAdPaymentResource::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdPaymentResource();
} 
/*void CAdPaymentResource::OnSearchChange(){
	
} */
/*void CAdPaymentResource::OnSearchSetfocus(){
	
} */
/*void CAdPaymentResource::OnSearchKillfocus(){
	
} */
int CAdPaymentResource::OnSearchCheckValue(){
	m_wndList.Search(1, m_szSearch, SEARCH_LIKE);
	return 0;
} 
void CAdPaymentResource::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
int CAdPaymentResource::OnAddAdPaymentResource(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_ADD);
	CAdPaymentResourceDialog dlg(this, VM_ADD);
	dlg.DoModal();
	return 0;
}
int CAdPaymentResource::OnEditAdPaymentResource(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	//SetMode(VM_EDIT);
	CAdPaymentResourceDialog dlg(this, VM_EDIT);
	dlg.m_nID = m_nID;
	dlg.DoModal();
	return 0;  
}
int CAdPaymentResource::OnDeleteAdPaymentResource(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("SELECT count(*) FROM m_product WHERE mp_resource_id = %d"), m_nID);
	rs.ExecSQL(szSQL);
	int ret = rs.GetIntValue();
	if (ret > 0)
	{
		AfxMessageBox(_T("This resource has been used.Can not delete."), MB_OK);	
		return -1;
	}
 	szSQL.Format(_T("DELETE FROM ad_payment_resource WHERE adpr_payment_resource_id = %d"), m_nID);
 	ret = pMF->ExecSQL(szSQL);
 	if(ret > 0){
 		OnListLoadData();
 	}
	return 0;
}
int CAdPaymentResource::OnSaveAdPaymentResource(){
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
 		//OnAdPaymentResourceListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPaymentResource::OnCancelAdPaymentResource(){
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
int CAdPaymentResource::OnAdPaymentResourceListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CAdPaymentResource, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdPaymentResource::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}
