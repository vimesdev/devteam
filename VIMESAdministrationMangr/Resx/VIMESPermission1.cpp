#include "VIMESPermission1.h"
#include "MainFrm.h"
/*static void _OnFindChangeFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnFindChange();
} */
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CVIMESPermission1 *)pWnd)->OnFindCheckValue();
} 
static void _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESPermission1* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnModuleSelendokFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnModuleSelendok();
}
/*static void _OnModuleSetfocusFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnModuleKillfocus();
}*/
/*static void _OnModuleKillfocusFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnModuleKillfocus();
}*/
static long _OnModuleLoadDataFnc(CWnd *pWnd){
	return ((CVIMESPermission1 *)pWnd)->OnModuleLoadData();
}
/*static void _OnModuleAddNewFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnModuleAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESPermission1 *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CVIMESPermission1 *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CVIMESPermission1 *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESPermission1 *pVw = (CVIMESPermission1 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESPermission1 *pVw = (CVIMESPermission1 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESPermission1 *pVw = (CVIMESPermission1 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESPermission1 *pVw = (CVIMESPermission1 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESPermission1 *pVw = (CVIMESPermission1 *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnPermissionListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESPermission1*)pWnd)->OnPermissionListLoadData();
} 
static void _OnPermissionListDblClickFnc(CWnd *pWnd){
	((CVIMESPermission1*)pWnd)->OnPermissionListDblClick();
} 
static void _OnPermissionListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESPermission1*)pWnd)->OnPermissionListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermissionListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESPermission1*)pWnd)->OnPermissionListDeleteItem();
} 
static int _OnAddVIMESPermission1Fnc(CWnd *pWnd){
	 return ((CVIMESPermission1*)pWnd)->OnAddVIMESPermission1();
} 
static int _OnEditVIMESPermission1Fnc(CWnd *pWnd){
	 return ((CVIMESPermission1*)pWnd)->OnEditVIMESPermission1();
} 
static int _OnDeleteVIMESPermission1Fnc(CWnd *pWnd){
	 return ((CVIMESPermission1*)pWnd)->OnDeleteVIMESPermission1();
} 
static int _OnSaveVIMESPermission1Fnc(CWnd *pWnd){
	 return ((CVIMESPermission1*)pWnd)->OnSaveVIMESPermission1();
} 
static int _OnCancelVIMESPermission1Fnc(CWnd *pWnd){
	 return ((CVIMESPermission1*)pWnd)->OnCancelVIMESPermission1();
} 
CVIMESPermission1::CVIMESPermission1(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CVIMESPermission1::~CVIMESPermission1(){
}
void CVIMESPermission1::OnCreateComponents(){
	m_wndPermissionInformatioin.Create(this, _T("Permission Informatioin"), 5, 5, 800, 580);
	m_wndFindLabel.Create(this, _T("Find"), 10, 30, 115, 55);
	m_wndFind.Create(this,120, 30, 420, 55); 
	m_wndModuleLabel.Create(this, _T("Module"), 10, 520, 80, 545);
	m_wndModule.Create(this,85, 520, 585, 545); 
	m_wndIDLabel.Create(this, _T("ID"), 590, 520, 640, 545);
	m_wndID.Create(this,645, 520, 795, 545); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 550, 80, 575);
	m_wndDescription.Create(this,85, 550, 795, 575); 
	m_wndAdd.Create(this, _T("&Add"), 405, 585, 480, 610);
	m_wndEdit.Create(this, _T("&Edit"), 485, 585, 560, 610);
	m_wndDelete.Create(this, _T("&Delete"), 565, 585, 640, 610);
	m_wndSave.Create(this, _T("&Save"), 645, 585, 720, 610);
	m_wndCancel.Create(this, _T("&Cancel"), 725, 585, 800, 610);
	m_wndPermissionList.Create(this,10, 60, 795, 515); 

}
void CVIMESPermission1::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFind.SetLimitText(35);
	m_wndFind.SetCheckValue(true);
	m_wndModule.SetCheckValue(true);
	m_wndModule.LimitText(7);
	m_wndID.SetLimitText(7);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(512);
	m_wndDescription.SetCheckValue(true);


	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndPermissionList.InsertColumn(0, _T("Module"), CFMT_TEXT, 50);
	m_wndPermissionList.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
	m_wndPermissionList.InsertColumn(2, _T("Description"), CFMT_TEXT, 600);
	m_sys_permissionTbl.SetTableName(_T("sys_permission"));
	m_sys_permissionTbl.AddField(_T("sp_id"), dfText, 11); 
	m_sys_permissionTbl.AddField(_T("sp_moduleid"), dfText, 7); 
	m_sys_permissionTbl.AddField(_T("sp_name"), dfText, 512); 

}
void CVIMESPermission1::OnSetWindowEvents(){
	//m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndModule.SetEvent(WE_SELENDOK, _OnModuleSelendokFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	//m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPermissionList.SetEvent(WE_SELCHANGE, _OnPermissionListSelectChangeFnc);
	m_wndPermissionList.SetEvent(WE_LOADDATA, _OnPermissionListLoadDataFnc);
	m_wndPermissionList.SetEvent(WE_DBLCLICK, _OnPermissionListDblClickFnc);
	m_wndPermissionList.AddEvent(1, _T("Delete"), _OnPermissionListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESPermission1Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESPermission1Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESPermission1Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESPermission1Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESPermission1Fnc, 0, 'T', VK_CONTROL);

}
void CVIMESPermission1::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CVIMESPermission1::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESPermission1::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESPermission1::SetDefaultValues(){

	m_szFind.Empty();
	m_szModuleKey.Empty();
	m_szID.Empty();
	m_szDescription.Empty();

}
int CVIMESPermission1::SetMode(int nMode){
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
/*void CVIMESPermission1::OnFindChange(){
	
} */
/*void CVIMESPermission1::OnFindSetfocus(){
	
} */
/*void CVIMESPermission1::OnFindKillfocus(){
	
} */
int CVIMESPermission1::OnFindCheckValue(){
	return 0;
} 
void CVIMESPermission1::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPermission1::OnModuleSelendok(){
	 
}
/*void CVIMESPermission1::OnModuleSetfocus(){
	
}*/
/*void CVIMESPermission1::OnModuleKillfocus(){
	
}*/
long CVIMESPermission1::OnModuleLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()){
	};
	m_wndModule.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndModule.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESPermission1::OnModuleAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESPermission1::OnIDChange(){
	
} */
/*void CVIMESPermission1::OnIDSetfocus(){
	
} */
/*void CVIMESPermission1::OnIDKillfocus(){
	
} */
int CVIMESPermission1::OnIDCheckValue(){
	return 0;
} 
/*void CVIMESPermission1::OnDescriptionChange(){
	
} */
/*void CVIMESPermission1::OnDescriptionSetfocus(){
	
} */
/*void CVIMESPermission1::OnDescriptionKillfocus(){
	
} */
int CVIMESPermission1::OnDescriptionCheckValue(){
	return 0;
} 
void CVIMESPermission1::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPermission1::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPermission1::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPermission1::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPermission1::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPermission1::OnPermissionListDblClick(){
	
} 
void CVIMESPermission1::OnPermissionListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESPermission1::OnPermissionListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESPermission1::OnPermissionListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPermissionList.BeginLoad(); 
	m_wndPermissionList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPermissionList.AddItems(
			rs.GetValue(_T("Module")), 
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndPermissionList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CVIMESPermission1::OnAddVIMESPermission1(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESPermission1::OnEditVIMESPermission1(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESPermission1::OnDeleteVIMESPermission1(){
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
 		OnCancelVIMESPermission1(); 
 	}
	return 0;
}
int CVIMESPermission1::OnSaveVIMESPermission1(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_sys_permissionTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_sys_permissionTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESPermission1ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESPermission1::OnCancelVIMESPermission1(){
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
int CVIMESPermission1::OnVIMESPermission1ListLoadData(){
	return 0;
}
