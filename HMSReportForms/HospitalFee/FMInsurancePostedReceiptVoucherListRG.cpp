#include "stdafx.h"
#include "FMInsurancePostedReceiptVoucherListRG.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherListRG* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherListRG* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherListRG* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherListRG* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherListRG *pVw = (CFMInsurancePostedReceiptVoucherListRG *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherListRG *pVw = (CFMInsurancePostedReceiptVoucherListRG *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherListRG *pVw = (CFMInsurancePostedReceiptVoucherListRG *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherListRG *pVw = (CFMInsurancePostedReceiptVoucherListRG *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnAddFMInsuranceIncomeList();
} 
static int _OnEditFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnEditFMInsuranceIncomeList();
} 
static int _OnDeleteFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnDeleteFMInsuranceIncomeList();
} 
static int _OnSaveFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnSaveFMInsuranceIncomeList();
} 
static int _OnCancelFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnCancelFMInsuranceIncomeList();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnSODSelect();
}
static void _OnServicePackageSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnServicePackageSelect();
}
static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}

static void _OnATMCardSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnATMCardSelect();
}
static void _OnByMoneyTransferSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnByMoneyTransferSelect();
}
static void _OnAllInsSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnAllInsSelect();
}
static int _OnListSearchItemFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedReceiptVoucherListRG*)pWnd)->OnListSearchItem();
	 return 0;
} 

CFMInsurancePostedReceiptVoucherListRG::CFMInsurancePostedReceiptVoucherListRG(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsurancePostedReceiptVoucherListRG::~CFMInsurancePostedReceiptVoucherListRG(){
}
void CFMInsurancePostedReceiptVoucherListRG::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 470, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 231, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 241, 30, 321, 55);
	m_wndReportPeriod.Create(this,332, 30, 469, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 231, 85); 
	m_wndToDate.Create(this,332, 60, 469, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 241, 60, 321, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 231, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 231, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 241, 90, 322, 115);
	m_wndStatus.Create(this,332, 90, 468, 115); 
	m_wndList.Create(this,10, 181, 470, 470); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 241, 120, 322, 145);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 476, 110, 501);
	m_wndOutpatient.Create(this, _T("Outpatient"), 116, 476, 216, 501);
	m_wndDeposit.Create(this, _T("Deposit"), 10, 505, 110, 530);
	m_wndEDeposit.Create(this, _T("EDeposit"), 116, 505, 216, 530);
	m_wndSOD.Create(this, _T("SOD"), 332, 120, 468, 145);
	m_wndServicePackage.Create(this, _T("ServicePackage"), 223, 505, 337, 530);
	m_wndATMCard.Create(this, _T("ATMCard"), 10, 152, 90, 177);
	m_wndByMoneyTransfer.Create(this, _T("ByMoneyTransfer"), 94, 152, 230, 177);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 470, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 231, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 241, 30, 321, 55);
	m_wndReportPeriod.Create(this,332, 30, 469, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 231, 85); 
	m_wndToDate.Create(this,332, 60, 469, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 241, 60, 321, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 231, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 231, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 241, 90, 322, 115);
	m_wndStatus.Create(this,332, 90, 468, 115); 
	m_wndList.Create(this,10, 181, 470, 470); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 242, 120, 323, 145);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 476, 110, 501);
	m_wndOutpatient.Create(this, _T("Outpatient"), 116, 476, 216, 501);
	m_wndDeposit.Create(this, _T("Deposit"), 10, 505, 110, 530);
	m_wndEDeposit.Create(this, _T("EDeposit"), 116, 505, 216, 530);
	m_wndSOD.Create(this, _T("SOD"), 332, 120, 468, 145);
	m_wndServicePackage.Create(this, _T("ServicePackage"), 223, 505, 337, 530);
	m_wndATMCard.Create(this, _T("ATMCard"), 10, 152, 90, 177);
	m_wndByMoneyTransfer.Create(this, _T("ByMoneyTransfer"), 95, 151, 231, 176);
	m_wndAllIns.Create(this, _T("AllIns"), 242, 152, 322, 177);

}
void CFMInsurancePostedReceiptVoucherListRG::OnInitializeComponents(){
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

void CFMInsurancePostedReceiptVoucherListRG::OnSetWindowEvents(){
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
	m_wndList.AddEvent(7, _T("Search"), _OnListSearchItemFnc);
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
	m_wndServicePackage.SetEvent(WE_CLICK, _OnServicePackageSelectFnc);
	m_wndATMCard.SetEvent(WE_CLICK, _OnATMCardSelectFnc);
	m_wndByMoneyTransfer.SetEvent(WE_CLICK, _OnByMoneyTransferSelectFnc);
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

	/*m_mIndex[_T("I")] = _T("Thu n\x1ED9i tr\xFA");
	m_mIndex[_T("II")] = _T("Thu ngo\x1EA1i tr\xFA");
	m_mIndex[_T("III")] = _T("Thu t\x1EA1m g\x1EEDi v\xE0o vi\x1EC7n");
	m_mIndex[_T("IV")] = _T("Thu t\x1EA1m g\x1EEDi ngo\x1EA1i tr\xFA");*/

	m_mIndex[_T("I")] = _T("Thu nội trú BH khác");
	m_mIndex[_T("II")] = _T("Thu nội trú BH quân");
	m_mIndex[_T("III")] = _T("Thu ngoại trú BH khác");
	m_mIndex[_T("IV")] = _T("Thu ngoại trú BH quân");
	m_mIndex[_T("V")] = _T("Thu tạm gửi vào viện BH khác");
	m_mIndex[_T("VI")] = _T("Thu tạm gửi vào viện BH quân");
	m_mIndex[_T("VII")] = _T("Thu tạm gửi phòng khám BH khác");
	m_mIndex[_T("VIII")] = _T("Thu tạm gửi phòng khám BH quân");

	SetMode(VM_EDIT);


}
void CFMInsurancePostedReceiptVoucherListRG::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndDeposit.GetDlgCtrlID(), m_bDeposit);
	DDX_Check(pDX, m_wndEDeposit.GetDlgCtrlID(), m_bEDeposit);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndServicePackage.GetDlgCtrlID(), m_bServicePackage);
	DDX_Check(pDX, m_wndATMCard.GetDlgCtrlID(), m_bATMCard);
	DDX_Check(pDX, m_wndByMoneyTransfer.GetDlgCtrlID(), m_bByMoneyTransfer);
	DDX_Check(pDX, m_wndAllIns.GetDlgCtrlID(), m_bAllIns);

}
void CFMInsurancePostedReceiptVoucherListRG::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsurancePostedReceiptVoucherListRG::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CFMInsurancePostedReceiptVoucherListRG::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
} 
void CFMInsurancePostedReceiptVoucherListRG::SetDefaultValues(){

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
	m_bServicePackage=FALSE;
	m_bATMCard=FALSE;
	m_bByMoneyTransfer=FALSE;
	m_bAllIns=FALSE;
}

int CFMInsurancePostedReceiptVoucherListRG::SetMode(int nMode){
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

/*void CFMInsurancePostedReceiptVoucherListRG::OnYearChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListRG::OnYearSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListRG::OnYearKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherListRG::OnYearCheckValue(){
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
 
void CFMInsurancePostedReceiptVoucherListRG::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsurancePostedReceiptVoucherListRG::OnReportPeriodSelendok(){
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

/*void CFMInsurancePostedReceiptVoucherListRG::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherListRG::OnReportPeriodKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherListRG::OnReportPeriodLoadData(){
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
void CFMInsurancePostedReceiptVoucherListRG::OnServicePackageSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

/*void CFMInsurancePostedReceiptVoucherListRG::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsurancePostedReceiptVoucherListRG::OnFromDateChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListRG::OnFromDateSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListRG::OnFromDateKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherListRG::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsurancePostedReceiptVoucherListRG::OnToDateChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListRG::OnToDateSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListRG::OnToDateKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherListRG::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsurancePostedReceiptVoucherListRG::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherListRG::OnClerkSelendok(){
	 
}
/*void CFMInsurancePostedReceiptVoucherListRG::OnClerkSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherListRG::OnClerkKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherListRG::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsurancePostedReceiptVoucherListRG::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedReceiptVoucherListRG::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherListRG::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMInsurancePostedReceiptVoucherListRG::OnStatusSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherListRG::OnStatusKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherListRG::OnStatusLoadData(){
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
/*void CFMInsurancePostedReceiptVoucherListRG::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedReceiptVoucherListRG::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherListRG::OnOrderBySelendok(){
	 
}
/*void CFMInsurancePostedReceiptVoucherListRG::OnOrderBySetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherListRG::OnOrderByKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherListRG::OnOrderByLoadData(){
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
/*void CFMInsurancePostedReceiptVoucherListRG::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsurancePostedReceiptVoucherListRG::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMInsurancePostedReceiptVoucherListRG::OnSODSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CFMInsurancePostedReceiptVoucherListRG::OnAllInsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();
}


void CFMInsurancePostedReceiptVoucherListRG::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMInsurancePostedReceiptVoucherListRG::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsurancePostedReceiptVoucherListRG::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
void CFMInsurancePostedReceiptVoucherListRG::OnATMCardSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
	void CFMInsurancePostedReceiptVoucherListRG::OnByMoneyTransferSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
long CFMInsurancePostedReceiptVoucherListRG::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;	

	if(m_szStatusKey == _T("01"))
	{
		szWhere.AppendFormat(_T(" AND fac_invoicedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere.Format(_T(" and FAC_LOCKED='Y' "));
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
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}

	//szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'BH'"));
	if (m_bSOD)
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC')"));
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC','THE-BH-YC', 'THE-BH-PTTYC')"));

	else if ((m_bATMCard) || (m_bByMoneyTransfer))
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('THE-BH','CK-BH')"));
	else if (m_bAllIns)
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG','BH-NGAB','BH-NTAB')"));
	else
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG') AND fac_user_id not in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F')"));
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG')"));	

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'R' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	m_szWhere = szWhere;
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

void CFMInsurancePostedReceiptVoucherListRG::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMInsurancePostedReceiptVoucherListRG::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMInsurancePostedReceiptVoucherListRG::OnInpatientSelect(){
	
}
void CFMInsurancePostedReceiptVoucherListRG::OnOutpatientSelect(){
	
}
void CFMInsurancePostedReceiptVoucherListRG::OnDepositSelect(){
	
}
void CFMInsurancePostedReceiptVoucherListRG::OnAllSelect(){
	
}
 
 
int CFMInsurancePostedReceiptVoucherListRG::OnAddFMInsuranceIncomeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsurancePostedReceiptVoucherListRG::OnEditFMInsuranceIncomeList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsurancePostedReceiptVoucherListRG::OnDeleteFMInsuranceIncomeList(){
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
int CFMInsurancePostedReceiptVoucherListRG::OnSaveFMInsuranceIncomeList(){
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
int CFMInsurancePostedReceiptVoucherListRG::OnCancelFMInsuranceIncomeList(){
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
int CFMInsurancePostedReceiptVoucherListRG::OnFMInsuranceIncomeListListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMInsurancePostedReceiptVoucherListRG::OnPrintSelect(){
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
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("3rd Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint2ndver();
			break;
		case 2:
			OnPrint3rdver();
			break;
	}
}

void CFMInsurancePostedReceiptVoucherListRG::OnPrint1stver(){
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

void CFMInsurancePostedReceiptVoucherListRG::OnPrint2ndver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
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
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_RG.RPT");
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
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("tam_gui"));
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
 
void CFMInsurancePostedReceiptVoucherListRG::OnPrint3rdver()
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
	double nTotal[21], nGroupTotal1[21];
	for (int i = 0; i < 21; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_RG_1.RPT");
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
	data_name.Add(_T("vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("cong_thu"));
	data_name.Add(_T("cong_thu_all"));

	//data_name.Add(_T("trich_tam_gui"));
	//data_name.Add(_T("vien_phi"));
	//data_name.Add(_T("tien_an"));
	//data_name.Add(_T("thu_khac"));
	//data_name.Add(_T("tam_gui"));
	//data_name.Add(_T("cong_thu"));

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
		rs.GetValue(_T("chindex"), szNewLev1);		
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
			rptDetail->SetValue(_T("2"), CDate::Convert(rs.GetValue(_T("fac_posteddate")), yyyymmdd, ddmmyyyy));
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

	MoneyToString(ToString(nTotal[sum_pos]), tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos-1]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMInsurancePostedReceiptVoucherListRG::OnExportSelect(){
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
	double nTotal[10];
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


 
CString CFMInsurancePostedReceiptVoucherListRG::GetQueryString2(){
	return _T("");
}

CString CFMInsurancePostedReceiptVoucherListRG::GetQueryString3()
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

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	
	//Filter
	//if(m_nPatientType == 0)
	//{
	//	szWhere.AppendFormat(_T(" and chindex = 'I' "));
	//}
	//if(m_nPatientType == 1)
	//{
	//	szWhere.AppendFormat(_T(" and chindex = 'II' "));
	//}
	//if(m_nPatientType == 2)
	//{
	//	szWhere.AppendFormat(_T(" and chindex = 'III' "));
	//}
	if (m_bInpatient)
	{
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
		szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bOutpatient){
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
	if (!szFeeType.IsEmpty())
		szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bServicePackage) szWhere.AppendFormat(_T(" AND thu_goidv > 0"));

	if(m_bByMoneyTransfer)
	szSQL.Format(_T(" SELECT ") \
	_T("   chindex, fac_posteddate,") \
	_T("   SUM(trich_tam_gui)  AS trich_tam_gui,") \
	//_T("   ROUND(SUM(trich_tam_gui+vienphi+cong_thu))    AS tong_vien_phi_thu,") \//
	_T("   ROUND(SUM(trich_tam_gui+BHTT+thu_chinh_sach+mien_giam+cong_thu)) AS tong_vien_phi_thu,") \
	_T("   ROUND(SUM(vienphi))        AS vien_phi,") \
	_T("   ROUND(SUM(BHTT))           AS BHTT,") \
	_T("   ROUND(SUM(tien_an))        AS tien_an,") \
	_T("   ROUND(SUM(thu_chinh_sach)) AS thu_chinh_sach,") \
	_T("   ROUND(SUM(thu_khac))       AS thu_khac,") \
	_T("   ROUND(SUM(thu_goidv))      AS thu_goidv,") \
	_T("   ROUND(SUM(phi_ranggia))    AS phi_ranggia,") \
	_T("   SUM(tam_gui)        AS tam_gui,") \
	_T("   ROUND(SUM(mien_giam))	   AS mien_giam,") \
	_T("   ROUND(SUM(maycnc))	   AS maycnc,") \
	_T("   ROUND(SUM(cong_thu))       AS cong_thu,") \
	_T("   ROUND(SUM(cong_thu_all))       AS cong_thu_all") \
	_T(" FROM HF_INSURANCEINCOMEDATE_VIEW3") \
	_T(" WHERE cash_id > 0 AND cong_thu_all>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
	_T(" GROUP BY ") \
	_T(" chindex, fac_posteddate") \
	_T(" ORDER BY chindex, fac_posteddate"), szWhere);

	else if (m_bATMCard)
	szSQL.Format(_T(" SELECT ") \
	_T("   chindex,fac_posteddate,") \
	_T("   SUM(trich_tam_gui)  AS trich_tam_gui,") \
	_T("   ROUND(SUM(trich_tam_gui+BHTT+thu_chinh_sach+mien_giam+cong_thu)) AS tong_vien_phi_thu,") \
	_T("   ROUND(SUM(vienphi))        AS vien_phi,") \
	_T("   ROUND(SUM(BHTT))           AS BHTT,") \
	_T("   ROUND(SUM(tien_an))        AS tien_an,") \
	_T("   ROUND(SUM(thu_chinh_sach)) AS thu_chinh_sach,") \
	_T("   ROUND(SUM(thu_khac))       AS thu_khac,") \
	_T("   ROUND(SUM(thu_goidv))      AS thu_goidv,") \
	_T("   ROUND(SUM(phi_ranggia))    AS phi_ranggia,") \
	_T("   SUM(tam_gui)        AS tam_gui,") \
	_T("   ROUND(SUM(mien_giam))	   AS mien_giam,") \
	_T("   ROUND(SUM(maycnc))	   AS maycnc,") \
	_T("   ROUND(SUM(cong_thu))       AS cong_thu,") \
	_T("   ROUND(SUM(cong_thu_all))       AS cong_thu_all") \
	_T(" FROM HF_INSURANCEINCOMEDATE_VIEW4") \
	_T(" WHERE cash_id > 0 AND cong_thu_all>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
	_T(" GROUP BY ") \
	_T(" chindex, fac_posteddate") \
	_T(" ORDER BY chindex, fac_posteddate"), szWhere);

	else

	szSQL.Format(_T(" SELECT ") \
	_T("   chindex, fac_posteddate,") \
	_T("   SUM(trich_tam_gui)  AS trich_tam_gui,") \
	_T("   ROUND(SUM(trich_tam_gui+BHTT+thu_chinh_sach+mien_giam+cong_thu)) AS tong_vien_phi_thu,") \
	_T("   ROUND(SUM(vienphi))        AS vien_phi,") \
	_T("   ROUND(SUM(BHTT))           AS BHTT,") \
	_T("   ROUND(SUM(tien_an))        AS tien_an,") \
	_T("   ROUND(SUM(thu_chinh_sach)) AS thu_chinh_sach,") \
	_T("   ROUND(SUM(thu_khac))       AS thu_khac,") \
	_T("   ROUND(SUM(thu_goidv))      AS thu_goidv,") \
	_T("   ROUND(SUM(phi_ranggia))    AS phi_ranggia,") \
	_T("   SUM(tam_gui)        AS tam_gui,") \
	_T("   ROUND(SUM(mien_giam))	   AS mien_giam,") \
	_T("   ROUND(SUM(maycnc))	   AS maycnc,") \
	_T("   ROUND(SUM(cong_thu))       AS cong_thu,") \
	_T("   ROUND(SUM(cong_thu_all))       AS cong_thu_all") \
	_T(" FROM HF_INSURANCEINCOMEDATE_VIEW2") \
	_T(" WHERE cash_id > 0 AND cong_thu_all>0 AND cash_id not in (187030, 187532, 187248, 187404) %s ") \
	_T(" GROUP BY ") \
	_T(" chindex, fac_posteddate") \
	_T(" ORDER BY chindex, fac_posteddate"), szWhere);

	return szSQL;
}

CString CFMInsurancePostedReceiptVoucherListRG::GetQueryString(){
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

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	
	//Filter
	//if(m_nPatientType == 0)
	//{
	//	szWhere.AppendFormat(_T(" and chindex = 'I' "));
	//}
	//if(m_nPatientType == 1)
	//{
	//	szWhere.AppendFormat(_T(" and chindex = 'II' "));
	//}
	//if(m_nPatientType == 2)
	//{
	//	szWhere.AppendFormat(_T(" and chindex = 'III' "));
	//}
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
		szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);

	szSQL.Format(_T(" SELECT ") \
	_T("   posted_date,") \
	_T("   SUM(trich_tam_gui)  AS trich_tam_gui,") \
	_T("   SUM(vienphi)        AS vien_phi,") \
	_T("   SUM(tien_an)        AS tien_an,") \
	_T("   SUM(thu_chinh_sach) AS thu_chinh_sach,") \
	_T("   SUM(thu_khac)       AS thu_khac,") \
	_T("   SUM(tam_gui)        AS tam_gui,") \
	_T("   SUM(cong_thu)       AS cong_thu") \
	_T(" FROM HF_INSURANCEINCOMEDATE_VIEW") \
	_T(" WHERE cash_id > 0 %s ") \
	_T(" GROUP BY ") \
	_T("   posted_date") \
	_T(" ORDER BY posted_date"), szWhere);
	return szSQL;


	szSQL.Format(_T(" SELECT   hfe_index, ") \
				_T("			   trunc(fac_posteddate) posted_date,") \
				_T("           SUM(hfe_deposit) trich_tam_gui, ") \
				_T("		   SUM(hfe_patpaid1 + hfe_diffcost - hfe_foodamount) vien_phi,") \
				_T("           SUM(hfe_foodamount) tien_an, ") \
				_T("           SUM(hfe_policyamount) thu_chinh_sach, ") \
				_T("		   SUM(hfe_otherreceipt) thu_khac,") \
				_T("           SUM(hfe_tamgui) tam_gui, ") \
				_T("           SUM( hfe_patpaid1 +  hfe_diffcost  ") \
				_T("             + hfe_otherreceipt + hfe_tamgui - hfe_deposit ) AS cong_thu ") \
				_T(" FROM      fa_cash ") \
				_T(" LEFT JOIN ") \
				_T(" (SELECT 'I' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         hfe_deposit, ") \
				_T("         hfe_amount, ") \
				_T("         hfe_inspaid, ") \
				_T("         hfe_discount, ") \
				_T("         hfe_copayment AS hfe_patpaid1, ") \
				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' and substr(f.hfe_group, 1, 2) ='FF' AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )) ") \
				_T("         ELSE 0 ") \
				_T("         END AS hfe_foodamount, ") \
				_T("         hfe_diffcost, ") \
				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT Coalesce(SUM(hfe_patpaid), 0) ") \
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
				_T("  SELECT CASE WHEN hfe_class = 'I' THEN 'I' ELSE 'III' END AS hfe_index, ") \
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
				_T("  SELECT 'III' AS hfe_index, ") \
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
				_T(" GROUP BY hfe_index, trunc(fac_posteddate)") \
				_T(" ORDER BY hfe_index, trunc(fac_posteddate)"), szWhere);
_fmsg(_T("%s"), szSQL);
	return szSQL;
}
int CFMInsurancePostedReceiptVoucherListRG::OnListCheckAllIns()
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
int CFMInsurancePostedReceiptVoucherListRG::OnListUnCheckAllIns()
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
int CFMInsurancePostedReceiptVoucherListRG::OnListCheckAllSolder()
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

int CFMInsurancePostedReceiptVoucherListRG::OnListUnCheckAllSolder()
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
int CFMInsurancePostedReceiptVoucherListRG::OnListCheckAllInsSolder()
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

int CFMInsurancePostedReceiptVoucherListRG::OnListUnCheckAllInsSolder()
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