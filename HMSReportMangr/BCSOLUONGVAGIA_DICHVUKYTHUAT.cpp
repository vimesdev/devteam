#include "stdafx.h"
#include "BCSOLUONGVAGIA_DICHVUKYTHUAT.h"
#include "MainFrm.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd)->OnToDateCheckValue();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnOutPatientSelect();
}
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CBCSOLUONGVAGIA_DICHVUKYTHUAT *pVw = (CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCSOLUONGVAGIA_DICHVUKYTHUAT *pVw = (CBCSOLUONGVAGIA_DICHVUKYTHUAT *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddCBCSOLUONGVAGIA_DICHVUKYTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnAddCBCSOLUONGVAGIA_DICHVUKYTHUAT();
} 
static int _OnEditCBCSOLUONGVAGIA_DICHVUKYTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnEditCBCSOLUONGVAGIA_DICHVUKYTHUAT();
} 
static int _OnDeleteCBCSOLUONGVAGIA_DICHVUKYTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnDeleteCBCSOLUONGVAGIA_DICHVUKYTHUAT();
} 
static int _OnSaveCBCSOLUONGVAGIA_DICHVUKYTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnSaveCBCSOLUONGVAGIA_DICHVUKYTHUAT();
} 
static int _OnCancelCBCSOLUONGVAGIA_DICHVUKYTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnCancelCBCSOLUONGVAGIA_DICHVUKYTHUAT();
}
static long _OnListLoadDataFnc(CWnd *pWnd)
{
	return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnListLoadData();
}

static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CBCSOLUONGVAGIA_DICHVUKYTHUAT*)pWnd)->OnListUnCheckAll();
}

CBCSOLUONGVAGIA_DICHVUKYTHUAT::CBCSOLUONGVAGIA_DICHVUKYTHUAT()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}

CBCSOLUONGVAGIA_DICHVUKYTHUAT::~CBCSOLUONGVAGIA_DICHVUKYTHUAT()
{
}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnCreateComponents(){
	//m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 90);
	//m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	//m_wndYear.Create(this,95, 30, 215, 55); 
	//m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 30, 300, 55);
	//m_wndPeriodReport.Create(this,305, 30, 425, 55); 
	//m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	//m_wndFromDate.Create(this,95, 60, 215, 85); 
	//m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	//m_wndToDate.Create(this,305, 60, 425, 85); 
	//m_wndAll.Create(this, _T("All"), 10, 95, 90, 120);
	//m_wndInPatient.Create(this, _T("Cận lâm sàng"), 95, 95, 175, 120);
	//m_wndOutPatient.Create(this, _T("Phẫu thuật - thủ thuật"), 180, 95, 260, 120);
	////m_wndPreview.Create(this, _T("&Preview"), 265, 95, 345, 120);
	//m_wndExport.Create(this, _T("&ExportToXLS"), 350, 95, 430, 120);

	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 30, 300, 55);
	m_wndPeriodReport.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndAll.Create(this, _T("All"), 10, 400, 90, 425);
	m_wndInPatient.Create(this, _T("Cận lâm sàng"), 95, 400, 175, 425);	
	m_wndOutPatient.Create(this, _T("Phẫu thuật - thủ thuật"), 180, 400, 335, 425);
	m_wndExport.Create(this, _T("&ExportToXLS"), 344, 400, 424, 425);
	m_wndList.Create(this,10, 96, 425, 395); 

}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnInitializeComponents(){
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

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);
	m_wndList.SetCheckBox(TRUE);

}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnSetWindowEvents(){
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
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	OnListLoadData();
	UpdateData(false);

}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::SetMode(int nMode){
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
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnYearChange(){
	
} */
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnYearSetfocus(){
	
} */
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnYearKillfocus(){
	
} */
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnYearCheckValue(){
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
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnPeriodReportSelendok(){
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
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnPeriodReportSetfocus(){
	
}*/
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnPeriodReportKillfocus(){
	
}*/
long CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnPeriodReportLoadData(){
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
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnPeriodReportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnFromDateChange(){
	
} */
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnFromDateSetfocus(){
	
} */
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnFromDateKillfocus(){
	
} */
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnToDateChange(){
	
} */
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnToDateSetfocus(){
	
} */
/*void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnToDateKillfocus(){
	
} */

long CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnListLoadData()
{

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name ") \
		_T("FROM sys_dept ") \
		_T("WHERE sd_type IN('KB', 'DT') ") \
		_T("ORDER BY sd_type, sd_id"), szWhere);
	//MessageBox(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnToDateCheckValue(){
	return 0;
} 
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnAllSelect(){
	
}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnInPatientSelect(){
	
}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnOutPatientSelect(){
	
}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export Mẫu 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Export Mẫu 2"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("Export Mẫu 3"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport1();
			break;
		case 2:
			OnExport2();
			break;
		case 3:
			OnExport3();
			break;	
	}	
}

void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnExport1()
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
	if (!xls.Load(_T("Exports\\BCCTXH_THONGKESOLUONG_DONGIA_DICHVUKYTHUAT.xls"))) AfxMessageBox(_T("Chưa có File BCCTXH_THONGKESOLUONG_DONGIA_DICHVUKYTHUAT.xls trong thư mục Export!"));	
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("tendichvu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sl_baohiemtt"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl_tutra"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("dg_baohiemtt"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("dg_tutra"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("itemid"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\BCCTXH_THONGKESOLUONG_DONGIA_DICHVUKYTHUAT2.xls"));
}

void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnExport2()
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
	if (!xls.Load(_T("Exports\\Template\\THONGKESOLUONG_DICHVUKYTHUAT_SUDUNG.xls"))) AfxMessageBox(_T("Chưa có File THONGKESOLUONG_DICHVUKYTHUAT_SUDUNG.xls trong thư mục Exports\Template"));	
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("madichvu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tendichvu"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("phannhom"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\THONGKESOLUONG_DICHVUKYTHUAT_SUDUNG2.xls"));
}


int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnAddCBCSOLUONGVAGIA_DICHVUKYTHUAT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnEditCBCSOLUONGVAGIA_DICHVUKYTHUAT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnDeleteCBCSOLUONGVAGIA_DICHVUKYTHUAT(){
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
 		OnCancelCBCSOLUONGVAGIA_DICHVUKYTHUAT();
 	}
	return 0;
}
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnSaveCBCSOLUONGVAGIA_DICHVUKYTHUAT(){
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
 		//OnCBCSOLUONGVAGIA_DICHVUKYTHUATListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnCancelCBCSOLUONGVAGIA_DICHVUKYTHUAT(){
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
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnCBCSOLUONGVAGIA_DICHVUKYTHUATListLoadData()
{
	return 0;
}
CString CBCSOLUONGVAGIA_DICHVUKYTHUAT::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString  szSQL, szWhere;

	if(m_nInPatient == 0)		
		szWhere.Format(_T(" AND f.hfe_type in ('P','T')"));

	if(m_nOutPatient == 0)
		szWhere.Format(_T(" AND f.hfe_type = 'O'"));

		szSQL.Format(_T(" SELECT tendichvu,typeid,groupid,itemid,") \
		_T(" SUM(sl_baohiemtt) as sl_baohiemtt,") \
		_T(" SUM(sl_tutra) as sl_tutra,") \
		_T(" dg_baohiemtt,") \
		_T(" dg_tutra") \
		_T(" FROM") \
		_T(" (") \
		_T(" select ") \
		_T(" f.hfe_desc as tendichvu, f.hfe_type as typeid, f.HFE_GROUP as groupid, f.hfe_itemid as itemid, ") \
		_T(" CASE WHEN f.hfe_object not in (1,3,7,8,13) and f.HFE_INSPRICE>0 THEN f.HFE_QUANTITY ELSE 0 END as sl_baohiemtt,") \
		_T(" CASE WHEN (f.hfe_object in (7) OR (f.hfe_object not in (1,3,8,13) and f.HFE_INSPRICE=0)) THEN f.HFE_QUANTITY ELSE 0 END as sl_tutra,") \
		_T(" CASE WHEN f.hfe_object not in (1,3,7,8,13) and f.HFE_INSPRICE>0 THEN f.HFE_UnitPrice ELSE 0 END as dg_baohiemtt,") \
		_T(" CASE WHEN (f.hfe_object in (7) OR (f.hfe_object not in (1,3,8,13) and f.HFE_INSPRICE=0)) THEN f.HFE_UnitPrice ELSE 0 END as dg_tutra") \
		_T(" from hms_fee f") \
		_T(" left join HMS_FEE_INVOICE i ON (f.hfe_docno=i.hfe_docno AND f.HFE_INVOICENO=i.hfe_invoiceno)") \
		_T(" WHERE i.hfe_date BETWEEN	TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" and f.hfe_type in ('P', 'T', 'O')") \
		_T(" and f.hfe_category <> 'Y'") \
		_T(" and i.hfe_status='P'") \
		_T(" )") \
		_T(" GROUP BY tendichvu,typeid,groupid, itemid,") \
		_T(" dg_baohiemtt,") \
		_T(" dg_tutra") \
		_T(" ORDER BY itemid"), m_szFromDate, m_szToDate, szWhere);
		
	return szSQL;
}
CString CBCSOLUONGVAGIA_DICHVUKYTHUAT::GetQueryString1()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString  szSQL, szWhere;	

		/*szSQL.Format(_T(" SELECT tendichvu,typeid,groupid,itemid,") \
		_T(" SUM(sl_baohiemtt) as sl_baohiemtt,") \
		_T(" SUM(sl_tutra) as sl_tutra,") \
		_T(" dg_baohiemtt,") \
		_T(" dg_tutra") \
		_T(" FROM") \
		_T(" (") \
		_T(" select ") \
		_T(" f.hfe_desc as tendichvu, f.hfe_type as typeid, f.HFE_GROUP as groupid, f.hfe_itemid as itemid, ") \
		_T(" CASE WHEN f.hfe_object not in (1,3,7,8,13) and f.HFE_INSPRICE>0 THEN f.HFE_QUANTITY ELSE 0 END as sl_baohiemtt,") \
		_T(" CASE WHEN (f.hfe_object in (7) OR (f.hfe_object not in (1,3,8,13) and f.HFE_INSPRICE=0)) THEN f.HFE_QUANTITY ELSE 0 END as sl_tutra,") \
		_T(" CASE WHEN f.hfe_object not in (1,3,7,8,13) and f.HFE_INSPRICE>0 THEN f.HFE_UnitPrice ELSE 0 END as dg_baohiemtt,") \
		_T(" CASE WHEN (f.hfe_object in (7) OR (f.hfe_object not in (1,3,8,13) and f.HFE_INSPRICE=0)) THEN f.HFE_UnitPrice ELSE 0 END as dg_tutra") \
		_T(" from hms_fee f") \
		_T(" left join HMS_FEE_INVOICE i ON (f.hfe_docno=i.hfe_docno AND f.HFE_INVOICENO=i.hfe_invoiceno)") \
		_T(" WHERE i.hfe_date BETWEEN	TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" and f.hfe_type in ('P', 'T', 'O')") \
		_T(" and f.hfe_category <> 'Y'") \
		_T(" and i.hfe_status='P'") \
		_T(" )") \
		_T(" GROUP BY tendichvu,typeid,groupid, itemid,") \
		_T(" dg_baohiemtt,") \
		_T(" dg_tutra") \
		_T(" ORDER BY itemid"), m_szFromDate, m_szToDate, szWhere);*/

		
		szSQL.Format(_T(" SELECT ") \
		_T("     f.hfe_itemid     AS madichvu,") \
		_T("     f.hfe_desc       AS tendichvu,") \
		_T("     SUM(f.HFE_QUANTITY)   AS soluong,") \
		_T("     fg.hfg_name         AS phannhom,") \
		_T("     f.hfe_type       AS typeid,") \
		_T("     f.HFE_GROUP      AS groupid,") \
		_T("     fg.hfg_index        AS hfg_index,") \
		_T("     fl.hfl_groupid      AS hfl_groupid,") \
		_T("     fl.hfl_line         AS lineidx") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (f.hfe_itemid=fl.hfl_feeid)") \
		_T("   LEFT JOIN hms_fee_group fg") \
		_T("   ON(fg.hfg_id=fl.hfl_groupid)") \
		_T("   LEFT JOIN HMS_FEE_INVOICE i") \
		_T("   ON (f.hfe_docno    =i.hfe_docno") \
		_T("   AND f.HFE_INVOICENO=i.hfe_invoiceno)") \
		_T("   WHERE i.hfe_date BETWEEN	TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND i.hfe_status    ='P'") \
		_T("   and f.hfe_type in ('E', 'P', 'T', 'O', 'X', 'F')") \
		_T("   GROUP BY  f.hfe_itemid,f.hfe_desc, fg.hfg_name, f.hfe_type, f.HFE_GROUP, fg.hfg_index, fl.hfl_groupid, fl.hfl_line") \
		_T("   ORDER BY fg.hfg_index,fl.hfl_groupid, fl.hfl_line"), m_szFromDate, m_szToDate);
		
	return szSQL;
}

void CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnExport3()
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
	if (!xls.Load(_T("Exports\\THONGKESOLUONG_DICHVUKYTHUAT_SUDUNG_TATCA.xls"))) AfxMessageBox(_T("Chưa có File THONGKESOLUONG_DICHVUKYTHUAT_SUDUNG_TATCA.xls trong thư mục Export!"));	
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("itemid"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("tendichvu"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("sl_baohiemtt"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("dg_baohiemtt"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl_tutra"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);		

		rs.GetValue(_T("dg_tutra"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("groupname"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\THONGKESOLUONG_DICHVUKYTHUAT_SUDUNG_TATCA2.xls"));
}
CString CBCSOLUONGVAGIA_DICHVUKYTHUAT::GetQueryString3()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString  szSQL, szWhere, szDepts;	

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND i.hfe_deptid IN(%s) "), szDepts);
	}

	if(m_nInPatient == 0)		
		szWhere.Format(_T(" AND f.hfe_type in ('P','T')"));

	if(m_nOutPatient == 0)
		szWhere.Format(_T(" AND f.hfe_type = 'O'"));


		szSQL.Format(_T(" SELECT tendichvu,typeid,groupid, groupname, itemid,") \
		_T(" SUM(sl_baohiemtt) as sl_baohiemtt,") \
		_T(" SUM(sl_tutra) as sl_tutra,") \
		_T(" dg_baohiemtt,") \
		_T(" dg_tutra") \
		_T(" FROM") \
		_T(" (") \
		_T(" select ") \
		_T(" f.hfe_desc as tendichvu, f.hfe_type as typeid, f.HFE_GROUP as groupid, hfg_name AS groupname, f.hfe_itemid as itemid, ") \
		_T(" CASE WHEN f.hfe_object not in (1,3,7,8,13) and f.HFE_INSPRICE>0 THEN f.HFE_QUANTITY ELSE 0 END as sl_baohiemtt,") \
		_T(" CASE WHEN (f.hfe_object in (7) OR (f.hfe_object not in (1,3,8,13) and f.HFE_INSPRICE=0)) THEN f.HFE_QUANTITY ELSE 0 END as sl_tutra,") \
		_T(" CASE WHEN f.hfe_object not in (1,3,7,8,13) and f.HFE_INSPRICE>0 THEN f.HFE_UnitPrice ELSE 0 END as dg_baohiemtt,") \
		_T(" CASE WHEN (f.hfe_object in (7) OR (f.hfe_object not in (1,3,8,13) and f.HFE_INSPRICE=0)) THEN f.HFE_UnitPrice ELSE 0 END as dg_tutra") \
		_T(" from hms_fee f") \
		_T(" left join HMS_FEE_INVOICE i ON (f.hfe_docno=i.hfe_docno AND f.HFE_INVOICENO=i.hfe_invoiceno)") \
		_T(" LEFT JOIN hms_fee_group ON (f.HFE_GROUP=hfg_id)")
		_T(" WHERE i.hfe_date BETWEEN	TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" and f.hfe_type in ('P', 'T', 'O')") \
		_T(" and f.hfe_category <> 'Y'") \
		_T(" and i.hfe_status='P'") \
		_T(" )") \
		_T(" GROUP BY tendichvu,typeid,groupid, groupname, itemid,") \
		_T(" dg_baohiemtt,") \
		_T(" dg_tutra") \
		_T(" ORDER BY itemid"), m_szFromDate, m_szToDate, szWhere);
		
	return szSQL;
}
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnListCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, TRUE);
		}
	}
	return 0;
}
int CBCSOLUONGVAGIA_DICHVUKYTHUAT::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, FALSE);
		}
	}
	return 0;
}