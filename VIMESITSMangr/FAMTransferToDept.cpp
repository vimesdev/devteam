#include "FAMTransferToDept.h"
#include "FAMTransferToDeptDialog.h"
#include "MainFrm.h"
static void _OnFromDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransferToDept* )pWnd)->OnFromDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromDeptSelendokFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnFromDeptSelendok();
}
/*static void _OnFromDeptSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnFromDeptKillfocus();
}*/
/*static void _OnFromDeptKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnFromDeptKillfocus();
}*/
static long _OnFromDeptLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferToDept *)pWnd)->OnFromDeptLoadData();
}
/*static void _OnFromDeptAddNewFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnFromDeptAddNew();
}*/
static void _OnToDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransferToDept* )pWnd)->OnToDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnToDepartmentSelendok();
}
/*static void _OnToDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnToDepartmentKillfocus();
}*/
/*static void _OnToDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnToDepartmentKillfocus();
}*/
static long _OnToDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferToDept *)pWnd)->OnToDepartmentLoadData();
}
/*static void _OnToDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnToDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferToDept *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferToDept *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMTransferToDept *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferToDept *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CFAMTransferToDept *pVw = (CFAMTransferToDept *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnTransferToDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferToDept*)pWnd)->OnTransferToDeptListLoadData();
} 
static void _OnTransferToDeptListDblClickFnc(CWnd *pWnd){
	((CFAMTransferToDept*)pWnd)->OnTransferToDeptListDblClick();
} 
static void _OnTransferToDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMTransferToDept*)pWnd)->OnTransferToDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnTransferToDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMTransferToDept*)pWnd)->OnTransferToDeptListDeleteItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMTransferToDept *pVw = (CFAMTransferToDept *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMTransferToDept *pVw = (CFAMTransferToDept *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMTransferToDept *pVw = (CFAMTransferToDept *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMTransferToDept *pVw = (CFAMTransferToDept *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddFAMTransferToDeptFnc(CWnd *pWnd){
	 return ((CFAMTransferToDept*)pWnd)->OnAddFAMTransferToDept();
} 
static int _OnEditFAMTransferToDeptFnc(CWnd *pWnd){
	 return ((CFAMTransferToDept*)pWnd)->OnEditFAMTransferToDept();
} 
static int _OnDeleteFAMTransferToDeptFnc(CWnd *pWnd){
	 return ((CFAMTransferToDept*)pWnd)->OnDeleteFAMTransferToDept();
} 
static int _OnSaveFAMTransferToDeptFnc(CWnd *pWnd){
	 return ((CFAMTransferToDept*)pWnd)->OnSaveFAMTransferToDept();
} 
static int _OnCancelFAMTransferToDeptFnc(CWnd *pWnd){
	 return ((CFAMTransferToDept*)pWnd)->OnCancelFAMTransferToDept();
} 
CFAMTransferToDept::CFAMTransferToDept(){

	m_nDlgWidth = 963;
	m_nDlgHeight = 696;
	SetDefaultValues();
}
CFAMTransferToDept::~CFAMTransferToDept(){
}
void CFAMTransferToDept::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 805, 90);
	m_wndOrderList.Create(this, _T("Order List"), 5, 95, 805, 590);
	m_wndFromDateLabel.Create(this, _T("From Date"), 9, 30, 99, 55);
	m_wndFromDate.Create(this,105, 30, 260, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 265, 30, 355, 55);
	m_wndToDate.Create(this,360, 30, 515, 55); 
	m_wndFromDeptLabel.Create(this, _T("From Dept"), 10, 60, 100, 85);
	m_wndFromDept.Create(this,105, 60, 260, 85); 
	m_wndToDepartmentLabel.Create(this, _T("To Dept"), 265, 60, 355, 85);
	m_wndToDepartment.Create(this,360, 60, 515, 85); 
	m_wndTransferNoLabel.Create(this, _T("Transfer No"), 520, 60, 610, 85);
	m_wndOrderNo.Create(this,615, 60, 765, 85); 
	m_wndRefresh.Create(this, _T("@"), 770, 60, 800, 85);
	m_wndTransferToDeptList.Create(this,10, 120, 800, 585); 
	m_wndAdd.Create(this, _T("&Add"), 555, 595, 635, 620);
	m_wndEdit.Create(this, _T("&Edit"), 640, 595, 720, 620);
	m_wndDelete.Create(this, _T("&Delete"), 725, 595, 805, 620);
	m_wndView.Create(this, _T("View"), 470, 595, 550, 620);

}
void CFAMTransferToDept::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDept.SetCheckValue(true);
	m_wndFromDept.LimitText(35);
	m_wndToDepartment.LimitText(1024);
	m_wndOrderNo.SetLimitText(1024);

	m_wndFromDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndToDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndTransferToDeptList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndTransferToDeptList.InsertColumn(1, _T("Transfer ID"), CFMT_TEXT, 200);
	m_wndTransferToDeptList.InsertColumn(2, _T("Transfer Date"), CFMT_TEXT, 140);
	m_wndTransferToDeptList.InsertColumn(3, _T("From Dept"), CFMT_TEXT, 140);
	m_wndTransferToDeptList.InsertColumn(4, _T("To Dept"), CFMT_TEXT, 100);
	m_wndTransferToDeptList.InsertColumn(5, _T("Status"), CFMT_TEXT, 100);
	m_wndTransferToDeptList.InsertColumn(6, _T("Created By"), CFMT_TEXT, 70);
	m_wndTransferToDeptList.InsertColumn(7, _T("TransactionID"), CFMT_TEXT, 0);
	m_wndTransferToDeptList.InsertColumn(8, _T("User"), CFMT_TEXT, 0);
	
}
void CFAMTransferToDept::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDept.SetEvent(WE_SELENDOK, _OnFromDeptSelendokFnc);
	//m_wndFromDept.SetEvent(WE_SETFOCUS, _OnFromDeptSetfocusFnc);
	//m_wndFromDept.SetEvent(WE_KILLFOCUS, _OnFromDeptKillfocusFnc);
	m_wndFromDept.SetEvent(WE_SELCHANGE, _OnFromDeptSelectChangeFnc);
	m_wndFromDept.SetEvent(WE_LOADDATA, _OnFromDeptLoadDataFnc);
	//m_wndFromDept.SetEvent(WE_ADDNEW, _OnFromDeptAddNewFnc);
	m_wndToDepartment.SetEvent(WE_SELENDOK, _OnToDepartmentSelendokFnc);
	//m_wndToDepartment.SetEvent(WE_SETFOCUS, _OnToDepartmentSetfocusFnc);
	//m_wndToDepartment.SetEvent(WE_KILLFOCUS, _OnToDepartmentKillfocusFnc);
	m_wndToDepartment.SetEvent(WE_SELCHANGE, _OnToDepartmentSelectChangeFnc);
	m_wndToDepartment.SetEvent(WE_LOADDATA, _OnToDepartmentLoadDataFnc);
	//m_wndToDepartment.SetEvent(WE_ADDNEW, _OnToDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndTransferToDeptList.SetEvent(WE_SELCHANGE, _OnTransferToDeptListSelectChangeFnc);
	m_wndTransferToDeptList.SetEvent(WE_LOADDATA, _OnTransferToDeptListLoadDataFnc);
	m_wndTransferToDeptList.SetEvent(WE_DBLCLICK, _OnTransferToDeptListDblClickFnc);
	m_wndTransferToDeptList.AddEvent(1, _T("Delete"), _OnTransferToDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	
	SetMode(VM_VIEW);
}
void CFAMTransferToDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDept.GetDlgCtrlID(), m_szFromDeptKey);
	DDX_TextEx(pDX, m_wndToDepartment.GetDlgCtrlID(), m_szToDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);


}
void CFAMTransferToDept::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMTransferToDept::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMTransferToDept::SetDefaultValues(){

	m_szFromDeptKey.Empty();
	m_szToDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();

}
int CFAMTransferToDept::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4,-1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4,-1);
 			break;
 		case VM_VIEW: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, 2, 3, -1);
			m_szFromDate = m_szToDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate += _T("23:59");
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
void CFAMTransferToDept::OnFromDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransferToDept::OnFromDeptSelendok(){
	 
}
/*void CFAMTransferToDept::OnFromDeptSetfocus(){
	
}*/
/*void CFAMTransferToDept::OnFromDeptKillfocus(){
	
}*/
long CFAMTransferToDept::OnFromDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromDept.IsSearchKey() && !m_szFromDeptKey.IsEmpty()){
		szWhere.Format(_T(" and ss_id='%s' "), m_szFromDeptKey);
	}
	m_wndFromDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMTransferToDept::OnFromDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMTransferToDept::OnToDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransferToDept::OnToDepartmentSelendok(){
	 
}
/*void CFAMTransferToDept::OnToDepartmentSetfocus(){
	
}*/
/*void CFAMTransferToDept::OnToDepartmentKillfocus(){
	
}*/
long CFAMTransferToDept::OnToDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToDepartment.IsSearchKey() && !m_szToDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szToDepartmentKey);
	}
	if(!m_szFromDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and sd_id <> '%s'"), m_szFromDeptKey);
	}
	m_wndToDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMTransferToDept::OnToDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMTransferToDept::OnFromDateChange(){
	
} */
/*void CFAMTransferToDept::OnFromDateSetfocus(){
	
} */
/*void CFAMTransferToDept::OnFromDateKillfocus(){
	
} */
int CFAMTransferToDept::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMTransferToDept::OnToDateChange(){
	
} */
/*void CFAMTransferToDept::OnToDateSetfocus(){
	
} */
/*void CFAMTransferToDept::OnToDateKillfocus(){
	
} */
int CFAMTransferToDept::OnToDateCheckValue(){
	return 0;
} 
/*void CFAMTransferToDept::OnOrderNoChange(){
	
} */
/*void CFAMTransferToDept::OnOrderNoSetfocus(){
	
} */
/*void CFAMTransferToDept::OnOrderNoKillfocus(){
	
} */
int CFAMTransferToDept::OnOrderNoCheckValue(){
	return 0;
} 
void CFAMTransferToDept::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnTransferToDeptListLoadData();
} 
void CFAMTransferToDept::OnTransferToDeptListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(szStatus == _T("O"))
	{
		OnEditSelect();
	}
	else
		OnViewSelect();
} 
void CFAMTransferToDept::OnTransferToDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	szTransferID = m_wndTransferToDeptList.GetItemText(nNewItem, 1);
	szFromDept = m_wndTransferToDeptList.GetItemText(nNewItem, 3);
	szStatus = m_wndTransferToDeptList.GetItemText(nNewItem, 5);
	m_szTransactionID = m_wndTransferToDeptList.GetItemText(nNewItem, 7);
	m_szUser = m_wndTransferToDeptList.GetItemText(nNewItem, 8);
	szToDept = m_wndTransferToDeptList.GetItemText(nNewItem, 4);
	SetMode(VM_EDIT);
} 
int CFAMTransferToDept::OnTransferToDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(szStatus == _T("P"))
	{
		MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
	}else{
		OnDeleteFAMTransferToDept();
	}
	 return 0;
} 
long CFAMTransferToDept::OnTransferToDeptListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIndex;
	szWhere.Empty();
	int nIndex = 1;
	m_wndTransferToDeptList.BeginLoad(); 
	int nCount = 0;
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_orderdate between TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	if(!m_szFromDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_exp_department_id = '%s'"), m_szFromDeptKey);
	}
	if(!m_szToDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_imp_department_id = '%s'"), m_szToDepartmentKey);
	}
	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_orderno = '%s'"), m_szOrderNo);
	}

	szSQL.Format(_T("SELECT st_orderno, st_orderdate, st_createdby, st_imp_department_id, st_exp_department_id,st_status, st_transaction_id,") \
				_T(" (select sum(stl_amount) from storage_transactionline where stl_transaction_id = st_transaction_id) as amount ") \
				_T(" FROM storage_transaction WHERE st_org_id = 'FAM' and st_doctype = 'EMO' %s ORDER BY st_transaction_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndTransferToDeptList.AddItems(
			szIndex,
			rs.GetValue(_T("st_orderno")),
			CDateTime::Convert(rs.GetValue(_T("st_orderdate")),yyyymmdd|hhmmss, ddmmyyyy|hhmmss),
			rs.GetValue(_T("st_exp_department_id")),
			rs.GetValue(_T("st_imp_department_id")),
			rs.GetValue(_T("st_status")),
			rs.GetValue(_T("st_createdby")),
			rs.GetValue(_T("st_transaction_id")),
			rs.GetValue(_T("st_createdby")),
			NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndTransferToDeptList.EndLoad(); 
	return nCount;

}

void CFAMTransferToDept::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFAMTransferToDeptDialog dlg(pMF);
	dlg.szTransferID = szTransferID;
	dlg.m_szTransactionID = m_szTransactionID;
	dlg.szStatusDlg = szStatus;
	dlg.SetMode(VM_VIEW);
	dlg.DoModal();
} 
void CFAMTransferToDept::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("22.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMTransferToDeptDialog dlg(pMF);
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMTransferToDept::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("22.02")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(szStatus == _T("P"))
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}else{
			CFAMTransferToDeptDialog dlg(pMF);
			dlg.szStatusDlg = szStatus;
			dlg.szTransferID = szTransferID;
			dlg.m_wndTTDL.szFromDept = szFromDept;
			dlg.m_wndTTDL.szToDept = szToDept;
			dlg.m_szTransactionID = m_szTransactionID;
			dlg.SetMode(VM_EDIT);
			dlg.DoModal();
		}
	}else
		{
			ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
			return;
		}
	
} 
void CFAMTransferToDept::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("22.03")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(szStatus == _T("P"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}else{
			OnDeleteFAMTransferToDept();
		}
	}else
		{
			ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
			return;
		}
} 
int CFAMTransferToDept::OnAddFAMTransferToDept(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMTransferToDept::OnEditFAMTransferToDept(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMTransferToDept::OnDeleteFAMTransferToDept(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCount;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("SELECT count(*) FROM storage_transactionline WHERE") \
		_T(" stl_transaction_id = (select st_transaction_id from storage_transaction where st_orderno = '%s')"), szTransferID);
	nCount = pMF->ExecSQL(szSQL);
	if(nCount > 0)
	{
		MessageBox(_T("LINE > 0"), 0, MB_ICONWARNING);
		return -1;
	}
 	szSQL.Format(_T("DELETE FROM storage_transaction WHERE st_orderno = '%s'"), szTransferID);
	_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnTransferToDeptListLoadData();
 	}
	return 0;
}
int CFAMTransferToDept::OnSaveFAMTransferToDept(){
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
 		//OnFAMTransferToDeptListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMTransferToDept::OnCancelFAMTransferToDept(){
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
int CFAMTransferToDept::OnFAMTransferToDeptListLoadData(){
	return 0;
}
