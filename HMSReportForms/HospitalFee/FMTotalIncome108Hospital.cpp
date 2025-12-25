#include "stdafx.h"
#include "FMTotalIncome108Hospital.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnYearKillfocus();
} */
static void _OnCreateDataSelectFnc(CWnd *pWnd)
{
	CFMTotalIncome108Hospital *pVw = (CFMTotalIncome108Hospital *)pWnd;
	pVw->OnCreateDataSelect();
} 

static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnObjectTypeSelendok();
}

static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalIncome108Hospital* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnReportPeriodSelendok();
}
static int _OnListCheckAllInvoiceFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListCheckAllInvoice();
	return 0;
}
static int _OnListCheckAllRefundFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListCheckAllRefund();
	return 0;
}

/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalIncome108Hospital* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalIncome108Hospital* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalIncome108Hospital* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital *)pWnd)->OnOrderByAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMTotalIncome108Hospital*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalIncome108Hospital*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMTotalIncome108Hospital*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMTotalIncome108Hospital*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMTotalIncome108Hospital*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMTotalIncome108Hospital *pVw = (CFMTotalIncome108Hospital *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMTotalIncome108Hospital *pVw = (CFMTotalIncome108Hospital *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMTotalIncome108Hospital *pVw = (CFMTotalIncome108Hospital *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMTotalIncome108Hospital *pVw = (CFMTotalIncome108Hospital *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncome108Hospital*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncome108Hospital*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncome108Hospital*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncome108Hospital*)pWnd)->OnAllSelect();
}
static int _OnAddFMTotalIncome108HospitalFnc(CWnd *pWnd){
	 return ((CFMTotalIncome108Hospital*)pWnd)->OnAddFMTotalIncome108Hospital();
} 
static int _OnEditFMTotalIncome108HospitalFnc(CWnd *pWnd){
	 return ((CFMTotalIncome108Hospital*)pWnd)->OnEditFMTotalIncome108Hospital();
} 
static int _OnDeleteFMTotalIncome108HospitalFnc(CWnd *pWnd){
	 return ((CFMTotalIncome108Hospital*)pWnd)->OnDeleteFMTotalIncome108Hospital();
} 
static int _OnSaveFMTotalIncome108HospitalFnc(CWnd *pWnd){
	 return ((CFMTotalIncome108Hospital*)pWnd)->OnSaveFMTotalIncome108Hospital();
} 
static int _OnCancelFMTotalIncome108HospitalFnc(CWnd *pWnd){
	 return ((CFMTotalIncome108Hospital*)pWnd)->OnCancelFMTotalIncome108Hospital();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMTotalIncome108Hospital*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncome108Hospital*)pWnd)->OnSODSelect();
}

static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMTotalIncome108Hospital*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}
static void _OnSoldierWCardSelectFnc(CWnd *pWnd)
{
	 ((CFMTotalIncome108Hospital*)pWnd)->OnSoldierWCardSelect();
}

static long _OnObjectTypeLoadDataFnc(CWnd *pWnd)
{
	return ((CFMTotalIncome108Hospital *)pWnd)->OnObjectTypeLoadData();
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMTotalIncome108Hospital*)pWnd)->OnABZoneSelect();
}
static void _OnTCKTSelectFnc(CWnd *pWnd){
	 ((CFMTotalIncome108Hospital*)pWnd)->OnTCKTSelect();
}

static void _OnServIncomeSelectFnc(CWnd *pWnd)
{
	  ((CFMTotalIncome108Hospital*)pWnd)->OnServIncomeSelect();
}
static void _OnInsIncomeSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncome108Hospital*)pWnd)->OnInsIncomeSelect();
}
static void _OnTYCIncomeSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncome108Hospital*)pWnd)->OnTYCIncomeSelect();
}
static void _OnOtherIncomeSelectFnc(CWnd *pWnd){
	  ((CFMTotalIncome108Hospital*)pWnd)->OnOtherIncomeSelect();
}

CFMTotalIncome108Hospital::CFMTotalIncome108Hospital(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();

}

CFMTotalIncome108Hospital::~CFMTotalIncome108Hospital()
{
}
void CFMTotalIncome108Hospital::OnCreateComponents()
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

}
void CFMTotalIncome108Hospital::OnInitializeComponents(){
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

void CFMTotalIncome108Hospital::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMTotalIncome108HospitalFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMTotalIncome108HospitalFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMTotalIncome108HospitalFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMTotalIncome108HospitalFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMTotalIncome108HospitalFnc, 0, 'T', VK_CONTROL);
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
	//SetMode(VM_EDIT);

}
void CFMTotalIncome108Hospital::OnDoDataExchange(CDataExchange* pDX){
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
void CFMTotalIncome108Hospital::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMTotalIncome108Hospital::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMTotalIncome108Hospital::SetDefaultValues(){

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
	m_nInsIncome=1;
	m_nTYCIncome=1;
	m_nOtherIncome=1;
	m_nAll=0;
}

int CFMTotalIncome108Hospital::SetMode(int nMode){
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

/*void CFMTotalIncome108Hospital::OnYearChange(){
	
} */
/*void CFMTotalIncome108Hospital::OnYearSetfocus(){
	
} */
/*void CFMTotalIncome108Hospital::OnYearKillfocus(){
	
} */
int CFMTotalIncome108Hospital::OnYearCheckValue(){
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
 
void CFMTotalIncome108Hospital::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

void CFMTotalIncome108Hospital::OnTCKTSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
void CFMTotalIncome108Hospital::OnCreateDataSelect()
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

 
void CFMTotalIncome108Hospital::OnReportPeriodSelendok(){
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

/*void CFMTotalIncome108Hospital::OnReportPeriodSetfocus(){
	
}*/
/*void CFMTotalIncome108Hospital::OnReportPeriodKillfocus(){
	
}*/
long CFMTotalIncome108Hospital::OnReportPeriodLoadData(){
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

/*void CFMTotalIncome108Hospital::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMTotalIncome108Hospital::OnFromDateChange(){
	
} */
/*void CFMTotalIncome108Hospital::OnFromDateSetfocus(){
	
} */
/*void CFMTotalIncome108Hospital::OnFromDateKillfocus(){
	
} */
int CFMTotalIncome108Hospital::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMTotalIncome108Hospital::OnToDateChange(){
	
} */
/*void CFMTotalIncome108Hospital::OnToDateSetfocus(){
	
} */
/*void CFMTotalIncome108Hospital::OnToDateKillfocus(){
	
} */
int CFMTotalIncome108Hospital::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMTotalIncome108Hospital::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

long CFMTotalIncome108Hospital::OnObjectTypeLoadData()
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
void CFMTotalIncome108Hospital::OnObjectTypeSelendok()
{
	OnListLoadData();
}
void CFMTotalIncome108Hospital::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}

void CFMTotalIncome108Hospital::OnServIncomeSelect()
{
	OnListLoadData();	
	AfxMessageBox(_T("Nên so sánh với doanh thu của hộ dịch vụ để đảm bảo khớp số liệu"));
	
}
void CFMTotalIncome108Hospital::OnInsIncomeSelect()
{
	OnListLoadData();
	AfxMessageBox(_T("Nên so sánh với doanh thu của hộ bảo hiểm để đảm bảo khớp số liệu"));
}
void CFMTotalIncome108Hospital::OnTYCIncomeSelect()
{
	OnListLoadData();
	AfxMessageBox(_T("Nên so sánh với doanh thu của khoa yêu cầu để đảm bảo khớp số liệu"));
}
void CFMTotalIncome108Hospital::OnOtherIncomeSelect()
{
	OnListLoadData();
	AfxMessageBox(_T("Hiện đang lấy số liệu thu của đối tượng Quân & bạn"));
}

void CFMTotalIncome108Hospital::OnAllSelect()
{
	OnListLoadData();
	AfxMessageBox(_T("Nên so sánh với doanh thu của các bộ phận để đảm bảo khớp số liệu"));
}


void CFMTotalIncome108Hospital::OnSoldierWCardSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

void CFMTotalIncome108Hospital::OnClerkSelendok(){
	 
}
int CFMTotalIncome108Hospital::OnListCheckAllTYC()
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
int CFMTotalIncome108Hospital::OnListCheckAllPTTYC()
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

void CFMTotalIncome108Hospital::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}
void CFMTotalIncome108Hospital::OnSODSelect(){
	OnListLoadData();
}
/*void CFMTotalIncome108Hospital::OnClerkSetfocus(){
	
}*/
/*void CFMTotalIncome108Hospital::OnClerkKillfocus(){
	
}*/
long CFMTotalIncome108Hospital::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMTotalIncome108Hospital::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMTotalIncome108Hospital::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTotalIncome108Hospital::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMTotalIncome108Hospital::OnStatusSetfocus(){
	
}*/
/*void CFMTotalIncome108Hospital::OnStatusKillfocus(){
	
}*/
long CFMTotalIncome108Hospital::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMTotalIncome108Hospital::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMTotalIncome108Hospital::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTotalIncome108Hospital::OnOrderBySelendok(){
	 
}
/*void CFMTotalIncome108Hospital::OnOrderBySetfocus(){
	
}*/
/*void CFMTotalIncome108Hospital::OnOrderByKillfocus(){
	
}*/
long CFMTotalIncome108Hospital::OnOrderByLoadData(){
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
/*void CFMTotalIncome108Hospital::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMTotalIncome108Hospital::OnDeptLoadData(){
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

void CFMTotalIncome108Hospital::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMTotalIncome108Hospital::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMTotalIncome108Hospital::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMTotalIncome108Hospital::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMTotalIncome108Hospital::OnListLoadData()
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
	//_msg(_T("%s"), szSQL);
	
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

void CFMTotalIncome108Hospital::OnMarkAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMTotalIncome108Hospital::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMTotalIncome108Hospital::OnInpatientSelect(){
	
}
void CFMTotalIncome108Hospital::OnOutpatientSelect(){
	
}
void CFMTotalIncome108Hospital::OnDepositSelect(){
	
}

 
 
int CFMTotalIncome108Hospital::OnAddFMTotalIncome108Hospital(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMTotalIncome108Hospital::OnEditFMTotalIncome108Hospital(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMTotalIncome108Hospital::OnDeleteFMTotalIncome108Hospital(){
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
 		OnCancelFMTotalIncome108Hospital();
 	}
	return 0;
}
int CFMTotalIncome108Hospital::OnSaveFMTotalIncome108Hospital(){
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
 		//OnFMTotalIncome108HospitalListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMTotalIncome108Hospital::OnCancelFMTotalIncome108Hospital(){
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
int CFMTotalIncome108Hospital::OnFMTotalIncome108HospitalListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMTotalIncome108Hospital::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	UpdateData(TRUE);
	OnPrint2ndver();
	return;
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("1st Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("2nd Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	TranslateString(_T("Synthesis"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint1stver();
			break;
		case 2:
			OnPrint2ndver();
			break;
		case 3:
			CFMInsurancePostedReceiptVoucherList tmpView(this);
			CString szReceiptStr;
			tmpView.OnInitDialog();
			for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
			{
				if (m_wndList.GetCheck(i))
				{
					if (!szReceiptStr.IsEmpty())
						szReceiptStr += _T(", ");
					szReceiptStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
				}
			}
			
			tmpView.m_szReceiptStr = szReceiptStr;
			tmpView.m_szClerkKey = m_szClerkKey;
			tmpView.m_szFromDate = m_szFromDate;
			tmpView.m_szToDate = m_szToDate;
			tmpView.OnPrint2ndver();
	}
}

void CFMTotalIncome108Hospital::OnPrint1stver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp;
	CString szSysDate;

	szSQL = GetQueryString();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHUBNBH.RPT")))
		return;
	StringUpper(pMF->m_szHealthService, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_szHospitalName, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	CReportSection *rptDetail;
	CString szOldLine, szNewLine;
	CStringArray arrField;
	double nTotal[10];
	double nCost;
	int nIndex = 1;

	for (int i = 0; i < 10; i++)
	{
		nTotal[i] = 0;
	}
	arrField.Add(_T("deposit_extraction"));
	arrField.Add(_T("food_fee"));
	arrField.Add(_T(""));
	arrField.Add(_T("food_fee"));
	arrField.Add(_T("extra_amount"));
	arrField.Add(_T("pol_amt"));
	arrField.Add(_T("ins_amt"));
	arrField.Add(_T("other_amt"));
	arrField.Add(_T("deposit"));
	arrField.Add(_T("total_income"));
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("patient_name"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("rank"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("doc_no"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("record_no"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("dept_id"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("treatment_days"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		for (int j = 0; j < 10; j++)
		{
			rs.GetValue(arrField.GetAt(j), nCost);
			nTotal[j] += nCost;
			FormatCurrency(nCost, tmpStr);
			szTemp.Format(_T("%d"), j+11);
			rptDetail->SetValue(szTemp, tmpStr);	
		}		

		rs.MoveNext();
	}

	if (nTotal[9] > 0)
	{
		for (int i = 0; i < 10; i++)
		{
			FormatCurrency(nTotal[i], tmpStr);
			szTemp.Format(_T("s%d"), i + 11);
			rpt.GetReportFooter()->SetValue(szTemp, tmpStr);

		}
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	szTemp.Format(_T("%2.f"), nTotal[9]);
	MoneyToString(szTemp, tmpStr);
	tmpStr += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CFMTotalIncome108Hospital::OnPrint2ndver()

{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[16], GrandAmt[16], nTotalClass[16];
	for (int i = 0; i < 16; i++)
	{
		GrandAmt[i] = 0;
		nTotal[i] = 0;
		nTotalClass[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGTHTHANHTOAN_NOITRU_NGOAITRU_THEOKHOA.RPT");
	if (m_bSOD) szReportName = _T("Reports\\HMS\\HF_BANGTHTHANHTOAN_NOITRU_NGOAITRU_THEOKHOA_TYC.RPT");
	if (!rpt.Init(szReportName))
		return;
	//szSQL = GetQueryString();
	szSQL = GetQueryString_v2();

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("so_ngay_dt"));
	data_name.Add(_T("tien_kham"));
	data_name.Add(_T("tien_giuong"));
	data_name.Add(_T("tien_cls"));
	data_name.Add(_T("tien_pttt"));	
	data_name.Add(_T("tien_thuoc_ch"));
	data_name.Add(_T("tien_vat_tu_ch"));
	data_name.Add(_T("tien_thuoc_pm"));
	data_name.Add(_T("tien_vat_tu_pm"));
	data_name.Add(_T("tien_mau"));	
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("thu_goi"));
	data_name.Add(_T("tong_thu"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("tien_thuoc_tg"));
	data_name.Add(_T("tien_vat_tu_tg"));
	
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		if (!m_szDeptKey.IsEmpty())
		{
			rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(m_szDeptKey));
		}
		else rptHeader->SetValue(_T("Department"), _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 kho\x61"));
	}
_tprintf(_T("\r\n2"));


rpt.GetReportHeader()->SetValue(_T("InvoiceNos"), m_szCashIDS);

	CString szOldIndex, szNewIndex;

	int col_pos = 8;
	int sum_pos = (int) (data_name.GetCount()) - 4;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("posted_date"), szNewIndex);
		if(szNewIndex  != szOldIndex)
		{
			if (m_szOrderByKey == _T("03"))
				if (GrandAmt[sum_pos]> 0 && m_szDeptKey.IsEmpty())
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						tmpStr.Format(_T("%f"), GrandAmt[i]);
						szPos.Format(_T("s%d"), i+col_pos);
						rptGroup->SetValue(szPos, tmpStr);
						
						GrandAmt[i] = 0;
					}
				}
			if (nTotalClass[sum_pos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("\x43\x1ED9ng ng\xE0y"));
				rptGroup->SetValue(_T("Grand"), tmpStr);
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nTotalClass[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptGroup->SetValue(szPos, tmpStr);
					nTotalClass[i] = 0;
				}
			}
			
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
			{
				/*if(szNewIndex == _T("I"))
					tmpStr.Format(_T("I. \x42\x1EC7nh nh\xE2n ngo\x1EA1i tr\xFA"));
				else
					tmpStr.Format(_T("II. \x42\x1EC7nh nh\xE2n n\x1ED9i tr\xFA"));*/
				tmpStr.Format(_T("Ng\xE0y %s"), CDate::Convert(szNewIndex, yyyymmdd, ddmmyyyy));
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldIndex = szNewIndex;
			szOldLev1.Empty();
		}

		if(m_szOrderByKey == _T("03"))
			if (m_szDeptKey.IsEmpty())
			{
				rs.GetValue(_T("dept_id"), szNewLev1);
				if (szOldLev1 != szNewLev1)
				{
					if (GrandAmt[sum_pos]> 0)
					{
						rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
						for (int i = 0; i < data_name.GetCount(); i++)
						{
							tmpStr.Format(_T("%f"), GrandAmt[i]);
							szPos.Format(_T("s%d"), i+col_pos);
							rptGroup->SetValue(szPos, tmpStr);
							
							GrandAmt[i] = 0;
						}
					}
					rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
					if (rptGroup)
					{
						tmpStr.Format(_T("Kho\x61 %s"), szNewLev1);
						rptGroup->SetValue(_T("GroupName"), tmpStr);
					}
					szOldLev1 = szNewLev1;
					nIdx = 1;
				}
			}

		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("ho_ten")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("docno")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept_id")));
			rptDetail->SetValue(_T("5"), CDate::Convert(rs.GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("6"), CDate::Convert(rs.GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy));
			//rptDetail->SetValue(_T("7"), CDate::Convert(rs.GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));//
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("posted_date")));
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				GrandAmt[i]+= nTmp;
				nTotalClass[i]+= nTmp;
				nTotal[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);

				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
	if(m_szOrderByKey == _T("03"))
	{
		if (GrandAmt[sum_pos] > 0 && m_szDeptKey.IsEmpty())
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr.Format(_T("%f"), GrandAmt[i]);
				szPos.Format(_T("s%d"), i+col_pos);
				rptGroup->SetValue(szPos, tmpStr);
			}
		}
	}


	if (nTotalClass[sum_pos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("\x43\x1ED9ng ng\xE0y"));
		rptGroup->SetValue(_T("Grand"), tmpStr);

		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotalClass[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptGroup->SetValue(szPos, tmpStr);
		}
	}

_tprintf(_T("\r\n4"));
	if (nTotal[sum_pos] > 0)
	{
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("t%d"), i+col_pos);
			rpt.GetReportFooter()->SetValue(szPos, tmpStr);
		}
	}
_tprintf(_T("\r\n5"));
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMTotalIncome108Hospital"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);


	rpt.PrintPreview();
}
void CFMTotalIncome108Hospital::OnExportSelect()
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
	

	TranslateString(_T("Xuất tổng hợp theo khoa version 2"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 5, tmpStr);

	/*TranslateString(_T("Xuất TH theo khoa (BN không phát sinh tiền mặt)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);
	
	TranslateString(_T("Tổng chi phí nội trú - ngoại trú (gộp thành 1 hồ sơ)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 6, tmpStr);*/

	TranslateString(_T("Xuất tổng hợp theo khoa version 3"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 7, tmpStr);

	TranslateString(_T("Xuất danh sách BN so sánh"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 8, tmpStr);



	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportDetailSelect();
			break;
		case 8:
			OnExportPatientList();
			break;	
		case 3:
			OnExportTotalList(1);
			break;
		case 4:
			OnExportTotalList1();
			break;	
		case 5:
			OnExportTotalList(2);
			break;
		case 6:
			OnExportTotalListEX();
			break;
		case 7:
			OnExportTotalList5();
	}
}
void CFMTotalIncome108Hospital::OnExportPatientList()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	
	double nTemp = 0, nTemp1=0, ntotal=0;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_THEOKHOABH.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	//szSQL = GetQueryString_check();
	szSQL = GetQueryString_check_v2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	//AfxMessageBox(szSQL);
	
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

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("HO_TEN"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("TONG_THU1"), nTemp);
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
	xls.SetActiveSheet(0);
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_THEOKHOABH2.xls"));
}
void CFMTotalIncome108Hospital::OnExportDetailSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	//szSQL = GetQueryString();
	szSQL = GetQueryString_v2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		int i = 0;
		if(nRow == 65000)
		{
			i++;
			tmpStr.Format(_T("Sheet %d"), i);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(i);
			nRow = 1;
		}

		rs.GetValue(_T("dept_id"), szNewDept);
		if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
		{
			if (nGroupTotal[25] > 0)
			{
				xls.SetCellText(6, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 7; i < 30; i++)
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

		rs.GetValue(_T("HO_TEN"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NGAY_VAO"), tmpStr);
		xls.SetCellText(nCol+4,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("NGAY_RA"), tmpStr);
		xls.SetCellText(nCol+5,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("posted_date"), tmpStr);
		xls.SetCellText(nCol+6,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);		

		rs.GetValue(_T("SO_NGAY_DT"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_KHAM"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_GIUONG"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_CLS"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_PTTT"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH_NGOAITRU"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH_NOITRU"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH_NGOAITRU"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH_NOITRU"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_PM"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("TIEN_VAT_TU_PM"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("TIEN_MAU"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_KHAC"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_GOI"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TONG_THU"), nTemp);
		nGroupTotal[21] += nTemp;
		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_AN"), nTemp);
		nGroupTotal[22] += nTemp;
		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_THUOC_TG"), nTemp);
		nGroupTotal[23] += nTemp;
		xls.SetCellText(nCol+23, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_VAT_TU_TG"), nTemp);
		nGroupTotal[24] += nTemp;
		xls.SetCellText(nCol+24, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TONG_THU1"), nTemp);
		nGroupTotal[25] += nTemp;
		xls.SetCellText(nCol+25, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[25] > 0)
	{
		xls.SetCellText(6, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[25] > 0)
	{
		xls.SetCellText(6, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH2.xls"));
}

void CFMTotalIncome108Hospital::OnExportTotalList(int nVersion)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[26], nGroupTotal[26];
	for(int i = 0; i < 26; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH_TH_108.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	if (nVersion == 1)
	{
		szSQL = GetQueryString2();
	}
	else
	{
		szSQL = GetQueryString_v3();
	}
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	//AfxMessageBox(szSQL);
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("TIEN_KHAM"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_GIUONG"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_CLS"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_PTTT"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH_NGOAITRU"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH_NOITRU"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH_NGOAITRU"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH_NOITRU"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_PM"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_PM"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_MAU"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_KHAC"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_GOI"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TONG_THU"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_AN"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_THUOC_TG"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_VAT_TU_TG"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TONG_THU1"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_MIEN_GIAM"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[19] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 21; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH_TH_1082.xls"));
}
void CFMTotalIncome108Hospital::OnExportTotalList1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH_TH.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("TIEN_KHAM"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_GIUONG"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_CLS"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_PTTT"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_PM"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_PM"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_MAU"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_KHAC"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_GOI"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TONG_THU"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_AN"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_THUOC_TG"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_VAT_TU_TG"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TONG_THU1"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[17] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 18; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH2.xls"));
}

CString CFMTotalIncome108Hospital::GetQueryString()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20,szSQL21,szSQL22,szSQL23,szSQL24, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	CRecord rs(&pMF->m_db);	
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
		szWhere.Format(_T(" AND iv.hfe_cash_id in(%s) "), szReceiptStr);
		//szWhere.Format(_T(" AND cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" iv.hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" iv.hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}
	//szWhere4 = m_szWhere;	
	//szWhere.AppendFormat(_T(" AND iv.hfe_cash_id in(select IDX from tmp_fa_cash_D10) "));
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	/*if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" and chindex='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" and chindex='II' "));
	}
	szSQL.Format(_T(" SELECT     Get_patientname(DOC_NO) HO_TEN, ") \
	_T("            DOC_NO docno, ") \
	_T("            NGAY_VAO, ") \
	_T("            NGAY_RA, ") \
	_T("            chindex, ") \
	_T("			invoice_date,") \
	_T("            trunc(fac_posteddate) posted_date, ") \
	_T("            dept_id, ") \
	_T("            SUM(SO_NGAY_DT) SO_NGAY_DT, ") \
	_T("            SUM(TIEN_KHAM) TIEN_KHAM, ") \
	_T("            SUM(TIEN_GIUONG) TIEN_GIUONG, ") \
	_T("            SUM(TIEN_PTTT) TIEN_PTTT, ") \
	_T("            SUM(TIEN_THUOC_CH) TIEN_THUOC_CH, ") \
	_T("            SUM(TIEN_VAT_TU_CH) TIEN_VAT_TU_CH, ") \
	_T("            SUM(TIEN_THUOC_MO) TIEN_THUOC_MO, ") \
	_T("            SUM(TIEN_VAT_TU_MO) TIEN_VAT_TU_MO, ") \
	_T("            SUM(TIEN_THUOC_PHONGMO) TIEN_THUOC_PHONGMO, ") \
	_T("            SUM(TIEN_VAT_TU_PHONGMO) TIEN_VAT_TU_PHONGMO, ") \
	_T("            SUM(TIEN_AN) TIEN_AN, ") \
	_T("            SUM(THU_KHAC) THU_KHAC, ") \
	_T("			SUM(TIEN_KHAM + TIEN_giuong + tien_pttt + tien_thuoc_ch + tien_vat_tu_ch + tien_thuoc_mo + tien_vat_tu_mo + thu_khac) TONG_THU_,") \
	_T("			SUM(tong_thu) tong_thu") \
	_T(" FROM       FA_CASH ") \
	_T(" INNER JOIN (SELECT    i.HFE_CASH_ID CASH_ID, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX, ") \
	_T("                       Trunc(i.hfe_date) invoice_date, ") \
	_T("                       CASE WHEN i.hfe_type = 'O' THEN i.hfe_deptid ELSE CASE WHEN f.hfe_type IN ('D', 'M') AND f.hfe_deptid = 'B5' THEN (SELECT ho_deptid FROM hms_operation WHERE ho_idx = f.hfe_rowid) ELSE f.hfe_deptid END END dept_id, ") \
	_T("                       i.HFE_DOCNO DOC_NO, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA, ") \
	_T("                       CASE WHEN Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'B' THEN f.hfe_quantity ELSE 0 END ") \
	_T("						SO_NGAY_DT, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'E' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_KHAM, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'B' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_GIUONG, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'O' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_PTTT, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id <= 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_CH, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id <= 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_CH, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_MO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_MO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_PHONGMO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_PHONGMO, ") \
	_T("                       CASE WHEN Substr(f.hfe_group, 1, 2) = 'FF' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_AN, ") \
	_T("                       CASE WHEN I.HFE_TYPE <> 'O' THEN (CASE WHEN F.HFE_TYPE IN( 'F', 'X' ) AND Substr(F.HFE_GROUP, 1, 2) <> 'FF' AND Nvl(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END ) ELSE I.HFE_PAYMENT END ") \
	_T("                        THU_KHAC, ") \
	_T("					   CASE WHEN i.hfe_type = 'O' THEN i.hfe_amount ELSE CASE WHEN substr(f.hfe_group, 1, 2) <> 'FF' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END END tong_thu")
	_T("             FROM      HMS_FEE_INVOICE_VIEW_V2 I ") \
	_T("             LEFT JOIN HMS_FEE F ON ( I.HFE_DOCNO = F.HFE_DOCNO AND I.HFE_INVOICENO = F.HFE_INVOICENO ) ") \
	_T("             LEFT JOIN HMS_DOC ON ( I.HFE_DOCNO = HD_DOCNO ) ") \
	_T("             LEFT JOIN HMS_CLINICAL_RECORD ON ( I.HFE_DOCNO = HCR_DOCNO ) ") \
	_T("             WHERE     i.HFE_CASH_ID > 0 AND (i.hfe_type = 'O' OR (f.hfe_fee_id NOT IN (SELECT HFE_INVOICELINE_ID ") \
	_T("                                                FROM   HMS_FEE_DISCOUNTLINE d ") \
	_T("                                                WHERE  d.HFE_DOCNO = f.hfe_docno AND d.hfe_refidx NOT IN i.hfe_invoiceno) AND f.hfe_status IN ('P', 'R') AND f.hfe_type IN ('E', 'B', 'O', 'D', 'M', 'F')))") \
	_T("			) INVOICE_TBL ON ( FAC_CASH_ID = CASH_ID ) ") \
	_T(" WHERE      1 = 1 %s") \
	_T(" GROUP      BY DOC_NO,NGAY_VAO,NGAY_RA,chindex,trunc(fac_posteddate),dept_id, invoice_date ") \
	_T(" ORDER      BY trunc(fac_posteddate) %s "), szWhere, szOrderBy);
	return szSQL;*/
	//Case when like this very very...
	//Chi tiet theo bao cao tong hop khoa thuc hien//
	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,       ") \
				_T("       f.hfe_inspaid as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);

	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND su_deptid       IS NOT NULL") \
				_T("         THEN Su_Deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				//_T("         AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,") \//
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				_T("       AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20') AS NVARCHAR2(3))") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//7. Phi PTTT ne//
  if (m_bSOD)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				//_T("       CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_cost end as TIEN_PTTT,") \//
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
	//8.Phi thuoc ngoai tru, check ma kho 14 = "Nhà thuốc số 1"  //
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID=14") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//8.1 Phi thuoc noi tru
	//8.Phi thuoc ngoai tru//
  szSQL9.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID<>14") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
	//9.Phi khoa trang bi ngoai tru//
  szSQL10.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID=15") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category NOT IN ('Y')"), szWhere);
//9.1 Phi vat tu noi tru
	szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID<>15") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
//10. Thuoc phong mo//
 szSQL12.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0		  as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno        = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
//11. Vat tu phong mo//
szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0		  as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno        = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM')") \
				_T("     AND hfe_category       NOT IN ('Y')"), szWhere);
//13. Phi khac PTC nhap o tab phi khac//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND hfe_category       NOT IN ('Y')"), szWhere);
//14. Phi khac go so tien vao//
szSQL16.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = fi.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = fi.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"), szWhere);
//15. Phi an khoa dinh duong ne//
 szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3', 'AB') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//17.Phi tien vat tu trong goi//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', coalesce(ho_deptid, hpc_pdeptid, hfg_deptid)) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \

				_T("     LEFT JOIN hmsv_paraclinic ON (hpc_docno = f.hfe_docno AND HPO_REFERENCE_ID = hpc_orderid)") \
				_T("	 LEFT JOIN hms_fee_group ON (coalesce(ho_group, hpc_groupid) = hfg_id)") \
				_T("     WHERE 1              =1 AND coalesce(ho_deptid, hpc_deptid, cast('N' as nvarchar2(1)))<>'N' %s") \

				//_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \//
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 szSQL20.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv ON (ho_docno = iv.hfe_docno AND ho_INVOICENO = iv.hfe_invoiceno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL21.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv ON (ho_docno = iv.hfe_docno AND ho_INVOICENO = iv.hfe_invoiceno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);

		//20. Phi thu goi, them vao ngay 13/11/2018//
szSQL22.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       f.hfe_cost as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
 szSQL23.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P') AND F.hfe_status='R'") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P')") \
				_T("     AND hpc_status is NULL") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//") \//
szSQL24.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND F.Hfe_Group IN ('B3100')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);

rs.ExecSQL(szSQL);
				//_msg(_T("%s"), szSQL);
	/*_msg(_T("%s"), szSQL1);
	_msg(_T("%s"), szSQL2);	
	_msg(_T("%s"), szSQL3);	
	_msg(_T("%s"), szSQL4);	
	_msg(_T("%s"), szSQL5);	
	_msg(_T("%s"), szSQL6);	
	_msg(_T("%s"), szSQL7);	
	_msg(_T("%s"), szSQL8);	
	_msg(_T("%s"), szSQL9);	
	_msg(_T("%s"), szSQL10);	
	_msg(_T("%s"), szSQL11);
	_msg(_T("%s"), szSQL12);
	_msg(_T("%s"), szSQL13);
	_msg(_T("%s"), szSQL14);
	_msg(_T("%s"), szSQL15);
	_msg(_T("%s"), szSQL16);
	_msg(_T("%s"), szSQL17);
	_msg(_T("%s"), szSQL18);
	_msg(_T("%s"), szSQL19);
	_msg(_T("%s"), szWhere1);*/
   szSQL.Format(_T(" SELECT") \
				_T(" HO_TEN,") \
				_T(" docno,") \
				_T(" NGAY_VAO, ") \
				_T(" NGAY_RA,") \
				_T(" CHINDEX, ") \
				_T(" posted_date,") \
				_T(" dept_id,") \
				_T(" SUM(SO_NGAY_DT) as SO_NGAY_DT,") \
				_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
				_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
				_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
				_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
				_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
				_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
				_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
				_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
				_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
				_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
				_T(" SUM(THU_KHAC) as THU_KHAC,") \
				_T(" SUM(THU_GOI) as THU_GOI,") \
				_T(" SUM(TIEN_AN) as TIEN_AN,") \
				_T(" SUM(TIEN_THUOC_TG+TIEN_THUOC_TG_O) as TIEN_THUOC_TG,") \
				_T(" SUM(TIEN_VAT_TU_TG+TIEN_VAT_TU_TG_O) as TIEN_VAT_TU_TG,") \
				_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI) as TONG_THU,") \
				_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG) as TONG_THU1") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
				_T("   Get_patientname(hfe_docno) as HO_TEN,") \
				_T("   hfe_docno as docno,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
				_T("    trunc(hfe_date) as invoice_date,") \
				_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
				_T("    khoa_thuchien as dept_id,") \
				_T("    hfe_quantity as SO_NGAY_DT,") \
				_T("     TIEN_KHAM,") \
				_T("     TIEN_GIUONG,") \
				_T("     TIEN_CLS,    ") \
				_T("     TIEN_PTTT,") \
				_T("     TIEN_THUOC_CH_NGOAITRU,") \
				_T("     TIEN_THUOC_CH_NOITRU,") \
				_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
				_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
				_T("     TIEN_THUOC_PM,") \
				_T("     TIEN_VAT_TU_PM,") \
				_T("     TIEN_MAU,    ") \
				_T("     THU_KHAC,") \
				_T("     THU_GOI,") \
				_T("     TIEN_AN,") \
				_T("     TIEN_THUOC_TG,") \
				_T("     TIEN_VAT_TU_TG,") \
				_T("     TIEN_THUOC_TG_O,") \
				_T("     TIEN_VAT_TU_TG_O,") \
				_T("     hfe_itemid") \
				_T("   FROM") \
				_T("     (") \
				_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
				//_T("    %s %s ") \//
				_T("   )tbl1") \
				_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=tbl1.hfe_cash_id)") \
				_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
				_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
				_T("   WHERE 1=1 AND (TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O)>0 %s") \
				_T("   )") \
				_T(" GROUP BY ") \
				_T(" HO_TEN, docno, NGAY_VAO, NGAY_RA,CHINDEX, posted_date,dept_id") \
				_T(" ORDER BY dept_id"),szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20,szSQL21,szSQL22,szSQL23, szSQL24, szWhere1);
_tprintf(_T("%s"), szSQL);
	return szSQL;
}

CString CFMTotalIncome108Hospital::GetQueryString2()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20,szSQL21,szSQL22,szSQL23,szSQL24, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	CRecord rs(&pMF->m_db);	
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
		szWhere.Format(_T(" AND iv.hfe_cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" iv.hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" iv.hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}
	//szWhere4 = m_szWhere;	
	//szWhere.AppendFormat(_T(" AND iv.hfe_cash_id in(select IDX from tmp_fa_cash_D10) "));
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	/*if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" and chindex='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" and chindex='II' "));
	}
	szSQL.Format(_T(" SELECT     Get_patientname(DOC_NO) HO_TEN, ") \
	_T("            DOC_NO docno, ") \
	_T("            NGAY_VAO, ") \
	_T("            NGAY_RA, ") \
	_T("            chindex, ") \
	_T("			invoice_date,") \
	_T("            trunc(fac_posteddate) posted_date, ") \
	_T("            dept_id, ") \
	_T("            SUM(SO_NGAY_DT) SO_NGAY_DT, ") \
	_T("            SUM(TIEN_KHAM) TIEN_KHAM, ") \
	_T("            SUM(TIEN_GIUONG) TIEN_GIUONG, ") \
	_T("            SUM(TIEN_PTTT) TIEN_PTTT, ") \
	_T("            SUM(TIEN_THUOC_CH) TIEN_THUOC_CH, ") \
	_T("            SUM(TIEN_VAT_TU_CH) TIEN_VAT_TU_CH, ") \
	_T("            SUM(TIEN_THUOC_MO) TIEN_THUOC_MO, ") \
	_T("            SUM(TIEN_VAT_TU_MO) TIEN_VAT_TU_MO, ") \
	_T("            SUM(TIEN_THUOC_PHONGMO) TIEN_THUOC_PHONGMO, ") \
	_T("            SUM(TIEN_VAT_TU_PHONGMO) TIEN_VAT_TU_PHONGMO, ") \
	_T("            SUM(TIEN_AN) TIEN_AN, ") \
	_T("            SUM(THU_KHAC) THU_KHAC, ") \
	_T("			SUM(TIEN_KHAM + TIEN_giuong + tien_pttt + tien_thuoc_ch + tien_vat_tu_ch + tien_thuoc_mo + tien_vat_tu_mo + thu_khac) TONG_THU_,") \
	_T("			SUM(tong_thu) tong_thu") \
	_T(" FROM       FA_CASH ") \
	_T(" INNER JOIN (SELECT    i.HFE_CASH_ID CASH_ID, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX, ") \
	_T("                       Trunc(i.hfe_date) invoice_date, ") \
	_T("                       CASE WHEN i.hfe_type = 'O' THEN i.hfe_deptid ELSE CASE WHEN f.hfe_type IN ('D', 'M') AND f.hfe_deptid = 'B5' THEN (SELECT ho_deptid FROM hms_operation WHERE ho_idx = f.hfe_rowid) ELSE f.hfe_deptid END END dept_id, ") \
	_T("                       i.HFE_DOCNO DOC_NO, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA, ") \
	_T("                       CASE WHEN Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'B' THEN f.hfe_quantity ELSE 0 END ") \
	_T("						SO_NGAY_DT, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'E' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_KHAM, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'B' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_GIUONG, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'O' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_PTTT, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id <= 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_CH, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id <= 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_CH, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_MO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_MO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_PHONGMO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_PHONGMO, ") \
	_T("                       CASE WHEN Substr(f.hfe_group, 1, 2) = 'FF' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_AN, ") \
	_T("                       CASE WHEN I.HFE_TYPE <> 'O' THEN (CASE WHEN F.HFE_TYPE IN( 'F', 'X' ) AND Substr(F.HFE_GROUP, 1, 2) <> 'FF' AND Nvl(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END ) ELSE I.HFE_PAYMENT END ") \
	_T("                        THU_KHAC, ") \
	_T("					   CASE WHEN i.hfe_type = 'O' THEN i.hfe_amount ELSE CASE WHEN substr(f.hfe_group, 1, 2) <> 'FF' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END END tong_thu")
	_T("             FROM      HMS_FEE_INVOICE_VIEW_V2 I ") \
	_T("             LEFT JOIN HMS_FEE F ON ( I.HFE_DOCNO = F.HFE_DOCNO AND I.HFE_INVOICENO = F.HFE_INVOICENO ) ") \
	_T("             LEFT JOIN HMS_DOC ON ( I.HFE_DOCNO = HD_DOCNO ) ") \
	_T("             LEFT JOIN HMS_CLINICAL_RECORD ON ( I.HFE_DOCNO = HCR_DOCNO ) ") \
	_T("             WHERE     i.HFE_CASH_ID > 0 AND (i.hfe_type = 'O' OR (f.hfe_fee_id NOT IN (SELECT HFE_INVOICELINE_ID ") \
	_T("                                                FROM   HMS_FEE_DISCOUNTLINE d ") \
	_T("                                                WHERE  d.HFE_DOCNO = f.hfe_docno AND d.hfe_refidx NOT IN i.hfe_invoiceno) AND f.hfe_status IN ('P', 'R') AND f.hfe_type IN ('E', 'B', 'O', 'D', 'M', 'F')))") \
	_T("			) INVOICE_TBL ON ( FAC_CASH_ID = CASH_ID ) ") \
	_T(" WHERE      1 = 1 %s") \
	_T(" GROUP      BY DOC_NO,NGAY_VAO,NGAY_RA,chindex,trunc(fac_posteddate),dept_id, invoice_date ") \
	_T(" ORDER      BY trunc(fac_posteddate) %s "), szWhere, szOrderBy);*/
	//Case when like this very very...
	//Chi tiet theo bao cao tong hop khoa thuc hien//

	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,       ") \
				_T("       f.hfe_inspaid as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND su_deptid       IS NOT NULL") \
				_T("         THEN Su_Deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				//_T("         AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,") \//
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				_T(" AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20') AS NVARCHAR2(3))") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//7. Phi PTTT ne//
  if (m_bSOD)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				//_T("       CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_cost end as TIEN_PTTT,") \//
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
	//8.Phi thuoc ngoai tru, check ma kho 14 = "Nhà thuốc số 1"  //
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID=14") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//8.1 Phi thuoc noi tru
	//8.Phi thuoc ngoai tru//
  szSQL9.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID<>14") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
	//9.Phi khoa trang bi ngoai tru//
  szSQL10.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID=15") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category NOT IN ('Y')"), szWhere);
//9.1 Phi vat tu noi tru
	szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID<>15") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
//10. Thuoc phong mo//
 szSQL12.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno        = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
//11. Vat tu phong mo//
szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno        = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM')") \
				_T("     AND hfe_category    NOT IN ('Y')"), szWhere);
//13. Phi khac PTC nhap o tab phi khac//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
//14. Phi khac go so tien vao//
szSQL16.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = fi.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = fi.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"), szWhere);
//15. Phi an khoa dinh duong ne//
 szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3', 'AB') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("      f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//17.Phi tien vat tu trong goi//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 /*szSQL20.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv ON (ho_docno = iv.hfe_docno AND ho_INVOICENO = iv.hfe_invoiceno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL21.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv ON (ho_docno = iv.hfe_docno AND ho_INVOICENO = iv.hfe_invoiceno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);*/
//20. Phi thu goi, them vao ngay 13/11/2018//
szSQL22.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       f.hfe_cost as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
 szSQL23.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P') AND F.hfe_status='R'") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P')") \
				_T("     AND hpc_status is NULL") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//") \//
szSQL24.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				/*_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \*/
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND F.Hfe_Group IN ('B3100')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
rs.ExecSQL(szSQL);	
	/*_msg(_T("%s"), szSQL1);
	_msg(_T("%s"), szSQL2);	
	_msg(_T("%s"), szSQL3);	
	_msg(_T("%s"), szSQL4);	
	_msg(_T("%s"), szSQL5);	
	_msg(_T("%s"), szSQL6);	
	_msg(_T("%s"), szSQL7);	
	_msg(_T("%s"), szSQL8);	
	_msg(_T("%s"), szSQL9);	
	_msg(_T("%s"), szSQL10);	
	_msg(_T("%s"), szSQL11);
	_msg(_T("%s"), szSQL12);
	_msg(_T("%s"), szSQL13);
	_msg(_T("%s"), szSQL14);
	_msg(_T("%s"), szSQL15);
	_msg(_T("%s"), szSQL16);
	_msg(_T("%s"), szSQL17);
	_msg(_T("%s"), szSQL18);
	_msg(_T("%s"), szSQL19);
	_msg(_T("%s"), szWhere1);*/
	/*_msg(_T("%s"), szSQL1);
	_msg(_T("%s"), szSQL);*/
	//_msg(_T("%s"), szSQL20);

   szSQL.Format(_T(" SELECT") \
				_T(" dept_id,") \
				_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
				_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
				_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
				_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
				_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
				_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
				_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
				_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
				_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
				_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
				_T(" SUM(THU_KHAC) as THU_KHAC,") \
				_T(" SUM(THU_GOI) as THU_GOI,") \
				_T(" SUM(TIEN_AN) as TIEN_AN,") \
				_T(" SUM(TIEN_THUOC_TG) as TIEN_THUOC_TG,") \
				_T(" SUM(TIEN_VAT_TU_TG) as TIEN_VAT_TU_TG,") \
				_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI) as TONG_THU,") \
				_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG) as TONG_THU1") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
				_T("   Get_patientname(hfe_docno) as HO_TEN,") \
				_T("   hfe_docno as docno,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
				_T("    trunc(hfe_date) as invoice_date,") \
				_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
				_T("    khoa_thuchien as dept_id,") \
				_T("    hfe_quantity as SO_NGAY_DT,") \
				_T("     TIEN_KHAM,") \
				_T("     TIEN_GIUONG,") \
				_T("     TIEN_CLS,    ") \
				_T("     TIEN_PTTT,") \
				_T("     TIEN_THUOC_CH_NGOAITRU,") \
				_T("     TIEN_THUOC_CH_NOITRU,") \
				_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
				_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
				_T("     TIEN_THUOC_PM,") \
				_T("     TIEN_VAT_TU_PM,") \
				_T("     TIEN_MAU,    ") \
				_T("     THU_KHAC,") \
				_T("     THU_GOI,") \
				_T("     TIEN_AN,") \
				_T("     TIEN_THUOC_TG,") \
				_T("     TIEN_VAT_TU_TG,") \
				/*_T("     TIEN_THUOC_TG_O,") \
				_T("     TIEN_VAT_TU_TG_O,") \*/
				_T("     hfe_itemid") \
				_T("   FROM") \
				_T("     (") \
				//_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \//
				_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
				//_T("    %s %s ") \//
				_T("   )tbl1") \
				_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=tbl1.hfe_cash_id)") \
				_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
				_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
				_T("   WHERE 1=1 AND (TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG)>0 %s") \
				_T("   )") \
				_T(" GROUP BY ") \
				_T(" dept_id") \
				_T(" ORDER BY dept_id"),szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL22,szSQL23,szSQL24 ,szWhere1);
	return szSQL;
}
CString CFMTotalIncome108Hospital::GetQueryString_check()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	CRecord rs(&pMF->m_db);

	szReceiptStr = _T("-1");
	UpdateData(true);
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			if(!szReceiptStr.IsEmpty())
				szReceiptStr.AppendFormat(_T(","));
			szReceiptStr.AppendFormat(_T("%ld"), str2long(m_wndList.GetItemText(i,0)));
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and iv.hfe_cash_id in(%s) "), szReceiptStr);
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	/*if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" and chindex='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" and chindex='II' "));
	}
	szSQL.Format(_T(" SELECT     Get_patientname(DOC_NO) HO_TEN, ") \
	_T("            DOC_NO docno, ") \
	_T("            NGAY_VAO, ") \
	_T("            NGAY_RA, ") \
	_T("            chindex, ") \
	_T("			invoice_date,") \
	_T("            trunc(fac_posteddate) posted_date, ") \
	_T("            dept_id, ") \
	_T("            SUM(SO_NGAY_DT) SO_NGAY_DT, ") \
	_T("            SUM(TIEN_KHAM) TIEN_KHAM, ") \
	_T("            SUM(TIEN_GIUONG) TIEN_GIUONG, ") \
	_T("            SUM(TIEN_PTTT) TIEN_PTTT, ") \
	_T("            SUM(TIEN_THUOC_CH) TIEN_THUOC_CH, ") \
	_T("            SUM(TIEN_VAT_TU_CH) TIEN_VAT_TU_CH, ") \
	_T("            SUM(TIEN_THUOC_MO) TIEN_THUOC_MO, ") \
	_T("            SUM(TIEN_VAT_TU_MO) TIEN_VAT_TU_MO, ") \
	_T("            SUM(TIEN_THUOC_PHONGMO) TIEN_THUOC_PHONGMO, ") \
	_T("            SUM(TIEN_VAT_TU_PHONGMO) TIEN_VAT_TU_PHONGMO, ") \
	_T("            SUM(TIEN_AN) TIEN_AN, ") \
	_T("            SUM(THU_KHAC) THU_KHAC, ") \
	_T("			SUM(TIEN_KHAM + TIEN_giuong + tien_pttt + tien_thuoc_ch + tien_vat_tu_ch + tien_thuoc_mo + tien_vat_tu_mo + thu_khac) TONG_THU_,") \
	_T("			SUM(tong_thu) tong_thu") \
	_T(" FROM       FA_CASH ") \
	_T(" INNER JOIN (SELECT    i.HFE_CASH_ID CASH_ID, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX, ") \
	_T("                       Trunc(i.hfe_date) invoice_date, ") \
	_T("                       CASE WHEN i.hfe_type = 'O' THEN i.hfe_deptid ELSE CASE WHEN f.hfe_type IN ('D', 'M') AND f.hfe_deptid = 'B5' THEN (SELECT ho_deptid FROM hms_operation WHERE ho_idx = f.hfe_rowid) ELSE f.hfe_deptid END END dept_id, ") \
	_T("                       i.HFE_DOCNO DOC_NO, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO, ") \
	_T("                       CASE WHEN I.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA, ") \
	_T("                       CASE WHEN Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'B' THEN f.hfe_quantity ELSE 0 END ") \
	_T("						SO_NGAY_DT, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'E' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_KHAM, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'B' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_GIUONG, ") \
	_T("                       CASE WHEN NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND F.HFE_TYPE = 'O' THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_PTTT, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id <= 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_CH, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id <= 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_CH, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_MO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') AND NVL(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_MO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') THEN (SELECT COALESCE(DECODE(mp_org_id, 'PM', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_THUOC_PHONGMO, ") \
	_T("                       CASE WHEN F.HFE_TYPE IN ('D', 'M') THEN (SELECT COALESCE(DECODE(mp_org_id, 'MA', f.hfe_cost), 0) FROM M_PRODUCT_ITEM, m_product, hms_pharmaorder_view WHERE CAST(hfe_itemid AS INTEGER) = mpi_product_item_id AND MPI_PRODUCT_ID = MP_PRODUCT_ID AND hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno AND hpo_reference_id > 0) ELSE 0 END ") \
	_T("                        TIEN_VAT_TU_PHONGMO, ") \
	_T("                       CASE WHEN Substr(f.hfe_group, 1, 2) = 'FF' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END ") \
	_T("                        TIEN_AN, ") \
	_T("                       CASE WHEN I.HFE_TYPE <> 'O' THEN (CASE WHEN F.HFE_TYPE IN( 'F', 'X' ) AND Substr(F.HFE_GROUP, 1, 2) <> 'FF' AND Nvl(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END ) ELSE I.HFE_PAYMENT END ") \
	_T("                        THU_KHAC, ") \
	_T("					   CASE WHEN i.hfe_type = 'O' THEN i.hfe_amount ELSE CASE WHEN substr(f.hfe_group, 1, 2) <> 'FF' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) THEN f.hfe_cost ELSE 0 END END tong_thu")
	_T("             FROM      HMS_FEE_INVOICE_VIEW_V2 I ") \
	_T("             LEFT JOIN HMS_FEE F ON ( I.HFE_DOCNO = F.HFE_DOCNO AND I.HFE_INVOICENO = F.HFE_INVOICENO ) ") \
	_T("             LEFT JOIN HMS_DOC ON ( I.HFE_DOCNO = HD_DOCNO ) ") \
	_T("             LEFT JOIN HMS_CLINICAL_RECORD ON ( I.HFE_DOCNO = HCR_DOCNO ) ") \
	_T("             WHERE     i.HFE_CASH_ID > 0 AND (i.hfe_type = 'O' OR (f.hfe_fee_id NOT IN (SELECT HFE_INVOICELINE_ID ") \
	_T("                                                FROM   HMS_FEE_DISCOUNTLINE d ") \
	_T("                                                WHERE  d.HFE_DOCNO = f.hfe_docno AND d.hfe_refidx NOT IN i.hfe_invoiceno) AND f.hfe_status IN ('P', 'R') AND f.hfe_type IN ('E', 'B', 'O', 'D', 'M', 'F')))") \
	_T("			) INVOICE_TBL ON ( FAC_CASH_ID = CASH_ID ) ") \
	_T(" WHERE      1 = 1 %s") \
	_T(" GROUP      BY DOC_NO,NGAY_VAO,NGAY_RA,chindex,trunc(fac_posteddate),dept_id, invoice_date ") \
	_T(" ORDER      BY trunc(fac_posteddate) %s "), szWhere, szOrderBy);*/
	//Case when like this very very...
	//Chi tiet theo bao cao tong hop khoa thuc hien//

	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,       ") \
				_T("       f.hfe_inspaid as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);

	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND su_deptid       IS NOT NULL") \
				_T("         THEN Su_Deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				//_T("         AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,") \//
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				_T(" AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20') AS NVARCHAR2(3))") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//7. Phi PTTT ne//
  if (m_bSOD)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
	//8.Phi thuoc ne//
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category    NOT IN ('Y')"), szWhere);
	//9.Phi khoa trang bi//
  szSQL9.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category    NOT IN ('Y')"), szWhere);
//10. Thuoc phong mo//
 szSQL10.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0          AS TIEN_THUOC_CH,") \
				_T("       0          AS TIEN_VAT_TU_CH,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno        = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND hfe_category       NOT IN ('Y')"), szWhere);
//11. Vat tu phong mo//
szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0          AS TIEN_THUOC_CH,") \
				_T("       0          AS TIEN_VAT_TU_CH,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno        = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND hfe_category       NOT IN ('Y')"), szWhere);
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL12.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM')") \
				_T("     AND hfe_category    NOT IN ('Y')"), szWhere);
//13. Phi khac PTC nhap o tab phi khac//
 szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
//14. Phi khac go so tien vao//
szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = fi.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = fi.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"), szWhere);
//15. Phi an khoa dinh duong ne//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("      f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL16.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//17.Phi tien vat tu trong goi//
szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv ON (ho_docno = iv.hfe_docno AND ho_INVOICENO = iv.hfe_invoiceno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE iv ON (ho_docno = iv.hfe_docno AND ho_INVOICENO = iv.hfe_invoiceno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);
rs.ExecSQL(szSQL);	
	/*_msg(_T("%s"), szSQL1);
	_msg(_T("%s"), szSQL2);	
	_msg(_T("%s"), szSQL3);	
	_msg(_T("%s"), szSQL4);	
	_msg(_T("%s"), szSQL5);	
	_msg(_T("%s"), szSQL6);	
	_msg(_T("%s"), szSQL7);	
	_msg(_T("%s"), szSQL8);	
	_msg(_T("%s"), szSQL9);	
	_msg(_T("%s"), szSQL10);	
	_msg(_T("%s"), szSQL11);
	_msg(_T("%s"), szSQL12);
	_msg(_T("%s"), szSQL13);
	_msg(_T("%s"), szSQL14);
	_msg(_T("%s"), szSQL15);
	_msg(_T("%s"), szSQL16);
	_msg(_T("%s"), szSQL17);
	_msg(_T("%s"), szSQL18);
	_msg(_T("%s"), szSQL19);
	_msg(_T("%s"), szWhere1);*/
   szSQL.Format(_T(" SELECT") \
				_T(" HO_TEN,") \
				_T(" docno,") \
				_T(" SUM(SO_NGAY_DT) as SO_NGAY_DT,") \
				_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
				_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
				_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
				_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
				_T(" SUM(TIEN_THUOC_CH) as TIEN_THUOC_CH,") \
				_T(" SUM(TIEN_VAT_TU_CH) as TIEN_VAT_TU_CH,") \
				_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
				_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
				_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
				_T(" SUM(THU_KHAC) as THU_KHAC,") \
				_T(" SUM(TIEN_AN) as TIEN_AN,") \
				_T(" SUM(TIEN_THUOC_TG+TIEN_THUOC_TG_O) as TIEN_THUOC_TG,") \
				_T(" SUM(TIEN_VAT_TU_TG+TIEN_VAT_TU_TG_O) as TIEN_VAT_TU_TG,") \
				_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC) as TONG_THU,") \
				_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+TIEN_AN) as TONG_THU1") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
				_T("   Get_patientname(hfe_docno) as HO_TEN,") \
				_T("   hfe_docno as docno,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
				_T("    CASE WHEN HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
				_T("    trunc(hfe_date) as invoice_date,") \
				_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
				_T("    khoa_thuchien as dept_id,") \
				_T("    hfe_quantity as SO_NGAY_DT,") \
				_T("     TIEN_KHAM,") \
				_T("     TIEN_GIUONG,") \
				_T("     TIEN_CLS,    ") \
				_T("     TIEN_PTTT,") \
				_T("     TIEN_THUOC_CH,") \
				_T("     TIEN_VAT_TU_CH,    ") \
				_T("     TIEN_THUOC_PM,") \
				_T("     TIEN_VAT_TU_PM,") \
				_T("     TIEN_MAU,    ") \
				_T("     THU_KHAC,") \
				_T("     TIEN_AN,") \
				_T("     TIEN_THUOC_TG,") \
				_T("     TIEN_VAT_TU_TG,") \
				_T("     TIEN_THUOC_TG_O,") \
				_T("     TIEN_VAT_TU_TG_O,") \
				_T("     hfe_itemid") \
				_T("   FROM") \
				_T("     (") \
				_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
				//_T("    %s %s ") \//
				_T("   )tbl1") \
				_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=tbl1.hfe_cash_id)") \
				_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
				_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
				_T("   WHERE 1=1 AND (TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O)>0 %s") \
				_T("   )") \
				_T(" GROUP BY ") \
				_T(" docno,HO_TEN") \
				_T(" ORDER BY docno"),szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szWhere1);
	return szSQL;
}
int CFMTotalIncome108Hospital::OnListCheckAllInvoice()
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
int CFMTotalIncome108Hospital::OnListCheckAllRefund()
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

int CFMTotalIncome108Hospital::OnListCheckAllIns()
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
int CFMTotalIncome108Hospital::OnListUnCheckAllIns()
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
int CFMTotalIncome108Hospital::OnListCheckAllSolder()
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

int CFMTotalIncome108Hospital::OnListUnCheckAllSolder()
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
int CFMTotalIncome108Hospital::OnListCheckAllInsSolder()
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

int CFMTotalIncome108Hospital::OnListUnCheckAllInsSolder()
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
int CFMTotalIncome108Hospital::OnDeleteDataBeforeInsert()
{
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL; 	
	szSQL.Format(_T("Delete from tmp_fa_cash_D10 where userid='%s'"), pMF->m_szUser);
 	int ret = pMF->ExecSQL(szSQL);
	_msg(_T("Đã xóa %ld bản ghi"), ret);
	return 0;
}
CString CFMTotalIncome108Hospital::GetQueryString3()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	CRecord rs(&pMF->m_db);
	szWhere.Format(_T(" AND iv.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND fi.HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND fi.HFE_CLASS='E' "));
	}	

	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,       ") \
				_T("       f.hfe_inspaid as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND su_deptid       IS NOT NULL") \
				_T("         THEN Su_Deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND Hpc_Practitioner IS NULL AND fl.Hfl_Deptid is not null THEN Fl.Hfl_Deptid else f.Hfe_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				//_T("         AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,") \//
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				_T(" AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20') AS NVARCHAR2(3))") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//7. Phi PTTT ne//
  if (m_bSOD)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
	//8.Phi thuoc ne//
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category   NOT IN ('Y')"), szWhere);
	//9.Phi khoa trang bi//
  szSQL9.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category    NOT IN ('Y')"), szWhere);
//10. Thuoc phong mo//
 szSQL10.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0          AS TIEN_THUOC_CH,") \
				_T("       0          AS TIEN_VAT_TU_CH,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno        = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND hfe_category       NOT IN ('Y')"), szWhere);
//11. Vat tu phong mo//
szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0          AS TIEN_THUOC_CH,") \
				_T("       0          AS TIEN_VAT_TU_CH,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno        = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND hfe_category       NOT IN ('Y')"), szWhere);
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL12.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM')") \
				_T("     AND hfe_category    NOT IN ('Y')"), szWhere);
//13. Phi khac PTC nhap o tab phi khac//
 szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
//14. Phi khac go so tien vao//
szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = fi.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = fi.hfe_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"), szWhere);
//15. Phi an khoa dinh duong ne//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1','C1.2','C1.3') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("      f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL16.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//17.Phi tien vat tu trong goi//
szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv ON (ho_docno = iv.hfe_docno AND ho_INVOICENO = iv.hfe_invoiceno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv ON (ho_docno = iv.hfe_docno AND ho_INVOICENO = iv.hfe_invoiceno)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);
//20. Phi thu goi, them vao ngay 13/11/2018//
szSQL20.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       iv.hfe_cash_id,") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       iv.hfe_class,") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH,") \
				_T("       0 as TIEN_VAT_TU_CH,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       hfe_cost as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_SERVICE1 iv") \
				_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
				_T("     AND iv.hfe_docno     = f.hfe_docno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
rs.ExecSQL(szSQL);	
	
   szSQL.Format(_T(" SELECT") \
				_T(" dept_id,") \
				_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
				_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
				_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
				_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
				_T(" SUM(ROUND(TIEN_THUOC_CH)) as TIEN_THUOC_CH,") \
				_T(" SUM(ROUND(TIEN_VAT_TU_CH)) as TIEN_VAT_TU_CH,") \
				_T(" SUM(ROUND(TIEN_THUOC_PM)) AS TIEN_THUOC_PM,") \
				_T(" SUM(ROUND(TIEN_VAT_TU_PM)) AS TIEN_VAT_TU_PM,") \
				_T(" SUM(ROUND(TIEN_MAU)) as TIEN_MAU,") \
				_T(" SUM(THU_KHAC) as THU_KHAC,") \
				_T(" SUM(THU_GOI) as THU_GOI,") \
				_T(" SUM(TIEN_AN) as TIEN_AN,") \
				_T(" SUM(ROUND(TIEN_THUOC_TG+TIEN_THUOC_TG_O)) as TIEN_THUOC_TG,") \
				_T(" SUM(ROUND(TIEN_VAT_TU_TG+TIEN_VAT_TU_TG_O)) as TIEN_VAT_TU_TG,") \
				_T(" SUM(ROUND(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI)) as TONG_THU,") \
				_T(" SUM(ROUND(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG)) as TONG_THU1") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
				_T("   Get_patientname(fi.hfe_docno) as HO_TEN,") \
				_T("   fi.hfe_docno as docno,") \
				_T("    CASE WHEN fi.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
				_T("    CASE WHEN fi.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
				_T("    CASE WHEN fi.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
				_T("    trunc(fi.hfe_date) as invoice_date,") \
				_T("    trunc(fi.hfe_date) as posted_date,") \
				_T("    khoa_thuchien as dept_id,") \
				_T("    hfe_quantity as SO_NGAY_DT,") \
				_T("     TIEN_KHAM,") \
				_T("     TIEN_GIUONG,") \
				_T("     TIEN_CLS,    ") \
				_T("     TIEN_PTTT,") \
				_T("     TIEN_THUOC_CH,") \
				_T("     TIEN_VAT_TU_CH,    ") \
				_T("     TIEN_THUOC_PM,") \
				_T("     TIEN_VAT_TU_PM,") \
				_T("     TIEN_MAU,    ") \
				_T("     THU_KHAC,") \
				_T("     THU_GOI,") \
				_T("     TIEN_AN,") \
				_T("     TIEN_THUOC_TG,") \
				_T("     TIEN_VAT_TU_TG,") \
				_T("     TIEN_THUOC_TG_O,") \
				_T("     TIEN_VAT_TU_TG_O,") \
				_T("     hfe_itemid") \
				_T("   FROM") \
				_T("     (") \
				_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
				//_T("    %s %s ") \//
				_T("   )tbl1") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (fi.hfe_docno=tbl1.hfe_docno AND fi.hfe_invoiceno=tbl1.hfe_invoiceno)") \
				_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
				_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
				_T("   WHERE fi.hfe_status='P' AND fi.hfe_locked='N' AND fi.hfe_posted='N' AND (TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O)>0 %s") \
				_T("   )") \
				_T(" GROUP BY ") \
				_T(" dept_id") \
				_T(" ORDER BY dept_id"),szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20,szWhere1);
	return szSQL;
}
CString CFMTotalIncome108Hospital::GetQueryString_v2()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20,szSQL21,szSQL22,szSQL23,szSQL24,szSQL25, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	CRecord rs(&pMF->m_db);	
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
	if (nCount < m_wndList.GetItemCount() && nCount > 0)
	{
		if (nCount <1000)
		{
			szWhere1.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND fac_cash_id in(%s)) "), szReceiptStr);
		}
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
					szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
					//_tprintf(_T("\nszIds: %s\n"), szIds);
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
			szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
			szWhere1.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND (%s))"), szIds);
		}
	}
	else
	{
		szWhere1.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl)"));
	}


	szWhere.Empty();
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND NVL(khoa_thuchien, 'X') = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}	
	//Case when like this very very...
	//Chi tiet theo bao cao tong hop khoa thuc hien//
	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("              ") \
				_T("       f.hfe_cost as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);

	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				/*_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND su_deptid       IS NOT NULL") \
				_T("         THEN Su_Deptid ELSE hpc_pdeptid") \
				_T("       END as khoa_thuchien,") \*/
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND HPC_PDEPTID       IS NOT NULL") \
				_T("         THEN HPC_PDEPTID ELSE Fl.Hfl_Deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
				//_T("     AND hpc_status <> 'T'") \//
				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"),szWhere);
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				//_T("         AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,") \//
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				//_T("     AND hpc_status <> 'T'") \//

				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				_T("		AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("        THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20', 'B1E00', 'C5') AS NVARCHAR2(3))") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"),szWhere);
	//7. Phi PTTT ne//
  if (m_bSOD)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				//_T("       CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_cost end as TIEN_PTTT,") \//
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
  }
	//8.Phi thuoc ngoai tru, check ma kho 14 = "Nhà thuốc số 1"  //
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID=14") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
	//8.1 Phi thuoc noi tru
	//8.Phi thuoc ngoai tru//
  szSQL9.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID<>14") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"),szWhere);
	//9.Phi khoa trang bi ngoai tru//
  szSQL10.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD', f.hfe_deptid, 'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID=15") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category NOT IN ('Y')"), szWhere);
//9.1 Phi vat tu noi tru
	szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD',f.hfe_deptid,'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID<>15") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
//10. Thuoc phong mo//
 szSQL12.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0		  as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
//11. Vat tu phong mo//
szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0		  as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"), szWhere);
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM','PĐD','HC')") \
				_T("     AND hfe_category    NOT IN ('Y')"), szWhere);
//13. Phi khac PTC nhap o tab phi khac//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND hfe_category       NOT IN ('Y')"), szWhere);
//14. Phi khac go so tien vao//
szSQL16.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"), szWhere);
//15. Phi an khoa dinh duong ne//
 szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3', 'AB') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//17.Phi tien vat tu trong goi//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CASE WHEN product_org_id = 'MA' and ho_deptid is not null THEN ho_deptid else hpo_deptid end as khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN hmsv_paraclinic ON (hpc_docno = f.hfe_docno AND HPO_REFERENCE_ID = hpc_orderid)") \
				_T("     WHERE 1              =1 AND coalesce(ho_deptid, hpc_deptid, cast('N' as nvarchar2(1)))<>'N' %s ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 szSQL20.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"), szWhere);
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL21.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' %s") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"), szWhere);

		//20. Phi thu goi, them vao ngay 13/11/2018//
szSQL22.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       f.hfe_cost as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_PACKAGE ivf") \
				_T(" ON (f.hfe_docno    =ivf.hfe_docno") \
				_T(" AND f.hfe_invoiceno=ivf.hfe_invoiceno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
 szSQL23.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P') AND F.hfe_status='R'") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND f.hfe_status    IN ('R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P')") \
				_T("     AND hpc_status is NULL") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);
//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//") \//
szSQL24.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1 %s") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND F.Hfe_Group IN ('B3100')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"), szWhere);

   szSQL.Format(_T("WITH tbl AS (%s)") \
		_T(" SELECT") \
		_T(" HO_TEN,") \
		_T(" docno,") \
		_T(" NGAY_VAO, ") \
		_T(" NGAY_RA,") \
		_T(" CHINDEX, ") \
		_T(" posted_date,") \
		_T(" dept_id,") \
		_T(" SUM(SO_NGAY_DT) as SO_NGAY_DT,") \
		_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
		_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
		_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
		_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
		_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
		_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
		_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
		_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
		_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
		_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
		_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
		_T(" SUM(THU_KHAC) as THU_KHAC,") \
		_T(" SUM(THU_GOI) as THU_GOI,") \
		_T(" SUM(TIEN_AN) as TIEN_AN,") \
		_T(" SUM(TIEN_THUOC_TG+TIEN_THUOC_TG_O) as TIEN_THUOC_TG,") \
		_T(" SUM(TIEN_VAT_TU_TG+TIEN_VAT_TU_TG_O) as TIEN_VAT_TU_TG,") \
		_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI) as TONG_THU,") \
		_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG) as TONG_THU1") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
		_T("   iv.hfe_docno as docno,") \
		_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
		_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
		_T("    CASE WHEN HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
		_T("    trunc(hfe_date) as invoice_date,") \
		_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
		_T("    khoa_thuchien as dept_id,") \
		_T("    hfe_quantity as SO_NGAY_DT,") \
		_T("     TIEN_KHAM,") \
		_T("     TIEN_GIUONG,") \
		_T("     TIEN_CLS,    ") \
		_T("     TIEN_PTTT,") \
		_T("     TIEN_THUOC_CH_NGOAITRU,") \
		_T("     TIEN_THUOC_CH_NOITRU,") \
		_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
		_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
		_T("     TIEN_THUOC_PM,") \
		_T("     TIEN_VAT_TU_PM,") \
		_T("     TIEN_MAU,    ") \
		_T("     THU_KHAC,") \
		_T("     THU_GOI,") \
		_T("     TIEN_AN,") \
		_T("     TIEN_THUOC_TG,") \
		_T("     TIEN_VAT_TU_TG,") \
		_T("     TIEN_THUOC_TG_O,") \
		_T("     TIEN_VAT_TU_TG_O,") \
		_T("     hfe_itemid") \
		_T("   FROM HMS_FEE_INVOICE_VIEW_SERVICE iv") \
		_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
		_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=iv.HFE_DOCNO)") \
		_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=iv.HFE_DOCNO)") \
		_T("   LEFT JOIN  (") \
		_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
		//_T("    %s %s ") \//
		_T("   )tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno and iv.hfe_docno = tbl1.hfe_docno)") \
		_T("   WHERE 1=1  %s") \
		_T("   )") \
		_T(" GROUP BY ") \
		_T(" HO_TEN, docno, NGAY_VAO, NGAY_RA,CHINDEX, posted_date,dept_id") \
		_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU ") \
		_T(" +TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI ") \
		_T(" +TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O)>0 ") \
		_T(" ORDER BY dept_id"),m_szCashQuery, szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7
		,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,
		szSQL19,szSQL20,szSQL21,szSQL22,szSQL23, szSQL24, szWhere1);
_tprintf(_T("%s"), szSQL);
	return szSQL;
}

CString CFMTotalIncome108Hospital::GetQueryString_check_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20,szSQL21,szSQL22,szSQL23,szSQL24,szSQL25, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	CRecord rs(&pMF->m_db);	
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
	//szReceiptStr2.Format(_T(" fac_cash_id IN (%s)"), szReceiptStr);

	m_szCashIDS = szReceiptStr;

	//if (nCount < m_wndList.GetItemCount() && nCount > 0)
	//{
	//	if (nCount <1000)
	//	{
	//		szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND fac_cash_id in(%s)) "), szReceiptStr);
	//	}
	//	else
	//	{
	//		CStringToken tok_id(szReceiptStr);
	//		int nCount = 0;
	//		long nTemp = 0;
	//		CString szIds, tmpStr;
	//		bool bBreak = false;
	//		szIds.Empty();
	//		tmpStr.Empty();
	//		for (int i = 0; i < tok_id.GetSize(); i++)
	//		{
	//			if (nCount > 999)
	//			{
	//				bBreak = true;
	//			}
	//			if (bBreak)
	//			{
	//				if (!szIds.IsEmpty())
	//				{
	//					szIds += _T(" OR ");
	//				}
	//				szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
	//				//_tprintf(_T("\nszIds: %s\n"), szIds);
	//				tmpStr.Empty();
	//				nCount = 0;
	//				bBreak = false;
	//			}
	//			if (!tmpStr.IsEmpty())
	//			{
	//				tmpStr += _T(",");
	//			}
	//			tok_id.GetAt(i, nTemp);
	//			tmpStr.AppendFormat(_T("%ld"), nTemp);
	//			nCount++;
	//		}
	//		if (!szIds.IsEmpty())
	//		{
	//			szIds += _T(" OR ");
	//		}
	//		szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
	//		szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND (%s))"), szIds);
	//	}
	//}
	//else
	//{
	//	szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl)"));
	//}
	if (nCount <1000)
	{
		szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND fac_cash_id in(%s)) "), szReceiptStr);
	}
	else
	{
		if (nCount < m_wndList.GetItemCount())
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
					szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
					//_tprintf(_T("\nszIds: %s\n"), szIds);
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
			szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
			szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND (%s))"), szIds);
		}
		else
		{
			szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl)"));
		}
	}
	
	//szWhere4 = m_szWhere;	
	//szWhere.AppendFormat(_T(" AND iv.hfe_cash_id in(select IDX from tmp_fa_cash_D10) "));
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	//Chi tiet theo bao cao tong hop khoa thuc hien//

	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("              ") \
				_T("       f.hfe_cost as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \


				_T("       0 as MIEN_GIAM,") \

				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND HPC_PDEPTID       IS NOT NULL") \
				_T("         THEN HPC_PDEPTID ELSE Fl.Hfl_Deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				//_T("         AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,") \//
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				
				_T("		AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("        THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20', 'B1E00', 'C5') AS NVARCHAR2(3))") \

				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//7. Phi PTTT ne//
  if (m_bSOD)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				//_T("       CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_cost end as TIEN_PTTT,") \//
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
  }
	//8.Phi thuoc ngoai tru, check ma kho 14 = "Nhà thuốc số 1"  //
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_fee_invoice i") \
				_T("     ON (f.hfe_invoiceno     = i.hfe_invoiceno") \
				_T("     AND f.hfe_docno         = i.hfe_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (i.hfe_class        ='E'") \
				_T("     OR (i.hfe_class         ='I'") \
				_T("     AND i.hfe_deptid        ='TTDTHM') )") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB','PĐD','HC')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//8.1 Phi thuoc noi tru
	//8.Phi thuoc ngoai tru//
  szSQL9.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_fee_invoice i") \
				_T("     ON (f.hfe_invoiceno     = i.hfe_invoiceno") \
				_T("     AND f.hfe_docno         = i.hfe_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND i.hfe_class        ='I'") \
				_T("     AND i.hfe_deptid        <> 'TTDTHM'") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')")
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
	//9.Phi khoa trang bi ngoai tru//
  szSQL10.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD', f.hfe_deptid, 'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_fee_invoice i") \
				_T("     ON (f.hfe_invoiceno     = i.hfe_invoiceno") \
				_T("     AND f.hfe_docno         = i.hfe_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R') AND i.hfe_class         ='E'") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category NOT IN ('Y')"));
//9.1 Phi vat tu noi tru
	szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD',f.hfe_deptid,'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_fee_invoice i") \
				_T("     ON (f.hfe_invoiceno     = i.hfe_invoiceno") \
				_T("     AND f.hfe_docno         = i.hfe_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R') AND i.hfe_class         ='I'") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
//10. Thuoc phong mo//
 szSQL12.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
//11. Vat tu phong mo//
szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM','PĐD','HC')") \
				_T("     AND hfe_category    NOT IN ('Y')"));
//13. Phi khac PTC nhap o tab phi khac//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
//14. Phi khac go so tien vao//
szSQL16.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1              =1 ") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"));
//15. Phi an khoa dinh duong ne//
 szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3', 'AB') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("      f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"));
//17.Phi tien vat tu trong goi//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CASE WHEN product_org_id = 'MA' and ho_deptid is not null THEN ho_deptid else hpo_deptid end as khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN hmsv_paraclinic ON (hpc_docno = f.hfe_docno AND HPO_REFERENCE_ID = hpc_orderid)") \
				_T("     WHERE 1              =1 AND coalesce(ho_deptid, hpc_deptid, cast('N' as nvarchar2(1)))<>'N' ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"));
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 szSQL20.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N'") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"));
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL21.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N'") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"));
//20. Phi thu goi, them vao ngay 13/11/2018//
szSQL22.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       f.hfe_cost as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_PACKAGE ivf") \
				_T(" ON (f.hfe_docno    =ivf.hfe_docno") \
				_T(" AND f.hfe_invoiceno=ivf.hfe_invoiceno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				/*_T(" AND f.Hfe_itemid NOT IN") \
				_T("   (SELECT Hfe_itemid") \
				_T("   FROM Hms_Fee_Discountline") \
				_T("   WHERE hfe_docno =ivf.hfe_docno") \
				_T("   AND Hfe_Refidx  =ivf.hfe_invoiceno") \
				_T("   )") \*/
				_T("     AND f.hfe_category  NOT IN ('Y')"));
 szSQL23.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P') AND F.hfe_status='R'") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P')") \
				_T("     AND hpc_status is NULL") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//") \//
szSQL24.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND F.Hfe_Group IN ('B3100')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));

		szSQL25.Format(_T("  UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T("       fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       0 AS hfe_quantity,") \
				_T("       fi.HFE_DEPTID as khoa_thuchien,") \
				_T("       NULL,") \
				_T("       0             AS TIEN_KHAM,") \
				_T("       0             AS TIEN_GIUONG,") \
				_T("       0             AS TIEN_CLS,") \
				_T("       0             AS TIEN_PTTT,") \
				_T("       0             AS TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0             AS TIEN_THUOC_CH_NOITRU,") \
				_T("       0             AS TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0             AS TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0             AS TIEN_THUOC_PM,") \
				_T("       0             AS TIEN_VAT_TU_PM,") \
				_T("       0             AS TIEN_MAU,") \
				_T("       0             AS THU_KHAC,") \
				_T("       0             AS THU_GOI,") \
				_T("       0             AS TIEN_AN,") \
				_T("       0             AS TIEN_THUOC_TG,") \
				_T("       0             AS TIEN_VAT_TU_TG,") \
				_T("       0             AS TIEN_THUOC_TG_O,") \
				_T("       0             AS TIEN_VAT_TU_TG_O,") \
				_T("       fi.hfe_freeamount             AS MIEN_GIAM,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1             =1") \
				_T("     AND fi.hfe_status  IN ('P','R')"));
	
	szSQL.Format(_T("WITH tbl") \
	_T("     AS (%s)") \
	_T(" SELECT") \
	_T(" docno, ") \
	_T(" HO_TEN,") \
	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN) as TONG_THU1") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT") \
	_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
	_T("   iv.hfe_docno as docno,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
	_T("    trunc(hfe_date) as invoice_date,") \
	_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
	_T("    khoa_thuchien as dept_id,") \
	_T("    hfe_quantity as SO_NGAY_DT,") \
	_T("     TIEN_KHAM,") \
	_T("     TIEN_GIUONG,") \
	_T("     TIEN_CLS,    ") \
	_T("     TIEN_PTTT,") \
	_T("     TIEN_THUOC_CH_NGOAITRU,") \
	_T("     TIEN_THUOC_CH_NOITRU,") \
	_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
	_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
	_T("     TIEN_THUOC_PM,") \
	_T("     TIEN_VAT_TU_PM,") \
	_T("     TIEN_MAU,    ") \
	_T("     THU_KHAC,") \
	_T("     THU_GOI,") \
	_T("     TIEN_AN,") \
	_T("     TIEN_THUOC_TG,") \
	_T("     TIEN_VAT_TU_TG,") \
	_T("     TIEN_THUOC_TG_O,") \
	_T("     TIEN_VAT_TU_TG_O,") \
	_T("     MIEN_GIAM,") \
	_T("     hfe_itemid") \
	_T("   FROM hms_fee_invoice_view_service iv") \
	_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
	_T("   INNER JOIN  (") \
	//_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \//
	_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
	//_T("    %s %s ") \//
	_T("   )tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno AND iv.hfe_docno = tbl1.hfe_docno )") \
	_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   WHERE 1=1 %s %s") \
	_T("   )") \
	_T(" GROUP BY ") \
	_T(" docno,HO_TEN") \
	_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN)>0") \
	_T(" ORDER BY docno"),
	m_szCashQuery, szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,
	szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20,szSQL21, szSQL22,szSQL23,szSQL24, szSQL25 ,szWhere1, szWhere);
	
	return szSQL;
}

CString CFMTotalIncome108Hospital::GetQueryString_v3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20,szSQL21,szSQL22,szSQL23,szSQL24,szSQL25, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	CRecord rs(&pMF->m_db);	
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
	//szReceiptStr2.Format(_T(" fac_cash_id IN (%s)"), szReceiptStr);

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount < m_wndList.GetItemCount() && nCount > 0)
	{
		if (nCount <1000)
		{
			szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND fac_cash_id in(%s)) "), szReceiptStr);
		}
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
					szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
					//_tprintf(_T("\nszIds: %s\n"), szIds);
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
			szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
			szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND (%s))"), szIds);
		}
	}
	else
	{
		szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl)"));
	}
	
	//szWhere4 = m_szWhere;	
	//szWhere.AppendFormat(_T(" AND iv.hfe_cash_id in(select IDX from tmp_fa_cash_D10) "));
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);

	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	//Chi tiet theo bao cao tong hop khoa thuc hien//

	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("              ") \
				_T("       f.hfe_cost as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \


				_T("       0 as MIEN_GIAM,") \

				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \

				/*_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND su_deptid       IS NOT NULL") \
				_T("         THEN Su_Deptid ELSE hpc_pdeptid") \
				_T("       END as khoa_thuchien,") \*/
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND HPC_PDEPTID       IS NOT NULL") \
				_T("         THEN HPC_PDEPTID ELSE Fl.Hfl_Deptid") \
				_T("       END khoa_thuchien,") \

				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
				//_T("     AND hpc_status <> 'T'") \//
				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				//_T("         AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,") \//
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				//_T("     AND hpc_status <> 'T'") \//

				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				_T("		AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("        THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20', 'B1E00', 'C5') AS NVARCHAR2(3))") \
				
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//7. Phi PTTT ne//
  if (m_nTYCIncome == 0)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				//_T("       CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_cost end as TIEN_PTTT,") \//
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
  }
	//8.Phi thuoc ngoai tru, check ma kho 14 = "Nhà thuốc số 1"  //
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_fee_invoice i") \
				_T("     ON (f.hfe_invoiceno     = i.hfe_invoiceno") \
				_T("     AND f.hfe_docno         = i.hfe_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (i.hfe_class        ='E'") \
				_T("     OR (i.hfe_class         ='I'") \
				_T("     AND i.hfe_deptid        ='TTDTHM') )") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//8.1 Phi thuoc noi tru
	//8.Phi thuoc ngoai tru//
  szSQL9.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_fee_invoice i") \
				_T("     ON (f.hfe_invoiceno     = i.hfe_invoiceno") \
				_T("     AND f.hfe_docno         = i.hfe_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND i.hfe_class        ='I'") \
				_T("     AND i.hfe_deptid        <> 'TTDTHM'") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
	//9.Phi khoa trang bi ngoai tru//
  szSQL10.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD', f.hfe_deptid, 'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_fee_invoice i") \
				_T("     ON (f.hfe_invoiceno     = i.hfe_invoiceno") \
				_T("     AND f.hfe_docno         = i.hfe_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R') AND i.hfe_class         ='E'") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category NOT IN ('Y')"));
//9.1 Phi vat tu noi tru
	szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD',f.hfe_deptid,'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_fee_invoice i") \
				_T("     ON (f.hfe_invoiceno     = i.hfe_invoiceno") \
				_T("     AND f.hfe_docno         = i.hfe_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R') AND i.hfe_class         ='I'") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
//10. Thuoc phong mo//
 szSQL12.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
//11. Vat tu phong mo//
szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM','PĐD','HC')") \
				_T("     AND hfe_category    NOT IN ('Y')"));
//13. Phi khac PTC nhap o tab phi khac//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
//14. Phi khac go so tien vao//
szSQL16.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1              =1 ") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"));
//15. Phi an khoa dinh duong ne//
 szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3', 'AB') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("      f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"));
//17.Phi tien vat tu trong goi//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CASE WHEN product_org_id = 'MA' and ho_deptid is not null THEN ho_deptid else hpo_deptid end as khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN hmsv_paraclinic ON (hpc_docno = f.hfe_docno AND HPO_REFERENCE_ID = hpc_orderid)") \
				_T("     WHERE 1              =1 AND coalesce(ho_deptid, hpc_deptid, cast('N' as nvarchar2(1)))<>'N' ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"));
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 szSQL20.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N'") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"));
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL21.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N'") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"));
//20. Phi thu goi, them vao ngay 13/11/2018//
szSQL22.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       f.hfe_cost as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_PACKAGE ivf") \
				_T(" ON (f.hfe_docno    =ivf.hfe_docno") \
				_T(" AND f.hfe_invoiceno=ivf.hfe_invoiceno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				/*_T(" AND f.Hfe_itemid NOT IN") \
				_T("   (SELECT Hfe_itemid") \
				_T("   FROM Hms_Fee_Discountline") \
				_T("   WHERE hfe_docno =ivf.hfe_docno") \
				_T("   AND Hfe_Refidx  =ivf.hfe_invoiceno") \
				_T("   )") \*/
				_T("     AND f.hfe_category  NOT IN ('Y')"));
 szSQL23.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P') AND F.hfe_status='R'") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P')") \
				_T("     AND hpc_status is NULL") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//") \//
szSQL24.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND F.Hfe_Group IN ('B3100')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));

		szSQL25.Format(_T("  UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T("       fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       0 AS hfe_quantity,") \
				_T("       fi.HFE_DEPTID as khoa_thuchien,") \
				_T("       NULL,") \
				_T("       0             AS TIEN_KHAM,") \
				_T("       0             AS TIEN_GIUONG,") \
				_T("       0             AS TIEN_CLS,") \
				_T("       0             AS TIEN_PTTT,") \
				_T("       0             AS TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0             AS TIEN_THUOC_CH_NOITRU,") \
				_T("       0             AS TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0             AS TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0             AS TIEN_THUOC_PM,") \
				_T("       0             AS TIEN_VAT_TU_PM,") \
				_T("       0             AS TIEN_MAU,") \
				_T("       0             AS THU_KHAC,") \
				_T("       0             AS THU_GOI,") \
				_T("       0             AS TIEN_AN,") \
				_T("       0             AS TIEN_THUOC_TG,") \
				_T("       0             AS TIEN_VAT_TU_TG,") \
				_T("       0             AS TIEN_THUOC_TG_O,") \
				_T("       0             AS TIEN_VAT_TU_TG_O,") \
				_T("       fi.hfe_freeamount             AS MIEN_GIAM,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1             =1") \
				_T("     AND fi.hfe_status  IN ('P','R')"));

	szSQL.Format(_T("WITH tbl") \
	_T("     AS (%s)") \
	_T(" SELECT") \
	_T(" dept_id,") \
	_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
	_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
	_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
	_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
	_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
	_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
	_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
	_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
	_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
	_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
	_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
	_T(" SUM(THU_KHAC) as THU_KHAC,") \
	_T(" SUM(THU_GOI) as THU_GOI,") \
	_T(" SUM(TIEN_AN) as TIEN_AN,") \
	_T(" SUM(TIEN_THUOC_TG+TIEN_THUOC_TG_O) as TIEN_THUOC_TG,") \
	_T(" SUM(TIEN_VAT_TU_TG+TIEN_VAT_TU_TG_O) as TIEN_VAT_TU_TG,") \

	_T(" SUM(MIEN_GIAM) as TIEN_MIEN_GIAM,") \

	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI) as TONG_THU,") \
	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O) as TONG_THU1") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT") \
	_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
	_T("   iv.hfe_docno as docno,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
	_T("    trunc(hfe_date) as invoice_date,") \
	_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
	_T("    khoa_thuchien as dept_id,") \
	_T("    hfe_quantity as SO_NGAY_DT,") \
	_T("     TIEN_KHAM,") \
	_T("     TIEN_GIUONG,") \
	_T("     TIEN_CLS,    ") \
	_T("     TIEN_PTTT,") \
	_T("     TIEN_THUOC_CH_NGOAITRU,") \
	_T("     TIEN_THUOC_CH_NOITRU,") \
	_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
	_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
	_T("     TIEN_THUOC_PM,") \
	_T("     TIEN_VAT_TU_PM,") \
	_T("     TIEN_MAU,    ") \
	_T("     THU_KHAC,") \
	_T("     THU_GOI,") \
	_T("     TIEN_AN,") \
	_T("     TIEN_THUOC_TG,") \
	_T("     TIEN_VAT_TU_TG,") \
	_T("     TIEN_THUOC_TG_O,") \
	_T("     TIEN_VAT_TU_TG_O,") \
	_T("     MIEN_GIAM,") \
	_T("     hfe_itemid") \
	_T("   FROM hms_fee_invoice_view_service iv") \
	_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
	_T("   LEFT JOIN  (") \
	//_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \//
	_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
	//_T("    %s %s ") \//
	_T("   )tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno AND iv.hfe_docno = tbl1.hfe_docno )") \
	_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   WHERE 1=1 %s %s") \
	_T("   )") \
	_T(" GROUP BY ") \
	_T(" dept_id") \
	_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+TIEN_AN)>0") \
	_T(" ORDER BY dept_id"),
	m_szCashQuery, szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,
	szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20,szSQL21, szSQL22,szSQL23,szSQL24, szSQL25 ,szWhere1, szWhere);
	//szSQL.Format(_T("WITH tbl") \
	//_T("     AS (%s)") \
	//_T(" SELECT") \
	//_T(" dept_id,") \
	//_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
	//_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
	//_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
	//_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
	//_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
	//_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
	//_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
	//_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
	//_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
	//_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
	//_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
	//_T(" SUM(THU_KHAC) as THU_KHAC,") \
	//_T(" SUM(THU_GOI) as THU_GOI,") \
	//_T(" SUM(TIEN_AN) as TIEN_AN,") \
	//_T(" SUM(TIEN_THUOC_TG) as TIEN_THUOC_TG,") \
	//_T(" SUM(TIEN_VAT_TU_TG) as TIEN_VAT_TU_TG,") \
	//_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI) as TONG_THU,") \
	//_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG) as TONG_THU1") \
	//_T(" FROM") \
	//_T(" (") \
	//_T(" SELECT") \
	//_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
	//_T("   iv.hfe_docno as docno,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
	//_T("    trunc(hfe_date) as invoice_date,") \
	//_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
	//_T("    khoa_thuchien as dept_id,") \
	//_T("    hfe_quantity as SO_NGAY_DT,") \
	//_T("     TIEN_KHAM,") \
	//_T("     TIEN_GIUONG,") \
	//_T("     TIEN_CLS,    ") \
	//_T("     TIEN_PTTT,") \
	//_T("     TIEN_THUOC_CH_NGOAITRU,") \
	//_T("     TIEN_THUOC_CH_NOITRU,") \
	//_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
	//_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
	//_T("     TIEN_THUOC_PM,") \
	//_T("     TIEN_VAT_TU_PM,") \
	//_T("     TIEN_MAU,    ") \
	//_T("     THU_KHAC,") \
	//_T("     THU_GOI,") \
	//_T("     TIEN_AN,") \
	//_T("     TIEN_THUOC_TG,") \
	//_T("     TIEN_VAT_TU_TG,") \
	///*_T("     TIEN_THUOC_TG_O,") \
	//_T("     TIEN_VAT_TU_TG_O,") \*/
	//_T("     hfe_itemid") \
	//_T("   FROM hms_fee_invoice_view_service iv") \
	//_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
	//_T("   INNER JOIN  (") \
	////_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \//
	//_T("    %s %s %s %s %s") \
	////_T("    %s %s ") \//
	//_T("   )tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno AND iv.hfe_docno = tbl1.hfe_docno )") \
	//_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	//_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
	//_T("   WHERE 1=1 %s %s") \
	//_T("   )") \
	//_T(" GROUP BY ") \
	//_T(" dept_id") \
	//_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG)>0") \
	//_T(" ORDER BY dept_id"),
	//m_szCashQuery, szSQL1,szSQL10,
	//szSQL11,szSQL13,szSQL19 ,szWhere1, szWhere);
	return szSQL;
}
void CFMTotalIncome108Hospital::OnExportTotalListEX()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH_TH_DOCNO.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	szSQL = GetQueryString_v5();
	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("HO_TEN"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NGAY_VAO"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NGAY_RA"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("TIEN_KHAM"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_GIUONG"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_CLS"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_PTTT"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH_NGOAITRU"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH_NOITRU"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH_NGOAITRU"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH_NOITRU"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_PM"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_PM"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_MAU"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_KHAC"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_GOI"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TONG_THU"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_AN"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_THUOC_TG"), nTemp);
		nGroupTotal[21] += nTemp;
		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_VAT_TU_TG"), nTemp);
		nGroupTotal[22] += nTemp;
		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TONG_THU1"), nTemp);
		nGroupTotal[23] += nTemp;
		xls.SetCellText(nCol+23, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_MIEN_GIAM"), nTemp);
		nGroupTotal[24] += nTemp;
		xls.SetCellText(nCol+24, nRow, double2str(nTemp), FMT_NUMBER1);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[23] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 6; i < 26; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH_TH_DOCNO2.xls"));
}
CString CFMTotalIncome108Hospital::GetQueryString_v5()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20,szSQL21,szSQL22,szSQL23,szSQL24,szSQL25, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	CRecord rs(&pMF->m_db);	
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
	//szReceiptStr2.Format(_T(" fac_cash_id IN (%s)"), szReceiptStr);

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount < m_wndList.GetItemCount() && nCount > 0)
	{
		if (nCount <1000)
		{
			szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND fac_cash_id in(%s)) "), szReceiptStr);
		}
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
					szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
					//_tprintf(_T("\nszIds: %s\n"), szIds);
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
			szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
			szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND (%s))"), szIds);
		}
	}
	else
	{
		szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl)"));
	}
	
	//szWhere4 = m_szWhere;	
	//szWhere.AppendFormat(_T(" AND iv.hfe_cash_id in(select IDX from tmp_fa_cash_D10) "));
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	//Chi tiet theo bao cao tong hop khoa thuc hien//

	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("              ") \
				_T("       f.hfe_cost as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \


				_T("       0 as MIEN_GIAM,") \

				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				/*_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
				_T("         AND su_deptid       IS NOT NULL") \
				_T("         THEN Su_Deptid ELSE hpc_pdeptid") \
				_T("       END as khoa_thuchien,") \*/
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND HPC_PDEPTID       IS NOT NULL") \
				_T("         THEN HPC_PDEPTID ELSE Fl.Hfl_Deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
				//_T("     AND hpc_status <> 'T'") \//
				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				//_T("         AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END khoa_thuchien,") \//
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				//_T("     AND hpc_status <> 'T'") \//

				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				_T("		AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("        THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20', 'B1E00', 'C5') AS NVARCHAR2(3))") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//7. Phi PTTT ne//
  if (m_bSOD)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				//_T("       CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_cost end as TIEN_PTTT,") \//
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
  }
	//8.Phi thuoc ngoai tru, check ma kho 14 = "Nhà thuốc số 1"  //
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID=14") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//8.1 Phi thuoc noi tru
	//8.Phi thuoc ngoai tru//
  szSQL9.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID<>14") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
	//9.Phi khoa trang bi ngoai tru//
  szSQL10.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD', f.hfe_deptid, 'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID=15") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category NOT IN ('Y')"));
//9.1 Phi vat tu noi tru
	szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD',f.hfe_deptid,'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R') AND HPO_STORAGE_ID<>15") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
//10. Thuoc phong mo//
 szSQL12.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
//11. Vat tu phong mo//
szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM','PĐD','HC')") \
				_T("     AND hfe_category    NOT IN ('Y')"));
//13. Phi khac PTC nhap o tab phi khac//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
//14. Phi khac go so tien vao//
szSQL16.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1              =1 ") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"));
//15. Phi an khoa dinh duong ne//
 szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3', 'AB') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("      f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"));
//17.Phi tien vat tu trong goi//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CASE WHEN product_org_id = 'MA' and ho_deptid is not null THEN ho_deptid else hpo_deptid end as khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN hmsv_paraclinic ON (hpc_docno = f.hfe_docno AND HPO_REFERENCE_ID = hpc_orderid)") \
				_T("     WHERE 1              =1 AND coalesce(ho_deptid, hpc_deptid, cast('N' as nvarchar2(1)))<>'N' ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"));
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 szSQL20.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N'") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"));
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL21.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N'") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"));
//20. Phi thu goi, them vao ngay 13/11/2018//
szSQL22.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       f.hfe_cost as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_PACKAGE ivf") \
				_T(" ON (f.hfe_docno    =ivf.hfe_docno") \
				_T(" AND f.hfe_invoiceno=ivf.hfe_invoiceno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				/*_T(" AND f.Hfe_itemid NOT IN") \
				_T("   (SELECT Hfe_itemid") \
				_T("   FROM Hms_Fee_Discountline") \
				_T("   WHERE hfe_docno =ivf.hfe_docno") \
				_T("   AND Hfe_Refidx  =ivf.hfe_invoiceno") \
				_T("   )") \*/
				_T("     AND f.hfe_category  NOT IN ('Y')"));
 szSQL23.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P') AND F.hfe_status='R'") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P')") \
				_T("     AND hpc_status is NULL") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//") \//
szSQL24.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND F.Hfe_Group IN ('B3100')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));

		szSQL25.Format(_T("  UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T("       fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       0 AS hfe_quantity,") \
				_T("       fi.HFE_DEPTID as khoa_thuchien,") \
				_T("       NULL,") \
				_T("       0             AS TIEN_KHAM,") \
				_T("       0             AS TIEN_GIUONG,") \
				_T("       0             AS TIEN_CLS,") \
				_T("       0             AS TIEN_PTTT,") \
				_T("       0             AS TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0             AS TIEN_THUOC_CH_NOITRU,") \
				_T("       0             AS TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0             AS TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0             AS TIEN_THUOC_PM,") \
				_T("       0             AS TIEN_VAT_TU_PM,") \
				_T("       0             AS TIEN_MAU,") \
				_T("       0             AS THU_KHAC,") \
				_T("       0             AS THU_GOI,") \
				_T("       0             AS TIEN_AN,") \
				_T("       0             AS TIEN_THUOC_TG,") \
				_T("       0             AS TIEN_VAT_TU_TG,") \
				_T("       0             AS TIEN_THUOC_TG_O,") \
				_T("       0             AS TIEN_VAT_TU_TG_O,") \
				_T("       fi.hfe_freeamount             AS MIEN_GIAM,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1             =1") \
				_T("     AND fi.hfe_status  IN ('P','R')"));

	/*_msg(_T("%s"), szSQL1);
	_msg(_T("%s"), szSQL2);	
	_msg(_T("%s"), szSQL3);	
	_msg(_T("%s"), szSQL4);	
	_msg(_T("%s"), szSQL5);	
	_msg(_T("%s"), szSQL6);	
	_msg(_T("%s"), szSQL7);	
	_msg(_T("%s"), szSQL8);	
	_msg(_T("%s"), szSQL9);	
	_msg(_T("%s"), szSQL10);	
	_msg(_T("%s"), szSQL11);
	_msg(_T("%s"), szSQL12);
	_msg(_T("%s"), szSQL13);
	_msg(_T("%s"), szSQL14);
	_msg(_T("%s"), szSQL15);
	_msg(_T("%s"), szSQL16);
	_msg(_T("%s"), szSQL17);
	_msg(_T("%s"), szSQL18);
	_msg(_T("%s"), szSQL19);
	_msg(_T("%s"), szWhere1);*/
	/*_msg(_T("%s"), szSQL1);
	_msg(_T("%s"), szSQL);*/
	//_msg(_T("%s"), szSQL20);
	szSQL.Format(_T("WITH tbl") \
	_T("     AS (%s)") \
	_T(" SELECT") \
	_T(" HO_TEN, docno, dept_id, to_char(NGAY_VAO, 'DD/MM/YYYY') as NGAY_VAO, to_char(NGAY_RA, 'DD/MM/YYYY') as NGAY_RA,") \
	_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
	_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
	_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
	_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
	_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
	_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
	_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
	_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
	_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
	_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
	_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
	_T(" SUM(THU_KHAC) as THU_KHAC,") \
	_T(" SUM(THU_GOI) as THU_GOI,") \
	_T(" SUM(TIEN_AN) as TIEN_AN,") \
	_T(" SUM(TIEN_THUOC_TG+TIEN_THUOC_TG_O) as TIEN_THUOC_TG,") \
	_T(" SUM(TIEN_VAT_TU_TG+TIEN_VAT_TU_TG_O) as TIEN_VAT_TU_TG,") \

	_T(" SUM(MIEN_GIAM) as TIEN_MIEN_GIAM,") \

	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI) as TONG_THU,") \
	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O) as TONG_THU1") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT") \
	_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
	_T("   iv.hfe_docno as docno,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
	_T("    trunc(hfe_date) as invoice_date,") \
	_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
	_T("    HFE_DEPTID as dept_id,") \
	_T("    hfe_quantity as SO_NGAY_DT,") \
	_T("     TIEN_KHAM,") \
	_T("     TIEN_GIUONG,") \
	_T("     TIEN_CLS,    ") \
	_T("     TIEN_PTTT,") \
	_T("     TIEN_THUOC_CH_NGOAITRU,") \
	_T("     TIEN_THUOC_CH_NOITRU,") \
	_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
	_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
	_T("     TIEN_THUOC_PM,") \
	_T("     TIEN_VAT_TU_PM,") \
	_T("     TIEN_MAU,    ") \
	_T("     THU_KHAC,") \
	_T("     THU_GOI,") \
	_T("     TIEN_AN,") \
	_T("     TIEN_THUOC_TG,") \
	_T("     TIEN_VAT_TU_TG,") \
	_T("     TIEN_THUOC_TG_O,") \
	_T("     TIEN_VAT_TU_TG_O,") \
	_T("     MIEN_GIAM,") \
	_T("     hfe_itemid") \
	_T("   FROM hms_fee_invoice_view_service iv") \
	_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
	_T("   LEFT JOIN  (") \
	//_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \//
	_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
	//_T("    %s %s ") \//
	_T("   )tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno AND iv.hfe_docno = tbl1.hfe_docno )") \
	_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   WHERE 1=1 %s %s") \
	_T("   )") \
	_T(" GROUP BY ") \
	_T(" dept_id, HO_TEN, docno, NGAY_VAO, NGAY_RA") \
	_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG)>0") \
	_T(" ORDER BY dept_id"),
	m_szCashQuery, szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,
	szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20,szSQL21, szSQL22,szSQL23,szSQL24, szSQL25 ,szWhere1, szWhere);
	//szSQL.Format(_T("WITH tbl") \
	//_T("     AS (%s)") \
	//_T(" SELECT") \
	//_T(" dept_id,") \
	//_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
	//_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
	//_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
	//_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
	//_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
	//_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
	//_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
	//_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
	//_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
	//_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
	//_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
	//_T(" SUM(THU_KHAC) as THU_KHAC,") \
	//_T(" SUM(THU_GOI) as THU_GOI,") \
	//_T(" SUM(TIEN_AN) as TIEN_AN,") \
	//_T(" SUM(TIEN_THUOC_TG) as TIEN_THUOC_TG,") \
	//_T(" SUM(TIEN_VAT_TU_TG) as TIEN_VAT_TU_TG,") \
	//_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI) as TONG_THU,") \
	//_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG) as TONG_THU1") \
	//_T(" FROM") \
	//_T(" (") \
	//_T(" SELECT") \
	//_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
	//_T("   iv.hfe_docno as docno,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
	//_T("    trunc(hfe_date) as invoice_date,") \
	//_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
	//_T("    khoa_thuchien as dept_id,") \
	//_T("    hfe_quantity as SO_NGAY_DT,") \
	//_T("     TIEN_KHAM,") \
	//_T("     TIEN_GIUONG,") \
	//_T("     TIEN_CLS,    ") \
	//_T("     TIEN_PTTT,") \
	//_T("     TIEN_THUOC_CH_NGOAITRU,") \
	//_T("     TIEN_THUOC_CH_NOITRU,") \
	//_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
	//_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
	//_T("     TIEN_THUOC_PM,") \
	//_T("     TIEN_VAT_TU_PM,") \
	//_T("     TIEN_MAU,    ") \
	//_T("     THU_KHAC,") \
	//_T("     THU_GOI,") \
	//_T("     TIEN_AN,") \
	//_T("     TIEN_THUOC_TG,") \
	//_T("     TIEN_VAT_TU_TG,") \
	///*_T("     TIEN_THUOC_TG_O,") \
	//_T("     TIEN_VAT_TU_TG_O,") \*/
	//_T("     hfe_itemid") \
	//_T("   FROM hms_fee_invoice_view_service iv") \
	//_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
	//_T("   INNER JOIN  (") \
	////_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \//
	//_T("    %s %s %s %s %s") \
	////_T("    %s %s ") \//
	//_T("   )tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno AND iv.hfe_docno = tbl1.hfe_docno )") \
	//_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	//_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
	//_T("   WHERE 1=1 %s %s") \
	//_T("   )") \
	//_T(" GROUP BY ") \
	//_T(" dept_id") \
	//_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG)>0") \
	//_T(" ORDER BY dept_id"),
	//m_szCashQuery, szSQL1,szSQL10,
	//szSQL11,szSQL13,szSQL19 ,szWhere1, szWhere);
	return szSQL;
}
void CFMTotalIncome108Hospital::OnExportTotalList5()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH_TH_V5.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	szSQL = GetQueryString_v55();
	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	//AfxMessageBox(szSQL);
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("TIEN_KHAM"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_GIUONG"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_CLS"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_PTTT"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);
		//Thuốc dịch vụ

		rs.GetValue(_T("THUOC_KHO_DICHVU"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);
		//Thuốc ngoại trú

		rs.GetValue(_T("TIEN_THUOC_CH_NGOAITRU"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);
		//Thuốc nội trú

		rs.GetValue(_T("TIEN_THUOC_CH_NOITRU"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		//Vật tư dịch vụ
		rs.GetValue(_T("VATTU_KHO_DICHVU"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);
		//Vật tư ngoại trú
		rs.GetValue(_T("TIEN_VAT_TU_CH_NGOAITRU"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);
		//Vật tư nội trú
		rs.GetValue(_T("TIEN_VAT_TU_CH_NOITRU"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_PM"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_PM"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_MAU"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_KHAC"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_GOI"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TONG_THU"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_AN"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_THUOC_TG"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TIEN_VAT_TU_TG"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TONG_THU1"), nTemp);
		nGroupTotal[21] += nTemp;
		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_MIEN_GIAM"), nTemp);
		nGroupTotal[22] += nTemp;
		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[21] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_BH_TH_V52.xls"));
}
CString CFMTotalIncome108Hospital::GetQueryString_v55()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20,szSQL21,szSQL22,szSQL23,szSQL24,szSQL25, szSQL26, szSQL27, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	int nCount = 0;
	CRecord rs(&pMF->m_db);	
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
	if (nCount < m_wndList.GetItemCount() && nCount > 0)
	{
		if (nCount <1000)
		{
			szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND fac_cash_id in(%s)) "), szReceiptStr);
		}
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
					szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
					//_tprintf(_T("\nszIds: %s\n"), szIds);
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
			szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
			szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl where 1=1 AND (%s))"), szIds);
		}
	}
	else
	{
		szWhere.Format(_T(" AND fac_cash_id IN (select fac_cash_id from tbl)"));
	}
	
	//szWhere4 = m_szWhere;	
	//szWhere.AppendFormat(_T(" AND iv.hfe_cash_id in(select IDX from tmp_fa_cash_D10) "));
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname 

		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	//Chi tiet theo bao cao tong hop khoa thuc hien//

	//1. Tien kham ne//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN he_roomid IN ( 50, 54 )") \
				_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
				_T("         ELSE f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("              ") \
				_T("       f.hfe_cost as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_exam ex") \
				_T("     ON (f.hfe_docno   = ex.he_docno") \
				_T("     AND f.hfe_orderid = ex.he_receptidx)") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_group      ='D0000'") \
				_T("     AND f.hfe_itemid <> 'D0000006'") \
				_T("     AND f.hfe_cost       >0") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//2. Tien giuong ne//
	szSQL2.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       F.Hfe_Quantity,") \
				_T("       CASE") \
				_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
				_T("         THEN f.hfe_deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       f.hfe_cost as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T(" f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//3. Tien can lam sang cho cac khoa thuc hien//
  szSQL3.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type     IN ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND HPC_PDEPTID       IS NOT NULL") \
				_T("         THEN HPC_PDEPTID ELSE Fl.Hfl_Deptid") \
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN HMSV_PDEPT_PARACLINICDV") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND su_deptid       IS NOT NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//4. Cacs khoa CLS khoi hinh anh chua thuc hien//
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL4.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Pacsorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
				//_T("     AND hpc_status <> 'T'") \//
				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//5. Cac khoa CLS khoi xet nghiem chua thuc hien
	//Update 11/04/2017, neu khoa khong nhap ket qua thi lay trong danh muc phi ra//
	szSQL5.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P','T')") \
				_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
				_T("     LEFT JOIN Hms_Testorder") \
				_T("     ON ( f.hfe_docno  = hpc_docno") \
				_T("     AND f.hfe_orderid = hpc_orderid") \
				_T("     AND f.hfe_type   IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('T','P')") \
				_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				//_T("     AND hpc_status <> 'T'") \//

				_T("     AND (hpc_status       <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//6. Chi dinh khoa thuc hien C16, A20//
  szSQL6.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type IN ('P','T')") \
				_T("		AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("        THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20', 'B1E00', 'C5') AS NVARCHAR2(3))") \
				
				_T("       END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     WHERE 1              =1") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
				_T("     AND f.hfe_type <> 'X'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//7. Phi PTTT ne//
  if (m_bSOD)
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
  }
  else
  {
  szSQL7.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
				_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
				_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       f.hfe_cost as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				//_T("       CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_cost end as TIEN_PTTT,") \//
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
				_T("     LEFT JOIN hms_operation") \
				_T("     ON ( f.hfe_docno = ho_docno") \
				_T("     AND hfe_orderid  = ho_idx") \
				_T("     AND f.hfe_type   = 'O')") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_type       ='O'") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
  }
	//8.Phi thuoc ngoai tru, check ma kho 14 = "Nhà thuốc số 1"  //
  szSQL8.Format(_T("     UNION ALL     ") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_class = 'E' ") \
				_T("     AND hpo_storage_id NOT IN (14) ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
	//8.1 Phi thuoc noi tru
	//8.Phi thuoc ngoai tru//
  szSQL9.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_class <> 'E' ") \
				_T("     AND hpo_storage_id NOT IN (14) ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND product_org_id NOT IN ('MA','BB', 'PĐD','HC')") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
	//9.Phi khoa trang bi ngoai tru//
  szSQL10.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD', f.hfe_deptid, 'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_class = 'E' ") \
				_T("     AND hpo_storage_id NOT IN (15) ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND hfe_category NOT IN ('Y')"));
//9.1 Phi vat tu noi tru
	szSQL11.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("  f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CAST(DECODE(product_org_id, 'MA', f.hfe_deptid, 'PĐD',f.hfe_deptid,'HC', f.hfe_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_class <> 'E' ") \
				_T("     AND hpo_storage_id NOT IN (15) ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND f.hfe_deptid <> 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
//10. Thuoc phong mo//
 szSQL12.Format(_T("     UNION ALL") \
				_T(" SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       f.hfe_cost AS TIEN_THUOC_PM,") \
				_T("       0          AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
//11. Vat tu phong mo//
szSQL13.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0          AS TIEN_KHAM,") \
				_T("       0          AS TIEN_GIUONG,") \
				_T("       0          AS TIEN_CLS,") \
				_T("       0          AS TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0          AS TIEN_THUOC_PM,") \
				_T("       f.hfe_cost AS TIEN_VAT_TU_PM,") \
				_T("       0          AS TIEN_MAU,") \
				_T("       0          AS THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0          AS TIEN_AN,") \
				_T("       0		  as TIEN_THUOC_TG,") \
				_T("       0		  as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status       IN ('P','R')") \
				_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB','PĐD','HC')") \
				_T("     AND f.hfe_deptid = 'B5'") \
				_T("     AND (hfe_category NOT IN ('Y') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))"));
	//12.Phi mau tach rieng ra cho khoa C16//
 szSQL14.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       f.hfe_cost as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','PM','PĐD','HC')") \
				_T("     AND hfe_category    NOT IN ('Y')"));
//13. Phi khac PTC nhap o tab phi khac//
 szSQL15.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       f.hfe_cost as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
//14. Phi khac go so tien vao//
szSQL16.Format(_T("     UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T(" fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN fi.hfe_type  IN ('O','S')") \
				_T("         AND fi.Hfe_Serialno='PC'") \
				_T("         THEN fi.HFE_DEPTID") \
				_T("       END khoa_thuchien,") \
				_T("       NULL,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,      ") \
				_T("       fi.hfe_amount as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1              =1 ") \
				_T("     AND fi.hfe_status   IN ('P','R')") \
				_T("     AND fi.hfe_type     IN ('O','S')") \
				_T("     AND fi.Hfe_Serialno  ='PC'"));
//15. Phi an khoa dinh duong ne//
 szSQL17.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3', 'AB') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
				_T("      f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       f.hfe_cost as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND F.Hfe_Group     IN ('FF000')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
    //Update ngay 03/06/2017//
	// Them vao 2 cot tinh tien thuoc trong goi & tien vat tu trong goi//
	//16. Phi tien thuoc trong goi//
 szSQL18.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       f.hfe_cost as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N' ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"));
//17.Phi tien vat tu trong goi//
szSQL19.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				//_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \//
				_T("       CASE WHEN product_org_id = 'MA' and ho_deptid is not null THEN ho_deptid else hpo_deptid end as khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       f.hfe_cost as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid AND f.hfe_docno = hpo_docno)") \
				_T("     LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     LEFT JOIN hmsv_paraclinic ON (hpc_docno = f.hfe_docno AND HPO_REFERENCE_ID = hpc_orderid)") \
				_T("     WHERE 1              =1 AND coalesce(ho_deptid, hpc_deptid, cast('N' as nvarchar2(1)))<>'N' ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"));
//18.Phi thuoc trong goi, dung cho truong hop thu phi PTTT truoc sau do moi nhap thuoc trong goi o phong kham//
 szSQL20.Format(_T("     UNION ALL     ") \
				_T("       SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       hfe_cost as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N'") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('MA','BB')") \
				_T("     AND hfe_category ='Y'"));
//19.Phi tien vat tu trong goi, dung cho truong hop thu phi PTTT truoc nhap vat tu sau//
szSQL21.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("	   f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       hfe_cost as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN M_PRODUCTITEM_VIEW_VP") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP") \
				_T("     ON (hpo_orderid = f.hfe_orderid)") \
				_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
				_T("     WHERE 1              =1 AND NVL(ho_deptid,NULL)<>'N'") \
				_T("     AND f.hfe_status    IN ('O')") \
				_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
				_T("     AND product_org_id NOT IN ('PM','BB')") \
				_T("     AND hfe_category     ='Y'"));
//20. Phi thu goi, them vao ngay 13/11/2018//
szSQL22.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       0 as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       f.hfe_cost as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_PACKAGE ivf") \
				_T(" ON (f.hfe_docno    =ivf.hfe_docno") \
				_T(" AND f.hfe_invoiceno=ivf.hfe_invoiceno)") \
				_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('P','R')") \
				_T("     AND f.hfe_class     IN ('X','I','E')") \
				_T("     AND f.hfe_type       ='X'") \
				_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
				/*_T(" AND f.Hfe_itemid NOT IN") \
				_T("   (SELECT Hfe_itemid") \
				_T("   FROM Hms_Fee_Discountline") \
				_T("   WHERE hfe_docno =ivf.hfe_docno") \
				_T("   AND Hfe_Refidx  =ivf.hfe_invoiceno") \
				_T("   )") \*/
				_T("     AND f.hfe_category  NOT IN ('Y')"));
 szSQL23.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE") \
				_T("         WHEN f.hfe_type in ('P') AND F.hfe_status='R'") \
				_T("         AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1 ") \
				_T("     AND f.hfe_status    IN ('R')") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P')") \
				_T("     AND hpc_status is NULL") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));
//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//") \//
szSQL24.Format(_T("     UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       ") \
				_T("       0 as hfe_quantity,") \
				_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,      ") \
				_T("       f.hfe_itemid,") \
				_T("       ") \
				_T("       0 as TIEN_KHAM,") \
				_T("       0 as TIEN_GIUONG,     ") \
				_T("       f.hfe_cost as TIEN_CLS,") \
				_T("       0 as TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0 as TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0 as TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0 as TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0 as TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0 as TIEN_THUOC_PM,") \
				_T("       0 as TIEN_VAT_TU_PM,") \
				_T("       0 as TIEN_MAU,") \
				_T("       0 as THU_KHAC,") \
				_T("       0 as THU_GOI,") \
				_T("       0 as TIEN_AN,") \
				_T("       0 as TIEN_THUOC_TG,") \
				_T("       0 as TIEN_VAT_TU_TG,") \
				_T("       0 as TIEN_THUOC_TG_O,") \
				_T("       0 as TIEN_VAT_TU_TG_O,") \
				_T("       0 as MIEN_GIAM,") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
				_T("     LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
				_T("     WHERE 1              =1") \
				_T("     AND Hpc_Practitioner IS NULL") \
				_T("     AND f.hfe_type      IN ('P','T')") \
				_T("     AND hpc_status <> 'T'") \
				_T("     AND F.Hfe_Group IN ('B3100')") \
				_T("     AND f.hfe_category  NOT IN ('Y')"));

		szSQL25.Format(_T("  UNION ALL") \
				_T("     SELECT fi.hfe_docno,") \
				_T("       fi.hfe_type,") \
				_T("       fi.hfe_invoiceno,") \
				_T("       fi.hfe_date,") \
				_T("       0 AS hfe_quantity,") \
				_T("       fi.HFE_DEPTID as khoa_thuchien,") \
				_T("       NULL,") \
				_T("       0             AS TIEN_KHAM,") \
				_T("       0             AS TIEN_GIUONG,") \
				_T("       0             AS TIEN_CLS,") \
				_T("       0             AS TIEN_PTTT,") \
				_T("	   0 AS thuoc_kho_dichvu,") \
				_T("       0             AS TIEN_THUOC_CH_NGOAITRU,") \
				_T("       0             AS TIEN_THUOC_CH_NOITRU,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0             AS TIEN_VAT_TU_CH_NGOAITRU,") \
				_T("       0             AS TIEN_VAT_TU_CH_NOITRU,") \
				_T("       0             AS TIEN_THUOC_PM,") \
				_T("       0             AS TIEN_VAT_TU_PM,") \
				_T("       0             AS TIEN_MAU,") \
				_T("       0             AS THU_KHAC,") \
				_T("       0             AS THU_GOI,") \
				_T("       0             AS TIEN_AN,") \
				_T("       0             AS TIEN_THUOC_TG,") \
				_T("       0             AS TIEN_VAT_TU_TG,") \
				_T("       0             AS TIEN_THUOC_TG_O,") \
				_T("       0             AS TIEN_VAT_TU_TG_O,") \
				_T("       fi.hfe_freeamount             AS MIEN_GIAM,") \
				_T("       NULL") \
				_T("     FROM hms_fee_invoice fi") \
				_T("     WHERE 1             =1") \
				_T("     AND fi.hfe_status  IN ('P','R')"));

	szSQL26.Format(_T(" UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE( product_org_id, 'PM', f.hfe_deptid ) AS NVARCHAR2(15) ) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       0          AS tien_kham,") \
				_T("       0          AS tien_giuong,") \
				_T("       0          AS tien_cls,") \
				_T("       0          AS tien_pttt,") \
				_T("       f.hfe_cost AS thuoc_kho_dichvu,") \
				_T("       0          AS tien_thuoc_ch_ngoaitru,") \
				_T("       0          AS tien_thuoc_ch_noitru,") \
				_T("       0 AS vattu_kho_dichvu,") \
				_T("       0          AS tien_vat_tu_ch_ngoaitru,") \
				_T("       0          AS tien_vat_tu_ch_noitru,") \
				_T("       0          AS tien_thuoc_pm,") \
				_T("       0          AS tien_vat_tu_pm,") \
				_T("       0          AS tien_mau,") \
				_T("       0          AS thu_khac,") \
				_T("       0          AS thu_goi,") \
				_T("       0          AS tien_an,") \
				_T("       0          AS tien_thuoc_tg,") \
				_T("       0          AS tien_vat_tu_tg,") \
				_T("       0          AS tien_thuoc_tg_o,") \
				_T("       0          AS tien_vat_tu_tg_o,") \
				_T("       0          AS mien_giam,      ") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view_vp") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15) ) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view_vp") \
				_T("     ON ( hpo_orderid        = f.hfe_orderid") \
				_T("     AND f.hfe_docno         = hpo_docno )") \
				_T("     WHERE 1                 = 1") \
				_T("     AND f.hfe_status       IN ( 'P','R' )   ") \
				_T("     AND hpo_storage_id IN (14)") \
				_T("     AND f.hfe_type         IN ( 'D','M','R' )") \
				_T("     AND f.hfe_deptid       <> 'B5'") \
				_T("     AND product_org_id NOT IN ( 'MA','BB','PĐD','HC' )") \
				_T("     AND f.hfe_category NOT IN ( 'Y' )"));
 szSQL27.Format(_T(" UNION ALL") \
				_T("     SELECT f.hfe_docno,") \
				_T("       f.hfe_type,") \
				_T("       f.hfe_invoiceno,") \
				_T("       f.hfe_date,") \
				_T("       0 AS hfe_quantity,") \
				_T("       CAST(DECODE( product_org_id, 'MA', f.hfe_deptid, 'P?D', f.hfe_deptid, 'HC', f.hfe_deptid ) AS NVARCHAR2(15) ) khoa_thuchien,") \
				_T("       f.hfe_itemid,") \
				_T("       0          AS tien_kham,") \
				_T("       0          AS tien_giuong,") \
				_T("       0          AS tien_cls,") \
				_T("       0          AS tien_pttt,") \
				_T("       0          AS thuoc_kho_dichvu,") \
				_T("       0          AS tien_thuoc_ch_ngoaitru,") \
				_T("       0          AS tien_thuoc_ch_noitru,") \
				_T("       f.hfe_cost AS vattu_kho_dichvu,") \
				_T("       0          AS tien_vat_tu_ch_ngoaitru,") \
				_T("       0          AS tien_vat_tu_ch_noitru,") \
				_T("       0          AS tien_thuoc_pm,") \
				_T("       0          AS tien_vat_tu_pm,") \
				_T("       0          AS tien_mau,") \
				_T("       0          AS thu_khac,") \
				_T("       0          AS thu_goi,") \
				_T("       0          AS tien_an,") \
				_T("       0          AS tien_thuoc_tg,") \
				_T("       0          AS tien_vat_tu_tg,") \
				_T("       0          AS tien_thuoc_tg_o,") \
				_T("       0          AS tien_vat_tu_tg_o,") \
				_T("       0          AS mien_giam,     ") \
				_T("       f.hfe_category") \
				_T("     FROM hms_fee f") \
				_T("     LEFT JOIN m_productitem_view_vp") \
				_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15) ) = product_item_id )") \
				_T("     LEFT JOIN hms_pharmaorder_view_vp") \
				_T("     ON ( hpo_orderid        = f.hfe_orderid") \
				_T("     AND f.hfe_docno         = hpo_docno )") \
				_T("     WHERE 1                 = 1") \
				_T("     AND f.hfe_status       IN ( 'P','R' )   ") \
				_T("     AND hpo_storage_id IN (15)") \
				_T("     AND f.hfe_type         IN ( 'D','M','R' )") \
				_T("     AND product_org_id NOT IN ( 'PM','BB' )") \
				_T("     AND f.hfe_deptid       <> 'B5'") \
				_T("     AND hfe_category NOT   IN ( 'Y' )"));

	/*_msg(_T("%s"), szSQL1);
	_msg(_T("%s"), szSQL2);	
	_msg(_T("%s"), szSQL3);	
	_msg(_T("%s"), szSQL4);	
	_msg(_T("%s"), szSQL5);	
	_msg(_T("%s"), szSQL6);	
	_msg(_T("%s"), szSQL7);	
	_msg(_T("%s"), szSQL8);	
	_msg(_T("%s"), szSQL9);	
	_msg(_T("%s"), szSQL10);	
	_msg(_T("%s"), szSQL11);
	_msg(_T("%s"), szSQL12);
	_msg(_T("%s"), szSQL13);
	_msg(_T("%s"), szSQL14);
	_msg(_T("%s"), szSQL15);
	_msg(_T("%s"), szSQL16);
	_msg(_T("%s"), szSQL17);
	_msg(_T("%s"), szSQL18);
	_msg(_T("%s"), szSQL19);
	_msg(_T("%s"), szWhere1);*/
	/*_msg(_T("%s"), szSQL1);
	_msg(_T("%s"), szSQL);*/
	//_msg(_T("%s"), szSQL20);
	szSQL.Format(_T("WITH tbl") \
	_T("     AS (%s)") \
	_T(" SELECT") \
	_T(" dept_id,") \
	_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
	_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
	_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
	_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
	_T(" SUM(thuoc_kho_dichvu) AS thuoc_kho_dichvu,") \
	_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
	_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
	_T(" SUM(vattu_kho_dichvu) AS vattu_kho_dichvu,") \
	_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
	_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
	_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
	_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
	_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
	_T(" SUM(THU_KHAC) as THU_KHAC,") \
	_T(" SUM(THU_GOI) as THU_GOI,") \
	_T(" SUM(TIEN_AN) as TIEN_AN,") \
	_T(" SUM(TIEN_THUOC_TG+TIEN_THUOC_TG_O) as TIEN_THUOC_TG,") \
	_T(" SUM(TIEN_VAT_TU_TG+TIEN_VAT_TU_TG_O) as TIEN_VAT_TU_TG,") \
	_T(" SUM(MIEN_GIAM) AS TIEN_MIEN_GIAM,") \
	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+thuoc_kho_dichvu+vattu_kho_dichvu) as TONG_THU,") \
	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O++thuoc_kho_dichvu+vattu_kho_dichvu) as TONG_THU1") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT") \
	_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
	_T("   iv.hfe_docno as docno,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
	_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
	_T("    trunc(hfe_date) as invoice_date,") \
	_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
	_T("    khoa_thuchien as dept_id,") \
	_T("    hfe_quantity as SO_NGAY_DT,") \
	_T("     TIEN_KHAM,") \
	_T("     TIEN_GIUONG,") \
	_T("     TIEN_CLS,    ") \
	_T("     TIEN_PTTT,") \
	_T("     TIEN_THUOC_CH_NGOAITRU,") \
	_T("     TIEN_THUOC_CH_NOITRU,") \
	_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
	_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
	_T("     TIEN_THUOC_PM,") \
	_T("     TIEN_VAT_TU_PM,") \
	_T("     TIEN_MAU,    ") \
	_T("     THU_KHAC,") \
	_T("     THU_GOI,") \
	_T("     TIEN_AN,") \
	_T("     TIEN_THUOC_TG,") \
	_T("     TIEN_VAT_TU_TG,") \
	_T("     TIEN_THUOC_TG_O,") \
	_T("     TIEN_VAT_TU_TG_O,") \
	_T("     MIEN_GIAM,") \
	_T("     thuoc_kho_dichvu,") \
	_T("     vattu_kho_dichvu,") \
	_T("     hfe_itemid") \
	_T("   FROM hms_fee_invoice_view_service iv") \
	_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
	_T("   LEFT JOIN  (") \
	//_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \//
	_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \
	//_T("    %s %s ") \//
	_T("   )tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno AND iv.hfe_docno = tbl1.hfe_docno )") \
	_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   WHERE 1=1 %s %s") \
	_T("   )") \
	_T(" GROUP BY ") \
	_T(" dept_id") \
	_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_THUOC_TG_O+TIEN_VAT_TU_TG_O+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG+thuoc_kho_dichvu+vattu_kho_dichvu)>0") \
	_T(" ORDER BY dept_id"),
	m_szCashQuery, szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,
	szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20,szSQL21, szSQL22,szSQL23,szSQL24, szSQL25 ,szSQL26, szSQL27, szWhere1, szWhere);
	//szSQL.Format(_T("WITH tbl") \
	//_T("     AS (%s)") \
	//_T(" SELECT") \
	//_T(" dept_id,") \
	//_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
	//_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
	//_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
	//_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
	//_T(" SUM(TIEN_THUOC_CH_NGOAITRU) as TIEN_THUOC_CH_NGOAITRU,") \
	//_T(" SUM(TIEN_THUOC_CH_NOITRU) as TIEN_THUOC_CH_NOITRU,") \
	//_T(" SUM(TIEN_VAT_TU_CH_NGOAITRU) as TIEN_VAT_TU_CH_NGOAITRU,") \
	//_T(" SUM(TIEN_VAT_TU_CH_NOITRU) as TIEN_VAT_TU_CH_NOITRU,") \
	//_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
	//_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
	//_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
	//_T(" SUM(THU_KHAC) as THU_KHAC,") \
	//_T(" SUM(THU_GOI) as THU_GOI,") \
	//_T(" SUM(TIEN_AN) as TIEN_AN,") \
	//_T(" SUM(TIEN_THUOC_TG) as TIEN_THUOC_TG,") \
	//_T(" SUM(TIEN_VAT_TU_TG) as TIEN_VAT_TU_TG,") \
	//_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI) as TONG_THU,") \
	//_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG) as TONG_THU1") \
	//_T(" FROM") \
	//_T(" (") \
	//_T(" SELECT") \
	//_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
	//_T("   iv.hfe_docno as docno,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
	//_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
	//_T("    trunc(hfe_date) as invoice_date,") \
	//_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
	//_T("    khoa_thuchien as dept_id,") \
	//_T("    hfe_quantity as SO_NGAY_DT,") \
	//_T("     TIEN_KHAM,") \
	//_T("     TIEN_GIUONG,") \
	//_T("     TIEN_CLS,    ") \
	//_T("     TIEN_PTTT,") \
	//_T("     TIEN_THUOC_CH_NGOAITRU,") \
	//_T("     TIEN_THUOC_CH_NOITRU,") \
	//_T("     TIEN_VAT_TU_CH_NGOAITRU,    ") \
	//_T("     TIEN_VAT_TU_CH_NOITRU,    ") \
	//_T("     TIEN_THUOC_PM,") \
	//_T("     TIEN_VAT_TU_PM,") \
	//_T("     TIEN_MAU,    ") \
	//_T("     THU_KHAC,") \
	//_T("     THU_GOI,") \
	//_T("     TIEN_AN,") \
	//_T("     TIEN_THUOC_TG,") \
	//_T("     TIEN_VAT_TU_TG,") \
	///*_T("     TIEN_THUOC_TG_O,") \
	//_T("     TIEN_VAT_TU_TG_O,") \*/
	//_T("     hfe_itemid") \
	//_T("   FROM hms_fee_invoice_view_service iv") \
	//_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
	//_T("   INNER JOIN  (") \
	////_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ") \//
	//_T("    %s %s %s %s %s") \
	////_T("    %s %s ") \//
	//_T("   )tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno AND iv.hfe_docno = tbl1.hfe_docno )") \
	//_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	//_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
	//_T("   WHERE 1=1 %s %s") \
	//_T("   )") \
	//_T(" GROUP BY ") \
	//_T(" dept_id") \
	//_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH_NGOAITRU+TIEN_THUOC_CH_NOITRU+TIEN_VAT_TU_CH_NGOAITRU+TIEN_VAT_TU_CH_NOITRU+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+THU_GOI+TIEN_AN+TIEN_THUOC_TG+TIEN_VAT_TU_TG)>0") \
	//_T(" ORDER BY dept_id"),
	//m_szCashQuery, szSQL1,szSQL10,
	//szSQL11,szSQL13,szSQL19 ,szWhere1, szWhere);
	return szSQL;
}