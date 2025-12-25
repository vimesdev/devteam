#include "stdafx.h"
#include "FMKetQuaHoatDongThuChiPhauThuThuat.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd)
{
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMKetQuaHoatDongThuChiPhauThuThuat* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMKetQuaHoatDongThuChiPhauThuThuat* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMKetQuaHoatDongThuChiPhauThuThuat* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnOrderByAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMKetQuaHoatDongThuChiPhauThuThuat *pVw = (CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMKetQuaHoatDongThuChiPhauThuThuat *pVw = (CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMKetQuaHoatDongThuChiPhauThuThuat *pVw = (CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMKetQuaHoatDongThuChiPhauThuThuat *pVw = (CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnAllSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnSODSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListCheckAllTYC();
	return 0;
}

static long _OnDoctorLoadDataFnc(CWnd *pWnd)
{
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnDoctorLoadData();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd)
{
	return ((CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd)->OnRoomLoadData();
}
static int _OnListCheckAllBHABFnc(CWnd *pWnd)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListCheckAllBHAB();
	return 0;
}
static int _OnListCheckAllDVABFnc(CWnd *pWnd)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListCheckAllDVAB();
	return 0;
}
static void _OnSoldierSelectFnc(CWnd *pWnd)
	{
		 ((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnSoldierSelect();
	}
static int _OnListCheckAllQUANABFnc(CWnd *pWnd)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListCheckAllQUANAB();
	return 0;
}
static void _OnCreateDataSelectFnc(CWnd *pWnd){
	CFMKetQuaHoatDongThuChiPhauThuThuat *pVw = (CFMKetQuaHoatDongThuChiPhauThuThuat *)pWnd;
	pVw->OnCreateDataSelect();
} 
static int _OnListCheckAllBHFnc(CWnd *pWnd)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListCheckAllBH();
	return 0;
}
static int _OnListCheckAllDVFnc(CWnd *pWnd)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListCheckAllDV();
	return 0;
}
static int _OnListCheckAllQUANFnc(CWnd *pWnd)
{
	((CFMKetQuaHoatDongThuChiPhauThuThuat*)pWnd)->OnListCheckAllQUAN();
	return 0;
}
CFMKetQuaHoatDongThuChiPhauThuThuat::CFMKetQuaHoatDongThuChiPhauThuThuat(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMKetQuaHoatDongThuChiPhauThuThuat::~CFMKetQuaHoatDongThuChiPhauThuThuat(){
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 29, 90, 54);
	m_wndYear.Create(this,95, 29, 225, 54); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 29, 331, 54);
	m_wndReportPeriod.Create(this,346, 29, 476, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 225, 84); 
	m_wndToDate.Create(this,346, 59, 476, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 59, 331, 84);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 89, 90, 114);
	m_wndDoctor.Create(this,95, 89, 476, 114); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 116, 90, 141);
	m_wndRoom.Create(this,96, 116, 477, 141); 
	m_wndClerk.Create(this,95, 89, 476, 114); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 145, 90, 170);
	m_wndOrderBy.Create(this,95, 145, 225, 170); 
	m_wndDeptLabel.Create(this, _T("Dept"), 240, 145, 331, 170);
	m_wndDept.Create(this,346, 145, 476, 170); 
	m_wndStatus.Create(this,95, 116, 476, 141); 
	m_wndList.Create(this,10, 175, 476, 502); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 56, 31, 56, 31);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 539, 85, 564);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 539, 170, 564);
	m_wndPrint.Create(this, _T("&Print"), 312, 539, 392, 564);
	m_wndExport.Create(this, _T("Export XLS"), 397, 539, 477, 564);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 504, 115, 529);
	m_wndOutpatient.Create(this, _T("Outpatient"), 120, 504, 225, 529);
	m_wndDeposit.Create(this, _T("Deposit"), 56, 31, 56, 31);
	m_wndAll.Create(this, _T("All"), 231, 504, 299, 529);
	m_wndSOD.Create(this, _T("SOD"), 306, 504, 376, 529);
	m_wndSoldier.Create(this, _T("Soldier"), 382, 504, 476, 529);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 29, 90, 54);
	m_wndYear.Create(this,95, 29, 225, 54); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 29, 331, 54);
	m_wndReportPeriod.Create(this,346, 29, 476, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 225, 84); 
	m_wndToDate.Create(this,346, 59, 476, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 59, 331, 84);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 89, 90, 114);
	m_wndDept.Create(this,95, 89, 476, 114); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 119, 90, 144);
	m_wndRoom.Create(this,96, 119, 477, 144); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 148, 90, 173);
	m_wndDoctor.Create(this,95, 148, 476, 173); 
	m_wndClerk.Create(this,96, 147, 477, 172); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 178, 90, 203);
	m_wndOrderBy.Create(this,96, 177, 477, 202); 
	m_wndStatus.Create(this,95, 119, 476, 144); 
	m_wndList.Create(this,10, 207, 476, 498); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 56, 31, 56, 31);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 539, 85, 564);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 539, 170, 564);
	m_wndPrint.Create(this, _T("&Print"), 231, 540, 311, 565);
	m_wndExport.Create(this, _T("Export XLS"), 316, 540, 396, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 504, 115, 529);
	m_wndOutpatient.Create(this, _T("Outpatient"), 120, 504, 225, 529);
	m_wndDeposit.Create(this, _T("Deposit"), 56, 31, 56, 31);
	m_wndAll.Create(this, _T("All"), 231, 504, 299, 529);
	m_wndSOD.Create(this, _T("SOD"), 306, 504, 376, 529);
	m_wndSoldier.Create(this, _T("Soldier"), 382, 504, 476, 529);
	m_wndCreateData.Create(this, _T("Create Data"), 401, 540, 481, 565);
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnInitializeComponents(){
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

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMKetQuaHoatDongThuChiPhauThuThuat::OnSetWindowEvents(){
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
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
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

	m_wndList.AddEvent(3, _T("Check All BH-AB"), _OnListCheckAllBHABFnc);
	m_wndList.AddEvent(4, _T("Check All DV-AB"), _OnListCheckAllDVABFnc);
	m_wndList.AddEvent(5, _T("Check All QUAN-AB"), _OnListCheckAllQUANABFnc);

	m_wndList.AddEvent(6, _T("Check All BH"), _OnListCheckAllBHFnc);
	m_wndList.AddEvent(7, _T("Check All DV"), _OnListCheckAllDVFnc);
	m_wndList.AddEvent(8, _T("Check All QUAN"), _OnListCheckAllQUANFnc);

	m_wndList.AddEvent(9, _T("Search"), _OnListSearchItemFnc);

	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndSoldier.SetEvent(WE_CLICK, _OnSoldierSelectFnc);
	m_wndCreateData.SetEvent(WE_CLICK, _OnCreateDataSelectFnc);
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
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndSoldier.GetDlgCtrlID(), m_bSoldier);

}
void CFMKetQuaHoatDongThuChiPhauThuThuat::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMKetQuaHoatDongThuChiPhauThuThuat::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMKetQuaHoatDongThuChiPhauThuThuat::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_nPatientType = 3;
	m_bSOD = FALSE;
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

int CFMKetQuaHoatDongThuChiPhauThuThuat::SetMode(int nMode){
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

/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnYearChange(){
	
} */
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnYearSetfocus(){
	
} */
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnYearKillfocus(){
	
} */
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnYearCheckValue(){
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
 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnReportPeriodSelendok(){
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

/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnReportPeriodSetfocus(){
	
}*/
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnReportPeriodKillfocus(){
	
}*/
long CFMKetQuaHoatDongThuChiPhauThuThuat::OnReportPeriodLoadData(){
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

/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnFromDateChange(){
	
} */
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnFromDateSetfocus(){
	
} */
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnFromDateKillfocus(){
	
} */
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnToDateChange(){
	
} */
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnToDateSetfocus(){
	
} */
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnToDateKillfocus(){
	
} */
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnClerkSelendok(){
	 
}
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	long nCount = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DVYC"))==szItemText.Right(4))
	{
		m_wndList.SetCheck(i, true);
		nCount++;
	}
	else m_wndList.SetCheck(i, false);
	}
	_msg(_T("%ld"), nCount);
	m_szInvoiceNoType = _T(" AND substr(fac_invoiceno, -4, 4) = 'DVYC'");
	return 0;
}
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListCheckAllPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	long nCount = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PTTYC"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
		nCount++;
	}
	else m_wndList.SetCheck(i, false);
	}
	_msg(_T("%ld"), nCount);
	m_szInvoiceNoType = _T(" AND substr(fac_invoiceno, -5, 5) = 'PTTYC'");
	return 0;
}

int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListCheckAllBHAB()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	long nCount = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BH-AB"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
		nCount++;
	}
	else m_wndList.SetCheck(i, false);
	}
	_msg(_T("%ld"), nCount);
	m_szInvoiceNoType = _T(" AND substr(fac_invoiceno, -5, 5) = 'BH-AB'");
	return 0;
}
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListCheckAllDVAB()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	long nCount = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DV-AB"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
		nCount++;
	}
	else m_wndList.SetCheck(i, false);
	}
	_msg(_T("%ld"), nCount);
	m_szInvoiceNoType = _T(" AND substr(fac_invoiceno, -5, 5) = 'DV-AB'");
	return 0;
}


int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListCheckAllBH()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	long nCount = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
		if ((_T("BH"))==szItemText.Right(2))
		{
			m_wndList.SetCheck(i, true);
			nCount++;
		}
		else m_wndList.SetCheck(i, false);
	}
	_msg(_T("%ld"), nCount);
	m_szInvoiceNoType = _T(" AND substr(fac_invoiceno, -2, 2) = 'BH'");
	return 0;
}
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListCheckAllDV()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	long nCount = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
		if ((_T("DV"))==szItemText.Right(2))
		{
			m_wndList.SetCheck(i, true);
			nCount++;
		}
		else m_wndList.SetCheck(i, false);
	}
	_msg(_T("%ld"), nCount);
	m_szInvoiceNoType = _T(" AND substr(fac_invoiceno, -2, 2) = 'DV'");
	return 0;
}


int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListCheckAllQUAN()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	long nCount = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
		if ((_T("QUAN"))==szItemText.Right(4))
		{
			m_wndList.SetCheck(i, true);
			nCount++;
		}
		else m_wndList.SetCheck(i, false);
	}
	_msg(_T("%ld"), nCount);
	m_szInvoiceNoType = _T(" AND substr(fac_invoiceno, -4, 4) = 'QUAN'");
	return 0;
}

void CFMKetQuaHoatDongThuChiPhauThuThuat::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}

/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnClerkSetfocus(){
	
}*/
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnClerkKillfocus(){
	
}*/
long CFMKetQuaHoatDongThuChiPhauThuThuat::OnDoctorLoadData()
{
	/*CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'AB' AND su_groupid in ('D', 'P')"));
	return pMF->LoadUserList(&m_wndDoctor, m_szDoctorKey, szFilter);*/
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" and su_userid='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select su_userid as id, su_name as name from sys_user where su_groupid in ('D', 'P') and Su_Isactive='Y' and su_deptid='%s' %s"),m_szDeptKey, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}
long CFMKetQuaHoatDongThuChiPhauThuThuat::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
}

/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnStatusSetfocus(){
	
}*/
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnStatusKillfocus(){
	
}*/
long CFMKetQuaHoatDongThuChiPhauThuThuat::OnStatusLoadData(){
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
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnOrderBySelendok(){
	 
}
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnOrderBySetfocus(){
	
}*/
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnOrderByKillfocus(){
	
}*/
long CFMKetQuaHoatDongThuChiPhauThuThuat::OnOrderByLoadData(){
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
/*void CFMKetQuaHoatDongThuChiPhauThuThuat::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMKetQuaHoatDongThuChiPhauThuThuat::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN ('DT', 'KB') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}
long CFMKetQuaHoatDongThuChiPhauThuThuat::OnRoomLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT HRL_ID as id, HRL_NAME as name FROM Hms_Roomlist WHERE HRL_DEPTID in ('C1.1','C1.2','C1.3','TYC','AB') AND HRL_DEPTID='%s' %s ORDER BY hrl_id"), m_szDeptKey,szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

void CFMKetQuaHoatDongThuChiPhauThuThuat::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMKetQuaHoatDongThuChiPhauThuThuat::OnListLoadData(){
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
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
	}

	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id  in ('DVYC','DV-PTTYC')"));
	else if (m_bSoldier)
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F')"));
	else	
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','BH-NGAB') OR (fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') and FAC_POSTED ='Y' AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F'))"));	
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
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
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMKetQuaHoatDongThuChiPhauThuThuat::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++) m_wndList.SetCheck(i, TRUE);
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
} 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++) m_wndList.SetCheck(i, FALSE);
	m_szInvoiceNoType = _T("");
}

void CFMKetQuaHoatDongThuChiPhauThuThuat::OnInpatientSelect(){
	
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnOutpatientSelect()
{
	
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnDepositSelect(){
	
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnAllSelect(){
	
}
 
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnSODSelect(){
	OnListLoadData();
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnSoldierSelect()
{
	OnListLoadData();
}

 
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnSaveFMInsuranceReceiptSummary(){
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
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnCancelFMInsuranceReceiptSummary(){
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
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


void CFMKetQuaHoatDongThuChiPhauThuThuat::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail;
	CString szSQL, tmpStr, szTemp, szWhere, szNewDept, szOldDept, szSysDate, szDate;
	int nRow =0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTotal[20], nTtlTotal[20];
	for(int i = 0; i< 20; i++)
	{
		nTotal[i] = 0;
		nTtlTotal[i] = 0;
	}
	UpdateData(true);

	if (!rpt.Init(_T("Reports\\HMS\\HF_KETQUAHOATDONGTHUCHIPHAUTHUTHUAT.RPT")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	rpt.GetReportHeader()->SetValue(_T("DEPARTMENT"), pMF->GetCurrentDepartmentName());
	szSysDate = pMF->GetSysDateTime(); 
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("pdeptid"), szNewDept);
		if(szNewDept != szOldDept && !szNewDept.IsEmpty()){	
			if(nTotal[3] > 0)
			{			
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), _T("Cộng khoa:"));	
				for(int i = 3; i < 15; i++)
				{
					tmpStr.Format(_T("s%d"), i);
					rptDetail->SetValue(tmpStr, double2str(nTotal[i]));	
					nTtlTotal[i] += nTotal[i];
					nTotal[i] = 0;
				}
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptDetail->SetValue(_T("GroupName"), szNewDept);
			szOldDept = szNewDept;
			nIdx = 1;
		}

		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));		
		rs.GetValue(_T("optname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("qty"), tmpStr);
		nTotal[3] += str2double(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("price"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("pcost"), tmpStr);
		nTotal[5] += str2double(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("thuoctronggoi"), tmpStr);
		nTotal[6] += str2double(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("vattutronggoi"), tmpStr);
		nTotal[7] += str2double(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("thuocngoaigoi"), tmpStr);
		nTotal[8] += str2double(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("vattungoaigoi"), tmpStr);
		nTotal[9] += str2double(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("retprice"), tmpStr);
		nTotal[10] += str2double(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.MoveNext();
	}

	if(nTotal[3] > 0)
	{			
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), _T("Cộng khoa:"));	
		for(int i = 3; i < 15; i++)
		{
			tmpStr.Format(_T("s%d"), i);
			rptDetail->SetValue(tmpStr, double2str(nTotal[i]));	
			nTtlTotal[i] += nTotal[i];
			nTotal[i] = 0;
		}
	}

	if(nTtlTotal[3] > 0)
	{			
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), _T("Tổng cộng:"));	
		for(int i = 3; i < 15; i++)
		{
			tmpStr.Format(_T("s%d"), i);
			rptDetail->SetValue(tmpStr, double2str(nTtlTotal[i]));	
		}
	}

	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);		
	rpt.PrintPreview();
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnExportSelect()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szNewDept, szOldDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTotal[20], nTtlTotal[20];
	for(int i = 0; i< 20; i++)
	{
		nTotal[i] = 0;
		nTtlTotal[i] = 0;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 35);
	xls.SetColumnWidth(2, 6);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 12);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(0, 2, _T("KẾT QUẢ HOẠT ÐỘNG THU - CHI PHẪU THỦ THUẬT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 5, _T("Dịch vụ kỹ thuật"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 5, _T("Số lần"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 5, _T("Ðơn giá phẫu thuật"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 5, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 5, _T("Chi phí"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("Thuốc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("Trong gói"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("Ngoài gói"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("Vật tư"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 7, _T("Trong gói"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 7, _T("Ngoài gói"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("BDPTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("Chi phí khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 4, _T("Ðơn vị tính: Ðồng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("Cộng chi phí"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 5, _T("Chênh lệch"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 1);
	xls.SetMerge(1, 1, 0, 1);
	xls.SetMerge(2, 2, 0, 12);
	xls.SetMerge(3, 3, 0, 12);
	xls.SetMerge(5, 7, 0, 0);
	xls.SetMerge(5, 7, 1, 1);
	xls.SetMerge(5, 7, 2, 2);
	xls.SetMerge(5, 7, 3, 3);
	xls.SetMerge(5, 7, 4, 4);
	xls.SetMerge(5, 5, 5, 11);
	xls.SetMerge(6, 6, 5, 6);
	xls.SetMerge(6, 6, 7, 8);
	xls.SetMerge(6, 7, 9, 9);
	xls.SetMerge(6, 7, 10, 10);
	xls.SetMerge(4, 4, 11, 12);
	xls.SetMerge(6, 7, 11, 11);
	xls.SetMerge(5, 7, 12, 12);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF()){

		rs.GetValue(_T("pdeptid"), szNewDept);
		if(szNewDept != szOldDept && !szNewDept.IsEmpty()){	
			if(nTotal[2] > 0)
			{			
				xls.SetCellText(nCol+1, nRow, _T("Cộng khoa: "), FMT_TEXT, true);
				for(int i = 2; i < 10; i++)
				{
					xls.SetCellText(nCol+i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
					nTtlTotal[i] += nTotal[i];
					nTotal[i] = 0;
				}
				nRow++;	
			}

			xls.SetCellText(nCol+1, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;	
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("optname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("qty"), tmpStr);
		nTotal[2] += str2double(tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("pcost"), tmpStr);
		nTotal[4] += str2double(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("thuoctronggoi"), tmpStr);
		nTotal[5] += str2double(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("vattutronggoi"), tmpStr);
		nTotal[6] += str2double(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("thuocngoaigoi"), tmpStr);
		nTotal[7] += str2double(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("vattungoaigoi"), tmpStr);
		nTotal[8] += str2double(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("retprice"), tmpStr);
		nTotal[9] += str2double(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	if(nTotal[2] > 0)
	{			
		xls.SetCellText(nCol+1, nRow, _T("Cộng khoa: "), FMT_TEXT, true);
		for(int i = 2; i < 10; i++)
		{
			xls.SetCellText(nCol+i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
			nTtlTotal[i] += nTotal[i];
			nTotal[i] = 0;
		}
		nRow++;
	}

	if(nTtlTotal[2] > 0)
	{			
		xls.SetCellText(nCol+1, nRow, _T("Tổng cộng: "), FMT_TEXT, true);
		for(int i = 2; i < 10; i++)
		{
			xls.SetCellText(nCol+i, nRow, double2str(nTtlTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	
	nRow++;
	nRow++;
	nRow++;

	xls.SetCellText(nCol+1, nRow, _T("NGƯỜI LẬP"), FMT_TEXT, true);
	xls.SetCellText(nCol+9, nRow, _T("T/L GIÁM ĐỐC BỆNH VIỆN"), FMT_TEXT, true);
	nRow++;
	xls.SetCellText(nCol+9, nRow, _T("TRƯỞNG PHÒNG TÀI CHÍNH"), FMT_TEXT, true);
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("Thiếu úy Mai Thị Điệp Phương"), FMT_TEXT, true);
	xls.SetCellText(nCol+9, nRow, _T("Đại tá Phạm văn Điểm"), FMT_TEXT, true);

	EndWaitCursor();
	xls.Save(_T("Exports\\KetQuaHoatDongThuChiPhauThuThuat.xls"));
}
void CFMKetQuaHoatDongThuChiPhauThuThuat::OnCalcData(CRecord* rs, bool& bNewDate, bool& bNewDept)
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

void CFMKetQuaHoatDongThuChiPhauThuThuat::ResetVar(){
	for (int i = 0; i < 18; i++){
		m_nTotal[i] = 0;
		m_nDeptSum[i] = 0;
		m_nDaySum[i] = 0;
	}
	m_szPrevDate.Empty();
	m_szPrevDept.Empty();
}

double CFMKetQuaHoatDongThuChiPhauThuThuat::OnRound(double nToRound){
	nToRound += 0.5;
	return floor(nToRound);
}

CString CFMKetQuaHoatDongThuChiPhauThuThuat::GetQueryString()
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
		szWhere.Format(_T(" AND i.HFE_CASH_ID in(%s) "), szReceiptStr);
	else
		//szWhere4 = m_szWhere;	
		szWhere.AppendFormat(_T(" AND i.HFE_CASH_ID in(select IDX from tmp_fa_cash_C41 WHERE userid = '%s') "), pMF->m_szUser);

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
		szOrderBy.Format(_T(" , dept_id"));
	}


	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_class = 'I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and i.hfe_class <> 'I' "));
	}

	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_doctor = '%s'"), m_szDoctorKey);
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_pdeptid = '%s'"), m_szDeptKey);

	szSQL.Format(_T(" SELECT") \
		_T(" pdeptid,") \
		_T(" optname,") \
		_T(" SUM(qty) AS qty,") \
		_T(" price,") \
		_T(" SUM(pcost) AS pcost,") \
		_T(" SUM(thuoctronggoi) AS thuoctronggoi,") \
		_T(" SUM(vattutronggoi) AS vattutronggoi,") \
		_T(" SUM(thuocngoaigoi) AS thuocngoaigoi,") \
		_T(" SUM(vattungoaigoi) AS vattungoaigoi,") \
		_T(" SUM(hfl_retprice)  AS retprice") \
		_T(" FROM") \
		_T(" (") \
		_T("     SELECT") \
		_T("     ho_deptid AS deptid,") \
		_T("     CASE WHEN ho_pdeptid IS NULL THEN ho_deptid ELSE ho_pdeptid END AS pdeptid,") \
		_T("     ho_docno AS docno,") \
		_T("     ho_idx AS idx,") \
		_T("     ho_itemid AS feeid,") \
		_T("     hfl_groupid AS groupid,") \
		_T("     hfl_name AS optname,") \
		_T("     hfe_quantity AS qty,") \
		_T("     hfe_cost AS pcost,") \
		_T("     hfe_unitprice AS price,") \
		_T("     HMS_OPERATION_INPKG_AMOUNT(ho_docno, ho_idx) AS tronggoi,") \
		_T("     HMS_OPERATION_INOUTPKG_AMOUNT(ho_docno, ho_idx, 1) AS thuoctronggoi,") \
		_T("     HMS_OPERATION_INOUTPKG_AMOUNT(ho_docno, ho_idx, 2) AS vattutronggoi,") \
		_T("     HMS_OPERATION_INOUTPKG_AMOUNT(ho_docno, ho_idx, 3) AS thuocngoaigoi,") \
		_T("     HMS_OPERATION_INOUTPKG_AMOUNT(ho_docno, ho_idx, 4) AS vattungoaigoi,") \
		_T("     hfl_retprice") \
		_T("     FROM") \
		_T("     hms_operation op") \
		_T("     LEFT JOIN hms_fee e") \
		_T("     ON(hfe_docno = ho_docno AND hfe_orderid = ho_idx)") \
		_T("     LEFT JOIN hms_fee_invoice i") \
		_T("     ON(i.hfe_invoiceno = e.hfe_invoiceno)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid = ho_itemid)") \
		_T("     LEFT JOIN hms_object ob") \
		_T("     ON(ho_id = hfe_object)") \
		_T("     WHERE e.hfe_type = 'O' AND e.hfe_cost > 0 %s ") \
		_T(" ) tbl1") \
		_T(" GROUP BY pdeptid,") \
		_T(" optname,") \
		_T(" price") \
		_T(" ORDER BY pdeptid,") \
		_T(" optname,") \
		_T(" price"), szWhere);
		_fmsg(_T("%s"), szSQL);
		return szSQL;	
}
int CFMKetQuaHoatDongThuChiPhauThuThuat::OnListCheckAllQUANAB()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	long nCount = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BHQUAN"))==szItemText.Right(6))
	{
		m_wndList.SetCheck(i, true);
		nCount++;
	}
	else m_wndList.SetCheck(i, false);
	}
	_msg(_T("%ld"), nCount);
	m_szInvoiceNoType = _T(" AND substr(fac_invoiceno, -6, 6) = 'BHQUAN'");
	return 0;
}

void CFMKetQuaHoatDongThuChiPhauThuThuat::OnCreateDataSelect()
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
	else if (m_bSoldier)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F')"));
	else	
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','BH-NGAB') OR (fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') and FAC_POSTED ='Y' AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F'))"));	
		szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T(" FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	OnDeleteDataBeforeInsert();
	//_msg(_T("%s"), szSQL);

	szSQL2.Format(_T("Insert into tmp_fa_cash_C41 (SELECT fac_cash_id as idx, '%s' as userid FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s %s)"), pMF->m_szUser, szWhere, m_szInvoiceNoType);	
	int ret = pMF->ExecSQL(szSQL2);
	_msg(_T("Đã thực hiện insert %ld bản tin"), ret);	
}

int CFMKetQuaHoatDongThuChiPhauThuThuat::OnDeleteDataBeforeInsert()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL; 	
	szSQL.Format(_T("Delete from tmp_fa_cash_C41 where userid='%s'"), pMF->m_szUser);
	int ret = pMF->ExecSQL(szSQL);
	_msg(_T("Đã xóa %ld bản ghi"), ret);
	return 0;
}