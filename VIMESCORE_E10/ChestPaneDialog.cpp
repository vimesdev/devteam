#include "ChestPaneDialog.h"
#include "MainFrame_E10.h"
#include "ChestItemApplyDialog.h"
#include "ChestSetupDialog.h"
#include "GroupSetupDialog.h"
static long _OnChestPaneLoadDataFnc(CWnd *pWnd){
	return ((CChestPaneDialog*)pWnd)->OnChestPaneLoadData();
} 
static void _OnChestPaneDblClickFnc(CWnd *pWnd){
	((CChestPaneDialog*)pWnd)->OnChestPaneDblClick();
} 
static void _OnChestPaneSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CChestPaneDialog*)pWnd)->OnChestPaneSelectChange(nOldItem, nNewItem);
} 
static int _OnChestPaneAddItemFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnChestPaneAddItem();
} 
static int _OnChestPaneEditItemFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnChestPaneEditItem();
} 
static int _OnChestPaneDeleteItemFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnChestPaneDeleteItem();
}
static int _OnChestSapXepChiSoFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnChestSapXepChiSo();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CChestPaneDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CChestPaneDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CChestPaneDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnListDeleteItem();
}

static int _OnListDeleteAllItemFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnListDeleteAllItem();
}

static long _OnGroupListLoadDataFnc(CWnd *pWnd){
	return ((CChestPaneDialog*)pWnd)->OnGroupListLoadData();
}
static int _OnGroupListAddItemFnc(CWnd *pWnd){
	return ((CChestPaneDialog*)pWnd)->OnGroupListAddItem();
}
static int _OnGroupListEditItemFnc(CWnd *pWnd){
	return ((CChestPaneDialog*)pWnd)->OnGroupListEditItem();
}
static int _OnGroupListDeleteItemFnc(CWnd *pWnd){
	return ((CChestPaneDialog*)pWnd)->OnGroupListDeleteItem();
}
static void _OnGroupListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem ){
	return ((CChestPaneDialog*)pWnd)->OnGroupListSelectChange(nOldItem, nNewItem);
}
static void _OnSearchChangeFnc(CWnd* pWnd){
	((CChestPaneDialog*)pWnd)->OnSearchChange();
}
static void _OnAddItemsSelectFnc(CWnd *pWnd){
	CChestPaneDialog *pVw = (CChestPaneDialog *)pWnd;
	pVw->OnAddItemsSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CChestPaneDialog *pVw = (CChestPaneDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddChestPaneDialogFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnAddChestPaneDialog();
} 
static int _OnEditChestPaneDialogFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnEditChestPaneDialog();
} 
static int _OnDeleteChestPaneDialogFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnDeleteChestPaneDialog();
} 
static int _OnSaveChestPaneDialogFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnSaveChestPaneDialog();
} 
static int _OnCancelChestPaneDialogFnc(CWnd *pWnd){
	 return ((CChestPaneDialog*)pWnd)->OnCancelChestPaneDialog();
} 
CChestPaneDialog::CChestPaneDialog(CWnd *pParent, int nStorageID):
	CGuiDialog(pParent){
	m_nStorageID = nStorageID;
	m_nLocationID = 0;
	m_nGroupID = 0;
	m_nDlgWidth = 800;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CChestPaneDialog::~CChestPaneDialog(){
}
void CChestPaneDialog::OnCreateComponents()
{
	m_wndChestItem.Create(this, _T("Chest Item"), 373, 5, 899, 619);
	m_wndChestList.Create(this, _T("Chest List"), 5, 4, 368, 350);
	m_wndChestGroup.Create(this, _T("Chest Group"), 5, 356, 368, 650);
	m_wndChestPane.Create(this,10, 29, 363, 345); 
	m_wndList.Create(this,378, 30, 894, 614); 
	m_wndGroupList.Create(this,10, 381, 363, 645); 
	m_wndSearchLabel.Create(this, _T("Search"), 429, 625, 509, 650);
	m_wndSearch.Create(this,514, 625, 674, 650); 
	m_wndFind.Create(this, _T("@"), 679, 625, 709, 650);
	m_wndAddItems.Create(this, _T("&Add Items"), 714, 625, 814, 650);
	m_wndClose.Create(this, _T("&Close"), 819, 625, 899, 650);

}
void CChestPaneDialog::OnInitializeComponents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndChestPane.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndChestPane.InsertColumn(1, _T("STT"), CFMT_NUMBER, 30);
	m_wndChestPane.InsertColumn(2, _T("Code"), CFMT_TEXT, 70);
	m_wndChestPane.InsertColumn(3, _T("Name"), CFMT_TEXT, 190);
	m_wndChestPane.InsertColumn(4, _T(""), CFMT_TEXT, 0);

	m_wndChestPane.SetAllowDrag(true);
	m_wndChestPane.ModifyStyle(LVS_SINGLESEL, 0);

	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(3, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 60);

	m_wndGroupList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndGroupList.InsertColumn(1, _T("ID"), CFMT_TEXT, 30);
	m_wndGroupList.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);

}
void CChestPaneDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndChestPane.SetEvent(WE_SELCHANGE, _OnChestPaneSelectChangeFnc);
	m_wndChestPane.SetEvent(WE_LOADDATA, _OnChestPaneLoadDataFnc);
	m_wndChestPane.SetEvent(WE_DBLCLICK, _OnChestPaneDblClickFnc);
	m_wndChestPane.AddEvent(1, _T("Add"), _OnChestPaneAddItemFnc);
	m_wndChestPane.AddEvent(2, _T("Edit"), _OnChestPaneEditItemFnc);
	m_wndChestPane.AddEvent(3, _T("Delete"), _OnChestPaneDeleteItemFnc, 0);
	m_wndChestPane.AddEvent(4, _T("Sắp sếp chỉ số"), _OnChestSapXepChiSoFnc);
	m_wndGroupList.SetEvent(WE_SELCHANGE, _OnGroupListSelectChangeFnc);
	m_wndGroupList.SetEvent(WE_LOADDATA, _OnGroupListLoadDataFnc);
	m_wndGroupList.AddEvent(1, _T("Add"), _OnGroupListAddItemFnc);
	m_wndGroupList.AddEvent(2, _T("Edit"), _OnGroupListEditItemFnc);
	m_wndGroupList.AddEvent(3, _T("Delete"), _OnGroupListDeleteItemFnc, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);

	m_wndList.AddEvent(2, _T("Delete All"), _OnListDeleteAllItemFnc, 0);

	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	m_wndAddItems.SetEvent(WE_CLICK, _OnAddItemsSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnChestPaneLoadData();
	OnGroupListLoadData();
	SetMode(VM_NONE);

}
void CChestPaneDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
}
void CChestPaneDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CChestPaneDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CChestPaneDialog::SetDefaultValues(){


}
int CChestPaneDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CChestPaneDialog::OnChestPaneDblClick(){
	CChestSetupDialog dlg(&m_wndChestPane, VM_EDIT, m_nStorageID);
	dlg.m_nLocationID = m_nLocationID;
	dlg.m_szCode = m_szCode;
	dlg.m_szName = m_szName;
	dlg.DoModal();	
} 
void CChestPaneDialog::OnChestPaneSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nLocationID = str2int(m_wndChestPane.GetItemText(nNewItem, 0));
	m_szCode = m_wndChestPane.GetItemText(nNewItem, 2);
	m_szName = m_wndChestPane.GetItemText(nNewItem, 3);
	m_szGroupID = m_wndChestPane.GetItemText(nNewItem, 4);
	OnListLoadData();
} 
int CChestPaneDialog::OnChestPaneAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CChestSetupDialog dlg(&m_wndChestPane, VM_ADD, m_nStorageID);
	dlg.DoModal();
	OnChestPaneLoadData();
	return 0;
} 
int CChestPaneDialog::OnChestPaneEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CChestSetupDialog dlg(&m_wndChestPane, VM_EDIT, m_nStorageID);
	dlg.m_nLocationID = m_nLocationID;
	dlg.m_szCode = m_szCode;
	dlg.m_szName = m_szName;
	dlg.m_szGroupKey = m_szGroupID;
	dlg.DoModal();
	return 0;
} 
int CChestPaneDialog::OnChestPaneDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nSel = m_wndChestPane.GetCurSel();
	if (nSel < 0)
		return 0;
	szSQL.Format(_T("SELECT count(*) FROM m_product_location WHERE mpl_storage_id = %d AND mpl_location_id = %d"), m_nStorageID, m_nLocationID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		ShowMessage(39);
		return -1;
	}
	if (ShowMessage(1) == IDNO)
		return 0;
	szSQL.Format(_T("DELETE FROM m_location_list WHERE mll_storage_id = %d AND mll_location_id = %d"), m_nStorageID, m_nLocationID);
	int nRes = pMF->ExecSQL(szSQL);
	if (nRes > 0)
		OnChestPaneLoadData();
	return 0;
} 
long CChestPaneDialog::OnChestPaneLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndChestPane.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T(" SELECT mll_location_id id, ") \
				_T("        mll_code        code, ") \
				_T("        mll_name        name, ") \
				_T("		mll_group_id group_id") \
				_T(" FROM   m_location_list") \
				_T(" WHERE mll_storage_id = %d order by mll_idx,mll_location_id "), m_nStorageID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIdx++);
		m_wndChestPane.AddItems(
			rs.GetValue(_T("id")),
			tmpStr,
			rs.GetValue(_T("code")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("group_id")), NULL);
		rs.MoveNext();
	}
	m_wndChestPane.EndLoad(); 
	return nCount;
}
int CChestPaneDialog::OnChestSapXepChiSo(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL;
	
	for(int i=0; i < m_wndChestPane.GetItemCount(); i++)
	{
		long nLocationID = str2int(m_wndChestPane.GetItemText(i, 0));
		szSQL.Format(_T(" Update m_location_list set mll_idx = %d where mll_location_id=%ld and mll_storage_id = %d "),i,nLocationID,m_nStorageID);
		pMF->ExecSQL(szSQL);
	}
	OnChestPaneLoadData();


	return 1;
}
void CChestPaneDialog::OnListDblClick(){
	
} 
void CChestPaneDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szProductID = m_wndList.GetItemText(nNewItem, 0);
} 
int CChestPaneDialog::OnListDeleteItem()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM m_product_location WHERE mpl_storage_id = %d AND mpl_location_id = %d AND mpl_product_id = %s"), m_nStorageID, m_nLocationID, m_szProductID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnListLoadData();
 	}
	return 0;
} 
int CChestPaneDialog::OnListDeleteAllItem()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("17")))
	{
		ShowMessageBox(_T("Không có quyền 17 ở phân hệ dược, vui lòng liên hệ phòng KHQS"));
		return -1;
	}

	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM m_product_location WHERE mpl_storage_id = %d AND mpl_location_id = %d"), m_nStorageID, m_nLocationID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnListLoadData();
 	}
	return 0;
} 


long CChestPaneDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T(" SELECT   product_id id, product_code code, ") \
				_T("           product_name name, product_uomname ") \
				_T(" FROM      m_product_location ") \
				_T(" LEFT JOIN m_product_view ON ( product_id = mpl_product_id ) ") \
				_T(" WHERE mpl_storage_id = %d AND mpl_location_id = %d"), m_nStorageID, m_nLocationID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIdx++);
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			tmpStr,
			rs.GetValue(_T("code")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("product_uomname")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

long CChestPaneDialog::OnGroupListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndGroupList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T(" SELECT   mlg_id id,") \
				_T("		   mlg_name name") \
				_T(" FROM      m_location_group ") \
				_T(" ORDER BY mlg_id"));

	nCount = rs.ExecSQL(szSQL);
	_debug(_T("nCount: %d"), nCount);
	while(!rs.IsEOF()){ 
		m_wndGroupList.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndGroupList.EndLoad(); 
	return nCount;
}

int CChestPaneDialog::OnGroupListAddItem(){
	CGroupSetupDialog dlg(this);
	dlg.SetMode(VM_ADD);
	if (dlg.DoModal() == IDOK)
		OnGroupListLoadData();
	return 0;
}

int CChestPaneDialog::OnGroupListEditItem(){
	int nSel = m_wndGroupList.GetCurSel();
	_debug(_T("nSel : %d"), nSel);
	if (nSel < 0)
		return nSel;	
	CGroupSetupDialog dlg(this, m_nGroupID);
	dlg.SetMode(VM_EDIT);
	if (dlg.DoModal() == IDOK)
		OnGroupListLoadData();
	return 0;
}

int CChestPaneDialog::OnGroupListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nSel = m_wndGroupList.GetCurSel();
	int nCount = 0;
	_debug(_T("nSel : %d"), nSel);
	if (nSel < 0)
		return nSel;
	szSQL.Format(_T("SELECT count(*) FROM m_location_list WHERE mll_group_id = %d"), m_nGroupID);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		AfxMessageBox(_T("This item is used!"));
		return -1;
	}
	szSQL.Format(_T("DELETE FROM m_location_group WHERE mlg_id = %d"), m_nGroupID);
	nCount = pMF->ExecSQL(szSQL);
	if (nCount > 0)
		OnGroupListLoadData();
	return 0;
}

void CChestPaneDialog::OnGroupListSelectChange(int nOldItem, int nNewItem){
	if (nNewItem < 0)
		return;
	_debug(_T("nNewItem : %d"), nNewItem);
	m_nGroupID = str2int(m_wndGroupList.GetItemText(nNewItem, 1));
}

void CChestPaneDialog::OnSearchChange(){
	UpdateData(true);
	m_wndList.Search(3, m_szSearch, SEARCH_LIKE);
}
void CChestPaneDialog::OnAddItemsSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_nLocationID > 0)
	{
		CChestItemApplyDialog dlg(&m_wndList, VM_ADD, m_nStorageID, m_nLocationID);
		dlg.DoModal();
	}
	OnListLoadData();
} 
void CChestPaneDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CChestPaneDialog::OnAddChestPaneDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CChestPaneDialog::OnEditChestPaneDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CChestPaneDialog::OnDeleteChestPaneDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelChestPaneDialog();
 	}
	return 0;
}
int CChestPaneDialog::OnSaveChestPaneDialog(){
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
 		//OnChestPaneDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CChestPaneDialog::OnCancelChestPaneDialog(){
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
int CChestPaneDialog::OnChestPaneDialogListLoadData(){
	return 0;
}

BOOL CChestPaneDialog::PreTranslateMessage(MSG *pMsg){
	return CGuiDialog::PreTranslateMessage(pMsg);
	if (pMsg->message == WM_RBUTTONDOWN)
	{
		_debug(_T("rclk"));
		if (pMsg->hwnd == m_wndGroupList.GetSafeHwnd())
		{
			int nSel = m_wndGroupList.GetCurSel();
			_debug(_T("nSel Pre: %d"), nSel);
			if (nSel < 0)
			{
				m_wndGroupList.SetMenuState(2, FALSE);
				m_wndGroupList.SetMenuState(3, FALSE);
			}
			else
			{
				m_wndGroupList.SetMenuState(2, TRUE);
				m_wndGroupList.SetMenuState(3, TRUE);
			}
		}
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}