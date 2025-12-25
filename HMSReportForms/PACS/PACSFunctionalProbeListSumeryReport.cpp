#include "stdafx.h"
#include "PACSFunctionalProbeListSumeryReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSFunctionalProbeListSumeryReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSFunctionalProbeListSumeryReport *pVw = (CPACSFunctionalProbeListSumeryReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSFunctionalProbeListSumeryReport *pVw = (CPACSFunctionalProbeListSumeryReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSFunctionalProbeListSumeryReport* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnGroupAddNew();
}*/
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSFunctionalProbeListSumeryReport* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListSumeryReport *)pWnd)->OnPractitionerAddNew();
}*/
static int _OnAddPACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListSumeryReport*)pWnd)->OnAddPACSFunctionalProbeListReport();
} 
static int _OnEditPACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListSumeryReport*)pWnd)->OnEditPACSFunctionalProbeListReport();
} 
static int _OnDeletePACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListSumeryReport*)pWnd)->OnDeletePACSFunctionalProbeListReport();
} 
static int _OnSavePACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListSumeryReport*)pWnd)->OnSavePACSFunctionalProbeListReport();
} 
static int _OnCancelPACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListSumeryReport*)pWnd)->OnCancelPACSFunctionalProbeListReport();
} 
CPACSFunctionalProbeListSumeryReport::CPACSFunctionalProbeListSumeryReport(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CPACSFunctionalProbeListSumeryReport::~CPACSFunctionalProbeListSumeryReport()
{

}
void CPACSFunctionalProbeListSumeryReport::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 465, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 115, 55);
	m_wndYear.Create(this,120, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 245, 30, 335, 55);
	m_wndReportPeriod.Create(this,340, 30, 460, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,120, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 60, 335, 85);
	m_wndToDate.Create(this,340, 60, 460, 85); 
	
	m_wndGroupLabel.Create(this, _T("Group"), 10, 90, 115, 115);
	m_wndGroup.Create(this,120, 90, 460, 115); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 10, 120, 115, 145);
	m_wndPractitioner.Create(this,120, 120, 460, 145);

	m_wndPrint.Create(this, _T("&Print"), 260, 155, 360, 180);
	m_wndExport.Create(this, _T("&Export"), 365, 155, 465, 180);
}
void CPACSFunctionalProbeListSumeryReport::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(162);
	//m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(65);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_TEXT, 75);
	m_wndPractitioner.InsertColumn(1, _T("Name"), CFMT_TEXT, 235);

}
void CPACSFunctionalProbeListSumeryReport::OnSetWindowEvents(){
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
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	//m_szGroupKey = _T("B3200");

	UpdateData(false);
}
void CPACSFunctionalProbeListSumeryReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);

}
void CPACSFunctionalProbeListSumeryReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSFunctionalProbeListSumeryReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSFunctionalProbeListSumeryReport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szPractitionerKey.Empty();

}
int CPACSFunctionalProbeListSumeryReport::SetMode(int nMode){
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
/*void CPACSFunctionalProbeListSumeryReport::OnYearChange(){
	
} */
/*void CPACSFunctionalProbeListSumeryReport::OnYearSetfocus(){
	
} */
/*void CPACSFunctionalProbeListSumeryReport::OnYearKillfocus(){
	
} */
int CPACSFunctionalProbeListSumeryReport::OnYearCheckValue()
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
void CPACSFunctionalProbeListSumeryReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSFunctionalProbeListSumeryReport::OnReportPeriodSelendok()
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
/*void CPACSFunctionalProbeListSumeryReport::OnReportPeriodSetfocus(){
	
}*/
/*void CPACSFunctionalProbeListSumeryReport::OnReportPeriodKillfocus(){
	
}*/
long CPACSFunctionalProbeListSumeryReport::OnReportPeriodLoadData()
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
/*void CPACSFunctionalProbeListSumeryReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSFunctionalProbeListSumeryReport::OnFromDateChange(){
	
} */
/*void CPACSFunctionalProbeListSumeryReport::OnFromDateSetfocus(){
	
} */
/*void CPACSFunctionalProbeListSumeryReport::OnFromDateKillfocus(){
	
} */
int CPACSFunctionalProbeListSumeryReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSFunctionalProbeListSumeryReport::OnToDateChange(){
	
} */
/*void CPACSFunctionalProbeListSumeryReport::OnToDateSetfocus(){
	
} */
/*void CPACSFunctionalProbeListSumeryReport::OnToDateKillfocus(){
	
} */
int CPACSFunctionalProbeListSumeryReport::OnToDateCheckValue(){
	return 0;
}
void CPACSFunctionalProbeListSumeryReport::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSFunctionalProbeListSumeryReport::OnGroupSelendok(){
	 
}
/*void CPACSFunctionalProbeListSumeryReport::OnGroupSetfocus(){
	
}*/
/*void CPACSFunctionalProbeListSumeryReport::OnGroupKillfocus(){
	
}*/
long CPACSFunctionalProbeListSumeryReport::OnGroupLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	}

	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name ") \
		         _T("FROM hms_fee_group ") \
				 _T("WHERE substr(hfg_id,1,2)='B3' AND hfg_id not in('B3100', 'B3200', 'B3700') ") \
				 _T("ORDER BY hfg_id"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSFunctionalProbeListSumeryReport::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSFunctionalProbeListSumeryReport::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSFunctionalProbeListSumeryReport::OnPractitionerSelendok(){
	 
}
/*void CPACSFunctionalProbeListSumeryReport::OnPractitionerSetfocus(){
	
}*/
/*void CPACSFunctionalProbeListSumeryReport::OnPractitionerKillfocus(){
	
}*/
long CPACSFunctionalProbeListSumeryReport::OnPractitionerLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty())
	{
		szWhere.Format(_T(" AND su_userid='%s' "), m_szPractitionerKey);
	}

	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name ") \
		         _T("FROM sys_user ") \
				 _T("WHERE su_deptid in('C7') ") \
				 _T("ORDER BY su_userid"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSFunctionalProbeListSumeryReport::OnPractitionerAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSFunctionalProbeListSumeryReport::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTemp, tmpStr;
	szSQL=GetQueryString();
	BeginWaitCursor();
	int nCount =rs.ExecSQL(szSQL);
	if(nCount <= 0)
	{
		_msg(_T("Khong co du lieu"));
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/PACS_TONGKETLAMVIECC7.RPT"), true))
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	CString szSysDate,szDate;
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm ),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CReportSection* rptDetail;
	long double sumUser=0;
	long double sumDept=0;
	long double sumPatient=0;
	double cost=0;
	CString szOldItemID, szNewItemID;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("su_name"),szNewItemID);
		if(szOldItemID.IsEmpty()||szNewItemID!=szOldItemID)
		{
			if(sumUser > 0)
			{
				FormatCurrency(sumUser, tmpStr);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("total"),tmpStr);


				FormatCurrency(sumPatient, tmpStr);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("total_patient"),tmpStr);

				
				tmpStr.Format(_T("Tổng bác sỹ"));
				rptDetail->SetValue(_T("Subname"), tmpStr);	
				sumUser=0;
				sumPatient=0;
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));			
			rptDetail->SetValue(_T("GroupName"),szNewItemID );
			szOldItemID=szNewItemID;
		}
		rptDetail = rpt.AddDetail();
		
		rs.GetValue(_T("hfl_name"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("qty"), cost);
		sumUser += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("qty_patient"), cost);
		sumPatient += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		
		rs.MoveNext();
	}
	if(sumUser>0)
	{
		FormatCurrency(sumUser, tmpStr);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("total"),tmpStr);

		FormatCurrency(sumPatient, tmpStr);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("total_patient"),tmpStr);

		tmpStr.Format(_T("Tổng bác sỹ"));
		rptDetail->SetValue(_T("Subname"), tmpStr);	
	}
	sumPatient=0;
	szSQL= GetQueryString1();
	
	int nCount1=rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if(nCount1>0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("Tổng cả khoa C7"));
		rptDetail->SetValue(_T("LabelName"), tmpStr);	
	}

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		
		rs.GetValue(_T("hfl_name"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("qty"), cost);
		sumDept += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("qty_patient"), cost);
		sumPatient += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);


		rs.MoveNext();
	}
	if(sumDept > 0)
	{
		FormatCurrency(sumDept, tmpStr);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("total"),tmpStr);

		FormatCurrency(sumPatient, tmpStr);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("total_patient"),tmpStr);


		tmpStr.Format(_T("Tổng số cả khoa"));
		rptDetail->SetValue(_T("Subname"), tmpStr);	
	}

	szSysDate = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CPACSFunctionalProbeListSumeryReport::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("Xuất theo bác sĩ"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Xuất theo nhóm"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport();
		break;
	case 2:
		OnExport2();
		break;
	}
} 
void CPACSFunctionalProbeListSumeryReport::OnExport()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTemp, tmpStr;


	BeginWaitCursor();

	UpdateData(TRUE);

	szSQL = GetQueryString();

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 22);
	xls.SetColumnWidth(1, 50);
	xls.SetColumnWidth(2, 12);


	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(6, 54);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT , true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT , true);


	xls.SetCellMergedColumns(nCol, nRow + 3, 3);
	xls.SetCellMergedColumns(nCol, nRow + 4, 3);

	xls.SetCellText(nCol, nRow + 3, _T("TỔNG HỢP CÔNG VIỆC"),
		FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);


	xls.SetCellText(nCol, nRow + 5, _T("Tên bác sỹ") , FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 1, nRow + 5, _T("Tên chỉ định") , FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 2, nRow + 5, _T("Số lượng thực hiện"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 3, nRow + 5, _T("Số bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);


	int nIndex = 1;
	nRow = 6;
	long double sumUser=0;
	long double sumDept=0;
	long double sumPatient=0;
	double cost=0;
	CString szOldItemID, szNewItemID;

	while (!rs.IsEOF())
	{
		nRow++;
		rs.GetValue(_T("su_name"), szNewItemID);
		if(szOldItemID.IsEmpty()||szNewItemID!=szOldItemID)
		{
			if(sumUser>0)
			{
				xls.SetCellText(1,nRow,_T("Tổng bác sỹ"),FMT_TEXT|FMT_CENTER, true);
				tmpStr.Format(_T("%f"),sumUser);
				xls.SetCellText(2,nRow,tmpStr,FMT_NUMBER1,true);

				tmpStr.Format(_T("%f"),sumPatient);
				xls.SetCellText(3,nRow,tmpStr,FMT_NUMBER1,true);

				sumPatient=0;
				sumUser=0;
				nRow++;
			}

			rs.GetValue(_T("su_name"), tmpStr);
			xls.SetCellText(nCol + 0, nRow, tmpStr, FMT_TEXT | FMT_WRAPING,true);
			szOldItemID=szNewItemID;
		}

		rs.GetValue(_T("hfl_name"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("qty"), cost);
		sumUser += cost;
		tmpStr.Format(_T("%f"),cost);
	//	FormatCurrency(cost, tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("qty_patient"), cost);
		sumPatient += cost;
		tmpStr.Format(_T("%f"),cost);
	//	FormatCurrency(cost, tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);	
		//	nRow++;

		rs.MoveNext();
	}
	if(sumUser>0)
	{
		nRow++;
		xls.SetCellText(1,nRow,_T("Tổng bác sỹ"),FMT_TEXT|FMT_CENTER,true);
		//FormatCurrency(sumUser,tmpStr);
		tmpStr.Format(_T("%f"),sumUser);
		xls.SetCellText(2,nRow,tmpStr,FMT_NUMBER1,true);

		tmpStr.Format(_T("%f"),sumPatient);
		xls.SetCellText(3,nRow,tmpStr,FMT_NUMBER1,true);
		sumPatient=0;
		sumUser=0;
		nRow++;
	}

	xls.SetCellText(0,nRow,_T("Tổng kết khoa:"),FMT_TEXT,true);
	szSQL= GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF())
	{
		nRow++;
		rs.GetValue(_T("hfl_name"),tmpStr);
		xls.SetCellText(1,nRow,tmpStr,FMT_TEXT);
		rs.GetValue(_T("qty"),cost);
		sumDept += cost;
		//FormatCurrency(cost,tmpStr);
		tmpStr.Format(_T("%f"),cost);
		xls.SetCellText(2,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("qty_patient"),cost);
		sumPatient += cost;
		tmpStr.Format(_T("%f"),cost);
		xls.SetCellText(3,nRow,tmpStr,FMT_NUMBER1);
		rs.MoveNext();
	}
	if(sumDept > 0)
	{
		nRow++;
		xls.SetCellText(1,nRow,_T("Tổng cả khoa:"),FMT_TEXT,true);
		//FormatCurrency(sumDept,tmpStr);
		tmpStr.Format(_T("%f"),sumDept);
		xls.SetCellText(2,nRow,tmpStr,FMT_NUMBER1,true);

		tmpStr.Format(_T("%f"),sumPatient);
		xls.SetCellText(3,nRow,tmpStr,FMT_NUMBER1,true);
	
	}

	xls.Save(_T("Exports\\TONGKETBACSY.xls"));
	EndWaitCursor();
} 
void CPACSFunctionalProbeListSumeryReport::OnExport2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTemp, tmpStr;


	BeginWaitCursor();

	UpdateData(TRUE);

	szSQL = GetQueryString2();

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 50);
	xls.SetColumnWidth(2, 12);


	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(6, 54);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT , true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT , true);


	xls.SetCellMergedColumns(nCol, nRow + 3, 3);
	xls.SetCellMergedColumns(nCol, nRow + 4, 3);

	xls.SetCellText(nCol, nRow + 3, _T("TỔNG HỢP CÔNG VIỆC"),
		FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);


	xls.SetCellText(nCol, nRow + 5, _T("STT") , FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 1, nRow + 5, _T("Tên chỉ định") , FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 2, nRow + 5, _T("Số lượng thực hiện"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);


	int nIndex = 1;
	nRow = 7;
	double sumUser=0;
	double sumDept=0;
	double cost=0;
	CString szOldItemID, szNewItemID;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("hfl_categoryid"), szNewItemID);
		if(szNewItemID!=szOldItemID)
		{
			if(sumUser>0)
			{
				xls.SetCellText(1,nRow,_T("Tổng nhóm"),FMT_TEXT|FMT_CENTER, true);
				xls.SetCellText(2,nRow,double2str(sumUser),FMT_NUMBER1, true);
				sumDept += sumUser;
				sumUser=0;
				nRow++;
			}

			rs.GetValue(_T("categoryname"), tmpStr);
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING, true);
			szOldItemID=szNewItemID;
			nIndex = 1;
			nRow++;
		}

		xls.SetCellText(nCol, nRow, int2str(nIndex++), FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("hfl_name"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("qty"), cost);
		sumUser += cost;
		xls.SetCellText(nCol + 2, nRow, double2str(cost), FMT_INTEGER | FMT_WRAPING);

		rs.MoveNext();
		nRow++;
	}
	if(sumUser>0)
	{
		xls.SetCellText(1,nRow,_T("Tổng nhóm"),FMT_TEXT|FMT_CENTER, true);
		xls.SetCellText(2,nRow,double2str(sumUser),FMT_NUMBER1, true);
		sumDept += sumUser;
		sumUser=0;
		nRow++;
	}

	if(sumDept>0)
	{
		xls.SetCellText(1,nRow,_T("Tổng cộng"),FMT_TEXT|FMT_CENTER, true);
		xls.SetCellText(2,nRow,double2str(sumDept),FMT_NUMBER1, true);
		nRow++;
	}

	xls.Save(_T("Exports\\TONGKETNHOM.xls"));
	EndWaitCursor();
} 
int CPACSFunctionalProbeListSumeryReport::OnAddPACSFunctionalProbeListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSFunctionalProbeListSumeryReport::OnEditPACSFunctionalProbeListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSFunctionalProbeListSumeryReport::OnDeletePACSFunctionalProbeListReport(){
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
 		OnCancelPACSFunctionalProbeListReport(); 
 	}
	return 0;
}
int CPACSFunctionalProbeListSumeryReport::OnSavePACSFunctionalProbeListReport(){
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
 		//OnPACSFunctionalProbeListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSFunctionalProbeListSumeryReport::OnCancelPACSFunctionalProbeListReport(){
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
int CPACSFunctionalProbeListSumeryReport::OnPACSFunctionalProbeListReportListLoadData(){
	return 0;
}

CString CPACSFunctionalProbeListSumeryReport::GetQueryString1()
{
	CString szSQL, szWhere;
	szSQL.Empty();

	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpc_groupid='%s' "), m_szGroupKey);

	if (!m_szPractitionerKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpcl_practitioner='%s' "), m_szPractitionerKey);

	szSQL.Format(_T(" select * from ") \
				_T(" (") \
				_T(" select hfl_name,hfl_feeid,sum(hpcl_qty) as qty ") \
				_T("     from hms_pacsorder ") \
				_T(" 				  left join hms_pacsorderline on(hpcl_orderid=hpc_orderid and hpcl_docno=hpc_docno) ") \
				_T(" 				 left join hms_fee_list on(hfl_feeid=hpcl_itemid) ") \
				_T(" 				  left join hms_roomlist on(hrl_id=hpcl_proomid and hrl_deptid='C7') ") \
				_T(" 				  where hpcl_status='T' and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" 				 AND HPC_GROUPID IN ('B3300','B3400','B3500','B3600', 'B3410')) %s ") \
				_T(" 				 GROUP BY hfl_name,hfl_feeid ") \
				_T(" 				 ORDER BY hfl_feeid") \
				_T(" ) tbl") \
				_T(" LEFT JOIN") \
				_T(" (") \
				_T(" select hfl_name,hfl_feeid,sum(qty) as qty_patient") \
				_T(" FROM") \
				_T(" (") \
				_T(" select  distinct hfl_name,hfl_feeid,1 as qty , hpc_docno") \
				_T("     from hms_pacsorder ") \
				_T(" 				  left join hms_pacsorderline on(hpcl_orderid=hpc_orderid and hpcl_docno=hpc_docno) ") \
				_T(" 				 left join hms_fee_list on(hfl_feeid=hpcl_itemid) ") \
				_T(" 				  left join hms_roomlist on(hrl_id=hpcl_proomid and hrl_deptid='C7') ") \
				_T(" 				  where hpcl_status='T' and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" 				 AND HPC_GROUPID IN ('B3300','B3400','B3500','B3600', 'B3410') %s ") \
				_T(" 		) tbl2") \
				_T(" GROUP BY hfl_name,hfl_feeid") \
				_T(" ) tbl3 ON (tbl3.hfl_name = tbl.hfl_name  and tbl3.hfl_feeid=tbl.hfl_feeid)"),
				m_szFromDate, m_szToDate, szWhere,m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}

CString CPACSFunctionalProbeListSumeryReport::GetQueryString()
{
	CString szSQL, szWhere;
	szSQL.Empty();

	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpc_groupid='%s' "), m_szGroupKey);

	if (!m_szPractitionerKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpcl_practitioner='%s' "), m_szPractitionerKey);

	szSQL.Format(_T(" SELECT * from ( ") \
				_T(" SELECT") \
				_T("      hpcl_practitioner,") \
				_T("      su_name,") \
				_T("      hfl_name,") \
				_T("      hfl_feeid,") \
				_T("      SUM(hpcl_qty) AS qty") \
				_T("  FROM") \
				_T("      hms_pacsorder ") \
				_T("      left JOIN hms_pacsorderline ON ( hpcl_orderid = hpc_orderid") \
				_T("                                  AND hpcl_docno = hpc_docno )") \
				_T("      LEFT JOIN hms_fee_list ON ( hfl_feeid = hpcl_itemid )") \
				_T("      LEFT JOIN hms_fee_group ON ( hfg_id = hpc_groupid )") \
				_T("      LEFT JOIN hms_roomlist ON ( hrl_id = hpcl_proomid") \
				_T("                                  AND hrl_deptid = 'C7' )") \
				_T("      LEFT JOIN sys_user ON ( su_userid = hpcl_practitioner )") \
				_T("  WHERE") \
				_T("      hpcl_status = 'T'") \
				_T("      AND hpcl_date BETWEEN to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s','YYYY-MM-DD HH24:MI:SS')") \
				_T("      AND HPC_GROUPID IN ('B3300','B3400','B3500','B3600', 'B3410') %s ") \
				_T("  GROUP BY") \
				_T("      hpcl_practitioner,") \
				_T("      hfl_name,") \
				_T("      hfl_feeid,") \
				_T("      su_name") \
				_T("  ORDER BY") \
				_T("      hpcl_practitioner,") \
				_T("      hfl_feeid") \
				_T("      ) tbl") \
				_T(" LEFT JOIN") \
				_T(" (") \
				_T(" select ") \
				_T("     hpcl_practitioner,") \
				_T("      su_name,") \
				_T("      hfl_name,") \
				_T("      hfl_feeid,") \
				_T("      sum(qty) as qty_patient") \
				_T("      FROM") \
				_T("      (") \
				_T(" SELECT") \
				_T("     distinct") \
				_T("      hpcl_practitioner,") \
				_T("      su_name,") \
				_T("      hfl_name,") \
				_T("      hfl_feeid,") \
				_T("      hpc_docno,") \
				_T("      1 as qty") \
				_T("  FROM") \
				_T("      hms_pacsorder ") \
				_T("      left JOIN hms_pacsorderline ON ( hpcl_orderid = hpc_orderid") \
				_T("                                  AND hpcl_docno = hpc_docno )") \
				_T("      LEFT JOIN hms_fee_list ON ( hfl_feeid = hpcl_itemid )") \
				_T("      LEFT JOIN hms_fee_group ON ( hfg_id = hpc_groupid )") \
				_T("      LEFT JOIN hms_roomlist ON ( hrl_id = hpcl_proomid") \
				_T("                                  AND hrl_deptid = 'C7' )") \
				_T("      LEFT JOIN sys_user ON ( su_userid = hpcl_practitioner )") \
				_T("  WHERE") \
				_T("      hpcl_status = 'T'") \
				_T("      AND hpcl_date BETWEEN to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s','YYYY-MM-DD HH24:MI:SS')") \
				_T("      AND HPC_GROUPID IN ('B3300','B3400','B3500','B3600', 'B3410') %s ") \
				_T("      ) tbl2") \
				_T("       ") \
				_T("  GROUP BY") \
				_T("      hpcl_practitioner,") \
				_T("      hfl_name,") \
				_T("      hfl_feeid,") \
				_T("      su_name") \
				_T(" ) tbl3 ON (tbl3.hpcl_practitioner = tbl.hpcl_practitioner and tbl3.su_name=tbl.su_name and ") \
				_T("		tbl3.hfl_name=tbl.hfl_name and tbl3.hfl_feeid=tbl.hfl_feeid) ") ,m_szFromDate, m_szToDate, szWhere
																								,m_szFromDate, m_szToDate, szWhere);
	_tprintf(L"%s", szSQL);
	return szSQL;
}
CString CPACSFunctionalProbeListSumeryReport::GetQueryString2()
{
	CString szSQL, szWhere;
	szSQL.Empty();

	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpc_groupid='%s' "), m_szGroupKey);

	if (!m_szPractitionerKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpcl_practitioner='%s' "), m_szPractitionerKey);

	szSQL.Format(_T(" SELECT hfl_name,") \
		_T("   hfl_feeid,") \
		_T("   SUM(hpcl_qty) AS qty,") \
		_T("   hfl_categoryid,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_code = hfl_categoryid) AS categoryname") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid=hpc_orderid") \
		_T(" AND hpcl_docno =hpc_docno)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid=hpcl_itemid)") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id=hpc_groupid)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON(hrl_id     =hpcl_proomid") \
		_T(" AND hrl_deptid='C7')") \
		_T(" LEFT JOIN sys_user") \
		_T(" ON (su_userid    =hpcl_practitioner)") \
		_T(" WHERE hpcl_status='T'") \
		_T(" AND hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND HPC_GROUPID IN ('B3300','B3400','B3500','B3600', 'B3410')") \
		_T(" %s") \
		_T(" GROUP BY hfl_name,") \
		_T("   hfl_feeid,") \
		_T("   hfl_categoryid") \
		_T(" ORDER BY hfl_categoryid,") \
		_T("   hfl_feeid"),
		m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}