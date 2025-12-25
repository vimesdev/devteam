#include "stdafx.h"
#include "FMCollectDetailbyItem_2022.h"
#include "HMSTrackingPatientFeeDialog.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
#define format_date(t) CDate::Convert(t, yyyymmdd, ddmmyyyy)

static long _OnContractLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnContractLoadData();
}
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCollectDetailByItem_2022* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnReportPeriodSelendok();
}
static void _OnENTRSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnENTRSelect();
}
static void _OnReqObsSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnReqObsSelect();
}

/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCollectDetailByItem_2022* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCollectDetailByItem_2022* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCollectDetailByItem_2022* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnOrderByAddNew();
}*/
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022 *)pWnd)->OnObjectTypeSelendok();
}
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnObjectTypeLoadData();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMCollectDetailByItem_2022*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_2022*)pWnd)->OnListDeleteItem();
}

static void _OnChuaTTSelectFnc(CWnd *pWnd)
{
	CFMCollectDetailByItem_2022 *pVw = (CFMCollectDetailByItem_2022 *)pWnd;
	pVw->OnChuaTTSelect();
}
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMCollectDetailByItem_2022 *pVw = (CFMCollectDetailByItem_2022 *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMCollectDetailByItem_2022 *pVw = (CFMCollectDetailByItem_2022 *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMCollectDetailByItem_2022 *pVw = (CFMCollectDetailByItem_2022 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMCollectDetailByItem_2022 *pVw = (CFMCollectDetailByItem_2022 *)pWnd;
	pVw->OnExportSelect();
}
static void _OnServiceOnDemandSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_2022*)pWnd)->OnServiceOnDemandSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_2022*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_2022*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_2022*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMCollectDetailByItem_2022*)pWnd)->OnAllSelect();
}
static void _OnSurgerySelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnSurgerySelect();
}
static void _OnOperationSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnOperationSelect();
}
static void _OnLaserSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnLaserSelect();
}
static void _OnNotLaserSelectFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022*)pWnd)->OnNotLaserSelect();
}
static void _OnOtherDeptFilterSelectFnc(CWnd *pWnd)
{
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnOtherDeptFilterSelect();
}
static void _OnNotinSODSelectFnc(CWnd *pWnd)
{
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnNotinSODSelect();
}
static void _OnNonReqObsSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnNonReqObsSelect();
}

static void _OnGayMeB5SelectFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnGayMeB5Select();
}
static void _OnGayMePTTYCSelectFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnGayMePTTYCSelect();
}

static void _OnGioiThieuKXDSelectFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnGioiThieuKXDSelect();
}
static void _OnGioiThieuPTTYCSelectFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnGioiThieuPTTYCSelect();
}
static void _OnGioiThieuKhacSelectFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnGioiThieuKhacSelect();
}

static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_2022*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_2022*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_2022*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_2022*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMCollectDetailByItem_2022*)pWnd)->OnCancelFMInsuranceReceiptSummary();
} 
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}
static int _OnListCheckAllPTTYCDVFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllPTTYCDV();
	return 0;
}

static int _OnListCheckAllPTTYCBHFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllPTTYCBH();
	return 0;
}

static int _OnListUnCheckAllPTTYCBHFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnListUnCheckAllPTTYCBH();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllTYC();
	return 0;
}

static int _OnListCheckAllDVFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllDV();
	return 0;
}
static int _OnListCheckAllDVABFnc(CWnd *pWnd)
{
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllDVAB();
	return 0;
}
static int _OnListCheckAllCardTYCFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllCardTYC();
	return 0;
}

static int _OnListCheckAllCardPTTYCFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllCardPTTYC();
	return 0;
}

static int _OnListCheckAllCardTYC_PTTYC_DVFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllCardTYC_PTTYC_DV();
	return 0;
}

static int _OnListCheckAllCardTYC_PTTYC_BHFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAllCardTYC_PTTYC_BH();
	return 0;
}

static void _OnI131SelectFnc(CWnd *pWnd)
{
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnI131Select();
}
static void _OnHTSSSelectFnc(CWnd *pWnd)
{
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnHTSSSelect();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnRoomLoadData();
}

static long _OnFilterLoadDataFnc(CWnd *pWnd)
{
	return ((CFMCollectDetailByItem_2022 *)pWnd)->OnFilterLoadData();
}

static int _OnListCheckAll_TYC_PTTYC_DVFnc(CWnd *pWnd){
	((CFMCollectDetailByItem_2022*)pWnd)->OnListCheckAll_TYC_PTTYC_DV();
	return 0;
}

static void _OnDaduyet_chuathuSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnDaduyet_chuathuSelect();
}
static void _OnDaduyet_dathuSelectFnc(CWnd *pWnd){
	 ((CFMCollectDetailByItem_2022*)pWnd)->OnDaduyet_dathuSelect();
}

CFMCollectDetailByItem_2022::CFMCollectDetailByItem_2022(CWnd *pParent)
{	
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMCollectDetailByItem_2022::~CFMCollectDetailByItem_2022()
{
}
void CFMCollectDetailByItem_2022::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 486, 535);
	m_wndOrderBy.Create(this,0, 0, -17, 0); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 0, 0, -17, 0);
	m_wndYearLabel.Create(this, _T("Year"), 10, 29, 90, 54);
	m_wndYear.Create(this,95, 29, 230, 54); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 29, 340, 54);
	m_wndReportPeriod.Create(this,350, 29, 480, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 230, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 59, 340, 84);
	m_wndToDate.Create(this,350, 59, 480, 84); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 89, 90, 114);
	m_wndClerk.Create(this,95, 89, 230, 114); 
	m_wndStatusLabel.Create(this, _T("Status"), 240, 89, 340, 114);
	m_wndStatus.Create(this,350, 89, 480, 114); 
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 10, 119, 90, 144);
	m_wndObjectType.Create(this,95, 119, 480, 144); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 149, 90, 174);
	m_wndDept.Create(this,95, 149, 480, 174); 
	m_wndList.Create(this,10, 179, 485, 406); 
	m_wndDaduyet_chuathu.Create(this, _T("Đã duyệt kết quả, chưa nộp quỹ"), 10, 411, 246, 436);
	m_wndDaduyet_dathu.Create(this, _T("Đã duyệt kết quả, đã nộp quỹ"), 10, 442, 246, 467);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 10, 473, 140, 498);
	m_wndFilterLabel.Create(this, _T("Bộ lọc báo cáo"), 11, 504, 103, 529);
	m_wndFilter.Create(this,108, 504, 484, 529); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 539, 85, 564);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 539, 170, 564);
	m_wndPrint.Create(this, _T("&Print"), 320, 539, 400, 564);
	m_wndExport.Create(this, _T("Export XLS"), 405, 539, 485, 564);
	m_wndHitechMachine.EnableWindow(false);	
}
void CFMCollectDetailByItem_2022::OnInitializeComponents(){
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
	m_wndList.InsertColumn(5, _T("cashbook_id"), CFMT_TEXT, 100);
	m_wndList.SetCheckBox(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Alias"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(2, _T("Name"), CFMT_TEXT, 400);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoom.InsertColumn(2, _T("Dept"), CFMT_TEXT | CFMT_CENTER, 80);
	m_wndRoom.SetCheckBox(true);

	m_wndFilter.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndFilter.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);

	m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);
	m_wndContract.InsertColumn(2, _T("Company"), CFMT_TEXT, 250);



	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMCollectDetailByItem_2022::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
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

	m_wndDaduyet_chuathu.SetEvent(WE_CLICK, _OnDaduyet_chuathuSelectFnc);
	m_wndDaduyet_dathu.SetEvent(WE_CLICK, _OnDaduyet_dathuSelectFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);

	m_wndList.AddEvent(3, _T("Check thẻ TYC"), _OnListCheckAllCardTYCFnc);
	m_wndList.AddEvent(4, _T("Check All thẻ PTTYC"), _OnListCheckAllCardPTTYCFnc);

	m_wndList.AddEvent(5, _T("Check All DV PTTYC"), _OnListCheckAllPTTYCDVFnc);
	m_wndList.AddEvent(6, _T("Check All BH PTTYC"), _OnListCheckAllPTTYCBHFnc);
	m_wndList.AddEvent(7, _T("UnCheck All BH PTTYC"), _OnListUnCheckAllPTTYCBHFnc);

	m_wndList.AddEvent(8, _T("Check All DV"), _OnListCheckAllDVFnc);
	m_wndList.AddEvent(9, _T("Check All DV-AB"), _OnListCheckAllDVABFnc);

	m_wndList.AddEvent(10, _T("Check All thẻ TYC_PTTYC Dịch vụ"), _OnListCheckAllCardTYC_PTTYC_DVFnc);
	m_wndList.AddEvent(11, _T("Check All thẻ TYC_PTTYC Bảo hiểm"), _OnListCheckAllCardTYC_PTTYC_BHFnc);

	m_wndList.AddEvent(12, _T("Check All Dịch vụ TYC_PTTYC"), _OnListCheckAll_TYC_PTTYC_DVFnc);


	m_wndList.AddEvent(10, _T("Search"), _OnListSearchItemFnc);
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

	m_wndGayMeB5.SetEvent(WE_CLICK, _OnGayMeB5SelectFnc);
	m_wndGayMePTTYC.SetEvent(WE_CLICK, _OnGayMePTTYCSelectFnc);

	m_wndGioiThieuKXD.SetEvent(WE_CLICK, _OnGioiThieuKXDSelectFnc);
	m_wndGioiThieuPTTYC.SetEvent(WE_CLICK, _OnGioiThieuPTTYCSelectFnc);
	m_wndGioiThieuKhac.SetEvent(WE_CLICK, _OnGioiThieuKhacSelectFnc);

	m_wndENTR.SetEvent(WE_CLICK, _OnENTRSelectFnc);
	m_wndReqObs.SetEvent(WE_CLICK, _OnReqObsSelectFnc);
	m_wndNonReqObs.SetEvent(WE_CLICK, _OnNonReqObsSelectFnc);
	m_wndI131.SetEvent(WE_CLICK, _OnI131SelectFnc);
	m_wndHTSS.SetEvent(WE_CLICK, _OnHTSSSelectFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndFilter.SetEvent(WE_LOADDATA, _OnFilterLoadDataFnc);
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
void CFMCollectDetailByItem_2022::OnDoDataExchange(CDataExchange* pDX){
	//DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
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
	//DDX_Check(pDX, m_wndServiceOnDemand.GetDlgCtrlID(), m_bServiceOnDemand);
	//DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	//DDX_Check(pDX, m_wndSurgery.GetDlgCtrlID(), m_bSurgery);
	//DDX_Check(pDX, m_wndOperation.GetDlgCtrlID(), m_bOperation);
	//DDX_Check(pDX, m_wndLaser.GetDlgCtrlID(), m_bLaser);
	//DDX_Check(pDX, m_wndNotLaser.GetDlgCtrlID(), m_bNotLaser);
	//DDX_Check(pDX, m_wndChuaTT.GetDlgCtrlID(), m_bChuaTT);
	//DDX_Check(pDX, m_wndOtherDeptFilter.GetDlgCtrlID(), m_bOtherDeptFilter);
	//DDX_Check(pDX, m_wndNotinSOD.GetDlgCtrlID(), m_bNotinSOD);
	//DDX_Check(pDX, m_wndNonReqObs.GetDlgCtrlID(), m_bNonReqObs);

	//DDX_Check(pDX, m_wndGayMeB5.GetDlgCtrlID(), m_bGayMeB5);
	//DDX_Check(pDX, m_wndGayMePTTYC.GetDlgCtrlID(), m_bGayMePTTYC);

	//DDX_Check(pDX, m_wndGioiThieuKXD.GetDlgCtrlID(), m_bGioiThieuKXD);
	//DDX_Check(pDX, m_wndGioiThieuPTTYC.GetDlgCtrlID(), m_bGioiThieuPTTYC);
	//DDX_Check(pDX, m_wndGioiThieuKhac.GetDlgCtrlID(), m_bGioiThieuKhac);

	//DDX_Check(pDX, m_wndENTR.GetDlgCtrlID(), m_bENTR);
	//DDX_Check(pDX, m_wndReqObs.GetDlgCtrlID(), m_bReqObs);
	//DDX_Check(pDX, m_wndI131.GetDlgCtrlID(), m_bI131);
	//DDX_Check(pDX, m_wndHTSS.GetDlgCtrlID(), m_bHTSS);
	//DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndFilter.GetDlgCtrlID(), m_szFilterKey);
	DDX_Check(pDX, m_wndDaduyet_chuathu.GetDlgCtrlID(), m_bDaduyet_chuathu);
	DDX_Check(pDX, m_wndDaduyet_dathu.GetDlgCtrlID(), m_bDaduyet_dathu);

}
void CFMCollectDetailByItem_2022::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMCollectDetailByItem_2022::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMCollectDetailByItem_2022::SetDefaultValues(){
	m_szContractKey.Empty();
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
	m_szObjectTypeKey = _T("01");
	m_nPatientType = 3;

	m_bENTR=FALSE;
	m_bReqObs=FALSE;
	m_bNonReqObs=FALSE;
	m_bI131=FALSE;
	m_bHTSS=FALSE;
	m_szRoomKey.Empty();
	m_szFilterKey.Empty();
	m_bDaduyet_chuathu=FALSE;
	m_bDaduyet_dathu=FALSE;
}

int CFMCollectDetailByItem_2022::SetMode(int nMode){
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
		m_wndStatus.SetReadOnly(true);
 		UpdateData(FALSE);
 		return nOldMode;
}

/*void CFMCollectDetailByItem_2022::OnYearChange(){
	
} */
/*void CFMCollectDetailByItem_2022::OnYearSetfocus(){
	
} */
/*void CFMCollectDetailByItem_2022::OnYearKillfocus(){
	
} */
int CFMCollectDetailByItem_2022::OnYearCheckValue(){
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

void CFMCollectDetailByItem_2022::OnDaduyet_chuathuSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
}
	void CFMCollectDetailByItem_2022::OnDaduyet_dathuSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
}
 
void CFMCollectDetailByItem_2022::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
void CFMCollectDetailByItem_2022::OnHTSSSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

void CFMCollectDetailByItem_2022::OnENTRSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMCollectDetailByItem_2022::OnReqObsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMCollectDetailByItem_2022::OnNonReqObsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
long CFMCollectDetailByItem_2022::OnRoomLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT HRL_ID as id, HRL_NAME as name, HRL_DEPTID as dept FROM Hms_Roomlist WHERE HRL_DEPTID in ('TYC','C1.1') %s ORDER BY HRL_DEPTID, hrl_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("dept")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}
long CFMCollectDetailByItem_2022::OnFilterLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	m_wndFilter.AddItems(_T("***"), _T("*****Các trường hợp mở rộng*****"), NULL);
	//m_wndFilter.AddItems(_T("CLS_PTTYC"), _T("Cận lâm sàng theo yêu cầu"), NULL);
	//m_wndFilter.AddItems(_T("CLS_GIUONG_PTTYC"), _T("Cận lâm sàng - giường bệnh khu nội khoa và điều trị trong ngày"), NULL);
	return 0;
}
 
void CFMCollectDetailByItem_2022::OnReportPeriodSelendok(){
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

/*void CFMCollectDetailByItem_2022::OnReportPeriodSetfocus(){
	
}*/
/*void CFMCollectDetailByItem_2022::OnReportPeriodKillfocus(){
	
}*/
long CFMCollectDetailByItem_2022::OnReportPeriodLoadData(){
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

/*void CFMCollectDetailByItem_2022::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMCollectDetailByItem_2022::OnFromDateChange(){
	
} */
/*void CFMCollectDetailByItem_2022::OnFromDateSetfocus(){
	
} */
/*void CFMCollectDetailByItem_2022::OnFromDateKillfocus(){
	
} */
int CFMCollectDetailByItem_2022::OnFromDateCheckValue()
{
	OnListLoadData();
	return 0;
}
void CFMCollectDetailByItem_2022::OnChuaTTSelect()
{
 
}

void CFMCollectDetailByItem_2022::OnI131Select()
{
	OnListLoadData();	
}
 
/*void CFMCollectDetailByItem_2022::OnToDateChange(){
	
} */
/*void CFMCollectDetailByItem_2022::OnToDateSetfocus(){
	
} */
/*void CFMCollectDetailByItem_2022::OnToDateKillfocus(){
	
} */
int CFMCollectDetailByItem_2022::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMCollectDetailByItem_2022::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMCollectDetailByItem_2022::OnClerkSelendok(){
	 
}
/*void CFMCollectDetailByItem_2022::OnClerkSetfocus(){
	
}*/
/*void CFMCollectDetailByItem_2022::OnClerkKillfocus(){
	
}*/
long CFMCollectDetailByItem_2022::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMCollectDetailByItem_2022::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMCollectDetailByItem_2022::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMCollectDetailByItem_2022::OnStatusSelendok(){
	 OnListLoadData();
}
void CFMCollectDetailByItem_2022::OnSurgerySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bSurgery)
			m_bOperation=FALSE;	
	UpdateData(FALSE);
}
void CFMCollectDetailByItem_2022::OnOperationSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bOperation)
			m_bSurgery=FALSE;	
	UpdateData(FALSE);
}
	void CFMCollectDetailByItem_2022::OnOtherDeptFilterSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMCollectDetailByItem_2022::OnNotinSODSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMCollectDetailByItem_2022::OnGayMeB5Select(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGayMeB5)
			m_bGayMePTTYC=FALSE;	
	UpdateData(FALSE);
}
void CFMCollectDetailByItem_2022::OnGayMePTTYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGayMePTTYC)
			m_bGayMeB5=FALSE;	
	UpdateData(FALSE);
}

void CFMCollectDetailByItem_2022::OnLaserSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bLaser)
			m_bNotLaser=FALSE;	
	UpdateData(FALSE);
}
void CFMCollectDetailByItem_2022::OnNotLaserSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bNotLaser)
			m_bLaser=FALSE;	
	UpdateData(FALSE);
}

void CFMCollectDetailByItem_2022::OnGioiThieuKXDSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGioiThieuKXD)
			{
				m_bGioiThieuPTTYC=FALSE;	
				m_bGioiThieuKhac=FALSE;	
			}
	UpdateData(FALSE);
}
void CFMCollectDetailByItem_2022::OnGioiThieuPTTYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGioiThieuPTTYC)
		{
			m_bGioiThieuKXD=FALSE;	
			m_bGioiThieuKhac=FALSE;	
		}
	UpdateData(FALSE);
}
void CFMCollectDetailByItem_2022::OnGioiThieuKhacSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bGioiThieuKhac)
		{
			m_bGioiThieuKXD=FALSE;	
			m_bGioiThieuPTTYC=FALSE;	
		}
	UpdateData(FALSE);
}
/*void CFMCollectDetailByItem_2022::OnStatusSetfocus(){
	
}*/
/*void CFMCollectDetailByItem_2022::OnStatusKillfocus(){
	
}*/
long CFMCollectDetailByItem_2022::OnStatusLoadData(){
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
/*void CFMCollectDetailByItem_2022::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMCollectDetailByItem_2022::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMCollectDetailByItem_2022::OnOrderBySelendok(){
	 
}
/*void CFMCollectDetailByItem_2022::OnOrderBySetfocus(){
	
}*/
/*void CFMCollectDetailByItem_2022::OnOrderByKillfocus(){
	
}*/
long CFMCollectDetailByItem_2022::OnOrderByLoadData(){
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

void CFMCollectDetailByItem_2022::OnObjectTypeSelendok(){
	OnListLoadData();
}

long CFMCollectDetailByItem_2022::OnObjectTypeLoadData()
{
	m_wndObjectType.AddItems(_T("01"), _T("Dịch vụ"), NULL);
	m_wndObjectType.AddItems(_T("02"), _T("Bảo hiểm"), NULL);
	m_wndObjectType.AddItems(_T("03"), _T("Tất cả"), NULL);
	return 3;
}

/*void CFMCollectDetailByItem_2022::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

int CFMCollectDetailByItem_2022::OnListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
		if ((_T("DVYC"))==szItemText || (_T("THE-DV-YC"))==szItemText)
		{
			m_wndList.SetCheck(i, true);
			nCheck++;
		}
		else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMCollectDetailByItem_2022::OnListCheckAllPTTYCDV()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("DV-PTTYC"))==szItemText || (_T("THE-DV-PTTYC"))==szItemText)
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMCollectDetailByItem_2022::OnListCheckAllPTTYCBH()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("BH-PTTYC"))==szItemText || (_T("THE-BH-PTTYC"))==szItemText)	
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMCollectDetailByItem_2022::OnListUnCheckAllPTTYCBH()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("BH-PTTYC"))==szItemText || (_T("THE-BH-PTTYC"))==szItemText)	
	{
		m_wndList.SetCheck(i, false);
		nCheck++;
	}
	else m_wndList.SetCheck(i, true);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMCollectDetailByItem_2022::OnListCheckAllPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PTTYC"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMCollectDetailByItem_2022::OnListCheckAllDV()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DV"))==szItemText.Right(2))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMCollectDetailByItem_2022::OnListCheckAllDVAB()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DV-AB"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMCollectDetailByItem_2022::OnListCheckAllCardTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;

	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("THE-DV-YC"))==szItemText.Right(9) || (_T("THE-BH-YC"))==szItemText.Right(9))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMCollectDetailByItem_2022::OnListCheckAllCardPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("THE-DV-PTTYC"))==szItemText || (_T("THE-BH-PTTYC"))==szItemText)	
	{
		m_wndList.SetCheck(i, true);
		nCheck++;

	}	
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMCollectDetailByItem_2022::OnListCheckAllCardTYC_PTTYC_DV()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("THE-DV-YC"))==szItemText || (_T("THE-DV-PTTYC"))==szItemText)	
	{
		m_wndList.SetCheck(i, true);
		nCheck++;

	}	
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMCollectDetailByItem_2022::OnListCheckAllCardTYC_PTTYC_BH()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("THE-BH-YC"))==szItemText || (_T("THE-BH-PTTYC"))==szItemText)	
	{
		m_wndList.SetCheck(i, true);
		nCheck++;

	}	
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMCollectDetailByItem_2022::OnListCheckAll_TYC_PTTYC_DV()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("DVYC"))==szItemText || (_T("DV-PTTYC"))==szItemText)	
	{
		m_wndList.SetCheck(i, true);
		nCheck++;

	}	
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

void CFMCollectDetailByItem_2022::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}


long CFMCollectDetailByItem_2022::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, SD_ID_ALIAS as alias, sd_name as name FROM sys_dept WHERE sd_type IN ('XN') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("alias")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

void CFMCollectDetailByItem_2022::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMCollectDetailByItem_2022::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMCollectDetailByItem_2022::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMCollectDetailByItem_2022::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMCollectDetailByItem_2022::OnListLoadData(){
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
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','BH-PTTYC', 'THE-DV-YC','BHYC', 'THE-DV-PTTYC', 'THE-BH-YC', 'THE-BH-PTTYC', 'CK-DV-YC', 'CK-BH-YC','CK-DV-PTTYC', 'CK-BH-PTTYC')"));
	else
		/*if (!m_szObjectTypeKey.IsEmpty())
		{
			tmpStr = m_szObjectTypeKey==_T("01")?_T("DV"):m_szObjectTypeKey==_T("02")?_T("BH"):_T("QU");
			szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) in ('%s') AND fac_cashbook_id not in ('DVYC','DV-PTTYC')"), tmpStr);
		}*/		
		szWhere.AppendFormat(_T(" AND (substr(fac_cashbook_id, 1, 2) = 'DV' OR fac_cashbook_id='THE-DV' OR fac_cashbook_id ='CK-DV') AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, FAC_CASHBOOK_ID as cashbook_id,") \
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
			rs.GetValue(_T("cashbook_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	if (m_bServiceOnDemand)
	{
		OnContractLoadData();
	}
	return nCount;	
}

void CFMCollectDetailByItem_2022::OnMarkAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMCollectDetailByItem_2022::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMCollectDetailByItem_2022::OnServiceOnDemandSelect(){
	OnListLoadData();
}

void CFMCollectDetailByItem_2022::OnInpatientSelect(){
	
}
void CFMCollectDetailByItem_2022::OnOutpatientSelect(){
	
}
void CFMCollectDetailByItem_2022::OnDepositSelect(){
	
}
void CFMCollectDetailByItem_2022::OnAllSelect()
{
	
}
 
 
int CFMCollectDetailByItem_2022::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMCollectDetailByItem_2022::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMCollectDetailByItem_2022::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMCollectDetailByItem_2022::OnSaveFMInsuranceReceiptSummary(){
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
int CFMCollectDetailByItem_2022::OnCancelFMInsuranceReceiptSummary(){
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
int CFMCollectDetailByItem_2022::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"

void CFMCollectDetailByItem_2022::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);

	TranslateString(_T("In chi tiết theo danh mục"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	/*TranslateString(_T("In bảng lương dịch vụ"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("Thanh toán Booking Care"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);	
	
	TranslateString(_T("In chi tiết theo bệnh nhân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);		

	TranslateString(_T("Thanh toán CASVN"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 5, tmpStr);*/
	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint2ndver();
			break;
		case 2:
			OnPrintSalaryList();
			break;
		case 3:
			OnPrintBookingCare();
			break;
		case 4:
			//OnPrintDetailByPatient();
			OnPrintDetailByPatient_v2();
			break;
		case 5:
			OnPrintCASVN();
			break;
	}
}

void CFMCollectDetailByItem_2022::OnPrint1stver()
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

void CFMCollectDetailByItem_2022::OnPrint2ndver()
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
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_MAU2.RPT");
	if (!rpt.Init(szReportName))
		return;
	
	if (!m_szRoomKey.IsEmpty())
	{
		szSQL = GetQueryString_ByRoom();	
	}
	else
	szSQL = GetQueryString();
	_msg(_T("%s"), szSQL);
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
	data_name.Add(_T("price"));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2022"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}



void CFMCollectDetailByItem_2022::OnPrintSalaryList()
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
	data_name.Add(_T("totalsalary"));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2022"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}


void CFMCollectDetailByItem_2022::OnPrint2ndver_Ins()
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2022"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMCollectDetailByItem_2022::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export chi tiết theo danh mục đã thực hiện"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);		

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport();
			break;		
	}	
}
void CFMCollectDetailByItem_2022::OnExport()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[36], nGroupTotal[36];
	for(int i = 0; i < 36; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\CT-HIS-LIS-COMPARE.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục /Export/Template"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_detail();
	rs.ExecSQL(szSQL);
	_msg(_T("%s"), szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("khoa_thuchien"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[9] > 0)
			{
				xls.SetCellText(8, nRow, _T("Cộng"), FMT_TEXT, true);

				for(int i = 9; i < 36; i++)
				{
					if (nGroupTotal[i] > 0)
					{
						xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_CURRENCY1, true);
						nTotal[i] += nGroupTotal[i];
					}
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
		
		rs.GetValue(_T("ngaythuchien"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sidid"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("sophieu"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("sophieucon"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("mabenhnhan"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("descr"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		
		rs.GetValue(_T("sotien"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("khoa_thuchien"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diachi"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoayeucau"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bacsi"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);
	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[9] > 0)
	{
		xls.SetCellText(8, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 9; i < 36; i++)
		{
			if (nGroupTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_CURRENCY1, true);
				nTotal[i] += nGroupTotal[i];
			}
		}
		nRow++;
	}

	if (nTotal[9] > 0)
	{
		xls.SetCellText(8, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 9; i < 36; i++)
		{
			if (nTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_CURRENCY1, true);
			}
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CT-HIS-LIS-COMPARE2.xls"));
}
void CFMCollectDetailByItem_2022::OnExportByRefund()
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
CString CFMCollectDetailByItem_2022::GetQueryStringtyc()
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
		szWhere.AppendFormat(_T(" AND (substr(fl.hfl_groupid,1,2) in ('B4') OR fl.hfl_feeid IN (select ss_code from sys_sel where ss_id='thuthuat_like_phauthuat'))"));
		else if (m_bOperation)			
		szWhere.AppendFormat(_T(" AND substr(fl.hfl_groupid,1,2) in ('B5') AND fl.hfl_feeid NOT IN (select ss_code from sys_sel where ss_id='thuthuat_like_phauthuat')"));

	if (m_bLaser)
		szWhere1.AppendFormat(_T(" AND dept_id='C15'"));
	if (m_bNotLaser)
		szWhere1.AppendFormat(_T(" AND dept_id<>'C15'"));

		if (m_bOtherDeptFilter)
        //szWhere.AppendFormat(_T(" AND (ho_depttype = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_roomid  IN(33, 34, 35)))"));//
		szWhere.AppendFormat(_T(" AND (nvl(ho_depttype, 'I') = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0,33, 34, 35, 86)) OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)) OR (ho_depttype = 'E' AND ho_deptid in ('TYC') AND ho_roomid IN(10,37, 86)))"));
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

	if(m_bENTR)
		szWhere.AppendFormat(_T(" AND ho_roomid in (1,20,29) and ho_deptid='TYC'"));
	if(m_bReqObs)
		//szWhere.AppendFormat(_T(" AND ho_pdeptid in ('PTTYC','TYC') and fl.HFL_OBSTETRIC='Y'"));
		szWhere.AppendFormat(_T(" AND (HO_DEPTID='PTTYC') and (HO_PDEPTID in ('PTTYC','B5')) and fl.HFL_OBSTETRIC='Y'"));
	if(m_bNonReqObs)
		//szWhere.AppendFormat(_T(" AND ho_pdeptid in ('PTTYC','TYC') and fl.HFL_OBSTETRIC='Y'"));
		szWhere.AppendFormat(_T(" AND NVL(fl.hfl_obstetric,'N') <> 'Y'"));

	if(m_bI131)
		//szWhere.AppendFormat(_T(" AND ho_pdeptid in ('PTTYC','TYC') and fl.HFL_OBSTETRIC='Y'"));
		szWhere.AppendFormat(_T(" AND hfl_feeid in ('B250013190','B250020386', 'B250010286')"));

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
			_T("   groupid,Objecttype,") \
			_T("   idx,status, SUM(tienan) as tienan") \
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
			_T("     CASE WHEN substr(fl.hfl_groupid, 1, 2) IN ('B4') THEN ho_amount WHEN substr(fl.hfl_groupid, 1, 2) IN ('B5') THEN f.hfe_cost END AS giagoc,") \
			_T("     f.hfe_insprice           AS giabaohiem,") \
			_T("     HMS_OPERATION_INPKG_AMOUNT(ho_docno, ho_idx) AS tronggoi,") \
			
			_T("     case when hoc_amount>0 then HMS_OPERATION_FOOD_AMOUNT(ho_docno, ho_idx)/5 else HMS_OPERATION_FOOD_AMOUNT(ho_docno, ho_idx) end AS tienan,") \

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
			_T("     f.hfe_status as status") \
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
			_T("   WHERE f.hfe_status in ('P','R') AND f.Hfe_type='O' AND f.hfe_category in ('N','BQP','XX', 'P')") \
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
			_T("   trongoi,") \
			_T("   giabaohiem,") \
			_T("   pobject,status, tienan") \
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

CString CFMCollectDetailByItem_2022::GetQueryStringtycbyrefund()
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
		szWhere.AppendFormat(_T(" AND (nvl(ho_depttype, 'I') = 'I' OR (ho_depttype = 'E' AND ho_pdeptid in ('TYC','PTTYC') AND ho_deptid not in ('C8-D') AND ho_roomid  IN(0,33, 34, 35)) OR (ho_depttype= 'E' AND ho_pdeptid IN ('B5') AND ho_deptid IN ('TYC','PTTYC') AND ho_roomid IN(0,33, 34, 35)))"));
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

CString CFMCollectDetailByItem_2022::GetQueryString()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2, tmpStr;
	CString szOrderBy, szReceiptStr;

	if (!m_szDeptKey.IsEmpty())

		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	
	if (m_bDaduyet_chuathu)
	{
		//szWhere.AppendFormat(_T(" AND f.hfe_status NOT IN ('P','C') "));
		szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') not in ('DV-AB','DV', 'THE-DV', 'CK-DV','BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG', 'THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));	

		if (m_szObjectTypeKey == _T("01"))
		{
			szWhere.AppendFormat(_T(" AND f.HFE_OBJECT = 7"));		
		}
		else if (m_szObjectTypeKey == _T("02"))
		{
			szWhere.AppendFormat(_T(" AND f.HFE_OBJECT not in (1,3,6,7,8,13)"));		
		}
		else if (m_szObjectTypeKey == _T("03"))
		{

			szWhere.AppendFormat(_T(" AND 1=1"));
		}
	}
	else if (m_bDaduyet_dathu)
	{
		//szWhere.AppendFormat(_T(" AND f.hfe_status = 'P' "));
		//szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') in ('DV-AB','DV', 'THE-DV', 'CK-DV','BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG', 'THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));		
		szWhere.AppendFormat(_T(" and FAC_POSTED ='Y' "));

		if (m_szObjectTypeKey == _T("01"))
		{
			szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') in ('DV-AB','DV', 'THE-DV', 'CK-DV')"));
		}
		else if (m_szObjectTypeKey == _T("02"))
		{
			szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG', 'THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));		
		}
		else if (m_szObjectTypeKey == _T("03"))
		{			

			szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') in ('DV-AB','DV', 'THE-DV', 'CK-DV','BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG', 'THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));		
		}

	}	
	else
	{
	
	}
	szSQL.Format(_T(" SELECT") \
	_T(" khoa_thuchien as dept_id, descr, salary, ") \
	_T(" SUM(times) as times,") \
	_T(" price as price,") \
	_T(" SUM(phongkham) as e_amount,") \
	_T(" SUM(noitru) as i_amount,") \
	_T(" SUM(phongkham+noitru) as total_amount") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT ") \
	_T("     f.hfe_docno,") \
	_T("     CASE") \
	_T("       WHEN f.hfe_type     IN ('P','T')     ") \
	_T("       AND HPC_PDEPTID     IS NOT NULL") \
	_T("       THEN HPC_PDEPTID") \
	_T("       ELSE Fl.Hfl_Deptid") \
	_T("     END khoa_thuchien,") \
	_T("     f.hfe_group,") \
	_T("     f.hfe_type fee_type,") \
	_T("     f.hfe_desc descr,") \
	_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
	_T("     f.hfe_quantity times,") \
	_T("     f.hfe_unitprice AS price,") \
	_T("     CASE WHEN f.hfe_class='E' THEN f.hfe_cost ELSE 0 END as phongkham,") \
	_T("     CASE WHEN f.hfe_class<>'E' THEN f.hfe_cost ELSE 0 END as noitru,") \
	_T("     fl.hfl_salary salary,") \
	_T("     0 fee_id") \
	_T("   FROM hms_fee f") \
	_T("   LEFT JOIN hms_fee_list fl") \
	_T("   ON (hfe_itemid  =fl.hfl_feeid") \
	_T("   AND f.hfe_type IN ('P', 'T'))") \
	_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P2") \
	_T("   ON ( f.hfe_docno     = hpc_docno") \
	_T("   AND f.hfe_orderid    = hpc_orderid") \
	_T("   AND f.HFE_ORDERLINE = HPCL_ORDERLINEID") \
	_T("   AND f.hfe_type      IN ('P', 'T'))") \
	_T("   LEFT JOIN HMS_FEE_INVOICE_VIEW_V2_BH fe ON (f.hfe_docno=fe.hfe_docno AND f.hfe_invoiceno=fe.hfe_invoiceno)") \
	_T("   LEFT JOIN fa_cash ON (fe.hfe_cash_id=fac_cash_id)") \
	_T("   WHERE  HPC_PERFORMDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T("   AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T("   AND hpc_status='T' ") \
	_T("   AND f.hfe_type      IN ('P','T')") \
	_T("   AND f.hfe_category  IN ('N','BQP','XX','P', 'COV')") \
	_T("   AND f.hfe_status <> 'C'  AND hpc_deptid NOT IN ('TYC', 'PTTYC') %s") \
	_T("   )") \
	_T("   WHERE 1=1 %s") \
	_T("   GROUP BY khoa_thuchien, descr, salary, price") \
	_T("   ORDER BY khoa_thuchien, descr"), m_szFromDate, m_szToDate, szWhere, szWhere1);
	
	return szSQL;
}

CString CFMCollectDetailByItem_2022::GetQueryString_patientdtl()
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
		/*szSQL.Format(_T("WITH tbl_fee AS (SELECT    hfe_invoiceno, ") \
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
		_T("                      hfe_d	eptid dept_id, ") \
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
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr "), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);	*/
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
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		/*_T("   UNION ALL") \
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \*/
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
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
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//		
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   doc_no, patient_name") \
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
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("	 i.hfe_docno as doc_no, get_patientname(i.hfe_docno) as patient_name") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, doc_no, patient_name") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, doc_no"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1,szWhere); \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')   ") \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
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
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		_T("     hfe_unitprice as price,") \
		//_T("     f.hfe_patpaid amount,") \//
		_T(" CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_patpaid end as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid as price,") \
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		//_T(" 		    AND hfe_category in ('N','BQP','XX') ") \//
		_T(" AND (hfe_category   IN ('N','BQP','XX') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   price,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary, doc_no, patient_name") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times, tbl_fee.price,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary,") \
		_T("	 i.hfe_docno as doc_no, get_patientname(i.hfe_docno) as patient_name") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, price, doc_no, patient_name") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, doc_no"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere);
	}
	return szSQL;
}

void CFMCollectDetailByItem_2022::BuildQueryString(CString& szSQL){
	//data_fitler
	//data_sort
	//getquerystring
}

void CFMCollectDetailByItem_2022::data_filter(CString& szWhere){
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

void CFMCollectDetailByItem_2022::data_sort(CString& szSort){
	CString tmpStr;
	m_mOrderBy.Lookup(tmpStr, szSort);
}

void CFMCollectDetailByItem_2022::prototype_condition(CString szCondition, CString szField, CString& szWhere){
	if (!szCondition.IsEmpty())
		if (szCondition.Find(',') != -1)
			szWhere.AppendFormat(_T(" AND %s IN (%s)"), szField, szCondition);
		else
			szWhere.AppendFormat(_T(" AND %s = '%s'"), szField, szCondition);
}

CString CFMCollectDetailByItem_2022::GetQueryString_1(){
	CString szSQL;

	return szSQL;
}

BOOL CFMCollectDetailByItem_2022::ParseALargeFile(HWND hwndParent, LPTSTR lpszFileName) 
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
CString CFMCollectDetailByItem_2022::GetQueryStringSalary()
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
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL AS depttype,") \
		_T("     NULL AS dept,") \
		_T("     NULL AS orderdept,") \
		_T("     0    AS roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     dy.hdbl_salary salary,") \
		_T("     hfe_quantity*dy.hdbl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist_09082018 dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) and dy.hdbl_deptid=hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category in ('N','BQP','XX') ") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary,SUM(totalsalary) totalsalary") \
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
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary, tbl_fee.totalsalary") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, totalsalary ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')   ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     dy.hdbl_salary salary,") \
		_T("     hfe_quantity*dy.hdbl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist_09082018 dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) and dy.hdbl_deptid=hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List_09082018 fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category in ('N','BQP','XX') ") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary,SUM(totalsalary) totalsalary") \
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
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary, tbl_fee.totalsalary") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, totalsalary") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere); \
	}
	return szSQL;
	//_msg(_T("%s"),szSQL);
}
CString CFMCollectDetailByItem_2022::GetQueryStringSalary1()
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
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL AS depttype,") \
		_T("     NULL AS dept,") \
		_T("     NULL AS orderdept,") \
		_T("     0    AS roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     dy.hdbl_salary salary,") \
		_T("     hfe_quantity*dy.hdbl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) and dy.hdbl_deptid=hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category in ('N','BQP','XX') ") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary,SUM(totalsalary) totalsalary") \
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
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary, tbl_fee.totalsalary") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, totalsalary ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')   ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4. Phí n?i soi c?a khoa A3 & C8-D b? l?n, nên khi chua th?c hi?n thì d? là chua th?c hi?n") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
        _T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     dy.hdbl_salary salary,") \
		_T("     hfe_quantity*dy.hdbl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) and dy.hdbl_deptid=hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     hfe_quantity*fl.hfl_salary totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 totalsalary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 		    AND hfe_category in ('N','BQP','XX') ") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary,SUM(totalsalary) totalsalary") \
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
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary, tbl_fee.totalsalary") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, totalsalary") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere); \
	}
	return szSQL;
	//_msg(_T("%s"),szSQL);
}

void CFMCollectDetailByItem_2022::OnExportSalaryList()
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
	if (!xls.Load(_T("Exports\\CHI TIET TIEN LUONG THEO DANH MUC.xls"))) AfxMessageBox(_T("Load fail!"));

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
			if (nGroupTotal[7] > 0)
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

		rs.GetValue(_T("salary"), nTemp);		
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("times"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("totalsalary"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);			

		rs.GetValue(_T("e_amount"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("i_amount"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_amount"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CHI TIET TIEN LUONG THEO DANH MUC2.xls"));
}
void CFMCollectDetailByItem_2022::OnExportSalaryList1()
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
	if (!xls.Load(_T("Exports\\CHI TIET TIEN LUONG THEO DANH MUC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringSalary1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[7] > 0)
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

		rs.GetValue(_T("salary"), nTemp);		
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("times"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("totalsalary"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);			

		rs.GetValue(_T("e_amount"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("i_amount"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_amount"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CHI TIET TIEN LUONG THEO DANH MUC2.xls"));
}
void CFMCollectDetailByItem_2022::OnPrintBookingCare()
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
	szSQL = GetQueryStringBookingCare();
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2022"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}
CString CFMCollectDetailByItem_2022::GetQueryStringBookingCare()
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
		/*szSQL.Format(_T("WITH tbl_fee AS (SELECT    hfe_invoiceno, ") \
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
		_T("                      hfe_d	eptid dept_id, ") \
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
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr "), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);	*/
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
        _T("     HE_ROOMID as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		//_T("     f.hfe_cost amount,") \//
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
        _T("     HPC_ROOMID as roomid,") \
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
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		/*_T("   UNION ALL") \
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \*/
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
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
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
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
        _T("     hpc_roomid as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("  LEFT JOIN HMSV_PDEPT_PARACLINIC_P1") \
		_T("   ON ( f.hfe_docno     = hpc_docno") \
		_T("   AND f.hfe_orderid    = hpc_orderid") \
		_T("   AND f.hfe_type      IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//		
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
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
        _T("     hpo_roomid as roomid,") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp_ksk ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount, roomid") \
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
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount, tbl_fee.roomid") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0 AND roomid=68") \
		_T(" %s") \
		_T(" GROUP BY dept_id,roomid,") \
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
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')   ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
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
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		//_T("     f.hfe_patpaid amount,") \//
		_T(" CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_patpaid end as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		//_T(" 		    AND hfe_category in ('N','BQP','XX') ") \//
		_T(" AND (hfe_category   IN ('N','BQP','XX') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
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
		_T("   WHERE hfe_cash_id > 0 %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere); \
	}
	return szSQL;
}

//Doan nay xuat ra danh sach benh nhan, chua co update duoc//
/*WITH tbl_fee AS
  (
    SELECT f.hfe_invoiceno,
    f.hfe_docno,
    CASE
      WHEN f.hfe_type     IN ('P','T')
      AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')
      AND su_deptid       IS NOT NULL
      THEN Su_Deptid
    END dept_id,
    f.hfe_group,
    f.hfe_type fee_type,
    NULL AS depttype,
    NULL AS dept,
    NULL AS orderdept,
    0    AS roomid,
    f.hfe_desc descr,
    NVL(hfl_hitechmachine, 'N') hitech_machine,
    hfe_quantity times,
    f.hfe_patpaid amount,
    0 fee_id
  FROM hms_fee f
  LEFT JOIN hms_fee_list fl
  ON (hfe_itemid  =fl.hfl_feeid
  AND f.hfe_type IN ('P', 'T'))
  LEFT JOIN HMSV_PDEPT_PARACLINIC_P1
  ON ( f.hfe_docno     = hpc_docno
  AND f.hfe_orderid    = hpc_orderid
  AND f.hfe_type      IN ('P', 'T'))
  WHERE f.hfe_status  IN ('P','R')
  AND su_deptid       IS NOT NULL
  AND f.hfe_type      IN ('P','T')
  AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')
  AND f.hfe_category  IN ('N','BQP','XX')  
  UNION ALL
  SELECT f.hfe_invoiceno,
    f.hfe_docno,
    CASE
      WHEN f.hfe_type      IN ('P','T')
      AND F.Hfe_Group NOT  IN ('B1B00','B1G00','B1800','B2500')
      AND Hpc_Practitioner IS NULL
      THEN Fl.Hfl_Deptid
    END dept_id,
    f.hfe_group,
    f.hfe_type fee_type,
    NULL AS depttype,
    NULL AS dept,
    NULL AS orderdept,
    0    AS roomid,
    f.hfe_desc descr,
    NVL(hfl_hitechmachine, 'N') hitech_machine,
    hfe_quantity times,
    f.hfe_patpaid amount,
    0 fee_id
  FROM hms_fee f
  LEFT JOIN hms_fee_list fl
  ON (hfe_itemid  =fl.hfl_feeid
  AND f.hfe_type IN ('P', 'T'))
  LEFT JOIN Hms_Pacsorder
  ON ( f.hfe_docno      = hpc_docno
  AND f.hfe_orderid     = hpc_orderid
  AND f.hfe_type       IN ('P', 'T'))
  WHERE f.hfe_status   IN ('P','R')
  AND Hpc_Practitioner IS NULL
  AND f.hfe_type       IN ('P','T')
  AND F.Hfe_Group NOT  IN ('B1B00','B1G00','B1800','B2500')
  AND f.hfe_category   IN ('N','BQP','XX')
  AND hpc_status       <> 'T'  
  UNION ALL
  SELECT f.hfe_invoiceno,
    f.hfe_docno,
    CASE
      WHEN f.hfe_type      IN ('P','T')
      AND F.Hfe_Group NOT  IN ('B1B00','B1G00','B1800','B2500')
      AND Hpc_Practitioner IS NULL
      THEN Fl.Hfl_Deptid
    END dept_id,
    f.hfe_group,
    f.hfe_type fee_type,
    NULL AS depttype,
    NULL AS dept,
    NULL AS orderdept,
    0    AS roomid,
    f.hfe_desc descr,
    NVL(hfl_hitechmachine, 'N') hitech_machine,
    hfe_quantity times,
    f.hfe_patpaid amount,
    0 fee_id
  FROM hms_fee f
  LEFT JOIN hms_fee_list fl
  ON (hfe_itemid  =fl.hfl_feeid
  AND f.hfe_type IN ('P', 'T'))
  LEFT JOIN Hms_testorder
  ON ( f.hfe_docno      = hpc_docno
  AND f.hfe_orderid     = hpc_orderid
  AND f.hfe_type       IN ('P', 'T'))
  WHERE f.hfe_status   IN ('P','R')
  AND Hpc_Practitioner IS NULL
  AND f.hfe_type       IN ('P','T')
  AND F.Hfe_Group NOT  IN ('B1B00','B1G00','B1800','B2500')
  AND f.hfe_category   IN ('N','BQP','XX')
  AND hpc_status       <> 'T'  
  UNION ALL
  SELECT f.hfe_invoiceno,
    f.hfe_docno,
    CASE
      WHEN f.hfe_type IN ('P','T')
      AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')
      THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3))
    END dept_id,
    f.hfe_group,
    f.hfe_type fee_type,
    NULL AS depttype,
    NULL AS dept,
    NULL AS orderdept,
    0    AS roomid,
    f.hfe_desc descr,
    NVL(hfl_hitechmachine, 'N') hitech_machine,
    hfe_quantity times,
    f.hfe_patpaid amount,
    0 fee_id
  FROM hms_fee f
  LEFT JOIN hms_fee_list fl
  ON (hfe_itemid      =fl.hfl_feeid
  AND f.hfe_type     IN ('P', 'T'))
  WHERE f.hfe_status IN ('P','R')
  AND F.Hfe_Group    IN ('B1B00','B1G00','B1800','B2500')
  AND f.hfe_category IN ('N','BQP','XX')
  AND f.hfe_type     IN ('P','T') 
  )
SELECT
  tbl_invoice.HFE_DOCNO,  
  SUM(amount) total_amount
FROM fa_cash
INNER JOIN
  (SELECT hfe_cash_id,
    i.HFE_DOCNO,
    hfe_class,
    CASE
      WHEN ( fee_type             = 'E'
      AND NVL(hd_outpatient, 'N') = 'Y' )
      OR i.hfe_type               = 'O'
      THEN i.hfe_deptid
      ELSE dept_id
    END dept_id,
    NVL(hfg_type_id, 2000) hfe_typeindex,
    SUBSTR(hfe_group, 1, 3) hfe_group3,
    DECODE('O', i.hfe_type, 'Other fee in dept', descr) descr,
    DECODE('O', i.hfe_type, 1, times) times,
    DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,
    DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,
    DECODE('O', i.hfe_type, hfe_amount, amount) amount
  FROM hms_fee_invoice_view_v2 i
  LEFT JOIN hms_doc
  ON ( i.hfe_docno = hd_docno )
  LEFT JOIN tbl_fee
  ON ( i.hfe_docno    = tbl_fee.hfe_docno
  AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )
  LEFT JOIN hms_fee_group
  ON (hfg_id                    = hfe_group)
  WHERE hfe_cash_id             > 0
  AND hd_docno=18207219
  ) tbl_invoice ON (fac_cash_id = hfe_cash_id)
WHERE amount                    > 0
AND hfe_cash_id                IN(-1,114856)
GROUP BY
  tbl_invoice.hfe_docno
ORDER BY 
  tbl_invoice.hfe_docno*/


void CFMCollectDetailByItem_2022::OnPrintDetailByPatient()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1, szOldLev2, szNewLev2;
	CStringArray data_name;
	double nTotal[5], GrandAmt[5], nTotalClass[5];
	for (int i = 0; i < 5; i++)
	{
		GrandAmt[i] = 0;
		nTotalClass[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_CHITIETBN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString_patientdtl();
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
	data_name.Add(_T("price"));
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
	szOldLev1.Empty();
	szOldLev2.Empty();
	while (!rs.IsEOF())
	{
		//Group Seperation	
		rs.GetValue(_T("dept_id"), szNewLev1);
		rs.GetValue(_T("descr"), szNewLev2);
		if (szOldLev1 != szNewLev1)
		{
			if (nTotalClass[sum_pos]> 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("Tổng mục:"));
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nTotalClass[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptGroup->SetValue(szPos, tmpStr);				
					nTotalClass[i] = 0;
				}
			}
			if (GrandAmt[sum_pos]> 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("Tổng khoa:"));
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
			szOldLev2.Empty();
			nIdx = 1;
		}
		if (szOldLev2 != szNewLev2)
		{
			if (nTotalClass[sum_pos]> 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("Tổng mục:"));
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
				tmpStr.Format(_T("- %s"), szNewLev2);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldLev2 = szNewLev2;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			//rptDetail->SetValue(_T("2"), rs.GetValue(_T("descr")));
			//rptDetail->SetValue(_T("3"), rs.GetValue(_T("salary")));

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				GrandAmt[i]+= nTmp;
				nTotalClass[i] += nTmp;
				nTotal[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
	if (nTotalClass[sum_pos]> 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("Tổng mục:"));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotalClass[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptGroup->SetValue(szPos, tmpStr);				
			nTotalClass[i] = 0;
		}
	}
	//if(m_szOrderByKey == _T("04"))
	{
		if (GrandAmt[sum_pos] > 0)
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptGroup->SetValue(_T("TotalGroup"), _T("Tổng khoa:"));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2022"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMCollectDetailByItem_2022::OnPrintDetailByPatient_v2_o()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1, szOldLev2, szNewLev2;
	CStringArray data_name;
	double nTotal[5], GrandAmt[5], nTotalClass[5];
	for (int i = 0; i < 5; i++)
	{
		GrandAmt[i] = 0;
		nTotalClass[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_CHITIETBN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString_patientdtl();
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
	data_name.Add(_T("price"));
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
	szOldLev1.Empty();
	szOldLev2.Empty();
	CStringArray arrGroup;
	arrGroup.Add(_T("dept_id"));
	arrGroup.Add(_T("descr"));
	
	const int _GroupNum = 2;
	GROUP_INFOR grp_info[_GroupNum]={};
	for (int i = 0; i < _GroupNum; i++)
	{
		grp_info[i].id = arrGroup.GetAt(i);
		for (int j = 0; j < 5; j++)
		{
			grp_info[i].sum[j] = 0;
			grp_info[i].total= 0;
		}
	}
	while (!rs.IsEOF())
	{
		//Group Seperation	
		/*
		rs.GetValue(_T("dept_id"), szNewLev1);
		rs.GetValue(_T("descr"), szNewLev2);
		if (szOldLev1 != szNewLev1)
		{
			if (nTotalClass[sum_pos]> 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("Tổng mục:"));
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nTotalClass[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptGroup->SetValue(szPos, tmpStr);				
					nTotalClass[i] = 0;
				}
			}
			if (GrandAmt[sum_pos]> 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("Tổng khoa:"));
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
			szOldLev2.Empty();
			nIdx = 1;
		}
		if (szOldLev2 != szNewLev2)
		{
			if (nTotalClass[sum_pos]> 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("Tổng mục:"));
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
				tmpStr.Format(_T("- %s"), szNewLev2);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldLev2 = szNewLev2;
			nIdx = 1;
		}
		*/
		for (int i = 0; i < _GroupNum; i++)
		{
			//_tprintf(_T("\ni:%d\n"), i);
			rs.GetValue(grp_info[i].id, grp_info[i].new_val);
			GROUP_INFOR grp = grp_info[i];
			if (grp.new_val != grp.old_val)
			{
				for (j = _GroupNum - 1; j >= i; j--)
				{
					//_tprintf(_T("\nj:%d\n"), j);
					GROUP_INFOR grp = grp_info[j];
					if (grp.total == 0)
					{
						continue;
					}
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					tmpStr.Format(_T("Tổng mục (%d):"), j);
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					for (int k = 0; k < 5; k++)
					{
						//_tprintf(_T("\nk:%d\n"), k);
						tmpStr.Format(_T("%f"), grp.sum[k]);
						szPos.Format(_T("s%d"), k+col_pos);
						rptGroup->SetValue(szPos, tmpStr);				
						grp.sum[k] = 0;						
						grp.total = 0;
						grp_info[j].sum[k] = 0;
					}
					grp_info[j].total= 0;
					//grp_info[j] = grp;
					/*
					for (int k = 0; k < 5; k++)
					{
						_tprintf(_T("\ngrp_info[%d].sum[%d]: %ld\n"), j, k, grp_info[j].sum[k]);
						grp_info[j].sum[k] = 0;
						grp_info[j].total = 0;
						_tprintf(_T("\ngrp_info[%d].sum[%d]: %ld\n"), j, k, grp_info[j].sum[k]);
					}
					*/
				}
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s"), grp.new_val);
					rptGroup->SetValue(_T("GroupName"), tmpStr);
				}
				grp.old_val = grp.new_val;
				//grp_info[i] = grp;
				grp_info[i].old_val = grp_info[i].new_val;
				for (int j = i+1; j < _GroupNum; j++)
				{
					grp_info[j].old_val.Empty();
				}
				nIdx = 1;
			}
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			//rptDetail->SetValue(_T("2"), rs.GetValue(_T("descr")));
			//rptDetail->SetValue(_T("3"), rs.GetValue(_T("salary")));

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];
				rs.GetValue(tmpStr, nTmp);
				GrandAmt[i]+= nTmp;
				nTotalClass[i] += nTmp;
				for (int j = 0; j < _GroupNum; j++)
				{	
					//_tprintf(_T("\n++grp_info[%d].sum[%d]:%ld\n"), j, i, grp_info[j].sum[i]);
					grp_info[j].sum[i] += nTmp;
					grp_info[j].total += nTmp;
				}
				nTotal[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
	for (j = _GroupNum - 1; j >= 0; j--)
	{
		_tprintf(_T("\nj:%d\n"), j);
		GROUP_INFOR grp = grp_info[j];
		if (grp.total == 0)
		{
			continue;
		}
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("Tổng mục (%d):"), j);
		rptGroup->SetValue(_T("TotalGroup"), tmpStr);
		for (int k = 0; k < 5; k++)
		{
			_tprintf(_T("\nk:%d\n"), k);
			tmpStr.Format(_T("%f"), grp.sum[k]);
			szPos.Format(_T("s%d"), k+col_pos);
			rptGroup->SetValue(szPos, tmpStr);				
			grp.sum[k] = 0;						
			grp.total = 0;
		}
		grp_info[j] = grp;
	}
	/*
	if (nTotalClass[sum_pos]> 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("Tổng mục:"));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotalClass[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptGroup->SetValue(szPos, tmpStr);				
			nTotalClass[i] = 0;
		}
	}
	//if(m_szOrderByKey == _T("04"))
	{
		if (GrandAmt[sum_pos] > 0)
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptGroup->SetValue(_T("TotalGroup"), _T("Tổng khoa:"));
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr.Format(_T("%f"), GrandAmt[i]);
				szPos.Format(_T("s%d"), i+col_pos);
				rptGroup->SetValue(szPos, tmpStr);
			}
		}
	}
	*/
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2022"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMCollectDetailByItem_2022::OnExportDetailByPatient()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL = GetQueryString_patientdtl_v2();
	pMF->BeginWaitCursor();
	//int nRet = str2int(pMF->ExecDML(szSQL));
	int nRet = rs.ExecSQL(szSQL);
	if (nRet < 0)
	{
		ShowMessageBox(_T("Error excute SQL"));
		return;
	}
	pMF->EndWaitCursor();
	Export(_T("Chi_tiet_thu_tien_theo_BN"), &rs);	
}

void CFMCollectDetailByItem_2022::Export(CString szFileName, CRecord* pRs)
{
	CExcel xls;
	CString tmpStr, szPath, szMsg;
	int nIndex = 1, nDepth = 0, nColNum = 0, nSheet = 1;
	double nTmp = 0, nTotal[45];
	long nFormat = 0;
	szPath.Format(_T("Exports\\Template\\Mau_%s.xls"), szFileName);
	if (!xls.Load(szPath))
	{
		szMsg.Format(_T("Thiếu file %s"), szPath);
		ShowMessageBox(szMsg);
		return;	
	}
	if (pRs->IsEOF())
	{
		ShowMessageBox(_T("No Data!"));
		return;
	}
	GROUP_INFOR grp_info[2] = {};
	//InitGroupInfo(pRs, &grp_info, nDepth, nColNum);
	CArray<CString, CString> arGrp, arCol;
	for (int i = 0; i < pRs->GetFieldCount(); i++)
	{
		tmpStr = pRs->GetFieldName(i);
		if (tmpStr.Find(_T("_g_")) == 0)
		{
			arGrp.Add(tmpStr);
		}
		if (tmpStr.Find(_T("_g_")) == -1)
		{
			arCol.Add(tmpStr);
		}
	}
	nDepth = arGrp.GetCount();
	nColNum = arCol.GetCount();
	if (nDepth > 2)
	{
		ShowMessageBox(_T("More than 2 levels depth not supported!"));
		return;
	}
	if (nColNum> 45)
	{
		ShowMessageBox(_T("More than 45 column not supported!"));
		return;	
	}
	//GROUP_INFOR grp_info[2] = {};
	for (int i = 0; i < nDepth; i++)
	{
		grp_info[i].id = arGrp.GetAt(i); 
		for (int j = 0; j < nColNum; j++)
		{
			grp_info[i].sum[j] = 0;
		}
		grp_info[i].total = 0;
	}	
	for (int i = 0; i < nColNum; i++)
	{
		nTotal[i] = 0;
	}
	xls.SetWorksheet(0);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), format_date(m_szFromDate), format_date(m_szToDate));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER);
	int nRow = 5;
	while (!pRs->IsEOF())
	{
		// Them sheet
		if (nRow > 65000)
		{
			tmpStr.Format(_T("Sheet%d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nSheet++;
			nRow = 0;
		}
		for (int i = 0; i < nDepth; i++)
		{
			pRs->GetValue(grp_info[i].id, grp_info[i].new_val);
			GROUP_INFOR grp = grp_info[i];
			if (grp.new_val == grp.old_val)
			{
				continue;
			}
			for (int j = nDepth - 1; j >= i; j--)
			{
				GROUP_INFOR grp = grp_info[j];
				if  (grp.total <= 0)
				{
					continue;
				}
				for (int k = 0; k < nColNum; k++)
				{
					if (grp.sum[k] <= 0)
					{
						continue;
					}
					tmpStr.Format(_T("%f"), grp.sum[k]);
					xls.SetCellText(k+1, nRow, tmpStr, FMT_NUMBER1, true);
					grp_info[j].sum[k] = 0;
				}
				nRow++;
				grp_info[j].total = 0;
			}
			xls.SetCellText(0, nRow++, grp.new_val, FMT_TEXT, true);
			grp_info[i].old_val = grp_info[i].new_val;
			for (int j = i + 1; j < nDepth; j++)
			{
				grp_info[j].old_val.Empty();
			}
		}
		xls.SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT);
		for (int i = 0; i < pRs->GetFieldCount() ; i++)
		{
			if (pRs->GetFieldName(i).Find(_T("_g_")) == 0)
			{
				continue;
			}
			nFormat = FMT_TEXT;
			if (pRs->GetFieldName(i).Find(_T("_n_")) == 0)
			{
				nFormat = FMT_NUMBER1;
				nTmp = str2double(pRs->GetValue(i));
				for (int j = 0; j < nDepth; j++)
				{
					grp_info[j].sum[i] += nTmp;
					grp_info[j].total += nTmp;
				}
				nTotal[i] += nTmp;
			}
			xls.SetCellText(i+1, nRow, pRs->GetValue(i), nFormat);
		}
		nRow++;
		pRs->MoveNext();
	}
	for (int j = nDepth - 1; j >= 0; j--)
	{
		GROUP_INFOR grp = grp_info[j];
		if  (grp.total <= 0)
		{
			continue;
		}
		for (int k = 0; k < nColNum; k++)
		{
			if (grp.sum[k] <= 0)
			{
				continue;
			}
			tmpStr.Format(_T("%f"), grp.sum[k]);
			xls.SetCellText(k+1, nRow, tmpStr, FMT_NUMBER1, true);
			grp_info[j].sum[k] = 0;
		}
		nRow++;
		grp_info[j].total = 0;
	}
	for (int i = 0; i < 45; i++)
	{
		if (nTotal[i] <= 0)
		{
			continue;
		}
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+1, nRow, tmpStr, FMT_NUMBER1, true);
	}
	szPath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szPath);			
}

void CFMCollectDetailByItem_2022::InitGroupInfo(CRecord* pRs, GROUP_INFOR (*grp_info)[2], int& nDepth, int& nColNum)
{
	CArray<CString, CString> arGrp, arCol;
	CString tmpStr;
	for (int i = 0; i < pRs->GetFieldCount(); i++)
	{
		tmpStr = pRs->GetFieldName(i);
		if (tmpStr.Find(_T("_g_")) == 0)
		{
			arGrp.Add(tmpStr);
		}
		if (tmpStr.Find(_T("_g_")) == -1)
		{
			arCol.Add(tmpStr);
		}
	}
	nDepth = arGrp.GetCount();
	nColNum = arCol.GetCount();
	if (nDepth > 2)
	{
		ShowMessageBox(_T("More than 2 levels depth not supported!"));
		return;
	}
	if (nColNum> 45)
	{
		ShowMessageBox(_T("More than 45 column not supported!"));
		return;	
	}
	for (int i = 0; i < nDepth; i++)
	{
		grp_info[i]->id = arGrp.GetAt(i); 
		_tprintf(_T("\ngrp_info[%d]: %u\n"), i, grp_info[i]);
		for (int j = 0; j < nColNum; j++)
		{
			grp_info[i]->sum[j] = 0;
		}
		grp_info[i]->total = 0;
	}
}

void CFMCollectDetailByItem_2022::OnPrintDetailByPatient_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szFilePath, szSQL;
	szFilePath = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_CHITIETBN.RPT");
	szSQL = GetQueryString_patientdtl_v2();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	EndWaitCursor();
	OnPrint(szFilePath, &rs);
	return;
}

void CFMCollectDetailByItem_2022::OnPrint(CString szFilePath, CRecord* pRs)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szPos, szValue, szDate;
	int nIndex = 1, nDepth = 0, nColNum = 0;
	CReportSection* rptdtl = NULL, *rpttmp = NULL, *rptHeader=NULL;
	CArray<CString, CString> arGrp, arCol;
	double nTmp = 0, nTotal[45];
	if (!rpt.Init(szFilePath))
	{
		return;
	}
	if (pRs->IsEOF())
	{
		ShowMessageBox(_T("No Data!"));
		return;
	}
	for (int i = 0; i < pRs->GetFieldCount(); i++)
	{
		tmpStr = pRs->GetFieldName(i);
		_tprintf(_T("\ntmpStr: %s\n"), tmpStr);
		if (tmpStr.Find(_T("_g_")) == 0)
		{
			arGrp.Add(tmpStr);
		}
		if (tmpStr.Find(_T("_g_")) == -1)
		{
			arCol.Add(tmpStr);
		}
	}
	nDepth = arGrp.GetCount();
	nColNum = arCol.GetCount();
	if (nDepth > 2)
	{
		ShowMessageBox(_T("More than 2 levels depth not supported!"));
		return;
	}
	if (nColNum> 45)
	{
		ShowMessageBox(_T("More than 45 column not supported!"));
		return;	
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
	GROUP_INFOR grp_info[2] = {};
	for (int i = 0; i < nDepth; i++)
	{
		grp_info[i].id = arGrp.GetAt(i); 
		for (int j = 0; j < nColNum; j++)
		{
			grp_info[i].sum[j] = 0;
		}
		grp_info[i].total = 0;
	}
	for (int i = 0; i < nColNum; i++)
	{
		nTotal[i] = 0;
	}
	while (!pRs->IsEOF())
	{
		for (int i = 0; i < nDepth; i++)
		{
			pRs->GetValue(grp_info[i].id, grp_info[i].new_val);
			GROUP_INFOR grp = grp_info[i];
			if (grp.new_val == grp.old_val)
			{
				continue;
			}
			for (int j = nDepth - 1; j >= i; j--)
			{
				GROUP_INFOR grp = grp_info[j];
				if  (grp.total <= 0)
				{
					continue;
				}
				rpttmp = rpt.GetGroupFooter(1);
				if (rpttmp == NULL)
				{
					ShowMessageBox(_T("No Group Footer"));
					break;
				}
				rptdtl = rpt.AddDetail(rpttmp);
				for (int k = 0; k < nColNum; k++)
				{
					if (grp.sum[k] <= 0)
					{
						continue;
					}
					szPos.Format(_T("s%d"), k+2);
					tmpStr.Format(_T("%f"), grp.sum[k]);
					rptdtl->SetValue(szPos, tmpStr);
					grp_info[j].sum[k] = 0;
				}
				grp_info[j].total = 0;
			}
			rpttmp = rpt.GetGroupHeader(0);
			if (rpttmp == NULL)
			{
				ShowMessageBox(_T("No Group Header"));
				break;
			}
			rptdtl = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptdtl)
			{
				rptdtl->SetValue(_T("GroupName"), grp.new_val);
			}
			grp_info[i].old_val = grp_info[i].new_val;
			for (int j = i + 1; j < nDepth; j++)
			{
				grp_info[j].old_val.Empty();
			}
		}
		rptdtl = rpt.AddDetail();
		rptdtl->SetValue(_T("1"), int2str(nIndex++));
		for (int i = 0; i < pRs->GetFieldCount(); i++)
		{
			tmpStr = pRs->GetFieldName(i);
			if (tmpStr.Find(_T("_g_")) == 0)
			{
				continue;
			}
			if (tmpStr.Find(_T("_n_")) == 0)
			{
				nTmp = str2double(pRs->GetValue(i));
				for (int j = 0; j < nDepth; j++)
				{
					grp_info[j].sum[i] += nTmp;
					grp_info[j].total += nTmp;
				}
				nTotal[i] += nTmp;
			}
			rptdtl->SetValue(int2str(i+2), pRs->GetValue(i));
		}
		pRs->MoveNext();
	}
	for (int j = nDepth - 1; j >= 0; j--)
	{
		GROUP_INFOR grp = grp_info[j];
		if  (grp.total <= 0)
		{
			continue;
		}
		rpttmp = rpt.GetGroupFooter(1);
		if (rpttmp == NULL)
		{
			ShowMessageBox(_T("No Group Footer"));
			break;
		}
		rptdtl = rpt.AddDetail(rpttmp);
		for (int k = 0; k < nColNum; k++)
		{
			if (grp.sum[k] <= 0)
			{
				continue;
			}
			szPos.Format(_T("s%d"), k+2);
			tmpStr.Format(_T("%f"), grp.sum[k]);
			rptdtl->SetValue(szPos, tmpStr);
			grp_info[j].sum[k] = 0;
		}
		grp_info[j].total = 0;
	}
	rptdtl = rpt.GetReportFooter();
	for (int i = 0; i < nColNum; i++)
	{
		if (nTotal[i] <= 0)
		{
			continue;
		}
		szPos.Format(_T("t%d"), i+2);
		tmpStr.Format(_T("%f"), nTotal[i]);
		rptdtl->SetValue(szPos, tmpStr);
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2022"));
	
	rpt.PrintPreview();
}

CString CFMCollectDetailByItem_2022::GetQueryString_patientdtl_v2()
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
		if (m_bHTSS)
		szWhere.AppendFormat(_T(" AND dept_id in ('TTDTHM','TTHTSS')"));
	//if (m_szObjectTypeKey == _T("01"))	
	if (m_bServiceOnDemand)	
	{
		/*szSQL.Format(_T("WITH tbl_fee AS (SELECT    hfe_invoiceno, ") \
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
		_T("                      hfe_d	eptid dept_id, ") \
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
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr "), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);	*/
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
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		/*_T("   UNION ALL") \
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \*/
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
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
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//		
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   )") \
		_T(" SELECT patient_name, doc_no, ") \
		_T("   SUM(times) \"_n_times\",") \
		_T("   price,") \
		_T("   SUM(e_amount) \"_n_e_amount\",") \
		_T("   SUM(i_amount) \"_n_i_amount\",") \
		_T("   SUM(amount) \"_n_total_amount\",") \
		_T("   dept_id as \"_g_dept_id\",") \
		_T("   descr as \"_g_descr\"") \
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
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("	 i.hfe_docno as doc_no, get_patientname(i.hfe_docno) as patient_name") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, doc_no, patient_name") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, doc_no"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1,szWhere); \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')   ") \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
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
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		_T("     hfe_unitprice as price,") \
		//_T("     f.hfe_patpaid amount,") \//
		_T(" CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_patpaid end as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid as price,") \
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		//_T(" 		    AND hfe_category in ('N','BQP','XX') ") \//
		_T(" AND (hfe_category   IN ('N','BQP','XX') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT patient_name, doc_no, ") \
		_T("   SUM(times) \"_n_times\",") \
		_T("   price,") \
		_T("   SUM(e_amount) \"_n_e_amount\",") \
		_T("   SUM(i_amount) \"_n_i_amount\",") \
		_T("   SUM(amount) \"_n_total_amount\",") \
		_T("   dept_id as \"_g_dept_id\",") \
		_T("   descr as \"_g_descr\"") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times, tbl_fee.price,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary,") \
		_T("	 i.hfe_docno as doc_no, get_patientname(i.hfe_docno) as patient_name") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, price, doc_no, patient_name") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, doc_no"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere);
	}
	return szSQL;
}
void CFMCollectDetailByItem_2022::OnPrintCASVN()
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
	szSQL = GetQueryStringCASVN();
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2022"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}
CString CFMCollectDetailByItem_2022::GetQueryStringCASVN()
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
		/*szSQL.Format(_T("WITH tbl_fee AS (SELECT    hfe_invoiceno, ") \
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
		_T("                      hfe_d	eptid dept_id, ") \
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
		_T(" ORDER     BY dept_id, hfe_typeindex, hfe_group3, descr "), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""), szWhere);	*/
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
        _T("     HE_ROOMID as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		//_T("     f.hfe_cost amount,") \//
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
        _T("     HPC_ROOMID as roomid,") \
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
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		/*_T("   UNION ALL") \
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \*/
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
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
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
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
        _T("     hpc_roomid as roomid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("  LEFT JOIN HMSV_PDEPT_PARACLINIC_P1") \
		_T("   ON ( f.hfe_docno     = hpc_docno") \
		_T("   AND f.hfe_orderid    = hpc_orderid") \
		_T("   AND f.hfe_type      IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//		
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
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
        _T("     hpo_roomid as roomid,") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp_ksk ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount, roomid") \
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
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount, tbl_fee.roomid") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN hms_exm_employee ON (hd_docno=hee_docno)") \
		_T("   LEFT JOIN HMS_EXM_CONTRACT ON (hec_contract_id=hee_contract_id)") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 AND hec_no='CASVN' %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0 ") \
		_T(" %s") \
		_T(" GROUP BY dept_id,roomid,") \
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
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')   ") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
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
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		//_T("     f.hfe_patpaid amount,") \//
		_T(" CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_patpaid end as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		//_T(" 		    AND hfe_category in ('N','BQP','XX') ") \//
		_T(" AND (hfe_category   IN ('N','BQP','XX') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
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
		_T("   WHERE hfe_cash_id > 0 %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere); \
	}
	return szSQL;
}
CString CFMCollectDetailByItem_2022::GetQueryString_ByRoom()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr, szRoom;
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
		int nInc = 0;
		long nTemp = 0;
		CString szIds, tmpStr;
		bool bBreak = false;
		szIds.Empty();
		tmpStr.Empty();
		for (int i = 0; i < tok_id.GetSize(); i++)
		{
			if (nInc > 999)
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
				nInc = 0;
				bBreak = false;
			}
			if (!tmpStr.IsEmpty())
			{
				tmpStr += _T(",");
			}
			tok_id.GetAt(i, nTemp);
			tmpStr.AppendFormat(_T("%ld"), nTemp);
			nInc++;
		}
		if (!szIds.IsEmpty())
		{
			szIds += _T(" OR ");
		}
		szIds.AppendFormat(_T(" hfe_cash_id IN (%s) "), tmpStr);
		if (nCount == m_wndList.GetItemCount())
		{
			szWhere.Format(_T(" AND hfe_cash_id in (select fac_cash_id from fa_cash where 1=1 %s)"), m_szWhere);
		}
		else
		{
			szWhere.Format(_T(" AND (%s)"), szIds);
		}
	}
	//szWhere.Format(_T(" AND hfe_cash_id in (select fac_cash_id from fa_cash where 1=1 %s)"), m_szWhere);
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

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRoom.IsEmpty())
				szRoom += _T(", ");
			szRoom += m_wndRoom.GetCurrent(0);
		}
	}

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

	if (!szRoom.IsEmpty())
		szWhere.AppendFormat(_T(" AND (roomid in (%s) OR itemid in (select ss_code from sys_sel where ss_id='NHOMCLS_ROOM99'))"), szRoom);	


	if (m_bHTSS)
		szWhere.AppendFormat(_T(" AND dept_id in ('TTDTHM','TTHTSS')"));



	//if (m_szObjectTypeKey == _T("01"))	
		
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
        _T("     ex.HE_ROOMID as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		//_T("     f.hfe_cost amount,") \//
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P')") \
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
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P')") \
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
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		//_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \//
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		/*_T("   UNION ALL") \
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \*/
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P') AND hpc_status is NULL") \
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
        _T("     HPC_ROOMID as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		//_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \//
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
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
        _T("     hpc_roomid as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno     = hpc_docno  AND f.hfe_orderid    = hpc_orderid)  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P')") \
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
        _T("     ex.he_roomid as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_exam ex  ON (f.hfe_docno     = ex.he_docno  AND f.hfe_orderid   = ex.he_receptidx)  ") \
		_T("   WHERE     f.hfe_status in ('P')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
        _T("     0 as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//		
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
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P')") \
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
		_T("     f.hfe_itemid as itemid,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P')") \
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
		_T("     NULL as itemid,") \
		_T("     fi.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P')") \
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
        _T("     hpo_roomid as roomid,") \
		_T("     f.hfe_itemid as itemid,") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P')") \
		_T("   )") \
		_T(" SELECT dept_id, roomid, itemid,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount") \
		_T(" FROM fa_cash") \
		_T(" RIGHT JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id, roomid, itemid,") \
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
		_T("   WHERE hfe_cash_id > 0 AND itemid NOT IN (SELECT Hfe_itemid  FROM Hms_Fee_Discountline WHERE hfe_docno=tbl_fee.hfe_docno AND Hfe_Refidx  =tbl_fee.hfe_invoiceno) %s %s") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,roomid, itemid,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr") \
		_T(" ORDER BY dept_id,roomid, itemid,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1,szWhere); \
		return szSQL;
}
void CFMCollectDetailByItem_2022::OnExport6()
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
	if (!xls.Load(_T("Exports\\THUTIENTHEODANHMUC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString6();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[7] > 0)
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

		rs.GetValue(_T("salary"), nTemp);		
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("times"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("price"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("insprice"), nTemp);
		nGroupTotal[5] += nTemp;
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
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\THUTIENTHEODANHMUC2.xls"));
}
CString CFMCollectDetailByItem_2022::GetQueryString6()
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

	if (m_bHTSS)
		szWhere.AppendFormat(_T(" AND dept_id in ('TTDTHM','TTHTSS')"));
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

		if (m_szFilterKey == _T("CLS_GIUONG_PTTYC"))
		{
			szWhere1.AppendFormat(_T(" AND cls_giuong_pttyc in ('DTTN','NOIKHOA')"));
		}
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
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 cast('N' AS nvarchar2(1)) as cls_giuong_pttyc") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 hpc_zone as cls_giuong_pttyc") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 hpc_zone as cls_giuong_pttyc") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND (hpc_status      <> 'T' OR (hpc_status = 'T' AND Hpc_Practitioner IS NULL))") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		/*_T("   UNION ALL") \
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \*/
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
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
		_T("     0 fee_id,") \
		_T("	 hpc_zone as cls_giuong_pttyc") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 hpc_zone as cls_giuong_pttyc") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND (hpc_status <> 'T' OR (hpc_status = 'T' AND Hpc_Practitioner IS NULL))") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 hpc_zone as cls_giuong_pttyc") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 hb_zone as cls_giuong_pttyc") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_bed ON (hb_docno = hfe_docno AND hb_roomid = hfe_orderid AND hb_bedid = hfe_orderline)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 cast('N' AS nvarchar2(1)) as cls_giuong_pttyc") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//		
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 cast('N' AS nvarchar2(1)) as cls_giuong_pttyc") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 cast('N' AS nvarchar2(1)) as cls_giuong_pttyc") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 cast('N' AS nvarchar2(1)) as cls_giuong_pttyc") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id,") \
		_T("	 cast('N' AS nvarchar2(1)) as cls_giuong_pttyc") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("   WHERE hfe_cash_id > 0 %s %s") \
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
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX')   ") \
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
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		//_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \//

		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
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
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     dy.HDBL_INSPRICE as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= f.hfe_itemid) and dy.hdbl_deptid=f.hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl") \
		_T("   ON (hfe_itemid  =fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		//_T("     f.hfe_patpaid amount,") \//
		_T(" CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_patpaid end as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O' ") \
		//_T(" 		    AND F.Hfe_type='O' ") \//
		_T(" 		    AND f.hfe_category in ('N','BQP','XX')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     fl.hfl_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
		//_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \//
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid as price,") \
		_T("     0 as insprice,") \
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     hfe_insprice as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		//_T(" 		    AND hfe_category in ('N','BQP','XX') ") \//
		_T(" AND (hfe_category   IN ('N','BQP','XX') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   price, insprice,") \
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
		_T("     DECODE('O', i.hfe_type, 1, times) times, tbl_fee.price, tbl_fee.insprice,") \
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
		_T("   WHERE hfe_cash_id > 0 %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, price, insprice") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere); \
	}

	return szSQL;
}
void CFMCollectDetailByItem_2022::OnExport7()
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
	if (!xls.Load(_T("Exports\\THUTIENTHEODANHMUC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString7();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[7] > 0)
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

		rs.GetValue(_T("salary"), nTemp);		
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("times"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("price"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("insprice"), nTemp);
		nGroupTotal[5] += nTemp;
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
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\THUTIENTHEODANHMUC2.xls"));
}
CString CFMCollectDetailByItem_2022::GetQueryString7()
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

	if (m_bHTSS)
		szWhere.AppendFormat(_T(" AND dept_id in ('TTDTHM','TTHTSS')"));
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
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		/*_T("   UNION ALL") \
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \*/
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
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
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//		
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("   WHERE hfe_cash_id > 0 %s %s") \
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
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')   ") \
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(dy.HDBL_INSPRICE,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= f.hfe_itemid) and dy.hdbl_deptid=f.hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl") \
		_T("   ON (hfe_itemid  =fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		//_T("     f.hfe_patpaid amount,") \//
		_T(" CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_patpaid end as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O' ") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid as price,") \
		_T("     0 as insprice,") \
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(hfe_unitprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		//_T(" 		    AND hfe_category in ('N','BQP','XX') ") \//
		_T(" AND (hfe_category   IN ('N','BQP','XX', 'P') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   price, insprice,") \
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
		_T("     DECODE('O', i.hfe_type, 1, times) times, tbl_fee.price, tbl_fee.insprice,") \
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
		_T("   WHERE hfe_cash_id > 0 and (COALESCE(tbl_fee.price,0) > COALESCE(tbl_fee.insprice,0)) %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, price, insprice") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere); \
	}
	return szSQL;
}
void CFMCollectDetailByItem_2022::OnExport8()
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
	if (!xls.Load(_T("Exports\\THUTIENTHEODANHMUC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString8();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[7] > 0)
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

		rs.GetValue(_T("salary"), nTemp);		
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("times"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("price"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("insprice"), nTemp);
		nGroupTotal[5] += nTemp;
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
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\THUTIENTHEODANHMUC2.xls"));
}
CString CFMCollectDetailByItem_2022::GetQueryString8()
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

	if (m_bHTSS)
		szWhere.AppendFormat(_T(" AND dept_id in ('TTDTHM','TTHTSS')"));
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
		//-- Phieu thu BN PTTYC khong luu du lieu hfe_patpaid nen phai lay trong hfe_cost//
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		/*_T("   UNION ALL") \
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     NULL as depttype,") \
		_T("     NULL as dept,") \
		_T("     NULL as orderdept,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \*/
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
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
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status <> 'T'") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//		
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type  = 'O' AND f.hfe_itemid=ho_itemid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     f.hfe_patpaid amount,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("   WHERE hfe_cash_id > 0 %s %s") \
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
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' AND f.hfe_patpaid>0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category in ('N','BQP','XX','P', 'COV')   ") \
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(dy.HDBL_INSPRICE,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= f.hfe_itemid) and dy.hdbl_deptid=f.hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl") \
		_T("   ON (hfe_itemid  =fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		//_T("     f.hfe_patpaid amount,") \//
		_T(" CASE WHEN HFE_FEEGROUP='HITECH_A' AND HFE_TREAT_INPACKAGE='Y' THEN f.hfe_cost else f.hfe_patpaid end as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O' ") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
		_T(" 		    AND f.hfe_category in ('N','BQP','XX','P', 'COV')") \
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
		_T("     fi.hfe_patpaid as price,") \
		_T("     0 as insprice,") \
		_T("     fi.hfe_patpaid amount,") \
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
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(hfe_unitprice,0) as insprice,") \
		_T("     f.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R')") \
		//_T(" 		    AND hfe_category in ('N','BQP','XX') ") \//
		_T(" AND (hfe_category   IN ('N','BQP','XX', 'P', 'COV') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   price, insprice,") \
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
		_T("     DECODE('O', i.hfe_type, 1, times) times, tbl_fee.price, tbl_fee.insprice,") \
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
		_T("   WHERE hfe_cash_id > 0 and (COALESCE(tbl_fee.price,0) <= COALESCE(tbl_fee.insprice,0)) %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, price, insprice") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere);
	}
	return szSQL;
}

long CFMCollectDetailByItem_2022::OnContractLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContract.IsSearchKey() && !m_szContractKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szContractKey);
	}
	m_wndContract.DeleteAllItems(); 
	int nCount = 0;

	if (m_szWhere.IsEmpty())
	{
		ShowMessageBox(_T("Cần nạp danh sách phiếu trước khi chọn hợp đồng!"));
		return 0;
	}
	szSQL.Format(_T(" SELECT    DISTINCT hec_contract_id AS contract_id,") \
	_T("                    hec_no AS contract_no,") \
	_T("                    (SELECT hwp_name") \
	_T("                     FROM   hms_workplace") \
	_T("                     WHERE  hec_company_id = hwp_idx) AS company") \
	_T(" FROM      fa_cash") \
	_T(" LEFT JOIN hms_fee_invoice_view_v2 ON ( fac_cash_id = hfe_cash_id )") \
	_T(" LEFT JOIN hms_exm_employee ON ( hee_docno = hfe_docno )") \
	_T(" LEFT JOIN hms_exm_contract ON ( hec_contract_id = hee_contract_id ) ") \
	_T(" WHERE 1=1 AND NVL(hec_contract_id, 0) > 0 %s"), m_szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContract.AddItems(
			rs.GetValue(_T("contract_id")), 
			rs.GetValue(_T("contract_no")), 
			rs.GetValue(_T("company")), NULL);
		rs.MoveNext();
	}
	return nCount;
	
}

CString CFMCollectDetailByItem_2022::GetQueryString_detail()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2, tmpStr;
	CString szOrderBy, szReceiptStr;

	if (!m_szDeptKey.IsEmpty())

		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	
	if (m_bDaduyet_chuathu)
	{
		//szWhere.AppendFormat(_T(" AND f.hfe_status NOT IN ('P','C') "));
		szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') not in ('DV-AB','DV', 'THE-DV', 'CK-DV','BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG', 'THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));		

		if (m_szObjectTypeKey == _T("01"))
		{
			szWhere.AppendFormat(_T(" AND f.HFE_OBJECT = 7"));		
		}
		else if (m_szObjectTypeKey == _T("02"))
		{
			szWhere.AppendFormat(_T(" AND f.HFE_OBJECT not in (1,3,6,7,8,13)"));		
		}
		else if (m_szObjectTypeKey == _T("03"))
		{

			szWhere.AppendFormat(_T(" AND 1=1"));
		}
	}
	else if (m_bDaduyet_dathu)
	{
		//szWhere.AppendFormat(_T(" AND f.hfe_status = 'P' "));
		//szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') in ('DV-AB','DV', 'THE-DV', 'CK-DV','BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG', 'THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));		
		szWhere.AppendFormat(_T(" and FAC_POSTED ='Y' "));

		if (m_szObjectTypeKey == _T("01"))
		{
			szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') in ('DV-AB','DV', 'THE-DV', 'CK-DV')"));
		}
		else if (m_szObjectTypeKey == _T("02"))
		{
			szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG', 'THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));		
		}
		else if (m_szObjectTypeKey == _T("03"))
		{			

			szWhere.AppendFormat(_T(" AND NVL(fac_cashbook_id, 'XXX') in ('DV-AB','DV', 'THE-DV', 'CK-DV','BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG', 'THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));		
		}

	}	
	else
	{
		szWhere.AppendFormat(_T(" AND 1=1"));
	}
	
	szSQL.Format(_T(" SELECT ") \
	_T("  *") \
	_T(" FROM") \
	_T("   (SELECT ") \
	_T("    to_char(HPC_PERFORMDATE, 'DD/MM/YYYY') as ngaythuchien,  ") \
	_T("    HPC_SID as sidid,") \
	_T("    f.hfe_docno as sohoso,") \
	_T("    HPC_ORDERID as sophieu,") \
	_T("    HPCL_ORDERLINEID as sophieucon,") \
	_T("    HPC_PATIENTNO as mabenhnhan,") \
	_T("     f.hfe_quantity times,") \
	_T("     f.hfe_unitprice AS price,") \
	_T("     f.hfe_cost as sotien,") \
	_T("     f.hfe_desc descr,") \
	_T("     CASE") \
	_T("       WHEN f.hfe_type IN ('P','T')") \
	_T("       AND HPC_PDEPTID IS NOT NULL") \
	_T("       THEN HPC_PDEPTID") \
	_T("       ELSE Fl.Hfl_Deptid") \
	_T("     END khoa_thuchien,") \
	_T("     f.hfe_group,    ") \
	_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
	_T("     GET_PATIENTNAME(f.hfe_docno) as tenbenhnhan,") \
	_T("     TO_CHAR(hp_birthdate, 'YYYY') as namsinh,") \
	_T("     sys_sel_getname('sys_sex', hp_sex) as sex,") \
	_T("     hms_getaddress(hp_provid,hp_distid, hp_villid) as diachi,") \
	_T("     hpc_deptid as khoayeucau,") \
	_T("     GET_USERNAME(hpc_doctor) as bacsi,") \
	_T("     HMS_GETOBJECTNAME(f.HFE_OBJECT) as doituong,") \
	_T("     CAST('Dũng yêu cầu' as NVARCHAR2(21)) as nguoiyeucau") \
	_T("   FROM hms_fee f  ") \
	_T("   LEFT JOIN hms_fee_list fl") \
	_T("   ON (hfe_itemid  =fl.hfl_feeid") \
	_T("   AND f.hfe_type IN ('P', 'T'))") \
	_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P2") \
	_T("   ON ( f.hfe_docno  = hpc_docno") \
	_T("   AND f.hfe_orderid = hpc_orderid") \
	_T("   AND f.HFE_ORDERLINE = HPCL_ORDERLINEID") \
	_T("   AND f.hfe_type   IN ('P', 'T'))") \
	_T("   LEFT JOIN hms_patient ON (hpc_patientno=hp_patientno)") \
	_T("   LEFT JOIN HMS_FEE_INVOICE_VIEW_V2_BH fe") \
	_T("   ON (f.hfe_docno    =fe.hfe_docno") \
	_T("   AND f.hfe_invoiceno=fe.hfe_invoiceno)") \
	_T("   LEFT JOIN fa_cash") \
	_T("   ON (fe.hfe_cash_id=fac_cash_id)") \
	_T("   WHERE HPC_PERFORMDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T("   AND hpc_status        ='T'") \
	_T("   AND f.hfe_type       IN ('P','T')") \
	_T("   AND f.hfe_category   IN ('N','BQP','XX','P', 'COV')") \
	_T("   AND f.hfe_status     <> 'C' ") \
	_T("   AND hpc_deptid NOT IN ('TYC', 'PTTYC') ") \
	_T("   AND hpcl_hasfee = 'Y' %s ") \
	_T("   )") \
	_T(" WHERE 1           =1") \
	_T(" %s ") \
	_T(" ORDER BY khoa_thuchien, sohoso, sophieu, sophieucon"), m_szFromDate, m_szToDate, szWhere, szWhere1);	
	return szSQL;
}