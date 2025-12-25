#include "stdafx.h"
#include "PACSDanhsachBNchidinhPACS.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPACSDanhsachbnchidinhPACS *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSDanhsachbnchidinhPACS* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPACSDanhsachbnchidinhPACS *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSDanhsachbnchidinhPACS *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSDanhsachbnchidinhPACS *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSDanhsachbnchidinhPACS *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSDanhsachbnchidinhPACS *pVw = (CPACSDanhsachbnchidinhPACS *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSDanhsachbnchidinhPACS *pVw = (CPACSDanhsachbnchidinhPACS *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnAddFMInsuranceFeeLossReport();
} 
static int _OnEditFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnEditFMInsuranceFeeLossReport();
} 
static int _OnDeleteFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnDeleteFMInsuranceFeeLossReport();
} 
static int _OnSaveFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnSaveFMInsuranceFeeLossReport();
} 
static int _OnCancelFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnCancelFMInsuranceFeeLossReport();
} 

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnPolicySelect();
}
static void _OnThatthuSelectFnc(CWnd *pWnd){
	 ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnThatthuSelect();
}

static void _OnAllObjectSelectFnc(CWnd *pWnd){
	  ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnAllObjectSelect();
}
static void _OnNgoaitruSelectFnc(CWnd *pWnd){
	 ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnNgoaitruSelect();
}
static void _OnNoitruSelectFnc(CWnd *pWnd){
	 ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnNoitruSelect();
}
static void _OnChitinhphongkhamxnnnSelectFnc(CWnd *pWnd){
	 ((CPACSDanhsachbnchidinhPACS*)pWnd)->OnChitinhphongkhamxnnnSelect();
}

CPACSDanhsachbnchidinhPACS::CPACSDanhsachbnchidinhPACS(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();

}
CPACSDanhsachbnchidinhPACS::~CPACSDanhsachbnchidinhPACS()
{
}
void CPACSDanhsachbnchidinhPACS::OnCreateComponents()
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
	m_wndInsurance.Create(this, _T("Insurance"), 0, 0, 0, 0);
	m_wndService.Create(this, _T("Service"), 0, 0, 0, 0);
	m_wndPolicy.Create(this, _T("Quân_CS"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 323, 127, 425, 152);
	m_wndAllObject.Create(this, _T("Tất cả"), 0, 0, 0, 0);
	m_wndNgoaitru.Create(this, _T("Ngoại trú"), 0, 0, 0, 0);
	m_wndNoitru.Create(this, _T("Nội trú"), 0, 0, 0, 0);
	m_wndThatthu.Create(this, _T("Thất thu"), 0, 0, 0, 0);
	m_wndChitinhphongkhamxnnn.Create(this, _T("Chỉ lấy XN tại phòng XNNN"), 0, 0, 0, 0);
	m_wndThatthu.EnableWindow(false);
}
void CPACSDanhsachbnchidinhPACS::OnInitializeComponents()
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
void CPACSDanhsachbnchidinhPACS::OnSetWindowEvents(){
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
	m_wndChitinhphongkhamxnnn.SetEvent(WE_CLICK, _OnChitinhphongkhamxnnnSelectFnc);

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
void CPACSDanhsachbnchidinhPACS::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndChitinhphongkhamxnnn.GetDlgCtrlID(), m_bChitinhphongkhamxnnn);

}
void CPACSDanhsachbnchidinhPACS::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSDanhsachbnchidinhPACS::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSDanhsachbnchidinhPACS::SetDefaultValues(){

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
	m_bChitinhphongkhamxnnn=true;
}
int CPACSDanhsachbnchidinhPACS::SetMode(int nMode){
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
/*void CPACSDanhsachbnchidinhPACS::OnYearChange(){
	
} */
/*void CPACSDanhsachbnchidinhPACS::OnYearSetfocus(){
	
} */
/*void CPACSDanhsachbnchidinhPACS::OnYearKillfocus(){
	
} */

void CPACSDanhsachbnchidinhPACS::OnThatthuSelect(){
	
	
}

void CPACSDanhsachbnchidinhPACS::OnInsuranceSelect()
{
		
}
void CPACSDanhsachbnchidinhPACS::OnServiceSelect(){
	
}
void CPACSDanhsachbnchidinhPACS::OnPolicySelect(){
	
}
void CPACSDanhsachbnchidinhPACS::OnAllObjectSelect(){
	
}
	void CPACSDanhsachbnchidinhPACS::OnNgoaitruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CPACSDanhsachbnchidinhPACS::OnNoitruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CPACSDanhsachbnchidinhPACS::OnChitinhphongkhamxnnnSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

int CPACSDanhsachbnchidinhPACS::OnYearCheckValue()
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
void CPACSDanhsachbnchidinhPACS::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSDanhsachbnchidinhPACS::OnReportPeriodSelendok()
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
/*void CPACSDanhsachbnchidinhPACS::OnReportPeriodSetfocus(){
	
}*/
/*void CPACSDanhsachbnchidinhPACS::OnReportPeriodKillfocus(){
	
}*/
long CPACSDanhsachbnchidinhPACS::OnReportPeriodLoadData()
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
/*void CPACSDanhsachbnchidinhPACS::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSDanhsachbnchidinhPACS::OnFromDateChange(){
	
} */
/*void CPACSDanhsachbnchidinhPACS::OnFromDateSetfocus(){
	
} */
/*void CPACSDanhsachbnchidinhPACS::OnFromDateKillfocus(){
	
} */
int CPACSDanhsachbnchidinhPACS::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSDanhsachbnchidinhPACS::OnToDateChange(){
	
} */
/*void CPACSDanhsachbnchidinhPACS::OnToDateSetfocus(){
	
} */
/*void CPACSDanhsachbnchidinhPACS::OnToDateKillfocus(){
	
} */
int CPACSDanhsachbnchidinhPACS::OnToDateCheckValue()
{
	return 0;

} 
void CPACSDanhsachbnchidinhPACS::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CPACSDanhsachbnchidinhPACS::OnExportSelect()
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
	TranslateString(_T("Export Danh sách bệnh nhân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export tổng hợp"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect1();
			break;
		case 2:
			OnExportSelect2();
			break;	
	}
} 


void CPACSDanhsachbnchidinhPACS::OnExportSelect1()
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
	if (!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHAN_CHIDINH_PACS.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

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
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("hfg_name"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("nhombaocao"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("danhmuc"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("orderdate"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);	
			
		nRow++;
		rs.MoveNext();
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHBENHNHAN_CHIDINH_PACS2.xls"));

	
}
void CPACSDanhsachbnchidinhPACS::OnExportSelect2()
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
	if (!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHAN_CHIDINH_PACS_TONGHOP.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		

		rs.GetValue(_T("nhombaocao"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHBENHNHAN_CHIDINH_PACS_TONGHOP2.xls"));

	
} 
int CPACSDanhsachbnchidinhPACS::OnAddFMInsuranceFeeLossReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSDanhsachbnchidinhPACS::OnEditFMInsuranceFeeLossReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSDanhsachbnchidinhPACS::OnDeleteFMInsuranceFeeLossReport(){
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
int CPACSDanhsachbnchidinhPACS::OnSaveFMInsuranceFeeLossReport(){
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
int CPACSDanhsachbnchidinhPACS::OnCancelFMInsuranceFeeLossReport(){
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
int CPACSDanhsachbnchidinhPACS::OnFMInsuranceFeeLossReportListLoadData(){
	return 0;
}

CString CPACSDanhsachbnchidinhPACS::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1, szWhere2;
	long nDocumentNo;
	
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
				szWhere.AppendFormat(_T(" AND hpc_class in ('E') "));
			}
			
			else if (m_bNoitru)
			{
				szWhere.AppendFormat(_T(" AND hpc_class='I' "));
			}
			
			else 
			{
				szWhere.AppendFormat(_T(" AND 1=1 "));
			}

			if (m_bChitinhphongkhamxnnn)
			{
				szWhere2.AppendFormat(_T(" AND HRL_GROUP='XNNN' "));
			}

			
			szSQL.Format(_T(" SELECT * FROM") \
						_T(" (") \
						_T(" SELECT fe.hfe_docno            AS docno,") \
						_T("     GET_PATIENTNAME(fe.hfe_docno) AS tenbenhnhan, hfg_name, ") \
						_T("     (SELECT ss_desc") \
						_T("     FROM sys_sel") \
						_T("     WHERE ss_id='hms_phanloai_pacs'") \
						_T("     AND ss_code=HFL_PACSNAME") \
						_T("     )                                    AS nhombaocao,") \
						_T("     fe.hfe_desc                          AS danhmuc,") \
						_T("     TO_CHAR(hpc_orderdate, 'DD/MM/YYYY') AS orderdate    ") \
						_T("   FROM hms_fee fe") \
						_T("   LEFT JOIN hms_fee_invoice iv") \
						_T("   ON (fe.hfe_docno    =iv.hfe_docno") \
						_T("   AND fe.hfe_invoiceno=iv.hfe_invoiceno)") \
						_T("   LEFT JOIN hms_pacsorder") \
						_T("   ON (fe.hfe_docno  =hpc_docno") \
						_T("   AND fe.hfe_orderid=hpc_orderid) ") \
						_T("   LEFT JOIN hms_fee_group ON (HPC_GROUPID=hfg_id)") \
						_T("   LEFT JOIN hms_fee_list") \
						_T("   ON (fe.hfe_itemid=hfl_feeid)") \
						_T("   WHERE iv.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
						_T("   AND iv.hfe_status ='P'") \
						_T("   AND fe.hfe_status ='P'") \
						_T("   AND NVL(HFL_PACSNAME, 'XXX') <> 'XXX'") \
						_T("   AND fe.hfe_type IN ('P','T')") \
						_T("   UNION ALL") \
						_T("   SELECT fe.hfe_docno            AS docno,") \
						_T("     GET_PATIENTNAME(fe.hfe_docno) AS tenbenhnhan, hfg_name, ") \
						_T("     (SELECT ss_desc") \
						_T("     FROM sys_sel") \
						_T("     WHERE ss_id='hms_phanloai_pacs'") \
						_T("     AND ss_code=HFL_PACSNAME") \
						_T("     )                                    AS nhombaocao,") \
						_T("     fe.hfe_desc                          AS danhmuc,") \
						_T("     TO_CHAR(ho_orderdate, 'DD/MM/YYYY') AS orderdate    ") \
						_T("   FROM hms_fee fe") \
						_T("   LEFT JOIN hms_fee_invoice iv") \
						_T("   ON (fe.hfe_docno    =iv.hfe_docno") \
						_T("   AND fe.hfe_invoiceno=iv.hfe_invoiceno)") \
						_T("   LEFT JOIN hms_operation") \
						_T("   ON (fe.hfe_docno  =ho_docno") \
						_T("   AND fe.hfe_orderid=ho_idx)") \
						_T("   LEFT JOIN hms_fee_group ON (fe.HFE_GROUP=hfg_id)") \
						_T("   LEFT JOIN hms_fee_list") \
						_T("   ON (fe.hfe_itemid=hfl_feeid)") \
						_T("   WHERE iv.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
						_T("   AND iv.hfe_status ='P'") \
						_T("   AND fe.hfe_status ='P'") \
						_T("   AND NVL(HFL_PACSNAME, 'XXX') <> 'XXX'") \
						_T("   AND fe.hfe_type='O'") \
						_T("   )") \
						_T("   ORDER BY nhombaocao"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);

			rs.ExecSQL(szSQL);	
			return szSQL;
}

CString CPACSDanhsachbnchidinhPACS::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szWhere, szWhere1, szWhere2;
	long nDocumentNo;
	
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
				szWhere.AppendFormat(_T(" AND hpc_class in ('E') "));
			}
			
			else if (m_bNoitru)
			{
				szWhere.AppendFormat(_T(" AND hpc_class='I' "));
			}
			
			else 
			{
				szWhere.AppendFormat(_T(" AND 1=1 "));
			}

			if (m_bChitinhphongkhamxnnn)
			{
				szWhere2.AppendFormat(_T(" AND HRL_GROUP='XNNN' "));
			}

			szSQL.Format(_T(" SELECT nhombaocao,") \
			_T(" SUM(soluong) as total") \
			_T(" FROM") \
			_T("   (SELECT ") \
			_T("     (SELECT ss_desc") \
			_T("     FROM sys_sel") \
			_T("     WHERE ss_id='hms_phanloai_pacs'") \
			_T("     AND ss_code=HFL_PACSNAME") \
			_T("     )                                    AS nhombaocao,  ") \
			_T("     fe.hfe_quantity as soluong") \
			_T("   FROM hms_fee fe") \
			_T("   LEFT JOIN hms_fee_invoice iv") \
			_T("   ON (fe.hfe_docno    =iv.hfe_docno") \
			_T("   AND fe.hfe_invoiceno=iv.hfe_invoiceno)") \
			_T("   LEFT JOIN hms_pacsorder") \
			_T("   ON (fe.hfe_docno  =hpc_docno") \
			_T("   AND fe.hfe_orderid=hpc_orderid)") \
			_T("   LEFT JOIN hms_fee_group") \
			_T("   ON (HPC_GROUPID=hfg_id)") \
			_T("   LEFT JOIN hms_fee_list") \
			_T("   ON (fe.hfe_itemid=hfl_feeid)") \
			_T("   WHERE iv.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("   AND iv.hfe_status             ='P'") \
			_T("   AND fe.hfe_status             ='P'") \
			_T("   AND NVL(HFL_PACSNAME, 'XXX') <> 'XXX'") \
			_T("   AND fe.hfe_type              IN ('P','T')") \
			_T("   UNION ALL") \
			_T("   SELECT ") \
			_T("     (SELECT ss_desc") \
			_T("     FROM sys_sel") \
			_T("     WHERE ss_id='hms_phanloai_pacs'") \
			_T("     AND ss_code=HFL_PACSNAME") \
			_T("     )                                   AS nhombaocao,   ") \
			_T("     fe.hfe_quantity as soluong") \
			_T("   FROM hms_fee fe") \
			_T("   LEFT JOIN hms_fee_invoice iv") \
			_T("   ON (fe.hfe_docno    =iv.hfe_docno") \
			_T("   AND fe.hfe_invoiceno=iv.hfe_invoiceno)") \
			_T("   LEFT JOIN hms_operation") \
			_T("   ON (fe.hfe_docno  =ho_docno") \
			_T("   AND fe.hfe_orderid=ho_idx)") \
			_T("   LEFT JOIN hms_fee_group") \
			_T("   ON (fe.HFE_GROUP=hfg_id)") \
			_T("   LEFT JOIN hms_fee_list") \
			_T("   ON (fe.hfe_itemid=hfl_feeid)") \
			_T("   WHERE iv.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("   AND iv.hfe_status             ='P'") \
			_T("   AND fe.hfe_status             ='P'") \
			_T("   AND NVL(HFL_PACSNAME, 'XXX') <> 'XXX'") \
			_T("   AND fe.hfe_type               ='O'") \
			_T("   )") \
			_T(" GROUP BY nhombaocao") \
			_T("   ORDER BY nhombaocao"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);

			rs.ExecSQL(szSQL);	
			return szSQL;
}