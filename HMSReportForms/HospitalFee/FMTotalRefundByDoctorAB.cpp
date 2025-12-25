#include "stdafx.h"
#include "FMTotalRefundByDoctorAB.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalRefundByDoctorAB* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalRefundByDoctorAB* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalRefundByDoctorAB* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTotalRefundByDoctorAB* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB *)pWnd)->OnOrderByAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMTotalRefundByDoctorAB*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMTotalRefundByDoctorAB*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMTotalRefundByDoctorAB*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMTotalRefundByDoctorAB*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMTotalRefundByDoctorAB*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMTotalRefundByDoctorAB *pVw = (CFMTotalRefundByDoctorAB *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMTotalRefundByDoctorAB *pVw = (CFMTotalRefundByDoctorAB *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMTotalRefundByDoctorAB *pVw = (CFMTotalRefundByDoctorAB *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMTotalRefundByDoctorAB *pVw = (CFMTotalRefundByDoctorAB *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMTotalRefundByDoctorAB*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMTotalRefundByDoctorAB*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMTotalRefundByDoctorAB*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMTotalRefundByDoctorAB*)pWnd)->OnAllSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMTotalRefundByDoctorAB*)pWnd)->OnSODSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMTotalRefundByDoctorAB*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMTotalRefundByDoctorAB*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMTotalRefundByDoctorAB*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMTotalRefundByDoctorAB*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMTotalRefundByDoctorAB*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMTotalRefundByDoctorAB*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMTotalRefundByDoctorAB*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMTotalRefundByDoctorAB*)pWnd)->OnListCheckAllTYC();
	return 0;
}

static long _OnDoctorLoadDataFnc(CWnd *pWnd)
{
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnDoctorLoadData();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd)
{
	return ((CFMTotalRefundByDoctorAB *)pWnd)->OnRoomLoadData();
}
static int _OnListCheckAllBHABFnc(CWnd *pWnd)
{
	((CFMTotalRefundByDoctorAB*)pWnd)->OnListCheckAllBHAB();
	return 0;
}
static int _OnListCheckAllDVABFnc(CWnd *pWnd)
{
	((CFMTotalRefundByDoctorAB*)pWnd)->OnListCheckAllDVAB();
	return 0;
}
static void _OnSoldierSelectFnc(CWnd *pWnd)
{
	 ((CFMTotalRefundByDoctorAB*)pWnd)->OnSoldierSelect();
}

static int _OnListCheckAllQUANABFnc(CWnd *pWnd)
{
	((CFMTotalRefundByDoctorAB*)pWnd)->OnListCheckAllQUANAB();
	return 0;
}

static void _OnLoadAllSelectFnc(CWnd *pWnd)
{
	 ((CFMTotalRefundByDoctorAB*)pWnd)->OnLoadAllSelect();
}

static void _OnLoadCLCzoneSelectFnc(CWnd *pWnd)
{
	 ((CFMTotalRefundByDoctorAB*)pWnd)->OnLoadCLCzoneSelect();
}



CFMTotalRefundByDoctorAB::CFMTotalRefundByDoctorAB(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMTotalRefundByDoctorAB::~CFMTotalRefundByDoctorAB(){
}
void CFMTotalRefundByDoctorAB::OnCreateComponents()
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
	m_wndList.Create(this,10, 207, 476, 498); 
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
	m_wndSoldier.Create(this, _T("Soldier"), 382, 504, 476, 529);
	m_wndLoadAll.Create(this, _T("Load tất cả phiếu (trừ yêu cầu)"), 10, 176, 225, 201);
	m_wndLoadCLCzone.Create(this, _T("Phiếu khu CLC"), 240, 175, 476, 200);
}
void CFMTotalRefundByDoctorAB::OnInitializeComponents(){
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
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMTotalRefundByDoctorAB::OnSetWindowEvents(){
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

	m_wndList.AddEvent(6, _T("Search"), _OnListSearchItemFnc);

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
	m_wndLoadAll.SetEvent(WE_CLICK, _OnLoadAllSelectFnc);
	m_wndLoadCLCzone.SetEvent(WE_CLICK, _OnLoadCLCzoneSelectFnc);
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
void CFMTotalRefundByDoctorAB::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndLoadAll.GetDlgCtrlID(), m_bLoadAll);
	DDX_Check(pDX, m_wndLoadCLCzone.GetDlgCtrlID(), m_bLoadCLCzone);

}
void CFMTotalRefundByDoctorAB::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMTotalRefundByDoctorAB::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMTotalRefundByDoctorAB::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_nPatientType = 3;
	m_bSOD = FALSE;
	m_bLoadAll=FALSE;
	m_bLoadCLCzone=FALSE;
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

int CFMTotalRefundByDoctorAB::SetMode(int nMode){
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

/*void CFMTotalRefundByDoctorAB::OnYearChange(){
	
} */
/*void CFMTotalRefundByDoctorAB::OnYearSetfocus(){
	
} */
/*void CFMTotalRefundByDoctorAB::OnYearKillfocus(){
	
} */
int CFMTotalRefundByDoctorAB::OnYearCheckValue(){
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
 
void CFMTotalRefundByDoctorAB::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMTotalRefundByDoctorAB::OnReportPeriodSelendok(){
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

/*void CFMTotalRefundByDoctorAB::OnReportPeriodSetfocus(){
	
}*/
/*void CFMTotalRefundByDoctorAB::OnReportPeriodKillfocus(){
	
}*/

void CFMTotalRefundByDoctorAB::OnLoadAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();
}

	void CFMTotalRefundByDoctorAB::OnLoadCLCzoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}

long CFMTotalRefundByDoctorAB::OnReportPeriodLoadData(){
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

/*void CFMTotalRefundByDoctorAB::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMTotalRefundByDoctorAB::OnFromDateChange(){
	
} */
/*void CFMTotalRefundByDoctorAB::OnFromDateSetfocus(){
	
} */
/*void CFMTotalRefundByDoctorAB::OnFromDateKillfocus(){
	
} */
int CFMTotalRefundByDoctorAB::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMTotalRefundByDoctorAB::OnToDateChange(){
	
} */
/*void CFMTotalRefundByDoctorAB::OnToDateSetfocus(){
	
} */
/*void CFMTotalRefundByDoctorAB::OnToDateKillfocus(){
	
} */
int CFMTotalRefundByDoctorAB::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMTotalRefundByDoctorAB::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTotalRefundByDoctorAB::OnClerkSelendok(){
	 
}
int CFMTotalRefundByDoctorAB::OnListCheckAllTYC()
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
int CFMTotalRefundByDoctorAB::OnListCheckAllPTTYC()
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

int CFMTotalRefundByDoctorAB::OnListCheckAllBHAB()
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
int CFMTotalRefundByDoctorAB::OnListCheckAllDVAB()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DV-AB"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}


void CFMTotalRefundByDoctorAB::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}

/*void CFMTotalRefundByDoctorAB::OnClerkSetfocus(){
	
}*/
/*void CFMTotalRefundByDoctorAB::OnClerkKillfocus(){
	
}*/
long CFMTotalRefundByDoctorAB::OnDoctorLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'AB' AND su_groupid in ('D', 'P')"));
	return pMF->LoadUserList(&m_wndDoctor, m_szDoctorKey, szFilter);
}
long CFMTotalRefundByDoctorAB::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
}

/*void CFMTotalRefundByDoctorAB::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMTotalRefundByDoctorAB::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTotalRefundByDoctorAB::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMTotalRefundByDoctorAB::OnStatusSetfocus(){
	
}*/
/*void CFMTotalRefundByDoctorAB::OnStatusKillfocus(){
	
}*/
long CFMTotalRefundByDoctorAB::OnStatusLoadData(){
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
/*void CFMTotalRefundByDoctorAB::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMTotalRefundByDoctorAB::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTotalRefundByDoctorAB::OnOrderBySelendok(){
	 
}
/*void CFMTotalRefundByDoctorAB::OnOrderBySetfocus(){
	
}*/
/*void CFMTotalRefundByDoctorAB::OnOrderByKillfocus(){
	
}*/
long CFMTotalRefundByDoctorAB::OnOrderByLoadData(){
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
/*void CFMTotalRefundByDoctorAB::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
long CFMTotalRefundByDoctorAB::OnRoomLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT HRL_ID as id, HRL_NAME as name FROM Hms_Roomlist WHERE HRL_DEPTID='AB' %s ORDER BY hrl_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}


long CFMTotalRefundByDoctorAB::OnDeptLoadData()
{
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

void CFMTotalRefundByDoctorAB::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMTotalRefundByDoctorAB::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMTotalRefundByDoctorAB::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMTotalRefundByDoctorAB::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMTotalRefundByDoctorAB::OnListLoadData(){
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

	else if (m_bLoadAll)
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV', 'THE-DV', 'CK-DV', 'BH-NG','BH-NT', 'BHQUAN-NG','BHQUAN-NT', 'BH-NGAB','BH-NTAB', 'THE-BH', 'CK-BH')"));
	szWhere.AppendFormat(_T(" AND fac_cashbook_id not in ('DVYC','DV-PTTYC','BH-PTTYC', ") \
		_T(" 'THE-DV-YC','BHYC', 'THE-DV-PTTYC', ") \
		_T(" 'THE-BH-YC', 'THE-BH-PTTYC', 'CK-DV-YC', ") \
		_T(" 'CK-BH-YC','CK-DV-PTTYC', 'CK-BH-PTTYC')"));

	else if (m_bLoadCLCzone)
	
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVCLC','THE-DVCLC','CK-DVCLC', 'DVCLCA16','THE-DV-CLCA16','CK-DV-CLCA16')"));		
	else	
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','BH-NGAB','BHQUAN-NT', 'BHQUAN-NG')"));//
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','BH-NGAB') OR (fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') AND fac_invoicetype in('P') and FAC_POSTED ='Y' AND fac_invoicetype IN('P') AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F'))"));
	szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id %s 'DVYC'"), m_bSOD?_T("="):_T("<>"));
	
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T(" FROM fa_cash WHERE fac_invoicetype in('P') %s ORDER BY fac_cash_id"), szWhere);
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

void CFMTotalRefundByDoctorAB::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++) m_wndList.SetCheck(i, TRUE);
	
} 
void CFMTotalRefundByDoctorAB::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++) m_wndList.SetCheck(i, FALSE);
}

void CFMTotalRefundByDoctorAB::OnInpatientSelect(){
	
}
void CFMTotalRefundByDoctorAB::OnOutpatientSelect(){
	
}
void CFMTotalRefundByDoctorAB::OnDepositSelect(){
	
}
void CFMTotalRefundByDoctorAB::OnAllSelect(){
	
}
 
void CFMTotalRefundByDoctorAB::OnSODSelect(){
	OnListLoadData();
}
void CFMTotalRefundByDoctorAB::OnSoldierSelect()
{
	OnListLoadData();
}

 
int CFMTotalRefundByDoctorAB::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMTotalRefundByDoctorAB::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMTotalRefundByDoctorAB::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMTotalRefundByDoctorAB::OnSaveFMInsuranceReceiptSummary(){
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
int CFMTotalRefundByDoctorAB::OnCancelFMInsuranceReceiptSummary(){
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
int CFMTotalRefundByDoctorAB::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMTotalRefundByDoctorAB::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;
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

void CFMTotalRefundByDoctorAB::OnPrint1stver()
{
	return;
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

void CFMTotalRefundByDoctorAB::OnPrint2ndver()
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
					tmpStr.Format(_T("\x43\x1ED9ng kho\x61 %s"), szOldLev1);
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
				tmpStr.Format(_T("\x43\x1ED9ng ng\xE0y (%s):"), CDate::Convert(szOldIndex, yyyymmdd, ddmmyyyy));
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
					if (nGrandIO > 0)
					{
						rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
						tmpStr.Format(_T("\x43\x1ED9ng kho\x61 %s"), szOldLev1);
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
			tmpStr.Format(_T("\x43\x1ED9ng kho\x61 %s"), szOldLev1);
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
		tmpStr.Format(_T("\x43\x1ED9ng ng\xE0y (%s):"), CDate::Convert(szOldIndex, yyyymmdd, ddmmyyyy));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMTotalRefundByDoctorAB"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);


	rpt.PrintPreview();
}



void CFMTotalRefundByDoctorAB::OnExportSelect()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export chi tiết doanh thu theo bác sĩ"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export tổng hợp doanh thu theo bác sĩ"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportDetail();
			break;
		case 2:
			OnExportTotal();
			break;		
	}	
}
void CFMTotalRefundByDoctorAB::OnExportDetail()
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
	if (!xls.Load(_T("Exports\\BANG_TONG_HOP_CHI_THEO_BAC_SI.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 13);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 13);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringDetail();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 13;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("doctorname"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[17] > 0)
			{
				xls.SetCellText(1, nRow, _T("Cộng theo BS:"), FMT_TEXT, true);

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

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tien_kham_dv"), nTemp);		
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_kham_bh"), nTemp);		
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tien_kham"), nTemp);		
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tien_xn"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_cdha"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);			

		rs.GetValue(_T("tien_tdcn"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_mau"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_noi_soi"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_pttt"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tienthuoc_vattu"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tien_phikhac"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("cong"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tongcong"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[17] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng theo BS:"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[17] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BANG_TONG_HOP_CHI_THEO_BAC_SI2.xls"));
}
void CFMTotalRefundByDoctorAB::OnExportTotal()
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
	if (!xls.Load(_T("Exports\\BANG_TONG_HOP_CHI_THEO_BAC_SI_TONGHOP.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 13);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 13);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringTotal();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 13;
	nCol = 0;
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		

		rs.GetValue(_T("doctorname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doctordept"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong_kham_dv"), nTemp);		
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_kham_dv"), nTemp);		
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("soluong_kham_bh"), nTemp);		
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_kham_bh"), nTemp);		
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tien_kham"), nTemp);		
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tien_xn"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_cdha"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);			

		rs.GetValue(_T("tien_tdcn"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_mau"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_noi_soi"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_pttt"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tienthuoc_vattu"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tien_phikhac"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("cong"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tongcong"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[19] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng theo BS:"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[19] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BANG_TONG_HOP_CHI_THEO_BAC_SI_TONGHOP2.xls"));
}

void CFMTotalRefundByDoctorAB::OnPrint2ndver_(){
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

int CFMTotalRefundByDoctorAB::OnCheckBeforePrint(CReport* rpt, CRecord& rs){
	CString szSQL;
	szSQL = GetQueryString();
	if (rs.ExecSQL(szSQL) <= 0){
		AfxMessageBox(_T("No Data!"));
		return -1;
	}
	if (!rpt->Init(_T("Reports\\HMS\\HF_BANGTHTHANHTOAN_NOITRU_NGOAITRU.RPT"))) return -1;
	return 0;
}

void CFMTotalRefundByDoctorAB::OnPrintOther(CReport* rpt){
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

void CFMTotalRefundByDoctorAB::IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept, CReportSection** ppDateGroup, CReportSection** ppDeptGroup){
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

void CFMTotalRefundByDoctorAB::IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept){
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

void CFMTotalRefundByDoctorAB::OnPrintGroupSummary(CReport* rpt, bool bNewDate, bool bNewDept, CReportSection* pDateGroup, CReportSection* pDeptGroup){
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

void CFMTotalRefundByDoctorAB::OnPrintGroupSummary(CReport* rpt, bool bNewDate, bool bNewDept){
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

void CFMTotalRefundByDoctorAB::OnPrintGroupDescr(CReport* rpt, CRecord* rs, bool bNewDate, bool bNewDept){
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

void CFMTotalRefundByDoctorAB::OnPrintGroupDescr(CReport* rpt, CRecord* rs, bool bNewDate, bool bNewDept, CReportSection** ppDateGroup, CReportSection** ppDeptGroup){
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

void CFMTotalRefundByDoctorAB::OnPrintDetail(CReport* rpt, CRecord* rs)
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

void CFMTotalRefundByDoctorAB::OnPrintDetail(CReport* rpt, CReportSection* ppDetail, CRecord* rs){
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

void CFMTotalRefundByDoctorAB::OnCalcData(CRecord* rs, bool& bNewDate, bool& bNewDept)
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

void CFMTotalRefundByDoctorAB::ResetVar(){
	for (int i = 0; i < 18; i++){
		m_nTotal[i] = 0;
		m_nDeptSum[i] = 0;
		m_nDaySum[i] = 0;
	}
	m_szPrevDate.Empty();
	m_szPrevDept.Empty();
}

CString CFMTotalRefundByDoctorAB::GetQueryStringDetail()
{
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;


	szReceiptStr = _T("-13");
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
	m_szCashIDS.Replace(_T("-13,"), _T(""));

	szWhere.Format(_T(" and r.HFE_CASH_ID in(%s) "), szReceiptStr);
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

	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND doctor = '%s'"), m_szDoctorKey);
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);	

			szSQL.Format(_T(" SELECT patname,") \
			_T("   docno,") \
			_T("   GET_USERNAME(doctor)                                                                                                               AS doctorname,") \
			_T("   SUM(tien_kham_dv)                                                                                                                  AS tien_kham_dv,") \
			_T("   SUM(tien_kham_bh)                                                                                                                  AS tien_kham_bh,") \
			_T("   SUM(tien_kham_dv+tien_kham_bh)                                                                                                     AS tien_kham,") \
			_T("   SUM(tien_xn)                                                                                                                       AS tien_xn,") \
			_T("   SUM(tien_cdha)                                                                                                                     AS tien_cdha,") \
			_T("   SUM(tien_tdcn)                                                                                                                     AS tien_tdcn,") \
			_T("   SUM(tien_noi_soi)                                                                                                                  AS tien_noi_soi,") \
			_T("   SUM(tien_pttt)                                                                                                                     AS tien_pttt,") \
			_T("   SUM(tien_phikhac)                                                                                                                  AS tien_phikhac,") \
			_T("   SUM(tien_xn_mau +tienmau)                                                                                                          AS tien_mau,") \
			_T("   SUM(tienthuoc_vattu+tienthuoc_vattu1)                                                                                                               AS tienthuoc_vattu,") \
			_T("   SUM(tien_xn     +tien_cdha+tien_tdcn+tien_noi_soi+tien_pttt+tien_phikhac+tien_xn_mau+tienmau+tienthuoc_vattu+tienthuoc_vattu1)                      AS cong,") \
			_T("   SUM(tien_kham_dv+tien_kham_bh+tien_xn+tien_cdha+tien_tdcn+tien_noi_soi+tien_pttt+tien_phikhac+tien_xn_mau+tienmau+tienthuoc_vattu+tienthuoc_vattu1) AS tongcong") \
			_T(" FROM") \
			_T("   (SELECT Get_patientname(r.hfe_docno) AS patname,") \
			_T("     r.hfe_docno                        AS docno,") \
			_T("     doctor,") \
			_T("     tien_kham_dv,") \
			_T("     tien_kham_bh,") \
			_T("     tien_xn,") \
			_T("     tien_cdha,") \
			_T("     tien_tdcn,") \
			_T("     tien_xn_mau,") \
			_T("     tien_noi_soi,") \
			_T("     tien_pttt,") \
			_T("     tien_phikhac,") \
			_T("     tienmau,") \
			_T("     tienthuoc_vattu1,") \
			_T("     tienthuoc_vattu") \
			_T("   FROM Hms_Fee_Refund r") \
			_T("   INNER JOIN") \
			_T("     (") \
			_T("     SELECT rl.hfe_docno,") \
			_T("       rl.hfe_invoiceno,") \
			_T("       rl.hfe_deptid dept_id,") \
			_T("       HPO_DOCTOR doctor,") \
			_T("       0 tien_kham_dv,") \
			_T("       0 tien_kham_bh,") \
			_T("       0 tien_xn,") \
			_T("       0 tien_cdha,") \
			_T("       0 tien_tdcn,") \
			_T("       0 tien_xn_mau,") \
			_T("       0 tien_noi_soi,") \
			_T("       0 tien_pttt,") \
			_T("       0 tien_phikhac,") \
			_T("       0        AS tienmau,") \
			_T("       rl.hfe_patpaid AS tienthuoc_vattu1,") \
			_T("       0 AS tienthuoc_vattu") \
			_T("     FROM hms_fee f") \
			_T("       LEFT JOIN hms_pharmaorder") \
			_T("     ON (hpo_docno   = f.hfe_docno") \
			_T("     AND f.hfe_orderid = hpo_orderid)") \
			_T("     LEFT JOIN m_productitem_view_vp") \
			_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
			_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno         = f.hfe_docno)") \
			_T("     LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno = f.hfe_docno and r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid=Rl.Hfe_Itemid)") \
			_T("     INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno = ro.hpo_invoiceno AND f.hfe_orderid=Ro.Hpo_Orderid)      ") \
			_T("     WHERE f.hfe_status NOT IN ('O', 'C')") \
			_T("     AND f.hfe_type         IN ('D', 'M')") \
			_T("     AND product_org_id        IN ('PM' ,'MA')") \
			_T("     AND f.hfe_category      ='N'") \
			_T("     %s") \
			_T("     UNION ALL") \
			_T("     SELECT rl.hfe_docno,") \
			_T("       rl.hfe_invoiceno,") \
			_T("       rl.hfe_deptid dept_id,") \
			_T("       HPO_DOCTOR doctor,") \
			_T("       0 tien_kham_dv,") \
			_T("       0 tien_kham_bh,") \
			_T("       0 tien_xn,") \
			_T("       0 tien_cdha,") \
			_T("       0 tien_tdcn,") \
			_T("       0 tien_xn_mau,") \
			_T("       0 tien_noi_soi,") \
			_T("       0 tien_pttt,") \
			_T("       0 tien_phikhac,") \
			_T("       0        AS tienmau,") \
			_T("       0 AS tienthuoc_vattu1,") \
			_T("       rl.hfe_cost AS tienthuoc_vattu") \
			_T("     FROM hms_fee f") \
			_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
			_T("     LEFT JOIN hms_pharmaorder") \
			_T("     ON (hpo_docno   = f.hfe_docno") \
			_T("     AND f.hfe_orderid = hpo_orderid)") \
			_T("     LEFT JOIN m_product_item") \
			_T("     ON (f.hfe_itemid = mpi_product_item_id)") \
			_T("     LEFT JOIN m_product") \
			_T("     ON (mp_product_id     = mpi_product_id)") \
			_T("     WHERE f.hfe_status NOT IN ('O', 'C')") \
			_T("     AND f.hfe_type         IN ('D', 'M')") \
			_T("     AND mp_org_id        IN ('PM' ,'MA', 'PĐD', 'HC')") \
			_T("     AND f.hfe_category      ='N'") \
			_T("     UNION ALL") \
			_T("     SELECT rl.hfe_docno,") \
			_T("       rl.hfe_invoiceno,") \
			_T("       rl.hfe_deptid dept_id,") \
			_T("       NULL AS doctor,") \
			_T("       0 tien_kham_dv,") \
			_T("       0 tien_kham_bh,") \
			_T("       0 tien_xn,") \
			_T("       0 tien_cdha,") \
			_T("       0 tien_tdcn,") \
			_T("       0 tien_xn_mau,") \
			_T("       0 tien_noi_soi,") \
			_T("       0 tien_pttt,") \
			_T("       0 tien_phikhac,") \
			_T("       rl.hfe_cost AS tienmau,") \
			_T("       0 AS tienthuoc_vattu1,") \
			_T("       0        AS tienthuoc_vattu") \
			_T("     FROM hms_fee f") \
			_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
			_T("     LEFT JOIN hms_pharmaorder") \
			_T("     ON (hpo_docno   = f.hfe_docno") \
			_T("     AND f.hfe_orderid = hpo_orderid)") \
			_T("     LEFT JOIN m_product_item") \
			_T("     ON (f.hfe_itemid = mpi_product_item_id)") \
			_T("     LEFT JOIN m_product") \
			_T("     ON (mp_product_id     = mpi_product_id)") \
			_T("     WHERE f.hfe_status NOT IN ('O', 'C')") \
			_T("     AND f.hfe_type         IN ('D', 'M')") \
			_T("     AND mp_org_id         = 'BB'") \
			_T("     AND f.hfe_category      ='N'") \
			_T("     UNION ALL") \
			_T("     SELECT rl.hfe_docno,") \
			_T("       rl.hfe_invoiceno,") \
			_T("       rl.hfe_deptid dept_id,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type = 'E'") \
			_T("         THEN he_doctor") \
			_T("         ELSE") \
			_T("           CASE") \
			_T("             WHEN f.hfe_type IN ('P', 'T')") \
			_T("             THEN HPC_CREATEDBY") \
			_T("             ELSE HO_CREATEDBY") \
			_T("           END") \
			_T("       END doctor,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type = 'E'") \
			_T("         AND f.Hfe_Object=7") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END tien_kham_dv,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type  = 'E'") \
			_T("         AND f.Hfe_Object<>7") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \

			_T("       END tien_kham_bh,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type           IN ('T', 'P')") \
			_T("         AND SUBSTR(f.hfe_group,1,2)='B1'") \
			_T("         AND f.hfe_group           <> 'B1G00'") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END tien_xn,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type           IN ('T', 'P')") \
			_T("         AND SUBSTR(f.hfe_group,1,2)='B2'") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END tien_cdha,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type           IN ('T', 'P')") \
			_T("         AND SUBSTR(rl.hfe_group,1,2)='B3'") \
			_T("         AND f.hfe_group           <> 'B3100'") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END tien_tdcn,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type IN ('T', 'P')") \
			_T("         AND f.hfe_group  = 'B1G00'") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END tien_xn_mau,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type IN ('T', 'P')") \
			_T("         AND f.hfe_group  = 'B3100'") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END tien_noi_soi,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type IN ('O')") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END tien_pttt,") \
			_T("       CASE") \
			_T("         WHEN f.hfe_type IN ('X')") \
			_T("         THEN rl.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END tien_phikhac,") \
			_T("       0 AS tienmau,") \
			_T("       0 AS tienthuoc_vattu1,") \
			_T("       0 tienthuoc_vattu") \
			_T("     FROM hms_fee f") \
			_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
			_T("     LEFT JOIN hms_exam") \
			_T("     ON (f.hfe_type    = 'E'") \
			_T("     AND f.hfe_orderid = he_receptidx") \
			_T("     AND f.hfe_docno   = he_docno)") \
			_T("     LEFT JOIN hmsv_paraclinic") \
			_T("     ON (f.hfe_type   IN ('T', 'P')") \
			_T("     AND hpc_docno   = f.hfe_docno") \
			_T("     AND hpc_orderid = f.hfe_orderid)") \
			_T("     LEFT JOIN hms_operation") \
			_T("     ON (f.hfe_type        = 'O'") \
			_T("     AND ho_docno        = f.hfe_docno") \
			_T("     AND ho_idx          = f.hfe_orderid)") \
			_T("     WHERE f.hfe_type     IN ('E', 'T', 'P', 'O','X')") \
			_T("     AND f.hfe_status NOT IN ('O', 'C')") \
			_T("     AND f.hfe_category    ='N'") \
			_T("     ) fr ON (fr.hfe_docno = r.hfe_docno") \
			_T("   AND fr.hfe_invoiceno   = r.hfe_invoiceno)") \
			_T("   %s") \
			_T("   )tbl") \
			_T(" GROUP BY doctor,") \
			_T("   patname,") \
			_T("   docno") \
			_T(" ORDER BY doctor"), szWhere, szWhere);

			return szSQL;	
}
double CFMTotalRefundByDoctorAB::OnRound(double nToRound){
	nToRound += 0.5;
	return floor(nToRound);
}

CString CFMTotalRefundByDoctorAB::GetQueryStringTotal()
{
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

	szWhere.Format(_T(" and r.HFE_CASH_ID in(%s) "), szReceiptStr);
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

	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND doctor = '%s'"), m_szDoctorKey);
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);

		szSQL.Format(_T(" SELECT GET_USERNAME(doctor)") \
					_T("   ||'['") \
					_T("   ||doctor") \
					_T("   ||']'") \
					_T("   ||'['") \
					_T("   ||GET_DEPTNAME(doctor)") \
					_T("   ||'] '                                                                                                                             AS doctorname,") \
					_T("   GET_DEPTNAME(doctor)                                                                                                               AS doctordept,") \
					_T("   doctor                                                                                                                             AS doctor,") \
					_T("   SUM(soluong_kham_dv)                                                                                                               AS soluong_kham_dv,") \
					_T("   SUM(soluong_kham_bh)                                                                                                               AS soluong_kham_bh,") \
					_T("   SUM(tien_kham_dv)                                                                                                                                      AS tien_kham_dv,") \
					_T("   SUM(tien_kham_bh)                                                                                                                                      AS tien_kham_bh,") \
					_T("   SUM(tien_kham_dv+tien_kham_bh)                                                                                                                         AS tien_kham,") \
					_T("   SUM(tien_xn)                                                                                                                                           AS tien_xn,") \
					_T("   SUM(tien_cdha)                                                                                                                                         AS tien_cdha,") \
					_T("   SUM(tien_tdcn)                                                                                                                                         AS tien_tdcn,") \
					_T("   SUM(tien_noi_soi)                                                                                                                                      AS tien_noi_soi,") \
					_T("   SUM(tien_pttt)                                                                                                                                         AS tien_pttt,") \
					_T("   SUM(tien_phikhac)                                                                                                                                      AS tien_phikhac,") \
					_T("   SUM(tien_xn_mau    +tienmau)                                                                                                                           AS tien_mau,") \
					_T("   SUM(tienthuoc_vattu+tienthuoc_vattu1)                                                                                                                  AS tienthuoc_vattu,") \
					_T("   SUM(tien_xn        +tien_cdha+tien_tdcn+tien_noi_soi+tien_pttt+tien_phikhac+tien_xn_mau+tienmau+tienthuoc_vattu+tienthuoc_vattu1)                      AS cong,") \
					_T("   SUM(tien_kham_dv   +tien_kham_bh+tien_xn+tien_cdha+tien_tdcn+tien_noi_soi+tien_pttt+tien_phikhac+tien_xn_mau+tienmau+tienthuoc_vattu+tienthuoc_vattu1) AS tongcong") \
					_T(" FROM") \
					_T("   (SELECT Get_patientname(r.hfe_docno) AS patname,") \
					_T("     r.hfe_docno                        AS docno,") \
					_T("     doctor,") \
					_T("     soluong_kham_dv,") \
					_T("     soluong_kham_bh,") \
					_T("     tien_kham_dv,") \
					_T("     tien_kham_bh,") \
					_T("     tien_xn,") \
					_T("     tien_cdha,") \
					_T("     tien_tdcn,") \
					_T("     tien_xn_mau,") \
					_T("     tien_noi_soi,") \
					_T("     tien_pttt,") \
					_T("     tien_phikhac,") \
					_T("     tienmau,") \
					_T("     tienthuoc_vattu1,") \
					_T("     tienthuoc_vattu") \
					_T("   FROM Hms_Fee_Refund r") \
					_T("   INNER JOIN") \
					_T("     (SELECT rl.hfe_docno,") \
					_T("       rl.hfe_invoiceno,") \
					_T("       rl.hfe_deptid dept_id,") \
					_T("       HPO_DOCTOR doctor,") \
					_T("       0 AS soluong_kham_dv,") \
					_T("       0 AS soluong_kham_bh,") \

					_T(" 0 tien_kham_dv,") \
					_T("       0 tien_kham_bh,") \
					_T("       0 tien_xn,") \
					_T("       0 tien_cdha,") \
					_T("       0 tien_tdcn,") \
					_T("       0 tien_xn_mau,") \
					_T("       0 tien_noi_soi,") \
					_T("       0 tien_pttt,") \
					_T("       0 tien_phikhac,") \
					_T("       0              AS tienmau,") \
					_T("       rl.hfe_patpaid AS tienthuoc_vattu1,") \
					_T("       0              AS tienthuoc_vattu") \
					_T("     FROM hms_fee f") \
					_T("     LEFT JOIN hms_pharmaorder") \
					_T("     ON (hpo_docno     = f.hfe_docno") \
					_T("     AND f.hfe_orderid = hpo_orderid)") \
					_T("     LEFT JOIN m_productitem_view_vp") \
					_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
					_T("     LEFT JOIN Hms_Fee_Refund r") \
					_T("     ON (r.hfe_docno = f.hfe_docno)") \
					_T("     LEFT JOIN Hms_Fee_Refundline rl") \
					_T("     ON (rl.hfe_docno   = f.hfe_docno") \
					_T("     AND r.hfe_invoiceno=rl.hfe_invoiceno") \
					_T("     AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
					_T("     INNER JOIN hms_pharmareturnorder ro") \
					_T("     ON (r.hfe_invoiceno     = ro.hpo_invoiceno") \
					_T("     AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
					_T("     WHERE f.hfe_status NOT IN ('O', 'C')") \
					_T("     AND f.hfe_type         IN ('D', 'M')") \
					_T("     AND product_org_id     IN ('PM' ,'MA')") \
					_T("     AND f.hfe_category      ='N'") \
					_T("     %s") \
					_T("     UNION ALL") \
					_T("     SELECT rl.hfe_docno,") \
					_T("       rl.hfe_invoiceno,") \
					_T("       rl.hfe_deptid dept_id,") \
					_T("       HPO_DOCTOR doctor,") \
					_T("       0 AS soluong_kham_dv,") \
					_T("       0 AS soluong_kham_bh,") \
					_T("       0 tien_kham_dv,") \
					_T("       0 tien_kham_bh,") \
					_T("       0 tien_xn,") \
					_T("       0 tien_cdha,") \
					_T("       0 tien_tdcn,") \
					_T("       0 tien_xn_mau,") \
					_T("       0 tien_noi_soi,") \
					_T("       0 tien_pttt,") \
					_T("       0 tien_phikhac,") \
					_T("       0           AS tienmau,") \
					_T("       0           AS tienthuoc_vattu1,") \

					_T("   rl.hfe_cost AS tienthuoc_vattu") \
					_T("     FROM hms_fee f") \
					_T("     LEFT JOIN Hms_Fee_Refundline rl") \
					_T("     ON (f.hfe_docno =rl.hfe_docno") \
					_T("     AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
					_T("     LEFT JOIN hms_pharmaorder") \
					_T("     ON (hpo_docno     = f.hfe_docno") \
					_T("     AND f.hfe_orderid = hpo_orderid)") \
					_T("     LEFT JOIN m_product_item") \
					_T("     ON (f.hfe_itemid = mpi_product_item_id)") \
					_T("     LEFT JOIN m_product") \
					_T("     ON (mp_product_id       = mpi_product_id)") \
					_T("     WHERE f.hfe_status NOT IN ('O', 'C')") \
					_T("     AND f.hfe_type         IN ('D', 'M')") \
					_T("     AND mp_org_id          IN ('PM' ,'MA', 'PĐD', 'HC')") \
					_T("     AND f.hfe_category      ='N'") \
					_T("     UNION ALL") \
					_T("     SELECT rl.hfe_docno,") \
					_T("       rl.hfe_invoiceno,") \
					_T("       rl.hfe_deptid dept_id,") \
					_T("       NULL AS doctor,") \
					_T("       0 AS soluong_kham_dv,") \
					_T("       0 AS soluong_kham_bh,") \
					_T("       0 tien_kham_dv,") \
					_T("       0 tien_kham_bh,") \
					_T("       0 tien_xn,") \
					_T("       0 tien_cdha,") \
					_T("       0 tien_tdcn,") \
					_T("       0 tien_xn_mau,") \
					_T("       0 tien_noi_soi,") \
					_T("       0 tien_pttt,") \
					_T("       0 tien_phikhac,") \
					_T("       rl.hfe_cost AS tienmau,") \
					_T("       0           AS tienthuoc_vattu1,") \
					_T("       0           AS tienthuoc_vattu") \
					_T("     FROM hms_fee f") \
					_T("     LEFT JOIN Hms_Fee_Refundline rl") \
					_T("     ON (f.hfe_docno =rl.hfe_docno") \
					_T("     AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
					_T("     LEFT JOIN hms_pharmaorder") \
					_T("     ON (hpo_docno     = f.hfe_docno") \
					_T("     AND f.hfe_orderid = hpo_orderid)") \
					_T("     LEFT JOIN m_product_item") \
					_T("     ON (f.hfe_itemid = mpi_product_item_id)") \
					_T("     LEFT JOIN m_product") \
					_T("     ON (mp_product_id       = mpi_product_id)") \
					_T("     WHERE f.hfe_status NOT IN ('O', 'C')") \
					_T("     AND f.hfe_type         IN ('D', 'M')") \
					_T("     AND mp_org_id           = 'BB'") \
					_T("     AND f.hfe_category      ='N'") \

					_T("   UNION ALL") \
					_T("     SELECT rl.hfe_docno,") \
					_T("       rl.hfe_invoiceno,") \
					_T("       rl.hfe_deptid dept_id,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type = 'E'") \
					_T("         THEN he_doctor") \
					_T("         ELSE") \
					_T("           CASE") \
					_T("             WHEN f.hfe_type IN ('P', 'T')") \
					_T("             THEN HPC_CREATEDBY") \
					_T("             ELSE HO_CREATEDBY") \
					_T("           END") \
					_T("       END doctor,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type = 'E'") \
					_T("         AND f.Hfe_Object=7") \
					_T("         THEN rl.Hfe_Quantity") \
					_T("         ELSE 0") \
					_T("       END soluong_kham_dv,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type  = 'E'") \
					_T("         AND f.Hfe_Object<>7") \
					_T("         THEN rl.Hfe_Quantity") \
					_T("         ELSE 0") \
					_T("       END soluong_kham_bh,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type = 'E'") \
					_T("         AND f.Hfe_Object=7") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_kham_dv,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type  = 'E'") \
					_T("         AND f.Hfe_Object<>7") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_kham_bh,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type           IN ('T', 'P')") \
					_T("         AND SUBSTR(f.hfe_group,1,2)='B1'") \
					_T("         AND f.hfe_group           <> 'B1G00'") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_xn,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type           IN ('T', 'P')") \
					_T("         AND SUBSTR(f.hfe_group,1,2)='B2'") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_cdha,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type            IN ('T', 'P')") \
					_T("         AND SUBSTR(rl.hfe_group,1,2)='B3'") \
					_T("         AND f.hfe_group            <> 'B3100'") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_tdcn,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type IN ('T', 'P')") \
					_T("         AND f.hfe_group  = 'B1G00'") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_xn_mau,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type IN ('T', 'P')") \
					_T("         AND f.hfe_group  = 'B3100'") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_noi_soi,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type IN ('O')") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_pttt,") \
					_T("       CASE") \
					_T("         WHEN f.hfe_type IN ('X')") \
					_T("         THEN rl.hfe_cost") \
					_T("         ELSE 0") \
					_T("       END tien_phikhac,") \
					_T("       0 AS tienmau,") \
					_T("       0 AS tienthuoc_vattu1,") \
					_T("       0 tienthuoc_vattu") \
					_T("     FROM hms_fee f") \
					_T("     LEFT JOIN Hms_Fee_Refundline rl") \
					_T("     ON (f.hfe_docno =rl.hfe_docno") \
					_T("     AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
					_T("     LEFT JOIN hms_exam") \
					_T("     ON (f.hfe_type    = 'E'") \
					_T("     AND f.hfe_orderid = he_receptidx") \
					_T("     AND f.hfe_docno   = he_docno)") \
					_T("     LEFT JOIN hmsv_paraclinic") \
					_T("     ON (f.hfe_type IN ('T', 'P')") \
					_T("     AND hpc_docno   = f.hfe_docno") \
					_T("     AND hpc_orderid = f.hfe_orderid)") \
					_T("     LEFT JOIN hms_operation") \
					_T("     ON (f.hfe_type        = 'O'") \
					_T("     AND ho_docno          = f.hfe_docno") \
					_T("     AND ho_idx            = f.hfe_orderid)") \
					_T("     WHERE f.hfe_type     IN ('E', 'T', 'P', 'O','X')") \
					_T("     AND f.hfe_status NOT IN ('O', 'C')") \
					_T("     AND f.hfe_category    ='N'") \
					_T("     ) fr ON (fr.hfe_docno = r.hfe_docno") \
					_T("   AND fr.hfe_invoiceno    = r.hfe_invoiceno)") \
					_T("   %s") \
					_T("   )tbl") \
					_T(" GROUP BY doctor,") \
					_T("   patname,") \
					_T("   docno") \
					_T(" ORDER BY doctor"), szWhere, szWhere);			
					return szSQL;	
}
CString CFMTotalRefundByDoctorAB::GetQueryString()
{
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;
	return szSQL;	
}
int CFMTotalRefundByDoctorAB::OnListCheckAllQUANAB()
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
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
