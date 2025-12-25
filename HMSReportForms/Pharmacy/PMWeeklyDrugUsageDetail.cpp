#include "stdafx.h"
#include "PMWeeklyDrugUsageDetail.h"
#include "MainFrame_E10.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMWeeklyDrugUsageDetail *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMWeeklyDrugUsageDetail *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMWeeklyDrugUsageDetail *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMWeeklyDrugUsageDetail *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMWeeklyDrugUsageDetail *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMWeeklyDrugUsageDetail *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMWeeklyDrugUsageDetail *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMWeeklyDrugUsageDetail *)pWnd)->OnToDateCheckValue();
} 
//static long _OnCategoryLoadDataFnc(CWnd *pWnd){
//	return ((CPMWeeklyDrugUsageDetail *)pWnd)->OnCategoryLoadData();
//}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMWeeklyDrugUsageDetail *)pWnd)->OnListLoadData();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	 ((CPMWeeklyDrugUsageDetail*)pWnd)->OnInpatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CPMWeeklyDrugUsageDetail*)pWnd)->OnOutPatientSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMWeeklyDrugUsageDetail *pVw = (CPMWeeklyDrugUsageDetail *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMWeeklyDrugUsageDetail *pVw = (CPMWeeklyDrugUsageDetail *)pWnd;
	pVw->OnExportSelect();
} 
CPMWeeklyDrugUsageDetail::CPMWeeklyDrugUsageDetail(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMWeeklyDrugUsageDetail::~CPMWeeklyDrugUsageDetail(){
}
void CPMWeeklyDrugUsageDetail::OnCreateComponents(){
	m_wndWeeklyDrugUsageDetail.Create(this, _T("Weekly Drug Usage Detail"), 5, 5, 470, 90);
	m_wndProductCategory.Create(this, _T("Product Category"), 5, 95, 470, 490);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 465, 55); 
	m_wndInpatient.Create(this, _T("InPatient"), 10, 60, 90, 85);
	m_wndOutPatient.Create(this, _T("OutPatient"), 95, 60, 175, 85);
	m_wndAll.Create(this, _T("All"), 180, 60, 260, 85);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 295, 495, 385, 520);
	m_wndExport.Create(this, _T("&Export"), 390, 495, 470, 520);
	m_wndList.Create(this,10, 120, 465, 485); 
	m_wndList.SetCheckBox(true);

}
void CPMWeeklyDrugUsageDetail::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	//m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	//m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	/*m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);*/
	
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Code"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("ID"), CFMT_NUMBER, 0);
}

void CPMWeeklyDrugUsageDetail::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	OnListLoadData();
	UpdateData(false);

}
void CPMWeeklyDrugUsageDetail::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	//DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nClass);

}
void CPMWeeklyDrugUsageDetail::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nClass = 2;
	//m_szCategoryKey.Empty();

}

int CPMWeeklyDrugUsageDetail::SetMode(int nMode){
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

/*void CPMWeeklyDrugUsageDetail::OnFromDateChange(){
	
} */
/*void CPMWeeklyDrugUsageDetail::OnFromDateSetfocus(){
	
} */
/*void CPMWeeklyDrugUsageDetail::OnFromDateKillfocus(){
	
} */
int CPMWeeklyDrugUsageDetail::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPMWeeklyDrugUsageDetail::OnToDateChange(){
	
} */
/*void CPMWeeklyDrugUsageDetail::OnToDateSetfocus(){
	
} */
/*void CPMWeeklyDrugUsageDetail::OnToDateKillfocus(){
	
} */
int CPMWeeklyDrugUsageDetail::OnToDateCheckValue(){
	return 0;
}
//long CPMWeeklyDrugUsageDetail::OnCategoryLoadData(){
//	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	CRecord rs(&pMF->m_db);
//	CString szSQL, szWhere;
//	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
//		szWhere.Format(_T(" and mpc_product_category_id='%s' "), m_szCategoryKey);
//	}
//	m_wndCategory.DeleteAllItems(); 
//	int nCount = 0;
//	szSQL.Format(_T("SELECT mpc_product_category_id as id, mpc_name as name FROM m_product_category WHERE mpc_level = 2 %s ORDER BY id "), szWhere);
//	nCount = rs.ExecSQL(szSQL);
//	while(!rs.IsEOF()){ 
//		m_wndCategory.AddItems(
//			rs.GetValue(_T("id")), 
//			rs.GetValue(_T("name")), NULL);
//		rs.MoveNext();
//	}
//	return nCount;
//}

long CPMWeeklyDrugUsageDetail::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex = 1;
	szSQL.Format(_T("SELECT mpc_product_category_id id, mpc_code code, mpc_name name FROM m_product_category WHERE mpc_level = 2 ORDER BY mpc_product_category_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			int2str(nIndex++), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("ID")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CPMWeeklyDrugUsageDetail::OnInpatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CPMWeeklyDrugUsageDetail::OnOutPatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CPMWeeklyDrugUsageDetail::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate;
	CReportSection *rptDetail = NULL;
	double nCost = 0;
	long double nOriginCost = 0, nSale = 0, nProfit = 0;
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
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), 
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
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
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();

}
 
void CPMWeeklyDrugUsageDetail::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrevMark, szCurMark;
	CStringArray arrField;
	int nCol = 0, nRow = 0, nIdx = 1;
	int nStartPos = 3;//control variable
	double nCost = 0;
	long double nGrpTotal[8], nTotal[8];
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 8; i++)
	{
		nGrpTotal[i] = 0;
		nTotal[i] = 0;
	}
	arrField.Add(_T("sl_quan"));
	arrField.Add(_T("tt_quan"));
	arrField.Add(_T("sl_bhyt"));
	arrField.Add(_T("tt_bhyt"));
	arrField.Add(_T("sl_dv"));
	arrField.Add(_T("tt_dv"));
	arrField.Add(_T("sl_khac"));
	arrField.Add(_T("tt_khac"));
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	/*xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);*/
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 7);
	xls.SetCellMergedColumns(0, 3, 7);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O \x43HI TI\x1EBET TU\x1EA6N T\xCCNH H\xCCNH S\x1EEC \x44\x1EE4NG THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER);

	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("T\xEAn thu\x1ED1\x63"), 4098, true);
	xls.SetCellText(2, 4, _T("\x110\x1A1n v\x1ECB"), 4098, true);
	xls.SetCellText(3, 4, _T("Qu\xE2n"), 4098, true);
	xls.SetCellText(3, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(4, 5, _T("Th\xE0nh ti\x1EC1n"), 4098, true);
	xls.SetCellText(5, 4, _T("\x42HYT"), 4098, true);
	xls.SetCellText(5, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(6, 5, _T("Th\xE0nh ti\x1EC1n"), 4098, true);
	xls.SetCellText(7, 4, _T("\x44\x1ECB\x63h v\x1EE5"), 4098, true);
	xls.SetCellText(7, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(8, 5, _T("Th\xE0nh ti\x1EC1n"), 4098, true);
	xls.SetCellText(9, 4, _T("Kh\xE1\x63"), 4098, true);
	xls.SetCellText(9, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(10, 5, _T("Th\xE0nh ti\x1EC1n"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("ten_nhom"), szCurMark);
		if (szCurMark != szPrevMark)
		{
			//if (nGrpTotal[0] + nGrpTotal[2] + nGrpTotal[4] + nGrpTotal[6] > 0)
			//{
			//	//Tong nhom
			//	xls.SetCellText(2, nRow, _T("T\x1ED5ng nh\xF3m:"), 4098, true);
			//	for (int i = 0; i < arrField.GetCount(); i++)
			//	{
			//		tmpStr.Format(_T("%f"), nGrpTotal[i]);
			//		xls.SetCellText(nStartPos + i, nRow, tmpStr, FMT_NUMBER1, true);
			//		nGrpTotal[i] = 0;
			//	}
			//	nRow++;
			//}
			//Nhom moi
			xls.SetCellText(0, nRow, rs.GetValue(_T("ten_nhom2")), 4098, true);
			nRow++;
			szPrevMark = szCurMark;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("ten_thuoc")), FMT_TEXT);
		xls.SetCellText(nCol + 2, nRow, rs.GetValue(_T("don_vi")), FMT_TEXT);
		for (int i = 0; i < arrField.GetCount(); i++)
		{
			rs.GetValue(arrField.GetAt(i), nCost);
			xls.SetCellText(i + nStartPos, nRow, double2str(nCost), FMT_NUMBER1);
			nGrpTotal[i] += nCost;
			nTotal[i] += nCost;
		}
		nRow++;
		rs.MoveNext();
	}
	//if (nGrpTotal[0] + nGrpTotal[2] + nGrpTotal[4] + nGrpTotal[6] > 0)
	//{
	//	//Tong nhom
	//	xls.SetCellText(2, nRow, _T("T\x1ED5ng nh\xF3m:"), 4098, true);
	//	for (int i = 0; i < arrField.GetCount(); i++)
	//	{
	//		tmpStr.Format(_T("%f"), nGrpTotal[i]);
	//		xls.SetCellText(nStartPos + i, nRow, tmpStr, FMT_NUMBER1, true);
	//		nGrpTotal[i] = 0;
	//	}
	//	nRow++;
	//}
	if (nTotal[0] + nTotal[2] + nTotal[4] + nTotal[6] > 0)
	{
		//Tong nhom
		xls.SetCellText(2, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), 4098, true);
		for (int i = 0; i < arrField.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			xls.SetCellText(nStartPos + i, nRow, tmpStr, FMT_NUMBER1, true);
		}
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao chi tiet tinh hinh su dung thuoc tuan.xls"));
}
 
CString CPMWeeklyDrugUsageDetail::GetQueryString(){
	CString szSQL, szPatientSQL, szOtherSQL, szWhere, szCategoryIDS;
	szWhere.Format(_T(" AND approved_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere.Format(_T(" AND approved_date BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (m_nClass == 0)
		szWhere.AppendFormat(_T(" AND NVL(class, 'X') <> 'KB'"));
	else if (m_nClass == 1)
		szWhere.AppendFormat(_T(" AND NVL(class, 'X') = 'KB'"));
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szCategoryIDS.IsEmpty())
				szCategoryIDS += _T(", ");
			szCategoryIDS.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 3));
		}
	}
	if (!szCategoryIDS.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_rootid IN (%s)"), szCategoryIDS);
	szPatientSQL.Format(_T(" SELECT CASE WHEN ho_type IN ('P', 'D') THEN hpol_qtyorder ELSE 0 END sl_quan, CASE WHEN ho_type IN ('P', 'D') THEN hpol_qtyorder*hpol_unitprice END tt_quan, ") \
					    _T("		CASE WHEN ho_type = 'S' THEN hpol_qtyorder ELSE 0 END sl_dv, CASE WHEN ho_type = 'S' THEN hpol_qtyorder*hpol_unitprice END tt_dv,") \
						_T("		CASE WHEN ho_type = 'I' THEN hpol_qtyorder ELSE 0 END sl_bhyt, CASE WHEN ho_type = 'I' THEN hpol_qtyorder*hpol_unitprice END tt_bhyt,") \
						_T("		0 sl_khac, 0 tt_khac,") \
						_T("		hpol_product_item_id item_id, hpo_approvedate approved_date, hpo_orderstatus status, hpo_depttype class") \
						_T(" FROM hms_pharmaorder_view LEFT JOIN hms_pharmaorderline_view2 ON (hpo_docno = hpol_docno AND hpo_orderid = hpol_orderid) ") \
						_T(" LEFT JOIN hms_object ON (ho_id = hpo_object_id)") \
						_T(" WHERE hpo_orderstatus = 'A'") \
						_T(" UNION ALL") \
						_T(" SELECT 0 sl_quan, 0 tt_quan, sol_qtyorder sl_dv, sol_unitprice*sol_qtyorder tt_dv, 0 sl_bhyt, 0 tt_bhyt, ") \
						_T("		0 sl_khac, 0 tt_khac, ") \
						_T("		sol_product_item_id item_id, so_approveddate approved_date, so_status status, cast(DECODE(so_partner_type_id, 'W', 'KB') as nvarchar2(3)) class ") \
						_T(" FROM sale_order LEFT JOIN sale_orderline ON (so_sale_order_id = sol_sale_order_id)") \
						_T(" WHERE so_status = 'A'"));

	//szPatientSQL.Format(_T(" SELECT CASE WHEN hpo_object_id IN (1, 3, 8) THEN  hpol_qtyorder ELSE 0 END sl_quan, CASE WHEN hpo_object_id IN (1, 3, 8) THEN hpol_qtyorder*hpol_unitprice END tt_quan, ") \
	//				    _T("		CASE WHEN hpo_object_id = 7 THEN hpol_qtyorder ELSE 0 END sl_dv, CASE WHEN hpo_object_id = 7 THEN hpol_qtyorder*hpol_unitprice END tt_dv,") \
	//					_T("		CASE WHEN hpo_object_id IN (2, 4, 5, 6, 9, 10, 11, 12) THEN hpol_qtyorder ELSE 0 END sl_bhyt, CASE WHEN hpo_object_id IN (2, 4, 5, 6, 9, 10, 11, 12) THEN hpol_qtyorder*hpol_unitprice END tt_bhyt,") \
	//					_T("		0 sl_khac, 0 tt_khac,") \
	//					_T("		hpol_product_item_id item_id, hpo_approvedate approved_date, hpo_orderstatus status, hpo_depttype class") \
	//					_T(" FROM hms_pharmaorder_view LEFT JOIN hms_pharmaorderline_view2 ON (hpo_docno = hpol_docno AND hpo_orderid = hpol_orderid) ") \
	//					_T(" WHERE hpo_orderstatus = 'A'") \
	//					_T(" UNION ALL") \
	//					_T(" SELECT 0 sl_quan, 0 tt_quan, sol_qtyorder sl_dv, sol_unitprice*sol_qtyorder tt_dv, 0 sl_bhyt, 0 tt_bhyt, ") \
	//					_T("		0 sl_khac, 0 tt_khac, ") \
	//					_T("		sol_product_item_id item_id, so_approveddate approved_date, so_status status, cast(DECODE(so_partner_type_id, 'W', 'KB', 'I') as nvarchar2(15)) class ") \
	//					_T(" FROM sale_order LEFT JOIN sale_orderline ON (so_sale_order_id = sol_sale_order_id)") \
	//					_T(" WHERE so_status = 'A'"));
	szOtherSQL.Format(_T(" SELECT 0 sl_quan, 0 tt_quan, 0 sl_dv, 0 tt_dv, 0 sl_bhyt, 0 tt_bhyt, ") \
					  _T("		mtl_qtyorder sl_khac, mtl_qtyorder*mtl_saleprice tt_khac, ") \
					  _T("		mtl_product_item_id item_id, mt_approveddate approved_date, mt_status status, NULL class FROM m_transaction LEFT JOIN m_transactionline ON (mt_transaction_id = mtl_transaction_id)") \
					  _T(" WHERE mt_doctype NOT IN ('MOV', 'DRO', 'CRO', 'PRO', 'SRO', 'CSO', 'BIO', 'DMO') AND mt_status = 'A'") \
					  _T(" UNION ALL") \
					  _T(" SELECT 0 sl_quan, 0 tt_quan, 0 sl_dv, 0 tt_dv, 0 sl_bhyt, 0 tt_bhyt, ") \
					  _T("		-1*mil_qtyadj sl_khac, 0 tt_khac,") \
					  _T("		mil_product_item_id item_id, mi_approveddate approved_date, mi_status status, NULL class") \
					  _T(" FROM m_inventory LEFT JOIN m_inventoryline ON (mi_inventory_id = mil_inventory_id) ") \
					  _T(" WHERE mil_qtyadj < 0 AND mi_status = 'A'"));
	szSQL.Format(_T(" SELECT product_rootid ten_nhom, product_rootname ten_nhom2, product_name ten_thuoc, product_uomname don_vi, ") \
				 _T("		sum(sl_quan) sl_quan, sum(tt_quan) tt_quan, sum(sl_bhyt) sl_bhyt, sum(tt_bhyt) tt_bhyt, ") \
				 _T("		sum(sl_dv) sl_dv, sum(tt_dv) tt_dv, sum(sl_khac) sl_khac, sum(tt_khac) tt_khac ") \
				 _T(" FROM (%s UNION ALL %s) tbl0 ") \
				 _T(" LEFT JOIN m_productitem_view3 ON (product_item_id = item_id) ") \
				 _T(" WHERE product_org_id = 'PM' %s ") \
				 _T(" GROUP BY product_rootid, product_name, product_rootname, product_uomname") \
				 _T(" ORDER BY product_rootid, product_name"), szPatientSQL, szOtherSQL, szWhere);
	return szSQL;
}