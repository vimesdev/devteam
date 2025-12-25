#include "stdafx.h"
#include "SRMThongkecacmatbenhtuvongcaonhat.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThongkecacmatbenhtuvongcaonhat* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThongkecacmatbenhtuvongcaonhat* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CSRMThongkecacmatbenhtuvongcaonhat *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMThongkecacmatbenhtuvongcaonhat *pVw = (CSRMThongkecacmatbenhtuvongcaonhat *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMThongkecacmatbenhtuvongcaonhat *pVw = (CSRMThongkecacmatbenhtuvongcaonhat *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSRMThongkecacmatbenhtuvongcaonhat *pVw = (CSRMThongkecacmatbenhtuvongcaonhat *)pWnd;
	pVw->OnCloseSelect();
}
static void _OnSelectAllDiseasesSelectFnc(CWnd *pWnd){
	 ((CSRMThongkecacmatbenhtuvongcaonhat*)pWnd)->OnSelectAllDiseasesSelect();
}
static int _OnAddSRMThongkecacmatbenhtuvongcaonhatFnc(CWnd *pWnd){
	 return ((CSRMThongkecacmatbenhtuvongcaonhat*)pWnd)->OnAddSRMThongkecacmatbenhtuvongcaonhat();
} 
static int _OnEditSRMThongkecacmatbenhtuvongcaonhatFnc(CWnd *pWnd){
	 return ((CSRMThongkecacmatbenhtuvongcaonhat*)pWnd)->OnEditSRMThongkecacmatbenhtuvongcaonhat();
} 
static int _OnDeleteSRMThongkecacmatbenhtuvongcaonhatFnc(CWnd *pWnd){
	 return ((CSRMThongkecacmatbenhtuvongcaonhat*)pWnd)->OnDeleteSRMThongkecacmatbenhtuvongcaonhat();
} 
static int _OnSaveSRMThongkecacmatbenhtuvongcaonhatFnc(CWnd *pWnd){
	 return ((CSRMThongkecacmatbenhtuvongcaonhat*)pWnd)->OnSaveSRMThongkecacmatbenhtuvongcaonhat();
} 
static int _OnCancelSRMThongkecacmatbenhtuvongcaonhatFnc(CWnd *pWnd){
	 return ((CSRMThongkecacmatbenhtuvongcaonhat*)pWnd)->OnCancelSRMThongkecacmatbenhtuvongcaonhat();
} 
CSRMThongkecacmatbenhtuvongcaonhat::CSRMThongkecacmatbenhtuvongcaonhat(CWnd *pParent)
{
	m_nDlgWidth = 400;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CSRMThongkecacmatbenhtuvongcaonhat::~CSRMThongkecacmatbenhtuvongcaonhat()
{
}
void CSRMThongkecacmatbenhtuvongcaonhat::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 390, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 385, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 385, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 110, 115);
	m_wndDepartment.Create(this,115, 90, 385, 115); 
	//m_wndPrint.Create(this, _T("&Print"), 140, 155, 220, 180);
	m_wndExport.Create(this, _T("&Export"), 310, 155, 390, 180);
	//m_wndClose.Create(this, _T("&Close"), 310, 155, 390, 180);
	m_wndSelectAllDiseases.Create(this, _T("Select All Diseases"), 245, 125, 390, 150);

}
void CSRMThongkecacmatbenhtuvongcaonhat::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);
	m_wndDepartment.SetCheckBox(TRUE);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void CSRMThongkecacmatbenhtuvongcaonhat::OnSetWindowEvents()
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndSelectAllDiseases.SetEvent(WE_CLICK, _OnSelectAllDiseasesSelectFnc);
	OnReportPeriodLoadData();
	SetMode(VM_EDIT);
}
void CSRMThongkecacmatbenhtuvongcaonhat::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Check(pDX, m_wndSelectAllDiseases.GetDlgCtrlID(), m_bSelectAllDiseases);
}
void CSRMThongkecacmatbenhtuvongcaonhat::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMThongkecacmatbenhtuvongcaonhat::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMThongkecacmatbenhtuvongcaonhat::SetDefaultValues()
{
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_bSelectAllDiseases=FALSE;
}
int CSRMThongkecacmatbenhtuvongcaonhat::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL, tmpStr; 
 		CRecord rs(&pMF->m_db);
		tmpStr = pMF->GetSysDate();
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_nYear = ToInt(tmpStr.Left(4));
			m_szFromDate = m_szToDate = tmpStr;
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
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnYearChange(){
	
} */
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnYearSetfocus(){
	
} */
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnYearKillfocus(){
	
} */
int CSRMThongkecacmatbenhtuvongcaonhat::OnYearCheckValue(){
	return 0;
} 
void CSRMThongkecacmatbenhtuvongcaonhat::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThongkecacmatbenhtuvongcaonhat::OnReportPeriodSelendok()
{
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnReportPeriodSetfocus(){
	
}*/
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnReportPeriodKillfocus(){
	
}*/
long CSRMThongkecacmatbenhtuvongcaonhat::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
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
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnFromDateChange(){
	
} */
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnFromDateSetfocus(){
	
} */
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnFromDateKillfocus(){
	
} */
int CSRMThongkecacmatbenhtuvongcaonhat::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnToDateChange(){
	
} */
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnToDateSetfocus(){
	
} */
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnToDateKillfocus(){
	
} */
int CSRMThongkecacmatbenhtuvongcaonhat::OnToDateCheckValue(){
	return 0;
} 
void CSRMThongkecacmatbenhtuvongcaonhat::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThongkecacmatbenhtuvongcaonhat::OnDepartmentSelendok(){
	 
}
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnDepartmentSetfocus(){
	
}*/
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnDepartmentKillfocus(){
	
}*/
long CSRMThongkecacmatbenhtuvongcaonhat::OnDepartmentLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept WHERE sd_type='DT' %s ORDER BY sd_id"),
			     szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThongkecacmatbenhtuvongcaonhat::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThongkecacmatbenhtuvongcaonhat::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThongkecacmatbenhtuvongcaonhat::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDepartment, szDepartmentName, szWhere, szCondition;
	CString szTemp, tmpStr;
	CExcel xls;

	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 78);
	xls.SetColumnWidth(3, 12);

	int nRow = 0, nCol = 0;
	szDepartment.Empty();
	szDepartmentName.Empty();
	szWhere.Empty();

	for (int i = 0 ; i < m_wndDepartment.GetCount(); i++)
	{
		if(m_wndDepartment.GetCheck(i))
		{
			//m_wndDepartment.SetCurSel(i);
		 	if(!szDepartment.IsEmpty())
				szDepartment += _T(",");						
			szDepartment.AppendFormat(_T("'%s'"), m_wndDepartment.GetCheck(i, 0));
			if(!szDepartmentName.IsEmpty())
				szDepartmentName += _T(",");						
			szDepartmentName.AppendFormat(_T("%s"), m_wndDepartment.GetCheck(i, 1));
		 }
	}
	
	if (!szDepartment.IsEmpty())
		szWhere.Format(_T("AND hcr_dischargedept IN(%s)"), szDepartment);

	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);
	xls.SetCellMergedColumns(nCol, nRow + 2, 4);

	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT, true, 12);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT, true, 12);
	xls.SetCellText(nCol, nRow + 2, szDepartmentName, FMT_TEXT, true, 12);

	xls.SetCellMergedColumns(nCol, nRow + 3, 4);

	xls.SetCellText(nCol, nRow + 4, _T("Th\x1ED1ng k\xEA \x63\xE1\x63 m\x1EB7t \x62\x1EC7nh t\x1EED vong \x63\x61o nh\x1EA5t"), FMT_TEXT, true, 16);	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), 
		          CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
				  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT, true, 12);
	
	xls.SetCellText(nCol, nRow + 6, _T("STT"), FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellText(nCol + 1, nRow + 6, _T("M\xE3 \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellText(nCol + 2, nRow + 6, _T("T\xEAn \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellText(nCol + 3, nRow + 6, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER, true, 12);

	szSQL.Format(_T(" SELECT ICD,") \
				_T("         hi_name as ICDName,") \
				_T("         sum(TongsoDT) as TongsoDT, sum(TSTuvongDT) as TSTuvongDT") \
				_T(" FROM ") \
				_T(" (	  ") \
				_T("  SELECT hcr_mainicd as ICD, 1 as TongsoDT,") \
				_T("  case when hcr_result in('5','6') then 1 else 0 end as TSTuvongDT") \
				_T("  FROM hms_clinical_record") \
				_T("  WHERE hcr_status='T' AND length(hcr_mainicd) > 0 ") \
				_T("  AND hcr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
				_T(" ) Tbl") \
				_T(" LEFT JOIN hms_icd ON(hi_icd=icd)") \
				_T(" GROUP BY ICD, hi_name") \
				_T(" ORDER BY TSTuvongDT desc"), m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);

	nRow += 7;
	int nIndex = 1;
	while (!rs.IsEOF())
	{
		szTemp.Format(_T("%d"), nIndex);
		xls.SetCellText(nCol, nRow, szTemp, FMT_INTEGER);

		szTemp = rs.GetValue(_T("ICD"));
		xls.SetCellText(nCol + 1, nRow, szTemp, FMT_TEXT);

		szTemp = rs.GetValue(_T("ICDName"));
		xls.SetCellText(nCol + 2, nRow, szTemp, FMT_TEXT);

		szTemp = rs.GetValue(_T("TSTuvongDT"));
		xls.SetCellText(nCol + 3, nRow, szTemp, FMT_INTEGER);

		nIndex++;
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\SRMThongkecacmatbenhtuvongcaonhat.XLS"));
	
} 
void CSRMThongkecacmatbenhtuvongcaonhat::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CSRMThongkecacmatbenhtuvongcaonhat::OnSelectAllDiseasesSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CSRMThongkecacmatbenhtuvongcaonhat::OnAddSRMThongkecacmatbenhtuvongcaonhat(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSRMThongkecacmatbenhtuvongcaonhat::OnEditSRMThongkecacmatbenhtuvongcaonhat(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMThongkecacmatbenhtuvongcaonhat::OnDeleteSRMThongkecacmatbenhtuvongcaonhat(){
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
 		OnCancelSRMThongkecacmatbenhtuvongcaonhat(); 
 	}
	return 0;
}
int CSRMThongkecacmatbenhtuvongcaonhat::OnSaveSRMThongkecacmatbenhtuvongcaonhat(){
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
 		//OnSRMThongkecacmatbenhtuvongcaonhatListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSRMThongkecacmatbenhtuvongcaonhat::OnCancelSRMThongkecacmatbenhtuvongcaonhat(){
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
int CSRMThongkecacmatbenhtuvongcaonhat::OnSRMThongkecacmatbenhtuvongcaonhatListLoadData(){
	return 0;
}
