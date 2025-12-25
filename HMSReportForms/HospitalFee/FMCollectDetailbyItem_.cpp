#include "stdafx.h"
#include "FMCollectDetailbyItem_.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_ *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCollectDetailByItem_* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_ *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_ *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_ *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCollectDetailByItem_* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_ *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCollectDetailByItem_* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_ *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCollectDetailByItem_* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_ *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnOrderByAddNew();
}*/
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_ *)pWnd)->OnObjectTypeSelendok();
}
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_ *)pWnd)->OnObjectTypeLoadData();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMCollectDetailByItem_*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMCollectDetailByItem_ *pVw = (CFMCollectDetailByItem_ *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMCollectDetailByItem_ *pVw = (CFMCollectDetailByItem_ *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMCollectDetailByItem_ *pVw = (CFMCollectDetailByItem_ *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMCollectDetailByItem_ *pVw = (CFMCollectDetailByItem_ *)pWnd;
	pVw->OnExportSelect();
}
static void _OnServiceOnDemandSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_*)pWnd)->OnServiceOnDemandSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_*)pWnd)->OnListCheckAllTYC();
	return 0;
}

CFMCollectDetailByItem_::CFMCollectDetailByItem_(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMCollectDetailByItem_::~CFMCollectDetailByItem_(){
}
void CFMCollectDetailByItem_::OnCreateComponents(){
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 535);
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
	m_wndStatusLabel.Create(this, _T("Status"), 220, 90, 301, 115);
	m_wndStatus.Create(this,306, 90, 426, 115);*/
	/*m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 215, 145); */
	/*m_wndObjectTypeLabel.Create(this, _T("Object Type"), 10, 120, 90, 145);
	m_wndObjectType.Create(this, 95, 120, 215, 145); 
	m_wndDeptLabel.Create(this, _T("Dept"), 220, 120, 300, 145);
	m_wndDept.Create(this,306, 120, 426, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 301, 145);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 10, 475, 130, 500);
	m_wndServiceOnDemand.Create(this, _T("Service On Demand"), 135, 475, 235, 500);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);*/
	//m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 110, 530);
	//m_wndOutpatient.Create(this, _T("Outpatient"), 115, 505, 215, 530);
	/*m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 130, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 135, 505, 235, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 240, 475, 340, 500);
	m_wndAll.Create(this, _T("All"), 240, 505, 340, 530);
	m_wndList.Create(this,10, 150, 425, 470);*/
	/*m_wndDeposit.ShowWindow(SW_HIDE);
	m_wndWithoutGeneral.ShowWindow(SW_HIDE);*/
	//m_wndInpatient.ShowWindow(SW_HIDE);
	//m_wndOutpatient.ShowWindow(SW_HIDE);
	//m_wndAll.ShowWindow(SW_HIDE);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 485, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 230, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 30, 340, 55);
	m_wndReportPeriod.Create(this,350, 30, 480, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 230, 85); 
	m_wndToDate.Create(this,350, 60, 480, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 60, 340, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 230, 115); 
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 10, 120, 90, 145);
	m_wndObjectType.Create(this,95, 120, 230, 145); 
	m_wndDeptLabel.Create(this, _T("Dept"), 240, 120, 340, 145);
	m_wndDept.Create(this,350, 120, 480, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 240, 90, 340, 115);
	m_wndStatus.Create(this,350, 90, 480, 115); 
	m_wndList.Create(this,10, 150, 485, 470); 
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 11, 475, 146, 500);
	m_wndServiceOnDemand.Create(this, _T("Service On Demand"), 150, 475, 265, 500);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 320, 540, 400, 565);
	m_wndExport.Create(this, _T("Export XLS"), 405, 540, 485, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 13, 505, 148, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 152, 505, 267, 530);
	m_wndAll.Create(this, _T("All"), 271, 505, 386, 530);
	m_wndOrderByLabel.Create(this, _T("Order By"), 0, 0, 0, 0);
	m_wndOrderBy.Create(this,0, 0, 0, 0); 
	m_wndDeposit.Create(this, _T("Deposit"), 0, 0, 0, 0);
}
void CFMCollectDetailByItem_::OnInitializeComponents(){
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

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMCollectDetailByItem_::OnSetWindowEvents(){
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
	m_wndObjectType.SetEvent(WE_SELENDOK, _OnObjectTypeSelendokFnc);
	m_wndObjectType.SetEvent(WE_LOADDATA, _OnObjectTypeLoadDataFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(3, _T("Search"), _OnListSearchItemFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndServiceOnDemand.SetEvent(WE_CLICK, _OnServiceOnDemandSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
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
	SetMode(VM_EDIT);
	m_mOrderBy[_T("01")] = _T(" firstname, docno, invoice_date");
	m_mOrderBy[_T("02")] = _T(" docno");
	m_mOrderBy[_T("03")] = _T(" invoice_date, firstname ");
	m_mOrderBy[_T("04")] = _T(" deptid, firstname ");
	m_mOrderBy[_T("05")] = _T(" firstname, invoice_date ");

}
void CFMCollectDetailByItem_::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	//DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndServiceOnDemand.GetDlgCtrlID(), m_bServiceOnDemand);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);

}
void CFMCollectDetailByItem_::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMCollectDetailByItem_::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMCollectDetailByItem_::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_bHitechMachine = FALSE;
	m_bServiceOnDemand = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_szObjectTypeKey = _T("01");
	m_nPatientType = 3;
}

int CFMCollectDetailByItem_::SetMode(int nMode){
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

/*void CFMCollectDetailByItem_::OnYearChange(){
	
} */
/*void CFMCollectDetailByItem_::OnYearSetfocus(){
	
} */
/*void CFMCollectDetailByItem_::OnYearKillfocus(){
	
} */
int CFMCollectDetailByItem_::OnYearCheckValue(){
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
 
void CFMCollectDetailByItem_::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMCollectDetailByItem_::OnReportPeriodSelendok(){
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

/*void CFMCollectDetailByItem_::OnReportPeriodSetfocus(){
	
}*/
/*void CFMCollectDetailByItem_::OnReportPeriodKillfocus(){
	
}*/
long CFMCollectDetailByItem_::OnReportPeriodLoadData(){
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

/*void CFMCollectDetailByItem_::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMCollectDetailByItem_::OnFromDateChange(){
	
} */
/*void CFMCollectDetailByItem_::OnFromDateSetfocus(){
	
} */
/*void CFMCollectDetailByItem_::OnFromDateKillfocus(){
	
} */
int CFMCollectDetailByItem_::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMCollectDetailByItem_::OnToDateChange(){
	
} */
/*void CFMCollectDetailByItem_::OnToDateSetfocus(){
	
} */
/*void CFMCollectDetailByItem_::OnToDateKillfocus(){
	
} */
int CFMCollectDetailByItem_::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMCollectDetailByItem_::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMCollectDetailByItem_::OnClerkSelendok(){
	 
}
/*void CFMCollectDetailByItem_::OnClerkSetfocus(){
	
}*/
/*void CFMCollectDetailByItem_::OnClerkKillfocus(){
	
}*/
long CFMCollectDetailByItem_::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMCollectDetailByItem_::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMCollectDetailByItem_::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMCollectDetailByItem_::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMCollectDetailByItem_::OnStatusSetfocus(){
	
}*/
/*void CFMCollectDetailByItem_::OnStatusKillfocus(){
	
}*/
long CFMCollectDetailByItem_::OnStatusLoadData(){
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
/*void CFMCollectDetailByItem_::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMCollectDetailByItem_::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMCollectDetailByItem_::OnOrderBySelendok(){
	 
}
/*void CFMCollectDetailByItem_::OnOrderBySetfocus(){
	
}*/
/*void CFMCollectDetailByItem_::OnOrderByKillfocus(){
	
}*/
long CFMCollectDetailByItem_::OnOrderByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndOrderBy.AddItems(_T("01"), _T("S\x1EAFp \x78\x1EBFp th\x65o t\xEAn \x62\x1EC7nh nh\xE2n"), NULL);
	m_wndOrderBy.AddItems(_T("02"), _T("S\x1EAFp \x78\x1EBFp th\x65o s\x1ED1 h\x1ED3 s\x1A1"), NULL);
	m_wndOrderBy.AddItems(_T("03"), _T("S\x1EAFp \x78\x1EBFp th\x65o ng\xE0y th\x61nh to\xE1n"), NULL);
	m_wndOrderBy.AddItems(_T("04"), _T("S\x1EAFp \x78\x1EBFp th\x65o kho\x61"), NULL);
	m_wndOrderBy.AddItems(_T("05"), _T("S\x1EAFp \x78\x1EBFp th\x65o phi\x1EBFu thu"), NULL);
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

void CFMCollectDetailByItem_::OnObjectTypeSelendok(){
	OnListLoadData();
}

long CFMCollectDetailByItem_::OnObjectTypeLoadData(){
	m_wndObjectType.AddItems(_T("01"), _T("\x44\x1ECB\x63h v\x1EE5"), NULL);
	m_wndObjectType.AddItems(_T("02"), _T("\x42\x1EA3o hi\x1EC3m"), NULL);
	m_wndObjectType.AddItems(_T("03"), _T("Qu\xE2n"), NULL);
	return 3;
}

/*void CFMCollectDetailByItem_::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMCollectDetailByItem_::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE (sd_type IN ('DT', 'KB', 'XN', 'HA', 'KD') OR sd_id = 'C10') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

void CFMCollectDetailByItem_::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMCollectDetailByItem_::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMCollectDetailByItem_::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMCollectDetailByItem_::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
int CFMCollectDetailByItem_::OnListCheckAllTYC()
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
int CFMCollectDetailByItem_::OnListCheckAllPTTYC()
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

void CFMCollectDetailByItem_::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
} 


long CFMCollectDetailByItem_::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;

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
	if (m_bServiceOnDemand)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC')"));
	else
		if (!m_szObjectTypeKey.IsEmpty())
		{
			tmpStr = m_szObjectTypeKey==_T("01")?_T("DV"):m_szObjectTypeKey==_T("02")?_T("BH"):_T("QU");
			szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = '%s' AND fac_cashbook_id not in ('DVYC','DV-PTTYC')"), tmpStr);
		}

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, ") \
				 _T("fac_invoicedate, fac_approveddate, fac_posteddate ") \
				 _T("FROM fa_cash WHERE fac_invoicetype in ('P','R') %s ORDER BY fac_cash_id"), szWhere);
	m_szWhere = szWhere;
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

void CFMCollectDetailByItem_::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMCollectDetailByItem_::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMCollectDetailByItem_::OnServiceOnDemandSelect(){
	OnListLoadData();
}

void CFMCollectDetailByItem_::OnInpatientSelect(){
	
}
void CFMCollectDetailByItem_::OnOutpatientSelect(){
	
}
void CFMCollectDetailByItem_::OnDepositSelect(){
	
}
void CFMCollectDetailByItem_::OnAllSelect(){
	
}
 
 
int CFMCollectDetailByItem_::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMCollectDetailByItem_::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMCollectDetailByItem_::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMCollectDetailByItem_::OnSaveFMInsuranceReceiptSummary(){
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
int CFMCollectDetailByItem_::OnCancelFMInsuranceReceiptSummary(){
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
int CFMCollectDetailByItem_::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"

void CFMCollectDetailByItem_::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//ParseALargeFile(GetSafeHwnd(), _T("Log\\service.log"));
	//return;
	UpdateData(TRUE);
	if (m_szObjectTypeKey == _T("01") || m_szObjectTypeKey == _T("02") || m_szObjectTypeKey == _T("03"))
		OnPrint2ndver();
	else
		OnPrint2ndver_Ins();
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

void CFMCollectDetailByItem_::OnPrint1stver(){
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

void CFMCollectDetailByItem_::OnPrint2ndver()
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
	double nTotal[4], GrandAmt[4], nTotalClass[4];
	for (int i = 0; i < 4; i++)
	{
		GrandAmt[i] = 0;
		nTotalClass[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_MAU2.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	//_msg(_T("%s"), szSQL);
	//return;

	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	EndWaitCursor();
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("times"));
	data_name.Add(_T("e_amount"));
	data_name.Add(_T("i_amount"));
	data_name.Add(_T("total_amount"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
_tprintf(_T("\r\n2"));


rpt.GetReportHeader()->SetValue(_T("InvoiceNos"), m_szCashIDS);

	CString szOldIndex, szNewIndex;

	int col_pos = 3;
	int sum_pos = (int) (data_name.GetCount()) - 1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		
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

		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("descr")));

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				GrandAmt[i]+= nTmp;
				nTotal[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
	//if(m_szOrderByKey == _T("04"))
	{
		if (GrandAmt[sum_pos] > 0)
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
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMCollectDetailByItem_::OnPrint2ndver_Ins()
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
	double nTotal[5], GrandAmt[5], nTotalClass[5];
	for (int i = 0; i < 5; i++)
	{
		GrandAmt[i] = 0;
		nTotalClass[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_BAOHIEM.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();


	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	EndWaitCursor();
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("times"));
	data_name.Add(_T("unit_price"));
	data_name.Add(_T("ins_paid"));
	data_name.Add(_T("discount"));
	data_name.Add(_T("total_amount"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
_tprintf(_T("\r\n2"));


	rpt.GetReportHeader()->SetValue(_T("InvoiceNos"), m_szCashIDS);

	CString szOldIndex, szNewIndex;

	int col_pos = 3;
	int sum_pos = (int) (data_name.GetCount()) - 1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		
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

		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("descr")));

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				GrandAmt[i]+= nTmp;
				nTotal[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
	//if(m_szOrderByKey == _T("04"))
	{
		if (GrandAmt[sum_pos] > 0)
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
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMCollectDetailByItem_::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\CHI TIET THEO DANH MUC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[5] > 0)
			{
				xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

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
		
		rs.GetValue(_T("descr"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("times"), nTemp);
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("e_amount"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("i_amount"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_amount"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("hfl_servprice"), nTemp);		
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("hfl_servprice_prev"), nTemp);		
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("hfl_servprice-hfl_servprice_prev"), nTemp);		
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("hfl_insprice"), nTemp);		
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("hfl_insprice_prev"), nTemp);		
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("hfl_insprice-hfl_insprice_prev"), nTemp);		
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CHI TIET THEO DANH MUC 2.xls"));
}

CString CFMCollectDetailByItem_::GetQueryString()
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
		szWhere.Format(_T(" and hfe_cash_id in(%s) "), szReceiptStr);
	else
		szWhere = m_szWhere;


	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, invoice_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,invoice_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		szOrderBy.Format(_T(" , deptid, firstname "));
	}
	else
		szOrderBy.Format(_T(" , firstname, invoice_date "));


	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and hfe_class = 'I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and hfe_class <> 'I' "));
	}
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);

	if (m_szObjectTypeKey == _T("01") || m_szObjectTypeKey == _T("02") || m_szObjectTypeKey == _T("03"))
		szSQL.Format(_T("WITH tbl_fee AS (SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE hfe_deptid END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("                                 hfe_cost amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN hms_exam ON ( hfe_docno = he_docno AND hfe_orderid = he_receptidx ) ") \
		_T("                       LEFT JOIN hms_roomlist ON ( hrl_deptid = he_deptid AND hrl_id = he_roomid ) ") \
		_T("                       WHERE     hfe_type = 'E' AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' ) ") \
		_T("                       UNION ALL ") \
		_T("                       SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN hfe_type IN ( 'P', 'T' ) THEN hfl_deptid ELSE CASE Cast(hfe_type AS VARCHAR2(15)) WHEN Cast('O' AS VARCHAR2(15)) THEN Decode ('B5', HO_PDEPTID, ho_deptid, ho_pdeptid) ELSE hfe_deptid END END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("                                 hfe_cost amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN hms_operation ON ( hfe_docno = ho_docno AND hfe_orderid = ho_idx ) ") \
		_T("                       LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid ) ") \
		_T("                       WHERE     hfe_status IN ( 'P', 'R' ) AND hfe_type IN ( 'O', 'P', 'T', 'B', ") \
		_T("                                                   'J', 'F', 'X' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )") \
		_T("                       UNION ALL ") \
		_T("                       SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 Cast(CASE Cast(mp_org_id AS VARCHAR2(15)) WHEN 'PM' THEN 'KD' ") \
		_T("                                        WHEN 'MA' THEN 'C10' ") \
		_T("                                        WHEN 'BB' THEN 'C16' ") \
		_T("                                      END AS NVARCHAR2(15)) dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 DECODE(mp_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("                                 hfe_cost amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN m_product_item ON ( Cast(hfe_itemid AS INTEGER) = mpi_product_item_id ) ") \
		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("                       WHERE     hfe_type IN ( 'D', 'M', 'R' ) AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' ))") \
		_T(" SELECT    dept_id, ") \
		_T("           descr, ") \
		_T("           SUM(times) times, ") \
		_T("           SUM(e_amount) e_amount, ") \
		_T("           SUM(i_amount) i_amount, ") \
		_T("           SUM(amount) total_amount ") \
		_T(" FROM      fa_cash ") \
		_T(" INNER JOIN (SELECT    hfe_cash_id, hfe_class,") \
		_T("                      CASE WHEN ( fee_type = 'E' AND Nvl(hd_outpatient, 'N') = 'Y' )  OR i.hfe_type = 'O' THEN i.hfe_deptid ELSE dept_id END ") \
		_T("						dept_id, ") \
		_T("					  NVL(hfg_type_id, 2000) hfe_typeindex, substr(hfe_group, 1, 3) hfe_group3,") \
		_T("                      Decode('O', i.hfe_type, 'Other fee in dept', descr) descr, ") \
		_T("                      Decode('O', i.hfe_type, 1, times) times, ") \
		_T("                      Decode('I', i.hfe_class, Decode('O', i.hfe_type, hfe_amount, amount), 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, Decode('O', i.hfe_type, hfe_amount, amount)) e_amount, ") \
		_T("                      Decode('O', i.hfe_type, hfe_amount, amount) amount ") \
		_T("            FROM      hms_fee_invoice_view_v2 i ") \
		_T("            LEFT JOIN hms_doc ON ( i.hfe_docno = hd_docno ) ") \
		_T("            LEFT JOIN tbl_fee ON ( i.hfe_docno = tbl_fee.hfe_docno AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno ) ") \
		_T("			LEFT JOIN hms_fee_group ON (hfg_id = hfe_group)") \
		_T("            WHERE     hfe_cash_id > 0 %s AND fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline WHERE hfe_refidx = i.hfe_invoiceno AND hfe_docno = i.hfe_docno) ") \
		_T("			UNION ALL") \
		_T("			SELECT    hfe_cash_id, hfe_class,") \
		_T("                      hfe_deptid dept_id, ") \
		_T("					  2000 hfe_typeindex, cast('XXX' as nvarchar2(3)) hfe_group3,") \
		_T("                      'Thu kh\xE1\x63' descr, ") \
		_T("                      1 times, ") \
		_T("                      Decode('I', i.hfe_class, hfe_amount, 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, hfe_amount) e_amount, ") \
		_T("                      hfe_amount amount ") \
		_T("            FROM      hms_fee_invoice_view_v2 i ") \
		_T("			WHERE	  hfe_serialno = 'PC' AND hfe_status = 'P'") \
		_T("			) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE     amount > 0 %s") \
		_T(" GROUP     BY dept_id, hfe_typeindex, hfe_group3, descr ") \
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr "), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);
	else
		szSQL.Format(_T(" WITH tbl_fee AS (SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE hfe_deptid END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("								 hfe_insprice unit_price,") \
		_T("								 hfe_inspaid ins_paid,") \
		_T("								 hfe_discount discount,") \
		_T("                                 hfe_patpaid amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN hms_exam ON ( hfe_docno = he_docno AND hfe_orderid = he_receptidx ) ") \
		_T("                       LEFT JOIN hms_roomlist ON ( hrl_deptid = he_deptid AND hrl_id = he_roomid ) ") \
		_T("                       WHERE     hfe_type = 'E' AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' ) ") \
		_T("                       UNION ALL ") \
		_T("                       SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN hfe_type IN ( 'P', 'T' ) THEN hfl_deptid ELSE CASE WHEN hfe_type = 'O' THEN Decode('B5', HO_PDEPTID, ho_deptid, ho_pdeptid) ELSE CASE WHEN hfe_type = 'F' AND substr(hfe_group, 1, 2) = 'FF' THEN hd_indept ELSE hfe_deptid END END  END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("								 case when f.hfe_feegroup IN ('OPT_L', 'HITECH_L') THEN hfe_unitprice ELSE hfe_insprice END unit_price,") \
		_T("								 hfe_inspaid ins_paid,") \
		_T("								 hfe_discount discount,") \
		_T("                                 hfe_patpaid amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("					   LEFT JOIN hms_doc ON (hd_docno = f.hfe_docno)") \
		_T("                       LEFT JOIN hms_operation ON ( hfe_docno = ho_docno AND hfe_orderid = ho_idx ) ") \
		_T("                       LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid ) ") \
		_T("                       WHERE     hfe_status IN ( 'P', 'R' ) AND hfe_type IN ( 'O', 'P', 'T', 'B', ") \
		_T("                                                   'J', 'F', 'X' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )") \
		_T("                       UNION ALL ") \
		_T("                       SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 Cast(CASE Cast(mp_org_id AS VARCHAR2(15)) WHEN 'PM' THEN 'KD' ") \
		_T("                                        WHEN 'MA' THEN 'C10' ") \
		_T("                                        WHEN 'BB' THEN 'C16' ") \
		_T("                                      END AS NVARCHAR2(15)) dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 DECODE(mp_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("								 0 unit_price,") \
		_T("								 hfe_inspaid ins_paid,") \
		_T("								 hfe_discount discount,") \
		_T("                                 hfe_patpaid amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN m_product_item ON ( Cast(hfe_itemid AS INTEGER) = mpi_product_item_id ) ") \
		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("                       WHERE     hfe_type IN ( 'D', 'M', 'R' ) AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )) ") \
		_T(" SELECT    dept_id, ") \
		_T("           descr, ") \
		_T("           SUM(times) times, ") \
		_T("		   unit_price,") \
		_T("		   SUM(ins_paid) ins_paid,") \
		_T("		   SUM(discount) discount,") \
		_T("           SUM(e_amount) e_amount, ") \
		_T("           SUM(i_amount) i_amount, ") \
		_T("           SUM(amount) total_amount ") \
		_T(" FROM      (SELECT    hfe_cash_id, ") \
		_T("                      CASE WHEN ( fee_type = 'E' AND Nvl(hd_outpatient, 'N') = 'Y' )  OR i.hfe_type = 'O' THEN i.hfe_deptid ELSE dept_id END ") \
		_T("						dept_id, ") \
		_T("					  NVL(hfg_type_id, 2000) hfe_typeindex, CASE WHEN fee_type NOT IN ('D', 'M') THEN substr(hfe_group, 1, 3) ELSE NULL END hfe_group3,") \
		_T("                      Decode('O', i.hfe_type, 'Other fee in dept', descr) descr, ") \
		_T("                      Decode('O', i.hfe_type, 1, times) times, ") \
		_T("					  unit_price, ins_paid, discount,") \
		_T("                      Decode('I', i.hfe_class, Decode('O', i.hfe_type, hfe_amount, amount), 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, Decode('O', i.hfe_type, hfe_amount, amount)) e_amount, ") \
		_T("                      Decode('O', i.hfe_type, hfe_amount, amount) amount ") \
		_T("            FROM      hms_fee_invoice_view_v2 i ") \
		_T("            LEFT JOIN hms_doc ON ( i.hfe_docno = hd_docno ) ") \
		_T("            INNER JOIN tbl_fee ON ( i.hfe_docno = tbl_fee.hfe_docno AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno ) ") \
		_T("			LEFT JOIN hms_fee_group ON (hfg_id = hfe_group)") \
		_T("            WHERE     hfe_cash_id > 0 %s AND fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline WHERE hfe_docno = i.hfe_docno AND hfe_refidx = i.hfe_invoiceno) ") \
		_T("			) tbl_invoice ") \
		_T(" WHERE     amount > 0 %s") \
		_T(" GROUP     BY dept_id, hfe_typeindex, hfe_group3, descr, unit_price ") \
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr ")
		, m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);
	return szSQL;
	szSQL.Format(_T("WITH tbl_fee") \
	_T("     AS (SELECT    hfe_invoiceno,") \
	_T("                   hfe_docno,") \
	_T("                   CASE WHEN he_roomid IN ( 50, 54 ) THEN Cast(Decode(he_roomid, 50, 'C15',") \
	_T("                                                                            54, 'C6') AS") \
	_T("                                                               NVARCHAR2(3))") \
	_T("                   ELSE hfe_deptid") \
	_T("                   END dept_id,") \
	_T("                   f.hfe_group,") \
	_T("                   hfe_type fee_type,") \
	_T("                   hfe_desc descr,") \
	_T("                   Cast('N' AS NVARCHAR2(1)) hitech_machine,") \
	_T("                   hfe_quantity times,") \
	_T("                   hfe_cost amount,") \
	_T("				   hfe_fee_id fee_id") \
	_T("         FROM      hms_fee f") \
	_T("         LEFT JOIN hms_exam ON ( hfe_docno = he_docno AND hfe_orderid = he_receptidx )") \
	_T("         LEFT JOIN hms_roomlist ON ( hrl_deptid = he_deptid AND hrl_id = he_roomid )") \
	_T("         WHERE     hfe_type = 'E' AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN") \
	_T("                                                                     ( 'Y', 'BQP', 'BBV' )") \
	_T("         UNION ALL") \
	_T("         SELECT    hfe_invoiceno,") \
	_T("                   hfe_docno,") \
	_T("                   CASE WHEN hfe_type IN ( 'P', 'T' ) THEN hfl_deptid") \
	_T("                   ELSE") \
	_T("                       CASE Cast(hfe_type AS VARCHAR2(15)) WHEN Cast('O' AS VARCHAR2(15)) THEN") \
	_T("                                                           Decode ('B5', HO_PDEPTID, ho_deptid,") \
	_T("                                                                         ho_pdeptid)") \
	_T("                       ELSE hfe_deptid") \
	_T("                       END") \
	_T("                   END dept_id,") \
	_T("                   f.hfe_group,") \
	_T("                   hfe_type fee_type,") \
	_T("                   hfe_desc descr,") \
	_T("                   Nvl(hfl_hitechmachine, 'N') hitech_machine,") \
	_T("                   hfe_quantity times,") \
	_T("                   hfe_cost amount,") \
	_T("				   hfe_fee_id fee_id") \
	_T("         FROM      hms_fee f") \
	_T("         LEFT JOIN hms_operation ON ( hfe_docno = ho_docno AND hfe_orderid = ho_idx )") \
	_T("         LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid )") \
	_T("         WHERE     hfe_status IN ( 'P', 'R' ) AND hfe_type IN ( 'O', 'P', 'T', 'B',") \
	_T("                                     'J', 'F', 'X' ) AND Nvl(hfe_category, 'N') NOT IN (") \
	_T("                                                         'Y', 'BQP', 'BBV' )") \
	_T("         UNION ALL") \
	_T("         SELECT    hfe_invoiceno,") \
	_T("                   hfe_docno,") \
	_T("                   Cast(CASE Cast(mp_org_id AS VARCHAR2(15)) WHEN 'PM' THEN 'KD'") \
	_T("                          WHEN 'MA' THEN 'C10'") \
	_T("                          WHEN 'BB' THEN 'C16'") \
	_T("                        END AS NVARCHAR2(15)) dept_id,") \
	_T("                   f.hfe_group,") \
	_T("                   hfe_type fee_type,") \
	_T("                   Decode(mp_org_id, 'PM', Nvl(Get_vnname('Drug Amount'), 'Drug Amount'),") \
	_T("                                     'MA', Nvl(Get_vnname('Material Amount'), 'Material Amount'),") \
	_T("                                     'BB', f.hfe_desc) descr,") \
	_T("                   Cast('N' AS NVARCHAR2(1)) hitech_machine,") \
	_T("                   hfe_quantity times,") \
	_T("                   hfe_cost amount,") \
	_T("				   hfe_fee_id fee_id") \
	_T("         FROM      hms_fee f") \
	_T("         LEFT JOIN m_product_item ON ( Cast(hfe_itemid AS INTEGER) = mpi_product_item_id )") \
	_T("         LEFT JOIN m_product ON ( mpi_product_id = mp_product_id )") \
	_T("         WHERE     hfe_type IN ( 'D', 'M', 'R' ) AND hfe_status IN ( 'P', 'R' ) AND") \
	_T("                   Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )),") \
	_T("     tbl_fee_invoice") \
	_T("     AS (SELECT     hfe_cash_id,") \
	_T("                    hfe_class,") \
	_T("                    CASE WHEN ( fee_type = 'E' AND Nvl(hd_outpatient, 'N') = 'Y' )  OR") \
	_T("                              i.hfe_type = 'O'") \
	_T("                    THEN") \
	_T("                         i.hfe_deptid") \
	_T("                    ELSE dept_id") \
	_T("                    END dept_id,") \
	_T("                    Nvl(hfg_type_id, 2000) hfe_typeindex,") \
	_T("                    Substr(hfe_group, 1, 3) hfe_group3,") \
	_T("                    Decode('O', i.hfe_type, 'Other fee in dept',") \
	_T("                                descr) descr,") \
	_T("                    Decode('O', i.hfe_type, 1,") \
	_T("                                times) times,") \
	_T("                    Decode('I', i.hfe_class, Decode('O', i.hfe_type, hfe_amount,") \
	_T("                                                         amount),") \
	_T("                                0) i_amount,") \
	_T("                    Decode('I', i.hfe_class, 0,") \
	_T("                                Decode('O', i.hfe_type, hfe_amount,") \
	_T("                                            amount)) e_amount,") \
	_T("                    Decode('O', i.hfe_type, hfe_amount,") \
	_T("                                amount) amount") \
	_T("         FROM       hms_fee_invoice_view_v2 i") \
	_T("         LEFT JOIN  hms_doc ON ( i.hfe_docno = hd_docno )") \
	_T("         INNER JOIN tbl_fee") \
	_T("         --WHERE hitech_machine IN (%s)") \
	_T("         ON ( i.hfe_docno = tbl_fee.hfe_docno AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
	_T("         LEFT JOIN  hms_fee_group ON ( hfg_id = hfe_group )") \
	_T("         WHERE      hfe_cash_id > 0 AND fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline WHERE hfe_status = 'P' AND hfe_refidx = i.hfe_invoiceno))") \
	_T("SELECT     dept_id,") \
	_T("           descr,") \
	_T("           SUM(times) times,") \
	_T("           SUM(e_amount) e_amount,") \
	_T("           SUM(i_amount) i_amount,") \
	_T("           SUM(amount) total_amount") \
	_T("FROM       fa_cash") \
	_T("INNER JOIN tbl_fee_invoice ON ( fac_cash_id = hfe_cash_id )") \
	_T("WHERE      amount > 0") \
	_T("GROUP      BY dept_id,hfe_typeindex,hfe_group3,descr") \
	_T("ORDER      BY dept_id,hfe_typeindex,hfe_group3,descr "));
}

void CFMCollectDetailByItem_::BuildQueryString(CString& szSQL){
	//data_fitler
	//data_sort
	//getquerystring
}

void CFMCollectDetailByItem_::data_filter(CString& szWhere){
	CString tmpStr, szReceiptStr;
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and hfe_class = 'I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and hfe_class <> 'I' "));
	}
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			if(!szReceiptStr.IsEmpty())
				tmpStr.AppendFormat(_T(","));
			tmpStr.AppendFormat(_T("%ld"), str2long(m_wndList.GetItemText(i,0)));
		}
	}

	prototype_condition(m_szDeptKey, _T("dept_id"), szWhere);
	prototype_condition(szReceiptStr, _T("fac_cash_id"), szWhere);

}

void CFMCollectDetailByItem_::data_sort(CString& szSort){
	CString tmpStr;
	m_mOrderBy.Lookup(tmpStr, szSort);
}

void CFMCollectDetailByItem_::prototype_condition(CString szCondition, CString szField, CString& szWhere){
	if (!szCondition.IsEmpty())
		if (szCondition.Find(',') != -1)
			szWhere.AppendFormat(_T(" AND %s IN (%s)"), szField, szCondition);
		else
			szWhere.AppendFormat(_T(" AND %s = '%s'"), szField, szCondition);
}

CString CFMCollectDetailByItem_::GetQueryString_1(){
	CString szSQL;

	return szSQL;
}

BOOL CFMCollectDetailByItem_::ParseALargeFile(HWND hwndParent, LPTSTR lpszFileName) 
{ 
    RECT rcClient;  // Client area of parent window.
    int cyVScroll;  // Height of scroll bar arrow.
    HWND hwndPB;    // Handle of progress bar.
    HANDLE hFile;   // Handle of file.
    DWORD cb;       // Size of file and count of bytes read.
    LPCH pch;       // Address of data read from file.
    LPCH pchTmp;    // Temporary pointer.

    // Ensure that the common control DLL is loaded, and create a progress bar 
    // along the bottom of the client area of the parent window. 
    //
    // Base the height of the progress bar on the height of a scroll bar arrow.
    
    InitCommonControls(); 
    
	::GetClientRect(hwndParent, &rcClient); 
    
    cyVScroll = GetSystemMetrics(SM_CYVSCROLL); 

    hwndPB = CreateWindowEx(0, PROGRESS_CLASS, (LPTSTR) NULL, 
                            WS_CHILD | WS_VISIBLE, rcClient.left, 
                            rcClient.bottom - cyVScroll, 
                            rcClient.right, cyVScroll, 
							hwndParent, (HMENU) 0, AfxGetInstanceHandle(), NULL);

    // Open the file for reading, and retrieve the size of the file. 

    hFile = CreateFile(lpszFileName, GENERIC_READ, FILE_SHARE_READ, 
                       (LPSECURITY_ATTRIBUTES) NULL, OPEN_EXISTING, 
                       FILE_ATTRIBUTE_NORMAL, (HANDLE) NULL); 
    if (hFile == (HANDLE) INVALID_HANDLE_VALUE)
        return FALSE; 

    cb = GetFileSize(hFile, (LPDWORD) NULL); 

    // Set the range and increment of the progress bar. 

	::SendMessage(hwndPB, PBM_SETRANGE, 0, MAKELPARAM(0, cb / 2048));
    
	::SendMessage(hwndPB, PBM_SETSTEP, (WPARAM) 1, 0); 

    // Parse the file. 
	pch = (LPCH) LocalAlloc(LPTR, sizeof(char) * 2048); 
    
    pchTmp = pch; 
    int nCount = 1;
    do { 
        ReadFile(hFile, pchTmp, sizeof(char) * 2048, &cb, (LPOVERLAPPED) NULL);
		_tprintf(_T("\n%d"), nCount++);
        // TODO: Write an error handler to check that all the
        // requested data was read.
        //
        // Include here any code that parses the
        // file. 
        //  
        //  
        //  
        // Advance the current position of the progress bar by the increment.
        
		::SendMessage(hwndPB, PBM_STEPIT, 0, 0); 
        
    } while (cb); 
	
    CloseHandle((HANDLE) hFile);
    
	::DestroyWindow(hwndPB);

    return TRUE; 
}
CString CFMCollectDetailByItem_::GetQueryString1()
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
		szWhere.Format(_T(" and hfe_cash_id in(%s) "), szReceiptStr);
	else
		szWhere = m_szWhere;


	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, invoice_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,invoice_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		szOrderBy.Format(_T(" , deptid, firstname "));
	}
	else
		szOrderBy.Format(_T(" , firstname, invoice_date "));


	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and hfe_class = 'I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and hfe_class <> 'I' "));
	}
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);

	if (m_szObjectTypeKey == _T("01") || m_szObjectTypeKey == _T("02") || m_szObjectTypeKey == _T("03"))
		szSQL.Format(_T("WITH tbl_fee AS (SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE hfe_deptid END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("                                 hfe_cost amount, ") \
		_T("								 0 fee_id, hfl_servprice,hfl_servprice_prev,hfl_servprice-hfl_servprice_prev, hfl_insprice, hfl_insprice_prev,hfl_insprice-hfl_insprice_prev") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN hms_fee_list  ON ( hfl_feeid = hfe_itemid ) ") \
		_T("                       LEFT JOIN hms_exam ON ( hfe_docno = he_docno AND hfe_orderid = he_receptidx ) ") \
		_T("                       LEFT JOIN hms_roomlist ON ( hrl_deptid = he_deptid AND hrl_id = he_roomid ) ") \
		_T("                       WHERE     hfe_type = 'E' AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' ) ") \
		_T("                       UNION ALL ") \
		_T("                       SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN hfe_type IN ( 'P', 'T' ) THEN hfl_deptid ELSE CASE Cast(hfe_type AS VARCHAR2(15)) WHEN Cast('O' AS VARCHAR2(15)) THEN Decode ('B5', HO_PDEPTID, ho_deptid, ho_pdeptid) ELSE hfe_deptid END END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("                                 hfe_cost amount, ") \
		_T("								 0 fee_id,hfl_servprice,hfl_servprice_prev,hfl_servprice-hfl_servprice_prev, hfl_insprice, hfl_insprice_prev,hfl_insprice-hfl_insprice_prev") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN hms_operation ON ( hfe_docno = ho_docno AND hfe_orderid = ho_idx ) ") \
		_T("                       LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid ) ") \
		_T("                       WHERE     hfe_status IN ( 'P', 'R' ) AND hfe_type IN ( 'O', 'P', 'T', 'B', ") \
		_T("                                                   'J', 'F', 'X' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )") \
		_T("                       UNION ALL ") \
		_T("                       SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 Cast(CASE Cast(mp_org_id AS VARCHAR2(15)) WHEN 'PM' THEN 'KD' ") \
		_T("                                        WHEN 'MA' THEN 'C10' ") \
		_T("                                        WHEN 'BB' THEN 'C16' ") \
		_T("                                      END AS NVARCHAR2(15)) dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 DECODE(mp_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("                                 hfe_cost amount, ") \
		_T("								 0 fee_id, 0,0,0,0,0,0") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN m_product_item ON ( Cast(hfe_itemid AS INTEGER) = mpi_product_item_id ) ") \
		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("                       WHERE     hfe_type IN ( 'D', 'M', 'R' ) AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' ))") \
		_T(" SELECT    dept_id, ") \
		_T("           descr, ") \
		_T("           SUM(times) times, ") \
		_T("           SUM(e_amount) e_amount, ") \
		_T("           SUM(i_amount) i_amount, ") \
		_T("           SUM(amount) total_amount, ") \
		_T("           hfl_servprice,hfl_servprice_prev,hfl_servprice-hfl_servprice_prev, hfl_insprice, hfl_insprice_prev,hfl_insprice-hfl_insprice_prev ") \
		_T(" FROM      fa_cash ") \
		_T(" INNER JOIN (SELECT    hfe_cash_id, hfe_class,") \
		_T("                      CASE WHEN ( fee_type = 'E' AND Nvl(hd_outpatient, 'N') = 'Y' )  OR i.hfe_type = 'O' THEN i.hfe_deptid ELSE dept_id END ") \
		_T("						dept_id, ") \
		_T("					  NVL(hfg_type_id, 2000) hfe_typeindex, substr(hfe_group, 1, 3) hfe_group3,") \
		_T("                      Decode('O', i.hfe_type, 'Other fee in dept', descr) descr, ") \
		_T("                      Decode('O', i.hfe_type, 1, times) times, ") \
		_T("                      Decode('I', i.hfe_class, Decode('O', i.hfe_type, hfe_amount, amount), 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, Decode('O', i.hfe_type, hfe_amount, amount)) e_amount, ") \
		_T("                      Decode('O', i.hfe_type, hfe_amount, amount) amount, ") \
		_T("                      tbl_fee.hfl_servprice, tbl_fee.hfl_servprice_prev,tbl_fee.hfl_servprice-tbl_fee.hfl_servprice_prev, tbl_fee.hfl_insprice, tbl_fee.hfl_insprice_prev,tbl_fee.hfl_insprice-tbl_fee.hfl_insprice_prev ") \
		_T("            FROM      hms_fee_invoice_view_v2 i ") \
		_T("            LEFT JOIN hms_doc ON ( i.hfe_docno = hd_docno ) ") \
		_T("            LEFT JOIN tbl_fee ON ( i.hfe_docno = tbl_fee.hfe_docno AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno ) ") \
		_T("			LEFT JOIN hms_fee_group ON (hfg_id = hfe_group)") \
		_T("            WHERE     hfe_cash_id > 0 %s AND fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline WHERE hfe_refidx = i.hfe_invoiceno AND hfe_docno = i.hfe_docno) ") \
		_T("			UNION ALL") \
		_T("			SELECT    hfe_cash_id, hfe_class,") \
		_T("                      hfe_deptid dept_id, ") \
		_T("					  2000 hfe_typeindex, cast('XXX' as nvarchar2(3)) hfe_group3,") \
		_T("                      'Thu kh\xE1\x63' descr, ") \
		_T("                      1 times, ") \
		_T("                      Decode('I', i.hfe_class, hfe_amount, 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, hfe_amount) e_amount, ") \
		_T("                      hfe_amount amount,0,0,0,0,0,0 ") \
		_T("            FROM      hms_fee_invoice_view_v2 i ") \
		_T("			WHERE	  hfe_serialno = 'PC' AND hfe_status = 'P'") \
		_T("			) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE     amount > 0 %s") \
		_T(" GROUP     BY dept_id, hfe_typeindex, hfe_group3, descr, hfl_servprice,hfl_servprice_prev, hfl_insprice, hfl_insprice_prev ") \
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr "), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);
	else
		szSQL.Format(_T(" WITH tbl_fee AS (SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE hfe_deptid END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("								 hfe_insprice unit_price,") \
		_T("								 hfe_inspaid ins_paid,") \
		_T("								 hfe_discount discount,") \
		_T("                                 hfe_patpaid amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN hms_exam ON ( hfe_docno = he_docno AND hfe_orderid = he_receptidx ) ") \
		_T("                       LEFT JOIN hms_roomlist ON ( hrl_deptid = he_deptid AND hrl_id = he_roomid ) ") \
		_T("                       WHERE     hfe_type = 'E' AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' ) ") \
		_T("                       UNION ALL ") \
		_T("                       SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN hfe_type IN ( 'P', 'T' ) THEN hfl_deptid ELSE CASE WHEN hfe_type = 'O' THEN Decode('B5', HO_PDEPTID, ho_deptid, ho_pdeptid) ELSE CASE WHEN hfe_type = 'F' AND substr(hfe_group, 1, 2) = 'FF' THEN hd_indept ELSE hfe_deptid END END  END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("								 case when f.hfe_feegroup IN ('OPT_L', 'HITECH_L') THEN hfe_unitprice ELSE hfe_insprice END unit_price,") \
		_T("								 hfe_inspaid ins_paid,") \
		_T("								 hfe_discount discount,") \
		_T("                                 hfe_patpaid amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("					   LEFT JOIN hms_doc ON (hd_docno = f.hfe_docno)") \
		_T("                       LEFT JOIN hms_operation ON ( hfe_docno = ho_docno AND hfe_orderid = ho_idx ) ") \
		_T("                       LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid ) ") \
		_T("                       WHERE     hfe_status IN ( 'P', 'R' ) AND hfe_type IN ( 'O', 'P', 'T', 'B', ") \
		_T("                                                   'J', 'F', 'X' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )") \
		_T("                       UNION ALL ") \
		_T("                       SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 Cast(CASE Cast(mp_org_id AS VARCHAR2(15)) WHEN 'PM' THEN 'KD' ") \
		_T("                                        WHEN 'MA' THEN 'C10' ") \
		_T("                                        WHEN 'BB' THEN 'C16' ") \
		_T("                                      END AS NVARCHAR2(15)) dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 DECODE(mp_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("								 0 unit_price,") \
		_T("								 hfe_inspaid ins_paid,") \
		_T("								 hfe_discount discount,") \
		_T("                                 hfe_patpaid amount, ") \
		_T("								 0 fee_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN m_product_item ON ( Cast(hfe_itemid AS INTEGER) = mpi_product_item_id ) ") \
		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("                       WHERE     hfe_type IN ( 'D', 'M', 'R' ) AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )) ") \
		_T(" SELECT    dept_id, ") \
		_T("           descr, ") \
		_T("           SUM(times) times, ") \
		_T("		   unit_price,") \
		_T("		   SUM(ins_paid) ins_paid,") \
		_T("		   SUM(discount) discount,") \
		_T("           SUM(e_amount) e_amount, ") \
		_T("           SUM(i_amount) i_amount, ") \
		_T("           SUM(amount) total_amount ") \
		_T(" FROM      (SELECT    hfe_cash_id, ") \
		_T("                      CASE WHEN ( fee_type = 'E' AND Nvl(hd_outpatient, 'N') = 'Y' )  OR i.hfe_type = 'O' THEN i.hfe_deptid ELSE dept_id END ") \
		_T("						dept_id, ") \
		_T("					  NVL(hfg_type_id, 2000) hfe_typeindex, CASE WHEN fee_type NOT IN ('D', 'M') THEN substr(hfe_group, 1, 3) ELSE NULL END hfe_group3,") \
		_T("                      Decode('O', i.hfe_type, 'Other fee in dept', descr) descr, ") \
		_T("                      Decode('O', i.hfe_type, 1, times) times, ") \
		_T("					  unit_price, ins_paid, discount,") \
		_T("                      Decode('I', i.hfe_class, Decode('O', i.hfe_type, hfe_amount, amount), 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, Decode('O', i.hfe_type, hfe_amount, amount)) e_amount, ") \
		_T("                      Decode('O', i.hfe_type, hfe_amount, amount) amount ") \
		_T("            FROM      hms_fee_invoice_view_v2 i ") \
		_T("            LEFT JOIN hms_doc ON ( i.hfe_docno = hd_docno ) ") \
		_T("            INNER JOIN tbl_fee ON ( i.hfe_docno = tbl_fee.hfe_docno AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno ) ") \
		_T("			LEFT JOIN hms_fee_group ON (hfg_id = hfe_group)") \
		_T("            WHERE     hfe_cash_id > 0 %s AND fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline WHERE hfe_docno = i.hfe_docno AND hfe_refidx = i.hfe_invoiceno) ") \
		_T("			) tbl_invoice ") \
		_T(" WHERE     amount > 0 %s") \
		_T(" GROUP     BY dept_id, hfe_typeindex, hfe_group3, descr, unit_price ") \
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr ")
		, m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);
	return szSQL;
	szSQL.Format(_T("WITH tbl_fee") \
	_T("     AS (SELECT    hfe_invoiceno,") \
	_T("                   hfe_docno,") \
	_T("                   CASE WHEN he_roomid IN ( 50, 54 ) THEN Cast(Decode(he_roomid, 50, 'C15',") \
	_T("                                                                            54, 'C6') AS") \
	_T("                                                               NVARCHAR2(3))") \
	_T("                   ELSE hfe_deptid") \
	_T("                   END dept_id,") \
	_T("                   f.hfe_group,") \
	_T("                   hfe_type fee_type,") \
	_T("                   hfe_desc descr,") \
	_T("                   Cast('N' AS NVARCHAR2(1)) hitech_machine,") \
	_T("                   hfe_quantity times,") \
	_T("                   hfe_cost amount,") \
	_T("				   hfe_fee_id fee_id") \
	_T("         FROM      hms_fee f") \
	_T("         LEFT JOIN hms_exam ON ( hfe_docno = he_docno AND hfe_orderid = he_receptidx )") \
	_T("         LEFT JOIN hms_roomlist ON ( hrl_deptid = he_deptid AND hrl_id = he_roomid )") \
	_T("         WHERE     hfe_type = 'E' AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN") \
	_T("                                                                     ( 'Y', 'BQP', 'BBV' )") \
	_T("         UNION ALL") \
	_T("         SELECT    hfe_invoiceno,") \
	_T("                   hfe_docno,") \
	_T("                   CASE WHEN hfe_type IN ( 'P', 'T' ) THEN hfl_deptid") \
	_T("                   ELSE") \
	_T("                       CASE Cast(hfe_type AS VARCHAR2(15)) WHEN Cast('O' AS VARCHAR2(15)) THEN") \
	_T("                                                           Decode ('B5', HO_PDEPTID, ho_deptid,") \
	_T("                                                                         ho_pdeptid)") \
	_T("                       ELSE hfe_deptid") \
	_T("                       END") \
	_T("                   END dept_id,") \
	_T("                   f.hfe_group,") \
	_T("                   hfe_type fee_type,") \
	_T("                   hfe_desc descr,") \
	_T("                   Nvl(hfl_hitechmachine, 'N') hitech_machine,") \
	_T("                   hfe_quantity times,") \
	_T("                   hfe_cost amount,") \
	_T("				   hfe_fee_id fee_id") \
	_T("         FROM      hms_fee f") \
	_T("         LEFT JOIN hms_operation ON ( hfe_docno = ho_docno AND hfe_orderid = ho_idx )") \
	_T("         LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid )") \
	_T("         WHERE     hfe_status IN ( 'P', 'R' ) AND hfe_type IN ( 'O', 'P', 'T', 'B',") \
	_T("                                     'J', 'F', 'X' ) AND Nvl(hfe_category, 'N') NOT IN (") \
	_T("                                                         'Y', 'BQP', 'BBV' )") \
	_T("         UNION ALL") \
	_T("         SELECT    hfe_invoiceno,") \
	_T("                   hfe_docno,") \
	_T("                   Cast(CASE Cast(mp_org_id AS VARCHAR2(15)) WHEN 'PM' THEN 'KD'") \
	_T("                          WHEN 'MA' THEN 'C10'") \
	_T("                          WHEN 'BB' THEN 'C16'") \
	_T("                        END AS NVARCHAR2(15)) dept_id,") \
	_T("                   f.hfe_group,") \
	_T("                   hfe_type fee_type,") \
	_T("                   Decode(mp_org_id, 'PM', Nvl(Get_vnname('Drug Amount'), 'Drug Amount'),") \
	_T("                                     'MA', Nvl(Get_vnname('Material Amount'), 'Material Amount'),") \
	_T("                                     'BB', f.hfe_desc) descr,") \
	_T("                   Cast('N' AS NVARCHAR2(1)) hitech_machine,") \
	_T("                   hfe_quantity times,") \
	_T("                   hfe_cost amount,") \
	_T("				   hfe_fee_id fee_id") \
	_T("         FROM      hms_fee f") \
	_T("         LEFT JOIN m_product_item ON ( Cast(hfe_itemid AS INTEGER) = mpi_product_item_id )") \
	_T("         LEFT JOIN m_product ON ( mpi_product_id = mp_product_id )") \
	_T("         WHERE     hfe_type IN ( 'D', 'M', 'R' ) AND hfe_status IN ( 'P', 'R' ) AND") \
	_T("                   Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )),") \
	_T("     tbl_fee_invoice") \
	_T("     AS (SELECT     hfe_cash_id,") \
	_T("                    hfe_class,") \
	_T("                    CASE WHEN ( fee_type = 'E' AND Nvl(hd_outpatient, 'N') = 'Y' )  OR") \
	_T("                              i.hfe_type = 'O'") \
	_T("                    THEN") \
	_T("                         i.hfe_deptid") \
	_T("                    ELSE dept_id") \
	_T("                    END dept_id,") \
	_T("                    Nvl(hfg_type_id, 2000) hfe_typeindex,") \
	_T("                    Substr(hfe_group, 1, 3) hfe_group3,") \
	_T("                    Decode('O', i.hfe_type, 'Other fee in dept',") \
	_T("                                descr) descr,") \
	_T("                    Decode('O', i.hfe_type, 1,") \
	_T("                                times) times,") \
	_T("                    Decode('I', i.hfe_class, Decode('O', i.hfe_type, hfe_amount,") \
	_T("                                                         amount),") \
	_T("                                0) i_amount,") \
	_T("                    Decode('I', i.hfe_class, 0,") \
	_T("                                Decode('O', i.hfe_type, hfe_amount,") \
	_T("                                            amount)) e_amount,") \
	_T("                    Decode('O', i.hfe_type, hfe_amount,") \
	_T("                                amount) amount") \
	_T("         FROM       hms_fee_invoice_view_v2 i") \
	_T("         LEFT JOIN  hms_doc ON ( i.hfe_docno = hd_docno )") \
	_T("         INNER JOIN tbl_fee") \
	_T("         --WHERE hitech_machine IN (%s)") \
	_T("         ON ( i.hfe_docno = tbl_fee.hfe_docno AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
	_T("         LEFT JOIN  hms_fee_group ON ( hfg_id = hfe_group )") \
	_T("         WHERE      hfe_cash_id > 0 AND fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline WHERE hfe_status = 'P' AND hfe_refidx = i.hfe_invoiceno))") \
	_T("SELECT     dept_id,") \
	_T("           descr,") \
	_T("           SUM(times) times,") \
	_T("           SUM(e_amount) e_amount,") \
	_T("           SUM(i_amount) i_amount,") \
	_T("           SUM(amount) total_amount") \
	_T("FROM       fa_cash") \
	_T("INNER JOIN tbl_fee_invoice ON ( fac_cash_id = hfe_cash_id )") \
	_T("WHERE      amount > 0") \
	_T("GROUP      BY dept_id,hfe_typeindex,hfe_group3,descr") \
	_T("ORDER      BY dept_id,hfe_typeindex,hfe_group3,descr "));
}
