#include "StorageList.h"
#include "MainFrame_E10.h"
#include "StorageDialog.h"
#include ".\storagelist.h"

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnTypeAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnStorageNameChangeFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnStorageNameChange();
} */
/*static void _OnStorageNameSetfocusFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnStorageNameSetfocus();} */ 
/*static void _OnStorageNameKillfocusFnc(CWnd *pWnd){
	((CStorageList *)pWnd)->OnStorageNameKillfocus();
} */
static int _OnStorageNameCheckValueFnc(CWnd *pWnd){
	return ((CStorageList *)pWnd)->OnStorageNameCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CStorageList *pVw = (CStorageList *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageList *pVw = (CStorageList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageList *pVw = (CStorageList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageList *pVw = (CStorageList *)pWnd;
	pVw->OnDeleteSelect();
} 
static long _OnStorageListLoadDataFnc(CWnd *pWnd){
	return ((CStorageList*)pWnd)->OnStorageListLoadData();
} 
static void _OnStorageListDblClickFnc(CWnd *pWnd){
	((CStorageList*)pWnd)->OnStorageListDblClick();
} 

static void _OnInactiveSelectFnc(CWnd *pWnd){
	((CStorageList*)pWnd)->OnInactiveSelect();
} 
static void _OnStorageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageList*)pWnd)->OnStorageListSelectChange(nOldItem, nNewItem);
} 
static int _OnStorageListAddItemFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnStorageListAddItem();
} 
static int _OnStorageListEditItemFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnStorageListEditItem();
} 
static int _OnStorageListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnStorageListDeleteItem();
} 
static int _OnStorageListSetActiveFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnStorageListSetActive();
} 
static int _OnAddStorageListFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnAddStorageList();
} 
static int _OnEditStorageListFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnEditStorageList();
} 
static int _OnDeleteStorageListFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnDeleteStorageList();
} 
static int _OnSaveStorageListFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnSaveStorageList();
} 
static int _OnCancelStorageListFnc(CWnd *pWnd){
	 return ((CStorageList*)pWnd)->OnCancelStorageList();
} 
CStorageList::CStorageList(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 615;
	SetDefaultValues();
}
CStorageList::~CStorageList(){
}
void CStorageList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndStorageInformation.Create(this, _T("Storage List"), 5, 65, 810, 590);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 105, 55);
	m_wndType.Create(this,110, 30, 430, 55); 
	m_wndStorageNameLabel.Create(this, _T("Storage Name"), 435, 30, 535, 55);
	m_wndStorageName.Create(this,540, 30, 775, 55); 
	m_wndFind.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndStorageList.Create(this,10, 90, 805, 585); 
	m_wndInactive.Create(this, _T("Inactive"), 5, 595, 125, 620);
	
	m_wndDepartment.Create(this, 0, 0, 0, 0);
	m_wndDepartment.ShowWindow(SW_HIDE);
	m_wndDepartment.EnableWindow(FALSE);
}

void CStorageList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndStorageName.SetLimitText(81);
	//m_wndStorageName.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStorageList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndStorageList.InsertColumn(2, _T("Type"), CFMT_TEXT, 150);
	m_wndStorageList.InsertColumn(3, _T("Department"), CFMT_TEXT, 220);
	m_wndStorageList.InsertColumn(4, _T("Active"), CFMT_TEXT, 0);
	m_storagelistTbl.SetTableName(_T("m_storagelist"));
	m_storagelistTbl.AddField(_T("msl_storage_id"), dfInteger); 
	m_storagelistTbl.AddField(_T("msl_name"), dfText, 81); 
	m_storagelistTbl.AddField(_T("msl_type"), dfText, 1); 
	m_storagelistTbl.AddField(_T("msl_dept_id"), dfText, 7); 
	m_storagelistTbl.AddField(_T("msl_paraclin"), dfText, 1); 
	m_storagelistTbl.AddField(_T("msl_objects"), dfText, 35); 
	m_storagelistTbl.AddField(_T("msl_isactive"), dfText, 1); 
	m_storagelistTbl.AddField(_T("msl_org_id"), dfText, 3); 
	m_storagelistTbl.AddField(_T("msl_nonresident"), dfText, 1); 
	m_storagelistTbl.AddField(_T("msl_resident"), dfText, 1); 

}
void CStorageList::OnSetWindowEvents(){
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndStorageName.SetEvent(WE_CHANGE, _OnStorageNameChangeFnc);
	//m_wndStorageName.SetEvent(WE_SETFOCUS, _OnStorageNameSetfocusFnc);
	//m_wndStorageName.SetEvent(WE_KILLFOCUS, _OnStorageNameKillfocusFnc);
	m_wndStorageName.SetEvent(WE_CHECKVALUE, _OnStorageNameCheckValueFnc);
	m_wndStorageList.SetWindowText(_T("Storage Menu"));
	m_wndStorageList.AddEvent(1, _T("Add"), _OnStorageListAddItemFnc);
	m_wndStorageList.AddEvent(0, _T("-"), NULL);
	m_wndStorageList.AddEvent(2, _T("Edit"), _OnStorageListEditItemFnc);
	m_wndStorageList.AddEvent(0, _T("-"), NULL);
	m_wndStorageList.AddEvent(3, _T("Delete"), _OnStorageListDeleteItemFnc, 0);

	//m_wndStorageList.AddEvent(2, _T("Set Active-Deactive"), _OnStorageListSetActiveFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndStorageList.SetEvent(WE_SELCHANGE, _OnStorageListSelectChangeFnc);
	m_wndStorageList.SetEvent(WE_LOADDATA, _OnStorageListLoadDataFnc);
	m_wndStorageList.SetEvent(WE_DBLCLICK, _OnStorageListDblClickFnc);
	m_wndInactive.SetEvent(WE_CLICK, _OnInactiveSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddStorageListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditStorageListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteStorageListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveStorageListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelStorageListFnc, 0, 'T', VK_CONTROL);
*/
	//Layout
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndType, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndStorageNameLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndStorageName, WS_REPOSX | WS_RESIZEX, 50, 100, 50, 50);
	AddLayoutControl(&m_wndFind, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndStorageInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndStorageList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndAdd, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndEdit, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDelete, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);	
//	m_wndStorageList.SetAutoColumnSize(true);
	OnStorageListLoadData();
	SetMode(VM_VIEW);

}
void CStorageList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	//DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndStorageName.GetDlgCtrlID(), m_szStorageName);
	DDX_Check(pDX, m_wndInactive.GetDlgCtrlID(), m_bInactive);
}
void CStorageList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("msl_name"), m_szStorageName);
	rs.GetValue(_T("msl_type"), m_szTypeKey);
	rs.GetValue(_T("msl_dept_id"), m_szDepartmentKey);

}
void CStorageList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_storagelistTbl.SetValue(_T("msl_name"), m_szStorageName);
	m_storagelistTbl.SetValue(_T("msl_type"), m_szTypeKey);
	m_storagelistTbl.SetValue(_T("msl_dept_id"), m_szDepartmentKey);
	m_storagelistTbl.SetValue(_T("msl_org_id"), pMF->GetModuleID());

}
void CStorageList::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szDepartmentKey.Empty();
	m_szStorageName.Empty();
	m_bInactive = FALSE;
}
int CStorageList::SetMode(int nMode){
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
 			EnableControls(TRUE); 
 			//EnableButtons(FALSE, 3, 4, -1); 
			m_wndStorageName.SetFocus();
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
void CStorageList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnStorageListLoadData();
} 
void CStorageList::OnTypeSelendok(){
	OnStorageListLoadData();
}
/*void CStorageList::OnTypeSetfocus(){
	
}*/
/*void CStorageList::OnTypeKillfocus(){
	
}*/
long CStorageList::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(!m_szTypeKey.IsEmpty() && m_wndType.IsSearchKey()){
		szWhere.Format(_T(" and trim(ss_code)='%s' "), m_szTypeKey);
	};

	szSQL.Format(_T("select * from sys_sel where ss_id='pms_stocktype' %s order by ss_code"), szWhere);
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CStorageList::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnStorageListLoadData();
} 
void CStorageList::OnDepartmentSelendok(){
	 
}
/*void CStorageList::OnDepartmentSetfocus(){
	
}*/
/*void CStorageList::OnDepartmentKillfocus(){
	
}*/
long CStorageList::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey()){
		szWhere.Format(_T("WHERE sd_id='%s' "), m_szDepartmentKey);
	};

//	szWhere.AppendFormat(_T(" and sd_id in(%s) "), pMF->m_szDepartmentPerm);

	szSQL.Format(_T("select  * from sys_dept %s order by sd_id "), szWhere);
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CStorageList::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageList::OnStorageNameChange(){
	
} */
/*void CStorageList::OnStorageNameSetfocus(){
	
} */
/*void CStorageList::OnStorageNameKillfocus(){
	
} */
int CStorageList::OnStorageNameCheckValue(){
	return 0;
} 
void CStorageList::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnStorageListLoadData();
} 
void CStorageList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageList();
} 
void CStorageList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageList();
} 
void CStorageList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageList();
} 
void CStorageList::OnStorageListDblClick(){
	OnEditStorageList();
} 
void CStorageList::OnStorageListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndStorageList.GetCurSel();
	m_nStorageID = str2int(m_wndStorageList.GetItemText(nSel, 0));
} 
int CStorageList::OnStorageListAddItem(){
	OnAddStorageList();
	return 0;
}
int CStorageList::OnStorageListEditItem(){
	OnEditStorageList();
	return 0;
}
int CStorageList::OnStorageListDeleteItem(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndStorageList.GetCurSel();
	if(nSel < 0)
		return -1;
	szSQL.Format(_T("SELECT COUNT(*) FROM m_storageline WHERE msl_storage_id=%d "), m_nStorageID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}
	m_nStorageID = ToInt(m_wndStorageList.GetItemText(nSel, 0));
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("DELETE FROM m_storagelist WHERE msl_storage_id=%d"), m_nStorageID);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		m_wndStorageList.DeleteItem(nSel);
		return 1;
 	}
	return -1;
} 
int CStorageList::OnStorageListSetActive(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szActive;
	int nSel = m_wndStorageList.GetCurSel();
	if(nSel < 0) return -1;
	szActive = m_wndStorageList.GetItemText(nSel, 4);
	if(szActive == _T("Y"))
		szSQL.Format(_T("UPDATE m_storagelist SET msl_isactive='N' WHERE msl_storage_id=%d"), m_nStorageID);
	else
		szSQL.Format(_T("UPDATE m_storagelist SET msl_isactive='Y' WHERE msl_storage_id=%d"), m_nStorageID);
	pMF->ExecSQL(szSQL);
	OnStorageListLoadData();
	return 0;
} 
long CStorageList::OnStorageListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	UpdateData(TRUE);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND msl_type = '%s'"), m_szTypeKey);
	if (!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND msl_dept_id = '%s'"), m_szDepartmentKey);
	if (!m_szStorageName.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(msl_name) LIKE (chr(37)||lower('%s')||chr(37))"), m_szStorageName);

	if(pMF->GetModuleID() == L"GLS")
	{
		szWhere.AppendFormat(_T(" and msl_org_id='%s' "), pMF->GetModuleID());
	}
	tmpStr = m_bInactive?_T("N"):_T("Y");
	szWhere.AppendFormat(_T(" and msl_isactive = '%s'"), tmpStr);
	szSQL.Format(_T(" SELECT") \
	_T("   msl_storage_id as storage_id,") \
	_T("   msl_name as name,") \
	_T("   sd_name                         AS department,") \
	_T("   msl_isactive as isactive,") \
	_T("   (SELECT") \
	_T("      DISTINCT") \
	_T("      ss_desc") \
	_T("    FROM   sys_sel") \
	_T("    WHERE  ss_id='pms_stocktype'") \
	_T("           AND ss_code=msl_type) AS storage_type") \
	_T(" FROM   m_storagelist") \
	_T("        LEFT JOIN sys_dept ON(msl_dept_id=sd_id)") \
	_T(" WHERE  msl_org_id IN('GL', '%s') %s") \
	_T(" ORDER  BY msl_storage_id,") \
	_T("           msl_type "), pMF->GetModuleID(), szWhere);


	m_wndStorageList.BeginLoad(); 
	int nCount = 0;
	CString szName;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("name"), szName);
		m_wndStorageList.AddItems(
			rs.GetValue(_T("storage_id")), 
			szName, 
			rs.GetValue(_T("storage_type")),	
			rs.GetValue(_T("department")), 
			rs.GetValue(_T("isactive")), NULL);
		rs.MoveNext();
	}
	m_wndStorageList.EndLoad(); 
	return nCount;
}
int CStorageList::OnAddStorageList(){
//	CStorageListPopup *newPopup = new CStorageListPopup(this);
//	newPopup->SetMode(VM_ADD);
//	newPopup->ShowPopup(&m_wndStorageList);
	CStorageDialog dlg(this, VM_ADD);
	if(dlg.DoModal() == IDOK){

	}
	return 0; 
}

int CStorageList::OnEditStorageList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
// 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 //	SetMode(VM_EDIT);

	CStorageDialog dlg(this, VM_EDIT);
	dlg.m_nID = m_nStorageID;
	if(dlg.DoModal() == IDOK){

	}
	/*CStorageListPopup *newPopup = new CStorageListPopup(this);
	newPopup->m_nID = m_nStorageID;
	newPopup->SetMode(VM_EDIT);

	newPopup->ShowPopup(&m_wndStorageList);*/
	return 0; 
}
int CStorageList::OnDeleteStorageList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndStorageList.GetCurSel();
	if(nSel < 0)
		return -1;
	szSQL.Format(_T(" SELECT COUNT(*) FROM m_storageline WHERE msl_storage_id=%d "), m_nStorageID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}
	m_nStorageID = ToInt(m_wndStorageList.GetItemText(nSel, 0));
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 


	szSQL.Format(_T("DELETE FROM m_storagelist WHERE msl_storage_id=%d"), m_nStorageID);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_VIEW); 
		m_wndStorageList.DeleteItem(nSel);
		return 1;
 	}
	return -1;
}
int CStorageList::OnSaveStorageList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_storagelistTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_storagelistTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnStorageListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CStorageList::OnCancelStorageList(){
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
int CStorageList::OnStorageListListLoadData(){
	return 0;
}
void CStorageList::Refresh(LPCTSTR szActiveID){
	OnStorageListLoadData();

	CString tmpStr = szActiveID;
	if(tmpStr.IsEmpty())
		return;

	for (int i =0; i < m_wndStorageList.GetItemCount(); i++){
		CString tmpStr = m_wndStorageList.GetItemText(i, 0);
		if(tmpStr == szActiveID){
			m_wndStorageList.SetItemTextColor(i, RGB(255, 255, 255), FALSE);
				m_wndStorageList.SetItemBkColor(i, RGB(255, 128, 0), TRUE);
				if(i < m_wndStorageList.GetItemCount()-1)
					m_wndStorageList.SetCurSel(i+1);
				else if(i > 0)
					m_wndStorageList.SetCurSel(i-1);
				else
					m_wndStorageList.SetCurSel(i);
			break;
		}
	}

}BEGIN_MESSAGE_MAP(CStorageList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CStorageList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndStorageName.SetFocus();
}

void CStorageList::OnInactiveSelect()
{
	UpdateData();
	OnStorageListLoadData();
}

void CStorageList::OnResizeLayout() {
	AddResize(&m_wndStorageList, 100, 100);

	AddBottom(&m_wndInactive);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);

}