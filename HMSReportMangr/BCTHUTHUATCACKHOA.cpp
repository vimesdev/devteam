#include "BCTHUTHUATCACKHOA.h"
#include "MainFrm.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHUTHUATCACKHOA *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHUTHUATCACKHOA *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHUTHUATCACKHOA *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHUTHUATCACKHOA *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHUTHUATCACKHOA *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHUTHUATCACKHOA *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHUTHUATCACKHOA *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHUTHUATCACKHOA *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHUTHUATCACKHOA *pVw = (CBCTHUTHUATCACKHOA *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHUTHUATCACKHOA *pVw = (CBCTHUTHUATCACKHOA *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTHUTHUATCACKHOA*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHUTHUATCACKHOA*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHUTHUATCACKHOA*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHUTHUATCACKHOA*)pWnd)->OnListDeleteItem();
} 
static void _OnAllSelectFnc(CWnd* pWnd) {
	((CBCTHUTHUATCACKHOA*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCTHUTHUATCACKHOA*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCTHUTHUATCACKHOA*)pWnd)->OnOutPatientSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHUTHUATCACKHOA *pVw = (CBCTHUTHUATCACKHOA *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddBCTHUTHUATCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHUTHUATCACKHOA*)pWnd)->OnAddBCTHUTHUATCACKHOA();
} 
static int _OnEditBCTHUTHUATCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHUTHUATCACKHOA*)pWnd)->OnEditBCTHUTHUATCACKHOA();
} 
static int _OnDeleteBCTHUTHUATCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHUTHUATCACKHOA*)pWnd)->OnDeleteBCTHUTHUATCACKHOA();
} 
static int _OnSaveBCTHUTHUATCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHUTHUATCACKHOA*)pWnd)->OnSaveBCTHUTHUATCACKHOA();
} 
static int _OnCancelBCTHUTHUATCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHUTHUATCACKHOA*)pWnd)->OnCancelBCTHUTHUATCACKHOA();
} 
CBCTHUTHUATCACKHOA::CBCTHUTHUATCACKHOA(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773; 
	SetDefaultValues();
}
CBCTHUTHUATCACKHOA::~CBCTHUTHUATCACKHOA(){
}
void CBCTHUTHUATCACKHOA::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1014, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 204, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 206, 30, 286, 55);
	m_wndToDate.Create(this,291, 30, 399, 55); 
	m_wndList.Create(this,5, 64, 1014, 614);
	m_wndAll.Create(this, _T("All"), 409, 30, 469, 55);
	m_wndInPatient.Create(this, _T("InPatient"), 473, 30, 533, 55);
	m_wndOutPatient.Create(this, _T("OutPatient"), 537, 30, 597, 55);
	m_wndLoad.Create(this, _T("&Load"), 613, 30, 683, 55);
	m_wndPrint.Create(this, _T("&Print Preview"), 687, 30, 767, 55);
	m_wndExport.Create(this, _T("&Export"), 771, 30, 851, 55);
	
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_ALIGNMASK);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(true);
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("T\xEAn kho\x61"), CFMT_TEXT, 50);
	
	m_wndList.InsertColumn(2, _T("T\x1EA1i ng\x169"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("BHQ t\x1EA1i ng\x169"), CFMT_MONEY, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 2, 2, 3, false, true);
	
	m_wndList.InsertColumn(4, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("DVYT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(11, _T("BHTQ"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i \x110\x1EB7\x63 \x62i\x1EC7t"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 12, false, true);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(13, _T("T\x1EA1i ng\x169"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("BHQ t\x1EA1i ng\x169"), CFMT_MONEY, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 13, 2, 14, false, true);
	
	m_wndList.InsertColumn(15, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(16, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(17, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(18, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(19, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(20, _T("DVYT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(21, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(22, _T("BHTQ"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(23, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i I"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 13, 1, 23, false, true);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(24, _T("T\x1EA1i ng\x169"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(25, _T("BHQ t\x1EA1i ng\x169"), CFMT_MONEY, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 24, 2, 25, false, true);
	
	m_wndList.InsertColumn(26, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(27, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(28, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(29, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(30, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(31, _T("DVYT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(32, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(33, _T("BHTQ"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(34, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i II"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 24, 1, 34, false, true);
	//-----------------------------------------------------------------------
	m_wndList.InsertColumn(35, _T("T\x1EA1i ng\x169"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(36, _T("BHQ t\x1EA1i ng\x169"), CFMT_MONEY, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 35, 2, 36, false, true);
	
	m_wndList.InsertColumn(37, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(38, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(39, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(40, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(41, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(42, _T("DVYT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(43, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(44, _T("BHTQ"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(45, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i III"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 35, 1, 45, false, true);
	m_wndList.InsertColumn(46, _T("T\x1ED5ng \x43\x1ED9ng"), CFMT_MONEY, 50);

}
void CBCTHUTHUATCACKHOA::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCTHUTHUATCACKHOA::OnSetWindowEvents(){
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
	m_wndAll.SetCheck(true);
	m_szCondition = _T("A");

}
void CBCTHUTHUATCACKHOA::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBCTHUTHUATCACKHOA::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHUTHUATCACKHOA::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHUTHUATCACKHOA::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll = 0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CBCTHUTHUATCACKHOA::SetMode(int nMode){
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
/*void CBCTHUTHUATCACKHOA::OnFromDateChange(){
	
} */
/*void CBCTHUTHUATCACKHOA::OnFromDateSetfocus(){
	
} */
/*void CBCTHUTHUATCACKHOA::OnFromDateKillfocus(){
	
} */
int CBCTHUTHUATCACKHOA::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHUTHUATCACKHOA::OnToDateChange(){
	
} */
/*void CBCTHUTHUATCACKHOA::OnToDateSetfocus(){
	
} */
/*void CBCTHUTHUATCACKHOA::OnToDateKillfocus(){
	
} */
int CBCTHUTHUATCACKHOA::OnToDateCheckValue(){
	return 0;
} 
void CBCTHUTHUATCACKHOA::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTHUTHUATCACKHOA::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 7; 
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 5); 
	xls.SetColumnWidth(1, 4); 
	xls.SetColumnWidth(2, 4); 
	xls.SetColumnWidth(3, 4); 
	xls.SetColumnWidth(4, 4); 
	xls.SetColumnWidth(5, 4); 
	xls.SetColumnWidth(6, 4); 
	xls.SetColumnWidth(7, 3); 
	xls.SetColumnWidth(8, 3); 
	xls.SetColumnWidth(9, 4); 
	xls.SetColumnWidth(10, 4); 
	xls.SetColumnWidth(11, 3); 
	xls.SetColumnWidth(12, 3); 
	xls.SetColumnWidth(13, 4); 
	xls.SetColumnWidth(14, 3); 
	xls.SetColumnWidth(15, 4); 
	xls.SetColumnWidth(16, 4); 
	xls.SetColumnWidth(17, 4); 
	xls.SetColumnWidth(18, 3); 
	xls.SetColumnWidth(19, 4); 
	xls.SetColumnWidth(20, 4); 
	xls.SetColumnWidth(21, 4); 
	xls.SetColumnWidth(22, 4); 
	xls.SetColumnWidth(23, 3); 
	xls.SetColumnWidth(24, 4); 
	xls.SetColumnWidth(25, 3); 
	xls.SetColumnWidth(26, 3); 
	xls.SetColumnWidth(27, 4); 
	xls.SetColumnWidth(28, 4); 
	xls.SetColumnWidth(29, 4); 
	xls.SetColumnWidth(30, 4); 
	xls.SetColumnWidth(31, 4); 
	xls.SetColumnWidth(32, 3); 
	xls.SetColumnWidth(33, 3); 
	xls.SetColumnWidth(34, 4); 
	xls.SetColumnWidth(35, 3); 
	xls.SetColumnWidth(36, 4); 
	xls.SetColumnWidth(37, 4); 
	xls.SetColumnWidth(38, 4); 
	xls.SetColumnWidth(39, 4); 
	xls.SetColumnWidth(40, 4); 
	xls.SetColumnWidth(41, 3); 
	xls.SetColumnWidth(42, 3); 
	xls.SetColumnWidth(43, 4); 
	xls.SetColumnWidth(44, 3); 
	xls.SetColumnWidth(45, 5);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 2, _T("TH\x1EE6 THU\x1EACT \x43\xC1\x43 KHO\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(0, 5, _T("T\xEAn kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(1, 5, _T("Lo\x1EA1i \x110\x1EB7\x63 \x62i\x1EC7t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(1, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(1, 7, _T("T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(2, 7, _T("BHQ T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(3, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(4, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(5, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(6, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(7, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(8, 6, _T("DVYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(9, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(10, 6, _T("BHTQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(11, 6, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(12, 5, _T("Lo\x1EA1i I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(12, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(12, 7, _T("T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(13, 7, _T("\x42HQ T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(14, 6, _T("\x42HQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(15, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(16, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(17, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(18, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(19, 6, _T("DVYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(20, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(21, 6, _T("BHTQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(22, 6, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(23, 5, _T("Lo\x1EA1i II"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(23, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(23, 7, _T("T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(24, 7, _T("BHQ T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(25, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(26, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(27, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(28, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(29, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(30, 6, _T("DVYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(31, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(32, 6, _T("BHTQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(33, 6, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(34, 5, _T("Lo\x1EA1i III"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(34, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(34, 7, _T("T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(35, 7, _T("BHQ T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(36, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(37, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(38, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(39, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(40, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(41, 6, _T("DVYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(42, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(43, 6, _T("BHTQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(44, 6, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(45, 5, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(2, 2, 0, 45);
	xls.SetMerge(3, 3, 0, 45);
	xls.SetMerge(5, 7, 0, 0);
	xls.SetMerge(5, 5, 1, 11);
	xls.SetMerge(6, 6, 1, 2);
	xls.SetMerge(6, 7, 3, 3);
	xls.SetMerge(6, 7, 4, 4);
	xls.SetMerge(6, 7, 5, 5);
	xls.SetMerge(6, 7, 6, 6);
	xls.SetMerge(6, 7, 7, 7);
	xls.SetMerge(6, 7, 8, 8);
	xls.SetMerge(6, 7, 9, 9);
	xls.SetMerge(6, 7, 10, 10);
	xls.SetMerge(6, 7, 11, 11);
	xls.SetMerge(5, 5, 12, 22);
	xls.SetMerge(6, 6, 12, 13);
	xls.SetMerge(6, 7, 14, 14);
	xls.SetMerge(6, 7, 15, 15);
	xls.SetMerge(6, 7, 16, 16);
	xls.SetMerge(6, 7, 17, 17);
	xls.SetMerge(6, 7, 18, 18);
	xls.SetMerge(6, 7, 19, 19);
	xls.SetMerge(6, 7, 20, 20);
	xls.SetMerge(6, 7, 21, 21);
	xls.SetMerge(6, 7, 22, 22);
	xls.SetMerge(5, 5, 23, 33);
	xls.SetMerge(6, 6, 23, 24);
	xls.SetMerge(6, 7, 25, 25);
	xls.SetMerge(6, 7, 26, 26);
	xls.SetMerge(6, 7, 27, 27);
	xls.SetMerge(6, 7, 28, 28);
	xls.SetMerge(6, 7, 29, 29);
	xls.SetMerge(6, 7, 30, 30);
	xls.SetMerge(6, 7, 31, 31);
	xls.SetMerge(6, 7, 32, 32);
	xls.SetMerge(6, 7, 33, 33);
	xls.SetMerge(5, 5, 34, 44);
	xls.SetMerge(6, 6, 34, 35);
	xls.SetMerge(6, 7, 36, 36);
	xls.SetMerge(6, 7, 37, 37);
	xls.SetMerge(6, 7, 38, 38);
	xls.SetMerge(6, 7, 39, 39);
	xls.SetMerge(6, 7, 40, 40);
	xls.SetMerge(6, 7, 41, 41);
	xls.SetMerge(6, 7, 42, 42);
	xls.SetMerge(6, 7, 43, 43);
	xls.SetMerge(6, 7, 44, 44);
	xls.SetMerge(5, 7, 45, 45); 
	while(!rs.IsEOF()) 
	{	 
		rs.GetValue(_T("ho_deptid"), tmpStr); 
		xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT);
		 
		rs.GetValue(_T("QUAN"), tmpStr); 
		xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("QUANTN"), tmpStr); 
		xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHQH"), tmpStr); 
		xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHQD"), tmpStr); 
		xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BAN"), tmpStr); 
		xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("TED6T"), tmpStr); 
		xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("CS"), tmpStr); 
		xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("DV"), tmpStr); 
		xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHK"), tmpStr); 
		xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHTN"), tmpStr); 
		xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("CONG"), tmpStr); 
		xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QUAN1"), tmpStr); 
		xls.SetCellText(nCol + 12, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("QUANTN1"), tmpStr); 
		xls.SetCellText(nCol + 13, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHQH1"), tmpStr); 
		xls.SetCellText(nCol + 14, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHQD1"), tmpStr); 
		xls.SetCellText(nCol + 15, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BAN1"), tmpStr); 
		xls.SetCellText(nCol + 16, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("TED6T1"), tmpStr); 
		xls.SetCellText(nCol + 17, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("CS1"), tmpStr); 
		xls.SetCellText(nCol + 18, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("DV1"), tmpStr); 
		xls.SetCellText(nCol + 19, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHK1"), tmpStr); 
		xls.SetCellText(nCol + 20, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHTN1"), tmpStr); 
		xls.SetCellText(nCol + 21, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("CONG1"), tmpStr); 
		xls.SetCellText(nCol + 22, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QUAN2"), tmpStr); 
		xls.SetCellText(nCol + 23, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("QUANTN2"), tmpStr); 
		xls.SetCellText(nCol + 24, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHQH2"), tmpStr); 
		xls.SetCellText(nCol + 25, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHQD2"), tmpStr); 
		xls.SetCellText(nCol + 26, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BAN2"), tmpStr); 
		xls.SetCellText(nCol + 27, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("TED6T2"), tmpStr); 
		xls.SetCellText(nCol + 28, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("CS2"), tmpStr); 
		xls.SetCellText(nCol + 29, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("DV2"), tmpStr); 
		xls.SetCellText(nCol + 30, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHK2"), tmpStr); 
		xls.SetCellText(nCol + 31, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHTN2"), tmpStr); 
		xls.SetCellText(nCol + 32, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("CONG2"), tmpStr); 
		xls.SetCellText(nCol + 33, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QUAN3"), tmpStr); 
		xls.SetCellText(nCol + 34, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("QUANTN3"), tmpStr); 
		xls.SetCellText(nCol + 35, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHQH3"), tmpStr); 
		xls.SetCellText(nCol + 36, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHQD3"), tmpStr); 
		xls.SetCellText(nCol + 37, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BAN3"), tmpStr); 
		xls.SetCellText(nCol + 38, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("TED6T3"), tmpStr); 
		xls.SetCellText(nCol + 39, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("CS3"), tmpStr); 
		xls.SetCellText(nCol + 40, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("DV3"), tmpStr); 
		xls.SetCellText(nCol + 41, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHK3"), tmpStr); 
		xls.SetCellText(nCol + 42, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("BHTN3"), tmpStr); 
		xls.SetCellText(nCol + 43, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		 
		rs.GetValue(_T("CONG3"), tmpStr); 
		xls.SetCellText(nCol + 44, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TONGCONG"), tmpStr); 
		xls.SetCellText(nCol + 45, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		nRow++; 
		rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\THU THUAT CAC KHOA.xls"));
} 
void CBCTHUTHUATCACKHOA::OnListDblClick(){
	
} 
void CBCTHUTHUATCACKHOA::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHUTHUATCACKHOA::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHUTHUATCACKHOA::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("ho_deptid")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("QUANTN")), 
			rs.GetValue(_T("BHQH")),
			rs.GetValue(_T("BHQD")),
			rs.GetValue(_T("BAN")),
			rs.GetValue(_T("TED6T")),
			rs.GetValue(_T("CS")),
			rs.GetValue(_T("DV")),
			rs.GetValue(_T("BHK")),
			rs.GetValue(_T("BHTN")),
			rs.GetValue(_T("CONG")),
			rs.GetValue(_T("QUAN1")), 
			rs.GetValue(_T("QUANTN1")), 
			rs.GetValue(_T("BHQH1")),
			rs.GetValue(_T("BHQD1")),
			rs.GetValue(_T("BAN1")),
			rs.GetValue(_T("TED6T1")),
			rs.GetValue(_T("CS1")),
			rs.GetValue(_T("DV1")),
			rs.GetValue(_T("BHK1")),
			rs.GetValue(_T("BHTN1")),
			rs.GetValue(_T("CONG1")),
			rs.GetValue(_T("QUAN2")), 
			rs.GetValue(_T("QUANTN2")), 
			rs.GetValue(_T("BHQH2")),
			rs.GetValue(_T("BHQD2")),
			rs.GetValue(_T("BAN2")),
			rs.GetValue(_T("TED6T2")),
			rs.GetValue(_T("CS2")),
			rs.GetValue(_T("DV2")),
			rs.GetValue(_T("BHK2")),
			rs.GetValue(_T("BHTN2")),
			rs.GetValue(_T("CONG2")),
			rs.GetValue(_T("QUAN3")), 
			rs.GetValue(_T("QUANTN3")), 
			rs.GetValue(_T("BHQH3")),
			rs.GetValue(_T("BHQD3")),
			rs.GetValue(_T("BAN3")),
			rs.GetValue(_T("TED6T3")),
			rs.GetValue(_T("CS3")),
			rs.GetValue(_T("DV3")),
			rs.GetValue(_T("BHK3")),
			rs.GetValue(_T("BHTN3")),
			rs.GetValue(_T("CONG3")),
			rs.GetValue(_T("TONGCONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTHUTHUATCACKHOA::OnAllSelect() {
	m_szCondition = _T("A");
	//UpdateData(true);
}
void CBCTHUTHUATCACKHOA::OnInPatientSelect(){
	m_szCondition = _T("I");
	//UpdateData(true);
}
void CBCTHUTHUATCACKHOA::OnOutPatientSelect(){
	m_szCondition = _T("E");
	//UpdateData(true);
}
void CBCTHUTHUATCACKHOA::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CReportSection *rptDetail = NULL;
	CReportSection *rptSector = NULL;
	CReportSection *rptFooter = NULL;
	CRecord rs(&pMF->m_db);
	CString szCol, szData;
	if(!rpt.Init(_T("Reports/HMS/THUATTHUATCACKHOA.rpt")) )
		return ;
	CReportSection *pTemp = rpt.GetGroupHeader(1);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	BeginWaitCursor();
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	int nCONG[46];
	for(int i = 0 ; i<46; i++)
	{
		nCONG[i] = 0;
	}
	while(!rs.IsEOF()) 
	{	 
		rptDetail=rpt.AddDetail();
		rs.GetValue(_T("ho_deptid"), tmpStr); 
		rptDetail->SetValue(_T("0"), tmpStr); 
	 
		rs.GetValue(_T("QUAN"), tmpStr); 
		nCONG[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr); 
	 
		rs.GetValue(_T("QUANTN"), tmpStr); 
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr); 
	 
		rs.GetValue(_T("BHQH"), tmpStr); 
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr); 
	 
		rs.GetValue(_T("BHQD"), tmpStr); 
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr); 
	 
		rs.GetValue(_T("BAN"), tmpStr); 
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr); 
	 
		rs.GetValue(_T("TED6T"), tmpStr); 
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr); 
	 
		rs.GetValue(_T("CS"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr); 
	 
		rs.GetValue(_T("DV"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr); 
	 
		rs.GetValue(_T("BHK"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr); 
	 
		rs.GetValue(_T("BHTN"), tmpStr); 
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr); 
	 
		rs.GetValue(_T("CONG"), tmpStr); 
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr); 

		rs.GetValue(_T("QUAN1"), tmpStr); 
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr); 
	 
		rs.GetValue(_T("QUANTN1"), tmpStr); 
		nCONG[13] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr); 
	 
		rs.GetValue(_T("BHQH1"), tmpStr); 
		nCONG[14] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr); 
	 
		rs.GetValue(_T("BHQD1"), tmpStr); 
		nCONG[15] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr); 
	 
		rs.GetValue(_T("BAN1"), tmpStr); 
		nCONG[16] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr); 
	 
		rs.GetValue(_T("TED6T1"), tmpStr); 
		nCONG[17] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr); 
	 
		rs.GetValue(_T("CS1"), tmpStr); 
		nCONG[18] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr); 
	 
		rs.GetValue(_T("DV1"), tmpStr); 
		nCONG[19] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr); 
	 
		rs.GetValue(_T("BHK1"), tmpStr); 
		nCONG[20] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr); 
	 
		rs.GetValue(_T("BHTN1"), tmpStr); 
		nCONG[21] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr); 
	 
		rs.GetValue(_T("CONG1"), tmpStr); 
		nCONG[22] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr); 

		rs.GetValue(_T("QUAN2"), tmpStr); 
		nCONG[23] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr); 
	 
		rs.GetValue(_T("QUANTN2"), tmpStr); 
		nCONG[24] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr); 
	 
		rs.GetValue(_T("BHQH2"), tmpStr); 
		nCONG[25] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("25"), tmpStr); 
	 
		rs.GetValue(_T("BHQD2"), tmpStr); 
		nCONG[26] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("26"), tmpStr); 
	 
		rs.GetValue(_T("BAN2"), tmpStr); 
		nCONG[27] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("27"), tmpStr); 
	 
		rs.GetValue(_T("TED6T2"), tmpStr); 
		nCONG[28] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("28"), tmpStr); 
	 
		rs.GetValue(_T("CS2"), tmpStr); 
		nCONG[29] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("29"), tmpStr); 
	 
		rs.GetValue(_T("DV2"), tmpStr); 
		nCONG[30] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("30"), tmpStr); 
	 
		rs.GetValue(_T("BHK2"), tmpStr); 
		nCONG[31] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("31"), tmpStr); 
	 
		rs.GetValue(_T("BHTN2"), tmpStr); 
		nCONG[32] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("32"), tmpStr); 
	 
		rs.GetValue(_T("CONG2"), tmpStr); 
		nCONG[33] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("33"), tmpStr); 

		rs.GetValue(_T("QUAN3"), tmpStr); 
		nCONG[34] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("34"), tmpStr); 
	 
		rs.GetValue(_T("QUANTN3"), tmpStr); 
		nCONG[35] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("35"), tmpStr); 
	 
		rs.GetValue(_T("BHQH3"), tmpStr); 
		nCONG[36] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("36"), tmpStr); 
	 
		rs.GetValue(_T("BHQD3"), tmpStr); 
		nCONG[37] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("37"), tmpStr); 
	 
		rs.GetValue(_T("BAN3"), tmpStr); 
		nCONG[38] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("38"), tmpStr); 
	 
		rs.GetValue(_T("TED6T3"), tmpStr); 
		nCONG[39] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("39"), tmpStr); 
	 
		rs.GetValue(_T("CS3"), tmpStr); 
		nCONG[40] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("40"), tmpStr); 
	 
		rs.GetValue(_T("DV3"), tmpStr); 
		nCONG[41] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("41"), tmpStr); 
	 
		rs.GetValue(_T("BHK3"), tmpStr); 
		nCONG[42] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("42"), tmpStr); 
	 
		rs.GetValue(_T("BHTN3"), tmpStr); 
		nCONG[43] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("43"), tmpStr); 
	 
		rs.GetValue(_T("CONG3"), tmpStr); 
		nCONG[44] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("44"), tmpStr); 

		rs.GetValue(_T("TONGCONG"), tmpStr); 
		nCONG[45] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("45"), tmpStr); 
	 
		rs.MoveNext();	
	}
	CString  szField;
	for( int i = 1; i<=46; i++)
	{
		szField.Format(_T("s%d"), i);
		tmpStr.Format(_T("%d"), nCONG[i]);
		rpt.GetReportFooter()->SetValue(szField, tmpStr);
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
int CBCTHUTHUATCACKHOA::OnAddBCTHUTHUATCACKHOA(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHUTHUATCACKHOA::OnEditBCTHUTHUATCACKHOA(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHUTHUATCACKHOA::OnDeleteBCTHUTHUATCACKHOA(){
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
 		OnCancelBCTHUTHUATCACKHOA();
 	}
	return 0;
}
int CBCTHUTHUATCACKHOA::OnSaveBCTHUTHUATCACKHOA(){
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
 		//OnBCTHUTHUATCACKHOAListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHUTHUATCACKHOA::OnCancelBCTHUTHUATCACKHOA(){
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
int CBCTHUTHUATCACKHOA::OnBCTHUTHUATCACKHOAListLoadData(){
	return 0;
}
CString CBCTHUTHUATCACKHOA::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut;
	if (m_szCondition == _T("I"))  // Noi tru
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='I'" ));
	}
	if (m_szCondition == _T("E")) // Ngoai tru
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='E'" ));
	} 
	if (m_szCondition == _T("A")) { // all
		szInOut.AppendFormat(_T(" AND 1 = 1 ")); 
	}
	szWhere.Format(_T(" AND ho_performdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ho_deptid,") \
_T("        SUM(QUAN) QUAN,SUM(QUANTN) QUANTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(QUANTN1) QUANTN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1,SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+BHQD1+BHQH1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(QUANTN2) QUANTN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2,SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+BHQD2+BHQH2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(QUANTN3) QUANTN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3,SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+BHQD3+BHQH3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3,") \
_T("        SUM(QUAN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN+QUAN1+BHQD1+BHQH1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1+QUAN2+BHQD2+BHQH2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2+QUAN3+BHQD3+BHQH3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) TONGCONG") \
_T(" FROM(SELECT ho_deptid,") \
_T("        QUAN,QUANTN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,QUANTN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,QUANTN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,QUANTN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ho_deptid,") \
_T("        SUM(QUAN) QUAN,") \
_T("        SUM(QUANTN) QUANTN,") \
_T("        SUM(BHQH) BHQH,") \
_T("        SUM(BHQD) BHQD,") \
_T("        SUM(BAN) BAN,") \
_T("        SUM(TED6T) TED6T,") \
_T("        SUM(CS) CS,") \
_T("        SUM(DV) DV,") \
_T("        SUM(BHK) BHK,") \
_T("        SUM(BHTN) BHTN,") \
_T("        0 QUAN1,0 QUANTN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 QUANTN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 QUANTN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT CASE WHEN ho_pdeptid = 'B5' THEN  ho_deptid ELSE ho_pdeptid END as  ho_deptid,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=11 THEN 1 ELSE 0 END QUANTN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID AND HFL_TYPEID='O') ") \
_T(" WHERE HO_STATUS in('S','T') AND HFL_GROUPID='B5400' %s %s)") \
_T(" GROUP BY ho_deptid)") \
_T(" UNION") \
_T(" SELECT ho_deptid,") \
_T("        QUAN,QUANTN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,QUANTN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,QUANTN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,QUANTN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ho_deptid,") \
_T("        SUM(QUAN) QUAN1,") \
_T("        SUM(QUANTN) QUANTN1,") \
_T("        SUM(BHQH) BHQH1,") \
_T("        SUM(BHQD) BHQD1,") \
_T("        SUM(BAN) BAN1,") \
_T("        SUM(TED6T) TED6T1,") \
_T("        SUM(CS) CS1,") \
_T("        SUM(DV) DV1,") \
_T("        SUM(BHK) BHK1,") \
_T("        SUM(BHTN) BHTN1,") \
_T("        0 QUAN,0 QUANTN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN2,0 QUANTN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 QUANTN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT CASE WHEN ho_pdeptid = 'B5' THEN  ho_deptid ELSE ho_pdeptid END as  ho_deptid,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=11 THEN 1 ELSE 0 END QUANTN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID AND HFL_TYPEID='O') ") \
_T(" WHERE HO_STATUS in('S','T') AND HFL_GROUPID='B5100' %s %s)") \
_T(" GROUP BY ho_deptid)") \
_T(" UNION") \
_T(" SELECT ho_deptid,") \
_T("        QUAN,QUANTN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,QUANTN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,QUANTN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,QUANTN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ho_deptid,") \
_T("        SUM(QUAN) QUAN2,") \
_T("        SUM(QUANTN) QUANTN2,") \
_T("        SUM(BHQH) BHQH2,") \
_T("        SUM(BHQD) BHQD2,") \
_T("        SUM(BAN) BAN2,") \
_T("        SUM(TED6T) TED6T2,") \
_T("        SUM(CS) CS2,") \
_T("        SUM(DV) DV2,") \
_T("        SUM(BHK) BHK2,") \
_T("        SUM(BHTN) BHTN2,") \
_T("        0 QUAN1,0 QUANTN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN,0 QUANTN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN3,0 QUANTN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT CASE WHEN ho_pdeptid = 'B5' THEN  ho_deptid ELSE ho_pdeptid END as  ho_deptid,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=11 THEN 1 ELSE 0 END QUANTN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID AND HFL_TYPEID='O') ") \
_T(" WHERE HO_STATUS in('S','T') AND HFL_GROUPID='B5200' %s %s)") \
_T(" GROUP BY ho_deptid)") \
_T(" UNION") \
_T(" SELECT ho_deptid,") \
_T("        QUAN,QUANTN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,QUANTN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,QUANTN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,QUANTN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ho_deptid,") \
_T("        SUM(QUAN) QUAN3,") \
_T("        SUM(QUANTN) QUANTN3,") \
_T("        SUM(BHQH) BHQH3,") \
_T("        SUM(BHQD) BHQD3,") \
_T("        SUM(BAN) BAN3,") \
_T("        SUM(TED6T) TED6T3,") \
_T("        SUM(CS) CS3,") \
_T("        SUM(DV) DV3,") \
_T("        SUM(BHK) BHK3,") \
_T("        SUM(BHTN) BHTN3,") \
_T("        0 QUAN1,0 QUANTN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 QUANTN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN,0 QUANTN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN") \
_T(" FROM(SELECT CASE WHEN ho_pdeptid = 'B5' THEN  ho_deptid ELSE ho_pdeptid END as  ho_deptid,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=11 THEN 1 ELSE 0 END QUANTN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID AND HFL_TYPEID='O') ") \
_T(" WHERE HO_STATUS in('S','T') AND HFL_GROUPID='B5300' %s %s)") \
_T(" GROUP BY ho_deptid))") \
_T(" GROUP BY ho_deptid") \
_T(" ORDER BY ho_deptid"), szWhere,szInOut, szWhere,szInOut, szWhere,szInOut, szWhere,szInOut);
	return szSQL;
}