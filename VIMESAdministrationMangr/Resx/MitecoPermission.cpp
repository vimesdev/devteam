#include "VIMESPermission.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnPermissionListLoadDataFnc(CWnd *pWnd){
	 return ((CVIMESPermission*)pWnd)->OnPermissionListLoadData();
} 
static int _OnPermissionListDblClickFnc(CWnd *pWnd){
	 return ((CVIMESPermission*)pWnd)->OnPermissionListDblClick();
} 
static int _OnPermissionListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CVIMESPermission*)pWnd)->OnPermissionListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermissionListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESPermission*)pWnd)->OnPermissionListDeleteItem();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CVIMESPermission *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CVIMESPermission *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CVIMESPermission *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESPermission *)pWnd)->OnIDCheckValue();
} 
static int _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CVIMESPermission* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnModuleSelendokFnc(CWnd *pWnd){
	 return ((CVIMESPermission *)pWnd)->OnModuleSelendok();
}
/*static int _OnModuleSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESPermission *)pWnd)->OnModuleKillfocus();
}*/
/*static int _OnModuleKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESPermission *)pWnd)->OnModuleKillfocus();
}*/
static int _OnModuleLoadDataFnc(CWnd *pWnd){
	 return ((CVIMESPermission *)pWnd)->OnModuleLoadData();
}
/*static int _OnModuleAddNewFnc(CWnd *pWnd){
	 return ((CVIMESPermission *)pWnd)->OnModuleAddNew();
}*/
/*static int _OnDescriptionChangeFnc(CWnd *pWnd){
	return ((CVIMESPermission *)pWnd)->OnDescriptionChange();
} */
/*static int _OnDescriptionSetfocusFnc(CWnd *pWnd){
	return ((CVIMESPermission *)pWnd)->OnDescriptionKillfocus();} */ 
/*static int _OnDescriptionKillfocusFnc(CWnd *pWnd){
	return ((CVIMESPermission *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CVIMESPermission *)pWnd)->OnDescriptionCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CVIMESPermission *pVw = (CVIMESPermission *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CVIMESPermission *pVw = (CVIMESPermission *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESPermission *pVw = (CVIMESPermission *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESPermission *pVw = (CVIMESPermission *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESPermission *pVw = (CVIMESPermission *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddVIMESPermissionFnc(CWnd *pWnd){
	 return ((CVIMESPermission*)pWnd)->OnAddVIMESPermission();
} 
static int _OnEditVIMESPermissionFnc(CWnd *pWnd){
	 return ((CVIMESPermission*)pWnd)->OnEditVIMESPermission();
} 
static int _OnDeleteVIMESPermissionFnc(CWnd *pWnd){
	 return ((CVIMESPermission*)pWnd)->OnDeleteVIMESPermission();
} 
static int _OnSaveVIMESPermissionFnc(CWnd *pWnd){
	 return ((CVIMESPermission*)pWnd)->OnSaveVIMESPermission();
} 
static int _OnCancelVIMESPermissionFnc(CWnd *pWnd){
	 return ((CVIMESPermission*)pWnd)->OnCancelVIMESPermission();
} 
CVIMESPermission::CVIMESPermission(){

	m_nDlgWidth = 515;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CVIMESPermission::~CVIMESPermission(){
}
void CVIMESPermission::OnCreateComponents(){
	m_wndPermissionInformatioin.Create(this, _T("Permission Informatioin"), 5, 5, 509, 370);
	m_wndPermissionList.Create(this,10, 29, 504, 312); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 317, 79, 339);
	m_wndID.Create(this,84, 317, 164, 339); 
	m_wndModuleLabel.Create(this, _T("Module"), 169, 317, 219, 339);
	m_wndModule.Create(this,224, 317, 504, 339); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 344, 79, 366);
	m_wndDescription.Create(this,84, 344, 504, 366); 
	m_wndAdd.Create(this, _T("&Add"), 170, 375, 234, 397);
	m_wndEdit.Create(this, _T("&Edit"), 239, 375, 303, 397);
	m_wndDelete.Create(this, _T("&Delete"), 308, 375, 372, 397);
	m_wndSave.Create(this, _T("&Save"), 377, 375, 441, 397);
	m_wndCancel.Create(this, _T("&Cancel"), 446, 375, 510, 397);

}
void CVIMESPermission::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetLimitText(7);
	m_wndID.SetDataRequirement(TRUE);
	m_wndModule.SetDataRequirement(TRUE);
	m_wndModule.LimitText(7);
	m_wndDescription.SetLimitText(512);
	m_wndDescription.SetDataRequirement(TRUE);


	m_wndPermissionList.InsertColumn(0, _T("Module"), CFMT_TEXT, 70);
	m_wndPermissionList.InsertColumn(1, _T("ID"), CFMT_TEXT, 100);
	m_wndPermissionList.InsertColumn(2, _T("Description"), CFMT_TEXT, 300);


	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_vimes_permissionTbl.SetTableName(_T("vimes_permission"));
	m_vimes_permissionTbl.AddField(_T("vmp_id"), dfText, 7); 
	m_vimes_permissionTbl.AddField(_T("vmp_moduleid"), dfText, 7); 
	m_vimes_permissionTbl.AddField(_T("vmp_name"), dfText, 512); 
	m_vimes_permissionTbl.AddField(_T("vmp_add"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_edit"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_delete"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_print"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_send"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_accept"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_cancel"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_rollback"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_register"), dfText, 1); 
	m_vimes_permissionTbl.AddField(_T("vmp_unregister"), dfText, 1); 

}
void CVIMESPermission::OnSetWindowEvents(){
	m_wndPermissionList.SetEvent(WE_SELCHANGE, _OnPermissionListSelectChangeFnc);
	m_wndPermissionList.SetEvent(WE_LOADDATA, _OnPermissionListLoadDataFnc);
	m_wndPermissionList.SetEvent(WE_DBLCLICK, _OnPermissionListDblClickFnc);
	m_wndPermissionList.AddEvent(1, _T("Delete"), _OnPermissionListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndModule.SetEvent(WE_SELENDOK, _OnModuleSelendokFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	//m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESPermissionFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESPermissionFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESPermissionFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESPermissionFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESPermissionFnc, 0, 'T', VK_CONTROL);

}
void CVIMESPermission::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CVIMESPermission::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESPermission::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_vimes_permissionTbl.SetValue(_T("vmp_id"), m_szID);
	m_vimes_permissionTbl.SetValue(_T("vmp_moduleid"), m_szModuleKey);
	m_vimes_permissionTbl.SetValue(_T("vmp_name"), m_szDescription);

}
void CVIMESPermission::SetDefaultValues(){

	m_szID.Empty();
	m_szModuleKey.Empty();
	m_szDescription.Empty();

}
int CVIMESPermission::OnPermissionListDblClick(){
	 return 0;
} 
int CVIMESPermission::OnPermissionListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESPermission::OnPermissionListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESPermission::OnPermissionListLoadData(){
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
/*int CVIMESPermission::OnIDChange(){
	return 0;
} */
/*int CVIMESPermission::OnIDSetfocus(){
	return 0;
} */
/*int CVIMESPermission::OnIDKillfocus(){
	return 0;
} */
int CVIMESPermission::OnIDCheckValue(){
	return 0;
} 
int CVIMESPermission::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESPermission::OnModuleSelendok(){
	 return 0;
}
/*int CVIMESPermission::OnModuleSetfocus(){
	 return 0;
}*/
/*int CVIMESPermission::OnModuleKillfocus(){
	 return 0;
}*/
int CVIMESPermission::OnModuleLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey()){
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
/*int CVIMESPermission::OnModuleAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CVIMESPermission::OnDescriptionChange(){
	return 0;
} */
/*int CVIMESPermission::OnDescriptionSetfocus(){
	return 0;
} */
/*int CVIMESPermission::OnDescriptionKillfocus(){
	return 0;
} */
int CVIMESPermission::OnDescriptionCheckValue(){
	return 0;
} 
int CVIMESPermission::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESPermission::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESPermission::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESPermission::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESPermission::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESPermission::OnAddVIMESPermission(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add VIMESPermission"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CVIMESPermission::OnEditVIMESPermission(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit VIMESPermission"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CVIMESPermission::OnDeleteVIMESPermission(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelVIMESPermission(); 
 		OnVIMESPermissionLoadData(); 
 	} */ return 0;
 } 
int CVIMESPermission::OnSaveVIMESPermission(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_vimes_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("VIMESPermission"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?Ä?NListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CVIMESPermission::OnCancelVIMESPermission(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
