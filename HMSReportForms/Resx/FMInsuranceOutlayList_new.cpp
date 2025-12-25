#include "FMInsuranceOutlayList.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceOutlayList*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceOutlayList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnAddFMInsuranceOutlayList();
} 
static int _OnEditFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnEditFMInsuranceOutlayList();
} 
static int _OnDeleteFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnDeleteFMInsuranceOutlayList();
} 
static int _OnSaveFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnSaveFMInsuranceOutlayList();
} 
static int _OnCancelFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnCancelFMInsuranceOutlayList();
} 
CFMInsuranceOutlayList::CFMInsuranceOutlayList(){

	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsuranceOutlayList::~CFMInsuranceOutlayList(){
}
void CFMInsuranceOutlayList::OnCreateComponents(){
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
	m_wndList.Create(this,10, 150, 425, 530); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);

}
void CFMInsuranceOutlayList::OnInitializeComponents(){
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


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(2, _T("Locked"), CFMT_TEXT, 80);
	m_wndList.SetCheckBox(true);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObject.Format(2, 1, 12);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
}

void CFMInsuranceOutlayList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsuranceOutlayListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsuranceOutlayListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsuranceOutlayListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsuranceOutlayListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsuranceOutlayListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFMInsuranceOutlayList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);

}
void CFMInsuranceOutlayList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceOutlayList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceOutlayList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bLocked=FALSE;
	m_bOrderByName = FALSE;
	m_bWithoutGeneral = FALSE;

}

int CFMInsuranceOutlayList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 3, 4, -1);
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

/*void CFMInsuranceOutlayList::OnYearChange(){
	
} */
/*void CFMInsuranceOutlayList::OnYearSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnYearKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnYearCheckValue(){
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
 
void CFMInsuranceOutlayList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMInsuranceOutlayList::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/.2d/ 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/.2d/.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}

	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d// 00:00"), nYear);
		tmpStr.Format(_T("%.4d//"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d//.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d// 00:00"), nYear);
		tmpStr.Format(_T("%.4d//"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d//.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d// 00:00"), nYear);
		tmpStr.Format(_T("%.4d//"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d//.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/0/ 00:00"), nYear);
		tmpStr.Format(_T("%.4d/0/"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/2/.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d// 00:00"), nYear);
		tmpStr.Format(_T("%.4d/2/"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/2/.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
	OnListLoadData();
}

/*void CFMInsuranceOutlayList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnReportPeriodLoadData(){
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

/*void CFMInsuranceOutlayList::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceOutlayList::OnFromDateChange(){
	
} */
/*void CFMInsuranceOutlayList::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnFromDateKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
/*void CFMInsuranceOutlayList::OnToDateChange(){
	
} */
/*void CFMInsuranceOutlayList::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnToDateKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
}
 
void CFMInsuranceOutlayList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnClerkSelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnClerkSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnClerkKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'PTC'"));
	return pMF->LoadUserList(&m_wndClerk, m_szClerkKey, szFilter);
}

/*void CFMInsuranceOutlayList::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceOutlayList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnStatusSelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnStatusSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnStatusKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CFMInsuranceOutlayList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceOutlayList::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnOrderBySelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnOrderBySetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnOrderByKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnOrderByLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CFMInsuranceOutlayList::OnOrderByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsuranceOutlayList::OnWithoutGeneralSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CFMInsuranceOutlayList::OnListDblClick(){
	
} 
void CFMInsuranceOutlayList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceOutlayList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceOutlayList::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND fac_user_id = '%s' AND fac_locked = 'Y' ") \
				   _T(" AND fac_updateddate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')")
					, pMF->GetCurrentUser(), m_szFromDate, m_szToDate);
	szSQL.Format(_T("SELECT fac_cash_id as idx, fac_invoiceno descr, fac_locked stt FROM fa_cash WHERE fac_invoicetype = 'P' %s ORDER BY fac_cash_id"), szWhere);
	long nCount = rs.ExecSQL(szSQL);
	m_wndList.BeginLoad();
	while (!rs.IsEOF())
	{
		m_wndList.AddItems(
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("descr")),
			rs.GetValue(_T("stt")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;	
}

void CFMInsuranceOutlayList::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
}
 
void CFMInsuranceOutlayList::OnExportSelect(){
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
	CStringArray arrCol, arrField;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 18);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 35);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 15);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 15);
	xls.SetColumnWidth(14, 15);
	xls.SetColumnWidth(15, 15);
	xls.SetColumnWidth(16, 10);
	xls.SetColumnWidth(17, 10);
	xls.SetColumnWidth(18, 10);
	xls.SetColumnWidth(19, 10);
	xls.SetColumnWidth(20, 10);
	xls.SetColumnWidth(21, 15);

	int nRow = 1;
	int nCol = 0;

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);


	xls.SetCellText(0, 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 18);
	xls.SetCellMergedColumns(nCol, nRow + 4, 18);

	xls.SetCellText(nCol, nRow + 3, _T("\x42\x1EA2NG K\xCA TH\x41NH TO\xC1N CHI \x42\x1EC6NH NH\xC2N \x42\x1ED8 \x110\x1ED8I - \x42H"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	
	nRow = 6;
	xls.SetCellMergedColumns(9, nRow, 5);
	xls.SetCellText(0, nRow, _T("STT"), 528386, true);
	xls.SetCellText(1, nRow, _T("H\x1ECD v\xE0 t\xEAn"), 528386, true);
	xls.SetCellText(2, nRow, _T("\x43\x1EA5p \x62\x1EAD\x63"), 528386, true);
	xls.SetCellText(3, nRow, _T("S\x1ED1 HS"), 528386, true);
	xls.SetCellText(4, nRow, _T("S\x1ED1 \x42\x41"), 528386, true);
	xls.SetCellText(5, nRow, _T("\x110\x1ECB\x61 \x63h\x1EC9"), 528386, true);
	xls.SetCellText(6, nRow, _T("Kho\x61"), 528386, true);
	xls.SetCellText(7, nRow, _T("S\x1ED1 ng\xE0y"), 528386, true);
	xls.SetCellText(8, nRow, _T("Tr\xED\x63h TG"), 528386, true);
	xls.SetCellText(9, nRow, _T("Vi\x1EC7n ph\xED ph\x1EA3i thu"), 528386, true);
	xls.SetCellText(9, nRow + 1, _T("Ti\x1EC1n \x103n"), 528386, true);
	xls.SetCellText(10, nRow + 1, _T("\x42\xF9 g\x1EA1o"), 528386, true);
	xls.SetCellText(11, nRow + 1, _T("BHYT"), 528386, true);
	xls.SetCellText(12, nRow + 1, _T("CS"), 528386, true);
	xls.SetCellText(13, nRow + 1, _T("\x43\x1ED9ng"), 528386, true);
	xls.SetCellText(14, nRow, _T("\x43\xF2n l\x1EA1i"), 528386, true);
	xls.SetCellText(15, nRow, _T("\x43hi tr\x1EA3 l\x1EA1i"), 528386, true);
	xls.SetCellText(16, nRow, _T("L\x1B0\x1A1ng"), 528386, true);
	xls.SetCellText(17, nRow, _T("T\xE0u \x78\x65"), 528386, true);
	xls.SetCellText(18, nRow, _T("L\x1EC5 t\x1EBFt"), 528386, true);
	xls.SetCellText(19, nRow, _T("T\x65m th\x1B0"), 528386, true);
	xls.SetCellText(20, nRow, _T("\x43hi kh\xE1\x63"), 528386, true);
	xls.SetCellText(21, nRow, _T("\x43\x1ED9ng \x63hi"), 528386, true);
	int nIndex = 1;
	nRow = 8;
	long double nTotal[14];
	double nCost;

	for (int i = 0; i < 14; i++)
	{
		nTotal[i] = 0;
	}
	arrField.Add(_T("deposit_extraction"));
	arrField.Add(_T("food_fee"));
	arrField.Add(_T(""));
	arrField.Add(_T("ins_payment_amount"));
	arrField.Add(_T("pol_payment_payment"));
	arrField.Add(_T("total_amount"));
	arrField.Add(_T("remaining_amount"));
	arrField.Add(_T("return_amount"));
	arrField.Add(_T("salary_amount"));
	arrField.Add(_T("train_amount"));
	arrField.Add(_T("holiday_amount"));
	arrField.Add(_T("stamp_amount"));
	arrField.Add(_T("other_amount"));
	arrField.Add(_T("total_payment_amount"));

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
	if (nTotal[13] > 0)
	{
		xls.SetCellText(nCol + 10, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER, true, 10);
		for (int i = 0; i < 14; i++)
		{
			tmpStr.Format(_T("%.2f"), nTotal[i]);
			xls.SetCellText(nCol + i + 8, nRow, tmpStr, FMT_NUMBER1);
		}
	}
	xls.Save(_T("Exports\\BANG KE CHI BENH NHAN BH.xls"));
}
 
int CFMInsuranceOutlayList::OnAddFMInsuranceOutlayList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsuranceOutlayList::OnEditFMInsuranceOutlayList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceOutlayList::OnDeleteFMInsuranceOutlayList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelFMInsuranceOutlayList();
 	}
	return 0;
}
int CFMInsuranceOutlayList::OnSaveFMInsuranceOutlayList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnFMInsuranceOutlayListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMInsuranceOutlayList::OnCancelFMInsuranceOutlayList(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CFMInsuranceOutlayList::OnFMInsuranceOutlayListListLoadData(){
	return 0;
}



void CFMInsuranceOutlayList::OnPrint1stver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

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

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKECHIBNBH.RPT")))
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
	long double nTotal[14];
	double nCost;
	int nIndex = 1;

	for (int i = 0; i < 14; i++)
	{
		nTotal[i] = 0;
	}
	arrField.Add(_T("deposit_extraction"));
	arrField.Add(_T("food_fee"));
	arrField.Add(_T(""));
	arrField.Add(_T("ins_payment_amount"));
	arrField.Add(_T("pol_payment_amount"));
	arrField.Add(_T("total_amount"));
	arrField.Add(_T("remaining_amount"));
	arrField.Add(_T("return_amount"));
	arrField.Add(_T("salary_amount"));
	arrField.Add(_T("train_amount"));
	arrField.Add(_T("holiday_amount"));
	arrField.Add(_T("stamp_amount"));
	arrField.Add(_T("other_amount"));
	arrField.Add(_T("total_payment_amount"));
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

		for (int j = 0; j < 14; j++)
		{
			rs.GetValue(arrField.GetAt(j), nCost);
			nTotal[j] += nCost;
			FormatCurrency(nCost, tmpStr);
			szTemp.Format(_T("%d"), j+11);
			rptDetail->SetValue(szTemp, tmpStr);	
		}		

		rs.MoveNext();
	}

	if (nTotal[5] > 0)
	{
		for (int i = 0; i < 14; i++)
		{
			FormatCurrency(nTotal[i], tmpStr);
			szTemp.Format(_T("s%d"), i + 11);
			rpt.GetReportFooter()->SetValue(szTemp, tmpStr);
		}
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	szTemp.Format(_T("%2.f"), nTotal[13]);
	MoneyToString(szTemp, tmpStr);
	tmpStr += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CFMInsuranceOutlayList::OnPrint2ndver(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szPos;
	CString szSysDate;

	szSQL = GetQueryString2();
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);
_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		if (nCount < 0)
			_msg(_T("%s"), szSQL);
		else
			_fmsg(_T("%s"), szSQL);
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOANCHIBENHNHANBHYT.RPT")))
		return;
	StringUpper(pMF->m_szHealthService, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_szHospitalName, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	CReportSection *rptDetail = NULL, *rptTmp = NULL;
	CString szOldLine, szNewLine;
	CStringArray arrField;
	long double nTotal[9], nGrpTotal[9], nTotalFa = 0, nTotalOtherpayment = 0, nGrpFa = 0, nGrpOtherpayment = 0;
	double nCost = 0, nOther_payment = 0, nFa = 0;
	int nIndex = 1;

	for (int i = 0; i < 9; i++)
	{
		nTotal[i] = 0;
		nGrpTotal[i] = 0;
	}
	/*arrField.Add(_T("patient_name"));
	arrField.Add(_T("doc_no"));
	arrField.Add(_T("admit_date"));*/
	arrField.Add(_T("deposit"));
	arrField.Add(_T("total_amount"));
	arrField.Add(_T("inspaid"));
	arrField.Add(_T("pat_paid"));
	arrField.Add(_T("diff_cost"));
	arrField.Add(_T("fee_food"));
	arrField.Add(_T("other_paid"));
	arrField.Add(_T("total_patpaid"));
	arrField.Add(_T("refund_amount"));
	while (!rs.IsEOF())
	{
		if (!m_bOrderByName)
			rs.GetValue(_T("dept_id"), szNewLine);
		if (szNewLine != szOldLine)
		{
			if (nGrpTotal[8] > 0)
			{
				rptTmp = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptTmp)
				{
					for (int i = 0; i < 9; i++)
					{
						szPos.Format(_T("s%d"), i+5);
						tmpStr.Format(_T("%f"), nGrpTotal[i]);
						rptTmp->SetValue(szPos, tmpStr);
						nTotal[i] += nGrpTotal[i];
						nGrpTotal[i] = 0;
 					}
					tmpStr.Format(_T("%f"), nGrpOtherpayment);
					rptTmp->SetValue(_T("s11.2"), tmpStr);
					nTotalOtherpayment += nGrpOtherpayment;
					tmpStr.Format(_T("%f"), nGrpFa);
					rptTmp->SetValue(_T("s11.3"), tmpStr);
					nTotalFa += nGrpFa;
					nTotalOtherpayment = 0;
					nGrpFa = 0;
				}
			}
			rptTmp = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptTmp)
			{
				rptTmp->SetValue(_T("GroupName"), pMF->GetDepartmentName(szNewLine));
			}
			szOldLine = szNewLine;
		}
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("patient_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("doc_no"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("invoice_date"), tmpStr);
		rptDetail->SetValue(_T("4.1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("discharge_date"), tmpStr);
		rptDetail->SetValue(_T("4"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		for (int j = 0; j < 9; j++)
		{
			rs.GetValue(arrField.GetAt(j), nCost);
			nGrpTotal[j] += nCost;
			FormatCurrency(nCost, tmpStr);
			szTemp.Format(_T("%d"), j+5);
			rptDetail->SetValue(szTemp, tmpStr);	
		}
		rs.GetValue(_T("other_payment"), nCost);
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("11.2"), tmpStr);
		nGrpOtherpayment += nCost;
		rs.GetValue(_T("fa"), nCost);
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("11.3"), tmpStr);
		nGrpFa += nCost;
		rs.MoveNext();
	}
	if (m_bOrderByName)
	{
		for (int i = 0; i < 9; i++)
			nTotal[i] += nGrpTotal[i];
		nTotalFa += nGrpFa;
		nTotalOtherpayment += nGrpOtherpayment;
	}
	else if (nGrpTotal[8] > 0)
	{
		rptTmp = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptTmp)
		{
			for (int i = 0; i < 9; i++)
			{
				szPos.Format(_T("s%d"), i+5);
				tmpStr.Format(_T("%f"), nGrpTotal[i]);
				rptTmp->SetValue(szPos, tmpStr);
				nTotal[i] += nGrpTotal[i];
				nGrpTotal[i] = 0;
 			}
			tmpStr.Format(_T("%f"), nGrpOtherpayment);
			rptTmp->SetValue(_T("s11.2"), tmpStr);
			nTotalOtherpayment += nGrpOtherpayment;
			tmpStr.Format(_T("%f"), nGrpFa);
			rptTmp->SetValue(_T("s11.3"), tmpStr);
			nTotalFa += nGrpFa;
			nGrpOtherpayment= 0;
			nGrpFa = 0;
		}
	}
	if (nTotal[8] > 0)
	{
		for (int i = 0; i < 9; i++)
		{
			//FormatCurrency(nTotal[i], tmpStr);
			tmpStr.Format(_T("%f"), nTotal[i]);
			szTemp.Format(_T("t%d"), i + 5);
			rpt.GetReportFooter()->SetValue(szTemp, tmpStr);
		}
		tmpStr.Format(_T("%f"), nTotalOtherpayment);
		_debug(_T("%s|%f"), tmpStr, nTotalOtherpayment);
		rpt.GetReportFooter()->SetValue(_T("t11.2"), tmpStr);
		tmpStr.Format(_T("%f"), nTotalFa);
		rpt.GetReportFooter()->SetValue(_T("t11.3"), tmpStr);
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr.Format(_T("%f"), nTotal[8]);
	rpt.GetReportFooter()->SetValue(_T("TT13"), tmpStr);
	szTemp.Format(_T("%2.f"), nTotal[8]);
	MoneyToString(szTemp, tmpStr);
	tmpStr += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}
 
CString CFMInsuranceOutlayList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szDepts, szObjects, szPaymentStr;
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szPaymentStr.IsEmpty())
				szPaymentStr += _T(", ");
			szPaymentStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if (!szPaymentStr.IsEmpty())
	{
		szWhere.Format(_T(" AND rf.hfe_objectid <> 7 AND rf.hfe_cash_id IN (%s) AND rf.hfe_status = 'P'"), szPaymentStr);
	}

	else
	{
		szWhere.Format(_T(" AND rf.hfe_objectid <> 7 AND rf.hfe_cash_id > 0 AND rf.hfe_status = 'P' ") \
					_T(" AND rf.hfe_lockeddate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
		if (!szDepts.IsEmpty())
			szWhere.AppendFormat(_T(" AND rf.hfe_deptid IN (%s)"), szDepts);
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND rf.hfe_staff = '%s'"), m_szClerkKey);
		if (!szObjects.IsEmpty())
			szWhere.AppendFormat(_T(" AND rf.hfe_objectid IN (%s)"), szObjects);
	}
	//Edited 1st
	//Added deposit refund fee
	szSQL.Format(_T("SELECT * FROM (") \
				_T(" SELECT    Get_patientname(doc_no) patient_name, ") \
				_T("           hfe_date, ") \
				_T("           CASE WHEN Coalesce(hp_rank, 0) > 0 THEN Get_syssel_desc('hms_rank', hp_rank) ") \
				_T("           ELSE Get_objectname(hd_object) ") \
				_T("           END rank, ") \
				_T("           doc_no, ") \
				_T("           hcr_recordno record_no, ") \
				_T("           CASE WHEN hp_workplace IS NOT NULL THEN hp_workplace ") \
				_T("           ELSE Cast(Hms_getaddress(hp_provid, hp_distid, hp_villid) AS NVARCHAR2(256)) ") \
				_T("           END unit, ") \
				_T("           dept_id, ") \
				_T("           hcr_sumtreat treatment_days, ") \
				_T("           ROUND(SUM(deposit_extraction)) deposit_extraction, ") \
				_T("           ROUND(SUM(food_fee)) food_fee, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 AND SUM(pol_payment_amount) > 0 THEN ROUND(SUM(scoliosis_polamt-food_fee)) ELSE ROUND(SUM(pol_payment_amount)) END pol_payment_amount, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 AND SUM(ins_payment_amount) < 0 THEN ROUND(SUM(scoliosis_insamt-food_fee)) ELSE ROUND(SUM(ins_payment_amount)) END ins_payment_amount, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(scoliosis_polamt+ scoliosis_insamt)) ELSE ROUND(SUM(total_amount)) END total_amount, ") \
				_T("           ROUND(SUM(deposit_extraction - total_amount)) remaining_amount, ") \
				_T("           ROUND(SUM(return_amount)) return_amount, ") \
				_T("           ROUND(SUM(salary_amount)) salary_amount, ") \
				_T("           ROUND(SUM(train_amount)) train_amount, ") \
				_T("           ROUND(SUM(holiday_amount)) holiday_amount, ") \
				_T("           ROUND(SUM(stamp_amount)) stamp_amount, ") \
				_T("           ROUND(SUM(other_amount)) other_amount, ") \
				_T("           CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(deposit_extraction + return_amount + salary_amount ") \
				_T("               + train_amount + holiday_amount + stamp_amount ") \
				_T("               + other_amount - scoliosis_polamt -scoliosis_insamt))") \
				_T("			ELSE ROUND(SUM(deposit_extraction + return_amount + salary_amount ") \
				_T("               + train_amount + holiday_amount + stamp_amount ") \
				_T("               + other_amount - total_amount)) END total_payment_amount ") \
				_T(" FROM      (SELECT    rf.hfe_docno doc_no, ") \
				_T("					  rf.hfe_date hfe_date,") \
				_T("					  rf.hfe_deptid dept_id,") \
				_T("                      coalesce(hfe_deposit, 0) deposit_extraction, ") \
				_T("                      0 food_fee, ") \
				_T("                      0 pol_payment_amount, ") \
				_T("                      0 ins_payment_amount, ") \
				_T("                      0 total_amount, ") \
				_T("					  0 return_amount,") \
				_T("                      Coalesce(hfe_salary_amount, 0)  salary_amount, ") \
				_T("                      Coalesce(hfe_train_amount, 0)   train_amount, ") \
				_T("                      Coalesce(hfe_holiday_amount, 0) holiday_amount, ") \
				_T("                      Coalesce(hfe_stamp_amount, 0)   stamp_amount, ") \
				_T("                      Coalesce(hfe_other_amount, 0)   other_amount, ") \
				_T("					  0 is_scoliosis, 0 scoliosis_insamt, 0 scoliosis_polamt") \
				_T("            FROM      hms_fee_refund rf ") \
				_T("			LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = rf.hfe_docno AND i.hfe_invoiceno = rf.hfe_refidx)") \
				_T("            LEFT JOIN hms_fee_sold fs ON ( i.hfe_docno = fs.hfe_docno ") \
				_T("                                           AND i.hfe_invoiceno = fs.hfe_invoiceno ) ") \
				_T("            WHERE     rf.hfe_class IN ( 'A', 'I' ) ") \
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT    rf.hfe_docno                 doc_no, ") \
				_T("					  rf.hfe_date,") \
				_T("					  rf.hfe_deptid,") \
				_T("                      0 deposit_extraction, ") \
				_T("                      CASE WHEN f.hfe_type = 'F' THEN f.hfe_cost ") \
				_T("                      ELSE 0 ") \
				_T("                      END food_fee, ") \
				_T("                      CASE WHEN ( f.hfe_type <> 'F' ") \
				_T("                             AND i.hfe_objectid IN ( 1, 3, 8, 13 ) ) THEN f.hfe_patpaid ELSE 0") \
				_T("                      END pol_payment_amount, ") \
				_T("                      CASE WHEN ( f.hfe_type <> 'F' ") \
				_T("                             AND i.hfe_objectid NOT IN ( 1, 3, 8, 13 ) ) THEN f.hfe_patpaid ELSE 0") \
				_T("                      END ins_payment_amount, ") \
				_T("                      f.hfe_patpaid total_amount,") \
				_T("					  0,") \
				_T("                      0 salary_amount, ") \
				_T("                      0 train_amount, ") \
				_T("                      0 holiday_amount, ") \
				_T("                      0 stamp_amount, ") \
				_T("                      0                           other_amount, ") \
				_T("					  0, 0, 0") \
				_T("            FROM      hms_fee_refund rf ") \
				_T("			LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = rf.hfe_docno AND i.hfe_invoiceno = rf.hfe_refidx)") \
				_T("            LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T("            WHERE     f.hfe_status = 'P' ") \
				_T("                  AND rf.hfe_class IN ('A', 'I') ") \
				_T("				  AND f.hfe_category <> 'Y' AND f.hfe_feegroup NOT IN ('OPT_L', 'HITECH_L') ") \
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT    rf.hfe_docno                 doc_no, ") \
				_T("					  rf.hfe_date,") \
				_T("					  rf.hfe_deptid,") \
				_T("                      0                           deposit_extraction, ") \
				_T("                      CASE WHEN f.hfe_type = 'F' THEN f.hfe_cost ") \
				_T("                      ELSE 0 ") \
				_T("                      END                         food_fee, ") \
				_T("                      CASE WHEN ( f.hfe_type <> 'F' ") \
				_T("                             AND i.hfe_objectid IN ( 1, 3, 8, 13 ) ) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0") \
				_T("                      END                         pol_payment_amount, ") \
				_T("                      CASE WHEN ( f.hfe_type <> 'F' ") \
				_T("                             AND i.hfe_objectid NOT IN ( 1, 3, 8, 13 ) ) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0") \
				_T("                      END                         ins_payment_amount, ") \
				_T("                      f.hfe_inspaid + f.hfe_diffcost -f.hfe_discount total_amount,") \
				_T("					  0,") \
				_T("                      0 salary_amount, ") \
				_T("                      0 train_amount, ") \
				_T("                      0 holiday_amount, ") \
				_T("                      0 stamp_amount, ") \
				_T("                      0 other_amount, ") \
				_T("					  CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END,") \
				_T("					  CASE WHEN ho_scoliosis = 'Y' AND i.hfe_objectid NOT IN (1, 3, 8, 13) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0 END, ") \
				_T("					  CASE WHEN ho_scoliosis = 'Y' AND i.hfe_objectid IN (1, 3, 8, 13) THEN f.hfe_inspaid + f.hfe_diffcost - f.hfe_discount ELSE 0 END ") \
				_T("            FROM      hms_fee_refund rf ") \
				_T("			LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = rf.hfe_docno AND i.hfe_invoiceno = rf.hfe_refidx)") \
				_T("            LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T("			LEFT JOIN hms_operation ON (f.hfe_docno = ho_docno AND f.hfe_orderid = ho_idx)") \
				_T("            WHERE     f.hfe_status = 'P' ") \
				_T("                  AND rf.hfe_class IN ('A', 'I') ") \
				_T("				  AND f.hfe_category <> 'Y' AND f.hfe_type = 'V' ") \
				_T("			%s") \
				_T("            UNION ALL ") \
				_T("            SELECT    rf.hfe_docno                 doc_no, ") \
				_T("					  rf.hfe_date,") \
				_T("					  rf.hfe_deptid,") \
				_T("                      0 deposit_extraction, ") \
				_T("                      0 food_fee, ") \
				_T("                      0 pol_payment_amount, ") \
				_T("                      0 ins_payment_amount, ") \
				_T("                      0 total_amount,") \
				_T("					  rf.hfe_amount,") \
				_T("                      0 salary_amount, ") \
				_T("                      0 train_amount, ") \
				_T("                      0 holiday_amount, ") \
				_T("                      0 stamp_amount, ") \
				_T("                      0 other_amount, ") \
				_T("					  0, 0, 0") \
				_T("            FROM      hms_fee_refund rf ") \
				_T("			LEFT JOIN hms_fee_deposit d ON (d.hfe_docno = rf.hfe_docno AND d.hfe_invoiceno = rf.hfe_refidx)") \
				_T("            WHERE     rf.hfe_class IN ('A', 'I') AND d.hfe_status = 'R' ") \
				_T("			%s)") \
				_T(" LEFT JOIN hms_doc ON (hd_docno = doc_no) ") \
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
				_T("              hd_object, ") \
				_T("              hcr_sumtreat ") \
				_T(" ORDER BY patient_name)") \
				_T(" WHERE total_payment_amount > 0"), szWhere, szWhere, szWhere, szWhere);
_fmsg(_T("%s"), szSQL);


	return szSQL;
}

CString CFMInsuranceOutlayList::GetQueryString2(){
	CString szSQL, szWhere;
	CString szDepts, szObjects, szReceiptStr, szIESQL, szOutpatientSQL, szOrderBy, szSubWhere;


	szReceiptStr = _T("-1");
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szReceiptStr.AppendFormat(_T(",%s"), m_wndList.GetItemText(i, 0));
		}
	}
	szWhere.Format(_T(" and fac_cash_id in(%s)  and fac_posted='Y' "), szReceiptStr);


	szOrderBy = _T(" ORDER BY dept_id, doc_no");
	if (m_bOrderByName)
		szOrderBy = _T(" ORDER BY patient_name");

	szSQL.Format(_T(" SELECT hfe_index, hfe_docno                                                                                    AS doc_no,") \
_T("   hfe_deptid                                                                                        AS dept_id,") \
_T("   hfe_dischargedate                                                                                 AS discharge_date,") \
_T("   hfe_date                                                                                          AS invoice_date,") \
_T("   get_patientname(hfe_docno)                                                                        AS patient_name,") \
_T("   hfe_objectid                                                                                      AS object_id,") \
_T("   hfe_cash_id                                                                                       AS cash_id,") \
_T("   hfe_staff                                                                                         AS staff,") \
_T("   hfe_lockeddate                                                                                    AS lockeddate,") \
_T("   SUM(hfe_deposit)                                                                                  AS deposit,") \
_T("   SUM(hfe_amount)                                                                                   AS total_amount,") \
_T("   SUM(hfe_discount)                                                                                 AS inspaid,") \
_T("   SUM(hfe_patpaid1)                                                                                 AS pat_paid,") \
_T("   SUM(hfe_foodamount)                                                                               AS fee_food,") \
_T("   SUM(hfe_diffcost - hfe_foodamount)                                                                AS diff_cost,") \
_T("   SUM(hfe_policyamount)                                                                             AS other_paid,") \
_T("   SUM(hfe_otherpayment)                                                                             AS other_payment,") \
_T("   SUM(hfe_miengiam)                                                                                 AS fa,") \
_T("   SUM( hfe_patpaid1 + hfe_diffcost )                                                                AS total_patpaid,") \
_T("   SUM(hfe_deposit   - (hfe_patpaid1 + hfe_diffcost+hfe_policyamount)+hfe_miengiam+hfe_otherpayment) AS refund_amount") \
_T(" FROM fa_cash") \
_T(" INNER JOIN") \
_T("   (SELECT") \
_T("     CASE") \
_T("       WHEN hfe_class='I'") \
_T("       THEN hcr_dischargedate") \
_T("       ELSE hd_enddate") \
_T("     END AS hfe_dischargedate,") \
_T("     invoicetbl.*") \
_T("   FROM") \
_T("     (SELECT") \
_T("       CASE") \
_T("         WHEN i.hfe_class ='I'") \
_T("         THEN 'I'") \
_T("         ELSE 'III'") \
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
_T("       i.hfe_amount,") \
_T("       i.hfe_inspaid,") \
_T("       i.hfe_discount,") \
_T("       i.hfe_copayment AS hfe_patpaid1,") \
_T("       CASE") \
_T("         WHEN i.hfe_class = 'I'") \
_T("         THEN") \
_T("           (SELECT COALESCE(SUM(hfe_patpaid), 0)") \
_T("           FROM hms_fee f") \
_T("           WHERE f.hfe_docno                 = i.hfe_docno") \
_T("           AND f.hfe_invoiceno               = i.hfe_invoiceno") \
_T("           AND f.hfe_type                    = 'F'") \
_T("           AND SUBSTR(f.hfe_group, 1,2)      ='FF'") \
_T("           AND f.hfe_status                 IN( 'P', 'R' )") \
_T("           AND NVL(f.hfe_category, 'N') NOT IN( 'Y', 'BQP', 'BBV' )") \
_T("           )") \
_T("         ELSE 0") \
_T("       END AS hfe_foodamount,") \
_T("       i.hfe_diffcost,") \
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
_T("       i.hfe_freeamount AS hfe_miengiam") \
_T("     FROM hms_fee_invoice i") \
_T("     LEFT JOIN hms_fee_refund r") \
_T("     ON(r.hfe_docno     = i.hfe_docno") \
_T("  AND r.hfe_refidx   =i.hfe_invoiceno)") \
_T("     WHERE i.hfe_status = 'P'") \
_T("     AND i.hfe_payment  = 0") \
_T("     AND i.hfe_refund   > 0") \
_T("     AND r.hfe_type     ='F'") \
_T("     UNION ALL") \
_T("     SELECT 'II' AS hfe_index,") \
_T("       hfe_cash_id,") \
_T("       hfe_docno,") \
_T("       hfe_date,") \
_T("       hfe_lockeddate,") \
_T("       hfe_staff,") \
_T("       hfe_objectid,") \
_T("       hfe_deptid,") \
_T("       hfe_class,") \
_T("       0          AS hfe_deposit,") \
_T("       0          AS hfe_amount,") \
_T("       0          AS hfe_inspaid,") \
_T("       0          AS hfe_discount,") \
_T("       0          AS hfe_patpaid1,") \
_T("       0          AS hfe_foodamount,") \
_T("       0          AS hfe_diffcost,") \
_T("       0          AS hfe_policyamount,") \
_T("       hfe_amount AS hfe_othamount,") \
_T("       0          AS hfe_miengiam") \
_T("     FROM hms_fee_refund i") \
_T("     WHERE hfe_status = 'P'") \
_T("     AND hfe_amount   > 0") \
_T(" and (hfe_type <> 'F' or (hfe_type='F' and hfe_serialno is not null)) ") \
_T("     ) invoicetbl") \
_T("   LEFT JOIN hms_doc") \
_T("   ON(hd_docno = hfe_docno)") \
_T("   LEFT JOIN hms_clinical_record") \
_T("   ON(hcr_docno                 = hfe_docno)") \
_T("   ) tblInvoice ON( hfe_cash_id = fac_cash_id )") \
_T(" WHERE fac_cash_id              > 0 %s ") \
_T(" GROUP BY hfe_index, hfe_docno ,") \
_T("   hfe_deptid ,") \
_T("   hfe_dischargedate,") \
_T("   hfe_date,") \
_T("   hfe_objectid,") \
_T("   hfe_cash_id,") \
_T("   hfe_staff,") \
_T("   hfe_lockeddate") \
_T("  %s "), szWhere, szOrderBy );


return szSQL;

	//
	////
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
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
		szWhere.Format(_T(" AND object_id <> 7 AND cash_id > 0") \
					_T(" AND lock_date BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
		if (!szDepts.IsEmpty())
			szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDepts);
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND staff = '%s'"), m_szClerkKey);
		if (!szObjects.IsEmpty())
			szWhere.AppendFormat(_T(" AND object_id IN (%s)"), szObjects);
	}
	if (m_bWithoutGeneral)
		szSubWhere = _T(" AND NVL(i.hfe_general_rank, 'N') <> 'Y' ");
	szOrderBy = _T(" ORDER BY dept_id, doc_no");
	if (m_bOrderByName)
		szOrderBy = _T(" ORDER BY patient_name");

	szIESQL.Format(_T(" SELECT    i.hfe_docno doc_no, ") \
				_T("           i.hfe_deptid dept_id, ") \
				_T("		   i.hfe_date invoice_date,") \
				_T("		   hcr_admitdate admit_date,") \
				_T("           Get_patientname(i.hfe_docno) patient_name, ") \
				_T("		   i.hfe_objectid object_id,") \
				_T("		   i.hfe_cash_id cash_id,") \
				_T("		   i.hfe_staff staff,") \
				_T("		   i.hfe_lockeddate lock_date,") \
				_T("           i.hfe_deposit deposit, ") \
				_T("           i.hfe_amount total_amount, ") \
				_T("           i.hfe_discount inspaid, ") \
				_T("           i.hfe_inspaid - i.hfe_discount pat_paid, ") \
				_T("           f.fee_food, ") \
				_T("		   i.hfe_otherpaid other_paid,") \
				_T("		   0 other_payment,") \
				_T("		   i.hfe_freeamount fa,") \
				_T("           CASE WHEN is_scoliosis > 0 THEN l_diffcost - f.fee_food ELSE f.diff_cost END diff_cost, ") \
				_T("           i.hfe_patpaid total_patpaid, ") \
				_T("           i.hfe_refund refund_amount ") \
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
				_T(" WHERE     Length(hc_cardno) > 0 AND i.hfe_status IN ( 'P', 'R' ) AND NVL(hd_outpatient, 'N') <> 'Y'") \
				_T(" AND	   i.hfe_refund > 0 AND hcr_status = 'T' %s"), szSubWhere);

	//Tra tam gui doi doi tuong
	szIESQL.AppendFormat(_T(" UNION ALL") \
				_T(" SELECT    rf.hfe_docno doc_no, ") \
				_T("           rf.hfe_deptid dept_id, ") \
				_T("		   rf.hfe_date,") \
				_T("		   hcr_admitdate admit_date,") \
				_T("           Get_patientname(rf.hfe_docno) patient_name, ") \
				_T("		   rf.hfe_objectid object_id,") \
				_T("		   rf.hfe_cash_id cash_id,") \
				_T("		   rf.hfe_staff staff,") \
				_T("		   rf.hfe_lockeddate lock_date,") \
				_T("           coalesce(d.hfe_amount, 0) deposit, ") \
				_T("           0 total_amount, ") \
				_T("           0 inspaid, ") \
				_T("           0 pat_paid, ") \
				_T("           0, ") \
				_T("		   0 other_paid,") \
				_T("		   CASE WHEN rf.hfe_type = 'G' THEN rf.hfe_amount ELSE 0 END,") \
				_T("		   0,") \
				_T("           0, ") \
				_T("           0 total_patpaid, ") \
				_T("           d.hfe_amount refund_amount ") \
				_T(" FROM hms_fee_refund rf") \
				_T(" LEFT JOIN hms_fee_deposit d ON (rf.hfe_refidx = d.hfe_invoiceno)") \
				_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = rf.hfe_docno)") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = hcr_docno ) ") \
				_T(" LEFT JOIN hms_card ON ( hd_patientno = hc_patientno AND hd_cardidx = hc_idx ) ") \
				_T(" WHERE (d.hfe_status = 'R' OR rf.hfe_type = 'G') AND rf.hfe_status = 'P'") \
				_T(" AND NVL(hd_outpatient, 'N') <> 'Y' AND hcr_status = 'T'"));

	szOutpatientSQL.Format(_T(" SELECT    i.hfe_docno doc_no, ") \
				_T("           i.hfe_deptid dept_id, ") \
				_T("		   i.hfe_date,") \
				_T("		   htr_admitdate admit_date,") \
				_T("           Get_patientname(i.hfe_docno) patient_name, ") \
				_T("		   i.hfe_objectid object_id,") \
				_T("		   i.hfe_cash_id cash_id,") \
				_T("		   i.hfe_staff staff,") \
				_T("		   i.hfe_lockeddate lock_date,") \
				_T("           i.hfe_deposit deposit, ") \
				_T("           i.hfe_amount total_amount, ") \
				_T("           i.hfe_discount inspaid, ") \
				_T("           i.hfe_inspaid - i.hfe_discount pat_paid, ") \
				_T("           f.fee_food, ") \
				_T("		   i.hfe_otherpaid other_paid,") \
				_T("		   0,") \
				_T("		   i.hfe_freeamount,") \
				_T("           CASE WHEN is_scoliosis > 0 THEN l_diffcost - f.fee_food ELSE f.diff_cost END diff_cost, ") \
				_T("           i.hfe_patpaid total_patpaid, ") \
				_T("           i.hfe_refund refund_amount ") \
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
				_T("							END") \
				_T("                           END ") \
				_T("                       END) diff_cost, ") \
				_T("				   SUM(CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END) is_scoliosis,") \
				_T("				   SUM(CASE WHEN hfe_type = 'V' THEN hfe_diffcost ELSE 0 END) l_diffcost") \
				_T("            FROM   hms_fee ") \
				_T("			LEFT JOIN hms_operation ON (ho_docno = hfe_docno AND ho_idx = hfe_orderid)") \
				_T("            WHERE  hfe_category <> 'Y' AND hfe_status IN ('P', 'R')") \
				_T("            GROUP  BY hfe_docno,hfe_invoiceno) f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
				_T(" WHERE     Length(hc_cardno) > 0 AND i.hfe_status IN ( 'P', 'R' ) AND NVL(hd_outpatient, 'N') = 'Y'") \
				_T("  AND i.hfe_refund > 0 AND htr_status = 'T' %s"), szSubWhere);
	//Tra tam gui doi doi tuong
	szOutpatientSQL.AppendFormat(_T(" UNION ALL") \
				_T(" SELECT    rf.hfe_docno doc_no, ") \
				_T("           rf.hfe_deptid dept_id, ") \
				_T("		   rf.hfe_date,") \
				_T("		   hcr_admitdate admit_date,") \
				_T("           Get_patientname(rf.hfe_docno) patient_name, ") \
				_T("		   rf.hfe_objectid object_id,") \
				_T("		   rf.hfe_cash_id cash_id,") \
				_T("		   rf.hfe_staff staff,") \
				_T("		   rf.hfe_lockeddate lock_date,") \
				_T("           d.hfe_amount deposit, ") \
				_T("           0 total_amount, ") \
				_T("           0 inspaid, ") \
				_T("           0 pat_paid, ") \
				_T("           0, ") \
				_T("		   0 other_paid,") \
				_T("		   CASE WHEN rf.hfe_type = 'G' THEN rf.hfe_amount ELSE 0 END,") \
				_T("		   0,") \
				_T("           0, ") \
				_T("           0 total_patpaid, ") \
				_T("           d.hfe_amount refund_amount ") \
				_T(" FROM hms_fee_refund rf") \
				_T(" LEFT JOIN hms_fee_deposit d ON (rf.hfe_refidx = d.hfe_invoiceno)") \
				_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = rf.hfe_docno)") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = hcr_docno ) ") \
				_T(" LEFT JOIN hms_card ON ( hd_patientno = hc_patientno AND hd_cardidx = hc_idx ) ") \
				_T(" WHERE (d.hfe_status = 'R' OR rf.hfe_type = 'G') AND rf.hfe_status = 'P'") \
				_T(" AND NVL(hd_outpatient, 'N') = 'Y' AND hcr_status = 'T'"));
	szSQL.Format(_T("SELECT * FROM (%s UNION ALL %s) WHERE 1=1 %s %s"), szIESQL, szOutpatientSQL, szWhere, szOrderBy);

	return szSQL;
}


