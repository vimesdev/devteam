#include "stdafx.h"
#include "MALiabilitiesTrack.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMALiabilitiesTrack *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMALiabilitiesTrack *)pWnd)->OnToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMALiabilitiesTrack* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CMALiabilitiesTrack *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnSupplierAddNew();
}*/
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMALiabilitiesTrack* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CMALiabilitiesTrack *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CMALiabilitiesTrack *)pWnd)->OnStockAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMALiabilitiesTrack *pVw = (CMALiabilitiesTrack *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMALiabilitiesTrack *pVw = (CMALiabilitiesTrack *)pWnd;
	pVw->OnExportSelect();
} 
CMALiabilitiesTrack::CMALiabilitiesTrack(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMALiabilitiesTrack::~CMALiabilitiesTrack(){
}
void CMALiabilitiesTrack::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this,400, 30, 570, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 110, 85);
	m_wndSupplier.Create(this,115, 60, 570, 85); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 90, 110, 115);
	m_wndStock.SetCheckBox(true);
	m_wndStock.Create(this,115, 90, 570, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 385, 125, 495, 150);
	m_wndExport.Create(this, _T("&Export"), 500, 125, 575, 150);

}
void CMALiabilitiesTrack::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
//	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
//	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 100);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

}

void CMALiabilitiesTrack::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CMALiabilitiesTrack::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);

}
void CMALiabilitiesTrack::SetDefaultValues(){
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();
	m_szStockKey.Empty();
}

int CMALiabilitiesTrack::SetMode(int nMode){
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

/*void CMALiabilitiesTrack::OnFromDateChange(){
	
} */
/*void CMALiabilitiesTrack::OnFromDateSetfocus(){
	
} */
/*void CMALiabilitiesTrack::OnFromDateKillfocus(){
	
} */
int CMALiabilitiesTrack::OnFromDateCheckValue(){
	return 0;
}
 
/*void CMALiabilitiesTrack::OnToDateChange(){
	
} */
/*void CMALiabilitiesTrack::OnToDateSetfocus(){
	
} */
/*void CMALiabilitiesTrack::OnToDateKillfocus(){
	
} */
int CMALiabilitiesTrack::OnToDateCheckValue(){
	return 0;
}
 
void CMALiabilitiesTrack::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CMALiabilitiesTrack::OnSupplierSelendok(){
	 
}

/*void CMALiabilitiesTrack::OnSupplierSetfocus(){
	
}*/
/*void CMALiabilitiesTrack::OnSupplierKillfocus(){
	
}*/
long CMALiabilitiesTrack::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
/*void CMALiabilitiesTrack::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMALiabilitiesTrack::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CMALiabilitiesTrack::OnStockSelendok(){
	 
}
/*void CMALiabilitiesTrack::OnStockSetfocus(){
	
}*/
/*void CMALiabilitiesTrack::OnStockKillfocus(){
	
}*/
long CMALiabilitiesTrack::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);

}
/*void CMALiabilitiesTrack::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMALiabilitiesTrack::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail,* rptHeader, * rptGroup, * rptFooter;
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
		rptGroup->SetValue(_T("first_period"),tmpStr3);
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
			nTotal[0]+= nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("paid_amount"), nTmp);
			nTotal[1]+= nTmp;
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
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5,2), szDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}

void CMALiabilitiesTrack::OnExportSelect(){

}
 
CString CMALiabilitiesTrack::GetQueryString_Main(){
	CString szSQL, szWhere1, szWhere2, szStorages;
	szWhere1.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere2.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	//szWhere2.Format(_T(" AND pp_createddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
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
	if(!szStorages.IsEmpty())
	{
		szWhere1.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
		szWhere2.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
	}
// 	szSQL.Format(_T(" SELECT * ") \
// 	_T(" FROM   (SELECT 1 order_type, ") \
// 	_T("                po_approveddate import_date, ") \
// 	_T("				po_invoiceno invoice_no, ") \
// 	_T("                po_orderno order_no, ") \
// 	_T("                po_totalamount import_amount, ") \
// 	_T("                0 paid_amount ") \
// 	_T("         FROM   purchase_order ") \
// 	_T("         WHERE  po_status = 'A' %s") \
// 	_T("         UNION ALL ") \
// 	_T("         SELECT    2, ") \
// 	_T("                   po_approveddate, ") \
// 	_T("				   po_invoiceno, ") \
// 	_T("                   po_orderno, ") \
// 	_T("                   0, ") \
// 	_T("                   po_paidamount ") \
// 	_T("         FROM      purchase_payment ") \
// 	_T("         LEFT JOIN purchase_order ON ( pp_purchase_payment_id = po_refpayment_id ) ") \
// 	_T("         WHERE     pp_status IN ( 'P', 'A' ) %s) ") \
// 	_T(" ORDER  BY order_type,import_date"), szWhere1, szWhere2);

	szSQL.Format(_T(" SELECT") \
		_T("     import_date,") \
		_T("     invoice_no,") \
		_T("     order_no,") \
		_T("     SUM(import_amount) import_amount,") \
		_T("     SUM(paid_amount) paid_amount") \
		_T(" FROM") \
		_T("   (SELECT") \
		_T("     po_invoicedate import_date,") \
		_T("     po_invoiceno invoice_no,") \
		_T("     po_orderno order_no,") \
		_T("     po_totalamount import_amount,") \
		_T("     0 paid_amount") \
		_T("   FROM purchase_order") \
		_T("   WHERE po_status = 'A' %s") \
		_T("   UNION ALL") \
		_T("   SELECT") \
		_T("     po_invoicedate,") \
		_T("     po_invoiceno,") \
		_T("     po_orderno,") \
		_T("     0,") \
		_T("     po_paidamount") \
		_T("   FROM purchase_payment") \
		_T("   LEFT JOIN purchase_order") \
		_T("   ON ( pp_purchase_payment_id = po_refpayment_id )") \
		_T("   WHERE pp_status IN ( 'P', 'A' ) %s") \
		_T("   )") \
		_T(" GROUP BY import_date, invoice_no, order_no") \
		_T(" ORDER BY import_date"), szWhere1, szWhere2);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CMALiabilitiesTrack::GetQueryString_FP(){
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
	if(!szStorages.IsEmpty())
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
}BEGIN_MESSAGE_MAP(CMALiabilitiesTrack, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CMALiabilitiesTrack::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}