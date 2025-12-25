#include "stdafx.h"
#include "LIMSTestCovid19nguoinha.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSTestCovid19NguoinhaReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestCovid19NguoinhaReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLIMSTestCovid19NguoinhaReport *pVw = (CLIMSTestCovid19NguoinhaReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CLIMSTestCovid19NguoinhaReport *pVw = (CLIMSTestCovid19NguoinhaReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnAddFMInsuranceFeeLossReport();
} 
static int _OnEditFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnEditFMInsuranceFeeLossReport();
} 
static int _OnDeleteFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnDeleteFMInsuranceFeeLossReport();
} 
static int _OnSaveFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnSaveFMInsuranceFeeLossReport();
} 
static int _OnCancelFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnCancelFMInsuranceFeeLossReport();
} 

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnPolicySelect();
}
static void _OnThatthuSelectFnc(CWnd *pWnd){
	 ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnThatthuSelect();
}

static void _OnAllObjectSelectFnc(CWnd *pWnd){
	  ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnAllObjectSelect();
}
static void _OnNgoaitruSelectFnc(CWnd *pWnd){
	 ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnNgoaitruSelect();
}
static void _OnNoitruSelectFnc(CWnd *pWnd){
	 ((CLIMSTestCovid19NguoinhaReport*)pWnd)->OnNoitruSelect();
}

CLIMSTestCovid19NguoinhaReport::CLIMSTestCovid19NguoinhaReport(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CLIMSTestCovid19NguoinhaReport::~CLIMSTestCovid19NguoinhaReport()
{
}
void CLIMSTestCovid19NguoinhaReport::OnCreateComponents()
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
	m_wndInsurance.EnableWindow(false);
	m_wndService.EnableWindow(false);
	m_wndPolicy.EnableWindow(false);
	m_wndAllObject.EnableWindow(false);
	m_wndNgoaitru.EnableWindow(false);
	m_wndNoitru.EnableWindow(false);

}
void CLIMSTestCovid19NguoinhaReport::OnInitializeComponents()
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
void CLIMSTestCovid19NguoinhaReport::OnSetWindowEvents(){
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
void CLIMSTestCovid19NguoinhaReport::OnDoDataExchange(CDataExchange* pDX){
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
void CLIMSTestCovid19NguoinhaReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSTestCovid19NguoinhaReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSTestCovid19NguoinhaReport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInsurance=1;
	m_nService=1;
	m_nPolicy=1;
	m_nAllObject=0;
	m_bNgoaitru=FALSE;
	m_bNoitru=false;
	m_bThatthu=false;
}
int CLIMSTestCovid19NguoinhaReport::SetMode(int nMode){
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
/*void CLIMSTestCovid19NguoinhaReport::OnYearChange(){
	
} */
/*void CLIMSTestCovid19NguoinhaReport::OnYearSetfocus(){
	
} */
/*void CLIMSTestCovid19NguoinhaReport::OnYearKillfocus(){
	
} */

void CLIMSTestCovid19NguoinhaReport::OnThatthuSelect(){
	
	
}

void CLIMSTestCovid19NguoinhaReport::OnInsuranceSelect()
{
		
}
void CLIMSTestCovid19NguoinhaReport::OnServiceSelect(){
	
}
void CLIMSTestCovid19NguoinhaReport::OnPolicySelect(){
	
}
void CLIMSTestCovid19NguoinhaReport::OnAllObjectSelect(){
	
}
	void CLIMSTestCovid19NguoinhaReport::OnNgoaitruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CLIMSTestCovid19NguoinhaReport::OnNoitruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

int CLIMSTestCovid19NguoinhaReport::OnYearCheckValue()
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
void CLIMSTestCovid19NguoinhaReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSTestCovid19NguoinhaReport::OnReportPeriodSelendok()
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
/*void CLIMSTestCovid19NguoinhaReport::OnReportPeriodSetfocus(){
	
}*/
/*void CLIMSTestCovid19NguoinhaReport::OnReportPeriodKillfocus(){
	
}*/
long CLIMSTestCovid19NguoinhaReport::OnReportPeriodLoadData()
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
/*void CLIMSTestCovid19NguoinhaReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CLIMSTestCovid19NguoinhaReport::OnFromDateChange(){
	
} */
/*void CLIMSTestCovid19NguoinhaReport::OnFromDateSetfocus(){
	
} */
/*void CLIMSTestCovid19NguoinhaReport::OnFromDateKillfocus(){
	
} */
int CLIMSTestCovid19NguoinhaReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSTestCovid19NguoinhaReport::OnToDateChange(){
	
} */
/*void CLIMSTestCovid19NguoinhaReport::OnToDateSetfocus(){
	
} */
/*void CLIMSTestCovid19NguoinhaReport::OnToDateKillfocus(){
	
} */
int CLIMSTestCovid19NguoinhaReport::OnToDateCheckValue()
{
	return 0;

} 
void CLIMSTestCovid19NguoinhaReport::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSTestCovid19NguoinhaReport::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\Template\\DANHSACHNGUOINHA_XETNGHIEM_SARCOVI.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL); 
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		

		rs.GetValue(_T("dept_id"), szNewDept);
		if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
		{
			if (nGroupTotal[12] > 0)
			{
				xls.SetCellText(6, nRow, _T("Cộng Khoa"), FMT_TEXT, true);

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

		rs.GetValue(_T("ngayvao"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoso_benhnhan"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hoten_benhnhan"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoadieutri"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("DiaChi"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mobile"), tmpStr);
		xls.SetCellText(nCol+9,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("nguoitiepdon"), tmpStr);
		xls.SetCellText(nCol+10,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("tenxn"), tmpStr);
		xls.SetCellText(nCol+11,nRow,tmpStr,FMT_TEXT);		

		rs.GetValue(_T("soluong"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);
	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[12] > 0)
	{
		xls.SetCellText(6, nRow, _T("Cộng khoa"), FMT_TEXT, true);
		for(int i = 8; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[12] > 0)
	{
		xls.SetCellText(6, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 8; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHNGUOINHA_XETNGHIEM_SARCOVI2.xls"));

	
} 
int CLIMSTestCovid19NguoinhaReport::OnAddFMInsuranceFeeLossReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSTestCovid19NguoinhaReport::OnEditFMInsuranceFeeLossReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSTestCovid19NguoinhaReport::OnDeleteFMInsuranceFeeLossReport(){
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
int CLIMSTestCovid19NguoinhaReport::OnSaveFMInsuranceFeeLossReport(){
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
int CLIMSTestCovid19NguoinhaReport::OnCancelFMInsuranceFeeLossReport(){
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
int CLIMSTestCovid19NguoinhaReport::OnFMInsuranceFeeLossReportListLoadData(){
	return 0;
}

CString CLIMSTestCovid19NguoinhaReport::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1;
	long nDocumentNo;

	UpdateData(TRUE);			
			szSQL.Format(_T(" SELECT Get_patientname(hd_docno)      AS HO_TEN,") \
			_T("   hd_docno                            AS docno,") \
			_T("   TO_CHAR(HD_ADMITDATE, 'DD/MM/YYYY HH24:MI:SS') AS ngayvao,") \
			_T("   hpc_deptid                          AS dept_id,") \
			_T("   RE_RELATIVENO                       AS hoso_benhnhan,") \
			_T("   Get_patientname(RE_RELATIVENO)      AS hoten_benhnhan,") \
			_T("   HMS_GET_LASTDEPT(RE_RELATIVENO)     AS khoadieutri,") \
			_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS DiaChi,") \
			_T("   TRIM(hd_telephone) as mobile,") \
			_T("   RE_WHO_UPDATE as nguoitiepdon,  ") \
			_T("   hfl_name AS tenxn, HPCL_QTY as soluong") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN HMS_TESTORDERLINE ON (hpc_docno=hpcl_docno AND hpc_orderid=HPCL_ORDERID)") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON (hpc_docno=hd_docno)") \
			_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_exam") \
			_T(" ON (hd_docno=he_docno)") \
			_T(" LEFT JOIN hms_roomlist") \
			_T(" ON (he_deptid=hrl_deptid") \
			_T(" AND he_roomid=hrl_id)") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON (hpcl_itemid=hfl_feeid)") \
			_T(" LEFT JOIN RM_RELATIVE_INFOR") \
			_T(" ON (hd_docno=re_patientno)") \
			_T(" WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND HRL_GROUP              ='XNNN'") \
			_T(" AND NVL(HFL_XNCOVID19, 'N')='Y'") \
			_T(" AND hpc_status IN ('S','T')") \
			_T(" GROUP BY hd_docno,") \
			_T("   hpc_deptid, ") \
			_T("   HD_ADMITDATE, ") \
			_T("   hrl_name,") \
			_T("   RE_RELATIVENO,") \
			_T("   hp_provid, ") \
			_T("   hp_distid, ") \
			_T("   hp_villid,") \
			_T("   hd_telephone,") \
			_T("   RE_WHO_UPDATE,") \
			_T("   hfl_name,") \
			_T("   hpc_orderdate,HPCL_QTY") \
			_T(" ORDER BY hpc_deptid,") \
			_T("   hd_docno,") \
			_T("   hpc_orderdate"), m_szFromDate, m_szToDate);

			rs.ExecSQL(szSQL);	
			return szSQL;
}