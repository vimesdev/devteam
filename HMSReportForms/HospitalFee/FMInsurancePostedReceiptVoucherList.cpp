#include "stdafx.h"
#include "FMInsurancePostedReceiptVoucherList.h"
#include "HMSMainFrame.h"
#include "StringToken.h"
#include "FMFinancialDocumentPrinter.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherList* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherList *pVw = (CFMInsurancePostedReceiptVoucherList *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherList *pVw = (CFMInsurancePostedReceiptVoucherList *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherList *pVw = (CFMInsurancePostedReceiptVoucherList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherList *pVw = (CFMInsurancePostedReceiptVoucherList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnAddFMInsurancePostedReceiptVoucherList();
} 
static int _OnEditFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnEditFMInsurancePostedReceiptVoucherList();
} 
static int _OnDeleteFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnDeleteFMInsurancePostedReceiptVoucherList();
} 
static int _OnSaveFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnSaveFMInsurancePostedReceiptVoucherList();
} 
static int _OnCancelFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnCancelFMInsurancePostedReceiptVoucherList();
} 
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnSODSelect();
}
static void _OnServicePackageSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnServicePackageSelect();
}
static void _OnBHKhacSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnBHKhacSelect();
}
static void _OnBHQuanSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnBHQuanSelect();
}

static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnABZoneSelect();
}
static void _OnATMCardSelectFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnATMCardSelect();
}

static int _OnListCheckAllCardTYCFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListCheckAllCardTYC();
	return 0;
}
static void _OnAllInsSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnAllInsSelect();
}
static void _OnByMoneyTransferSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnByMoneyTransferSelect();
}
static void _OnTCKTSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnTCKTSelect();
}

static int _OnListCheckAllCKTYCFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListCheckAllCKTYC();
	return 0;
}

static int _OnListUnCheckAllATMCKTYCFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherList*)pWnd)->OnListUnCheckAllATMCKTYC();
	return 0;
}

CFMInsurancePostedReceiptVoucherList::CFMInsurancePostedReceiptVoucherList(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();

}
CFMInsurancePostedReceiptVoucherList::~CFMInsurancePostedReceiptVoucherList()
{
}
void CFMInsurancePostedReceiptVoucherList::OnCreateComponents()
	{
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 231, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 237, 30, 326, 55);
	m_wndReportPeriod.Create(this,331, 30, 467, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 231, 85); 
	m_wndToDate.Create(this,331, 60, 467, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 237, 60, 326, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 231, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,96, 121, 232, 146); 
	m_wndStatusLabel.Create(this, _T("Status"), 238, 90, 327, 115);
	m_wndStatus.Create(this,331, 90, 467, 115); 
	m_wndList.Create(this,10, 183, 467, 473); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 331, 505, 434, 530);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 300, 540, 380, 565);
	m_wndExport.Create(this, _T("Export XLS"), 385, 540, 465, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 474, 110, 499);
	m_wndOutpatient.Create(this, _T("Outpatient"), 116, 474, 216, 499);
	m_wndDeposit.Create(this, _T("Deposit"), 10, 505, 110, 530);
	m_wndEDeposit.Create(this, _T("EDeposit"), 116, 505, 216, 530);
	m_wndSOD.Create(this, _T("SOD"), 10, 150, 90, 175);
	m_wndServicePackage.Create(this, _T("ServicePackage"), 222, 505, 325, 530);
	m_wndBHKhac.Create(this, _T("BHKhac"), 222, 474, 325, 499);
	m_wndBHQuan.Create(this, _T("BHQuan"), 331, 474, 434, 499);
	m_wndABZone.Create(this, _T("AB Zone"), 95, 150, 231, 175);
	m_wndATMCard.Create(this, _T("ATM Card"), 238, 121, 327, 146);
	m_wndAllIns.Create(this, _T("AllIns"), 238, 150, 327, 175);
	m_wndByMoneyTransfer.Create(this, _T("ByMoneyTransfer"), 331, 121, 467, 146);
	m_wndTCKT.Create(this, _T("TCKT"), 331, 150, 467, 175);
}
void CFMInsurancePostedReceiptVoucherList::OnInitializeComponents(){
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


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Posted"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(3, _T("Ngày ghi sổ"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(5, _T("Cashbook_Id"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Ngày duyệt"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(7, _T("Đã duyệt"), CFMT_TEXT, 40);

	m_wndList.SetCheckBox(true);

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

void CFMInsurancePostedReceiptVoucherList::OnSetWindowEvents(){
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
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Chọn phiếu thu BH"), _OnListCheckAllInsInvoiceFnc);
	m_wndList.AddEvent(2, _T("Bỏ Chọn phiếu thu BH"), _OnListUnCheckAllInsInvoiceFnc);
	m_wndList.AddEvent(3, _T("Chọn phiếu thu Quân"), _OnListCheckAllSolderFnc);
	m_wndList.AddEvent(4, _T("Bỏ Chọn phiếu thu Quân"), _OnListUnCheckAllSolderFnc);
	m_wndList.AddEvent(5, _T("Chọn phiếu thu BH Quân"), _OnListCheckAllInsSolderFnc);
	m_wndList.AddEvent(6, _T("Bỏ Chọn phiếu thu BH Quân"), _OnListUnCheckAllInsSolderFnc);
	m_wndList.AddEvent(7, _T("Chọn thu bằng thẻ yêu cầu"), _OnListCheckAllCardTYCFnc);
	m_wndList.AddEvent(8, _T("Chọn thu bằng chuyển khoản yêu cầu"), _OnListCheckAllCKTYCFnc);
	m_wndList.AddEvent(9, _T("****"));

	m_wndList.AddEvent(10, _T("UnCheck thẻ + CK"), _OnListUnCheckAllATMCKTYCFnc);

//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndServicePackage.SetEvent(WE_CLICK, _OnServicePackageSelectFnc);
	m_wndATMCard.SetEvent(WE_CLICK, _OnATMCardSelectFnc);
	m_wndBHKhac.SetEvent(WE_CLICK, _OnBHKhacSelectFnc);
	m_wndBHQuan.SetEvent(WE_CLICK, _OnBHQuanSelectFnc);
	m_wndAllIns.SetEvent(WE_CLICK, _OnAllInsSelectFnc);
	m_wndByMoneyTransfer.SetEvent(WE_CLICK, _OnByMoneyTransferSelectFnc);
	m_wndTCKT.SetEvent(WE_CLICK, _OnTCKTSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsurancePostedReceiptVoucherListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsurancePostedReceiptVoucherListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsurancePostedReceiptVoucherListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsurancePostedReceiptVoucherListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsurancePostedReceiptVoucherListFnc, 0, 'T', VK_CONTROL);
*/
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	m_mIndex[_T("I")] = _T("Thu nội trú BH khác");
	m_mIndex[_T("II")] = _T("Thu nội trú BH quân");
	m_mIndex[_T("III")] = _T("Thu ngoại trú BH khác");
	m_mIndex[_T("IV")] = _T("Thu ngoại trú BH quân");
	m_mIndex[_T("V")] = _T("Thu tạm gửi vào viện BH khác");
	m_mIndex[_T("VI")] = _T("Thu tạm gửi vào viện BH quân");
	m_mIndex[_T("VII")] = _T("Thu tạm gửi phòng khám BH khác");
	m_mIndex[_T("VIII")] = _T("Thu tạm gửi phòng khám BH quân");
	m_mIndex[_T("X")] = _T("Thu phí bệnh nhân thanh toán thẻ");
	m_mIndex[_T("XI")] = _T("Thu phí bệnh nhân thanh toán bằng chuyển khoản");
	m_mIndex[_T("XII")] = _T("Thu phí bệnh nhân bảo hiểm");


	SetMode(VM_EDIT);


}
void CFMInsurancePostedReceiptVoucherList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndDeposit.GetDlgCtrlID(), m_bDeposit);
	DDX_Check(pDX, m_wndEDeposit.GetDlgCtrlID(), m_bEDeposit);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndServicePackage.GetDlgCtrlID(), m_bServicePackage);
	DDX_Check(pDX, m_wndBHKhac.GetDlgCtrlID(), m_bBHKhac);
	DDX_Check(pDX, m_wndBHQuan.GetDlgCtrlID(), m_bBHQuan);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndATMCard.GetDlgCtrlID(), m_bATMCard);
	DDX_Check(pDX, m_wndAllIns.GetDlgCtrlID(), m_bAllIns);
	DDX_Check(pDX, m_wndByMoneyTransfer.GetDlgCtrlID(), m_bByMoneyTransfer);
	DDX_Check(pDX, m_wndTCKT.GetDlgCtrlID(), m_bTCKT);
}
void CFMInsurancePostedReceiptVoucherList::GetDataToScreen()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsurancePostedReceiptVoucherList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsurancePostedReceiptVoucherList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_bInpatient = FALSE;
	m_bOutpatient = FALSE;
	m_bDeposit = FALSE;
	m_bEDeposit=FALSE;
	m_bSOD=FALSE;
	m_bServicePackage=FALSE;
	m_bBHKhac=FALSE;
	m_bBHQuan=FALSE;
	m_bATMCard=FALSE;
	m_bAllIns=FALSE;
	m_bByMoneyTransfer=FALSE;
	m_bTCKT=FALSE;
}

int CFMInsurancePostedReceiptVoucherList::SetMode(int nMode){
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

/*void CFMInsurancePostedReceiptVoucherList::OnYearChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherList::OnYearSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherList::OnYearKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherList::OnYearCheckValue(){
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
 
void CFMInsurancePostedReceiptVoucherList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
void CFMInsurancePostedReceiptVoucherList::OnServicePackageSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();		
}

void CFMInsurancePostedReceiptVoucherList::OnTCKTSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
 
void CFMInsurancePostedReceiptVoucherList::OnReportPeriodSelendok(){
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

/*void CFMInsurancePostedReceiptVoucherList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherList::OnReportPeriodKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherList::OnReportPeriodLoadData(){
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

/*void CFMInsurancePostedReceiptVoucherList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsurancePostedReceiptVoucherList::OnFromDateChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherList::OnFromDateSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherList::OnFromDateKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsurancePostedReceiptVoucherList::OnToDateChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherList::OnToDateSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherList::OnToDateKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsurancePostedReceiptVoucherList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherList::OnClerkSelendok(){
	 
}
/*void CFMInsurancePostedReceiptVoucherList::OnClerkSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherList::OnClerkKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherList::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsurancePostedReceiptVoucherList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedReceiptVoucherList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherList::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMInsurancePostedReceiptVoucherList::OnStatusSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherList::OnStatusKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherList::OnStatusLoadData(){
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
/*void CFMInsurancePostedReceiptVoucherList::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedReceiptVoucherList::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherList::OnOrderBySelendok(){
	 
}
/*void CFMInsurancePostedReceiptVoucherList::OnOrderBySetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherList::OnOrderByKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherList::OnOrderByLoadData(){
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
/*void CFMInsurancePostedReceiptVoucherList::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedReceiptVoucherList::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsurancePostedReceiptVoucherList::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMInsurancePostedReceiptVoucherList::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsurancePostedReceiptVoucherList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
void CFMInsurancePostedReceiptVoucherList::OnSODSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}

void CFMInsurancePostedReceiptVoucherList::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();
}

void CFMInsurancePostedReceiptVoucherList::OnATMCardSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();
}
void CFMInsurancePostedReceiptVoucherList::OnBHKhacSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsurancePostedReceiptVoucherList::OnAllInsSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
	void CFMInsurancePostedReceiptVoucherList::OnBHQuanSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsurancePostedReceiptVoucherList::OnByMoneyTransferSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
    }
long CFMInsurancePostedReceiptVoucherList::OnListLoadData()
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
		
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC','THE-BH-YC', 'THE-BH-PTTYC')"));
	    szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC','THE-BH-YC', 'THE-BH-PTTYC', 'CK-BH-YC', 'CK-BH-PTTYC', 'QR')"));

	else if (m_bABZone)
	{
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB')"));
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB', 'QR') OR (fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') and FAC_POSTED ='Y' AND fac_invoicetype IN('R') AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F'))"));
	    szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}
	else if ((m_bATMCard) || (m_bByMoneyTransfer))
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('THE-BH','CK-BH', 'QR')"));
	else if (m_bAllIns)
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG','BH-NGAB','BH-NTAB', 'QR' )"));

	else if (m_bTCKT)

	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','BH-NGAB','BH-NTAB','THE-BH','CK-BH', 'QR')"));

	else
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG') AND fac_user_id not in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F')"));
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG', 'QR')"));


	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, FAC_POSTED stt, fac_invoicedate, fac_approveddate, fac_posteddate,FAC_CASHBOOK_ID as cashbook_id, fac_approveddate as ngayduyet, FAC_APPROVED as daduyet ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'R' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
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

void CFMInsurancePostedReceiptVoucherList::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMInsurancePostedReceiptVoucherList::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMInsurancePostedReceiptVoucherList::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("In BK bảo hiểm"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("In BK bảo hiểm Ver2.0"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("In BKBH không phát sinh tiền mặt"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	TranslateString(_T("In chứng từ ghi sổ thu - Mẫu CQ07-HD - 01"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);


	TranslateString(_T("**********"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 5, tmpStr);


	TranslateString(_T("Phải thu tiền kinh phí KCB BN BHYT"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 6, tmpStr);

	TranslateString(_T("Phải thu tiền kinh phí KCB BN BHYT Quân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 7, tmpStr);

	TranslateString(_T("Phải thu tiền chênh lệch BN cấp tướng"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 8, tmpStr);

	TranslateString(_T("Phải thu tiền chênh lệch BN BHYT Quân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 9, tmpStr);

	TranslateString(_T("Phải thu ngân sách nhà nước (nguồn covid)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 10, tmpStr);

	TranslateString(_T("**********"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 11, tmpStr);

	TranslateString(_T("In BK bảo hiểm (mới từ 1/1/2024)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 12, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint3rdver();
			break;
		case 2:
			OnPrint3rdver_2();
			break;
		case 3:
			OnPrint4rdver();
			break;
		case 4:
			OnPrint5rdver();
			break;

		case 6:
			OnPrint3rdver_Detail(true, false, false, false, false);
			PrintFinancialDocument_Detail(true, false, false, false, false);
			break;
		case 7:
			OnPrint3rdver_Detail(false, true, false, false, false);
			PrintFinancialDocument_Detail(false, true, false, false, false);
			break;
		case 8:
			OnPrint3rdver_Detail(false, false, true, false, false);
			PrintFinancialDocument_Detail(false, false, true, false, false);
			break;
		case 9:
			OnPrint3rdver_Detail(false, false, false, true, false);
			PrintFinancialDocument_Detail(false, false, false, true, false);
			break;
		case 10:
			OnPrint3rdver_Detail(false, false, false, false, true);
			PrintFinancialDocument_Detail(false, false, false, false, true);
			break;
		case 12:
			OnPrint3rdver_2024();
			break;
	}
}
 
 
int CFMInsurancePostedReceiptVoucherList::OnAddFMInsurancePostedReceiptVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsurancePostedReceiptVoucherList::OnEditFMInsurancePostedReceiptVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsurancePostedReceiptVoucherList::OnDeleteFMInsurancePostedReceiptVoucherList(){
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
 		OnCancelFMInsurancePostedReceiptVoucherList();
 	}
	return 0;
}
int CFMInsurancePostedReceiptVoucherList::OnSaveFMInsurancePostedReceiptVoucherList(){
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
 		//OnFMInsurancePostedReceiptVoucherListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMInsurancePostedReceiptVoucherList::OnCancelFMInsurancePostedReceiptVoucherList(){
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
int CFMInsurancePostedReceiptVoucherList::OnFMInsurancePostedReceiptVoucherListListLoadData(){
	return 0;
}

void CFMInsurancePostedReceiptVoucherList::OnPrint2ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, *rptPrevMark = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[20], nGroupTotal1[20];
	for (int i = 0; i < 20; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
//_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("congvp"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
	data_name.Add(_T("cong_thu"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}

	rpt.GetReportHeader()->SetValue(_T("Invoices"), m_szCashIDS);

_tprintf(_T("\r\n2"));
	int col_pos = 4;
	int sum_pos = (int) (data_name.GetCount()) - 1;

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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	MoneyToString(ToString(nTotal[sum_pos]), tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	
	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.PrintPreview();
}

void CFMInsurancePostedReceiptVoucherList::OnPrint3rdver()
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
	double nTotal[22], nGroupTotal1[22];
	for (int i = 0; i < 22; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	if (m_bABZone)	
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1AB.RPT");
	else 
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1.RPT");
	
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3();
	//_msg(_T("loc:%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("nguoncovid"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	//data_name.Add(_T("congvp"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
	data_name.Add(_T("cong_thu"));
	data_name.Add(_T("cong_thu_all"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos-1]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[sum_pos-1]);
	PrintFinancialDocument();
	if ((m_bATMCard) || (m_bByMoneyTransfer))
		{
		OnPrintATM();
		}	
}

void CFMInsurancePostedReceiptVoucherList::OnPrintATM()
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
	double nTotal[22], nGroupTotal1[22];
	for (int i = 0; i < 22; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	if (m_bATMCard)
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1_ATM_A4.RPT");

	if (m_bByMoneyTransfer)
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1_CK_A4.RPT");
	
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3();
    //_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("nguoncovid"));
	//data_name.Add(_T("mien_giam"));
	//data_name.Add(_T("thu_khac"));
	data_name.Add(_T("thu_goidv"));
	//data_name.Add(_T("phi_ranggia"));
	//data_name.Add(_T("congvp"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
	data_name.Add(_T("cong_thu"));
	data_name.Add(_T("cong_thu_all"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
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

		if (m_bATMCard)
		{
			szNewLev1 = _T("X");
		}
		else
		{
			szNewLev1 = _T("XI");
		}

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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos-1]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	//OnPrintSummaryReceipt(nTotal[sum_pos-1]);
	//PrintFinancialDocument();
}
void CFMInsurancePostedReceiptVoucherList::OnPrint4rdver()
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
	if (m_bABZone)	
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1AB.RPT");
	else 
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1.RPT");
	
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString4();
   //_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	//data_name.Add(_T("congvp"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
	data_name.Add(_T("cong_thu"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}

	rpt.GetReportHeader()->SetValue(_T("Invoices"), m_szCashIDS);

_tprintf(_T("\r\n2"));
	int col_pos = 4;
	int sum_pos = (int) (data_name.GetCount()) - 1;

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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[sum_pos]);
}

void CFMInsurancePostedReceiptVoucherList::OnExportSelect()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export so sánh bảng kê và doanh thu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export so sánh bảng kê và chi tiết 2024"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect_V1();
			break;		
		case 2:
			OnExportSelect_V2();
			break;	
		
	}

}

CString CFMInsurancePostedReceiptVoucherList::GetQueryString3()
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

	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
		szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
		szFeeType += _T(", ");
		szFeeType += _T("'IV'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'V'");
		szFeeType += _T(", ");
		szFeeType += _T("'VI'");
	}
	if (m_bEDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'VII'");
		szFeeType += _T(", ");
		szFeeType += _T("'VIII'");
	}

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bServicePackage) szWhere.AppendFormat(_T(" AND thu_goidv > 0"));
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}

	if(m_bByMoneyTransfer)
		szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY3X_CK ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);		
	else if (m_bATMCard)
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY4X_ATM ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	else
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY2X_VL1 ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	return szSQL;
}
CString CFMInsurancePostedReceiptVoucherList::GetQueryString4()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szFeeType;

	CString szOrderBy;
	szWhere.Format(_T(" AND invoice_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
		szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
		szFeeType += _T(", ");
		szFeeType += _T("'IV'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'V'");
		szFeeType += _T(", ");
		szFeeType += _T("'VI'");
	}
	if (m_bEDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'VII'");
		szFeeType += _T(", ");
		szFeeType += _T("'VIII'");
	}

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bServicePackage) szWhere.AppendFormat(_T(" AND thu_goidv > 0"));
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}
	if(m_bByMoneyTransfer)
		szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY3_1 ") \
		_T(" WHERE 1=1 %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);		
	else if (m_bATMCard)
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY4_1 ") \
		_T(" WHERE 1=1 %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	else
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY2_1 ") \
		_T(" WHERE 1=1 %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	return szSQL;
}


CString CFMInsurancePostedReceiptVoucherList::GetQueryString()
{
	CString szSQL, szWhere, szWhere1, szWhere2;

	CString szOrderBy;
	CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and cash_id in(%s)   "), szReceiptStr);

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}


	szSQL.Format(_T("SELECT * ") \
		_T(" FROM HF_INSURANCEINCOMESUMMARY_VIEW ") \
		_T(" WHERE cash_id > 0 %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	
	return szSQL;
	///

	szSQL.Format(_T(" SELECT    NVL(trim(get_username(fac_user_id)), fac_user_id) user_name, ") \
				_T("           fac_cashbook_id, ") \
				_T("           fac_cash_id, ") \
				_T("           fac_invoiceno, ") \
				_T("           hfe_index, ") \
				_T("           SUM(hfe_deposit) trich_tam_gui, ") \
				_T("           SUM(hfe_amount+hfe_otherreceipt) tong_vien_phi, ") \
				_T("           round(SUM(hfe_discount)) BHTT, ") \
				_T("           SUM(hfe_patpaid1) AS cung_chi_tra, ") \
				_T("           SUM(hfe_foodamount) tien_an, ") \
				_T("           round(SUM(hfe_diffcost)) thu_chenh, ") \
				_T("           round(SUM(hfe_policyamount)) thu_chinh_sach, ") \
				_T("           SUM(hfe_otherreceipt) thu_khac, ") \
				_T("           round(SUM( hfe_patpaid1 +  hfe_diffcost +hfe_foodamount ") \
				_T("             + hfe_otherreceipt)) AS cong, ") \
				_T("           SUM(hfe_tamgui) tam_gui, ") \
				_T("           SUM(hfe_ngoaitru) ngoai_tru, ") \
				_T("           round(SUM( hfe_patpaid1 +  hfe_diffcost + hfe_foodamount ") \
				_T("             + hfe_otherreceipt + hfe_tamgui  - hfe_deposit )) AS cong_thu ") \
				_T(" FROM      fa_cash ") \
				_T(" LEFT JOIN ") \
				_T(" (SELECT 'I' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         hfe_deposit, ") \
				_T("         hfe_amount, ") \
				_T("         hfe_inspaid, ") \
				_T("         hfe_discount, ") \
				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT COALESCE(SUM((f.hfe_inspaid-f.hfe_discount)), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno  AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) and hfe_feegroup not in('OPT_L')) ") \
				_T("         ELSE hfe_inspaid-hfe_discount ") \
				_T("         END AS hfe_patpaid1, ") \
				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno and substr(f.hfe_group, 1, 2) ='FF' AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )) ") \
				_T("         ELSE 0 ") \
				_T("         END AS hfe_foodamount, ") \
				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_diffcost), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno and substr(f.hfe_group, 1, 2) <>'FF'  AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) and hfe_diffcost > 0 and hfe_feegroup not in('OPT_L') ) ") \
				_T("         ELSE 0 ") \
				_T("         END AS hfe_diffcost, ") \

				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT Coalesce(SUM(hfe_cost-hfe_discount), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') IN( 'BQP', 'BBV' )) ") \
				_T("         ELSE 0 ") \
				_T("         END AS hfe_policyamount, ") \
				_T("         0 AS hfe_otherreceipt, ") \
				_T("         0 AS hfe_tamgui, ") \
				_T("         0 AS hfe_ngoaitru ") \
				_T("  FROM   hms_fee_invoice i ") \
				_T("  WHERE  hfe_status = 'P' AND hfe_payment >= 0 AND hfe_refund = 0 AND hfe_type <> 'O' AND hfe_class = 'I' ") \
				_T("  UNION ALL ") \
				_T("  SELECT 'I' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         0 AS hfe_deposit, ") \
				_T("         0 AS hfe_amount, ") \
				_T("         0 AS hfe_inspaid, ") \
				_T("         0 AS hfe_discount, ") \
				_T("         0 AS hfe_patpaid1, ") \
				_T("         0 AS hfe_foodamount, ") \
				_T("         0 AS hfe_diffcost, ") \
				_T("         0 AS hfe_policyamount, ") \
				_T("         hfe_payment AS hfe_othamount, ") \
				_T("         0 AS hfe_tamgui, ") \
				_T("         0 AS hfe_ngoaitru ") \
				_T("  FROM   hms_fee_invoice i ") \
				_T("  WHERE  hfe_status = 'P' AND hfe_payment >= 0 AND hfe_refund = 0 AND hfe_type = 'O' AND hfe_class = 'I' ") \
				_T("  UNION ALL ") \
				_T("  SELECT 'III' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         0 AS hfe_deposit, ") \
				_T("         0 AS hfe_amount, ") \
				_T("         0 AS hfe_inspaid, ") \
				_T("         0 AS hfe_discount, ") \
				_T("         0 AS hfe_patpaid1, ") \
				_T("         0 AS hfe_foodamount, ") \
				_T("         0 AS hfe_diffcost, ") \
				_T("         0 AS hfe_policyamount, ") \
				_T("         0 AS hfe_othamount, ") \
				_T("         hfe_amount AS hfe_tamgui, ") \
				_T("         0 AS hfe_ngoaitru ") \
				_T("  FROM   hms_fee_deposit i ") \
				_T("  WHERE  hfe_status IN( 'P', 'R' ) ") \
				_T("  UNION ALL ") \
				_T("  SELECT 'II' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         hfe_deposit, ") \
				_T("         hfe_amount, ") \
				_T("         hfe_inspaid, ") \
				_T("         hfe_discount, ") \
				_T("         hfe_copayment AS hfe_patpaid1, ") \
				_T("         0 AS hfe_foodamount, ") \
				_T("         hfe_diffcost, ") \
				_T("         0 AS hfe_policyamount, ") \
				_T("         0 AS hfe_otherreceipt, ") \
				_T("         0 AS hfe_tamgui, ") \
				_T("         hfe_patpaid AS hfe_ngoaitru ") \
				_T("  FROM   hms_fee_invoice i ") \
				_T("  WHERE  hfe_status = 'P' AND hfe_payment >= 0 AND hfe_refund = 0 AND hfe_class <> 'I') ") \
				_T("  tblInvoice ON( hfe_cash_id = fac_cash_id ) ") \
				_T(" WHERE     Substr(fac_cashbook_id, 1, 2) = 'BH' %s") \
				_T(" GROUP BY fac_user_id, ") \
				_T("           fac_cashbook_id, ") \
				_T("           fac_cash_id, ") \
				_T("           fac_invoiceno, ") \
				_T("           hfe_index") \
				_T(" ORDER BY hfe_index %s "), szWhere, szOrderBy);
_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CFMInsurancePostedReceiptVoucherList::GetQueryString2(){
	CString szSQL, szWhere, szWhere1;
	szWhere.AppendFormat(_T(" AND i.hfe_status = 'P' AND fac_posted = 'Y'") \
						_T(" AND fac_posteddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T(" AND fac_invoicetype = 'R'"), m_szFromDate, m_szToDate);
	/*if (m_bService)
		szWhere1.AppendFormat(_T(" AND fac_cashbook_id = 'DV'"));
	else*/
		szWhere1.AppendFormat(_T(" AND fac_cashbook_id <> 'DV'"));
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
void CFMInsurancePostedReceiptVoucherList::OnPrintFooterUser(CReportSection* rptFooter)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND fpf_module_id = '%s'"), pMF->GetModuleID());
	//szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), _T("BH"));
	szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), m_bSOD?_T("TYC"):_T("BH"));
	//_msg(_T("%s"), szWhere);
	szSQL.Format(_T("SELECT fpf_position field_name, fpf_title title FROM fm_print_footer WHERE 1=1 %s"), szWhere);

	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rptFooter->SetValue(rs.GetValue(_T("field_name")), rs.GetValue(_T("title")));
		rs.MoveNext();
	}
}
void CFMInsurancePostedReceiptVoucherList::OnPrintSummaryReceipt(double nTotalAmount)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs1(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL;
	CString tmpStr, tmpStr2, szReportName, szDate, szSQL, szthuquyATM, szthuquychung;
	/*if (!rpt.Init(_T("Reports/HMS/HF_PHIEUTHUC30BB_THBH.rpt")))
		return;*/
	
	if (m_bABZone)	
	szReportName = _T("Reports\\HMS\\HF_PHIEUTHUC30BB_THBHAB.rpt");
	else 
	szReportName = _T("Reports\\HMS\\HF_PHIEUTHUC30BB_THBH.rpt");
	
	if (!rpt.Init(szReportName))
		return;

	rptDetail = rpt.AddDetail();
	rptDetail->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptDetail->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rptDetail->SetValue(_T("ReportDate"), tmpStr);
	tmpStr = pMF->GetDoctorName(pMF->GetCurrentUser());
	/*tmpStr += m_bSOD?_T(" - H\x1ED9 \x64\x1ECB\x63h v\x1EE5 kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u (t\x1ED5ng h\x1EE3p thu)")
		:_T(" - H\x1ED9 \x64\x1ECB\x63h v\x1EE5 y t\x1EBF (t\x1ED5ng h\x1EE3p thu)");*/
	tmpStr += _T(" - H\x1ED9 \x62\x1EA3o hi\x1EC3m y t\x1EBF (t\x1ED5ng h\x1EE3p thu)");
	rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
	rptDetail->SetValue(_T("Address"), _T("Ph\xF2ng t\xE0i \x63h\xEDnh"));
	rptDetail->SetValue(_T("Reason"), _T("Thu ti\x1EC1n vi\x1EC7n ph\xED"));
	FormatCurrency(nTotalAmount, tmpStr);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%.3f"), nTotalAmount);
	MoneyToString(tmpStr, tmpStr2);
	tmpStr2 += _T(" \x111\x1ED3ng.");
	rptDetail->SetValue(_T("SumInWord"), tmpStr2);
	rptDetail->SetValue(_T("SumInWord1"), tmpStr2);

	tmpStr = pMF->GetSysDate();	
	szDate.Format(rptDetail->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);

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


	OnPrintFooterUser(rptDetail);
	rpt.PrintPreview();
}
int CFMInsurancePostedReceiptVoucherList::OnListCheckAllIns()
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
int CFMInsurancePostedReceiptVoucherList::OnListUnCheckAllIns()
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
int CFMInsurancePostedReceiptVoucherList::OnListCheckAllSolder()
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

int CFMInsurancePostedReceiptVoucherList::OnListUnCheckAllSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("QUAN"))==szItemText.Right(4) && (_T("BHQUAN"))!= szItemText.Right(6)  )
	{
		m_wndList.SetCheck(i, false);
		nCheck++;
	}	
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMInsurancePostedReceiptVoucherList::OnListCheckAllInsSolder()
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

int CFMInsurancePostedReceiptVoucherList::OnListUnCheckAllInsSolder()
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
int CFMInsurancePostedReceiptVoucherList::OnListCheckAllCardTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("THE-BH-PTTYC"))==szItemText || (_T("THE-BH-YC"))==szItemText)
	{
		m_wndList.SetCheck(i, true);
	}	
	}
	return 0;
}

int CFMInsurancePostedReceiptVoucherList::OnListCheckAllCKTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("CK-BH-PTTYC"))==szItemText || (_T("CK-BH-YC"))==szItemText)
	{
		m_wndList.SetCheck(i, true);
	}	
	}
	return 0;
}

int CFMInsurancePostedReceiptVoucherList::OnListUnCheckAllATMCKTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
	if ((_T("CK-BH-PTTYC"))==szItemText || (_T("CK-BH-YC"))==szItemText || (_T("THE-BH-YC"))==szItemText || (_T("THE-BH-PTTYC"))==szItemText)
	{
		m_wndList.SetCheck(i, false);
	}	
	}
	return 0;
}


void CFMInsurancePostedReceiptVoucherList::OnPrint3rdver_2()
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
	double nTotal[25], nGroupTotal1[25];
	for (int i = 0; i < 25; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	//if (m_bABZone)	
	//szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1AB.RPT");	
	//else 
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_Ver2.RPT");
	
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3_2();
    //_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	data_name.Add(_T("TIEN_THUOC_DV"));
	data_name.Add(_T("TIEN_THUOC_BH"));
	data_name.Add(_T("TIEN_VATTU_DV"));
	data_name.Add(_T("TIEN_VATTU_BH"));
	//data_name.Add(_T("congvp"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
	data_name.Add(_T("cong_thu"));
	data_name.Add(_T("cong_thu_all"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos-1]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[sum_pos-1]);

}

void CFMInsurancePostedReceiptVoucherList::PrintFinancialDocument()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDocType;
	szSQL.Format(_T(" SELECT posted_date,") \
	_T("        SUM(trich_tam_gui) AS trich_tam_gui,") \
	_T("        SUM(BHTT)                                        AS BHTT,") \
	_T("        SUM(thu_chinh_sach + mien_giamE) as tra_chenh_quan,") \
	_T("        ROUND(SUM(THU_BHYT_THUONG))                             AS THU_BHYT_THUONG,") \
	_T("        ROUND(SUM(THU_BHYT_QUAN))                               AS THU_BHYT_QUAN,") \
	_T("        ROUND(SUM(THU_CHENH_CAPTUONG))                          AS THU_CHENH_CAPTUONG,") \
	_T("        ROUND(SUM(THU_CHENH_BHYT_QUAN))                         AS THU_CHENH_BHYT_QUAN,") \
	_T("		SUM(cong-trich_tam_gui-THU_CHINH_SACH-MIEN_GIAM-nguoncovid) AS vien_phi,") 
	_T("		SUM(tam_gui) AS tam_gui,") \
	_T("		SUM(nguoncovid) AS nguoncovid") \
	_T(" FROM   (%s)") \
	_T(" GROUP  BY posted_date ORDER BY to_date(posted_date,'DD-MM-YYYY')"), GetQueryString3());

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	tArrItem ari;
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("trich_tam_gui"), s.nAmount);
		ari.Add(s);
		//s.nType = 2;
		//rs.GetValue(_T("BHTT"), s.nAmount);
		//ari.Add(s);
		rs.MoveNext();
	}
	CFMDocumentPrinter* pPrinter = NULL;
	szDocType = _T("CT_THU_BHYT_1");
	if (m_bATMCard)
	{
		szDocType = _T("CT_THU_BHYT_ATM_1");	
	}
	
	if (m_bByMoneyTransfer)
	{
		szDocType = _T("CT_THU_BHYT_CK_1");	
	}
		
	pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);
	
	rs.MoveFirst();
	ari.RemoveAll();
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("vien_phi"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("tam_gui"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}
	szDocType = _T("CT_THU_BHYT_2");
	if (m_bATMCard)
	{
		szDocType = _T("CT_THU_BHYT_ATM_2");	
	}
	
	if (m_bByMoneyTransfer)
	{
		szDocType = _T("CT_THU_BHYT_CK_2");	
	}
	pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("I"),m_szFromDate, m_szToDate);

	rs.MoveFirst();
	ari.RemoveAll();

	/*while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("BHTT"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("tra_chenh_quan"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}*/

	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("THU_BHYT_THUONG"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("THU_BHYT_QUAN"), s.nAmount);
		ari.Add(s);
		s.nType = 3;
		rs.GetValue(_T("THU_CHENH_CAPTUONG"), s.nAmount);
		ari.Add(s);
		s.nType = 4;
		rs.GetValue(_T("THU_CHENH_BHYT_QUAN"), s.nAmount);
		ari.Add(s);
		
		s.nType = 5;
		rs.GetValue(_T("nguoncovid"), s.nAmount);
		ari.Add(s);

		rs.MoveNext();
	}

	szDocType = _T("CT_THU_BHYT_3");

	if (m_bATMCard)
	{
		szDocType = _T("CT_THU_BHYT_ATM_3");	
	}
	
	if (m_bByMoneyTransfer)
	{
		szDocType = _T("CT_THU_BHYT_CK_3");	
	}
	pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("I"),m_szFromDate, m_szToDate);
	
	rs.MoveFirst();
	ari.RemoveAll();

	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("vien_phi"), s.nAmount);
		ari.Add(s);		
		rs.MoveNext();
	}
	szDocType = _T("CT_THU_BHYT_4");
	if (m_bATMCard)
	{
		szDocType = _T("CT_THU_BHYT_ATM_4");	
	}
	
	if (m_bByMoneyTransfer)
	{
		szDocType = _T("CT_THU_BHYT_CK_4");	
	}
	pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("I"),m_szFromDate, m_szToDate);

}

CString CFMInsurancePostedReceiptVoucherList::GetQueryString3_2()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szFeeType;

	CString szOrderBy;
	CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and cash_id in(%s)   "), szReceiptStr);

	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
		szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
		szFeeType += _T(", ");
		szFeeType += _T("'IV'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'V'");
		szFeeType += _T(", ");
		szFeeType += _T("'VI'");
	}
	if (m_bEDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'VII'");
		szFeeType += _T(", ");
		szFeeType += _T("'VIII'");
	}

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bServicePackage) szWhere.AppendFormat(_T(" AND thu_goidv > 0"));
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}
	if(m_bByMoneyTransfer)
		szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY3_VER2 ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);		
	else if (m_bATMCard)
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY4_VER2 ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	else
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY2_VER2 ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	return szSQL;
}

CString CFMInsurancePostedReceiptVoucherList::GetQueryString_check()
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


	
	szSQL.Format(_T(" SELECT") \
	_T(" docno, pname,") \
	_T(" sum(tong_vien_phi) as tong_vien_phi") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT docno , trim(surname||' '||midname||' '||firstname) as pname, ") \
	_T(" tong_vien_phi FROM HF_INSURANCEINCOME_VIEW2 ") \
	_T(" WHERE cash_id > 0 AND tong_vien_phi>0 %s") \
	_T(" ORDER BY docno") \
	_T(" )tmp") \
	_T(" GROUP BY docno, pname") \
	_T(" ORDER BY docno"), szWhere);
	return szSQL;	
}
void CFMInsurancePostedReceiptVoucherList::OnPrint5rdver()
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
	if (m_bABZone)	
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1AB.RPT");
	else 
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1.RPT");
	
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString5();
    //_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	//data_name.Add(_T("congvp"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
	data_name.Add(_T("cong_thu"));
	data_name.Add(_T("cong_thu_all"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos-1]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[sum_pos-1]);
}
CString CFMInsurancePostedReceiptVoucherList::GetQueryString5()
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

	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
		szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
		szFeeType += _T(", ");
		szFeeType += _T("'IV'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'V'");
		szFeeType += _T(", ");
		szFeeType += _T("'VI'");
	}
	if (m_bEDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'VII'");
		szFeeType += _T(", ");
		szFeeType += _T("'VIII'");
	}

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bServicePackage) szWhere.AppendFormat(_T(" AND thu_goidv > 0"));
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}
	if(m_bByMoneyTransfer)
		szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_CHUNGTU_THU_CK ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);		
	else if (m_bATMCard)
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_CHUNGTU_THU_ATM ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	else
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_CHUNGTU_THU ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	return szSQL;
}

void CFMInsurancePostedReceiptVoucherList::OnPrint3rdver_Detail(bool bmau1, bool bmau2, bool bmau3, bool bmau4, bool bmau5)
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
	double nTotal[22], nGroupTotal1[22];
	for (int i = 0; i < 22; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	if (m_bABZone)	
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1AB.RPT");
	else 
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1.RPT");
	
	if (!rpt.Init(szReportName))
		return;

	if (bmau1)
	{
		szSQL = GetQueryString3_detail(true, false, false, false, false);
	}

	else if (bmau2)
	{
		szSQL = GetQueryString3_detail(false, true, false, false, false);
	}

	else if (bmau3)
	{
		szSQL = GetQueryString3_detail(false, false, true, false, false);
	}
	else if (bmau4)
	{
		szSQL = GetQueryString3_detail(false, false, false, true, false);
	}
	else
	{
		szSQL = GetQueryString3_detail(false, false, false, false, true);
	}
	//_msg(_T("loc:%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("nguoncovid"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	//data_name.Add(_T("congvp"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
	data_name.Add(_T("cong_thu"));
	data_name.Add(_T("cong_thu_all"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos-1]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[sum_pos-1]);
	//PrintFinancialDocument_Detail();
	//if ((m_bATMCard) || (m_bByMoneyTransfer))
	//	{
	//	OnPrintATM();
	//	}	
}
CString CFMInsurancePostedReceiptVoucherList::GetQueryString3_detail(bool str1, bool str2, bool str3, bool str4, bool str5)
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

	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
		szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
		szFeeType += _T(", ");
		szFeeType += _T("'IV'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'V'");
		szFeeType += _T(", ");
		szFeeType += _T("'VI'");
	}
	if (m_bEDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'VII'");
		szFeeType += _T(", ");
		szFeeType += _T("'VIII'");
	}

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bServicePackage) szWhere.AppendFormat(_T(" AND thu_goidv > 0"));
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}

	if (str1)
	{
		szWhere.AppendFormat(_T(" AND THU_BHYT_THUONG > 0"));
	}

	else if (str2)
	{
		szWhere.AppendFormat(_T(" AND THU_BHYT_QUAN > 0"));
	}

	else if (str3)
	{
		szWhere.AppendFormat(_T(" AND THU_CHENH_CAPTUONG > 0"));
	}

	else if (str4)
	{
		szWhere.AppendFormat(_T(" AND THU_CHENH_BHYT_QUAN > 0"));
	}

	else 
	{
		szWhere.AppendFormat(_T(" AND NGUONCOVID > 0"));
	}

	if(m_bByMoneyTransfer)
		szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY3X_CK ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);		
	else if (m_bATMCard)
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY4X_ATM ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	else
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY2X_VL1 ") \
		_T(" WHERE cash_id > 0 AND (CONG_THU+TONG_VIEN_PHI)>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	return szSQL;
}
void CFMInsurancePostedReceiptVoucherList::PrintFinancialDocument_Detail(bool bmau1, bool bmau2, bool bmau3, bool bmau4, bool bmau5)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDocType, szWhere;

	if (bmau1)
	{
		szWhere.AppendFormat(_T(" WHERE THU_BHYT_THUONG > 0"));
	}

	else if (bmau2)
	{
		szWhere.AppendFormat(_T(" WHERE THU_BHYT_QUAN > 0"));
	}

	else if (bmau3)
	{
		szWhere.AppendFormat(_T(" WHERE THU_CHENH_CAPTUONG > 0"));
	}

	else if (bmau4)
	{
		szWhere.AppendFormat(_T(" WHERE THU_CHENH_BHYT_QUAN > 0"));
	}

	else 
	{
		szWhere.AppendFormat(_T(" WHERE NGUONCOVID > 0"));
	}

	szSQL.Format(_T(" SELECT posted_date,") \
	_T("        SUM(trich_tam_gui) AS trich_tam_gui,") \
	_T("        SUM(BHTT)                                        AS BHTT,") \
	_T("        SUM(thu_chinh_sach + mien_giamE) as tra_chenh_quan,") \
	_T("        ROUND(SUM(THU_BHYT_THUONG))                             AS THU_BHYT_THUONG,") \
	_T("        ROUND(SUM(THU_BHYT_QUAN))                               AS THU_BHYT_QUAN,") \
	_T("        ROUND(SUM(THU_CHENH_CAPTUONG))                          AS THU_CHENH_CAPTUONG,") \
	_T("        ROUND(SUM(THU_CHENH_BHYT_QUAN))                         AS THU_CHENH_BHYT_QUAN,") \
	_T("		SUM(cong-trich_tam_gui-THU_CHINH_SACH-MIEN_GIAM-nguoncovid) AS vien_phi,") 
	_T("		SUM(tam_gui) AS tam_gui,") \
	_T("		SUM(nguoncovid) AS nguoncovid") \
	_T(" FROM   (%s)") \
	_T(" %s GROUP  BY posted_date ORDER BY to_date(posted_date,'DD-MM-YYYY')"), GetQueryString3(), szWhere);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	tArrItem ari;

	//while (!rs.IsEOF())
	//{
	//	sItem s;
	//	s.szPostedDate = rs.GetValue(_T("posted_date"));
	//	s.nType = 1;
	//	rs.GetValue(_T("trich_tam_gui"), s.nAmount);
	//	ari.Add(s);
	//	//s.nType = 2;
	//	//rs.GetValue(_T("BHTT"), s.nAmount);
	//	//ari.Add(s);
	//	rs.MoveNext();
	//}
	CFMDocumentPrinter* pPrinter = NULL;
	//szDocType = _T("CT_THU_BHYT_1");
	//if (m_bATMCard)
	//{
	//	szDocType = _T("CT_THU_BHYT_ATM_1");	
	//}
	//
	//if (m_bByMoneyTransfer)
	//{
	//	szDocType = _T("CT_THU_BHYT_CK_1");	
	//}
	//	
	//pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);
	//
	//rs.MoveFirst();
	//ari.RemoveAll();

	/*while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("vien_phi"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("tam_gui"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}
	szDocType = _T("CT_THU_BHYT_2");
	if (m_bATMCard)
	{
		szDocType = _T("CT_THU_BHYT_ATM_2");	
	}
	
	if (m_bByMoneyTransfer)
	{
		szDocType = _T("CT_THU_BHYT_CK_2");	
	}
	pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("I"),m_szFromDate, m_szToDate);

	rs.MoveFirst();
	ari.RemoveAll();*/

	/*while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("BHTT"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("tra_chenh_quan"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}*/

	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
			if (bmau1)
			{
				s.nType = 1;
				rs.GetValue(_T("THU_BHYT_THUONG"), s.nAmount);
				ari.Add(s);
			}
			else if (bmau2)
			{
				s.nType = 2;
				rs.GetValue(_T("THU_BHYT_QUAN"), s.nAmount);
				ari.Add(s);
			}
			else if (bmau3)
			{
				s.nType = 3;
				rs.GetValue(_T("THU_CHENH_CAPTUONG"), s.nAmount);
				ari.Add(s);
			}
			else if (bmau4)
			{
			s.nType = 4;
			rs.GetValue(_T("THU_CHENH_BHYT_QUAN"), s.nAmount);
			ari.Add(s);
			}
			else
			{
			s.nType = 5;
			rs.GetValue(_T("nguoncovid"), s.nAmount);
			ari.Add(s);
			}
		rs.MoveNext();
	}

	szDocType = _T("CT_THU_BHYT_3");

	if (m_bATMCard)
	{
		szDocType = _T("CT_THU_BHYT_ATM_3");	
	}
	
	if (m_bByMoneyTransfer)
	{
		szDocType = _T("CT_THU_BHYT_CK_3");	
	}
	pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("I"),m_szFromDate, m_szToDate);
	
	rs.MoveFirst();
	ari.RemoveAll();

	/*while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("vien_phi"), s.nAmount);
		ari.Add(s);		
		rs.MoveNext();
	}
	szDocType = _T("CT_THU_BHYT_4");
	if (m_bATMCard)
	{
		szDocType = _T("CT_THU_BHYT_ATM_4");	
	}
	
	if (m_bByMoneyTransfer)
	{
		szDocType = _T("CT_THU_BHYT_CK_4");	
	}
	pPrinter = new CFMDocumentPrinter(szDocType, &ari, m_bSOD, _T("I"),m_szFromDate, m_szToDate);*/

}

void CFMInsurancePostedReceiptVoucherList::OnPrint3rdver_2024()
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
	double nTotal[27], nGroupTotal1[27];
	for (int i = 0; i < 27; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}	
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1_2024.RPT");
	
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
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("thu_chinh_sach"));
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
	//data_name.Add(_T("nguoncovid"));
	//data_name.Add(_T("thu_khac"));	
	//data_name.Add(_T("phi_ranggia"));
	//data_name.Add(_T("congvp"));
	//data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
	data_name.Add(_T("cong_thu"));
	data_name.Add(_T("cong_thu_all"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos-1]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);	
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	OnPrintSummaryReceipt(nTotal[sum_pos-1]);
	PrintFinancialDocument();
	if ((m_bATMCard) || (m_bByMoneyTransfer))
		{
		OnPrintATM();
		}	
}
CString CFMInsurancePostedReceiptVoucherList::GetQueryString3_2024()
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

	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
		szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
		szFeeType += _T(", ");
		szFeeType += _T("'IV'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'V'");
		szFeeType += _T(", ");
		szFeeType += _T("'VI'");
	}
	if (m_bEDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'VII'");
		szFeeType += _T(", ");
		szFeeType += _T("'VIII'");
	}

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bServicePackage) szWhere.AppendFormat(_T(" AND thu_goidv > 0"));
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}

	if(m_bByMoneyTransfer)
		szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY_CK24 ") \
		_T(" WHERE cash_id > 0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);

	else if (m_bATMCard)
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY_ATM24 ") \
		_T(" WHERE cash_id > 0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);

	else
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY2X_VL5 ") \
		_T(" WHERE cash_id > 0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	return szSQL;
}

void CFMInsurancePostedReceiptVoucherList::OnExportSelect_V1()
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
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHUBH.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_check();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	//AfxMessageBox(szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("tong_vien_phi"), nTemp);
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
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHUBH2.xls"));

}



void CFMInsurancePostedReceiptVoucherList::OnExportSelect_V2()
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
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHUBH_V2.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_check_V2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	//AfxMessageBox(szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("tong_vien_phi"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TONG_VIEN_PHI_CHITIET"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);		
		xls.SetCellText(3, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKETHUBH_V22.xls"));

}
CString CFMInsurancePostedReceiptVoucherList::GetQueryString_check_V2()
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

	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
		szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
		szFeeType += _T(", ");
		szFeeType += _T("'IV'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'V'");
		szFeeType += _T(", ");
		szFeeType += _T("'VI'");
	}
	if (m_bEDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'VII'");
		szFeeType += _T(", ");
		szFeeType += _T("'VIII'");
	}

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bServicePackage) szWhere.AppendFormat(_T(" AND thu_goidv > 0"));

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}
	
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY3X_VL2 ") \
		_T(" WHERE cash_id > 0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
		_T(" ORDER BY DOCNO "), szWhere);
	return szSQL;
}