#include "StorageMovementList.h"
#include "MainFrame_E10.h"
#include "StorageMovementDialog.h"
#include ".\storagemovementlist.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementList* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementList *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementList* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementList *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageMovementList* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementList *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnToStorageAddNew();
}*/

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageMovementList *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageMovementList *)pWnd)->OnOrderNoCheckValue();
} 

static void _OnRefreshSelectFnc(CWnd *pWnd){
	CStorageMovementList *pVw = (CStorageMovementList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageMovementList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageMovementList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageMovementList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListSelectItemFnc(CWnd *pWnd){
	((CStorageMovementList*)pWnd)->OnListDblClick();
	return 0;
}
static int _OnListAddItemFnc(CWnd *pWnd){
	return ((CStorageMovementList*)pWnd)->OnAddStorageMovementList();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	return ((CStorageMovementList*)pWnd)->OnEditStorageMovementList();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageMovementList*)pWnd)->OnListDeleteItem();
}
static int _OnRefreshListFnc(CWnd *pWnd){
	 return ((CStorageMovementList*)pWnd)->OnListLoadData();
}

static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CStorageMovementList*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CStorageMovementList*)pWnd)->OnOpeningSelect();
}
static void _OnSendedSelectFnc(CWnd *pWnd){
	  ((CStorageMovementList*)pWnd)->OnSendedSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	  ((CStorageMovementList*)pWnd)->OnApprovedSelect();
}


static void _OnViewSelectFnc(CWnd *pWnd){
	CStorageMovementList *pVw = (CStorageMovementList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageMovementList *pVw = (CStorageMovementList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageMovementList *pVw = (CStorageMovementList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageMovementList *pVw = (CStorageMovementList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddStorageMovementListFnc(CWnd *pWnd){
	 return ((CStorageMovementList*)pWnd)->OnAddStorageMovementList();
} 
static int _OnEditStorageMovementListFnc(CWnd *pWnd){
	 return ((CStorageMovementList*)pWnd)->OnEditStorageMovementList();
} 
static int _OnDeleteStorageMovementListFnc(CWnd *pWnd){
	 return ((CStorageMovementList*)pWnd)->OnDeleteStorageMovementList();
} 
static int _OnSaveStorageMovementListFnc(CWnd *pWnd){
	 return ((CStorageMovementList*)pWnd)->OnSaveStorageMovementList();
} 
static int _OnCancelStorageMovementListFnc(CWnd *pWnd){
	 return ((CStorageMovementList*)pWnd)->OnCancelStorageMovementList();
} 
CStorageMovementList::CStorageMovementList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 580;
	SetDefaultValues();
	m_wndOrder = NULL;
	
}
CStorageMovementList::~CStorageMovementList(){
}
void CStorageMovementList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndOrderList.Create(this, _T("Order List"), 5, 95, 810, 590);
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 10, 30, 100, 55);
	m_wndFromStorage.Create(this,105, 30, 395, 55); 
	m_wndToStorageLabel.Create(this, _T("To Storage"), 400, 30, 490, 55);
	m_wndToStorage.Create(this,495, 30, 775, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 395, 85); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 400, 60, 490, 85);
	m_wndOrderNo.Create(this,495, 60, 775, 85); 
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

	m_wndTransactionType.Create(this, 0, 0, 0, 0);
	m_wndTransactionType.ShowWindow(SW_HIDE);
	m_wndTransactionType.EnableWindow(FALSE);

}
void CStorageMovementList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndTransactionType.SetCheckValue(true);
//	m_wndTransactionType.LimitText(35);
//	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(35);
//	m_wndToStorage.SetCheckValue(true);
	m_wndToStorage.LimitText(16);

	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndOrderNo.LimitText(10);
	m_wndOrderNo.SetNotEmpty(true);


	

//	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
//	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndToStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndList.SetAutoIndex(TRUE);
	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transaction_id
	m_wndList.InsertColumn(1, _T("ORDERTYPE"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(2, _T("ORDERNO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Approved Date"), CFMT_DATETIME, 0);
	m_wndList.InsertColumn(5, _T("From Storage"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("To Storage"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndList.InsertColumn(8, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(9, _T("Created By"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("Approved By"), CFMT_TEXT, 80);
}
void CStorageMovementList::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
//	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
//	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
//	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);
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
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);

	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndSended.SetEvent(WE_CLICK, _OnSendedSelectFnc);
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
	AddLayoutControl(&m_wndTransactionTypeLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndTransactionType, WS_REPOSX|WS_RESIZEX, 50, 100, 50, 100);
	AddLayoutControl(&m_wndFromStorage, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndToStorageLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndToStorage, WS_REPOSX|WS_RESIZEX, 50, 100, 50, 100);
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
}
void CStorageMovementList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
//	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToStorage.GetDlgCtrlID(), m_szToStorageKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nStatus);
}
void CStorageMovementList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageMovementList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CStorageMovementList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTransactionTypeKey = _T("MOV");
	m_szFromStorageKey.Empty();
	m_szToStorageKey.Empty();

}
int CStorageMovementList::SetMode(int nMode){
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
 		UpdateData(FALSE); 
		if(m_bImportForm)
		{
			m_wndAdd.EnableWindow(FALSE);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
		}
		
 		return nOldMode; 
}
/*void CStorageMovementList::OnFromDateChange(){
	
} */
/*void CStorageMovementList::OnFromDateSetfocus(){
	
} */
/*void CStorageMovementList::OnFromDateKillfocus(){
	
} */
int CStorageMovementList::OnFromDateCheckValue(){
	return 0;
} 
/*void CStorageMovementList::OnToDateChange(){
	
} */
/*void CStorageMovementList::OnToDateSetfocus(){
	
} */
/*void CStorageMovementList::OnToDateKillfocus(){
	
} */
int CStorageMovementList::OnToDateCheckValue(){
	return 0;
} 
void CStorageMovementList::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageMovementList::OnTransactionTypeSelendok(){
	 
}
/*void CStorageMovementList::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageMovementList::OnTransactionTypeKillfocus(){
	
}*/
long CStorageMovementList::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and addt_doctype_id IN('MOV' "));

	return pMF->LoadTransactionTypeList(&m_wndTransactionType, m_szTransactionTypeKey, szWhere);

}
/*void CStorageMovementList::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageMovementList::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageMovementList::OnFromStorageSelendok(){
	 
}
/*void CStorageMovementList::OnFromStorageSetfocus(){
	
}*/
/*void CStorageMovementList::OnFromStorageKillfocus(){
	
}*/
long CStorageMovementList::OnFromStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	if(str2int(m_szToStorageKey) > 0)
		szWhere.Format(_T(" AND msl_storage_id<>%d "), str2int(m_szToStorageKey));

	szWhere.AppendFormat(_T(" and msl_type<>'C' "));
	pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szWhere);

	return 0;
}
/*void CStorageMovementList::OnFromStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageMovementList::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageMovementList::OnToStorageSelendok(){
	 
}
/*void CStorageMovementList::OnToStorageSetfocus(){
	
}*/
/*void CStorageMovementList::OnToStorageKillfocus(){
	
}*/
long CStorageMovementList::OnToStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	if(str2int(m_szFromStorageKey) > 0)
		szWhere.Format(_T(" and msl_storage_id<>%d "), str2int(m_szFromStorageKey));

	szWhere.AppendFormat(_T(" and msl_type<>'C' "));

	pMF->LoadStorageList(&m_wndToStorage, m_szToStorageKey, szWhere);

	return 0;
}
/*void CStorageMovementList::OnToStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

/*void CStorageMovementList::OnOrderNoChange(){
	
} */
/*void CStorageMovementList::OnOrderNoSetfocus(){
	
} */
/*void CStorageMovementList::OnOrderNoKillfocus(){
	
} */
int CStorageMovementList::OnOrderNoCheckValue(){
	OnListLoadData();
	return 1;
} 


void CStorageMovementList::OnRefreshSelect(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();	
} 
void CStorageMovementList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	OnViewSelect();	
} 
void CStorageMovementList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	
} 
int CStorageMovementList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageMovementList();
	return 0;
} 
long CStorageMovementList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szFromStorageKey) > 0){
		szWhere.Format(_T(" AND mt_storage_id=%d "), ToInt(m_szFromStorageKey));
	}

	if(ToInt(m_szToStorageKey) > 0){
		szWhere.AppendFormat(_T(" AND mt_storage_to_id=%d "), ToInt(m_szToStorageKey));
	}

	if(!m_szTransactionTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" and mt_doctype='%s' "), m_szTransactionTypeKey);
	
	switch(m_nStatus){
	case 0:
		szWhere.AppendFormat(_T(" and (mt_status IN('S','A') OR (mt_status='O' and mt_department_id='%s') )"), pMF->GetDepartmentID());
		break;
	case 1:
		szWhere.AppendFormat(_T(" and mt_status='O' "));
		break;
	case 2:
		szWhere.AppendFormat(_T(" and mt_status='S' "));
		break;
	case 3:
		szWhere.AppendFormat(_T(" and mt_status='A' "));
		break;
	}

	szWhere.AppendFormat(_T(" and mt_org_id in('GL', '%s') "), pMF->GetModuleID());
	
	szWhere.AppendFormat(_T(" and mt_doctype in('MOV', 'MRO') "));
	
	szWhere.AppendFormat(_T(" and (mt_department_id ='%s' OR mt_department_to_id='%s' OR (mt_department_id <>'%s' and mt_department_to_id <> '%s' and mt_org_id='%s') ) ")
		, pMF->GetDepartmentID(), pMF->GetDepartmentID(),pMF->GetDepartmentID(), pMF->GetDepartmentID(),pMF->GetModuleID()  );

	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(mt_orderno) like(chr(37)||lower('%s')||chr(37)) "), m_szOrderNo);
	}
	szWhere.AppendFormat(_T(" AND (mt_storage_id IN (%s) OR mt_storage_to_id IN (%s))"), pMF->m_szStoragePerm, pMF->m_szStoragePerm);
	szSQL.Format(_T(" SELECT mt_transaction_id, ") \
				_T(" Get_DOCTYPE(mt_doctype) as ordertype, ") \
				_T(" 	mt_orderno,") \
				_T(" 	mt_orderdate,") \
				_T("	mt_approveddate,") \
				_T(" 	GET_STORAGENAME(mt_storage_id) as mt_fromstorage, ") \
				_T(" 	GET_STORAGENAME(mt_storage_to_id) as mt_tostorage,") \
				_T(" 	mt_deliverydate,") \
				_T(" 	MT_DESCRIPTION, ") \
				_T(" 	mt_status, ") \
				_T("	mt_totalamount, ")\
				_T("	mt_createdby, ")\
				_T("	mt_approvedby approvedby") \
				_T("   FROM m_transaction") \
				_T(" WHERE trunc_date(mt_orderdate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD') ") \
				_T(" %s ") \
				_T(" ORDER BY mt_transaction_id "),
				m_szFromDate, m_szToDate,  szWhere);
	nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	int nIndex = 1;
	CString szStatus;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("mt_status"), szStatus);
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("mt_transaction_id")), 
			rs.GetValue(_T("ordertype")), 
			rs.GetValue(_T("mt_orderno")), 
			rs.GetValue(_T("mt_orderdate")), 
			rs.GetValue(_T("mt_approveddate")), 
			rs.GetValue(_T("mt_fromstorage")), 
			rs.GetValue(_T("mt_tostorage")), 
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


void CStorageMovementList::OnAllSelect(){
	OnListLoadData();
}
void CStorageMovementList::OnOpeningSelect(){
	OnListLoadData();
}
void CStorageMovementList::OnSendedSelect(){
	OnListLoadData();
}
void CStorageMovementList::OnApprovedSelect(){
	OnListLoadData();
}


void CStorageMovementList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("02.06")))
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

	CStorageMovementDialog dlg(pMF, VM_VIEW);
	dlg.m_bImport = m_bImportForm;
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
	}

	m_wndList.SetFocus();
} 
void CStorageMovementList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageMovementList();
} 
void CStorageMovementList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageMovementList();
} 
void CStorageMovementList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageMovementList();
} 
int CStorageMovementList::OnAddStorageMovementList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("02.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}
	CStorageMovementDialog dlg(pMF, VM_ADD);
	if(dlg.DoModal() == IDOK){
	}	
	return 0; 
}
int CStorageMovementList::OnEditStorageMovementList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("02.02")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

	CStorageMovementDialog dlg(pMF, VM_EDIT);
//	dlg.m_wndParentWnd = this;
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
	}
	return 0;  
}
int CStorageMovementList::OnDeleteStorageMovementList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("02.03")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

 	CString szSQL, szCreatedBy, szStatus;
	pMF->GetTransactionInfo(m_nID, szCreatedBy, szStatus);
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}
	if(!pMF->CheckPermission(_T("02.03")))
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
 		//OnDiscardStorageMovementDialog(); 
 	}
	return 0;
}
int CStorageMovementList::OnSaveStorageMovementList(){
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
 		//OnStorageMovementListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CStorageMovementList::OnCancelStorageMovementList(){
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
int CStorageMovementList::OnStorageMovementListListLoadData(){
	return 0;
}

void CStorageMovementList::SetImportForm(bool bFlag){
	m_bImportForm = bFlag;
}

void CStorageMovementList::Refresh(){
	if(GetSafeHwnd()){
		OnListLoadData();
	}
}

BEGIN_MESSAGE_MAP(CStorageMovementList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CStorageMovementList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	m_wndFromStorage.SetFocus();
}

void CStorageMovementList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndOrderList, 100, 100);
	
	AddBottom(&m_wndAll);
	AddBottom(&m_wndOpening);
	AddBottom(&m_wndSended);
	AddBottom(&m_wndApproved);
	AddBottom(&m_wndView);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
	
}