#include "stdafx.h"
#include "BCTHOIGIANTHUCHIENKYTHUAT.h"
#include "MainFrm.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTHOIGIANTHUCHIENKYTHUAT* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd)->OnToDateCheckValue();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CBCTHOIGIANTHUCHIENKYTHUAT*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCTHOIGIANTHUCHIENKYTHUAT*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCTHOIGIANTHUCHIENKYTHUAT*)pWnd)->OnOutPatientSelect();
}
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CBCTHOIGIANTHUCHIENKYTHUAT *pVw = (CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHOIGIANTHUCHIENKYTHUAT *pVw = (CBCTHOIGIANTHUCHIENKYTHUAT *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddCBCTHOIGIANTHUCHIENKYTHUATFnc(CWnd *pWnd){
	 return ((CBCTHOIGIANTHUCHIENKYTHUAT*)pWnd)->OnAddCBCTHOIGIANTHUCHIENKYTHUAT();
} 
static int _OnEditCBCTHOIGIANTHUCHIENKYTHUATFnc(CWnd *pWnd){
	 return ((CBCTHOIGIANTHUCHIENKYTHUAT*)pWnd)->OnEditCBCTHOIGIANTHUCHIENKYTHUAT();
} 
static int _OnDeleteCBCTHOIGIANTHUCHIENKYTHUATFnc(CWnd *pWnd){
	 return ((CBCTHOIGIANTHUCHIENKYTHUAT*)pWnd)->OnDeleteCBCTHOIGIANTHUCHIENKYTHUAT();
} 
static int _OnSaveCBCTHOIGIANTHUCHIENKYTHUATFnc(CWnd *pWnd){
	 return ((CBCTHOIGIANTHUCHIENKYTHUAT*)pWnd)->OnSaveCBCTHOIGIANTHUCHIENKYTHUAT();
} 
static int _OnCancelCBCTHOIGIANTHUCHIENKYTHUATFnc(CWnd *pWnd){
	 return ((CBCTHOIGIANTHUCHIENKYTHUAT*)pWnd)->OnCancelCBCTHOIGIANTHUCHIENKYTHUAT();
} 
CBCTHOIGIANTHUCHIENKYTHUAT::CBCTHOIGIANTHUCHIENKYTHUAT()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHOIGIANTHUCHIENKYTHUAT::~CBCTHOIGIANTHUCHIENKYTHUAT()
{
}
void CBCTHOIGIANTHUCHIENKYTHUAT::OnCreateComponents(){
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
void CBCTHOIGIANTHUCHIENKYTHUAT::OnInitializeComponents(){
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
void CBCTHOIGIANTHUCHIENKYTHUAT::OnSetWindowEvents(){
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
void CBCTHOIGIANTHUCHIENKYTHUAT::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBCTHOIGIANTHUCHIENKYTHUAT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHOIGIANTHUCHIENKYTHUAT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHOIGIANTHUCHIENKYTHUAT::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CBCTHOIGIANTHUCHIENKYTHUAT::SetMode(int nMode){
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
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnYearChange(){
	
} */
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnYearSetfocus(){
	
} */
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnYearKillfocus(){
	
} */
int CBCTHOIGIANTHUCHIENKYTHUAT::OnYearCheckValue(){
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
void CBCTHOIGIANTHUCHIENKYTHUAT::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHOIGIANTHUCHIENKYTHUAT::OnPeriodReportSelendok(){
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
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnPeriodReportSetfocus(){
	
}*/
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnPeriodReportKillfocus(){
	
}*/
long CBCTHOIGIANTHUCHIENKYTHUAT::OnPeriodReportLoadData(){
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
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnPeriodReportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnFromDateChange(){
	
} */
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnFromDateSetfocus(){
	
} */
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnFromDateKillfocus(){
	
} */
int CBCTHOIGIANTHUCHIENKYTHUAT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnToDateChange(){
	
} */
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnToDateSetfocus(){
	
} */
/*void CBCTHOIGIANTHUCHIENKYTHUAT::OnToDateKillfocus(){
	
} */
int CBCTHOIGIANTHUCHIENKYTHUAT::OnToDateCheckValue(){
	return 0;
} 
void CBCTHOIGIANTHUCHIENKYTHUAT::OnAllSelect(){
	
}
void CBCTHOIGIANTHUCHIENKYTHUAT::OnInPatientSelect(){
	
}
void CBCTHOIGIANTHUCHIENKYTHUAT::OnOutPatientSelect(){
	
}
void CBCTHOIGIANTHUCHIENKYTHUAT::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHOIGIANTHUCHIENKYTHUAT::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\THONGKE_THOIGIAN_THUCHIEN_KYTHUAT.xls"))) AfxMessageBox(_T("Load fail!"));	
	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 11;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dept"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("objectname"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tg_tiepdon"), tmpStr);				
		xls.SetCellText(nCol+5,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		

		rs.GetValue(_T("tg_kham"), tmpStr);		
		xls.SetCellText(nCol+6,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);	
		

		rs.GetValue(_T("tg_tich_shmau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(7, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tra_shmau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(8, nRow, tmpStr,FMT_TEXT);		
		

		rs.GetValue(_T("tg_tich_khimau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(9, nRow, tmpStr,FMT_TEXT);	
		

		rs.GetValue(_T("tg_tra_khimau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(10, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tich_nuoctieu"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(11, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tra_nuoctieu"), tmpStr);	
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(12, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tich_dichcd"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(13, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tra_dichcd"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(14, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tich_tuyengiap"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(15, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tra_tuyengiap"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(16, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tich_ctmau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(17, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tra_ctmau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(18, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tich_dongmau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(19, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tra_dongmau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(20, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tich_xquang"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(21, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tra_xquang"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(22, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tich_citi"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(23, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tra_citi"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(24, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tich_mri"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(25, nRow, tmpStr,FMT_TEXT);		
		
		rs.GetValue(_T("tg_tra_mri"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(26, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tich_sieuam"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(27, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tra_sieuam"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(28, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tich_visinh"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(29, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tra_visinh"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(30, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tich_md_edta"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(31, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tra_md_edta"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(32, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tich_md_serum"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(33, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tra_md_serum"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(34, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tich_md_herparin"), tmpStr);	
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(35, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tra_md_herparin"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(36, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tich_shpt"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(37, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tra_shpt"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(38, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tich_nhommau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(39, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tra_nhommau"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(40, nRow, tmpStr,FMT_TEXT);
		

		rs.GetValue(_T("tg_tich_gpbl"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(41, nRow, tmpStr,FMT_TEXT);		

		rs.GetValue(_T("tg_tra_gpbl"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(42, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("tg_kedon"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(43, nRow, tmpStr,FMT_TEXT);		
		
		rs.GetValue(_T("tg_capthuoc"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(44, nRow, tmpStr,FMT_TEXT);		
		
		rs.GetValue(_T("tg_thuphi"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(45, nRow, tmpStr,FMT_TEXT);		
		
		rs.GetValue(_T("tg_vaovien"), tmpStr);
		tmpStr.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		if (tmpStr==_T("1752/09/14 00:00"))
		{
			tmpStr==_T("");
		}
		else xls.SetCellText(46, nRow, tmpStr,FMT_TEXT);		


		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\THONGKE_THOIGIAN_THUCHIEN_KYTHUAT1.xls"));
}

int CBCTHOIGIANTHUCHIENKYTHUAT::OnAddCBCTHOIGIANTHUCHIENKYTHUAT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHOIGIANTHUCHIENKYTHUAT::OnEditCBCTHOIGIANTHUCHIENKYTHUAT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHOIGIANTHUCHIENKYTHUAT::OnDeleteCBCTHOIGIANTHUCHIENKYTHUAT(){
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
 		OnCancelCBCTHOIGIANTHUCHIENKYTHUAT();
 	}
	return 0;
}
int CBCTHOIGIANTHUCHIENKYTHUAT::OnSaveCBCTHOIGIANTHUCHIENKYTHUAT(){
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
 		//OnCBCTHOIGIANTHUCHIENKYTHUATListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHOIGIANTHUCHIENKYTHUAT::OnCancelCBCTHOIGIANTHUCHIENKYTHUAT(){
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
int CBCTHOIGIANTHUCHIENKYTHUAT::OnCBCTHOIGIANTHUCHIENKYTHUATListLoadData()
{
	return 0;
}
CString CBCTHOIGIANTHUCHIENKYTHUAT::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString  szSQL, szWhere;

	if(m_nInPatient == 0)
		szWhere.Format(_T("   AND hd_isinpatient = 'Y'"));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("   AND hd_isinpatient = 'N'"));

		szSQL.Format(_T(" SELECT hd_docno             AS docno,") \
		_T("  HD_ADMITDEPT as dept,") \
		_T("  GET_OBJECTNAME(hd_object) as objectname,") \
		_T("   get_patientname(hd_docno) AS pname,") \
		_T("   hd_admitdate              AS tg_tiepdon,") \
		_T("   (SELECT MIN(he_examdate)") \
		_T("   FROM hms_exam") \
		_T("   WHERE he_docno = hd_docno") \
		_T("   AND he_status <>'O'") \
		_T("   ) AS tg_kham,") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1100'") \
		_T("   ) AS tg_tich_shmau,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1100'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_shmau,") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1220'") \
		_T("   ) AS tg_tich_khimau,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1220'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_khimau,") \
		_T("  (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1300'") \
		_T("   ) AS tg_tich_nuoctieu,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1300'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_nuoctieu,") \
		_T("  (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1320'") \
		_T("   ) AS tg_tich_dichcd,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1320'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_dichcd,") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1600'") \
		_T("   ) AS tg_tich_tuyengiap,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1600'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_tuyengiap,") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1100'") \
		_T("   ) AS tg_tich_ctmau,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1100'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_ctmau,") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1110'") \
		_T("   ) AS tg_tich_dongmau,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1110'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_dongmau,") \
		_T(" (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B2100'") \
		_T("   ) AS tg_tich_xquang,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B2100'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_xquang,") \
		_T(" (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B2200'") \
		_T("   ) AS tg_tich_citi,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B2200'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_citi,  ") \
		_T("  (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B2300'") \
		_T("   ) AS tg_tich_mri,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B2300'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_mri,  ") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B3200'") \
		_T("   ) AS tg_tich_sieuam,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B3200'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_sieuam,") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1500'") \
		_T("   ) AS tg_tich_visinh,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1500'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_visinh,") \
		_T(" (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1400'") \
		_T("   ) AS tg_tich_md_edta,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1400'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_md_edta,") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1410'") \
		_T("   ) AS tg_tich_md_serum,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1410'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_md_serum, ") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1420'") \
		_T("   ) AS tg_tich_md_herparin,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1420'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_md_herparin,") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1B00'") \
		_T("   ) AS tg_tich_shpt,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1B00'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_shpt,  ") \
		_T("   (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1G00'") \
		_T("   ) AS tg_tich_nhommau,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1G00'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_nhommau,") \
		_T("    (SELECT MIN(hpc_orderdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1E00'") \
		_T("   ) AS tg_tich_gpbl,") \
		_T("   (SELECT MIN(hpcl_performdate)") \
		_T("   FROM HMS_PACS_TEST_LINE_VIEW") \
		_T("   WHERE hpc_docno = hd_docno") \
		_T("   AND hpc_groupid = 'B1E00'") \
		_T("   AND hpcl_status ='T'") \
		_T("   ) AS tg_tra_gpbl,  ") \
		_T(" (SELECT MIN(HPO_ORDERDATE)") \
		_T("   FROM HMS_PHARMAORDER LEFT JOIN M_STORAGELIST ON (hpo_storage_id=MSL_STORAGE_ID)") \
		_T("   WHERE hpo_docno = hd_docno") \
		_T("   AND HPO_ORDERTYPE = 'P' AND MSL_TYPE='A'") \
		_T("   ) AS tg_kedon,") \
		_T("   (SELECT MIN(HPO_APPROVEDATE)") \
		_T("   FROM HMS_PHARMAORDER LEFT JOIN M_STORAGELIST ON (hpo_storage_id=MSL_STORAGE_ID)") \
		_T("   WHERE hpo_docno = hd_docno") \
		_T("   AND HPO_ORDERTYPE = 'P' AND MSL_TYPE='A'") \
		_T("   AND HPO_ORDERSTATUS='A'") \
		_T("   ) AS tg_capthuoc,") \
		_T("   (SELECT MIN(hfe_date)") \
		_T("   FROM HMS_FEE_INVOICE") \
		_T("   WHERE hfe_docno = hd_docno") \
		_T("   AND hfe_status = 'P'  ") \
		_T("   ) AS tg_thuphi,") \
		_T("   (") \
		_T("   select min(HCR_ADMITDATE) ") \
		_T("   from HMS_CLINICAL_RECORD ") \
		_T("   where hcr_docno=hd_docno") \
		_T("   )as tg_vaovien") \
		_T(" FROM hms_doc") \
		_T(" WHERE hd_admitdate BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND HD_ADMITDEPT in ('C1.1', 'C1.2', 'C1.3', 'AB', 'TYC') %s ORDER BY HD_ADMITDEPT, HD_ADMITDATE"), m_szFromDate, m_szToDate, szWhere);		
	return szSQL;
}