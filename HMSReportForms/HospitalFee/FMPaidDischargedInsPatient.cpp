#include "stdafx.h"
#include "FMPaidDischargedInsPatient.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPaidDischargedInsPatient *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPaidDischargedInsPatient* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPaidDischargedInsPatient *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPaidDischargedInsPatient *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPaidDischargedInsPatient *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPaidDischargedInsPatient* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMPaidDischargedInsPatient *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CFMPaidDischargedInsPatient *)pWnd)->OnDeptAddNew();
}*/
static long _OnSuggestionLoadDataFnc(CWnd *pWnd){
	return ((CFMPaidDischargedInsPatient*)pWnd)->OnSuggestionLoadData();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPaidDischargedInsPatient *pVw = (CFMPaidDischargedInsPatient *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPaidDischargedInsPatient *pVw = (CFMPaidDischargedInsPatient *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnExamSelectFnc(CWnd *pWnd){
	 ((CFMPaidDischargedInsPatient*)pWnd)->OnExamSelect();
}
static void _OnInwardSelectFnc(CWnd *pWnd){
	 ((CFMPaidDischargedInsPatient*)pWnd)->OnInwardSelect();
}
CFMPaidDischargedInsPatient::CFMPaidDischargedInsPatient(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMPaidDischargedInsPatient::~CFMPaidDischargedInsPatient(){
}
void CFMPaidDischargedInsPatient::OnCreateComponents(){
	m_wndPaidDischargedInsurancePatient.Create(this, _T("Paid Discharged Insurance Patient"), 5, 5, 430, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 90, 115);
	m_wndDept.Create(this,95, 90, 425, 115); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 120, 90, 145);
	m_wndSuggestion.Create(this,95, 120, 425, 145); 
	m_wndExam.Create(this, _T("Exam"), 5, 155, 85, 180);
	m_wndInward.Create(this, _T("Inward"), 90, 155, 170, 180);
	m_wndSoldier.Create(this, _T("Soldier"), 175, 155, 255, 180);
	m_wndLockedDate.Create(this, _T("Locked Date"), 260, 155, 430, 180);
	m_wndPrint.Create(this, _T("&Print"), 265, 185, 345, 210);
	m_wndExport.Create(this, _T("&Export"), 350, 185, 430, 210);
	
}
void CFMPaidDischargedInsPatient::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndSuggestion.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSuggestion.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFMPaidDischargedInsPatient::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndSuggestion.SetEvent(WE_LOADDATA, _OnSuggestionLoadDataFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndExam.SetEvent(WE_CLICK, _OnExamSelectFnc);
	m_wndInward.SetEvent(WE_CLICK, _OnInwardSelectFnc);
	CString szCurDate = pMF->GetSysDate();
	CDate tmpdte;
	tmpdte.ParseDate(szCurDate);
	m_szReportPeriodKey = int2str(tmpdte.GetMonth());
	m_szFromDate = m_szToDate = szCurDate;
	m_szToDate += _T("23:59");
	m_nYear = str2int(szCurDate.Left(4));
	UpdateData(FALSE);

}
void CFMPaidDischargedInsPatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestionKey);
	DDX_Check(pDX, m_wndExam.GetDlgCtrlID(), m_bExam);
	DDX_Check(pDX, m_wndInward.GetDlgCtrlID(), m_bInward);
	DDX_Check(pDX, m_wndSoldier.GetDlgCtrlID(), m_bSoldier);
	DDX_Check(pDX, m_wndLockedDate.GetDlgCtrlID(), m_bLockedDate);
	

}
void CFMPaidDischargedInsPatient::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_bExam=FALSE;
	m_bInward=FALSE;
	m_bLockedDate = FALSE;

}
int CFMPaidDischargedInsPatient::SetMode(int nMode){
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
/*void CFMPaidDischargedInsPatient::OnYearChange(){
	
} */
/*void CFMPaidDischargedInsPatient::OnYearSetfocus(){
	
} */
/*void CFMPaidDischargedInsPatient::OnYearKillfocus(){
	
} */
int CFMPaidDischargedInsPatient::OnYearCheckValue(){
	return 0;
} 
void CFMPaidDischargedInsPatient::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPaidDischargedInsPatient::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/1/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/3/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/4/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/6/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/7/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/9/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/1/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 	 
}
/*void CFMPaidDischargedInsPatient::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPaidDischargedInsPatient::OnReportPeriodKillfocus(){
	
}*/
long CFMPaidDischargedInsPatient::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szReportPeriodKey));
	}
	m_wndReportPeriod.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMPaidDischargedInsPatient::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPaidDischargedInsPatient::OnFromDateChange(){
	
} */
/*void CFMPaidDischargedInsPatient::OnFromDateSetfocus(){
	
} */
/*void CFMPaidDischargedInsPatient::OnFromDateKillfocus(){
	
} */
int CFMPaidDischargedInsPatient::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMPaidDischargedInsPatient::OnToDateChange(){
	
} */
/*void CFMPaidDischargedInsPatient::OnToDateSetfocus(){
	
} */
/*void CFMPaidDischargedInsPatient::OnToDateKillfocus(){
	
} */
int CFMPaidDischargedInsPatient::OnToDateCheckValue(){
	return 0;
} 
void CFMPaidDischargedInsPatient::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPaidDischargedInsPatient::OnDeptSelendok(){
	 
}
/*void CFMPaidDischargedInsPatient::OnDeptSetfocus(){
	
}*/
/*void CFMPaidDischargedInsPatient::OnDeptKillfocus(){
	
}*/
long CFMPaidDischargedInsPatient::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN ('KB', 'DT') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMPaidDischargedInsPatient::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMPaidDischargedInsPatient::OnSuggestionLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code code, ss_desc descr FROM sys_sel WHERE ss_id = 'hms_suggestion' AND ss_code IN ('C', 'D')"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndSuggestion.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndSuggestion.AddItems(
			rs.GetValue(_T("code")),
			rs.GetValue(_T("descr")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CFMPaidDischargedInsPatient::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPaidDischargedInsPatient::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotal[5];
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	int nRes = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		if (nRes < 0)
			_msg(_T("%s"), szSQL);
		else
			_fmsg(_T("%s"), szSQL);
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 5; i++)
		nTotal[i] = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(7, 15);
	xls.SetColumnWidth(8, 15);
	xls.SetColumnWidth(9, 15);
	xls.SetColumnWidth(10, 15);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H \x42N \x42H R\x41 VI\x1EC6N \x110\xC3 TH\x41NH TO\xC1N");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	xls.SetCellText(0, nRow, _T("STT"), 4098, true);
	xls.SetCellText(1, nRow, _T("T\xEAn \x42N"), 4098, true);
	xls.SetCellText(2, nRow, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(3, nRow, _T("Ng\xE0y v\xE0o"), 4098, true);
	xls.SetCellText(4, nRow, _T("Ng\xE0y r\x61 vi\x1EC7n"), 4098, true);
	xls.SetCellText(5, nRow, _T("Ng\xE0y th\x61nh to\xE1n"), 4098, true);
	xls.SetCellText(6, nRow, _T("Kho\x61 r\x61 vi\x1EC7n"), 4098, true);
	xls.SetCellText(7, nRow, _T("T\x1ED5ng \x63hi ph\xED"), 4098, true);
	xls.SetCellText(8, nRow, _T("\x42N \x63\xF9ng \x63hi tr\x1EA3"), 4098, true);
	xls.SetCellText(9, nRow, _T("\x42H TT"), 4098, true);
	xls.SetCellText(10, nRow, _T("\x42N tr\x1EA3 \x63h\xEAnh"), 4098, true);
	xls.SetCellText(11, nRow, _T("T\x1EA1m g\x1EEDi"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("admit_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("end_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("invoice_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("end_dept")), FMT_TEXT);
		rs.GetValue(_T("total_cost"), nTmp);
		nTotal[0] += nTmp;
		xls.SetCellText(7, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("co_paid"), nTmp);
		nTotal[1] += nTmp;
		xls.SetCellText(8, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("ins_paid"), nTmp);
		nTotal[2] += nTmp;
		xls.SetCellText(9, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("diff_cost"), nTmp);
		nTotal[3] += nTmp;
		xls.SetCellText(10, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("deposit"), nTmp);
		nTotal[4] += nTmp;
		xls.SetCellText(11, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	for (int i = 0; i < 5; i++)
	{
		xls.SetCellText(6, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+7, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\Danh sach BN BH ra vien da thanh toan.xls"));
	
} 
void CFMPaidDischargedInsPatient::OnExamSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CFMPaidDischargedInsPatient::OnInwardSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_wndSuggestion.EnableWindow(m_bInward);
}

CString CFMPaidDischargedInsPatient::GetQueryString(){
	CString szSQL, szIESQL, szOutpatientSQL, szWhere, szClass;
	szWhere.Format(_T(" AND hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (m_bLockedDate)
		szWhere.Format(_T(" AND hfe_locked = 'Y' AND hfe_lockeddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_deptid = '%s'"), m_szDeptKey);
	szClass.Empty();
	if (m_bExam)
		szClass = _T("'E', 'S'");
	if (m_bInward)
	{
		if (!szClass.IsEmpty())
			szClass += _T(", ");
		szClass += _T("'A', 'I'");	
	}
	if (!szClass.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_class IN (%s)"), szClass);
	if (!m_szSuggestionKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND NVL(hd_outpatient, 'N') = DECODE('%s', 'C', 'Y', 'N')"), m_szSuggestionKey);
	if (m_bSoldier)
		szWhere.AppendFormat(_T(" AND hfe_objectid = 1"));
	else
		szWhere.AppendFormat(_T(" AND Length(hc_cardno) > 0"));
	szIESQL.Format(_T(" SELECT    Get_patientname(hfe_docno) patient_name, ") \
				_T("           hfe_docno doc_no, ") \
				_T("           CASE WHEN hfe_class IN ('A', 'I') THEN hcr_admitdate ") \
				_T("           ELSE hd_admitdate ") \
				_T("           END admit_date, ") \
				_T("           CASE WHEN hfe_class IN ('A', 'I') THEN hcr_dischargedate ") \
				_T("           ELSE hd_enddate ") \
				_T("           END end_date, ") \
				_T("           hfe_date invoice_date, ") \
				_T("           hfe_deptid end_dept, ") \
				_T("           hfe_inspaid total_cost, ") \
				_T("           hfe_inspaid - hfe_discount co_paid, ") \
				_T("           hfe_discount ins_paid, ") \
				_T("           hfe_diffcost diff_cost, ") \
				_T("		   hfe_deposit deposit") \
				_T(" FROM      hms_fee_invoice ") \
				_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hfe_docno ) ") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = hfe_docno ) ") \
				_T(" LEFT JOIN hms_card ON ( hc_patientno = hd_patientno AND hc_idx = hd_cardidx ) ") \
				_T(" WHERE     hcr_status = 'T' AND hfe_status IN ('P', 'R') AND hfe_discount > 0 ") \
				_T(" AND Nvl(hd_outpatient, 'N') <> 'Y' %s"), szWhere);


	szOutpatientSQL.Format(_T(" SELECT    Get_patientname(hfe_docno) patient_name, ") \
				_T("           hfe_docno doc_no, ") \
				_T("           htr_admitdate admit_date, ") \
				_T("           htr_dischargedate end_date, ") \
				_T("           hfe_date invoice_date, ") \
				_T("           hfe_deptid end_dept, ") \
				_T("           hfe_inspaid total_cost, ") \
				_T("           hfe_inspaid - hfe_discount co_paid, ") \
				_T("           hfe_discount ins_paid, ") \
				_T("           hfe_diffcost diff_cost, ") \
				_T("		   hfe_deposit as deposit") \
				_T(" FROM      hms_fee_invoice ") \
				_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hfe_docno ) ") \
				_T(" LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND htr_treattime = hfe_treattime)") 
				_T(" LEFT JOIN hms_doc ON ( hd_docno = hfe_docno ) ") \
				_T(" LEFT JOIN hms_card ON ( hc_patientno = hd_patientno AND hc_idx = hd_cardidx ) ") \
				_T(" WHERE     hcr_status = 'T' AND hfe_status IN ('P', 'R') AND hfe_discount > 0 ") \
				_T(" AND Nvl(hd_outpatient, 'N') = 'Y' %s"), szWhere);
	szSQL.Format(_T("SELECT * FROM (%s UNION ALL %s) ORDER BY invoice_date, end_dept, doc_no"), szIESQL, szOutpatientSQL);
_tprintf(_T("\n%s"), szWhere);
	return szSQL;
}