#include "stdafx.h"
#include "FMInsurancePostedPaymentVoucherListRG.h"
#include "HMSMainFrame.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherListRG* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherListRG* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherListRG* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherListRG* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherListRG *pVw = (CFMInsurancePostedPaymentVoucherListRG *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherListRG *pVw = (CFMInsurancePostedPaymentVoucherListRG *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherListRG *pVw = (CFMInsurancePostedPaymentVoucherListRG *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherListRG *pVw = (CFMInsurancePostedPaymentVoucherListRG *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnAddFMInsuranceIncomeList();
} 
static int _OnEditFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnEditFMInsuranceIncomeList();
} 
static int _OnDeleteFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnDeleteFMInsuranceIncomeList();
} 
static int _OnSaveFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnSaveFMInsuranceIncomeList();
} 
static int _OnCancelFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnCancelFMInsuranceIncomeList();
}
static void _OnSODSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnSODSelect();
}
static void _OnIncomePackageSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnIncomePackageSelect();
}
static void _OnOutlayPackageSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnOutlayPackageSelect();
}

static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnABZoneSelect();
}
static void _OnAllInsSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherListRG*)pWnd)->OnAllInsSelect();
}


CFMInsurancePostedPaymentVoucherListRG::CFMInsurancePostedPaymentVoucherListRG(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsurancePostedPaymentVoucherListRG::~CFMInsurancePostedPaymentVoucherListRG()
{
}
void CFMInsurancePostedPaymentVoucherListRG::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 481, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 236, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 242, 30, 325, 55);
	m_wndReportPeriod.Create(this,331, 30, 470, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 236, 85); 
	m_wndToDate.Create(this,331, 60, 470, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 242, 60, 325, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 236, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 236, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 243, 89, 326, 114);
	m_wndStatus.Create(this,331, 90, 470, 115); 
	m_wndList.Create(this,10, 150, 470, 474); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 243, 119, 326, 144);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 305, 540, 385, 565);
	m_wndExport.Create(this, _T("Export XLS"), 390, 540, 470, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 479, 110, 504);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 479, 215, 504);
	m_wndDeposit.Create(this, _T("Deposit"), 220, 479, 320, 504);
	m_wndAll.Create(this, _T("All"), 325, 479, 425, 504);
	m_wndSOD.Create(this, _T("SOD"), 331, 120, 470, 145);
	m_wndIncomePackage.Create(this, _T("IncomePackage"), 10, 510, 110, 535);
	m_wndOutlayPackage.Create(this, _T("OutlayPackage"), 115, 510, 215, 535);
	m_wndABZone.Create(this, _T("ABZone"), 220, 511, 320, 536);
	m_wndAllIns.Create(this, _T("AllIns"), 325, 510, 425, 535);

}
void CFMInsurancePostedPaymentVoucherListRG::OnInitializeComponents(){
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



	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Posted"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 70);
	m_wndList.SetCheckBox(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMInsurancePostedPaymentVoucherListRG::OnSetWindowEvents(){
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
	m_wndList.AddEvent(4, _T("Bỏ Chọn phiếu chi Quân"), _OnListUnCheckAllSolderFnc);
	m_wndList.AddEvent(5, _T("Chọn phiếu chi BH Quân"), _OnListCheckAllInsSolderFnc);
	m_wndList.AddEvent(6, _T("Bỏ Chọn phiếu chi BH Quân"), _OnListUnCheckAllInsSolderFnc);
	
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndIncomePackage.SetEvent(WE_CLICK, _OnIncomePackageSelectFnc);
	m_wndOutlayPackage.SetEvent(WE_CLICK, _OnOutlayPackageSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndAllIns.SetEvent(WE_CLICK, _OnAllInsSelectFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsuranceIncomeListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsuranceIncomeListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsuranceIncomeListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsuranceIncomeListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsuranceIncomeListFnc, 0, 'T', VK_CONTROL);
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
void CFMInsurancePostedPaymentVoucherListRG::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	//DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndDeposit.GetDlgCtrlID(), m_bDeposit);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndIncomePackage.GetDlgCtrlID(), m_bIncomePackage);
	DDX_Check(pDX, m_wndOutlayPackage.GetDlgCtrlID(), m_bOutlayPackage);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndAllIns.GetDlgCtrlID(), m_bAllIns);
}
void CFMInsurancePostedPaymentVoucherListRG::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsurancePostedPaymentVoucherListRG::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsurancePostedPaymentVoucherListRG::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_nPatientType = 3;
	m_bInpatient = FALSE;
	m_bOutpatient = FALSE;
	m_bDeposit = FALSE;
	m_bSOD=FALSE;
	m_bIncomePackage=FALSE;
	m_bOutlayPackage=FALSE;
	m_bABZone=FALSE;
	m_bAllIns=FALSE;
}

int CFMInsurancePostedPaymentVoucherListRG::SetMode(int nMode){
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

/*void CFMInsurancePostedPaymentVoucherListRG::OnYearChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListRG::OnYearSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListRG::OnYearKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherListRG::OnYearCheckValue(){
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
 
void CFMInsurancePostedPaymentVoucherListRG::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsurancePostedPaymentVoucherListRG::OnReportPeriodSelendok(){
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

/*void CFMInsurancePostedPaymentVoucherListRG::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherListRG::OnReportPeriodKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherListRG::OnReportPeriodLoadData(){
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

/*void CFMInsurancePostedPaymentVoucherListRG::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsurancePostedPaymentVoucherListRG::OnFromDateChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListRG::OnFromDateSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListRG::OnFromDateKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherListRG::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsurancePostedPaymentVoucherListRG::OnToDateChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListRG::OnToDateSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListRG::OnToDateKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherListRG::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsurancePostedPaymentVoucherListRG::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherListRG::OnClerkSelendok(){
	 
}
/*void CFMInsurancePostedPaymentVoucherListRG::OnClerkSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherListRG::OnClerkKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherListRG::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsurancePostedPaymentVoucherListRG::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedPaymentVoucherListRG::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherListRG::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMInsurancePostedPaymentVoucherListRG::OnStatusSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherListRG::OnStatusKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherListRG::OnStatusLoadData(){
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
/*void CFMInsurancePostedPaymentVoucherListRG::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedPaymentVoucherListRG::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherListRG::OnOrderBySelendok(){
	 
}
/*void CFMInsurancePostedPaymentVoucherListRG::OnOrderBySetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherListRG::OnOrderByKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherListRG::OnOrderByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
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
/*void CFMInsurancePostedPaymentVoucherListRG::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsurancePostedPaymentVoucherListRG::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMInsurancePostedPaymentVoucherListRG::OnSODSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
	void CFMInsurancePostedPaymentVoucherListRG::OnIncomePackageSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMInsurancePostedPaymentVoucherListRG::OnOutlayPackageSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMInsurancePostedPaymentVoucherListRG::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMInsurancePostedPaymentVoucherListRG::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsurancePostedPaymentVoucherListRG::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
	void CFMInsurancePostedPaymentVoucherListRG::OnABZoneSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
	}
	void CFMInsurancePostedPaymentVoucherListRG::OnAllInsSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	}

long CFMInsurancePostedPaymentVoucherListRG::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
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
	else
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG') AND fac_user_id not in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F')"));
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG')"));	
	
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'P' %s ORDER BY fac_cash_id"), szWhere);
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

void CFMInsurancePostedPaymentVoucherListRG::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
} 
void CFMInsurancePostedPaymentVoucherListRG::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMInsurancePostedPaymentVoucherListRG::OnInpatientSelect(){
	
}
void CFMInsurancePostedPaymentVoucherListRG::OnOutpatientSelect(){
	
}
void CFMInsurancePostedPaymentVoucherListRG::OnDepositSelect(){
	
}
void CFMInsurancePostedPaymentVoucherListRG::OnAllSelect(){
	
}
 
 
int CFMInsurancePostedPaymentVoucherListRG::OnAddFMInsuranceIncomeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsurancePostedPaymentVoucherListRG::OnEditFMInsuranceIncomeList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsurancePostedPaymentVoucherListRG::OnDeleteFMInsuranceIncomeList(){
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
 		OnCancelFMInsuranceIncomeList();
 	}
	return 0;
}
int CFMInsurancePostedPaymentVoucherListRG::OnSaveFMInsuranceIncomeList(){
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
 		//OnFMInsuranceIncomeListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMInsurancePostedPaymentVoucherListRG::OnCancelFMInsuranceIncomeList(){
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
int CFMInsurancePostedPaymentVoucherListRG::OnFMInsuranceIncomeListListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMInsurancePostedPaymentVoucherListRG::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnPrint3rdver();
	return;
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("2nd Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	TranslateString(_T("3rd Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 2:
			OnPrint2ndver();
			break;
		case 3:
			OnPrint3rdver();
			break;
	}
}

void CFMInsurancePostedPaymentVoucherListRG::OnPrint1stver(){
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
	long double nTotal[10];
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

void CFMInsurancePostedPaymentVoucherListRG::OnPrint2ndver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
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
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHI_BHYT_RG.RPT");
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
	data_name.Add(_T("vien_phi"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("chi_khac"));
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
	int col_pos = 3;
	int sum_pos = (int) data_name.GetCount()-1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[sum_pos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptGroup->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				m_mIndex.Lookup(szNewLev1, tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldLev1 = szNewLev1;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), CDate::Convert(rs.GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));
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
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptGroup->SetValue(szPos, tmpStr);
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


	rpt.PrintPreview();
}

void CFMInsurancePostedPaymentVoucherListRG::OnPrint3rdver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, tmpStr2, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	long double nTotal[15], nGroupTotal1[15];
	for (int i = 0; i < 15; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHI_BHYT_RG_1.RPT");
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
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("tong_vien_phi_thu"));	
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("vien_phi"));
	data_name.Add(_T("thu_maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("chi_vienphi"));
	data_name.Add(_T("chi_maycnc"));
	data_name.Add(_T("chi_an"));
	data_name.Add(_T("chi_goidv"));
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
	int col_pos = 3;
	int sum_pos = (int) data_name.GetCount()-1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[sum_pos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptGroup->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				m_mIndex.Lookup(szNewLev1, tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldLev1 = szNewLev1;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), CDate::Convert(rs.GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));
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
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptGroup->SetValue(szPos, tmpStr);
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

	CString szTemp;
	szTemp.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szTemp, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);


	rpt.PrintPreview();
}
 
void CFMInsurancePostedPaymentVoucherListRG::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	UpdateData(TRUE);
	BeginWaitCursor();

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}
	CExcel xls;
	CStringArray arrField;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 18);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 35);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 15);
	xls.SetColumnWidth(8, 15);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 15);
	xls.SetColumnWidth(14, 15);
	xls.SetColumnWidth(15, 15);
	xls.SetColumnWidth(16, 15);
	xls.SetColumnWidth(17, 15);

	int nRow = 0;
	int nCol = 0;

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);


	xls.SetCellText(0, 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 18);
	xls.SetCellMergedColumns(nCol, nRow + 4, 18);

	xls.SetCellText(nCol, nRow + 3, _T("\x42\x1EA2NG K\xCA TH\x41NH TO\xC1N THU \x42\x1EC6NH NH\xC2N \x42\x1ED8 \x110\x1ED8I - \x42H"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	nRow = 5;
	xls.SetCellMergedColumns(9, nRow, 3);
	xls.SetCellMergedColumns(13, nRow, 3);
	xls.SetCellText(0, nRow, _T("STT"), 528386, true);
	xls.SetCellText(1, nRow, _T("H\x1ECD v\xE0 t\xEAn"), 528386, true);
	xls.SetCellText(2, nRow, _T("\x43\x1EA5p \x62\x1EAD\x63"), 528386, true);
	xls.SetCellText(3, nRow, _T("S\x1ED1 HS"), 528386, true);
	xls.SetCellText(4, nRow, _T("S\x1ED1 \x42\x41"), 528386, true);
	xls.SetCellText(5, nRow, _T("\x110\x1ECB\x61 \x63h\x1EC9"), 528386, true);
	xls.SetCellText(6, nRow, _T("Kho\x61"), 528386, true);
	xls.SetCellText(7, nRow, _T("S\x1ED1 ng\xE0y"), 528386, true);
	xls.SetCellText(8, nRow, _T("Tr\xED\x63h TG"), 528386, true);
	xls.SetCellText(9, nRow, _T("Thu ti\x1EC1n \x103n"), 528386, true);
	xls.SetCellText(9, nRow + 1, _T("Ti\x1EC1n \x103n"), 528386, true);
	xls.SetCellText(10, nRow + 1, _T("\x42\xF9 g\x1EA1o"), 528386, true);
	xls.SetCellText(11, nRow + 1, _T("\x43\x1ED9ng"), 528386, true);
	xls.SetCellText(12, nRow, _T("Thu th\xEAm"), 528386, true);
	xls.SetCellText(13, nRow, _T("Thu \x42N \x63\xF9ng \x63hi tr\x1EA3"), 528386, true);
	xls.SetCellText(13, nRow + 1, _T("CS"), 528386, true);
	xls.SetCellText(14, nRow + 1, _T("BHYT"), 528386, true);
	xls.SetCellText(15, nRow + 1, _T("Kh\xE1\x63"), 528386, true);
	xls.SetCellText(16, nRow, _T("T\x1EA1m g\x1EEDi"), 528386, true);
	xls.SetCellText(17, nRow, _T("T\x1ED5ng thu"), 528386, true);
	int nIndex = 1;
	nRow = 7;
	long double nTotal[10];
	double nCost;

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
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("rank"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doc_no"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("record_no"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("treatment_days"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);
		for (int j = 0; j < arrField.GetCount(); j++)
		{
			rs.GetValue(arrField.GetAt(j), nCost);
			nTotal[j] += nCost;
			tmpStr.Format(_T("%.2f"), nCost);
			xls.SetCellText(nCol + j + 8, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	if (nTotal[9] > 0)
	{
		xls.SetCellText(nCol + 4, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER, true, 10);
		for (int i = 0; i < 10; i++)
		{
			tmpStr.Format(_T("%.2f"), nTotal[i]);
			xls.SetCellText(nCol + i + 8, nRow, tmpStr, FMT_NUMBER1);
		}
	}
	xls.Save(_T("Exports\\BANG KE THU BENH NHAN BH.xls"));
}

CString CFMInsurancePostedPaymentVoucherListRG::GetQueryString3(){
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

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	//Filter
	/*if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'I' "));
	}
	if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'II' "));
	}
	if(m_nPatientType == 2)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'III' "));
	}*/
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
	/*if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
	}*/
	if (!szFeeType.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	/*szSQL.Format(_T(" SELECT hfe_index,") \
	_T("   trunc(fac_posteddate) posted_date,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS trich_tam_gui,") \
	_T("   SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine) vien_phi,") \
	_T("   SUM(hfe_foodamount) AS tien_an,") \
	_T("   SUM(hfe_policyamount) AS thu_chinh_sach,") \
	_T("   SUM(hfe_otherpayment) AS chi_khac,") \
	_T("   CASE WHEN SUM(hfe_deposit+ ref_deposit) > 0 THEN SUM((hfe_deposit+ ref_deposit+ hfe_otherpayment + hfe_miengiam + hfe_policyamount) - (hfe_patpaid+chi_vienphi+chi_an+chi_maycnc)) ELSE SUM(chi_vienphi+chi_an+chi_maycnc) END AS cong_chi,") \
	_T("   SUM(hfe_hitechmachine) thu_maycnc,") \
	_T("   SUM(chi_vienphi) chi_vienphi,") \
	_T("   SUM(chi_an) chi_an,") \
	_T("   SUM(chi_maycnc) chi_maycnc") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class ='I'") \
	_T("       THEN 'I'") \
	_T("       ELSE 'II'") \
	_T("     END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("	 i.hfe_patpaid,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) ) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV' )) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("     0                AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam,") \
	_T("	   (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f, hms_fee_list l WHERE f.hfe_itemid=l.hfl_feeid AND f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND hfl_hitechmachine = 'Y' AND f.hfe_status IN ('P', 'R') AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'COV', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx ))") \
	_T("	   hfe_hitechmachine,") \
	_T("	 0 chi_vienphi,") \
	_T("	 0 chi_an,") \
	_T("	 0 chi_maycnc") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	_T("   AND i.hfe_payment  = 0") \
	_T("   AND i.hfe_amount > 0") \
	_T("   AND i.hfe_refund   > 0 and r.hfe_type='F' AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) = 0") \
	_T("   UNION ALL") \
	_T("   SELECT 'III' AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) AS ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("	 0			AS hfe_patpaid,") \
	_T("     0          AS hfe_foodamount,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam,") \
	_T("	 0 hfe_hitechmachine,") \
	_T("	 0 chi_vienphi,") \
	_T("	 (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND SUBSTR(r.hfe_group, 1,2)='FF') ") \
	_T("		chi_an,") \
	_T("	 (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r, hms_fee_list l WHERE r.hfe_itemid = l.hfl_feeid AND r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND l.hfl_hitechmachine = 'Y') ") \
	_T("		chi_maycnc") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status             = 'P'") \
	_T("   AND hfe_amount               > 0 AND hfe_type <> 'V'") \
	_T(" and (hfe_type <> 'F' or (hfe_type='F' and i.hfe_refidx NOT IN(SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0))) ") \
	_T("   UNION ALL") \
	_T("   SELECT 'III' AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) AS ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("	 0			AS hfe_patpaid,") \
	_T("     0          AS hfe_foodamount,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     0 AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam,") \
	_T("	 0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('10','12','13','14','16')) ") \
	_T("	  chi_vienphi,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('15')) ") \
	_T("		chi_an,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('11')) ") \
	_T("		chi_maycnc") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status             = 'P'") \
	_T("   AND hfe_amount               > 0 AND hfe_type = 'V'") \
	_T("	UNION ALL") \
	_T("	SELECT") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class ='I'") \
	_T("       THEN 'I'") \
	_T("       ELSE 'II'") \
	_T("     END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     0 hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     0 hfe_amount,") \
	_T("     0 hfe_inspaid,") \
	_T("     0 hfe_discount,") \
	_T("	 0 hfe_patpaid,") \
	_T("		0 hfe_foodamount,") \
	_T("		0 hfe_policyamount,") \
	_T("     0                AS hfe_otherpayment,") \
	_T("     0 hfe_miengiam,") \
	_T("	 0  hfe_hitechmachine,") \
	_T("	 (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl LEFT JOIN hms_fee_list l ON (rl.hfe_itemid = l.hfl_feeid) WHERE rl.hfe_invoiceno = r.hfe_invoiceno  AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND NVL(substr(l.hfl_feeid, 1, 2), 'N') <> 'FF') chi_vienphi,") \
	_T("	 (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND substr(l.hfl_feeid, 1, 2) = 'FF') chi_an,") \
	_T("	 (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND l.hfl_hitechmachine = 'Y') chi_maycnc") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	_T("   AND i.hfe_payment  = 0") \
	_T("   AND i.hfe_amount > 0") \
	_T("   AND i.hfe_refund   > 0 and r.hfe_type='F' AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) > 0") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY hfe_index, trunc(fac_posteddate)") \
	_T(" ORDER BY hfe_index, trunc(fac_posteddate)"), szWhere);*/
//_fmsg(_T("%s"), szSQL);
//Convert from D.III.4.1
	if (m_bIncomePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOutlayPackage) szWhere.AppendFormat(_T(" HAVING SUM(chi_goidv)>0"));
	szSQL.Format(_T(" SELECT hfe_index,") \
	_T("   TRUNC(fac_posteddate) posted_date,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS trich_tam_gui,") \
	_T("   ROUND(SUM(tran_bao_viet)) AS tran_bao_viet,") \
	_T("   ROUND(SUM(hfe_discount  + hfe_patpaid  + hfe_policyamount)) AS tong_vien_phi_thu,") \
	_T("   ROUND(SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine-hfe_packageamount-phi_ranggia)) vien_phi,") \
	_T("   ROUND(SUM(hfe_foodamount))   AS tien_an,") \
	_T("   ROUND(SUM(hfe_packageamount))      AS thu_goidv,") \
	_T("   ROUND(SUM(phi_ranggia))       AS phi_ranggia,") \
	_T("   ROUND(SUM(hfe_policyamount)) AS thu_chinh_sach,") \
	_T("   ROUND(SUM(chi_khac)) chi_khac,") \
	_T("   ROUND(SUM(nguoncovid))        AS nguoncovid,") \
	_T("   CASE") \
	_T("     WHEN ROUND(SUM(hfe_deposit  + tran_bao_viet + ref_deposit+hfe_otherpayment+hfe_miengiam)) > 0") \
	_T("     THEN ROUND(SUM(hfe_deposit  + tran_bao_viet + ref_deposit+hfe_otherpayment +hfe_miengiam + chi_goidv - (hfe_patpaid - (hfe_policyamount+ nguoncovid + chi_vienphi+chi_khac + chi_maycnc + chi_tienan))))") \
	_T("     ELSE ROUND(SUM(chi_vienphi + chi_khac + chi_maycnc + chi_tienan + chi_goidv +tl_tienthuoc_vattu))") \
	_T("   END cong_chi,") \
	_T("   ROUND(SUM(hfe_hitechmachine)) thu_maycnc,") \
	_T("   ROUND(SUM(chi_vienphi+tl_tienthuoc_vattu)) chi_vienphi, ") \
	_T("   ROUND(SUM(chi_tienan)) chi_tienan,") \
	_T("   ROUND(SUM(chi_goidv)) chi_goidv,") \
	_T("   ROUND(SUM(chi_maycnc)) chi_maycnc,    ") \
	_T("   ROUND(SUM(hfe_amount))                AS tong_vien_phi,") \
	_T("   ROUND(SUM(hfe_discount))              AS BHTT,") \
	_T("   ROUND(SUM(hfe_patpaid1))              AS cung_chi_tra,") \
	_T("   ROUND(SUM(hfe_patpaid1 + hfe_diffcost)) tong_bn_tra,  ") \
	_T("   ROUND(SUM(hfe_diffcost))     AS thu_chenh,") \
	_T("   ROUND(SUM(hfe_miengiam))     AS mien_giam   ") \
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
	_T("     0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class = 'I'") \
	_T("       THEN") \
	_T("         (SELECT") \
	_T("           CASE") \
	_T("             WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (") \
	_T("             ORDER BY ho_scoliosis), 'Y') > 0") \
	_T("             THEN COALESCE(SUM(") \
	_T("               CASE") \
	_T("                 WHEN f.hfe_type = 'V'") \
	_T("                 THEN f.hfe_patpaid") \
	_T("                 ELSE 0") \
	_T("               END), 0)") \
	_T("             ELSE COALESCE(SUM(") \
	_T("               CASE") \
	_T("                 WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L')") \
	_T("                 AND f.hfe_type      <> 'V'") \
	_T("                 THEN 0") \
	_T("                 ELSE f.hfe_inspaid - f.hfe_discount") \
	_T("               END), 0)") \
	_T("           END") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN hms_operation") \
	/*_T("         ON (ho_docno                      = f.hfe_docno") \
	_T("         AND ho_idx                        = hfe_orderid") \
	_T("         AND ho_itemid                     = hfe_itemid)") \
	_T("         WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno               = i.hfe_invoiceno") \*/
	_T("         ON (f.hfe_docno                   = ho_docno") \
	_T("         AND f.hfe_orderid                 = ho_idx") \
	_T("         AND f.hfe_itemid                  = ho_itemid )") \
	_T("         WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("         AND SUBSTR(f.hfe_group, 1,2)     <> 'FF'") \
	_T("         AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("         AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' )") \
	_T("         AND f.hfe_fee_id NOT             IN") \
	_T("           (SELECT hfe_invoiceline_id") \
	_T("           FROM hms_fee_discountline d") \
	_T("           WHERE d.hfe_docno   = f.hfe_docno") \
	_T("           AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("           )") \
	_T("         )") \
	_T("       ELSE hfe_inspaid - hfe_discount") \
	_T("     END hfe_patpaid1,") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class = 'I'") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("         FROM hms_fee f") \
	_T("         WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("         AND f.hfe_type                    = 'F'") \
	_T("         AND SUBSTR(f.hfe_group, 1,2)      ='FF'") \
	_T("         AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("         AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' )") \
	_T("         AND f.hfe_fee_id NOT             IN") \
	_T("           (SELECT hfe_invoiceline_id") \
	_T("           FROM hms_fee_discountline d") \
	_T("           WHERE d.hfe_docno   = f.hfe_docno") \
	_T("           AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("           )") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS hfe_foodamount,") \
	_T("	   (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f  WHERE f.hfe_docno = i.hfe_docno  AND f.hfe_invoiceno= i.hfe_invoiceno  AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')  AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) AS hfe_packageamount,	") \

	_T("  (select coalesce(sum(hfe_patpaid), 0) from hms_fee f left join hms_fee_list on (hfl_feeid = hfe_itemid) ") \
	_T("         where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno AND NVL(f.hfe_category, 'N') NOT IN ('Y')  ") \
	_T("         AND f.hfe_status  IN ('P', 'R') AND hfl_categoryid = 127)") \
	_T("         AS phi_ranggia,  ") \

	_T("     CASE") \
	_T("       WHEN i.hfe_class = 'I'") \
	_T("       THEN") \
	_T("         (SELECT") \
	_T("           CASE") \
	_T("             WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (") \
	_T("             ORDER BY ho_scoliosis), 'Y') > 0") \
	_T("             THEN COALESCE(SUM(") \
	_T("               CASE") \
	_T("                 WHEN f.hfe_type = 'V'") \
	_T("                 THEN f.hfe_diffcost") \
	_T("                 ELSE 0") \
	_T("               END ), 0)") \
	_T("             ELSE COALESCE(SUM(") \
	_T("               CASE") \
	_T("                 WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L')") \
	_T("                 AND f.hfe_type      <> 'V'") \
	_T("                 THEN 0") \
	_T("                 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost)") \
	_T("               END), 0)") \
	_T("           END") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN hms_operation") \
	_T("         ON (ho_docno                      = f.hfe_docno") \
	_T("         AND ho_idx                        = hfe_orderid") \
	_T("         AND ho_itemid                     = hfe_itemid)") \
	_T("         WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("         AND SUBSTR(f.hfe_group, 1,2)     <> 'FF'") \
	_T("         AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("         AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' )") \
	_T("         AND f.hfe_fee_id NOT             IN") \
	_T("           (SELECT hfe_invoiceline_id") \
	_T("           FROM hms_fee_discountline d") \
	_T("           WHERE d.hfe_docno   = f.hfe_docno") \
	_T("           AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("           )") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS hfe_diffcost,") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class IN ('I','E') AND hfe_otherpaid >0") \
	_T("       THEN") \
	_T(" (SELECT CASE") \
	_T("           WHEN COALESCE(SUM(f.hfe_otherpaid), 0)>0") \
	_T("           THEN COALESCE(SUM(f.hfe_otherpaid), 0)") \
	_T("           ELSE COALESCE(SUM(f.hfe_patpaid), 0)") \
	_T("         END") \
	_T("         FROM hms_fee f") \
	_T("         WHERE f.hfe_docno             = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno           = i.hfe_invoiceno") \
	_T("         AND f.hfe_status             IN( 'P', 'R' )") \
	_T("         AND NVL(f.hfe_category, 'N') IN( 'BQP', 'BBV')") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END              AS hfe_policyamount,") \
	_T("     0                AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam,") \
	_T("     i.hfe_patpaid,") \
	_T("     (SELECT COALESCE(SUM(hfe_amount), 0)") \
	_T("     FROM hms_fee_invoice") \
	_T("     WHERE hfe_docno = i.hfe_docno") \
	_T("     AND hfe_type    = 'O'") \
	_T("     AND hfe_status IN ('P', 'R')") \
	_T("     ) hfe_otherreceipt,") \
	_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee f,") \
	_T("       hms_fee_list l") \
	_T("     WHERE f.hfe_itemid                =l.hfl_feeid") \
	_T("     AND f.hfe_docno                   = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("     AND hfl_hitechmachine             = 'Y'") \
	_T("     AND f.hfe_status                 IN ('P', 'R')") \
	_T("     AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'COV', 'BBV')") \
	_T("     AND f.hfe_fee_id NOT             IN") \
	_T("       (SELECT hfe_invoiceline_id") \
	_T("       FROM hms_fee_discountline d") \
	_T("       WHERE d.hfe_docno   = f.hfe_docno") \
	_T("       AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("       )") \
	_T("     ) hfe_hitechmachine,") \
	_T("     0 chi_vienphi,") \
	_T("     0 chi_maycnc,") \
	_T("     0 chi_tienan,") \
	_T("     0 chi_khac,") \
	_T("	   0 chi_goidv, ") \
	_T("	 0 tl_tienthuoc_vattu,") \
	
	_T(" (SELECT") \
	_T("       CASE") \
	_T("         WHEN COALESCE(SUM(f.hfe_otherpaid), 0)>0") \
	_T("         THEN COALESCE(SUM(f.hfe_otherpaid), 0)") \
	_T("         ELSE COALESCE(SUM(f.hfe_patpaid), 0)") \
	_T("       END") \
	_T("     FROM hms_fee f") \
	_T("     WHERE f.hfe_docno   = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno = i.hfe_invoiceno") \
	_T("     AND f.hfe_category  = 'COV'") \
	_T("     AND i.hfe_otherpaid >0") \
	_T("     ) AS nguoncovid") \

	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	_T("   AND i.hfe_payment  = 0") \
	_T("   AND i.hfe_refund   > 0") \
	_T("   AND i.hfe_amount   > 0") \
	_T("   AND r.hfe_type     ='F'") \
	_T("   AND (SELECT COUNT(*)") \
	_T("     FROM hms_fee_refundline") \
	_T("     WHERE hfe_invoiceno = r.hfe_invoiceno) = 0") \
	_T("     AND i.HFE_OBJECTID   <>1") \
	_T("   UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0                                    AS hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     DECODE('F', hfe_type, hfe_amount, 0) ref_deposit,") \
	_T("     0                                    AS hfe_amount,") \
	_T("     0                                    AS hfe_inspaid,") \
	_T("     0                                    AS hfe_discount,") \
	_T("     0                                    AS hfe_patpaid1,") \
	_T("     0                                    AS hfe_foodamount,") \
	_T("     0        AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("     0                                    AS hfe_diffcost,") \
	_T("     0                                    AS hfe_policyamount,") \
	_T("     DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("     0                                    AS hfe_miengiam,") \
	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     0 chi_vienphi,") \
	_T("     (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r,") \
	_T("       hms_fee_list l") \
	_T("     WHERE r.hfe_itemid      = l.hfl_feeid") \
	_T("     AND r.hfe_invoiceno     = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno             = i.hfe_docno") \
	_T("     AND l.hfl_hitechmachine = 'Y'") \
	_T("     ) chi_maycnc,") \
	_T("     (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r,") \
	_T("       hms_fee_list l") \
	_T("     WHERE r.hfe_itemid      = l.hfl_feeid") \
	_T("     AND r.hfe_invoiceno     = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno         = i.hfe_docno") \
	_T("     AND NVL(l.hfl_hitechmachine, 'N') <> 'Y'") \
	_T("     AND i.hfe_type                     = 'E'") \
	_T("     ) chi_tienan,") \
	_T("     (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r,") \
	_T("       hms_fee_list l") \
	_T("     WHERE r.hfe_itemid                 = l.hfl_feeid") \
	_T("     AND r.hfe_invoiceno                = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno                    = i.hfe_docno") \
	_T("     AND NVL(l.hfl_hitechmachine, 'N') <> 'Y'") \
	_T("     AND i.hfe_type                    <> 'E'") \
	_T("     ) chi_khac,") \
	_T("	 0 chi_goidv, ") \
	_T("	 0 tl_tienthuoc_vattu,") \
	_T("	 0 AS nguoncovid") \
	_T(" FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0") \
	_T("   AND hfe_type         <> 'V'") \
	_T("   AND (hfe_type        <> 'F'") \
	_T("   OR (hfe_type          ='F'") \
	_T("   AND i.hfe_refidx NOT IN") \
	_T("     (SELECT hfe_invoiceno") \
	_T("     FROM hms_fee_invoice") \
	_T("     WHERE hfe_docno = i.hfe_docno") \
	_T("     AND hfe_amount  > 0") \
	_T("     AND i.HFE_OBJECTID   <>1") \
	_T("     )))") \
	//-----------------------------------------------------------------------------------
	_T("    UNION ALL") \
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
	_T("     0								      AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("     0                                    AS hfe_diffcost,") \
	_T("     0                                    AS hfe_policyamount,") \
	_T("     0                                    AS hfe_othamount,") \
	_T("     0                                    AS hfe_miengiam,") \
	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     0 chi_vienphi,") \
	_T("     0 chi_maycnc,") \
	_T("    0 chi_tienan,") \
	//_T("    0 chi_khac,") \//
	//------//Ngày 22/08/2019 Bổ sung nghiệp vụ trả lại đơn thuốc ra về ở các khoa ung thư A6//
	_T("     (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
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
	_T("	 0 tl_tienthuoc_vattu, ") \
	_T("	 0 AS nguoncovid") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0") \
	_T("     AND hfe_type         <> 'V'") \
	_T("     AND (hfe_type        =  'F' )") \
	_T("     AND i.hfe_class              ='E'") \
	_T("     AND i.HFE_OBJECTID   <>1") \
	//-----------------------------------------------------------------------------------
	_T("   UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0                                    AS hfe_deposit,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     0 ref_deposit,") \
	_T("     0                                    AS hfe_amount,") \
	_T("     0                                    AS hfe_inspaid,") \
	_T("     0                                    AS hfe_discount,") \
	_T("     0 AS hfe_patpaid1,") \
	_T("     0                                    AS hfe_foodamount,") \
	_T("     0                                    AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("     0 AS hfe_diffcost,") \
	_T("     0                                    AS hfe_policyamount,") \
	_T("     0                                    AS hfe_othamount,") \
	_T("     0                                    AS hfe_miengiam,") \
	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r") \
	_T("     WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno       = i.hfe_docno") \
	_T("     AND r.hfe_itemid     IN ('10','12','13','14','16','17')") \
	_T("     ) chi_vienphi,") \
	_T("     (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r") \
	_T("     WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno       = i.hfe_docno") \
	_T("     AND r.hfe_itemid     IN ('11')") \
	_T("     ) chi_maycnc,") \
	_T("     (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r") \
	_T("     WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno       = i.hfe_docno") \
	_T("     AND r.hfe_itemid     IN ('15')") \
	_T("     ) chi_tienan,") \
	/*_T("     (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r") \
	_T("     WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno       = i.hfe_docno") \
	_T("     AND r.hfe_itemid     IN ('youre welcome')") \
	_T("     ) chi_khac") \*/		
	_T("   0 chi_khac,") \
	_T("   (SELECT COALESCE(SUM(r.hfe_cost), 0) FROM hms_fee_refundline r  WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('18','19','20')) chi_goidv, ") \
	_T("	0 tl_tienthuoc_vattu, ") \
	_T("	0 AS nguoncovid") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status = 'P'") \
	_T("   AND hfe_amount   > 0") \
	_T("   AND hfe_type     = 'V'") \
	_T("   AND i.HFE_OBJECTID   <>1") \
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
	_T("     0 ref_deposit,") \
	_T("     0 hfe_amount,") \
	_T("     0 hfe_inspaid,") \
	_T("     0 hfe_discount,") \
	_T("     0 hfe_patpaid1,") \
	_T("     0 hfe_foodamount,") \
	_T("     0  AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("     0 hfe_diffcost,  ") \
	_T(" 0 hfe_policyamount,") \
	_T("     0 hfe_otherpayment,") \
	_T("     0 hfe_miengiam,") \
	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee_refundline rl") \
	_T("     LEFT JOIN hms_fee_list l") \
	_T("     ON (rl.hfe_itemid                        = l.hfl_feeid)") \
	_T("     WHERE rl.hfe_invoiceno                   = r.hfe_invoiceno") \
	_T("     AND NVL(l.hfl_hitechmachine, 'N')       <> 'Y'") \
	_T("     AND NVL(SUBSTR(l.hfl_feeid, 1, 2), 'N') <> 'FF'") \
	_T("     ) chi_vienphi,") \
	_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee_refundline rl,") \
	_T("       hms_fee_list l") \
	_T("     WHERE rl.hfe_invoiceno        = r.hfe_invoiceno") \
	_T("     AND rl.hfe_itemid             = l.hfl_feeid") \
	_T("     AND l.hfl_hitechmachine = 'Y'") \
	_T("     ) chi_maycnc,") \
	_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee_refundline rl,") \
	_T("       hms_fee_list l") \
	_T("     WHERE rl.hfe_invoiceno  = r.hfe_invoiceno") \
	_T("     AND rl.hfe_itemid       = l.hfl_feeid") \
	_T("     AND SUBSTR(l.hfl_feeid, 1, 2) = 'FF'") \
	_T("     ) chi_tienan,") \
	_T("     0 chi_khac,") \
	_T("	 0 chi_goidv, ") \
	_T("	 0 tl_tienthuoc_vattu, ") \
	_T("	 0 AS nguoncovid") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	//_T("   AND i.hfe_payment  = 0") \//
	_T("   AND i.hfe_amount   > 0") \
	//_T("   AND i.hfe_refund   > 0") \//
	_T("   AND r.hfe_type     ='F'") \
	_T("   AND (SELECT COUNT(*)") \
	_T("     FROM hms_fee_refundline") \
	_T("     WHERE hfe_invoiceno        = r.hfe_invoiceno) > 0") \
	_T("     AND i.HFE_OBJECTID   <>1") \
	//
	_T(" UNION ALL") \
	_T("   SELECT") \
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
	_T("     0 hfe_patpaid,") \
	_T("     0 hfe_otherreceipt,") \
	_T("     0 hfe_hitechmachine,") \
	_T("     0 chi_vienphi,") \
	_T("     0 chi_maycnc,") \
	_T("     0 chi_tienan,") \
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
	_T("	 0 AS nguoncovid") \
	_T("   FROM hms_fee_refund r    ") \
	_T("   WHERE r.hfe_status = 'P'") \
	_T("   AND r.hfe_amount   > 0") \
	_T("   AND r.hfe_type       = 'F' AND r.hfe_class='E' AND r.hfe_isreq='Y'") \
	_T("     AND r.HFE_OBJECTID   <>1") \
	//
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY hfe_index,") \
	_T("   TRUNC(fac_posteddate)") \
	_T(" ORDER BY hfe_index,") \
	_T("   TRUNC(fac_posteddate)"), szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
} 
CString CFMInsurancePostedPaymentVoucherListRG::GetQueryString(){
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

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	//Filter
	/*if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'I' "));
	}
	if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'II' "));
	}
	if(m_nPatientType == 2)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'III' "));
	}*/
	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
	}
	if (!szFeeType.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	szSQL.Format(_T(" SELECT hfe_index,") \
	_T("   trunc(fac_posteddate) posted_date,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS trich_tam_gui,") \
	_T("   SUM(hfe_patpaid1 + hfe_diffcost - hfe_foodamount) vien_phi_,") \
	_T("   SUM(hfe_patpaid1 + hfe_diffcost) vien_phi,") \
	_T("   SUM(hfe_foodamount) AS tien_an,") \
	_T("   SUM(hfe_policyamount) AS thu_chinh_sach,") \
	_T("   SUM(hfe_otherpayment) AS chi_khac,") \
	_T("   SUM((hfe_deposit) - (hfe_patpaid1 + hfe_diffcost + hfe_foodamount) + hfe_otherpayment + ref_deposit) AS cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class ='I'") \
	_T("       THEN 'I'") \
	_T("       ELSE 'II'") \
	_T("     END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_patpaid ELSE 0 END), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) ) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' )) ELSE 0 END ") \
	_T("		AS hfe_diffcost,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV' )) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("     0                AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	_T("   AND i.hfe_payment  = 0") \
	_T("   AND i.hfe_amount > 0") \
	_T("   AND i.hfe_refund   > 0 and r.hfe_type='F' ") \
	_T("   UNION ALL") \
	_T("   SELECT 'III' AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) AS ref_deposit,") \
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
	_T("   WHERE hfe_status             = 'P'") \
	_T("   AND hfe_amount               > 0") \
	_T(" and (hfe_type <> 'F' or (hfe_type='F' and i.hfe_refidx NOT IN(SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0))) ") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY hfe_index, trunc(fac_posteddate)") \
	_T(" ORDER BY hfe_index, trunc(fac_posteddate)"), szWhere);
///_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CFMInsurancePostedPaymentVoucherListRG::GetQueryString2(){
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

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	//Filter
	/*if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'I' "));
	}
	if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'II' "));
	}
	if(m_nPatientType == 2)
	{
		szWhere.AppendFormat(_T(" and hfe_index = 'III' "));
	}*/
	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
	}
	if (m_bOutpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bDeposit)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
	}
	if (!szFeeType.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	szSQL.Format(_T(" SELECT hfe_index,") \
	_T("   trunc(fac_posteddate) posted_date,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS trich_tam_gui,") \
	_T("   SUM(hfe_patpaid1 + hfe_diffcost - hfe_foodamount) vien_phi_,") \
	_T("   SUM(hfe_patpaid1 + hfe_diffcost) vien_phi,") \
	_T("   SUM(hfe_foodamount) AS tien_an,") \
	_T("   SUM(hfe_policyamount) AS thu_chinh_sach,") \
	_T("   SUM(hfe_otherpayment) AS chi_khac,") \
	_T("   SUM((hfe_deposit) - (hfe_patpaid1 + hfe_diffcost + hfe_foodamount) + hfe_otherpayment + ref_deposit) AS cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class ='I'") \
	_T("       THEN 'I'") \
	_T("       ELSE 'II'") \
	_T("     END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_patpaid ELSE 0 END), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) ) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' )) ELSE 0 END ") \
	_T("		AS hfe_diffcost,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV' )) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("	   CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f, hms_fee_list WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_itemid = hfl_feeid AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'COV', 'BBV') AND hfl_hitechmachine = 'Y') ELSE 0 END ") \
	_T("		AS hfe_hitechmachine,") \
	_T("     0                AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	_T("   AND i.hfe_payment  = 0") \
	_T("   AND i.hfe_amount > 0") \
	_T("   AND i.hfe_refund   > 0 and r.hfe_type='F' ") \
	_T("   UNION ALL") \
	_T("   SELECT 'III' AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) AS ref_deposit,") \
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
	_T("   WHERE hfe_status             = 'P'") \
	_T("   AND hfe_amount               > 0") \
	_T(" and (hfe_type <> 'F' or (hfe_type='F' and i.hfe_refidx NOT IN(SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0))) ") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY hfe_index, trunc(fac_posteddate)") \
	_T(" ORDER BY hfe_index, trunc(fac_posteddate)"), szWhere);
///_msg(_T("%s"), szSQL);
	return szSQL;
}
int CFMInsurancePostedPaymentVoucherListRG::OnListCheckAllIns()
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
int CFMInsurancePostedPaymentVoucherListRG::OnListUnCheckAllIns()
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
int CFMInsurancePostedPaymentVoucherListRG::OnListCheckAllSolder()
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

int CFMInsurancePostedPaymentVoucherListRG::OnListUnCheckAllSolder()
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
int CFMInsurancePostedPaymentVoucherListRG::OnListCheckAllInsSolder()
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

int CFMInsurancePostedPaymentVoucherListRG::OnListUnCheckAllInsSolder()
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

