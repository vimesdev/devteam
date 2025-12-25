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
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCQUANSOTHEONGAY *pVw = (CBCQUANSOTHEONGAY *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCQUANSOTHEONGAY *pVw = (CBCQUANSOTHEONGAY *)pWnd;
	pVw->OnLoadSelect();
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

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCQUANSOTHEONGAY::~CBCQUANSOTHEONGAY(){
}
void CBCQUANSOTHEONGAY::OnCreateComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReportConditionLab.Create(this, _T("Report Condition"), 4, 7, 1021, 60);
	m_wndFromDateLabel.Create(this, _T("Nh\x1EADp ng\xE0y :"), 10, 31, 90, 56);
	m_wndFromDate.Create(this,95, 31, 245, 56); 
	m_wndExport.Create(this, _T("&Export"), 339, 30, 434, 57);
	m_wndLoad.Create(this, _T("Load"), 251, 30, 333, 57);
	m_wndList.Create(this,5, 64, 1022, 704); 

	m_szFromDate  =pMF->GetSysDate();
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
	CString ngay,ngay1,tmpStr1;
	CRecord rs1(&pMF->m_db); 
	CRecord rs2(&pMF->m_db); 
	ngay.Format(_T("SELECT CAST_STRING2TIMESTAMP('%s')-2 NGAY FROM DUAL"), m_szFromDate);
	rs1.ExecSQL(ngay); 
	if (!rs1.IsEOF())
	{
		rs1.GetValue(_T("NGAY"),tmpStr);
		tmpStr1.Format(_T("\x42N \x63\x169: %s/%s"),tmpStr.Mid(8,2),tmpStr.Mid(5,2));
		m_wndList.InsertColumn(4, tmpStr1, CFMT_MONEY, 70);
		rs1.MoveNext();
	}
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
	m_wndList.InsertColumn(23, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(24, _T("BHTN"), CFMT_MONEY, 50);
	TranslateString(_T("Th\xE0nh ph\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 11, 1, 24, true, true);
	//------------------------------------------------------------------------------
	ngay1.Format(_T("SELECT CAST_STRING2TIMESTAMP('%s')-1 NGAY1 FROM DUAL"), m_szFromDate);
	rs2.ExecSQL(ngay1); 
	if (!rs2.IsEOF())
	{
		rs2.GetValue(_T("NGAY1"),tmpStr);
		tmpStr1.Format(_T("\x42N \x63\xF2n: %s/%s"),tmpStr.Mid(8,2),tmpStr.Mid(5,2));
		m_wndList.InsertColumn(25, tmpStr1, CFMT_MONEY, 70);
		rs2.MoveNext();
	}
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
	TranslateString((_T("%s"),CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy)), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 26, 1, 31, true, true);
	//-------------------------------------------------------------------------------
	m_wndList.InsertColumn(32, _T("\x42N ngo\xE0i gi\x1EDD"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(33, _T("T\x1ED5ng s\x1ED1"), CFMT_MONEY, 50);

}
void CBCQUANSOTHEONGAY::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);



}
void CBCQUANSOTHEONGAY::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_szFromDate = pMF->GetSysDate();
	UpdateData(false);

}
void CBCQUANSOTHEONGAY::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);

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
void CBCQUANSOTHEONGAY::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db);  
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 10; 
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4, tmpStr, szNewGroup, szOldGroup;
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
	xls.SetColumnWidth(22, 5);
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
	szSysDate.Format(_T("%s"), m_szFromDate.Left(10));
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
	xls.SetCellText(22, 9, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
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
	tmpStr.Format(_T("%s"), m_szFromDate);
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
	CRecord rs3(&pMF->m_db);  
	CRecord rs4(&pMF->m_db);  
	szSQL = GetBNcu();
	szSQL1 = GetBNcon();
	szSQL2 = GetBNhienco();
	szSQL3 = GetBNravien1();
	szSQL4 = GetBNravien2();
	rs.ExecSQL(szSQL);
	rs1.ExecSQL(szSQL1);
	rs2.ExecSQL(szSQL2);
	rs3.ExecSQL(szSQL3);
	rs4.ExecSQL(szSQL4);
	_fmsg(_T("%s"),szSQL);
	int nTotal[31];
	for (int i = 1; i<= 30; i++)
	{
		nTotal[i] = 0;
	}
	while (!rs.IsEOF()||!rs1.IsEOF()||!rs2.IsEOF()||!rs3.IsEOF()||!rs4.IsEOF())
	{	
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("khoa"), tmpStr); 
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

			/*rs.GetValue(_T("vaovien"), tmpStr); 
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
			xls.SetCellText(nCol + 30, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);*/
			rs.MoveNext();
		}
		if (!rs1.IsEOF())
		{
			rs1.GetValue(_T("khoa"), tmpStr); 
			xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT | FMT_CENTER);

			rs1.GetValue(_T("bncon"), tmpStr); 
			xls.SetCellText(nCol + 24, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
			rs1.MoveNext();
		}
		if (!rs3.IsEOF())
		{
		
			rs3.GetValue(_T("khoa"), tmpStr); 
			xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT | FMT_CENTER);

			rs3.GetValue(_T("vaovien"), tmpStr); 
			xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs3.GetValue(_T("ckden"), tmpStr); 
			xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs3.GetValue(_T("ravien"), tmpStr); 
			xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs3.GetValue(_T("ckdi"), tmpStr); 
			xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs3.GetValue(_T("chuyenvien"), tmpStr); 
			xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs3.GetValue(_T("tuvong"), tmpStr); 
			xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
			rs3.MoveNext();
		}
		if (!rs4.IsEOF())
		{
			
			rs4.GetValue(_T("khoa"), tmpStr); 
			xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT | FMT_CENTER);

			rs4.GetValue(_T("vaovien"), tmpStr); 
			xls.SetCellText(nCol + 25, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs4.GetValue(_T("ckden"), tmpStr); 
			xls.SetCellText(nCol + 26, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs4.GetValue(_T("ravien"), tmpStr); 
			xls.SetCellText(nCol + 27, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs4.GetValue(_T("ckdi"), tmpStr); 
			xls.SetCellText(nCol + 28, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

			rs4.GetValue(_T("tuvong"), tmpStr); 
			xls.SetCellText(nCol + 29, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
			rs4.MoveNext();
		}
		if (!rs2.IsEOF())
		{
			
			rs2.GetValue(_T("khoa"), tmpStr); 
			xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT | FMT_CENTER);

			rs2.GetValue(_T("hienco"), tmpStr); 
			xls.SetCellText(nCol + 30, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
			rs2.MoveNext();
		}
		nRow++;
		
	}
	/*xls.SetCellMergedColumns(nCol, nRow +1, 1);
	xls.SetCellText(nCol, nRow+1, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER, true, 11);

	for( int i = 1; i<= 30; i++)
	{
		tmpStr.Format(_T("%d"), nTotal[i]);
		xls.SetCellText(i , nRow+1 , tmpStr, FMT_NUMBER1, true, 11);
	}*/
	EndWaitCursor();
	xls.Save(_T("Exports\\BAO CAO QUAN SO THEO NGAY.xls"));	
	
} 
void CBCQUANSOTHEONGAY::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
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
CString CBCQUANSOTHEONGAY::GetBNcu()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szFromDate;
	szFromDate.Format(_T("%s 23:59:59"), m_szFromDate.Left(10));
	szSQL.Format(_T(" SELECT khoa,") \
		_T("        count(DISTINCT htr_docno) bncu") \
		_T(" FROM(SELECT htr_deptid khoa,") \
		_T("             htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='I' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')-2") \
		_T(" UNION") \
		_T(" SELECT htr_ctdeptid khoa,") \
		_T("        htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='I' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')-2") \
		_T(" UNION") \
		_T(" SELECT htr_deptid khoa,") \
		_T("        htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='T' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')-2  AND htr_dischargedate >= Cast_string2timestamp('%s')-2") \
		_T(" UNION") \
		_T(" SELECT htr_ctdeptid khoa,") \
		_T("        htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='T' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')-2  AND htr_dischargedate >= Cast_string2timestamp('%s')-2)") \
		_T(" WHERE khoa is not null and khoa not in('B10') GROUP BY khoa") \
		_T(" ORDER BY khoa"),szFromDate,
							szFromDate,
							szFromDate,szFromDate,
							szFromDate,szFromDate);
	return szSQL;
}
CString CBCQUANSOTHEONGAY::GetBNcon()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szFromDate;
	szFromDate.Format(_T("%s 23:59:59"), m_szFromDate.Left(10));
	szSQL.Format(_T(" SELECT khoa,") \
		_T("        count(DISTINCT htr_docno) bncon") \
		_T(" FROM(SELECT htr_deptid khoa,") \
		_T("             htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='I' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')-1") \
		_T(" UNION") \
		_T(" SELECT htr_ctdeptid khoa,") \
		_T("        htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='I' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')-1") \
		_T(" UNION") \
		_T(" SELECT htr_deptid khoa,") \
		_T("        htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='T' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')-1  AND htr_dischargedate >= Cast_string2timestamp('%s')-1") \
		_T(" UNION") \
		_T(" SELECT htr_ctdeptid khoa,") \
		_T("        htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='T' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')-1  AND htr_dischargedate >= Cast_string2timestamp('%s')-1)") \
		_T(" WHERE khoa is not null and khoa not in('B10') GROUP BY khoa") \
		_T(" ORDER BY khoa"),szFromDate,
		szFromDate,
		szFromDate,szFromDate,
		szFromDate,szFromDate);
	return szSQL;
}
CString CBCQUANSOTHEONGAY::GetBNhienco()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szFromDate;
	szFromDate.Format(_T("%s 23:59:59"), m_szFromDate.Left(10));
	szSQL.Format(_T(" SELECT khoa,") \
		_T("        count(DISTINCT htr_docno) hienco") \
		_T(" FROM(SELECT htr_deptid khoa,") \
		_T("             htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='I' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s')") \
		_T(" UNION") \
		_T(" SELECT htr_ctdeptid khoa,") \
		_T("        htr_docno") \
		_T(" FROM hms_treatment_record") \
		_T(" WHERE htr_status ='I' and htr_outpatient='N' and htr_admitdate < Cast_string2timestamp('%s'))") \
		_T(" WHERE khoa is not null and khoa not in('B10') GROUP BY khoa") \
		_T(" ORDER BY khoa"),szFromDate,
		szFromDate);
	return szSQL;
}
CString CBCQUANSOTHEONGAY::GetBNravien1()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szFromDate;
	szFromDate.Format(_T("%s 23:59:59"), m_szFromDate.Left(10));
	szSQL.Format(_T(" SELECT htr_deptid Khoa, ") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T("        SUM(movein_qty)   ckden, ") \
		_T("        SUM(return_unit)  ravien, ") \
		_T("        SUM(moveout_qty)  ckdi, ") \
		_T("        SUM(transfer_qty) chuyenvien,  ") \
		_T(" 	     SUM(dead)         tuvong  ") \
		_T(" FROM (SELECT htr_deptid,") \
		_T("              Trunc(htr_admitdate) admit_date, ") \
		_T("              1                    in_qty, ") \
		_T("              0                    movein_qty, ") \
		_T("              0                    return_unit, ") \
		_T("              0                    moveout_qty, ") \
		_T("              0                    transfer_qty, ") \
		_T("              0                    dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' and htr_outpatient='N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1 ") \
		_T(" UNION ALL ") \
		_T(" SELECT htr_ctdeptid,") \
		_T("        Trunc(htr_admitdate) admit_date, ") \
		_T("        1                    in_qty, ") \
		_T("        0                    movein_qty, ") \
		_T("        0                    return_unit,") \
		_T("        0                    moveout_qty, ") \
		_T("        0                    transfer_qty, ") \
		_T("        0                    dead ") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' and htr_outpatient='N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1 ") \
		_T(" UNION ALL ") \
		_T(" SELECT htr_deptid,") \
		_T("        Trunc(htr_dischargedate),") \
		_T("        0, ") \
		_T("  	     0, ") \
		_T("  	     CASE WHEN htr_suggestion <> 'M' AND hcr_result NOT IN ( 5, 6 ) THEN 1 ELSE 0 END, ") \
		_T("  	     0, ") \
		_T("  	     CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END, ") \
		_T("  	     CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END ") \
		_T("  FROM   hms_doc ") \
		_T("  LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno)") \
		_T("  LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T("  WHERE  htr_status = 'T' and htr_outpatient='N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1") \
		_T("  UNION ALL ") \
		_T("  SELECT htr_ctdeptid,") \
		_T("         Trunc(htr_dischargedate), ") \
		_T("  	     0, ") \
		_T("  	     0, ") \
		_T("  	     CASE WHEN htr_suggestion <> 'M' AND hcr_result NOT IN ( 5, 6 ) THEN 1 ELSE 0 END, ") \
		_T("  	     0, ") \
		_T("  	     CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END, ") \
		_T("  	     CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END ") \
		_T("  FROM   hms_doc ") \
		_T("  LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T("  WHERE  htr_status = 'T' and htr_outpatient='N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1") \
		_T("  UNION ALL ") \
		_T(" SELECT htr_deptid,") \
		_T("         admit_date, ") \
		_T("  	     0, ") \
		_T("  	     1, ") \
		_T("  	     0, ") \
		_T("  	     0, ") \
		_T("  	     0, ") \
		_T("  	     0 ") \
		_T("  FROM(SELECT htr_deptid,Trunc(htr_admitdate) admit_date, ") \
		_T("              htr_docno ") \
		_T("  FROM   hms_treatment_record ") \
		_T("  LEFT JOIN hms_clinical_record ON (hcr_docno = htr_docno)") \
		_T("  WHERE  htr_status <> 'A' AND htr_outpatient='N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1") \
		_T("    AND htr_idx > 2 ) ") \
		_T("  UNION ALL ") \
		_T("  SELECT htr_deptid,") \
		_T("         discharge_date, ") \
		_T("         0, ") \
		_T("         0, ") \
		_T("         0, ") \
		_T("         1, ") \
		_T("         0, ") \
		_T("         0 ") \
		_T("  FROM(SELECT htr_deptid,Trunc(htr_dischargedate) discharge_date, ") \
		_T("  	          htr_docno ") \
		_T("  FROM   hms_treatment_record ") \
		_T("  LEFT JOIN hms_clinical_record ON (hcr_docno = htr_docno)") \
		_T("  WHERE htr_suggestion ='M' AND htr_outpatient='N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s')-1 AND Cast_string2timestamp('%s')-1") \
		_T("    )) ") \
		_T("  WHERE htr_deptid is not null and htr_deptid not in('B10')") \
		_T("  GROUP BY htr_deptid") \
		_T("  ORDER BY htr_deptid"),m_szFromDate,szFromDate,
									m_szFromDate,szFromDate,
									m_szFromDate,szFromDate,
									m_szFromDate,szFromDate,
									m_szFromDate,szFromDate,
									m_szFromDate,szFromDate);
	return szSQL;
}
CString CBCQUANSOTHEONGAY::GetBNravien2()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szFromDate;
	szFromDate.Format(_T("%s 23:59:59"), m_szFromDate.Left(10));
	szSQL.Format(_T(" SELECT htr_deptid Khoa, ") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T("        SUM(movein_qty)   ckden, ") \
		_T("        SUM(return_unit)  ravien, ") \
		_T("        SUM(moveout_qty)  ckdi, ") \
		_T("        SUM(transfer_qty) chuyenvien,  ") \
		_T(" 	     SUM(dead)         tuvong  ") \
		_T(" FROM (SELECT htr_deptid,") \
		_T("              Trunc(htr_admitdate) admit_date, ") \
		_T("              1                    in_qty, ") \
		_T("              0                    movein_qty, ") \
		_T("              0                    return_unit, ") \
		_T("              0                    moveout_qty, ") \
		_T("              0                    transfer_qty, ") \
		_T("              0                    dead") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' and htr_outpatient='N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
		_T(" UNION ALL ") \
		_T(" SELECT htr_ctdeptid,") \
		_T("        Trunc(htr_admitdate) admit_date, ") \
		_T("        1                    in_qty, ") \
		_T("        0                    movein_qty, ") \
		_T("        0                    return_unit,") \
		_T("        0                    moveout_qty, ") \
		_T("        0                    transfer_qty, ") \
		_T("        0                    dead ") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' and htr_outpatient='N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
		_T(" UNION ALL ") \
		_T(" SELECT htr_deptid,") \
		_T("        Trunc(htr_dischargedate),") \
		_T("        0, ") \
		_T("  	     0, ") \
		_T("  	     CASE WHEN htr_suggestion <> 'M' AND hcr_result NOT IN ( 5, 6 ) THEN 1 ELSE 0 END, ") \
		_T("  	     0, ") \
		_T("  	     CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END, ") \
		_T("  	     CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END ") \
		_T("  FROM   hms_doc ") \
		_T("  LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno)") \
		_T("  LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T("  WHERE  htr_status = 'T' and htr_outpatient='N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
		_T("  UNION ALL ") \
		_T("  SELECT htr_ctdeptid,") \
		_T("         Trunc(htr_dischargedate), ") \
		_T("  	     0, ") \
		_T("  	     0, ") \
		_T("  	     CASE WHEN htr_suggestion <> 'M' AND hcr_result NOT IN ( 5, 6 ) THEN 1 ELSE 0 END, ") \
		_T("  	     0, ") \
		_T("  	     CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END, ") \
		_T("  	     CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END ") \
		_T("  FROM   hms_doc ") \
		_T("  LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T("  WHERE  htr_status = 'T' and htr_outpatient='N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
		_T("  UNION ALL ") \
		_T(" SELECT htr_deptid,") \
		_T("         admit_date, ") \
		_T("  	     0, ") \
		_T("  	     1, ") \
		_T("  	     0, ") \
		_T("  	     0, ") \
		_T("  	     0, ") \
		_T("  	     0 ") \
		_T("  FROM(SELECT htr_deptid,Trunc(htr_admitdate) admit_date, ") \
		_T("              htr_docno ") \
		_T("  FROM   hms_treatment_record ") \
		_T("  LEFT JOIN hms_clinical_record ON (hcr_docno = htr_docno)") \
		_T("  WHERE  htr_status <> 'A' AND htr_outpatient='N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
		_T("    AND htr_idx > 2 ) ") \
		_T("  UNION ALL ") \
		_T("  SELECT htr_deptid,") \
		_T("         discharge_date, ") \
		_T("         0, ") \
		_T("         0, ") \
		_T("         0, ") \
		_T("         1, ") \
		_T("         0, ") \
		_T("         0 ") \
		_T("  FROM(SELECT htr_deptid,Trunc(htr_dischargedate) discharge_date, ") \
		_T("  	          htr_docno ") \
		_T("  FROM   hms_treatment_record ") \
		_T("  LEFT JOIN hms_clinical_record ON (hcr_docno = htr_docno)") \
		_T("  WHERE htr_suggestion ='M' AND htr_outpatient='N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
		_T("    )) ") \
		_T("  WHERE htr_deptid is not null and htr_deptid not in('B10')") \
		_T("  GROUP BY htr_deptid") \
		_T("  ORDER BY htr_deptid"),m_szFromDate,szFromDate,
		m_szFromDate,szFromDate,
		m_szFromDate,szFromDate,
		m_szFromDate,szFromDate,
		m_szFromDate,szFromDate,
		m_szFromDate,szFromDate);
	return szSQL;
}
