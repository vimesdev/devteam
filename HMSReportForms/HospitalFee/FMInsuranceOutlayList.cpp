#include "stdafx.h"
#include "FMInsuranceOutlayList.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd)
{
	return ((CFMInsuranceOutlayList *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceOutlayList*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceOutlayList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnOtherFeeSelectFnc(CWnd *pWnd)
{
	 ((CFMInsuranceOutlayList*)pWnd)->OnOtherFeeSelect();
}
static int _OnAddFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnAddFMInsuranceOutlayList();
} 
static int _OnEditFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnEditFMInsuranceOutlayList();
} 
static int _OnDeleteFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnDeleteFMInsuranceOutlayList();
} 
static int _OnSaveFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnSaveFMInsuranceOutlayList();
} 
static int _OnCancelFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnCancelFMInsuranceOutlayList();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceOutlayList*)pWnd)->OnSODSelect();
}
static void _OnIncomePackageSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceOutlayList*)pWnd)->OnIncomePackageSelect();
}
static void _OnOutLayPackageSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceOutlayList*)pWnd)->OnOutLayPackageSelect();
}

static int _OnListCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsuranceOutlayList*)pWnd)->OnListCheckAllIns();
	return 0;
}
static int _OnListUnCheckAllInsInvoiceFnc(CWnd *pWnd)
{
	((CFMInsuranceOutlayList*)pWnd)->OnListUnCheckAllIns();
	return 0;
}

static int _OnListCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceOutlayList*)pWnd)->OnListCheckAllSolder();
	return 0;
}
static int _OnListUnCheckAllSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceOutlayList*)pWnd)->OnListUnCheckAllSolder();
	return 0;
}
static int _OnListCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceOutlayList*)pWnd)->OnListCheckAllInsSolder();
	return 0;
}
static int _OnListUnCheckAllInsSolderFnc(CWnd *pWnd)
{
	((CFMInsuranceOutlayList*)pWnd)->OnListUnCheckAllInsSolder();
	return 0;
}

static void _OnAllInsSelectFnc(CWnd *pWnd)
{
	 ((CFMInsuranceOutlayList*)pWnd)->OnAllInsSelect();
}
static void _OnTCKTSelectFnc(CWnd *pWnd)
{
	 ((CFMInsuranceOutlayList*)pWnd)->OnTCKTSelect();
}



CFMInsuranceOutlayList::CFMInsuranceOutlayList(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsuranceOutlayList::~CFMInsuranceOutlayList(){
}
void CFMInsuranceOutlayList::OnCreateComponents()

{	
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 29, 234, 54); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 239, 30, 331, 55);
	m_wndReportPeriod.Create(this,336, 29, 475, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 59, 234, 84); 
	m_wndToDate.Create(this,336, 60, 475, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 239, 60, 331, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 89, 234, 114); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 119, 234, 144); 
	m_wndStatusLabel.Create(this, _T("Status"), 239, 90, 331, 115);
	m_wndStatus.Create(this,336, 90, 475, 115); 
	m_wndList.Create(this,10, 181, 475, 439); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 10, 446, 120, 471);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 315, 540, 395, 565);
	m_wndExport.Create(this, _T("Export XLS"), 400, 540, 480, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 476, 120, 501);
	m_wndOutpatient.Create(this, _T("Outpatient"), 130, 475, 230, 500);
	m_wndDeposit.Create(this, _T("Deposit"), 235, 476, 330, 501);
	m_wndSoldierWCard.Create(this, _T("Soldier W Card"), 130, 445, 330, 470);
	m_wndFree.Create(this, _T("Free"), 340, 446, 474, 471);
	m_wndOtherFee.Create(this, _T("OtherFee"), 340, 476, 474, 501);
	m_wndSOD.Create(this, _T("SOD"), 10, 148, 90, 173);
	m_wndIncomePackage.Create(this, _T("IncomePackage"), 11, 506, 121, 531);
	m_wndOutLayPackage.Create(this, _T("OutLayPackage"), 130, 506, 330, 531);
	m_wndAllIns.Create(this, _T("AllIns"), 95, 148, 234, 173);
	m_wndTCKT.Create(this, _T("TCKT"), 239, 148, 475, 173);
}

void CFMInsuranceOutlayList::OnInitializeComponents(){
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
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 110);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 70);
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

void CFMInsuranceOutlayList::OnSetWindowEvents(){
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
	m_wndOtherFee.SetEvent(WE_CLICK, _OnOtherFeeSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndIncomePackage.SetEvent(WE_CLICK, _OnIncomePackageSelectFnc);
	m_wndOutLayPackage.SetEvent(WE_CLICK, _OnOutLayPackageSelectFnc);
	m_wndAllIns.SetEvent(WE_CLICK, _OnAllInsSelectFnc);
	m_wndTCKT.SetEvent(WE_CLICK, _OnTCKTSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsuranceOutlayListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsuranceOutlayListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsuranceOutlayListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsuranceOutlayListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsuranceOutlayListFnc, 0, 'T', VK_CONTROL);
*/
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);


}
void CFMInsuranceOutlayList::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndSoldierWCard.GetDlgCtrlID(), m_bSoldierWCard);
	DDX_Check(pDX, m_wndFree.GetDlgCtrlID(), m_bFree);
	DDX_Check(pDX, m_wndOtherFee.GetDlgCtrlID(), m_bOtherFee);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndIncomePackage.GetDlgCtrlID(), m_bIncomePackage);
	DDX_Check(pDX, m_wndOutLayPackage.GetDlgCtrlID(), m_bOutLayPackage);
	DDX_Check(pDX, m_wndAllIns.GetDlgCtrlID(), m_bAllIns);
	DDX_Check(pDX, m_wndTCKT.GetDlgCtrlID(), m_bTCKT);
}
void CFMInsuranceOutlayList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceOutlayList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceOutlayList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_bInpatient = FALSE;
	m_bOutpatient = FALSE;
	m_bAll = FALSE;
	m_bSoldierWCard = FALSE;
	m_bFree = FALSE;
	m_bOtherFee=FALSE;
	m_bSOD=FALSE;
	m_bIncomePackage=FALSE;
	m_bOutLayPackage=FALSE;
	m_bAllIns=FALSE;
	m_bTCKT=FALSE;
}

int CFMInsuranceOutlayList::SetMode(int nMode){
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

/*void CFMInsuranceOutlayList::OnYearChange(){
	
} */
/*void CFMInsuranceOutlayList::OnYearSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnYearKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnYearCheckValue(){
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
 
void CFMInsuranceOutlayList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsuranceOutlayList::OnReportPeriodSelendok(){
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

/*void CFMInsuranceOutlayList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnReportPeriodKillfocus(){
	
}*/
void CFMInsuranceOutlayList::OnOtherFeeSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
long CFMInsuranceOutlayList::OnReportPeriodLoadData(){
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

/*void CFMInsuranceOutlayList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceOutlayList::OnFromDateChange(){
	
} */
/*void CFMInsuranceOutlayList::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnFromDateKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsuranceOutlayList::OnToDateChange(){
	
} */
/*void CFMInsuranceOutlayList::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnToDateKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsuranceOutlayList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsuranceOutlayList::OnAllInsSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
	void CFMInsuranceOutlayList::OnTCKTSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CFMInsuranceOutlayList::OnClerkSelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnClerkSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnClerkKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsuranceOutlayList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceOutlayList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMInsuranceOutlayList::OnStatusSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnStatusKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnStatusLoadData(){
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
/*void CFMInsuranceOutlayList::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceOutlayList::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnOrderBySelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnOrderBySetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnOrderByKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnOrderByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndOrderBy.AddItems(_T("01"), _T("S\x1EAFp \x78\x1EBFp th\x65o t\xEAn \x62\x1EC7nh nh\xE2n"), NULL);
	m_wndOrderBy.AddItems(_T("02"), _T("S\x1EAFp \x78\x1EBFp th\x65o kho\x61"), NULL);
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
/*void CFMInsuranceOutlayList::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsuranceOutlayList::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMInsuranceOutlayList::OnSODSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}

void CFMInsuranceOutlayList::OnIncomePackageSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMInsuranceOutlayList::OnOutLayPackageSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
void CFMInsuranceOutlayList::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMInsuranceOutlayList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceOutlayList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceOutlayList::OnListLoadData()
{
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
	else if (m_bAllIns)
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG','BH-NGAB','BH-NTAB')"));

	else if (m_bTCKT)
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','BH-NGAB','BH-NTAB', 'THE-BH','CK-BH')"));
	else		
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG', 'QUAN-NT', 'QUAN-NG','BHQUAN-NT', 'BHQUAN-NG')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_locked stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
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

void CFMInsuranceOutlayList::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
} 
void CFMInsuranceOutlayList::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMInsuranceOutlayList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);	
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("In bảng kê chi"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("In bảng kê chi Ver 2"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint3rdver();
			break;
		case 2:
			OnPrint3rdver_Ver2();
			break;
	}
}
 
void CFMInsuranceOutlayList::OnExportSelect()
{
	CGuiMenu menu(this);
	CString tmpStr;
	
	menu.CreatePopupMenu();
	TranslateString(_T("Xuất ra Excel bảng kê bảo hiểm"), tmpStr);
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
			OnExportReport();			
			break;
		case 2:			
			OnExportForChecking();			
			break;		
	}	
}
void CFMInsuranceOutlayList::OnExportForChecking()
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
void CFMInsuranceOutlayList::OnExportReport()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
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
	if (!xls.Load(_T("Exports\\BANG_KE_CHI_BHYT.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("doc_no"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("total_amount"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("bhtt"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("deposit"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("vien_phi"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("thu_maycnc"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("fee_food"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("thu_goidv"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phi_ranggia"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("other_paid"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("fa"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("nguoncovid"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chi_doituong"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chi_maycnc"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chi_de_muc"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chi_khac"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chi_goidv"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tl_nguoncovid"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("cong"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tran_bao_viet"), nTemp);
		nGroupTotal[21] += nTemp;
		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("cong_chi"), nTemp);
		nGroupTotal[22] += nTemp;
		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}	
	xls.Save(_T("Exports\\BANG_KE_CHI_BHYT2.xls"));
}	

 
int CFMInsuranceOutlayList::OnAddFMInsuranceOutlayList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsuranceOutlayList::OnEditFMInsuranceOutlayList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceOutlayList::OnDeleteFMInsuranceOutlayList(){
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
 		OnCancelFMInsuranceOutlayList();
 	}
	return 0;
}
int CFMInsuranceOutlayList::OnSaveFMInsuranceOutlayList(){
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
 		//OnFMInsuranceOutlayListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMInsuranceOutlayList::OnCancelFMInsuranceOutlayList(){
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
int CFMInsuranceOutlayList::OnFMInsuranceOutlayListListLoadData(){
	return 0;
}



void CFMInsuranceOutlayList::OnPrint1stver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

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

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKECHIBNBH.RPT")))
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
	CStringArray data_name;
	double nTotal[14];
	double nCost;
	int nIndex = 1;

	for (int i = 0; i < 14; i++)
	{
		nTotal[i] = 0;
	}
	data_name.Add(_T("deposit_extraction"));
	data_name.Add(_T("food_fee"));
	data_name.Add(_T(""));
	data_name.Add(_T("ins_payment_amount"));
	data_name.Add(_T("pol_payment_amount"));
	data_name.Add(_T("total_amount"));
	data_name.Add(_T("remaining_amount"));
	data_name.Add(_T("return_amount"));
	data_name.Add(_T("salary_amount"));
	data_name.Add(_T("train_amount"));
	data_name.Add(_T("holiday_amount"));
	data_name.Add(_T("stamp_amount"));
	data_name.Add(_T("other_amount"));
	data_name.Add(_T("total_payment_amount"));
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

		for (int j = 0; j < 14; j++)
		{
			rs.GetValue(data_name.GetAt(j), nCost);
			nTotal[j] += nCost;
			FormatCurrency(nCost, tmpStr);
			szTemp.Format(_T("%d"), j+11);
			rptDetail->SetValue(szTemp, tmpStr);	
		}		

		rs.MoveNext();
	}

	if (nTotal[5] > 0)
	{
		for (int i = 0; i < 14; i++)
		{
			FormatCurrency(nTotal[i], tmpStr);
			szTemp.Format(_T("s%d"), i + 11);
			rpt.GetReportFooter()->SetValue(szTemp, tmpStr);
		}
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	szTemp.Format(_T("%2.f"), nTotal[13]);
	MoneyToString(szTemp, tmpStr);
	tmpStr += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CFMInsuranceOutlayList::OnPrint2ndver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szPos;
	CString szSysDate;

	szSQL = GetQueryString2();
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		if (nCount < 0)
			_msg(_T("%s"), szSQL);
		else
			_fmsg(_T("%s"), szSQL);
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOANCHIBENHNHANBHYT.RPT")))
		return;
	StringUpper(pMF->m_szHealthService, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_szHospitalName, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("Invoices"), m_szCashIDS);

	CReportSection *rptDetail = NULL, *rptTmp = NULL;
	CString szOldLine, szNewLine;
	CStringArray data_name;
	double nTotal[9], nGrpTotal[9], nTotalFa = 0, nTotalOtherpayment = 0, nGrpFa = 0, nGrpOtherpayment = 0;
	double nCost = 0, nOther_payment = 0, nFa = 0;
	int nIndex = 1;

	for (int i = 0; i < 9; i++)
	{
		nTotal[i] = 0;
		nGrpTotal[i] = 0;
	}
	/*data_name.Add(_T("patient_name"));
	data_name.Add(_T("doc_no"));
	data_name.Add(_T("admit_date"));*/
	data_name.Add(_T("deposit"));
	data_name.Add(_T("total_amount"));
	data_name.Add(_T("inspaid"));
	data_name.Add(_T("pat_paid"));
	data_name.Add(_T("diff_cost"));
	data_name.Add(_T("fee_food"));
	data_name.Add(_T("other_paid"));
	data_name.Add(_T("total_patpaid"));
	data_name.Add(_T("refund_amount"));

	int col_pos = 5;
	int sum_pos = (int) (data_name.GetCount())-1;

	while (!rs.IsEOF())
	{
		if (m_szOrderByKey == _T("02"))
			rs.GetValue(_T("dept_id"), szNewLine);
		if (szNewLine != szOldLine)
		{
			if (nGrpTotal[sum_pos] > 0)
			{
				rptTmp = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptTmp)
				{
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						szPos.Format(_T("s%d"), i+col_pos);
						tmpStr.Format(_T("%f"), nGrpTotal[i]);
						rptTmp->SetValue(szPos, tmpStr);
						nTotal[i] += nGrpTotal[i];
						nGrpTotal[i] = 0;
 					}
					tmpStr.Format(_T("%f"), nGrpOtherpayment);
					rptTmp->SetValue(_T("s11.2"), tmpStr);
					nTotalOtherpayment += nGrpOtherpayment;
					tmpStr.Format(_T("%f"), nGrpFa);
					rptTmp->SetValue(_T("s11.3"), tmpStr);
					nTotalFa += nGrpFa;
					nTotalOtherpayment = 0;
					nGrpFa = 0;
				}
			}
			rptTmp = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptTmp)
			{
				rptTmp->SetValue(_T("GroupName"), pMF->GetDepartmentName(szNewLine));
			}
			szOldLine = szNewLine;
		}
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("patient_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("doc_no"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("invoice_date"), tmpStr);
		rptDetail->SetValue(_T("4.1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("discharge_date"), tmpStr);
		rptDetail->SetValue(_T("4"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		for (int j = 0; j < data_name.GetCount(); j++)
		{
			rs.GetValue(data_name.GetAt(j), nCost);
			nGrpTotal[j] += nCost;
			FormatCurrency(nCost, tmpStr);
			szTemp.Format(_T("%d"), j+col_pos);
			rptDetail->SetValue(szTemp, tmpStr);	
		}
		rs.GetValue(_T("other_payment"), nCost);
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("11.2"), tmpStr);
		nGrpOtherpayment += nCost;
		rs.GetValue(_T("fa"), nCost);
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("11.3"), tmpStr);
		nGrpFa += nCost;
		rs.MoveNext();
	}
	if (m_szOrderByKey == _T("01"))
	{
		for (int i = 0; i < data_name.GetCount(); i++)
			nTotal[i] += nGrpTotal[i];
		nTotalFa += nGrpFa;
		nTotalOtherpayment += nGrpOtherpayment;
	}
	else if (nGrpTotal[sum_pos] > 0)
	{
		rptTmp = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptTmp)
		{
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				szPos.Format(_T("s%d"), i+col_pos);
				tmpStr.Format(_T("%f"), nGrpTotal[i]);
				rptTmp->SetValue(szPos, tmpStr);
				nTotal[i] += nGrpTotal[i];
				nGrpTotal[i] = 0;
 			}
			tmpStr.Format(_T("%f"), nGrpOtherpayment);
			rptTmp->SetValue(_T("s11.2"), tmpStr);
			nTotalOtherpayment += nGrpOtherpayment;
			tmpStr.Format(_T("%f"), nGrpFa);
			rptTmp->SetValue(_T("s11.3"), tmpStr);
			nTotalFa += nGrpFa;
			nGrpOtherpayment= 0;
			nGrpFa = 0;
		}
	}
	if (nTotal[sum_pos] > 0)
	{
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			//FormatCurrency(nTotal[i], tmpStr);
			tmpStr.Format(_T("%f"), nTotal[i]);
			szTemp.Format(_T("t%d"), i+col_pos);
			rpt.GetReportFooter()->SetValue(szTemp, tmpStr);
		}
		tmpStr.Format(_T("%f"), nTotalOtherpayment);
		_debug(_T("%s|%f"), tmpStr, nTotalOtherpayment);
		rpt.GetReportFooter()->SetValue(_T("t11.2"), tmpStr);
		tmpStr.Format(_T("%f"), nTotalFa);
		rpt.GetReportFooter()->SetValue(_T("t11.3"), tmpStr);
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr.Format(_T("%f"), nTotal[sum_pos]);
	rpt.GetReportFooter()->SetValue(_T("TT13"), tmpStr);
	szTemp.Format(_T("%2.f"), nTotal[sum_pos]);
	MoneyToString(szTemp, tmpStr);
	tmpStr += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CFMInsuranceOutlayList::OnPrint3rdver()
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
	double nTotal[21], nGroupTotal1[21], nGrands[21];
	for (int i = 0; i < 21; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
		nGrands[i] = 0;
	}

	CMap<CString, LPCTSTR, CString, LPCTSTR> sIndex;

	sIndex[_T("I")] = _T("Chi nội trú BH khác");
	sIndex[_T("II")] = _T("Chi nội trú BH quân");	
	sIndex[_T("III")] = _T("Chi ngoại trú BH khác");
	sIndex[_T("IV")] = _T("Chi ngoại trú BH quân");
	sIndex[_T("V")] = _T("Chi khác BH khác");
	sIndex[_T("VI")] = _T("Chi khác BH quân");
	

	szSQL = GetQueryString3();
    //_msg(_T("%s"), szSQL);
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		if (nCount < 0) _msg(_T("%s"), szSQL);
		else _fmsg(_T("%s"), szSQL);
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOANCHIBENHNHANBHYT_1.RPT")))
		return;
	data_name.Add(_T("total_amount"));
	data_name.Add(_T("bhtt"));
	data_name.Add(_T("deposit"));
	data_name.Add(_T("vien_phi"));
	data_name.Add(_T("thu_maycnc"));
	data_name.Add(_T("fee_food"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	data_name.Add(_T("other_paid"));
	data_name.Add(_T("fa"));
	data_name.Add(_T("chi_doituong"));
	data_name.Add(_T("chi_maycnc"));
	data_name.Add(_T("chi_de_muc"));
	data_name.Add(_T("chi_khac"));
	data_name.Add(_T("chi_goidv"));
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
_tprintf(_T("\r\n2"));

rptHeader->SetValue(_T("Invoices"), m_szCashIDS);

	CString szNewDept, szOldDept;
	long nCashID, nOldCashID=0;
	int col = 5;
	int nsum = (int)data_name.GetCount()-1;
	CRecord rsx(&pMF->m_db);
	CString szInvoiceDate, szInvoiceNo, szUserID;
	while (!rs.IsEOF()){
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{

			if ((m_szOrderByKey == _T("04") || m_szOrderByKey == _T("05")) && nGrands[nsum] > 0){
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++){
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
			}

			if (nGroupTotal1[nsum] > 0){
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				CReportItem *obj = rptGroup->GetItem(_T("SubTotal"));
				if(obj){
					tmpStr.Format(_T("\x43\x1ED9ng (%s)"), szOldLev1);
					obj->SetText(tmpStr);
				}
				for (int i = 0; i < data_name.GetCount(); i++){

					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i+col);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup){
				sIndex.Lookup(szNewLev1, tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldLev1 = szNewLev1;
			nIdx = 1;
			for (int i =0; i < data_name.GetCount(); i++)
				nGrands[i] = 0;

		}
		if(m_szOrderByKey == _T("04")){
			rs.GetValue(_T("deptid"), szNewDept);
			if(szNewDept != szOldDept){
				szOldDept = szNewDept;
				if (nGrands[nsum] > 0){
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++){
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
				}

				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
				if (rptGroup){
					tmpStr.Format(_T("Kho\x61 %s"), szNewDept);
					rptGroup->SetValue(_T("GroupName"), tmpStr);
				}
			}
		}


		if(m_szOrderByKey == _T("05")){
			rs.GetValue(_T("cash_id"), nCashID);
			if(nCashID != nOldCashID){
				nOldCashID = nCashID;

				if (nGrands[nsum] > 0){
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++){
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
				}

				szSQL.Format(_T("SELECT fac_invoiceno, TO_CHAR(fac_invoicedate,'DD/MM/YYYY') as invoicedate, fac_user_id FROM fa_cash WHERE fac_cash_id=%ld "), nCashID);
				rsx.ExecSQL(szSQL);
				rsx.GetValue(_T("fac_invoiceno"), szInvoiceNo);
				rsx.GetValue(_T("invoicedate"), szInvoiceDate);
				rsx.GetValue(_T("fac_user_id"), szUserID);
				tmpStr.Format(_T("S\x1ED1 phi\x1EBFu [%s] Ng\xE0y [%s] Ng\x1B0\x1EDDi thu [%s]"),  szInvoiceNo, szInvoiceDate, szUserID);
				CReportSection *grp = NULL;
				grp = rpt.GetGroupHeader(0);
				if(grp){
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("GroupName"), tmpStr);
				}
				nOldCashID = nCashID;

			}
		}

		rptDetail = rpt.AddDetail();
		if (rptDetail){
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			//rptDetail->SetValue(_T("4"), rs.GetValue(_T("discharge_date")));
			//rptDetail->SetValue(_T("5"), rs.GetValue(_T("invoice_date")));
			for (int i = 0; i < data_name.GetCount(); i++){
				rs.GetValue(data_name.GetAt(i), nTmp);
				nGroupTotal1[i]+= nTmp;
				nGrands[i] += nTmp;
				nTotal[i] += nTmp;
				tmpStr.Format(_T("%d"), i+col);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			//	_tprintf(_T("\r\n%d"), i);
			}
			
		}
		rs.MoveNext();
	}

	if(m_szOrderByKey == _T("04") || m_szOrderByKey == _T("05"))
		if (nGrands[nsum] > 0){
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			for (int i = 0; i < data_name.GetCount(); i++){
				tmpStr.Format(_T("%f"), nGrands[i]);
				szPos.Format(_T("s%d"), i+col);
				rptGroup->SetValue(szPos, tmpStr);
				nGrands[i] = 0;
			}
		}
_tprintf(_T("\r\n3"));
	if (nGroupTotal1[nsum] > 0){
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < data_name.GetCount(); i++){
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+col);
			rptGroup->SetValue(szPos, tmpStr);
		}
	}
_tprintf(_T("\r\n4"));
	//if (nTotal[nsum] > 0)
		for (int i = 0; i < data_name.GetCount(); i++){
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("t%d"), i+col);
			rpt.GetReportFooter()->SetValue(szPos, tmpStr);
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
	szValue.Format(_T("%.3f"), nTotal[nsum]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	rpt.PrintPreview();
}
 
CString CFMInsuranceOutlayList::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szDepts, szObjects, szPaymentStr;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szPaymentStr.IsEmpty())
				szPaymentStr += _T(", ");
			szPaymentStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if (!szPaymentStr.IsEmpty())
	{
		szWhere.Format(_T(" AND rf.hfe_objectid <> 7 AND rf.hfe_cash_id IN (%s) AND rf.hfe_status = 'P'"), szPaymentStr);
	}

	else
	{
		szWhere.Format(_T(" AND rf.hfe_objectid <> 7 AND rf.hfe_cash_id > 0 AND rf.hfe_status = 'P' ") \
					_T(" AND rf.hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		if (!szDepts.IsEmpty())
			szWhere.AppendFormat(_T(" AND rf.hfe_deptid IN (%s)"), szDepts);
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND rf.hfe_staff = '%s'"), m_szClerkKey);
		if (!szObjects.IsEmpty())
			szWhere.AppendFormat(_T(" AND rf.hfe_objectid IN (%s)"), szObjects);
	}
	//Edited 1st
	//Added deposit refund fee
	szSQL.Format(_T("SELECT * FROM (") \
				_T(" SELECT    Get_patientname(doc_no) patient_name, ") \
				_T("           hfe_date, ") \
				_T("           CASE WHEN Coalesce(hp_rank, 0) > 0 THEN Get_syssel_desc('hms_rank', hp_rank) ") \
				_T("           ELSE Get_objectname(hd_object) ") \
				_T("           END rank, ") \
				_T("           doc_no, ") \
				_T("           hcr_recordno record_no, ") \
				_T("           CASE WHEN hp_workplace IS NOT NULL THEN hp_workplace ") \
				_T("           ELSE Cast(hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS NVARCHAR2(256)) ") \
				_T("           END unit, ") \
				_T("           dept_id, ") \
				_T("           hcr_sumtreat treatment_days, ") \
				_T("           ROUND(SUM(deposit_extraction)) deposit_extraction, ") \
				_T("           ROUND(SUM(food_fee)) food_fee, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 AND SUM(pol_payment_amount) > 0 THEN ROUND(SUM(scoliosis_polamt-food_fee)) ELSE ROUND(SUM(pol_payment_amount)) END pol_payment_amount, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 AND SUM(ins_payment_amount) < 0 THEN ROUND(SUM(scoliosis_insamt-food_fee)) ELSE ROUND(SUM(ins_payment_amount)) END ins_payment_amount, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(scoliosis_polamt+ scoliosis_insamt)) ELSE ROUND(SUM(total_amount)) END total_amount, ") \
				_T("           ROUND(SUM(deposit_extraction - total_amount)) remaining_amount, ") \
				_T("           ROUND(SUM(return_amount)) return_amount, ") \
				_T("           ROUND(SUM(salary_amount)) salary_amount, ") \
				_T("           ROUND(SUM(train_amount)) train_amount, ") \
				_T("           ROUND(SUM(holiday_amount)) holiday_amount, ") \
				_T("           ROUND(SUM(stamp_amount)) stamp_amount, ") \
				_T("           ROUND(SUM(other_amount)) other_amount, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(deposit_extraction + return_amount + salary_amount ") \
				_T("               + train_amount + holiday_amount + stamp_amount ") \
				_T("               + other_amount - scoliosis_polamt -scoliosis_insamt))") \
				_T("			ELSE ROUND(SUM(deposit_extraction + return_amount + salary_amount ") \
				_T("               + train_amount + holiday_amount + stamp_amount ") \
				_T("               + other_amount - total_amount)) END total_payment_amount ") \
				_T(" FROM      (SELECT    rf.hfe_docno doc_no, ") \
				_T("					  rf.hfe_date hfe_date,") \
				_T("					  rf.hfe_deptid dept_id,") \
				_T("                      coalesce(hfe_deposit, 0) deposit_extraction, ") \
				_T("                      0 food_fee, ") \
				_T("                      0 pol_payment_amount, ") \
				_T("                      0 ins_payment_amount, ") \
				_T("                      0 total_amount, ") \
				_T("					  0 return_amount,") \
				_T("                      Coalesce(hfe_salary_amount, 0)  salary_amount, ") \
				_T("                      Coalesce(hfe_train_amount, 0)   train_amount, ") \
				_T("                      Coalesce(hfe_holiday_amount, 0) holiday_amount, ") \
				_T("                      Coalesce(hfe_stamp_amount, 0)   stamp_amount, ") \
				_T("                      Coalesce(hfe_other_amount, 0)   other_amount, ") \
				_T("					  0 is_scoliosis, 0 scoliosis_insamt, 0 scoliosis_polamt") \
				_T("            FROM      hms_fee_refund rf ") \
				_T("			LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = rf.hfe_docno AND i.hfe_invoiceno = rf.hfe_refidx)") \
				_T("            LEFT JOIN hms_fee_sold fs ON ( i.hfe_docno = fs.hfe_docno ") \
				_T("                                           AND i.hfe_invoiceno = fs.hfe_invoiceno ) ") \
				_T("            WHERE     rf.hfe_class IN ( 'A', 'I' ) ") \
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT    rf.hfe_docno                 doc_no, ") \
				_T("					  rf.hfe_date,") \
				_T("					  rf.hfe_deptid,") \
				_T("                      0 deposit_extraction, ") \
				_T("                      CASE WHEN f.hfe_type = 'F' THEN f.hfe_cost ") \
				_T("                      ELSE 0 ") \
				_T("                      END food_fee, ") \
				_T("                      CASE WHEN ( f.hfe_type <> 'F' ") \
				_T("                             AND i.hfe_objectid IN ( 1, 3, 8, 13 ) ) THEN f.hfe_patpaid ELSE 0") \
				_T("                      END pol_payment_amount, ") \
				_T("                      CASE WHEN ( f.hfe_type <> 'F' ") \
				_T("                             AND i.hfe_objectid NOT IN ( 1, 3, 8, 13 ) ) THEN f.hfe_patpaid ELSE 0") \
				_T("                      END ins_payment_amount, ") \
				_T("                      f.hfe_patpaid total_amount,") \
				_T("					  0,") \
				_T("                      0 salary_amount, ") \
				_T("                      0 train_amount, ") \
				_T("                      0 holiday_amount, ") \
				_T("                      0 stamp_amount, ") \
				_T("                      0                           other_amount, ") \
				_T("					  0, 0, 0") \
				_T("            FROM      hms_fee_refund rf ") \
				_T("			LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = rf.hfe_docno AND i.hfe_invoiceno = rf.hfe_refidx)") \
				_T("            LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T("            WHERE     f.hfe_status = 'P' ") \
				_T("                  AND rf.hfe_class IN ('A', 'I') ") \
				_T("				  AND f.hfe_category <> 'Y' AND f.hfe_feegroup NOT IN ('OPT_L', 'HITECH_L') ") \
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT    rf.hfe_docno                 doc_no, ") \
				_T("					  rf.hfe_date,") \
				_T("					  rf.hfe_deptid,") \
				_T("                      0                           deposit_extraction, ") \
				_T("                      CASE WHEN f.hfe_type = 'F' THEN f.hfe_cost ") \
				_T("                      ELSE 0 ") \
				_T("                      END                         food_fee, ") \
				_T("                      CASE WHEN ( f.hfe_type <> 'F' ") \
				_T("                             AND i.hfe_objectid IN ( 1, 3, 8, 13 ) ) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0") \
				_T("                      END                         pol_payment_amount, ") \
				_T("                      CASE WHEN ( f.hfe_type <> 'F' ") \
				_T("                             AND i.hfe_objectid NOT IN ( 1, 3, 8, 13 ) ) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0") \
				_T("                      END                         ins_payment_amount, ") \
				_T("                      f.hfe_inspaid + f.hfe_diffcost -f.hfe_discount total_amount,") \
				_T("					  0,") \
				_T("                      0 salary_amount, ") \
				_T("                      0 train_amount, ") \
				_T("                      0 holiday_amount, ") \
				_T("                      0 stamp_amount, ") \
				_T("                      0 other_amount, ") \
				_T("					  CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END,") \
				_T("					  CASE WHEN ho_scoliosis = 'Y' AND i.hfe_objectid NOT IN (1, 3, 8, 13) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0 END, ") \
				_T("					  CASE WHEN ho_scoliosis = 'Y' AND i.hfe_objectid IN (1, 3, 8, 13) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0 END ") \
				_T("            FROM      hms_fee_refund rf ") \
				_T("			LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = rf.hfe_docno AND i.hfe_invoiceno = rf.hfe_refidx)") \
				_T("            LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T("			LEFT JOIN hms_operation ON (f.hfe_docno = ho_docno AND f.hfe_orderid = ho_idx)") \
				_T("            WHERE     f.hfe_status = 'P' ") \
				_T("                  AND rf.hfe_class IN ('A', 'I') ") \
				_T("				  AND f.hfe_category <> 'Y' AND f.hfe_type = 'V' ") \
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT    rf.hfe_docno                 doc_no, ") \
				_T("					  rf.hfe_date,") \
				_T("					  rf.hfe_deptid,") \
				_T("                      0 deposit_extraction, ") \
				_T("                      0 food_fee, ") \
				_T("                      0 pol_payment_amount, ") \
				_T("                      0 ins_payment_amount, ") \
				_T("                      0 total_amount,") \
				_T("					  rf.hfe_amount,") \
				_T("                      0 salary_amount, ") \
				_T("                      0 train_amount, ") \
				_T("                      0 holiday_amount, ") \
				_T("                      0 stamp_amount, ") \
				_T("                      0 other_amount, ") \
				_T("					  0, 0, 0") \
				_T("            FROM      hms_fee_refund rf ") \
				_T("			LEFT JOIN hms_fee_deposit d ON (d.hfe_docno = rf.hfe_docno AND d.hfe_invoiceno = rf.hfe_refidx)") \
				_T("            WHERE     rf.hfe_class IN ('A', 'I') AND d.hfe_status = 'R' ") \
				_T("			%s)") \
				_T(" LEFT JOIN hms_doc ON (hd_docno = doc_no) ") \
				_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = doc_no ) ") \
				_T(" LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno ) ") \
				_T(" GROUP     BY doc_no, ") \
				_T("              hfe_date, ") \
				_T("              hp_rank, ") \
				_T("              hcr_recordno, ") \
				_T("              hp_workplace, ") \
				_T("              dept_id, ") \
				_T("              hp_provid, ") \
				_T("              hp_distid, ") \
				_T("              hp_villid, ") \
				_T("              hd_object, ") \
				_T("              hcr_sumtreat ") \
				_T(" ORDER BY patient_name)") \
				_T(" WHERE total_payment_amount > 0"), szWhere, szWhere, szWhere, szWhere);
_fmsg(_T("%s"), szSQL);


	return szSQL;
}

CString CFMInsuranceOutlayList::GetQueryString2(){
	CString szSQL, szWhere;
	CString szDepts, szObjects, szReceiptStr, szIESQL, szOutpatientSQL, szOrderBy, szSubWhere;


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


	szOrderBy = _T(" ORDER BY dept_id, doc_no");
	if (m_szOrderByKey == _T("01"))
		szOrderBy = _T(" ORDER BY NLSSORT(firstname, 'NLS_SORT=VIETNAMESE'), NLSSORT(midname, 'NLS_SORT=VIETNAMESE'), NLSSORT(surname, 'NLS_SORT=VIETNAMESE')");


	szSQL.Format(_T(" SELECT hfe_index,") \
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
	_T("   SUM(hfe_discount) AS inspaid,") \
	_T("   SUM(hfe_patpaid1) AS pat_paid,") \
	_T("   SUM(hfe_foodamount) AS fee_food,") \
	_T("   SUM(hfe_diffcost) AS diff_cost,") \
	_T("   SUM(hfe_policyamount) AS other_paid,") \
	_T("   SUM(hfe_otherpayment) AS other_payment,") \
	_T("   SUM(hfe_miengiam) AS fa,") \
	_T("   SUM( hfe_patpaid1 + hfe_diffcost + hfe_foodamount) AS total_patpaid_,") \
	_T("   SUM( hfe_patpaid1 + hfe_diffcost + hfe_foodamount + hfe_otherpayment) AS total_patpaid,") \
	_T("   SUM((hfe_deposit + hfe_miengiam) - (hfe_patpaid1 + hfe_diffcost + hfe_foodamount) + hfe_otherpayment) AS refund_amount_,") \
	_T("   SUM((hfe_deposit) - (hfe_patpaid1 + hfe_diffcost + hfe_foodamount) + hfe_otherpayment + ref_deposit) AS refund_amount") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT CASE WHEN hfe_class='I' THEN hcr_dischargedate ELSE hd_enddate END AS hfe_dischargedate,") \
	_T("	 hp_firstname firstname, hp_midname midname, hp_surname surname,") \
	_T("     invoicetbl.*") \
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
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_patpaid ELSE 0 END), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1_,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_diffcost_,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_diffcost,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV' )) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("       0                AS hfe_otherpayment,") \
	_T("       i.hfe_freeamount AS hfe_miengiam") \
	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("     WHERE i.hfe_status = 'P'") \
	_T("     AND i.hfe_payment  = 0") \
	_T("	 AND i.hfe_amount > 0") \
	_T("     AND i.hfe_refund   > 0") \
	_T("     AND r.hfe_type     ='F'") \
	_T("     UNION ALL") \
	_T("     SELECT 'III' AS hfe_index,") \
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
	_T("       0          AS hfe_patpaid1_,") \
	_T("       0          AS hfe_patpaid1,") \
	_T("       0          AS hfe_foodamount,") \
	_T("       0          AS hfe_diffcost_,") \
	_T("       0          AS hfe_diffcost,") \
	_T("       0          AS hfe_policyamount,") \
	_T("       DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("       0          AS hfe_miengiam") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0") \
	_T("     AND (hfe_type        <> 'F'") \
	_T("     OR (hfe_type          ='F'") \
	_T("     AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	_T("     ) invoicetbl") \
	_T("  LEFT JOIN hms_doc ON(hd_docno = hfe_docno)") \
	_T("  LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
	_T("  LEFT JOIN hms_clinical_record ON(hcr_docno                 = hfe_docno)") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY hfe_index, hfe_docno , firstname, midname, surname,") \
	_T("   hfe_deptid ,") \
	_T("   hfe_dischargedate,") \
	_T("   hfe_date,") \
	_T("   hfe_objectid,") \
	_T("   hfe_cash_id,") \
	_T("   hfe_staff,") \
	_T("   hfe_lockeddate") \
	_T("  %s "), szWhere, szOrderBy );


return szSQL;

	//
	////
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}

	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szReceiptStr.IsEmpty())
				szReceiptStr += _T(", ");
			szReceiptStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if (!szReceiptStr.IsEmpty())
	{
		szWhere.Format(_T(" AND object_id <> 7 AND cash_id IN (%s)"), szReceiptStr);
	}
	else
	{
		szWhere.Format(_T(" AND object_id <> 7 AND cash_id > 0") \
					_T(" AND lock_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		if (!szDepts.IsEmpty())
			szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDepts);
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND staff = '%s'"), m_szClerkKey);
		if (!szObjects.IsEmpty())
			szWhere.AppendFormat(_T(" AND object_id IN (%s)"), szObjects);
	}
	if (m_bWithoutGeneral)
		szSubWhere = _T(" AND i.hfe_general_rank = 'Y' ");
	szOrderBy = _T(" ORDER BY dept_id, doc_no");
	if (m_szOrderByKey == _T("01"))
		szOrderBy = _T(" ORDER BY patient_name");

	szIESQL.Format(_T(" SELECT    i.hfe_docno doc_no, ") \
				_T("           i.hfe_deptid dept_id, ") \
				_T("		   i.hfe_date invoice_date,") \
				_T("		   hcr_admitdate admit_date,") \
				_T("           Get_patientname(i.hfe_docno) patient_name, ") \
				_T("		   i.hfe_objectid object_id,") \
				_T("		   i.hfe_cash_id cash_id,") \
				_T("		   i.hfe_staff staff,") \
				_T("		   i.hfe_lockeddate lock_date,") \
				_T("           i.hfe_deposit deposit, ") \
				_T("           i.hfe_amount total_amount, ") \
				_T("           i.hfe_discount inspaid, ") \
				_T("           i.hfe_inspaid - i.hfe_discount pat_paid, ") \
				_T("           f.fee_food, ") \
				_T("		   i.hfe_otherpaid other_paid,") \
				_T("		   0 other_payment,") \
				_T("		   i.hfe_freeamount fa,") \
				_T("           CASE WHEN is_scoliosis > 0 THEN l_diffcost - f.fee_food ELSE f.diff_cost END diff_cost, ") \
				_T("           i.hfe_patpaid total_patpaid, ") \
				_T("           i.hfe_refund refund_amount ") \
				_T(" FROM      hms_fee_invoice i ") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = i.hfe_docno ) ") \
				_T(" LEFT JOIN hms_card ON ( hd_patientno = hc_patientno AND hd_cardidx = hc_idx ) ") \
				_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = hd_docno)") \
				_T(" LEFT JOIN (SELECT hfe_docno, ") \
				_T("                   hfe_invoiceno, ") \
				_T("                   SUM(CASE WHEN hfe_type = 'F' THEN hfe_patpaid ") \
				_T("                       ELSE 0 ") \
				_T("                       END) fee_food, ") \
				_T("                   SUM(CASE WHEN hfe_type = 'F' THEN 0 ") \
				_T("                       ELSE ") \
				_T("                           CASE WHEN hfe_discount = 0 THEN hfe_patpaid ") \
				_T("                           ELSE ") \
				_T("							CASE WHEN hfe_feegroup IN ('OPT_L', 'HITECH_L') AND hfe_type <> 'V' THEN 0 ") \
				_T("								ELSE hfe_diffcost ") \
				_T("							END") \
				_T("                           END ") \
				_T("                       END) diff_cost, ") \
				_T("				   SUM(CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END) is_scoliosis,") \
				_T("				   SUM(CASE WHEN hfe_type = 'V' THEN hfe_diffcost ELSE 0 END) l_diffcost") \
				_T("            FROM   hms_fee ") \
				_T("			LEFT JOIN hms_operation ON (ho_docno = hfe_docno AND ho_idx = hfe_orderid)") \
				_T("            WHERE  hfe_category <> 'Y' AND hfe_status IN ('P', 'R')") \
				_T("            GROUP  BY hfe_docno,hfe_invoiceno) f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T(" WHERE     Length(hc_cardno) > 0 AND i.hfe_status IN ( 'P', 'R' ) AND NVL(hd_outpatient, 'N') <> 'Y'") \
				_T(" AND	   i.hfe_refund > 0 AND hcr_status = 'T' %s"), szSubWhere);

	//Tra tam gui doi doi tuong
	szIESQL.AppendFormat(_T(" UNION ALL") \
				_T(" SELECT    rf.hfe_docno doc_no, ") \
				_T("           rf.hfe_deptid dept_id, ") \
				_T("		   rf.hfe_date,") \
				_T("		   hcr_admitdate admit_date,") \
				_T("           Get_patientname(rf.hfe_docno) patient_name, ") \
				_T("		   rf.hfe_objectid object_id,") \
				_T("		   rf.hfe_cash_id cash_id,") \
				_T("		   rf.hfe_staff staff,") \
				_T("		   rf.hfe_lockeddate lock_date,") \
				_T("           coalesce(d.hfe_amount, 0) deposit, ") \
				_T("           0 total_amount, ") \
				_T("           0 inspaid, ") \
				_T("           0 pat_paid, ") \
				_T("           0, ") \
				_T("		   0 other_paid,") \
				_T("		   CASE WHEN rf.hfe_type = 'G' THEN rf.hfe_amount ELSE 0 END,") \
				_T("		   0,") \
				_T("           0, ") \
				_T("           0 total_patpaid, ") \
				_T("           d.hfe_amount refund_amount ") \
				_T(" FROM hms_fee_refund rf") \
				_T(" LEFT JOIN hms_fee_deposit d ON (rf.hfe_refidx = d.hfe_invoiceno)") \
				_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = rf.hfe_docno)") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = hcr_docno ) ") \
				_T(" LEFT JOIN hms_card ON ( hd_patientno = hc_patientno AND hd_cardidx = hc_idx ) ") \
				_T(" WHERE (d.hfe_status = 'R' OR rf.hfe_type = 'G') AND rf.hfe_status = 'P'") \
				_T(" AND NVL(hd_outpatient, 'N') <> 'Y' AND hcr_status = 'T'"));

	szOutpatientSQL.Format(_T(" SELECT    i.hfe_docno doc_no, ") \
				_T("           i.hfe_deptid dept_id, ") \
				_T("		   i.hfe_date,") \
				_T("		   htr_admitdate admit_date,") \
				_T("           Get_patientname(i.hfe_docno) patient_name, ") \
				_T("		   i.hfe_objectid object_id,") \
				_T("		   i.hfe_cash_id cash_id,") \
				_T("		   i.hfe_staff staff,") \
				_T("		   i.hfe_lockeddate lock_date,") \
				_T("           i.hfe_deposit deposit, ") \
				_T("           i.hfe_amount total_amount, ") \
				_T("           i.hfe_discount inspaid, ") \
				_T("           i.hfe_inspaid - i.hfe_discount pat_paid, ") \
				_T("           f.fee_food, ") \
				_T("		   i.hfe_otherpaid other_paid,") \
				_T("		   0,") \
				_T("		   i.hfe_freeamount,") \
				_T("           CASE WHEN is_scoliosis > 0 THEN l_diffcost - f.fee_food ELSE f.diff_cost END diff_cost, ") \
				_T("           i.hfe_patpaid total_patpaid, ") \
				_T("           i.hfe_refund refund_amount ") \
				_T(" FROM      hms_fee_invoice i ") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = i.hfe_docno ) ") \
				_T(" LEFT JOIN hms_card ON ( hd_patientno = hc_patientno AND hd_cardidx = hc_idx ) ") \
				_T(" LEFT JOIN hms_treatment_record ON (htr_docno = hd_docno AND htr_treattime = i.hfe_treattime)") \
				_T(" LEFT JOIN (SELECT hfe_docno, ") \
				_T("                   hfe_invoiceno, ") \
				_T("                   SUM(CASE WHEN hfe_type = 'F' THEN hfe_patpaid ") \
				_T("                       ELSE 0 ") \
				_T("                       END) fee_food, ") \
				_T("                   SUM(CASE WHEN hfe_type = 'F' THEN 0 ") \
				_T("                       ELSE ") \
				_T("                           CASE WHEN hfe_discount = 0 THEN hfe_patpaid ") \
				_T("                           ELSE ") \
				_T("							CASE WHEN hfe_feegroup IN ('OPT_L', 'HITECH_L') AND hfe_type <> 'V' THEN 0 ") \
				_T("								ELSE hfe_diffcost ") \
				_T("							END") \
				_T("                           END ") \
				_T("                       END) diff_cost, ") \
				_T("				   SUM(CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END) is_scoliosis,") \
				_T("				   SUM(CASE WHEN hfe_type = 'V' THEN hfe_diffcost ELSE 0 END) l_diffcost") \
				_T("            FROM   hms_fee ") \
				_T("			LEFT JOIN hms_operation ON (ho_docno = hfe_docno AND ho_idx = hfe_orderid)") \
				_T("            WHERE  hfe_category <> 'Y' AND hfe_status IN ('P', 'R')") \
				_T("            GROUP  BY hfe_docno,hfe_invoiceno) f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T(" WHERE     Length(hc_cardno) > 0 AND i.hfe_status IN ( 'P', 'R' ) AND NVL(hd_outpatient, 'N') = 'Y'") \
				_T("  AND i.hfe_refund > 0 AND htr_status = 'T' %s"), szSubWhere);
	//Tra tam gui doi doi tuong
	szOutpatientSQL.AppendFormat(_T(" UNION ALL") \
				_T(" SELECT    rf.hfe_docno doc_no, ") \
				_T("           rf.hfe_deptid dept_id, ") \
				_T("		   rf.hfe_date,") \
				_T("		   hcr_admitdate admit_date,") \
				_T("           Get_patientname(rf.hfe_docno) patient_name, ") \
				_T("		   rf.hfe_objectid object_id,") \
				_T("		   rf.hfe_cash_id cash_id,") \
				_T("		   rf.hfe_staff staff,") \
				_T("		   rf.hfe_lockeddate lock_date,") \
				_T("           d.hfe_amount deposit, ") \
				_T("           0 total_amount, ") \
				_T("           0 inspaid, ") \
				_T("           0 pat_paid, ") \
				_T("           0, ") \
				_T("		   0 other_paid,") \
				_T("		   CASE WHEN rf.hfe_type = 'G' THEN rf.hfe_amount ELSE 0 END,") \
				_T("		   0,") \
				_T("           0, ") \
				_T("           0 total_patpaid, ") \
				_T("           d.hfe_amount refund_amount ") \
				_T(" FROM hms_fee_refund rf") \
				_T(" LEFT JOIN hms_fee_deposit d ON (rf.hfe_refidx = d.hfe_invoiceno)") \
				_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = rf.hfe_docno)") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = hcr_docno ) ") \
				_T(" LEFT JOIN hms_card ON ( hd_patientno = hc_patientno AND hd_cardidx = hc_idx ) ") \
				_T(" WHERE (d.hfe_status = 'R' OR rf.hfe_type = 'G') AND rf.hfe_status = 'P'") \
				_T(" AND NVL(hd_outpatient, 'N') = 'Y' AND hcr_status = 'T'"));
	szSQL.Format(_T("SELECT * FROM (%s UNION ALL %s) WHERE 1=1 %s %s"), szIESQL, szOutpatientSQL, szWhere, szOrderBy);

	return szSQL;
}

CString CFMInsuranceOutlayList::GetQueryString3()
{
	CString szSQL, szWhere;
	CString szDepts, szObjects, szReceiptStr, szIESQL, szOutpatientSQL, szOrderBy, szSubWhere, szFeeType, szHavingClause;


	szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
		if (m_wndList.GetCheck(i))
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);


	szOrderBy = _T(" ORDER BY dept_id, doc_no");
	if (m_szOrderByKey == _T("01"))
		szOrderBy = _T(" ORDER BY hfe_index, NLSSORT(firstname, 'NLS_SORT=VIETNAMESE'), NLSSORT(midname, 'NLS_SORT=VIETNAMESE'), NLSSORT(surname, 'NLS_SORT=VIETNAMESE')");

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
	if (m_bFree) szHavingClause.AppendFormat(_T(" HAVING SUM(hfe_miengiam) > 0"));
	if (m_bSoldierWCard) szWhere.AppendFormat(_T(" AND substr(cardno, 1, 2) = 'QN'"));
	if (m_bOtherFee) szWhere.AppendFormat(_T(" HAVING SUM(chi_doituong+chi_maycnc+chi_de_muc+chi_khac)>0"));
	if (m_bIncomePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOutLayPackage) szWhere.AppendFormat(_T(" HAVING SUM(chi_goidv)>0"));
	//Update 20/04/2017
	//Truong hop chi tra lai o ngoai tru, trong hms_fee_invoice khong thoa man dieu kien i.hfe_payment  = 0 AND i.hfe_amount > 0 AND i.hfe_refund > 0
	szSQL.Format(_T(" SELECT hfe_index,") \
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
	_T("   ROUND(SUM(hfe_deposit + ref_deposit)) AS deposit,") \
	_T("   ROUND(SUM(tran_bao_viet))             AS tran_bao_viet,") \
	_T("   ROUND(SUM(hfe_amount)) AS total_amount,") \
	_T("   ROUND(SUM(hfe_discount)) AS bhtt,") \
	_T("   ROUND(SUM(hfe_foodamount)) AS fee_food,") \
	_T("   ROUND(SUM(hfe_packageamount)) AS thu_goidv,") \
	_T("   ROUND(SUM(phi_ranggia))       AS phi_ranggia,") \
	_T("   ROUND(SUM(hfe_policyamount)) AS other_paid,") \
	_T("   ROUND(SUM(hfe_otherpayment)) AS other_payment,") \
	_T("   ROUND(SUM(hfe_miengiam)) AS fa,") \
	_T("   ROUND(SUM(nguoncovid))   AS nguoncovid,") \
	_T("   ROUND(SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine - hfe_policyamount - hfe_miengiam-hfe_packageamount-phi_ranggia-nguoncovid)) vien_phi,") \
	_T("   ROUND(SUM(hfe_hitechmachine)) thu_maycnc,") \
	_T("   ROUND(SUM(chi_doituong+tl_tienthuoc_vattu)) chi_doituong,") \
	_T("   ROUND(SUM(chi_maycnc)) chi_maycnc,") \
	_T("   ROUND(SUM(chi_de_muc)) chi_de_muc,") \
	_T("   ROUND(SUM(chi_khac)) chi_khac,") \
	_T("   ROUND(SUM(chi_goidv)) chi_goidv,") \
	_T("   ROUND(SUM(tl_nguoncovid+tl_nguoncovid1)) tl_nguoncovid,") \
	_T("   CASE WHEN SUM(hfe_patpaid+hfe_otherpayment) > 0 THEN ROUND(SUM(hfe_patpaid +hfe_otherpayment- (chi_doituong + chi_khac + chi_maycnc + chi_de_muc))) ELSE ROUND(SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc + chi_goidv +tl_nguoncovid+tl_nguoncovid1+tl_tienthuoc_vattu )) END cong,") \
	_T("   CASE WHEN SUM(hfe_deposit + tran_bao_viet + ref_deposit+hfe_otherpayment+hfe_miengiam) > 0 THEN ROUND(SUM(hfe_deposit + tran_bao_viet + ref_deposit+hfe_otherpayment +hfe_miengiam - (hfe_patpaid - (hfe_policyamount+ nguoncovid + chi_maycnc + chi_de_muc)))) ELSE ROUND(SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc + chi_goidv + tl_nguoncovid + tl_nguoncovid1 + tl_tienthuoc_vattu)) END cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT CASE WHEN hfe_class='I' THEN hcr_dischargedate ELSE hd_enddate END AS hfe_dischargedate,") \
	_T("	 hp_firstname firstname, hp_midname midname, hp_surname surname,") \
	_T("     invoicetbl.*, hd_cardno cardno") \
	_T("   FROM") \
	_T("     (SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("       r.hfe_cash_id,") \
	_T("       i.hfe_docno,") \
	_T("       i.hfe_date,") \
	_T("       i.hfe_lockeddate,") \
	_T("       i.hfe_staff,") \
	_T("       i.hfe_objectid,") \
	_T("       i.hfe_deptid,") \
	_T("       i.hfe_class,") \
	_T("       i.hfe_deposit,") \
	_T("       COALESCE(i.HFE_EXTINS_PAID,0) AS tran_bao_viet,") \
	_T("	   0 ref_deposit,") \
	_T("       i.hfe_amount,") \
	_T("       i.hfe_inspaid,") \
	_T("       i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("	   (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f  WHERE f.hfe_docno = i.hfe_docno  AND f.hfe_invoiceno= i.hfe_invoiceno  AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')  AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) AS hfe_packageamount,	") \

	_T("  (select coalesce(sum(hfe_patpaid), 0) from hms_fee f left join hms_fee_list on (hfl_feeid = hfe_itemid) ") \
	_T("         where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno AND NVL(f.hfe_category, 'N') NOT IN ('Y')  ") \
	_T("         AND f.hfe_status  IN ('P', 'R') AND hfl_categoryid = 127)") \
	_T("         AS phi_ranggia,  ") \
	_T("       CASE WHEN i.hfe_class = 'I' AND hfe_otherpaid>0 THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP','BBV')) ELSE 0 END ") \
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
	_T("	   0 chi_khac,") \
	_T("	   0 chi_goidv, ") \
	_T("	   0 tl_tienthuoc_vattu,") \

	_T("  (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee f") \
	_T("     WHERE f.hfe_docno   = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno = i.hfe_invoiceno") \
	_T("     AND f.hfe_category  = 'COV'") \
	_T("     AND i.hfe_otherpaid >0") \
	_T("     ) AS nguoncovid, ") \

	_T("     0 AS tl_nguoncovid,") \
	_T("     0 AS tl_nguoncovid1") \

	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("     WHERE i.hfe_status = 'P' ") \
	_T("  AND (i.hfe_payment   = 0 ") \
	_T("   OR (i.hfe_payment > 0 ") \
	_T("   AND i.HFE_EXTINS_PAID>0))") \
	_T("   AND (i.hfe_refund    > 0") \
	_T("   OR (i.hfe_refund     = 0") \
	_T("   AND i.HFE_EXTINS_PAID>0))") \
	_T("   AND i.hfe_amount     > 0") \
	_T("   AND r.hfe_type       ='F'") \

	_T("	 AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) = 0 ") \
	_T("     AND i.HFE_OBJECTID<>1") \
	_T("     UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("       hfe_cash_id,") \
	_T("       hfe_docno,") \
	_T("       hfe_date,") \
	_T("       hfe_lockeddate,") \
	_T("       hfe_staff,") \
	_T("       hfe_objectid,") \
	_T("       hfe_deptid,") \
	_T("       hfe_class,") \
	_T("       0 AS hfe_deposit,") \
	_T("	   0 AS tran_bao_viet,") \
	_T("	   DECODE('F', hfe_type, hfe_amount, 0) AS ref_deposit,") \
	_T("       0          AS hfe_amount,") \
	_T("       0          AS hfe_inspaid,") \
	_T("       0          AS hfe_discount,") \
	_T("       0          AS hfe_foodamount,") \
	_T("       0          AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
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
	_T("		chi_khac,") \
	_T("	   0 chi_goidv,") \
	_T("	   0 tl_tienthuoc_vattu,") \
	_T("	   0 AS nguoncovid, ") \

	_T("      0 AS tl_nguoncovid,") \
	_T("      0 AS tl_nguoncovid1") \

	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0 AND hfe_type <> 'V'") \
	_T("     AND (hfe_type        <> 'F'") \
	_T("     OR (hfe_type          ='F'") \
	_T("     AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//---------------------------------------------------------------------------------------------------------------------------------
	_T("       UNION ALL") \
	_T("       SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
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
	_T("	   0									AS tran_bao_viet,") \
	_T("       0                                    AS ref_deposit,") \
	_T("       0                                    AS hfe_amount,") \
	_T("       0                                    AS hfe_inspaid,") \
	_T("       0                                    AS hfe_discount,") \
	_T("       0                                    AS hfe_foodamount,") \
	_T("       0									AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("       0                                    AS hfe_policyamount,") \
	_T("       0                                    AS hfe_othamount,") \
	_T("       0                                    AS hfe_miengiam,") \
	_T("       0 hfe_patpaid,") \
	_T("       0 hfe_otherreceipt,") \
	_T("       0 hfe_hitechmachine,") \
	_T("       0 chi_doituong,") \
	_T("      0 chi_maycnc,") \
	_T("      0 chi_de_muc,") \
	//_T("      0 chi_khac,") \//
	//Ngày 22/08/2019 Bổ sung nghiệp vụ trả lại đơn thuốc ra về ở các khoa ung thư A6//
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
	//----------------------------//
	_T("	   0 chi_goidv, ") \
	_T("	   0 tl_tienthuoc_vattu, ") \
	_T("	   0 AS nguoncovid, ") \
	_T("      0 AS tl_nguoncovid,") \
	_T("      0 AS tl_nguoncovid1") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0") \
	_T("     AND hfe_type         <> 'V'") \
	_T("     AND (hfe_type        =  'F' )") \
	_T("     AND i.hfe_class              ='E'") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//---------------------------------------------------------------------------------------------------------------------------------
	_T("     UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("       hfe_cash_id,") \
	_T("       hfe_docno,") \
	_T("       hfe_date,") \
	_T("       hfe_lockeddate,") \
	_T("       hfe_staff,") \
	_T("       hfe_objectid,") \
	_T("       hfe_deptid,") \
	_T("       hfe_class,") \
	_T("       0 AS hfe_deposit,") \
	_T("	   0 AS tran_bao_viet,") \
	_T("	   0 AS ref_deposit,") \
	_T("       0          AS hfe_amount,") \
	_T("       0          AS hfe_inspaid,") \
	_T("       0          AS hfe_discount,") \
	_T("       0          AS hfe_foodamount,") \
	_T("       0          AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
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
	_T("		chi_khac,") \
	_T("	   (SELECT COALESCE(SUM(r.hfe_cost), 0) FROM hms_fee_refundline r  WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('18','19','20')) chi_goidv, ") \
	_T("	   0 tl_tienthuoc_vattu, ") \
	_T("	   0 AS nguoncovid, ") \
	_T("  (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline r") \
	_T("     WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("     AND r.hfe_docno       = i.hfe_docno") \
	_T("     AND r.hfe_itemid     IN ('22')") \
	_T("     ) tl_nguoncovid,") \
	_T("     0 AS tl_nguoncovid1") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0 AND hfe_type = 'V'") \
	_T("     AND i.HFE_OBJECTID<>1") \
	_T("     UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
	_T("       r.hfe_cash_id,") \
	_T("       i.hfe_docno,") \
	_T("       i.hfe_date,") \
	_T("       i.hfe_lockeddate,") \
	_T("       i.hfe_staff,") \
	_T("       i.hfe_objectid,") \
	_T("       i.hfe_deptid,") \
	_T("       i.hfe_class,") \
	_T("       0 hfe_deposit,") \
	_T("	   0 AS tran_bao_viet,") \
	_T("	   0 ref_deposit,") \
	_T("       0 hfe_amount,") \
	_T("       0 hfe_inspaid,") \
	_T("       0 hfe_discount,") \
	_T("		0 hfe_foodamount,") \
	_T("       0  AS hfe_packageamount,") \
	_T("		0                                    AS phi_ranggia,") \
	_T("		0 hfe_policyamount,") \
	_T("       0  AS hfe_otherpayment,") \
	_T("       0  AS hfe_miengiam,") \
	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl left join hms_fee_list l ON (rl.hfe_itemid = l.hfl_feeid) WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND NVL(substr(l.hfl_feeid, 1, 2), 'N') <> 'FF' AND rl.hfe_itemid NOT IN (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE') AND NVL(rl.HFE_XNCOVID, 'X')<>'Y' ) chi_doituong,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND l.hfl_hitechmachine = 'Y') chi_maycnc,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND substr(l.hfl_feeid, 1, 2) = 'FF') chi_de_muc,") \
	_T("	   0 chi_khac,") \

	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee_refundline rl") \
	_T("     WHERE rl.hfe_invoiceno = r.hfe_invoiceno") \
	_T("     AND rl.hfe_itemid     IN") \
	_T("       (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE'") \
	_T("       )") \
	_T("     )chi_goidv,") \

	
	_T("	   0 tl_tienthuoc_vattu,") \
	_T("	   0 AS nguoncovid,") \

	_T("	 0 AS tl_nguoncovid,") \
	_T("     (SELECT COALESCE(SUM(l.hfe_patpaid), 0)") \
	_T("     FROM hms_fee_refundline l") \
	_T("     WHERE l.hfe_invoiceno    = r.hfe_invoiceno") \
	_T("     AND l.hfe_docno          = r.hfe_docno") \
	_T("     AND NVL(HFE_XNCOVID, 'X')='Y'") \
	_T("     )tl_nguoncovid1") \

	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	//_T("     WHERE i.hfe_status = 'P' AND i.hfe_payment  = 0 AND i.hfe_amount > 0 AND i.hfe_refund > 0 AND r.hfe_type ='F'") \//
	_T("     WHERE i.hfe_status = 'P' AND i.hfe_amount > 0 AND r.hfe_type ='F'") \
	_T("	 AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) > 0 ") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//
	_T(" UNION ALL") \
	_T("     SELECT") \
	_T("       CASE") \
	_T("         WHEN r.hfe_class  ='I'") \
	_T("         AND r.HFE_OBJECTID=11") \
	_T("         THEN 'II'") \
	_T("         WHEN r.hfe_class   ='I'") \
	_T("         AND r.HFE_OBJECTID<>11") \
	_T("         THEN 'I'") \
	_T("         WHEN r.hfe_class  ='E'") \
	_T("         AND r.HFE_OBJECTID=11") \
	_T("         THEN 'IV'") \
	_T("         WHEN r.hfe_class   ='E'") \
	_T("         AND r.HFE_OBJECTID<>11") \
	_T("         THEN 'III'") \
	_T("       END AS hfe_index,") \
	_T("       hfe_cash_id,") \
	_T("       hfe_docno,") \
	_T("       hfe_date,") \
	_T("       hfe_lockeddate,") \
	_T("       hfe_staff,") \
	_T("       hfe_objectid,") \
	_T("       hfe_deptid,") \
	_T("       hfe_class,") \
	_T("       0 AS hfe_deposit,") \
	_T("	   0 AS tran_bao_viet,") \
	_T("       0 AS ref_deposit,") \
	_T("       0 AS hfe_amount,") \
	_T("       0 AS hfe_inspaid,") \
	_T("       0 AS hfe_discount,") \
	_T("       0 AS hfe_foodamount,") \
	_T("       0 AS hfe_packageamount,") \
	_T("       0 AS phi_ranggia,") \
	_T("       0 AS hfe_policyamount,") \
	_T("       0 AS hfe_othamount,") \
	_T("       0 AS hfe_miengiam,") \
	_T("       0 hfe_patpaid,") \
	_T("       0 hfe_otherreceipt,") \
	_T("       0 hfe_hitechmachine,") \
	_T("       0 chi_doituong,") \
	_T("       0 chi_maycnc,") \
	_T("       0 chi_de_muc,") \
	_T("       0 chi_khac,") \
	_T("       0 chi_goidv,") \
	_T("       CASE") \
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
	_T("     END AS tl_tienthuoc_vattu,") \
	_T("	 0 AS nguoncovid, ") \
	_T("  0   AS tl_nguoncovid,") \
	_T("     0   AS tl_nguoncovid1") \
	_T("     FROM hms_fee_refund r") \
	_T("     WHERE r.hfe_status   = 'P'") \
	_T("     AND hfe_amount     > 0") \
	_T("     AND r.hfe_type       = 'F' AND r.hfe_class='E' AND r.hfe_isreq='Y'") \
	_T("     AND r.HFE_OBJECTID<>1    ") \
	//
	_T("     ) invoicetbl") \
	_T("  LEFT JOIN hms_doc ON(hd_docno = hfe_docno)") \
	_T("  LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
	_T("  LEFT JOIN hms_clinical_record ON(hcr_docno                 = hfe_docno)") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY hfe_index, hfe_docno , firstname, midname, surname,") \
	_T("   hfe_deptid ,") \
	_T("   hfe_dischargedate,") \
	_T("   hfe_date,") \
	_T("   hfe_objectid,") \
	_T("   hfe_cash_id,") \
	_T("   hfe_staff,") \
	_T("   hfe_lockeddate") \
	_T("  %s %s "), szWhere, szHavingClause, szOrderBy );
	return szSQL;
}
CString CFMInsuranceOutlayList::GetQueryString_check()
{
	CString szSQL, szWhere;
	CString szDepts, szObjects, szReceiptStr, szIESQL, szOutpatientSQL, szOrderBy, szSubWhere, szFeeType, szHavingClause;


	szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
		if (m_wndList.GetCheck(i))
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);


	szOrderBy = _T(" ORDER BY dept_id, doc_no");
	if (m_szOrderByKey == _T("01"))
		szOrderBy = _T(" ORDER BY NLSSORT(firstname, 'NLS_SORT=VIETNAMESE'), NLSSORT(midname, 'NLS_SORT=VIETNAMESE'), NLSSORT(surname, 'NLS_SORT=VIETNAMESE')");

	if (m_bInpatient){
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'I'");
	}
	if (m_bOutpatient){
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'II'");
	}
	if (m_bDeposit){
		if (!szFeeType.IsEmpty())
			szFeeType += _T(", ");
		szFeeType += _T("'III'");
	}
	if (!szFeeType.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	if (m_bFree) szHavingClause.AppendFormat(_T(" HAVING SUM(hfe_miengiam) > 0"));
	if (m_bSoldierWCard) szWhere.AppendFormat(_T(" AND substr(cardno, 1, 2) = 'QN'"));
	if (m_bOtherFee) szWhere.AppendFormat(_T(" HAVING SUM(chi_doituong+chi_maycnc+chi_de_muc+chi_khac)>0"));
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
int CFMInsuranceOutlayList::OnListCheckAllIns()
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
int CFMInsuranceOutlayList::OnListUnCheckAllIns()
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
int CFMInsuranceOutlayList::OnListCheckAllSolder()
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

int CFMInsuranceOutlayList::OnListUnCheckAllSolder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	//if ((_T("QUAN"))==szItemText.Right(4) && (_T("BHQUAN"))!= szItemText.Right(6)  )//
	if (((_T("QUAN"))==szItemText.Right(4) || (_T("LUONG"))==szItemText.Right(5)) && (_T("BHQUAN"))!= szItemText.Right(6)  )
	{
		m_wndList.SetCheck(i, false);
		nCheck++;
	}	
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMInsuranceOutlayList::OnListCheckAllInsSolder()
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

int CFMInsuranceOutlayList::OnListUnCheckAllInsSolder()
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
void CFMInsuranceOutlayList::OnPrint3rdver_Ver2()
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
	double nTotal[25], nGroupTotal1[25], nGrands[25];
	for (int i = 0; i < 25; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
		nGrands[i] = 0;
	}

	CMap<CString, LPCTSTR, CString, LPCTSTR> sIndex;

	sIndex[_T("I")] = _T("Chi nội trú BH khác");
	sIndex[_T("II")] = _T("Chi nội trú BH quân");	
	sIndex[_T("III")] = _T("Chi ngoại trú BH khác");
	sIndex[_T("IV")] = _T("Chi ngoại trú BH quân");
	sIndex[_T("V")] = _T("Chi khác BH khác");
	sIndex[_T("VI")] = _T("Chi khác BH quân");
	

	szSQL = GetQueryString3_Ver2();
    //_msg(_T("%s"), szSQL);
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		if (nCount < 0) _msg(_T("%s"), szSQL);
		else _fmsg(_T("%s"), szSQL);
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOANCHIBENHNHANBHYT_1_Ver2.RPT")))
		return;
	data_name.Add(_T("total_amount"));
	data_name.Add(_T("bhtt"));
	data_name.Add(_T("deposit"));
	data_name.Add(_T("vien_phi"));
	data_name.Add(_T("thu_maycnc"));
	data_name.Add(_T("fee_food"));
	data_name.Add(_T("thu_goidv"));
	data_name.Add(_T("phi_ranggia"));
	data_name.Add(_T("other_paid"));
	data_name.Add(_T("fa"));
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
_tprintf(_T("\r\n2"));

rptHeader->SetValue(_T("Invoices"), m_szCashIDS);

	CString szNewDept, szOldDept;
	long nCashID, nOldCashID=0;
	int col = 5;
	int nsum = (int)data_name.GetCount()-1;
	CRecord rsx(&pMF->m_db);
	CString szInvoiceDate, szInvoiceNo, szUserID;
	while (!rs.IsEOF()){
		//Group Seperation
		rs.GetValue(_T("hfe_index"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{

			if ((m_szOrderByKey == _T("04") || m_szOrderByKey == _T("05")) && nGrands[nsum] > 0){
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++){
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
			}

			if (nGroupTotal1[nsum] > 0){
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				CReportItem *obj = rptGroup->GetItem(_T("SubTotal"));
				if(obj){
					tmpStr.Format(_T("\x43\x1ED9ng (%s)"), szOldLev1);
					obj->SetText(tmpStr);
				}
				for (int i = 0; i < data_name.GetCount(); i++){

					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i+col);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup){
				sIndex.Lookup(szNewLev1, tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldLev1 = szNewLev1;
			nIdx = 1;
			for (int i =0; i < data_name.GetCount(); i++)
				nGrands[i] = 0;

		}
		if(m_szOrderByKey == _T("04")){
			rs.GetValue(_T("deptid"), szNewDept);
			if(szNewDept != szOldDept){
				szOldDept = szNewDept;
				if (nGrands[nsum] > 0){
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++){
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
				}

				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
				if (rptGroup){
					tmpStr.Format(_T("Kho\x61 %s"), szNewDept);
					rptGroup->SetValue(_T("GroupName"), tmpStr);
				}
			}
		}


		if(m_szOrderByKey == _T("05")){
			rs.GetValue(_T("cash_id"), nCashID);
			if(nCashID != nOldCashID){
				nOldCashID = nCashID;

				if (nGrands[nsum] > 0){
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++){
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
				}

				szSQL.Format(_T("SELECT fac_invoiceno, TO_CHAR(fac_invoicedate,'DD/MM/YYYY') as invoicedate, fac_user_id FROM fa_cash WHERE fac_cash_id=%ld "), nCashID);
				rsx.ExecSQL(szSQL);
				rsx.GetValue(_T("fac_invoiceno"), szInvoiceNo);
				rsx.GetValue(_T("invoicedate"), szInvoiceDate);
				rsx.GetValue(_T("fac_user_id"), szUserID);
				tmpStr.Format(_T("S\x1ED1 phi\x1EBFu [%s] Ng\xE0y [%s] Ng\x1B0\x1EDDi thu [%s]"),  szInvoiceNo, szInvoiceDate, szUserID);
				CReportSection *grp = NULL;
				grp = rpt.GetGroupHeader(0);
				if(grp){
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("GroupName"), tmpStr);
				}
				nOldCashID = nCashID;

			}
		}

		rptDetail = rpt.AddDetail();
		if (rptDetail){
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			//rptDetail->SetValue(_T("4"), rs.GetValue(_T("discharge_date")));
			//rptDetail->SetValue(_T("5"), rs.GetValue(_T("invoice_date")));
			for (int i = 0; i < data_name.GetCount(); i++){
				rs.GetValue(data_name.GetAt(i), nTmp);
				nGroupTotal1[i]+= nTmp;
				nGrands[i] += nTmp;
				nTotal[i] += nTmp;
				tmpStr.Format(_T("%d"), i+col);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			//	_tprintf(_T("\r\n%d"), i);
			}
			
		}
		rs.MoveNext();
	}

	if(m_szOrderByKey == _T("04") || m_szOrderByKey == _T("05"))
		if (nGrands[nsum] > 0){
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			for (int i = 0; i < data_name.GetCount(); i++){
				tmpStr.Format(_T("%f"), nGrands[i]);
				szPos.Format(_T("s%d"), i+col);
				rptGroup->SetValue(szPos, tmpStr);
				nGrands[i] = 0;
			}
		}
_tprintf(_T("\r\n3"));
	if (nGroupTotal1[nsum] > 0){
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < data_name.GetCount(); i++){
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+col);
			rptGroup->SetValue(szPos, tmpStr);
		}
	}
_tprintf(_T("\r\n4"));
	//if (nTotal[nsum] > 0)
		for (int i = 0; i < data_name.GetCount(); i++){
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("t%d"), i+col);
			rpt.GetReportFooter()->SetValue(szPos, tmpStr);
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
	szValue.Format(_T("%.3f"), nTotal[nsum]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	rpt.PrintPreview();
}
CString CFMInsuranceOutlayList::GetQueryString3_Ver2()
{
	CString szSQL, szWhere;
	CString szDepts, szObjects, szReceiptStr, szIESQL, szOutpatientSQL, szOrderBy, szSubWhere, szFeeType, szHavingClause;


	szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
		if (m_wndList.GetCheck(i))
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);


	szOrderBy = _T(" ORDER BY dept_id, doc_no");
	if (m_szOrderByKey == _T("01"))
		szOrderBy = _T(" ORDER BY hfe_index, NLSSORT(firstname, 'NLS_SORT=VIETNAMESE'), NLSSORT(midname, 'NLS_SORT=VIETNAMESE'), NLSSORT(surname, 'NLS_SORT=VIETNAMESE')");

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
	if (m_bFree) szHavingClause.AppendFormat(_T(" HAVING SUM(hfe_miengiam) > 0"));
	if (m_bSoldierWCard) szWhere.AppendFormat(_T(" AND substr(cardno, 1, 2) = 'QN'"));
	if (m_bOtherFee) szWhere.AppendFormat(_T(" HAVING SUM(chi_doituong+chi_maycnc+chi_de_muc+chi_khac)>0"));
	if (m_bIncomePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOutLayPackage) szWhere.AppendFormat(_T(" HAVING SUM(chi_goidv)>0"));
	//Update 20/04/2017
	//Truong hop chi tra lai o ngoai tru, trong hms_fee_invoice khong thoa man dieu kien i.hfe_payment  = 0 AND i.hfe_amount > 0 AND i.hfe_refund > 0
	szSQL.Format(_T(" SELECT hfe_index,") \
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
	_T("   ROUND(SUM(hfe_deposit + ref_deposit)) AS deposit,") \
	_T("   ROUND(SUM(hfe_amount)) AS total_amount,") \
	_T("   ROUND(SUM(hfe_discount)) AS bhtt,") \
	_T("   ROUND(SUM(hfe_foodamount)) AS fee_food,") \
	_T("   ROUND(SUM(hfe_packageamount)) AS thu_goidv,") \
	_T("   ROUND(SUM(phi_ranggia))       AS phi_ranggia,") \
	_T("   ROUND(SUM(hfe_policyamount)) AS other_paid,") \
	_T("   ROUND(SUM(hfe_otherpayment)) AS other_payment,") \
	_T("   ROUND(SUM(hfe_miengiam)) AS fa,") \
	_T("   ROUND(SUM(tien_thuoc_dv) )                                                                        AS tien_thuoc_dv,") \
	_T("   ROUND(SUM(tien_thuoc_bh) )                                                                        AS tien_thuoc_bh,") \
	_T("   ROUND(SUM(tien_vattu_dv) )                                                                        AS tien_vattu_dv,") \
	_T("   ROUND(SUM(tien_vattu_bh) )                                                                        AS tien_vattu_bh,") \
	//_T("   ROUND(SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine - hfe_policyamount - hfe_miengiam-hfe_packageamount-phi_ranggia)) vien_phi,") \//
	_T("   ROUND(SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine - hfe_policyamount - hfe_miengiam-hfe_packageamount-phi_ranggia-tien_thuoc_dv - tien_thuoc_bh-tien_vattu_dv-tien_vattu_bh)) vien_phi,") \
	_T("   ROUND(SUM(hfe_hitechmachine)) thu_maycnc,") \
	_T("   ROUND(SUM(chi_doituong+tl_tienthuoc_vattu)) chi_doituong,") \
	_T("   ROUND(SUM(chi_maycnc)) chi_maycnc,") \
	_T("   ROUND(SUM(chi_de_muc)) chi_de_muc,") \
	_T("   ROUND(SUM(chi_khac)) chi_khac,") \
	_T("   ROUND(SUM(chi_goidv)) chi_goidv,") \
	_T("   CASE WHEN SUM(hfe_patpaid+hfe_otherpayment) > 0 THEN ROUND(SUM(hfe_patpaid +hfe_otherpayment- (chi_doituong + chi_khac + chi_maycnc + chi_de_muc))) ELSE ROUND(SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc + chi_goidv +tl_tienthuoc_vattu )) END cong,") \
	_T("   CASE WHEN SUM(hfe_deposit + ref_deposit+hfe_otherpayment+hfe_miengiam) > 0 THEN ROUND(SUM(hfe_deposit + ref_deposit+hfe_otherpayment +hfe_miengiam - (hfe_patpaid - (hfe_policyamount+ 0 + chi_maycnc + chi_de_muc)))) ELSE ROUND(SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc + chi_goidv + tl_tienthuoc_vattu)) END cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT CASE WHEN hfe_class='I' THEN hcr_dischargedate ELSE hd_enddate END AS hfe_dischargedate,") \
	_T("	 hp_firstname firstname, hp_midname midname, hp_surname surname,") \
	_T("     invoicetbl.*, hd_cardno cardno") \
	_T("   FROM") \
	_T("     (SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
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
	_T("	   (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f  WHERE f.hfe_docno = i.hfe_docno  AND f.hfe_invoiceno= i.hfe_invoiceno  AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')  AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP', 'COV' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) AS hfe_packageamount,	") \

	_T("  (select coalesce(sum(hfe_patpaid), 0) from hms_fee f left join hms_fee_list on (hfl_feeid = hfe_itemid) ") \
	_T("         where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno AND NVL(f.hfe_category, 'N') NOT IN ('Y')  ") \
	_T("         AND f.hfe_status  IN ('P', 'R') AND hfl_categoryid = 127)") \
	_T("         AS phi_ranggia,  ") \
	_T("       CASE WHEN i.hfe_class = 'I' AND hfe_otherpaid>0 THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'COV', 'BBV')) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("       0                AS hfe_otherpayment,") \
	_T("       i.hfe_freeamount AS hfe_miengiam,") \

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
	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("     WHERE i.hfe_status = 'P' AND i.hfe_payment  = 0 AND i.hfe_amount > 0 AND i.hfe_refund > 0 AND r.hfe_type ='F'") \
	_T("	 AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) = 0 ") \
	_T("     AND i.HFE_OBJECTID<>1") \
	_T("     UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
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
	_T("       0          AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("       0          AS hfe_policyamount,") \
	_T("       DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("       0          AS hfe_miengiam,") \
	
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
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0 AND hfe_type <> 'V'") \
	_T("     AND (hfe_type        <> 'F'") \
	_T("     OR (hfe_type          ='F'") \
	_T("     AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//---------------------------------------------------------------------------------------------------------------------------------
	_T("       UNION ALL") \
	_T("       SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
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
	_T("       0									AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("       0                                    AS hfe_policyamount,") \
	_T("       0                                    AS hfe_othamount,") \
	_T("       0                                    AS hfe_miengiam,") \

	_T("     0 tien_thuoc_dv,") \
	_T("     0 tien_thuoc_bh,") \
	_T("     0 tien_vattu_dv,") \
	_T("     0 tien_vattu_bh,") \


	_T("       0 hfe_patpaid,") \
	_T("       0 hfe_otherreceipt,") \
	_T("       0 hfe_hitechmachine,") \
	_T("       0 chi_doituong,") \
	_T("      0 chi_maycnc,") \
	_T("      0 chi_de_muc,") \
	//_T("      0 chi_khac,") \//
	//Ngày 22/08/2019 Bổ sung nghiệp vụ trả lại đơn thuốc ra về ở các khoa ung thư A6//
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
	//----------------------------//
	_T("	   0 chi_goidv, ") \
	_T("	  0 tl_tienthuoc_vattu") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0") \
	_T("     AND hfe_type         <> 'V'") \
	_T("     AND (hfe_type        =  'F' )") \
	_T("     AND i.hfe_class              ='E'") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//---------------------------------------------------------------------------------------------------------------------------------
	_T("     UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
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
	_T("       0          AS hfe_packageamount,") \
	_T("	   0                                    AS phi_ranggia,") \
	_T("       0          AS hfe_policyamount,") \
	_T("       0 AS hfe_othamount,") \
	_T("       0          AS hfe_miengiam,") \

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
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0 AND hfe_type = 'V'") \
	_T("     AND i.HFE_OBJECTID<>1") \
	_T("     UNION ALL") \
	_T("     SELECT CASE WHEN i.hfe_class ='I' AND i.HFE_OBJECTID=11 THEN 'II' ") \
	_T("       WHEN i.hfe_class ='I' AND i.HFE_OBJECTID<>11 THEN 'I' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID=11 THEN 'IV' ") \
	_T("       WHEN i.hfe_class ='E' AND i.HFE_OBJECTID<>11 THEN 'III' ") \
	_T("       END AS hfe_index,") \
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
	_T("       0  AS hfe_packageamount,") \
	_T("		0                                    AS phi_ranggia,") \
	_T("		0 hfe_policyamount,") \
	_T("       0  AS hfe_otherpayment,") \
	_T("       0  AS hfe_miengiam,") \
	
	_T("     0 tien_thuoc_dv,") \
	_T("     0 tien_thuoc_bh,") \
	_T("     0 tien_vattu_dv,") \
	_T("     0 tien_vattu_bh,") \

	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl left join hms_fee_list l ON (rl.hfe_itemid = l.hfl_feeid) WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND NVL(substr(l.hfl_feeid, 1, 2), 'N') <> 'FF') chi_doituong,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND l.hfl_hitechmachine = 'Y') chi_maycnc,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND substr(l.hfl_feeid, 1, 2) = 'FF') chi_de_muc,") \
	_T("	   0 chi_khac,") \
	_T("	   0 chi_goidv, ") \
	_T("	   0 tl_tienthuoc_vattu") \
	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	//_T("     WHERE i.hfe_status = 'P' AND i.hfe_payment  = 0 AND i.hfe_amount > 0 AND i.hfe_refund > 0 AND r.hfe_type ='F'") \//
	_T("     WHERE i.hfe_status = 'P' AND i.hfe_amount > 0 AND r.hfe_type ='F'") \
	_T("	 AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) > 0 ") \
	_T("     AND i.HFE_OBJECTID<>1") \
	//
	_T(" UNION ALL") \
	_T("     SELECT") \
	_T("       CASE") \
	_T("         WHEN r.hfe_class  ='I'") \
	_T("         AND r.HFE_OBJECTID=11") \
	_T("         THEN 'II'") \
	_T("         WHEN r.hfe_class   ='I'") \
	_T("         AND r.HFE_OBJECTID<>11") \
	_T("         THEN 'I'") \
	_T("         WHEN r.hfe_class  ='E'") \
	_T("         AND r.HFE_OBJECTID=11") \
	_T("         THEN 'IV'") \
	_T("         WHEN r.hfe_class   ='E'") \
	_T("         AND r.HFE_OBJECTID<>11") \
	_T("         THEN 'III'") \
	_T("       END AS hfe_index,") \
	_T("       hfe_cash_id,") \
	_T("       hfe_docno,") \
	_T("       hfe_date,") \
	_T("       hfe_lockeddate,") \
	_T("       hfe_staff,") \
	_T("       hfe_objectid,") \
	_T("       hfe_deptid,") \
	_T("       hfe_class,") \
	_T("       0 AS hfe_deposit,") \
	_T("       0 AS ref_deposit,") \
	_T("       0 AS hfe_amount,") \
	_T("       0 AS hfe_inspaid,") \
	_T("       0 AS hfe_discount,") \
	_T("       0 AS hfe_foodamount,") \
	_T("       0 AS hfe_packageamount,") \
	_T("       0 AS phi_ranggia,") \
	_T("       0 AS hfe_policyamount,") \
	_T("       0 AS hfe_othamount,") \
	_T("       0 AS hfe_miengiam,") \
	
	_T("     0 tien_thuoc_dv,") \
	_T("     0 tien_thuoc_bh,") \
	_T("     0 tien_vattu_dv,") \
	_T("     0 tien_vattu_bh,") \

	_T("       0 hfe_patpaid,") \
	_T("       0 hfe_otherreceipt,") \
	_T("       0 hfe_hitechmachine,") \
	_T("       0 chi_doituong,") \
	_T("       0 chi_maycnc,") \
	_T("       0 chi_de_muc,") \
	_T("       0 chi_khac,") \
	_T("       0 chi_goidv,") \
	_T("       CASE") \
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
	_T("     AND r.HFE_OBJECTID<>1    ") \
	//
	_T("     ) invoicetbl") \
	_T("  LEFT JOIN hms_doc ON(hd_docno = hfe_docno)") \
	_T("  LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
	_T("  LEFT JOIN hms_clinical_record ON(hcr_docno                 = hfe_docno)") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY hfe_index, hfe_docno , firstname, midname, surname,") \
	_T("   hfe_deptid ,") \
	_T("   hfe_dischargedate,") \
	_T("   hfe_date,") \
	_T("   hfe_objectid,") \
	_T("   hfe_cash_id,") \
	_T("   hfe_staff,") \
	_T("   hfe_lockeddate") \
	_T("  %s %s "), szWhere, szHavingClause, szOrderBy );
	return szSQL;
}