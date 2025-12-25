#include "stdafx.h"
#include "FMFeeCancelPatientList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFeeCancelPatientList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFeeCancelPatientList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnClerkAddNew();
}*/
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList *)pWnd)->OnInvoiceNoCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMFeeCancelPatientList *pVw = (CFMFeeCancelPatientList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMFeeCancelPatientList *pVw = (CFMFeeCancelPatientList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((CFMFeeCancelPatientList*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((CFMFeeCancelPatientList*)pWnd)->OnServiceSelect();
}
static void _OnPoliciesSelectFnc(CWnd *pWnd){
	 ((CFMFeeCancelPatientList*)pWnd)->OnPoliciesSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMFeeCancelPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMFeeCancelPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMFeeCancelPatientList*)pWnd)->OnListDeleteItem();
} 
static int _OnAddFMFeeCancelPatientListFnc(CWnd *pWnd){
	 return ((CFMFeeCancelPatientList*)pWnd)->OnAddFMFeeCancelPatientList();
} 
static int _OnEditFMFeeCancelPatientListFnc(CWnd *pWnd){
	 return ((CFMFeeCancelPatientList*)pWnd)->OnEditFMFeeCancelPatientList();
} 
static int _OnDeleteFMFeeCancelPatientListFnc(CWnd *pWnd){
	 return ((CFMFeeCancelPatientList*)pWnd)->OnDeleteFMFeeCancelPatientList();
} 
static int _OnSaveFMFeeCancelPatientListFnc(CWnd *pWnd){
	 return ((CFMFeeCancelPatientList*)pWnd)->OnSaveFMFeeCancelPatientList();
} 
static int _OnCancelFMFeeCancelPatientListFnc(CWnd *pWnd){
	 return ((CFMFeeCancelPatientList*)pWnd)->OnCancelFMFeeCancelPatientList();
}

static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMFeeCancelPatientList*)pWnd)->OnListUnCheckAll();
}

CFMFeeCancelPatientList::CFMFeeCancelPatientList(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CFMFeeCancelPatientList::~CFMFeeCancelPatientList(){
}
void CFMFeeCancelPatientList::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 485);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 150, 425, 450);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 425, 115); 
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 120, 90, 145);
	m_wndDocNo.Create(this,95, 120, 215, 145); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 220, 120, 300, 145);
	m_wndInvoiceNo.Create(this,305, 120, 425, 145); 
	m_wndInsurance.Create(this, _T("Insurance"), 175, 455, 255, 480);
	m_wndService.Create(this, _T("Service"), 260, 455, 340, 480);
	m_wndPolicies.Create(this, _T("Policies"), 345, 455, 425, 480);
	m_wndExport.Create(this, _T("&Export"), 330, 490, 430, 515);
	m_wndList.Create(this,15, 175, 420, 445); 

}
void CFMFeeCancelPatientList::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(65);
	m_wndDocNo.SetLimitText(16);
	//m_wndDocNo.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(16);
	//m_wndInvoiceNo.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 75);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndList.SetCheckBox(TRUE);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
}
void CFMFeeCancelPatientList::OnSetWindowEvents()
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
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicies.SetEvent(WE_CLICK, _OnPoliciesSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Dept"));
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);

	//SetWindowFont(&m_wndDocNo, GetFaceName(), GetFaceSize() + 2, true);
	m_wndDocNo.SetTextColor(RGB(255, 0, 0));

	//SetWindowFont(&m_wndInvoiceNo, GetFaceName(), GetFaceSize() + 2, true);
	m_wndInvoiceNo.SetTextColor(RGB(0, 0, 255));

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnListLoadData();
}
void CFMFeeCancelPatientList::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);
	DDX_Check(pDX, m_wndPolicies.GetDlgCtrlID(), m_bPolicies);

}
void CFMFeeCancelPatientList::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMFeeCancelPatientList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMFeeCancelPatientList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_nDocNo=0;
	m_nInvoiceNo=0;
	m_bInsurance=TRUE;
	m_bService=FALSE;
	m_bPolicies=FALSE;

}
int CFMFeeCancelPatientList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CFMFeeCancelPatientList::OnYearChange(){
	
} */
/*void CFMFeeCancelPatientList::OnYearSetfocus(){
	
} */
/*void CFMFeeCancelPatientList::OnYearKillfocus(){
	
} */
int CFMFeeCancelPatientList::OnYearCheckValue()
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
void CFMFeeCancelPatientList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFeeCancelPatientList::OnReportPeriodSelendok()
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
/*void CFMFeeCancelPatientList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMFeeCancelPatientList::OnReportPeriodKillfocus(){
	
}*/
long CFMFeeCancelPatientList::OnReportPeriodLoadData()
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
/*void CFMFeeCancelPatientList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMFeeCancelPatientList::OnFromDateChange(){
	
} */
/*void CFMFeeCancelPatientList::OnFromDateSetfocus(){
	
} */
/*void CFMFeeCancelPatientList::OnFromDateKillfocus(){
	
} */
int CFMFeeCancelPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMFeeCancelPatientList::OnToDateChange(){
	
} */
/*void CFMFeeCancelPatientList::OnToDateSetfocus(){
	
} */
/*void CFMFeeCancelPatientList::OnToDateKillfocus(){
	
} */
int CFMFeeCancelPatientList::OnToDateCheckValue(){
	return 0;
} 
void CFMFeeCancelPatientList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFeeCancelPatientList::OnClerkSelendok(){
	 
}
/*void CFMFeeCancelPatientList::OnClerkSetfocus(){
	
}*/
/*void CFMFeeCancelPatientList::OnClerkKillfocus(){
	
}*/
long CFMFeeCancelPatientList::OnClerkLoadData()
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
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name ") \
		         _T("FROM sys_user WHERE su_groupid in('A', 'F') %s ORDER BY su_userid"), szWhere);

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMFeeCancelPatientList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMFeeCancelPatientList::OnDocNoChange(){
	
} */
/*void CFMFeeCancelPatientList::OnDocNoSetfocus(){
	
} */
/*void CFMFeeCancelPatientList::OnDocNoKillfocus(){
	
} */
int CFMFeeCancelPatientList::OnDocNoCheckValue(){
	return 0;
} 
/*void CFMFeeCancelPatientList::OnInvoiceNoChange(){
	
} */
/*void CFMFeeCancelPatientList::OnInvoiceNoSetfocus(){
	
} */
/*void CFMFeeCancelPatientList::OnInvoiceNoKillfocus(){
	
} */
int CFMFeeCancelPatientList::OnInvoiceNoCheckValue(){
	return 0;
} 
void CFMFeeCancelPatientList::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFeeCancelPatientList::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString tmpStr, szTemp;
	CRecord rs(&pMF->m_db);
	UpdateData(TRUE);

	BeginWaitCursor();

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 18);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 18);
	xls.SetColumnWidth(6, 17);
	xls.SetColumnWidth(7, 18);
	xls.SetColumnWidth(8, 17);
	xls.SetColumnWidth(9, 15);
	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 15);
	xls.SetColumnWidth(14, 30);

	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 4);
	xls.SetCellMergedColumns(nCol, nRow + 2, 4);

	xls.SetCellMergedColumns(nCol + 6, nRow + 1, 5);
	xls.SetCellMergedColumns(nCol + 6, nRow + 2, 5);

	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol, nRow + 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellText(nCol + 6, nRow + 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 6, nRow + 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol, nRow + 3, 11);
	xls.SetCellText(nCol, nRow + 3, _T("\x44\x41NH S\xC1\x43H H\x1EE6Y H\xD3\x41 \x110\x1A0N"), FMT_TEXT | FMT_CENTER, true, 13);
	xls.SetCellMergedColumns(nCol, nRow + 4, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(nCol, nRow + 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(nCol + 1, nRow + 5, _T("M\xE3 \x42N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 2, nRow + 5, _T("T\xEAn \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 3, nRow + 5, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 4, nRow + 5, _T("S\x1ED1 h\xF3\x61 \x111\x1A1n"), FMT_TEXT |FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 5, nRow + 5, _T("Ng\x1B0\x1EDDi t\x1EA1o"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 6, nRow + 5, _T("Ng\xE0y t\x1EA1o"), FMT_TEXT | FMT_CENTER, true, 10);
	
	xls.SetCellText(nCol + 7, nRow + 5, _T("Ng\x1B0\x1EDDi h\x1EE7y"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 8, nRow + 5, _T("Ng\xE0y h\x1EE7y"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 9, nRow + 5, _T("T\x1EA1m g\x1EEDi"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 10, nRow + 5, _T("T\x1ED5ng \x63hi ph\xED"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 11, nRow + 5, _T("Mi\x1EC5n gi\x1EA3m"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 12, nRow + 5, _T("\x42\x1EC7nh nh\xE2n tr\x1EA3"), FMT_TEXT |FMT_CENTER, true, 10);	
	xls.SetCellText(nCol + 13, nRow + 5, _T("Ghi \x63h\xFA"), FMT_TEXT |FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 14, nRow + 5, _T("L\xFD \x64o h\x1EE7y"), FMT_TEXT |FMT_CENTER, true, 10);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	int nIndex = 1;

	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow + 6, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("mabenhnhan"), tmpStr);
		xls.SetCellText(nCol + 1, nRow + 6, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		xls.SetCellText(nCol + 2, nRow + 6, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol + 3, nRow + 6, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("sohoadon"), tmpStr);
		xls.SetCellText(nCol + 4, nRow + 6, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tennguoitao"),tmpStr);
		xls.SetCellText(nCol + 5, nRow + 6, tmpStr, FMT_TEXT);
 
		rs.GetValue(_T("ngaytao"), tmpStr);
		szTemp = CDateTime::Convert(tmpStr, yyyymmdd | hhmm, ddmmyyyy | hhmm);
		xls.SetCellText(nCol + 6, nRow + 6, szTemp, FMT_DATETIME);

		rs.GetValue(_T("tennguoicapnhat"), tmpStr);
		xls.SetCellText(nCol + 7, nRow + 6, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("ngaycapnhat"), tmpStr);
		szTemp = CDateTime::Convert(tmpStr, yyyymmdd | hhmm, ddmmyyyy | hhmm);
		xls.SetCellText(nCol + 8, nRow + 6, szTemp, FMT_DATETIME);
		
		rs.GetValue(_T("tamgui"), tmpStr);
		xls.SetCellText(nCol + 9, nRow + 6, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("tongchiphi"), tmpStr);
		xls.SetCellText(nCol + 10, nRow + 6, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("miengiam"), tmpStr);
		xls.SetCellText(nCol + 11, nRow + 6, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("benhnhantra"), tmpStr);
		xls.SetCellText(nCol + 12, nRow + 6, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("ghichu"), tmpStr);
		xls.SetCellText(nCol + 13, nRow + 6, tmpStr, FMT_TEXT);

		rs.GetValue(_T("reason"), tmpStr);
		xls.SetCellText(nCol + 14, nRow + 6, tmpStr, FMT_TEXT);


		nRow++;
		rs.MoveNext();
			
	}

	xls.Save(_T("Exports\\DSBNHuyPhi.xls"));
	EndWaitCursor();
}

void CFMFeeCancelPatientList::OnInsuranceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMFeeCancelPatientList::OnServiceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMFeeCancelPatientList::OnPoliciesSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMFeeCancelPatientList::OnListDblClick(){
	
} 
void CFMFeeCancelPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMFeeCancelPatientList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMFeeCancelPatientList::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE sd_type IN('KB') ") \
				 _T("ORDER BY sd_id"));
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
int CFMFeeCancelPatientList::OnAddFMFeeCancelPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMFeeCancelPatientList::OnEditFMFeeCancelPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMFeeCancelPatientList::OnDeleteFMFeeCancelPatientList(){
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
 		OnCancelFMFeeCancelPatientList(); 
 	}
	return 0;
}
int CFMFeeCancelPatientList::OnSaveFMFeeCancelPatientList(){
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
 		//OnFMFeeCancelPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMFeeCancelPatientList::OnCancelFMFeeCancelPatientList(){
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
int CFMFeeCancelPatientList::OnFMFeeCancelPatientListListLoadData(){
	return 0;
}

int CFMFeeCancelPatientList::OnListCheckAll()
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

int CFMFeeCancelPatientList::OnListUnCheckAll()
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

CString CFMFeeCancelPatientList::GetQueryString()
{
	CString szSQL, szWhere;
	CString szDeptID, szObject;

	szWhere.Empty();
	szDeptID.Empty();
	szObject.Empty();

	if (m_bInsurance)
		szObject.AppendFormat(_T(" or ho_type in('I','C') "));
	if (m_bService)
		szObject.AppendFormat(_T(" or ho_type in('S') "));
	if (m_bPolicies)
		szObject.AppendFormat(_T(" or ho_type not in('I','C','S') "));

	if (!m_szClerkKey.IsEmpty())
		szWhere.Format(_T(" and i.hfe_staff='%s' "), m_szClerkKey);

	if (m_nDocNo > 0)
		szWhere.AppendFormat(_T(" and i.hfe_docno=%ld "), m_nDocNo);

	if (m_nInvoiceNo > 0)
		szWhere.AppendFormat(_T(" and i.hfe_invoiceno=%ld "), m_nInvoiceNo);

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szDeptID.IsEmpty())
				szDeptID += _T(",");
			szDeptID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}
	}
	
	if (!szDeptID.IsEmpty())
		szWhere.AppendFormat(_T(" and i.hfe_deptid in(%s) "), szDeptID);
	
	szSQL.Format(_T("SELECT nguoitao, ") \
				_T("       tennguoitao, ") \
				_T("       ngaytao, ") \
				_T("       capnhatboi, ") \
				_T("       tennguoicapnhat, ") \
				_T("       ngaycapnhat, ") \
				_T("       tenbenhnhan, mabenhnhan,") \
				_T("       sohoso, ") \
				_T("       sohoadon, ") \
				_T("       tamgui, ") \
				_T("       tongchiphi, ") \
				_T("       miengiam, ") \
				_T("       benhnhantra, ") \
				_T("       ghichu, ") \
				_T("       reason ") \
				_T("FROM   (SELECT    DISTINCT i.hfe_createdby AS nguoitao, ") \
				_T("                           (SELECT DISTINCT su_name ") \
				_T("                            FROM   sys_user ") \
				_T("                            WHERE  su_userid = i.hfe_createdby) AS tennguoitao, ") \
				_T("                           i.hfe_createddate AS ngaytao, ") \
				_T("                           i.hfe_updatedby AS capnhatboi, ") \
				_T("                           (SELECT DISTINCT su_name ") \
				_T("                            FROM   sys_user ") \
				_T("                            WHERE  su_userid = i.hfe_updatedby) AS tennguoicapnhat, ") \
				_T("                           i.hfe_updateddate AS ngaycapnhat, i.hfe_patientno AS mabenhnhan,") \
				_T("                           Get_patientname(i.hfe_docno) AS tenbenhnhan, ") \
				_T("                           i.hfe_docno AS sohoso, ") \
				_T("                           i.hfe_invoiceno AS sohoadon, ") \
				_T("                           i.hfe_deposit AS tamgui, ") \
				_T("                           i.hfe_amount AS tongchiphi, ") \
				_T("                           i.hfe_discount AS miengiam, ") \
				_T("                           i.hfe_patpaid AS benhnhantra, ") \
				_T("                           CASE WHEN f.hfe_class = 'E' THEN 'Huy ngoai tru' ") \
				_T("                             WHEN f.hfe_class = 'I' THEN 'Huy noi tru' ") \
				_T("                             WHEN f.hfe_class = 'X' THEN 'Huy phi khac' ") \
				_T("                           ELSE NULL ") \
				_T("                           END AS ghichu, ") \
				_T("                           cr.HFCR_REASON               AS reason ") \
				_T("        FROM      hms_fee_invoice i ") \
				_T("        LEFT JOIN hms_doc ON( hd_docno = i.hfe_docno ) ") \
				_T("        LEFT JOIN hms_object ON( ho_id = hd_object ) ") \
				_T("        LEFT JOIN hms_fee_cancel f ON( f.hfe_docno = i.hfe_docno ") \
				_T("                                   AND f.hfe_invoiceno = i.hfe_invoiceno ) ") \
				_T("        LEFT JOIN Hms_Fee_Cancel_Reason cr ON( f.hfe_docno = cr.HFCR_DOCNO AND f.hfe_invoiceno = cr.HFCR_INVOICENO ) ") \
				_T("        WHERE     i.hfe_updateddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T("                  AND ( 1=1 %s ) %s ") \
				_T("                  AND i.hfe_status = 'C' ") \
				_T("        UNION ALL ") \
				_T("        SELECT DISTINCT i.hfe_createdby AS nguoitao, ") \
				_T("                        (SELECT DISTINCT su_name ") \
				_T("                         FROM   sys_user ") \
				_T("                         WHERE  su_userid = i.hfe_createdby) AS tennguoitao, ") \
				_T("                        i.hfe_createddate AS ngaytao, ") \
				_T("                        i.hfe_updatedby AS capnhatboi, ") \
				_T("                        (SELECT DISTINCT su_name ") \
				_T("                         FROM   sys_user ") \
				_T("                         WHERE  su_userid = i.hfe_updatedby) AS tennguoicapnhat, ") \
				_T("                        i.hfe_updateddate AS ngaycapnhat, i.hfe_patientno AS mabenhnhan,") \
				_T("                        Get_patientname(i.hfe_docno) AS tenbenhnhan, ") \
				_T("                        i.hfe_docno AS sohoso, ") \
				_T("                        i.hfe_invoiceno AS sohoadon, ") \
				_T("                        i.hfe_amount AS tamgui, ") \
				_T("                        0 AS tongchiphi, ") \
				_T("                        0 AS miengiam, ") \
				_T("                        i.hfe_patpaid AS benhnhantra, ") \
				_T("                        'Huy tam gui' AS ghichu, ") \
				_T("                        NULL AS reason ") \
				_T("        FROM   hms_fee_deposit i ") \
				_T("        WHERE  i.hfe_updateddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T("               %s AND i.hfe_status = 'C') ") \
				_T("ORDER  BY ngaycapnhat, ") \
				_T("          sohoso "), m_szFromDate, m_szToDate, szObject, szWhere, m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}