#include "stdafx.h"
#include "FMSpendDetailbyItem.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSpendDetailByItem* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSpendDetailByItem* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSpendDetailByItem* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSpendDetailByItem* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnOrderByAddNew();
}*/
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem *)pWnd)->OnObjectTypeSelendok();
}
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem *)pWnd)->OnObjectTypeLoadData();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMSpendDetailByItem*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMSpendDetailByItem*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMSpendDetailByItem*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMSpendDetailByItem *pVw = (CFMSpendDetailByItem *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMSpendDetailByItem *pVw = (CFMSpendDetailByItem *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMSpendDetailByItem *pVw = (CFMSpendDetailByItem *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMSpendDetailByItem *pVw = (CFMSpendDetailByItem *)pWnd;
	pVw->OnExportSelect();
}
static void _OnServiceOnDemandSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem*)pWnd)->OnServiceOnDemandSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMSpendDetailByItem*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMSpendDetailByItem*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMSpendDetailByItem*)pWnd)->OnListCheckAllTYC();
	return 0;
}

CFMSpendDetailByItem::CFMSpendDetailByItem(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMSpendDetailByItem::~CFMSpendDetailByItem(){
}
void CFMSpendDetailByItem::OnCreateComponents(){
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
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 10, 505, 110, 530);
	m_wndServiceOnDemand.Create(this, _T("Service On Demand"), 115, 505, 215, 530);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 110, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 505, 215, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 220, 505, 320, 530);
	m_wndAll.Create(this, _T("All"), 325, 505, 425, 530);
	m_wndList.Create(this,10, 150, 425, 500); 
	m_wndDeposit.ShowWindow(SW_HIDE);
	m_wndWithoutGeneral.ShowWindow(SW_HIDE);
	m_wndInpatient.ShowWindow(SW_HIDE);
	m_wndOutpatient.ShowWindow(SW_HIDE);
	m_wndAll.ShowWindow(SW_HIDE);*/
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
void CFMSpendDetailByItem::OnInitializeComponents(){
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

void CFMSpendDetailByItem::OnSetWindowEvents(){
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


}
void CFMSpendDetailByItem::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nPatientType);

}
void CFMSpendDetailByItem::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMSpendDetailByItem::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMSpendDetailByItem::SetDefaultValues(){

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

int CFMSpendDetailByItem::SetMode(int nMode){
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

/*void CFMSpendDetailByItem::OnYearChange(){
	
} */
/*void CFMSpendDetailByItem::OnYearSetfocus(){
	
} */
/*void CFMSpendDetailByItem::OnYearKillfocus(){
	
} */
int CFMSpendDetailByItem::OnYearCheckValue(){
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
 
void CFMSpendDetailByItem::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMSpendDetailByItem::OnReportPeriodSelendok(){
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

/*void CFMSpendDetailByItem::OnReportPeriodSetfocus(){
	
}*/
/*void CFMSpendDetailByItem::OnReportPeriodKillfocus(){
	
}*/
long CFMSpendDetailByItem::OnReportPeriodLoadData(){
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

/*void CFMSpendDetailByItem::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMSpendDetailByItem::OnFromDateChange(){
	
} */
/*void CFMSpendDetailByItem::OnFromDateSetfocus(){
	
} */
/*void CFMSpendDetailByItem::OnFromDateKillfocus(){
	
} */
int CFMSpendDetailByItem::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMSpendDetailByItem::OnToDateChange(){
	
} */
/*void CFMSpendDetailByItem::OnToDateSetfocus(){
	
} */
/*void CFMSpendDetailByItem::OnToDateKillfocus(){
	
} */
int CFMSpendDetailByItem::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMSpendDetailByItem::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSpendDetailByItem::OnClerkSelendok(){
	 
}
/*void CFMSpendDetailByItem::OnClerkSetfocus(){
	
}*/
/*void CFMSpendDetailByItem::OnClerkKillfocus(){
	
}*/
long CFMSpendDetailByItem::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMSpendDetailByItem::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSpendDetailByItem::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSpendDetailByItem::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMSpendDetailByItem::OnStatusSetfocus(){
	
}*/
/*void CFMSpendDetailByItem::OnStatusKillfocus(){
	
}*/
int CFMSpendDetailByItem::OnListCheckAllTYC()
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
int CFMSpendDetailByItem::OnListCheckAllPTTYC()
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

void CFMSpendDetailByItem::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}

long CFMSpendDetailByItem::OnStatusLoadData(){
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
/*void CFMSpendDetailByItem::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSpendDetailByItem::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSpendDetailByItem::OnOrderBySelendok(){
	 
}
/*void CFMSpendDetailByItem::OnOrderBySetfocus(){
	
}*/
/*void CFMSpendDetailByItem::OnOrderByKillfocus(){
	
}*/
long CFMSpendDetailByItem::OnOrderByLoadData(){
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

void CFMSpendDetailByItem::OnObjectTypeSelendok(){
	OnListLoadData();
}

long CFMSpendDetailByItem::OnObjectTypeLoadData(){
	m_wndObjectType.AddItems(_T("01"), _T("\x44\x1ECB\x63h v\x1EE5"), NULL);
	m_wndObjectType.AddItems(_T("02"), _T("\x42\x1EA3o hi\x1EC3m"), NULL);
	m_wndObjectType.AddItems(_T("03"), _T("Qu\xE2n"), NULL);
	return 3;
}

/*void CFMSpendDetailByItem::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMSpendDetailByItem::OnDeptLoadData(){
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

void CFMSpendDetailByItem::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMSpendDetailByItem::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMSpendDetailByItem::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMSpendDetailByItem::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMSpendDetailByItem::OnListLoadData(){
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
				 _T("FROM fa_cash WHERE fac_invoicetype in ('P') %s ORDER BY fac_cash_id"), szWhere);
	
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

void CFMSpendDetailByItem::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMSpendDetailByItem::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMSpendDetailByItem::OnServiceOnDemandSelect(){
	OnListLoadData();
}

void CFMSpendDetailByItem::OnInpatientSelect(){
	
}
void CFMSpendDetailByItem::OnOutpatientSelect(){
	
}
void CFMSpendDetailByItem::OnDepositSelect(){
	
}
void CFMSpendDetailByItem::OnAllSelect(){
	
}
 
 
int CFMSpendDetailByItem::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMSpendDetailByItem::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMSpendDetailByItem::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMSpendDetailByItem::OnSaveFMInsuranceReceiptSummary(){
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
int CFMSpendDetailByItem::OnCancelFMInsuranceReceiptSummary(){
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
int CFMSpendDetailByItem::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMSpendDetailByItem::OnPrintSelect(){
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

void CFMSpendDetailByItem::OnPrint1stver(){
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

void CFMSpendDetailByItem::OnPrint2ndver()
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
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_MAU3.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	_msg(_T("%s"), szSQL);


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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMSpendDetailByItem"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMSpendDetailByItem::OnPrint2ndver_Ins()
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMSpendDetailByItem"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMSpendDetailByItem::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, szPrevGrp, szNewGrp;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 14);
	xls.SetCellMergedColumns(0, 3, 14);
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 15);
	for (int i = 0; i < 13; i++)
		xls.SetColumnWidth(i+3, 13);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x42\x1EA2NG K\xCA \x43H\x1EE8NG T\x1EEA GHI S\x1ED4 THU \x42HYT");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellMergedRows(0, 4, 2);
	xls.SetCellText(1, 4, _T("N\x1ED9i \x64ung"), 4098, true);
	xls.SetCellMergedRows(1, 4, 2);
	xls.SetCellText(2, 4, _T("S\x1ED1 phi\x1EBFu thu"), 4098, true);
	xls.SetCellMergedRows(2, 4, 2);
	xls.SetCellText(3, 4, _T("Tr\xED\x63h t\x1EA1m g\x1EEDi"), 4098, true);
	xls.SetCellMergedRows(3, 4, 2);
	xls.SetCellText(4, 4, _T("T\x1ED5ng vi\x1EC7n ph\xED"), 4098, true);
	xls.SetCellMergedRows(4, 4, 2);
	xls.SetCellText(5, 4, _T("\x42HTT"), 4098, true);
	xls.SetCellMergedRows(5, 4, 2);
	xls.SetCellText(6, 4, _T("Vi\x1EC7n ph\xED ph\x1EA3i thu"), 4098, true);
	xls.SetCellMergedColumns(6, 4, 3);
	xls.SetCellText(6, 5, _T("% \x63\xF9ng \x63hi tr\x1EA3"), 4098, true);
	xls.SetCellText(7, 5, _T("Ti\x1EC1n \x103n"), 4098, true);
	xls.SetCellText(8, 5, _T("Thu \x63h\xEAnh"), 4098, true);
	xls.SetCellText(9, 4, _T("Thu \x63h\xEDnh s\xE1\x63h"), 4098, true);
	xls.SetCellMergedRows(9, 4, 2);
	xls.SetCellText(10, 4, _T("Thu kh\xE1\x63"), 4098, true);
	xls.SetCellMergedRows(10, 4, 2);
	xls.SetCellText(11, 4, _T("\x43\x1ED9ng"), 4098, true);
	xls.SetCellMergedRows(11, 4, 2);
	xls.SetCellText(12, 4, _T("T\x1EA1m g\x1EEDi"), 4098, true);
	xls.SetCellMergedRows(12, 4, 2);
	xls.SetCellText(13, 4, _T("Ngo\x1EA1i tr\xFA"), 4098, true);
	xls.SetCellMergedRows(13, 4, 2);
	xls.SetCellText(14, 4, _T("\x43\x1ED9ng thu"), 4098, true);
	xls.SetCellMergedRows(14, 4, 2);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("chindex"), szNewGrp);
		if (szNewGrp != szPrevGrp)
		{
			m_mIndex.Lookup(szNewGrp, tmpStr);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			nRow++;
			szPrevGrp = szNewGrp;
			nIdx = 1;
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("user_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("fac_invoiceno")), FMT_TEXT);
		rs.GetValue(_T("trich_tam_gui"), nTmp);
		xls.SetCellText(3, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tong_vien_phi"), nTmp);
		xls.SetCellText(4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("BHTT"), nTmp);
		xls.SetCellText(5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("cung_chi_tra"), nTmp);
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tien_an"), nTmp);
		xls.SetCellText(7, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("thu_chenh"), nTmp);
		xls.SetCellText(8, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("thu_chinh_sach"), nTmp);
		xls.SetCellText(9, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("thu_khac"), nTmp);
		xls.SetCellText(10, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("cong"), nTmp);
		xls.SetCellText(11, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tam_gui"), nTmp);
		xls.SetCellText(12, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("ngoai_tru"), nTmp);
		xls.SetCellText(13, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("cong_thu"), nTmp);
		xls.SetCellText(14, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\BANG_KE_CHUNG_TU_GHI_SO_THU_BHYT.xls"));
}

CString CFMSpendDetailByItem::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;

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
	
	szWhere.Format(_T(" and hfe_cash_id in(%s) "), szReceiptStr);

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
		szWhere.AppendFormat(_T(" and chindex='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and chindex='II' "));
	}
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);
	if (m_szObjectTypeKey == _T("01"))
		szSQL.Format(_T(" SELECT    dept_id, ") \
		_T("           descr, ") \
		_T("           SUM(times) times, ") \
		_T("           SUM(e_amount) e_amount, ") \
		_T("           SUM(i_amount) i_amount, ") \
		_T("           SUM(amount) total_amount ") \
		_T(" FROM      (SELECT    hfe_cash_id, ") \
		_T("                      CASE WHEN ( fee_type = 'E' AND Nvl(hd_outpatient, 'N') = 'Y' )  OR i.hfe_type = 'O' THEN i.hfe_deptid ELSE dept_id END ") \
		_T("						dept_id, ") \
		_T("					  NVL(hfg_type_id, 2000) hfe_typeindex, substr(tbl_fee.hfe_group, 1, 3) hfe_group3,") \
		_T("                      Decode('O', i.hfe_type, cast('Other fee in dept' as nvarchar2(35)), descr) descr, ") \
		_T("                      Decode('O', i.hfe_type, 1, times) times, ") \
		_T("                      Decode('I', i.hfe_class, Decode('O', i.hfe_type, hfe_amount, amount), 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, Decode('O', i.hfe_type, hfe_amount, amount)) e_amount, ") \
		_T("                      Decode('O', i.hfe_type, hfe_amount, amount) amount ") \
		_T("            FROM      hms_fee_refund i ") \
		_T("            LEFT JOIN hms_doc ON ( i.hfe_docno = hd_docno ) ") \
		_T("            INNER JOIN (SELECT    hfe_invoiceno, ") \
		_T("                                 hfe_docno, ") \
		_T("                                 CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE hfe_deptid END ") \
		_T("									dept_id, ") \
		_T("								 f.hfe_group,") \
		_T("                                 hfe_type fee_type, ") \
		_T("                                 hfe_desc descr, ") \
		_T("								 CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("                                 hfe_quantity times, ") \
		_T("                                 hfe_cost amount, ") \
		_T("								 (select hfe_invoiceno from hms_fee_refundline where hfe_fee_refundline_id = f.hfe_fee_id) invoice_no,") \
		_T("								 (select hfe_cash_id from hms_fee_refundline l, hms_fee_refund r where r.hfe_invoiceno = l.hfe_invoiceno and r.hfe_docno = f.hfe_docno and hfe_fee_refundline_id = f.hfe_fee_id) rcash_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN hms_exam ON ( hfe_docno = he_docno AND hfe_orderid = he_receptidx ) ") \
		_T("                       LEFT JOIN hms_roomlist ON ( hrl_deptid = he_deptid AND hrl_id = he_roomid ) ") \
		_T("                       WHERE     hfe_type = 'E' AND hfe_status IN ('R') AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' ) ") \
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
		_T("								 (select hfe_invoiceno from hms_fee_refundline where hfe_fee_refundline_id = f.hfe_fee_id and hfe_docno = f.hfe_docno) invoice_no,") \
		_T("								 (select hfe_cash_id from hms_fee_refundline l, hms_fee_refund r where r.hfe_invoiceno = l.hfe_invoiceno and r.hfe_docno = f.hfe_docno and hfe_fee_refundline_id = f.hfe_fee_id) rcash_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN hms_operation ON ( hfe_docno = ho_docno AND hfe_orderid = ho_idx ) ") \
		_T("                       LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid ) ") \
		_T("                       WHERE     hfe_status IN ('R' ) AND hfe_type IN ( 'O', 'P', 'T', 'B', ") \
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
		_T("								 (select hfe_invoiceno from hms_fee_refundline where hfe_fee_refundline_id = f.hfe_fee_id and hfe_docno = f.hfe_docno) invoice_no,") \
		_T("								 (select hfe_cash_id from hms_fee_refundline l, hms_fee_refund r where r.hfe_invoiceno = l.hfe_invoiceno and r.hfe_docno = f.hfe_docno and hfe_fee_refundline_id = f.hfe_fee_id) rcash_id") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN m_product_item ON ( Cast(hfe_itemid AS INTEGER) = mpi_product_item_id ) ") \
		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("                       WHERE     hfe_type IN ( 'D', 'M', 'R' ) AND hfe_status IN ('R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )") \
		_T("			) tbl_fee ON ( i.hfe_docno = tbl_fee.hfe_docno AND i.hfe_refidx = tbl_fee.hfe_invoiceno AND i.hfe_cash_id = rcash_id AND i.hfe_invoiceno = tbl_fee.invoice_no) ") \
		_T("			LEFT JOIN hms_fee_group ON (hfg_id = tbl_fee.hfe_group)") \
		_T("            WHERE     hfe_cash_id > 0 %s AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = i.hfe_invoiceno) > 0") \
		_T("			UNION ALL") \
		_T("			SELECT    hfe_cash_id, ") \
		_T("                      Cast(CASE Cast(mp_org_id AS VARCHAR2(15)) WHEN 'PM' THEN 'KD' ") \
		_T("                                        WHEN 'MA' THEN 'C10' ") \
		_T("                                        WHEN 'BB' THEN 'C16' ") \
		_T("                                      END AS NVARCHAR2(15)) dept_id, ") \
		_T("					  NVL(hfg_type_id, 2000) hfe_typeindex, substr(mp_producttype, 1, 3) hfe_group3,") \
		_T("                      DECODE(mp_org_id, 'PM', NVL(get_vnname('Drug Amount'), cast('Drug Amount' as nvarchar2(15))), 'MA', NVL(get_vnname('Material Amount'), cast('Material Amount' as nvarchar2(15))), cast('BB' as nvarchar2(15)), mp_name) descr, ") \
		_T("                      hpol_qtyreturn times, ") \
		_T("                      0 i_amount, ") \
		_T("                      hpol_qtyreturn * hpol_unitprice e_amount, ") \
		_T("                      hpol_qtyreturn * hpol_unitprice amount ") \
		_T("            FROM      hms_fee_refund i ") \
		_T("			INNER JOIN hms_pharmareturnorder r ON (hfe_invoiceno = hpo_invoiceno)") \
		_T("			LEFT JOIN hms_pharmareturnorder_line l ON (r.hpo_pharmareturnorder_id = l.hpol_pharmareturnorder_id)") \
		_T("			LEFT JOIN hms_doc ON(hd_docno = i.hfe_docno)") \
		_T("            LEFT JOIN m_product_item ON ( hpol_product_item_id = mpi_product_item_id ) ") \
		_T("            LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("			LEFT JOIN hms_fee_group ON (hfg_id = mp_producttype)") \
		_T("			WHERE hfe_cash_id > 0 AND hpo_status = 'A'") \
		_T("			UNION ALL") \
		_T("			SELECT    hfe_cash_id, ") \
		_T("                      i.hfe_deptid dept_id, ") \
		_T("					  2000 hfe_typeindex, cast('XXX' as nvarchar2(3)) hfe_group3,") \
		_T("                      cast('\x43hi kh\xE1\x63' as nvarchar2(35)) descr, ") \
		_T("                      1 times, ") \
		_T("                      Decode('I', i.hfe_class, hfe_amount, 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, hfe_amount) e_amount, ") \
		_T("                      hfe_amount amount ") \
		_T("            FROM      hms_fee_refund i ") \
		_T("			WHERE hfe_cash_id > 0 AND hfe_type = 'V' AND hfe_status = 'P'") \
		_T(" ) tbl_invoice ") \
		_T(" WHERE     amount > 0 %s") \
		_T(" GROUP     BY dept_id, hfe_typeindex, hfe_group3, descr ") \
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr "), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);
	else
		szSQL.Format(_T(" SELECT    dept_id, ") \
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
		_T("					  NVL(hfg_type_id, 2000) hfe_typeindex, substr(hfe_group, 1, 3) hfe_group3,") \
		_T("                      Decode('O', i.hfe_type, 'Other fee in dept', descr) descr, ") \
		_T("                      Decode('O', i.hfe_type, 1, times) times, ") \
		_T("					  unit_price, ins_paid, discount,") \
		_T("                      Decode('I', i.hfe_class, Decode('O', i.hfe_type, hfe_amount, amount), 0) i_amount, ") \
		_T("                      Decode('I', i.hfe_class, 0, Decode('O', i.hfe_type, hfe_amount, amount)) e_amount, ") \
		_T("                      Decode('O', i.hfe_type, hfe_amount, amount) amount ") \
		_T("            FROM      hms_fee_invoice_view_v2 i ") \
		_T("            LEFT JOIN hms_doc ON ( i.hfe_docno = hd_docno ) ") \
		_T("            INNER JOIN (SELECT    hfe_invoiceno, ") \
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
		_T("								 (select hfe_invoiceno from hms_fee_refundline where hfe_fee_refundline_id = f.hfe_fee_id and hfe_docno = f.hfe_docno) invoice_no,") \
		_T("                                 hfe_patpaid amount ") \
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
		_T("								 hfe_insprice unit_price,") \
		_T("								 hfe_inspaid ins_paid,") \
		_T("								 hfe_discount discount,") \
		_T("								 (select hfe_invoiceno from hms_fee_refundline where hfe_fee_refundline_id = f.hfe_fee_id and f.hfe_docno = hfe_docno) invoice_no,") \
		_T("                                 hfe_patpaid amount ") \
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
		_T("								 hfe_insprice unit_price,") \
		_T("								 hfe_inspaid ins_paid,") \
		_T("								 hfe_discount discount,") \
		_T("								 (select hfe_invoiceno from hms_fee_refundline where hfe_fee_refundline_id = f.hfe_fee_id and f.hfe_docno = hfe_docno) invoice_no,") \
		_T("                                 hfe_patpaid amount ") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN m_product_item ON ( Cast(hfe_itemid AS INTEGER) = mpi_product_item_id ) ") \
		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("                       WHERE     hfe_type IN ( 'D', 'M', 'R' ) AND hfe_status IN ( 'P', 'R' ) AND Nvl(hfe_category, 'N') NOT IN ( 'Y', 'BQP', 'BBV' )) ") \
		_T("			tbl_fee ON ( i.hfe_docno = tbl_fee.hfe_docno AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno AND tbl_fee.hfe_invoiceno = i.hfe_invoiceno) ") \
		_T("			LEFT JOIN hms_fee_group ON (hfg_id = hfe_group)") \
		_T("            WHERE     hfe_cash_id > 0 AND hitech_machine IN (%s)") \
		_T("			) tbl_invoice ") \
		_T(" WHERE     amount > 0 %s") \
		_T(" GROUP     BY dept_id, hfe_typeindex, hfe_group3, descr, unit_price ") \
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr "), m_bHitechMachine?_T("'Y'"):_T("'Y', 'N'"), szWhere);
	return szSQL;
}

BOOL CFMSpendDetailByItem::ParseALargeFile(HWND hwndParent, LPTSTR lpszFileName) 
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