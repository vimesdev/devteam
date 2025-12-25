#include "stdafx.h"
#include "BCDANHSACHBNQNDATHANHTOAN.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCDANHSACHBNQNDATHANHTOAN* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDANHSACHBNQNDATHANHTOAN *)pWnd)->OnToDateCheckValue();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CBCDANHSACHBNQNDATHANHTOAN*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCDANHSACHBNQNDATHANHTOAN*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCDANHSACHBNQNDATHANHTOAN*)pWnd)->OnOutPatientSelect();
}
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CBCDANHSACHBNQNDATHANHTOAN *pVw = (CBCDANHSACHBNQNDATHANHTOAN *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCDANHSACHBNQNDATHANHTOAN *pVw = (CBCDANHSACHBNQNDATHANHTOAN *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddBCDANHSACHBNQNDATHANHTOANFnc(CWnd *pWnd){
	 return ((CBCDANHSACHBNQNDATHANHTOAN*)pWnd)->OnAddBCDANHSACHBNQNDATHANHTOAN();
} 
static int _OnEditBCDANHSACHBNQNDATHANHTOANFnc(CWnd *pWnd){
	 return ((CBCDANHSACHBNQNDATHANHTOAN*)pWnd)->OnEditBCDANHSACHBNQNDATHANHTOAN();
} 
static int _OnDeleteBCDANHSACHBNQNDATHANHTOANFnc(CWnd *pWnd){
	 return ((CBCDANHSACHBNQNDATHANHTOAN*)pWnd)->OnDeleteBCDANHSACHBNQNDATHANHTOAN();
} 
static int _OnSaveBCDANHSACHBNQNDATHANHTOANFnc(CWnd *pWnd){
	 return ((CBCDANHSACHBNQNDATHANHTOAN*)pWnd)->OnSaveBCDANHSACHBNQNDATHANHTOAN();
} 
static int _OnCancelBCDANHSACHBNQNDATHANHTOANFnc(CWnd *pWnd){
	 return ((CBCDANHSACHBNQNDATHANHTOAN*)pWnd)->OnCancelBCDANHSACHBNQNDATHANHTOAN();
} 
CBCDANHSACHBNQNDATHANHTOAN::CBCDANHSACHBNQNDATHANHTOAN()
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCDANHSACHBNQNDATHANHTOAN::~CBCDANHSACHBNQNDATHANHTOAN(){
}
void CBCDANHSACHBNQNDATHANHTOAN::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 30, 300, 55);
	m_wndPeriodReport.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndAll.Create(this, _T("All"), 10, 95, 90, 120);
	m_wndInPatient.Create(this, _T("InPatient"), 95, 95, 175, 120);
	m_wndOutPatient.Create(this, _T("OutPatient"), 180, 95, 260, 120);
	//m_wndPreview.Create(this, _T("&Preview"), 265, 95, 345, 120);
	m_wndExport.Create(this, _T("&Export"), 350, 95, 430, 120);

}
void CBCDANHSACHBNQNDATHANHTOAN::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CBCDANHSACHBNQNDATHANHTOAN::OnSetWindowEvents(){
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
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
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
void CBCDANHSACHBNQNDATHANHTOAN::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBCDANHSACHBNQNDATHANHTOAN::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCDANHSACHBNQNDATHANHTOAN::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCDANHSACHBNQNDATHANHTOAN::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CBCDANHSACHBNQNDATHANHTOAN::SetMode(int nMode){
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
/*void CBCDANHSACHBNQNDATHANHTOAN::OnYearChange(){
	
} */
/*void CBCDANHSACHBNQNDATHANHTOAN::OnYearSetfocus(){
	
} */
/*void CBCDANHSACHBNQNDATHANHTOAN::OnYearKillfocus(){
	
} */
int CBCDANHSACHBNQNDATHANHTOAN::OnYearCheckValue(){
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
void CBCDANHSACHBNQNDATHANHTOAN::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCDANHSACHBNQNDATHANHTOAN::OnPeriodReportSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szPeriodReportKey);

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
/*void CBCDANHSACHBNQNDATHANHTOAN::OnPeriodReportSetfocus(){
	
}*/
/*void CBCDANHSACHBNQNDATHANHTOAN::OnPeriodReportKillfocus(){
	
}*/
long CBCDANHSACHBNQNDATHANHTOAN::OnPeriodReportLoadData(){
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
/*void CBCDANHSACHBNQNDATHANHTOAN::OnPeriodReportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CBCDANHSACHBNQNDATHANHTOAN::OnFromDateChange(){
	
} */
/*void CBCDANHSACHBNQNDATHANHTOAN::OnFromDateSetfocus(){
	
} */
/*void CBCDANHSACHBNQNDATHANHTOAN::OnFromDateKillfocus(){
	
} */
int CBCDANHSACHBNQNDATHANHTOAN::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCDANHSACHBNQNDATHANHTOAN::OnToDateChange(){
	
} */
/*void CBCDANHSACHBNQNDATHANHTOAN::OnToDateSetfocus(){
	
} */
/*void CBCDANHSACHBNQNDATHANHTOAN::OnToDateKillfocus(){
	
} */
int CBCDANHSACHBNQNDATHANHTOAN::OnToDateCheckValue(){
	return 0;
} 
void CBCDANHSACHBNQNDATHANHTOAN::OnAllSelect(){
	
}
void CBCDANHSACHBNQNDATHANHTOAN::OnInPatientSelect(){
	
}
void CBCDANHSACHBNQNDATHANHTOAN::OnOutPatientSelect(){
	
}
void CBCDANHSACHBNQNDATHANHTOAN::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCDANHSACHBNQNDATHANHTOAN::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Column Width
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 14);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 22);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6, 5);
	xls.SetColumnWidth(7, 17);
	xls.SetColumnWidth(8, 25);
	xls.SetColumnWidth(9, 45);
	xls.SetColumnWidth(10, 20);
	xls.SetColumnWidth(11, 25);
	xls.SetColumnWidth(12, 45);
	xls.SetColumnWidth(13, 20);

	int nCol = 0;
	int nRow = 0;	

	//Report Header
	nRow++;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellText(nCol, nRow, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER, true, 11);
	nRow++;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellText(nCol, nRow, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER, true, 11);
	nRow++;
	xls.SetCellMergedColumns(nCol, nRow, 14);
	xls.SetCellText(nCol, nRow, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N TH\x1EBA QN"), FMT_TEXT | FMT_CENTER, true, 14);
	nRow++;
	xls.SetCellMergedColumns(nCol, nRow, 14);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	nRow += 2;
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 1, nRow, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 2, nRow, _T("S\x1ED1 phi\x1EBFu kh\xE1m"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 3, nRow, _T("Ng\xE0y kh\xE1m"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 4, nRow, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 5, nRow, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 6, nRow, _T("Gi\x1EDBi"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 7, nRow, _T("Đơn vị công tác"), FMT_TEXT |FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 8, nRow, _T("S\x1ED1 th\x1EBB \x42HYT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 9, nRow, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER, true, 10);	
	xls.SetCellText(nCol + 10, nRow, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 11, nRow, _T("\x110\xFAng tuy\x1EBFn"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 12, nRow, _T("N\x1A1i \x63huy\x1EC3n"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 13, nRow, _T("T\x1ED5ng \x63hi ph\xED"), FMT_TEXT | FMT_CENTER, true, 10);

	//SQL command
	BeginWaitCursor();

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	_fmsg(_T("%s"), szSQL);

	//Detail section
	int nIndex = 1;
	//BeginWaitCursor();
	nRow++;
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("doc_no"),tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("admit_date"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("end_date"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_DATE | FMT_CENTER);

		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pwork"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT );

		rs.GetValue(_T("carrdno"), tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pobject"), tmpStr);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dungtuyen"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("transplace"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("total_cost"), tmpStr);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_NUMBER1);

		nRow++;
		rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANH SACH BENH NHAN QN DA THANH TOAN.xls"));
} 
int CBCDANHSACHBNQNDATHANHTOAN::OnAddBCDANHSACHBNQNDATHANHTOAN(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCDANHSACHBNQNDATHANHTOAN::OnEditBCDANHSACHBNQNDATHANHTOAN(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCDANHSACHBNQNDATHANHTOAN::OnDeleteBCDANHSACHBNQNDATHANHTOAN(){
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
 		OnCancelBCDANHSACHBNQNDATHANHTOAN();
 	}
	return 0;
}
int CBCDANHSACHBNQNDATHANHTOAN::OnSaveBCDANHSACHBNQNDATHANHTOAN(){
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
 		//OnBCDANHSACHBNQNDATHANHTOANListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCDANHSACHBNQNDATHANHTOAN::OnCancelBCDANHSACHBNQNDATHANHTOAN(){
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
int CBCDANHSACHBNQNDATHANHTOAN::OnBCDANHSACHBNQNDATHANHTOANListLoadData(){
	return 0;
}
CString CBCDANHSACHBNQNDATHANHTOAN::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString  szSQL, szWhere;

	if(m_nInPatient == 0)
		szWhere.Format(_T("   AND hd_isinpatient = 'Y'"));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("   AND hd_isinpatient = 'N'"));

		szSQL.Format(_T(" SELECT *") \
		_T(" FROM") \
		_T("   (SELECT hd_docno AS doc_no,") \
		_T("     CASE") \
		_T("       WHEN hfe_class IN ('A', 'I')") \
		_T("       THEN hcr_admitdate") \
		_T("       ELSE hd_admitdate") \
		_T("     END AS admit_date,") \
		_T("     CASE") \
		_T("       WHEN hfe_class IN ('A', 'I')") \
		_T("       THEN hcr_dischargedate") \
		_T("       ELSE hd_enddate") \
		_T("     END                       AS end_date,") \
		_T("     get_patientname(hd_docno) AS patient_name,") \
		_T("     hms_getagebydoc(hd_docno) AS age,") \
		_T("     hms_getsex(hd_docno)      AS sex,") \
		_T("     hp_workplace              AS pwork,") \
		_T("     hd_cardno                                       AS carrdno,") \
		_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("     get_objectname(hd_object)                       AS pobject,") \
		_T("     CASE") \
		_T("       WHEN hd_insline = 'N'") \
		_T("       THEN 'X'") \
		_T("     END           AS dungtuyen,") \
		_T("     hd_transplace AS transplace,") \
		_T("     hfe_amount total_cost,") \
		_T("     hfe_date") \
		_T("   FROM hms_fee_invoice") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON ( hcr_docno = hfe_docno )") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hd_docno = hfe_docno )") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON ( hd_patientno = hp_patientno)") \
		_T("   WHERE hcr_status  = 'T'") \
		_T("   AND hfe_date BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND NVL(hd_outpatient, 'N') <> 'Y'") \
		_T("   AND SUBSTR(hd_cardno, 1, 2)  = 'QN' %s") \
		_T("   UNION ALL") \
		_T("   SELECT hd_docno AS docno,") \
		_T("     CASE") \
		_T("       WHEN hfe_class IN ('A', 'I')") \
		_T("       THEN hcr_admitdate") \
		_T("       ELSE hd_admitdate") \
		_T("     END AS admit_date,") \
		_T("     CASE") \
		_T("       WHEN hfe_class IN ('A', 'I')") \
		_T("       THEN hcr_dischargedate") \
		_T("       ELSE hd_enddate") \
		_T("     END                       AS end_date,") \
		_T("     get_patientname(hd_docno) AS patient_name,") \
		_T("     hms_getagebydoc(hd_docno) AS age,") \
		_T("     hms_getsex(hd_docno)      AS sex,") \
		_T("     hp_workplace              AS pwork,") \
		_T("     hd_cardno                                       AS carrdno,") \
		_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("     get_objectname(hd_object)                       AS pobject,") \
		_T("     CASE") \
		_T("       WHEN hd_insline = 'Y'") \
		_T("       THEN 'X'") \
		_T("     END           AS dungtuyen,") \
		_T("     hd_transplace AS transplace,") \
		_T("     hfe_amount total_cost,") \
		_T("     hfe_date") \
		_T("   FROM hms_fee_invoice") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON ( hcr_docno = hfe_docno )") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON (hcr_docno     = htr_docno") \
		_T("   AND htr_treattime = hfe_treattime)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hd_docno = hfe_docno )") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON ( hd_patientno = hp_patientno)") \
		_T("   WHERE hcr_status  = 'T'") \
		_T("   AND hfe_date BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND NVL(hd_outpatient, 'N') = 'Y'") \
		_T("   AND SUBSTR(hd_cardno, 1, 2) = 'QN' %s") \
		_T("   )") \
		_T(" ORDER BY hfe_date"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}