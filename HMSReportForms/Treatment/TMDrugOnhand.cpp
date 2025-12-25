#include "stdafx.h"
#include "TMDrugOnhand.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMDrugOnhand *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDrugOnhand* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMDrugOnhand *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDrugOnhand *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDrugOnhand *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDrugOnhand* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CTMDrugOnhand *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnDeptAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDrugOnhand* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CTMDrugOnhand *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CTMDrugOnhand *)pWnd)->OnTypeAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMDrugOnhand *pVw = (CTMDrugOnhand *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMDrugOnhand *pVw = (CTMDrugOnhand *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddTMApprovedFeePatientListReportFnc(CWnd *pWnd){
	 return ((CTMDrugOnhand*)pWnd)->OnAddTMApprovedFeePatientListReport();
} 
static int _OnEditTMApprovedFeePatientListReportFnc(CWnd *pWnd){
	 return ((CTMDrugOnhand*)pWnd)->OnEditTMApprovedFeePatientListReport();
} 
static int _OnDeleteTMApprovedFeePatientListReportFnc(CWnd *pWnd){
	 return ((CTMDrugOnhand*)pWnd)->OnDeleteTMApprovedFeePatientListReport();
} 
static int _OnSaveTMApprovedFeePatientListReportFnc(CWnd *pWnd){
	 return ((CTMDrugOnhand*)pWnd)->OnSaveTMApprovedFeePatientListReport();
} 
static int _OnCancelTMApprovedFeePatientListReportFnc(CWnd *pWnd){
	 return ((CTMDrugOnhand*)pWnd)->OnCancelTMApprovedFeePatientListReport();
} 
CTMDrugOnhand::CTMDrugOnhand(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 200;
	SetDefaultValues();

	//Báo cáo tồn thuốc, VTTH tại khoa
}
CTMDrugOnhand::~CTMDrugOnhand()
{
}
void CTMDrugOnhand::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 440, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 310, 55);
	m_wndReportPeriod.Create(this,315, 30, 435, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 310, 85);
	m_wndToDate.Create(this,315, 60, 435, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 90, 115);
	m_wndDept.Create(this,95, 90, 435, 115); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 120, 90, 145);
	m_wndType.SetCheckBox(TRUE);
	m_wndType.Create(this,95, 120, 435, 145); 
	m_wndPrint.Create(this, _T("&Print"), 275, 155, 355, 180);
	m_wndExport.Create(this, _T("&Export"), 360, 155, 440, 180);

}
void CTMDrugOnhand::OnInitializeComponents()
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
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(81);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(512);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 75);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
}
void CTMDrugOnhand::OnSetWindowEvents()
{
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
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame* ) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	SetMode(VM_EDIT);
}
void CTMDrugOnhand::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

}
void CTMDrugOnhand::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMDrugOnhand::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMDrugOnhand::SetDefaultValues()
{

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szTypeKey.Empty();

}
int CTMDrugOnhand::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void CTMDrugOnhand::OnYearChange(){
	
} */
/*void CTMDrugOnhand::OnYearSetfocus(){
	
} */
/*void CTMDrugOnhand::OnYearKillfocus(){
	
} */
int CTMDrugOnhand::OnYearCheckValue()
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
			szTemp.Format(_T("%.2d/%.2d/%.4d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear());
			m_wndToDate.SetWindowText(szTemp);
		}
	}
	return 0;
} 
void CTMDrugOnhand::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMDrugOnhand::OnReportPeriodSelendok()
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
		m_szFromDate.Format(_T("%.4d/%.2d/01"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
}
/*void CTMDrugOnhand::OnReportPeriodSetfocus(){
	
}*/
/*void CTMDrugOnhand::OnReportPeriodKillfocus(){
	
}*/
long CTMDrugOnhand::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld "), ToInt(m_szReportPeriodKey));
	}
	m_wndReportPeriod.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMDrugOnhand::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMDrugOnhand::OnFromDateChange(){
	
} */
/*void CTMDrugOnhand::OnFromDateSetfocus(){
	
} */
/*void CTMDrugOnhand::OnFromDateKillfocus(){
	
} */
int CTMDrugOnhand::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMDrugOnhand::OnToDateChange(){
	
} */
/*void CTMDrugOnhand::OnToDateSetfocus(){
	
} */
/*void CTMDrugOnhand::OnToDateKillfocus(){
	
} */
int CTMDrugOnhand::OnToDateCheckValue(){
	return 0;
} 
void CTMDrugOnhand::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMDrugOnhand::OnDeptSelendok(){
	 
}
/*void CTMDrugOnhand::OnDeptSetfocus(){
	
}*/
/*void CTMDrugOnhand::OnDeptKillfocus(){
	
}*/
long CTMDrugOnhand::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if (m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS Name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE sd_type='DT' and sd_id not in('TNT') %s") \
				 _T("ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMDrugOnhand::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMDrugOnhand::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
void CTMDrugOnhand::OnTypeSelendok(){
	 
}
/*void CTMDrugOnhand::OnTypeSetfocus(){
	
}*/
/*void CTMDrugOnhand::OnTypeKillfocus(){
	
}*/
long CTMDrugOnhand::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT mpt_product_type_id AS product_type_id, ") \
		_T("                mpt_name AS product_type_name ") \
		_T("				FROM   m_product_type ") \
		_T("				WHERE  mpt_isactive = 'Y' ") \
		_T("				ORDER BY product_type_id"));
	nCount = rs.ExecSQL(szSQL);
	m_wndType.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndType.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CTMDrugOnhand::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMDrugOnhand::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 
void CTMDrugOnhand::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString tmpStr, szSQL, szWhere, szDeptid, szType, szGroupDrug, szOldType, szNewType;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDateTime(); 
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 21);
	xls.SetColumnWidth(2, 6);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 10);
	xls.SetColumnWidth(14, 10);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 10);
	xls.SetColumnWidth(17, 10);
	
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 3);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol, nRow + 3, 10);
	xls.SetCellText(nCol, nRow + 3, _T("BÁO CÁO TỒN THUỐC – VẬT TƯ – HÓA CHẤT TẠI CÁC KHOA PHÒNG HÀNG THÁNG"), FMT_TEXT | FMT_CENTER, true, 14);
	xls.SetCellMergedColumns(nCol, nRow + 4, 10);
//	tmpStr.Format(_T("Tại thời điểm:%s"),CDateTime::Convert(m_szToDay, yyyymmdd|hhmm, ddmmyyyy|hhmm) );
		tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	nRow=5;

	xls.SetCellMergedRows (nCol,nRow,2);
	xls.SetCellText (nCol,nRow ,_T("STT"),FMT_TEXT|FMT_VCENTER |FMT_WRAPING ,true,10);

	xls.SetCellMergedRows (nCol+1,nRow,2);
	xls.SetCellText (nCol+1,nRow ,_T("Tên thuốc"),FMT_TEXT|FMT_VCENTER |FMT_WRAPING ,true,10);

	xls.SetCellMergedRows (nCol+2,nRow,2);
	xls.SetCellText (nCol+2,nRow ,_T("đơn vị"),FMT_TEXT|FMT_VCENTER |FMT_WRAPING ,true,10);

	xls.SetCellMergedColumns(nCol+3, nRow, 3);
	xls.SetCellText(nCol+3,nRow,_T("Số lượng tồn"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);
	xls.SetCellText(nCol+3,nRow + 1,_T("Tồn HSBA"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);
	xls.SetCellText(nCol+4,nRow + 1,_T("Tồn thanh toán"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);
	xls.SetCellText(nCol+5,nRow + 1,_T("Tồn tủ trực"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);

	xls.SetCellMergedRows(nCol+6,nRow,2);
	xls.SetCellText (nCol+6,nRow,_T("Tổng"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);

	xls.SetCellMergedRows(nCol+7,nRow,2);
	xls.SetCellText (nCol+7,nRow,_T("Giá"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);

	xls.SetCellMergedRows(nCol+8,nRow,2);
	xls.SetCellText (nCol+8,nRow,_T("Thành tiền"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);

	xls.SetCellMergedRows(nCol+9,nRow,2);
	xls.SetCellText (nCol+9,nRow,_T("Ghi chú"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);

	CString szWherekhoa1, szWherekhoa2, szTypes;

	if(!m_szDeptKey.IsEmpty ())
	{
		szWherekhoa1.Format(_T(" AND b.hfe_deptid = '%s' "),m_szDeptKey);
		szWherekhoa2.Format(_T(" AND hcr_dischargedept = '%s' "),m_szDeptKey);
	}

	for (int i = 0; i < m_wndType.GetItemCount(); i++)
	{
		if (m_wndType.GetCheck(i))
		{
			m_wndType.SetCurSel(i);
			if (!szTypes.IsEmpty())
				szTypes.AppendFormat(_T("', '"));
			szTypes.AppendFormat(_T("%s"), m_wndType.GetCurrent(0));
		}
	}
	if (!szTypes.IsEmpty())
	{
		szWherekhoa1.AppendFormat(_T(" AND mp_producttype IN('%s')"), szTypes);
		szWherekhoa2.AppendFormat(_T(" AND mp_producttype IN('%s')"), szTypes);
	}

	szSQL.Format(_T(" SELECT deptid,") \
		_T("   GroupDrug,") \
		_T("   name,") \
		_T("   price,") \
		_T("   unit,") \
		_T("   SUM(soluong1)            AS soluong1,") \
		_T("   SUM(soluong2)            AS soluong2,") \
		_T("   SUM(soluong1 + soluong2) AS soluong,") \
		_T("   SUM(sotien1)             AS sotient1,") \
		_T("   SUM(sotien2)             AS sotien2,") \
		_T("   SUM(sotien1+sotien2)     AS sotien,") \
		_T("   groupname") \
		_T(" FROM") \
		_T("   (SELECT CAST('tonhsba' AS text) AS loai,") \
		_T("     deptid,") \
		_T("     GroupDrug,") \
		_T("     name,") \
		_T("     price,") \
		_T("     unit,") \
		_T("     SUM(soluong) AS soluong1,") \
		_T("     SUM(0)       AS soluong2,") \
		_T("     SUM(sotien)  AS sotien1,") \
		_T("     SUM(0)       AS sotien2,") \
		_T("     0            AS OutInt,") \
		_T("     0            AS HasFeedptk,") \
		_T("     SUM(0)       AS OutIntdptk ,") \
		_T("     mathuoc,") \
		_T("     groupname") \
		_T("   FROM") \
		_T("     (SELECT b.hfe_desc               AS name,") \
		_T("       b.hfe_docno                    AS docno,") \
		_T("       b.hfe_unit                     AS unit,") \
		_T("       b.hfe_unitprice                AS price,") \
		_T("       b.hfe_quantity                 AS soluong,") \
		_T("       b.hfe_unitprice*b.hfe_quantity AS sotien,") \
		_T("       b.hfe_deptid                   AS deptid,") \
		_T("       b.hfe_group                    AS GroupDrug ,") \
		_T("       b.hfe_itemid                   AS mathuoc,") \
		_T("       mpt_name                       AS groupname") \
		_T("     FROM hms_fee                     AS b") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno = b.hfe_docno AND htr_idx = b.hfe_refidx)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON(htr_docno = hcr_docno)") \
		_T("     LEFT JOIN m_product_item") \
		_T("     ON(mpi_product_item_id=CAST(b.hfe_itemid AS INTEGER))") \
		_T("     LEFT JOIN m_product") \
		_T("     ON(mp_product_id = mpi_product_id)") \
		_T("     LEFT JOIN m_product_type") \
		_T("     ON(mpt_product_type_id = mp_producttype)") \
		_T("     LEFT JOIN hms_ipharmaorderline") \
		_T("     ON(hpol_product_item_id = CAST(b.hfe_itemid AS INTEGER) ") \
		_T("     AND hpol_orderlineid = hfe_orderline") \
		_T("     AND hpol_orderid = hfe_orderid)") \
		_T("     LEFT JOIN hms_ipharmaorder") \
		_T("     ON(hpo_orderid = hpol_orderid)") \
		_T("     WHERE b.hfe_type      IN('M', 'D')") \
		_T("     AND hcr_status         = 'I'") \
		_T("     AND b.hfe_status       = 'O'") \
		_T("     AND htr_admitdate     >= '%s'") \
		_T("     AND b.hfe_date        <= '%s'") \
		_T("     AND hpo_orderstatus = 'A' %s ") \
		_T("     ) AS tbl") \
		_T("   LEFT JOIN sys_dept") \
		_T("   ON (sd_id=deptid)") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id=groupdrug)") \
		_T("   GROUP BY deptid,") \
		_T("     sd_name,") \
		_T("     GroupDrug,") \
		_T("     name,") \
		_T("     unit,") \
		_T("     price,") \
		_T("     docno,") \
		_T("     OutInt,") \
		_T("     mathuoc,") \
		_T("     groupname") \
		_T("   UNION ALL") \
		_T("   SELECT CAST('tonthanhtoan' AS text) AS loai,") \
		_T("     deptid,") \
		_T("     GroupDrug,") \
		_T("     name,") \
		_T("     price,") \
		_T("     unit,") \
		_T("     SUM(0)       AS soluong1,") \
		_T("     SUM(soluong) AS soluong2,") \
		_T("     SUM(0)       AS sotient1,") \
		_T("     SUM(sotien)  AS sotien2,") \
		_T("     0            AS OutInt,") \
		_T("     0            AS HasFeedptk,") \
		_T("     SUM(0)       AS OutIntdptk,") \
		_T("     mathuoc,") \
		_T("     groupname") \
		_T("   FROM") \
		_T("     (SELECT b.hfe_docno              AS docno,") \
		_T("       b.hfe_desc                     AS name,") \
		_T("       b.hfe_unit                     AS unit,") \
		_T("       b.hfe_unitprice                AS price,") \
		_T("       b.hfe_quantity                 AS soluong,") \
		_T("       b.hfe_unitprice*b.hfe_quantity AS sotien,") \
		_T("       hcr_dischargedept              AS deptid,") \
		_T("       b.hfe_group                    AS GroupDrug ,") \
		_T("       b.hfe_itemid                   AS mathuoc,") \
		_T("       mpt_name                       AS groupname") \
		_T("     FROM hms_fee                     AS b") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno = b.hfe_docno AND htr_idx = b.hfe_refidx)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON(htr_docno = hcr_docno)") \
		_T("     LEFT JOIN m_product_item") \
		_T("     ON(mpi_product_item_id=CAST(b.hfe_itemid AS INTEGER))") \
		_T("     LEFT JOIN m_product") \
		_T("     ON(mp_product_id = mpi_product_id)") \
		_T("     LEFT JOIN m_product_type") \
		_T("     ON(mpt_product_type_id = mp_producttype)") \
		_T("     WHERE b.hfe_type      IN('M', 'D')") \
		_T("     AND hcr_status         = 'T'") \
		_T("     AND b.hfe_status       = 'O'") \
		_T("     AND hcr_dischargedate BETWEEN '%s' AND '%s' %s ") \
		_T("     ) AS tbl") \
		_T("   LEFT JOIN sys_dept") \
		_T("   ON (sd_id=deptid)") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id=groupdrug)") \
		_T("   GROUP BY deptid,") \
		_T("     sd_name,") \
		_T("     GroupDrug,") \
		_T("     name,") \
		_T("     unit,") \
		_T("     price,") \
		_T("     docno,") \
		_T("     OutInt,") \
		_T("     mathuoc,") \
		_T("     groupname") \
		_T("   ) AS tbltong") \
		_T(" GROUP BY deptid,") \
		_T("   GroupDrug,") \
		_T("   name,") \
		_T("   price,") \
		_T("   unit,") \
		_T("   groupname") \
		_T(" ORDER BY deptid,") \
		_T("   groupname,") \
		_T("   name"), m_szFromDate, m_szToDate, szWherekhoa1, m_szFromDate, m_szToDate, szWherekhoa2);

	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);

	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	long double grpCost, typeCost, totalCost;
	
		grpCost = typeCost = totalCost = 0;
	
	int nIndex=1;
	nRow=7;
	int nInt=0;

	while(!rs.IsEOF())
	{	
		if(szDeptid .IsEmpty() || szDeptid !=rs.GetValue(_T("deptid")))
		{	
			if(typeCost > 0)
			{
				xls.SetCellText(nCol+1, nRow, _T("Tổng loại: "), FMT_TEXT,true,10);
				xls.SetCellText(nCol+8, nRow, double2str(typeCost), FMT_NUMBER1,true,10);
				grpCost += typeCost;
				typeCost = 0;
				nRow++;
			}

			if(grpCost > 0)
			{
				xls.SetCellText(nCol+1, nRow, _T("Tổng khoa: "), FMT_TEXT,true,10);
				xls.SetCellText(nCol+8, nRow, double2str(grpCost), FMT_NUMBER1,true,10);
				totalCost += grpCost;
				grpCost = 0;
				nRow++;
			}

			rs.GetValue(_T("deptid"),szDeptid);
			xls.SetCellMergedColumns(nCol,nRow,2);
			//rs.GetValue(_T("deptname"), tmpStr);
			xls.SetCellText(nCol,nRow,pMF->GetDepartmentName(szDeptid),FMT_TEXT|FMT_VCENTER,true,10);
			nRow++;

		}

		rs.GetValue(_T("groupname"), szNewType);
		if(szNewType != szOldType && !szNewType.IsEmpty()){	

			if(typeCost > 0)
				{
					xls.SetCellText(nCol+1, nRow, _T("Tổng loại: "), FMT_TEXT,true,10);
					xls.SetCellText(nCol+8, nRow, double2str(typeCost), FMT_NUMBER1,true,10);
					grpCost += typeCost;
					typeCost = 0;
					nRow++;
				}

			xls.SetCellMergedColumns(nCol,nRow,2);
			xls.SetCellText(nCol, nRow, szNewType,FMT_TEXT|FMT_VCENTER,true,10);
			szOldType = szNewType;
			nIndex = 1;
			nRow++;
		}
			
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("name"),tmpStr);
		xls.SetCellText(nCol+1,nRow,tmpStr,FMT_TEXT,false,10);

		rs.GetValue(_T("unit"),tmpStr);
		xls.SetCellText(nCol+2,nRow,tmpStr,FMT_TEXT,false,10);

		rs.GetValue(_T("soluong1"),tmpStr);
		xls.SetCellText (nCol+3,nRow,tmpStr,FMT_NUMBER1 ,false,10);

		rs.GetValue(_T("soluong2"),tmpStr);
		xls.SetCellText (nCol+4,nRow,tmpStr,FMT_NUMBER1 ,false,10);

		rs.GetValue(_T("soluong"),tmpStr);
		xls.SetCellText (nCol+6,nRow,tmpStr,FMT_NUMBER1 ,false,10);

		rs.GetValue(_T("price"),tmpStr);
		xls.SetCellText (nCol+7,nRow,tmpStr,FMT_NUMBER1 ,false,10);

		rs.GetValue(_T("sotien"),tmpStr);
		typeCost += ToDouble(tmpStr);
		xls.SetCellText (nCol+8,nRow,tmpStr,FMT_NUMBER1 ,false,10);

		nRow++;
		rs.MoveNext();
	}

	if(typeCost > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("Tổng loại: "), FMT_TEXT,true,10);
		xls.SetCellText(nCol+8, nRow, double2str(typeCost), FMT_NUMBER1,true,10);
		grpCost += typeCost;
		nRow++;
	}

	if(grpCost > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("Tổng khoa: "), FMT_TEXT,true,10);
		xls.SetCellText(nCol+8, nRow, double2str(grpCost), FMT_NUMBER1,true,10);
		totalCost += grpCost;
		nRow++;
	}

	if(totalCost > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("Tổng cộng: "), FMT_TEXT,true,10);
		xls.SetCellText(nCol+8, nRow, double2str(totalCost), FMT_NUMBER1,true,10);
		nRow++;
	}
	
	EndWaitCursor();
	xls.Save(_T("Exports\\CHITIETTONTHUOC.xls"));
} 
int CTMDrugOnhand::OnAddTMApprovedFeePatientListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMDrugOnhand::OnEditTMApprovedFeePatientListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMDrugOnhand::OnDeleteTMApprovedFeePatientListReport(){
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
 		OnCancelTMApprovedFeePatientListReport(); 
 	}
	return 0;
}
int CTMDrugOnhand::OnSaveTMApprovedFeePatientListReport(){
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
 		//OnTMApprovedFeePatientListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMDrugOnhand::OnCancelTMApprovedFeePatientListReport(){
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
int CTMDrugOnhand::OnTMApprovedFeePatientListReportListLoadData(){
	return 0;
}
