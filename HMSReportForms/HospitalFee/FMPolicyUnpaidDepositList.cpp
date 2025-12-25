#include "stdafx.h"
#include "FMPolicyUnpaidDepositList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyUnpaidDepositList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyUnpaidDepositList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPolicyUnpaidDepositList *pVw = (CFMPolicyUnpaidDepositList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPolicyUnpaidDepositList *pVw = (CFMPolicyUnpaidDepositList *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyUnpaidDepositList*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyUnpaidDepositList*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMPolicyUnpaidDepositList*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyUnpaidDepositList*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyUnpaidDepositList*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyUnpaidDepositList*)pWnd)->OnAddFMDischargeDepositUnpaidReport();
} 
static int _OnEditFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyUnpaidDepositList*)pWnd)->OnEditFMDischargeDepositUnpaidReport();
} 
static int _OnDeleteFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyUnpaidDepositList*)pWnd)->OnDeleteFMDischargeDepositUnpaidReport();
} 
static int _OnSaveFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyUnpaidDepositList*)pWnd)->OnSaveFMDischargeDepositUnpaidReport();
} 
static int _OnCancelFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyUnpaidDepositList*)pWnd)->OnCancelFMDischargeDepositUnpaidReport();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyUnpaidDepositList*)pWnd)->OnDeptListUnCheckAll();
}

CFMPolicyUnpaidDepositList::CFMPolicyUnpaidDepositList(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CFMPolicyUnpaidDepositList::~CFMPolicyUnpaidDepositList(){
}
void CFMPolicyUnpaidDepositList::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 325);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndPrint.Create(this, _T("&Print"), 265, 330, 345, 355);
	m_wndExport.Create(this, _T("&Export"), 350, 330, 430, 355);
	m_wndDeptList.Create(this,10, 90, 425, 320); 
	m_wndDischarged.Create(this, _T("Discharged"), 5, 330, 85, 355);
}
void CFMPolicyUnpaidDepositList::OnInitializeComponents()
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

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
	m_wndFromDate.EnableWindow(FALSE);
}
void CFMPolicyUnpaidDepositList::OnSetWindowEvents()
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
	//m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_szFromDate = _T("2015/05/30 00:00");
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
void CFMPolicyUnpaidDepositList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndDischarged.GetDlgCtrlID(), m_bDischarged);
	//DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);

}
void CFMPolicyUnpaidDepositList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPolicyUnpaidDepositList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPolicyUnpaidDepositList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bDischarged = FALSE;

}
int CFMPolicyUnpaidDepositList::SetMode(int nMode){
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
/*void CFMPolicyUnpaidDepositList::OnYearChange(){
	
} */
/*void CFMPolicyUnpaidDepositList::OnYearSetfocus(){
	
} */
/*void CFMPolicyUnpaidDepositList::OnYearKillfocus(){
	
} */
int CFMPolicyUnpaidDepositList::OnYearCheckValue()
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
void CFMPolicyUnpaidDepositList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyUnpaidDepositList::OnReportPeriodSelendok()
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
/*void CFMPolicyUnpaidDepositList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPolicyUnpaidDepositList::OnReportPeriodKillfocus(){
	
}*/
long CFMPolicyUnpaidDepositList::OnReportPeriodLoadData()
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
/*void CFMPolicyUnpaidDepositList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPolicyUnpaidDepositList::OnFromDateChange(){
	
} */
/*void CFMPolicyUnpaidDepositList::OnFromDateSetfocus(){
	
} */
/*void CFMPolicyUnpaidDepositList::OnFromDateKillfocus(){
	
} */
int CFMPolicyUnpaidDepositList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMPolicyUnpaidDepositList::OnToDateChange(){
	
} */
/*void CFMPolicyUnpaidDepositList::OnToDateSetfocus(){
	
} */
/*void CFMPolicyUnpaidDepositList::OnToDateKillfocus(){
	
} */
int CFMPolicyUnpaidDepositList::OnToDateCheckValue(){
	return 0;
} 
void CFMPolicyUnpaidDepositList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyUnpaidDepositList::OnClerkSelendok(){
	 
}
/*void CFMPolicyUnpaidDepositList::OnClerkSetfocus(){
	
}*/
/*void CFMPolicyUnpaidDepositList::OnClerkKillfocus(){
	
}*/
long CFMPolicyUnpaidDepositList::OnClerkLoadData()
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
/*void CFMPolicyUnpaidDepositList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyUnpaidDepositList::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, nCount = 0;
	CString szSQL, tmpStr, szTemp, szReportName, szDate, szOldLev1, szNewLev1, szOldLev2, szNewLev2;
	long double nTotal = 0, nGroupTotal1 = 0, nGroupTotal2 = 0;
	if (m_bDischarged)
		szReportName = _T("Reports\\HMS\\HF_DANHSACHBENHNHANTAMGUIRAVIEN_CHUATT_QUANCS.RPT");
	else
		szReportName = _T("Reports\\HMS\\HF_DANHSACHBENHNHANTAMGUI_CHUATT_QUANCS.RPT");
	//szReportName = _T("Reports\\HMS\\DSBNBODOICHINHSACHTAMGUI.RPT");
	if (!rpt.Init(szReportName))
		return;
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
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		//rs.GetValue(_T("staff"), szNewLev1);
		rs.GetValue(_T("dept_id"), szNewLev1);
		rs.GetValue(_T("obj_class"), szNewLev2);
		if (szNewLev2 != szOldLev2)
		{
			if (nGroupTotal1 > 0)
			{
				tmpStr.Format(_T("%f"), nGroupTotal1);
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
				rptGroup->SetValue(_T("s7"), tmpStr);
				nGroupTotal2+= nGroupTotal1;
				nGroupTotal1 = 0;
			}
			if (nGroupTotal2 > 0)
			{
				tmpStr.Format(_T("%f"), nGroupTotal2);
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng: "));
				rptGroup->SetValue(_T("s7"), tmpStr);
				nTotal+= nGroupTotal2;
				nGroupTotal2 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_CENTER);
				rptGroup->SetValue(_T("GroupName"), 
				szNewLev2==_T("0")?_T("\x42\x1EC6NH NH\xC2N \x42\x1ED8 \x110\x1ED8I"):_T("\x42\x1EC6NH NH\xC2N \x43H\xCDNH S\xC1\x43H- \x42\x1EA0N"));
			}
			szOldLev2 = szNewLev2;
			szOldLev1.Empty();
			nIdx = 1;
		}
		//szNewLev1.Format(_T("%s - %s"), pMF->GetDoctorName(rs.GetValue(_T("staff"))), rs.GetValue(_T("invoice_no")));
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1 > 0)
			{
				tmpStr.Format(_T("%f"), nGroupTotal1);
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
				rptGroup->SetValue(_T("s7"), tmpStr);
				nGroupTotal2+= nGroupTotal1;
				nGroupTotal1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_LEFT);
				rptGroup->SetValue(_T("GroupName"), pMF->GetDepartmentName(szNewLev1));
			}
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			nCount++;
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("record_no")));
			rs.GetValue(_T("admit_date"), tmpStr);
			rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("invoice_date"), tmpStr);
			rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("deposit"), nTmp);
			nGroupTotal1+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nGroupTotal1 > 0)
	{
		tmpStr.Format(_T("%f"), nGroupTotal1);
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
		rptGroup->SetValue(_T("s7"), tmpStr);
		nGroupTotal2+= nGroupTotal1;
		nGroupTotal1 = 0;
	}
	if (nGroupTotal2 > 0)
	{
		tmpStr.Format(_T("%f"), nGroupTotal2);
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng: "));
		rptGroup->SetValue(_T("s7"), tmpStr);
		nTotal+= nGroupTotal2;
		nGroupTotal2 = 0;
	}
	if (nTotal > 0)
	{
		tmpStr.Format(_T("%f"), nTotal);
		rpt.GetReportFooter()->SetValue(_T("Total"), tmpStr);
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

void CFMPolicyUnpaidDepositList::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotal = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
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
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 30);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 15);
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("T\xEAn"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(3, 4, _T("\x110\x1ECB\x61 \x63h\x1EC9"), 4098, true);
	xls.SetCellText(4, 4, _T("Kho\x61"), 4098, true);
	xls.SetCellText(5, 4, _T("Ng\xE0y v\xE0o vi\x1EC7n"), 4098, true);
	xls.SetCellText(6, 4, _T("T\x1EA1m g\x1EEDi"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("addr")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("dept_id")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("admit_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("deposit"), nTmp);
		nTotal += nTmp;
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		xls.SetCellText(5, nRow, _T("T\x1ED5ng s\x1ED1"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\Danh sach benh nhan quan chinh sach nop tam ung.xls"));
}
void CFMPolicyUnpaidDepositList::OnObjectListDblClick(){
	
} 
void CFMPolicyUnpaidDepositList::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyUnpaidDepositList::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyUnpaidDepositList::OnObjectListLoadData()
{
	return 0;
}
void CFMPolicyUnpaidDepositList::OnDeptListDblClick(){
	
} 
void CFMPolicyUnpaidDepositList::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyUnpaidDepositList::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyUnpaidDepositList::OnDeptListLoadData()
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
int CFMPolicyUnpaidDepositList::OnAddFMDischargeDepositUnpaidReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPolicyUnpaidDepositList::OnEditFMDischargeDepositUnpaidReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPolicyUnpaidDepositList::OnDeleteFMDischargeDepositUnpaidReport(){
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
int CFMPolicyUnpaidDepositList::OnSaveFMDischargeDepositUnpaidReport(){
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
int CFMPolicyUnpaidDepositList::OnCancelFMDischargeDepositUnpaidReport(){
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
int CFMPolicyUnpaidDepositList::OnFMDischargeDepositUnpaidReportListLoadData(){
	return 0;
}

int CFMPolicyUnpaidDepositList::OnDeptListCheckAll()
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

int CFMPolicyUnpaidDepositList::OnDeptListUnCheckAll()
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


int CFMPolicyUnpaidDepositList::OnObjectListCheckAll()
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

int CFMPolicyUnpaidDepositList::OnObjectListUnCheckAll()
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

CString CFMPolicyUnpaidDepositList::GetQueryString(){
	CString szSQL, szWhere, szDepts;

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" AND fac_posted = 'Y' AND substr(fac_cashbook_id, 1, 2) = 'QU' AND (NVL(fee_status, 'X') <> 'P'") \
				   _T(" OR (NVL(fee_status, 'X') = 'P' AND fac_posteddate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))")
				   _T(" AND fac_posteddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
				   m_szToDate, m_szFromDate, m_szToDate);

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and dept_id in(%s) "), szDepts);
	}
	if (m_bDischarged)
		szWhere.AppendFormat(_T(" AND record_status = 'T' "));
	szSQL.Format(_T(" SELECT   obj_class, doc_no, ") \
				_T("           Get_patientname(doc_no) patient_name, ") \
				_T("		   record_no,") \
				_T("           dept_id, ") \
				_T("           (SELECT sd_index FROM sys_dept WHERE sd_id = dept_id) AS sd_index, ") \
				_T("		   invoice_date,") \
				_T("           admit_date, ") \
				_T("		   staff,") \
				_T("           deposit ") \
				_T(" FROM      fa_cash LEFT JOIN ") \
				_T("		(SELECT    CASE WHEN hfe_objectid = 1 THEN 0 ELSE 1 END obj_class, ") \
				_T("					  hfe_docno doc_no, ") \
				_T("                      hfe_cash_id cash_id, ") \
				_T("                      hd_patientno patient_no, ") \
				_T("                      hfe_deptid dept_id, ") \
				_T("                      hcr_admitdate admit_date, ") \
				_T("                      hfe_amount deposit, ") \
				_T("                      hfe_staff staff, ") \
				_T("					  hfe_date invoice_date,") \
				_T("					  hcrf_acceptedfee fee_status,") \
				_T("					  hcr_recordno record_no,") \
				_T("					  hcr_status record_status") \
				_T("            FROM      hms_fee_deposit ") \
				_T("            LEFT JOIN hms_doc ON ( hd_docno = hfe_docno ) ") \
				_T("            LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
				_T("            WHERE     hfe_status IN ('P', 'R') AND Nvl(hd_outpatient, 'N') <> 'Y' ") \
				_T("            UNION ALL ") \
				_T("            SELECT    CASE WHEN hfe_objectid = 1 THEN 0 ELSE 1 END obj_class, ") \
				_T("					  hfe_docno doc_no, ") \
				_T("                      hfe_cash_id, ") \
				_T("                      hd_patientno, ") \
				_T("                      hfe_deptid dept_id, ") \
				_T("                      htr_admitdate admit_date, ") \
				_T("                      hfe_amount deposit, ") \
				_T("                      hfe_staff staff, ") \
				_T("					  hfe_date invoice_date,") \
				_T("					  htrf_acceptedfee fee_status,") \
				_T("					  htr_recordno record_no,") \
				_T("					  htr_status record_status") \
				_T("            FROM      hms_fee_deposit ") \
				_T("            LEFT JOIN hms_doc ON ( hd_docno = hfe_docno ) ") \
				_T("            LEFT JOIN hms_treatment_record ON ( htr_docno = hd_docno AND htr_treattime = hfe_treattime) ") \
				_T("            WHERE     hfe_status IN ('P', 'R') AND Nvl(hd_outpatient, 'N') = 'Y') tbl_deposit ") \
				_T("				ON (fac_cash_id = cash_id)") \
				_T(" WHERE     Coalesce(deposit, 0) > 0 %s") \
				_T(" ORDER     BY obj_class, sd_index, invoice_date"), szWhere);	

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
