#include "stdafx.h"
#include "MAPaymentForCompany.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnFromDateSetfocus();} */
	/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
		((CMAPaymentForCompany *)pWnd)->OnFromDateKillfocus();
	} */
static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CMAPaymentForCompany*)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnToDateSetfocus();} */
	/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
		((CMAPaymentForCompany *)pWnd)->OnToDateKillfocus();
	} */
static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CMAPaymentForCompany*)pWnd)->OnToDateCheckValue();
}
static void _OnSupplierSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CMAPaymentForCompany*)pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSupplierSelendokFnc(CWnd* pWnd) {
	((CMAPaymentForCompany*)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd* pWnd) {
	return ((CMAPaymentForCompany*)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnSupplierAddNew();
}*/
static void _OnStockSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CMAPaymentForCompany*)pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnStockSelendokFnc(CWnd* pWnd) {
	((CMAPaymentForCompany*)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd* pWnd) {
	return ((CMAPaymentForCompany*)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CMAPaymentForCompany *)pWnd)->OnStockAddNew();
}*/
static long _OnOrderListLoadDataFnc(CWnd* pWnd) {
	return ((CMAPaymentForCompany*)pWnd)->OnOrderListLoadData();
}
static void _OnOrderListDblClickFnc(CWnd* pWnd) {
	((CMAPaymentForCompany*)pWnd)->OnOrderListDblClick();
}
static void _OnOrderListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CMAPaymentForCompany*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
}
static int _OnOrderListDeleteItemFnc(CWnd* pWnd) {
	return ((CMAPaymentForCompany*)pWnd)->OnOrderListDeleteItem();
}
static void _OnPrintPreviewSelectFnc(CWnd* pWnd) {
	CMAPaymentForCompany* pVw = (CMAPaymentForCompany*)pWnd;
	pVw->OnPrintPreviewSelect();
}
static void _OnExportSelectFnc(CWnd* pWnd) {
	CMAPaymentForCompany* pVw = (CMAPaymentForCompany*)pWnd;
	pVw->OnExportSelect();
}
CMAPaymentForCompany::CMAPaymentForCompany(CWnd* pParent) {

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMAPaymentForCompany::~CMAPaymentForCompany() {
}
void CMAPaymentForCompany::OnCreateComponents() {
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 520);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this, 115, 30, 290, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this, 400, 30, 570, 55);
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 110, 85);
	m_wndSupplier.Create(this, 115, 60, 570, 85);
	m_wndStockLabel.Create(this, _T("Stock"), 10, 90, 110, 115);
	m_wndStock.SetCheckBox(TRUE);
	m_wndStock.Create(this, 115, 90, 570, 115);
	m_wndOrderList.Create(this, 10, 120, 570, 515);
	m_wndOrderList.SetCheckBox(TRUE);
	m_wndExport.Create(this, _T("&Export"), 500, 525, 575, 550);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 385, 125, 495, 150);

}
void CMAPaymentForCompany::OnInitializeComponents() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

	//	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
	//	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 100);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(1, _T("S\x1ED1 phi\x1EBFu"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(2, _T("Ng\xE0y l\x1EADp phi\x1EBFu"), CFMT_DATETIME, 150);
	m_wndOrderList.InsertColumn(3, _T("\x44i\x1EC5n gi\x1EA3i"), CFMT_TEXT, 200);
	m_wndOrderList.InsertColumn(4, _T("S\x1ED1 ti\x1EC1n"), CFMT_NUMBER, 120);
	m_wndOrderList.InsertColumn(5, _T("Ng\x1B0\x1EDDi t\x1EA1o"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(6, _T("Tr\x1EA1ng th\xE1i"), CFMT_TEXT, 50);
}

void CMAPaymentForCompany::OnSetWindowEvents() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);
	OnOrderListLoadData();

}
void CMAPaymentForCompany::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);

}
void CMAPaymentForCompany::SetDefaultValues() {
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();
	m_szStockKey.Empty();
}

int CMAPaymentForCompany::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiView::SetMode(nMode);
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
	case VM_ADD:
		EnableControls(TRUE);
		EnableButtons(TRUE, 3, 4, -1);
		SetDefaultValues();
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 1, 2, 3, -1);
		break;
	case VM_VIEW:
		EnableControls(TRUE);
		EnableButtons(FALSE, 3, 4, -1);
		break;
	case VM_NONE:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 6, -1);
		SetDefaultValues();
		break;
	};
	UpdateData(FALSE);
	return nOldMode;
}

/*void CMAPaymentForCompany::OnFromDateChange(){

} */
/*void CMAPaymentForCompany::OnFromDateSetfocus(){

} */
/*void CMAPaymentForCompany::OnFromDateKillfocus(){

} */
int CMAPaymentForCompany::OnFromDateCheckValue() {
	UpdateData(TRUE);
	OnOrderListLoadData();
	return 0;
}

/*void CMAPaymentForCompany::OnToDateChange(){

} */
/*void CMAPaymentForCompany::OnToDateSetfocus(){

} */
/*void CMAPaymentForCompany::OnToDateKillfocus(){

} */
int CMAPaymentForCompany::OnToDateCheckValue() {
	UpdateData(TRUE);
	OnOrderListLoadData();
	return 0;
}

void CMAPaymentForCompany::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}
void CMAPaymentForCompany::OnSupplierSelendok() {

}

/*void CMAPaymentForCompany::OnSupplierSetfocus(){

}*/
/*void CMAPaymentForCompany::OnSupplierKillfocus(){

}*/
long CMAPaymentForCompany::OnSupplierLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
/*void CMAPaymentForCompany::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CMAPaymentForCompany::OnStockSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	OnOrderListLoadData();

}
void CMAPaymentForCompany::OnStockSelendok() {

}
/*void CMAPaymentForCompany::OnStockSetfocus(){

}*/
/*void CMAPaymentForCompany::OnStockKillfocus(){

}*/
long CMAPaymentForCompany::OnStockLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);

}
/*void CMAPaymentForCompany::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CMAPaymentForCompany::OnOrderListDblClick() {

}
void CMAPaymentForCompany::OnOrderListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}
int CMAPaymentForCompany::OnOrderListDeleteItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	return 0;
}
long CMAPaymentForCompany::OnOrderListLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStorages;
	m_wndOrderList.BeginLoad();

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.Format(_T(" AND po_storage_id IN(%s) "), szStorages);
	}

	szSQL.Format(_T(" SELECT DISTINCT pp_purchase_payment_id AS order_id,") \
		_T("   pp_orderno                  AS orderno,") \
		_T("   pp_orderdate                AS orderdate,") \
		_T("   pp_description			   AS description,") \
		_T("   pp_totalamount              AS amount,") \
		_T("   pp_createdby                AS createdby,") \
		_T("   pp_status                   AS status") \
		_T(" FROM purchase_order") \
		_T(" LEFT JOIN purchase_orderline") \
		_T(" ON(po_purchase_order_id = pol_purchase_order_id)") \
		_T(" LEFT JOIN purchase_payment") \
		_T(" ON(pp_purchase_payment_id = po_refpayment_id)") \
		_T(" WHERE po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND pp_org_id IN('GL','MA') AND pp_status = 'A' %s"), m_szFromDate, m_szToDate, szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndOrderList.AddItems(
			rs.GetValue(_T("order_id")),
			rs.GetValue(_T("orderno")),
			rs.GetValue(_T("orderdate")),
			rs.GetValue(_T("description")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("createdby")),
			rs.GetValue(_T("status")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad();
	return nCount;

}
void CMAPaymentForCompany::OnPrintPreviewSelect() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail, * rptHeader, * rptGroup, * rptFooter;
	double nTmp = 0;
	double nFirst_period = 0, nLast_period = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, tmpStr2, tmpStr3, szDate, szPos, szStorages;
	double nTotal[2];
	for (int i = 0; i < 2; i++)
	{
		nTotal[i] = 0;
	}
	if (!rpt.Init(_T("Reports\\HMS\\MA_BANGKETHEODOICONGNOPHAITRA.RPT")))
		return;

	rptHeader = rpt.GetReportHeader();

	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	tmpStr = _T("T\x1EA5t \x63\x1EA3");
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(1);
		}
	}
	if (!szStorages.IsEmpty())
		rptHeader->SetValue(_T("StockItems"), szStorages);
	else
		rptHeader->SetValue(_T("StockItems"), tmpStr);
	if (!m_szSupplierKey.IsEmpty())
		rptHeader->SetValue(_T("Company"), m_wndSupplier.GetCurrent(1));
	else
		rptHeader->SetValue(_T("Company"), tmpStr);

	szSQL = GetQueryString_FP();
	rs.ExecSQL(szSQL);
	rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
	rs.GetValue(_T("ttlamt"), tmpStr3);
	nFirst_period += ToDouble(tmpStr3);
	if (rptGroup)
	{
		rptGroup->SetValue(_T("first_period"), tmpStr3);
		tmpStr.Format(rptGroup->GetValue(_T("groupName")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
		rptGroup->SetValue(_T("groupName"), tmpStr);
	}

	szSQL = GetQueryString_Main();
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rs.GetValue(_T("import_date"), tmpStr);
			rptDetail->SetValue(_T("2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("order_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("invoice_no")));
			rs.GetValue(_T("import_amount"), nTmp);
			nTotal[0] += nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("paid_amount"), nTmp);
			nTotal[1] += nTmp;
			rptDetail->SetValue(_T("5"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
	if (rptGroup)
	{
		tmpStr.Format(_T("%f"), nTotal[0]);
		rptGroup->SetValue(_T("s4"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal[1]);
		rptGroup->SetValue(_T("s5"), tmpStr);
		nLast_period = nFirst_period + nTotal[0] - nTotal[1];
		tmpStr.Format(_T("%f"), nLast_period);
		rptGroup->SetValue(_T("s6"), tmpStr);
	}
	rptFooter = rpt.GetReportFooter();
	FormatCurrency(nLast_period, tmpStr2);
	tmpStr.Format(rptFooter->GetValue(_T("Summary")), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy), tmpStr2);
	rptFooter->SetValue(_T("Summary"), tmpStr);
	szDate = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}

void CMAPaymentForCompany::OnExportSelect() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTotal[3];
	for (int i = 0; i < 3; i++)
	{
		nTotal[i] = 0;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 61);
	xls.SetColumnWidth(2, 21);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 17);

	xls.SetCellText(0, 0, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H TR\x1EA2 TI\x1EC0N \x43\xC1\x43 \x43\xD4NG TY MU\x41 VTTH \x43HO \x110\x1ED0I T\x1AF\x1EE2NG \x42HYT \x43\xC1\x43 LO\x1EA0I"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(1, 5, _T("T\xEAn \x63\xF4ng ty"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(2, 5, _T("N\x1EE3"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(3, 0, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(3, 1, _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(3, 5, _T("\x58in tr\x1EA3 quy\x1EBFt to\xE1n"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(4, 5, _T("\x43\xF2n n\x1EE3"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(5, 5, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetMerge(0, 0, 0, 1);
	xls.SetMerge(1, 1, 0, 1);
	xls.SetMerge(3, 3, 0, 5);
	xls.SetMerge(4, 4, 0, 5);
	xls.SetMerge(0, 0, 3, 5);
	xls.SetMerge(1, 1, 3, 5);

	szSQL = GetQueryString_Main();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}

	nRow = 6;
	nCol = 0;
	while (!rs.IsEOF()) {
		xls.SetCellText(nCol + 0, nRow, int2str(nIdx++), FMT_TEXT);
		rs.GetValue(_T("partnername"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("amount"), tmpStr);
		nTotal[0] += str2double(tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);
		rs.GetValue(_T("rtamount"), tmpStr);
		nTotal[1] += str2double(tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);
		rs.GetValue(_T("ttamount"), tmpStr);
		nTotal[2] += str2double(tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);
		nRow++;
		rs.MoveNext();
	}

	if (nTotal[0] > 0)
	{
		xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), FMT_TEXT | FMT_CENTER, true);
		for (int i = 0; i < 3; i++)
		{
			xls.SetCellText(nCol + 2 + i, nRow, double2str(nTotal[i]), FMT_NUMBER1 | FMT_RIGHT, true);
		}
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Danhsachtratiencaccongtymuavtth.xls"));
}

CString CMAPaymentForCompany::GetQueryString_Main() {
	CString szSQL, szWhere1, szWhere2, szStorages, szOrders;
	szWhere1.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere2.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!m_szSupplierKey.IsEmpty())
	{
		szWhere1.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
		szWhere2.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	}
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere1.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
		szWhere2.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
	}

	for (int i = 0; i < m_wndOrderList.GetItemCount(); i++)
	{
		if (m_wndOrderList.GetCheck(i))
		{
			if (!szOrders.IsEmpty())
				szOrders += _T(", ");
			szOrders.AppendFormat(_T("'%s'"), m_wndOrderList.GetItemText(i, 1));
		}
	}

	if (!szOrders.IsEmpty())
	{
		szWhere2.AppendFormat(_T(" AND pp_orderno IN (%s)"), szOrders);
	}

	szSQL.Format(_T(" SELECT ") \
		_T(" partnerid,") \
		_T(" partnername,") \
		_T(" SUM(amount) AS amount,") \
		_T(" SUM(rtamount) AS rtamount,") \
		_T(" SUM(amount) - SUM(rtamount) AS ttamount") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" po_partner_id AS partnerid,") \
		_T(" get_partnername(po_partner_id) AS partnername,") \
		_T(" po_orderno AS orderno,") \
		_T(" SUM(pol_totalamount) AS amount,") \
		_T(" 0 AS rtamount") \
		_T(" FROM purchase_order") \
		_T(" LEFT JOIN purchase_orderline") \
		_T(" ON(po_purchase_order_id = pol_purchase_order_id)") \
		_T(" WHERE po_status = 'A'") \
		_T(" AND po_org_id = 'MA' AND po_partner_id NOT IN ('trangbi', '352', '2123', '999') %s") \
		_T(" GROUP BY") \
		_T(" po_partner_id,") \
		_T(" po_orderno") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" po_partner_id AS partnerid,") \
		_T(" get_partnername(po_partner_id) AS partnername,") \
		_T(" po_orderno AS orderno,") \
		_T(" 0 AS amount,") \
		_T(" SUM(pol_totalamount) AS rtamount") \
		_T(" FROM purchase_order") \
		_T(" LEFT JOIN purchase_orderline") \
		_T(" ON(po_purchase_order_id = pol_purchase_order_id)") \
		_T(" LEFT JOIN purchase_payment") \
		_T(" ON(pp_purchase_payment_id = po_refpayment_id)") \
		_T(" WHERE po_status = 'A'") \
		_T(" AND po_payment = 'Y' AND pp_status = 'A'") \
		_T(" AND po_org_id = 'MA' AND po_partner_id NOT IN ('trangbi', '352', '2123', '999') %s") \
		_T(" GROUP BY") \
		_T(" po_partner_id,") \
		_T(" po_orderno") \
		_T(" )") \
		_T(" GROUP BY") \
		_T(" partnerid,") \
		_T(" partnername") \
		_T(" ORDER BY") \
		_T(" partnerid,") \
		_T(" partnername"), szWhere1, szWhere2);
	return szSQL;
}

CString CMAPaymentForCompany::GetQueryString_FP() {
	CString szSQL, szWhere, szWhere1, szStorages;
	szWhere.Format(_T(" AND po_approveddate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate);
	if (!m_szSupplierKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	}
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
	}
	// 	szSQL.Format(_T("SELECT SUM(ttlamt) ttlamt FROM (SELECT SUM(po_totalamount) ttlamt ") \
	// 		_T(" FROM purchase_order ") \
	// 		_T(" WHERE po_status = 'A' AND NVL(po_payment, 'N') = 'N' %s") \
	// 		_T(" UNION ALL") \
	// 		_T(" SELECT SUM(po_totalamount) ") \
	// 		_T(" FROM purchase_order") \
	// 		_T(" LEFT JOIN purchase_payment ON (po_refpayment_id = pp_purchase_payment_id)") \
	// 		_T(" WHERE po_status = 'A' AND po_payment = 'Y' %s )"), szWhere, szWhere1);
	szSQL.Format(_T(" SELECT SUM(po_totalamount) ttlamt") \
		_T("   FROM purchase_order") \
		_T("   WHERE po_status          = 'A'") \
		_T("   AND NVL(po_payment, 'N') = 'N' %s"), szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}