#include "stdafx.h"
#include "FMPostedPaymentVoucherList2.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
#include "FMFinancialDocumentPrinter.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPostedPaymentVoucherList2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPostedPaymentVoucherList2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedPaymentVoucherList2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPostedPaymentVoucherList2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPostedPaymentVoucherList2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPostedPaymentVoucherList2* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedPaymentVoucherList2 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPostedPaymentVoucherList2* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedPaymentVoucherList2 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPostedPaymentVoucherList2* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedPaymentVoucherList2 *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2 *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMPostedPaymentVoucherList2*)pWnd)->OnWithoutGeneralSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMPostedPaymentVoucherList2*)pWnd)->OnSODSelect();
}

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMPostedPaymentVoucherList2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMPostedPaymentVoucherList2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPostedPaymentVoucherList2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPostedPaymentVoucherList2*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMPostedPaymentVoucherList2 *pVw = (CFMPostedPaymentVoucherList2 *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMPostedPaymentVoucherList2 *pVw = (CFMPostedPaymentVoucherList2 *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPostedPaymentVoucherList2 *pVw = (CFMPostedPaymentVoucherList2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPostedPaymentVoucherList2 *pVw = (CFMPostedPaymentVoucherList2 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedPaymentVoucherList2*)pWnd)->OnAddFMInsurancePostedPaymentVoucherList();
} 
static int _OnEditFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedPaymentVoucherList2*)pWnd)->OnEditFMInsurancePostedPaymentVoucherList();
} 
static int _OnDeleteFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedPaymentVoucherList2*)pWnd)->OnDeleteFMInsurancePostedPaymentVoucherList();
} 
static int _OnSaveFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedPaymentVoucherList2*)pWnd)->OnSaveFMInsurancePostedPaymentVoucherList();
} 
static int _OnCancelFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPostedPaymentVoucherList2*)pWnd)->OnCancelFMInsurancePostedPaymentVoucherList();
} 
static int _OnListSearchItemFnc(CWnd *pWnd)
{
	 ((CFMPostedPaymentVoucherList2*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMPostedPaymentVoucherList2*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMPostedPaymentVoucherList2*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CFMPostedPaymentVoucherList2*)pWnd)->OnABZoneSelect();
}
static void _OnAllZoneSelectFnc(CWnd *pWnd){
	 ((CFMPostedPaymentVoucherList2*)pWnd)->OnAllZoneSelect();
}
static void _OnCLCZoneSelectFnc(CWnd *pWnd){
	 ((CFMPostedPaymentVoucherList2*)pWnd)->OnCLCZoneSelect();
}


CFMPostedPaymentVoucherList2::CFMPostedPaymentVoucherList2(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMPostedPaymentVoucherList2::~CFMPostedPaymentVoucherList2()
{
}
void CFMPostedPaymentVoucherList2::OnCreateComponents()
{
	
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 485, 534);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 235, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 480, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 235, 85); 
	m_wndToDate.Create(this,335, 60, 480, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 235, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 235, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 250, 90, 330, 115);
	m_wndStatus.Create(this,335, 90, 480, 115); 
	m_wndList.Create(this,9, 181, 480, 527); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 34, 39, 34, 39);
	m_wndSOD.Create(this, _T("Service On Demand"), 95, 150, 235, 175);
	m_wndABZone.Create(this, _T("AB Zone"), 10, 150, 90, 175);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 314, 540, 394, 565);
	m_wndExport.Create(this, _T("Export XLS"), 399, 540, 479, 565);
	m_wndAllZone.Create(this, _T("AllZone"), 250, 150, 330, 175);
	m_wndCLCZone.Create(this, _T("CLC Zone"), 335, 150, 480, 175);
}
void CFMPostedPaymentVoucherList2::OnInitializeComponents(){
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
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 130);
	m_wndList.InsertColumn(4, _T("Staff"), CFMT_TEXT, 150);
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

void CFMPostedPaymentVoucherList2::OnSetWindowEvents(){
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
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Check All TYC"), _OnListCheckAllTYCFnc);
	m_wndList.AddEvent(2, _T("Check All PTTYC"), _OnListCheckAllPTTYCFnc);
	m_wndList.AddEvent(3, _T("Search"), _OnListSearchItemFnc);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndAllZone.SetEvent(WE_CLICK, _OnAllZoneSelectFnc);
	m_wndCLCZone.SetEvent(WE_CLICK, _OnCLCZoneSelectFnc);
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

	m_mIndex[_T("E")] = _T("Chi ngoại trú");
	m_mIndex[_T("I")] = _T("Chi nội trú");
	//m_mIndex[_T("III")] = _T("Chi khác");


	SetMode(VM_EDIT);


}
void CFMPostedPaymentVoucherList2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndAllZone.GetDlgCtrlID(), m_bAllZone);
	DDX_Check(pDX, m_wndCLCZone.GetDlgCtrlID(), m_bCLCZone);

}
void CFMPostedPaymentVoucherList2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPostedPaymentVoucherList2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPostedPaymentVoucherList2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_bSOD = FALSE;
	m_bAllZone=FALSE;
	m_bCLCZone=FALSE;

}

int CFMPostedPaymentVoucherList2::SetMode(int nMode){
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

/*void CFMPostedPaymentVoucherList2::OnYearChange(){
	
} */
/*void CFMPostedPaymentVoucherList2::OnYearSetfocus(){
	
} */
/*void CFMPostedPaymentVoucherList2::OnYearKillfocus(){
	
} */
int CFMPostedPaymentVoucherList2::OnYearCheckValue(){
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
 
void CFMPostedPaymentVoucherList2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMPostedPaymentVoucherList2::OnReportPeriodSelendok(){
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

	void CFMPostedPaymentVoucherList2::OnCLCZoneSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}

/*void CFMPostedPaymentVoucherList2::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPostedPaymentVoucherList2::OnReportPeriodKillfocus(){
	
}*/
long CFMPostedPaymentVoucherList2::OnReportPeriodLoadData(){
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

/*void CFMPostedPaymentVoucherList2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPostedPaymentVoucherList2::OnFromDateChange(){
	
} */
/*void CFMPostedPaymentVoucherList2::OnFromDateSetfocus(){
	
} */
/*void CFMPostedPaymentVoucherList2::OnFromDateKillfocus(){
	
} */
int CFMPostedPaymentVoucherList2::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMPostedPaymentVoucherList2::OnToDateChange(){
	
} */
/*void CFMPostedPaymentVoucherList2::OnToDateSetfocus(){
	
} */
/*void CFMPostedPaymentVoucherList2::OnToDateKillfocus(){
	
} */
int CFMPostedPaymentVoucherList2::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMPostedPaymentVoucherList2::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPostedPaymentVoucherList2::OnClerkSelendok(){
	 
}
/*void CFMPostedPaymentVoucherList2::OnClerkSetfocus(){
	
}*/
/*void CFMPostedPaymentVoucherList2::OnClerkKillfocus(){
	
}*/
long CFMPostedPaymentVoucherList2::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'F'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMPostedPaymentVoucherList2::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPostedPaymentVoucherList2::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPostedPaymentVoucherList2::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMPostedPaymentVoucherList2::OnStatusSetfocus(){
	
}*/
/*void CFMPostedPaymentVoucherList2::OnStatusKillfocus(){
	
}*/
long CFMPostedPaymentVoucherList2::OnStatusLoadData(){
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
/*void CFMPostedPaymentVoucherList2::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPostedPaymentVoucherList2::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPostedPaymentVoucherList2::OnOrderBySelendok(){
	 
}
/*void CFMPostedPaymentVoucherList2::OnOrderBySetfocus(){
	
}*/
/*void CFMPostedPaymentVoucherList2::OnOrderByKillfocus(){
	
}*/
long CFMPostedPaymentVoucherList2::OnOrderByLoadData(){
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
/*void CFMPostedPaymentVoucherList2::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPostedPaymentVoucherList2::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMPostedPaymentVoucherList2::OnSODSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}

void CFMPostedPaymentVoucherList2::OnABZoneSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();
}
void CFMPostedPaymentVoucherList2::OnAllZoneSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	OnListLoadData();	
}

void CFMPostedPaymentVoucherList2::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMPostedPaymentVoucherList2::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPostedPaymentVoucherList2::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CFMPostedPaymentVoucherList2::OnListCheckAllTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("DVYC"))==szItemText.Right(4))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}

int CFMPostedPaymentVoucherList2::OnListCheckAllPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("PTTYC"))==szItemText.Right(5))
	{
		m_wndList.SetCheck(i, true);
		nCheck++;
	}
	else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;
}
void CFMPostedPaymentVoucherList2::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
} 

long CFMPostedPaymentVoucherList2::OnListLoadData(){
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
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC')"));

	else if (m_bABZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB')"));
	else if (m_bCLCZone)
	
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVCLC', 'DVCLCA16')"));	

	else if (m_bAllZone)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV')"));

	else
		szWhere.AppendFormat(_T(" AND fac_cashbook_id IN ('DV', 'CASH')"));


	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate, fac_approveddate as ngayduyet, FAC_APPROVED as daduyet ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'P' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
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
			rs.GetValue(_T("ngayduyet")),
			rs.GetValue(_T("daduyet")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMPostedPaymentVoucherList2::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int i = 0;
	for(i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	_msg(_T("Tổng số phiếu = %d"), i);
	
} 
void CFMPostedPaymentVoucherList2::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMPostedPaymentVoucherList2::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Form A3"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Form A4"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	TranslateString(_T("**********"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	TranslateString(_T("In BK dịch vụ (mới từ 1/1/2024)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 9, tmpStr);
	/*TranslateString(_T("Bảng kê ghi sổ chi - Mẫu CQ07-HD - 01"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	TranslateString(_T("Bảng kê ghi sổ chi - Mẫu CQ07-HD - 02"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);*/

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint2ndver(true);
			break;
		case 2:
			OnPrint2ndver();
			break;
		case 3:
			OnPrint3ndver();
			break;
		case 4:
			OnPrint4ndver();
			break;
		case 9:
			OnPrint3rdver_2024();
			break;
	}
}
 
 
int CFMPostedPaymentVoucherList2::OnAddFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPostedPaymentVoucherList2::OnEditFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPostedPaymentVoucherList2::OnDeleteFMInsurancePostedPaymentVoucherList(){
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
int CFMPostedPaymentVoucherList2::OnSaveFMInsurancePostedPaymentVoucherList(){
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
int CFMPostedPaymentVoucherList2::OnCancelFMInsurancePostedPaymentVoucherList(){
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
int CFMPostedPaymentVoucherList2::OnFMInsurancePostedPaymentVoucherListListLoadData(){
	return 0;
}

void CFMPostedPaymentVoucherList2::OnPrint2ndver(bool bIsA3)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate;
	double nTotal[22];
	double nFa = 0;
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUCHISO2");
	if (bIsA3)
		szReportName += _T("_A3.RPT");
	else
		szReportName += _T("_A4.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 22; i++)
		nTotal[i] = 0;
	//m_nHitechEAmount = 0;
	//m_nHitechIAmount = 0;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("user_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("invoice_no")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("invoice_date")));
			//
			rs.GetValue(_T("invoice_deposit"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[5] += nTmp;
			rptDetail->SetValue(_T("5"), tmpStr);
			//
			rs.GetValue(_T("invoice_amount"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[6] += nTmp;
			rptDetail->SetValue(_T("6"), tmpStr);
			//
			rs.GetValue(_T("fa"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[7] += nTmp;
			rptDetail->SetValue(_T("7"), tmpStr);

			//
			rs.GetValue(_T("nguoncovid"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[8] += nTmp;
			rptDetail->SetValue(_T("8"), tmpStr);

			//
			rs.GetValue(_T("invoice_drug"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[9] += nTmp;
			rptDetail->SetValue(_T("9"), tmpStr);
			//
			rs.GetValue(_T("invoice_material"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[10] += nTmp;
			rptDetail->SetValue(_T("10"), tmpStr);
			//
			rs.GetValue(_T("cnc_amount"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[11] += nTmp;
			rptDetail->SetValue(_T("11"), tmpStr);

			rs.GetValue(_T("thu_goidv"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[12] += nTmp;
			rptDetail->SetValue(_T("12"), tmpStr);

			//
			rs.GetValue(_T("patient_return"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[13] += nTmp;
			rptDetail->SetValue(_T("13"), tmpStr);
			//
			rs.GetValue(_T("fee_return"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[14] += nTmp;
			rptDetail->SetValue(_T("14"), tmpStr);
			//
			rs.GetValue(_T("drug_return"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[15] += nTmp;
			rptDetail->SetValue(_T("15"), tmpStr);
			//
			rs.GetValue(_T("material_return"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[16] += nTmp;
			rptDetail->SetValue(_T("16"), tmpStr);
			//
			rs.GetValue(_T("cnc_return"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[17] += nTmp;
			rptDetail->SetValue(_T("17"), tmpStr);

			rs.GetValue(_T("chi_goidv"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[18] += nTmp;
			rptDetail->SetValue(_T("18"), tmpStr);

			rs.GetValue(_T("tl_nguoncovid"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[19] += nTmp;
			rptDetail->SetValue(_T("19"), tmpStr);
			//
			rs.GetValue(_T("tran_bao_viet"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[20] += nTmp;
			rptDetail->SetValue(_T("20"), tmpStr);

			rs.GetValue(_T("total_return"), tmpStr);
			nTmp = str2double(tmpStr);
			nTotal[21] += nTmp;
			rptDetail->SetValue(_T("21"), tmpStr);
		}
		rs.MoveNext();
	}

	rptFooter = rpt.GetGroupFooter(1);
	if (rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if(rptDetail)
	{
		for (int i = 4; i <= 22; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}
/*
		tmpStr.Format(_T("%f"), nFa);
		rptFooter->SetValue(_T("s6.1"), tmpStr);
		szSQL = GetQueryString1();
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("iamount"), m_nHitechIAmount);
			if (m_nHitechIAmount > 0)
			{
				FormatCurrency(m_nHitechIAmount, tmpStr2);
				tmpStr.Format(_T("Ngo\x1EA1i tr\xFA: %s"), tmpStr2);
			}
			m_nHitechEAmount = nTotal[5] - m_nHitechIAmount;
			if (m_nHitechEAmount > 0)
			{
				FormatCurrency(m_nHitechEAmount, tmpStr2);
				tmpStr.AppendFormat(_T("N\x1ED9i tr\xFA: %s"), tmpStr2);
			}
			if (!tmpStr.IsEmpty())
				rptFooter->SetValue(_T("cnc"), tmpStr);
			nTmp = nTotal[1] - nTotal[5];
			FormatCurrency(nTmp, tmpStr2);
			rptFooter->SetValue(_T("vienphi"), tmpStr2);
		}
*/
	}
	
	tmpStr = pMF->GetSysDate();
	rptFooter = rpt.GetReportFooter();
	szDate.Format(rptFooter->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[21]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rptFooter->SetValue(_T("SuminWords"), tmpStr);
	OnPrintFooterUser(rptFooter);
	//OnPrint3ndver();
	//OnPrint4ndver();
	PrintFinancialDocument();
	rpt.PrintPreview();
	OnPrintSummaryPayment(nTotal[21]);
}
void CFMPostedPaymentVoucherList2::PrintFinancialDocument()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	double tmp = 0;
	szSQL.Format(_T(" SELECT invoice_date,") \
	//_T("        SUM(invoice_deposit - patient_return) AS trich_tamthu_tt_vienphi,") \//
	_T("        ROUND(SUM(cackhoanphaithu - fa - tran_bao_viet - nguoncovid)) AS trich_tamthu_tt_vienphi,") \
	_T("		ROUND(SUM(tl_vienphi-tl_nguoncovid)) AS tong_tralai_khonglam,") 
	_T("		ROUND(SUM(patient_return)) AS tong_trich_tam_thu,") \
	_T("		ROUND(SUM(tran_bao_viet))        AS phaithu_baoviet,") \
	_T("		ROUND(SUM(nguoncovid))           AS nguoncovid,") \
	_T("		ROUND(SUM(tl_nguoncovid))        AS tl_nguoncovid") \

	//_T("		ROUND(SUM(cackhoanphaithu - fa - tran_bao_viet)) AS phaithu_baoviet") \//
	_T(" FROM   (%s)") \
	_T(" GROUP  BY invoice_date ORDER BY to_date(invoice_date, 'DD-MM-YYYY')"), GetQueryString());

	rs.ExecSQL(szSQL);
	rs.GetValue(_T("phaithu_baoviet"), tmp);
	//_msg(_T("%s"), szSQL);
	tArrItem ari;
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("invoice_date"));
		s.nType = 1;
		rs.GetValue(_T("tong_trich_tam_thu"), s.nAmount);
		ari.Add(s);
		s.nType = 2;
		rs.GetValue(_T("tong_tralai_khonglam"), s.nAmount);
		ari.Add(s);
		s.nType = 3;
		rs.GetValue(_T("tl_nguoncovid"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}
	CFMDocumentPrinter* pPrinter = NULL;
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_DVYT_2"), &ari, m_bSOD, _T("S"), m_szFromDate, m_szToDate);
	
	rs.MoveFirst();
	ari.RemoveAll();
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("invoice_date"));
		s.nType = 1;
		rs.GetValue(_T("trich_tamthu_tt_vienphi"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_DVYT_1"), &ari, m_bSOD, _T("S"), m_szFromDate, m_szToDate);

	rs.MoveFirst();
	ari.RemoveAll();
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("invoice_date"));
		s.nType = 1;
		rs.GetValue(_T("phaithu_baoviet"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}
	if (tmp >0)
	{
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_DVYT_BAOVIET"), &ari, m_bSOD, _T("S"), m_szFromDate, m_szToDate);
	}

	rs.MoveFirst();
	ari.RemoveAll();
	while (!rs.IsEOF())
	{
		sItem s;
		s.szPostedDate = rs.GetValue(_T("invoice_date"));
		s.nType = 1;
		rs.GetValue(_T("nguoncovid"), s.nAmount);
		ari.Add(s);
		rs.MoveNext();
	}	
	pPrinter = new CFMDocumentPrinter(_T("CT_CHI_DVYT_3"), &ari, m_bSOD, _T("S"), m_szFromDate, m_szToDate);
	
}


void CFMPostedPaymentVoucherList2::OnPrintFooterUser(CReportSection* rptFooter){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND fpf_module_id = '%s'"), pMF->GetModuleID());
	szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), m_bSOD?_T("TYC"):_T("DV"));
	szSQL.Format(_T("SELECT fpf_position field_name, fpf_title title FROM fm_print_footer WHERE 1=1 %s"), szWhere);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		rptFooter->SetValue(rs.GetValue(_T("field_name")), rs.GetValue(_T("title")));
		rs.MoveNext();
	}
}

void CFMPostedPaymentVoucherList2::OnPrintSummaryPayment(double nTotalAmount){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection* rptDetail = NULL;
	CString tmpStr, tmpStr2, szDate;
	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUCHI30BB_TH.rpt")))
		return;
	rptDetail = rpt.AddDetail();
	rptDetail->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptDetail->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rptDetail->SetValue(_T("ReportDate"), tmpStr);
	tmpStr = pMF->GetDoctorName(pMF->GetCurrentUser());
	tmpStr += m_bSOD?_T(" - H\x1ED9 \x64\x1ECB\x63h v\x1EE5 kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u (t\x1ED5ng h\x1EE3p \x63hi)")
		:_T(" - H\x1ED9 \x64\x1ECB\x63h v\x1EE5 y t\x1EBF (t\x1ED5ng h\x1EE3p \x63hi)");
	rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
	rptDetail->SetValue(_T("Address"), _T("Ph\xF2ng t\xE0i \x63h\xEDnh"));
	rptDetail->SetValue(_T("Reason"), _T("\x43hi tr\x1EA3 \x62\x1EC7nh nh\xE2n ti\x1EC1n vi\x1EC7n ph\xED \x63\xF2n th\x1EEB\x61 + tr\x1EA3 l\x1EA1i ti\x1EC1n thu\x1ED1\x63 v\xE0 \x78\xE9t nghi\x1EC7m \x42N kh\xF4ng l\xE0m"));
	FormatCurrency(nTotalAmount, tmpStr);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%.3f"), nTotalAmount);
	MoneyToString(tmpStr, tmpStr2);
	tmpStr2 += _T(" \x111\x1ED3ng.");
	rptDetail->SetValue(_T("SumInWord"), tmpStr2);

	tmpStr = pMF->GetSysDate();	
	szDate.Format(rptDetail->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);


	OnPrintFooterUser(rptDetail);
	rpt.PrintPreview();
}

void CFMPostedPaymentVoucherList2::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[40], nGroupTotal[40];
	for(int i = 0; i < 40; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\BANGKECHI_DICHVU_2024.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString3_2024();
	//AfxMessageBox(szSQL);
	rs.ExecSQL(szSQL);	
	
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
		
		rs.GetValue(_T("HFE_INDEX"), szNewDept);
		m_mIndex.Lookup(szNewDept, tmpStr);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[34] > 0)
			{
				xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 3; i < 40; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("user_name"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("INVOICE_NO"), tmpStr);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);	
		
		rs.GetValue(_T("tong_vien_phi"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("INVOICE_DEPOSIT"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("FA"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);			

		rs.GetValue(_T("HFE_PHIKHAM"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("HFE_PHIGIUONG"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("HFE_PHICLS"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("HFE_PHIPTTT"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("DRUG_FEE"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("MAT_FEE"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("DRUG_FEE_B5"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("MAT_FEE_B5"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("PHI_MAU"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_TIENAN"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_GOIDV"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_PHI_CHONBS"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("HFE_PHI_KHAC"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_HFE_PHIKHAM"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_HFE_PHIGIUONG"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_HFE_PHICLS"), nTemp);
		nGroupTotal[21] += nTemp;
		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_HFE_PHIPTTT"), nTemp);
		nGroupTotal[22] += nTemp;
		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_DRUG_FEE"), nTemp);
		nGroupTotal[23] += nTemp;
		xls.SetCellText(nCol+23, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_MAT_FEE"), nTemp);
		nGroupTotal[24] += nTemp;
		xls.SetCellText(nCol+24, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_DRUG_FEE_B5"), nTemp);
		nGroupTotal[25] += nTemp;
		xls.SetCellText(nCol+25, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_MAT_FEE_B5"), nTemp);
		nGroupTotal[26] += nTemp;
		xls.SetCellText(nCol+26, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_PHI_MAU"), nTemp);
		nGroupTotal[27] += nTemp;
		xls.SetCellText(nCol+27, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_TIEN_AN"), nTemp);
		nGroupTotal[28] += nTemp;
		xls.SetCellText(nCol+28, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_THU_GOIDV"), nTemp);
		nGroupTotal[29] += nTemp;
		xls.SetCellText(nCol+29, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_HFE_PHI_CHONBS"), nTemp);
		nGroupTotal[30] += nTemp;
		xls.SetCellText(nCol+30, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TL_HFE_PHI_KHAC"), nTemp);
		nGroupTotal[31] += nTemp;
		xls.SetCellText(nCol+31, nRow, double2str(nTemp), FMT_NUMBER1);	


		rs.GetValue(_T("PATIENT_RETURN"), nTemp);
		nGroupTotal[32] += nTemp;
		xls.SetCellText(nCol+32, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("tran_bao_viet"), nTemp);
		nGroupTotal[33] += nTemp;
		xls.SetCellText(nCol+33, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("TOTAL_RETURN"), nTemp);
		nGroupTotal[34] += nTemp;
		xls.SetCellText(nCol+34, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[34] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 40; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[34] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 40; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BANGKECHI_DICHVU_2024_2.xls"));

}

CString CFMPostedPaymentVoucherList2::GetQueryString()
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
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}

	szSQL.Format(_T(" SELECT Get_username(fac_user_id) user_name,") \
	_T("   fac_invoiceno AS invoice_no,") \
	_T("   to_char(fac_posteddate, 'DD/MM/YYYY') as invoice_date, ") \
	_T("   SUM(trichtamgui)                                         AS invoice_deposit,") \
	_T("   SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc-hfe_packageamount-nguoncovid)  AS invoice_amount,") \
	_T("   SUM(miengiam)                                            AS fa,") \
	_T("   SUM(cackhoanphaithu)                                     AS cackhoanphaithu,") \
	_T("   SUM(tienthuoc)   AS invoice_drug,") \
	_T("   SUM(tienvattu) AS invoice_material,") \
	_T("   SUM(maycnc) AS cnc_amount,") \
	_T("   SUM(hfe_packageamount)									AS thu_goidv,") \
	_T("   SUM(chitravienphi+tl_trichtamthu)                        AS patient_return,") \
	_T("   SUM(tl_vienphi)											AS tl_vienphi,") \

	_T("   SUM(tl_vienphi-tl_thuoc-tl_vattu-tl_cnc-chi_goidv-tl_nguoncovid-tl_nguoncovid1)		AS fee_return,") \
	_T("   SUM(tl_thuoc)                                            AS drug_return,") \
	_T("   SUM(tl_vattu)                                            AS material_return,") \
	_T("   SUM(tl_cnc)                                              AS cnc_return,") \
	_T("   SUM(chi_goidv)                                           AS chi_goidv,") \
	_T("   SUM(tran_bao_viet)                                       AS tran_bao_viet,") \
	_T("   SUM(chitravienphi+tl_vienphi+tl_trichtamthu)             AS total_return,") \

	_T("   ROUND(SUM(nguoncovid)) AS nguoncovid,") \
	_T("   SUM(tl_nguoncovid+tl_nguoncovid1) AS tl_nguoncovid") \


	_T(" FROM fa_cash") \
	_T(" LEFT JOIN") \
	_T("   (SELECT r.hfe_cash_id AS cash_id,") \
	_T("     i.hfe_patientno,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deptid,") \
	_T("     i.hfe_refidx,") \
	_T("     i.hfe_invoiceno,") \
	_T("     i.hfe_deposit    AS trichtamgui,") \
	_T("     i.HFE_EXTINS_PAID AS tran_bao_viet,") \
	_T("     i.hfe_patpaid    AS cackhoanphaithu,") \
	_T("     i.hfe_freeamount AS miengiam,") \
	_T("     CASE") \
	//_T("       WHEN i.hfe_class <> 'I'") \//
	_T("       WHEN (i.hfe_class <> 'I' OR i.hfe_deptid='TTDTHM')") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN m_productitem_view") \
	_T("         ON(product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
	_T(" AND f.hfe_status in('P','R') ") \
	_T("         AND f.hfe_type       IN('D','M')") \
	_T("         AND f.hfe_category   <> 'Y'") \
	_T("         AND product_org_id        ='PM'") \
	_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno) ") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tienthuoc,") \
	_T("     CASE") \
	//_T("       WHEN i.hfe_class <> 'I'") \//
	_T("       WHEN (i.hfe_class <> 'I' OR i.hfe_deptid='TTDTHM')") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN m_productitem_view") \
	_T("         ON(product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
	_T(" AND f.hfe_status in('P','R') ") \
	_T("         AND f.hfe_type       IN('D','M')") \
	_T("         AND f.hfe_category   <> 'Y'") \
	_T("         AND product_org_id        in ('MA', 'PĐD')") \
	_T("         AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno) ") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tienvattu,") \
	_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_fee_list") \
	_T("     ON(hfl_feeid                   = hfe_itemid)") \
	_T("     WHERE f.hfe_docno              = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
	_T(" AND f.hfe_status in('P','R') ") \
	_T("     AND f.hfe_type                IN('P','T','O')") \
	_T("     AND f.hfe_category            <> 'Y'") \
	_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
	_T("     AND f.Hfe_itemid NOT IN (select Hfe_itemid from Hms_Fee_Discountline where hfe_docno=i.hfe_docno and  Hfe_Refidx=i.hfe_invoiceno)") \
	_T("     )            AS maycnc,") \

	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee f  ") \
	_T("     WHERE f.hfe_docno              = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
	_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
	_T("     AND f.hfe_status              IN('P','R')") \
	_T("     AND f.hfe_type                IN('X')") \
	_T("     AND f.hfe_category            <> 'Y'    ") \
	_T("     AND f.Hfe_itemid NOT          IN") \
	_T("       (SELECT Hfe_itemid") \
	_T("       FROM Hms_Fee_Discountline") \
	_T("       WHERE hfe_docno                =i.hfe_docno") \
	_T("       AND Hfe_Refidx                 =i.hfe_invoiceno") \
	_T("        AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
	_T("       ) ) AS hfe_packageamount,") \

	_T("     i.hfe_refund AS chitravienphi,") \
	_T("     0            AS tl_vienphi,") \
	_T("     0            AS tl_thuoc,") \
	_T("     0            AS tl_vattu,") \
	_T("     0            AS tl_cnc, 0 AS chi_goidv, 0 as tl_trichtamthu, ") \
	
	//_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \//
	_T("  (SELECT CASE WHEN COALESCE(SUM(hfe_otherpaid), 0) > 0") \
	_T("     THEN COALESCE(SUM(hfe_otherpaid), 0)") \
	_T("     ELSE COALESCE(SUM(hfe_patpaid), 0) END  ") \
	_T("     FROM hms_fee f") \
	_T("     WHERE f.hfe_docno   = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno = i.hfe_invoiceno   ") \
	_T("     AND f.hfe_category   = 'COV'   ") \
	_T("     ) AS nguoncovid,") \
	_T("  0  AS tl_nguoncovid,") \
	_T("  0  AS tl_nguoncovid1") \

	_T("   FROM hms_fee_refund r") \
	_T("   LEFT JOIN hms_fee_invoice i") \
	_T("   ON(r.hfe_docno      = i.hfe_docno") \
	_T("   AND r.hfe_refidx    =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status IN('P','R')") \
	_T("   AND i.hfe_payment  <=0") \
	_T("   AND i.hfe_refund    > 0") \
	_T("   AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno AND hfe_docno = r.hfe_docno) = 0") \
	_T("   UNION ALL") \
	//Update ngay 18/06/2017 cho truong hop o khoa tyc co tam gui duyet phi nhung chua thanh toan bi sai cot "trich tam gui"//
	/*_T("   SELECT r.hfe_cash_id AS cash_id,") \
	_T("     i.hfe_patientno,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deptid,") \
	_T("     i.hfe_refidx,") \
	_T("     i.hfe_invoiceno,") \
	_T("     i.hfe_deposit    AS trichtamgui,") \
	_T("     i.hfe_patpaid    AS cackhoanphaithu,") \
	_T("     i.hfe_freeamount AS miengiam,") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class <> 'I'") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN m_productitem_view") \
	_T("         ON(product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
	_T(" AND f.hfe_status in('P','R') ") \
	_T("         AND f.hfe_type       IN('D','M')") \
	_T("         AND f.hfe_category   <> 'Y'") \
	_T("         AND product_org_id        ='PM'") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tienthuoc,") \
	_T("     CASE") \
	_T("       WHEN i.hfe_class <> 'I'") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee f") \
	_T("         LEFT JOIN m_productitem_view") \
	_T("         ON(product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno     = i.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
	_T(" AND f.hfe_status in('P','R') ") \
	_T("         AND f.hfe_type       IN('D','M')") \
	_T("         AND f.hfe_category   <> 'Y'") \
	_T("         AND product_org_id        ='MA'") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tienvattu,") \
	_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_fee_list") \
	_T("     ON(hfl_feeid                   = hfe_itemid)") \
	_T("     WHERE f.hfe_docno              = i.hfe_docno") \
	_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
	_T(" AND f.hfe_status in('P','R') ") \
	_T("     AND f.hfe_type                IN('P','T','O')") \
	_T("     AND f.hfe_category            <> 'Y'") \
	_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
	_T("     )            AS maycnc,") \
	_T("     i.hfe_refund AS chitravienphi,") \
	_T("     0            AS tl_vienphi,") \
	_T("     0            AS tl_thuoc,") \
	_T("     0            AS tl_vattu,") \
	_T("     0            AS tl_cnc, 0 as tl_trichtamthu ") \
	_T("   FROM hms_fee_refund r") \
	_T("   LEFT JOIN hms_fee_invoice i") \
	_T("   ON(r.hfe_docno      = i.hfe_docno)") \
	_T("   WHERE i.hfe_status IN('P','R')") \
	_T("   AND i.hfe_payment  <=0") \
	_T("   AND i.hfe_refund    = 0") \
	_T("   AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno AND hfe_docno = r.hfe_docno) = 0") \
	_T("   UNION ALL") \
	//----------------------------------------------------------------------------------------------------------------------//*/
	_T(" SELECT hfe_cash_id,") \
	_T("   hfe_patientno,") \
	_T("   hfe_docno,") \
	_T("   hfe_deptid,") \
	_T("   hfe_refidx,") \
	_T("   hfe_invoiceno,") \
	_T("   hfe_amount AS trichtamgui,") \
	_T("   0 AS tran_bao_viet,") \
	_T("   0 AS cackhoanphaithu,") \
	_T("   0 AS miengiam,") \
	_T("   0 AS tienthuoc,") \
	_T("   0 AS tienvattu,") \
	_T("   0 AS maycnc,") \
	_T("   0            AS hfe_packageamount,") \
	_T("   hfe_amount AS chtravp,") \
	_T("   0 AS tl_vienphi,") \
	_T("   0 AS tl_tienthuoc,") \
	_T("   0 AS tl_tienvattu,") \
	_T("   0 AS tl_maycnc,0  AS chi_goidv,") \
	_T("   0 AS tl_trichtamthu,") \

	_T(" 0          AS nguoncovid,") \
	_T("  0          AS tl_nguoncovid,") \
	_T("  0  AS tl_nguoncovid1") \

	_T("   FROM hms_fee_refund r") \
	//_T("   WHERE r.hfe_status = 'P' AND r.hfe_type = 'G' AND r.hfe_isreq = 'Y'") \//
	_T("   WHERE r.hfe_status = 'P' AND r.hfe_type = 'G'") \
	_T(" UNION ALL") \
	_T("   SELECT r.hfe_cash_id,") \
	_T("     r.hfe_patientno,") \
	_T("     r.hfe_docno,") \
	_T("     r.hfe_deptid,") \
	_T("     r.hfe_refidx,") \
	_T("     r.hfe_invoiceno,") \
	_T("     case when l.hfe_itemid is null then l.hfe_patpaid else 0 end             AS trichtamgui,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     0             AS cackhoanphaithu,") \
	_T("     0             AS miengiam,") \
	_T("     0             AS tienthuoc,") \
	_T("     0             AS tienvattu,") \
	_T("     0             AS maycnc,") \
	_T("     0             AS hfe_packageamount,") \
	_T("     0             AS chtravp,") \
	_T("     case when l.hfe_itemid is null then 0 else l.hfe_patpaid end AS tl_vienphi,") \
	_T("     CASE") \
	_T("       WHEN r.hfe_class <> 'I'") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee_refundline f") \
	_T("         LEFT JOIN m_product_item") \
	_T("         ON(mpi_product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno     = r.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = r.hfe_invoiceno") \
	_T("         AND f.hfe_type       IN('F')") \
	_T("		 AND SUBSTR(f.hfe_group, 1, 1) = 'A' ")\
	_T(" and f.hfe_itemid = l.hfe_itemid ") \
	_T("         AND f.hfe_fee_refundline_id   = l.hfe_fee_refundline_id") \
	_T("         AND mpi_org_id        ='PM'") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tl_tienthuoc,") \
	_T("     CASE") \
	_T("       WHEN r.hfe_class <> 'I'") \
	_T("       THEN") \
	_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("         FROM hms_fee_refundline f") \
	_T("         LEFT JOIN m_product_item") \
	_T("         ON(mpi_product_item_id=CAST(hfe_itemid AS INTEGER) )") \
	_T("         WHERE f.hfe_docno     = r.hfe_docno") \
	_T("         AND f.hfe_invoiceno   = r.hfe_invoiceno") \
	_T("         AND f.hfe_type       IN('F')") \
	_T("		 AND SUBSTR(f.hfe_group, 1, 1) = 'A' ") \
	_T(" and f.hfe_itemid = l.hfe_itemid ") \
	_T("         AND mpi_org_id        ='MA'") \
	_T("         )") \
	_T("       ELSE 0") \
	_T("     END AS tl_tienvattu,") \
	_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("     FROM hms_fee_refundline f") \
	_T("     LEFT JOIN hms_fee_list") \
	_T("     ON(hfl_feeid                   = hfe_itemid)") \
	_T("     WHERE f.hfe_docno              = r.hfe_docno") \
	_T("	 AND f.hfe_fee_refundline_id = l.hfe_fee_refundline_id") \
	_T("     AND f.hfe_invoiceno            = r.hfe_invoiceno") \
	_T("     AND f.hfe_type                IN('F')") \
	_T(" and f.hfe_itemid = l.hfe_itemid ") \
	_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
	_T("     ) AS tl_maycnc, ") \
	
	_T("  (SELECT COALESCE(SUM(hfe_cost), 0) ") \
	_T("     FROM hms_fee_refundline f  ") \
	_T("     WHERE f.hfe_invoiceno = r.hfe_invoiceno ") \
	_T("     AND f.hfe_docno = r.hfe_docno  AND f.hfe_fee_refundline_id    = l.hfe_fee_refundline_id") \
	_T("     AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')) chi_goidv,") \

	_T("     case when l.hfe_itemid is null then l.hfe_patpaid else 0 end  as tl_trichtamthu, ") \
	
	_T(" 0          AS nguoncovid, ") \
	_T(" 0          AS tl_nguoncovid,") \
	_T("  0  AS tl_nguoncovid1") \

	_T("   FROM hms_fee_refund r,") \
	_T("     hms_fee_refundline l") \
	_T("   WHERE r.hfe_docno           = l.hfe_docno") \
	_T("   AND r.hfe_invoiceno         = l.hfe_invoiceno") \
	_T("   AND l.hfe_invoiceno         > 0") \
	_T("   AND r.hfe_status            ='P'") \

	_T(" UNION ALL ") \
	_T(" SELECT r.hfe_cash_id,") \
	_T("     r.hfe_patientno,") \
	_T("     r.hfe_docno,") \
	_T("     r.hfe_deptid,") \
	_T("     r.hfe_refidx,") \
	_T("     r.hfe_invoiceno,") \
	_T("     0  trichtamgui,") \
	_T("     0 AS tran_bao_viet,") \
	_T("     0   AS cackhoanphaithu,") \
	_T("     0   AS miengiam,") \
	_T("     0   AS tienthuoc,") \
	_T("     0   AS tienvattu,") \
	_T("     0   AS maycnc,") \
	_T("     0   AS hfe_packageamount,") \
	_T("     0   AS chtravp,") \
	_T("     0  AS tl_vienphi,") \
	_T("     0  AS tl_tienthuoc,") \
	_T("     0  AS tl_tienvattu,") \
	_T("     0 AS tl_maycnc,") \
	_T("     (SELECT COALESCE(SUM(hfe_cost), 0) ") \
	_T("     FROM hms_fee_refundline l  ") \
	_T("     WHERE l.hfe_invoiceno = r.hfe_invoiceno ") \
	_T("     AND l.hfe_docno = r.hfe_docno ") \
	_T("     AND l.hfe_itemid IN ('18', '19', '20')) chi_goidv,") \
	_T("     0 AS tl_trichtamthu,") \
	_T("     0          AS nguoncovid, ") \

	_T("  (SELECT COALESCE(SUM(hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline l") \
	_T("     WHERE l.hfe_invoiceno = r.hfe_invoiceno") \
	_T("     AND l.hfe_docno       = r.hfe_docno") \
	_T("     AND l.hfe_itemid     IN ('22')") \
	_T("     )tl_nguoncovid, ") \

	_T("  (SELECT COALESCE(SUM(hfe_cost), 0)") \
	_T("     FROM hms_fee_refundline l") \
	_T("     WHERE l.hfe_invoiceno = r.hfe_invoiceno") \
	_T("     AND l.hfe_docno       = r.hfe_docno") \
	_T("     AND NVL(l.HFE_XNCOVID, 'X')='Y'") \
	_T("     )tl_nguoncovid1") \

	_T("   FROM hms_fee_refund r,") \
	_T("     hms_fee_refundline l") \
	_T("   WHERE r.hfe_docno   = l.hfe_docno") \
	_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
	_T("   AND l.hfe_invoiceno > 0") \
	_T("   AND r.hfe_status    ='P'") \

	_T(" UNION ALL ") \
	_T(" SELECT hfe_cash_id,") \
	_T("   hfe_patientno,") \
	_T("   hfe_docno,") \
	_T("   hfe_deptid,") \
	_T("   hfe_refidx,") \
	_T("   hfe_invoiceno,") \
	_T("   0 AS trichtamgui,") \
	_T("   0 AS tran_bao_viet,") \
	_T("   0 AS cackhoanphaithu,") \
	_T("   0 AS miengiam,") \
	_T("   0 AS tienthuoc,") \
	_T("   0 AS tienvattu,") \
	_T("   0 AS maycnc,") \
	_T("   0            AS hfe_packageamount,") \
	_T("   0 AS chtravp,") \
	_T("   hfe_amount AS tl_vienphi,") \
	_T("   0 AS tl_tienthuoc,") \
	_T("   0 AS tl_tienvattu,") \
	_T("   0 AS tl_maycnc,0  AS chi_goidv,") \
	_T("   0 AS tl_trichtamthu,") \
	
	_T(" 0          AS nguoncovid,") \
	_T(" 0          AS tl_nguoncovid,") \
	_T(" 0          AS tl_nguoncovid1") \

	_T(" FROM hms_fee_refund") \
	_T(" WHERE hfe_type in('G','S') AND (hfe_refidx <> 0 AND hfe_isreq <> 'Y') ") \
	_T(" AND hfe_status='P'") \
	_T(" UNION ALL ") \
	_T(" SELECT hfe_cash_id,") \
	_T("   hfe_patientno,") \
	_T("   hfe_docno,") \
	_T("   hfe_deptid,") \
	_T("   hfe_refidx,") \
	_T("   hfe_invoiceno,") \
	_T("   0 AS trichtamgui,") \
	_T("   0 AS tran_bao_viet,") \
	_T("   0 AS cackhoanphaithu,") \
	_T("   0 AS miengiam,") \
	_T("   0 AS tienthuoc,") \
	_T("   0 AS tienvattu,") \
	_T("   0 AS maycnc,") \
	_T("   0          AS hfe_packageamount,") \
	_T("   0 AS chtravp,") \
	_T("   hfe_amount AS tl_vienphi,") \
	_T("   0 AS tl_tienthuoc,") \
	_T("   0 AS tl_tienvattu,") \
	_T("   0 AS tl_maycnc,0  AS chi_goidv,") \
	_T("   0 AS tl_trichtamthu, ") \
	
	_T(" 0          AS nguoncovid,") \
	_T(" 0          AS tl_nguoncovid,") \
	_T(" 0          AS tl_nguoncovid1") \

	_T(" FROM hms_fee_refund") \
	_T(" WHERE hfe_type in('V') AND hfe_status='P'") \
	_T("   ) tblInvoice ON(fac_cash_id = cash_id)") \
	_T(" WHERE 1=1 %s ") \
	_T(" GROUP BY fac_posteddate, ") \
	_T("   fac_user_id,") \
	_T("   fac_invoiceno") \
	_T(" ORDER BY fac_user_id,") \
	_T("   fac_invoiceno"), szWhere);
//_msg(_T("%s"), szSQL);

	return szSQL;
}

CString CFMPostedPaymentVoucherList2::GetQueryString2(){
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
void CFMPostedPaymentVoucherList2::OnPrint3ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	CRecord rs(&pMF->m_db);	
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szthuquyATM, szthuquychung;
	CString sznoidung1 = _T("Trích tạm thu thanh toán viện phí bệnh nhân DVYT");
	CString sznoidung2 = _T("Thu viện phí bệnh nhân DVYT");
	CString sznoidung3 = _T("Thu bệnh nhân DVYT tạm gửi viện phí");
	double nTotal[15];
	double nFa = 0;
	
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOCHI_TONGHOP_DV.RPT");	

	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 15; i++)
		nTotal[i] = 0;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), _T(" "));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("invoice_date")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("noi_dung")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("taikhoan_co")));					
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("trich_tamthu")));
			rs.GetValue(_T("trich_tamthu"), nTmp);
			nTotal[7] += nTmp;
			
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if (rptDetail)
	{
		for (int i = 7; i <= 14; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%.3f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}

	}

	tmpStr = pMF->GetSysDate();
	rptFooter = rpt.GetReportFooter();
	szDate.Format(rptFooter->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[7]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rptFooter->SetValue(_T("SuminWords"), tmpStr);	
	
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
}
CString CFMPostedPaymentVoucherList2::GetQueryString3()
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
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	
		/*szSQL.Format(_T(" SELECT") \
		_T(" '' as sohieu,") \
		_T(" invoice_date,") \
		_T(" (select ss_desc from sys_sel where ss_id='NOIDUNG_THU' and ss_code='TAMTHU') as noi_dung,") \
		_T(" '1312' as taikhoan_no,") \
		_T(" '531' as taikhoan_co,") \
		_T(" SUM(invoice_deposit) as trich_tamthu") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T("   TO_CHAR(fac_posteddate, 'DD/MM/YYYY')                                      AS invoice_date,") \
		_T("   SUM(trichtamgui)                                                           AS invoice_deposit  ") \
		_T(" FROM fa_cash") \
		_T(" LEFT JOIN") \
		_T("   (SELECT ") \
		_T("     r.hfe_cash_id AS cash_id,") \
		_T("     i.hfe_deposit     AS trichtamgui    ") \
		_T("   FROM hms_fee_refund r") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON(r.hfe_docno      = i.hfe_docno") \
		_T("   AND r.hfe_refidx    =i.hfe_invoiceno)") \
		_T("   WHERE i.hfe_status IN('P','R')") \
		_T("   AND i.hfe_payment  <=0") \
		_T("   AND i.hfe_refund    > 0") \
		_T("   AND (SELECT COUNT(*)") \
		_T("     FROM hms_fee_refundline") \
		_T("     WHERE hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND hfe_docno       = r.hfe_docno) = 0") \
		_T("   UNION ALL") \
		_T("   SELECT ") \
		_T("     hfe_cash_id,") \
		_T("     hfe_amount AS trichtamgui    ") \
		_T("   FROM hms_fee_refund r") \
		_T("   WHERE r.hfe_status = 'P'") \
		_T("   AND r.hfe_type     = 'G'") \
		_T("   UNION ALL") \
		_T("   SELECT ") \
		_T("     r.hfe_cash_id,") \
		_T("     CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \
		_T("       THEN l.hfe_patpaid") \
		_T("       ELSE 0") \
		_T("     END AS trichtamgui   ") \
		_T("   FROM hms_fee_refund r,") \
		_T("     hms_fee_refundline l") \
		_T("   WHERE r.hfe_docno   = l.hfe_docno") \
		_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
		_T("   AND l.hfe_invoiceno > 0") \
		_T("   AND r.hfe_status    ='P'  ") \
		_T("   ) tblInvoice ON(fac_cash_id = cash_id)") \
		_T(" WHERE 1                       =1 %s") \
		_T(" GROUP BY fac_posteddate ") \
		_T(" ORDER BY fac_user_id,") \
		_T("   fac_invoiceno") \
		_T(" )") \
		_T(" GROUP BY invoice_date") \
		_T(" HAVING SUM(invoice_deposit)>0") \
		_T(" ORDER BY invoice_date"), szWhere);*/
	szSQL.Format(_T(" SELECT") \
		_T(" invoice_date,") \
		_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TAMTHU') AS noi_dung,") \
		_T(" '1312' as taikhoan_no,") \
		_T(" '531' as taikhoan_co,") \
		_T(" SUM(invoice_deposit - patient_return) as trich_tamthu") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT Get_username(fac_user_id) user_name,") \
		_T("   fac_invoiceno                                                              AS invoice_no,") \
		_T("   TO_CHAR(fac_posteddate, 'DD/MM/YYYY')                                      AS invoice_date,") \
		_T("   SUM(trichtamgui)                                                           AS invoice_deposit,") \
		_T("   SUM(cackhoanphaithu-miengiam-tienthuoc-tienvattu-maycnc-hfe_packageamount) AS invoice_amount,") \
		_T("   SUM(miengiam)                                                              AS fa,") \
		_T("   SUM(tienthuoc)                                                             AS invoice_drug,") \
		_T("   SUM(tienvattu)                                                             AS invoice_material,") \
		_T("   SUM(maycnc)                                                                AS cnc_amount,") \
		_T("   SUM(hfe_packageamount)                                                     AS thu_goidv,") \
		_T("   SUM(chitravienphi+tl_trichtamthu)                                          AS patient_return,") \
		_T("   SUM(tl_vienphi   -tl_thuoc-tl_vattu-tl_cnc-chi_goidv)                      AS fee_return,") \
		_T("   SUM(tl_thuoc)                                                              AS drug_return,") \
		_T("   SUM(tl_vattu)                                                              AS material_return,") \
		_T("   SUM(tl_cnc)                                                                AS cnc_return,") \
		_T("   SUM(chi_goidv)                                                             AS chi_goidv,") \
		_T("   SUM(tran_bao_viet)                                                         AS tran_bao_viet,") \
		_T("   SUM(chitravienphi+tl_vienphi+tl_trichtamthu)                               AS total_return") \
		_T(" FROM fa_cash") \
		_T(" LEFT JOIN") \
		_T("   (SELECT r.hfe_cash_id AS cash_id,") \
		_T("     i.hfe_patientno,") \
		_T("     i.hfe_docno,") \
		_T("     i.hfe_deptid,") \
		_T("     i.hfe_refidx,") \
		_T("     i.hfe_invoiceno,") \
		_T("     i.hfe_deposit     AS trichtamgui,") \
		_T("     i.HFE_EXTINS_PAID AS tran_bao_viet,") \
		_T("     i.hfe_patpaid     AS cackhoanphaithu,") \
		_T("     i.hfe_freeamount  AS miengiam,") \
		_T("     CASE") \
		_T("       WHEN i.hfe_class <> 'I'") \
		_T("       THEN") \
		_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("         FROM hms_fee f") \
		_T("         LEFT JOIN m_productitem_view") \
		_T("         ON(product_item_id    =CAST(hfe_itemid AS INTEGER) )") \
		_T("         WHERE f.hfe_docno     = i.hfe_docno") \
		_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
		_T("         AND f.hfe_status     IN('P','R')") \
		_T("         AND f.hfe_type       IN('D','M')") \
		_T("         AND f.hfe_category   <> 'Y'") \
		_T("         AND product_org_id    ='PM'") \
		_T("         AND f.Hfe_itemid NOT IN") \
		_T("           (SELECT Hfe_itemid") \
		_T("           FROM Hms_Fee_Discountline") \
		_T("           WHERE hfe_docno=i.hfe_docno") \
		_T("           AND Hfe_Refidx =i.hfe_invoiceno") \
		_T("           )") \
		_T("         )") \
		_T("       ELSE 0") \
		_T("     END AS tienthuoc,") \
		_T("     CASE") \
		_T("       WHEN i.hfe_class <> 'I'") \
		_T("       THEN") \
		_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("         FROM hms_fee f") \
		_T("         LEFT JOIN m_productitem_view") \
		_T("         ON(product_item_id    =CAST(hfe_itemid AS INTEGER) )") \
		_T("         WHERE f.hfe_docno     = i.hfe_docno") \
		_T("         AND f.hfe_invoiceno   = i.hfe_invoiceno") \
		_T("         AND f.hfe_status     IN('P','R')") \
		_T("         AND f.hfe_type       IN('D','M')") \
		_T("         AND f.hfe_category   <> 'Y'") \
		_T("         AND product_org_id    ='MA'") \
		_T("         AND f.Hfe_itemid NOT IN") \
		_T("           (SELECT Hfe_itemid") \
		_T("           FROM Hms_Fee_Discountline") \
		_T("           WHERE hfe_docno=i.hfe_docno") \
		_T("           AND Hfe_Refidx =i.hfe_invoiceno") \
		_T("           )") \
		_T("         )") \

		_T("      ELSE 0") \
		_T("     END AS tienvattu,") \
		_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("     FROM hms_fee f") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid                   = hfe_itemid)") \
		_T("     WHERE f.hfe_docno              = i.hfe_docno") \
		_T("     AND f.hfe_invoiceno            = i.hfe_invoiceno") \
		_T("     AND f.hfe_status              IN('P','R')") \
		_T("     AND f.hfe_type                IN('P','T','O')") \
		_T("     AND f.hfe_category            <> 'Y'") \
		_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
		_T("     AND f.Hfe_itemid NOT          IN") \
		_T("       (SELECT Hfe_itemid") \
		_T("       FROM Hms_Fee_Discountline") \
		_T("       WHERE hfe_docno=i.hfe_docno") \
		_T("       AND Hfe_Refidx =i.hfe_invoiceno") \
		_T("       )") \
		_T("     ) AS maycnc,") \
		_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("     FROM hms_fee f") \
		_T("     WHERE f.hfe_docno   = i.hfe_docno") \
		_T("     AND f.hfe_invoiceno = i.hfe_invoiceno") \
		_T("     AND f.hfe_itemid   IN") \
		_T("       (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE'") \
		_T("       )") \
		_T("     AND f.hfe_status     IN('P','R')") \
		_T("     AND f.hfe_type       IN('X')") \
		_T("     AND f.hfe_category   <> 'Y'") \
		_T("     AND f.Hfe_itemid NOT IN") \
		_T("       (SELECT Hfe_itemid") \
		_T("       FROM Hms_Fee_Discountline") \
		_T("       WHERE hfe_docno   =i.hfe_docno") \
		_T("       AND Hfe_Refidx    =i.hfe_invoiceno") \
		_T("       AND f.hfe_itemid IN") \
		_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE'") \
		_T("         )") \
		_T("       )") \
		_T("     )            AS hfe_packageamount,") \
		_T("     i.hfe_refund AS chitravienphi,") \
		_T("     0            AS tl_vienphi,") \
		_T("     0            AS tl_thuoc,") \
		_T("     0            AS tl_vattu,") \
		_T("     0            AS tl_cnc,") \
		_T("     0            AS chi_goidv,") \
		_T("     0            AS tl_trichtamthu") \
		_T("   FROM hms_fee_refund r") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON(r.hfe_docno      = i.hfe_docno") \
		_T("   AND r.hfe_refidx    =i.hfe_invoiceno)") \
		_T("   WHERE i.hfe_status IN('P','R')") \
		_T("   AND i.hfe_payment  <=0") \
		_T("   AND i.hfe_refund    > 0") \
		_T("   AND (SELECT COUNT(*)") \
		_T("     FROM hms_fee_refundline") \
		_T("     WHERE hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND hfe_docno       = r.hfe_docno) = 0") \
		_T("   UNION ALL") \
		_T("   SELECT hfe_cash_id,") \
		_T("     hfe_patientno,") \
		_T("     hfe_docno,") \
		_T("     hfe_deptid,") \
		_T("     hfe_refidx,") \
		_T("     hfe_invoiceno,") \
		_T("     hfe_amount AS trichtamgui,") \
		_T("     0          AS tran_bao_viet,") \
		_T("     0          AS cackhoanphaithu,") \
		_T("     0          AS miengiam,") \
		_T("     0          AS tienthuoc,") \
		_T("     0          AS tienvattu,") \
		_T("     0          AS maycnc,") \
		_T("     0          AS hfe_packageamount,") \
		_T("     hfe_amount AS chtravp,") \
		_T("     0          AS tl_vienphi,") \
		_T("     0          AS tl_tienthuoc,") \
		_T("     0          AS tl_tienvattu,") \
		_T("     0          AS tl_maycnc,") \
		_T("     0          AS chi_goidv,") \
		_T("     0          AS tl_trichtamthu") \
		_T("   FROM hms_fee_refund r") \
		_T("   WHERE r.hfe_status = 'P'") \
		_T("   AND r.hfe_type     = 'G'") \
		_T("   UNION ALL") \
		_T("   SELECT r.hfe_cash_id,") \
		_T("     r.hfe_patientno,") \
		_T("     r.hfe_docno,") \
		_T("     r.hfe_deptid,") \
		_T("     r.hfe_refidx,") \
		_T("     r.hfe_invoiceno,") \
		_T("     CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \
		_T("       THEN l.hfe_patpaid") \
		_T("       ELSE 0") \
		_T("     END AS trichtamgui,") \
		_T("     0   AS tran_bao_viet,") \
		_T("     0   AS cackhoanphaithu,") \
		_T("     0   AS miengiam,") \
		_T("     0   AS tienthuoc,") \
		_T("     0   AS tienvattu,") \
		_T("     0   AS maycnc,") \
		_T("     0   AS hfe_packageamount,") \
		_T("     0   AS chtravp,") \
		_T("     CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \
		_T("       THEN 0") \
		_T("       ELSE l.hfe_patpaid") \
		_T("     END AS tl_vienphi,") \
		_T("     CASE") \
		_T("       WHEN r.hfe_class <> 'I'") \
		_T("       THEN") \
		_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("         FROM hms_fee_refundline f") \
		_T("         LEFT JOIN m_product_item") \
		_T("         ON(mpi_product_item_id        =CAST(hfe_itemid AS INTEGER) )") \
		_T("         WHERE f.hfe_docno             = r.hfe_docno") \
		_T("         AND f.hfe_invoiceno           = r.hfe_invoiceno") \
		_T("         AND f.hfe_type               IN('F')") \
		_T("         AND SUBSTR(f.hfe_group, 1, 1) = 'A'") \
		_T("         AND f.hfe_itemid              = l.hfe_itemid") \
		_T("         AND mpi_org_id                ='PM'") \
		_T("         )") \
		_T("       ELSE 0") \
		_T("     END AS tl_tienthuoc,") \
		_T("     CASE") \
		_T("       WHEN r.hfe_class <> 'I'") \
		_T("       THEN") \
		_T("         (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("         FROM hms_fee_refundline f") \
		_T("         LEFT JOIN m_product_item") \
		_T("         ON(mpi_product_item_id        =CAST(hfe_itemid AS INTEGER) )") \
		_T("         WHERE f.hfe_docno             = r.hfe_docno") \
		_T("         AND f.hfe_invoiceno           = r.hfe_invoiceno") \
		_T("         AND f.hfe_type               IN('F')") \
		_T("         AND SUBSTR(f.hfe_group, 1, 1) = 'A'") \
		_T("         AND f.hfe_itemid              = l.hfe_itemid") \
		_T("         AND mpi_org_id                ='MA'") \
		_T("         )") \
		_T("       ELSE 0") \
		_T("     END AS tl_tienvattu,") \
		_T("     (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
		_T("     FROM hms_fee_refundline f") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid                   = hfe_itemid)") \
		_T("     WHERE f.hfe_docno              = r.hfe_docno") \
		_T("     AND f.hfe_fee_refundline_id    = l.hfe_fee_refundline_id") \
		_T("     AND f.hfe_invoiceno            = r.hfe_invoiceno") \
		_T("     AND f.hfe_type                IN('F')") \
		_T("     AND f.hfe_itemid               = l.hfe_itemid") \
		_T("     AND NVL(hfl_hitechmachine,'N') ='Y'") \
		_T("     ) AS tl_maycnc,") \
		_T("     (SELECT COALESCE(SUM(hfe_cost), 0)") \
		_T("     FROM hms_fee_refundline l") \
		_T("     WHERE l.hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND l.hfe_docno       = r.hfe_docno") \
		_T("     AND l.hfe_itemid     IN") \
		_T("       (SELECT ss_code FROM sys_sel WHERE ss_id='HMS_SERVICE_PACKAGE'") \
		_T("       )") \
		_T("     ) chi_goidv,") \
		_T("     CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \

		_T("       THEN l.hfe_patpaid") \
		_T("       ELSE 0") \
		_T("     END AS tl_trichtamthu") \
		_T("   FROM hms_fee_refund r,") \
		_T("     hms_fee_refundline l") \
		_T("   WHERE r.hfe_docno   = l.hfe_docno") \
		_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
		_T("   AND l.hfe_invoiceno > 0") \
		_T("   AND r.hfe_status    ='P'") \
		_T("   UNION ALL") \
		_T("   SELECT r.hfe_cash_id,") \
		_T("     r.hfe_patientno,") \
		_T("     r.hfe_docno,") \
		_T("     r.hfe_deptid,") \
		_T("     r.hfe_refidx,") \
		_T("     r.hfe_invoiceno,") \
		_T("     0 trichtamgui,") \
		_T("     0 AS tran_bao_viet,") \
		_T("     0 AS cackhoanphaithu,") \
		_T("     0 AS miengiam,") \
		_T("     0 AS tienthuoc,") \
		_T("     0 AS tienvattu,") \
		_T("     0 AS maycnc,") \
		_T("     0 AS hfe_packageamount,") \
		_T("     0 AS chtravp,") \
		_T("     0 AS tl_vienphi,") \
		_T("     0 AS tl_tienthuoc,") \
		_T("     0 AS tl_tienvattu,") \
		_T("     0 AS tl_maycnc,") \
		_T("     (SELECT COALESCE(SUM(hfe_cost), 0)") \
		_T("     FROM hms_fee_refundline l") \
		_T("     WHERE l.hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND l.hfe_docno       = r.hfe_docno") \
		_T("     AND l.hfe_itemid     IN ('18', '19', '20')") \
		_T("     ) chi_goidv,") \
		_T("     0 AS tl_trichtamthu") \
		_T("   FROM hms_fee_refund r,") \
		_T("     hms_fee_refundline l") \
		_T("   WHERE r.hfe_docno   = l.hfe_docno") \
		_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
		_T("   AND l.hfe_invoiceno > 0") \
		_T("   AND r.hfe_status    ='P'") \
		_T("   UNION ALL") \
		_T("   SELECT hfe_cash_id,") \
		_T("     hfe_patientno,") \
		_T("     hfe_docno,") \
		_T("     hfe_deptid,") \
		_T("     hfe_refidx,") \
		_T("     hfe_invoiceno,") \
		_T("     0          AS trichtamgui,") \
		_T("     0          AS tran_bao_viet,") \
		_T("     0          AS cackhoanphaithu,") \
		_T("     0          AS miengiam,") \
		_T("     0          AS tienthuoc,") \
		_T("     0          AS tienvattu,") \
		_T("     0          AS maycnc,") \
		_T("     0          AS hfe_packageamount,") \
		_T("     0          AS chtravp,") \
		_T("     hfe_amount AS tl_vienphi,") \
		_T("     0          AS tl_tienthuoc,") \
		_T("     0          AS tl_tienvattu,") \
		_T("     0          AS tl_maycnc,") \
		_T("     0          AS chi_goidv,") \
		_T("     0          AS tl_trichtamthu") \
		_T("   FROM hms_fee_refund") \
		_T("   WHERE hfe_type  IN('G','S')") \
		_T("   AND (hfe_refidx <> 0") \
		_T("   AND hfe_isreq   <> 'Y')") \
		_T("   AND hfe_status   ='P'") \
		_T("   UNION ALL") \
		_T("   SELECT hfe_cash_id,") \
		_T("     hfe_patientno,") \
		_T("     hfe_docno,") \
		_T("     hfe_deptid,") \
		_T("     hfe_refidx,") \
		_T("     hfe_invoiceno,") \
		_T("     0          AS trichtamgui,") \
		_T("     0          AS tran_bao_viet,") \
		_T("     0          AS cackhoanphaithu,") \
		_T("     0          AS miengiam,") \
		_T("    0          AS tienthuoc,") \
		_T("     0          AS tienvattu,") \
		_T("     0          AS maycnc,") \
		_T("     0          AS hfe_packageamount,") \
		_T("     0          AS chtravp,") \
		_T("     hfe_amount AS tl_vienphi,") \
		_T("     0          AS tl_tienthuoc,") \
		_T("     0          AS tl_tienvattu,") \
		_T("     0          AS tl_maycnc,") \
		_T("     0          AS chi_goidv,") \
		_T("     0          AS tl_trichtamthu") \
		_T("   FROM hms_fee_refund") \
		_T("   WHERE hfe_type             IN('V')") \
		_T("   AND hfe_status              ='P'") \
		_T("   ) tblInvoice ON(fac_cash_id = cash_id)") \
		_T(" WHERE 1                       =1 %s") \
		_T(" GROUP BY fac_posteddate,") \
		_T("   fac_user_id,") \
		_T("   fac_invoiceno") \
		_T(" ORDER BY fac_user_id,") \
		_T("   fac_invoiceno") \
		_T(" )") \
		_T(" GROUP BY invoice_date") \
		_T(" ORDER BY invoice_date"), szWhere);
	return szSQL;
}
void CFMPostedPaymentVoucherList2::OnPrint4ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	CRecord rs(&pMF->m_db);	
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szthuquyATM, szthuquychung;
	CString sznoidung1 = _T("Trích tạm thu thanh toán viện phí bệnh nhân DVYT");
	CString sznoidung2 = _T("Thu viện phí bệnh nhân DVYT");
	CString sznoidung3 = _T("Thu bệnh nhân DVYT tạm gửi viện phí");
	double nTotal[15];
	double nFa = 0;
	
	szReportName = _T("Reports\\HMS\\HF_CHUNGTUGHISOCHI_TONGHOP_DV.RPT");	

	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString4();
	rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 15; i++)
		nTotal[i] = 0;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), _T(" "));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("invoice_date")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("noi_dung")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("taikhoan_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("taikhoan_co")));					
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("tongtien")));
			rs.GetValue(_T("tongtien"), nTmp);
			nTotal[7] += nTmp;
			
		}
		rs.MoveNext();
	}
	rptFooter = rpt.GetGroupFooter(1);
	if(rptFooter)
	{
		rptDetail = rpt.AddDetail(rptFooter);
	}
	else
	{
		rptDetail = rpt.GetReportFooter();
	}

	if (rptDetail)
	{
		for (int i = 7; i <= 14; i++)
		{
			szPos.Format(_T("s%d"), i);
			tmpStr.Format(_T("%.3f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}

	}

	tmpStr = pMF->GetSysDate();
	rptFooter = rpt.GetReportFooter();
	szDate.Format(rptFooter->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[7]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rptFooter->SetValue(_T("SuminWords"), tmpStr);	
	
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
}
CString CFMPostedPaymentVoucherList2::GetQueryString4()
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
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}	
		szSQL.Format(_T(" SELECT") \
		_T(" invoice_date,") \
		_T(" noi_dung,") \
		_T(" taikhoan_no,") \
		_T(" taikhoan_co,") \
		_T(" SUM(patient_return) as tong_trich_tam_thu,") \
		_T(" SUM(tl_vienphi) as tong_tralai_khonglam,") \
		_T(" SUM(patient_return+tl_vienphi) as tongtien") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T("   TO_CHAR(fac_posteddate, 'DD/MM/YYYY')                                      AS invoice_date,") \
		_T("   noi_dung,") \
		_T("   taikhoan_no,") \
		_T("   taikhoan_co,") \
		_T("   SUM(chitravienphi+tl_trichtamthu)                                          AS patient_return, ") \
		_T("   SUM(tl_vienphi) as tl_vienphi") \
		_T("   ") \
		_T(" FROM fa_cash") \
		_T(" LEFT JOIN") \
		_T("   (") \
		_T("   SELECT r.hfe_cash_id as cash_id,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TL_TRICHTG') AS noi_dung,") \
		_T("   '1312'           AS taikhoan_no,") \
		_T("   '1111'            AS taikhoan_co,") \
		_T("    i.hfe_refund AS chitravienphi,") \
		_T("    0          AS tl_trichtamthu,") \
		_T("     0          AS tl_vienphi    ") \
		_T("   FROM hms_fee_refund r") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON(r.hfe_docno      = i.hfe_docno") \
		_T("   AND r.hfe_refidx    =i.hfe_invoiceno)") \
		_T("   WHERE i.hfe_status IN('P','R')") \
		_T("   AND i.hfe_payment  <=0") \
		_T("   AND i.hfe_refund    > 0") \
		_T("   AND (SELECT COUNT(*)") \
		_T("     FROM hms_fee_refundline") \
		_T("     WHERE hfe_invoiceno = r.hfe_invoiceno") \
		_T("     AND hfe_docno       = r.hfe_docno) = 0    ") \
		_T("   UNION ALL  ") \
		_T("   SELECT r.hfe_cash_id as cash_id,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TL_KHONGLAM') AS noi_dung,") \
		_T("   '531'           AS taikhoan_no,") \
		_T("   '1111'           AS taikhoan_co,") \
		_T("     0 AS chitravienphi,") \
		_T("     0 tl_trichtamthu,") \
		_T("     CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \
		_T("       THEN 0") \
		_T("       ELSE l.hfe_patpaid") \
		_T("     END AS tl_vienphi   ") \
		_T("   FROM hms_fee_refund r,") \
		_T("     hms_fee_refundline l") \
		_T("   WHERE r.hfe_docno   = l.hfe_docno") \
		_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
		_T("   AND l.hfe_invoiceno > 0") \
		_T("   AND r.hfe_status    ='P'") \
		_T("   UNION ALL") \
		_T("   SELECT r.hfe_cash_id as cash_id,") \
		_T("    (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TL_TRICHTG') AS noi_dung,") \
		_T("   '1312'           AS taikhoan_no,") \
		_T("   '1111'           AS taikhoan_co,") \
		_T("     0 AS chitravienphi,") \
		_T("      CASE") \
		_T("       WHEN l.hfe_itemid IS NULL") \
		_T("       THEN l.hfe_patpaid") \
		_T("       ELSE 0") \
		_T("     END AS tl_trichtamthu,") \
		_T("     0 AS tl_vienphi   ") \
		_T("   FROM hms_fee_refund r,") \
		_T("     hms_fee_refundline l") \
		_T("   WHERE r.hfe_docno   = l.hfe_docno") \
		_T("   AND r.hfe_invoiceno = l.hfe_invoiceno") \
		_T("   AND l.hfe_invoiceno > 0") \
		_T("   AND r.hfe_status    ='P' ") \
		_T("   UNION ALL") \
		_T("   SELECT hfe_cash_id as cash_id,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TL_KHONGLAM') AS noi_dung,") \
		_T("   '531'           AS taikhoan_no,") \
		_T("   '1111'           AS taikhoan_co,") \
		_T("     0 AS chitravienphi,") \
		_T("     hfe_amount AS tl_vienphi,    ") \
		_T("     0          AS tl_trichtamthu") \
		_T("   FROM hms_fee_refund") \
		_T("   WHERE hfe_type  IN('G','S')") \
		_T("   AND (hfe_refidx <> 0") \
		_T("   AND hfe_isreq   <> 'Y')") \
		_T("   AND hfe_status   ='P'") \
		_T("   UNION ALL") \
		_T("   SELECT hfe_cash_id as cash_id,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='NOIDUNG_THU' AND ss_code='TL_KHONGLAM') AS noi_dung,") \
		_T("   '531'           AS taikhoan_no,") \
		_T("   '1111'           AS taikhoan_co,") \
		_T("     0 AS chitravienphi,") \
		_T("     0          AS tl_trichtamthu,") \
		_T("     hfe_amount AS tl_vienphi    ") \
		_T("   FROM hms_fee_refund") \
		_T("   WHERE hfe_type             IN('V')") \
		_T("   AND hfe_status              ='P'") \
		_T("   ) tblInvoice ON(fac_cash_id = cash_id)") \
		_T(" WHERE 1                       =1 %s") \
		_T(" GROUP BY fac_posteddate,") \
		_T("   noi_dung,") \
		_T("   taikhoan_no,") \
		_T("   taikhoan_co") \
		_T(" ORDER BY fac_posteddate") \
		_T(" )") \
		_T(" GROUP BY invoice_date,noi_dung,") \
		_T("   taikhoan_no,") \
		_T("   taikhoan_co") \
		_T(" ORDER BY to_date(invoice_date, 'DD-MM-YYYY'), taikhoan_co"), szWhere);

	return szSQL;
}
void CFMPostedPaymentVoucherList2::OnPrint3rdver_2024()
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
	long double nTotal[33], nGroupTotal1[33];
	for (int i = 0; i < 33; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUCHISO2_A3_2024.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3_2024();

    //_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	
	data_name.Add(_T("tong_vien_phi"));	
	data_name.Add(_T("INVOICE_DEPOSIT"));	
	data_name.Add(_T("FA"));
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

	data_name.Add(_T("PATIENT_RETURN"));
	data_name.Add(_T("tran_bao_viet"));
	data_name.Add(_T("TOTAL_RETURN"));
	
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		rptHeader->SetValue(_T("Object"), m_bSOD?_T("Kh\xE1m \x62\x1EC7nh th\x65o y\xEAu \x63\x1EA7u"):_T("\x44\x1ECB\x63h v\x1EE5 y t\x1EBF"));
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
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("INVOICE_NO")));
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
	//OnPrintSummaryReceipt(nTotal[sum_pos]);
	OnPrintSummaryPayment(nTotal[sum_pos]);

	rpt.GetReportFooter()->SetValue(_T("ClassName"), _T("CFMPostedPaymentVoucherList2"));
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
	//PrintFinancialDocument();
}
CString CFMPostedPaymentVoucherList2::GetQueryString3_2024()
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

	

	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	
	
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}
	

		szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_SERPOSTPAYMENTSUMMARY_VL2 ") \
		_T(" WHERE fac_cash_id > 0 %s "), szWhere );
	
	return szSQL;
}
void CFMPostedPaymentVoucherList2::OnPrintSummaryReceipt(double nTotalAmount)
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