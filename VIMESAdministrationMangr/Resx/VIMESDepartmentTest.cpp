#include "VIMESDepartmentTest.h"
#include "MainFrm.h"
/*static void _OnFindNameChangeFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnFindNameChange();
} */
/*static void _OnFindNameSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnFindNameSetfocus();} */ 
/*static void _OnFindNameKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnFindNameKillfocus();
} */
static int _OnFindNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest *)pWnd)->OnFindNameCheckValue();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CVIMESDepartmentTest*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESDepartmentTest*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest*)pWnd)->OnDeptListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest *)pWnd)->OnIDCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESDepartmentTest* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnTypeAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESDepartmentTest* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnCategoryAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest *)pWnd)->OnNameCheckValue();
} 
/*static void _OnZoneChangeFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnZoneChange();
} */
/*static void _OnZoneSetfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnZoneSetfocus();} */ 
/*static void _OnZoneKillfocusFnc(CWnd *pWnd){
	((CVIMESDepartmentTest *)pWnd)->OnZoneKillfocus();
} */
static int _OnZoneCheckValueFnc(CWnd *pWnd){
	return ((CVIMESDepartmentTest *)pWnd)->OnZoneCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest *pVw = (CVIMESDepartmentTest *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest *pVw = (CVIMESDepartmentTest *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest *pVw = (CVIMESDepartmentTest *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest *pVw = (CVIMESDepartmentTest *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESDepartmentTest *pVw = (CVIMESDepartmentTest *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddVIMESDepartmentTestFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest*)pWnd)->OnAddVIMESDepartmentTest();
} 
static int _OnEditVIMESDepartmentTestFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest*)pWnd)->OnEditVIMESDepartmentTest();
} 
static int _OnDeleteVIMESDepartmentTestFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest*)pWnd)->OnDeleteVIMESDepartmentTest();
} 
static int _OnSaveVIMESDepartmentTestFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest*)pWnd)->OnSaveVIMESDepartmentTest();
} 
static int _OnCancelVIMESDepartmentTestFnc(CWnd *pWnd){
	 return ((CVIMESDepartmentTest*)pWnd)->OnCancelVIMESDepartmentTest();
} 
CVIMESDepartmentTest::CVIMESDepartmentTest(){

	m_nDlgWidth = 460;
	m_nDlgHeight = 595;
	SetDefaultValues();
}
CVIMESDepartmentTest::~CVIMESDepartmentTest(){
}
void CVIMESDepartmentTest::OnCreateComponents(){
	m_wndDepartmentInformations.Create(this, _T("Department Informations"), 5, 5, 450, 560);
	m_wndFindNameLabel.Create(this, _T("&Find Name"), 10, 30, 90, 55);
	m_wndFindName.Create(this,95, 30, 345, 55); 
	m_wndDeptList.Create(this,10, 60, 445, 465); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 470, 60, 495);
	m_wndID.Create(this,65, 470, 135, 495); 
	m_wndTypeLabel.Create(this, _T("Type"), 140, 470, 190, 495);
	m_wndType.Create(this,195, 470, 445, 495); 
	m_wndCategoryLabel.Create(this, _T("Category"), 140, 530, 190, 555);
	m_wndCategory.Create(this,195, 530, 445, 555); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 500, 60, 525);
	m_wndName.Create(this,65, 500, 445, 525); 
	m_wndZoneLabel.Create(this, _T("Zone"), 10, 530, 60, 555);
	m_wndZone.Create(this,65, 530, 135, 555); 
	m_wndAdd.Create(this, _T("&Add"), 80, 565, 150, 587);
	m_wndEdit.Create(this, _T("&Edit"), 155, 565, 225, 587);
	m_wndDelete.Create(this, _T("&Delete"), 230, 565, 300, 587);
	m_wndSave.Create(this, _T("&Save"), 305, 565, 375, 587);
	m_wndCancel.Create(this, _T("&Cancel"), 380, 565, 450, 587);

}
void CVIMESDepartmentTest::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFindName.SetLimitText(35);
	m_wndFindName.SetCheckValue(true);
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
void CVIMESDepartmentTest::OnSetWindowEvents(){
	//m_wndFindName.SetEvent(WE_CHANGE, _OnFindNameChangeFnc);
	//m_wndFindName.SetEvent(WE_SETFOCUS, _OnFindNameSetfocusFnc);
	//m_wndFindName.SetEvent(WE_KILLFOCUS, _OnFindNameKillfocusFnc);
	m_wndFindName.SetEvent(WE_CHECKVALUE, _OnFindNameCheckValueFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESDepartmentTestFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESDepartmentTestFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESDepartmentTestFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESDepartmentTestFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESDepartmentTestFnc, 0, 'T', VK_CONTROL);

}
void CVIMESDepartmentTest::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFindName.GetDlgCtrlID(), m_szFindName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndZone.GetDlgCtrlID(), m_szZone);

}
void CVIMESDepartmentTest::GetDataToScreen(){
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
void CVIMESDepartmentTest::GetScreenToData(){
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
void CVIMESDepartmentTest::SetDefaultValues(){

	m_szFindName.Empty();
	m_szID.Empty();
	m_szTypeKey.Empty();
	m_szCategoryKey.Empty();
	m_szName.Empty();
	m_szZone.Empty();

}
int CVIMESDepartmentTest::SetMode(int nMode){
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
/*void CVIMESDepartmentTest::OnFindNameChange(){
	
} */
/*void CVIMESDepartmentTest::OnFindNameSetfocus(){
	
} */
/*void CVIMESDepartmentTest::OnFindNameKillfocus(){
	
} */
int CVIMESDepartmentTest::OnFindNameCheckValue(){
	return 0;
} 
void CVIMESDepartmentTest::OnDeptListDblClick(){
	
} 
void CVIMESDepartmentTest::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESDepartmentTest::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESDepartmentTest::OnDeptListLoadData(){
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
/*void CVIMESDepartmentTest::OnIDChange(){
	
} */
/*void CVIMESDepartmentTest::OnIDSetfocus(){
	
} */
/*void CVIMESDepartmentTest::OnIDKillfocus(){
	
} */
int CVIMESDepartmentTest::OnIDCheckValue(){
	return 0;
} 
void CVIMESDepartmentTest::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest::OnTypeSelendok(){
	 
}
/*void CVIMESDepartmentTest::OnTypeSetfocus(){
	
}*/
/*void CVIMESDepartmentTest::OnTypeKillfocus(){
	
}*/
long CVIMESDepartmentTest::OnTypeLoadData(){
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
/*void CVIMESDepartmentTest::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESDepartmentTest::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest::OnCategorySelendok(){
	 
}
/*void CVIMESDepartmentTest::OnCategorySetfocus(){
	
}*/
/*void CVIMESDepartmentTest::OnCategoryKillfocus(){
	
}*/
long CVIMESDepartmentTest::OnCategoryLoadData(){
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
/*void CVIMESDepartmentTest::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESDepartmentTest::OnNameChange(){
	
} */
/*void CVIMESDepartmentTest::OnNameSetfocus(){
	
} */
/*void CVIMESDepartmentTest::OnNameKillfocus(){
	
} */
int CVIMESDepartmentTest::OnNameCheckValue(){
	return 0;
} 
/*void CVIMESDepartmentTest::OnZoneChange(){
	
} */
/*void CVIMESDepartmentTest::OnZoneSetfocus(){
	
} */
/*void CVIMESDepartmentTest::OnZoneKillfocus(){
	
} */
int CVIMESDepartmentTest::OnZoneCheckValue(){
	return 0;
} 
void CVIMESDepartmentTest::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESDepartmentTest::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESDepartmentTest::OnAddVIMESDepartmentTest(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESDepartmentTest::OnEditVIMESDepartmentTest(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESDepartmentTest::OnDeleteVIMESDepartmentTest(){
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
 		OnCancelVIMESDepartmentTest(); 
 	}
	return 0;
}
int CVIMESDepartmentTest::OnSaveVIMESDepartmentTest(){
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
 		//OnVIMESDepartmentTestListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESDepartmentTest::OnCancelVIMESDepartmentTest(){
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
int CVIMESDepartmentTest::OnVIMESDepartmentTestListLoadData(){
	return 0;
}
