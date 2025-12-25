#include "stdafx.h"
#include "FMPolicyPaidDischargeList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPaidDischargeList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPaidDischargeList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPolicyPaidDischargeList *pVw = (CFMPolicyPaidDischargeList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPolicyPaidDischargeList *pVw = (CFMPolicyPaidDischargeList *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyPaidDischargeList*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyPaidDischargeList*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMPolicyPaidDischargeList*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyPaidDischargeList*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyPaidDischargeList*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyPaidDischargeList*)pWnd)->OnAddFMDischargeDepositUnpaidReport();
} 
static int _OnEditFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyPaidDischargeList*)pWnd)->OnEditFMDischargeDepositUnpaidReport();
} 
static int _OnDeleteFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyPaidDischargeList*)pWnd)->OnDeleteFMDischargeDepositUnpaidReport();
} 
static int _OnSaveFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyPaidDischargeList*)pWnd)->OnSaveFMDischargeDepositUnpaidReport();
} 
static int _OnCancelFMDischargeDepositUnpaidReportFnc(CWnd *pWnd){
	 return ((CFMPolicyPaidDischargeList*)pWnd)->OnCancelFMDischargeDepositUnpaidReport();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPolicyPaidDischargeList*)pWnd)->OnDeptListUnCheckAll();
}

CFMPolicyPaidDischargeList::CFMPolicyPaidDischargeList(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CFMPolicyPaidDischargeList::~CFMPolicyPaidDischargeList(){
}
void CFMPolicyPaidDischargeList::OnCreateComponents()
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
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 520, 110, 545);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 520, 215, 545);
	m_wndAll.Create(this, _T("All"), 220, 520, 320, 545);
	m_wndLocked.Create(this, _T("Locked"), 325, 520, 425, 545);
	m_wndPrint.Create(this, _T("&Print"), 265, 555, 345, 580);
	m_wndExport.Create(this, _T("&Export"), 350, 555, 430, 580);
	m_wndObjectList.Create(this,10, 90, 425, 285); 
	m_wndDeptList.Create(this,10, 290, 425, 515); 
}
void CFMPolicyPaidDischargeList::OnInitializeComponents()
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
void CFMPolicyPaidDischargeList::OnSetWindowEvents()
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
void CFMPolicyPaidDischargeList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nInpatient);
	DDX_Radio(pDX, m_wndOutpatient.GetDlgCtrlID(), m_nOutpatient);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);
	//DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);

}
void CFMPolicyPaidDischargeList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPolicyPaidDischargeList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPolicyPaidDischargeList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_nInpatient = 1;
	m_nOutpatient = 1;
	m_nAll = 0;
	m_bLocked = true;

}
int CFMPolicyPaidDischargeList::SetMode(int nMode){
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
/*void CFMPolicyPaidDischargeList::OnYearChange(){
	
} */
/*void CFMPolicyPaidDischargeList::OnYearSetfocus(){
	
} */
/*void CFMPolicyPaidDischargeList::OnYearKillfocus(){
	
} */
int CFMPolicyPaidDischargeList::OnYearCheckValue()
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
void CFMPolicyPaidDischargeList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyPaidDischargeList::OnReportPeriodSelendok()
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
/*void CFMPolicyPaidDischargeList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPolicyPaidDischargeList::OnReportPeriodKillfocus(){
	
}*/
long CFMPolicyPaidDischargeList::OnReportPeriodLoadData()
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
/*void CFMPolicyPaidDischargeList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPolicyPaidDischargeList::OnFromDateChange(){
	
} */
/*void CFMPolicyPaidDischargeList::OnFromDateSetfocus(){
	
} */
/*void CFMPolicyPaidDischargeList::OnFromDateKillfocus(){
	
} */
int CFMPolicyPaidDischargeList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMPolicyPaidDischargeList::OnToDateChange(){
	
} */
/*void CFMPolicyPaidDischargeList::OnToDateSetfocus(){
	
} */
/*void CFMPolicyPaidDischargeList::OnToDateKillfocus(){
	
} */
int CFMPolicyPaidDischargeList::OnToDateCheckValue(){
	return 0;
} 
void CFMPolicyPaidDischargeList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyPaidDischargeList::OnClerkSelendok(){
	 
}
/*void CFMPolicyPaidDischargeList::OnClerkSetfocus(){
	
}*/
/*void CFMPolicyPaidDischargeList::OnClerkKillfocus(){
	
}*/
long CFMPolicyPaidDischargeList::OnClerkLoadData()
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
/*void CFMPolicyPaidDischargeList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyPaidDischargeList::OnPrintSelect()
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
	long double nTotal[19], nGroupTotal1[19], nGroupTotal2[19];
	szReportName = _T("Reports\\HMS\\HF_DANHSACHBNBDCSTHANHTOANRAVIEN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	int nRes = rs.ExecSQL(szSQL);
	_debug(_T("nRes: %d"), nRes);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 19; i++)
	{
		nTotal[i] = 0;
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
	}
	//Init data member
	//int nNum[] = {1, 2};
	TCHAR * dat[] = {_T("phi_giuong"), _T("phi_xn"), _T("phi_cdha"), _T("phi_pttt"), _T("phi_thuoc"), _T("phi_vattu"), 
					_T("phi_mau"), _T("tong_cp"), _T("trich_tg"), _T("chi_luong"), _T("chi_anletet"), _T("chi_tem"), 
					_T("chi_tauxe"), _T("chi_khac"), _T("phi_an"), _T("phi_ranggia"), _T("thu_khac"), _T("tong_chi"), 
					_T("tong_thu")};
	int nStart = 7, nSumPos =  19 - 1;
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
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("work_place")));
			rptDetail->SetValue(_T("5"), CDate::Convert(rs.GetValue(_T("admit_date")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("6"), CDate::Convert(rs.GetValue(_T("discharge_date")), yyyymmdd, ddmmyyyy));
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

void CFMPolicyPaidDischargeList::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	/*szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}*/
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 7);
	xls.SetCellMergedColumns(0, 3, 7);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N \x42\x110 - \x43S TH\x41NH TO\xC1N R\x41 VI\x1EC6N");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 25);
	TCHAR fmtstr[24];
	fmtstr[3] = 'R';
	fmtstr[11] = 'N';
	fmtstr[13] = 'R';
	fmtstr[18] = 'N';
	fmtstr[19] = 'R';
	fmtstr[22] = 'N';
	TCHAR *colstr[] = {_T("STT"), _T("H\x1ECD v\xE0 t\xEAn"), _T("\x43hi ph\xED kh\xE1m \x63h\x1EEF\x61 \x62\x1EC7nh"), _T("Gi\x1B0\x1EDDng"), _T("\x58N"), _T("\x43\x110H\x41"),
		_T("PTTT"), _T("Thu\x1ED1\x63"), _T("V\x1EADt t\x1B0"), L"M\xE1u", L"T\x1ED5ng \x63p", L"Tr\xED\x63h t\x1EA1m g\x1EEDi", L"\x43\xE1\x63 kho\x1EA3n ph\x1EA3i \x63hi", L"Ti\x1EC1n l\x1B0\x1A1ng",
		L"Ti\x1EC1n \x103n l\x1EC5 t\x1EBFt", L"T\x65m th\x1B0", L"Ti\x1EC1n t\xE0u \x78\x65", L"\x43hi kh\xE1\x63", L"\x43\xE1\x63 kho\x1EA3n ph\x1EA3i thu", L"Ti\x1EC1n \x103n", L"Thu \x63s", L"Thu kh\xE1\x63", L"T\x1EA1m g\x1EEDi",
		L"\x43\x1ED9ng thu"};
	OnCreateHeader(&xls, fmtstr, colstr, 24, 4);
	int arrCols[] = {0, 1, 10, 19, 20};
	for (int i = 0; i < 5; i++)
		xls.SetCellMergedRows(arrCols[i], 4, 2);
	xls.SetCellMergedColumns(2, 4, 8);
	xls.SetCellMergedColumns(11, 4, 5);
	xls.SetCellMergedColumns(16, 4, 3);
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
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\AutoExcel.xls"));
}
void CFMPolicyPaidDischargeList::OnObjectListDblClick(){
	
} 
void CFMPolicyPaidDischargeList::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyPaidDischargeList::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyPaidDischargeList::OnObjectListLoadData()
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
void CFMPolicyPaidDischargeList::OnDeptListDblClick(){
	
} 
void CFMPolicyPaidDischargeList::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyPaidDischargeList::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyPaidDischargeList::OnDeptListLoadData()
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
int CFMPolicyPaidDischargeList::OnAddFMDischargeDepositUnpaidReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPolicyPaidDischargeList::OnEditFMDischargeDepositUnpaidReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPolicyPaidDischargeList::OnDeleteFMDischargeDepositUnpaidReport(){
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
int CFMPolicyPaidDischargeList::OnSaveFMDischargeDepositUnpaidReport(){
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
int CFMPolicyPaidDischargeList::OnCancelFMDischargeDepositUnpaidReport(){
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
int CFMPolicyPaidDischargeList::OnFMDischargeDepositUnpaidReportListLoadData(){
	return 0;
}

int CFMPolicyPaidDischargeList::OnDeptListCheckAll()
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

int CFMPolicyPaidDischargeList::OnDeptListUnCheckAll()
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


int CFMPolicyPaidDischargeList::OnObjectListCheckAll()
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

int CFMPolicyPaidDischargeList::OnObjectListUnCheckAll()
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

CString CFMPolicyPaidDischargeList::GetQueryString(){
	CString szSQL, szWhere, szDepts, szObjects, szSubFee;
	CString szInpSQL, szOutpSQL;

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

	if(m_bLocked)
		{
			szWhere.Format(_T(" AND r.hfe_status = 'P' AND r.hfe_objectid IN (1, 3, 8, 13)") \
				_T(" AND r.hfe_lockeddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
				, m_szFromDate, m_szToDate);
		}
	else
		{
			szWhere.Format(_T(" AND r.hfe_status = 'P' AND r.hfe_objectid IN (1, 3, 8, 13)") \
				_T(" AND r.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
				, m_szFromDate, m_szToDate);
		}

	//hfe_lockeddate

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and r.hfe_objectid IN (%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and r.hfe_deptid in(%s) "), szDepts);
	}
	szSubFee.Format(_T(" SELECT 0 phi_giuong, ") \
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
	_T(" SELECT (CASE WHEN hfe_type = 'B' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_giuong, ") \
	_T("        (CASE WHEN substr(hfe_group, 1, 2) = 'B1' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_xn, ") \
	_T("        (CASE WHEN substr(hfe_group, 1, 2) IN ('B2', 'B3') THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_cdha, ") \
	_T("        (CASE WHEN hfe_type = 'O' AND ho_pdeptid <> 'B10' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_pttt, ") \
	_T("        0 phi_thuoc, ") \
	_T("        0 phi_vattu, ") \
	_T("        0 phi_mau, ") \
	_T("        (CASE WHEN hfe_type = 'F' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_an,") \
	_T("        (CASE WHEN ho_pdeptid = 'B10' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_ranggia,") \
	_T("		(CASE WHEN hfe_type <> 'F' OR ho_pdeptid <> 'B10' THEN hfe_cost - hfe_diffcost ELSE 0 END) tong_cp,") \
	_T("        hfe_docno doc_no,") \
	_T("        hfe_invoiceno invoice_no  ") \
	_T(" FROM hms_fee") \
	_T(" LEFT JOIN hms_operation ON (hfe_docno = ho_docno AND hfe_orderid = ho_idx AND hfe_itemid = ho_itemid)") \
	_T(" WHERE  hfe_status NOT IN ( 'O', 'C' ) AND hfe_category <> 'Y' AND hfe_type NOT IN ('D', 'M')"));

	szSQL.Format(_T(" SELECT	obj_class, dept_id, doc_no, get_patientname(doc_no) patient_name, ") \
	_T("		case when NVL(hd_outpatient, 'N') = 'N' then (select hcr_admitdate from hms_clinical_record where hcr_docno = doc_no) else (select max(htr_admitdate) from hms_treatment_record where htr_docno = doc_no and htr_treattime = treattime) end admit_date,") \
	_T("		case when NVL(hd_outpatient, 'N') = 'N' then (select hcr_dischargedate from hms_clinical_record where hcr_docno = doc_no) else (select max(htr_dischargedate) from hms_treatment_record where htr_docno = doc_no and htr_treattime = treattime) end discharge_date,") \
	_T("        (select hp_workplace from hms_patient, hms_doc where hp_patientno = hd_patientno and hd_docno = doc_no) work_place,") \
	_T("        SUM(phi_giuong) phi_giuong, ") \
	_T("		SUM(phi_xn) phi_xn, ") \
	_T("		SUM(phi_cdha) phi_cdha, ") \
	_T("		SUM(thu_chenh - phi_an) phi_ranggia,") \
	_T("        SUM(phi_pttt) phi_pttt, ") \
	_T("		SUM(phi_thuoc) phi_thuoc, ") \
	_T("		SUM(phi_vattu) phi_vattu, ") \
	_T("		SUM(phi_mau) phi_mau, ") \
	_T("		SUM(phi_an) phi_an, ") \
	_T("		SUM(trich_tg) trich_tg, ") \
	_T("		SUM(chi_tauxe) chi_tauxe, ") \
	_T("        SUM(chi_tem) chi_tem, ") \
	_T("		SUM(chi_letet + chi_tienan) chi_anletet, ") \
	_T("		SUM(chi_luong) chi_luong, ") \
	_T("		SUM(chi_khac) chi_khac, ") \
	_T("		SUM(thu_khac) thu_khac, ") \
	_T("		CASE WHEN SUM(trich_tg + chi_luong + chi_tienan + chi_letet + chi_tauxe + chi_khac - (thu_chenh + 0)) > 0 THEN SUM(trich_tg + chi_luong + chi_tienan + chi_letet + chi_tauxe + chi_khac - (thu_chenh + 0)) ELSE 0 END tong_chi, ") \
	_T("		CASE WHEN SUM(trich_tg + chi_luong + chi_tienan + chi_letet + chi_tauxe + chi_khac - (thu_chenh + 0)) < 0 THEN ABS(SUM(trich_tg + chi_luong + chi_tienan + chi_letet + chi_tauxe + chi_khac - (thu_chenh + 0))) ELSE 0 END tong_thu") \
	_T(" FROM (SELECT	    CASE WHEN hfe_objectid = 1 THEN 0 ELSE 1 END obj_class,") \
	_T("					SUM(phi_giuong) phi_giuong, ") \
	_T("					SUM(phi_xn) phi_xn, ") \
	_T("					SUM(phi_cdha) phi_cdha, ") \
	_T("					SUM(phi_pttt) phi_pttt, ") \
	_T("					SUM(phi_thuoc) phi_thuoc, ") \
	_T("					SUM(phi_vattu) phi_vattu, ") \
	_T("					SUM(phi_mau) phi_mau, ") \
	_T("					SUM(phi_an) phi_an, ") \
	_T("					hfe_deposit trich_tg,") \
	_T("					hfe_diffcost thu_chenh,") \
	_T("					0 chi_tauxe,") \
	_T("					0 chi_tem,") \
	_T("					0 chi_letet,") \
	_T("					0 chi_luong,") \
	_T("					0 chi_tienan,") \
	_T("					0 chi_khac,") \
	_T("					0 thu_khac,") \
	_T("					hfe_docno doc_no, ") \
	_T("					hfe_treattime treattime, ") \
	_T("					hfe_deptid dept_id") \
	_T("           FROM hms_fee_invoice r ") \
	_T("           LEFT JOIN (%s) f ON (hfe_docno = doc_no AND hfe_invoiceno = invoice_no)") \
	_T("		   WHERE hfe_type <> 'O' %s") \
	_T("		   GROUP BY hfe_docno, hfe_treattime, hfe_objectid, hfe_deptid, hfe_deposit, hfe_diffcost") \
	_T("		   UNION ALL") \
	_T("		   SELECT	CASE WHEN r.hfe_objectid = 1 THEN 0 ELSE 1 END obj_class,") \
	_T("					0 phi_giuong, ") \
	_T("					0 phi_xn, ") \
	_T("					0 phi_cdha, ") \
	_T("					0 phi_pttt, ") \
	_T("					0 phi_thuoc, ") \
	_T("					0 phi_vattu, ") \
	_T("					0 phi_mau, ") \
	_T("					0 phi_an, ") \
	_T("					0 trich_tg,") \
	_T("					0 thu_chenh,") \
	_T("					SUM(CASE WHEN l.hfe_itemid = '02' THEN l.hfe_cost ELSE 0 END) chi_tauxe,") \
	_T("					SUM(CASE WHEN l.hfe_itemid = '03' THEN l.hfe_cost ELSE 0 END) chi_tem,") \
	_T("					SUM(CASE WHEN l.hfe_itemid = '04' THEN l.hfe_cost ELSE 0 END) chi_letet,") \
	_T("					SUM(CASE WHEN l.hfe_itemid = '01' THEN l.hfe_cost ELSE 0 END) chi_luong,") \
	_T("					SUM(CASE WHEN l.hfe_itemid = '05' THEN l.hfe_cost ELSE 0 END) chi_tienan,") \
	_T("					SUM(CASE WHEN l.hfe_itemid = '06' OR r.hfe_type NOT IN ('G', 'S', 'V') THEN l.hfe_cost ELSE 0 END) chi_khac,") \
	_T("					0 thu_khac,") \
	_T("					r.hfe_docno, r.hfe_treattime, r.hfe_deptid dept_id") \
	_T("			FROM hms_fee_refund r") \
	_T("			LEFT JOIN hms_fee_refundline l ON (r.hfe_docno = l.hfe_docno AND r.hfe_invoiceno = l.hfe_invoiceno)") \
	_T("			WHERE (r.hfe_type NOT IN ('F', 'V') OR (r.hfe_type = 'F' and r.hfe_serialno is not null) OR (r.hfe_type = 'V'") \
	_T("				AND l.hfe_itemid NOT IN ('07', '08', '09'))) %s") \
	_T("			GROUP BY r.hfe_docno, r.hfe_treattime, r.hfe_objectid, r.hfe_deptid") \
	_T("			) tbl_invoice") \
	_T(" LEFT JOIN hms_doc ON (doc_no = hd_docno)") \
	_T(" GROUP BY obj_class, dept_id, doc_no, NVL(hd_outpatient, 'N'), treattime") \
	_T(" ORDER BY obj_class, dept_id"), szSubFee, szWhere, szWhere);
	
_fmsg(_T("%s"), szSQL);
	return szSQL;
}

void CFMPolicyPaidDischargeList::OnCreateHeader(CExcel *xls, TCHAR fmtstr[], TCHAR *colstr[], int nColQty, int nRow){
	bool bDown = false;
	CString tmpStr;
	int nCol = 0;
	int nTmpRow = nRow;
	for (int i = 0; i < nColQty; i++)
	{
		_debug(_T("fmtstr[%d]: %c"), i, fmtstr[i]);
		if (fmtstr[i] == 'R')
		{
			nCol--;
			nTmpRow = nRow + 1;
		}
		if (fmtstr[i] == 'N')
		{
			nTmpRow = nRow;
		}
		xls->SetCellText(nCol, nTmpRow, colstr[i], 4098, true);
		nCol++;
	}
	_debug(_T("Return 0"));
}