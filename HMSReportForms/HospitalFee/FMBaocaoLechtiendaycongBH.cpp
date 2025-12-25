#include "stdafx.h"
#include "FMBaocaoLechtiendaycongBH.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMBaocaoLechtiendaycongBH *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMBaocaoLechtiendaycongBH* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMBaocaoLechtiendaycongBH *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMBaocaoLechtiendaycongBH *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMBaocaoLechtiendaycongBH *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMBaocaoLechtiendaycongBH *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMBaocaoLechtiendaycongBH *pVw = (CFMBaocaoLechtiendaycongBH *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMBaocaoLechtiendaycongBH *pVw = (CFMBaocaoLechtiendaycongBH *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnAddFMTPCNReport();
} 
static int _OnEditFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnEditFMTPCNReport();
} 
static int _OnDeleteFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnDeleteFMTPCNReport();
} 
static int _OnSaveFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnSaveFMTPCNReport();
} 
static int _OnCancelFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnCancelFMTPCNReport();
} 

static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnInPatientSelect();
}
static void _OnCancerSelectFnc(CWnd *pWnd){
	  ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnCancerSelect();
}
static void _OnThatthuSelectFnc(CWnd *pWnd){
	 ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnThatthuSelect();
}

static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnAllSelect();
}

static long _OnphanloaibhLoadDataFnc(CWnd *pWnd)
{
	return ((CFMBaocaoLechtiendaycongBH *)pWnd)->OnphanloaibhLoadData();
}

static void _OnNotIncludePTTYCSelectFnc(CWnd *pWnd)
{
	 ((CFMBaocaoLechtiendaycongBH*)pWnd)->OnNotIncludePTTYCSelect();
}

CFMBaocaoLechtiendaycongBH::CFMBaocaoLechtiendaycongBH()
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMBaocaoLechtiendaycongBH::~CFMBaocaoLechtiendaycongBH()
{
}
void CFMBaocaoLechtiendaycongBH::OnCreateComponents()
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
	m_wndOutPatient.Create(this, _T("Phòng khám"), 10, 96, 101, 121);
	m_wndInPatient.Create(this, _T("Nội trú"), 106, 96, 197, 121);
	m_wndCancer.Create(this, _T("Ngoại trú"), 203, 96, 294, 121);
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 126, 430, 151);
	m_wndThatthu.Create(this, _T("BN yêu cầu"), 0, 0, 0, 0);
	m_wndAll.Create(this, _T("Tất cả"), 301, 96, 425, 121);*/

	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
	m_wndYearLabel.Create(this, _T("Year"), 10, 31, 90, 56);
	m_wndYear.Create(this,95, 31, 215, 56); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 31, 300, 56);
	m_wndReportPeriod.Create(this,305, 31, 425, 56); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 61, 90, 86);
	m_wndFromDate.Create(this,95, 61, 215, 86); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 61, 300, 86);
	m_wndToDate.Create(this,305, 61, 425, 86); 
	m_wndOutPatient.Create(this, _T("Phòng khám"), 10, 96, 101, 121);
	m_wndInPatient.Create(this, _T("Nội trú"), 106, 96, 197, 121);
	m_wndCancer.Create(this, _T("Ngoại trú"), 203, 96, 294, 121);
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 126, 430, 151);
	m_wndAll.Create(this, _T("Tất cả"), 301, 96, 425, 121);
	m_wndThatthu.Create(this, _T("BN yêu cầu"), 42, 29, 42, 29);
	m_wndFilterLabel.Create(this, _T("Bộ Lọc"), 10, 126, 101, 151);
	m_wndphanloaibh.Create(this,106, 126, 318, 151); 
	m_wndNotIncludePTTYC.Create(this, _T("Bỏ PTTYC"), 10, 156, 101, 181);

}
void CFMBaocaoLechtiendaycongBH::OnInitializeComponents()
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

	m_wndphanloaibh.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndphanloaibh.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
}
void CFMBaocaoLechtiendaycongBH::OnSetWindowEvents(){
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
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndCancer.SetEvent(WE_CLICK, _OnCancerSelectFnc);
	m_wndThatthu.SetEvent(WE_CLICK, _OnThatthuSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndphanloaibh.SetEvent(WE_LOADDATA, _OnphanloaibhLoadDataFnc);
	m_wndNotIncludePTTYC.SetEvent(WE_CLICK, _OnNotIncludePTTYCSelectFnc);

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
void CFMBaocaoLechtiendaycongBH::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndCancer.GetDlgCtrlID(), m_nCancer);
	DDX_Check(pDX, m_wndThatthu.GetDlgCtrlID(), m_bThatthu);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_TextEx(pDX, m_wndphanloaibh.GetDlgCtrlID(), m_szphanloaibhKey);
	DDX_Check(pDX, m_wndNotIncludePTTYC.GetDlgCtrlID(), m_bNotIncludePTTYC);

}
void CFMBaocaoLechtiendaycongBH::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMBaocaoLechtiendaycongBH::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMBaocaoLechtiendaycongBH::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nOutPatient=1;
	m_nInPatient=1;
	m_nCancer=1;
	m_bThatthu=false;
	m_nAll=0;
	m_szphanloaibhKey.Empty();
	m_bNotIncludePTTYC=FALSE;


}
int CFMBaocaoLechtiendaycongBH::SetMode(int nMode){
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
/*void CFMBaocaoLechtiendaycongBH::OnYearChange(){
	
} */
/*void CFMBaocaoLechtiendaycongBH::OnYearSetfocus(){
	
} */
/*void CFMBaocaoLechtiendaycongBH::OnYearKillfocus(){
	
} */

void CFMBaocaoLechtiendaycongBH::OnThatthuSelect(){
	
	
}

void CFMBaocaoLechtiendaycongBH::OnOutPatientSelect()
{
		
}
void CFMBaocaoLechtiendaycongBH::OnInPatientSelect(){
	
}
void CFMBaocaoLechtiendaycongBH::OnCancerSelect(){
	
}

void CFMBaocaoLechtiendaycongBH::OnAllSelect()
{
	
}

long CFMBaocaoLechtiendaycongBH::OnphanloaibhLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndphanloaibh.AddItems(_T("BHBQP"), _T("Bảo hiểm BQP"), NULL);
	m_wndphanloaibh.AddItems(_T("BHHN"), _T("Bảo hiểm Hà Nội"), NULL);
	m_wndphanloaibh.AddItems(_T("ALL"), _T("Tất cả"), NULL);	
	return 0;
	
}

void CFMBaocaoLechtiendaycongBH::OnNotIncludePTTYCSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

int CFMBaocaoLechtiendaycongBH::OnYearCheckValue()
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
void CFMBaocaoLechtiendaycongBH::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMBaocaoLechtiendaycongBH::OnReportPeriodSelendok()
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
/*void CFMBaocaoLechtiendaycongBH::OnReportPeriodSetfocus(){
	
}*/
/*void CFMBaocaoLechtiendaycongBH::OnReportPeriodKillfocus(){
	
}*/
long CFMBaocaoLechtiendaycongBH::OnReportPeriodLoadData()
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
/*void CFMBaocaoLechtiendaycongBH::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMBaocaoLechtiendaycongBH::OnFromDateChange(){
	
} */
/*void CFMBaocaoLechtiendaycongBH::OnFromDateSetfocus(){
	
} */
/*void CFMBaocaoLechtiendaycongBH::OnFromDateKillfocus(){
	
} */
int CFMBaocaoLechtiendaycongBH::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMBaocaoLechtiendaycongBH::OnToDateChange(){
	
} */
/*void CFMBaocaoLechtiendaycongBH::OnToDateSetfocus(){
	
} */
/*void CFMBaocaoLechtiendaycongBH::OnToDateKillfocus(){
	
} */
int CFMBaocaoLechtiendaycongBH::OnToDateCheckValue()
{
	return 0;
} 
void CFMBaocaoLechtiendaycongBH::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMBaocaoLechtiendaycongBH::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Báo cáo so sánh tổng bảo hiểm, BH thanh toán, bệnh nhân cùng chi trả trên phơi và số khi tạo XML!"));
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\THONGKE_XML_FEEINVOICE.xls"))) AfxMessageBox(_T("Cài đặt Files: THONGKE_XML_FEEINVOICE.xls"));	
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

		rs.GetValue(_T("ho_ten"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("mathe"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayvao"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayra"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("xml_t_chi"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("phoi_t_chi"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("xml_t_bhtt"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("phoi_t_bhtt"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("xml_t_bntt"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("phoi_t_bntt"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("invoice"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("MA_LK"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
			
		nRow++;
		rs.MoveNext();
	}	
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\Template\\THONGKE_XML_FEEINVOICE2.xls"));
} 
int CFMBaocaoLechtiendaycongBH::OnAddFMTPCNReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMBaocaoLechtiendaycongBH::OnEditFMTPCNReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMBaocaoLechtiendaycongBH::OnDeleteFMTPCNReport(){
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
 		OnCancelFMTPCNReport(); 
 	}
	return 0;
}
int CFMBaocaoLechtiendaycongBH::OnSaveFMTPCNReport(){
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
 		//OnFMTPCNReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMBaocaoLechtiendaycongBH::OnCancelFMTPCNReport(){
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
int CFMBaocaoLechtiendaycongBH::OnFMTPCNReportListLoadData(){
	return 0;
}

CString CFMBaocaoLechtiendaycongBH::GetQueryString_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szIsSolder;
	
	CRecord rs(&pMF->m_db);	

		if(m_nOutPatient == 0)
			{
				szWhere.AppendFormat(_T(" AND hfe_class in ('E') "));
			}
		else if(m_nInPatient == 0)
			{
				szWhere.AppendFormat(_T(" AND hfe_class in ('I') "));
			}
		else if (m_nCancer == 0)
			{
				szWhere.AppendFormat(_T(" AND hfe_class in ('I') "));
			}
		else if (m_nAll)
			{
				szWhere.AppendFormat(_T(" AND 1=1 "));
			}
			else
				szWhere.AppendFormat(_T(" AND 1=1 "));
	 
		if (m_szphanloaibhKey == _T("BHBQP"))
		{
				szWhere.AppendFormat(_T(" AND SUBSTR(hd_cardno, 4,2) = '97' "));			
			
		}
		else if
		(m_szphanloaibhKey == _T("BHHN"))
		{
			szWhere.AppendFormat(_T(" AND SUBSTR(hd_cardno, 4,2) <> '97' "));
		}
		else
		{
		
		}

		if (m_bNotIncludePTTYC)
		{
			szWhere.AppendFormat(_T(" AND  HFE_DEPTID <> 'PTTYC'"));		
		}

		
		szSQL.Format(_T(" SELECT") \
		_T(" get_patientname(hfe_docno)       AS ho_ten,") \
		_T(" hfe_docno as sohoso,") \
		_T(" hfe_deptid as khoa,") \
		_T(" hd_cardno as mathe,") \
		_T(" to_char(HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
		_T(" to_char(HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
		_T(" t_tongchi as xml_t_chi,") \
		_T(" HFE_INSPAID as phoi_t_chi,") \
		_T(" t_bhtt as xml_t_bhtt,") \
		_T(" HFE_DISCOUNT as phoi_t_bhtt,") \
		_T(" t_bntt as xml_t_bntt,") \
		_T(" hfe_inspaid - hfe_discount AS phoi_t_bntt,") \
		_T(" HFE_INVOICENO as invoice,") \
		_T(" MA_LK") \
		_T(" from HMS_FEE_INVOICE") \
		_T(" left join BH_THONGTINCHITIET_TONGHOP  ON ") \
		_T(" (hfe_docno     = CAST(MA_BN AS int)") \
		_T(" AND HFE_TREATTIME = SUBSTR(MA_LK, 10,11))") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON (ho_id = hfe_objectid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hfe_docno = hd_docno)") \
		_T(" WHERE HFE_DATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hfe_status = 'P'") \
		_T(" AND hfe_discount >0") \
		_T(" AND ho_type IN ('I','C') %s %s") \
		//_T(" AND ABS(HFE_DISCOUNT - t_bhtt) > 100") \//

		_T(" ORDER BY hfe_date"), m_szFromDate, m_szToDate, szWhere );

	return szSQL;
}