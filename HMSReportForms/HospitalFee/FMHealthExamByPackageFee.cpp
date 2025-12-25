#include "stdafx.h"
#include "FMHealthExamByPackageFee.h"
#include "HMSMainFrame.h"
#include "SearchPopup.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMHealthExamByPackageFee* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMHealthExamByPackageFee* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMHealthExamByPackageFee* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMHealthExamByPackageFee* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee *)pWnd)->OnOrderByAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee*) pWnd)->OnDeptLoadData();
}
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMHealthExamByPackageFee*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMHealthExamByPackageFee*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMHealthExamByPackageFee*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMHealthExamByPackageFee*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMHealthExamByPackageFee*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMHealthExamByPackageFee *pVw = (CFMHealthExamByPackageFee *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMHealthExamByPackageFee *pVw = (CFMHealthExamByPackageFee *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMHealthExamByPackageFee *pVw = (CFMHealthExamByPackageFee *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMHealthExamByPackageFee *pVw = (CFMHealthExamByPackageFee *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMHealthExamByPackageFee*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMHealthExamByPackageFee*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMHealthExamByPackageFee*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMHealthExamByPackageFee*)pWnd)->OnAllSelect();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	  ((CFMHealthExamByPackageFee*)pWnd)->OnSODSelect();
}
static int _OnAddFMHealthExamByPackageFeeFnc(CWnd *pWnd){
	 return ((CFMHealthExamByPackageFee*)pWnd)->OnAddFMHealthExamByPackageFee();
} 
static int _OnEditFMHealthExamByPackageFeeFnc(CWnd *pWnd){
	 return ((CFMHealthExamByPackageFee*)pWnd)->OnEditFMHealthExamByPackageFee();
} 
static int _OnDeleteFMHealthExamByPackageFeeFnc(CWnd *pWnd){
	 return ((CFMHealthExamByPackageFee*)pWnd)->OnDeleteFMHealthExamByPackageFee();
} 
static int _OnSaveFMHealthExamByPackageFeeFnc(CWnd *pWnd){
	 return ((CFMHealthExamByPackageFee*)pWnd)->OnSaveFMHealthExamByPackageFee();
} 
static int _OnCancelFMHealthExamByPackageFeeFnc(CWnd *pWnd){
	 return ((CFMHealthExamByPackageFee*)pWnd)->OnCancelFMHealthExamByPackageFee();
}
static int _OnListSearchItemFnc(CWnd *pWnd){
	 ((CFMHealthExamByPackageFee*)pWnd)->OnListSearchItem();
	 return 0;
} 
static int _OnListCheckAllPTTYCFnc(CWnd *pWnd)
{
	((CFMHealthExamByPackageFee*)pWnd)->OnListCheckAllPTTYC();
	return 0;
}
static int _OnListCheckAllBHPTTYCFnc(CWnd *pWnd)
{
	((CFMHealthExamByPackageFee*)pWnd)->OnListCheckAllBHPTTYC();
	return 0;
}
static int _OnListCheckAllDVPTTYCFnc(CWnd *pWnd)
{
	((CFMHealthExamByPackageFee*)pWnd)->OnListCheckAllDVPTTYC();
	return 0;
}


static int _OnListCheckAllTYCFnc(CWnd *pWnd)
{
	((CFMHealthExamByPackageFee*)pWnd)->OnListCheckAllTYC();
	return 0;
}
CFMHealthExamByPackageFee::CFMHealthExamByPackageFee(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMHealthExamByPackageFee::~CFMHealthExamByPackageFee(){
}
void CFMHealthExamByPackageFee::OnCreateComponents()
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
	m_wndDeptLabel.Create(this, _T("Gói khám"), 240, 120, 331, 145);
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
void CFMHealthExamByPackageFee::OnInitializeComponents(){
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
	m_wndDept.SetCheckValue(true);

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
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndDept.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 90);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMHealthExamByPackageFee::OnSetWindowEvents(){
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
	m_wndList.AddEvent(3, _T("Check All DV-PTTYC"), _OnListCheckAllDVPTTYCFnc);
	m_wndList.AddEvent(4, _T("Check All BH-PTTYC"), _OnListCheckAllBHPTTYCFnc);
	m_wndList.AddEvent(5, _T("Search"), _OnListSearchItemFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMHealthExamByPackageFeeFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMHealthExamByPackageFeeFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMHealthExamByPackageFeeFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMHealthExamByPackageFeeFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMHealthExamByPackageFeeFnc, 0, 'T', VK_CONTROL);
	*/

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);


}
void CFMHealthExamByPackageFee::OnDoDataExchange(CDataExchange* pDX)
{
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
void CFMHealthExamByPackageFee::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMHealthExamByPackageFee::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMHealthExamByPackageFee::SetDefaultValues()
{

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_nPatientType = 3;
	m_bSOD = TRUE;
	
}

int CFMHealthExamByPackageFee::SetMode(int nMode){
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

/*void CFMHealthExamByPackageFee::OnYearChange(){
	
} */
/*void CFMHealthExamByPackageFee::OnYearSetfocus(){
	
} */
/*void CFMHealthExamByPackageFee::OnYearKillfocus(){
	
} */
int CFMHealthExamByPackageFee::OnYearCheckValue(){
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
 
void CFMHealthExamByPackageFee::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMHealthExamByPackageFee::OnReportPeriodSelendok()
{
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

/*void CFMHealthExamByPackageFee::OnReportPeriodSetfocus(){
	
}*/
/*void CFMHealthExamByPackageFee::OnReportPeriodKillfocus(){
	
}*/
long CFMHealthExamByPackageFee::OnReportPeriodLoadData(){
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

/*void CFMHealthExamByPackageFee::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMHealthExamByPackageFee::OnFromDateChange(){
	
} */
/*void CFMHealthExamByPackageFee::OnFromDateSetfocus(){
	
} */
/*void CFMHealthExamByPackageFee::OnFromDateKillfocus(){
	
} */
int CFMHealthExamByPackageFee::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMHealthExamByPackageFee::OnToDateChange(){
	
} */
/*void CFMHealthExamByPackageFee::OnToDateSetfocus(){
	
} */
/*void CFMHealthExamByPackageFee::OnToDateKillfocus(){
	
} */
int CFMHealthExamByPackageFee::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMHealthExamByPackageFee::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMHealthExamByPackageFee::OnClerkSelendok(){
	 
}
int CFMHealthExamByPackageFee::OnListCheckAllTYC()
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
int CFMHealthExamByPackageFee::OnListCheckAllPTTYC()
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

int CFMHealthExamByPackageFee::OnListCheckAllDVPTTYC()
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
int CFMHealthExamByPackageFee::OnListCheckAllBHPTTYC()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szItemText;	
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,1);
	if ((_T("BH-PTTYC"))==szItemText.Right(8))
	{
		m_wndList.SetCheck(i, true);
	}
	else m_wndList.SetCheck(i, false);
	}
	return 0;
}

void CFMHealthExamByPackageFee::OnListSearchItem(){
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->ShowPopup(&m_wndList);
}

/*void CFMHealthExamByPackageFee::OnClerkSetfocus(){
	
}*/
/*void CFMHealthExamByPackageFee::OnClerkKillfocus(){
	
}*/
long CFMHealthExamByPackageFee::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMHealthExamByPackageFee::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMHealthExamByPackageFee::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMHealthExamByPackageFee::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMHealthExamByPackageFee::OnStatusSetfocus(){
	
}*/
/*void CFMHealthExamByPackageFee::OnStatusKillfocus(){
	
}*/
long CFMHealthExamByPackageFee::OnStatusLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);

	return 0;
}
/*void CFMHealthExamByPackageFee::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMHealthExamByPackageFee::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMHealthExamByPackageFee::OnOrderBySelendok(){
	 
}
/*void CFMHealthExamByPackageFee::OnOrderBySetfocus(){
	
}*/
/*void CFMHealthExamByPackageFee::OnOrderByKillfocus(){
	
}*/
long CFMHealthExamByPackageFee::OnOrderByLoadData(){
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
/*void CFMHealthExamByPackageFee::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMHealthExamByPackageFee::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;	
		szSQL.Format(_T(" select hfl_feeid as id, hfl_name as name, hfl_deptid as khoa") \
		_T(" from hms_fee_list") \
		_T(" where hfl_typeid='E' %s") \
		_T(" order by hfl_idx"), szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("khoa")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

void CFMHealthExamByPackageFee::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMHealthExamByPackageFee::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMHealthExamByPackageFee::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMHealthExamByPackageFee::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMHealthExamByPackageFee::OnListLoadData(){
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
			szWhere.AppendFormat(_T(" and fac_user_id='%s' "), m_szClerkKey);
	}

	if (m_bSOD)
		//szWhere.AppendFormat(_T(" AND fac_cashbook_id  in ('DVYC','DV-PTTYC','BHYC','BH-PTTYC')"));
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','BH-PTTYC', 'THE-DV-YC','BHYC', 'THE-DV-PTTYC', 'THE-BH-YC', 'THE-BH-PTTYC', 'CK-DV-YC', 'CK-BH-YC','CK-DV-PTTYC', 'CK-BH-PTTYC', 'CASH', 'QR', 'BANK', 'CARD')"));
	else
	//szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'DV' AND fac_cashbook_id  not in ('DVYC','DV-PTTYC')"));
	//szWhere.AppendFormat(_T(" AND fac_cashbook_id %s 'DVYC'"), m_bSOD?_T("="):_T("<>"));
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','BH-PTTYC', 'THE-DV-YC','BHYC', 'THE-DV-PTTYC', 'THE-BH-YC', 'THE-BH-PTTYC', 'CK-DV-YC', 'CK-BH-YC','CK-DV-PTTYC', 'CK-BH-PTTYC', 'CASH', 'QR', 'BANK', 'CARD')"));
	
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T(" FROM fa_cash WHERE fac_invoicetype in('P','R') %s ORDER BY fac_cash_id"), szWhere);
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

void CFMHealthExamByPackageFee::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++) m_wndList.SetCheck(i, TRUE);
	
} 
void CFMHealthExamByPackageFee::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++) m_wndList.SetCheck(i, FALSE);
}

void CFMHealthExamByPackageFee::OnInpatientSelect(){
	
}
void CFMHealthExamByPackageFee::OnOutpatientSelect(){
	
}
void CFMHealthExamByPackageFee::OnDepositSelect(){
	
}
void CFMHealthExamByPackageFee::OnAllSelect(){
	
}
 
void CFMHealthExamByPackageFee::OnSODSelect(){
	OnListLoadData();
}
 
int CFMHealthExamByPackageFee::OnAddFMHealthExamByPackageFee(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMHealthExamByPackageFee::OnEditFMHealthExamByPackageFee(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMHealthExamByPackageFee::OnDeleteFMHealthExamByPackageFee(){
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
 		OnCancelFMHealthExamByPackageFee();
 	}
	return 0;
}
int CFMHealthExamByPackageFee::OnSaveFMHealthExamByPackageFee(){
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
 		//OnFMHealthExamByPackageFeeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMHealthExamByPackageFee::OnCancelFMHealthExamByPackageFee(){
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
int CFMHealthExamByPackageFee::OnFMHealthExamByPackageFeeListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"
void CFMHealthExamByPackageFee::OnPrintSelect()
{

	
}

void CFMHealthExamByPackageFee::OnPrint1stver()
{
	
}

void CFMHealthExamByPackageFee::OnPrint2ndver()
{
		
}
void CFMHealthExamByPackageFee::OnPrintDetail()
{
	
}
void CFMHealthExamByPackageFee::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	
	_msg(_T("Gói khám sức khỏe định nghĩa theo kiểu khám lúc tiếp nhận bệnh nhân! "));

	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[40], nGroupTotal[40];
	for(int i = 0; i < 40; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\HF_DANHSACHBENHNHAN_KHAMBOOKING_CARE.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(0, 5, m_wndDept.GetCurrent(1), FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();

	if (m_szDeptKey.IsEmpty())
	{
		_msg(_T("Hãy chọn gói khám!"));
		return;
	}
	
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
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("gender"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("yob"), tmpStr);		
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("patpaid"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER2);
			
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 40; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\HF_DANHSACHBENHNHAN_KHAMBOOKING_CARE_2.xls"));
	
}

void CFMHealthExamByPackageFee::OnPrint2ndver_(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	bool bNewDate = false, bNewDept = false;
	CString szNewDate, szNewDept, szPos;
	UpdateData();
	if (OnCheckBeforePrint(&rpt, rs) < 0) return;
	CReportSection* pDateGroup = NULL, *pDeptGroup = NULL, *pDetail = NULL;
	OnPrintOther(&rpt);
	while (!rs.IsEOF()){
		//_msg(_T("NewGroup"));
		IsNewGroup(&rpt, &rs, bNewDate, bNewDept);
		//_msg(_T("PrintSummary"));
		//OnPrintGroupSummary(&rpt, bNewDate, bNewDept, pDateGroup, pDeptGroup);
		OnPrintGroupSummary(&rpt, bNewDate, bNewDept);
		//_msg(_T("Group Descr"));
		//OnPrintGroupDescr(&rpt, &rs, bNewDate, bNewDept);
		OnPrintGroupDescr(&rpt, &rs, bNewDate, bNewDept, &pDateGroup, &pDeptGroup);
		//_msg(_T("Detail"));
		OnPrintDetail(&rpt, &rs);
		//OnPrintDetail(&rpt, pDetail, &rs);
		//if (pDetail) pDetail->SetValue(_T("1"), _T("X"));
		//_msg(_T("Calc Data"));

		OnCalcData(&rs, bNewDate, bNewDept);
		rs.MoveNext();
	}
	IsNewGroup(&rpt, &rs, bNewDate, bNewDept);
	OnPrintGroupSummary(&rpt, bNewDate, bNewDept);
	for (int i = 0; i < 18; i++){
		szPos.Format(_T("T%d"), i+7);
		m_nTotal[i] += OnRound(m_nDaySum[i]);
		rpt.GetReportFooter()->SetValue(szPos, ToString(m_nTotal[i]));
	}
	ResetVar();
	rpt.PrintPreview();
}

int CFMHealthExamByPackageFee::OnCheckBeforePrint(CReport* rpt, CRecord& rs){
	CString szSQL;
	szSQL = GetQueryString();
	if (rs.ExecSQL(szSQL) <= 0){
		AfxMessageBox(_T("No Data!"));
		return -1;
	}
	if (!rpt->Init(_T("Reports\\HMS\\HF_DANHSACHBENHNHANANTHEONGAY-THEOKHOA-CHITIET-PTTYC.RPT"))) return -1;
	return 0;
}

void CFMHealthExamByPackageFee::OnPrintOther(CReport* rpt){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReportSection* rptHeader = rpt->GetReportHeader();
	CString tmpStr, szDate;
	if (rptHeader){
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		if (!m_szDeptKey.IsEmpty())
			rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(m_szDeptKey));
		rptHeader->SetValue(_T("InvoiceNos"), m_szCashIDS);
	}
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt->GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt->GetReportFooter()->SetValue(_T("PrintDate"), szDate);
}

void CFMHealthExamByPackageFee::IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept, CReportSection** ppDateGroup, CReportSection** ppDeptGroup){
	//return;
	CString tmpStr, szLabel;
	rs->GetValue(_T("posted_date"), tmpStr);
	bNewDate = tmpStr==m_szPrevDate?false:true;
	if (bNewDate && m_nDaySum[12] > 0)
	   {
		if (m_nDeptSum[12] > 0)
		{
			(*ppDeptGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
			////rpDeptGroup = rpt->AddDetail(rpt->GetGroupFooter(1));
			szLabel.Format(_T("C?ng khoa %s:"), m_szPrevDept);
			if (*ppDeptGroup) (*ppDeptGroup)->SetValue(_T("grand"), szLabel);
		}
		////(*pDateGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
		(*ppDateGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
		szLabel.Format(_T("C?ng ngày %s:"), m_szPrevDate);
		if (*ppDateGroup) (*ppDateGroup)->SetValue(_T("grand"), szLabel);
	}
	m_szPrevDate = tmpStr;
	if (m_szOrderByKey != _T("04")){
		bNewDept = false;
		return;
	}
	if (bNewDate) m_szPrevDept=_T("X");
	rs->GetValue(_T("dept_id"), tmpStr);
	bNewDept = tmpStr==m_szPrevDept?false:true;
	if (bNewDept && m_nDeptSum[12] > 0){
		////(*pDeptGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
		(*ppDeptGroup) = rpt->AddDetail(rpt->GetGroupFooter(1));
		szLabel.Format(_T("C?ng khoa %s:"), m_szPrevDept);
		if (*ppDeptGroup) (*ppDeptGroup)->SetValue(_T("grand"), szLabel);
	}
	m_szPrevDept = tmpStr;
}

void CFMHealthExamByPackageFee::IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept){
	//return;
	CString tmpStr, szLabel;
	rs->GetValue(_T("posted_date"), tmpStr);
	bNewDate = tmpStr==m_szPrevDate?false:true;
	m_szPrevDate = tmpStr;
	if (m_szOrderByKey != _T("04")){
		bNewDept = false;
		return;
	}
	if (bNewDate) m_szPrevDept=_T("X");
	rs->GetValue(_T("dept_id"), tmpStr);
	bNewDept = tmpStr==m_szPrevDept?false:true;
	m_szPrevDept = tmpStr;
}

void CFMHealthExamByPackageFee::OnPrintGroupSummary(CReport* rpt, bool bNewDate, bool bNewDept, CReportSection* pDateGroup, CReportSection* pDeptGroup){
	//return;
	CReportSection* rptGrp = NULL;
	CString szPos;
	//if (bNewDept && m_nDeptSum[12] > 0){
	//	rptGrp = rpt->AddDetail(rpt->GetGroupFooter(1));
	//	if (!rptGrp) return;
	if (pDeptGroup)
		for (int i = 0; i < 18; i++){
			szPos.Format(_T("s%d"), i+7);
			//pDeptGroup->SetValue(_T("grand"), _T("C?ng khoa:"));
			pDeptGroup->SetValue(szPos, ToString(m_nDeptSum[i]));
		}
	//}
	//if (bNewDate && m_nDaySum[12] > 0){
	//	rptGrp = rpt->AddDetail(rpt->GetGroupFooter(1));
	//	if (!rptGrp) return;
	if (pDateGroup)
		for (int i = 0; i < 18; i++){
			szPos.Format(_T("s%d"), i+7);
			//pDateGroup->SetValue(_T("grand"), _T("C?ng ngày:"));
			pDateGroup->SetValue(szPos, ToString(m_nDaySum[i]));
		}
	//}
}

void CFMHealthExamByPackageFee::OnPrintGroupSummary(CReport* rpt, bool bNewDate, bool bNewDept){
	//return;
	CReportSection* rptGrp = NULL;
	CString szPos;
	if (bNewDept && m_nDeptSum[12] > 0){
		rptGrp = rpt->AddDetail(rpt->GetGroupFooter(1));
		if (!rptGrp) return;
		for (int i = 0; i < 18; i++){
			szPos.Format(_T("s%d"), i+7);
			rptGrp->SetValue(_T("grand"), _T("C?ng khoa:"));
			rptGrp->SetValue(szPos, ToString(m_nDeptSum[i]));
		}
	}
	if (bNewDate && m_nDaySum[12] > 0){
		rptGrp = rpt->AddDetail(rpt->GetGroupFooter(1));
		if (!rptGrp) return;
		for (int i = 0; i < 18; i++){
			szPos.Format(_T("s%d"), i+7);
			rptGrp->SetValue(_T("grand"), _T("C?ng ngày:"));
			rptGrp->SetValue(szPos, ToString(OnRound(m_nDaySum[i])));
		}
	}
}

void CFMHealthExamByPackageFee::OnPrintGroupDescr(CReport* rpt, CRecord* rs, bool bNewDate, bool bNewDept){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReportSection* rptGroup = NULL;
	CString tmpStr;
	if (bNewDate){
		rptGroup = rpt->AddDetail(rpt->GetGroupHeader(0));
		if (!rptGroup) return;
		tmpStr.Format(_T("Ngày %s"), CDate::Convert(rs->GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));
		rptGroup->SetValue(_T("GroupName"), tmpStr);
	}
	if (bNewDept)
	{
		rptGroup = rpt->AddDetail(rpt->GetGroupHeader(0));
		if (!rptGroup) return;
		rptGroup->SetValue(_T("GroupName"), pMF->GetDepartmentName(rs->GetValue(_T("dept_id"))));
	}
}

void CFMHealthExamByPackageFee::OnPrintGroupDescr(CReport* rpt, CRecord* rs, bool bNewDate, bool bNewDept, CReportSection** ppDateGroup, CReportSection** ppDeptGroup){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReportSection* rptGroup = NULL;
	CString tmpStr;
	if (bNewDate){
		rptGroup = rpt->AddDetail(rpt->GetGroupFooter(1));
		if (!rptGroup) return;
		*ppDateGroup = rptGroup;
		tmpStr.Format(_T("Ngày %s"), CDate::Convert(rs->GetValue(_T("posted_date")), yyyymmdd, ddmmyyyy));
		rptGroup->SetValue(_T("grand"), tmpStr);
	}
	if (bNewDept)
	{
		rptGroup = rpt->AddDetail(rpt->GetGroupFooter(1));
		if (!rptGroup) return;
		*ppDeptGroup = rptGroup;
		rptGroup->SetValue(_T("grand"), pMF->GetDepartmentName(rs->GetValue(_T("dept_id"))));
	}
}

void CFMHealthExamByPackageFee::OnPrintDetail(CReport* rpt, CRecord* rs){
	CReportSection* rptDetail = rpt->AddDetail();
	CString tmpStr;
	double nTmp = 0;
	int nIndex = 1;	
	rptDetail->SetValue(_T("1"), int2str(nIndex++));
	rptDetail->SetValue(_T("2"), rs->GetValue(_T("ho_ten")));
	rptDetail->SetValue(_T("3"), rs->GetValue(_T("docno")));
	rptDetail->SetValue(_T("4"), rs->GetValue(_T("dept_Id")));
	rptDetail->SetValue(_T("5"), CDate::Convert(rs->GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy));
	rptDetail->SetValue(_T("6"), CDate::Convert(rs->GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy));
	for (int i = 0; i < 18; i++) rptDetail->SetValue(int2str(i+7), rs->GetValue(m_arr_data_name.GetAt(i)));
}

void CFMHealthExamByPackageFee::OnPrintDetail(CReport* rpt, CReportSection* ppDetail, CRecord* rs){
	(ppDetail) = rpt->AddDetail();
	CString tmpStr;
	double nTmp = 0;
	int nIndex = 1;	
	(ppDetail)->SetValue(_T("1"), int2str(nIndex++));
	(ppDetail)->SetValue(_T("2"), rs->GetValue(_T("ho_ten")));
	(ppDetail)->SetValue(_T("3"), rs->GetValue(_T("docno")));
	(ppDetail)->SetValue(_T("4"), rs->GetValue(_T("dept_Id")));
	(ppDetail)->SetValue(_T("5"), CDate::Convert(rs->GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy));
	(ppDetail)->SetValue(_T("6"), CDate::Convert(rs->GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy));
	for (int i = 0; i < 18; i++) (ppDetail)->SetValue(int2str(i+7), rs->GetValue(m_arr_data_name.GetAt(i)));
}

void CFMHealthExamByPackageFee::OnCalcData(CRecord* rs, bool& bNewDate, bool& bNewDept){
	double nTmp = 0;
	for (int i = 0; i < 18; i++){
		rs->GetValue(m_arr_data_name.GetAt(i), nTmp);
		if (bNewDate){	
			m_nTotal[i] += OnRound(m_nDaySum[i]);
			m_nDaySum[i] = 0;
		}
		m_nDaySum[i] += nTmp;
		if (bNewDept)	m_nDeptSum[i] = 0;
		m_nDeptSum[i] += nTmp;
		//m_nTotal[i] += nTmp;
	}
	if (bNewDate) bNewDate = false;
	if (bNewDept) bNewDept = false;
}

void CFMHealthExamByPackageFee::ResetVar(){
	for (int i = 0; i < 18; i++){
		m_nTotal[i] = 0;
		m_nDeptSum[i] = 0;
		m_nDaySum[i] = 0;
	}
	m_szPrevDate.Empty();
	m_szPrevDept.Empty();
}

CString CFMHealthExamByPackageFee::GetQueryString()
{
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

	//szWhere.Format(_T(" and iv.hfe_cash_id in(%s) "), szReceiptStr);
	
	if (nCount <1000)
		szWhere.Format(_T(" i.hfe_cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" i.hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" i.hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" (%s)"), szIds);
	}	

	if (!m_szDeptKey.IsEmpty())
	{
		szWhere2.AppendFormat(_T(" and IS_HEALTH_PATIENT(hfe_docno, '%s') ='Y' "), m_szDeptKey);
	}

				szSQL.Format(_T(" SELECT hfe_docno as docno,") \
				_T(" get_patientname(hfe_docno) as patname,") \
				_T(" HMS_GETSEX(hp_sex)           AS gender,") \
				_T(" to_char(hp_birthdate, 'DD/MM/YYYY') as yob,") \
				_T(" i.hfe_patpaid as patpaid") \
				_T(" FROM HMS_FEE_INVOICE_VIEW_V2 i") \
				_T(" LEFT JOIN hms_patient ON (HFE_PATIENTNO = hp_patientno)") \
				_T(" WHERE %s %s") \
				_T(" and i.hfe_status='P'") \
				_T(" and i.hfe_posted='Y' order by hfe_docno "), szWhere, szWhere2);				

	//AfxMessageBox(szSQL);
	return szSQL;	
}

double CFMHealthExamByPackageFee::OnRound(double nToRound){
	nToRound += 0.5;
	return floor(nToRound);
}