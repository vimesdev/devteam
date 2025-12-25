#include "StorageImportList.h"
#include "MainFrame_E10.h"
#include "StorageImportDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageImportList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportList* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportList *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportList* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportList *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageImportList* )pWnd)->OnToDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnToDepartmentSelendok();
}
/*static void _OnToDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnToDepartmentKillfocus();
}*/
/*static void _OnToDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnToDepartmentKillfocus();
}*/
static long _OnToDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportList *)pWnd)->OnToDepartmentLoadData();
}
/*static void _OnToDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageImportList *)pWnd)->OnToDepartmentAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CStorageImportList *pVw = (CStorageImportList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageImportList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageImportList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageImportList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListAddItemFnc(CWnd *pWnd){
	return ((CStorageImportList*)pWnd)->OnAddStorageDeliveryOrderList();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	return ((CStorageImportList*)pWnd)->OnEditStorageDeliveryOrderList();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageImportList*)pWnd)->OnListDeleteItem();
}

static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CStorageImportList*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CStorageImportList*)pWnd)->OnOpeningSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	  ((CStorageImportList*)pWnd)->OnApprovedSelect();
}

static int _OnListSelectItemFnc(CWnd *pWnd){
	((CStorageImportList*)pWnd)->OnListDblClick();
	return 0;
}
static int _OnRefreshListFnc(CWnd *pWnd){
	 return ((CStorageImportList*)pWnd)->OnListLoadData();
}


static void _OnViewSelectFnc(CWnd *pWnd){
	CStorageImportList *pVw = (CStorageImportList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageImportList *pVw = (CStorageImportList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageImportList *pVw = (CStorageImportList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageImportList *pVw = (CStorageImportList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddStorageDeliveryOrderListFnc(CWnd *pWnd){
	 return ((CStorageImportList*)pWnd)->OnAddStorageDeliveryOrderList();
} 
static int _OnEditStorageDeliveryOrderListFnc(CWnd *pWnd){
	 return ((CStorageImportList*)pWnd)->OnEditStorageDeliveryOrderList();
} 
static int _OnDeleteStorageDeliveryOrderListFnc(CWnd *pWnd){
	 return ((CStorageImportList*)pWnd)->OnDeleteStorageDeliveryOrderList();
} 
static int _OnSaveStorageDeliveryOrderListFnc(CWnd *pWnd){
	 return ((CStorageImportList*)pWnd)->OnSaveStorageDeliveryOrderList();
} 
static int _OnCancelStorageDeliveryOrderListFnc(CWnd *pWnd){
	 return ((CStorageImportList*)pWnd)->OnCancelStorageDeliveryOrderList();
} 
CStorageImportList::CStorageImportList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_wndOrder = NULL;
	m_bImportType = false;
	SetWindowName(_T("StorageImportList"));
}
CStorageImportList::~CStorageImportList(){
}
void CStorageImportList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndOrderList.Create(this, _T("Order List"), 5, 95, 810, 590);
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 10, 30, 100, 55);
	m_wndFromStorage.Create(this,105, 30, 395, 55); 
	m_wndToDepartmentLabel.Create(this, _T("Delivery To"), 400, 30, 490, 55);
	m_wndToDepartment.Create(this,495, 30, 775, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 395, 85); 
	m_wndTransactionTypeLabel.Create(this, _T("Type"), 400, 60, 490, 85);
	m_wndTransactionType.Create(this,495, 60, 585, 85); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 590, 60, 670, 85);
	m_wndOrderNo.Create(this,675, 60, 775, 85); 
	m_wndRefresh.Create(this, _T("@"), 780, 60, 805, 85);
	m_wndAll.Create(this, _T("All"), 5, 595, 95, 620);
	m_wndOpening.Create(this, _T("Opening"), 100, 595, 190, 620);
	m_wndSended.Create(this, _T("Sended"), 195, 595, 285, 620);
	m_wndApproved.Create(this, _T("Approved"), 290, 595, 380, 620);
	m_wndView.Create(this, _T("&View"), 475, 595, 555, 620);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndList.Create(this,10, 120, 805, 585); 
	

}
void CStorageImportList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndTransactionType.SetCheckValue(true);
	m_wndTransactionType.LimitText(35);
//	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(35);
//	m_wndToDepartment.SetCheckValue(true);
	m_wndToDepartment.LimitText(16);


	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndOrderNo.LimitText(10);
	m_wndOrderNo.SetNotEmpty(true);


	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndToDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);



	m_wndList.SetAutoIndex(TRUE);
	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transaction_id
	m_wndList.InsertColumn(1, _T("Loại phiếu"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(2, _T("Số phiếu"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Ngày nhập"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Approved Date"), CFMT_DATETIME, 0);
	m_wndList.InsertColumn(5, _T("Kho đến"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Gửi đến"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Trạng thái"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(8, _T("Mô tả"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(9, _T("Người tạo"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("Người duyệt"), CFMT_TEXT, 80);

	

}
void CStorageImportList::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	m_wndToDepartment.SetEvent(WE_SELENDOK, _OnToDepartmentSelendokFnc);
	//m_wndToDepartment.SetEvent(WE_SETFOCUS, _OnToDepartmentSetfocusFnc);
	//m_wndToDepartment.SetEvent(WE_KILLFOCUS, _OnToDepartmentKillfocusFnc);
	m_wndToDepartment.SetEvent(WE_SELCHANGE, _OnToDepartmentSelectChangeFnc);
	m_wndToDepartment.SetEvent(WE_LOADDATA, _OnToDepartmentLoadDataFnc);
	//m_wndToDepartment.SetEvent(WE_ADDNEW, _OnToDepartmentAddNewFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndApproved.SetEvent(WE_CLICK, _OnApprovedSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);

	//Layout
/*
	AddLayoutControl(&m_wndOrderList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndFromDate, WS_RESIZEX, 100, 100, 25, 100);
	AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 25, 100, 100, 100);
	AddLayoutControl(&m_wndToDate, WS_REPOSX|WS_RESIZEX, 25, 100, 25, 100);
	AddLayoutControl(&m_wndStatusLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndTransactionType, WS_REPOSX|WS_RESIZEX, 50, 100, 50, 100);
	AddLayoutControl(&m_wndFromStorage, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndToDepartmentLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndToDepartment, WS_REPOSX|WS_RESIZEX, 50, 100, 50, 100);
	AddLayoutControl(&m_wndRefresh, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	*/
	m_wndList.SetWindowText(_T("Order List"));
	m_wndList.AddEvent(1, _T("Select Sheet"), _OnListSelectItemFnc, 0, VK_SPACE);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Add Sheet"), _OnListAddItemFnc, 0, 0);
	m_wndList.AddEvent(3, _T("Edit Sheet"), _OnListEditItemFnc, 0, 0);
	m_wndList.AddEvent(4, _T("Delete Sheet"), _OnListDeleteItemFnc, 0, VK_DELETE);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Refresh"), _OnRefreshListFnc, 0, VK_F5);
	CMainFrame_E10 *pMF = (CMainFrame_E10*)AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
	OnListLoadData();
}
void CStorageImportList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToDepartment.GetDlgCtrlID(), m_szToDepartmentKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nStatus);

}
void CStorageImportList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageImportList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CStorageImportList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTransactionTypeKey.Empty();
	m_szFromStorageKey.Empty();
	m_szToDepartmentKey.Empty();
	m_nStatus=0;
}
int CStorageImportList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CStorageImportList::OnFromDateChange(){
	
} */
/*void CStorageImportList::OnFromDateSetfocus(){
	
} */
/*void CStorageImportList::OnFromDateKillfocus(){
	
} */
int CStorageImportList::OnFromDateCheckValue(){
	return 0;
} 
/*void CStorageImportList::OnToDateChange(){
	
} */
/*void CStorageImportList::OnToDateSetfocus(){
	
} */
/*void CStorageImportList::OnToDateKillfocus(){
	
} */
int CStorageImportList::OnToDateCheckValue(){
	return 0;
} 
void CStorageImportList::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageImportList::OnTransactionTypeSelendok(){
	 
}
/*void CStorageImportList::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageImportList::OnTransactionTypeKillfocus(){
	
}*/
long CStorageImportList::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;

	if(pMF->GetModuleID() == _T("BB"))
	{
		szFilter.Format(_T(" and addt_doctype_id in('DOO','LOO','EOO','BOO','SLO','EXO','EXP','EOH','EX1','EX2' ) "));

	}
	else
	{
		szFilter.Format(_T(" and addt_doctype_id in('DOO','LOO','EOO','BOO','SLO','EXO','EXP','EOH') "));
	}


	return pMF->LoadTransactionTypeList(&m_wndTransactionType, m_szTransactionTypeKey, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransactionType.IsSearchKey() && !m_szTransactionTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTransactionTypeKey
};
	m_wndTransactionType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransactionType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageImportList::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageImportList::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageImportList::OnFromStorageSelendok(){
	 
}
/*void CStorageImportList::OnFromStorageSetfocus(){
	
}*/
/*void CStorageImportList::OnFromStorageKillfocus(){
	
}*/
long CStorageImportList::OnFromStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	if(str2int(m_szToDepartmentKey) > 0)
		szWhere.Format(_T(" AND msl_storage_id<>%d "), str2int(m_szToDepartmentKey));
	//szWhere.AppendFormat(_T(" and msl_type<>'C' "));
	pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szWhere);

	return 0;
}
/*void CStorageImportList::OnFromStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageImportList::OnToDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageImportList::OnToDepartmentSelendok(){
	 
}
/*void CStorageImportList::OnToDepartmentSetfocus(){
	
}*/
/*void CStorageImportList::OnToDepartmentKillfocus(){
	
}*/
long CStorageImportList::OnToDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	if(str2int(m_szFromStorageKey) > 0)
		szWhere.Format(_T(" and msl_storage_id<>%d "), str2int(m_szFromStorageKey));

	szWhere.AppendFormat(_T(" and msl_type<>'C' "));

	pMF->LoadStorageList(&m_wndToDepartment, m_szToDepartmentKey, szWhere);

	return 0;
}
/*void CStorageImportList::OnToDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageImportList::OnRefreshSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();	
} 
void CStorageImportList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	OnViewSelect();	
} 
void CStorageImportList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	
} 
int CStorageImportList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageDeliveryOrderList();
	 return 0;
} 
long CStorageImportList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szFromStorageKey) > 0){
		szWhere.Format(_T(" AND mt_storage_to_id=%d "), ToInt(m_szFromStorageKey));
	}

	szWhere.AppendFormat(_T(" and mt_org_id in('GL','%s') "), pMF->GetModuleID());

	if(pMF->GetModuleID() == _T("BB"))
	{
		szWhere.AppendFormat(_T(" and mt_doctype = 'IMP' "));

	}
	else
	{
		szWhere.AppendFormat(_T(" and mt_doctype = 'IMP' "));
	}

//	szWhere.AppendFormat(_T(" and mt_doctype in('LOO','EOO','BOO','SLO','EXO','EXP', 'DOO','EOH') "));

	if (!m_szOrderNo.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(mt_orderno) LIKE chr(37)||lower('%s')||chr(37)"), m_szOrderNo);
	//szWhere.AppendFormat(_T(" and (mt_department_id ='%s' OR mt_department_to_id='%s') "), pMF->GetDepartmentID(), pMF->GetDepartmentID());
	szWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"), pMF->m_szStoragePerm);

	szSQL.Format(_T(" SELECT mt_transaction_id, ") \
				_T(" 	mt_orderno,") \
				_T(" 	mt_orderdate,") \
				_T(" 	mt_acctdate,") \
				_T("	GET_DOCTYPE(mt_doctype) as mt_doctype_desc, ") \
				_T(" 	GET_STORAGENAME(mt_storage_to_id) as mt_tostorage, ") \
				_T("	Get_PartnerName(mt_partner_id) as mt_deliveryto, ") \
				_T(" 	mt_deliverydate,") \
				_T(" 	mt_approveddate,") \
				_T(" 	MT_DESCRIPTION, ") \
				_T(" 	mt_status, ") \
				_T("	mt_createdby, ")\
				_T("	mt_approvedby approvedby") \
				_T("   FROM m_transaction") \
				_T(" WHERE trunc_date(mt_orderdate) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" %s "), 
				m_szFromDate, m_szToDate,  szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	CString szStatus;
	int nIndex = 1;
	while(!rs.IsEOF()){ 

		tmpStr.Format(_T("%d"), nIndex++);
		int nItem;
		rs.GetValue(_T("mt_status"), szStatus);
			nItem = m_wndList.AddItems(
				rs.GetValue(_T("mt_transaction_id")), 
				rs.GetValue(_T("mt_doctype_desc")),
				rs.GetValue(_T("mt_orderno")), 
				rs.GetValue(_T("mt_orderdate")), 
				rs.GetValue(_T("mt_approveddate")), 
				rs.GetValue(_T("mt_tostorage")), 
				rs.GetValue(_T("mt_deliveryto")), 
				rs.GetValue(_T("mt_status")), 
				rs.GetValue(_T("MT_DESCRIPTION")),      			
				rs.GetValue(_T("mt_createdby")), 
				rs.GetValue(_T("approvedby")),
				NULL);


		if(szStatus == _T("S"))
		{
			m_wndList.SetSubItemBkColor(nItem, 7, RGB(0, 128, 192), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 7, RGB(255, 255, 255), FALSE);
		}
		else if(szStatus == _T("A"))
		{
			m_wndList.SetSubItemBkColor(nItem, 7, RGB(255, 128, 64), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 7, RGB(255, 255, 255), FALSE);
		}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CStorageImportList::OnAllSelect(){
	
}
void CStorageImportList::OnOpeningSelect(){
	
}
void CStorageImportList::OnApprovedSelect(){
	
}
void CStorageImportList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("05.06")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}

	CStorageImportDialog dlg(pMF, VM_VIEW);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		
	}
	if (dlg.m_bRefresh)
	{
		OnListLoadData();
	}
	m_wndList.SetFocus();
} 
void CStorageImportList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageDeliveryOrderList();	

} 
void CStorageImportList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageDeliveryOrderList();
	
} 
void CStorageImportList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageDeliveryOrderList();
} 
int CStorageImportList::OnAddStorageDeliveryOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("05.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}
 	CStorageImportDialog dlg(pMF, VM_ADD);

	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0; 
}
int CStorageImportList::OnEditStorageDeliveryOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("05.02")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

	CStorageImportDialog dlg(pMF, VM_EDIT);
//	dlg.m_wndParentWnd = this;
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0;  
}
int CStorageImportList::OnDeleteStorageDeliveryOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 	
	if(!pMF->CheckPermission(_T("05.03")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return 0;
	}
 	CString szSQL, szCreatedBy, szStatus; 
	pMF->GetTransactionInfo(m_nID, szCreatedBy, szStatus);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}



	if(pMF->GetCurrentUser() != szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not delete it"), 0);
		return 0;
	}

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("M_TRANSACTION_DELETE(%ld, '%s') "), m_nID, pMF->GetCurrentUser()); 

 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret >= 0){ 
		OnListLoadData();
 		//SetMode(VM_NONE); 
 		//OnCancelStorageDeliveryOrderList(); 
 	}
	return 0;
}
int CStorageImportList::OnSaveStorageDeliveryOrderList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_dm_purchaseorderlnTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_dm_purchaseorderlnTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnStorageDeliveryOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CStorageImportList::OnCancelStorageDeliveryOrderList(){
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
int CStorageImportList::OnStorageDeliveryOrderListListLoadData(){
	return 0;
}

void CStorageImportList::SetImportForm(bool bFlag){
	m_bImportType = bFlag;
}

void CStorageImportList::Refresh(){
	if(GetSafeHwnd()){
		OnListLoadData();
	}
}

BEGIN_MESSAGE_MAP(CStorageImportList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CStorageImportList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	m_wndFromStorage.SetFocus();
}

void CStorageImportList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
}