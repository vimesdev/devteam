#include "stdafx.h"
#include "FMPolicyAdmitanceList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyAdmitanceList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyAdmitanceList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPolicyAdmitanceList *pVw = (CFMPolicyAdmitanceList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPolicyAdmitanceList *pVw = (CFMPolicyAdmitanceList *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyAdmitanceList*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyAdmitanceList*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMPolicyAdmitanceList*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyAdmitanceList*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyAdmitanceList*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyAdmitanceList*)pWnd)->OnAddFMDischargeDepositUnpaidReport();
} 
static int _OnEditFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyAdmitanceList*)pWnd)->OnEditFMDischargeDepositUnpaidReport();
} 
static int _OnDeleteFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyAdmitanceList*)pWnd)->OnDeleteFMDischargeDepositUnpaidReport();
} 
static int _OnSaveFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyAdmitanceList*)pWnd)->OnSaveFMDischargeDepositUnpaidReport();
} 
static int _OnCancelFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyAdmitanceList*)pWnd)->OnCancelFMDischargeDepositUnpaidReport();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyAdmitanceList*)pWnd)->OnDeptListUnCheckAll();
}

CFMPolicyAdmitanceList::CFMPolicyAdmitanceList(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CFMPolicyAdmitanceList::~CFMPolicyAdmitanceList()
{
}
void CFMPolicyAdmitanceList::OnCreateComponents()
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
	m_wndPrint.Create(this, _T("&Print"), 265, 555, 345, 580);
	m_wndExport.Create(this, _T("&Export"), 350, 555, 430, 580);
	m_wndObjectList.Create(this,10, 90, 425, 310); 
	m_wndDeptList.Create(this,10, 315, 425, 545); 
}
void CFMPolicyAdmitanceList::OnInitializeComponents()
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
void CFMPolicyAdmitanceList::OnSetWindowEvents()
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
void CFMPolicyAdmitanceList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	//DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);

}
void CFMPolicyAdmitanceList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPolicyAdmitanceList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPolicyAdmitanceList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();

}
int CFMPolicyAdmitanceList::SetMode(int nMode){
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
/*void CFMPolicyAdmitanceList::OnYearChange(){
	
} */
/*void CFMPolicyAdmitanceList::OnYearSetfocus(){
	
} */
/*void CFMPolicyAdmitanceList::OnYearKillfocus(){
	
} */
int CFMPolicyAdmitanceList::OnYearCheckValue()
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
void CFMPolicyAdmitanceList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyAdmitanceList::OnReportPeriodSelendok()
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
/*void CFMPolicyAdmitanceList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPolicyAdmitanceList::OnReportPeriodKillfocus(){
	
}*/
long CFMPolicyAdmitanceList::OnReportPeriodLoadData()
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
/*void CFMPolicyAdmitanceList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPolicyAdmitanceList::OnFromDateChange(){
	
} */
/*void CFMPolicyAdmitanceList::OnFromDateSetfocus(){
	
} */
/*void CFMPolicyAdmitanceList::OnFromDateKillfocus(){
	
} */
int CFMPolicyAdmitanceList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMPolicyAdmitanceList::OnToDateChange(){
	
} */
/*void CFMPolicyAdmitanceList::OnToDateSetfocus(){
	
} */
/*void CFMPolicyAdmitanceList::OnToDateKillfocus(){
	
} */
int CFMPolicyAdmitanceList::OnToDateCheckValue(){
	return 0;
} 
void CFMPolicyAdmitanceList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyAdmitanceList::OnClerkSelendok(){
	 
}
/*void CFMPolicyAdmitanceList::OnClerkSetfocus(){
	
}*/
/*void CFMPolicyAdmitanceList::OnClerkKillfocus(){
	
}*/
long CFMPolicyAdmitanceList::OnClerkLoadData()
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
/*void CFMPolicyAdmitanceList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyAdmitanceList::OnPrintSelect()
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
	long double nTotal[12], nGroupTotal1[12], nGroupTotal2[12];
	szReportName = _T("Reports\\HMS\\DSBNBODOICHINHSACHVAOVIEN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 12; i++)
	{
		nTotal[i] = 0;
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
	}
	TCHAR *dat[] = {_T("tam_gui"), _T("phi_giuong"), _T("phi_xn"), _T("phi_cdha"), _T("phi_pttt"), _T("phi_thuoc"),
					_T("phi_vattu"), _T("phi_mau"), _T("tong_cp"), _T("phi_an"), _T("chi_phikhac"), _T("tong_chiphi")};
	int nStart = 6, nSumPos = 12 - 1;
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
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i + nStart);
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
					tmpStr.Format(_T("%f"), nGroupTotal2[i]);
					szPos.Format(_T("s%d"), i + nStart);
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
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i + nStart);
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
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("admit_date")));
			for (int i = 0; i <= nSumPos; i++)
			{
				rs.GetValue(dat[i], nTmp);
				nGroupTotal1[i] += nTmp;
				szPos.Format(_T("%d"), i+nStart);
				tmpStr.Format(_T("%f"), nTmp);
				rptDetail->SetValue(szPos, tmpStr);
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
			szPos.Format(_T("s%d"), i+nStart);
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
		szTemp.Format(_T("%2.f"), nTotal[nSumPos]);
		MoneyToString(szTemp, tmpStr);
		tmpStr += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("AmountInWord"), tmpStr);
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}

void CFMPolicyAdmitanceList::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	long double nTotal[11];
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 11; i++)
		nTotal[i] = 0;
	TCHAR *dat[] = {_T("tam_gui"), _T("phi_giuong"), _T("phi_xn"), _T("phi_cdha"), _T("phi_pttt"), _T("phi_thuoc"),
					_T("phi_vattu"), _T("phi_mau"), _T("tong_cp"), _T("chi_phikhac"), _T("tong_chiphi")};
	TCHAR *col_name[] = {_T("Ti\x1EC1n gi\x1B0\x1EDDng"), _T("Ti\x1EC1n \x78\xE9t nghi\x1EC7m"), _T("Ti\x1EC1n \x43\x110H\x41"), _T("Ti\x1EC1n PTTT"), _T("Ti\x1EC1n thu\x1ED1\x63"),
						_T("Ti\x1EC1n v\x1EADt t\x1B0"), _T("Ti\x1EC1n m\xE1u"), _T("T\x1ED5ng \x43P")};
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 2, 13);
	xls.SetCellMergedColumns(0, 3, 13);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N QU\xC2N \x43S V\xC0O VI\x1EC6N");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 25);

	int arrCols[] = {0, 1, 2, 11, 12};
	OnMergeMultiCell(&xls, arrCols, 5, 4, _T("R"), 2);
	xls.SetCellMergedColumns(3, 4, 8);
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("T\xEAn"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 ti\x1EC1n TG"), 4098, true);
	xls.SetCellText(3, 4, _T("\x43hi ph\xED kh\xE1m \x63h\x1EEF\x61 \x62\x1EC7nh"), 4098, true);
	for (int i = 0; i < 8; i++)
		xls.SetCellText(i+3, 5, col_name[i]);
	xls.SetCellText(11, 4, _T("\x43hi ph\xED kh\xE1\x63"), 4098, true);
	xls.SetCellText(12, 4, _T("T\x1ED5ng \x63hi ph\xED"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		for (int i = 0; i < 11; i++)
		{
			rs.GetValue(dat[i], nTmp);
			tmpStr.Format(_T("%f"), nTmp);
			nTotal[i] += nTmp;
			xls.SetCellText(i+2, nRow, tmpStr, FMT_NUMBER1);	
		}
		
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), 4098, true);
	for (int i = 0; i < 11; i++)
	{
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+2, nRow, tmpStr, FMT_NUMBER1, true);	
	}
	xls.Save(_T("Exports\\Danh sach benh nhan BD CS vao vien.xls"));
}
void CFMPolicyAdmitanceList::OnObjectListDblClick(){
	
} 
void CFMPolicyAdmitanceList::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyAdmitanceList::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyAdmitanceList::OnObjectListLoadData()
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
void CFMPolicyAdmitanceList::OnDeptListDblClick(){
	
} 
void CFMPolicyAdmitanceList::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyAdmitanceList::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyAdmitanceList::OnDeptListLoadData()
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
int CFMPolicyAdmitanceList::OnAddFMDischargeDepositUnpaidReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPolicyAdmitanceList::OnEditFMDischargeDepositUnpaidReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPolicyAdmitanceList::OnDeleteFMDischargeDepositUnpaidReport(){
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
int CFMPolicyAdmitanceList::OnSaveFMDischargeDepositUnpaidReport(){
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
int CFMPolicyAdmitanceList::OnCancelFMDischargeDepositUnpaidReport(){
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
int CFMPolicyAdmitanceList::OnFMDischargeDepositUnpaidReportListLoadData(){
	return 0;
}

int CFMPolicyAdmitanceList::OnDeptListCheckAll()
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

int CFMPolicyAdmitanceList::OnDeptListUnCheckAll()
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


int CFMPolicyAdmitanceList::OnObjectListCheckAll()
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

int CFMPolicyAdmitanceList::OnObjectListUnCheckAll()
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

CString CFMPolicyAdmitanceList::GetQueryString(){
	CString szSQL, szWhere, szDepts, szObjects, szSubFee;

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
	//szWhere.Format(_T(" AND invoice_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	szWhere.Format(_T(" AND hd_status = 'T' AND hd_suggestion IN ('C', 'D') ") \
		_T(" AND hd_enddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')")
		, m_szFromDate, m_szToDate);
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and object_id in(%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and dept_id in(%s) "), szDepts);
	}

	szSQL.Format(_T(" SELECT doc_no, Get_patientname(doc_no) patient_name, ") \
	_T("		(select hp_workplace from hms_patient where hd_patientno = hp_patientno) work_place,") \
	_T("		hcr_admitdate admit_date,") \
	_T("		obj_class, hcr_admitdept dept_id,") \
	_T("        SUM(tam_gui) tam_gui, ") \
	_T("        SUM(phi_giuong) phi_giuong, ") \
	_T("        SUM(phi_xn) phi_xn, ") \
	_T("        SUM(phi_cdha) phi_cdha, ") \
	_T("        SUM(phi_pttt) phi_pttt, ") \
	_T("        SUM(phi_thuoc) phi_thuoc, ") \
	_T("        SUM(phi_vattu) phi_vattu, ") \
	_T("        SUM(phi_mau) phi_mau, ") \
	_T("        SUM(tong_cp) tong_cp, ") \
	_T("		SUM(phi_an) phi_an,") \
	_T("        SUM(tong_chiphi - tong_cp - phi_an) chi_phikhac, ") \
	_T("        SUM(tong_chiphi) tong_chiphi ") \
	_T(" FROM   hms_doc ") \
	_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = hd_docno)") \
	_T(" LEFT JOIN (SELECT    hfe_docno doc_no, ") \
	_T("				   CASE WHEN hfe_object = 1 THEN 0 ELSE 1 END obj_class,") \
	_T("                   0 tam_gui, ") \
	_T("                   0 phi_giuong, ") \
	_T("                   0 phi_xn, ") \
	_T("                   0 phi_cdha, ") \
	_T("                   0 phi_pttt, ") \
	_T("                   (CASE WHEN mp_org_id = 'PM' ") \
	_T("					THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_thuoc, ") \
	_T("                   (CASE WHEN mp_org_id = 'MA' ") \
	_T("					THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_vattu, ") \
	_T("                   (CASE WHEN mp_org_id = 'BB' ") \
	_T("					THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_mau, ") \
	_T("                   hfe_cost - hfe_diffcost tong_cp, ") \
	_T("				   0 phi_an,") \
	_T("                   hfe_diffcost chi_phikhac, ") \
	_T("                   (hfe_cost) tong_chiphi, ") \
	_T("				   hfe_object object_id") \
	_T("         FROM      hms_fee") \
	_T("		 LEFT JOIN m_product_item ON (cast(hfe_itemid as INTEGER) = mpi_product_item_id)") \
	_T("		 LEFT JOIN m_product ON (mp_product_id = mpi_product_id)") \
	_T("         WHERE     hfe_status NOT IN ('R', 'C') AND hfe_category <> 'Y' AND hfe_type IN ('D', 'M')") \
	_T("		 UNION ALL") \
	_T("			SELECT    hfe_docno doc_no, ") \
	_T("				   CASE WHEN hfe_object = 1 THEN 0 ELSE 1 END obj_class,") \
	_T("                   0 tam_gui, ") \
	_T("                   (CASE WHEN hfe_type = 'B' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_giuong, ") \
	_T("                   (CASE WHEN (substr(hfe_group, 1, 2) = 'B1') THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_xn, ") \
	_T("                   (CASE WHEN substr(hfe_group, 1, 2) IN ('B2', 'B3') THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_cdha, ") \
	_T("                   (CASE WHEN hfe_type = 'O' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_pttt, ") \
	_T("                   0 phi_thuoc, ") \
	_T("                   0 phi_vattu, ") \
	_T("                   0 phi_mau, ") \
	_T("                   (CASE WHEN hfe_type NOT IN ('F', 'X') THEN hfe_cost - hfe_diffcost ELSE 0 END) tong_cp, ") \
	_T("				   (CASE WHEN hfe_type = 'F' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_an,") \
	_T("                   (CASE WHEN hfe_type IN ('X') THEN hfe_cost ELSE 0 END) chi_phikhac, ") \
	_T("                   (hfe_cost) tong_chiphi, ") \
	_T("				   hfe_object object_id") \
	_T("         FROM      hms_fee") \
	_T("         WHERE     hfe_status NOT IN ('R', 'C') AND hfe_category <> 'Y' AND hfe_type NOT IN ('D', 'M')") \
	_T("         UNION ALL") \
	_T("         SELECT hfe_docno doc_no, ") \
	_T("				CASE WHEN hfe_objectid = 1 THEN 0 ELSE 1 END obj_class,") \
	_T("                (hfe_amount) tam_gui, ") \
	_T("                0 phi_giuong, ") \
	_T("                0 phi_xn, ") \
	_T("                0 phi_cdha, ") \
	_T("                0 phi_pttt, ") \
	_T("                0 phi_thuoc, ") \
	_T("                0 phi_vattu, ") \
	_T("                0 phi_mau, ") \
	_T("                0 tong_cp, ") \
	_T("				0 phi_an,") \
	_T("                0 chi_phikhac, ") \
	_T("                0 tong_chiphi, ") \
	_T("				hfe_objectid object_id") \
	_T("         FROM   hms_fee_deposit ") \
	_T("		 WHERE hfe_status NOT IN ('O', 'C')) ON (hd_docno = doc_no)") \
	_T(" WHERE object_id IN (1, 3, 8) AND hcr_status IN ('A', 'I', 'T') AND NVL(hd_outpatient, 'N') = 'N' %s") \
	_T(" GROUP  BY doc_no, hcr_admitdept, obj_class, hcr_admitdate, hd_patientno") \
	_T(" ORDER BY obj_class, hcr_admitdept, hcr_admitdate"), szWhere);


_fmsg(_T("%s"), szSQL);
	return szSQL;
}

void CFMPolicyAdmitanceList::OnMergeMultiCell(CExcel * xls, int arrCols[], int nArrSize, int nRow, CString szType, int nQty ){
	//OnMergeMultiCell(&xls, arrCols, 4, _T("R"), 2);	
	for (int i = 0; i < nArrSize; i++) 
	{
		if (szType.Find('C') != -1)
		{
			xls->SetCellMergedColumns(arrCols[i], nRow, nQty);
		}
		if (szType.Find('R') != -1)
		{
			xls->SetCellMergedRows(arrCols[i], nRow, nQty);
		}

	}
}