#include "stdafx.h"
#include "FMInsuranceFeeLossReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceFeeLossReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceFeeLossReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceFeeLossReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceFeeLossReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceFeeLossReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceFeeLossReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceFeeLossReport *pVw = (CFMInsuranceFeeLossReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceFeeLossReport *pVw = (CFMInsuranceFeeLossReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceFeeLossReport*)pWnd)->OnAddFMInsuranceFeeLossReport();
} 
static int _OnEditFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceFeeLossReport*)pWnd)->OnEditFMInsuranceFeeLossReport();
} 
static int _OnDeleteFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceFeeLossReport*)pWnd)->OnDeleteFMInsuranceFeeLossReport();
} 
static int _OnSaveFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceFeeLossReport*)pWnd)->OnSaveFMInsuranceFeeLossReport();
} 
static int _OnCancelFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceFeeLossReport*)pWnd)->OnCancelFMInsuranceFeeLossReport();
} 

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceFeeLossReport*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceFeeLossReport*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CFMInsuranceFeeLossReport*)pWnd)->OnPolicySelect();
}
static void _OnThatthuSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceFeeLossReport*)pWnd)->OnThatthuSelect();
}

CFMInsuranceFeeLossReport::CFMInsuranceFeeLossReport(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMInsuranceFeeLossReport::~CFMInsuranceFeeLossReport()
{
}
void CFMInsuranceFeeLossReport::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
	m_wndYearLabel.Create(this, _T("Year"), 10, 31, 90, 56);
	m_wndYear.Create(this,95, 31, 215, 56); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 31, 300, 56);
	m_wndReportPeriod.Create(this,305, 31, 425, 56); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 61, 90, 86);
	m_wndFromDate.Create(this,95, 61, 215, 86); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 61, 300, 86);
	m_wndToDate.Create(this,305, 61, 425, 86); 
	m_wndInsurance.Create(this, _T("Insurance"), 10, 96, 101, 121);
	m_wndService.Create(this, _T("Service"), 106, 96, 197, 121);
	m_wndPolicy.Create(this, _T("Quân_CS"), 203, 96, 294, 121);
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 96, 430, 121);
	m_wndThatthu.Create(this, _T("Thất thu"), 10, 126, 197, 151);
	m_wndThatthu.EnableWindow(false);
}
void CFMInsuranceFeeLossReport::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void CFMInsuranceFeeLossReport::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndThatthu.SetEvent(WE_CLICK, _OnThatthuSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
}
void CFMInsuranceFeeLossReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndThatthu.GetDlgCtrlID(), m_bThatthu);

}
void CFMInsuranceFeeLossReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceFeeLossReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceFeeLossReport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInsurance=0;
	m_nService=1;
	m_nPolicy=1;
	m_bThatthu=false;

}
int CFMInsuranceFeeLossReport::SetMode(int nMode){
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
/*void CFMInsuranceFeeLossReport::OnYearChange(){
	
} */
/*void CFMInsuranceFeeLossReport::OnYearSetfocus(){
	
} */
/*void CFMInsuranceFeeLossReport::OnYearKillfocus(){
	
} */

void CFMInsuranceFeeLossReport::OnThatthuSelect(){
	
	
}

void CFMInsuranceFeeLossReport::OnInsuranceSelect()
{
		
}
void CFMInsuranceFeeLossReport::OnServiceSelect(){
	
}
void CFMInsuranceFeeLossReport::OnPolicySelect(){
	
}

int CFMInsuranceFeeLossReport::OnYearCheckValue()
{
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
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}
	UpdateData(FALSE);
	return 0;
} 
void CFMInsuranceFeeLossReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceFeeLossReport::OnReportPeriodSelendok()
{
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
/*void CFMInsuranceFeeLossReport::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceFeeLossReport::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceFeeLossReport::OnReportPeriodLoadData()
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
/*void CFMInsuranceFeeLossReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceFeeLossReport::OnFromDateChange(){
	
} */
/*void CFMInsuranceFeeLossReport::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceFeeLossReport::OnFromDateKillfocus(){
	
} */
int CFMInsuranceFeeLossReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMInsuranceFeeLossReport::OnToDateChange(){
	
} */
/*void CFMInsuranceFeeLossReport::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceFeeLossReport::OnToDateKillfocus(){
	
} */
int CFMInsuranceFeeLossReport::OnToDateCheckValue()
{
	return 0;
} 
void CFMInsuranceFeeLossReport::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceFeeLossReport::OnExportSelect1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1;
	long nDocumentNo;

	UpdateData(TRUE);
	//ShowMessageBox(_T("Hệ thống sẽ tạo lập lại phí giống như ở tài chính toàn bộ số hồ sơ ở phòng khám có ngày khám được chọn, sau đó xuất ra file Excel!"));

	BeginWaitCursor();

	
	/*szSQL.Format(_T(" select * from") \
				_T(" (") \
				_T("  select hd_docno as docno,get_objectname(hd_object) obj_name, hd_cardno card_no,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hms_getage(hd_admitdate, hp_birthdate) as age,") \
				_T("         (select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,") \
				_T("         trunc(hd_admitdate) as admitdate,") \
				_T("         sum(f.hfe_cost) as amount,") \
				_T("         sum(hfe_discount) as inspaid,") \
				_T("         sum(f.hfe_cost-hfe_discount) as patpaid,") \
				_T("         1 as rtype") \
				_T("  from hms_patient") \
				_T("  left join hms_doc on(hd_patientno=hp_patientno)") \
				_T("  left join hms_object on(ho_id=hd_object)") \
				_T("  left join hms_testorder on(hd_docno=hpc_docno)") \
				_T("  left join hms_testorderline on(hpcl_orderid=hpc_orderid)") \
				_T("  left join hms_fee f on(hd_docno=hfe_docno and hfe_orderid=hpc_orderid and hfe_orderline=hpcl_orderlineid)") \
				_T("  where ho_type in('I','C') AND hd_suggestion NOT IN ('C', 'D')") \
				_T("        and hfe_status='O' and hd_admitdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and hpcl_status='T'") \
				_T("  group by hd_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hp_sex, hd_object, hd_cardno") \
				_T("  having sum(f.hfe_cost) > 0") \
				_T("  union all") \
				_T("  select hd_docno as docno, get_objectname(hd_object) obj_name, hd_cardno card_no,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hms_getage(hd_admitdate, hp_birthdate) as age,") \
				_T("         (select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,") \
				_T("         trunc(hd_admitdate) as admitdate,") \
				_T("         sum(f.hfe_cost) as amount,") \
				_T("         sum(hfe_discount) as inspaid,") \
				_T("         sum(f.hfe_cost-hfe_discount) as patpaid,") \
				_T("         2 as rtype") \
				_T("  from hms_patient") \
				_T("  left join hms_doc on(hd_patientno=hp_patientno)") \
				_T("  left join hms_object on(ho_id=hd_object)") \
				_T("  left join hms_pacsorder on(hd_docno=hpc_docno)") \
				_T("  left join hms_pacsorderline on(hpcl_orderid=hpc_orderid)") \
				_T("  left join hms_fee f on(hd_docno=hfe_docno and hfe_orderid=hpc_orderid and hfe_orderline=hpcl_orderlineid)") \
				_T("  where ho_type in('I','C') AND hd_suggestion NOT IN ('C', 'D')") \
				_T("        and hfe_status='O' and hd_admitdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and hpcl_status='T'") \
				_T("  group by hd_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hp_sex, hd_object, hd_cardno") \
				_T("  having sum(f.hfe_cost) > 0") \
				_T("  union all") \
				_T("  select hd_docno as docno, get_objectname(hd_object) obj_name, hd_cardno card_no,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hms_getage(hd_admitdate, hp_birthdate) as age,") \
				_T("         (select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,") \
				_T("         trunc(hd_admitdate) as admitdate,") \
				_T("         sum(f.hfe_cost) as amount,") \
				_T("         sum(hfe_discount) as inspaid,") \
				_T("         sum(f.hfe_cost-hfe_discount) as patpaid,") \
				_T("         3 as rtype") \
				_T("  from hms_patient") \
				_T("  left join hms_doc on(hd_patientno=hp_patientno)") \
				_T("  left join hms_object on(ho_id=hd_object)") \
				_T("  left join hms_fee f on(hfe_docno=hd_docno)") \
				_T("  where ho_type in('I','C')") \
				_T("        and hfe_status='O' and hfe_type='E' AND hd_suggestion NOT IN ('C', 'D')") \
				_T("        and hd_admitdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("  group by hd_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hp_sex, hd_object, hd_cardno") \
				_T("  having sum(f.hfe_cost) > 0") \
				_T(" ) Tbl") \
				_T(" order by docno, rtype"),
				m_szFromDate, m_szToDate,
				m_szFromDate, m_szToDate,
				m_szFromDate, m_szToDate);*/

	//Gọi hàm tính lại phí khám bệnh

	int ret = ShowMessageBox(_T(" Bạn có muốn tính lại chi phí của bệnh nhân sau đó mới xuất ra Excel, Nếu chọn YES, sẽ mất thời gian để tạo lập lại phí theo khoảng thời gian đã chọn? OK? "),MB_YESNO);
		if(ret == IDYES)
		{	
			szSQL.Format(_T(" SELECT hd_docno as docno") \
						_T(" FROM hms_doc ") \
						_T(" WHERE 1=1 AND NVL(hd_suggestion,'X') NOT IN ('C', 'D')") \
						_T(" AND NVL(HDF_ACCEPTEDFEE, 'N') NOT IN ('P') AND HD_OBJECT NOT IN (1,3,7,8)")
						_T(" AND hd_admitdate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s','YYYY/MM/DD HH24:MI:SS')  "), m_szFromDate, m_szToDate);
			rs.ExecSQL(szSQL);
			//_msg(_T("%s"),szSQL);
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("docno"), nDocumentNo);		
				szSQL.Format(_T("HMS_FEE_CREATE(%ld,'EIOTPDRMXF', '%s', 'Y') "), nDocumentNo, _T("EM"));	
				pMF->ExecDML(szSQL);
				//_msg(_T("%s"),szSQL);
				rs.MoveNext();
			}

			if(m_nInsurance == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') "));
			}
			else if(m_nService == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
			}
			else 
				szWhere.AppendFormat(_T(" AND ho_type in ('D', 'P') "));

			if (m_bThatthu)
				szWhere1.AppendFormat(_T(" AND tmp=0 AND feetype in ('P', 'T') "));

		szSQL.Format(_T(" select temp.*,") \
					_T("  CASE WHEN deposit < patpaid THEN patpaid - deposit") \
					_T("     ELSE 0") \
					_T("   END AS thu,") \
					_T("   CASE") \
					_T("     WHEN deposit > patpaid") \
					_T("     THEN deposit - patpaid") \
					_T("     ELSE 0") \
					_T("   END AS chi") \
					_T(" FROM") \
					_T(" (") \
					_T(" SELECT docno,") \
					_T("   obj_name,") \
					_T("   card_no,") \
					_T("   pname,") \
					_T("   age,") \
					_T("   sex,") \
					_T("   admitdate,") \
					_T("   deptid,") \
					_T("   (SELECT NVL(SUM(hfe_amount),0)") \
					_T("     FROM hms_fee_deposit de") \
					_T("     WHERE de.hfe_docno =docno") \
					_T("     AND de.hfe_status  ='P'") \
					_T("     AND de.hfe_amount <> de.hfe_patpaid") \
					_T("     AND de.hfe_patpaid =0") \
					_T("     ) AS deposit,") \
					_T("   SUM(amount)  AS amount,") \
					_T("   SUM(inspaid) AS inspaid,") \
					_T("   SUM(patpaid) AS patpaid,") \
					_T("   workplace,") \
					_T("   address") \
					_T(" FROM") \
					_T("   (SELECT hd_docno AS docno,") \
					_T("     get_objectname(HD_OBJECT) obj_name,") \
					_T("     hd_cardno card_no,") \
					_T("     trim(hp_surname") \
					_T("     ||' '") \
					_T("     ||hp_midname") \
					_T("     ||' '") \
					_T("     ||hp_firstname)                        AS pname,") \
					_T("     hms_getage(hd_admitdate, hp_birthdate) AS age,") \
					_T("     (SELECT DISTINCT ss_desc") \
					_T("     FROM sys_sel") \
					_T("     WHERE ss_id='sys_sex'") \
					_T("     AND ss_code=hp_sex") \
					_T("     )                   AS sex,") \
					_T("     TRUNC(hd_admitdate) AS admitdate,") \
					_T("     hd_admitdept        AS deptid,    ") \
					_T("     SUM(f.hfe_cost)                                 AS amount,") \
					_T("     SUM(hfe_discount)                               AS inspaid,") \
					_T("     SUM(f.hfe_cost-hfe_discount)                    AS patpaid,   ") \
					_T("     hp_workplace                                    AS workplace,") \
					_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address    ") \
					_T("   FROM hms_patient") \
					_T("   LEFT JOIN hms_doc") \
					_T("   ON(hd_patientno=hp_patientno)") \
					_T("   LEFT JOIN hms_fee f") \
					_T("   ON(hd_docno =hfe_docno)") \
					_T("   LEFT JOIN hms_object") \
					_T("   ON(ho_id                        =HD_OBJECT)") \
					_T("   WHERE 1                         =1 %s") \
					_T("   AND NVL(hd_suggestion,'X') NOT IN ('C', 'D')") \
					_T("   AND NVL(f.HFE_CATEGORY,'X')    <> 'Y'") \
					_T("   AND hfe_status                  ='O'") \
					_T("   AND hfe_deptid                 IN ('C1.1', 'C1.2', 'C1.3','AB', 'CTXH')") \
					_T("   AND hd_admitdate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s','YYYY/MM/DD HH24:MI:SS')") \
					_T(" GROUP BY hd_docno,") \
					_T("     hp_surname,") \
					_T("     hp_midname,") \
					_T("     hp_firstname,") \
					_T("     hd_admitdate,") \
					_T("     hd_admitdept,") \
					_T("     HFE_OBJECT,") \
					_T("     hp_birthdate,") \
					_T("     hp_sex,") \
					_T("     hd_object,") \
					_T("     hd_cardno,") \
					_T("     hp_workplace,") \
					_T("     hp_provid,") \
					_T("     hp_distid,") \
					_T("     hp_villid,") \
					_T("     hfe_docno,") \
					_T("     f.hfe_type") \
					_T("   HAVING SUM(f.hfe_cost) > 0") \
					_T("   ) Tbl ") \
					_T(" WHERE 1=1 %s") \
					_T(" GROUP BY docno,") \
					_T("   obj_name,") \
					_T("   card_no,") \
					_T("   pname,") \
					_T("   age,") \
					_T("   sex,") \
					_T("   admitdate,") \
					_T("   deptid,") \
					_T("   workplace,") \
					_T("   address") \
					_T("   )temp") \
					_T(" ORDER BY docno"),szWhere, m_szFromDate, m_szToDate, szWhere1);

	rs.ExecSQL(szSQL);

		}
		else
		{

			if(m_nInsurance == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') "));
			}
			else if(m_nService == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
			}
			else 
				szWhere.AppendFormat(_T(" AND ho_type in ('D', 'P') "));

			if (m_bThatthu)
				szWhere1.AppendFormat(_T(" AND tmp=0 AND feetype in ('P', 'T') "));

	szSQL.Format(_T(" select temp.*,") \
					_T("  CASE WHEN deposit < patpaid THEN patpaid - deposit") \
					_T("     ELSE 0") \
					_T("   END AS thu,") \
					_T("   CASE") \
					_T("     WHEN deposit > patpaid") \
					_T("     THEN deposit - patpaid") \
					_T("     ELSE 0") \
					_T("   END AS chi") \
					_T(" FROM") \
					_T(" (") \
					_T(" SELECT docno,") \
					_T("   obj_name,") \
					_T("   card_no,") \
					_T("   pname,") \
					_T("   age,") \
					_T("   sex,") \
					_T("   admitdate,") \
					_T("   deptid,") \
					_T("   (SELECT NVL(SUM(hfe_amount),0)") \
					_T("     FROM hms_fee_deposit de") \
					_T("     WHERE de.hfe_docno =docno") \
					_T("     AND de.hfe_status  ='P'") \
					_T("     AND de.hfe_amount <> de.hfe_patpaid") \
					_T("     AND de.hfe_patpaid =0") \
					_T("     ) AS deposit,") \
					_T("   SUM(amount)  AS amount,") \
					_T("   SUM(inspaid) AS inspaid,") \
					_T("   SUM(patpaid) AS patpaid,") \
					_T("   workplace,") \
					_T("   address") \
					_T(" FROM") \
					_T("   (SELECT hd_docno AS docno,") \
					_T("     get_objectname(HD_OBJECT) obj_name,") \
					_T("     hd_cardno card_no,") \
					_T("     trim(hp_surname") \
					_T("     ||' '") \
					_T("     ||hp_midname") \
					_T("     ||' '") \
					_T("     ||hp_firstname)                        AS pname,") \
					_T("     hms_getage(hd_admitdate, hp_birthdate) AS age,") \
					_T("     (SELECT DISTINCT ss_desc") \
					_T("     FROM sys_sel") \
					_T("     WHERE ss_id='sys_sex'") \
					_T("     AND ss_code=hp_sex") \
					_T("     )                   AS sex,") \
					_T("     TRUNC(hd_admitdate) AS admitdate,") \
					_T("     hd_admitdept        AS deptid,    ") \
					_T("     SUM(f.hfe_cost)                                 AS amount,") \
					_T("     SUM(hfe_discount)                               AS inspaid,") \
					_T("     SUM(f.hfe_cost-hfe_discount)                    AS patpaid,   ") \
					_T("     hp_workplace                                    AS workplace,") \
					_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address    ") \
					_T("   FROM hms_patient") \
					_T("   LEFT JOIN hms_doc") \
					_T("   ON(hd_patientno=hp_patientno)") \
					_T("   LEFT JOIN hms_fee f") \
					_T("   ON(hd_docno =hfe_docno)") \
					_T("   LEFT JOIN hms_object") \
					_T("   ON(ho_id                        =HD_OBJECT)") \
					_T("   WHERE 1                         =1 %s") \
					_T("   AND NVL(hd_suggestion,'X') NOT IN ('C', 'D')") \
					_T("   AND NVL(f.HFE_CATEGORY,'X')    <> 'Y'") \
					_T("   AND hfe_status                  ='O'") \
					_T("   AND hfe_deptid                 IN ('C1.1', 'C1.2', 'C1.3','AB', 'CTXH')") \
					_T("   AND hd_admitdate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s','YYYY/MM/DD HH24:MI:SS')") \
					_T(" GROUP BY hd_docno,") \
					_T("     hp_surname,") \
					_T("     hp_midname,") \
					_T("     hp_firstname,") \
					_T("     hd_admitdate,") \
					_T("     hd_admitdept,") \
					_T("     HFE_OBJECT,") \
					_T("     hp_birthdate,") \
					_T("     hp_sex,") \
					_T("     hd_object,") \
					_T("     hd_cardno,") \
					_T("     hp_workplace,") \
					_T("     hp_provid,") \
					_T("     hp_distid,") \
					_T("     hp_villid,") \
					_T("     hfe_docno,") \
					_T("     f.hfe_type") \
					_T("   HAVING SUM(f.hfe_cost) > 0") \
					_T("   ) Tbl ") \
					_T(" WHERE 1=1 %s") \
					_T(" GROUP BY docno,") \
					_T("   obj_name,") \
					_T("   card_no,") \
					_T("   pname,") \
					_T("   age,") \
					_T("   sex,") \
					_T("   admitdate,") \
					_T("   deptid,") \
					_T("   workplace,") \
					_T("   address") \
					_T("   )temp") \
					_T(" ORDER BY docno"),szWhere, m_szFromDate, m_szToDate, szWhere1);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
		}
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 11);
	xls.SetColumnWidth(2, 18);
	xls.SetColumnWidth(3, 5);

	xls.SetColumnWidth(4, 5);

	xls.SetColumnWidth(5, 10);

	xls.SetColumnWidth(6, 5);

	xls.SetColumnWidth(7, 23);

	xls.SetColumnWidth(8, 15);

	xls.SetColumnWidth(9, 15);

	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(11, 15);

	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 16);

	xls.SetColumnWidth(14, 15);
	xls.SetColumnWidth(15, 16);
	xls.SetColumnWidth(16, 20);
	xls.SetColumnWidth(17, 20);

	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(6, 40);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellMergedColumns(6, 1, 4);
	xls.SetCellMergedColumns(6, 2, 4);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(6, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(6, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 10);
	xls.SetCellMergedColumns(nCol, nRow + 4, 10);

	xls.SetCellText(nCol, nRow + 3, _T("DANH SÁCH BỆNH NHÂN CHƯA THU PHÍ PHÒNG KHÁM"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Admit Date"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(nCol + 6, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Lý do"), tmpStr);
	xls.SetCellText(nCol + 7, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Tạm gửi"), tmpStr);
	xls.SetCellText(nCol + 8, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(nCol + 9, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Insurance Paid"), tmpStr);
	xls.SetCellText(nCol + 10, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Pat Paid"), tmpStr);
	xls.SetCellText(nCol + 11, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 12, nRow + 5, _T("ST thu"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 13, nRow + 5, _T("ST chi"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 14, nRow + 5, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 15, nRow + 5, _T("S\x1ED1 th\x1EBB \x42HYT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Nơi làm việc"), tmpStr);
	xls.SetCellText(nCol + 16, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Địa chỉ"), tmpStr);
	xls.SetCellText(nCol + 17, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	int nIndex = 1;
	int ntmp;
	nRow = 7;
	long nDocNo = 0;
	double nCost;
	long double nTotal[16];

	for (int i = 0; i < 16; i++)
	{
		nTotal[i] = 0;
	}
	while (!rs.IsEOF())
	{
		//if (ToLong(rs.GetValue(_T("docno"))) != nDocNo)
		//{
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

			rs.GetValue(_T("docno"), tmpStr);
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

			rs.GetValue(_T("pname"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

			rs.GetValue(_T("sex"), tmpStr);
			xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

			rs.GetValue(_T("admitdate"), tmpStr);
			xls.SetCellText(nCol + 5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_DATE | FMT_WRAPING);

			rs.GetValue(_T("deptid"), tmpStr);
			xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);			

			rs.GetValue(_T("docno"), nDocNo);


		//}
		//rs.GetValue(_T("rtype"), tmpStr);
		//if (tmpStr == _T("1"))
			rs.GetValue(_T("tmp"), ntmp);
			if (ntmp > 0)
			{
			szTemp = _T("Có mục cận lâm sàng chưa thực hiện");
			}
			else
			szTemp = _T("Các mục cận lâm sàng đã được thực hiện");
		//else if (tmpStr == _T("2"))
		//	szTemp = _T("Th\x1EA5t thu ti\x1EC1n ph\xED \x63h\x1EA9n \x111o\xE1n h\xECnh \x1EA3nh");
		//else if (tmpStr == _T("3"))
		//	szTemp = _T("Th\x1EA5t thu ti\x1EC1n ph\xED kh\xE1m");

		xls.SetCellText(nCol + 7, nRow, szTemp, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("deposit"), nCost);
		nTotal[8] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("amount"), nCost);
		nTotal[9] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("inspaid"), nCost);
		nTotal[10] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("patpaid"), nCost);
		nTotal[11] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);
		
		rs.GetValue(_T("thu"), nCost);
		nTotal[12] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("chi"), nCost);
		nTotal[13] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		xls.SetCellText(nCol + 14, nRow, rs.GetValue(_T("obj_name")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(nCol + 15, nRow, rs.GetValue(_T("card_no")), FMT_TEXT | FMT_WRAPING);

		xls.SetCellText(nCol + 16, nRow, rs.GetValue(_T("workplace")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(nCol + 17, nRow, rs.GetValue(_T("address")), FMT_TEXT | FMT_WRAPING);

		nRow++;
		rs.MoveNext();
	}

	if (nTotal[9] > 0)
	{
		TranslateString(_T("Total Sum"), tmpStr);
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		for (int i = 8; i < 16; i++)
		{
			tmpStr.Format(_T("%.2Lf"), nTotal[i]);
			xls.SetCellText(nCol + i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		}
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BaoCaoThatThuPhongKham.xls"));
} 
int CFMInsuranceFeeLossReport::OnAddFMInsuranceFeeLossReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMInsuranceFeeLossReport::OnEditFMInsuranceFeeLossReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceFeeLossReport::OnDeleteFMInsuranceFeeLossReport(){
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
 		OnCancelFMInsuranceFeeLossReport(); 
 	}
	return 0;
}
int CFMInsuranceFeeLossReport::OnSaveFMInsuranceFeeLossReport(){
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
 		//OnFMInsuranceFeeLossReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMInsuranceFeeLossReport::OnCancelFMInsuranceFeeLossReport(){
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
int CFMInsuranceFeeLossReport::OnFMInsuranceFeeLossReportListLoadData(){
	return 0;
}
void CFMInsuranceFeeLossReport::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1;
	long nDocumentNo;

	UpdateData(TRUE);
	//ShowMessageBox(_T("Hệ thống sẽ tạo lập lại phí giống như ở tài chính toàn bộ số hồ sơ ở phòng khám có ngày khám được chọn, sau đó xuất ra file Excel!"));

	BeginWaitCursor();	

	//Gọi hàm tính lại phí khám bệnh

	int ret = ShowMessageBox(_T(" Bạn có muốn tính lại chi phí của bệnh nhân sau đó mới xuất ra Excel, Nếu chọn YES, sẽ mất thời gian để tạo lập lại phí theo khoảng thời gian đã chọn? OK? "),MB_YESNO);
		if(ret == IDYES)
		{	
			szSQL.Format(_T(" SELECT hd_docno as docno") \
						_T(" FROM hms_doc ") \
						_T(" WHERE 1=1 AND NVL(hd_suggestion,'X') NOT IN ('C', 'D')") \
						_T(" AND NVL(HDF_ACCEPTEDFEE, 'N') NOT IN ('P') AND HD_OBJECT NOT IN (1,3,7,8)")
						_T(" AND hd_admitdate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s','YYYY/MM/DD HH24:MI:SS')  "), m_szFromDate, m_szToDate);
			rs.ExecSQL(szSQL);
			//_msg(_T("%s"),szSQL);
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("docno"), nDocumentNo);		
				szSQL.Format(_T("HMS_FEE_CREATE(%ld,'EIOTPDRMXF', '%s', 'Y') "), nDocumentNo, _T("EM"));	
				pMF->ExecDML(szSQL);
				//_msg(_T("%s"),szSQL);
				rs.MoveNext();
			}

			if(m_nInsurance == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') "));
			}
			else if(m_nService == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
			}
			else 
				szWhere.AppendFormat(_T(" AND ho_type in ('D', 'P') "));

			if (m_bThatthu)
				szWhere1.AppendFormat(_T(" AND tmp=0 AND feetype in ('P', 'T') "));

				szSQL.Format(_T(" SELECT temp.*, ") \
				_T(" CASE") \
				_T("     WHEN (deposit) < (patpaid)") \
				_T("     THEN (patpaid) - (deposit)") \
				_T("     ELSE 0") \
				_T("   END AS thu,") \
				_T("   CASE") \
				_T("     WHEN (deposit) > (patpaid)") \
				_T("     THEN (deposit) - (patpaid)") \
				_T("     ELSE 0") \
				_T("   END AS chi") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT docno,") \
				_T("   obj_name,") \
				_T("   card_no,") \
				_T("   pname,") \
				_T("   age,") \
				_T("   sex,") \
				_T("   admitdate,") \
				_T("   deptid,") \
				_T("   SUM(phikham) as phikham,") \
				_T("   SUM(phicls_pttt) as phicls_pttt,") \
				_T("   SUM(phithuoc) as phithuoc,") \
				_T("   SUM(phivattu) as phivattu,") \
				_T("   SUM(phikhac) as phikhac,") \
				_T("   SUM(phikham_bhtra) as phikham_bhtra,") \
				_T("   SUM(phicls_pttt_bhtra) as phicls_pttt_bhtra,") \
				_T("   SUM(phithuoc_bhtra) as phithuoc_bhtra,") \
				_T("   SUM(phivattu_bhtra) as phivattu_bhtra,") \
				_T("   SUM(phikhac_bhtra) as phikhac_bhtra,") \
				_T("   SUM(phikham_bntra) as phikham_bntra,") \
				_T("   SUM(phicls_pttt_bntra) as phicls_pttt_bntra,") \
				_T("   SUM(phithuoc_bntra) as phithuoc_bntra,") \
				_T("   SUM(phivattu_bntra) as phivattu_bntra,") \
				_T("   SUM(phikhac_bntra) as phikhac_bntra,") \
				_T("    (SELECT NVL(SUM(hfe_amount),0)") \
				_T("     FROM hms_fee_deposit de") \
				_T("     WHERE de.hfe_docno =docno") \
				_T("     AND de.hfe_status  ='P'") \
				_T("     AND de.hfe_amount <> de.hfe_patpaid") \
				_T("     AND de.hfe_patpaid =0") \
				_T("     ) AS deposit,") \
				_T("   SUM(phikham+phicls_pttt+phithuoc+phivattu+phikhac)  AS amount,") \
				_T("   SUM(phikham_bhtra+phicls_pttt_bhtra+phithuoc_bhtra+phivattu_bhtra+phikhac_bhtra) AS inspaid,") \
				_T("   SUM(phikham_bntra+phicls_pttt_bntra+phithuoc_bntra+phivattu_bntra+phikhac_bntra) AS patpaid,") \
				_T("   workplace,") \
				_T("   address  ") \
				_T(" FROM") \
				_T("   (SELECT hd_docno AS docno,") \
				_T("     get_objectname(HD_OBJECT) obj_name,") \
				_T("     hd_cardno card_no,") \
				_T("     trim(hp_surname") \
				_T("     ||' '") \
				_T("     ||hp_midname") \
				_T("     ||' '") \
				_T("     ||hp_firstname)                        AS pname,") \
				_T("     hms_getage(hd_admitdate, hp_birthdate) AS age,") \
				_T("     (SELECT DISTINCT ss_desc") \
				_T("     FROM sys_sel") \
				_T("     WHERE ss_id='sys_sex'") \
				_T("     AND ss_code=hp_sex") \
				_T("     )                   AS sex,") \
				_T("     TRUNC(hd_admitdate) AS admitdate,") \
				_T("     hd_admitdept        AS deptid,     ") \
				_T("     hp_workplace                                    AS workplace,") \
				_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,   ") \

				_T("       f.hfe_type,") \
				_T("       f.hfe_itemid,") \
				_T("       f.hfe_desc,") \
				_T("       f.hfe_orderid,") \

				_T("     CASE WHEN f.hfe_type ='E' THEN (f.hfe_cost) ELSE 0 END as phikham,") \
				_T("     CASE WHEN f.hfe_type in ('P', 'T', 'O') THEN (f.hfe_cost) ELSE 0 END as phicls_pttt,") \
				_T("     CASE WHEN product_org_id ='PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_cost) ELSE 0 END as phithuoc,") \
				_T("     CASE WHEN product_org_id <>'PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_cost) ELSE 0 END as phivattu,") \
				_T("     CASE WHEN f.hfe_type not in ('E', 'P', 'T', 'O', 'D', 'M', 'R') THEN (f.hfe_cost) ELSE 0 END as phikhac,") \
				_T("     CASE WHEN f.hfe_type ='E' THEN (f.hfe_discount) ELSE 0 END as phikham_bhtra,") \
				_T("     CASE WHEN f.hfe_type in ('P', 'T', 'O') THEN (f.hfe_discount) ELSE 0 END as phicls_pttt_bhtra,") \
				_T("     CASE WHEN product_org_id ='PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_discount) ELSE 0 END as phithuoc_bhtra,") \
				_T("     CASE WHEN product_org_id <>'PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_discount) ELSE 0 END as phivattu_bhtra,") \
				_T("     CASE WHEN f.hfe_type not in ('E', 'P', 'T', 'O', 'D', 'M', 'R') THEN (f.hfe_discount) ELSE 0 END as phikhac_bhtra,") \
				_T("     CASE WHEN f.hfe_type ='E' THEN SUM(f.hfe_cost-f.hfe_discount) ELSE 0 END as phikham_bntra,") \
				_T("     CASE WHEN f.hfe_type in ('P', 'T', 'O') THEN (f.hfe_cost-f.hfe_discount) ELSE 0 END as phicls_pttt_bntra,") \
				_T("     CASE WHEN product_org_id ='PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_cost-f.hfe_discount) ELSE 0 END as phithuoc_bntra,") \
				_T("     CASE WHEN product_org_id <>'PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_cost-f.hfe_discount) ELSE 0 END as phivattu_bntra,") \
				_T("     CASE WHEN f.hfe_type not in ('E', 'P', 'T', 'O', 'D', 'M', 'R') THEN (f.hfe_cost-f.hfe_discount) ELSE 0 END as phikhac_bntra   ") \
				_T(" FROM hms_patient") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON(hd_patientno=hp_patientno)") \
				_T("   LEFT JOIN hms_fee f") \
				_T("   ON(hd_docno =hfe_docno)") \
				_T("   LEFT JOIN HMS_PHARMAORDER_VIEW_VP ON (f.hfe_docno = hpo_docno AND f.hfe_orderid=hpo_orderid)") \
				_T("   LEFT JOIN M_PRODUCTITEM_VIEW_VP1 ON (f.hfe_itemid) = CAST (product_item_id as NVARCHAR2(15))  ") \
				_T("   LEFT JOIN HMSV_PARACLINIC_VP_1 ON (f.hfe_docno=hpcl_docno AND f.HFE_ORDERLINE=HPCL_ORDERLINEID)  ") \
				_T("   LEFT JOIN hms_object") \
				_T("   ON(ho_id                        =HD_OBJECT)") \
				_T("   WHERE 1                         =1 %s") \
				_T("   AND NVL(hd_suggestion,'X') NOT IN ('C', 'D')") \
				_T("   AND NVL(f.HFE_CATEGORY,'X')    <> 'Y'") \
				_T("   AND hfe_status                  ='O'  ") \
				_T("   AND hfe_deptid                 IN ('C1.1', 'C1.2', 'C1.3','AB', 'CTXH')") \
				_T("   AND hd_admitdate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s','YYYY/MM/DD HH24:MI:SS')") \
				_T("   GROUP BY hd_docno,") \
				_T("     hp_surname,") \
				_T("     hp_midname,") \
				_T("     hp_firstname,") \
				_T("     hd_admitdate,") \
				_T("     hd_admitdept,") \
				_T("     HFE_OBJECT,") \
				_T("     hp_birthdate,") \
				_T("     hp_sex,") \
				_T("     hd_object,") \
				_T("     hd_cardno,") \
				_T("     hp_workplace,") \
				_T("     hp_provid,") \
				_T("     hp_distid,") \
				_T("     hp_villid,") \
				_T("     hfe_docno,  ") \
				_T("     hpcl_status,") \
				_T("     product_org_id,") \
				_T("     hpo_orderstatus,") \
				_T("     hfe_category,") \
				_T("     f.hfe_type,   ") \
				_T("     f.hfe_cost,") \
				_T("     f.hfe_discount, ") \

				_T("       f.hfe_type,") \
				_T("       f.hfe_itemid,") \
				_T("       f.hfe_desc,") \
				_T("       f.hfe_orderid") \


				_T("   ) Tbl") \
				_T(" WHERE 1=1 %s") \
				_T(" GROUP BY docno,") \
				_T("   obj_name,") \
				_T("   card_no,") \
				_T("   pname,") \
				_T("   age,") \
				_T("   sex,") \
				_T("   admitdate,") \
				_T("   deptid,") \
				_T("   workplace,") \
				_T("   address ") \
				_T("   )temp") \
				_T("   ORDER BY docno"), szWhere, m_szFromDate, m_szToDate, szWhere1);

	rs.ExecSQL(szSQL);

		}
		else
		{

			if(m_nInsurance == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') "));
			}
			else if(m_nService == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
			}
			else 
				szWhere.AppendFormat(_T(" AND ho_type in ('D', 'P') "));

			if (m_bThatthu)
				szWhere1.AppendFormat(_T(" AND tmp=0 AND feetype in ('P', 'T') "));

		szSQL.Format(_T(" SELECT temp.*, ") \
				_T(" CASE") \
				_T("     WHEN (deposit) < (patpaid)") \
				_T("     THEN (patpaid) - (deposit)") \
				_T("     ELSE 0") \
				_T("   END AS thu,") \
				_T("   CASE") \
				_T("     WHEN (deposit) > (patpaid)") \
				_T("     THEN (deposit) - (patpaid)") \
				_T("     ELSE 0") \
				_T("   END AS chi") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT docno,") \
				_T("   obj_name,") \
				_T("   card_no,") \
				_T("   pname,") \
				_T("   age,") \
				_T("   sex,") \
				_T("   admitdate,") \
				_T("   deptid,") \
				_T("   SUM(phikham) as phikham,") \
				_T("   SUM(phicls_pttt) as phicls_pttt,") \
				_T("   SUM(phithuoc) as phithuoc,") \
				_T("   SUM(phivattu) as phivattu,") \
				_T("   SUM(phikhac) as phikhac,") \
				_T("   SUM(phikham_bhtra) as phikham_bhtra,") \
				_T("   SUM(phicls_pttt_bhtra) as phicls_pttt_bhtra,") \
				_T("   SUM(phithuoc_bhtra) as phithuoc_bhtra,") \
				_T("   SUM(phivattu_bhtra) as phivattu_bhtra,") \
				_T("   SUM(phikhac_bhtra) as phikhac_bhtra,") \
				_T("   SUM(phikham_bntra) as phikham_bntra,") \
				_T("   SUM(phicls_pttt_bntra) as phicls_pttt_bntra,") \
				_T("   SUM(phithuoc_bntra) as phithuoc_bntra,") \
				_T("   SUM(phivattu_bntra) as phivattu_bntra,") \
				_T("   SUM(phikhac_bntra) as phikhac_bntra,") \
				_T("    (SELECT NVL(SUM(hfe_amount),0)") \
				_T("     FROM hms_fee_deposit de") \
				_T("     WHERE de.hfe_docno =docno") \
				_T("     AND de.hfe_status  ='P'") \
				_T("     AND de.hfe_amount <> de.hfe_patpaid") \
				_T("     AND de.hfe_patpaid =0") \
				_T("     ) AS deposit,") \
				_T("   SUM(phikham+phicls_pttt+phithuoc+phivattu+phikhac)  AS amount,") \
				_T("   SUM(phikham_bhtra+phicls_pttt_bhtra+phithuoc_bhtra+phivattu_bhtra+phikhac_bhtra) AS inspaid,") \
				_T("   SUM(phikham_bntra+phicls_pttt_bntra+phithuoc_bntra+phivattu_bntra+phikhac_bntra) AS patpaid,") \
				_T("   workplace,") \
				_T("   address  ") \
				_T(" FROM") \
				_T("   (SELECT hd_docno AS docno,") \
				_T("     get_objectname(HD_OBJECT) obj_name,") \
				_T("     hd_cardno card_no,") \
				_T("     trim(hp_surname") \
				_T("     ||' '") \
				_T("     ||hp_midname") \
				_T("     ||' '") \
				_T("     ||hp_firstname)                        AS pname,") \
				_T("     hms_getage(hd_admitdate, hp_birthdate) AS age,") \
				_T("     (SELECT DISTINCT ss_desc") \
				_T("     FROM sys_sel") \
				_T("     WHERE ss_id='sys_sex'") \
				_T("     AND ss_code=hp_sex") \
				_T("     )                   AS sex,") \
				_T("     TRUNC(hd_admitdate) AS admitdate,") \
				_T("     hd_admitdept        AS deptid,     ") \
				_T("     hp_workplace                                    AS workplace,") \
				_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,   ") \
					
				_T("       f.hfe_type,") \
				_T("       f.hfe_itemid,") \
				_T("       f.hfe_desc,") \
				_T("       f.hfe_orderid,") \



				_T("     CASE WHEN f.hfe_type ='E' THEN (f.hfe_cost) ELSE 0 END as phikham,") \
				_T("     CASE WHEN f.hfe_type in ('P', 'T', 'O') THEN (f.hfe_cost) ELSE 0 END as phicls_pttt,") \
				_T("     CASE WHEN product_org_id ='PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_cost) ELSE 0 END as phithuoc,") \
				_T("     CASE WHEN product_org_id <>'PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_cost) ELSE 0 END as phivattu,") \
				_T("     CASE WHEN f.hfe_type not in ('E', 'P', 'T', 'O', 'D', 'M', 'R') THEN (f.hfe_cost) ELSE 0 END as phikhac,") \
				_T("     CASE WHEN f.hfe_type ='E' THEN (f.hfe_discount) ELSE 0 END as phikham_bhtra,") \
				_T("     CASE WHEN f.hfe_type in ('P', 'T', 'O') THEN (f.hfe_discount) ELSE 0 END as phicls_pttt_bhtra,") \
				_T("     CASE WHEN product_org_id ='PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_discount) ELSE 0 END as phithuoc_bhtra,") \
				_T("     CASE WHEN product_org_id <>'PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_discount) ELSE 0 END as phivattu_bhtra,") \
				_T("     CASE WHEN f.hfe_type not in ('E', 'P', 'T', 'O', 'D', 'M', 'R') THEN (f.hfe_discount) ELSE 0 END as phikhac_bhtra,") \
				_T("     CASE WHEN f.hfe_type ='E' THEN SUM(f.hfe_cost-f.hfe_discount) ELSE 0 END as phikham_bntra,") \
				_T("     CASE WHEN f.hfe_type in ('P', 'T', 'O') THEN (f.hfe_cost-f.hfe_discount) ELSE 0 END as phicls_pttt_bntra,") \
				_T("     CASE WHEN product_org_id ='PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_cost-f.hfe_discount) ELSE 0 END as phithuoc_bntra,") \
				_T("     CASE WHEN product_org_id <>'PM' AND f.hfe_type in ('D', 'M', 'R')  THEN (f.hfe_cost-f.hfe_discount) ELSE 0 END as phivattu_bntra,") \
				_T("     CASE WHEN f.hfe_type not in ('E', 'P', 'T', 'O', 'D', 'M', 'R') THEN (f.hfe_cost-f.hfe_discount) ELSE 0 END as phikhac_bntra   ") \
				_T(" FROM hms_patient") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON(hd_patientno=hp_patientno)") \
				_T("   LEFT JOIN hms_fee f") \
				_T("   ON(hd_docno =hfe_docno)") \
				_T("   LEFT JOIN HMS_PHARMAORDER_VIEW_VP ON (f.hfe_docno = hpo_docno AND f.hfe_orderid=hpo_orderid)") \
				_T("   LEFT JOIN M_PRODUCTITEM_VIEW_VP1 ON (f.hfe_itemid) = CAST (product_item_id as NVARCHAR2(15))  ") \
				_T("   LEFT JOIN HMSV_PARACLINIC_VP_1 ON (f.hfe_docno=hpcl_docno AND f.HFE_ORDERLINE=HPCL_ORDERLINEID)  ") \
				_T("   LEFT JOIN hms_object") \
				_T("   ON(ho_id                        =HD_OBJECT)") \
				_T("   WHERE 1                         =1 %s") \
				_T("   AND NVL(hd_suggestion,'X') NOT IN ('C', 'D')") \
				_T("   AND NVL(f.HFE_CATEGORY,'X')    <> 'Y'") \
				_T("   AND hfe_status                  ='O'  ") \
				_T("   AND hfe_deptid                 IN ('C1.1', 'C1.2', 'C1.3','AB' , 'CTXH')") \
				_T("   AND hd_admitdate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s','YYYY/MM/DD HH24:MI:SS')") \
				_T("   GROUP BY hd_docno,") \
				_T("     hp_surname,") \
				_T("     hp_midname,") \
				_T("     hp_firstname,") \
				_T("     hd_admitdate,") \
				_T("     hd_admitdept,") \
				_T("     HFE_OBJECT,") \
				_T("     hp_birthdate,") \
				_T("     hp_sex,") \
				_T("     hd_object,") \
				_T("     hd_cardno,") \
				_T("     hp_workplace,") \
				_T("     hp_provid,") \
				_T("     hp_distid,") \
				_T("     hp_villid,") \
				_T("     hfe_docno,  ") \
				_T("     hpcl_status,") \
				_T("     product_org_id,") \
				_T("     hpo_orderstatus,") \
				_T("     hfe_category,") \
				_T("     f.hfe_type,   ") \
				_T("     f.hfe_cost,") \
				_T("     f.hfe_discount, ") \

				_T("       f.hfe_type,") \
				_T("       f.hfe_itemid,") \
				_T("       f.hfe_desc,") \
				_T("       f.hfe_orderid") \


				_T("   ) Tbl") \
				_T(" WHERE 1=1 %s") \
				_T(" GROUP BY docno,") \
				_T("   obj_name,") \
				_T("   card_no,") \
				_T("   pname,") \
				_T("   age,") \
				_T("   sex,") \
				_T("   admitdate,") \
				_T("   deptid,") \
				_T("   workplace,") \
				_T("   address ") \
				_T("   )temp") \
				_T("   ORDER BY docno"), szWhere, m_szFromDate, m_szToDate, szWhere1);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
		}
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 11);
	xls.SetColumnWidth(2, 18);
	xls.SetColumnWidth(3, 5);

	xls.SetColumnWidth(4, 5);

	xls.SetColumnWidth(5, 10);

	xls.SetColumnWidth(6, 5);

	xls.SetColumnWidth(7, 23);

	xls.SetColumnWidth(8, 15);

	xls.SetColumnWidth(9, 15);

	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(11, 15);

	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 16);
	
	xls.SetColumnWidth(14, 15);
	xls.SetColumnWidth(15, 15);
	xls.SetColumnWidth(16, 15);
	xls.SetColumnWidth(17, 15);
	xls.SetColumnWidth(18, 15);


	xls.SetColumnWidth(19, 15);
	xls.SetColumnWidth(20, 16);
	xls.SetColumnWidth(21, 20);
	xls.SetColumnWidth(22, 20);

	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(6, 40);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellMergedColumns(6, 1, 4);
	xls.SetCellMergedColumns(6, 2, 4);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(6, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(6, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 10);
	xls.SetCellMergedColumns(nCol, nRow + 4, 10);

	xls.SetCellText(nCol, nRow + 3, _T("DANH SÁCH BỆNH NHÂN CHƯA THU PHÍ PHÒNG KHÁM"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Admit Date"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(nCol + 6, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Lý do"), tmpStr);
	xls.SetCellText(nCol + 7, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Tạm gửi"), tmpStr);
	xls.SetCellText(nCol + 8, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(nCol + 9, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Insurance Paid"), tmpStr);
	xls.SetCellText(nCol + 10, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Pat Paid"), tmpStr);
	xls.SetCellText(nCol + 11, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 12, nRow + 5, _T("ST thu"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 13, nRow + 5, _T("ST chi"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 14, nRow + 5, _T("Tiền khám"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 15, nRow + 5, _T("Tiền CLS+PTTT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 16, nRow + 5, _T("Tiền thuốc"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 17, nRow + 5, _T("Tiền vật tư"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 18, nRow + 5, _T("Phí khác"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 19, nRow + 5, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 20, nRow + 5, _T("S\x1ED1 th\x1EBB \x42HYT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Nơi làm việc"), tmpStr);
	xls.SetCellText(nCol + 21, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Địa chỉ"), tmpStr);
	xls.SetCellText(nCol + 22, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	int nIndex = 1;
	int ntmp;
	nRow = 7;
	long nDocNo = 0;
	double nCost;
	long double nTotal[21];

	for (int i = 0; i < 21; i++)
	{
		nTotal[i] = 0;
	}
	while (!rs.IsEOF())
	{
		//if (ToLong(rs.GetValue(_T("docno"))) != nDocNo)
		//{
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

			rs.GetValue(_T("docno"), tmpStr);
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

			rs.GetValue(_T("pname"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

			rs.GetValue(_T("sex"), tmpStr);
			xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

			rs.GetValue(_T("admitdate"), tmpStr);
			xls.SetCellText(nCol + 5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_DATE | FMT_WRAPING);

			rs.GetValue(_T("deptid"), tmpStr);
			xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);			

			rs.GetValue(_T("docno"), nDocNo);


		
			szTemp = _T("Các mục phí chưa thu tại phòng khám");
			
		
		xls.SetCellText(nCol + 7, nRow, szTemp, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("deposit"), nCost);
		nTotal[8] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("amount"), nCost);
		nTotal[9] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("inspaid"), nCost);
		nTotal[10] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("patpaid"), nCost);
		nTotal[11] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);
		
		rs.GetValue(_T("thu"), nCost);
		nTotal[12] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("chi"), nCost);
		nTotal[13] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("phikham"), nCost);
		nTotal[14] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 14, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);		

		rs.GetValue(_T("phicls_pttt"), nCost);
		nTotal[15] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 15, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("phithuoc"), nCost);
		nTotal[16] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 16, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("phivattu"), nCost);
		nTotal[17] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 17, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("phikhac"), nCost);
		nTotal[18] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 18, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		xls.SetCellText(nCol + 19, nRow, rs.GetValue(_T("obj_name")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(nCol + 20, nRow, rs.GetValue(_T("card_no")), FMT_TEXT | FMT_WRAPING);

		xls.SetCellText(nCol + 21, nRow, rs.GetValue(_T("workplace")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(nCol + 22, nRow, rs.GetValue(_T("address")), FMT_TEXT | FMT_WRAPING);

		nRow++;
		rs.MoveNext();
	}

	if (nTotal[9] > 0)
	{
		TranslateString(_T("Total Sum"), tmpStr);
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		for (int i = 8; i < 21; i++)
		{
			tmpStr.Format(_T("%.2Lf"), nTotal[i]);
			xls.SetCellText(nCol + i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		}
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BaoCaoPhiPhongKhamchuathu.xls"));
} 