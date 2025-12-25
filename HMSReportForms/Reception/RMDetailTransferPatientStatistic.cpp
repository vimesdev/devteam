#include "stdafx.h"
#include "RMDetailTransferPatientStatistic.h"
#include "MainFrame_E10.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CRMDetailTransferPatientStatistic *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMDetailTransferPatientStatistic* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRMDetailTransferPatientStatistic *)pWnd)->OnReportPeriodLoadData();
}

/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRMDetailTransferPatientStatistic *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRMDetailTransferPatientStatistic *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CRMDetailTransferPatientStatistic *pVw = (CRMDetailTransferPatientStatistic *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRMDetailTransferPatientStatistic *pVw = (CRMDetailTransferPatientStatistic *)pWnd;
	pVw->OnExportSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CRMDetailTransferPatientStatistic*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CRMDetailTransferPatientStatistic*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRMDetailTransferPatientStatistic*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CRMDetailTransferPatientStatistic*)pWnd)->OnListDeleteItem();
} 

static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CRMDetailTransferPatientStatistic*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CRMDetailTransferPatientStatistic*)pWnd)->OnListUnCheckAll();
}
static void _OnInPatientLabelSelectFnc(CWnd *pWnd){
	  ((CRMDetailTransferPatientStatistic*)pWnd)->OnInPatientLabelSelect();
}
static void _OnOutPatientLabelSelectFnc(CWnd *pWnd){
	  ((CRMDetailTransferPatientStatistic*)pWnd)->OnOutPatientLabelSelect();
}
static void _OnAllPatientLabelSelectFnc(CWnd *pWnd){
	  ((CRMDetailTransferPatientStatistic*)pWnd)->OnAllPatientLabelSelect();
}
static long _OnHospitalLoadDataFnc(CWnd *pWnd)
{
	return ((CRMDetailTransferPatientStatistic *)pWnd)->OnHospitalLoadData();
}

CRMDetailTransferPatientStatistic::CRMDetailTransferPatientStatistic(CWnd *pParent)
{
	m_nDlgWidth = 549;
	m_nDlgHeight = 563;
	SetDefaultValues();
}
CRMDetailTransferPatientStatistic::~CRMDetailTransferPatientStatistic(){
}
void CRMDetailTransferPatientStatistic::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 360);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 90, 485, 355);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 245, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 390, 365, 490, 390);
	m_wndList.Create(this,15, 115, 480, 350);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 2, 8, 487, 385);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 120, 485, 385);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 245, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 0, 58, 0, 58);
	m_wndExport.Create(this, _T("&ExportXLS"), 390, 423, 490, 448);
	m_wndList.Create(this,15, 145, 480, 380); 
	m_wndInPatientLabel.Create(this, _T("InPatient"), 11, 90, 161, 115);
	m_wndOutPatientLabel.Create(this, _T("OutPatient"), 174, 90, 324, 115);
	m_wndAllPatientLabel.Create(this, _T("All"), 335, 90, 485, 115);
	m_wndHospitalLabel.Create(this, _T("Hospital"), 11, 390, 91, 415);
	m_wndHospital.Create(this,96, 390, 480, 415); 

}
void CRMDetailTransferPatientStatistic::OnInitializeComponents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, 1, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndList.SetCheckBox(TRUE);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndHospital.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
}

void CRMDetailTransferPatientStatistic::OnSetWindowEvents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Dept List"));
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);


	m_wndInPatientLabel.SetEvent(WE_CLICK, _OnInPatientLabelSelectFnc);
	m_wndOutPatientLabel.SetEvent(WE_CLICK, _OnOutPatientLabelSelectFnc);
	m_wndAllPatientLabel.SetEvent(WE_CLICK, _OnAllPatientLabelSelectFnc);	
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);

	CDate dte;
	dte.ParseDate(pMF->GetSysDate());
	m_nYear = dte.GetYear();
	m_szReportPeriodKey.Format(_T("%d"), dte.GetMonth());
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

	OnListLoadData();
}
void CRMDetailTransferPatientStatistic::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInPatientLabel.GetDlgCtrlID(), m_nInPatientLabel);
	DDX_Radio(pDX, m_wndOutPatientLabel.GetDlgCtrlID(), m_nOutPatientLabel);
	DDX_Radio(pDX, m_wndAllPatientLabel.GetDlgCtrlID(), m_nAllPatientLabel);
	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospitalKey);

}
void CRMDetailTransferPatientStatistic::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInPatientLabel=1;
	m_nOutPatientLabel=1;
	m_nAllPatientLabel=0;
	m_szHospitalKey.Empty();
}

int CRMDetailTransferPatientStatistic::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CRMDetailTransferPatientStatistic::OnYearChange(){
	
} */
/*void CRMDetailTransferPatientStatistic::OnYearSetfocus(){
	
} */
/*void CRMDetailTransferPatientStatistic::OnYearKillfocus(){
	
} */
int CRMDetailTransferPatientStatistic::OnYearCheckValue()
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
 
void CRMDetailTransferPatientStatistic::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CRMDetailTransferPatientStatistic::OnReportPeriodSelendok()
{
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/1/1"), m_nYear);
		tmpStr.Format(_T("%.4d/3/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/4/1"), m_nYear);
		tmpStr.Format(_T("%.4d/6/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}

	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/7/1"), m_nYear);
		tmpStr.Format(_T("%.4d/9/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/1"), m_nYear);
		tmpStr.Format(_T("%.4d/10/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/1/1"), m_nYear);
		tmpStr.Format(_T("%.4d/12/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);
}

/*void CRMDetailTransferPatientStatistic::OnReportPeriodSetfocus(){
	
}*/
/*void CRMDetailTransferPatientStatistic::OnReportPeriodKillfocus(){
	
}*/
void CRMDetailTransferPatientStatistic::OnInPatientLabelSelect()
{
	
}
void CRMDetailTransferPatientStatistic::OnOutPatientLabelSelect()
{
	
}
void CRMDetailTransferPatientStatistic::OnAllPatientLabelSelect()
{
	
}
long CRMDetailTransferPatientStatistic::OnHospitalLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, m_szHospital;
	if(m_wndHospital.IsSearchKey() && ToInt(m_szHospital) > 0)
	{
		szWhere.Format(_T(" AND hh_id='%s' "), m_szHospital);
	}

	szSQL.Format(_T("SELECT hh_id as id, hh_name||' - '||sys_getprovillname(hh_provid) as name ") \
		_T("FROM hms_hospital ") \
		_T("WHERE hh_isactive = 'Y' AND hh_isactive2 = 'Y' %s ORDER BY hh_id "), 
		szWhere);
  
	m_wndHospital.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndHospital.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;	
}
long CRMDetailTransferPatientStatistic::OnReportPeriodLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
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

/*void CRMDetailTransferPatientStatistic::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CRMDetailTransferPatientStatistic::OnFromDateChange(){
	
} */
/*void CRMDetailTransferPatientStatistic::OnFromDateSetfocus(){
	
} */
/*void CRMDetailTransferPatientStatistic::OnFromDateKillfocus(){
	
} */
int CRMDetailTransferPatientStatistic::OnFromDateCheckValue(){
	return 0;
}
 
/*void CRMDetailTransferPatientStatistic::OnToDateChange(){
	
} */
/*void CRMDetailTransferPatientStatistic::OnToDateSetfocus(){
	
} */
/*void CRMDetailTransferPatientStatistic::OnToDateKillfocus(){
	
} */
int CRMDetailTransferPatientStatistic::OnToDateCheckValue(){
	return 0;
}
 
void CRMDetailTransferPatientStatistic::OnPrintPreviewSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString szSQL, tmpStr, szDate, szOldProv, szNewProv;
	CStringArray arrData;
	CRecord rs(&pMF->m_db);

	int nTmp = 0;
	double nGrpTtl[16], nTotal[16];

	CReportSection * rptHeader = NULL, *rptDetail = NULL, * rptFooter = NULL;

	if (!rpt.Init(_T("Reports\\HMS\\RM_THONGKEBENHNHANCHUYENTUYEN.RPT")))
		return;

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		_fmsg(_T("%s"), szSQL);
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONASTERISK);
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	arrData.Add(_T("c11"));
	arrData.Add(_T("c12"));
	arrData.Add(_T("c21"));
	arrData.Add(_T("c22"));
	arrData.Add(_T("c31"));
	arrData.Add(_T("c32"));
	arrData.Add(_T("c41"));
	arrData.Add(_T("c42"));
	arrData.Add(_T("c51"));
	arrData.Add(_T("c52"));
	arrData.Add(_T("c61"));
	arrData.Add(_T("c62"));
	arrData.Add(_T("c71"));
	arrData.Add(_T("c72"));
	arrData.Add(_T("ct1"));
	arrData.Add(_T("ct2"));
	for (int i = 0; i < 16; i++)
	{
		nGrpTtl[i] = 0;
		nTotal[i] = 0;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("hh_provid"), szNewProv);
		if (szNewProv != szOldProv)
		{
			if ((nGrpTtl[14] + nGrpTtl[15]) > 0)
			{
				rptFooter = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i = 0; i < arrData.GetCount(); i++)
				{
					tmpStr.Format(_T("s%d"), i+2);
					rptFooter->SetValue(tmpStr, double2str(nGrpTtl[i]));
					nTotal[i] += nGrpTtl[i];
					nGrpTtl[i] = 0;
				}
			}
			rptHeader = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptHeader->SetValue(_T("GroupName"), rs.GetValue(_T("sp_name")));
			szOldProv = szNewProv;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), rs.GetValue(_T("unit")));
		for (int i = 0; i < arrData.GetCount(); i++){
			rs.GetValue(arrData[i], nTmp);
			nGrpTtl[i]+= nTmp;
			rptDetail->SetValue(int2str(i+2), rs.GetValue(arrData.GetAt(i)));
		}
		rs.MoveNext();
	}
	if ((nGrpTtl[14] + nGrpTtl[15]) > 0)
	{
		rptFooter = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < arrData.GetCount(); i++)
		{
			tmpStr.Format(_T("s%d"), i+2);
			rptFooter->SetValue(tmpStr, double2str(nGrpTtl[i]));
			nTotal[i] += nGrpTtl[i];
		}
	}
	rptFooter = rpt.GetReportFooter();
	for (int i = 0; i < 16;i++)
	{
		tmpStr.Format(_T("s%d"), i+2);
		rptFooter->SetValue(tmpStr, double2str(nTotal[i]));
	}
	szDate = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
}
 
void CRMDetailTransferPatientStatistic::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[9], nGroupTotal[9];
	for(int i = 0; i < 9; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACHBENHNHANCHUYENTUYEN.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
				/*rs.GetValue(_T("dept_id"), szNewDept);
		if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
		{
			if (nGroupTotal[20] > 0)
			{
				xls.SetCellText(6, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 7; i < 24; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}*/
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoavao"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("khoara"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayvao"), tmpStr);
		xls.SetCellText(nCol+6,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("ngayra"), tmpStr);
		xls.SetCellText(nCol+7,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sothe"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mobile"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("benhvien"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}

	/*if (nGroupTotal[20] > 0)
	{
		xls.SetCellText(6, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 24; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[20] > 0)
	{
		xls.SetCellText(6, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 24; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}*/

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHBENHNHANCHUYENTUYEN2.xls"));
}

void CRMDetailTransferPatientStatistic::OnListDblClick()
{
	
} 
void CRMDetailTransferPatientStatistic::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	
} 
int CRMDetailTransferPatientStatistic::OnListDeleteItem()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	 return 0;
} 
long CRMDetailTransferPatientStatistic::OnListLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as ID, sd_name as Name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE sd_type='KB' ") \
				 _T("ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
 
CString CRMDetailTransferPatientStatistic::GetQueryString()
{
	CString szSQL, szWhere;
	CString szDepts;
	szWhere.Empty();
	
	szWhere.Format(_T(" AND hd_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"),
		           m_szFromDate, m_szToDate);

	if (m_nAllPatientLabel == 0)
	{
		szWhere.AppendFormat(_T(" and 1=1"));	
	}

	if (m_nOutPatientLabel == 0)
	{
		szWhere.AppendFormat(_T(" and NVL(HD_SUGGESTION,'XX') not in ('C', 'D')"));
	}
	
	if (m_nInPatientLabel == 0)
	{
		szWhere.AppendFormat(_T(" and NVL(HD_SUGGESTION,'XX') in ('C', 'D')"));

	}

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
		szWhere.AppendFormat(_T(" AND hd_admitdept IN(%s) "), szDepts);

	if (!m_szHospitalKey.IsEmpty())
		szWhere.AppendFormat(_T(" and  HD_TRANSPLACEID= '%s'"), m_szHospitalKey);

	/*szSQL.Format(_T(" SELECT hh_provid, sp_name,") \
				_T("   Get_hospitalname(hd_transplaceid) AS unit,") \
				_T("   Sum(c11) AS c11, Sum(c12) AS c12, Sum(c21) AS c21,") \
				_T("   Sum(c22) AS c22, Sum(c31) AS c31, Sum(c32) AS c32,") \
				_T("   Sum(c41) AS c41, Sum(c42) AS c42, Sum(c51) AS c51,") \
				_T("   Sum(c52) AS c52, Sum(c61) AS c61, Sum(c62) AS c62,") \
				_T("   Sum(c71) AS c71, Sum(c72) AS c72, Sum(c11+c21+c31+c41+c51+c61+c71) AS ct1, ") \
				_T("   Sum(c12+c22+c32+c42+c52+c62+c72) AS ct2") \
				_T(" FROM   (SELECT") \
				_T("           hd_transplaceid,") \
				_T("           CASE WHEN hd_object=1") \
				_T("                AND hd_insline='N' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c11,") \
				_T("           CASE WHEN hd_object=1") \
				_T("                AND hd_insline='Y' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c12,") \
				_T("           CASE WHEN hd_object=2") \
				_T("                AND hd_insline='N' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c21,") \
				_T("           CASE WHEN hd_object=2") \
				_T("                AND hd_insline='Y' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c22,") \
				_T("           CASE WHEN hd_object=4") \
				_T("                AND hd_insline='N' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c31,") \
				_T("           CASE WHEN hd_object=4") \
				_T("                AND hd_insline='Y' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c32,") \
				_T("           CASE WHEN hd_object=5") \
				_T("                AND hd_insline='N' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c41,") \
				_T("           CASE WHEN hd_object=5") \
				_T("                AND hd_insline='Y' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c42,") \
				_T("           CASE WHEN hd_object=9") \
				_T("                AND hd_insline='N' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c51,") \
				_T("           CASE WHEN hd_object=9") \
				_T("                AND hd_insline='Y' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c52,") \
				_T("           CASE WHEN hd_object=10") \
				_T("                AND hd_insline='N' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c61,") \
				_T("           CASE WHEN hd_object=10") \
				_T("                AND hd_insline='Y' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c62,") \
				_T("           CASE WHEN hd_object=11") \
				_T("                AND hd_insline='N' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c71,") \
				_T("           CASE WHEN hd_object=11") \
				_T("                AND hd_insline='Y' THEN 1") \
				_T("           ELSE 0") \
				_T("           END AS c72") \
				_T("         FROM   hms_doc") \
				_T("         LEFT JOIN hms_card ON (hc_idx=hd_cardidx)") \
				_T("         WHERE  hd_transplaceid IS NOT NULL") \
				_T("         AND hd_object NOT IN (3, 6, 7, 8, 12) ") \
				_T("		 %s)") \
				_T(" LEFT JOIN hms_hospital ON (hh_id = hd_transplaceid)") \
				_T(" LEFT JOIN sys_prov ON (sp_id = hh_provid)") \
				_T(" GROUP  BY hh_provid, sp_name, hd_transplaceid") \
				_T(" ORDER  BY hh_provid, unit"), szWhere);*/

	szSQL.Format(_T(" SELECT ") \
				_T(" Get_patientname(hd_docno) patient_name,") \
				_T(" hd_docno as docno,") \
				_T(" HD_ADMITDEPT as khoa,") \
				_T(" hd_admitdate as ngayvao,") \
				_T(" HD_ENDDATE as ngayra,") \
					
				_T(" HCR_ADMITDEPT AS khoavao,") \
				_T(" HCR_DISCHARGEDEPT AS khoara,") \


				_T(" ho_desc      as doituong,") \
				_T(" hd_cardno as sothe,") \
				_T(" HD_CONTACTTEL as mobile,") \
				_T(" HD_TRANSPLACE as benhvien") \
				_T(" from hms_doc") \
				_T(" LEFT JOIN HMS_OBJECT ON (hms_doc.HD_OBJECT=ho_id)") \
				_T(" LEFT JOIN hms_card ON (hc_idx =hd_cardidx)") \

				_T(" LEFT JOIN hms_hospital") \
				_T(" ON (hh_id = hd_transplaceid)") \
				_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (hd_docno=hcr_docno)") \


				_T(" where hd_transplaceid is not null") \
				_T(" AND hd_object NOT     IN (3, 6, 7, 8, 12) %s") \
				_T(" order by hd_admitdate"), szWhere);
	return szSQL;
}

int CRMDetailTransferPatientStatistic::OnListCheckAll()
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

int CRMDetailTransferPatientStatistic::OnListUnCheckAll()
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