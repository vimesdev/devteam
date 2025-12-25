#include "stdafx.h"
#include "FMChiTietTheoDanhMuc_2024.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
#define format_date(t) CDate::Convert(t, yyyymmdd, ddmmyyyy)
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMChiTietTheoDanhMuc_2024* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMChiTietTheoDanhMuc_2024* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMChiTietTheoDanhMuc_2024* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMChiTietTheoDanhMuc_2024* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnOrderByAddNew();
}*/
static long _OnhtttLoadDataFnc(CWnd *pWnd)
{
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnHtttLoadData();
}

static void _OnhtttSelendokFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnhtttSelendok();
}

static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMChiTietTheoDanhMuc_2024 *pVw = (CFMChiTietTheoDanhMuc_2024 *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMChiTietTheoDanhMuc_2024 *pVw = (CFMChiTietTheoDanhMuc_2024 *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMChiTietTheoDanhMuc_2024 *pVw = (CFMChiTietTheoDanhMuc_2024 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMChiTietTheoDanhMuc_2024 *pVw = (CFMChiTietTheoDanhMuc_2024 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnAllSelect();
}
static int _OnAddFMChiTietTheoDanhMuc_2024Fnc(CWnd *pWnd){
	 return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnAddFMChiTietTheoDanhMuc_2024();
} 
static int _OnEditFMChiTietTheoDanhMuc_2024Fnc(CWnd *pWnd){
	 return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnEditFMChiTietTheoDanhMuc_2024();
} 
static int _OnDeleteFMChiTietTheoDanhMuc_2024Fnc(CWnd *pWnd){
	 return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnDeleteFMChiTietTheoDanhMuc_2024();
} 
static int _OnSaveFMChiTietTheoDanhMuc_2024Fnc(CWnd *pWnd){
	 return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnSaveFMChiTietTheoDanhMuc_2024();
} 
static int _OnCancelFMChiTietTheoDanhMuc_2024Fnc(CWnd *pWnd){
	 return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnCancelFMChiTietTheoDanhMuc_2024();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllDVPTTYCFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllDVPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnSODSelect();
}
static void _OnCreateDataSelectFnc(CWnd *pWnd)
{
	CFMChiTietTheoDanhMuc_2024 *pVw = (CFMChiTietTheoDanhMuc_2024 *)pWnd;
	pVw->OnCreateDataSelect();
}
static void _OnATMSelectFnc(CWnd *pWnd)
{
	 ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnATMSelect();
}
static void _OnAllZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnAllZoneSelect();
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnABZoneSelect();
}
static int _OnListCheckAllInvoiceFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllInvoice();
	return 0;
}
static int _OnListCheckAllRefundFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllRefund();
	return 0;
}
static void _OnBEDSelectFnc(CWnd *pWnd){
	 ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnBEDSelect();
}

static int _OnListCheckAllInvoiceTYCFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllInvoiceTYC();
	return 0;
}
static int _OnListCheckAllRefundTYCFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllRefundTYC();
	return 0;
}

static int _OnListCheckAllInvoiceBHTYCFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllInvoiceBHTYC();
	return 0;
}
static int _OnListCheckAllRefundBHTYCFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllRefundBHTYC();
	return 0;
}

static void _OnCLCzoneSelectFnc(CWnd *pWnd)
{
	 ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnCLCzoneSelect();
}

static void _OnQrOnlineSelectFnc(CWnd *pWnd){
	 ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnQrOnlineSelect();
}


static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnDeptListUnCheckAll();
}

static int _OnDeptListCheckAllTYCFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnDeptListCheckAllTYC();
}

static int _OnDeptListCheckAllDVFnc(CWnd *pWnd){
	return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnDeptListCheckAllDV();
}

static long _OnDeptListLoadDataFnc(CWnd *pWnd)
{
	return ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnDeptListLoadData();
}

static int _OnListUnCheckQRFnc(CWnd *pWnd)
{
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListUnCheckQR();
	return 0;
}

static void _OnAllObjSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnAllObjSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnServiceSelect();
}
static void _OnOtherObjSelectFnc(CWnd *pWnd){
	  ((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnOtherObjSelect();
}

static long _OnPhanloaiLoadDataFnc(CWnd *pWnd)
{
	return ((CFMChiTietTheoDanhMuc_2024 *)pWnd)->OnPhanloaiLoadData();
}

static int _OnListCheckAllPTTYCTYCFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllPTTYCTYC();
	return 0;
}

static int _OnListCheckAllTTTMFnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllTTTM();
	return 0;
}

static int _OnListCheckAllKBA16Fnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListCheckAllKBA16();
	return 0;
}

static int _OnListUnCheckAllTYC_PTTYC_KBA16Fnc(CWnd *pWnd){
	((CFMChiTietTheoDanhMuc_2024*)pWnd)->OnListUnCheckAllTYC_PTTYC_KBA16();
	return 0;
}


CFMChiTietTheoDanhMuc_2024::CFMChiTietTheoDanhMuc_2024(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMChiTietTheoDanhMuc_2024::~CFMChiTietTheoDanhMuc_2024()
{


}
void CFMChiTietTheoDanhMuc_2024::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 225, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 30, 331, 55);
	m_wndReportPeriod.Create(this,346, 30, 476, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 225, 85); 
	m_wndToDate.Create(this,346, 60, 476, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 60, 331, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 225, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 119, 225, 144); 
	m_wndHtttLabel.Create(this, _T("HTTT***"), 241, 120, 332, 145);
	m_wndhttt.Create(this,346, 120, 476, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 240, 90, 331, 115);
	m_wndStatus.Create(this,346, 90, 476, 115); 
	m_wndList.Create(this,10, 182, 476, 325); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 0, 0, 0, 0);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 232, 540, 312, 565);
	m_wndExport.Create(this, _T("Export XLS"), 317, 540, 397, 565);

	m_wndInpatient.Create(this, _T("Inpatient"), 0, 0, 0, 0);
	m_wndOutpatient.Create(this, _T("Outpatient"), 0, 0, 0, 0);
	m_wndDeposit.Create(this, _T("Deposit"), 0, 0, 0, 0);
	m_wndAll.Create(this, _T("All"), 0, 0, 0, 0);

	m_wndSOD.Create(this, _T("SOD"), 300, 505, 373, 530);
	m_wndCreateData.Create(this, _T("Create Data"), 401, 540, 481, 565);	
	m_wndBED.Create(this, _T("BED>0"), 379, 505, 476, 530);	
	m_wndATM.Create(this, _T("ATM Card"), 8, 150, 96, 175);
	m_wndABZone.Create(this, _T("AB Zone"), 101, 150, 189, 175);
	m_wndAllZone.Create(this, _T("All Zone"), 196, 150, 284, 175);
	m_wndCLCzone.Create(this, _T("CLC Zone"), 290, 150, 378, 175);
	m_wndQrOnline.Create(this, _T("QrOnline"), 384, 150, 476, 175);
	m_wndDeptList.Create(this,10, 330, 476, 473); 
	m_wndAllObj.Create(this, _T("Tất cả"), 10, 474, 110, 499);
	m_wndInsurance.Create(this, _T("Bảo hiểm"), 116, 474, 216, 499);
	m_wndService.Create(this, _T("Dịch vụ"), 222, 474, 325, 499);
	m_wndOtherObj.Create(this, _T("Khác"), 331, 474, 434, 499);
	m_wndPhanloaiLabel.Create(this, _T("Phân loại"), 10, 505, 110, 530);
	m_wndPhanloai.Create(this,115, 505, 295, 530); 

	m_wndCreateData.EnableWindow(FALSE);

}
void CFMChiTietTheoDanhMuc_2024::OnInitializeComponents(){
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
	m_wndList.InsertColumn(5, _T("cashbook_id"), CFMT_TEXT, 100);
	m_wndList.SetCheckBox(true);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndhttt.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndhttt.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndPhanloai.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPhanloai.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMChiTietTheoDanhMuc_2024::OnSetWindowEvents(){
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
	m_wndhttt.SetEvent(WE_LOADDATA, _OnhtttLoadDataFnc);
	m_wndhttt.SetEvent(WE_SELENDOK, _OnhtttSelendokFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(3, _T("Check All DV-PTTYC"), _OnListCheckAllDVPTTYCFnc);
	m_wndList.AddEvent(4, _T("Check All Fee Invoice"), _OnListCheckAllInvoiceFnc);
	m_wndList.AddEvent(5, _T("Check All Fee Refund"), _OnListCheckAllRefundFnc);
    
	m_wndList.AddEvent(6, _T("Phiếu dịch vụ yêu cầu"), _OnListCheckAllInvoiceTYCFnc);
	//m_wndList.AddEvent(14, _T("Phiếu chi dịch vụ yêu cầu"), _OnListCheckAllRefundTYCFnc);

	m_wndList.AddEvent(7, _T("Phiếu bảo hiểm yêu cầu"), _OnListCheckAllInvoiceBHTYCFnc);
	//m_wndList.AddEvent(16, _T("Phiếu chi bảo hiểm yêu cầu"), _OnListCheckAllRefundBHTYCFnc);

	m_wndList.AddEvent(8, _T("Bỏ check phiếu QR"), _OnListUnCheckQRFnc);


	m_wndList.AddEvent(100, _T("Search"), _OnListSearchItemFnc);

	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);

	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);

	m_wndDeptList.AddEvent(3, _T("****"));
	m_wndDeptList.AddEvent(4, _T("Chọn khoa PTTYC + TYC + KSK"), _OnListCheckAllPTTYCTYCFnc);
	m_wndDeptList.AddEvent(5, _T("Chọn khoa KB_A16"), _OnListCheckAllKBA16Fnc);
	m_wndDeptList.AddEvent(6, _T("Chọn khoa TMNT + TTTM"), _OnListCheckAllTTTMFnc);
	m_wndDeptList.AddEvent(7, _T("Bỏ chọn khoa PTTYC + TYC + KB_A16 + TMNT + TTTM + KSK"), _OnListUnCheckAllTYC_PTTYC_KBA16Fnc);


	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndCreateData.SetEvent(WE_CLICK, _OnCreateDataSelectFnc);
	m_wndATM.SetEvent(WE_CLICK, _OnATMSelectFnc);
	m_wndAllZone.SetEvent(WE_CLICK, _OnAllZoneSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndBED.SetEvent(WE_CLICK, _OnBEDSelectFnc);
	m_wndCLCzone.SetEvent(WE_CLICK, _OnCLCzoneSelectFnc);
	m_wndQrOnline.SetEvent(WE_CLICK, _OnQrOnlineSelectFnc);


	m_wndAllObj.SetEvent(WE_CLICK, _OnAllObjSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndOtherObj.SetEvent(WE_CLICK, _OnOtherObjSelectFnc);

	m_wndPhanloai.SetEvent(WE_LOADDATA, _OnPhanloaiLoadDataFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	//SetMode(VM_EDIT);
	
	OnDeptListLoadData();
	UpdateData(false);


}
void CFMChiTietTheoDanhMuc_2024::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndhttt.GetDlgCtrlID(), m_szhtttKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndATM.GetDlgCtrlID(), m_bATM);
	DDX_Check(pDX, m_wndAllZone.GetDlgCtrlID(), m_bAllZone);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndBED.GetDlgCtrlID(), m_bBED);
	DDX_Check(pDX, m_wndCLCzone.GetDlgCtrlID(), m_bCLCzone);
	DDX_Check(pDX, m_wndQrOnline.GetDlgCtrlID(), m_bQrOnline);
	DDX_Radio(pDX, m_wndAllObj.GetDlgCtrlID(), m_nAllObj);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndOtherObj.GetDlgCtrlID(), m_nOtherObj);
	DDX_TextEx(pDX, m_wndPhanloai.GetDlgCtrlID(), m_szPhanloaiKey);

	
}
void CFMChiTietTheoDanhMuc_2024::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMChiTietTheoDanhMuc_2024::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMChiTietTheoDanhMuc_2024::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("04");
	m_nPatientType = 3;
	m_bSOD = FALSE;
	m_bATM=FALSE;
	m_bAllZone=FALSE;
	m_bABZone=FALSE;
	m_bBED=FALSE;
	m_bCLCzone=FALSE;
	m_bQrOnline=FALSE;
	m_bSerDiffIns=false;
	m_bSerEquaIns=false;
	m_nAllObj=0;
	m_nInsurance=1;
	m_nService=1;
	m_nOtherObj=1;
	m_szPhanloaiKey = _T("ALL");
}

int CFMChiTietTheoDanhMuc_2024::SetMode(int nMode){
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

/*void CFMChiTietTheoDanhMuc_2024::OnYearChange(){
	
} */
/*void CFMChiTietTheoDanhMuc_2024::OnYearSetfocus(){
	
} */
/*void CFMChiTietTheoDanhMuc_2024::OnYearKillfocus(){
	
} */
int CFMChiTietTheoDanhMuc_2024::OnYearCheckValue(){
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
 
void CFMChiTietTheoDanhMuc_2024::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

	void CFMChiTietTheoDanhMuc_2024::OnCLCzoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}

void CFMChiTietTheoDanhMuc_2024::OnhtttSelendok()
{
	 OnListLoadData();
}
 
void CFMChiTietTheoDanhMuc_2024::OnReportPeriodSelendok(){
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

/*void CFMChiTietTheoDanhMuc_2024::OnReportPeriodSetfocus(){
	
}*/
/*void CFMChiTietTheoDanhMuc_2024::OnReportPeriodKillfocus(){
	
}*/
long CFMChiTietTheoDanhMuc_2024::OnReportPeriodLoadData(){
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

/*void CFMChiTietTheoDanhMuc_2024::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMChiTietTheoDanhMuc_2024::OnFromDateChange(){
	
} */
/*void CFMChiTietTheoDanhMuc_2024::OnFromDateSetfocus(){
	
} */
/*void CFMChiTietTheoDanhMuc_2024::OnFromDateKillfocus(){
	
} */
int CFMChiTietTheoDanhMuc_2024::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
void CFMChiTietTheoDanhMuc_2024::OnBEDSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
/*void CFMChiTietTheoDanhMuc_2024::OnToDateChange(){
	
} */
/*void CFMChiTietTheoDanhMuc_2024::OnToDateSetfocus(){
	
} */
/*void CFMChiTietTheoDanhMuc_2024::OnToDateKillfocus(){
	
} */
int CFMChiTietTheoDanhMuc_2024::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
void CFMChiTietTheoDanhMuc_2024::OnATMSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
	void CFMChiTietTheoDanhMuc_2024::OnAllZoneSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
	void CFMChiTietTheoDanhMuc_2024::OnABZoneSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
 
void CFMChiTietTheoDanhMuc_2024::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMChiTietTheoDanhMuc_2024::OnClerkSelendok(){
	 
}
int CFMChiTietTheoDanhMuc_2024::OnListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,5);
		if ((_T("DVYC"))==szItemText || (_T("THE-DV-YC"))==szItemText)
		{
			m_wndList.SetCheck(i, true);
			nCheck++;
		}
		else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;

}
int CFMChiTietTheoDanhMuc_2024::OnListCheckAllPTTYC()
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

int CFMChiTietTheoDanhMuc_2024::OnListCheckAllDVPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DV-PTTYC"))==szItemText.Right(8))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}

long CFMChiTietTheoDanhMuc_2024::OnPhanloaiLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	m_wndPhanloai.AddItems(_T("ALL"), _T("Tất cả"), NULL);
	m_wndPhanloai.AddItems(_T("NGT"), _T("Ngoại trú"), NULL);
	m_wndPhanloai.AddItems(_T("NT"), _T("Nội trú"), NULL);
	return 0;
}


void CFMChiTietTheoDanhMuc_2024::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}
void CFMChiTietTheoDanhMuc_2024::OnSODSelect()
{
	OnListLoadData();
}
void CFMChiTietTheoDanhMuc_2024::OnCreateDataSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szSQL2, szWhere;	

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
	else
	szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV' AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id %s 'DVYC'"), m_bSOD?_T("="):_T("<>"));
	
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T(" FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	OnDeleteDataBeforeInsert();
	//_msg(_T("%s"), szSQL);
	
	szSQL2.Format(_T("Insert into tmp_fa_cash_C12 (SELECT fac_cash_id as idx, '%s' as userid FROM fa_cash WHERE fac_invoicetype IN ('P', 'R') %s)"), pMF->m_szUser, szWhere);	
	int ret = pMF->ExecSQL(szSQL2);
	_msg(_T("Đã thực hiện insert %ld bản tin"), ret);	
	
}
int CFMChiTietTheoDanhMuc_2024::OnDeleteDataBeforeInsert()
{
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL; 	
	szSQL.Format(_T("Delete from tmp_fa_cash_C12 where userid='%s'"), pMF->m_szUser);
 	int ret = pMF->ExecSQL(szSQL);
	_msg(_T("Đã xóa %ld bản ghi"), ret);
	return 0;
}

/*void CFMChiTietTheoDanhMuc_2024::OnClerkSetfocus(){
	
}*/
/*void CFMChiTietTheoDanhMuc_2024::OnClerkKillfocus(){
	
}*/
long CFMChiTietTheoDanhMuc_2024::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMChiTietTheoDanhMuc_2024::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMChiTietTheoDanhMuc_2024::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMChiTietTheoDanhMuc_2024::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMChiTietTheoDanhMuc_2024::OnStatusSetfocus(){
	
}*/
/*void CFMChiTietTheoDanhMuc_2024::OnStatusKillfocus(){
	
}*/
long CFMChiTietTheoDanhMuc_2024::OnStatusLoadData(){
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
/*void CFMChiTietTheoDanhMuc_2024::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMChiTietTheoDanhMuc_2024::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMChiTietTheoDanhMuc_2024::OnOrderBySelendok(){
	 
}
/*void CFMChiTietTheoDanhMuc_2024::OnOrderBySetfocus(){
	
}*/
/*void CFMChiTietTheoDanhMuc_2024::OnOrderByKillfocus(){
	
}*/
long CFMChiTietTheoDanhMuc_2024::OnOrderByLoadData(){
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
/*void CFMChiTietTheoDanhMuc_2024::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMChiTietTheoDanhMuc_2024::OnHtttLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_wndhttt.AddItems(_T("ALL"), _T("Tất cả"), NULL);
	m_wndhttt.AddItems(_T("TM1"), _T("Tiền mặt"), NULL);
	m_wndhttt.AddItems(_T("QR"), _T("Qrcode Online"), NULL);
	m_wndhttt.AddItems(_T("CK"), _T("Chuyển khoản"), NULL);
	m_wndhttt.AddItems(_T("ATM"), _T("Thẻ ATM"), NULL);
	return 0;	
}

void CFMChiTietTheoDanhMuc_2024::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMChiTietTheoDanhMuc_2024::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMChiTietTheoDanhMuc_2024::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMChiTietTheoDanhMuc_2024::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMChiTietTheoDanhMuc_2024::OnListLoadData()
{
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
		{
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
		}
	}
	//szWhere.Format(_T(" AND fac_cashbook_id in ('QR')"));
	//if (m_bSOD)
	//	szWhere.AppendFormat(_T(" AND fac_cashbook_id  in ('DVYC','DV-PTTYC')"));

	if (m_bSOD)
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC', 'THE-DV-YC', 'THE-DV-PTTYC','BHYC','BH-PTTYC','THE-BH-YC','THE-BH-PTTYC')"));
	    szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','BH-PTTYC', 'THE-DV-YC','BHYC', 'THE-DV-PTTYC', 'THE-BH-YC', 'THE-BH-PTTYC', 'CK-DV-YC', 'CK-BH-YC','CK-DV-PTTYC', 'CK-BH-PTTYC', 'QR')"));
	
	else if (m_bABZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB', 'QR')"));
	
	else if (m_bCLCzone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVCLC', 'THE-DVCLC', 'CK-DVCLC', 'DVCLCA16', 'THE-DV-CLCA16', 'CK-DV-CLCA16', 'QR')"));


	else if (m_bATM)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('THE-DV', 'QR')"));

	else if (m_bAllZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV', 'THE-DV', 'CK-DV', 'THE-DVCLC', 'CK-DVCLC', 'DVCLC', 'THE-DV-CLCA16', 'CK-DV-CLCA16', 'DVCLCA16', 'QR')"));

	else if (m_bQrOnline)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('QR')"));

	else
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id = 'DV'"));
		//szWhere.AppendFormat(_T(" AND (fac_cashbook_id IN ('THE-DV', 'CK-DV', 'DV-AB', 'DV', 'QR')) AND fac_cashbook_id  not in ('DVYC','DV-PTTYC', 'DVCLC', 'DVCLCA16')"));
		szWhere.AppendFormat(_T(" AND 1=1 "));

	if(m_szhtttKey == _T("TM1"))
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('CASH')"));
	}

	else if(m_szhtttKey == _T("QR"))
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('QR')"));
	}

	else if(m_szhtttKey == _T("CK"))
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BANK')"));
	}

	else if(m_szhtttKey == _T("ATM"))
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('CARD')"));
	}
	else if (m_szhtttKey == _T("ALL"))
	{
		szWhere.AppendFormat(_T(" AND fac_cashbook_id IN ('CASH', 'QR', 'BANK', 'CARD') "));
	}

	//szWhere.Format(_T(" AND fac_cashbook_id in ('QR')"));
	//else	
	//szWhere.AppendFormat(_T(" AND (substr(fac_cashbook_id, 1, 2) = 'DV' OR fac_cashbook_id='THE-DV') AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate,FAC_CASHBOOK_ID as cashbook_id ") \
		//_T("FROM fa_cash WHERE fac_invoicetype in('P','R') AND Fac_Cashbook_Id <> 'DVYC' %s ORDER BY fac_cash_id"), szWhere);
		  _T(" FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
	m_szCashQuery.Format(_T("SELECT fac_cash_id ") \
			_T(" FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	_msg(_T("%ld"), nCount);
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
			rs.GetValue(_T("cashbook_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMChiTietTheoDanhMuc_2024::OnMarkAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu thu chi = %d"), i);
} 
void CFMChiTietTheoDanhMuc_2024::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMChiTietTheoDanhMuc_2024::OnInpatientSelect(){
	
}
void CFMChiTietTheoDanhMuc_2024::OnOutpatientSelect(){
	
}
void CFMChiTietTheoDanhMuc_2024::OnDepositSelect(){
	
}
void CFMChiTietTheoDanhMuc_2024::OnAllSelect(){
	
}
 
 
int CFMChiTietTheoDanhMuc_2024::OnAddFMChiTietTheoDanhMuc_2024(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMChiTietTheoDanhMuc_2024::OnEditFMChiTietTheoDanhMuc_2024(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMChiTietTheoDanhMuc_2024::OnDeleteFMChiTietTheoDanhMuc_2024(){
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
 		OnCancelFMChiTietTheoDanhMuc_2024();
 	}
	return 0;
}
int CFMChiTietTheoDanhMuc_2024::OnSaveFMChiTietTheoDanhMuc_2024(){
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
 //_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFMChiTietTheoDanhMuc_2024ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMChiTietTheoDanhMuc_2024::OnCancelFMChiTietTheoDanhMuc_2024(){
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
int CFMChiTietTheoDanhMuc_2024::OnFMChiTietTheoDanhMuc_2024ListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMChiTietTheoDanhMuc_2024::OnPrintSelect()
{
	
}

void CFMChiTietTheoDanhMuc_2024::OnPrint1stver()
{
	

}
void CFMChiTietTheoDanhMuc_2024::OnPrint2ndver()
{
	
}
void CFMChiTietTheoDanhMuc_2024::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	
	
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Xuất chi tiết theo BN"));

	TranslateString(_T("Export chi tiết theo danh mục"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("Export chi tiết theo danh mục (giá DV <> giá BH)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	TranslateString(_T("Export chi tiết theo danh mục (giá DV = giá BH)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);



	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportDetailByPatient();
			break;
		case 2:
			OnExport6();
			break;
		case 3:
			OnExport7();
			break;
		case 4:
			OnExport8();
			break;
	}

}


int CFMChiTietTheoDanhMuc_2024::OnListCheckAllInvoice()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	int nCheck = 0;
	for (int k=0; k<m_wndList.GetItemCount(); k++)	
	{
		szItemText=m_wndList.GetItemText(k,1);
		if ((_T("PT"))==szItemText.Left(2))
		{
			m_wndList.SetCheck(k, true);
			nCheck++;
		}	
	else m_wndList.SetCheck(k, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMChiTietTheoDanhMuc_2024::OnListCheckAllRefund()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	int nCheck = 0;
	for (int j=0; j<m_wndList.GetItemCount(); j++)	
	{
		szItemText=m_wndList.GetItemText(j,1);
	if ((_T("PC"))==szItemText.Left(2))
	{
		m_wndList.SetCheck(j, true);
		nCheck++;
	}	
	else m_wndList.SetCheck(j, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}



int CFMChiTietTheoDanhMuc_2024::OnListCheckAllInvoiceTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText, szItemTextEX;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
		szItemTextEX = m_wndList.GetItemText(i,5);

	if (((_T("THE-DV-YC"))==szItemTextEX || (_T("THE-DV-PTTYC"))==szItemTextEX 
		|| (_T("CK-DV-PTTYC"))==szItemTextEX ||(_T("CK-DV-YC"))==szItemTextEX 
		|| (_T("DV-PTTYC"))==szItemTextEX || (_T("DVYC"))==szItemTextEX)) 
	{
		m_wndList.SetCheck(i, true);
			nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMChiTietTheoDanhMuc_2024::OnListCheckAllRefundTYC()
{
	CString szItemText, szItemTextEX;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
		szItemTextEX = m_wndList.GetItemText(i,5);

	if (((_T("THE-DV-YC"))==szItemTextEX || (_T("THE-DV-PTTYC"))==szItemTextEX 
		|| (_T("CK-DV-PTTYC"))==szItemTextEX ||(_T("CK-DV"))==szItemTextEX 
		|| (_T("DV-PTTYC"))==szItemTextEX || (_T("DVYC"))==szItemTextEX)) 
	{
		m_wndList.SetCheck(i, true);
			nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMChiTietTheoDanhMuc_2024::OnListCheckAllInvoiceBHTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText, szItemTextEX;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
		szItemTextEX = m_wndList.GetItemText(i,5);

	if (((_T("THE-BH-YC"))==szItemTextEX || (_T("THE-BH-PTTYC"))==szItemTextEX 
		|| (_T("CK-BH-PTTYC"))==szItemTextEX ||(_T("CK-BH"))==szItemTextEX || (_T("CK-BH-YC"))==szItemTextEX 
		|| (_T("BH-PTTYC"))==szItemTextEX || (_T("BHYC"))==szItemTextEX)) 
	{
		m_wndList.SetCheck(i, true);
			nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMChiTietTheoDanhMuc_2024::OnListCheckAllRefundBHTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText, szItemTextEX;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
		szItemTextEX = m_wndList.GetItemText(i,5);

	if (((_T("THE-BH-YC"))==szItemTextEX || (_T("THE-BH-PTTYC"))==szItemTextEX || (_T("CK-BH-PTTYC"))==szItemTextEX ||(_T("CK-BH"))==szItemTextEX || (_T("BH-PTTYC"))==szItemTextEX || (_T("BHYC"))==szItemTextEX)) 
	{
		m_wndList.SetCheck(i, true);
			nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}




void CFMChiTietTheoDanhMuc_2024::OnQrOnlineSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
int CFMChiTietTheoDanhMuc_2024::OnDeptListCheckAll()
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

int CFMChiTietTheoDanhMuc_2024::OnDeptListUnCheckAll()
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
int CFMChiTietTheoDanhMuc_2024::OnDeptListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndDeptList.GetItemCount(); i++)	
	{
		szItemText=m_wndDeptList.GetItemText(i,0);

		if ((szItemText == _T("TYC")) || (szItemText == _T("PTTYC")) || (szItemText == _T("KSK")))
	{
		m_wndDeptList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndDeptList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
int CFMChiTietTheoDanhMuc_2024::OnDeptListCheckAllDV()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndDeptList.GetItemCount(); i++)	
	{
		szItemText=m_wndDeptList.GetItemText(i,0);

		if ((szItemText != _T("TYC")) && (szItemText != _T("PTTYC")) && (szItemText != _T("KSK")))
	{
		m_wndDeptList.SetCheck(i, true);
		nCheck ++;
	}
	else m_wndDeptList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMChiTietTheoDanhMuc_2024::OnDeptListLoadData()
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
int CFMChiTietTheoDanhMuc_2024::OnListUnCheckQR()

{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("QR"))==szItemText.Right(2))
	{
		m_wndList.SetCheck(i, false);
	}
	else m_wndList.SetCheck(i, true);
	}
	//AfxMessageBox(int2str(nCheck));
	return 0;
}

void CFMChiTietTheoDanhMuc_2024::OnAllObjSelect(){
	
}
void CFMChiTietTheoDanhMuc_2024::OnInsuranceSelect(){
	
}
void CFMChiTietTheoDanhMuc_2024::OnServiceSelect(){
	
}
void CFMChiTietTheoDanhMuc_2024::OnOtherObjSelect()
{
	
}

void CFMChiTietTheoDanhMuc_2024::OnExport6()
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
	if (!xls.Load(_T("Exports\\THUTIENTHEODANHMUC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString6();
	//AfxMessageBox(szSQL);
	rs.ExecSQL(szSQL);
	//AfxMessageBox(szSQL);
	
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
		
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[7] > 0)
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
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER2);

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
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\THUTIENTHEODANHMUC2.xls"));
}
CString CFMChiTietTheoDanhMuc_2024::GetQueryString6()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szWhere, szWhere1, szWhere2, szWhere5;
	CString szOrderBy, szReceiptStr, szDepts;
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


	
	if (m_szPhanloaiKey == _T("NGT"))
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	else if (m_szPhanloaiKey == _T("NT"))
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else
	{
		szWhere1.AppendFormat(_T(" AND 1=1 "));
	}

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
		szWhere5.AppendFormat(_T(" and khoatt in(%s) "), szDepts);
	}

	if (m_nAllObj == 0)
	{
		szWhere5.AppendFormat(_T(" and 1=1 "));
	}
	else if (m_nService == 0)
	{
		szWhere5.AppendFormat(_T(" and doituong = 7 "));
	}
	else if (m_nOtherObj == 0)
	{
		szWhere5.AppendFormat(_T(" and doituong IN (1, 3, 8, 13) "));
	}

	else if (m_nInsurance == 0)
	{
		szWhere5.AppendFormat(_T(" and doituong not in  (1, 3, 7, 8, 13) "));
	}
	else
	{
		szWhere5.AppendFormat(_T(" and 0>1 "));
	}

	if (m_bSerDiffIns)
	{
		szWhere.AppendFormat(_T(" AND (COALESCE(tbl_fee.price,0) > COALESCE(tbl_fee.insprice,0)) "));
		
	}
	else
	{
		szWhere.AppendFormat(_T(" and 1=1 "));
	}

	if (m_bSerEquaIns)
	{
		szWhere.AppendFormat(_T(" AND (COALESCE(tbl_fee.price,0) <= COALESCE(tbl_fee.insprice,0)) "));		
	}
	else
	{
		szWhere.AppendFormat(_T(" and 1=1 "));
	}


	szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' and f.hfe_cost   >0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category not in ('Y')   ") \
		_T("   UNION ALL") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,") \
		//_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid END dept_id,    ") \//
		_T("       CASE") \
		_T("         WHEN f.hfe_type     IN ('P','T')") \
		_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
		_T("         AND HPC_PDEPTID IS NOT NULL ") \
		_T("         THEN HPC_PDEPTID ELSE Fl.Hfl_Deptid") \
		_T("       END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
		_T(" 		    AND f.hfe_category not in ('Y')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \

		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100', 'B1E00') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100', 'B1E00')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --5. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20', 'B1E00', 'C5') AS NVARCHAR2(3)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T("   UNION ALL") \
		//_T(" --6. Phi giuong") \//
		_T("    SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     dy.HDBL_INSPRICE as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= f.hfe_itemid) and dy.hdbl_deptid=f.hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl") \
		_T("   ON (hfe_itemid  =fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		//_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' THEN  HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  ='B5' AND HO_DEPTID is null THEN HO_PDEPTID else Fl.Hfl_Deptid END dept_id,      ") \//
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		//_T("     CASE WHEN f.hfe_patpaid>0 THEN f.hfe_patpaid ELSE NVL(f.hfe_otherpaid, 0) END as amount,") \//
		_T(" f.hfe_cost AS amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O' ") \
		//_T(" 		    AND F.Hfe_type='O' ") \//
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --9. Phi khac o khoa") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.hfe_itemid NOT IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --10. Phi khac o tai chinh") \//
		_T("   SELECT fi.hfe_invoiceno,") \
		_T("     fi.hfe_docno,   ") \
		_T("     CASE WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC' THEN fi.HFE_DEPTID END dept_id,") \
		_T("     CAST('XXX' AS NVARCHAR2(3)) hfe_group3,") \
		_T("     fi.hfe_type fee_type,") \
		_T("     fi.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_patpaid as price,") \
		_T("     0 as insprice,") \
		_T("     fi.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P','R')") \
		_T(" 		      AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'  ") \
		_T("   UNION ALL ") \
		//_T(" --11. Phi khoa duoc, trang bi, tiep huyet") //
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(product_org_id, 'PM', 'DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,    ") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     hfe_insprice as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R') AND f.hfe_cost > 0") \
		_T(" AND (hfe_category   IN ('N','BQP','XX','P', 'COV', 'BN') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT dept_id,") \
		_T("   descr,") \
		_T("   SUM(times) times,") \
		_T("   price, insprice,") \
		_T("   SUM(e_amount) e_amount,") \
		_T("   SUM(i_amount) i_amount,") \
		_T("   SUM(amount) total_amount,") \
		_T("   salary") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T(" CASE") \
		_T("         WHEN NVL( hfe_org_id, 'XX' )= 'EM'") \
		_T("         AND hfe_deptid              = 'A3-D'") \
		_T("         THEN hd_admitdept") \
		_T("         ELSE hfe_deptid") \
		_T("       END AS khoatt, i.hfe_objectid           AS doituong, ") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times, tbl_fee.price, tbl_fee.insprice,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
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
		_T(" %s ") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, price, insprice") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr"),szWhere, szWhere5); \
	return szSQL;
}
void CFMChiTietTheoDanhMuc_2024::OnExportDetailByPatient()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL = GetQueryString_patientdtl_v2();
	pMF->BeginWaitCursor();
	//int nRet = str2int(pMF->ExecDML(szSQL));
	int nRet = rs.ExecSQL(szSQL);
	if (nRet < 0)
	{
		ShowMessageBox(_T("Error excute SQL"));
		return;
	}
	pMF->EndWaitCursor();
	Export(_T("Chi_tiet_thu_tien_theo_BN"), &rs);

}
void CFMChiTietTheoDanhMuc_2024::OnExport7()
{
	m_bSerDiffIns = true;
	m_bSerEquaIns = false;
	OnExport6();
	m_bSerDiffIns = false;
}
void CFMChiTietTheoDanhMuc_2024::OnExport8()
{
	m_bSerEquaIns = true;
	m_bSerDiffIns = false;
	OnExport6();
	m_bSerEquaIns = false;
}
CString CFMChiTietTheoDanhMuc_2024::GetQueryString_patientdtl_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CString szSQL, szDepts, szWhere, szWhere1, szWhere2, szWhere5;
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

	if (m_szPhanloaiKey == _T("NGT"))
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='E' "));
	}
	else if (m_szPhanloaiKey == _T("NT"))
	{
		szWhere1.AppendFormat(_T(" AND HFE_CLASS='I' "));
	}
	else
	{
		szWhere1.AppendFormat(_T(" AND 1=1 "));
	}

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
		szWhere5.AppendFormat(_T(" and khoatt in(%s) "), szDepts);
	}

	if (m_nAllObj == 0)
	{
		szWhere5.AppendFormat(_T(" and 1=1 "));
	}
	else if (m_nService == 0)
	{
		szWhere5.AppendFormat(_T(" and doituong = 7 "));
	}
	else if (m_nOtherObj == 0)
	{
		szWhere5.AppendFormat(_T(" and doituong IN (1, 3, 8, 13) "));
	}

	else if (m_nInsurance == 0)
	{
		szWhere5.AppendFormat(_T(" and doituong not in  (1, 3, 7, 8, 13) "));
	}
	else
	{
		szWhere5.AppendFormat(_T(" and 0>1 "));
	}

	
	szSQL.Format(_T(" WITH tbl_fee AS") \
		_T("   (") \
		//_T("   --1. Phi kham") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('E'))") \
		_T("   LEFT JOIN hms_exam ex on (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)   ") \
		_T("   WHERE f.hfe_status      in ('P','R')") \
		_T("   AND f.hfe_group ='D0000' and f.hfe_cost   >0") \
		_T("   AND f.hfe_itemid <> 'D0000006'") \
		_T("   AND f.hfe_category not in ('Y')   ") \
		_T("   UNION ALL") \
		//_T("   --2. Phi can lam sang chung") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,") \
		//_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND su_deptid is not NULL THEN Su_Deptid END dept_id,    ") \//
		_T("       CASE") \
		_T("         WHEN f.hfe_type     IN ('P','T')") \
		_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
		_T("         AND HPC_PDEPTID IS NOT NULL ") \
		_T("         THEN HPC_PDEPTID ELSE Fl.Hfl_Deptid") \
		_T("       END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN HMSV_PDEPT_PARACLINIC_P1 ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))   ") \
		_T("   WHERE     f.hfe_status in ('P','R') AND su_deptid is not NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
		_T(" 		    AND f.hfe_category not in ('Y')  ") \
		_T("   UNION ALL") \
		//_T("   --3. Phi can lam sang khong thuc hien khoi hinh anh") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \

		_T("   UNION ALL") \
		//_T("   --4. Phí nội soi của khoa A3 & C8-D bị lẫn, nên khi chưa thực hiện thì để là chưa thực hiện") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B3100') AND Hpc_Practitioner IS NULL THEN CAST(('CHUA_THUC_HIEN') AS NVARCHAR2(20)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group IN ('B3100')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --3.1 Truong hop trong hms_fee co du lieu nhung trong hms_pacsorder khong co vi bi xoa di") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P') AND F.hfe_status='R' AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id, ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P'))") \
		_T("   LEFT JOIN Hms_Pacsorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE f.hfe_status in ('R') AND Hpc_Practitioner IS NULL AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500')") \
		_T(" 		    AND f.hfe_type IN ('P')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND hpc_status is NULL") \
		_T("   UNION ALL") \
		//_T("  --4. Phi can lam sang khong thuc hien khoi xet nghiem  ") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B3100', 'B1E00') AND Hpc_Practitioner IS NULL THEN Fl.Hfl_Deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   LEFT JOIN Hms_testorder ON ( f.hfe_docno = hpc_docno  AND f.hfe_orderid  = hpc_orderid    AND f.hfe_type  IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R') AND Hpc_Practitioner IS NULL") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T(" 		    AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500', 'B3100', 'B1E00')") \
		_T(" 		    AND f.hfe_category not in ('Y') AND (hpc_status <> 'T' OR (hpc_status       = 'T' AND Hpc_Practitioner IS NULL))") \
		_T("   UNION ALL") \
		//_T("   --5. Phi khoa tiep huyet, sinh hoc phan tu, y hoc hat nhan 4 khoa nay nhap ket qua") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00') THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16','B1800','C16','B2500', 'A20', 'B1E00', 'C5') AS NVARCHAR2(3)) END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500', 'B1E00')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T(" 		    AND f.hfe_type IN ('P','T')") \
		_T("   UNION ALL") \
		//_T(" --6. Phi giuong") \//
		_T("    SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     dy.HDBL_INSPRICE as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN Hms_Dynbedlist dy ON (cast (dy.hdbl_idx as NVARCHAR2(15))= f.hfe_itemid) and dy.hdbl_deptid=f.hfe_deptid") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --7. Phi tien an benh nhan") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(f.hfe_type, 'F', 'C11') AS NVARCHAR2(3)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f  ") \
		_T("   LEFT JOIN hms_fee_list fl") \
		_T("   ON (hfe_itemid  =fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_Group IN ('FF000')") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --8. Phi phau thuat - thu thuat") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		//_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' THEN  HO_DEPTID WHEN f.hfe_type='O' AND HO_PDEPTID  ='B5' AND HO_DEPTID is null THEN HO_PDEPTID else Fl.Hfl_Deptid END dept_id,      ") \//
		_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
		_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
		_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END dept_id,") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     NVL(hfl_hitechmachine, 'N') hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		//_T("     CASE WHEN f.hfe_patpaid>0 THEN f.hfe_patpaid ELSE NVL(f.hfe_otherpaid, 0) END as amount,") \//
		_T(" f.hfe_cost AS amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
		_T("   LEFT JOIN hms_operation  ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx  AND f.hfe_type = 'O')") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND F.Hfe_type='O' ") \
		//_T(" 		    AND F.Hfe_type='O' ") \//
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --9. Phi khac o khoa") \//
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CASE WHEN f.hfe_class in ('X','I','E') AND f.hfe_type ='X' AND f.HFE_DEPTID is NOT NULL THEN  f.HFE_DEPTID ELSE fl.HFL_DEPTID END dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,") \
		_T("     f.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     COALESCE(fl.hfl_insprice,0) as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     fl.hfl_salary salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN Hms_Fee_List fl ON (F.Hfe_Itemid=fl.hfl_feeid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_class in ('X','I','E') AND f.hfe_type ='X' ") \
		_T(" 		    AND f.hfe_category not in ('Y')") \
		_T("   UNION ALL") \
		//_T("   --10. Phi khac o tai chinh") \//
		_T("   SELECT fi.hfe_invoiceno,") \
		_T("     fi.hfe_docno,   ") \
		_T("     CASE WHEN  fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC' THEN fi.HFE_DEPTID END dept_id,") \
		_T("     CAST('XXX' AS NVARCHAR2(3)) hfe_group3,") \
		_T("     fi.hfe_type fee_type,") \
		_T("     fi.hfe_desc descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     1 times,") \
		_T("     fi.hfe_patpaid as price,") \
		_T("     0 as insprice,") \
		_T("     fi.hfe_patpaid amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee_invoice fi  ") \
		_T("   WHERE       fi.hfe_status     IN ('P','R')") \
		_T(" 		      AND fi.hfe_type in ('O','S') AND fi.Hfe_Serialno='PC'  ") \
		_T("   UNION ALL ") \
		//_T(" --11. Phi khoa duoc, trang bi, tiep huyet") //
		_T("   SELECT f.hfe_invoiceno,") \
		_T("     f.hfe_docno,   ") \
		_T("     CAST(DECODE(product_org_id, 'PM', 'DUOC', 'MA', 'TRANG BI', 'BB','C16') AS NVARCHAR2(15)) dept_id,      ") \
		_T("     f.hfe_group,") \
		_T("     f.hfe_type fee_type,    ") \
		_T("     DECODE(product_org_id, 'PM', NVL(get_vnname('Drug Amount'), 'Drug Amount'), 'MA', NVL(get_vnname('Material Amount'), 'Material Amount'), 'BB', f.hfe_desc) descr,") \
		_T("     CAST('N' AS NVARCHAR2(1)) hitech_machine,") \
		_T("     hfe_quantity times,") \
		_T("     hfe_unitprice as price,") \
		_T("     hfe_insprice as insprice,") \
		_T("     f.hfe_cost as amount,") \
		_T("     0 salary,") \
		_T("     0 fee_id") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN m_productitem_view_vp ON ( Cast(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
		_T("   WHERE     f.hfe_status in ('P','R')") \
		_T(" 		    AND f.hfe_type IN ('D', 'M','R') AND f.hfe_cost > 0") \
		_T(" AND (hfe_category   IN ('N','BQP','XX','P', 'COV', 'BN') OR (hfe_category='Y' AND HFE_TREAT_INPACKAGE='Y'))") \
		_T("   )") \
		_T(" SELECT patient_name,") \
		_T("   doc_no,") \
		_T("   SUM(times) \"_n_times\",") \
		_T("   price,") \
		_T("   SUM(e_amount) \"_n_e_amount\",") \
		_T("   SUM(i_amount) \"_n_i_amount\",") \
		_T("   SUM(amount) \"_n_total_amount\",") \
		_T("   dept_id as \"_g_dept_id\",") \
		_T("   descr as \"_g_descr\"") \
		_T(" FROM fa_cash") \
		_T(" INNER JOIN") \
		_T("   (SELECT hfe_cash_id,") \
		_T("     hfe_class,") \
		_T("     dept_id,") \
		_T(" CASE") \
		_T("         WHEN NVL( hfe_org_id, 'XX' )= 'EM'") \
		_T("         AND hfe_deptid              = 'A3-D'") \
		_T("         THEN hd_admitdept") \
		_T("         ELSE hfe_deptid") \
		_T("       END AS khoatt, i.hfe_objectid           AS doituong, ") \
		_T("     NVL(hfg_type_id, 2000) hfe_typeindex,") \
		_T("     SUBSTR(hfe_group, 1, 3) hfe_group3,") \
		_T("     descr,") \
		_T("     DECODE('O', i.hfe_type, 1, times) times, tbl_fee.price, tbl_fee.insprice,") \
		_T("     DECODE('I', i.hfe_class, DECODE('O', i.hfe_type, hfe_amount, amount), 0) i_amount,") \
		_T("     DECODE('I', i.hfe_class, 0, DECODE('O', i.hfe_type, hfe_amount, amount)) e_amount,") \
		_T("     DECODE('O', i.hfe_type, hfe_amount, amount) amount,") \
		_T("     tbl_fee.salary, ") \
		_T("  i.hfe_docno                  AS doc_no,") \
		_T("  get_patientname(i.hfe_docno) AS patient_name") \
		_T("   FROM hms_fee_invoice_view_v2 i") \
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
		_T(" %s ") \
		_T(" GROUP BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, salary, price, doc_no,patient_name ") \
		_T(" ORDER BY dept_id,") \
		_T("   hfe_typeindex,") \
		_T("   hfe_group3,") \
		_T("   descr, doc_no"),szWhere, szWhere5);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
void CFMChiTietTheoDanhMuc_2024::Export(CString szFileName, CRecord* pRs)
{
	CExcel xls;
	CString tmpStr, szPath, szMsg;
	int nIndex = 1, nDepth = 0, nColNum = 0, nSheet = 1;
	double nTmp = 0, nTotal[45];
	long nFormat = 0;
	szPath.Format(_T("Exports\\Template\\Mau_%s.xls"), szFileName);
	if (!xls.Load(szPath))
	{
		szMsg.Format(_T("Thiếu file %s"), szPath);
		ShowMessageBox(szMsg);
		return;	
	}
	if (pRs->IsEOF())
	{
		ShowMessageBox(_T("No Data!"));
		return;
	}
	GROUP_INFO2 grp_info[2] = {};
	//InitGroupInfo(pRs, &grp_info, nDepth, nColNum);
	CArray<CString, CString> arGrp, arCol;
	for (int i = 0; i < pRs->GetFieldCount(); i++)
	{
		tmpStr = pRs->GetFieldName(i);
		if (tmpStr.Find(_T("_g_")) == 0)
		{
			arGrp.Add(tmpStr);
		}
		if (tmpStr.Find(_T("_g_")) == -1)
		{
			arCol.Add(tmpStr);
		}
	}
	nDepth = arGrp.GetCount();
	nColNum = arCol.GetCount();
	if (nDepth > 2)
	{
		ShowMessageBox(_T("More than 2 levels depth not supported!"));
		return;
	}
	if (nColNum> 45)
	{
		ShowMessageBox(_T("More than 45 column not supported!"));
		return;	
	}
	//GROUP_INFO2 grp_info[2] = {};
	for (int i = 0; i < nDepth; i++)
	{
		grp_info[i].id = arGrp.GetAt(i); 
		for (int j = 0; j < nColNum; j++)
		{
			grp_info[i].sum[j] = 0;
		}
		grp_info[i].total = 0;
	}	
	for (int i = 0; i < nColNum; i++)
	{
		nTotal[i] = 0;
	}
	xls.SetWorksheet(0);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), format_date(m_szFromDate), format_date(m_szToDate));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER);
	int nRow = 5;
	while (!pRs->IsEOF())
	{
		// Them sheet
		if (nRow > 65000)
		{
			tmpStr.Format(_T("Sheet%d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nSheet++;
			nRow = 0;
		}
		for (int i = 0; i < nDepth; i++)
		{
			pRs->GetValue(grp_info[i].id, grp_info[i].new_val);
			GROUP_INFO2 grp = grp_info[i];
			if (grp.new_val == grp.old_val)
			{
				continue;
			}
			for (int j = nDepth - 1; j >= i; j--)
			{
				GROUP_INFO2 grp = grp_info[j];
				if  (grp.total <= 0)
				{
					continue;
				}
				for (int k = 0; k < nColNum; k++)
				{
					if (grp.sum[k] <= 0)
					{
						continue;
					}
					tmpStr.Format(_T("%f"), grp.sum[k]);
					xls.SetCellText(k+1, nRow, tmpStr, FMT_NUMBER1, true);
					grp_info[j].sum[k] = 0;
				}
				nRow++;
				grp_info[j].total = 0;
			}
			xls.SetCellText(0, nRow++, grp.new_val, FMT_TEXT, true);
			grp_info[i].old_val = grp_info[i].new_val;
			for (int j = i + 1; j < nDepth; j++)
			{
				grp_info[j].old_val.Empty();
			}
		}
		xls.SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT);
		for (int i = 0; i < pRs->GetFieldCount() ; i++)
		{
			if (pRs->GetFieldName(i).Find(_T("_g_")) == 0)
			{
				continue;
			}
			nFormat = FMT_TEXT;
			if (pRs->GetFieldName(i).Find(_T("_n_")) == 0)
			{
				nFormat = FMT_NUMBER1;
				nTmp = str2double(pRs->GetValue(i));
				for (int j = 0; j < nDepth; j++)
				{
					grp_info[j].sum[i] += nTmp;
					grp_info[j].total += nTmp;
				}
				nTotal[i] += nTmp;
			}
			xls.SetCellText(i+1, nRow, pRs->GetValue(i), nFormat);
		}
		nRow++;
		pRs->MoveNext();
	}
	for (int j = nDepth - 1; j >= 0; j--)
	{
		GROUP_INFO2 grp = grp_info[j];
		if  (grp.total <= 0)
		{
			continue;
		}
		for (int k = 0; k < nColNum; k++)
		{
			if (grp.sum[k] <= 0)
			{
				continue;
			}
			tmpStr.Format(_T("%f"), grp.sum[k]);
			xls.SetCellText(k+1, nRow, tmpStr, FMT_NUMBER1, true);
			grp_info[j].sum[k] = 0;
		}
		nRow++;
		grp_info[j].total = 0;
	}
	for (int i = 0; i < 45; i++)
	{
		if (nTotal[i] <= 0)
		{
			continue;
		}
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+1, nRow, tmpStr, FMT_NUMBER1, true);
	}
	szPath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szPath);			
}
void CFMChiTietTheoDanhMuc_2024::InitGroupInfo(CRecord* pRs, GROUP_INFO2 (*grp_info)[2], int& nDepth, int& nColNum)
{
	CArray<CString, CString> arGrp, arCol;
	CString tmpStr;
	for (int i = 0; i < pRs->GetFieldCount(); i++)
	{
		tmpStr = pRs->GetFieldName(i);
		if (tmpStr.Find(_T("_g_")) == 0)
		{
			arGrp.Add(tmpStr);
		}
		if (tmpStr.Find(_T("_g_")) == -1)
		{
			arCol.Add(tmpStr);
		}
	}
	nDepth = arGrp.GetCount();
	nColNum = arCol.GetCount();
	if (nDepth > 2)
	{
		ShowMessageBox(_T("More than 2 levels depth not supported!"));
		return;
	}
	if (nColNum> 45)
	{
		ShowMessageBox(_T("More than 45 column not supported!"));
		return;	
	}
	for (int i = 0; i < nDepth; i++)
	{
		grp_info[i]->id = arGrp.GetAt(i); 
		_tprintf(_T("\ngrp_info[%d]: %u\n"), i, grp_info[i]);
		for (int j = 0; j < nColNum; j++)
		{
			grp_info[i]->sum[j] = 0;
		}
		grp_info[i]->total = 0;
	}
}


int CFMChiTietTheoDanhMuc_2024::OnListCheckAllPTTYCTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndDeptList.GetItemCount(); i++)	
	{
		szItemText=m_wndDeptList.GetItemText(i,0);
	if ((_T("PTTYC"))==szItemText || (_T("TYC"))==szItemText || (_T("KSK"))==szItemText)
	{
		m_wndDeptList.SetCheck(i, true);
		nCheck++;		
	}	
	else m_wndDeptList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMChiTietTheoDanhMuc_2024::OnListCheckAllTTTM()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndDeptList.GetItemCount(); i++)	
	{
		szItemText=m_wndDeptList.GetItemText(i,0);
	if ((_T("TTTM"))==szItemText || (_T("TMNT"))==szItemText)
	{
		m_wndDeptList.SetCheck(i, true);
		nCheck++;		
	}	
	else m_wndDeptList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMChiTietTheoDanhMuc_2024::OnListCheckAllKBA16()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndDeptList.GetItemCount(); i++)	
	{
		szItemText=m_wndDeptList.GetItemText(i,0);
	if ((_T("KB_A16"))==szItemText)
	{
		m_wndDeptList.SetCheck(i, true);
		nCheck++;		
	}	
	else m_wndDeptList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMChiTietTheoDanhMuc_2024::OnListUnCheckAllTYC_PTTYC_KBA16()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndDeptList.GetItemCount(); i++)	
	{
		szItemText=m_wndDeptList.GetItemText(i,0);
	if ((_T("KB_A16"))==szItemText || (_T("PTTYC"))==szItemText || (_T("TYC"))==szItemText || (_T("TMNT"))==szItemText 
		|| (_T("TTTM"))==szItemText || (_T("KSK"))==szItemText)
	{
		m_wndDeptList.SetCheck(i, false);
		nCheck++;		
	}	
	else m_wndDeptList.SetCheck(i, true);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}


