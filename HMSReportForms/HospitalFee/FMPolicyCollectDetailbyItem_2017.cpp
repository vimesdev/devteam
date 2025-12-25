#include "stdafx.h"
#include "FMPolicyCollectDetailbyItem_2017.h"
#include "HMSTrackingPatientFeeDialog.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnYearKillfocus();
} */
static void _OnSolderObjectSelectFnc(CWnd *pWnd)
{
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnSolderObjectSelect();
}

static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyCollectDetailByItem_2017* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyCollectDetailByItem_2017* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyCollectDetailByItem_2017* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyCollectDetailByItem_2017* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnOrderByAddNew();
}*/
static void _OnObjectTypeSelendokFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnObjectTypeSelendok();
}
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017 *)pWnd)->OnObjectTypeLoadData();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListDeleteItem();
}

static void _OnChuaTTSelectFnc(CWnd *pWnd)
{
	CFMPolicyCollectDetailByItem_2017 *pVw = (CFMPolicyCollectDetailByItem_2017 *)pWnd;
	pVw->OnChuaTTSelect();
}
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMPolicyCollectDetailByItem_2017 *pVw = (CFMPolicyCollectDetailByItem_2017 *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMPolicyCollectDetailByItem_2017 *pVw = (CFMPolicyCollectDetailByItem_2017 *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPolicyCollectDetailByItem_2017 *pVw = (CFMPolicyCollectDetailByItem_2017 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPolicyCollectDetailByItem_2017 *pVw = (CFMPolicyCollectDetailByItem_2017 *)pWnd;
	pVw->OnExportSelect();
}
static void _OnServiceOnDemandSelectFnc(CWnd *pWnd){
	  ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnServiceOnDemandSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnAllSelect();
}
static void _OnSurgerySelectFnc(CWnd *pWnd){
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnSurgerySelect();
}
static void _OnOperationSelectFnc(CWnd *pWnd){
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnOperationSelect();
}
static void _OnLaserSelectFnc(CWnd *pWnd){
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnLaserSelect();
}
static void _OnNotLaserSelectFnc(CWnd *pWnd){
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnNotLaserSelect();
}
static void _OnOtherDeptFilterSelectFnc(CWnd *pWnd)
{
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnOtherDeptFilterSelect();
}
static void _OnNotinSODSelectFnc(CWnd *pWnd)
{
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnNotinSODSelect();
}

static void _OnGayMeB5SelectFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnGayMeB5Select();
}
static void _OnGayMePTTYCSelectFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnGayMePTTYCSelect();
}

static void _OnGioiThieuKXDSelectFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnGioiThieuKXDSelect();
}
static void _OnGioiThieuPTTYCSelectFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnGioiThieuPTTYCSelect();
}
static void _OnGioiThieuKhacSelectFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnGioiThieuKhacSelect();
}

static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnCancelFMInsuranceReceiptSummary();
} 
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}
static int _OnListCheckAllPTTYCDVFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllPTTYCDV();
	return 0;
}

static int _OnListCheckAllPTTYCBHFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllPTTYCBH();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static int _OnListCheckAllInvoiceFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllInvoice();
	return 0;
}
static int _OnListCheckAllRefundFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllRefund();
	return 0;
}

static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}

static int _OnListCheckAllBHABFnc(CWnd *pWnd)
{
	((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnListCheckAllBHAB();
	return 0;
}

static void _OnGoiDVSelectFnc(CWnd *pWnd)
{
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnGoiDVSelect();
}
static void _OnCreateDataSelectFnc(CWnd *pWnd)
{
	CFMPolicyCollectDetailByItem_2017 *pVw = (CFMPolicyCollectDetailByItem_2017 *)pWnd;
	pVw->OnCreateDataSelect();
} 
static void _OnABZoneSelectFnc(CWnd *pWnd){
	 ((CFMPolicyCollectDetailByItem_2017*)pWnd)->OnABZoneSelect();
}

CFMPolicyCollectDetailByItem_2017::CFMPolicyCollectDetailByItem_2017(CWnd *pParent)
{	
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMPolicyCollectDetailByItem_2017::~CFMPolicyCollectDetailByItem_2017()
{

}
void CFMPolicyCollectDetailByItem_2017::OnCreateComponents()
{
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
	m_wndOrderByLabel.Create(this, _T("Order By"), 24, 31, 24, 31);
	m_wndOrderBy.Create(this,24, 31, 24, 31); 
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 10, 120, 90, 145);
	m_wndObjectType.Create(this,95, 120, 230, 145); 
	m_wndDeptLabel.Create(this, _T("Dept"), 240, 120, 340, 145);
	m_wndDept.Create(this,350, 120, 480, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 240, 90, 340, 115);
	m_wndStatus.Create(this,350, 90, 480, 115); 
	m_wndList.Create(this,10, 150, 485, 349); 
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 355, 354, 485, 379);
	m_wndServiceOnDemand.Create(this, _T("Service On Demand"), 11, 384, 120, 409);
	m_wndSurgery.Create(this, _T("Surgery"), 260, 384, 379, 409);
	m_wndOperation.Create(this, _T("Operation"), 394, 384, 484, 409);
	m_wndLaser.Create(this, _T("Laser"), 260, 444, 350, 469);
	m_wndNotLaser.Create(this, _T("Not Laser"), 355, 444, 485, 469);
	m_wndOtherDeptFilter.Create(this, _T("Chỉ tính PTTYC"), 11, 414, 135, 439);
	m_wndNotinSOD.Create(this, _T("Lọc các ca không thực hiện PTTYC"), 140, 414, 485, 439);
	m_wndGayMeB5.Create(this, _T("Gây mê B5"), 11, 444, 120, 469);
	m_wndGayMePTTYC.Create(this, _T("Gây mê PTTYC"), 131, 444, 250, 469);
	m_wndGioiThieuKXD.Create(this, _T("KXÐ"), 11, 474, 120, 499);
	m_wndGioiThieuPTTYC.Create(this, _T("NV PTTYC"), 131, 474, 250, 499);
	m_wndGioiThieuKhac.Create(this, _T("Còn lại"), 260, 474, 350, 499);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 236, 540, 316, 565);
	m_wndExport.Create(this, _T("Export XLS"), 321, 540, 401, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 11, 354, 120, 379);
	m_wndOutpatient.Create(this, _T("Outpatient"), 131, 354, 250, 379);
	m_wndAll.Create(this, _T("All"), 260, 354, 350, 379);
	m_wndSolderObject.Create(this, _T("SolderObject"), 131, 384, 250, 409);
	m_wndGoiDV.Create(this, _T("Goi DV"), 355, 474, 485, 499);
	m_wndCreateData.Create(this, _T("Create Data"), 406, 540, 486, 565);
	m_wndABZone.Create(this, _T("AB Zone"), 11, 506, 120, 531);
	m_wndCreateData.EnableWindow(FALSE);
}
void CFMPolicyCollectDetailByItem_2017::OnInitializeComponents(){
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

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMPolicyCollectDetailByItem_2017::OnSetWindowEvents(){
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

	
	m_wndList.AddEvent(1, _T("Check All BH-AB//"), _OnListCheckAllBHABFnc);

	m_wndList.AddEvent(2, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(3, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(4, _T("Check All DV PTTYC"), _OnListCheckAllPTTYCDVFnc);
	m_wndList.AddEvent(5, _T("Check All BH PTTYC"), _OnListCheckAllPTTYCBHFnc);
	m_wndList.AddEvent(6, _T("Check All Fee Invoice"), _OnListCheckAllInvoiceFnc);
	m_wndList.AddEvent(7, _T("Check All Fee Refund"), _OnListCheckAllRefundFnc);

	m_wndList.AddEvent(8, _T("Chọn phiếu thu/chi BH"), _OnListCheckAllInsInvoiceFnc);
	m_wndList.AddEvent(9, _T("Bỏ Chọn phiếu thu/chi BH"), _OnListUnCheckAllInsInvoiceFnc);	
	m_wndList.AddEvent(10, _T("Chọn phiếu thu/chi Quân"), _OnListCheckAllSolderFnc);
	m_wndList.AddEvent(11, _T("Bỏ Chọn phiếu thu/chi Quân"), _OnListUnCheckAllSolderFnc);
	m_wndList.AddEvent(12, _T("Chọn phiếu thu/chi BH Quân"), _OnListCheckAllInsSolderFnc);
	m_wndList.AddEvent(13, _T("Bỏ Chọn phiếu thu/chi BH Quân"), _OnListUnCheckAllInsSolderFnc);
	m_wndList.AddEvent(14, _T("Search"), _OnListSearchItemFnc);

	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndServiceOnDemand.SetEvent(WE_CLICK, _OnServiceOnDemandSelectFnc);
	m_wndSurgery.SetEvent(WE_CLICK, _OnSurgerySelectFnc);
	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
	m_wndLaser.SetEvent(WE_CLICK, _OnLaserSelectFnc);
	m_wndNotLaser.SetEvent(WE_CLICK, _OnNotLaserSelectFnc);
	m_wndOtherDeptFilter.SetEvent(WE_CLICK, _OnOtherDeptFilterSelectFnc);
	m_wndNotinSOD.SetEvent(WE_CLICK, _OnNotinSODSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndChuaTT.SetEvent(WE_CLICK, _OnChuaTTSelectFnc);
	m_wndSolderObject.SetEvent(WE_CLICK, _OnSolderObjectSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);

	m_wndGayMeB5.SetEvent(WE_CLICK, _OnGayMeB5SelectFnc);
	m_wndGayMePTTYC.SetEvent(WE_CLICK, _OnGayMePTTYCSelectFnc);

	m_wndGioiThieuKXD.SetEvent(WE_CLICK, _OnGioiThieuKXDSelectFnc);
	m_wndGioiThieuPTTYC.SetEvent(WE_CLICK, _OnGioiThieuPTTYCSelectFnc);
	m_wndGioiThieuKhac.SetEvent(WE_CLICK, _OnGioiThieuKhacSelectFnc);
	m_wndSolderObject.SetEvent(WE_CLICK, _OnSolderObjectSelectFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsuranceReceiptSummaryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsuranceReceiptSummaryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsuranceReceiptSummaryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsuranceReceiptSummaryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsuranceReceiptSummaryFnc, 0, 'T', VK_CONTROL);
	*/
	m_wndCreateData.SetEvent(WE_CLICK, _OnCreateDataSelectFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	//UpdateData(FALSE);
	SetMode(VM_EDIT);
	m_mOrderBy[_T("01")] = _T(" firstname, docno, invoice_date");
	m_mOrderBy[_T("02")] = _T(" docno");
	m_mOrderBy[_T("03")] = _T(" invoice_date, firstname ");
	m_mOrderBy[_T("04")] = _T(" deptid, firstname ");
	m_mOrderBy[_T("05")] = _T(" firstname, invoice_date ");

}
void CFMPolicyCollectDetailByItem_2017::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndSurgery.GetDlgCtrlID(), m_bSurgery);
	DDX_Check(pDX, m_wndOperation.GetDlgCtrlID(), m_bOperation);
	DDX_Check(pDX, m_wndLaser.GetDlgCtrlID(), m_bLaser);
	DDX_Check(pDX, m_wndNotLaser.GetDlgCtrlID(), m_bNotLaser);
	//DDX_Check(pDX, m_wndChuaTT.GetDlgCtrlID(), m_bChuaTT);
	DDX_Check(pDX, m_wndOtherDeptFilter.GetDlgCtrlID(), m_bOtherDeptFilter);
	DDX_Check(pDX, m_wndNotinSOD.GetDlgCtrlID(), m_bNotinSOD);

	DDX_Check(pDX, m_wndGayMeB5.GetDlgCtrlID(), m_bGayMeB5);
	DDX_Check(pDX, m_wndGayMePTTYC.GetDlgCtrlID(), m_bGayMePTTYC);

	DDX_Check(pDX, m_wndGioiThieuKXD.GetDlgCtrlID(), m_bGioiThieuKXD);
	DDX_Check(pDX, m_wndGioiThieuPTTYC.GetDlgCtrlID(), m_bGioiThieuPTTYC);
	DDX_Check(pDX, m_wndGioiThieuKhac.GetDlgCtrlID(), m_bGioiThieuKhac);
	DDX_Check(pDX, m_wndSolderObject.GetDlgCtrlID(), m_bSolderObject);
	DDX_Check(pDX, m_wndGoiDV.GetDlgCtrlID(), m_bGoiDV);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);

}
void CFMPolicyCollectDetailByItem_2017::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPolicyCollectDetailByItem_2017::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPolicyCollectDetailByItem_2017::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_bHitechMachine = FALSE;
	m_bServiceOnDemand = FALSE;
	m_bSurgery=FALSE;
	m_bOperation=FALSE;
	m_bLaser=FALSE;	
	m_bNotLaser=FALSE;	
	m_bOtherDeptFilter=FALSE;
	m_bNotinSOD=FALSE;
	m_bChuaTT = FALSE;

	m_bGayMeB5=FALSE;
	m_bGayMePTTYC=FALSE;

	m_bGioiThieuKXD=FALSE;
	m_bGioiThieuPTTYC=FALSE;
	m_bGioiThieuKhac=FALSE;

	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_szObjectTypeKey = _T("BH");
	m_nPatientType = 3;
	m_bSolderObject=FALSE;
	m_bGoiDV=FALSE;
	m_bABZone=FALSE;
}

int CFMPolicyCollectDetailByItem_2017::SetMode(int nMode){
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

/*void CFMPolicyCollectDetailByItem_2017::OnYearChange(){
	
} */
/*void CFMPolicyCollectDetailByItem_2017::OnYearSetfocus(){
	
} */
/*void CFMPolicyCollectDetailByItem_2017::OnYearKillfocus(){
	
} */
int CFMPolicyCollectDetailByItem_2017::OnYearCheckValue(){
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
void CFMPolicyCollectDetailByItem_2017::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
 
void CFMPolicyCollectDetailByItem_2017::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMPolicyCollectDetailByItem_2017::OnCreateDataSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;
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
	if (m_bServiceOnDemand)
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

	else if (m_bSolderObject)
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));
	else 
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s ORDER BY fac_cash_id"), szWhere4);
	rs.ExecSQL(szSQL);	
	OnDeleteDataBeforeInsert();

	szSQL2.Format(_T("Insert into tmp_fa_cash_D12 (SELECT fac_cash_id as idx, '%s' as userid FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s)"), pMF->m_szUser, szWhere4);	
	int ret = pMF->ExecSQL(szSQL2);
	_msg(_T("Đã thực hiện insert %ld bản tin"), ret);	
} 

 
void CFMPolicyCollectDetailByItem_2017::OnReportPeriodSelendok(){
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

/*void CFMPolicyCollectDetailByItem_2017::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPolicyCollectDetailByItem_2017::OnReportPeriodKillfocus(){
	
}*/
long CFMPolicyCollectDetailByItem_2017::OnReportPeriodLoadData(){
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

/*void CFMPolicyCollectDetailByItem_2017::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPolicyCollectDetailByItem_2017::OnFromDateChange(){
	
} */
/*void CFMPolicyCollectDetailByItem_2017::OnFromDateSetfocus(){
	
} */
/*void CFMPolicyCollectDetailByItem_2017::OnFromDateKillfocus(){
	
} */
int CFMPolicyCollectDetailByItem_2017::OnFromDateCheckValue()
{
	OnListLoadData();
	return 0;
}
void CFMPolicyCollectDetailByItem_2017::OnChuaTTSelect()
{
 
}

 
/*void CFMPolicyCollectDetailByItem_2017::OnToDateChange(){
	
} */
/*void CFMPolicyCollectDetailByItem_2017::OnToDateSetfocus(){
	
} */
/*void CFMPolicyCollectDetailByItem_2017::OnToDateKillfocus(){
	
} */
int CFMPolicyCollectDetailByItem_2017::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMPolicyCollectDetailByItem_2017::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyCollectDetailByItem_2017::OnClerkSelendok(){
	 
}
/*void CFMPolicyCollectDetailByItem_2017::OnClerkSetfocus(){
	
}*/
/*void CFMPolicyCollectDetailByItem_2017::OnClerkKillfocus(){
	
}*/
long CFMPolicyCollectDetailByItem_2017::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMPolicyCollectDetailByItem_2017::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyCollectDetailByItem_2017::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyCollectDetailByItem_2017::OnStatusSelendok(){
	 OnListLoadData();
}
void CFMPolicyCollectDetailByItem_2017::OnSurgerySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bSurgery)
			m_bOperation=FALSE;	
	UpdateData(FALSE);
}
void CFMPolicyCollectDetailByItem_2017::OnOperationSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bOperation)
			m_bSurgery=FALSE;	
	UpdateData(FALSE);
}
	void CFMPolicyCollectDetailByItem_2017::OnOtherDeptFilterSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMPolicyCollectDetailByItem_2017::OnNotinSODSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMPolicyCollectDetailByItem_2017::OnGayMeB5Select(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGayMeB5)
			m_bGayMePTTYC=FALSE;	
	UpdateData(FALSE);
}
void CFMPolicyCollectDetailByItem_2017::OnGayMePTTYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGayMePTTYC)
			m_bGayMeB5=FALSE;	
	UpdateData(FALSE);
}

void CFMPolicyCollectDetailByItem_2017::OnLaserSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bLaser)
			m_bNotLaser=FALSE;	
	UpdateData(FALSE);
}
void CFMPolicyCollectDetailByItem_2017::OnNotLaserSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bNotLaser)
			m_bLaser=FALSE;	
	UpdateData(FALSE);
}

void CFMPolicyCollectDetailByItem_2017::OnGioiThieuKXDSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGioiThieuKXD)
			{
				m_bGioiThieuPTTYC=FALSE;	
				m_bGioiThieuKhac=FALSE;	
			}
	UpdateData(FALSE);
}
void CFMPolicyCollectDetailByItem_2017::OnGioiThieuPTTYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGioiThieuPTTYC)
		{
			m_bGioiThieuKXD=FALSE;	
			m_bGioiThieuKhac=FALSE;	
		}
	UpdateData(FALSE);
}
void CFMPolicyCollectDetailByItem_2017::OnGioiThieuKhacSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGioiThieuKhac)
		{
			m_bGioiThieuKXD=FALSE;	
			m_bGioiThieuPTTYC=FALSE;	
		}
	UpdateData(FALSE);
}
/*void CFMPolicyCollectDetailByItem_2017::OnStatusSetfocus(){
	
}*/
/*void CFMPolicyCollectDetailByItem_2017::OnStatusKillfocus(){
	
}*/

void CFMPolicyCollectDetailByItem_2017::OnGoiDVSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

long CFMPolicyCollectDetailByItem_2017::OnStatusLoadData(){
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
/*void CFMPolicyCollectDetailByItem_2017::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyCollectDetailByItem_2017::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyCollectDetailByItem_2017::OnOrderBySelendok(){
	 
}
void CFMPolicyCollectDetailByItem_2017::OnSolderObjectSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
/*void CFMPolicyCollectDetailByItem_2017::OnOrderBySetfocus(){
	
}*/
/*void CFMPolicyCollectDetailByItem_2017::OnOrderByKillfocus(){
	
}*/
long CFMPolicyCollectDetailByItem_2017::OnOrderByLoadData(){
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

void CFMPolicyCollectDetailByItem_2017::OnObjectTypeSelendok()
{
	OnListLoadData();
}

long CFMPolicyCollectDetailByItem_2017::OnObjectTypeLoadData()
{
	//m_wndObjectType.AddItems(_T("01"), _T("\x44\x1ECB\x63h v\x1EE5"), NULL);
	//m_wndObjectType.AddItems(_T("02"), _T("Bảo hiểm"), NULL);
	
	m_wndObjectType.AddItems(_T("BH"), _T("Tất cả đối tượng Bảo hiểm"), NULL);
	m_wndObjectType.AddItems(_T("BH-NT+BH-NG"), _T("Bảo hiểm khác nội trú, ngoại trú"), NULL);
	m_wndObjectType.AddItems(_T("BH-NT"), _T("Bảo hiểm khác nội trú"), NULL);
	m_wndObjectType.AddItems(_T("BH-NG"), _T("Bảo hiểm khác ngoại trú"), NULL);
	m_wndObjectType.AddItems(_T("BHQUAN-NT+BHQUAN-NG"), _T("Bảo hiểm quân nội trú, ngoại trú"), NULL);
	m_wndObjectType.AddItems(_T("BHQUAN-NT"), _T("Bảo hiểm quân nội trú"), NULL);
	m_wndObjectType.AddItems(_T("BHQUAN-NG"), _T("Bảo hiểm quân ngoại trú"), NULL);
	m_wndObjectType.AddItems(_T("BH-NGAB"), _T("Bảo hiểm khu A-B"), NULL);
	return 0;
	
}

/*void CFMPolicyCollectDetailByItem_2017::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

int CFMPolicyCollectDetailByItem_2017::OnListCheckAllTYC()
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
int CFMPolicyCollectDetailByItem_2017::OnListCheckAllPTTYCDV()
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
int CFMPolicyCollectDetailByItem_2017::OnListCheckAllPTTYCBH()
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
int CFMPolicyCollectDetailByItem_2017::OnListCheckAllPTTYC()
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

void CFMPolicyCollectDetailByItem_2017::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}


long CFMPolicyCollectDetailByItem_2017::OnDeptLoadData(){
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

void CFMPolicyCollectDetailByItem_2017::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMPolicyCollectDetailByItem_2017::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMPolicyCollectDetailByItem_2017::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyCollectDetailByItem_2017::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyCollectDetailByItem_2017::OnListLoadData()
{
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
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC')"));
	/*else if (m_bSolderObject)
		szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) in ('QU')"));*/
	else if (m_bABZone)
	{
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB')"));
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB') OR (fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') and FAC_POSTED ='Y' AND fac_invoicetype IN('P','R') AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F'))"));
		szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}

	else if (m_szObjectTypeKey == _T("BH"))
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','THE-BH', 'BH-NGAB','BH-NTAB')"));

	else if (m_szObjectTypeKey == _T("BH-NT+BH-NG"))		
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));

	else if (m_szObjectTypeKey == _T("BH-NT"))
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT')"));

	else if (m_szObjectTypeKey == _T("BH-NG"))
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NG')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NT+BHQUAN-NG"))  
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT','BHQUAN-NG')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NT"))
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NG"))
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NG')"));
	
	else if (m_szObjectTypeKey == _T("BH-NGAB"))
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB')"));

	else if (m_bSolderObject)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));
	else 
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG','THE-BH','BH-NGAB','BH-NTAB')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, ") \
				 _T("fac_invoicedate, fac_approveddate, fac_posteddate ") \
				 _T("FROM fa_cash WHERE fac_invoicetype in ('P','R') %s ORDER BY fac_cash_id"), szWhere);
	m_szWhere = szWhere;
	long nCount = rs.ExecSQL(szSQL);	
	_msg(_T("%ld"), nCount);
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

void CFMPolicyCollectDetailByItem_2017::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for( i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMPolicyCollectDetailByItem_2017::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMPolicyCollectDetailByItem_2017::OnServiceOnDemandSelect(){
	OnListLoadData();
}

void CFMPolicyCollectDetailByItem_2017::OnInpatientSelect(){
	
}
void CFMPolicyCollectDetailByItem_2017::OnOutpatientSelect(){
	
}
void CFMPolicyCollectDetailByItem_2017::OnDepositSelect(){
	
}
void CFMPolicyCollectDetailByItem_2017::OnAllSelect()
{
	
}
 
 
int CFMPolicyCollectDetailByItem_2017::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPolicyCollectDetailByItem_2017::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPolicyCollectDetailByItem_2017::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMPolicyCollectDetailByItem_2017::OnSaveFMInsuranceReceiptSummary(){
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
int CFMPolicyCollectDetailByItem_2017::OnCancelFMInsuranceReceiptSummary(){
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
int CFMPolicyCollectDetailByItem_2017::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"

void CFMPolicyCollectDetailByItem_2017::OnPrintSelect()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("In chi tiết theo danh mục BNBH"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("In bảng lương bệnh nhân bảo hiểm"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint2ndver();
			break;
		case 2:
			OnPrintSalaryList();
			break;
	}
}
void CFMPolicyCollectDetailByItem_2017::OnPrint1stver()
{
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

void CFMPolicyCollectDetailByItem_2017::OnPrint2ndver()
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
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_MAU2_BH.RPT");
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

	int col_pos = 4;
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
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("salary")));

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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMPolicyCollectDetailByItem_2017"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}
void CFMPolicyCollectDetailByItem_2017::OnPrintSalaryList()
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
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_MAULUONG.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryStringSalary();
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

	int col_pos = 4;
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
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("salary")));

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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMPolicyCollectDetailByItem_2017"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}


void CFMPolicyCollectDetailByItem_2017::OnPrint2ndver_Ins()
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMPolicyCollectDetailByItem_2017"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMPolicyCollectDetailByItem_2017::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export chi tiết theo danh mục theo khoa thực hiện"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export bang thanh toan thu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	TranslateString(_T("Export bang thanh toan chi"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	TranslateString(_T("Export bảng thanh toán lương"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);
	TranslateString(_T("Export danh sách BN tính doanh thu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 5, tmpStr);

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportReport();
			break;		
		case 2:
			OnExport();
			break;
		case 3:
			OnExportByRefund();
			break;
		case 4:
			OnExportSalaryList();
			break;
		case 5:
			OnExportPatientList();
			break;
	}
	/*CHMSTrackingPatientFeeDialog dlg(this);
	dlg.DoModal();*/
}
void CFMPolicyCollectDetailByItem_2017::OnExportReport()
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
	if (!xls.Load(_T("Exports\\CHI TIET THEO DANH MUC BH THEO KHOA THUC HIEN.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[6] > 0)
			{
				xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 4; i < 30; i++)
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
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("price"), nTemp);		
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("e_amount"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("i_amount"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_amount"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[6] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[6] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CHI TIET THEO DANH MUC BH THEO KHOA THUC HIEN2.xls"));
}

void CFMPolicyCollectDetailByItem_2017::OnExport()
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
	if (!xls.Load(_T("Exports\\ThongKeTienChiTraChoPTV.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringtyc();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("bsmo"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[3] > 0)
			{
				xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);

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

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("giagoc"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("giabaohiem"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tronggoi"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("bntra"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tongtien"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("ca"), tmpStr);
		if(tmpStr == _T("A"))
			xls.SetCellText(nCol+8, nRow, _T("X"), FMT_TEXT);
		else if(tmpStr == _T("B"))
			xls.SetCellText(nCol+9, nRow, _T("X"), FMT_TEXT);
		else if(tmpStr == _T("C"))
			xls.SetCellText(nCol+10, nRow, _T("X"), FMT_TEXT);

		rs.GetValue(_T("phantrambs"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("tiencongbs"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tienthuchuong"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phantram_chitra_khoaquanly"), nTemp);
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tiencong_chitra_khoaquanly"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguoigm"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phantram_gayme_te"), nTemp);
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tiencong_gayme_te"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguoigt"), tmpStr);
		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phantram_thuhut_bn"), nTemp);
		xls.SetCellText(nCol+23, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tiencong_thuhut_bn"), nTemp);
		nGroupTotal[24] += nTemp;
		xls.SetCellText(nCol+24, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phantram_tienthuong_PR"), nTemp);
		xls.SetCellText(nCol+26, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tiencong_tienthuong_PR"), nTemp);
		nGroupTotal[27] += nTemp;
		xls.SetCellText(nCol+27, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tienchipttyc"), nTemp);
		nGroupTotal[29] += nTemp;
		xls.SetCellText(nCol+29, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("optname"), tmpStr);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("groupid"), tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Objecttype"), tmpStr);
		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_TEXT);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[3] > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\ThongKeTienChiTraChoPTV2.xls"));
}
void CFMPolicyCollectDetailByItem_2017::OnExportByRefund()
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
	if (!xls.Load(_T("Exports\\ThongKeTienChiTraChoPTV_TYC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringtycbyrefund();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("userdept"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[3] > 0)
			{
				xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);

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

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("giagoc"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tronggoi"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tongtien"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("ca"), tmpStr);
		if(tmpStr == _T("A"))
			xls.SetCellText(nCol+6, nRow, _T("X"), FMT_TEXT);
		else if(tmpStr == _T("B"))
			xls.SetCellText(nCol+7, nRow, _T("X"), FMT_TEXT);
		else if(tmpStr == _T("C"))
			xls.SetCellText(nCol+8, nRow, _T("X"), FMT_TEXT);

		rs.GetValue(_T("phantrambs"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("tiencongbs"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tienchipttyc"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tienthuchuong"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguoigm"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phantram_gayme_te"), nTemp);
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tiencong_gayme_te"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguoigt"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phantram_thuhut_bn"), nTemp);
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tiencong_thuhut_bn"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phantram_chitra_khoaquanly"), nTemp);
		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tiencong_chitra_khoaquanly"), nTemp);
		nGroupTotal[23] += nTemp;
		xls.SetCellText(nCol+23, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phantram_tienthuong_PR"), nTemp);
		xls.SetCellText(nCol+25, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tiencong_tienthuong_PR"), nTemp);
		nGroupTotal[26] += nTemp;
		xls.SetCellText(nCol+26, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("optname"), tmpStr);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("groupid"), tmpStr);
		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_TEXT);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[3] > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\ThongKeTienChiTraChoPTV2_TYC.xls"));
}
CString CFMPolicyCollectDetailByItem_2017::GetQueryStringtyc()
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

	if (m_bLaser)
		szWhere1.AppendFormat(_T(" AND dept_id='C15'"));
	if (m_bNotLaser)
		szWhere1.AppendFormat(_T(" AND dept_id<>'C15'"));

		if (m_bOtherDeptFilter)
        //szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_roomid  IN(33, 34, 35)))"));//
		szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0,33, 34, 35)) OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)) OR (ho_depttype = 'E' AND ho_deptid in ('TYC') AND ho_roomid IN(10,37)))"));
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


		szSQL.Format(_T(" SELECT * FROM") \
			_T(" (") \
			_T(" SELECT bsmo,") \
			_T("   NVL(nguoigmid, 'pttyc') AS nguoigmid,") \
			_T("   nguoigm,") \
			_T("   NVL(nguoigtid, 'X') AS nguoigtid,") \
			_T("   NVL(nguoigtdept, 'X') AS nguoigtdept,") \
			_T("   nguoigt,") \
			_T("   docno,dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,CHINDEX,") \
			_T("   tenbn,") \
			_T("   giagoc,") \
			_T("   CASE WHEN pobject <> 'S' THEN giabaohiem ELSE 0 END AS giabaohiem,") \
			_T("   tronggoi,") \
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
			_T("   groupid,Objecttype,") \
			_T("   idx") \
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
			_T("     ho_idx                    AS idx,") \
			_T("     get_patientname(ho_docno) AS tenbn,") \
			//_T("     ho_amount                 AS giagoc,") \//
			_T("     CASE WHEN substr(fl.hfl_groupid, 1, 2) IN ('B4') THEN ho_amount WHEN substr(fl.hfl_groupid, 1, 2) IN ('B5') THEN f.hfe_patpaid END AS giagoc,") \
			_T("     fl.hfl_insprice           AS giabaohiem,") \
			_T("     HMS_OPERATION_INPKG_AMOUNT(ho_docno, ho_idx) AS tronggoi,") \
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
			_T("     oj.ho_type AS pobject") \
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
			_T("   idx,Objecttype,") \
			_T("   tronggoi,") \
			_T("   giabaohiem,") \
			_T("   pobject") \
			_T(" ORDER BY bsmo,") \
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

CString CFMPolicyCollectDetailByItem_2017::GetQueryStringtycbyrefund()
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
		szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0,33, 34, 35)) OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)))"));
		else if (m_bNotinSOD)
		//szWhere.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_pdeptid not in  ('TYC','PTTYC') AND ho_roomid NOT IN(33, 34, 35))"));//
		szWhere.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_pdeptid not in  ('TYC','PTTYC') AND ho_roomid NOT IN(0,33, 34, 35))"));
		szSQL.Format(_T(" SELECT * FROM") \
			_T(" (") \
			_T(" SELECT bsmo,") \
			_T("   nguoigm,") \
			_T("   nguoigt,") \
			_T("   docno,dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,CHINDEX,") \
			_T("   tenbn,") \
			_T("   giagoc,") \
			_T("   tronggoi,") \
			_T("   giagoc - tronggoi AS bntra,") \
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
			_T("   groupid,") \
			_T("   idx") \
			_T(" FROM") \
			_T("   (SELECT") \
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
			_T("     WHERE user_id = ho_practitioner AND rownum=1") \
			_T("     )                         AS bsmo,") \
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
			_T(" (SELECT  user_name AS user_name") \
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
			_T("     ho_idx                    AS idx,") \
			_T("     get_patientname(ho_docno) AS tenbn,") \
			_T("     f.hfe_patpaid             AS giagoc,") \
			_T("     (SELECT COALESCE(SUM(hfe_patdebt+hfe_patpaid), 0) AS mat_amount") \
			_T("     FROM hms_fee") \
			_T("     WHERE hfe_docno           = ho_docno") \
			_T("     AND hfe_rowid             = ho_idx") \
			_T("     AND hfe_type             IN('M','D')") \
			_T("     AND NVL(hfe_category,'N') = 'Y'") \
			_T("     )            AS tronggoi,") \
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
			_T("     hfl_groupid AS groupid") \
			_T("   FROM hms_operation") \
			_T("   LEFT JOIN hms_fee f") \
			_T("   ON ( f.hfe_docno  = ho_docno") \
			_T("   AND f.hfe_orderid = ho_idx AND f.hfe_itemid=ho_itemid") \
			_T("   AND f.hfe_type    = 'O' AND f.hfe_status in ('R'))") \
			_T("   LEFT JOIN hms_fee_invoice_view_v2 i") \
			_T("   ON (i.hfe_docno     =f.hfe_docno") \
			_T("   AND i.hfe_invoiceno = f.hfe_invoiceno)") \
			_T("   LEFT JOIN hms_operation_charge") \
			_T("   ON(hoc_docno   = ho_docno") \
			_T("   AND hoc_optidx = ho_idx)") \
			_T("   LEFT JOIN hms_treatment_record") \
			_T("   ON(htr_docno = ho_docno") \
			_T("   AND htr_idx  = ho_refidx)") \
			_T("   LEFT JOIN hms_fee_list fl") \
			_T("   ON(ho_itemid       = fl.hfl_feeid)") \
			_T("   WHERE f.hfe_status in ('R') AND f.Hfe_type='O' AND f.hfe_category in ('N','BQP','XX')") \
			_T("   %s") \
			_T(" )") \
			_T(" GROUP BY bsmo,") \
			_T("   nguoigm,") \
			_T("   nguoigt,") \
			_T("   docno,") \
			_T("   tenbn,") \
			_T("   dept_id,ho_deptid,ho_roomid,HO_DEPTTYPE,CHINDEX,") \
			_T("   giagoc,") \
			_T("   ca,") \
			_T("   optname,") \
			_T("   groupid,") \
			_T("   idx,") \
			_T("   tronggoi") \
			_T(" ORDER BY bsmo,") \
			_T("   docno,") \
			_T("   tenbn,") \
			_T("   giagoc,") \
			_T("   ca")
			_T("   )") \
			_T("   WHERE 1=1 %s"),szWhere,szWhere1);
			rs.ExecSQL(szSQL);
			_fmsg(_T("%s"), szSQL);
			return szSQL;
}

CString CFMPolicyCollectDetailByItem_2017::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2, szWhere3;
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
		//szWhere.AppendFormat(_T(" AND hfe_cash_id in(select IDX from tmp_fa_cash_D12) "));

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

	if (m_bSolderObject)
		szWhere2.AppendFormat(_T(" AND i.HFE_OBJECTID=11"));
	if (m_bGoiDV)
		szWhere3.AppendFormat(_T(" AND itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')"));	
	if (m_bServiceOnDemand)	
	{		
		if (m_bSurgery)
		szWhere1.AppendFormat(_T(" AND substr(hfe_group,1,2) in ('B4')"));
		else if (m_bOperation)			
		szWhere1.AppendFormat(_T(" AND substr(hfe_group,1,2) in ('B5')"));
		if (m_bLaser)
		szWhere.AppendFormat(_T(" AND dept_id='C15'"));
		if (m_bNotLaser)
		szWhere.AppendFormat(_T(" AND dept_id<>'C15'"));
		if (m_bOtherDeptFilter)		
		szWhere1.AppendFormat(_T(" AND (depttype = 'I' OR (depttype = 'E' AND dept in ('TYC','PTTYC') AND orderdept not in ('C8-D') AND roomid IN(0,33, 34, 35)) OR (depttype = 'E' AND dept in ('B5') AND orderdept in ('TYC','PTTYC') AND roomid IN(0,33, 34, 35)))"));
		if (m_bNotinSOD)		
		szWhere1.AppendFormat(_T(" AND (depttype = 'E' AND dept not in  ('TYC','PTTYC') AND roomid NOT IN(0,33, 34, 35))"));
		szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		// Khoa theo yeu cau//
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_inspaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid END dept_id,    ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL AND Fl.Hfl_Deptid is not null THEN Fl.Hfl_Deptid else f.Hfe_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --5. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --6. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T("   UNION ALL") \
		//_T(" --7. Phi giuong") \//
		_T("    SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --9. Phi phau thuat - thu thuat") \//		
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("     fl.hfl_groupid AS hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     ho_depttype as depttype,") \
		_T("     HO_PDEPTID as dept,") \
		_T("     HO_DEPTID as orderdept,") \
        _T("     ho_roomid as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --10. Phi khac o khoa") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --11. Phi khac o tai chinh") \//
		_T("   SELECT fi.hfe_invoiceno,") \
		_T("     fi.hfe_docno,   ") \
		_T("     CASE WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC' THEN fi.HFE_DEPTID END dept_id,") \
		_T("     CAST('XXX' AS NVARCHAR2(3)) hfe_group3,") \
		_T("     fi.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     fi.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_amount amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P','R')") \
		_T(" 		      AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'  ") \
		_T("   UNION ALL ") \
		//_T(" --12. Phi khoa duoc, trang bi, tiep huyet") //
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(product_org_id, 'PM', 'DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,    ") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category not in ('Y') ") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 AND i.hfe_status in ('P','R') %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1,szWhere); \
		}
	else
	{
	szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//Cac khoa trong noi vien//
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_inspaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category not in ('Y')   ") \
		_T("   UNION ALL") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid END dept_id,    ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		//_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \//
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL AND Fl.Hfl_Deptid is not null THEN Fl.Hfl_Deptid else f.Hfe_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --5. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --6. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T("   UNION ALL") \
		//_T(" --7. Phi giuong") \//
		_T("    SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --9. Phi phau thuat - thu thuat") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --10. Phi khac o khoa") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --11. Phi khac o tai chinh") \//
		_T("   SELECT fi.hfe_invoiceno,") \
		_T("     fi.hfe_docno,   ") \
		_T("     CASE WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC' THEN fi.HFE_DEPTID END dept_id,") \
		_T("     CAST('XXX' AS NVARCHAR2(3)) hfe_group3,") \
		_T("     fi.hfe_type fee_type,") \
		_T("     fi.hfe_desc descr,") \
		_T("     NULL as itemid,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_amount amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P','R')") \
		_T(" 		      AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'  ") \
		_T("   UNION ALL ") \
		//_T(" --12. Phi khoa duoc, trang bi, tiep huyet") //
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(product_org_id, 'PM', 'DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,    ") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category not in ('Y') ") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,itemid,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     descr,itemid,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 AND i.hfe_status in ('P','R') %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s %s ") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr,itemid, salary") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere2,szWhere,szWhere3); \
}
	return szSQL;
}

void CFMPolicyCollectDetailByItem_2017::BuildQueryString(CString& szSQL){
	//data_fitler
	//data_sort
	//getquerystring
}

void CFMPolicyCollectDetailByItem_2017::data_filter(CString& szWhere){
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

void CFMPolicyCollectDetailByItem_2017::data_sort(CString& szSort){
	CString tmpStr;
	m_mOrderBy.Lookup(tmpStr, szSort);
}

void CFMPolicyCollectDetailByItem_2017::prototype_condition(CString szCondition, CString szField, CString& szWhere){
	if (!szCondition.IsEmpty())
		if (szCondition.Find(',') != -1)
			szWhere.AppendFormat(_T(" AND %s IN (%s)"), szField, szCondition);
		else
			szWhere.AppendFormat(_T(" AND %s = '%s'"), szField, szCondition);
}

CString CFMPolicyCollectDetailByItem_2017::GetQueryString_1(){
	CString szSQL;

	return szSQL;
}

BOOL CFMPolicyCollectDetailByItem_2017::ParseALargeFile(HWND hwndParent, LPTSTR lpszFileName) 
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
CString CFMPolicyCollectDetailByItem_2017::GetQueryStringSalary()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2, szWhereSolderObject;
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
	//szWhere.AppendFormat(_T(" AND hfe_cash_id in(select IDX from tmp_fa_cash_D12) "));

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

	if (m_bSolderObject)
		szWhere2.AppendFormat(_T(" AND i.HFE_OBJECTID=11"));

	//if (m_szObjectTypeKey == _T("01"))	
	if (m_bServiceOnDemand)
	{
		if (m_bSurgery)
		szWhere1.AppendFormat(_T(" AND substr(hfe_group,1,2) in ('B4')"));
		else if (m_bOperation)			
		szWhere1.AppendFormat(_T(" AND substr(hfe_group,1,2) in ('B5')"));	
		if (m_bLaser)
		szWhere.AppendFormat(_T(" AND dept_id='C15'"));
		if (m_bNotLaser)
		szWhere.AppendFormat(_T(" AND dept_id<>'C15'"));
		if (m_bOtherDeptFilter)
		//szWhere1.AppendFormat(_T(" AND (depttype = 'I' OR (depttype = 'E' AND dept = 'TYC' AND roomid IN(33, 34, 35)))"));//
		szWhere1.AppendFormat(_T(" AND (depttype = 'I' OR (depttype = 'E' AND dept in ('TYC','PTTYC') AND orderdept not in ('C8-D') AND roomid IN(0,33, 34, 35)) OR (depttype = 'E' AND dept in ('B5') AND orderdept in ('TYC','PTTYC') AND roomid IN(0,33, 34, 35)))"));
		if (m_bNotinSOD)
		//szWhere1.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_deptid <> 'TYC' AND ho_roomid NOT IN(33, 34, 35))"));//
		szWhere1.AppendFormat(_T(" AND (depttype = 'E' AND dept not in  ('TYC','PTTYC') AND roomid NOT IN(0,33, 34, 35))"));
		szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		//_T("     f.hfe_cost amount,") \//
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_inspaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid END dept_id,    ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL AND Fl.Hfl_Deptid is not null THEN Fl.Hfl_Deptid else f.Hfe_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --5. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T("   UNION ALL") \
		//_T(" --6. Phi giuong") \//
		_T("    SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     dy.hdbl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) and dy.hdbl_deptid=hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		// Bỏ đi khi in bảng lương//
		//_T("   --8. Phi phau thuat - thu thuat") \//		
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		//_T("     f.hfe_group,") \//
		_T("     fl.hfl_groupid AS hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     ho_depttype as depttype,") \
		_T("     HO_PDEPTID as dept,") \
		_T("     HO_DEPTID as orderdept,") \
        _T("     ho_roomid as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		//_T(" 		    AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_deptid = 'TYC' AND ho_roomid  IN(33, 34, 35)))") \//
		_T("   UNION ALL") \
		//_T("   --9. Phi khac o khoa") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --10. Phi khac o tai chinh") \//
		_T("   SELECT fi.hfe_invoiceno,") \
		_T("     fi.hfe_docno,   ") \
		_T("     CASE WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC' THEN fi.HFE_DEPTID END dept_id,") \
		_T("     CAST('XXX' AS NVARCHAR2(3)) hfe_group3,") \
		_T("     fi.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     fi.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_amount price,") \
		_T("     fi.hfe_amount amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P','R')") \
		_T(" 		      AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'  ") \
		_T("   UNION ALL ") \
		//_T(" --11. Phi khoa duoc, trang bi, tiep huyet") //
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(product_org_id, 'PM', 'DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,    ") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category not in ('Y') ") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   price,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times,") \
		_T("     price,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary") \
		_T("   FROM hms_fee_invoice_view_v2_bh i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 AND i.hfe_status in ('P','R') %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, price, salary ") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1,szWhere); \
		}
	else
	{
	szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_inspaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     CASE WHEN LENGTH(ss_vndesc)>0 THEN ss_vndesc ELSE CAST('02.1895' as NVARCHAR2(81)) END as ins_code, ") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   LEFT JOIN sys_sel ON(ss_id='HMS_EXAM_TYPE' and ss_code=he_typeid) ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category not in ('Y')   ") \
		_T("   UNION ALL") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid END dept_id,    ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     CASE WHEN length(hcm_map_id)>0 then hcm_map_id else fl.HFL_INSMAP END as ins_code, ") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Circular_Map ON (fl.Hfl_Feeid=hcm_fee_id) ") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL AND Fl.Hfl_Deptid is not null THEN Fl.Hfl_Deptid else f.Hfe_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     CASE WHEN length(hcm_map_id)>0 then hcm_map_id else fl.HFL_INSMAP END as ins_code, ") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Circular_Map ON (fl.Hfl_Feeid=hcm_fee_id) ") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     CASE WHEN length(hcm_map_id)>0 then hcm_map_id else fl.HFL_INSMAP END as ins_code, ") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Circular_Map ON (fl.Hfl_Feeid=hcm_fee_id) ") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --5. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     CASE WHEN length(hcm_map_id)>0 then hcm_map_id else fl.HFL_INSMAP END as ins_code, ") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Circular_Map ON (fl.Hfl_Feeid=hcm_fee_id) ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T("   UNION ALL") \
		//_T(" --6. Phi giuong") \//
		_T("    SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     dy.hdbl_salary salary,") \
		_T("     CASE WHEN LENGTH(hcm_map_id)>0 AND hfe_feegroup='DYN' THEN hcm_map_id ELSE hfe_itemid end as ins_code,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) and dy.hdbl_deptid=hfe_deptid") \
		_T("   LEFT JOIN hms_circular_map ON (hcm_fee_id = f.hfe_deptid ||'.'||hfe_itemid AND hfe_feegroup='DYN') ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		
		//_T("   --8. Phi phau thuat - thu thuat") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		//_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' THEN  HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  ='B5' AND HO_DEPTID is null THEN HO_PDEPTID else Fl.Hfl_Deptid END dept_id,      ") \//
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     CASE WHEN length(hcm_map_id)>0 then hcm_map_id else fl.HFL_INSMAP END as ins_code, ") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN Hms_Circular_Map ON (fl.Hfl_Feeid=hcm_fee_id) ") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --9. Phi khac o khoa") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     CASE WHEN length(hcm_map_id)>0 then hcm_map_id else fl.HFL_INSMAP END as ins_code, ") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   LEFT JOIN Hms_Circular_Map ON (fl.Hfl_Feeid=hcm_fee_id) ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --10. Phi khac o tai chinh") \//
		_T("   SELECT fi.hfe_invoiceno,") \
		_T("     fi.hfe_docno,   ") \
		_T("     CASE WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC' THEN fi.HFE_DEPTID END dept_id,") \
		_T("     CAST('XXX' AS NVARCHAR2(3)) hfe_group3,") \
		_T("     fi.hfe_type fee_type,") \
		_T("     fi.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_amount price,") \
		_T("     fi.hfe_amount amount,") \
		_T("     0 salary,") \
		_T("     NULL ins_code,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P','R')") \
		_T(" 		      AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'  ") \
		_T("   UNION ALL ") \
		//_T(" --11. Phi khoa duoc, trang bi, tiep huyet") //
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(product_org_id, 'PM', 'DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,    ") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_unitprice price,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 salary,") \
		_T("     NULL ins_code,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category not in ('Y') ") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   ins_code,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   price,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     ins_code,") \
		_T("     descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times,") \
		_T("     price,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 AND i.hfe_status in ('P','R') %s %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   ins_code, descr, price , salary") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere2, szWhere); \
	}
	return szSQL;
}
void CFMPolicyCollectDetailByItem_2017::OnExportSalaryList()
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
	if (!xls.Load(_T("Exports\\CHI TIET TIEN LUONG THEO DANH MUC BH.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringSalary();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[8] > 0)
			{
				xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 4; i < 30; i++)
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

		rs.GetValue(_T("ins_code"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("descr"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("salary"), nTemp);		
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("times"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("price"), nTemp);		
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("e_amount"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("i_amount"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_amount"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 5; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 5; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CHI TIET TIEN LUONG THEO DANH MUCBH2.xls"));
}
int CFMPolicyCollectDetailByItem_2017::OnListCheckAllInvoice()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PT"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
int CFMPolicyCollectDetailByItem_2017::OnListCheckAllRefund()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PC"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
void CFMPolicyCollectDetailByItem_2017::OnExportPatientList()
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
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_THEODANHMUC_BAOHIEM.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

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
		
		rs.GetValue(_T("e_amount"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("i_amount"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("total_amount"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);			
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(3, nRow, _T("T\x1ED5ng \x43\x1ED9ng"), FMT_TEXT, true);		
		xls.SetCellText(4, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_THEODANHMUC_BAOHIEM2.xls"));
}
CString CFMPolicyCollectDetailByItem_2017::GetQueryString_check()
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

	//if (m_szObjectTypeKey == _T("01"))	
	if (m_bServiceOnDemand)	
	{		
		if (m_bSurgery)
		szWhere1.AppendFormat(_T(" AND substr(hfe_group,1,2) in ('B4')"));
		else if (m_bOperation)			
		szWhere1.AppendFormat(_T(" AND substr(hfe_group,1,2) in ('B5')"));	
		if (m_bLaser)
		szWhere.AppendFormat(_T(" AND dept_id='C15'"));
		if (m_bNotLaser)
		szWhere.AppendFormat(_T(" AND dept_id<>'C15'"));
		if (m_bOtherDeptFilter)
		//szWhere1.AppendFormat(_T(" AND (depttype = 'I' OR (depttype = 'E' AND dept = 'TYC' AND roomid IN(33, 34, 35)))"));//
		szWhere1.AppendFormat(_T(" AND (depttype = 'I' OR (depttype = 'E' AND dept in ('TYC','PTTYC') AND orderdept not in ('C8-D') AND roomid IN(0,33, 34, 35)) OR (depttype = 'E' AND dept in ('B5') AND orderdept in ('TYC','PTTYC') AND roomid IN(0,33, 34, 35)))"));
		if (m_bNotinSOD)
		//szWhere1.AppendFormat(_T(" AND (ho_depttype = 'E' AND ho_deptid <> 'TYC' AND ho_roomid NOT IN(33, 34, 35))"));//
		szWhere1.AppendFormat(_T(" AND (depttype = 'E' AND dept not in  ('TYC','PTTYC') AND roomid NOT IN(0,33, 34, 35))"));
		szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		//_T("     f.hfe_cost amount,") \//
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_cost nen phai lay trong hfe_cost//
		_T("     f.hfe_inspaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid END dept_id,    ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --5. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --6. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T("   UNION ALL") \
		//_T(" --7. Phi giuong") \//
		_T("    SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --9. Phi phau thuat - thu thuat") \//		
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		//_T("     f.hfe_group,") \//
		_T("     fl.hfl_groupid AS hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     ho_depttype as depttype,") \
		_T("     HO_PDEPTID as dept,") \
		_T("     HO_DEPTID as orderdept,") \
        _T("     ho_roomid as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		//_T(" 		    AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_deptid = 'TYC' AND ho_roomid  IN(33, 34, 35)))") \//
		_T("   UNION ALL") \
		//_T("   --10. Phi khac o khoa") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --11. Phi khac o tai chinh") \//
		_T("   SELECT fi.hfe_invoiceno,") \
		_T("     fi.hfe_docno,   ") \
		_T("     CASE WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC' THEN fi.HFE_DEPTID END dept_id,") \
		_T("     CAST('XXX' AS NVARCHAR2(3)) hfe_group3,") \
		_T("     fi.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     fi.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_amount amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P','R')") \
		_T(" 		      AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'  ") \
		_T("   UNION ALL ") \
		//_T(" --12. Phi khoa duoc, trang bi, tiep huyet") //
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(product_org_id, 'PM', 'DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,    ") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category not in ('Y') ") \
		_T("   )") \
		_T(" SELECT tbl_invoice.HFE_DOCNO as docno,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) as total_amount") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,i.HFE_DOCNO,") \
		_T("     hfe_class,") \
		_T("     CASE") \
		_T("       WHEN ( fee_type             = 'E'") \
		_T("       AND NVL(hd_outpatient, 'N') = 'Y' )") \
		_T("       OR i.hfe_type               = 'O'") \
		_T("       THEN i.hfe_deptid") \
		_T("       ELSE dept_id") \
		_T("     END dept_id,") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     DECODE('O', i.hfe_type, 'Other fee in dept', descr) descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 AND i.hfe_status in ('P','R') %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY tbl_invoice.hfe_docno") \
		_T(" ORDER BY tbl_invoice.hfe_docno"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1,szWhere); \
		}
	else
	{
	szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_inspaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category not in ('Y')   ") \
		_T("   UNION ALL") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid END dept_id,    ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --5. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --6. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T("   UNION ALL") \
		//_T(" --7. Phi giuong") \//
		_T("    SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','BN')") \
		_T("   UNION ALL") \
		//_T("   --9. Phi phau thuat - thu thuat") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		//_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' THEN  HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  ='B5' AND HO_DEPTID is null THEN HO_PDEPTID else Fl.Hfl_Deptid END dept_id,      ") \//
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --10. Phi khac o khoa") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --11. Phi khac o tai chinh") \//
		_T("   SELECT fi.hfe_invoiceno,") \
		_T("     fi.hfe_docno,   ") \
		_T("     CASE WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC' THEN fi.HFE_DEPTID END dept_id,") \
		_T("     CAST('XXX' AS NVARCHAR2(3)) hfe_group3,") \
		_T("     fi.hfe_type fee_type,") \
		_T("     fi.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_amount amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P','R')") \
		_T(" 		      AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'  ") \
		_T("   UNION ALL ") \
		//_T(" --12. Phi khoa duoc, trang bi, tiep huyet") //
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(product_org_id, 'PM', 'DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,    ") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_cost amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category not in ('Y') ") \
		_T("   )") \
		_T(" SELECT tbl_invoice.HFE_DOCNO as docno,") \
		_T("   ROUND(SUM(e_amount)) e_amount,") \
		_T("   ROUND(SUM(i_amount)) i_amount,") \
		_T("   ROUND(SUM(amount)) as total_amount") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id, i.HFE_DOCNO,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 AND i.hfe_status in ('P','R') %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY  tbl_invoice.hfe_docno") \
		_T(" ORDER BY tbl_invoice.hfe_docno"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere); \
	}
	return szSQL;
}
int CFMPolicyCollectDetailByItem_2017::OnListCheckAllIns()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BH"))==szItemText.Right(2))
	{
		m_wndList.SetCheck(i, true);
	}	
	}
	return 0;
}
int CFMPolicyCollectDetailByItem_2017::OnListUnCheckAllIns()
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
int CFMPolicyCollectDetailByItem_2017::OnListCheckAllSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("QUAN"))==szItemText.Right(4) && (_T("BHQUAN"))!= szItemText.Right(6)  )
	{
		m_wndList.SetCheck(i, true);
	}	
	}
	return 0;
}

int CFMPolicyCollectDetailByItem_2017::OnListUnCheckAllSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("QUAN"))==szItemText.Right(4) && (_T("BHQUAN"))!= szItemText.Right(6)  )
	{
		m_wndList.SetCheck(i, false);
	}	
	}
	return 0;
}
int CFMPolicyCollectDetailByItem_2017::OnListCheckAllInsSolder()
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

int CFMPolicyCollectDetailByItem_2017::OnListUnCheckAllInsSolder()
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

int CFMPolicyCollectDetailByItem_2017::OnListCheckAllBHAB()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BH-AB"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
int CFMPolicyCollectDetailByItem_2017::OnDeleteDataBeforeInsert()
{
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL; 	
	szSQL.Format(_T("Delete from tmp_fa_cash_D12 where userid='%s'"), pMF->m_szUser);
 	int ret = pMF->ExecSQL(szSQL);
	_msg(_T("Đã xóa %ld bản ghi"), ret);
	return 0;
}