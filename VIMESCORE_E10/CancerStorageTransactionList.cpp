#include "CancerStorageTransactionList.h"
#include "MainFrame_E10.h"
#include "StorageTransactionDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageTransactionList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageTransactionList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerStorageTransactionList* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CCancerStorageTransactionList *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerStorageTransactionList* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CCancerStorageTransactionList *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerStorageTransactionList* )pWnd)->OnToDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDepartmentSelendokFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnToDepartmentSelendok();
}
/*static void _OnToDepartmentSetfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnToDepartmentKillfocus();
}*/
/*static void _OnToDepartmentKillfocusFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnToDepartmentKillfocus();
}*/
static long _OnToDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCancerStorageTransactionList *)pWnd)->OnToDepartmentLoadData();
}
/*static void _OnToDepartmentAddNewFnc(CWnd *pWnd){
	((CCancerStorageTransactionList *)pWnd)->OnToDepartmentAddNew();
}*/


static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CCancerStorageTransactionList *)pWnd)->OnOrderNOCheckValue();
}
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CCancerStorageTransactionList *pVw = (CCancerStorageTransactionList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCancerStorageTransactionList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCancerStorageTransactionList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCancerStorageTransactionList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	((CCancerStorageTransactionList*)pWnd)->OnAddSelect();
	return 0;
}
static int _OnListAddItem2Fnc(CWnd *pWnd){
	((CCancerStorageTransactionList*)pWnd)->OnAdd2Select();
	return 0;
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnListEditItem();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnListDeleteItem();
}

static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CCancerStorageTransactionList*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CCancerStorageTransactionList*)pWnd)->OnOpeningSelect();
}
static void _OnSendedSelectFnc(CWnd *pWnd){
	  ((CCancerStorageTransactionList*)pWnd)->OnSendedSelect();
}

static void _OnApprovedSelectFnc(CWnd *pWnd){
	  ((CCancerStorageTransactionList*)pWnd)->OnApprovedSelect();
}

static int _OnListSelectItemFnc(CWnd *pWnd){
	((CCancerStorageTransactionList*)pWnd)->OnListDblClick();
	return 0;
}
static int _OnRefreshListFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnListLoadData();
}

static int _OnCancelOrderFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnCancelOrder();
}

static int _OnRecalcOrderFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnRecalcOrder();
}

static int _OnRollbackListFnc(CWnd *pWnd){
	  ((CCancerStorageTransactionList*)pWnd)->OnRollback();
	  return 0;
}


static void _OnViewSelectFnc(CWnd *pWnd){
	CCancerStorageTransactionList *pVw = (CCancerStorageTransactionList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCancerStorageTransactionList *pVw = (CCancerStorageTransactionList *)pWnd;
	pVw->OnAddSelect();
}

static void _OnAdd2SelectFnc(CWnd *pWnd){
	CCancerStorageTransactionList *pVw = (CCancerStorageTransactionList *)pWnd;
	pVw->OnAdd2Select();
}

static void _OnEditSelectFnc(CWnd *pWnd){
	CCancerStorageTransactionList *pVw = (CCancerStorageTransactionList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCancerStorageTransactionList *pVw = (CCancerStorageTransactionList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddCancerStorageTransactionListFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnAddCancerStorageTransactionList();
} 
static int _OnEditCancerStorageTransactionListFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnEditCancerStorageTransactionList();
} 
static int _OnDeleteCancerStorageTransactionListFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnDeleteCancerStorageTransactionList();
} 
static int _OnSaveCancerStorageTransactionListFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnSaveCancerStorageTransactionList();
} 
static int _OnCancelCancerStorageTransactionListFnc(CWnd *pWnd){
	 return ((CCancerStorageTransactionList*)pWnd)->OnCancelCancerStorageTransactionList();
} 
CCancerStorageTransactionList::CCancerStorageTransactionList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_wndOrder = NULL;
	m_bImportType = false;
	SetWindowName(_T("CancerStorageTransactionList"));
}
CCancerStorageTransactionList::~CCancerStorageTransactionList(){
}
void CCancerStorageTransactionList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndOrderList.Create(this, _T("Order List"), 5, 95, 810, 590);
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 10, 30, 100, 55);
	m_wndFromStorage.Create(this,105, 30, 395, 55); 
	m_wndToDepartmentLabel.Create(this, _T("To Department"), 400, 30, 490, 55);
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
	m_wndConfirm.Create(this, _T("Confirmed"), 520, 595, 640, 620);

	m_wndView.Create(this, _T("CREATEDDO"), 395, 595, 515, 620);
	m_wndAdd.Create(this, _T("CREATEDPO"), 520, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndList.Create(this,10, 120, 805, 585); 
	m_wndView.ShowWindow(SW_HIDE);
	m_wndAdd.ShowWindow(SW_HIDE);

}
void CCancerStorageTransactionList::OnInitializeComponents(){
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

	m_wndFromStorage.SetCheckValue(true);

	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndOrderNo.LimitText(10);
	m_wndOrderNo.SetNotEmpty(true);

	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndToDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndToDepartment.Format(2, 0, 15, 0);


	m_wndList.SetAutoIndex(TRUE);
	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transaction_id
	m_wndList.InsertColumn(1, _T("ORDERTYPE"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(2, _T("ORDERNO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Approved Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(5, _T("From Storage"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(6, _T("To Department"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(8, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(9, _T("Created By"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(10, _T("Approved By"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(11, _T(""), CFMT_TEXT, 0); //doctype

	m_wndList.GetHeaderControl()->SetItemHeight(1);

}
void CCancerStorageTransactionList::OnSetWindowEvents(){
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
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);


//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndSended.SetEvent(WE_CLICK, _OnSendedSelectFnc);
	m_wndApproved.SetEvent(WE_CLICK, _OnApprovedSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAdd2SelectFnc);
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
	m_wndList.AddEvent(2, _T("Create Daily Order"), _OnListAddItemFnc);
//	m_wndList.AddEvent(3, _T("Create Delivery Order"), _OnListAddItem2Fnc);
//	m_wndList.AddEvent(4, _T("Edit Sheet"), _OnListEditItemFnc);
//	m_wndList.AddEvent(5, _T("Delete Sheet"), _OnListDeleteItemFnc, 0, VK_DELETE);	
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(6, _T("Refresh"), _OnRefreshListFnc, 0, VK_F5);
	
//	m_wndList.AddEvent(0, _T("-"), NULL);
//	m_wndList.AddEvent(7, _T("Cancel && reset quantity ordering"), _OnCancelOrderFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(8, _T("Recalc order quantity"), _OnRecalcOrderFnc);

	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(9, _T("Rollback Order"), _OnRollbackListFnc);

	CMainFrame_E10 *pMF = (CMainFrame_E10*)AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
}
void CCancerStorageTransactionList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToDepartment.GetDlgCtrlID(), m_szToDepartmentKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nStatus);
	DDX_Check(pDX, m_wndConfirm.GetDlgCtrlID(), m_bConfirmed);

}
void CCancerStorageTransactionList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCancerStorageTransactionList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CCancerStorageTransactionList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTransactionTypeKey.Empty();
	m_szFromStorageKey.Empty();
	m_szToDepartmentKey.Empty();
	m_nStatus=0;
	m_bConfirmed = FALSE;
}
int CCancerStorageTransactionList::SetMode(int nMode){
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
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		
		m_wndView.EnableWindow(FALSE);
		m_wndAdd.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CCancerStorageTransactionList::OnFromDateChange(){
	
} */
/*void CCancerStorageTransactionList::OnFromDateSetfocus(){
	
} */
/*void CCancerStorageTransactionList::OnFromDateKillfocus(){
	
} */
int CCancerStorageTransactionList::OnFromDateCheckValue(){
	return 0;
} 
/*void CCancerStorageTransactionList::OnToDateChange(){
	
} */
/*void CCancerStorageTransactionList::OnToDateSetfocus(){
	
} */
/*void CCancerStorageTransactionList::OnToDateKillfocus(){
	
} */
int CCancerStorageTransactionList::OnToDateCheckValue(){
	return 0;
} 
void CCancerStorageTransactionList::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerStorageTransactionList::OnTransactionTypeSelendok(){
	 
}
/*void CCancerStorageTransactionList::OnTransactionTypeSetfocus(){
	
}*/
/*void CCancerStorageTransactionList::OnTransactionTypeKillfocus(){
	
}*/
long CCancerStorageTransactionList::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id in('DDO', 'DPO','DMO') "));

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
/*void CCancerStorageTransactionList::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCancerStorageTransactionList::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerStorageTransactionList::OnFromStorageSelendok(){
	 
}
/*void CCancerStorageTransactionList::OnFromStorageSetfocus(){
	
}*/
/*void CCancerStorageTransactionList::OnFromStorageKillfocus(){
	
}*/
long CCancerStorageTransactionList::OnFromStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.AppendFormat(_T(" and msl_type<>'C' "));
	pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szWhere);

	return 0;
}
/*void CCancerStorageTransactionList::OnFromStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCancerStorageTransactionList::OnToDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerStorageTransactionList::OnToDepartmentSelendok(){
	 
}
/*void CStorageTransact m,,,,,,, ,m.ionList::OnToDepartmentSetfocus(){
	
}*/
/*void CCancerStorageTransactionList::OnToDepartmentKillfocus(){
	
}*/
long CCancerStorageTransactionList::OnToDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	pMF->LoadDepartmentList(&m_wndToDepartment, m_szToDepartmentKey, szWhere);

	return 0;
}
/*void CCancerStorageTransactionList::OnToDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

int CCancerStorageTransactionList::OnOrderNOCheckValue(){
	OnListLoadData();
	return 1;
}
void CCancerStorageTransactionList::OnRefreshSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();	
} 
void CCancerStorageTransactionList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	OnViewSelect();	
} 
void CCancerStorageTransactionList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	
}

int CCancerStorageTransactionList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}

int CCancerStorageTransactionList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return OnEditCancerStorageTransactionList();
}

int CCancerStorageTransactionList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return OnDeleteCancerStorageTransactionList();
} 
long CCancerStorageTransactionList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szStatus, szApprovedDate;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szFromStorageKey) > 0){
		szWhere.Format(_T(" AND mt_storage_id=%d "), ToInt(m_szFromStorageKey));
	}

	if(!m_szToDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND mt_department_to_id='%s' "), m_szToDepartmentKey);
	}


	szWhere.AppendFormat(_T(" and (mt_department_id IN ('%s') OR mt_department_to_id IN ('%s', 'A11')) "), pMF->GetDepartmentID(), pMF->GetDepartmentID());

	szWhere.AppendFormat(_T(" and mt_org_id IN('GL','%s') "), pMF->GetModuleID());
	

	if(m_szTransactionTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" and mt_doctype in('DPO', 'DDO','DMO') "));
	else
		szWhere.AppendFormat(_T(" and mt_doctype ='%s' "), m_szTransactionTypeKey);

	
	
	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(mt_orderno) like(chr(37)||lower('%s')||chr(37)) "), m_szOrderNo);
	}
	else
	{
		if(m_nStatus == 0){
			szWhere.AppendFormat(_T(" and mt_status  IN('S','A') "));
			szWhere.AppendFormat(_T(" and (trunc(mt_posteddate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD') or trunc(mt_approveddate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD') )"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);

			if(m_bConfirmed)
			{
				szWhere.AppendFormat(_T(" and mt_isprinted='Y' "));
				
			}
		}
		else if(m_nStatus == 1){
			szWhere.AppendFormat(_T(" and mt_status  IN('O')  "));
			szWhere.AppendFormat(_T(" and trunc(mt_orderdate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD')"), m_szFromDate, m_szToDate);

		}
		else if(m_nStatus == 2){
			szWhere.AppendFormat(_T(" and mt_status  IN('S') "));
			szWhere.AppendFormat(_T(" and trunc(mt_posteddate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD')"), m_szFromDate, m_szToDate);
			if(m_bConfirmed)
			{
				szWhere.AppendFormat(_T(" and mt_isprinted='Y' "));
				
			}
		}
		else if(m_nStatus == 3)
		{
			szWhere.AppendFormat(_T(" and mt_status  IN('A') "));
			szWhere.AppendFormat(_T(" and trunc(mt_approveddate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD')"), m_szFromDate, m_szToDate);
		}

	}
	szWhere.AppendFormat(_T(" AND mt_storage_id IN (%s)"), pMF->m_szStoragePerm);


	szSQL.Format(_T(" SELECT mt_transaction_id, ") \
				_T(" 	mt_orderno,") \
				_T(" 	mt_orderdate,") \
				_T(" 	mt_approveddate,") \
				_T(" 	GET_STORAGENAME(mt_storage_id) as mt_fromstorage, ") \
				_T(" 	mt_department_to_id as mt_department,") \
				_T(" 	mt_deliverydate,") \
				_T(" 	MT_DESCRIPTION, ") \
				_T(" 	mt_status, ") \
				_T("	mt_totalamount, ")\
				_T("	mt_createdby, ")\
				_T("	GET_DOCTYPE(mt_doctype) as doctype, mt_doctype, mt_objecttype, ")\
				_T("	mt_approvedby approvedby") \
				_T("   FROM m_transaction") \
				_T(" WHERE mt_transaction_id > 0  ") \
				_T(" %s ") \
				_T(" ORDER BY mt_orderdate "), 
				szWhere);
	nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	int nIndex = 1;
	CString szDocType, szObjectType;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("mt_status"), szStatus);
		if(szStatus == _T("A"))
		{
			rs.GetValue(_T("mt_approveddate"), szApprovedDate);
		}
		else
		{
			szApprovedDate.Empty();
		}

		tmpStr.Format(_T("%d"), nIndex++);
		
		rs.GetValue(_T("mt_objecttype"), szObjectType);
		rs.GetValue(_T("doctype"), szDocType);
		if(szObjectType == _T("S"))
		{
			szDocType.AppendFormat(_T(" [DV]"));
		}
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("mt_transaction_id")), 
			szDocType, 
			rs.GetValue(_T("mt_orderno")), 
			rs.GetValue(_T("mt_orderdate")), 
			szApprovedDate, 
			rs.GetValue(_T("mt_fromstorage")), 
			rs.GetValue(_T("mt_department")), 
			rs.GetValue(_T("mt_status")), 
			rs.GetValue(_T("mt_description")),   
			rs.GetValue(_T("mt_createby")),   
			rs.GetValue(_T("approvedby")),
			rs.GetValue(_T("mt_doctype")),   
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
void CCancerStorageTransactionList::OnAllSelect(){

	OnListLoadData();
}


void CCancerStorageTransactionList::OnOpeningSelect(){
	OnListLoadData();
}

void CCancerStorageTransactionList::OnSendedSelect(){
	OnListLoadData();
}

void CCancerStorageTransactionList::OnApprovedSelect(){
	OnListLoadData();
}
void CCancerStorageTransactionList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("03.07")))
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

	CStorageTransactionDialog dlg(pMF, VM_VIEW);
	dlg.m_nID = m_nID;
	dlg.m_szTransactionTypeKey = m_wndList.GetItemText(nSel, 1);
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	m_wndList.SetFocus();
} 
void CCancerStorageTransactionList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CStorageTransactionDialog dlg(pMF, VM_ADD);
	dlg.m_szTransactionTypeKey = _T("DPO");
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
}

void CCancerStorageTransactionList::OnAdd2Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CStorageTransactionDialog dlg(pMF, VM_ADD);
	dlg.m_szTransactionTypeKey = _T("DDO");
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
}
void CCancerStorageTransactionList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditCancerStorageTransactionList();
} 
void CCancerStorageTransactionList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteCancerStorageTransactionList();
} 
int CCancerStorageTransactionList::OnAddCancerStorageTransactionList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CCancerStorageTransactionList::OnEditCancerStorageTransactionList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	CStorageTransactionDialog dlg(pMF, VM_EDIT);
//	dlg.m_wndParentWnd = this;
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0;  
}
int CCancerStorageTransactionList::OnDeleteCancerStorageTransactionList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szStatus, szCreatedBy;
	pMF->GetTransactionInfo(m_nID, szCreatedBy, szStatus);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}

	if(!pMF->CheckPermission(_T("03.03")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return 0;
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
 		//OnCancelCancerStorageTransactionList(); 
 	}
	return 0;
}
int CCancerStorageTransactionList::OnSaveCancerStorageTransactionList(){
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
 		//OnCancerStorageTransactionListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CCancerStorageTransactionList::OnCancelCancerStorageTransactionList(){
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
int CCancerStorageTransactionList::OnCancerStorageTransactionListListLoadData(){
	return 0;
}

void CCancerStorageTransactionList::SetImportForm(bool bFlag){
	m_bImportType = bFlag;
}

void CCancerStorageTransactionList::Refresh(){
	if(GetSafeHwnd()){
		OnListLoadData();
	}
}

BEGIN_MESSAGE_MAP(CCancerStorageTransactionList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CCancerStorageTransactionList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	m_wndFromStorage.SetFocus();
}


int CCancerStorageTransactionList::OnCancelOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL;
	return 0;
	szSQL.Format(_T("M_TRANSACTION_CANCELORDER(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int res = str2int(pMF->ExecDML(szSQL));
	if(res <= 0) 
	{
		ShowMessageBox(_T("Cannot cancel order"));
		return -1;
	}
	OnListLoadData();
	return 0;
}

int CCancerStorageTransactionList::OnRecalcOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL;
	szSQL.Format(_T("M_TRANSACTION_RECALCORDER(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int res = str2int(pMF->ExecDML(szSQL));
	if(res <= 0) 
	{
		ShowMessageBox(_T("Cannot cancel order"));
		return -1;
	}
	OnListLoadData();

	return 0;
}


void CCancerStorageTransactionList::OnRollback()
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	m_szTransactionTypeKey = m_wndList.GetItemText(nSel, 11);
	
	if(m_szTransactionTypeKey != _T("DPO") && m_szTransactionTypeKey != _T("DDO"))
	{
		ShowMessageBox(_T("Khong the khoi phuc phieu loai khac(DPO)"));
		return;
	}
	if(!pMF->CheckPermission(_T("05.07")))
	{
		ShowMessageBox(_T("Permission denied."));
		return;
	}
	szSQL.Format(_T("M_TRANSACTION_ROLLBACK(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("L\x1ED7i khi kh\xF4i ph\x1EE5\x63"));
		return;
	}
	ShowMessageBox(_T("Khoi phuc thanh cong"));

}
