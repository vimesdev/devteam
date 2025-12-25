#include "FAMTransactionOrder.h"
#include "FAMTransactionOrderDialog.h"
#include "MainFrm.h"
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrder* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrder *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrder* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrder *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnToStorageAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrder *)pWnd)->OnStatusAddNew();
}*/
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
static void _OnSearchSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnSearchSelect();
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
static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMTransactionOrder *pVw = (CFAMTransactionOrder *)pWnd;
	pVw->OnDeleteSelect();
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
	m_wndOrderListTitle.Create(this, _T("Order List"), 5, 96, 805, 596);
	m_wndFromStorageLabel.Create(this, _T("ITS_EXP_STORAGE"), 10, 30, 100, 55);
	m_wndFromStorage.Create(this,105, 30, 255, 55); 
	m_wndToStorageLabel.Create(this, _T("ITS_IMP_STORAGE"), 260, 30, 350, 55);
	m_wndToStorage.Create(this,355, 30, 505, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 510, 30, 600, 55);
	m_wndStatus.Create(this,605, 30, 765, 55); 
	m_wndSearchInfomation.Create(this, _T("Search Infomation"), 5, 6, 805, 91);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 60, 350, 85);
	m_wndToDate.Create(this,355, 60, 505, 85); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 510, 60, 600, 85);
	m_wndOrderID.Create(this,605, 60, 765, 85); 
	m_wndSearch.Create(this, _T("@"), 770, 60, 800, 85);
	m_wndOrderList.Create(this,10, 121, 800, 591); 
	m_wndView.Create(this, _T("View"), 470, 601, 550, 626);
	m_wndAdd.Create(this, _T("Add"), 555, 601, 635, 626);
	m_wndEdit.Create(this, _T("Edit"), 640, 601, 720, 626);
	m_wndDelete.Create(this, _T("Delete"), 725, 601, 805, 626);

}
void CFAMTransactionOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(35);
	m_wndFromStorage.SetCheckValue(false);
	m_wndFromStorage.LimitText(35);
	m_wndOrderID.SetLimitText(1024);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderID.SetNotEmpty(false);

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndFromStorage.InsertColumn(2, _T(""), CFMT_TEXT,0);
	

	m_wndToStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndToStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndToStorage.InsertColumn(2, _T(""), CFMT_TEXT, 0);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndOrderList.InsertColumn(0, _T(""), CFMT_TEXT, 0);//Transation_ID
	m_wndOrderList.InsertColumn(1, _T("Idx"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(2, _T("ID"), CFMT_TEXT, 110);
	m_wndOrderList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 140);
	m_wndOrderList.InsertColumn(4, _T("From"), CFMT_TEXT, 190);
	m_wndOrderList.InsertColumn(5, _T("To"), CFMT_TEXT, 190);
	m_wndOrderList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 100);
	m_wndOrderList.InsertColumn(7, _T("Status"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(8, _T("Created By"), CFMT_TEXT, 90);
	m_wndOrderList.InsertColumn(9, _T("User"), CFMT_TEXT, 0);
	
}
void CFAMTransactionOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	m_wndToStorage.SetEvent(WE_SELENDOK, _OnToStorageSelendokFnc);
	//m_wndToStorage.SetEvent(WE_SETFOCUS, _OnToStorageSetfocusFnc);
	//m_wndToStorage.SetEvent(WE_KILLFOCUS, _OnToStorageKillfocusFnc);
	m_wndToStorage.SetEvent(WE_SELCHANGE, _OnToStorageSelectChangeFnc);
	m_wndToStorage.SetEvent(WE_LOADDATA, _OnToStorageLoadDataFnc);
	//m_wndToStorage.SetEvent(WE_ADDNEW, _OnToStorageAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
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
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	
	if(pMF->CheckPermission(_T("31")) || pMF->GetCurrentUser() == _T("admin"))
	{
		m_wndOrderList.AddEvent(2, _T("Recovery"), _OnRecoverOrderFnc, 0);
	}
	m_szFromDate = m_szToDate = pMF->GetSysDate();

	SetMode(VM_VIEW);
}
void CFAMTransactionOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToStorage.GetDlgCtrlID(), m_szToStorageKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
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

void CFAMTransactionOrder::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrder::OnFromStorageSelendok(){
	 
}
/*void CFAMTransactionOrder::OnFromStorageSetfocus(){
	
} */
/*void CFAMTransactionOrder::OnFromStorageKillfocus(){
	
} */
long CFAMTransactionOrder::OnFromStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	if(!m_szToStorageKey.IsEmpty())
	{
		szFilter.AppendFormat(_T(" and sl_storage_id <> '%s' "), m_szToStorageKey);
	}
	if(m_szDocType == _T("EAO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') = 'GL' "));
	}
	else if(m_szDocType == _T("IRO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') <> 'GL' "));
	}
	_tprintf(_T("\r\n%s: %s"), m_szDocType, szFilter);

	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromStorage.IsSearchKey() && !m_szFromStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFromStorageKey
};
	m_wndFromStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
} 
/*void CFAMTransactionOrder::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMTransactionOrder::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrder::OnToStorageSelendok(){
	 
}
/*void CFAMTransactionOrder::OnToStorageSetfocus(){
	
} */
/*void CFAMTransactionOrder::OnToStorageKillfocus(){
	
} */
long CFAMTransactionOrder::OnToStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	CString szFStorageType;
	UpdateData(TRUE);
	szFStorageType = m_wndFromStorage.GetCurrent(2);
_tprintf(_T("\r\n%s"), szFStorageType);
	if(!m_szFromStorageKey.IsEmpty())
	{
		szFilter.Format(_T(" and sl_storage_id <> '%s' "), m_szFromStorageKey);
	}

	if(m_szDocType == _T("IRO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') = 'GL' "));
	}
	if(m_szDocType == _T("EAO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') <> 'GL' "));
	}
	if(m_szDocType == _T("EMO"))
	{
		szFilter.AppendFormat(_T(" and COALESCE(sl_type,'GL') = '%s' "), szFStorageType);
	}
	
	return pMF->LoadStorageList(&m_wndToStorage, m_szToStorageKey, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToStorage.IsSearchKey() && !m_szToStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szToStorageKey
};
	m_wndToStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
} 
/*void CFAMTransactionOrder::OnToStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMTransactionOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrder::OnStatusSelendok(){
	 
}
/*void CFAMTransactionOrder::OnStatusSetfocus(){
	
}*/
/*void CFAMTransactionOrder::OnStatusKillfocus(){
	
}*/
long CFAMTransactionOrder::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szStatusKey);
	}
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id ='its_status' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMTransactionOrder::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
 
/*void CFAMTransactionOrder::OnOrderIDChange(){
	
} */
/*void CFAMTransactionOrder::OnOrderIDSetfocus(){
	
} */
/*void CFAMTransactionOrder::OnOrderIDKillfocus(){
	
} */
int CFAMTransactionOrder::OnOrderIDCheckValue(){
	return 0;
} 
 
void CFAMTransactionOrder::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
}
 
void CFAMTransactionOrder::OnOrderListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnViewSelect();

} 
void CFAMTransactionOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szTransactionID = m_wndOrderList.GetItemText(nNewItem, 0);
	szOrderID = m_wndOrderList.GetItemText(nNewItem, 2);
	SetMode(VM_EDIT);
} 
int CFAMTransactionOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("P"))
	{
		MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		return -1;
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
		szWhere.AppendFormat(_T(" and st_orderdate between TO_DATE('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_DATE('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
	}
	if(!m_szFromStorageKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_imp_storage_id = '%s' "), m_szFromStorageKey);
	}
	if(!m_szStatusKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and st_status = '%s'  "), m_szStatusKey);
	}
	szSQL.Format(_T("SELECT st_transaction_id as transaction_id, st_orderno as orderno, st_orderdate as orderdate, st_createdby as createdby, ") \
				_T(" st_status as status,") \
				_T(" STORAGE_GET_STORAGENAME(st_exp_storage_id) as FromStorage, ") \
				_T(" STORAGE_GET_STORAGENAME(st_imp_storage_id) as ToStorage, ") \
				_T(" st_amount as amount ") \
				_T(" FROM storage_transaction ") \
				_T(" WHERE st_org_id = '%s' and st_doctype = '%s' %s ") \
				_T("ORDER BY st_transaction_id"), pMF->GetModuleID(), m_szDocType, szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex); 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("transaction_id")),
			szIndex,
			rs.GetValue(_T("orderno")),
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("FromStorage")),
			rs.GetValue(_T("ToStorage")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("status")),
			rs.GetValue(_T("createdby")),
			rs.GetValue(_T("st_createdby")), NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndOrderList.EndLoad(); 
	return nCount;

}

void CFAMTransactionOrder::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) return;

	CString szID = m_wndOrderList.GetItemText(nSel, 2);
	m_szTransactionID = m_wndOrderList.GetItemText(nSel, 0);
	CFAMTransactionOrderDialog dlg(pMF, VM_VIEW, m_szDocType);
	dlg.m_szOrderNo = szID;
	dlg.m_szTransactionID = m_szTransactionID;
	if(dlg.DoModal() == IDOK)
			{

			}
			if(dlg.m_bRefresh)
			{
				OnOrderListLoadData();
			}
		}
 
void CFAMTransactionOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("21.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMTransactionOrderDialog dlg(pMF, VM_ADD, m_szDocType);
		if(dlg.DoModal() == IDOK)
		{
		}
			if(dlg.m_bRefresh)
		{
				OnOrderListLoadData();
		}
	}
	else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 

void CFAMTransactionOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) return;

	CString szID = m_wndOrderList.GetItemText(nSel, 2);
	m_szTransactionID = m_wndOrderList.GetItemText(nSel, 0);
	
	if(pMF->CheckPermission(_T("21.02")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("P"))
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}
		else
		{
			CFAMTransactionOrderDialog dlg(pMF, VM_EDIT, m_szDocType);
			dlg.m_szOrderNo = szID;
			dlg.m_szTransactionID = m_szTransactionID;
			if(dlg.DoModal() == IDOK)
			{

			}
			if(dlg.m_bRefresh)
			{
				OnOrderListLoadData();
			}
		}

	}
	else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
 
void CFAMTransactionOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("21.03")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("P"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}
		else
		{
			OnDeleteFAMTransactionOrder();

		}
	}
	else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
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
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return -1;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	CString szTransactionID = m_wndOrderList.GetItemText(nSel, 0);
	szSQL.Format(_T("STORAGE_TRANSACTION_DELETE('%s','%s')"), szTransactionID, pMF->GetCurrentUser());

 	CString szCode, szError;
	long ret = 0;
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
	CString szRecover, szTemp,szCheckExist;
	if(szOrderID.IsEmpty())
		return -1;
	_fmsg(_T("%s"), m_szTransactionID);
	szCheckExist.Format(_T(" STORAGE_CHECK_EXIST('%s', '%s') "), m_szTransactionID, m_szDocType);
	int nCheck = ToInt(pMF->ExecDML(szCheckExist));
	_fmsg(_T("%d"), nCheck);
	if(nCheck > 0)
	{
		ShowMessageBox(_T("\x43\xF3 v\x1EADt t\x1B0 \x111\xE3 \x63\x1EA5p ph\xE1t, kh\xF4ng th\x1EC3 kh\xF4i ph\x1EE5\x63 phi\x1EBFu n\xE0y.!"), MB_ICONERROR);
		return -1;
	}
	if(ShowMessageBox(_T("Do you want to recover this order ?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szRecover.Format(_T("STORAGE_TRANSACTION_UNPOST('%s', '%s')"), m_szTransactionID, pMF->GetCurrentUser());
	szTemp = pMF->ExecDML(szRecover);
 	if(szTemp.Find(_T("-")) == -1){
		MessageBox(_T("Recover Successful!"), 0, MB_RIGHT);
		SetMode(VM_VIEW);
		OnOrderListLoadData();
 	}else
	{
		MessageBox(szTemp, 0, MB_ICONERROR);
	}
	return 0;
}