#include "stdafx.h"
#include "FMTotalIncomeinsdiff.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnYearKillfocus();
} */
static void _OnCreateDataSelectFnc(CWnd *pWnd)
{
	CFMTotalIncomeinsdiff *pVw = (CFMTotalIncomeinsdiff *)pWnd;
	pVw->OnCreateDataSelect();
} 

static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnObjectTypeSelendok();
}

static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalIncomeinsdiff* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnReportPeriodSelendok();
}
static int _OnListCheckAllInvoiceFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListCheckAllInvoice();
	return 0;
}
static int _OnListCheckAllRefundFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListCheckAllRefund();
	return 0;
}

/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalIncomeinsdiff* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalIncomeinsdiff* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalIncomeinsdiff* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff *)pWnd)->OnOrderByAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMTotalIncomeinsdiff*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncomeinsdiff*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMTotalIncomeinsdiff*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMTotalIncomeinsdiff*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMTotalIncomeinsdiff*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMTotalIncomeinsdiff *pVw = (CFMTotalIncomeinsdiff *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMTotalIncomeinsdiff *pVw = (CFMTotalIncomeinsdiff *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMTotalIncomeinsdiff *pVw = (CFMTotalIncomeinsdiff *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMTotalIncomeinsdiff *pVw = (CFMTotalIncomeinsdiff *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnAllSelect();
}
static int _OnAddFMTotalIncomeinsdiffFnc(CWnd *pWnd){
	 return ((CFMTotalIncomeinsdiff*)pWnd)->OnAddFMTotalIncomeinsdiff();
} 
static int _OnEditFMTotalIncomeinsdiffFnc(CWnd *pWnd){
	 return ((CFMTotalIncomeinsdiff*)pWnd)->OnEditFMTotalIncomeinsdiff();
} 
static int _OnDeleteFMTotalIncomeinsdiffFnc(CWnd *pWnd){
	 return ((CFMTotalIncomeinsdiff*)pWnd)->OnDeleteFMTotalIncomeinsdiff();
} 
static int _OnSaveFMTotalIncomeinsdiffFnc(CWnd *pWnd){
	 return ((CFMTotalIncomeinsdiff*)pWnd)->OnSaveFMTotalIncomeinsdiff();
} 
static int _OnCancelFMTotalIncomeinsdiffFnc(CWnd *pWnd){
	 return ((CFMTotalIncomeinsdiff*)pWnd)->OnCancelFMTotalIncomeinsdiff();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMTotalIncomeinsdiff*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnSODSelect();
}

static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMTotalIncomeinsdiff*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}
static void _OnSoldierWCardSelectFnc(CWnd *pWnd)
{
	 ((CFMTotalIncomeinsdiff*)pWnd)->OnSoldierWCardSelect();
}

static long _OnObjectTypeLoadDataFnc(CWnd *pWnd)
{
	return ((CFMTotalIncomeinsdiff *)pWnd)->OnObjectTypeLoadData();
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMTotalIncomeinsdiff*)pWnd)->OnABZoneSelect();
}
static void _OnTCKTSelectFnc(CWnd *pWnd){
	 ((CFMTotalIncomeinsdiff*)pWnd)->OnTCKTSelect();
}

static void _OnServIncomeSelectFnc(CWnd *pWnd)
{
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnServIncomeSelect();
}
static void _OnInsIncomeSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnInsIncomeSelect();
}
static void _OnTYCIncomeSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnTYCIncomeSelect();
}
static void _OnOtherIncomeSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncomeinsdiff*)pWnd)->OnOtherIncomeSelect();
}

CFMTotalIncomeinsdiff::CFMTotalIncomeinsdiff(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}

CFMTotalIncomeinsdiff::~CFMTotalIncomeinsdiff()
{
}
void CFMTotalIncomeinsdiff::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 480, 520);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 225, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 30, 331, 55);
	m_wndReportPeriod.Create(this,346, 30, 476, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 225, 85); 
	m_wndToDate.Create(this,346, 60, 476, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 60, 331, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 225, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 225, 145); 
	m_wndDeptLabel.Create(this, _T("Dept"), 240, 120, 331, 145);
	m_wndDept.Create(this,346, 120, 476, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 240, 90, 331, 115);
	m_wndStatus.Create(this,346, 90, 476, 115); 
	m_wndList.Create(this,10, 181, 476, 425); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 37, 42, 37, 42);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 526, 85, 551);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 526, 170, 551);
	m_wndPrint.Create(this, _T("&Print"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("Export XLS"), 315, 526, 395, 551);
	m_wndDeposit.Create(this, _T("Deposit"), 37, 42, 37, 42);	
	m_wndABZone.Create(this, _T("AB Zone"), 240, 150, 331, 175);
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 10, 150, 90, 175);
	m_wndObjectType.Create(this,95, 150, 225, 175); 
	m_wndCreateData.Create(this, _T("Create Data"), 400, 526, 480, 551);
	m_wndTCKT.Create(this, _T("TCKT"), 346, 150, 476, 175);
	m_wndSOD.Create(this, _T("SOD"), 0, 0, 0, 0);
	m_wndInpatient.Create(this, _T("Inpatient"), 0, 0, 0, 0);
	m_wndOutpatient.Create(this, _T("Outpatient"), 0, 0, 0, 0);
	m_wndSoldierWCard.Create(this, _T("Soldier w Card"), 0, 0, 0, 0);
	m_wndServIncome.Create(this, _T("Doanh thu dịch vụ"), 10, 429, 205, 454);
	m_wndInsIncome.Create(this, _T("Doanh thu bảo hiểm"), 10, 459, 205, 484);
	m_wndTYCIncome.Create(this, _T("Doanh thu yêu cầu"), 278, 429, 474, 454);
	m_wndOtherIncome.Create(this, _T("Đối tượng khác"), 278, 459, 474, 484);
	m_wndAll.Create(this, _T("Doanh thu toàn viện"), 10, 490, 205, 515);
	m_wndCreateData.EnableWindow(FALSE);
	m_wndObjectType.EnableWindow(FALSE);

	m_wndServIncome.EnableWindow(FALSE);
	m_wndTYCIncome.EnableWindow(FALSE);
	m_wndOtherIncome.EnableWindow(FALSE);
	m_wndAll.EnableWindow(FALSE);

}
void CFMTotalIncomeinsdiff::OnInitializeComponents(){
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
	m_wndClerk.LimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);
	m_wndOrderBy.SetCheckValue(true);
	m_wndOrderBy.LimitText(1024);
	m_wndObjectType.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	
	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 130);
	m_wndList.InsertColumn(2, _T("Posted"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 150);
	m_wndList.SetCheckBox(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMTotalIncomeinsdiff::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndOrderBy.SetEvent(WE_SELENDOK, _OnOrderBySelendokFnc);
	//m_wndOrderBy.SetEvent(WE_SETFOCUS, _OnOrderBySetfocusFnc);
	//m_wndOrderBy.SetEvent(WE_KILLFOCUS, _OnOrderByKillfocusFnc);
	m_wndOrderBy.SetEvent(WE_SELCHANGE, _OnOrderBySelectChangeFnc);
	m_wndOrderBy.SetEvent(WE_LOADDATA, _OnOrderByLoadDataFnc);
	//m_wndOrderBy.SetEvent(WE_ADDNEW, _OnOrderByAddNewFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	/*m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(3, _T("Check All Fee Invoice"), _OnListCheckAllInvoiceFnc);
	m_wndList.AddEvent(4, _T("Check All Fee Refund"), _OnListCheckAllRefundFnc);

	m_wndList.AddEvent(5, _T("Chọn phiếu thu/chi BH"), _OnListCheckAllInsInvoiceFnc);
	m_wndList.AddEvent(6, _T("Bỏ Chọn phiếu thu/chi BH"), _OnListUnCheckAllInsInvoiceFnc);	
	m_wndList.AddEvent(7, _T("Chọn phiếu thu/chi Quân"), _OnListCheckAllSolderFnc);
	m_wndList.AddEvent(8, _T("Bỏ Chọn phiếu thu/chi Quân"), _OnListUnCheckAllSolderFnc);
	m_wndList.AddEvent(9, _T("Chọn phiếu thu/chi BH Quân"), _OnListCheckAllInsSolderFnc);
	m_wndList.AddEvent(10, _T("Bỏ Chọn phiếu thu/chi BH Quân"), _OnListUnCheckAllInsSolderFnc);*/

	m_wndList.AddEvent(11, _T("Search"), _OnListSearchItemFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);

	m_wndSoldierWCard.SetEvent(WE_CLICK, _OnSoldierWCardSelectFnc);
	m_wndObjectType.SetEvent(WE_LOADDATA, _OnObjectTypeLoadDataFnc);
	m_wndObjectType.SetEvent(WE_SELENDOK, _OnObjectTypeSelendokFnc);
	m_wndCreateData.SetEvent(WE_CLICK, _OnCreateDataSelectFnc);
	m_wndTCKT.SetEvent(WE_CLICK, _OnTCKTSelectFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMTotalIncomeinsdiffFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMTotalIncomeinsdiffFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMTotalIncomeinsdiffFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMTotalIncomeinsdiffFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMTotalIncomeinsdiffFnc, 0, 'T', VK_CONTROL);
	*/
	m_wndServIncome.SetEvent(WE_CLICK, _OnServIncomeSelectFnc);
	m_wndInsIncome.SetEvent(WE_CLICK, _OnInsIncomeSelectFnc);
	m_wndTYCIncome.SetEvent(WE_CLICK, _OnTYCIncomeSelectFnc);
	m_wndOtherIncome.SetEvent(WE_CLICK, _OnOtherIncomeSelectFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	

}
void CFMTotalIncomeinsdiff::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_Check(pDX, m_wndSoldierWCard.GetDlgCtrlID(), m_bSoldierWCard);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndTCKT.GetDlgCtrlID(), m_bTCKT);
	DDX_Radio(pDX, m_wndServIncome.GetDlgCtrlID(), m_nServIncome);
	DDX_Radio(pDX, m_wndInsIncome.GetDlgCtrlID(), m_nInsIncome);
	DDX_Radio(pDX, m_wndTYCIncome.GetDlgCtrlID(), m_nTYCIncome);
	DDX_Radio(pDX, m_wndOtherIncome.GetDlgCtrlID(), m_nOtherIncome);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);

}
void CFMTotalIncomeinsdiff::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMTotalIncomeinsdiff::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMTotalIncomeinsdiff::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("04");
	m_szObjectTypeKey = _T("BH");
	//m_nPatientType = 3;
	m_bSOD = FALSE;
	//m_szObjectTypeKey.Empty();
	m_bSoldierWCard=FALSE;
	m_bABZone=FALSE;
	m_bTCKT=FALSE;
	m_nServIncome=1;
	m_nInsIncome=0;
	m_nTYCIncome=1;
	m_nOtherIncome=1;
	m_nAll=1;
}

int CFMTotalIncomeinsdiff::SetMode(int nMode){
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

/*void CFMTotalIncomeinsdiff::OnYearChange(){
	
} */
/*void CFMTotalIncomeinsdiff::OnYearSetfocus(){
	
} */
/*void CFMTotalIncomeinsdiff::OnYearKillfocus(){
	
} */
int CFMTotalIncomeinsdiff::OnYearCheckValue(){
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
	return 0;
}
 
void CFMTotalIncomeinsdiff::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

void CFMTotalIncomeinsdiff::OnTCKTSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
void CFMTotalIncomeinsdiff::OnCreateDataSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL,szSQL1, szSQL2, szWhere, szWhere4, szObjectID, szReceiptStr;	

	szWhere4.Format(_T(" and FAC_LOCKED='Y' "));

	if(m_szStatusKey == _T("01"))
	{
		szWhere4.AppendFormat(_T(" AND fac_invoicedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}
	else if(m_szStatusKey == _T("02"))
	{
		szWhere4.AppendFormat(_T(" and FAC_APPROVEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere4.AppendFormat(_T(" and FAC_APPROVED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	} 
	else if(m_szStatusKey == _T("03") || m_szStatusKey.IsEmpty())
	{
		szWhere4.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere4.AppendFormat(_T(" and FAC_POSTED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}	
	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC')"));
	else if (m_szObjectTypeKey == _T("BH"))		
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG')"));

	else if (m_szObjectTypeKey == _T("BH-NT+BH-NG"))		
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));

	else if (m_szObjectTypeKey == _T("BH-NT"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT')"));

	else if (m_szObjectTypeKey == _T("BH-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NG')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NT+BHQUAN-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT','BHQUAN-NG')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NT"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NG')"));

	else if (m_bSoldierWCard)
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));
	else 
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s ORDER BY fac_cash_id"), szWhere4);
	rs.ExecSQL(szSQL);	
	OnDeleteDataBeforeInsert();

	szSQL2.Format(_T("Insert into tmp_fa_cash_D10 (SELECT fac_cash_id as idx, '%s' as userid FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s)"), pMF->m_szUser, szWhere4);	
	int ret = pMF->ExecSQL(szSQL2);
	_msg(_T("Đã thực hiện insert %ld bản tin"), ret);	
} 

 
void CFMTotalIncomeinsdiff::OnReportPeriodSelendok(){
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
	OnListLoadData();

}

/*void CFMTotalIncomeinsdiff::OnReportPeriodSetfocus(){
	
}*/
/*void CFMTotalIncomeinsdiff::OnReportPeriodKillfocus(){
	
}*/
long CFMTotalIncomeinsdiff::OnReportPeriodLoadData(){
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

/*void CFMTotalIncomeinsdiff::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMTotalIncomeinsdiff::OnFromDateChange(){
	
} */
/*void CFMTotalIncomeinsdiff::OnFromDateSetfocus(){
	
} */
/*void CFMTotalIncomeinsdiff::OnFromDateKillfocus(){
	
} */
int CFMTotalIncomeinsdiff::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMTotalIncomeinsdiff::OnToDateChange(){
	
} */
/*void CFMTotalIncomeinsdiff::OnToDateSetfocus(){
	
} */
/*void CFMTotalIncomeinsdiff::OnToDateKillfocus(){
	
} */
int CFMTotalIncomeinsdiff::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMTotalIncomeinsdiff::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

long CFMTotalIncomeinsdiff::OnObjectTypeLoadData()
{
	//m_wndObjectType.AddItems(_T("01"), _T("\x44\x1ECB\x63h v\x1EE5"), NULL);
	//m_wndObjectType.AddItems(_T("02"), _T("Bảo hiểm"), NULL);
	
	m_wndObjectType.AddItems(_T("BH"), _T("Tất cả đối tượng Bảo hiểm"), NULL);
	//m_wndObjectType.AddItems(_T("BH-NT+BH-NG"), _T("Bảo hiểm khác nội trú, ngoại trú"), NULL);
	//m_wndObjectType.AddItems(_T("BH-NT"), _T("Bảo hiểm khác nội trú"), NULL);
	//m_wndObjectType.AddItems(_T("BH-NG"), _T("Bảo hiểm khác ngoại trú"), NULL);
	//m_wndObjectType.AddItems(_T("BHQUAN-NT+BHQUAN-NG"), _T("Bảo hiểm quân nội trú, ngoại trú"), NULL);
	//m_wndObjectType.AddItems(_T("BHQUAN-NT"), _T("Bảo hiểm quân nội trú"), NULL);
	//m_wndObjectType.AddItems(_T("BHQUAN-NG"), _T("Bảo hiểm quân ngoại trú"), NULL);
	OnListLoadData();
	return 0;	
}
void CFMTotalIncomeinsdiff::OnObjectTypeSelendok()
{
	OnListLoadData();
}
void CFMTotalIncomeinsdiff::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}

void CFMTotalIncomeinsdiff::OnServIncomeSelect()
{
	OnListLoadData();	
	//AfxMessageBox(_T("Nên so sánh với doanh thu của hộ dịch vụ để đảm bảo khớp số liệu"));
	
}
void CFMTotalIncomeinsdiff::OnInsIncomeSelect()
{
	OnListLoadData();
	//AfxMessageBox(_T("Nên so sánh với doanh thu của hộ bảo hiểm để đảm bảo khớp số liệu"));
}
void CFMTotalIncomeinsdiff::OnTYCIncomeSelect()
{
	OnListLoadData();
	AfxMessageBox(_T("Nên so sánh với doanh thu của khoa yêu cầu để đảm bảo khớp số liệu"));
}
void CFMTotalIncomeinsdiff::OnOtherIncomeSelect()
{
	OnListLoadData();
	AfxMessageBox(_T("Hiện đang lấy số liệu thu của đối tượng Quân & bạn"));
}

void CFMTotalIncomeinsdiff::OnAllSelect()
{
	OnListLoadData();
	AfxMessageBox(_T("Nên so sánh với doanh thu của các bộ phận để đảm bảo khớp số liệu"));
}


void CFMTotalIncomeinsdiff::OnSoldierWCardSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

void CFMTotalIncomeinsdiff::OnClerkSelendok(){
	 
}
int CFMTotalIncomeinsdiff::OnListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DVYC"))==szItemText.Right(4))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
int CFMTotalIncomeinsdiff::OnListCheckAllPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PTTYC"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}

void CFMTotalIncomeinsdiff::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}
void CFMTotalIncomeinsdiff::OnSODSelect(){
	OnListLoadData();
}
/*void CFMTotalIncomeinsdiff::OnClerkSetfocus(){
	
}*/
/*void CFMTotalIncomeinsdiff::OnClerkKillfocus(){
	
}*/
long CFMTotalIncomeinsdiff::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMTotalIncomeinsdiff::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMTotalIncomeinsdiff::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTotalIncomeinsdiff::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMTotalIncomeinsdiff::OnStatusSetfocus(){
	
}*/
/*void CFMTotalIncomeinsdiff::OnStatusKillfocus(){
	
}*/
long CFMTotalIncomeinsdiff::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);

	return 0;
}
/*void CFMTotalIncomeinsdiff::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMTotalIncomeinsdiff::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTotalIncomeinsdiff::OnOrderBySelendok(){
	 
}
/*void CFMTotalIncomeinsdiff::OnOrderBySetfocus(){
	
}*/
/*void CFMTotalIncomeinsdiff::OnOrderByKillfocus(){
	
}*/
long CFMTotalIncomeinsdiff::OnOrderByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndOrderBy.AddItems(_T("01"), _T("S\x1EAFp \x78\x1EBFp th\x65o t\xEAn \x62\x1EC7nh nh\xE2n"), NULL);
	m_wndOrderBy.AddItems(_T("02"), _T("Sắp xếp theo số hồ sơ"), NULL);
	//m_wndOrderBy.AddItems(_T("03"), _T("S\x1EAFp \x78\x1EBFp th\x65o ng\xE0y th\x61nh to\xE1n"), NULL);
	m_wndOrderBy.AddItems(_T("03"), _T("Sắp xếp theo ngày"), NULL);
	m_wndOrderBy.AddItems(_T("04"), _T("Sắp xếp theo khoa thực hiện"), NULL);
	//m_wndOrderBy.AddItems(_T("05"), _T("S\x1EAFp \x78\x1EBFp th\x65o phi\x1EBFu thu"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrderBy.IsSearchKey() && !m_szOrderByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOrderByKey
};
	m_wndOrderBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMTotalIncomeinsdiff::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMTotalIncomeinsdiff::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		//szWhere.Format(_T(" and SD_DEPT_REPORT='%s' "), m_szDeptKey);
		szWhere.Format(_T(" and SD_ID='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T("SELECT SD_DEPT_REPORT as id, sd_name as name FROM sys_dept_report %s ORDER BY sd_id "), szWhere);
	szSQL.Format(_T("SELECT SD_ID as id, sd_name as name FROM sys_dept where SD_ISACTIVE='Y' %s ORDER BY sd_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

void CFMTotalIncomeinsdiff::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMTotalIncomeinsdiff::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMTotalIncomeinsdiff::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMTotalIncomeinsdiff::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMTotalIncomeinsdiff::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	szWhere.AppendFormat(_T(" and FAC_POSTED ='Y' "));

	if(!m_szClerkKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
	}

	//Load phiếu khu AB
	//Load phiếu dịch vụ
	//Load phiếu bảo hiểm
	//Load phiếu theo yêu cầu
	//Load phiếu đối tượng còn lại
	//Load phiếu toàn viện

	if (m_bABZone)
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB') OR (fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') and FAC_POSTED ='Y' AND fac_invoicetype IN('P','R') AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F'))"));
		szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}

	else if (m_nServIncome == 0)
	{
		szWhere.AppendFormat(_T("  AND (substr(fac_cashbook_id, 1, 2) = 'DV' ") \
		_T("  OR fac_cashbook_id='THE-DV' ") \
		_T("  OR fac_cashbook_id ='CK-DV') ") \
		_T("  AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	}
	
	else if ((m_szObjectTypeKey == _T("BH") || m_nInsIncome == 0))
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));
	}

	else if (m_nTYCIncome == 0)
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','BH-PTTYC', ") \
		_T(" 'THE-DV-YC','BHYC', 'THE-DV-PTTYC', ") \
		_T(" 'THE-BH-YC', 'THE-BH-PTTYC', 'CK-DV-YC', ") \
		_T(" 'CK-BH-YC','CK-DV-PTTYC', 'CK-BH-PTTYC')"));
	}
	
	else if (m_nOtherIncome == 0)
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('QUAN-NG', 'QUAN-NT', 'BAN_NG', 'BAN_NT')"));
	}

	else if (m_nAll == 0)
	{
		szWhere.AppendFormat(_T(" AND 1=1"));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND 0>1"));
	}

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s ORDER BY fac_cash_id"), szWhere);	
	m_szCashQuery.Format(_T("SELECT fac_cash_id ") \
		_T(" FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s "), szWhere);	
	long nCount = rs.ExecSQL(szSQL);	
	
	m_wndList.BeginLoad();
	CString szDate;
	while (!rs.IsEOF())
	{
		if(m_szStatusKey == _T("01"))
			rs.GetValue(_T("fac_invoicedate"), szDate);
		else if(m_szStatusKey == _T("02"))
		{
			rs.GetValue(_T("fac_approveddate"), szDate);
		}
		else
		{
			rs.GetValue(_T("fac_posteddate"), szDate);

		}

		m_wndList.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("descr")),
			rs.GetValue(_T("stt")),
			szDate,
			rs.GetValue(_T("user_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMTotalIncomeinsdiff::OnMarkAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for( i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMTotalIncomeinsdiff::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMTotalIncomeinsdiff::OnInpatientSelect(){
	
}
void CFMTotalIncomeinsdiff::OnOutpatientSelect(){
	
}
void CFMTotalIncomeinsdiff::OnDepositSelect(){
	
}

 
 
int CFMTotalIncomeinsdiff::OnAddFMTotalIncomeinsdiff(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMTotalIncomeinsdiff::OnEditFMTotalIncomeinsdiff(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMTotalIncomeinsdiff::OnDeleteFMTotalIncomeinsdiff(){
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
 		OnCancelFMTotalIncomeinsdiff();
 	}
	return 0;
}
int CFMTotalIncomeinsdiff::OnSaveFMTotalIncomeinsdiff(){
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
 //_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFMTotalIncomeinsdiffListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMTotalIncomeinsdiff::OnCancelFMTotalIncomeinsdiff(){
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
int CFMTotalIncomeinsdiff::OnFMTotalIncomeinsdiffListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMTotalIncomeinsdiff::OnPrintSelect()
{
	
}

void CFMTotalIncomeinsdiff::OnPrint1stver()
{
	
}


void CFMTotalIncomeinsdiff::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	

	TranslateString(_T("Export chi tiết (theo phiếu)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	//TranslateString(_T("Export chi tiết (theo ngày post)"), tmpStr);
	//menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("Export tổng hợp"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);


	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect_V1();
			break;
		case 2:
			OnExportSelect_V2();
			break;
		case 3:
			OnExportSelect_V3();
			break;
	}
}
void CFMTotalIncomeinsdiff::OnExportPatientList()
{	
	
}
void CFMTotalIncomeinsdiff::OnExportDetailSelect()
{
	
}

void CFMTotalIncomeinsdiff::OnExportTotalList(int nVersion)
{
	
}
void CFMTotalIncomeinsdiff::OnExportTotalList1()
{
	
}

CString CFMTotalIncomeinsdiff::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	szReceiptStr = _T("-1");
	UpdateData(true);
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			if(!szReceiptStr.IsEmpty())
				szReceiptStr.AppendFormat(_T(","));
			szReceiptStr.AppendFormat(_T("%ld"), str2long(m_wndList.GetItemText(i,0)));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and i.hfe_cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" i.hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" i.hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}
	
		szSQL.Format(_T(" SELECT i.hfe_deptid AS khoa,") \
					_T("   f.hfe_docno       AS sohoso,") \
					_T("   CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'PM'") \
					_T("     THEN f.hfe_desc") \
					_T("     ELSE NULL") \
					_T("   END AS tenthuoc,") \
					_T("   CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'MA'") \
					_T("     THEN f.hfe_desc") \
					_T("     ELSE NULL") \
					_T("   END                                                                 AS tenvattu,") \
					_T("  CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'PM'") \
					_T("     THEN SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))") \
					_T("     ELSE 0") \
					_T("   END AS tienthuoc,") \
					_T("    CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'MA'") \
					_T("     THEN SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))") \
					_T("     ELSE 0") \
					_T("   END AS tienvattu,") \
					_T("   SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount)) AS tongcong") \
					_T(" FROM hms_fee f") \
					_T(" LEFT JOIN m_productitem_view_vp") \
					_T(" ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
					_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_V2_BH2 i") \
					_T(" ON (f.hfe_docno     = i.hfe_docno") \
					_T(" AND f.hfe_invoiceno = i.hfe_invoiceno)") \
					_T(" WHERE 1=1") \
					_T(" %s") \
					_T(" and f.hfe_status IN ('P', 'R')") \
					_T(" and i.hfe_status = 'P'") \
					_T(" and i.hfe_posted = 'Y'") \
					_T(" AND f.hfe_type     IN('D', 'M', 'R')") \
					_T(" AND NVL(product_org_id, 'XX') IN ('MA','PM')") \
					_T(" AND f.hfe_category <> 'Y'") \
					_T(" GROUP BY i.hfe_deptid,") \
					_T("   f.hfe_docno,") \
					_T("   product_org_id,") \
					_T("   f.hfe_desc") \
					_T(" HAVING SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))>0") \
					_T(" ORDER BY i.hfe_deptid,") \
					_T(" f.hfe_docno"), szWhere);	
	return szSQL;
}

int CFMTotalIncomeinsdiff::OnListCheckAllInvoice()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PT"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMTotalIncomeinsdiff::OnListCheckAllRefund()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PC"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}	
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMTotalIncomeinsdiff::OnListCheckAllIns()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
		int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BH"))==szItemText.Right(2))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}	
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMTotalIncomeinsdiff::OnListUnCheckAllIns()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BH"))==szItemText.Right(2))
	{
		m_wndList.SetCheck(i, false);
	}	
	}
	return 0;
}
int CFMTotalIncomeinsdiff::OnListCheckAllSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("QUAN"))==szItemText.Right(4) && (_T("BHQUAN"))!= szItemText.Right(6)  )
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}	
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMTotalIncomeinsdiff::OnListUnCheckAllSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);	
	//if ((_T("QUAN"))==szItemText.Right(4) && (_T("BHQUAN"))!= szItemText.Right(6)  )
	if (((_T("QUAN"))==szItemText.Right(4) || (_T("LUONG"))==szItemText.Right(5)) && (_T("BHQUAN"))!= szItemText.Right(6)  )
	{
		m_wndList.SetCheck(i, false);
		nCheck++;
	}	
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMTotalIncomeinsdiff::OnListCheckAllInsSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BHQUAN"))==szItemText.Right(6))
	{
		m_wndList.SetCheck(i, true);
	}	
	}
	return 0;
}

int CFMTotalIncomeinsdiff::OnListUnCheckAllInsSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BHQUAN"))==szItemText.Right(6))
	{
		m_wndList.SetCheck(i, false);
	}	
	}
	return 0;
}
int CFMTotalIncomeinsdiff::OnDeleteDataBeforeInsert()
{
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL; 	
	szSQL.Format(_T("Delete from tmp_fa_cash_D10 where userid='%s'"), pMF->m_szUser);
 	int ret = pMF->ExecSQL(szSQL);
	_msg(_T("Đã xóa %ld bản ghi"), ret);
	return 0;
}

void CFMTotalIncomeinsdiff::OnExportTotalListEX()
{
	
}

void CFMTotalIncomeinsdiff::OnExportTotalList5()
{
	
}

void CFMTotalIncomeinsdiff::OnExportSelect_V1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Báo cáo thu tiền thuốc, vật tư ngoài danh mục. Option lấy theo số phiếu được chọn trên màn hình"));
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOTONGTHUNGOAIDANHMUCBHYT_CHITIET.xls"))) 
		AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	int nCount = 1;
	while(!rs.IsEOF())
	{
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}		
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sohoso"), tmpStr);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenthuoc"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("tienthuoc"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tenvattu"), tmpStr);		
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tienvattu"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tongcong"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGTHUNGOAIDANHMUCBHYT_CHITIET2.xls"));
} 
void CFMTotalIncomeinsdiff::OnExportSelect_V2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Báo cáo thu tiền thuốc, vật tư ngoài danh mục. Option lấy toàn bộ đối tượng BH theo ngày post (cả yêu cầu), ko phụ thuộc số phiếu chọn"));
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOTONGTHUNGOAIDANHMUCBHYT_CHITIET.xls"))) 
		AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_V2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	int nCount = 1;
	while(!rs.IsEOF())
	{
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}		
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sohoso"), tmpStr);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenthuoc"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tienthuoc"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tenvattu"), tmpStr);		
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tienvattu"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tongcong"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);			
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGTHUNGOAIDANHMUCBHYT_CHITIET2.xls"));
} 

CString CFMTotalIncomeinsdiff::GetQueryString_V2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	szReceiptStr = _T("-1");
	UpdateData(true);
	
	szSQL.Format(_T(" SELECT i.hfe_deptid AS khoa,") \
					_T("   f.hfe_docno       AS sohoso,") \
					_T("   CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'PM'") \
					_T("     THEN f.hfe_desc") \
					_T("     ELSE NULL") \
					_T("   END AS tenthuoc,") \
					_T("   CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'MA'") \
					_T("     THEN f.hfe_desc") \
					_T("     ELSE NULL") \
					_T("   END                                                                 AS tenvattu,") \
					_T("  CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'PM'") \
					_T("     THEN SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))") \
					_T("     ELSE 0") \
					_T("   END AS tienthuoc,") \
					_T("    CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'MA'") \
					_T("     THEN SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))") \
					_T("     ELSE 0") \
					_T("   END AS tienvattu,") \
					_T("   SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount)) AS tongcong") \
					_T(" FROM hms_fee f") \
					_T(" LEFT JOIN m_productitem_view_vp") \
					_T(" ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
					_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_V2_BH2 i") \
					_T(" ON (f.hfe_docno     = i.hfe_docno") \
					_T(" AND f.hfe_invoiceno = i.hfe_invoiceno)") \
					_T(" LEFT JOIN hms_object ON (i.hfe_objectid = ho_id)") \
					_T(" WHERE 1=1") \
					_T(" AND HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
					_T(" and f.hfe_status IN ('P', 'R')") \
					_T(" and i.hfe_status = 'P'") \
					_T(" and i.hfe_posted = 'Y'") \
					_T(" AND ho_type IN ('I', 'C')") \
					_T(" AND f.hfe_type     IN('D', 'M', 'R')") \
					_T(" AND NVL(product_org_id, 'XX') IN ('MA','PM')") \
					_T(" AND f.hfe_category <> 'Y'") \
					_T(" GROUP BY i.hfe_deptid,") \
					_T("   f.hfe_docno,") \
					_T("   product_org_id,") \
					_T("   f.hfe_desc") \
					_T(" HAVING SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))>0") \
					_T(" ORDER BY i.hfe_deptid,") \
					_T(" f.hfe_docno"), m_szFromDate, m_szToDate);
	
	return szSQL;
}
void CFMTotalIncomeinsdiff::OnExportSelect_V3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Báo cáo thu tiền thuốc, vật tư ngoài danh mục. Option lấy theo số phiếu được chọn trên màn hình"));
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOTONGTHUNGOAIDANHMUCBHYT_TONGHOP.xls"))) 
		AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_V3();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	int nCount = 1;
	while(!rs.IsEOF())
	{
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}

		rs.GetValue(_T("khoa"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[7] > 0)
			{
				xls.SetCellText(1, nRow, _T("Cộng Khoa"), FMT_TEXT, true);

				for(int i = 3; i < 30; i++)
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
		}
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong"), tmpStr);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("tenthuoc"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tienthuoc"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tenvattu"), tmpStr);		
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tienvattu"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tongcong"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);			
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGTHUNGOAIDANHMUCBHYT_TONGHOP2.xls"));
} 
CString CFMTotalIncomeinsdiff::GetQueryString_V3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	szReceiptStr = _T("-1");
	UpdateData(true);
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			if(!szReceiptStr.IsEmpty())
				szReceiptStr.AppendFormat(_T(","));
			szReceiptStr.AppendFormat(_T("%ld"), str2long(m_wndList.GetItemText(i,0)));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and i.hfe_cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" i.hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" i.hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}
	
		szSQL.Format(_T(" SELECT i.hfe_deptid AS khoa,") \
					_T("   SUM(f.hfe_quantity)       AS soluong,") \
					_T("   CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'PM'") \
					_T("     THEN f.hfe_desc") \
					_T("     ELSE NULL") \
					_T("   END AS tenthuoc,") \
					_T("   CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'MA'") \
					_T("     THEN f.hfe_desc") \
					_T("     ELSE NULL") \
					_T("   END                                                                 AS tenvattu,") \

					 _T("  CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'PM'") \
					_T("     THEN SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))") \
					_T("     ELSE 0") \
					_T("   END AS tienthuoc,") \
					_T("    CASE") \
					_T("     WHEN NVL(product_org_id, 'XX') = 'MA'") \
					_T("     THEN SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))") \
					_T("     ELSE 0") \
					_T("   END AS tienvattu,") \

					_T("   SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount)) AS tongcong") \
					_T(" FROM hms_fee f") \
					_T(" LEFT JOIN m_productitem_view_vp") \
					_T(" ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
					_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_V2_BH2 i") \
					_T(" ON (f.hfe_docno     = i.hfe_docno") \
					_T(" AND f.hfe_invoiceno = i.hfe_invoiceno)") \
					_T(" WHERE 1=1") \
					_T(" %s") \
					_T(" and f.hfe_status IN ('P', 'R')") \
					_T(" and i.hfe_status = 'P'") \
					_T(" and i.hfe_posted = 'Y'") \
					_T(" AND f.hfe_type     IN('D', 'M', 'R')") \
					_T(" AND NVL(product_org_id, 'XX') IN ('MA','PM')") \
					_T(" AND f.hfe_category <> 'Y'") \
					_T(" GROUP BY i.hfe_deptid,") \
					_T("   f.hfe_docno,") \
					_T("   product_org_id,") \
					_T("   f.hfe_desc") \
					_T(" HAVING SUM(f.hfe_patpaid -(f.hfe_inspaid - f.hfe_discount))>0") \
					_T(" ORDER BY i.hfe_deptid,") \
					_T(" f.hfe_docno"), szWhere);	
	return szSQL;
}
