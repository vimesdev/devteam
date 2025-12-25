#include "stdafx.h"
#include "FMServiceRefundSummarybyDept.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceRefundSummaryByDept* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceRefundSummaryByDept* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceRefundSummaryByDept* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMServiceRefundSummaryByDept* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept *)pWnd)->OnOrderByAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMServiceRefundSummaryByDept*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMServiceRefundSummaryByDept*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMServiceRefundSummaryByDept*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMServiceRefundSummaryByDept*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMServiceRefundSummaryByDept*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMServiceRefundSummaryByDept *pVw = (CFMServiceRefundSummaryByDept *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMServiceRefundSummaryByDept *pVw = (CFMServiceRefundSummaryByDept *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMServiceRefundSummaryByDept *pVw = (CFMServiceRefundSummaryByDept *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMServiceRefundSummaryByDept *pVw = (CFMServiceRefundSummaryByDept *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMServiceRefundSummaryByDept*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMServiceRefundSummaryByDept*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMServiceRefundSummaryByDept*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMServiceRefundSummaryByDept*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServiceRefundSummaryByDept*)pWnd)->OnAddFMInsuranceReceiptSummary();
} 
static int _OnEditFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServiceRefundSummaryByDept*)pWnd)->OnEditFMInsuranceReceiptSummary();
} 
static int _OnDeleteFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServiceRefundSummaryByDept*)pWnd)->OnDeleteFMInsuranceReceiptSummary();
} 
static int _OnSaveFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServiceRefundSummaryByDept*)pWnd)->OnSaveFMInsuranceReceiptSummary();
} 
static int _OnCancelFMInsuranceReceiptSummaryFnc(CWnd *pWnd){
	 return ((CFMServiceRefundSummaryByDept*)pWnd)->OnCancelFMInsuranceReceiptSummary();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMServiceRefundSummaryByDept*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMServiceRefundSummaryByDept*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}

static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMServiceRefundSummaryByDept*)pWnd)->OnListCheckAllTYC();
	return 0;
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMServiceRefundSummaryByDept*)pWnd)->OnSODSelect();
}
CFMServiceRefundSummaryByDept::CFMServiceRefundSummaryByDept(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMServiceRefundSummaryByDept::~CFMServiceRefundSummaryByDept(){
}
void CFMServiceRefundSummaryByDept::OnCreateComponents()
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
	m_wndOrderBy.Create(this,95, 120, 225, 145); 
	m_wndDeptLabel.Create(this, _T("Dept"), 240, 120, 331, 145);
	m_wndDept.Create(this,346, 120, 476, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 240, 90, 331, 115);
	m_wndStatus.Create(this,346, 90, 476, 115); 
	m_wndList.Create(this,10, 150, 476, 500); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 312, 540, 392, 565);
	m_wndExport.Create(this, _T("Export XLS"), 397, 540, 477, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 115, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 120, 505, 225, 530);
	m_wndAll.Create(this, _T("All"), 231, 505, 336, 530);
	m_wndSOD.Create(this, _T("SOD"), 371, 505, 476, 530);
	m_wndWithoutGeneral.Create(this, _T("Without General"), 0, 0, 0, 0);
	m_wndDeposit.Create(this, _T("Deposit"), 0, 0, 0, 0);
}
void CFMServiceRefundSummaryByDept::OnInitializeComponents(){
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
	m_wndList.SetCheckBox(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMServiceRefundSummaryByDept::OnSetWindowEvents(){
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
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
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
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
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
void CFMServiceRefundSummaryByDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);

}
void CFMServiceRefundSummaryByDept::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMServiceRefundSummaryByDept::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMServiceRefundSummaryByDept::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("04");
	m_nPatientType = 3;

}

int CFMServiceRefundSummaryByDept::SetMode(int nMode){
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

/*void CFMServiceRefundSummaryByDept::OnYearChange(){
	
} */
/*void CFMServiceRefundSummaryByDept::OnYearSetfocus(){
	
} */
/*void CFMServiceRefundSummaryByDept::OnYearKillfocus(){
	
} */
int CFMServiceRefundSummaryByDept::OnYearCheckValue(){
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
 
void CFMServiceRefundSummaryByDept::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMServiceRefundSummaryByDept::OnReportPeriodSelendok(){
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

/*void CFMServiceRefundSummaryByDept::OnReportPeriodSetfocus(){
	
}*/
/*void CFMServiceRefundSummaryByDept::OnReportPeriodKillfocus(){
	
}*/
long CFMServiceRefundSummaryByDept::OnReportPeriodLoadData(){
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

/*void CFMServiceRefundSummaryByDept::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMServiceRefundSummaryByDept::OnFromDateChange(){
	
} */
/*void CFMServiceRefundSummaryByDept::OnFromDateSetfocus(){
	
} */
/*void CFMServiceRefundSummaryByDept::OnFromDateKillfocus(){
	
} */
int CFMServiceRefundSummaryByDept::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMServiceRefundSummaryByDept::OnToDateChange(){
	
} */
/*void CFMServiceRefundSummaryByDept::OnToDateSetfocus(){
	
} */
/*void CFMServiceRefundSummaryByDept::OnToDateKillfocus(){
	
} */
int CFMServiceRefundSummaryByDept::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMServiceRefundSummaryByDept::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceRefundSummaryByDept::OnClerkSelendok(){
	 
}
int CFMServiceRefundSummaryByDept::OnListCheckAllTYC()
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
int CFMServiceRefundSummaryByDept::OnListCheckAllPTTYC()
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

void CFMServiceRefundSummaryByDept::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}
void CFMServiceRefundSummaryByDept::OnSODSelect(){
	OnListLoadData();
}
/*void CFMServiceRefundSummaryByDept::OnClerkSetfocus(){
	
}*/
/*void CFMServiceRefundSummaryByDept::OnClerkKillfocus(){
	
}*/
long CFMServiceRefundSummaryByDept::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMServiceRefundSummaryByDept::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceRefundSummaryByDept::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceRefundSummaryByDept::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMServiceRefundSummaryByDept::OnStatusSetfocus(){
	
}*/
/*void CFMServiceRefundSummaryByDept::OnStatusKillfocus(){
	
}*/
long CFMServiceRefundSummaryByDept::OnStatusLoadData(){
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
/*void CFMServiceRefundSummaryByDept::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMServiceRefundSummaryByDept::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMServiceRefundSummaryByDept::OnOrderBySelendok(){
	 
}
/*void CFMServiceRefundSummaryByDept::OnOrderBySetfocus(){
	
}*/
/*void CFMServiceRefundSummaryByDept::OnOrderByKillfocus(){
	
}*/
long CFMServiceRefundSummaryByDept::OnOrderByLoadData(){
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
/*void CFMServiceRefundSummaryByDept::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMServiceRefundSummaryByDept::OnDeptLoadData(){
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

void CFMServiceRefundSummaryByDept::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMServiceRefundSummaryByDept::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMServiceRefundSummaryByDept::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMServiceRefundSummaryByDept::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMServiceRefundSummaryByDept::OnListLoadData(){
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
	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id  in ('DVYC','DV-PTTYC')"));
	else
	szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV' AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate,FAC_CASHBOOK_ID as cashbook_id ") \
		//_T("FROM fa_cash WHERE fac_invoicetype in('P','R') AND Fac_Cashbook_Id <> 'DVYC' %s ORDER BY fac_cash_id"), szWhere);
		  _T(" FROM fa_cash WHERE fac_invoicetype in('P') %s ORDER BY fac_cash_id"), szWhere);
	m_szCashQuery.Format(_T("SELECT fac_cash_id ") \
			_T(" FROM fa_cash WHERE fac_invoicetype in('P') %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	_msg(_T("%ld"), nCount);

	/*m_szCashQuery.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T(" FROM fa_cash WHERE fac_invoicetype in('P') %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	_msg(_T("%s"), szSQL);*/
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

void CFMServiceRefundSummaryByDept::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMServiceRefundSummaryByDept::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMServiceRefundSummaryByDept::OnInpatientSelect(){
	
}
void CFMServiceRefundSummaryByDept::OnOutpatientSelect(){
	
}
void CFMServiceRefundSummaryByDept::OnDepositSelect(){
	
}
void CFMServiceRefundSummaryByDept::OnAllSelect(){
	
}
 
 
int CFMServiceRefundSummaryByDept::OnAddFMInsuranceReceiptSummary(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMServiceRefundSummaryByDept::OnEditFMInsuranceReceiptSummary(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMServiceRefundSummaryByDept::OnDeleteFMInsuranceReceiptSummary(){
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
int CFMServiceRefundSummaryByDept::OnSaveFMInsuranceReceiptSummary(){
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
 		//OnFMInsuranceReceiptSummaryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMServiceRefundSummaryByDept::OnCancelFMInsuranceReceiptSummary(){
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
int CFMServiceRefundSummaryByDept::OnFMInsuranceReceiptSummaryListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMServiceRefundSummaryByDept::OnPrintSelect(){
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

void CFMServiceRefundSummaryByDept::OnPrint1stver(){
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

void CFMServiceRefundSummaryByDept::OnPrint2ndver()
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
	double nTotal[13], GrandAmt[13], nTotalClass[13];
	for (int i = 0; i < 13; i++)
	{
		GrandAmt[i] = 0;
		nTotal[i] = 0;
		nTotalClass[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGTHCHI_NOITRU_NGOAITRU_THEOKHOA.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("so_ngay_dt"));
	data_name.Add(_T("tien_kham"));
	data_name.Add(_T("tien_giuong"));
	data_name.Add(_T("tien_cls"));
	data_name.Add(_T("tien_pttt"));	
	data_name.Add(_T("tien_thuoc_ch"));
	data_name.Add(_T("tien_vat_tu_ch"));
	data_name.Add(_T("tien_thuoc_pm"));
	data_name.Add(_T("tien_vat_tu_pm"));
	data_name.Add(_T("tien_mau"));	
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("tong_thu"));
	data_name.Add(_T("tien_an"));
	
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		if (!m_szDeptKey.IsEmpty())
		{
			rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(m_szDeptKey));
		}
		else rptHeader->SetValue(_T("Department"), _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 kho\x61"));
	}
_tprintf(_T("\r\n2"));


rpt.GetReportHeader()->SetValue(_T("InvoiceNos"), m_szCashIDS);

	CString szOldIndex, szNewIndex;

	int col_pos = 8;
	int sum_pos = (int) (data_name.GetCount()) - 2;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("posted_date"), szNewIndex);
		if(szNewIndex  != szOldIndex)
		{
			if (m_szOrderByKey == _T("04"))
				if (GrandAmt[sum_pos]> 0 && m_szDeptKey.IsEmpty())
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
			if (nTotalClass[sum_pos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("\x43\x1ED9ng ng\xE0y"));
				rptGroup->SetValue(_T("Grand"), tmpStr);
				for (int i = 0; i < data_name.GetCount(); i++)
				{
					tmpStr.Format(_T("%f"), nTotalClass[i]);
					szPos.Format(_T("s%d"), i+col_pos);
					rptGroup->SetValue(szPos, tmpStr);
					nTotalClass[i] = 0;
				}
			}
			
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
			{
				/*if(szNewIndex == _T("I"))
					tmpStr.Format(_T("I. \x42\x1EC7nh nh\xE2n ngo\x1EA1i tr\xFA"));
				else
					tmpStr.Format(_T("II. \x42\x1EC7nh nh\xE2n n\x1ED9i tr\xFA"));*/
				tmpStr.Format(_T("Ng\xE0y %s"), CDate::Convert(szNewIndex, yyyymmdd, ddmmyyyy));
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldIndex = szNewIndex;
			szOldLev1.Empty();
		}

		if(m_szOrderByKey == _T("04"))
			if (m_szDeptKey.IsEmpty())
			{
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
			}

		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("ho_ten")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("docno")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept_id")));
			rptDetail->SetValue(_T("5"), CDate::Convert(rs.GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("6"), CDate::Convert(rs.GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("7"), CDate::Convert(rs.GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));
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
		if (GrandAmt[sum_pos] > 0 && m_szDeptKey.IsEmpty())
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


	if (nTotalClass[sum_pos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("\x43\x1ED9ng ng\xE0y"));
		rptGroup->SetValue(_T("Grand"), tmpStr);

		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotalClass[i]);
			szPos.Format(_T("s%d"), i+col_pos);
			rptGroup->SetValue(szPos, tmpStr);
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMServiceRefundSummaryByDept"));
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);


	rpt.PrintPreview();
}
void CFMServiceRefundSummaryByDept::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Export Chi tiết"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Export Tổng hợp"));
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport();
		break;
	case 2:
		OnExport2();
		break;
	}
}
void CFMServiceRefundSummaryByDept::OnExport()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[24], nGroupTotal[24];
	for(int i = 0; i < 24; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_DV_TRALAI.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	long nRet = rs.ExecSQL(szSQL);
	//_msg(_T("%ld"), nRet);
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		/*if(nRow == 65000)		{			i++;			tmpStr.Format(_T("Sheet %d"), i);
			xls.AddSheet(tmpStr);			xls.SetWorksheet(i);			nRow = 1;		}*/

		rs.GetValue(_T("dept_id"), szNewDept);
		if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
		{
			if (nGroupTotal[20] > 0)
			{
				xls.SetCellText(6, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 7; i < 24; i++)
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

		rs.GetValue(_T("HO_TEN"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NGAY_VAO"), tmpStr);
		xls.SetCellText(nCol+4,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("NGAY_RA"), tmpStr);
		xls.SetCellText(nCol+5,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("posted_date"), tmpStr);
		xls.SetCellText(nCol+6,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);		

		rs.GetValue(_T("SO_NGAY_DT"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_KHAM"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_GIUONG"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_CLS"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_PTTT"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_PM"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("TIEN_VAT_TU_PM"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("TIEN_MAU"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_KHAC"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("TONG_THU"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_AN"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);			

		rs.GetValue(_T("TONG_THU1"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[20] > 0)
	{
		xls.SetCellText(6, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 24; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[20] > 0)
	{
		xls.SetCellText(6, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 24; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_DV_TRALAI2.xls"));
}

void CFMServiceRefundSummaryByDept::OnExport2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[24], nGroupTotal[24];
	for(int i = 0; i < 24; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_DV_TRALAI_TH.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("TIEN_KHAM"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_GIUONG"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_CLS"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_PTTT"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_CH"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_CH"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_THUOC_PM"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_VAT_TU_PM"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_MAU"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_KHAC"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TONG_THU"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("TIEN_AN"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("TONG_THU1"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[14] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 18; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_NGOAITRU_NOITRU_THEOKHOA_DV_TRALAI_TH2.xls"));
}

CString CFMServiceRefundSummaryByDept::GetQueryString()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15,szSQL16,szSQL17,szSQL18,szSQL19,szSQL20, szWhere, szWhere1, szWhere2;
	CString szSQL21,szSQL22,szSQL23,szSQL24,szSQL25, szOrderBy, szReceiptStr;
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

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	//szWhere.Format(_T(" and iv.hfe_cash_id in(%s) "), szReceiptStr);
	
	if (nCount <1000)
	{
		szWhere1.Format(_T(" AND tbl1.hfe_cash_id in(%s) "), szReceiptStr);
	}
	else
	{
		szWhere1.Format(_T(" AND tbl1.hfe_cash_id in (select fac_cash_id from tbl)"));
	}
	szWhere.Empty();


	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname "));
		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));


	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and chindex='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and chindex='II' "));
	}
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);

	//1. Tien kham//
	szSQL1.Format(_T(" SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN he_roomid IN ( 50, 54 )") \
	_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
	_T("         ELSE f.hfe_deptid") \
	_T("       END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,       ") \
	_T("       rl.hfe_patpaid as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_exam ex") \
	_T("     ON (f.hfe_docno   = ex.he_docno") \
	_T("     AND f.hfe_orderid = ex.he_receptidx)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_group      ='D0000'") \
	_T("     AND f.hfe_itemid <> 'D0000006'") \
	_T("     AND f.hfe_patpaid       >0") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	//2. Tien giuong//
	szSQL2.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       F.Hfe_Quantity,") \
	_T("       CASE") \
	_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
	_T("         THEN f.hfe_deptid") \
	_T("       END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       rl.hfe_patpaid as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T(" f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	//3.Can lam sang khoi can lam sang C16, C17, A20, C5//
	szSQL3.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN f.hfe_type     IN ('P','T')") \
	_T("         AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("         THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20','B1E00','C5') AS NVARCHAR2(3))") \
	_T("       END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       rl.hfe_patpaid as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('P','T')") \
	_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	//4. Phi can lam sang khoi xet nghiem, chan doan hinh anh khong xac dinh ro ten khoa//
	szSQL4.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN f.hfe_type in ('P','T')") \
	_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("         THEN Fl.Hfl_Deptid END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       rl.hfe_patpaid as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('T','P')") \
	_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	//5. Phi PTTT//
	szSQL5.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	/*_T("       CASE") \
	_T("         WHEN f.hfe_type ='O'") \
	_T("         AND HO_PDEPTID  ='B5'") \
	_T("         THEN HO_DEPTID") \
	_T("         ELSE HO_PDEPTID") \
	_T("       END khoa_thuchien,") \*/
	_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
	_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
	_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       rl.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       f.hfe_patpaid as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
	_T("     LEFT JOIN hms_operation") \
	_T("     ON ( f.hfe_docno = ho_docno") \
	_T("     AND hfe_orderid  = ho_idx") \
	_T("     AND f.hfe_type   = 'O')") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND F.Hfe_type       ='O'") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	//6.Phi thuoc tra lai tai chinh tu tao phieu//
	szSQL6.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       rl.hfe_patpaid as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND f.hfe_deptid <> 'B5'") \
	_T("     AND product_org_id NOT IN ('MA','BB')") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	szSQL7.Format(_T("     UNION ALL") \
	//7. Phi thuoc khoa duoc tu tao phieu//
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       rl.hfe_patpaid as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno         = f.hfe_docno)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno = f.hfe_docno and r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid=Rl.Hfe_Itemid)") \
	_T("     INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno = ro.hpo_invoiceno AND f.hfe_orderid=Ro.Hpo_Orderid)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND f.hfe_deptid <> 'B5'") \
	_T("     AND product_org_id NOT IN ('MA','BB')") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	//8.Phi trang bi ma tai chinh tao phieu//
	szSQL8.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("  r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       rl.hfe_patpaid as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('PM','BB')") \
	_T("     AND f.hfe_deptid <> 'B5'") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	szSQL9.Format(_T("     UNION ALL") \
	//9.Phi trang bi ma trang bi tu tao phieu//	
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("  r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       rl.hfe_patpaid as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno         = f.hfe_docno)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno = f.hfe_docno and r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid=Rl.Hfe_Itemid)") \
	_T("     INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno = ro.hpo_invoiceno AND f.hfe_orderid=Ro.Hpo_Orderid)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('PM','BB')") \
	_T("     AND f.hfe_deptid <> 'B5'") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	szSQL10.Format(_T("     UNION ALL") \
	//10. Tra lai phi thuoc phong mo chi co tai chinh tao phieu
	_T(" SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0          AS TIEN_KHAM,") \
	_T("       0          AS TIEN_GIUONG,") \
	_T("       0          AS TIEN_CLS,") \
	_T("       0          AS TIEN_PTTT,") \
	_T("       0          AS TIEN_THUOC_CH,") \
	_T("       0          AS TIEN_VAT_TU_CH,") \
	_T("       rl.hfe_patpaid AS TIEN_THUOC_PM,") \
	_T("       0          AS TIEN_VAT_TU_PM,") \
	_T("       0          AS TIEN_MAU,") \
	_T("       0          AS THU_KHAC,") \
	_T("       0          AS TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status       IN ('P','R')") \
	_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('MA','BB')") \
	_T("     AND f.hfe_deptid = 'B5'") \
	_T("     AND f.hfe_category       IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	//11. Phi vat tu phong mo chi co tai chinh tao phieu
	szSQL11.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0          AS TIEN_KHAM,") \
	_T("       0          AS TIEN_GIUONG,") \
	_T("       0          AS TIEN_CLS,") \
	_T("       0          AS TIEN_PTTT,") \
	_T("       0          AS TIEN_THUOC_CH,") \
	_T("       0          AS TIEN_VAT_TU_CH,") \
	_T("       0          AS TIEN_THUOC_PM,") \
	_T("       rl.hfe_patpaid AS TIEN_VAT_TU_PM,") \
	_T("       0          AS TIEN_MAU,") \
	_T("       0          AS THU_KHAC,") \
	_T("       0          AS TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status       IN ('P','R')") \
	_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('PM','BB')") \
	_T("     AND f.hfe_deptid = 'B5'") \
	_T("     AND f.hfe_category       IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	//12.Phi mau tach rieng ra cho khoa C16//
	szSQL12.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       rl.hfe_patpaid as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('MA','PM')") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	szSQL13.Format(_T("     UNION ALL") \
	_T(" SELECT r.hfe_docno,") \
	_T("       r.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("        CASE") \
	_T("         WHEN R.hfe_class IN ('X','I','E')") \
	_T("         AND R.hfe_type   IN ('X','F')") \
	_T("         AND R.HFE_DEPTID IS NOT NULL") \
	_T("         THEN R.HFE_DEPTID      ") \
	_T("         WHEN r.hfe_type  IN ('V')") \
	_T("         AND r.Hfe_Serialno='PC'") \
	_T("         THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15))") \
	_T("         ELSE fl.HFL_DEPTID") \
	_T("       END khoa_thuchien,") \
	_T("       NULL,") \
	_T("       r.hfe_class,") \
	_T("       0        AS TIEN_KHAM,") \
	_T("       0        AS TIEN_GIUONG,") \
	_T("       0        AS TIEN_CLS,") \
	_T("       0        AS TIEN_PTTT,") \
	_T("       0        AS TIEN_THUOC_CH,") \
	_T("       0        AS TIEN_VAT_TU_CH,") \
	_T("       0        AS TIEN_THUOC_PM,") \
	_T("       0        AS TIEN_VAT_TU_PM,") \
	_T("       0        AS TIEN_MAU,") \
	_T("       hfe_cost AS THU_KHAC,") \
	_T("       0        AS TIEN_AN,") \
	_T("       NULL") \
	_T("     FROM hms_fee_refund r") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl") \
	_T("     ON (r.hfe_docno     =rl.hfe_docno") \
	_T("     AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
	_T("     LEFT JOIN hms_fee_list fl  ON (rl.hfe_itemid  =fl.hfl_feeid)") \
	_T("     WHERE 1             =1 %s") \
	_T("     AND r.hfe_status   IN ('P','R')") \
	//_T("     AND ((r.hfe_type      ='V' AND r.Hfe_Serialno  ='PC') OR (r.hfe_type    IN ('X','F')))"), szWhere);
	_T("     AND ((r.hfe_type      ='V' AND r.Hfe_Serialno  ='PC'))"), szWhere);

		//14 Phi khac o khoa
	szSQL14.Format(_T("     UNION ALL") \
	_T(" SELECT r.hfe_docno,") \
	_T("       r.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN R.hfe_class IN ('X','I','E')") \
	_T("         AND R.hfe_type   IN ('X','F')") \
	_T("         AND R.HFE_DEPTID IS NOT NULL") \
	_T("         THEN R.HFE_DEPTID") \
	_T("         ELSE fl.HFL_DEPTID") \
	_T("       END khoa_thuchien,") \
	_T("       NULL,") \
	_T("       r.hfe_class,") \
	_T("       0        AS TIEN_KHAM,") \
	_T("       0        AS TIEN_GIUONG,") \
	_T("       0        AS TIEN_CLS,") \
	_T("       0        AS TIEN_PTTT,") \
	_T("       0        AS TIEN_THUOC_CH,") \
	_T("       0        AS TIEN_VAT_TU_CH,") \
	_T("       0        AS TIEN_THUOC_PM,") \
	_T("       0        AS TIEN_VAT_TU_PM,") \
	_T("       0        AS TIEN_MAU,") \
	_T("       hfe_cost AS THU_KHAC,") \
	_T("       0        AS TIEN_AN,") \
	_T("       NULL") \
	_T("     FROM hms_fee_refund r") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl") \
	_T("     ON (r.hfe_docno     =rl.hfe_docno") \
	_T("     AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
	_T("     LEFT JOIN hms_fee_list fl") \
	_T("     ON (rl.hfe_itemid  =fl.hfl_feeid)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND r.hfe_status  IN ('P','R')") \
	//_T("     AND r.hfe_type    IN ('X','F') AND NVL(r.Hfe_Serialno,'XX') <> 'PC'"), szWhere);
	_T("     AND r.hfe_type    IN ('X','F') AND rl.hfe_group='F0000'"), szWhere);
	szSQL15.Format(_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
	_T("      f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       rl.hfe_patpaid as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND F.Hfe_Group     IN ('FF000')") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'"), szWhere);
	
	
	//rs.ExecSQL(szSQL);

	szSQL.Format(_T(" WITH tbl AS (%s)") \
				_T(" SELECT HO_TEN,") \
				_T(" docno,") \
				_T(" NGAY_VAO, ") \
				_T(" NGAY_RA,") \
				_T(" CHINDEX, ") \
				_T(" posted_date,") \
				_T(" dept_id,") \
				_T(" SUM(SO_NGAY_DT) as SO_NGAY_DT,") \
				_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
				_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
				_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
				_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
				_T(" SUM(TIEN_THUOC_CH) as TIEN_THUOC_CH,") \
				_T(" SUM(TIEN_VAT_TU_CH) as TIEN_VAT_TU_CH,") \
				_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
				_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
				_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
				_T(" SUM(THU_KHAC) as THU_KHAC,") \
				_T(" SUM(TIEN_AN) as TIEN_AN,") \
				_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC) as TONG_THU,") \
				_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+TIEN_AN) as TONG_THU1") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
			_T("   Get_patientname(iv.hfe_docno) as HO_TEN,") \
			_T("   iv.hfe_docno as docno,") \
			_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN cr.HCR_ADMITDATE ELSE d.HD_ADMITDATE END NGAY_VAO,") \
			_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN cr.HCR_DISCHARGEDATE ELSE d.HD_ENDDATE END NGAY_RA,") \
			_T("    CASE WHEN iv.HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
			_T("    trunc(iv.hfe_date) as invoice_date,") \
			_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
			_T("    khoa_thuchien as dept_id,") \
			_T("    hfe_quantity as SO_NGAY_DT,") \
			_T("     TIEN_KHAM,") \
			_T("     TIEN_GIUONG,") \
			_T("     TIEN_CLS,    ") \
			_T("     TIEN_PTTT,") \
			_T("     TIEN_THUOC_CH,") \
			_T("     TIEN_VAT_TU_CH,    ") \
			_T("     TIEN_THUOC_PM,") \
			_T("     TIEN_VAT_TU_PM,") \
			_T("     TIEN_MAU,    ") \
			_T("     THU_KHAC,") \
			_T("     TIEN_AN,") \
			_T("     hfe_itemid") \
				_T("   FROM hms_fee_refund iv") \
				_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=iv.hfe_cash_id)") \
				_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=iv.HFE_DOCNO)") \
				_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=iv.HFE_DOCNO)") \
				_T("   LEFT JOIN  (") \
				_T("    %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s") \
				_T("   ) tbl1 ON (iv.hfe_invoiceno = tbl1.hfe_invoiceno AND iv.hfe_docno = tbl1.hfe_docno)") \
				_T("   WHERE 1=1 %s") \
				_T("   )") \
				_T(" GROUP BY ") \
				_T(" HO_TEN, docno, NGAY_VAO, NGAY_RA,CHINDEX, posted_date,dept_id") \
				_T(" HAVING SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+TIEN_AN)>0") \
				_T(" ORDER BY dept_id"),m_szCashQuery, szSQL1,szSQL2,szSQL3,szSQL4,szSQL5,szSQL6,szSQL7,szSQL8,szSQL9,szSQL10,szSQL11,szSQL12,szSQL13,szSQL14,szSQL15, szWhere1);
//AfxMessageBox(szSQL);	
	return szSQL;
}
CString CFMServiceRefundSummaryByDept::GetQueryString2()
{
	CString szSQL, szWhere, szWhere1, szWhere2;
	CString szOrderBy, szReceiptStr;


	szReceiptStr = _T("-1");
	UpdateData(true);
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			if(!szReceiptStr.IsEmpty())
				szReceiptStr.AppendFormat(_T(","));
			szReceiptStr.AppendFormat(_T("%ld"), str2long(m_wndList.GetItemText(i,0)));
		}
	}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and r.hfe_cash_id in(%s) "), szReceiptStr);
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , firstname, docno, posted_date "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,posted_date, firstname "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		//szOrderBy.Format(_T(" , dept_id, firstname "));
		szOrderBy.Format(_T(" , dept_id "));
	}
	else
		szOrderBy.Format(_T(" , firstname, posted_date "));


	if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and chindex='I' "));
	}
	else if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and chindex='II' "));
	}
	
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND khoa_thuchien = '%s'"), m_szDeptKey);	
szSQL.Format(_T(" SELECT") \
	_T(" dept_id,") \
	_T(" SUM(SO_NGAY_DT) as SO_NGAY_DT,") \
	_T(" SUM(TIEN_KHAM) as TIEN_KHAM,") \
	_T(" SUM(TIEN_GIUONG) as TIEN_GIUONG,") \
	_T(" SUM(TIEN_CLS) as TIEN_CLS,") \
	_T(" SUM(TIEN_PTTT) as TIEN_PTTT,") \
	_T(" SUM(TIEN_THUOC_CH) as TIEN_THUOC_CH,") \
	_T(" SUM(TIEN_VAT_TU_CH) as TIEN_VAT_TU_CH,") \
	_T(" SUM(TIEN_THUOC_PM) AS TIEN_THUOC_PM,") \
	_T(" SUM(TIEN_VAT_TU_PM) AS TIEN_VAT_TU_PM,") \
	_T(" SUM(TIEN_MAU) as TIEN_MAU,") \
	_T(" SUM(THU_KHAC) as THU_KHAC,") \
	_T(" SUM(TIEN_AN) as TIEN_AN,") \
	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC) as TONG_THU,") \
	_T(" SUM(TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+TIEN_AN) as TONG_THU1") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT") \
	_T("   Get_patientname(hfe_docno) as HO_TEN,") \
	_T("   hfe_docno as docno,") \
	_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_ADMITDATE ELSE HD_ADMITDATE END NGAY_VAO,") \
	_T("    CASE WHEN HFE_CLASS = 'I' THEN HCR_DISCHARGEDATE ELSE HD_ENDDATE END NGAY_RA,") \
	_T("    CASE WHEN HFE_CLASS = 'I' THEN 'I' ELSE 'II' END CHINDEX,") \
	_T("    trunc(hfe_date) as invoice_date,") \
	_T("    trunc(FAC_POSTEDDATE) as posted_date,") \
	_T("    khoa_thuchien as dept_id,") \
	_T("    hfe_quantity as SO_NGAY_DT,") \
	_T("     TIEN_KHAM,") \
	_T("     TIEN_GIUONG,") \
	_T("     TIEN_CLS,    ") \
	_T("     TIEN_PTTT,") \
	_T("     TIEN_THUOC_CH,") \
	_T("     TIEN_VAT_TU_CH,    ") \
	_T("     TIEN_THUOC_PM,") \
	_T("     TIEN_VAT_TU_PM,") \
	_T("     TIEN_MAU,    ") \
	_T("     THU_KHAC,") \
	_T("     TIEN_AN,") \
	_T("     hfe_itemid") \
	_T("   FROM") \
	_T("     (") \
	//1. Tien kham//
	_T(" SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN he_roomid IN ( 50, 54 )") \
	_T("         THEN CAST(DECODE(he_roomid, 50, 'C15', 54, 'C6') AS NVARCHAR2(3))") \
	_T("         ELSE f.hfe_deptid") \
	_T("       END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,       ") \
	_T("       rl.hfe_patpaid as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_exam ex") \
	_T("     ON (f.hfe_docno   = ex.he_docno") \
	_T("     AND f.hfe_orderid = ex.he_receptidx)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_group      ='D0000'") \
	_T("     AND f.hfe_itemid <> 'D0000006'") \
	_T("     AND f.hfe_patpaid       >0") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	//2. Tien giuong//
	_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       F.Hfe_Quantity,") \
	_T("       CASE") \
	_T("         WHEN (f.hfe_type ='B' OR f.hfe_itemid='D0000006')") \
	_T("         THEN f.hfe_deptid") \
	_T("       END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       rl.hfe_patpaid as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T(" f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND (F.Hfe_Group     IN ('C0000') OR f.hfe_itemid='D0000006')") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	//3.Can lam sang khoi can lam sang C16, C17, A20, C5//
	_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN f.hfe_type     IN ('P','T')") \
	_T("         AND F.Hfe_Group IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("         THEN CAST(DECODE(f.Hfe_Group, 'B1B00', 'C17', 'B1G00', 'C16', 'B1800','C16','B2500','A20','B1E00','C5') AS NVARCHAR2(3))") \
	_T("       END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       rl.hfe_patpaid as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('P','T')") \
	_T("     AND F.Hfe_Group     IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	//4. Phi can lam sang khoi xet nghiem, chan doan hinh anh khong xac dinh ro ten khoa//
	_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN f.hfe_type in ('P','T')") \
	_T("         AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("         THEN Fl.Hfl_Deptid END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       rl.hfe_patpaid as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type   IN ('P', 'T'))") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('T','P')") \
	_T("     AND F.Hfe_Group NOT IN ('B1B00','B1G00','B1800','B2500','B1E00')") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	//5. Phi PTTT//
	_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	/*_T("       CASE") \
	_T("         WHEN f.hfe_type ='O'") \
	_T("         AND HO_PDEPTID  ='B5'") \
	_T("         THEN HO_DEPTID") \
	_T("         ELSE HO_PDEPTID") \
	_T("       END khoa_thuchien,") \*/
	_T("     CASE WHEN f.hfe_type ='O' AND HO_PDEPTID='B5' AND HO_DEPTID is not null THEN  HO_DEPTID ") \
	_T("     WHEN f.hfe_type='O' AND HO_PDEPTID  <>'B5' AND HO_PDEPTID is not null AND HO_DEPTID is not null THEN HO_PDEPTID") \
	_T("     WHEN HO_DEPTID is null then f.hfe_deptid else Fl.Hfl_Deptid END khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       rl.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       f.hfe_patpaid as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN hms_fee_list fl ON (hfe_itemid=fl.hfl_feeid AND f.hfe_type IN ('O'))") \
	_T("     LEFT JOIN hms_operation") \
	_T("     ON ( f.hfe_docno = ho_docno") \
	_T("     AND hfe_orderid  = ho_idx") \
	_T("     AND f.hfe_type   = 'O')") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND F.Hfe_type       ='O'") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	//6.Phi thuoc tra lai tai chinh tu tao phieu//
	_T("     UNION ALL     ") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       rl.hfe_patpaid as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND f.hfe_deptid <> 'B5'") \
	_T("     AND product_org_id NOT IN ('MA','BB')") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("     UNION ALL     ") \
	//7. Phi thuoc khoa duoc tu tao phieu//
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'PM', 'C9') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       rl.hfe_patpaid as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno         = f.hfe_docno)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno = f.hfe_docno and r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid=Rl.Hfe_Itemid)") \
	_T("     INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno = ro.hpo_invoiceno AND f.hfe_orderid=Ro.Hpo_Orderid)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND f.hfe_deptid <> 'B5'") \
	_T("     AND product_org_id NOT IN ('MA','BB')") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	//8.Phi trang bi ma tai chinh tao phieu//
	_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("  r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       rl.hfe_patpaid as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('PM','BB')") \
	_T("     AND f.hfe_deptid <> 'B5'") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("     UNION ALL") \
	//9.Phi trang bi ma trang bi tu tao phieu//	
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("  r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'MA', 'C10') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       rl.hfe_patpaid as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_docno         = f.hfe_docno)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (rl.hfe_docno = f.hfe_docno and r.hfe_invoiceno=rl.hfe_invoiceno AND f.hfe_itemid=Rl.Hfe_Itemid)") \
	_T("     INNER JOIN hms_pharmareturnorder ro ON (r.hfe_invoiceno = ro.hpo_invoiceno AND f.hfe_orderid=Ro.Hpo_Orderid)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('PM','BB')") \
	_T("     AND f.hfe_deptid <> 'B5'") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("     UNION ALL") \
	//10. Tra lai phi thuoc phong mo chi co tai chinh tao phieu
	_T(" SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'PM', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0          AS TIEN_KHAM,") \
	_T("       0          AS TIEN_GIUONG,") \
	_T("       0          AS TIEN_CLS,") \
	_T("       0          AS TIEN_PTTT,") \
	_T("       0          AS TIEN_THUOC_CH,") \
	_T("       0          AS TIEN_VAT_TU_CH,") \
	_T("       rl.hfe_patpaid AS TIEN_THUOC_PM,") \
	_T("       0          AS TIEN_VAT_TU_PM,") \
	_T("       0          AS TIEN_MAU,") \
	_T("       0          AS THU_KHAC,") \
	_T("       0          AS TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status       IN ('P','R')") \
	_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('MA','BB')") \
	_T("     AND f.hfe_deptid = 'B5'") \
	_T("     AND f.hfe_category       IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	//11. Phi vat tu phong mo chi co tai chinh tao phieu
	_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'MA', ho_deptid) AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0          AS TIEN_KHAM,") \
	_T("       0          AS TIEN_GIUONG,") \
	_T("       0          AS TIEN_CLS,") \
	_T("       0          AS TIEN_PTTT,") \
	_T("       0          AS TIEN_THUOC_CH,") \
	_T("       0          AS TIEN_VAT_TU_CH,") \
	_T("       0          AS TIEN_THUOC_PM,") \
	_T("       rl.hfe_patpaid AS TIEN_VAT_TU_PM,") \
	_T("       0          AS TIEN_MAU,") \
	_T("       0          AS THU_KHAC,") \
	_T("       0          AS TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN hms_operation ON (HPO_REFITEM_ID=ho_itemid AND HPO_REFERENCE_ID=ho_idx)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status       IN ('P','R')") \
	_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('PM','BB')") \
	_T("     AND f.hfe_deptid = 'B5'") \
	_T("     AND f.hfe_category       IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	//12.Phi mau tach rieng ra cho khoa C16//
	_T("     UNION ALL") \
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       rl.hfe_patpaid as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN m_productitem_view_vp") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN hms_pharmaorder_view_vp") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND f.hfe_type      IN ('D', 'M', 'R')") \
	_T("     AND product_org_id NOT IN ('MA','PM')") \
	_T("     AND f.hfe_category    IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("     UNION ALL") \
	_T(" SELECT r.hfe_docno,") \
	_T("       r.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("        CASE") \
	_T("         WHEN R.hfe_class IN ('X','I','E')") \
	_T("         AND R.hfe_type   IN ('X','F')") \
	_T("         AND R.HFE_DEPTID IS NOT NULL") \
	_T("         THEN R.HFE_DEPTID      ") \
	_T("         WHEN r.hfe_type  IN ('V')") \
	_T("         AND r.Hfe_Serialno='PC'") \
	_T("         THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15))") \
	_T("         ELSE fl.HFL_DEPTID") \
	_T("       END khoa_thuchien,") \
	_T("       NULL,") \
	_T("       r.hfe_class,") \
	_T("       0        AS TIEN_KHAM,") \
	_T("       0        AS TIEN_GIUONG,") \
	_T("       0        AS TIEN_CLS,") \
	_T("       0        AS TIEN_PTTT,") \
	_T("       0        AS TIEN_THUOC_CH,") \
	_T("       0        AS TIEN_VAT_TU_CH,") \
	_T("       0        AS TIEN_THUOC_PM,") \
	_T("       0        AS TIEN_VAT_TU_PM,") \
	_T("       0        AS TIEN_MAU,") \
	_T("       hfe_cost AS THU_KHAC,") \
	_T("       0        AS TIEN_AN,") \
	_T("       NULL") \
	_T("     FROM hms_fee_refund r") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl") \
	_T("     ON (r.hfe_docno     =rl.hfe_docno") \
	_T("     AND r.hfe_invoiceno = rl.hfe_invoiceno)") \
	_T("     LEFT JOIN hms_fee_list fl  ON (rl.hfe_itemid  =fl.hfl_feeid)") \
	_T("     WHERE 1             =1 %s") \
	_T("     AND r.hfe_status   IN ('P','R')") \
	_T("     AND ((r.hfe_type      ='V' AND r.Hfe_Serialno  ='PC') OR (r.hfe_type    IN ('X','F')))") \
	//13. Chi khac o tai chinh//
	/*_T("     UNION ALL") \
	_T("     SELECT r.hfe_docno,") \
	_T("       r.hfe_type,") \
	_T("       r.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN r.hfe_type  IN ('V')") \
	_T("         AND r.Hfe_Serialno='PC'") \
	_T("         THEN CAST(DECODE(r.hfe_deptid, '', 'PTC') AS NVARCHAR2(15)) END khoa_thuchien,") \
	_T("       NULL,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       hfe_cost as THU_KHAC,") \
	_T("       0 as TIEN_AN,") \
	_T("       NULL") \
	_T("     FROM hms_fee_refund r") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (r.hfe_docno=rl.hfe_docno and r.hfe_invoiceno = rl.hfe_invoiceno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND r.hfe_status    IN ('P','R')") \
	_T("     AND r.hfe_type       ='V'") \
	_T("     AND r.Hfe_Serialno  ='PC'") \*/
	_T("     UNION ALL") \
	//14. Phi an khoa dinh duong ne//	
	_T("     SELECT f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       r.hfe_date,") \
	_T("       r.hfe_cash_id,") \
	_T("       0 as hfe_quantity,") \
	_T("       CASE WHEN f.hfe_deptid in ('C1.1', 'C1.2','C1.3') THEN HCR_ADMITDEPT ELSE f.hfe_deptid END AS khoa_thuchien,") \
	_T("      f.hfe_itemid,") \
	_T("       r.hfe_class,") \
	_T("       0 as TIEN_KHAM,") \
	_T("       0 as TIEN_GIUONG,     ") \
	_T("       0 as TIEN_CLS,") \
	_T("       0 as TIEN_PTTT,") \
	_T("       0 as TIEN_THUOC_CH,") \
	_T("       0 as TIEN_VAT_TU_CH,") \
	_T("       0 as TIEN_THUOC_PM,") \
	_T("       0 as TIEN_VAT_TU_PM,") \
	_T("       0 as TIEN_MAU,") \
	_T("       0 as THU_KHAC,") \
	_T("       rl.hfe_patpaid as TIEN_AN,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN HMS_CLINICAL_RECORD ON (f.hfe_docno=hcr_docno)") \
	_T("     LEFT JOIN Hms_Fee_Refundline rl ON (f.hfe_docno=rl.hfe_docno AND F.Hfe_Fee_Id=Rl.Hfe_Fee_Refundline_Id)") \
	_T("     LEFT JOIN Hms_Fee_Refund r ON (r.hfe_invoiceno = rl.hfe_invoiceno AND r.hfe_docno = rl.hfe_docno)") \
	_T("     WHERE 1              =1 %s") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND F.Hfe_Group     IN ('FF000')") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	_T("     AND r.hfe_desc <> 'Ho\xE0n tr\x1EA3 \x62\x1EC7nh nh\xE2n th\x61nh to\xE1n r\x61 vi\x1EC7n'") \
	_T("   )tbl1") \
	_T("   LEFT JOIN FA_CASH fc ON (fc.FAC_CASH_ID=tbl1.hfe_cash_id)") \
	_T("   LEFT JOIN HMS_DOC d  ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   LEFT JOIN HMS_CLINICAL_RECORD cr   ON ( cr.HCR_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   WHERE 1=1 AND (TIEN_KHAM+TIEN_GIUONG+TIEN_CLS+TIEN_PTTT+TIEN_THUOC_CH+TIEN_VAT_TU_CH+TIEN_THUOC_PM+TIEN_VAT_TU_PM+TIEN_MAU+THU_KHAC+TIEN_AN)>0 %s") \
	_T("   )") \
	_T(" GROUP BY ") \
	_T(" dept_id") \
	_T(" ORDER BY dept_id"),szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere,szWhere, szWhere, szWhere, szWhere,szWhere, szWhere1); \
	return szSQL;
}