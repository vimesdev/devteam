#include "stdafx.h"
#include "MAConsignmentProductList2.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMAConsignmentProductList2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMAConsignmentProductList2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAConsignmentProductList2* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CMAConsignmentProductList2 *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CMAConsignmentProductList2 *)pWnd)->OnSupplierAddNew();
}*/
static void _OnNotImportedSelectFnc(CWnd *pWnd){
	 ((CMAConsignmentProductList2*)pWnd)->OnNotImportedSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CMAConsignmentProductList2*)pWnd)->OnAllSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	((CMAConsignmentProductList2*)pWnd)->OnInsuranceSelect();
}
static void _OnPoliciesSelectFnc(CWnd *pWnd){
	((CMAConsignmentProductList2*)pWnd)->OnPoliciesSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	((CMAConsignmentProductList2*)pWnd)->OnServiceSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMAConsignmentProductList2 *pVw = (CMAConsignmentProductList2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMAConsignmentProductList2 *pVw = (CMAConsignmentProductList2 *)pWnd;
	pVw->OnExportSelect();
} 
CMAConsignmentProductList2::CMAConsignmentProductList2(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMAConsignmentProductList2::~CMAConsignmentProductList2(){
}
void CMAConsignmentProductList2::OnCreateComponents(){
	m_wndConsignmentPatientList.Create(this, _T("Consignment Patient List"), 5, 5, 470, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 465, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 90, 85);
	m_wndSupplier.Create(this,95, 60, 465, 85); 
	m_wndAll.Create(this, _T("All"), 10, 90, 90, 115);
	m_wndInsurance.Create(this, _T("Insurance"), 95, 90, 185, 115);
	m_wndPolicies.Create(this, _T("Policies"), 190, 90, 270, 115);
	m_wndService.Create(this, _T("Service"), 275, 90, 355, 115);
	m_wndNotImported.Create(this, _T("Not Imported"), 5, 125, 130, 150);
	//m_wndPrintPreview.Create(this, _T("&Print Preview"), 265, 125, 365, 150);
	m_wndExport.Create(this, _T("&ExportXLS"), 370, 125, 470, 150);

}
void CMAConsignmentProductList2::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(35);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}

void CMAConsignmentProductList2::OnSetWindowEvents(){
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
	m_wndNotImported.SetEvent(WE_CLICK, _OnNotImportedSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndPolicies.SetEvent(WE_CLICK, _OnPoliciesSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	m_wndNotImported.ShowWindow(SW_HIDE);
	UpdateData(false);

}
void CMAConsignmentProductList2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Check(pDX, m_wndNotImported.GetDlgCtrlID(), m_bNotImported);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndPolicies.GetDlgCtrlID(), m_nPolicies);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);

}
void CMAConsignmentProductList2::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();
	m_bNotImported = FALSE;
	m_nAll=0;
	m_nInsurance=1;
	m_nPolicies=1;
	m_nService=1;

}

int CMAConsignmentProductList2::SetMode(int nMode){
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

/*void CMAConsignmentProductList2::OnFromDateChange(){
	
} */
/*void CMAConsignmentProductList2::OnFromDateSetfocus(){
	
} */
/*void CMAConsignmentProductList2::OnFromDateKillfocus(){
	
} */
int CMAConsignmentProductList2::OnFromDateCheckValue(){
	return 0;
}
 
/*void CMAConsignmentProductList2::OnToDateChange(){
	
} */
/*void CMAConsignmentProductList2::OnToDateSetfocus(){
	
} */
/*void CMAConsignmentProductList2::OnToDateKillfocus(){
	
} */
int CMAConsignmentProductList2::OnToDateCheckValue(){
	return 0;
}
 
void CMAConsignmentProductList2::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CMAConsignmentProductList2::OnSupplierSelendok(){
	 
}

/*void CMAConsignmentProductList2::OnSupplierSetfocus(){
	
}*/
/*void CMAConsignmentProductList2::OnSupplierKillfocus(){
	
}*/
long CMAConsignmentProductList2::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}

/*void CMAConsignmentProductList2::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
	void CMAConsignmentProductList2::OnNotImportedSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
	void CMAConsignmentProductList2::OnAllSelect(){

	}
	void CMAConsignmentProductList2::OnInsuranceSelect(){

	}
	void CMAConsignmentProductList2::OnPoliciesSelect(){

	}
	void CMAConsignmentProductList2::OnServiceSelect(){

	}
void CMAConsignmentProductList2::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptDetail = NULL;
	CString szSQL, tmpStr, szDate, szReportName;
	int nIdx = 1;
	szReportName = _T("Reports\\HMS\\MA_BAOCAOVATUCHUAHOADON.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	if(m_nInsurance == 0)
	{
		rpt.GetReportHeader()->SetValue(_T("Storgage"), _T("\x42\x1EA3o hi\x1EC3m"));
		rpt.GetReportHeader()->SetValue(_T("Object"), _T("\x42\x1EA3o hi\x1EC3m"));
	}
	if(m_nPolicies == 0)
	{
		rpt.GetReportHeader()->SetValue(_T("Storgage"), _T("\x42\x1ED9 \x111\x1ED9i"));
		rpt.GetReportHeader()->SetValue(_T("Object"), _T("\x42\x1ED9 \x111\x1ED9i"));
	}
	if(m_nService == 0)
	{
		rpt.GetReportHeader()->SetValue(_T("Storgage"), _T("\x44\x1ECB\x63h v\x1EE5"));
		rpt.GetReportHeader()->SetValue(_T("Object"), _T("\x44\x1ECB\x63h v\x1EE5"));
	}
	if(m_nAll == 0)
	{
		rpt.GetReportHeader()->SetValue(_T("Storgage"), _T("T\x1EA5t \x63\x1EA3"));
		rpt.GetReportHeader()->SetValue(_T("Object"), _T("T\x1EA5t \x63\x1EA3"));
	}

	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("productname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("uomname")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("qtyorder")));
		rs.GetValue(_T("approvedate"), tmpStr);
		rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("orderdate"), tmpStr);
		rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("partnername")));
		rs.MoveNext();
	}

	szDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szDate.Right(2),szDate.Mid(5,2),szDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}
 
void CMAConsignmentProductList2::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr;
	CStringArray arrCol;
	int nIdx = 1, nRow = 0;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 50);
	xls.SetColumnWidth(6, 6);
	xls.SetColumnWidth(7, 6);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 50);
	xls.SetColumnWidth(11, 20);
	xls.SetCellMergedColumns(0, 0, 4);
	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 11);
	xls.SetCellMergedColumns(0, 3, 11);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O V\x1EACT T\x1AF K\xDD G\x1EECI \x43H\x1AF\x41 \x43\xD3 H\xD3\x41 \x110\x1A0N"), 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098);

	xls.SetCellText(0, 4, _T("Kho:"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(4, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng:"), FMT_TEXT, true);
	if(m_nInsurance == 0)
		{
			xls.SetCellText(1, 4, _T("\x42\x1EA3o hi\x1EC3m"), FMT_TEXT, true);
			xls.SetCellText(5, 4, _T("\x42\x1EA3o hi\x1EC3m"), FMT_TEXT, true);
		}
	if(m_nPolicies == 0)
		{
			xls.SetCellText(1, 4, _T("\x42\x1ED9 \x111\x1ED9i"), FMT_TEXT, true);
			xls.SetCellText(5, 4, _T("\x42\x1ED9 \x111\x1ED9i"), FMT_TEXT, true);
		}
	if(m_nService == 0)
		{
			xls.SetCellText(1, 4, _T("\x44\x1ECB\x63h v\x1EE5"), FMT_TEXT, true);
			xls.SetCellText(5, 4, _T("\x44\x1ECB\x63h v\x1EE5"), FMT_TEXT, true);
		}
	if(m_nAll == 0)
		{
			xls.SetCellText(1, 4, _T("T\x1EA5t \x63\x1EA3"), FMT_TEXT, true);
			xls.SetCellText(5, 4, _T("T\x1EA5t \x63\x1EA3"), FMT_TEXT, true);
		}

	arrCol.Add(_T("STT"));
	arrCol.Add(_T("M\xE3 \x62\x1EC7nh nh\xE2n"));
	arrCol.Add(_T("T\xEAn \x62\x1EC7nh nh\xE2n"));
	arrCol.Add(_T("Kho\x61"));
	arrCol.Add(_T("Nh\xF3m v\x1EADt t\x1B0"));
	arrCol.Add(_T("V\x1EADt t\x1B0"));
	arrCol.Add(_T("\x110\x1A1n v\x1ECB t\xEDnh"));
	arrCol.Add(_T("S\x1ED1 l\x1B0\x1EE3ng"));
	arrCol.Add(_T("\x110\x1A1n gi\xE1"));
	arrCol.Add(_T("Th\xE0nh ti\x1EC1n"));
	arrCol.Add(_T("\x43\xF4ng ty \x63ung \x63\x1EA5p"));
	arrCol.Add(_T("Mã kho"));
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 5, arrCol.GetAt(i), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(1, nRow, rs.GetValue(_T("docno")), FMT_INTEGER);
		xls.SetCellText(2, nRow, rs.GetValue(_T("patientname")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("deptid")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("productgroup")), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("productname")), FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("uomname")), FMT_TEXT);
		xls.SetCellText(7, nRow, rs.GetValue(_T("qtyorder")), FMT_NUMBER1);
		xls.SetCellText(8, nRow, rs.GetValue(_T("unitprice")), FMT_NUMBER1);
		xls.SetCellText(9, nRow, rs.GetValue(_T("amount")), FMT_NUMBER1);
		xls.SetCellText(10, nRow, rs.GetValue(_T("partnername")), FMT_TEXT);
		xls.SetCellText(11, nRow, rs.GetValue(_T("HPO_STORAGE_ID")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao vat tu ky gui chua co hoa don 2.xls"));
}
 
CString CMAConsignmentProductList2::GetQueryString(){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere.AppendFormat(_T(" AND NVL(mt_status, 'X') <> 'A'"));
	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_bpartnerid = '%s'"), m_szSupplierKey);
	
	if(m_nInsurance == 0)
		szWhere.AppendFormat(_T("AND ho_type IN ('I')"));
	if(m_nPolicies == 0)
		szWhere.AppendFormat(_T("AND ho_type NOT IN ('I', 'S')"));
	if(m_nService == 0)
		szWhere.AppendFormat(_T("AND ho_type IN ('S')"));

	szSQL.Format(_T(" SELECT ") \
		_T("   hpo_docno AS docno,") \
		_T("   get_patientname(hpo_docno) AS patientname,") \
		_T("   product_name AS productname,") \
		_T("   product_uomname AS uomname,") \
		_T("   SUM(hpol_qtyissue) AS qtyorder,") \
		_T("   hpol_unitprice AS unitprice,") \
		_T("   SUM(hpol_qtyissue * hpol_unitprice) AS amount,") \
		_T("   get_partnername(product_bpartnerid) partnername,") \
		_T("   hpo_deptid AS deptid, HPO_STORAGE_ID,") \
		_T("   (SELECT mpt_name FROM m_product_type WHERE mpt_product_type_id = product_groupid) AS productgroup") \
		_T(" FROM hms_pharmaorder_view") \
		_T(" LEFT JOIN HMS_PHARMAORDERLINE_VIEW_TB") \
		_T(" ON ( hpo_docno = hpol_docno AND hpo_orderid = hpol_orderid )") \
		_T(" LEFT JOIN purchase_orderline2") \
		_T(" ON (pol_orderid     = hpol_orderid") \
		_T(" AND hpol_product_id = pol_product_id)") \
		_T(" LEFT JOIN m_transaction") \
		_T(" ON (mt_transaction_id = pol_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view3") \
		_T(" ON ( hpol_product_item_id = product_item_id )") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON ( ho_id           = hpo_object_id )") \
		_T(" WHERE hpo_storage_id IN (12, 13) AND hpol_qtyissue>0") \
		_T(" AND hpo_orderstatus  = 'A' %s") \
		_T(" GROUP BY HPO_STORAGE_ID,hpo_docno,") \
		_T("   product_name,") \
		_T("   product_uomname,") \
		_T("   product_bpartnerid,") \
		_T("   hpol_unitprice,") \
		_T("   hpo_deptid,") \
		_T("   product_groupid") \
		_T(" ORDER BY partnername,") \
		_T("   product_groupid,") \
		_T("   productname,") \
		_T("   hpo_deptid,") \
		_T("   docno"), szWhere);
	return szSQL;
}