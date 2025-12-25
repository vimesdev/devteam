#include "ProductControl.h"
#include "MainFrame_E10.h"
#include "ProductControlInput.h"

static long _OnStorageListLoadDataFnc(CWnd *pWnd){
	return ((CProductControl*)pWnd)->OnStorageListLoadData();
} 
static void _OnStorageListDblClickFnc(CWnd *pWnd){
	((CProductControl*)pWnd)->OnStorageListDblClick();
} 
static void _OnStorageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductControl*)pWnd)->OnStorageListSelectChange(nOldItem, nNewItem);
} 
static int _OnStorageListAddItemFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnStorageListAddItem();
} 
static int _OnStorageListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnStorageListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CProductControl*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CProductControl*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductControl*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnStorageListSetupDeptFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnStorageListSetupDept();
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnDeptListDeleteItem();
} 
static long _OnDoctorListLoadDataFnc(CWnd *pWnd){
	return ((CProductControl*)pWnd)->OnDoctorListLoadData();
} 
static void _OnDoctorListDblClickFnc(CWnd *pWnd){
	((CProductControl*)pWnd)->OnDoctorListDblClick();
} 
static void _OnDoctorListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductControl*)pWnd)->OnDoctorListSelectChange(nOldItem, nNewItem);
}
static int _OnStorageListSetupDoctorFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnStorageListSetupDoctor();
} 
static int _OnDoctorListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnDoctorListDeleteItem();
} 
static int _OnAddProductControlFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnAddProductControl();
} 
static int _OnEditProductControlFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnEditProductControl();
} 
static int _OnDeleteProductControlFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnDeleteProductControl();
} 
static int _OnSaveProductControlFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnSaveProductControl();
} 
static int _OnCancelProductControlFnc(CWnd *pWnd){
	 return ((CProductControl*)pWnd)->OnCancelProductControl();
} 
CProductControl::CProductControl(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CProductControl::~CProductControl(){
}
void CProductControl::OnCreateComponents(){
	m_wndStorageList.Create(this,5, 5, 265, 155); 
	m_wndDeptList.Create(this,270, 5, 530, 155); 
	m_wndDoctorList.Create(this,535, 5, 795, 155); 

}
void CProductControl::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndStorageList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);//id
	m_wndStorageList.InsertColumn(1, _T(""), CFMT_NUMBER, 0);//storage_id
	m_wndStorageList.InsertColumn(2, _T("STT"), CFMT_TEXT, 40);
	m_wndStorageList.InsertColumn(3, _T("Storage Name"), CFMT_TEXT, 210);


	m_wndDeptList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);//id
	m_wndDeptList.InsertColumn(1, _T(""), CFMT_TEXT, 0);//dept_id
	m_wndDeptList.InsertColumn(2, _T("STT"), CFMT_TEXT, 40);
	m_wndDeptList.InsertColumn(3, _T("Dept Name"), CFMT_TEXT, 210);


	m_wndDoctorList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);//id
	m_wndDoctorList.InsertColumn(1, _T(""), CFMT_TEXT, 0);//user_id
	m_wndDoctorList.InsertColumn(2, _T("STT"), CFMT_TEXT, 40);
	m_wndDoctorList.InsertColumn(3, _T("Doctor Name"), CFMT_TEXT, 210);

}
void CProductControl::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorageList.SetEvent(WE_SELCHANGE, _OnStorageListSelectChangeFnc);
	m_wndStorageList.SetEvent(WE_LOADDATA, _OnStorageListLoadDataFnc);
	m_wndStorageList.SetEvent(WE_DBLCLICK, _OnStorageListDblClickFnc);
	m_wndStorageList.AddEvent(1, _T("Add"), _OnStorageListAddItemFnc);
	m_wndStorageList.AddEvent(2, _T("Setup Dept"), _OnStorageListSetupDeptFnc);
	m_wndStorageList.AddEvent(3, _T("Setup Doctor"), _OnStorageListSetupDoctorFnc);
	m_wndStorageList.AddEvent(0, _T("-"));
	m_wndStorageList.AddEvent(4, _T("Delete"), _OnStorageListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDoctorList.SetEvent(WE_SELCHANGE, _OnDoctorListSelectChangeFnc);
	m_wndDoctorList.SetEvent(WE_LOADDATA, _OnDoctorListLoadDataFnc);
	m_wndDoctorList.SetEvent(WE_DBLCLICK, _OnDoctorListDblClickFnc);
	m_wndDoctorList.AddEvent(1, _T("Delete"), _OnDoctorListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddProductControlFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditProductControlFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteProductControlFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveProductControlFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelProductControlFnc, 0, 'T', VK_CONTROL);
	GetDataToScreen();

}
void CProductControl::OnDoDataExchange(CDataExchange* pDX){

}
void CProductControl::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CProductControl::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	//rs.ExecSQL(szSQL);
	OnStorageListLoadData();
	OnDeptListLoadData();
	OnDoctorListLoadData();

}
void CProductControl::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductControl::SetDefaultValues(){


}
int CProductControl::SetMode(int nMode){
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
void CProductControl::OnStorageListDblClick(){
	
} 
void CProductControl::OnStorageListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nId = str2long(m_wndStorageList.GetItemText(nNewItem, 0));
	OnDeptListLoadData();
	OnDoctorListLoadData();
} 
int CProductControl::OnStorageListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_wndDeptList.GetItemCount() + m_wndDoctorList.GetItemCount() > 0)
	{
		return -1;
	}
	CString szSQL;
	szSQL.Format(_T("DELETE FROM m_product_control WHERE mpc_id = %ld"), m_nId);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnStorageListLoadData();
	}
	return nRet;
} 
long CProductControl::OnStorageListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndStorageList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T(" SELECT mpc_id AS id,") \
	_T("        mpc_storage_id AS storage_id,") \
	_T("        Get_storagename(mpc_storage_id) AS storagename") \
	_T(" FROM   m_product_control") \
	_T(" WHERE  mpc_product_id =%ld"), m_nProduct_id);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorageList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("storage_id")), 
			int2str(nIdx++), 
			rs.GetValue(_T("StorageName")), NULL);
		rs.MoveNext();
	}
	m_wndStorageList.EndLoad(); 
	return nCount;
}
void CProductControl::OnDeptListDblClick(){
	
} 
void CProductControl::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CProductControl::OnDeptListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return OnListDeleteItem(&m_wndDeptList);
} 
long CProductControl::OnDeptListLoadData(){
	return OnListLoadData(&m_wndDeptList, _T("D"));
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDeptList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("DeptName")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CProductControl::OnDoctorListDblClick(){
	
} 
void CProductControl::OnDoctorListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CProductControl::OnDoctorListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return OnListDeleteItem(&m_wndDoctorList);
} 
long CProductControl::OnDoctorListLoadData(){
	return OnListLoadData(&m_wndDoctorList, _T("U"));
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDoctorList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctorList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("DoctorName")), NULL);
		rs.MoveNext();
	}
	m_wndDoctorList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CProductControl::OnAddProductControl(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductControl::OnEditProductControl(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductControl::OnDeleteProductControl(){
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
 		OnCancelProductControl();
 	}
	return 0;
}
int CProductControl::OnSaveProductControl(){
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
 		//OnProductControlListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductControl::OnCancelProductControl(){
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
int CProductControl::OnProductControlListLoadData(){
	return 0;
}

void CProductControl::Refresh()
{
	GetDataToScreen();
}

int CProductControl::OnStorageListAddItem()
{
	return OnListAddItem(_T("S"));
}

int CProductControl::OnStorageListSetupDept()
{
	return OnListAddItem(_T("D"));
}

int	CProductControl::OnStorageListSetupDoctor()
{
	return OnListAddItem(_T("U"));
}

int CProductControl::OnListAddItem(CString szType)
{
	long nId = 0;
	CGuiListCtrl* pList = NULL;
	if (szType == _T("D") || szType == _T("U"))
	{
		int nSel = m_wndStorageList.GetCurSel();
		if (nSel < 0)
		{
			return nSel;
		}
		nId = str2long(m_wndStorageList.GetItemText(nSel, 0));
	}
	if (szType == _T("S"))
	{
		pList = &m_wndStorageList;
	}
	if (szType == _T("D"))
	{
		pList = &m_wndDeptList;
	}
	if (szType == _T("U"))
	{
		pList = &m_wndDoctorList;
	}
	CProductControlInput dlg(this, m_nProduct_id, nId, szType, pList);
	dlg.DoModal();
	return 0;
}

long CProductControl::OnListLoadData(CGuiListCtrl* pList, CString szType)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIdx = 1;
	szSQL.Format(_T(" SELECT    mpcl_id AS id,") \
	_T("			mpcl_ref_id as ref_id,") \
	_T("           CASE WHEN mpcl_type = 'U' THEN '['||get_deptname(mpcl_ref_id)||'] '||Get_username(mpcl_ref_id)") \
	_T("           ELSE Get_departmentname(mpcl_ref_id)") \
	_T("           END AS name") \
	_T(" FROM      m_product_control") \
	_T(" left join m_product_control_line ON ( mpc_id = mpcl_product_control_id )") \
	_T(" WHERE     mpc_id = %ld AND mpcl_type = '%s'"), m_nId, szType);

	rs.ExecSQL(szSQL);
	pList->BeginLoad();
	while (!rs.IsEOF())
	{
		pList->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("ref_id")),
			int2str(nIdx++),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	pList->EndLoad();
	return pList->GetItemCount();
}

int CProductControl::OnListDeleteItem(CGuiListCtrl* pList)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	int nSel = pList->GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nId = str2long(pList->GetItemText(nSel, 0));
	szSQL.Format(_T("DELETE FROM m_product_control_line WHERE mpcl_id = %ld"), nId);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		Refresh();
	}
	return nRet;
}