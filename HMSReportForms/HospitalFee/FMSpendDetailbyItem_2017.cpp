#include "stdafx.h"
#include "FMSpendDetailbyItem_2017.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSpendDetailByItem_2017* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSpendDetailByItem_2017* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSpendDetailByItem_2017* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSpendDetailByItem_2017* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017 *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnOrderByAddNew();
}*/
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017 *)pWnd)->OnObjectTypeSelendok();
}
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017 *)pWnd)->OnObjectTypeLoadData();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMSpendDetailByItem_2017*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMSpendDetailByItem_2017*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMSpendDetailByItem_2017*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMSpendDetailByItem_2017*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem_2017*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMSpendDetailByItem_2017 *pVw = (CFMSpendDetailByItem_2017 *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMSpendDetailByItem_2017 *pVw = (CFMSpendDetailByItem_2017 *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMSpendDetailByItem_2017 *pVw = (CFMSpendDetailByItem_2017 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMSpendDetailByItem_2017 *pVw = (CFMSpendDetailByItem_2017 *)pWnd;
	pVw->OnExportSelect();
}
static void _OnServiceOnDemandSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem_2017*)pWnd)->OnServiceOnDemandSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem_2017*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem_2017*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem_2017*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMSpendDetailByItem_2017*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem_2017*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem_2017*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem_2017*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem_2017*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMSpendDetailByItem_2017*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMSpendDetailByItem_2017*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMSpendDetailByItem_2017*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMSpendDetailByItem_2017*)pWnd)->OnListCheckAllTYC();
	return 0;
}

static int _OnListCheckAllDVFnc(CWnd *pWnd)
{
	((CFMSpendDetailByItem_2017*)pWnd)->OnListCheckAllDV();
	return 0;
}
static int _OnListCheckAllDVABFnc(CWnd *pWnd)
{
	((CFMSpendDetailByItem_2017*)pWnd)->OnListCheckAllDVAB();
	return 0;
}

static int _OnListCheckAllDVCLCFnc(CWnd *pWnd)
{
	((CFMSpendDetailByItem_2017*)pWnd)->OnListCheckAllDVCLC();
	return 0;
}

static int _OnListUnCheckAllDVCLCFnc(CWnd *pWnd)
{
	((CFMSpendDetailByItem_2017*)pWnd)->OnListUnCheckAllDVCLC();
	return 0;
}


CFMSpendDetailByItem_2017::CFMSpendDetailByItem_2017(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMSpendDetailByItem_2017::~CFMSpendDetailByItem_2017(){
}
void CFMSpendDetailByItem_2017::OnCreateComponents()
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
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 10, 120, 90, 145);
	m_wndObjectType.Create(this,95, 120, 230, 145); 
	m_wndDeptLabel.Create(this, _T("Dept"), 240, 120, 340, 145);
	m_wndDept.Create(this,350, 120, 480, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 240, 90, 340, 115);
	m_wndStatus.Create(this,350, 90, 480, 115); 
	m_wndList.Create(this,10, 150, 485, 470); 
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 11, 475, 146, 500);
	m_wndServiceOnDemand.Create(this, _T("Service On Demand"), 150, 475, 265, 500);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 320, 540, 400, 565);
	m_wndExport.Create(this, _T("Export XLS"), 405, 540, 485, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 13, 505, 148, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 152, 505, 267, 530);
	m_wndAll.Create(this, _T("All"), 271, 505, 386, 530);
	m_wndOrderByLabel.Create(this, _T("Order By"), 0, 0, 0, 0);
	m_wndOrderBy.Create(this,0, 0, 0, 0); 
	m_wndDeposit.Create(this, _T("Deposit"), 0, 0, 0, 0);

	m_wndWithoutGeneral.Create(this, L"", 0, 0, 0, 0);
	m_wndWithoutGeneral.ShowWindow(SW_HIDE);
	m_wndWithoutGeneral.EnableWindow(FALSE);
}
void CFMSpendDetailByItem_2017::OnInitializeComponents(){
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

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMSpendDetailByItem_2017::OnSetWindowEvents(){
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
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);

	m_wndList.AddEvent(3, _T("Check All DV"), _OnListCheckAllDVFnc);
	m_wndList.AddEvent(4, _T("Check All DV-AB"), _OnListCheckAllDVABFnc);

	m_wndList.AddEvent(5, _T("Check All DVCLC"), _OnListCheckAllDVCLCFnc);

	m_wndList.AddEvent(6, _T("Bỏ Chọn phiếu thu/chi CLC"), _OnListUnCheckAllDVCLCFnc);

	m_wndList.AddEvent(10, _T("Search"), _OnListSearchItemFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndServiceOnDemand.SetEvent(WE_CLICK, _OnServiceOnDemandSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
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
void CFMSpendDetailByItem_2017::OnDoDataExchange(CDataExchange* pDX){
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

}
void CFMSpendDetailByItem_2017::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMSpendDetailByItem_2017::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMSpendDetailByItem_2017::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_bHitechMachine = FALSE;
	m_bServiceOnDemand = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_szObjectTypeKey = _T("01");
	m_nPatientType = 3;
}

int CFMSpendDetailByItem_2017::SetMode(int nMode){
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

/*void CFMSpendDetailByItem_2017::OnYearChange(){
	
} */
/*void CFMSpendDetailByItem_2017::OnYearSetfocus(){
	
} */
/*void CFMSpendDetailByItem_2017::OnYearKillfocus(){
	
} */
int CFMSpendDetailByItem_2017::OnYearCheckValue(){
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
 
void CFMSpendDetailByItem_2017::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMSpendDetailByItem_2017::OnReportPeriodSelendok(){
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

/*void CFMSpendDetailByItem_2017::OnReportPeriodSetfocus(){
	
}*/
/*void CFMSpendDetailByItem_2017::OnReportPeriodKillfocus(){
	
}*/
long CFMSpendDetailByItem_2017::OnReportPeriodLoadData(){
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

/*void CFMSpendDetailByItem_2017::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMSpendDetailByItem_2017::OnFromDateChange(){
	
} */
/*void CFMSpendDetailByItem_2017::OnFromDateSetfocus(){
	
} */
/*void CFMSpendDetailByItem_2017::OnFromDateKillfocus(){
	
} */
int CFMSpendDetailByItem_2017::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMSpendDetailByItem_2017::OnToDateChange(){
	
} */
/*void CFMSpendDetailByItem_2017::OnToDateSetfocus(){
	
} */
/*void CFMSpendDetailByItem_2017::OnToDateKillfocus(){
	
} */
int CFMSpendDetailByItem_2017::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMSpendDetailByItem_2017::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSpendDetailByItem_2017::OnClerkSelendok(){
	 
}
/*void CFMSpendDetailByItem_2017::OnClerkSetfocus(){
	
}*/
/*void CFMSpendDetailByItem_2017::OnClerkKillfocus(){
	
}*/
long CFMSpendDetailByItem_2017::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMSpendDetailByItem_2017::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSpendDetailByItem_2017::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSpendDetailByItem_2017::OnStatusSelendok(){
	 OnListLoadData();
}
int CFMSpendDetailByItem_2017::OnListCheckAllTYC()
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
int CFMSpendDetailByItem_2017::OnListCheckAllPTTYC()
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


int CFMSpendDetailByItem_2017::OnListCheckAllDV()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DV"))==szItemText.Right(2))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
int CFMSpendDetailByItem_2017::OnListCheckAllDVAB()
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

int CFMSpendDetailByItem_2017::OnListCheckAllDVCLC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	
	CString szItemText;	
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DVCLC"))==szItemText.Right(5) || (_T("DVCLCA16"))==szItemText.Right(8))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

void CFMSpendDetailByItem_2017::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}
/*void CFMSpendDetailByItem_2017::OnStatusSetfocus(){
	
}*/
/*void CFMSpendDetailByItem_2017::OnStatusKillfocus(){
	
}*/
long CFMSpendDetailByItem_2017::OnStatusLoadData(){
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
/*void CFMSpendDetailByItem_2017::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSpendDetailByItem_2017::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSpendDetailByItem_2017::OnOrderBySelendok(){
	 
}
/*void CFMSpendDetailByItem_2017::OnOrderBySetfocus(){
	
}*/
/*void CFMSpendDetailByItem_2017::OnOrderByKillfocus(){
	
}*/
long CFMSpendDetailByItem_2017::OnOrderByLoadData(){
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

void CFMSpendDetailByItem_2017::OnObjectTypeSelendok(){
	OnListLoadData();
}

long CFMSpendDetailByItem_2017::OnObjectTypeLoadData(){
	m_wndObjectType.AddItems(_T("01"), _T("\x44\x1ECB\x63h v\x1EE5"), NULL);	
	return 3;
}

/*void CFMSpendDetailByItem_2017::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMSpendDetailByItem_2017::OnDeptLoadData(){
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

void CFMSpendDetailByItem_2017::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMSpendDetailByItem_2017::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMSpendDetailByItem_2017::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMSpendDetailByItem_2017::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMSpendDetailByItem_2017::OnListLoadData(){
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
		szWhere.AppendFormat(_T(" AND fac_cashbook_id  in ('DVYC','DV-PTTYC')"));
	else
		if (!m_szObjectTypeKey.IsEmpty())
		{
			tmpStr = m_szObjectTypeKey==_T("01")?_T("DV"):m_szObjectTypeKey==_T("02")?_T("BH"):_T("QU");
			szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = '%s' AND fac_cashbook_id not in ('DVYC','DV-PTTYC')"), tmpStr);
		}

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, ") \
				 _T("fac_invoicedate, fac_approveddate, fac_posteddate ") \
				 _T("FROM fa_cash WHERE fac_invoicetype in ('P') %s ORDER BY fac_cash_id"), szWhere);
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
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMSpendDetailByItem_2017::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMSpendDetailByItem_2017::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMSpendDetailByItem_2017::OnServiceOnDemandSelect(){
	OnListLoadData();
}

void CFMSpendDetailByItem_2017::OnInpatientSelect(){
	
}
void CFMSpendDetailByItem_2017::OnOutpatientSelect(){
	
}
void CFMSpendDetailByItem_2017::OnDepositSelect(){
	
}
void CFMSpendDetailByItem_2017::OnAllSelect()
{
	
}
 
 
int CFMSpendDetailByItem_2017::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMSpendDetailByItem_2017::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMSpendDetailByItem_2017::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMSpendDetailByItem_2017::OnSaveFMInsuranceReceiptSummary(){
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
int CFMSpendDetailByItem_2017::OnCancelFMInsuranceReceiptSummary(){
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
int CFMSpendDetailByItem_2017::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"

void CFMSpendDetailByItem_2017::OnPrintSelect()
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
	TranslateString(_T("In bảng lương"), tmpStr);
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

void CFMSpendDetailByItem_2017::OnPrint1stver(){
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

void CFMSpendDetailByItem_2017::OnPrint2ndver()
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
	szReportName = _T("Reports\\HMS\\HF_CHITIETTHUTIENTHEODANHMUC_MAU3.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	//MessageBox(szSQL);
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMSpendDetailByItem_2017"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMSpendDetailByItem_2017::OnPrint2ndver_Ins()
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMSpendDetailByItem_2017"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();
}

void CFMSpendDetailByItem_2017::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\CHI TIET TIEN LUONG THEO DANH MUC CHI.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringSalary();
	rs.ExecSQL(szSQL);
	//MessageBox(szSQL);
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
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);
		
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
	xls.Save(_T("Exports\\CHI TIET TIEN LUONG THEO DANH MUC CHI2.xls"));
}

CString CFMSpendDetailByItem_2017::GetQueryString()
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
		szWhere1.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);

	//if (m_szObjectTypeKey == _T("01"))//
	if (m_bServiceOnDemand)
	{
		
		szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group, r.hfe_invoiceno,") \
		_T("         CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr, rl.HFE_QUANTITY times, rl.hfe_patpaid amount, f.hfe_category, ") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_exam ex ON (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno=rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status  IN ('P','R') AND f.hfe_group ='D0000' AND f.hfe_itemid   <> 'D0000006' AND f.hfe_patpaid   >0") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL") \
		//2. Tra lai phi giuong//
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group, r.hfe_invoiceno,        ") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,rl.hfe_patpaid amount,f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status   IN ('P','R') AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006') ") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
	//3. Tra lai khoa sinh hoc phan tu=C17, khoa tiep huyet=C16, y hoc hat nhan=A20, khoa giai phau benh ly C15// 
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group,r.hfe_invoiceno,") \
		_T("         CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("           THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20','B1E00','C5') AS NVARCHAR2(3)) END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,rl.hfe_patpaid amount,f.hfe_category,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T'))") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status   IN ('P','R')") \
		_T("       AND f.hfe_type     IN ('P','T')") \
		_T("       AND F.Hfe_Group    IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	 ") \
		_T("       UNION ALL") \
		//4. Tra lai tien xet nghiem//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN f.hfe_type     IN ('P','T')") \
		_T("           AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("           THEN Fl.Hfl_Deptid") \
		_T("         END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T'))") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r  ON (r.hfe_invoiceno  = rl.hfe_invoiceno AND r.hfe_docno      = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status    IN ('P','R')") \
		_T("       AND f.hfe_type      IN ('T','P')") \
		_T("       AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("       AND f.hfe_category  IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')      <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//5. Tra lai phau thuat thu thuat//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("	   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx AND f.hfe_type   = 'O')") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE") \
		_T("       f.hfe_status   IN ('P','R')") \
		_T("       AND F.Hfe_type      ='O'") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//6. Tra lai phi khoa duoc, tai chinh tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp") \
		_T("       ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid) LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND product_org_id NOT IN ('MA','BB', 'PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'  ") \
		_T("       UNION ALL      ") \
		//7. Tra lai phi khoa duoc, khoa duoc tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
		_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND product_org_id NOT IN ('MA','BB', 'PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
		_T("       UNION ALL      ") \
		//8. Tra lai phi khoa trang bi, tai chinh tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T(" FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//9. Tra lai phi khoa trang bi, trang bi tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
		_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
		_T("       UNION ALL	      ") \
		//10. Tra lai phi phong mo//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('MA','BB', 'PĐD')") \
		_T("       AND f.hfe_deptid        = 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno") \
		_T("       AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)LEFT JOIN Hms_Fee_Refund r  ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid        = 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//11. Tra lai phi khoa tiep huyet = C16//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('MA','PM', 'PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//12. Chi khac o tai chinh//
		_T("       SELECT r.hfe_docno,") \
		_T("         r.hfe_type fee_type,") \
		_T("         r.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN r.hfe_type  IN ('V')") \
		_T("           AND r.Hfe_Serialno='PC' AND r.hfe_deptid is NOT NULL THEN r.hfe_deptid") \
		_T("           WHEN r.hfe_type  IN ('V') AND r.Hfe_Serialno='PC' AND r.hfe_deptid is NULL THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15))") \
		_T("         END dept_id,") \
		_T("         NULL,r.hfe_desc, rl.HFE_QUANTITY times,") \
		_T("         hfe_cost amount,") \
		_T("         NULL,") \
		_T("      CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee_refund r LEFT JOIN Hms_Fee_Refundline rl ON (r.hfe_docno     =rl.hfe_docno AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
		_T("       WHERE ") \
		_T("       r.hfe_status   IN ('P','R')") \
		_T("       AND r.hfe_type      ='V'") \
		_T("       AND r.Hfe_Serialno  ='PC'") \
		_T("       UNION ALL      ") \
		//13. Chi tra lai tien an & goi dich vu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN f.hfe_deptid IN ('C1.1', 'C1.2','C1.3')") \
		_T("           THEN HCR_ADMITDEPT") \
		_T("           ELSE f.hfe_deptid") \
		_T("         END AS dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)      ") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status   IN ('P','R')") \
		_T("       AND (F.Hfe_Group    IN ('FF000', 'F0000') OR (F.Hfe_Group IN ('B1G00') AND f.hfe_type = 'X'))") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
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
		_T("   FROM HMS_FEE_REFUND_VR2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s %s ") \
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
		_T("   descr"), szWhere,m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1); \
		}
	else
	{
	szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group, r.hfe_invoiceno,") \
		_T("         CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr, rl.HFE_QUANTITY times, rl.hfe_patpaid amount, f.hfe_category, ") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_exam ex ON (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno=rl.hfe_docno)") \
		_T("       WHERE 1=1 %s") \
		_T("       AND f.hfe_status  IN ('P','R') AND f.hfe_group ='D0000' AND f.hfe_itemid   <> 'D0000006' AND f.hfe_patpaid   >0") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL") \
		//2. Tra lai phi giuong//
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group, r.hfe_invoiceno,        ") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,rl.hfe_patpaid amount,f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status   IN ('P','R') AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006') ") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
	//3. Tra lai khoa sinh hoc phan tu=C17, khoa tiep huyet=C16, y hoc hat nhan=A20, khoa giai phau benh ly C15// 
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group,r.hfe_invoiceno,") \
		_T("         CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("           THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20','B1E00','C5') AS NVARCHAR2(3)) END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,rl.hfe_patpaid amount,f.hfe_category,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T'))") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status   IN ('P','R')") \
		_T("       AND f.hfe_type     IN ('P','T')") \
		_T("       AND F.Hfe_Group    IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	 ") \
		_T("       UNION ALL") \
		//4. Tra lai tien xet nghiem//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN f.hfe_type     IN ('P','T')") \
		_T("           AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("           THEN Fl.Hfl_Deptid") \
		_T("         END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T'))") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r  ON (r.hfe_invoiceno  = rl.hfe_invoiceno AND r.hfe_docno      = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status    IN ('P','R')") \
		_T("       AND f.hfe_type      IN ('T','P')") \
		_T("       AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("       AND f.hfe_category  IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')      <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//5. Tra lai phau thuat thu thuat//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("	   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx AND f.hfe_type   = 'O')") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status   IN ('P','R')") \
		_T("       AND F.Hfe_type      ='O'") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//6. Tra lai phi khoa duoc, tai chinh tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp") \
		_T("       ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid) LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND product_org_id NOT IN ('MA','BB', 'PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'  ") \
		_T("       UNION ALL      ") \
		//7. Tra lai phi khoa duoc, khoa duoc tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
		_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
		_T("       WHERE 1                 =1 %s") \
		_T("       AND f.hfe_status       IN ('P')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND product_org_id NOT IN ('MA','BB', 'PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
		_T("       UNION ALL      ") \
		//8. Tra lai phi khoa trang bi, tai chinh tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("        CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T(" FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//9. Tra lai phi khoa trang bi, trang bi tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
		_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
		_T("       UNION ALL	      ") \
		//10. Tra lai phi phong mo//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('MA','BB', 'PĐD')") \
		_T("       AND f.hfe_deptid        = 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno") \
		_T("       AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)LEFT JOIN Hms_Fee_Refund r  ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid        = 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//11. Tra lai phi khoa tiep huyet = C16//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')")	\
		_T("       AND product_org_id NOT IN ('MA','PM', 'PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//12. Chi khac o tai chinh//
		_T("       SELECT r.hfe_docno,") \
		_T("         r.hfe_type fee_type,") \
		_T("         r.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN r.hfe_type  IN ('V')") \
		_T("           AND r.Hfe_Serialno='PC'") \
		_T("           THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15))") \
		_T("         END dept_id,") \
		_T("         NULL,r.hfe_desc, rl.HFE_QUANTITY times,") \
		_T("         hfe_cost amount,") \
		_T("         NULL,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee_refund r LEFT JOIN Hms_Fee_Refundline rl ON (r.hfe_docno     =rl.hfe_docno AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND r.hfe_status   IN ('P','R')") \
		_T("       AND r.hfe_type      ='V'") \
		_T("       AND r.Hfe_Serialno  ='PC'") \
		_T("       UNION ALL      ") \
		//13. Chi tra lai tien an va goi dich vu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN f.hfe_deptid IN ('C1.1', 'C1.2','C1.3')") \
		_T("           THEN HCR_ADMITDEPT") \
		_T("           ELSE f.hfe_deptid") \
		_T("         END AS dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)      ") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status   IN ('P','R')") \
		//_T("       AND F.Hfe_Group    IN ('FF000', 'F0000')") \//
		_T("       AND (F.Hfe_Group    IN ('FF000', 'F0000') OR (F.Hfe_Group IN ('B1G00') AND f.hfe_type = 'X'))") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("        AND NVL(r.hfe_desc, 'XX')     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
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
		_T("   FROM HMS_FEE_REFUND_VR2 i") \
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
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1); \
	}
	return szSQL;
}

void CFMSpendDetailByItem_2017::BuildQueryString(CString& szSQL){
	//data_fitler
	//data_sort
	//getquerystring
}

void CFMSpendDetailByItem_2017::data_filter(CString& szWhere){
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

void CFMSpendDetailByItem_2017::data_sort(CString& szSort){
	CString tmpStr;
	m_mOrderBy.Lookup(tmpStr, szSort);
}

void CFMSpendDetailByItem_2017::prototype_condition(CString szCondition, CString szField, CString& szWhere){
	if (!szCondition.IsEmpty())
		if (szCondition.Find(',') != -1)
			szWhere.AppendFormat(_T(" AND %s IN (%s)"), szField, szCondition);
		else
			szWhere.AppendFormat(_T(" AND %s = '%s'"), szField, szCondition);
}

CString CFMSpendDetailByItem_2017::GetQueryString_1(){
	CString szSQL;

	return szSQL;
}

BOOL CFMSpendDetailByItem_2017::ParseALargeFile(HWND hwndParent, LPTSTR lpszFileName) 
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
void CFMSpendDetailByItem_2017::OnPrintSalaryList()
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
	szReportName = _T("Reports\\HMS\\HF_CHITIETCHITIENTHEODANHMUC_MAULUONG.RPT");
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMCollectDetailByItem_2017"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	rpt.PrintPreview();

}
CString CFMSpendDetailByItem_2017::GetQueryStringSalary()
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
		szWhere1.AppendFormat(_T(" AND dept_id = '%s'"), m_szDeptKey);

		if (m_bServiceOnDemand)	{
	
		szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group, r.hfe_invoiceno,") \
		_T("         CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr, rl.HFE_QUANTITY times, f.hfe_unitprice AS price, fl.hfl_insprice as insprice, rl.hfe_patpaid amount, f.hfe_category, ") \
		_T("         fl.hfl_salary salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("       LEFT JOIN hms_exam ex ON (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno=rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status  IN ('P','R') AND f.hfe_group ='D0000' AND f.hfe_itemid   <> 'D0000006' AND f.hfe_patpaid   >0") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL") \
		//2. Tra lai phi giuong//
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group, r.hfe_invoiceno,        ") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, dy.HDBL_INSPRICE as insprice,rl.hfe_patpaid amount,f.hfe_category,") \
		_T("       dy.hdbl_salary salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		//_T("       LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) ") \//
		_T("       LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) and dy.hdbl_deptid=hfe_deptid") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status   IN ('P','R') AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006') ") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
	//3. Tra lai khoa sinh hoc phan tu=C17, khoa tiep huyet=C16, y hoc hat nhan=A20, khoa giai phau benh ly C15// 
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group,r.hfe_invoiceno,") \
		_T("         CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("           THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20','B1E00','C5') AS NVARCHAR2(3)) END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, fl.hfl_insprice as insprice, rl.hfe_patpaid amount,f.hfe_category,") \
		_T("        fl.hfl_salary salary,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T'))") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status   IN ('P','R')") \
		_T("       AND f.hfe_type     IN ('P','T')") \
		_T("       AND F.Hfe_Group    IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	 ") \
		_T("       UNION ALL") \
		//4. Tra lai tien xet nghiem//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN f.hfe_type     IN ('P','T')") \
		_T("           AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("           THEN Fl.Hfl_Deptid") \
		_T("         END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, fl.hfl_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("        fl.hfl_salary salary,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T'))") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r  ON (r.hfe_invoiceno  = rl.hfe_invoiceno AND r.hfe_docno      = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status    IN ('P','R')") \
		_T("       AND f.hfe_type      IN ('T','P')") \
		_T("       AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("       AND f.hfe_category  IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc      <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//5. Tra lai phau thuat thu thuat//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  not in ('B5','PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  in ('PTTYC') AND HO_PDEPTID is not null AND HO_DEPTID is not null AND FL.HFL_PERFORMPLACE is not null THEN FL.HFL_PERFORMPLACE") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  IN ('PTTYC') AND FL.HFL_PERFORMPLACE IS NULL  AND Fl.Hfl_Deptid is null  THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, fl.hfl_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("        fl.hfl_salary salary,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("	   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx AND f.hfe_type   = 'O')") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE") \
		_T("       f.hfe_status   IN ('P','R') ") \
		_T("       AND F.Hfe_type      ='O' AND NVL(fl.HFL_TYC,'N') <> 'TYC'") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//6. Tra lai phi khoa duoc, tai chinh tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,f.hfe_unitprice AS price, f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp") \
		_T("       ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid) LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND product_org_id NOT IN ('MA','BB', 'PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'  ") \
		_T("       UNION ALL      ") \
		//7. Tra lai phi khoa duoc, khoa duoc tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
		_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND product_org_id NOT IN ('MA','BB','PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
		_T("       UNION ALL      ") \
		//8. Tra lai phi khoa trang bi, tai chinh tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("         CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T(" FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//9. Tra lai phi khoa trang bi, trang bi tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
		_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
		_T("       UNION ALL	      ") \
		//10. Tra lai phi phong mo//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('MA','BB','PĐD')") \
		_T("       AND f.hfe_deptid        = 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno") \
		_T("       AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)LEFT JOIN Hms_Fee_Refund r  ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid        = 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//11. Tra lai phi khoa tiep huyet = C16//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price, f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE ") \
		_T("       f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('MA','PM','PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//12. Chi khac o tai chinh//
		_T("       SELECT r.hfe_docno,") \
		_T("         r.hfe_type fee_type,") \
		_T("         r.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN r.hfe_type  IN ('V')") \
		_T("           AND r.Hfe_Serialno='PC' AND r.hfe_deptid is NOT NULL THEN r.hfe_deptid") \
		_T("           WHEN r.hfe_type  IN ('V') AND r.Hfe_Serialno='PC' AND r.hfe_deptid is NULL THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15))") \
		_T("         END dept_id,") \
		_T("         NULL,r.hfe_desc, rl.HFE_QUANTITY times, 0 as price, 0 as insprice,") \
		_T("         hfe_cost amount,") \
		_T("         NULL,") \
		_T("         0 salary,") \
		_T("      CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee_refund r LEFT JOIN Hms_Fee_Refundline rl ON (r.hfe_docno     =rl.hfe_docno AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
		_T("       WHERE ") \
		_T("       r.hfe_status   IN ('P','R')") \
		_T("       AND r.hfe_type      ='V'") \
		_T("       AND r.Hfe_Serialno  ='PC'") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,  price, insprice,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
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
		_T("     DECODE('O', i.hfe_type, 1, times) times,  price, insprice,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary") \
		_T("   FROM HMS_FEE_REFUND_VR2 i") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( i.hfe_docno = hd_docno )") \
		_T("   LEFT JOIN tbl_fee") \
		_T("   ON ( i.hfe_docno    = tbl_fee.hfe_docno") \
		_T("   AND i.hfe_invoiceno = tbl_fee.hfe_invoiceno )") \
		_T("   LEFT JOIN hms_fee_group") \
		_T("   ON (hfg_id        = hfe_group)") \
		_T("   WHERE hfe_cash_id > 0 %s %s ") \
		_T("     ") \
		_T("   ) tbl_invoice ON (fac_cash_id = hfe_cash_id)") \
		_T(" WHERE amount                    > 0") \
		_T(" %s") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr,  price, insprice, salary") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), szWhere,m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1); \
		}
	else
	{
	szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group, r.hfe_invoiceno,") \
		_T("         CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr, rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    fl.hfl_insprice as insprice, rl.hfe_patpaid amount, f.hfe_category, ") \
		_T("         fl.hfl_salary salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("       LEFT JOIN hms_exam ex ON (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno=rl.hfe_docno)") \
		_T("       WHERE 1=1 %s") \
		_T("       AND f.hfe_status  IN ('P','R') AND f.hfe_group ='D0000' AND f.hfe_itemid   <> 'D0000006' AND f.hfe_patpaid   >0") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL") \
		//2. Tra lai phi giuong//
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group, r.hfe_invoiceno,        ") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,   dy.HDBL_INSPRICE as insprice, rl.hfe_patpaid amount,f.hfe_category,") \
		_T("       dy.hdbl_salary salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		//_T("       LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) ") \//
		_T("       LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= hfe_itemid) and dy.hdbl_deptid=hfe_deptid") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status   IN ('P','R') AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006') ") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
	//3. Tra lai khoa sinh hoc phan tu=C17, khoa tiep huyet=C16, y hoc hat nhan=A20, khoa giai phau benh ly C15// 
		_T("       SELECT f.hfe_docno,f.hfe_type fee_type,f.hfe_group,r.hfe_invoiceno,") \
		_T("         CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("           THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20','B1E00','C5') AS NVARCHAR2(3)) END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times,f.hfe_unitprice AS price,    fl.hfl_insprice as insprice, rl.hfe_patpaid amount,f.hfe_category,") \
		_T("        fl.hfl_salary salary,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T'))") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status   IN ('P','R')") \
		_T("       AND f.hfe_type     IN ('P','T')") \
		_T("       AND F.Hfe_Group    IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	 ") \
		_T("       UNION ALL") \
		//4. Tra lai tien xet nghiem//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN f.hfe_type     IN ('P','T')") \
		_T("           AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("           THEN Fl.Hfl_Deptid") \
		_T("         END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    fl.hfl_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("     fl.hfl_salary salary,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T'))") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r  ON (r.hfe_invoiceno  = rl.hfe_invoiceno AND r.hfe_docno      = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status    IN ('P','R')") \
		_T("       AND f.hfe_type      IN ('T','P')") \
		_T("       AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
		_T("       AND f.hfe_category  IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc      <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//5. Tra lai phau thuat thu thuat//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("         f.hfe_itemid,f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    fl.hfl_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("        fl.hfl_salary salary,") \
		_T("       NVL(hfl_hitechmachine, 'N') hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("	   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx AND f.hfe_type   = 'O')") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status   IN ('P','R')") \
		_T("       AND F.Hfe_type      ='O' AND NVL(fl.HFL_TYC,'N') <> 'TYC'") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//6. Tra lai phi khoa duoc, tai chinh tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp") \
		_T("       ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid) LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND product_org_id NOT IN ('MA','BB','PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'  ") \
		_T("       UNION ALL      ") \
		//7. Tra lai phi khoa duoc, khoa duoc tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
		_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
		_T("       WHERE 1                 =1 %s") \
		_T("       AND f.hfe_status       IN ('P')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND product_org_id NOT IN ('MA','BB','PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
		_T("       UNION ALL      ") \
		//8. Tra lai phi khoa trang bi, tai chinh tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("        CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T(" FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//9. Tra lai phi khoa trang bi, trang bi tao phieu//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
		_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid       <> 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
		_T("       UNION ALL	      ") \
		//10. Tra lai phi phong mo//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('MA','BB','PĐD')") \
		_T("       AND f.hfe_deptid        = 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno") \
		_T("       AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)LEFT JOIN Hms_Fee_Refund r  ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
		_T("       AND product_org_id NOT IN ('PM','BB')") \
		_T("       AND f.hfe_deptid        = 'B5'") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//11. Tra lai phi khoa tiep huyet = C16//
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times, f.hfe_unitprice AS price,    f.hfe_insprice as insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND f.hfe_status       IN ('P','R')") \
		_T("       AND f.hfe_type         IN ('D', 'M', 'R')")	\
		_T("       AND product_org_id NOT IN ('MA','PM','PĐD')") \
		_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("       UNION ALL      ") \
		//12. Chi khac o tai chinh//
		_T("       SELECT r.hfe_docno,") \
		_T("         r.hfe_type fee_type,") \
		_T("         r.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN r.hfe_type  IN ('V')") \
		_T("           AND r.Hfe_Serialno='PC'") \
		_T("           THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15))") \
		_T("         END dept_id,") \
		_T("         NULL,r.hfe_desc, rl.HFE_QUANTITY times, 0 AS price,    0 as insprice,") \
		_T("         hfe_cost amount,") \
		_T("         NULL,") \
		_T("       0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee_refund r LEFT JOIN Hms_Fee_Refundline rl ON (r.hfe_docno     =rl.hfe_docno AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
		_T("       WHERE 1             =1 %s") \
		_T("       AND r.hfe_status   IN ('P','R')") \
		_T("       AND r.hfe_type      ='V'") \
		_T("       AND r.Hfe_Serialno  ='PC'") \
		
		_T("       UNION ALL      ") \
		_T("       SELECT f.hfe_docno,") \
		_T("         f.hfe_type fee_type,") \
		_T("         f.hfe_group,") \
		_T("         r.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN f.hfe_deptid IN ('C1.1', 'C1.2','C1.3')") \
		_T("           THEN HCR_ADMITDEPT") \
		_T("           ELSE f.hfe_deptid") \
		_T("         END AS dept_id,") \
		_T("         f.hfe_itemid, f.hfe_desc descr,rl.HFE_QUANTITY times,") \
		_T("	 f.hfe_unitprice AS price,") \
		_T("     f.hfe_insprice  AS insprice,") \
		_T("         rl.hfe_patpaid amount,") \
		_T("         f.hfe_category,") \
		_T("         0 salary,") \
		_T("       CAST('N' AS NVARCHAR2(1)) hitech_machine") \
		_T("       FROM hms_fee f") \
		_T("       LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)      ") \
		_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
		_T("       WHERE 1                 =1 %s") \
		_T("       AND f.hfe_status   IN ('P','R')") \
		_T("       AND (F.Hfe_Group    IN ('FF000', 'F0000') OR (F.Hfe_Group IN ('B1G00') AND f.hfe_type = 'X'))") \
		_T("       AND f.hfe_category IN ('N','BQP','XX')") \
		_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,  price, insprice,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
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
		_T("     DECODE('O', i.hfe_type, 1, times) times,  price, insprice,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary") \
		_T("   FROM HMS_FEE_REFUND_VR2 i") \
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
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr,  price, insprice,salary") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"), szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,m_bHitechMachine?_T("AND instr(hitech_machine, 'Y') > 0"):_T(""),szWhere1); \
	}
	return szSQL;
}

int CFMSpendDetailByItem_2017::OnListUnCheckAllDVCLC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DVCLC"))==szItemText.Right(5) || (_T("DVCLCA16"))==szItemText.Right(8))
	{
		m_wndList.SetCheck(i, false);
	}	
	}
	return 0;
}