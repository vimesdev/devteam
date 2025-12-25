#include "stdafx.h"
#include "FMInsuranceReport21a1_Y2015_917.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceReport21a1_Y2015_917* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnReportPeriodAddNew();
}*/
static long _OnPatientLineLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnPatientLineLoadData();
}
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnItemLoadData();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917 *)pWnd)->OnToDateCheckValue();
} 
static void _OnDrugPTTTSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnDrugPTTTSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnOutPatientSelect();
}
static void _OnOutInDeptSelectFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnOutInDeptSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMInsuranceReport21a1_Y2015_917 *pVw = (CFMInsuranceReport21a1_Y2015_917 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceReport21a1_Y2015_917 *pVw = (CFMInsuranceReport21a1_Y2015_917 *)pWnd;
	pVw->OnExportSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnListDeleteItem();
}
static int _OnAddFMInsuranceReport21aFnc(CWnd *pWnd){
	 return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnAddFMInsuranceReport21a();
} 
static int _OnEditFMInsuranceReport21aFnc(CWnd *pWnd){
	 return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnEditFMInsuranceReport21a();
} 
static int _OnDeleteFMInsuranceReport21aFnc(CWnd *pWnd){
	 return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnDeleteFMInsuranceReport21a();
} 
static int _OnSaveFMInsuranceReport21aFnc(CWnd *pWnd){
	 return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnSaveFMInsuranceReport21a();
} 
static int _OnCancelFMInsuranceReport21aFnc(CWnd *pWnd){
	 return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnCancelFMInsuranceReport21a();
}

static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceReport21a1_Y2015_917*)pWnd)->OnListUnCheckAll();
}

CFMInsuranceReport21a1_Y2015_917::CFMInsuranceReport21a1_Y2015_917(CWnd *pParent)
{
	m_nDlgWidth = 540;
	m_nDlgHeight = 505;
	SetDefaultValues();
}
CFMInsuranceReport21a1_Y2015_917::~CFMInsuranceReport21a1_Y2015_917(){
}
void CFMInsuranceReport21a1_Y2015_917::OnCreateComponents()
{
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 490, 550);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 150, 485, 455);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this, 95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this, 335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this, 95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this, 335, 60, 485, 85);  
	m_wndPatientLineLabel.Create(this, _T("Patient Line"), 10, 90, 90, 115);
	m_wndPatientLine.Create(this, 95, 90, 485, 115); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 120, 90, 145);
	m_wndItem.Create(this, 95, 120, 485, 145); 
	m_wndDrugPTTT.Create(this, _T("Without Operation Material"), 10, 490, 190, 515);
	m_wndByDischargedDate.Create(this, _T("By Discharged Date"), 195, 490, 380, 515);
	m_wndInsuranceApproval.Create(this, _T("Insurance Approval"), 10, 520, 190, 545);
	m_wndOnlyCommander.Create(this, _T("Only Commander"), 195, 520, 375, 545);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 235, 555, 335, 580);
	//m_wndPrintPreview.EnableWindow(FALSE);
	m_wndExport.Create(this, _T("&Export"), 385, 555, 485, 580);
	m_wndList.Create(this, 15, 175, 480, 420); 
	m_wndAll.Create(this, _T("All"), 15, 425, 95, 450);
	m_wndInPatient.Create(this, _T("InPatient"), 100, 425, 180, 450);
	m_wndOutPatient.Create(this, _T("OutPatient"), 185, 425, 265, 450);
	m_wndOutInDept.Create(this, _T("OutInDept"), 270, 425, 390, 450);

}
void CFMInsuranceReport21a1_Y2015_917::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);

	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);

	m_wndPatientLine.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPatientLine.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndItem.Format(3, 2);
	m_wndItem.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(1, _T("Code"), CFMT_TEXT, 80);
	m_wndItem.InsertColumn(2, _T("Description"), CFMT_TEXT, 350);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.SetCheckBox(TRUE);
}
void CFMInsuranceReport21a1_Y2015_917::OnSetWindowEvents()
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
	m_wndPatientLine.SetEvent(WE_LOADDATA, _OnPatientLineLoadDataFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDrugPTTT.SetEvent(WE_CLICK, _OnDrugPTTTSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndOutInDept.SetEvent(WE_CLICK, _OnOutInDeptSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Dept"));
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_mapChapter[_T("A")] = _T("\x58\xE9t nghi\x1EC7m");
	m_mapChapter[_T("B")] = _T("\x43h\x1EA9n \x111o\xE1n h\xECnh \x1EA3nh");
	m_mapChapter[_T("C")] = _T("Th\x103m \x64\xF2 \x63h\x1EE9\x63 n\x103ng");
	m_mapChapter[_T("D")] = _T("Ph\x1EABu thu\xE2t- th\x1EE7 thu\x1EADt");
	m_mapChapter[_T("E")] = _T("V\x1EADt t\x1B0 ti\xEAu h\x61o");
	m_mapChapter[_T("F")] = _T("\x44V k\x1EF9 thu\x1EADt \x63\x61o");

	m_mapLine[_T("I")] = _T("\x110\xFAng tuy\x1EBFn \x111\x103ng k\xFD t\x1EA1i \x62\x1EC7nh vi\x1EC7n");
	m_mapLine[_T("II")] = _T("\x110\xFAng tuy\x1EBFn \x111\x103ng k\xFD t\x1EA1i ngo\x1EA1i t\x1EC9nh");
	m_mapLine[_T("III")] = _T("\x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn");
	UpdateData(false);
	OnListLoadData();
}
void CFMInsuranceReport21a1_Y2015_917::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndPatientLine.GetDlgCtrlID(), m_szPatientLineKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndDrugPTTT.GetDlgCtrlID(), m_bCheckDrug);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndOutInDept.GetDlgCtrlID(), m_nOutInDept);
	DDX_Check(pDX, m_wndByDischargedDate.GetDlgCtrlID(), m_bByDischargedDate);
	DDX_Check(pDX, m_wndInsuranceApproval.GetDlgCtrlID(), m_bInsuranceApproval);
	DDX_Check(pDX, m_wndOnlyCommander.GetDlgCtrlID(), m_bOnlyCommander);
}
void CFMInsuranceReport21a1_Y2015_917::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceReport21a1_Y2015_917::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceReport21a1_Y2015_917::SetDefaultValues(){

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szPatientLineKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bCheckDrug=FALSE;
	m_bByDischargedDate = FALSE;
	m_bInsuranceApproval = FALSE;
	m_bOnlyCommander = FALSE;
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_nOutInDept=1;

}
int CFMInsuranceReport21a1_Y2015_917::SetMode(int nMode){
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
/*void CFMInsuranceReport21a1_Y2015_917::OnYearChange(){
	
} */
/*void CFMInsuranceReport21a1_Y2015_917::OnYearSetfocus(){
	
} */
/*void CFMInsuranceReport21a1_Y2015_917::OnYearKillfocus(){
	
} */
int CFMInsuranceReport21a1_Y2015_917::OnYearCheckValue()
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
void CFMInsuranceReport21a1_Y2015_917::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceReport21a1_Y2015_917::OnReportPeriodSelendok()
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
/*void CFMInsuranceReport21a1_Y2015_917::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceReport21a1_Y2015_917::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceReport21a1_Y2015_917::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx = %ld"), ToInt(m_szReportPeriodKey));
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
/*void CFMInsuranceReport21a1_Y2015_917::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
long CFMInsuranceReport21a1_Y2015_917::OnPatientLineLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientLine.IsSearchKey() && ToInt(m_szPatientLineKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code = %d"), ToInt(m_szPatientLineKey));
	}
	m_wndPatientLine.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code code, ss_desc descr FROM sys_sel WHERE ss_id = 'hms_patient_line' ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientLine.AddItems(
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("descr")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;	
}

long CFMInsuranceReport21a1_Y2015_917::OnItemLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
	szSQL.Format(_T(" SELECT item_id, item_code, item_name ") \
				 _T(" FROM ") \
				 _T("	(SELECT hfl_typeid item_type, hfl_feeid item_id, hfl_feeid item_code, hfl_name item_name ") \
				 _T("	 FROM hms_fee_list ") \
				 _T("	 WHERE hfl_typeid <> 'X' AND hfl_active = 'Y'") \
				 _T("	 UNION ALL") \
				 _T("	 SELECT cast('D' as nvarchar2(1)), cast(mp_product_id as nvarchar2(5)), mp_code, mp_name") \
				 _T("	 FROM m_product ") \
				 _T("	 WHERE mp_isactive = 'Y' ") \
				 _T("	 AND (mp_org_id = 'MA' OR mp_org_id = 'BB' OR (mp_org_id = 'PM' AND mp_producttype IN ('A1500', 'A1600'))))") \
				 _T(" ORDER BY item_type, item_id"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndItem.AddItems(
			rs.GetValue(_T("item_id")),
			rs.GetValue(_T("item_code")),
			rs.GetValue(_T("item_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CFMInsuranceReport21a1_Y2015_917::OnFromDateChange(){
	
} */
/*void CFMInsuranceReport21a1_Y2015_917::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceReport21a1_Y2015_917::OnFromDateKillfocus(){
	
} */
int CFMInsuranceReport21a1_Y2015_917::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMInsuranceReport21a1_Y2015_917::OnToDateChange(){
	
} */
/*void CFMInsuranceReport21a1_Y2015_917::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceReport21a1_Y2015_917::OnToDateKillfocus(){
	
} */
int CFMInsuranceReport21a1_Y2015_917::OnToDateCheckValue()
{
	return 0;
} 
void CFMInsuranceReport21a1_Y2015_917::OnDrugPTTTSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsuranceReport21a1_Y2015_917::OnAllSelect(){
	UpdateData(TRUE);
	OnListLoadData();
}
void CFMInsuranceReport21a1_Y2015_917::OnInPatientSelect(){
	UpdateData(TRUE);
	OnListLoadData();
}
void CFMInsuranceReport21a1_Y2015_917::OnOutPatientSelect(){
	UpdateData(TRUE);
	OnListLoadData();
}
void CFMInsuranceReport21a1_Y2015_917::OnOutInDeptSelect(){
	UpdateData(TRUE);
	OnListLoadData();
}

void CFMInsuranceReport21a1_Y2015_917::OnListDblClick(){
	
} 
void CFMInsuranceReport21a1_Y2015_917::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceReport21a1_Y2015_917::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceReport21a1_Y2015_917::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	if (m_nOutPatient == 0)
		szWhere.Format(_T(" AND sd_type IN('KB') "));

	if (m_nInPatient == 0)
		szWhere.Format(_T(" AND sd_type IN('DT') "));

	if (m_nAll == 0)
		szWhere.Format(_T(" AND sd_type IN('KB','DT') "));

	if (m_nOutInDept == 0)
		szWhere.Format(_T(" AND sd_type IN('DT') "));

	szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name ") \
		_T("FROM sys_dept ") \
		_T("WHERE 1=1 %s ") \
		_T("ORDER BY sd_id"), szWhere);
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
void CFMInsuranceReport21a1_Y2015_917::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,m_szGroups, szDeptidCLS, szDeptOperation, szDeptDrug;
	int nRow = 0;
	szWhere.Empty();
	m_szGroups.Empty();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	xls.CreateSheet(0);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 50);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(6, 16);

	xls.SetCellText(0, nRow, _T("stt"), FMT_TEXT,true);	
	xls.SetCellText(1, nRow, _T("ma_dvkt"), FMT_TEXT,true);
	xls.SetCellText(2, nRow, _T("ten_dvkt"), FMT_TEXT,true);
	xls.SetCellText(3, nRow, _T("tyle_tt"), FMT_TEXT,true);
	xls.SetCellText(4, nRow, _T("sl_noitru"), FMT_TEXT,true);
	xls.SetCellText(5, nRow, _T("sl_ngoaitru"), FMT_TEXT,true);
	xls.SetCellText(6, nRow, _T("don_gia"), FMT_TEXT,true);
	xls.SetCellText(7, nRow, _T("thanh_tien"), FMT_TEXT,true);
	xls.SetCellText(8, nRow, _T("t_bhtt"), FMT_TEXT,true);

	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine,szAmount;
	CString szDate, szMoney;
	CString szDept;
	long double grpCost=0;
	long double ttlCost=0;
	long double totalCost=0;
	double cost=0,costword = 0;
	long double ttInsQty=0,ttOutQty=0;
	grpCost=ttlCost=cost=0;
	nIndex=1;
	long double totalInsLineCost=0;

	CString szStatus;
	CString szCard;

	szCard.Empty();

	
	if (m_nAll ==1)
	{
		szDept.Format(_T(" AND ma_loai_kcb =3 "));
		
	}
	else if (m_nAll==2)	
	{
		szDept.Format(_T(" AND ma_loai_kcb in(1,2) "));

	}
	else if( m_nAll == 3)
	{
		szDept.Format(_T(" AND ma_loai_kcb in(2) "));
	}

	CString szCompany;


	CString szLine, szInsLine;


	UpdateData(false);

	szSQL.Format(_T(" SELECT %s ma_dich_vu ,") \
				_T("   ten_dich_vu   ,") \
				_T("   don_gia          ,") \
				_T("   SUM(qty)         AS qty,") \
				_T("   ma_nhom          AS xGROUP,") \
				_T("   SUM(outqty)      AS outqty,") \
				_T("   SUM(intqty)      AS intqty,") \
				_T("   SUM(qty*don_gia) AS thanh_tien,") \
				_T("   SUM(discount)    AS discount,") \
				_T("   typegroup,") \
				_T("   tyle_tt AS ratio") \
				_T(" FROM") \
				_T("   (SELECT") \
				_T("     CASE") \
				_T("       WHEN substr(ma_the,4,2)  ='%s'") \
				_T("       AND substr(ma_dkbd,1,5) IN('%s')") \
				_T("       THEN 1") \
				_T("       WHEN substr(ma_the,4,2)      ='%s'") \
				_T("       AND substr(ma_dkbd,1,5) NOT IN ('%s')") \
				_T("       THEN 2") \
				_T("       WHEN substr(ma_the,4,2)<>'%s'") \
				_T("       THEN 3") \
				_T("     END AS insline,") \
				_T("     ma_dich_vu,") \
				_T("     ma_dich_vu_cs,") \
				_T("     ten_dich_vu,") \
				_T("     don_gia,") \
				_T("     tyle_tt,") \
				_T("     so_luong    AS qty,") \
				_T("     hfl_groupid AS ma_nhom,") \
				_T("     CASE") \
				_T("       WHEN ma_loai_kcb IN (1,2)") \
				_T("       THEN so_luong") \
				_T("       ELSE 0") \
				_T("     END AS outqty,") \
				_T("     CASE") \
				_T("       WHEN ma_loai_kcb =3") \
				_T("       THEN so_luong") \
				_T("       ELSE 0") \
				_T("     END      AS intqty,") \
				_T("     b.t_bhtt AS discount,") \
				_T("     CASE") \
				_T("       WHEN ma_nhom='13'") \
				_T("       THEN 1") \
				_T("       WHEN ma_nhom='15'") \
				_T("       THEN 2") \
				_T("       WHEN ma_nhom='1'") \
				_T("       THEN 3") \
				_T("       WHEN ma_nhom ='2'") \
				_T("       THEN 4") \
				_T("       WHEN ma_nhom ='3'") \
				_T("       THEN 5") \
				_T("       WHEN ma_nhom                ='8'") \
				_T("       AND SUBSTR(hfl_groupid,1,2) = 'B5'") \
				_T("       THEN 6") \
				_T("       WHEN ma_nhom                ='8'") \
				_T("       AND SUBSTR(hfl_groupid,1,2) = 'B4'") \
				_T("       THEN 7") \
				_T("       WHEN ma_nhom='12'") \
				_T("       THEN 8") \
				_T("       ELSE 9") \
				_T("     END AS typegroup,") \
				_T("     CASE") \
				_T("       WHEN ma_nhom='15'") \
				_T("       THEN b.ma_khoa") \
				_T("       ELSE NULL") \
				_T("     END                           AS deptid") \
				_T("   FROM bh_thongtinchitiet_tonghop  a ,") \
				_T("     bh_bang_ctdv                   b") \
				_T("   LEFT JOIN hms_fee_list") \
				_T("   ON hfl_feeid= ma_dich_vu_cs") \
				_T("   WHERE to_timestamp(ngay_ttoan,'yyyymmddhh24mi') BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') %s %s %s") \
				_T("   AND a.ma_lk      = b.ma_lk") \
				_T("   AND ma_nhom NOT IN ('10','11')") \
				_T("   )  tbl") \
				_T(" GROUP BY %s ma_dich_vu,") \
				_T("   ten_dich_vu,") \
				_T("   ma_nhom,") \
				_T("   typegroup,") \
				_T("   tyle_tt,") \
				_T("   don_gia") \
				_T(" ORDER BY %s typegroup,") \
				_T("   ma_nhom,") \
				_T("   ma_dich_vu,") \
				_T("   tyle_tt DESC") ,szInsLine, pMF->m_CompanyInfo.sc_id.Left(2), pMF->m_CompanyInfo.sc_id,
						pMF->m_CompanyInfo.sc_id.Left(2), pMF->m_CompanyInfo.sc_id, pMF->m_CompanyInfo.sc_id.Left(2),
						m_szFromDate,m_szToDate,szDept,szCard,szLine, szInsLine, szInsLine);
	_msg(_T("%s"),szSQL);

	rs.ExecSQL(szSQL);
	CString szInsLineNew,szInsLineOld;
	CString szInsLineNameNew,szInsLineNameOld;
	CString szGroupNew,szGroupOld;
	CString szNameGroupNew,szNameGroupOld;
	CString szGroupPTTNew,szGroupPTTOld;
	CString szGroupBedNew,szGroupBedOld;
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(0,nRow,tmpStr, FMT_INTEGER);

		rs.GetValue(_T("ma_dich_vu"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("ten_dich_vu"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("ratio"), tmpStr);
		xls.SetCellText(3,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("intqty"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(4,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("outqty"), cost);	
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(5,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("don_gia"), tmpStr);				
		xls.SetCellText(6,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("thanh_tien"), cost);	
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(7,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("discount"), cost);	
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(8,nRow,tmpStr, FMT_NUMBER1);

		rs.MoveNext();
	}

	tmpStr.Format(_T("Exports\\21_%s_%s%s_file21.xls"), pMF->m_CompanyInfo.sc_id, m_szFromDate.Left(4), m_szFromDate.Mid(5,2));
	xls.Save(tmpStr);
	EndWaitCursor();	
}

void CFMInsuranceReport21a1_Y2015_917::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, szOldGroup, szNewGroup, szOldChap, szNewChap, szOldLine, szNewLine, szDate, szMoney;
	CString tmpStr, szTemp;

	int nCol = 0, nRow = 0, nIdx = 1;
	double nCost = 0;
	long double nGroupCost = 0, nChapCost = 0, nLineCost = 0, nTotalCost = 0;

	BeginWaitCursor();
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}

	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 50);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);

	//Column Header
	CStringArray arrCol, arrFeeGrp, arrTitle;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("MA_DVKT"));
	arrCol.Add(_T("TEN_DVKT"));
	arrCol.Add(_T("SL_NOITRU"));
	arrCol.Add(_T("SL_NGOAITRU"));
	arrCol.Add(_T("DON_GIA"));
	arrCol.Add(_T("THANH_TIEN"));

	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}

	nRow++;

	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("ins_code")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("item_name")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("qtynoi")), FMT_NUMBER1);
		xls.SetCellText(4, nRow, rs.GetValue(_T("qtyngoai")), FMT_NUMBER1);
		xls.SetCellText(5, nRow, rs.GetValue(_T("unit_price")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), nCost);
		nGroupCost += nCost;
		xls.SetCellText(6, nRow, double2str(nCost), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Thong Ke Dich Vu Ky Thuat Theo Quy chuyen bao hiem.xls"));
}

int CFMInsuranceReport21a1_Y2015_917::OnAddFMInsuranceReport21a(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMInsuranceReport21a1_Y2015_917::OnEditFMInsuranceReport21a(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceReport21a1_Y2015_917::OnDeleteFMInsuranceReport21a(){
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
 		OnCancelFMInsuranceReport21a(); 
 	}
	return 0;
}
int CFMInsuranceReport21a1_Y2015_917::OnSaveFMInsuranceReport21a(){
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
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnFMInsuranceReport21aListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMInsuranceReport21a1_Y2015_917::OnCancelFMInsuranceReport21a(){
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
int CFMInsuranceReport21a1_Y2015_917::OnFMInsuranceReport21aListLoadData(){
	return 0;
}

int CFMInsuranceReport21a1_Y2015_917::OnListCheckAll()
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

int CFMInsuranceReport21a1_Y2015_917::OnListUnCheckAll()
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

CString CFMInsuranceReport21a1_Y2015_917::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szSubSQL, szSubSQL2, szSubSQL3,  szWhere, szWhere2, szWhere3;

	if(m_nAll == 1)
	{
		szWhere2.Format(_T("AND 0 = 1"));
		szWhere3.Format(_T("AND 0 = 1"));
	}
	if(m_nAll == 2)
	{
		szWhere.Format(_T("AND 0 = 1"));
		szWhere3.Format(_T("AND 0 = 1"));
	}
	if(m_nAll == 3)
	{
		szWhere.Format(_T("AND 0 = 1"));
		szWhere2.Format(_T("AND 0 = 1"));
	}

	szSubSQL.Format(_T(" SELECT chapter,") \
		_T("   group_id,") \
		_T("   ins_code,") \
		_T("   item_name,") \
		_T("   SUM(qtynoi) qtynoi,") \
		_T("   SUM(qtyngoai) qtyngoai,") \
		_T("   unit_price  AS unit_price,") \
		_T("   SUM(amount) AS amount") \
		_T(" FROM") \
		_T("   (SELECT ") \
		_T("   CASE WHEN (f.hfe_type             = 'T'") \
		_T("   OR (f.hfe_type                = 'P'") \
		_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B1'))") \
		_T("   AND hfe_hitech                = 'N'") \
		_T("   THEN CAST ('A' AS NVARCHAR2(1))") \
		_T("   WHEN f.hfe_type              = 'P'") \
		_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B2'") \
		_T("   AND hfe_hitech                = 'N'") \
		_T("   THEN CAST ('B' AS NVARCHAR2(1))") \
		_T("   WHEN f.hfe_type              = 'P'") \
		_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B3'") \
		_T("   AND hfe_hitech                = 'N'") \
		_T("   THEN CAST ('C' AS NVARCHAR2(1))") \
		_T("   WHEN f.hfe_type              = 'O'") \
		_T("   AND hfe_hitech                = 'N'") \
		_T("   THEN CAST ('D' AS NVARCHAR2(1))") \
		_T("   WHEN hfe_hitech              = 'Y'") \
		_T("   THEN CAST ('F' AS NVARCHAR2(1))") \
		_T("   END AS chapter,") \
		_T("     hfe_group                        AS group_id,") \
		_T("     Get_feegroupname(hfe_group)      AS group_name,") \
		_T("     CASE") \
		_T("       WHEN LENGTH(hcm_map_id)>0") \
		_T("       THEN hcm_map_id") \
		_T("       ELSE HFL_INSMAP") \
		_T("     END AS ins_code,") \
		_T("     CASE") \
		_T("       WHEN LENGTH(hfl_name3)>0") \
		_T("       THEN hfl_name3") \
		_T("       ELSE f.hfe_desc") \
		_T("     END                     AS item_name,") \
		_T("     hfe_quantity            AS qtynoi,") \
		_T("     0                       AS qtyngoai,") \
		_T("     ROUND(hfe_insprice, 2)  AS unit_price,") \
		_T("     ROUND(f.hfe_inspaid, 2) AS amount") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List") \
		_T("   ON (f.hfe_itemid=HFL_FEEID)") \
		_T("   LEFT JOIN Hms_Circular_Map") \
		_T("   ON (Hfl_Feeid=hcm_fee_id)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON (hd_docno = hfe_docno)") \
		_T("   LEFT JOIN hms_card") \
		_T("   ON (hc_patientno = hd_patientno") \
		_T("   AND hc_idx       = hd_cardidx)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON (hcr_docno = hd_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON (hcr_docno = htr_docno)") \
		_T("   LEFT JOIN Hms_Fee_Approve fa") \
		_T("   ON (hcr_docno=fa.hfe_docno") \
		_T("   AND htr_idx  =fa.Hfe_Refidx)") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON ( f.hfe_docno    = i.hfe_docno") \
		_T("   AND f.hfe_invoiceno = i.hfe_invoiceno") \
		_T("   AND i.HFE_INVOICENO =fa.HFE_INVOICENO)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON ( i.hfe_objectid           = ho_id )") \
		_T("   WHERE i.hfe_class              IN ('A', 'I')") \
		_T("   AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("   AND ho_type                  IN ('I', 'C')") \
		_T("   AND f.hfe_status             <> 'C'") \
		_T("   AND f.hfe_discount            > 0") \
		_T("   AND hd_status                 = 'T'") \
		_T("   AND LENGTH(hc_cardno)         > 0") \
		_T("   AND i.hfe_status             IN ('P')") \
		_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("   UNION ALL") \
		_T("   SELECT CAST ('G' AS NVARCHAR2(1)),") \
		_T("     hfe_group                   AS group_id,") \
		_T("     Get_feegroupname(hfe_group) AS group_name,") \
		_T("     CASE") \
		_T("       WHEN hfe_feegroup       ='DYN'") \
		_T("       THEN (SELECT hdbl_insmap FROM hms_dynbedlist WHERE hdbl_deptid = f.hfe_deptid AND hdbl_idx = hfe_itemid)") \
		_T("       ELSE hfe_itemid") \
		_T("     END AS ins_code,") \
		_T("     f.hfe_deptid") \
		_T("     ||' '") \
		_T("     ||f.hfe_desc item_name,") \
		_T("     hfe_quantity            AS qtynoi,") \
		_T("     0                       AS qtyngoai,") \
		_T("     ROUND(hfe_insprice, 2)  AS unit_price,") \
		_T("     ROUND(f.hfe_inspaid, 2) AS amount") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON (hd_docno = hfe_docno)") \
		_T("   LEFT JOIN hms_card") \
		_T("   ON (hc_patientno = hd_patientno") \
		_T("   AND hc_idx       = hd_cardidx)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON (hcr_docno = hd_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON (hcr_docno = htr_docno)") \
		_T("   LEFT JOIN Hms_Fee_Approve fa") \
		_T("   ON (hcr_docno=fa.hfe_docno") \
		_T("   AND htr_idx  =fa.Hfe_Refidx)") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON ( f.hfe_docno    = i.hfe_docno") \
		_T("   AND f.hfe_invoiceno = i.hfe_invoiceno") \
		_T("   AND i.HFE_INVOICENO =fa.HFE_INVOICENO)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON ( i.hfe_objectid = ho_id )") \
		_T("   LEFT JOIN hms_circular_map") \
		_T("   ON (hcm_fee_id = f.hfe_deptid") \
		_T("     ||'.'") \
		_T("     ||hfe_itemid") \
		_T("   AND hfe_feegroup              ='DYN')") \
		_T("   WHERE f.hfe_type              = 'B'") \
		_T("   AND hfe_hitech                = 'N'") \
		_T("   AND i.hfe_class              IN ('A', 'I')") \
		_T("   AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("   AND ho_type                  IN ('I', 'C')") \
		_T("   AND f.hfe_status             <> 'C'") \
		_T("   AND f.hfe_discount            > 0") \
		_T("   AND hd_status                 = 'T'") \
		_T("   AND LENGTH(hc_cardno)         > 0") \
		_T("   AND i.hfe_status             IN ('P')") \
		_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("   )") \
		_T(" WHERE chapter IS NOT NULL %s") \
		_T(" GROUP BY chapter,") \
		_T("   group_id,") \
		_T("   group_name,") \
		_T("   ins_code,") \
		_T("   item_name,") \
		_T("   unit_price"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere);

		szSubSQL2.Format(_T(" SELECT chapter,") \
			_T("   group_id,") \
			_T("   ins_code,") \
			_T("   item_name,") \
			_T("   SUM(qtynoi) qtynoi,") \
			_T("   SUM(qtyngoai) qtyngoai,") \
			_T("   unit_price  AS unit_price,") \
			_T("   SUM(amount) AS amount") \
			_T(" FROM") \
			_T("   (SELECT ") \
			_T("   CASE WHEN (f.hfe_type             = 'T'") \
			_T("   OR (f.hfe_type                = 'P'") \
			_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B1'))") \
			_T("   AND hfe_hitech                = 'N'") \
			_T("   THEN CAST ('A' AS NVARCHAR2(1))") \
			_T("   WHEN f.hfe_type              = 'P'") \
			_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B2'") \
			_T("   AND hfe_hitech                = 'N'") \
			_T("   THEN CAST ('B' AS NVARCHAR2(1))") \
			_T("   WHEN f.hfe_type              = 'P'") \
			_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B3'") \
			_T("   AND hfe_hitech                = 'N'") \
			_T("   THEN CAST ('C' AS NVARCHAR2(1))") \
			_T("   WHEN f.hfe_type              = 'O'") \
			_T("   AND hfe_hitech                = 'N'") \
			_T("   THEN CAST ('D' AS NVARCHAR2(1))") \
			_T("   WHEN hfe_hitech              = 'Y'") \
			_T("   THEN CAST ('F' AS NVARCHAR2(1))") \
			_T("   END AS chapter,") \
			_T("     hfe_group                        AS group_id,") \
			_T("     Get_feegroupname(hfe_group)      AS group_name,") \
			_T("     CASE") \
			_T("       WHEN LENGTH(hcm_map_id)>0") \
			_T("       THEN hcm_map_id") \
			_T("       ELSE HFL_INSMAP") \
			_T("     END AS ins_code,") \
			_T("     CASE") \
			_T("       WHEN LENGTH(hfl_name3)>0") \
			_T("       THEN hfl_name3") \
			_T("       ELSE f.hfe_desc") \
			_T("     END                     AS item_name,") \
			_T("     0                       AS qtynoi,") \
			_T("     hfe_quantity            AS qtyngoai,") \
			_T("     ROUND(hfe_insprice, 2)  AS unit_price,") \
			_T("     ROUND(f.hfe_inspaid, 2) AS amount") \
			_T("   FROM hms_fee f") \
			_T("   LEFT JOIN Hms_Fee_List") \
			_T("   ON (f.hfe_itemid=HFL_FEEID)") \
			_T("   LEFT JOIN Hms_Circular_Map") \
			_T("   ON (Hfl_Feeid=hcm_fee_id)") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON (hd_docno = hfe_docno)") \
			_T("   LEFT JOIN hms_card") \
			_T("   ON (hc_patientno = hd_patientno") \
			_T("   AND hc_idx       = hd_cardidx)") \
			_T("   LEFT JOIN hms_fee_invoice i") \
			_T("   ON ( f.hfe_docno    = i.hfe_docno") \
			_T("   AND f.hfe_invoiceno = i.hfe_invoiceno)") \
			_T("   LEFT JOIN hms_object") \
			_T("   ON ( i.hfe_objectid         = ho_id )") \
			_T("   WHERE i.hfe_class             = 'E'") \
			_T("   AND ho_type                IN ('I', 'C')") \
			_T("   AND f.hfe_status           <> 'C'") \
			_T("   AND f.hfe_discount          > 0") \
			_T("   AND hd_status               = 'T'") \
			_T("   AND LENGTH(hc_cardno)       > 0") \
			_T("   AND i.hfe_status           IN ('P')") \
			_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
			_T("   UNION ALL") \
			_T("   SELECT CAST ('G' AS NVARCHAR2(1)),") \
			_T("     hfe_group                   AS group_id,") \
			_T("     Get_feegroupname(hfe_group) AS group_name,") \
			_T("     CASE") \
			_T("       WHEN hfe_feegroup       ='DYN'") \
			_T("       THEN (SELECT hdbl_insmap FROM hms_dynbedlist WHERE hdbl_deptid = f.hfe_deptid AND hdbl_idx = hfe_itemid)") \
			_T("       ELSE hfe_itemid") \
			_T("     END AS ins_code,") \
			_T("     CASE") \
			_T("       WHEN LENGTH(hfl_name3)>0") \
			_T("       THEN hfl_name3") \
			_T("       ELSE f.hfe_desc") \
			_T("     END                     AS item_name,") \
			_T("     0                       AS qtynoi,") \
			_T("     hfe_quantity            AS qtyngoai,") \
			_T("     ROUND(hfe_insprice, 2)  AS unit_price,") \
			_T("     ROUND(f.hfe_inspaid, 2) AS amount") \
			_T("   FROM hms_fee f") \
			_T("   LEFT JOIN Hms_Fee_List") \
			_T("   ON (f.hfe_itemid=HFL_FEEID)") \
			_T("   LEFT JOIN hms_exam") \
			_T("   ON (he_docno    =hfe_docno") \
			_T("   AND he_receptidx=hfe_orderid)") \
			_T("   LEFT JOIN sys_sel") \
			_T("   ON(ss_id   ='HMS_EXAM_TYPE'") \
			_T("   AND ss_code=he_typeid)") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON (hd_docno = hfe_docno)") \
			_T("   LEFT JOIN hms_card") \
			_T("   ON (hc_patientno = hd_patientno") \
			_T("   AND hc_idx       = hd_cardidx)") \
			_T("   LEFT JOIN hms_fee_invoice i") \
			_T("   ON ( f.hfe_docno    = i.hfe_docno") \
			_T("   AND f.hfe_invoiceno = i.hfe_invoiceno)") \
			_T("   LEFT JOIN hms_object") \
			_T("   ON ( i.hfe_objectid   = ho_id )") \
			_T("   WHERE f.hfe_type      = 'E'") \
			_T("   AND hfe_hitech        = 'N'") \
			_T("   AND i.hfe_class       = 'E'") \
			_T("   AND ho_type          IN ('I', 'C')") \
			_T("   AND f.hfe_status     <> 'C'") \
			_T("   AND f.hfe_discount    > 0") \
			_T("   AND hd_status         = 'T'") \
			_T("   AND LENGTH(hc_cardno) > 0") \
			_T("   AND i.hfe_status     IN ('P')") \
			_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
			_T("   )") \
			_T(" WHERE chapter IS NOT NULL %s") \
			_T(" GROUP BY chapter,") \
			_T("   group_id,") \
			_T("   group_name,") \
			_T("   ins_code,") \
			_T("   item_name,") \
			_T("   unit_price"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere2);

			szSubSQL3.Format(_T(" SELECT chapter,") \
				_T("   group_id,") \
				_T("   ins_code,") \
				_T("   item_name,") \
				_T("   SUM(qtynoi) qtynoi,") \
				_T("   SUM(qtyngoai) qtyngoai,") \
				_T("   unit_price  AS unit_price,") \
				_T("   SUM(amount) AS amount") \
				_T(" FROM") \
				_T("   (SELECT") \
				_T("   CASE WHEN (f.hfe_type             = 'T'") \
				_T("   OR (f.hfe_type                = 'P'") \
				_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B1'))") \
				_T("   AND hfe_hitech                = 'N'") \
				_T("   THEN CAST ('A' AS NVARCHAR2(1))") \
				_T("   WHEN f.hfe_type              = 'P'") \
				_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B2'") \
				_T("   AND hfe_hitech                = 'N'") \
				_T("   THEN CAST ('B' AS NVARCHAR2(1))") \
				_T("   WHEN f.hfe_type              = 'P'") \
				_T("   AND SUBSTR(hfe_group, 1, 2)   = 'B3'") \
				_T("   AND hfe_hitech                = 'N'") \
				_T("   THEN CAST ('C' AS NVARCHAR2(1))") \
				_T("   WHEN f.hfe_type              = 'O'") \
				_T("   AND hfe_hitech                = 'N'") \
				_T("   THEN CAST ('D' AS NVARCHAR2(1))") \
				_T("   WHEN hfe_hitech              = 'Y'") \
				_T("   THEN CAST ('F' AS NVARCHAR2(1))") \
				_T("   END AS chapter,") \
				_T("     hfe_group                        AS group_id,") \
				_T("     Get_feegroupname(hfe_group)      AS group_name,") \
				_T("     CASE") \
				_T("       WHEN LENGTH(hcm_map_id)>0") \
				_T("       THEN hcm_map_id") \
				_T("       ELSE HFL_INSMAP") \
				_T("     END AS ins_code,") \
				_T("     CASE") \
				_T("       WHEN LENGTH(hfl_name3)>0") \
				_T("       THEN hfl_name3") \
				_T("       ELSE f.hfe_desc") \
				_T("     END                     AS item_name,") \
				_T("     0                       AS qtynoi,") \
				_T("     hfe_quantity            AS qtyngoai,") \
				_T("     ROUND(hfe_insprice, 2)  AS unit_price,") \
				_T("     ROUND(f.hfe_inspaid, 2) AS amount") \
				_T("   FROM hms_fee f") \
				_T("   LEFT JOIN Hms_Fee_List") \
				_T("   ON (f.hfe_itemid=HFL_FEEID)") \
				_T("   LEFT JOIN Hms_Circular_Map") \
				_T("   ON (Hfl_Feeid=hcm_fee_id)") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON (hd_docno = hfe_docno)") \
				_T("   LEFT JOIN hms_clinical_record") \
				_T("   ON (hcr_docno = hd_docno)") \
				_T("   LEFT JOIN hms_treatment_record") \
				_T("   ON (hcr_docno     = htr_docno") \
				_T("   AND htr_treattime = f.hfe_treattime)") \
				_T("   LEFT JOIN hms_fee_invoice i") \
				_T("   ON ( f.hfe_docno    = i.hfe_docno") \
				_T("   AND f.hfe_invoiceno = i.hfe_invoiceno") \
				_T("   AND i.hfe_treattime = htr_treattime)") \
				_T("   LEFT JOIN hms_object") \
				_T("   ON ( i.hfe_objectid          = ho_id )") \
				_T("   WHERE i.hfe_class             IN ('A', 'I')") \
				_T("   AND NVL(htr_outpatient, 'X') = 'Y'") \
				_T("   AND ho_type                 IN ('I', 'C')") \
				_T("   AND f.hfe_discount           > 0") \
				_T("   AND i.hfe_status             = 'P'") \
				_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("   UNION ALL") \
				_T("   SELECT CAST ('G' AS NVARCHAR2(1)),") \
				_T("     hfe_group                   AS group_id,") \
				_T("     Get_feegroupname(hfe_group) AS group_name,") \
				_T("     CASE") \
				_T("       WHEN hfe_feegroup       ='DYN'") \
				_T("       THEN (SELECT hdbl_insmap FROM hms_dynbedlist WHERE hdbl_deptid = f.hfe_deptid AND hdbl_idx = hfe_itemid)") \
				_T("       ELSE hfe_itemid") \
				_T("     END AS ins_code,") \
				_T("     CASE") \
				_T("       WHEN LENGTH(hfl_name3)>0") \
				_T("       THEN hfl_name3") \
				_T("       ELSE f.hfe_desc") \
				_T("     END                     AS item_name,") \
				_T("     0                       AS qtynoi,") \
				_T("     hfe_quantity            AS qtyngoai,") \
				_T("     ROUND(hfe_insprice, 2)  AS unit_price,") \
				_T("     ROUND(f.hfe_inspaid, 2) AS amount") \
				_T("   FROM hms_fee f") \
				_T("   LEFT JOIN Hms_Fee_List") \
				_T("   ON (f.hfe_itemid=HFL_FEEID)") \
				_T("   LEFT JOIN hms_exam") \
				_T("   ON (he_docno    =hfe_docno") \
				_T("   AND he_receptidx=hfe_orderid)") \
				_T("   LEFT JOIN sys_sel") \
				_T("   ON(ss_id   ='HMS_EXAM_TYPE'") \
				_T("   AND ss_code=he_typeid)") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON (hd_docno = hfe_docno)") \
				_T("   LEFT JOIN hms_clinical_record") \
				_T("   ON (hcr_docno = hd_docno)") \
				_T("   LEFT JOIN hms_treatment_record") \
				_T("   ON (hcr_docno     = htr_docno") \
				_T("   AND htr_treattime = f.hfe_treattime)") \
				_T("   LEFT JOIN hms_fee_invoice i") \
				_T("   ON ( f.hfe_docno    = i.hfe_docno") \
				_T("   AND f.hfe_invoiceno = i.hfe_invoiceno") \
				_T("   AND i.hfe_treattime = htr_treattime)") \
				_T("   LEFT JOIN hms_object") \
				_T("   ON ( i.hfe_objectid          = ho_id )") \
				_T("   WHERE f.hfe_type             = 'E'") \
				_T("   AND hfe_hitech               = 'N'") \
				_T("   AND i.hfe_class             IN ('A', 'I')") \
				_T("   AND NVL(htr_outpatient, 'X') = 'Y'") \
				_T("   AND ho_type                 IN ('I', 'C')") \
				_T("   AND f.hfe_discount           > 0") \
				_T("   AND i.hfe_status             = 'P'") \
				_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("   )") \
				_T(" WHERE chapter IS NOT NULL %s") \
				_T(" GROUP BY chapter,") \
				_T("   group_id,") \
				_T("   group_name,") \
				_T("   ins_code,") \
				_T("   item_name,") \
				_T("   unit_price"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere3);

	szSQL.Format(_T(" SELECT") \
		_T("   ins_code,") \
		_T("   item_name,") \
		_T("   SUM(qtynoi) qtynoi,") \
		_T("   SUM(qtyngoai) qtyngoai,") \
		_T("   unit_price  AS unit_price,") \
		_T("   SUM(amount) AS amount") \
		_T(" FROM") \
		_T(" (") \
		_T(" %s UNION ALL") \
		_T(" %s UNION ALL") \
		_T(" %s )") \
		_T(" GROUP BY chapter,") \
		_T("   group_id,") \
		_T("   ins_code,") \
		_T("   item_name,") \
		_T("   unit_price") \
		_T(" ORDER BY chapter,") \
		_T("   group_id,") \
		_T("   item_name"), szSubSQL, szSubSQL2, szSubSQL3);

	_msg(_T("%s"), szSQL);
	return szSQL;
	
}

