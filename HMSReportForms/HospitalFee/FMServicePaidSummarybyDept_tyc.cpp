#include "stdafx.h"
#include "FMServicePaidSummarybyDept_tyc.h"
#include "HMSTrackingPatientFeeDialog.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServicePaidSummaryByDept_tyc* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnReportPeriodSelendok();
}
static void _OnENTOperationSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnENTOperationSelect();
}
static void _OnReqObsSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnReqObsSelect();
}

/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServicePaidSummaryByDept_tyc* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServicePaidSummaryByDept_tyc* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServicePaidSummaryByDept_tyc* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc *)pWnd)->OnOrderByAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd)
{
	CFMServicePaidSummaryByDept_tyc *pVw = (CFMServicePaidSummaryByDept_tyc *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMServicePaidSummaryByDept_tyc *pVw = (CFMServicePaidSummaryByDept_tyc *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServicePaidSummaryByDept_tyc *pVw = (CFMServicePaidSummaryByDept_tyc *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServicePaidSummaryByDept_tyc *pVw = (CFMServicePaidSummaryByDept_tyc *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}
static int _OnListCheckAllBHPTTYCFnc(CWnd *pWnd)
{
	((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListCheckAllBHPTTYC();
	return 0;
}
static int _OnListCheckAllDVPTTYCFnc(CWnd *pWnd)
{
	((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListCheckAllDVPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnSODSelect();
}
static void _OnSurgerySelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnSurgerySelect();
}
static void _OnOperationSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnOperationSelect();
}
static void _OnOtherDeptFilterSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnOtherDeptFilterSelect();
}
static void _OnTrackingFeeSelectFnc(CWnd *pWnd){
	CFMServicePaidSummaryByDept_tyc *pVw = (CFMServicePaidSummaryByDept_tyc *)pWnd;
	pVw->OnTrackingFeeSelect();
} 
static void _OnNotinSODSelectFnc(CWnd *pWnd)
{
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnNotinSODSelect();
}
static void _OnNonReqObsSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnNonReqObsSelect();
}

static void _OnObstetricOperationSelectFnc(CWnd *pWnd)
{
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnObstetricOperationSelect();
}
static void _OnTTdieutritrongngaySelectFnc(CWnd *pWnd)
{
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnTTdieutritrongngaySelect();
}
static void _OnTMHOMSelectFnc(CWnd *pWnd){
	CFMServicePaidSummaryByDept_tyc *pVw = (CFMServicePaidSummaryByDept_tyc *)pWnd;
	pVw->OnTMHOMSelect();
}
static void _OnThuThuatMatSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnThuThuatMatSelect();
}
static void _OnDongYSelectFnc(CWnd *pWnd){
	 ((CFMServicePaidSummaryByDept_tyc*)pWnd)->OnDongYSelect();
}


CFMServicePaidSummaryByDept_tyc::CFMServicePaidSummaryByDept_tyc(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMServicePaidSummaryByDept_tyc::~CFMServicePaidSummaryByDept_tyc()
{
}
void CFMServicePaidSummaryByDept_tyc::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 501);
	m_wndYearLabel.Create(this, _T("Year"), 10, 33, 90, 58);
	m_wndYear.Create(this,95, 33, 225, 58); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 33, 331, 58);
	m_wndReportPeriod.Create(this,346, 33, 476, 58); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 63, 90, 88);
	m_wndFromDate.Create(this,95, 63, 225, 88); 
	m_wndToDate.Create(this,346, 63, 476, 88); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 63, 331, 88);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 93, 90, 118);
	m_wndClerk.Create(this,95, 93, 225, 118); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 123, 90, 148);
	m_wndOrderBy.Create(this,95, 123, 225, 148); 
	m_wndDeptLabel.Create(this, _T("Dept"), 240, 123, 331, 148);
	m_wndDept.Create(this,346, 123, 476, 148); 
	m_wndStatusLabel.Create(this, _T("Status"), 240, 93, 331, 118);
	m_wndStatus.Create(this,346, 93, 476, 118); 
	m_wndList.Create(this,10, 153, 476, 377); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 20, 0, 20, 0);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 508, 85, 533);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 508, 170, 533);
	m_wndPrint.Create(this, _T("&Print"), 175, 508, 255, 533);
	m_wndExport.Create(this, _T("Export XLS"), 260, 508, 340, 533);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 382, 115, 407);
	m_wndOutpatient.Create(this, _T("Outpatient"), 120, 382, 225, 407);
	m_wndDeposit.Create(this, _T("Deposit"), 20, 0, 20, 0);
	m_wndAll.Create(this, _T("All"), 231, 382, 336, 407);
	m_wndSOD.Create(this, _T("SOD"), 346, 382, 475, 407);
	m_wndSurgery.Create(this, _T("Surgery"), 9, 413, 114, 438);
	m_wndOperation.Create(this, _T("Thủ thuật"), 120, 413, 225, 438);
	m_wndOtherDeptFilter.Create(this, _T("Chỉ tính TYC"), 231, 413, 336, 438);
	m_wndNotinSOD.Create(this, _T("NotinSOD"), 346, 413, 475, 438);
	m_wndObstetricOperation.Create(this, _T("TT sản TYC"), 9, 444, 114, 469);
	m_wndENTOperation.Create(this, _T("TT TMH"), 120, 444, 225, 469);
	m_wndReqObs.Create(this, _T("ReqObs"), 346, 444, 475, 469);
	m_wndNonReqObs.Create(this, _T("NonReqObs"), 231, 443, 336, 468);
	m_wndTrackingFee.Create(this, _T("TrackingFee"), 369, 508, 474, 533);
	m_wndTTdieutritrongngay.Create(this, _T("TT điều trị đau"), 9, 476, 225, 501);
	m_wndTMHOM.Create(this, _T("TT_CLS"), 5, 538, 85, 563);
	m_wndTMHOM.EnableWindow(TRUE);
	m_wndThuThuatMat.Create(this, _T("Thu Thuat Mat"), 232, 476, 337, 501);
	m_wndDongY.Create(this, _T("TT Dong Y"), 346, 476, 475, 501);
}
void CFMServicePaidSummaryByDept_tyc::OnInitializeComponents(){
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

void CFMServicePaidSummaryByDept_tyc::OnSetWindowEvents(){
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
	m_wndList.AddEvent(3, _T("Check All BH-PTTYC"), _OnListCheckAllBHPTTYCFnc);
	m_wndList.AddEvent(4, _T("Check All DV-PTTYC"), _OnListCheckAllDVPTTYCFnc);
	m_wndList.AddEvent(5, _T("Search"), _OnListSearchItemFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndSurgery.SetEvent(WE_CLICK, _OnSurgerySelectFnc);
	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
	m_wndOtherDeptFilter.SetEvent(WE_CLICK, _OnOtherDeptFilterSelectFnc);
	m_wndNotinSOD.SetEvent(WE_CLICK, _OnNotinSODSelectFnc);
	m_wndObstetricOperation.SetEvent(WE_CLICK, _OnObstetricOperationSelectFnc);
	m_wndENTOperation.SetEvent(WE_CLICK, _OnENTOperationSelectFnc);
	m_wndReqObs.SetEvent(WE_CLICK, _OnReqObsSelectFnc);
	m_wndNonReqObs.SetEvent(WE_CLICK, _OnNonReqObsSelectFnc);
	m_wndTrackingFee.SetEvent(WE_CLICK, _OnTrackingFeeSelectFnc);
	m_wndTTdieutritrongngay.SetEvent(WE_CLICK, _OnTTdieutritrongngaySelectFnc);
	m_wndTMHOM.SetEvent(WE_CLICK, _OnTMHOMSelectFnc);
	m_wndThuThuatMat.SetEvent(WE_CLICK, _OnThuThuatMatSelectFnc);
	m_wndDongY.SetEvent(WE_CLICK, _OnDongYSelectFnc);
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
	//SetMode(VM_EDIT);
	UpdateData(FALSE);


}
void CFMServicePaidSummaryByDept_tyc::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndSurgery.GetDlgCtrlID(), m_bSurgery);
	DDX_Check(pDX, m_wndOperation.GetDlgCtrlID(), m_bOperation);
	DDX_Check(pDX, m_wndOtherDeptFilter.GetDlgCtrlID(), m_bOtherDeptFilter);
	DDX_Check(pDX, m_wndNotinSOD.GetDlgCtrlID(), m_bNotinSOD);
	DDX_Check(pDX, m_wndObstetricOperation.GetDlgCtrlID(), m_bObstetricOperation);
	DDX_Check(pDX, m_wndReqObs.GetDlgCtrlID(), m_bReqObs);
	DDX_Check(pDX, m_wndENTOperation.GetDlgCtrlID(), m_bENTOperation);
	DDX_Check(pDX, m_wndNonReqObs.GetDlgCtrlID(), m_bNonReqObs);
	DDX_Check(pDX, m_wndTTdieutritrongngay.GetDlgCtrlID(), m_bTTdieutritrongngay);
	DDX_Check(pDX, m_wndThuThuatMat.GetDlgCtrlID(), m_bThuThuatMat);
	DDX_Check(pDX, m_wndDongY.GetDlgCtrlID(), m_bDongY);
}
void CFMServicePaidSummaryByDept_tyc::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMServicePaidSummaryByDept_tyc::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMServicePaidSummaryByDept_tyc::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("04");
	m_nPatientType = 3;
	m_bSOD = TRUE;
	m_bSurgery=FALSE;
	m_bOperation=FALSE;
	m_bOtherDeptFilter=FALSE;
	m_bNotinSOD=FALSE;
	m_bObstetricOperation=FALSE;
	m_bENTOperation=FALSE;
	m_bReqObs=FALSE;
	m_bNonReqObs=FALSE;
	m_bTTdieutritrongngay=FALSE;
	m_bThuThuatMat=FALSE;
	m_bDongY=FALSE;
}

int CFMServicePaidSummaryByDept_tyc::SetMode(int nMode){
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

/*void CFMServicePaidSummaryByDept_tyc::OnYearChange(){
	
} */
/*void CFMServicePaidSummaryByDept_tyc::OnYearSetfocus(){
	
} */
/*void CFMServicePaidSummaryByDept_tyc::OnYearKillfocus(){
	
} */
int CFMServicePaidSummaryByDept_tyc::OnYearCheckValue(){
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
 
void CFMServicePaidSummaryByDept_tyc::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServicePaidSummaryByDept_tyc::OnReportPeriodSelendok(){
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

/*void CFMServicePaidSummaryByDept_tyc::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServicePaidSummaryByDept_tyc::OnReportPeriodKillfocus(){
	
}*/
long CFMServicePaidSummaryByDept_tyc::OnReportPeriodLoadData(){
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

/*void CFMServicePaidSummaryByDept_tyc::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServicePaidSummaryByDept_tyc::OnFromDateChange(){
	
} */
/*void CFMServicePaidSummaryByDept_tyc::OnFromDateSetfocus(){
	
} */
/*void CFMServicePaidSummaryByDept_tyc::OnFromDateKillfocus(){
	
} */
int CFMServicePaidSummaryByDept_tyc::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
	void CFMServicePaidSummaryByDept_tyc::OnTTdieutritrongngaySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

 
/*void CFMServicePaidSummaryByDept_tyc::OnToDateChange(){
	
} */
/*void CFMServicePaidSummaryByDept_tyc::OnToDateSetfocus(){
	
} */
/*void CFMServicePaidSummaryByDept_tyc::OnToDateKillfocus(){
	
} */
int CFMServicePaidSummaryByDept_tyc::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMServicePaidSummaryByDept_tyc::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServicePaidSummaryByDept_tyc::OnClerkSelendok(){
	 
}
int CFMServicePaidSummaryByDept_tyc::OnListCheckAllTYC()
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
int CFMServicePaidSummaryByDept_tyc::OnListCheckAllPTTYC()
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

void CFMServicePaidSummaryByDept_tyc::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}
void CFMServicePaidSummaryByDept_tyc::OnSODSelect(){
	OnListLoadData();
}
void CFMServicePaidSummaryByDept_tyc::OnNotinSODSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServicePaidSummaryByDept_tyc::OnSurgerySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMServicePaidSummaryByDept_tyc::OnOperationSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMServicePaidSummaryByDept_tyc::OnOtherDeptFilterSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMServicePaidSummaryByDept_tyc::OnObstetricOperationSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMServicePaidSummaryByDept_tyc::OnENTOperationSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServicePaidSummaryByDept_tyc::OnThuThuatMatSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMServicePaidSummaryByDept_tyc::OnDongYSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMServicePaidSummaryByDept_tyc::OnReqObsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServicePaidSummaryByDept_tyc::OnNonReqObsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMServicePaidSummaryByDept_tyc::OnTrackingFeeSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CHMSTrackingPatientFeeDialog dlg(this);
	dlg.DoModal();	
} 
/*void CFMServicePaidSummaryByDept_tyc::OnClerkSetfocus(){
	
}*/
/*void CFMServicePaidSummaryByDept_tyc::OnClerkKillfocus(){
	
}*/
long CFMServicePaidSummaryByDept_tyc::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServicePaidSummaryByDept_tyc::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServicePaidSummaryByDept_tyc::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServicePaidSummaryByDept_tyc::OnStatusSelendok()
{
	 OnListLoadData();
}
/*void CFMServicePaidSummaryByDept_tyc::OnStatusSetfocus(){
	
}*/
/*void CFMServicePaidSummaryByDept_tyc::OnStatusKillfocus(){
	
}*/
long CFMServicePaidSummaryByDept_tyc::OnStatusLoadData(){
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
/*void CFMServicePaidSummaryByDept_tyc::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServicePaidSummaryByDept_tyc::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServicePaidSummaryByDept_tyc::OnOrderBySelendok(){
	 
}
/*void CFMServicePaidSummaryByDept_tyc::OnOrderBySetfocus(){
	
}*/
/*void CFMServicePaidSummaryByDept_tyc::OnOrderByKillfocus(){
	
}*/
long CFMServicePaidSummaryByDept_tyc::OnOrderByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndOrderBy.AddItems(_T("01"), _T("S\x1EAFp \x78\x1EBFp th\x65o t\xEAn \x62\x1EC7nh nh\xE2n"), NULL);
	m_wndOrderBy.AddItems(_T("02"), _T("S\x1EAFp \x78\x1EBFp th\x65o s\x1ED1 h\x1ED3 s\x1A1"), NULL);
	//m_wndOrderBy.AddItems(_T("03"), _T("S\x1EAFp \x78\x1EBFp th\x65o ng\xE0y th\x61nh to\xE1n"), NULL);
	m_wndOrderBy.AddItems(_T("04"), _T("S\x1EAFp \x78\x1EBFp th\x65o kho\x61"), NULL);
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
/*void CFMServicePaidSummaryByDept_tyc::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMServicePaidSummaryByDept_tyc::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and SD_DEPT_REPORT='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT SD_DEPT_REPORT as id, sd_name as name FROM sys_dept_report %s ORDER BY sd_id "), szWhere);

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

void CFMServicePaidSummaryByDept_tyc::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServicePaidSummaryByDept_tyc::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMServicePaidSummaryByDept_tyc::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMServicePaidSummaryByDept_tyc::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMServicePaidSummaryByDept_tyc::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
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
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}
	if (m_bSOD)
		
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','BH-PTTYC', 'THE-DV-YC', 'THE-DV-PTTYC', 'THE-BH-YC', 'THE-BH-PTTYC')"));
	    szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','BH-PTTYC', 'THE-DV-YC','BHYC', 'THE-DV-PTTYC', 'THE-BH-YC', 'THE-BH-PTTYC', 'CK-DV-YC', 'CK-BH-YC','CK-DV-PTTYC', 'CK-BH-PTTYC')"));
	else
	szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV' AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		//_T("FROM fa_cash WHERE fac_invoicetype in('P','R') AND Fac_Cashbook_Id <> 'DVYC' %s ORDER BY fac_cash_id"), szWhere);
		  _T(" FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
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

void CFMServicePaidSummaryByDept_tyc::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMServicePaidSummaryByDept_tyc::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMServicePaidSummaryByDept_tyc::OnInpatientSelect(){
	
}
void CFMServicePaidSummaryByDept_tyc::OnOutpatientSelect(){
	
}
void CFMServicePaidSummaryByDept_tyc::OnDepositSelect(){
	
}
void CFMServicePaidSummaryByDept_tyc::OnAllSelect(){
	
}
 
 
int CFMServicePaidSummaryByDept_tyc::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMServicePaidSummaryByDept_tyc::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMServicePaidSummaryByDept_tyc::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMServicePaidSummaryByDept_tyc::OnSaveFMInsuranceReceiptSummary(){
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
 		//OnFMInsuranceReceiptSummaryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMServicePaidSummaryByDept_tyc::OnCancelFMInsuranceReceiptSummary(){
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
int CFMServicePaidSummaryByDept_tyc::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMServicePaidSummaryByDept_tyc::OnPrintSelect(){
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

void CFMServicePaidSummaryByDept_tyc::OnPrint1stver(){
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

void CFMServicePaidSummaryByDept_tyc::OnPrint2ndver()
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
	double nTotal[15], GrandAmt[15], nTotalClass[15];
	for (int i = 0; i < 15; i++)
	{
		GrandAmt[i] = 0;
		nTotal[i] = 0;
		nTotalClass[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGTHTHANHTOAN_NOITRU_NGOAITRU_THEOKHOA.RPT");
	if (m_bSOD) szReportName = _T("Reports\\HMS\\HF_BANGTHTHANHTOAN_NOITRU_NGOAITRU_THEOKHOA_PTTT_TYC.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));	
	data_name.Add(_T("giagoc"));
	data_name.Add(_T("tronggoi"));
	data_name.Add(_T("bntra"));
		
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

	int col_pos = 9;
	int sum_pos = (int) (data_name.GetCount()) - 4;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("posted_date"), szNewIndex);
		if(szNewIndex  != szOldIndex)
		{
			if (m_szOrderByKey == _T("04"))
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

		if(m_szOrderByKey == _T("04"))
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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("tenbn")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("docno")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept_id")));
			rptDetail->SetValue(_T("5"), CDate::Convert(rs.GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("6"), CDate::Convert(rs.GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("7"), CDate::Convert(rs.GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("optname")));
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
	if(m_szOrderByKey == _T("04"))
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMServicePaidSummaryByDept_tyc"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);


	rpt.PrintPreview();
}
void CFMServicePaidSummaryByDept_tyc::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export bang thanh toan thu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export bang thanh toan chi"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport();
			break;
		case 2:
			OnExportByRefund();
			break;
	}
	/*CHMSTrackingPatientFeeDialog dlg(this);
	dlg.DoModal();*/
}

void CFMServicePaidSummaryByDept_tyc::OnTMHOMSelect()
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
	long nDocumentNo;
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\ThongKeTienChiTraChoPTV_TC_MAUCANLAMSANG.xls"))) AfxMessageBox(_T("Load fail!"));	
	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	int ret = ShowMessageBox(_T(" Bạn có muốn tính lại chi phí của bệnh nhân sau đó mới xuất ra Excel, Nếu chọn YES, sẽ mất thời gian để tạo lập lại phí theo khoảng thời gian đã chọn? OK? "),MB_YESNO);
		if(ret == IDYES)
		{
		szSQL.Format(_T(" SELECT hfe_docno AS docno") \
					_T(" FROM hms_fee_invoice") \
					_T(" LEFT JOIN hms_doc ON (hfe_docno=hd_docno)") \
					_T(" WHERE 1                            =1 AND rownum<=10") \
					_T(" AND HFE_POSTED='Y'") \
					_T(" AND HD_HEALTHEXAM='Y'") \
					_T(" AND HFE_POSTEDDATE BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s','YYYY/MM/DD HH24:MI:SS')  "), m_szFromDate, m_szToDate);
			rs.ExecSQL(szSQL);			
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("docno"), nDocumentNo);		
				szSQL.Format(_T("HMS_FEE_CREATE(%ld,'ETPODXM', '%s') "), nDocumentNo, _T("EM"));	
				pMF->ExecDML(szSQL);				
				rs.MoveNext();
			}

			szSQL = GetQueryString3();
			rs.ExecSQL(szSQL);			
		}
	else
	{
	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);	
	}
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("PatientName"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("OrderDept"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("OrderRoom"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NoiNgoai"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NGAY_VAO"), tmpStr);		
		xls.SetCellText(nCol+7,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);

		rs.GetValue(_T("NGAY_RA"), tmpStr);		
		xls.SetCellText(nCol+8,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);

		rs.GetValue(_T("Posted_date"), tmpStr);		
		xls.SetCellText(nCol+9,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);

		rs.GetValue(_T("Ten"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Soluong"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("Dongia"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TTGiagoc"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("GiaBHX"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TTBaohiemX"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tronggoi"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);	


		rs.GetValue(_T("lai"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("Status"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Bacsithuchien"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[12] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 12; i < 20; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\ThongKeTienChiTraChoPTV_TC_MAUCANLAMSANG1.xls"));
} 

void CFMServicePaidSummaryByDept_tyc::OnExport()
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
	if (!xls.Load(_T("Exports\\ThongKeTienChiTraChoPTV_TC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[11] > 0)
			{
				xls.SetCellText(10, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 11; i < 30; i++)
				{
					if (nGroupTotal[i] > 0)
					{
						xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_CURRENCY1, true);
						nTotal[i] += nGroupTotal[i];
						nGroupTotal[i] = 0;
					}
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ho_deptid"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ho_roomid"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ho_depttype"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_vao"), tmpStr);		
		xls.SetCellText(nCol+7,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);

		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol+8,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		//xls.SetCellText(nCol+5, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("posted_date"), tmpStr);
		xls.SetCellText(nCol+9,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		//xls.SetCellText(nCol+6, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("optname"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("giagoc"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("giabaohiem"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tronggoi"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("bntra"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("trongoi"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_CURRENCY1);

		rs.GetValue(_T("status"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("createdby"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			if (nGroupTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_CURRENCY1, true);
				nTotal[i] += nGroupTotal[i];
			}
		}
		nRow++;
	}

	if (nTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			if (nTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_CURRENCY1, true);
			}
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\ThongKeTienChiTraChoPTV_TC2.xls"));
}
void CFMServicePaidSummaryByDept_tyc::OnExportByRefund()
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
	if (!xls.Load(_T("Exports\\ThongKeTienChiTraChoPTV_TC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = szSQL = GetQueryStringByRefund();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[11] > 0)
			{
				xls.SetCellText(10, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 11; i < 30; i++)
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

		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ho_deptid"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ho_roomid"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("ho_depttype"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_vao"), tmpStr);		
		xls.SetCellText(nCol+7,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);

		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol+8,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		//xls.SetCellText(nCol+5, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("posted_date"), tmpStr);
		xls.SetCellText(nCol+9,nRow,CDateTime::Convert(tmpStr,yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		//xls.SetCellText(nCol+6, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("optname"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("giagoc"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tronggoi"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("bntra"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);		
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\ThongKeTienChiTraChoPTV_TC2_TRALAI.xls"));
}


/*CString CFMServicePaidSummaryByDept_tyc::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szWhere, szWhere1, szWhere2;
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

	szWhere.Format(_T("AND i.hfe_cash_id IN(%s) "), szReceiptStr);
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
		szWhere1.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" AND i.HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" AND i.HFE_CLASS='E' "));
	}
	if (m_bSurgery)
		szWhere.AppendFormat(_T(" AND substr(fl.hfl_groupid,1,2) in ('B4')"));
		else if (m_bOperation)			
		szWhere.AppendFormat(_T(" AND substr(fl.hfl_groupid,1,2) in ('B5')"));
		if (m_bOtherDeptFilter)
        //szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_roomid  IN(33, 34, 35)))"));//
		//szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0,33, 34, 35)) OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)))"));
		szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0,33, 34, 35)) OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)) OR (ho_depttype = 'E' AND ho_deptid in ('TYC') AND ho_roomid IN(10,37)))"));
		else if (m_bNotinSOD)
		//szWhere.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_pdeptid not in  ('TYC','PTTYC') AND ho_roomid NOT IN(33, 34, 35))"));//
		szWhere.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_pdeptid not in  ('TYC','PTTYC') AND ho_roomid NOT IN(0,33, 34, 35))"));
	szSQL.Format(_T(" SELECT * FROM") \
    _T(" (") \
	_T(" SELECT ") \
	_T("   tenbn,") \
	_T("   docno,  ") \
	_T("   dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,") \
	_T("   ngay_vao,ngay_ra,posted_date,") \
	_T("   CHINDEX,") \
	_T("   optname,") \
	_T("   giagoc,") \
	_T("   tronggoi,") \
	_T("   giagoc - tronggoi AS bntra") \
	_T(" FROM") \
	_T("   (SELECT   ") \
	_T("       ho_docno  AS docno,") \
	_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID  ='B5' AND HO_DEPTID  IS NOT NULL THEN HO_DEPTID ") \
	_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID NOT IN ('B5','PTTYC') AND HO_PDEPTID IS NOT NULL AND HO_DEPTID IS NOT NULL THEN HO_PDEPTID") \
	_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID IN ('PTTYC') AND HO_PDEPTID IS NOT NULL AND HO_DEPTID IS NOT NULL AND FL.HFL_PERFORMPLACE IS NOT NULL THEN FL.HFL_PERFORMPLACE") \
	_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL AND Fl.Hfl_Deptid IS NULL THEN HO_PDEPTID") \
	_T("       WHEN HO_DEPTID IS NULL  THEN f.hfe_deptid ELSE fl.Hfl_Deptid END dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,") \
	_T("       CASE") \
	_T("       WHEN I.HFE_CLASS = 'I'") \
	_T("       THEN 'I'") \
	_T("       ELSE 'II'") \
	_T("     END CHINDEX,") \
	_T("       CASE") \
	_T("       WHEN I.HFE_CLASS = 'I'") \
	_T("       THEN HCR_ADMITDATE") \
	_T("       ELSE HD_ADMITDATE") \
	_T("     END NGAY_VAO,") \
	_T("     CASE") \
	_T("       WHEN I.HFE_CLASS = 'I'") \
	_T("       THEN HCR_DISCHARGEDATE") \
	_T("       ELSE HD_ENDDATE") \
	_T("     END NGAY_RA,") \
	_T("     TRUNC(i.HFE_POSTEDDATE) posted_date,") \
	_T("     ho_idx                    AS idx,") \
	_T("     get_patientname(ho_docno) AS tenbn,") \
	_T("     f.hfe_patpaid             AS giagoc,") \
	_T("     (SELECT COALESCE(SUM(hfe_patdebt+hfe_patpaid), 0) AS mat_amount") \
	_T("     FROM hms_fee") \
	_T("     WHERE hfe_docno           = ho_docno") \
	_T("     AND hfe_rowid             = ho_idx") \
	_T("     AND hfe_type             IN('M','D')") \
	_T("     AND NVL(hfe_category,'N') = 'Y'") \
	_T("     )            AS tronggoi,  ") \
	_T("     hfl_name    AS optname,") \
	_T("     hfl_groupid AS groupid") \
	_T("   FROM hms_operation") \
	_T("   LEFT JOIN hms_fee f") \
	_T("   ON ( f.hfe_docno  = ho_docno") \
	_T("   AND f.hfe_orderid = ho_idx AND f.hfe_itemid=ho_itemid") \
	_T("   AND f.hfe_type    = 'O')") \
	_T("   LEFT JOIN hms_fee_invoice_view_v2 i") \
	_T("   ON (i.hfe_docno     =f.hfe_docno") \
	_T("   AND i.hfe_invoiceno = f.hfe_invoiceno)  ") \
	_T("   LEFT JOIN hms_treatment_record") \
	_T("   ON(htr_docno = ho_docno") \
	_T("   AND htr_idx  = ho_refidx)") \
	_T("   LEFT JOIN hms_doc ON (f.hfe_docno=hd_docno)") \
	_T("   LEFT JOIN Hms_Clinical_Record ON (hcr_docno=hd_docno)") \
	_T("   LEFT JOIN hms_fee_list fl") \
	_T("   ON(ho_itemid       = fl.hfl_feeid)") \
	_T("   WHERE f.hfe_status in ('P','R') AND f.Hfe_type='O' AND f.hfe_category in ('N','BQP','XX')") \
	_T("   %s") \
	_T("   )") \
	_T(" GROUP BY ") \
	_T("   docno,") \
	_T("   tenbn,") \
	_T("   dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,CHINDEX,") \
	_T("   ngay_vao, ngay_ra,posted_date,") \
	_T("   giagoc,") \
	_T("   optname,") \
	_T("   groupid,") \
	_T("   idx,") \
	_T("   tronggoi") \
	_T(" ORDER BY ") \
	_T("   dept_id,docno,") \
	_T("   tenbn") \
	_T("   )") \
	_T("   WHERE 1=1 %s"),szWhere,szWhere1);
	rs.ExecSQL(szSQL);
 	return szSQL;
	}*/
CString CFMServicePaidSummaryByDept_tyc::GetQueryString()
{

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	CRecord rs(&pMF->m_db);

	szReceiptStr = _T("-1");
	int nCount = 0;
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

	//szWhere.Format(_T("AND i.hfe_cash_id IN(%s) "), szReceiptStr);

	if (nCount <1000)
		szWhere.Format(_T(" and hfe_cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

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
		szWhere1.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" AND i.HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" AND i.HFE_CLASS='E' "));
	}
	/*if (m_bSurgery)
		szWhere.AppendFormat(_T(" AND substr(fl.hfl_groupid,1,2) in ('B4')"));
		else if (m_bOperation)			
		szWhere.AppendFormat(_T(" AND substr(fl.hfl_groupid,1,2) in ('B5')"));*/
	if (m_bSurgery)
		szWhere.AppendFormat(_T(" AND (substr(fl.hfl_groupid,1,2) in ('B4') OR fl.hfl_feeid IN (select ss_code from sys_sel where ss_id='thuthuat_like_phauthuat'))"));
		else if (m_bOperation)			
		szWhere.AppendFormat(_T(" AND substr(fl.hfl_groupid,1,2) in ('B5') AND fl.hfl_feeid NOT IN (select ss_code from sys_sel where ss_id='thuthuat_like_phauthuat')"));

	if (m_bLaser)
		szWhere1.AppendFormat(_T(" AND dept_id='C15'"));
	if (m_bNotLaser)
		szWhere1.AppendFormat(_T(" AND dept_id<>'C15'"));

		if (m_bOtherDeptFilter)
        //szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_roomid  IN(33, 34, 35)))"));//
		szWhere.AppendFormat(_T(" AND ho_itemid not in (select ss_code from sys_sel where ss_id in ('TTSAN_PTTYC','DANHMUC_DTTN','NOISOI_TMH','BODI_TT_TMH')) ") \
		_T(" AND (nvl(ho_depttype, 'I') = 'I' ") \
		_T("  OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') ") \
		_T("	AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0, 33, 34, 35)) ") \
		_T("  OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') ") \
		_T("	AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)) ") \
		_T("  OR (ho_depttype = 'E' AND ho_deptid in ('TYC') AND ho_roomid IN(10,37, 166, 167, 168, 169, 170)))"));
		else if (m_bNotinSOD)
		//szWhere.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_pdeptid not in  ('TYC','PTTYC') AND ho_roomid NOT IN(33, 34, 35))"));//
		szWhere.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_pdeptid not in  ('TYC','PTTYC') AND ho_roomid NOT IN(0,33, 34, 35))"));

	if(m_bGayMeB5)
		szWhere1.AppendFormat(_T(" AND nguoigmid NOT IN('nttupttyc', 'ndthepttyc', 'cdkhanhpttyc', 'nxthopttyc', 'pttyc')"));
	if(m_bGayMePTTYC)
		szWhere1.AppendFormat(_T(" AND nguoigmid IN('nttupttyc', 'ndthepttyc', 'cdkhanhpttyc', 'nxthopttyc', 'pttyc')"));

	if(m_bGioiThieuKXD)
		szWhere1.AppendFormat(_T(" AND nguoigtid IN('kvx')"));
	if(m_bGioiThieuPTTYC)
		szWhere1.AppendFormat(_T(" AND nguoigtdept IN('PTTYC', 'TYC')"));
	if(m_bGioiThieuKhac)
		szWhere1.AppendFormat(_T(" AND nguoigtid NOT IN('kvx') AND nguoigtdept NOT IN('PTTYC', 'TYC')"));
	if(m_bObstetricOperation)
		//szWhere.AppendFormat(_T(" and (ho_deptid='TYC' AND ho_roomid in (10,37, 149) OR  ho_deptid ='PTTYC' AND ho_itemid in (select ss_code from sys_sel where ss_id='TTSAN_PTTYC')) "));
		szWhere.AppendFormat(_T(" and (ho_deptid='TYC' AND ho_roomid in (10,37, 149)) "));

	if(m_bENTOperation)
		szWhere.AppendFormat(_T(" AND (ho_roomid in (1,20,29, 146, 147, 148) and ho_deptid='TYC' OR (ho_deptid='TYC' and HFL_PERFORMPLACE='B9' AND substr(fl.hfl_groupid,1,2) in ('B5')) OR (ho_deptid='PTTYC' and ho_pdeptid='PTTYC' and HFL_PERFORMPLACE='B9' AND substr(fl.hfl_groupid,1,2) in ('B5'))) "));

	if(m_bReqObs)
		szWhere.AppendFormat(_T(" AND (HO_DEPTID='PTTYC') and (HO_PDEPTID in ('PTTYC','B5')) and fl.HFL_OBSTETRIC='Y'"));
	if (m_bNonReqObs)
		szWhere.AppendFormat(_T("  AND NVL(fl.hfl_obstetric,'N') <> 'Y'"));

	if (m_bTTdieutritrongngay)
		szWhere.AppendFormat(_T(" AND (ho_deptid ='TYC' and ho_roomid in (63,64,65) OR ho_deptid ='C1.1' and ho_roomid in (145) OR ho_deptid ='PTTYC' and ho_zone='DTTN' OR (fl.hfl_feeid in (select ss_code from sys_sel where ss_id='DANHMUC_DTTN') AND ho_deptid IN ('C1.1', 'TYC', 'PTTYC')))"));

	if (m_bThuThuatMat)		
	    szWhere.AppendFormat(_T(" AND (ho_roomid in (86) and ho_deptid='TYC' OR (ho_deptid='TYC' and HFL_PERFORMPLACE='B7' AND substr(fl.hfl_groupid,1,2) in ('B5')) OR (ho_deptid='PTTYC' and ho_pdeptid='PTTYC' and HFL_PERFORMPLACE='B7' AND substr(fl.hfl_groupid,1,2) in ('B5'))) "));

	if (m_bDongY)		
	    //szWhere.AppendFormat(_T(" AND (ho_roomid in (87) and ho_deptid='TYC' OR (ho_deptid='PTTYC' and ho_pdeptid='PTTYC' and HFL_PERFORMPLACE='A10' AND substr(fl.hfl_groupid,1,2) in ('B5'))) "));
		szWhere.AppendFormat(_T(" AND (ho_roomid in (136) and ho_deptid='TYC') "));
		
		szSQL.Format(_T(" SELECT * FROM") \
			_T(" (") \
			_T(" SELECT bsmo,") \
			_T("   NVL(nguoigmid, 'pttyc') AS nguoigmid,") \
			_T("   nguoigm,") \
			_T("   NVL(nguoigtid, 'X') AS nguoigtid,") \
			_T("   NVL(nguoigtdept, 'X') AS nguoigtdept,") \
			_T("   nguoigt,") \
			//_T("   docno,dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,CHINDEX,") \//
			_T("   docno,dept_id,ho_deptid,'['||ho_roomid||'] '||HMS_GETROOMNAME(ho_deptid,ho_roomid) as ho_roomid,HO_DEPTTYPE,CHINDEX,") \
			_T("   tenbn,") \
			_T("   giagoc,") \
			_T("   CASE WHEN pobject <> 'S' THEN giabaohiem ELSE 0 END AS giabaohiem,") \
			_T("   tronggoi,") \
			_T("   trongoi,") \
			_T("   CASE WHEN pobject = 'S' THEN giagoc - tronggoi ELSE CASE WHEN giabaohiem > tronggoi THEN giagoc - giabaohiem ELSE giagoc - tronggoi END END AS bntra,") \
			_T("   ca,") \
			_T("   SUM(phantram)                   AS phantram,") \
			_T("   SUM(tongtien)                   AS tongtien,") \
			_T("   SUM(phantrambs)                 AS phantrambs,") \
			_T("   SUM(tiencongbs)                 AS tiencongbs,") \
			_T("   SUM(tiencongbs - tienchipttyc)  AS tienthuchuong,") \
			_T("   SUM(tienchipttyc)               AS tienchipttyc,") \
			_T("   SUM(phantram_gayme_te)          AS phantram_gayme_te,") \
			_T("   SUM(tiencong_gayme_te)          AS tiencong_gayme_te,") \
			_T("   SUM(phantram_thuhut_bn)         AS phantram_thuhut_bn,") \
			_T("   SUM(tiencong_thuhut_bn)         AS tiencong_thuhut_bn,") \
			_T("   SUM(phantram_chitra_khoaquanly) AS phantram_chitra_khoaquanly,") \
			_T("   SUM(tiencong_chitra_khoaquanly) AS tiencong_chitra_khoaquanly,") \
			_T("   SUM(phantram_tienthuong_PR)     AS phantram_tienthuong_PR,") \
			_T("   SUM(tiencong_tienthuong_PR)     AS tiencong_tienthuong_PR,") \
			_T("   optname,") \
			_T("   groupid,Objecttype,ngay_vao,ngay_ra,posted_date,") \
			_T("   idx, status, createdby") \
			_T(" FROM") \
			_T("   (SELECT") \
			_T("     (SELECT CASE WHEN user_dept IS NOT NULL THEN TRIM(user_dept || ' - ' || user_name) ELSE user_name END AS user_name") \
			_T("     FROM") \
			_T("       (SELECT su_userid AS user_id,") \
			_T("         su_name         AS user_name,") \
			_T("         su_deptid       AS user_dept,") \
			_T("         su_groupid") \
			_T("       FROM sys_user") \
			_T("       WHERE su_isactive='Y'") \
			_T("       UNION ALL") \
			_T("       SELECT hou_userid,") \
			_T("         hou_name,") \
			_T("         hou_dept,") \
			_T("         hou_group") \
			_T("       FROM hms_opt_user") \
			_T("       WHERE hou_isactive='Y'") \
			_T("       ) tbl") \
			_T("     WHERE user_id = ho_practitioner AND rownum=1") \
			_T("     )                         AS bsmo,") \
			_T("     (SELECT user_id") \
			_T("     FROM") \
			_T("       (SELECT su_userid AS user_id,") \
			_T("         su_name         AS user_name,") \
			_T("         su_deptid       AS user_dept,") \
			_T("         su_groupid") \
			_T("       FROM sys_user") \
			_T("       WHERE su_isactive='Y'") \
			_T("       UNION ALL") \
			_T("       SELECT hou_userid,") \
			_T("         hou_name,") \
			_T("         hou_dept,") \
			_T("         hou_group") \
			_T("       FROM hms_opt_user") \
			_T("       WHERE hou_isactive='Y'") \
			_T("       ) tbl") \
			_T("     WHERE user_id = ho_anaes_method AND rownum=1") \
			_T("     )                         AS nguoigmid,") \
			_T("     (SELECT user_name") \
			_T("     FROM") \
			_T("       (SELECT su_userid AS user_id,") \
			_T("         su_name         AS user_name,") \
			_T("         su_deptid       AS user_dept,") \
			_T("         su_groupid") \
			_T("       FROM sys_user") \
			_T("       WHERE su_isactive='Y'") \
			_T("       UNION ALL") \
			_T("       SELECT hou_userid,") \
			_T("         hou_name,") \
			_T("         hou_dept,") \
			_T("         hou_group") \
			_T("       FROM hms_opt_user") \
			_T("       WHERE hou_isactive='Y'") \
			_T("       ) tbl") \
			_T("     WHERE user_id = ho_anaes_method AND rownum=1") \
			_T("     )                         AS nguoigm,") \
			_T(" (SELECT  user_id") \
			_T(" FROM") \
			_T("   (SELECT su_userid AS user_id,") \
			_T("     su_name         AS user_name,") \
			_T("     get_departmentname(su_deptid)       AS user_dept,") \
			_T("     su_groupid") \
			_T("   FROM sys_user") \
			_T("   WHERE su_isactive='Y'") \
			_T("   UNION ALL") \
			_T("   SELECT hou_userid,") \
			_T("     hou_name,") \
			_T("     CASE WHEN hou_dept IS NULL THEN hou_note ELSE get_departmentname(hou_dept) END AS hou_dept,") \
			_T("     hou_group") \
			_T("   FROM hms_opt_user") \
			_T("   WHERE hou_isactive='Y'") \
			_T("   ) tbl WHERE user_id = ho_demonstrator AND rownum=1) AS nguoigtid,") \
			_T(" (SELECT  user_dept") \
			_T(" FROM") \
			_T("   (SELECT su_userid AS user_id,") \
			_T("     su_name         AS user_name,") \
			_T("     su_deptid       AS user_dept,") \
			_T("     su_groupid") \
			_T("   FROM sys_user") \
			_T("   WHERE su_isactive='Y'") \
			_T("   UNION ALL") \
			_T("   SELECT hou_userid,") \
			_T("     hou_name,") \
			_T("     CASE WHEN hou_dept IS NULL THEN hou_note ELSE hou_dept END AS hou_dept,") \
			_T("     hou_group") \
			_T("   FROM hms_opt_user") \
			_T("   WHERE hou_isactive='Y'") \
			_T("   ) tbl WHERE user_id = ho_demonstrator AND rownum=1) AS nguoigtdept,") \
			_T(" (SELECT  user_name") \
			_T(" FROM") \
			_T("   (SELECT su_userid AS user_id,") \
			_T("     su_name         AS user_name,") \
			_T("     get_departmentname(su_deptid)       AS user_dept,") \
			_T("     su_groupid") \
			_T("   FROM sys_user") \
			_T("   WHERE su_isactive='Y'") \
			_T("   UNION ALL") \
			_T("   SELECT hou_userid,") \
			_T("     hou_name,") \
			_T("     CASE WHEN hou_dept IS NULL THEN hou_note ELSE get_departmentname(hou_dept) END AS hou_dept,") \
			_T("     hou_group") \
			_T("   FROM hms_opt_user") \
			_T("   WHERE hou_isactive='Y'") \
			_T("   ) tbl WHERE user_id = ho_demonstrator AND rownum=1) AS nguoigt,") \
			_T("     ho_docno                  AS docno,") \
			_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID  ='B5' AND HO_DEPTID  IS NOT NULL THEN HO_DEPTID ") \
			_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID NOT IN ('B5','PTTYC') AND HO_PDEPTID IS NOT NULL AND HO_DEPTID IS NOT NULL THEN HO_PDEPTID") \
			_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID IN ('PTTYC') AND HO_PDEPTID IS NOT NULL AND HO_DEPTID IS NOT NULL AND FL.HFL_PERFORMPLACE IS NOT NULL THEN FL.HFL_PERFORMPLACE") \
			_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL AND Fl.Hfl_Deptid IS NULL THEN HO_PDEPTID") \
			_T("       WHEN HO_DEPTID IS NULL  THEN f.hfe_deptid ELSE fl.Hfl_Deptid END dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,") \
			_T("       CASE") \
			_T("       WHEN I.HFE_CLASS = 'I'") \
			_T("       THEN 'I'") \
			_T("       ELSE 'II'") \
			_T("     END CHINDEX,") \
			_T("     CASE WHEN I.HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
			_T("     CASE WHEN I.HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
			_T("     trunc(i.HFE_POSTEDDATE) posted_date,") \
			_T("     ho_idx                    AS idx,") \
			_T("     get_patientname(ho_docno) AS tenbn,") \
			_T("     CASE WHEN substr(fl.hfl_groupid, 1, 2) IN ('B4') THEN ho_amount WHEN substr(fl.hfl_groupid, 1, 2) IN ('B5') THEN f.hfe_patpaid END AS giagoc,") \
			_T("     f.hfe_insprice           AS giabaohiem,") \
			_T("     HMS_OPERATION_INPKG_AMOUNT(ho_docno, ho_idx) AS tronggoi,") \
			_T("     i.hfe_patpaid AS trongoi,") \
			_T("     hoc_percent  AS phantram,") \
			_T("     hoc_amount   AS tongtien,") \
			_T("     ho_opt_shift AS ca,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'BM'") \
			_T("       THEN hoc_percent") \
			_T("       ELSE 0") \
			_T("     END AS phantrambs,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'BM'") \
			_T("       THEN hoc_amount") \
			_T("       ELSE 0") \
			_T("     END AS tiencongbs,") \
			_T("     (SELECT hocl_amount") \
			_T("     FROM hms_operation_chargeline") \
			_T("     WHERE hoc_docno             = hocl_docno") \
			_T("     AND hoc_operation_charge_id = hocl_orderid") \
			_T("     AND hocl_type               = 'BM'") \
			_T("     ) AS tienchipttyc,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'GM'") \
			_T("       THEN hoc_percent") \
			_T("       ELSE 0") \
			_T("     END AS phantram_gayme_te,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'GM'") \
			_T("       THEN hoc_amount") \
			_T("       ELSE 0") \
			_T("     END AS tiencong_gayme_te,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'GT'") \
			_T("       THEN hoc_percent") \
			_T("       ELSE 0") \
			_T("     END AS phantram_thuhut_bn,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'GT'") \
			_T("       THEN hoc_amount") \
			_T("       ELSE 0") \
			_T("     END AS tiencong_thuhut_bn,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'OX'") \
			_T("       THEN hoc_percent") \
			_T("       ELSE 0") \
			_T("     END AS phantram_chitra_khoaquanly,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'OX'") \
			_T("       THEN hoc_amount") \
			_T("       ELSE 0") \
			_T("     END AS tiencong_chitra_khoaquanly,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'PT'") \
			_T("       THEN hoc_percent") \
			_T("       ELSE 0") \
			_T("     END AS phantram_tienthuong_PR,") \
			_T("     CASE") \
			_T("       WHEN hoc_type = 'PT'") \
			_T("       THEN hoc_amount") \
			_T("       ELSE 0") \
			_T("     END      AS tiencong_tienthuong_PR,") \
			_T("     hfl_name AS optname,") \
			_T("     hfl_groupid AS groupid, ") \
			_T("     ho_desc as Objecttype,") \
			_T("     oj.ho_type AS pobject,") \
			_T("     f.hfe_status as status,") \
			_T("     GET_USERNAME(HO_CREATEDBY) AS createdby") \
			_T("   FROM hms_operation") \
			_T("   LEFT JOIN hms_object oj ON (ho_object=oj.ho_id)") \
			_T("   LEFT JOIN hms_fee f") \
			_T("   ON ( f.hfe_docno  = ho_docno") \
			_T("   AND f.hfe_orderid = ho_idx") \
			_T("   AND f.hfe_type    = 'O')") \
			_T("   LEFT JOIN hms_fee_invoice_view_v2 i") \
			_T("   ON (i.hfe_docno     =f.hfe_docno") \
			_T("   AND i.hfe_invoiceno = f.hfe_invoiceno)") \
			_T("   LEFT JOIN hms_operation_charge") \
			_T("   ON(hoc_docno   = ho_docno") \
			_T("   AND hoc_optidx = ho_idx)") \
			_T("   LEFT JOIN hms_treatment_record") \
			_T("   ON(htr_docno = ho_docno") \
			_T("   AND htr_idx  = ho_refidx)") \
			_T("   LEFT JOIN hms_doc ON (f.hfe_docno = hd_docno)") \
			_T("   LEFT JOIN Hms_Clinical_Record ON (hcr_docno = hd_docno)") \
			_T("   LEFT JOIN hms_fee_list fl") \
			_T("   ON(ho_itemid       = fl.hfl_feeid)") \
			_T("   WHERE f.hfe_status in ('P','R') AND f.Hfe_type='O' AND f.hfe_category in ('N','BQP','XX')") \
			_T("   %s") \
			_T(" )") \
			_T(" GROUP BY bsmo,") \
			_T("   nguoigmid,") \
			_T("   nguoigm,") \
			_T("   nguoigtid,") \
			_T("   nguoigtdept,") \
			_T("   nguoigt,") \
			_T("   docno,") \
			_T("   tenbn,") \
			_T("   dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,CHINDEX,") \
			_T("   giagoc,") \
			_T("   ca,") \
			_T("   optname,") \
			_T("   groupid,") \
			_T("   idx,ngay_vao,ngay_ra,posted_date,Objecttype,") \
			_T("   tronggoi,") \
			_T("   trongoi,") \
			_T("   giabaohiem,") \
			_T("   pobject,") \
			_T("   status, createdby ") \
			_T(" ORDER BY dept_id,bsmo,") \
			_T("   docno,") \
			_T("   tenbn,") \
			_T("   giagoc,") \
			_T("   ca")
			_T("   )") \
			_T("   WHERE 1=1 %s"),szWhere,szWhere1);
			rs.ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);
			return szSQL;
}

CString CFMServicePaidSummaryByDept_tyc::GetQueryStringByRefund()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szWhere, szWhere1, szWhere2;
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
		szWhere.Format(_T("AND i.hfe_cash_id IN(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

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
		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);
	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" AND i.HFE_CLASS='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" AND i.HFE_CLASS='E' "));
	}
	if (m_bSurgery)
		szWhere.AppendFormat(_T(" AND substr(fl.hfl_groupid,1,2) in ('B4')"));
		else if (m_bOperation)			
		szWhere.AppendFormat(_T(" AND substr(fl.hfl_groupid,1,2) in ('B5')"));
		if (m_bOtherDeptFilter)
        //szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_roomid  IN(33, 34, 35)))"));//
		//szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0,33, 34, 35)) OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)))"));
		szWhere.AppendFormat(_T(" AND (nvl(ho_depttype, 'I') = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0,33, 34, 35)) OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)) OR (ho_depttype = 'E' AND ho_deptid in ('TYC') AND ho_roomid IN(10,37,166, 167, 168, 169, 170)))"));
		else if (m_bNotinSOD)
		//szWhere.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_pdeptid not in  ('TYC','PTTYC') AND ho_roomid NOT IN(33, 34, 35))"));//
		szWhere.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_pdeptid not in  ('TYC','PTTYC') AND ho_roomid NOT IN(0,33, 34, 35))"));
	szSQL.Format(_T(" SELECT * FROM") \
    _T(" (") \
	_T(" SELECT ") \
	_T("   tenbn,") \
	_T("   docno,  ") \
	_T("   dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,") \
	_T("   ngay_vao,ngay_ra,posted_date,") \
	_T("   CHINDEX,") \
	_T("   optname,") \
	_T("   giagoc,") \
	_T("   tronggoi,") \
	_T("   giagoc - tronggoi AS bntra") \
	_T(" FROM") \
	_T("   (SELECT   ") \
	_T("       ho_docno  AS docno,") \
	_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID  ='B5' AND HO_DEPTID  IS NOT NULL THEN HO_DEPTID ") \
	_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID NOT IN ('B5','PTTYC') AND HO_PDEPTID IS NOT NULL AND HO_DEPTID IS NOT NULL THEN HO_PDEPTID") \
	_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID IN ('PTTYC') AND HO_PDEPTID IS NOT NULL AND HO_DEPTID IS NOT NULL AND FL.HFL_PERFORMPLACE IS NOT NULL THEN FL.HFL_PERFORMPLACE") \
	_T("       WHEN f.hfe_type ='O' AND HO_PDEPTID IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL AND Fl.Hfl_Deptid IS NULL THEN HO_PDEPTID") \
	_T("       WHEN HO_DEPTID IS NULL  THEN f.hfe_deptid ELSE fl.Hfl_Deptid END dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,") \
	_T("       CASE") \
	_T("       WHEN I.HFE_CLASS = 'I'") \
	_T("       THEN 'I'") \
	_T("       ELSE 'II'") \
	_T("     END CHINDEX,") \
	_T("       CASE") \
	_T("       WHEN I.HFE_CLASS = 'I'") \
	_T("       THEN HCR_ADMITDATE") \
	_T("       ELSE HD_ADMITDATE") \
	_T("     END NGAY_VAO,") \
	_T("     CASE") \
	_T("       WHEN I.HFE_CLASS = 'I'") \
	_T("       THEN HCR_DISCHARGEDATE") \
	_T("       ELSE HD_ENDDATE") \
	_T("     END NGAY_RA,") \
	_T("     TRUNC(i.HFE_POSTEDDATE) posted_date,") \
	_T("     ho_idx                    AS idx,") \
	_T("     get_patientname(ho_docno) AS tenbn,") \
	_T("     f.hfe_patpaid             AS giagoc,") \
	_T("     (SELECT COALESCE(SUM(hfe_patdebt+hfe_patpaid), 0) AS mat_amount") \
	_T("     FROM hms_fee") \
	_T("     WHERE hfe_docno           = ho_docno") \
	_T("     AND hfe_rowid             = ho_idx") \
	_T("     AND hfe_type             IN('M','D')") \
	_T("     AND NVL(hfe_category,'N') = 'Y'") \
	_T("     )            AS tronggoi,  ") \
	_T("     hfl_name    AS optname,") \
	_T("     hfl_groupid AS groupid") \
	_T("   FROM hms_operation") \
	_T("   LEFT JOIN hms_fee f") \
	_T("   ON ( f.hfe_docno  = ho_docno") \
	_T("   AND f.hfe_orderid = ho_idx AND f.hfe_itemid=ho_itemid") \
	_T("   AND f.hfe_type    = 'O')") \
	_T("   LEFT JOIN hms_fee_invoice_view_v2 i") \
	_T("   ON (i.hfe_docno     =f.hfe_docno") \
	_T("   AND i.hfe_invoiceno = f.hfe_invoiceno)  ") \
	_T("   LEFT JOIN hms_treatment_record") \
	_T("   ON(htr_docno = ho_docno") \
	_T("   AND htr_idx  = ho_refidx)") \
	_T("   LEFT JOIN hms_doc ON (f.hfe_docno=hd_docno)") \
	_T("   LEFT JOIN Hms_Clinical_Record ON (hcr_docno=hd_docno)") \
	_T("   LEFT JOIN hms_fee_list fl") \
	_T("   ON(ho_itemid       = fl.hfl_feeid)") \
	_T("   WHERE f.hfe_status in ('R') AND f.Hfe_type='O' AND f.hfe_category in ('N','BQP','XX')") \
	_T("   %s") \
	_T("   )") \
	_T(" GROUP BY ") \
	_T("   docno,") \
	_T("   tenbn,") \
	_T("   dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,CHINDEX,") \
	_T("   ngay_vao, ngay_ra,posted_date,") \
	_T("   giagoc,") \
	_T("   optname,") \
	_T("   groupid,") \
	_T("   idx,") \
	_T("   tronggoi") \
	_T(" ORDER BY ") \
	_T("   dept_id,docno,") \
	_T("   tenbn") \
	_T("   )") \
	_T("   WHERE 1=1 %s"),szWhere,szWhere1);
	rs.ExecSQL(szSQL);	
 	return szSQL;
	}
	int CFMServicePaidSummaryByDept_tyc::OnListCheckAllBHPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BH-PTTYC"))==szItemText.Right(8))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
int CFMServicePaidSummaryByDept_tyc::OnListCheckAllDVPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DV-PTTYC"))==szItemText.Right(8))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}

CString CFMServicePaidSummaryByDept_tyc::GetQueryString3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19, szSQL20, szWhere, szWhere1, szWhere2;
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
		szWhere.Format(_T(" i.hfe_cash_id in(%s) "), szReceiptStr);
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
		szWhere.Format(_T(" (%s)"), szIds);
	}
	
				szSQL.Format(_T(" SELECT PatientName,") \
				_T("   Docno,") \
				_T("   OrderDept,'',") \
				_T("   OrderRoom,") \
				_T("   NoiNgoai,") \
				_T("   NGAY_VAO,") \
				_T("   NGAY_RA,") \
				_T("   Posted_date,") \
				_T("   Ten,") \
				_T("   Soluong,") \
				_T("   Dongia,") \
				_T("   GiaBH,") \
				_T("   Soluong*Dongia as TTGiagoc,") \
				_T("   Soluong*GiaBH as TTBaohiem,") \
				_T("   Status,COALESCE(tronggoi,0) as tronggoi ,COALESCE((Soluong*Dongia),0) - COALESCE(tronggoi,0) AS lai,Bacsithuchien") \
				_T(" FROM") \
				_T("   (") \
				_T("   SELECT get_patientname(f.hfe_docno) AS PatientName,") \
				_T("   f.hfe_docno as Docno,") \
				_T("   hpc_deptid as OrderDept,") \
				_T("   hpc_roomid as OrderRoom,") \
				_T("   i.hfe_class as NoiNgoai,") \
				_T("    CASE") \
				_T("         WHEN I.HFE_CLASS = 'I'") \
				_T("         THEN HCR_ADMITDATE") \
				_T("         ELSE HD_ADMITDATE") \
				_T("       END NGAY_VAO,") \
				_T("       CASE") \
				_T("         WHEN I.HFE_CLASS = 'I'") \
				_T("         THEN HCR_DISCHARGEDATE") \
				_T("         ELSE HD_ENDDATE") \
				_T("       END NGAY_RA,") \
				_T("       TRUNC(i.HFE_POSTEDDATE) Posted_date,") \
				_T("       f.hfe_desc as Ten,") \
				_T("	   f.HFE_QUANTITY  AS Soluong,") \
				_T("       f.hfe_unitprice as Dongia,") \
				_T("       f.hfe_insprice as GiaBH,") \
				_T("       f.hfe_status as Status,") \
				_T("       GET_USERNAME(hpc_doctor) AS Bacsithuchien,") \

				_T("    (SELECT SUM(hpol_unitPrice*HPOL_QTYORDER) ") \
				_T("     FROM HMS_IPHARMAORDER_VIEW_VP ") \
				_T("     LEFT JOIN HMS_PHARMAORDER_VIEW_VP ON (hpol_docno=hpo_docno AND hpol_orderid=hpo_orderid) ") \
				_T("     where hpo_docno=f.hfe_docno ") \
				_T("     AND HPO_REFERENCE_ID=f.hfe_orderid AND hpo_refitem_id=f.hfe_itemid) as tronggoi ") \

				_T("   FROM hms_fee f") \
				_T("   LEFT JOIN HMS_FEE_INVOICE_VIEW_V2 i") \
				_T("   ON (f.hfe_docno                   =i.hfe_docno") \
				_T("   AND f.hfe_invoiceno               =i.hfe_invoiceno)") \
				_T("   LEFT JOIN hms_pacsorder ON (f.hfe_docno=hpc_docno AND f.hfe_orderid=hpc_orderid)") \
				_T("   LEFT JOIN hms_doc ON (f.hfe_docno=hd_docno)") \
				_T("   LEFT JOIN hms_clinical_record ON (f.hfe_docno=hcr_docno)") \
				_T("   AND f.HFE_STATUS                 IN( 'P', 'R' )") \
				_T("   AND f.hfe_type                   IN ('P')") \
				_T("   AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV')") \
				_T("   WHERE %s") \
				_T("   AND f.hfe_type IN ('P')") \
				_T("   AND f.hfe_itemid                 IN (select ss_code from sys_sel where ss_id='NOISOI_TMH')") \
				_T("   GROUP BY hpc_deptid,") \
				_T("     hpc_roomid,") \
				_T("     i.hfe_class,") \
				_T("     HCR_ADMITDATE,") \
				_T("     hd_admitdate,") \
				_T("     HCR_DISCHARGEDATE,") \
				_T("     hd_enddate,") \
				_T("     f.hfe_desc,") \
				_T("     f.HFE_QUANTITY,") \
				_T("     f.hfe_unitprice,") \
				_T("     f.hfe_insprice,") \
				_T("     f.hfe_type,") \
				_T("     f.hfe_itemid,") \
				_T("     TRUNC(i.HFE_POSTEDDATE),") \
				_T("     f.hfe_docno,") \
				_T("     f.hfe_status, hpc_doctor, f.hfe_orderid") \
				_T("   ORDER BY TRUNC(i.HFE_POSTEDDATE),") \
				_T("     hpc_deptid") \
				_T("   )") \
				_T(" WHERE Dongia>0 AND OrderDept in ('TYC', 'PTTYC') ORDER BY Ten"), szWhere);
			    return szSQL;
}