#include "stdafx.h"
#include "FMDanhsachtralaixncovid.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhsachtralaixncovid *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDanhsachtralaixncovid* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMDanhsachtralaixncovid *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhsachtralaixncovid *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMDanhsachtralaixncovid *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhsachtralaixncovid *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMDanhsachtralaixncovid *pVw = (CFMDanhsachtralaixncovid *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMDanhsachtralaixncovid *pVw = (CFMDanhsachtralaixncovid *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachtralaixncovid*)pWnd)->OnAddFMInsuranceFeeLossReport();
} 
static int _OnEditFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachtralaixncovid*)pWnd)->OnEditFMInsuranceFeeLossReport();
} 
static int _OnDeleteFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachtralaixncovid*)pWnd)->OnDeleteFMInsuranceFeeLossReport();
} 
static int _OnSaveFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachtralaixncovid*)pWnd)->OnSaveFMInsuranceFeeLossReport();
} 
static int _OnCancelFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMDanhsachtralaixncovid*)pWnd)->OnCancelFMInsuranceFeeLossReport();
} 

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMDanhsachtralaixncovid*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMDanhsachtralaixncovid*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CFMDanhsachtralaixncovid*)pWnd)->OnPolicySelect();
}
static void _OnThatthuSelectFnc(CWnd *pWnd){
	 ((CFMDanhsachtralaixncovid*)pWnd)->OnThatthuSelect();
}

static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMDanhsachtralaixncovid*)pWnd)->OnAllSelect();
}

CFMDanhsachtralaixncovid::CFMDanhsachtralaixncovid(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMDanhsachtralaixncovid::~CFMDanhsachtralaixncovid()
{
}
void CFMDanhsachtralaixncovid::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
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
	m_wndThatthu.Create(this, _T("BN yêu cầu"), 10, 126, 197, 151);*/

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
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 126, 430, 151);
	m_wndThatthu.Create(this, _T("BN yêu cầu"), 10, 126, 197, 151);
	m_wndAll.Create(this, _T("Tất cả"), 301, 96, 425, 121);	
}
void CFMDanhsachtralaixncovid::OnInitializeComponents()
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
void CFMDanhsachtralaixncovid::OnSetWindowEvents(){
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
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);

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
void CFMDanhsachtralaixncovid::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndThatthu.GetDlgCtrlID(), m_bThatthu);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);

}
void CFMDanhsachtralaixncovid::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMDanhsachtralaixncovid::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMDanhsachtralaixncovid::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInsurance=1;
	m_nService=1;
	m_nPolicy=1;
	m_bThatthu=false;
	m_nAll=0;


}
int CFMDanhsachtralaixncovid::SetMode(int nMode){
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
/*void CFMDanhsachtralaixncovid::OnYearChange(){
	
} */
/*void CFMDanhsachtralaixncovid::OnYearSetfocus(){
	
} */
/*void CFMDanhsachtralaixncovid::OnYearKillfocus(){
	
} */

void CFMDanhsachtralaixncovid::OnThatthuSelect(){
	
	
}

void CFMDanhsachtralaixncovid::OnInsuranceSelect()
{
		
}
void CFMDanhsachtralaixncovid::OnServiceSelect(){
	
}
void CFMDanhsachtralaixncovid::OnPolicySelect(){
	
}

void CFMDanhsachtralaixncovid::OnAllSelect()
{
	
}

int CFMDanhsachtralaixncovid::OnYearCheckValue()
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
void CFMDanhsachtralaixncovid::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMDanhsachtralaixncovid::OnReportPeriodSelendok()
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
/*void CFMDanhsachtralaixncovid::OnReportPeriodSetfocus(){
	
}*/
/*void CFMDanhsachtralaixncovid::OnReportPeriodKillfocus(){
	
}*/
long CFMDanhsachtralaixncovid::OnReportPeriodLoadData()
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
/*void CFMDanhsachtralaixncovid::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMDanhsachtralaixncovid::OnFromDateChange(){
	
} */
/*void CFMDanhsachtralaixncovid::OnFromDateSetfocus(){
	
} */
/*void CFMDanhsachtralaixncovid::OnFromDateKillfocus(){
	
} */
int CFMDanhsachtralaixncovid::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMDanhsachtralaixncovid::OnToDateChange(){
	
} */
/*void CFMDanhsachtralaixncovid::OnToDateSetfocus(){
	
} */
/*void CFMDanhsachtralaixncovid::OnToDateKillfocus(){
	
} */
int CFMDanhsachtralaixncovid::OnToDateCheckValue()
{
	return 0;
} 
void CFMDanhsachtralaixncovid::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMDanhsachtralaixncovid::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\Template\\DANHSACH_CHITRALAI_XETNGHIEM_COVID.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_v2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
				
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("hoten"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NGAY_VAO"), tmpStr);
		xls.SetCellText(nCol+4,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("NGAY_RA"), tmpStr);
		xls.SetCellText(nCol+5,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);	

		rs.GetValue(_T("ngaytt"), tmpStr);
		xls.SetCellText(nCol+6,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("kieuchi"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sotien"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguoichi"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);			
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[8] > 0)
	{
		xls.SetCellText(6, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[8] > 0)
	{
		xls.SetCellText(6, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\Template\\DANHSACH_CHITRALAI_XETNGHIEM_COVID1.xls"));
} 
int CFMDanhsachtralaixncovid::OnAddFMInsuranceFeeLossReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMDanhsachtralaixncovid::OnEditFMInsuranceFeeLossReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMDanhsachtralaixncovid::OnDeleteFMInsuranceFeeLossReport(){
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
int CFMDanhsachtralaixncovid::OnSaveFMInsuranceFeeLossReport(){
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
int CFMDanhsachtralaixncovid::OnCancelFMInsuranceFeeLossReport(){
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
int CFMDanhsachtralaixncovid::OnFMInsuranceFeeLossReportListLoadData(){
	return 0;
}

CString CFMDanhsachtralaixncovid::GetQueryString_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	
	CRecord rs(&pMF->m_db);

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
			else if (m_nAll)
			{
				szWhere.AppendFormat(_T(" AND 1=1 "));
			}
			else
				szWhere.AppendFormat(_T(" AND 1=1 "));

			if (m_bThatthu)
				szWhere.AppendFormat(_T(" rf.hfe_deptid in ('TYC', 'PTTYC') "));

	szSQL.Format(_T(" SELECT rfl.hfe_docno as sohoso,") \
	_T(" get_patientname(rfl.hfe_docno) as hoten,") \
	_T(" rf.hfe_deptid as khoa,") \
	_T(" Get_objectname(rf.HFE_OBJECTID) as doituong,") \
	_T("  CASE") \
	_T("       WHEN rf.HFE_CLASS = 'I'") \
	_T("       THEN HCR_ADMITDATE") \
	_T("       ELSE HD_ADMITDATE") \
	_T("     END NGAY_VAO,") \
	_T("     CASE") \
	_T("       WHEN rf.HFE_CLASS = 'I'") \
	_T("       THEN HCR_DISCHARGEDATE") \
	_T("       ELSE HD_ENDDATE") \
	_T("     END NGAY_RA,") \
	_T(" rf.hfe_date as ngaytt,") \
	_T(" rfl.hfe_desc as kieuchi,") \
	_T(" rfl.hfe_cost as sotien,") \
	_T(" rf.HFE_STAFF as nguoichi") \
	_T(" FROM HMS_FEE_REFUNDLINE rfl") \
	_T(" LEFT JOIN hms_fee_refund rf ON (rfl.hfe_docno=rf.hfe_docno AND rfl.hfe_invoiceno=rf.hfe_invoiceno)") \
	_T(" LEFT JOIN hms_doc ON (rf.hfe_docno=hd_docno)") \
	_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (hd_docno=hcr_docno)") \
	_T(" LEFT JOIN HMS_OBJECT ON (rf.HFE_OBJECTID = HO_ID)") \
	_T(" WHERE rf.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" AND rf.hfe_status='P'") \
	_T(" AND rf.hfe_type='V' ") \
	_T(" AND rfl.hfe_itemid <> '22' %s") \
	_T(" UNION ALL") \
	_T(" SELECT rfl.hfe_docno as sohoso,") \
	_T(" get_patientname(rfl.hfe_docno) as hoten,") \
	_T(" rf.hfe_deptid as khoa,") \
	_T(" Get_objectname(rf.HFE_OBJECTID) as doituong,") \
	_T("  CASE") \
	_T("       WHEN rf.HFE_CLASS = 'I'") \
	_T("       THEN HCR_ADMITDATE") \
	_T("       ELSE HD_ADMITDATE") \
	_T("     END NGAY_VAO,") \
	_T("     CASE") \
	_T("       WHEN rf.HFE_CLASS = 'I'") \
	_T("       THEN HCR_DISCHARGEDATE") \
	_T("       ELSE HD_ENDDATE") \
	_T("     END NGAY_RA,") \
	_T(" rf.hfe_date as ngaytt,") \
	_T(" rfl.hfe_desc as kieuchi,") \
	_T(" rfl.hfe_cost as sotien,") \
	_T(" rf.HFE_STAFF as nguoichi") \
	_T(" FROM HMS_FEE_REFUNDLINE rfl") \
	_T(" LEFT JOIN hms_fee_refund rf ON (rfl.hfe_docno=rf.hfe_docno AND rfl.hfe_invoiceno=rf.hfe_invoiceno)") \
	_T(" LEFT JOIN hms_fee_list fl ON (rfl.hfe_itemid=fl.hfl_feeid)") \
	_T(" LEFT JOIN HMS_TESTORDERLINE ON (rfl.hfe_docno=hpcl_docno AND rfl.hfe_itemid=hpcl_itemid)") \
	_T(" LEFT JOIN hms_doc ON (rf.hfe_docno=hd_docno)") \
	_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (hd_docno=hcr_docno)") \
	_T(" LEFT JOIN HMS_OBJECT ON (rf.HFE_OBJECTID = HO_ID)") \
	_T(" WHERE rf.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" AND rf.hfe_status='P'") \
	_T(" AND rf.hfe_type<>'V' ") \
	_T(" AND NVL(rfl.HFE_XNCOVID, 'X') <> 'Y' ") \
	_T(" AND NVL(fl.HFL_XNCOVID19, 'N')='Y' ") \
	_T(" AND hpcl_status='T' %s"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}