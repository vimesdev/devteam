#include "stdafx.h"
#include "FMPostedReceiptVoucherList2.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "FMFinancialDocumentPrinter.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPostedReceiptVoucherList2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPostedReceiptVoucherList2* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPostedReceiptVoucherList2* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPostedReceiptVoucherList2* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2 *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2 *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMPostedReceiptVoucherList2*)pWnd)->OnWithoutGeneralSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMPostedReceiptVoucherList2*)pWnd)->OnSODSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPostedReceiptVoucherList2*)pWnd)->OnListDeleteItem();
} 
static int _OnListSearchItemFnc(CWnd *pWnd)
{
	 ((CFMPostedReceiptVoucherList2*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCPTTYCFnc(CWnd *pWnd)
{
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllTYCPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static int _OnListCheckAllCardTYCFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllCardTYC();
	return 0;
}

static int _OnListCheckAllCardCLCFnc(CWnd *pWnd)
{
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllCardCLC();
	return 0;
}

static int _OnListUnCheckAllCardCLCFnc(CWnd *pWnd)
{
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListUnCheckAllCardCLC();
	return 0;
}

static int _OnListCheckAllCardPTTYCFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllCardPTTYC();
	return 0;
}
static int _OnListCheckAllCardTYCPTTYCFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllCardTYCPTTYC();
	return 0;
}
//
static int _OnListCheckAllMTTYCFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllMTTYC();
	return 0;
}

static int _OnListCheckAllMTCLCFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllMTCLC();
	return 0;
}

static int _OnListUnCheckAllMTCLCFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListUnCheckAllMTCLC();
	return 0;
}

static int _OnListCheckAllMTPTTYCFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllMTPTTYC();
	return 0;
}
static int _OnListCheckAllMTTYCPTTYCFnc(CWnd *pWnd){
	((CFMPostedReceiptVoucherList2*)pWnd)->OnListCheckAllMTTYCPTTYC();
	return 0;
}
//
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMPostedReceiptVoucherList2 *pVw = (CFMPostedReceiptVoucherList2 *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMPostedReceiptVoucherList2 *pVw = (CFMPostedReceiptVoucherList2 *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPostedReceiptVoucherList2 *pVw = (CFMPostedReceiptVoucherList2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPostedReceiptVoucherList2 *pVw = (CFMPostedReceiptVoucherList2 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedReceiptVoucherList2*)pWnd)->OnAddFMInsurancePostedPaymentVoucherList();
} 
static int _OnEditFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedReceiptVoucherList2*)pWnd)->OnEditFMInsurancePostedPaymentVoucherList();
} 
static int _OnDeleteFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedReceiptVoucherList2*)pWnd)->OnDeleteFMInsurancePostedPaymentVoucherList();
} 
static int _OnSaveFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedReceiptVoucherList2*)pWnd)->OnSaveFMInsurancePostedPaymentVoucherList();
} 
static int _OnCancelFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedReceiptVoucherList2*)pWnd)->OnCancelFMInsurancePostedPaymentVoucherList();
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMPostedReceiptVoucherList2*)pWnd)->OnABZoneSelect();
}
static void _OnATMCardSelectFnc(CWnd *pWnd)
{
	((CFMPostedReceiptVoucherList2*)pWnd)->OnATMCardSelect();
}
static void _OnAllZoneSelectFnc(CWnd *pWnd){
	 ((CFMPostedReceiptVoucherList2*)pWnd)->OnAllZoneSelect();
}
static void _OnByMoneyTransferSelectFnc(CWnd *pWnd){
	 ((CFMPostedReceiptVoucherList2*)pWnd)->OnByMoneyTransferSelect();
}

static void _OnCLCZoneSelectFnc(CWnd *pWnd){
	 ((CFMPostedReceiptVoucherList2*)pWnd)->OnCLCZoneSelect();
}
static void _OnQrOnlineSelectFnc(CWnd *pWnd)
{
	 ((CFMPostedReceiptVoucherList2*)pWnd)->OnQrOnlineSelect();
}

static long _OnDeptListLoadDataFnc(CWnd *pWnd)
{
	return ((CFMPostedReceiptVoucherList2*)pWnd)->OnDeptListLoadData();
}

static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2*)pWnd)->OnDeptListUnCheckAll();
}

static int _OnDeptListCheckAllTYCFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2*)pWnd)->OnDeptListCheckAllTYC();
}

static int _OnDeptListCheckAllDVFnc(CWnd *pWnd){
	return ((CFMPostedReceiptVoucherList2*)pWnd)->OnDeptListCheckAllDV();
}

static void _OnAllObjSelectFnc(CWnd *pWnd){
	  ((CFMPostedReceiptVoucherList2*)pWnd)->OnAllObjSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMPostedReceiptVoucherList2*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMPostedReceiptVoucherList2*)pWnd)->OnServiceSelect();
}

CFMPostedReceiptVoucherList2::CFMPostedReceiptVoucherList2(CWnd *pParent)
{
	
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMPostedReceiptVoucherList2::~CFMPostedReceiptVoucherList2(){
}
void CFMPostedReceiptVoucherList2::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 10, 5, 490, 534);
	m_wndYearLabel.Create(this, _T("Year"), 15, 30, 95, 55);
	m_wndYear.Create(this,100, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 255, 30, 335, 55);
	m_wndReportPeriod.Create(this,340, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 15, 60, 95, 85);
	m_wndFromDate.Create(this,100, 60, 240, 85); 
	m_wndToDate.Create(this,340, 60, 485, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 255, 60, 335, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 15, 90, 95, 115);
	m_wndClerk.Create(this,100, 90, 240, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 15, 120, 95, 145);
	m_wndOrderBy.Create(this,100, 120, 240, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 255, 90, 335, 115);
	m_wndStatus.Create(this,340, 90, 485, 115); 
	//m_wndList.Create(this,14, 181, 485, 533);
	m_wndList.Create(this,10, 177, 467, 300); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 37, 35, 37, 35);
	m_wndSOD.Create(this, _T("Service On Demand"), 15, 150, 95, 175);
	m_wndMarkAll.Create(this, _T("Mark All"), 10, 540, 90, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 95, 540, 175, 565);
	m_wndPrint.Create(this, _T("&Print"), 319, 540, 399, 565);
	m_wndExport.Create(this, _T("Export XLS"), 404, 540, 484, 565);
	m_wndABZone.Create(this, _T("AB Zone"), 100, 150, 188, 175);
	m_wndATMCard.Create(this, _T("ATM Card"), 255, 120, 335, 145);
	m_wndAllZone.Create(this, _T("AllZone"), 286, 150, 374, 175);
	m_wndByMoneyTransfer.Create(this, _T("ByMoneyTransfer"), 340, 120, 485, 145);
	m_wndCLCZone.Create(this, _T("CLC Zone"), 193, 150, 281, 175);
	m_wndQrOnline.Create(this, _T("QrOnline"), 379, 150, 485, 175);
	m_wndDeptList.Create(this,10, 300, 467, 448); 

	m_wndAllObj.Create(this, _T("Tất cả"), 10, 452, 110, 477);
	m_wndInsurance.Create(this, _T("Bảo hiểm"), 116, 452, 216, 477);
	m_wndService.Create(this, _T("Dịch vụ"), 222, 452, 325, 477);
}
void CFMPostedReceiptVoucherList2::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);

	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);



	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 130);
	m_wndList.InsertColumn(2, _T("Posted"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 100);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("cashbook_id"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Ngày duyệt"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(7, _T("Đã duyệt"), CFMT_TEXT, 40);
	m_wndList.SetCheckBox(true);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObject.Format(2, 1, 12);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);




	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMPostedReceiptVoucherList2::OnSetWindowEvents(){
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
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndATMCard.SetEvent(WE_CLICK, _OnATMCardSelectFnc);
	m_wndByMoneyTransfer.SetEvent(WE_CLICK, _OnByMoneyTransferSelectFnc);
	m_wndAllZone.SetEvent(WE_CLICK, _OnAllZoneSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndCLCZone.SetEvent(WE_CLICK, _OnCLCZoneSelectFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(3, _T("Chọn TYC & PTTYC"), _OnListCheckAllTYCPTTYCFnc);

	m_wndList.AddEvent(4, _T("Check All thẻ TYC"), _OnListCheckAllCardTYCFnc);
	m_wndList.AddEvent(5, _T("Check All thẻ PTTYC"), _OnListCheckAllCardPTTYCFnc);
	m_wndList.AddEvent(6, _T("Check All thẻ TYC & PTTYC"), _OnListCheckAllCardTYCPTTYCFnc);

	m_wndList.AddEvent(7, _T("Check All CK TYC"), _OnListCheckAllMTTYCFnc);
	m_wndList.AddEvent(8, _T("Check All CK PTTYC"), _OnListCheckAllMTPTTYCFnc);
	m_wndList.AddEvent(9, _T("Check All CK TYC & PTTYC"), _OnListCheckAllMTTYCPTTYCFnc);

	m_wndList.AddEvent(10, _T("****"));
	m_wndList.AddEvent(11, _T("Check All thẻ CLC"), _OnListCheckAllCardCLCFnc);
	m_wndList.AddEvent(12, _T("Check All CK CLC"), _OnListCheckAllMTCLCFnc);

	m_wndList.AddEvent(13, _T("****"));
	m_wndList.AddEvent(14, _T("UnCheck All thẻ CLC"), _OnListUnCheckAllCardCLCFnc);
	m_wndList.AddEvent(15, _T("UnCheck All CK CLC"), _OnListUnCheckAllMTCLCFnc);
	//m_wndList.AddEvent(11, _T("Check All thẻ khu CLC"), _OnListCheckAllCardCLCFnc);
	//m_wndList.AddEvent(12, _T("Check All CK khu CLC"), _OnListCheckAllCLCFnc);

	m_wndList.AddEvent(20, _T("Search"), _OnListSearchItemFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndQrOnline.SetEvent(WE_CLICK, _OnQrOnlineSelectFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);

	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);

	m_wndDeptList.AddEvent(3, _T("****"));
	m_wndDeptList.AddEvent(4, _T("Chọn khoa yêu cầu"), _OnDeptListCheckAllTYCFnc);

	m_wndDeptList.AddEvent(5, _T("Chọn khoa khác"), _OnDeptListCheckAllDVFnc);

	m_wndAllObj.SetEvent(WE_CLICK, _OnAllObjSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsurancePostedPaymentVoucherListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsurancePostedPaymentVoucherListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsurancePostedPaymentVoucherListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsurancePostedPaymentVoucherListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsurancePostedPaymentVoucherListFnc, 0, 'T', VK_CONTROL);
*/
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	m_mIndex[_T("I")] = _T("Thu nội trú");
	m_mIndex[_T("E")] = _T("Thu ngoại trú ");
	m_mIndex[_T("X")] = _T("Thu ngoại trú ");

	OnDeptListLoadData();
	SetMode(VM_EDIT);


}
void CFMPostedReceiptVoucherList2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndATMCard.GetDlgCtrlID(), m_bATMCard);
	DDX_Check(pDX, m_wndAllZone.GetDlgCtrlID(), m_bAllZone);
	DDX_Check(pDX, m_wndByMoneyTransfer.GetDlgCtrlID(), m_bByMoneyTransfer);
	DDX_Check(pDX, m_wndCLCZone.GetDlgCtrlID(), m_bCLCZone);
	DDX_Check(pDX, m_wndQrOnline.GetDlgCtrlID(), m_bQrOnline);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Check(pDX, m_wndQrOnline.GetDlgCtrlID(), m_bQrOnline);

}
void CFMPostedReceiptVoucherList2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPostedReceiptVoucherList2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPostedReceiptVoucherList2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_bSOD = FALSE;
	m_bATMCard=FALSE;
	m_bAllZone=FALSE;
	m_bByMoneyTransfer=FALSE;
	m_bCLCZone=FALSE;
	m_bQrOnline=FALSE;
	m_nAllObj=1;
	m_nInsurance=1;
	m_nService=0;
}

int CFMPostedReceiptVoucherList2::SetMode(int nMode){
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

/*void CFMPostedReceiptVoucherList2::OnYearChange(){
	
} */
/*void CFMPostedReceiptVoucherList2::OnYearSetfocus(){
	
} */
/*void CFMPostedReceiptVoucherList2::OnYearKillfocus(){
	
} */
int CFMPostedReceiptVoucherList2::OnYearCheckValue(){
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
 
void CFMPostedReceiptVoucherList2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMPostedReceiptVoucherList2::OnByMoneyTransferSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}

	void CFMPostedReceiptVoucherList2::OnCLCZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
 
void CFMPostedReceiptVoucherList2::OnReportPeriodSelendok(){
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

/*void CFMPostedReceiptVoucherList2::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPostedReceiptVoucherList2::OnReportPeriodKillfocus(){
	
}*/
long CFMPostedReceiptVoucherList2::OnReportPeriodLoadData(){
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

/*void CFMPostedReceiptVoucherList2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPostedReceiptVoucherList2::OnFromDateChange(){
	
} */
/*void CFMPostedReceiptVoucherList2::OnFromDateSetfocus(){
	
} */
/*void CFMPostedReceiptVoucherList2::OnFromDateKillfocus(){
	
} */
int CFMPostedReceiptVoucherList2::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMPostedReceiptVoucherList2::OnToDateChange(){
	
} */
/*void CFMPostedReceiptVoucherList2::OnToDateSetfocus(){
	
} */
/*void CFMPostedReceiptVoucherList2::OnToDateKillfocus(){
	
} */
int CFMPostedReceiptVoucherList2::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMPostedReceiptVoucherList2::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPostedReceiptVoucherList2::OnClerkSelendok(){
	 
}
/*void CFMPostedReceiptVoucherList2::OnClerkSetfocus(){
	
}*/
/*void CFMPostedReceiptVoucherList2::OnClerkKillfocus(){
	
}*/
long CFMPostedReceiptVoucherList2::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMPostedReceiptVoucherList2::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPostedReceiptVoucherList2::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPostedReceiptVoucherList2::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMPostedReceiptVoucherList2::OnStatusSetfocus(){
	
}*/
/*void CFMPostedReceiptVoucherList2::OnStatusKillfocus(){
	
}*/
long CFMPostedReceiptVoucherList2::OnStatusLoadData(){
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
/*void CFMPostedReceiptVoucherList2::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPostedReceiptVoucherList2::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPostedReceiptVoucherList2::OnOrderBySelendok(){
	 
}
/*void CFMPostedReceiptVoucherList2::OnOrderBySetfocus(){
	
}*/
/*void CFMPostedReceiptVoucherList2::OnOrderByKillfocus(){
	
}*/
long CFMPostedReceiptVoucherList2::OnOrderByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndOrderBy.AddItems(_T("01"), _T("S\x1EAFp \x78\x1EBFp th\x65o ng\x1B0\x1EDDi thu"), NULL);
	m_wndOrderBy.AddItems(_T("02"), _T("S\x1EAFp \x78\x1EBFp th\x65o s\x1ED1 phi\x1EBFu thu"), NULL);
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
/*void CFMPostedReceiptVoucherList2::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPostedReceiptVoucherList2::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMPostedReceiptVoucherList2::OnSODSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CFMPostedReceiptVoucherList2::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();
}

void CFMPostedReceiptVoucherList2::OnATMCardSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();
}
void CFMPostedReceiptVoucherList2::OnAllZoneSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();	
}

void CFMPostedReceiptVoucherList2::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMPostedReceiptVoucherList2::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPostedReceiptVoucherList2::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;

	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DVYC"))==szItemText.Right(4))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMPostedReceiptVoucherList2::OnListCheckAllTYCPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("DV-PTTYC"))==szItemText || (_T("DVYC"))==szItemText)
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("DV-PTTYC"))==szItemText)
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllCardTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("THE-DV-YC"))==szItemText.Right(9))
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllCardCLC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);

		if ((szItemText == _T("THE-DVCLC")) || szItemText == _T("THE-DV-CLCA16"))
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllMTCLC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);

		if ((szItemText == _T("CK-DVCLC")) || szItemText == _T("CK-DV-CLCA16"))
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

//Uncheck


int CFMPostedReceiptVoucherList2::OnListUnCheckAllCardCLC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);

		if ((szItemText == _T("THE-DVCLC")) || (szItemText == _T("THE-DV-CLCA16")))
	{
		m_wndList.SetCheck(i, false);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, true);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListUnCheckAllMTCLC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);

		if ((szItemText == _T("CK-DVCLC")) || (szItemText == _T("CK-DV-CLCA16")))
	{
		m_wndList.SetCheck(i, false);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, true);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllCardPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("THE-DV-PTTYC"))==szItemText.Right(12))
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllCardTYCPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if (((_T("THE-DV-PTTYC"))==szItemText.Right(12)) || ((_T("THE-DV-YC"))==szItemText.Right(9)))
	
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

void CFMPostedReceiptVoucherList2::OnListSearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
} 

long CFMPostedReceiptVoucherList2::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	//szWhere.Format(_T(" and FAC_LOCKED='Y' "));

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
		
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC', 'THE-DV-YC', 'THE-DV-PTTYC', 'CK-DV-YC', 'CK-DV-PTTYC')"));
	else if (m_bABZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB')"));
	
	else if (m_bCLCZone)
	
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVCLC', 'DVCLCA16')"));	

	else if ((m_bATMCard) || (m_bByMoneyTransfer))
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('THE-DV','CK-DV', 'THE-DVCLC','CK-DVCLC', 'THE-DV-CLCA16','CK-DV-CLCA16')"));

	else if (m_bAllZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV')"));
	
		//Sau khi test xong tra lai//
	    //szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV','THE-DV')"));
	else if (m_bQrOnline)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('QR')"));
	else
		szWhere.AppendFormat(_T(" AND fac_cashbook_id IN ('DV', 'CASH')"));
	
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate,FAC_CASHBOOK_ID as cashbook_id, fac_approveddate as ngayduyet, FAC_APPROVED as daduyet ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'R' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	m_wndList.BeginLoad();
	CString szDate;
	while (!rs.IsEOF())
	{
		/*if(m_szStatusKey == _T("01"))
			rs.GetValue(_T("fac_invoicedate"), szDate);
		else if(m_szStatusKey == _T("02"))
		{
			rs.GetValue(_T("fac_approveddate"), szDate);
		}
		else
		{*/
			rs.GetValue(_T("fac_posteddate"), szDate);

		//}

		m_wndList.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("descr")),
			rs.GetValue(_T("stt")),
			szDate,
			rs.GetValue(_T("user_id")),
			rs.GetValue(_T("cashbook_id")),
			rs.GetValue(_T("ngayduyet")),
			rs.GetValue(_T("daduyet")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMPostedReceiptVoucherList2::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMPostedReceiptVoucherList2::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMPostedReceiptVoucherList2::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	

	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Form A3"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Form A4"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("**********"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	TranslateString(_T("In BK dịch vụ (mới từ 1/1/2024)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 9, tmpStr);

	TranslateString(_T("In BK dịch vụ (mới từ 1/8/2024)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 10, tmpStr);

	/*TranslateString(_T("In chứng từ ghi sổ thu - Mẫu số CQ07-HD - bản 01"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	TranslateString(_T("In chứng từ ghi sổ thu - Mẫu số CQ07-HD - bản 02"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);*/


	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint2ndver(true);
			break;
		case 2:
			OnPrint2ndver();
			break;
		case 3:
			OnPrint3ndver();
			break;
		case 4:
			OnPrint4ndver();
			break;

		case 9:
			OnPrint3rdver_2024();
			break;

		case 10:
			OnPrint3rdver_2024_v2();
			break;
	}
} 
 
int CFMPostedReceiptVoucherList2::OnAddFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPostedReceiptVoucherList2::OnEditFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPostedReceiptVoucherList2::OnDeleteFMInsurancePostedPaymentVoucherList(){
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
 		OnCancelFMInsurancePostedPaymentVoucherList();
 	}
	return 0;
}
int CFMPostedReceiptVoucherList2::OnSaveFMInsurancePostedPaymentVoucherList(){
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
 		//OnFMInsurancePostedPaymentVoucherListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMPostedReceiptVoucherList2::OnCancelFMInsurancePostedPaymentVoucherList(){
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
int CFMPostedReceiptVoucherList2::OnFMInsurancePostedPaymentVoucherListListLoadData(){
	return 0;
}


void CFMPostedReceiptVoucherList2::OnPrint2ndver(bool bIsA3)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);	
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szthuquyATM, szthuquychung;
	double nTotal[16];
	double nFa = 0;
	if (m_bByMoneyTransfer || m_bATMCard)
	{
		szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_ATMCK");
	}
	else
	{
		szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU");
	}

	if (bIsA3)
		szReportName += _T("_A3.RPT");
	else
		szReportName += _T("_A4.RPT");
	//szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 16; i++)
		nTotal[i] = 0;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("clerk")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("invoice_no")));
			//
			rs.GetValue(_T("invoice_deposit"), nTmp);
			nTotal[4] += nTmp;
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("invoice_deposit")));
			//
			rs.GetValue(_T("pat_paid"), nTmp);
			nTotal[5] += nTmp;
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("pat_paid")));
			//
			rs.GetValue(_T("invoice_amount"), nTmp);
			nTotal[6] += nTmp;
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("invoice_amount")));
			//
			rs.GetValue(_T("fa"), nTmp);
			nFa += nTmp;
			nTotal[7] += nTmp;
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("fa")));
			//
			rs.GetValue(_T("nguoncovid"), nTmp);
			nFa += nTmp;
			nTotal[8] += nTmp;
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("nguoncovid")));
			//
			rs.GetValue(_T("invoice_drug"), nTmp);
			nTotal[9] += nTmp;
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("invoice_drug")));
			//
			rs.GetValue(_T("invoice_material"), nTmp);
			nTotal[10] += nTmp;
			rptDetail->SetValue(_T("10"), rs.GetValue(_T("invoice_material")));
			//
			rs.GetValue(_T("cnc_amount"), nTmp);
			nTotal[11] += nTmp;
			rptDetail->SetValue(_T("11"), rs.GetValue(_T("cnc_amount")));

			rs.GetValue(_T("thu_goidv"), nTmp);
			nTotal[12] += nTmp;
			rptDetail->SetValue(_T("12"), rs.GetValue(_T("thu_goidv")));
			//
			rs.GetValue(_T("deposit"), nTmp);
			nTotal[13] += nTmp;
			rptDetail->SetValue(_T("13"), rs.GetValue(_T("deposit")));

			rs.GetValue(_T("tran_bao_viet"), nTmp);
			nTotal[14] += nTmp;
			rptDetail->SetValue(_T("14"), rs.GetValue(_T("tran_bao_viet")));
			//
			rs.GetValue(_T("receipt_amount"), nTmp);
			nTotal[15] += nTmp;
			rptDetail->SetValue(_T("15"), rs.GetValue(_T("receipt_amount")));
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if (rptDetail)
	{
		for (int i = 4; i <= 15; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%.3f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}
//		tmpStr.Format(_T("%f"), nFa);
//		rptFooter->SetValue(_T("s6.1"), tmpStr);
	}
/*
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("eamount"), m_nEAmount);
		if (m_nEAmount > 0)
		{
			FormatCurrency(m_nEAmount, tmpStr2);
			tmpStr.Format(_T("Ngo\x1EA1i tr\xFA: %s"), tmpStr2);
		}
		rs.GetValue(_T("iamount"), m_nIAmount);
		if (m_nIAmount > 0)
		{
			FormatCurrency(m_nIAmount, tmpStr2);
			tmpStr.AppendFormat(_T("N\x1ED9i tr\xFA: %s"), tmpStr2);
		}
		if (!tmpStr.IsEmpty())
			rptFooter->SetValue(_T("cnc"), tmpStr);
		nTmp = nTotal[2] - m_nIAmount - m_nEAmount;
		FormatCurrency(nTmp, tmpStr2);
		rptFooter->SetValue(_T("vienphi"), tmpStr2);
	}
	*/
	tmpStr = pMF->GetSysDate();
	rptFooter = rpt.GetReportFooter();
	szDate.Format(rptFooter->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[15]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rptFooter->SetValue(_T("SuminWords"), tmpStr);
	//if (!m_bSOD)//
	{
		tmpStr.Format(_T("%.3f"), nTotal[6] - nTotal[4]);
		rptFooter->SetValue(_T("Total(s6-s4)"), tmpStr);
	}
	
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[15]);
	//Thay OnPrint3ndver() = OnPrint6ndver()
	//Thêm hàm in OnPrint7ndver();
	OnPrint3ndver();
	OnPrint4ndver();
	OnPrint6ndver();
	OnPrint7ndver();
	
	/*
	CArray<double, double> arrAmount;
	arrAmount.Add(nTotal[4]);
	CFMDocumentPrinter* pPrinter = NULL;
	pPrinter = new CFMDocumentPrinter(_T("CT_THU_DVYT_1"), &arrAmount, m_bSOD);
	
	arrAmount.RemoveAll();
	arrAmount.Add(nTotal[5]);
	arrAmount.Add(nTotal[12]);
	pPrinter = new CFMDocumentPrinter(_T("CT_THU_DVYT_2"), &arrAmount, m_bSOD);
	*/
	//PrintFinancialDocument();
}

void CFMPostedReceiptVoucherList2::PrintFinancialDocument()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDocType;
	szSQL.Format(_T(" SELECT posted_date,") \
	_T("        SUM(invoice_deposit) AS invoice_deposit,") \
	_T("		SUM(pat_paid) AS pat_paid,") 
	_T("		SUM(deposit) AS deposit") \
	_T(" FROM   (%s)") \
	_T(" GROUP  BY posted_date "), GetQueryString());

	rs.ExecSQL(szSQL);
	tArrItem ari;
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("invoice_deposit"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}
	CFMDocumentPrinter* pPrinter = NULL;
	szDocType = _T("CT_THU_DVYT_1");
	if (m_bByMoneyTransfer || m_bATMCard)
	{
		szDocType = _T("CT_THU_DVYT_ATM_1");	
	}
	pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("S"));
	
	rs.MoveFirst();
	ari.RemoveAll();
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("pat_paid"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("deposit"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}
	szDocType = _T("CT_THU_DVYT_2");
	if (m_bByMoneyTransfer || m_bATMCard)
	{
		szDocType = _T("CT_THU_DVYT_ATM_2");	
	}
	pPrinter = new CFMDocumentPrinter(_T("CT_THU_DVYT_2"), &ari, m_bSOD, _T("S"));
}

void CFMPostedReceiptVoucherList2::OnPrintFooterUser(CReportSection* rptFooter){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND fpf_module_id = '%s'"), pMF->GetModuleID());
	szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), m_bSOD?_T("TYC"):_T("DV"));
	szSQL.Format(_T("SELECT fpf_position field_name, fpf_title title FROM fm_print_footer WHERE 1=1 %s"), szWhere);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rptFooter->SetValue(rs.GetValue(_T("field_name")), rs.GetValue(_T("title")));
		rs.MoveNext();
	}
}

void CFMPostedReceiptVoucherList2::OnPrintSummaryReceipt(double nTotalAmount){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs1(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL;
	CString tmpStr, tmpStr2, szSysDate, szDate, szSQL, szthuquyATM, szthuquychung;
	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUTHUC30BB_TH.rpt")))
		return;
	rptDetail = rpt.AddDetail();
	rptDetail->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptDetail->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rptDetail->SetValue(_T("ReportDate"), tmpStr);
	tmpStr = pMF->GetDoctorName(pMF->GetCurrentUser());
	tmpStr += m_bSOD?_T(" - H\x1ED9 \x64\x1ECB\x63h v\x1EE5 kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u (t\x1ED5ng h\x1EE3p thu)")
		:_T(" - H\x1ED9 \x64\x1ECB\x63h v\x1EE5 y t\x1EBF (t\x1ED5ng h\x1EE3p thu)");
	rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
	rptDetail->SetValue(_T("Address"), _T("Ph\xF2ng t\xE0i \x63h\xEDnh"));
	rptDetail->SetValue(_T("Reason"), _T("Thu ti\x1EC1n vi\x1EC7n ph\xED"));
	FormatCurrency(nTotalAmount, tmpStr);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%.3f"), nTotalAmount);
	MoneyToString(tmpStr, tmpStr2);
	tmpStr2 += _T(" \x111\x1ED3ng.");
	rptDetail->SetValue(_T("SumInWord"), tmpStr2);

	/*CDateTime dt;
	CDate date = dt.GetDate();
	szSysDate = date.GetDate();
	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

	rptDetail->SetValue(_T("PrintDate"), tmpStr);*/
	szSQL.Format(_T("select ss_desc as thuquyatm from sys_sel where ss_id='thuquy' and ss_code='ATM_CK'"));
	rs1.ExecSQL(szSQL);		
	if(!rs1.IsEOF())
	{
		rs1.GetValue(_T("thuquyatm"), szthuquyATM);		
	}

	szSQL.Format(_T("select ss_desc as thuquychung from sys_sel where ss_id='thuquy' and ss_code='OTHER'"));
	rs2.ExecSQL(szSQL);	
	if(!rs2.IsEOF())
	{
		rs2.GetValue(_T("thuquychung"), szthuquychung);		
	}
	
	if (m_bATMCard || m_bByMoneyTransfer)
		{
			rptDetail->SetValue(_T("thuquy"), szthuquyATM);			
		}
	else
			rptDetail->SetValue(_T("thuquy"), szthuquychung);			

	tmpStr = pMF->GetSysDate();	
	szDate.Format(rptDetail->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);
	

	OnPrintFooterUser(rptDetail);
	rpt.PrintPreview();
}


void CFMPostedReceiptVoucherList2::OnExportSelect()
{
	CGuiMenu menu(this);
	CString tmpStr;
	
	menu.CreatePopupMenu();
	TranslateString(_T("Xuất ra Excel bảng kê thu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Xuất ra Excel để so sánh doanh thu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:			
			OnExportSelect1();			
			break;
		case 2:			
			OnExportForChecking();			
			break;		
	}	
}

void CFMPostedReceiptVoucherList2::OnExportSelect1()
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
	if (!xls.Load(_T("Exports\\Template\\BANGKETHU_DICHVU_2024.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString3_2024();
	//AfxMessageBox(szSQL);
	rs.ExecSQL(szSQL);	
	
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
		
		rs.GetValue(_T("CHINDEX"), szNewDept);
		m_mIndex.Lookup(szNewDept, tmpStr);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[22] > 0)
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
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("CLERK"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("INVOICE_NO"), tmpStr);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);	
		
		rs.GetValue(_T("tong_vien_phi"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("INVOICE_DEPOSIT"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("PAT_PAID"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);			

		rs.GetValue(_T("mien_giam"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("HFE_PHIKHAM"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("HFE_PHIGIUONG"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("HFE_PHICLS"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_PHIPTTT"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("DRUG_FEE"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("MAT_FEE"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("DRUG_FEE_B5"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("MAT_FEE_B5"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("PHI_MAU"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_TIENAN"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_GOIDV"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_PHI_CHONBS"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_PHI_KHAC"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("DEPOSIT"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TRAN_BAO_VIET"), nTemp);
		nGroupTotal[21] += nTemp;
		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("RECEIPT_AMOUNT"), nTemp);
		nGroupTotal[22] += nTemp;
		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[22] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[22] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BANGKETHU_DICHVU_2024_2.xls"));
}

CString CFMPostedReceiptVoucherList2::GetQueryString(){
	CString szSQL, szWhere, szWhere1, szWhere2, szReceiptStr;
	CString szOrderBy;
	/*CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);*/

	szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}


	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}



	if (m_bATMCard)
	
		szWhere.AppendFormat(_T(" and payment_method in ('ATM', 'TTD')"));

	else if (m_bByMoneyTransfer)
		szWhere.AppendFormat(_T(" and payment_method in ('CK')"));
		
	szSQL.Format(_T(" SELECT Get_username(fac_user_id)       AS clerk,") \
	_T("   fac_invoiceno                                     AS invoice_no,") \
	_T("   ROUND(SUM(trichtamgui))                                  AS invoice_deposit,") \
	_T("   ROUND(SUM(thuthem))                                      AS pat_paid,") \
	_T("   ROUND(SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc-hfe_packageamount-nguoncovid)) AS invoice_amount,") \
	_T("   ROUND(SUM(miengiam))                                     AS fa,") \
	_T("   ROUND(SUM(tienthuoc))                                    AS invoice_drug,") \
	_T("   ROUND(SUM(tienvattu))                                    AS invoice_material,") \
	_T("   ROUND(SUM(maycnc))                                       AS cnc_amount,") \
	_T("   SUM(hfe_packageamount)                            AS thu_goidv,") \
	_T("   ROUND(SUM(miengiam))                                     AS fa,") \
	_T("   ROUND(SUM(tamguibandau))                                 AS deposit,") \
	_T("   ROUND(SUM(tran_bao_viet))                                AS tran_bao_viet,") \
	_T("   ROUND(SUM(tamguibandau+thuthem))                         AS receipt_amount,") \
	_T("   ROUND(SUM(nguoncovid)) AS nguoncovid,") \
	_T("   to_char(fac_posteddate, 'dd/mm/yyyy')			 AS posted_date") \
	_T(" FROM fa_cash") \
	_T(" LEFT JOIN") \
	_T("   (SELECT hfe_cash_id AS cash_id,") \
	_T("     hfe_patientno,") \
	_T("     hfe_payment_method as payment_method,") \
	_T("     hfe_docno,") \
	_T("     hfe_deptid,") \
	_T("     hfe_refidx,") \
	_T("     hfe_invoiceno,") \
	_T("     hfe_deposit AS trichtamgui,") \
	_T("     i.HFE_EXTINS_PAID AS tran_bao_viet,") \
	_T("     CASE") \
	_T("       WHEN hfe_payment > 0") \
	_T("       THEN hfe_payment") \
	_T("       ELSE 0") \
	_T("     END            AS thuthem,") \
	_T("     hfe_patpaid    AS cackhoanphaithu,") \
	_T("     hfe_freeamount AS miengiam,") \
	_T("     0              AS tamguibandau,") \
	_T("     CASE") \
	_T("       WHEN (hfe_class <> 'I' OR hfe_deptid='TTDTHM')") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN m_productitem_view") \
	_T("         ON(product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
	_T("		 AND f.hfe_status in('P','R') ") \
	_T("         AND f.hfe_type       IN('D','M','R')") \
	_T("         AND f.hfe_category   <> 'Y'") \
	_T("         AND product_org_id        ='PM'") \
	_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno AND product_org_id ='PM') ") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tienthuoc,") \
	_T("     CASE") \
	_T("       WHEN (hfe_class <> 'I' OR hfe_deptid='TTDTHM')") \
	_T("       THEN") \
	/*_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN m_productitem_view") \
	_T("         ON(product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
	_T("		 AND f.hfe_status in('P','R') ") \
	_T("         AND f.hfe_type       IN('D','M')") \
	_T("         AND f.hfe_category   <> 'Y'") \
	_T("         AND product_org_id        ='MA'") \*/
	//Sua cho nay de khop so lieu voi bang ke chi tiet//
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN m_product_item ON(mpi_product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("		 LEFT JOIN m_product ON (mp_product_id = mpi_product_id)") \
	_T("         WHERE f.hfe_docno     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
	_T("		 AND f.hfe_status in('P','R') ") \
	_T("         AND f.hfe_type       IN('D','M','R')") \
	_T("         AND f.hfe_category   <> 'Y'") \
	_T("         AND mp_org_id        in ('MA', 'PĐD')") \
	//_T("         AND (f.hfe_group <> 'A9000' AND hfe_deptid <> 'TTHTSS')") \//
	_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno) AND mp_org_id in ('MA', 'PĐD') ") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tienvattu,") \
	_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_fee_list") \
	_T("     ON(hfl_feeid                   = hfe_itemid)") \
	_T("     WHERE f.hfe_docno              = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
	_T(" AND f.hfe_status in('P','R') ") \
	_T("     AND f.hfe_type                IN('P','T','O')") \
	_T("     AND f.hfe_category            <> 'Y'") \
	_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
	_T("     AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno AND NVL(hfl_hitechmachine,'N') ='Y'") \
	_T("     )) AS maycnc,") \
	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee f  ") \
	_T("     WHERE f.hfe_docno              = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
	_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
	_T("     AND f.hfe_status              IN('P','R')") \
	_T("     AND f.hfe_type                IN('X')") \
	_T("     AND f.hfe_category            <> 'Y'    ") \
	_T("     AND f.Hfe_itemid NOT          IN") \
	_T("       (SELECT Hfe_itemid") \
	_T("       FROM Hms_Fee_Discountline") \
	_T("       WHERE hfe_docno                =i.hfe_docno") \
	_T("       AND Hfe_Refidx                 =i.hfe_invoiceno") \
	_T("        AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
	_T("       ) ) AS hfe_packageamount,") \

	//_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \//
	_T(" (SELECT CASE WHEN COALESCE(SUM(hfe_otherpaid), 0) > 0") \
	_T(" 	     THEN COALESCE(SUM(hfe_otherpaid), 0)") \
	_T(" 	     ELSE COALESCE(SUM(hfe_patpaid), 0) END  ") \
	_T("     FROM hms_fee f") \
	_T("     WHERE f.hfe_docno   = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno = i.hfe_invoiceno   ") \
	_T("     AND f.hfe_category   = 'COV'   ") \
	_T("     ) AS nguoncovid") \


	_T("   FROM hms_fee_invoice i") \
	_T("   WHERE hfe_status IN('P','R')") \
	_T("   AND hfe_payment  >=0") \
	_T("   AND hfe_refund    = 0") \
	_T("   UNION ALL") \
	_T("   SELECT hfe_cash_id AS cash_id,") \
	_T("     hfe_patientno,") \
	_T("     hfe_payment_method as payment_method,") \
	_T("     hfe_docno,") \
	_T("     hfe_deptid,") \
	_T("     hfe_refidx,") \
	_T("     hfe_invoiceno,") \
	_T("     0          AS trichtamgui,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     0          AS cackhoanphaithu,") \
	_T("     0          AS miengiam,") \
	_T("     0          AS thuthem,") \
	_T("     hfe_amount AS tamguibandau,") \
	_T("     0          AS tienthuoc,") \
	_T("     0          AS tienvattu,") \
	_T("     0          AS cnc,") \
	_T("     0          AS hfe_packageamount,") \
	_T("     0          AS nguoncovid") \
	_T("   FROM hms_fee_deposit") \
	_T("   WHERE hfe_status           IN('P','R')") \
	_T("   ) tblInvoice ON(fac_cash_id = cash_id)") \
	_T(" WHERE 1=1 %s ") \
	_T(" GROUP BY cash_id,") \
	_T("   fac_user_id,") \
	_T("   fac_invoiceno,") \
	_T("   to_char(fac_posteddate, 'dd/mm/yyyy')") \
	_T(" ORDER BY fac_user_id,") \
	_T("   fac_invoiceno"), szWhere);
	return szSQL;
}

CString CFMPostedReceiptVoucherList2::GetQueryString2()
{
	CString szSQL, szWhere, szWhere1;
	CString szReceiptStr;

	szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);


	szSQL.Format(_T(" SELECT ") \
	_T("		   SUM(CASE WHEN i.hfe_class IN ( 'E', 'S' ) AND Nvl(hfl_hitechmachine, 'X') = 'Y' THEN f.hfe_cost ") \
	_T("               ELSE 0 END) eamount, ") \
	_T("           SUM(CASE WHEN i.hfe_class IN ( 'A', 'I' ) AND Nvl(hfl_hitechmachine, 'X') = 'Y' THEN f.hfe_cost ") \
	_T("               ELSE 0 END) iamount ") \
	_T(" FROM      fa_cash ") \
	_T(" LEFT JOIN hms_fee_invoice i ON ( i.hfe_cash_id = fac_cash_id ) ") \
	_T(" LEFT JOIN hms_fee f ON ( f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno ) ") \
	_T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = hfe_itemid ) ") \
	_T(" WHERE 1 = 1 ") \
	_T(" %s %s "), szWhere, szWhere1);
	return szSQL;
}
void CFMPostedReceiptVoucherList2::OnPrint3ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	CRecord rs(&pMF->m_db);	
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szthuquyATM, szthuquychung;
	CString sznoidung1 = _T("Trích tạm thu thanh toán viện phí bệnh nhân DVYT");
	CString sznoidung2 = _T("Thu viện phí bệnh nhân DVYT");
	CString sznoidung3 = _T("Thu bệnh nhân DVYT tạm gửi viện phí");
	double nTotal[15];
	double nFa = 0;
	if (m_bATMCard)
	{
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DVYT_ATM.RPT");
	}
	else if (m_bByMoneyTransfer)
	{
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DVYT_CK.RPT");
	}
	else
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DV.RPT");

	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 15; i++)
		nTotal[i] = 0;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), _T(" "));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("posted_date")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("noi_dung")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("taikhoan_co")));
			
			rs.GetValue(_T("sotien_tamthu"), nTmp);
			nTotal[7] += nTmp;
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("sotien_tamthu")));
			
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if (rptDetail)
	{
		for (int i = 7; i <= 14; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%.3f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}

	}

	tmpStr = pMF->GetSysDate();
	rptFooter = rpt.GetReportFooter();
	szDate.Format(rptFooter->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[7]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rptFooter->SetValue(_T("SuminWords"), tmpStr);
	
	{
		tmpStr.Format(_T("%.3f"), nTotal[6] - nTotal[4]);
		rptFooter->SetValue(_T("Total(s6-s4)"), tmpStr);
	}
	
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	//OnPrintSummaryReceipt(nTotal[14]);
}
CString CFMPostedReceiptVoucherList2::GetQueryString3()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szReceiptStr;
	CString szOrderBy;
	/*CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);*/
	szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}

	if (m_bATMCard)
	
		szWhere.AppendFormat(_T(" and payment_method in ('ATM', 'TTD')"));

	else if (m_bByMoneyTransfer)
		szWhere.AppendFormat(_T(" and payment_method in ('CK')"));		
	
	szSQL.Format(_T(" SELECT ") \
	_T(" so_hieu, to_char(posted_date, 'DD/MM/YYYY') as posted_date,noi_dung,") \
	_T(" taikhoan_no,") \
	_T(" taikhoan_co,") \
	_T(" SUM(invoice_deposit) as sotien_tamthu") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT ") \
	_T("   '' as so_hieu,") \
	_T("   payment_method,") \
	_T("   trunc(FAC_POSTEDDATE)                                                      AS posted_date,") \
	_T("   (select ss_desc from sys_sel where ss_id='NOIDUNG_THU' and ss_code='TAMTHU') as noi_dung,") \
	_T("   '1312' as taikhoan_no,") \
	_T("   '531' as taikhoan_co,") \
	_T("   SUM(trichtamgui)                                                           AS invoice_deposit  ") \
	_T(" FROM fa_cash") \
	_T(" LEFT JOIN") \
	_T("   (SELECT") \
	_T("     hfe_cash_id AS cash_id,") \
	_T("     hfe_payment_method AS payment_method,") \
	_T("     hfe_deposit       AS trichtamgui,  ") \
	_T("     CASE") \
	_T("       WHEN hfe_payment > 0") \
	_T("       THEN hfe_payment") \
	_T("       ELSE 0") \
	_T("     END            AS thuthem,   ") \
	_T("     0              AS tamguibandau   ") \
	_T("   FROM hms_fee_invoice i") \
	_T("   WHERE hfe_status IN('P','R')") \
	_T("   AND hfe_payment  >=0") \
	_T("   AND hfe_refund    = 0  ") \
	_T("   ) tblInvoice ON(fac_cash_id = cash_id)") \
	_T(" WHERE 1                       =1 %s") \
	_T(" GROUP BY FAC_POSTEDDATE, payment_method") \
	_T(" ORDER BY FAC_POSTEDDATE") \
	_T(" )") \
	_T(" GROUP BY ") \
	_T(" so_hieu, posted_date,noi_dung,taikhoan_no,taikhoan_co") \
	_T(" HAVING SUM(invoice_deposit)>0 ORDER BY to_date(posted_date, 'DD-MM-YYYY')"), szWhere);

	return szSQL;
}

void CFMPostedReceiptVoucherList2::OnPrint4ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	CRecord rs(&pMF->m_db);	
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szthuquyATM, szthuquychung;
	CString sznoidung1 = _T("Trích tạm thu thanh toán viện phí bệnh nhân DVYT");
	CString sznoidung2 = _T("Thu viện phí bệnh nhân DVYT");
	CString sznoidung3 = _T("Thu bệnh nhân DVYT tạm gửi viện phí");
	double nTotal[15];
	double nFa = 0;
	if (m_bATMCard)
	{
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DVYT_ATM_MRSYEN.RPT");
	}
	else if (m_bByMoneyTransfer)
	{
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DVYT_CK_MRSYEN.RPT");
	}
	else
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DV.RPT");

	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString4();
	rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 15; i++)
		nTotal[i] = 0;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), _T(" "));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("posted_date")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("noi_dung")));
			if (m_bATMCard || m_bByMoneyTransfer)
			{
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no_ATM")));
			}
			else
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("taikhoan_co")));					
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("tongtien")));
			rs.GetValue(_T("tongtien"), nTmp);
			nTotal[7] += nTmp;
			
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if (rptDetail)
	{
		for (int i = 7; i <= 14; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%.3f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}

	}

	tmpStr = pMF->GetSysDate();
	rptFooter = rpt.GetReportFooter();
	szDate.Format(rptFooter->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[7]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rptFooter->SetValue(_T("SuminWords"), tmpStr);
	
	{
		tmpStr.Format(_T("%.3f"), nTotal[6] - nTotal[4]);
		rptFooter->SetValue(_T("Total(s6-s4)"), tmpStr);
	}
	
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	//OnPrintSummaryReceipt(nTotal[14]);
}
CString CFMPostedReceiptVoucherList2::GetQueryString4()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szReceiptStr;
	CString szOrderBy;
	/*CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);*/

	szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}

	if (m_bATMCard)
	
		szWhere.AppendFormat(_T(" and payment_method in ('ATM', 'TTD')"));

	else if (m_bByMoneyTransfer)
		szWhere.AppendFormat(_T(" and payment_method in ('CK')"));	
	

		szSQL.Format(_T(" SELECT") \
		_T(" so_hieu,") \
		_T(" TO_CHAR(posted_date, 'DD/MM/YYYY') AS posted_date,") \
		_T("   noi_dung,") \
		_T("   taikhoan_no,taikhoan_no_ATM,") \
		_T("   taikhoan_co,") \
		_T(" SUM(ROUND(sotien_thuthem)) as sotien_thuthem,") \
		_T(" SUM(ROUND(sotien_tamguibandau)) as sotien_tamguibandau,") \
		_T(" SUM(ROUND(sotien_thuthem + sotien_tamguibandau)) as tongtien") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT '' AS so_hieu,") \
		_T("     payment_method,") \
		_T("     noi_dung,") \
		_T("     TRUNC(FAC_POSTEDDATE) AS posted_date,") \
		_T("     taikhoan_no,taikhoan_no_ATM,") \
		_T("     taikhoan_co,") \
		_T("     SUM(thuthem) AS sotien_thuthem,") \
		_T("     SUM(tamguibandau) AS sotien_tamguibandau") \
		_T("   FROM fa_cash") \
		_T("   LEFT JOIN") \
		_T("     (SELECT hfe_cash_id  AS cash_id,") \
		_T("       hfe_payment_method AS payment_method,    ") \
		_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='VIENPHI') AS noi_dung,") \
		_T("     '1111'           AS taikhoan_no,") \
		_T("     '112'           AS taikhoan_no_ATM,") \
		_T("     '1311'            AS taikhoan_co,") \
		_T("       CASE") \
		_T("         WHEN hfe_payment > 0") \
		_T("         THEN hfe_payment") \
		_T("         ELSE 0") \
		_T("       END AS thuthem,") \
		_T("       0   AS tamguibandau") \
		_T("     FROM hms_fee_invoice i") \
		_T("     WHERE hfe_status IN('P','R')") \
		_T("     AND hfe_payment  >=0") \
		_T("     AND hfe_refund    = 0") \
		_T("     UNION ALL") \
		_T("     SELECT ") \
		_T("     hfe_cash_id AS cash_id,") \
		_T("     hfe_payment_method AS payment_method,    ") \
		_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TAMTHUVV') AS noi_dung,") \
		_T("     '1111'           AS taikhoan_no,") \
		_T("     '112'           AS taikhoan_no_ATM,") \
		_T("     '1312'            AS taikhoan_co,") \
		_T("     0          AS thuthem,") \
		_T("     hfe_amount AS tamguibandau    ") \
		_T("   FROM hms_fee_deposit") \
		_T("   WHERE hfe_status           IN('P','R')") \
		_T("     ) tblInvoice") \
		_T("   ON(fac_cash_id   = cash_id)") \
		_T("   WHERE 1          =1 %s") \
		_T("   GROUP BY FAC_POSTEDDATE,") \
		_T("     payment_method, noi_dung, taikhoan_no, taikhoan_no_ATM,") \
		_T("     taikhoan_co") \
		_T("   ORDER BY FAC_POSTEDDATE") \
		_T("   )") \
		_T("   GROUP BY ") \
		_T("   so_hieu, posted_date,  noi_dung,  taikhoan_no, taikhoan_no_ATM, taikhoan_co") \
		_T("   HAVING SUM(sotien_thuthem + sotien_tamguibandau)>0") \
		_T("   ORDER BY to_date(posted_date, 'DD-MM-YYYY')"), szWhere);

	return szSQL;
}

void CFMPostedReceiptVoucherList2::OnPrint6ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	CRecord rs(&pMF->m_db);	
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szthuquyATM, szthuquychung;
	CString sznoidung1 = _T("Trích tạm thu thanh toán viện phí bệnh nhân DVYT");
	CString sznoidung2 = _T("Thu viện phí bệnh nhân DVYT");
	CString sznoidung3 = _T("Thu bệnh nhân DVYT tạm gửi viện phí");
	double nTotal[15];
	double nFa = 0;
	if (m_bATMCard)
	{
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DVYT_ATM.RPT");
	}
	else if (m_bByMoneyTransfer)
	{
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DVYT_CK.RPT");
	}
	else
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DV.RPT");

	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString6();
	rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 15; i++)
		nTotal[i] = 0;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), _T(" "));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("posted_date")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("noi_dung")));
			if (m_bSOD)
			{
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no_tyc")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("taikhoan_co_tyc")));			
			}
			else
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("taikhoan_co")));
			
			rs.GetValue(_T("tongtien"), nTmp);
			nTotal[7] += nTmp;
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("tongtien")));
			
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if (rptDetail)
	{
		for (int i = 7; i <= 14; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%.3f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}

	}

	tmpStr = pMF->GetSysDate();
	rptFooter = rpt.GetReportFooter();
	szDate.Format(rptFooter->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[7]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rptFooter->SetValue(_T("SuminWords"), tmpStr);
	
	{
		tmpStr.Format(_T("%.3f"), nTotal[6] - nTotal[4]);
		rptFooter->SetValue(_T("Total(s6-s4)"), tmpStr);
	}
	
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	//OnPrintSummaryReceipt(nTotal[14]);
}
CString CFMPostedReceiptVoucherList2::GetQueryString6()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szReceiptStr;
	CString szOrderBy;
	/*CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);*/
	szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}

	if (m_bATMCard)
	
		szWhere.AppendFormat(_T(" and payment_method in ('ATM', 'TTD')"));

	else if (m_bByMoneyTransfer)
		szWhere.AppendFormat(_T(" and payment_method in ('CK')"));		
	
		szSQL.Format(_T(" SELECT so_hieu,") \
					_T("   TO_CHAR(posted_date, 'DD/MM/YYYY') AS posted_date,") \
					_T("   noi_dung,") \
					_T("   taikhoan_no,") \
					_T("   taikhoan_co,") \
					_T("   taikhoan_no_TYC,") \
					_T("   taikhoan_co_TYC,") \
					//_T("   SUM(invoice_deposit) AS sotien_tamthu,") \//
					//_T("   SUM(tran_bao_viet) AS tran_bao_viet,") \//
					//_T("   SUM(invoice_deposit+ tran_bao_viet) as tongtien") \//
					_T("   SUM(tran_bao_viet) as tongtien") \
					_T(" FROM") \
					_T("   (SELECT '' AS so_hieu,") \
					_T("     payment_method,") \
					_T("     TRUNC(FAC_POSTEDDATE) AS posted_date,") \
					_T("     noi_dung,") \
					_T("     taikhoan_no,") \
					_T("     taikhoan_co,") \
					_T("     taikhoan_no_TYC,") \
					_T("     taikhoan_co_TYC,") \
					_T("     SUM(trichtamgui) AS invoice_deposit,") \
					_T("     SUM(ROUND(tran_bao_viet)) AS tran_bao_viet") \
					_T("   FROM fa_cash") \
					_T("   LEFT JOIN") \
					_T("     (SELECT hfe_cash_id  AS cash_id,") \
					_T("       hfe_payment_method AS payment_method,") \
					_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TAMTHU'") \
					_T("     )                AS noi_dung,") \
					_T("     '1312'           AS taikhoan_no,") \
					_T("     '531'            AS taikhoan_co,") \
					_T("     '1312'               AS taikhoan_no_TYC,") \
					_T("     '531'               AS taikhoan_co_TYC,") \
					_T("       hfe_deposit    AS trichtamgui,") \
					_T("       0 AS tran_bao_viet,") \
					_T("       CASE") \
					_T("         WHEN hfe_payment > 0") \
					_T("         THEN hfe_payment") \
					_T("         ELSE 0") \
					_T("       END AS thuthem,") \
					_T("       0   AS tamguibandau") \
					_T("     FROM hms_fee_invoice i") \
					_T("     WHERE hfe_status IN('P','R')") \
					_T("     AND hfe_payment  >=0") \
					_T("     AND hfe_refund    = 0") \
					_T("     UNION ALL") \
					_T("     SELECT hfe_cash_id  AS cash_id,") \
					_T("       hfe_payment_method AS payment_method,") \
					_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='BAOVIET'") \
					_T("     )                AS noi_dung,") \
					_T("     '13113'           AS taikhoan_no,") \
					_T("     '5311'            AS taikhoan_co,") \
					_T("     '13113'              AS taikhoan_no_TYC,") \
					_T("     '5311'               AS taikhoan_co_TYC,") \
					_T("       0    AS trichtamgui,") \
					_T("       i.HFE_EXTINS_PAID AS tran_bao_viet,") \
					_T("       CASE") \
					_T("         WHEN hfe_payment > 0") \
					_T("         THEN hfe_payment") \
					_T("         ELSE 0") \
					_T("       END AS thuthem,") \
					_T("       0   AS tamguibandau") \
					_T("     FROM hms_fee_invoice i") \
					_T("     WHERE hfe_status IN('P','R')") \
					_T("     AND hfe_payment  >=0") \
					_T("     AND hfe_refund    = 0 ") \
					_T("     ) tblInvoice") \
					_T("   ON(fac_cash_id   = cash_id)") \
					_T("   WHERE 1          =1") \
					_T("   %s") \
					_T("   GROUP BY FAC_POSTEDDATE,") \
					_T(" payment_method,") \
					_T("   noi_dung,") \
					_T("   taikhoan_no,") \
					_T("   taikhoan_co,") \
					_T("   taikhoan_no_TYC,") \
					_T("   taikhoan_co_TYC") \
					_T("   ORDER BY FAC_POSTEDDATE") \
					_T("   )") \
					_T(" GROUP BY so_hieu,") \
					_T("   posted_date,") \
					_T("   noi_dung,") \
					_T("   taikhoan_no,") \
					_T("   taikhoan_co,") \
					_T("   taikhoan_no_TYC,") \
					_T("   taikhoan_co_TYC") \
					_T(" HAVING SUM(tran_bao_viet)>0") \
					_T(" ORDER BY to_date(posted_date, 'DD-MM-YYYY')"), szWhere);
					return szSQL;
}
void CFMPostedReceiptVoucherList2::OnPrint7ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	CRecord rs(&pMF->m_db);	
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szthuquyATM, szthuquychung;
	CString sznoidung1 = _T("Trích tạm thu thanh toán viện phí bệnh nhân DVYT");
	CString sznoidung2 = _T("Thu viện phí bệnh nhân DVYT");
	CString sznoidung3 = _T("Thu bệnh nhân DVYT tạm gửi viện phí");
	double nTotal[15];
	double nFa = 0;
	if (m_bATMCard)
	{
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DVYT_ATM.RPT");
	}
	else if (m_bByMoneyTransfer)
	{
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DVYT_CK.RPT");
	}
	else
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOTHU_TONGHOP_DV.RPT");

	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString7();
	rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 15; i++)
		nTotal[i] = 0;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), _T(" "));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("posted_date")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("noi_dung")));
			if (m_bATMCard || m_bByMoneyTransfer)
			{
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no_ATM")));
			}
			else
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("taikhoan_co")));					
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("tongtien")));
			rs.GetValue(_T("tongtien"), nTmp);
			nTotal[7] += nTmp;
			
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if (rptDetail)
	{
		for (int i = 7; i <= 14; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%.3f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}

	}

	tmpStr = pMF->GetSysDate();
	rptFooter = rpt.GetReportFooter();
	szDate.Format(rptFooter->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[7]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rptFooter->SetValue(_T("SuminWords"), tmpStr);
	
	{
		tmpStr.Format(_T("%.3f"), nTotal[6] - nTotal[4]);
		rptFooter->SetValue(_T("Total(s6-s4)"), tmpStr);
	}
	
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	//OnPrintSummaryReceipt(nTotal[14]);
}
CString CFMPostedReceiptVoucherList2::GetQueryString7()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szReceiptStr;
	CString szOrderBy;
	/*CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);*/

	szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}

	if (m_bATMCard)
	
		szWhere.AppendFormat(_T(" and payment_method in ('ATM', 'TTD')"));

	else if (m_bByMoneyTransfer)
		szWhere.AppendFormat(_T(" and payment_method in ('CK')"));	
	

		szSQL.Format(_T(" SELECT") \
		_T(" so_hieu,") \
		_T(" TO_CHAR(posted_date, 'DD/MM/YYYY') AS posted_date,") \
		_T("   noi_dung,") \
		_T("   taikhoan_no,taikhoan_no_ATM,") \
		_T("   taikhoan_co,") \
		_T(" SUM(ROUND(sotien_thuthem)) as tongtien") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT '' AS so_hieu,") \
		_T("     payment_method,") \
		_T("     noi_dung,") \
		_T("     TRUNC(FAC_POSTEDDATE) AS posted_date,") \
		_T("     taikhoan_no,taikhoan_no_ATM,") \
		_T("     taikhoan_co,") \
		_T("     SUM(thuthem) AS sotien_thuthem,") \
		_T("     SUM(tamguibandau) AS sotien_tamguibandau") \
		_T("   FROM fa_cash") \
		_T("   LEFT JOIN") \
		_T("     (SELECT hfe_cash_id  AS cash_id,") \
		_T("       hfe_payment_method AS payment_method,    ") \
		_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='PHAITHU_VIENPHI') AS noi_dung,") \
		_T("     '1311'           AS taikhoan_no,") \
		_T("     '1311'           AS taikhoan_no_ATM,") \
		_T("     '531'            AS taikhoan_co,") \
		_T("       CASE") \
		_T("         WHEN hfe_payment > 0") \
		_T("         THEN hfe_payment") \
		_T("         ELSE 0") \
		_T("       END AS thuthem,") \
		_T("       0   AS tamguibandau") \
		_T("     FROM hms_fee_invoice i") \
		_T("     WHERE hfe_status IN('P','R')") \
		_T("     AND hfe_payment  >=0") \
		_T("     AND hfe_refund    = 0") \
		_T("     UNION ALL") \
		_T("     SELECT ") \
		_T("     hfe_cash_id AS cash_id,") \
		_T("     hfe_payment_method AS payment_method,    ") \
		_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TAMTHUVV') AS noi_dung,") \
		_T("     '1111'           AS taikhoan_no,") \
		_T("     '1311'           AS taikhoan_no_ATM,") \
		_T("     '1312'            AS taikhoan_co,") \
		_T("     0          AS thuthem,") \
		_T("     hfe_amount AS tamguibandau    ") \
		_T("   FROM hms_fee_deposit") \
		_T("   WHERE hfe_status           IN('P','R')") \

		_T(" UNION ALL") \
		_T("     SELECT hfe_cash_id  AS cash_id,") \
		_T("       hfe_payment_method AS payment_method,") \
		_T("       (SELECT ss_desc") \
		_T("       FROM sys_sel") \
		_T("       WHERE ss_id='NOIDUNG_THU'") \
		_T("       AND ss_code='COV'") \
		_T("       )      AS noi_dung,") \
		_T("       '1311' AS taikhoan_no,") \
		_T("       '1311' AS taikhoan_no_ATM,") \
		_T("       '531'  AS taikhoan_co,") \
		//_T("        (SELECT COALESCE(SUM(hfe_patpaid), 0)") \//
		_T(" (SELECT CASE WHEN COALESCE(SUM(hfe_otherpaid), 0) > 0") \
		_T(" 	     THEN COALESCE(SUM(hfe_otherpaid), 0)") \
		_T(" 	     ELSE COALESCE(SUM(hfe_patpaid), 0) END  ") \
		_T(" 	     FROM hms_fee f") \
		_T(" 	     WHERE f.hfe_docno   = i.hfe_docno") \
		_T(" 	     AND f.hfe_invoiceno = i.hfe_invoiceno   ") \
		_T(" 	     AND f.hfe_category   = 'COV'   ") \
		_T("         )AS thuthem,") \
		_T("       0   AS tamguibandau") \
		_T("     FROM hms_fee_invoice i") \
		_T("     WHERE hfe_status IN('P','R')") \
		_T("     AND hfe_payment  >=0") \
		_T("     AND hfe_refund    = 0") \

		_T("     ) tblInvoice") \
		_T("   ON(fac_cash_id   = cash_id)") \
		_T("   WHERE 1          =1 %s") \
		_T("   GROUP BY FAC_POSTEDDATE,") \
		_T("     payment_method, noi_dung, taikhoan_no, taikhoan_no_ATM,") \
		_T("     taikhoan_co") \
		_T("   ORDER BY FAC_POSTEDDATE") \
		_T("   )") \
		_T("   GROUP BY ") \
		_T("   so_hieu, posted_date,  noi_dung,  taikhoan_no, taikhoan_no_ATM, taikhoan_co") \
		_T("   HAVING SUM(sotien_thuthem)>0") \
		_T("   ORDER BY to_date(posted_date, 'DD-MM-YYYY')"), szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}


int CFMPostedReceiptVoucherList2::OnListCheckAllMTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if (szItemText == _T("CK-DV-YC"))
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllMTPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	
	if (szItemText == _T("CK-DV-PTTYC"))
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedReceiptVoucherList2::OnListCheckAllMTTYCPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if (szItemText == _T("CK-DV-PTTYC") || szItemText == _T("CK-DV-YC"))
	
	{
		m_wndList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

void CFMPostedReceiptVoucherList2::OnPrint3rdver_2024()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, *rptPrevMark = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, tmpStr2, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[21], nGroupTotal1[21];
	for (int i = 0; i < 21; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}	
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_A3_2024.RPT");
	
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3_2024();
	//_msg(_T("loc2024:%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));	
	data_name.Add(_T("INVOICE_DEPOSIT"));
	data_name.Add(_T("PAT_PAID"));	
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("HFE_PHIKHAM"));
	data_name.Add(_T("HFE_PHIGIUONG"));
	data_name.Add(_T("HFE_PHICLS"));	
	data_name.Add(_T("HFE_PHIPTTT"));
	data_name.Add(_T("DRUG_FEE"));
	data_name.Add(_T("MAT_FEE"));
	data_name.Add(_T("DRUG_FEE_B5"));
	data_name.Add(_T("MAT_FEE_B5"));
	data_name.Add(_T("PHI_MAU"));
	data_name.Add(_T("HFE_TIENAN"));
	data_name.Add(_T("HFE_GOIDV"));
	data_name.Add(_T("HFE_PHI_CHONBS"));
	data_name.Add(_T("HFE_PHI_KHAC"));	
	data_name.Add(_T("DEPOSIT"));
	data_name.Add(_T("TRAN_BAO_VIET"));
	data_name.Add(_T("RECEIPT_AMOUNT"));


	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}

	rpt.GetReportHeader()->SetValue(_T("Invoices"), m_szCashIDS);

_tprintf(_T("\r\n2"));
	int col_pos = 4;
	int sum_pos = (int) (data_name.GetCount()) - 1 ;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("chindex"), szNewLev1);		

		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[sum_pos] > 0)
			{
				//rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptPrevMark->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
			{
				m_mIndex.Lookup(szNewLev1, tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptPrevMark = rptGroup;
			szOldLev1 = szNewLev1;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("CLERK")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("INVOICE_NO")));
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				rs.GetValue(data_name.GetAt(i), nTmp);
				nGroupTotal1[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
	if (nGroupTotal1[sum_pos] > 0)
	{
		//rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptPrevMark->SetValue(szPos, tmpStr);
			nTotal[i]+= nGroupTotal1[i];
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
	tmpStr2 = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	if (tmpStr2.Find(',') != -1) 
		szDate.Format(tmpStr2, tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5,2), tmpStr.Left(4));
	else
		szDate.Format(tmpStr2, tmpStr.Mid(8, 2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMPostedReceiptVoucherList2"));

	CString szValue;	
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);	

	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[sum_pos]);
	
	//PrintFinancialDocument();
	if ((m_bATMCard) || (m_bByMoneyTransfer))
		{
		//OnPrintATM();
		}	
}

CString CFMPostedReceiptVoucherList2::GetQueryString3_2024()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szFeeType;

	CString szOrderBy;
	CString szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

	

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);


	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}

	if (m_bATMCard)
	
		szWhere.AppendFormat(_T(" and PAYMENT_METHOD in ('ATM', 'TTD')"));

	else if (m_bByMoneyTransfer)
		szWhere.AppendFormat(_T(" and PAYMENT_METHOD in ('CK')"));

	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_SERVICE_INCOME ") \
		_T(" WHERE cash_id > 0 and (TONG_VIEN_PHI + INVOICE_DEPOSIT + DEPOSIT) > 0 %s "), szWhere);	
	return szSQL;
}
void CFMPostedReceiptVoucherList2::OnQrOnlineSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CFMPostedReceiptVoucherList2::OnPrint3rdver_2024_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, *rptPrevMark = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, tmpStr2, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[21], nGroupTotal1[21];
	for (int i = 0; i < 21; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}	
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_A3_2024.RPT");
	
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3_2024_v2();
	//_msg(_T("loc2024:%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));	
	data_name.Add(_T("INVOICE_DEPOSIT"));
	data_name.Add(_T("PAT_PAID"));	
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("HFE_PHIKHAM"));
	data_name.Add(_T("HFE_PHIGIUONG"));
	data_name.Add(_T("HFE_PHICLS"));	
	data_name.Add(_T("HFE_PHIPTTT"));
	data_name.Add(_T("DRUG_FEE"));
	data_name.Add(_T("MAT_FEE"));
	data_name.Add(_T("DRUG_FEE_B5"));
	data_name.Add(_T("MAT_FEE_B5"));
	data_name.Add(_T("PHI_MAU"));
	data_name.Add(_T("HFE_TIENAN"));
	data_name.Add(_T("HFE_GOIDV"));
	data_name.Add(_T("HFE_PHI_CHONBS"));
	data_name.Add(_T("HFE_PHI_KHAC"));	
	data_name.Add(_T("DEPOSIT"));
	data_name.Add(_T("TRAN_BAO_VIET"));
	data_name.Add(_T("RECEIPT_AMOUNT"));


	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}

	rpt.GetReportHeader()->SetValue(_T("Invoices"), m_szCashIDS);

_tprintf(_T("\r\n2"));
	int col_pos = 4;
	int sum_pos = (int) (data_name.GetCount()) - 1 ;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("chindex"), szNewLev1);		

		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[sum_pos] > 0)
			{
				//rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptPrevMark->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
			{
				m_mIndex.Lookup(szNewLev1, tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptPrevMark = rptGroup;
			szOldLev1 = szNewLev1;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("CLERK")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("INVOICE_NO")));
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				rs.GetValue(data_name.GetAt(i), nTmp);
				nGroupTotal1[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
	if (nGroupTotal1[sum_pos] > 0)
	{
		//rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptPrevMark->SetValue(szPos, tmpStr);
			nTotal[i]+= nGroupTotal1[i];
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
	tmpStr2 = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	if (tmpStr2.Find(',') != -1) 
		szDate.Format(tmpStr2, tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5,2), tmpStr.Left(4));
	else
		szDate.Format(tmpStr2, tmpStr.Mid(8, 2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMPostedReceiptVoucherList2"));

	CString szValue;	
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);	

	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[sum_pos]);
	
	//PrintFinancialDocument();
	if ((m_bATMCard) || (m_bByMoneyTransfer))
		{
		//OnPrintATM();
		}	
}

CString CFMPostedReceiptVoucherList2::GetQueryString3_2024_v2()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szFeeType, szDepts;

	CString szOrderBy;
	CString szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

	

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);


	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}

	if (m_bATMCard)
	
		szWhere.AppendFormat(_T(" and PAYMENT_METHOD in ('ATM', 'TTD')"));

	else if (m_bByMoneyTransfer)
		szWhere.AppendFormat(_T(" and PAYMENT_METHOD in ('CK')"));

	
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfe_deptid in(%s) "), szDepts);
	}

	if (m_nAllObj == 0)
	{
		szWhere.AppendFormat(_T(" and 1=1 "));
	}
	else if (m_nService == 0)
	{
		szWhere.AppendFormat(_T(" and doituong = 7 "));
	}
	else  
	{
		szWhere.AppendFormat(_T(" and doituong <> 7 "));
	}
	
	/*szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_SERVICE_INCOME_V5 ") \
		_T(" WHERE cash_id > 0 and (TONG_VIEN_PHI + INVOICE_DEPOSIT + DEPOSIT) > 0 %s "), szWhere);*/

		szSQL.Format(_T(" SELECT CLERK,") \
		_T("   INVOICE_NO,") \
		_T("   POSTED_DATE,") \
		_T("   CASH_ID, ") \
		_T("   CHINDEX, ") \
		_T("   PAYMENT_METHOD,") \
		_T("   SUM(TONG_VIEN_PHI)   AS TONG_VIEN_PHI,") \
		_T("   SUM(INVOICE_DEPOSIT) AS INVOICE_DEPOSIT,") \
		_T("   SUM(PAT_PAID)        AS PAT_PAID,") \
		_T("   SUM(INVOICE_AMOUNT)  AS INVOICE_AMOUNT,") \
		_T("   SUM(MIEN_GIAM)       AS MIEN_GIAM,") \
		_T("   SUM(INVOICE_DRUG)    AS INVOICE_DRUG, ") \
		_T("   SUM(INVOICE_MATERIAL) as INVOICE_MATERIAL,") \
		_T("   SUM(CNC_AMOUNT) as CNC_AMOUNT,") \
		_T("   SUM(THU_GOIDV) as THU_GOIDV,") \
		_T("   SUM(NGUONCOVID) as NGUONCOVID, ") \
		_T("   SUM(HFE_PHIKHAM)     AS HFE_PHIKHAM,") \
		_T("   SUM(HFE_PHIGIUONG)   AS HFE_PHIGIUONG,") \
		_T("   SUM(HFE_PHICLS)      AS HFE_PHICLS,") \
		_T("   SUM(HFE_PHIPTTT)     AS HFE_PHIPTTT,") \
		_T("   SUM(DRUG_FEE)        AS DRUG_FEE,") \
		_T("   SUM(MAT_FEE)         AS MAT_FEE,") \
		_T("   SUM(DRUG_FEE_B5) DRUG_FEE_B5,") \
		_T("   SUM(MAT_FEE_B5)     AS MAT_FEE_B5,") \
		_T("   SUM(PHI_MAU)        AS PHI_MAU,") \
		_T("   SUM(HFE_TIENAN)     AS HFE_TIENAN,") \
		_T("   SUM(HFE_GOIDV)      AS HFE_GOIDV,") \
		_T("   SUM(HFE_PHI_CHONBS) AS HFE_PHI_CHONBS,") \
		_T("   SUM(HFE_PHI_KHAC)   AS HFE_PHI_KHAC,") \
		_T("   SUM(DEPOSIT)        AS DEPOSIT,") \
		_T("   SUM(TRAN_BAO_VIET)  AS TRAN_BAO_VIET,") \
		_T("   SUM(RECEIPT_AMOUNT) AS RECEIPT_AMOUNT") \
		_T(" FROM V_SERVICE_INCOME_V5 ") \
		_T(" WHERE cash_id > 0 and (TONG_VIEN_PHI + INVOICE_DEPOSIT + DEPOSIT) > 0  %s GROUP BY CLERK, INVOICE_NO,POSTED_DATE,PAYMENT_METHOD,CASH_ID,CHINDEX "), szWhere);
	
	//_msg(_T("%s"), szSQL);

	return szSQL;
}

long CFMPostedReceiptVoucherList2::OnDeptListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad();
	return nCount;

}

int CFMPostedReceiptVoucherList2::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (!m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMPostedReceiptVoucherList2::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, FALSE);
		}
	}
	return 0;
}

int CFMPostedReceiptVoucherList2::OnDeptListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndDeptList.GetItemCount(); i++)	
	{
		szItemText=m_wndDeptList.GetItemText(i,0);

		if ((szItemText == _T("TYC")) || (szItemText == _T("PTTYC")))
	{
		m_wndDeptList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndDeptList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMPostedReceiptVoucherList2::OnDeptListCheckAllDV()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndDeptList.GetItemCount(); i++)	
	{
		szItemText=m_wndDeptList.GetItemText(i,0);

		if ((szItemText != _T("TYC")) && (szItemText != _T("PTTYC")))
	{
		m_wndDeptList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndDeptList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

void CFMPostedReceiptVoucherList2::OnExportForChecking()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHU_CP.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_check();
	rs.ExecSQL(szSQL);	
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("tongthu"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tongthu_cp"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);		

		nRow++;
		rs.MoveNext();
	}	

	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 1; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHU_CP2.xls"));
} 

CString CFMPostedReceiptVoucherList2::GetQueryString_check()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;

	CString szDepts, szInnerWhere, szObjects, szReceiptStr, m_szCashIDS;
	
	szReceiptStr = _T("-1");
	int nCount = 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
			nCount++;
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_SERVICE_INCOME_CP ") \
		_T(" WHERE cash_id > 0 and (TONGTHU + TONGTHU_CP) > 0 %s "), szWhere);
	
	return szSQL;
}

void CFMPostedReceiptVoucherList2::OnAllObjSelect()
{
	m_nAllObj = 0;
	m_nService =1;
	m_nInsurance = 1;
	
}
void CFMPostedReceiptVoucherList2::OnInsuranceSelect()
{
	m_nAllObj = 1;
	m_nService =1;
	m_nInsurance = 0;
}
void CFMPostedReceiptVoucherList2::OnServiceSelect()
{
	m_nAllObj = 1;
	m_nService =0;
	m_nInsurance = 0;
}