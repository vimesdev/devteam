#include "ProductTenderList.h"
#include "MainFrame_E10.h"
#include "ProductTenderDialog.h"


static void _OnProductListCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderList* )pWnd)->OnProductListCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductListCategorySelendokFnc(CWnd *pWnd){
	((CProductTenderList *)pWnd)->OnProductListCategorySelendok();
}
/*static void _OnProductListCategorySetfocusFnc(CWnd *pWnd){
	((CProductTenderList *)pWnd)->OnProductListCategoryKillfocus();
}*/
/*static void _OnProductListCategoryKillfocusFnc(CWnd *pWnd){
	((CProductTenderList *)pWnd)->OnProductListCategoryKillfocus();
}*/
static long _OnProductListCategoryLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderList *)pWnd)->OnProductListCategoryLoadData();
}
/*static void _OnProductListCategoryAddNewFnc(CWnd *pWnd){
	((CProductTenderList *)pWnd)->OnProductListCategoryAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CProductTenderList *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CProductTenderList *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CProductTenderList *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderList *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CProductTenderList *pVw = (CProductTenderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CProductTenderList *pVw = (CProductTenderList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CProductTenderList *pVw = (CProductTenderList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CProductTenderList *pVw = (CProductTenderList *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductTenderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductTenderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductTenderList*)pWnd)->OnListDeleteItem();
} 


static int _OnAddProductTenderListFnc(CWnd *pWnd){
	 return ((CProductTenderList*)pWnd)->OnAddProductTenderList();
} 
static int _OnEditProductTenderListFnc(CWnd *pWnd){
	 return ((CProductTenderList*)pWnd)->OnEditProductTenderList();
} 
static int _OnDeleteProductTenderListFnc(CWnd *pWnd){
	 return ((CProductTenderList*)pWnd)->OnDeleteProductTenderList();
} 
static int _OnSaveProductTenderListFnc(CWnd *pWnd){
	 return ((CProductTenderList*)pWnd)->OnSaveProductTenderList();
} 
static int _OnCancelProductTenderListFnc(CWnd *pWnd){
	 return ((CProductTenderList*)pWnd)->OnCancelProductTenderList();
} 
CProductTenderList::CProductTenderList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 1158;
	SetDefaultValues();
}
CProductTenderList::~CProductTenderList(){
}
void CProductTenderList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndItemInformation.Create(this, _T("Item List"), 5, 65, 810, 400);
	
	m_wndProductListCategoryLabel.Create(this, _T("Category"), 10, 30, 90, 55);
	m_wndProductListCategory.Create(this,95, 30, 405, 55); 
	m_wndSearchNameLabel.Create(this, _T("&Name"), 410, 30, 490, 55);
	m_wndSearchName.Create(this,495, 30, 775, 55); 
	m_wndFind.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndList.Create(this,10, 90, 805, 640); 	

	m_wndAdd.Create(this, _T("&Add"), 560, 645, 640, 670);
	m_wndEdit.Create(this, _T("&Edit"), 645, 645, 725, 670);
	m_wndDelete.Create(this, _T("&Delete"), 730, 645, 810, 670);
}
void CProductTenderList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductListCategory.SetCheckValue(true);
	m_wndProductListCategory.LimitText(1024);
	m_wndSearchName.SetLimitText(1024);
	//m_wndSearchName.SetCheckValue(true);

	m_wndProductListCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndProductListCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Mã hoạt chất"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Tên hoạt chất"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(3, _T("Nồng độ, hàm lượng"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Đơn vị"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(5, _T("Dạng bào chế"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(6, _T("Đường dùng"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T("Nhóm TCKT"), CFMT_TEXT, 70);
	
	

	
}
void CProductTenderList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductListCategory.SetEvent(WE_SELENDOK, _OnProductListCategorySelendokFnc);
	//m_wndProductListCategory.SetEvent(WE_SETFOCUS, _OnProductListCategorySetfocusFnc);
	//m_wndProductListCategory.SetEvent(WE_KILLFOCUS, _OnProductListCategoryKillfocusFnc);
	m_wndProductListCategory.SetEvent(WE_SELCHANGE, _OnProductListCategorySelectChangeFnc);
	m_wndProductListCategory.SetEvent(WE_LOADDATA, _OnProductListCategoryLoadDataFnc);
	//m_wndProductListCategory.SetEvent(WE_ADDNEW, _OnProductListCategoryAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	
	
	SetMode(VM_VIEW);

}
void CProductTenderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProductListCategory.GetDlgCtrlID(), m_szProductListCategoryKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CProductTenderList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	
	}
	else
	{
			
	m_jData[_T("ProductListCategory")].GetValue(m_szProductListCategoryKey);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	
	}

}
void CProductTenderList::GetDataToScreen(){
	

}
void CProductTenderList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductTenderList::SetDefaultValues(){

	m_szProductListCategoryKey.Empty();
	m_szSearchName.Empty();

}
int CProductTenderList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, 4, 5, -1);
			SetDefaultValues();
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		
 		UpdateData(FALSE);
 		return nOldMode;
}
void CProductTenderList::OnProductListCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductTenderList::OnProductListCategorySelendok(){
	 
}
/*void CProductTenderList::OnProductListCategorySetfocus(){
	
}*/
/*void CProductTenderList::OnProductListCategoryKillfocus(){
	
}*/
long CProductTenderList::OnProductListCategoryLoadData(){
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndProductListCategory.IsSearchKey() && !m_szProductListCategoryKey.IsEmpty()) {
		szWhere.Format(_T(" and mpc_product_category_id='%s' "), m_szProductListCategoryKey);
	}
	m_wndProductListCategory.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT mpc_product_category_id as id, mpc_name as name FROM m_product_category ") \
		_T("WHERE mpc_isactive = 'Y' and mpc_org_id = '%s' %s ORDER BY id "), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndProductListCategory.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CProductTenderList::OnProductListCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductTenderList::OnSearchNameChange(){
	
} */
/*void CProductTenderList::OnSearchNameSetfocus(){
	
} */
/*void CProductTenderList::OnSearchNameKillfocus(){
	
} */
int CProductTenderList::OnSearchNameCheckValue(){
	return 0;
} 
void CProductTenderList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CProductTenderDialog dlg(this, VM_ADD);
	dlg.m_pWndRef = this;
	dlg.DoModal();
} 
void CProductTenderList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;

	m_szID = m_wndList.GetItemText(nSel, 0);
	CProductTenderDialog dlg(this, VM_EDIT);
	dlg.m_szProductTenderID = m_szID;
	dlg.m_pWndRef = this;
	if (dlg.DoModal() == IDOK)
	{
	}
	
} 
void CProductTenderList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteProductTenderList();
} 
void CProductTenderList::OnFindSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CProductTenderList::OnListDblClick(){
	OnEditSelect();
} 
void CProductTenderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	
} 
int CProductTenderList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteProductTenderList();
	 return 0;
} 
long CProductTenderList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	
	if (!m_szSearchName.IsEmpty())
	{
		szWhere.Format(
			_T(" AND lower(ACTIVE_INGREDIENT||'|'||CODE) like lower('%s%s%s') ")
			, _T("%"), m_szSearchName, _T("%"));
	}

	if (!m_szProductListCategoryKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND CATEGORY_ID=%ld "), str2long(m_szProductListCategoryKey));
	}

	szSQL.Format(_T("SELECT M_PRODUCT_TENDER_ID, CREATED, CREATEDBY, ") \
				_T(" UPDATED, UPDATEDBY, CODE, ") \
		_T("  ACTIVE_INGREDIENT_ID, ACTIVE_INGREDIENT, ") \
		_T(" CATEGORY_ID, DOSAGE_ID, DOSAGE_FORM, ") \
		_T(" (SELECT pu_name FROM pms_usedrug WHERE pu_id = ROUTE_ID) AS ROUTE,  ") \
		_T(" GET_UOMNAME(UOM_ID) AS UOM,  ") \
		_T(" ISACTIVE ") \
		_T(" FROM m_product_tender ") \
		_T(" WHERE 1=1 %s"), szWhere);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("M_PRODUCT_TENDER_ID")),
			rs.GetValue(_T("CODE")),
			rs.GetValue(_T("ACTIVE_INGREDIENT")),
			rs.GetValue(_T("DOSAGE_ID")),
			rs.GetValue(_T("UOM")),
			rs.GetValue(_T("DOSAGE_FORM")),
			rs.GetValue(_T("ROUTE")),
			rs.GetValue(_T("CATEGORY_ID")),

			NULL);
		rs.MoveNext();

	}
	m_wndList.EndLoad(); 
	return nCount;

}


int CProductTenderList::OnAddProductTenderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductTenderList::OnEditProductTenderList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductTenderList::OnDeleteProductTenderList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	CString szID = m_wndList.GetItemText(nSel, 0);
 	szSQL.Format(_T("M_PRODUCT_TENDER_DELETE('%s', '%s') "), szID, pMF->GetCurrentUser() );
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret >= 0){
		m_wndList.DeleteItem(nSel);
 	}
	return 0;
}

int CProductTenderList::OnSaveProductTenderList(){
	//return m_wndView.OnSaveSelect();
	return 0;
}
int CProductTenderList::OnCancelProductTenderList(){
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
int CProductTenderList::OnProductTenderListListLoadData(){
	return 0;
}

void CProductTenderList::OnPExtraInfoSelect() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}

void CProductTenderList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);	
}

BOOL CProductTenderList::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	cout << "OnCommand" << endl;
	cout << "Param:" << wParam << endl;
	if (wParam == CMD_REFRESHDATA)
	{

		OnListLoadData();
	}
	return CGuiView::OnCommand(wParam, lParam);
}


BOOL CProductTenderList::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_F3)
		{
			m_wndSearchName.SetFocus();
		}
		if (pMsg->wParam == VK_F4)
		{
			OnAddSelect();
		}
		if (pMsg->wParam == VK_F5)
		{
			OnFindSelect();
		}
		if (pMsg->wParam == VK_SPACE)
		{
			if (pMsg->hwnd == m_wndList.GetSafeHwnd())
			{
				OnListDblClick();
			}
		}

	}
		
	return CGuiView::PreTranslateMessage(pMsg);
}
