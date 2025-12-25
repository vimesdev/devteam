#include "SysPermission.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnFindChangeFnc(CWnd *pWnd){
	((CSysPermissionSetup *)pWnd)->OnFindChange();
}
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CSysPermissionSetup *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CSysPermissionSetup *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnFindCheckValue();
} 
static int _OnPermissionListLoadDataFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup*)pWnd)->OnPermissionListLoadData();
} 
static int _OnPermissionListDblClickFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup*)pWnd)->OnPermissionListDblClick();
} 
static int _OnPermissionListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CSysPermissionSetup*)pWnd)->OnPermissionListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermissionListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup*)pWnd)->OnPermissionListDeleteItem();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnIDCheckValue();
} 
static int _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysPermissionSetup* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnModuleSelendokFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup *)pWnd)->OnModuleSelendok();
}
/*static int _OnModuleSetfocusFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup *)pWnd)->OnModuleKillfocus();
}*/
/*static int _OnModuleKillfocusFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup *)pWnd)->OnModuleKillfocus();
}*/
static int _OnModuleLoadDataFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup *)pWnd)->OnModuleLoadData();
}
/*static int _OnModuleAddNewFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup *)pWnd)->OnModuleAddNew();
}*/
/*static int _OnDescriptionChangeFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnDescriptionChange();
} */
/*static int _OnDescriptionSetfocusFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnDescriptionKillfocus();} */ 
/*static int _OnDescriptionKillfocusFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnDescriptionCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CSysPermissionSetup *pVw = (CSysPermissionSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CSysPermissionSetup *pVw = (CSysPermissionSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CSysPermissionSetup *pVw = (CSysPermissionSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CSysPermissionSetup *pVw = (CSysPermissionSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CSysPermissionSetup *pVw = (CSysPermissionSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddVIMESPermissionFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup*)pWnd)->OnAddVIMESPermission();
} 
static int _OnEditVIMESPermissionFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup*)pWnd)->OnEditVIMESPermission();
} 
static int _OnDeleteVIMESPermissionFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup*)pWnd)->OnDeleteVIMESPermission();
} 
static int _OnSaveVIMESPermissionFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup*)pWnd)->OnSaveVIMESPermission();
} 
static int _OnCancelVIMESPermissionFnc(CWnd *pWnd){
	 return ((CSysPermissionSetup*)pWnd)->OnCancelVIMESPermission();
}
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CSysPermissionSetup *)pWnd)->OnGroupLoadData();
}
CSysPermissionSetup::CSysPermissionSetup()
{

	m_nDlgWidth = 810;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CSysPermissionSetup::~CSysPermissionSetup(){
}
void CSysPermissionSetup::OnCreateComponents(){
	/*m_wndFindLabel.Create(this, _T("Find"), 10, 30, 115, 55);
	m_wndFind.Create(this,120, 30, 420, 55); 
	m_wndPermissionList.Create(this,10, 60, 800, 525); 
	m_wndModuleLabel.Create(this, _T("Module"), 10, 530, 80, 555);
	m_wndModule.Create(this,85, 530, 585, 555); 
	m_wndPermissionInformatioin.Create(this, _T("Permission Informatioin"), 5, 5, 805, 590);
	m_wndIDLabel.Create(this, _T("ID"), 590, 530, 640, 555);
	m_wndID.Create(this,645, 530, 800, 555); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 560, 80, 585);
	m_wndDescription.Create(this,85, 560, 800, 585); 
	m_wndAdd.Create(this, _T("&Add"), 410, 595, 485, 620);
	m_wndEdit.Create(this, _T("&Edit"), 490, 595, 565, 620);
	m_wndDelete.Create(this, _T("&Delete"), 570, 595, 645, 620);
	m_wndSave.Create(this, _T("&Save"), 650, 595, 725, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 595, 805, 620);*/
	m_wndFindLabel.Create(this, _T("Find"), 10, 30, 115, 55);
	m_wndFind.Create(this,120, 30, 420, 55); 
	m_wndPermissionList.Create(this,10, 60, 800, 492); 
	m_wndModuleLabel.Create(this, _T("Module"), 10, 497, 90, 522);
	m_wndModule.Create(this,96, 497, 585, 522); 
	m_wndIDLabel.Create(this, _T("ID"), 590, 497, 640, 522);
	m_wndID.Create(this,645, 497, 800, 522); 
	m_wndPermissionInformatioin.Create(this, _T("Permission Informatioin"), 5, 5, 805, 590);
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 527, 90, 552);
	m_wndDescription.Create(this,96, 527, 800, 552); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 557, 90, 582);
	m_wndGroup.Create(this,95, 557, 800, 582); 
	m_wndAdd.Create(this, _T("&Add"), 410, 595, 485, 620);
	m_wndEdit.Create(this, _T("&Edit"), 490, 595, 565, 620);
	m_wndDelete.Create(this, _T("&Delete"), 570, 595, 645, 620);
	m_wndSave.Create(this, _T("&Save"), 650, 595, 725, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 595, 805, 620);
}
void CSysPermissionSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	EnableControls(true);
	//EnableButtons(TRUE, 0, -1);
	m_wndFind.SetLimitText(35);
	m_wndModule.SetCheckValue(true);
	m_wndModule.LimitText(7);
	m_wndID.SetLimitText(21);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(512);
	m_wndDescription.SetCheckValue(true);


	m_wndPermissionList.InsertColumn(0, _T("Module"), CFMT_TEXT, 50);
	m_wndPermissionList.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
	m_wndPermissionList.InsertColumn(2, _T("Description"), CFMT_TEXT, 650);
	m_wndPermissionList.InsertColumn(3, _T("Group"), CFMT_TEXT, 200);
	
	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_sys_permissionTbl.SetTableName(_T("sys_permission"));
	m_sys_permissionTbl.AddField(_T("sp_id"), dfText, 7); 
	m_sys_permissionTbl.AddField(_T("sp_moduleid"), dfText, 7); 
	m_sys_permissionTbl.AddField(_T("sp_name"), dfText, 512);
	m_sys_permissionTbl.AddField(_T("sp_type"), dfText, 2); 
}
void CSysPermissionSetup::OnSetWindowEvents(){
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
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
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESPermissionFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESPermissionFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESPermissionFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESPermissionFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESPermissionFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
}
void CSysPermissionSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);

}
void CSysPermissionSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_permission WHERE sp_moduleid='%s' AND sp_id='%s' "), m_szModuleKey, m_szID);
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0){
		m_szModuleKey = rs.GetValue(_T("sp_moduleid"));
		m_szID = rs.GetValue(_T("sp_id"));
		m_szDescription = rs.GetValue(_T("sp_name"));
		EnableButtons(TRUE, 0, 1, 2, -1);
		SetMode(VM_VIEW);
	}
	else
	{
		SetDefaultValues();
		EnableButtons(TRUE, 0, -1);
		SetMode(VM_NONE);
	}
	UpdateData(false);
}
void CSysPermissionSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_sys_permissionTbl.SetValue(_T("sp_id"), m_szID);
	m_sys_permissionTbl.SetValue(_T("sp_moduleid"), m_szModuleKey);
	m_sys_permissionTbl.SetValue(_T("sp_name"), m_szDescription);
	m_sys_permissionTbl.SetValue(_T("sp_type"), m_szGroupKey);

}
void CSysPermissionSetup::SetDefaultValues(){
	m_szFind.Empty();
	m_szID.Empty();
	m_szDescription.Empty();
}
int CSysPermissionSetup::OnPermissionListDblClick(){
	 return 0;
} 
int CSysPermissionSetup::OnPermissionListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_szModuleKey = m_wndPermissionList.GetItemText(nNewItem, 0);
	m_szID = m_wndPermissionList.GetItemText(nNewItem, 1);
	GetDataToScreen();
	 return 0;
} 
int CSysPermissionSetup::OnPermissionListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysPermissionSetup::OnPermissionListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	if (!m_szFind.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(sp_name) like(chr(37)||lower('%s')||chr(37))"), m_szFind);
	if(!m_szModuleKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND sp_moduleid='%s' "), m_szModuleKey);
	szSQL.Format(_T("SELECT * FROM sys_permission WHERE 1= 1 %s ORDER BY sp_moduleid, sp_id"), szWhere);
_fmsg(_T("%s"), szSQL);
	m_wndPermissionList.BeginLoad(); 
	m_wndPermissionList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPermissionList.AddItems(
			rs.GetValue(_T("sp_moduleid")), 
			rs.GetValue(_T("sp_id")), 
			rs.GetValue(_T("sp_name")),
		    rs.GetValue(_T("sp_type")), NULL);
		rs.MoveNext();
	}
	m_wndPermissionList.EndLoad(); 
	return nCount;
}
void CSysPermissionSetup::OnFindChange(){
	OnPermissionListLoadData();
}
/*void CSysPermissionSetup::OnFindSetfocus(){
	
} */
/*void CSysPermissionSetup::OnFindKillfocus(){
	
} */
int CSysPermissionSetup::OnFindCheckValue(){
	OnPermissionListLoadData();
	return 0;
} 
/*int CSysPermissionSetup::OnIDChange(){
	return 0;
} */
/*int CSysPermissionSetup::OnIDSetfocus(){
	return 0;
} */
/*int CSysPermissionSetup::OnIDKillfocus(){
	return 0;
} */
long CSysPermissionSetup::OnGroupLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_user_group' %s ORDER BY ss_code"), szWhere);
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return 0;
}

int CSysPermissionSetup::OnIDCheckValue(){
	return 0;
} 
int CSysPermissionSetup::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysPermissionSetup::OnModuleSelendok(){
	OnPermissionListLoadData();
	 return 0;
}
/*int CSysPermissionSetup::OnModuleSetfocus(){
	 return 0;
}*/
/*int CSysPermissionSetup::OnModuleKillfocus(){
	 return 0;
}*/
int CSysPermissionSetup::OnModuleLoadData(){

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szModuleKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_module_type' %s ORDER BY ss_code"), szWhere);
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

}
/*int CSysPermissionSetup::OnModuleAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CSysPermissionSetup::OnDescriptionChange(){
	return 0;
} */
/*int CSysPermissionSetup::OnDescriptionSetfocus(){
	return 0;
} */
/*int CSysPermissionSetup::OnDescriptionKillfocus(){
	return 0;
} */
int CSysPermissionSetup::OnDescriptionCheckValue(){
	return 0;
} 
int CSysPermissionSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddVIMESPermission();
	 return 0;
} 
int CSysPermissionSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditVIMESPermission();
	 return 0;
} 
int CSysPermissionSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteVIMESPermission();
	 return 0;
} 
int CSysPermissionSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveVIMESPermission();
	 return 0;
} 
int CSysPermissionSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelVIMESPermission();
	 return 0;
} 
int CSysPermissionSetup::OnAddVIMESPermission(){ 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;  
} 
int CSysPermissionSetup::OnEditVIMESPermission(){

 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT); 
	return 0;  
} 
int CSysPermissionSetup::OnDeleteVIMESPermission(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM sys_permission WHERE sp_moduleid='%s' AND sp_id='%s' "), m_szModuleKey, m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelVIMESPermission(); 
		OnPermissionListLoadData(); 
 	} 
	return 0;
 } 
int CSysPermissionSetup::OnSaveVIMESPermission(){ 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_sys_permissionTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE sp_moduleid='%s' AND sp_id='%s' "), m_szModuleKey, m_szID); 
 		szSQL = m_sys_permissionTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnPermissionListLoadData(); 
 		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CSysPermissionSetup::OnCancelVIMESPermission(){
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	return 0;
} 


int CSysPermissionSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			if(m_szModuleKey.IsEmpty())
				m_wndModule.SetFocus();
			else
				m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndID.EnableWindow(false);
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
		m_wndModule.EnableWindow(true);
		m_wndFind.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 

void CSysPermissionSetup::Refresh(){
	static bool bLoaded = false;
	if(!bLoaded){
		OnPermissionListLoadData();
		bLoaded = true;
	}
}