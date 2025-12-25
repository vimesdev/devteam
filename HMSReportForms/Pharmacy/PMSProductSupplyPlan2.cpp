#include "stdafx.h"
#include "PMSProductSupplyPlan2.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSProductSupplyPlan2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSProductSupplyPlan2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSProductSupplyPlan2* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSProductSupplyPlan2 *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMSProductSupplyPlan2 *)pWnd)->OnStockAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSProductSupplyPlan2 *pVw = (CPMSProductSupplyPlan2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSProductSupplyPlan2 *pVw = (CPMSProductSupplyPlan2 *)pWnd;
	pVw->OnExportSelect();
} 
CPMSProductSupplyPlan2::CPMSProductSupplyPlan2(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSProductSupplyPlan2::~CPMSProductSupplyPlan2(){
}
void CPMSProductSupplyPlan2::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 495, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 260, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 265, 30, 345, 55);
	m_wndToDate.Create(this,350, 30, 490, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.SetCheckBox(true);
	m_wndStock.Create(this,115, 60, 490, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 95, 410, 120);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 495, 120);

}
void CPMSProductSupplyPlan2::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CPMSProductSupplyPlan2::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CPMSProductSupplyPlan2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);

}
void CPMSProductSupplyPlan2::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();

}
int CPMSProductSupplyPlan2::SetMode(int nMode){
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
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
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
/*void CPMSProductSupplyPlan2::OnFromDateChange(){
	
} */
/*void CPMSProductSupplyPlan2::OnFromDateSetfocus(){
	
} */
/*void CPMSProductSupplyPlan2::OnFromDateKillfocus(){
	
} */
int CPMSProductSupplyPlan2::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSProductSupplyPlan2::OnToDateChange(){
	
} */
/*void CPMSProductSupplyPlan2::OnToDateSetfocus(){
	
} */
/*void CPMSProductSupplyPlan2::OnToDateKillfocus(){
	
} */
int CPMSProductSupplyPlan2::OnToDateCheckValue(){
	return 0;
} 
void CPMSProductSupplyPlan2::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSProductSupplyPlan2::OnStockSelendok(){
	 
}
/*void CPMSProductSupplyPlan2::OnStockSetfocus(){
	
}*/
/*void CPMSProductSupplyPlan2::OnStockKillfocus(){
	
}*/
long CPMSProductSupplyPlan2::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}
/*void CPMSProductSupplyPlan2::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSProductSupplyPlan2::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szSysDate, szPos, szStorages;
	long double nTotal[4];
	for (int i = 0; i < 4; i++)
	{
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\PM_BAOCAODUTRU.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
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
			rptHeader->SetValue(_T("Storage"), szStorages);
		else
			rptHeader->SetValue(_T("Storage"), _T("To\xE0n \x62\x1ED9"));
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("generic")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("unit")));
			rs.GetValue(_T("impqty"), nTmp);
			nTotal[0]+= nTmp;
			rptDetail->SetValue(_T("5_1"), double2str(nTmp));
			rs.GetValue(_T("expqty"), nTmp);
			nTotal[1]+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("instockqty"), nTmp);
			nTotal[2]+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("plan_qty"), nTmp);
			nTotal[3]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("productname")));
		}
		rs.MoveNext();
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate2")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate2"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();

} 
void CPMSProductSupplyPlan2::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 12);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 50);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 9);
	xls.SetCellMergedColumns(0, 3, 9);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x42\xC1O \x43\xC1O \x44\x1EF0 TR\xD9 MU\x41 THU\x1ED0\x43");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	xls.SetCellText(0, nRow, _T("STT"), 4098, true);
	xls.SetCellText(1, nRow, _T("T\xEAn thu\x1ED1\x63, h\xE0m l\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(2, nRow, _T("T\xEAn ho\x1EA1t \x63h\x1EA5t"), 4098, true);
	xls.SetCellText(3, nRow, _T("\x110VT"), 4098, true);
	xls.SetCellText(4, nRow, _T("Nh\x1EADp trong k\x1EF3"), 4098, true);
	xls.SetCellText(5, nRow, _T("\x58u\x1EA5t trong k\x1EF3"), 4098, true);
	xls.SetCellText(6, nRow, _T("T\x1ED3n \x63u\x1ED1i k\x1EF3"), 4098, true);
	xls.SetCellText(7, nRow, _T("\x44\x1EF1 tr\xF9 mu\x61"), 4098, true);
	xls.SetCellText(8, nRow, _T("Nh\xE0 \x63ung \x63\x1EA5p"), 4098, true);
	nRow = 5;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("generic")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("unit")), FMT_TEXT);
		rs.GetValue(_T("impqty"), nTmp);
		xls.SetCellText(4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("expqty"), nTmp);
		xls.SetCellText(5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("instockqty"), nTmp);
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("plan_qty"), nTmp);
		xls.SetCellText(7, nRow, double2str(nTmp), FMT_NUMBER1);
		xls.SetCellText(8, nRow, rs.GetValue(_T("productname")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao du tru mua thuoc.xls"));
} 
CString CPMSProductSupplyPlan2::GetQueryString(){
	CString szSQL, szWhere, szStorages;
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
		szWhere.Format(_T(" AND stockid IN(%s)"), szStorages);
	szSQL.Format(_T(" SELECT") \
		_T("   productname AS productname,") \
		_T("   id,") \
		_T("   generic,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   SUM(plan_qty) AS plan_qty,") \
		_T("   SUM(impqty)     AS impqty,") \
		_T("   SUM(expqty)     AS expqty,") \
		_T("   SUM(instockqty) AS instockqty") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT (SELECT") \
		_T("   get_partnername(po_partner_id)") \
		_T("   FROM purchase_order") \
		_T("   LEFT JOIN purchase_orderline x") \
		_T("   ON(po_purchase_order_id  = pol_purchase_order_id)") \
		_T("   WHERE x.pol_product_item_id = product_item_id AND x.pol_purchase_order_id = (SELECT MAX(pol_purchase_order_id)") \
		_T("   FROM purchase_orderline y") \
		_T("   WHERE y.pol_product_item_id = x.pol_product_item_id)) AS productname,") \
		_T("   product_code                        AS id,") \
		_T("   product_classname                   AS generic,") \
		_T("   product_name                        AS name,") \
		_T("   get_uomname(product_purchase_uomid) AS unit,") \
		_T("   CASE") \
		_T("     WHEN SUM(expqty) > SUM(instockqty)") \
		_T("     THEN SUM(expqty-instockqty)") \
		_T("     ELSE 0") \
		_T("   END plan_qty,") \
		_T("   SUM(impqty)     AS impqty,") \
		_T("   SUM(expqty)     AS expqty,") \
		_T("   SUM(instockqty) AS instockqty") \
		_T(" FROM") \
		_T("   (SELECT *") \
		_T("   FROM") \
		_T("     (SELECT impstockid AS stockid,") \
		_T("       impdate          AS iodate,") \
		_T("       iotype,") \
		_T("       sitemid,") \
		_T("       0 AS instockqty,") \
		_T("       impqty,") \
		_T("       0 AS expqty") \
		_T("     FROM miv") \
		_T("     UNION ALL") \
		_T("     SELECT expstockid, expdate, iotype, sitemid, 0, 0, expqty FROM mev") \
		_T("     ) iotbl") \
		_T("   WHERE iodate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND iotype NOT IN('MOV', 'EXP', 'EXO', 'LOO', 'BOO', 'DOO', 'EOH', 'EOO', 'SLO') %s") \
		_T("   UNION ALL") \
		_T("   SELECT stockid,") \
		_T("     iodate,") \
		_T("     iotype,") \
		_T("     sitemid,") \
		_T("     COALESCE(impqty-expqty, 0),") \
		_T("     0,") \
		_T("     0") \
		_T("   FROM") \
		_T("     (SELECT impstockid AS stockid,") \
		_T("       impdate          AS iodate,") \
		_T("       iotype,") \
		_T("       sitemid,") \
		_T("       0,") \
		_T("       impqty,") \
		_T("       0 AS expqty") \
		_T("     FROM miv") \
		_T("     UNION ALL") \
		_T("     SELECT expstockid, expdate, iotype, sitemid, 0, 0, expqty FROM mev") \
		_T("     ) ptbl") \
		_T("   WHERE iodate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   %s") \
		_T("   ) instock") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(product_item_id       =sitemid)") \
		_T(" WHERE sitemid            > 0") \
		_T(" AND LENGTH(product_code) > 0") \
		_T(" GROUP BY product_code,") \
		_T("   product_name,") \
		_T("   product_purchase_uomid,") \
		_T("   product_classname,") \
		_T("   product_item_id") \
		_T(" HAVING (SUM(expqty) = 0") \
		_T(" AND SUM(instockqty) > 0)") \
		_T(" OR SUM(expqty)      > 0") \
		_T(" ) tbl2") \
		_T(" GROUP BY productname,") \
		_T("   id,") \
		_T("   generic,") \
		_T("   name,") \
		_T("   unit") \
		_T(" ORDER BY name,") \
		_T("   generic"), m_szFromDate, m_szToDate, szWhere, m_szToDate, szWhere);
	return szSQL;
}