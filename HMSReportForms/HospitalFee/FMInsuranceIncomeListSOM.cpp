#include "stdafx.h"
#include "FMInsuranceIncomeListSOM.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeListSOM *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceIncomeListSOM* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeListSOM *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeListSOM *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeListSOM *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceIncomeListSOM* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeListSOM *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceIncomeListSOM* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeListSOM *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceIncomeListSOM* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeListSOM *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceIncomeListSOM*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceIncomeListSOM*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceIncomeListSOM*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceIncomeListSOM*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceIncomeListSOM*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsuranceIncomeListSOM *pVw = (CFMInsuranceIncomeListSOM *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsuranceIncomeListSOM *pVw = (CFMInsuranceIncomeListSOM *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceIncomeListSOM *pVw = (CFMInsuranceIncomeListSOM *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceIncomeListSOM *pVw = (CFMInsuranceIncomeListSOM *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceIncomeListSOM*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceIncomeListSOM*)pWnd)->OnOutpatientSelect();
}
static void _OnDepositSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceIncomeListSOM*)pWnd)->OnDepositSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceIncomeListSOM*)pWnd)->OnAllSelect();
}
static int _OnAddFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsuranceIncomeListSOM*)pWnd)->OnAddFMInsuranceIncomeList();
} 
static int _OnEditFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsuranceIncomeListSOM*)pWnd)->OnEditFMInsuranceIncomeList();
} 
static int _OnDeleteFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsuranceIncomeListSOM*)pWnd)->OnDeleteFMInsuranceIncomeList();
} 
static int _OnSaveFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsuranceIncomeListSOM*)pWnd)->OnSaveFMInsuranceIncomeList();
} 
static int _OnCancelFMInsuranceIncomeListFnc(CWnd *pWnd){
	 return ((CFMInsuranceIncomeListSOM*)pWnd)->OnCancelFMInsuranceIncomeList();
}
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceIncomeListSOM*)pWnd)->OnSODSelect();
}


CFMInsuranceIncomeListSOM::CFMInsuranceIncomeListSOM(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsuranceIncomeListSOM::~CFMInsuranceIncomeListSOM(){
}
void CFMInsuranceIncomeListSOM::OnCreateComponents(){
	/*
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 535);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 215, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 90, 301, 115);
	m_wndStatus.Create(this,306, 90, 426, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 215, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 10, 475, 120, 500);
	m_wndSoldierWCard.Create(this, _T("Soldier w Card"), 125, 475, 320, 500);
	m_wndFree.Create(this, _T("Free"), 325, 475, 425, 500);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 120, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 125, 505, 225, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 230, 505, 320, 530);
	//m_wndAll.Create(this, _T("All"), 325, 505, 425, 530);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndEDeposit.Create(this, _T("EDeposit"), 325, 505, 425, 530);
	m_wndList.Create(this,10, 150, 425, 470); 
	//m_wndAll.ShowWindow(SW_HIDE);
	*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 96, 55);
	m_wndYear.Create(this,102, 30, 233, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 242, 30, 338, 55);
	m_wndReportPeriod.Create(this,343, 30, 469, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 96, 85);
	m_wndFromDate.Create(this,102, 60, 233, 85); 
	m_wndToDate.Create(this,343, 60, 469, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 242, 60, 338, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 96, 115);
	m_wndClerk.Create(this,102, 90, 233, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 96, 145);
	m_wndOrderBy.Create(this,102, 120, 233, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 242, 90, 338, 115);
	m_wndStatus.Create(this,343, 90, 469, 115); 
	m_wndList.Create(this,10, 150, 469, 470); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 10, 475, 120, 500);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 302, 540, 382, 565);
	m_wndExport.Create(this, _T("Export XLS"), 387, 540, 467, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 120, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 148, 505, 248, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 253, 505, 343, 530);
	m_wndEDeposit.Create(this, _T("EDeposit"), 368, 505, 468, 530);
	m_wndSoldierWCard.Create(this, _T("Soldier w Card"), 148, 475, 343, 500);
	m_wndFree.Create(this, _T("Free"), 368, 475, 468, 500);
	m_wndSOD.Create(this, _T("SOD"), 242, 120, 469, 145);
}
void CFMInsuranceIncomeListSOM::OnInitializeComponents(){
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

void CFMInsuranceIncomeListSOM::OnSetWindowEvents(){
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
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
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
	SetMode(VM_EDIT);


}
void CFMInsuranceIncomeListSOM::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	//DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nPatientType);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndDeposit.GetDlgCtrlID(), m_bDeposit);
	DDX_Check(pDX, m_wndEDeposit.GetDlgCtrlID(), m_bEDeposit);
	DDX_Check(pDX, m_wndSoldierWCard.GetDlgCtrlID(), m_bSoldierWCard);
	DDX_Check(pDX, m_wndFree.GetDlgCtrlID(), m_bFree);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
}
void CFMInsuranceIncomeListSOM::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceIncomeListSOM::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceIncomeListSOM::SetDefaultValues(){
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
	m_bEDeposit=FALSE;
	m_bSoldierWCard = FALSE;
	m_bFree = FALSE;
	m_bSOD = FALSE;
}

int CFMInsuranceIncomeListSOM::SetMode(int nMode){
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

/*void CFMInsuranceIncomeListSOM::OnYearChange(){
	
} */
/*void CFMInsuranceIncomeListSOM::OnYearSetfocus(){
	
} */
/*void CFMInsuranceIncomeListSOM::OnYearKillfocus(){
	
} */
int CFMInsuranceIncomeListSOM::OnYearCheckValue(){
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
 
void CFMInsuranceIncomeListSOM::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
 
void CFMInsuranceIncomeListSOM::OnReportPeriodSelendok(){
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

/*void CFMInsuranceIncomeListSOM::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceIncomeListSOM::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceIncomeListSOM::OnReportPeriodLoadData(){
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

/*void CFMInsuranceIncomeListSOM::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceIncomeListSOM::OnFromDateChange(){
	
} */
/*void CFMInsuranceIncomeListSOM::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceIncomeListSOM::OnFromDateKillfocus(){
	
} */
int CFMInsuranceIncomeListSOM::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsuranceIncomeListSOM::OnToDateChange(){
	
} */
/*void CFMInsuranceIncomeListSOM::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceIncomeListSOM::OnToDateKillfocus(){
	
} */
int CFMInsuranceIncomeListSOM::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsuranceIncomeListSOM::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceIncomeListSOM::OnClerkSelendok(){
	 
}
/*void CFMInsuranceIncomeListSOM::OnClerkSetfocus(){
	
}*/
/*void CFMInsuranceIncomeListSOM::OnClerkKillfocus(){
	
}*/
long CFMInsuranceIncomeListSOM::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsuranceIncomeListSOM::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceIncomeListSOM::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceIncomeListSOM::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMInsuranceIncomeListSOM::OnStatusSetfocus(){
	
}*/
/*void CFMInsuranceIncomeListSOM::OnStatusKillfocus(){
	
}*/
long CFMInsuranceIncomeListSOM::OnStatusLoadData(){
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
/*void CFMInsuranceIncomeListSOM::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceIncomeListSOM::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceIncomeListSOM::OnOrderBySelendok(){
	 
}
/*void CFMInsuranceIncomeListSOM::OnOrderBySetfocus(){
	
}*/
/*void CFMInsuranceIncomeListSOM::OnOrderByKillfocus(){
	
}*/
long CFMInsuranceIncomeListSOM::OnOrderByLoadData(){
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
/*void CFMInsuranceIncomeListSOM::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsuranceIncomeListSOM::OnWithoutGeneralSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMInsuranceIncomeListSOM::OnSODSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
    }
void CFMInsuranceIncomeListSOM::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);
} 
void CFMInsuranceIncomeListSOM::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceIncomeListSOM::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceIncomeListSOM::OnListLoadData(){
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
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC')"));
	else		
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'R' %s ORDER BY fac_cash_id"), szWhere);
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

void CFMInsuranceIncomeListSOM::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMInsuranceIncomeListSOM::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
}

void CFMInsuranceIncomeListSOM::OnInpatientSelect(){
	
}
void CFMInsuranceIncomeListSOM::OnOutpatientSelect(){
	
}
void CFMInsuranceIncomeListSOM::OnDepositSelect(){
	
}
void CFMInsuranceIncomeListSOM::OnAllSelect(){
	
}
 
 
int CFMInsuranceIncomeListSOM::OnAddFMInsuranceIncomeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsuranceIncomeListSOM::OnEditFMInsuranceIncomeList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceIncomeListSOM::OnDeleteFMInsuranceIncomeList(){
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
int CFMInsuranceIncomeListSOM::OnSaveFMInsuranceIncomeList(){
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
int CFMInsuranceIncomeListSOM::OnCancelFMInsuranceIncomeList(){
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
int CFMInsuranceIncomeListSOM::OnFMInsuranceIncomeListListLoadData(){
	return 0;
}


#include "FMInsurancePostedReceiptVoucherList.h"

void CFMInsuranceIncomeListSOM::OnPrintSelect(){
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

void CFMInsuranceIncomeListSOM::OnPrint1stver(){
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

void CFMInsuranceIncomeListSOM::OnPrint2ndver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[20], nGroupTotal1[20], nGrands[20];
	for (int i = 0; i < 20; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
		nGrands[i] = 0;
	}

	CMap<CString, LPCTSTR, CString, LPCTSTR> sIndex;

	sIndex[_T("I")] = _T("Thu n\x1ED9i tr\xFA");
	sIndex[_T("II")] = _T("Thu ngo\x1EA1i tr\xFA");
	sIndex[_T("III")] = _T("Thu t\x1EA1m g\x1EEDi n\x1ED9i tr\xFA");
	sIndex[_T("IV")] = _T("Thu t\x1EA1m g\x1EEDi ngo\x1EA1i tr\xFA");


	szSQL = GetQueryString2();
//_msg(_T("%s"), szSQL);
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		if (nCount < 0)
			_msg(_T("%s"), szSQL);
		else
			_fmsg(_T("%s"), szSQL);
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOANTHUBENHNHANBHYT.RPT")))
		return;

	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("cung_chi_tra"));
	data_name.Add(_T("thu_chenh"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("cong"));
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
_tprintf(_T("\r\n2"));

rptHeader->SetValue(_T("Invoices"), m_szCashIDS);

	CString szNewDept, szOldDept;
	long nCashID, nOldCashID=0;
	int col = 6;
	int nsum = (int)data_name.GetCount()-1;
	CRecord rsx(&pMF->m_db);
	CString szInvoiceDate, szInvoiceNo, szUserID;
	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("chindex"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{

			if ((m_szOrderByKey == _T("04") || m_szOrderByKey == _T("05")) && nGrands[nsum] > 0)
			{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
			}

			if (nGroupTotal1[nsum] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				CReportItem *obj = rptGroup->GetItem(_T("SubTotal"));
				if(obj)
				{
					tmpStr.Format(_T("\x43\x1ED9ng (%s)"), szOldLev1);
					obj->SetText(tmpStr);
				}
				for (int i = 0; i < data_name.GetCount(); i++)
				{

					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i+col);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
			{
				sIndex.Lookup(szNewLev1, tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldLev1 = szNewLev1;
			nIdx = 1;
			for (int i =0; i < data_name.GetCount(); i++)
			{
				nGrands[i] = 0;
			}

		}
		if(m_szOrderByKey == _T("04"))
		{
			rs.GetValue(_T("deptid"), szNewDept);
			if(szNewDept != szOldDept)
			{
				szOldDept = szNewDept;
				if (nGrands[nsum] > 0)
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
				}

				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
				if (rptGroup)
				{
					tmpStr.Format(_T("Kho\x61 %s"), szNewDept);
					rptGroup->SetValue(_T("GroupName"), tmpStr);
				}
			}
		}


		if(m_szOrderByKey == _T("05"))
		{
			rs.GetValue(_T("cash_id"), nCashID);
			if(nCashID != nOldCashID)
			{
				nOldCashID = nCashID;

				if (nGrands[nsum] > 0)
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++)
					{
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
				if(grp)
				{
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("GroupName"), tmpStr);
				}
				nOldCashID = nCashID;

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
	{
		if (nGrands[nsum] > 0)
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < data_name.GetCount(); i++)
					{
						tmpStr.Format(_T("%f"), nGrands[i]);
						szPos.Format(_T("s%d"), i+col);
						rptGroup->SetValue(szPos, tmpStr);
						nGrands[i] = 0;
					}
				}

	}
_tprintf(_T("\r\n3"));
	if (nGroupTotal1[nsum] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+col);
			rptGroup->SetValue(szPos, tmpStr);
		}
	}
_tprintf(_T("\r\n4"));
	if (nTotal[nsum] > 0)
	{
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("t%d"), i+col);
			rpt.GetReportFooter()->SetValue(szPos, tmpStr);
		}
	}
_tprintf(_T("\r\n5"));
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[nsum]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);


	rpt.PrintPreview();
}

void CFMInsuranceIncomeListSOM::OnPrint3rdver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, tmpStr2, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[22], nGroupTotal1[22], nGrands[22];
	for (int i = 0; i < 22; i++){
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
		nGrands[i] = 0;
	}

	CMap<CString, LPCTSTR, CString, LPCTSTR> sIndex;

	sIndex[_T("I")] = _T("Thu n\x1ED9i tr\xFA");
	sIndex[_T("II")] = _T("Thu ngo\x1EA1i tr\xFA");
	sIndex[_T("III")] = _T("Thu t\x1EA1m g\x1EEDi v\xE0o vi\x1EC7n");
	sIndex[_T("IV")] = _T("Thu t\x1EA1m g\x1EEDi ngo\x1EA1i tr\xFA");

	szSQL = GetQueryString3();
    //_msg(_T("%s"), szSQL);
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);

	if (rs.IsEOF()){
		if (nCount < 0) _msg(_T("%s"), szSQL);
		else _fmsg(_T("%s"), szSQL);
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOANTHUBENHNHANBHYT_1PTTYC.RPT")))
		return;
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("cung_chi_tra"));
	data_name.Add(_T("phi_kham"));
	data_name.Add(_T("phi_giuong"));
	data_name.Add(_T("phi_pttt"));
	data_name.Add(_T("phi_xetnghiem"));
	data_name.Add(_T("phi_cdha"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("phi_thuoc"));
	data_name.Add(_T("phi_vatu"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_khac"));	
	data_name.Add(_T("cong"));	
	data_name.Add(_T("tam_gui"));	
	//data_name.Add(_T("thu_chinh_sach"));	
	data_name.Add(_T("cong_thu"));

	rptHeader = rpt.GetReportHeader();
	if (rptHeader){
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
	int col = 4;
	int nsum = (int)data_name.GetCount()-1;
	CRecord rsx(&pMF->m_db);
	CString szInvoiceDate, szInvoiceNo, szUserID;
	while (!rs.IsEOF()){
		//Group Seperation
		rs.GetValue(_T("chindex"), szNewLev1);
		if (szOldLev1 != szNewLev1){

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
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("docno")));
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
 
void CFMInsuranceIncomeListSOM::OnExportSelect(){
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

CString CFMInsuranceIncomeListSOM::GetQueryString3(){
	CString szSQL, szWhere;
	CString szDepts, szObjects, szReceiptStr, szIESQL, szOutpatientSQL, szOrderBy, szFeeType;
	szReceiptStr = _T("-1");
	for (int i =0; i < m_wndList.GetItemCount(); i++)
		if(m_wndList.GetCheck(i)){
			if(!szReceiptStr.IsEmpty())
				szReceiptStr.AppendFormat(_T(","));
			szReceiptStr.AppendFormat(_T("%ld"), str2long(m_wndList.GetItemText(i,0)));
		}

	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
	if(m_szOrderByKey == _T("01"))
		szOrderBy.Format(_T(" , NLSSORT(firstname, 'NLS_SORT=VIETNAMESE'), NLSSORT(midname, 'NLS_SORT=VIETNAMESE'), NLSSORT(surname, 'NLS_SORT=VIETNAMESE') "));
	else if(m_szOrderByKey == _T("02")) szOrderBy.Format(_T(" , docno "));
	else if(m_szOrderByKey == _T("03")) szOrderBy.Format(_T(" ,invoice_date "));
	else if(m_szOrderByKey == _T("04")) szOrderBy.Format(_T(" , deptid "));
	else if(m_szOrderByKey == _T("05")) szOrderBy.Format(_T(" , cash_id, firstname "));
		
	//Filter by Type
	/*if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and chindex = 'I' "));
	}
	if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and chindex = 'II' "));
	}
	if(m_nPatientType == 2)
	{
		szWhere.AppendFormat(_T(" and chindex = 'III' "));
	}*/
	if (m_bInpatient) szFeeType+=szFeeType.IsEmpty()?_T("'I'"):_T(", 'I'");
	if (m_bOutpatient) szFeeType+=szFeeType.IsEmpty()?_T("'II'"):_T(", 'II'");
	if (m_bDeposit)	szFeeType+=szFeeType.IsEmpty()?_T("'III'"):_T(", 'III'");
	if (m_bEDeposit)	szFeeType+=szFeeType.IsEmpty()?_T("'IV'"):_T(", 'IV'");
	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if (m_bWithoutGeneral) szWhere.AppendFormat(_T(" AND hfe_general_rank = 'Y'"));
	if (m_bFree) szWhere.AppendFormat(_T(" AND mien_giam > 0"));
	if (m_bSoldierWCard) szWhere.AppendFormat(_T(" AND substr(cardno, 1, 2) = 'QN'"));
	szSQL.Format(_T(" SELECT *") \
	_T(" FROM HF_INSURANCEINCOME_VIEW3") \
	_T(" WHERE cash_id > 0 %s ") \
	_T(" ORDER BY chindex %s"), szWhere, szOrderBy);	
	return szSQL;	
}
 
CString CFMInsuranceIncomeListSOM::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szDepts, szObjects, szReceiptStr;
	/*for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}*/
	szReceiptStr.Empty();

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
		szWhere.Format(_T(" AND i.hfe_objectid <> 7 AND i.hfe_cash_id IN (%s) AND i.hfe_status = 'P'"), szReceiptStr);
	}
	else
	{
		szWhere.Format(_T(" AND i.hfe_objectid <> 7 AND i.hfe_cash_id > 0 AND i.hfe_status = 'P' ") \
					_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		if (!szDepts.IsEmpty())
			szWhere.AppendFormat(_T(" AND i.hfe_deptid IN (%s)"), szDepts);
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND i.hfe_staff = '%s'"), m_szClerkKey);
		if (!szObjects.IsEmpty())
			szWhere.AppendFormat(_T(" AND i.hfe_objectid IN (%s)"), szObjects);
	}
	//Edited 1st
	//Added else to case
	//2nd
	//Divide fee into 2 kind:(OPT_L, HITECH_L) AND other fee
	//3rd
	//veo cot song
	//BN 100%
	szSQL.Format(_T("SELECT * FROM (")
				_T(" SELECT    Get_patientname(doc_no)                                                      patient_name, ") \
				_T("           hfe_date, ") \
				_T("           CASE WHEN Coalesce(hp_rank, 0) > 0 THEN Get_syssel_desc('hms_rank', hp_rank) ") \
				_T("           ELSE Get_objectname(object_id) ") \
				_T("           END                                                                          rank, ") \
				_T("           doc_no, ") \
				_T("           hcr_recordno                                                                 record_no, ") \
				_T("           CASE WHEN hp_workplace IS NOT NULL THEN hp_workplace ") \
				_T("           ELSE Cast(hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS NVARCHAR2(256)) ") \
				_T("           END                                                                          unit, ") \
				_T("           dept_id, ") \
				_T("           hcr_sumtreat                                                                 treatment_days, ") \
				_T("           CEIL(SUM(deposit_extraction))                                                      deposit_extraction, ") \
				_T("           CEIL(SUM(food_fee))                                                                food_fee, ") \
				_T("           CEIL(SUM(food_fee - deposit_extraction))                                           extra_amount, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 AND SUM(pol_amt) > 0 THEN CEIL(SUM(scoliosis_polamt-food_fee)) ELSE CEIL(SUM(pol_amt)) END pol_amt, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 AND SUM(ins_amt) > 0 THEN CEIL(SUM(scoliosis_insamt-food_fee)) ELSE CEIL(SUM(ins_amt)) END ins_amt, ") \
				_T("           CEIL(SUM(other_amt))                                                               other_amt, ") \
				_T("           CEIL(SUM(deposit))                                                                 deposit, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 THEN CEIL(SUM(deposit + scoliosis_insamt + scoliosis_polamt + other_amt - deposit_extraction))") \
				_T("			ELSE CEIL(SUM(deposit + ins_amt + pol_amt + other_amt + food_fee - deposit_extraction)) END total_income ") \
				_T(" FROM      (SELECT hfe_docno   doc_no, ") \
				_T("				   i.hfe_objectid object_id,") \
				_T("                   hfe_date, ") \
				_T("                   hfe_deptid  dept_id, ") \
				_T("                   hfe_deposit deposit_extraction, ") \
				_T("                   0           food_fee, ") \
				_T("                   0           pol_amt, ") \
				_T("                   0           ins_amt, ") \
				_T("                   0           other_amt, ") \
				_T("                   0           deposit, ") \
				_T("				   0 is_scoliosis,") \
				_T("				   0 scoliosis_insamt, ") \
				_T("				   0 scoliosis_polamt ") \
				_T("            FROM   hms_fee_invoice i") \
				_T("            WHERE  hfe_class IN ( 'A', 'I' ) ") \
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT    i.hfe_docno, ") \
				_T("					  i.hfe_objectid object_id,") \
				_T("                      i.hfe_date, ") \
				_T("                      i.hfe_deptid, ") \
				_T("                      0   deposit_extraction, ") \
				_T("                      CASE WHEN f.hfe_type = 'F' THEN f.hfe_cost ") \
				_T("                      ELSE 0 ") \
				_T("                      END food_fee, ") \
				_T("                      CASE WHEN ( f.hfe_type NOT IN ('F') ") \
				_T("                             AND i.hfe_objectid IN ( 1, 3, 8, 13 ) ) THEN f.hfe_patpaid ELSE 0 END pol_amt, ") \
				_T("                      CASE WHEN ( f.hfe_type NOT IN ('F') ") \
				_T("                             AND i.hfe_objectid NOT IN ( 1, 3, 8, 13, 7) ) THEN f.hfe_patpaid ELSE 0 END ins_amt, ") \
				_T("                      0   other_amt, ") \
				_T("                      0   deposit, 0, 0, 0 ") \
				_T("            FROM      hms_fee_invoice i ") \
				_T("            LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno ") \
				_T("                                     AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T("            WHERE     f.hfe_status = 'P' ") \
				_T("				  AND f.hfe_category <> 'Y'") \
				_T("                  AND i.hfe_class IN ( 'A', 'I' ) AND f.hfe_feegroup NOT IN ('OPT_L', 'HITECH_L') ") 
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT    i.hfe_docno, ") \
				_T("					  i.hfe_objectid object_id,") \
				_T("                      i.hfe_date, ") \
				_T("                      i.hfe_deptid, ") \
				_T("                      0   deposit_extraction, ") \
				_T("                      CASE WHEN f.hfe_type = 'F' THEN f.hfe_cost ") \
				_T("                      ELSE 0 ") \
				_T("                      END food_fee, ") \
				_T("                      CASE WHEN ( f.hfe_type NOT IN ('F') ") \
				_T("                             AND i.hfe_objectid IN ( 1, 3, 8, 13 ) ) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0 END pol_amt, ") \
				_T("                      CASE WHEN ( f.hfe_type NOT IN ('F') ") \
				_T("                             AND i.hfe_objectid NOT IN ( 1, 3, 8, 13, 7 ) ) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0 END ins_amt, ") \
				_T("                      0   other_amt, ") \
				_T("                      0   deposit, ") \
				_T("					  CASE WHEN ho_scoliosis = 'Y' THEN 1 ELSE 0 END,") \
				_T("					  CASE WHEN ho_scoliosis = 'Y' AND i.hfe_objectid NOT IN (1, 3, 8, 13) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0 END, ") \
				_T("					  CASE WHEN ho_scoliosis = 'Y' AND i.hfe_objectid IN (1, 3, 8, 13) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0 END ") \
				_T("            FROM      hms_fee_invoice i ") \
				_T("            LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno ") \
				_T("                                     AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T("			LEFT JOIN hms_operation ON (f.hfe_orderid = ho_idx AND f.hfe_docno = ho_docno)") \
				_T("            WHERE     f.hfe_status = 'P' ") \
				_T("				  AND f.hfe_category <> 'Y'") \
				_T("                  AND i.hfe_class IN ( 'A', 'I' ) AND f.hfe_type = 'V' ") \
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT i.hfe_docno, ") \
				_T("				   i.hfe_objectid object_id,") \
				_T("                   i.hfe_date, ") \
				_T("                   i.hfe_deptid, ") \
				_T("                   0          deposit_extraction, ") \
				_T("                   0          food_fee, ") \
				_T("                   0          pol_amt, ") \
				_T("                   0          ins_amt, ") \
				_T("                   0          other_amt, ") \
				_T("                   i.hfe_amount deposit, 0, 0, 0") \
				_T("            FROM   hms_fee_deposit i") \
				_T("            WHERE  1=1 AND i.hfe_class IN ( 'A', 'I' ) ") \
				_T("			%s) ") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = doc_no ) ") \
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
				_T("              object_id, ") \
				_T("              hcr_sumtreat ") \
				_T(" ORDER     BY patient_name)") \
				_T(" WHERE total_income > 0"),szWhere, szWhere, szWhere, szWhere);
_msg(_T("%s"), szSQL);

	return szSQL;
}


CString CFMInsuranceIncomeListSOM::GetQueryString2(){
	CString szSQL, szWhere;
	CString szDepts, szObjects, szReceiptStr, szIESQL, szOutpatientSQL, szOrderBy, szFeeType;
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

	szWhere.Format(_T(" and cash_id in(%s) "), szReceiptStr);
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(" , NLSSORT(firstname, 'NLS_SORT=VIETNAMESE'), NLSSORT(midname, 'NLS_SORT=VIETNAMESE'), NLSSORT(surname, 'NLS_SORT=VIETNAMESE') "));
	}
	else if(m_szOrderByKey == _T("02"))
	{
		szOrderBy.Format(_T(" , docno "));
	}
	else if(m_szOrderByKey == _T("03"))
	{
		szOrderBy.Format(_T(" ,invoice_date "));
	}
	else if(m_szOrderByKey == _T("04"))
	{
		szOrderBy.Format(_T(" , deptid "));
	}
	else if(m_szOrderByKey == _T("05"))
	{
		szOrderBy.Format(_T(" , cash_id, firstname "));
	}
		
	//Filter by Type
	/*if(m_nPatientType == 0)
	{
		szWhere.AppendFormat(_T(" and chindex = 'I' "));
	}
	if(m_nPatientType == 1)
	{
		szWhere.AppendFormat(_T(" and chindex = 'II' "));
	}
	if(m_nPatientType == 2)
	{
		szWhere.AppendFormat(_T(" and chindex = 'III' "));
	}*/
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
	if (m_bWithoutGeneral)
		szWhere.AppendFormat(_T(" AND hfe_general_rank = 'Y'"));
	szSQL.Format(_T(" SELECT *") \
	_T(" FROM HF_INSURANCEINCOME_VIEW") \
	_T(" WHERE cash_id > 0 %s ") \
	_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
		return szSQL;

	szSQL.Format(_T(" SELECT chindex,") \
_T("   pname,") \
_T(" firstname, ") \
_T("   docno,") \
_T("   discharge_date,") \
_T("   invoice_date,") \
_T("   deptid,") \
_T("   cash_id,") \
_T("   SUM(deposit_paid)    AS trich_tam_gui,") \
_T("   SUM(ttlcost)         AS tong_vien_phi,") \
_T("   SUM(inspaid)         AS BHTT,") \
_T("   SUM(patpaid)         AS cung_chi_tra,") \
_T("   SUM(foodamount)      AS tien_an,") \
_T("   SUM(diffamount)      AS thu_chenh,") \
_T("   SUM(policyamount)    AS thu_chinh_sach,") \
_T("   SUM(otherreceipt)    AS thu_khac,") \
_T("   SUM(grand_amount)    AS cong,") \
_T("   SUM(deposit)         AS tam_gui,") \
_T("   SUM(outpatient_cost) AS ngoai_tru,") \
_T("   SUM(freeamount) AS mien_giam,") \
_T("   SUM(grand_receipt)   AS cong_thu") \
_T(" FROM") \
_T("   (SELECT fac_cash_id as cash_id, hfe_index AS chindex,") \
_T("     trim(hp_surname") \
_T("     ||' '") \
_T("     ||hp_midname") \
_T("     ||' '") \
_T("     ||hp_firstname) AS pname,") \
_T(" hp_firstname as firstname, ") \
_T("     hfe_docno       AS docno,") \
_T("     CASE") \
_T("       WHEN hfe_index = 'I'") \
_T("       THEN TO_CHAR(hcr_dischargedate,'DD/MM/YYYY')") \
_T("       WHEN hfe_index = 'III'") \
_T("       THEN TO_CHAR(hd_enddate, 'DD/MM/YYYY')") \
_T("       ELSE TO_CHAR(hfe_date,'DD/MM/YYYY')") \
_T("     END                                                                                          AS discharge_date,") \
_T("     TO_CHAR(hfe_date, 'DD/MM/YYYY')                                                              AS invoice_date,") \
_T(" hfe_deptid as deptid, ") \
_T("     hfe_deposit                                                                                  AS deposit_paid,") \
_T("     hfe_amount+hfe_otherreceipt                                                                  AS ttlcost,") \
_T("     hfe_discount                                                                                 AS inspaid,") \
_T("     hfe_patpaid1                                                                                 AS patpaid,") \
_T("     hfe_foodamount                                                                               AS foodamount,") \
_T("     hfe_diffcost                                                                AS diffamount,") \
_T("     hfe_policyamount                                                                             AS policyamount,") \
_T("     hfe_otherreceipt                                                                             AS otherreceipt,") \
_T("     hfe_patpaid1 + hfe_diffcost + hfe_otherreceipt  +hfe_foodamount                              AS grand_amount,") \
_T("     hfe_tamgui                                                                                   AS deposit,") \
_T("     hfe_ngoaitru                                                                                 AS outpatient_cost,") \
_T("     hfe_freeamt                                                                                 AS freeamount,") \
_T("     hfe_patpaid1 + hfe_diffcost + hfe_foodamount+ hfe_otherreceipt + hfe_tamgui - hfe_deposit -hfe_freeamt AS grand_receipt") \
_T("   FROM fa_cash") \
_T(" LEFT JOIN") \
_T("     (SELECT 'I' AS hfe_index,") \
_T("       hfe_cash_id,") \
_T("       hfe_docno,") \
_T("       hfe_date,") \
_T("       hfe_deptid,") \
_T("       hfe_deposit,") \
_T("       hfe_amount,") \
_T("       hfe_inspaid,") \
_T("       hfe_discount,") \
_T("       CASE") \
_T("         WHEN hfe_class = 'I'") \
_T("         THEN") \
_T("           (SELECT COALESCE(SUM((f.hfe_inspaid-f.hfe_discount)), 0) ") \
_T("           FROM hms_fee f") \
_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
_T("           AND SUBSTR(f.hfe_group, 1,2)      <> 'FF'") \
_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )") \
_T(" and f.hfe_feegroup not in('OPT_L') ") \
_T("           )") \
_T("         ELSE hfe_inspaid-hfe_discount") \
_T("       END AS hfe_patpaid1,") \
_T("       CASE") \
_T("         WHEN hfe_class = 'I'") \
_T("         THEN") \
_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) ") \
_T("           FROM hms_fee f") \
_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
_T("           AND SUBSTR(f.hfe_group, 1,2)      ='FF'") \
_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )") \
_T("           )") \
_T("         ELSE 0") \
_T("       END AS hfe_foodamount,") \
_T("       CASE") \
_T("         WHEN hfe_class = 'I'") \
_T("         THEN") \
_T("           (SELECT COALESCE(SUM((f.hfe_diffcost)), 0) ") \
_T("           FROM hms_fee f") \
_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno and f.hfe_diffcost > 0 ") \
_T("           AND SUBSTR(f.hfe_group, 1,2)      <> 'FF'") \
_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )") \
_T(" and f.hfe_feegroup not in('OPT_L') ") \
_T("           )") \
_T("         ELSE hfe_diffcost ") \
_T("       END AS hfe_diffcost,") \
_T("       CASE") \
_T("         WHEN hfe_class = 'I'") \
_T("         THEN") \
_T("           (SELECT COALESCE(SUM(hfe_cost-hfe_discount), 0)") \
_T("           FROM hms_fee f") \
_T("           WHERE f.hfe_docno             = i.hfe_docno") \
_T("           AND f.hfe_invoiceno           = i.hfe_invoiceno") \
_T("           AND f.hfe_status             IN( 'P', 'R' )") \
_T("           AND NVL(f.hfe_category, 'N') IN( 'BQP', 'BBV' )") \
_T("           )") \
_T("         ELSE 0") \
_T("       END AS hfe_policyamount,") \
_T("       0   AS hfe_otherreceipt,") \
_T("       0   AS hfe_tamgui,") \
_T("       0   AS hfe_ngoaitru, hfe_freeamount as hfe_freeamt ") \
_T("     FROM hms_fee_invoice i") \
_T("     WHERE hfe_status = 'P'") \
_T("     AND hfe_payment >= 0") \
_T("     AND hfe_refund   = 0") \
_T("     AND hfe_type    <> 'O'") \
_T("     AND hfe_class    = 'I'") \
_T("     UNION ALL") \
_T("     SELECT 'I' AS hfe_index,") \
_T("       hfe_cash_id,") \
_T("       hfe_docno,") \
_T("       hfe_date,") \
_T("       hfe_deptid,") \
_T("       0           AS hfe_deposit,") \
_T("       0           AS hfe_amount,") \
_T("       0           AS hfe_inspaid,") \
_T("       0           AS hfe_discount,") \
_T("       0           AS hfe_patpaid1,") \
_T("       0           AS hfe_foodamount,") \
_T("       0           AS hfe_diffcost,") \
_T("       0           AS hfe_policyamount,") \
_T("       hfe_payment AS hfe_othamount,") \
_T("       0           AS hfe_tamgui,") \
_T("       0           AS hfe_ngoaitru,  hfe_freeamount as freeamount ") \
_T("     FROM hms_fee_invoice i") \
_T("     WHERE hfe_status = 'P'") \
_T("     AND hfe_payment >= 0") \
_T("     AND hfe_refund   = 0") \
_T("     AND hfe_type     = 'O'") \
_T("     AND hfe_class    = 'I'") \
_T("     UNION ALL") \
_T("    SELECT 'III' AS hfe_index,") \
_T("       hfe_cash_id,") \
_T("       hfe_docno,") \
_T("       hfe_date,") \
_T("       hfe_deptid,") \
_T("       0          AS hfe_deposit,") \
_T("       0          AS hfe_amount,") \
_T("       0          AS hfe_inspaid,") \
_T("       0          AS hfe_discount,") \
_T("       0          AS hfe_patpaid1,") \
_T("       0          AS hfe_foodamount,") \
_T("       0          AS hfe_diffcost,") \
_T("       0          AS hfe_policyamount,") \
_T("       0          AS hfe_othamount,") \
_T("       hfe_amount AS hfe_tamgui,") \
_T("       0          AS hfe_ngoaitru,  0 as freeamount ") \
_T("     FROM hms_fee_deposit i") \
_T("     WHERE hfe_status IN( 'P', 'R' )") \
_T("     UNION ALL") \
_T("     SELECT 'II' AS hfe_index,") \
_T("       hfe_cash_id,") \
_T("       hfe_docno,") \
_T("       hfe_date,") \
_T("       hfe_deptid,") \
_T("       hfe_deposit,") \
_T("       hfe_amount,") \
_T("       hfe_inspaid,") \
_T("       hfe_discount,") \
_T("       hfe_copayment AS hfe_patpaid1,") \
_T("       0             AS hfe_foodamount,") \
_T("       hfe_diffcost,") \
_T("       0           AS hfe_policyamount,") \
_T("       0           AS hfe_otherreceipt,") \
_T("       0           AS hfe_tamgui,") \
_T("       hfe_patpaid AS hfe_ngoaitru,  hfe_freeamount as freeamount ") \
_T("     FROM hms_fee_invoice i") \
_T("     WHERE hfe_status = 'P'") \
_T("     AND hfe_payment >= 0") \
_T("     AND hfe_refund   = 0") \
_T("     AND hfe_class   <> 'I'") \
_T("     ) tblInvoice") \
_T("   ON( hfe_cash_id = fac_cash_id )") \
_T("   LEFT JOIN hms_doc") \
_T("   ON(hd_docno = hfe_docno)") \
_T("   LEFT JOIN hms_clinical_record") \
_T("   ON(hcr_docno = hfe_docno)") \
_T("   LEFT JOIN hms_patient") \
_T("   ON(hp_patientno                     = hd_patientno)") \
_T("   WHERE SUBSTR(fac_cashbook_id, 1, 2) = 'BH' %s ") \
_T("   ) fTbl") \
_T(" GROUP BY chindex, cash_id, ") \
_T("   discharge_date,") \
_T("   invoice_date,") \
_T("   docno,") \
_T("   pname, firstname, deptid  ") \
_T(" ORDER BY chindex %s") , szWhere, szOrderBy);

	return szSQL;
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
		szWhere.Format(_T(" AND object_id <> 7 AND cash_id > 0 ") \
					_T(" AND locked_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		if (!szDepts.IsEmpty())
			szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDepts);
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND staff = '%s'"), m_szClerkKey);
		if (!szObjects.IsEmpty())
			szWhere.AppendFormat(_T(" AND object_id IN (%s)"), szObjects);
	}
	if (m_bWithoutGeneral)
		szWhere.AppendFormat(_T(" AND general_rank <> 'Y'"));
	szOrderBy = _T(" ORDER BY dept_id, doc_no");
//	if (m_bOrderByName)
		szOrderBy = _T(" ORDER BY patient_name");
	szWhere.AppendFormat(_T(" AND Length(card_no) > 0 AND invoice_status IN ( 'P', 'R' )") \
						 _T(" AND payment > 0 AND clinical_status = 'T'"));


	szIESQL.Format(_T(" SELECT    i.hfe_docno doc_no, ") \
				_T("		   NVL(i.hfe_general_rank, 'N') general_rank,") \
				_T("           i.hfe_deptid dept_id, ") \
				_T("		   i.hfe_date invoice_date,") \
				_T("		   hcr_admitdate admit_date,") \
				_T("           Get_patientname(i.hfe_docno) patient_name, ") \
				_T("           i.hfe_deposit deposit, ") \
				_T("           i.hfe_amount total_amount, ") \
				_T("           i.hfe_discount inspaid, ") \
				_T("           i.hfe_inspaid - i.hfe_discount pat_paid, ") \
				_T("           f.fee_food, ") \
				_T("		   i.hfe_otherpaid other_paid,") \
				_T("		   CASE WHEN i.hfe_type = 'O' THEN hfe_amount ELSE 0 END other_receipt,") \
				_T("		   i.hfe_freeamount fa,") \
				_T("           CASE WHEN is_scoliosis > 0 THEN l_diffcost ELSE f.diff_cost END diff_cost, ") \
				_T("           i.hfe_patpaid total_patpaid, ") \
				_T("           i.hfe_payment receipt_amount, ") \
				_T("		   hc_cardno card_no,") \
				_T("		   i.hfe_status invoice_status,") \
				_T("		   NVL(hd_outpatient, 'N') is_outpatient,") \
				_T("		   i.hfe_objectid object_id,") \
				_T("		   i.hfe_cash_id cash_id,") \
				_T("		   i.hfe_lockeddate locked_date,") \
				_T("		   i.hfe_payment payment,") \
				_T("		   hcr_status clinical_status,") \
				_T("		   i.hfe_staff staff") \
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
				_T(" WHERE NVL(hd_outpatient, 'N') <> 'Y' "));

	//Dieu tri ngoai tru trong khoa
	szOutpatientSQL.Format(_T(" SELECT    i.hfe_docno doc_no, ") \
				_T("		   NVL(i.hfe_general_rank, 'N'),") \
				_T("           i.hfe_deptid dept_id, ") \
				_T("		   i.hfe_date invoice_date,") \
				_T("		   htr_admitdate admit_date,") \
				_T("           Get_patientname(i.hfe_docno) patient_name, ") \
				_T("           i.hfe_deposit deposit, ") \
				_T("           i.hfe_amount total_amount, ") \
				_T("           i.hfe_discount inspaid, ") \
				_T("           i.hfe_inspaid - i.hfe_discount pat_paid, ") \
				_T("           f.fee_food, ") \
				_T("		   i.hfe_otherpaid,") \
				_T("		   CASE WHEN i.hfe_type = 'O' THEN hfe_amount ELSE 0 END other_receipt,") \
				_T("		   i.hfe_freeamount,") \
				_T("           CASE WHEN is_scoliosis > 0 THEN l_diffcost ELSE f.diff_cost END diff_cost, ") \
				_T("           i.hfe_patpaid total_patpaid, ") \
				_T("           i.hfe_payment receipt_amount, ") \
				_T("		   hc_cardno card_no,") \
				_T("		   i.hfe_status invoice_status,") \
				_T("		   NVL(hd_outpatient, 'N') is_outpatient,") \
				_T("		   i.hfe_objectid object_id,") \
				_T("		   i.hfe_cash_id cash_id,") \
				_T("		   i.hfe_lockeddate locked_date,") \
				_T("		   i.hfe_payment payment,") \
				_T("		   htr_status clinical_status,") \
				_T("		   i.hfe_staff staff") \
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
				_T("							END ") \
				_T("						   END ") \
				_T("					   END) diff_cost, ") \
				_T("				   SUM(CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END) is_scoliosis,") \
				_T("				   SUM(CASE WHEN hfe_type = 'V' THEN hfe_diffcost ELSE 0 END) l_diffcost") \
				_T("            FROM   hms_fee ") \
				_T("			LEFT JOIN hms_operation ON (ho_docno = hfe_docno AND ho_idx = hfe_orderid)") \
				_T("            WHERE  hfe_category <> 'Y' AND hfe_status IN ('P', 'R')") \
				_T("            GROUP  BY hfe_docno,hfe_invoiceno) f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T(" WHERE NVL(hd_outpatient, 'N') = 'Y'"));
	szSQL.Format(_T("SELECT * FROM (%s UNION ALL %s) WHERE 1=1 %s %s"), szIESQL, szOutpatientSQL, szWhere, szOrderBy);
	return szSQL;
}

