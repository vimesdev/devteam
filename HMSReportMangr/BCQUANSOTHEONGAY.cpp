#include "BCQUANSOTHEONGAY.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCQUANSOTHEONGAY *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCQUANSOTHEONGAY *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCQUANSOTHEONGAY *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCQUANSOTHEONGAY *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCQUANSOTHEONGAY *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCQUANSOTHEONGAY *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCQUANSOTHEONGAY *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCQUANSOTHEONGAY *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCQUANSOTHEONGAY *pVw = (CBCQUANSOTHEONGAY *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCQUANSOTHEONGAY *pVw = (CBCQUANSOTHEONGAY *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCQUANSOTHEONGAY *pVw = (CBCQUANSOTHEONGAY *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCQUANSOTHEONGAY*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCQUANSOTHEONGAY*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCQUANSOTHEONGAY*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCQUANSOTHEONGAY*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOTHEONGAY*)pWnd)->OnAddBCQUANSOTHEONGAY();
} 
static int _OnEditBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOTHEONGAY*)pWnd)->OnEditBCQUANSOTHEONGAY();
} 
static int _OnDeleteBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOTHEONGAY*)pWnd)->OnDeleteBCQUANSOTHEONGAY();
} 
static int _OnSaveBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOTHEONGAY*)pWnd)->OnSaveBCQUANSOTHEONGAY();
} 
static int _OnCancelBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOTHEONGAY*)pWnd)->OnCancelBCQUANSOTHEONGAY();
} 
CBCQUANSOTHEONGAY::CBCQUANSOTHEONGAY(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCQUANSOTHEONGAY::~CBCQUANSOTHEONGAY(){
}
void CBCQUANSOTHEONGAY::OnCreateComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
// 	m_wndFromDateLabel.Create(this, _T("Nh\x1EADp ng\xE0y"), 10, 30, 90, 55);
// 	m_wndFromDate.Create(this,95, 30, 215, 55); 
// 	/*m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
// 	m_wndToDate.Create(this,305, 30, 425, 55); */
// 	m_wndLoad.Create(this, _T("&Load"), 220, 30, 300, 55);
// 	//m_wndPrint.Create(this, _T("&Print"), 620, 30, 710, 55);
// 	m_wndExport.Create(this, _T("&Export"), 305, 30, 425, 55);
// 	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	//m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	//m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndExport.Create(this, _T("&Export"), 525, 30, 615, 55);
	m_wndList.Create(this,3, 64, 1012, 614);

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate +=_T(" 23:59");

	CString tmpStr;
	//UpdateData(false);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(5);
	//m_wndList.SetDisplayColor(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(1, _T("Khoa"), CFMT_TEXT, 40);

	m_wndList.InsertColumn(2, _T("\x43h\x1EC9 ti\xEAu"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("Th\x1EF1\x63 k\xEA"), CFMT_MONEY, 60);
	TranslateString(_T("S\x1ED1 gi\x1B0\x1EDDng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 3, true, true);
	CDate dte;
	dte.ParseDate(m_szFromDate);

	//weekDays wds;
	//int nwds = dte.GetWeekDay();
	//_debug(_T("Century:%d|Day:%d|DOW:%d|wds:%d"), dte.GetCentury(), dte.GetDay(), dte.GetDayOfWeek(), nwds);
	dte -= 2;
	tmpStr.Format(_T("\x42N \x63\x169: %s/%s"), dte.GetDate().Mid(8, 2), dte.GetDate().Mid(5, 2));
	m_wndList.InsertColumn(4, tmpStr, CFMT_MONEY, 70);
	m_wndList.InsertColumn(5, _T("V vi\x1EC7n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("\x43K \x111\x1EBFn"), CFMT_MONEY, 50);
	TranslateString(_T("T\x103ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 5, 1, 6, true, true);

	m_wndList.InsertColumn(7, _T("R\x61 vi\x1EC7n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("\x43K \x111i"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("\x43.vi\x1EC7n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("T\x1EED vong"), CFMT_MONEY, 60);
	TranslateString(_T("Gi\x1EA3m"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 7, 1, 10, true, true);
//----------------------------------------------------------------
	m_wndList.InsertColumn(11, _T("T\x1B0\x1EDBng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("4//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(13, _T("2//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("BHQN"), CFMT_MONEY, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 11, 2, 14, true, true);

	m_wndList.InsertColumn(15, _T("\x42HQ\x110"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(16, _T("T\x1B0\x1EDBng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(17, _T("4//H"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(18, _T("2//H"), CFMT_MONEY, 50);
	TranslateString(_T("BHQH"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 16, 2, 17, true, true);

	m_wndList.InsertColumn(19, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(20, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(21, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(22, _T("DVYT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(23, _T("BHK+N\x1EE3 th\x1EBB"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(24, _T("BHTN"), CFMT_MONEY, 50);
	TranslateString(_T("Th\xE0nh ph\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 11, 1, 24, true, true);
//------------------------------------------------------------------------------
	dte.ParseDate(m_szFromDate);
	dte--;
	tmpStr.Format(_T("\x42N \x63\x169: %s/%s"), dte.GetDate().Mid(8, 2), dte.GetDate().Mid(5, 2));
	m_wndList.InsertColumn(25, tmpStr, CFMT_MONEY, 70);
//------------------------------------------------------------------------------
	m_wndList.InsertColumn(26, _T("V\xE0o"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(27, _T("\x43K \x111\x1EBFn"), CFMT_MONEY, 50);
	TranslateString(_T("T\x103ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 26, 2, 27, true, true);

	m_wndList.InsertColumn(28, _T("Ra"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(29, _T("\x43K \x111i"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(30, _T("TV"), CFMT_MONEY, 50);
	TranslateString(_T("Gi\x1EA3m"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 28, 2, 30, true, true);

	m_wndList.InsertColumn(31, _T("Hi\x1EC7n \x63\xF3"), CFMT_MONEY, 50);
	tmpStr.Format(_T("%s"), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 26, 1, 31, true, true);
//-------------------------------------------------------------------------------
	m_wndList.InsertColumn(32, _T("\x42N ngo\xE0i gi\x1EDD"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(33, _T("T\x1ED5ng s\x1ED1"), CFMT_MONEY, 50);
}
void CBCQUANSOTHEONGAY::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
}
void CBCQUANSOTHEONGAY::OnSetWindowEvents(){
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
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CBCQUANSOTHEONGAY::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCQUANSOTHEONGAY::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCQUANSOTHEONGAY::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCQUANSOTHEONGAY::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCQUANSOTHEONGAY::SetMode(int nMode){
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
/*void CBCQUANSOTHEONGAY::OnFromDateChange(){
	
} */
/*void CBCQUANSOTHEONGAY::OnFromDateSetfocus(){
	
} */
/*void CBCQUANSOTHEONGAY::OnFromDateKillfocus(){
	
} */
int CBCQUANSOTHEONGAY::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCQUANSOTHEONGAY::OnToDateChange(){
	
} */
/*void CBCQUANSOTHEONGAY::OnToDateSetfocus(){
	
} */
/*void CBCQUANSOTHEONGAY::OnToDateKillfocus(){
	
} */
int CBCQUANSOTHEONGAY::OnToDateCheckValue(){
	return 0;
} 
void CBCQUANSOTHEONGAY::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCQUANSOTHEONGAY::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCQUANSOTHEONGAY::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db);  
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 10; 
	CString szSQL, tmpStr, szNewGroup, szOldGroup;
	xls.CreateSheet(1); 
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 7);
	xls.SetColumnWidth(2, 5);
	xls.SetColumnWidth(3, 7);
	xls.SetColumnWidth(4, 6);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6, 5);
	xls.SetColumnWidth(7, 4);
	xls.SetColumnWidth(8, 6);
	xls.SetColumnWidth(9, 5);
	xls.SetColumnWidth(10, 7);
	xls.SetColumnWidth(11, 4);
	xls.SetColumnWidth(12, 4);
	xls.SetColumnWidth(13, 6);
	xls.SetColumnWidth(14, 7);
	xls.SetColumnWidth(15, 7);
	xls.SetColumnWidth(16, 4);
	xls.SetColumnWidth(17, 4);
	xls.SetColumnWidth(18, 4);
	xls.SetColumnWidth(19, 7);
	xls.SetColumnWidth(20, 3);
	xls.SetColumnWidth(21, 4);
	xls.SetColumnWidth(22, 8);
	xls.SetColumnWidth(23, 6);
	xls.SetColumnWidth(24, 7);
	xls.SetColumnWidth(25, 5);
	xls.SetColumnWidth(26, 5);
	xls.SetColumnWidth(27, 5);
	xls.SetColumnWidth(28, 5);
	xls.SetColumnWidth(29, 5);
	xls.SetColumnWidth(30, 6);
	xls.SetColumnWidth(31, 6);
	xls.SetColumnWidth(32, 5);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	CString szSysDate;
	szSysDate.Format(_T("%s"), m_szToDate.Left(10));
	tmpStr.Format(_T("\x42\xC1O \x43\xC1O QU\xC2N S\x1ED0 NG\xC0Y %s TH\xC1NG %s N\x102M %s"), szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 4, _T("K\xEDp tr\x1EF1\x63 :"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 8, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(1, 8, _T("S\x1ED1 gi\x1B0\x1EDDng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(1, 9, _T("\x43hi ti\xEAu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(2, 9, _T("Th\x1EF1\x63 k\xEA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	CString ngay,ngay1,tmpStr1;
	CRecord rs1(&pMF->m_db); 
	CRecord rs2(&pMF->m_db); 
	ngay.Format(_T("SELECT CAST_STRING2TIMESTAMP('%s')-2 NGAY FROM DUAL"), m_szFromDate);
	rs1.ExecSQL(ngay); 
	if (!rs1.IsEOF())
	{
		rs1.GetValue(_T("NGAY"),tmpStr);
		tmpStr1.Format(_T("\x42N \x63\x169 : %s/%s"),tmpStr.Mid(8,2),tmpStr.Mid(5,2));
		xls.SetCellText(3, 8, tmpStr1, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
		rs1.MoveNext();
	}
	xls.SetCellText(4, 8, _T("T\x103ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(4, 9, _T("V\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(5, 9, _T("\x43K \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(6, 4, _T("Y v\x1EE5 :"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 8, _T("Gi\x1EA3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(6, 9, _T("R\x61 vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(7, 9, _T("\x43K \x111i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(8, 9, _T("\x43.vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(9, 9, _T("T\x1EED vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(10, 8, _T("Th\xE0nh ph\x1EA7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(10, 9, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(10, 10, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(11, 4, _T("Ngo\x1EA1i :"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 10, _T("4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(12, 10, _T("2//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(13, 10, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(14, 9, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(15, 9, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(15, 10, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(16, 10, _T("4//H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(17, 4, _T("N\x1ED9i :"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(17, 10, _T("2//H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(18, 9, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(19, 9, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(20, 9, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(21, 9, _T("DVYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(22, 9, _T("BHK+ BH n\x1EE3 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(23, 9, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	ngay1.Format(_T("SELECT CAST_STRING2TIMESTAMP('%s')-1 NGAY1 FROM DUAL"), m_szFromDate);
	rs2.ExecSQL(ngay1);
	if (!rs2.IsEOF())
	{
		rs2.GetValue(_T("NGAY1"),tmpStr);
		tmpStr1.Format(_T("\x42N \x63\xF2n: %s/%s"),tmpStr.Mid(8,2),tmpStr.Mid(5,2));
		xls.SetCellText(24, 8, tmpStr1, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
		rs2.MoveNext();
	}
	tmpStr.Format(_T("%s"), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(25, 8, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(25, 9, _T("T\x103ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(25, 10, _T("V\xE0o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(26, 10, _T("CK \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(27, 9, _T("Gi\x1EA3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(27, 10, _T("R\x61 vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(28, 10, _T("CK \x111i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(29, 10, _T("T\x1EED vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(30, 10, _T("Hi\x1EC7n \x63\xF3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(31, 8, _T("\x42N ngo\xE0i gi\x1EDD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(32, 8, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(2, 2, 0, 32);
	xls.SetMerge(4, 4, 0, 1);
	xls.SetMerge(8, 10, 0, 0);
	xls.SetMerge(8, 8, 1, 2);
	xls.SetMerge(9, 10, 1, 1);
	xls.SetMerge(9, 10, 2, 2);
	xls.SetMerge(8, 10, 3, 3);
	xls.SetMerge(8, 8, 4, 5);
	xls.SetMerge(9, 10, 4, 4);
	xls.SetMerge(9, 10, 5, 5);
	xls.SetMerge(4, 4, 6, 7);
	xls.SetMerge(8, 8, 6, 9);
	xls.SetMerge(9, 10, 6, 6);
	xls.SetMerge(9, 10, 7, 7);
	xls.SetMerge(9, 10, 8, 8);
	xls.SetMerge(9, 10, 9, 9);
	xls.SetMerge(8, 8, 10, 23);
	xls.SetMerge(9, 9, 10, 13);
	xls.SetMerge(4, 4, 11, 12);
	xls.SetMerge(9, 10, 14, 14);
	xls.SetMerge(9, 9, 15, 17);
	xls.SetMerge(4, 4, 17, 19);
	xls.SetMerge(9, 10, 18, 18);
	xls.SetMerge(9, 10, 19, 19);
	xls.SetMerge(9, 10, 20, 20);
	xls.SetMerge(9, 10, 21, 21);
	xls.SetMerge(9, 10, 22, 22);
	xls.SetMerge(9, 10, 23, 23);
	xls.SetMerge(8, 10, 24, 24);
	xls.SetMerge(8, 8, 25, 30);
	xls.SetMerge(9, 9, 25, 26);
	xls.SetMerge(9, 9, 27, 30);
	xls.SetMerge(8, 10, 31, 31);
	xls.SetMerge(8, 10, 32, 32);
	int nTmp = 0, nPrev_Qty = 0, nRemain = 0, nRemain2 = 0;
	int nDataCol[14];
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nTotal[31];
	for (int i = 1; i<= 30; i++)
	{
		nTotal[i] = 0;
	}
	while (!rs.IsEOF())
	{	
		rs.GetValue(_T("KHOA"), tmpStr); 
		xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT | FMT_CENTER);

		//rs.GetValue(_T("CHITIEU"), tmpStr); 
		//nTotal[1] += ToInt(tmpStr);
		//xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		//rs.GetValue(_T("THUCKE"), tmpStr); 
		//nTotal[2] += ToInt(tmpStr);
		//xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("bncu"), tmpStr); 
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("vaovien"), tmpStr); 
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("ckden"), tmpStr); 
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("ravien"), tmpStr); 
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("ckdi"), tmpStr); 
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("chuyenvien"), tmpStr); 
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("tuvong"), tmpStr); 
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c1"), tmpStr); 
		nTotal[10] += ToInt(tmpStr);
		xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c2"), tmpStr); 
		nTotal[11] += ToInt(tmpStr);
		xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c3"), tmpStr); 
		nTotal[12] += ToInt(tmpStr);
		xls.SetCellText(nCol + 12, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c4"), tmpStr); 
		nTotal[13] += ToInt(tmpStr);
		xls.SetCellText(nCol + 13, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c5"), tmpStr); 
		nTotal[14] += ToInt(tmpStr);
		xls.SetCellText(nCol + 14, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c6"), tmpStr); 
		nTotal[15] += ToInt(tmpStr);
		xls.SetCellText(nCol + 15, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c7"), tmpStr); 
		nTotal[16] += ToInt(tmpStr);
		xls.SetCellText(nCol + 16, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c8"), tmpStr); 
		nTotal[17] += ToInt(tmpStr);
		xls.SetCellText(nCol + 17, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c9"), tmpStr); 
		nTotal[18] += ToInt(tmpStr);
		xls.SetCellText(nCol + 18, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c10"), tmpStr); 
		nTotal[19] += ToInt(tmpStr);
		xls.SetCellText(nCol + 19, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c11"), tmpStr); 
		nTotal[20] += ToInt(tmpStr);
		xls.SetCellText(nCol + 20, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c12"), tmpStr); 
		nTotal[21] += ToInt(tmpStr);
		xls.SetCellText(nCol + 21, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c13"), tmpStr); 
		nTotal[22] += ToInt(tmpStr);
		xls.SetCellText(nCol + 22, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c14"), tmpStr); 
		nTotal[23] += ToInt(tmpStr);
		xls.SetCellText(nCol + 23, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("bncon"), tmpStr); 
		nTotal[24] += ToInt(tmpStr);
		xls.SetCellText(nCol + 24, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("vaovien1"), tmpStr); 
		nTotal[25] += ToInt(tmpStr);
		xls.SetCellText(nCol + 25, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("ckden1"), tmpStr); 
		nTotal[26] += ToInt(tmpStr);
		xls.SetCellText(nCol + 26, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("ravien1"), tmpStr); 
		nTotal[27] += ToInt(tmpStr);
		xls.SetCellText(nCol + 27, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("ckdi1"), tmpStr); 
		nTotal[28] += ToInt(tmpStr);
		xls.SetCellText(nCol + 28, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("tuvong1"), tmpStr); 
		nTotal[29] += ToInt(tmpStr);
		xls.SetCellText(nCol + 29, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("hienco"), tmpStr); 
		nTotal[30] += ToInt(tmpStr);
		xls.SetCellText(nCol + 30, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		nRow++;
		rs.MoveNext();
	}
	xls.SetCellMergedColumns(nCol, nRow +1, 1);
	xls.SetCellText(nCol, nRow+1, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER, true, 11);
	
	 for( int i = 1; i<= 30; i++)
	 {
		 tmpStr.Format(_T("%d"), nTotal[i]);
		 xls.SetCellText(i , nRow+1 , tmpStr, FMT_NUMBER1|FMT_CENTER, true, 11);
	 }
	EndWaitCursor();
	xls.Save(_T("Exports\\BAO CAO QUAN SO THEO NGAY.xls"));	
} 
void CBCQUANSOTHEONGAY::OnListDblClick(){
	
} 
void CBCQUANSOTHEONGAY::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCQUANSOTHEONGAY::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCQUANSOTHEONGAY::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;
	CDate dte;
	int nCount = 0;
	szSQL = GetQueryString();
_debug(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return 0;
	m_wndList.DeleteAllColumns();
	//UpdateData(false);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(5);
	//m_wndList.SetDisplayColor(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(1, _T("Khoa"), CFMT_TEXT, 40);

	m_wndList.InsertColumn(2, _T("\x43h\x1EC9 ti\xEAu"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("Th\x1EF1\x63 k\xEA"), CFMT_MONEY, 60);
	TranslateString(_T("S\x1ED1 gi\x1B0\x1EDDng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 3, true, true);
	dte.ParseDate(m_szFromDate);
	dte -= 2;
	tmpStr.Format(_T("\x42N \x63\x169: %s/%s"), dte.GetDate().Mid(8, 2), dte.GetDate().Mid(5, 2));
	m_wndList.InsertColumn(4, tmpStr, CFMT_MONEY, 70);
	m_wndList.InsertColumn(5, _T("V vi\x1EC7n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("\x43K \x111\x1EBFn"), CFMT_MONEY, 50);
	TranslateString(_T("T\x103ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 5, 1, 6, true, true);

	m_wndList.InsertColumn(7, _T("R\x61 vi\x1EC7n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("\x43K \x111i"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("\x43.vi\x1EC7n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("T\x1EED vong"), CFMT_MONEY, 60);
	TranslateString(_T("Gi\x1EA3m"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 7, 1, 10, true, true);
	//----------------------------------------------------------------
	m_wndList.InsertColumn(11, _T("T\x1B0\x1EDBng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("4//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(13, _T("2//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("BHQN"), CFMT_MONEY, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 11, 2, 14, true, true);

	m_wndList.InsertColumn(15, _T("\x42HQ\x110"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(16, _T("T\x1B0\x1EDBng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(17, _T("4//H"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(18, _T("2//H"), CFMT_MONEY, 50);
	TranslateString(_T("BHQH"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 16, 2, 17, true, true);

	m_wndList.InsertColumn(19, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(20, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(21, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(22, _T("DVYT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(23, _T("BHK+N\x1EE3 th\x1EBB"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(24, _T("BHTN"), CFMT_MONEY, 50);
	TranslateString(_T("Th\xE0nh ph\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 11, 1, 24, true, true);
	//------------------------------------------------------------------------------
	dte.ParseDate(m_szFromDate);
	dte--;
	tmpStr.Format(_T("\x42N \x63\x169: %s/%s"), dte.GetDate().Mid(8, 2), dte.GetDate().Mid(5, 2));
	m_wndList.InsertColumn(25, tmpStr, CFMT_MONEY, 70);
	//------------------------------------------------------------------------------
	m_wndList.InsertColumn(26, _T("V\xE0o"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(27, _T("\x43K \x111\x1EBFn"), CFMT_MONEY, 50);
	TranslateString(_T("T\x103ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 26, 2, 27, true, true);

	m_wndList.InsertColumn(28, _T("Ra"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(29, _T("\x43K \x111i"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(30, _T("TV"), CFMT_MONEY, 50);
	TranslateString(_T("Gi\x1EA3m"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 28, 2, 30, true, true);

	m_wndList.InsertColumn(31, _T("Hi\x1EC7n \x63\xF3"), CFMT_MONEY, 50);
	tmpStr.Format(_T("%s"), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 26, 1, 31, true, true);
	//-------------------------------------------------------------------------------
	m_wndList.InsertColumn(32, _T("\x42N ngo\xE0i gi\x1EDD"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(33, _T("T\x1ED5ng s\x1ED1"), CFMT_MONEY, 50);

	m_wndList.BeginLoad();
	int nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("khoa")), 
			rs.GetValue(_T("chitieu")), 
			rs.GetValue(_T("thucke")), 
			rs.GetValue(_T("bncu")), 
			rs.GetValue(_T("vaovien")), 
			rs.GetValue(_T("ckden")), 
			rs.GetValue(_T("ravien")),
			rs.GetValue(_T("ckdi")), 
			rs.GetValue(_T("chuyenvien")), 
			rs.GetValue(_T("tuvong")),
			rs.GetValue(_T("c1")), 
			rs.GetValue(_T("c2")), 
			rs.GetValue(_T("c3")),
			rs.GetValue(_T("c4")), 
			rs.GetValue(_T("c5")), 
			rs.GetValue(_T("c6")),
			rs.GetValue(_T("c7")), 
			rs.GetValue(_T("c8")), 
			rs.GetValue(_T("c9")),
			rs.GetValue(_T("c10")), 
			rs.GetValue(_T("c11")), 
			rs.GetValue(_T("c12")),
			rs.GetValue(_T("c13")), 
			rs.GetValue(_T("c14")),
			rs.GetValue(_T("bncon")), 
			rs.GetValue(_T("vaovien1")), 
			rs.GetValue(_T("ckden1")),
			rs.GetValue(_T("ravien1")), 
			rs.GetValue(_T("ckdi1")),
			rs.GetValue(_T("tuvong1")), 
			rs.GetValue(_T("hienco")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCQUANSOTHEONGAY::OnAddBCQUANSOTHEONGAY(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCQUANSOTHEONGAY::OnEditBCQUANSOTHEONGAY(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCQUANSOTHEONGAY::OnDeleteBCQUANSOTHEONGAY(){
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
 		OnCancelBCQUANSOTHEONGAY();
 	}
	return 0;
}
int CBCQUANSOTHEONGAY::OnSaveBCQUANSOTHEONGAY(){
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
 		//OnBCQUANSOTHEONGAYListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCQUANSOTHEONGAY::OnCancelBCQUANSOTHEONGAY(){
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
int CBCQUANSOTHEONGAY::OnBCQUANSOTHEONGAYListLoadData(){
	return 0;
}

CString CBCQUANSOTHEONGAY::GetQueryString_old(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T(" SELECT htr_deptid khoa,") \
		_T("        sum(socu) bncu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,") \
		_T("        sum(c1) c1,sum(c2) c2,sum(c3) c3,sum(c4) c4,sum(c5) c5,sum(c6) c6,sum(c7) c7,sum(c8)c8,sum(c9)c9,sum(c10)c10,sum(c11)c11,sum(c12)c12,sum(c13) c13,sum(c14) c14,sum(c15) bncon,") \
		_T("        sum(vaovien1) vaovien1,sum(ckden1) ckden1,sum(ravien1) ravien1,sum(ckdi1) ckdi1,sum(tuvong1) tuvong1,") \
		_T("        (SUM(c15)+sum((vaovien1+ckden1)-(ravien1+ckdi1+tuvong1))) hienco") \
		_T(" FROM(SELECT htr_deptid,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong,") \
		_T("        0 c1,0 c2,0 c3,0 c4,0 c5,0 c6,0 c7,0 c8,0 c9,0 c10,0 c11,0 c12,0 c13,0 c14,0 c15,") \
		_T("        0 vaovien1,0 ckden1,0 ravien1,0 ckdi1,0 tuvong1") \
		_T(" FROM(SELECT hd_docno,doituong,htr_deptid") \
		_T(" FROM(SELECT distinct hd_docno,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE  htr_deptid not in('A4') AND htr_status='I' AND htr_admitdate < Cast_string2timestamp('%s')-1") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE  htr_deptid not in('A4') AND htr_status='T' AND htr_admitdate < Cast_string2timestamp('%s')-1 AND htr_dischargedate >= cast_string2timestamp('%s')-1))") \
		_T(" GROUP BY htr_deptid") \
		_T(" UNION ALL") \
		_T(" SELECT htr_deptid,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        0 c1,0 c2,0 c3,0 c4,0 c5,0 c6,0 c7,0 c8,0 c9,0 c10,0 c11,0 c12,0 c13,0 c14,0 c15,") \
		_T("        0 vaovien1,0 ckden1,0 ravien1,0 ckdi1,0 tuvong1") \
		_T(" FROM(SELECT hd_object,htr_deptid,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,htr_deptid,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,htr_deptid,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 5, 6) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status = 'T' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,htr_deptid,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  ( htr_suggestion ='M') AND htr_dischargedate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1)") \
		_T(" GROUP BY htr_deptid") \
		_T(" UNION ALL") \
		_T(" SELECT htr_deptid,") \
		_T("        0 as socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, ") \
		_T("        sum(c1) c1,sum(c2)  c2,sum(c3)  c3,sum(c4)  c4,sum(c5)  c5,sum(c6)  c6,sum(c7)  c7,sum(c8)  c8,") \
		_T("        sum(c9) c9,sum(c10) c10,sum(c11) c11,sum(c12) c12,sum(c13) c13,sum(c14) c14,sum(c15) c15,") \
		_T("        0 vaovien1,0 ckden1,0 ravien1,0 ckdi1,0 tuvong1") \
		_T(" FROM(SELECT htr_deptid,") \
		_T("        case when hd_object = 1 and hd_rank >=15 then 1 else 0 end c1, ") \
		_T("        case when hd_object = 1 and hd_rank IN ( 13, 14 ) then 1 else 0 end c2, ") \
		_T("        case when hd_object = 1 and hd_rank < 13 then 1 else 0 end c3, ") \
		_T("        case when hd_object = 11 then 1 else 0 end c4, ") \
		_T("        case when hd_object =10 then 1 else 0 end c5, ") \
		_T("        case when hd_object IN(2,12) and hd_rank >=15 then 1 else 0 end c6, ") \
		_T("        case when hd_object IN(2,12) and hd_rank IN (13,14) then 1 else 0 end c7, ") \
		_T("        case when hd_object IN(2,12) and hd_rank IN(0,1,2,3,4,5,6,7,8,9,10,11,12) then 1 else 0 end c8, ") \
		_T("        case when hd_object = 8 then 1 else 0 end c9,") \
		_T("        case when hd_object = 6 then 1 else 0 end c10, ") \
		_T("        case when hd_object = 3  then 1 else 0 end c11,") \
		_T("        case when hd_object = 7 then 1 else 0 end c12,") \
		_T("        case when hd_object in(4) then 1 else 0 end c13, ") \
		_T("        case when hd_object = 5 then 1 else 0 end c14,") \
		_T("        1 c15") \
		_T(" FROM(SELECT distinct hd_docno,") \
		_T("        hd_object,") \
		_T("        hd_rank,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE  htr_deptid not in('A4') AND htr_status='I' AND htr_admitdate < Cast_string2timestamp('%s')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,") \
		_T("        hd_object AS doituong,") \
		_T("        hd_rank,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE  htr_deptid not in('A4') AND htr_status='T' AND htr_admitdate < Cast_string2timestamp('%s') AND htr_dischargedate >= cast_string2timestamp('%s')))") \
		_T(" GROUP BY htr_deptid") \
		_T(" UNION ALL") \
		_T(" SELECT htr_deptid,0 socu,") \
		_T("        0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong,") \
		_T("        0 c1,0 c2,0 c3,0 c4,0 c5,0 c6,0 c7,0 c8,0 c9,0 c10,0 c11,0 c12,0 c13,0 c14,0 c15,") \
		_T("        SUM(in_qty)       vaovien1, ") \
		_T(" 		   SUM(movein_qty)   ckden1, ") \
		_T(" 		   SUM(return_unit)  ravien1, ") \
		_T(" 		   SUM(moveout_qty)  ckdi1, ") \
		_T(" 		 	 SUM(dead)         tuvong1") \
		_T(" FROM(SELECT hd_object,htr_deptid,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty,") \
		_T(" 	          0                    dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,htr_deptid,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,htr_deptid,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M') AND hcr_result NOT IN ( 5, 6) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status = 'T' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,htr_deptid,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty,  ") \
		_T(" 	          0 dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  ( htr_suggestion ='M') AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s'))") \
		_T(" GROUP BY htr_deptid)") \
		_T(" GROUP BY htr_deptid") \
		_T(" ORDER BY htr_deptid"),m_szFromDate,
									m_szFromDate,m_szFromDate,
									m_szFromDate,m_szToDate,
									m_szFromDate,m_szToDate,
									m_szFromDate,m_szToDate,
									m_szFromDate,m_szToDate,
									m_szFromDate,
									m_szFromDate,m_szFromDate,
									m_szFromDate,m_szToDate,
									m_szFromDate,m_szToDate,
									m_szFromDate,m_szToDate,
									m_szFromDate,m_szToDate);
	return szSQL;
}

CString CBCQUANSOTHEONGAY::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szFromDate;
	szFromDate.Format(_T("%s 23:59:59"), m_szFromDate.Left(10));
//szSQL.Format(_T(" SELECT khoa, ") \
//_T("        SUM(bncu) bncu, ") \
//_T("        SUM(vaovien) vaovien, ") \
//_T("        SUM(ckden) ckden, ") \
//_T("        SUM(ravien) ravien, ") \
//_T("        SUM(ckdi) ckdi, ") \
//_T("        SUM(chuyenvien) chuyenvien, ") \
//_T("        SUM(tuvong) tuvong, ") \
//_T("        SUM(c1) c1, ") \
//_T("        SUM(c2) c2, ") \
//_T("        SUM(c3) c3, ") \
//_T("        SUM(c4) c4, ") \
//_T("        SUM(c5) c5, ") \
//_T("        SUM(c6) c6, ") \
//_T("        SUM(c7) c7, ") \
//_T("        SUM(c8)c8, ") \
//_T("        SUM(c9)c9, ") \
//_T("        SUM(c10)c10, ") \
//_T("        SUM(c11)c11, ") \
//_T("        SUM(c12)c12, ") \
//_T("        SUM(c13) c13, ") \
//_T("        SUM(c14) c14, ") \
//_T("        SUM(bncon) bncon, ") \
//_T("        SUM(vaovien1) vaovien1, ") \
//_T("        SUM(ckden1) ckden1, ") \
//_T("        SUM(ravien1) ravien1, ") \
//_T("        SUM(ckdi1) ckdi1, ") \
//_T("        SUM(chuyenvien1) chuyenvien1, ") \
//_T("        SUM(tuvong1) tuvong1, ") \
//_T("        ( SUM(bncon) ") \
//_T("          + SUM((vaovien1+ckden1)-(ravien1+ckdi1+chuyenvien1+tuvong1)) ) hienco ") \
//_T(" FROM  (SELECT deptid khoa, ") \
//_T("               SUM(oldpatient) AS bncu, ") \
//_T("               0 vaovien, ") \
//_T("               0 ckden, ") \
//_T("               0 ravien, ") \
//_T("               0 ckdi, ") \
//_T("               0 chuyenvien, ") \
//_T("               0 tuvong, ") \
//_T("               0 c1, ") \
//_T("               0 c2, ") \
//_T("               0 c3, ") \
//_T("               0 c4, ") \
//_T("               0 c5, ") \
//_T("               0 c6, ") \
//_T("               0 c7, ") \
//_T("               0 c8, ") \
//_T("               0 c9, ") \
//_T("               0 c10, ") \
//_T("               0 c11, ") \
//_T("               0 c12, ") \
//_T("               0 c13, ") \
//_T("               0 c14, ") \
//_T("               0 bncon, ") \
//_T("               0 vaovien1, ") \
//_T("               0 ckden1, ") \
//_T("               0 ravien1, ") \
//_T("               0 ckdi1, ") \
//_T("               0 chuyenvien1, ") \
//_T("               0 tuvong1 ") \
//_T("        FROM  (SELECT deptid, ") \
//_T("                      status, ") \
//_T("                      1 oldpatient ") \
//_T("               FROM  (SELECT    htr_deptid AS deptid, ") \
//_T("                                htr_status AS status, ") \
//_T("                                Trunc(hcr_admitdate) AS admitdate, ") \
//_T("                                Trunc(hcr_dischargedate) AS dischargedate ") \
//_T("                      FROM      hms_clinical_record ") \
//_T("                      LEFT JOIN hms_treatment_record ON( htr_docno = hcr_docno AND hcr_refidx = htr_idx ) ") \
//_T("                      LEFT JOIN hms_doc ON( hd_docno = htr_docno ) ") \
//_T("                      WHERE     htr_outpatient = 'N'  OR htr_outpatient IS NULL AND ( Trunc(htr_admitdate) BETWEEN Cast_string2timestamp('%s') - 1 AND Cast_string2timestamp('%s')  OR Trunc(htr_dischargedate) BETWEEN Cast_string2timestamp('%s') - 1 AND Cast_string2timestamp('%s')  OR ( Trunc(htr_admitdate) < Cast_string2timestamp('%s') - 1 AND htr_status IN( 'A', 'I' ) )  OR ( Trunc(htr_admitdate) < Cast_string2timestamp('%s') - 1 AND Trunc(htr_dischargedate) > Cast_string2timestamp('%s') - 1 AND htr_status = 'T' ) ) ") \
//_T("                      UNION ALL ") \
//_T("                      SELECT    htr_ctdeptid AS deptid, ") \
//_T("                                htr_status AS status, ") \
//_T("                                Trunc(hcr_admitdate) AS admitdate, ") \
//_T("                                Trunc(hcr_dischargedate) AS dischargedate ") \
//_T("                      FROM      hms_clinical_record ") \
//_T("                      LEFT JOIN hms_treatment_record ON( htr_docno = hcr_docno AND hcr_refidx = htr_idx ) ") \
//_T("                      LEFT JOIN hms_doc ON( hd_docno = htr_docno ) ") \
//_T("                      WHERE     htr_outpatient = 'N'  OR htr_outpatient IS NULL AND ( Trunc(htr_admitdate) BETWEEN Cast_string2timestamp('%s') - 1 AND Cast_string2timestamp('%s')  OR Trunc(htr_dischargedate) BETWEEN Cast_string2timestamp('%s') - 1 AND Cast_string2timestamp('%s')  OR ( Trunc(htr_admitdate) < Cast_string2timestamp('%s') - 1 AND htr_status IN( 'A', 'I' ) )  OR ( Trunc(htr_admitdate) < Cast_string2timestamp('%s') - 1 AND Trunc(htr_dischargedate) > Cast_string2timestamp('%s') - 1 AND htr_status = 'T' ) )) ") \
//_T("               WHERE  admitdate < Cast_string2timestamp('%s') - 1 AND ( dischargedate >= Cast_string2timestamp('%s') - 1  OR status IN( 'I' ) )) ") \
//_T("        WHERE  deptid IS NOT NULL ") \
//_T("        GROUP  BY deptid ") \
//_T("        UNION ALL ") \
//_T("        SELECT htr_deptid Khoa, ") \
//_T("               0 bncu, ") \
//_T("               SUM(in_qty) vaovien, ") \
//_T("               SUM(movein_qty) ckden, ") \
//_T("               SUM(return_unit) ravien, ") \
//_T("               SUM(moveout_qty) ckdi, ") \
//_T("               SUM(transfer_qty) chuyenvien, ") \
//_T("               SUM(dead) tuvong, ") \
//_T("               0 c1, ") \
//_T("               0 c2, ") \
//_T("               0 c3, ") \
//_T("               0 c4, ") \
//_T("               0 c5, ") \
//_T("               0 c6, ") \
//_T("               0 c7, ") \
//_T("               0 c8, ") \
//_T("               0 c9, ") \
//_T("               0 c10, ") \
//_T("               0 c11, ") \
//_T("               0 c12, ") \
//_T("               0 c13, ") \
//_T("               0 c14, ") \
//_T("               0 bncon, ") \
//_T("               0 vaovien1, ") \
//_T("               0 ckden1, ") \
//_T("               0 ravien1, ") \
//_T("               0 ckdi1, ") \
//_T("               0 chuyenvien1, ") \
//_T("               0 tuvong1 ") \
//_T("        FROM  (SELECT    htr_deptid, ") \
//_T("                         Trunc(htr_admitdate) admit_date, ") \
//_T("                         1 in_qty, ") \
//_T("                         0 movein_qty, ") \
//_T("                         0 return_unit, ") \
//_T("                         0 moveout_qty, ") \
//_T("                         0 transfer_qty, ") \
//_T("                         0 dead ") \
//_T("               FROM      hms_doc ") \
//_T("               LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
//_T("               LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
//_T("               WHERE     htr_status <> 'A' AND hcr_admitdept = htr_deptid AND ( htr_deptid NOT IN( 'B10' )  OR htr_ctdeptid NOT IN( 'B10' ) ) AND htr_outpatient = 'N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') - 1 AND Cast_string2timestamp('%s') - 1 ") \
//_T("               UNION ALL ") \
//_T("               SELECT    htr_deptid, ") \
//_T("                         Trunc(htr_dischargedate), ") \
//_T("                         0, ") \
//_T("                         0, ") \
//_T("                         CASE WHEN htr_suggestion <> 'M' AND hcr_result NOT IN ( 5, 6 ) THEN 1 ") \
//_T("                         ELSE 0 ") \
//_T("                         END, ") \
//_T("                         0, ") \
//_T("                         CASE WHEN htr_suggestion = 'F' THEN 1 ") \
//_T("                         ELSE 0 ") \
//_T("                         END, ") \
//_T("                         CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ") \
//_T("                         ELSE 0 ") \
//_T("                         END ") \
//_T("               FROM      hms_doc ") \
//_T("               LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
//_T("               LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
//_T("               WHERE     htr_status = 'T' AND ( htr_deptid NOT IN( 'B10' )  OR htr_ctdeptid NOT IN( 'B10' ) ) AND htr_outpatient = 'N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') - 1 AND Cast_string2timestamp('%s') - 1 ") \
//_T("               UNION ALL ") \
//_T("               SELECT htr_deptid, ") \
//_T("                      admit_date, ") \
//_T("                      0, ") \
//_T("                      1, ") \
//_T("                      0, ") \
//_T("                      0, ") \
//_T("                      0, ") \
//_T("                      0 ") \
//_T("               FROM  (SELECT    htr_deptid, ") \
//_T("                                Trunc(htr_admitdate) admit_date, ") \
//_T("                                htr_docno ") \
//_T("                      FROM      hms_treatment_record ") \
//_T("                      LEFT JOIN hms_clinical_record ON ( hcr_docno = htr_docno ) ") \
//_T("                      WHERE     htr_status <> 'A' AND hcr_admitdept <> htr_deptid AND ( htr_deptid NOT IN( 'B10' )  OR htr_ctdeptid NOT IN( 'B10' ) ) AND htr_outpatient = 'N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') - 1 AND Cast_string2timestamp('%s') - 1 AND htr_idx > 1) ") \
//_T("               UNION ALL ") \
//_T("               SELECT htr_deptid, ") \
//_T("                      discharge_date, ") \
//_T("                      0, ") \
//_T("                      0, ") \
//_T("                      0, ") \
//_T("                      1, ") \
//_T("                      0, ") \
//_T("                      0 ") \
//_T("               FROM  (SELECT    htr_deptid, ") \
//_T("                                Trunc(htr_dischargedate) discharge_date, ") \
//_T("                                htr_docno ") \
//_T("                      FROM      hms_treatment_record ") \
//_T("                      LEFT JOIN hms_clinical_record ON ( hcr_docno = htr_docno ) ") \
//_T("                      WHERE     htr_suggestion = 'M' AND ( htr_deptid NOT IN( 'B10' )  OR htr_ctdeptid NOT IN( 'B10' ) ) AND htr_outpatient = 'N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') - 1 AND Cast_string2timestamp('%s') - 1)) ") \
//_T("        WHERE  htr_deptid IS NOT NULL ") \
//_T("        GROUP  BY htr_deptid ") \
//_T("        UNION ALL ") \
//_T("        SELECT deptid khoa, ") \
//_T("               0 AS bncu, ") \
//_T("               0 vaovien, ") \
//_T("               0 ckden, ") \
//_T("               0 ravien, ") \
//_T("               0 ckdi, ") \
//_T("               0 chuyenvien, ") \
//_T("               0 tuvong, ") \
//_T("               SUM(c1) c1, ") \
//_T("               SUM(c2) c2, ") \
//_T("               SUM(c3) c3, ") \
//_T("               SUM(c4) c4, ") \
//_T("               SUM(c5) c5, ") \
//_T("               SUM(c6) c6, ") \
//_T("               SUM(c7) c7, ") \
//_T("               SUM(c8) c8, ") \
//_T("               SUM(c9) c9, ") \
//_T("               SUM(c10) c10, ") \
//_T("               SUM(c11) c11, ") \
//_T("               SUM(c12) c12, ") \
//_T("               SUM(c13) c13, ") \
//_T("               SUM(c14) c14, ") \
//_T("               SUM(oldpatient) AS bncon, ") \
//_T("               0 vaovien1, ") \
//_T("               0 ckden1, ") \
//_T("               0 ravien1, ") \
//_T("               0 ckdi1, ") \
//_T("               0 chuyenvien1, ") \
//_T("               0 tuvong1 ") \
//_T("        FROM  (SELECT deptid, ") \
//_T("                      status, ") \
//_T("                      1 oldpatient, ") \
//_T("                      CASE WHEN hd_object = 1 AND hd_rank >= 15 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c1, ") \
//_T("                      CASE WHEN hd_object = 1 AND hd_rank IN ( 13, 14 ) THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c2, ") \
//_T("                      CASE WHEN hd_object = 1 AND hd_rank < 13 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c3, ") \
//_T("                      CASE WHEN hd_object = 11 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c4, ") \
//_T("                      CASE WHEN hd_object = 10 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c5, ") \
//_T("                      CASE WHEN hd_object IN( 2, 12 ) AND hd_rank >= 15 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c6, ") \
//_T("                      CASE WHEN hd_object IN( 2, 12 ) AND hd_rank IN ( 13, 14 ) THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c7, ") \
//_T("                      CASE WHEN hd_object IN( 2, 12 ) AND hd_rank IN( 0, 1, 2, 3, ") \
//_T("                                           4, 5, 6, 7, ") \
//_T("                                           8, 9, 10, 11, 12 ) THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c8, ") \
//_T("                      CASE WHEN hd_object = 8 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c9, ") \
//_T("                      CASE WHEN hd_object = 6 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c10, ") \
//_T("                      CASE WHEN hd_object = 3 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c11, ") \
//_T("                      CASE WHEN hd_object = 7 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c12, ") \
//_T("                      CASE WHEN hd_object IN( 4 ) THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c13, ") \
//_T("                      CASE WHEN hd_object = 5 THEN 1 ") \
//_T("                      ELSE 0 ") \
//_T("                      END c14 ") \
//_T("               FROM  (SELECT    htr_deptid AS deptid, ") \
//_T("                                htr_status AS status, ") \
//_T("                                hd_object, ") \
//_T("                                hd_rank, ") \
//_T("                                Trunc(hcr_admitdate) AS admitdate, ") \
//_T("                                Trunc(hcr_dischargedate) AS dischargedate ") \
//_T("                      FROM      hms_clinical_record ") \
//_T("                      LEFT JOIN hms_treatment_record ON( htr_docno = hcr_docno AND hcr_refidx = htr_idx ) ") \
//_T("                      LEFT JOIN hms_doc ON( hd_docno = htr_docno ) ") \
//_T("                      WHERE     htr_outpatient = 'N' ") \
//_T("					  OR htr_outpatient IS NULL ") \
//_T("					  AND ( Trunc(htr_admitdate) BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
//_T("							OR Trunc(htr_dischargedate) BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
//_T("							OR ( Trunc(htr_admitdate) < Cast_string2timestamp('%s') AND htr_status IN( 'A', 'I' ) ) ") \
//_T("							OR ( Trunc(htr_admitdate) < Cast_string2timestamp('%s') AND Trunc(htr_dischargedate) > Cast_string2timestamp('%s') AND htr_status = 'T' ) ) ") \
//_T("                      UNION ALL ") \
//_T("                      SELECT    htr_ctdeptid AS deptid, ") \
//_T("                                htr_status AS status, ") \
//_T("                                hd_object, ") \
//_T("                                hd_rank, ") \
//_T("                                Trunc(hcr_admitdate) AS admitdate, ") \
//_T("                                Trunc(hcr_dischargedate) AS dischargedate ") \
//_T("                      FROM      hms_clinical_record ") \
//_T("                      LEFT JOIN hms_treatment_record ON( htr_docno = hcr_docno AND hcr_refidx = htr_idx ) ") \
//_T("                      LEFT JOIN hms_doc ON( hd_docno = htr_docno ) ") \
//_T("                      WHERE     htr_outpatient = 'N' ") \
//_T("					  OR htr_outpatient IS NULL ") \
//_T("					  AND ( Trunc(htr_admitdate) BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
//_T("						OR Trunc(htr_dischargedate) BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
//_T("						OR ( Trunc(htr_admitdate) < Cast_string2timestamp('%s') AND htr_status IN( 'A', 'I' ) ) ") \
//_T("						OR ( Trunc(htr_admitdate) < Cast_string2timestamp('%s') AND Trunc(htr_dischargedate) > Cast_string2timestamp('%s') AND htr_status = 'T' ))) ") \
//_T("               WHERE  admitdate < Cast_string2timestamp('%s') AND ( dischargedate >= Cast_string2timestamp('%s')  OR status IN( 'I' ) )) ") \
//_T("        WHERE  deptid IS NOT NULL ") \
//_T("        GROUP  BY deptid ") \
//_T("        UNION ALL ") \
//_T("        SELECT htr_deptid Khoa, ") \
//_T("               0 bncu, ") \
//_T("               0 vaovien, ") \
//_T("               0 ckden, ") \
//_T("               0 ravien, ") \
//_T("               0 ckdi, ") \
//_T("               0 chuyenvien, ") \
//_T("               0 tuvong, ") \
//_T("               0 c1, ") \
//_T("               0 c2, ") \
//_T("               0 c3, ") \
//_T("               0 c4, ") \
//_T("               0 c5, ") \
//_T("               0 c6, ") \
//_T("               0 c7, ") \
//_T("               0 c8, ") \
//_T("               0 c9, ") \
//_T("               0 c10, ") \
//_T("               0 c11, ") \
//_T("               0 c12, ") \
//_T("               0 c13, ") \
//_T("               0 c14, ") \
//_T("               0 bncon, ") \
//_T("               SUM(in_qty) vaovien1, ") \
//_T("               SUM(movein_qty) ckden1, ") \
//_T("               SUM(return_unit) ravien1, ") \
//_T("               SUM(moveout_qty) ckdi1, ") \
//_T("               SUM(transfer_qty) chuyenvien1, ") \
//_T("               SUM(dead) tuvong1 ") \
//_T("        FROM  (SELECT    htr_deptid, ") \
//_T("                         Trunc(htr_admitdate) admit_date, ") \
//_T("                         1 in_qty, ") \
//_T("                         0 movein_qty, ") \
//_T("                         0 return_unit, ") \
//_T("                         0 moveout_qty, ") \
//_T("                         0 transfer_qty, ") \
//_T("                         0 dead ") \
//_T("               FROM      hms_doc ") \
//_T("               LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
//_T("               LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
//_T("               WHERE     htr_status <> 'A' AND hcr_admitdept = htr_deptid AND ( htr_deptid NOT IN( 'B10' )  OR htr_ctdeptid NOT IN( 'B10' ) ) AND htr_outpatient = 'N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
//_T("               UNION ALL ") \
//_T("               SELECT    htr_deptid, ") \
//_T("                         Trunc(htr_dischargedate), ") \
//_T("                         0, ") \
//_T("                         0, ") \
//_T("                         CASE WHEN htr_suggestion <> 'M' AND hcr_result NOT IN ( 5, 6 ) THEN 1 ") \
//_T("                         ELSE 0 ") \
//_T("                         END, ") \
//_T("                         0, ") \
//_T("                         CASE WHEN htr_suggestion = 'F' THEN 1 ") \
//_T("                         ELSE 0 ") \
//_T("                         END, ") \
//_T("                         CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ") \
//_T("                         ELSE 0 ") \
//_T("                         END ") \
//_T("               FROM      hms_doc ") \
//_T("               LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
//_T("               LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
//_T("               WHERE     htr_status = 'T' AND ( htr_deptid NOT IN( 'B10' )  OR htr_ctdeptid NOT IN( 'B10' ) ) AND htr_outpatient = 'N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
//_T("               UNION ALL ") \
//_T("               SELECT htr_deptid, ") \
//_T("                      admit_date, ") \
//_T("                      0, ") \
//_T("                      1, ") \
//_T("                      0, ") \
//_T("                      0, ") \
//_T("                      0, ") \
//_T("                      0 ") \
//_T("               FROM  (SELECT    htr_deptid, ") \
//_T("                                Trunc(htr_admitdate) admit_date, ") \
//_T("                                htr_docno ") \
//_T("                      FROM      hms_treatment_record ") \
//_T("                      LEFT JOIN hms_clinical_record ON ( hcr_docno = htr_docno ) ") \
//_T("                      WHERE     htr_status <> 'A' AND hcr_admitdept <> htr_deptid AND ( htr_deptid NOT IN( 'B10' )  OR htr_ctdeptid NOT IN( 'B10' ) ) AND htr_outpatient = 'N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') AND htr_idx > 1) ") \
//_T("               UNION ALL ") \
//_T("               SELECT htr_deptid, ") \
//_T("                      discharge_date, ") \
//_T("                      0, ") \
//_T("                      0, ") \
//_T("                      0, ") \
//_T("                      1, ") \
//_T("                      0, ") \
//_T("                      0 ") \
//_T("               FROM  (SELECT    htr_deptid, ") \
//_T("                                Trunc(htr_dischargedate) discharge_date, ") \
//_T("                                htr_docno ") \
//_T("                      FROM      hms_treatment_record ") \
//_T("                      LEFT JOIN hms_clinical_record ON ( hcr_docno = htr_docno ) ") \
//_T("                      WHERE     htr_suggestion = 'M' AND ( htr_deptid NOT IN( 'B10' )  OR htr_ctdeptid NOT IN( 'B10' ) ) AND htr_outpatient = 'N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s'))) ") \
//_T("        WHERE  htr_deptid IS NOT NULL ") \
//_T("        GROUP  BY htr_deptid) ") \
//_T(" GROUP  BY khoa ") \
//_T(" ORDER  BY khoa "));
	szSQL.Format(_T("SELECT * FROM hms_doc WHERE rownum < 10"));
	return szSQL;
}
