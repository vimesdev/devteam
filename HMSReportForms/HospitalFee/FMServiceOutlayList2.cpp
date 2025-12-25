#include "stdafx.h"
#include "FMServiceOutlayList2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceOutlayList2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceOutlayList2* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnClerkAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceOutlayList2* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnObjectAddNew();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2 *)pWnd)->OnStatusLoadData();
}
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMServiceOutlayList2 *)pWnd)->OnStatusSelendok();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServiceOutlayList2 *pVw = (CFMServiceOutlayList2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServiceOutlayList2 *pVw = (CFMServiceOutlayList2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	 ((CFMServiceOutlayList2*)pWnd)->OnApprovalSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMServiceOutlayList2*)pWnd)->OnSODSelect();
}
static long _OnPaymentListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2*)pWnd)->OnPaymentListLoadData();
} 
static void _OnPaymentListDblClickFnc(CWnd *pWnd){
	((CFMServiceOutlayList2*)pWnd)->OnPaymentListDblClick();
} 
static void _OnPaymentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceOutlayList2*)pWnd)->OnPaymentListSelectChange(nOldItem, nNewItem);
} 
static int _OnPaymentListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceOutlayList2*)pWnd)->OnPaymentListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	((CFMServiceOutlayList2*)pWnd)->OnListCheckAll();
	return 0;
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	((CFMServiceOutlayList2*)pWnd)->OnListUncheckAll();
	return 0;
}
static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMServiceOutlayList2*)pWnd)->OnListCheckAllTYC();
	return 0;
}

static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMServiceOutlayList2*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	((CFMServiceOutlayList2*)pWnd)->OnListSearchItem();
	return 0;
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMServiceOutlayList2*)pWnd)->OnABZoneSelect();
}
/*static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceOutlayList2*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMServiceOutlayList2*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceOutlayList2*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceOutlayList2*)pWnd)->OnDeptListDeleteItem();
} */
static void _OnAllZoneSelectFnc(CWnd *pWnd){
	 ((CFMServiceOutlayList2*)pWnd)->OnAllZoneSelect();
}

CFMServiceOutlayList2::CFMServiceOutlayList2(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMServiceOutlayList2::~CFMServiceOutlayList2(){
}
void CFMServiceOutlayList2::OnCreateComponents()
{
	
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 487, 551);
	m_wndPayment.Create(this, _T("Receipt"), 12, 181, 487, 549);
	m_wndYearLabel.Create(this, _T("Year"), 12, 30, 92, 55);
	m_wndYear.Create(this,102, 30, 247, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 254, 30, 334, 55);
	m_wndReportPeriod.Create(this,345, 30, 487, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 12, 60, 92, 85);
	m_wndFromDate.Create(this,102, 60, 247, 85); 
	m_wndToDate.Create(this,345, 60, 487, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 254, 60, 334, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 12, 90, 92, 115);
	m_wndClerk.Create(this,102, 90, 247, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 254, 90, 334, 115);
	m_wndObject.Create(this,345, 90, 487, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 12, 120, 92, 145);
	m_wndStatus.Create(this,102, 120, 247, 145); 
	m_wndPrint.Create(this, _T("&Print"), 320, 555, 400, 580);
	m_wndExport.Create(this, _T("&Export XLS"), 406, 555, 486, 580);
	m_wndSOD.Create(this, _T("Service On Demand"), 102, 150, 247, 175);
	m_wndPaymentList.Create(this,18, 206, 487, 544); 
	m_wndABZone.Create(this, _T("AB Zone"), 12, 150, 92, 175);
	m_wndAllZone.Create(this, _T("AllZone"), 254, 150, 334, 175);

}
void CFMServiceOutlayList2::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);

	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	//m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	//m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	//m_wndDeptList.SetCheckBox(TRUE);

	m_wndPaymentList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndPaymentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 130);
	m_wndPaymentList.InsertColumn(2, _T("Locked"), CFMT_TEXT, 30);
	m_wndPaymentList.InsertColumn(3, _T("Clerk"), CFMT_TEXT, 150);
	m_wndPaymentList.InsertColumn(4, _T("Posted Date"), CFMT_DATE, 100);
	m_wndPaymentList.SetCheckBox(true);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
}

void CFMServiceOutlayList2::OnSetWindowEvents(){
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
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndAllZone.SetEvent(WE_CLICK, _OnAllZoneSelectFnc);
	m_wndPaymentList.SetEvent(WE_SELCHANGE, _OnPaymentListSelectChangeFnc);
	m_wndPaymentList.SetEvent(WE_LOADDATA, _OnPaymentListLoadDataFnc);
	m_wndPaymentList.SetEvent(WE_DBLCLICK, _OnPaymentListDblClickFnc);
	m_wndPaymentList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndPaymentList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	m_wndPaymentList.AddEvent(3, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndPaymentList.AddEvent(4, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndPaymentList.AddEvent(5, _T("Search"), _OnListSearchItemFnc);
	//m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	//m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	//m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	//OnDeptListLoadData();
	OnPaymentListLoadData();
}
void CFMServiceOutlayList2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	//DDX_Check(pDX, m_wndApproval.GetDlgCtrlID(), m_bApproval);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndAllZone.GetDlgCtrlID(), m_bAllZone);

}
void CFMServiceOutlayList2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bSOD = FALSE;
	m_szStatusKey.Empty();
	m_bAllZone=FALSE;
}

int CFMServiceOutlayList2::SetMode(int nMode){
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

/*void CFMServiceOutlayList2::OnYearChange(){
	
} */
/*void CFMServiceOutlayList2::OnYearSetfocus(){
	
} */
/*void CFMServiceOutlayList2::OnYearKillfocus(){
	
} */
int CFMServiceOutlayList2::OnYearCheckValue(){
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
	OnPaymentListLoadData();
	return 0;
}
 
void CFMServiceOutlayList2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceOutlayList2::OnReportPeriodSelendok(){
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
	OnPaymentListLoadData();
}

/*void CFMServiceOutlayList2::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServiceOutlayList2::OnReportPeriodKillfocus(){
	
}*/
long CFMServiceOutlayList2::OnReportPeriodLoadData(){
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

/*void CFMServiceOutlayList2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServiceOutlayList2::OnFromDateChange(){
	
} */
/*void CFMServiceOutlayList2::OnFromDateSetfocus(){
	
} */
/*void CFMServiceOutlayList2::OnFromDateKillfocus(){
	
} */
int CFMServiceOutlayList2::OnFromDateCheckValue(){
	OnPaymentListLoadData();
	return 0;
}
 
/*void CFMServiceOutlayList2::OnToDateChange(){
	
} */
/*void CFMServiceOutlayList2::OnToDateSetfocus(){
	
} */
/*void CFMServiceOutlayList2::OnToDateKillfocus(){
	
} */
int CFMServiceOutlayList2::OnToDateCheckValue(){
	OnPaymentListLoadData();
	return 0;
}
 
void CFMServiceOutlayList2::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceOutlayList2::OnClerkSelendok(){
	OnPaymentListLoadData();
}
/*void CFMServiceOutlayList2::OnClerkSetfocus(){
	
}*/
/*void CFMServiceOutlayList2::OnClerkKillfocus(){
	
}*/
long CFMServiceOutlayList2::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServiceOutlayList2::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceOutlayList2::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceOutlayList2::OnObjectSelendok(){
	 
}
/*void CFMServiceOutlayList2::OnObjectSetfocus(){
	
}*/
/*void CFMServiceOutlayList2::OnObjectKillfocus(){
	
}*/
long CFMServiceOutlayList2::OnObjectLoadData(){
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

/*void CFMServiceOutlayList2::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMServiceOutlayList2::OnStatusLoadData(){
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);
	return 3;
}

void CFMServiceOutlayList2::OnStatusSelendok(){
	OnPaymentListLoadData();
}
void CFMServiceOutlayList2::OnAllZoneSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnPaymentListLoadData();
}

void CFMServiceOutlayList2::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1, ncol_pos = 5, nsum_pos = 0;
	CString szSQL, tmpStr, szPos, szReportName, szDate;
	CStringArray arrField;
	long double nGrpTotal[22], nTotal[22];
	long double nFa = 0;
	szReportName = _T("Reports\\HMS\\HF_DANHSACHCHITRATIENBENHNHANDICHVUYTE.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		if (nCount < 0)
			_msg(_T("%s"), szSQL);
		else
			_fmsg(_T("%s"), szSQL);
		AfxMessageBox(_T("No Data"));
		return;
	}
	arrField.Add(_T("invoice_deposit"));
	arrField.Add(_T("invoice_amount"));
	arrField.Add(_T("fa"));
	arrField.Add(_T("nguoncovid"));	
	arrField.Add(_T("invoice_drug"));
	arrField.Add(_T("invoice_material"));
	arrField.Add(_T("cnc_amount"));
	arrField.Add(_T("thu_goidv"));
	arrField.Add(_T("patient_return"));
	arrField.Add(_T("fee_return"));
	arrField.Add(_T("drug_return"));
	arrField.Add(_T("material_return"));
	arrField.Add(_T("cnc_return"));
	arrField.Add(_T("chi_goidv"));
	arrField.Add(_T("tl_nguoncovid"));
	arrField.Add(_T("tran_bao_viet"));
	arrField.Add(_T("total_return"));
	nsum_pos = arrField.GetCount() - 1;
	for (int i = 0; i < 22; i++)
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

	long nCashID, nOldCashID = 0;
	CRecord rsx(&pMF->m_db);
	CString szInvoiceNo, szInvoiceDate, szUserID;
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
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
			tmpStr.Format(_T("S\x1ED1 phi\x1EBFu [%s] Ng\xE0y [%s] Ng\x1B0\x1EDDi chi [%s]"),  szInvoiceNo, szInvoiceDate, szUserID);
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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("docno")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("deptid")));
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
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}
	
	if (rptDetail)
	{
		for (int i = 0; i <= nsum_pos; i++)
		{
			szPos.Format(_T("s%d"), i+5);
			tmpStr.Format(_T("%.2f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}
//		tmpStr.Format(_T("%f"), nFa);
///		rptFooter->SetValue(_T("s6.1"), tmpStr);
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

void CFMServiceOutlayList2::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("So sánh bảng kê"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Chi tiết bệnh nhân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect1();
			break;
		case 2:
			OnExportSelect2();
			break;	
	}
}
 
void CFMServiceOutlayList2::OnExportSelect1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal=0;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKECHI.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_check();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("total"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);			
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("T\x1ED5ng \x43\x1ED9ng"), FMT_TEXT, true);		
		xls.SetCellText(3, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKECHI2.xls"));
}

void CFMServiceOutlayList2::OnExportSelect2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal=0;

	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKECHIBH_CHITIET.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{	
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("invoice_deposit"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("invoice_amount"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("fa"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguoncovid"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("invoice_drug"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("invoice_material"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("cnc_amount"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("thu_goidv"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("patient_return"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("fee_return"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("drug_return"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("material_return"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("cnc_return"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chi_goidv"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tl_nguoncovid"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tran_bao_viet"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_return"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}	

	if (nGroupTotal[20] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKECHIBH_CHITIET2.xls"));
}
 
void CFMServiceOutlayList2::OnApprovalSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMServiceOutlayList2::OnSODSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnPaymentListLoadData();
}
void CFMServiceOutlayList2::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnPaymentListLoadData();
}

void CFMServiceOutlayList2::OnPaymentListDblClick(){
	
} 
void CFMServiceOutlayList2::OnPaymentListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMServiceOutlayList2::OnPaymentListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 

void CFMServiceOutlayList2::OnListCheckAll(){
	int i = 0;
	for (i = 0; i < m_wndPaymentList.GetItemCount(); i++)
		m_wndPaymentList.SetCheck(i, true);
	_msg(_T("Tổng số phiếu = %d"), i);
}

void CFMServiceOutlayList2::OnListUncheckAll(){
	for (int i = 0; i < m_wndPaymentList.GetItemCount(); i++)
		m_wndPaymentList.SetCheck(i, false);
}

void CFMServiceOutlayList2::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndPaymentList);
	newPopup->ShowPopup(&m_wndPaymentList);
}
int CFMServiceOutlayList2::OnListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndPaymentList.GetItemCount(); i++)	
	{
		szItemText=m_wndPaymentList.GetItemText(i,1);
	if ((_T("DVYC"))==szItemText.Right(4))
	{
		m_wndPaymentList.SetCheck(i, true);
	}
	else m_wndPaymentList.SetCheck(i, false);
	}
	return 0;
}
int CFMServiceOutlayList2::OnListCheckAllPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndPaymentList.GetItemCount(); i++)	
	{
		szItemText=m_wndPaymentList.GetItemText(i,1);
	if ((_T("PTTYC"))==szItemText.Right(5))
	{
		m_wndPaymentList.SetCheck(i, true);
	}
	else m_wndPaymentList.SetCheck(i, false);
	}
	return 0;
}

long CFMServiceOutlayList2::OnPaymentListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	//szWhere.Format(_T(" AND fac_user_id = '%s'"), pMF->GetCurrentUser());
	szWhere.Format(_T(" and FAC_LOCKED='Y' "));

	if(m_szStatusKey == _T("01"))
	{
		szWhere.AppendFormat(_T(" AND fac_invoicedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
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
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC')"));

	else if (m_bABZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB')"));

	else if (m_bAllZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV')"));
		//Test xong nho bo comment//
	     //szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV', 'THE-DV')"));
	else
		szWhere.AppendFormat(_T(" AND fac_cashbook_id = 'DV'"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_locked stt, ") \
				 _T(" get_username(fac_user_id) clerk,  fac_posteddate posted_date") \
				 _T(" FROM fa_cash ") \
				 _T(" WHERE fac_invoicetype = 'P' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	m_wndPaymentList.BeginLoad();
	while (!rs.IsEOF())
	{
		m_wndPaymentList.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("descr")),
			rs.GetValue(_T("stt")),
			rs.GetValue(_T("clerk")),
			rs.GetValue(_T("posted_date")),
			NULL);
		rs.MoveNext();
	}
	m_wndPaymentList.EndLoad();
	return nCount;
}

/*void CFMServiceOutlayList2::OnDeptListDblClick(){
	
}
 
void CFMServiceOutlayList2::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMServiceOutlayList2::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMServiceOutlayList2::OnDeptListLoadData(){
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
}*/


CString CFMServiceOutlayList2::GetQueryString()
{
	CString szSQL, szWhere;
	CString szDepts, szObjects, szPayments;
	szSQL.Empty();

	for (int i = 0; i < m_wndPaymentList.GetItemCount();i++)
	{
		if (m_wndPaymentList.GetCheck(i))
		{
			if (!szPayments.IsEmpty())
				szPayments += _T(", ");
			szPayments += m_wndPaymentList.GetItemText(i, 0);
		}
	}

	if (!szPayments.IsEmpty())
		szWhere.Format(_T(" AND cash_id IN (%s)"), szPayments);

	else
	{
		return 0;

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
		if (!m_szObjectKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND object_id = %s"), m_szObjectKey);
	}
	szSQL.Format(_T(" SELECT cash_id,") \
		_T("   fac_invoiceno AS invoice_no,") \
		_T("   Get_patientname(hfe_docno) as pname, ") \
		_T("   hfe_deptid as deptid, ") \
		_T("   hfe_docno as docno,") \
		_T("   SUM(trichtamgui)                                         AS invoice_deposit,") \
		_T("   SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc-hfe_packageamount-nguoncovid) AS invoice_amount,") \
		//_T("   CASE WHEN SUM(cackhoanphaithu)-SUM(miengiam)=0 THEN 0 ELSE SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc)  END AS invoice_amount,") \//
		_T("   SUM(miengiam)                                            AS fa,") \
		_T("   SUM(tienthuoc)                                           AS invoice_drug,") \
		_T("   SUM(tienvattu)                                           AS invoice_material,") \
		_T("   SUM(maycnc)                                              AS cnc_amount,") \
		_T("   SUM(hfe_packageamount)									AS thu_goidv,") \
		//_T("   CASE WHEN SUM(cackhoanphaithu)-SUM(miengiam)=0 THEN 0 ELSE SUM(tienthuoc)   END  AS invoice_drug,") \//
		//_T("   CASE WHEN SUM(cackhoanphaithu)-SUM(miengiam)=0 THEN 0 ELSE SUM(tienvattu)  END    AS invoice_material,") \//
		//_T("   CASE WHEN SUM(cackhoanphaithu)-SUM(miengiam)=0 THEN 0 ELSE SUM(maycnc) END     AS cnc_amount,") \//
		_T("   SUM(chitravienphi+tl_trichtamthu)                        AS patient_return,") \
		_T("   SUM(tl_vienphi-tl_thuoc-tl_vattu-tl_cnc-chi_goidv-tl_nguoncovid-tl_nguoncovid1)	    AS fee_return,") \
		_T("   SUM(tl_thuoc)                                            AS drug_return,") \
		_T("   SUM(tl_vattu)                                            AS material_return,") \
		_T("   SUM(tl_cnc)                                              AS cnc_return,") \
		_T("   SUM(chi_goidv)                                           AS chi_goidv,") \
		_T("   SUM(chitravienphi+tl_vienphi+tl_trichtamthu)				AS total_return,") \
		_T(" SUM(tran_bao_viet)                                         AS tran_bao_viet,") \
		_T("  ROUND(SUM(nguoncovid))                                    AS nguoncovid,") \
		_T("  SUM(tl_nguoncovid+tl_nguoncovid1) AS tl_nguoncovid ") \
		_T(" FROM fa_cash") \
		_T(" LEFT JOIN") \

		_T(" (SELECT r.hfe_cash_id AS cash_id,") \
		_T("     i.hfe_patientno,") \
		_T("     i.hfe_docno,") \
		_T("     i.hfe_deptid,") \
		_T("     i.hfe_refidx,") \
		_T("     i.hfe_invoiceno,") \
		_T("     i.hfe_deposit     AS trichtamgui,") \
		_T("     i.HFE_EXTINS_PAID AS tran_bao_viet,") \
		_T("     i.hfe_patpaid     AS cackhoanphaithu,") \
		_T("     i.hfe_freeamount  AS miengiam,") \
		_T("     CASE") \
		_T("       WHEN (i.hfe_class <> 'I'") \
		_T("       OR i.hfe_deptid    ='TTDTHM')") \
		_T("       THEN") \
		_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("         FROM hms_fee f") \
		_T("         LEFT JOIN m_productitem_view") \
		_T("         ON(product_item_id    =CAST(hfe_itemid AS INTEGER) )") \
		_T("         WHERE f.hfe_docno     = i.hfe_docno") \
		_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
		_T("         AND f.hfe_status     IN('P','R')") \
		_T("         AND f.hfe_type       IN('D','M')") \
		_T("         AND f.hfe_category   <> 'Y'") \
		_T("         AND product_org_id    ='PM'") \
		_T("         AND f.Hfe_itemid NOT IN") \
		_T("           (SELECT Hfe_itemid") \
		_T("           FROM Hms_Fee_Discountline") \
		_T("           WHERE hfe_docno=i.hfe_docno") \
		_T("           AND Hfe_Refidx =i.hfe_invoiceno") \
		_T("           )") \
		_T("         )") \
		_T("       ELSE 0") \
		_T("     END AS tienthuoc,") \
		_T("     CASE") \
		_T("       WHEN (i.hfe_class <> 'I'") \
		_T("       OR i.hfe_deptid    ='TTDTHM')") \
		_T("       THEN") \
		_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("         FROM hms_fee f") \
		_T("         LEFT JOIN m_productitem_view") \
		_T("         ON(product_item_id    =CAST(hfe_itemid AS INTEGER) )") \
		_T("         WHERE f.hfe_docno     = i.hfe_docno") \
		_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
		_T("         AND f.hfe_status     IN('P','R')") \
		_T("         AND f.hfe_type       IN('D','M')") \
		_T("         AND f.hfe_category   <> 'Y'") \
		_T("         AND product_org_id   IN ('MA', 'P?D')") \
		_T("         AND f.Hfe_itemid NOT IN") \
		_T("           (SELECT Hfe_itemid") \
		_T("           FROM Hms_Fee_Discountline") \
		_T("           WHERE hfe_docno=i.hfe_docno") \
		_T("           AND Hfe_Refidx =i.hfe_invoiceno") \
		_T("           )") \
		_T("         )") \
		_T("       ELSE 0") \
		_T("     END AS tienvattu,") \
		_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid                   = hfe_itemid)") \
		_T("     WHERE f.hfe_docno              = i.hfe_docno") \
		_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
		_T("     AND f.hfe_status              IN('P','R')") \
		_T("     AND f.hfe_type                IN('P','T','O')") \
		_T("     AND f.hfe_category            <> 'Y'") \
		_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
		_T("     AND f.Hfe_itemid NOT          IN") \
		_T("       (SELECT Hfe_itemid") \
		_T("       FROM Hms_Fee_Discountline") \
		_T("       WHERE hfe_docno=i.hfe_docno") \
		_T("       AND Hfe_Refidx =i.hfe_invoiceno") \
		_T("       )") \
		_T("     ) AS maycnc,") \
		_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("     FROM hms_fee f") \
		_T("     WHERE f.hfe_docno   = i.hfe_docno") \
		_T("     AND f.hfe_invoiceno = i.hfe_invoiceno") \
		_T("     AND f.hfe_itemid   IN") \
		_T("       (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE'") \
		_T("       )") \
		_T("     AND f.hfe_status     IN('P','R')") \
		_T("     AND f.hfe_type       IN('X')") \
		_T("     AND f.hfe_category   <> 'Y'") \
		_T("     AND f.Hfe_itemid NOT IN") \
		_T("       (SELECT Hfe_itemid") \
		_T("       FROM Hms_Fee_Discountline") \
		_T("       WHERE hfe_docno   =i.hfe_docno") \
		_T("       AND Hfe_Refidx    =i.hfe_invoiceno") \
		_T("       AND f.hfe_itemid IN") \
		_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE'") \
		_T("         )") \
		_T("       )") \
		_T("     )            AS hfe_packageamount,") \
		_T("     i.hfe_refund AS chitravienphi,") \
		_T("     0            AS tl_vienphi,") \
		_T("     0            AS tl_thuoc,") \
		_T("     0            AS tl_vattu,") \
		_T("     0            AS tl_cnc,") \
		_T("     0            AS chi_goidv,") \
		_T("     0            AS tl_trichtamthu,") \
		_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("     FROM hms_fee f") \
		_T("     WHERE f.hfe_docno   = i.hfe_docno") \
		_T("     AND f.hfe_invoiceno = i.hfe_invoiceno") \
		_T("     AND f.hfe_category  = 'COV'") \
		_T("     ) AS nguoncovid,") \
		_T("     0 AS tl_nguoncovid,") \
		_T("     0 AS tl_nguoncovid1") \
		_T("   FROM hms_fee_refund r") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON(r.hfe_docno      = i.hfe_docno") \
		_T("   AND r.hfe_refidx    =i.hfe_invoiceno)") \
		_T("   WHERE i.hfe_status IN('P','R')") \
		_T("   AND i.hfe_payment  <=0") \
		_T("   AND i.hfe_refund    > 0") \
		_T("   AND (SELECT COUNT(*)") \
		_T("     FROM hms_fee_refundline") \
		_T("     WHERE hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND hfe_docno       = r.hfe_docno) = 0") \
		_T("   UNION ALL") \

		_T("   SELECT hfe_cash_id,") \
		_T("     hfe_patientno,") \
		_T("     hfe_docno,") \
		_T("     hfe_deptid,") \
		_T("     hfe_refidx,") \
		_T("     hfe_invoiceno,") \
		_T("     hfe_amount AS trichtamgui,") \
		_T("     0          AS tran_bao_viet,") \
		_T("     0          AS cackhoanphaithu,") \
		_T("     0          AS miengiam,") \
		_T("     0          AS tienthuoc,") \
		_T("     0          AS tienvattu,") \
		_T("     0          AS maycnc,") \
		_T("     0          AS hfe_packageamount,") \
		_T("     hfe_amount AS chtravp,") \
		_T("     0          AS tl_vienphi,") \
		_T("     0          AS tl_tienthuoc,") \
		_T("     0          AS tl_tienvattu,") \
		_T("     0          AS tl_maycnc,") \
		_T("     0          AS chi_goidv,") \
		_T("     0          AS tl_trichtamthu,") \
		_T("     0          AS nguoncovid,") \
		_T("     0          AS tl_nguoncovid,") \
		_T("     0          AS tl_nguoncovid1") \
		_T("   FROM hms_fee_refund r") \
		_T("   WHERE r.hfe_status = 'P'") \
		_T("   AND r.hfe_type     = 'G'") \
		_T("   UNION ALL") \
		_T("   SELECT r.hfe_cash_id,") \
		_T("     r.hfe_patientno,") \
		_T("     r.hfe_docno,") \
		_T("     r.hfe_deptid,") \
		_T("     r.hfe_refidx,") \
		_T("     r.hfe_invoiceno,") \
		_T("     CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \
		_T("       THEN l.hfe_patpaid") \
		_T("       ELSE 0") \
		_T("     END AS trichtamgui,") \
		_T("     0   AS tran_bao_viet,") \
		_T("     0   AS cackhoanphaithu,") \
		_T("     0   AS miengiam,") \
		_T("     0   AS tienthuoc,") \
		_T("     0   AS tienvattu,") \
		_T("     0   AS maycnc,") \
		_T("     0   AS hfe_packageamount,") \
		_T("     0   AS chtravp,") \
		_T("     CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \
		_T("       THEN 0") \
		_T("       ELSE l.hfe_patpaid") \
		_T("     END AS tl_vienphi,") \
		_T("     CASE") \
		_T("       WHEN r.hfe_class <> 'I'") \
		_T("       THEN") \
		_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("         FROM hms_fee_refundline f") \
		_T("         LEFT JOIN m_product_item") \
		_T("         ON(mpi_product_item_id        =CAST(hfe_itemid AS INTEGER) )") \
		_T("         WHERE f.hfe_docno             = r.hfe_docno") \
		_T("         AND f.hfe_invoiceno           = r.hfe_invoiceno") \
		_T("         AND f.hfe_type               IN('F')") \
		_T("         AND SUBSTR(f.hfe_group, 1, 1) = 'A'") \
		_T("         AND f.hfe_itemid              = l.hfe_itemid") \
		_T("         AND f.hfe_fee_refundline_id   = l.hfe_fee_refundline_id") \
		_T("         AND mpi_org_id                ='PM'") \
		_T("         )") \
		_T("       ELSE 0") \
		_T("     END AS tl_tienthuoc,") \
		_T("     CASE") \
		_T("       WHEN r.hfe_class <> 'I'") \
		_T("       THEN") \
		_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("         FROM hms_fee_refundline f") \
		_T("         LEFT JOIN m_product_item") \
		_T("         ON(mpi_product_item_id        =CAST(hfe_itemid AS INTEGER) )") \
		_T("         WHERE f.hfe_docno             = r.hfe_docno") \
		_T("         AND f.hfe_invoiceno           = r.hfe_invoiceno") \
		_T("         AND f.hfe_type               IN('F')") \
		_T("         AND SUBSTR(f.hfe_group, 1, 1) = 'A'") \
		_T("         AND f.hfe_itemid              = l.hfe_itemid") \
		_T("         AND mpi_org_id                ='MA'") \
		_T("         )") \
		_T("       ELSE 0") \
		_T("     END AS tl_tienvattu,") \
		_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("     FROM hms_fee_refundline f") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid                   = hfe_itemid)") \
		_T("     WHERE f.hfe_docno              = r.hfe_docno") \
		_T("     AND f.hfe_fee_refundline_id    = l.hfe_fee_refundline_id") \
		_T("     AND f.hfe_invoiceno            = r.hfe_invoiceno") \
		_T("     AND f.hfe_type                IN('F')") \
		_T("     AND f.hfe_itemid               = l.hfe_itemid") \
		_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
		_T("     ) AS tl_maycnc,") \
		_T("     (SELECT COALESCE(SUM(hfe_cost), 0)") \
		_T("     FROM hms_fee_refundline f") \
		_T("     WHERE f.hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND f.hfe_docno       = r.hfe_docno AND f.hfe_fee_refundline_id    = l.hfe_fee_refundline_id") \
		_T("     AND f.hfe_itemid     IN") \
		_T("       (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE'") \
		_T("       )") \
		_T("     ) chi_goidv,") \
		_T("     CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \
		_T("       THEN l.hfe_patpaid") \
		_T("       ELSE 0") \
		_T("     END AS tl_trichtamthu,") \
		_T("     0   AS nguoncovid,") \
		_T("     0   AS tl_nguoncovid,") \
		_T("     0   AS tl_nguoncovid1") \
		_T("   FROM hms_fee_refund r,") \
		_T("     hms_fee_refundline l") \
		_T("   WHERE r.hfe_docno   = l.hfe_docno") \
		_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
		_T("   AND l.hfe_invoiceno > 0") \
		_T("   AND r.hfe_status    ='P'") \
		_T("   UNION ALL") \

		_T("   SELECT r.hfe_cash_id,") \
		_T("     r.hfe_patientno,") \
		_T("     r.hfe_docno,") \
		_T("     r.hfe_deptid,") \
		_T("     r.hfe_refidx,") \
		_T("     r.hfe_invoiceno,") \
		_T("     0 trichtamgui,") \
		_T("     0 AS tran_bao_viet,") \
		_T("     0 AS cackhoanphaithu,") \
		_T("     0 AS miengiam,") \
		_T("     0 AS tienthuoc,") \
		_T("     0 AS tienvattu,") \
		_T("     0 AS maycnc,") \
		_T("     0 AS hfe_packageamount,") \
		_T("     0 AS chtravp,") \
		_T("     0 AS tl_vienphi,") \
		_T("     0 AS tl_tienthuoc,") \
		_T("     0 AS tl_tienvattu,") \
		_T("     0 AS tl_maycnc,") \
		_T("     (SELECT COALESCE(SUM(hfe_cost), 0)") \
		_T("     FROM hms_fee_refundline l") \
		_T("     WHERE l.hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND l.hfe_docno       = r.hfe_docno") \
		_T("     AND l.hfe_itemid     IN ('18', '19', '20')") \
		_T("     ) chi_goidv,") \
		_T("     0 AS tl_trichtamthu,") \
		_T("     0 AS nguoncovid,") \
		_T("     (SELECT COALESCE(SUM(hfe_cost), 0)") \
		_T("     FROM hms_fee_refundline l") \
		_T("     WHERE l.hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND l.hfe_docno       = r.hfe_docno") \
		_T("     AND l.hfe_itemid     IN ('22')") \
		_T("     )tl_nguoncovid,") \
		_T("     (SELECT COALESCE(SUM(hfe_cost), 0)") \
		_T("     FROM hms_fee_refundline l") \
		_T("     WHERE l.hfe_invoiceno      = r.hfe_invoiceno") \
		_T("     AND l.hfe_docno            = r.hfe_docno") \
		_T("     AND NVL(l.HFE_XNCOVID, 'X')='Y'") \
		_T("     )tl_nguoncovid1") \
		_T("   FROM hms_fee_refund r,") \
		_T("     hms_fee_refundline l") \
		_T("   WHERE r.hfe_docno   = l.hfe_docno") \
		_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
		_T("   AND l.hfe_invoiceno > 0") \
		_T("   AND r.hfe_status    ='P'") \
		_T("   UNION ALL") \
		_T("   SELECT hfe_cash_id,") \
		_T("     hfe_patientno,") \
		_T("     hfe_docno,") \
		_T("     hfe_deptid,") \
		_T("     hfe_refidx,") \
		_T("     hfe_invoiceno,") \
		_T("     0          AS trichtamgui,") \
		_T("     0          AS tran_bao_viet,") \
		_T("     0          AS cackhoanphaithu,") \
		_T("     0          AS miengiam,") \
		_T("     0          AS tienthuoc,") \
		_T("     0          AS tienvattu,") \
		_T("     0          AS maycnc,") \
		_T("     0          AS hfe_packageamount,") \
		_T("     0          AS chtravp,") \
		_T("     hfe_amount AS tl_vienphi,") \
		_T("     0          AS tl_tienthuoc,") \
		_T("     0          AS tl_tienvattu,") \
		_T("     0          AS tl_maycnc,") \
		_T("     0          AS chi_goidv,") \
		_T("     0          AS tl_trichtamthu,") \
		_T("     0          AS nguoncovid,") \
		_T("     0          AS tl_nguoncovid,") \
		_T("     0          AS tl_nguoncovid1") \
		_T("   FROM hms_fee_refund") \
		_T("   WHERE hfe_type  IN('G','S')") \
		_T("   AND (hfe_refidx <> 0") \
		_T("   AND hfe_isreq   <> 'Y')") \
		_T("   AND hfe_status   ='P'") \
		_T("   UNION ALL") \
		_T("   SELECT hfe_cash_id,") \
		_T("     hfe_patientno,") \
		_T("     hfe_docno,") \
		_T("     hfe_deptid,") \
		_T("     hfe_refidx,") \
		_T("     hfe_invoiceno,") \
		_T("     0          AS trichtamgui,") \
		_T("     0          AS tran_bao_viet,") \
		_T("     0          AS cackhoanphaithu,") \
		_T("     0          AS miengiam,") \
		_T("     0          AS tienthuoc,") \
		_T("     0          AS tienvattu,") \
		_T("     0          AS maycnc,") \
		_T("     0          AS hfe_packageamount,") \
		_T("     0          AS chtravp,") \
		_T("     hfe_amount AS tl_vienphi,") \
		_T("     0          AS tl_tienthuoc,") \
		_T("     0          AS tl_tienvattu,") \
		_T("     0          AS tl_maycnc,") \
		_T("     0          AS chi_goidv,") \
		_T("     0          AS tl_trichtamthu,") \
		_T("     0          AS nguoncovid,") \
		_T("     0          AS tl_nguoncovid,") \
		_T("     0          AS tl_nguoncovid1") \
		_T("   FROM hms_fee_refund") \
		_T("   WHERE hfe_type             IN('V')") \
		_T("   AND hfe_status              ='P'") \



		_T("   ) tblInvoice ON(fac_cash_id = cash_id)") \
		_T(" WHERE 1=1 %s ") \
		_T(" GROUP BY cash_id,") \
		_T(" hfe_deptid, ") \
		_T("   hfe_docno,") \
		_T("   fac_user_id,") \
		_T("   fac_invoiceno") \
		_T(" ORDER BY fac_user_id,") \
		_T("   fac_invoiceno"), szWhere);
//_msg(_T("%s"), szSQL);
return szSQL;
	//Edit
	//1st
	//Them MG
	//BN hoan tra nhieu lan
	szSQL.Format(_T(" SELECT    doc_no, ") \
	_T("           Get_patientname(doc_no) patient_name, ") \
	_T("           dept_id dept_name, ") \
	_T("           SUM(invoice_deposit) invoice_deposit, ") \
	_T("           SUM(pat_paid + fa) pat_paid, ") \
	_T("           SUM(invoice_drug) invoice_drug, ") \
	_T("           SUM(invoice_material) invoice_material, ") \
	_T("           SUM(invoice_amount - fa) invoice_amount, ") \
	_T("		   SUM(fa) fa,") \
	_T("           SUM(hitech_return) hitech_return, ") \
	_T("           SUM(test_return) test_return, ") \
	_T("           SUM(drug_return) drug_return, ") \
	_T("           SUM(material_return) material_return, ") \
	_T("           SUM(pat_paid + fa + hitech_return + test_return ") \
	_T("               + drug_return + material_return) total_return ") \
	_T(" FROM      ( ") \
	_T("           SELECT rf.hfe_cash_id cash_id, ") \
	_T("				  rf.hfe_staff clerk,") \
	_T("				  rf.hfe_date invoice_date,") \
	_T("                  rf.hfe_docno doc_no, ") \
	_T("				  rf.hfe_objectid object_id,") \
	_T("                  rf.hfe_deptid dept_id, ") \
	_T("                  i.hfe_deposit invoice_deposit, ") \
	_T("                  CASE WHEN i.hfe_deposit > i.hfe_amount THEN i.hfe_deposit - i.hfe_amount ") \
	_T("                  ELSE 0 ") \
	_T("                  END pat_paid, ") \
	_T("                  0 invoice_drug, ") \
	_T("                  0 invoice_material, ") \
	_T("                  0 invoice_amount, ") \
	_T("				  hfe_freeamount fa, ") \
	_T("                  0 hitech_return, ") \
	_T("                  0 test_return, ") \
	_T("                  0 drug_return, ") \
	_T("                  0 material_return, ") \
	_T("                  rf. hfe_class invoice_class ") \
	_T("           FROM   hms_fee_refund rf ") \
	_T("		   LEFT JOIN hms_fee_invoice i ON (rf.hfe_refidx = i.hfe_invoiceno AND rf.hfe_docno = i.hfe_docno)") \
	_T("		   WHERE rf.hfe_type = 'F' AND rf.hfe_status = 'P'") \
	_T("           UNION ALL ") \
	_T("           SELECT    rf.hfe_cash_id cash_id, ") \
	_T("					 rf.hfe_staff,") \
	_T("					 rf.hfe_date,") \
	_T("                     rf.hfe_docno doc_no, ") \
	_T("					 rf.hfe_objectid,") \
	_T("                     rf.hfe_deptid dept_id, ") \
	_T("                     0 invoice_deposit, ") \
	_T("                     0 pat_paid, ") \
	_T("                     CASE WHEN i.hfe_class <> 'I' AND product_org_id = 'PM' THEN f.hfe_cost ") \
	_T("                     ELSE 0 ") \
	_T("                     END invoice_drug, ") \
	_T("                     CASE WHEN i.hfe_class <> 'I' AND product_org_id = 'MA' THEN f.hfe_cost ") \
	_T("                     ELSE 0 ") \
	_T("                     END invoice_material, ") \
	_T("                     CASE WHEN i.hfe_class = 'I' THEN f.hfe_cost ") \
	_T("                     ELSE ") \
	_T("                         CASE WHEN f.hfe_type NOT IN ( 'D', 'M' ) THEN f.hfe_cost ") \
	_T("                         ELSE 0 ") \
	_T("                         END ") \
	_T("                     END invoice_amount, ") \
	_T("				     0,") \
	_T("                     0 hitech, ") \
	_T("                     0 test_return, ") \
	_T("                     0 drug_return, ") \
	_T("                     0 material_return, ") \
	_T("                     i.hfe_class invoice_class ") \
	_T("           FROM      hms_fee_refund rf") \
	_T("		   LEFT JOIN hms_fee_invoice i ON (rf.hfe_refidx = i.hfe_invoiceno AND rf.hfe_docno = i.hfe_docno)") \
	_T("           LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
	_T("           LEFT JOIN m_productitem_view ON ( Cast (product_item_id AS NVARCHAR2(15)) = f.hfe_itemid ) ") \
	_T("		   WHERE rf.hfe_status = 'P' AND rf.hfe_type = 'F' AND f.hfe_category <> 'Y'") \
	_T("           UNION ALL ") \
	_T("           SELECT    rf.hfe_cash_id cash_id, ") \
	_T("					 rf.hfe_staff,") \
	_T("					 rf.hfe_date,") \
	_T("                     rf.hfe_docno doc_no, ") \
	_T("					 rf.hfe_objectid,") \
	_T("                     i.hfe_deptid dept_id, ") \
	_T("                     0 invoice_deposit, ") \
	_T("                     0 pat_paid, ") \
	_T("                     0 invoice_drug, ") \
	_T("                     0 invoice_material, ") \
	_T("                     0 invoice_amount, ") \
	_T("					 0,") \
	_T("                     CASE WHEN Nvl(hfl_hitechmachine, 'N') = 'Y' THEN hfe_cost ") \
	_T("                     ELSE 0 ") \
	_T("                     END hitech_return, ") \
	_T("                     CASE WHEN Nvl(product_org_id, 'XX') NOT IN ( 'PM', 'MA' ) AND Nvl(hfl_hitechmachine, 'N') <> 'Y' THEN hfe_cost ") \
	_T("                     ELSE 0 ") \
	_T("                     END test_return, ") \
	_T("                     CASE WHEN product_org_id = 'PM' THEN hfe_cost ") \
	_T("                     ELSE 0 ") \
	_T("                     END drug_return, ") \
	_T("                     CASE WHEN product_org_id = 'MA' THEN hfe_cost ") \
	_T("                     ELSE 0 ") \
	_T("                     END material_return, ") \
	_T("                     hfe_class invoice_class ") \
	_T("           FROM      hms_fee_refund rf ") \
	_T("           LEFT JOIN hms_fee_refundline rfl ON ( rf.hfe_docno = rfl.hfe_docno AND rf.hfe_invoiceno = rfl.hfe_invoiceno ) ") \
	_T("           LEFT JOIN hms_fee_invoice i ON ( i.hfe_docno = rf.hfe_docno AND i.hfe_invoiceno = rf.hfe_refidx ) ") \
	_T("           LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid ) ") \
	_T("           LEFT JOIN m_productitem_view ON ( Cast (product_item_id AS NVARCHAR2(15)) = hfe_itemid ) ") \
	_T("           WHERE     rf.hfe_status = 'P' AND rf.hfe_type = 'E' ") \
	_T("            UNION ALL ") \
	_T("            SELECT    rf.hfe_cash_id, ") \
	_T("					  rf.hfe_staff,") \
	_T("					  rf.hfe_date,") \
	_T("                      rf.hfe_docno, ") \
	_T("					  rf.hfe_objectid,") \
	_T("                      d.hfe_deptid, ") \
	_T("                      d.hfe_amount, ") \
	_T("                      0, ") \
	_T("                      0, ") \
	_T("                      0, ") \
	_T("                      0, ") \
	_T("					  0, ") \
	_T("                      0, ") \
	_T("                      d.hfe_amount, ") \
	_T("                      0, ") \
	_T("                      0, ") \
	_T("                      d.hfe_class ") \
	_T("            FROM      hms_fee_refund rf ") \
	_T("            LEFT JOIN hms_fee_deposit d ON ( rf.hfe_docno = d.hfe_docno AND rf.hfe_refidx = d.hfe_invoiceno ) ") \
	_T("            WHERE     d.hfe_status = 'R') tbl") \
	_T(" WHERE     1=1 %s") \
	_T(" GROUP     BY doc_no,dept_id,invoice_class ") \
	_T(" HAVING    SUM(pat_paid + fa+ hitech_return + test_return ") \
	_T("               + drug_return + material_return) > 0 ") \
	_T(" ORDER     BY doc_no "), szWhere);
	return szSQL;
}
CString CFMServiceOutlayList2::GetQueryString_check()
{	
CString szSQL, szWhere;
	CString szDepts, szObjects, szPayments;
	szSQL.Empty();	
	for (int i = 0; i < m_wndPaymentList.GetItemCount();i++)
	{
		if (m_wndPaymentList.GetCheck(i))
		{
			if (!szPayments.IsEmpty())
				szPayments += _T(", ");
			szPayments += m_wndPaymentList.GetItemText(i, 0);
		}
	}
	if (!szPayments.IsEmpty())
		szWhere.Format(_T(" AND cash_id IN (%s)"), szPayments);
	else
	{
		return 0;

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
		if (!m_szObjectKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND object_id = %s"), m_szObjectKey);
	}
	szSQL.Format(_T(" SELECT") \
				_T(" docno,pname,total") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
				_T(" docno,pname,SUM(invoice_amount+invoice_drug+invoice_material+cnc_amount) as total") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT cash_id,") \
				_T("   fac_invoiceno                                            AS invoice_no,") \
				_T("   Get_patientname(hfe_docno)                               AS pname,") \
				_T("   hfe_deptid                                               AS deptid,") \
				_T("   hfe_docno                                                AS docno,") \
				_T("   SUM(trichtamgui)                                         AS invoice_deposit,") \
				_T("   SUM(cackhoanphaithu-tienthuoc-tienvattu-maycnc) AS invoice_amount,") \
				_T("   SUM(miengiam)                                            AS fa,") \
				_T("   SUM(tienthuoc)                                           AS invoice_drug,") \
				_T("   SUM(tienvattu)                                           AS invoice_material,") \
				_T("   SUM(maycnc)                                              AS cnc_amount,") \
				_T("   SUM(chitravienphi+tl_trichtamthu)                        AS patient_return,") \
				_T("   SUM(tl_vienphi   -tl_thuoc-tl_vattu-tl_cnc)              AS fee_return,") \
				_T("   SUM(tl_thuoc)                                            AS drug_return,") \
				_T("   SUM(tl_vattu)                                            AS material_return,") \
				_T("   SUM(tl_cnc)                                              AS cnc_return,") \
				_T("   SUM(chitravienphi+tl_vienphi+tl_trichtamthu)             AS total_return") \
				_T(" FROM fa_cash") \
				_T(" LEFT JOIN") \
				_T("   (SELECT r.hfe_cash_id AS cash_id,") \
				_T("     i.hfe_patientno,") \
				_T("     i.hfe_docno,") \
				_T("     i.hfe_deptid,") \
				_T("     i.hfe_refidx,") \
				_T("     i.hfe_invoiceno,") \
				_T("     i.hfe_deposit    AS trichtamgui,") \
				_T("     i.hfe_patpaid    AS cackhoanphaithu,") \
				_T("     i.hfe_freeamount AS miengiam,") \
				_T("     CASE") \
				_T("       WHEN i.hfe_class <> 'I'") \
				_T("       THEN") \
				_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
				_T("         FROM hms_fee f") \
				_T("         LEFT JOIN m_product_item") \
				_T("         ON(mpi_product_item_id=CAST(hfe_itemid AS INTEGER) )") \
				_T("         LEFT JOIN m_product") \
				_T("         ON (mp_product_id   = mpi_product_id)") \
				_T("         WHERE f.hfe_docno   = i.hfe_docno") \
				_T("         AND f.hfe_invoiceno = i.hfe_invoiceno") \
				_T("         AND f.hfe_status   IN('P','R')") \
				_T("         AND f.hfe_type     IN('D','M', 'R')") \
				_T("         AND f.hfe_category <> 'Y'") \
				_T("         AND mp_org_id       ='PM'") \
				_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno)") \
				_T("         )") \
				_T("       ELSE 0") \
				_T("     END AS tienthuoc,") \
				_T("     CASE") \
				_T("       WHEN i.hfe_class <> 'I'") \
				_T("       THEN") \
				_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
				_T("         FROM hms_fee f") \
				_T("         LEFT JOIN m_product_item") \
				_T("         ON(mpi_product_item_id=CAST(hfe_itemid AS INTEGER) )") \
				_T("         LEFT JOIN m_product") \
				_T("         ON (mp_product_id   = mpi_product_id)") \
				_T("         WHERE f.hfe_docno   = i.hfe_docno") \
				_T("         AND f.hfe_invoiceno = i.hfe_invoiceno") \
				_T("         AND f.hfe_status   IN('P','R')") \
				_T("         AND f.hfe_type     IN('D','M', 'R')") \
				_T("         AND f.hfe_category <> 'Y'") \
				_T("         AND mp_org_id       in ('MA', 'PĐD')") \
				_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno)") \
				_T("         )") \
				_T("       ELSE 0") \
				_T("     END AS tienvattu,") \
				_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list") \
				_T("     ON(hfl_feeid                   = hfe_itemid)") \
				_T("     WHERE f.hfe_docno              = i.hfe_docno") \
				_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
				_T("     AND f.hfe_status              IN('P','R')") \
				_T("     AND f.hfe_type                IN('P','T','O')") \
				_T("     AND f.hfe_category            <> 'Y'") \
				_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
				_T("     AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno)") \
				_T("     )            AS maycnc,") \
				_T("     i.hfe_refund AS chitravienphi,") \
				_T("     0            AS tl_vienphi,") \
				_T("     0            AS tl_thuoc,") \
				_T("     0            AS tl_vattu,") \
				_T("     0            AS tl_cnc,") \
				_T("     0            AS tl_trichtamthu") \
				_T("   FROM hms_fee_refund r") \
				_T("   LEFT JOIN hms_fee_invoice i") \
				_T("   ON(r.hfe_docno      = i.hfe_docno") \
				_T("   AND r.hfe_refidx    =i.hfe_invoiceno)") \
				_T("   WHERE i.hfe_status IN('P','R')") \
				_T("   AND i.hfe_payment  <=0") \
				_T("   AND i.hfe_refund    > 0") \
				_T("   AND (SELECT COUNT(*)") \
				_T("     FROM hms_fee_refundline") \
				_T("     WHERE hfe_invoiceno = r.hfe_invoiceno") \
				_T("     AND hfe_docno       = r.hfe_docno) = 0") \
				_T("   UNION ALL") \
				_T("   SELECT r.hfe_cash_id cash_id,") \
				_T("     r.hfe_patientno,") \
				_T("     r.hfe_docno,") \
				_T("     r.hfe_deptid,") \
				_T("     r.hfe_refidx,") \
				_T("     r.hfe_invoiceno,") \
				_T("     r.hfe_amount AS trichtamgui,") \
				_T("     0            AS cackhoanphaithu,") \
				_T("     0            AS miengiam,") \
				_T("     0 tienthuoc,") \
				_T("     0 tienvattu,") \
				_T("     0            AS maycnc,") \
				_T("     r.hfe_amount AS chitravienphi,") \
				_T("     0            AS tl_vienphi,") \
				_T("     0            AS tl_thuoc,") \
				_T("     0            AS tl_vattu,") \
				_T("     0            AS tl_cnc,") \
				_T("     0            AS tl_trichtamthu") \
				_T("   FROM hms_fee_refund r") \
				_T("   WHERE r.hfe_status = 'P'") \
				_T("   AND r.hfe_type     = 'G'") \
				_T("   AND r.hfe_refidx   = 0") \
				_T("   UNION ALL") \
				_T("   SELECT r.hfe_cash_id,") \
				_T("     r.hfe_patientno,") \
				_T("     r.hfe_docno,") \
				_T("     r.hfe_deptid,") \
				_T("     r.hfe_refidx,") \
				_T("     r.hfe_invoiceno,") \
				_T("     CASE") \
				_T("       WHEN l.hfe_itemid IS NULL") \
				_T("       THEN l.hfe_patpaid") \
				_T("       ELSE 0") \
				_T("     END AS trichtamgui,") \
				_T("     0   AS cackhoanphaithu,") \
				_T("     0   AS miengiam,") \
				_T("     0   AS tienthuoc,") \
				_T("     0   AS tienvattu,") \
				_T("     0   AS maycnc,") \
				_T("     0   AS chtravp,") \
				_T("     CASE") \
				_T("       WHEN l.hfe_itemid IS NULL") \
				_T("       THEN 0") \
				_T("       ELSE l.hfe_patpaid") \
				_T("     END AS tl_vienphi,") \
				_T("     CASE") \
				_T("       WHEN r.hfe_class <> 'I'") \
				_T("       THEN") \
				_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
				_T("         FROM hms_fee_refundline f") \
				_T("         LEFT JOIN m_product_item") \
				_T("         ON(mpi_product_item_id        =CAST(hfe_itemid AS INTEGER) )") \
				_T("         WHERE f.hfe_docno             = r.hfe_docno") \
				_T("         AND f.hfe_invoiceno           = r.hfe_invoiceno") \
				_T("         AND f.hfe_type               IN('F')") \
				_T("         AND SUBSTR(f.hfe_group, 1, 1) = 'A'") \
				_T("         AND f.hfe_itemid              = l.hfe_itemid") \
				_T("         AND mpi_org_id                ='PM'") \
				_T("         )") \
				_T("       ELSE 0") \
				_T("     END AS tl_tienthuoc,") \
				_T("     CASE") \
				_T("       WHEN r.hfe_class <> 'I'") \
				_T("       THEN") \
				_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
				_T("         FROM hms_fee_refundline f") \
				_T("         LEFT JOIN m_product_item") \
				_T("         ON(mpi_product_item_id        =CAST(hfe_itemid AS INTEGER) )") \
				_T("         WHERE f.hfe_docno             = r.hfe_docno") \
				_T("         AND f.hfe_invoiceno           = r.hfe_invoiceno") \
				_T("         AND f.hfe_type               IN('F')") \
				_T("         AND SUBSTR(f.hfe_group, 1, 1) = 'A'") \
				_T("         AND f.hfe_itemid              = l.hfe_itemid") \
				_T("         AND mpi_org_id                ='MA'") \
				_T("         )") \
				_T("       ELSE 0") \
				_T("     END AS tl_tienvattu,") \
				_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
				_T("     FROM hms_fee_refundline f") \
				_T("     LEFT JOIN hms_fee_list") \
				_T("     ON(hfl_feeid                   = hfe_itemid)") \
				_T("     WHERE f.hfe_docno              = r.hfe_docno") \
				_T("     AND f.hfe_invoiceno            = r.hfe_invoiceno") \
				_T("     AND f.hfe_fee_refundline_id    = l.hfe_fee_refundline_id") \
				_T("     AND f.hfe_type                IN('F')") \
				_T("     AND f.hfe_itemid               = l.hfe_itemid") \
				_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
				_T("     ) AS tl_maycnc,") \
				_T("     CASE") \
				_T("       WHEN l.hfe_itemid IS NULL") \
				_T("       THEN l.hfe_patpaid") \
				_T("       ELSE 0") \
				_T("     END AS tl_trichtamthu") \
				_T("   FROM hms_fee_refund r,") \
				_T("     hms_fee_refundline l") \
				_T("   WHERE r.hfe_docno   = l.hfe_docno") \
				_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
				_T("   AND l.hfe_invoiceno > 0") \
				_T("   AND r.hfe_status    ='P'") \
				_T("   UNION ALL") \
				_T("   SELECT hfe_cash_id,") \
				_T("     hfe_patientno,") \
				_T("     hfe_docno,") \
				_T("     hfe_deptid,") \
				_T("     hfe_refidx,") \
				_T("     hfe_invoiceno,") \
				_T("     0          AS trichtamgui,") \
				_T("     0          AS cackhoanphaithu,") \
				_T("     0          AS miengiam,") \
				_T("     0          AS tienthuoc,") \
				_T("     0          AS tienvattu,") \
				_T("     0          AS maycnc,") \
				_T("     0          AS chtravp,") \
				_T("     hfe_amount AS tl_vienphi,") \
				_T("     0          AS tl_tienthuoc,") \
				_T("     0          AS tl_tienvattu,") \
				_T("     0          AS tl_maycnc,") \
				_T("     0          AS tl_trichtamthu") \
				_T("   FROM hms_fee_refund") \
				_T("   WHERE hfe_type IN('G','S')") \
				_T("   AND (hfe_isreq <> 'Y'") \
				_T("   AND hfe_refidx <> 0)") \
				_T("   AND hfe_status  ='P'") \
				_T("   UNION ALL") \
				_T("   SELECT hfe_cash_id,") \
				_T("     hfe_patientno,") \
				_T("     hfe_docno,") \
				_T("     hfe_deptid,") \
				_T("     hfe_refidx,") \
				_T("     hfe_invoiceno,") \
				_T("     0          AS trichtamgui,") \
				_T("     0          AS cackhoanphaithu,") \
				_T("     0          AS miengiam,") \
				_T("     0          AS tienthuoc,") \
				_T("     0          AS tienvattu,") \
				_T("     0          AS maycnc,") \
				_T("     0          AS chtravp,") \
				_T("     hfe_amount AS tl_vienphi,") \
				_T("     0          AS tl_tienthuoc,") \
				_T("     0          AS tl_tienvattu,") \
				_T("     0          AS tl_maycnc,") \
				_T("     0          AS tl_trichtamthu") \
				_T("   FROM hms_fee_refund") \
				_T("   WHERE hfe_type             IN('V')") \
				_T("   AND hfe_status              ='P'") \
				_T("   ) tblInvoice ON(fac_cash_id = cash_id)") \
				_T(" WHERE 1                       =1") \
				_T(" %s") \
				_T(" GROUP BY cash_id,") \
				_T("   hfe_deptid,") \
				_T("   hfe_docno,") \
				_T("   fac_user_id,") \
				_T("   fac_invoiceno") \
				_T(" ORDER BY fac_user_id,") \
				_T("   fac_invoiceno") \
				_T("   )") \
				_T(" group by docno, pname") \
				_T(" Order by docno, pname") \
				_T(" )") \
				_T(" WHERE total>0"), szWhere);
	return szSQL;
}