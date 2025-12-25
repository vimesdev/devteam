#include "FAMAsset.h"
#include "FAMAssetDlg.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAsset* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnTypeAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAsset*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFAMAsset*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAsset*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMAsset *pVw = (CFAMAsset *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMAsset *pVw = (CFAMAsset *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMAsset *pVw = (CFAMAsset *)pWnd;
	pVw->OnDeleteSelect();
} 

static void _OnAssetTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMAsset*)pWnd)->OnAssetTabSelectChange(nOld, nNew);
} 
static int _OnAddFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnAddFAMAsset();
} 
static int _OnEditFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnEditFAMAsset();
} 
static int _OnDeleteFAMAssetFnc(CWnd *pWnd){
	 return ((CFAMAsset*)pWnd)->OnDeleteFAMAsset();
} 

/*static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSearchByNameChange();
} */
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CFAMAsset *)pWnd)->OnSearchByNameSetfocus();} */ 
static void _OnSearchByNameKillfocusFnc(CWnd *pWnd)
{
	((CFAMAsset *)pWnd)->OnSearchByNameKillfocus();
}
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAsset *)pWnd)->OnSearchByNameCheckValue();
}

CFAMAsset::CFAMAsset()
{
	m_nDlgWidth = 1024;
	m_nDlgHeight = 690;
	SetDefaultValues();
}
CFAMAsset::~CFAMAsset()
{
}

void CFAMAsset::OnCreateComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndAssets.Create(this, _T("Assets"), 4, 5, 809, 625);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndType.Create(this,95, 30, 295, 55); 
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 300, 30, 400, 55);
	m_wndSearchByName.Create(this,405, 30, 805, 55); 
	m_wndList.Create(this,10, 60, 805, 590); 
	m_wndAdd.Create(this, _T("&Add"), 555, 595, 635, 620);
	m_wndEdit.Create(this, _T("Edit"), 640, 595, 720, 620);
	m_wndDelete.Create(this, _T("&Delete"), 725, 595, 805, 620);

	//m_wndAssetType.Create(&m_wndSearchTab);
	//m_wndSearchTab.Add(_T("Type"), &m_wndAssetType);

	m_wndCategoryLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndCategoryLabel.ShowWindow(SW_HIDE);
	m_wndCategoryLabel.EnableWindow(FALSE);
	m_wndCategory.Create(this, 0, 0, 0, 0);
	m_wndCategory.ShowWindow(SW_HIDE);
	m_wndCategory.EnableWindow(FALSE);
	m_wndManufactureLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndManufactureLabel.ShowWindow(SW_HIDE);
	m_wndManufactureLabel.EnableWindow(FALSE);
	m_wndManufacture.Create(this, 0, 0, 0, 0);
	m_wndManufacture.ShowWindow(SW_HIDE);
	m_wndManufacture.EnableWindow(FALSE);
	m_wndIncReasonLabel.Create(this, L"", 0, 0, 0, 0);
	m_wndIncReasonLabel.ShowWindow(SW_HIDE);
	m_wndIncReasonLabel.EnableWindow(FALSE);
	m_wndIncReason.Create(this, 0, 0, 0, 0);
	m_wndIncReason.ShowWindow(SW_HIDE);
	m_wndIncReason.EnableWindow(FALSE);
	
}
void CFAMAsset::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	
	m_wndList.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Created By"), CFMT_TEXT, 100);

	m_wndList.ModifyStyle(0, LVS_SHOWSELALWAYS | LVS_NOSORTHEADER);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	//m_wndSearchTab.SetCurSel(0);
	//m_wndAssetTab.SetCurSel(0);

}
void CFAMAsset::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	
	OnListLoadData();
	SetMode(VM_NONE);
}
void CFAMAsset::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);

}
void CFAMAsset::GetDataToScreen()
{
	
}
void CFAMAsset::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	

}
void CFAMAsset::SetDefaultValues()
{
	
}
int CFAMAsset::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD:  
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
			m_wndType.EnableWindow(TRUE);
			m_wndSearchByName.EnableWindow(TRUE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
			m_wndType.EnableWindow(TRUE);
			m_wndSearchByName.EnableWindow(TRUE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE);
			EnableButtons(TRUE, 0, 1, 2, -1); 
			m_wndType.EnableWindow(TRUE);
			m_wndSearchByName.EnableWindow(TRUE);
 			break; 
 		case VM_NONE: 
 			//EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
			m_wndType.EnableWindow(TRUE);
			m_wndSearchByName.EnableWindow(TRUE);
 			SetDefaultValues(); 
 			break; 
 		};

 		UpdateData(FALSE); 
 		return nOldMode; 
}

void CFAMAsset::OnListDblClick()
{
	OnEditSelect();
}
void CFAMAsset::ResetData()
{
	SetMode(VM_NONE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndList.SetCurSel(-1);
	m_szAssetNo.Empty();
	//pMF->m_szDeprUnit.Empty();
	pMF->m_szAssetNo = m_szAssetNo;
	
}
void CFAMAsset::OnListSelectChange(int nOldItem, int nNewItem)
{
	if (nNewItem < 0) return;
	m_szAssetNo = m_wndList.GetItemText(nNewItem, 0);
	curAssetNo = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
	CheckUser();

} 
int CFAMAsset::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMAsset::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems();
	int nCount = 0;
	if(!m_szTypeKey.IsEmpty())
		szWhere.Format(_T(" AND sil_type='%s' "), m_szTypeKey);
	if(!m_szSearchByName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND upper(sil_name) LIKE upper('%s%s%s') "), _T("%"), m_szSearchByName, _T("%"));
	}
	/*szSQL.Format(_T("SELECT fal_assetno AS ID, fal_assetname AS Name, fal_category, fal_type, fal_createdby as nguoitao FROM fam_asset_list")\
		         _T(" WHERE 1=1 %s GROUP BY fal_category, fal_type, fal_assetno, fal_assetname, fal_createdby ") \
				 _T(" ORDER BY fal_category, fal_type, fal_assetname"), szWhere);*/
	szSQL.Format(_T("SELECT sil_item_list_id AS ID, sil_name AS Name, sil_category, sil_type, sil_createdby as nguoitao FROM storage_item_list")\
		         _T(" WHERE sil_org_id = 'ITS' %s ") \
				 _T(" GROUP BY sil_category, sil_type, sil_item_list_id, sil_name, sil_createdby ") \
				 _T(" ORDER BY sil_category, sil_type, sil_name"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("nguoitao")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	//ResetData();
	return nCount;
}

void CFAMAsset::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CFAMAsset::OnTypeSelendok(){
	m_szTypeKey = m_wndType.GetCurrent(0);
	OnListLoadData();
}
/*void CFAMAsset::OnTypeSetfocus(){
	
}*/
void CFAMAsset::OnTypeKillfocus(){
	
}
long CFAMAsset::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and fast_id='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_assettype WHERE fast_org_id = '%s' %s ORDER BY fast_id"), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("fast_id")), 
			rs.GetValue(_T("fast_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAsset::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void CFAMAsset::OnSearchByNameChange(){
	
} */
/*void CFAMAsset::OnSearchByNameSetfocus(){
	
} */
void CFAMAsset::OnSearchByNameKillfocus()
{
	UpdateData(TRUE);
	if (m_szSearchByName.IsEmpty())
		return;
	OnListLoadData();
	m_wndSearchByName.SetFocus();
	//ResetData();
}
int CFAMAsset::OnSearchByNameCheckValue()
{
	return 0;
} 
void CFAMAsset::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("14.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		CFAMAssetDlg dlg(pMF);
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
	}
	
} 
void CFAMAsset::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if(szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("14.02")) || pMF->GetCurrentUser() == _T("admin"))
	if(szUser == pMF->GetCurrentUser() || pMF->GetCurrentUser() == _T("admin"))
	{
		CFAMAssetDlg dlg(pMF);
		dlg.szAssetNo = curAssetNo;
		dlg.SetMode(VM_EDIT);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
	}
} 
void CFAMAsset::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if(szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("14.03"))|| pMF->GetCurrentUser() == _T("admin"))
	if(szUser == pMF->GetCurrentUser() || pMF->GetCurrentUser() == _T("admin") || pMF->CheckPermission(_T("32")))
	{
		OnDeleteFAMAsset();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
	}
	
} 

int CFAMAsset::OnAddFAMAsset(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAsset::OnEditFAMAsset(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAsset::OnDeleteFAMAsset()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	/*m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1*/;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szSQLCheck;
	CRecord rs(&pMF->m_db);
	szSQLCheck.Format(_T("SELECT count(*) FROM storage_transactionline WHERE stl_item_id = '%s'"), curAssetNo);
	rs.ExecSQL(szSQLCheck);
	int ret2 = rs.GetIntValue();
	if(ret2 > 0)
	{
		ShowMessageBox(_T("Can not delete this record. This product has been existed in department.!"), MB_OK | MB_ICONERROR);
		return -1;
	}
	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	//szSQL.Format(_T("DELETE FROM fam_asset_list WHERE fal_assetno='%s'"), curAssetNo); 

	szSQL.Format(_T("DELETE FROM storage_item_list WHERE sil_item_list_id='%s'"), curAssetNo); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			//m_szAssetNo = m_wndList.GetItemText(m_nIndex, 0);
			//GetDataToScreen();
		}
		else
		{
 			//SetMode(VM_NONE);
			ResetData();
			//m_wndAdd.SetFocus();
		} 
 	}
	else
		ShowMessageBox(_T("Can not delete this record. Maybe violates foreign key constraint"), MB_OK | MB_ICONERROR);
	return 0;
}
int CFAMAsset::OnFAMAssetListLoadData(){
	return 0;
}

void CFAMAsset::CheckUser()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sil_createdby FROM storage_item_list WHERE sil_item_list_id = '%s'"), m_szAssetNo);
	rs.ExecSQL(szSQL);
	szUser = rs.GetValue(_T("sil_createdby"));
}
