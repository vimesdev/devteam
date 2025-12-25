#include "BCTHONGKEKHAMBENH.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHONGKEKHAMBENH *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHONGKEKHAMBENH *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHONGKEKHAMBENH *pVw = (CBCTHONGKEKHAMBENH *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHONGKEKHAMBENH *pVw = (CBCTHONGKEKHAMBENH *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHONGKEKHAMBENH *pVw = (CBCTHONGKEKHAMBENH *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTHONGKEKHAMBENH*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHONGKEKHAMBENH*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENH*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTHONGKEKHAMBENH* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCTHONGKEKHAMBENH *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENH *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCTHONGKEKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENH*)pWnd)->OnAddBCTHONGKEKHAMBENH();
} 
static int _OnEditBCTHONGKEKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENH*)pWnd)->OnEditBCTHONGKEKHAMBENH();
} 
static int _OnDeleteBCTHONGKEKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENH*)pWnd)->OnDeleteBCTHONGKEKHAMBENH();
} 
static int _OnSaveBCTHONGKEKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENH*)pWnd)->OnSaveBCTHONGKEKHAMBENH();
} 
static int _OnCancelBCTHONGKEKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENH*)pWnd)->OnCancelBCTHONGKEKHAMBENH();
} 
CBCTHONGKEKHAMBENH::CBCTHONGKEKHAMBENH(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHONGKEKHAMBENH::~CBCTHONGKEKHAMBENH(){
}
void CBCTHONGKEKHAMBENH::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 731, 30, 821, 55);
	m_wndPrint.Create(this, _T("&Print"), 826, 30, 916, 55);
	m_wndExport.Create(this, _T("&Export"), 921, 30, 1011, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 431, 30, 511, 55);
	m_wndDepartment.Create(this,516, 30, 726, 55); 
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_ALIGNMASK);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(1, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), CFMT_TEXT, 180);

	m_wndList.InsertColumn(2, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(3, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("N\x1ED9i"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 2, 2, 3, false, true);

	m_wndList.InsertColumn(4, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(5, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("Ngo\x1EA1i"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 4, 2, 5, false, true);
	
	m_wndList.InsertColumn(6, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(7, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("M\x1EAFt"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 6, 2, 7, false, true);
	
	m_wndList.InsertColumn(8, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(9, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("T.M.H"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 8, 2, 9, false, true);
	
	m_wndList.InsertColumn(10, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(11, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("R.H.M"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 10, 2, 11, false, true);
	
	m_wndList.InsertColumn(12, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(13, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("\x110\xD4NG Y"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 12, 2, 13, false, true);
	
	m_wndList.InsertColumn(14, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(15, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("S\x1EA3n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 14, 2, 15, false, true);
	
	m_wndList.InsertColumn(16, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(17, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("Nhi"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 16, 2, 17, false, true);
	
	m_wndList.InsertColumn(18, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(19, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("Kh\xE1\x63"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 18, 2, 19, false, true);
	
	m_wndList.InsertColumn(20, _T("Kh\xE1m \x62\x1EC7nh"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(21, _T("V\xE0o vi\x1EC7n"), CFMT_NUMBER, 65);
	TranslateString(_T("\x43\x1ED9ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 20, 2, 21, false, true);

	m_wndList.InsertColumn(22, _T("\x43\x1EA5p thu\x1ED1\x63"), CFMT_TEXT, 150);
	TranslateString(_T("Kh\xE1m \x62\x1EC7nh v\xE0 nh\x1EADn \x111i\x1EC1u tr\x1ECB (s\x1ED1 ng\x1B0\x1EDDi)"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 1, 1, 22, true, true);

}
void CBCTHONGKEKHAMBENH::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);




	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CBCTHONGKEKHAMBENH::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCTHONGKEKHAMBENH::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCTHONGKEKHAMBENH::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHONGKEKHAMBENH::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHONGKEKHAMBENH::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCTHONGKEKHAMBENH::SetMode(int nMode){
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
/*void CBCTHONGKEKHAMBENH::OnFromDateChange(){
	
} */
/*void CBCTHONGKEKHAMBENH::OnFromDateSetfocus(){
	
} */
/*void CBCTHONGKEKHAMBENH::OnFromDateKillfocus(){
	
} */
int CBCTHONGKEKHAMBENH::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHONGKEKHAMBENH::OnToDateChange(){
	
} */
/*void CBCTHONGKEKHAMBENH::OnToDateSetfocus(){
	
} */
/*void CBCTHONGKEKHAMBENH::OnToDateKillfocus(){
	
} */
int CBCTHONGKEKHAMBENH::OnToDateCheckValue(){
	return 0;
} 
void CBCTHONGKEKHAMBENH::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTHONGKEKHAMBENH::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szObject, szDept, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\BAOCAOTHONGKEKHAMBENH.RPT")))
		return;
	int ret =0;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL;
	CReportSection* grp=NULL;
	int nIdx=0;
	grp = rpt.GetGroupHeader(1);
	rptDetail = rpt.AddDetail(grp);
	int nCONG[23];
	for(int i = 2 ; i<23; i++)
	{
		nCONG[i] = 0;
	}
	szSQL =GetQueryString1();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	while (!rs.IsEOF())
	{
		
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));	
		rs.GetValue(_T("NAME"), tmpStr); 
		rptDetail->SetValue(_T("1"), tmpStr); 
	 
		rs.GetValue(_T("NOIK"), tmpStr); 
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr); 
	 
		rs.GetValue(_T("NOIV"), tmpStr); 
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr); 
	 
		rs.GetValue(_T("NGOAIK"), tmpStr); 
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr); 
	 
		rs.GetValue(_T("NGOAIV"), tmpStr); 
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr); 
	 
		rs.GetValue(_T("MATK"), tmpStr); 
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr); 
	 
		rs.GetValue(_T("MATV"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr); 
	 
		rs.GetValue(_T("TMHK"), tmpStr); 
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr); 
	 
		rs.GetValue(_T("TMHV"), tmpStr); 
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr); 
	 
		rs.GetValue(_T("RHMK"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr); 
	 
		rs.GetValue(_T("RHMV"), tmpStr); 
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr); 
	 
		rs.GetValue(_T("YHDTK"), tmpStr);
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr); 

		rs.GetValue(_T("YHDTV"), tmpStr);
		nCONG[13] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("SANK"), tmpStr); 
		nCONG[14] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr); 
	 
		rs.GetValue(_T("SANV"), tmpStr);
		nCONG[15] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr); 
	 
		rs.GetValue(_T("NHIK"), tmpStr); 
		nCONG[16] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr); 
	 
		rs.GetValue(_T("NHIV"), tmpStr); 
		nCONG[17] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr); 
	 
		rs.GetValue(_T("KHACK"), tmpStr);
		nCONG[18] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr); 
	 
		rs.GetValue(_T("KHACV"), tmpStr); 
		nCONG[19] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr); 
	 
		rs.GetValue(_T("CONGK"), tmpStr);
		nCONG[20] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr); 

		rs.GetValue(_T("CONGV"), tmpStr);
		nCONG[21] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("CPT"), tmpStr);
		nCONG[22] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);
		
		rs.MoveNext();	
	}
	//-------------------------------------------------------------------------------
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CBCTHONGKEKHAMBENH::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 9; 
	CString szSQL, tmpStr;
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL); 
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 28);
	xls.SetColumnWidth(1, 6);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 6);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 6);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 6);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 6);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 6);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 6);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 7);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 11);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("TH\x1ED0NG K\xCA KH\xC1M \x42\x1EC6NH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(0, 6, _T("Kh\xE1m \x62\x1EC7nh v\xE0 nh\x1EADn \x111i\x1EC1u tr\x1ECB (S\x1ED1 ng\x1B0\x1EDDi)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 7, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 7, _T("N\x1ED9i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 7, _T("Ngo\x1EA1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("M\x1EAFt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 7, _T("T.M.H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 7, _T("R.H.M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 7, _T("YHDT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 7, _T("S\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 7, _T("Nhi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(16, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(17, 7, _T("Kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(17, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(18, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(19, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(19, 8, _T("Kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(20, 8, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(21, 7, _T("\x43\x1EA5p thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 0, 21);
	xls.SetMerge(4, 4, 0, 21);
	xls.SetMerge(6, 6, 0, 21);
	xls.SetMerge(7, 8, 0, 0);
	xls.SetMerge(7, 7, 1, 2);
	xls.SetMerge(7, 7, 3, 4);
	xls.SetMerge(7, 7, 5, 6);
	xls.SetMerge(7, 7, 7, 8);
	xls.SetMerge(7, 7, 9, 10);
	xls.SetMerge(7, 7, 11, 12);
	xls.SetMerge(7, 7, 13, 14);
	xls.SetMerge(7, 7, 15, 16);
	xls.SetMerge(7, 7, 17, 18);
	xls.SetMerge(7, 7, 19, 20);
	xls.SetMerge(7, 8, 21, 21);
	int nTotal[22];
	for (int i = 1; i<= 21; i++)
	{
		nTotal[i] = 0;
	}
	while(!rs.IsEOF()){

		rs.GetValue(_T("NAME"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NOIK"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("NOIV"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("NGOAIK"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("NGOAIV"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("MATK"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("MATV"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("TMHK"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("TMHV"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("RHMK"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("RHMV"), tmpStr);
		nTotal[10] += ToInt(tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("YHDTK"), tmpStr);
		nTotal[11] += ToInt(tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("YHDTV"), tmpStr);
		nTotal[12] += ToInt(tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("SANK"), tmpStr);
		nTotal[13] += ToInt(tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("SANV"), tmpStr);
		nTotal[14] += ToInt(tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("NHIK"), tmpStr);
		nTotal[15] += ToInt(tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("NHIV"), tmpStr);
		nTotal[16] += ToInt(tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("KHACK"), tmpStr);
		nTotal[17] += ToInt(tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("KHACV"), tmpStr);
		nTotal[18] += ToInt(tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CONGK"), tmpStr);
		nTotal[19] += ToInt(tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CONGV"), tmpStr);
		nTotal[20] += ToInt(tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CPT"), tmpStr);
		nTotal[21] += ToInt(tmpStr);
		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1);
		
		nRow++; 
		rs.MoveNext();	
	}
	xls.SetCellText(nCol, nRow, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER, true, 11);
	 for( int i = 1; i<= 21; i++)
	 {
		 tmpStr.Format(_T("%d"), nTotal[i]);
		 xls.SetCellText(i , nRow , tmpStr, FMT_NUMBER1 | FMT_CENTER, true, 11);
	 }
	EndWaitCursor();
	xls.Save(_T("Exports\\THONG KE KHAM BENH.xls"));	
} 
void CBCTHONGKEKHAMBENH::OnListDblClick(){
	
} 
void CBCTHONGKEKHAMBENH::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHONGKEKHAMBENH::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHONGKEKHAMBENH::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szObject, szNewGroup, szOldGroup;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int nIndex=1;
	int nItem=1;
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		nItem = m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
			rs.GetValue(_T("NOIK")), 
			rs.GetValue(_T("NOIV")), 
			rs.GetValue(_T("NGOAIK")), 
			rs.GetValue(_T("NGOAIV")), 
			rs.GetValue(_T("MATK")), 
			rs.GetValue(_T("MATV")),
			rs.GetValue(_T("TMHK")), 
			rs.GetValue(_T("TMHV")), 
			rs.GetValue(_T("RHMK")), 
			rs.GetValue(_T("RHMV")),
			rs.GetValue(_T("YHDTK")), 
			rs.GetValue(_T("YHDTV")),
			rs.GetValue(_T("SANK")), 
			rs.GetValue(_T("SANV")),
			rs.GetValue(_T("NHIK")), 
			rs.GetValue(_T("NHIV")),
			rs.GetValue(_T("KHACK")),
			rs.GetValue(_T("KHACV")), 
			rs.GetValue(_T("CONGK")),
			rs.GetValue(_T("CONGV")),
			rs.GetValue(_T("CPT")),NULL);
		m_wndList.MergeCell(nItem, 1, nItem, 1);
		m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
		m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTHONGKEKHAMBENH::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHONGKEKHAMBENH::OnDepartmentSelendok(){
	 
}
/*void CBCTHONGKEKHAMBENH::OnDepartmentSetfocus(){
	
}*/
/*void CBCTHONGKEKHAMBENH::OnDepartmentKillfocus(){
	
}*/
long CBCTHONGKEKHAMBENH::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type = 'KB' order by id"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCTHONGKEKHAMBENH::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCTHONGKEKHAMBENH::OnAddBCTHONGKEKHAMBENH(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHONGKEKHAMBENH::OnEditBCTHONGKEKHAMBENH(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHONGKEKHAMBENH::OnDeleteBCTHONGKEKHAMBENH(){
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
 		OnCancelBCTHONGKEKHAMBENH();
 	}
	return 0;
}
int CBCTHONGKEKHAMBENH::OnSaveBCTHONGKEKHAMBENH(){
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
 		//OnBCTHONGKEKHAMBENHListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHONGKEKHAMBENH::OnCancelBCTHONGKEKHAMBENH(){
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
int CBCTHONGKEKHAMBENH::OnBCTHONGKEKHAMBENHListLoadData(){
	return 0;
}
CString CBCTHONGKEKHAMBENH::GetQueryString1(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, tmpStr, szWhere,szDept,szDept1;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HE_DEPTID = '%s'"), m_szDepartmentKey);
		szDept1.AppendFormat(_T(" AND hpo_deptid = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T("AND HPO_ORDERDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSQL.Format(_T(" SELECT HD_OBJECT,NAME,NOIK,NOIV,NGOAIK,NGOAIV,MATK,MATV,TMHK,TMHV,RHMK,RHMV,") \
_T("        YHDTK,YHDTV,SANK,SANV,NHIK,NHIV,KHACK,KHACV,CONGK,CONGV,CPT") \
_T(" FROM(SELECT HD_OBJECT,(SELECT HO_DESC FROM HMS_OBJECT WHERE HO_ID=HD_OBJECT) NAME,") \
_T("        SUM(NOIK) NOIK,SUM(NOIV) NOIV,SUM(NGOAIK) NGOAIK,SUM(NGOAIV) NGOAIV,SUM(MATK) MATK,SUM(MATV) MATV,SUM(TMHK) TMHK,SUM(TMHV) TMHV,SUM(RHMK) RHMK,SUM(RHMV) RHMV,") \
_T("        SUM(YHDTK) YHDTK,SUM(YHDTV) YHDTV,SUM(SANK) SANK,SUM(SANV) SANV,SUM(NHIK) NHIK,SUM(NHIV) NHIV,SUM(KHACK) KHACK,SUM(KHACV) KHACV,") \
_T("        SUM(NOIK+NGOAIK+MATK+TMHK+RHMK+YHDTK+SANK+NHIK+KHACK) CONGK,") \
_T("        SUM(NOIV+NGOAIV+MATV+TMHV+RHMV+YHDTV+SANV+NHIV+KHACV) CONGV") \
_T(" FROM(SELECT HD_OBJECT,") \
_T("        CASE WHEN HRL_TYPE = 2 AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS NOIK,") \
_T("        CASE WHEN HRL_TYPE = 2 AND HCR_NUMINWARD>0 AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS NOIV,") \
_T(" 		CASE WHEN HRL_TYPE = 3 AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS NGOAIK,") \
_T("        CASE WHEN HRL_TYPE = 3 AND HCR_NUMINWARD>0 AND HCR_ADMITDAT BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS NGOAIV,") \
_T(" 		CASE WHEN HRL_TYPE = 4 AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS MATK,") \
_T("        CASE WHEN HRL_TYPE = 4 AND HCR_NUMINWARD>0 AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS MATV,") \
_T(" 		CASE WHEN HRL_TYPE = 0 AND HRL_ID = 4 AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS TMHK,") \
_T("        CASE WHEN HRL_TYPE = 0 AND HRL_ID = 4 AND HCR_NUMINWARD>0 AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS TMHV,") \
_T(" 		CASE WHEN HRL_TYPE = 6 AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS RHMK,") \
_T("        CASE WHEN HRL_TYPE = 6 AND HCR_NUMINWARD>0 AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS RHMV,") \
_T("        CASE WHEN HRL_TYPE = 8 AND HRL_ID=25 AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS YHDTK,") \
_T("        CASE WHEN HRL_TYPE = 8 AND HRL_ID=25 AND HCR_NUMINWARD>0 AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS YHDTV,") \
_T("        CASE WHEN HRL_TYPE = 7 AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS SANK,") \
_T("        CASE WHEN HRL_TYPE = 7 AND HCR_NUMINWARD>0 AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS SANV,") \
_T("        CASE WHEN HRL_TYPE = 11 AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS NHIK,") \
_T("        CASE WHEN HRL_TYPE = 11 AND HCR_NUMINWARD>0 AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS NHIV,") \
_T("        CASE WHEN HRL_ID IN(50,51,53,55,56,57,58,1,12,35,36,38) AND HE_STATUS in('T','P') AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS KHACK,") \
_T("        CASE WHEN HRL_ID IN(50,51,53,55,56,57,58,1,12,35,36,38) AND HCR_NUMINWARD>0 AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') THEN 1 ELSE 0 END AS KHACV") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR = HD_DOCTOR)") \
_T(" LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
_T(" WHERE HD_OBJECT IS NOT NULL %s)") \
_T(" GROUP BY HD_OBJECT)") \
_T(" LEFT JOIN (SELECT HD_OBJECT,") \
_T("                   COUNT(HPO_DOCNO) AS CPT") \
_T(" 				   FROM HMS_DOC") \
_T(" 				   LEFT JOIN HMS_PHARMAORDER ON(HPO_DOCNO=HD_DOCNO)") \
_T("            WHERE HPO_ORDERSTATUS in('S', 'A') AND HD_OBJECT IS NOT NULL %s %s") \
_T("            GROUP BY HD_OBJECT) USING(HD_OBJECT)") \
_T(" WHERE NAME IS NOT NULL") \
_T(" ORDER BY HD_OBJECT"), m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,
m_szFromDate,m_szToDate,szDept, szWhere,szDept1);
	return szSQL;
}