#include "VIMESDepartmentTest1.h"
#include "MainFrm.h"
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest1*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESDepartmentTest1*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest1*)pWnd)->OnDeptListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest1 *)pWnd)->OnIDCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESDepartmentTest1* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest1 *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnTypeAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESDepartmentTest1* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest1 *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnCategoryAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest1 *)pWnd)->OnNameCheckValue();
} 
/*static void _OnZoneChangeFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnZoneChange();
} */
/*static void _OnZoneSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnZoneSetfocus();} */ 
/*static void _OnZoneKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1 *)pWnd)->OnZoneKillfocus();
} */
static int _OnZoneCheckValueFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest1 *)pWnd)->OnZoneCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest1 *pVw = (CVIMESDepartmentTest1 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest1 *pVw = (CVIMESDepartmentTest1 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest1 *pVw = (CVIMESDepartmentTest1 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest1 *pVw = (CVIMESDepartmentTest1 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest1 *pVw = (CVIMESDepartmentTest1 *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest1*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESDepartmentTest1*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest1*)pWnd)->OnRoomDeleteItem();
} 
static long _OnBedLoadDataFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest1*)pWnd)->OnBedLoadData();
} 
static void _OnBedDblClickFnc(CWnd *pWnd){
	((CVIMESDepartmentTest1*)pWnd)->OnBedDblClick();
} 
static void _OnBedSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESDepartmentTest1*)pWnd)->OnBedSelectChange(nOldItem, nNewItem);
} 
static int _OnBedDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest1*)pWnd)->OnBedDeleteItem();
} 
static void _OnAddItemSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest1 *pVw = (CVIMESDepartmentTest1 *)pWnd;
	pVw->OnAddItemSelect();
} 
static int _OnAddVIMESDepartmentTest1Fnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest1*)pWnd)->OnAddVIMESDepartmentTest1();
} 
static int _OnEditVIMESDepartmentTest1Fnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest1*)pWnd)->OnEditVIMESDepartmentTest1();
} 
static int _OnDeleteVIMESDepartmentTest1Fnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest1*)pWnd)->OnDeleteVIMESDepartmentTest1();
} 
static int _OnSaveVIMESDepartmentTest1Fnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest1*)pWnd)->OnSaveVIMESDepartmentTest1();
} 
static int _OnCancelVIMESDepartmentTest1Fnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest1*)pWnd)->OnCancelVIMESDepartmentTest1();
} 
CVIMESDepartmentTest1::CVIMESDepartmentTest1(){

	m_nDlgWidth = 876;
	m_nDlgHeight = 687;
	SetDefaultValues();
}
CVIMESDepartmentTest1::~CVIMESDepartmentTest1(){
}
void CVIMESDepartmentTest1::OnCreateComponents(){
	m_wndDepartmentInformations.Create(this, _T("Department Informations"), 5, 5, 455, 580);
	m_wndRoomList.Create(this, _T("Room List"), 460, 5, 805, 285);
	m_wndBedList.Create(this, _T("Bed List"), 460, 290, 805, 580);
	m_wndDeptList.Create(this,10, 30, 450, 485); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 490, 60, 515);
	m_wndID.Create(this,65, 490, 135, 515); 
	m_wndTypeLabel.Create(this, _T("Type"), 140, 490, 190, 515);
	m_wndType.Create(this,195, 490, 450, 515); 
	m_wndCategoryLabel.Create(this, _T("Category"), 140, 550, 190, 575);
	m_wndCategory.Create(this,195, 550, 450, 575); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 520, 60, 545);
	m_wndName.Create(this,65, 520, 450, 545); 
	m_wndZoneLabel.Create(this, _T("Zone"), 10, 550, 60, 575);
	m_wndZone.Create(this,65, 550, 135, 575); 
	m_wndAdd.Create(this, _T("&Add"), 60, 585, 135, 610);
	m_wndEdit.Create(this, _T("&Edit"), 140, 585, 215, 610);
	m_wndDelete.Create(this, _T("&Delete"), 220, 585, 295, 610);
	m_wndSave.Create(this, _T("&Save"), 300, 585, 375, 610);
	m_wndCancel.Create(this, _T("&Cancel"), 380, 585, 455, 610);
	m_wndRoom.Create(this,465, 30, 800, 280); 
	m_wndBed.Create(this,465, 315, 800, 575); 
	m_wndAddItem.Create(this, _T("Add Item"), 730, 585, 805, 610);

}
void CVIMESDepartmentTest1::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetLimitText(7);
	m_wndID.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndCategory.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndZone.SetLimitText(7);
	m_wndZone.SetCheckValue(true);


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndDeptList.InsertColumn(2, _T("Type"), CFMT_TEXT, 50);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_sys_deptTbl.SetTableName(_T("sys_dept"));
	m_sys_deptTbl.AddField(_T("sysd_createdby"), dfText, 15); 
	m_sys_deptTbl.AddField(_T("sysd_createddate"), dfText, 4); 
	m_sys_deptTbl.AddField(_T("sysd_updatedby"), dfText, 15); 
	m_sys_deptTbl.AddField(_T("sysd_updateddate"), dfText, 4); 
	m_sys_deptTbl.AddField(_T("sysd_id"), dfText, 7); 
	m_sys_deptTbl.AddField(_T("sysd_name"), dfText, 81); 
	m_sys_deptTbl.AddField(_T("sysd_type"), dfText, 3); 
	m_sys_deptTbl.AddField(_T("sysd_doctype"), dfInteger); 
	m_sys_deptTbl.AddField(_T("sysd_zone"), dfText, 7); 

}
void CVIMESDepartmentTest1::OnSetWindowEvents(){
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndZone.SetEvent(WE_CHANGE, _OnZoneChangeFnc);
	//m_wndZone.SetEvent(WE_SETFOCUS, _OnZoneSetfocusFnc);
	//m_wndZone.SetEvent(WE_KILLFOCUS, _OnZoneKillfocusFnc);
	m_wndZone.SetEvent(WE_CHECKVALUE, _OnZoneCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndRoom.SetEvent(WE_DBLCLICK, _OnRoomDblClickFnc);
	m_wndRoom.AddEvent(1, _T("Delete"), _OnRoomDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndBed.SetEvent(WE_SELCHANGE, _OnBedSelectChangeFnc);
	m_wndBed.SetEvent(WE_LOADDATA, _OnBedLoadDataFnc);
	m_wndBed.SetEvent(WE_DBLCLICK, _OnBedDblClickFnc);
	m_wndBed.AddEvent(1, _T("Delete"), _OnBedDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddItem.SetEvent(WE_CLICK, _OnAddItemSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESDepartmentTest1Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESDepartmentTest1Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESDepartmentTest1Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESDepartmentTest1Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESDepartmentTest1Fnc, 0, 'T', VK_CONTROL);

}
void CVIMESDepartmentTest1::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndZone.GetDlgCtrlID(), m_szZone);

}
void CVIMESDepartmentTest1::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("sysd_id"), m_szID);
	rs.GetValue(_T("sysd_name"), m_szName);
	rs.GetValue(_T("sysd_type"), m_szTypeKey);
	rs.GetValue(_T("sysd_doctype"), m_szCategoryKey);
	rs.GetValue(_T("sysd_zone"), m_szZone);

}
void CVIMESDepartmentTest1::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_sys_deptTbl.SetValue(_T("sysd_createdby"), pMF->GetCurrentUser());
	m_sys_deptTbl.SetValue(_T("sysd_createddate"), pMF->GetSysDateTime());
	m_sys_deptTbl.SetValue(_T("sysd_updatedby"), pMF->GetCurrentUser());
	m_sys_deptTbl.SetValue(_T("sysd_updateddate"), pMF->GetSysDateTime());
	m_sys_deptTbl.SetValue(_T("sysd_id"), m_szID);
	m_sys_deptTbl.SetValue(_T("sysd_name"), m_szName);
	m_sys_deptTbl.SetValue(_T("sysd_type"), m_szTypeKey);
	m_sys_deptTbl.SetValue(_T("sysd_doctype"), m_szCategoryKey);
	m_sys_deptTbl.SetValue(_T("sysd_zone"), m_szZone);

}
void CVIMESDepartmentTest1::SetDefaultValues(){

	m_szID.Empty();
	m_szTypeKey.Empty();
	m_szCategoryKey.Empty();
	m_szName.Empty();
	m_szZone.Empty();

}
int CVIMESDepartmentTest1::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CVIMESDepartmentTest1::OnDeptListDblClick(){
	
} 
void CVIMESDepartmentTest1::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESDepartmentTest1::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESDepartmentTest1::OnDeptListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDeptList.BeginLoad(); 
	m_wndDeptList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CVIMESDepartmentTest1::OnIDChange(){
	
} */
/*void CVIMESDepartmentTest1::OnIDSetfocus(){
	
} */
/*void CVIMESDepartmentTest1::OnIDKillfocus(){
	
} */
int CVIMESDepartmentTest1::OnIDCheckValue(){
	return 0;
} 
void CVIMESDepartmentTest1::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest1::OnTypeSelendok(){
	 
}
/*void CVIMESDepartmentTest1::OnTypeSetfocus(){
	
}*/
/*void CVIMESDepartmentTest1::OnTypeKillfocus(){
	
}*/
long CVIMESDepartmentTest1::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESDepartmentTest1::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESDepartmentTest1::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest1::OnCategorySelendok(){
	 
}
/*void CVIMESDepartmentTest1::OnCategorySetfocus(){
	
}*/
/*void CVIMESDepartmentTest1::OnCategoryKillfocus(){
	
}*/
long CVIMESDepartmentTest1::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
	};
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESDepartmentTest1::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESDepartmentTest1::OnNameChange(){
	
} */
/*void CVIMESDepartmentTest1::OnNameSetfocus(){
	
} */
/*void CVIMESDepartmentTest1::OnNameKillfocus(){
	
} */
int CVIMESDepartmentTest1::OnNameCheckValue(){
	return 0;
} 
/*void CVIMESDepartmentTest1::OnZoneChange(){
	
} */
/*void CVIMESDepartmentTest1::OnZoneSetfocus(){
	
} */
/*void CVIMESDepartmentTest1::OnZoneKillfocus(){
	
} */
int CVIMESDepartmentTest1::OnZoneCheckValue(){
	return 0;
} 
void CVIMESDepartmentTest1::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest1::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest1::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest1::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest1::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest1::OnRoomDblClick(){
	
} 
void CVIMESDepartmentTest1::OnRoomSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESDepartmentTest1::OnRoomDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESDepartmentTest1::OnRoomLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
		rs.MoveNext();
	}
	m_wndRoom.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CVIMESDepartmentTest1::OnBedDblClick(){
	
} 
void CVIMESDepartmentTest1::OnBedSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESDepartmentTest1::OnBedDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESDepartmentTest1::OnBedLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndBed.BeginLoad(); 
	m_wndBed.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBed.AddItems(
		rs.MoveNext();
	}
	m_wndBed.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CVIMESDepartmentTest1::OnAddItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESDepartmentTest1::OnAddVIMESDepartmentTest1(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESDepartmentTest1::OnEditVIMESDepartmentTest1(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESDepartmentTest1::OnDeleteVIMESDepartmentTest1(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelVIMESDepartmentTest1(); 
 	}
	return 0;
}
int CVIMESDepartmentTest1::OnSaveVIMESDepartmentTest1(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_sys_deptTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_sys_deptTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESDepartmentTest1ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESDepartmentTest1::OnCancelVIMESDepartmentTest1(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CVIMESDepartmentTest1::OnVIMESDepartmentTest1ListLoadData(){
	return 0;
}
