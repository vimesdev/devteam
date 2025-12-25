#include "stdafx.h"
#include "FMTestCovid19ByObjectReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnYearKillfocus();
} */

static void _OnTinhnguoinhaSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnTinhnguoinhaSelect();
}
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMTestCovid19ByObjectReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTestCovid19ByObjectReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMTestCovid19ByObjectReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTestCovid19ByObjectReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMTestCovid19ByObjectReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTestCovid19ByObjectReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMTestCovid19ByObjectReport *pVw = (CFMTestCovid19ByObjectReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMTestCovid19ByObjectReport *pVw = (CFMTestCovid19ByObjectReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport*)pWnd)->OnAddFMInsuranceFeeLossReport();
} 
static int _OnEditFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport*)pWnd)->OnEditFMInsuranceFeeLossReport();
} 
static int _OnDeleteFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport*)pWnd)->OnDeleteFMInsuranceFeeLossReport();
} 
static int _OnSaveFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport*)pWnd)->OnSaveFMInsuranceFeeLossReport();
} 
static int _OnCancelFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMTestCovid19ByObjectReport*)pWnd)->OnCancelFMInsuranceFeeLossReport();
} 

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMTestCovid19ByObjectReport*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMTestCovid19ByObjectReport*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CFMTestCovid19ByObjectReport*)pWnd)->OnPolicySelect();
}
static void _OnThatthuSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnThatthuSelect();
}

static void _OnAllObjectSelectFnc(CWnd *pWnd){
	  ((CFMTestCovid19ByObjectReport*)pWnd)->OnAllObjectSelect();
}
static void _OnNgoaitruSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnNgoaitruSelect();
}
static void _OnNoitruSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnNoitruSelect();
}

static void _OnBobenhnhanquanSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnBobenhnhanquanSelect();
}
static void _OnBotheHTSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnBotheHTSelect();
}
static void _OnBonguoinhaSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnBonguoinhaSelect();
}
static void _OnBoBNtuongSelectFnc(CWnd *pWnd){
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnBoBNtuongSelect();
}

static void _OnTinhriengbntuongSelectFnc(CWnd *pWnd)
{
	 ((CFMTestCovid19ByObjectReport*)pWnd)->OnTinhriengbntuongSelect();
}

CFMTestCovid19ByObjectReport::CFMTestCovid19ByObjectReport(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();

}
CFMTestCovid19ByObjectReport::~CFMTestCovid19ByObjectReport()
{
}
void CFMTestCovid19ByObjectReport::OnCreateComponents()
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
	m_wndExport.Create(this, _T("&ExportXLS"), 305, 235, 425, 290);
	m_wndTinhnguoinha.Create(this, _T("Tính riêng người nhà"), 12, 265, 199, 290);
	m_wndAllObject.Create(this, _T("Tất cả"), 303, 96, 426, 121);
	m_wndNgoaitru.Create(this, _T("Ngoại trú"), 10, 127, 101, 152);
	m_wndNoitru.Create(this, _T("Nội trú"), 106, 127, 197, 152);
	m_wndBobenhnhanquan.Create(this, _T("Không tính BN quân"), 12, 164, 199, 189);
	m_wndBotheHT.Create(this, _T("Không tính thẻ HT"), 12, 198, 199, 223);
	m_wndBonguoinha.Create(this, _T("Không tính người nhà"), 12, 234, 199, 259);
	m_wndBoBNtuong.Create(this, _T("Không tính BN tướng"), 203, 164, 426, 189);
	m_wndThatthu.Create(this, _T("Thất thu"), 19, 33, 19, 33);
	m_wndTinhriengbntuong.Create(this, _T("Tính riêng BN tướng"), 203, 198, 426, 223);

	m_wndNgoaitru.EnableWindow(false);
	m_wndNoitru.EnableWindow(false);

}
void CFMTestCovid19ByObjectReport::OnInitializeComponents()
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
void CFMTestCovid19ByObjectReport::OnSetWindowEvents(){
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
	m_wndBobenhnhanquan.SetEvent(WE_CLICK, _OnBobenhnhanquanSelectFnc);
	m_wndBonguoinha.SetEvent(WE_CLICK, _OnBonguoinhaSelectFnc);
	m_wndBotheHT.SetEvent(WE_CLICK, _OnBotheHTSelectFnc);
	m_wndTinhnguoinha.SetEvent(WE_CLICK, _OnTinhnguoinhaSelectFnc);
	m_wndBoBNtuong.SetEvent(WE_CLICK, _OnBoBNtuongSelectFnc);
	m_wndTinhriengbntuong.SetEvent(WE_CLICK, _OnTinhriengbntuongSelectFnc);

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
void CFMTestCovid19ByObjectReport::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndBobenhnhanquan.GetDlgCtrlID(), m_bBobenhnhanquan);
	DDX_Check(pDX, m_wndBotheHT.GetDlgCtrlID(), m_bBotheHT);
	DDX_Check(pDX, m_wndBonguoinha.GetDlgCtrlID(), m_bBonguoinha);
	DDX_Check(pDX, m_wndTinhnguoinha.GetDlgCtrlID(), m_bTinhnguoinha);
	DDX_Check(pDX, m_wndBoBNtuong.GetDlgCtrlID(), m_bBoBNtuong);
	DDX_Check(pDX, m_wndTinhriengbntuong.GetDlgCtrlID(), m_bTinhriengbntuong);
}
void CFMTestCovid19ByObjectReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMTestCovid19ByObjectReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMTestCovid19ByObjectReport::SetDefaultValues(){

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
	m_bBobenhnhanquan=false;
	m_bBotheHT=false;
	m_bBonguoinha=true;
	m_bTinhnguoinha=FALSE;
	m_bBoBNtuong=FALSE;
	m_bTinhriengbntuong=FALSE;
}
int CFMTestCovid19ByObjectReport::SetMode(int nMode){
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
/*void CFMTestCovid19ByObjectReport::OnYearChange(){
	
} */
/*void CFMTestCovid19ByObjectReport::OnYearSetfocus(){
	
} */
/*void CFMTestCovid19ByObjectReport::OnYearKillfocus(){
	
} */
	void CFMTestCovid19ByObjectReport::OnTinhnguoinhaSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMTestCovid19ByObjectReport::OnThatthuSelect(){
	
	
}

void CFMTestCovid19ByObjectReport::OnInsuranceSelect()
{
		
}
void CFMTestCovid19ByObjectReport::OnServiceSelect(){
	
}
void CFMTestCovid19ByObjectReport::OnPolicySelect(){
	
}
void CFMTestCovid19ByObjectReport::OnAllObjectSelect(){
	
}
	void CFMTestCovid19ByObjectReport::OnNgoaitruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMTestCovid19ByObjectReport::OnNoitruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMTestCovid19ByObjectReport::OnBoBNtuongSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMTestCovid19ByObjectReport::OnTinhriengbntuongSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

int CFMTestCovid19ByObjectReport::OnYearCheckValue()
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
void CFMTestCovid19ByObjectReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMTestCovid19ByObjectReport::OnBonguoinhaSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMTestCovid19ByObjectReport::OnReportPeriodSelendok()
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
/*void CFMTestCovid19ByObjectReport::OnReportPeriodSetfocus(){
	
}*/
/*void CFMTestCovid19ByObjectReport::OnReportPeriodKillfocus(){
	
}*/
long CFMTestCovid19ByObjectReport::OnReportPeriodLoadData()
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
/*void CFMTestCovid19ByObjectReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMTestCovid19ByObjectReport::OnFromDateChange(){
	
} */
/*void CFMTestCovid19ByObjectReport::OnFromDateSetfocus(){
	
} */
/*void CFMTestCovid19ByObjectReport::OnFromDateKillfocus(){
	
} */
int CFMTestCovid19ByObjectReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMTestCovid19ByObjectReport::OnToDateChange(){
	
} */
/*void CFMTestCovid19ByObjectReport::OnToDateSetfocus(){
	
} */
/*void CFMTestCovid19ByObjectReport::OnToDateKillfocus(){
	
} */
int CFMTestCovid19ByObjectReport::OnToDateCheckValue()
{
	return 0;
} 
void CFMTestCovid19ByObjectReport::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMTestCovid19ByObjectReport::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export mẫu chi tiết"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export mẫu tổng hợp"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("Export mẫu chi tiết theo khoa ra viện"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	TranslateString(_T("Export mẫu chi tiết theo danh mục"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportdetail();
			break;
		case 2:
			OnExporttotal();
			break;
		case 3:
			OnExporttotalbydept();
			break;
		case 4:
			OnExportdetail_danhmuc();
			break;
	}
}

void CFMTestCovid19ByObjectReport::OnExportdetail()
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
	if (!xls.Load(_T("Exports\\Template\\TONGHOP_XETNGHIEM_SARCOVI2_10_2.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

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

		rs.GetValue(_T("bntra"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);
	
	
			
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
	xls.Save(_T("Exports\\TONGHOP_XETNGHIEM_SARCOVI2_10_2X.xls"));

	
} 
int CFMTestCovid19ByObjectReport::OnAddFMInsuranceFeeLossReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMTestCovid19ByObjectReport::OnEditFMInsuranceFeeLossReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMTestCovid19ByObjectReport::OnDeleteFMInsuranceFeeLossReport(){
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
int CFMTestCovid19ByObjectReport::OnSaveFMInsuranceFeeLossReport(){
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
int CFMTestCovid19ByObjectReport::OnCancelFMInsuranceFeeLossReport(){
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
int CFMTestCovid19ByObjectReport::OnFMInsuranceFeeLossReportListLoadData(){
	return 0;
}

void CFMTestCovid19ByObjectReport::OnBobenhnhanquanSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	
}
void CFMTestCovid19ByObjectReport::OnBotheHTSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	
}

CString CFMTestCovid19ByObjectReport::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1;
	long nDocumentNo;
	ShowMessageBox(_T("Thời gian chạy báo cáo lấy theo thời điểm nộp quỹ và phiếu thu đã qua quỹ! tiêu chí là những mục chi phí được chọn nguồn COVID lúc thanh toán!"));

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


			if (m_bBobenhnhanquan)
			{			
				szWhere.AppendFormat(_T(" AND HD_OBJECT <> '11' "));
			}

			if (m_bBotheHT)
			{			
				szWhere.AppendFormat(_T(" AND NVL(SUBSTR(HD_CARDNO,1,2), 'XXX') <> 'HT' "));
			}

			if (m_bBoBNtuong)
			{
				szWhere.AppendFormat(_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) "));
			}

			if (m_bTinhriengbntuong)

			{
				szWhere.AppendFormat(_T(" AND hd_rank IN (15,16,17,18,21,22,23,24) "));
			}

			if (m_bBonguoinha)
			{			
				szWhere.AppendFormat(_T(" AND hd_docno NOT IN (SELECT RE_PATIENTNO FROM RM_RELATIVE_INFOR) "));
			}

			if (m_bTinhnguoinha)
			{			
				szWhere.AppendFormat(_T(" AND hd_docno IN (SELECT RE_PATIENTNO FROM RM_RELATIVE_INFOR) "));
			}
		
			if (m_bNgoaitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='E' "));
			}
			
			else if (m_bNoitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='I' AND HTR_SUGGESTION ='T' "));
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
			_T(" iv.HFE_DEPTID                     AS khoatt,") \
			_T(" fac_invoiceno                     AS phieuthu,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_ADMITDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ADMITDATE, 'DD/MM/YYYY') END AS ngayvao,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_DISCHARGEDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ENDDATE, 'DD/MM/YYYY') END AS ngayra,") \
			_T(" to_char(iv.hfe_date, 'DD/MM/YYYY') as ngaythanhtoan,") \
			_T(" fe.hfe_desc as tenxn,") \
			_T(" SUM(fe.hfe_quantity) as soluong,") \
			_T(" fe.HFE_UNITPRICE as dongia,") \
			//_T(" SUM(fe.HFE_COST) as thanhtien,") \//
			_T("  CASE") \
			_T("         WHEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))>0") \
			_T("         THEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))") \
			_T("         ELSE ROUND(COALESCE(SUM(fe.hfe_patpaid), 0))") \
			_T("   END  thanhtien,") \
			_T(" SUM(fe.HFE_patpaid) as bntra") \
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
			_T(" AND iv.hfe_status='P' AND iv.HFE_POSTED='Y'") \
			_T(" AND NVL(fe.HFE_CATEGORY,'XY')='COV' AND iv.hfe_otherpaid > 0") \
			//_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) ") \
			//_T(" AND NVL(HFL_XNCOVID19, 'N')='Y' AND NVL(htr_outpatient, 'X') in ('N', 'X') %s") \//
			_T(" AND NVL(htr_outpatient, 'X') in ('N', 'X') %s") \
			_T(" GROUP BY hd_docno, hpc_deptid, iv.HFE_DEPTID, hd_suggestion, iv.hfe_class,iv.HFE_ADMITDATE, HD_CARDNO,fac_invoiceno,") \
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
			_T(" iv.HFE_DEPTID                     AS khoatt,") \
			_T(" fac_invoiceno                     AS phieuthu,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_ADMITDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ADMITDATE, 'DD/MM/YYYY') END AS ngayvao,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_DISCHARGEDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ENDDATE, 'DD/MM/YYYY') END AS ngayra,") \
			_T(" to_char(iv.hfe_date, 'DD/MM/YYYY') as ngaythanhtoan,") \
			_T(" fe.hfe_desc as tenxn,") \
			_T(" SUM(fe.hfe_quantity) as soluong,") \
			_T(" fe.HFE_UNITPRICE as dongia,") \
			//_T(" SUM(fe.HFE_COST) as thanhtien,") \//
				
			_T("  CASE") \
			_T("         WHEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))>0") \
			_T("         THEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))") \
			_T("         ELSE ROUND(COALESCE(SUM(fe.hfe_patpaid), 0))") \
			_T("   END  thanhtien,") \

			_T(" SUM(fe.HFE_patpaid) as bntra") \
			_T(" FROM hms_fee fe") \
			_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
			_T(" LEFT JOIN fa_cash ON (iv.hfe_cash_id = fac_cash_id)") \
			_T(" LEFT JOIN HMS_OBJECT ON (iv.HFE_OBJECTID=ho_id)") \
			_T(" LEFT JOIN hms_testorder ON (fe.hfe_docno=hpc_docno AND fe.hfe_orderid=hpc_orderid)") \
			_T(" LEFT JOIN hms_doc ON (fe.hfe_docno=hd_docno)") \
			_T(" LEFT JOIN hms_fee_list ON (fe.hfe_itemid=hfl_feeid)") \
			_T(" WHERE iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			//_T(" AND NVL(HD_SUGGESTION,'X')='D'") \//
			_T(" AND iv.hfe_status='P' AND iv.HFE_POSTED='Y'") \
			_T(" AND NVL(fe.HFE_CATEGORY,'XY')='COV' AND iv.hfe_otherpaid > 0") \
			//_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) ") \
			//_T(" AND NVL(HFL_XNCOVID19, 'N')='Y' %s") \//
			_T(" %s") \
			_T(" GROUP BY hd_docno, hpc_deptid, iv.HFE_DEPTID, hd_suggestion, iv.hfe_class,iv.HFE_ADMITDATE, HD_CARDNO,fac_invoiceno,") \
			_T(" iv.HFE_DISCHARGEDATE, HD_ADMITDATE, HD_ENDDATE, iv.hfe_date, fe.hfe_desc, fe.HFE_UNITPRICE") \
			_T(" ORDER BY hpc_deptid, hd_docno"), m_szFromDate, m_szToDate, szWhere);
			}

			rs.ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);
	
			return szSQL;
}

void CFMTestCovid19ByObjectReport::OnExporttotal()
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
	if (!xls.Load(_T("Exports\\Template\\TONGHOP_XETNGHIEM_SARCOVI2_10_2_total.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringtotal();

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
			if (nGroupTotal[9] > 0)
			{
				xls.SetCellText(7, nRow, _T("Cộng"), FMT_TEXT, true);

				for(int i = 9; i < 30; i++)
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

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("bntra"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguonkhactra"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);
	
	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[9] > 0)
	{
		xls.SetCellText(7, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 9; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[9] > 0)
	{
		xls.SetCellText(7, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 9; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_XETNGHIEM_SARCOVI2_10_2_totalxxx.xls"));	
} 

CString CFMTestCovid19ByObjectReport::GetQueryStringtotal()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1;
	long nDocumentNo;
	ShowMessageBox(_T("Thời gian chạy báo cáo lấy theo thời điểm nộp quỹ và phiếu thu đã qua quỹ! tiêu chí là những mục chi phí được chọn nguồn COVID lúc thanh toán!"));

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


			if (m_bBobenhnhanquan)
			{			
				szWhere.AppendFormat(_T(" AND HD_OBJECT <> '11' "));
			}

			if (m_bBotheHT)
			{			
				szWhere.AppendFormat(_T(" AND NVL(SUBSTR(HD_CARDNO,1,2), 'XXX') <> 'HT' "));
			}

			if (m_bBoBNtuong)
			{
				szWhere.AppendFormat(_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) "));
			}

			if (m_bTinhriengbntuong)

			{
				szWhere.AppendFormat(_T(" AND hd_rank IN (15,16,17,18,21,22,23,24) "));
			}

			if (m_bBonguoinha)
			{			
				szWhere.AppendFormat(_T(" AND hd_docno NOT IN (SELECT RE_PATIENTNO FROM RM_RELATIVE_INFOR) "));
			}

			if (m_bTinhnguoinha)
			{			
				szWhere.AppendFormat(_T(" AND hd_docno IN (SELECT RE_PATIENTNO FROM RM_RELATIVE_INFOR) "));
			}
		
			if (m_bNgoaitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='E' "));
			}
			
			else if (m_bNoitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='I' AND HTR_SUGGESTION ='T' "));
			}
			
			else 
			{
				szWhere.AppendFormat(_T(" AND 1=1 "));
			}
			
			
	szSQL.Format(_T(" SELECT") \
			_T(" Get_patientname(hd_docno) AS HO_TEN,") \
			_T(" hd_docno AS docno,") \
			_T(" HD_CARDNO AS cardno,") \
			_T(" iv.HFE_DEPTID                     AS dept_id,") \
			_T(" fac_invoiceno                     AS phieuthu,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_ADMITDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ADMITDATE, 'DD/MM/YYYY') END AS ngayvao,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_DISCHARGEDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ENDDATE, 'DD/MM/YYYY') END AS ngayra,") \
			_T(" to_char(iv.hfe_date, 'DD/MM/YYYY') as ngaythanhtoan,") \
			//_T(" SUM(fe.HFE_COST) as thanhtien,") \//

			_T("  CASE") \
			_T("         WHEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))>0") \
			_T("         THEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))") \
			_T("         ELSE ROUND(COALESCE(SUM(fe.hfe_patpaid), 0))") \
			_T("   END  thanhtien,") \

			_T(" SUM(fe.HFE_patpaid) as bntra,") \
			_T(" SUM(NVL(fe.HFE_otherpaid,0)) AS nguonkhactra") \
			_T(" FROM hms_fee fe") \
			_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
			_T(" LEFT JOIN fa_cash ON (iv.hfe_cash_id = fac_cash_id)") \
			_T(" LEFT JOIN HMS_OBJECT ON (iv.HFE_OBJECTID=ho_id)") \
			_T(" LEFT JOIN hms_testorder ON (fe.hfe_docno=hpc_docno AND fe.hfe_orderid=hpc_orderid)") \
			_T(" LEFT JOIN hms_doc ON (fe.hfe_docno=hd_docno)") \
			_T(" LEFT JOIN hms_fee_list ON (fe.hfe_itemid=hfl_feeid)") \
			_T(" WHERE iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND iv.hfe_status='P' AND iv.HFE_POSTED='Y'") \
			_T(" AND NVL(fe.HFE_CATEGORY,'XY')='COV' AND iv.hfe_otherpaid > 0") \
			//_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) ") \//
			_T(" %s") \
			_T(" GROUP BY hd_docno, iv.HFE_DEPTID, hd_suggestion, iv.hfe_class,iv.HFE_ADMITDATE, HD_CARDNO,fac_invoiceno,") \
			_T(" iv.HFE_DISCHARGEDATE, HD_ADMITDATE, HD_ENDDATE, iv.hfe_date") \
			_T(" ORDER BY iv.HFE_DEPTID, hd_docno"), m_szFromDate, m_szToDate, szWhere);

			rs.ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);
	
			return szSQL;
}

void CFMTestCovid19ByObjectReport::OnExporttotalbydept()
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
	if (!xls.Load(_T("Exports\\Template\\TONGHOP_XETNGHIEM_SARCOVI2_10_2_total_theokhoa.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringtotalbydept();

	rs.ExecSQL(szSQL);	
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		int i = 0;		if(nRow == 65000)		{			i++;			tmpStr.Format(_T("Sheet %d"), i);
			xls.AddSheet(tmpStr);			xls.SetWorksheet(i);			nRow = 1;		}

	
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);			

		rs.GetValue(_T("phikham"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phigiuong"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("phicls"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phipttt"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phithuoc"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phivattu"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("phithuocpm"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phivattupm"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phimau"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("phigoi"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tienan"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phikhac"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chiphi"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[14] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_XETNGHIEM_SARCOVI2_10_2_total_theokhoaxxx.xls"));	
}

CString CFMTestCovid19ByObjectReport::GetQueryStringtotalbydept()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1;
	long nDocumentNo;
	ShowMessageBox(_T("Thời gian chạy báo cáo lấy theo thời điểm nộp quỹ và phiếu thu đã qua quỹ! tiêu chí là những mục chi phí được chọn nguồn COVID lúc thanh toán, số tiền được lấy ở cột thành tiền!"));

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


			if (m_bBobenhnhanquan)
			{			
				szWhere.AppendFormat(_T(" AND HD_OBJECT <> '11' "));
			}

			if (m_bBotheHT)
			{			
				szWhere.AppendFormat(_T(" AND NVL(SUBSTR(HD_CARDNO,1,2), 'XXX') <> 'HT' "));
			}

			if (m_bBoBNtuong)
			{
				szWhere.AppendFormat(_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) "));
			}

			if (m_bTinhriengbntuong)

			{
				szWhere.AppendFormat(_T(" AND hd_rank IN (15,16,17,18,21,22,23,24) "));
			}

			if (m_bBonguoinha)
			{			
				szWhere.AppendFormat(_T(" AND hd_docno NOT IN (SELECT RE_PATIENTNO FROM RM_RELATIVE_INFOR) "));
			}

			if (m_bTinhnguoinha)
			{			
				szWhere.AppendFormat(_T(" AND hd_docno IN (SELECT RE_PATIENTNO FROM RM_RELATIVE_INFOR) "));
			}
		
			if (m_bNgoaitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='E' "));
			}
			
			else if (m_bNoitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='I' "));
			}
			
			else 
			{
				szWhere.AppendFormat(_T(" AND 1=1 "));
			}
	szSQL.Format(_T(" SELECT") \
				_T(" khoa,") \
				_T(" SUM(phikham) as phikham,") \
				_T(" SUM(phigiuong) as phigiuong,") \
				_T(" SUM(phicls) as phicls,") \
				_T(" SUM(phipttt) as phipttt,") \
				_T(" SUM(phithuoc) as phithuoc,") \
				_T(" SUM(phivattu) as phivattu,") \
				_T(" SUM(phithuocpm) as phithuocpm,") \
				_T(" SUM(phivattupm) as phivattupm,") \
				_T(" SUM(phimau) as phimau,") \
				_T(" SUM(phigoi) as phigoi,") \
				_T(" SUM(tienan) as tienan,") \
				_T(" SUM(phikhac) as phikhac,") \
				_T(" SUM(chiphi) as chiphi") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
				_T(" iv.hfe_deptid as khoa,") \
				_T(" CASE WHEN fe.hfe_type ='E' THEN (fe.hfe_cost) ELSE 0 END as phikham,") \
				_T(" CASE WHEN fe.hfe_type ='B' THEN (fe.hfe_cost) ELSE 0 END as phigiuong,") \
				_T(" CASE WHEN fe.hfe_type in ('P', 'T') ") \
				_T(" AND NVL(HFL_BLOODFEE,'X')<>'Y'") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as phicls,") \
				_T(" CASE WHEN fe.hfe_type in ('O') THEN (fe.hfe_cost) ELSE 0 END as phipttt,") \
				_T(" CASE WHEN product_org_id ='PM' ") \
				_T(" AND fe.hfe_deptid not in ('B5')") \
				_T(" AND fe.hfe_type in ('D', 'M', 'R')") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as phithuoc,") \
				_T(" CASE WHEN product_org_id <> 'PM' ") \
				_T(" AND fe.hfe_deptid not in ('B5')") \
				_T(" AND fe.hfe_type in ('D', 'M', 'R')") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as phivattu,") \
				_T(" CASE WHEN product_org_id ='PM' ") \
				_T(" AND fe.hfe_deptid in ('B5')") \
				_T(" AND fe.hfe_type in ('D', 'M', 'R')") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as phithuocpm,") \
				_T(" CASE WHEN product_org_id <> 'PM' ") \
				_T(" AND fe.hfe_deptid in ('B5')") \
				_T(" AND fe.hfe_type in ('D', 'M', 'R')") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as phivattupm,") \
				_T(" CASE WHEN fe.hfe_type in ('P', 'T')") \
				_T(" AND NVL(HFL_BLOODFEE,'X')='Y'") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as phimau,") \
				_T(" CASE WHEN fe.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as phigoi,") \
				_T(" CASE WHEN Fe.Hfe_Group     IN ('FF000')") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as tienan,") \
				_T(" CASE WHEN Fe.Hfe_type = 'X'") \
				_T(" AND fe.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T(" THEN (fe.hfe_cost) ELSE 0 END as phikhac,") \
				_T(" fe.hfe_cost as chiphi") \
				_T(" FROM hms_fee fe") \
				_T(" LEFT JOIN hms_fee_list ON (fe.hfe_itemid=hfl_feeid)") \
				_T(" LEFT JOIN M_PRODUCTITEM_VIEW_VP1 ON (fe.hfe_itemid) = CAST (product_item_id as NVARCHAR2(15))") \
				_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
				_T(" LEFT JOIN fa_cash iv ON (iv.hfe_cash_id = iv.fac_cash_id)") \
				_T(" LEFT JOIN hms_doc ON (iv.hfe_docno=hd_docno)") \
				_T(" LEFT JOIN HMS_OBJECT ON (iv.HFE_OBJECTID=ho_id)") \
				_T(" where iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND iv.hfe_status='P'") \
				_T(" AND iv.HFE_POSTED='Y'") \
				_T(" and fe.HFE_CATEGORY='COV' AND iv.hfe_otherpaid > 0 %s") \
				_T(" )") \
				_T(" GROUP BY khoa") \
				_T(" ORDER BY khoa"), m_szFromDate, m_szToDate, szWhere);			
	
			return szSQL;
}
void CFMTestCovid19ByObjectReport::OnExportdetail_danhmuc()
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
	if (!xls.Load(_T("Exports\\Template\\TONGHOP_XETNGHIEM_SARCOVI2_10_2_THEODANHMUC.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_danhmuc();

	rs.ExecSQL(szSQL);	
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		int i = 0;		if(nRow == 65000)		{			i++;			tmpStr.Format(_T("Sheet %d"), i);
			xls.AddSheet(tmpStr);			xls.SetWorksheet(i);			nRow = 1;		}

		rs.GetValue(_T("phanloai"), szNewDept);
		if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
		{
			if (nGroupTotal[5] > 0)
			{
				xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);

				for(int i = 2; i < 30; i++)
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

		rs.GetValue(_T("tenxn"), tmpStr);
		xls.SetCellText(nCol+1,nRow,tmpStr,FMT_TEXT);	

		rs.GetValue(_T("soluong"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("donvi"), tmpStr);
		xls.SetCellText(nCol+3,nRow,tmpStr,FMT_TEXT);	

		rs.GetValue(_T("dongia"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("bntra"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);
	
	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_XETNGHIEM_SARCOVI2_10_2_THEODANHMUC_V2.xls"));

	
}

CString CFMTestCovid19ByObjectReport::GetQueryString_danhmuc()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1;
	long nDocumentNo;
	ShowMessageBox(_T("Thời gian chạy báo cáo lấy theo thời điểm nộp quỹ và phiếu thu đã qua quỹ! tiêu chí là những mục chi phí được chọn nguồn COVID lúc thanh toán!"));

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


			if (m_bBobenhnhanquan)
			{			
				szWhere.AppendFormat(_T(" AND HD_OBJECT <> '11' "));
			}

			if (m_bBotheHT)
			{			
				szWhere.AppendFormat(_T(" AND NVL(SUBSTR(HD_CARDNO,1,2), 'XXX') <> 'HT' "));
			}

			if (m_bBoBNtuong)
			{
				szWhere.AppendFormat(_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) "));
			}

			if (m_bTinhriengbntuong)

			{
				szWhere.AppendFormat(_T(" AND hd_rank IN (15,16,17,18,21,22,23,24) "));
			}

			if (m_bBonguoinha)
			{			
				szWhere.AppendFormat(_T(" AND hd_docno NOT IN (SELECT RE_PATIENTNO FROM RM_RELATIVE_INFOR) "));
			}

			if (m_bTinhnguoinha)
			{			
				szWhere.AppendFormat(_T(" AND hd_docno IN (SELECT RE_PATIENTNO FROM RM_RELATIVE_INFOR) "));
			}
		
			if (m_bNgoaitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='E' "));
			}
			
			else if (m_bNoitru)
			{
				szWhere.AppendFormat(_T(" AND iv.HFE_CLASS='I' AND HTR_SUGGESTION ='T' "));
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
			_T(" iv.HFE_DEPTID                     AS khoatt,") \
			_T(" fac_invoiceno                     AS phieuthu,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_ADMITDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ADMITDATE, 'DD/MM/YYYY') END AS ngayvao,") \
			_T(" CASE WHEN hd_suggestion IN ('C', 'D') AND iv.hfe_class='I' THEN to_char(iv.HFE_DISCHARGEDATE, 'DD/MM/YYYY') ") \
			_T(" ELSE to_char(HD_ENDDATE, 'DD/MM/YYYY') END AS ngayra,") \
			_T(" to_char(iv.hfe_date, 'DD/MM/YYYY') as ngaythanhtoan,") \
			_T(" fe.hfe_desc as tenxn,") \
			_T(" SUM(fe.hfe_quantity) as soluong,") \
			_T(" fe.HFE_UNITPRICE as dongia,") \
			//_T(" SUM(fe.HFE_COST) as thanhtien,") \//
			_T("  CASE") \
			_T("         WHEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))>0") \
			_T("         THEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))") \
			_T("         ELSE ROUND(COALESCE(SUM(fe.hfe_patpaid), 0))") \
			_T("   END  thanhtien,") \
			_T(" SUM(fe.HFE_patpaid) as bntra") \
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
			_T(" AND iv.hfe_status='P' AND iv.HFE_POSTED='Y'") \
			_T(" AND NVL(fe.HFE_CATEGORY,'XY')='COV' AND iv.hfe_otherpaid > 0") \
			//_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) ") \
			//_T(" AND NVL(HFL_XNCOVID19, 'N')='Y' AND NVL(htr_outpatient, 'X') in ('N', 'X') %s") \//
			_T(" AND NVL(htr_outpatient, 'X') in ('N', 'X') %s") \
			_T(" GROUP BY hd_docno, hpc_deptid, iv.HFE_DEPTID, hd_suggestion, iv.hfe_class,iv.HFE_ADMITDATE, HD_CARDNO,fac_invoiceno,") \
			_T(" iv.HFE_DISCHARGEDATE, HD_ADMITDATE, HD_ENDDATE, iv.hfe_date, fe.hfe_desc, fe.HFE_UNITPRICE") \
			_T(" ORDER BY hpc_deptid, hd_docno"), m_szFromDate, m_szToDate, szWhere);
			}
			else
			{
				szSQL.Format(_T(" SELECT") \
			_T(" hft_name                           AS phanloai,") \
			_T(" fe.hfe_desc as tenxn,") \
			_T(" SUM(fe.hfe_quantity) as soluong, fe.HFE_UNIT                        AS donvi,") \
			_T(" fe.HFE_UNITPRICE as dongia,") \
			//_T(" SUM(fe.HFE_COST) as thanhtien,") \//
				
			_T("  CASE") \
			_T("         WHEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))>0") \
			_T("         THEN ROUND(COALESCE(SUM(fe.hfe_otherpaid), 0))") \
			_T("         ELSE ROUND(COALESCE(SUM(fe.hfe_patpaid), 0))") \
			_T("   END  thanhtien,") \

			_T(" SUM(fe.HFE_patpaid) as bntra") \
			_T(" FROM hms_fee fe") \
			_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
			_T(" LEFT JOIN hms_fee_group ON (fe.hfe_group = hfg_id)") \
			_T(" LEFT JOIN HMS_FEE_TYPE ON (hfg_type_id = hft_id)") \
			_T(" LEFT JOIN fa_cash ON (iv.hfe_cash_id = fac_cash_id)") \
			_T(" LEFT JOIN HMS_OBJECT ON (iv.HFE_OBJECTID=ho_id)") \
			_T(" LEFT JOIN hms_testorder ON (fe.hfe_docno=hpc_docno AND fe.hfe_orderid=hpc_orderid)") \
			_T(" LEFT JOIN hms_doc ON (fe.hfe_docno=hd_docno)") \
			_T(" LEFT JOIN hms_fee_list ON (fe.hfe_itemid=hfl_feeid)") \
			_T(" WHERE iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			//_T(" AND NVL(HD_SUGGESTION,'X')='D'") \//
			_T(" AND iv.hfe_status='P' AND iv.HFE_POSTED='Y'") \
			_T(" AND NVL(fe.HFE_CATEGORY,'XY')='COV' AND iv.hfe_otherpaid > 0") \
			//_T(" AND hd_rank NOT IN (15,16,17,18,21,22,23,24) ") \
			//_T(" AND NVL(HFL_XNCOVID19, 'N')='Y' %s") \//
			_T(" %s") \
			_T(" GROUP BY hft_name, hft_id,fe.hfe_desc, fe.HFE_UNIT,fe.HFE_UNITPRICE ") \
			_T(" ORDER BY hft_id"), m_szFromDate, m_szToDate, szWhere);
			}

			rs.ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);
	
			return szSQL;
}
