#include "DataPurchaseOrderList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnFromDateSetfocus();} */
	/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
		((CDataPurchaseOrderList *)pWnd)->OnFromDateKillfocus();
	} */
static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnToDateSetfocus();} */
	/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
		((CDataPurchaseOrderList *)pWnd)->OnToDateKillfocus();
	} */
static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnToDateCheckValue();
}
static void _OnStorageSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CDataPurchaseOrderList*)pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnStorageSelendokFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnStorageAddNew();
}*/
static void _OnOptionSelectFnc(CWnd* pWnd) {
	CDataPurchaseOrderList* pVw = (CDataPurchaseOrderList*)pWnd;
	pVw->OnOptionSelect();
}
static void _OnSupplierSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CDataPurchaseOrderList*)pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSupplierSelendokFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnSupplierAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CDataPurchaseOrderList *)pWnd)->OnSearchSetfocus();} */
	/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
		((CDataPurchaseOrderList *)pWnd)->OnSearchKillfocus();
	} */
static int _OnSearchCheckValueFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnSearchCheckValue();
}
static long _OnListLoadDataFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnListLoadData();
}
static void _OnListDblClickFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnListDblClick();
}
static void _OnListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CDataPurchaseOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListDeleteItemFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnListDeleteItem();
}
static void _OnNonStockFlagSelectFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnNonStockFlagSelect();
}
static void _OnPaidFlagSelectFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnPaidFlagSelect();
}
static void _OnApprovedFlagSelectFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnApprovedFlagSelect();
}
static void _OnLockedSelectFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnLockedSelect();
}
static void _OnViewSelectFnc(CWnd* pWnd) {
	CDataPurchaseOrderList* pVw = (CDataPurchaseOrderList*)pWnd;
	pVw->OnViewSelect();
}
static void _OnDataSelectFnc(CWnd* pWnd) {
	CDataPurchaseOrderList* pVw = (CDataPurchaseOrderList*)pWnd;
	pVw->OnDataSelect();
}
static void _OnPrintSelectFnc(CWnd* pWnd) {
	CDataPurchaseOrderList* pVw = (CDataPurchaseOrderList*)pWnd;
	pVw->OnPrintSelect();
}
static long _OnDataInvoiceListLoadDataFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnDataInvoiceListLoadData();
}
static void _OnDataInvoiceListDblClickFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnDataInvoiceListDblClick();
}
static void _OnDataInvoiceListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CDataPurchaseOrderList*)pWnd)->OnDataInvoiceListSelectChange(nOldItem, nNewItem);
}
static int _OnDataInvoiceListDeleteItemFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnDataInvoiceListDeleteItem();
}
static void _OnLockDataSelectFnc(CWnd* pWnd) {
	CDataPurchaseOrderList* pVw = (CDataPurchaseOrderList*)pWnd;
	pVw->OnLockDataSelect();
}
static int _OnAddDataPurchaseOrderListFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnAddDataPurchaseOrderList();
}
static int _OnEditDataPurchaseOrderListFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnEditDataPurchaseOrderList();
}
static int _OnDeleteDataPurchaseOrderListFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnDeleteDataPurchaseOrderList();
}
static int _OnSaveDataPurchaseOrderListFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnSaveDataPurchaseOrderList();
}
static int _OnCancelDataPurchaseOrderListFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnCancelDataPurchaseOrderList();
}
static int _OnListCheckAllFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnListCheckAll();
	return 0;
}
static int _OnListUncheckAllFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnListUncheckAll();
	return 0;
}

static long _OnTypeCashLoadDataFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnTypeCashLoadData();
}
static int _OnFromDateCCheckValueFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnFromDateCCheckValue();
}
static int _OnToDateCCheckValueFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnToDateCCheckValue();
}

static int _OnStaffCheckValueFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnStaffCheckValue();
}

static int _OnDataNoCheckValueFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnDataNoCheckValue();
}
static void _OnSearchDataSelectFnc(CWnd* pWnd) {
	CDataPurchaseOrderList* pVw = (CDataPurchaseOrderList*)pWnd;
	pVw->OnSearchDataSelect();
}
static void _OnTypeCashSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CDataPurchaseOrderList*)pWnd)->OnTypeCashSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTypeCashSelendokFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnTypeCashSelendok();
}
static int _OnRollBackDataInvoiceFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnRollBackDataInvoice();
	return 0;
}
static int _OnTotalAmountCheckValueFnc(CWnd* pWnd) {
	return ((CDataPurchaseOrderList*)pWnd)->OnTotalAmountCheckValue();
}
static void _OnNotLockedSelectFnc(CWnd* pWnd) {
	((CDataPurchaseOrderList*)pWnd)->OnNotLockedSelect();
}

CDataPurchaseOrderList::CDataPurchaseOrderList() {

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szType = _T("POO");
}
CDataPurchaseOrderList::~CDataPurchaseOrderList()
{
}
void CDataPurchaseOrderList::OnCreateComponents()
{
	/*m_wndDataInvoice.Create(this, _T("Danh sách phiếu tổng hợp"), 5, 408, 1014, 596);
	m_wndSearchInformation.Create(this, _T("Search Information"), 4, 4, 1014, 89);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 29, 195, 54);
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 385, 55);
	m_wndStorageLabel.Create(this, _T("Storage"), 390, 30, 470, 55);
	m_wndStorage.Create(this,475, 29, 1009, 54);
	m_wndQuoteList.Create(this, _T("Quote List"), 5, 94, 1014, 372);
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 90, 85);
	m_wndSupplier.Create(this,95, 60, 385, 85);
	m_wndSearchLabel.Create(this, _T("Search"), 390, 60, 470, 85);
	m_wndSearch.Create(this,475, 60, 840, 85);
	m_wndTotalAmount.Create(this,845, 60, 978, 85);
	m_wndOption.Create(this, _T("@"), 983, 60, 1008, 85);
	m_wndList.Create(this,10, 120, 1014, 374);
	m_wndList.SetCheckBox(true);
	m_wndNonStockFlag.Create(this, _T("HĐ không qua kho"), 10, 379, 150, 404);
	m_wndPaidFlag.Create(this, _T("Is Paid"), 155, 379, 280, 404);
	m_wndApprovedFlag.Create(this, _T("Đã nhập kho"), 285, 379, 370, 404);
	m_wndLocked.Create(this, _T("Locked"), 375, 379, 470, 404);
	m_wndView.Create(this, _T("&View"), 758, 379, 838, 404);
	m_wndData.Create(this, _T("&Data"), 842, 379, 922, 404);
	m_wndPrint.Create(this, _T("&Print"), 927, 379, 1007, 404);
	m_wndTypeCashLabel.Create(this, _T("TypeCash"), 12, 433, 92, 458);
	m_wndTypeCash.Create(this,97, 433, 177, 458);
	m_wndFromDateCLabel.Create(this, _T("From Date"), 181, 433, 261, 458);
	m_wndFromDateC.Create(this,266, 433, 346, 458);
	m_wndToDateCLabel.Create(this, _T("To Date"), 351, 433, 431, 458);
	m_wndToDateC.Create(this,436, 433, 516, 458);
	m_wndStaffLabel.Create(this, _T("Staff"), 522, 433, 602, 458);
	m_wndStaff.Create(this,607, 433, 720, 458);
	m_wndDataNoLabel.Create(this, _T("Số phiếu Data"), 725, 433, 805, 458);
	m_wndDataNo.Create(this,810, 433, 940, 458);
	m_wndSearchData.Create(this, _T("@"), 944, 433, 1013, 458);
	m_wndDataInvoiceList.Create(this,10, 463, 1014, 596);
	m_wndDataInvoiceList.SetCheckBox(true);
	m_wndLockData.Create(this, _T("&Lock Data"), 933, 601, 1013, 626);
	m_wndTotalAmount.EnableWindow(false);*/

	m_wndSearchInformation.Create(this, _T("Search Information"), 4, 4, 1014, 89);
	m_wndFromDate.Create(this, 95, 29, 195, 54);
	m_wndToDate.Create(this, 285, 30, 385, 55);
	m_wndDataInvoice.Create(this, _T("Danh sách phiếu tổng hợp"), 5, 408, 1014, 596);
	m_wndQuoteList.Create(this, _T("Quote List"), 5, 94, 1014, 372);
	m_wndStorage.Create(this, 475, 29, 1009, 54);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndStorageLabel.Create(this, _T("Storage"), 390, 30, 470, 55);
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 90, 85);
	m_wndSupplier.Create(this, 95, 60, 385, 85);
	m_wndSearchLabel.Create(this, _T("Search"), 390, 60, 470, 85);
	m_wndSearch.Create(this, 475, 60, 840, 85);
	m_wndTotalAmount.Create(this, 845, 60, 978, 85);
	m_wndOption.Create(this, _T("@"), 983, 60, 1008, 85);
	m_wndList.Create(this, 10, 120, 1014, 374);
	m_wndList.SetCheckBox(true);
	m_wndNonStockFlag.Create(this, _T("HĐ không qua kho"), 10, 379, 150, 404);
	m_wndApprovedFlag.Create(this, _T("Đã nhập kho"), 161, 379, 301, 404);
	m_wndNotLocked.Create(this, _T("Chưa khóa sổ"), 312, 379, 447, 404);
	m_wndLocked.Create(this, _T("Locked"), 458, 379, 593, 404);
	m_wndPaidFlag.Create(this, _T("Is Paid"), 604, 379, 739, 404);
	m_wndView.Create(this, _T("&View"), 758, 379, 838, 404);
	m_wndData.Create(this, _T("&Data"), 842, 379, 922, 404);
	m_wndPrint.Create(this, _T("&Print"), 927, 379, 1007, 404);
	m_wndTypeCashLabel.Create(this, _T("TypeCash"), 12, 433, 92, 458);
	m_wndTypeCash.Create(this, 97, 433, 177, 458);
	m_wndFromDateCLabel.Create(this, _T("From Date"), 181, 433, 261, 458);
	m_wndFromDateC.Create(this, 266, 433, 346, 458);
	m_wndToDateCLabel.Create(this, _T("To Date"), 351, 433, 431, 458);
	m_wndToDateC.Create(this, 436, 433, 516, 458);
	m_wndStaffLabel.Create(this, _T("Staff"), 522, 433, 602, 458);
	m_wndStaff.Create(this, 607, 433, 720, 458);
	m_wndDataNoLabel.Create(this, _T("Số phiếu Data"), 725, 433, 805, 458);
	m_wndDataNo.Create(this, 810, 433, 940, 458);
	m_wndSearchData.Create(this, _T("@"), 944, 433, 1013, 458);
	m_wndDataInvoiceList.Create(this, 10, 463, 1014, 596);
	m_wndDataInvoiceList.SetCheckBox(true);
	m_wndLockData.Create(this, _T("&Lock Data"), 933, 601, 1013, 626);
	m_wndTotalAmount.EnableWindow(false);
}
void CDataPurchaseOrderList::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
	//m_wndSearch.SetLimitText(1024);
	//m_wndSearch.SetCheckValue(true);

	m_wndTypeCash.SetCheckValue(true);
	m_wndTypeCash.LimitText(35);
	m_wndFromDateC.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDateC.SetCheckValue(true);
	m_wndToDateC.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDateC.SetCheckValue(true);
	m_wndStaff.SetLimitText(35);
	m_wndStaff.SetCheckValue(true);
	m_wndDataNo.SetLimitText(35);
	m_wndDataNo.SetCheckValue(true);



	m_wndSearch.SetNotEmpty(true);
	m_wndList.SetAutoIndex(TRUE);
	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.InsertColumn(0, _T("Mã"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(1, _T("PO_ID"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("Order Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(3, _T("PO_INVOICENO"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("PO_INVOICEDATE"), CFMT_DATE, 90);
	m_wndList.InsertColumn(5, _T("Vendor Name"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(6, _T("Phone"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("Total Amount"), CFMT_MONEY, 150);
	m_wndList.InsertColumn(8, _T("Status"), CFMT_TEXT | CFMT_CENTER, 55);
	m_wndList.InsertColumn(9, _T("Payment"), CFMT_TEXT | CFMT_CENTER, 0);
	m_wndList.InsertColumn(10, _T("Creator"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(11, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(13, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(14, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(15, _T(""), CFMT_TEXT, 0);	//storage_id
	m_wndList.InsertColumn(16, _T("Approved By"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(17, _T("Payment No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(18, _T("Paid Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(19, _T("Số phiếu Data"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(20, _T("Đã khóa sổ"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(21, _T("Ngày duyệt"), CFMT_DATETIME, 125);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndStorage.InsertColumn(2, _T("loại"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(3, _T("Khoa"), CFMT_TEXT, 250);
	m_wndStorage.InsertColumn(4, _T("Phân loại"), CFMT_TEXT, 100);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndSupplier.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 120);


	m_wndTypeCash.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeCash.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDataInvoiceList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDataInvoiceList.InsertColumn(1, _T("Order No"), CFMT_NUMBER, 100);
	m_wndDataInvoiceList.InsertColumn(2, _T("Date"), CFMT_DATE, 90);
	m_wndDataInvoiceList.InsertColumn(3, _T("Người tạo"), CFMT_TEXT, 70);
	m_wndDataInvoiceList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 300);
	m_wndDataInvoiceList.InsertColumn(5, _T("Đơn vị"), CFMT_TEXT, 70);
	m_wndDataInvoiceList.InsertColumn(6, _T("Status"), CFMT_TEXT, 40);
	m_wndDataInvoiceList.InsertColumn(7, _T("Thời gian khóa sổ"), CFMT_DATE, 90);
	m_wndDataInvoiceList.InsertColumn(8, _T("Người khóa sổ"), CFMT_TEXT, 90);
	m_wndDataInvoiceList.InsertColumn(9, _T("Mã kho"), CFMT_TEXT, 150);
	m_wndDataInvoiceList.InsertColumn(10, _T("Tháng hóa đơn"), CFMT_TEXT | CFMT_CENTER, 150);
	m_wndTotalAmount.SetCurrencyFormat();

}
void CDataPurchaseOrderList::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndOption.SetEvent(WE_CLICK, _OnOptionSelectFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndNonStockFlag.SetEvent(WE_CLICK, _OnNonStockFlagSelectFnc);
	m_wndPaidFlag.SetEvent(WE_CLICK, _OnPaidFlagSelectFnc);
	m_wndApprovedFlag.SetEvent(WE_CLICK, _OnApprovedFlagSelectFnc);
	m_wndLocked.SetEvent(WE_CLICK, _OnLockedSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndData.SetEvent(WE_CLICK, _OnDataSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);

	m_wndTypeCash.SetEvent(WE_SELENDOK, _OnTypeCashSelendokFnc);
	m_wndTypeCash.SetEvent(WE_SELCHANGE, _OnTypeCashSelectChangeFnc);
	m_wndTypeCash.SetEvent(WE_LOADDATA, _OnTypeCashLoadDataFnc);

	m_wndFromDateC.SetEvent(WE_CHECKVALUE, _OnFromDateCCheckValueFnc);

	m_wndToDateC.SetEvent(WE_CHECKVALUE, _OnToDateCCheckValueFnc);

	m_wndStaff.SetEvent(WE_CHECKVALUE, _OnStaffCheckValueFnc);

	m_wndDataNo.SetEvent(WE_CHECKVALUE, _OnDataNoCheckValueFnc);
	m_wndSearchData.SetEvent(WE_CLICK, _OnSearchDataSelectFnc);
	m_wndNotLocked.SetEvent(WE_CLICK, _OnNotLockedSelectFnc);

	m_wndDataInvoiceList.SetEvent(WE_SELCHANGE, _OnDataInvoiceListSelectChangeFnc);
	m_wndDataInvoiceList.SetEvent(WE_LOADDATA, _OnDataInvoiceListLoadDataFnc);
	m_wndDataInvoiceList.SetEvent(WE_DBLCLICK, _OnDataInvoiceListDblClickFnc);

	m_wndLockData.SetEvent(WE_CLICK, _OnLockDataSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddDataPurchaseOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditDataPurchaseOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteDataPurchaseOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveDataPurchaseOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelDataPurchaseOrderListFnc, 0, 'T', VK_CONTROL);

	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);

	m_wndDataInvoiceList.AddEvent(1, _T("Khôi phục lại phiếu"), _OnRollBackDataInvoiceFnc);

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDateC = m_szToDateC = pMF->GetSysDate();

	SetWindowFont(&m_wndTotalAmount, GetFaceName(), GetFaceSize() + 2, true);
	m_wndTotalAmount.SetTextColor(RGB(255, 0, 0));


	UpdateData(FALSE);
	//OnListLoadData();
}
void CDataPurchaseOrderList::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndNonStockFlag.GetDlgCtrlID(), m_bNonStockFlag);
	DDX_Check(pDX, m_wndPaidFlag.GetDlgCtrlID(), m_bPaidFlag);
	DDX_Check(pDX, m_wndApprovedFlag.GetDlgCtrlID(), m_bApprovedFlag);
	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);

	DDX_TextEx(pDX, m_wndTypeCash.GetDlgCtrlID(), m_szTypeCashKey);
	DDX_TextEx(pDX, m_wndFromDateC.GetDlgCtrlID(), m_szFromDateC);
	DDX_TextEx(pDX, m_wndToDateC.GetDlgCtrlID(), m_szToDateC);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndDataNo.GetDlgCtrlID(), m_nDataNo);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Check(pDX, m_wndNotLocked.GetDlgCtrlID(), m_bNotLocked);

}
void CDataPurchaseOrderList::UpdateJson(BOOL bSave) {
	if (bSave)
	{

		m_jData[_T("FromDate")] = m_szFromDate;
		m_jData[_T("ToDate")] = m_szToDate;
		m_jData[_T("Storage")] = m_szStorageKey;
		m_jData[_T("Supplier")] = m_szSupplierKey;
		m_jData[_T("Search")] = m_szSearch;
		m_jData[_T("NonStockFlag")] = m_bNonStockFlag;
		m_jData[_T("PaidFlag")] = m_bPaidFlag;
		m_jData[_T("ApprovedFlag")] = m_bApprovedFlag;
		m_jData[_T("Locked")] = m_bLocked;
	}
	else
	{

		m_jData[_T("FromDate")].GetValue(m_szFromDate);
		m_jData[_T("ToDate")].GetValue(m_szToDate);
		m_jData[_T("Storage")].GetValue(m_szStorageKey);
		m_jData[_T("Supplier")].GetValue(m_szSupplierKey);
		m_jData[_T("Search")].GetValue(m_szSearch);
		m_jData[_T("NonStockFlag")].GetValue(m_bNonStockFlag);
		m_jData[_T("PaidFlag")].GetValue(m_bPaidFlag);
		m_jData[_T("ApprovedFlag")].GetValue(m_bApprovedFlag);
		m_jData[_T("Locked")].GetValue(m_bLocked);
	}

}
void CDataPurchaseOrderList::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDataPurchaseOrderList::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CDataPurchaseOrderList::SetDefaultValues() {

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szSupplierKey.Empty();
	m_szSearch.Empty();
	m_bNonStockFlag = FALSE;
	m_bPaidFlag = FALSE;
	m_bApprovedFlag = TRUE;
	m_bLocked = FALSE;
	m_bNotLocked = FALSE;

	m_szTypeCashKey.Empty();
	m_szFromDateC.Empty();
	m_szToDateC.Empty();
	m_szStaff.Empty();
	m_nDataNo = 0;
	m_nTotalAmount = 0;

}
int CDataPurchaseOrderList::SetMode(int nMode)
{
	int nOldMode = GetMode();
	CGuiView::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode)
	{
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

	m_wndFromDateC.EnableWindow(TRUE);
	m_wndToDateC.EnableWindow(TRUE);
	m_wndTypeCash.EnableWindow(TRUE);
	m_wndStaff.EnableWindow(TRUE);
	m_wndDataNo.EnableWindow(TRUE);
	m_wndSearchData.EnableWindow(TRUE);
	m_wndLockData.EnableWindow(TRUE);


	UpdateData(FALSE);

	return nOldMode;
}
/*void CDataPurchaseOrderList::OnFromDateChange(){

} */
/*void CDataPurchaseOrderList::OnFromDateSetfocus(){

} */
/*void CDataPurchaseOrderList::OnFromDateKillfocus(){

} */
int CDataPurchaseOrderList::OnFromDateCheckValue() {
	return 0;
}
int CDataPurchaseOrderList::OnTotalAmountCheckValue() {
	return 0;
}

/*void CDataPurchaseOrderList::OnToDateChange(){

} */
/*void CDataPurchaseOrderList::OnToDateSetfocus(){

} */
/*void CDataPurchaseOrderList::OnToDateKillfocus(){

} */
int CDataPurchaseOrderList::OnToDateCheckValue() {
	return 0;
}
void CDataPurchaseOrderList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CDataPurchaseOrderList::OnStorageSelendok() {

}
/*void CDataPurchaseOrderList::OnStorageSetfocus(){

}*/
/*void CDataPurchaseOrderList::OnStorageKillfocus(){

}*/
long CDataPurchaseOrderList::OnStorageLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_type in ('A', 'B') "));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);
	return 0;
}
/*void CDataPurchaseOrderList::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CDataPurchaseOrderList::OnOptionSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnListLoadData();
}
void CDataPurchaseOrderList::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CDataPurchaseOrderList::OnSupplierSelendok() {

}
/*void CDataPurchaseOrderList::OnSupplierSetfocus(){

}*/
/*void CDataPurchaseOrderList::OnSupplierKillfocus(){

}*/
long CDataPurchaseOrderList::OnSupplierLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT adp_partner_id partner_id, adp_name name, adp_org_id as khoa FROM ad_partner where ADP_ISACTIVE='Y' order by adp_org_id,adp_partner_id "));
	int nCount = rs.ExecSQL(szSQL);
	m_wndSupplier.DeleteAllItems();
	while (!rs.IsEOF()) {
		m_wndSupplier.AddItems(
			rs.GetValue(_T("partner_id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("khoa")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CDataPurchaseOrderList::OnSupplierAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CDataPurchaseOrderList::OnSearchChange(){

} */
/*void CDataPurchaseOrderList::OnSearchSetfocus(){

} */
/*void CDataPurchaseOrderList::OnSearchKillfocus(){

} */
int CDataPurchaseOrderList::OnSearchCheckValue()
{
	OnListLoadData();
	return 1;
}
void CDataPurchaseOrderList::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;

	long m_nCashID = str2long(m_wndList.GetItemText(nSel, 19));
	OnDataInvoiceListLoadData();
}
void CDataPurchaseOrderList::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nCashID = str2long(m_wndList.GetItemText(nNewItem, 19));

	//_msg(_T("%ld"), m_nCashID);
	//OnListLoadData();
	//UpdateData(false);

}
int CDataPurchaseOrderList::OnListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
long CDataPurchaseOrderList::OnListLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	m_wndList.BeginLoad();
	int nCount = 0;

	szWhere.AppendFormat(_T(" and po_approveddate between to_timestamp('%s 00:00:00', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);
	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(po_orderno) like lower(chr(37)||'%s'||chr(37))"), m_szSearch);

	}
	szWhere.AppendFormat(_T(" and po_doctype='%s' "), m_szType);

	szWhere.AppendFormat(_T(" and po_org_id IN('GL','%s') "), m_wndStorage.GetCurrent(4));

	if (m_bNonStockFlag)

	{
		szWhere.AppendFormat(_T(" and PO_STORAGE_ID= 0 "));
	}

	if (m_bPaidFlag)
	{
		szWhere.AppendFormat(_T(" and po_payment='Y' "));
	}
	if (m_bApprovedFlag)
	{
		szWhere.AppendFormat(_T(" and po_status='A' "));
	}
	if (!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_storage_id = %d"), str2int(m_szStorageKey));
	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);

	if (m_bLocked)
	{
		szWhere.AppendFormat(_T(" and po_locked='Y' "));
	}

	if (m_bNotLocked)
	{
		szWhere.AppendFormat(_T(" and po_locked='N' "));
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
		_T("po_approvedby approvedby, po_approveddate as approveddate,") \
		_T("(select distinct pp_orderno from purchase_payment where pp_purchase_payment_id=po_refpayment_id) as paymentno, pp_acctdate acct_date,") \
		_T("hfe_cash_id as cashid ") \
		_T(" FROM PURCHASE_ORDER ") \
		_T(" LEFT JOIN purchase_payment ON (po_refpayment_id = pp_purchase_payment_id)") \
		_T(" LEFT JOIN AD_PARTNER ON(adp_partner_id=po_partner_id) ") \
		_T("WHERE po_isactive='Y' AND po_status ='A' AND NVL(po_saleperson_id, 'X') = 'P' %s ORDER BY po_purchase_order_id"), szWhere);
	//Notice(szSQL);

	int nItem = 0;
	long ncashid;
	double nAmount = 0;
	double nTotalAmount = 0;
	CString szStatus, szLockStatus;
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	nCount = rs.GetRecordCount();
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("status"), szStatus);
		rs.GetValue(_T("Lockstatus"), szLockStatus);
		rs.GetValue(_T("cashid"), ncashid);
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
			rs.GetValue(_T("cashid")),
			szLockStatus,
			rs.GetValue(_T("approveddate")),
			NULL);
		if (szStatus == _T("A"))
		{
			m_wndList.SetSubItemBkColor(nItem, 8, RGB(255, 128, 0), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 8, RGB(255, 255, 255), FALSE);
		}

		if (szLockStatus == _T("Y"))
		{
			m_wndList.SetSubItemBkColor(nItem, 0, RGB(0, 255, 0), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 0, RGB(0, 0, 0), FALSE);
		}

		if (ncashid > 0)
		{
			m_wndList.SetSubItemBkColor(nItem, 19, RGB(0, 0, 238), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 19, RGB(255, 255, 255), FALSE);
		}

		rs.MoveNext();
	}
	if (nTotalAmount > 0)
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
			_T(""),
			_T(""),
			NULL);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
		m_nTotalAmount = (nTotalAmount);
		UpdateData(FALSE);
	}

	m_wndList.EndLoad();
	//SetMode(VM_NONE);
	return nCount;
}
void CDataPurchaseOrderList::OnNonStockFlagSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnListLoadData();

}
void CDataPurchaseOrderList::OnPaidFlagSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnListLoadData();

}
void CDataPurchaseOrderList::OnApprovedFlagSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnListLoadData();

}
void CDataPurchaseOrderList::OnLockedSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	m_bNotLocked = FALSE;
	OnListLoadData();
	UpdateData(false);

}
void CDataPurchaseOrderList::OnNotLockedSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	m_bLocked = FALSE;
	OnListLoadData();
	UpdateData(false);
}
void CDataPurchaseOrderList::OnViewSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CDataPurchaseOrderList::OnDataSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szPayments, szWhere, szSQL, szorgid, szLockStatus, szstockid;
	double ntotalpurchase = 0;
	int nstockid = 0;
	long ncashid = 0;


	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szPayments.IsEmpty())
				szPayments += _T(", ");
			szPayments.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}
	}

	if (!szPayments.IsEmpty())
		szWhere.Format(_T(" AND po_purchase_order_id IN (%s)"), szPayments);



	if (szPayments.IsEmpty())

	{
		ShowMessageBox(_T("Bạn chưa chọn hóa đơn nào trên màn hình!"));
		return;
	}

	//Nếu có phiếu data chưa khóa sổ thì không cho data tiếp

	szSQL.Format(_T(" SELECT count(*) from FA_CASH_PURCHASE where FAC_USER_ID='%s' and FAC_LOCKED <> 'Y' and FAC_STOCKID>0"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Tồn tại phiếu tổng hợp số liệu chưa khóa sổ, bạn cần khóa sổ trước khi data tiếp!"));
		return;
	}

	//Tính tổng số tiền hóa đơn được chọn trên màn hình -> InSert vào table 

	szSQL.Format(_T(" SELECT distinct COALESCE((hfe_cash_id),0) as cashid, po_org_id as orgid , PO_STORAGE_ID AS stockid, COALESCE(SUM(PO_TOTALAMOUNT), 0) as totalpurchase ") \
		_T("   FROM purchase_order") \
		_T("   WHERE 1=1 AND NVL(PO_LOCKED, 'N')  = 'N' AND po_status='A' ") \
		_T("   %s") \
		_T("   GROUP BY hfe_cash_id, po_org_id, PO_STORAGE_ID"), szWhere);
	rsl.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (!rsl.IsEOF())
	{
		rsl.GetValue(_T("cashid"), ncashid);
		rsl.GetValue(_T("orgid"), szorgid);
		rsl.GetValue(_T("stockid"), nstockid);
		rsl.GetValue(_T("totalpurchase"), ntotalpurchase);
	}

	//Cập nhật thông tin vào table fa_cash_purchase

	//UpdateData(TRUE);
	//pMF->BeginWaitCursor();
	int ret = ShowMessageBox(_T("Chức năng này sẽ tổng hợp số liệu được chọn trên màn hình thành 1 phiếu tổng, OK?"), MB_YESNO);
	if (ret == IDNO)
		return;
	else
	{
		szSQL.Format(_T("FA_CASH_PURCHASE_DATA(%ld, '%s', '%s', %.2f, '%s', '%s', %d) "), ncashid, szorgid, pMF->GetCurrentUser(), ntotalpurchase, pMF->GetCurrentUser(), pMF->GetCurrentUser(), nstockid);
		//_msg(_T("%s"), szSQL);
		long res = str2long(pMF->ExecDML(szSQL));	

		//pMF->EndWaitCursor();

		if (res > 0)
		{
			szSQL.Format(_T("UPDATE purchase_order set hfe_cash_id = %ld WHERE 1=1 AND NVL(PO_LOCKED, 'N')  = 'N' %s "), res, szWhere);
			int nRet = pMF->ExecSQL(szSQL);
			OnListLoadData();
			m_wndLockData.EnableWindow(TRUE);
		}
		else
		{
			ShowMessageBox(_T("No data"));
			m_wndLockData.EnableWindow(FALSE);
			OnListLoadData();
		}
	}
}
void CDataPurchaseOrderList::OnPrintSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CGuiMenu menu(this);
	CRect rect;
	int nPos;
	m_wndPrint.GetWindowRect(&rect);
	menu.CreatePopupMenu();
	CString tmpStr;
	//In bảng kê phiếu nhập theo công ty
	TranslateString(_T("In bảng kê phiếu nhập theo công ty"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	//In bảng kê phiếu nhập theo ngày 
	TranslateString(_T("In bảng kê phiếu nhập theo ngày"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);

	switch (nPos)
	{
	case 1:
		OnPrintByCompany();
		break;
	case 2:
		OnPrintByImportDay();
		break;
	}

}
void CDataPurchaseOrderList::OnPrintByImportDay()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail = NULL, * rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	CString szSQL, tmpStr, szField, szTemp;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldGroup, szNewGroup, szStorages, szCashIDPayments, szSTockID;
	double nTmp = 0;
	double nGrpAmt = 0, nTtlAmt = 0;
	int nIdx = 1, j = 0;
	if (!rpt.Init(_T("Reports\\HMS\\PTC_BANGKEPHIEUNHAP.RPT")))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("DeptName"), pMF->GetDepartmentName(pMF->GetDepartmentID()));

	for (int i = 0; i < m_wndDataInvoiceList.GetItemCount(); i++)
	{
		if (m_wndDataInvoiceList.GetCheck(i))
		{
			if (!szCashIDPayments.IsEmpty())
				szCashIDPayments += _T(", ");
			szCashIDPayments.AppendFormat(_T("%s "), m_wndDataInvoiceList.GetItemText(i, 1));
		}
	}

	if (!szCashIDPayments.IsEmpty())

		rptHeader->SetValue(_T("CashID"), szCashIDPayments);

	int nSel = m_wndDataInvoiceList.GetCurSel();
	if (nSel < 0) return;


	szSTockID = m_wndDataInvoiceList.GetItemText(nSel, 9);
	rptHeader->SetValue(_T("StockName"), szSTockID);

	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{

		tmpStr = _T("impdtex");
		rs.GetValue(tmpStr, szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				tmpStr.Format(_T("%f"), nGrpAmt);
				rptDetail->SetValue(_T("s5"), tmpStr);
				nTtlAmt += nGrpAmt;
				nGrpAmt = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{

				tmpStr = szNewGroup;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			nIdx = 1;
			szOldGroup = szNewGroup;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("ordno")));
		rs.GetValue(_T("impdte"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("productname")));
		rs.GetValue(_T("ttlamt"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("ttlamt"), tmpStr);
		nGrpAmt += str2double(tmpStr);

		rptDetail->SetValue(_T("7"), rs.GetValue(_T("invno")));
		rptDetail->SetValue(_T("8"), rs.GetValue(_T("ordno")));
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nGrpAmt);
		rptDetail->SetValue(_T("s5"), tmpStr);
		nTtlAmt += nGrpAmt;
	}
	if (nTtlAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng \x63\xE1\x63 \x63\xF4ng ty:"));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nTtlAmt);
		rptDetail->SetValue(_T("s5"), tmpStr);
	}
	//Footer
	rptFooter = rpt.GetReportFooter();
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rptFooter->SetValue(_T("Username"), pMF->GetDoctorName(pMF->GetCurrentUser()));

	EndWaitCursor();
	rpt.PrintPreview();
}
void CDataPurchaseOrderList::OnPrintByCompany()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail = NULL, * rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	CString szSQL, tmpStr, szField, szTemp, szSTockID;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldGroup, szNewGroup, szStorages, szCashIDPayments;
	double nTmp = 0;
	double nGrpAmt = 0, nTtlAmt = 0;
	int nIdx = 1, j = 0;
	if (!rpt.Init(_T("Reports\\HMS\\PTC_BANGKEPHIEUNHAP.RPT")))
		return;
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("DeptName"), pMF->GetDepartmentName(pMF->GetDepartmentID()));

	for (int i = 0; i < m_wndDataInvoiceList.GetItemCount(); i++)
	{
		if (m_wndDataInvoiceList.GetCheck(i))
		{
			if (!szCashIDPayments.IsEmpty())
				szCashIDPayments += _T(", ");
			szCashIDPayments.AppendFormat(_T("%s "), m_wndDataInvoiceList.GetItemText(i, 1));
		}
	}

	if (!szCashIDPayments.IsEmpty())

		rptHeader->SetValue(_T("CashID"), szCashIDPayments);


	int nSel = m_wndDataInvoiceList.GetCurSel();
	if (nSel < 0) return;


	szSTockID = m_wndDataInvoiceList.GetItemText(nSel, 9);
	rptHeader->SetValue(_T("StockName"), szSTockID);


	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{

		tmpStr = _T("dept");
		rs.GetValue(tmpStr, szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				tmpStr.Format(_T("%f"), nGrpAmt);
				rptDetail->SetValue(_T("s5"), tmpStr);
				nTtlAmt += nGrpAmt;
				nGrpAmt = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{

				tmpStr = szNewGroup;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			nIdx = 1;
			szOldGroup = szNewGroup;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("ordno")));
		rs.GetValue(_T("impdte"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("productname")));
		rs.GetValue(_T("ttlamt"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("ttlamt"), tmpStr);
		nGrpAmt += str2double(tmpStr);

		rptDetail->SetValue(_T("7"), rs.GetValue(_T("invno")));
		rptDetail->SetValue(_T("8"), rs.GetValue(_T("ordno")));
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nGrpAmt);
		rptDetail->SetValue(_T("s5"), tmpStr);
		nTtlAmt += nGrpAmt;
	}
	if (nTtlAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng \x63\xE1\x63 \x63\xF4ng ty:"));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nTtlAmt);
		rptDetail->SetValue(_T("s5"), tmpStr);
	}
	//Footer
	rptFooter = rpt.GetReportFooter();
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rptFooter->SetValue(_T("Username"), pMF->GetDoctorName(pMF->GetCurrentUser()));

	EndWaitCursor();
	rpt.PrintPreview();
}

CString CDataPurchaseOrderList::GetQueryString()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szCashIDPayments, szWhere;
	long nCashID = 0;

	for (int i = 0; i < m_wndDataInvoiceList.GetItemCount(); i++)
	{
		if (m_wndDataInvoiceList.GetCheck(i))
		{
			if (!szCashIDPayments.IsEmpty())
				szCashIDPayments += _T(", ");
			szCashIDPayments.AppendFormat(_T("'%s'"), m_wndDataInvoiceList.GetItemText(i, 1));
		}
	}

	if (!szCashIDPayments.IsEmpty())

		szWhere.Format(_T(" AND hfe_cash_id IN (%s)"), szCashIDPayments);


	if (szCashIDPayments.IsEmpty())

	{
		ShowMessageBox(_T("Bạn chưa chọn phiếu data nào trên màn hình!"));
		szWhere.Format(_T(" AND 0>1"));
	}

	szSQL.Format(_T(" SELECT doctype,") \
		_T("   ordno,") \
		_T("   documentno,") \
		_T("   invno,") \
		_T("   dept,") \
		_T("   productname,") \
		_T("   to_char(impdte,'DD/MM/YYYY') as impdtex,") \
		_T("   SUM(ROUND(ttlamt)) ttlamt") \
		_T(" FROM") \
		_T("   (") \
		_T("   SELECT po_doctype as doctype,") \
		_T("     po_orderno as ordno,") \
		_T("     po_documentno as documentno,") \
		_T("     po_invoiceno as invno,") \
		_T("     Get_partnername(po_partner_id) as dept,") \
		_T("     First_value(product_name) OVER ( partition BY po_purchase_order_id ORDER BY product_name ASC) as productname,") \
		_T("     TRUNC(po_approveddate) as impdte,") \
		_T("     product_groupid,") \
		_T("     product_groupname,") \
		_T("     CASE") \
		_T("       WHEN NVL(POL_TAXRATE, 0)> 0") \
		_T("       THEN ((POL_UNITPRICE + POL_UNITPRICE * POL_TAXRATE / 100)/ POL_UOM_RATE)*POL_QTYIMPORT") \
		_T("       ELSE (POL_UNITPRICE  / POL_UOM_RATE)*POL_QTYIMPORT") \
		_T("     END AS ttlamt") \
		_T("   FROM purchase_order") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON ( po_purchase_order_id = pol_purchase_order_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( product_item_id = pol_product_item_id )") \
		_T("   WHERE po_status      = 'A'") \
		_T("   %s") \
		_T("   )") \
		_T(" WHERE 1    =1") \
		_T(" GROUP BY doctype,") \
		_T("   ordno,") \
		_T("   documentno,") \
		_T("   invno,") \
		_T("   dept,") \
		_T("   productname,") \
		_T("   impdte") \
		_T(" ORDER BY") \
		_T("   impdte, dept,") \
		_T("   productname"), szWhere);

	return szSQL;
}

CString CDataPurchaseOrderList::GetQueryString1()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szCashIDPayments, szWhere;
	long nCashID = 0;

	for (int i = 0; i < m_wndDataInvoiceList.GetItemCount(); i++)
	{
		if (m_wndDataInvoiceList.GetCheck(i))
		{
			if (!szCashIDPayments.IsEmpty())
				szCashIDPayments += _T(", ");
			szCashIDPayments.AppendFormat(_T("'%s'"), m_wndDataInvoiceList.GetItemText(i, 1));
		}
	}

	if (!szCashIDPayments.IsEmpty())

		szWhere.Format(_T(" AND hfe_cash_id IN (%s)"), szCashIDPayments);


	if (szCashIDPayments.IsEmpty())

	{
		ShowMessageBox(_T("Bạn chưa chọn phiếu data nào trên màn hình!"));
		szWhere.Format(_T(" AND 0>1"));
	}

	szSQL.Format(_T(" SELECT doctype,") \
		_T("   ordno,") \
		_T("   documentno,") \
		_T("   invno,") \
		_T("   dept,") \
		_T("   productname,") \
		_T("   impdte,") \
		_T("   SUM(ROUND(ttlamt)) ttlamt") \
		_T(" FROM") \
		_T("   (") \
		_T("   SELECT po_doctype as doctype,") \
		_T("     po_orderno as ordno,") \
		_T("     po_documentno as documentno,") \
		_T("     po_invoiceno as invno,") \
		_T("     Get_partnername(po_partner_id) as dept,") \
		_T("     First_value(product_name) OVER ( partition BY po_purchase_order_id ORDER BY product_name ASC) as productname,") \
		_T("     TRUNC(po_approveddate) as impdte,") \
		_T("     product_groupid,") \
		_T("     product_groupname,") \
		_T("     CASE") \
		_T("       WHEN NVL(POL_TAXRATE, 0)> 0") \
		_T("       THEN ((POL_UNITPRICE + POL_UNITPRICE * POL_TAXRATE / 100)/ POL_UOM_RATE)*POL_QTYIMPORT") \
		_T("       ELSE (POL_UNITPRICE  / POL_UOM_RATE)*POL_QTYIMPORT") \
		_T("     END AS ttlamt") \
		_T("   FROM purchase_order") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON ( po_purchase_order_id = pol_purchase_order_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( product_item_id = pol_product_item_id )") \
		_T("   WHERE po_status      = 'A'") \
		_T("   %s") \
		_T("   )") \
		_T(" WHERE 1    =1") \
		_T(" GROUP BY doctype,") \
		_T("   ordno,") \
		_T("   documentno,") \
		_T("   invno,") \
		_T("   dept,") \
		_T("   productname,") \
		_T("   impdte") \
		_T(" ORDER BY ") \
		_T("   dept,impdte, ") \
		_T("   productname"), szWhere);

	return szSQL;
}


void CDataPurchaseOrderList::OnTypeCashSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CDataPurchaseOrderList::OnTypeCashSelendok()
{

}
long CDataPurchaseOrderList::OnTypeCashLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndTypeCash.AddItems(_T("MA"), _T("Phiếu khoa trang bị"), NULL);
	m_wndTypeCash.AddItems(_T("PM"), _T("Phiếu khoa dược"), NULL);

	return 0;
}
/*void CDataPurchaseOrderList::OnTypeCashAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CDataPurchaseOrderList::OnFromDateCChange(){

} */
/*void CDataPurchaseOrderList::OnFromDateCSetfocus(){

} */
/*void CDataPurchaseOrderList::OnFromDateCKillfocus(){

} */
int CDataPurchaseOrderList::OnFromDateCCheckValue() {
	return 0;
}
/*void CDataPurchaseOrderList::OnToDateCChange(){

} */
/*void CDataPurchaseOrderList::OnToDateCSetfocus(){

} */
/*void CDataPurchaseOrderList::OnToDateCKillfocus(){

} */
int CDataPurchaseOrderList::OnToDateCCheckValue() {
	return 0;
}
/*void CDataPurchaseOrderList::OnStaffChange(){

} */
/*void CDataPurchaseOrderList::OnStaffSetfocus(){

} */
/*void CDataPurchaseOrderList::OnStaffKillfocus(){

} */
int CDataPurchaseOrderList::OnStaffCheckValue()
{
	OnDataInvoiceListLoadData();
	return 1;
}
/*void CDataPurchaseOrderList::OnDataNoChange(){

} */
/*void CDataPurchaseOrderList::OnDataNoSetfocus(){

} */
/*void CDataPurchaseOrderList::OnDataNoKillfocus(){

} */
int CDataPurchaseOrderList::OnDataNoCheckValue()
{
	OnDataInvoiceListLoadData();
	return 1;
}
void CDataPurchaseOrderList::OnSearchDataSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//UpdateData(false);
	m_nCashID = 0;
	OnDataInvoiceListLoadData();
}
void CDataPurchaseOrderList::OnDataInvoiceListDblClick() {

}
void CDataPurchaseOrderList::OnDataInvoiceListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
int CDataPurchaseOrderList::OnDataInvoiceListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
long CDataPurchaseOrderList::OnDataInvoiceListLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;

	int nCount = 0;
	int nIndex = 1, nItem;

	UpdateData(true);

	szWhere.Empty();
	if (!m_szStaff.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(FAC_USER_ID) like(chr(37)||lower('%s')||chr(37)) "), m_szStaff);
	}

	if (m_nDataNo > 0)
	{
		szWhere.AppendFormat(_T(" and fac_cash_id = %ld "), m_nDataNo);
	}

	if (!m_szTypeCashKey.IsEmpty())
	{

		szWhere.AppendFormat(_T(" and fac_org_id='%s' "), m_szTypeCashKey);
	}
	if (m_nCashID > 0)
	{
		szWhere.AppendFormat(_T(" and fac_cash_id = %ld "), m_nCashID);
	}


	szSQL.Format(_T(" SELECT") \
		_T(" distinct(fac_cash_id) as fac_cash_id,") \
		_T(" extract (MONTH FROM po_orderdate) thanghoadon,") \
		_T(" FAC_INVOICEDATE,") \
		_T(" FAC_USER_ID,") \
		_T(" fac_amount,") \
		_T(" fac_org_id,") \
		_T(" fac_locked,") \
		_T(" FAC_LOCKEDDATE,") \
		_T(" FAC_LOCKEDBY,") \
		_T(" MSL_STORAGE_ID ||'-'|| MSL_NAME         AS stockid") \
		_T(" from fa_cash_purchase LEFT JOIN M_STORAGELIST ON (FAC_STOCKID=MSL_STORAGE_ID)") \
		_T(" LEFT JOIN purchase_order ON (fac_cash_id=HFE_CASH_ID)") \
		_T(" WHERE MSL_STORAGE_ID > 0 AND trunc(FAC_INVOICEDATE) BETWEEN to_date('%s','YYYY-MM-DD') AND to_date('%s','YYYY-MM-DD')") \
		_T(" %s order by fac_cash_id desc"), m_szFromDateC, m_szToDateC, szWhere);
	nCount = rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);
	m_wndDataInvoiceList.BeginLoad();

	while (!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		nItem = m_wndDataInvoiceList.AddItems
		(
			tmpStr,
			rs.GetValue(_T("fac_cash_id")),
			rs.GetValue(_T("FAC_INVOICEDATE")),
			rs.GetValue(_T("FAC_USER_ID")),
			rs.GetValue(_T("fac_amount")),
			rs.GetValue(_T("fac_org_id")),
			rs.GetValue(_T("fac_locked")),
			rs.GetValue(_T("FAC_LOCKEDDATE")),
			rs.GetValue(_T("FAC_LOCKEDBY")),
			rs.GetValue(_T("stockid")),
			rs.GetValue(_T("thanghoadon")),
			NULL);
		rs.MoveNext();
	}
	m_wndDataInvoiceList.EndLoad();
	return nCount;
}


void CDataPurchaseOrderList::OnLockDataSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szReceiptDate, szStaff, szCashStatus;
	CString szCloseDate;
	CString tmpStr, szInvoiceType;
	long nCashID;


	int nSel = m_wndDataInvoiceList.GetCurSel();
	if (nSel < 0) return;

	nCashID = str2long(m_wndDataInvoiceList.GetItemText(nSel, 1));
	szStaff = m_wndDataInvoiceList.GetItemText(nSel, 3);
	szCashStatus = m_wndDataInvoiceList.GetItemText(nSel, 6);
	//_msg(_T("%s"), szStaff);
	UpdateData(TRUE);

	if (szStaff != pMF->GetCurrentUser())
	{
		ShowMessageBox(_T("Không cho phép khóa sổ phiếu của người khác!"));
		return;
	}

	if (szCashStatus == _T("Y"))

	{
		ShowMessageBox(_T("Phiếu đã được khóa sổ!"));
		return;
	}

	int ret = ShowMessageBox(_T("Chức năng này sẽ khóa sổ phiếu tổng cùng các hóa đơn nhập kho tương ứng, OK?"), MB_YESNO);
	if (ret == IDNO)
		return;
	else
	{
		szSQL.Format(_T("HMS_PURCHASE_CLOSEBOOK(%ld, '%s')"), nCashID, szStaff);

		long n = str2long(pMF->ExecDML(szSQL));
		//_msg(_T("%s"), szSQL);
		if (n > 0)
		{
			OnListLoadData();
			OnDataInvoiceListLoadData();
		}
		else
		{
			ShowMessageBox(_T("No data"));
		}
	}

}
int CDataPurchaseOrderList::OnAddDataPurchaseOrderList() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CDataPurchaseOrderList::OnEditDataPurchaseOrderList() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CDataPurchaseOrderList::OnDeleteDataPurchaseOrderList() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelDataPurchaseOrderList();
	}
	return 0;
}
int CDataPurchaseOrderList::OnSaveDataPurchaseOrderList() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (GetMode() == VM_ADD) {
		//szSQL = m_tblTbl.GetInsertSQL();
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE"));
		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
		szSQL += szWhere;
	}
	_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
	{
		//OnDataPurchaseOrderListListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CDataPurchaseOrderList::OnCancelDataPurchaseOrderList() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
int CDataPurchaseOrderList::OnDataPurchaseOrderListListLoadData() {
	return 0;
}

void CDataPurchaseOrderList::OnListCheckAll()
{
	int i = 0;
	for (i = 0; i < m_wndList.GetItemCount(); i++)
		m_wndList.SetCheck(i, true);
	_msg(_T("Tổng số phiếu = %d"), i);
}

void CDataPurchaseOrderList::OnListUncheckAll() {
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
		m_wndList.SetCheck(i, false);
}

void CDataPurchaseOrderList::OnRollBackDataInvoice()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szReceiptDate, szStaff, szCashStatus;
	CString szCloseDate;
	CString tmpStr, szInvoiceType;
	long nCashID;


	int nSel = m_wndDataInvoiceList.GetCurSel();
	if (nSel < 0) return;

	nCashID = str2long(m_wndDataInvoiceList.GetItemText(nSel, 1));
	szStaff = m_wndDataInvoiceList.GetItemText(nSel, 3);
	szCashStatus = m_wndDataInvoiceList.GetItemText(nSel, 6);
	//_msg(_T("%s"), szStaff);
	UpdateData(TRUE);

	if (szStaff != pMF->GetCurrentUser())
	{
		ShowMessageBox(_T("Không cho phép khôi phục phiếu của người khác!"));
		return;
	}

	if (szCashStatus == _T("Y"))

	{
		ShowMessageBox(_T("Phiếu đã được khóa sổ! không thao tác được"));
		return;
	}

	int ret = ShowMessageBox(_T("Chức năng này sẽ khôi phục lại phiếu tổng và trạng thái hóa đơn nhập kho, OK?"), MB_YESNO);
	if (ret == IDNO)
		return;
	else
	{
		szSQL.Format(_T("HMS_PURCHASE_ROLLBACK_DATA(%ld, '%s')"), nCashID, szStaff);

		long n = str2long(pMF->ExecDML(szSQL));
		//_msg(_T("%s"), szSQL);
		if (n > 0)
		{
			OnListLoadData();
			OnDataInvoiceListLoadData();
		}
		else
		{
			ShowMessageBox(_T("No data"));
		}
	}

}


void CDataPurchaseOrderList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
}