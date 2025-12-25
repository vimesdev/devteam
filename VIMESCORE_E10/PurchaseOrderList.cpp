#include "PurchaseOrderList.h"
#include "MainFrame_E10.h"
#include "PurchaseOrderDialog.h"
#include "PurchaseOrderDialogEx.h"
#include "PurchaseOrderNonStockDialog.h"
#include "PurchaseOrderDialogEx_V2.h"


/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderList *)pWnd)->OnToDateCheckValue();
} 
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderList*)pWnd)->OnStorageLoadData();
}
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderList*)pWnd)->OnStorageSelendok();
}
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderList*)pWnd)->OnSupplierLoadData();
}
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderList*)pWnd)->OnSupplierSelendok();
}
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderList *)pWnd)->OnSearchCheckValue();
} 
static void _OnOptionSelectFnc(CWnd *pWnd){
	CPurchaseOrderList *pVw = (CPurchaseOrderList *)pWnd;
	pVw->OnOptionSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchaseOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchaseOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnListDeleteItem();
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnListAddItem();
}

static int _OnAddPurchaseOrderNonstockFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnAddPurchaseOrderNonStock();
}

static int _OnListLockItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnListLockItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnListEditItem();
}

static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnListViewItem();
}

static int _OnListRollbackKGFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnListRollbackKG();
}

static void _OnViewSelectFnc(CWnd *pWnd){
	CPurchaseOrderList *pVw = (CPurchaseOrderList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchaseOrderList *pVw = (CPurchaseOrderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchaseOrderList *pVw = (CPurchaseOrderList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchaseOrderList *pVw = (CPurchaseOrderList *)pWnd;
	pVw->OnDeleteSelect();
}


static void _OnPaidSelectFnc(CWnd *pWnd){
	CPurchaseOrderList *pVw = (CPurchaseOrderList *)pWnd;
	pVw->OnPaidSelect();
}

static void _OnApprovedSelectFnc(CWnd *pWnd){
	CPurchaseOrderList *pVw = (CPurchaseOrderList *)pWnd;
	pVw->OnApprovalSelect();
}

static void _OnNonStockFlagSelectFnc(CWnd *pWnd){
	 ((CPurchaseOrderList*)pWnd)->OnNonStockFlagSelect();
}

static void _OnLockedSelectFnc(CWnd *pWnd){
	 ((CPurchaseOrderList*)pWnd)->OnLockedSelect();
}
static int _OnAddPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnAddPurchaseOrderList();
} 
static int _OnEditPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnEditPurchaseOrderList();
} 
static int _OnDeletePurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnDeletePurchaseOrderList();
} 
static int _OnSavePurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnSavePurchaseOrderList();
} 
static int _OnCancelPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchaseOrderList*)pWnd)->OnCancelPurchaseOrderList();
} 
CPurchaseOrderList::CPurchaseOrderList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("POO");
}
CPurchaseOrderList::~CPurchaseOrderList(){
}
void CPurchaseOrderList::OnCreateComponents()
{
	m_wndSearchInformation.Create(this, _T("Search Information"), 4, 4, 809, 89);
	m_wndQuoteList.Create(this, _T("Quote List"), 5, 95, 810, 590);
	m_wndFromDate.Create(this,95, 29, 195, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 385, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 390, 30, 470, 55);
	m_wndStorage.Create(this,475, 30, 805, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 90, 85);
	m_wndSupplier.Create(this,95, 60, 385, 85); 
	m_wndSearchLabel.Create(this, _T("Search"), 390, 60, 470, 85);
	m_wndSearch.Create(this,475, 60, 775, 85); 
	m_wndOption.Create(this, _T("@"), 780, 60, 805, 85);
	m_wndList.Create(this,10, 120, 805, 585); 
	m_wndView.Create(this, _T("&View"), 475, 595, 555, 620);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndNonStockFlag.Create(this, _T("HÐ không qua kho"), 10, 595, 150, 620);
	m_wndPaidFlag.Create(this, _T("Is Paid"), 155, 595, 280, 620);
	m_wndApprovedFlag.Create(this, _T("Is Approved"), 285, 595, 370, 620);
	m_wndLocked.Create(this, _T("Locked"), 375, 595, 470, 620);
}
void CPurchaseOrderList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_wndSearch.SetNotEmpty(true);
	m_wndList.SetAutoIndex(TRUE);
	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(1, _T("PO_ID"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("Order Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(3, _T("PO_INVOICENO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("PO_INVOICEDATE"), CFMT_DATE, 90);
	m_wndList.InsertColumn(5, _T("Vendor Name"), CFMT_TEXT, 190);
	m_wndList.InsertColumn(6, _T("Phone"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("Total Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(8, _T("Status"), CFMT_TEXT|CFMT_CENTER, 55);
	m_wndList.InsertColumn(9, _T("Payment"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndList.InsertColumn(10, _T("Creator"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(11, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(13, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(14, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(15, _T(""), CFMT_TEXT, 0);	//storage_id
	m_wndList.InsertColumn(16, _T("Approved By"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(17, _T("Payment No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(18, _T("Paid Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(19, _T("Người khóa sổ"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(20, _T("Liên thông"), CFMT_TEXT, 50);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("Bank ID"));
	m_arFilters.Add(_T("Bank Name"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;

}

void CPurchaseOrderList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndOption.SetEvent(WE_CLICK, _OnOptionSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Purchase Order"));
	m_wndList.AddEvent(1, _T("Add Purchase Order"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(6, _T("Add Purchase Order Nonstock"), _OnAddPurchaseOrderNonstockFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("View"), _OnListViewItemFnc,0, VK_F3);
	if(pMF->GetModuleID() == _T("MA"))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(5, _T("Kh\xF4i ph\x1EE5\x63 h\xF3\x61 \x111\x1A1n nh\x1EADp kho h\xE0ng k\xFD g\x1EEDi"), _OnListRollbackKGFnc);
	}
	//Ticket #2510 Linh cùi
	//m_wndList.AddEvent(7, _T("Lock"), _OnListLockItemFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);

	m_wndPaidFlag.SetEvent(WE_CLICK, _OnPaidSelectFnc);
	m_wndApprovedFlag.SetEvent(WE_CLICK, _OnApprovedSelectFnc);
	m_wndNonStockFlag.SetEvent(WE_CLICK, _OnNonStockFlagSelectFnc);
	m_wndLocked.SetEvent(WE_CLICK, _OnLockedSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderListFnc, 0, 'T', VK_CONTROL);
*/

	if(m_szType == _T("PON"))
	{
		m_wndStorageLabel.ShowWindow(SW_HIDE);
		m_wndStorage.ShowWindow(SW_HIDE);
	}

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);
	OnListLoadData();

}
void CPurchaseOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndPaidFlag.GetDlgCtrlID(), m_bPaidFlag);
	DDX_Check(pDX, m_wndApprovedFlag.GetDlgCtrlID(), m_bApprovedFlag);
	DDX_Check(pDX, m_wndNonStockFlag.GetDlgCtrlID(), m_bNonStockFlag);
	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);
}
void CPurchaseOrderList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CPurchaseOrderList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CPurchaseOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();
	m_bPaidFlag = FALSE;
	m_bApprovedFlag = FALSE;
	m_bNonStockFlag=FALSE;
	m_bLocked = FALSE;
}

int CPurchaseOrderList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, -1); 
			
 			break; 
 		case VM_NONE: 
 			//EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			//SetDefaultValues(); 
 			break; 
 		}; 
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndStorage.EnableWindow(TRUE);
		m_wndSupplier.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndOption.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}

/*void CPurchaseOrderList::OnFromDateChange(){
	
} */
/*void CPurchaseOrderList::OnFromDateSetfocus(){
	
} */
/*void CPurchaseOrderList::OnFromDateKillfocus(){
	
} */
int CPurchaseOrderList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPurchaseOrderList::OnToDateChange(){
	
} */
/*void CPurchaseOrderList::OnToDateSetfocus(){
	
} */
/*void CPurchaseOrderList::OnToDateKillfocus(){
	
} */
int CPurchaseOrderList::OnToDateCheckValue(){
	return 0;
}
long CPurchaseOrderList::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
}
void CPurchaseOrderList::OnStorageSelendok(){
	OnListLoadData();
}

long CPurchaseOrderList::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT adp_partner_id partner_id, adp_name name FROM ad_partner"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndSupplier.DeleteAllItems();
	while (!rs.IsEOF()){
		m_wndSupplier.AddItems(
			rs.GetValue(_T("partner_id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	//return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
void CPurchaseOrderList::OnSupplierSelendok(){
	OnListLoadData();
}

/*void CPurchaseOrderList::OnSearchChange(){
	
} */
/*void CPurchaseOrderList::OnSearchSetfocus(){
	
} */
/*void CPurchaseOrderList::OnSearchKillfocus(){
	
} */
int CPurchaseOrderList::OnSearchCheckValue(){
	OnListLoadData();

	return 1;
}
#include "HMSReportForms/PrintForms.h"
#include "StringToken.h"
void CPurchaseOrderList::OnOptionSelect(){
	//CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//CString szSQL;
	//szSQL.Format(_T(" CREATE OR REPLACE PROCEDURE Tmpprocedure ") \
	//_T(" AS ") \
	//_T(" BEGIN ") \
	//_T("     FOR tmpRec IN (SELECT mil_product_item_id, ") \
	//_T("                           mil_qtyonhand ") \
	//_T("                    FROM   m_inventoryline ") \
	//_T("                    WHERE  mil_inventory_id = 55) LOOP ") \
	//_T("         UPDATE m_storageline ") \
	//_T("         SET    msl_qtyonhand = tmpRec.mil_qtyonhand ") \
	//_T("         WHERE  msl_storage_id = 7 AND msl_product_item_id = tmpRec.mil_product_item_id ") \
	//_T("     END LOOP; ") \
	//_T(" END ");

	////pMF->BeginTransaction();
	//int nRet = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%d"), nRet);
	//if (nRet <= 0)
	//{
	//	pMF->Rollback();
	//	return;
	//}
	//pMF->Commit();

	//UpdateData(true);
	//CPrintForms printer;
	//printer.TM_OnPrintOutpatientTreatmentbyBicarbonat(ToLong(m_szSearch), 1);
	//_debug(_T("%s"), CString(typeid(this).name()));
	OnListLoadData();
	return;
}
 
void CPurchaseOrderList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

}
 
void CPurchaseOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}
 
int CPurchaseOrderList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderList();
	 return 0;
}

int CPurchaseOrderList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddSelect();
	 return 0;
}
int CPurchaseOrderList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditSelect();
	 return 0;
}

int CPurchaseOrderList::OnListViewItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();
	 return 0;
}
int CPurchaseOrderList::OnListRollbackKG(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission denied"));
		return 0;
	}
	CString szSQL;
	szSQL.Format(_T("PURCHASE_ORDER_ROLLBACK_KG(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	switch(ret)
	{
	case -1:
		ShowMessageBox(_T("H\xF3\x61 \x111\x1A1n \x111\x1B0\x1EE3\x63 \x64uy\x1EC7t \x62\x1EDFi ng\x1B0\x1EDDi kh\xE1\x63. Kh\xF4ng \x63ho ph\xE9p kh\xF4i ph\x1EE5\x63"));
		break;
	case -2:
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 th\x61o t\xE1\x63 v\x1EDBi tr\x1EA1ng th\xE1i hi\x1EC7n th\x1EDDi"));
		break;
	case -3:
		ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i h\xF3\x61 \x111\x1A1n h\xE0ng k\xFD g\x1EEDi t\x1B0\x1A1ng \x1EE9ng. \x42\x1EA1n ph\x1EA3i \x78\xF3\x61 h\xF3\x61 \x111\x1A1n h\xE0ng k\xFD g\x1EEDi tr\x1B0\x1EDB\x63"));
		break;
	case -4:
		ShowMessageBox(_T("Phiếu đã bị khóa! Cần mở khóa trước khi thao tác tiếp!"));
		break;
	case -2000:
		ShowMessageBox(_T("\x43\xF3 l\x1ED7i \x78\x1EA3y r\x61 khi kh\xF4i ph\x1EE5\x63(\x44\x41T\x41_NOT_\x46OUN\x44)"));
		break;
	}
	if(ret > 0)
	{
		ShowMessageBox(_T("Kh\xF4i ph\x1EE5\x63 th\xE0nh \x63\xF4ng"));
	}
	OnListLoadData();
	 return 0;
}


long CPurchaseOrderList::OnListLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and po_orderdate between to_timestamp('%s 00:00:00', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);
	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(po_orderno) like lower(chr(37)||'%s'||chr(37))"), m_szSearch);

	}
	szWhere.AppendFormat(_T(" and po_doctype='%s' "), m_szType);
	
	szWhere.AppendFormat(_T(" and po_org_id IN('GL','%s') "), pMF->GetModuleID());

	if (m_bNonStockFlag)

	{
		szWhere.AppendFormat(_T(" and PO_STORAGE_ID= 0 "));
	}
	
	if(m_bPaidFlag)
	{
		szWhere.AppendFormat(_T(" and po_payment='Y' "));
	}
	if(m_bApprovedFlag)
	{
		szWhere.AppendFormat(_T(" and po_status='A' "));
	}
	if (!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_storage_id = %d"), str2int(m_szStorageKey));
	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	szWhere.AppendFormat(_T(" AND po_storage_id IN (0,%s)"), pMF->m_szStoragePerm);
	if (m_bLocked)
	{
		szWhere.AppendFormat(_T(" and po_locked='Y' "));
	}
	szSQL.Format(_T("SELECT ") \
		_T("po_doctype as ordertype, ") \
		_T("po_purchase_order_id as orderid, ") \
		_T("po_orderno as orderno, ") \
		_T("po_invoiceno as invoiceno, ") \
		_T("po_invoicedate as invoicedate, ") \
		_T("po_client_id, ") \
		_T("po_org_id, po_user_id, ") \
		_T("po_orderdate as orderdate, ") \
		_T("po_approveddate as approveddate, ") \
		_T("po_partnerphone as telephone, ") \
		_T(" po_acctdate as acctdate, ") \
		_T("adp_name as partner, ") \
		_T("po_transactor as transactor, ") \
		_T("po_status as status, ") \
		_T("NVL(po_locked, 'N') as Lockstatus, ") \
		_T("po_storage_id, ") \
		_T("po_payment as payment_flag, ") \
		_T("po_memo, po_totalamount as totalamount, po_exchangeamount as exchangeamount, get_username(po_createdby) as creator, ") \
		_T("po_approvedby approvedby, ") \
		_T("(select distinct pp_orderno from purchase_payment where pp_purchase_payment_id=po_refpayment_id) as paymentno, pp_acctdate acct_date, PO_LOCKEDBY as lockedby,") \
		_T(" hlp_status as post_status") \
		_T(" FROM PURCHASE_ORDER ") \
		_T(" LEFT JOIN purchase_payment ON (po_refpayment_id = pp_purchase_payment_id)") \
		_T(" LEFT JOIN AD_PARTNER ON(adp_partner_id=po_partner_id) ") \
		_T(" LEFT JOIN hms_lienthong_purchase_order ON (hlp_orderid = po_purchase_order_id)") \
		_T("WHERE po_isactive='Y' %s ORDER BY po_purchase_order_id"), szWhere);
//Notice(szSQL);

	int nItem = 0;
	double nAmount = 0;
	double nTotalAmount =0;
	CString szStatus, szLockStatus;
	rs.ExecSQL(szSQL);
	nCount = rs.GetRecordCount();
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("status"), szStatus);
		rs.GetValue(_T("Lockstatus"), szLockStatus);
		rs.GetValue(_T("totalamount"), nAmount);
		nTotalAmount += nAmount;

		nItem = m_wndList.AddItems(
			rs.GetValue(_T("orderid")),
			rs.GetValue(_T("OrderNo")), 
			rs.GetValue(_T("OrderDate")),
			rs.GetValue(_T("InvoiceNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Partner")), 
			rs.GetValue(_T("TelePhone")),
			rs.GetValue(_T("totalamount")), 
			rs.GetValue(_T("status")),
			rs.GetValue(_T("payment_flag")),
			rs.GetValue(_T("creator")), 
			rs.GetValue(_T("ordertype")), 
			rs.GetValue(_T("po_client_id")),
			rs.GetValue(_T("po_org_id")),
			rs.GetValue(_T("po_user_id")),
			rs.GetValue(_T("po_storage_id")),
			rs.GetValue(_T("approvedby")),
			rs.GetValue(_T("paymentno")),
			rs.GetValue(_T("acct_date")),
			rs.GetValue(_T("lockedby")),
			rs.GetValue(_T("post_status")),
			NULL);
		if(szStatus == _T("A"))
		{
			m_wndList.SetSubItemBkColor(nItem, 8, RGB(255, 128, 0), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 8, RGB(255, 255, 255), FALSE);
		}

		if(szLockStatus == _T("Y"))
		{
			m_wndList.SetSubItemBkColor(nItem, 1, RGB(0, 255, 0), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);
		}

		rs.MoveNext();
	}
	if(nTotalAmount > 0)
	{
		nItem = m_wndList.AddItems
			(
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T("Tổng Cộng"),
			_T(""),
			ToString(nTotalAmount), 
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T(""),			
			NULL);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);	
		UpdateData(FALSE);
	}

	m_wndList.EndLoad(); 
	SetMode(VM_NONE);
	return nCount;
}

void CPurchaseOrderList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	if (!pMF->CheckPermission(_T("01.06")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	bool bNonStock = false;
	int nStorageId = str2int(m_wndList.GetItemText(nSel, 15));
	if(nStorageId <= 0)
		bNonStock = true;
	//_msg(_T("Hi"));
	/*
	CPurchaseOrderDialogEx dlg(pMF, VM_VIEW, bNonStock);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		Refresh();		
	}
	*/
	ShowModal(VM_VIEW, bNonStock);
	m_wndList.SetFocus();
}
 
void CPurchaseOrderList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	
	//Truong hop mua hang khong qua kho
	if(m_szType == _T("PON"))
	{
		CPurchaseOrderNonStockDialog dlg(pMF, VM_ADD);
		if(dlg.DoModal() == IDOK){
			Refresh();		
		}
	}
	else
	{
		/*
		CPurchaseOrderDialogEx dlg(pMF, VM_ADD);
		if(dlg.DoModal() == IDOK){
			Refresh();		
		}
		*/
		ShowModal(VM_ADD);
	}
}
 
void CPurchaseOrderList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	if (!pMF->CheckPermission(_T("01.02")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return;
	}
	if(m_szType == _T("PON"))
	{
		CPurchaseOrderNonStockDialog dlg(pMF, VM_EDIT);
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
				Refresh();
		}
	}
	else
	{
		/*
		CPurchaseOrderDialogEx dlg(pMF, VM_EDIT);
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
				Refresh();
		}
		*/
		ShowModal(VM_EDIT);
	}
}
 
void CPurchaseOrderList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderList();
	Refresh();
}
 
int CPurchaseOrderList::OnAddPurchaseOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPurchaseOrderList::OnEditPurchaseOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CPurchaseOrderList::OnDeletePurchaseOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szClientID, szOrgID, szStt; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return -1;
	if (!pMF->CheckPermission(_T("01.03")))
	{
		ShowMessageBox(_T("Permission Denied."), 0);
		return -1;
	}
	szStt = m_wndList.GetItemText(nSel, 8);
	if (szStt != _T("O"))
	{
		ShowMessageBox(_T("Cannot delete invoice with current status"), MB_OK|MB_ICONWARNING);
		return -1;
	}
 	if(ShowMessageBox(_T("Do you want to delete invoice?(Y/N"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szClientID = m_wndList.GetItemText(nSel, 0);
	
	
	szSQL.Format(_T("PURCHASE_ORDER_DELETE(%ld, '%s', '%s')"), m_nID, pMF->GetModuleID(), pMF->GetCurrentUser() ); 

	//Notice(szSQL);

 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		m_wndList.DeleteItem(nSel);
 	}
	else
	{
		ShowMessageBox(_T("Cannot delete order.Order created by other user."), MB_OK|MB_ICONWARNING);
	}
	return 0;
}

int CPurchaseOrderList::OnSavePurchaseOrderList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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
 		//OnPurchaseOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPurchaseOrderList::OnCancelPurchaseOrderList()
{
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
 
int CPurchaseOrderList::OnPurchaseOrderListListLoadData(){
	return 0;
}


void CPurchaseOrderList::Refresh(){
	int nSel = m_wndList.GetCurSel();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);
}
void CPurchaseOrderList::OnPaidSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
}

void CPurchaseOrderList::OnApprovalSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
}

void CPurchaseOrderList::OnNonStockFlagSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();	
}


int CPurchaseOrderList::OnAddPurchaseOrderNonStock()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	/*
	CPurchaseOrderDialogEx dlg(pMF, VM_ADD, true);
	if(dlg.DoModal() == IDOK){
		Refresh();		
	}
	*/
	ShowModal(VM_ADD, true);
	return 0;
}

BEGIN_MESSAGE_MAP(CPurchaseOrderList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPurchaseOrderList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);
	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
	_debug(_T("%s"), CString(typeid(this).name()));
}

void CPurchaseOrderList::OnLockedSelect()
{
	UpdateData();
	OnListLoadData();
}

void CPurchaseOrderList::ShowModal(int nMode, bool bNonStock)
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPurchaseOrderDialogEx dlg(pMF, nMode, bNonStock);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
		Refresh();		
	}		
	return;

	if (pMF->GetModuleID() == _T("PM"))
	{
		CPurchaseOrderDialogEx_V2 dlg(pMF, nMode, bNonStock);
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
			Refresh();		
		}	
	}
	else
	{
		CPurchaseOrderDialogEx dlg(pMF, nMode, bNonStock);
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
			Refresh();		
		}		
	}

}

int CPurchaseOrderList::OnListLockItem()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szMsg;
	int nRet = 0, nCount = 0;
	long nId = 0;
	if(!pMF->CheckPermission(_T("40.02")))
	{
		ShowMessageBox(_T("Vui lòng cấp quyền 40.02 để sử dụng chức năng này!"), 0);
		return 0;
	}

	int ret = ShowMessageBox(_T("Tác vụ này sẽ khóa/bỏ khóa hóa đơn. Tiếp tục?"), MB_YESNO);
	if (ret == IDNO)
	{
		return 0;
	}
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			nId = str2long(m_wndList.GetItemText(i, 0));
			szSQL.Format(_T("PURCHASE_ORDER_LOCK(%ld, '%s')"), nId, pMF->GetCurrentUser());
			nRet = str2int(pMF->ExecDML(szSQL));
			if (nRet <= 0)
			{
				nCount++;
			}
		}
	}
	if (nRet > 0)
	{
		OnListLoadData();
	}
	if (nCount > 0)
	{
		szMsg.Format(_T("Có %d hóa đơn thao tác không thành công!"), nCount);
		ShowMessageBox(szMsg);
	}
	return 0;
}

void CPurchaseOrderList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndQuoteList, 100, 100);
	
	AddBottom(&m_wndNonStockFlag);
	AddBottom(&m_wndPaidFlag);
	AddBottom(&m_wndApprovedFlag);
	AddBottom(&m_wndLocked);
	AddBottom(&m_wndView);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
	
}