#include "stdafx.h"
#include "FMServiceIncomeList2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "StringToken.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList2* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnClerkAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceIncomeList2* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMServiceIncomeList2 *)pWnd)->OnObjectAddNew();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2 *)pWnd)->OnStatusLoadData();
}
static void _OnStatusSelendokFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2 *)pWnd)->OnStatusSelendok();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServiceIncomeList2 *pVw = (CFMServiceIncomeList2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServiceIncomeList2 *pVw = (CFMServiceIncomeList2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeList2*)pWnd)->OnApprovalSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeList2*)pWnd)->OnSODSelect();
}
static long _OnReceiptListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2*)pWnd)->OnReceiptListLoadData();
} 
static void _OnReceiptListDblClickFnc(CWnd *pWnd){
	((CFMServiceIncomeList2*)pWnd)->OnReceiptListDblClick();
} 
static void _OnReceiptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceIncomeList2*)pWnd)->OnReceiptListSelectChange(nOldItem, nNewItem);
} 
static int _OnReceiptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList2*)pWnd)->OnReceiptListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd)
{
	((CFMServiceIncomeList2*)pWnd)->OnListCheckAll();
	return 0;
}
static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMServiceIncomeList2*)pWnd)->OnListCheckAllTYC();
	return 0;
}

static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMServiceIncomeList2*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListUncheckAllFnc(CWnd *pWnd){
	((CFMServiceIncomeList2*)pWnd)->OnListUncheckAll();
	return 0;
}

static int _OnListCheckAllCardTYCFnc(CWnd *pWnd){
	((CFMServiceIncomeList2*)pWnd)->OnListCheckAllCardTYC();
	return 0;
}

static int _OnListCheckAllCardPTTYCFnc(CWnd *pWnd){
	((CFMServiceIncomeList2*)pWnd)->OnListCheckAllCardPTTYC();
	return 0;
}

static int _OnListSearchItemFnc(CWnd *pWnd){
	((CFMServiceIncomeList2*)pWnd)->OnListSearchItem();
	return 0;
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMServiceIncomeList2*)pWnd)->OnABZoneSelect();
}
static void _OnATMCardSelectFnc(CWnd *pWnd)
{
	((CFMServiceIncomeList2*)pWnd)->OnATMCardSelect();
}
/*static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceIncomeList2*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMServiceIncomeList2*)pWnd)->OnDeptListDblClick();
}
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceIncomeList2*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceIncomeList2*)pWnd)->OnDeptListDeleteItem();
}*/
static void _OnAllZoneSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeList2*)pWnd)->OnAllZoneSelect();
}
static void _OnByMoneyTransferSelectFnc(CWnd *pWnd){
	 ((CFMServiceIncomeList2*)pWnd)->OnByMoneyTransferSelect();

}

CFMServiceIncomeList2::CFMServiceIncomeList2(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMServiceIncomeList2::~CFMServiceIncomeList2(){
}
void CFMServiceIncomeList2::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 487, 551);
	m_wndReceipt.Create(this, _T("Receipt"), 12, 184, 487, 544);
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
	m_wndObject.Create(this,345, 89, 487, 114); 
	m_wndStatusLabel.Create(this, _T("Status"), 12, 120, 92, 145);
	m_wndStatus.Create(this,102, 120, 247, 145); 
	m_wndPrint.Create(this, _T("&Print"), 320, 555, 400, 580);
	m_wndExport.Create(this, _T("&Export XLS"), 406, 555, 486, 580);
	m_wndSOD.Create(this, _T("Service On Demand"), 12, 152, 92, 177);
	m_wndReceiptList.Create(this,18, 209, 487, 545); 
	m_wndABZone.Create(this, _T("AB Zone"), 102, 152, 247, 177);
	m_wndATMCard.Create(this, _T("ATM Card"), 254, 120, 334, 145);
	m_wndAllZone.Create(this, _T("AllZone"), 254, 152, 396, 177);
	m_wndByMoneyTransfer.Create(this, _T("Chuyển khoản"), 346, 120, 487, 145);

}
void CFMServiceIncomeList2::OnInitializeComponents(){
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


	//m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	//m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	//m_wndDeptList.SetCheckBox(TRUE);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObject.Format(2, 1, 12);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndReceiptList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndReceiptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 130);
	m_wndReceiptList.InsertColumn(2, _T("Locked"), CFMT_TEXT, 30);
	m_wndReceiptList.InsertColumn(3, _T("Clerk"), CFMT_TEXT, 150);
	m_wndReceiptList.InsertColumn(4, _T("Posted Date"), CFMT_DATE, 100);
	m_wndReceiptList.InsertColumn(5, _T("cashbook_id"), CFMT_TEXT, 100);
	
	m_wndReceiptList.SetCheckBox(true);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}

void CFMServiceIncomeList2::OnSetWindowEvents(){
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
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndATMCard.SetEvent(WE_CLICK, _OnATMCardSelectFnc);
	m_wndAllZone.SetEvent(WE_CLICK, _OnAllZoneSelectFnc);
	m_wndByMoneyTransfer.SetEvent(WE_CLICK, _OnByMoneyTransferSelectFnc);
	m_wndReceiptList.SetEvent(WE_SELCHANGE, _OnReceiptListSelectChangeFnc);
	m_wndReceiptList.SetEvent(WE_LOADDATA, _OnReceiptListLoadDataFnc);
	m_wndReceiptList.SetEvent(WE_DBLCLICK, _OnReceiptListDblClickFnc);
	m_wndReceiptList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndReceiptList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	m_wndReceiptList.AddEvent(3, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndReceiptList.AddEvent(4, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	
	m_wndReceiptList.AddEvent(5, _T("Check All thẻ TYC"), _OnListCheckAllCardTYCFnc);
	m_wndReceiptList.AddEvent(6, _T("Check All thẻ PTTYC"), _OnListCheckAllCardPTTYCFnc);

	m_wndReceiptList.AddEvent(7, _T("Search"), _OnListSearchItemFnc);
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
	OnReceiptListLoadData();

}
void CFMServiceIncomeList2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	//DDX_Check(pDX, m_wndApproval.GetDlgCtrlID(), m_bApproval);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndATMCard.GetDlgCtrlID(), m_bATMCard);
	DDX_Check(pDX, m_wndAllZone.GetDlgCtrlID(), m_bAllZone);
	DDX_Check(pDX, m_wndByMoneyTransfer.GetDlgCtrlID(), m_bByMoneyTransfer);

}
void CFMServiceIncomeList2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bApproval = FALSE;
	m_bSOD = FALSE;
	m_bABZone=FALSE;
	m_bATMCard=FALSE;
	m_bAllZone=FALSE;
	m_bByMoneyTransfer=FALSE;

}

int CFMServiceIncomeList2::SetMode(int nMode){
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

/*void CFMServiceIncomeList2::OnYearChange(){
	
} */
/*void CFMServiceIncomeList2::OnYearSetfocus(){
	
} */
/*void CFMServiceIncomeList2::OnYearKillfocus(){
	
} */
void CFMServiceIncomeList2::OnByMoneyTransferSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	OnReceiptListLoadData();
	
}
int CFMServiceIncomeList2::OnYearCheckValue(){
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
 
void CFMServiceIncomeList2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceIncomeList2::OnReportPeriodSelendok(){
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

/*void CFMServiceIncomeList2::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServiceIncomeList2::OnReportPeriodKillfocus(){
	
}*/
long CFMServiceIncomeList2::OnReportPeriodLoadData(){
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

/*void CFMServiceIncomeList2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServiceIncomeList2::OnFromDateChange(){
	
} */
/*void CFMServiceIncomeList2::OnFromDateSetfocus(){
	
} */
/*void CFMServiceIncomeList2::OnFromDateKillfocus(){
	
} */
int CFMServiceIncomeList2::OnFromDateCheckValue(){
	OnReceiptListLoadData();
	return 0;
}
 
/*void CFMServiceIncomeList2::OnToDateChange(){
	
} */
/*void CFMServiceIncomeList2::OnToDateSetfocus(){
	
} */
/*void CFMServiceIncomeList2::OnToDateKillfocus(){
	
} */
int CFMServiceIncomeList2::OnToDateCheckValue(){
	OnReceiptListLoadData();
	return 0;
}
 
void CFMServiceIncomeList2::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceIncomeList2::OnClerkSelendok(){
	OnReceiptListLoadData(); 
}
/*void CFMServiceIncomeList2::OnClerkSetfocus(){
	
}*/
/*void CFMServiceIncomeList2::OnClerkKillfocus(){
	
}*/
long CFMServiceIncomeList2::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServiceIncomeList2::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceIncomeList2::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceIncomeList2::OnObjectSelendok(){
	 
}
/*void CFMServiceIncomeList2::OnObjectSetfocus(){
	
}*/
/*void CFMServiceIncomeList2::OnObjectKillfocus(){
	
}*/
void CFMServiceIncomeList2::OnAllZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnReceiptListLoadData();	
}
long CFMServiceIncomeList2::OnObjectLoadData(){
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

long CFMServiceIncomeList2::OnStatusLoadData(){
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);
	return 3;
}

void CFMServiceIncomeList2::OnStatusSelendok(){
	OnReceiptListLoadData();
}

/*void CFMServiceIncomeList2::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceIncomeList2::OnPrintSelect(){
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
	arrField.Add(_T("thu_goidv"));
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
 
void CFMServiceIncomeList2::OnExportSelect()
{
	CGuiMenu menu(this);
	CString tmpStr;
	
	menu.CreatePopupMenu();
	TranslateString(_T("Xuất ra Excel bảng kê thu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Xuất ra Excel để so sánh doanh thu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:			
			OnExportReport();			
			break;
		case 2:			
			OnExportForChecking();			
			break;		
	}	
}

void CFMServiceIncomeList2::OnExportForChecking()
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
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHU.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_check();
	rs.ExecSQL(szSQL);	
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("doc_no"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("total"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);			
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);		
		xls.SetCellText(3, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHU2.xls"));
} 

void CFMServiceIncomeList2::OnExportReport()
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
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHUDV_CHITIET.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

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

		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("doc_no"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("dept_name"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("invoice_deposit"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("pat_paid"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("invoice_amount"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("fa"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguoncovid"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("invoice_drug"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("invoice_material"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("cnc_amount"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("thu_goidv"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("deposit"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tran_bao_viet"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("receipt_amount"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}	

	if (nGroupTotal[15] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 4; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHUDV_CHITIET2.xls"));
}	



void CFMServiceIncomeList2::OnApprovalSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

void CFMServiceIncomeList2::OnSODSelect()
{
	OnReceiptListLoadData();
}
void CFMServiceIncomeList2::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnReceiptListLoadData();
}

void CFMServiceIncomeList2::OnATMCardSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnReceiptListLoadData();
}

void CFMServiceIncomeList2::OnReceiptListDblClick(){
	
} 
void CFMServiceIncomeList2::OnReceiptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMServiceIncomeList2::OnReceiptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 

void CFMServiceIncomeList2::OnListCheckAll()
{
	int i = 0;
	for (i = 0; i < m_wndReceiptList.GetItemCount(); i++)
		m_wndReceiptList.SetCheck(i, true);
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
}

void CFMServiceIncomeList2::OnListUncheckAll(){
	for (int i = 0; i < m_wndReceiptList.GetItemCount(); i++)
		m_wndReceiptList.SetCheck(i, false);
}
int CFMServiceIncomeList2::OnListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndReceiptList.GetItemCount(); i++)	
	{
		szItemText=m_wndReceiptList.GetItemText(i,1);
	if ((_T("DVYC"))==szItemText.Right(4))
	{
		m_wndReceiptList.SetCheck(i, true);
	}
	else m_wndReceiptList.SetCheck(i, false);
	}
	return 0;
}
int CFMServiceIncomeList2::OnListCheckAllPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndReceiptList.GetItemCount(); i++)	
	{
		szItemText=m_wndReceiptList.GetItemText(i,5);
	if ((_T("DV-PTTYC"))==szItemText)
	{
		m_wndReceiptList.SetCheck(i, true);
	}
	else m_wndReceiptList.SetCheck(i, false);
	}
	return 0;
}

int CFMServiceIncomeList2::OnListCheckAllCardTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndReceiptList.GetItemCount(); i++)	
	{
		szItemText=m_wndReceiptList.GetItemText(i,1);
	if ((_T("THE-DV-YC"))==szItemText.Right(9))
	{
		m_wndReceiptList.SetCheck(i, true);
	}
	else m_wndReceiptList.SetCheck(i, false);
	}
	return 0;
}

int CFMServiceIncomeList2::OnListCheckAllCardPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndReceiptList.GetItemCount(); i++)	
	{
		szItemText=m_wndReceiptList.GetItemText(i,1);
	if ((_T("THE-DV-PTTYC"))==szItemText.Right(12))
	{
		m_wndReceiptList.SetCheck(i, true);
	}
	else m_wndReceiptList.SetCheck(i, false);
	}
	return 0;
}
void CFMServiceIncomeList2::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndReceiptList);
	newPopup->ShowPopup(&m_wndReceiptList);
}
long CFMServiceIncomeList2::OnReceiptListLoadData(){
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
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC', 'THE-DV-YC', 'THE-DV-PTTYC')"));
	else if (m_bABZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB')"));
	else if (m_bATMCard)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('THE-DV')"));

	else if (m_bByMoneyTransfer)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('CK-DV')"));

	else if (m_bAllZone)
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV')"));
		//Test xong nho bo comment di//

		  szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV','THE-DV','CK-DV', 'DVCLCA16', 'DVCLC')"));
	else
		szWhere.AppendFormat(_T(" AND fac_cashbook_id = 'DV'"));
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_locked stt,") \
				 _T(" get_username(fac_user_id) clerk,  fac_posteddate posted_date, FAC_CASHBOOK_ID as cashbook_id ") \
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
			rs.GetValue(_T("cashbook_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndReceiptList.EndLoad();
	return nCount;
}

/*void CFMServiceIncomeList2::OnDeptListDblClick(){
	
}
 
void CFMServiceIncomeList2::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMServiceIncomeList2::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMServiceIncomeList2::OnDeptListLoadData(){
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


CString CFMServiceIncomeList2::GetQueryString()
{
	//Edited
	//1st
	//Tru MG khoi tong phai thu
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szDepts, szInnerWhere, szObjects, szReceiptStr, m_szCashIDS;

	//for (int i = 0; i < m_wndReceiptList.GetItemCount();i++)
	//{
	//	if (m_wndReceiptList.GetCheck(i))
	//	{
	//		if (!szReceiptStr.IsEmpty())
	//			szReceiptStr += _T(", ");
	//		szReceiptStr += m_wndReceiptList.GetItemText(i, 0);
	//	}
	//}
	//if (!szReceiptStr.IsEmpty())
	//	szWhere.Format(_T(" AND cash_id IN (%s)"), szReceiptStr);
	//else
	//{
	//	ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn phi\x1EBFu thu \x63hi \x111\x1EC3 in"));
	//	return _T("");

	//	/*for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	//	{
	//		if (m_wndDeptList.GetCheck(i))
	//		{
	//			if (!szDepts.IsEmpty())
	//				szDepts += _T(",");
	//			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
	//		}
	//	}*/
	//	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	//	{
	//		if (m_wndObject.GetCheck(i))
	//		{
	//			m_wndObject.SetCurSel(i);
	//			if (!szObjects.IsEmpty())
	//				szObjects += _T(", ");
	//			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
	//		}
	//	}
	//	szWhere.Format(_T(" AND cash_id > 0 AND invoice_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	//	if (!szDepts.IsEmpty())
	//		szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDepts);
	//	if (!m_szClerkKey.IsEmpty())
	//		szWhere.AppendFormat(_T(" AND clerk = '%s'"), m_szClerkKey);

	//	/*if (!szObjects.IsEmpty())
	//		szWhere.AppendFormat(_T(" AND object_id IN (%s)"), szObjects);*/
	//	if (!m_szObjectKey.IsEmpty())
	//		szWhere.AppendFormat(_T(" AND object_id = %s"), m_szObjectKey);
	//}
	szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndReceiptList.GetItemCount(); i++)
	{
		if (m_wndReceiptList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndReceiptList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
	else
	{
		CStringToken tok_id(szReceiptStr);
		int nCount = 0;
		long nTemp = 0;
		CString szIds, tmpStr;
		bool bBreak = false;
		szIds.Empty();
		tmpStr.Empty();
		for (int i = 0; i < tok_id.GetSize(); i++)
		{
			if (nCount > 999)
			{
				bBreak = true;
			}
			if (bBreak)
			{
				if (!szIds.IsEmpty())
				{
					szIds += _T(" OR ");
				}
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
				_tprintf(_T("\nszIds: %s\n"), szIds);
				tmpStr.Empty();
				nCount = 0;
				bBreak = false;
			}
			if (!tmpStr.IsEmpty())
			{
				tmpStr += _T(",");
			}
			tok_id.GetAt(i, nTemp);
			tmpStr.AppendFormat(_T("%ld"), nTemp);
			nCount++;
		}
		if (!szIds.IsEmpty())
		{
			szIds += _T(" OR ");
		}
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

	szSQL.Format(_T(" SELECT cash_id, trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                   AS patient_name,") \
_T("   hfe_docno                                         AS doc_no,") \
_T("   hfe_deptid                                        AS dept_name,") \
_T("   SUM(trichtamgui)                                  AS invoice_deposit,") \
_T("   ROUND(SUM(tran_bao_viet))                         AS tran_bao_viet,") \
_T("   SUM(thuthem)                                      AS pat_paid,") \
_T("   SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc-hfe_packageamount-nguoncovid) AS invoice_amount,") \
//_T("   CASE WHEN SUM(cackhoanphaithu)-SUM(miengiam)=0 THEN 0 ELSE SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc) END AS invoice_amount,") \//
_T("   SUM(miengiam)                                     AS fa,") \
_T("   SUM(tienthuoc)                                    AS invoice_drug,") \
//_T("   CASE WHEN SUM(cackhoanphaithu)-SUM(miengiam)=0 THEN 0 ELSE SUM(tienthuoc) END AS invoice_drug,") \//
_T("   SUM(tienvattu)                                    AS invoice_material,") \
//_T("   CASE WHEN SUM(cackhoanphaithu)-SUM(miengiam)=0 THEN 0 ELSE SUM(tienvattu) END   AS invoice_material,") \//
_T("   SUM(maycnc)                                       AS cnc_amount,") \
_T("   SUM(hfe_packageamount)                            AS thu_goidv,") \
_T("   ROUND(SUM(nguoncovid))                            AS nguoncovid,") \
//_T("   CASE WHEN SUM(cackhoanphaithu)-SUM(miengiam)=0 THEN 0 ELSE SUM(maycnc) END AS cnc_amount,") \//
_T("   SUM(tamguibandau)                                 AS deposit,") \
_T("   SUM(tamguibandau+thuthem)                         AS receipt_amount") \
_T(" FROM") \
_T("   (SELECT hfe_cash_id AS cash_id,") \
_T("     hfe_patientno,") \
_T("     hfe_docno,") \
_T("     hfe_deptid,") \
_T("     hfe_refidx,") \
_T("     hfe_invoiceno,") \
_T("     hfe_deposit AS trichtamgui,") \

_T("     i.HFE_EXTINS_PAID AS tran_bao_viet,") \

_T("     CASE") \
_T("       WHEN hfe_payment > 0") \
_T("       THEN hfe_payment") \
_T("       ELSE 0") \
_T("     END            AS thuthem,") \
_T("     hfe_patpaid    AS cackhoanphaithu,") \
_T("     hfe_freeamount AS miengiam,") \
_T("     0              AS tamguibandau,") \
_T("     CASE") \
//_T("       WHEN hfe_class <> 'I'") \//
_T("       WHEN (hfe_class <> 'I' OR hfe_deptid='TTDTHM')") \
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
_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno AND mp_org_id ='PM') ") \
_T("         )") \
_T("       ELSE 0") \
_T("     END AS tienthuoc,") \
_T("     CASE") \
//_T("       WHEN hfe_class <> 'I'") \//
_T("       WHEN (hfe_class <> 'I' OR hfe_deptid='TTDTHM')") \
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
_T("         AND mp_org_id        in ('MA', 'PĐD')") \
_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno AND mp_org_id ='MA') ") \
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
_T("     AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno AND NVL(hfl_hitechmachine,'N') ='Y')") \
_T("     ) AS maycnc,") \
_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
_T("     FROM hms_fee f  ") \
_T("     WHERE f.hfe_docno              = i.hfe_docno") \
_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
_T("     AND f.hfe_status              IN('P','R')") \
_T("     AND f.hfe_type                IN('X')") \
_T("     AND f.hfe_category            <> 'Y'    ") \
_T("     AND f.Hfe_itemid NOT          IN") \
_T("       (SELECT Hfe_itemid") \
_T("       FROM Hms_Fee_Discountline") \
_T("       WHERE hfe_docno                =i.hfe_docno") \
_T("       AND Hfe_Refidx                 =i.hfe_invoiceno") \
_T("        AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
_T("       ) ) AS hfe_packageamount,") \
_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
_T("     FROM hms_fee f") \
_T("     WHERE f.hfe_docno   = i.hfe_docno") \
_T("     AND f.hfe_invoiceno = i.hfe_invoiceno") \
_T("     AND f.hfe_category  = 'COV'") \
_T("     ) AS nguoncovid") \
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
_T("     0			AS tran_bao_viet,") \
_T("     0          AS cackhoanphaithu,") \
_T("     0          AS miengiam,") \
_T("     0          AS thuthem,") \
_T("     hfe_amount AS tamguibandau,") \
_T("     0          AS tienthuoc,") \
_T("     0          AS tienvattu,") \
_T("     0          AS cnc,") \
_T("     0          AS hfe_packageamount,") \
_T("     0          AS nguoncovid") \
_T("   FROM hms_fee_deposit") \
_T("   WHERE hfe_status IN('P','R')") \
_T("   )") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hfe_patientno =hp_patientno)") \
_T(" WHERE 1          =1") \
_T(" %s ") \
_T(" GROUP BY cash_id,") \
_T("   hfe_patientno,") \
_T("   hfe_docno,") \
_T("   hfe_deptid,") \
_T("   hp_surname,") \
_T("   hp_midname,") \
_T("   hp_firstname") \
_T(" ORDER BY cash_id,") \
_T("   patient_name"), szWhere);	
	
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
CString CFMServiceIncomeList2::GetQueryString_check()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;

	CString szDepts, szInnerWhere, szObjects, szReceiptStr, m_szCashIDS;

	/*for (int i = 0; i < m_wndReceiptList.GetItemCount();i++)
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
	}*/
	szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndReceiptList.GetItemCount(); i++)
	{
		if (m_wndReceiptList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndReceiptList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
	else
	{
		CStringToken tok_id(szReceiptStr);
		int nCount = 0;
		long nTemp = 0;
		CString szIds, tmpStr;
		bool bBreak = false;
		szIds.Empty();
		tmpStr.Empty();
		for (int i = 0; i < tok_id.GetSize(); i++)
		{
			if (nCount > 999)
			{
				bBreak = true;
			}
			if (bBreak)
			{
				if (!szIds.IsEmpty())
				{
					szIds += _T(" OR ");
				}
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
				_tprintf(_T("\nszIds: %s\n"), szIds);
				tmpStr.Empty();
				nCount = 0;
				bBreak = false;
			}
			if (!tmpStr.IsEmpty())
			{
				tmpStr += _T(",");
			}
			tok_id.GetAt(i, nTemp);
			tmpStr.AppendFormat(_T("%ld"), nTemp);
			nCount++;
		}
		if (!szIds.IsEmpty())
		{
			szIds += _T(" OR ");
		}
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

szSQL.Format(_T(" SELECT") \
		_T(" doc_no,") \
		_T(" patient_name,") \
		_T(" total") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" doc_no,") \
		_T(" patient_name,") \
		_T(" SUM(invoice_amount+invoice_drug+invoice_material+cnc_amount) as total") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT cash_id,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                                          AS patient_name,") \
		_T("   hfe_docno                                                AS doc_no,") \
		_T("   hfe_deptid                                               AS dept_name,") \
		_T("   SUM(trichtamgui)                                         AS invoice_deposit,") \
		_T("   SUM(thuthem)                                             AS pat_paid,") \
		_T("   SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc) AS invoice_amount,") \
		_T("   SUM(miengiam)                                            AS fa,") \
		_T("   SUM(tienthuoc)                                           AS invoice_drug,") \
		_T("   SUM(tienvattu)                                           AS invoice_material,") \
		_T("   SUM(maycnc)                                              AS cnc_amount,") \
		_T("   SUM(tamguibandau)                                        AS deposit,") \
		_T("   SUM(tamguibandau+thuthem)                                AS receipt_amount") \
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
		_T("         LEFT JOIN m_product_item") \
		_T("         ON(mpi_product_item_id=CAST(hfe_itemid AS INTEGER) )") \
		_T("         LEFT JOIN m_product") \
		_T("         ON (mp_product_id   = mpi_product_id)") \
		_T("         WHERE f.hfe_docno   = i.hfe_docno") \
		_T("         AND f.hfe_invoiceno = i.hfe_invoiceno") \
		_T("         AND f.hfe_status   IN('P','R')") \
		_T("         AND f.hfe_type     IN('D','M','R')") \
		_T("         AND f.hfe_category <> 'Y'") \
		_T("         AND mp_org_id       ='PM'") \
		_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno AND mp_org_id ='PM') ") \
		_T("         )") \
		_T("       ELSE 0") \
		_T("     END AS tienthuoc,") \
		_T("     CASE") \
		_T("       WHEN hfe_class <> 'I'") \
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
		_T("         AND f.hfe_type     IN('D','M','R')") \
		_T("         AND f.hfe_category <> 'Y'") \
		_T("         AND mp_org_id       in ('MA', 'PĐD')") \
		_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno AND mp_org_id ='MA') ") \
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
		_T("     AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno AND NVL(hfl_hitechmachine,'N') ='Y')") \
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
		_T(" WHERE 1          =1") \
		_T(" %s") \
		_T(" GROUP BY cash_id,") \
		_T("   hfe_patientno,") \
		_T("   hfe_docno,") \
		_T("   hfe_deptid,") \
		_T("   hp_surname,") \
		_T("   hp_midname,") \
		_T("   hp_firstname") \
		_T(" ORDER BY cash_id,") \
		_T("   patient_name") \
		_T(" )") \
		_T(" group by doc_no, patient_name") \
		_T(" Order by doc_no, patient_name") \
		_T(" )") \
		_T(" WHERE total>0") \
		_T(" Order by doc_no"), szWhere);
	
	return szSQL;
}