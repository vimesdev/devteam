#include "stdafx.h"
#include "FMPolicyPostedReceiptList.h"
#include "HMSMainFrame.h"
#include "StringToken.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPostedReceiptList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPostedReceiptList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedReceiptList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPostedReceiptList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyPostedReceiptList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPostedReceiptList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedReceiptList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPostedReceiptList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedReceiptList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnStatusAddNew();
}*/
static void _OnGroupBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyPostedReceiptList* )pWnd)->OnGroupBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupBySelendokFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnGroupBySelendok();
}
/*static void _OnGroupBySetfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnGroupByKillfocus();
}*/
/*static void _OnGroupByKillfocusFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnGroupByKillfocus();
}*/
static long _OnGroupByLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedReceiptList *)pWnd)->OnGroupByLoadData();
}
/*static void _OnGroupByAddNewFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList *)pWnd)->OnGroupByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMPolicyPostedReceiptList*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyPostedReceiptList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMPolicyPostedReceiptList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyPostedReceiptList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedReceiptList*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMPolicyPostedReceiptList *pVw = (CFMPolicyPostedReceiptList *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMPolicyPostedReceiptList *pVw = (CFMPolicyPostedReceiptList *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPolicyPostedReceiptList *pVw = (CFMPolicyPostedReceiptList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPolicyPostedReceiptList *pVw = (CFMPolicyPostedReceiptList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedReceiptList*)pWnd)->OnAddFMInsurancePostedPaymentVoucherList();
} 
static int _OnEditFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedReceiptList*)pWnd)->OnEditFMInsurancePostedPaymentVoucherList();
} 
static int _OnDeleteFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedReceiptList*)pWnd)->OnDeleteFMInsurancePostedPaymentVoucherList();
} 
static int _OnSaveFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedReceiptList*)pWnd)->OnSaveFMInsurancePostedPaymentVoucherList();
} 
static int _OnCancelFMInsurancePostedPaymentVoucherListFnc(CWnd *pWnd){
	 return ((CFMPolicyPostedReceiptList*)pWnd)->OnCancelFMInsurancePostedPaymentVoucherList();
}
static void _OnServicePackageSelectFnc(CWnd *pWnd)
{
	 ((CFMPolicyPostedReceiptList*)pWnd)->OnServicePackageSelect();
}
static void _OnOtherFeeSelectFnc(CWnd *pWnd)
{
	 ((CFMPolicyPostedReceiptList*)pWnd)->OnOtherFeeSelect();
}

CFMPolicyPostedReceiptList::CFMPolicyPostedReceiptList(CWnd *pParent)
{
	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMPolicyPostedReceiptList::~CFMPolicyPostedReceiptList(){
}
void CFMPolicyPostedReceiptList::OnCreateComponents()
{
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
	m_wndGroupByLabel.Create(this, _T("Group By"), 10, 120, 90, 145);
	m_wndGroupBy.Create(this,95, 120, 215, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 425, 145);
	m_wndList.Create(this,10, 150, 425, 530); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);*/
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
	m_wndPrint.Create(this, _T("&Print"), 260, 517, 340, 542);
	m_wndExport.Create(this, _T("Export XLS"), 345, 517, 425, 542);
	m_wndServicePackage.Create(this, _T("ServicePackage"), 5, 486, 170, 511);
	m_wndOtherFee.Create(this, _T("OtherFee"), 260, 486, 425, 511);

}
void CFMPolicyPostedReceiptList::OnInitializeComponents(){
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

void CFMPolicyPostedReceiptList::OnSetWindowEvents(){
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
void CFMPolicyPostedReceiptList::OnDoDataExchange(CDataExchange* pDX){
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
void CFMPolicyPostedReceiptList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPolicyPostedReceiptList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPolicyPostedReceiptList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bWithoutGeneral = FALSE;
	m_szStatusKey = _T("03");
	m_szGroupByKey = _T("01");

}

int CFMPolicyPostedReceiptList::SetMode(int nMode){
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

/*void CFMPolicyPostedReceiptList::OnYearChange(){
	
} */
/*void CFMPolicyPostedReceiptList::OnYearSetfocus(){
	
} */
/*void CFMPolicyPostedReceiptList::OnYearKillfocus(){
	
} */
int CFMPolicyPostedReceiptList::OnYearCheckValue(){
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
 
void CFMPolicyPostedReceiptList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMPolicyPostedReceiptList::OnReportPeriodSelendok(){
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

/*void CFMPolicyPostedReceiptList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPolicyPostedReceiptList::OnReportPeriodKillfocus(){
	
}*/
long CFMPolicyPostedReceiptList::OnReportPeriodLoadData(){
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

/*void CFMPolicyPostedReceiptList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPolicyPostedReceiptList::OnFromDateChange(){
	
} */
/*void CFMPolicyPostedReceiptList::OnFromDateSetfocus(){
	
} */
/*void CFMPolicyPostedReceiptList::OnFromDateKillfocus(){
	
} */
int CFMPolicyPostedReceiptList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMPolicyPostedReceiptList::OnToDateChange(){
	
} */
/*void CFMPolicyPostedReceiptList::OnToDateSetfocus(){
	
} */
/*void CFMPolicyPostedReceiptList::OnToDateKillfocus(){
	
} */
int CFMPolicyPostedReceiptList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMPolicyPostedReceiptList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyPostedReceiptList::OnClerkSelendok(){
	 
}
/*void CFMPolicyPostedReceiptList::OnClerkSetfocus(){
	
}*/
/*void CFMPolicyPostedReceiptList::OnClerkKillfocus(){
	
}*/
long CFMPolicyPostedReceiptList::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMPolicyPostedReceiptList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyPostedReceiptList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyPostedReceiptList::OnStatusSelendok(){
	 OnListLoadData();
}
/*void CFMPolicyPostedReceiptList::OnStatusSetfocus(){
	
}*/
/*void CFMPolicyPostedReceiptList::OnStatusKillfocus(){
	
}*/
long CFMPolicyPostedReceiptList::OnStatusLoadData(){
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
/*void CFMPolicyPostedReceiptList::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPolicyPostedReceiptList::OnGroupBySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPolicyPostedReceiptList::OnGroupBySelendok(){
	 
}
/*void CFMPolicyPostedReceiptList::OnGroupBySetfocus(){
	
}*/
/*void CFMPolicyPostedReceiptList::OnGroupByKillfocus(){
	
}*/
long CFMPolicyPostedReceiptList::OnGroupByLoadData(){
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
/*void CFMPolicyPostedReceiptList::OnGroupByAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMPolicyPostedReceiptList::OnWithoutGeneralSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMPolicyPostedReceiptList::OnServicePackageSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
}
	void CFMPolicyPostedReceiptList::OnOtherFeeSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
}
void CFMPolicyPostedReceiptList::OnListDblClick(){
		int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, bCheck);

} 
void CFMPolicyPostedReceiptList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPolicyPostedReceiptList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPolicyPostedReceiptList::OnListLoadData(){
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

	szWhere.AppendFormat(_T(" AND substr(fac_cashbook_id, 1, 2) in ('QU','BH') AND  fac_cashbook_id <> 'BH-PTTYC'"));


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

void CFMPolicyPostedReceiptList::OnMarkAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	
} 
void CFMPolicyPostedReceiptList::OnUnMarkSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
} 
void CFMPolicyPostedReceiptList::OnPrintSelect(){
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
 
 
int CFMPolicyPostedReceiptList::OnAddFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPolicyPostedReceiptList::OnEditFMInsurancePostedPaymentVoucherList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPolicyPostedReceiptList::OnDeleteFMInsurancePostedPaymentVoucherList(){
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
int CFMPolicyPostedReceiptList::OnSaveFMInsurancePostedPaymentVoucherList(){
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
int CFMPolicyPostedReceiptList::OnCancelFMInsurancePostedPaymentVoucherList(){
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
int CFMPolicyPostedReceiptList::OnFMInsurancePostedPaymentVoucherListListLoadData(){
	return 0;
}


void CFMPolicyPostedReceiptList::OnPrint2ndver()
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

void CFMPolicyPostedReceiptList::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotal[7];
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 7; i++)
		nTotal[i] = 0;
 	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 13);
	xls.SetCellMergedColumns(0, 3, 13);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x42\x1EA2NG K\xCA \x43H\x1EE8NG T\x1EEA GHI S\x1ED4 THU");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellMergedRows(0, 4, 2);
	xls.SetCellMergedRows(1, 4, 2);
	xls.SetCellMergedRows(2, 4, 2);
	xls.SetCellMergedRows(3, 4, 2);
	xls.SetCellMergedRows(4, 4, 2);
	xls.SetCellMergedColumns(5, 4, 3);
	xls.SetCellMergedRows(8, 4, 2);
	xls.SetCellMergedRows(9, 4, 2);
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("H\x1ECD v\xE0 t\xEAn ng\x1B0\x1EDDi thu"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 phi\x1EBFu thu"), 4098, true);
	xls.SetCellText(3, 4, _T("Tr\xED\x63h t\x1EA1m thu"), 4098, true);
	xls.SetCellText(4, 4, _T("Thu th\xEAm VP"), 4098, true);
	xls.SetCellText(5, 4, _T("T\x1ED5ng VP ph\x1EA3i thu"), 4098, true);
	xls.SetCellText(5, 5, _T("T\x1ED5ng \x43LS, KT"), 4098, true);
	xls.SetCellText(6, 5, _T("Ti\x1EC1n thu\x1ED1\x63 NGT"), 4098, true);
	xls.SetCellText(7, 5, _T("Ti\x1EC1n v\x1EADt t\x1B0 NGT"), 4098, true);
	xls.SetCellText(8, 4, _T("T\x1EA1m g\x1EEDi \x62\x61n \x111\x1EA7u"), 4098, true);
	xls.SetCellText(9, 4, _T("T\x1ED5ng thu"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("clerk")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("invoice_no")), FMT_TEXT);
		rs.GetValue(_T("invoice_deposit"), nTmp);
		nTotal[0] += nTmp;
		xls.SetCellText(3, nRow, rs.GetValue(_T("invoice_deposit")), FMT_NUMBER1);
		rs.GetValue(_T("pat_paid"), nTmp);
		nTotal[1] += nTmp;
		xls.SetCellText(4, nRow, rs.GetValue(_T("pat_paid")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_amount"), nTmp);
		nTotal[2] += nTmp;
		xls.SetCellText(5, nRow, rs.GetValue(_T("invoice_amount")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_drug"), nTmp);
		nTotal[3] += nTmp;
		xls.SetCellText(6, nRow, rs.GetValue(_T("invoice_drug")), FMT_NUMBER1);
		rs.GetValue(_T("invoice_material"), nTmp);
		nTotal[4] += nTmp;
		xls.SetCellText(7, nRow, rs.GetValue(_T("invoice_material")), FMT_NUMBER1);
		rs.GetValue(_T("deposit"), nTmp);
		nTotal[5] += nTmp;
		xls.SetCellText(8, nRow, rs.GetValue(_T("deposit")), FMT_NUMBER1);
		rs.GetValue(_T("receipt_amount"), nTmp);
		nTotal[6] += nTmp;
		xls.SetCellText(9, nRow, rs.GetValue(_T("receipt_amount")), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	for (int i = 0; i < 7; i++)
	{
		xls.SetCellText(2, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+3, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\Bang ke chung tu ghi so thu mau 2.xls"));	
}
// Su dung den ngay 15/09 khi gop quan QN, LS vao BH thi thay doi//
/*CString CFMPolicyPostedReceiptList::GetQueryString()
{
	CString szSQL, szWhere, szSubFee, szGroupBy, szReceiptStr;
	szWhere.AppendFormat(_T(" AND fac_posted = 'Y' AND substr(fac_cashbook_id, 1, 2) = 'QU'") \
						_T(" AND fac_posteddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T(" AND fac_invoicetype = 'R'"), m_szFromDate, m_szToDate);
	szReceiptStr = _T("-1");
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szReceiptStr.IsEmpty())
				szReceiptStr += _T(", ");
			szReceiptStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}	
	}
	szWhere.Format(_T(" AND fac_cash_id IN (%s)"), szReceiptStr);
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T("  AND fac_postedby = '%s'"), m_szClerkKey);

	//if (m_szGroupByKey == _T("01"))
	szGroupBy = _T(" staff, fac_invoiceno");
	if (m_szGroupByKey == _T("02"))
		szGroupBy = _T(" dept_id");

	if (m_bServicePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOtherFee) szWhere.AppendFormat(_T(" HAVING SUM(phai_thu + 0 - phi_an - phi_ranggia - hfe_packageamount)>0"));
	

	//10740
	//Edit 27/08 
	//-tach 3 nhom lon

	szSQL.Format(_T(" SELECT    invoice_class, Get_patientname(hfe_docno) patient_name, ") \
	_T("		   obj_class, staff, fac_invoiceno invoice_no, dept_id,") \
	_T("		   hfe_docno doc_no,") \
	_T("		   (select hp_workplace from hms_patient, hms_doc where hd_patientno = hp_patientno and hd_docno = hfe_docno) work_place,") \
	_T("		   (SELECT ss_desc FROM sys_sel, hms_doc WHERE ss_id='hms_rank'  and ss_code=hd_rank AND hd_docno=hfe_docno) ranklevel,") \
	_T("		   case when patient_type = 'N' then (select hcr_admitdate from hms_clinical_record where hcr_docno = hfe_docno) ") \
	_T("					 else (select max(htr_admitdate) from hms_treatment_record where htr_docno = hfe_docno and htr_treattime = treattime) end admit_date,") \
	_T("		   case when patient_type = 'N' then (select hcr_dischargedate from hms_clinical_record where hcr_docno = hfe_docno) ") \
	_T("					 else (select max(htr_dischargedate) from hms_treatment_record where htr_docno = hfe_docno and htr_treattime = treattime) end discharge_date,") \
	_T("		   SUM(ngay_dt) ngay_dt,") \
	_T("           SUM(trich_tam_gui) trich_tam_gui, ") \
	_T("           SUM(phi_an) phi_an, ") \
	_T("           SUM(phi_ranggia) phi_ranggia, ") \
	_T("           SUM(phai_thu + 0 - phi_an - phi_ranggia - hfe_packageamount) thu_khac, ") \
	_T("           SUM(hfe_packageamount) thu_goidv, ") \
	_T("		   SUM(phai_thu + 0 - phi_ranggia) phai_thu_,") \
	_T("		   SUM(phi_an + 0) phai_thu,") \
	_T("		   SUM(phai_thu + 0 - trich_tam_gui - phi_ranggia) thu_them_,") \
	_T("		   SUM(phi_an + 0 - trich_tam_gui) thu_them,") \
	_T("           SUM(tam_gui) tam_gui, ") \
	_T("		   SUM(thu_khac_) thu_khac_,") \
	_T("		   reasion,") \
	_T("           SUM(phai_thu + 0 - trich_tam_gui + tam_gui + thu_khac_) tong_thu_, ") \
	_T("		   SUM(hfe_freeamount) as miengiam,") \
	_T("           SUM(phai_thu - trich_tam_gui + tam_gui + thu_khac_) tong_thu ") \
	_T(" FROM      (SELECT    hfe_cash_id cash_id, hfe_staff staff, hfe_deptid dept_id,") \
	_T("					  (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = hfe_docno) patient_type,") \
	_T("					  hfe_treattime treattime,") \
	_T("                      hfe_docno, ") \
	_T("					  CASE WHEN hfe_class = 'I' THEN 'III' ELSE 'II' END invoice_class,") \
	_T("					  CASE WHEN hfe_class = 'I' THEN CASE WHEN hfe_objectid in (1,3,8,11,13) THEN 0 ELSE 1 END ELSE NULL END obj_class,") \
	_T("                      hfe_deposit trich_tam_gui, ") \
	_T("					  (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx)) ") \
	_T("						thu_chenh,") \
	_T("					  i.hfe_patpaid - i.hfe_otherpaid - i.hfe_freeamount phai_thu,") \
	_T("                      (select coalesce(sum(hfe_patpaid), 0) from hms_fee f where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno and f.hfe_type = 'F' AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx) AND f.hfe_status NOT IN ('O', 'C')) ") \
	_T("						phi_an, ") \

	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("             FROM hms_fee f") \
	_T("             WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("             AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("             AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
	_T("             AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("             AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV')") \
	_T("             AND f.hfe_fee_id NOT             IN") \
	_T("       (SELECT hfe_invoiceline_id") \
	_T("       FROM hms_fee_discountline d") \
	_T("       WHERE d.hfe_docno   = f.hfe_docno") \
	_T("       AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("       ))AS hfe_packageamount,") \


	_T("					  (select coalesce(sum(hfe_quantity), 0) from hms_fee f where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno and f.hfe_type = 'B' AND f.hfe_status NOT IN ('O', 'C')) ") \
	_T("					    ngay_dt,") \
	_T("                      (select coalesce(sum(hfe_patpaid), 0) from hms_fee f left join hms_fee_list on (hfl_feeid = hfe_itemid) where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx) AND f.hfe_status NOT IN ('O', 'C') AND hfl_categoryid = 127)") \
	_T("						phi_ranggia, ") \
	_T("					  0 tam_gui, 0 thu_khac_, NULL reasion, hfe_freeamount ") \
	_T("            FROM      hms_fee_invoice i ") \
	_T("            WHERE     hfe_type <> 'O' AND hfe_status NOT IN ('O', 'C') AND hfe_cash_id > 0 AND hfe_objectid in (1,3,8,11,13)") \
	_T("			AND hfe_payment > 0") \
	_T("			UNION ALL ") \
	_T("			SELECT    hfe_cash_id cash_id, hfe_staff staff, hfe_deptid dept_id,") \
	_T("					  (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = hfe_docno) patient_type,") \
	_T("					  hfe_treattime treattime,") \
	_T("                      hfe_docno, ") \
	_T("					  CASE WHEN hfe_class = 'I' THEN 'III' ELSE 'II' END invoice_class,") \
	_T("					  CASE WHEN hfe_class = 'I' THEN CASE WHEN (hfe_objectid in (1,3,8,11,13)) THEN 0 ELSE 1 END ELSE NULL END obj_class,") \
	_T("                      0 trich_tam_gui, ") \
	_T("				      0	thu_chenh,") \
	_T("					  0 phai_thu,") \
	_T("					  0 phi_an,0 AS hfe_packageamount, ") \
	_T("					  0 ngay_dt,") \
	_T("					  0 phi_ranggia, ") \
	_T("					  0 tam_gui, hfe_amount thu_khac_, hfe_desc reasion, 0 hfe_freeamount ") \
	_T("            FROM      hms_fee_invoice i ") \
	_T("            LEFT JOIN hms_doc d ON (hfe_docno=d.hd_docno) ") \
	_T("            WHERE     hfe_type = 'O' AND hfe_status NOT IN ('O', 'C') AND hfe_cash_id > 0 ") \
	_T("			AND hfe_payment > 0 AND hfe_objectid in (1,3,8,11,13)") \
	_T("		  UNION ALL") \
	_T("		  SELECT   d.hfe_cash_id, d.hfe_staff staff, hfe_deptid dept_id,") \
	_T("				   (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = d.hfe_docno) patient_type,") \
	_T("				   d.hfe_treattime treattime,") \
	_T("                   d.hfe_docno, ") \
	_T("				   'I' invoice_class,") \
	_T("				   NULL obj_class,") \
	_T("                   0 trich_tam_gui, ") \
	_T("				   0 thu_chenh,") \
	_T("				   0 phai_thu,") \
	_T("                   0 phi_an,0 AS hfe_packageamount, ") \
	_T("				   0 ngay_dt,") \
	_T("                   0 phi_ranggia, ") \
	_T("                   d.hfe_amount tam_gui, 0 thu_khac_, NULL reasion, 0 hfe_freeamount ") \
	_T("            FROM   hms_fee_deposit d") \
	_T("            WHERE  d.hfe_cash_id > 0 AND d.hfe_objectid in (1,3,8,11,13)") \
	_T("			AND d.hfe_status NOT IN ('O', 'C')) tbl ") \
	_T("	LEFT JOIN fa_cash ON ( fac_cash_id = cash_id ) ") \
	_T(" WHERE     1 = 1 %s") \
	_T(" GROUP BY invoice_class, hfe_docno, obj_class, fac_postedby, staff,reasion, fac_invoiceno, dept_id, patient_type, treattime") \
	_T(" ORDER BY invoice_class, obj_class, %s"), szWhere, szGroupBy);

   //_msg(_T("%s"), szSQL);
	return szSQL;
}*/
CString CFMPolicyPostedReceiptList::GetQueryString()
{
	CString szSQL, szWhere, szSubFee, szGroupBy, szReceiptStr;
	int nCount = 0;
	szWhere.AppendFormat(_T(" AND fac_posted = 'Y' AND substr(fac_cashbook_id, 1, 2) = 'QU'") \
						_T(" AND fac_posteddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T(" AND fac_invoicetype = 'R'"), m_szFromDate, m_szToDate);
	szReceiptStr = _T("-1");

	/*for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szReceiptStr.IsEmpty())
				szReceiptStr += _T(", ");
			szReceiptStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}	
	}

	szWhere.Format(_T(" AND fac_cash_id IN (%s)"), szReceiptStr);*/
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
		szWhere.Format(_T(" AND fac_cash_id in(%s) "), szReceiptStr);
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

	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T("  AND fac_postedby = '%s'"), m_szClerkKey);

	//if (m_szGroupByKey == _T("01"))
	szGroupBy = _T(" staff, fac_invoiceno");
	if (m_szGroupByKey == _T("02"))
		szGroupBy = _T(" dept_id");

	if (m_bServicePackage) szWhere.AppendFormat(_T(" HAVING SUM(hfe_packageamount)>0"));
	if (m_bOtherFee) szWhere.AppendFormat(_T(" HAVING SUM(phai_thu + 0 - phi_an - phi_ranggia - hfe_packageamount)>0"));
	

	//10740
	//Edit 27/08 
	//-tach 3 nhom lon

	szSQL.Format(_T(" SELECT    invoice_class, Get_patientname(hfe_docno) patient_name, ") \
	_T("		   obj_class, staff, fac_invoiceno invoice_no, dept_id,") \
	_T("		   hfe_docno doc_no,") \
	_T("		   (select hp_workplace from hms_patient, hms_doc where hd_patientno = hp_patientno and hd_docno = hfe_docno) work_place,") \
	_T("		   (SELECT ss_desc FROM sys_sel, hms_doc WHERE ss_id='hms_rank'  and ss_code=hd_rank AND hd_docno=hfe_docno) ranklevel,") \
	_T("		   case when patient_type = 'N' then (select hcr_admitdate from hms_clinical_record where hcr_docno = hfe_docno) ") \
	_T("					 else (select max(htr_admitdate) from hms_treatment_record where htr_docno = hfe_docno and htr_treattime = treattime) end admit_date,") \
	_T("		   case when patient_type = 'N' then (select hcr_dischargedate from hms_clinical_record where hcr_docno = hfe_docno) ") \
	_T("					 else (select max(htr_dischargedate) from hms_treatment_record where htr_docno = hfe_docno and htr_treattime = treattime) end discharge_date,") \
	_T("		   SUM(ngay_dt) ngay_dt,") \
	_T("           SUM(trich_tam_gui) trich_tam_gui, ") \
	_T("           SUM(phi_an) phi_an, ") \
	_T("           SUM(phi_ranggia) phi_ranggia, ") \
	_T("           SUM(phai_thu + 0 - phi_an - phi_ranggia - hfe_packageamount) thu_khac, ") \
	_T("           SUM(hfe_packageamount) thu_goidv, ") \
	_T("		   SUM(phai_thu + 0 - phi_ranggia) phai_thu_,") \
	_T("		   SUM(phi_an + 0) phai_thu,") \
	_T("		   SUM(phai_thu + 0 - trich_tam_gui - phi_ranggia) thu_them_,") \
	_T("		   SUM(phi_an + 0 - trich_tam_gui) thu_them,") \
	_T("           SUM(tam_gui) tam_gui, ") \
	_T("		   SUM(thu_khac_) thu_khac_,") \
	_T("		   reasion,") \
	_T("           SUM(phai_thu + 0 - trich_tam_gui + tam_gui + thu_khac_) tong_thu_, ") \
	_T("		   SUM(hfe_freeamount) as miengiam,") \
	_T("           SUM(phai_thu - trich_tam_gui + tam_gui + thu_khac_) tong_thu ") \
	_T(" FROM      (SELECT    hfe_cash_id cash_id, hfe_staff staff, hfe_deptid dept_id,") \
	_T("					  (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = hfe_docno) patient_type,") \
	_T("					  hfe_treattime treattime,") \
	_T("                      hfe_docno, ") \
	_T("					  CASE WHEN hfe_class = 'I' THEN 'III' ELSE 'II' END invoice_class,") \
	_T("					  CASE WHEN hfe_class = 'I' THEN CASE WHEN hfe_objectid in (1,3,8,13) THEN 0 ELSE 1 END ELSE NULL END obj_class,") \
	_T("                      hfe_deposit trich_tam_gui, ") \
	_T("					  (SELECT CASE WHEN instr(listagg(ho_scoliosis) WITHIN GROUP (ORDER BY ho_scoliosis), 'Y') > 0 THEN COALESCE(SUM(CASE WHEN f.hfe_type = 'V' THEN f.hfe_diffcost ELSE 0 END ), 0) ELSE COALESCE(SUM(CASE WHEN f.hfe_feegroup IN ('OPT_L', 'HITECH_L') AND f.hfe_type <> 'V' THEN 0 ELSE DECODE(0, f.hfe_discount, f.hfe_patpaid, f.hfe_diffcost) END), 0) END FROM hms_fee f LEFT JOIN hms_operation ON (ho_docno = f.hfe_docno AND ho_idx = hfe_orderid AND ho_itemid = hfe_itemid) WHERE f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno AND SUBSTR(f.hfe_group, 1,2) <> 'FF' AND f.hfe_status IN( 'P', 'R' ) AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BBV', 'BQP' ) AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx)) ") \
	_T("						thu_chenh,") \
	_T("					  i.hfe_patpaid - i.hfe_otherpaid - i.hfe_freeamount phai_thu,") \
	_T("                      (select coalesce(sum(hfe_patpaid), 0) from hms_fee f where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno and f.hfe_type = 'F' AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx) AND f.hfe_status NOT IN ('O', 'C')) ") \
	_T("						phi_an, ") \

	_T(" (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
	_T("             FROM hms_fee f") \
	_T("             WHERE f.hfe_docno                 = i.hfe_docno") \
	_T("             AND f.hfe_invoiceno               = i.hfe_invoiceno") \
	_T("             AND f.hfe_itemid IN (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')") \
	_T("             AND f.hfe_status                 IN( 'P', 'R' )") \
	_T("             AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV')") \
	_T("             AND f.hfe_fee_id NOT             IN") \
	_T("       (SELECT hfe_invoiceline_id") \
	_T("       FROM hms_fee_discountline d") \
	_T("       WHERE d.hfe_docno   = f.hfe_docno") \
	_T("       AND f.hfe_invoiceno = d.hfe_refidx") \
	_T("       ))AS hfe_packageamount,") \


	_T("					  (select coalesce(sum(hfe_quantity), 0) from hms_fee f where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno and f.hfe_type = 'B' AND f.hfe_status NOT IN ('O', 'C')) ") \
	_T("					    ngay_dt,") \
	_T("                      (select coalesce(sum(hfe_patpaid), 0) from hms_fee f left join hms_fee_list on (hfl_feeid = hfe_itemid) where f.hfe_docno = i.hfe_docno and f.hfe_invoiceno = i.hfe_invoiceno AND NVL(f.hfe_category, 'N') NOT IN ('Y', 'BQP', 'BBV') AND f.hfe_fee_id NOT IN (SELECT hfe_invoiceline_id FROM hms_fee_discountline d WHERE d.hfe_docno = f.hfe_docno AND f.hfe_invoiceno = d.hfe_refidx) AND f.hfe_status NOT IN ('O', 'C') AND hfl_categoryid = 127)") \
	_T("						phi_ranggia, ") \
	_T("					  0 tam_gui, 0 thu_khac_, NULL reasion, hfe_freeamount ") \
	_T("            FROM      hms_fee_invoice i ") \
	_T("            WHERE     hfe_type <> 'O' AND hfe_status NOT IN ('O', 'C') AND hfe_cash_id > 0 AND hfe_objectid in (1,3,8,13)") \
	_T("			AND hfe_payment > 0") \
	_T("			UNION ALL ") \
	_T("			SELECT    hfe_cash_id cash_id, hfe_staff staff, hfe_deptid dept_id,") \
	_T("					  (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = hfe_docno) patient_type,") \
	_T("					  hfe_treattime treattime,") \
	_T("                      hfe_docno, ") \
	_T("					  CASE WHEN hfe_class = 'I' THEN 'III' ELSE 'II' END invoice_class,") \
	_T("					  CASE WHEN hfe_class = 'I' THEN CASE WHEN (hfe_objectid in (1,3,8,13)) THEN 0 ELSE 1 END ELSE NULL END obj_class,") \
	_T("                      0 trich_tam_gui, ") \
	_T("				      0	thu_chenh,") \
	_T("					  0 phai_thu,") \
	_T("					  0 phi_an,0 AS hfe_packageamount, ") \
	_T("					  0 ngay_dt,") \
	_T("					  0 phi_ranggia, ") \
	_T("					  0 tam_gui, hfe_amount thu_khac_, hfe_desc reasion, 0 hfe_freeamount ") \
	_T("            FROM      hms_fee_invoice i ") \
	_T("            LEFT JOIN hms_doc d ON (hfe_docno=d.hd_docno) ") \
	_T("            WHERE     hfe_type = 'O' AND hfe_status NOT IN ('O', 'C') AND hfe_cash_id > 0 ") \
	_T("			AND hfe_payment > 0 AND hfe_objectid in (1,3,8,13)") \
	_T("		  UNION ALL") \
	_T("		  SELECT   d.hfe_cash_id, d.hfe_staff staff, hfe_deptid dept_id,") \
	_T("				   (select NVL(hd_outpatient, 'N') from hms_doc where hd_docno = d.hfe_docno) patient_type,") \
	_T("				   d.hfe_treattime treattime,") \
	_T("                   d.hfe_docno, ") \
	_T("				   'I' invoice_class,") \
	_T("				   NULL obj_class,") \
	_T("                   0 trich_tam_gui, ") \
	_T("				   0 thu_chenh,") \
	_T("				   0 phai_thu,") \
	_T("                   0 phi_an,0 AS hfe_packageamount, ") \
	_T("				   0 ngay_dt,") \
	_T("                   0 phi_ranggia, ") \
	_T("                   d.hfe_amount tam_gui, 0 thu_khac_, NULL reasion, 0 hfe_freeamount ") \
	_T("            FROM   hms_fee_deposit d") \
	_T("            WHERE  d.hfe_cash_id > 0 AND d.hfe_objectid in (1,3,8,13)") \
	_T("			AND d.hfe_status NOT IN ('O', 'C')) tbl ") \
	_T("	LEFT JOIN fa_cash ON ( fac_cash_id = cash_id ) ") \
	_T(" WHERE     1 = 1 %s") \
	_T(" GROUP BY invoice_class, hfe_docno, obj_class, fac_postedby, staff,reasion, fac_invoiceno, dept_id, patient_type, treattime") \
	_T(" ORDER BY invoice_class, obj_class, %s"), szWhere, szGroupBy);

   //_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CFMPolicyPostedReceiptList::GetQueryString2(){
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

void CFMPolicyPostedReceiptList::OnPrintSummaryReceipt(double nTotalAmount)
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
void CFMPolicyPostedReceiptList::OnPrintFooterUser(CReportSection* rptFooter){
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