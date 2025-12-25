#include "stdafx.h"
#include "FMInsuranceReceiptSummary.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceReceiptSummary* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnReportPeriodSelendok();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnDeptLoadData();
}

/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceReceiptSummary* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceReceiptSummary* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceReceiptSummary* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceReceiptSummary*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceReceiptSummary*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceReceiptSummary*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceReceiptSummary*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceReceiptSummary*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsuranceReceiptSummary *pVw = (CFMInsuranceReceiptSummary *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsuranceReceiptSummary *pVw = (CFMInsuranceReceiptSummary *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceReceiptSummary *pVw = (CFMInsuranceReceiptSummary *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceReceiptSummary *pVw = (CFMInsuranceReceiptSummary *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceReceiptSummary*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceReceiptSummary*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceReceiptSummary*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceReceiptSummary*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMInsuranceReceiptSummary*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMInsuranceReceiptSummary*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMInsuranceReceiptSummary*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMInsuranceReceiptSummary*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMInsuranceReceiptSummary*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceReceiptSummary*)pWnd)->OnSODSelect();
}
static void _OnServicePackageSelectFnc(CWnd *pWnd)
{
	 ((CFMInsuranceReceiptSummary*)pWnd)->OnServicePackageSelect();
}

static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsuranceReceiptSummary*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsuranceReceiptSummary*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceReceiptSummary*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceReceiptSummary*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceReceiptSummary*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceReceiptSummary*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}

static long _OnObjectTypeLoadDataFnc(CWnd *pWnd)
{
	return ((CFMInsuranceReceiptSummary *)pWnd)->OnObjectTypeLoadData();
}
static void _OnSoldierWCardSelectFnc(CWnd *pWnd)
{
	 ((CFMInsuranceReceiptSummary*)pWnd)->OnSoldierWCardSelect();
}
static void _OnObjectTypeSelendokFnc(CWnd *pWnd)
{
	((CFMInsuranceReceiptSummary *)pWnd)->OnObjectTypeSelendok();
}


CFMInsuranceReceiptSummary::CFMInsuranceReceiptSummary(CWnd *pParent)
{
	m_szWhere.Empty();
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsuranceReceiptSummary::~CFMInsuranceReceiptSummary()
{
}
void CFMInsuranceReceiptSummary::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 4, 480, 534);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 246, 30, 326, 55);
	m_wndReportPeriod.Create(this,331, 30, 476, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 240, 85); 
	m_wndToDate.Create(this,331, 60, 476, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 246, 60, 326, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 240, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 240, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 246, 90, 327, 115);
	m_wndStatus.Create(this,331, 90, 476, 115); 
	m_wndList.Create(this,10, 181, 476, 468); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 116, 474, 216, 499);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 223, 474, 331, 499);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 308, 540, 388, 565);
	m_wndExport.Create(this, _T("Export XLS"), 394, 540, 474, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 110, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 116, 505, 216, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 223, 505, 331, 530);
	m_wndAll.Create(this, _T("All"), 336, 505, 476, 530);
	m_wndSOD.Create(this, _T("SOD"), 246, 151, 476, 176);
	m_wndServicePackage.Create(this, _T("ServicePackage"), 336, 474, 476, 499);
	m_wndDeptLabel.Create(this, _T("Dept"), 246, 120, 326, 145);
	m_wndDept.Create(this,331, 120, 476, 145); 
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 10, 151, 90, 176);
	m_wndObjectType.Create(this,95, 151, 240, 176); 
	m_wndSoldierWCard.Create(this, _T("Soldier w Card"), 10, 474, 110, 499);
}
void CFMInsuranceReceiptSummary::OnInitializeComponents()
{
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
	m_wndDept.LimitText(35);
	m_wndObjectType.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Posted"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 70);
	m_wndList.SetCheckBox(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMInsuranceReceiptSummary::OnSetWindowEvents(){
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
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	//m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndServicePackage.SetEvent(WE_CLICK, _OnServicePackageSelectFnc);
	m_wndObjectType.SetEvent(WE_LOADDATA, _OnObjectTypeLoadDataFnc);
	m_wndObjectType.SetEvent(WE_SELENDOK, _OnObjectTypeSelendokFnc);
	m_wndSoldierWCard.SetEvent(WE_CLICK, _OnSoldierWCardSelectFnc);

	m_wndList.AddEvent(1, _T("Chọn phiếu thu/chi BH"), _OnListCheckAllInsInvoiceFnc);
	m_wndList.AddEvent(2, _T("Bỏ Chọn phiếu thu/chi BH"), _OnListUnCheckAllInsInvoiceFnc);	
	m_wndList.AddEvent(3, _T("Chọn phiếu thu/chi Quân"), _OnListCheckAllSolderFnc);
	m_wndList.AddEvent(4, _T("Bỏ Chọn phiếu thu/chi Quân"), _OnListUnCheckAllSolderFnc);
	m_wndList.AddEvent(5, _T("Chọn phiếu thu/chi BH Quân"), _OnListCheckAllInsSolderFnc);
	m_wndList.AddEvent(6, _T("Bỏ Chọn phiếu thu/chi BH Quân"), _OnListUnCheckAllInsSolderFnc);

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
void CFMInsuranceReceiptSummary::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndServicePackage.GetDlgCtrlID(), m_bServicePackage);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_Check(pDX, m_wndSoldierWCard.GetDlgCtrlID(), m_bSoldierWCard);
}
void CFMInsuranceReceiptSummary::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceReceiptSummary::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceReceiptSummary::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_bHitechMachine = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_nPatientType = 3;
	m_bSOD=FALSE;
	m_szDeptKey.Empty();
	m_bServicePackage=FALSE;
	m_szObjectTypeKey.Empty();
	m_bSoldierWCard=FALSE;
}

int CFMInsuranceReceiptSummary::SetMode(int nMode){
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

/*void CFMInsuranceReceiptSummary::OnYearChange(){
	
} */
/*void CFMInsuranceReceiptSummary::OnYearSetfocus(){
	
} */
/*void CFMInsuranceReceiptSummary::OnYearKillfocus(){
	
} */
int CFMInsuranceReceiptSummary::OnYearCheckValue(){
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
 
void CFMInsuranceReceiptSummary::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsuranceReceiptSummary::OnReportPeriodSelendok(){
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

/*void CFMInsuranceReceiptSummary::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceReceiptSummary::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceReceiptSummary::OnReportPeriodLoadData(){
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

/*void CFMInsuranceReceiptSummary::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceReceiptSummary::OnFromDateChange(){
	
} */
/*void CFMInsuranceReceiptSummary::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceReceiptSummary::OnFromDateKillfocus(){
	
} */
int CFMInsuranceReceiptSummary::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsuranceReceiptSummary::OnToDateChange(){
	
} */
/*void CFMInsuranceReceiptSummary::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceReceiptSummary::OnToDateKillfocus(){
	
} */
int CFMInsuranceReceiptSummary::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsuranceReceiptSummary::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceReceiptSummary::OnClerkSelendok(){
	 
}
/*void CFMInsuranceReceiptSummary::OnClerkSetfocus(){
	
}*/
/*void CFMInsuranceReceiptSummary::OnClerkKillfocus(){
	
}*/
long CFMInsuranceReceiptSummary::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsuranceReceiptSummary::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceReceiptSummary::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceReceiptSummary::OnStatusSelendok(){
	 OnListLoadData();
}
	void CFMInsuranceReceiptSummary::OnServicePackageSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

/*void CFMInsuranceReceiptSummary::OnStatusSetfocus(){
	
}*/
/*void CFMInsuranceReceiptSummary::OnStatusKillfocus(){
	
}*/
/*void CFMInsuranceReceiptSummary::OnDeptSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 

void CFMInsuranceReceiptSummary::OnDeptSelendok()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}*/

long CFMInsuranceReceiptSummary::OnStatusLoadData(){
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
/*void CFMInsuranceReceiptSummary::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceReceiptSummary::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceReceiptSummary::OnOrderBySelendok(){
	 
}
/*void CFMInsuranceReceiptSummary::OnOrderBySetfocus(){
	
}*/
/*void CFMInsuranceReceiptSummary::OnOrderByKillfocus(){
	
}*/
long CFMInsuranceReceiptSummary::OnOrderByLoadData(){
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
void CFMInsuranceReceiptSummary::OnObjectTypeSelendok()
{
	OnListLoadData();
}

long CFMInsuranceReceiptSummary::OnObjectTypeLoadData()
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
	return 0;
	
}

long CFMInsuranceReceiptSummary::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and SD_DEPT_REPORT='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT SD_DEPT_REPORT as id, sd_name as name FROM sys_dept_report %s ORDER BY sd_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

void CFMInsuranceReceiptSummary::OnWithoutGeneralSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMInsuranceReceiptSummary::OnSoldierWCardSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

	void CFMInsuranceReceiptSummary::OnSODSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
void CFMInsuranceReceiptSummary::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMInsuranceReceiptSummary::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceReceiptSummary::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceReceiptSummary::OnListLoadData(){
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
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC', 'THE-BH-YC','THE-BH-PTTYC')"));
	else if (m_szObjectTypeKey == _T("BH"))
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG')"));

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

	else if (m_bSoldierWCard)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));
	else 
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));
	    szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','THE-BH', 'CK-BH', 'BH-NGAB','BH-NTAB')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
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

void CFMInsuranceReceiptSummary::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
	
} 
void CFMInsuranceReceiptSummary::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMInsuranceReceiptSummary::OnInpatientSelect(){
	
}
void CFMInsuranceReceiptSummary::OnOutpatientSelect(){
	
}
void CFMInsuranceReceiptSummary::OnDepositSelect(){
	
}
void CFMInsuranceReceiptSummary::OnAllSelect(){
	
}
 
 
int CFMInsuranceReceiptSummary::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsuranceReceiptSummary::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceReceiptSummary::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMInsuranceReceiptSummary::OnSaveFMInsuranceReceiptSummary(){
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
int CFMInsuranceReceiptSummary::OnCancelFMInsuranceReceiptSummary(){
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
int CFMInsuranceReceiptSummary::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMInsuranceReceiptSummary::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

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

void CFMInsuranceReceiptSummary::OnPrint1stver(){
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

void CFMInsuranceReceiptSummary::OnPrint2ndver()
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
	double nTotal[20], GrandAmt[20], nTotalClass[20];
	for (int i = 0; i < 20; i++)
	{
		GrandAmt[i] = 0;
		nTotal[i] = 0;
		nTotalClass[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_FMINSURANCERECEIPTSUMMARY.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("ttlamount"));
	data_name.Add(_T("ttldiscount"));
	data_name.Add(_T("ttlpatpaid"));
	data_name.Add(_T("test_fee"));
	data_name.Add(_T("pacs_fee"));
	data_name.Add(_T("ctscan_fee"));
	data_name.Add(_T("mri_fee"));
	data_name.Add(_T("pet_fee"));
	data_name.Add(_T("cyberknife_fee"));
	data_name.Add(_T("ik90_fee"));
	data_name.Add(_T("drug_fee"));
	data_name.Add(_T("mat_fee"));
	data_name.Add(_T("opt_fee"));
	data_name.Add(_T("dm_fee"));
	data_name.Add(_T("food_fee"));
	data_name.Add(_T("blood_fee"));
	data_name.Add(_T("bed_fee"));
	data_name.Add(_T("other_fee"));
	data_name.Add(_T("thu_goidv"));

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
	int sum_pos = 0, last_pos = 0;
	sum_pos = col_pos;
	last_pos = data_name.GetCount() - 1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("chindex"), szNewIndex);
		if(szNewIndex  != szOldIndex)
		{
			
			if (nTotalClass[sum_pos] + nTotalClass[last_pos] > 0)
			{
				//rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("\x43\x1ED9ng(%s)"), szOldIndex);
				rptPrevMark->SetValue(_T("Grand"), tmpStr);
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nTotalClass[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptPrevMark->SetValue(szPos, tmpStr);
					nTotalClass[i] = 0;
				}
			}
			
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
			{
				if(szNewIndex == _T("I"))
					tmpStr.Format(_T("I. \x42\x1EC7nh nh\xE2n ngo\x1EA1i tr\xFA"));
				else
					tmpStr.Format(_T("II. \x42\x1EC7nh nh\xE2n n\x1ED9i tr\xFA"));

				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptPrevMark = rptGroup;
			szOldIndex = szNewIndex;

		}

		if(m_szOrderByKey == _T("04"))
		{
			rs.GetValue(_T("deptid"), szNewLev1);
			if (szOldLev1 != szNewLev1)
			{
				if (GrandAmt[sum_pos] + GrandAmt[last_pos] > 0)
				{
					//rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						tmpStr.Format(_T("%f"), GrandAmt[i]);
						szPos.Format(_T("s%d"), i+col_pos);
						rptPrevMark->SetValue(szPos, tmpStr);
						
						GrandAmt[i] = 0;
					}
				}
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
				if (rptGroup)
				{
					tmpStr.Format(_T("Kho\x61 %s"), szNewLev1);
					rptGroup->SetValue(_T("GroupName"), tmpStr);
				}
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptPrevMark = rptGroup;
				szOldLev1 = szNewLev1;
				nIdx = 1;
			}
		}

		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("docno")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("discharge_date")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("invoice_date")));

			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr  = data_name[i];

				rs.GetValue(tmpStr, nTmp);
				GrandAmt[i]+= nTmp;
				nTotalClass[i]+= nTmp;
				nTotal[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);

				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
	if(m_szOrderByKey == _T("04"))
	{
		if (GrandAmt[sum_pos] + GrandAmt[last_pos] > 0)
		{
			//rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				tmpStr.Format(_T("%f"), GrandAmt[i]);
				szPos.Format(_T("s%d"), i+col_pos);
				rptPrevMark->SetValue(szPos, tmpStr);
			}
		}
	}


	if (nTotalClass[sum_pos] + nTotalClass[last_pos] > 0)
	{
		//rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("\x43\x1ED9ng(%s)"), szOldIndex);
		rptPrevMark->SetValue(_T("Grand"), tmpStr);

		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotalClass[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptPrevMark->SetValue(szPos, tmpStr);
		}
	}

_tprintf(_T("\r\n4"));
	if (nTotal[sum_pos] + nTotal[last_pos] > 0)
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsuranceReceiptSummary"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);


	rpt.PrintPreview();
}
void CFMInsuranceReceiptSummary::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Nếu dữ liệu quá 65000 dòng, chương trình sẽ tự tách ra 1 sheet mới trong excel."));
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\BANGTONGHOPPHANTICHTONGTHUBAOHIEMYTE.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

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
		
		
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}
		
		rs.GetValue(_T("chindexname"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[3] > 0)
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
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("ttlamount"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("ttldiscount"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("ttlpatpaid"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("test_fee"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("pacs_fee"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("ctscan_fee"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("mri_fee"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("pet_fee"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("cyberknife_fee"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("ik90_fee"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("drug_fee"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("mat_fee"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("opt_fee"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("dm_fee"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);
	
		rs.GetValue(_T("food_fee"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);
	
		rs.GetValue(_T("blood_fee"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("bed_fee"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("other_fee"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);
	
		rs.GetValue(_T("thu_goidv"), nTemp);
		nGroupTotal[21] += nTemp;
		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);
		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[3] > 0)
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
	xls.Save(_T("Exports\\BANGTONGHOPPHANTICHTONGTHUBAOHIEMYTE2.xls"));
}

CString CFMInsuranceReceiptSummary::GetQueryString(){
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr, szView;
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
	if (nCount < 1000)
		szWhere.Format(_T(" and fac_cash_id in(%s) "), szReceiptStr);
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

	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDeptKey);

	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and chindex='II' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and chindex='I' "));
	}

	if (m_bWithoutGeneral)
		szWhere.AppendFormat(_T(" AND hfe_general_rank = 'Y'"));

	if(m_bServicePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));

	if (m_bSoldierWCard) szWhere.AppendFormat(_T(" AND OBJECTID=11"));

	szView = _T("HF_INSURANCEDIFFSUMMARY_VIEW");
	if (m_bHitechMachine)
		szView = _T("HF_HMINSURANCEDIFFSUMMARY_VIEW");
	szSQL.Format(_T(" SELECT pname, firstname, ") \
	_T("   docno,") \
	_T("   deptid,") \
	_T("   chindex,") \
	_T("   CASE WHEN chindex ='I' THEN cast('I. Bệnh nhân ngoại trú' as nvarchar2(128))") \
	_T("   ELSE cast('II. Bệnh nhân nội trú' as nvarchar2(128)) END as chindexname,") \
	_T("   SUM(ttl_amount)           AS ttlamount,") \
	_T("   SUM(ttl_discount)           AS ttldiscount,") \
	_T("   SUM(ttl_patpaid)           AS ttlpatpaid,") \
	_T("   SUM(test_fee)           AS test_fee,") \
	_T("   SUM(pacs_fee)           AS pacs_fee,") \
	_T("   SUM(ctscan_fee)         AS ctscan_fee,") \
	_T("   SUM(mri_fee)            AS mri_fee,") \
	_T("   SUM(pet_fee)            AS pet_fee,") \
	_T("   SUM(cyberknife_fee)     AS cyberknife_fee,") \
	_T("   SUM(ik90_fee)           AS ik90_fee,") \
	_T("   SUM(drug_fee)           AS drug_fee,") \
	_T("   SUM(mat_fee)            AS mat_fee,") \
	_T("   SUM(opt_fee)            AS opt_fee,") \
	_T("   SUM(food_fee)           AS food_fee,") \
	_T("   SUM(other_fee)          AS other_fee,") \
	_T("   SUM(hfe_packageamount)  AS thu_goidv,") \
	_T("   SUM(dm_fee)			   AS dm_fee,") \
	_T("   SUM(blood_fee+blood_fee1)	AS blood_fee,") \
	_T("   SUM(bed_fee)			   AS bed_fee,") \
	_T("   SUM(patpaid-co_payment) AS ttl_fee,") \
	_T("   SUM(co_payment)         AS co_payment,") \
	_T("   SUM(patpaid)            AS patpaid") \
	_T(" FROM %s ") \
	_T(" WHERE 1=1 %s ") \
	_T(" GROUP BY pname, firstname, ") \
	_T("   docno,") \
	_T("   deptid,") \
	_T("   discharge_date,") \
	_T("   invoice_date,") \
	_T("   chindex, ftype ") \
	_T(" ORDER BY chindex %s "), szView, szWhere, szOrderBy);
	return szSQL;
}
int CFMInsuranceReceiptSummary::OnListCheckAllIns()
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
int CFMInsuranceReceiptSummary::OnListUnCheckAllIns()
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
int CFMInsuranceReceiptSummary::OnListCheckAllSolder()
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

int CFMInsuranceReceiptSummary::OnListUnCheckAllSolder()
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
int CFMInsuranceReceiptSummary::OnListCheckAllInsSolder()
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

int CFMInsuranceReceiptSummary::OnListUnCheckAllInsSolder()
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

