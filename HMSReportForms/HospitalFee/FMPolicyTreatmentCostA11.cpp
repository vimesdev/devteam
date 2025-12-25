#include "stdafx.h"
#include "FMPolicyTreatmentCostA11.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyTreatmentCostA11* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyTreatmentCostA11* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11 *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPolicyTreatmentCostA11 *pVw = (CFMPolicyTreatmentCostA11 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPolicyTreatmentCostA11 *pVw = (CFMPolicyTreatmentCostA11 *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyTreatmentCostA11*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyTreatmentCostA11*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMPolicyTreatmentCostA11*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyTreatmentCostA11*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyTreatmentCostA11*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyTreatmentCostA11*)pWnd)->OnAddFMDischargeDepositUnpaidReport();
} 
static int _OnEditFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyTreatmentCostA11*)pWnd)->OnEditFMDischargeDepositUnpaidReport();
} 
static int _OnDeleteFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyTreatmentCostA11*)pWnd)->OnDeleteFMDischargeDepositUnpaidReport();
} 
static int _OnSaveFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyTreatmentCostA11*)pWnd)->OnSaveFMDischargeDepositUnpaidReport();
} 
static int _OnCancelFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyTreatmentCostA11*)pWnd)->OnCancelFMDischargeDepositUnpaidReport();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyTreatmentCostA11*)pWnd)->OnDeptListUnCheckAll();
}

CFMPolicyTreatmentCostA11::CFMPolicyTreatmentCostA11(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CFMPolicyTreatmentCostA11::~CFMPolicyTreatmentCostA11(){
}
void CFMPolicyTreatmentCostA11::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 550);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndInpatient.Create(this, _T("\x44\x1B0\x1EE3\x63 25.2"), 10, 520, 110, 545);
	m_wndOutpatient.Create(this, _T("\x44\x1B0\x1EE3\x63 25.3"), 115, 520, 215, 545);
	m_wndAll.Create(this, _T("T\xE0i \x63h\xEDnh TT"), 220, 520, 320, 545);
	m_wndPrint.Create(this, _T("&Print"), 265, 555, 345, 580);
	m_wndExport.Create(this, _T("&Export"), 350, 555, 430, 580);
	m_wndObjectList.Create(this,10, 90, 425, 285); 
	m_wndDeptList.Create(this,10, 290, 425, 515); 
}
void CFMPolicyTreatmentCostA11::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(75);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 240);


	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndObjectList.SetCheckBox(TRUE);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
}
void CFMPolicyTreatmentCostA11::OnSetWindowEvents()
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
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
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

	/*CString tmpStr;
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		tmpStr = m_wndObjectList.GetItemText(i, 2);

		if (tmpStr == _T("S"))
			m_wndObjectList.SetCheck(i, TRUE);
	}*/
}
void CFMPolicyTreatmentCostA11::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nInpatient);
	DDX_Radio(pDX, m_wndOutpatient.GetDlgCtrlID(), m_nOutpatient);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	//DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);

}
void CFMPolicyTreatmentCostA11::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPolicyTreatmentCostA11::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPolicyTreatmentCostA11::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_nInpatient = 1;
	m_nOutpatient = 1;
	m_nAll = 0;

}
int CFMPolicyTreatmentCostA11::SetMode(int nMode){
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
/*void CFMPolicyTreatmentCostA11::OnYearChange(){
	
} */
/*void CFMPolicyTreatmentCostA11::OnYearSetfocus(){
	
} */
/*void CFMPolicyTreatmentCostA11::OnYearKillfocus(){
	
} */
int CFMPolicyTreatmentCostA11::OnYearCheckValue()
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
void CFMPolicyTreatmentCostA11::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyTreatmentCostA11::OnReportPeriodSelendok()
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
/*void CFMPolicyTreatmentCostA11::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPolicyTreatmentCostA11::OnReportPeriodKillfocus(){
	
}*/
long CFMPolicyTreatmentCostA11::OnReportPeriodLoadData()
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
/*void CFMPolicyTreatmentCostA11::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPolicyTreatmentCostA11::OnFromDateChange(){
	
} */
/*void CFMPolicyTreatmentCostA11::OnFromDateSetfocus(){
	
} */
/*void CFMPolicyTreatmentCostA11::OnFromDateKillfocus(){
	
} */
int CFMPolicyTreatmentCostA11::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMPolicyTreatmentCostA11::OnToDateChange(){
	
} */
/*void CFMPolicyTreatmentCostA11::OnToDateSetfocus(){
	
} */
/*void CFMPolicyTreatmentCostA11::OnToDateKillfocus(){
	
} */
int CFMPolicyTreatmentCostA11::OnToDateCheckValue(){
	return 0;
} 
void CFMPolicyTreatmentCostA11::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyTreatmentCostA11::OnClerkSelendok(){
	 
}
/*void CFMPolicyTreatmentCostA11::OnClerkSetfocus(){
	
}*/
/*void CFMPolicyTreatmentCostA11::OnClerkKillfocus(){
	
}*/
long CFMPolicyTreatmentCostA11::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	}
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid in('A','F') %s ORDER BY su_userid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndClerk.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMPolicyTreatmentCostA11::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyTreatmentCostA11::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, nCount = 0;
	CString szSQL, tmpStr, szTemp, szReportName, szDate, szOldLev1, szNewLev1, szOldLev2, szNewLev2, szPos;
	long double nTotal[14], nGroupTotal1[14], nGroupTotal2[14];
	szReportName = _T("Reports\\HMS\\HF_TONGHOPCHIPHIKHAMCHUABENHBDCS.RPT");
	if (!rpt.Init(szReportName))
		return;
	if(m_nInpatient == 0)
	szSQL = GetQueryString2();
	else if(m_nOutpatient == 0)
	szSQL = GetQueryString3();
	else if(m_nAll== 0)
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 14; i++){
		nTotal[i] = 0;
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
	}
	TCHAR * dat[] = {_T("phi_kham"), _T("phi_giuong"), _T("phi_xn"), _T("phi_cdha"), _T("phi_pttt"), _T("phi_thuoc"), 
					_T("phi_vattu"), _T("phi_mau"), _T("tong_cp"), _T("phi_an"), _T("phi_ranggia"), _T("thu_khac"), _T("tong_thukhac"),
					_T("tong_chiphi")};
	int nStart = 7, nSumPos = 14 - 1;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rs.GetValue(_T("dept_id"), szNewLev1);
		rs.GetValue(_T("obj_class"), szNewLev2);
		if (szNewLev2 != szOldLev2)
		{
			if (nGroupTotal1[nSumPos] > 0)
			{	
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					szPos.Format(_T("s%d"), i + nStart);	
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal2[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			if (nGroupTotal2[nSumPos] > 0)
			{	
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					szPos.Format(_T("s%d"), i + nStart);	
					tmpStr.Format(_T("%f"), nGroupTotal2[i]);
					rptGroup->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal2[i];
					nGroupTotal2[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_CENTER);
				rptGroup->SetValue(_T("GroupName"), 
				szNewLev2==_T("0")?_T("\x42\x1EC6NH NH\xC2N \x42\x1ED8 \x110\x1ED8I"):_T("\x42\x1EC6NH NH\xC2N \x43H\xCDNH S\xC1\x43H- \x42\x1EA0N"));
			}
			szOldLev2 = szNewLev2;
			nIdx = 1;
		}
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[nSumPos] > 0)
			{
				
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					szPos.Format(_T("s%d"), i + nStart);	
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal2[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_LEFT);
				rptGroup->SetValue(_T("GroupName"), szNewLev1);
			}
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("work_place")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("doc_no")));
			rs.GetValue(_T("admit_date"), tmpStr);
			rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("discharge_date"), tmpStr);
			rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			for (int i = 0; i <= nSumPos; i++)
			{
				rs.GetValue(dat[i], nTmp);
				tmpStr.Format(_T("%f"), nTmp);
				szPos.Format(_T("%d"), i+nStart);
				rptDetail->SetValue(szPos, tmpStr);
				nGroupTotal1[i] += nTmp;	
			}
		}
		rs.MoveNext();
	}
	if (nGroupTotal1[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i + nStart);
			rptGroup->SetValue(szPos, tmpStr);
			nGroupTotal2[i]+= nGroupTotal1[i];
		}
	}
	if (nGroupTotal2[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng: "));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal2[i]);
			szPos.Format(_T("s%d"), i + nStart);
			rptGroup->SetValue(szPos, tmpStr);
			nTotal[i]+= nGroupTotal2[i];
		}
	}
	if (nTotal[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("s%d"), i + nStart);
			rptGroup->SetValue(szPos, tmpStr);
		}
		szTemp.Format(_T("%2.f"), nTotal);
		MoneyToString(szTemp, tmpStr);
		tmpStr += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWords"), tmpStr);
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}

void CFMPolicyTreatmentCostA11::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotal[14];
	int nIdx = 1, nRow = 0, nCol = 0, nTmpRow = 4;

	if(m_nInpatient == 0)
		szSQL = GetQueryString2();
	else if(m_nOutpatient == 0)
		szSQL = GetQueryString3();
	else if(m_nAll== 0)
		szSQL = GetQueryString();

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 14; i++)
		nTotal[i] = 0;
	TCHAR * dat[] = {_T("phi_kham"), _T("phi_giuong"), _T("phi_xn"), _T("phi_cdha"), _T("phi_pttt"), _T("phi_thuoc"), 
					_T("phi_vattu"), _T("phi_mau"), _T("tong_cp"), _T("phi_an"), _T("phi_ranggia"), _T("thu_khac"), _T("tong_thukhac"),
					_T("tong_chiphi")};
	TCHAR *col_name[] = {_T("STT"), _T("Ho va ten"), _T("Don vi"), _T("So HS"), _T("Ngay vao vien"), _T("Ngay ra vien"), 
		_T("Chi phi KCB"), _T("Tien kham"), _T("Giuong"), _T("XN"), _T("CDHA"), _T("PTTT"), _T("Thuoc"), _T("Vat tu"), _T("Mau"),
		_T("Tong cp"), _T("Cac khoan chi phi khac"), _T("Tien an"), _T("Thu cs"), _T("Thu khac"), _T("Tong cp khac"), _T("Tong chi phi")};
	
	TCHAR fmtstr[22];
	fmtstr[7] = 'R';
	fmtstr[16] = 'N';
	fmtstr[17] = 'R';
	fmtstr[21] = 'N';
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 7);
	xls.SetCellMergedColumns(0, 3, 7);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H T\x1EA0M G\x1EECI \x42N \x42HYT");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 25);
	for (int i = 0; i < 22; i++)
	{
		if (fmtstr[i] == 'R')
		{
			nCol--;
			nTmpRow = 5;
		}
		if (fmtstr[i] == 'N')
		{
			nTmpRow = 4;
		}
		xls.SetCellText(nCol, nTmpRow, col_name[i], 4098, true);
		nCol++;
	}
	int arrCols[] = {0, 1, 2, 3, 4, 5, 19};
	for (int i = 0; i < 7; i++)
		xls.SetCellMergedRows(arrCols[i], 4, 2);
	xls.SetCellMergedColumns(6, 4, 9);
	xls.SetCellMergedColumns(15, 4, 4);
	nRow = 6;
	nCol = 0;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		rs.GetValue(_T("admit_date"), tmpStr);
		xls.SetCellText(4, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("discharge_date"), tmpStr);
		xls.SetCellText(5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		for (int i = 0; i < 14; i++)
		{
			rs.GetValue(dat[i], nTmp);
			tmpStr.Format(_T("%f"), nTmp);
			nTotal[i] += nTmp;
			xls.SetCellText(i+6, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	if (nTotal[13] > 0)
	{
		xls.SetCellText(5, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), 4098, true);
		for (int i = 0; i < 14; i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			xls.SetCellText(i+6, nRow, tmpStr, FMT_NUMBER1, true);
		}
	}
	xls.Save(_T("Exports\\Tong hop chi phi KCB benh nhan BDCS.xls"));
}
void CFMPolicyTreatmentCostA11::OnObjectListDblClick(){
	
} 
void CFMPolicyTreatmentCostA11::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyTreatmentCostA11::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyTreatmentCostA11::OnObjectListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
void CFMPolicyTreatmentCostA11::OnDeptListDblClick(){
	
} 
void CFMPolicyTreatmentCostA11::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyTreatmentCostA11::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyTreatmentCostA11::OnDeptListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' ORDER BY id "));

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
int CFMPolicyTreatmentCostA11::OnAddFMDischargeDepositUnpaidReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPolicyTreatmentCostA11::OnEditFMDischargeDepositUnpaidReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPolicyTreatmentCostA11::OnDeleteFMDischargeDepositUnpaidReport(){
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
 		OnCancelFMDischargeDepositUnpaidReport();
 	}
	return 0;
}
int CFMPolicyTreatmentCostA11::OnSaveFMDischargeDepositUnpaidReport(){
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
 		//OnFMDischargeDepositUnpaidReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMPolicyTreatmentCostA11::OnCancelFMDischargeDepositUnpaidReport(){
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
int CFMPolicyTreatmentCostA11::OnFMDischargeDepositUnpaidReportListLoadData(){
	return 0;
}

int CFMPolicyTreatmentCostA11::OnDeptListCheckAll()
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

int CFMPolicyTreatmentCostA11::OnDeptListUnCheckAll()
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


int CFMPolicyTreatmentCostA11::OnObjectListCheckAll()
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

int CFMPolicyTreatmentCostA11::OnObjectListUnCheckAll()
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

CString CFMPolicyTreatmentCostA11::GetQueryString()
{
	CString szSQL, szWhere, szDepts, szObjects, szInpSQL, szOutpSQL, szSubFee;

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" AND i.HFE_POSTEDDATE BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfe_objectid in(%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfe_deptid in(%s) "), szDepts);
	}
	szSubFee.Format(_T("SELECT 0 phi_kham, ") \
	_T("		0 phi_giuong, ") \
	_T("        0 phi_xn, ") \
	_T("        0 phi_cdha, ") \
	_T("        0 phi_pttt, ") \
	_T("        (CASE WHEN mp_org_id = 'PM' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_thuoc, ") \
	_T("        (CASE WHEN mp_org_id = 'MA' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_vattu, ") \
	_T("        (CASE WHEN mp_org_id = 'BB' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_mau, ") \
	_T("        0 phi_an,") \
	_T("        0 phi_ranggia,") \
	_T("		hfe_cost - hfe_diffcost tong_cp,") \
	_T("        hfe_docno doc_no,") \
	_T("        hfe_invoiceno invoice_no  ") \
	_T(" FROM hms_fee") \
	_T(" LEFT JOIN m_product_item ON (cast(hfe_itemid as INTEGER) = mpi_product_item_id)") \
	_T(" LEFT JOIN m_product ON (mp_product_id = mpi_product_id)") \
	_T(" WHERE  hfe_status NOT IN ( 'O', 'C' ) AND hfe_category <> 'Y' AND hfe_type IN ('D', 'M')") \
	_T(" UNION ALL") \
	_T(" SELECT (CASE WHEN hfe_type = 'E' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_kham, ") \
	_T("		(CASE WHEN hfe_type = 'B' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_giuong, ") \
	_T("        (CASE WHEN (substr(hfe_group, 1, 2) = 'B1') THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_xn, ") \
	_T("        (CASE WHEN substr(hfe_group, 1, 2) IN ('B2', 'B3') THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_cdha, ") \
	_T("        (CASE WHEN hfe_type = 'O' AND ho_pdeptid <> 'B10' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_pttt, ") \
	_T("        0 phi_thuoc, ") \
	_T("        0 phi_vattu, ") \
	_T("        0 phi_mau, ") \
	_T("        (CASE WHEN hfe_type = 'F' THEN hfe_cost ELSE 0 END) phi_an,") \
	_T("        (CASE WHEN ho_pdeptid = 'B10' THEN hfe_cost ELSE 0 END) phi_ranggia,") \
	_T("		(CASE WHEN ho_pdeptid <> 'B10' OR hfe_type <> 'F' THEN hfe_cost - hfe_diffcost ELSE 0 END) tong_cp,") \
	_T("        hfe_docno doc_no,") \
	_T("        hfe_invoiceno invoice_no  ") \
	_T(" FROM hms_fee") \
	_T(" LEFT JOIN hms_operation ON (hfe_docno = ho_docno AND hfe_orderid = ho_idx AND hfe_itemid = ho_itemid)") \
	_T(" WHERE  hfe_status NOT IN ( 'O', 'C' ) AND hfe_category <> 'Y' AND hfe_type NOT IN ('D', 'M')"));

	szSQL.Format(_T("SELECT	CASE WHEN hfe_objectid = 1 THEN 0 ELSE 1 END obj_class,") \
	_T("					SUM(phi_kham) phi_kham, ") \
	_T("					SUM(phi_giuong) phi_giuong, ") \
	_T("					SUM(phi_xn) phi_xn, ") \
	_T("					SUM(phi_cdha) phi_cdha, ") \
	_T("					SUM(phi_pttt) phi_pttt, ") \
	_T("					SUM(phi_thuoc) phi_thuoc,") \
	_T("					SUM(phi_vattu) phi_vattu, ") \
	_T("					SUM(phi_mau) phi_mau, ") \
	_T("					SUM(phi_an) phi_an, ") \
	_T("					hfe_diffcost - SUM(phi_an) phi_ranggia, ") \
	_T("					0 thu_khac, ") \
	_T("					SUM(tong_cp) tong_cp, ") \
	_T("					hfe_diffcost + 0 tong_thukhac,") \
	_T("					hfe_diffcost + SUM(tong_cp) tong_chiphi,") \
	_T("					hfe_docno doc_no, ") \
	_T("					hfe_treattime treattime, ") \
	_T("					get_patientname(hfe_docno) patient_name,") \
	_T("					(select hp_workplace from hms_patient where hd_patientno = hp_patientno) work_place,") \
	_T("					case when NVL(hd_outpatient, 'N') = 'N' then (select hcr_admitdate from hms_clinical_record where hcr_docno = hfe_docno) else (select max(htr_admitdate) from hms_treatment_record where htr_docno = hfe_docno and htr_treattime = hfe_treattime) end admit_date,") \
	_T("					case when NVL(hd_outpatient, 'N') = 'N' then (select hcr_dischargedate from hms_clinical_record where hcr_docno = hfe_docno) else (select max(htr_dischargedate) from hms_treatment_record where htr_docno = hfe_docno and htr_treattime = hfe_treattime) end discharge_date,") \
	_T("					hfe_deptid dept_id") \
	_T("			FROM hms_fee_invoice i ") \
	_T("			LEFT JOIN hms_doc ON (hfe_docno = hd_docno)") \
	_T("			LEFT JOIN (%s) f ON (hfe_docno = doc_no AND hfe_invoiceno = invoice_no)") \
	_T("			WHERE hfe_objectid IN (1, 3, 8, 13) AND hfe_status = 'P' AND i.HFE_POSTED='Y' %s") \
	_T("			GROUP BY hfe_objectid, hfe_deptid, hfe_docno, hfe_treattime, hfe_diffcost, hd_patientno, NVL(hd_outpatient, 'N')") \
	_T("			ORDER BY obj_class, hfe_deptid"), szSubFee, szWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CFMPolicyTreatmentCostA11::GetQueryString2(){
	CString szSQL, szWhere, szDepts, szObjects, szInpSQL, szOutpSQL, szSubFee;

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hd_object in(%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and dept_id in(%s) "), szDepts);
	}
	szSQL.Format(_T(" SELECT obj_class,") \
		_T("   patient_name,") \
		_T("   work_place,") \
		_T("   doc_no,") \
		_T("   admit_date,") \
		_T("   discharge_date,") \
		_T("   treattime,") \
		_T("   SUM(phi_kham)    AS phi_kham,") \
		_T("   SUM(phi_giuong)  AS phi_giuong,") \
		_T("   SUM(phi_xn)      AS phi_xn,") \
		_T("   SUM(phi_cdha)    AS phi_cdha,") \
		_T("   SUM(phi_pttt)    AS phi_pttt,") \
		_T("   SUM(phi_thuoc)   AS phi_thuoc,") \
		_T("   SUM(phi_vattu)   AS phi_vattu,") \
		_T("   SUM(phi_mau)     AS phi_mau,") \
		_T("   SUM(phi_an)      AS phi_an,") \
		_T("   SUM(phi_ranggia) AS phi_ranggia,") \
		_T("   0                AS thu_khac,") \
		_T("   SUM(tong_cp)     AS tong_cp,") \
		_T("   0                AS tong_thukhac,") \
		_T("   0 + SUM(tong_cp) AS tong_chiphi") \
		_T(" FROM") \
		_T("   (SELECT hd_docno,") \
		_T("     hcr_admitdate     AS admit_date,") \
		_T("     hcr_dischargedate AS discharge_date,") \
		_T("     0                 AS treattime,") \
		_T("     CASE") \
		_T("       WHEN hd_object = 1") \
		_T("       THEN 0") \
		_T("       ELSE 1") \
		_T("     END                       AS obj_class,") \
		_T("     get_patientname(hd_docno) AS patient_name,") \
		_T("     (SELECT hp_workplace FROM hms_patient WHERE hd_patientno = hp_patientno") \
		_T("     ) AS work_place, hd_object") \
		_T("   FROM hms_clinical_record") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hcr_docno        = hd_docno )") \
		_T("   WHERE hd_outpatient   = 'N'") \
		_T("   AND hcr_status        = 'T'") \
		_T("   AND hcrf_acceptedfee IN ( 'Y', 'P' )") \
		_T("   AND hd_object        IN (1, 3, 8, 13)") \
		_T("   UNION ALL") \
		_T("   SELECT hd_docno,") \
		_T("     htr_admitdate,") \
		_T("     htr_dischargedate,") \
		_T("     htr_treattime,") \
		_T("     CASE") \
		_T("       WHEN hd_object = 1") \
		_T("       THEN 0") \
		_T("       ELSE 1") \
		_T("     END                       AS obj_class,") \
		_T("     get_patientname(hd_docno) AS patient_name,") \
		_T("     (SELECT hp_workplace FROM hms_patient WHERE hd_patientno = hp_patientno") \
		_T("     ) AS work_place, hd_object") \
		_T("   FROM hms_clinical_record") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON ( hcr_docno = htr_docno )") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hcr_docno        = hd_docno )") \
		_T("   WHERE hd_outpatient   = 'Y'") \
		_T("   AND htr_status        = 'T'") \
		_T("   AND htrf_acceptedfee IN ( 'Y', 'P' )") \
		_T("   AND hd_object        IN (1, 3, 8, 13)") \
		_T("   ) tbl") \
		_T(" LEFT JOIN") \
		_T("   (SELECT 0 AS phi_kham,") \
		_T("     0       AS phi_giuong,") \
		_T("     0       AS phi_xn,") \
		_T("     0       AS phi_cdha,") \
		_T("     0       AS phi_pttt,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN hfg_type_id = 800") \
		_T("       THEN hfe_polprice * hfe_quantity") \
		_T("       ELSE 0") \
		_T("     END) AS phi_thuoc,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN mp_org_id = 'MA'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_vattu,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN mp_org_id = 'BB'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END)                    AS phi_mau,") \
		_T("     0                       AS phi_an,") \
		_T("     0                       AS phi_ranggia,") \
		_T("     hfe_cost - hfe_diffcost AS tong_cp,") \
		_T("     hfe_docno               AS doc_no,") \
		_T("     hfe_deptid              AS dept_id,") \
		_T("     hfe_diffcost, hfe_treattime") \
		_T("   FROM hms_fee") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id = hfe_group)") \
		_T("   LEFT JOIN m_product_item") \
		_T("   ON (CAST(hfe_itemid AS INTEGER) = mpi_product_item_id)") \
		_T("   LEFT JOIN m_product") \
		_T("   ON (mp_product_id     = mpi_product_id)") \
		_T("   WHERE hfe_status NOT IN ( 'O', 'C' )") \
		_T("   AND hfe_category     <> 'Y'") \
		_T("   AND hfe_type         IN ('D', 'M') AND hfe_inspaid > 0") \
		_T("   UNION ALL") \
		_T("   SELECT (") \
		_T("     CASE") \
		_T("       WHEN hfe_type = 'E'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_kham,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN hfe_type = 'B'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_giuong,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN (SUBSTR(hfe_group, 1, 2) = 'B1')") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_xn,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(hfe_group, 1, 2) IN ('B2', 'B3')") \
		_T("       THEN hfe_cost                 - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_cdha,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN hfe_type   = 'O'") \
		_T("       AND ho_pdeptid <> 'B10'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_pttt,") \
		_T("     0    AS phi_thuoc,") \
		_T("     0    AS phi_vattu,") \
		_T("     0    AS phi_mau,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN hfe_type = 'F'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_an,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN ho_pdeptid = 'B10'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_ranggia,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN ho_pdeptid <> 'B10'") \
		_T("       OR hfe_type     <> 'F'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END)       AS tong_cp,") \
		_T("     hfe_docno  AS doc_no,") \
		_T("     hfe_deptid AS dept_id,") \
		_T("     hfe_diffcost, hfe_treattime") \
		_T("   FROM hms_fee") \
		_T("   LEFT JOIN hms_operation") \
		_T("   ON (hfe_docno         = ho_docno") \
		_T("   AND hfe_orderid       = ho_idx") \
		_T("   AND hfe_itemid        = ho_itemid)") \
		_T("   WHERE hfe_status NOT IN ( 'O', 'C' )") \
		_T("   AND hfe_category     <> 'Y'") \
		_T("   AND hfe_type NOT     IN ('D', 'M')") \
		_T("   ) f ON (hd_docno      = doc_no AND hfe_treattime = treattime)") \
		_T(" WHERE discharge_date BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss') %s") \
		_T(" GROUP BY obj_class,") \
		_T("   patient_name,") \
		_T("   work_place,") \
		_T("   doc_no,") \
		_T("   admit_date,") \
		_T("   discharge_date,") \
		_T("   treattime") \
		_T(" ORDER BY obj_class,") \
		_T("   discharge_date,") \
		_T("   doc_no,") \
		_T("   patient_name,") \
		_T("   work_place,") \
		_T("   admit_date,") \
		_T("   treattime"), m_szFromDate, m_szToDate, szWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CFMPolicyTreatmentCostA11::GetQueryString3(){
	CString szSQL, szWhere, szDepts, szObjects, szInpSQL, szOutpSQL, szSubFee;

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hd_object in(%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and dept_id in(%s) "), szDepts);
	}
	szSQL.Format(_T(" SELECT obj_class,") \
		_T("   patient_name,") \
		_T("   work_place,") \
		_T("   doc_no,") \
		_T("   admit_date,") \
		_T("   discharge_date,") \
		_T("   treattime,") \
		_T("   SUM(phi_kham)    AS phi_kham,") \
		_T("   SUM(phi_giuong)  AS phi_giuong,") \
		_T("   SUM(phi_xn)      AS phi_xn,") \
		_T("   SUM(phi_cdha)    AS phi_cdha,") \
		_T("   SUM(phi_pttt)    AS phi_pttt,") \
		_T("   SUM(phi_thuoc)   AS phi_thuoc,") \
		_T("   SUM(phi_vattu)   AS phi_vattu,") \
		_T("   SUM(phi_mau)     AS phi_mau,") \
		_T("   SUM(phi_an)      AS phi_an,") \
		_T("   SUM(phi_ranggia) AS phi_ranggia,") \
		_T("   0                AS thu_khac,") \
		_T("   SUM(tong_cp)     AS tong_cp,") \
		_T("   0                AS tong_thukhac,") \
		_T("   0 + SUM(tong_cp) AS tong_chiphi") \
		_T(" FROM") \
		_T("   (SELECT hd_docno,") \
		_T("     hcr_admitdate     AS admit_date,") \
		_T("     hcr_dischargedate AS discharge_date,") \
		_T("     0                 AS treattime,") \
		_T("     CASE") \
		_T("       WHEN hd_object = 1") \
		_T("       THEN 0") \
		_T("       ELSE 1") \
		_T("     END                       AS obj_class, hd_object,") \
		_T("     get_patientname(hd_docno) AS patient_name,") \
		_T("     (SELECT hp_workplace FROM hms_patient WHERE hd_patientno = hp_patientno") \
		_T("     ) AS work_place,") \
		_T("     hda_approveddate, hda_outpatient") \
		_T("   FROM hms_doc_approve") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON ( hcr_docno = hda_docno )") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hcr_docno        = hd_docno )") \
		_T("   WHERE hd_outpatient   = 'N'") \
		_T("   AND hcr_status        = 'T'") \
		_T("   AND hcrf_acceptedfee IN ( 'Y', 'P' )") \
		_T("   AND hd_object        IN (1, 3, 8, 13)") \
		_T("   UNION ALL") \
		_T("   SELECT hd_docno,") \
		_T("     htr_admitdate,") \
		_T("     htr_dischargedate,") \
		_T("     htr_treattime,") \
		_T("     CASE") \
		_T("       WHEN hd_object = 1") \
		_T("       THEN 0") \
		_T("       ELSE 1") \
		_T("     END                       AS obj_class, hd_object,") \
		_T("     get_patientname(hd_docno) AS patient_name,") \
		_T("     (SELECT hp_workplace FROM hms_patient WHERE hd_patientno = hp_patientno") \
		_T("     ) AS work_place,") \
		_T("     hda_approveddate, hda_outpatient") \
		_T("   FROM hms_doc_approve") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON ( htr_docno    = hda_docno") \
		_T("   AND htr_treattime = hda_treattime") \
		_T("   AND hda_refidx    = htr_idx)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON ( hcr_docno = htr_docno )") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( htr_docno        = hd_docno )") \
		_T("   WHERE hd_outpatient   = 'Y'") \
		_T("   AND htr_status        = 'T'") \
		_T("   AND htrf_acceptedfee IN ( 'Y', 'P' )") \
		_T("   AND hd_object        IN (1, 3, 8, 13)") \
		_T("   ) tbl") \
		_T(" LEFT JOIN") \
		_T("   (SELECT 0 AS phi_kham,") \
		_T("     0       AS phi_giuong,") \
		_T("     0       AS phi_xn,") \
		_T("     0       AS phi_cdha,") \
		_T("     0       AS phi_pttt,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN hfg_type_id = 800") \
		_T("       THEN hfe_polprice * hfe_quantity") \
		_T("       ELSE 0") \
		_T("     END) AS phi_thuoc,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN mp_org_id = 'MA'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_vattu,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN mp_org_id = 'BB'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END)                    AS phi_mau,") \
		_T("     0                       AS phi_an,") \
		_T("     0                       AS phi_ranggia,") \
		_T("     hfe_cost - hfe_diffcost AS tong_cp,") \
		_T("     hfe_docno               AS doc_no,") \
		_T("     hfe_deptid              AS dept_id,") \
		_T("     hfe_diffcost, hfe_treattime") \
		_T("   FROM hms_fee") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id = hfe_group)") \
		_T("   LEFT JOIN m_product_item") \
		_T("   ON (CAST(hfe_itemid AS INTEGER) = mpi_product_item_id)") \
		_T("   LEFT JOIN m_product") \
		_T("   ON (mp_product_id     = mpi_product_id)") \
		_T("   WHERE hfe_status NOT IN ( 'O', 'C' )") \
		_T("   AND hfe_category     <> 'Y'") \
		_T("   AND hfe_type         IN ('D', 'M') AND hfe_inspaid > 0") \
		_T("   UNION ALL") \
		_T("   SELECT (") \
		_T("     CASE") \
		_T("       WHEN hfe_type = 'E'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_kham,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN hfe_type = 'B'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_giuong,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN (SUBSTR(hfe_group, 1, 2) = 'B1')") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_xn,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(hfe_group, 1, 2) IN ('B2', 'B3')") \
		_T("       THEN hfe_cost                 - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_cdha,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN hfe_type   = 'O'") \
		_T("       AND ho_pdeptid <> 'B10'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_pttt,") \
		_T("     0    AS phi_thuoc,") \
		_T("     0    AS phi_vattu,") \
		_T("     0    AS phi_mau,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN hfe_type = 'F'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_an,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN ho_pdeptid = 'B10'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END) AS phi_ranggia,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN ho_pdeptid <> 'B10'") \
		_T("       OR hfe_type     <> 'F'") \
		_T("       THEN hfe_cost - hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END)       AS tong_cp,") \
		_T("     hfe_docno  AS doc_no,") \
		_T("     hfe_deptid AS dept_id,") \
		_T("     hfe_diffcost, hfe_treattime") \
		_T("   FROM hms_fee") \
		_T("   LEFT JOIN hms_operation") \
		_T("   ON (hfe_docno         = ho_docno") \
		_T("   AND hfe_orderid       = ho_idx") \
		_T("   AND hfe_itemid        = ho_itemid)") \
		_T("   WHERE hfe_status NOT IN ( 'O', 'C' )") \
		_T("   AND hfe_category     <> 'Y'") \
		_T("   AND hfe_type NOT     IN ('D', 'M')") \
		_T("   ) f ON (hd_docno      = doc_no AND hfe_treattime = treattime)") \
		_T(" WHERE hda_approveddate BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND hda_outpatient  = 'N' %s") \
		_T(" GROUP BY obj_class,") \
		_T("   patient_name,") \
		_T("   work_place,") \
		_T("   doc_no,") \
		_T("   admit_date,") \
		_T("   discharge_date,") \
		_T("   treattime") \
		_T(" ORDER BY obj_class,") \
		_T("   discharge_date,") \
		_T("   doc_no,") \
		_T("   patient_name,") \
		_T("   work_place,") \
		_T("   admit_date,") \
		_T("   treattime"), m_szFromDate, m_szToDate, szWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
