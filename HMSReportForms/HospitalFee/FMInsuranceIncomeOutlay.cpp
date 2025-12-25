#include "stdafx.h"
#include "FMInsuranceIncomeOutlay.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceIncomeOutlay* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceIncomeOutlay* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceIncomeOutlay* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnStatusAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnDeptLoadData();
}
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceIncomeOutlay* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnOrderByAddNew();
}*/
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay *)pWnd)->OnObjectTypeLoadData();
}
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay *)pWnd)->OnObjectTypeSelendok();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceIncomeOutlay*)pWnd)->OnWithoutGeneralSelect();
}
static void _OnHitechMachineSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceIncomeOutlay*)pWnd)->OnHitechMachineSelect();
}
static void _OnDetailSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceIncomeOutlay*)pWnd)->OnDetailSelect();
}
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsuranceIncomeOutlay *pVw = (CFMInsuranceIncomeOutlay *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsuranceIncomeOutlay *pVw = (CFMInsuranceIncomeOutlay *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceIncomeOutlay *pVw = (CFMInsuranceIncomeOutlay *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceIncomeOutlay *pVw = (CFMInsuranceIncomeOutlay *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeOutlay*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceIncomeOutlay*)pWnd)->OnListDeleteItem();
} 
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMInsuranceIncomeOutlay*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static int _OnListCheckAllInvoiceFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListCheckAllInvoice();
	return 0;
}
static int _OnListCheckAllRefundFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListCheckAllRefund();
	return 0;
}

static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceIncomeOutlay*)pWnd)->OnSODSelect();
}

static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceIncomeOutlay*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}
static void _OnSoldierWCardSelectFnc(CWnd *pWnd)
{
	 ((CFMInsuranceIncomeOutlay*)pWnd)->OnSoldierWCardSelect();
}
static void _OnGoiDvSelectFnc(CWnd *pWnd)
{
	 ((CFMInsuranceIncomeOutlay*)pWnd)->OnGoiDvSelect();
}
static void _OnCreateDataSelectFnc(CWnd *pWnd)
{
	CFMInsuranceIncomeOutlay *pVw = (CFMInsuranceIncomeOutlay *)pWnd;
	pVw->OnCreateDataSelect();
}
static void _OnABZoneSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceIncomeOutlay*)pWnd)->OnABZoneSelect();
}


CFMInsuranceIncomeOutlay::CFMInsuranceIncomeOutlay(CWnd *pWnd)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMInsuranceIncomeOutlay::~CFMInsuranceIncomeOutlay()
{
}
void CFMInsuranceIncomeOutlay::OnCreateComponents()
{	
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 95, 55);
	m_wndYear.Create(this,105, 30, 235, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 248, 30, 338, 55);
	m_wndReportPeriod.Create(this,350, 29, 480, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 95, 85);
	m_wndFromDate.Create(this,105, 60, 235, 85); 
	m_wndToDate.Create(this,350, 60, 480, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 248, 60, 338, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 95, 115);
	m_wndClerk.Create(this,105, 90, 235, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 248, 90, 338, 115);
	m_wndStatus.Create(this,350, 90, 480, 115); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 95, 145);
	m_wndDept.Create(this,105, 120, 235, 145); 
	m_wndOrderBy.Create(this,0, 505, 0, 505); 
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 248, 121, 338, 146);
	m_wndObjectType.Create(this,350, 119, 480, 144); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 0, 505, 0, 505);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 163, 505, 260, 530);
	m_wndDetail.Create(this, _T("Detail"), 91, 505, 157, 530);
	m_wndGoiDv.Create(this, _T("Goi Dv"), 387, 505, 480, 530);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 541, 85, 566);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 541, 170, 566);
	m_wndPrint.Create(this, _T("&Print"), 230, 541, 310, 566);
	m_wndExport.Create(this, _T("Export XLS"), 315, 541, 395, 566);
	m_wndList.Create(this,12, 150, 480, 500); 
	m_wndSOD.Create(this, _T("SOD"), 12, 505, 85, 530);
	m_wndSoldierWCard.Create(this, _T("Soldier w Card"), 266, 505, 382, 530);
	m_wndCreateData.Create(this, _T("Create Data"), 400, 541, 480, 566);
	m_wndCreateData.EnableWindow(FALSE);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 95, 55);
	m_wndYear.Create(this,105, 30, 235, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 248, 30, 338, 55);
	m_wndReportPeriod.Create(this,350, 29, 480, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 95, 85);
	m_wndFromDate.Create(this,105, 60, 235, 85); 
	m_wndToDate.Create(this,350, 60, 480, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 248, 60, 338, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 95, 115);
	m_wndClerk.Create(this,105, 90, 235, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 248, 90, 338, 115);
	m_wndStatus.Create(this,350, 90, 480, 115); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 95, 145);
	m_wndDept.Create(this,105, 120, 235, 145); 
	m_wndOrderBy.Create(this,0, 505, 0, 505); 
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 248, 121, 338, 146);
	m_wndObjectType.Create(this,350, 119, 480, 144); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 0, 505, 0, 505);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 163, 473, 260, 498);
	m_wndDetail.Create(this, _T("Detail"), 91, 473, 157, 498);
	m_wndGoiDv.Create(this, _T("Goi Dv"), 387, 473, 480, 498);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 541, 85, 566);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 541, 170, 566);
	m_wndPrint.Create(this, _T("&Print"), 230, 541, 310, 566);
	m_wndExport.Create(this, _T("Export XLS"), 315, 541, 395, 566);
	m_wndList.Create(this,12, 150, 480, 467); 
	m_wndSOD.Create(this, _T("SOD"), 12, 473, 85, 498);
	m_wndSoldierWCard.Create(this, _T("Soldier w Card"), 266, 473, 382, 498);
	m_wndCreateData.Create(this, _T("Create Data"), 400, 541, 480, 566);
	m_wndABZone.Create(this, _T("AB Zone"), 13, 505, 86, 530);
	m_wndCreateData.EnableWindow(FALSE);
}
void CFMInsuranceIncomeOutlay::OnInitializeComponents(){
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
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 150);
	m_wndList.SetCheckBox(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMInsuranceIncomeOutlay::OnSetWindowEvents(){
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
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndOrderBy.SetEvent(WE_SELENDOK, _OnOrderBySelendokFnc);
	//m_wndOrderBy.SetEvent(WE_SETFOCUS, _OnOrderBySetfocusFnc);
	//m_wndOrderBy.SetEvent(WE_KILLFOCUS, _OnOrderByKillfocusFnc);
	m_wndOrderBy.SetEvent(WE_SELCHANGE, _OnOrderBySelectChangeFnc);
	m_wndOrderBy.SetEvent(WE_LOADDATA, _OnOrderByLoadDataFnc);
	m_wndObjectType.SetEvent(WE_LOADDATA, _OnObjectTypeLoadDataFnc);
	m_wndObjectType.SetEvent(WE_SELENDOK, _OnObjectTypeSelendokFnc);
	//m_wndOrderBy.SetEvent(WE_ADDNEW, _OnOrderByAddNewFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndHitechMachine.SetEvent(WE_CLICK, _OnHitechMachineSelectFnc);
	m_wndDetail.SetEvent(WE_CLICK, _OnDetailSelectFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndSoldierWCard.SetEvent(WE_CLICK, _OnSoldierWCardSelectFnc);
	m_wndGoiDv.SetEvent(WE_CLICK, _OnGoiDvSelectFnc);
	m_wndCreateData.SetEvent(WE_CLICK, _OnCreateDataSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);

	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(3, _T("Check All Fee Invoice"), _OnListCheckAllInvoiceFnc);
	m_wndList.AddEvent(4, _T("Check All Fee Refund"), _OnListCheckAllRefundFnc);

	m_wndList.AddEvent(5, _T("Chọn phiếu thu/chi BH"), _OnListCheckAllInsInvoiceFnc);
	m_wndList.AddEvent(6, _T("Bỏ Chọn phiếu thu/chi BH"), _OnListUnCheckAllInsInvoiceFnc);	
	m_wndList.AddEvent(7, _T("Chọn phiếu thu/chi Quân"), _OnListCheckAllSolderFnc);
	m_wndList.AddEvent(8, _T("Bỏ Chọn phiếu thu/chi Quân"), _OnListUnCheckAllSolderFnc);
	m_wndList.AddEvent(9, _T("Chọn phiếu thu/chi BH Quân"), _OnListCheckAllInsSolderFnc);
	m_wndList.AddEvent(10, _T("Bỏ Chọn phiếu thu/chi BH Quân"), _OnListUnCheckAllInsSolderFnc);
	m_wndList.AddEvent(11, _T("Search"), _OnListSearchItemFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
    UpdateData(FALSE);

}
void CFMInsuranceIncomeOutlay::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndObjectType.GetDlgCtrlID(), m_szObjectTypeKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndDetail.GetDlgCtrlID(), m_bDetail);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndSoldierWCard.GetDlgCtrlID(), m_bSoldierWCard);
	DDX_Check(pDX, m_wndGoiDv.GetDlgCtrlID(), m_bGoiDv);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);

}
void CFMInsuranceIncomeOutlay::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_szObjectTypeKey = _T("01");
	m_szDeptKey.Empty();
	m_bSOD = FALSE;
	m_bSoldierWCard=FALSE;
	m_bGoiDv=FALSE;
	m_bABZone=FALSE;
}

int CFMInsuranceIncomeOutlay::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
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

/*void CFMInsuranceIncomeOutlay::OnYearChange(){
	
} */
/*void CFMInsuranceIncomeOutlay::OnYearSetfocus(){
	
} */
/*void CFMInsuranceIncomeOutlay::OnYearKillfocus(){
	
} */
int CFMInsuranceIncomeOutlay::OnYearCheckValue(){
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
 
void CFMInsuranceIncomeOutlay::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsuranceIncomeOutlay::OnABZoneSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
 
void CFMInsuranceIncomeOutlay::OnReportPeriodSelendok(){
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

/*void CFMInsuranceIncomeOutlay::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceIncomeOutlay::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceIncomeOutlay::OnReportPeriodLoadData(){
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

/*void CFMInsuranceIncomeOutlay::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceIncomeOutlay::OnFromDateChange(){
	
} */
/*void CFMInsuranceIncomeOutlay::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceIncomeOutlay::OnFromDateKillfocus(){
	
} */
int CFMInsuranceIncomeOutlay::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsuranceIncomeOutlay::OnToDateChange(){
	
} */
/*void CFMInsuranceIncomeOutlay::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceIncomeOutlay::OnToDateKillfocus(){
	
} */
int CFMInsuranceIncomeOutlay::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsuranceIncomeOutlay::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsuranceIncomeOutlay::OnClerkSelendok(){
	 
}

/*void CFMInsuranceIncomeOutlay::OnClerkSetfocus(){
	
}*/
/*void CFMInsuranceIncomeOutlay::OnClerkKillfocus(){
	
}*/
long CFMInsuranceIncomeOutlay::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsuranceIncomeOutlay::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceIncomeOutlay::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsuranceIncomeOutlay::OnSoldierWCardSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
 
void CFMInsuranceIncomeOutlay::OnStatusSelendok(){
	 OnListLoadData();
}
int CFMInsuranceIncomeOutlay::OnListCheckAllTYC()
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
int CFMInsuranceIncomeOutlay::OnListCheckAllPTTYC()
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
int CFMInsuranceIncomeOutlay::OnListCheckAllInvoice()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PT"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
int CFMInsuranceIncomeOutlay::OnListCheckAllRefund()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PC"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}
void CFMInsuranceIncomeOutlay::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}
void CFMInsuranceIncomeOutlay::OnSODSelect(){
	OnListLoadData();
}
void CFMInsuranceIncomeOutlay::OnGoiDvSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
void CFMInsuranceIncomeOutlay::OnCreateDataSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL,szSQL1, szSQL2, szWhere, szWhere4, szObjectID, szReceiptStr;	

	szWhere4.Format(_T(" and FAC_LOCKED='Y' "));

	if(m_szStatusKey == _T("01"))
	{
		szWhere4.AppendFormat(_T(" AND fac_invoicedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}
	else if(m_szStatusKey == _T("02"))
	{
		szWhere4.AppendFormat(_T(" and FAC_APPROVEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere4.AppendFormat(_T(" and FAC_APPROVED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	} 
	else if(m_szStatusKey == _T("03") || m_szStatusKey.IsEmpty())
	{
		szWhere4.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere4.AppendFormat(_T(" and FAC_POSTED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}	
	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC')"));
	else if (m_szObjectTypeKey == _T("BH"))		
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG')"));

	else if (m_szObjectTypeKey == _T("BH-NT+BH-NG"))		
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));

	else if (m_szObjectTypeKey == _T("BH-NT"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT')"));

	else if (m_szObjectTypeKey == _T("BH-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NG')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NT+BHQUAN-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT','BHQUAN-NG')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NT"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NG')"));

	else if (m_bSoldierWCard)
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));
	else 
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s ORDER BY fac_cash_id"), szWhere4);
	rs.ExecSQL(szSQL);

	OnDeleteDataBeforeInsert();

	szSQL2.Format(_T("Insert into tmp_fa_cash_D11 (SELECT fac_cash_id as idx, '%s' as userid FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s)"), pMF->m_szUser, szWhere4);	
	int ret = pMF->ExecSQL(szSQL2);
	_msg(_T("Đã thực hiện insert %ld bản tin"), ret);	
} 


/*void CFMInsuranceIncomeOutlay::OnStatusSetfocus(){
	
}*/
/*void CFMInsuranceIncomeOutlay::OnStatusKillfocus(){
	
}*/
long CFMInsuranceIncomeOutlay::OnStatusLoadData()
{
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

long CFMInsuranceIncomeOutlay::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
	 szWhere.Format(_T(" and sd_id = '%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;	
}

/*void CFMInsuranceIncomeOutlay::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceIncomeOutlay::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsuranceIncomeOutlay::OnOrderBySelendok(){
	 
}

/*void CFMInsuranceIncomeOutlay::OnOrderBySetfocus(){
	
}*/
/*void CFMInsuranceIncomeOutlay::OnOrderByKillfocus(){
	
}*/
long CFMInsuranceIncomeOutlay::OnOrderByLoadData(){
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

long CFMInsuranceIncomeOutlay::OnObjectTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndObjectType.AddItems(_T("BH"), _T("Tất cả đối tượng Bảo hiểm"), NULL);
	m_wndObjectType.AddItems(_T("BH-NT+BH-NG"), _T("Bảo hiểm khác nội trú, ngoại trú"), NULL);
	m_wndObjectType.AddItems(_T("BH-NT"), _T("Bảo hiểm khác nội trú"), NULL);
	m_wndObjectType.AddItems(_T("BH-NG"), _T("Bảo hiểm khác ngoại trú"), NULL);
	m_wndObjectType.AddItems(_T("BHQUAN-NT+BHQUAN-NG"), _T("Bảo hiểm quân nội trú, ngoại trú"), NULL);
	m_wndObjectType.AddItems(_T("BHQUAN-NT"), _T("Bảo hiểm quân nội trú"), NULL);
	m_wndObjectType.AddItems(_T("BHQUAN-NG"), _T("Bảo hiểm quân ngoại trú"), NULL);
	return 0;
}

void CFMInsuranceIncomeOutlay::OnObjectTypeSelendok()
{
	OnListLoadData();	
}

/*void CFMInsuranceIncomeOutlay::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsuranceIncomeOutlay::OnWithoutGeneralSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

	void CFMInsuranceIncomeOutlay::OnHitechMachineSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMInsuranceIncomeOutlay::OnDetailSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsuranceIncomeOutlay::OnMarkAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
}
 
void CFMInsuranceIncomeOutlay::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}
 
void CFMInsuranceIncomeOutlay::OnPrintSelect()
{
	//_msg(_T("%s"), GetQueryString());
	//return;
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CStringArray arrFeeType;
	CString szSQL, tmpStr, szReportName, szDate, szPos;
	long double nTotal[6];
	for (int i = 0; i < 6; i++)
	{
		nTotal[i] = 0;
	}
	if (m_bHitechMachine)
	{
		if (m_bDetail)
			szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHI-MAYGIATRICAODICHVUYTE-THEODANHMUC.RPT");
		else
			szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHI-MAYGIATRICAODICHVUYTE-THEOKHOA.RPT");
	}
	else
	{
		if (m_bDetail)
			szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHIDICHVUYTE-THEODANHMUC.RPT");
		else
			szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHIDICHVUYTE-THEOKHOA.RPT");
	}
	if (m_szObjectTypeKey == _T("02"))
		szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHIDICHVUYTE-THEOKHOA-BH.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	arrFeeType.Add(_T("Ti\x1EC1n kh\xE1m"));
	arrFeeType.Add(_T("Ti\x1EC1n gi\x1B0\x1EDDng"));
	arrFeeType.Add(_T("Ti\x1EC1n PTTT"));
	arrFeeType.Add(_T("Ti\x1EC1n \x58N"));
	arrFeeType.Add(_T("Ti\x1EC1n thu\x1ED1\x63"));
	arrFeeType.Add(_T("Ti\x1EC1n v\x1EADt t\x1B0"));
	arrFeeType.Add(_T("Ti\x1EC1n \x103n"));
	arrFeeType.Add(_T("Thu kh\xE1\x63"));
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			if (m_bDetail)
				rptDetail->SetValue(_T("2"), arrFeeType.GetAt(str2int(rs.GetValue(_T("nhom_phi")))));
			else
				rptDetail->SetValue(_T("2"), rs.GetValue(_T("khoa_thuchien")));
			rs.GetValue(_T("tien_nt"), nTmp);
			nTotal[0]+= nTmp;
			rptDetail->SetValue(_T("3"), double2str(nTmp));
			rs.GetValue(_T("tien_ngt"), nTmp);
			nTotal[1]+= nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("tong_tien"), nTmp);
			nTotal[2]+= nTmp;
			rptDetail->SetValue(_T("5"), double2str(nTmp));
			rs.GetValue(_T("qs_nt"), nTmp);
			nTotal[3]+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("qs_ngt"), nTmp);
			nTotal[4]+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("tong_qs"), nTmp);
			nTotal[5]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nTotal[5] > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptDetail)
		{
			for (int i = 0 ; i < 6; i++)
			{
				szPos.Format(_T("s%d"), i+3);
				tmpStr.Format(_T("%f"), nTotal[i]);
				rptDetail->SetValue(szPos, tmpStr);
			}
		}
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CFMInsuranceIncomeOutlay::OnExportSelect()
{
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export OutLay Report"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export Patient List"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportReport();
			break;
		case 2:
			OnExportPatientList();
			break;
	}
}

}
void CFMInsuranceIncomeOutlay::OnExportReport()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	double nTotal[6], nTmp = 0;
	for (int i = 0; i < 6; i++)
	{
		nTotal[i] = 0;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 16);
	xls.SetColumnWidth(3, 16);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(6, 16);
	xls.SetColumnWidth(7, 16);

	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 2, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	if(m_szObjectTypeKey == _T("01"))
		xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: \x44\x1ECA\x43H V\x1EE4 Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	else if(m_szObjectTypeKey == _T("02"))
		xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: \x42\x1EA2O HI\x1EC2M Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	else if(m_szObjectTypeKey == _T("03"))
		xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: QU\xC2N - \x43H\xCDNH S\xC1\x43H Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	else
		xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: T\x1EA4T \x43\x1EA2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(0, 0, _T("M\x1EABu \x62i\x1EC3u \x31\x36"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O THU \x43HI \x44\x1ECA\x43H V\x1EE4 Y T\x1EBE TH\x45O KHO\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);
	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("T\x1ED5ng h\x1EE3p ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 7, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 7, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 0, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 1, _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("T\x1ED5ng h\x1EE3p qu\xE2n s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 1);
	xls.SetMerge(1, 1, 0, 1);
	xls.SetMerge(2, 2, 0, 1);
	xls.SetMerge(3, 3, 0, 7);
	xls.SetMerge(4, 4, 0, 7);
	xls.SetMerge(5, 5, 0, 7);
	xls.SetMerge(6, 7, 0, 0);
	xls.SetMerge(6, 7, 1, 1);
	xls.SetMerge(6, 6, 2, 4);
	xls.SetMerge(0, 0, 4, 7);
	xls.SetMerge(1, 1, 4, 7);
	xls.SetMerge(6, 6, 5, 7);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		if(m_bDetail)
			rs.GetValue(_T("nhom_phi"), tmpStr);
		else
			rs.GetValue(_T("khoa_thuchien"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tien_nt"), nTmp);
		nTotal[0]+= nTmp;
		xls.SetCellText(nCol+2, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tien_ngt"), nTmp);
		nTotal[1]+= nTmp;
		xls.SetCellText(nCol+3, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tong_tien"), nTmp);
		nTotal[2]+= nTmp;
		xls.SetCellText(nCol+4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("qs_nt"), nTmp);
		nTotal[3]+= nTmp;
		xls.SetCellText(nCol+5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("qs_ngt"), nTmp);
		nTotal[4]+= nTmp;
		xls.SetCellText(nCol+6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tong_qs"), nTmp);
		nTotal[5]+= nTmp;
		xls.SetCellText(nCol+7, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	if (nTotal[5] > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), FMT_TEXT, true);
		for (int i = 0 ; i < 6; i++)
		{
			xls.SetCellText(nCol+2+i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
	}

	nRow++;
	nRow++;
	nRow++;

	tmpStr = pMF->GetSysDate();
	tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true);

	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("NG\x1AF\x1EDCI L\x1EACP \x42\x1EA2NG"), FMT_TEXT, true);
	xls.SetCellText(nCol+3, nRow, _T("TR\x1AF\x1EDENG PH\xD2NG T\xC0I \x43H\xCDNH"), FMT_TEXT, true);
	xls.SetCellText(nCol+6, nRow, _T("GI\xC1M \x110\x1ED0\x43 \x42\x1EC6NH VI\x1EC6N"), FMT_TEXT, true);

	EndWaitCursor();
	if(m_szObjectTypeKey == _T("01"))
		xls.Save(_T("Exports\\BAOCAOTHUCHIDICHVUYTE_DV.xls"));
	else if(m_szObjectTypeKey == _T("02"))
		xls.Save(_T("Exports\\BAOCAOTHUCHIDICHVUYTE_BH.xls"));
	else if(m_szObjectTypeKey == _T("03"))
		xls.Save(_T("Exports\\BAOCAOTHUCHIDICHVUYTE_CS.xls"));
	else
		xls.Save(_T("Exports\\BAOCAOTHUCHIDICHVUYTE.xls"));
}

void CFMInsuranceIncomeOutlay::OnExportPatientList()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_THEOKHOA_BAOHIEM.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_check();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("tien_ngt"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("tien_nt"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("tong_tien"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);			
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(3, nRow, _T("T\x1ED5ng \x43\x1ED9ng"), FMT_TEXT, true);		
		xls.SetCellText(4, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_THEOKHOA_BAOHIEM2.xls"));
}

 
void CFMInsuranceIncomeOutlay::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

}
 
void CFMInsuranceIncomeOutlay::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMInsuranceIncomeOutlay::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMInsuranceIncomeOutlay::OnListLoadData()
{
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere4, szObjectID, szReceiptStr;	

	szWhere4.Format(_T(" and FAC_LOCKED='Y' "));

	if(m_szStatusKey == _T("01"))
	{
		szWhere4.AppendFormat(_T(" AND fac_invoicedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}

	}
	else if(m_szStatusKey == _T("02"))
	{
		szWhere4.AppendFormat(_T(" and FAC_APPROVEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere4.AppendFormat(_T(" and FAC_APPROVED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	} 
	else if(m_szStatusKey == _T("03") || m_szStatusKey.IsEmpty())
	{
		szWhere4.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
		szWhere4.AppendFormat(_T(" and FAC_POSTED ='Y' "));
		if(!m_szClerkKey.IsEmpty())
		{
			szWhere4.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}
	/*if (m_szObjectTypeKey == _T("01"))
		szObjectID = _T("DV");
	else if (m_szObjectTypeKey == _T("02"))
		szObjectID = _T("BH");
	else if (m_szObjectTypeKey == _T("03"))
		szObjectID = _T("QU");
	if (!szObjectID.IsEmpty())
		szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = '%s'"), szObjectID);*/
	if (m_bSOD)
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC')"));
	else if (m_bABZone)
	{
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB')"));
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NGAB','BH-NTAB') OR (fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG') and FAC_POSTED ='Y' AND fac_invoicetype IN('P','R') AND fac_user_id in (select su_userid from sys_user where su_deptid='AB' and su_groupid='F'))"));
		szWhere4.AppendFormat(_T(" and FAC_POSTEDDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate, m_szToDate);
	}
	else if (m_szObjectTypeKey == _T("BH"))
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','THE-BH','BH-NGAB','BH-NTAB')"));

	else if (m_szObjectTypeKey == _T("BH-NT+BH-NG"))		
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));

	else if (m_szObjectTypeKey == _T("BH-NT"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT')"));

	else if (m_szObjectTypeKey == _T("BH-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NG')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NT+BHQUAN-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT','BHQUAN-NG')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NT"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT')"));

	else if (m_szObjectTypeKey == _T("BHQUAN-NG"))
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NG')"));

	else if (m_bSoldierWCard)
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG')"));
	else 
		szWhere4.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','QUAN-NT', 'QUAN-NG', 'THE-BH', 'BH-NGAB','BH-NTAB')"));


	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s ORDER BY fac_cash_id"), szWhere4);
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

		m_wndList.AddItems
			(
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
}

//CString CFMInsuranceIncomeOutlay::GetQueryString(){
//	CString szSQL, szWhere, szInnerWhere;
//	CString szReceiptStr;
//	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
//	{
//		if (m_wndList.GetCheck(i))
//		{
//			if (!szReceiptStr.IsEmpty())
//				szReceiptStr += _T(", ");
//			szReceiptStr.AppendFormat(_T(" %s"), m_wndList.GetItemText(i, 0));
//		}
//	}
//
//	//szWhere.Format(_T(" AND hfe_cash_id in(%s)"), szReceiptStr);
//	if (!m_szDeptKey.IsEmpty())
//		szWhere.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
//	if (m_bHitechMachine)
//		szWhere.AppendFormat(_T(" AND hfl_hitechmachine = 'Y'"));
//	szWhere.AppendFormat(_T(" AND NVL(hfe_category, 'N') NOT IN( 'Y' )"));
//	if (m_bDetail)
//	{
//		szSQL.Format(_T(" SELECT tbl_cost.nhom_phi,  tien_nt, tien_ngt, tong_tien, qs_nt, qs_ngt, tong_qs") \
//		_T(" FROM      (SELECT nhom_phi, ") \
//		_T("                   SUM(CASE WHEN hfe_class <> 'I' THEN 1 ") \
//		_T("                       ELSE 0 ") \
//		_T("                       END) qs_ngt, ") \
//		_T("                   SUM(CASE WHEN hfe_class = 'I' THEN 1 ") \
//		_T("                       ELSE 0 ") \
//		_T("                       END) qs_nt, ") \
//		_T("				   count(*) tong_qs") \
//		_T("            FROM   (SELECT    DISTINCT tbl0.hfe_class, ") \
//		_T("                                       nhom_phi, ") \
//		_T("                                       tbl0.hfe_docno ") \
//		_T("                    FROM      (SELECT    f.hfe_invoiceno, ") \
//		_T("                                         iv.hfe_class, ") \
//		_T("                                         f.hfe_deptid khoa_order, ") \
//		_T("										 f.hfe_itemid,") \
//		_T("                                         CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
//		_T("                                         CASE WHEN f.hfe_type = 'E' THEN 0 ELSE CASE WHEN f.hfe_type = 'B' THEN 1 ELSE CASE WHEN f.hfe_type = 'O' THEN 2 ELSE CASE WHEN f.hfe_type IN ('P', 'T') THEN 3 ELSE CASE WHEN f.hfe_type = 'F' THEN 6 ELSE 7 END END END END END nhom_phi, ") \
//		_T("                                         f.hfe_docno, f.hfe_category ") \
//		_T("                               FROM      hms_fee f") \
//		_T("                               LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
//		_T("                               LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
//		_T("							   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
//		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ('D', 'M', 'R') AND f.hfe_status = 'P'") \
//		_T("                               UNION ALL ") \
//		_T("                               SELECT    f.hfe_invoiceno, ") \
//		_T("                                         iv.hfe_class, ") \
//		_T("                                         f.hfe_deptid khoa_order, ") \
//		_T("									     f.hfe_itemid,") \
//		_T("                                         Cast(Decode(product_org_id, 'PM', 'KD', ") \
//		_T("                                                           'MA', 'C10', 'GL') AS NVARCHAR2(3)) khoa_thuchien, ") \
//		_T("                                         Decode('PM', product_org_id, 4, ") \
//		_T("                                                           5) nhom_phi, ") \
//		_T("                                         f.hfe_docno, f.hfe_category ") \
//		_T("                               FROM      hms_fee f") \
//		_T("                               LEFT JOIN m_productitem_view_vp ON ( product_item_id = hfe_itemid ) ") \
//		_T("							   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
//		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_status = 'P' AND f.hfe_category in ('N','BQP') ") \
//		_T("							) tbl0 ") \
//		_T("					LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl0.hfe_itemid as nvarchar2(15))) ") \
//		_T("                    WHERE     1=1 %s) tbl_distinct ") \
//		_T("            GROUP  BY nhom_phi ") \
//		_T("            ORDER  BY nhom_phi) tbl_qs ") \
//		_T(" RIGHT JOIN (SELECT     nhom_phi, ") \
//		_T("                       SUM(tien_ngt) tien_ngt, ") \
//		_T("                       SUM(tien_nt) tien_nt, ") \
//		_T("                       SUM(tong_tien) tong_tien ") \
//		_T("            FROM       ") \
//		_T("            (SELECT    f.hfe_docno, ") \
//		_T("                                 f.hfe_invoiceno, ") \
//		_T("                                 CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
//		_T("                                 CASE WHEN f.hfe_type = 'E' THEN 0 ELSE CASE WHEN f.hfe_type = 'B' THEN 1 ELSE CASE WHEN f.hfe_type = 'O' THEN 2 ELSE CASE WHEN f.hfe_type IN ('P', 'T') THEN 3 ELSE CASE WHEN f.hfe_type = 'F' THEN 6 ELSE 7 END END END END END nhom_phi, ") \
//		_T("								 f.hfe_itemid,") \
//		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_nt, ") \
//		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_ngt, ") \
//		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
//		_T("                       FROM      hms_fee f") \
//		_T("                       LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
//		_T("                       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
//		_T("                       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
//		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ( 'D', 'M', 'R' ) AND f.hfe_status = 'P' AND f.hfe_type <> 'V'") \
//		_T("					   UNION ALL") \
//		_T("					   SELECT    f.hfe_docno, ") \
//		_T("                                 f.hfe_invoiceno, ") \
//		_T("                                 Cast(Decode('PM', mp_org_id, 'KD', ") \
//		_T("                                                           'C10') AS NVARCHAR2(3)) khoa_thuchien, ") \
//		_T("                                 Decode('PM', mp_org_id, 4, ") \
//		_T("                                                           5) nhom_phi, ") \
//		_T("								 f.hfe_itemid,") \
//		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_nt, ") \
//		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_ngt, ") \
//		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
//		_T("                       FROM      hms_fee f ") \
//		_T("                       LEFT JOIN m_product_item ON ( mpi_product_item_id = hfe_itemid ) ") \
//		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
//		_T("                       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
//		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_category in ('N','BQP') AND f.hfe_status = 'P' AND f.hfe_type <> 'V' ") \
//		_T("					) tbl1  ") \
//		_T("			LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl1.hfe_itemid as nvarchar2(15))) ") \
//		_T("            WHERE      1=1 %s ") \
//		_T("            GROUP      BY nhom_phi ") \
//		_T("            ORDER      BY nhom_phi) tbl_cost ON ( tbl_qs.nhom_phi = tbl_cost.nhom_phi) "), szReceiptStr, szReceiptStr, szWhere, szReceiptStr, szReceiptStr, szWhere);
//	}
//	else
//	{
//		szSQL.Format(_T(" SELECT tbl_cost.khoa_thuchien,  tien_nt, tien_ngt, tong_tien, qs_nt, qs_ngt, tong_qs") \
//		_T(" FROM      (SELECT khoa_thuchien, ") \
//		_T("                   SUM(CASE WHEN hfe_class <> 'I' THEN 1 ") \
//		_T("                       ELSE 0 ") \
//		_T("                       END) qs_ngt, ") \
//		_T("                   SUM(CASE WHEN hfe_class = 'I' THEN 1 ") \
//		_T("                       ELSE 0 ") \
//		_T("                       END) qs_nt, ") \
//		_T("				   count(*) tong_qs") \
//		_T("            FROM   (SELECT    DISTINCT tbl0.hfe_class, ") \
//		_T("                                       khoa_thuchien, ") \
//		_T("                                       tbl0.hfe_docno ") \
//		_T("                    FROM      (SELECT    f.hfe_invoiceno, ") \
//		_T("                                         iv.hfe_class, ") \
//		_T("                                         f.hfe_deptid khoa_order, ") \
//		_T("										 f.hfe_itemid,") \
//		_T("                               CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
//		_T("                                         f.hfe_docno, f.hfe_category ") \
//		_T("                               FROM      hms_fee f") \
//		_T("                               LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
//		_T("                               LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
//		_T("							   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno)") \
//		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ('D', 'M', 'R') AND f.hfe_status = 'P' ") \
//		_T("                               UNION ALL ") \
//		_T("                               SELECT    f.hfe_invoiceno, ") \
//		_T("                                         iv.hfe_class, ") \
//		_T("                                         f.hfe_deptid khoa_order, ") \
//		_T("									     f.hfe_itemid,") \
//		_T("                                         Cast(Decode(product_org_id, 'PM', 'KD', ") \
//		_T("                                                           'MA', 'C10', 'GL') AS NVARCHAR2(3)) khoa_thuchien, ") \
//		_T("                                         f.hfe_docno, f.hfe_category ") \
//		_T("                               FROM      hms_fee f") \
//		_T("                               LEFT JOIN m_productitem_view_vp ON ( product_item_id = hfe_itemid ) ") \
//		_T("							   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno)") \
//		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_category in ('N','BQP') AND f.hfe_status = 'P'  ") \
//		_T("							) tbl0 ") \
//		_T("					LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl0.hfe_itemid as nvarchar2(15))) ") \
//		_T("                    WHERE     1=1 %s) tbl_distinct ") \
//		_T("            GROUP  BY khoa_thuchien ") \
//		_T("            ORDER  BY khoa_thuchien) tbl_qs ") \
//		_T(" RIGHT JOIN (SELECT     khoa_thuchien, ") \
//		_T("                       SUM(tien_ngt) tien_ngt, ") \
//		_T("                       SUM(tien_nt) tien_nt, ") \
//		_T("                       SUM(tong_tien) tong_tien ") \
//		_T("            FROM       ") \
//		_T("            (SELECT    f.hfe_docno, ") \
//		_T("                                 f.hfe_invoiceno, ") \
//		_T("                                 CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
//		_T("								 f.hfe_itemid,") \
//		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_nt, ") \
//		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_ngt, ") \
//		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
//		_T("                       FROM      hms_fee f") \
//		_T("                       LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
//		_T("                       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
//		_T("					   LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno)") \
//		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ( 'D', 'M', 'R' ) AND f.hfe_status = 'P' AND f.hfe_type <> 'V'") \
//		_T("					   UNION ALL") \
//		_T("					   SELECT    f.hfe_docno, ") \
//		_T("                                 f.hfe_invoiceno, ") \
//		_T("                                 Cast(Decode(mp_org_id, 'PM', 'KD', ") \
//		_T("                                                        'MA', 'C10', ") \
//		_T("                                                        'GL') AS NVARCHAR2(15)) khoa_thuchien, ") \
//		_T("								 f.hfe_itemid,") \
//		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_nt, ") \
//		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN hfe_cost ") \
//		_T("                                 ELSE 0 ") \
//		_T("                                 END tien_ngt, ") \
//		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
//		_T("                       FROM      hms_fee f ") \
//		_T("                       LEFT JOIN m_product_item ON ( mpi_product_item_id = hfe_itemid ) ") \
//		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
//		_T("					   LEFT JOIN hms_fee_invoice_view_v2 iv ON (iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno)") \
//		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_category in ('N','BQP') AND f.hfe_status = 'P' AND f.hfe_type <> 'V'") \
//		_T("			) tbl1 ") \
//		_T("			LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl1.hfe_itemid as nvarchar2(15))) ") \
//		_T("            WHERE      1=1 %s ") \
//		_T("            GROUP      BY khoa_thuchien ") \
//		_T("            ORDER      BY khoa_thuchien) tbl_cost ON ( tbl_qs.khoa_thuchien = tbl_cost.khoa_thuchien) "), szReceiptStr, szReceiptStr, szWhere, szReceiptStr, szReceiptStr, szWhere);
//	}
//	return szSQL;
//}
CString CFMInsuranceIncomeOutlay::GetQueryString()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szWhere2, szWhere3, szWhere4,szWhere5, szReceiptStr;
	CString szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12;
	CString szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20,szSQL21,szSQL22,szSQL23,szSQL24;
	CRecord rs(&pMF->m_db);
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
	//_msg(_T("Tổng số phiếu thu chi = %d"), i);
	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));
	if (nCount <1000)
		szWhere.Format(_T(" AND iv.hfe_cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" iv.hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" iv.hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}
		//szWhere4 = m_szWhere;	
		//szWhere.AppendFormat(_T(" AND iv.hfe_cash_id in(select IDX from tmp_fa_cash_D11 where USERID='%s') "),pMF->m_szUser);

	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if (m_bHitechMachine)
		szWhere2.AppendFormat(_T(" AND hfl_hitechmachine = 'Y'"));
		
	if (m_bSoldierWCard)
		szWhere3.AppendFormat(_T(" AND iv.HFE_OBJECTID=11"));
	if (m_bGoiDv)
		szWhere5.AppendFormat(_T(" AND hfl_feeid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')"));
	/*if (m_bDetail)		
	{
		szSQL.Format(_T(" SELECT tbl_cost.nhom_phi,  tien_nt, tien_ngt, tong_tien, qs_nt, qs_ngt, tong_qs") \
		_T(" FROM      (SELECT nhom_phi, ") \
		_T("                   SUM(CASE WHEN hfe_class <> 'I' THEN 1 ") \
		_T("                       ELSE 0 ") \
		_T("                       END) qs_ngt, ") \
		_T("                   SUM(CASE WHEN hfe_class = 'I' THEN 1 ") \
		_T("                       ELSE 0 ") \
		_T("                       END) qs_nt, ") \
		_T("				   count(*) tong_qs") \
		_T("            FROM   (SELECT    DISTINCT tbl0.hfe_class, ") \
		_T("                                       nhom_phi, ") \
		_T("                                       tbl0.hfe_docno ") \
		_T("                    FROM      (SELECT    f.hfe_invoiceno, ") \
		_T("                                         iv.hfe_class, ") \
		_T("                                         f.hfe_deptid khoa_order, ") \
		_T("										 f.hfe_itemid,") \
		_T("                                         CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
		_T("                                         CASE WHEN f.hfe_type = 'E' THEN 0 ELSE CASE WHEN f.hfe_type = 'B' THEN 1 ELSE CASE WHEN f.hfe_type = 'O' THEN 2 ELSE CASE WHEN f.hfe_type IN ('P', 'T') THEN 3 ELSE CASE WHEN f.hfe_type = 'F' THEN 6 ELSE 7 END END END END END nhom_phi, ") \
		_T("                                         f.hfe_docno, f.hfe_category ") \
		_T("                               FROM      hms_fee f") \
		_T("                               LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
		_T("                               LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
		_T("							   LEFT JOIN hms_fee_invoice_view_v2 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ('D', 'M', 'R') AND f.hfe_status = 'P'") \
		_T("                               UNION ALL ") \
		_T("                               SELECT    f.hfe_invoiceno, ") \
		_T("                                         iv.hfe_class, ") \
		_T("                                         f.hfe_deptid khoa_order, ") \
		_T("									     f.hfe_itemid,") \
		_T("                                         Cast(Decode(product_org_id, 'PM', 'KD', ") \
		_T("                                                           'MA', 'C10', 'GL') AS NVARCHAR2(3)) khoa_thuchien, ") \
		_T("                                         Decode('PM', product_org_id, 4, ") \
		_T("                                                           5) nhom_phi, ") \
		_T("                                         f.hfe_docno, f.hfe_category ") \
		_T("                               FROM      hms_fee f") \
		_T("                               LEFT JOIN m_productitem_view_vp ON ( product_item_id = hfe_itemid ) ") \
		_T("							   LEFT JOIN hms_fee_invoice_view_v2 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
		_T("                               WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_status = 'P' AND f.hfe_category in ('N','BQP') ") \
		_T("							) tbl0 ") \
		_T("					LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl0.hfe_itemid as nvarchar2(15))) ") \
		_T("                    WHERE     1=1 %s) tbl_distinct ") \
		_T("            GROUP  BY nhom_phi ") \
		_T("            ORDER  BY nhom_phi) tbl_qs ") \
		_T(" RIGHT JOIN (SELECT     nhom_phi, ") \
		_T("                       SUM(tien_ngt) tien_ngt, ") \
		_T("                       SUM(tien_nt) tien_nt, ") \
		_T("                       SUM(tong_tien) tong_tien ") \
		_T("            FROM       ") \
		_T("            (SELECT    f.hfe_docno, ") \
		_T("                                 f.hfe_invoiceno, ") \
		_T("                                 CASE WHEN f.hfe_type IN ('P', 'T') THEN SU_DEPTID ELSE CASE WHEN f.hfe_type = 'O' THEN ho_pdeptid ELSE f.hfe_deptid END END khoa_thuchien, ") \
		_T("                                 CASE WHEN f.hfe_type = 'E' THEN 0 ELSE CASE WHEN f.hfe_type = 'B' THEN 1 ELSE CASE WHEN f.hfe_type = 'O' THEN 2 ELSE CASE WHEN f.hfe_type IN ('P', 'T') THEN 3 ELSE CASE WHEN f.hfe_type = 'F' THEN 6 ELSE 7 END END END END END nhom_phi, ") \
		_T("								 f.hfe_itemid,") \
		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
		_T("                                 ELSE 0 ") \
		_T("                                 END tien_nt, ") \
		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
		_T("                                 ELSE 0 ") \
		_T("                                 END tien_ngt, ") \
		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
		_T("                       FROM      hms_fee f") \
		_T("                       LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno AND hfe_orderid = hpc_orderid AND f.hfe_type IN ('P', 'T')) ") \
		_T("                       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid = ho_idx AND f.hfe_type = 'O') ") \
		_T("                       LEFT JOIN hms_fee_invoice_view_v2 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type NOT IN ( 'D', 'M', 'R' ) AND f.hfe_status = 'P' AND f.hfe_type <> 'V'") \
		_T("					   UNION ALL") \
		_T("					   SELECT    f.hfe_docno, ") \
		_T("                                 f.hfe_invoiceno, ") \
		_T("                                 Cast(Decode('PM', mp_org_id, 'KD', ") \
		_T("                                                           'C10') AS NVARCHAR2(3)) khoa_thuchien, ") \
		_T("                                 Decode('PM', mp_org_id, 4, ") \
		_T("                                                           5) nhom_phi, ") \
		_T("								 f.hfe_itemid,") \
		_T("                                 CASE WHEN iv.hfe_class = 'I' THEN f.hfe_cost ") \
		_T("                                 ELSE 0 ") \
		_T("                                 END tien_nt, ") \
		_T("                                 CASE WHEN iv.hfe_class <> 'I' THEN f.hfe_cost ") \
		_T("                                 ELSE 0 ") \
		_T("                                 END tien_ngt, ") \
		_T("                                 f.hfe_cost tong_tien, f.hfe_category ") \
		_T("                       FROM      hms_fee f ") \
		_T("                       LEFT JOIN m_product_item ON ( mpi_product_item_id = hfe_itemid ) ") \
		_T("                       LEFT JOIN m_product ON ( mpi_product_id = mp_product_id ) ") \
		_T("                       LEFT JOIN hms_fee_invoice_view_v2 iv ON ( iv.hfe_invoiceno = f.hfe_invoiceno AND iv.hfe_docno = f.hfe_docno ) ") \
		_T("                       WHERE     iv.hfe_cash_id IN (%s) AND f.hfe_type IN ( 'D', 'M') AND f.hfe_category in ('N','BQP') AND f.hfe_status = 'P' AND f.hfe_type <> 'V' ") \
		_T("					) tbl1  ") \
		_T("			LEFT JOIN hms_fee_list ON ( hfl_feeid = cast(tbl1.hfe_itemid as nvarchar2(15))) ") \
		_T("            WHERE      1=1 %s ") \
		_T("            GROUP      BY nhom_phi ") \
		_T("            ORDER      BY nhom_phi) tbl_cost ON ( tbl_qs.nhom_phi = tbl_cost.nhom_phi) "), szReceiptStr, szReceiptStr, szWhere, szReceiptStr, szReceiptStr, szWhere);
	}
	else*/
	//Bắt đầu sửa ở đây ngày 22/09/2018

	{
		//1. Phi Kham//
szSQL1.Format(_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END khoa_thuchien,      ") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_inspaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status      in ('P','R')") \
		_T("     AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("     AND f.hfe_itemid <> 'D0000006'") \
		_T("     AND f.hfe_category not in ('Y')    "), szWhere); \

szSQL2.Format(_T("  UNION ALL") \
		//2. Phi can lam sang chung//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid      ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMSV_PDEPT_PARACLINIC_P1") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \
	
szSQL3.Format(_T("  UNION ALL") \
		//3. Khong nhap ket qua = khong thuc hien khoi hinh anh	
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL AND Fl.Hfl_Deptid is not null THEN Fl.Hfl_Deptid else f.Hfe_Deptid  END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_Pacsorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y') AND hpc_status <> 'T'"), szWhere); \

szSQL4.Format(_T("  UNION ALL") \
		//4. Update ngay 09/06, co 1 so muc phi bi xoa di trong table hms_pacsorder nhung van co trong hms_fee//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P') AND f.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid  END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("     LEFT JOIN Hms_Pacsorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P','T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P')") \
		_T("     AND f.hfe_category not in ('Y') AND (hpc_status is NULL)"), szWhere); \

szSQL5.Format(_T("  UNION ALL") \
		//5. Khong nhap ket qua = khong thuc hien khoi xet nghiem
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_testorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y') AND hpc_status <> 'T'"), szWhere); \
szSQL6.Format(_T(" UNION ALL") \
		//6. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20') AS NVARCHAR2(3))       ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T("     AND f.hfe_type IN ('P','T')"), szWhere); \

szSQL7.Format(_T(" UNION ALL") \
		//7. Phi giuong//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \
szSQL8.Format(_T(" UNION ALL") \
		//8. Phi tien an benh nhan//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) khoa_thuchien,") \
		_T("       f.hfe_itemid,     ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('FF000')") \
		_T("     AND f.hfe_category in ('N','BQP','XX','BN')"), szWhere); \

szSQL9.Format(_T(" UNION ALL") \
		//9. Phi phau thuat thu thuat//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("     LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type   = 'O')    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_type='O'") \
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \
szSQL10.Format(_T(" UNION ALL") \
		//10. Phi khac o khoa//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T("     AND f.Hfe_itemid NOT IN(SELECT Hfe_itemid FROM Hms_Fee_Discountline WHERE hfe_docno =iv.hfe_docno AND Hfe_Refidx  =iv.hfe_invoiceno)") \
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \

szSQL11.Format(_T(" UNION ALL") \
		//11 Phi khac o tai chinh
		_T(" SELECT fi.hfe_docno,") \
		_T("         fi.hfe_type,") \
		_T("         iv.hfe_class,") \
		_T("         fi.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'") \
		_T("           THEN fi.HFE_DEPTID") \
		_T("         END khoa_thuchien,") \
		_T("         NULL as hfe_itemid,") \
		_T("         fi.HFE_AMOUNT tong_tien,") \
		_T("         NULL as hfe_category") \
		_T("       FROM hms_fee_invoice fi") \
		_T("       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("       ON (iv.hfe_invoiceno  = fi.hfe_invoiceno") \
		_T("       AND iv.hfe_docno      = fi.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("       AND fi.hfe_status     IN ('P','R')      ") \
		_T("       AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'"), szWhere); \

szSQL12.Format(_T(" UNION ALL") \
		//12. Phi khoa duoc, trang bi, tiep huyet//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       iv.hfe_class,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(product_org_id, 'PM', 'KHOA DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) khoa_thuchien,         ") \
		_T("       f.hfe_itemid,      ") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("     LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_type IN ('D', 'M','R')") \
		_T(" 	 AND f.hfe_category not in ('Y') ") , szWhere); \

//Đoạn này tính tiền
//1. Phi kham
szSQL13.Format(_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END khoa_thuchien,      ") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_inspaid tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("     AND f.hfe_itemid <> 'D0000006'") \
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \

szSQL14.Format(_T(" UNION ALL ") \
		//2. Phi CLS cac khoa thuc hien
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid      ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMSV_PDEPT_PARACLINIC_P1") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \


szSQL15.Format(_T(" UNION ALL ") \
		//3. Can lam sang chua thuc hien, khoi chan doan hinh anh
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL AND Fl.Hfl_Deptid is not null THEN Fl.Hfl_Deptid else f.Hfe_Deptid  END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_Pacsorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y') AND (hpc_status <> 'T')"), szWhere); \
		//_T("     AND f.hfe_category in ('N','BQP','XX') AND (hpc_status <> 'T')") \//

szSQL16.Format(_T(" UNION ALL ") \
		//_T("   --4 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_Pacsorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P')") \
		_T("     AND f.hfe_category not in ('Y') AND (hpc_status is NULL)"), szWhere); \
		//_T("     AND f.hfe_category in ('N','BQP','XX') AND (hpc_status is NULL)") \//
szSQL17.Format(_T(" UNION ALL") \
		//5. Can lam sang chua thuc hien, khoi xet nghiem
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20))") \//
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_testorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y') AND hpc_status <> 'T'"), szWhere); \
		//_T("     AND f.hfe_category in ('N','BQP','XX') AND hpc_status <> 'T'") \//

szSQL18.Format(_T(" UNION ALL") \
		//6. Khoa C16,C17,A20
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20') AS NVARCHAR2(3))       ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		//_T("     AND f.hfe_category in ('N','BQP','XX')") \//
		_T("     AND f.hfe_category not in ('Y')") \
		_T("     AND f.hfe_type IN ('P','T')"), szWhere); \

szSQL19.Format(_T(" UNION ALL") \
		//7. Phi giuong
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		//_T("     AND f.hfe_category in ('N','BQP','XX')") \//
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \

szSQL20.Format(_T(" UNION ALL") \
		//8. Tien an khoa dinh duong
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('FF000')") \
		_T("     AND f.hfe_category in ('N','BQP','XX','BN')"), szWhere); \

szSQL21.Format(_T(" UNION ALL") \
		//9. Phi PTTT
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' THEN  HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null THEN HO_PDEPTID else Fl.Hfl_Deptid END khoa_thuchien,") \//
		//_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \//
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null OR ho_pdeptid is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("     LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type   = 'O')    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_type='O'") \
		//_T("     AND f.hfe_category in ('N','BQP','XX')") \//
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \

szSQL22.Format(_T(" UNION ALL") \
		//10. Phi khac
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X'  THEN  f.HFE_DEPTID END khoa_thuchien,") \//
		_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T("     AND f.Hfe_itemid NOT IN(SELECT Hfe_itemid FROM Hms_Fee_Discountline WHERE hfe_docno =iv.hfe_docno AND Hfe_Refidx  =iv.hfe_invoiceno)") \
		//_T("     AND f.hfe_category in ('N','BQP','XX','P')") \//
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \

szSQL23.Format(_T(" UNION ALL") \
		//11. Phi khac o tai chinh
		_T("       SELECT fi.hfe_docno,") \
		_T("         fi.hfe_type,        ") \
		_T("         fi.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'") \
		_T("           THEN fi.HFE_DEPTID") \
		_T("         END khoa_thuchien,") \
		_T("         NULL,") \
		_T("         CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN fi.hfe_amount") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN fi.hfe_amount") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("         fi.hfe_amount tong_tien,") \
		_T("         NULL") \
		_T("       FROM hms_fee_invoice fi") \
		_T("       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("       ON (iv.hfe_invoiceno  = fi.hfe_invoiceno") \
		_T("       AND iv.hfe_docno      = fi.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("       AND fi.hfe_status     IN ('P','R')      ") \
		_T("       AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'"), szWhere); \

szSQL24.Format(_T(" UNION ALL") \
		//12. Khoa duoc, trang bi, tiep huyet
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(product_org_id, 'PM', 'KHOA DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) khoa_thuchien, ") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("     LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_type IN ('D', 'M', 'R')") \
		//_T("     AND hfe_category in ('N','BQP','XX')") \//
		_T("     AND f.hfe_category not in ('Y')"), szWhere); \

rs.ExecSQL(szSQL);

szSQL.Format(_T(" SELECT tbl_cost.khoa_thuchien,") \
		_T("   tien_nt,") \
		_T("   tien_ngt,") \
		_T("   tong_tien,") \
		_T("   qs_nt,") \
		_T("   qs_ngt,") \
		_T("   tong_qs") \
		_T(" FROM") \
		_T("   (") \
		_T(" SELECT khoa_thuchien,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN hfe_class <> 'I'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END) qs_ngt,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN hfe_class = 'I'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END) qs_nt,") \
		_T("     COUNT(*) tong_qs") \
		_T("   FROM") \
		_T("     (SELECT DISTINCT tbl0.hfe_class,") \
		_T("       khoa_thuchien,") \
		_T("       tbl0.hfe_docno") \
		_T("     FROM") \
		_T("       (") \
		_T(" %s %s %s %s %s %s %s %s %s %s %s %s") \
		_T("       ) tbl0") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON ( hfl_feeid                  = CAST(tbl0.hfe_itemid AS NVARCHAR2(15)))") \
		_T("     WHERE 1                         =1 %s %s %s %s") \
		_T("     AND NVL(hfe_category, 'N') NOT IN( 'Y' )") \
		_T("     ) tbl_distinct") \
		_T("   GROUP BY khoa_thuchien") \
		_T("   ORDER BY khoa_thuchien") \
		_T(" ) tbl_qs") \
		_T(" LEFT JOIN  ") \
		//Tinh phi cac khoa
		_T(" (SELECT khoa_thuchien,") \
		_T("     tien_ngt,") \
		_T("     tien_nt,") \
		_T("     tong_tien") \
		_T("   FROM") \
		_T(" (") \
		_T(" (SELECT khoa_thuchien,") \
		_T("     sum(tien_ngt) tien_ngt,") \
		_T("     sum(tien_nt) tien_nt,") \
		_T("     sum(tong_tien) tong_tien") \
		_T("   FROM") \
		_T(" (") \
		_T(" %s %s %s %s %s %s %s %s %s %s %s %s") \
		_T(" )tbl1") \
		_T(" LEFT JOIN hms_fee_list") \
		_T("   ON ( hfl_feeid                  = CAST(tbl1.hfe_itemid AS NVARCHAR2(15)))") \
		_T("   WHERE 1                         =1 %s %s %s %s %s") \
		_T("   AND NVL(hfe_category, 'N') NOT IN( 'Y' )") \
		_T("   GROUP BY khoa_thuchien") \
		_T("   ORDER BY khoa_thuchien") \
		_T(" ))") \
		_T(" ) tbl_cost ON ( tbl_qs.khoa_thuchien = tbl_cost.khoa_thuchien) WHERE tong_tien>0 "),szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12, szWhere1,szWhere2, szWhere3, szWhere4, szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20,szSQL21,szSQL22,szSQL23,szSQL24,szWhere1,szWhere2, szWhere3, szWhere4, szWhere5);
	}
	return szSQL;
}
CString CFMInsuranceIncomeOutlay::GetQueryString_check()
{
	
	CString szSQL, szWhere, szWhere1, szReceiptStr;
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
		szWhere.Format(_T(" AND iv.hfe_cash_id in(%s) "), szReceiptStr);
	else
		szWhere = m_szWhere;
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if (m_bHitechMachine)
		szWhere1.AppendFormat(_T(" AND hfl_hitechmachine = 'Y'"));

	szSQL.Format(_T(" SELECT ") \
		_T("     tbl1.hfe_docno as docno,") \
		_T("     CASE") \
		//_T("       WHEN mien_giam   >0") \//
		_T("       WHEN mien_giam   >0") \
		_T("       AND SUM(tien_ngt)>0") \
		_T("       THEN SUM(ROUND(tien_ngt))-ROUND(mien_giam)") \
		_T("       ELSE SUM(tien_ngt)") \
		_T("     END tien_ngt,") \
		_T("     CASE") \
		_T("       WHEN mien_giam  >0") \
		_T("       AND SUM(tien_nt)>0") \
		_T("       THEN SUM(ROUND(tien_nt))- ROUND(mien_giam)") \
		_T("       ELSE SUM(tien_nt)") \
		_T("     END tien_nt,") \
		_T("     CASE") \
		_T("       WHEN mien_giam    >0") \
		_T("       AND SUM(tong_tien)>0") \
		_T("       THEN SUM(ROUND(tong_tien))- ROUND(mien_giam)") \
		_T("       ELSE SUM(tong_tien)") \
		_T("     END tong_tien    ") \
		_T("   FROM") \
		_T("       (") \
		//1. Phi kham
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END khoa_thuchien,      ") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_inspaid tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_group ='D0000' AND f.hfe_cost>0") \
		_T("     AND f.hfe_itemid <> 'D0000006'") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T(" UNION ALL ") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid      ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMSV_PDEPT_PARACLINIC_P1") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T(" UNION ALL ") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20))") \//
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_Pacsorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y') AND (hpc_status <> 'T')") \
		_T(" UNION ALL ") \
		//_T("   --4 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_Pacsorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P')") \
		_T("     AND f.hfe_category not in ('Y') AND (hpc_status is NULL)") \
		_T(" UNION ALL") \
		//_T("  --5. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("  SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20))") \//
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("     LEFT JOIN Hms_testorder") \
		_T("     ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y') AND hpc_status <> 'T'") \
		_T(" UNION ALL") \
		//_T("   --6. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20') AS NVARCHAR2(3))       ") \
		_T("       END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500')") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T("     AND f.hfe_type IN ('P','T')") \
		_T(" UNION ALL") \
		//_T(" --7. Phi giuong") \//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f  ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T(" UNION ALL") \
		//_T("   --8. Phi tien an benh nhan") \//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_Group IN ('FF000')") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T(" UNION ALL") \
		//_T("   --9. Phi phau thuat - thu thuat") \//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' THEN  HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null THEN HO_PDEPTID else Fl.Hfl_Deptid END khoa_thuchien,") \//
		_T("       CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("     LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type   = 'O')    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND F.Hfe_type='O'") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T(" UNION ALL") \
		//_T("   --10. Phi khac o khoa") \//
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		//_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X'  THEN  f.HFE_DEPTID END khoa_thuchien,") \//
		_T("       CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID  END khoa_thuchien,") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f    ") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("     ON (iv.hfe_invoiceno  = f.hfe_invoiceno  AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("     WHERE 1=1 %s    ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X'") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T(" UNION ALL") \
		//_T("   --11. Phi khac o tai chinh") \//
		_T("       SELECT fi.hfe_docno,") \
		_T("         fi.hfe_type,        ") \
		_T("         fi.hfe_invoiceno,") \
		_T("         CASE") \
		_T("           WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'") \
		_T("           THEN fi.HFE_DEPTID") \
		_T("         END khoa_thuchien,") \
		_T("         NULL,") \
		_T("         CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN fi.hfe_amount") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN fi.hfe_amount") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("         fi.hfe_amount tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("         NULL") \
		_T("       FROM hms_fee_invoice fi") \
		_T("       LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv") \
		_T("       ON (iv.hfe_invoiceno  = fi.hfe_invoiceno") \
		_T("       AND iv.hfe_docno      = fi.hfe_docno)") \
		_T("     WHERE 1=1 %s    ") \
		_T("       AND fi.hfe_status     IN ('P','R')      ") \
		_T("       AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'") \
		_T(" UNION ALL") \
		//_T(" --12. Phi khoa duoc, trang bi, tiep huyet") //
		_T(" SELECT f.hfe_docno,") \
		_T("       f.hfe_type,") \
		_T("       f.hfe_invoiceno,") \
		_T("       CAST(DECODE(product_org_id, 'PM', 'KHOA DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) khoa_thuchien, ") \
		_T("       f.hfe_itemid,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class = 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_nt,") \
		_T("       CASE") \
		_T("         WHEN iv.hfe_class <> 'I'") \
		_T("         THEN f.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END tien_ngt,") \
		_T("       f.hfe_cost tong_tien,") \
		_T("       iv.HFE_FREEAMOUNT mien_giam,") \
		_T("       f.hfe_category") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("     LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_V3 iv ON (iv.hfe_invoiceno  = f.hfe_invoiceno     AND iv.hfe_docno      = f.hfe_docno)") \
		_T("     WHERE 1=1 %s ") \
		_T("     AND f.hfe_status in ('P','R')") \
		_T("     AND f.hfe_type IN ('D', 'M', 'R')") \
		_T("     AND f.hfe_category not in ('Y')") \
		_T("     )tbl1") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON ( hfl_feeid                  = CAST(tbl1.hfe_itemid AS NVARCHAR2(15)))") \
		_T("   WHERE 1                         =1") \
		_T("   AND tong_tien>0 ") \
		_T("   AND NVL(hfe_category, 'N') NOT IN( 'Y' )") \
		_T("   GROUP BY tbl1.hfe_docno, mien_giam") \
		_T("   ORDER BY tbl1.hfe_docno"),szWhere, szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere, szWhere);
	return szSQL;
}

int CFMInsuranceIncomeOutlay::OnListCheckAllIns()
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
int CFMInsuranceIncomeOutlay::OnListUnCheckAllIns()
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
int CFMInsuranceIncomeOutlay::OnListCheckAllSolder()
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

int CFMInsuranceIncomeOutlay::OnListUnCheckAllSolder()
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
int CFMInsuranceIncomeOutlay::OnListCheckAllInsSolder()
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

int CFMInsuranceIncomeOutlay::OnListUnCheckAllInsSolder()
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
int CFMInsuranceIncomeOutlay::OnDeleteDataBeforeInsert()
{
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL; 	
	szSQL.Format(_T("Delete from tmp_fa_cash_D11 where userid='%s'"), pMF->m_szUser);
 	int ret = pMF->ExecSQL(szSQL);
	_msg(_T("Đã xóa %ld bản ghi"), ret);
	return 0;
}