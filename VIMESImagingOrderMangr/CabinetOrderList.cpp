#include "CabinetOrderList.h"
#include "HMSMainFrame.h"
#include "CabinetOrder.h"

static void _CCabinetOrderListFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrderList* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrderList *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnTransactionTypeAddNew();
}*/

static void _OnAllOrdersSelectFnc(CWnd *pWnd){
	 (( CCabinetOrderList*)pWnd)->OnAllOrdersSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	 (( CCabinetOrderList*)pWnd)->OnOpeningSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	 (( CCabinetOrderList*)pWnd)->OnApprovedSelect();
}
static void _OnSendingSelectFnc(CWnd *pWnd){
	 (( CCabinetOrderList*)pWnd)->OnSendingSelect();
}

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCabinetOrderList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrderList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrderList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnStatusAddNew();
}*/
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrderList* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrderList *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCabinetOrderList* )pWnd)->OnToStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStorageSelendokFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnToStorageSelendok();
}
/*static void _OnToStorageSetfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnToStorageKillfocus();
}*/
/*static void _OnToStorageKillfocusFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnToStorageKillfocus();
}*/
static long _OnToStorageLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrderList *)pWnd)->OnToStorageLoadData();
}
/*static void _OnToStorageAddNewFnc(CWnd *pWnd){
	((CCabinetOrderList *)pWnd)->OnToStorageAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CCabinetOrderList *pVw = (CCabinetOrderList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCabinetOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCabinetOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCabinetOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCabinetOrderList*)pWnd)->OnListDeleteItem();
}

static int _OnListSelectItemFnc(CWnd *pWnd){
	((CCabinetOrderList*)pWnd)->OnListDblClick();
	return 0;
}
static int _OnRefreshListFnc(CWnd *pWnd){
	 return ((CCabinetOrderList*)pWnd)->OnListLoadData();
}


static void _OnViewSelectFnc(CWnd *pWnd){
	CCabinetOrderList *pVw = (CCabinetOrderList *)pWnd;
	pVw->OnViewSelect();
} 

static int _OnAddCabinetOrderListFnc(CWnd *pWnd){
	 return ((CCabinetOrderList*)pWnd)->OnAddCabinetOrderList();
} 
static int _OnEditCabinetOrderListFnc(CWnd *pWnd){
	 return ((CCabinetOrderList*)pWnd)->OnEditCabinetOrderList();
} 
static int _OnDeleteCabinetOrderListFnc(CWnd *pWnd){
	 return ((CCabinetOrderList*)pWnd)->OnDeleteCabinetOrderList();
} 
static int _OnSaveCabinetOrderListFnc(CWnd *pWnd){
	 return ((CCabinetOrderList*)pWnd)->OnSaveCabinetOrderList();
} 
static int _OnCancelCabinetOrderListFnc(CWnd *pWnd){
	 return ((CCabinetOrderList*)pWnd)->OnCancelCabinetOrderList();
} 
CCabinetOrderList::CCabinetOrderList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 580;
	SetDefaultValues();
	m_wndOrder = NULL;
	
	m_bImportType = false;
}
CCabinetOrderList::~CCabinetOrderList(){
}
void CCabinetOrderList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 240, 5, 960, 90);
	m_wndStatusSheetGroup.Create(this, _T("Status Sheet"), 5, 5, 235, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 245, 30, 335, 55);
	m_wndFromDate.Create(this,340, 30, 435, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 440, 30, 530, 55);
	m_wndToDate.Create(this,535, 30, 630, 55); 
	m_wndTransactionTyleLabel.Create(this, _T("Type"), 635, 30, 725, 55);
	m_wndTransactionType.Create(this,730, 30, 925, 55); 
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 245, 60, 335, 85);
	m_wndFromStorage.Create(this,340, 60, 630, 85); 
	m_wndToStorageLabel.Create(this, _T("To Storage"), 635, 60, 725, 85);
	m_wndToStorage.Create(this,730, 60, 925, 85); 
	m_wndRefresh.Create(this, _T("@"), 930, 60, 955, 85);
	m_wndAllOrders.Create(this, _T("All Orders"), 10, 30, 110, 55);
	m_wndOpening.Create(this, _T("Opening"), 10, 60, 110, 85);
	m_wndApproved.Create(this, _T("Approved"), 115, 30, 213, 55);
	m_wndSending.Create(this, _T("Sending"), 115, 60, 213, 85);
	m_wndOrderList.Create(this, _T("Order List"), 5, 95, 960, 565);
	m_wndList.Create(this, 10, 120, 955, 560);
	
	m_wndStatus.Create(this, 0, 0, 0, 0);
	m_wndStatus.ShowWindow(SW_HIDE);
	m_wndStatus.EnableWindow(FALSE);
}
void CCabinetOrderList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
//	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(35);
//	m_wndToStorage.SetCheckValue(true);
	m_wndToStorage.LimitText(16);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndToStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTransactionType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	//m_wndList.SetAutoIndex(TRUE);
	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //transaction_id
	m_wndList.InsertColumn(1, _T("ORDERTYPE"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("ORDERNO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Approved Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(5, _T("From Storage"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(6, _T("To Storage"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(8, _T("Created By"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Description"), CFMT_TEXT, 190);
}
void CCabinetOrderList::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
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

	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _CCabinetOrderListFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);

	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndAllOrders.SetEvent(WE_CLICK, _OnAllOrdersSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndApproved.SetEvent(WE_CLICK, _OnApprovedSelectFnc);
	m_wndSending.SetEvent(WE_CLICK, _OnSendingSelectFnc);

	//Layout
/*
	AddLayoutControl(&m_wndOrderList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndFromDate, WS_RESIZEX, 100, 100, 25, 100);
	AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 25, 100, 100, 100);
	AddLayoutControl(&m_wndToDate, WS_REPOSX|WS_RESIZEX, 25, 100, 25, 100);
	AddLayoutControl(&m_wndStatusLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndStatus, WS_REPOSX|WS_RESIZEX, 50, 100, 50, 100);
	AddLayoutControl(&m_wndFromStorage, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndToStorageLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndToStorage, WS_REPOSX|WS_RESIZEX, 50, 100, 50, 100);
	AddLayoutControl(&m_wndRefresh, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	*/
	m_wndList.SetWindowText(_T("Order List"));
	m_wndList.AddEvent(1, _T("Select"), _OnListSelectItemFnc, 0, VK_RETURN);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Refresh"), _OnRefreshListFnc, 0, VK_F5);
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();

	
	SetWindowName(_T("CabinetOrderList"));

	m_nStatus = 0;
	SetMode(VM_VIEW);
	OnListLoadData();
}
void CCabinetOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	//DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToStorage.GetDlgCtrlID(), m_szToStorageKey);
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_Radio(pDX, m_wndAllOrders.GetDlgCtrlID(), m_nStatus);
}
void CCabinetOrderList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCabinetOrderList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CCabinetOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_szFromStorageKey.Empty();
	m_szToStorageKey.Empty();

}
int CCabinetOrderList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
 		return nOldMode; 
}
/*void CCabinetOrderList::OnFromDateChange(){
	
} */
/*void CCabinetOrderList::OnFromDateSetfocus(){
	
} */
/*void CCabinetOrderList::OnFromDateKillfocus(){
	
} */
int CCabinetOrderList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CCabinetOrderList::OnToDateChange(){
	
} */
/*void CCabinetOrderList::OnToDateSetfocus(){
	
} */
/*void CCabinetOrderList::OnToDateKillfocus(){
	
} */
int CCabinetOrderList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
} 
void CCabinetOrderList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CCabinetOrderList::OnStatusSelendok(){
	 
}
/*void CCabinetOrderList::OnStatusSetfocus(){
	
}*/
/*void CCabinetOrderList::OnStatusKillfocus(){
	
}*/
long CCabinetOrderList::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	
	m_wndStatus.DeleteAllItems(); 

	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		if(m_szStatusKey == _T("A")){
			TranslateString(_T("Accepted"), tmpStr);			
		}
		else if(m_szStatusKey == _T("S"))
		{
			TranslateString(_T("Sended"), tmpStr);			
		}
		else
		{
			TranslateString(_T("Opening"), tmpStr);			
		}
		m_wndStatus.AddItems(m_szStatusKey, tmpStr, NULL);
		return 1;
	};
	TranslateString(_T("Opening"), tmpStr);		
	m_wndStatus.AddItems(_T("O"), tmpStr, NULL);	
	TranslateString(_T("Sended"), tmpStr);		
	m_wndStatus.AddItems(_T("S"), tmpStr, NULL);	
	TranslateString(_T("Approval"), tmpStr);		
	m_wndStatus.AddItems(_T("A"), tmpStr, NULL);	
	
	return 2;

}
/*void CCabinetOrderList::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CCabinetOrderList::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CCabinetOrderList::OnFromStorageSelendok(){
	 OnListLoadData();
}
/*void CCabinetOrderList::OnFromStorageSetfocus(){
	
}*/
/*void CCabinetOrderList::OnFromStorageKillfocus(){
	
}*/
long CCabinetOrderList::OnFromStorageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szWhere;
	if(str2int(m_szToStorageKey) > 0)
		szWhere.Format(_T(" AND msl_storage_id<>%d "), str2int(m_szToStorageKey));
	szWhere.AppendFormat(_T(" and msl_type<>'C' "));
	pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey, szWhere);

	return 0;
}
/*void CCabinetOrderList::OnFromStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CCabinetOrderList::OnToStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CCabinetOrderList::OnToStorageSelendok(){
	 OnListLoadData();
}
/*void CCabinetOrderList::OnToStorageSetfocus(){
	
}*/
/*void CCabinetOrderList::OnToStorageKillfocus(){
	
}*/
long CCabinetOrderList::OnToStorageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szWhere;
	if(str2int(m_szFromStorageKey) > 0)
		szWhere.Format(_T(" and msl_storage_id <> %d "), str2int(m_szFromStorageKey));

	szWhere.AppendFormat(_T(" and msl_type <> 'C' "));
	szWhere.AppendFormat(_T(" and msl_storage_id in(%s) "), pMF->m_szStoragePerm);

	pMF->LoadStorageList(&m_wndToStorage, m_szToStorageKey, szWhere);

	return 0;
}
/*void CCabinetOrderList::OnToStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CCabinetOrderList::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CCabinetOrderList::OnTransactionTypeSelendok(){
	 OnListLoadData();
}
/*void CCabinetOrderList::OnTransactionTypeSetfocus(){
	
}*/
/*void CCabinetOrderList::OnTransactionTypeKillfocus(){
	
}*/
long CCabinetOrderList::OnTransactionTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and addt_doctype_id in('CRO', 'CSO') "));

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
/*void CCabinetOrderList::OnTransactionTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CCabinetOrderList::OnRefreshSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
} 
void CCabinetOrderList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	long m_nID = ToLong(m_wndList.GetItemText(nSel, 0));	
	((CCabinetOrder*)m_wndOrder)->m_nID = m_nID;
	((CCabinetOrder*)m_wndOrder)->GetDataToScreen();
	((CGuiTabCtrl*)GetParent())->SetCurSel(1);
} 
void CCabinetOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	
} 
int CCabinetOrderList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCabinetOrderList::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CString szDeptID;

	UpdateData(true);

	szDeptID = pMF->m_UserInfo.su_deptid;

	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szFromStorageKey) > 0){
		szWhere.Format(_T(" AND mt_storage_id=%d "), ToInt(m_szFromStorageKey));
	}

	if(ToInt(m_szToStorageKey) > 0){
		szWhere.AppendFormat(_T(" AND mt_storage_to_id=%d "), ToInt(m_szToStorageKey));
	}
		
	szWhere.AppendFormat(_T(" and mt_org_id in('GL', '%s') "), pMF->GetModuleID());
	
	szWhere.AppendFormat(_T(" and (mt_department_to_id='%s' or mt_department_id='%s' )  "), 
		szDeptID, szDeptID);

	if(!m_szTransactionTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" and mt_doctype ='%s' "), m_szTransactionTypeKey);
	else
		szWhere.AppendFormat(_T(" and mt_doctype in('CSO', 'CRO') "));

	if(m_nStatus == 0)
	{
		szWhere.AppendFormat(_T(" AND mt_status IN('O','S','A') "));
	}else if(m_nStatus == 1 ){		
		szWhere.AppendFormat(_T(" AND mt_status='O' "));
	}
	else if(m_nStatus == 2 ){
		szWhere.AppendFormat(_T(" AND mt_status IN('A') "));
	}
	else if(m_nStatus == 3){
		szWhere.AppendFormat(_T(" AND mt_status='S' "));
	}


	szSQL.Format(_T(" SELECT mt_transaction_id, ") \
				_T(" Get_DOCTYPE(mt_doctype) as ordertype, ") \
				_T(" 	mt_orderno,") \
				_T(" 	mt_orderdate,") \
				_T(" 	GET_STORAGENAME(mt_storage_id) as mt_fromstorage, ") \
				_T(" 	GET_STORAGENAME(mt_storage_to_id) as mt_tostorage,") \
				_T(" 	mt_deliverydate,") \
				_T(" 	MT_DESCRIPTION, ") \
				_T(" 	mt_status, ") \
				_T("	mt_totalamount, ")\
				_T("	mt_createdby ")\
				_T("   FROM m_transaction") \
				_T(" WHERE trunc(mt_orderdate) BETWEEN TO_DATE('%s', 'YYYY-MM-DD') AND TO_DATE('%s', 'YYYY-MM-DD') ") \
				_T(" %s ") \
				_T(" ORDER BY mt_transaction_id "),
				m_szFromDate, m_szToDate,  szWhere);
	nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			rs.GetValue(_T("mt_transaction_id")), 
			rs.GetValue(_T("ordertype")), 
			rs.GetValue(_T("mt_orderno")), 
			rs.GetValue(_T("mt_orderdate")), 
			rs.GetValue(_T("mt_deliverydate")), 
			rs.GetValue(_T("mt_fromstorage")), 
			rs.GetValue(_T("mt_tostorage")), 
			rs.GetValue(_T("mt_status")), 
			rs.GetValue(_T("mt_createdby")), 
			rs.GetValue(_T("mt_description")),      			
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CCabinetOrderList::OnViewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}

} 

int CCabinetOrderList::OnAddCabinetOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CCabinetOrderList::OnEditCabinetOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CCabinetOrderList::OnDeleteCabinetOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelCabinetOrderList(); 
 	}
	return 0;
}
int CCabinetOrderList::OnSaveCabinetOrderList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 		//OnCabinetOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CCabinetOrderList::OnCancelCabinetOrderList(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CCabinetOrderList::OnCabinetOrderListListLoadData(){
	return 0;
}

void CCabinetOrderList::SetImportForm(bool bFlag){
	m_bImportType = bFlag;
}

void CCabinetOrderList::Refresh(){
	if(GetSafeHwnd()){
		OnListLoadData();
	}
}

void  CCabinetOrderList::OnAllOrdersSelect(){
	UpdateData(true);
	m_nStatus = 0;
	OnListLoadData();
}
void  CCabinetOrderList::OnOpeningSelect(){
	UpdateData(true);
	m_nStatus = 1;
	OnListLoadData();
}
void  CCabinetOrderList::OnApprovedSelect(){
	UpdateData(true);
	m_nStatus = 2;
	OnListLoadData();
}
void  CCabinetOrderList::OnSendingSelect(){
	UpdateData(true);
	m_nStatus = 3;
	OnListLoadData();
}


BEGIN_MESSAGE_MAP(CCabinetOrderList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CCabinetOrderList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	m_wndFromDate.SetFocus();
}
