#include "stdafx.h"
#include "FMServiceRefundByDept.h"
#include "HMSMainFrame.h"
#include "../SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceRefundByDept* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceRefundByDept* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceRefundByDept* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnStatusAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnDeptLoadData();
}
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceRefundByDept* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnOrderByAddNew();
}*/
static long _OnObjectTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept *)pWnd)->OnObjectTypeLoadData();
}
static void _OnObjectTypeSelendokFnc(CWnd *pWnd){
	((CFMServiceRefundByDept *)pWnd)->OnObjectTypeSelendok();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMServiceRefundByDept*)pWnd)->OnWithoutGeneralSelect();
}
static void _OnHitechMachineSelectFnc(CWnd *pWnd){
	 ((CFMServiceRefundByDept*)pWnd)->OnHitechMachineSelect();
}
static void _OnDetailSelectFnc(CWnd *pWnd){
	 ((CFMServiceRefundByDept*)pWnd)->OnDetailSelect();
}
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMServiceRefundByDept *pVw = (CFMServiceRefundByDept *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMServiceRefundByDept *pVw = (CFMServiceRefundByDept *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServiceRefundByDept *pVw = (CFMServiceRefundByDept *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServiceRefundByDept *pVw = (CFMServiceRefundByDept *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundByDept*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMServiceRefundByDept*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceRefundByDept*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceRefundByDept*)pWnd)->OnListDeleteItem();
} 
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMServiceRefundByDept*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMServiceRefundByDept*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMServiceRefundByDept*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMServiceRefundByDept*)pWnd)->OnSODSelect();
}
CFMServiceRefundByDept::CFMServiceRefundByDept(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMServiceRefundByDept::~CFMServiceRefundByDept(){
}
void CFMServiceRefundByDept::OnCreateComponents(){
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 215, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 90, 300, 115);
	m_wndStatus.Create(this,305, 90, 425, 115); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 90, 145);
	m_wndDept.Create(this,95, 120, 215, 145); 
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 220, 120, 300, 145);
	m_wndObjectType.Create(this,305, 120, 425, 145); 
	//m_wndOrderByLabel.Create(this, _T("Order By"), 220, 120, 300, 145);
	//m_wndOrderBy.Create(this,305, 120, 425, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 425, 145);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 10, 505, 130, 530);
	m_wndDetail.Create(this, _T("Detail"), 135, 505, 255, 530);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndList.Create(this,10, 150, 425, 500); 
	m_wndWithoutGeneral.ShowWindow(SW_HIDE);
	m_wndOrderBy.EnableWindow(FALSE);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 4, 480, 534);
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
	m_wndObjectTypeLabel.Create(this, _T("Object Type"), 248, 121, 338, 146);
	m_wndObjectType.Create(this,350, 119, 480, 144); 
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 13, 505, 133, 530);
	m_wndDetail.Create(this, _T("Detail"), 138, 505, 258, 530);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 314, 540, 394, 565);
	m_wndExport.Create(this, _T("Export XLS"), 399, 540, 479, 565);
	m_wndList.Create(this,12, 150, 480, 500); 
	m_wndSOD.Create(this, _T("SOD"), 314, 505, 479, 530);
	m_wndWithoutGeneral.Create(this, _T("Without General"), 0, 0, 0, 0);
	m_wndOrderBy.Create(this,0, 0, 0, 0);

}
void CFMServiceRefundByDept::OnInitializeComponents(){
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

	m_wndObjectType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObjectType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMServiceRefundByDept::OnSetWindowEvents(){
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
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(3, _T("Search"), _OnListSearchItemFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
    UpdateData(FALSE);

}
void CFMServiceRefundByDept::OnDoDataExchange(CDataExchange* pDX){
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

}
void CFMServiceRefundByDept::SetDefaultValues(){

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
}

int CFMServiceRefundByDept::SetMode(int nMode){
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

/*void CFMServiceRefundByDept::OnYearChange(){
	
} */
/*void CFMServiceRefundByDept::OnYearSetfocus(){
	
} */
/*void CFMServiceRefundByDept::OnYearKillfocus(){
	
} */
int CFMServiceRefundByDept::OnYearCheckValue(){
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
 
void CFMServiceRefundByDept::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceRefundByDept::OnReportPeriodSelendok(){
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

/*void CFMServiceRefundByDept::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServiceRefundByDept::OnReportPeriodKillfocus(){
	
}*/
long CFMServiceRefundByDept::OnReportPeriodLoadData(){
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

/*void CFMServiceRefundByDept::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServiceRefundByDept::OnFromDateChange(){
	
} */
/*void CFMServiceRefundByDept::OnFromDateSetfocus(){
	
} */
/*void CFMServiceRefundByDept::OnFromDateKillfocus(){
	
} */
int CFMServiceRefundByDept::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMServiceRefundByDept::OnToDateChange(){
	
} */
/*void CFMServiceRefundByDept::OnToDateSetfocus(){
	
} */
/*void CFMServiceRefundByDept::OnToDateKillfocus(){
	
} */
int CFMServiceRefundByDept::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMServiceRefundByDept::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceRefundByDept::OnClerkSelendok(){
	 
}

/*void CFMServiceRefundByDept::OnClerkSetfocus(){
	
}*/
/*void CFMServiceRefundByDept::OnClerkKillfocus(){
	
}*/
long CFMServiceRefundByDept::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServiceRefundByDept::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceRefundByDept::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceRefundByDept::OnStatusSelendok(){
	 OnListLoadData();
}
int CFMServiceRefundByDept::OnListCheckAllTYC()
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
int CFMServiceRefundByDept::OnListCheckAllPTTYC()
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

void CFMServiceRefundByDept::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}
void CFMServiceRefundByDept::OnSODSelect(){
	OnListLoadData();
}


/*void CFMServiceRefundByDept::OnStatusSetfocus(){
	
}*/
/*void CFMServiceRefundByDept::OnStatusKillfocus(){
	
}*/
long CFMServiceRefundByDept::OnStatusLoadData(){
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

long CFMServiceRefundByDept::OnDeptLoadData(){
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

/*void CFMServiceRefundByDept::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceRefundByDept::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceRefundByDept::OnOrderBySelendok(){
	 
}

/*void CFMServiceRefundByDept::OnOrderBySetfocus(){
	
}*/
/*void CFMServiceRefundByDept::OnOrderByKillfocus(){
	
}*/
long CFMServiceRefundByDept::OnOrderByLoadData(){
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

long CFMServiceRefundByDept::OnObjectTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndObjectType.AddItems(_T("01"), _T("\x44\x1ECB\x63h v\x1EE5"), NULL);
	m_wndObjectType.AddItems(_T("02"), _T("\x42\x1EA3o hi\x1EC3m"), NULL);
	m_wndObjectType.AddItems(_T("03"), _T("Qu\xE2n - \x43h\xEDnh s\xE1\x63h"), NULL);
	return 3;
}

void CFMServiceRefundByDept::OnObjectTypeSelendok(){
	OnListLoadData();	
}

/*void CFMServiceRefundByDept::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMServiceRefundByDept::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

	void CFMServiceRefundByDept::OnHitechMachineSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMServiceRefundByDept::OnDetailSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServiceRefundByDept::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
}
 
void CFMServiceRefundByDept::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}
 
void CFMServiceRefundByDept::OnPrintSelect(){
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
			szReportName = _T("Reports\\HMS\\HF_BAOCAOCHIDICHVUYTE-THEOKHOA.RPT");
	}
	if (m_szObjectTypeKey == _T("02"))
		szReportName = _T("Reports\\HMS\\HF_BAOCAOTHUCHIDICHVUYTE-THEOKHOA-BH.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
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
 
void CFMServiceRefundByDept::OnExportSelect(){
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
 
void CFMServiceRefundByDept::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

}
 
void CFMServiceRefundByDept::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMServiceRefundByDept::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMServiceRefundByDept::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szObjectID;

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
	if (m_szObjectTypeKey == _T("01"))
		szObjectID = _T("DV");
	else if (m_szObjectTypeKey == _T("02"))
		szObjectID = _T("BH");
	else if (m_szObjectTypeKey == _T("03"))
		szObjectID = _T("QU");
	if (!szObjectID.IsEmpty())
		szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = '%s'"), szObjectID);

	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id  in ('DVYC','DV-PTTYC')"));
	else
	szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV' AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T(" FROM fa_cash WHERE fac_invoicetype in('P') %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
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
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}
CString CFMServiceRefundByDept::GetQueryString()
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
		szWhere.Format(_T(" AND r.hfe_cash_id in(%s) "), szReceiptStr);
	else
		szWhere = m_szWhere;	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);
	if (m_bHitechMachine)
		szWhere1.AppendFormat(_T(" AND hfl_hitechmachine = 'Y'"));
	else
	{

	szSQL.Format(_T(" SELECT tbl_cost.khoa_thuchien, tien_nt, tien_ngt, tong_tien,qs_nt, qs_ngt,tong_qs") \
	_T(" FROM") \
	_T("   (SELECT khoa_thuchien,") \
	_T("     SUM(") \
	_T("     CASE WHEN hfe_class <> 'I' THEN 1 ELSE 0 END) qs_ngt,") \
	_T("     SUM(") \
	_T("     CASE WHEN hfe_class = 'I' THEN 1 ELSE 0 END) qs_nt,") \
	_T("     COUNT(*) tong_qs") \
	_T("   FROM") \
	_T("     (SELECT DISTINCT tbl0.hfe_class,khoa_thuchien,tbl0.hfe_docno") \
	_T("     FROM") \
	_T("       (      ") \
	//1. Tra lai phi kham benh//
	_T("       SELECT f.hfe_docno,f.hfe_type,r.hfe_class,r.hfe_invoiceno,") \
	_T("         CASE WHEN he_roomid IN ( 50, 54 ) THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3)) ELSE f.hfe_deptid END khoa_thuchien,") \
	_T("         f.hfe_itemid, rl.hfe_patpaid tong_tien, f.hfe_category ") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN hms_exam ex ON (f.hfe_docno = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno=rl.hfe_docno)") \
	_T("       WHERE 1=1 %s") \
	_T("       AND f.hfe_status  IN ('P','R') AND f.hfe_group ='D0000' AND f.hfe_itemid   <> 'D0000006' AND f.hfe_patpaid   >0") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL") \
	//2. Tra lai phi giuong//
	_T("       SELECT f.hfe_docno,f.hfe_type,r.hfe_class,r.hfe_invoiceno,        ") \
	_T("       CASE WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') THEN f.hfe_deptid END khoa_thuchien,") \
	_T("         f.hfe_itemid,rl.hfe_patpaid tong_tien,f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status   IN ('P','R') AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006') ") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	//3. Tra lai khoa sinh hoc phan tu=C17, khoa tiep huyet=C16, y hoc hat nhan=A20, khoa giai phau benh ly C15// 
	_T("       SELECT f.hfe_docno,f.hfe_type,r.hfe_class,r.hfe_invoiceno,") \
	_T("         CASE WHEN f.hfe_type IN ('P','T') AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("           THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20','B1E00','C5') AS NVARCHAR2(3)) END khoa_thuchien,") \
	_T("         f.hfe_itemid,rl.hfe_patpaid tong_tien,f.hfe_category") \
	_T("       FROM hms_fee f") \
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
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN f.hfe_type     IN ('P','T')") \
	_T("           AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("           THEN Fl.Hfl_Deptid") \
	_T("         END khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
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
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	/*_T("         CASE") \
	_T("           WHEN f.hfe_type ='O'") \
	_T("           AND HO_PDEPTID  ='B5'") \
	_T("           THEN HO_DEPTID") \
	_T("           ELSE HO_PDEPTID") \
	_T("         END khoa_thuchien,") \*/
	//Update 07/05/2017 - Truong hop co nhap ket qua nhung ho_deptid lai null - fuck!
	_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
	_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
	_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("	   LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
	_T("       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx AND f.hfe_type   = 'O')") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status   IN ('P','R')") \
	_T("       AND F.Hfe_type      ='O'") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	//6. Tra lai phi khoa duoc, tai chinh tao phieu//
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp") \
	_T("       ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid) LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status       IN ('P','R')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND f.hfe_deptid       <> 'B5'") \
	_T("       AND product_org_id NOT IN ('MA','BB')") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'  ") \
	_T("       UNION ALL      ") \
	//7. Tra lai phi khoa duoc, khoa duoc tao phieu//
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
	_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
	_T("       WHERE 1                 =1 %s") \
	_T("       AND f.hfe_status       IN ('P')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND f.hfe_deptid       <> 'B5'") \
	_T("       AND product_org_id NOT IN ('MA','BB')") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
	_T("       UNION ALL      ") \
	//8. Tra lai phi khoa trang bi, tai chinh tao phieu//
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
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
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
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
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
	_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status       IN ('P','R')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND product_org_id NOT IN ('MA','BB')") \
	_T("       AND f.hfe_deptid        = 'B5'") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
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
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status       IN ('P','R')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND product_org_id NOT IN ('MA','PM')") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	//12. Chi khac o tai chinh//
	_T("       SELECT r.hfe_docno,") \
	_T("         r.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_type  IN ('V') AND r.Hfe_Serialno='PC' AND r.hfe_deptid is NOT NULL THEN r.hfe_deptid") \
	_T("           WHEN r.hfe_type  IN ('V') AND r.Hfe_Serialno='PC' AND r.hfe_deptid is NULL THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15))") \
	_T("         END khoa_thuchien,") \
	_T("         NULL,") \
	_T("         hfe_cost tong_tien,") \
	_T("         NULL") \
	_T("       FROM hms_fee_refund r LEFT JOIN Hms_Fee_Refundline rl ON (r.hfe_docno     =rl.hfe_docno AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND r.hfe_status   IN ('P','R')") \
	_T("       AND r.hfe_type      ='V'") \
	_T("       AND r.Hfe_Serialno  ='PC'") \
	_T("       UNION ALL      ") \
	//13. Chi tra lai tien an//
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_class,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN f.hfe_deptid IN ('C1.1', 'C1.2','C1.3')") \
	_T("           THEN HCR_ADMITDEPT") \
	_T("           ELSE f.hfe_deptid") \
	_T("         END AS khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)      ") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status   IN ('P','R')") \
	_T("       AND F.Hfe_Group    IN ('FF000')") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       ) tbl0") \
	_T("     LEFT JOIN hms_fee_list") \
	_T("     ON ( hfl_feeid                  = CAST(tbl0.hfe_itemid AS NVARCHAR2(15)))") \
	_T("     WHERE 1                         =1 %s") \
	_T("     AND NVL(hfe_category, 'N') NOT IN( 'Y' )") \
	_T("     ) tbl_distinct") \
	_T("   GROUP BY khoa_thuchien") \
	_T("   ORDER BY khoa_thuchien") \
	_T("   ) tbl_qs  ") \
	_T(" LEFT JOIN") \
	_T("   (SELECT khoa_thuchien,") \
	_T("     tien_ngt,") \
	_T("     tien_nt,") \
	_T("     (tien_ngt+tien_nt) tong_tien") \
	_T("   FROM (") \
	_T("     (SELECT khoa_thuchien,") \
	_T("       CASE") \
	_T("         WHEN 0          >=0") \
	_T("         AND SUM(tien_ngt)>0") \
	_T("         THEN SUM(ROUND(tien_ngt))-ROUND(0)") \
	_T("         ELSE SUM(tien_ngt)") \
	_T("       END tien_ngt,") \
	_T("       CASE") \
	_T("         WHEN 0         >=0") \
	_T("         AND SUM(tien_nt)>0") \
	_T("         THEN SUM(ROUND(tien_nt))- ROUND(0)") \
	_T("         ELSE SUM(tien_nt)") \
	_T("       END tien_nt,") \
	_T("       CASE") \
	_T("         WHEN 0           >=0") \
	_T("         AND SUM(tong_tien)>0") \
	_T("         THEN SUM(ROUND(tong_tien))- ROUND(0)") \
	_T("         ELSE SUM(tong_tien)") \
	_T("       END tong_tien") \
	_T("     FROM") \
	_T("       (      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN he_roomid IN ( 50, 54 )") \
	_T("           THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
	_T("           ELSE f.hfe_deptid") \
	_T("         END khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN hms_exam ex ON (f.hfe_docno   = ex.he_docno AND f.hfe_orderid = ex.he_receptidx)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status   IN ('P','R')") \
	_T("       AND f.hfe_group     ='D0000'") \
	_T("       AND f.hfe_itemid   <> 'D0000006'") \
	_T("       AND f.hfe_patpaid   >0") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006') ") \
	_T("           THEN f.hfe_deptid") \
	_T("         END khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status   IN ('P','R')") \
	_T("       AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN f.hfe_type IN ('P','T')") \
	_T("           AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("           THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20','B1E00','C5') AS NVARCHAR2(3))") \
	_T("         END khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status   IN ('P','R')") \
	_T("       AND f.hfe_type     IN ('P','T')") \
	_T("       AND F.Hfe_Group    IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'      ") \
	_T("       UNION ALL") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN f.hfe_type     IN ('P','T')") \
	_T("           AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("           THEN Fl.Hfl_Deptid") \
	_T("         END khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid  =fl.hfl_feeid AND f.hfe_type IN ('P', 'T')) ") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno  = rl.hfe_invoiceno AND r.hfe_docno      = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status    IN ('P','R')") \
	_T("       AND f.hfe_type      IN ('T','P')") \
	_T("       AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("       AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc      <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	//Update 07/05/2017 - Truong hop co nhap ket qua nhung ho_deptid lai null - fuck!
	_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
	_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
	_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
	_T("       LEFT JOIN hms_operation ON ( f.hfe_docno = ho_docno AND hfe_orderid  = ho_idx AND f.hfe_type   = 'O')") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status   IN ('P','R')") \
	_T("       AND F.Hfe_type      ='O'") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status       IN ('P','R')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND f.hfe_deptid       <> 'B5'") \
	_T("       AND product_org_id NOT IN ('MA','BB')") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno = f.hfe_docno)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno   = f.hfe_docno AND r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid   =Rl.Hfe_Itemid)") \
	_T("       INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno     = ro.hpo_invoiceno AND f.hfe_orderid       =Ro.Hpo_Orderid)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status       IN ('P')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND f.hfe_deptid       <> 'B5'") \
	_T("       AND product_org_id NOT IN ('MA','BB')") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
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
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
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
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
	_T("       LEFT JOIN hms_operation ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status       IN ('P','R')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND product_org_id NOT IN ('MA','BB')") \
	_T("       AND f.hfe_deptid        = 'B5'") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
	_T("       LEFT JOIN hms_operation  ON (HPO_REFITEM_ID  =ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status       IN ('P','R')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND product_org_id NOT IN ('PM','BB')") \
	_T("       AND f.hfe_deptid        = 'B5'") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'	  ") \
	_T("       UNION ALL     ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN m_productitem_view_vp  ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("       LEFT JOIN hms_pharmaorder_view_vp ON (hpo_orderid = f.hfe_orderid)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno     = rl.hfe_invoiceno AND r.hfe_docno         = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status       IN ('P','R')") \
	_T("       AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("       AND product_org_id NOT IN ('MA','PM')") \
	_T("       AND f.hfe_category     IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc         <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("       UNION ALL      ") \
	_T("       SELECT r.hfe_docno,") \
	_T("         r.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_type  IN ('V')") \
	_T("           AND r.Hfe_Serialno='PC'") \
	_T("           THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15))") \
	_T("         END khoa_thuchien,") \
	_T("         NULL,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN hfe_cost") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN hfe_cost") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         hfe_cost tong_tien,") \
	_T("         NULL") \
	_T("       FROM hms_fee_refund r LEFT JOIN Hms_Fee_Refundline rl ON (r.hfe_docno     =rl.hfe_docno AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND r.hfe_status   IN ('P','R')") \
	_T("       AND r.hfe_type      ='V'") \
	_T("       AND r.Hfe_Serialno  ='PC'	  ") \
	_T("       UNION ALL      ") \
	_T("       SELECT f.hfe_docno,") \
	_T("         f.hfe_type,") \
	_T("         r.hfe_invoiceno,") \
	_T("         CASE") \
	_T("           WHEN f.hfe_deptid IN ('C1.1', 'C1.2','C1.3')") \
	_T("           THEN HCR_ADMITDEPT") \
	_T("           ELSE f.hfe_deptid") \
	_T("         END AS khoa_thuchien,") \
	_T("         f.hfe_itemid,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class = 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_nt,") \
	_T("         CASE") \
	_T("           WHEN r.hfe_class <> 'I'") \
	_T("           THEN rl.hfe_patpaid") \
	_T("           ELSE 0") \
	_T("         END tien_ngt,") \
	_T("         rl.hfe_patpaid tong_tien,") \
	_T("         f.hfe_category") \
	_T("       FROM hms_fee f") \
	_T("       LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
	_T("       LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno =rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("       LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno     = rl.hfe_docno)") \
	_T("       WHERE 1             =1 %s") \
	_T("       AND f.hfe_status   IN ('P','R')") \
	_T("       AND F.Hfe_Group    IN ('FF000')") \
	_T("       AND f.hfe_category IN ('N','BQP','XX')") \
	_T("       AND r.hfe_desc     <> 'Hoàn tr? b?nh nhân thanh toán ra vi?n'") \
	_T("       )tbl1") \
	_T("     LEFT JOIN hms_fee_list") \
	_T("     ON ( hfl_feeid                  = CAST(tbl1.hfe_itemid AS NVARCHAR2(15)))") \
	_T("     WHERE 1                         =1 %s") \
	_T("     AND NVL(hfe_category, 'N') NOT IN( 'Y' )") \
	_T("     GROUP BY khoa_thuchien") \
	_T("     ORDER BY khoa_thuchien") \
	_T("     ))") \
	_T("   ) tbl_cost ON ( tbl_qs.khoa_thuchien = tbl_cost.khoa_thuchien) WHERE tong_tien>0"),szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere1,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere,szWhere1); \
	}
	return szSQL;
}