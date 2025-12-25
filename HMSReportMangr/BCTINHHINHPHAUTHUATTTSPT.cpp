#include "BCTINHHINHPHAUTHUATTTSPT.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTINHHINHPHAUTHUATTTSPT *pVw = (CBCTINHHINHPHAUTHUATTTSPT *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTINHHINHPHAUTHUATTTSPT *pVw = (CBCTINHHINHPHAUTHUATTTSPT *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTINHHINHPHAUTHUATTTSPT* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCTINHHINHPHAUTHUATTTSPT *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCTINHHINHPHAUTHUATTTSPTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnAddBCTINHHINHPHAUTHUATTTSPT();
} 
static int _OnEditBCTINHHINHPHAUTHUATTTSPTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnEditBCTINHHINHPHAUTHUATTTSPT();
} 
static int _OnDeleteBCTINHHINHPHAUTHUATTTSPTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnDeleteBCTINHHINHPHAUTHUATTTSPT();
} 
static int _OnSaveBCTINHHINHPHAUTHUATTTSPTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnSaveBCTINHHINHPHAUTHUATTTSPT();
} 
static int _OnCancelBCTINHHINHPHAUTHUATTTSPTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHAUTHUATTTSPT*)pWnd)->OnCancelBCTINHHINHPHAUTHUATTTSPT();
} 
CBCTINHHINHPHAUTHUATTTSPT::CBCTINHHINHPHAUTHUATTTSPT(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTINHHINHPHAUTHUATTTSPT::~CBCTINHHINHPHAUTHUATTTSPT(){
}
void CBCTINHHINHPHAUTHUATTTSPT::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 59);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 82, 55);
	m_wndFromDate.Create(this,86, 30, 196, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 395, 55); 
	m_wndLoad.Create(this, _T("&Load"), 687, 30, 771, 55);
	m_wndPrint.Create(this, _T("&Export"), 776, 30, 860, 55);
	m_wndList.Create(this,5, 65, 1012, 616); 
	m_wndDepartmentLab.Create(this, _T("Department"), 401, 30, 481, 55);
	m_wndDepartment.Create(this,486, 30, 682, 55); 
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_ALIGNTOP);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(false);
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("KHOA"), CFMT_TEXT, 80);
	
	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("QN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(11, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(13, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i \x111\x1EB7\x63 \x62i\x1EC7t"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 13, false, false);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(14, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(15, _T("QN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(16, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(17, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(18, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(19, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(20, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(21, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(22, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(23, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(24, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(25, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i I"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 14, 1, 25, false, false);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(26, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(27, _T("QN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(28, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(29, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(30, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(31, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(32, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(33, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(34, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(35, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(36, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(37, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i II"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 26, 1, 37, false, false);
	//------------------------------------------------------------------------
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(38, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(39, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(40, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(41, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(42, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(43, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(44, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(45, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(46, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(47, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(48, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(49, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i III"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 38, 1, 49, false, false);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(50, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(51, _T("QN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(52, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(53, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(54, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(55, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(56, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(57, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(58, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(59, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(60, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(61, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Loại Khác"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 50, 1, 61, false, false);

}
void CBCTINHHINHPHAUTHUATTTSPT::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);




	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CBCTINHHINHPHAUTHUATTTSPT::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	OnDepartmentLoadData();
	UpdateData(false);

}
void CBCTINHHINHPHAUTHUATTTSPT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCTINHHINHPHAUTHUATTTSPT::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTINHHINHPHAUTHUATTTSPT::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CBCTINHHINHPHAUTHUATTTSPT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCTINHHINHPHAUTHUATTTSPT::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CBCTINHHINHPHAUTHUATTTSPT::OnFromDateChange(){
	
} */
/*void CBCTINHHINHPHAUTHUATTTSPT::OnFromDateSetfocus(){
	
} */
/*void CBCTINHHINHPHAUTHUATTTSPT::OnFromDateKillfocus(){
	
} */
int CBCTINHHINHPHAUTHUATTTSPT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTINHHINHPHAUTHUATTTSPT::OnToDateChange(){
	
} */
/*void CBCTINHHINHPHAUTHUATTTSPT::OnToDateSetfocus(){
	
} */
/*void CBCTINHHINHPHAUTHUATTTSPT::OnToDateKillfocus(){
	
} */
int CBCTINHHINHPHAUTHUATTTSPT::OnToDateCheckValue(){
	return 0;
} 
void CBCTINHHINHPHAUTHUATTTSPT::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTINHHINHPHAUTHUATTTSPT::OnPrintSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CExcel xls;
	int nCol = 0;
	int nRow = 8;
	CString tmpStr, tmpStr1, szOldGroup, szNewGroup;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 3);
	xls.SetColumnWidth(2, 3);
	xls.SetColumnWidth(3, 3);
	xls.SetColumnWidth(4, 3);
	xls.SetColumnWidth(5, 3);
	xls.SetColumnWidth(6, 3);
	xls.SetColumnWidth(7, 3);
	xls.SetColumnWidth(8, 3);
	xls.SetColumnWidth(9, 3);
	xls.SetColumnWidth(10, 3);
	xls.SetColumnWidth(11, 3);
	xls.SetColumnWidth(12, 3);
	xls.SetColumnWidth(13, 3);
	xls.SetColumnWidth(14, 3);
	xls.SetColumnWidth(15, 3);
	xls.SetColumnWidth(16, 3);
	xls.SetColumnWidth(17, 3);
	xls.SetColumnWidth(18, 3);
	xls.SetColumnWidth(19, 3);
	xls.SetColumnWidth(20, 3);
	xls.SetColumnWidth(21, 3);
	xls.SetColumnWidth(22, 3);
	xls.SetColumnWidth(23, 3);
	xls.SetColumnWidth(24, 3);
	xls.SetColumnWidth(25, 3);
	xls.SetColumnWidth(26, 3);
	xls.SetColumnWidth(27, 3);
	xls.SetColumnWidth(28, 3);
	xls.SetColumnWidth(29, 3);
	xls.SetColumnWidth(30, 3);
	xls.SetColumnWidth(31, 3);
	xls.SetColumnWidth(32, 3);
	xls.SetColumnWidth(33, 3);
	xls.SetColumnWidth(34, 3);
	xls.SetColumnWidth(35, 3);
	xls.SetColumnWidth(36, 3);
	xls.SetColumnWidth(37, 3);
	xls.SetColumnWidth(38, 3);
	xls.SetColumnWidth(39, 3);
	xls.SetColumnWidth(40, 3);
	xls.SetColumnWidth(41, 3);
	xls.SetColumnWidth(42, 3);
	xls.SetColumnWidth(43, 3);
	xls.SetColumnWidth(44, 3);
	xls.SetColumnWidth(45, 5);
	xls.SetColumnWidth(46, 3);
	xls.SetColumnWidth(47, 3);
	xls.SetColumnWidth(48, 3);
	xls.SetColumnWidth(49, 3);
	xls.SetColumnWidth(50, 3);
	xls.SetColumnWidth(51, 3);
	xls.SetColumnWidth(52, 3);
	xls.SetColumnWidth(53, 3);
	xls.SetColumnWidth(54, 3);
	xls.SetColumnWidth(55, 3);
	xls.SetColumnWidth(56, 5);
	xls.SetColumnWidth(57, 5);
	xls.SetColumnWidth(58, 5);
	xls.SetColumnWidth(59, 5);
	xls.SetColumnWidth(60, 5);
	xls.SetColumnWidth(61, 5);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("T\xCCNH H\xCCNH PH\x1EAAU THU\x1EACT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("Lo\x1EA1i \x111\x1EB7\x63 \x62i\x1EC7t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 7, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 7, _T("QN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 7, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 7, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 7, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 7, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 7, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 7, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 7, _T("TL%"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 6, _T("Lo\x1EA1i I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 7, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 7, _T("QN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 7, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(16, 7, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(17, 7, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(18, 7, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(19, 7, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(20, 7, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(21, 7, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(22, 7, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(23, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(24, 7, _T("TL%"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(25, 6, _T("Lo\x1EA1i II"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(25, 7, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(26, 7, _T("QN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(27, 7, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(28, 7, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(29, 7, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(30, 7, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(31, 7, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(32, 7, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(33, 7, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(34, 7, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(35, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(36, 7, _T("TL%"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(37, 6, _T("Lo\x1EA1i III"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(37, 7, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(38, 7, _T("QN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(39, 7, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(40, 7, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(41, 7, _T("\x42\x1EA0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(42, 7, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(43, 7, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(44, 7, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(45, 7, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(46, 7, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(47, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(48, 7, _T("TL%"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//------------------------------------------------------------------------
	xls.SetCellText(49, 6, _T("Lo\x1EA1i khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(49, 7, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(50, 7, _T("QN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(51, 7, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(52, 7, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(53, 7, _T("\x42\x1EA0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(54, 7, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(55, 7, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(56, 7, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(57, 7, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(58, 7, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(59, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(60, 7, _T("TL%"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	//------------------------------------------------------------------------
	xls.SetCellText(61, 6, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(3, 3, 0, 45);
	xls.SetMerge(4, 4, 0, 45);
	xls.SetMerge(6, 7, 0, 0);
	xls.SetMerge(6, 6, 1, 12);
	xls.SetMerge(6, 6, 13, 24);
	xls.SetMerge(6, 6, 25, 36);
	xls.SetMerge(6, 6, 37, 48);
	xls.SetMerge(6, 6, 49, 60);
	int nTotal[62]{};
	nTotal[0] = 0;
	for (int i = 1; i <= 62; i++)
	{
		nTotal[i] = 0;
	}
	CString szSQL;

	szSQL = GetQueryString();
	szOldGroup.Empty();
	szNewGroup.Empty();
	tmpStr.Empty();

	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		rs.GetValue(_T("ID"), szNewGroup);
		if (szOldGroup != szNewGroup)
		{
			xls.SetCellText(0, nRow, rs.GetValue(_T("TYPE")), FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nRow++;
		}

		rs.GetValue(_T("pdept_id"), tmpStr);
		xls.SetCellText(nCol + 0, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("QUAN"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QN"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQH"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);


		rs.GetValue(_T("BHQD"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BAN"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TED6T"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CS"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("DV"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHK"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHTN"), tmpStr);
		nTotal[10] += ToInt(tmpStr);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CONG"), tmpStr);
		nTotal[11] += ToInt(tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		//rs.GetValue(_T("##"), tmpStr);
		//nTotal[12] += ToInt(tmpStr);
		//xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QUAN1"), tmpStr);
		nTotal[13] += ToInt(tmpStr);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QN1"), tmpStr);
		nTotal[14] += ToInt(tmpStr);
		xls.SetCellText(nCol + 14, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQH1"), tmpStr);
		nTotal[15] += ToInt(tmpStr);
		xls.SetCellText(nCol + 15, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQD1"), tmpStr);
		nTotal[16] += ToInt(tmpStr);
		xls.SetCellText(nCol + 16, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BAN1"), tmpStr);
		nTotal[17] += ToInt(tmpStr);
		xls.SetCellText(nCol + 17, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TED6T1"), tmpStr);
		nTotal[18] += ToInt(tmpStr);
		xls.SetCellText(nCol + 18, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CS1"), tmpStr);
		nTotal[19] += ToInt(tmpStr);
		xls.SetCellText(nCol + 19, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("DV1"), tmpStr);
		nTotal[20] += ToInt(tmpStr);
		xls.SetCellText(nCol + 20, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHK1"), tmpStr);
		nTotal[21] += ToInt(tmpStr);
		xls.SetCellText(nCol + 21, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHTN1"), tmpStr);
		nTotal[22] += ToInt(tmpStr);
		xls.SetCellText(nCol + 22, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CONG1"), tmpStr);
		nTotal[23] += ToInt(tmpStr);
		xls.SetCellText(nCol + 23, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		//rs.GetValue(_T("##"), tmpStr);
		//nTotal[24] += ToInt(tmpStr);
		//xls.SetCellText(nCol + 24, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QUAN2"), tmpStr);
		nTotal[25] += ToInt(tmpStr);
		xls.SetCellText(nCol + 25, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QN2"), tmpStr);
		nTotal[26] += ToInt(tmpStr);
		xls.SetCellText(nCol + 26, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQH2"), tmpStr);
		nTotal[27] += ToInt(tmpStr);
		xls.SetCellText(nCol + 27, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQD2"), tmpStr);
		nTotal[28] += ToInt(tmpStr);
		xls.SetCellText(nCol + 28, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BAN2"), tmpStr);
		nTotal[29] += ToInt(tmpStr);
		xls.SetCellText(nCol + 29, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TED6T2"), tmpStr);
		nTotal[30] += ToInt(tmpStr);
		xls.SetCellText(nCol + 30, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CS2"), tmpStr);
		nTotal[31] += ToInt(tmpStr);
		xls.SetCellText(nCol + 31, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("DV2"), tmpStr);
		nTotal[32] += ToInt(tmpStr);
		xls.SetCellText(nCol + 32, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHK2"), tmpStr);
		nTotal[33] += ToInt(tmpStr);
		xls.SetCellText(nCol + 33, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHTN2"), tmpStr);
		nTotal[34] += ToInt(tmpStr);
		xls.SetCellText(nCol + 34, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CONG2"), tmpStr);
		nTotal[35] += ToInt(tmpStr);
		xls.SetCellText(nCol + 35, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		//rs.GetValue(_T("##"), tmpStr);
		//nTotal[36] += ToInt(tmpStr);
		//xls.SetCellText(nCol + 36, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QUAN3"), tmpStr);
		nTotal[37] += ToInt(tmpStr);
		xls.SetCellText(nCol + 37, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QN3"), tmpStr);
		nTotal[38] += ToInt(tmpStr);
		xls.SetCellText(nCol + 38, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQH3"), tmpStr);
		nTotal[39] += ToInt(tmpStr);
		xls.SetCellText(nCol + 39, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQD3"), tmpStr);
		nTotal[40] += ToInt(tmpStr);
		xls.SetCellText(nCol + 40, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BAN3"), tmpStr);
		nTotal[41] += ToInt(tmpStr);
		xls.SetCellText(nCol + 41, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TED6T3"), tmpStr);
		nTotal[42] += ToInt(tmpStr);
		xls.SetCellText(nCol + 42, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CS3"), tmpStr);
		nTotal[43] += ToInt(tmpStr);
		xls.SetCellText(nCol + 43, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("DV3"), tmpStr);
		nTotal[44] += ToInt(tmpStr);
		xls.SetCellText(nCol + 44, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHK3"), tmpStr);
		nTotal[45] += ToInt(tmpStr);
		xls.SetCellText(nCol + 45, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHTN3"), tmpStr);
		nTotal[46] += ToInt(tmpStr);
		xls.SetCellText(nCol + 46, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CONG3"), tmpStr);
		nTotal[47] += ToInt(tmpStr);
		xls.SetCellText(nCol + 47, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		//rs.GetValue(_T("##"), tmpStr);
		//nTotal[48] += ToInt(tmpStr);
		//xls.SetCellText(nCol + 48, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QUAN4"), tmpStr);
		nTotal[49] += ToInt(tmpStr);
		xls.SetCellText(nCol + 49, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("QN4"), tmpStr);
		nTotal[50] += ToInt(tmpStr);
		xls.SetCellText(nCol + 50, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQH4"), tmpStr);
		nTotal[51] += ToInt(tmpStr);
		xls.SetCellText(nCol + 51, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHQD4"), tmpStr);
		nTotal[52] += ToInt(tmpStr);
		xls.SetCellText(nCol + 52, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BAN4"), tmpStr);
		nTotal[53] += ToInt(tmpStr);
		xls.SetCellText(nCol + 53, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TED6T4"), tmpStr);
		nTotal[54] += ToInt(tmpStr);
		xls.SetCellText(nCol + 54, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CS4"), tmpStr);
		nTotal[55] += ToInt(tmpStr);
		xls.SetCellText(nCol + 55, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("DV4"), tmpStr);
		nTotal[56] += ToInt(tmpStr);
		xls.SetCellText(nCol + 56, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHK4"), tmpStr);
		nTotal[57] += ToInt(tmpStr);
		xls.SetCellText(nCol + 57, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("BHTN4"), tmpStr);
		nTotal[58] += ToInt(tmpStr);
		xls.SetCellText(nCol + 58, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CONG4"), tmpStr);
		nTotal[59] += ToInt(tmpStr);
		xls.SetCellText(nCol + 59, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		//rs.GetValue(_T("##"), tmpStr);
		//nTotal[60] += ToInt(tmpStr);
		//xls.SetCellText(nCol + 60, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TONGCONG"), tmpStr);
		nTotal[61] += ToInt(tmpStr);
		xls.SetCellText(nCol + 61, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(nCol, nRow, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER, true, 11);
	for (int i = 1; i <= 62; i++)
	{
		tmpStr1.Format(_T("%d"), nTotal[i]);
		xls.SetCellText(i, nRow, tmpStr1, FMT_NUMBER1 | FMT_CENTER, true, 10);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\TINHHINHPHAUTHUAT_KHOINGOAI.xls"));
}

void CBCTINHHINHPHAUTHUATTTSPT::OnListDblClick(){
	
} 
void CBCTINHHINHPHAUTHUATTTSPT::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CBCTINHHINHPHAUTHUATTTSPT::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTINHHINHPHAUTHUATTTSPT::OnListLoadData(){
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	CString szSQL, tmpStr;
	int nCount=0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	if(nCount ==0)
	{
		ShowMessageBox(_T("No data"));
		return 0;
	}
	CString szNewGroup,szOldGroup;
	int nItem=1,nIndex = 1;
	while(!rs.IsEOF()){
		rs.GetValue(_T("ID"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{	
			rs.GetValue(_T("TYPE"), tmpStr);
			nItem = m_wndList.AddItems(szNewGroup, tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 45);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), false);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
		tmpStr.Format(_T("%d"),nIndex++);
		rs.GetValue(_T("ID"), szNewGroup);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("ho_deptid")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("QN")),
			rs.GetValue(_T("BHQH")),
			rs.GetValue(_T("BHQD")),
			rs.GetValue(_T("BAN")),
			rs.GetValue(_T("TED6T")),
			rs.GetValue(_T("CS")),
			rs.GetValue(_T("DV")),
			rs.GetValue(_T("BHK")),
			rs.GetValue(_T("BHTN")),
			rs.GetValue(_T("CONG")),
			rs.GetValue(_T("TL")),
			rs.GetValue(_T("QUAN1")), 
			rs.GetValue(_T("QN1")),
			rs.GetValue(_T("BHQH1")),
			rs.GetValue(_T("BHQD1")),
			rs.GetValue(_T("BAN1")),
			rs.GetValue(_T("TED6T1")),
			rs.GetValue(_T("CS1")),
			rs.GetValue(_T("DV1")),
			rs.GetValue(_T("BHK1")),
			rs.GetValue(_T("BHTN1")),
			rs.GetValue(_T("CONG1")),
			rs.GetValue(_T("TL1")),
			rs.GetValue(_T("QUAN2")),  
			rs.GetValue(_T("QN2")),
			rs.GetValue(_T("BHQH2")),
			rs.GetValue(_T("BHQD2")),
			rs.GetValue(_T("BAN2")),
			rs.GetValue(_T("TED6T2")),
			rs.GetValue(_T("CS2")),
			rs.GetValue(_T("DV2")),
			rs.GetValue(_T("BHK2")),
			rs.GetValue(_T("BHTN2")),
			rs.GetValue(_T("CONG2")),
			rs.GetValue(_T("TL2")),
			rs.GetValue(_T("QUAN3")), 
			rs.GetValue(_T("QN3")),
			rs.GetValue(_T("BHQH3")),
			rs.GetValue(_T("BHQD3")),
			rs.GetValue(_T("BAN3")),
			rs.GetValue(_T("TED6T3")),
			rs.GetValue(_T("CS3")),
			rs.GetValue(_T("DV3")),
			rs.GetValue(_T("BHK3")),
			rs.GetValue(_T("BHTN3")),
			rs.GetValue(_T("CONG3")),
			rs.GetValue(_T("TL3")),
			rs.GetValue(_T("QUAN4")),
			rs.GetValue(_T("QN4")),
			rs.GetValue(_T("BHQH4")),
			rs.GetValue(_T("BHQD4")),
			rs.GetValue(_T("BAN4")),
			rs.GetValue(_T("TED6T4")),
			rs.GetValue(_T("CS4")),
			rs.GetValue(_T("DV4")),
			rs.GetValue(_T("BHK4")),
			rs.GetValue(_T("BHTN4")),
			rs.GetValue(_T("CONG4")),
			rs.GetValue(_T("TL4")),
			rs.GetValue(_T("TONGCONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTINHHINHPHAUTHUATTTSPT::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBCTINHHINHPHAUTHUATTTSPT::OnDepartmentSelendok(){
	 
}
/*void CBCTINHHINHPHAUTHUATTTSPT::OnDepartmentSetfocus(){
	
}*/
/*void CBCTINHHINHPHAUTHUATTTSPT::OnDepartmentKillfocus(){
	
}*/
long CBCTINHHINHPHAUTHUATTTSPT::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szTmp;
	m_szDepts.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type IN('DT', 'KB') and sd_isactive = 'Y' order by id"));
	//szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_id IN('B1-A','B1-B','B1-C','B1-D','A2-B','B2','B3','B4','B5','B6','B7','B8','B9','B10','B15') and sd_isactive = 'Y' order by id"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);

		szTmp.Format(_T("'%s'"), rs.GetValue(_T("id")));
		if(!m_szDepts.IsEmpty())
			m_szDepts += _T(", ");
		m_szDepts += szTmp;

		rs.MoveNext();
	}
	//_msg(_T("%s"), m_szDepts);
	return nCount;
}
/*void CBCTINHHINHPHAUTHUATTTSPT::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
int CBCTINHHINHPHAUTHUATTTSPT::OnAddBCTINHHINHPHAUTHUATTTSPT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTINHHINHPHAUTHUATTTSPT::OnEditBCTINHHINHPHAUTHUATTTSPT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTINHHINHPHAUTHUATTTSPT::OnDeleteBCTINHHINHPHAUTHUATTTSPT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelBCTINHHINHPHAUTHUATTTSPT();
 	}
	return 0;
}
int CBCTINHHINHPHAUTHUATTTSPT::OnSaveBCTINHHINHPHAUTHUATTTSPT(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnBCTINHHINHPHAUTHUATTTSPTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTINHHINHPHAUTHUATTTSPT::OnCancelBCTINHHINHPHAUTHUATTTSPT(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CBCTINHHINHPHAUTHUATTTSPT::OnBCTINHHINHPHAUTHUATTTSPTListLoadData(){
	return 0;
}
CString CBCTINHHINHPHAUTHUATTTSPT::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szExcFeeID;

	szExcFeeID.Format(_T(" AND HFL_FEEID NOT IN ('B550020578', 'B550020579', 'B550020580', 'B550020581', 'B550020582', 'B550020585', 'B550020583', 'B550020584') "));

	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HO_PDEPTID='%s'"), m_szDepartmentKey);
	szWhere.Format(
		_T(" AND HO_PERFORMDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T(" AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')")
		, m_szFromDate, m_szToDate);

	szWhere.AppendFormat(_T(" %s "), szExcFeeID);

	szSQL.Format(_T(" SELECT id,") \
		_T("        TYPE,") \
		_T("        pdept_id,") \
		_T("        SUM (QUAN) AS QUAN,") \
		_T("        SUM (QN) AS QN,") \
		_T("        SUM (BHQH) AS BHQH,") \
		_T("        SUM (BHQD) AS BHQD,") \
		_T("        SUM (BAN) AS BAN,") \
		_T("        SUM (TED6T) AS TED6T,") \
		_T("        SUM (CS) AS CS,") \
		_T("        SUM (DV) AS DV,") \
		_T("        SUM (BHK) AS BHK,") \
		_T("        SUM (BHTN) AS BHTN,") \
		_T("        SUM (CONG) AS CONG,") \
		_T("        SUM (QUAN1) AS QUAN1,") \
		_T("        SUM (QN1) AS QN1,") \
		_T("        SUM (BHQH1) AS BHQH1,") \
		_T("        SUM (BHQD1) AS BHQD1,") \
		_T("        SUM (BAN1) AS BAN1,") \
		_T("        SUM (TED6T1) AS TED6T1,") \
		_T("        SUM (CS1) AS CS1,") \
		_T("        SUM (DV1) AS DV1,") \
		_T("        SUM (BHK1) AS BHK1,") \
		_T("        SUM (BHTN1) AS BHTN1,") \
		_T("        SUM (CONG1) AS CONG1,") \
		_T("        SUM (QUAN2) AS QUAN2,") \
		_T("        SUM (QN2) AS QN2,") \
		_T("        SUM (BHQH2) AS BHQH2,") \
		_T("        SUM (BHQD2) AS BHQD2,") \
		_T("        SUM (BAN2) AS BAN2,") \
		_T("        SUM (TED6T2) AS TED6T2,") \
		_T("        SUM (CS2) AS CS2,") \
		_T("        SUM (DV2) AS DV2,") \
		_T("        SUM (BHK2) AS BHK2,") \
		_T("        SUM (BHTN2) AS BHTN2,") \
		_T("        SUM (CONG2) AS CONG2,") \
		_T("        SUM (QUAN3) AS QUAN3,") \
		_T("        SUM (QN3) AS QN3,") \
		_T("        SUM (BHQH3) AS BHQH3,") \
		_T("        SUM (BHQD3) AS BHQD3,") \
		_T("        SUM (BAN3) AS BAN3,") \
		_T("        SUM (TED6T3) AS TED6T3,") \
		_T("        SUM (CS3) AS CS3,") \
		_T("        SUM (DV3) AS DV3,") \
		_T("        SUM (BHK3) AS BHK3,") \
		_T("        SUM (BHTN3) AS BHTN3,") \
		_T("        SUM (CONG3) AS CONG3,") \
		_T("        SUM (QUAN4) AS QUAN4,") \
		_T("        SUM (QN4) AS QN4,") \
		_T("        SUM (BHQH4) AS BHQH4,") \
		_T("        SUM (BHQD4) AS BHQD4,") \
		_T("        SUM (BAN4) AS BAN4,") \
		_T("        SUM (TED6T4) AS TED6T4,") \
		_T("        SUM (CS4) AS CS4,") \
		_T("        SUM (DV4) AS DV4,") \
		_T("        SUM (BHK4) AS BHK4,") \
		_T("        SUM (BHTN4) AS BHTN4,") \
		_T("        SUM (CONG4) AS CONG4,") \
		_T("        SUM (TONGCONG) AS TONGCONG") \
		_T("   FROM (SELECT CASE khoa_yc WHEN N'I' THEN 1") \
		_T("                  WHEN N'E' THEN 2") \
		_T("                ELSE 3") \
		_T("                END AS id,") \
		_T("                CASE khoa_yc WHEN N'I' THEN 'Phẫu thuật nội trú (Trong tổng số phẫu thuật trên)'") \
		_T("                  WHEN N'E' THEN 'Phẫu thuật ngoại trú (Trong tổng số phẫu thuật trên)'") \
		_T("                ELSE 'Phẫu thuật theo yêu cầu (Trong tổng số phẫu thuật trên)'") \
		_T("                END AS TYPE,") \
		_T("                khoa_th AS pdept_id,") \
		_T("                CASE WHEN doi_tuong = 1 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QUAN,") \
		_T("                CASE WHEN doi_tuong = 11 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QN,") \
		_T("                CASE WHEN doi_tuong = 2 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS bhqh,") \
		_T("                CASE WHEN doi_tuong = 10 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQD,") \
		_T("                CASE WHEN doi_tuong = 8 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BAN,") \
		_T("                CASE WHEN doi_tuong IN ( 9, 6 ) AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS TED6T,") \
		_T("                CASE WHEN doi_tuong = 3 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CS,") \
		_T("                CASE WHEN doi_tuong = 7 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS DV,") \
		_T("                CASE WHEN doi_tuong = 4 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHK,") \
		_T("                CASE WHEN doi_tuong = 5 AND loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHTN,") \
		_T("                CASE WHEN loai_pt = 'B44' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CONG,") \
		_T("                CASE WHEN doi_tuong = 1 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QUAN1,") \
		_T("                CASE WHEN doi_tuong = 11 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QN1,") \
		_T("                CASE WHEN doi_tuong = 2 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQH1,") \
		_T("                CASE WHEN doi_tuong = 10 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQD1,") \
		_T("                CASE WHEN doi_tuong = 8 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BAN1,") \
		_T("                CASE WHEN doi_tuong IN ( 9, 6 ) AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS TED6T1,") \
		_T("                CASE WHEN doi_tuong = 3 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CS1,") \
		_T("                CASE WHEN doi_tuong = 7 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS DV1,") \
		_T("                CASE WHEN doi_tuong = 4 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHK1,") \
		_T("                CASE WHEN doi_tuong = 5 AND loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHTN1,") \
		_T("                CASE WHEN loai_pt = 'B41' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CONG1,") \
		_T("                CASE WHEN doi_tuong = 1 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QUAN2,") \
		_T("                CASE WHEN doi_tuong = 11 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QN2,") \
		_T("                CASE WHEN doi_tuong = 2 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQH2,") \
		_T("                CASE WHEN doi_tuong = 10 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQD2,") \
		_T("                CASE WHEN doi_tuong = 8 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BAN2,") \
		_T("                CASE WHEN doi_tuong IN ( 9, 6 ) AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS TED6T2,") \
		_T("                CASE WHEN doi_tuong = 3 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CS2,") \
		_T("                CASE WHEN doi_tuong = 7 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS DV2,") \
		_T("                CASE WHEN doi_tuong = 4 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHK2,") \
		_T("                CASE WHEN doi_tuong = 5 AND loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHTN2,") \
		_T("                CASE WHEN loai_pt = 'B42' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CONG2,") \
		_T("                CASE WHEN doi_tuong = 1 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QUAN3,") \
		_T("                CASE WHEN doi_tuong = 11 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QN3,") \
		_T("                CASE WHEN doi_tuong = 2 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQH3,") \
		_T("                CASE WHEN doi_tuong = 10 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQD3,") \
		_T("                CASE WHEN doi_tuong = 8 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BAN3,") \
		_T("                CASE WHEN doi_tuong IN ( 9, 6 ) AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS TED6T3,") \
		_T("                CASE WHEN doi_tuong = 3 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CS3,") \
		_T("                CASE WHEN doi_tuong = 7 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS DV3,") \
		_T("                CASE WHEN doi_tuong = 4 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHK3,") \
		_T("                CASE WHEN doi_tuong = 5 AND loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHTN3,") \
		_T("                CASE WHEN loai_pt = 'B43' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CONG3,") \
		_T("                CASE WHEN doi_tuong = 1 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QUAN4,") \
		_T("                CASE WHEN doi_tuong = 11 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS QN4,") \
		_T("                CASE WHEN doi_tuong = 2 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQH4,") \
		_T("                CASE WHEN doi_tuong = 10 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHQD4,") \
		_T("                CASE WHEN doi_tuong = 8 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BAN4,") \
		_T("                CASE WHEN doi_tuong IN ( 9, 6 ) AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS TED6T4,") \
		_T("                CASE WHEN doi_tuong = 3 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CS4,") \
		_T("                CASE WHEN doi_tuong = 7 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS DV4,") \
		_T("                CASE WHEN doi_tuong = 4 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHK4,") \
		_T("                CASE WHEN doi_tuong = 5 AND loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS BHTN4,") \
		_T("                CASE WHEN loai_pt = 'B40' THEN 1") \
		_T("                ELSE 0") \
		_T("                END AS CONG4,") \
		_T("                1 AS TONGCONG") \
		_T("           FROM (   SELECT ho_object AS doi_tuong,") \
		_T("                           CASE WHEN order_dept.sd_type = 'DT' THEN N'I'") \
		_T("                           ELSE N'E'") \
		_T("                           END AS khoa_yc,") \
		_T("                           Substr (hfg_id, 1, 3) AS loai_pt,") \
			_T("                   CASE WHEN order_dept.sd_type = 'DT' THEN") \
			_T("                       CASE WHEN Nvl (treatment_pdept.sd_id_alias, order_dept.sd_id_alias) <> 'B5'") \
			_T("                       THEN Nvl") \
			_T("                            (") \
			_T("                                                                     treatment_pdept.sd_id_alias,") \
			_T("                            order_dept.sd_id_alias)") \
			_T("                       ELSE ho_deptid") \
			_T("                       END") \
			_T("                   ELSE") \
			_T("                       CASE WHEN exam_pdept.sd_id_alias <> 'B5' THEN exam_pdept.sd_id_alias") \
			_T("                       ELSE ho_deptid") \
			_T("                       END") \
			_T("                   END AS khoa_th") \
		_T("                      FROM HMS_OPERATION") \
		_T("                 LEFT JOIN HMS_FEE_LIST ON ( HFL_FEEID = HO_ITEMID AND HFL_TYPEID = 'O' )") \
		_T("                 LEFT JOIN HMS_FEE_GROUP ON ( HFG_ID = HFL_GROUPID )") \
		_T("                 LEFT JOIN SYS_DEPT order_dept ON ( SD_ID = ho_deptid )") \
		_T("                 LEFT JOIN SYS_DEPT treatment_pdept ON ( treatment_pdept.SD_ID = ho_performplace )") \
		_T("                 LEFT JOIN SYS_DEPT exam_pdept ON ( exam_pdept.SD_ID = ho_pdeptid )") \
		_T("                     WHERE HO_STATUS IN ( 'S', 'T' ) AND Substr (hfg_id, 1, 3) IN (") \
		_T("                                                         'B40', 'B41', 'B42', 'B43',") \
		_T("                                                         'B44' ) AND") \
		_T("                                      ho_object >= 1 AND ho_object <= 11 %s))") \
		_T("  GROUP BY id,TYPE,pdept_id") \
		_T("  ORDER BY id,TYPE,pdept_id ")
		, szWhere);


	return szSQL;
}
