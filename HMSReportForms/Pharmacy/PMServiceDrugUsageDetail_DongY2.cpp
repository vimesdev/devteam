#include "stdafx.h"
#include "PMServiceDrugUsageDetail_DongY2.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "ReportUtils.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMServiceDrugUsageDetail_DongY2* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnStorageAddNew();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPMServiceDrugUsageDetail_DongY2 *)pWnd)->OnObjectLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMServiceDrugUsageDetail_DongY2 *pVw = (CPMServiceDrugUsageDetail_DongY2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMServiceDrugUsageDetail_DongY2 *pVw = (CPMServiceDrugUsageDetail_DongY2 *)pWnd;
	pVw->OnExportSelect();
} 
CPMServiceDrugUsageDetail_DongY2::CPMServiceDrugUsageDetail_DongY2(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szDept_id = _T("A10");
}
CPMServiceDrugUsageDetail_DongY2::~CPMServiceDrugUsageDetail_DongY2(){
}
void CPMServiceDrugUsageDetail_DongY2::OnCreateComponents(){
	m_wndServiceDrugUsageDetail.Create(this, _T("Service Drug Usage Detail"), 5, 5, 470, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 465, 55); 
	m_wndStorage.SetCheckBox(true);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this,95, 60, 465, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 465, 115); 
	m_wndInpatient.Create(this, _T("In Patient"), 5, 125, 110, 150);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 125, 220, 150);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 295, 125, 385, 150);
	m_wndExport.Create(this, _T("&Export"), 390, 125, 470, 150);
}
void CPMServiceDrugUsageDetail_DongY2::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CPMServiceDrugUsageDetail_DongY2::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CPMServiceDrugUsageDetail_DongY2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
}
void CPMServiceDrugUsageDetail_DongY2::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szObjectKey.Empty();

}
int CPMServiceDrugUsageDetail_DongY2::SetMode(int nMode){
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
/*void CPMServiceDrugUsageDetail_DongY2::OnFromDateChange(){
	
} */
/*void CPMServiceDrugUsageDetail_DongY2::OnFromDateSetfocus(){
	
} */
/*void CPMServiceDrugUsageDetail_DongY2::OnFromDateKillfocus(){
	
} */
int CPMServiceDrugUsageDetail_DongY2::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMServiceDrugUsageDetail_DongY2::OnToDateChange(){
	
} */
/*void CPMServiceDrugUsageDetail_DongY2::OnToDateSetfocus(){
	
} */
/*void CPMServiceDrugUsageDetail_DongY2::OnToDateKillfocus(){
	
} */
int CPMServiceDrugUsageDetail_DongY2::OnToDateCheckValue(){
	return 0;
} 
void CPMServiceDrugUsageDetail_DongY2::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMServiceDrugUsageDetail_DongY2::OnStorageSelendok(){
	 
}
/*void CPMServiceDrugUsageDetail_DongY2::OnStorageSetfocus(){
	
}*/
/*void CPMServiceDrugUsageDetail_DongY2::OnStorageKillfocus(){
	
}*/
long CPMServiceDrugUsageDetail_DongY2::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
}
/*void CPMServiceDrugUsageDetail_DongY2::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

long CPMServiceDrugUsageDetail_DongY2::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndObject.IsSearchKey() && m_szObjectKey.IsEmpty())
		szWhere.Format(_T(" AND ho_id = %s"), m_szObjectKey);
	szSQL.Format(_T("SELECT ho_id id, ho_desc name FROM hms_object WHERE 1=1 %s ORDER BY cast(ho_id as integer)"), szWhere);
	int nCount = rs.ExecSQL(szSQL);
	m_wndObject.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndObject.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CPMServiceDrugUsageDetail_DongY2::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szMoney;
	CReportSection *rptDetail = NULL;
	CReportUtils ru;
	JSONVALUE jv;
	double nCost = 0;
	double nOriginCost = 0, nSale = 0, nProfit = 0;
	int nIdx = 1;
	if (!rpt.Init(_T("Reports\\HMS\\PMS_BAOCAOSUDUNGTHUOCDICHVUDONGY.RPT")))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	ru.PrintDefault(&rpt);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), 
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	jv.Clear();
	jv[_T("ReportDate")] = tmpStr;
	jv[_T("Department")] = pMF->GetDepartmentName(m_szDept_id);
	ru.PrintSection(&rpt, rptReportHeader, jv);
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("docno")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("recordno")));
		rs.GetValue(_T("originprice"), nCost);
		nOriginCost += nCost;
		rptDetail->SetValue(_T("5"), double2str(nCost));
		rs.GetValue(_T("saleprice"), nCost);
		nSale += nCost;
		rptDetail->SetValue(_T("6"), double2str(nCost));
		rs.GetValue(_T("profit"), nCost);
		nProfit += nCost;
		rptDetail->SetValue(_T("7"), double2str(nCost));
		rs.MoveNext();
	}
	if (nOriginCost + nSale + nProfit > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%f"), nOriginCost);
		rptDetail->SetValue(_T("s1"), tmpStr);
		tmpStr.Format(_T("%f"), nSale);
		rptDetail->SetValue(_T("s2"), tmpStr);
		tmpStr.Format(_T("%f"), nProfit);
		rptDetail->SetValue(_T("s3"), tmpStr);
	}
	jv.Clear();
	jv[_T("TotalItem")] = nIdx - 1;
	szMoney.Format(_T("%.2f"), nProfit);
	jv[_T("TotalAmount")] = szMoney;
	MoneyToString(szMoney, tmpStr);
	jv[_T("SumInWord")] = tmpStr;
	ru.PrintSection(&rpt, rptReportFooter, jv);
	EndWaitCursor();
	rpt.PrintPreview();

} 
void CPMServiceDrugUsageDetail_DongY2::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	CStringArray arrCol;
	int nCol = 0, nRow = 0, nIdx = 1;
	double nCost = 0;
	double nOriginCost = 0, nSale = 0, nProfit = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 7);
	xls.SetCellMergedColumns(0, 3, 7);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 \x44\x1ECA\x43H V\x1EE4 \x110\xD4NG Y"), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER);
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("T\xEAn \x62\x1EC7nh nh\xE2n"));
	arrCol.Add(_T("S\x1ED1 HS"));
	arrCol.Add(_T("S\x1ED1 BA"));
	arrCol.Add(_T("TT gi\xE1 g\x1ED1\x63"));
	arrCol.Add(_T("TT gi\xE1 \x62\xE1n"));
	arrCol.Add(_T("Ti\x1EC1n l\xE3i"));
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol + i, 4, arrCol.GetAt(i), 4098, true);
	}
	nRow = 5;
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("pname")), FMT_TEXT);
		xls.SetCellText(nCol + 2, nRow, rs.GetValue(_T("docno")), FMT_TEXT);
		xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("recordno")), FMT_TEXT);
		rs.GetValue(_T("originprice"), nCost);
		nOriginCost += nCost;
		xls.SetCellText(nCol + 4, nRow, double2str(nCost), FMT_NUMBER1);
		rs.GetValue(_T("saleprice"), nCost);
		nSale += nCost;
		xls.SetCellText(nCol + 5, nRow, double2str(nCost), FMT_NUMBER1);
		rs.GetValue(_T("profit"), nCost);
		nProfit += nCost;
		xls.SetCellText(nCol + 6, nRow, double2str(nCost), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nOriginCost + nSale + nProfit > 0)
	{
		xls.SetCellText(nCol + 3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		xls.SetCellText(nCol + 4, nRow, double2str(nOriginCost), FMT_NUMBER1, true);
		xls.SetCellText(nCol + 5, nRow, double2str(nSale), FMT_NUMBER1, true);
		xls.SetCellText(nCol + 6, nRow, double2str(nProfit), FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao su dung thuoc dich vu dong y.xls"));
} 
CString CPMServiceDrugUsageDetail_DongY2::GetQueryString(){
	CString szSQL, szWhere, szTable, szStorages;
	szWhere.Format(_T(" AND hpo_orderstatus = 'A' ") \
				   _T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorages);
	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_object_id = %s"), m_szObjectKey);
	if (m_bInpatient)
	{
		if (!szTable.IsEmpty())
			szTable += _T("UNION ALL");
		szTable.AppendFormat(_T(" SELECT    hpo_docno, ") \
							_T("           hpol_product_item_id, ") \
							_T("           hpol_unitprice, ") \
							_T("           hpol_qtyorder ") \
							_T("            FROM      hms_ipharmaorder ") \
							_T("            LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
							_T("            WHERE 1=1 %s "), szWhere);
	}
	if (m_bOutpatient)
	{
		if (!szTable.IsEmpty())
			szTable += _T("UNION ALL ");
		szTable.AppendFormat(_T(" SELECT    hpo_docno, ") \
							_T("           hpol_product_item_id, ") \
							_T("           hpol_unitprice, ") \
							_T("           hpol_qtyorder ") \
							_T("            FROM      hms_pharmaorder ") \
							_T("            LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
							_T("			WHERE 1=1 %s "), szWhere);
	}
	if (szTable.IsEmpty())
		szTable.Format(_T("SELECT    hpo_docno, ") \
				_T("                      hpol_product_item_id, ") \
				_T("                      hpol_unitprice, ") \
				_T("                      hpol_qtyorder ") \
				_T("            FROM      hms_pharmaorder ") \
				_T("            LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T("			WHERE 1=1 %s") \
				_T("            UNION ALL ") \
				_T("            SELECT    hpo_docno, ") \
				_T("                      hpol_product_item_id, ") \
				_T("                      hpol_unitprice, ") \
				_T("                      hpol_qtyorder ") \
				_T("            FROM      hms_ipharmaorder ") \
				_T("            LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T("            WHERE 1=1 %s"), szWhere, szWhere);
	szSQL.Format(_T(" SELECT    Get_patientname(hpo_docno)                             pname, ") \
				_T("           hpo_docno                                              docno, ") \
				_T("           hcr_recordno                                           recordno, ") \
				_T("           SUM(product_vatprice * hpol_qtyorder)                      originprice, ") \
				_T("           SUM(hpol_unitprice * hpol_qtyorder)                    saleprice, ") \
				_T("           SUM(( hpol_unitprice - product_vatprice ) * hpol_qtyorder) profit ") \
				_T(" FROM      (%s) ") \
				_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hpo_docno ) ") \
				_T(" LEFT JOIN m_productitem_view ON ( hpol_product_item_id = product_item_id ) ") \
				_T(" GROUP     BY hpo_docno, ") \
				_T("              hcr_recordno ") \
				_T(" ORDER     BY hpo_docno "), szTable);

	return szSQL;
}