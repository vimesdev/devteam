#include "stdafx.h"
#include "FMInsurancePostedReceiptVoucherListSOM.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherListSOM* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherListSOM* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherListSOM* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedReceiptVoucherListSOM* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherListSOM *pVw = (CFMInsurancePostedReceiptVoucherListSOM *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherListSOM *pVw = (CFMInsurancePostedReceiptVoucherListSOM *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherListSOM *pVw = (CFMInsurancePostedReceiptVoucherListSOM *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsurancePostedReceiptVoucherListSOM *pVw = (CFMInsurancePostedReceiptVoucherListSOM *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnAddFMInsurancePostedReceiptVoucherList();
} 
static int _OnEditFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnEditFMInsurancePostedReceiptVoucherList();
} 
static int _OnDeleteFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnDeleteFMInsurancePostedReceiptVoucherList();
} 
static int _OnSaveFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnSaveFMInsurancePostedReceiptVoucherList();
} 
static int _OnCancelFMInsurancePostedReceiptVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnCancelFMInsurancePostedReceiptVoucherList();
} 
static void _OnSODSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedReceiptVoucherListSOM*)pWnd)->OnSODSelect();
}

CFMInsurancePostedReceiptVoucherListSOM::CFMInsurancePostedReceiptVoucherListSOM(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsurancePostedReceiptVoucherListSOM::~CFMInsurancePostedReceiptVoucherListSOM(){
}
void CFMInsurancePostedReceiptVoucherListSOM::OnCreateComponents()

	/*
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 535);
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
	m_wndStatusLabel.Create(this, _T("Status"), 220, 90, 301, 115);
	m_wndStatus.Create(this,306, 90, 426, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 215, 145); 
	m_wndList.Create(this,10, 150, 425, 500); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 301, 145);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 110, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 505, 215, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 220, 505, 320, 530);
	m_wndEDeposit.Create(this, _T("EDeposit"), 325, 505, 425, 530);
	//m_wndAll.Create(this, _T("All"), 325, 505, 425, 530);
	//m_wndAll.ShowWindow(SW_HIDE);
	*/
	{
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 231, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 237, 30, 326, 55);
	m_wndReportPeriod.Create(this,331, 30, 467, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 231, 85); 
	m_wndToDate.Create(this,331, 60, 467, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 237, 60, 326, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 231, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 231, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 237, 90, 326, 115);
	m_wndStatus.Create(this,331, 90, 467, 115); 
	m_wndList.Create(this,10, 150, 467, 500); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 237, 120, 326, 145);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 300, 540, 380, 565);
	m_wndExport.Create(this, _T("Export XLS"), 385, 540, 465, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 110, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 505, 215, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 260, 505, 360, 530);
	m_wndEDeposit.Create(this, _T("EDeposit"), 365, 505, 465, 530);
	m_wndSOD.Create(this, _T("SOD"), 331, 120, 467, 145);
}
void CFMInsurancePostedReceiptVoucherListSOM::OnInitializeComponents(){
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
	m_wndList.InsertColumn(3, _T("Date"), CFMT_DATETIME, 120);
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

void CFMInsurancePostedReceiptVoucherListSOM::OnSetWindowEvents(){
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
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsurancePostedReceiptVoucherListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsurancePostedReceiptVoucherListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsurancePostedReceiptVoucherListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsurancePostedReceiptVoucherListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsurancePostedReceiptVoucherListFnc, 0, 'T', VK_CONTROL);
*/
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	m_mIndex[_T("I")] = _T("Thu n\x1ED9i tr\xFA");
	m_mIndex[_T("II")] = _T("Thu ngo\x1EA1i tr\xFA");
	m_mIndex[_T("III")] = _T("Thu t\x1EA1m g\x1EEDi v\xE0o vi\x1EC7n");
	m_mIndex[_T("IV")] = _T("Thu t\x1EA1m g\x1EEDi ngo\x1EA1i tr\xFA");


	SetMode(VM_EDIT);


}
void CFMInsurancePostedReceiptVoucherListSOM::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndEDeposit.GetDlgCtrlID(), m_bEDeposit);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);

}
void CFMInsurancePostedReceiptVoucherListSOM::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsurancePostedReceiptVoucherListSOM::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsurancePostedReceiptVoucherListSOM::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szOrderByKey = _T("01");
	m_bInpatient = FALSE;
	m_bOutpatient = FALSE;
	m_bDeposit = FALSE;
	m_bEDeposit=FALSE;
	m_bSOD=FALSE;
}

int CFMInsurancePostedReceiptVoucherListSOM::SetMode(int nMode){
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

/*void CFMInsurancePostedReceiptVoucherListSOM::OnYearChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListSOM::OnYearSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListSOM::OnYearKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherListSOM::OnYearCheckValue(){
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
 
void CFMInsurancePostedReceiptVoucherListSOM::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsurancePostedReceiptVoucherListSOM::OnReportPeriodSelendok(){
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

/*void CFMInsurancePostedReceiptVoucherListSOM::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherListSOM::OnReportPeriodKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherListSOM::OnReportPeriodLoadData(){
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

/*void CFMInsurancePostedReceiptVoucherListSOM::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsurancePostedReceiptVoucherListSOM::OnFromDateChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListSOM::OnFromDateSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListSOM::OnFromDateKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherListSOM::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsurancePostedReceiptVoucherListSOM::OnToDateChange(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListSOM::OnToDateSetfocus(){
	
} */
/*void CFMInsurancePostedReceiptVoucherListSOM::OnToDateKillfocus(){
	
} */
int CFMInsurancePostedReceiptVoucherListSOM::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsurancePostedReceiptVoucherListSOM::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherListSOM::OnClerkSelendok(){
	 
}
/*void CFMInsurancePostedReceiptVoucherListSOM::OnClerkSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherListSOM::OnClerkKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherListSOM::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsurancePostedReceiptVoucherListSOM::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedReceiptVoucherListSOM::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherListSOM::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMInsurancePostedReceiptVoucherListSOM::OnStatusSetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherListSOM::OnStatusKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherListSOM::OnStatusLoadData(){
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
/*void CFMInsurancePostedReceiptVoucherListSOM::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedReceiptVoucherListSOM::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedReceiptVoucherListSOM::OnOrderBySelendok(){
	 
}
/*void CFMInsurancePostedReceiptVoucherListSOM::OnOrderBySetfocus(){
	
}*/
/*void CFMInsurancePostedReceiptVoucherListSOM::OnOrderByKillfocus(){
	
}*/
long CFMInsurancePostedReceiptVoucherListSOM::OnOrderByLoadData(){
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
/*void CFMInsurancePostedReceiptVoucherListSOM::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedReceiptVoucherListSOM::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsurancePostedReceiptVoucherListSOM::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMInsurancePostedReceiptVoucherListSOM::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsurancePostedReceiptVoucherListSOM::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
void CFMInsurancePostedReceiptVoucherListSOM::OnSODSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
long CFMInsurancePostedReceiptVoucherListSOM::OnListLoadData()
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

	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC')"));
	else		
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));
	//szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) = 'BH'"));


	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_locked stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
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

void CFMInsurancePostedReceiptVoucherListSOM::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMInsurancePostedReceiptVoucherListSOM::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMInsurancePostedReceiptVoucherListSOM::OnPrintSelect(){
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
 
 
int CFMInsurancePostedReceiptVoucherListSOM::OnAddFMInsurancePostedReceiptVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsurancePostedReceiptVoucherListSOM::OnEditFMInsurancePostedReceiptVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsurancePostedReceiptVoucherListSOM::OnDeleteFMInsurancePostedReceiptVoucherList(){
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
 		OnCancelFMInsurancePostedReceiptVoucherList();
 	}
	return 0;
}
int CFMInsurancePostedReceiptVoucherListSOM::OnSaveFMInsurancePostedReceiptVoucherList(){
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
 		//OnFMInsurancePostedReceiptVoucherListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMInsurancePostedReceiptVoucherListSOM::OnCancelFMInsurancePostedReceiptVoucherList(){
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
int CFMInsurancePostedReceiptVoucherListSOM::OnFMInsurancePostedReceiptVoucherListListLoadData(){
	return 0;
}

void CFMInsurancePostedReceiptVoucherListSOM::OnPrint2ndver()
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
	double nTotal[20], nGroupTotal1[20];
	for (int i = 0; i < 20; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1PTTYC.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
   //_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("thu_khac"));
	data_name.Add(_T("congvp"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("ngoai_tru"));
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

	rpt.GetReportHeader()->SetValue(_T("Invoices"), m_szCashIDS);

_tprintf(_T("\r\n2"));
	int col_pos = 4;
	int sum_pos = (int) (data_name.GetCount()) - 1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("chindex"), szNewLev1);
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
				rptGroup->SetValue(_T("GroupName"), tmpStr);
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
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				rs.GetValue(data_name.GetAt(i), nTmp);
				nGroupTotal1[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	MoneyToString(ToString(nTotal[sum_pos]), tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	
	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.PrintPreview();
}

void CFMInsurancePostedReceiptVoucherListSOM::OnPrint3rdver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, *rptPrevMark = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, tmpStr2, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	double nTotal[20], nGroupTotal1[20];
	for (int i = 0; i < 20; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHU_BHYT_1PTTYC.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString3();
    //_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
_tprintf(_T("\r\n1"));
	data_name.Add(_T("tong_vien_phi"));
	data_name.Add(_T("BHTT"));
	data_name.Add(_T("trich_tam_gui"));
	data_name.Add(_T("CUNG_CHI_TRA"));
	data_name.Add(_T("vienphi"));
	data_name.Add(_T("maycnc"));
	data_name.Add(_T("phi_thuoc"));
	data_name.Add(_T("phi_vattu"));
	data_name.Add(_T("mien_giam"));
	data_name.Add(_T("cong"));
	data_name.Add(_T("tam_gui"));
	data_name.Add(_T("cong_thu"));
	//data_name.Add(_T("tien_an"));
	//data_name.Add(_T("thu_chinh_sach"));	
	//data_name.Add(_T("thu_khac"));
	//data_name.Add(_T("congvp"));	
	//data_name.Add(_T("ngoai_tru"));
	

	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}

	rpt.GetReportHeader()->SetValue(_T("Invoices"), m_szCashIDS);

_tprintf(_T("\r\n2"));
	int col_pos = 4;
	int sum_pos = (int) (data_name.GetCount()) - 1;

	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("chindex"), szNewLev1);
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
				rptGroup->SetValue(_T("GroupName"), tmpStr);
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
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
			for (int i = 0; i < data_name.GetCount(); i++)
			{
				rs.GetValue(data_name.GetAt(i), nTmp);
				nGroupTotal1[i]+= nTmp;
				tmpStr.Format(_T("%d"), i+col_pos);
				rptDetail->SetValue(tmpStr, double2str(nTmp));
			}
		}
		rs.MoveNext();
	}
_tprintf(_T("\r\n3"));
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
		for (int i = 0; i < data_name.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("t%d"), i+col_pos);
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
	rpt.GetReportHeader()->SetValue(_T("ClassName"), _T("CFMInsurancePostedReceiiptVoucherList"));

	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	rptFooter = rpt.GetReportFooter();
	OnPrintFooterUser(rptFooter);
	OnPrintSummaryReceipt(nTotal[sum_pos]);
	rpt.PrintPreview();
}

void CFMInsurancePostedReceiptVoucherListSOM::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, szPrevGrp, szNewGrp;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 14);
	xls.SetCellMergedColumns(0, 3, 14);
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 15);
	for (int i = 0; i < 13; i++)
		xls.SetColumnWidth(i+3, 13);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x42\x1EA2NG K\xCA \x43H\x1EE8NG T\x1EEA GHI S\x1ED4 THU \x42HYT");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellMergedRows(0, 4, 2);
	xls.SetCellText(1, 4, _T("N\x1ED9i \x64ung"), 4098, true);
	xls.SetCellMergedRows(1, 4, 2);
	xls.SetCellText(2, 4, _T("S\x1ED1 phi\x1EBFu thu"), 4098, true);
	xls.SetCellMergedRows(2, 4, 2);
	xls.SetCellText(3, 4, _T("Tr\xED\x63h t\x1EA1m g\x1EEDi"), 4098, true);
	xls.SetCellMergedRows(3, 4, 2);
	xls.SetCellText(4, 4, _T("T\x1ED5ng vi\x1EC7n ph\xED"), 4098, true);
	xls.SetCellMergedRows(4, 4, 2);
	xls.SetCellText(5, 4, _T("\x42HTT"), 4098, true);
	xls.SetCellMergedRows(5, 4, 2);
	xls.SetCellText(6, 4, _T("Vi\x1EC7n ph\xED ph\x1EA3i thu"), 4098, true);
	xls.SetCellMergedColumns(6, 4, 3);
	xls.SetCellText(6, 5, _T("% \x63\xF9ng \x63hi tr\x1EA3"), 4098, true);
	xls.SetCellText(7, 5, _T("Ti\x1EC1n \x103n"), 4098, true);
	xls.SetCellText(8, 5, _T("Thu \x63h\xEAnh"), 4098, true);
	xls.SetCellText(9, 4, _T("Thu \x63h\xEDnh s\xE1\x63h"), 4098, true);
	xls.SetCellMergedRows(9, 4, 2);
	xls.SetCellText(10, 4, _T("Thu kh\xE1\x63"), 4098, true);
	xls.SetCellMergedRows(10, 4, 2);
	xls.SetCellText(11, 4, _T("\x43\x1ED9ng"), 4098, true);
	xls.SetCellMergedRows(11, 4, 2);
	xls.SetCellText(12, 4, _T("T\x1EA1m g\x1EEDi"), 4098, true);
	xls.SetCellMergedRows(12, 4, 2);
	xls.SetCellText(13, 4, _T("Ngo\x1EA1i tr\xFA"), 4098, true);
	xls.SetCellMergedRows(13, 4, 2);
	xls.SetCellText(14, 4, _T("\x43\x1ED9ng thu"), 4098, true);
	xls.SetCellMergedRows(14, 4, 2);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_index"), szNewGrp);
		if (szNewGrp != szPrevGrp)
		{
			m_mIndex.Lookup(szNewGrp, tmpStr);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			nRow++;
			szPrevGrp = szNewGrp;
			nIdx = 1;
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("user_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("fac_invoiceno")), FMT_TEXT);
		rs.GetValue(_T("trich_tam_gui"), nTmp);
		xls.SetCellText(3, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tong_vien_phi"), nTmp);
		xls.SetCellText(4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("BHTT"), nTmp);
		xls.SetCellText(5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("cung_chi_tra"), nTmp);
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tien_an"), nTmp);
		xls.SetCellText(7, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("thu_chenh"), nTmp);
		xls.SetCellText(8, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("thu_chinh_sach"), nTmp);
		xls.SetCellText(9, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("thu_khac"), nTmp);
		xls.SetCellText(10, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("cong"), nTmp);
		xls.SetCellText(11, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tam_gui"), nTmp);
		xls.SetCellText(12, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("ngoai_tru"), nTmp);
		xls.SetCellText(13, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("cong_thu"), nTmp);
		xls.SetCellText(14, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\BANG_KE_CHUNG_TU_GHI_SO_THU_BHYT.xls"));
}

CString CFMInsurancePostedReceiptVoucherListSOM::GetQueryString3(){
	CString szSQL, szWhere, szWhere1, szWhere2, szFeeType;

	CString szOrderBy;
	CString szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and cash_id in(%s)   "), szReceiptStr);
	if (m_bInpatient) szFeeType+=szFeeType.IsEmpty()?_T("'I'"):_T(", 'I'");
	if (m_bOutpatient) szFeeType+=szFeeType.IsEmpty()?_T("'II'"):_T(", 'II'");
	if (m_bDeposit)	szFeeType+=szFeeType.IsEmpty()?_T("'III'"):_T(", 'III'");
	if (m_bEDeposit)	szFeeType+=szFeeType.IsEmpty()?_T("'IV'"):_T(", 'IV'");
	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND chindex IN (%s)"), szFeeType);
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}


	szSQL.Format(_T("SELECT * ") \
		_T(" FROM V_INSURANCEINCOMESUMMARY3 ") \
		_T(" WHERE cash_id > 0 %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	
	return szSQL;
}

CString CFMInsurancePostedReceiptVoucherListSOM::GetQueryString(){
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
	m_szCashIDS = szReceiptStr;
	m_szCashIDS.Replace(_T("-1,"), _T(""));

	szWhere.Format(_T(" and cash_id in(%s)   "), szReceiptStr);

	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", cash_id, fac_user_id"));
	}


	szSQL.Format(_T("SELECT * ") \
		_T(" FROM HF_INSURANCEINCOMESUMMARY_VIEW ") \
		_T(" WHERE cash_id > 0 %s ") \
		_T(" ORDER BY chindex %s"), szWhere, szOrderBy);
	
	return szSQL;
	///

	szSQL.Format(_T(" SELECT    NVL(trim(get_username(fac_user_id)), fac_user_id) user_name, ") \
				_T("           fac_cashbook_id, ") \
				_T("           fac_cash_id, ") \
				_T("           fac_invoiceno, ") \
				_T("           hfe_index, ") \
				_T("           SUM(hfe_deposit) trich_tam_gui, ") \
				_T("           SUM(hfe_amount+hfe_otherreceipt) tong_vien_phi, ") \
				_T("           round(SUM(hfe_discount)) BHTT, ") \
				_T("           SUM(hfe_patpaid1) AS cung_chi_tra, ") \
				_T("           SUM(hfe_foodamount) tien_an, ") \
				_T("           round(SUM(hfe_diffcost)) thu_chenh, ") \
				_T("           round(SUM(hfe_policyamount)) thu_chinh_sach, ") \
				_T("           SUM(hfe_otherreceipt) thu_khac, ") \
				_T("           round(SUM( hfe_patpaid1 +  hfe_diffcost +hfe_foodamount ") \
				_T("             + hfe_otherreceipt)) AS cong, ") \
				_T("           SUM(hfe_tamgui) tam_gui, ") \
				_T("           SUM(hfe_ngoaitru) ngoai_tru, ") \
				_T("           round(SUM( hfe_patpaid1 +  hfe_diffcost + hfe_foodamount ") \
				_T("             + hfe_otherreceipt + hfe_tamgui  - hfe_deposit )) AS cong_thu ") \
				_T(" FROM      fa_cash ") \
				_T(" LEFT JOIN ") \
				_T(" (SELECT 'I' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         hfe_deposit, ") \
				_T("         hfe_amount, ") \
				_T("         hfe_inspaid, ") \
				_T("         hfe_discount, ") \
				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT COALESCE(SUM((f.hfe_inspaid-f.hfe_discount)), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno  AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) and hfe_feegroup not in('OPT_L')) ") \
				_T("         ELSE hfe_inspaid-hfe_discount ") \
				_T("         END AS hfe_patpaid1, ") \
				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno and substr(f.hfe_group, 1, 2) ='FF' AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )) ") \
				_T("         ELSE 0 ") \
				_T("         END AS hfe_foodamount, ") \
				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_diffcost), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno and substr(f.hfe_group, 1, 2) <>'FF'  AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' ) and hfe_diffcost > 0 and hfe_feegroup not in('OPT_L') ) ") \
				_T("         ELSE 0 ") \
				_T("         END AS hfe_diffcost, ") \

				_T("         CASE WHEN hfe_class = 'I' THEN (SELECT Coalesce(SUM(hfe_cost-hfe_discount), 0) ") \
				_T("                                    FROM   hms_fee f ") \
				_T("                                    WHERE  f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND Nvl(f.hfe_category, 'N') IN( 'BQP', 'BBV' )) ") \
				_T("         ELSE 0 ") \
				_T("         END AS hfe_policyamount, ") \
				_T("         0 AS hfe_otherreceipt, ") \
				_T("         0 AS hfe_tamgui, ") \
				_T("         0 AS hfe_ngoaitru ") \
				_T("  FROM   hms_fee_invoice i ") \
				_T("  WHERE  hfe_status = 'P' AND hfe_payment >= 0 AND hfe_refund = 0 AND hfe_type <> 'O' AND hfe_class = 'I' ") \
				_T("  UNION ALL ") \
				_T("  SELECT 'I' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         0 AS hfe_deposit, ") \
				_T("         0 AS hfe_amount, ") \
				_T("         0 AS hfe_inspaid, ") \
				_T("         0 AS hfe_discount, ") \
				_T("         0 AS hfe_patpaid1, ") \
				_T("         0 AS hfe_foodamount, ") \
				_T("         0 AS hfe_diffcost, ") \
				_T("         0 AS hfe_policyamount, ") \
				_T("         hfe_payment AS hfe_othamount, ") \
				_T("         0 AS hfe_tamgui, ") \
				_T("         0 AS hfe_ngoaitru ") \
				_T("  FROM   hms_fee_invoice i ") \
				_T("  WHERE  hfe_status = 'P' AND hfe_payment >= 0 AND hfe_refund = 0 AND hfe_type = 'O' AND hfe_class = 'I' ") \
				_T("  UNION ALL ") \
				_T("  SELECT 'III' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         0 AS hfe_deposit, ") \
				_T("         0 AS hfe_amount, ") \
				_T("         0 AS hfe_inspaid, ") \
				_T("         0 AS hfe_discount, ") \
				_T("         0 AS hfe_patpaid1, ") \
				_T("         0 AS hfe_foodamount, ") \
				_T("         0 AS hfe_diffcost, ") \
				_T("         0 AS hfe_policyamount, ") \
				_T("         0 AS hfe_othamount, ") \
				_T("         hfe_amount AS hfe_tamgui, ") \
				_T("         0 AS hfe_ngoaitru ") \
				_T("  FROM   hms_fee_deposit i ") \
				_T("  WHERE  hfe_status IN( 'P', 'R' ) ") \
				_T("  UNION ALL ") \
				_T("  SELECT 'II' AS hfe_index, ") \
				_T("         hfe_cash_id, ") \
				_T("         hfe_docno, ") \
				_T("         hfe_deposit, ") \
				_T("         hfe_amount, ") \
				_T("         hfe_inspaid, ") \
				_T("         hfe_discount, ") \
				_T("         hfe_copayment AS hfe_patpaid1, ") \
				_T("         0 AS hfe_foodamount, ") \
				_T("         hfe_diffcost, ") \
				_T("         0 AS hfe_policyamount, ") \
				_T("         0 AS hfe_otherreceipt, ") \
				_T("         0 AS hfe_tamgui, ") \
				_T("         hfe_patpaid AS hfe_ngoaitru ") \
				_T("  FROM   hms_fee_invoice i ") \
				_T("  WHERE  hfe_status = 'P' AND hfe_payment >= 0 AND hfe_refund = 0 AND hfe_class <> 'I') ") \
				_T("  tblInvoice ON( hfe_cash_id = fac_cash_id ) ") \
				_T(" WHERE     Substr(fac_cashbook_id, 1, 2) = 'BH' %s") \
				_T(" GROUP BY fac_user_id, ") \
				_T("           fac_cashbook_id, ") \
				_T("           fac_cash_id, ") \
				_T("           fac_invoiceno, ") \
				_T("           hfe_index") \
				_T(" ORDER BY hfe_index %s "), szWhere, szOrderBy);
_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CFMInsurancePostedReceiptVoucherListSOM::GetQueryString2(){
	CString szSQL, szWhere, szWhere1;
	szWhere.AppendFormat(_T(" AND i.hfe_status = 'P' AND fac_posted = 'Y'") \
						_T(" AND fac_posteddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T(" AND fac_invoicetype = 'R'"), m_szFromDate, m_szToDate);
	/*if (m_bService)
		szWhere1.AppendFormat(_T(" AND fac_cashbook_id = 'DV'"));
	else*/
		szWhere1.AppendFormat(_T(" AND fac_cashbook_id <> 'DV'"));
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

void CFMInsurancePostedReceiptVoucherListSOM::OnPrintSummaryReceipt(double nTotalAmount)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection* rptDetail = NULL;
	CString tmpStr, tmpStr2;
	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUTHUC30BB_THBH.rpt")))
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
	tmpStr += _T(" - H\x1ED9 \x62\x1EA3o hi\x1EC3m y t\x1EBF (t\x1ED5ng h\x1EE3p thu)");
	rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
	rptDetail->SetValue(_T("Address"), _T("Ph\xF2ng t\xE0i \x63h\xEDnh"));
	rptDetail->SetValue(_T("Reason"), _T("Thu ti\x1EC1n vi\x1EC7n ph\xED"));
	FormatCurrency(nTotalAmount, tmpStr);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%.3f"), nTotalAmount);
	MoneyToString(tmpStr, tmpStr2);
	tmpStr2 += _T(" \x111\x1ED3ng.");
	rptDetail->SetValue(_T("SumInWord"), tmpStr2);
	rptDetail->SetValue(_T("SumInWord1"), tmpStr2);
	OnPrintFooterUser(rptDetail);
	rpt.PrintPreview();
}

void CFMInsurancePostedReceiptVoucherListSOM::OnPrintFooterUser(CReportSection* rptFooter)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND fpf_module_id = '%s'"), pMF->GetModuleID());
	//szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), _T("BH"));//
	szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), m_bSOD?_T("TYC"):_T("BH"));
	szSQL.Format(_T("SELECT fpf_position field_name, fpf_title title FROM fm_print_footer WHERE 1=1 %s"), szWhere);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		rptFooter->SetValue(rs.GetValue(_T("field_name")), rs.GetValue(_T("title")));
		rs.MoveNext();
	}
}