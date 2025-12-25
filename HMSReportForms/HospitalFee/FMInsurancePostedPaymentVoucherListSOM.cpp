#include "stdafx.h"
#include "FMInsurancePostedPaymentVoucherListSOM.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherListSOM* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherListSOM* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherListSOM* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsurancePostedPaymentVoucherListSOM* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherListSOM *pVw = (CFMInsurancePostedPaymentVoucherListSOM *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherListSOM *pVw = (CFMInsurancePostedPaymentVoucherListSOM *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherListSOM *pVw = (CFMInsurancePostedPaymentVoucherListSOM *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsurancePostedPaymentVoucherListSOM *pVw = (CFMInsurancePostedPaymentVoucherListSOM *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnAddFMInsurancePostedPaymentVoucherList();
} 
static int _OnEditFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnEditFMInsurancePostedPaymentVoucherList();
} 
static int _OnDeleteFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnDeleteFMInsurancePostedPaymentVoucherList();
} 
static int _OnSaveFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnSaveFMInsurancePostedPaymentVoucherList();
} 
static int _OnCancelFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnCancelFMInsurancePostedPaymentVoucherList();
}
static void _OnSODSelectFnc(CWnd *pWnd)
{
	 ((CFMInsurancePostedPaymentVoucherListSOM*)pWnd)->OnSODSelect();
}

CFMInsurancePostedPaymentVoucherListSOM::CFMInsurancePostedPaymentVoucherListSOM(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsurancePostedPaymentVoucherListSOM::~CFMInsurancePostedPaymentVoucherListSOM()
{

}
void CFMInsurancePostedPaymentVoucherListSOM::OnCreateComponents()
/*{
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
	m_wndStatusLabel.Create(this, _T("Status"), 220, 90, 300, 115);
	m_wndStatus.Create(this,305, 90, 425, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 215, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 425, 145);
	m_wndList.Create(this,10, 150, 425, 500); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 110, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 505, 215, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 220, 505, 320, 530);
	//m_wndDeposit.ShowWindow(SW_HIDE);

}*/
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 480, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 236, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 242, 30, 325, 55);
	m_wndReportPeriod.Create(this,331, 30, 470, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 236, 85); 
	m_wndToDate.Create(this,331, 60, 470, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 242, 60, 325, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 236, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 236, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 243, 89, 326, 114);
	m_wndStatus.Create(this,331, 90, 470, 115); 
	m_wndList.Create(this,10, 150, 470, 500); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 243, 119, 326, 144);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 305, 540, 385, 565);
	m_wndExport.Create(this, _T("Export XLS"), 390, 540, 470, 565);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 505, 110, 530);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 505, 215, 530);
	m_wndDeposit.Create(this, _T("Deposit"), 220, 505, 320, 530);
	m_wndSOD.Create(this, _T("SOD"), 331, 120, 470, 145);
}
void CFMInsurancePostedPaymentVoucherListSOM::OnInitializeComponents(){
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

void CFMInsurancePostedPaymentVoucherListSOM::OnSetWindowEvents(){
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

	m_mIndex[_T("I")] = _T("\x43hi n\x1ED9i tr\xFA");
	m_mIndex[_T("II")] = _T("\x43hi ngo\x1EA1i tr\xFA ");
	m_mIndex[_T("III")] = _T("\x43hi kh\xE1\x63");


	SetMode(VM_EDIT);


}
void CFMInsurancePostedPaymentVoucherListSOM::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);

}
void CFMInsurancePostedPaymentVoucherListSOM::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsurancePostedPaymentVoucherListSOM::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsurancePostedPaymentVoucherListSOM::SetDefaultValues(){

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
	m_bSOD=FALSE;
}

int CFMInsurancePostedPaymentVoucherListSOM::SetMode(int nMode){
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

/*void CFMInsurancePostedPaymentVoucherListSOM::OnYearChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListSOM::OnYearSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListSOM::OnYearKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherListSOM::OnYearCheckValue(){
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
 
void CFMInsurancePostedPaymentVoucherListSOM::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsurancePostedPaymentVoucherListSOM::OnReportPeriodSelendok(){
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

/*void CFMInsurancePostedPaymentVoucherListSOM::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherListSOM::OnReportPeriodKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherListSOM::OnReportPeriodLoadData(){
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

/*void CFMInsurancePostedPaymentVoucherListSOM::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsurancePostedPaymentVoucherListSOM::OnFromDateChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListSOM::OnFromDateSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListSOM::OnFromDateKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherListSOM::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsurancePostedPaymentVoucherListSOM::OnToDateChange(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListSOM::OnToDateSetfocus(){
	
} */
/*void CFMInsurancePostedPaymentVoucherListSOM::OnToDateKillfocus(){
	
} */
int CFMInsurancePostedPaymentVoucherListSOM::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsurancePostedPaymentVoucherListSOM::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherListSOM::OnClerkSelendok(){
	 
}
/*void CFMInsurancePostedPaymentVoucherListSOM::OnClerkSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherListSOM::OnClerkKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherListSOM::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsurancePostedPaymentVoucherListSOM::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedPaymentVoucherListSOM::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherListSOM::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMInsurancePostedPaymentVoucherListSOM::OnStatusSetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherListSOM::OnStatusKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherListSOM::OnStatusLoadData(){
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
/*void CFMInsurancePostedPaymentVoucherListSOM::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsurancePostedPaymentVoucherListSOM::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsurancePostedPaymentVoucherListSOM::OnOrderBySelendok(){
	 
}
/*void CFMInsurancePostedPaymentVoucherListSOM::OnOrderBySetfocus(){
	
}*/
/*void CFMInsurancePostedPaymentVoucherListSOM::OnOrderByKillfocus(){
	
}*/
long CFMInsurancePostedPaymentVoucherListSOM::OnOrderByLoadData(){
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
/*void CFMInsurancePostedPaymentVoucherListSOM::OnOrderByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsurancePostedPaymentVoucherListSOM::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMInsurancePostedPaymentVoucherListSOM::OnSODSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
void CFMInsurancePostedPaymentVoucherListSOM::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMInsurancePostedPaymentVoucherListSOM::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsurancePostedPaymentVoucherListSOM::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsurancePostedPaymentVoucherListSOM::OnListLoadData(){
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
	else		
	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG')"));

	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
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

void CFMInsurancePostedPaymentVoucherListSOM::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMInsurancePostedPaymentVoucherListSOM::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMInsurancePostedPaymentVoucherListSOM::OnPrintSelect(){
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
 
 
int CFMInsurancePostedPaymentVoucherListSOM::OnAddFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsurancePostedPaymentVoucherListSOM::OnEditFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsurancePostedPaymentVoucherListSOM::OnDeleteFMInsurancePostedPaymentVoucherList(){
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
int CFMInsurancePostedPaymentVoucherListSOM::OnSaveFMInsurancePostedPaymentVoucherList(){
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
int CFMInsurancePostedPaymentVoucherListSOM::OnCancelFMInsurancePostedPaymentVoucherList(){
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
int CFMInsurancePostedPaymentVoucherListSOM::OnFMInsurancePostedPaymentVoucherListListLoadData(){
	return 0;
}


void CFMInsurancePostedPaymentVoucherListSOM::OnPrint2ndver()
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
	long double nTotal[12], nGroupTotal1[12];
	for (int i = 0; i < 12; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHI_BHYT.RPT");
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
	data_name.Add(_T("tong_bn_tra"));
	data_name.Add(_T("tien_an"));
	data_name.Add(_T("cong_"));
	data_name.Add(_T("thu_chinh_sach"));
	data_name.Add(_T("chi_khac"));
	data_name.Add(_T("mien_giam"));
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
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[sum_pos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng."));
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);

	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.GetReportFooter()->SetValue(_T("ClassName"), _T("CFMInsurancePostedPaymentVoucherListSOM"));
	rpt.PrintPreview();
}

void CFMInsurancePostedPaymentVoucherListSOM::OnPrint3rdver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, *rptPrevMark = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, tmpStr2, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	CStringArray data_name;
	long double nTotal[20], nGroupTotal1[20];
	for (int i = 0; i < 20; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOCHI_BHYT_1PTTYC.RPT");
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
	data_name.Add(_T("total_amount"));
	data_name.Add(_T("bhtt"));
	data_name.Add(_T("deposit"));
	data_name.Add(_T("cung_chi_tra"));
	data_name.Add(_T("thu_vien_phi"));
	data_name.Add(_T("phi_thuoc"));
	data_name.Add(_T("phi_vtth"));
	data_name.Add(_T("thu_maycnc"));
	data_name.Add(_T("fa"));
	data_name.Add(_T("tong_thu"));
	data_name.Add(_T("chi_vienphi"));
	data_name.Add(_T("chi_thuoc"));
	data_name.Add(_T("chi_vattu"));
	data_name.Add(_T("chi_maycnc"));	
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
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("fac_invoiceno")));
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
	OnPrintSummaryReceipt(nTotal[sum_pos]);

	rpt.GetReportFooter()->SetValue(_T("ClassName"), _T("CFMInsurancePostedPaymentVoucherListSOM"));
	OnPrintFooterUser(rptFooter);
	rpt.PrintPreview();
}

void CFMInsurancePostedPaymentVoucherListSOM::OnExportSelect()
{
	return;
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

CString CFMInsurancePostedPaymentVoucherListSOM::GetQueryString3()
{
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
	szWhere.Format(_T(" and fac_cash_id in(%s)   "), szReceiptStr);
	if (m_bInpatient) szFeeType+=szFeeType.IsEmpty()?_T("'I'"):_T(", 'I'");
	if (m_bOutpatient) szFeeType+=szFeeType.IsEmpty()?_T("'II'"):_T(", 'II'");
	if (m_bDeposit)	szFeeType+=szFeeType.IsEmpty()?_T("'III'"):_T(", 'III'");
	if (!szFeeType.IsEmpty()) szWhere.AppendFormat(_T(" AND hfe_index IN (%s)"), szFeeType);
	if(m_szOrderByKey == _T("01"))
	{
		szOrderBy.Format(_T(", fac_user_id, fac_cash_id"));
	}
	else
	{
		szOrderBy.Format(_T(", fac_cash_id, fac_user_id"));
	}

	/*szSQL.Format(_T(" SELECT NVL(trim(get_username(fac_user_id)), fac_user_id) AS user_name,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS trich_tam_gui,") \
	_T("   SUM(hfe_amount) AS tong_vien_phi,") \
	_T("   SUM(hfe_discount) AS BHTT,") \
	_T("   SUM(hfe_patpaid1) AS cung_chi_tra,") \
	_T("   SUM(hfe_patpaid1 + hfe_diffcost) tong_bn_tra,") \
	_T("   SUM(hfe_foodamount) AS tien_an,") \
	_T("   SUM(hfe_diffcost) AS thu_chenh,") \
	_T("   SUM(hfe_policyamount) AS thu_chinh_sach,") \
	_T("   SUM(hfe_miengiam) AS mien_giam,") \
	_T("   SUM(hfe_patpaid - hfe_foodamount - hfe_hitechmachine - hfe_policyamount - hfe_miengiam) vien_phi,") \
	_T("   SUM(hfe_hitechmachine) thu_maycnc,") \
	_T("   SUM(chi_doituong) chi_doituong,") \
	_T("   SUM(chi_maycnc) chi_maycnc,") \
	_T("   SUM(chi_de_muc) chi_de_muc,") \
	_T("   SUM(chi_khac) chi_khac,") \
	_T("   CASE WHEN SUM(hfe_patpaid+hfe_otherpayment) > 0 THEN SUM(hfe_patpaid +hfe_otherpayment- (chi_doituong + chi_khac + chi_maycnc + chi_de_muc)) ELSE SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc) END cong,") \
	_T("   CASE WHEN SUM(hfe_deposit + ref_deposit+hfe_otherpayment+hfe_miengiam) > 0 THEN SUM(hfe_deposit + ref_deposit+hfe_otherpayment +hfe_miengiam - (hfe_patpaid - (hfe_policyamount+ chi_doituong+chi_khac + chi_maycnc + chi_de_muc))) ELSE SUM(chi_doituong + chi_khac + chi_maycnc + chi_de_muc) END cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_patpaid ELSE 0 END), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_diffcost,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'BBV' )) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("     0 AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam,") \
	_T("	   i.hfe_patpaid,") \
	_T("	   (SELECT COALESCE(SUM(hfe_amount), 0) FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_type = 'O' AND hfe_status IN ('P', 'R')) ") \
	_T("	   hfe_otherreceipt,") \
	_T("	   (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f, hms_fee_list l WHERE f.hfe_itemid=l.hfl_feeid AND f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND hfl_hitechmachine = 'Y' AND f.hfe_status IN ('P', 'R') AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx ))") \
	_T("	   hfe_hitechmachine,") \
	_T("	   0 chi_doituong,") \
	_T("	   0 chi_maycnc,") \
	_T("	   0 chi_de_muc,") \
	_T("	   0 chi_khac") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	_T("   AND i.hfe_payment  = 0") \
	_T("   AND i.hfe_refund   > 0") \
	_T("   AND i.hfe_amount > 0") \
	_T("   AND r.hfe_type     ='F' AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) = 0") \
	_T("   UNION ALL") \
	_T("   SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("     0          AS hfe_patpaid1,") \
	_T("     0          AS hfe_foodamount,") \
	_T("     0          AS hfe_diffcost,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam,") \
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
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0 AND hfe_type <> 'V'") \
	_T("   AND (hfe_type        <> 'F'") \
	_T("   OR (hfe_type          ='F'") \
	_T("   AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	_T("   UNION ALL") \
	_T("   SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("     0          AS hfe_patpaid1,") \
	_T("     0          AS hfe_foodamount,") \
	_T("     0          AS hfe_diffcost,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     0 AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam,") \
	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('10', '12', '13', '14')) ") \
	_T("		chi_doituong,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('11')) ") \
	_T("		chi_maycnc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('15')) ") \
	_T("		chi_de_muc,") \
	_T("	   (SELECT coalesce(sum(r.hfe_cost), 0) FROM hms_fee_refundline r WHERE r.hfe_invoiceno = i.hfe_invoiceno AND r.hfe_docno = i.hfe_docno AND r.hfe_itemid IN ('16')) ") \
	_T("		chi_khac") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0 AND hfe_type = 'V'") \
	_T("   UNION ALL") \
	_T("	SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     0 hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     0 hfe_amount,") \
	_T("     0 hfe_inspaid,") \
	_T("     0 hfe_discount,") \
	_T("		0 hfe_patpaid1,") \
	_T("		0 hfe_foodamount,") \
	_T("		0 hfe_diffcost,") \
	_T("		0 hfe_policyamount,") \
	_T("     0 hfe_otherpayment,") \
	_T("     0 hfe_miengiam,") \
	_T("	   0 hfe_patpaid,") \
	_T("	   0 hfe_otherreceipt,") \
	_T("	   0 hfe_hitechmachine,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl LEFT JOIN hms_fee_list l ON (rl.hfe_itemid = l.hfl_feeid) WHERE rl.hfe_invoiceno = r.hfe_invoiceno  AND NVL(l.hfl_hitechmachine, 'N') <> 'Y' AND NVL(substr(l.hfl_feeid, 1, 2), 'N') <> 'FF') chi_doituong,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND l.hfl_hitechmachine = 'Y') chi_maycnc,") \
	_T("	   (SELECT coalesce(SUM(hfe_patpaid), 0) FROM hms_fee_refundline rl, hms_fee_list l WHERE rl.hfe_invoiceno = r.hfe_invoiceno AND rl.hfe_itemid = l.hfl_feeid AND substr(l.hfl_feeid, 1, 2) = 'FF') chi_de_muc,") \
	_T("	   0 chi_khac") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	//_T("   AND i.hfe_payment  = 0") \//
	//_T("   AND i.hfe_refund   > 0") \//
	_T("   AND i.hfe_amount > 0") \
	_T("   AND r.hfe_type     ='F' AND (SELECT count(*) FROM hms_fee_refundline WHERE hfe_invoiceno = r.hfe_invoiceno) > 0") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY fac_user_id,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index") \
	_T(" ORDER BY hfe_index %s "), szWhere, szOrderBy);*/
szSQL.Format(_T(" SELECT NVL(trim(get_username(fac_user_id)), fac_user_id) AS user_name,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index,") \
	_T("   SUM(hfe_amount)                AS total_amount,") \
	_T("   SUM(hfe_discount)              AS bhtt,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS deposit,") \
	_T("   SUM(hfe_inspaid -hfe_discount) AS cung_chi_tra,") \
	_T("   SUM(hfe_examfee+hfe_bedfee+hfe_operation+hfe_lis+hfe_pacs+hfe_foodamount+hfe_otherfeeatdept) AS thu_vien_phi,  ") \
	_T("   SUM(hfe_drugfee)        AS phi_thuoc,") \
	_T("   SUM(hfe_materialfee)    AS phi_vtth,") \
	_T("   SUM(hfe_hitechmachine) thu_maycnc,") \
	_T("   SUM(hfe_miengiam)       AS fa,") \
	_T("   SUM(hfe_patpaid - hfe_policyamount - hfe_miengiam) tong_thu,") \
	_T("   SUM(chi_vienphi) chi_vienphi,") \
	_T("   SUM(chi_thuoc) chi_thuoc,") \
	_T("   SUM(chi_vattu) chi_vattu,") \
	_T("   SUM(chi_maycnc) chi_maycnc,  ") \
	_T("   SUM(hfe_inspaid)      AS ttlinscost,") \
	_T("   SUM(hfe_policyamount) AS other_paid,") \
	_T("   SUM(hfe_otherpayment) AS other_payment,  ") \
	_T("   CASE") \
	_T("     WHEN SUM(hfe_patpaid +hfe_otherpayment) > 0") \
	_T("     THEN SUM(hfe_patpaid +hfe_otherpayment- (chi_vienphi + chi_vattu + chi_maycnc + chi_thuoc))") \
	_T("     ELSE SUM(chi_vienphi + chi_vattu + chi_maycnc + chi_thuoc)") \
	_T("   END cong,") \
	_T("   CASE") \
	_T("     WHEN SUM(hfe_deposit + ref_deposit+hfe_otherpayment+hfe_miengiam) > 0") \
	_T("     THEN SUM(hfe_deposit + ref_deposit+hfe_otherpayment +hfe_miengiam - (hfe_patpaid - (hfe_policyamount+ 0 + chi_maycnc + chi_vienphi)))") \
	_T("     ELSE SUM(chi_vienphi + chi_vattu + chi_maycnc + chi_thuoc)") \
	_T("   END cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT") \
	_T("     CASE") \
	_T("       WHEN hfe_class='I'") \
	_T("       THEN hcr_dischargedate") \
	_T("       ELSE hd_enddate") \
	_T("     END AS hfe_dischargedate,") \
	_T("     hp_firstname firstname,") \
	_T("     hp_midname midname,") \
	_T("     hp_surname surname,") \
	_T("     invoicetbl.*,") \
	_T("     hd_cardno cardno") \
	_T("   FROM") \
	_T("     (SELECT") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class ='I'") \
	_T("         THEN 'I'") \
	_T("         ELSE 'II'") \
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
	_T("       0 ref_deposit,") \
	_T("       i.hfe_amount,") \
	_T("       i.hfe_inspaid,") \
	_T("       i.hfe_discount,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'E'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM hms_fee f") \
	_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("           AND f.hfe_group                   ='D0000'") \
	_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y' )") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_examfee,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM hms_fee f") \
	_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("           AND f.hfe_group                   ='C0000'") \
	_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y' )") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_bedfee,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM hms_fee f,") \
	_T("             HMS_FEE_LIST") \
	_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("           AND F.HFE_ITEMID                  = HFL_FEEID") \
	_T("           AND hfl_hitechmachine            <> 'Y'") \
	_T("           AND f.hfe_type                    ='O'") \
	_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y' )") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_operation,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM hms_fee f,") \
	_T("             HMS_FEE_LIST") \
	_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("           AND F.HFE_ITEMID                  = HFL_FEEID") \
	_T("           AND hfl_hitechmachine            <> 'Y'") \
	_T("           AND SUBSTR(f.hfe_group,1,2)      IN ('B1')") \
	_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y' )") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_lis,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM hms_fee f,") \
	_T("             HMS_FEE_LIST") \
	_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("           AND F.HFE_ITEMID                  = HFL_FEEID") \
	_T("           AND hfl_hitechmachine            <> 'Y'") \
	_T("           AND SUBSTR(f.hfe_group,1,2)      IN ('B2','B3')") \
	_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN('Y')") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_pacs,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM HMS_FEE F,") \
	_T("             m_product_item,") \
	_T("             m_product,") \
	_T("             hms_pharmaorder_view pv") \
	_T("           WHERE pv.hpo_docno                = f.hfe_docno") \
	_T("           AND pv.hpo_orderid                = f.hfe_orderid") \
	_T("           AND F.HFE_DOCNO                   = I.HFE_DOCNO") \
	_T("           AND F.HFE_INVOICENO               = I.HFE_INVOICENO") \
	_T("           AND F.HFE_STATUS                 IN( 'P', 'R' )") \
	_T("           AND CAST(hfe_itemid AS INTEGER)   = mpi_product_item_id") \
	_T("           AND mpi_product_id                = mp_product_id") \
	_T("           AND F.HFE_TYPE                   IN ( 'D','M')") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y')") \
	_T("           AND mp_org_id                     = 'PM'") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_drugfee,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM HMS_FEE F,") \
	_T("             m_product_item,") \
	_T("             m_product,") \
	_T("             hms_pharmaorder_view pv") \
	_T("           WHERE pv.hpo_docno                = f.hfe_docno") \
	_T("           AND pv.hpo_orderid                = f.hfe_orderid") \
	_T("           AND F.HFE_DOCNO                   = I.HFE_DOCNO") \
	_T("           AND F.HFE_INVOICENO               = I.HFE_INVOICENO") \
	_T("           AND F.HFE_STATUS                 IN( 'P', 'R' )") \
	_T("           AND CAST(hfe_itemid AS INTEGER)   = mpi_product_item_id") \
	_T("           AND mpi_product_id                = mp_product_id") \
	_T("           AND F.HFE_TYPE                   IN ( 'D','M')") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y')") \
	_T("           AND mp_org_id                     = 'MA'") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_materialfee,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM hms_fee f") \
	_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("           AND f.hfe_type                    = 'F'") \
	_T("           AND SUBSTR(f.hfe_group, 1,2)      ='FF'") \
	_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' )") \
	_T("           AND f.hfe_fee_id NOT             IN") \
	_T("             (SELECT hfe_invoiceline_id") \
	_T("             FROM hms_fee_discountline d") \
	_T("             WHERE d.hfe_docno   = f.hfe_docno") \
	_T("             AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("             )") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_foodamount,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0)") \
	_T("           FROM hms_fee f") \
	_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("           AND hfe_type                      = 'X'") \
	_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y' )") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END AS hfe_otherfeeatdept,") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class = 'I'") \
	_T("         THEN") \
	_T("           (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("           FROM hms_fee f") \
	_T("           WHERE f.hfe_docno             = i.hfe_docno") \
	_T("           AND f.hfe_invoiceno           = i.hfe_invoiceno") \
	_T("           AND f.hfe_status             IN( 'P', 'R' )") \
	_T("           AND NVL(f.hfe_category, 'N') IN( 'BQP', 'BBV' )") \
	_T("           )") \
	_T("         ELSE 0") \
	_T("       END              AS hfe_policyamount,") \
	_T("       0                AS hfe_otherpayment,") \
	_T("       i.hfe_freeamount AS hfe_miengiam,") \
	_T("       i.hfe_patpaid,") \
	_T("       (SELECT COALESCE(SUM(hfe_amount), 0)") \
	_T("       FROM hms_fee_invoice") \
	_T("       WHERE hfe_docno = i.hfe_docno") \
	_T("       AND hfe_type    = 'O'") \
	_T("       AND hfe_status IN ('P', 'R')") \
	_T("       ) hfe_otherreceipt,") \
	_T("       (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("       FROM hms_fee f,") \
	_T("         hms_fee_list l") \
	_T("       WHERE f.hfe_itemid                =l.hfl_feeid") \
	_T("       AND f.hfe_docno                   = i.hfe_docno") \
	_T("       AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("       AND hfl_hitechmachine             = 'Y'") \
	_T("       AND f.hfe_status                 IN ('P', 'R')") \
	_T("       AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV')") \
	_T("       AND f.hfe_fee_id NOT             IN") \
	_T("         (SELECT hfe_invoiceline_id") \
	_T("         FROM hms_fee_discountline d") \
	_T("         WHERE d.hfe_docno   = f.hfe_docno") \
	_T("         AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("         )") \
	_T("       ) hfe_hitechmachine,") \
	_T("       0 chi_vienphi,") \
	_T("       0 chi_maycnc,") \
	_T("       0 chi_thuoc,") \
	_T("       0 chi_vattu") \
	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("     WHERE i.hfe_status = 'P'") \
	_T("     AND i.hfe_payment  = 0") \
	_T("     AND i.hfe_amount   > 0") \
	_T("     AND i.hfe_refund   > 0") \
	_T("     AND r.hfe_type     ='F'") \
	_T("     AND (SELECT COUNT(*)") \
	_T("       FROM hms_fee_refundline") \
	_T("       WHERE hfe_invoiceno = r.hfe_invoiceno) = 0") \
	_T("     UNION ALL") \
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
	_T("       DECODE('F', hfe_type, hfe_amount, 0) AS ref_deposit,") \
	_T("       0                                    AS hfe_amount,") \
	_T("       0                                    AS hfe_inspaid,") \
	_T("       0                                    AS hfe_discount,") \
	_T("       0                                    AS hfe_examfee,") \
	_T("       0                                    AS hfe_bedfee,") \
	_T("       0                                    AS hfe_operation,") \
	_T("       0                                    AS hfe_lis,") \
	_T("       0                                    AS hfe_pacs,") \
	_T("       0                                    AS hfe_drugfee,") \
	_T("       0                                    AS hfe_materialfee,") \
	_T("       0                                    AS hfe_foodamount,") \
	_T("       0                                    AS hfe_otherfeeatdept,") \
	_T("       0                                    AS hfe_policyamount,") \
	_T("       DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("       0                                    AS hfe_miengiam,") \
	_T("       0 hfe_patpaid,") \
	_T("       0 hfe_otherreceipt,") \
	_T("       0 hfe_hitechmachine,") \
	_T("       0 chi_vienphi,") \
	_T("       (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("       FROM hms_fee_refundline r,") \
	_T("         hms_fee_list l") \
	_T("       WHERE r.hfe_itemid      = l.hfl_feeid") \
	_T("       AND r.hfe_invoiceno     = i.hfe_invoiceno") \
	_T("       AND r.hfe_docno         = i.hfe_docno") \
	_T("       AND l.hfl_hitechmachine = 'Y'") \
	_T("       ) chi_maycnc,") \
	_T("       0 AS chi_thuoc,") \
	_T("       0 AS chi_vattu") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status      = 'P'") \
	_T("     AND hfe_amount        > 0") \
	_T("     AND hfe_type         <> 'V'") \
	_T("     AND (hfe_type        <> 'F'") \
	_T("     OR (hfe_type          ='F'") \
	_T("     AND i.hfe_refidx NOT IN") \
	_T("       (SELECT hfe_invoiceno") \
	_T("       FROM hms_fee_invoice") \
	_T("       WHERE hfe_docno = i.hfe_docno") \
	_T("       AND hfe_amount  > 0") \
	_T("       )))") \
	_T("     UNION ALL") \
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
	_T("       0 AS hfe_deposit,") \
	_T("       0 AS ref_deposit,") \
	_T("       0 AS hfe_amount,") \
	_T("       0 AS hfe_inspaid,") \
	_T("       0 AS hfe_discount,") \
	_T("       0 AS hfe_examfee,") \
	_T("       0 AS hfe_bedfee,") \
	_T("       0 AS hfe_operation,") \
	_T("       0 AS hfe_lis,") \
	_T("       0 AS hfe_pacs,") \
	_T("       0 AS hfe_drugfee,") \
	_T("       0 AS hfe_materialfee,") \
	_T("       0 AS hfe_otherfeeatdept,") \
	_T("       0 AS hfe_foodamount,") \
	_T("       0 AS hfe_policyamount,") \
	_T("       0 AS hfe_othamount,") \
	_T("       0 AS hfe_miengiam,") \
	_T("       0 hfe_patpaid,") \
	_T("       0 hfe_otherreceipt,") \
	_T("       0 hfe_hitechmachine,") \
	_T("       (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("       FROM hms_fee_refundline r") \
	_T("       WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("       AND r.hfe_docno       = i.hfe_docno") \
	_T("       AND r.hfe_itemid     IN ('10','13','14','15','16')") \
	_T("       ) chi_vienphi,") \
	_T("       (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("       FROM hms_fee_refundline r") \
	_T("       WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("       AND r.hfe_docno       = i.hfe_docno") \
	_T("       AND r.hfe_itemid     IN ('11')") \
	_T("       ) chi_maycnc,") \
	_T("       (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("       FROM hms_fee_refundline r") \
	_T("       WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("       AND r.hfe_docno       = i.hfe_docno") \
	_T("       AND r.hfe_itemid     IN ('12')") \
	_T("       ) chi_thuoc,") \
	_T("       (SELECT COALESCE(SUM(r.hfe_cost), 0)") \
	_T("       FROM hms_fee_refundline r") \
	_T("       WHERE r.hfe_invoiceno = i.hfe_invoiceno") \
	_T("       AND r.hfe_docno       = i.hfe_docno") \
	_T("       AND r.hfe_itemid     IN ('17')") \
	_T("       ) chi_vattu") \
	_T("     FROM hms_fee_refund i") \
	_T("     WHERE hfe_status = 'P'") \
	_T("     AND hfe_amount   > 0") \
	_T("     AND hfe_type     = 'V'") \
	_T("     UNION ALL") \
	_T("     SELECT") \
	_T("       CASE") \
	_T("         WHEN i.hfe_class ='I'") \
	_T("         THEN 'I'") \
	_T("         ELSE 'II'") \
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
	_T("       0 ref_deposit,") \
	_T("       0 hfe_amount,") \
	_T("       0 hfe_inspaid,") \
	_T("       0 hfe_discount,") \
	_T("       0 AS hfe_examfee,") \
	_T("       0 AS hfe_bedfee,") \
	_T("       0 AS hfe_operation,") \
	_T("       0 AS hfe_lis,") \
	_T("       0 AS hfe_pacs,") \
	_T("       0 AS hfe_drugfee,") \
	_T("       0 AS hfe_materialfee,") \
	_T("       0 AS hfe_otherfeeatdept,") \
	_T("       0 hfe_foodamount,") \
	_T("       0 hfe_policyamount,") \
	_T("       0 AS hfe_otherpayment,") \
	_T("       0 AS hfe_miengiam,") \
	_T("       0 hfe_patpaid,") \
	_T("       0 hfe_otherreceipt,") \
	_T("       0 hfe_hitechmachine,") \
	_T("       (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("       FROM hms_fee_refundline rl") \
	_T("       LEFT JOIN hms_fee_list l") \
	_T("       ON (rl.hfe_itemid                  = l.hfl_feeid)") \
	_T("       WHERE rl.hfe_invoiceno             = r.hfe_invoiceno") \
	_T("       AND NVL(l.hfl_hitechmachine, 'N') <> 'Y'") \
	_T("       ) chi_vienphi,") \
	_T("       (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("       FROM hms_fee_refundline rl,") \
	_T("         hms_fee_list l") \
	_T("       WHERE rl.hfe_invoiceno  = r.hfe_invoiceno") \
	_T("       AND rl.hfe_itemid       = l.hfl_feeid") \
	_T("       AND l.hfl_hitechmachine = 'Y'") \
	_T("       ) chi_maycnc,") \
	_T("       0 AS chi_thuoc,") \
	_T("       0 AS chi_vattu") \
	_T("     FROM hms_fee_invoice i") \
	_T("     LEFT JOIN hms_fee_refund r") \
	_T("     ON(r.hfe_docno     = i.hfe_docno") \
	_T("     AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("     WHERE i.hfe_status = 'P'") \
	_T("     AND i.hfe_amount   > 0") \
	_T("     AND r.hfe_type     ='F'") \
	_T("     AND (SELECT COUNT(*)") \
	_T("       FROM hms_fee_refundline") \
	_T("       WHERE hfe_invoiceno = r.hfe_invoiceno) > 0") \
	_T("     ) invoicetbl") \
	_T("   LEFT JOIN hms_doc") \
	_T("   ON(hd_docno = hfe_docno)") \
	_T("   LEFT JOIN hms_patient") \
	_T("   ON (hd_patientno = hp_patientno)") \
	_T("   LEFT JOIN hms_clinical_record") \
	_T("   ON(hcr_docno                 = hfe_docno)") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s") \
	_T(" GROUP BY fac_user_id,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index") \
	_T(" ORDER BY hfe_index %s "), szWhere, szOrderBy);
	return szSQL;
}

CString CFMInsurancePostedPaymentVoucherListSOM::GetQueryString(){
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

	szSQL.Format(_T(" SELECT NVL(trim(get_username(fac_user_id)), fac_user_id) AS user_name,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index,") \
	_T("   SUM(hfe_deposit + ref_deposit) AS trich_tam_gui,") \
	_T("   SUM(hfe_amount) AS tong_vien_phi,") \
	_T("   SUM(hfe_discount) AS BHTT,") \
	_T("   SUM(hfe_patpaid1) AS cung_chi_tra,") \
	_T("   SUM(hfe_patpaid1 + hfe_diffcost) tong_bn_tra,") \
	_T("   SUM(hfe_foodamount) AS tien_an,") \
	_T("   SUM(hfe_diffcost) AS thu_chenh,") \
	_T("   SUM(hfe_policyamount) AS thu_chinh_sach,") \
	_T("   SUM(hfe_otherpayment) AS chi_khac,") \
	_T("   SUM(hfe_miengiam) AS mien_giam,") \
	_T("   SUM( hfe_patpaid1 + hfe_diffcost + hfe_foodamount) AS cong_,") \
	_T("   SUM((hfe_deposit + hfe_miengiam + hfe_policyamount) - (hfe_patpaid1 + hfe_diffcost+hfe_foodamount)+hfe_otherpayment) AS cong_chi_,") \
	_T("   SUM((hfe_deposit) - (hfe_patpaid1 + hfe_diffcost+hfe_foodamount)) AS cong,") \
	_T("   SUM((hfe_deposit) - (hfe_patpaid1 + hfe_diffcost+hfe_foodamount)+hfe_otherpayment + ref_deposit) AS cong_chi") \
	_T(" FROM fa_cash") \
	_T(" INNER JOIN") \
	_T("   (SELECT CASE WHEN i.hfe_class ='I' THEN 'I' ELSE 'II' END AS hfe_index,") \
	_T("     r.hfe_cash_id,") \
	_T("     i.hfe_docno,") \
	_T("     i.hfe_deposit,") \
	_T("	 0 ref_deposit,") \
	_T("     i.hfe_amount,") \
	_T("     i.hfe_inspaid,") \
	_T("     i.hfe_discount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_patpaid ELSE 0 END), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE f.hfe_inspaid - f.hfe_discount END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE hfe_inspaid - hfe_discount END") \
	_T("		hfe_patpaid1,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(f.hfe_patpaid-(f.hfe_inspaid-f.hfe_discount)), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_type = 'F' AND SUBSTR(f.hfe_group, 1,2)='FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_foodamount,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx )) ELSE 0 END ") \
	_T("		AS hfe_diffcost,") \
	_T("       CASE WHEN i.hfe_class = 'I' THEN (SELECT COALESCE(SUM(hfe_patpaid), 0) FROM hms_fee f WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') IN( 'BQP', 'BBV' )) ELSE 0 END ") \
	_T("		AS hfe_policyamount,") \
	_T("     0 AS hfe_otherpayment,") \
	_T("     i.hfe_freeamount AS hfe_miengiam") \
	_T("   FROM hms_fee_invoice i") \
	_T("   LEFT JOIN hms_fee_refund r") \
	_T("   ON(r.hfe_docno     = i.hfe_docno") \
	_T("   AND r.hfe_refidx   =i.hfe_invoiceno)") \
	_T("   WHERE i.hfe_status = 'P'") \
	_T("   AND i.hfe_payment  = 0") \
	_T("   AND i.hfe_refund   > 0") \
	_T("   AND i.hfe_amount > 0") \
	_T("   AND r.hfe_type     ='F'") \
	_T("   UNION ALL") \
	_T("   SELECT 'III' AS hfe_index,") \
	_T("     hfe_cash_id,") \
	_T("     hfe_docno,") \
	_T("     0          AS hfe_deposit,") \
	_T("	 DECODE('F', hfe_type, hfe_amount, 0) ref_deposit,") \
	_T("     0          AS hfe_amount,") \
	_T("     0          AS hfe_inspaid,") \
	_T("     0          AS hfe_discount,") \
	_T("     0          AS hfe_patpaid1,") \
	_T("     0          AS hfe_foodamount,") \
	_T("     0          AS hfe_diffcost,") \
	_T("     0          AS hfe_policyamount,") \
	_T("     DECODE('F', hfe_type, 0, hfe_amount) AS hfe_othamount,") \
	_T("     0          AS hfe_miengiam") \
	_T("   FROM hms_fee_refund i") \
	_T("   WHERE hfe_status      = 'P'") \
	_T("   AND hfe_amount        > 0") \
	_T("   AND (hfe_type        <> 'F'") \
	_T("   OR (hfe_type          ='F'") \
	_T("   AND i.hfe_refidx NOT IN (SELECT hfe_invoiceno FROM hms_fee_invoice WHERE hfe_docno = i.hfe_docno AND hfe_amount > 0)))") \
	_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
	_T(" WHERE fac_cash_id              > 0") \
	_T(" %s ") \
	_T(" GROUP BY fac_user_id,") \
	_T("   fac_cashbook_id,") \
	_T("   fac_cash_id,") \
	_T("   fac_invoiceno,") \
	_T("   hfe_index") \
	_T(" ORDER BY hfe_index %s "), szWhere, szOrderBy);

	return szSQL;
}

CString CFMInsurancePostedPaymentVoucherListSOM::GetQueryString2(){
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

void CFMInsurancePostedPaymentVoucherListSOM::OnPrintSummaryReceipt(double nTotalAmount)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection* rptDetail = NULL;
	CString tmpStr, tmpStr2;
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
void CFMInsurancePostedPaymentVoucherListSOM::OnPrintFooterUser(CReportSection* rptFooter){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND fpf_module_id = '%s' "), pMF->GetModuleID());
	//szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), _T("BH"));//
	szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), m_bSOD?_T("TYC"):_T("BH"));
	szSQL.Format(_T("SELECT fpf_position field_name, fpf_title title FROM fm_print_footer WHERE 1=1 %s"), szWhere);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		rptFooter->SetValue(rs.GetValue(_T("field_name")), rs.GetValue(_T("title")));
		rs.MoveNext();
	}
}