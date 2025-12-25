#include "stdafx.h"
#include "FMInsurancePostedPaymentVoucherList.h"
#include "HMSMainFrame.h"
#include "StringToken.h"
#include "FMFinancialDocumentPrinter.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherList* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherList *pVw = (CFMInsurancePostedPaymentVoucherList *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherList *pVw = (CFMInsurancePostedPaymentVoucherList *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherList *pVw = (CFMInsurancePostedPaymentVoucherList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherList *pVw = (CFMInsurancePostedPaymentVoucherList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnAddFMInsurancePostedPaymentVoucherList();
} 
static int _OnEditFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnEditFMInsurancePostedPaymentVoucherList();
} 
static int _OnDeleteFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnDeleteFMInsurancePostedPaymentVoucherList();
} 
static int _OnSaveFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnSaveFMInsurancePostedPaymentVoucherList();
} 
static int _OnCancelFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnCancelFMInsurancePostedPaymentVoucherList();
}
static void _OnSODSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnSODSelect();
}

static void _OnIncomePackageSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnIncomePackageSelect();
}
static void _OnOutlayPackageSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnOutlayPackageSelect();
}
static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}

static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnABZoneSelect();
}
static void _OnAllInsSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnAllInsSelect();
}

static void _OnTCKTSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedPaymentVoucherList*)pWnd)->OnTCKTSelect();
}

CFMInsurancePostedPaymentVoucherList::CFMInsurancePostedPaymentVoucherList(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsurancePostedPaymentVoucherList::~CFMInsurancePostedPaymentVoucherList()
{
}
void CFMInsurancePostedPaymentVoucherList::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 29, 90, 54);
	m_wndYear.Create(this,95, 29, 215, 54); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 29, 300, 54);
	m_wndReportPeriod.Create(this,305, 29, 425, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 215, 84); 
	m_wndToDate.Create(this,305, 59, 425, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 59, 300, 84);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 89, 90, 114);
	m_wndClerk.Create(this,95, 89, 215, 114); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 119, 90, 144);
	m_wndOrderBy.Create(this,95, 119, 215, 144); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 89, 300, 114);
	m_wndStatus.Create(this,305, 88, 425, 113); 
	m_wndList.Create(this,10, 179, 425, 469); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 10, 148, 90, 173);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 539, 85, 564);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 539, 170, 564);
	m_wndPrint.Create(this, _T("&Print"), 260, 539, 340, 564);
	m_wndExport.Create(this, _T("Export XLS"), 345, 539, 425, 564);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 475, 110, 500);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 475, 221, 500);
	m_wndDeposit.Create(this, _T("Deposit"), 227, 475, 425, 500);
	m_wndSOD.Create(this, _T("SOD"), 95, 148, 215, 173);
	m_wndIncomePackage.Create(this, _T("IncomePackage"), 10, 506, 132, 531);
	m_wndOutlayPackage.Create(this, _T("OutlayPackage"), 138, 506, 252, 531);
	m_wndABZone.Create(this, _T("AB Zone"), 258, 506, 425, 531);
	m_wndAllIns.Create(this, _T("AllIns"), 220, 148, 300, 173);
	m_wndTCKT.Create(this, _T("TCKT"), 305, 148, 425, 173);
}

void CFMInsurancePostedPaymentVoucherList::OnInitializeComponents(){
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
	m_wndList.InsertColumn(5, _T("Ngày duyệt"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(6, _T("Đã duyệt"), CFMT_TEXT, 40);

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

void CFMInsurancePostedPaymentVoucherList::OnSetWindowEvents(){
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
	m_wndList.AddEvent(1, _T("Chọn phiếu chi BH"), _OnListCheckAllInsInvoiceFnc);
	m_wndList.AddEvent(2, _T("Bỏ Chọn phiếu chi BH"), _OnListUnCheckAllInsInvoiceFnc);
	m_wndList.AddEvent(3, _T("Chọn phiếu chi Quân"), _OnListCheckAllSolderFnc);
	m_wndList.AddEvent(4, _T("Bỏ Chọn phiếu chi Quân, lương"), _OnListUnCheckAllSolderFnc);
	m_wndList.AddEvent(5, _T("Chọn phiếu chi BH Quân"), _OnListCheckAllInsSolderFnc);
	m_wndList.AddEvent(6, _T("Bỏ Chọn phiếu chi BH Quân"), _OnListUnCheckAllInsSolderFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndIncomePackage.SetEvent(WE_CLICK, _OnIncomePackageSelectFnc);
	m_wndOutlayPackage.SetEvent(WE_CLICK, _OnOutlayPackageSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndAllIns.SetEvent(WE_CLICK, _OnAllInsSelectFnc);
	m_wndTCKT.SetEvent(WE_CLICK, _OnTCKTSelectFnc);
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

	/*m_mIndex[_T("I")] = _T("\x43hi n\x1ED9i tr\xFA");
	m_mIndex[_T("II")] = _T("\x43hi ngo\x1EA1i tr\xFA ");
	m_mIndex[_T("III")] = _T("\x43hi kh\xE1\x63");*/

	m_mIndex[_T("I")] = _T("Chi nội trú BH khác");
	m_mIndex[_T("II")] = _T("Chi nội trú BH quân");	
	m_mIndex[_T("III")] = _T("Chi ngoại trú BH khác");
	m_mIndex[_T("IV")] = _T("Chi ngoại trú BH quân");
	m_mIndex[_T("V")] = _T("Chi khác BH khác");
	m_mIndex[_T("VI")] = _T("Chi khác BH quân");

	SetMode(VM_EDIT);


}
void CFMInsurancePostedPaymentVoucherList::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndIncomePackage.GetDlgCtrlID(), m_bIncomePackage);
	DDX_Check(pDX, m_wndOutlayPackage.GetDlgCtrlID(), m_bOutlayPackage);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndAllIns.GetDlgCtrlID(), m_bAllIns);
	DDX_Check(pDX, m_wndTCKT.GetDlgCtrlID(), m_bTCKT);

}
void CFMInsurancePostedPaymentVoucherList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsurancePostedPaymentVoucherList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsurancePostedPaymentVoucherList::SetDefaultValues(){

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
	m_bSOD=FALSE;
	m_bIncomePackage=FALSE;
	m_bOutlayPackage=FALSE;
	m_bABZone=FALSE;
	m_bAllIns=FALSE;
	m_bTCKT=FALSE;
}

int CFMInsurancePostedPaymentVoucherList::SetMode(int nMode){
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

/*void CFMInsurancePostedPaymentVoucherList::OnYearChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherList::OnYearSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherList::OnYearKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherList::OnYearCheckValue(){
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
 
void CFMInsurancePostedPaymentVoucherList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsurancePostedPaymentVoucherList::OnTCKTSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
 
void CFMInsurancePostedPaymentVoucherList::OnReportPeriodSelendok(){
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

/*void CFMInsurancePostedPaymentVoucherList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherList::OnReportPeriodKillfocus(){
	
}*/
void CFMInsurancePostedPaymentVoucherList::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
long CFMInsurancePostedPaymentVoucherList::OnReportPeriodLoadData(){
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

/*void CFMInsurancePostedPaymentVoucherList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsurancePostedPaymentVoucherList::OnFromDateChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherList::OnFromDateSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherList::OnFromDateKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsurancePostedPaymentVoucherList::OnToDateChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherList::OnToDateSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherList::OnToDateKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsurancePostedPaymentVoucherList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherList::OnClerkSelendok(){
	 
}
/*void CFMInsurancePostedPaymentVoucherList::OnClerkSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherList::OnClerkKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherList::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsurancePostedPaymentVoucherList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedPaymentVoucherList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherList::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMInsurancePostedPaymentVoucherList::OnStatusSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherList::OnStatusKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherList::OnStatusLoadData(){
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
/*void CFMInsurancePostedPaymentVoucherList::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedPaymentVoucherList::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherList::OnOrderBySelendok(){
	 
}
/*void CFMInsurancePostedPaymentVoucherList::OnOrderBySetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherList::OnOrderByKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherList::OnOrderByLoadData(){
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
/*void CFMInsurancePostedPaymentVoucherList::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsurancePostedPaymentVoucherList::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMInsurancePostedPaymentVoucherList::OnSODSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
	void CFMInsurancePostedPaymentVoucherList::OnIncomePackageSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMInsurancePostedPaymentVoucherList::OnOutlayPackageSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsurancePostedPaymentVoucherList::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMInsurancePostedPaymentVoucherList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsurancePostedPaymentVoucherList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
void CFMInsurancePostedPaymentVoucherList::OnAllInsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
long CFMInsurancePostedPaymentVoucherList::OnListLoadData(){
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

	//szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'BH'"));
	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC')"));
	else if (m_bABZone)
	{
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB')"));
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB') OR (fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') and FAC_POSTED ='Y' AND fac_invoicetype IN('P') AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F'))"));
		szWhere.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}
	else if (m_bAllIns)
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG','BH-NGAB','BH-NTAB')"));

	else if (m_bTCKT)
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','BH-NGAB','BH-NTAB', 'THE-BH','CK-BH')"));

	else
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG') AND fac_user_id not in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F')"));
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG')"));	

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate,fac_approveddate as ngayduyet, FAC_APPROVED as daduyet ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'P' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	m_wndList.BeginLoad();
	CString szDate;
	while (!rs.IsEOF())
	{/*
		if(m_szStatusKey == _T("01"))
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
			rs.GetValue(_T("ngayduyet")),
			rs.GetValue(_T("daduyet")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMInsurancePostedPaymentVoucherList::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMInsurancePostedPaymentVoucherList::OnUnMarkSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMInsurancePostedPaymentVoucherList::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);	
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("In bảng kê chi BH"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("In bảng kê chi BH Ver 2.0"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("**********"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);


	TranslateString(_T("Phải thu tiền kinh phí KCB BN BHYT"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);

	TranslateString(_T("Phải thu tiền kinh phí KCB BN BHYT Quân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 5, tmpStr);

	TranslateString(_T("Phải thu tiền chênh lệch BN cấp tướng"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 6, tmpStr);

	TranslateString(_T("Phải thu tiền chênh lệch BN BHYT Quân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 7, tmpStr);

	TranslateString(_T("Phải thu ngân sách nhà nước (nguồn covid)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 8, tmpStr);

	TranslateString(_T("**********"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 9, tmpStr);

	TranslateString(_T("In BK chi bảo hiểm (mới từ 1/1/2024)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 15, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint3rdver();
			break;
		case 2:
			OnPrint3rdver_2();
			break;
		case 4:
			OnPrint3rdver_Detail(true, false, false, false, false);
			PrintFinancialDocument_Detail(true, false, false, false, false);
			break;
		case 5:
			OnPrint3rdver_Detail(false, true, false, false, false);
			PrintFinancialDocument_Detail(false, true, false, false, false);
			break;
		case 6:
			OnPrint3rdver_Detail(false, false, true, false, false);
			PrintFinancialDocument_Detail(false, false, true, false, false);
			break;
		case 7:
			OnPrint3rdver_Detail(false, false, false, true, false);
			PrintFinancialDocument_Detail(false, false, false, true, false);
			break;
		case 8:
			OnPrint3rdver_Detail(false, false, false, false, true);
			PrintFinancialDocument_Detail(false, false, false, false, true);
			break;
		case 15:
			OnPrint3rdver_2024();
			break;
	}
}
 
 
int CFMInsurancePostedPaymentVoucherList::OnAddFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsurancePostedPaymentVoucherList::OnEditFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsurancePostedPaymentVoucherList::OnDeleteFMInsurancePostedPaymentVoucherList(){
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
int CFMInsurancePostedPaymentVoucherList::OnSaveFMInsurancePostedPaymentVoucherList(){
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
int CFMInsurancePostedPaymentVoucherList::OnCancelFMInsurancePostedPaymentVoucherList(){
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
int CFMInsurancePostedPaymentVoucherList::OnFMInsurancePostedPaymentVoucherListListLoadData(){
	return 0;
}


void CFMInsurancePostedPaymentVoucherList::OnPrint2ndver()
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
	long double nTotal[12], nGroupTotal1[12];
	for (int i = 0; i < 12; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHI_BHYT.RPT");
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
	data_name.Add(_T("tong_bn_tra"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("cong_"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("chi_khac"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("cong_chi"));


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
	int sum_pos = (int) (data_name.GetCount())-1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
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
				rptGroup->SetValue(_T("GroupName"), szNewLev1+_T(" .")+tmpStr);
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
	_tprintf(_T("\r\n3: %d"), data_name.GetCount());
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
_tprintf(_T("\r\total"));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("T%d"), i+col_pos);
			rpt.GetReportFooter()->SetValue(szPos, tmpStr);
		}
	}
_tprintf(_T("\r\n5"));
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.GetReportFooter()->SetValue(_T("ClassName"), _T("CFMInsurancePostedPaymentVoucherList"));
	rpt.PrintPreview();
}

void CFMInsurancePostedPaymentVoucherList::OnPrint3rdver()
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
	long double nTotal[24], nGroupTotal1[24];
	for (int i = 0; i < 24; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHI_BHYT_1.RPT");
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
	data_name.Add(_T("vien_phi"));
	data_name.Add(_T("thu_maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("nguoncovid"));
	data_name.Add(_T("chi_doituong"));
	data_name.Add(_T("chi_maycnc"));
	data_name.Add(_T("chi_de_muc"));
	data_name.Add(_T("chi_khac"));
	data_name.Add(_T("chi_goidv"));
	data_name.Add(_T("tl_nguoncovid"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tran_bao_viet"));
	data_name.Add(_T("cong_chi"));
	//7.data_name.Add(_T("tong_bn_tra"));
	//9.data_name.Add(_T("cong_"));
	//10.data_name.Add(_T("thu_chinh_sach"));
	//11.data_name.Add(_T("chi_khac"));
	//13.data_name.Add(_T("cong"));
	//14.data_name.Add(_T("cong_chi"));
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
	int sum_pos = (int) (data_name.GetCount())-1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
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
				rptGroup->SetValue(_T("GroupName"), szNewLev1+_T(" .")+tmpStr);
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
				//rptDetail->SetValue(tmpStr, data_name.GetAt(i));
			}
		}
		rs.MoveNext();
	_tprintf(_T("rsx"));
	}
	_tprintf(_T("\r\n3: %d"), data_name.GetCount());
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
_tprintf(_T("\r\total"));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("T%d"), i+col_pos);
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
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	rptFooter=rpt.GetReportFooter();
	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.GetReportFooter()->SetValue(_T("ClassName"), _T("CFMInsurancePostedPaymentVoucherList"));
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	PrintFinancialDocument();
}

void CFMInsurancePostedPaymentVoucherList::OnPrint3rdver_Detail(bool bmau1, bool bmau2, bool bmau3, bool bmau4, bool bmau5)
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
	long double nTotal[24], nGroupTotal1[24];
	for (int i = 0; i < 24; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHI_BHYT_1.RPT");
	if (!rpt.Init(szReportName))
		return;
	//szSQL = GetQueryString3();
	if (bmau1)
	{
		szSQL = GetQueryString3_Detail(true, false, false, false, false);
	}

	else if (bmau2)
	{
		szSQL = GetQueryString3_Detail(false, true, false, false, false);
	}

	else if (bmau3)
	{
		szSQL = GetQueryString3_Detail(false, false, true, false, false);
	}
	else if (bmau4)
	{
		szSQL = GetQueryString3_Detail(false, false, false, true, false);
	}
	else
	{
		szSQL = GetQueryString3_Detail(false, false, false, false, true);
	}

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
	data_name.Add(_T("vien_phi"));
	data_name.Add(_T("thu_maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("nguoncovid"));
	data_name.Add(_T("chi_doituong"));
	data_name.Add(_T("chi_maycnc"));
	data_name.Add(_T("chi_de_muc"));
	data_name.Add(_T("chi_khac"));
	data_name.Add(_T("chi_goidv"));
	data_name.Add(_T("tl_nguoncovid"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tran_bao_viet"));
	data_name.Add(_T("cong_chi"));
	//7.data_name.Add(_T("tong_bn_tra"));
	//9.data_name.Add(_T("cong_"));
	//10.data_name.Add(_T("thu_chinh_sach"));
	//11.data_name.Add(_T("chi_khac"));
	//13.data_name.Add(_T("cong"));
	//14.data_name.Add(_T("cong_chi"));
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
	int sum_pos = (int) (data_name.GetCount())-1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
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
				rptGroup->SetValue(_T("GroupName"), szNewLev1+_T(" .")+tmpStr);
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
				//rptDetail->SetValue(tmpStr, data_name.GetAt(i));
			}
		}
		rs.MoveNext();
	_tprintf(_T("rsx"));
	}
	_tprintf(_T("\r\n3: %d"), data_name.GetCount());
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
_tprintf(_T("\r\total"));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("T%d"), i+col_pos);
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
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	rptFooter=rpt.GetReportFooter();
	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.GetReportFooter()->SetValue(_T("ClassName"), _T("CFMInsurancePostedPaymentVoucherList"));
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	//PrintFinancialDocument();
}

void CFMInsurancePostedPaymentVoucherList::OnExportSelect()
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

CString CFMInsurancePostedPaymentVoucherList::GetQueryString3()
{
	CString szSQL, szWhere, szWhere1, szWhere2, szFeeType;
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

	/*if (m_bInpatient) szFeeType+=szFeeType.IsEmpty()?_T("'I'"):_T(", 'I'");
	if (m_bOutpatient) szFeeType+=szFeeType.IsEmpty()?_T("'II'"):_T(", 'II'");
	if (m_bDeposit)	szFeeType+=szFeeType.IsEmpty()?_T("'III'"):_T(", 'III'");*/
	
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
		szWhere.Format(_T(" and fac_cash_id in(%s) "), szReceiptStr);
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

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	if (m_bIncomePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOutlayPackage) szWhere.AppendFormat(_T(" HAVING SUM(chi_goidv)>0"));

	szSQL.Format(_T(" SELECT NVL(trim(get_username(fac_user_id)), fac_user_id) AS user_name,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index,") \
	_T("   ROUND(SUM(hfe_deposit + ref_deposit)) AS trich_tam_gui,") \
	_T("   ROUND(SUM(tran_bao_viet)) AS tran_bao_viet,") \
	_T("   ROUND(SUM(hfe_amount)) AS tong_vien_phi,") \
	_T("   ROUND(SUM(hfe_discount)) AS BHTT,") \
	_T("   ROUND(SUM(hfe_patpaid1)) AS cung_chi_tra,") \
	_T("   ROUND(SUM(hfe_patpaid)) AS hfe_patpaid,") \
	_T("   ROUND(SUM(hfe_patpaid1 + hfe_diffcost)) tong_bn_tra,") \
	_T("   ROUND(SUM(hfe_foodamount)) AS tien_an,") \
	_T("   ROUND(SUM(hfe_packageamount)) AS thu_goidv,") \
	_T("   ROUND(SUM(phi_ranggia))       AS phi_ranggia,") \
	_T("   ROUND(SUM(hfe_diffcost)) AS thu_chenh,") \
	_T("   ROUND(SUM(hfe_policyamount)) AS thu_chinh_sach,") \
	_T("   ROUND(SUM(hfe_miengiam)) AS mien_giam,") \

	_T("   ROUND(SUM(hfe_miengiamE)) AS mien_giamE,") \
	_T("   ROUND(SUM(hfe_miengiamI)) AS mien_giamI,") \
	_T("   ROUND(SUM(nguoncovid)) AS nguoncovid,") \

	_T(" CASE") \
	_T("       WHEN hfe_index IN ('I', 'III')") \
	_T("       THEN ROUND(SUM(hfe_discount))") \
	_T("       ELSE 0") \
	_T("     END AS Thu_BHYT_Thuong,") \
	_T("     CASE") \
	_T("       WHEN hfe_index IN ('II', 'IV')") \
	_T("       THEN ROUND(SUM(hfe_discount))") \
	_T("       ELSE 0") \
	_T("     END AS Thu_BHYT_Quan,") \
	_T("     CASE") \
	_T("       WHEN hfe_index IN ('I', 'III')") \
	_T("       THEN ROUND(SUM(hfe_policyamount))") \
	_T("       ELSE 0") \
	_T("     END AS Thu_Chenh_CapTuong,") \
	_T("     CASE") \
	_T("       WHEN hfe_index IN ('II', 'IV')") \
	_T("       THEN ROUND(SUM(hfe_policyamount))") \
	_T("       ELSE 0") \
	_T("     END AS Thu_Chenh_BHYT_Quan,") \

	_T("   ROUND(SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine - hfe_policyamount - hfe_miengiam-hfe_packageamount-phi_ranggia-nguoncovid)) vien_phi,") \
	_T("   ROUND(SUM(hfe_hitechmachine)) thu_maycnc,") \
	_T("   ROUND(SUM(chi_doituong+tl_tienthuoc_vattu)) chi_doituong,") \
	_T("   ROUND(SUM(chi_maycnc)) chi_maycnc,") \
	_T("   ROUND(SUM(chi_de_muc)) chi_de_muc,") \
	_T("   ROUND(SUM(chi_khac)) chi_khac,") \
	_T("   ROUND(SUM(chi_goidv)) chi_goidv,") \

	_T("   ROUND(SUM(tl_nguoncovid+tl_nguoncovid1)) tl_nguoncovid,") \

	_T("   CASE WHEN ROUND(SUM(hfe_patpaid+hfe_otherpayment)) > 0 THEN ROUND(SUM(hfe_patpaid +hfe_otherpayment- (chi_doituong + chi_khac + chi_maycnc + chi_de_muc))) ELSE ROUND(SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc + chi_goidv + tl_nguoncovid+tl_nguoncovid1+tl_tienthuoc_vattu )) END cong,") \
	_T("   CASE WHEN ROUND(SUM(hfe_deposit + tran_bao_viet+ ref_deposit+hfe_otherpayment+hfe_miengiam )) > 0 THEN ROUND(SUM(hfe_deposit + tran_bao_viet + ref_deposit+hfe_otherpayment +hfe_miengiam +chi_goidv+tl_nguoncovid + tl_nguoncovid1 - (hfe_patpaid - (hfe_policyamount+ nguoncovid+chi_doituong+chi_khac + chi_maycnc + chi_de_muc)))) ELSE ROUND(SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc + chi_goidv + tl_nguoncovid+tl_nguoncovid1+tl_tienthuoc_vattu)) END cong_chi,") \
	_T("	to_char(fac_posteddate, 'dd/mm/yyyy') as posted_date ") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("     (SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deposit,") \
	_T("     COALESCE(i.HFE_EXTINS_PAID,0) AS tran_bao_viet,") \
	_T("	 0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_patpaid ELSE 0 END), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("	   (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f  WHERE f.hfe_docno = i.hfe_docno  AND f.hfe_invoiceno= i.hfe_invoiceno  AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')  AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) AS hfe_packageamount,	") \

	_T("  (select coalesce(sum(hfe_patpaid), 0) from hms_fee f left join hms_fee_list on (hfl_feeid = hfe_itemid) ") \
	_T("         where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno AND NVL(f.hfe_category, 'N') NOT IN ('Y')  ") \
	_T("         AND f.hfe_status  IN ('P', 'R') AND hfl_categoryid = 127)") \
	_T("         AS phi_ranggia,  ") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_diffcost,") \
	//_T("       CASE WHEN i.hfe_class = 'I' AND hfe_otherpaid>0 THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV')) ELSE 0 END ") \//
	_T("       CASE WHEN i.hfe_class in ('I','E') AND hfe_otherpaid>0 THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP','BBV')) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("     0 AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam,") \

	_T(" CASE WHEN i.hfe_class = 'E' AND i.hfe_freeamount>0 THEN i.hfe_freeamount ELSE 0 END as hfe_miengiamE,") \
    _T(" CASE WHEN i.hfe_class = 'I' AND i.hfe_freeamount>0 THEN i.hfe_freeamount ELSE 0 END as hfe_miengiamI,") \


	_T("	   i.hfe_patpaid,") \
	_T("	   (SELECT COALESCE(SUM(hfe_amount), 0) FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_type = 'O' AND hfe_status IN ('P', 'R')) ") \
	_T("	   hfe_otherreceipt,") \
	_T("	   (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f, hms_fee_list l WHERE f.hfe_itemid=l.hfl_feeid AND f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND hfl_hitechmachine = 'Y' AND f.hfe_status IN ('P', 'R') AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'COV', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx ))") \
	_T("	   hfe_hitechmachine,") \
	_T("	   0 chi_doituong,") \
	_T("	   0 chi_maycnc,") \
	_T("	   0 chi_de_muc,") \
	_T("	   0 chi_khac,") \
	_T("	   0 chi_goidv, ") \
	_T("	   0 tl_tienthuoc_vattu, ") \

	_T(" (SELECT CASE WHEN COALESCE(SUM(f.hfe_otherpaid), 0)>0 THEN  COALESCE(SUM(f.hfe_otherpaid), 0) else COALESCE(SUM(f.hfe_patpaid), 0) END") \
	_T("     FROM hms_fee f") \
	_T("     WHERE f.hfe_docno   = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno = i.hfe_invoiceno   ") \
	_T("     AND f.hfe_category   = 'COV' AND i.hfe_otherpaid >0 ") \
	_T("     ) AS nguoncovid, ") \
	
	_T("	0 AS tl_nguoncovid,") \
	_T("	0 AS tl_nguoncovid1") \

	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	//_T("   AND i.hfe_payment  = 0") \//
	_T("AND (i.hfe_payment  = 0 OR (i.hfe_payment  > 0 AND i.HFE_EXTINS_PAID>0))")\
	//_T("   AND i.hfe_refund   > 0") \//
	_T("AND (i.hfe_refund   > 0 OR (i.hfe_refund  = 0 AND i.HFE_EXTINS_PAID>0))")\
	_T("   AND i.hfe_amount > 0") \
	_T("   AND r.hfe_type     ='F' AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) = 0") \
	_T("   AND i.HFE_OBJECTID<>1") \
	_T("   UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("     0          AS hfe_patpaid1,") \
	_T("     0          AS hfe_foodamount,") \
	_T("       0        AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("     0          AS hfe_diffcost,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam,") \

	_T("     0          AS hfe_miengiamE,") \
	_T("     0          AS hfe_miengiamI,") \

	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   0 chi_doituong,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND l.hfl_hitechmachine = 'Y') ") \
	_T("		chi_maycnc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND i.hfe_type = 'E') ") \
	_T("		chi_de_muc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND i.hfe_type <> 'E') ") \
	_T("		chi_khac,") \
	_T("	   0 chi_goidv,") \
	_T("	   0 tl_tienthuoc_vattu, ") \
	_T("	   0          AS nguoncovid, ") \
	_T("	   0 AS tl_nguoncovid, ") \
	_T("	0 AS tl_nguoncovid1") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0 AND hfe_type <> 'V'") \
	_T("   AND (hfe_type        <> 'F'") \
	_T("   OR (hfe_type          ='F'") \
	_T("   AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	_T("   AND i.HFE_OBJECTID<>1") \
	//-------------------------------------------------------------------------------------------------------------------------------
	_T("  UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0 AS hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     0 AS ref_deposit,") \
	_T("     0                                    AS hfe_amount,") \
	_T("     0                                    AS hfe_inspaid,") \
	_T("     0                                    AS hfe_discount,") \
	_T("     0                                    AS hfe_patpaid1,") \
	_T("     0                                    AS hfe_foodamount,") \
	_T("       0								  AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("     0                                    AS hfe_diffcost,") \
	_T("     0                                    AS hfe_policyamount,") \
	_T("     0                                    AS hfe_othamount,") \
	_T("     0                                    AS hfe_miengiam,") \
	_T("     0                                    AS hfe_miengiamE,") \
	_T("     0                                    AS hfe_miengiamI,") \
	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     0 chi_doituong,") \
	_T("     0 chi_maycnc,") \
	_T("     0 chi_de_muc,") \
	//_T("     0 chi_khac,") \//
	//------//Ngày 22/08/2019 Bổ sung nghiệp vụ trả lại đơn thuốc ra về ở các khoa ung thư A6//
	_T("      (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("       FROM hms_fee_refundline r,") \
	_T("         m_product_item l") \
	_T("       WHERE r.hfe_itemid            = l.mpi_product_item_id") \
	_T("       AND r.hfe_invoiceno           = i.hfe_invoiceno") \
	_T("       AND r.hfe_docno               = i.hfe_docno") \
	_T("       AND SUBSTR(r.hfe_group, 1, 1) = 'A'") \
	_T("       AND l.mpi_org_id             IN ('PM','MA')") \
	_T("       AND i.hfe_type                = 'F'") \
	_T("       AND i.hfe_class              ='E'") \
	_T("       )chi_khac,") \
	_T("	   0 chi_goidv,") \
	_T("	   0 tl_tienthuoc_vattu, ") \
	
	_T("	   0 AS nguoncovid,") \
	_T("	   0 AS tl_nguoncovid,") \
	_T("	   0 AS tl_nguoncovid1") \

	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0") \
	_T("     AND hfe_type         <> 'V'") \
	_T("     AND (hfe_type        =  'F' )") \
	_T("     AND i.hfe_class              ='E'") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//------------------------------------------------------------------------------------------------------------------
	_T("   UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("	 0 ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("     0          AS hfe_patpaid1,") \
	_T("     0          AS hfe_foodamount,") \
	_T("     0          AS hfe_packageamount,") \
	_T("	 0                                    AS phi_ranggia,") \
	_T("     0          AS hfe_diffcost,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     0 AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam,") \
	_T("     0          AS hfe_miengiamE,") \
	_T("     0          AS hfe_miengiamI,") \
	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('10', '12', '13', '14')) ") \
	_T("		chi_doituong,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('11')) ") \
	_T("		chi_maycnc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('15')) ") \
	_T("		chi_de_muc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('16','17')) ") \
	_T("		chi_khac,") \
	_T("	   (SELECT COALESCE(SUM(r.hfe_cost), 0) FROM hms_fee_refundline r  WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('18','19','20')) chi_goidv, ") \
	_T("	   0 tl_tienthuoc_vattu, ") \
	_T("	   0 AS nguoncovid, ") \

	_T(" (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r") \
	_T("     WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno       = i.hfe_docno") \
	_T("     AND r.hfe_itemid     IN ('22')") \
	_T("     ) tl_nguoncovid,") \
	_T("	   0 AS tl_nguoncovid1") \

	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0 AND hfe_type = 'V'") \
	_T("   AND i.HFE_OBJECTID<>1") \
	_T("   UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     0 hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("	 0 ref_deposit,") \
	_T("     0 hfe_amount,") \
	_T("     0 hfe_inspaid,") \
	_T("     0 hfe_discount,") \
	_T("		0 hfe_patpaid1,") \
	_T("		0 hfe_foodamount,") \
	_T("       0  AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("		0 hfe_diffcost,") \
	_T("		0 hfe_policyamount,") \
	_T("     0 hfe_otherpayment,") \
	_T("     0 hfe_miengiam,") \
	_T("     0 hfe_miengiamE,") \
	_T("     0 hfe_miengiamI,") \
	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl LEFT JOIN hms_fee_list l ON (rl.hfe_itemid = l.hfl_feeid) WHERE rl.hfe_invoiceno = r.hfe_invoiceno  AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND NVL(substr(l.hfl_feeid, 1, 2), 'N') <> 'FF' AND rl.hfe_itemid  NOT IN (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE')  AND NVL(rl.HFE_XNCOVID, 'X')<>'Y') chi_doituong,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND l.hfl_hitechmachine = 'Y') chi_maycnc,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND substr(l.hfl_feeid, 1, 2) = 'FF') chi_de_muc,") \
	_T("	   0 chi_khac,") \
	//_T("	   0 chi_goidv, ") \//
	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee_refundline rl") \
	_T("     WHERE rl.hfe_invoiceno        = r.hfe_invoiceno") \
	_T("     AND rl.hfe_itemid in (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE')  ") \
	_T("     )chi_goidv,") \

	_T("	   0 tl_tienthuoc_vattu, ") \
	_T(" 0          AS nguoncovid, ") \

	_T(" 0 AS tl_nguoncovid, ") \
	
	_T("  (SELECT COALESCE(SUM(l.hfe_patpaid), 0)") \
	_T(" 	     FROM hms_fee_refundline l") \
	_T(" 	     WHERE l.hfe_invoiceno = r.hfe_invoiceno") \
	_T(" 	     AND l.hfe_docno       = r.hfe_docno") \
	_T(" 	     AND NVL(HFE_XNCOVID, 'X')='Y'") \
	_T(" 	     )tl_nguoncovid1") \
		

	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	//_T("   AND i.hfe_payment  = 0") \//
	//_T("   AND i.hfe_refund   > 0") \//
	_T("   AND i.hfe_amount > 0") \
	_T("   AND r.hfe_type     ='F' AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) > 0") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//	
	_T("   UNION ALL") \
	_T(" SELECT") \
	_T("     CASE") \
	_T("       WHEN r.hfe_class  ='I'") \
	_T("       AND r.HFE_OBJECTID=11") \
	_T("       THEN 'II'") \
	_T("       WHEN r.hfe_class   ='I'") \
	_T("       AND r.HFE_OBJECTID<>11") \
	_T("       THEN 'I'") \
	_T("       WHEN r.hfe_class  ='E'") \
	_T("       AND r.HFE_OBJECTID=11") \
	_T("       THEN 'IV'") \
	_T("       WHEN r.hfe_class   ='E'") \
	_T("       AND r.HFE_OBJECTID<>11") \
	_T("       THEN 'III'") \
	_T("     END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     r.hfe_docno,") \
	_T("     0 hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     0 ref_deposit,") \
	_T("     0 hfe_amount,") \
	_T("     0 hfe_inspaid,") \
	_T("     0 hfe_discount,") \
	_T("     0 hfe_patpaid1,") \
	_T("     0 hfe_foodamount,") \
	_T("     0 AS hfe_packageamount,") \
	_T("     0 AS phi_ranggia,") \
	_T("     0 hfe_diffcost,") \
	_T("     0 hfe_policyamount,") \
	_T("     0 hfe_otherpayment,") \
	_T("     0 hfe_miengiam,") \
	_T("     0 hfe_miengiamE,") \
	_T("     0 hfe_miengiamI,") \
	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     0 chi_doituong,") \
	_T("     0 chi_maycnc,") \
	_T("     0 chi_de_muc,") \
	_T("     0 chi_khac,") \
	_T("     0 chi_goidv,") \
	_T("      CASE") \
	_T("       WHEN r.hfe_class <> 'I'") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee_refundline f") \
	_T("         LEFT JOIN m_product_item") \
	_T("         ON(mpi_product_item_id        =CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno             = r.hfe_docno") \
	_T("         AND f.hfe_invoiceno           = r.hfe_invoiceno") \
	_T("         AND f.hfe_type               IN('F')") \
	_T("         AND SUBSTR(f.hfe_group, 1, 1) = 'A'        ") \
	_T("         AND mpi_org_id                in ('PM','MA')") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tl_tienthuoc_vattu, ") \
	
	_T(" 0          AS nguoncovid,") \
	_T(" 0 AS tl_nguoncovid,") \
	_T(" 0 AS tl_nguoncovid1") \

	_T("     FROM hms_fee_refund r") \
	_T("     WHERE r.hfe_status   = 'P'") \
	_T("     AND hfe_amount     > 0") \
	_T("     AND r.hfe_type       = 'F' AND r.hfe_class='E' AND r.hfe_isreq='Y'") \
	_T("     AND r.HFE_OBJECTID<>1 ") \
	//
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY fac_user_id,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index, to_char(fac_posteddate, 'dd/mm/yyyy')") \
	_T(" ORDER BY hfe_index %s "), szWhere, szOrderBy);
	return szSQL;
}


CString CFMInsurancePostedPaymentVoucherList::GetQueryString3_Detail(bool str1, bool str2, bool str3, bool str4, bool str5)
{
	CString szSQL, szWhere, szWhere1, szWhere2, szFeeType, szWhereEx;
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
		szWhere.Format(_T(" and fac_cash_id in(%s) "), szReceiptStr);
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

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	if (m_bIncomePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOutlayPackage) szWhere.AppendFormat(_T(" HAVING SUM(chi_goidv)>0"));
	
	if (str1)
	{
		szWhereEx.AppendFormat(_T(" AND THU_BHYT_THUONG > 0"));
	}

	else if (str2)
	{
		szWhereEx.AppendFormat(_T(" AND THU_BHYT_QUAN > 0"));
	}

	else if (str3)
	{
		szWhereEx.AppendFormat(_T(" AND THU_CHENH_CAPTUONG > 0"));
	}

	else if (str4)
	{
		szWhereEx.AppendFormat(_T(" AND THU_CHENH_BHYT_QUAN > 0"));
	}

	else 
	{
		szWhereEx.AppendFormat(_T(" AND NGUONCOVID > 0"));
	}
	
	szSQL.Format(_T(" SELECT user_name,") \
					_T("   fac_cashbook_id,") \
					_T("   fac_cash_id,") \
					_T("   fac_invoiceno,") \
					_T("   hfe_index,") \
					_T("   posted_date,") \
					_T("   trich_tam_gui,") \
					_T("   tran_bao_viet,") \
					_T("   tong_vien_phi,") \
					_T("   BHTT,") \
					_T("   cung_chi_tra,") \
					_T("   hfe_patpaid,") \
					_T("   tong_bn_tra,") \
					_T("   tien_an,") \
					_T("   thu_goidv,") \
					_T("   phi_ranggia,") \
					_T("   thu_chenh,") \
					_T("   thu_chinh_sach,") \
					_T("   mien_giam,") \
					_T("   mien_giamE,") \
					_T("   mien_giamI,") \
					_T("   nguoncovid,") \
					_T("   Thu_BHYT_Thuong,") \
					_T("   Thu_BHYT_Quan,") \
					_T("   Thu_Chenh_CapTuong,") \
					_T("   Thu_Chenh_BHYT_Quan,") \
					_T("   vien_phi,") \
					_T("   thu_maycnc,") \
					_T("   chi_doituong,") \
					_T("   chi_maycnc,") \
					_T("   chi_de_muc,") \
					_T("   chi_khac,") \
					_T("   chi_goidv,") \
					_T("   tl_nguoncovid,") \
					_T("   cong,") \
					_T("   cong_chi") \
					_T(" FROM (%s)") \
					_T(" WHERE 1=1 %s "), GetQueryString3(), szWhereEx);
	
	return szSQL;
}


CString CFMInsurancePostedPaymentVoucherList::GetQueryString(){
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
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}

	szSQL.Format(_T(" SELECT NVL(trim(get_username(fac_user_id)), fac_user_id) AS user_name,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS trich_tam_gui,") \
	_T("   SUM(hfe_amount) AS tong_vien_phi,") \
	_T("   SUM(hfe_discount) AS BHTT,") \
	_T("   SUM(hfe_patpaid1) AS cung_chi_tra,") \
	_T("   SUM(hfe_patpaid1 + hfe_diffcost) tong_bn_tra,") \
	_T("   SUM(hfe_foodamount) AS tien_an,") \
	_T("   SUM(hfe_diffcost) AS thu_chenh,") \
	_T("   SUM(hfe_policyamount) AS thu_chinh_sach,") \
	_T("   SUM(hfe_otherpayment) AS chi_khac,") \
	_T("   SUM(hfe_miengiam) AS mien_giam,") \
	_T("   SUM( hfe_patpaid1 + hfe_diffcost + hfe_foodamount) AS cong_,") \
	_T("   SUM((hfe_deposit + hfe_miengiam + hfe_policyamount) - (hfe_patpaid1 + hfe_diffcost+hfe_foodamount)+hfe_otherpayment) AS cong_chi_,") \
	_T("   SUM((hfe_deposit) - (hfe_patpaid1 + hfe_diffcost+hfe_foodamount)) AS cong,") \
	_T("   SUM((hfe_deposit) - (hfe_patpaid1 + hfe_diffcost+hfe_foodamount)+hfe_otherpayment + ref_deposit) AS cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_patpaid ELSE 0 END), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_diffcost,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV' )) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("     0 AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	_T("   AND i.hfe_payment  = 0") \
	_T("   AND i.hfe_refund   > 0") \
	_T("   AND i.hfe_amount > 0") \
	_T("   AND r.hfe_type     ='F'") \
	_T("   UNION ALL") \
	_T("   SELECT 'III' AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("     0          AS hfe_patpaid1,") \
	_T("     0          AS hfe_foodamount,") \
	_T("     0          AS hfe_diffcost,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0") \
	_T("   AND (hfe_type        <> 'F'") \
	_T("   OR (hfe_type          ='F'") \
	_T("   AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY fac_user_id,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index") \
	_T(" ORDER BY hfe_index %s "), szWhere, szOrderBy);

	return szSQL;
}

CString CFMInsurancePostedPaymentVoucherList::GetQueryString2(){
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

void CFMInsurancePostedPaymentVoucherList::OnPrintSummaryReceipt(double nTotalAmount)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection* rptDetail = NULL;
	CString tmpStr, tmpStr2, szDate;
	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUCHI30BB_THBH.rpt")))
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
	tmpStr += _T(" - H\x1ED9 \x62\x1EA3o hi\x1EC3m y t\x1EBF (t\x1ED5ng h\x1EE3p \x63hi)");
	rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
	rptDetail->SetValue(_T("Address"), _T("Ph\xF2ng t\xE0i \x63h\xEDnh"));
	rptDetail->SetValue(_T("Reason"), _T("Chi tiền viện phí"));
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

	OnPrintFooterUser(rptDetail);
	rpt.PrintPreview();
}
void CFMInsurancePostedPaymentVoucherList::OnPrintFooterUser(CReportSection* rptFooter){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND fpf_module_id = '%s' "), pMF->GetModuleID());
	//szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), _T("BH"));//
	szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), m_bSOD?_T("TYC"):_T("BH"));
	szSQL.Format(_T("SELECT fpf_position field_name, fpf_title title FROM fm_print_footer WHERE 1=1 %s"), szWhere);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		rptFooter->SetValue(rs.GetValue(_T("field_name")), rs.GetValue(_T("title")));
		rs.MoveNext();
	}
}
int CFMInsurancePostedPaymentVoucherList::OnListCheckAllIns()
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
int CFMInsurancePostedPaymentVoucherList::OnListUnCheckAllIns()
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
int CFMInsurancePostedPaymentVoucherList::OnListCheckAllSolder()
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

int CFMInsurancePostedPaymentVoucherList::OnListUnCheckAllSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if (((_T("QUAN"))==szItemText.Right(4) || (_T("LUONG"))==szItemText.Right(5)) && (_T("BHQUAN"))!= szItemText.Right(6)  )
	{
		m_wndList.SetCheck(i, false);
		nCheck++;
	}	
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMInsurancePostedPaymentVoucherList::OnListCheckAllInsSolder()
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

int CFMInsurancePostedPaymentVoucherList::OnListUnCheckAllInsSolder()
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
void CFMInsurancePostedPaymentVoucherList::OnPrint3rdver_2()
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
	long double nTotal[26], nGroupTotal1[26];
	for (int i = 0; i < 26; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKETHANHTOANCHIBENHNHANBHYT_Ver2.RPT");
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
	data_name.Add(_T("vien_phi"));
	data_name.Add(_T("thu_maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("TIEN_THUOC_DV"));
	data_name.Add(_T("TIEN_THUOC_BH"));
	data_name.Add(_T("TIEN_VATTU_DV"));
	data_name.Add(_T("TIEN_VATTU_BH"));
	data_name.Add(_T("chi_doituong"));
	data_name.Add(_T("chi_maycnc"));
	data_name.Add(_T("chi_de_muc"));
	data_name.Add(_T("chi_khac"));
	data_name.Add(_T("chi_goidv"));
	data_name.Add(_T("cong"));	
	data_name.Add(_T("tran_bao_viet"));	
	data_name.Add(_T("cong_chi"));
	//7.data_name.Add(_T("tong_bn_tra"));
	//9.data_name.Add(_T("cong_"));
	//10.data_name.Add(_T("thu_chinh_sach"));
	//11.data_name.Add(_T("chi_khac"));
	//13.data_name.Add(_T("cong"));
	//14.data_name.Add(_T("cong_chi"));
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

	int col_pos = 5;
	int sum_pos = (int) (data_name.GetCount())-1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
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
				rptGroup->SetValue(_T("GroupName"), szNewLev1+_T(" .")+tmpStr);
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
				//rptDetail->SetValue(tmpStr, data_name.GetAt(i));
			}
		}
		rs.MoveNext();
	_tprintf(_T("rsx"));
	}
	_tprintf(_T("\r\n3: %d"), data_name.GetCount());
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
_tprintf(_T("\r\total"));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("T%d"), i+col_pos);
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
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	rptFooter=rpt.GetReportFooter();
	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.GetReportFooter()->SetValue(_T("ClassName"), _T("CFMInsurancePostedPaymentVoucherList"));
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
}

void CFMInsurancePostedPaymentVoucherList::PrintFinancialDocument()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	double tmp=0;
	szSQL.Format(_T(" SELECT posted_date,") \
	_T("        ROUND(SUM(hfe_patpaid-thu_chinh_sach-mien_giam - tran_bao_viet - nguoncovid)) AS vien_phi,") \
	_T("        ROUND(SUM(BHTT))                                        AS BHTT,") \
	_T("        ROUND(SUM(thu_chinh_sach + mien_giamE))                 AS tra_chenh_quan,") \
	_T("        ROUND(SUM(THU_BHYT_THUONG))                             AS THU_BHYT_THUONG,") \
	_T("        ROUND(SUM(THU_BHYT_QUAN))                               AS THU_BHYT_QUAN,") \
	_T("        ROUND(SUM(THU_CHENH_CAPTUONG))                          AS THU_CHENH_CAPTUONG,") \
	_T("        ROUND(SUM(THU_CHENH_BHYT_QUAN))                         AS THU_CHENH_BHYT_QUAN,") \
	_T("		ROUND(SUM(chi_doituong+chi_maycnc+chi_de_muc+chi_khac+chi_goidv)) AS chi_tra_lai,") 
	_T("		ROUND(SUM(cong_chi-chi_doituong-chi_maycnc-chi_de_muc-chi_khac-chi_goidv-tl_nguoncovid)) AS chi_tra_BHYT, ") \
	_T("        ROUND(SUM(tran_bao_viet))                                        AS tran_bao_viet,") \
	_T("        ROUND(SUM(tran_bao_viet))                                        AS vien_phi_baoviet,") \
	_T("        ROUND(SUM(tl_nguoncovid)) AS tl_nguoncovid,") \
	_T("        ROUND(SUM(nguoncovid)) AS nguoncovid") \
	_T(" FROM   (%s)") \
	_T(" GROUP  BY posted_date ORDER BY to_date(posted_date,'DD-MM-YYYY') "), GetQueryString3());	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	rs.GetValue(_T("tran_bao_viet"), tmp);
	//_msg(_T("%ld"), tmp);
	
	tArrItem ari;
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("chi_tra_BHYT"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("chi_tra_lai"), s.nAmount);
		ari.Add(s);
		s.nType = 3;
		rs.GetValue(_T("tl_nguoncovid"), s.nAmount);
		ari.Add(s);

		rs.MoveNext();
	}
	CFMDocumentPrinter* pPrinter = NULL;
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_1"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);
	
	rs.MoveFirst();
	ari.RemoveAll();
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("vien_phi"), s.nAmount);
		ari.Add(s);
		//s.nType = 2;
		//rs.GetValue(_T("BHTT"), s.nAmount);
		//ari.Add(s);
		rs.MoveNext();
	}
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_2"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);

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
	}
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_3"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);*/
	//Update 14/09/2020

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
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_3"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);
	//Update 26/10/2020, mẫu này dành cho khu yêu cầu
	rs.MoveFirst();
	ari.RemoveAll();	

	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("vien_phi_baoviet"), s.nAmount);
		ari.Add(s);		
		rs.MoveNext();
	}
	if (tmp >0)
	{
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_BAOVIET"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);
	}
}

CString CFMInsurancePostedPaymentVoucherList::GetQueryString3_2()
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
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);
	/*if (m_bInpatient) szFeeType+=szFeeType.IsEmpty()?_T("'I'"):_T(", 'I'");
	if (m_bOutpatient) szFeeType+=szFeeType.IsEmpty()?_T("'II'"):_T(", 'II'");
	if (m_bDeposit)	szFeeType+=szFeeType.IsEmpty()?_T("'III'"):_T(", 'III'");*/
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

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	if (m_bIncomePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOutlayPackage) szWhere.AppendFormat(_T(" HAVING SUM(chi_goidv)>0"));

	szSQL.Format(_T(" SELECT NVL(trim(get_username(fac_user_id)), fac_user_id) AS user_name,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index,") \
	_T("   ROUND(SUM(hfe_deposit + ref_deposit)) AS trich_tam_gui,") \
	_T("   ROUND(SUM(tran_bao_viet)) AS tran_bao_viet,") \
	_T("   ROUND(SUM(hfe_amount)) AS tong_vien_phi,") \
	_T("   ROUND(SUM(hfe_discount)) AS BHTT,") \
	_T("   ROUND(SUM(hfe_patpaid1)) AS cung_chi_tra,") \
	_T("   ROUND(SUM(hfe_patpaid1 + hfe_diffcost)) tong_bn_tra,") \
	_T("   ROUND(SUM(hfe_foodamount)) AS tien_an,") \
	_T("   ROUND(SUM(hfe_packageamount)) AS thu_goidv,") \
	_T("   ROUND(SUM(phi_ranggia))       AS phi_ranggia,") \
	_T("   ROUND(SUM(hfe_diffcost)) AS thu_chenh,") \
	_T("   ROUND(SUM(hfe_policyamount)) AS thu_chinh_sach,") \
	_T("   ROUND(SUM(hfe_miengiam)) AS mien_giam,") \
	_T("   ROUND(SUM(tien_thuoc_dv) )                                                                        AS tien_thuoc_dv,") \
	_T("   ROUND(SUM(tien_thuoc_bh) )                                                                        AS tien_thuoc_bh,") \
	_T("   ROUND(SUM(tien_vattu_dv) )                                                                        AS tien_vattu_dv,") \
	_T("   ROUND(SUM(tien_vattu_bh) )                                                                        AS tien_vattu_bh,") \
	_T("   ROUND(SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine - hfe_policyamount - hfe_miengiam-hfe_packageamount-phi_ranggia-tien_thuoc_dv - tien_thuoc_bh-tien_vattu_dv-tien_vattu_bh)) vien_phi,") \
	_T("   ROUND(SUM(hfe_hitechmachine)) thu_maycnc,") \
	_T("   ROUND(SUM(chi_doituong+tl_tienthuoc_vattu)) chi_doituong,") \
	_T("   ROUND(SUM(chi_maycnc)) chi_maycnc,") \
	_T("   ROUND(SUM(chi_de_muc)) chi_de_muc,") \
	_T("   ROUND(SUM(chi_khac)) chi_khac,") \
	_T("   ROUND(SUM(chi_goidv)) chi_goidv,") \
	_T("   CASE WHEN ROUND(SUM(hfe_patpaid+hfe_otherpayment)) > 0 THEN ROUND(SUM(hfe_patpaid +hfe_otherpayment- (chi_doituong + chi_khac + chi_maycnc + chi_de_muc))) ELSE ROUND(SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc + chi_goidv + tl_tienthuoc_vattu )) END cong,") \
	_T("   CASE WHEN ROUND(SUM(hfe_deposit + tran_bao_viet+ ref_deposit+hfe_otherpayment+hfe_miengiam )) > 0 THEN ROUND(SUM(hfe_deposit + tran_bao_viet + ref_deposit+hfe_otherpayment +hfe_miengiam +chi_goidv - (hfe_patpaid - (hfe_policyamount+ chi_doituong+chi_khac + chi_maycnc + chi_de_muc)))) ELSE ROUND(SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc + chi_goidv + tl_tienthuoc_vattu)) END cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("     (SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deposit,") \
	_T("     COALESCE(i.HFE_EXTINS_PAID,0) AS tran_bao_viet,") \
	_T("	 0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_patpaid ELSE 0 END), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("	   (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f  WHERE f.hfe_docno = i.hfe_docno  AND f.hfe_invoiceno= i.hfe_invoiceno  AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')  AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) AS hfe_packageamount,	") \

	_T("  (select coalesce(sum(hfe_patpaid), 0) from hms_fee f left join hms_fee_list on (hfl_feeid = hfe_itemid) ") \
	_T("         where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno AND NVL(f.hfe_category, 'N') NOT IN ('Y')  ") \
	_T("         AND f.hfe_status  IN ('P', 'R') AND hfl_categoryid = 127)") \
	_T("         AS phi_ranggia,  ") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_diffcost,") \
	_T("       CASE WHEN i.hfe_class = 'I' AND hfe_otherpaid>0 THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV')) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("     0 AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam,") \

	_T(" (SELECT COALESCE( SUM(f.hfe_cost - f.hfe_inspaid), 0 )") \
	_T("         FROM hms_fee f,") \
	_T("           m_product_item,") \
	_T("           m_product,") \
	_T("           m_storagelist,") \
	_T("           hms_pharmaorder_view pv") \
	_T("         WHERE pv.hpo_docno                  = f.hfe_docno") \
	_T("         AND pv.hpo_orderid                  = f.hfe_orderid") \
	_T("         AND f.hfe_docno                     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
	_T("         AND f.hfe_status                   IN ( 'P','R' )") \
	_T("         AND CAST(hfe_itemid AS INTEGER)     = mpi_product_item_id") \
	_T("         AND mpi_product_id                  = mp_product_id") \
	_T("         AND f.hfe_type                     IN ( 'D','M' )") \
	_T("         AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y','BQP', 'COV','BBV' )") \
	_T("         AND mp_org_id                       = 'PM'") \
	_T("         AND msl_storage_id                  = pv.hpo_storage_id") \
	_T("         AND msl_category                    = 'S'") \
	_T("         AND f.hfe_discount                  = 0") \
	_T("         ) tien_thuoc_dv,") \
	_T("         (SELECT COALESCE( SUM(f.hfe_cost - f.hfe_inspaid), 0 )") \
	_T("         FROM hms_fee f,") \
	_T("           m_product_item,") \
	_T("           m_product,") \
	_T("           m_storagelist,") \
	_T("           hms_pharmaorder_view pv") \
	_T("         WHERE pv.hpo_docno                  = f.hfe_docno") \
	_T("         AND pv.hpo_orderid                  = f.hfe_orderid") \
	_T("         AND f.hfe_docno                     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
	_T("         AND f.hfe_status                   IN ( 'P','R' )") \
	_T("         AND CAST(hfe_itemid AS INTEGER)     = mpi_product_item_id") \
	_T("         AND mpi_product_id                  = mp_product_id") \
	_T("         AND f.hfe_type                     IN ( 'D','M' )") \
	_T("         AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y','BQP', 'COV','BBV' )") \
	_T("         AND mp_org_id                       = 'PM'") \
	_T("         AND msl_storage_id                  = pv.hpo_storage_id") \
	_T("         AND msl_category                   <> 'S'") \
	_T("         AND f.hfe_discount                  = 0") \
	_T("         ) tien_thuoc_bh,") \
	_T("         (SELECT COALESCE( SUM(f.hfe_cost - f.hfe_inspaid), 0 )") \
	_T("         FROM hms_fee f,") \
	_T("           m_product_item,") \
	_T("           m_product,") \
	_T("           m_storagelist,") \
	_T("           hms_pharmaorder_view pv") \
	_T("         WHERE pv.hpo_docno                  = f.hfe_docno") \
	_T("         AND pv.hpo_orderid                  = f.hfe_orderid") \
	_T("         AND f.hfe_docno                     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
	_T("         AND f.hfe_status                   IN ( 'P','R' )") \
	_T("         AND CAST(hfe_itemid AS INTEGER)     = mpi_product_item_id") \
	_T("         AND mpi_product_id                  = mp_product_id") \
	_T("         AND f.hfe_type                     IN ( 'D','M' )") \
	_T("         AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y','BQP', 'COV','BBV' )") \
	_T("         AND mp_org_id                       = 'MA'") \
	_T("         AND msl_storage_id                  = pv.hpo_storage_id") \
	_T("         AND msl_category                    = 'S'") \
	_T("         AND f.hfe_discount                  = 0") \
	_T("         ) tien_vattu_dv,") \
	_T("         (SELECT COALESCE( SUM(f.hfe_cost - f.hfe_inspaid), 0 )") \
	_T("         FROM hms_fee f,") \
	_T("           m_product_item,") \
	_T("           m_product,") \
	_T("           m_storagelist,") \
	_T("           hms_pharmaorder_view pv") \
	_T("         WHERE pv.hpo_docno                  = f.hfe_docno") \
	_T("         AND pv.hpo_orderid                  = f.hfe_orderid") \
	_T("         AND f.hfe_docno                     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
	_T("         AND f.hfe_status                   IN ( 'P','R' )") \
	_T("         AND CAST(hfe_itemid AS INTEGER)     = mpi_product_item_id") \
	_T("         AND mpi_product_id                  = mp_product_id") \
	_T("         AND f.hfe_type                     IN ( 'D','M' )") \
	_T("         AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y','BQP', 'COV','BBV' )") \
	_T("         AND mp_org_id                       = 'MA'") \
	_T("         AND msl_storage_id                  = pv.hpo_storage_id") \
	_T("         AND msl_category                   <> 'S'") \
	_T("         AND f.hfe_discount                  = 0") \
	_T("         ) tien_vattu_bh,") \

	_T("	   i.hfe_patpaid,") \
	_T("	   (SELECT COALESCE(SUM(hfe_amount), 0) FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_type = 'O' AND hfe_status IN ('P', 'R')) ") \
	_T("	   hfe_otherreceipt,") \
	_T("	   (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f, hms_fee_list l WHERE f.hfe_itemid=l.hfl_feeid AND f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND hfl_hitechmachine = 'Y' AND f.hfe_status IN ('P', 'R') AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'COV', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx ))") \
	_T("	   hfe_hitechmachine,") \
	_T("	   0 chi_doituong,") \
	_T("	   0 chi_maycnc,") \
	_T("	   0 chi_de_muc,") \
	_T("	   0 chi_khac,") \
	_T("	   0 chi_goidv, ") \
	_T("	   0 tl_tienthuoc_vattu") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	//_T("   AND i.hfe_payment  = 0") \//
	_T("AND (i.hfe_payment  = 0 OR (i.hfe_payment  > 0 AND i.HFE_EXTINS_PAID>0))")\
	//_T("   AND i.hfe_refund   > 0") \//
	_T("AND (i.hfe_refund   > 0 OR (i.hfe_refund  = 0 AND i.HFE_EXTINS_PAID>0))")\
	_T("   AND i.hfe_amount > 0") \
	_T("   AND r.hfe_type     ='F' AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) = 0") \
	_T("   AND i.HFE_OBJECTID<>1") \
	_T("   UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("     0          AS hfe_patpaid1,") \
	_T("     0          AS hfe_foodamount,") \
	_T("       0        AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("     0          AS hfe_diffcost,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam,") \

	_T("     0 tien_thuoc_dv,") \
	_T("     0 tien_thuoc_bh,") \
	_T("     0 tien_vattu_dv,") \
	_T("     0 tien_vattu_bh,") \

	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   0 chi_doituong,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND l.hfl_hitechmachine = 'Y') ") \
	_T("		chi_maycnc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND i.hfe_type = 'E') ") \
	_T("		chi_de_muc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND i.hfe_type <> 'E') ") \
	_T("		chi_khac,") \
	_T("	   0 chi_goidv,") \
	_T("	   0 tl_tienthuoc_vattu") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0 AND hfe_type <> 'V'") \
	_T("   AND (hfe_type        <> 'F'") \
	_T("   OR (hfe_type          ='F'") \
	_T("   AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	_T("   AND i.HFE_OBJECTID<>1") \
	//-------------------------------------------------------------------------------------------------------------------------------
	_T("  UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0 AS hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     0 AS ref_deposit,") \
	_T("     0                                    AS hfe_amount,") \
	_T("     0                                    AS hfe_inspaid,") \
	_T("     0                                    AS hfe_discount,") \
	_T("     0                                    AS hfe_patpaid1,") \
	_T("     0                                    AS hfe_foodamount,") \
	_T("       0								  AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("     0                                    AS hfe_diffcost,") \
	_T("     0                                    AS hfe_policyamount,") \
	_T("     0                                    AS hfe_othamount,") \
	_T("     0                                    AS hfe_miengiam,") \

	_T("     0 tien_thuoc_dv,") \
	_T("     0 tien_thuoc_bh,") \
	_T("     0 tien_vattu_dv,") \
	_T("     0 tien_vattu_bh,") \

	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     0 chi_doituong,") \
	_T("     0 chi_maycnc,") \
	_T("     0 chi_de_muc,") \
	//_T("     0 chi_khac,") \//
	//------//Ngày 22/08/2019 Bổ sung nghiệp vụ trả lại đơn thuốc ra về ở các khoa ung thư A6//
	_T("      (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("       FROM hms_fee_refundline r,") \
	_T("         m_product_item l") \
	_T("       WHERE r.hfe_itemid            = l.mpi_product_item_id") \
	_T("       AND r.hfe_invoiceno           = i.hfe_invoiceno") \
	_T("       AND r.hfe_docno               = i.hfe_docno") \
	_T("       AND SUBSTR(r.hfe_group, 1, 1) = 'A'") \
	_T("       AND l.mpi_org_id             IN ('PM','MA')") \
	_T("       AND i.hfe_type                = 'F'") \
	_T("       AND i.hfe_class              ='E'") \
	_T("       )chi_khac,") \
	_T("	   0 chi_goidv,") \
	_T("	   0 tl_tienthuoc_vattu") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0") \
	_T("     AND hfe_type         <> 'V'") \
	_T("     AND (hfe_type        =  'F' )") \
	_T("     AND i.hfe_class              ='E'") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//------------------------------------------------------------------------------------------------------------------
	_T("   UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("	 0 ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("     0          AS hfe_patpaid1,") \
	_T("     0          AS hfe_foodamount,") \
	_T("     0          AS hfe_packageamount,") \
	_T("	 0                                    AS phi_ranggia,") \
	_T("     0          AS hfe_diffcost,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     0 AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam,") \
	
	_T("     0 tien_thuoc_dv,") \
	_T("     0 tien_thuoc_bh,") \
	_T("     0 tien_vattu_dv,") \
	_T("     0 tien_vattu_bh,") \

	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('10', '12', '13', '14')) ") \
	_T("		chi_doituong,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('11')) ") \
	_T("		chi_maycnc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('15')) ") \
	_T("		chi_de_muc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('16','17')) ") \
	_T("		chi_khac,") \
	_T("	   (SELECT COALESCE(SUM(r.hfe_cost), 0) FROM hms_fee_refundline r  WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('18','19','20')) chi_goidv, ") \
	_T("	   0 tl_tienthuoc_vattu") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0 AND hfe_type = 'V'") \
	_T("   AND i.HFE_OBJECTID<>1") \
	_T("   UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     0 hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("	 0 ref_deposit,") \
	_T("     0 hfe_amount,") \
	_T("     0 hfe_inspaid,") \
	_T("     0 hfe_discount,") \
	_T("		0 hfe_patpaid1,") \
	_T("		0 hfe_foodamount,") \
	_T("       0  AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("		0 hfe_diffcost,") \
	_T("		0 hfe_policyamount,") \
	_T("     0 hfe_otherpayment,") \
	_T("     0 hfe_miengiam,") \
	
	_T("     0 tien_thuoc_dv,") \
	_T("     0 tien_thuoc_bh,") \
	_T("     0 tien_vattu_dv,") \
	_T("     0 tien_vattu_bh,") \

	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl LEFT JOIN hms_fee_list l ON (rl.hfe_itemid = l.hfl_feeid) WHERE rl.hfe_invoiceno = r.hfe_invoiceno  AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND NVL(substr(l.hfl_feeid, 1, 2), 'N') <> 'FF' AND rl.hfe_itemid  NOT IN (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE')) chi_doituong,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND l.hfl_hitechmachine = 'Y') chi_maycnc,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND substr(l.hfl_feeid, 1, 2) = 'FF') chi_de_muc,") \
	_T("	   0 chi_khac,") \


	//_T("	   0 chi_goidv, ") \//
	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee_refundline rl") \
	_T("     WHERE rl.hfe_invoiceno        = r.hfe_invoiceno") \
	_T("     AND rl.hfe_itemid in (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE')  ") \
	_T("     )chi_goidv,") \



	_T("	   0 tl_tienthuoc_vattu") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	//_T("   AND i.hfe_payment  = 0") \//
	//_T("   AND i.hfe_refund   > 0") \//
	_T("   AND i.hfe_amount > 0") \
	_T("   AND r.hfe_type     ='F' AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) > 0") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//	
	_T("   UNION ALL") \
	_T(" SELECT") \
	_T("     CASE") \
	_T("       WHEN r.hfe_class  ='I'") \
	_T("       AND r.HFE_OBJECTID=11") \
	_T("       THEN 'II'") \
	_T("       WHEN r.hfe_class   ='I'") \
	_T("       AND r.HFE_OBJECTID<>11") \
	_T("       THEN 'I'") \
	_T("       WHEN r.hfe_class  ='E'") \
	_T("       AND r.HFE_OBJECTID=11") \
	_T("       THEN 'IV'") \
	_T("       WHEN r.hfe_class   ='E'") \
	_T("       AND r.HFE_OBJECTID<>11") \
	_T("       THEN 'III'") \
	_T("     END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     r.hfe_docno,") \
	_T("     0 hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     0 ref_deposit,") \
	_T("     0 hfe_amount,") \
	_T("     0 hfe_inspaid,") \
	_T("     0 hfe_discount,") \
	_T("     0 hfe_patpaid1,") \
	_T("     0 hfe_foodamount,") \
	_T("     0 AS hfe_packageamount,") \
	_T("     0 AS phi_ranggia,") \
	_T("     0 hfe_diffcost,") \
	_T("     0 hfe_policyamount,") \
	_T("     0 hfe_otherpayment,") \
	_T("     0 hfe_miengiam,") \
	_T("     0 tien_thuoc_dv,") \
	_T("     0 tien_thuoc_bh,") \
	_T("     0 tien_vattu_dv,") \
	_T("     0 tien_vattu_bh,") \
	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     0 chi_doituong,") \
	_T("     0 chi_maycnc,") \
	_T("     0 chi_de_muc,") \
	_T("     0 chi_khac,") \
	_T("     0 chi_goidv,") \
	_T("      CASE") \
	_T("       WHEN r.hfe_class <> 'I'") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee_refundline f") \
	_T("         LEFT JOIN m_product_item") \
	_T("         ON(mpi_product_item_id        =CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno             = r.hfe_docno") \
	_T("         AND f.hfe_invoiceno           = r.hfe_invoiceno") \
	_T("         AND f.hfe_type               IN('F')") \
	_T("         AND SUBSTR(f.hfe_group, 1, 1) = 'A'        ") \
	_T("         AND mpi_org_id                in ('PM','MA')") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tl_tienthuoc_vattu") \
	_T("     FROM hms_fee_refund r") \
	_T("     WHERE r.hfe_status   = 'P'") \
	_T("     AND hfe_amount     > 0") \
	_T("     AND r.hfe_type       = 'F' AND r.hfe_class='E' AND r.hfe_isreq='Y'") \
	_T("     AND r.HFE_OBJECTID<>1 ") \
	//
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY fac_user_id,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index") \
	_T(" ORDER BY hfe_index %s "), szWhere, szOrderBy);
	return szSQL;
}

CString CFMInsurancePostedPaymentVoucherList::GetQueryString_check()
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

	
	//Update 20/04/2017
	//Truong hop chi tra lai o ngoai tru, trong hms_fee_invoice khong thoa man dieu kien i.hfe_payment  = 0 AND i.hfe_amount > 0 AND i.hfe_refund > 0
	szSQL.Format(_T(" SELECT ") \
	_T(" doc_no, patient_name,") \
	_T(" SUM(total_amount) total_amount") \
	_T(" FROM") \
	_T(" (") \
	_T("   SELECT hfe_index,") \
	_T("   hfe_docno AS doc_no,") \
	_T("   hfe_deptid AS dept_id,") \
	_T("   hfe_dischargedate AS discharge_date,") \
	_T("   hfe_date AS invoice_date,") \
	_T("   get_patientname(hfe_docno) AS patient_name,") \
	_T("   firstname, midname, surname,") \
	_T("   hfe_objectid AS object_id,") \
	_T("   hfe_cash_id AS cash_id,") \
	_T("   hfe_staff AS staff,") \
	_T("   hfe_lockeddate AS lockeddate,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS deposit,") \
	_T("   SUM(hfe_amount) AS total_amount,") \
	_T("   SUM(hfe_discount) AS bhtt,") \
	_T("   SUM(hfe_foodamount) AS fee_food,") \
	_T("   SUM(hfe_policyamount) AS other_paid,") \
	_T("   SUM(hfe_otherpayment) AS other_payment,") \
	_T("   SUM(hfe_miengiam) AS fa,") \
	_T("   SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine - hfe_policyamount - hfe_miengiam) vien_phi,") \
	_T("   SUM(hfe_hitechmachine) thu_maycnc,") \
	_T("   SUM(chi_doituong) chi_doituong,") \
	_T("   SUM(chi_maycnc) chi_maycnc,") \
	_T("   SUM(chi_de_muc) chi_de_muc,") \
	_T("   SUM(chi_khac) chi_khac,") \
	_T("   CASE WHEN SUM(hfe_patpaid+hfe_otherpayment) > 0 THEN SUM(hfe_patpaid +hfe_otherpayment- (chi_doituong + chi_khac + chi_maycnc + chi_de_muc)) ELSE SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc) END cong,") \
	_T("   CASE WHEN SUM(hfe_deposit + ref_deposit+hfe_otherpayment+hfe_miengiam) > 0 THEN SUM(hfe_deposit + ref_deposit+hfe_otherpayment +hfe_miengiam - (hfe_patpaid - (hfe_policyamount+ 0 + chi_maycnc + chi_de_muc))) ELSE SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc) END cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT CASE WHEN hfe_class='I' THEN hcr_dischargedate ELSE hd_enddate END AS hfe_dischargedate,") \
	_T("	 hp_firstname firstname, hp_midname midname, hp_surname surname,") \
	_T("     invoicetbl.*, hd_cardno cardno") \
	_T("   FROM") \
	_T("     (SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("       r.hfe_cash_id,") \
	_T("       i.hfe_docno,") \
	_T("       i.hfe_date,") \
	_T("       i.hfe_lockeddate,") \
	_T("       i.hfe_staff,") \
	_T("       i.hfe_objectid,") \
	_T("       i.hfe_deptid,") \
	_T("       i.hfe_class,") \
	_T("       i.hfe_deposit,") \
	_T("	   0 ref_deposit,") \
	_T("       i.hfe_amount,") \
	_T("       i.hfe_inspaid,") \
	_T("       i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV' )) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("       0                AS hfe_otherpayment,") \
	_T("       i.hfe_freeamount AS hfe_miengiam,") \
	_T("	   i.hfe_patpaid,") \
	_T("	   (SELECT COALESCE(SUM(hfe_amount), 0) FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_type = 'O' AND hfe_status IN ('P', 'R')) ") \
	_T("	   hfe_otherreceipt,") \
	_T("	   (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f, hms_fee_list l WHERE f.hfe_itemid=l.hfl_feeid AND f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND hfl_hitechmachine = 'Y' AND f.hfe_status IN ('P', 'R') AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'COV', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx ))") \
	_T("	   hfe_hitechmachine,") \
	_T("	   0 chi_doituong,") \
	_T("	   0 chi_maycnc,") \
	_T("	   0 chi_de_muc,") \
	_T("	   0 chi_khac") \
	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("     WHERE i.hfe_status = 'P' AND i.hfe_payment  = 0 AND i.hfe_amount > 0 AND i.hfe_refund > 0 AND r.hfe_type ='F'") \
	_T("	 AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) = 0 ") \
	_T("     UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("       hfe_cash_id,") \
	_T("       hfe_docno,") \
	_T("       hfe_date,") \
	_T("       hfe_lockeddate,") \
	_T("       hfe_staff,") \
	_T("       hfe_objectid,") \
	_T("       hfe_deptid,") \
	_T("       hfe_class,") \
	_T("       0 AS hfe_deposit,") \
	_T("	   DECODE('F', hfe_type, hfe_amount, 0) AS ref_deposit,") \
	_T("       0          AS hfe_amount,") \
	_T("       0          AS hfe_inspaid,") \
	_T("       0          AS hfe_discount,") \
	_T("       0          AS hfe_foodamount,") \
	_T("       0          AS hfe_policyamount,") \
	_T("       DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("       0          AS hfe_miengiam,") \
	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   0 chi_doituong,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND l.hfl_hitechmachine = 'Y') ") \
	_T("		chi_maycnc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND i.hfe_type = 'E') ") \
	_T("		chi_de_muc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND i.hfe_type <> 'E') ") \
	_T("		chi_khac") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0 AND hfe_type <> 'V'") \
	_T("     AND (hfe_type        <> 'F'") \
	_T("     OR (hfe_type          ='F'") \
	_T("     AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	//---------------------------------------------------------------------------------------------------------------------------------
	_T("        UNION ALL") \
	_T("     SELECT") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class ='I'") \
	_T("         THEN 'I'") \
	_T("         ELSE 'II'") \
	_T("       END AS hfe_index,") \
	_T("       hfe_cash_id,") \
	_T("       hfe_docno,") \
	_T("       hfe_date,") \
	_T("       hfe_lockeddate,") \
	_T("       hfe_staff,") \
	_T("       hfe_objectid,") \
	_T("       hfe_deptid,") \
	_T("       hfe_class,") \
	_T("       0                                    AS hfe_deposit,") \
	_T("       0                                    AS ref_deposit,") \
	_T("       0                                    AS hfe_amount,") \
	_T("       0                                    AS hfe_inspaid,") \
	_T("       0                                    AS hfe_discount,") \
	_T("       0                                    AS hfe_foodamount,") \
	_T("       0                                    AS hfe_policyamount,") \
	_T("       0                                    AS hfe_othamount,") \
	_T("       0                                    AS hfe_miengiam,") \
	_T("       0 hfe_patpaid,") \
	_T("       0 hfe_otherreceipt,") \
	_T("       0 hfe_hitechmachine,") \
	_T("       0 chi_doituong,") \
	_T("      0 chi_maycnc,") \
	_T("      0 chi_de_muc,") \
	_T("      (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("       FROM hms_fee_refundline r,") \
	_T("         m_product_item l") \
	_T("       WHERE r.hfe_itemid            = l.mpi_product_item_id") \
	_T("       AND r.hfe_invoiceno           = i.hfe_invoiceno") \
	_T("       AND r.hfe_docno               = i.hfe_docno") \
	_T("       AND SUBSTR(r.hfe_group, 1, 1) = 'A'") \
	_T("       AND l.mpi_org_id             IN ('PM','MA')") \
	_T("       AND i.hfe_type                = 'F'") \
	_T("       AND i.hfe_class              ='E'") \
	_T("       )chi_khac") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0") \
	_T("     AND hfe_type         <> 'V'") \
	_T("     AND (hfe_type        =  'F' )") \
	_T("     AND i.hfe_class              ='E'") \
	//---------------------------------------------------------------------------------------------------------------------------------
	_T("     UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("       hfe_cash_id,") \
	_T("       hfe_docno,") \
	_T("       hfe_date,") \
	_T("       hfe_lockeddate,") \
	_T("       hfe_staff,") \
	_T("       hfe_objectid,") \
	_T("       hfe_deptid,") \
	_T("       hfe_class,") \
	_T("       0 AS hfe_deposit,") \
	_T("	   0 AS ref_deposit,") \
	_T("       0          AS hfe_amount,") \
	_T("       0          AS hfe_inspaid,") \
	_T("       0          AS hfe_discount,") \
	_T("       0          AS hfe_foodamount,") \
	_T("       0          AS hfe_policyamount,") \
	_T("       0 AS hfe_othamount,") \
	_T("       0          AS hfe_miengiam,") \
	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('10', '12', '13', '14')) ") \
	_T("		chi_doituong,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('11')) ") \
	_T("		chi_maycnc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('15')) ") \
	_T("		chi_de_muc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('16','17')) ") \
	_T("		chi_khac") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0 AND hfe_type = 'V'") \
	_T("  UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("       r.hfe_cash_id,") \
	_T("       i.hfe_docno,") \
	_T("       i.hfe_date,") \
	_T("       i.hfe_lockeddate,") \
	_T("       i.hfe_staff,") \
	_T("       i.hfe_objectid,") \
	_T("       i.hfe_deptid,") \
	_T("       i.hfe_class,") \
	_T("       0 hfe_deposit,") \
	_T("	   0 ref_deposit,") \
	_T("       0 hfe_amount,") \
	_T("       0 hfe_inspaid,") \
	_T("       0 hfe_discount,") \
	_T("		0 hfe_foodamount,") \
	_T("		0 hfe_policyamount,") \
	_T("       0  AS hfe_otherpayment,") \
	_T("       0  AS hfe_miengiam,") \
	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl left join hms_fee_list l ON (rl.hfe_itemid = l.hfl_feeid) WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND NVL(substr(l.hfl_feeid, 1, 2), 'N') <> 'FF') chi_doituong,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND l.hfl_hitechmachine = 'Y') chi_maycnc,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND substr(l.hfl_feeid, 1, 2) = 'FF') chi_de_muc,") \
	_T("	   0 chi_khac") \
	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	//_T("     WHERE i.hfe_status = 'P' AND i.hfe_payment  = 0 AND i.hfe_amount > 0 AND i.hfe_refund > 0 AND r.hfe_type ='F'") \//
	_T("     WHERE i.hfe_status = 'P' AND i.hfe_amount > 0 AND r.hfe_type ='F'") \
	_T("	 AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) > 0 ") \
	_T("     ) invoicetbl") \
	_T("  LEFT JOIN hms_doc ON(hd_docno = hfe_docno)") \
	_T("  LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
	_T("  LEFT JOIN hms_clinical_record ON(hcr_docno                 = hfe_docno)") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0 AND hfe_amount>0") \
	_T(" %s ") \
	_T(" GROUP BY hfe_index, hfe_docno , firstname, midname, surname,") \
	_T("   hfe_deptid ,") \
	_T("   hfe_dischargedate,") \
	_T("   hfe_date,") \
	_T("   hfe_objectid,") \
	_T("   hfe_cash_id,") \
	_T("   hfe_staff,") \
	_T("   hfe_lockeddate") \
	_T("   ORDER BY hfe_docno") \
	_T(" )tmp") \
	_T(" GROUP BY doc_no, patient_name") \
	_T(" ORDER BY doc_no"), szWhere);
	return szSQL;
}
void CFMInsurancePostedPaymentVoucherList::PrintFinancialDocument_Detail(bool bmau1, bool bmau2, bool bmau3, bool bmau4, bool bmau5)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	double tmp=0;
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
	_T("        ROUND(SUM(hfe_patpaid-thu_chinh_sach-mien_giam - tran_bao_viet - nguoncovid)) AS vien_phi,") \
	_T("        ROUND(SUM(BHTT))                                        AS BHTT,") \
	_T("        ROUND(SUM(thu_chinh_sach + mien_giamE))                 AS tra_chenh_quan,") \
	_T("        ROUND(SUM(THU_BHYT_THUONG))                             AS THU_BHYT_THUONG,") \
	_T("        ROUND(SUM(THU_BHYT_QUAN))                               AS THU_BHYT_QUAN,") \
	_T("        ROUND(SUM(THU_CHENH_CAPTUONG))                          AS THU_CHENH_CAPTUONG,") \
	_T("        ROUND(SUM(THU_CHENH_BHYT_QUAN))                         AS THU_CHENH_BHYT_QUAN,") \
	_T("		ROUND(SUM(chi_doituong+chi_maycnc+chi_de_muc+chi_khac+chi_goidv)) AS chi_tra_lai,") 
	_T("		ROUND(SUM(cong_chi-chi_doituong-chi_maycnc-chi_de_muc-chi_khac-chi_goidv-tl_nguoncovid)) AS chi_tra_BHYT, ") \
	_T("        ROUND(SUM(tran_bao_viet))                                        AS tran_bao_viet,") \
	_T("        ROUND(SUM(tran_bao_viet))                                        AS vien_phi_baoviet,") \
	_T("        ROUND(SUM(tl_nguoncovid)) AS tl_nguoncovid,") \
	_T("        ROUND(SUM(nguoncovid)) AS nguoncovid") \
	_T(" FROM   (%s)") \
	_T(" %s GROUP  BY posted_date ORDER BY to_date(posted_date,'DD-MM-YYYY') "), GetQueryString3(), szWhere);	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	rs.GetValue(_T("tran_bao_viet"), tmp);
	//_msg(_T("%ld"), tmp);
	
	tArrItem ari;

	/*while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("chi_tra_BHYT"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("chi_tra_lai"), s.nAmount);
		ari.Add(s);
		s.nType = 3;
		rs.GetValue(_T("tl_nguoncovid"), s.nAmount);
		ari.Add(s);

		rs.MoveNext();
	}*/
	CFMDocumentPrinter* pPrinter = NULL;
	//pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_1"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);
	//
	//rs.MoveFirst();
	//ari.RemoveAll();
	//while (!rs.IsEOF())
	//{
	//	sItem s;
	//	s.szPostedDate = rs.GetValue(_T("posted_date"));
	//	s.nType = 1;
	//	rs.GetValue(_T("vien_phi"), s.nAmount);
	//	ari.Add(s);
	//	//s.nType = 2;
	//	//rs.GetValue(_T("BHTT"), s.nAmount);
	//	//ari.Add(s);
	//	rs.MoveNext();
	//}
	//pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_2"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);

	//rs.MoveFirst();
	//ari.RemoveAll();
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
	}
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_3"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);*/
	//Update 14/09/2020

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
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_3"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);
	//Update 26/10/2020, mẫu này dành cho khu yêu cầu
	rs.MoveFirst();
	ari.RemoveAll();	

	/*while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("posted_date"));
		s.nType = 1;
		rs.GetValue(_T("vien_phi_baoviet"), s.nAmount);
		ari.Add(s);		
		rs.MoveNext();
	}
	if (tmp >0)
	{
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_BHYT_BAOVIET"), &ari, m_bSOD, _T("I"), m_szFromDate, m_szToDate);
	}*/
}
void CFMInsurancePostedPaymentVoucherList::OnPrint3rdver_2024()
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
	long double nTotal[38], nGroupTotal1[38];
	for (int i = 0; i < 38; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHI_BHYT_1_2024.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3_2024();

    AfxMessageBox(_T("Phiên bản 2024!"));

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("thu_chinh_sach_tuong"));
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


	data_name.Add(_T("TL_HFE_PHIKHAM"));
	data_name.Add(_T("TL_HFE_PHIGIUONG"));
	data_name.Add(_T("TL_HFE_PHICLS"));
	data_name.Add(_T("TL_HFE_PHIPTTT"));
	data_name.Add(_T("TL_DRUG_FEE"));
	data_name.Add(_T("TL_MAT_FEE"));
	data_name.Add(_T("TL_DRUG_FEE_B5"));
	data_name.Add(_T("TL_MAT_FEE_B5"));
	data_name.Add(_T("TL_PHI_MAU"));
	data_name.Add(_T("TL_TIEN_AN"));
	data_name.Add(_T("TL_THU_GOIDV"));
	data_name.Add(_T("TL_HFE_PHI_CHONBS"));
	data_name.Add(_T("TL_HFE_PHI_KHAC"));	

	data_name.Add(_T("TL_TAMGUI"));
	data_name.Add(_T("tran_bao_viet"));
	data_name.Add(_T("cong_chi"));
	
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
	int sum_pos = (int) (data_name.GetCount())-1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
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
				rptGroup->SetValue(_T("GroupName"), szNewLev1+_T(" .")+tmpStr);
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
				//rptDetail->SetValue(tmpStr, data_name.GetAt(i));
			}
		}
		rs.MoveNext();
	_tprintf(_T("rsx"));
	}
	_tprintf(_T("\r\n3: %d"), data_name.GetCount());
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
_tprintf(_T("\r\total"));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("T%d"), i+col_pos);
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
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	rptFooter=rpt.GetReportFooter();
	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.GetReportFooter()->SetValue(_T("ClassName"), _T("CFMInsurancePostedPaymentVoucherList"));
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	PrintFinancialDocument();
}
CString CFMInsurancePostedPaymentVoucherList::GetQueryString3_2024()
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
		szWhere.Format(_T(" and fac_cash_id in(%s) "), szReceiptStr);
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

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	if (m_bIncomePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOutlayPackage) szWhere.AppendFormat(_T(" HAVING SUM(chi_goidv)>0"));

		szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSPOSTPAYMENTSUMMARY_VL2_L ") \
		_T(" WHERE fac_cash_id > 0 %s "), szWhere );
	
	return szSQL;
}
void CFMInsurancePostedPaymentVoucherList::OnExportSelect_V1()
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
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKECHIBH.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

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

		rs.GetValue(_T("doc_no"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("total_amount"), nTemp);
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
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKECHIBH2.xls"));
}
void CFMInsurancePostedPaymentVoucherList::OnExportSelect_V2()
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
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_BANGKECHIBH_V2.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

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

		rs.GetValue(_T("hfe_docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("PATNAME"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("TONG_VIEN_PHI"), nTemp);
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
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_BANGKECHIBH_V22.xls"));
}
CString CFMInsurancePostedPaymentVoucherList::GetQueryString_check_V2()
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
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSPOSTPAYMENTSUMMARY_VL3 ") \
		_T(" WHERE cash_id > 0 %s "), szWhere );
	return szSQL;
}