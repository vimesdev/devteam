#include "stdafx.h"
#include "PMSoldierDrugUsageA11.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPMSoldierDrugUsageA11 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSoldierDrugUsageA11* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPMSoldierDrugUsageA11 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSoldierDrugUsageA11 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSoldierDrugUsageA11 *)pWnd)->OnToDateCheckValue();
} 
static void _OnExaminationSelectFnc(CWnd *pWnd){
	 ((CPMSoldierDrugUsageA11*)pWnd)->OnExaminationSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CPMSoldierDrugUsageA11*)pWnd)->OnOutpatientSelect();
}
static void _OnInwardSelectFnc(CWnd *pWnd){
	 ((CPMSoldierDrugUsageA11*)pWnd)->OnInwardSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSoldierDrugUsageA11 *pVw = (CPMSoldierDrugUsageA11 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSoldierDrugUsageA11 *pVw = (CPMSoldierDrugUsageA11 *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CPMSoldierDrugUsageA11*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSoldierDrugUsageA11*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSoldierDrugUsageA11*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CPMSoldierDrugUsageA11*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CPMSoldierDrugUsageA11*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSoldierDrugUsageA11*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSoldierDrugUsageA11*)pWnd)->OnDeptListDeleteItem();
} 
CPMSoldierDrugUsageA11::CPMSoldierDrugUsageA11(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSoldierDrugUsageA11::~CPMSoldierDrugUsageA11(){
}
void CPMSoldierDrugUsageA11::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 545);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 280, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 285, 30, 375, 55);
	m_wndReportPeriod.Create(this,380, 30, 570, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 280, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 285, 60, 375, 85);
	m_wndToDate.Create(this,380, 60, 570, 85); 
	m_wndExamination.Create(this, _T("Examination"), 5, 550, 90, 575);
	m_wndOutpatient.Create(this, _T("Outpatient"), 95, 550, 195, 575);
	m_wndInward.Create(this, _T("Inward"), 200, 550, 300, 575);
	m_wndPrint.Create(this, _T("&Print"), 410, 550, 490, 575);
	m_wndExport.Create(this, _T("&Export"), 495, 550, 575, 575);
	m_wndObjectList.Create(this,10, 90, 570, 310); 
	m_wndDeptList.Create(this,10, 315, 570, 540); 

}
void CPMSoldierDrugUsageA11::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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


	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndObjectList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndObjectList.SetCheckBox(TRUE);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
}

void CPMSoldierDrugUsageA11::OnSetWindowEvents(){
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
	m_wndExamination.SetEvent(WE_CLICK, _OnExaminationSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndInward.SetEvent(WE_CLICK, _OnInwardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);
	m_wndObjectList.AddEvent(1, _T("Delete"), _OnObjectListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
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
void CPMSoldierDrugUsageA11::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndExamination.GetDlgCtrlID(), m_bExamination);
	DDX_Radio(pDX, m_wndOutpatient.GetDlgCtrlID(), m_nOutpatient);
	DDX_Radio(pDX, m_wndInward.GetDlgCtrlID(), m_nInward);

}
void CPMSoldierDrugUsageA11::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nOutpatient = 1;
	m_nInward = 1;
}

int CPMSoldierDrugUsageA11::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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

/*void CPMSoldierDrugUsageA11::OnYearChange(){
	
} */
/*void CPMSoldierDrugUsageA11::OnYearSetfocus(){
	
} */
/*void CPMSoldierDrugUsageA11::OnYearKillfocus(){
	
} */
int CPMSoldierDrugUsageA11::OnYearCheckValue(){
	return 0;
}
 
void CPMSoldierDrugUsageA11::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPMSoldierDrugUsageA11::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CDate dte;
	CString tmpStr;
	int nMonth = ToInt(m_szReportPeriodKey);
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

/*void CPMSoldierDrugUsageA11::OnReportPeriodSetfocus(){
	
}*/
/*void CPMSoldierDrugUsageA11::OnReportPeriodKillfocus(){
	
}*/
long CPMSoldierDrugUsageA11::OnReportPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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

/*void CPMSoldierDrugUsageA11::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPMSoldierDrugUsageA11::OnFromDateChange(){
	
} */
/*void CPMSoldierDrugUsageA11::OnFromDateSetfocus(){
	
} */
/*void CPMSoldierDrugUsageA11::OnFromDateKillfocus(){
	
} */
int CPMSoldierDrugUsageA11::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPMSoldierDrugUsageA11::OnToDateChange(){
	
} */
/*void CPMSoldierDrugUsageA11::OnToDateSetfocus(){
	
} */
/*void CPMSoldierDrugUsageA11::OnToDateKillfocus(){
	
} */
int CPMSoldierDrugUsageA11::OnToDateCheckValue(){
	return 0;
}
 
void CPMSoldierDrugUsageA11::OnExaminationSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnDeptListLoadData();
	if (m_bExamination)
	{
		m_wndInward.EnableWindow(FALSE);
		m_wndOutpatient.EnableWindow(FALSE);
	}
	else
	{
		m_wndInward.EnableWindow(TRUE);
		m_wndOutpatient.EnableWindow(TRUE);
	}
	m_nOutpatient = 1;
	m_nInward = 1;
	UpdateData(false);
}

void CPMSoldierDrugUsageA11::OnOutpatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CPMSoldierDrugUsageA11::OnInwardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CPMSoldierDrugUsageA11::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, nIdx2 = 1;
	CString szSQL, tmpStr, szReportName, szDate, szDepts, szObjects, szTitle, szMemory, szNewGroup, szOldGroup;
	double nTotal = 0, nTotal2 = 0, nTtlAmt = 0, nTtlAmt2 = 0;
	szReportName = _T("Reports\\HMS\\PM_QUYETTOANSUDUNGTHUOC-VTYT.RPT");
	if (!rpt.Init(szReportName))
		return;
	if (m_bExamination)
		szSQL = GetQueryString1();
	else
		szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);

		for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
		{
			if (m_wndDeptList.GetCheck(i))
			{
				if (!szDepts.IsEmpty())
					szDepts += _T(", ");
				szDepts.AppendFormat(_T("%s"), m_wndDeptList.GetItemText(i, 0));
			}
		}
		CStringToken token(szDepts, _T(","));
		int nCount = token.GetSize();
		if (nCount == 1)
		{
			tmpStr = szDepts;
		}
		else
		{
			tmpStr.Format(_T(""));
		}
		rptHeader->SetValue(_T("Department"), tmpStr);

		if(m_bExamination || m_nOutpatient == 0)
		{
			szTitle.Format(rptHeader->GetValue(_T("ReportName")), _T("NGO\x1EA0I TR\xDA"), tmpStr);
		}
		else
		{
			szTitle.Format(rptHeader->GetValue(_T("ReportName")), _T("N\x1ED8I TR\xDA"), tmpStr);
		}
		rptHeader->SetValue(_T("ReportName"), szTitle);
		
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

		for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
		{
			if (m_wndObjectList.GetCheck(i))
			{
				if (!szObjects.IsEmpty())
					szObjects += _T(", ");
				szObjects += m_wndObjectList.GetItemText(i, 0);
			}
		}

		if(szObjects == _T("3"))
		{
			rptHeader->SetValue(_T("Object"), _T("\x110\x1ED0I T\x1AF\x1EE2NG \x43H\xCDNH S\xC1\x43H"));
		}
		else
		{
			rptHeader->SetValue(_T("Object"), _T("\x110\x1ED0I T\x1AF\x1EE2NG \x42\x1ED8 \x110\x1ED8I"));
		}
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rs.GetValue(_T("dept"), szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (nTotal2 > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				tmpStr.Format(_T("\x43\x1ED9ng kho\x61: T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n:"));
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				rptDetail->SetValue(_T("s9"), ToString(nTotal));
				rptDetail->SetValue(_T("s10"), ToString(nTotal2));
				nTtlAmt += nTotal;
				nTtlAmt2 += nTotal2;
				nTotal = 0;
				nTotal2 = 0;
				nIdx2++;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			tmpStr.Format(_T("Kho\x61 %s"), szNewGroup);
			rptGroup->SetValue(_T("GroupName"), tmpStr);
			nIdx = 1;
			szOldGroup = szNewGroup;
		}

		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			nTotal++;
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("rank")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("work_place")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("patient_id")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("dept")));
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("doctor_name")));
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("diagnostic")));
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("numbertr")));
			rs.GetValue(_T("amount"), nTmp);
			nTotal2+= nTmp;
			rptDetail->SetValue(_T("10"), double2str(nTmp));
			rptDetail->SetValue(_T("11"), rs.GetValue(_T("doc_no")));
		}
		rs.MoveNext();
	}
	if (nTotal2 > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
		tmpStr.Format(_T("\x43\x1ED9ng kho\x61: T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n:"));
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal);
		rptDetail->SetValue(_T("s9"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal2);
		rptDetail->SetValue(_T("s10"), tmpStr);
		nTtlAmt += nTotal;
		nTtlAmt2 += nTotal2;
	}
	if (nIdx2 > 1)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
		tmpStr.Format(_T("\x43\x1ED9ng \x63\xE1\x63 kho\x61: T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n:"));
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);
		tmpStr.Format(_T("%f"), nTtlAmt);
		rptDetail->SetValue(_T("s9"), tmpStr);
		tmpStr.Format(_T("%f"), nTtlAmt2);
		rptDetail->SetValue(_T("s10"), tmpStr);
	}
	szMemory.Format(_T("%.2f"), nTtlAmt2);
	MoneyToString(szMemory, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng"));
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), pMF->GetSysTime(), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}

void CPMSoldierDrugUsageA11::OnExportSelect(){
	CMainFrame_E10 *pMF	= (CMainFrame_E10*)	AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("\x58u\x1EA5t t\x1ED5ng h\x1EE3p"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("\x58u\x1EA5t \x63hi ti\x1EBFt thu\x1ED1\x63"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport();
		break;
	case 2:
		OnExport2();
		break;
	}
	}

void CPMSoldierDrugUsageA11::OnExport(){
	CMainFrame_E10 *pMF	= (CMainFrame_E10*)	AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord	rs(&pMF->m_db);
	CExcel xls;
	CString	szSQL, tmpStr, szNewGroup, szOldGroup;
	double nTmp	= 0;
	double nTotal = 0, nTotal2 = 0, nTtlAmt = 0, nTtlAmt2 = 0;
	int	nIdx = 1, nRow = 0, nCol = 0, nIdx2 = 1;
	if (m_bExamination)
		szSQL = GetQueryString1();
	else
		szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 25);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 25);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 15);
	xls.SetCellMergedColumns(0,	0, 2);
	xls.SetCellMergedColumns(0,	1, 2);
	xls.SetCellMergedColumns(0,	2, 9);
	xls.SetCellMergedColumns(0,	3, 9);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098,	true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO:	Write Excel	Name
	tmpStr = _T("\x42\xC1O \x43\xC1O S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 \x110\x1ED0I T\x1AF\x1EE2NG \x42\x1ED8 \x110\x1ED8I");
	xls.SetCellText(0, 2, tmpStr, 4098,	true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),	CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098,	true);
	//TODO:	Write Column Header
	xls.SetCellText(0, 5, _T("STT"), 4098, true);
	xls.SetCellText(1, 5, _T("H\x1ECD v\xE0 t\xEAn"), 4098, true);
	xls.SetCellText(2, 5, _T("\x43\x1EA5p \x62\x1EAD\x63"), 4098, true);
	xls.SetCellText(3, 5, _T("\x110\x1A1n v\x1ECB"), 4098, true);
	xls.SetCellText(4, 5, _T("S\x1ED1 \x42\x41"), 4098, true);
	xls.SetCellText(5, 5, _T("Kho\x61 \x111i\x1EC1u tr\x1ECB"), 4098, true);
	xls.SetCellText(6, 5, _T("\x42S\x110T"), 4098, true);
	xls.SetCellText(7, 5, _T("\x43h\x1EA9n \x111o\xE1n"), 4098, true);
	xls.SetCellText(8, 5, _T("Ng\xE0y \x110T"), 4098, true);
	xls.SetCellText(9, 5, _T("Th\xE0nh ti\x1EC1n"), 4098, true);
	xls.SetCellText(10, 5, _T("HS"), 4098, true);
	nRow = 6;
	nCol = 0;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (nTotal2 > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 8);
				xls.SetCellText(nCol, nRow, _T("\x43\x1ED9ng kho\x61: T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n:"), FMT_TEXT | FMT_RIGHT, true);
				xls.SetCellText(nCol+8, nRow, ToString(nTotal), FMT_NUMBER1, true);
				xls.SetCellText(nCol+9, nRow, ToString(nTotal2), FMT_NUMBER1, true);
				nTtlAmt += nTotal;
				nTtlAmt2 += nTotal2;
				nTotal = 0;
				nTotal2 = 0;
				nIdx2++;
				nRow++;
			}
			tmpStr.Format(_T("Kho\x61 %s"), szNewGroup);
			xls.SetCellMergedColumns(nCol, nRow, 11);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			nIdx = 1;
			szOldGroup = szNewGroup;
			nRow++;
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		nTotal++;
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("rank")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("work_place")),	FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("patient_id")), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("dept")), FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("doctor_name")), FMT_TEXT);
		xls.SetCellText(7, nRow, rs.GetValue(_T("diagnostic")),	FMT_TEXT);
		xls.SetCellText(8, nRow, rs.GetValue(_T("numbertr")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), nTmp);
		nTotal2 += nTmp;
		xls.SetCellText(9, nRow, double2str(nTmp), FMT_NUMBER1);
		xls.SetCellText(10, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	if (nTotal2 > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 8);
		xls.SetCellText(nCol, nRow, _T("\x43\x1ED9ng kho\x61: T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n:"), FMT_TEXT | FMT_RIGHT, true);
		xls.SetCellText(nCol+8, nRow, ToString(nTotal), FMT_NUMBER1, true);
		xls.SetCellText(nCol+9, nRow, ToString(nTotal2), FMT_NUMBER1, true);
		nTtlAmt += nTotal;
		nTtlAmt2 += nTotal2;
		nRow++;
	}
	if (nIdx2 > 1)
	{
		xls.SetCellMergedColumns(nCol, nRow, 8);
		xls.SetCellText(nCol, nRow, _T("\x43\x1ED9ng \x63\xE1\x63 kho\x61: T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n:"), FMT_TEXT | FMT_RIGHT, true);
		xls.SetCellText(nCol+8, nRow, ToString(nTtlAmt), FMT_NUMBER1, true);
		xls.SetCellText(nCol+9, nRow, ToString(nTtlAmt2), FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao su dung thuoc dt bo doi.xls"));
}

void CPMSoldierDrugUsageA11::OnExport2(){
	CMainFrame_E10 *pMF	= (CMainFrame_E10*)	AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 40);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 20);	xls.SetColumnWidth(4, 12);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 10);	xls.SetColumnWidth(7, 10);	xls.SetColumnWidth(8, 15);	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098,	true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),	CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098,	true);	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O \x43HI TI\x1EBET S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 \x42\x1ED8 \x110\x1ED8I"), FMT_TEXT | FMT_CENTER , true, 14);	xls.SetCellText(0, 4, _T("TT"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetCellText(1, 4, _T("T\xEAn thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetCellText(2, 4, _T("M\x1EE9\x63 thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetCellText(3, 4, _T("H\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetCellText(4, 4, _T("S\x1ED1 \x110K/GPNK"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetCellText(5, 4, _T("\x110\x1A1n v\x1ECB t\xEDnh"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetCellText(6, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetCellText(7, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetCellText(8, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER , true, 10);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 8);	xls.SetMerge(3, 3, 0, 8);	if (m_bExamination)
		szSQL = GetQueryString3();
	else
		szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);		rs.GetValue(_T("product_name"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_level"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_name2"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("serial"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("unit"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("qty"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);		rs.GetValue(_T("price"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);		rs.GetValue(_T("amount"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\baocaochitietsudungthuocbodoi.xls"));
}

void CPMSoldierDrugUsageA11::OnObjectListDblClick(){
	
}
 
void CPMSoldierDrugUsageA11::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CPMSoldierDrugUsageA11::OnObjectListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CPMSoldierDrugUsageA11::OnObjectListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	//szWhere.Format(_T(" AND ho_type IN('S') "));

	szSQL.Format(_T("SELECT ho_id AS ID, ") \
		         _T("ho_desc AS Name, ") \
				 _T("ho_type AS Type ") \
		         _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s ") \
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

void CPMSoldierDrugUsageA11::OnDeptListDblClick(){
	
}
 
void CPMSoldierDrugUsageA11::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CPMSoldierDrugUsageA11::OnDeptListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CPMSoldierDrugUsageA11::OnDeptListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	m_wndDeptList.BeginLoad();
	int nCount = 0;
	szWhere = _T("'DT'");
	if (m_bExamination)
		szWhere = _T("'KB'");
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type = %s ORDER BY id "), szWhere);

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

CString CPMSoldierDrugUsageA11::GetQueryString(){
	CString szSQL, szWhere, szWhereObject, szObjects, szDepts;
	szWhere.Format(_T(" AND discharge_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObjectList.GetItemText(i, 0);
		}
	}
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	if (szObjects.IsEmpty())
		szObjects = _T("1,2,3,4,5,6,7,8,9,10,11,12,13,14");
	szWhereObject.AppendFormat(_T(" AND hd_object IN (%s)"), szObjects);
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND discharge_dept IN (%s)"), szDepts);
	if (m_nOutpatient == 0)
		szWhere.AppendFormat(_T(" AND hd_outpatient = 'Y'"));
	else if (m_nInward == 0)
		szWhere.AppendFormat(_T(" AND NVL(hd_outpatient, 'N') <> 'Y'"));
	szSQL.Format(_T(" SELECT    Get_patientname(doc_no) patient_name, ") \
				_T(" doc_no,") \
				_T("           Get_syssel_desc('hms_rank', Decode(0, doc_rank, hp_rank, ") \
				_T("                                                 hp_rank)) rank, ") \
				_T("           hp_workplace work_place, ") \
				_T("           record_no patient_id, ") \
				_T("           discharge_dept dept, ") \
				_T("           (SELECT Substr(su_name, Instr(su_name, ' ', -1) + 1) ") \
				_T("            FROM   sys_user ") \
				_T("            WHERE  su_userid = treat_doctor) doctor_name, ") \
				_T("           main_disease diagnostic, ") \
				_T("           sumtreat numbertr, ") \
				_T("           SUM(hfe_polprice * hfe_quantity) amount ") \
				_T(" FROM     (SELECT    hd_docno doc_no, ") \
				_T("                     hcrf_invoicefee invoice_fee, ") \
				_T("                     hcr_dischargedept discharge_dept, ") \
				_T("                     hd_outpatient, ") \
				_T("                     hd_patientno patient_no, ") \
				_T("                     hd_rank doc_rank, ") \
				_T("                     hcr_recordno record_no, ") \
				_T("                     hcr_treatdoctor treat_doctor, ") \
				_T("                     hcr_maindisease main_disease, ") \
				_T("                     hcr_sumtreat sumtreat, ") \
				_T("                     hcr_dischargedate discharge_date, ") \
				_T("					 0 treat_time") \
				_T("           FROM      hms_clinical_record ") \
				_T("           LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
				_T("           WHERE     NVL(hd_outpatient, 'N') = 'N' AND hcr_status = 'T' AND hcrf_acceptedfee IN ( 'Y', 'P' ) %s") \
				_T("           UNION ALL ") \
				_T("           SELECT hd_docno, ") \
				_T("                              htrf_invoicefee, ") \
				_T("                              htr_deptid, ") \
				_T("                              hd_outpatient, ") \
				_T("                              hd_patientno, ") \
				_T("                              hd_rank, ") \
				_T("                              hcr_recordno, ") \
				_T("                              htr_doctor, ") \
				_T("                              htr_maindisease, ") \
				_T("                              htr_sumtreat, ") \
				_T("                              htr_dischargedate, ") \
				_T("						      htr_treattime ") \
				_T("           FROM      hms_clinical_record ") \
				_T("           LEFT JOIN hms_treatment_record ON ( hcr_docno = htr_docno ) ") \
				_T("           LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
				_T("           WHERE     NVL(hd_outpatient, 'N') = 'Y' AND htr_status = 'T' AND htrf_acceptedfee IN ( 'Y', 'P' ) %s)") \
				_T(" LEFT JOIN hms_patient ON ( hp_patientno = patient_no ) ") \
				_T(" LEFT JOIN hms_fee ON ( hfe_docno = doc_no AND hfe_treattime = treat_time) ") \
				_T(" LEFT JOIN hms_fee_group ON ( hfg_id = hfe_group ) ") \
				_T(" LEFT JOIN sys_dept ON ( discharge_dept = sd_id ) ") \
				_T(" WHERE     hfe_category <> 'Y' AND hfe_inspaid > 0 AND hfg_type_id = 800 %s") \
				_T(" GROUP     BY doc_no,doc_rank,hp_rank,discharge_dept,sd_index,hp_workplace,record_no,treat_doctor,main_disease,sumtreat ") \
				_T(" ORDER     BY dept "), szWhereObject, szWhereObject, szWhere);

	return szSQL;
}

CString CPMSoldierDrugUsageA11::GetQueryString1()
{
	CString szSQL, szWhere, szObjects, szDepts;
	szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObjectList.GetItemText(i, 0);
		}
	}
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	if (szObjects.IsEmpty())
		szObjects = _T("1,2,3,4,5,6,7,8,9,10,11,12,13,14");
	szWhere.AppendFormat(_T(" AND hd_object IN (%s)"), szObjects);
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_enddept IN (%s)"), szDepts);
	szSQL.Format(_T(" SELECT    Get_patientname(hd_docno) AS patient_name, ") \
	_T("						hd_docno AS doc_no,") \
	_T("           get_syssel_desc('hms_rank', DECODE(0, hd_rank, hp_rank, hp_rank)) AS rank, ") \
	_T("           hp_workplace AS work_place, ") \
	_T("           hd_enddept AS dept, ") \
	_T("           (SELECT Substr(su_name, Instr(su_name, ' ', -1) + 1) ") \
	_T("            FROM   sys_user ") \
	_T("            WHERE  su_userid = hd_doctor) AS doctor_name, ") \
	_T("		   CAST (' ' AS NVARCHAR2(1)) AS patient_id,") \
	_T("           hd_conclusion AS diagnostic, ") \
	_T("           SUM(hpol_qtyissue * hpol_unitprice) AS amount ") \
	_T(" FROM      hms_doc") \
	_T(" LEFT JOIN hms_pharmaorder ON (hpo_docno = hd_docno)") \
	_T(" LEFT JOIN hms_pharmaorderline ON (hpo_orderid = hpol_orderid)") \
	_T(" LEFT JOIN m_product_item ON (hpol_product_item_id = mpi_product_item_id)") \
	_T(" LEFT JOIN m_product ON (mpi_product_id = mp_product_id)") \
	_T(" LEFT JOIN hms_exam ON (hd_docno = he_docno AND he_deptid = hpo_deptid AND he_roomid = hpo_roomid)") \
	_T(" LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno ) ") \
	_T(" LEFT JOIN sys_dept ON (sd_id = hd_enddept)") \
	_T(" LEFT JOIN m_storagelist ON (msl_storage_id = hpo_storage_id)") \
	_T(" WHERE     hd_suggestion NOT IN ('C', 'D') AND msl_type = 'C'") \
	_T(" AND mp_org_id = 'PM' AND hpo_orderstatus NOT IN ('O', 'C') AND hpol_inoperation <> 'Y' %s ") \
	_T(" GROUP     BY hd_docno, ") \
	_T("              hd_rank, ") \
	_T("			  hp_rank,") \
	_T("              hd_enddept, ") \
	_T("			  sd_index,") \
	_T("              hp_workplace, ") \
	_T("              hd_doctor, ") \
	_T("              hd_conclusion ") \
	_T(" ORDER BY dept"), szWhere);

	return szSQL;
}

CString CPMSoldierDrugUsageA11::GetQueryString2(){
	CString szSQL, szWhere, szWhereObject, szObjects, szDepts;
	szWhere.Format(_T(" AND discharge_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObjectList.GetItemText(i, 0);
		}
	}
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	if (szObjects.IsEmpty())
		szObjects = _T("1,2,3,4,5,6,7,8,9,10,11,12,13,14");
	szWhereObject.AppendFormat(_T(" AND hd_object IN (%s)"), szObjects);
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND discharge_dept IN (%s)"), szDepts);
	if (m_nOutpatient == 0)
		szWhere.AppendFormat(_T(" AND hd_outpatient = 'Y'"));
	else if (m_nInward == 0)
		szWhere.AppendFormat(_T(" AND NVL(hd_outpatient, 'N') <> 'Y'"));
	szSQL.Format(_T(" SELECT") \
		_T(" product_name AS product_name,") \
		_T(" hfg_level AS product_level,") \
		_T(" product_name2 AS product_name2,") \
		_T(" (SELECT mp_serial FROM m_product WHERE mp_product_id = product_id) AS serial,") \
		_T(" hfe_unit AS unit,") \
		_T(" SUM(hfe_quantity) AS qty,") \
		_T(" hfe_polprice AS price,") \
		_T(" SUM(hfe_polprice * hfe_quantity) AS amount") \
		_T(" FROM") \
		_T("   (SELECT hd_docno doc_no,") \
		_T("     hcrf_invoicefee invoice_fee,") \
		_T("     hcr_dischargedept discharge_dept,") \
		_T("     hd_outpatient,") \
		_T("     hd_patientno patient_no,") \
		_T("     hd_rank doc_rank,") \
		_T("     hcr_recordno record_no,") \
		_T("     hcr_treatdoctor treat_doctor,") \
		_T("     hcr_maindisease main_disease,") \
		_T("     hcr_sumtreat sumtreat,") \
		_T("     hcr_dischargedate discharge_date,") \
		_T("     0 treat_time") \
		_T("   FROM hms_clinical_record") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hcr_docno        = hd_docno )") \
		_T("   WHERE NVL(hd_outpatient, 'N')   = 'N'") \
		_T("   AND hcr_status        = 'T'") \
		_T("   AND hcrf_acceptedfee IN ( 'Y', 'P' ) %s") \
		_T("   UNION ALL") \
		_T("   SELECT hd_docno,") \
		_T("     htrf_invoicefee,") \
		_T("     htr_deptid,") \
		_T("     hd_outpatient,") \
		_T("     hd_patientno,") \
		_T("     hd_rank,") \
		_T("     hcr_recordno,") \
		_T("     htr_doctor,") \
		_T("     htr_maindisease,") \
		_T("     htr_sumtreat,") \
		_T("     htr_dischargedate,") \
		_T("     htr_treattime") \
		_T("   FROM hms_clinical_record") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON ( hcr_docno = htr_docno )") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hcr_docno        = hd_docno )") \
		_T("   WHERE NVL(hd_outpatient, 'N')   = 'Y'") \
		_T("   AND htr_status        = 'T'") \
		_T("   AND htrf_acceptedfee IN ( 'Y', 'P' ) %s") \
		_T("   )") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON ( hp_patientno = patient_no )") \
		_T(" LEFT JOIN hms_fee") \
		_T(" ON ( hfe_docno    = doc_no") \
		_T(" AND hfe_treattime = treat_time)") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON ( hfg_id = hfe_group )") \
		_T(" LEFT JOIN sys_dept") \
		_T(" ON ( discharge_dept = sd_id )") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( product_item_id = hfe_itemid)") \
		_T(" WHERE hfe_category <> 'Y'") \
		_T(" AND hfe_inspaid     > 0") \
		_T(" AND hfg_type_id     = 800 %s") \
		_T(" GROUP BY") \
		_T(" product_name,") \
		_T(" hfg_level,") \
		_T(" product_name2,") \
		_T(" product_id,") \
		_T(" hfe_unit,") \
		_T(" hfe_polprice") \
		_T(" ORDER BY product_name"), szWhereObject, szWhereObject, szWhere);
	
	return szSQL;
}

CString CPMSoldierDrugUsageA11::GetQueryString3(){
	CString szSQL, szWhere, szObjects, szDepts;
	szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObjectList.GetItemText(i, 0);
		}
	}
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	if (szObjects.IsEmpty())
		szObjects = _T("1,2,3,4,5,6,7,8,9,10,11,12,13,14");
	szWhere.AppendFormat(_T(" AND hd_object IN (%s)"), szObjects);
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_enddept IN (%s)"), szDepts);
	szSQL.Format(_T(" SELECT") \
		_T(" mp_name AS product_name,") \
		_T(" hfg_level AS product_level,") \
		_T(" mp_name2 AS product_name2,") \
		_T(" mp_serial AS serial,") \
		_T(" get_uomname(mp_uom_id) AS unit,") \
		_T(" SUM(hpol_qtyissue) AS qty,") \
		_T(" hpol_unitprice AS price,") \
		_T(" SUM(hpol_qtyissue * hpol_unitprice) AS amount") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pharmaorder") \
		_T(" ON (hpo_docno = hd_docno)") \
		_T(" LEFT JOIN hms_pharmaorderline ON (hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN m_product_item ON (hpol_product_item_id = mpi_product_item_id)") \
		_T(" LEFT JOIN m_product ON (mpi_product_id = mp_product_id)") \
		_T(" LEFT JOIN hms_fee_group ON (mp_producttype = hfg_id)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON (hd_docno  = he_docno") \
		_T(" AND he_deptid = hpo_deptid AND he_roomid = hpo_roomid)") \
		_T(" LEFT JOIN m_storagelist") \
		_T(" ON (msl_storage_id       = hpo_storage_id)") \
		_T(" WHERE hd_suggestion NOT IN ('C', 'D')") \
		_T(" AND msl_type             = 'C'") \
		_T(" AND mp_org_id = 'PM'") \
		_T(" AND hpo_orderstatus NOT IN ('O', 'C') AND hpol_inoperation <> 'Y' %s") \
		_T(" GROUP BY") \
		_T(" mp_serial, mp_name,") \
		_T(" hfg_level,") \
		_T(" mp_name2,") \
		_T(" mp_product_id,") \
		_T(" mp_uom_id,") \
		_T(" hpol_unitprice") \
		_T(" ORDER BY mp_name"), szWhere);
	
	return szSQL;
}