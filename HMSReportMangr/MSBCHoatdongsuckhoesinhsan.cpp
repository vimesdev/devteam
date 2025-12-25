#include "MSBCHoatdongsuckhoesinhsan.h"
#include "ReportDocument.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCHoatdongsuckhoesinhsan *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongsuckhoesinhsan *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongsuckhoesinhsan *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCHoatdongsuckhoesinhsan *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCHoatdongsuckhoesinhsan *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongsuckhoesinhsan *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCHoatdongsuckhoesinhsan *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCHoatdongsuckhoesinhsan *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CMSBCHoatdongsuckhoesinhsan *pVw = (CMSBCHoatdongsuckhoesinhsan *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCHoatdongsuckhoesinhsan *pVw = (CMSBCHoatdongsuckhoesinhsan *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBCHoatdongsuckhoesinhsan *pVw = (CMSBCHoatdongsuckhoesinhsan *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddMSBCHoatdongsuckhoesinhsanFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnAddMSBCHoatdongsuckhoesinhsan();
} 
static int _OnEditMSBCHoatdongsuckhoesinhsanFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnEditMSBCHoatdongsuckhoesinhsan();
} 
static int _OnDeleteMSBCHoatdongsuckhoesinhsanFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnDeleteMSBCHoatdongsuckhoesinhsan();
} 
static int _OnSaveMSBCHoatdongsuckhoesinhsanFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnSaveMSBCHoatdongsuckhoesinhsan();
} 
static int _OnCancelMSBCHoatdongsuckhoesinhsanFnc(CWnd *pWnd){
	 return ((CMSBCHoatdongsuckhoesinhsan*)pWnd)->OnCancelMSBCHoatdongsuckhoesinhsan();
} 
CMSBCHoatdongsuckhoesinhsan::CMSBCHoatdongsuckhoesinhsan(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMSBCHoatdongsuckhoesinhsan::~CMSBCHoatdongsuckhoesinhsan(){
}
void CMSBCHoatdongsuckhoesinhsan::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 685, 60);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 65, 685, 515);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 320, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 325, 30, 415, 55);
	m_wndToDate.Create(this,420, 30, 635, 55); 
	m_wndSearch.Create(this, _T("@"), 641, 30, 681, 55);
	m_wndList.Create(this,10, 90, 680, 510); 
	m_wndPrint.Create(this, _T("Print"), 515, 522, 595, 547);
	m_wndExport.Create(this, _T("Export"), 600, 522, 680, 547);

}
void CMSBCHoatdongsuckhoesinhsan::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Children"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Women"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Elder"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Total"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Total Exam"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Rate"), CFMT_TEXT, 100);

}
void CMSBCHoatdongsuckhoesinhsan::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

	SetMode(VM_EDIT);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CMSBCHoatdongsuckhoesinhsan::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CMSBCHoatdongsuckhoesinhsan::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCHoatdongsuckhoesinhsan::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCHoatdongsuckhoesinhsan::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CMSBCHoatdongsuckhoesinhsan::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
/*void CMSBCHoatdongsuckhoesinhsan::OnFromDateChange(){
	
} */
/*void CMSBCHoatdongsuckhoesinhsan::OnFromDateSetfocus(){
	
} */
/*void CMSBCHoatdongsuckhoesinhsan::OnFromDateKillfocus(){
	
} */
int CMSBCHoatdongsuckhoesinhsan::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCHoatdongsuckhoesinhsan::OnToDateChange(){
	
} */
/*void CMSBCHoatdongsuckhoesinhsan::OnToDateSetfocus(){
	
} */
/*void CMSBCHoatdongsuckhoesinhsan::OnToDateKillfocus(){
	
} */
int CMSBCHoatdongsuckhoesinhsan::OnToDateCheckValue(){
	return 0;
} 
void CMSBCHoatdongsuckhoesinhsan::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBCHoatdongsuckhoesinhsan::OnListDblClick(){
	
} 
void CMSBCHoatdongsuckhoesinhsan::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCHoatdongsuckhoesinhsan::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCHoatdongsuckhoesinhsan::OnListLoadData(){
	
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szIndex;
	m_wndList.BeginLoad(); 
	BeginWaitCursor();
	int nCount = 0;
	int nIndex = 1;
	szSQL.Format(_T("SELECT Sum(treem) AS treem, ") \
			_T("       Sum(phunu) AS phunu, ") \
			_T("       Sum(nguoigia) AS nguoigia, ") \
			_T("       Sum(treem + phunu + nguoigia) AS tongso, ") \
			_T("       Sum(tskham) AS tskham, ") \
			_T("       CASE WHEN Sum(tskham) > 0 THEN Round(( Sum(treem + phunu + nguoigia) / Sum(tskham) ) * 100, 2) ") \
			_T("       ELSE 0 ") \
			_T("       END AS tyle ") \
			_T("FROM   (SELECT    CASE WHEN ( ( Trunc_date(hd_admitdate) - Trunc_date(hp_birthdate) ) / 365 ) <= 6 ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS treem, ") \
			_T("                  CASE WHEN he_roomid = 12 ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS phunu, ") \
			_T("                  CASE WHEN ( ( Trunc_date(hd_admitdate) - Trunc_date(hp_birthdate) ) / 365 ) >= 75 ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS nguoigia, ") \
			_T("                  CASE WHEN he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS tskham ") \
			_T("        FROM      hms_patient ") \
			_T("        LEFT JOIN hms_doc ON( hd_patientno = hp_patientno ) ") \
			_T("        LEFT JOIN hms_exam ON( hd_docno = he_docno ) ") \
			_T("        WHERE     1 = 1 ") \
			_T("                  AND he_status IN( 'P', 'T' ) ") \
			_T("                  AND he_examdate BETWEEN To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T("                  AND he_roomid IN( 1, 2, 3, 4, ") \
			_T("                                    5, 6, 7, 8, ") \
			_T("                                    9, 10, 11, 12, ") \
			_T("                                    14, 15, 17, 19, ") \
			_T("                                    21, 23, 25, 27, ") \
			_T("                                    29, 31, 33, 35, ") \
			_T("                                    36, 38, 39, 41, ") \
			_T("                                    43, 45, 50, 51, ") \
			_T("                                    52, 53, 54, 56, 57 )) ") , m_szFromDate, m_szToDate);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndList.AddItems(
			szIndex,
			rs.GetValue(_T("treem")),
			rs.GetValue(_T("phunu")),
			rs.GetValue(_T("nguoigia")),
			rs.GetValue(_T("tongso")),
			rs.GetValue(_T("tskham")),
			rs.GetValue(_T("tyle")),
			NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndList.EndLoad(); 
	EndWaitCursor();
	return nCount;

}
void CMSBCHoatdongsuckhoesinhsan::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szSysDate;
	int nIndex = 1;
	int nCount = 0;
	
	szSQL.Format(_T("SELECT Sum(treem) AS treem, ") \
			_T("       Sum(phunu) AS phunu, ") \
			_T("       Sum(nguoigia) AS nguoigia, ") \
			_T("       Sum(treem + phunu + nguoigia) AS tongso, ") \
			_T("       Sum(tskham) AS tskham, ") \
			_T("       CASE WHEN Sum(tskham) > 0 THEN Round(( Sum(treem + phunu + nguoigia) / Sum(tskham) ) * 100, 2) ") \
			_T("       ELSE 0 ") \
			_T("       END AS tyle ") \
			_T("FROM   (SELECT    CASE WHEN hd_object IN ( 6, 9 ) ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS treem, ") \
			_T("                  CASE WHEN he_roomid = 12 ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS phunu, ") \
			_T("                  CASE WHEN ( ( Trunc_date(hd_admitdate) - Trunc_date(hp_birthdate) ) / 365 ) >= 75 ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS nguoigia, ") \
			_T("                  CASE WHEN he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS tskham ") \
			_T("        FROM      hms_patient ") \
			_T("        LEFT JOIN hms_doc ON( hd_patientno = hp_patientno ) ") \
			_T("        LEFT JOIN hms_exam ON( hd_docno = he_docno ) ") \
			_T("        WHERE     1 = 1 ") \
			_T("                  AND he_status IN( 'P', 'T' ) ") \
			_T("                  AND he_examdate BETWEEN To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T("                  AND he_roomid IN( 1, 2, 3, 4, ") \
			_T("                                    5, 6, 7, 8, ") \
			_T("                                    9, 10, 11, 12, ") \
			_T("                                    14, 15, 17, 19, ") \
			_T("                                    21, 23, 25, 27, ") \
			_T("                                    29, 31, 33, 35, ") \
			_T("                                    36, 38, 39, 41, ") \
			_T("                                    43, 45, 50, 51, ") \
			_T("                                    52, 53, 54, 56, 57 )) "), m_szFromDate, m_szToDate);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if (!rpt.Init(_T("Reports/HMS/BCHOATDONGSKSS.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42V TW Q\x110 \x31\x30\x38"));
	//rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetCurrentDepartmentName());
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
	CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("treem"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("phunu"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("nguoigia"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		
		rs.GetValue(_T("tongso"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("tskham"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("tyle"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.MoveNext();
	}
	
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();

} 
void CMSBCHoatdongsuckhoesinhsan::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szFromDate, szToDate, szDate;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	int nIndex = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 19);	xls.SetColumnWidth(2, 14);	xls.SetColumnWidth(3, 15);	xls.SetColumnWidth(4, 16);	xls.SetColumnWidth(5, 20);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 13);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x42\xE1o \x63\xE1o ho\x1EA1t \x111\x1ED9ng s\x1EE9\x63 kh\x1ECF\x65 sinh s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("Tr\x1EBB \x65m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("Ph\x1EE5 n\x1EEF"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Ng\x1B0\x1EDDi gi\xE0"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("T\x1ED5ng s\x1ED1 kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("T\x1EF7 l\x1EC7"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	szFromDate = CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy);	szToDate = CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy);	szDate.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), szFromDate, szToDate);	xls.SetCellText(0, 3, szDate, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 7);	xls.SetMerge(3, 3, 0, 7);	szSQL.Format(_T("SELECT Sum(treem) AS treem, ") \
			_T("       Sum(phunu) AS phunu, ") \
			_T("       Sum(nguoigia) AS nguoigia, ") \
			_T("       Sum(treem + phunu + nguoigia) AS tongso, ") \
			_T("       Sum(tskham) AS tskham, ") \
			_T("       CASE WHEN Sum(tskham) > 0 THEN Round(( Sum(treem + phunu + nguoigia) / Sum(tskham) ) * 100, 2) ") \
			_T("       ELSE 0 ") \
			_T("       END AS tyle ") \
			_T("FROM   (SELECT    CASE WHEN hd_object IN ( 6, 9 ) ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS treem, ") \
			_T("                  CASE WHEN he_roomid = 12 ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS phunu, ") \
			_T("                  CASE WHEN ( ( Trunc_date(hd_admitdate) - Trunc_date(hp_birthdate) ) / 365 ) >= 75 ") \
			_T("                       AND he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS nguoigia, ") \
			_T("                  CASE WHEN he_deptid = 'C1.1' THEN 1 ") \
			_T("                  ELSE 0 ") \
			_T("                  END AS tskham ") \
			_T("        FROM      hms_patient ") \
			_T("        LEFT JOIN hms_doc ON( hd_patientno = hp_patientno ) ") \
			_T("        LEFT JOIN hms_exam ON( hd_docno = he_docno ) ") \
			_T("        WHERE     1 = 1 ") \
			_T("                  AND he_status IN( 'P', 'T' ) ") \
			_T("                  AND he_examdate BETWEEN To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T("                  AND he_roomid IN( 1, 2, 3, 4, ") \
			_T("                                    5, 6, 7, 8, ") \
			_T("                                    9, 10, 11, 12, ") \
			_T("                                    14, 15, 17, 19, ") \
			_T("                                    21, 23, 25, 27, ") \
			_T("                                    29, 31, 33, 35, ") \
			_T("                                    36, 38, 39, 41, ") \
			_T("                                    43, 45, 50, 51, ") \
			_T("                                    52, 53, 54, 56, 57 )) "), m_szFromDate, m_szToDate);	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){	xls.SetCellText(nCol+0, nRow, _T("1"), FMT_TEXT);	rs.GetValue(_T("treem"), tmpStr);	xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("phunu"), tmpStr);	xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("nguoigia"), tmpStr);	xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("tongso"), tmpStr);	xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("tskham"), tmpStr);	xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("tyle"), tmpStr);	xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);	nRow++;	rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\BCHoatdongsuckhoesinhsan.xls"));
} 
int CMSBCHoatdongsuckhoesinhsan::OnAddMSBCHoatdongsuckhoesinhsan(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCHoatdongsuckhoesinhsan::OnEditMSBCHoatdongsuckhoesinhsan(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCHoatdongsuckhoesinhsan::OnDeleteMSBCHoatdongsuckhoesinhsan(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelMSBCHoatdongsuckhoesinhsan();
 	}
	return 0;
}
int CMSBCHoatdongsuckhoesinhsan::OnSaveMSBCHoatdongsuckhoesinhsan(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnMSBCHoatdongsuckhoesinhsanListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCHoatdongsuckhoesinhsan::OnCancelMSBCHoatdongsuckhoesinhsan(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CMSBCHoatdongsuckhoesinhsan::OnMSBCHoatdongsuckhoesinhsanListLoadData(){
	return 0;
}
