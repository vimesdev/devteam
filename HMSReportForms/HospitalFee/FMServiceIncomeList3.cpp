#include "stdafx.h"
#include "FMServiceIncomeList3.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "StringToken.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList3* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList3* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnClerkAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList3* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList3 *)pWnd)->OnObjectAddNew();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3 *)pWnd)->OnStatusLoadData();
}
static void _OnStatusSelendokFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3 *)pWnd)->OnStatusSelendok();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServiceIncomeList3 *pVw = (CFMServiceIncomeList3 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServiceIncomeList3 *pVw = (CFMServiceIncomeList3 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeList3*)pWnd)->OnApprovalSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeList3*)pWnd)->OnSODSelect();
}
static long _OnReceiptListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3*)pWnd)->OnReceiptListLoadData();
} 
static void _OnReceiptListDblClickFnc(CWnd *pWnd){
	((CFMServiceIncomeList3*)pWnd)->OnReceiptListDblClick();
} 
static void _OnReceiptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceIncomeList3*)pWnd)->OnReceiptListSelectChange(nOldItem, nNewItem);
} 
static int _OnReceiptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList3*)pWnd)->OnReceiptListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	((CFMServiceIncomeList3*)pWnd)->OnListCheckAll();
	return 0;
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	((CFMServiceIncomeList3*)pWnd)->OnListUncheckAll();
	return 0;
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	((CFMServiceIncomeList3*)pWnd)->OnListSearchItem();
	return 0;
}
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList3*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMServiceIncomeList3*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceIncomeList3*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList3*)pWnd)->OnDeptListDeleteItem();
} 
CFMServiceIncomeList3::CFMServiceIncomeList3(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMServiceIncomeList3::~CFMServiceIncomeList3(){
}
void CFMServiceIncomeList3::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 550);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 360, 425, 545);
	m_wndReceipt.Create(this, _T("Receipt"), 10, 150, 425, 355);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 215, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 220, 90, 300, 115);
	m_wndObject.Create(this,305, 90, 425, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 120, 90, 145);
	m_wndStatus.Create(this,95, 120, 215, 145); 
	m_wndSOD.Create(this, _T("Service On Demand"), 220, 120, 380, 145);
	m_wndPrint.Create(this, _T("&Print"), 265, 555, 345, 580);
	m_wndExport.Create(this, _T("&Export"), 350, 555, 430, 580);
	m_wndReceiptList.Create(this,15, 175, 420, 350); 
	m_wndDeptList.Create(this,15, 385, 420, 540); 

}
void CFMServiceIncomeList3::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObject.Format(2, 1, 12);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndReceiptList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndReceiptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);
	m_wndReceiptList.InsertColumn(2, _T("Locked"), CFMT_TEXT, 30);
	m_wndReceiptList.InsertColumn(3, _T("Clerk"), CFMT_TEXT, 120);
	m_wndReceiptList.InsertColumn(4, _T("Posted Date"), CFMT_DATE, 80);
	m_wndReceiptList.SetCheckBox(true);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}

void CFMServiceIncomeList3::OnSetWindowEvents(){
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndReceiptList.SetEvent(WE_SELCHANGE, _OnReceiptListSelectChangeFnc);
	m_wndReceiptList.SetEvent(WE_LOADDATA, _OnReceiptListLoadDataFnc);
	m_wndReceiptList.SetEvent(WE_DBLCLICK, _OnReceiptListDblClickFnc);
	m_wndReceiptList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndReceiptList.AddEvent(2, _T("Uncheck All"), _OnListUncheckAllFnc);
	m_wndReceiptList.AddEvent(3, _T("Search"), _OnListSearchItemFnc);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnDeptListLoadData();
	OnReceiptListLoadData();

}
void CFMServiceIncomeList3::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	//DDX_Check(pDX, m_wndApproval.GetDlgCtrlID(), m_bApproval);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);

}
void CFMServiceIncomeList3::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bApproval = FALSE;
	m_bSOD = FALSE;

}

int CFMServiceIncomeList3::SetMode(int nMode){
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

/*void CFMServiceIncomeList3::OnYearChange(){
	
} */
/*void CFMServiceIncomeList3::OnYearSetfocus(){
	
} */
/*void CFMServiceIncomeList3::OnYearKillfocus(){
	
} */
int CFMServiceIncomeList3::OnYearCheckValue(){
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
			szTemp.Format(_T("%.2d/2d/4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/2d/4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}
	UpdateData(FALSE);
	OnReceiptListLoadData();
	return 0;
}
 
void CFMServiceIncomeList3::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceIncomeList3::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}

	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/1/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/3/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/4/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/6/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/7/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/9/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/1/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
	OnReceiptListLoadData();
}

/*void CFMServiceIncomeList3::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServiceIncomeList3::OnReportPeriodKillfocus(){
	
}*/
long CFMServiceIncomeList3::OnReportPeriodLoadData(){
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

/*void CFMServiceIncomeList3::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServiceIncomeList3::OnFromDateChange(){
	
} */
/*void CFMServiceIncomeList3::OnFromDateSetfocus(){
	
} */
/*void CFMServiceIncomeList3::OnFromDateKillfocus(){
	
} */
int CFMServiceIncomeList3::OnFromDateCheckValue(){
	OnReceiptListLoadData();
	return 0;
}
 
/*void CFMServiceIncomeList3::OnToDateChange(){
	
} */
/*void CFMServiceIncomeList3::OnToDateSetfocus(){
	
} */
/*void CFMServiceIncomeList3::OnToDateKillfocus(){
	
} */
int CFMServiceIncomeList3::OnToDateCheckValue(){
	OnReceiptListLoadData();
	return 0;
}
 
void CFMServiceIncomeList3::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceIncomeList3::OnClerkSelendok(){
	OnReceiptListLoadData(); 
}
/*void CFMServiceIncomeList3::OnClerkSetfocus(){
	
}*/
/*void CFMServiceIncomeList3::OnClerkKillfocus(){
	
}*/
long CFMServiceIncomeList3::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServiceIncomeList3::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceIncomeList3::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceIncomeList3::OnObjectSelendok(){
	 
}
/*void CFMServiceIncomeList3::OnObjectSetfocus(){
	
}*/
/*void CFMServiceIncomeList3::OnObjectKillfocus(){
	
}*/
long CFMServiceIncomeList3::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ho_id as idx, ho_desc descr FROM hms_object ORDER BY cast(ho_id as integer)"));
	long nCount = rs.ExecSQL(szSQL);
	m_wndObject.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndObject.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("descr")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

long CFMServiceIncomeList3::OnStatusLoadData(){
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);
	return 1;
}

void CFMServiceIncomeList3::OnStatusSelendok(){
	OnReceiptListLoadData();
}

/*void CFMServiceIncomeList3::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceIncomeList3::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	CStringArray arrField;
	double nTmp = 0;
	int nIdx = 1, ncol_pos = 5, nsum_pos = 13;
	CString szSQL, tmpStr, szPos, szReportName, szDate;
	long double nGrpTotal[14], nTotal[14];
	long double nFa = 0;
	szReportName = _T("Reports\\HMS\\HF_BANGKETHUBENHNHANDICHVUYTE.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}

	arrField.Add(_T("invoice_deposit"));
	arrField.Add(_T("pat_paid"));
	arrField.Add(_T("invoice_amount"));
	arrField.Add(_T("fa"));
	arrField.Add(_T("invoice_drug"));
	arrField.Add(_T("invoice_material"));
	arrField.Add(_T("cnc_amount"));
	arrField.Add(_T("deposit"));
	arrField.Add(_T("receipt_amount"));
	nsum_pos = arrField.GetCount() - 1;
	for (int i = 0; i < 14; i++)
	{
		nGrpTotal[i] = 0;
		nTotal[i] = 0;
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

	long nCashID, nOldCashID=0;
	nOldCashID = 0;
	CRecord rsx(&pMF->m_db);
	CString szInvoiceNo, szInvoiceDate, szUserID;
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rs.GetValue(_T("cash_id"), nCashID);
		if(nOldCashID != nCashID)
		{
			if (nGrpTotal[nsum_pos] > 0)
			{
				rptFooter = rpt.GetGroupFooter(1);
				if (rptFooter)
				{
					rptDetail = rpt.AddDetail(rptFooter);
				}
				else
				{
					rptDetail = rpt.GetReportFooter();
				}
				for (int i = 0; i <= nsum_pos; i++)
				{
					szPos.Format(_T("s%d"), i+5);
					tmpStr.Format(_T("%.2f"), nGrpTotal[i]);
					rptDetail->SetValue(szPos, tmpStr);
					nTotal[i] +=nGrpTotal[i];
					nGrpTotal[i] = 0;
				}
			}
			szSQL.Format(_T("SELECT fac_invoiceno, TO_CHAR(fac_invoicedate,'DD/MM/YYYY') as invoicedate, fac_user_id FROM fa_cash WHERE fac_cash_id=%ld "), nCashID);
			rsx.ExecSQL(szSQL);
			rsx.GetValue(_T("fac_invoiceno"), szInvoiceNo);
			rsx.GetValue(_T("invoicedate"), szInvoiceDate);
			rsx.GetValue(_T("fac_user_id"), szUserID);
			tmpStr.Format(_T("S\x1ED1 phi\x1EBFu [%s] Ng\xE0y [%s] Ng\x1B0\x1EDDi thu [%s]"),  szInvoiceNo, szInvoiceDate, szUserID);
			CReportSection *grp = NULL;
			grp = rpt.GetGroupHeader(1);
			if(grp)
			{
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("GroupName"), tmpStr);
			}
			nOldCashID = nCashID;

		}

		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			

			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept_name")));
			//
			for (int i = 0; i < arrField.GetCount(); i++)
			{
				rs.GetValue(arrField.GetAt(i), tmpStr);
				nTmp = str2double(tmpStr);
				nGrpTotal[i] += nTmp;
				szPos.Format(_T("%d"), i+5);
				rptDetail->SetValue(szPos, tmpStr);
			}
		}
		rs.MoveNext();
	}
	if (nGrpTotal[nsum_pos] > 0)
	{
		rptFooter = rpt.GetGroupFooter(1);
		if (rptFooter)
		{
			rptDetail = rpt.AddDetail(rptFooter);
		}
		else
		{
			rptDetail = rpt.GetReportFooter();
		}
		for (int i = 0; i <= nsum_pos; i++)
		{
			szPos.Format(_T("s%d"), i+5);
			tmpStr.Format(_T("%.2f"), nGrpTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
			nTotal[i] +=nGrpTotal[i];
			nGrpTotal[i] = 0;
		}
	}
	rptFooter = rpt.GetGroupFooter(1);
	if (rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();

	}
	for (int i = 0; i <= nsum_pos; i++)
	{
		szPos.Format(_T("s%d"), i+5);
		tmpStr.Format(_T("%.2f"), nTotal[i]);
		rptDetail->SetValue(szPos, tmpStr);
	}

	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[nsum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}
 
void CFMServiceIncomeList3::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, szPos;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	long double nTotal[7];
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 7; i++)
		nTotal[i] = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H THU TI\x1EC0N \x42\x1EC6NH NH\xC2N \x44\x1ECA\x43H V\x1EE4 Y T\x1EBE");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellMergedRows(0, 4, 2);
	xls.SetCellMergedRows(1, 4, 2);
	xls.SetCellMergedRows(2, 4, 2);
	xls.SetCellMergedRows(3, 4, 2);
	xls.SetCellMergedRows(4, 4, 2);
	xls.SetCellMergedRows(5, 4, 2);
	xls.SetCellMergedColumns(6, 4, 3);
	xls.SetCellMergedRows(9, 4, 2);
	xls.SetCellMergedRows(10, 4, 2);
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("H\x1ECD t\xEAn \x42N"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(3, 4, _T("Kho\x61"), 4098, true);
	xls.SetCellText(4, 4, _T("Tr\xED\x63h t\x1EA1m thu"), 4098, true);
	xls.SetCellText(5, 4, _T("Thu th\xEAm VP"), 4098, true);
	xls.SetCellText(6, 4, _T("T\x1ED5ng VP ph\x1EA3i thu"), 4098, true);
	xls.SetCellText(6, 5, _T("T\x1ED5ng thu \x43LS, KT"), 4098, true);
	xls.SetCellText(7, 5, _T("Ti\x1EC1n thu\x1ED1\x63 NGT"), 4098, true);
	xls.SetCellText(8, 5, _T("Ti\x1EC1n v\x1EADt t\x1B0 NGT"), 4098, true);
	xls.SetCellText(9, 4, _T("T\x1EA1m g\x1EEDi \x63h\x1B0\x61 TT"), 4098, true);
	xls.SetCellText(10, 4, _T("T\x1ED5ng thu"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("dept_name")), FMT_TEXT);
		rs.GetValue(_T("invoice_deposit"), nTmp);
		nTotal[0] += nTmp;
		xls.SetCellText(4, nRow, rs.GetValue(_T("invoice_deposit")), FMT_NUMBER1);
		rs.GetValue(_T("pat_paid"), nTmp);
		nTotal[1] += nTmp;
		xls.SetCellText(5, nRow, rs.GetValue(_T("pat_paid")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_amount"), nTmp);
		nTotal[2] += nTmp;
		xls.SetCellText(6, nRow, rs.GetValue(_T("invoice_amount")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_drug"), nTmp);
		nTotal[3] += nTmp;
		xls.SetCellText(7, nRow, rs.GetValue(_T("invoice_drug")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_material"), nTmp);
		nTotal[4] += nTmp;
		xls.SetCellText(8, nRow, rs.GetValue(_T("invoice_material")), FMT_NUMBER1);
		rs.GetValue(_T("deposit"), nTmp);
		nTotal[5] += nTmp;
		xls.SetCellText(9, nRow, rs.GetValue(_T("deposit")), FMT_NUMBER1);
		rs.GetValue(_T("receipt_amount"), nTmp);
		nTotal[6] += nTmp;
		xls.SetCellText(10, nRow, rs.GetValue(_T("receipt_amount")), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
	for (int i = 0; i < 7; i++)
	{
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+4, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\DS thu tien BN DVYT.xls"));
} 
void CFMServiceIncomeList3::OnApprovalSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMServiceIncomeList3::OnSODSelect(){
	OnReceiptListLoadData();
}

void CFMServiceIncomeList3::OnReceiptListDblClick(){
	
} 
void CFMServiceIncomeList3::OnReceiptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMServiceIncomeList3::OnReceiptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 

void CFMServiceIncomeList3::OnListCheckAll(){
	for (int i = 0; i < m_wndReceiptList.GetItemCount(); i++)
		m_wndReceiptList.SetCheck(i, true);
}

void CFMServiceIncomeList3::OnListUncheckAll(){
	for (int i = 0; i < m_wndReceiptList.GetItemCount(); i++)
		m_wndReceiptList.SetCheck(i, false);
}
void CFMServiceIncomeList3::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndReceiptList);
	newPopup->ShowPopup(&m_wndReceiptList);
}
long CFMServiceIncomeList3::OnReceiptListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	//szWhere.Format(_T(" AND fac_user_id = '%s'"), pMF->GetCurrentUser());
	//szWhere.Format(_T(" and FAC_LOCKED='Y' "));

	if(m_szStatusKey == _T("01"))
	{
		szWhere.AppendFormat(_T(" AND FAC_CREATEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}
	else if(m_szStatusKey == _T("02"))
	{
		szWhere.AppendFormat(_T(" and FAC_APPROVEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" and FAC_APPROVED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	} 
	else if(m_szStatusKey == _T("03") || m_szStatusKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" and FAC_POSTED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}
	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id = 'DVYC'"));
	else
		szWhere.AppendFormat(_T(" AND fac_cashbook_id = 'DV'"));
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_locked stt,") \
				 _T(" get_username(fac_user_id) clerk,  fac_posteddate posted_date") \
				 _T(" FROM fa_cash ") \
				 _T(" WHERE fac_invoicetype = 'R' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	m_wndReceiptList.BeginLoad();
	while (!rs.IsEOF())
	{
		m_wndReceiptList.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("descr")),
			rs.GetValue(_T("stt")),
			rs.GetValue(_T("clerk")),
			rs.GetValue(_T("posted_date")),
			NULL);
		rs.MoveNext();
	}
	m_wndReceiptList.EndLoad();
	return nCount;
}

void CFMServiceIncomeList3::OnDeptListDblClick(){
	
}
 
void CFMServiceIncomeList3::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMServiceIncomeList3::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMServiceIncomeList3::OnDeptListLoadData(){
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


CString CFMServiceIncomeList3::GetQueryString(){
	//Edited
	//1st
	//Tru MG khoi tong phai thu
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szDepts, szInnerWhere, szObjects, szReceiptStr;
	for (int i = 0; i < m_wndReceiptList.GetItemCount();i++)
	{
		if (m_wndReceiptList.GetCheck(i))
		{
			if (!szReceiptStr.IsEmpty())
				szReceiptStr += _T(", ");
			szReceiptStr += m_wndReceiptList.GetItemText(i, 0);
		}
	}
	if (!szReceiptStr.IsEmpty())
		szWhere.Format(_T(" AND cash_id IN (%s)"), szReceiptStr);
	else
	{
		ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn phi\x1EBFu thu \x63hi \x111\x1EC3 in"));
		return _T("");

		for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
		{
			if (m_wndDeptList.GetCheck(i))
			{
				if (!szDepts.IsEmpty())
					szDepts += _T(",");
				szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
			}
		}
		for (int i = 0; i < m_wndObject.GetItemCount(); i++)
		{
			if (m_wndObject.GetCheck(i))
			{
				m_wndObject.SetCurSel(i);
				if (!szObjects.IsEmpty())
					szObjects += _T(", ");
				szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
			}
		}
		szWhere.Format(_T(" AND cash_id > 0 AND invoice_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		if (!szDepts.IsEmpty())
			szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDepts);
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND clerk = '%s'"), m_szClerkKey);

		/*if (!szObjects.IsEmpty())
			szWhere.AppendFormat(_T(" AND object_id IN (%s)"), szObjects);*/
		if (!m_szObjectKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND object_id = %s"), m_szObjectKey);
	}

	szSQL.Format(_T(" SELECT cash_id, trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                   AS patient_name,") \
_T("   hfe_docno                                         AS doc_no,") \
_T("   hfe_deptid                                        AS dept_name,") \
_T("   SUM(trichtamgui)                                  AS invoice_deposit,") \
_T("   SUM(thuthem)                                      AS pat_paid,") \
_T("   SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc) AS invoice_amount,") \
_T("   SUM(miengiam)                                     AS fa,") \
_T("   SUM(tienthuoc)                                    AS invoice_drug,") \
_T("   SUM(tienvattu)                                    AS invoice_material,") \
_T("   SUM(maycnc)                                       AS cnc_amount,") \
_T("   SUM(tamguibandau)                                 AS deposit,") \
_T("   SUM(tamguibandau+thuthem)                         AS receipt_amount,") \
_T("   hd_status										 AS docstatus") \
_T(" FROM") \
_T("   (SELECT hfe_cash_id AS cash_id,") \
_T("     hfe_patientno,") \
_T("     hfe_docno,") \
_T("     hfe_deptid,") \
_T("     hfe_refidx,") \
_T("     hfe_invoiceno,") \
_T("     hfe_deposit AS trichtamgui,") \
_T("     CASE") \
_T("       WHEN hfe_payment > 0") \
_T("       THEN hfe_payment") \
_T("       ELSE 0") \
_T("     END            AS thuthem,") \
_T("     hfe_patpaid    AS cackhoanphaithu,") \
_T("     hfe_freeamount AS miengiam,") \
_T("     0              AS tamguibandau,") \
_T("     CASE") \
_T("       WHEN hfe_class <> 'I'") \
_T("       THEN") \
_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
_T("         FROM hms_fee f") \
_T("         LEFT JOIN m_product_item ON(mpi_product_item_id=CAST(hfe_itemid AS INTEGER) )") \
_T("		 LEFT JOIN m_product ON (mp_product_id = mpi_product_id)") \
_T("         WHERE f.hfe_docno     = i.hfe_docno") \
_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
_T("		 AND f.hfe_status in('P','R') ") \
_T("         AND f.hfe_type       IN('D','M','R')") \
_T("         AND f.hfe_category   <> 'Y'") \
_T("         AND mp_org_id        ='PM'") \
_T("         )") \
_T("       ELSE 0") \
_T("     END AS tienthuoc,") \
_T("     CASE") \
_T("       WHEN hfe_class <> 'I'") \
_T("       THEN") \
_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
_T("         FROM hms_fee f") \
_T("         LEFT JOIN m_product_item ON(mpi_product_item_id=CAST(hfe_itemid AS INTEGER) )") \
_T("		 LEFT JOIN m_product ON (mp_product_id = mpi_product_id)") \
_T("         WHERE f.hfe_docno     = i.hfe_docno") \
_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
_T("		 AND f.hfe_status in('P','R') ") \
_T("         AND f.hfe_type       IN('D','M','R')") \
_T("         AND f.hfe_category   <> 'Y'") \
_T("         AND mp_org_id        ='MA'") \
_T("         )") \
_T("       ELSE 0") \
_T("     END AS tienvattu,") \
_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
_T("     FROM hms_fee f") \
_T("     LEFT JOIN hms_fee_list") \
_T("     ON(hfl_feeid                   = hfe_itemid)") \
_T("     WHERE f.hfe_docno              = i.hfe_docno") \
_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
_T("	 AND f.hfe_status in('P','R') ") \
_T("     AND f.hfe_type                IN('P','T','O')") \
_T("     AND f.hfe_category            <> 'Y'") \
_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
_T("     ) AS maycnc") \
_T("   FROM hms_fee_invoice i") \
_T("   WHERE hfe_status IN('P','R')") \
_T("   AND hfe_payment  >=0") \
_T("   AND hfe_refund    = 0") \
_T("   UNION ALL") \
_T("   SELECT hfe_cash_id AS cash_id,") \
_T("     hfe_patientno,") \
_T("     hfe_docno,") \
_T("     hfe_deptid,") \
_T("     hfe_refidx,") \
_T("     hfe_invoiceno,") \
_T("     0          AS trichtamgui,") \
_T("     0          AS cackhoanphaithu,") \
_T("     0          AS miengiam,") \
_T("     0          AS thuthem,") \
_T("     hfe_amount AS tamguibandau,") \
_T("     0          AS tienthuoc,") \
_T("     0          AS tienvattu,") \
_T("     0          AS cnc") \
_T("   FROM hms_fee_deposit") \
_T("   WHERE hfe_status IN('P','R')") \
_T("   )") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hfe_patientno =hp_patientno)") \
_T(" LEFT JOIN hms_doc d") \
_T(" ON(hfe_patientno =hd_patientno AND hfe_docno=hd_docno)") \
_T(" WHERE 1          =1 AND hd_status <> 'T'") \
_T(" %s ") \
_T(" GROUP BY cash_id,") \
_T("   hfe_patientno,") \
_T("   hfe_docno,") \
_T("   hfe_deptid,") \
_T("   hp_surname,") \
_T("   hp_midname,") \
_T("   hp_firstname, hd_status") \
_T(" ORDER BY cash_id,") \
_T("   patient_name"), szWhere);
	//_msg(_T("SQL 1:%s"), szSQL);
	
	/*szSQL.Format(_T(" SELECT * ") \
	_T(" FROM   (SELECT    doc_no, ") \
	_T("                   Get_patientname(doc_no) patient_name, ") \
	_T("                   dept_id dept_name, ") \
	_T("                   SUM(invoice_deposit) invoice_deposit, ") \
	_T("                   SUM(pat_paid - fa) pat_paid, ") \
	_T("                   SUM(invoice_amount - fa) invoice_amount, ") \
	_T("				   SUM(fa) fa,") \
	_T("                   SUM(invoice_drug) invoice_drug, ") \
	_T("                   SUM(invoice_material) invoice_material, ") \
	_T("                   SUM(CASE WHEN cash_id < invoice_cash  OR invoice_cash = 0 THEN deposit ") \
	_T("                       ELSE 0 ") \
	_T("                       END) deposit, ") \
	_T("                   SUM(pat_paid - fa + CASE WHEN cash_id < invoice_cash OR invoice_cash = 0 THEN deposit ELSE 0 END) receipt_amount ") \
	_T("         FROM      ( ") \
	_T("                   SELECT hfe_cash_id cash_id, ") \
	_T("						  hfe_staff clerk,") \
	_T("					      hfe_date invoice_date,") \
	_T("                          hfe_deptid dept_id, ") \
	_T("                          hfe_docno doc_no, ") \
	_T("						  hfe_objectid object_id,") \
	_T("                          hfe_deposit invoice_deposit, ") \
	_T("                          hfe_amount - hfe_deposit pat_paid, ") \
	_T("                          0 invoice_amount, ") \
	_T("						  hfe_freeamount fa,") \
	_T("                          0 invoice_drug, ") \
	_T("                          0 invoice_material, ") \
	_T("                          0 deposit, ") \
	_T("                          hfe_class invoice_class, ") \
	_T("                          0 invoice_cash ") \
	_T("                   FROM   hms_fee_invoice ") \
	_T("				   WHERE hfe_status IN ('P', 'R')") \
	_T("                   UNION ALL ") \
	_T("                   SELECT    hfe_cash_id, ") \
	_T("							 i.hfe_staff,") \
	_T("							 i.hfe_date,") \
	_T("                             i.hfe_deptid, ") \
	_T("                             i.hfe_docno, ") \
	_T("							 i.hfe_objectid,") \
	_T("                             0, ") \
	_T("                             0, ") \
	_T("                             CASE WHEN i.hfe_class = 'I' THEN hfe_cost ") \
	_T("                             ELSE ") \
	_T("                                 CASE WHEN f.hfe_type NOT IN ( 'D', 'M' ) THEN hfe_cost ") \
	_T("                                 ELSE 0 ") \
	_T("                                 END ") \
	_T("                             END, ") \
	_T("							 0,") \
	_T("                             CASE WHEN i.hfe_class <> 'I' AND product_org_id = 'PM' THEN hfe_cost ") \
	_T("                             ELSE 0 ") \
	_T("                             END, ") \
	_T("                             CASE WHEN i.hfe_class <> 'I' AND product_org_id = 'MA' THEN hfe_cost ") \
	_T("                             ELSE 0 ") \
	_T("                             END, ") \
	_T("                             0, ") \
	_T("                             i.hfe_class, ") \
	_T("                             0 ") \
	_T("                   FROM      hms_fee_invoice i ") \
	_T("                   LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
	_T("                   LEFT JOIN m_productitem_view ON ( Cast(product_item_id AS NVARCHAR2(15)) = hfe_itemid ) ") \
	_T("                   WHERE     hfe_category <> 'Y' AND i.hfe_status IN ('P', 'R')") \
	_T("                    UNION ALL ") \
	_T("                    SELECT    d.hfe_cash_id, ") \
	_T("							  d.hfe_staff,") \
	_T("							  d.hfe_date,") \
	_T("                              d.hfe_deptid, ") \
	_T("                              d.hfe_docno, ") \
	_T("							  d.hfe_objectid,") \
	_T("                              0, ") \
	_T("                              0, ") \
	_T("                              0, ") \
	_T("							  0,") \
	_T("                              0, ") \
	_T("                              0, ") \
	_T("                              d.hfe_amount, ") \
	_T("                              Cast ('D' AS NVARCHAR2(1)), ") \
	_T("                              Coalesce(i.hfe_cash_id, 0) ") \
	_T("                    FROM      hms_fee_deposit d ") \
	_T("                    LEFT JOIN hms_fee_invoice i ON ( i.hfe_docno = d.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno )") \
	_T("					WHERE d.hfe_status IN ('P', 'R')) tbl0") \
	_T("         WHERE     1=1 %s ") \
	_T("         GROUP     BY doc_no,dept_id,invoice_class ") \
	_T("         ORDER     BY ") \
	_T("        dept_id,  ") \
	_T("        doc_no) ") \
	_T(" WHERE  receipt_amount >= 0"), szWhere);*/

	return szSQL;
}

