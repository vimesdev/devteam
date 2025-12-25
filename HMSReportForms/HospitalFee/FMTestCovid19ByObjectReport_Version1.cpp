#include "stdafx.h"
#include "FMTestCovid19ByObjectReport_Version1.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTestCovid19ByObjectReport_Ver1* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTestCovid19ByObjectReport_Ver1 *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMTestCovid19ByObjectReport_Ver1 *pVw = (CFMTestCovid19ByObjectReport_Ver1 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMTestCovid19ByObjectReport_Ver1 *pVw = (CFMTestCovid19ByObjectReport_Ver1 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnAddFMInsuranceFeeLossReport();
} 
static int _OnEditFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnEditFMInsuranceFeeLossReport();
} 
static int _OnDeleteFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnDeleteFMInsuranceFeeLossReport();
} 
static int _OnSaveFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnSaveFMInsuranceFeeLossReport();
} 
static int _OnCancelFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnCancelFMInsuranceFeeLossReport();
} 

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnPolicySelect();
}
static void _OnThatthuSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnThatthuSelect();
}

static void _OnAllObjectSelectFnc(CWnd *pWnd){
	  ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnAllObjectSelect();
}
static void _OnNgoaitruSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnNgoaitruSelect();
}
static void _OnNoitruSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport_Ver1*)pWnd)->OnNoitruSelect();
}

CFMTestCovid19ByObjectReport_Ver1::CFMTestCovid19ByObjectReport_Ver1(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();

}
CFMTestCovid19ByObjectReport_Ver1::~CFMTestCovid19ByObjectReport_Ver1()
{
}
void CFMTestCovid19ByObjectReport_Ver1::OnCreateComponents()
{
	m_wndYearLabel.Create(this, _T("Year"), 10, 31, 90, 56);
	m_wndYear.Create(this,95, 31, 215, 56); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 31, 300, 56);
	m_wndReportPeriod.Create(this,305, 31, 425, 56); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 61, 90, 86);
	m_wndFromDate.Create(this,95, 61, 215, 86); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 61, 300, 86);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
	m_wndToDate.Create(this,305, 61, 425, 86); 
	m_wndInsurance.Create(this, _T("Insurance"), 10, 96, 101, 121);
	m_wndService.Create(this, _T("Service"), 106, 96, 197, 121);
	m_wndPolicy.Create(this, _T("Quân_CS"), 203, 96, 294, 121);
	m_wndAllObject.Create(this, _T("Tất cả"), 302, 96, 425, 121);
	m_wndNgoaitru.Create(this, _T("Ngoại trú"), 10, 127, 101, 152);
	m_wndNoitru.Create(this, _T("Nội trú"), 106, 127, 197, 152);
	m_wndExport.Create(this, _T("&ExportXLS"), 323, 127, 425, 152);
	m_wndThatthu.Create(this, _T("Thất thu"), 10, 158, 197, 183);
	m_wndThatthu.EnableWindow(false);

}
void CFMTestCovid19ByObjectReport_Ver1::OnInitializeComponents()
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
void CFMTestCovid19ByObjectReport_Ver1::OnSetWindowEvents(){
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
	m_wndAllObject.SetEvent(WE_CLICK, _OnAllObjectSelectFnc);
	m_wndNgoaitru.SetEvent(WE_CLICK, _OnNgoaitruSelectFnc);
	m_wndNoitru.SetEvent(WE_CLICK, _OnNoitruSelectFnc);

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
void CFMTestCovid19ByObjectReport_Ver1::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndThatthu.GetDlgCtrlID(), m_bThatthu);
	DDX_Radio(pDX, m_wndAllObject.GetDlgCtrlID(), m_nAllObject);
	DDX_Check(pDX, m_wndNgoaitru.GetDlgCtrlID(), m_bNgoaitru);
	DDX_Check(pDX, m_wndNoitru.GetDlgCtrlID(), m_bNoitru);

}
void CFMTestCovid19ByObjectReport_Ver1::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMTestCovid19ByObjectReport_Ver1::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMTestCovid19ByObjectReport_Ver1::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInsurance=1;
	m_nService=1;
	m_nPolicy=1;
	m_nAllObject=0;
	m_bNgoaitru=FALSE;
	m_bNoitru=true;
	m_bThatthu=false;
}
int CFMTestCovid19ByObjectReport_Ver1::SetMode(int nMode){
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
/*void CFMTestCovid19ByObjectReport_Ver1::OnYearChange(){
	
} */
/*void CFMTestCovid19ByObjectReport_Ver1::OnYearSetfocus(){
	
} */
/*void CFMTestCovid19ByObjectReport_Ver1::OnYearKillfocus(){
	
} */

void CFMTestCovid19ByObjectReport_Ver1::OnThatthuSelect(){
	
	
}

void CFMTestCovid19ByObjectReport_Ver1::OnInsuranceSelect()
{
		
}
void CFMTestCovid19ByObjectReport_Ver1::OnServiceSelect(){
	
}
void CFMTestCovid19ByObjectReport_Ver1::OnPolicySelect(){
	
}
void CFMTestCovid19ByObjectReport_Ver1::OnAllObjectSelect(){
	
}
	void CFMTestCovid19ByObjectReport_Ver1::OnNgoaitruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMTestCovid19ByObjectReport_Ver1::OnNoitruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

int CFMTestCovid19ByObjectReport_Ver1::OnYearCheckValue()
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
void CFMTestCovid19ByObjectReport_Ver1::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTestCovid19ByObjectReport_Ver1::OnReportPeriodSelendok()
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
/*void CFMTestCovid19ByObjectReport_Ver1::OnReportPeriodSetfocus(){
	
}*/
/*void CFMTestCovid19ByObjectReport_Ver1::OnReportPeriodKillfocus(){
	
}*/
long CFMTestCovid19ByObjectReport_Ver1::OnReportPeriodLoadData()
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
/*void CFMTestCovid19ByObjectReport_Ver1::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMTestCovid19ByObjectReport_Ver1::OnFromDateChange(){
	
} */
/*void CFMTestCovid19ByObjectReport_Ver1::OnFromDateSetfocus(){
	
} */
/*void CFMTestCovid19ByObjectReport_Ver1::OnFromDateKillfocus(){
	
} */
int CFMTestCovid19ByObjectReport_Ver1::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMTestCovid19ByObjectReport_Ver1::OnToDateChange(){
	
} */
/*void CFMTestCovid19ByObjectReport_Ver1::OnToDateSetfocus(){
	
} */
/*void CFMTestCovid19ByObjectReport_Ver1::OnToDateKillfocus(){
	
} */
int CFMTestCovid19ByObjectReport_Ver1::OnToDateCheckValue()
{
	return 0;
} 
void CFMTestCovid19ByObjectReport_Ver1::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTestCovid19ByObjectReport_Ver1::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\TONGHOP_XETNGHIEM_SARCOVI2.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();

	rs.ExecSQL(szSQL);	
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		int i = 0;		if(nRow == 65000)		{			i++;			tmpStr.Format(_T("Sheet %d"), i);
			xls.AddSheet(tmpStr);			xls.SetWorksheet(i);			nRow = 1;		}

		rs.GetValue(_T("dept_id"), szNewDept);
		if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
		{
			if (nGroupTotal[11] > 0)
			{
				xls.SetCellText(7, nRow, _T("Cộng"), FMT_TEXT, true);

				for(int i = 8; i < 30; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("HO_TEN"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phieuthu"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayvao"), tmpStr);
		xls.SetCellText(nCol+6,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("ngayra"), tmpStr);
		xls.SetCellText(nCol+7,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("ngaythanhtoan"), tmpStr);
		xls.SetCellText(nCol+8,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("tenxn"), tmpStr);
		xls.SetCellText(nCol+9,nRow,tmpStr,FMT_TEXT);	

		rs.GetValue(_T("soluong"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("dongia"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);
	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[12] > 0)
	{
		xls.SetCellText(7, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 8; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[12] > 0)
	{
		xls.SetCellText(7, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 8; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_XETNGHIEM_SARCOVI22.xls"));

	
} 
int CFMTestCovid19ByObjectReport_Ver1::OnAddFMInsuranceFeeLossReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMTestCovid19ByObjectReport_Ver1::OnEditFMInsuranceFeeLossReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMTestCovid19ByObjectReport_Ver1::OnDeleteFMInsuranceFeeLossReport(){
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
int CFMTestCovid19ByObjectReport_Ver1::OnSaveFMInsuranceFeeLossReport(){
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
int CFMTestCovid19ByObjectReport_Ver1::OnCancelFMInsuranceFeeLossReport(){
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
int CFMTestCovid19ByObjectReport_Ver1::OnFMInsuranceFeeLossReportListLoadData(){
	return 0;
}

CString CFMTestCovid19ByObjectReport_Ver1::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1;
	long nDocumentNo;

	ShowMessageBox(_T("Báo cáo này lấy theo tiêu chí: Bệnh nhân có XN ở phòng khám -> vào viện và có bệnh án nội trú. Báo cáo không tính những mục được chọn nguồn TT covid (COV)"));
	ShowMessageBox(_T("Thời gian chạy báo cáo lấy theo thời điểm nộp quỹ và phiếu thu đã qua quỹ! OK??"));

	UpdateData(TRUE);
			if(m_nInsurance == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') "));
			}
			else if(m_nService == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
			}
			else if (m_nPolicy == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('D', 'P') "));
			}
			else
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C','S','D', 'P') "));
			}

			if (m_bThatthu)
				szWhere1.AppendFormat(_T(" AND tmp=0 AND feetype in ('P', 'T') "));
		
			if (m_bNgoaitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='E' "));
			}
			
			else if (m_bNoitru)
			{
				szWhere.AppendFormat(_T(" AND HD_SUGGESTION IN ('C', 'D') AND HTR_SUGGESTION ='T' "));
			}
			
			else 
			{
				szWhere.AppendFormat(_T(" AND 1=1 "));
			}
			
			if (m_bNoitru)
			{
			szSQL.Format(_T(" SELECT") \
			_T(" Get_patientname(hd_docno) AS HO_TEN,") \
			_T(" hd_docno AS docno,") \
			_T(" HD_CARDNO AS cardno,") \
			_T(" hpc_deptid as dept_id,") \
			_T(" fac_invoiceno                     AS phieuthu,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_ADMITDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ADMITDATE, 'DD/MM/YYYY') END AS ngayvao,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_DISCHARGEDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ENDDATE, 'DD/MM/YYYY') END AS ngayra,") \
			_T(" to_char(iv.hfe_date, 'DD/MM/YYYY') as ngaythanhtoan,") \
			_T(" fe.hfe_desc as tenxn,") \
			_T(" SUM(fe.hfe_quantity) as soluong,") \
			_T(" fe.HFE_UNITPRICE as dongia,") \
			_T(" SUM(fe.HFE_COST) as thanhtien") \
			_T(" FROM hms_fee fe") \
			_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
			_T(" LEFT JOIN fa_cash ON (iv.hfe_cash_id = fac_cash_id)") \
			
			_T(" LEFT JOIN HMS_TREATMENT_RECORD ON (iv.hfe_docno = htr_docno AND iv.HFE_TREATTIME=HTR_TREATTIME) ") \


			_T(" LEFT JOIN HMS_OBJECT ON (iv.HFE_OBJECTID=ho_id)") \
			_T(" LEFT JOIN hms_testorder ON (fe.hfe_docno=hpc_docno AND fe.hfe_orderid=hpc_orderid)") \
			_T(" LEFT JOIN hms_doc ON (fe.hfe_docno=hd_docno)") \
			_T(" LEFT JOIN hms_fee_list ON (fe.hfe_itemid=hfl_feeid)") \
			_T(" WHERE iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND iv.hfe_status='P' AND iv.HFE_POSTED='Y' AND fe.hfe_deptid IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB')") \
			_T(" AND NVL(fe.HFE_CATEGORY,'XY') <> 'COV' AND fe.hfe_itemid NOT IN (SELECT hfe_itemid FROM hms_fee_discountline WHERE hfe_docno = iv.hfe_docno AND hfe_refidx = iv.hfe_invoiceno)") \
			_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) AND HD_OBJECT <> '11' AND NVL(SUBSTR(HD_CARDNO,1,2), 'XXX') <> 'HT'") \
			_T(" AND NVL(HFL_XNCOVID19, 'N')='Y' AND NVL(htr_outpatient, 'X') in ('N', 'X') AND fe.hfe_discount=0 %s") \
			_T(" GROUP BY hd_docno, hpc_deptid, hd_suggestion, iv.hfe_class,iv.HFE_ADMITDATE, HD_CARDNO, fac_invoiceno,") \
			_T(" iv.HFE_DISCHARGEDATE, HD_ADMITDATE, HD_ENDDATE, iv.hfe_date, fe.hfe_desc, fe.HFE_UNITPRICE") \
			_T(" ORDER BY hpc_deptid, hd_docno"), m_szFromDate, m_szToDate, szWhere);
			}
			else
			{
				szSQL.Format(_T(" SELECT") \
			_T(" Get_patientname(hd_docno) AS HO_TEN,") \
			_T(" hd_docno AS docno,") \
			_T(" HD_CARDNO AS cardno,") \
			_T(" hpc_deptid as dept_id,") \
			_T(" fac_invoiceno                     AS phieuthu,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_ADMITDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ADMITDATE, 'DD/MM/YYYY') END AS ngayvao,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_DISCHARGEDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ENDDATE, 'DD/MM/YYYY') END AS ngayra,") \
			_T(" to_char(iv.hfe_date, 'DD/MM/YYYY') as ngaythanhtoan,") \
			_T(" fe.hfe_desc as tenxn,") \
			_T(" SUM(fe.hfe_quantity) as soluong,") \
			_T(" fe.HFE_UNITPRICE as dongia,") \
			_T(" SUM(fe.HFE_COST) as thanhtien") \
			_T(" FROM hms_fee fe") \
			_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
			_T(" LEFT JOIN fa_cash ON (iv.hfe_cash_id = fac_cash_id)") \
			_T(" LEFT JOIN HMS_OBJECT ON (iv.HFE_OBJECTID=ho_id)") \
			_T(" LEFT JOIN hms_testorder ON (fe.hfe_docno=hpc_docno AND fe.hfe_orderid=hpc_orderid)") \
			_T(" LEFT JOIN hms_doc ON (fe.hfe_docno=hd_docno)") \
			_T(" LEFT JOIN hms_fee_list ON (fe.hfe_itemid=hfl_feeid)") \
			_T(" WHERE iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND iv.hfe_status='P' AND iv.HFE_POSTED='Y' AND NVL(HD_SUGGESTION,'X')='D'") \
			_T(" AND fe.hfe_deptid IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB')") \
			_T(" AND NVL(fe.HFE_CATEGORY,'XY') <> 'COV' AND fe.hfe_itemid NOT IN (SELECT hfe_itemid FROM hms_fee_discountline WHERE hfe_docno = iv.hfe_docno AND hfe_refidx = iv.hfe_invoiceno)") \
			_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) AND HD_OBJECT <> '11' AND NVL(SUBSTR(HD_CARDNO,1,3), 'XXX') <> 'HT1'") \
			_T(" AND NVL(HFL_XNCOVID19, 'N')='Y' %s") \
			_T(" GROUP BY hd_docno, hpc_deptid, hd_suggestion, iv.hfe_class,iv.HFE_ADMITDATE, HD_CARDNO, fac_invoiceno,") \
			_T(" iv.HFE_DISCHARGEDATE, HD_ADMITDATE, HD_ENDDATE, iv.hfe_date, fe.hfe_desc, fe.HFE_UNITPRICE") \
			_T(" ORDER BY hpc_deptid, hd_docno"), m_szFromDate, m_szToDate, szWhere);
			}

			rs.ExecSQL(szSQL);		
	
			return szSQL;
}