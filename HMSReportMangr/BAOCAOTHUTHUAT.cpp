#include "BAOCAOTHUTHUAT.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBAOCAOTHUTHUAT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBAOCAOTHUTHUAT *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBAOCAOTHUTHUAT *pVw = (CBAOCAOTHUTHUAT *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBAOCAOTHUTHUAT *pVw = (CBAOCAOTHUTHUAT *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBAOCAOTHUTHUAT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBAOCAOTHUTHUAT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBAOCAOTHUTHUAT*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBAOCAOTHUTHUAT* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBAOCAOTHUTHUAT *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBAOCAOTHUTHUAT *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBAOCAOTHUTHUAT*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBAOCAOTHUTHUAT*)pWnd)->OnOutPatientSelect();
}
static int _OnAddBAOCAOTHUTHUATFnc(CWnd *pWnd){
	 return ((CBAOCAOTHUTHUAT*)pWnd)->OnAddBAOCAOTHUTHUAT();
} 
static int _OnEditBAOCAOTHUTHUATFnc(CWnd *pWnd){
	 return ((CBAOCAOTHUTHUAT*)pWnd)->OnEditBAOCAOTHUTHUAT();
} 
static int _OnDeleteBAOCAOTHUTHUATFnc(CWnd *pWnd){
	 return ((CBAOCAOTHUTHUAT*)pWnd)->OnDeleteBAOCAOTHUTHUAT();
} 
static int _OnSaveBAOCAOTHUTHUATFnc(CWnd *pWnd){
	 return ((CBAOCAOTHUTHUAT*)pWnd)->OnSaveBAOCAOTHUTHUAT();
} 
static int _OnCancelBAOCAOTHUTHUATFnc(CWnd *pWnd){
	 return ((CBAOCAOTHUTHUAT*)pWnd)->OnCancelBAOCAOTHUTHUAT();
} 
CBAOCAOTHUTHUAT::CBAOCAOTHUTHUAT(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBAOCAOTHUTHUAT::~CBAOCAOTHUTHUAT(){
}
void CBAOCAOTHUTHUAT::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1014, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 204, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 206, 30, 286, 55);
	m_wndToDate.Create(this,291, 30, 399, 55); 
	m_wndLoad.Create(this, _T("&Load"), 819, 30, 913, 55);
	m_wndExport.Create(this, _T("&Export"), 917, 30, 1001, 55);
	m_wndList.Create(this,5, 64, 1014, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 589, 30, 669, 55);
	m_wndDepartment.Create(this,674, 30, 814, 55); 
	m_wndInPatient.Create(this, _T("InPatient"), 409, 30, 489, 55);
	m_wndOutPatient.Create(this, _T("OutPatient"), 501, 30, 581, 55);
	
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_ALIGNMASK);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(true);
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("\x43huy\xEAn kho\x61"), CFMT_TEXT, 200);
	
	m_wndList.InsertColumn(2, _T("T\x1EA1i ng\x169"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(3, _T("BHQ t\x1EA1i ng\x169"), CFMT_NUMBER, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 2, 2, 3, false, true);
	
	m_wndList.InsertColumn(4, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("\x42HQ\x110"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(6, _T("\x42\x1EA1n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(7, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(8, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(9, _T("DVYT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(10, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(11, _T("BHTQ"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(12, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);
	TranslateString(_T("Lo\x1EA1i \x110\x1EB7\x63 \x62i\x1EC7t"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 12, false, true);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(13, _T("T\x1EA1i ng\x169"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(14, _T("BHQ t\x1EA1i ng\x169"), CFMT_NUMBER, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 13, 2, 14, false, true);
	
	m_wndList.InsertColumn(15, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(16, _T("\x42HQ\x110"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(17, _T("\x42\x1EA1n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(18, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(19, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(20, _T("DVYT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(21, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(22, _T("BHTQ"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(23, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);
	TranslateString(_T("Lo\x1EA1i I"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 13, 1, 23, false, true);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(24, _T("T\x1EA1i ng\x169"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(25, _T("BHQ t\x1EA1i ng\x169"), CFMT_NUMBER, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 24, 2, 25, false, true);
	
	m_wndList.InsertColumn(26, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(27, _T("\x42HQ\x110"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(28, _T("\x42\x1EA1n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(29, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(30, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(31, _T("DVYT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(32, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(33, _T("BHTQ"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(34, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);
	TranslateString(_T("Lo\x1EA1i II"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 24, 1, 34, false, true);
	//-----------------------------------------------------------------------
	m_wndList.InsertColumn(35, _T("T\x1EA1i ng\x169"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(36, _T("BHQ t\x1EA1i ng\x169"), CFMT_NUMBER, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 35, 2, 36, false, true);
	
	m_wndList.InsertColumn(37, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(38, _T("\x42HQ\x110"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(39, _T("\x42\x1EA1n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(40, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(41, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(42, _T("DVYT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(43, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(44, _T("BHTQ"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(45, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);
	TranslateString(_T("Lo\x1EA1i III"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 35, 1, 45, false, true);

}
void CBAOCAOTHUTHUAT::OnInitializeComponents(){
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
void CBAOCAOTHUTHUAT::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBAOCAOTHUTHUAT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBAOCAOTHUTHUAT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBAOCAOTHUTHUAT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBAOCAOTHUTHUAT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nInPatient=0;
	m_nOutPatient=1;

}
int CBAOCAOTHUTHUAT::SetMode(int nMode){
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
/*void CBAOCAOTHUTHUAT::OnFromDateChange(){
	
} */
/*void CBAOCAOTHUTHUAT::OnFromDateSetfocus(){
	
} */
/*void CBAOCAOTHUTHUAT::OnFromDateKillfocus(){
	
} */
int CBAOCAOTHUTHUAT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBAOCAOTHUTHUAT::OnToDateChange(){
	
} */
/*void CBAOCAOTHUTHUAT::OnToDateSetfocus(){
	
} */
/*void CBAOCAOTHUTHUAT::OnToDateKillfocus(){
	
} */
int CBAOCAOTHUTHUAT::OnToDateCheckValue(){
	return 0;
} 
void CBAOCAOTHUTHUAT::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBAOCAOTHUTHUAT::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	CRecord rs1(&pMF->m_db); 
	CRecord rs2(&pMF->m_db); 
	UpdateData(true);
	CString tmpStr, szSQL; 
	CExcel xls; 
	int nCol = 0; 
	int nRow = 7; 
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 22); 
	xls.SetColumnWidth(1, 3); 
	xls.SetColumnWidth(2, 3); 
	xls.SetColumnWidth(3, 3); 
	xls.SetColumnWidth(4, 3); 
	xls.SetColumnWidth(5, 3); 
	xls.SetColumnWidth(6, 2); 
	xls.SetColumnWidth(7, 3); 
	xls.SetColumnWidth(8, 3); 
	xls.SetColumnWidth(9, 3); 
	xls.SetColumnWidth(10, 3); 
	xls.SetColumnWidth(11, 3); 
	xls.SetColumnWidth(12, 3); 
	xls.SetColumnWidth(13, 2); 
	xls.SetColumnWidth(14, 3); 
	xls.SetColumnWidth(15, 3); 
	xls.SetColumnWidth(16, 3); 
	xls.SetColumnWidth(17, 3); 
	xls.SetColumnWidth(18, 3); 
	xls.SetColumnWidth(19, 3); 
	xls.SetColumnWidth(20, 3); 
	xls.SetColumnWidth(21, 2); 
	xls.SetColumnWidth(22, 3); 
	xls.SetColumnWidth(23, 2); 
	xls.SetColumnWidth(24, 3); 
	xls.SetColumnWidth(25, 2); 
	xls.SetColumnWidth(26, 3); 
	xls.SetColumnWidth(27, 3); 
	xls.SetColumnWidth(28, 3); 
	xls.SetColumnWidth(29, 2); 
	xls.SetColumnWidth(30, 3); 
	xls.SetColumnWidth(31, 3); 
	xls.SetColumnWidth(32, 2); 
	xls.SetColumnWidth(33, 3); 
	xls.SetColumnWidth(34, 3); 
	xls.SetColumnWidth(35, 3); 
	xls.SetColumnWidth(36, 3); 
	xls.SetColumnWidth(37, 3); 
	xls.SetColumnWidth(38, 3); 
	xls.SetColumnWidth(39, 3); 
	xls.SetColumnWidth(40, 2); 
	xls.SetColumnWidth(41, 3); 
	xls.SetColumnWidth(42, 3); 
	xls.SetColumnWidth(43, 3); 
	xls.SetColumnWidth(44, 3);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O TH\x1EE6 THU\x1EACT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(0, 5, _T("\x43huy\xEAn kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 5, _T("Lo\x1EA1i \x110\x1EB7\x63 \x62i\x1EC7t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(1, 7, _T("T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(2, 7, _T("\x42HQ t\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(3, 6, _T("\x42HQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(4, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(5, 6, _T("\x42\x1EA0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(6, 6, _T("T\x45<\x36T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(7, 6, _T("\x43S"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(8, 6, _T("\x44VYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(9, 6, _T("\x42HK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(10, 6, _T("\x42HTQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(11, 6, _T("\x43\x1ED8NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(12, 5, _T("Lo\x1EA1i I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(12, 7, _T("T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(13, 7, _T("\x42HQ t\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(14, 6, _T("\x42HQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(15, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(16, 6, _T("\x42\x1EA0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(17, 6, _T("T\x45<\x36T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(18, 6, _T("\x43S"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(19, 6, _T("\x44VYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(20, 6, _T("\x42HK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(21, 6, _T("\x42HTQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(22, 6, _T("\x43\x1ED8NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(23, 5, _T("Lo\x1EA1i II"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(23, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(23, 7, _T("T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(24, 7, _T("\x42HQ t\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(25, 6, _T("\x42HQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(26, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(27, 6, _T("\x42\x1EA0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(28, 6, _T("T\x45<\x36T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(29, 6, _T("\x43S"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(30, 6, _T("\x44VYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(31, 6, _T("\x42HK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(32, 6, _T("\x42HTQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(33, 6, _T("\x43\x1ED8NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(34, 5, _T("Lo\x1EA1i III"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(34, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(34, 7, _T("T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(35, 7, _T("\x42HQ t\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(36, 6, _T("\x42HQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(37, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(38, 6, _T("\x42\x1EA0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(39, 6, _T("T\x45<\x36T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(40, 6, _T("\x43S"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(41, 6, _T("\x44VYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(42, 6, _T("\x42HK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(43, 6, _T("\x42HTQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetCellText(44, 6, _T("\x43\x1ED8NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);
	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(2, 2, 0, 44);
	xls.SetMerge(3, 3, 0, 44);
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
	int nTotal[45];
	for (int i = 1; i<= 44; i++)
	{
		nTotal[i] = 0;
	}
	int ret=0;
	int ret1=0;
	int ret2=0;
	szSQL =GetQueryString(); 
	ret=rs.ExecSQL(szSQL); 
	//------------------------------------------------
	szSQL =GetQueryString1(); 
	ret1=rs1.ExecSQL(szSQL); 
	//------------------------------------------------
	szSQL =GetQueryString2(); 
	ret2=rs2.ExecSQL(szSQL); 
	while(!rs.IsEOF()) 
	{	 
		rs.GetValue(_T("NAME"), tmpStr); 
		xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT );

		rs.GetValue(_T("QUAN"), tmpStr); 
		xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1| FMT_CENTER);

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

		nRow++; 
		rs.MoveNext();	
	}
	while(!rs1.IsEOF()) 
	{	 
		rs1.GetValue(_T("NAME"), tmpStr); 
		xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT );

		rs1.GetValue(_T("QUAN"), tmpStr); 
		xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1| FMT_CENTER);

		rs1.GetValue(_T("QUANTN"), tmpStr); 
		xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHQH"), tmpStr); 
		xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHQD"), tmpStr); 
		xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BAN"), tmpStr); 
		xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("TED6T"), tmpStr); 
		xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("CS"), tmpStr); 
		xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("DV"), tmpStr); 
		xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHK"), tmpStr); 
		xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHTN"), tmpStr); 
		xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("CONG"), tmpStr); 
		xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("QUAN1"), tmpStr); 
		xls.SetCellText(nCol + 12, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("QUANTN1"), tmpStr); 
		xls.SetCellText(nCol + 13, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHQH1"), tmpStr); 
		xls.SetCellText(nCol + 14, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHQD1"), tmpStr); 
		xls.SetCellText(nCol + 15, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BAN1"), tmpStr); 
		xls.SetCellText(nCol + 16, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("TED6T1"), tmpStr); 
		xls.SetCellText(nCol + 17, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("CS1"), tmpStr); 
		xls.SetCellText(nCol + 18, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("DV1"), tmpStr); 
		xls.SetCellText(nCol + 19, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHK1"), tmpStr); 
		xls.SetCellText(nCol + 20, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHTN1"), tmpStr); 
		xls.SetCellText(nCol + 21, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("CONG1"), tmpStr); 
		xls.SetCellText(nCol + 22, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("QUAN2"), tmpStr); 
		xls.SetCellText(nCol + 23, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("QUANTN2"), tmpStr); 
		xls.SetCellText(nCol + 24, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHQH2"), tmpStr); 
		xls.SetCellText(nCol + 25, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHQD2"), tmpStr); 
		xls.SetCellText(nCol + 26, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BAN2"), tmpStr); 
		xls.SetCellText(nCol + 27, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("TED6T2"), tmpStr); 
		xls.SetCellText(nCol + 28, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("CS2"), tmpStr); 
		xls.SetCellText(nCol + 29, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("DV2"), tmpStr); 
		xls.SetCellText(nCol + 30, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHK2"), tmpStr); 
		xls.SetCellText(nCol + 31, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHTN2"), tmpStr); 
		xls.SetCellText(nCol + 32, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("CONG2"), tmpStr); 
		xls.SetCellText(nCol + 33, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("QUAN3"), tmpStr); 
		xls.SetCellText(nCol + 34, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("QUANTN3"), tmpStr); 
		xls.SetCellText(nCol + 35, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHQH3"), tmpStr); 
		xls.SetCellText(nCol + 36, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHQD3"), tmpStr); 
		xls.SetCellText(nCol + 37, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BAN3"), tmpStr); 
		xls.SetCellText(nCol + 38, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("TED6T3"), tmpStr); 
		xls.SetCellText(nCol + 39, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("CS3"), tmpStr); 
		xls.SetCellText(nCol + 40, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("DV3"), tmpStr); 
		xls.SetCellText(nCol + 41, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHK3"), tmpStr); 
		xls.SetCellText(nCol + 42, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("BHTN3"), tmpStr); 
		xls.SetCellText(nCol + 43, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs1.GetValue(_T("CONG3"), tmpStr); 
		xls.SetCellText(nCol + 44, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		nRow++; 
		rs1.MoveNext();	
	}
	while(!rs2.IsEOF()) 
	{	 
		rs2.GetValue(_T("NAME"), tmpStr); 
		xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT );

		rs2.GetValue(_T("QUAN"), tmpStr); 
		xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1| FMT_CENTER);

		rs2.GetValue(_T("QUANTN"), tmpStr); 
		xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHQH"), tmpStr); 
		xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHQD"), tmpStr); 
		xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BAN"), tmpStr); 
		xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("TED6T"), tmpStr); 
		xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("CS"), tmpStr); 
		xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("DV"), tmpStr); 
		xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHK"), tmpStr); 
		xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHTN"), tmpStr); 
		xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("CONG"), tmpStr); 
		xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("QUAN1"), tmpStr); 
		xls.SetCellText(nCol + 12, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("QUANTN1"), tmpStr); 
		xls.SetCellText(nCol + 13, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHQH1"), tmpStr); 
		xls.SetCellText(nCol + 14, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHQD1"), tmpStr); 
		xls.SetCellText(nCol + 15, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BAN1"), tmpStr); 
		xls.SetCellText(nCol + 16, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("TED6T1"), tmpStr); 
		xls.SetCellText(nCol + 17, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("CS1"), tmpStr); 
		xls.SetCellText(nCol + 18, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("DV1"), tmpStr); 
		xls.SetCellText(nCol + 19, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHK1"), tmpStr); 
		xls.SetCellText(nCol + 20, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHTN1"), tmpStr); 
		xls.SetCellText(nCol + 21, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("CONG1"), tmpStr); 
		xls.SetCellText(nCol + 22, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("QUAN2"), tmpStr); 
		xls.SetCellText(nCol + 23, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("QUANTN2"), tmpStr); 
		xls.SetCellText(nCol + 24, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHQH2"), tmpStr); 
		xls.SetCellText(nCol + 25, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHQD2"), tmpStr); 
		xls.SetCellText(nCol + 26, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BAN2"), tmpStr); 
		xls.SetCellText(nCol + 27, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("TED6T2"), tmpStr); 
		xls.SetCellText(nCol + 28, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("CS2"), tmpStr); 
		xls.SetCellText(nCol + 29, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("DV2"), tmpStr); 
		xls.SetCellText(nCol + 30, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHK2"), tmpStr); 
		xls.SetCellText(nCol + 31, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHTN2"), tmpStr); 
		xls.SetCellText(nCol + 32, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("CONG2"), tmpStr); 
		xls.SetCellText(nCol + 33, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("QUAN3"), tmpStr); 
		xls.SetCellText(nCol + 34, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("QUANTN3"), tmpStr); 
		xls.SetCellText(nCol + 35, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHQH3"), tmpStr); 
		xls.SetCellText(nCol + 36, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHQD3"), tmpStr); 
		xls.SetCellText(nCol + 37, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BAN3"), tmpStr); 
		xls.SetCellText(nCol + 38, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("TED6T3"), tmpStr); 
		xls.SetCellText(nCol + 39, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("CS3"), tmpStr); 
		xls.SetCellText(nCol + 40, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("DV3"), tmpStr); 
		xls.SetCellText(nCol + 41, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHK3"), tmpStr); 
		xls.SetCellText(nCol + 42, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("BHTN3"), tmpStr); 
		xls.SetCellText(nCol + 43, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs2.GetValue(_T("CONG3"), tmpStr); 
		xls.SetCellText(nCol + 44, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		nRow++; 
		rs2.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\THU THUAT.xls"));	
	
} 
void CBAOCAOTHUTHUAT::OnListDblClick(){
	
} 
void CBAOCAOTHUTHUAT::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBAOCAOTHUTHUAT::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBAOCAOTHUTHUAT::OnListLoadData(){
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
			rs.GetValue(_T("NAME")), 
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
			rs.GetValue(_T("CONG3")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString1();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
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
			rs.GetValue(_T("CONG3")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString2();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
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
			rs.GetValue(_T("CONG3")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBAOCAOTHUTHUAT::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBAOCAOTHUTHUAT::OnDepartmentSelendok(){
	 
}
/*void CBAOCAOTHUTHUAT::OnDepartmentSetfocus(){
	
}*/
/*void CBAOCAOTHUTHUAT::OnDepartmentKillfocus(){
	
}*/
long CBAOCAOTHUTHUAT::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,szCondition;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	if (m_nInPatient == 0)
	{
		szCondition.Format(_T(" AND sd_type IN('DT') "));
	}
	else
	{
		szCondition.Format(_T(" AND sd_type IN('KB') "));
	}
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where 1=1 %s order by id"), szCondition);
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
/*void CBAOCAOTHUTHUAT::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBAOCAOTHUTHUAT::OnInPatientSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
	//m_wndDepartment.EnableWindow(true);
}
void CBAOCAOTHUTHUAT::OnOutPatientSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
	//m_wndDepartment.EnableWindow(false);
}
int CBAOCAOTHUTHUAT::OnAddBAOCAOTHUTHUAT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBAOCAOTHUTHUAT::OnEditBAOCAOTHUTHUAT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBAOCAOTHUTHUAT::OnDeleteBAOCAOTHUTHUAT(){
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
 		OnCancelBAOCAOTHUTHUAT();
 	}
	return 0;
}
int CBAOCAOTHUTHUAT::OnSaveBAOCAOTHUTHUAT(){
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
 		//OnBAOCAOTHUTHUATListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBAOCAOTHUTHUAT::OnCancelBAOCAOTHUTHUAT(){
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
int CBAOCAOTHUTHUAT::OnBAOCAOTHUTHUATListLoadData(){
	return 0;
}
CString CBAOCAOTHUTHUAT::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND ho_deptid = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND ho_performdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ID,(SELECT ss_desc FROM sys_sel WHERE ss_id='hms_cdept' AND ss_code = CAST(ID AS NUMBER)) NAME,") \
_T("        SUM(QUAN) QUAN,SUM(QUANTN) QUANTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD, SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+QUANTN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(QUANTN1) QUANTN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1, SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+QUANTN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(QUANTN2) QUANTN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2, SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+QUANTN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(QUANTN3) QUANTN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3, SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+QUANTN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3") \
_T(" FROM(SELECT ID,dn,ho_depttype,ho_deptid,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END QUANTN,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END TED6T,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END QUAN1,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END QUANTN1,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHQH1,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHQD1,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BAN1,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END TED6T1,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END CS1,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END DV1,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHK1,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHTN1,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END QUAN2,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END QUANTN2,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHQH2,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHQD2,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BAN2,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END TED6T2,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END CS2,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END DV2,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHK2,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHTN2,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END QUAN3,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END QUANTN3,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHQH3,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHQD3,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BAN3,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END TED6T3,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END CS3,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END DV3,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHK3,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHTN3") \
_T(" FROM(SELECT 1 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='B3'") \
_T(" UNION") \
_T(" SELECT 2 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid IN('B1-A','B1-B','B1-C','B1-D')") \
_T(" UNION") \
_T(" SELECT 3 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='B2'") \
_T(" UNION") \
_T(" SELECT 4 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='B6'") \
_T(" UNION") \
_T(" SELECT 13 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='A12'") \
_T(" ))") \
_T(" WHERE 1=1 %s %s") \
_T(" GROUP BY ID"),szWhere,szWhere,szWhere,szWhere,szWhere,szInOut,szDept);
	return szSQL;
}
CString CBAOCAOTHUTHUAT::GetQueryString1(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND ho_deptid = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND ho_performdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ID,(SELECT ss_desc FROM sys_sel WHERE ss_id='hms_cdept' AND ss_code = CAST(ID AS NUMBER)) NAME,") \
_T("        SUM(QUAN) QUAN,SUM(QUANTN) QUANTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD, SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+QUANTN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(QUANTN1) QUANTN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1, SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+QUANTN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(QUANTN2) QUANTN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2, SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+QUANTN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(QUANTN3) QUANTN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3, SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+QUANTN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3") \
_T(" FROM(SELECT ID,dn,ho_depttype,ho_deptid,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END QUANTN,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END TED6T,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END QUAN1,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END QUANTN1,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHQH1,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHQD1,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BAN1,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END TED6T1,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END CS1,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END DV1,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHK1,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHTN1,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END QUAN2,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END QUANTN2,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHQH2,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHQD2,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BAN2,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END TED6T2,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END CS2,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END DV2,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHK2,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHTN2,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END QUAN3,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END QUANTN3,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHQH3,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHQD3,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BAN3,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END TED6T3,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END CS3,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END DV3,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHK3,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHTN3") \
_T(" FROM(SELECT 5 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='B11'") \
_T(" UNION") \
_T(" SELECT 6 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid IN('B4','A2-B')") \
_T(" UNION") \
_T(" SELECT 7 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='B7'") \
_T(" UNION") \
_T(" SELECT 8 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='B9'") \
_T(" ))") \
_T(" WHERE 1=1 %s %s") \
_T(" GROUP BY ID"),szWhere,szWhere,szWhere,szWhere,szInOut,szDept);
	return szSQL;
}
CString CBAOCAOTHUTHUAT::GetQueryString2(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND ho_deptid = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND ho_performdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ID,(SELECT ss_desc FROM sys_sel WHERE ss_id='hms_cdept' AND ss_code = CAST(ID AS NUMBER)) NAME,") \
_T("        SUM(QUAN) QUAN,SUM(QUANTN) QUANTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD, SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+QUANTN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(QUANTN1) QUANTN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1, SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+QUANTN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(QUANTN2) QUANTN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2, SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+QUANTN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(QUANTN3) QUANTN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3, SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+QUANTN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3") \
_T(" FROM(SELECT ID,dn,ho_depttype,ho_deptid,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END QUANTN,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END TED6T,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5400' THEN ho_qty ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END QUAN1,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END QUANTN1,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHQH1,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHQD1,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BAN1,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END TED6T1,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END CS1,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END DV1,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHK1,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5100' THEN ho_qty ELSE 0 END BHTN1,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END QUAN2,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END QUANTN2,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHQH2,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHQD2,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BAN2,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END TED6T2,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END CS2,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END DV2,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHK2,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5200' THEN ho_qty ELSE 0 END BHTN2,") \
_T("        CASE WHEN hd_object=1 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END QUAN3,") \
_T("        CASE WHEN hd_object=11 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END QUANTN3,") \
_T("        CASE WHEN hd_object=2 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHQH3,") \
_T("        CASE WHEN hd_object=10 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHQD3,") \
_T("        CASE WHEN hd_object=8 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BAN3,") \
_T("        CASE WHEN hd_object IN (9,6) AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END TED6T3,") \
_T("        CASE WHEN hd_object=3 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END CS3,") \
_T("        CASE WHEN hd_object=7 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END DV3,") \
_T("        CASE WHEN hd_object=4 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHK3,") \
_T("        CASE WHEN hd_object=5 AND hfl_groupid='B5300' THEN ho_qty ELSE 0 END BHTN3") \
_T(" FROM(SELECT 9 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='B8'") \
_T(" UNION") \
_T(" SELECT 10 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid ='A9'") \
_T(" UNION") \
_T(" SELECT 11 id,ho_performdate, ho_deptid,ho_pdeptid,ho_status,ho_qty,hd_object,hfl_groupid,ho_depttype,") \
_T(" 			 row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid)") \
_T(" WHERE ho_status IN('S','T') %s ") \
_T(" 			AND ho_pdeptid='A10'") \
_T(" ))") \
_T(" WHERE 1=1 %s %s") \
_T(" GROUP BY ID"),szWhere,szWhere,szWhere,szInOut,szDept);
	return szSQL;
}
