#include "stdafx.h"
#include "FMFoodSummaryByLevel.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFoodSummaryByLevel* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMFoodSummaryByLevel *pVw = (CFMFoodSummaryByLevel *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMFoodSummaryByLevel *pVw = (CFMFoodSummaryByLevel *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMFoodSummaryByLevel*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMFoodSummaryByLevel*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMFoodSummaryByLevel*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMFoodSummaryByLevel*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMFoodSummaryByLevel*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddFMFoodSummaryByDayFnc(CWnd *pWnd){
	 return ((CFMFoodSummaryByLevel*)pWnd)->OnAddFMFoodSummaryByDay();
} 
static int _OnEditFMFoodSummaryByDayFnc(CWnd *pWnd){
	 return ((CFMFoodSummaryByLevel*)pWnd)->OnEditFMFoodSummaryByDay();
} 
static int _OnDeleteFMFoodSummaryByDayFnc(CWnd *pWnd){
	 return ((CFMFoodSummaryByLevel*)pWnd)->OnDeleteFMFoodSummaryByDay();
} 
static int _OnSaveFMFoodSummaryByDayFnc(CWnd *pWnd){
	 return ((CFMFoodSummaryByLevel*)pWnd)->OnSaveFMFoodSummaryByDay();
} 
static int _OnCancelFMFoodSummaryByDayFnc(CWnd *pWnd){
	 return ((CFMFoodSummaryByLevel*)pWnd)->OnCancelFMFoodSummaryByDay();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMFoodSummaryByLevel*)pWnd)->OnDeptListUnCheckAll();
}

CFMFoodSummaryByLevel::CFMFoodSummaryByLevel(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 530;
	SetDefaultValues();
}
CFMFoodSummaryByLevel::~CFMFoodSummaryByLevel(){
}
void CFMFoodSummaryByLevel::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 440, 490);
	m_wndObjectInfo.Create(this, _T("Object"), 10, 90, 435, 235);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 240, 435, 485);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 310, 55);
	m_wndReportPeriod.Create(this,315, 30, 435, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDate.Create(this,315, 60, 435, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 310, 85);
	m_wndPrint.Create(this, _T("&Print"), 235, 495, 335, 520);
	m_wndExport.Create(this, _T("&ExportXLS"), 340, 495, 440, 520);
	m_wndObjectList.Create(this,15, 115, 430, 230); 
	m_wndDeptList.Create(this,15, 265, 430, 480); 
}
void CFMFoodSummaryByLevel::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.SetCheckBox(TRUE);


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
}
void CFMFoodSummaryByLevel::OnSetWindowEvents()
{
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);

	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);

	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);
	

	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnObjectListLoadData();
	OnDeptListLoadData();
}
void CFMFoodSummaryByLevel::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CFMFoodSummaryByLevel::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMFoodSummaryByLevel::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMFoodSummaryByLevel::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CFMFoodSummaryByLevel::SetMode(int nMode){
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
/*void CFMFoodSummaryByLevel::OnYearChange(){
	
} */
/*void CFMFoodSummaryByLevel::OnYearSetfocus(){
	
} */
/*void CFMFoodSummaryByLevel::OnYearKillfocus(){
	
} */
int CFMFoodSummaryByLevel::OnYearCheckValue()
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
void CFMFoodSummaryByLevel::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFoodSummaryByLevel::OnReportPeriodSelendok()
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
/*void CFMFoodSummaryByLevel::OnReportPeriodSetfocus(){
	
}*/
/*void CFMFoodSummaryByLevel::OnReportPeriodKillfocus(){
	
}*/
long CFMFoodSummaryByLevel::OnReportPeriodLoadData()
{
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
/*void CFMFoodSummaryByLevel::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMFoodSummaryByLevel::OnFromDateChange(){
	
} */
/*void CFMFoodSummaryByLevel::OnFromDateSetfocus(){
	
} */
/*void CFMFoodSummaryByLevel::OnFromDateKillfocus(){
	
} */
int CFMFoodSummaryByLevel::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMFoodSummaryByLevel::OnToDateChange(){
	
} */
/*void CFMFoodSummaryByLevel::OnToDateSetfocus(){
	
} */
/*void CFMFoodSummaryByLevel::OnToDateKillfocus(){
	
} */
int CFMFoodSummaryByLevel::OnToDateCheckValue(){
	return 0;
} 
void CFMFoodSummaryByLevel::OnPrintSelect()
{
	return;
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos;
	double nTotal[2];
	for (int i = 0; i < 2; i++)
	{
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_DANHSACHBENHNHANDACHAMANCHUARAVIEN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("dept_id")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("record_no")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("rank")));
			rs.GetValue(_T("admit_date"), tmpStr);
			rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("quantity"), nTmp);
			nTotal[0]+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("amount"), nTmp);
			nTotal[1]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	tmpStr = pMF->GetSysDate();
	/*szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);*/
	rpt.PrintPreview();
}
void CFMFoodSummaryByLevel::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export tổng hợp"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export chi tiết"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelecttotal();
			break;
		case 2:
			OnExportdetail();
			break;		
	}
} 
void CFMFoodSummaryByLevel::OnObjectListDblClick()
{
	
} 
void CFMFoodSummaryByLevel::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMFoodSummaryByLevel::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMFoodSummaryByLevel::OnObjectListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ho_id AS ID, ") \
		         _T("ho_desc AS Name, ") \
				 _T("ho_type AS Type ") \
		         _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s") \
				 _T("ORDER BY cast(ho_id as integer)"),
				 szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndObjectList.EndLoad();
	return nCount;
}
void CFMFoodSummaryByLevel::OnDeptListDblClick(){
	
} 
void CFMFoodSummaryByLevel::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMFoodSummaryByLevel::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMFoodSummaryByLevel::OnDeptListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type in ('DT','KB') ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad();
	return nCount;
}
int CFMFoodSummaryByLevel::OnAddFMFoodSummaryByDay(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMFoodSummaryByLevel::OnEditFMFoodSummaryByDay(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMFoodSummaryByLevel::OnDeleteFMFoodSummaryByDay(){
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
 		OnCancelFMFoodSummaryByDay();
 	}
	return 0;
}
int CFMFoodSummaryByLevel::OnSaveFMFoodSummaryByDay(){
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
 		//OnFMFoodSummaryByDayListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CFMFoodSummaryByLevel::OnCancelFMFoodSummaryByDay(){
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
int CFMFoodSummaryByLevel::OnFMFoodSummaryByDayListLoadData(){
	return 0;
}

int CFMFoodSummaryByLevel::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (!m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMFoodSummaryByLevel::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, FALSE);
		}
	}
	return 0;
}


int CFMFoodSummaryByLevel::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
		{
			m_wndObjectList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMFoodSummaryByLevel::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			m_wndObjectList.SetCheck(i, FALSE);
		}
	}
	return 0;
}

CString CFMFoodSummaryByLevel::GetQueryString()
{
	CString szSQL, szWhere, szDepts;
	szWhere.Format(_T(" AND hfo_approvedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfo_deptid IN (%s)"), szDepts);



	szSQL.Format(_T(" SELECT    Get_departmentname(hfo_deptid) dept, ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'S' ") \
		_T("                    AND hfl_groupid = '1' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"3.1\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'T' ") \
		_T("                    AND hfl_groupid = '1' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"3.2\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'C' ") \
		_T("                    AND hfl_groupid = '1' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"3.3\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'S' ") \
		_T("                    AND hfl_groupid = '2' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"4.1\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'T' ") \
		_T("                    AND hfl_groupid = '2' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"4.2\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'C' ") \
		_T("                    AND hfl_groupid = '2' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"4.3\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'S' ") \
		_T("                    AND hfl_groupid = '3' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"5.1\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'T' ") \
		_T("                    AND hfl_groupid = '3' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"5.2\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'C' ") \
		_T("                    AND hfl_groupid = '3' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"5.3\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'S' ") \
		_T("                    AND hfl_groupid = '4' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"6.1\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'T' ") \
		_T("                    AND hfl_groupid = '4' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"6.2\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'C' ") \
		_T("                    AND hfl_groupid = '4' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"6.3\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'S' ") \
		_T("                    AND hfl_groupid = '5' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"7.1\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'T' ") \
		_T("                    AND hfl_groupid = '5' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"7.2\", ") \
		_T("           SUM(CASE WHEN hfo_ordertype = 'C' ") \
		_T("                    AND hfl_groupid = '5' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"7.3\", ") \
		_T("           SUM(CASE WHEN hfl_groupid = '6' THEN hfol_qtyissue ") \
		_T("               ELSE 0 ") \
		_T("               END)                       \"8\", ") \
		_T("           SUM(hfol_qtyissue)             total ") \
		_T(" FROM      hms_feefood ") \
		_T(" LEFT JOIN hms_feefoodline ON ( hfo_orderid = hfol_orderid ) ") \
		_T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = hfol_itemid ) ") \
		_T(" LEFT JOIN sys_dept ON ( sd_id = hfo_deptid ) ") \
		_T(" WHERE     hfo_orderstatus = 'A' %s") \
		_T(" GROUP     BY sd_index, ") \
		_T("              sd_id, ") \
		_T("              hfo_deptid ") \
		_T(" ORDER     BY sd_index, ") \
		_T("              sd_id "), szWhere);

_fmsg(_T("%s"), szSQL);
	return szSQL;
}
void CFMFoodSummaryByLevel::OnExportSelecttotal()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CStringArray arrCol;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0, k = 0;
	double nTotal[17];
	for (int i = 0; i < 17; i++)
		nTotal[i] = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(1, 30);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x42\x1EA2NG T\x1ED4NG H\x1EE2P \x43H\x1EA4M \x102N TH\x45O M\x1EE8\x43");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	arrCol.Add(_T("S\x1EEF\x61"));
	arrCol.Add(_T("\x43\x1A1m"));
	arrCol.Add(_T("OT"));
	arrCol.Add(_T("Ti\x1EC3u \x111\x1B0\x1EDDng"));
	arrCol.Add(_T("\x43h\xE1o"));
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("Kho\x61"), 4098, true);
	xls.SetCellMergedColumns(2, 4, 3);
	xls.SetCellText(2, 4, _T("S\x1EEF\x61"), 4098, true);
	xls.SetCellText(2, 5, _T("S\xE1ng"), 4098);
	xls.SetCellText(3, 5, _T("Tr\x1B0\x61"), 4098);
	xls.SetCellText(4, 5, _T("\x43hi\x1EC1u"), 4098);
	xls.SetCellMergedColumns(5, 4, 3);
	xls.SetCellText(5, 4, _T("\x43\x1A1m"), 4098, true);
	xls.SetCellText(5, 5, _T("S\xE1ng"), 4098);
	xls.SetCellText(6, 5, _T("Tr\x1B0\x61"), 4098);
	xls.SetCellText(7, 5, _T("\x43hi\x1EC1u"), 4098);
	xls.SetCellMergedColumns(8, 4, 3);
	xls.SetCellText(8, 4, _T("OT"), 4098, true);
	xls.SetCellText(8, 5, _T("S\xE1ng"), 4098);
	xls.SetCellText(9, 5, _T("Tr\x1B0\x61"), 4098);
	xls.SetCellText(10, 5, _T("\x43hi\x1EC1u"), 4098);
	xls.SetCellMergedColumns(11, 4, 3);
	xls.SetCellText(11, 4, _T("Ti\x1EC3u \x111\x1B0\x1EDDng"), 4098, true);
	xls.SetCellText(11, 5, _T("S\xE1ng"), 4098);
	xls.SetCellText(12, 5, _T("Tr\x1B0\x61"), 4098);
	xls.SetCellText(13, 5, _T("\x43hi\x1EC1u"), 4098);
	xls.SetCellMergedColumns(14, 4, 3);
	xls.SetCellText(14, 4, _T("\x43h\xE1o"), 4098, true);
	xls.SetCellText(14, 5, _T("S\xE1ng"), 4098);
	xls.SetCellText(15, 5, _T("Tr\x1B0\x61"), 4098);
	xls.SetCellText(16, 5, _T("\x43hi\x1EC1u"), 4098);
	xls.SetCellText(17, 4, _T("Kh\xE1\x63"), 4098, true);
	xls.SetCellText(18, 4, _T("\x43\x1ED9ng"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("dept")), FMT_TEXT);
		k = 0;
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 3; j++)
			{
				tmpStr.Format(_T("%d.%d"), i+3, j+1);
				rs.GetValue(tmpStr, nTmp);
				xls.SetCellText(k+2, nRow, double2str(nTmp), FMT_NUMBER1);
				nTotal[k++] += nTmp;
			}
		rs.GetValue(_T("8"), nTmp);
		nTotal[15] += nTmp;
		xls.SetCellText(17, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("total"), nTmp);
		nTotal[16] += nTmp;
		xls.SetCellText(18, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(1, nRow, _T("\x43\x1ED9ng"), 4098, true);
	for (int i = 0; i < 17; i++)
		xls.SetCellText(i+2, nRow, double2str(nTotal[i]), FMT_NUMBER1);
	xls.Save(_T("Exports\\Bang thong ke cham an theo muc.xls"));
}

void CFMFoodSummaryByLevel::OnExportdetail()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, szWhere, szOldDept, szNewDept;
	CString tmpStr, m_szFacList, szDeptID;
	CString  m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;	
	CString szType, szTypeName, szStorages;		
	int m_nCountList=0;
	ShowMessageBox(_T("Báo cáo lấy theo thời điểm duyệt của nhà ăn, đơn giá lấy trong view phí (nếu chưa có đơn giá=khoa chưa tạo lập phơi), đối tượng lấy lúc báo ăn và khoa là tất cả các khoa trong viện, không tính báo ăn hậu cần (gói dịch vụ)"));
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	CellFormat df(&xls), cf(&xls), hf(&xls);
	if (!xls.Load(_T("Exports\\Template\\FM_DANHSACH_BAOAN_CHITIET.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	
	
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("dept"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hoten"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("buasang"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("buatrua"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("buatoi"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("total"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("dongia"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[9] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[9] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\FM_DANHSACH_BAOAN_CHITIET2.xls"));
}

CString CFMFoodSummaryByLevel::GetQueryString1()
{
	CString szSQL, szWhere, szDepts, szObjects;
	szWhere.Format(_T(" AND hfo_approvedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfo_deptid IN (%s)"), szDepts);


	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and HFO_OBJECT_ID in(%s) "), szObjects);
	}

	szSQL.Format(_T(" SELECT ") \
				_T(" hfo_docno as docno,") \
				_T(" GET_PATIENTNAME(hfo_docno) as hoten,") \
				_T(" Get_departmentname(hfo_deptid) dept,") \
				_T(" SUM") \
				_T(" (") \
				_T("  CASE") \
				_T("     WHEN hfol_type = 'S'    ") \
				_T("     THEN hfol_qtyissue") \
				_T("     ELSE 0") \
				_T("     END") \
				_T(" ) as buasang,") \
				_T(" SUM") \
				_T(" (") \
				_T("  CASE") \
				_T("     WHEN hfol_type = 'T'    ") \
				_T("     THEN hfol_qtyissue") \
				_T("     ELSE 0") \
				_T("     END") \
				_T(" ) as buatrua,") \
				_T(" SUM") \
				_T(" (") \
				_T("  CASE") \
				_T("     WHEN hfol_type = 'C'    ") \
				_T("     THEN hfol_qtyissue") \
				_T("     ELSE 0") \
				_T("     END") \
				_T(" ) as buatoi,") \
				_T(" SUM(hfol_qtyissue) total, ") \
				_T(" HFE_UNITPRICE as dongia, ") \
				_T(" SUM(hfol_qtyissue)*HFE_UNITPRICE as thanhtien ") \
				_T(" FROM hms_feefood") \
				_T(" LEFT JOIN hms_foodordersheet ON (hfo_reforder_id= hfos_orderid)") \
				_T(" LEFT JOIN hms_feefoodline") \
				_T(" ON ( hfo_orderid = hfol_orderid )") \
				_T(" LEFT JOIN hms_fee ON (hfo_docno = hfe_docno AND hfol_orderlineid = HFE_ORDERLINE)") \
				_T(" LEFT JOIN hms_fee_list") \
				_T(" ON ( hfl_feeid = hfol_itemid )") \
				_T(" LEFT JOIN sys_dept") \
				_T(" ON ( sd_id            = hfo_deptid )") \
				_T(" WHERE NVL(hfos_depttype,'XX') <> 'HC' AND hfl_groupid = 'FF000' AND hfo_orderstatus = 'A' AND NVL(hfol_status,'L') <> 'A' %s ") \
				_T(" GROUP BY hfo_docno, hfo_deptid, HFE_UNITPRICE") \
				_T(" ORDER BY hfo_docno"), szWhere);

//_msg(_T("%s"), szSQL);
	return szSQL;
}