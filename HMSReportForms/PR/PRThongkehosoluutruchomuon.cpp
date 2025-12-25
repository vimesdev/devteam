#include "stdafx.h"
#include "PRThongkehosoluutruchomuon.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPRThongkehosoluutruchomuon *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPRThongkehosoluutruchomuon* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CPRThongkehosoluutruchomuon *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPRThongkehosoluutruchomuon *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPRThongkehosoluutruchomuon *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPRThongkehosoluutruchomuon* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPRThongkehosoluutruchomuon *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPRThongkehosoluutruchomuon *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CPRThongkehosoluutruchomuon *pVw = (CPRThongkehosoluutruchomuon *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPRThongkehosoluutruchomuon *pVw = (CPRThongkehosoluutruchomuon *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPRThongkehosoluutruchomuonFnc(CWnd *pWnd){
	 return ((CPRThongkehosoluutruchomuon*)pWnd)->OnAddPRThongkehosoluutruchomuon();
} 
static int _OnEditPRThongkehosoluutruchomuonFnc(CWnd *pWnd){
	 return ((CPRThongkehosoluutruchomuon*)pWnd)->OnEditPRThongkehosoluutruchomuon();
} 
static int _OnDeletePRThongkehosoluutruchomuonFnc(CWnd *pWnd){
	 return ((CPRThongkehosoluutruchomuon*)pWnd)->OnDeletePRThongkehosoluutruchomuon();
} 
static int _OnSavePRThongkehosoluutruchomuonFnc(CWnd *pWnd){
	 return ((CPRThongkehosoluutruchomuon*)pWnd)->OnSavePRThongkehosoluutruchomuon();
} 
static int _OnCancelPRThongkehosoluutruchomuonFnc(CWnd *pWnd){
	 return ((CPRThongkehosoluutruchomuon*)pWnd)->OnCancelPRThongkehosoluutruchomuon();
} 
CPRThongkehosoluutruchomuon::CPRThongkehosoluutruchomuon(CWnd* pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CPRThongkehosoluutruchomuon::~CPRThongkehosoluutruchomuon(){
}
void CPRThongkehosoluutruchomuon::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 1, 1, 431, 121);
	m_wndYearLabel.Create(this, _T("Year"), 5, 25, 85, 50);
	m_wndYear.Create(this,90, 25, 210, 50); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 25, 300, 50);
	m_wndPeriodReport.Create(this,305, 25, 425, 50); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 55, 85, 80);
	m_wndFromDate.Create(this,90, 55, 210, 80); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 55, 300, 80);
	m_wndToDate.Create(this,305, 55, 425, 80); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 89, 85, 114);
	m_wndDepartment.Create(this,90, 89, 425, 114); 
	//m_wndPreview.Create(this, _T("&Preview"), 220, 133, 320, 158);
	m_wndExport.Create(this, _T("&Export"), 325, 133, 425, 158);

}
void CPRThongkehosoluutruchomuon::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(35);
	//m_wndYear.SetCheckValue(true);
	//m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CPRThongkehosoluutruchomuon::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);

}
void CPRThongkehosoluutruchomuon::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CPRThongkehosoluutruchomuon::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPRThongkehosoluutruchomuon::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPRThongkehosoluutruchomuon::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CPRThongkehosoluutruchomuon::SetMode(int nMode){
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
/*void CPRThongkehosoluutruchomuon::OnYearChange(){
	
} */
/*void CPRThongkehosoluutruchomuon::OnYearSetfocus(){
	
} */
/*void CPRThongkehosoluutruchomuon::OnYearKillfocus(){
	
} */
int CPRThongkehosoluutruchomuon::OnYearCheckValue(){
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
void CPRThongkehosoluutruchomuon::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPRThongkehosoluutruchomuon::OnPeriodReportSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CDate dte;
	CString tmpStr;
	int nMonth = ToInt(m_szPeriodReportKey);
	int nYear = m_nYear;
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/1/1"), nYear);
		tmpStr.Format(_T("%.4d/3/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59"), nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/4/1"), nYear);
		tmpStr.Format(_T("%.4d/6/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/7/1"), nYear);
		tmpStr.Format(_T("%.4d/9/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/1"), nYear);
		tmpStr.Format(_T("%.4d/10/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/1/1"), nYear);
		tmpStr.Format(_T("%.4d/12/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);
}
/*void CPRThongkehosoluutruchomuon::OnPeriodReportSetfocus(){
	
}*/
/*void CPRThongkehosoluutruchomuon::OnPeriodReportKillfocus(){
	
}*/
long CPRThongkehosoluutruchomuon::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%s "), m_szPeriodReportKey);
	}
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
/*void CPRThongkehosoluutruchomuon::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPRThongkehosoluutruchomuon::OnFromDateChange(){
	
} */
/*void CPRThongkehosoluutruchomuon::OnFromDateSetfocus(){
	
} */
/*void CPRThongkehosoluutruchomuon::OnFromDateKillfocus(){
	
} */
int CPRThongkehosoluutruchomuon::OnFromDateCheckValue(){
	return 0;
} 
/*void CPRThongkehosoluutruchomuon::OnToDateChange(){
	
} */
/*void CPRThongkehosoluutruchomuon::OnToDateSetfocus(){
	
} */
/*void CPRThongkehosoluutruchomuon::OnToDateKillfocus(){
	
} */
int CPRThongkehosoluutruchomuon::OnToDateCheckValue(){
	return 0;
} 
void CPRThongkehosoluutruchomuon::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPRThongkehosoluutruchomuon::OnDepartmentSelendok(){
	 
}
/*void CPRThongkehosoluutruchomuon::OnDepartmentSetfocus(){
	
}*/
/*void CPRThongkehosoluutruchomuon::OnDepartmentKillfocus(){
	
}*/
long CPRThongkehosoluutruchomuon::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept order by id"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPRThongkehosoluutruchomuon::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPRThongkehosoluutruchomuon::OnPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPRThongkehosoluutruchomuon::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 25);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 12);	xls.SetColumnWidth(4, 12);	xls.SetColumnWidth(5, 25);	xls.SetColumnWidth(6, 20);	xls.SetColumnWidth(7, 16);	xls.SetColumnWidth(8, 16);	xls.SetColumnWidth(9, 16);	xls.SetColumnWidth(10, 20);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("Th\x1ED1ng k\xEA h\x1ED3 s\x1A1 l\x1B0u tr\x1EEF \x63ho m\x1B0\x1EE3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("H\x1ECD v\xE0 t\xEAn \x62\x1EC7nh nh\xE2n "), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("S\x1ED1 \x62\x1EC7nh \xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("S\x1ED1 l\x1B0u tr\x1EEF"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("\x43h\x1EA9n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Ng\x1B0\x1EDDi m\x1B0\x1EE3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("Kho\x61 m\x1B0\x1EE3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("Ng\xE0y m\x1B0\x1EE3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("Ng\xE0y tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("L\xFD \x64o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 10);	xls.SetMerge(3, 3, 0, 10);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("khoa"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("idx"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("chuandoan"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("nguoimuon"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("khoamuon"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngaymuon"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngaytra"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("lydo"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\PRThongkehosoluutruchomuon.xls"));
} 
int CPRThongkehosoluutruchomuon::OnAddPRThongkehosoluutruchomuon(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPRThongkehosoluutruchomuon::OnEditPRThongkehosoluutruchomuon(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPRThongkehosoluutruchomuon::OnDeletePRThongkehosoluutruchomuon(){
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
 		OnCancelPRThongkehosoluutruchomuon();
 	}
	return 0;
}
int CPRThongkehosoluutruchomuon::OnSavePRThongkehosoluutruchomuon(){
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
 		//OnPRThongkehosoluutruchomuonListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPRThongkehosoluutruchomuon::OnCancelPRThongkehosoluutruchomuon(){
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
int CPRThongkehosoluutruchomuon::OnPRThongkehosoluutruchomuonListLoadData(){
	return 0;
}
CString CPRThongkehosoluutruchomuon::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;

	if(!m_szDepartmentKey.IsEmpty())
		{
			szWhere.Format(_T("AND hrb_deptid = '%s'"), m_szDepartmentKey);
		}

	szSQL.Format(_T(" SELECT ") \
		_T(" get_patientname(hpr_docno) AS pname,") \
		_T(" hpr_enddeptid AS khoa,") \
		_T(" hpr_docno AS docno,") \
		_T(" hpr_docrec AS idx,") \
		_T(" htr_maindisease AS chuandoan,") \
		_T(" hrb_borrower AS nguoimuon,") \
		_T(" hrb_deptid AS khoamuon,") \
		_T(" hrb_withdrawdate AS ngaymuon,") \
		_T(" hrb_returndate AS ngaytra,") \
		_T(" hrb_reason AS lydo") \
		_T(" FROM hms_record_borrow") \
		_T(" LEFT JOIN hms_patient_record") \
		_T(" ON(hpr_idx = hrb_refidx)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(hpr_enddeptid = htr_deptid AND hpr_docno = htr_docno)") \
		_T(" WHERE hrb_withdrawdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}