#include "stdafx.h"
#include "PACSGeneralPatientByObjectReportC8C.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

typedef struct tagRoom
{
	CString szID;
	CString szName;
	int nIndex;
}ROOMINFO;

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSGeneralPatientByObjectReportC8C* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnToDateCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSGeneralPatientByObjectReportC8C* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnGroupAddNew();
}*/
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSGeneralPatientByObjectReportC8C* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSGeneralPatientByObjectReportC8C* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSGeneralPatientByObjectReportC8C *pVw = (CPACSGeneralPatientByObjectReportC8C *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSGeneralPatientByObjectReportC8C *pVw = (CPACSGeneralPatientByObjectReportC8C *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnRoomListDeleteItem();
} 
static int _OnAddPACSGeneralPatientByObjectReportFnc(CWnd *pWnd){
	 return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnAddPACSGeneralPatientByObjectReport();
} 
static int _OnEditPACSGeneralPatientByObjectReportFnc(CWnd *pWnd){
	 return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnEditPACSGeneralPatientByObjectReport();
} 
static int _OnDeletePACSGeneralPatientByObjectReportFnc(CWnd *pWnd){
	 return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnDeletePACSGeneralPatientByObjectReport();
} 
static int _OnSavePACSGeneralPatientByObjectReportFnc(CWnd *pWnd){
	 return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnSavePACSGeneralPatientByObjectReport();
} 
static int _OnCancelPACSGeneralPatientByObjectReportFnc(CWnd *pWnd){
	 return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnCancelPACSGeneralPatientByObjectReport();
}

static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnListCheckAll();
}

static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CPACSGeneralPatientByObjectReportC8C*)pWnd)->OnListUnCheckAll();
}

CPACSGeneralPatientByObjectReportC8C::CPACSGeneralPatientByObjectReportC8C(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 540;
	SetDefaultValues();
}
CPACSGeneralPatientByObjectReportC8C::~CPACSGeneralPatientByObjectReportC8C(){
}
void CPACSGeneralPatientByObjectReportC8C::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 465, 500);
	m_wndRoomInfo.Create(this, _T("Room List"), 10, 180, 460, 495);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 115, 55);
	m_wndYear.Create(this,120, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 245, 30, 335, 55);
	m_wndReportPeriod.Create(this,340, 30, 460, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,120, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 60, 335, 85);
	m_wndToDate.Create(this,340, 60, 460, 85); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 90, 115, 115);
	m_wndGroup.Create(this,120, 90, 460, 115); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 10, 120, 115, 145);
	m_wndPractitioner.Create(this,120, 120, 460, 145); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Dept"), 10, 150, 115, 175);
	m_wndPerformDept.Create(this,120, 150, 460, 175); 
	//m_wndPrint.Create(this, _T("&Print"), 260, 505, 360, 530);
	m_wndExport.Create(this, _T("&Export"), 365, 505, 465, 530);
	m_wndRoomList.Create(this,15, 205, 455, 490);
}
void CPACSGeneralPatientByObjectReportC8C::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);

	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);

	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);

	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);

	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(162);

	//m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(65);

	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(81);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndPractitioner.InsertColumn(1, _T("Name"), CFMT_TEXT, 235);
	m_wndPractitioner.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 80);


	m_wndPerformDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 75);
	m_wndPerformDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 235);


	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);
	m_wndRoomList.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 80);
	m_wndRoomList.SetCheckBox(TRUE);
	m_wndRoomList.ModifyStyle(0, LVS_NOSORTHEADER);

}
void CPACSGeneralPatientByObjectReportC8C::OnSetWindowEvents(){
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
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);

	m_wndRoomList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndRoomList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_szGroupKey = _T("B3200");
	m_szPerformDeptKey = _T("C8-C");

	UpdateData(false);
	OnRoomListLoadData();
	OnListCheckAll();
}
void CPACSGeneralPatientByObjectReportC8C::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);

}
void CPACSGeneralPatientByObjectReportC8C::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSGeneralPatientByObjectReportC8C::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSGeneralPatientByObjectReportC8C::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szPractitionerKey.Empty();
	m_szPerformDeptKey.Empty();

}
int CPACSGeneralPatientByObjectReportC8C::SetMode(int nMode){
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
/*void CPACSGeneralPatientByObjectReportC8C::OnYearChange(){
	
} */
/*void CPACSGeneralPatientByObjectReportC8C::OnYearSetfocus(){
	
} */
/*void CPACSGeneralPatientByObjectReportC8C::OnYearKillfocus(){
	
} */
int CPACSGeneralPatientByObjectReportC8C::OnYearCheckValue()
{
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
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}
	UpdateData(FALSE);
	return 0;
} 
void CPACSGeneralPatientByObjectReportC8C::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSGeneralPatientByObjectReportC8C::OnReportPeriodSelendok()
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
		m_szFromDate.Format(_T("%.4d/%.2d/01 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
}
/*void CPACSGeneralPatientByObjectReportC8C::OnReportPeriodSetfocus(){
	
}*/
/*void CPACSGeneralPatientByObjectReportC8C::OnReportPeriodKillfocus(){
	
}*/
long CPACSGeneralPatientByObjectReportC8C::OnReportPeriodLoadData()
{
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
/*void CPACSGeneralPatientByObjectReportC8C::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSGeneralPatientByObjectReportC8C::OnFromDateChange(){
	
} */
/*void CPACSGeneralPatientByObjectReportC8C::OnFromDateSetfocus(){
	
} */
/*void CPACSGeneralPatientByObjectReportC8C::OnFromDateKillfocus(){
	
} */
int CPACSGeneralPatientByObjectReportC8C::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSGeneralPatientByObjectReportC8C::OnToDateChange(){
	
} */
/*void CPACSGeneralPatientByObjectReportC8C::OnToDateSetfocus(){
	
} */
/*void CPACSGeneralPatientByObjectReportC8C::OnToDateKillfocus(){
	
} */
int CPACSGeneralPatientByObjectReportC8C::OnToDateCheckValue(){
	return 0;
} 
void CPACSGeneralPatientByObjectReportC8C::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSGeneralPatientByObjectReportC8C::OnGroupSelendok(){
	 
}
/*void CPACSGeneralPatientByObjectReportC8C::OnGroupSetfocus(){
	
}*/
/*void CPACSGeneralPatientByObjectReportC8C::OnGroupKillfocus(){
	
}*/
long CPACSGeneralPatientByObjectReportC8C::OnGroupLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	}

	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name ") \
		         _T("FROM hms_fee_group ") \
				 _T("WHERE substr(hfg_id,1,2)='B3' AND hfg_id not in('B3100') ") \
				 _T("ORDER BY hfg_id"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSGeneralPatientByObjectReportC8C::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSGeneralPatientByObjectReportC8C::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSGeneralPatientByObjectReportC8C::OnPractitionerSelendok(){
	 
}
/*void CPACSGeneralPatientByObjectReportC8C::OnPractitionerSetfocus(){
	
}*/
/*void CPACSGeneralPatientByObjectReportC8C::OnPractitionerKillfocus(){
	
}*/
long CPACSGeneralPatientByObjectReportC8C::OnPractitionerLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty())
	{
		szWhere.Format(_T(" AND su_userid='%s' "), m_szPractitionerKey);
	}

	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid ") \
		         _T("FROM sys_user ") \
				 _T("WHERE su_deptid in('A3','C7','C8', 'C8-C', 'TYC') ") \
				 _T("ORDER BY su_deptid, su_userid"));

	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSGeneralPatientByObjectReportC8C::OnPractitionerAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSGeneralPatientByObjectReportC8C::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSGeneralPatientByObjectReportC8C::OnPerformDeptSelendok(){
	 
}
/*void CPACSGeneralPatientByObjectReportC8C::OnPerformDeptSetfocus(){
	
}*/
/*void CPACSGeneralPatientByObjectReportC8C::OnPerformDeptKillfocus(){
	
}*/
long CPACSGeneralPatientByObjectReportC8C::OnPerformDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPerformDept.IsSearchKey() && !m_szPerformDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szPerformDeptKey);
	}
	m_wndPerformDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ") \
		         _T("WHERE sd_id IN('C7','C8','SANS', 'C8-C', 'TYC') ORDER BY sd_id"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{ 
		m_wndPerformDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSGeneralPatientByObjectReportC8C::OnPerformDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSGeneralPatientByObjectReportC8C::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSGeneralPatientByObjectReportC8C::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, szWhere;
	CString szTemp, tmpStr;
	int nIndex = 0, nColCount = 0;


	BeginWaitCursor();

	UpdateData(TRUE);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	szSQL = GetQueryString(true);
	rss.ExecSQL(szSQL);

	if (rs.GetRecordCount() + rss.GetRecordCount() == 0)
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	ROOMINFO roomInfo;
	CArray<ROOMINFO, ROOMINFO&> arrCol;

	for (int  i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
		{
			roomInfo.szID = m_wndRoomList.GetItemText(i, 0);
			roomInfo.szName = m_wndRoomList.GetItemText(i, 1);
			roomInfo.nIndex = nIndex;

			nIndex += 2;

			arrCol.Add(roomInfo);
		}
	}
	double nLineTotal = 0, nGrandTotal = 0, nTemp = 0;
	CArray <double, double> arrColTotal;
	for (int i = 0; i < arrCol.GetSize() * 2; i++)
		arrColTotal.Add(0.00);
	nColCount = arrColTotal.GetSize();
	int nRow = 1;
	int nCol = 0;

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(nCol, 2);
	xls.SetColumnWidth(nCol + 1, 15);

	for (int i = 0; i < arrCol.GetSize() * 2; i++)
	{
		if (i % 2 == 0)
			xls.SetColumnWidth(i + 2, 8);
		else
			xls.SetColumnWidth(i + 2, 6);
	}

	xls.SetRowHeight(6, 34);
	xls.SetRowHeight(7, 34);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellText(0, 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 2 + (int)arrCol.GetSize() * 2);
	xls.SetCellMergedColumns(nCol, nRow + 4, 2 + (int)arrCol.GetSize() * 2);

	xls.SetCellText(nCol, nRow + 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N L\xC0M \x43\x1EACN L\xC2M S\xC0NG"),
		            FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellMergedRows(nCol, nRow + 5, 2);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 1, nRow + 5, 2);
	TranslateString(_T("Object"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	for (int i = 0; i < arrCol.GetSize(); i++)
	{
		roomInfo = arrCol[i];
		xls.SetCellMergedColumns(nCol + 2 * i + 2, nRow + 5, 2);
		xls.SetCellText(nCol + 2 * i + 2, nRow + 5, roomInfo.szName, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 2 * i + 2, nRow + 6, _T("NG.Tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 2 * i + 3, nRow + 6, _T("N.Tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}
	xls.SetCellText(nColCount+2, nRow + 6, _T("T\x1ED5ng ng\x61ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	CString szOldLine, szNewLine;
	nIndex = 1;
	nRow = 7; 

	if (!rs.IsEOF())
	{
		nRow++;
		xls.SetCellMergedColumns(nCol, nRow, 2 + (int)arrCol.GetSize() * 2);
		xls.SetCellText(nCol, nRow, _T("Th\x65o s\x1ED1 l\x1B0\x1EE3t"), FMT_TEXT, true, 11);

		while (!rs.IsEOF())
		{
			rs.GetValue(_T("objectid"), szNewLine);

			if (!szNewLine.IsEmpty() && szOldLine != szNewLine)
			{
				if (nLineTotal > 0)
				{
					xls.SetCellText(4+roomInfo.nIndex, nRow, double2str(nLineTotal), FMT_NUMBER1);
					nGrandTotal += nLineTotal;
					nLineTotal = 0;
				}
				nRow++;

				tmpStr.Format(_T("%d"), nIndex++);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

				rs.GetValue(_T("objectname"), tmpStr);
				xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

				szOldLine = szNewLine;
			}

			rs.GetValue(_T("proomid"), tmpStr);

			for (int i = 0; i < arrCol.GetSize(); i++)
			{
				roomInfo = arrCol[i];
				if (roomInfo.szID == tmpStr)
				{
					rs.GetValue(_T("outpatient"), nTemp);
					nLineTotal += nTemp;
					arrColTotal[i*2] += nTemp;
					xls.SetCellText(nCol + 2 + roomInfo.nIndex, nRow, double2str(nTemp), FMT_INTEGER | FMT_WRAPING);
					rs.GetValue(_T("inpatient"), nTemp);
					nLineTotal += nTemp;
					arrColTotal[i*2+1] += nTemp;
					xls.SetCellText(nCol + 3 + roomInfo.nIndex, nRow, double2str(nTemp), FMT_INTEGER | FMT_WRAPING);
				}
			}
			rs.MoveNext();
		}
		if (nLineTotal > 0)
		{
			xls.SetCellText(4+roomInfo.nIndex, nRow, double2str(nLineTotal), FMT_NUMBER1);
			nGrandTotal += nLineTotal;
			nLineTotal = 0;
		}
		if (nGrandTotal > 0)
		{
			nRow++;
			xls.SetCellText(1, nRow, _T("T\x1ED5ng \x64\x1ECD\x63"), 4098, true, 11);
			for (int i = 0; i < nColCount; i++)
				xls.SetCellText(i+2, nRow, double2str(arrColTotal[i]), FMT_NUMBER1);
			xls.SetCellText(nColCount + 2, nRow, double2str(nGrandTotal), FMT_NUMBER1);
			nGrandTotal = 0;
		}	
	}
	
	nIndex = 1;
	//Reset mang tong doc
	for (int i = 0; i < nColCount; i++)
		arrColTotal[i] = 0;
	if (!rss.IsEOF())
	{
		nRow++;
		xls.SetCellMergedColumns(nCol, nRow, 2 + (int)arrCol.GetSize() * 2);
		xls.SetCellText(nCol, nRow, _T("Th\x65o s\x1ED1 \x62\x1EC7nh nh\xE2n"), FMT_TEXT, true, 11);

		while (!rss.IsEOF())
		{
			rss.GetValue(_T("objectid"), szNewLine);

			if (!szNewLine.IsEmpty() && szOldLine != szNewLine)
			{
				if (nLineTotal > 0)
				{
					xls.SetCellText(4+roomInfo.nIndex, nRow, double2str(nLineTotal), FMT_NUMBER1);
					nGrandTotal += nLineTotal;
					nLineTotal = 0;
				}
				nRow++;

				tmpStr.Format(_T("%d"), nIndex++);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

				rss.GetValue(_T("objectname"), tmpStr);
				xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

				szOldLine = szNewLine;
			}

			rss.GetValue(_T("proomid"), tmpStr);

			for (int i = 0; i < arrCol.GetSize(); i++)
			{
				roomInfo = arrCol[i];
				if (roomInfo.szID == tmpStr)
				{
					rss.GetValue(_T("outpatient"), nTemp);
					nLineTotal += nTemp;
					arrColTotal[i*2] += nTemp;
					xls.SetCellText(nCol + 2 + roomInfo.nIndex, nRow, double2str(nTemp), FMT_INTEGER | FMT_WRAPING);
					rss.GetValue(_T("inpatient"), nTemp);
					nLineTotal += nTemp;
					arrColTotal[i*2+1] += nTemp;
					xls.SetCellText(nCol + 3 + roomInfo.nIndex, nRow, double2str(nTemp), FMT_INTEGER | FMT_WRAPING);
				}
			}
			rss.MoveNext();
		}
		if (nLineTotal > 0)
		{
			xls.SetCellText(4+roomInfo.nIndex, nRow, double2str(nLineTotal), FMT_NUMBER1);
			nGrandTotal += nLineTotal;
			nLineTotal = 0;
		}
		if (nGrandTotal > 0)
		{
			nRow++;
			xls.SetCellText(1, nRow, _T("T\x1ED5ng \x64\x1ECD\x63"), 4098, true, 11);
			for (int i = 0; i < nColCount; i++)
				xls.SetCellText(i+2, nRow, double2str(arrColTotal[i]), FMT_NUMBER1);
			xls.SetCellText(nColCount + 2, nRow, double2str(nGrandTotal), FMT_NUMBER1);
			nGrandTotal = 0;
		}	
	}
	
	xls.Save(_T("Exports\\DSBenhNhanCLSTheoDoiTuong.xls"));
	EndWaitCursor();
} 
void CPACSGeneralPatientByObjectReportC8C::OnRoomListDblClick(){
	
} 
void CPACSGeneralPatientByObjectReportC8C::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSGeneralPatientByObjectReportC8C::OnRoomListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSGeneralPatientByObjectReportC8C::OnRoomListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hrl_id as ID, hrl_name as Name, HRL_DEPTID as Dept ") \
		         _T("FROM hms_roomlist ") \
				 _T("WHERE hrl_deptid IN ('C8-C', 'TYC') AND NVL(hrl_section, 'XX') ='HA' ") \
				 _T("ORDER BY hrl_id"), m_szPerformDeptKey);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Dept")),NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
}
int CPACSGeneralPatientByObjectReportC8C::OnAddPACSGeneralPatientByObjectReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSGeneralPatientByObjectReportC8C::OnEditPACSGeneralPatientByObjectReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSGeneralPatientByObjectReportC8C::OnDeletePACSGeneralPatientByObjectReport(){
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
 		OnCancelPACSGeneralPatientByObjectReport(); 
 	}
	return 0;
}
int CPACSGeneralPatientByObjectReportC8C::OnSavePACSGeneralPatientByObjectReport(){
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
 		//OnPACSGeneralPatientByObjectReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSGeneralPatientByObjectReportC8C::OnCancelPACSGeneralPatientByObjectReport(){
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
int CPACSGeneralPatientByObjectReportC8C::OnPACSGeneralPatientByObjectReportListLoadData(){
	return 0;
}

int CPACSGeneralPatientByObjectReportC8C::OnListCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (!m_wndRoomList.GetCheck(i))
			m_wndRoomList.SetCheck(i, TRUE);
	}
	return 0;
}

int CPACSGeneralPatientByObjectReportC8C::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
			m_wndRoomList.SetCheck(i, FALSE);
	}
	return 0;
}

CString CPACSGeneralPatientByObjectReportC8C::GetQueryString(bool bByPatient)
{
	CString szSQL, szWhere;
	CString szRoomID;

	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpc_groupid='%s' "), m_szGroupKey);

	if (!m_szPractitionerKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpc_practitioner='%s' "), m_szPractitionerKey);

	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
		{
			if (!szRoomID.IsEmpty())
				szRoomID += _T(",");
			szRoomID.AppendFormat(_T("%d"), str2int(m_wndRoomList.GetItemText(i, 0)));
		}
	}

	if (!szRoomID.IsEmpty())
		szWhere.AppendFormat(_T(" and hpcl_proomid in(%s) "), szRoomID);

	szWhere.AppendFormat(_T("AND HPCL_PRACTITIONER IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')"));

	if (!bByPatient)
	{
		szSQL.Format(_T(" select ho_id as objectid,") \
					_T("        ho_desc as objectname,") \
					_T("        sum(outpatient) as outpatient,") \
					_T("        sum(inpatient) as inpatient,") \
					_T("        proomid") \
					_T(" from") \
					_T(" (") \
					_T("  select ho_id,") \
					_T("         ho_desc,") \
					_T("         case when hpc_deptid in('C1.1','C1.2','C1.3','TYC', 'AB', 'TTTVDT') then 1 else 0 end as outpatient,") \
					_T("         case when hpc_deptid not in('C1.1','C1.2','C1.3','TYC', 'AB', 'TTTVDT') then 1 else 0 end as inpatient,") \
					_T("         hpcl_proomid as proomid") \
					_T("  from hms_patient") \
					_T("  left join hms_doc on(hd_patientno=hp_patientno)") \
					_T("  left join hms_object on(ho_id=hd_object)") \
					_T("  left join hms_pacsorder on(hpc_docno=hd_docno)") \
					_T("  left join hms_pacsorderline on(hpcl_orderid=hpc_orderid and hpcl_docno=hpc_docno)") \
					_T("  left join hms_roomlist on(hrl_id=hpcl_proomid and hrl_deptid IN ('A8-C', 'TYC') AND HRL_SECTION='HA')") \
					_T("  where hpcl_status='T' and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
					_T("  and hpc_groupid not in('B3100')") \
					_T("  and hpcl_proomid > 0 %s") \
					_T(" ) Tbl") \
					_T(" where length(ho_id) > 0") \
					_T(" group by ho_id, ho_desc, proomid") \
					_T(" order by cast(ho_id as integer), proomid"),					
					m_szFromDate, m_szToDate, szWhere);
	}
	else
	{
		szSQL.Format(_T(" select ho_id as objectid,") \
					_T("        ho_desc as objectname,") \
					_T("        sum(outpatient) as outpatient,") \
					_T("        sum(inpatient) as inpatient,") \
					_T("        proomid") \
					_T(" from") \
					_T(" (") \
					_T("  select distinct hpcl_docno,") \
					_T("         ho_id,") \
					_T("         ho_desc,") \
					_T("         case when hpc_deptid in('C1.1','C1.2','C1.3', 'TYC', 'AB', 'TTTVDT') then 1 else 0 end as outpatient,") \
					_T("         case when hpc_deptid not in('C1.1','C1.2','C1.3', 'TYC', 'AB', 'TTTVDT') then 1 else 0 end as inpatient,") \
					_T("         hpcl_proomid as proomid") \
					_T("  from hms_patient") \
					_T("  left join hms_doc on(hd_patientno=hp_patientno)") \
					_T("  left join hms_object on(ho_id=hd_object)") \
					_T("  left join hms_pacsorder on(hpc_docno=hd_docno)") \
					_T("  left join hms_pacsorderline on(hpcl_orderid=hpc_orderid and hpcl_docno=hpc_docno)") \
					_T("  left join hms_roomlist on(hrl_id=hpcl_proomid and hrl_deptid IN ('A8-C', 'TYC') AND HRL_SECTION='HA')") \
					_T("  where hpcl_status='T' and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
					_T("  and hpc_groupid not in('B3100')") \
					_T("  and hpcl_proomid > 0 %s") \
					_T(" ) Tbl") \
					_T(" where length(ho_id) > 0") \
					_T(" group by ho_id, ho_desc, proomid") \
					_T(" order by cast(ho_id as integer), proomid"),				
					m_szFromDate, m_szToDate, szWhere);
	}

	return szSQL;
}
