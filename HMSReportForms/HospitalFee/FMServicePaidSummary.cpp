#include "stdafx.h"
#include "FMServicePaidSummary.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServicePaidSummary* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServicePaidSummary* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServicePaidSummary* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServicePaidSummary* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMServicePaidSummary *)pWnd)->OnOrderByAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummary*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummary*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMServicePaidSummary*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServicePaidSummary*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummary*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMServicePaidSummary *pVw = (CFMServicePaidSummary *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMServicePaidSummary *pVw = (CFMServicePaidSummary *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServicePaidSummary *pVw = (CFMServicePaidSummary *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServicePaidSummary *pVw = (CFMServicePaidSummary *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummary*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummary*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummary*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummary*)pWnd)->OnAllSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummary*)pWnd)->OnSODSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummary*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummary*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummary*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummary*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummary*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMServicePaidSummary*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMServicePaidSummary*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMServicePaidSummary*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static void _OnCreateDataSelectFnc(CWnd *pWnd){
	CFMServicePaidSummary *pVw = (CFMServicePaidSummary *)pWnd;
	pVw->OnCreateDataSelect();
}
static void _OnPolicyObjListSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummary*)pWnd)->OnPolicyObjListSelect();
}

static void _OnPolicyObjectFilterSelectFnc(CWnd *pWnd)
{
	 ((CFMServicePaidSummary*)pWnd)->OnPolicyObjectFilterSelect();
}
static int _OnListCheckAllInvoiceFnc(CWnd *pWnd)
{
	((CFMServicePaidSummary*)pWnd)->OnListCheckAllInvoice();
	return 0;
}
static int _OnListCheckAllRefundFnc(CWnd *pWnd)
{
	((CFMServicePaidSummary*)pWnd)->OnListCheckAllRefund();
	return 0;
}


CFMServicePaidSummary::CFMServicePaidSummary(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMServicePaidSummary::~CFMServicePaidSummary()
{
}
void CFMServicePaidSummary::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 535);
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
	m_wndList.Create(this,10, 182, 476, 499); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 26, 33, 26, 33);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 231, 540, 311, 565);
	m_wndExport.Create(this, _T("Export XLS"), 316, 540, 396, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 115, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 120, 505, 225, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 26, 33, 26, 33);
	m_wndAll.Create(this, _T("All"), 231, 505, 336, 530);
	m_wndSOD.Create(this, _T("SOD"), 371, 505, 476, 530);
	m_wndCreateData.Create(this, _T("Create Data"), 401, 540, 481, 565);
	m_wndPolicyObjList.Create(this, _T("PolicyObjList"), 10, 151, 225, 176);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 535);
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
	m_wndList.Create(this,10, 182, 476, 499); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 26, 33, 26, 33);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 231, 540, 311, 565);
	m_wndExport.Create(this, _T("Export XLS"), 316, 540, 396, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 115, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 120, 505, 225, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 26, 33, 26, 33);
	m_wndAll.Create(this, _T("All"), 231, 505, 336, 530);
	m_wndSOD.Create(this, _T("SOD"), 371, 505, 476, 530);
	m_wndCreateData.Create(this, _T("Create Data"), 401, 540, 481, 565);
	m_wndPolicyObjList.Create(this, _T("PolicyObjList"), 10, 151, 225, 176);
	m_wndPolicyObjectFilter.Create(this, _T("PolicyObjectFilter"), 240, 151, 476, 176);
}
void CFMServicePaidSummary::OnInitializeComponents(){
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

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);



	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 130);
	m_wndList.InsertColumn(2, _T("Posted"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("cashbook_id"), CFMT_TEXT, 100);
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

void CFMServicePaidSummary::OnSetWindowEvents(){
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
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(3, _T("Check All Fee Invoice"), _OnListCheckAllInvoiceFnc);
	m_wndList.AddEvent(4, _T("Check All Fee Refund"), _OnListCheckAllRefundFnc);
	m_wndList.AddEvent(5, _T("Search"), _OnListSearchItemFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndCreateData.SetEvent(WE_CLICK, _OnCreateDataSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndPolicyObjList.SetEvent(WE_CLICK, _OnPolicyObjListSelectFnc);
	m_wndPolicyObjectFilter.SetEvent(WE_CLICK, _OnPolicyObjectFilterSelectFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsuranceReceiptSummaryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsuranceReceiptSummaryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsuranceReceiptSummaryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsuranceReceiptSummaryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsuranceReceiptSummaryFnc, 0, 'T', VK_CONTROL);
	*/

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	//SetMode(VM_EDIT);


}
void CFMServicePaidSummary::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndPolicyObjList.GetDlgCtrlID(), m_bPolicyObjList);
	DDX_Check(pDX, m_wndPolicyObjectFilter.GetDlgCtrlID(), m_bPolicyObjectFilter);

}
void CFMServicePaidSummary::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMServicePaidSummary::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMServicePaidSummary::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_nPatientType = 3;
	m_bSOD = FALSE;
	m_bPolicyObjList=FALSE;
	m_bPolicyObjectFilter=FALSE;
	for (int i = 0; i < 18; i++)
	{
		m_nDaySum[i] = 0;
		m_nTotal[i] = 0;
		m_nDeptSum[i] = 0;
	}
	//m_arr_data_name.Add(_T(""));
	//m_arr_data_name.Add(_T("ho_ten"));
	//m_arr_data_name.Add(_T("docno"));
	//m_arr_data_name.Add(_T("dept_id"));
	//m_arr_data_name.Add(_T("ngay_vao"));
	//m_arr_data_name.Add(_T("ngay_ra"));
	m_arr_data_name.Add(_T("so_ngay_dt"));
	m_arr_data_name.Add(_T("tien_kham"));
	m_arr_data_name.Add(_T("tien_giuong"));
	m_arr_data_name.Add(_T("tien_pttt"));
	m_arr_data_name.Add(_T("tien_xn"));
	m_arr_data_name.Add(_T("tien_may_ktc"));
	m_arr_data_name.Add(_T("tien_thuoc"));
	m_arr_data_name.Add(_T("tien_vat_tu"));
	m_arr_data_name.Add(_T("tien_thuoc_bh"));
	m_arr_data_name.Add(_T("tien_vat_tu_bh"));
	m_arr_data_name.Add(_T("tien_an"));
	m_arr_data_name.Add(_T("thu_khac"));
	m_arr_data_name.Add(_T("tong_thu"));
	m_arr_data_name.Add(_T("trich_tam_gui"));
	m_arr_data_name.Add(_T("thu"));
	m_arr_data_name.Add(_T("chi"));
	m_arr_data_name.Add(_T("thuoc_sudung"));
	m_arr_data_name.Add(_T("vat_tu_sudung"));
}

int CFMServicePaidSummary::SetMode(int nMode){
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

/*void CFMServicePaidSummary::OnYearChange(){
	
} */
/*void CFMServicePaidSummary::OnYearSetfocus(){
	
} */
/*void CFMServicePaidSummary::OnYearKillfocus(){
	
} */
int CFMServicePaidSummary::OnYearCheckValue(){
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
 
void CFMServicePaidSummary::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServicePaidSummary::OnReportPeriodSelendok(){
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
void CFMServicePaidSummary::OnPolicyObjListSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

/*void CFMServicePaidSummary::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServicePaidSummary::OnReportPeriodKillfocus(){
	
}*/
long CFMServicePaidSummary::OnReportPeriodLoadData(){
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

/*void CFMServicePaidSummary::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServicePaidSummary::OnFromDateChange(){
	
} */
/*void CFMServicePaidSummary::OnFromDateSetfocus(){
	
} */
/*void CFMServicePaidSummary::OnFromDateKillfocus(){
	
} */
int CFMServicePaidSummary::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMServicePaidSummary::OnToDateChange(){
	
} */
/*void CFMServicePaidSummary::OnToDateSetfocus(){
	
} */
/*void CFMServicePaidSummary::OnToDateKillfocus(){
	
} */
int CFMServicePaidSummary::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
void CFMServicePaidSummary::OnPolicyObjectFilterSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	
}

 
void CFMServicePaidSummary::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServicePaidSummary::OnClerkSelendok(){
	 
}
int CFMServicePaidSummary::OnListCheckAllTYC()
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
int CFMServicePaidSummary::OnListCheckAllPTTYC()
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

void CFMServicePaidSummary::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}

/*void CFMServicePaidSummary::OnClerkSetfocus(){
	
}*/
/*void CFMServicePaidSummary::OnClerkKillfocus(){
	
}*/
long CFMServicePaidSummary::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServicePaidSummary::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServicePaidSummary::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServicePaidSummary::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMServicePaidSummary::OnStatusSetfocus(){
	
}*/
/*void CFMServicePaidSummary::OnStatusKillfocus(){
	
}*/
long CFMServicePaidSummary::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStatus.AddItems(_T("01"), _T("Ngày khóa sổ"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ngày xác nhận"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ngày ghi sổ(nộp quỹ)"), NULL);
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
/*void CFMServicePaidSummary::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServicePaidSummary::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServicePaidSummary::OnOrderBySelendok(){
	 
}
/*void CFMServicePaidSummary::OnOrderBySetfocus(){
	
}*/
/*void CFMServicePaidSummary::OnOrderByKillfocus(){
	
}*/
long CFMServicePaidSummary::OnOrderByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndOrderBy.AddItems(_T("01"), _T("Sắp xếp theo tên bệnh nhân"), NULL);
	m_wndOrderBy.AddItems(_T("02"), _T("Sắp xếp theo ngày"), NULL);
	//m_wndOrderBy.AddItems(_T("03"), _T("Sắp xếp theo ngày thanh toán"), NULL);
	m_wndOrderBy.AddItems(_T("04"), _T("Sắp xếp theo khoa"), NULL);
	//m_wndOrderBy.AddItems(_T("05"), _T("Sắp xếp theo phiếu thu"), NULL);
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
/*void CFMServicePaidSummary::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMServicePaidSummary::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN ('DT', 'KB', 'XN', 'HA') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

void CFMServicePaidSummary::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServicePaidSummary::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMServicePaidSummary::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMServicePaidSummary::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMServicePaidSummary::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

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
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
	}

	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id  in ('DVYC','DV-PTTYC')"));
	else if (m_bPolicyObjList)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in('QUAN-NG','QUAN-NT')"));
	else
	szWhere.AppendFormat(_T(" AND (substr(fac_cashbook_id, 1, 2) = 'DV' OR fac_cashbook_id='THE-DV' OR fac_cashbook_id='CK-DV') AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	//szWhere.AppendFormat(_T(" AND (substr(fac_cashbook_id, 1, 2) = 'DV') AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id %s 'DVYC'"), m_bSOD?_T("="):_T("<>"));
	
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate, FAC_CASHBOOK_ID as cashbook_id ") \
		_T(" FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	_msg(_T("%ld"), nCount);
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
			rs.GetValue(_T("cashbook_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMServicePaidSummary::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++) m_wndList.SetCheck(i, TRUE);
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMServicePaidSummary::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++) m_wndList.SetCheck(i, FALSE);
}

void CFMServicePaidSummary::OnInpatientSelect(){
	
}
void CFMServicePaidSummary::OnOutpatientSelect(){
	
}
void CFMServicePaidSummary::OnDepositSelect(){
	
}
void CFMServicePaidSummary::OnAllSelect(){
	
}
 
void CFMServicePaidSummary::OnSODSelect(){
	OnListLoadData();
}
void CFMServicePaidSummary::OnCreateDataSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szSQL2, szWhere;	

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
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
	}

	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id  in ('DVYC','DV-PTTYC')"));
	else
	szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV' AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id %s 'DVYC'"), m_bSOD?_T("="):_T("<>"));
	
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T(" FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	OnDeleteDataBeforeInsert();
	//_msg(_T("%s"), szSQL);
	
	szSQL2.Format(_T("Insert into tmp_fa_cash_C11 (SELECT fac_cash_id as idx, '%s' as userid FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s)"), pMF->m_szUser, szWhere);	
	int ret = pMF->ExecSQL(szSQL2);
	_msg(_T("Đã thực hiện insert %ld bản tin"), ret);	
}

int CFMServicePaidSummary::OnDeleteDataBeforeInsert()
{
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL; 	
	szSQL.Format(_T("Delete from tmp_fa_cash_C11 where userid='%s'"), pMF->m_szUser);
 	int ret = pMF->ExecSQL(szSQL);
	_msg(_T("Đã xóa %ld bản ghi"), ret);
	return 0;
}
 
int CFMServicePaidSummary::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMServicePaidSummary::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMServicePaidSummary::OnDeleteFMInsuranceReceiptSummary(){
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
 		OnCancelFMInsuranceReceiptSummary();
 	}
	return 0;
}
int CFMServicePaidSummary::OnSaveFMInsuranceReceiptSummary(){
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
 		//OnFMInsuranceReceiptSummaryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMServicePaidSummary::OnCancelFMInsuranceReceiptSummary(){
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
int CFMServicePaidSummary::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMServicePaidSummary::OnPrintSelect()
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

void CFMServicePaidSummary::OnPrint1stver(){
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
	tmpStr += _T(" đồng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CFMServicePaidSummary::OnPrint2ndver()
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
	double nTotal[18], GrandAmt[18], nTotalClass[18], nGrandIO = 0, nTotalClassIO = 0, nTotalIO = 0;
	for (int i = 0; i < 18; i++)
	{
		GrandAmt[i] = 0;
		nTotal[i] = 0;
		nTotalClass[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGTHTHANHTOAN_NOITRU_NGOAITRU.RPT");
	if (m_bSOD) szReportName = _T("Reports\\HMS\\HF_BANGTHTHANHTOAN_NOITRU_NGOAITRU_TYC.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("so_ngay_dt"));
	data_name.Add(_T("tien_kham"));
	data_name.Add(_T("tien_giuong"));
	data_name.Add(_T("tien_pttt"));
	data_name.Add(_T("tien_xn"));
	data_name.Add(_T("tien_may_ktc"));
	data_name.Add(_T("tien_thuoc"));
	data_name.Add(_T("tien_vat_tu"));
	data_name.Add(_T("tien_thuoc_bh"));
	data_name.Add(_T("tien_vat_tu_bh"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("tong_thu"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("thu"));
	data_name.Add(_T("chi"));
	data_name.Add(_T("thuoc_sudung"));
	data_name.Add(_T("vat_tu_sudung"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		if (!m_szDeptKey.IsEmpty())
			rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(m_szDeptKey));
	}
_tprintf(_T("\r\n2"));


	rpt.GetReportHeader()->SetValue(_T("InvoiceNos"), m_szCashIDS);

	CString szOldIndex, szNewIndex;

	int col_pos = 7;
	int sum_pos = (int) (data_name.GetCount()) - 4;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("posted_date"), szNewIndex);
		if(szNewIndex  != szOldIndex)
		{
			if (m_szOrderByKey == _T("04"))
				if (nGrandIO > 0 && m_szDeptKey.IsEmpty())
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
					rptGroup->SetValue(_T("Grand"), tmpStr);
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						tmpStr.Format(_T("%f"), GrandAmt[i]);
						szPos.Format(_T("s%d"), i+col_pos);
						rptGroup->SetValue(szPos, tmpStr);
						
						GrandAmt[i] = 0;
					}
				}
			if (nTotalClassIO > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("Cộng ngày (%s):"), CDate::Convert(szOldIndex, yyyymmdd, ddmmyyyy));
				rptGroup->SetValue(_T("Grand"), tmpStr);
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), OnRound(nTotalClass[i]));
					szPos.Format(_T("s%d"), i+col_pos);
					rptGroup->SetValue(szPos, tmpStr);
					nTotal[i] += OnRound(nTotalClass[i]);
					nTotalClass[i] = 0;
				}
			}
			
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
			{
				/*if(szNewIndex == _T("I"))
					tmpStr.Format(_T("I. Bệnh nhân ngoại trú"));
				else
					tmpStr.Format(_T("II. Bệnh nhân nội trú"));*/
				tmpStr.Format(_T("Ngày %s"), CDate::Convert(szNewIndex, yyyymmdd, ddmmyyyy));
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldIndex = szNewIndex;
			szOldLev1.Empty();
		}

		if(m_szOrderByKey == _T("04"))
			if (m_szDeptKey.IsEmpty())
			{
				rs.GetValue(_T("dept_id"), szNewLev1);
				if (szOldLev1 != szNewLev1)
				{
					if (nGrandIO > 0)
					{
						rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
						tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
						rptGroup->SetValue(_T("Grand"), tmpStr);
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
						tmpStr.Format(_T("Khoa %s"), szNewLev1);
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
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept_Id")));
			rptDetail->SetValue(_T("5"), CDate::Convert(rs.GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("6"), CDate::Convert(rs.GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy));

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				if (i >= sum_pos && i <= data_name.GetCount() - 3)
				{
					nGrandIO += nTmp;
					nTotalClassIO += nTmp;
					nTotalIO += nTmp;
				}
				GrandAmt[i]+= nTmp;
				nTotalClass[i]+= nTmp;
				//nTotal[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);

				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
	
_tprintf(_T("\r\n3"));
	if(m_szOrderByKey == _T("04"))
	{
		if (nGrandIO > 0 && m_szDeptKey.IsEmpty())
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
			rptGroup->SetValue(_T("Grand"), tmpStr);
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr.Format(_T("%f"), GrandAmt[i]);
				szPos.Format(_T("s%d"), i+col_pos);
				rptGroup->SetValue(szPos, tmpStr);
			}
		}
	}


	if (nTotalClassIO > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("Cộng ngày (%s):"), CDate::Convert(szOldIndex, yyyymmdd, ddmmyyyy));
		rptGroup->SetValue(_T("Grand"), tmpStr);

		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), OnRound(nTotalClass[i]));
			nTotal[i] += OnRound(nTotalClass[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptGroup->SetValue(szPos, tmpStr);
		}
	}

_tprintf(_T("\r\n4"));
	if (nTotalIO > 0)
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
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMServicePaidSummary"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" đồng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);


	rpt.PrintPreview();
}

void CFMServicePaidSummary::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Xuất ra Excel theo mẫu in"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Xuất ra Excel BN quân - chính sách"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	
	
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport1();
			break;
		case 2:
			OnExport2();
			break;		
	}
}

void CFMServicePaidSummary::OnExport1()
{
	UpdateData(TRUE);
	if (m_szOrderByKey == _T("04"))
	{
		AfxMessageBox(_T("Sắp xếp theo khoa"));
		OnExport1_ByDept();
	}

	else
	{
		AfxMessageBox(_T("Sắp xếp theo ngày"));
		OnExport1_ByDate();
	}	
}
void CFMServicePaidSummary::OnExport2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	double nTmp = 0;
	int nIdx = 1, j = 0, nRow = 0, nCol = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[18], GrandAmt[18], nTotalClass[18], nGrandIO = 0, nTotalClassIO = 0, nTotalIO = 0;
	for (int i = 0; i < 18; i++)
	{
		GrandAmt[i] = 0;
		nTotal[i] = 0;
		nTotalClass[i] = 0;
	}

	CExcel xls;

	if (!xls.Load(_T("Exports\\BANGTONGHOPTHANHTOANCHIPHIDIEUTRINOITRUNGOAITRU_QUANCS.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	_msg(_T("%s"), szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}

	xls.SetWorksheet(0);

	data_name.Add(_T("so_ngay_dt"));
	data_name.Add(_T("tien_kham"));
	data_name.Add(_T("tien_giuong"));
	data_name.Add(_T("tien_pttt"));
	data_name.Add(_T("tien_xn"));
	data_name.Add(_T("tien_may_ktc"));
	data_name.Add(_T("tien_thuoc"));
	data_name.Add(_T("tien_vat_tu"));
	data_name.Add(_T("tien_thuoc_bh"));
	data_name.Add(_T("tien_vat_tu_bh"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("tong_thu"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("thu"));
	data_name.Add(_T("chi"));
	data_name.Add(_T("thuoc_sudung"));
	data_name.Add(_T("vat_tu_sudung"));

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow+4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	CString szOldIndex, szNewIndex;

	int col_pos = 8;
	int sum_pos = (int) (data_name.GetCount()) - 4;
	nRow = 9;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("posted_date"), szNewIndex);
		if(szNewIndex  != szOldIndex)
		{
			if (m_szOrderByKey == _T("04"))
				if (nGrandIO > 0 && m_szDeptKey.IsEmpty())
				{
					tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
					xls.SetCellMergedColumns(nCol, nRow, 6);
					xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						tmpStr.Format(_T("%f"), GrandAmt[i]);
						xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
						GrandAmt[i] = 0;
					}
					nRow++;
				}
			if (nTotalClassIO > 0)
			{
				tmpStr.Format(_T("Cộng ngày (%s):"), CDate::Convert(szOldIndex, yyyymmdd, ddmmyyyy));
				xls.SetCellMergedColumns(nCol, nRow, 6);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), OnRound(nTotalClass[i]));
					xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
					nTotal[i] += OnRound(nTotalClass[i]);
					nTotalClass[i] = 0;
				}
				nRow++;
			}
			
			tmpStr.Format(_T("Ngày %s"), CDate::Convert(szNewIndex, yyyymmdd, ddmmyyyy));
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
			szOldIndex = szNewIndex;
			szOldLev1.Empty();
			nRow++;
		}

		if(m_szOrderByKey == _T("04"))
			if (m_szDeptKey.IsEmpty())
			{
				rs.GetValue(_T("dept_id"), szNewLev1);
				if (szOldLev1 != szNewLev1)
				{
					if (nGrandIO > 0)
					{
						tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
						xls.SetCellMergedColumns(nCol, nRow, 6);
						xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
						for (int i = 0; i < data_name.GetCount(); i++)
						{
							tmpStr.Format(_T("%f"), GrandAmt[i]);
							xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
							GrandAmt[i] = 0;
						}
						nRow++;
					}
					
					tmpStr.Format(_T("Khoa %s"), szNewLev1);
					xls.SetCellMergedColumns(nCol, nRow, 6);
					xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
					szOldLev1 = szNewLev1;
					nIdx = 1;
					nRow++;
				}
			}

			xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
			rs.GetValue(_T("ho_ten"), tmpStr);
			xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("rankname"), tmpStr);
			xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
			
			rs.GetValue(_T("work_place"), tmpStr);
			xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("docno"), tmpStr);
			xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("dept_Id"), tmpStr);
			xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("ngay_vao"), tmpStr);
			xls.SetCellText(nCol+6, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
			rs.GetValue(_T("ngay_ra"), tmpStr);
			xls.SetCellText(nCol+7, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				if (i >= sum_pos && i <= data_name.GetCount() - 3)
				{
					nGrandIO += nTmp;
					nTotalClassIO += nTmp;
					nTotalIO += nTmp;
				}
				GrandAmt[i]+= nTmp;
				nTotalClass[i]+= nTmp;

				xls.SetCellText(nCol+col_pos+i, nRow, double2str(nTmp), FMT_NUMBER1);
			}
			rs.MoveNext();
			nRow++;
	}

	if(m_szOrderByKey == _T("04"))
	{
		if (nGrandIO > 0 && m_szDeptKey.IsEmpty())
		{
			tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr.Format(_T("%f"), GrandAmt[i]);
				xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
			}
		}
		nRow++;
	}

	if (nTotalClassIO > 0)
	{
		tmpStr.Format(_T("Cộng ngày (%s):"), CDate::Convert(szOldIndex, yyyymmdd, ddmmyyyy));
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), OnRound(nTotalClass[i]));
			nTotal[i] += OnRound(nTotalClass[i]);
			xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);	
		}
		nRow++;
	}

	if (nTotalIO > 0)
	{
		tmpStr.Format(_T("Tổng cộng:"));
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);	
		}
		nRow++;
	}

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" đồng."));
	xls.SetCellMergedColumns(nCol, nRow, 6);
	xls.SetCellText(nCol, nRow, _T("Số tiền bằng chữ:"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol+col_pos, nRow, tmpStr, FMT_TEXT, true, 11);	
	EndWaitCursor();
	xls.Save(_T("Exports\\BANGTONGHOPTHANHTOANCHIPHIDIEUTRINOITRUNGOAITRU_QUANCS2.xls"));
}

void CFMServicePaidSummary::OnPrint2ndver_(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	bool bNewDate = false, bNewDept = false;
	CString szNewDate, szNewDept, szPos;
	UpdateData();
	if (OnCheckBeforePrint(&rpt, rs) < 0) return;
	CReportSection* pDateGroup = NULL, *pDeptGroup = NULL, *pDetail = NULL;
	OnPrintOther(&rpt);
	while (!rs.IsEOF()){
		//_msg(_T("NewGroup"));
		IsNewGroup(&rpt, &rs, bNewDate, bNewDept);
		//_msg(_T("PrintSummary"));
		//OnPrintGroupSummary(&rpt, bNewDate, bNewDept, pDateGroup, pDeptGroup);
		OnPrintGroupSummary(&rpt, bNewDate, bNewDept);
		//_msg(_T("Group Descr"));
		//OnPrintGroupDescr(&rpt, &rs, bNewDate, bNewDept);
		OnPrintGroupDescr(&rpt, &rs, bNewDate, bNewDept, &pDateGroup, &pDeptGroup);
		//_msg(_T("Detail"));
		OnPrintDetail(&rpt, &rs);
		//OnPrintDetail(&rpt, pDetail, &rs);
		//if (pDetail) pDetail->SetValue(_T("1"), _T("X"));
		//_msg(_T("Calc Data"));

		OnCalcData(&rs, bNewDate, bNewDept);
		rs.MoveNext();
	}
	IsNewGroup(&rpt, &rs, bNewDate, bNewDept);
	OnPrintGroupSummary(&rpt, bNewDate, bNewDept);
	for (int i = 0; i < 18; i++){
		szPos.Format(_T("T%d"), i+7);
		m_nTotal[i] += OnRound(m_nDaySum[i]);
		rpt.GetReportFooter()->SetValue(szPos, ToString(m_nTotal[i]));
	}
	ResetVar();
	rpt.PrintPreview();
}

int CFMServicePaidSummary::OnCheckBeforePrint(CReport* rpt, CRecord& rs){
	CString szSQL;
	szSQL = GetQueryString();
	if (rs.ExecSQL(szSQL) <= 0){
		AfxMessageBox(_T("No Data!"));
		return -1;
	}
	if (!rpt->Init(_T("Reports\\HMS\\HF_BANGTHTHANHTOAN_NOITRU_NGOAITRU.RPT"))) return -1;
	return 0;
}

void CFMServicePaidSummary::OnPrintOther(CReport* rpt){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReportSection* rptHeader = rpt->GetReportHeader();
	CString tmpStr, szDate;
	if (rptHeader){
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		if (!m_szDeptKey.IsEmpty())
			rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(m_szDeptKey));
		rptHeader->SetValue(_T("InvoiceNos"), m_szCashIDS);
	}
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt->GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt->GetReportFooter()->SetValue(_T("PrintDate"), szDate);
}

void CFMServicePaidSummary::IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept, CReportSection** ppDateGroup, CReportSection** ppDeptGroup){
	//return;
	CString tmpStr, szLabel;
	rs->GetValue(_T("posted_date"), tmpStr);
	bNewDate = tmpStr==m_szPrevDate?false:true;
	if (bNewDate && m_nDaySum[12] > 0){
		if (m_nDeptSum[12] > 0){
			(*ppDeptGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
			////rpDeptGroup = rpt->AddDetail(rpt->GetGroupFooter(1));
			szLabel.Format(_T("Cộng khoa %s:"), m_szPrevDept);
			if (*ppDeptGroup) (*ppDeptGroup)->SetValue(_T("grand"), szLabel);
		}
		////(*pDateGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
		(*ppDateGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
		szLabel.Format(_T("Cộng ngày %s:"), m_szPrevDate);
		if (*ppDateGroup) (*ppDateGroup)->SetValue(_T("grand"), szLabel);
	}
	m_szPrevDate = tmpStr;
	if (m_szOrderByKey != _T("04")){
		bNewDept = false;
		return;
	}
	if (bNewDate) m_szPrevDept=_T("X");
	rs->GetValue(_T("dept_id"), tmpStr);
	bNewDept = tmpStr==m_szPrevDept?false:true;
	if (bNewDept && m_nDeptSum[12] > 0){
		////(*pDeptGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
		(*ppDeptGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
		szLabel.Format(_T("Cộng khoa %s:"), m_szPrevDept);
		if (*ppDeptGroup) (*ppDeptGroup)->SetValue(_T("grand"), szLabel);
	}
	m_szPrevDept = tmpStr;
}

void CFMServicePaidSummary::IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept){
	//return;
	CString tmpStr, szLabel;
	rs->GetValue(_T("posted_date"), tmpStr);
	bNewDate = tmpStr==m_szPrevDate?false:true;
	m_szPrevDate = tmpStr;
	if (m_szOrderByKey != _T("04")){
		bNewDept = false;
		return;
	}
	if (bNewDate) m_szPrevDept=_T("X");
	rs->GetValue(_T("dept_id"), tmpStr);
	bNewDept = tmpStr==m_szPrevDept?false:true;
	m_szPrevDept = tmpStr;
}

void CFMServicePaidSummary::OnPrintGroupSummary(CReport* rpt, bool bNewDate, bool bNewDept, CReportSection* pDateGroup, CReportSection* pDeptGroup){
	//return;
	CReportSection* rptGrp = NULL;
	CString szPos;
	//if (bNewDept && m_nDeptSum[12] > 0){
	//	rptGrp = rpt->AddDetail(rpt->GetGroupFooter(1));
	//	if (!rptGrp) return;
	if (pDeptGroup)
		for (int i = 0; i < 18; i++){
			szPos.Format(_T("s%d"), i+7);
			//pDeptGroup->SetValue(_T("grand"), _T("Cộng khoa:"));
			pDeptGroup->SetValue(szPos, ToString(m_nDeptSum[i]));
		}
	//}
	//if (bNewDate && m_nDaySum[12] > 0){
	//	rptGrp = rpt->AddDetail(rpt->GetGroupFooter(1));
	//	if (!rptGrp) return;
	if (pDateGroup)
		for (int i = 0; i < 18; i++){
			szPos.Format(_T("s%d"), i+7);
			//pDateGroup->SetValue(_T("grand"), _T("Cộng ngày:"));
			pDateGroup->SetValue(szPos, ToString(m_nDaySum[i]));
		}
	//}
}

void CFMServicePaidSummary::OnPrintGroupSummary(CReport* rpt, bool bNewDate, bool bNewDept){
	//return;
	CReportSection* rptGrp = NULL;
	CString szPos;
	if (bNewDept && m_nDeptSum[12] > 0){
		rptGrp = rpt->AddDetail(rpt->GetGroupFooter(1));
		if (!rptGrp) return;
		for (int i = 0; i < 18; i++){
			szPos.Format(_T("s%d"), i+7);
			rptGrp->SetValue(_T("grand"), _T("Cộng khoa:"));
			rptGrp->SetValue(szPos, ToString(m_nDeptSum[i]));
		}
	}
	if (bNewDate && m_nDaySum[12] > 0){
		rptGrp = rpt->AddDetail(rpt->GetGroupFooter(1));
		if (!rptGrp) return;
		for (int i = 0; i < 18; i++){
			szPos.Format(_T("s%d"), i+7);
			rptGrp->SetValue(_T("grand"), _T("Cộng ngày:"));
			rptGrp->SetValue(szPos, ToString(OnRound(m_nDaySum[i])));
		}
	}
}

void CFMServicePaidSummary::OnPrintGroupDescr(CReport* rpt, CRecord* rs, bool bNewDate, bool bNewDept){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReportSection* rptGroup = NULL;
	CString tmpStr;
	if (bNewDate){
		rptGroup = rpt->AddDetail(rpt->GetGroupHeader(0));
		if (!rptGroup) return;
		tmpStr.Format(_T("Ngày %s"), CDate::Convert(rs->GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));
		rptGroup->SetValue(_T("GroupName"), tmpStr);
	}
	if (bNewDept){
		rptGroup = rpt->AddDetail(rpt->GetGroupHeader(0));
		if (!rptGroup) return;
		rptGroup->SetValue(_T("GroupName"), pMF->GetDepartmentName(rs->GetValue(_T("dept_id"))));
	}
}

void CFMServicePaidSummary::OnPrintGroupDescr(CReport* rpt, CRecord* rs, bool bNewDate, bool bNewDept, CReportSection** ppDateGroup, CReportSection** ppDeptGroup){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReportSection* rptGroup = NULL;
	CString tmpStr;
	if (bNewDate){
		rptGroup = rpt->AddDetail(rpt->GetGroupFooter(1));
		if (!rptGroup) return;
		*ppDateGroup = rptGroup;
		tmpStr.Format(_T("Ngày %s"), CDate::Convert(rs->GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));
		rptGroup->SetValue(_T("grand"), tmpStr);
	}
	if (bNewDept){
		rptGroup = rpt->AddDetail(rpt->GetGroupFooter(1));
		if (!rptGroup) return;
		*ppDeptGroup = rptGroup;
		rptGroup->SetValue(_T("grand"), pMF->GetDepartmentName(rs->GetValue(_T("dept_id"))));
	}
}

void CFMServicePaidSummary::OnPrintDetail(CReport* rpt, CRecord* rs)
{
	CReportSection* rptDetail = rpt->AddDetail();
	CString tmpStr;
	double nTmp = 0;
	int nIndex = 1;	
	rptDetail->SetValue(_T("1"), int2str(nIndex++));
	rptDetail->SetValue(_T("2"), rs->GetValue(_T("ho_ten")));
	rptDetail->SetValue(_T("3"), rs->GetValue(_T("docno")));
	rptDetail->SetValue(_T("4"), rs->GetValue(_T("dept_Id")));
	rptDetail->SetValue(_T("5"), CDate::Convert(rs->GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy));
	rptDetail->SetValue(_T("6"), CDate::Convert(rs->GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy));
	for (int i = 0; i < 18; i++) rptDetail->SetValue(int2str(i+7), rs->GetValue(m_arr_data_name.GetAt(i)));
}

void CFMServicePaidSummary::OnPrintDetail(CReport* rpt, CReportSection* ppDetail, CRecord* rs){
	(ppDetail) = rpt->AddDetail();
	CString tmpStr;
	double nTmp = 0;
	int nIndex = 1;	
	(ppDetail)->SetValue(_T("1"), int2str(nIndex++));
	(ppDetail)->SetValue(_T("2"), rs->GetValue(_T("ho_ten")));
	(ppDetail)->SetValue(_T("3"), rs->GetValue(_T("docno")));
	(ppDetail)->SetValue(_T("4"), rs->GetValue(_T("dept_Id")));
	(ppDetail)->SetValue(_T("5"), CDate::Convert(rs->GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy));
	(ppDetail)->SetValue(_T("6"), CDate::Convert(rs->GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy));
	for (int i = 0; i < 18; i++) (ppDetail)->SetValue(int2str(i+7), rs->GetValue(m_arr_data_name.GetAt(i)));
}

void CFMServicePaidSummary::OnCalcData(CRecord* rs, bool& bNewDate, bool& bNewDept)
{
	double nTmp = 0;
	for (int i = 0; i < 18; i++){
		rs->GetValue(m_arr_data_name.GetAt(i), nTmp);
		if (bNewDate){	
			m_nTotal[i] += OnRound(m_nDaySum[i]);
			m_nDaySum[i] = 0;
		}
		m_nDaySum[i] += nTmp;
		if (bNewDept)	m_nDeptSum[i] = 0;
		m_nDeptSum[i] += nTmp;
		//m_nTotal[i] += nTmp;
	}
	if (bNewDate) bNewDate = false;
	if (bNewDept) bNewDept = false;
}

void CFMServicePaidSummary::ResetVar(){
	for (int i = 0; i < 18; i++){
		m_nTotal[i] = 0;
		m_nDeptSum[i] = 0;
		m_nDaySum[i] = 0;
	}
	m_szPrevDate.Empty();
	m_szPrevDept.Empty();
}

CString CFMServicePaidSummary::GetQueryString()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	//szWhere.Format(_T(" and fac_cash_id in(%s) "), szReceiptStr);
	if (nCount <1000)
		szWhere.Format(_T(" AND fac_cash_id in(%s) "), szReceiptStr);
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
		szIds.AppendFormat(_T(" fac_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}
	_tprintf(_T("\nszWhere: %s\n"), szWhere);
		//szWhere.AppendFormat(_T(" AND fac_cash_id in(select IDX from tmp_fa_cash_C11 WHERE userid = '%s') "), pMF->m_szUser);
	
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
		//szOrderBy.Format(_T(" , dept_id, firstname "));
		szOrderBy.Format(_T(" , dept_id"));
	}
	//else
		//szOrderBy.Format(_T(" , firstname, posted_date "));


	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and chindex='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and chindex='II' "));
	}
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);

	if (m_bPolicyObjectFilter)
	{
		szWhere.AppendFormat(_T(" AND (TIEN_THUOC_BH + TIEN_VAT_TU_BH)>0"));
	}
	szSQL.Format(_T("SELECT    Get_patientname(DOC_NO) HO_TEN, ") \
	_T("           DOC_NO docno, ") \
	_T("           NGAY_VAO, ") \
	_T("           NGAY_RA, ") \
	_T("		   chindex, trunc(fac_posteddate) posted_date, dept_id,") \
	_T("           SUM(SO_NGAY_DT) SO_NGAY_DT, ") \
	_T("           SUM(TIEN_KHAM) TIEN_KHAM, ") \
	_T("           SUM(TIEN_GIUONG) TIEN_GIUONG, ") \
	_T("           SUM(TIEN_PTTT) TIEN_PTTT, ") \
	_T("           SUM(TIEN_XN) TIEN_XN, ") \
	_T("           SUM(TIEN_MAY_KTC) TIEN_MAY_KTC, ") \
	_T("           SUM(TIEN_THUOC) TIEN_THUOC, ") \
	_T("           SUM(TIEN_VAT_TU) TIEN_VAT_TU, ") \
	_T("		   SUM(TIEN_THUOC_BH) TIEN_THUOC_BH,") \
	_T("		   SUM(TIEN_VAT_TU_BH) TIEN_VAT_TU_BH,") \
	_T("		   SUM(THUOC_SUDUNG+THUOC_SUDUNG_OPEN) THUOC_SUDUNG,") \
	_T("		   SUM(VAT_TU_SUDUNG+VAT_TU_SUDUNG_OPEN) VAT_TU_SUDUNG,") \
	_T("           SUM(TIEN_AN) TIEN_AN, ") \
	_T("           SUM(THU_KHAC) THU_KHAC, ") \
	_T("           SUM(TONG_THU) TONG_THU, ") \
	_T("           SUM(TRICH_TAM_GUI) TRICH_TAM_GUI, ") \
	_T("           CASE WHEN SUM(TONG_THU) > SUM(TRICH_TAM_GUI) THEN SUM(TONG_THU) - SUM(TRICH_TAM_GUI) ") \
	_T("           ELSE 0 ") \
	_T("           END THU, ") \
	_T("           CASE WHEN SUM(TONG_THU) <= SUM(TRICH_TAM_GUI) THEN SUM(TRICH_TAM_GUI) - SUM(TONG_THU) + SUM(TRA_LAI)") \
	_T("           ELSE 0 ") \
	_T("           END CHI ") \
	_T(" FROM      FA_CASH ") \
	_T(" INNER JOIN (SELECT    HFE_CASH_ID CASH_ID, ") \
	_T("					  case when i.hfe_class = 'I' AND NVL(htr_outpatient, 'N') <> 'Y' THEN 'I' ELSE 'II' END chindex,") \
	_T("					  trunc(hfe_date) invoice_date,") \
	_T("					  hfe_deptid dept_id,") \
	_T("                      HFE_DOCNO DOC_NO, ") \
	_T("                      CASE WHEN I.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO, ") \
	_T("                      CASE WHEN I.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_QUANTITY), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND F.HFE_TYPE = 'B' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						SO_NGAY_DT, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND F.HFE_TYPE = 'E' AND (f.hfe_deptid <> 'C1.3' OR (f.hfe_deptid = 'C1.3' AND f.hfe_unitprice <> 150000)) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_KHAM, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND (F.HFE_TYPE = 'B' OR (f.hfe_type = 'E' AND f.hfe_unitprice = 150000)) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_GIUONG, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND F.HFE_TYPE = 'O' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_PTTT, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, hms_fee_list WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND f.hfe_itemid = hfl_feeid AND f.hfe_type IN ( 'P', 'T' ) AND Nvl(hfl_hitechmachine, 'N') <> 'Y' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_XN, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, hms_fee_list WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND f.hfe_itemid = hfl_feeid AND Nvl(hfl_hitechmachine, 'N') = 'Y' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_MAY_KTC, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id = 7 AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND mp_org_id = 'PM' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_THUOC, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id = 7 AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND mp_org_id = 'MA' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_VAT_TU, ") \

	_T("                      (SELECT Coalesce(SUM(F.HFE_COST-F.HFE_inspaid), 0) ") \
	
	//_T("     (SELECT CASE WHEN SUM(NVL(f.hfe_diffpaid, 0)) > 0 ") \
	//_T("     THEN SUM(f.hfe_diffpaid)") \
	//_T("     ELSE SUM(f.hfe_patdebt+f.hfe_patpaid)") \
	//_T("     END AS amount") \
	
	_T("                        FROM   HMS_FEE F, m_product_item, m_product, M_STORAGELIST, hms_pharmaorder_view pv ") \
	_T("						WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid ") \
	_T("						AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) ") \
	_T("						AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id ") \
	_T("						AND F.HFE_TYPE IN ( 'D', 'M' ) ") \
	_T("						AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND mp_org_id = 'PM' ") \
	_T("						AND msl_storage_id = pv.hpo_storage_id AND MSL_CATEGORY='I'")\
	_T("						AND (f.hfe_cost - f.hfe_inspaid) > 0")\
	//_T("						AND hpo_object_id NOT            IN (1,3,7,8,13)")\//
	_T("						AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_THUOC_BH, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id not in (1,3,7,8,13) AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND mp_org_id = 'MA' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_VAT_TU_BH, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id = 7 AND  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND mp_org_id = 'PM') ") \
	_T("						THUOC_SUDUNG, ") \
	_T("     (select COALESCE(SUM(pl.Hpol_Qtyorder*pl.hpol_unitprice),0) from Hms_Operation op") \
	_T("     left join hms_pharmaorder_view pv on (op.ho_docno=pv.hpo_docno and op.ho_idx=pv.Hpo_Reference_Id)") \
	_T("     left join Hms_Pharmaorderline pl on (pv.hpo_docno=pl.hpol_docno and pv.hpo_orderid=Pl.Hpol_Orderid)") \
	_T("     left join M_Product pr on (pl.Hpol_Product_Id=pr.MP_PRODUCT_ID)") \
	_T("     WHERE hpo_object_id in (7)") \
	_T("     AND op.ho_DOCNO                 = I.HFE_DOCNO") \
	_T("     AND op.ho_INVOICENO             = I.HFE_INVOICENO    ") \
	_T("     AND Pl.Hfe_Refstatus='O'") \
	_T("     AND CAST(pr.MP_ORG_ID AS NVARCHAR2(2)) ='PM'") \
	_T("     )THUOC_SUDUNG_OPEN, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id = 7 AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND mp_org_id = 'MA') ") \
	_T("						VAT_TU_SUDUNG, ") \
	_T(" (select COALESCE(SUM(pl.Hpol_Qtyorder*pl.hpol_unitprice),0) from Hms_Operation op") \
	_T("     left join hms_pharmaorder_view pv on (op.ho_docno=pv.hpo_docno and op.ho_idx=pv.Hpo_Reference_Id)") \
	_T("     left join Hms_Pharmaorderline pl on (pv.hpo_docno=pl.hpol_docno and pv.hpo_orderid=Pl.Hpol_Orderid)") \
	_T("     left join M_Product pr on (pl.Hpol_Product_Id=pr.MP_PRODUCT_ID)") \
	_T("     WHERE hpo_object_id in (7)") \
	_T("     AND op.ho_DOCNO                 = I.HFE_DOCNO") \
	_T("     AND op.ho_INVOICENO             = I.HFE_INVOICENO    ") \
	_T("     AND Pl.Hfe_Refstatus='O'") \
	_T("     AND CAST(pr.MP_ORG_ID AS NVARCHAR2(2)) ='MA'") \
	_T("     )VAT_TU_SUDUNG_OPEN, ") \

	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Substr(f.hfe_group, 1, 2) = 'FF' AND NVL(f.hfe_category, 'N') = 'N' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_AN, ") \
	_T("                      CASE WHEN I.HFE_TYPE <> 'O' THEN (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND F.HFE_TYPE IN( 'F', 'X' ) AND Substr(F.HFE_GROUP, 1, 2) <> 'FF' AND Nvl(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ELSE I.HFE_AMOUNT END ") \
	_T("						THU_KHAC, ") \
	_T("                      i.hfe_amount - i.hfe_freeamount - i.hfe_otherpaid TONG_THU, ") \
	_T("					  0 TRA_LAI,") \
	_T("                      i.hfe_deposit TRICH_TAM_GUI ") \
	_T("            FROM      HMS_FEE_INVOICE_VIEW_V2 I ") \
	_T("            LEFT JOIN HMS_DOC ON ( HFE_DOCNO = HD_DOCNO ) ") \
	_T("            LEFT JOIN HMS_CLINICAL_RECORD ON ( HFE_DOCNO = HCR_DOCNO ) ") \
	_T("		    LEFT JOIN hms_treatment_record ON (htr_docno = hcr_docno AND hcr_refidx = htr_idx)") \
	_T("            WHERE     i.HFE_CASH_ID > 0 ") \
	_T("			UNION ALL") \
	_T("			SELECT    r.HFE_CASH_ID CASH_ID, ") \
	_T("					  case when r.hfe_class = 'I' AND NVL(htr_outpatient, 'N') <> 'Y' THEN 'I' ELSE 'II' END chindex,") \
	_T("					  trunc(r.hfe_date) invoice_date,") \
	_T("					  r.hfe_deptid dept_id,") \
	_T("                      r.HFE_DOCNO DOC_NO, ") \
	_T("                      CASE WHEN r.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO, ") \
	_T("                      CASE WHEN r.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA, ") \
	_T("                      0 SO_NGAY_DT, ") \
	_T("                      0 TIEN_KHAM, ") \
	_T("                      0 TIEN_GIUONG, ") \
	_T("                      0 TIEN_PTTT, ") \
	_T("                      0 TIEN_XN, ") \
	_T("                      0 TIEN_MAY_KTC, ") \
	_T("                      0 TIEN_THUOC, ") \
	_T("                      0 TIEN_VAT_TU, 0 TIEN_THUOC_BH, 0 TIEN_VAT_TU_BH, 0 THUOC_SUDUNG, 0 VAT_TU_SUDUNG,0 THUOC_SUDUNG_OPEN, 0 VAT_TU_SUDUNG_OPEN,") \
	_T("                      0 TIEN_AN, ") \
	_T("                      0 THU_KHAC, ") \
	_T("                      0 TONG_THU, ") \
	_T("					  case when r.hfe_type = 'E' THEN r.hfe_amount ELSE 0 END TRA_LAI,") \
	_T("                      case when r.hfe_type = 'F' THEN r.hfe_amount ELSE 0 END TRICH_TAM_GUI ") \
	_T("            FROM      HMS_FEE_REFUND r ") \
	_T("			LEFT JOIN hms_fee_deposit d ON (r.hfe_refidx = d.hfe_invoiceno)") \
	_T("            LEFT JOIN HMS_DOC ON ( r.HFE_DOCNO = HD_DOCNO ) ") \
	_T("            LEFT JOIN HMS_CLINICAL_RECORD ON ( r.HFE_DOCNO = HCR_DOCNO ) ") \
	_T("		    LEFT JOIN hms_treatment_record ON (htr_docno = hcr_docno AND hcr_refidx = htr_idx)") \
	_T("            WHERE     r.HFE_CASH_ID > 0 AND r.hfe_status = 'P' AND (r.hfe_type = 'E' OR (r.hfe_type = 'F' AND NVL(d.hfe_status, 'N') = 'R'))") \
	//Bổ sung nghiệp vụ trả lại ở CTXH nhưng không có hfe_refidx và hfe_type='G'
	_T(" UNION ALL") \
	_T("   SELECT r.HFE_CASH_ID CASH_ID,   ") \
	_T("     'I' as chindex,") \
	_T("     TRUNC(r.hfe_date) invoice_date,") \
	_T("     r.hfe_deptid dept_id,") \
	_T("     r.HFE_DOCNO DOC_NO,") \
	_T("     HD_ADMITDATE as NGAY_VAO,") \
	_T("     HD_ENDDATE as NGAY_RA,") \
	_T("     0 SO_NGAY_DT,") \
	_T("     0 TIEN_KHAM,") \
	_T("     0 TIEN_GIUONG,") \
	_T("     0 TIEN_PTTT,") \
	_T("     0 TIEN_XN,") \
	_T("     0 TIEN_MAY_KTC,") \
	_T("     0 TIEN_THUOC,") \
	_T("     0 TIEN_VAT_TU,") \
	_T("     0 TIEN_THUOC_BH,") \
	_T("     0 TIEN_VAT_TU_BH,") \
	_T("     0 THUOC_SUDUNG,") \
	_T("     0 VAT_TU_SUDUNG,") \
	_T("     0 THUOC_SUDUNG_OPEN,") \
	_T("     0 VAT_TU_SUDUNG_OPEN,") \
	_T("     0 TIEN_AN,") \
	_T("     0 THU_KHAC,") \
	_T("     0 TONG_THU,") \
	_T("     0 TRA_LAI,") \
	_T("     r.hfe_amount as TRICH_TAM_GUI") \
	_T("   FROM HMS_FEE_REFUND r") \
	_T("   LEFT JOIN HMS_DOC") \
	_T("   ON ( r.HFE_DOCNO = HD_DOCNO )") \
	_T("   WHERE r.hfe_status = 'P'") \
	_T("   AND r.hfe_type     = 'G'") \
	_T("   AND r.hfe_refidx   = 0 ") \
	

	_T("			) INVOICE_TBL ON ( FAC_CASH_ID = CASH_ID ) ") \
	_T(" WHERE 1=1 %s") \
	_T(" GROUP BY DOC_NO,NGAY_VAO,NGAY_RA, chindex, trunc(fac_posteddate), dept_id") \
	_T(" ORDER BY trunc(fac_posteddate) %s"), szWhere, szOrderBy);

//_msg(_T("%s"), szSQL);
	return szSQL;
	szSQL.Format(_T("WITH tbl_invoice") \
	_T("     AS (SELECT    HFE_CASH_ID CASH_ID,") \
	_T("                   CASE WHEN i.hfe_class = 'I' THEN 'I'") \
	_T("                   ELSE 'II'") \
	_T("                   END chindex,") \
	_T("                   Trunc(hfe_date) invoice_date,") \
	_T("                   hfe_deptid dept_id,") \
	_T("                   HFE_DOCNO DOC_NO,") \
	_T("                   CASE WHEN I.HFE_CLASS = 'I' THEN HCR_ADMITDATE") \
	_T("                   ELSE HD_ADMITDATE") \
	_T("                   END NGAY_VAO,") \
	_T("                   CASE WHEN I.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE") \
	_T("                   ELSE HD_ENDDATE") \
	_T("                   END NGAY_RA,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_QUANTITY), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   F.HFE_TYPE = 'B' AND Nvl(f.hfe_category, 'N') NOT IN(") \
	_T("                                                        'Y', 'BQP', 'BBV' )") \
	_T("                           AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) SO_NGAY_DT,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   F.HFE_TYPE = 'E' AND ( f.hfe_deptid <> 'C1.3'  OR (") \
	_T("                                                          f.hfe_deptid = 'C1.3' AND") \
	_T("                                                          f.hfe_unitprice <> 150000 ) ) AND") \
	_T("                                   Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_KHAM,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   ( F.HFE_TYPE = 'B'  OR ( f.hfe_type = 'E' AND") \
	_T("                                                            f.hfe_unitprice = 150000") \
	_T("                                                          )") \
	_T("                                   ) AND") \
	_T("                                   Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_GIUONG,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   F.HFE_TYPE = 'O' AND Nvl(f.hfe_category, 'N') NOT IN(") \
	_T("                                                        'Y', 'BQP', 'BBV' )") \
	_T("                           AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_PTTT,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F,hms_fee_list") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   f.hfe_itemid = hfl_feeid AND f.hfe_type IN ( 'P', 'T' ) AND") \
	_T("                                   Nvl(hfl_hitechmachine, 'N') <> 'Y' AND") \
	_T("                           Nvl(f.hfe_category, 'N') NOT IN(") \
	_T("                           'Y', 'BQP', 'BBV' ) AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_XN,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F,hms_fee_list") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   f.hfe_itemid = hfl_feeid AND Nvl(hfl_hitechmachine, 'N') = 'Y'") \
	_T("                           AND") \
	_T("                                   Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_MAY_KTC,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F,m_product_item,m_product") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND") \
	_T("                           mpi_product_id = mp_product_id") \
	_T("                           AND") \
	_T("                                   F.HFE_TYPE IN ( 'D', 'M' ) AND") \
	_T("                           Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )") \
	_T("                           AND") \
	_T("                                   mp_org_id = 'PM' AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                                                            i.hfe_invoiceno))") \
	_T("                   TIEN_THUOC,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F,m_product_item,m_product") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND") \
	_T("                           mpi_product_id = mp_product_id") \
	_T("                           AND") \
	_T("                                   F.HFE_TYPE IN ( 'D', 'M' ) AND") \
	_T("                           Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )") \
	_T("                           AND") \
	_T("                                   mp_org_id = 'MA' AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                                                            i.hfe_invoiceno))") \
	_T("                   TIEN_VAT_TU") \
	_T("                   ,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   Substr(f.hfe_group, 1, 2) = 'FF' AND") \
	_T("                           Nvl(f.hfe_category, 'N') = 'N'") \
	_T("                           AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_AN,") \
	_T("                   CASE WHEN I.HFE_TYPE <> 'O' THEN (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                                                FROM   HMS_FEE F") \
	_T("                                                WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND") \
	_T("                                                       F.HFE_INVOICENO = I.HFE_INVOICENO") \
	_T("                                                       AND") \
	_T("                                                       F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                                               F.HFE_TYPE IN( 'F', 'X' ) AND") \
	_T("                                                       Substr(F.HFE_GROUP, 1, 2) <> 'FF' AND") \
	_T("                                                               Nvl(F.HFE_CATEGORY, 'N') NOT IN(") \
	_T("                                                               'Y', 'BQP', 'BBV' ) AND") \
	_T("                                                       f.hfe_fee_id NOT IN") \
	_T("                                                       (SELECT hfe_invoiceline_id") \
	_T("                                                            FROM   hms_fee_discountline") \
	_T("                                                                   d") \
	_T("                                                            WHERE  d.hfe_docno =") \
	_T("                                                                   f.hfe_docno AND") \
	_T("                                                                   d.hfe_refidx =") \
	_T("                                                       i.hfe_invoiceno))") \
	_T("                   ELSE I.HFE_AMOUNT") \
	_T("                   END THU_KHAC,") \
	_T("                   i.hfe_amount - i.hfe_freeamount - i.hfe_otherpaid TONG_THU,") \
	_T("                   0 TRA_LAI,") \
	_T("                   i.hfe_deposit TRICH_TAM_GUI") \
	_T("         FROM      HMS_FEE_INVOICE_VIEW_V2 I") \
	_T("         LEFT JOIN HMS_DOC ON ( HFE_DOCNO = HD_DOCNO )") \
	_T("         LEFT JOIN HMS_CLINICAL_RECORD ON ( HFE_DOCNO = HCR_DOCNO )") \
	_T("         WHERE     i.HFE_CASH_ID > 0),") \
	_T("     tbl_deposit_return") \
	_T("     AS (SELECT    r.HFE_CASH_ID CASH_ID,") \
	_T("                   CASE WHEN r.hfe_class = 'I' THEN 'I'") \
	_T("                   ELSE 'II'") \
	_T("                   END chindex,") \
	_T("                   Trunc(r.hfe_date) invoice_date,") \
	_T("                   r.hfe_deptid dept_id,") \
	_T("                   r.HFE_DOCNO DOC_NO,") \
	_T("                   CASE WHEN r.HFE_CLASS = 'I' THEN HCR_ADMITDATE") \
	_T("                   ELSE HD_ADMITDATE") \
	_T("                   END NGAY_VAO,") \
	_T("                   CASE WHEN r.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE") \
	_T("                   ELSE HD_ENDDATE") \
	_T("                   END NGAY_RA,") \
	_T("                   0 SO_NGAY_DT,") \
	_T("                   0 TIEN_KHAM,") \
	_T("                   0 TIEN_GIUONG,") \
	_T("                   0 TIEN_PTTT,") \
	_T("                   0 TIEN_XN,") \
	_T("                   0 TIEN_MAY_KTC,") \
	_T("                   0 TIEN_THUOC,") \
	_T("                   0 TIEN_VAT_TU,") \
	_T("                   0 TIEN_AN,") \
	_T("                   0 THU_KHAC,") \
	_T("                   0 TONG_THU,") \
	_T("                   CASE WHEN r.hfe_type = 'E' THEN r.hfe_amount") \
	_T("                   ELSE 0") \
	_T("                   END TRA_LAI,") \
	_T("                   CASE WHEN r.hfe_type = 'F' THEN r.hfe_amount") \
	_T("                   ELSE 0") \
	_T("                   END TRICH_TAM_GUI") \
	_T("         FROM      HMS_FEE_REFUND r") \
	_T("         LEFT JOIN hms_fee_deposit d ON ( r.hfe_refidx = d.hfe_invoiceno )") \
	_T("         LEFT JOIN HMS_DOC ON ( r.HFE_DOCNO = HD_DOCNO )") \
	_T("         LEFT JOIN HMS_CLINICAL_RECORD ON ( r.HFE_DOCNO = HCR_DOCNO )") \
	_T("         WHERE     r.HFE_CASH_ID > 0 AND r.hfe_status = 'P' AND ( r.hfe_type = 'E'  OR (") \
	_T("                                                                  r.hfe_type = 'F' AND") \
	_T("                                                                  Nvl(d.hfe_status, 'N') = 'R' ) )),") \
	_T("     tbl_main") \
	_T("     AS (SELECT *") \
	_T("         FROM   tbl_invoice") \
	_T("         UNION ALL") \
	_T("         SELECT *") \
	_T("         FROM   tbl_deposit_return)") \
	_T("SELECT     Get_patientname(DOC_NO) HO_TEN,") \
	_T("           DOC_NO docno,") \
	_T("           NGAY_VAO,") \
	_T("           NGAY_RA,") \
	_T("           chindex,") \
	_T("           Trunc(fac_posteddate) posted_date,") \
	_T("           dept_id,") \
	_T("           SUM(SO_NGAY_DT) SO_NGAY_DT,") \
	_T("           SUM(TIEN_KHAM) TIEN_KHAM,") \
	_T("           SUM(TIEN_GIUONG) TIEN_GIUONG,") \
	_T("           SUM(TIEN_PTTT) TIEN_PTTT,") \
	_T("           SUM(TIEN_XN) TIEN_XN,") \
	_T("           SUM(TIEN_MAY_KTC) TIEN_MAY_KTC,") \
	_T("           SUM(TIEN_THUOC) TIEN_THUOC,") \
	_T("           SUM(TIEN_VAT_TU) TIEN_VAT_TU,") \
	_T("           SUM(TIEN_AN) TIEN_AN,") \
	_T("           SUM(THU_KHAC) THU_KHAC,") \
	_T("           SUM(TONG_THU) TONG_THU,") \
	_T("           SUM(TRICH_TAM_GUI) TRICH_TAM_GUI,") \
	_T("           CASE WHEN SUM(TONG_THU) > SUM(TRICH_TAM_GUI) THEN SUM(TONG_THU) - SUM(TRICH_TAM_GUI)") \
	_T("           ELSE 0") \
	_T("           END THU,") \
	_T("           CASE WHEN SUM(TONG_THU) <= SUM(TRICH_TAM_GUI) THEN") \
	_T("                SUM(TRICH_TAM_GUI) - SUM(TONG_THU) + SUM(TRA_LAI)") \
	_T("           ELSE 0") \
	_T("           END CHI") \
	_T("FROM       FA_CASH") \
	_T("INNER JOIN tbl_main ON ( FAC_CASH_ID = CASH_ID )") \
	_T("WHERE      1 = 1") \
	_T("GROUP      BY DOC_NO,NGAY_VAO,NGAY_RA,chindex,Trunc(fac_posteddate),dept_id") \
	_T("ORDER      BY Trunc(fac_posteddate) "));

}
CString CFMServicePaidSummary::GetQueryString1()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	szWhere.Format(_T(" AND invoice_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
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
		//szOrderBy.Format(_T(" , dept_id, firstname "));
		szOrderBy.Format(_T(" , dept_id"));
	}
	//else
		//szOrderBy.Format(_T(" , firstname, posted_date "));


	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and chindex='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and chindex='II' "));
	}
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);
	szSQL.Format(_T("SELECT    Get_patientname(DOC_NO) HO_TEN, ") \
	_T("           DOC_NO docno, ") \
	_T("           NGAY_VAO, ") \
	_T("           NGAY_RA, ") \
	_T("		   chindex, trunc(invoice_date) posted_date, dept_id,") \
	_T("		   hp_workplace work_place,") \
	_T("		   ss_desc as rankname,") \
	_T("           SUM(SO_NGAY_DT) SO_NGAY_DT, ") \
	_T("           SUM(TIEN_KHAM) TIEN_KHAM, ") \
	_T("           SUM(TIEN_GIUONG) TIEN_GIUONG, ") \
	_T("           SUM(TIEN_PTTT) TIEN_PTTT, ") \
	_T("           SUM(TIEN_XN) TIEN_XN, ") \
	_T("           SUM(TIEN_MAY_KTC) TIEN_MAY_KTC, ") \
	_T("           SUM(TIEN_THUOC) TIEN_THUOC, ") \
	_T("           SUM(TIEN_VAT_TU) TIEN_VAT_TU, ") \
	_T("		   SUM(TIEN_THUOC_BH) TIEN_THUOC_BH,") \
	_T("		   SUM(TIEN_VAT_TU_BH) TIEN_VAT_TU_BH,") \
	_T("		   SUM(THUOC_SUDUNG+THUOC_SUDUNG_OPEN) THUOC_SUDUNG,") \
	_T("		   SUM(VAT_TU_SUDUNG+VAT_TU_SUDUNG_OPEN) VAT_TU_SUDUNG,") \
	_T("           SUM(TIEN_AN) TIEN_AN, ") \
	_T("           SUM(THU_KHAC) THU_KHAC, ") \
	//_T("           SUM(TONG_THU) TONG_THU, ") \//
	_T("           SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_PTTT+TIEN_XN+TIEN_MAY_KTC+TIEN_THUOC+TIEN_VAT_TU+TIEN_THUOC_BH+TIEN_AN+THU_KHAC) TONG_THU, ") \
	_T("           SUM(TRICH_TAM_GUI) TRICH_TAM_GUI, ") \
	_T("           CASE WHEN SUM(TONG_THU) > SUM(TRICH_TAM_GUI) THEN SUM(TONG_THU) - SUM(TRICH_TAM_GUI) ") \
	_T("           ELSE 0 ") \
	_T("           END THU, ") \
	_T("           CASE WHEN SUM(TONG_THU) <= SUM(TRICH_TAM_GUI) THEN SUM(TRICH_TAM_GUI) - SUM(TONG_THU) + SUM(TRA_LAI)") \
	_T("           ELSE 0 ") \
	_T("           END CHI ") \
	_T(" FROM      hms_fee_invoice fi ") \
	_T(" INNER JOIN (SELECT    HFE_CASH_ID CASH_ID, ") \
	_T("					  case when i.hfe_class = 'I' AND NVL(htr_outpatient, 'N') <> 'Y' THEN 'I' ELSE 'II' END chindex,") \
	_T("					  trunc(hfe_date) invoice_date,") \
	_T("					  hfe_deptid dept_id,") \
	_T("                      HFE_DOCNO DOC_NO, ") \
	_T("                      HFE_PATIENTNO patientno, ") \
	_T("                      hfe_invoiceno invoiceno, ") \
	_T("                      hd_rank as ranklevel, ") \
	_T("                      CASE WHEN I.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO, ") \
	_T("                      CASE WHEN I.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_QUANTITY), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND F.HFE_TYPE = 'B' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						SO_NGAY_DT, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND F.HFE_TYPE = 'E' AND (f.hfe_deptid <> 'C1.3' OR (f.hfe_deptid = 'C1.3' AND f.hfe_unitprice <> 150000)) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_KHAM, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND (F.HFE_TYPE = 'B' OR (f.hfe_type = 'E' AND f.hfe_unitprice = 150000)) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_GIUONG, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND F.HFE_TYPE = 'O' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_PTTT, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, hms_fee_list WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND f.hfe_itemid = hfl_feeid AND f.hfe_type IN ( 'P', 'T' ) AND Nvl(hfl_hitechmachine, 'N') <> 'Y' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_XN, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, hms_fee_list WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND f.hfe_itemid = hfl_feeid AND Nvl(hfl_hitechmachine, 'N') = 'Y' AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_MAY_KTC, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id in (1, 3, 8, 13) AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND mp_org_id = 'PM' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_THUOC, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id in (1, 3, 8, 13) AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND mp_org_id = 'MA' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_VAT_TU, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id not in (1, 3, 8, 13) AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND mp_org_id = 'PM' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_THUOC_BH, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id not in (1, 3, 8, 13) AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND mp_org_id = 'MA' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_VAT_TU_BH, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id in (1, 3, 8, 13) AND  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND mp_org_id = 'PM') ") \
	_T("						THUOC_SUDUNG, ") \
	_T("     (select COALESCE(SUM(pl.Hpol_Qtyorder*pl.hpol_unitprice),0) from Hms_Operation op") \
	_T("     left join hms_pharmaorder_view pv on (op.ho_docno=pv.hpo_docno and op.ho_idx=pv.Hpo_Reference_Id)") \
	_T("     left join Hms_Pharmaorderline pl on (pv.hpo_docno=pl.hpol_docno and pv.hpo_orderid=Pl.Hpol_Orderid)") \
	_T("     left join M_Product pr on (pl.Hpol_Product_Id=pr.MP_PRODUCT_ID)") \
	_T("     WHERE hpo_object_id               in (1, 3, 8, 13)") \
	_T("     AND op.ho_DOCNO                 = I.HFE_DOCNO") \
	_T("     AND op.ho_INVOICENO             = I.HFE_INVOICENO    ") \
	_T("     AND Pl.Hfe_Refstatus='O'") \
	_T("     AND CAST(pr.MP_ORG_ID AS NVARCHAR2(2)) ='PM'") \
	_T("     )THUOC_SUDUNG_OPEN, ") \
	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F, m_product_item, m_product, hms_pharmaorder_view pv WHERE pv.hpo_docno = f.hfe_docno AND pv.hpo_orderid = f.hfe_orderid AND hpo_object_id in (1, 3, 8, 13)  AND F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND mpi_product_id = mp_product_id AND F.HFE_TYPE IN ( 'D', 'M' ) AND mp_org_id = 'MA') ") \
	_T("						VAT_TU_SUDUNG, ") \
	_T(" (select COALESCE(SUM(pl.Hpol_Qtyorder*pl.hpol_unitprice),0) from Hms_Operation op") \
	_T("     left join hms_pharmaorder_view pv on (op.ho_docno=pv.hpo_docno and op.ho_idx=pv.Hpo_Reference_Id)") \
	_T("     left join Hms_Pharmaorderline pl on (pv.hpo_docno=pl.hpol_docno and pv.hpo_orderid=Pl.Hpol_Orderid)") \
	_T("     left join M_Product pr on (pl.Hpol_Product_Id=pr.MP_PRODUCT_ID)") \
	_T("     WHERE hpo_object_id             in (1, 3, 8, 13)") \
	_T("     AND op.ho_DOCNO                 = I.HFE_DOCNO") \
	_T("     AND op.ho_INVOICENO             = I.HFE_INVOICENO    ") \
	_T("     AND Pl.Hfe_Refstatus='O'") \
	_T("     AND CAST(pr.MP_ORG_ID AS NVARCHAR2(2)) ='MA'") \
	_T("     )VAT_TU_SUDUNG_OPEN, ") \

	_T("                      (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND Substr(f.hfe_group, 1, 2) = 'FF' AND NVL(f.hfe_category, 'N') = 'N' AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ") \
	_T("						TIEN_AN, ") \
	_T("                      CASE WHEN I.HFE_TYPE <> 'O' THEN (SELECT Coalesce(SUM(F.HFE_COST), 0) FROM   HMS_FEE F WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND F.HFE_STATUS IN( 'P', 'R' ) AND F.HFE_TYPE IN( 'F', 'X' ) AND Substr(F.HFE_GROUP, 1, 2) <> 'FF' AND Nvl(F.HFE_CATEGORY, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND d.hfe_refidx = i.hfe_invoiceno)) ELSE I.HFE_AMOUNT END ") \
	_T("						THU_KHAC, ") \
	_T("                      i.hfe_amount - i.hfe_freeamount - i.hfe_otherpaid TONG_THU, ") \
	_T("					  0 TRA_LAI,") \
	_T("                      i.hfe_deposit TRICH_TAM_GUI ") \
	_T("            FROM      HMS_FEE_INVOICE_VIEW_V2 I ") \
	_T("            LEFT JOIN HMS_DOC ON ( HFE_DOCNO = HD_DOCNO ) ") \
	_T("            LEFT JOIN HMS_CLINICAL_RECORD ON ( HFE_DOCNO = HCR_DOCNO ) ") \
	_T("		    LEFT JOIN hms_treatment_record ON (htr_docno = hcr_docno AND hcr_refidx = htr_idx)") \
	_T("            WHERE     i.HFE_STATUS ='P' ") \
	_T("			UNION ALL") \
	_T("			SELECT    r.HFE_CASH_ID CASH_ID, ") \
	_T("					  case when r.hfe_class = 'I' AND NVL(htr_outpatient, 'N') <> 'Y' THEN 'I' ELSE 'II' END chindex,") \
	_T("					  trunc(r.hfe_date) invoice_date,") \
	_T("					  r.hfe_deptid dept_id,") \
	_T("                      r.HFE_DOCNO DOC_NO, ") \
	_T("                      r.HFE_PATIENTNO patientno, ") \
	_T("                      r.hfe_invoiceno invoiceno, ") \
	_T("                      hd_rank as ranklevel, ") \
	_T("                      CASE WHEN r.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO, ") \
	_T("                      CASE WHEN r.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA, ") \
	_T("                      0 SO_NGAY_DT, ") \
	_T("                      0 TIEN_KHAM, ") \
	_T("                      0 TIEN_GIUONG, ") \
	_T("                      0 TIEN_PTTT, ") \
	_T("                      0 TIEN_XN, ") \
	_T("                      0 TIEN_MAY_KTC, ") \
	_T("                      0 TIEN_THUOC, ") \
	_T("                      0 TIEN_VAT_TU, 0 TIEN_THUOC_BH, 0 TIEN_VAT_TU_BH, 0 THUOC_SUDUNG, 0 VAT_TU_SUDUNG,0 THUOC_SUDUNG_OPEN, 0 VAT_TU_SUDUNG_OPEN,") \
	_T("                      0 TIEN_AN, ") \
	_T("                      0 THU_KHAC, ") \
	_T("                      0 TONG_THU, ") \
	_T("					  case when r.hfe_type = 'E' THEN r.hfe_amount ELSE 0 END TRA_LAI,") \
	_T("                      case when r.hfe_type = 'F' THEN r.hfe_amount ELSE 0 END TRICH_TAM_GUI ") \
	_T("            FROM      HMS_FEE_REFUND r ") \
	_T("			LEFT JOIN hms_fee_deposit d ON (r.hfe_refidx = d.hfe_invoiceno)") \
	_T("            LEFT JOIN HMS_DOC ON ( r.HFE_DOCNO = HD_DOCNO ) ") \
	_T("            LEFT JOIN HMS_CLINICAL_RECORD ON ( r.HFE_DOCNO = HCR_DOCNO ) ") \
	_T("		    LEFT JOIN hms_treatment_record ON (htr_docno = hcr_docno AND hcr_refidx = htr_idx)") \
	_T("            WHERE     r.hfe_status = 'P' AND (r.hfe_type = 'E' OR (r.hfe_type = 'F' AND NVL(d.hfe_status, 'N') = 'R'))") \
	_T("			) INVOICE_TBL ON (fi.hfe_docno = doc_no AND fi.hfe_invoiceno=invoiceno) ") \
	_T("		    LEFT JOIN hms_patient ON (hfe_patientno=hp_patientno)") \
	_T("		    LEFT JOIN sys_sel ON (ss_id='hms_rank' and ss_code=ranklevel AND doc_no=hfe_docno)") \
	_T(" WHERE 1=1 and HFE_OBJECTID in  (1, 3, 8, 13) %s") \
	_T(" GROUP BY DOC_NO,NGAY_VAO,NGAY_RA, chindex, trunc(invoice_date), dept_id, patientno,  hp_workplace,  ss_desc") \
	_T(" ORDER BY trunc(invoice_date) %s"), szWhere, szOrderBy);

   //_msg(_T("%s"), szSQL);
	return szSQL;
	szSQL.Format(_T("WITH tbl_invoice") \
	_T("     AS (SELECT    HFE_CASH_ID CASH_ID,") \
	_T("                   CASE WHEN i.hfe_class = 'I' THEN 'I'") \
	_T("                   ELSE 'II'") \
	_T("                   END chindex,") \
	_T("                   Trunc(hfe_date) invoice_date,") \
	_T("                   hfe_deptid dept_id,") \
	_T("                   HFE_DOCNO DOC_NO,") \
	_T("                   CASE WHEN I.HFE_CLASS = 'I' THEN HCR_ADMITDATE") \
	_T("                   ELSE HD_ADMITDATE") \
	_T("                   END NGAY_VAO,") \
	_T("                   CASE WHEN I.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE") \
	_T("                   ELSE HD_ENDDATE") \
	_T("                   END NGAY_RA,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_QUANTITY), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   F.HFE_TYPE = 'B' AND Nvl(f.hfe_category, 'N') NOT IN(") \
	_T("                                                        'Y', 'BQP', 'BBV' )") \
	_T("                           AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) SO_NGAY_DT,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   F.HFE_TYPE = 'E' AND ( f.hfe_deptid <> 'C1.3'  OR (") \
	_T("                                                          f.hfe_deptid = 'C1.3' AND") \
	_T("                                                          f.hfe_unitprice <> 150000 ) ) AND") \
	_T("                                   Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_KHAM,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   ( F.HFE_TYPE = 'B'  OR ( f.hfe_type = 'E' AND") \
	_T("                                                            f.hfe_unitprice = 150000") \
	_T("                                                          )") \
	_T("                                   ) AND") \
	_T("                                   Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_GIUONG,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   F.HFE_TYPE = 'O' AND Nvl(f.hfe_category, 'N') NOT IN(") \
	_T("                                                        'Y', 'BQP', 'BBV' )") \
	_T("                           AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_PTTT,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F,hms_fee_list") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   f.hfe_itemid = hfl_feeid AND f.hfe_type IN ( 'P', 'T' ) AND") \
	_T("                                   Nvl(hfl_hitechmachine, 'N') <> 'Y' AND") \
	_T("                           Nvl(f.hfe_category, 'N') NOT IN(") \
	_T("                           'Y', 'BQP', 'BBV' ) AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_XN,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F,hms_fee_list") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   f.hfe_itemid = hfl_feeid AND Nvl(hfl_hitechmachine, 'N') = 'Y'") \
	_T("                           AND") \
	_T("                                   Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_MAY_KTC,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F,m_product_item,m_product") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND") \
	_T("                           mpi_product_id = mp_product_id") \
	_T("                           AND") \
	_T("                                   F.HFE_TYPE IN ( 'D', 'M' ) AND") \
	_T("                           Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )") \
	_T("                           AND") \
	_T("                                   mp_org_id = 'PM' AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                                                            i.hfe_invoiceno))") \
	_T("                   TIEN_THUOC,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F,m_product_item,m_product") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   Cast(hfe_itemid AS INTEGER) = mpi_product_item_id AND") \
	_T("                           mpi_product_id = mp_product_id") \
	_T("                           AND") \
	_T("                                   F.HFE_TYPE IN ( 'D', 'M' ) AND") \
	_T("                           Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )") \
	_T("                           AND") \
	_T("                                   mp_org_id = 'MA' AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                                                            i.hfe_invoiceno))") \
	_T("                   TIEN_VAT_TU") \
	_T("                   ,") \
	_T("                   (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                    FROM   HMS_FEE F") \
	_T("                    WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND F.HFE_INVOICENO = I.HFE_INVOICENO AND") \
	_T("                           F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                   Substr(f.hfe_group, 1, 2) = 'FF' AND") \
	_T("                           Nvl(f.hfe_category, 'N') = 'N'") \
	_T("                           AND") \
	_T("                           f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id") \
	_T("                                                    FROM   hms_fee_discountline d") \
	_T("                                                    WHERE  d.hfe_docno = f.hfe_docno AND") \
	_T("                                                           d.hfe_refidx =") \
	_T("                                               i.hfe_invoiceno)) TIEN_AN,") \
	_T("                   CASE WHEN I.HFE_TYPE <> 'O' THEN (SELECT Coalesce(SUM(F.HFE_COST), 0)") \
	_T("                                                FROM   HMS_FEE F") \
	_T("                                                WHERE  F.HFE_DOCNO = I.HFE_DOCNO AND") \
	_T("                                                       F.HFE_INVOICENO = I.HFE_INVOICENO") \
	_T("                                                       AND") \
	_T("                                                       F.HFE_STATUS IN( 'P', 'R' ) AND") \
	_T("                                                               F.HFE_TYPE IN( 'F', 'X' ) AND") \
	_T("                                                       Substr(F.HFE_GROUP, 1, 2) <> 'FF' AND") \
	_T("                                                               Nvl(F.HFE_CATEGORY, 'N') NOT IN(") \
	_T("                                                               'Y', 'BQP', 'BBV' ) AND") \
	_T("                                                       f.hfe_fee_id NOT IN") \
	_T("                                                       (SELECT hfe_invoiceline_id") \
	_T("                                                            FROM   hms_fee_discountline") \
	_T("                                                                   d") \
	_T("                                                            WHERE  d.hfe_docno =") \
	_T("                                                                   f.hfe_docno AND") \
	_T("                                                                   d.hfe_refidx =") \
	_T("                                                       i.hfe_invoiceno))") \
	_T("                   ELSE I.HFE_AMOUNT") \
	_T("                   END THU_KHAC,") \
	_T("                   i.hfe_amount - i.hfe_freeamount - i.hfe_otherpaid TONG_THU,") \
	_T("                   0 TRA_LAI,") \
	_T("                   i.hfe_deposit TRICH_TAM_GUI") \
	_T("         FROM      HMS_FEE_INVOICE_VIEW_V2 I") \
	_T("         LEFT JOIN HMS_DOC ON ( HFE_DOCNO = HD_DOCNO )") \
	_T("         LEFT JOIN HMS_CLINICAL_RECORD ON ( HFE_DOCNO = HCR_DOCNO )") \
	_T("         WHERE     i.HFE_CASH_ID > 0),") \
	_T("     tbl_deposit_return") \
	_T("     AS (SELECT    r.HFE_CASH_ID CASH_ID,") \
	_T("                   CASE WHEN r.hfe_class = 'I' THEN 'I'") \
	_T("                   ELSE 'II'") \
	_T("                   END chindex,") \
	_T("                   Trunc(r.hfe_date) invoice_date,") \
	_T("                   r.hfe_deptid dept_id,") \
	_T("                   r.HFE_DOCNO DOC_NO,") \
	_T("                   CASE WHEN r.HFE_CLASS = 'I' THEN HCR_ADMITDATE") \
	_T("                   ELSE HD_ADMITDATE") \
	_T("                   END NGAY_VAO,") \
	_T("                   CASE WHEN r.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE") \
	_T("                   ELSE HD_ENDDATE") \
	_T("                   END NGAY_RA,") \
	_T("                   0 SO_NGAY_DT,") \
	_T("                   0 TIEN_KHAM,") \
	_T("                   0 TIEN_GIUONG,") \
	_T("                   0 TIEN_PTTT,") \
	_T("                   0 TIEN_XN,") \
	_T("                   0 TIEN_MAY_KTC,") \
	_T("                   0 TIEN_THUOC,") \
	_T("                   0 TIEN_VAT_TU,") \
	_T("                   0 TIEN_AN,") \
	_T("                   0 THU_KHAC,") \
	_T("                   0 TONG_THU,") \
	_T("                   CASE WHEN r.hfe_type = 'E' THEN r.hfe_amount") \
	_T("                   ELSE 0") \
	_T("                   END TRA_LAI,") \
	_T("                   CASE WHEN r.hfe_type = 'F' THEN r.hfe_amount") \
	_T("                   ELSE 0") \
	_T("                   END TRICH_TAM_GUI") \
	_T("         FROM      HMS_FEE_REFUND r") \
	_T("         LEFT JOIN hms_fee_deposit d ON ( r.hfe_refidx = d.hfe_invoiceno )") \
	_T("         LEFT JOIN HMS_DOC ON ( r.HFE_DOCNO = HD_DOCNO )") \
	_T("         LEFT JOIN HMS_CLINICAL_RECORD ON ( r.HFE_DOCNO = HCR_DOCNO )") \
	_T("         WHERE     r.HFE_CASH_ID > 0 AND r.hfe_status = 'P' AND ( r.hfe_type = 'E'  OR (") \
	_T("                                                                  r.hfe_type = 'F' AND") \
	_T("                                                                  Nvl(d.hfe_status, 'N') = 'R' ) )),") \
	_T("     tbl_main") \
	_T("     AS (SELECT *") \
	_T("         FROM   tbl_invoice") \
	_T("         UNION ALL") \
	_T("         SELECT *") \
	_T("         FROM   tbl_deposit_return)") \
	_T("SELECT     Get_patientname(DOC_NO) HO_TEN,") \
	_T("           DOC_NO docno,") \
	_T("           NGAY_VAO,") \
	_T("           NGAY_RA,") \
	_T("           chindex,") \
	_T("           Trunc(fac_posteddate) posted_date,") \
	_T("           dept_id,") \
	_T("           SUM(SO_NGAY_DT) SO_NGAY_DT,") \
	_T("           SUM(TIEN_KHAM) TIEN_KHAM,") \
	_T("           SUM(TIEN_GIUONG) TIEN_GIUONG,") \
	_T("           SUM(TIEN_PTTT) TIEN_PTTT,") \
	_T("           SUM(TIEN_XN) TIEN_XN,") \
	_T("           SUM(TIEN_MAY_KTC) TIEN_MAY_KTC,") \
	_T("           SUM(TIEN_THUOC) TIEN_THUOC,") \
	_T("           SUM(TIEN_VAT_TU) TIEN_VAT_TU,") \
	_T("           SUM(TIEN_AN) TIEN_AN,") \
	_T("           SUM(THU_KHAC) THU_KHAC,") \
	_T("           SUM(TONG_THU) TONG_THU,") \
	_T("           SUM(TRICH_TAM_GUI) TRICH_TAM_GUI,") \
	_T("           CASE WHEN SUM(TONG_THU) > SUM(TRICH_TAM_GUI) THEN SUM(TONG_THU) - SUM(TRICH_TAM_GUI)") \
	_T("           ELSE 0") \
	_T("           END THU,") \
	_T("           CASE WHEN SUM(TONG_THU) <= SUM(TRICH_TAM_GUI) THEN") \
	_T("                SUM(TRICH_TAM_GUI) - SUM(TONG_THU) + SUM(TRA_LAI)") \
	_T("           ELSE 0") \
	_T("           END CHI") \
	_T("FROM       FA_CASH") \
	_T("INNER JOIN tbl_main ON ( FAC_CASH_ID = CASH_ID )") \
	_T("WHERE      1 = 1") \
	_T("GROUP      BY DOC_NO,NGAY_VAO,NGAY_RA,chindex,Trunc(fac_posteddate),dept_id") \
	_T("ORDER      BY Trunc(fac_posteddate) "));
}


double CFMServicePaidSummary::OnRound(double nToRound){
	nToRound += 0.5;
	return floor(nToRound);
}
int CFMServicePaidSummary::OnListCheckAllInvoice()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int k=0; k<m_wndList.GetItemCount(); k++)	
	{
		szItemText=m_wndList.GetItemText(k,1);
	if ((_T("PT"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(k, true);
		nCheck ++;
	}	
	else m_wndList.SetCheck(k, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMServicePaidSummary::OnListCheckAllRefund()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int j=0; j<m_wndList.GetItemCount(); j++)	
	{
		szItemText=m_wndList.GetItemText(j,1);
	if ((_T("PC"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(j, true);
		nCheck ++;
	}	
	else m_wndList.SetCheck(j, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
void CFMServicePaidSummary::OnExport1_ByDate()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	double nTmp = 0;
	int nIdx = 1, j = 0, nRow = 0, nCol = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[18], GrandAmt[18], nTotalClass[18], nGrandIO = 0, nTotalClassIO = 0, nTotalIO = 0;
	for (int i = 0; i < 18; i++)
	{
		GrandAmt[i] = 0;
		nTotal[i] = 0;
		nTotalClass[i] = 0;
	}

	CExcel xls;

	if (!xls.Load(_T("Exports\\BANGTONGHOPTHANHTOANCHIPHIDIEUTRINOITRUNGOAITRU.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}

	xls.SetWorksheet(0);

	data_name.Add(_T("so_ngay_dt"));
	data_name.Add(_T("tien_kham"));
	data_name.Add(_T("tien_giuong"));
	data_name.Add(_T("tien_pttt"));
	data_name.Add(_T("tien_xn"));
	data_name.Add(_T("tien_may_ktc"));
	data_name.Add(_T("tien_thuoc"));
	data_name.Add(_T("tien_vat_tu"));
	data_name.Add(_T("tien_thuoc_bh"));
	data_name.Add(_T("tien_vat_tu_bh"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("tong_thu"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("thu"));
	data_name.Add(_T("chi"));
	data_name.Add(_T("thuoc_sudung"));
	data_name.Add(_T("vat_tu_sudung"));

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow+4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	CString szOldIndex, szNewIndex;

	int col_pos = 6;
	int sum_pos = (int) (data_name.GetCount()) - 4;
	nRow = 9;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("posted_date"), szNewIndex);
		if(szNewIndex  != szOldIndex)
		{
			if (m_szOrderByKey == _T("04"))
				if (nGrandIO > 0 && m_szDeptKey.IsEmpty())
				{
					tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
					xls.SetCellMergedColumns(nCol, nRow, 6);
					xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						tmpStr.Format(_T("%f"), GrandAmt[i]);
						xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
						GrandAmt[i] = 0;
					}
					nRow++;
				}
			if (nTotalClassIO > 0)
			{
				tmpStr.Format(_T("Cộng ngày (%s):"), CDate::Convert(szOldIndex, yyyymmdd, ddmmyyyy));
				xls.SetCellMergedColumns(nCol, nRow, 6);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), OnRound(nTotalClass[i]));
					xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
					nTotal[i] += OnRound(nTotalClass[i]);
					nTotalClass[i] = 0;
				}
				nRow++;
			}
			
			tmpStr.Format(_T("Ngày %s"), CDate::Convert(szNewIndex, yyyymmdd, ddmmyyyy));
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
			szOldIndex = szNewIndex;
			szOldLev1.Empty();
			nRow++;
		}

		if(m_szOrderByKey == _T("04"))
			if (m_szDeptKey.IsEmpty())
			{
				rs.GetValue(_T("dept_id"), szNewLev1);
				if (szOldLev1 != szNewLev1)
				{
					if (nGrandIO > 0)
					{
						tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
						xls.SetCellMergedColumns(nCol, nRow, 6);
						xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
						for (int i = 0; i < data_name.GetCount(); i++)
						{
							tmpStr.Format(_T("%f"), GrandAmt[i]);
							xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
							GrandAmt[i] = 0;
						}
						nRow++;
					}
					
					tmpStr.Format(_T("Khoa %s"), szNewLev1);
					xls.SetCellMergedColumns(nCol, nRow, 6);
					xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
					szOldLev1 = szNewLev1;
					nIdx = 1;
					nRow++;
				}
			}

			xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
			rs.GetValue(_T("ho_ten"), tmpStr);
			xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("docno"), tmpStr);
			xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("dept_Id"), tmpStr);
			xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("ngay_vao"), tmpStr);
			xls.SetCellText(nCol+4, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
			rs.GetValue(_T("ngay_ra"), tmpStr);
			xls.SetCellText(nCol+5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				if (i >= sum_pos && i <= data_name.GetCount() - 3)
				{
					nGrandIO += nTmp;
					nTotalClassIO += nTmp;
					nTotalIO += nTmp;
				}
				GrandAmt[i]+= nTmp;
				nTotalClass[i]+= nTmp;

				xls.SetCellText(nCol+col_pos+i, nRow, double2str(nTmp), FMT_NUMBER1);
			}
			rs.MoveNext();
			nRow++;
	}

	if(m_szOrderByKey == _T("04"))
	{
		if (nGrandIO > 0 && m_szDeptKey.IsEmpty())
		{
			tmpStr.Format(_T("Cộng khoa %s"), szOldLev1);
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr.Format(_T("%f"), GrandAmt[i]);
				xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
			}
		}
		nRow++;
	}

	if (nTotalClassIO > 0)
	{
		tmpStr.Format(_T("Cộng ngày (%s):"), CDate::Convert(szOldIndex, yyyymmdd, ddmmyyyy));
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), OnRound(nTotalClass[i]));
			nTotal[i] += OnRound(nTotalClass[i]);
			xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);	
		}
		nRow++;
	}

	if (nTotalIO > 0)
	{
		tmpStr.Format(_T("Tổng cộng:"));
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);	
		}
		nRow++;
	}

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" đồng."));
	xls.SetCellMergedColumns(nCol, nRow, 6);
	xls.SetCellText(nCol, nRow, _T("Số tiền bằng chữ:"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol+col_pos, nRow, tmpStr, FMT_TEXT, true, 11);	
	EndWaitCursor();
	xls.Save(_T("Exports\\BANGTONGHOPTHANHTOANCHIPHIDIEUTRINOITRUNGOAITRU2.xls"));
}

void CFMServicePaidSummary::OnExport1_ByDept()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	double nTmp = 0;
	int nIdx = 1, j = 0, nRow = 0, nCol = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[18], GrandAmt[18], nTotalClass[18], nGrandIO = 0, nTotalClassIO = 0, nTotalIO = 0;
	for (int i = 0; i < 18; i++)
	{
		GrandAmt[i] = 0;
		nTotal[i] = 0;
		nTotalClass[i] = 0;
	}

	CExcel xls;

	if (!xls.Load(_T("Exports\\BANGTONGHOPTHANHTOANCHIPHIDIEUTRINOITRUNGOAITRU.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}

	xls.SetWorksheet(0);

	data_name.Add(_T("so_ngay_dt"));
	data_name.Add(_T("tien_kham"));
	data_name.Add(_T("tien_giuong"));
	data_name.Add(_T("tien_pttt"));
	data_name.Add(_T("tien_xn"));
	data_name.Add(_T("tien_may_ktc"));
	data_name.Add(_T("tien_thuoc"));
	data_name.Add(_T("tien_vat_tu"));
	data_name.Add(_T("tien_thuoc_bh"));
	data_name.Add(_T("tien_vat_tu_bh"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("tong_thu"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("thu"));
	data_name.Add(_T("chi"));
	data_name.Add(_T("thuoc_sudung"));
	data_name.Add(_T("vat_tu_sudung"));

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow+4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	CString szOldIndex, szNewIndex;

	int col_pos = 6;
	int sum_pos = (int) (data_name.GetCount()) - 4;
	nRow = 9;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewIndex);
		if(szNewIndex  != szOldIndex)
		{
			
			if (nTotalClassIO > 0)
			{
				tmpStr.Format(_T("Cộng khoa (%s):"), szOldIndex);
				xls.SetCellMergedColumns(nCol, nRow, 6);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), OnRound(nTotalClass[i]));
					xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);
					nTotal[i] += OnRound(nTotalClass[i]);
					nTotalClass[i] = 0;
				}
				nRow++;
			}
			
			tmpStr.Format(_T("Khoa %s"), szNewIndex);
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
			szOldIndex = szNewIndex;
			szOldLev1.Empty();
			nRow++;
		}

		

			xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
			rs.GetValue(_T("ho_ten"), tmpStr);
			xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("docno"), tmpStr);
			xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("dept_Id"), tmpStr);
			xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("ngay_vao"), tmpStr);
			xls.SetCellText(nCol+4, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
			rs.GetValue(_T("ngay_ra"), tmpStr);
			xls.SetCellText(nCol+5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				if (i >= sum_pos && i <= data_name.GetCount() - 3)
				{
					nGrandIO += nTmp;
					nTotalClassIO += nTmp;
					nTotalIO += nTmp;
				}
				GrandAmt[i]+= nTmp;
				nTotalClass[i]+= nTmp;

				xls.SetCellText(nCol+col_pos+i, nRow, double2str(nTmp), FMT_NUMBER1);
			}
			rs.MoveNext();
			nRow++;
	}


	if (nTotalClassIO > 0)
	{
		tmpStr.Format(_T("Cộng khoa (%s):"), szOldIndex);
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), OnRound(nTotalClass[i]));
			nTotal[i] += OnRound(nTotalClass[i]);
			xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);	
		}
		nRow++;
	}

	if (nTotalIO > 0)
	{
		tmpStr.Format(_T("Tổng cộng:"));
		xls.SetCellMergedColumns(nCol, nRow, 6);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			xls.SetCellText(nCol+col_pos+i, nRow, tmpStr, FMT_NUMBER1, true, 11);	
		}
		nRow++;
	}

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" đồng."));
	xls.SetCellMergedColumns(nCol, nRow, 6);
	xls.SetCellText(nCol, nRow, _T("Số tiền bằng chữ:"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol+col_pos, nRow, tmpStr, FMT_TEXT, true, 11);	
	EndWaitCursor();
	xls.Save(_T("Exports\\BANGTONGHOPTHANHTOANCHIPHIDIEUTRINOITRUNGOAITRU2.xls"));
}