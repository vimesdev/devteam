#include "stdafx.h"
#include "FMFoodPolicyPostedReceiptList.h"
#include "HMSMainFrame.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMFoodPolicyPostedReceiptList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFoodPolicyPostedReceiptList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodPolicyPostedReceiptList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFoodPolicyPostedReceiptList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFoodPolicyPostedReceiptList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFoodPolicyPostedReceiptList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodPolicyPostedReceiptList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFoodPolicyPostedReceiptList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodPolicyPostedReceiptList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnStatusAddNew();
}*/
static void _OnGroupBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFoodPolicyPostedReceiptList* )pWnd)->OnGroupBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupBySelendokFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnGroupBySelendok();
}
/*static void _OnGroupBySetfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnGroupByKillfocus();
}*/
/*static void _OnGroupByKillfocusFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnGroupByKillfocus();
}*/
static long _OnGroupByLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodPolicyPostedReceiptList *)pWnd)->OnGroupByLoadData();
}
/*static void _OnGroupByAddNewFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList *)pWnd)->OnGroupByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMFoodPolicyPostedReceiptList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMFoodPolicyPostedReceiptList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMFoodPolicyPostedReceiptList *pVw = (CFMFoodPolicyPostedReceiptList *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMFoodPolicyPostedReceiptList *pVw = (CFMFoodPolicyPostedReceiptList *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMFoodPolicyPostedReceiptList *pVw = (CFMFoodPolicyPostedReceiptList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMFoodPolicyPostedReceiptList *pVw = (CFMFoodPolicyPostedReceiptList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnAddFMInsurancePostedPaymentVoucherList();
} 
static int _OnEditFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnEditFMInsurancePostedPaymentVoucherList();
} 
static int _OnDeleteFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnDeleteFMInsurancePostedPaymentVoucherList();
} 
static int _OnSaveFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnSaveFMInsurancePostedPaymentVoucherList();
} 
static int _OnCancelFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnCancelFMInsurancePostedPaymentVoucherList();
}
static void _OnServicePackageSelectFnc(CWnd *pWnd)
{
	 ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnServicePackageSelect();
}
static void _OnOtherFeeSelectFnc(CWnd *pWnd)
{
	 ((CFMFoodPolicyPostedReceiptList*)pWnd)->OnOtherFeeSelect();
}

CFMFoodPolicyPostedReceiptList::CFMFoodPolicyPostedReceiptList(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMFoodPolicyPostedReceiptList::~CFMFoodPolicyPostedReceiptList(){
}

void CFMFoodPolicyPostedReceiptList::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 480);
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
	m_wndGroupByLabel.Create(this, _T("Group By"), 10, 120, 90, 145);
	m_wndGroupBy.Create(this,95, 120, 215, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 90, 300, 115);
	m_wndStatus.Create(this,305, 90, 425, 115); 
	m_wndList.Create(this,10, 150, 425, 476); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 425, 145);
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 517, 85, 542);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 517, 170, 542);
	m_wndPrint.Create(this, _T("&Print"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("Export XLS"), 345, 517, 425, 542);
	m_wndServicePackage.Create(this, _T("ServicePackage"), 5, 486, 170, 511);
	m_wndOtherFee.Create(this, _T("OtherFee"), 260, 486, 425, 511);

}
void CFMFoodPolicyPostedReceiptList::OnInitializeComponents(){
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


	m_wndGroupBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndGroupBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
}

void CFMFoodPolicyPostedReceiptList::OnSetWindowEvents(){
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
	m_wndGroupBy.SetEvent(WE_SELENDOK, _OnGroupBySelendokFnc);
	//m_wndGroupBy.SetEvent(WE_SETFOCUS, _OnGroupBySetfocusFnc);
	//m_wndGroupBy.SetEvent(WE_KILLFOCUS, _OnGroupByKillfocusFnc);
	m_wndGroupBy.SetEvent(WE_SELCHANGE, _OnGroupBySelectChangeFnc);
	m_wndGroupBy.SetEvent(WE_LOADDATA, _OnGroupByLoadDataFnc);
	//m_wndGroupBy.SetEvent(WE_ADDNEW, _OnGroupByAddNewFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndServicePackage.SetEvent(WE_CLICK, _OnServicePackageSelectFnc);
	m_wndOtherFee.SetEvent(WE_CLICK, _OnOtherFeeSelectFnc);
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

	m_mIndex[_T("I")] = _T("Thu t\x1EA1m g\x1EEDi");
	m_mIndex[_T("II")] = _T("Thu ph\xED ngo\x1EA1i tr\xFA");
	m_mIndex[_T("III")] = _T("Thu th\x61nh to\xE1n r\x61 vi\x1EC7n");

	SetMode(VM_EDIT);

}
void CFMFoodPolicyPostedReceiptList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndGroupBy.GetDlgCtrlID(), m_szGroupByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);
	DDX_Check(pDX, m_wndServicePackage.GetDlgCtrlID(), m_bServicePackage);
	DDX_Check(pDX, m_wndOtherFee.GetDlgCtrlID(), m_bOtherFee);

}
void CFMFoodPolicyPostedReceiptList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMFoodPolicyPostedReceiptList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMFoodPolicyPostedReceiptList::SetDefaultValues()
{
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szGroupByKey = _T("01");
}

int CFMFoodPolicyPostedReceiptList::SetMode(int nMode){
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

/*void CFMFoodPolicyPostedReceiptList::OnYearChange(){
	
} */
/*void CFMFoodPolicyPostedReceiptList::OnYearSetfocus(){
	
} */
/*void CFMFoodPolicyPostedReceiptList::OnYearKillfocus(){
	
} */
int CFMFoodPolicyPostedReceiptList::OnYearCheckValue(){
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
 
void CFMFoodPolicyPostedReceiptList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMFoodPolicyPostedReceiptList::OnReportPeriodSelendok(){
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

/*void CFMFoodPolicyPostedReceiptList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMFoodPolicyPostedReceiptList::OnReportPeriodKillfocus(){
	
}*/
long CFMFoodPolicyPostedReceiptList::OnReportPeriodLoadData(){
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

/*void CFMFoodPolicyPostedReceiptList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMFoodPolicyPostedReceiptList::OnFromDateChange(){
	
} */
/*void CFMFoodPolicyPostedReceiptList::OnFromDateSetfocus(){
	
} */
/*void CFMFoodPolicyPostedReceiptList::OnFromDateKillfocus(){
	
} */
int CFMFoodPolicyPostedReceiptList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMFoodPolicyPostedReceiptList::OnToDateChange(){
	
} */
/*void CFMFoodPolicyPostedReceiptList::OnToDateSetfocus(){
	
} */
/*void CFMFoodPolicyPostedReceiptList::OnToDateKillfocus(){
	
} */
int CFMFoodPolicyPostedReceiptList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMFoodPolicyPostedReceiptList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFoodPolicyPostedReceiptList::OnClerkSelendok(){
	 
}
/*void CFMFoodPolicyPostedReceiptList::OnClerkSetfocus(){
	
}*/
/*void CFMFoodPolicyPostedReceiptList::OnClerkKillfocus(){
	
}*/
long CFMFoodPolicyPostedReceiptList::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMFoodPolicyPostedReceiptList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMFoodPolicyPostedReceiptList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFoodPolicyPostedReceiptList::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMFoodPolicyPostedReceiptList::OnStatusSetfocus(){
	
}*/
/*void CFMFoodPolicyPostedReceiptList::OnStatusKillfocus(){
	
}*/
long CFMFoodPolicyPostedReceiptList::OnStatusLoadData(){
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
/*void CFMFoodPolicyPostedReceiptList::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMFoodPolicyPostedReceiptList::OnGroupBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFoodPolicyPostedReceiptList::OnGroupBySelendok(){
	 
}
/*void CFMFoodPolicyPostedReceiptList::OnGroupBySetfocus(){
	
}*/
/*void CFMFoodPolicyPostedReceiptList::OnGroupByKillfocus(){
	
}*/
long CFMFoodPolicyPostedReceiptList::OnGroupByLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndGroupBy.AddItems(_T("01"), _T("Nh\xF3m th\x65o s\x1ED1 phi\x1EBFu thu"), NULL);
	m_wndGroupBy.AddItems(_T("02"), _T("Nh\xF3m th\x65o kho\x61"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupBy.IsSearchKey() && !m_szGroupByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupByKey
};
	m_wndGroupBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMFoodPolicyPostedReceiptList::OnGroupByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMFoodPolicyPostedReceiptList::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMFoodPolicyPostedReceiptList::OnServicePackageSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
}
	void CFMFoodPolicyPostedReceiptList::OnOtherFeeSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
}
void CFMFoodPolicyPostedReceiptList::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMFoodPolicyPostedReceiptList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMFoodPolicyPostedReceiptList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMFoodPolicyPostedReceiptList::OnListLoadData(){
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

	szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('QUAN-NT', 'QUAN-NGT') "));


	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_user_id as user_id, fac_posted as  stt, fac_invoicedate, fac_approveddate, fac_posteddate ") \
		_T("FROM fa_cash WHERE fac_invoicetype = 'R' %s ORDER BY fac_cash_id"), szWhere);
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

void CFMFoodPolicyPostedReceiptList::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMFoodPolicyPostedReceiptList::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMFoodPolicyPostedReceiptList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	OnPrint2ndver();
/*
	UpdateData(TRUE);
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
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint1stver();
			break;
		case 2:
			OnPrint2ndver();
			break;
	}
*/
}
 
 
int CFMFoodPolicyPostedReceiptList::OnAddFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMFoodPolicyPostedReceiptList::OnEditFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMFoodPolicyPostedReceiptList::OnDeleteFMInsurancePostedPaymentVoucherList(){
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
int CFMFoodPolicyPostedReceiptList::OnSaveFMInsurancePostedPaymentVoucherList(){
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
int CFMFoodPolicyPostedReceiptList::OnCancelFMInsurancePostedPaymentVoucherList(){
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
int CFMFoodPolicyPostedReceiptList::OnFMInsurancePostedPaymentVoucherListListLoadData(){
	return 0;
}


void CFMFoodPolicyPostedReceiptList::OnPrint2ndver()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, tmpStr2, szPos, szReportName, szDate, szNewLev1, szOldLev1, szNewLev2, szOldLev2, szNewLev3, szOldLev3;
	long double nTotal[21], nGroupTotal1[21], nGroupTotal2[21], nGroupTotal3[21];
	szReportName = _T("Reports\\HMS\\HF_BANGKECHUNGTUGHISOTHUBNBDCS.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	for (int i = 0; i < 21; i++)
	{
		nTotal[i] = 0;
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
		nGroupTotal3[i] = 0;
	}	
	TCHAR *dat_[] = {_T("ngay_dt"), _T("trich_tam_gui"), _T("phi_an"), _T("phi_ranggia"), _T("thu_khac"),_T("thu_goidv"), _T("phai_thu"), 
					_T("thu_them"), _T("tam_gui"), _T("thu_khac_"),_T("miengiam"), _T("tong_thu")};

	TCHAR *dat__[] = {_T("ngay_dt"), _T("trich_tam_gui"), _T("phi_an"), _T("thu_khac"), _T("thu_goidv"),_T("phai_thu"), 
					_T("thu_them") , _T("phi_ranggia"), _T("tam_gui"), _T("thu_khac_"),_T("miengiam"), _T("tong_thu")};

	TCHAR *dat[] = {_T("ngay_dt"), _T("trich_tam_gui"), _T("phi_an"), _T("thu_khac"),_T("thu_goidv"), _T("phai_thu_"), 
					_T("thu_them_") , _T("phi_ranggia"), _T("tam_gui"), _T("thu_khac_"),_T("miengiam"), _T("tong_thu")};
	int nStart = 9;
	int nSumPos = 12 - 1;
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
		/*Group Seperation*/
		rs.GetValue(_T("invoice_class"), szNewLev3);
		rs.GetValue(_T("staff"), szNewLev1);
		if (m_szGroupByKey == _T("02"))
			rs.GetValue(_T("dept_id"), szNewLev1);
		rs.GetValue(_T("obj_class"), szNewLev2);
		if (szNewLev3 != szOldLev3 && (!szNewLev3.IsEmpty()))
		{
			if (nGroupTotal1[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m:"));
					for (int i = 0; i <= nSumPos; i++)
					{
						szPos.Format(_T("s%d"), i+nStart);
						tmpStr.Format(_T("%f"), nGroupTotal1[i]);
						rptGroup->SetValue(szPos, tmpStr);
						nGroupTotal2[i] += nGroupTotal1[i];
						nGroupTotal1[i] = 0;
					}
				}
			}
			if (nGroupTotal2[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng:"));
					for (int i = 0; i <= nSumPos; i++)
					{
						szPos.Format(_T("s%d"), i+nStart);
						tmpStr.Format(_T("%f"), nGroupTotal2[i]);
						rptGroup->SetValue(szPos, tmpStr);
						nGroupTotal3[i] += nGroupTotal2[i];
						nGroupTotal2[i] = 0;
					}
				}
			}
			if (nGroupTotal3[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m ph\xED:"));
					for (int i = 0; i <= nSumPos; i++)
					{
						szPos.Format(_T("s%d"), i+nStart);
						tmpStr.Format(_T("%f"), nGroupTotal3[i]);
						rptGroup->SetValue(szPos, tmpStr);
						nTotal[i] += nGroupTotal3[i];
						nGroupTotal3[i] = 0;
					}
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_CENTER);
				m_mIndex.Lookup(szNewLev3, tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldLev3 = szNewLev3;
			szOldLev2.Empty();
			szOldLev1.Empty();
			nIdx = 1;
		}
		if (szNewLev2 != szOldLev2 && (!szNewLev2.IsEmpty()))
		{
			if (nGroupTotal1[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m:"));
					for (int i = 0; i <= nSumPos; i++)
					{
						szPos.Format(_T("s%d"), i+nStart);
						tmpStr.Format(_T("%f"), nGroupTotal1[i]);
						rptGroup->SetValue(szPos, tmpStr);
						nGroupTotal2[i] += nGroupTotal1[i];
						nGroupTotal1[i] = 0;
					}
				}
			}
			if (nGroupTotal2[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng:"));
					for (int i = 0; i <= nSumPos; i++)
					{
						szPos.Format(_T("s%d"), i+nStart);
						tmpStr.Format(_T("%f"), nGroupTotal2[i]);
						rptGroup->SetValue(szPos, tmpStr);
						nTotal[i] += nGroupTotal2[i];
						nGroupTotal2[i] = 0;
					}
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_CENTER);
				rptGroup->SetValue(_T("GroupName"), 
				szNewLev2==_T("0")?_T("\x42\x1EC6NH NH\xC2N \x42\x1ED8 \x110\x1ED8I"):_T("\x42\x1EC6NH NH\xC2N \x43H\xCDNH S\xC1\x43H- \x42\x1EA0N"));
			}
			szOldLev2 = szNewLev2;
			szOldLev1.Empty();
		}
		szNewLev1.Format(_T("%s - %s"), pMF->GetDoctorName(rs.GetValue(_T("staff"))), rs.GetValue(_T("invoice_no")));
		if (m_szGroupByKey == _T("02"))
			szNewLev1.Format(_T("Kho\x61 %s"), rs.GetValue(_T("dept_id")));
		if (szOldLev1 != szNewLev1 && (!szNewLev1.IsEmpty()))
		{
			if (nGroupTotal1[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m:"));
					for (int i = 0; i <= nSumPos; i++)
					{
						szPos.Format(_T("s%d"), i+9);
						tmpStr.Format(_T("%f"), nGroupTotal1[i]);
						rptGroup->SetValue(szPos, tmpStr);
						nGroupTotal2[i] += nGroupTotal1[i];
						nGroupTotal1[i] = 0;
					}
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_LEFT);
				rptGroup->SetValue(_T("GroupName"), szNewLev1);
			}
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("work_place")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("ranklevel")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("reasion")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("doc_no")));
			rs.GetValue(_T("admit_date"), tmpStr);
			rptDetail->SetValue(_T("7"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("discharge_date"), tmpStr);
			rptDetail->SetValue(_T("8"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));			
			for (int i = 0; i <= nSumPos; i++)
			{
				rs.GetValue(dat[i], nTmp);
				tmpStr.Format(_T("%f"), nTmp);
				szPos.Format(_T("%d"), i+9);
				rptDetail->SetValue(szPos, tmpStr);
				nGroupTotal1[i] += nTmp;
			}
		}
		rs.MoveNext();
	}
	if (nGroupTotal1[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m:"));
			for (int i = 0; i <= nSumPos; i++)
			{
				szPos.Format(_T("s%d"), i+nStart);
				tmpStr.Format(_T("%f"), nGroupTotal1[i]);
				rptGroup->SetValue(szPos, tmpStr);
				nGroupTotal2[i] += nGroupTotal1[i];
				nGroupTotal1[i] = 0;
			}
		}
	}
	if (nGroupTotal2[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng:"));
			for (int i = 0; i <= nSumPos; i++)
			{
				szPos.Format(_T("s%d"), i+nStart);
				tmpStr.Format(_T("%f"), nGroupTotal2[i]);
				rptGroup->SetValue(szPos, tmpStr);
				nTotal[i] += nGroupTotal2[i];
				nGroupTotal2[i] = 0;
			}
		}
	}
	if (nGroupTotal3[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m ph\xED:"));
			for (int i = 0; i <= nSumPos; i++)
			{
				szPos.Format(_T("s%d"), i+nStart);
				tmpStr.Format(_T("%f"), nGroupTotal3[i]);
				rptGroup->SetValue(szPos, tmpStr);
				nTotal[i] += nGroupTotal3[i];
				nGroupTotal3[i] = 0;
			}
		}
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
		rptDetail->SetValue(_T("TotalGroup"), _T("T\x1ED5ng \x63\x1ED9ng:"));
		for (int i = 0; i <= nSumPos; i++)
		{
			szPos.Format(_T("s%d"), i+nStart);
			tmpStr.Format(_T("%.2f"), nTotal[i]);
			rptDetail->SetValue(szPos, tmpStr);
		}
//		tmpStr.Format(_T("%f"), nFa);
//		rptFooter->SetValue(_T("s6.1"), tmpStr);
	}
	
/*
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("eamount"), m_nEAmount);
		if (m_nEAmount > 0)
		{
			FormatCurrency(m_nEAmount, tmpStr2);
			tmpStr.Format(_T("Ngo\x1EA1i tr\xFA: %s"), tmpStr2);
		}
		rs.GetValue(_T("iamount"), m_nIAmount);
		if (m_nIAmount > 0)
		{
			FormatCurrency(m_nIAmount, tmpStr2);
			tmpStr.AppendFormat(_T("N\x1ED9i tr\xFA: %s"), tmpStr2);
		}
		if (!tmpStr.IsEmpty())
			rptFooter->SetValue(_T("cnc"), tmpStr);
		nTmp = nTotal[2] - m_nIAmount - m_nEAmount;
		FormatCurrency(nTmp, tmpStr2);
		rptFooter->SetValue(_T("vienphi"), tmpStr2);
	}
	*/
	OnPrintSummaryReceipt(nTotal[nSumPos]);
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	CString szValue;
	szValue.Format(_T("%.3f"), nTotal[nSumPos]);
	MoneyToString(szValue, tmpStr);
	tmpStr.AppendFormat(_T(" \x111\x1ED3ng.")); 
	rpt.GetReportFooter()->SetValue(_T("SuminWords"), tmpStr);
	rpt.PrintPreview();
}

void CFMFoodPolicyPostedReceiptList::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[15], nGroupTotal[15];
	for(int i = 0; i < 15; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOPQUANSO_BAOAN_QUAN_CS.xls"))) AfxMessageBox(_T("Chưa có Files TONGHOPQUANSO_BAOSUA.xls trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("khoa"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("ngayvao"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayra"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("tongtien"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[6] > 0)
	{
		xls.SetCellText(5, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 6; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[6] > 0)
	{
		xls.SetCellText(5, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 6; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOPQUANSO_BAOAN_QUAN_CS2.xls"));

}
CString CFMFoodPolicyPostedReceiptList::GetQueryString()
{
	CString szSQL, szWhere, szSubFee, szGroupBy, szReceiptStr;
	int nCount = 0;
	szWhere.AppendFormat(_T(" AND fac_posted = 'Y' AND fac_cashbook_id in ('QUAN-NT', 'QUAN-NGT')") \
						_T(" AND fac_posteddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T(" AND fac_invoicetype = 'R'"), m_szFromDate, m_szToDate);
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
		szWhere.Format(_T(" AND hfe_cash_id in(%s) "), szReceiptStr);
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
				szIds.AppendFormat(_T(" and i.hfe_cash_id IN (%s) "), tmpStr);
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
		szIds.AppendFormat(_T(" and i.hfe_cash_id IN (%s) "), tmpStr);
		szWhere.Format(_T(" AND (%s)"), szIds);
	}

	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T("  AND fac_postedby = '%s'"), m_szClerkKey);
	
	
	szSQL.Format(_T(" SELECT") \
	_T(" GET_PATIENTNAME(i.hfe_docno) as tenbn,") \
	_T(" i.hfe_docno as sohoso,") \
	_T(" i.hfe_deptid as khoa,") \
	_T(" to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
	_T(" to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
	_T(" SUM(f.HFE_QUANTITY*f.hfe_unitprice) as tongtien") \
	_T(" FROM hms_fee f") \
	_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_FOOD i ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno) ") \
	_T(" WHERE 1=1") \
	_T(" %s") \
	_T(" and f.hfe_type='F'") \
	_T(" and NVL(f.HFE_CATEGORY,'N') <> 'Y'") \
	_T(" GROUP BY i.hfe_docno, i.hfe_deptid, to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY'),to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY')") \
	_T(" order by i.hfe_deptid, i.hfe_docno"), szWhere);		

  
	return szSQL;
}

CString CFMFoodPolicyPostedReceiptList::GetQueryString2(){
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

	szWhere.Format(_T(" and hfe_cash_id in(%s)   "), szReceiptStr);


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

void CFMFoodPolicyPostedReceiptList::OnPrintSummaryReceipt(double nTotalAmount)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection* rptDetail = NULL;
	CString tmpStr, tmpStr2;
	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUTHUC30BB_THQUAN.rpt")))
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
	tmpStr += _T(" - H\x1ED9 qu\xE2n t\x1EA1i ng\x169");
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
void CFMFoodPolicyPostedReceiptList::OnPrintFooterUser(CReportSection* rptFooter){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND fpf_module_id = '%s' "), pMF->GetModuleID());
	szWhere.AppendFormat(_T(" AND (fpf_type IS NULL OR fpf_type = '%s')"), _T("QU"));
	szSQL.Format(_T("SELECT fpf_position field_name, fpf_title title FROM fm_print_footer WHERE 1=1 %s"), szWhere);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		rptFooter->SetValue(rs.GetValue(_T("field_name")), rs.GetValue(_T("title")));
		rs.MoveNext();
	}
}