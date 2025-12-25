#include "stdafx.h"
#include "FMFeeFoodList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMFeeFoodList *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFeeFoodList* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CFMFeeFoodList *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFeeFoodList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFeeFoodList *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFeeFoodList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMFeeFoodList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFeeFoodList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFMFeeFoodList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFMFeeFoodList *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMFeeFoodList *pVw = (CFMFeeFoodList *)pWnd;
	pVw->OnExportSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	((CFMFeeFoodList*)pWnd)->OnInsuranceSelect();
}
static void _OnPoliciesSelectFnc(CWnd *pWnd){
	((CFMFeeFoodList*)pWnd)->OnPoliciesSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	((CFMFeeFoodList*)pWnd)->OnServiceSelect();
}
static int _OnAddFMFeeFoodListFnc(CWnd *pWnd){
	 return ((CFMFeeFoodList*)pWnd)->OnAddFMFeeFoodList();
} 
static int _OnEditFMFeeFoodListFnc(CWnd *pWnd){
	 return ((CFMFeeFoodList*)pWnd)->OnEditFMFeeFoodList();
} 
static int _OnDeleteFMFeeFoodListFnc(CWnd *pWnd){
	 return ((CFMFeeFoodList*)pWnd)->OnDeleteFMFeeFoodList();
} 
static int _OnSaveFMFeeFoodListFnc(CWnd *pWnd){
	 return ((CFMFeeFoodList*)pWnd)->OnSaveFMFeeFoodList();
} 
static int _OnCancelFMFeeFoodListFnc(CWnd *pWnd){
	 return ((CFMFeeFoodList*)pWnd)->OnCancelFMFeeFoodList();
} 
CFMFeeFoodList::CFMFeeFoodList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMFeeFoodList::~CFMFeeFoodList(){
}
void CFMFeeFoodList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 155);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 30, 300, 55);
	m_wndPeriodReport.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 425, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 9, 120, 89, 145);
	m_wndDepartment.Create(this,94, 120, 424, 145); 
	m_wndExport.Create(this, _T("&Export"), 344, 160, 424, 185);
	m_wndInsurance.Create(this, _T("Insurance"), 9, 160, 109, 185);
	m_wndPolicies.Create(this, _T("Policies"), 219, 160, 319, 185);
	m_wndService.Create(this, _T("Service"), 114, 160, 214, 185);

}
void CFMFeeFoodList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CFMFeeFoodList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndPeriodReport.SetEvent(WE_SELENDOK, _OnPeriodReportSelendokFnc);
	//m_wndPeriodReport.SetEvent(WE_SETFOCUS, _OnPeriodReportSetfocusFnc);
	//m_wndPeriodReport.SetEvent(WE_KILLFOCUS, _OnPeriodReportKillfocusFnc);
	m_wndPeriodReport.SetEvent(WE_SELCHANGE, _OnPeriodReportSelectChangeFnc);
	m_wndPeriodReport.SetEvent(WE_LOADDATA, _OnPeriodReportLoadDataFnc);
	//m_wndPeriodReport.SetEvent(WE_ADDNEW, _OnPeriodReportAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndPolicies.SetEvent(WE_CLICK, _OnPoliciesSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
}
void CFMFeeFoodList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndPolicies.GetDlgCtrlID(), m_nPolicies);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);

}
void CFMFeeFoodList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMFeeFoodList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMFeeFoodList::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_nInsurance=0;
	m_nPolicies=1;
	m_nService=1;

}
int CFMFeeFoodList::SetMode(int nMode){
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
/*void CFMFeeFoodList::OnYearChange(){
	
} */
/*void CFMFeeFoodList::OnYearSetfocus(){
	
} */
/*void CFMFeeFoodList::OnYearKillfocus(){
	
} */
int CFMFeeFoodList::OnYearCheckValue(){
	return 0;
} 
void CFMFeeFoodList::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFeeFoodList::OnPeriodReportSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szPeriodReportKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);	
}
/*void CFMFeeFoodList::OnPeriodReportSetfocus(){
	
}*/
/*void CFMFeeFoodList::OnPeriodReportKillfocus(){
	
}*/
long CFMFeeFoodList::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szPeriodReportKey));
	};
	m_wndPeriodReport.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriodReport.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMFeeFoodList::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMFeeFoodList::OnFromDateChange(){
	
} */
/*void CFMFeeFoodList::OnFromDateSetfocus(){
	
} */
/*void CFMFeeFoodList::OnFromDateKillfocus(){
	
} */
int CFMFeeFoodList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMFeeFoodList::OnToDateChange(){
	
} */
/*void CFMFeeFoodList::OnToDateSetfocus(){
	
} */
/*void CFMFeeFoodList::OnToDateKillfocus(){
	
} */
int CFMFeeFoodList::OnToDateCheckValue(){
	return 0;
} 
void CFMFeeFoodList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFeeFoodList::OnObjectSelendok(){
	 
}
/*void CFMFeeFoodList::OnObjectSetfocus(){
	
}*/
/*void CFMFeeFoodList::OnObjectKillfocus(){
	
}*/
long CFMFeeFoodList::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY cast(ho_id as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMFeeFoodList::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMFeeFoodList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFeeFoodList::OnDepartmentSelendok(){
	 
}
/*void CFMFeeFoodList::OnDepartmentSetfocus(){
	
}*/
/*void CFMFeeFoodList::OnDepartmentKillfocus(){
	
}*/
long CFMFeeFoodList::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMFeeFoodList::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMFeeFoodList::OnInsuranceSelect(){

}
void CFMFeeFoodList::OnPoliciesSelect(){

}
void CFMFeeFoodList::OnServiceSelect(){

}
void CFMFeeFoodList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	double nTotal = 0;	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 6);	xls.SetColumnWidth(4, 10);	xls.SetColumnWidth(5, 15);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 10);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow+1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	tmpStr.Format(_T("\x110\x1EBFn %s"), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow+3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);	xls.SetCellText(0, 2, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N T\x1ED2N TI\x1EC0N \x102N"), FMT_TEXT | FMT_CENTER , true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(1, 4, _T("S\x1ED1 HS"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(2, 4, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(3, 4, _T("N\x103m sinh"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(4, 4, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(5, 4, _T("N\x1A1i l\xE0m vi\x1EC7\x63"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(6, 4, _T("S\x1ED1 \x42\x41"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(7, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(8, 4, _T("S\xE1ng"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(9, 4, _T("Tr\x1B0\x61"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(10, 4, _T("\x43hi\x1EC1u"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(11, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 11);	xls.SetMerge(3, 3, 0, 11);	nRow = 4;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_NUMBER1);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("patientname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("birthdate"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("recordno"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("rank"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("workplace"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("admitdept"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("nsang"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("ntrua"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("nchieu"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("price"), tmpStr);		nTotal += str2double(tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs.MoveNext();	}	if(nTotal > 0)		{			xls.SetCellText(nCol+2, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT, true);			xls.SetCellText(nCol+11, nRow, double2str(nTotal), FMT_NUMBER1, true);		}	EndWaitCursor();	xls.Save(_T("Exports\\DSbntontienan.xls"));
} 
int CFMFeeFoodList::OnAddFMFeeFoodList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMFeeFoodList::OnEditFMFeeFoodList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMFeeFoodList::OnDeleteFMFeeFoodList(){
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
 		OnCancelFMFeeFoodList();
 	}
	return 0;
}
int CFMFeeFoodList::OnSaveFMFeeFoodList(){
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
 		//OnFMFeeFoodListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMFeeFoodList::OnCancelFMFeeFoodList(){
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
int CFMFeeFoodList::OnFMFeeFoodListListLoadData(){
	return 0;
}
CString CFMFeeFoodList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere;
	
	if(!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T("  AND hd_object = %s"), m_szObjectKey);

	if (!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hcr_admitdept = '%s'"), m_szDepartmentKey);

	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('I','C')"));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('S') "));
	else if (m_nPolicies == 0)
		szWhere.AppendFormat(_T(" AND ho_type not in('I','C','S')"));

	szSQL.Format(_T(" SELECT docno,") \
		_T("   get_patientname(docno) AS patientName,") \
		_T("   SUM(nSang)             AS nSang,") \
		_T("   SUM(nTrua)             AS nTrua,") \
		_T("   SUM(nChieu)            AS nChieu,") \
		_T("   birthdate,") \
		_T("   recordno,") \
		_T("   admitdept,") \
		_T("   SUM((price*nSang)+(price*nTrua)+(price*nChieu)) AS price,") \
		_T("   rank,") \
		_T("   workplace") \
		_T(" FROM") \
		_T("   (SELECT hcr_docno AS docno,") \
		_T("     CASE") \
		_T("       WHEN hfol_type='S'") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS nSang,") \
		_T("     CASE") \
		_T("       WHEN hfol_type='T'") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END AS nTrua,") \
		_T("     CASE") \
		_T("       WHEN hfol_type='C'") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END                             AS nChieu,") \
		_T("     extract(YEAR FROM hp_birthdate) AS birthdate,") \
		_T("     hfol_unitprice                  AS price,") \
		_T("     hcr_recordno                    AS recordno,") \
		_T("     hcr_admitdept                   AS admitdept,") \
		_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id = 'hms_rank' AND ss_code = hp_rank") \
		_T("     )            AS rank,") \
		_T("     hp_workplace AS workplace") \
		_T("   FROM hms_clinical_record") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON (hd_docno = hcr_docno)") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON (hp_patientno = hd_patientno)") \
		_T("   LEFT JOIN hms_feefood") \
		_T("   ON (hfo_docno = hcr_docno)") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON (hfol_orderid = hfo_orderid)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(ho_id = hd_object)") \
		_T("   WHERE (hcr_dischargedate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   OR (hcr_admitdate        < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND hcr_status          <>'T'))") \
		_T("   AND hd_outpatient       <>'Y'") \
		_T("   AND hfol_status         <>'C'") \
		_T("   AND hfo_orderdate        < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   %s) tbl") \
		_T(" GROUP BY docno,") \
		_T("   birthdate,") \
		_T("   recordno,") \
		_T("   admitdept,") \
		_T("   rank,") \
		_T("   workplace") \
		_T(" ORDER BY docno"), m_szToDate, m_szToDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}