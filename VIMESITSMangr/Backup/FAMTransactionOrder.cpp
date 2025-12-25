#include "FAMTransactionOrder.h"
#include "FAMTransactionOrderDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrder *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrder *)pWnd)->OnToDateCheckValue();
} 
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrder* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrder *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnWarehouseAddNew();
}*/
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrder *)pWnd)->OnOrderIDCheckValue();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CFAMTransactionOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMTransactionOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrder*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnViewSelect();
} 
static int _OnAddFAMTransactionOrderFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrder*)pWnd)->OnAddFAMTransactionOrder();
} 
static int _OnEditFAMTransactionOrderFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrder*)pWnd)->OnEditFAMTransactionOrder();
} 
static int _OnDeleteFAMTransactionOrderFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrder*)pWnd)->OnDeleteFAMTransactionOrder();
} 
static int _OnSaveFAMTransactionOrderFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrder*)pWnd)->OnSaveFAMTransactionOrder();
} 
static int _OnCancelFAMTransactionOrderFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrder*)pWnd)->OnCancelFAMTransactionOrder();
}
static int _OnRecoverOrderFnc(CWnd *pWnd){
	return	((CFAMTransactionOrder*)pWnd)->OnRecoverOrder();
}
CFAMTransactionOrder::CFAMTransactionOrder(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMTransactionOrder::~CFAMTransactionOrder(){
}
void CFAMTransactionOrder::OnCreateComponents(){
	m_wndSearchInfomation.Create(this, _T("Search Infomation"), 5, 5, 805, 90);
	m_wndOrderListTitle.Create(this, _T("Order List"), 5, 95, 805, 595);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 385, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 390, 30, 470, 55);
	m_wndToDate.Create(this,475, 30, 765, 55); 
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 10, 60, 90, 85);
	m_wndWarehouse.Create(this,95, 60, 385, 85); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 390, 60, 470, 85);
	m_wndOrderID.Create(this,475, 60, 765, 85); 
	m_wndSearch.Create(this, _T("@"), 770, 60, 800, 85);
	m_wndOrderList.Create(this,10, 120, 800, 590); 
	m_wndAdd.Create(this, _T("Add"), 555, 600, 635, 625);
	m_wndEdit.Create(this, _T("Edit"), 640, 600, 720, 625);
	m_wndDelete.Create(this, _T("Delete"), 725, 600, 805, 625);
	m_wndView.Create(this, _T("View"), 470, 600, 550, 625);

}
void CFAMTransactionOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.LimitText(35);
	m_wndOrderID.SetLimitText(1024);

	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndOrderList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(1, _T("Order ID"), CFMT_TEXT, 120);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 125);
	m_wndOrderList.InsertColumn(3, _T("Warehouse"), CFMT_TEXT, 200);
	m_wndOrderList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 100);
	m_wndOrderList.InsertColumn(5, _T("Status"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(6, _T("Created By"), CFMT_TEXT, 90);
	m_wndOrderList.InsertColumn(7, _T("Transaction ID"), CFMT_TEXT, 0);
	m_wndOrderList.InsertColumn(8, _T("User"), CFMT_TEXT, 0);
	
}
void CFAMTransactionOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	
	if(pMF->CheckPermission(_T("31")) || pMF->GetCurrentUser() == _T("admin"))
	{
		m_wndOrderList.AddEvent(2, _T("Recovery"), _OnRecoverOrderFnc, 0);
	}

	SetMode(VM_VIEW);
}
void CFAMTransactionOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_szOrderID);

}
void CFAMTransactionOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMTransactionOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMTransactionOrder::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderID.Empty();

}
int CFAMTransactionOrder::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
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
/*void CFAMTransactionOrder::OnFromDateChange(){
	
} */
/*void CFAMTransactionOrder::OnFromDateSetfocus(){
	
} */
/*void CFAMTransactionOrder::OnFromDateKillfocus(){
	
} */
int CFAMTransactionOrder::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrder::OnToDateChange(){
	
} */
/*void CFAMTransactionOrder::OnToDateSetfocus(){
	
} */
/*void CFAMTransactionOrder::OnToDateKillfocus(){
	
} */
int CFAMTransactionOrder::OnToDateCheckValue(){
	return 0;
} 
void CFAMTransactionOrder::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrder::OnWarehouseSelendok(){
	 UpdateData(TRUE);
}
/*void CFAMTransactionOrder::OnWarehouseSetfocus(){
	
}*/
/*void CFAMTransactionOrder::OnWarehouseKillfocus(){
	
}*/
long CFAMTransactionOrder::OnWarehouseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), m_szWarehouseKey);
	}
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name FROM storage_location WHERE sl_org_id = 'FAM' and sl_type is null %s ORDER BY sl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMTransactionOrder::OnWarehouseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMTransactionOrder::OnOrderIDChange(){
	
} */
/*void CFAMTransactionOrder::OnOrderIDSetfocus(){
	
} */
/*void CFAMTransactionOrder::OnOrderIDKillfocus(){
	
} */
int CFAMTransactionOrder::OnOrderIDCheckValue(){
	return 0;
} 
void CFAMTransactionOrder::OnOrderListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnViewSelect();

} 
void CFAMTransactionOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	szOrderID = m_wndOrderList.GetItemText(nNewItem, 1);
	szStatus = m_wndOrderList.GetItemText(nNewItem, 5);
	m_szTransactionID = m_wndOrderList.GetItemText(nNewItem, 7);
	m_szUser = m_wndOrderList.GetItemText(nNewItem, 8);
	SetMode(VM_EDIT);
} 
int CFAMTransactionOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(szStatus == _T("P"))
	{
		MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
	}else{
		OnDeleteFAMTransactionOrder();
	}
	 return 0;
} 
long CFAMTransactionOrder::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIndex;
	szWhere.Empty();
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	int nIndex = 1;
	UpdateData(TRUE);
	if(!m_szOrderID.IsEmpty())
	{
		szWhere.Format(_T(" and st_orderno = '%s' "), m_szOrderID);
	}
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_orderdate between TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
	}
	if(!m_szWarehouseKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_imp_storage_id = '%s' "), m_szWarehouseKey);
	}
	szSQL.Format(_T("SELECT st_orderno, st_orderdate, st_createdby, st_imp_storage_id, st_status, st_transaction_id,") \
				_T(" (select sl_name from storage_location where sl_storage_id = st_imp_storage_id) as warehouse, ") \
				_T(" (select sum(stl_amount) from storage_transactionline where stl_transaction_id = st_transaction_id) as amount ") \
				_T(" FROM storage_transaction WHERE st_org_id = 'FAM' and st_doctype = 'IPO' %s ORDER BY st_transaction_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex); 
		m_wndOrderList.AddItems(
			szIndex,
			rs.GetValue(_T("st_orderno")),
			rs.GetValue(_T("st_orderdate")), 
			rs.GetValue(_T("warehouse")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("st_status")),
			rs.GetValue(_T("st_createdby")),
			rs.GetValue(_T("st_transaction_id")),
			rs.GetValue(_T("st_createdby")), NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndOrderList.EndLoad(); 
	return nCount;

}
void CFAMTransactionOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("21.02")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(szStatus == _T("P"))
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}else{
			CFAMTransactionOrderDialog dlg(pMF, VM_EDIT);
			dlg.m_szOrderNo = szOrderID;
			dlg.m_szTransactionID = m_szTransactionID;
			if(dlg.DoModal() == IDOK)
			{

			}
			if(dlg.m_bRefresh)
			{
				OnOrderListLoadData();
			}
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMTransactionOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("21.03")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(szStatus == _T("P"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}else{
			OnDeleteFAMTransactionOrder();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMTransactionOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("21.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMTransactionOrderDialog dlg(pMF, VM_ADD);
		if(dlg.DoModal() == IDOK)
		{

		}
		if(dlg.m_bRefresh)
		{
			OnOrderListLoadData();
		}


	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMTransactionOrder::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CFAMTransactionOrder::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFAMTransactionOrderDialog dlg(pMF, VM_VIEW);
	dlg.m_szOrderNo = szOrderID;
	dlg.m_szTransactionID = m_szTransactionID;
	dlg.m_szStatus = szStatus;
	if(dlg.DoModal() == IDOK)
	{

	}
	if(dlg.m_bRefresh)
	{
		OnOrderListLoadData();
	}
} 
int CFAMTransactionOrder::OnAddFAMTransactionOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMTransactionOrder::OnEditFAMTransactionOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMTransactionOrder::OnDeleteFAMTransactionOrder(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCount;
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return -1;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	CString szTransactionID = m_wndOrderList.GetItemText(nSel, 7);
	szSQL.Format(_T("STORAGE_TRANSACTION_DELETE('%s','%s')"), szTransactionID, pMF->GetCurrentUser());

 	CString szCode, szError;
	int ret = 0;
	pMF->ExecDMLEx(szSQL, ret, szError);
 	if(ret >= 0){
		SetMode(VM_VIEW);
		OnOrderListLoadData();
 	}
	else
	{
		CString szMsg;
		szMsg.Format(_T("%ld:%s"), ret, szError);
		ShowMessageBox(szMsg);
	}
	return 0;
}
int CFAMTransactionOrder::OnSaveFAMTransactionOrder(){
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
 		//OnFAMTransactionOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMTransactionOrder::OnCancelFAMTransactionOrder(){
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
int CFAMTransactionOrder::OnFAMTransactionOrderListLoadData(){
	return 0;
}
int CFAMTransactionOrder::OnRecoverOrder(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szRecover, szTemp;
	if(szOrderID.IsEmpty())
		return -1;
	if(ShowMessageBox(_T("Do you want to recover this order ?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szRecover.Format(_T("STORAGE_TRANSACTION_UNPOST('%s', '%s')"), m_szTransactionID, pMF->GetCurrentUser());
	szTemp = pMF->ExecDML(szRecover);
 	if(szTemp.Find(_T("-")) == -1){
		MessageBox(_T("Recover Successful!"), 0, MB_RIGHT);
		szOrderID.Empty();
		SetMode(VM_VIEW);
		OnOrderListLoadData();
 	}else
	{
		MessageBox(szTemp, 0, MB_ICONERROR);
	}
	return 0;
}