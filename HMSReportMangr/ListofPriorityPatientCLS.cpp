#include "ListofPriorityPatientCLS.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CListofPriorityPatientCLS *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CListofPriorityPatientCLS* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CListofPriorityPatientCLS *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CListofPriorityPatientCLS *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CListofPriorityPatientCLS *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CListofPriorityPatientCLS* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CListofPriorityPatientCLS *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CListofPriorityPatientCLS *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CListofPriorityPatientCLS *pVw = (CListofPriorityPatientCLS *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CListofPriorityPatientCLS *pVw = (CListofPriorityPatientCLS *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddListofPriorityPatientCLSFnc(CWnd *pWnd){
	 return ((CListofPriorityPatientCLS*)pWnd)->OnAddListofPriorityPatientCLS();
} 
static int _OnEditListofPriorityPatientCLSFnc(CWnd *pWnd){
	 return ((CListofPriorityPatientCLS*)pWnd)->OnEditListofPriorityPatientCLS();
} 
static int _OnDeleteListofPriorityPatientCLSFnc(CWnd *pWnd){
	 return ((CListofPriorityPatientCLS*)pWnd)->OnDeleteListofPriorityPatientCLS();
} 
static int _OnSaveListofPriorityPatientCLSFnc(CWnd *pWnd){
	 return ((CListofPriorityPatientCLS*)pWnd)->OnSaveListofPriorityPatientCLS();
} 
static int _OnCancelListofPriorityPatientCLSFnc(CWnd *pWnd){
	 return ((CListofPriorityPatientCLS*)pWnd)->OnCancelListofPriorityPatientCLS();
} 
CListofPriorityPatientCLS::CListofPriorityPatientCLS(CWnd *pParent){
	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CListofPriorityPatientCLS::~CListofPriorityPatientCLS(){
}
void CListofPriorityPatientCLS::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 1, 1, 431, 116);
	m_wndYearLabel.Create(this, _T("Year"), 5, 25, 85, 50);
	m_wndYear.Create(this,90, 25, 210, 50); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 25, 300, 50);
	m_wndPeriodReport.Create(this,305, 25, 425, 50); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 55, 85, 80);
	m_wndFromDate.Create(this,90, 55, 210, 80); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 55, 300, 80);
	m_wndToDate.Create(this,305, 55, 425, 80); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 85, 85, 110);
	m_wndDepartment.Create(this,90, 85, 425, 110); 
	m_wndPreview.Create(this, _T("&Preview"), 221, 120, 321, 145);
	m_wndExport.Create(this, _T("&Export"), 326, 120, 426, 145);

}
void CListofPriorityPatientCLS::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(35);
	m_wndYear.SetCheckValue(true);
	m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 170);

}
void CListofPriorityPatientCLS::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
void CListofPriorityPatientCLS::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CListofPriorityPatientCLS::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CListofPriorityPatientCLS::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CListofPriorityPatientCLS::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CListofPriorityPatientCLS::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
/*void CListofPriorityPatientCLS::OnYearChange(){
	
} */
/*void CListofPriorityPatientCLS::OnYearSetfocus(){
	
} */
/*void CListofPriorityPatientCLS::OnYearKillfocus(){
	
} */
int CListofPriorityPatientCLS::OnYearCheckValue(){
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
void CListofPriorityPatientCLS::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CListofPriorityPatientCLS::OnPeriodReportSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CListofPriorityPatientCLS::OnPeriodReportSetfocus(){
	
}*/
/*void CListofPriorityPatientCLS::OnPeriodReportKillfocus(){
	
}*/
long CListofPriorityPatientCLS::OnPeriodReportLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szPeriodReportKey));
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
/*void CListofPriorityPatientCLS::OnPeriodReportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CListofPriorityPatientCLS::OnFromDateChange(){
	
} */
/*void CListofPriorityPatientCLS::OnFromDateSetfocus(){
	
} */
/*void CListofPriorityPatientCLS::OnFromDateKillfocus(){
	
} */
int CListofPriorityPatientCLS::OnFromDateCheckValue(){
	return 0;
} 
/*void CListofPriorityPatientCLS::OnToDateChange(){
	
} */
/*void CListofPriorityPatientCLS::OnToDateSetfocus(){
	
} */
/*void CListofPriorityPatientCLS::OnToDateKillfocus(){
	
} */
int CListofPriorityPatientCLS::OnToDateCheckValue(){
	return 0;
} 
void CListofPriorityPatientCLS::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CListofPriorityPatientCLS::OnDepartmentSelendok(){
	 
}
/*void CListofPriorityPatientCLS::OnDepartmentSetfocus(){
	
}*/
/*void CListofPriorityPatientCLS::OnDepartmentKillfocus(){
	
}*/
long CListofPriorityPatientCLS::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1 = 1 AND sd_type = 'KB' ORDER BY id "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CListofPriorityPatientCLS::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CListofPriorityPatientCLS::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CListofPriorityPatientCLS::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	int nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 30);	xls.SetColumnWidth(2, 15);	xls.SetColumnWidth(3, 15);	xls.SetColumnWidth(4, 15);	xls.SetColumnWidth(5, 12);	xls.SetColumnWidth(6, 20);	xls.SetColumnWidth(7, 10);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N \x1AFU TI\xCAN L\xC0M \x43\x1EACN L\xC2M S\xC0NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("T\xEAn nh\xF3m \x78\xE9t nghi\x1EC7m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("Tr\x1EBB \x65m \x64\x1B0\x1EDBi \x36 tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Ph\x1EE5 n\x1EEF \x63\xF3 th\x61i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Ng\x1B0\x1EDDi gi\xE0 tr\xEAn \x37\x35 tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n \x111\x1EBFn kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("T\x1EF7 l\x1EC7 (%)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 7);	xls.SetMerge(3, 3, 0, 7);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_NUMBER1);		rs.GetValue(_T("groupname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("te6t"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("pncothai"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("ng75t"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("total"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("ptotal"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("tile"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT|FMT_RIGHT);		nRow++;		rs.MoveNext();	}
	EndWaitCursor();	xls.Save(_T("Exports\\danhsachbenhnhanuutienlamCLS.xls"));
} 
int CListofPriorityPatientCLS::OnAddListofPriorityPatientCLS(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CListofPriorityPatientCLS::OnEditListofPriorityPatientCLS(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CListofPriorityPatientCLS::OnDeleteListofPriorityPatientCLS(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelListofPriorityPatientCLS();
 	}
	return 0;
}
int CListofPriorityPatientCLS::OnSaveListofPriorityPatientCLS(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnListofPriorityPatientCLSListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CListofPriorityPatientCLS::OnCancelListofPriorityPatientCLS(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CListofPriorityPatientCLS::OnListofPriorityPatientCLSListLoadData(){
	return 0;
}
CString CListofPriorityPatientCLS::GetQueryString(){
	CString szWhere, szSQL;
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hpc_deptid = '%s' "), m_szDepartmentKey);
	}
// 	szSQL.Format(_T(" SELECT") \
// 		_T(" groupname,") \
// 		_T(" SUM(te6t) te6t,") \
// 		_T(" SUM(pncothai) pncothai,") \
// 		_T(" SUM(ng75t) ng75t,") \
// 		_T(" SUM(te6t + pncothai + ng75t) total,") \
// 		_T(" SUM(pcount) ptotal,") \
// 		_T(" (SUM(te6t + pncothai + ng75t)/SUM(pcount))*100 tile") \
// 		_T(" FROM") \
// 		_T(" (") \
// 		_T(" SELECT DISTINCT") \
// 		_T(" get_feegroupname(hpc_groupid) groupname,") \
// 		_T(" hpc_docno docno,") \
// 		_T(" hms_getage(hpc_orderdate, hp_birthdate) age,") \
// 		_T(" CASE WHEN getdaysbetween(hpc_orderdate, hp_birthdate)/365 <= 6 THEN 1 ELSE 0 END te6t,") \
// 		_T(" CASE WHEN hpc_deptid = 'C1.1' AND hpc_roomid = '1' AND getdaysbetween(hpc_orderdate, hp_birthdate)/365 > 6 THEN 1 ELSE 0 END pncothai,") \
// 		_T(" CASE WHEN getdaysbetween(hpc_orderdate, hp_birthdate)/365 >= 75 THEN 1 ELSE 0 END ng75t,") \
// 		_T(" 1 pcount") \
// 		_T(" FROM hms_pacsorder") \
// 		_T(" LEFT JOIN hms_patient ON(hp_patientno = hpc_patientno)") \
// 		_T(" LEFT JOIN hms_fee_list ON(hfl_groupid = hpc_groupid)") \
// 		_T(" WHERE hpc_status IN('S', 'P', 'T')") \
// 		_T(" AND hpc_orderdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
// 		_T(" %s)") \
// 		_T(" ") \
// 		_T(" GROUP BY groupname") \
// 		_T(" ORDER BY groupname"), m_szFromDate, m_szToDate, szWhere);

	szSQL.Format(_T(" SELECT ") \
		_T("   groupname,") \
		_T("   SUM(te6t) te6t,") \
		_T("   SUM(pncothai) pncothai,") \
		_T("   SUM(ng75t) ng75t,") \
		_T("   SUM(te6t + pncothai + ng75t) total,") \
		_T("   ptotal,") \
		_T("   round((SUM(te6t + pncothai + ng75t)/ptotal)*100, 2) tile") \
		_T(" FROM") \
		_T("   (") \
		_T("   SELECT") \
		_T("   get_feegroupname(groupid) groupname,") \
		_T("   deptid deptid,") \
		_T("     CASE") \
		_T("       WHEN getdaysbetween(orderdate, hp_birthdate)/365 <= 6") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END te6t,") \
		_T("     CASE") \
		_T("       WHEN deptid                                     = 'C1.1'") \
		_T("       AND roomid                                      = '1'") \
		_T("       AND getdaysbetween(orderdate, hp_birthdate)/365 > 6") \
		_T("       AND getdaysbetween(orderdate, hp_birthdate)/365 < 75") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END pncothai,") \
		_T("     CASE") \
		_T("       WHEN getdaysbetween(orderdate, hp_birthdate)/365 >= 75") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END ng75t") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" hpc_patientno patientno,") \
		_T(" hpc_groupid groupid,") \
		_T(" hpcl_itemid itemid,") \
		_T(" hpc_status status,") \
		_T(" hpc_orderdate orderdate,") \
		_T(" hpc_deptid deptid,") \
		_T(" hpc_roomid roomid") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid = hpc_orderid)") \
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" hpc_patientno patientno,") \
		_T(" hpc_groupid groupid,") \
		_T(" hpcl_itemid itemid,") \
		_T(" hpc_status status,") \
		_T(" hpc_orderdate orderdate,") \
		_T(" hpc_deptid deptid,") \
		_T(" hpc_roomid roomid") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpcl_orderid = hpc_orderid)") \
		_T(" ) ") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON(hp_patientno = patientno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_groupid = groupid AND hfl_feeid = itemid)") \
		_T("   WHERE status IN('S', 'P', 'T')") \
		_T("   AND hfl_subgroup = 'N'") \
		_T("   AND orderdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T("   AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND deptid = '%s'") \
		_T(" ) tbl") \
		_T(" LEFT JOIN ") \
		_T(" (") \
		_T(" SELECT") \
		_T(" depttotal,") \
		_T(" SUM(pcount) ptotal") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT he_deptid depttotal,") \
		_T(" he_docno docno,") \
		_T(" 1 pcount") \
		_T(" FROM hms_exam") \
		_T(" WHERE he_status <> 'O'") \
		_T(" AND he_examdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND he_deptid = '%s'") \
		_T(" )") \
		_T(" GROUP BY depttotal") \
		_T(" ) tbltotal ON(depttotal = deptid)") \
		_T(" GROUP BY groupname, ptotal") \
		_T(" ORDER BY groupname"), m_szFromDate, m_szToDate, m_szDepartmentKey, m_szFromDate, m_szToDate, m_szDepartmentKey);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}