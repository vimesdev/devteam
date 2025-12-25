#include "FAMWarehouseSetup.h"
#include "MainFrm.h"
static long _OnWarehouseListLoadDataFnc(CWnd *pWnd){
	return ((CFAMWarehouseSetup*)pWnd)->OnWarehouseListLoadData();
} 
static void _OnWarehouseListDblClickFnc(CWnd *pWnd){
	((CFAMWarehouseSetup*)pWnd)->OnWarehouseListDblClick();
} 
static void _OnWarehouseListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMWarehouseSetup*)pWnd)->OnWarehouseListSelectChange(nOldItem, nNewItem);
} 
static int _OnWarehouseListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMWarehouseSetup*)pWnd)->OnWarehouseListDeleteItem();
} 
/*static void _OnWarehouseIDChangeFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnWarehouseIDChange();
} */
/*static void _OnWarehouseIDSetfocusFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnWarehouseIDSetfocus();} */ 
/*static void _OnWarehouseIDKillfocusFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnWarehouseIDKillfocus();
} */
static int _OnWarehouseIDCheckValueFnc(CWnd *pWnd){
	return ((CFAMWarehouseSetup *)pWnd)->OnWarehouseIDCheckValue();
} 
/*static void _OnWarehouseNameChangeFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnWarehouseNameChange();
} */
/*static void _OnWarehouseNameSetfocusFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnWarehouseNameSetfocus();} */ 
/*static void _OnWarehouseNameKillfocusFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnWarehouseNameKillfocus();
} */
static int _OnWarehouseNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMWarehouseSetup *)pWnd)->OnWarehouseNameCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMWarehouseSetup* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMWarehouseSetup *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMWarehouseSetup *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMWarehouseSetup *pVw = (CFAMWarehouseSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMWarehouseSetup *pVw = (CFAMWarehouseSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMWarehouseSetup *pVw = (CFAMWarehouseSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMWarehouseSetup *pVw = (CFAMWarehouseSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMWarehouseSetup *pVw = (CFAMWarehouseSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMWarehouseSetupFnc(CWnd *pWnd){
	 return ((CFAMWarehouseSetup*)pWnd)->OnAddFAMWarehouseSetup();
} 
static int _OnEditFAMWarehouseSetupFnc(CWnd *pWnd){
	 return ((CFAMWarehouseSetup*)pWnd)->OnEditFAMWarehouseSetup();
} 
static int _OnDeleteFAMWarehouseSetupFnc(CWnd *pWnd){
	 return ((CFAMWarehouseSetup*)pWnd)->OnDeleteFAMWarehouseSetup();
} 
static int _OnSaveFAMWarehouseSetupFnc(CWnd *pWnd){
	 return ((CFAMWarehouseSetup*)pWnd)->OnSaveFAMWarehouseSetup();
} 
static int _OnCancelFAMWarehouseSetupFnc(CWnd *pWnd){
	 return ((CFAMWarehouseSetup*)pWnd)->OnCancelFAMWarehouseSetup();
} 
CFAMWarehouseSetup::CFAMWarehouseSetup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMWarehouseSetup::~CFAMWarehouseSetup(){
}
void CFAMWarehouseSetup::OnCreateComponents(){
	m_wndWarehouseSetup.Create(this, _T("Warehouse Setup"), 5, 5, 520, 330);
	m_wndWarehouseList.Create(this,10, 30, 515, 230); 
	m_wndWarehouseIDLabel.Create(this, _T("Warehouse ID"), 10, 235, 90, 260);
	m_wndWarehouseID.Create(this,95, 235, 175, 260); 
	m_wndWarehouseNameLabel.Create(this, _T("Warehouse Name"), 180, 235, 260, 260);
	m_wndWarehouseName.Create(this,265, 235, 515, 260); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 265, 90, 290);
	m_wndDepartment.Create(this,95, 265, 515, 290); 
	m_wndAdd.Create(this, _T("Add"), 95, 295, 175, 320);
	m_wndEdit.Create(this, _T("Edit"), 180, 295, 260, 320);
	m_wndDelete.Create(this, _T("Delete"), 265, 295, 345, 320);
	m_wndSave.Create(this, _T("Save"), 350, 295, 430, 320);
	m_wndClose.Create(this, _T("Close"), 435, 295, 515, 320);

}
void CFAMWarehouseSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWarehouseID.SetLimitText(35);
	m_wndWarehouseID.SetCheckValue(true);
	m_wndWarehouseName.SetLimitText(35);
	m_wndWarehouseName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);

	m_wndWarehouseList.InsertColumn(0, _T("Warehouse ID"), CFMT_TEXT, 100);
	m_wndWarehouseList.InsertColumn(1, _T("Warehouse Name"), CFMT_TEXT, 300);
	m_wndWarehouseList.InsertColumn(2, _T("Department"), CFMT_TEXT, 100);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CFAMWarehouseSetup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWarehouseList.SetEvent(WE_SELCHANGE, _OnWarehouseListSelectChangeFnc);
	m_wndWarehouseList.SetEvent(WE_LOADDATA, _OnWarehouseListLoadDataFnc);
	m_wndWarehouseList.SetEvent(WE_DBLCLICK, _OnWarehouseListDblClickFnc);
	m_wndWarehouseList.AddEvent(1, _T("Delete"), _OnWarehouseListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndWarehouseID.SetEvent(WE_CHANGE, _OnWarehouseIDChangeFnc);
	//m_wndWarehouseID.SetEvent(WE_SETFOCUS, _OnWarehouseIDSetfocusFnc);
	//m_wndWarehouseID.SetEvent(WE_KILLFOCUS, _OnWarehouseIDKillfocusFnc);
	m_wndWarehouseID.SetEvent(WE_CHECKVALUE, _OnWarehouseIDCheckValueFnc);
	//m_wndWarehouseName.SetEvent(WE_CHANGE, _OnWarehouseNameChangeFnc);
	//m_wndWarehouseName.SetEvent(WE_SETFOCUS, _OnWarehouseNameSetfocusFnc);
	//m_wndWarehouseName.SetEvent(WE_KILLFOCUS, _OnWarehouseNameKillfocusFnc);
	m_wndWarehouseName.SetEvent(WE_CHECKVALUE, _OnWarehouseNameCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnWarehouseListLoadData();
	SetMode(VM_NONE);

}
void CFAMWarehouseSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndWarehouseID.GetDlgCtrlID(), m_szWarehouseID);
	DDX_Text(pDX, m_wndWarehouseName.GetDlgCtrlID(), m_szWarehouseName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CFAMWarehouseSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sl_storage_id, sl_name, sl_department_id FROM storage_location WHERE sl_storage_id = '%s'"), m_szSelectedID);
	int nCount = rs.ExecSQL(szSQL);
	if(nCount > 0)
	{
		m_szWarehouseID = rs.GetValue(_T("sl_storage_id"));
		m_szWarehouseName = rs.GetValue(_T("sl_name"));
		m_szDepartmentKey = rs.GetValue(_T("sl_department_id"));
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
}
void CFAMWarehouseSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CFAMWarehouseSetup::SetDefaultValues(){

	m_szWarehouseID.Empty();
	m_szWarehouseName.Empty();
	m_szDepartmentKey.Empty();

}
int CFAMWarehouseSetup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
			m_wndWarehouseID.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 4, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFAMWarehouseSetup::OnWarehouseListDblClick(){
	
} 
void CFAMWarehouseSetup::OnWarehouseListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szSelectedID = m_wndWarehouseList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CFAMWarehouseSetup::OnWarehouseListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMWarehouseSetup::OnWarehouseListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndWarehouseList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id, sl_name, sl_department_id ") \
		_T("FROM storage_location ") \
		_T("WHERE sl_org_id = '%s' AND nvl(sl_type,'xxx') <> 'dpt' "), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouseList.AddItems(
			rs.GetValue(_T("sl_storage_id")),
			rs.GetValue(_T("sl_name")),
			rs.GetValue(_T("sl_department_id")), NULL);
		rs.MoveNext();
	}
	m_wndWarehouseList.EndLoad(); 
	return nCount;
}
/*void CFAMWarehouseSetup::OnWarehouseIDChange(){
	
} */
/*void CFAMWarehouseSetup::OnWarehouseIDSetfocus(){
	
} */
/*void CFAMWarehouseSetup::OnWarehouseIDKillfocus(){
	
} */
int CFAMWarehouseSetup::OnWarehouseIDCheckValue(){
	return 0;
} 
/*void CFAMWarehouseSetup::OnWarehouseNameChange(){
	
} */
/*void CFAMWarehouseSetup::OnWarehouseNameSetfocus(){
	
} */
/*void CFAMWarehouseSetup::OnWarehouseNameKillfocus(){
	
} */
int CFAMWarehouseSetup::OnWarehouseNameCheckValue(){
	return 0;
} 
void CFAMWarehouseSetup::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMWarehouseSetup::OnDepartmentSelendok(){
	 
}
/*void CFAMWarehouseSetup::OnDepartmentSetfocus(){
	
}*/
/*void CFAMWarehouseSetup::OnDepartmentKillfocus(){
	
}*/
long CFAMWarehouseSetup::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMWarehouseSetup::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMWarehouseSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMWarehouseSetup();
} 
void CFAMWarehouseSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMWarehouseSetup();
} 
void CFAMWarehouseSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteFAMWarehouseSetup();
} 
void CFAMWarehouseSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMWarehouseSetup();
} 
void CFAMWarehouseSetup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CFAMWarehouseSetup::OnAddFAMWarehouseSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMWarehouseSetup::OnEditFAMWarehouseSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMWarehouseSetup::OnDeleteFAMWarehouseSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM storage_location WHERE sl_storage_id = '%s'"), m_szWarehouseID );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnWarehouseListLoadData();
 	}
	return 0;
}
int CFAMWarehouseSetup::OnSaveFAMWarehouseSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("INSERT INTO storage_location (sl_storage_id, sl_org_id, sl_createdby, sl_createddate, sl_updateddate, sl_name, sl_department_id) ") \
			_T("VALUES ('%s', '%s', '%s', systimestamp, systimestamp, '%s', '%s')"), m_szWarehouseID, pMF->GetModuleID(),pMF->GetCurrentUser(), m_szWarehouseName, m_szDepartmentKey);
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;					  
		szWhere.Format(_T(" WHERE sl_storage_id = '%s' "), m_szSelectedID);
		szSQL.Format(_T("UPDATE storage_location SET sl_storage_id = '%s', sl_name = '%s', sl_department_id = '%s'"), m_szWarehouseID, m_szWarehouseName, m_szDepartmentKey);
 		szSQL += szWhere;
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		OnWarehouseListLoadData();
 		SetMode(VM_ADD);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMWarehouseSetup::OnCancelFAMWarehouseSetup(){
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
int CFAMWarehouseSetup::OnFAMWarehouseSetupListLoadData(){
	return 0;
}
