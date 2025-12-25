#include "PMSPermSetupDialog.h"
#include "MainFrm.h"
static long _OnStockListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPermSetupDialog*)pWnd)->OnStockListLoadData();
} 
static void _OnStockListDblClickFnc(CWnd *pWnd){
	((CPMSPermSetupDialog*)pWnd)->OnStockListDblClick();
} 
static void _OnStockListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPermSetupDialog*)pWnd)->OnStockListSelectChange(nOldItem, nNewItem);
} 
static int _OnStockListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPermSetupDialog*)pWnd)->OnStockListDeleteItem();
} 
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPermSetupDialog*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CPMSPermSetupDialog*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPermSetupDialog*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPermSetupDialog*)pWnd)->OnUserListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPermSetupDialog*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CPMSPermSetupDialog*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPermSetupDialog*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPermSetupDialog*)pWnd)->OnDeptListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPMSPermSetupDialog *pVw = (CPMSPermSetupDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSPermSetupDialog *pVw = (CPMSPermSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSPermSetupDialogFnc(CWnd *pWnd){
	 return ((CPMSPermSetupDialog*)pWnd)->OnAddPMSPermSetupDialog();
} 
static int _OnEditPMSPermSetupDialogFnc(CWnd *pWnd){
	 return ((CPMSPermSetupDialog*)pWnd)->OnEditPMSPermSetupDialog();
} 
static int _OnDeletePMSPermSetupDialogFnc(CWnd *pWnd){
	 return ((CPMSPermSetupDialog*)pWnd)->OnDeletePMSPermSetupDialog();
} 
static int _OnSavePMSPermSetupDialogFnc(CWnd *pWnd){
	 return ((CPMSPermSetupDialog*)pWnd)->OnSavePMSPermSetupDialog();
} 
static int _OnCancelPMSPermSetupDialogFnc(CWnd *pWnd){
	 return ((CPMSPermSetupDialog*)pWnd)->OnCancelPMSPermSetupDialog();
} 
CPMSPermSetupDialog::CPMSPermSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CPMSPermSetupDialog::~CPMSPermSetupDialog(){
}
void CPMSPermSetupDialog::OnCreateComponents(){
	m_wndUserInformation.Create(this, _T("User Information"), 320, 5, 635, 450);
	m_wndStockInformation.Create(this, _T("Stock List"), 5, 230, 314, 450);
	m_wndDepartmentInformation.Create(this, _T("Department List"), 5, 5, 314, 225);
	m_wndStockList.Create(this,10, 255, 310, 445); 
	m_wndUserList.Create(this,325, 30, 630, 445); 
	m_wndDeptList.Create(this,10, 30, 310, 220); 
	m_wndApply.Create(this, _T("&Apply"), 480, 455, 555, 480);
	m_wndClose.Create(this, _T("&Close"), 560, 455, 635, 480);
}
void CPMSPermSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 80);
	m_wndUserList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStockList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStockList.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);
	m_wndStockList.SetCheckBox(true);
	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);
	//m_wndDeptList.SetCheckBox(true);
	m_wndUserList.SetCheckBox(true);

}
void CPMSPermSetupDialog::OnSetWindowEvents(){
	m_wndStockList.SetEvent(WE_SELCHANGE, _OnStockListSelectChangeFnc);
	m_wndStockList.SetEvent(WE_LOADDATA, _OnStockListLoadDataFnc);
	m_wndStockList.SetEvent(WE_DBLCLICK, _OnStockListDblClickFnc);
	//m_wndStockList.AddEvent(1, _T("Delete"), _OnStockListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
	//m_wndUserList.AddEvent(1, _T("Delete"), _OnUserListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	//m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnDeptListLoadData();
	OnStockListLoadData();
	//OnUserListLoadData();

}
void CPMSPermSetupDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CPMSPermSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSPermSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMSPermSetupDialog::SetDefaultValues(){


}
int CPMSPermSetupDialog::SetMode(int nMode){
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
void CPMSPermSetupDialog::OnStockListDblClick(){
	
} 
void CPMSPermSetupDialog::OnStockListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMSPermSetupDialog::OnStockListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
#include "StringToken.h"
long CPMSPermSetupDialog::OnStockListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndStockList.BeginLoad(); 
	int nCount = 0;
	int nStockID, nItem;
/*
	CArray<int, int&> stockList;

	szSQL.Format(_T("SELECT mup_stocks as stocks FROM m_userperm WHERE mup_userid='%s' "), m_szUserID);
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
*/
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE msl_type<>'C' or (msl_type='C'  and (msl_dept_id='%s' or msl_dept_id in(select sd_id from sys_dept where sd_type='KB')) ) ORDER BY msl_type,msl_storage_id "), m_szDeptID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("id"), nStockID);
		nItem = m_wndStockList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
/*
		for (int i=0; i < stockList.GetCount(); i++){
			if(nStockID == stockList[i])
			{
				m_wndStockList.SetCheck(nItem, true);
				break;
			}
			
		}
*/
		rs.MoveNext();
	}
	m_wndStockList.EndLoad(); 
	return nCount;
}
void CPMSPermSetupDialog::OnUserListDblClick(){
	
} 
void CPMSPermSetupDialog::OnUserListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szUserID = m_wndUserList.GetItemText(nNewItem, 0);

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nCount = 0;
	CArray<int, int&> stockList;

	szSQL.Format(_T("SELECT mup_stocks as stocks FROM m_userperm WHERE mup_userid='%s' "), m_szUserID);
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

	for (int i =0; i < m_wndStockList.GetItemCount(); i++){
		int nStock = str2int(m_wndStockList.GetItemText(i, 0));
		bool found = false;
		for (int j =0; j < stockList.GetCount();j++){
			if(nStock == stockList[j]){
				m_wndStockList.SetCheck(i, true);
				found = true;
				break;
			}
		}
		if(!found){
			m_wndStockList.SetCheck(i, false);
		}
	}
	//OnStockListLoadData();

//	OnDeptListLoadData();
} 
int CPMSPermSetupDialog::OnUserListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSPermSetupDialog::OnUserListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndUserList.BeginLoad(); 
	int nCount = 0;
	if(!m_szDeptID.IsEmpty())
		szWhere.AppendFormat(_T(" and su_deptid='%s'"), m_szDeptID);
	if (!m_szUserKey.IsEmpty())
		szWhere.AppendFormat(_T(" and su_userid = '%s'"), m_szUserKey);
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name FROM sys_user WHERE 0=0 %s ORDER BY su_userid "), szWhere);
_debug(_T("%s"), szSQL);

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
void CPMSPermSetupDialog::OnDeptListDblClick(){
	
} 
void CPMSPermSetupDialog::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szDeptID = m_wndDeptList.GetItemText(nNewItem, 0);
	OnUserListLoadData();
	OnStockListLoadData();
} 
int CPMSPermSetupDialog::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSPermSetupDialog::OnDeptListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDept, tmpStr, szWhere;
	m_wndDeptList.BeginLoad(); 
	int nCount = 0;
	int nItem;
	if (!m_szDeptKey.IsEmpty())
		szWhere.Format(_T("AND sd_id = '%s'"), m_szDeptKey);
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type in('DT','KB','XN','HA', 'HC') %s ORDER BY sd_type, sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 	
		rs.GetValue(_T("id"), szDept);
		nItem = m_wndDeptList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;

}
void CPMSPermSetupDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStocks, szDepts;
	szDepts.Format(_T("\"%s\""), m_szDeptID);
	szSQL.Format(_T("DELETE FROM m_userperm WHERE mup_userid='%s' "), m_szUserID);
	pMF->ExecSQL(szSQL);
	for (int i =0; i < m_wndStockList.GetItemCount(); i++){
		if(m_wndStockList.GetCheck(i)){
			if(!szStocks.IsEmpty())
				szStocks += _T(",");
			szStocks.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));
		}
	}
	int nCount = 0;
	CString szUser;
	for (int i =0; i < m_wndUserList.GetItemCount(); i++)
	{
		if(m_wndUserList.GetCheck(i))
		{
			szUser = m_wndUserList.GetItemText(i, 0);
			szSQL.Format(_T("DELETE FROM m_userperm WHERE mup_userid='%s' "), szUser);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("INSERT INTO m_userperm values('%s', '%s', '%s', '%s') "), szUser, szStocks, szDepts, pMF->GetModuleID());
			int ret = pMF->ExecSQL(szSQL);
			if(ret)
				nCount++;
		}
	}
	if(nCount > 0)
	{
		ShowMessageBox(_T("Apply Successful."), MB_OK);
	}
} 
void CPMSPermSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CPMSPermSetupDialog::OnAddPMSPermSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSPermSetupDialog::OnEditPMSPermSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSPermSetupDialog::OnDeletePMSPermSetupDialog(){
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
 		OnCancelPMSPermSetupDialog(); 
 	}
	return 0;
}
int CPMSPermSetupDialog::OnSavePMSPermSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 		//OnPMSPermSetupDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSPermSetupDialog::OnCancelPMSPermSetupDialog(){
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
int CPMSPermSetupDialog::OnPMSPermSetupDialogListLoadData(){
	return 0;
}
