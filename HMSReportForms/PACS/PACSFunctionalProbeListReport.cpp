#include "stdafx.h"
#include "PACSFunctionalProbeListReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSFunctionalProbeListReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListReport *)pWnd)->OnToDateCheckValue();
}
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListReport*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSFunctionalProbeListReport*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListReport*)pWnd)->OnRoomListDeleteItem();
} 
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport*)pWnd)->OnOutPatientSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport*)pWnd)->OnPolicySelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSFunctionalProbeListReport *pVw = (CPACSFunctionalProbeListReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSFunctionalProbeListReport *pVw = (CPACSFunctionalProbeListReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSFunctionalProbeListReport* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListReport *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnGroupAddNew();
}*/
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSFunctionalProbeListReport* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CPACSFunctionalProbeListReport *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CPACSFunctionalProbeListReport *)pWnd)->OnPractitionerAddNew();
}*/
static int _OnAddPACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListReport*)pWnd)->OnAddPACSFunctionalProbeListReport();
} 
static int _OnEditPACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListReport*)pWnd)->OnEditPACSFunctionalProbeListReport();
} 
static int _OnDeletePACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListReport*)pWnd)->OnDeletePACSFunctionalProbeListReport();
} 
static int _OnSavePACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListReport*)pWnd)->OnSavePACSFunctionalProbeListReport();
} 
static int _OnCancelPACSFunctionalProbeListReportFnc(CWnd *pWnd){
	 return ((CPACSFunctionalProbeListReport*)pWnd)->OnCancelPACSFunctionalProbeListReport();
} 

static void _OnKhamsuckhoe_TYCSelectFnc(CWnd *pWnd){
	 ((CPACSFunctionalProbeListReport*)pWnd)->OnKhamsuckhoe_TYCSelect();
}
CPACSFunctionalProbeListReport::CPACSFunctionalProbeListReport(CWnd* pParent)
{
	m_nDlgWidth = 476;
	m_nDlgHeight = 560;
	SetDefaultValues();
}
CPACSFunctionalProbeListReport::~CPACSFunctionalProbeListReport()
{
}
void CPACSFunctionalProbeListReport::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 465, 505);
	m_wndRoomInfo.Create(this, _T("Room List"), 10, 150, 460, 500);
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
	m_wndRoomList.Create(this,15, 175, 455, 495);
	m_wndRoomList.SetCheckBox(true);
	m_wndInPatient.Create(this, _T("InPatient"), 10, 510, 90, 535);
	m_wndOutPatient.Create(this, _T("OutPatient"), 95, 510, 175, 535);
	m_wndInsurance.Create(this, _T("Bảo hiểm"),10, 540, 90, 560);
	m_wndService.Create(this, _T("Dịch vụ"), 95, 540, 175, 560);
	m_wndPolicy.Create(this, _T("Policies"), 180,540, 260, 560);
	m_wndPrint.Create(this, _T("&Print"), 260, 510, 360, 535);
	m_wndExport.Create(this, _T("&Export"), 365, 510, 465, 535);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 465, 505);
	m_wndRoomInfo.Create(this, _T("Room List"), 10, 150, 460, 500);
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
	m_wndRoomList.Create(this,15, 175, 455, 495);
	m_wndRoomList.SetCheckBox(true);
	m_wndInPatient.Create(this, _T("InPatient"), 10, 510, 90, 535);
	m_wndOutPatient.Create(this, _T("OutPatient"), 95, 510, 175, 535);
	m_wndPrint.Create(this, _T("&Print"), 260, 510, 360, 535);
	m_wndExport.Create(this, _T("&Export"), 365, 510, 465, 535);
	m_wndInsurance.Create(this, _T("Bảo hiểm"), 10, 540, 90, 560);
	m_wndService.Create(this, _T("Dịch vụ"), 95, 540, 175, 560);
	m_wndPolicy.Create(this, _T("Policies"), 180, 540, 260, 560);
	m_wndKhamsuckhoe_TYC.Create(this, _T("Khamsuckhoe_TYC"), 10, 567, 260, 592);

}
void CPACSFunctionalProbeListReport::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(162);
	//m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(65);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_TEXT, 75);
	m_wndPractitioner.InsertColumn(1, _T("Name"), CFMT_TEXT, 235);

	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);

}
void CPACSFunctionalProbeListReport::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
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
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.AddEvent(1, _T("Delete"), _OnRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndKhamsuckhoe_TYC.SetEvent(WE_CLICK, _OnKhamsuckhoe_TYCSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_szCondition = _T("I");
	m_szGroupKey = _T("B3200");
	UpdateData(false);
	OnRoomListLoadData();
}
void CPACSFunctionalProbeListReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndKhamsuckhoe_TYC.GetDlgCtrlID(), m_bKhamsuckhoe_TYC);

}
void CPACSFunctionalProbeListReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSFunctionalProbeListReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSFunctionalProbeListReport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szPractitionerKey.Empty();
	m_bInPatient=TRUE;
	m_bOutPatient=FALSE;
	m_nInsurance=0;
	m_nService=1;
	m_nPolicy=1;
	m_bKhamsuckhoe_TYC=FALSE;
}
int CPACSFunctionalProbeListReport::SetMode(int nMode){
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
/*void CPACSFunctionalProbeListReport::OnYearChange(){
	
} */
/*void CPACSFunctionalProbeListReport::OnYearSetfocus(){
	
} */
/*void CPACSFunctionalProbeListReport::OnYearKillfocus(){
	
} */
int CPACSFunctionalProbeListReport::OnYearCheckValue()
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
void CPACSFunctionalProbeListReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CPACSFunctionalProbeListReport::OnKhamsuckhoe_TYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CPACSFunctionalProbeListReport::OnReportPeriodSelendok()
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
/*void CPACSFunctionalProbeListReport::OnReportPeriodSetfocus(){
	
}*/
/*void CPACSFunctionalProbeListReport::OnReportPeriodKillfocus(){
	
}*/
long CPACSFunctionalProbeListReport::OnReportPeriodLoadData()
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
/*void CPACSFunctionalProbeListReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSFunctionalProbeListReport::OnFromDateChange(){
	
} */
/*void CPACSFunctionalProbeListReport::OnFromDateSetfocus(){
	
} */
/*void CPACSFunctionalProbeListReport::OnFromDateKillfocus(){
	
} */
int CPACSFunctionalProbeListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSFunctionalProbeListReport::OnToDateChange(){
	
} */
/*void CPACSFunctionalProbeListReport::OnToDateSetfocus(){
	
} */
/*void CPACSFunctionalProbeListReport::OnToDateKillfocus(){
	
} */
int CPACSFunctionalProbeListReport::OnToDateCheckValue(){
	return 0;
}
void CPACSFunctionalProbeListReport::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSFunctionalProbeListReport::OnGroupSelendok(){
	 
}
/*void CPACSFunctionalProbeListReport::OnGroupSetfocus(){
	
}*/
/*void CPACSFunctionalProbeListReport::OnGroupKillfocus(){
	
}*/
long CPACSFunctionalProbeListReport::OnGroupLoadData()
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
				 _T("WHERE substr(hfg_id,1,2) IN('B2', 'B3') AND hfg_id not in('B2400', 'B3100') ") \
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
/*void CPACSFunctionalProbeListReport::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSFunctionalProbeListReport::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSFunctionalProbeListReport::OnPractitionerSelendok(){
	 
}
/*void CPACSFunctionalProbeListReport::OnPractitionerSetfocus(){
	
}*/
/*void CPACSFunctionalProbeListReport::OnPractitionerKillfocus(){
	
}*/
long CPACSFunctionalProbeListReport::OnPractitionerLoadData()
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
	szSQL.Format(_T("SELECT su_userid as id, su_name as name ") \
		         _T("FROM sys_user ") \
				 _T("WHERE su_deptid in('A3','C7','C8') ") \
				 _T("ORDER BY su_userid"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSFunctionalProbeListReport::OnPractitionerAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSFunctionalProbeListReport::OnRoomListDblClick(){
	
} 
void CPACSFunctionalProbeListReport::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSFunctionalProbeListReport::OnRoomListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSFunctionalProbeListReport::OnRoomListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hrl_id as ID, hrl_name as Name ") \
		_T("FROM hms_roomlist ") \
		_T("WHERE hrl_deptid='C7' ") \
		_T("ORDER BY hrl_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
}
int CPACSFunctionalProbeListReport::OnListCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (!m_wndRoomList.GetCheck(i))
			m_wndRoomList.SetCheck(i, TRUE);
	}
	return 0;
}
int CPACSFunctionalProbeListReport::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
			m_wndRoomList.SetCheck(i, FALSE);
	}
	return 0;
}
void CPACSFunctionalProbeListReport::OnInPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bInPatient)
		m_bOutPatient = FALSE;
	UpdateData(FALSE);
	
}
void CPACSFunctionalProbeListReport::OnOutPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bOutPatient)
		m_bInPatient = FALSE;
	UpdateData(FALSE);
}
void CPACSFunctionalProbeListReport::OnInsuranceSelect(){

}
void CPACSFunctionalProbeListReport::OnServiceSelect(){

}
void CPACSFunctionalProbeListReport::OnPolicySelect(){

}
void CPACSFunctionalProbeListReport::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, tmpTemp, tmpTemp2, tmpTemp3, szRoomLists;
	int nTotalIdx = 0, nTotalCount = 0;
	int nTotal[20];
	for(int i = 1; i < 20; i++)
	{
		nTotal[i] = 0;
	}
	if (!rpt.Init(_T("Reports\\HMS\\PACS_PATIENTLISTPERFORMDED.RPT")))
		return;
	szSQL = GetQueryString1();
	int ret =0;
	ret = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (ret <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->GetHospitalName());
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
		{
			if (!szRoomLists.IsEmpty())
				szRoomLists += _T(", ");
			szRoomLists.AppendFormat(_T("%s"), m_wndRoomList.GetItemText(i, 1));
		}
	}
	if (!szRoomLists.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoomLists);
	else
		rpt.GetReportHeader()->SetValue(_T("RoomName"), _T("Toàn bộ"));
	if (m_bInPatient == TRUE)
		rpt.GetReportHeader()->SetValue(_T("OutInt"), _T("Nội trú"));
	else
		rpt.GetReportHeader()->SetValue(_T("OutInt"), _T("Ngoại trú"));
	CReportSection *rptDetail = NULL, *rptGroup = NULL;
	int nIdx=1;
	while (!rs.IsEOF())
	{
// 		rs.GetValue(_T("loai"), szNewGroup);
// 		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
// 		{
// 			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
// 			if (rptGroup)
// 			{
// 				tmpStr = szNewGroup;
// 				rptGroup->SetValue(_T("GroupName"), tmpStr);
// 			}
// 
// 			szOldGroup = szNewGroup;
// 			nIdx = 1;
 			rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%d"), nIdx++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("pname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("sex"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("itemname"), tmpStr);
			tmpStr.Format(_T("%s"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			
			for(int i = 1; i < 20; i++)
			{
				CString szField, szField2;
				szField.Format(_T("c%d"), i);
				rs.GetValue(szField, tmpStr);
				if(!tmpStr.IsEmpty())
					nTotal[i] += 1;
				szField2.Format(_T("%d"), i+5);
			rptDetail->SetValue(szField2, tmpStr);
			}
			rs.GetValue(_T("practitioner"), tmpStr);
			CString szSurName, szMidName, szLastName;
			SplitName(tmpStr, szSurName, szMidName, szLastName);
			tmpStr.Format(_T("%s"), szLastName);	
			rptDetail->SetValue(_T("18"), tmpStr);
			rs.GetValue(_T("dept_id"), tmpStr);
			rptDetail->SetValue(_T("19"), tmpStr);
		}
		rs.MoveNext();
	}
	rpt.GetReportFooter()->SetValue(_T("s5"), int2str(nIdx++-1));
	for(int i = 1; i < 20; i++ )
	{
		CString szField;
		szField.Format(_T("s%d"), i+5);
		tmpStr.Format(_T("%d"), nTotal[i]);
		nTotalCount += nTotal[i];
		rpt.GetReportFooter()->SetValue(szField, tmpStr);
	}
	rpt.GetReportFooter()->SetValue(_T("s18"), int2str(nTotalCount));

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CPACSFunctionalProbeListReport::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTemp, tmpStr;


	BeginWaitCursor();

	UpdateData(TRUE);

	szSQL = GetQueryString();
    _fmsg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 9);
	xls.SetColumnWidth(2, 18);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 5);
	xls.SetColumnWidth(5, 21);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 16);
	xls.SetColumnWidth(8, 14);

	xls.SetColumnWidth(9, 13);
	xls.SetColumnWidth(10, 11);
	xls.SetColumnWidth(11, 7);
	xls.SetColumnWidth(12, 12);
	xls.SetColumnWidth(13, 7);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 11);

	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(6, 54);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellText(0, 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);

	
	xls.SetCellMergedColumns(nCol, nRow + 3, 16);
	xls.SetCellMergedColumns(nCol, nRow + 4, 16);

	xls.SetCellText(nCol, nRow + 3, _T("DANH SÁCH BỆNH NHÂN LÀM CẬN LÂM SÀNG"),
		            FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Object"), tmpStr);
	xls.SetCellText(nCol + 6, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 7, nRow + 5, _T("Tên kỹ thuật"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Result"), tmpStr);
	xls.SetCellText(nCol + 8, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 9, nRow + 5, _T("Form CLS"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 10, nRow + 5, _T("Nhóm CLS"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 11, nRow + 5, _T("Phòng thực hiện"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 12, nRow + 5, _T("BS thực hiện"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 13, nRow + 5, _T("Phòng chỉ định"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 14, nRow + 5, _T("Khoa chỉ định"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 15, nRow + 5, _T("BS chỉ định"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	int nIndex = 1;
	nRow = 6;
	CString szOldItemID, szNewItemID;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("itemid"), szNewItemID);

		/*if (!szNewItemID.IsEmpty() && szOldItemID != szNewItemID)
		{
			++nRow;
			rs.GetValue(_T("itemname"), tmpStr);
			xls.SetCellMergedColumns(nCol, nRow, 16);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_WRAPING, true);

			szOldItemID = szNewItemID;
			nIndex = 1;
		}*/

		++nRow;

		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("objectname"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("itemname"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("pacsresult"), tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("formcls"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("groupname"), tmpStr);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("proomname"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("practitioner"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("roomid"), tmpStr);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("hpc_deptid"), tmpStr);
		xls.SetCellText(nCol + 14, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("doctorname"), tmpStr);
		xls.SetCellText(nCol + 15, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DSBenhNhanCLS.xls"));
} 
int CPACSFunctionalProbeListReport::OnAddPACSFunctionalProbeListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSFunctionalProbeListReport::OnEditPACSFunctionalProbeListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSFunctionalProbeListReport::OnDeletePACSFunctionalProbeListReport(){
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
 		OnCancelPACSFunctionalProbeListReport(); 
 	}
	return 0;
}
int CPACSFunctionalProbeListReport::OnSavePACSFunctionalProbeListReport(){
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
 		//OnPACSFunctionalProbeListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSFunctionalProbeListReport::OnCancelPACSFunctionalProbeListReport(){
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
int CPACSFunctionalProbeListReport::OnPACSFunctionalProbeListReportListLoadData(){
	return 0;
}

CString CPACSFunctionalProbeListReport::GetQueryString()
{
	CString szSQL, szWhere, szRoomID;
	szSQL.Empty();

	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_groupid='%s' "), m_szGroupKey);

	if (!m_szPractitionerKey.IsEmpty())
		szWhere.AppendFormat(_T("AND hpc_practitioner='%s' "), m_szPractitionerKey);

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
	{
		szWhere.AppendFormat(_T(" AND hpcl_proomid in(%s) "), szRoomID);
	}

	if (m_bInPatient == TRUE)
		szWhere.AppendFormat(_T(" AND hpc_deptid NOT IN ('C1.1', 'C1.2', 'C1.3','TYC')"));
	if (m_bOutPatient == TRUE)
		szWhere.AppendFormat(_T(" AND hpc_deptid IN ('C1.1', 'C1.2', 'C1.3','TYC')"));

	if (m_bKhamsuckhoe_TYC)
		szWhere.AppendFormat(_T(" AND hpc_deptid IN ('TYC') AND NVL(HD_HEALTHEXAM, 'XXX') ='Y'"));


	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" and ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" and ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" and ho_type not in('I','C','S') "));

	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hms_getage(hd_admitdate, hp_birthdate) as age,") \
				_T("        (select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,") \
				_T("        ho_desc as objectname,") \
				_T("        hpcl_itemid as itemid,") \
				_T("        hfl_name as itemname,") \
				_T("        hpr_desc as pacsresult,") \
				_T("        hpcl_result as formcls,") \
				_T("        hfg_name as groupname,") \
				_T("        hpc_pdeptid,") \
				_T("        hrl_name as proomname,") \
				_T("        (select distinct su_name from sys_user where su_userid=hpcl_practitioner) as practitioner,") \
				_T("        hpc_deptid,") \
				_T("        SUBSTR(hms_getroomname(hpc_deptid, hpc_roomid), 1, 2) roomid,") \
				_T("        (select distinct su_name from sys_user where su_userid=hpc_doctor) as doctorname,") \
				_T("        case when ho_type in('I','C') then 1") \
				_T("                  when ho_type in('S') then 2") \
				_T("        else 3 end as objectidx ") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_object on(ho_id=hd_object)") \
				_T(" left join hms_pacsorder on(hpc_docno=hd_docno)") \
				_T(" left join hms_pacsorderline on(hpcl_orderid=hpc_orderid and hpcl_docno=hpc_docno)") \
				_T(" left join hms_pacs_result on(hpr_itemid=hpcl_itemid and hpr_orderid=hpc_orderid") \
				_T("                              and hpcl_docno=hpr_docno and hpr_name='Conclusion')") \
				_T(" left join hms_fee_list on(hfl_feeid=hpcl_itemid)") \
				_T(" left join hms_fee_group on(hfg_id=hpc_groupid)") \
				_T(" left join hms_roomlist on(hrl_id=hpcl_proomid and hrl_deptid='C7')") \
				_T(" where hpcl_status='T' and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" and hpc_groupid not in('B3100') %s") \
				_T(" order by hpcl_date, hpcl_practitioner"),
				m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CPACSFunctionalProbeListReport::GetQueryString1()
{
	CString szSQL, szWhere, szRoomID;
	szSQL.Empty();

	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_groupid='%s' "), m_szGroupKey);

	if (!m_szPractitionerKey.IsEmpty())
		szWhere.AppendFormat(_T("AND hpc_practitioner='%s' "), m_szPractitionerKey);

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
	{
		szWhere.AppendFormat(_T(" AND hpcl_proomid in(%s) "), szRoomID);
	}

	if (m_bInPatient == TRUE)
		szWhere.AppendFormat(_T(" AND hpc_deptid NOT IN ('C1.1', 'C1.2', 'C1.3','TYC')"));
	if (m_bOutPatient == TRUE)
		szWhere.AppendFormat(_T(" AND hpc_deptid IN ('C1.1', 'C1.2', 'C1.3','TYC')"));

	if (m_bKhamsuckhoe_TYC)
		szWhere.AppendFormat(_T(" AND hpc_deptid IN ('TYC') AND NVL(HD_HEALTHEXAM, 'XXX') ='Y'"));

	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" and ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" and ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" and ho_type not in('I','C','S') "));

	szSQL.Format(_T(" SELECT") \
		_T("   get_patientname(hd_docno) AS pname,") \
		_T("   hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T("   hms_getsex(hp_sex) AS sex,") \
		_T("   CASE WHEN hpc_groupid = 'B3200' THEN SUBSTR(hfl_name, 9)ELSE hfl_name END AS itemname,") \
		_T("   CASE WHEN hd_object = 1 THEN 'X' END AS c1,") \
		_T("   CASE WHEN hd_object = 2 THEN 'X' END AS c2,") \
		_T("   CASE WHEN hd_object = 3 THEN 'X' END AS c3,") \
		_T("   CASE WHEN hd_object = 4 THEN 'X' END AS c4,") \
		_T("   CASE WHEN hd_object = 5 THEN 'X' END AS c5,") \
		_T("   CASE WHEN hd_object = 6 THEN 'X' END AS c6,") \
		_T("   CASE WHEN hd_object = 7 THEN 'X' END AS c7,") \
		_T("   CASE WHEN hd_object = 8 THEN 'X' END AS c8,") \
		_T("   CASE WHEN hd_object = 9 THEN 'X' END AS c9,") \
		_T("   CASE WHEN hd_object = 10 THEN 'X' END AS c10,") \
		_T("   CASE WHEN hd_object = 11 THEN 'X' END AS c11,") \
		_T("   CASE WHEN hd_object = 12 THEN 'X' END AS c12,") \
		_T("   get_username(hpcl_practitioner) AS practitioner,") \
		_T("   CASE WHEN hpc_deptid = 'C1.1' THEN 'C1.1 - P'||SUBSTR(hms_getroomname(hpc_deptid, hpc_roomid), 1, 2) WHEN hpc_deptid = 'C1.2' THEN 'C1.2 - P'||SUBSTR(hms_getroomname(hpc_deptid, hpc_roomid), 1, 2) ELSE hpc_deptid END dept_id") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid=hpc_orderid") \
		_T(" AND hpcl_docno =hpc_docno)") \
		_T(" LEFT JOIN hms_pacs_result") \
		_T(" ON(hpr_itemid  =hpcl_itemid") \
		_T(" AND hpr_orderid=hpc_orderid") \
		_T(" AND hpcl_docno =hpr_docno") \
		_T(" AND hpr_name   ='Conclusion')") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid=hpcl_itemid)") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id=hpc_groupid)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON(hrl_id        =hpcl_proomid") \
		_T(" AND hrl_deptid   ='C7')") \
		_T(" LEFT JOIN hms_object ON(ho_id = hd_object)") \
		_T(" WHERE hpcl_status='T'") \
		_T(" AND hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpc_groupid NOT IN('B3100') %s") \
		_T(" ORDER BY hpcl_date,") \
		_T("   hpcl_practitioner"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}