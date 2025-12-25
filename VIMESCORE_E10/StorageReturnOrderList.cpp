#include "StorageReturnOrderList.h"
#include "MainFrame_E10.h"
#include "StorageReturnOrderDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageReturnOrderList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderList* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderList *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnImportStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderList* )pWnd)->OnImportStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnImportStorageSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnImportStorageSelendok();
}
/*static void _OnImportStorageSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnImportStorageKillfocus();
}*/
/*static void _OnImportStorageKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnImportStorageKillfocus();
}*/
static long _OnImportStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderList *)pWnd)->OnImportStorageLoadData();
}
/*static void _OnImportStorageAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnImportStorageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageReturnOrderList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageReturnOrderList *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CStorageReturnOrderList *pVw = (CStorageReturnOrderList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageReturnOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageReturnOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageReturnOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListAddItemFnc(CWnd *pWnd){
	return ((CStorageReturnOrderList*)pWnd)->OnAddStorageReturnOrderList();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	return ((CStorageReturnOrderList*)pWnd)->OnEditStorageReturnOrderList();
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderList*)pWnd)->OnListDeleteItem();
}

static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CStorageReturnOrderList*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CStorageReturnOrderList*)pWnd)->OnOpeningSelect();
}
static void _OnSendedSelectFnc(CWnd *pWnd){
	  ((CStorageReturnOrderList*)pWnd)->OnSendedSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	  ((CStorageReturnOrderList*)pWnd)->OnApprovedSelect();
}

static int _OnListSelectItemFnc(CWnd *pWnd){
	((CStorageReturnOrderList*)pWnd)->OnListDblClick();
	return 0;
}
static int _OnRefreshListFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderList*)pWnd)->OnListLoadData();
}


static void _OnViewSelectFnc(CWnd *pWnd){
	CStorageReturnOrderList *pVw = (CStorageReturnOrderList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageReturnOrderList *pVw = (CStorageReturnOrderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageReturnOrderList *pVw = (CStorageReturnOrderList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageReturnOrderList *pVw = (CStorageReturnOrderList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddStorageReturnOrderListFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderList*)pWnd)->OnAddStorageReturnOrderList();
} 
static int _OnEditStorageReturnOrderListFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderList*)pWnd)->OnEditStorageReturnOrderList();
} 
static int _OnDeleteStorageReturnOrderListFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderList*)pWnd)->OnDeleteStorageReturnOrderList();
} 
static int _OnSaveStorageReturnOrderListFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderList*)pWnd)->OnSaveStorageReturnOrderList();
} 
static int _OnCancelStorageReturnOrderListFnc(CWnd *pWnd){
	 return ((CStorageReturnOrderList*)pWnd)->OnCancelStorageReturnOrderList();
} 
CStorageReturnOrderList::CStorageReturnOrderList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_wndOrder = NULL;
	m_bImportType = false;
	SetWindowName(_T("StorageReturnOrderList"));
}
CStorageReturnOrderList::~CStorageReturnOrderList(){
}
void CStorageReturnOrderList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 90);
	m_wndOrderList.Create(this, _T("Order List"), 5, 95, 810, 590);
	m_wndImportStorageLabel.Create(this, _T("Import Storage"), 10, 30, 100, 55);
	m_wndImportStorage.Create(this,105, 30, 395, 55); 
	m_wndDepartmentLabel.Create(this, _T("Return Department"), 400, 30, 490, 55);
	m_wndDepartment.Create(this,495, 30, 775, 55); 
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
void CStorageReturnOrderList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndTransactionType.SetCheckValue(true);
	m_wndTransactionType.LimitText(35);
//	m_wndImportStorage.SetCheckValue(true);
	m_wndImportStorage.LimitText(35);
//	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(16);

	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndOrderNo.LimitText(10);
	m_wndOrderNo.SetNotEmpty(true);



	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndImportStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndImportStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_NUMBER, 80);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);



	m_wndList.SetAutoIndex(TRUE);
	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transaction_id
	m_wndList.InsertColumn(1, _T("ORDERTYPE"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("ORDERNO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Approved Date"), CFMT_DATETIME, 0);
	m_wndList.InsertColumn(5, _T("Import Storage"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Return Department"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(8, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(9, _T("Created By"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("Approved By"), CFMT_TEXT, 80);

	m_wndSended.SetCheck(true);

}
void CStorageReturnOrderList::OnSetWindowEvents(){
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
	m_wndImportStorage.SetEvent(WE_SELENDOK, _OnImportStorageSelendokFnc);
	//m_wndImportStorage.SetEvent(WE_SETFOCUS, _OnImportStorageSetfocusFnc);
	//m_wndImportStorage.SetEvent(WE_KILLFOCUS, _OnImportStorageKillfocusFnc);
	m_wndImportStorage.SetEvent(WE_SELCHANGE, _OnImportStorageSelectChangeFnc);
	m_wndImportStorage.SetEvent(WE_LOADDATA, _OnImportStorageLoadDataFnc);
	//m_wndImportStorage.SetEvent(WE_ADDNEW, _OnImportStorageAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
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
	AddLayoutControl(&m_wndStatusLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndTransactionType, WS_REPOSX|WS_RESIZEX, 50, 100, 50, 100);
	AddLayoutControl(&m_wndImportStorage, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndDepartmentLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndDepartment, WS_REPOSX|WS_RESIZEX, 50, 100, 50, 100);
	AddLayoutControl(&m_wndRefresh, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	*/
	m_wndList.SetWindowText(_T("Order List"));
	m_wndList.AddEvent(1, _T("Select Sheet"), _OnListSelectItemFnc, 0, VK_SPACE);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Add Sheet"), _OnListAddItemFnc, 0, 0);
	m_wndList.AddEvent(3, _T("Edit Sheet"), _OnListEditItemFnc, 0, 0);
	m_wndList.AddEvent(4, _T("Delete Sheet"), _OnListDeleteItemFnc, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Refresh"), _OnRefreshListFnc, 0, VK_F5);
	CMainFrame_E10 *pMF = (CMainFrame_E10*)AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
}
void CStorageReturnOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndImportStorage.GetDlgCtrlID(), m_szImportStorageKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CStorageReturnOrderList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageReturnOrderList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CStorageReturnOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTransactionTypeKey.Empty();
	m_szImportStorageKey.Empty();
	m_szDepartmentKey.Empty();
	m_szOrderNo.Empty();
	m_szStatus = _T("S");

}
int CStorageReturnOrderList::SetMode(int nMode){
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
/*void CStorageReturnOrderList::OnFromDateChange(){
	
} */
/*void CStorageReturnOrderList::OnFromDateSetfocus(){
	
} */
/*void CStorageReturnOrderList::OnFromDateKillfocus(){
	
} */
int CStorageReturnOrderList::OnFromDateCheckValue(){
	return 0;
} 
/*void CStorageReturnOrderList::OnToDateChange(){
	
} */
/*void CStorageReturnOrderList::OnToDateSetfocus(){
	
} */
/*void CStorageReturnOrderList::OnToDateKillfocus(){
	
} */
int CStorageReturnOrderList::OnToDateCheckValue(){
	return 0;
} 
void CStorageReturnOrderList::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderList::OnTransactionTypeSelendok(){
	 
}
/*void CStorageReturnOrderList::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageReturnOrderList::OnTransactionTypeKillfocus(){
	
}*/
long CStorageReturnOrderList::OnTransactionTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;

	
	szFilter.Format(_T(" and addt_doctype_id in('DRO') "));

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
/*void CStorageReturnOrderList::OnTransactionTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageReturnOrderList::OnImportStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderList::OnImportStorageSelendok(){
	 
}
/*void CStorageReturnOrderList::OnImportStorageSetfocus(){
	
}*/
/*void CStorageReturnOrderList::OnImportStorageKillfocus(){
	
}*/
long CStorageReturnOrderList::OnImportStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	if(str2int(m_szDepartmentKey) > 0)
		szWhere.Format(_T(" AND msl_storage_id<>%d "), str2int(m_szDepartmentKey));
	szWhere.AppendFormat(_T(" and msl_type<>'C' "));
	pMF->LoadStorageList(&m_wndImportStorage, m_szImportStorageKey, szWhere);

	return 0;
}
/*void CStorageReturnOrderList::OnImportStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageReturnOrderList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageReturnOrderList::OnDepartmentSelendok(){
	 
}
/*void CStorageReturnOrderList::OnDepartmentSetfocus(){
	
}*/
/*void CStorageReturnOrderList::OnDepartmentKillfocus(){
	
}*/
long CStorageReturnOrderList::OnDepartmentLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadDepartmentList(&m_wndDepartment, m_szDepartmentKey);

	return 0;
}
/*void CStorageReturnOrderList::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageReturnOrderList::OnRefreshSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();	
} 
void CStorageReturnOrderList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	OnViewSelect();	
} 
void CStorageReturnOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	
} 
int CStorageReturnOrderList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageReturnOrderList();
	 return 0;
} 
long CStorageReturnOrderList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szImportStorageKey) > 0){
		szWhere.Format(_T(" AND mt_storage_to_id=%d "), ToInt(m_szImportStorageKey));
	}

	szWhere.AppendFormat(_T(" and mt_org_id in('GL','%s') "), pMF->GetModuleID());

	szWhere.AppendFormat(_T(" and mt_doctype in('DRO','MRO','CRO') "));
	if (!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" and mt_department_id = '%s'"), m_szDepartmentKey);

	if (!m_szOrderNo.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(mt_orderno) LIKE (chr(37)||lower('%s')||chr(37))"), m_szOrderNo);

	if (m_szStatus == _T("S"))
		szWhere.AppendFormat(_T(" AND mt_status = 'S'"));
	else if (m_szStatus == _T("O"))
		szWhere.AppendFormat(_T(" AND mt_status = 'O'"));
	else if (m_szStatus == _T("AP"))
		szWhere.AppendFormat(_T(" AND mt_status = 'A'"));
	szWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"), pMF->m_szStoragePerm);
	szSQL.Format(_T(" SELECT mt_transaction_id, ") \
				_T(" 	mt_orderno,") \
				_T(" 	mt_orderdate,") \
				_T(" 	mt_acctdate,") \
				_T("	GET_DOCTYPE(mt_doctype) as doctype, ") \
				_T(" 	GET_STORAGENAME(mt_storage_to_id) as mt_ImportStorage, ") \
				_T(" 	GET_DEPARTMENTNAME(mt_department_id) as mt_department, ") \
				_T(" 	mt_deliverydate,") \
				_T(" 	mt_approveddate,") \
				_T(" 	MT_DESCRIPTION, ") \
				_T(" 	mt_status, ") \
				_T("	mt_totalamount, ")\
				_T("	mt_createdby, mt_objecttype, ")\
				_T("	mt_approvedby approvedby") \
				_T("   FROM m_transaction") \
				_T(" WHERE trunc_date(mt_orderdate) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" %s ") \
				_T(" ORDER BY mt_transaction_id "), 
				m_szFromDate, m_szToDate,  szWhere);
	nCount = rs.ExecSQL(szSQL);
////_fmsg_T("%s"), szSQL);
	CString szStatus, szDocType, szObjectType;
	int nIndex = 1;
	while(!rs.IsEOF()){ 

		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("mt_status"), szStatus);

		rs.GetValue(_T("mt_objecttype"), szObjectType);
		rs.GetValue(_T("doctype"), szDocType);
		if(szObjectType == _T("S"))
		{
			szDocType.AppendFormat(_T(" [DV]"));
		}

		int nItem=	m_wndList.AddItems(
				rs.GetValue(_T("mt_transaction_id")), 
				szDocType,
				rs.GetValue(_T("mt_orderno")), 
				rs.GetValue(_T("mt_orderdate")), 
				rs.GetValue(_T("mt_approveddate")), 
				rs.GetValue(_T("mt_ImportStorage")), 
				rs.GetValue(_T("mt_department")), 
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
void CStorageReturnOrderList::OnAllSelect(){
	m_szStatus = _T("AL");
	OnListLoadData();
}
void CStorageReturnOrderList::OnOpeningSelect(){
	m_szStatus = _T("O");
	OnListLoadData();
}
void CStorageReturnOrderList::OnSendedSelect(){
	m_szStatus = _T("S");
	OnListLoadData();
}
void CStorageReturnOrderList::OnApprovedSelect(){
	m_szStatus = _T("AP");
	OnListLoadData();
}
void CStorageReturnOrderList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("06.06")))
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

	CStorageReturnOrderDialog dlg(pMF, VM_VIEW);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	m_wndList.SetFocus();
} 
void CStorageReturnOrderList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddStorageReturnOrderList();		

} 
void CStorageReturnOrderList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditStorageReturnOrderList();
	
} 
void CStorageReturnOrderList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteStorageReturnOrderList();
} 
int CStorageReturnOrderList::OnAddStorageReturnOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("06.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

	CStorageReturnOrderDialog dlg(pMF, VM_ADD);

	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0; 
}
int CStorageReturnOrderList::OnEditStorageReturnOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("06.02")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}

	CStorageReturnOrderDialog dlg(pMF, VM_EDIT);
//	dlg.m_wndParentWnd = this;
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0;  
}
int CStorageReturnOrderList::OnDeleteStorageReturnOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	if (!pMF->CheckPermission(_T("06.03")))
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

	if(!pMF->CheckPermission(_T("06.03")))
	{
		ShowMessageBox(_T("Permission denined"), MB_OK);
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
 		//OnCancelStorageReturnOrderList(); 
 	}
	return 0;
}
int CStorageReturnOrderList::OnSaveStorageReturnOrderList(){
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
 		//OnStorageReturnOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CStorageReturnOrderList::OnCancelStorageReturnOrderList(){
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
int CStorageReturnOrderList::OnStorageReturnOrderListListLoadData(){
	return 0;
}

void CStorageReturnOrderList::SetImportForm(bool bFlag){
	m_bImportType = bFlag;
}

void CStorageReturnOrderList::Refresh(){
	if(GetSafeHwnd()){
		OnListLoadData();
	}
}

BEGIN_MESSAGE_MAP(CStorageReturnOrderList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CStorageReturnOrderList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	m_wndImportStorage.SetFocus();
}
void CStorageReturnOrderList::OnResizeLayout() {
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