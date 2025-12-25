#include "stdafx.h"
#include "FMInsDepositUnPaidPatientList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsDepositUnPaidPatientList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsDepositUnPaidPatientList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsDepositUnPaidPatientList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsDepositUnPaidPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsDepositUnPaidPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStaffSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsDepositUnPaidPatientList* )pWnd)->OnStaffSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStaffSelendokFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnStaffSelendok();
}
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnStaffKillfocus();
}*/
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnStaffKillfocus();
}*/
static long _OnStaffLoadDataFnc(CWnd *pWnd){
	return ((CFMInsDepositUnPaidPatientList *)pWnd)->OnStaffLoadData();
}
/*static void _OnStaffAddNewFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList *)pWnd)->OnStaffAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsDepositUnPaidPatientList *pVw = (CFMInsDepositUnPaidPatientList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsDepositUnPaidPatientList *pVw = (CFMInsDepositUnPaidPatientList *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsDepositUnPaidPatientList*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMInsDepositUnPaidPatientList*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsDepositUnPaidPatientList*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsDepositUnPaidPatientList*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMInsDepositUnPaidPatientList*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMInsDepositUnPaidPatientList*)pWnd)->OnDeptListUnCheckAll();
}
CFMInsDepositUnPaidPatientList::CFMInsDepositUnPaidPatientList(CWnd *pParent){

	m_nDlgWidth = 585;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CFMInsDepositUnPaidPatientList::~CFMInsDepositUnPaidPatientList(){
}
void CFMInsDepositUnPaidPatientList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 345);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndPrint.Create(this, _T("&Print"), 265, 350, 345, 375);
	m_wndExport.Create(this, _T("&Export"), 350, 350, 430, 375);
	m_wndSolder.Create(this, _T("\x42\x1EC7nh nh\xE2n Qu\xE2n"), 5, 350, 150, 375);
	m_wndDeptList.Create(this,10, 122, 425, 342); 
	m_wndStaffLabel.Create(this, _T("Staff"), 10, 90, 90, 115);
	m_wndStaff.Create(this,95, 90, 215, 115);
}
void CFMInsDepositUnPaidPatientList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStaff.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndStaff.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
	m_wndFromDate.EnableWindow(FALSE);
}

void CFMInsDepositUnPaidPatientList::OnSetWindowEvents(){
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
	m_wndStaff.SetEvent(WE_SELENDOK, _OnStaffSelendokFnc);
	//m_wndStaff.SetEvent(WE_SETFOCUS, _OnStaffSetfocusFnc);
	//m_wndStaff.SetEvent(WE_KILLFOCUS, _OnStaffKillfocusFnc);
	m_wndStaff.SetEvent(WE_SELCHANGE, _OnStaffSelectChangeFnc);
	m_wndStaff.SetEvent(WE_LOADDATA, _OnStaffLoadDataFnc);
	//m_wndStaff.SetEvent(WE_ADDNEW, _OnStaffAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);

	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szToDate = pMF->GetSysDate();
	m_szFromDate = _T("2015/01/18 00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnDeptListLoadData();

}
void CFMInsDepositUnPaidPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaffKey);
	DDX_Check(pDX, m_wndSolder.GetDlgCtrlID(), m_bSolder);
}
void CFMInsDepositUnPaidPatientList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStaffKey.Empty();
	m_bSolder = FALSE;
}

int CFMInsDepositUnPaidPatientList::SetMode(int nMode){
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

/*void CFMInsDepositUnPaidPatientList::OnYearChange(){
	
} */
/*void CFMInsDepositUnPaidPatientList::OnYearSetfocus(){
	
} */
/*void CFMInsDepositUnPaidPatientList::OnYearKillfocus(){
	
} */
int CFMInsDepositUnPaidPatientList::OnYearCheckValue(){
	UpdateData(TRUE);
	if (m_nYear > 0)
	{
		CDateTime dt;
		CDate date;
		CString szTemp;

		dt.ParseDateTime(m_szFromDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szFromDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/.2d/.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/.2d/.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}

	UpdateData(FALSE);
	return 0;
}
 
void CFMInsDepositUnPaidPatientList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsDepositUnPaidPatientList::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
}

/*void CFMInsDepositUnPaidPatientList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsDepositUnPaidPatientList::OnReportPeriodKillfocus(){
	
}*/
long CFMInsDepositUnPaidPatientList::OnReportPeriodLoadData()
{
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

/*void CFMInsDepositUnPaidPatientList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsDepositUnPaidPatientList::OnFromDateChange(){
	
} */
/*void CFMInsDepositUnPaidPatientList::OnFromDateSetfocus(){
	
} */
/*void CFMInsDepositUnPaidPatientList::OnFromDateKillfocus(){
	
} */
int CFMInsDepositUnPaidPatientList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CFMInsDepositUnPaidPatientList::OnToDateChange(){
	
} */
/*void CFMInsDepositUnPaidPatientList::OnToDateSetfocus(){
	
} */
/*void CFMInsDepositUnPaidPatientList::OnToDateKillfocus(){
	
} */
int CFMInsDepositUnPaidPatientList::OnToDateCheckValue(){
	return 0;
}
void CFMInsDepositUnPaidPatientList::OnStaffSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsDepositUnPaidPatientList::OnStaffSelendok(){
	 
}
/*void CFMInsDepositUnPaidPatientList::OnStaffSetfocus(){
	
}*/
/*void CFMInsDepositUnPaidPatientList::OnStaffKillfocus(){
	
}*/
long CFMInsDepositUnPaidPatientList::OnStaffLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStaff.IsSearchKey() && !m_szStaffKey.IsEmpty()){
		szWhere.Format(_T(" and su_userid='%s' "), m_szStaffKey);
	}
	m_wndStaff.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as userid, su_name as username FROM sys_user WHERE su_deptid = 'PTC' %s ORDER BY userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStaff.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("username")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMInsDepositUnPaidPatientList::OnStaffAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsDepositUnPaidPatientList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	UpdateData(TRUE);

	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp;
	CString szSysDate;

	szSQL = GetQueryString();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANTAMGUIBAOHIEM_CHUATT.RPT")))
		return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetCurrentDepartmentName());
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	CReportSection *rptDetail;
	CString szOldLine, szNewLine;
	CString szObjectNames;

	double nGroupTotal = 0, nTotal = 0;
	double nCost;
	int nIndex = 1;

	szObjectNames.Empty();
	CStringArray strArr;
	bool bCheckServ = false, bCheckIns = false;

	strArr.Add(_T("\x64\x1ECB\x63h v\x1EE5"));
	strArr.Add(_T("\x42\x110 - \x43S - \x42H"));

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), szNewLine);
		if (!szNewLine.IsEmpty() && szNewLine != szOldLine)
		{
			if (nGroupTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng kho\x61 :"));
				FormatCurrency(nGroupTotal, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				nTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			szOldLine = szNewLine;
		}
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("recordno"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		if (nGroupTotal == 0)
		{
			rs.GetValue(_T("dept"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
		}

		rs.GetValue(_T("receiptdate"), tmpStr);
		rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("deposit"), nCost);
		nGroupTotal += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng kho\x61"));
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if (nTotal > 0)
	{
		FormatCurrency(nTotal, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Total"), tmpStr + _T(" \x111\x1ED3ng"));
		CString szMoney;
		tmpStr.Replace(_T("."), _T(""));
		MoneyToString(tmpStr, szMoney);
		rpt.GetReportFooter()->SetValue(_T("SumInWords"), szMoney + _T(" \x111\x1ED3ng"));
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
}
 
void CFMInsDepositUnPaidPatientList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CString szOldLev1, szNewLev1;
	double nTotal = 0, nGroupTotal = 0, nTmp = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 25);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 20);	xls.SetColumnWidth(5, 14);	xls.SetColumnWidth(6, 14);	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 2, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true, 10);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: \x42\x1EA2O HI\x1EC2M Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 0, _T("M\x1EABu \x62i\x1EC3u \x31\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N T\x1EA0M G\x1EECI \x43H\x1AF\x41 TH\x41NH TO\xC1N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("S\x1ED1 \x42\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 0, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 1, _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("\x44uy\x1EC7t n\x1ED9p"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("T\x1ED5ng t\x1EA1m g\x1EEDi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 1);	xls.SetMerge(3, 3, 0, 6);	xls.SetMerge(4, 4, 0, 6);	xls.SetMerge(5, 5, 0, 6);	xls.SetMerge(0, 0, 3, 6);	xls.SetMerge(1, 1, 3, 6);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	while(!rs.IsEOF()){
		rs.GetValue(_T("dept"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 6);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng nh\xF3m: "), FMT_TEXT | FMT_RIGHT, true);
				xls.SetCellText(nCol+6, nRow, double2str(nGroupTotal), FMT_NUMBER1, true);
				nTotal += nGroupTotal;
				nGroupTotal = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 7);
			xls.SetCellText(nCol, nRow, szNewLev1, FMT_TEXT, true);
			szOldLev1 = szNewLev1;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("recordno"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		if (nGroupTotal == 0)
			{
				rs.GetValue(_T("dept"), tmpStr);
				xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
			}

		rs.GetValue(_T("receiptdate"), tmpStr);
		xls.SetCellText(nCol+5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("deposit"), nTmp);
		nGroupTotal += nTmp;
		xls.SetCellText(nCol+6, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng nh\xF3m: "), FMT_TEXT | FMT_RIGHT, true);
		xls.SetCellText(nCol+6, nRow, double2str(nGroupTotal), FMT_NUMBER1, true);
		nTotal += nGroupTotal;
		nRow++;
	}

	if (nTotal > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), FMT_TEXT | FMT_RIGHT, true);
		xls.SetCellText(nCol+6, nRow, double2str(nTotal), FMT_NUMBER1, true);
	}	nRow++;	FormatCurrency(nTotal, tmpStr);	tmpStr.Replace(_T("."), _T(""));	MoneyToString(tmpStr, szTemp);
	tmpStr.Format(_T("S\x1ED1 ti\x1EC1n \x62\x1EB1ng \x63h\x1EEF: %s \x111\x1ED3ng"), szTemp);
	xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT, true);	nRow++;	nRow++;	nRow++;	tmpStr = pMF->GetSysDate();
	tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT, true);	nRow++;	xls.SetCellText(nCol+1, nRow, _T("NG\x1AF\x1EDCI L\x1EACP \x42\x1EA2NG"), FMT_TEXT, true);	xls.SetCellText(nCol+4, nRow, _T("TR\x1AF\x1EDENG PH\xD2NG T\xC0I \x43H\xCDNH"), FMT_TEXT, true);	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHBENHNHANTAMGUICHUATT_BH.xls"));
}

void CFMInsDepositUnPaidPatientList::OnDeptListDblClick(){
	
}
 
void CFMInsDepositUnPaidPatientList::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMInsDepositUnPaidPatientList::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMInsDepositUnPaidPatientList::OnDeptListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type IN ('DT', 'KB') ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad();
	return nCount;
}

CString CFMInsDepositUnPaidPatientList::GetQueryString(){
	CString szSQL, szWhere, szObjects, szDepts;

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if(!m_szStaffKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and d.hfe_staff = '%s' "), m_szStaffKey);
	}
	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and d.hfe_deptid in(%s) "), szDepts);
	}
	if (m_bSolder)
		szWhere.AppendFormat(_T(" AND substr((hd_cardno),1,2)='QN'"));
		szSQL.Format(_T(" SELECT ") \
				_T(" pname,") \
				_T(" docno,") \
				_T(" dept,") \
				_T(" recordno,") \
				_T(" receiptdate,") \
				_T(" deposit") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT Get_patientname(d.hfe_docno) pname,") \
				_T("   d.hfe_docno AS docno,") \
				_T("   Get_departmentname(d.hfe_deptid) dept,") \
				_T("   d.hfe_deptid deptid,") \
				_T("   hcr_recordno recordno,") \
				_T("   fac_posteddate receiptdate,") \
				_T("   d.hfe_amount deposit") \
				_T(" FROM hms_fee_deposit d") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON ( hcr_docno = d.hfe_docno )") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON ( d.hfe_docno = hd_docno )") \
				_T(" LEFT JOIN fa_cash") \
				_T(" ON( d.hfe_cash_id = fac_cash_id)") \
				_T(" LEFT JOIN hms_fee_invoice i") \
				_T(" ON (i.hfe_invoiceno = hcrf_invoicefee)") \
				_T(" WHERE fac_posteddate BETWEEN TO_TIMESTAMP('2015/01/18 00:00:00','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') %s") \
				_T(" AND d.hfe_objectid NOT          IN (1,3,8,7)") \
				_T(" AND NVL(hd_outpatient, 'N') <> 'Y'") \
				_T(" AND NVL(d.hfe_isreq, 'N')       <> 'Y'") \
				_T(" AND (NVL(hcrf_acceptedfee, 'N') <> 'P'") \
				_T(" OR (hcrf_acceptedfee             = 'P'") \
				_T(" AND i.hfe_date                   > TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')))") \
				_T(" AND d.hfe_status                IN ('P')") \
				_T(" AND fac_posted                   = 'Y'") \
				_T(" UNION ALL") \
				_T(" SELECT Get_patientname(d.hfe_docno) pname,") \
				_T("   d.hfe_docno AS docno,") \
				_T("   Get_departmentname(d.hfe_deptid) dept,") \
				_T("   d.hfe_deptid deptid,") \
				_T("   hcr_recordno as recordno,") \
				_T("   fac_posteddate receiptdate,") \
				_T("   d.hfe_amount deposit") \
				_T(" FROM hms_fee_deposit d") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON ( hcr_docno = d.hfe_docno )") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON ( d.hfe_docno = hd_docno )") \
				_T(" LEFT JOIN hms_treatment_record") \
				_T(" ON ( htr_docno                  = hd_docno") \
				_T(" AND htr_treattime               = hfe_treattime)") \
				_T(" LEFT JOIN fa_cash") \
				_T(" ON( d.hfe_cash_id = fac_cash_id)") \
				_T(" LEFT JOIN hms_fee_invoice i") \
				_T(" ON (i.hfe_invoiceno = htrf_invoicefee)") \
				_T(" WHERE fac_posteddate BETWEEN TO_TIMESTAMP('2015/01/18 00:00:00','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') %s") \
				_T(" AND d.hfe_objectid              not in (1,3,8,7)") \
				_T(" AND NVL(hd_outpatient, 'N') = 'Y'") \
				_T(" AND NVL(d.hfe_isreq, 'N')       <> 'Y'") \
				_T(" AND (NVL(htrf_acceptedfee, 'N') <> 'P'") \
				_T(" OR (htrf_acceptedfee             = 'P'") \
				_T(" AND i.hfe_date                   > TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')))") \
				_T(" AND d.hfe_status                IN ('P')") \
				_T(" AND fac_posted                   = 'Y'") \
				_T(" )order by deptid, receiptdate"), m_szToDate, szWhere, m_szToDate,m_szToDate, szWhere, m_szToDate); \
	return szSQL;
}

int CFMInsDepositUnPaidPatientList::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (!m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMInsDepositUnPaidPatientList::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, FALSE);
		}
	}
	return 0;
}
