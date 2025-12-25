#include "FAMAllocateToDept.h"
#include "FAMAllocateToDeptDialog.h"
#include "MainFrm.h"
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAllocateToDept* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CFAMAllocateToDept *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnToDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAllocateToDept* )pWnd)->OnToDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnToDepartmentSelendok();
}
/*static void _OnToDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnToDepartmentKillfocus();
}*/
/*static void _OnToDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnToDepartmentKillfocus();
}*/
static long _OnToDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMAllocateToDept *)pWnd)->OnToDepartmentLoadData();
}
/*static void _OnToDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnToDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDept *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDept *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDept *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDept *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CFAMAllocateToDept *pVw = (CFAMAllocateToDept *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnAllocateToDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAllocateToDept*)pWnd)->OnAllocateToDeptListLoadData();
} 
static void _OnAllocateToDeptListDblClickFnc(CWnd *pWnd){
	((CFAMAllocateToDept*)pWnd)->OnAllocateToDeptListDblClick();
} 
static void _OnAllocateToDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAllocateToDept*)pWnd)->OnAllocateToDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnAllocateToDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDept*)pWnd)->OnAllocateToDeptListDeleteItem();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFAMAllocateToDept*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CFAMAllocateToDept*)pWnd)->OnOpeningSelect();
}
static void _OnIsApprovedSelectFnc(CWnd *pWnd){
	  ((CFAMAllocateToDept*)pWnd)->OnIsApprovedSelect();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMAllocateToDept *pVw = (CFAMAllocateToDept *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMAllocateToDept *pVw = (CFAMAllocateToDept *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMAllocateToDept *pVw = (CFAMAllocateToDept *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMAllocateToDept *pVw = (CFAMAllocateToDept *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddFAMAllocateToDeptFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDept*)pWnd)->OnAddFAMAllocateToDept();
} 
static int _OnEditFAMAllocateToDeptFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDept*)pWnd)->OnEditFAMAllocateToDept();
} 
static int _OnDeleteFAMAllocateToDeptFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDept*)pWnd)->OnDeleteFAMAllocateToDept();
} 
static int _OnSaveFAMAllocateToDeptFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDept*)pWnd)->OnSaveFAMAllocateToDept();
} 
static int _OnCancelFAMAllocateToDeptFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDept*)pWnd)->OnCancelFAMAllocateToDept();
} 
CFAMAllocateToDept::CFAMAllocateToDept(){

	m_nDlgWidth = 963;
	m_nDlgHeight = 696;
	SetDefaultValues();
}
CFAMAllocateToDept::~CFAMAllocateToDept(){
}
void CFAMAllocateToDept::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 805, 90);
	m_wndOrderList.Create(this, _T("Order List"), 4, 95, 804, 590);
	m_wndFromWarehouseLabel.Create(this, _T("From Warehouse"), 10, 60, 100, 85);
	m_wndWarehouse.Create(this,105, 60, 255, 85); 
	m_wndToDepartmentLabel.Create(this, _T("Delivery To"), 260, 60, 350, 85);
	m_wndToDepartment.Create(this,355, 60, 505, 85); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 255, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 259, 30, 349, 55);
	m_wndToDate.Create(this,355, 30, 505, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 510, 60, 600, 85);
	m_wndOrderNo.Create(this,605, 60, 765, 85); 
	m_wndRefresh.Create(this, _T("@"), 770, 60, 800, 85);
	m_wndAllocateToDeptList.Create(this,10, 120, 800, 585); 
	m_wndAdd.Create(this, _T("&Add"), 555, 595, 635, 620);
	m_wndEdit.Create(this, _T("&Edit"), 640, 595, 720, 620);
	m_wndDelete.Create(this, _T("&Delete"), 725, 595, 805, 620);
	m_wndView.Create(this, _T("View"), 470, 595, 550, 620);
	
	m_wndAll.Create(this, L"", 0, 0, 0, 0);
	m_wndAll.ShowWindow(SW_HIDE);
	m_wndAll.EnableWindow(FALSE);
	m_wndOpening.Create(this, L"", 0, 0, 0, 0);
	m_wndOpening.ShowWindow(SW_HIDE);
	m_wndOpening.EnableWindow(FALSE);
	m_wndIsApproved.Create(this, L"", 0, 0, 0, 0);
	m_wndIsApproved.ShowWindow(SW_HIDE);
	m_wndIsApproved.EnableWindow(FALSE);

	m_wndAll.Create(this, L"", 0, 0, 0, 0);
	m_wndAll.ShowWindow(SW_HIDE);
	m_wndAll.EnableWindow(FALSE);
	m_wndOpening.Create(this, L"", 0, 0, 0, 0);
	m_wndOpening.ShowWindow(SW_HIDE);
	m_wndOpening.EnableWindow(FALSE);
	m_wndIsApproved.Create(this, L"", 0, 0, 0, 0);
	m_wndIsApproved.ShowWindow(SW_HIDE);
	m_wndIsApproved.EnableWindow(FALSE);

}
void CFAMAllocateToDept::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.LimitText(35);
	m_wndToDepartment.SetCheckValue(true);

	m_wndToDepartment.LimitText(1024);
	m_wndOrderNo.SetLimitText(1024);

	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndToDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndAllocateToDeptList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndAllocateToDeptList.InsertColumn(1, _T("Order ID"), CFMT_TEXT, 120);
	m_wndAllocateToDeptList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 140);
	m_wndAllocateToDeptList.InsertColumn(3, _T("Warehouse"), CFMT_TEXT, 140);
	m_wndAllocateToDeptList.InsertColumn(4, _T("Department"), CFMT_TEXT, 100);
	m_wndAllocateToDeptList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 120);
	m_wndAllocateToDeptList.InsertColumn(6, _T("Status"), CFMT_TEXT, 80);
	m_wndAllocateToDeptList.InsertColumn(7, _T("Created By"), CFMT_TEXT, 70);
	m_wndAllocateToDeptList.InsertColumn(8, _T("Transaction ID"), CFMT_TEXT, 0);
	m_wndAllocateToDeptList.InsertColumn(9, _T("User"), CFMT_TEXT, 0);
	m_wndAllocateToDeptList.InsertColumn(10, _T("Exp Storgae"), CFMT_TEXT, 0);

}
void CFAMAllocateToDept::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
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
	m_wndAllocateToDeptList.SetEvent(WE_SELCHANGE, _OnAllocateToDeptListSelectChangeFnc);
	m_wndAllocateToDeptList.SetEvent(WE_LOADDATA, _OnAllocateToDeptListLoadDataFnc);
	m_wndAllocateToDeptList.SetEvent(WE_DBLCLICK, _OnAllocateToDeptListDblClickFnc);
	m_wndAllocateToDeptList.AddEvent(1, _T("Delete"), _OnAllocateToDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndIsApproved.SetEvent(WE_CLICK, _OnIsApprovedSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	
	SetMode(VM_VIEW);
}
void CFAMAllocateToDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndToDepartment.GetDlgCtrlID(), m_szToDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndOpening.GetDlgCtrlID(), m_nOpening);
	DDX_Radio(pDX, m_wndIsApproved.GetDlgCtrlID(), m_nIsApproved);

}
void CFAMAllocateToDept::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAllocateToDept::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAllocateToDept::SetDefaultValues(){

	m_szWarehouseKey.Empty();
	m_szToDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();
	m_nAll=0;
	m_nOpening=1;
	m_nIsApproved=1;

}
int CFAMAllocateToDept::SetMode(int nMode){
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
 			EnableButtons(FALSE, 4, 2, 3, -1);
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
void CFAMAllocateToDept::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAllocateToDept::OnWarehouseSelendok(){
	UpdateData(TRUE);
}
/*void CFAMAllocateToDept::OnWarehouseSetfocus(){
	
}*/
/*void CFAMAllocateToDept::OnWarehouseKillfocus(){
	
}*/
long CFAMAllocateToDept::OnWarehouseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), m_szWarehouseKey);
	}
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name FROM storage_location WHERE sl_org_id = '%s' and sl_type is null %s ORDER BY sl_storage_id "), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAllocateToDept::OnWarehouseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAllocateToDept::OnToDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAllocateToDept::OnToDepartmentSelendok(){
	 
}
/*void CFAMAllocateToDept::OnToDepartmentSetfocus(){
	
}*/
/*void CFAMAllocateToDept::OnToDepartmentKillfocus(){
	
}*/
long CFAMAllocateToDept::OnToDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToDepartment.IsSearchKey() && !m_szToDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szToDepartmentKey);
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
/*void CFAMAllocateToDept::OnToDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAllocateToDept::OnFromDateChange(){
	
} */
/*void CFAMAllocateToDept::OnFromDateSetfocus(){
	
} */
/*void CFAMAllocateToDept::OnFromDateKillfocus(){
	
} */
int CFAMAllocateToDept::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMAllocateToDept::OnToDateChange(){
	
} */
/*void CFAMAllocateToDept::OnToDateSetfocus(){
	
} */
/*void CFAMAllocateToDept::OnToDateKillfocus(){
	
} */
int CFAMAllocateToDept::OnToDateCheckValue(){
	return 0;
} 
/*void CFAMAllocateToDept::OnOrderNoChange(){
	
} */
/*void CFAMAllocateToDept::OnOrderNoSetfocus(){
	
} */
/*void CFAMAllocateToDept::OnOrderNoKillfocus(){
	
} */
int CFAMAllocateToDept::OnOrderNoCheckValue(){
	return 0;
} 
void CFAMAllocateToDept::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAllocateToDeptListLoadData();
} 
void CFAMAllocateToDept::OnAllocateToDeptListDblClick(){
	if(szStatus == _T("O"))
	{
		OnEditSelect();
	}
	else
		OnViewSelect();
} 
void CFAMAllocateToDept::OnAllocateToDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	szOrderNo = m_wndAllocateToDeptList.GetItemText(nNewItem, 1);
	szStatus = m_wndAllocateToDeptList.GetItemText(nNewItem, 6);
	szDept = m_wndAllocateToDeptList.GetItemText(nNewItem, 4);
	m_szTransactionID = m_wndAllocateToDeptList.GetItemText(nNewItem, 8);
	m_szUser = m_wndAllocateToDeptList.GetItemText(nNewItem, 9);
	m_szWarehouse = m_wndAllocateToDeptList.GetItemText(nNewItem, 10);
	SetMode(VM_EDIT);
} 
int CFAMAllocateToDept::OnAllocateToDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(szStatus == _T("P"))
	{
		MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
	}else{
		OnDeleteFAMAllocateToDept();
	}
	return 0;
}  
long CFAMAllocateToDept::OnAllocateToDeptListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	int nIndex = 1;
	m_wndAllocateToDeptList.BeginLoad(); 
	int nCount = 0;
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_orderdate between TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	if(!m_szWarehouseKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_exp_storage_id = '%s'"), m_szWarehouseKey);
	}
	if(!m_szToDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_imp_department_id = '%s'"), m_szToDepartmentKey);
	}
	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_orderno = '%s'"), m_szOrderNo);
	}

	szSQL.Format(_T("SELECT st_orderno, st_orderdate, st_createdby, st_status, st_transaction_id,st_exp_department_id,st_imp_department_id,") \
				_T(" (select sl_name from storage_location where sl_storage_id = st_exp_storage_id) as warehouse, ") \
				_T(" (select sum(stl_amount) from storage_transactionline where stl_transaction_id = st_transaction_id) as amount, st_exp_storage_id ") \
				_T(" FROM storage_transaction WHERE st_org_id = '%s' and st_doctype = 'EAO' %s ORDER BY st_transaction_id"), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	CString szIndex;
	szIndex.Format(_T("%d"), nIndex);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndAllocateToDeptList.AddItems(
			szIndex,
			rs.GetValue(_T("st_orderno")),
			CDateTime::Convert(rs.GetValue(_T("st_orderdate")), yyyymmdd|hhmmss , ddmmyyyy|hhmmss), 
			rs.GetValue(_T("warehouse")),
			rs.GetValue(_T("st_imp_department_id")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("st_status")),
			rs.GetValue(_T("st_createdby")),
			rs.GetValue(_T("st_transaction_id")),
			rs.GetValue(_T("st_createdby")), 
			rs.GetValue(_T("st_exp_storage_id")),NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndAllocateToDeptList.EndLoad(); 
	return nCount;

}
void CFAMAllocateToDept::OnAllSelect(){
	
}
void CFAMAllocateToDept::OnOpeningSelect(){
	
}
void CFAMAllocateToDept::OnIsApprovedSelect(){
	
}
void CFAMAllocateToDept::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFAMAllocateToDeptDialog dlg(pMF);
	dlg.m_szOrderNo = szOrderNo;
	dlg.szStatusDlg = szStatus;
	dlg.m_szTransactionID = m_szTransactionID;
	dlg.SetMode(VM_VIEW);
	dlg.DoModal();
} 
void CFAMAllocateToDept::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("23.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMAllocateToDeptDialog dlg(pMF);
		dlg.m_szOrderNo = szOrderNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMAllocateToDept::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("23.02")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(szStatus == _T("P"))				    
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}else{
			CFAMAllocateToDeptDialog dlg(pMF);
			dlg.szStatusDlg = szStatus;
			dlg.m_szOrderNo = szOrderNo;
			dlg.szDept = szDept;
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
void CFAMAllocateToDept::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("23.03")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(szStatus == _T("P"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}else{
			OnDeleteFAMAllocateToDept();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
int CFAMAllocateToDept::OnAddFAMAllocateToDept(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMAllocateToDept::OnEditFAMAllocateToDept(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAllocateToDept::OnDeleteFAMAllocateToDept(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	int nCount;
	CRecord rs(&pMF->m_db);
	if(szOrderNo.IsEmpty())
		return -1;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("SELECT count(*) FROM storage_transactionline where stl_transaction_id = '%s'"), m_szTransactionID);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if(nCount > 1)
		return -1;
	szSQL.Format(_T("DELETE FROM storage_transaction WHERE st_transaction_id = '%s' "), m_szTransactionID );
	
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		szOrderNo.Empty();
		SetMode(VM_VIEW);
		OnAllocateToDeptListLoadData();
 	}
	return 0;
}
int CFAMAllocateToDept::OnSaveFAMAllocateToDept(){
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

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFAMAllocateToDeptListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMAllocateToDept::OnCancelFAMAllocateToDept(){
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
int CFAMAllocateToDept::OnFAMAllocateToDeptListLoadData(){
	return 0;
}
