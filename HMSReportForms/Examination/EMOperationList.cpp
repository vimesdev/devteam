#include "stdafx.h"
#include "EMOperationList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMOperationList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMOperationList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMOperationList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMOperationList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMOperationList *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMOperationList* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CEMOperationList *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CEMOperationList *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMOperationList *pVw = (CEMOperationList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMOperationList *pVw = (CEMOperationList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CEMOperationList*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CEMOperationList*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CEMOperationList*)pWnd)->OnPolicySelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CEMOperationList*)pWnd)->OnAllSelect();
}
static void _OnHitechSelectFnc(CWnd *pWnd){
	((CEMOperationList*)pWnd)->OnHitechSelect();
}
static int _OnAddEMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationList*)pWnd)->OnAddEMOperationList();
} 
static int _OnEditEMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationList*)pWnd)->OnEditEMOperationList();
} 
static int _OnDeleteEMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationList*)pWnd)->OnDeleteEMOperationList();
} 
static int _OnSaveEMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationList*)pWnd)->OnSaveEMOperationList();
} 
static int _OnCancelEMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationList*)pWnd)->OnCancelEMOperationList();
} 
CEMOperationList::CEMOperationList(CWnd* pParent){

	m_nDlgWidth = 470;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CEMOperationList::~CEMOperationList(){
}
void CEMOperationList::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 460, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 230, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 235, 30, 325, 55);
	m_wndReportPeriod.Create(this,330, 30, 455, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 230, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 60, 325, 85);
	m_wndToDate.Create(this,330, 60, 455, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 100, 115);
	m_wndDept.Create(this,105, 90, 455, 115); 
	m_wndPrint.Create(this, _T("Print"), 253, 155, 353, 180);
	m_wndExport.Create(this, _T("&Export"), 360, 155, 460, 180);
	m_wndHitech.Create(this, _T("Hitech"), 20, 120, 120, 145);
	m_wndInsurance.Create(this, _T("Insurance"), 140, 120, 220, 145);
	m_wndService.Create(this, _T("Service"), 225, 120, 305, 145);
	m_wndPolicy.Create(this, _T("Policies"), 310, 120, 390, 145);
	m_wndAll.Create(this, _T("All"), 395, 120, 475, 145);

}
void CEMOperationList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CEMOperationList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_szDeptKey = _T("B10");
	UpdateData(FALSE);
	
	

}
void CEMOperationList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);

}
void CEMOperationList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMOperationList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMOperationList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nInsurance=1;
	m_nService=1;
	m_nPolicy=1;
	m_nAll=0;
	m_bHitech=FALSE;

}
int CEMOperationList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL, szSysDate;
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
/*void CEMOperationList::OnYearChange(){
	
} */
/*void CEMOperationList::OnYearSetfocus(){
	
} */
/*void CEMOperationList::OnYearKillfocus(){
	
} */
int CEMOperationList::OnYearCheckValue(){
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
void CEMOperationList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMOperationList::OnReportPeriodSelendok(){
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
/*void CEMOperationList::OnReportPeriodSetfocus(){
	
}*/
/*void CEMOperationList::OnReportPeriodKillfocus(){
	
}*/
long CEMOperationList::OnReportPeriodLoadData(){
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
/*void CEMOperationList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMOperationList::OnFromDateChange(){
	
} */
/*void CEMOperationList::OnFromDateSetfocus(){
	
} */
/*void CEMOperationList::OnFromDateKillfocus(){
	
} */
int CEMOperationList::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMOperationList::OnToDateChange(){
	
} */
/*void CEMOperationList::OnToDateSetfocus(){
	
} */
/*void CEMOperationList::OnToDateKillfocus(){
	
} */
int CEMOperationList::OnToDateCheckValue(){
	return 0;
} 
void CEMOperationList::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMOperationList::OnDeptSelendok(){
	 
}
/*void CEMOperationList::OnDeptSetfocus(){
	
}*/
/*void CEMOperationList::OnDeptKillfocus(){
	
}*/
long CEMOperationList::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
	 szWhere.Format(_T(" and sd_id = '%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;

}
/*void CEMOperationList::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMOperationList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMOperationList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp;
	int nIdx = 1, nRow = 0, nCol = 0;
	double nAmount = 0, nTotalAmount = 0;
	szSQL = GetQuerySring();
	//_msg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetLandscape(true);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 40);
	xls.SetColumnWidth(6, 4);
	xls.SetColumnWidth(7, 12);
	
	xls.SetCellText(0, 0, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, pMF->GetCurrentDepartmentName(), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA \x42\x1ED2I \x44\x1AF\x1EE0NG PH\x1EAAU THU\x1EACT, TH\x1EE6 THU\x1EACT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, 4098, true);

	xls.SetCellText(0, 6, _T("S\x1ED1 TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 6, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 6, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 6, _T("N\x103m sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 6, _T("SH, s\x1ED1 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 0, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 1, _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 6, _T("T\xEAn PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 6, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 6, _T("S\x1ED1 ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(8, 6, _T("Người thực hiện"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 0, 7);
	xls.SetMerge(4, 4, 0, 7);
	xls.SetMerge(0, 0, 5, 7);
	xls.SetMerge(1, 1, 5, 7);
	
	//Detail
	nRow = 7;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(2, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(3, nRow, rs.GetValue(_T("yob")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(4, nRow, rs.GetValue(_T("extra_info")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(5, nRow, rs.GetValue(_T("operation_name")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(6, nRow, rs.GetValue(_T("qty")), FMT_TEXT|FMT_WRAPING);
        
		rs.GetValue(_T("amount"), nAmount);
		nTotalAmount += nAmount;
		xls.SetCellText(7, nRow, double2str(nAmount), FMT_NUMBER1);
        xls.SetCellText(8, nRow, rs.GetValue(_T("nguoith")),
                        FMT_TEXT | FMT_WRAPING);
		nRow++;
		rs.MoveNext();
	}
	
	if (nTotalAmount > 0)
	{
		xls.SetCellMergedColumns(0, nRow, 7);
		xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		xls.SetCellText(7, nRow, double2str(nTotalAmount), FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BOIDUONGPTTT.xls"));
// 	if(m_bInsurance)
// 		xls.Save(_T("Exports\\BOIDUONGPTTT BH.xls"));
// 	if(m_bService)
// 		xls.Save(_T("Exports\\BOIDUONGPTTT DV.xls"));
// 	if(m_bPolicy)
// 		xls.Save(_T("Exports\\BOIDUONGPTTT QUAN.xls"));
	
} 
void CEMOperationList::OnInsuranceSelect(){
	
}
void CEMOperationList::OnServiceSelect(){
	
}
void CEMOperationList::OnPolicySelect(){
	
}
void CEMOperationList::OnAllSelect(){

}
void CEMOperationList::OnHitechSelect(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
int CEMOperationList::OnAddEMOperationList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMOperationList::OnEditEMOperationList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMOperationList::OnDeleteEMOperationList(){
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
 		OnCancelEMOperationList();
 	}
	return 0;
}
int CEMOperationList::OnSaveEMOperationList(){
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
 		//OnEMOperationListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMOperationList::OnCancelEMOperationList(){
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
int CEMOperationList::OnEMOperationListListLoadData(){
	return 0;
}
CString CEMOperationList::GetQuerySring(){
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL,szWhere;
	szWhere.AppendFormat(_T(" AND hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" and tt.ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" and tt.ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" and tt.ho_type in('P', 'D') "));
	else if (m_nAll == 0)
		szWhere.AppendFormat(_T(""));
	if(!m_szDeptKey.IsEmpty())
	szWhere.AppendFormat(_T(" and (ho_pdeptid ='%s' OR (ho_deptid = 'C1.1' AND ho_roomid = '52'))"),m_szDeptKey);
	if(m_bHitech)
		szWhere.AppendFormat(_T(" AND ho_hitech = 'Y'"));
	
	szSQL.Format(_T(" SELECT * FROM ( SELECT ") \
		_T(" ho_docno AS doc_no,") \
		_T(" get_patientname(ho_docno) AS patient_name,") \
		_T(" extract(YEAR FROM hp_birthdate) AS yob,") \
		_T(" CASE WHEN tt.ho_type not in ('I','C') and hd_rank > 0 THEN (select ss_vndesc from sys_sel where ss_id = 'hms_rank' and ss_code = hd_rank)||hp_workplace ") \
		_T(" ELSE hd_cardno ") \
		_T(" END extra_info, ") \
		_T(" hfl_name AS operation_name,") \
		_T(" ho_qty AS qty, case when ho_practitioner is not null then get_username(ho_practitioner) else get_username(ho_doctor) end as nguoith, ") \
		_T("    CASE") \
		_T("       WHEN hfe_diffcost > 0") \
		_T("       THEN hfe_diffcost") \
		_T("       WHEN hfe_inspaid <= 0") \
		_T("       AND hfe_discount <= 0") \
		_T("       THEN hfe_patdebt + hfe_patpaid") \
		_T("       ELSE 0") \
		_T("     END AS amount") \
		_T(" FROM hms_operation") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON ( hd_docno = ho_docno )") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON ( hd_patientno = hp_patientno )") \
		_T(" LEFT JOIN hms_object tt") \
		_T(" ON (ho_id=hd_object)") \
		_T(" LEFT JOIN hms_fee") \
		_T(" ON ( hfe_docno  = ho_docno") \
		_T(" AND hfe_orderid = ho_idx )") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON ( ho_itemid   = hfl_feeid )") \
		_T(" WHERE ho_payment = 'P' %s") \
		_T(" ORDER BY hfe_date, ho_docno ) tbl WHERE amount > 0"), szWhere);
	return szSQL;
}
CString CEMOperationList::GetNameUser(CString UserName, CString LastName ){
	CString szValue,tmpStr;
	int nIndex=0;
	bool flag= true;
	CString szFind;
	szFind=_T(" ");
	//_msg(_T("%s"),UserName);
	if(UserName.GetLength() >0)
	{
		for(int i=1;i < UserName.GetLength();i++)
		{	
			tmpStr=UserName.Right(i);
		//	_msg(_T("%s"),tmpStr);
			if(tmpStr.Find(szFind) == 1 && flag== true && i>1)
			{
				nIndex=i;
				flag=false;
			//	_msg(_T("%d %d"),i,flag);
			}
		}
	}
	if(nIndex >0)
	{
		szValue=UserName.Right(nIndex-1);
	}
	//_msg(_T("em day roi :%s"),szValue);
	return szValue;
	

}
CString CEMOperationList::GetItemAbbreviation(CString szItemName, CString szExtraWord)
{
	CStringArray arr;
	CString szTemp;
	CString szValue;
	int nIndex = 0;
	szValue.Empty();

	for (int i = 0; i < szItemName.GetLength(); i++)
	{
		if (szItemName[i] == _T(' '))
		{
			szTemp = szItemName.Mid(nIndex, i - nIndex);
			arr.Add(szTemp);
			nIndex = i + 1;
		}
	}

	if (szItemName.GetLength() > 0)
	{
		szTemp = szItemName.Mid(nIndex, szItemName.GetLength() - nIndex);
		arr.Add(szTemp);
	}

	szTemp.Empty();
	LPTSTR str = new TCHAR[1];

	for (int i = 0; i < arr.GetSize(); i++)
	{
		szTemp = arr[i];

		if (szTemp.Left(1) != _T("\x110") && szTemp.Left(1) != _T("\x111"))
		{
			UnMarkString(szTemp.Left(1), str);
			CString tmpStr = CString(str);
			szValue.AppendFormat(_T("%s"), tmpStr.Left(1));
		}
		else
			szValue.AppendFormat(_T("%s"), szTemp.Left(1));
	}

	delete[] str;

	if (szExtraWord.IsEmpty())
		return szValue;
	else
		return szValue + _T(" ") + szExtraWord;
}