#include "AdPermSetup.h"
#include "MainFrame_E10.h"
#include "StringToken.h"
static long _OnStorageListLoadDataFnc(CWnd *pWnd){
	return ((CAdPermSetup*)pWnd)->OnStorageListLoadData();
} 
static void _OnStorageListDblClickFnc(CWnd *pWnd){
	((CAdPermSetup*)pWnd)->OnStorageListDblClick();
} 
static void _OnStorageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPermSetup*)pWnd)->OnStorageListSelectChange(nOldItem, nNewItem);
} 
static int _OnListCheckItemFnc(CWnd *pWnd){
	 return ((CAdPermSetup*)pWnd)->OnListCheckItem();
} 
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CAdPermSetup*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CAdPermSetup*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPermSetup*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CAdPermSetup*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CAdPermSetup*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPermSetup*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdPermSetup*)pWnd)->OnDeptListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CAdPermSetup *pVw = (CAdPermSetup *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdPermSetup *pVw = (CAdPermSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdPermSetupFnc(CWnd *pWnd){
	 return ((CAdPermSetup*)pWnd)->OnAddAdPermSetup();
} 
static int _OnEditAdPermSetupFnc(CWnd *pWnd){
	 return ((CAdPermSetup*)pWnd)->OnEditAdPermSetup();
} 
static int _OnDeleteAdPermSetupFnc(CWnd *pWnd){
	 return ((CAdPermSetup*)pWnd)->OnDeleteAdPermSetup();
} 
static int _OnSaveAdPermSetupFnc(CWnd *pWnd){
	 return ((CAdPermSetup*)pWnd)->OnSaveAdPermSetup();
} 
static int _OnCancelAdPermSetupFnc(CWnd *pWnd){
	 return ((CAdPermSetup*)pWnd)->OnCancelAdPermSetup();
} 
CAdPermSetup::CAdPermSetup(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdPermSetup::~CAdPermSetup(){
}
void CAdPermSetup::OnCreateComponents(){
	m_wndUserInformation.Create(this, _T("User Information"), 6, 5, 416, 591);
	m_wndStockInformation.Create(this, _T("Stock List"), 420, 5, 809, 320);
	m_wndDoctorInformation.Create(this, _T("Department List"), 420, 325, 809, 590);
	m_wndStorageList.Create(this,425, 30, 805, 315); 
	m_wndUserList.Create(this,10, 30, 410, 585); 
	m_wndDeptList.Create(this,425, 350, 805, 585); 
	m_wndApply.Create(this, _T("&Apply"), 730, 595, 810, 620);

}
void CAdPermSetup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndUserList.InsertColumn(1, _T("Name"), CFMT_TEXT, 275);

	m_wndStorageList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndStorageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 275);
	m_wndStorageList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndStorageList.SetCheckBox(true);
	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 275);
	m_wndDeptList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndDeptList.SetCheckBox(true);

}

void CAdPermSetup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorageList.SetEvent(WE_SELCHANGE, _OnStorageListSelectChangeFnc);
	m_wndStorageList.SetEvent(WE_LOADDATA, _OnStorageListLoadDataFnc);
	m_wndStorageList.SetEvent(WE_DBLCLICK, _OnStorageListDblClickFnc);
	m_wndStorageList.AddEvent(1, _T("Check Cabinet"), _OnListCheckItemFnc, 0);
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Check Treatment Dept"), _OnListCheckItemFnc, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdPermSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdPermSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdPermSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdPermSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdPermSetupFnc, 0, 'T', VK_CONTROL);
	OnUserListLoadData();
	SetMode(VM_NONE);

}
void CAdPermSetup::OnDoDataExchange(CDataExchange* pDX){

}
void CAdPermSetup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdPermSetup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdPermSetup::SetDefaultValues(){


}

int CAdPermSetup::SetMode(int nMode){
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

void CAdPermSetup::OnStorageListDblClick(){
	
}
 
void CAdPermSetup::OnStorageListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CAdPermSetup::OnStorageListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CAdPermSetup::OnStorageListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndStorageList.BeginLoad(); 
	int nCount = 0;
	int nStockID, nItem;
	CArray<int, int&> stockList;
	//Truong hop module kinh mat
	if(pMF->GetModuleID() == _T("GLS"))
	{
		szSQL.Format(_T("SELECT mup_stocks as stocks ") \
		_T("FROM m_userperm ") \
		_T("WHERE mup_userid='%s' and mup_moduleid ='GLS' "), m_szUserID);
	}
	else
	{
		szSQL.Format(_T("SELECT mup_stocks as stocks ") \
		_T("FROM m_userperm ") \
		_T("WHERE mup_userid='%s' and mup_moduleid IN('GL','%s') "), m_szUserID, pMF->GetModuleID());
	}

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("stocks"), tmpStr);
		CStringToken token(tmpStr);
		for (int i =0; i < token.GetSize(); i++){
			int nStockID;
			token.GetAt(i, nStockID);
			stockList.Add(nStockID);
		}
	}

	if(pMF->GetModuleID() == _T("GLS"))
	{
			szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name, msl_type as type ") \
		_T("FROM m_storagelist WHERE msl_org_id = 'GLS' ORDER BY msl_type, msl_storage_id "));
	}
	else
	{
		szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name, msl_type as type ") \
		_T("FROM m_storagelist WHERE msl_org_id in('GL','%s') ORDER BY msl_type, msl_storage_id "), pMF->GetModuleID());
	}

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("id"), nStockID);
		nItem = m_wndStorageList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("type")), NULL);
		for (int i=0; i < stockList.GetCount(); i++){
			if(nStockID == stockList[i])
			{
				m_wndStorageList.SetCheck(nItem, true);
				break;
			}
			
		}
		rs.MoveNext();
	}
	m_wndStorageList.EndLoad(); 
	return nCount;
}

void CAdPermSetup::OnUserListDblClick(){
	
}
 
void CAdPermSetup::OnUserListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szUserID = m_wndUserList.GetItemText(nNewItem, 0);
	
	OnStorageListLoadData();
	OnDeptListLoadData();
}
 
int CAdPermSetup::OnUserListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CAdPermSetup::OnUserListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndUserList.BeginLoad(); 
	int nCount = 0;
	
	szWhere.Empty();
	if(pMF->GetModuleID() == _T("GLS"))
	{
		szWhere.AppendFormat(_T(" and su_hms_glsmodule='1'"));
	}
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name ") \
		_T("FROM sys_user ") \
		_T("WHERE su_deptid in(select su_deptid from sys_user where lower(su_userid)=lower('%s') ) %s  ") \
		_T("ORDER BY su_userid "), pMF->GetCurrentUser(), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserList.AddItems(
			rs.GetValue(_T("UserID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndUserList.EndLoad(); 
	return nCount;

}

void CAdPermSetup::OnDeptListDblClick(){
	
}
 
void CAdPermSetup::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CAdPermSetup::OnDeptListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CAdPermSetup::OnDeptListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDept, tmpStr;
	m_wndDeptList.BeginLoad(); 
	int nCount = 0;
	int nItem;
	CStringArray deptList;
	if(pMF->GetModuleID() == _T("GLS"))
	{
		szSQL.Format(_T("SELECT mup_depts as depts FROM m_userperm WHERE mup_moduleid='GLS' and mup_userid='%s' "), m_szUserID);
	}
	else
		szSQL.Format(_T("SELECT mup_depts as depts FROM m_userperm WHERE mup_userid='%s' "), m_szUserID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("depts"), tmpStr);
		CStringToken token(tmpStr);
		for (int i =0; i < token.GetSize(); i++){
			CString tmpStr2;
			token.GetAt(i, tmpStr2);
			deptList.Add(tmpStr2);
		}
	}


	if(pMF->GetModuleID() == _T("GLS"))
	{
		szSQL.Format(_T("SELECT sd_id as id, sd_name as name, sd_type as type FROM sys_dept WHERE sd_org_id='GLS' ORDER BY sd_type, sd_id "));
	}
	else
	{
		szSQL.Format(_T("SELECT sd_id as id, sd_name as name, sd_type as type FROM sys_dept WHERE sd_type in('DT','KB','XN','HA', 'HC') ORDER BY sd_type, sd_id "));
	}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		
		rs.GetValue(_T("id"), szDept);
		nItem = m_wndDeptList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Type")), NULL);
		for (int i =0; i < deptList.GetCount(); i++)
		{
			CString tmpStr2;
			tmpStr2 = deptList[i];
			tmpStr2.Replace(_T("\""), _T(""));
			if(szDept == tmpStr2){
				m_wndDeptList.SetCheck(nItem, true);
				break;
			}
		}

		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;

}

void CAdPermSetup::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStocks, szDepts;
	szSQL.Format(_T("DELETE FROM m_userperm WHERE mup_userid='%s' "), m_szUserID);
	pMF->ExecSQL(szSQL);
	for (int i =0; i < m_wndStorageList.GetItemCount(); i++){
		if(m_wndStorageList.GetCheck(i)){
			if(!szStocks.IsEmpty())
				szStocks += _T(",");
			szStocks.AppendFormat(_T("%s"), m_wndStorageList.GetItemText(i, 0));
		}
	}
	for (int i =0; i < m_wndDeptList.GetItemCount(); i++){
		if(m_wndDeptList.GetCheck(i)){
			if(!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("\"%s\""), m_wndDeptList.GetItemText(i, 0));
		}
	}

	szSQL.Format(_T("INSERT INTO m_userperm values('%s', '%s', '%s', '%s') "), m_szUserID, szStocks, szDepts, pMF->GetModuleID());
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		ShowMessageBox(_T("Apply Successful."), MB_OK);
	}
}
 
void CAdPermSetup::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
}
 
int CAdPermSetup::OnAddAdPermSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdPermSetup::OnEditAdPermSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdPermSetup::OnDeleteAdPermSetup(){
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
 		OnCancelAdPermSetup(); 
 	}
	return 0;
}

int CAdPermSetup::OnSaveAdPermSetup(){
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
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnAdPermSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdPermSetup::OnCancelAdPermSetup(){
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
 
int CAdPermSetup::OnAdPermSetupListLoadData(){
	return 0;
}

int CAdPermSetup::OnListCheckItem(){
	CString tmpStr;
	if (GetFocus()->GetSafeHwnd() == m_wndStorageList.GetSafeHwnd())
	{
		for (int i = 0; i < m_wndStorageList.GetItemCount(); i++)
			if (!m_wndStorageList.GetCheck(i))
			{
				tmpStr = m_wndStorageList.GetItemText(i, 2);
				if (tmpStr == _T("C"))
					m_wndStorageList.SetCheck(i);
			}
	}	
	else if (GetFocus()->GetSafeHwnd() == m_wndDeptList.GetSafeHwnd())
	{
		for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
			if (!m_wndDeptList.GetCheck(i))
			{
				tmpStr = m_wndDeptList.GetItemText(i, 2);
				if (tmpStr == _T("DT"))
					m_wndDeptList.SetCheck(i);
			}
	}
	return 0;
}

void CAdPermSetup::OnResizeLayout() {
	AddResize(&m_wndUserInformation, 100, 100);
	AddResize(&m_wndStockInformation, 100, 100);
	AddResize(&m_wndDoctorInformation, 100, 100);
	AddResize(&m_wndStorageList, 100, 100);
	AddResize(&m_wndUserList, 100, 100);
	AddResize(&m_wndDeptList, 100, 100);

	AddBottom(&m_wndApply);

}