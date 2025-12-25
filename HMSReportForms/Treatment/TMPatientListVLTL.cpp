#include "stdafx.h"
#include "TMPatientListVLTL.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientListVLTL* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientListVLTL* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnObjectAddNew();
}*/
static void _OnBookSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientListVLTL* )pWnd)->OnBookSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBookSelendokFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnBookSelendok();
}
/*static void _OnBookSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnBookKillfocus();
}*/
/*static void _OnBookKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnBookKillfocus();
}*/
static long _OnBookLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnBookLoadData();
}
/*static void _OnBookAddNewFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnBookAddNew();
}*/
static void _OnGroupDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientListVLTL* )pWnd)->OnGroupDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupDiseaseSelendokFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnGroupDiseaseSelendok();
}
/*static void _OnGroupDiseaseSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnGroupDiseaseKillfocus();
}*/
/*static void _OnGroupDiseaseKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnGroupDiseaseKillfocus();
}*/
static long _OnGroupDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnGroupDiseaseLoadData();
}
/*static void _OnGroupDiseaseAddNewFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnGroupDiseaseAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientListVLTL* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientListVLTL* )pWnd)->OnMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMethodSelendokFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnMethodSelendok();
}
/*static void _OnMethodSetfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnMethodKillfocus();
}*/
/*static void _OnMethodKillfocusFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnMethodKillfocus();
}*/
static long _OnMethodLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientListVLTL *)pWnd)->OnMethodLoadData();
}
/*static void _OnMethodAddNewFnc(CWnd *pWnd){
	((CTMPatientListVLTL *)pWnd)->OnMethodAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	((CTMPatientListVLTL*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CTMPatientListVLTL*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CTMPatientListVLTL*)pWnd)->OnOutPatientSelect();
}
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CTMPatientListVLTL *pVw = (CTMPatientListVLTL *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMPatientListVLTL *pVw = (CTMPatientListVLTL *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnluotkhamSelectFnc(CWnd *pWnd){
	((CTMPatientListVLTL*)pWnd)->OnluotkhamSelect();
}
static int _OnAddTMPatientListVLTLFnc(CWnd *pWnd){
	 return ((CTMPatientListVLTL*)pWnd)->OnAddTMPatientListVLTL();
} 
static int _OnEditTMPatientListVLTLFnc(CWnd *pWnd){
	 return ((CTMPatientListVLTL*)pWnd)->OnEditTMPatientListVLTL();
} 
static int _OnDeleteTMPatientListVLTLFnc(CWnd *pWnd){
	 return ((CTMPatientListVLTL*)pWnd)->OnDeleteTMPatientListVLTL();
} 
static int _OnSaveTMPatientListVLTLFnc(CWnd *pWnd){
	 return ((CTMPatientListVLTL*)pWnd)->OnSaveTMPatientListVLTL();
} 
static int _OnCancelTMPatientListVLTLFnc(CWnd *pWnd){
	 return ((CTMPatientListVLTL*)pWnd)->OnCancelTMPatientListVLTL();
} 
CTMPatientListVLTL::CTMPatientListVLTL(CWnd* pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CTMPatientListVLTL::~CTMPatientListVLTL(){
}
void CTMPatientListVLTL::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 240);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 30, 300, 55);
	m_wndPeriodReport.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.Create(this,95, 90, 425, 115); 
	m_wndBookLabel.Create(this, _T("Book"), 10, 120, 90, 145);
	m_wndBook.Create(this,95, 120, 425, 145); 
	m_wndGroupDiseaseLabel.Create(this, _T("Group Disease"), 10, 150, 90, 175);
	m_wndGroupDisease.Create(this,95, 150, 425, 175); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 180, 90, 205);
	m_wndDepartment.Create(this,95, 180, 425, 205); 
	m_wndMethodLabel.Create(this, _T("Method2"), 10, 210, 90, 235);
	m_wndMethod.Create(this,95, 210, 425, 235); 
	m_wndAll.Create(this, _T("All"), 10, 245, 90, 270);
	m_wndInPatient.Create(this, _T("InPatient"), 95, 245, 175, 270);
	m_wndOutPatient.Create(this, _T("OutPatient"), 180, 245, 260, 270);
	//m_wndPreview.Create(this, _T("&Preview"), 265, 245, 345, 270);
	m_wndExport.Create(this, _T("&Export"), 350, 245, 430, 270);
	m_wndluotkham.Create(this, _T("luotkham"), 10, 275, 110, 300);

}
void CTMPatientListVLTL::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(35);
	m_wndYear.SetCheckValue(true);
	m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndBook.SetCheckValue(true);
	m_wndBook.LimitText(35);
	m_wndGroupDisease.SetCheckValue(true);
	m_wndGroupDisease.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndMethod.SetCheckValue(true);
	m_wndMethod.LimitText(35);


	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);


	m_wndBook.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBook.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGroupDisease.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroupDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CTMPatientListVLTL::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndPeriodReport.SetEvent(WE_SELENDOK, _OnPeriodReportSelendokFnc);
	//m_wndPeriodReport.SetEvent(WE_SETFOCUS, _OnPeriodReportSetfocusFnc);
	//m_wndPeriodReport.SetEvent(WE_KILLFOCUS, _OnPeriodReportKillfocusFnc);
	m_wndPeriodReport.SetEvent(WE_SELCHANGE, _OnPeriodReportSelectChangeFnc);
	m_wndPeriodReport.SetEvent(WE_LOADDATA, _OnPeriodReportLoadDataFnc);
	//m_wndPeriodReport.SetEvent(WE_ADDNEW, _OnPeriodReportAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndBook.SetEvent(WE_SELENDOK, _OnBookSelendokFnc);
	//m_wndBook.SetEvent(WE_SETFOCUS, _OnBookSetfocusFnc);
	//m_wndBook.SetEvent(WE_KILLFOCUS, _OnBookKillfocusFnc);
	m_wndBook.SetEvent(WE_SELCHANGE, _OnBookSelectChangeFnc);
	m_wndBook.SetEvent(WE_LOADDATA, _OnBookLoadDataFnc);
	//m_wndBook.SetEvent(WE_ADDNEW, _OnBookAddNewFnc);
	m_wndGroupDisease.SetEvent(WE_SELENDOK, _OnGroupDiseaseSelendokFnc);
	//m_wndGroupDisease.SetEvent(WE_SETFOCUS, _OnGroupDiseaseSetfocusFnc);
	//m_wndGroupDisease.SetEvent(WE_KILLFOCUS, _OnGroupDiseaseKillfocusFnc);
	m_wndGroupDisease.SetEvent(WE_SELCHANGE, _OnGroupDiseaseSelectChangeFnc);
	m_wndGroupDisease.SetEvent(WE_LOADDATA, _OnGroupDiseaseLoadDataFnc);
	//m_wndGroupDisease.SetEvent(WE_ADDNEW, _OnGroupDiseaseAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndMethod.SetEvent(WE_SELENDOK, _OnMethodSelendokFnc);
	//m_wndMethod.SetEvent(WE_SETFOCUS, _OnMethodSetfocusFnc);
	//m_wndMethod.SetEvent(WE_KILLFOCUS, _OnMethodKillfocusFnc);
	m_wndMethod.SetEvent(WE_SELCHANGE, _OnMethodSelectChangeFnc);
	m_wndMethod.SetEvent(WE_LOADDATA, _OnMethodLoadDataFnc);
	//m_wndMethod.SetEvent(WE_ADDNEW, _OnMethodAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndluotkham.SetEvent(WE_CLICK, _OnluotkhamSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_szDepartmentKey = _T("C6");
	UpdateData(FALSE);

}
void CTMPatientListVLTL::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndBook.GetDlgCtrlID(), m_szBookKey);
	DDX_TextEx(pDX, m_wndGroupDisease.GetDlgCtrlID(), m_szGroupDiseaseKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndMethod.GetDlgCtrlID(), m_szMethodKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Check(pDX, m_wndluotkham.GetDlgCtrlID(), m_bluotkham);

}
void CTMPatientListVLTL::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMPatientListVLTL::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMPatientListVLTL::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szBookKey.Empty();
	m_szGroupDiseaseKey.Empty();
	m_szDepartmentKey.Empty();
	m_szMethodKey.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_bluotkham=FALSE;

}
int CTMPatientListVLTL::SetMode(int nMode){
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
/*void CTMPatientListVLTL::OnYearChange(){
	
} */
/*void CTMPatientListVLTL::OnYearSetfocus(){
	
} */
/*void CTMPatientListVLTL::OnYearKillfocus(){
	
} */
int CTMPatientListVLTL::OnYearCheckValue(){
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
void CTMPatientListVLTL::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientListVLTL::OnPeriodReportSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szPeriodReportKey);

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
/*void CTMPatientListVLTL::OnPeriodReportSetfocus(){
	
}*/
/*void CTMPatientListVLTL::OnPeriodReportKillfocus(){
	
}*/
long CTMPatientListVLTL::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szPeriodReportKey));
	}
	m_wndPeriodReport.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriodReport.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMPatientListVLTL::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMPatientListVLTL::OnFromDateChange(){
	
} */
/*void CTMPatientListVLTL::OnFromDateSetfocus(){
	
} */
/*void CTMPatientListVLTL::OnFromDateKillfocus(){
	
} */
int CTMPatientListVLTL::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMPatientListVLTL::OnToDateChange(){
	
} */
/*void CTMPatientListVLTL::OnToDateSetfocus(){
	
} */
/*void CTMPatientListVLTL::OnToDateKillfocus(){
	
} */
int CTMPatientListVLTL::OnToDateCheckValue(){
	return 0;
} 
void CTMPatientListVLTL::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientListVLTL::OnObjectSelendok(){
	 
}
/*void CTMPatientListVLTL::OnObjectSetfocus(){
	
}*/
/*void CTMPatientListVLTL::OnObjectKillfocus(){
	
}*/
long CTMPatientListVLTL::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as description FROM hms_object ORDER BY cast(id as integer)"));
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMPatientListVLTL::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientListVLTL::OnBookSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientListVLTL::OnBookSelendok(){
	 
}
/*void CTMPatientListVLTL::OnBookSetfocus(){
	
}*/
/*void CTMPatientListVLTL::OnBookKillfocus(){
	
}*/
long CTMPatientListVLTL::OnBookLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBook.IsSearchKey() && !m_szBookKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szBookKey);
	};
	m_wndBook.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'hms_c6' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBook.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMPatientListVLTL::OnBookAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientListVLTL::OnGroupDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientListVLTL::OnGroupDiseaseSelendok(){
	 
}
/*void CTMPatientListVLTL::OnGroupDiseaseSetfocus(){
	
}*/
/*void CTMPatientListVLTL::OnGroupDiseaseKillfocus(){
	
}*/
long CTMPatientListVLTL::OnGroupDiseaseLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupDisease.IsSearchKey() && !m_szGroupDiseaseKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szGroupDiseaseKey);
	};
	m_wndGroupDisease.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'hms_groupdiseasec6' %s ORDER BY cast(id as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMPatientListVLTL::OnGroupDiseaseAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientListVLTL::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientListVLTL::OnDepartmentSelendok(){
	 
}
/*void CTMPatientListVLTL::OnDepartmentSetfocus(){
	
}*/
/*void CTMPatientListVLTL::OnDepartmentKillfocus(){
	
}*/
long CTMPatientListVLTL::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" and sd_id = '%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMPatientListVLTL::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientListVLTL::OnMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientListVLTL::OnMethodSelendok(){
	 
}
/*void CTMPatientListVLTL::OnMethodSetfocus(){
	
}*/
/*void CTMPatientListVLTL::OnMethodKillfocus(){
	
}*/
long CTMPatientListVLTL::OnMethodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMethod.IsSearchKey() && !m_szMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szMethodKey);
};
	m_wndMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_vndesc = 'C6' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMPatientListVLTL::OnMethodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientListVLTL::OnAllSelect(){
}
void CTMPatientListVLTL::OnInPatientSelect(){

}
void CTMPatientListVLTL::OnOutPatientSelect(){

}
void CTMPatientListVLTL::OnluotkhamSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMPatientListVLTL::OnPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("\x44S\x42N l\xE0m VLTL"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("S\x1ED1 l\x1B0\x1EE3t kh\xE1m VLTL"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("\x43\xE1\x63 ph\x1B0\x1A1ng ph\xE1p \x111i\x1EC1u tr\x1ECB"));
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	CRect rect;
	m_wndPreview.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		PrintFormat1();
		break;
	case 2:
		PrintFormat2();
		break;
	case 3:
		PrintFormat3();
		break;
	}
} 
void CTMPatientListVLTL::PrintFormat1(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
UpdateData(true);
BeginWaitCursor();
CReport rpt;
CRecord rs(&pMF->m_db);
CReportSection *rptHeader = NULL,* rptGroup = NULL, *rptDetail;
CString szSQL, tmpStr, szDate, szWhere, szSubSelect;
int nTemp = 0, nTotal = 0;
int nIdx = 1;

if (!rpt.Init(_T("Reports\\HMS\\TM_DSBENHNHANLAMVLTL.RPT")))
return;

rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));

szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
			  CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm ),
			  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

szSQL = GetQueryString();
rs.ExecSQL(szSQL);

while (!rs.IsEOF()){
	rptDetail = rpt.AddDetail();
	tmpStr.Format(_T("%d"), nIdx++);
	rptDetail->SetValue(_T("1"), tmpStr);
	rs.GetValue(_T("doc_no"), tmpStr);
	rptDetail->SetValue(_T("2"), tmpStr);
	rs.GetValue(_T("pname"), tmpStr);
	rptDetail->SetValue(_T("3"), tmpStr);
	rs.GetValue(_T("pyear"), tmpStr);
	if(rs.GetValue(_T("psex")) == _T("M"))
	{
		rptDetail->SetValue(_T("4"), tmpStr);
	}
	else
	{
		rptDetail->SetValue(_T("5"), tmpStr);
	}
	rs.GetValue(_T("pobject"), tmpStr);
	rptDetail->SetValue(_T("6"), tmpStr);
	rs.GetValue(_T("paddress"), tmpStr);
	rptDetail->SetValue(_T("7"), tmpStr);
	rs.GetValue(_T("pdept"), tmpStr);
	rptDetail->SetValue(_T("8"), tmpStr);
	rs.GetValue(_T("disease_date"), tmpStr);
	rptDetail->SetValue(_T("9"), tmpStr);
	rs.GetValue(_T("exam_date"), tmpStr);
	rptDetail->SetValue(_T("10"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("record_no"), tmpStr);
	rptDetail->SetValue(_T("11"), tmpStr);
	rs.GetValue(_T("perform_date"), tmpStr);
	rptDetail->SetValue(_T("12"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("diagnostic"), tmpStr);
	rptDetail->SetValue(_T("13"), tmpStr);
	rs.GetValue(_T("pdesc"), tmpStr);
	rptDetail->SetValue(_T("14"), tmpStr);
	rs.GetValue(_T("treat_num"), tmpStr);
	rptDetail->SetValue(_T("15"), tmpStr);
	rs.GetValue(_T("treat_time"), nTemp);
	nTotal += nTemp;
	FormatCurrency(nTemp, tmpStr);
	rptDetail->SetValue(_T("16"), tmpStr);
	rs.GetValue(_T("book_no"), tmpStr);
	rptDetail->SetValue(_T("17"), tmpStr);
	rs.MoveNext();
}
FormatCurrency(nTotal, tmpStr);
rpt.GetReportFooter()->SetValue(_T("s16"), tmpStr);
szDate = pMF->GetSysDate();
tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetDoctorName(pMF->GetCurrentUser()));
EndWaitCursor();
rpt.PrintPreview();
}
void CTMPatientListVLTL::PrintFormat2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL,* rptGroup = NULL, *rptDetail;
	CString szSQL, tmpStr, szDate;
	int nTemp = 0, nTotal = 0, nTotal2 = 0, nTotal3 = 0;
	int nIdx = 1;
	double nTemp2 = 0;
	if (!rpt.Init(_T("Reports\\HMS\\TM_SOLUOTKHAMVLTL.RPT")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));

	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm ),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);

	while (!rs.IsEOF()){
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pobjectname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("noitru"), nTemp);
		nTotal += nTemp;
		FormatCurrency(nTemp, tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("ngoaitru"), nTemp);
		nTotal2 += nTemp;
		FormatCurrency(nTemp, tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("total"), nTemp);
		nTotal3 += nTemp;
		FormatCurrency(nTemp, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.MoveNext();
	}
	FormatCurrency(nTotal, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("s3"), tmpStr);
	FormatCurrency(nTotal2, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("s4"), tmpStr);
	FormatCurrency(nTotal3, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("s5"), tmpStr);

	nIdx = 1;
	nTotal = 0;
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);

	while (!rs.IsEOF()){
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("groupdisease"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("total"), nTemp);
		nTotal += nTemp;
		FormatCurrency(nTemp, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("grand_total"), nTemp2);
		tmpStr.Format(_T("%.2f"), nTemp2);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.MoveNext();
	}
	FormatCurrency(nTotal, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("s8"), tmpStr);

	szDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}
void CTMPatientListVLTL::PrintFormat3(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL,* rptGroup = NULL, *rptDetail;
	CString szSQL, tmpStr, szTemp, szDate;
	int nIdx = 1;
	long double nTotal[20];
	for(int i = 1; i < 20; i++)
	{
		nTotal[i] = 0;
	}

	if (!rpt.Init(_T("Reports\\HMS\\TM_CACPHUONGPHAPDIEUTRI.RPT")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));

	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm ),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);

	while (!rs.IsEOF()){
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("groupname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		for(int i = 1; i < 20; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			rptDetail->SetValue(int2str(i+2), tmpStr);
		}
		rs.MoveNext();
	}
	for(int i = 1; i < 20; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		szTemp.Format(_T("s%d"), i+2);
		rpt.GetReportFooter()->SetValue(szTemp, tmpStr);
	}
	szDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}
void CTMPatientListVLTL::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("\x44S\x42N l\xE0m VLTL"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("S\x1ED1 l\x1B0\x1EE3t kh\xE1m VLTL"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("\x43\xE1\x63 ph\x1B0\x1A1ng ph\xE1p \x111i\x1EC1u tr\x1ECB"));
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		ExportFormat1();
		break;
	case 2:
		ExportFormat2();
		break;
	case 3:
		ExportFormat3();
		break;
	}
} 
void CTMPatientListVLTL::ExportFormat1(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	int nTemp = 0, nTotal = 0;	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 9);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 5);	xls.SetColumnWidth(4, 5);	xls.SetColumnWidth(5, 10);	xls.SetColumnWidth(6, 25);	xls.SetColumnWidth(7, 5);	xls.SetColumnWidth(8, 5);	xls.SetColumnWidth(9, 10);	xls.SetColumnWidth(10, 10);	xls.SetColumnWidth(11, 10);	xls.SetColumnWidth(12, 25);	xls.SetColumnWidth(13, 45);	xls.SetColumnWidth(14, 6);	xls.SetColumnWidth(15, 6);		xls.SetCellText(0,0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0,1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0,2, pMF->GetCurrentDepartmentName(), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 3, _T("\x44\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n l\xE0m v\x1EADt l\xED tr\x1ECB li\x1EC7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 5, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 5, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 5, _T("Gi\x1EDBi t\xEDnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("N\x61m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("N\x1EEF"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 5, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 5, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 5, _T("N\x1A1i g\x1EEDi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 5, _T("Ng\xE0y \x62\x1ECB \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 5, _T("Ng\xE0y v\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 5, _T("S\x1ED1 \x62\x1EC7nh \xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 5, _T("Ng\xE0y \x110TVLTL-PH\x43N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 5, _T("\x43h\x1EA9n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 5, _T("Ph\x1B0\x1A1ng ph\xE1p \x111i\x1EC1u tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 5, _T("S\x1ED1 ng\xE0y \x110T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 5, _T("Ph\xF2ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	if(!m_bluotkham)		{			xls.SetColumnWidth(16, 6);			xls.SetCellText(16, 5, _T("S\x1ED1 l\x1EA7n \x110T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);			xls.SetMerge(5, 7, 16, 16);		}	xls.SetMerge(0, 0, 0, 3);	xls.SetMerge(1, 1, 0, 3);	xls.SetMerge(2, 2, 0, 3);	xls.SetMerge(3, 3, 0, 15);	xls.SetMerge(4, 4, 0, 15);	xls.SetMerge(5, 7, 0, 0);	xls.SetMerge(5, 7, 1, 1);	xls.SetMerge(5, 7, 2, 2);	xls.SetMerge(5, 5, 3, 4);	xls.SetMerge(6, 7, 3, 3);	xls.SetMerge(6, 7, 4, 4);	xls.SetMerge(5, 7, 5, 5);	xls.SetMerge(5, 7, 6, 6);	xls.SetMerge(5, 7, 7, 7);	xls.SetMerge(5, 7, 8, 8);	xls.SetMerge(5, 7, 9, 9);	xls.SetMerge(5, 7, 10, 10);	xls.SetMerge(5, 7, 11, 11);	xls.SetMerge(5, 7, 12, 12);	xls.SetMerge(5, 7, 13, 13);	xls.SetMerge(5, 7, 14, 14);	xls.SetMerge(5, 7, 15, 15);	nRow = 8;	nCol = 0;

	if(m_bluotkham)
		szSQL = GetQueryString4();
	else
		szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("doc_no"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("pyear"), tmpStr);		if(rs.GetValue(_T("psex")) == _T("M"))		{			xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		}		else		{			xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		}		rs.GetValue(_T("pobject"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("paddress"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("pdept"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("disease_date"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("exam_date"), tmpStr);		xls.SetCellText(nCol+9, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("record_no"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("perform_date"), tmpStr);
		xls.SetCellText(nCol+11, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT | FMT_WRAPING);
		rs.GetValue(_T("diagnostic"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("pdesc"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("treat_num"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		rs.GetValue(_T("book_no"), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		if(!m_bluotkham)		{			rs.GetValue(_T("treat_time"), nTemp);			nTotal += nTemp;			xls.SetCellText(nCol+16, nRow, int2str(nTemp), FMT_TEXT | FMT_WRAPING);		}		nRow++;		rs.MoveNext();	}
	if(nTotal >0)
	{
		xls.SetMerge(nRow, nRow, 0, 15);
		xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng s\x1ED1 l\x1EA7n \x111i\x1EC1u tr\x1ECB:"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetCellText(nCol+16, nRow, int2str(nTotal), FMT_TEXT | FMT_WRAPING);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DSBENHNHANLAMVLTL.xls"));
}
void CTMPatientListVLTL::ExportFormat2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1, nTemp = 0, nTotal = 0, nTotal2 = 0, nTotal3 = 0;	double nTemp2 = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 40);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 45);	xls.SetColumnWidth(8, 14);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 8);	xls.SetCellText(0,0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0,1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0,2, pMF->GetCurrentDepartmentName(), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 3, _T("\x42\xE1o \x63\xE1o s\x1ED1 l\x1B0\x1EE3ng \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 5, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 5, _T("S\x1ED1 l\x1B0\x1EE3ng \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 5, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 5, _T("\x43\x1A1 \x63\x1EA5u \x62\x1EC7nh l\xFD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 5, _T("S\x1ED1 l\x1B0\x1EE3ng \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 5, _T("T\x1EC9 l\x1EC7 %"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 1);	xls.SetMerge(3, 3, 0, 9);	xls.SetMerge(4, 4, 0, 9);	xls.SetMerge(5, 6, 0, 0);	xls.SetMerge(5, 6, 1, 1);	xls.SetMerge(5, 5, 2, 3);	xls.SetMerge(5, 6, 4, 4);	xls.SetMerge(5, 6, 6, 6);	xls.SetMerge(5, 6, 7, 7);	xls.SetMerge(5, 6, 8, 8);	xls.SetMerge(5, 6, 9, 9);	nRow = 7;	nCol = 0;	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false, 11);		rs.GetValue(_T("pobjectname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT | FMT_LEFT | FMT_WRAPING, false, 11);		rs.GetValue(_T("noitru"), nTemp);		nTotal += nTemp;		xls.SetCellText(nCol+2, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT | FMT_WRAPING, false, 11);		rs.GetValue(_T("ngoaitru"), nTemp);		nTotal2 += nTemp;		xls.SetCellText(nCol+3, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT | FMT_WRAPING, false, 11);		rs.GetValue(_T("total"), nTemp);		nTotal3 += nTemp;		xls.SetCellText(nCol+4, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT | FMT_WRAPING, false, 11);		nRow++;		rs.MoveNext();	}	xls.SetMerge(nRow, nRow, nCol, nCol+1);	xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol+2, nRow, int2str(nTotal), FMT_NUMBER1 | FMT_RIGHT | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol+3, nRow, int2str(nTotal2), FMT_NUMBER1 | FMT_RIGHT | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol+4, nRow, int2str(nTotal3), FMT_NUMBER1 | FMT_RIGHT | FMT_WRAPING, true, 11);	nRow = 7;	nCol = 0;	nIdx = 1;	nTotal = 0;	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);	while(!rs.IsEOF()){		xls.SetCellText(nCol+6, nRow, int2str(nIdx++), FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false, 11);		rs.GetValue(_T("groupdisease"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT | FMT_LEFT | FMT_WRAPING, false, 11);		rs.GetValue(_T("total"), nTemp);		nTotal += nTemp;		xls.SetCellText(nCol+8, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT | FMT_WRAPING, false, 11); 		rs.GetValue(_T("grand_total"), nTemp2);
		tmpStr.Format(_T("%.2f"), nTemp2);
 		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT | FMT_RIGHT | FMT_WRAPING, false, 11);
		nRow++;		rs.MoveNext();	}	xls.SetMerge(nRow, nRow, nCol+6, nCol+7);	xls.SetCellText(nCol+6, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol+8, nRow, int2str(nTotal), FMT_NUMBER1 | FMT_RIGHT | FMT_WRAPING, true, 11);	EndWaitCursor();	xls.Save(_T("Exports\\DSSLBENHNHANLAMVLTL.xls"));
}
void CTMPatientListVLTL::ExportFormat3(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	int nRow =0, nCol = 0, nIdx = 1;	long double nTotal[29];
	for(int i = 1; i < 29; i++)
	{
		nTotal[i] = 0;
	}	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 14);	xls.SetColumnWidth(2, 6);	xls.SetColumnWidth(3, 6);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 6);	xls.SetColumnWidth(6, 6);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 6);	xls.SetColumnWidth(9, 6);	xls.SetColumnWidth(10, 6);	xls.SetColumnWidth(11, 6);	xls.SetColumnWidth(12, 6);	xls.SetColumnWidth(13, 6);	xls.SetColumnWidth(14, 6);	xls.SetColumnWidth(15, 6);	xls.SetColumnWidth(16, 6);	xls.SetColumnWidth(17, 6);	xls.SetColumnWidth(18, 6);	xls.SetColumnWidth(19, 6);	xls.SetColumnWidth(20, 6);	xls.SetColumnWidth(21, 6);	xls.SetColumnWidth(22, 6);	xls.SetColumnWidth(23, 6);	xls.SetColumnWidth(24, 6);	xls.SetCellText(0,0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0,1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0,2, pMF->GetCurrentDepartmentName(), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);	xls.SetCellText(0, 3, _T("\x43\xC1\x43 PH\x1AF\x1A0NG PH\xC1P \x110I\x1EC0U TR\x1ECA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(1, 5, _T("T\xEAn ph\x1B0\x1A1ng ph\xE1p"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(2, 5, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(2, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(3, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(4, 5, _T("\x42HQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(4, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(5, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(6, 5, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(6, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(7, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(8, 5, _T("\x42H Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(8, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(9, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(10, 5, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(10, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(11, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(12, 5, _T("Tr\x1EBB < \x36 tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(12, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(13, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(14, 5, _T("\x43h\xEDnh s\xE1\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(14, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(15, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(16, 5, _T("\x44\x1ECB\x63h v\x1EE5"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(16, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(17, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(18, 5, _T("\x42HYT Kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(18, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(19, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(20, 5, _T("\x42H TNSQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(20, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(21, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(22, 5, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(22, 6, _T("N\x1ED9i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(23, 6, _T("Ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(24, 5, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);		xls.SetMerge(0, 0, 0, 4);	xls.SetMerge(1, 1, 0, 4);	xls.SetMerge(2, 2, 0, 4);	xls.SetMerge(3, 3, 0, 28);	xls.SetMerge(4, 4, 0, 28);	xls.SetMerge(5, 6, 0, 0);	xls.SetMerge(5, 6, 1, 1);	xls.SetMerge(5, 5, 2, 3);	xls.SetMerge(5, 5, 4, 5);	xls.SetMerge(5, 5, 6, 7);	xls.SetMerge(5, 5, 8, 9);	xls.SetMerge(5, 5, 10, 11);	xls.SetMerge(5, 5, 12, 13);	xls.SetMerge(5, 5, 14, 15);	xls.SetMerge(5, 5, 16, 17);	xls.SetMerge(5, 5, 18, 19);	xls.SetMerge(5, 5, 20, 21);	xls.SetMerge(5, 5, 22, 23);	nRow = 7;	nCol = 0;

	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT, false, 9);		rs.GetValue(_T("groupname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT, false, 9);		for(int i = 1; i < 29; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			xls.SetCellText(nCol+1+i, nRow, tmpStr, FMT_NUMBER1, false, 9);
		}
		nRow++;
		rs.MoveNext();	}
	xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT, true, 9);
	xls.SetMerge(nRow, nRow, nCol, nCol+1);
	for(int i = 1; i < 29; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol+1+i, nRow, tmpStr, FMT_NUMBER1, true, 9);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DSPHUONGPHAPVLTL.xls"));
}
int CTMPatientListVLTL::OnAddTMPatientListVLTL(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMPatientListVLTL::OnEditTMPatientListVLTL(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMPatientListVLTL::OnDeleteTMPatientListVLTL(){
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
 		OnCancelTMPatientListVLTL();
 	}
	return 0;
}
int CTMPatientListVLTL::OnSaveTMPatientListVLTL(){
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
 		//OnTMPatientListVLTLListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMPatientListVLTL::OnCancelTMPatientListVLTL(){
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
int CTMPatientListVLTL::OnTMPatientListVLTLListLoadData(){
	return 0;
}
CString CTMPatientListVLTL::GetQueryString(){
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szObjects;

	szWhere.AppendFormat(_T(" AND ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
		for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
			{
				szObjects += _T(", ");
			}
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	if(!szObjects.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_object IN (%s)"), szObjects);
	if(!m_szBookKey.IsEmpty())
		szWhere2.Format(_T(" AND book_no = %s"),m_szBookKey);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND (ho_pdeptid = '%s' OR (ho_deptid = 'C1.1' AND ho_roomid IN (54, 147, 148)))"),m_szDepartmentKey);
	if(m_nAll == 0)
		szWhere2.AppendFormat(_T(" "));
	if(m_nInPatient == 0)
		szWhere2.AppendFormat(_T("AND pdept <> 'PK'"));
	if(m_nOutPatient == 0)
		szWhere2.AppendFormat(_T("AND pdept = 'PK'"));
// 	szSQL.Format(_T(" SELECT") \
// 		_T(" hrt_bookno AS book_no,") \
// 		_T(" hrt_sheetno AS sheet_no,") \
// 		_T(" ho_docno AS doc_no,") \
// 		_T(" get_patientname(ho_docno) AS pname,") \
// 		_T(" extract(year from hp_birthdate) AS pyear,") \
// 		_T(" hp_sex AS psex,") \
// 		_T(" get_objectname(ho_object) AS pobject,") \
// 		_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS paddress,") \
// 		_T(" CASE WHEN ho_deptid = 'C1.1' AND ho_roomid IN (54, 147, 148) THEN CAST('PK' AS NVARCHAR2(2)) ") \
// 		_T(" ELSE htr_deptid END AS pdept,") \
// 		_T(" hrt_diseasedate AS disease_date,") \
// 		_T(" CASE WHEN ho_deptid = 'C1.1' AND ho_roomid IN (54, 147, 148) THEN (SELECT he_examdate FROM hms_exam WHERE he_docno = ho_docno AND he_deptid = 'C1.1' AND he_roomid IN (54, 147, 148)) ") \
// 		_T(" ELSE htr_admitdate END AS exam_date,") \
// 		_T(" htr_recordno AS record_no,") \
// 		_T(" hrt_examdate AS perform_date,") \
// 		_T(" CASE WHEN ho_deptid = 'C1.1' AND ho_roomid IN (54, 147, 148) THEN (SELECT NVL(he_diagnostic, he_prediagnostic) FROM hms_exam WHERE he_docno = ho_docno AND he_deptid = 'C1.1' AND he_roomid IN (54, 147, 148)) ") \
// 		_T(" END AS diagnostic,") \
// 		_T(" (SELECT hfl_name FROM hms_fee_list WHERE hfl_feeid = ho_itemid) AS pdesc,") \
// 		_T(" hrt_treatnum AS treat_num,") \
// 		_T(" hrt_treattime AS treat_time") \
// 		_T(" FROM hms_operation") \
// 		_T(" LEFT JOIN hms_rehabilitation") \
// 		_T(" ON(hrt_docno = ho_docno AND (instr(hrt_optidx, ho_idx) > 0))") \
// 		_T(" LEFT JOIN hms_patient") \
// 		_T(" ON(hp_patientno = ho_patientno)") \
// 		_T(" LEFT JOIN hms_treatment_record") \
// 		_T(" ON(htr_docno = ho_docno AND htr_status = 'I')") \
// 		_T(" WHERE ho_status <> 'O' %s ") \
// 		_T(" ORDER BY ho_docno, ho_orderdate"), szWhere);

// 	szSQL.Format(_T(" SELECT DISTINCT") \
// 		_T(" *") \
// 		_T(" FROM") \
// 		_T(" (") \
// 		_T(" SELECT hrt_docno AS doc_no,") \
// 		_T(" get_patientname(hrt_docno)                 AS pname,") \
// 		_T("   extract(YEAR FROM hp_birthdate)                 AS pyear,") \
// 		_T("   hp_sex                                          AS psex,") \
// 		_T("   get_objectname(ho_object)                       AS pobject,") \
// 		_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS paddress,") \
// 		_T("   CASE") \
// 		_T("     WHEN ho_deptid = 'C1.1'") \
// 		_T("     AND ho_roomid  IN (54, 147, 148)") \
// 		_T("     THEN CAST('PK' AS NVARCHAR2(2))") \
// 		_T("     ELSE htr_deptid") \
// 		_T("   END             AS pdept,") \
// 		_T("   hrt_diseasedate AS disease_date,") \
// 		_T("   CASE") \
// 		_T("     WHEN ho_deptid = 'C1.1'") \
// 		_T("     AND ho_roomid  IN (54, 147, 148)") \
// 		_T("     THEN") \
// 		_T("       (SELECT he_examdate") \
// 		_T("       FROM hms_exam") \
// 		_T("       WHERE he_docno = ho_docno") \
// 		_T("       AND he_deptid  = 'C1.1'") \
// 		_T("       AND he_roomid  IN (54, 147, 148)") \
// 		_T("       )") \
// 		_T("     ELSE htr_admitdate") \
// 		_T("   END          AS exam_date,") \
// 		_T("   htr_recordno AS record_no,") \
// 		_T("   hrt_examdate AS perform_date,") \
// 		_T("   CASE") \
// 		_T("     WHEN ho_deptid = 'C1.1'") \
// 		_T("     AND ho_roomid  IN (54, 147, 148)") \
// 		_T("     THEN") \
// 		_T("       (SELECT NVL(he_diagnostic, he_prediagnostic)") \
// 		_T("       FROM hms_exam") \
// 		_T("       WHERE he_docno = ho_docno") \
// 		_T("       AND he_deptid  = 'C1.1'") \
// 		_T("       AND he_roomid  IN (54, 147, 148)") \
// 		_T("       )") \
// 		_T("   END           AS diagnostic,") \
// 		_T("   hrt_desc      AS pdesc,") \
// 		_T("   hrt_treatnum  AS treat_num,") \
// 		_T("   hrt_treattime AS treat_time") \
// 		_T(" FROM hms_rehabilitation") \
// 		_T(" LEFT JOIN hms_operation") \
// 		_T(" ON(hrt_docno                   = ho_docno") \
// 		_T(" AND (instr(hrt_optidx, ho_idx) > 0))") \
// 		_T(" LEFT JOIN hms_patient") \
// 		_T(" ON(hp_patientno = hrt_patientno)") \
// 		_T(" LEFT JOIN hms_treatment_record") \
// 		_T(" ON(htr_docno   = hrt_docno") \
// 		_T(" AND htr_status = 'I')") \
// 		_T(" WHERE ho_status  <> 'O' %s") \
// 		_T(" ) tbl") \
// 		_T(" ORDER BY perform_date, doc_no"), szWhere);

	szSQL.Format(_T(" SELECT") \
		_T(" book_no,") \
		_T(" doc_no,") \
		_T(" pname,") \
		_T(" pyear,") \
		_T(" psex,") \
		_T(" pobject,") \
		_T(" paddress,") \
		_T(" pdept,") \
		_T(" disease_date,") \
		_T(" exam_date,") \
		_T(" record_no,") \
		_T(" perform_date,") \
		_T(" diagnostic,") \
		_T(" LISTAGG(CAST(pdesc AS VARCHAR2(1024)), ', ') WITHIN GROUP (ORDER BY pdesc) AS pdesc,") \
		_T(" treat_num,") \
		_T(" SUM(treat_time) AS treat_time") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT") \
		_T(" book_no,") \
		_T(" doc_no,") \
		_T(" pname,") \
		_T(" pyear,") \
		_T(" psex,") \
		_T(" pobject,") \
		_T(" paddress,") \
		_T(" pdept,") \
		_T(" disease_date,") \
		_T(" exam_date,") \
		_T(" record_no,") \
		_T(" perform_date,") \
		_T(" diagnostic,") \
		_T(" pdesc,") \
		_T(" treat_num,") \
		_T(" SUM(treat_time) AS treat_time") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" (SELECT DISTINCT last_value(hrt_bookno) OVER (PARTITION BY hrt_docno) FROM hms_rehabilitation p WHERE hrt_docno = ho_docno ") \
		_T(" AND hrt_examdate = (SELECT max(hrt_examdate) FROM hms_rehabilitation c WHERE p.hrt_docno = c.hrt_docno)) AS book_no,") \
		_T(" ho_docno                                        AS doc_no,") \
		_T(" get_patientname(ho_docno)                       AS pname,") \
		_T(" extract(YEAR FROM hp_birthdate)                 AS pyear,") \
		_T(" hp_sex                                          AS psex,") \
		_T(" get_objectname(ho_object)                       AS pobject,") \
		_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS paddress,") \
		_T(" CASE") \
		_T(" WHEN ho_deptid = 'C1.1'") \
		_T(" AND ho_roomid  IN (54, 147, 148)") \
		_T(" THEN CAST('PK' AS NVARCHAR2(2))") \
		_T(" ELSE htr_deptid") \
		_T(" END             AS pdept,") \
		_T(" (SELECT DISTINCT last_value(hrt_diseasedate) OVER (PARTITION BY hrt_docno) FROM hms_rehabilitation p WHERE hrt_docno = ho_docno ") \
		_T(" AND hrt_examdate = (SELECT max(hrt_examdate) FROM hms_rehabilitation c WHERE p.hrt_docno = c.hrt_docno)) AS disease_date,") \
		_T(" CASE") \
		_T(" WHEN ho_deptid = 'C1.1'") \
		_T(" AND ho_roomid  IN (54, 147, 148)") \
		_T(" THEN") \
		_T(" (SELECT he_examdate") \
		_T(" FROM hms_exam") \
		_T(" WHERE he_docno = ho_docno") \
		_T(" AND he_deptid  = 'C1.1'") \
		_T(" AND he_roomid  IN (54, 147, 148)") \
		_T(" AND he_status = 'T'") \
		_T(" AND rownum = 1") \
		_T(" )") \
		_T(" ELSE htr_admitdate") \
		_T(" END          AS exam_date,") \
		_T(" htr_recordno AS record_no,") \
		_T(" (SELECT DISTINCT last_value(hrt_examdate) OVER (PARTITION BY hrt_docno) FROM hms_rehabilitation p WHERE hrt_docno = ho_docno ") \
		_T(" AND hrt_examdate = (SELECT max(hrt_examdate) FROM hms_rehabilitation c WHERE p.hrt_docno = c.hrt_docno)) AS perform_date,") \
		_T(" CASE") \
		_T(" WHEN ho_deptid = 'C1.1'") \
		_T(" AND ho_roomid  IN (54, 147, 148)") \
		_T(" THEN") \
		_T(" (SELECT NVL(he_diagnostic, he_prediagnostic)") \
		_T(" FROM hms_exam") \
		_T(" WHERE he_docno = ho_docno") \
		_T(" AND he_deptid  = 'C1.1'") \
		_T(" AND he_roomid  IN (54, 147, 148)") \
		_T(" AND he_status = 'T'") \
		_T(" AND rownum = 1") \
		_T(" ) ELSE") \
		_T("(SELECT DISTINCT last_value(hrt_maindisease) OVER (PARTITION BY hrt_docno) FROM hms_rehabilitation p ") \
		_T(" WHERE hrt_docno = ho_docno ") \
		_T(" AND hrt_examdate = (SELECT max(hrt_examdate) FROM hms_rehabilitation c WHERE p.hrt_docno = c.hrt_docno))")\
		_T(" END AS diagnostic,") \
		_T(" (SELECT hfl_name FROM hms_fee_list WHERE hfl_feeid = ho_itemid") \
		_T(" ) AS pdesc,") \
		_T(" (SELECT DISTINCT last_value(hrt_treatnum) OVER (PARTITION BY hrt_docno) FROM hms_rehabilitation p WHERE hrt_docno = ho_docno ") \
		_T(" AND hrt_examdate = (SELECT max(hrt_examdate) FROM hms_rehabilitation c WHERE p.hrt_docno = c.hrt_docno)) AS treat_num,") \
		_T(" ho_qty AS treat_time") \
		_T(" FROM hms_operation") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = ho_patientno)") \
		_T(" LEFT JOIN hms_doc ON (hd_docno = ho_docno and hd_patientno = hp_patientno) ") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno     = ho_docno") \
		_T(" AND ho_refidx = htr_idx)") \
		_T(" WHERE ho_status <> 'O' AND ho_itemid IS NOT NULL %s") \
		_T(" ) tbl WHERE 1 = 1 %s") \
		_T(" GROUP BY") \
		_T(" book_no,") \
		_T(" doc_no,") \
		_T(" pname,") \
		_T(" pyear,") \
		_T(" psex,") \
		_T(" pobject,") \
		_T(" paddress,") \
		_T(" pdept,") \
		_T(" disease_date,") \
		_T(" exam_date,") \
		_T(" record_no,") \
		_T(" perform_date,") \
		_T(" diagnostic,") \
		_T(" pdesc,") \
		_T(" treat_num") \
		_T(" )") \
		_T(" GROUP BY") \
		_T(" book_no,") \
		_T(" doc_no,") \
		_T(" pname,") \
		_T(" pyear,") \
		_T(" psex,") \
		_T(" pobject,") \
		_T(" paddress,") \
		_T(" pdept,") \
		_T(" disease_date,") \
		_T(" exam_date,") \
		_T(" record_no,") \
		_T(" perform_date,") \
		_T(" diagnostic,") \
		_T(" treat_num") \
		_T(" ORDER BY") \
		_T(" perform_date, doc_no"), szWhere, szWhere2);
		return szSQL;
}
CString CTMPatientListVLTL::GetQueryString4(){
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szObjects;
	
	szWhere.AppendFormat(_T(" AND hrt_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
			{
				szObjects += _T(", ");
			}
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	if(!szObjects.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_object IN (%s)"), szObjects);
	if(!m_szBookKey.IsEmpty())
		szWhere2.Format(_T(" AND book_no = %s"),m_szBookKey);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND (ho_pdeptid = '%s' OR (ho_deptid = 'C1.1' AND ho_roomid IN (54, 147, 148)))"),m_szDepartmentKey);
	if(m_nAll == 0)
		szWhere2.AppendFormat(_T(" "));
	if(m_nInPatient == 0)
		szWhere2.AppendFormat(_T("AND pdept <> 'PK'"));
	if(m_nOutPatient == 0)
		szWhere2.AppendFormat(_T("AND pdept = 'PK'"));

	szSQL.Format(_T(" SELECT doc_no,") \
		_T("   pname,") \
		_T("   pyear,") \
		_T("   psex,") \
		_T("   pobject,") \
		_T("   paddress,") \
		_T("   pdept,") \
		_T("   disease_date,") \
		_T("   exam_date,") \
		_T("   record_no,") \
		_T("   perform_date,") \
		_T("   diagnostic,") \
		_T("   LISTAGG(CAST(pdesc AS VARCHAR2(1024)), ', ') WITHIN GROUP (") \
		_T(" ORDER BY pdesc) AS pdesc,") \
		_T("   treat_num,") \
		_T("   book_no") \
		_T(" FROM") \
		_T("   (SELECT doc_no,") \
		_T("     pname,") \
		_T("     pyear,") \
		_T("     psex,") \
		_T("     pobject,") \
		_T("     paddress,") \
		_T("     pdept,") \
		_T("     last_value(disease_date) OVER (PARTITION BY doc_no ORDER BY perform_date) AS disease_date,") \
		_T("     exam_date,") \
		_T("     record_no,") \
		_T("     perform_date,") \
		_T("     diagnostic,") \
		_T("     pdesc,") \
		_T("     last_value(treat_num) OVER (PARTITION BY doc_no ORDER BY perform_date) AS treat_num,") \
		_T("     last_value(book_no) OVER (PARTITION BY doc_no ORDER BY perform_date)   AS book_no") \
		_T("   FROM") \
		_T("     (SELECT DISTINCT hrt_docno                        AS doc_no,") \
		_T("       get_patientname(hrt_docno)                      AS pname,") \
		_T("       extract(YEAR FROM hp_birthdate)                 AS pyear,") \
		_T("       hp_sex                                          AS psex,") \
		_T("       get_objectname(ho_object)                       AS pobject,") \
		_T("       hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS paddress,") \
		_T("       CASE") \
		_T("         WHEN ho_deptid = 'C1.1'") \
		_T("         AND ho_roomid  IN (54, 147, 148)") \
		_T("         THEN CAST('PK' AS NVARCHAR2(2))") \
		_T("         ELSE htr_deptid") \
		_T("       END             AS pdept,") \
		_T("       hrt_diseasedate AS disease_date,") \
		_T("       CASE") \
		_T("         WHEN ho_deptid = 'C1.1'") \
		_T("         AND ho_roomid  IN (54, 147, 148)") \
		_T("         THEN") \
		_T("           (SELECT he_examdate") \
		_T("           FROM hms_exam") \
		_T("           WHERE he_docno = ho_docno") \
		_T("           AND he_deptid  = 'C1.1'") \
		_T("           AND he_roomid  IN (54, 147, 148)") \
		_T("		   AND rownum = 1") \
		_T("           )") \
		_T("         ELSE htr_admitdate") \
		_T("       END                 AS exam_date,") \
		_T("       htr_recordno        AS record_no,") \
		_T("       TRUNC(hrt_examdate) AS perform_date,") \
		_T("       CASE") \
		_T("         WHEN ho_deptid = 'C1.1'") \
		_T("         AND ho_roomid  IN (54, 147, 148)") \
		_T("         THEN") \
		_T("           (SELECT NVL(he_diagnostic, he_prediagnostic)") \
		_T("           FROM hms_exam") \
		_T("           WHERE he_docno = ho_docno") \
		_T("           AND he_deptid  = 'C1.1'") \
		_T("           AND he_roomid  IN (54, 147, 148)") \
		_T("           AND he_status  = 'T'") \
		_T("		   AND rownum = 1") \
		_T("           )") \
		_T("         ELSE") \
		_T("           (SELECT DISTINCT last_value(hrt_maindisease) OVER (PARTITION BY hrt_docno)") \
		_T("           FROM hms_rehabilitation p") \
		_T("           WHERE hrt_docno  = ho_docno") \
		_T("           AND hrt_examdate =") \
		_T("             (SELECT MAX(hrt_examdate)") \
		_T("             FROM hms_rehabilitation c") \
		_T("             WHERE p.hrt_docno = c.hrt_docno") \
		_T("             )") \
		_T("           )") \
		_T("       END           AS diagnostic,") \
		_T("       hrt_desc      AS pdesc,") \
		_T("       hrt_treatnum  AS treat_num,") \
		_T("       hrt_treattime AS treat_time,") \
		_T("       hrt_bookno    AS book_no") \
		_T("     FROM hms_rehabilitation") \
		_T("     LEFT JOIN hms_operation") \
		_T("     ON(hrt_docno                   = ho_docno") \
		_T("     AND (instr(hrt_optidx, ho_idx) > 0))") \
		_T("     LEFT JOIN hms_patient") \
		_T("     ON(hp_patientno = hrt_patientno)") \
		_T(" LEFT JOIN hms_doc ON (hd_docno = ho_docno and hd_patientno = hp_patientno) ") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno  = hrt_docno") \
		_T("     AND ho_refidx = htr_idx)") \
		_T("     WHERE 1       = 1 %s") \
		_T("     ) tbl") \
		_T("   WHERE 1 = 1 %s") \
		_T("   ) tbl2") \
		_T(" GROUP BY doc_no,") \
		_T("   pname,") \
		_T("   pyear,") \
		_T("   psex,") \
		_T("   pobject,") \
		_T("   paddress,") \
		_T("   pdept,") \
		_T("   disease_date,") \
		_T("   exam_date,") \
		_T("   record_no,") \
		_T("   perform_date,") \
		_T("   diagnostic,") \
		_T("   treat_num,") \
		_T("   book_no") \
		_T(" ORDER BY perform_date,") \
		_T("   doc_no"), szWhere, szWhere2);
	return szSQL;
}
CString CTMPatientListVLTL::GetQueryString1(){
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szObjects;
	szWhere.AppendFormat(_T(" AND hrt_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
			{
				szObjects += _T(", ");
			}
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	if(!szObjects.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_object IN (%s)"), szObjects);
	if(!m_szBookKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrt_bookno = %s"),m_szBookKey);
	if(!m_szGroupDiseaseKey.IsEmpty())
 		szWhere.AppendFormat(_T(" AND hrt_groupdisease = %s"),m_szGroupDiseaseKey);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND (ho_pdeptid = '%s' OR (ho_deptid = 'C1.1' AND ho_roomid IN (54, 147, 148)))"),m_szDepartmentKey);
	if(m_nAll == 0)
		szWhere2.AppendFormat(_T(" "));
	if(m_nInPatient == 0)
		szWhere2.AppendFormat(_T("WHERE pdept <> 'PK'"));
	if(m_nOutPatient == 0)
		szWhere2.AppendFormat(_T("WHERE pdept = 'PK'"));
	szSQL.Format(_T(" SELECT") \
		_T(" pobject,") \
		_T(" pobjectname,") \
		_T(" SUM(noitru) AS noitru,") \
		_T(" SUM(ngoaitru) AS ngoaitru,") \
		_T(" SUM(total) AS total") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T("   CASE") \
		_T("     WHEN ho_id IN(1, 13)") \
		_T("     THEN 1") \
		_T("     WHEN ho_id IN(11)") \
		_T("     THEN 2") \
		_T("     WHEN ho_id IN(10)") \
		_T("     THEN 3") \
		_T("     WHEN ho_id IN(2)") \
		_T("     THEN 4") \
		_T("     WHEN ho_id IN(8)") \
		_T("     THEN 5") \
		_T("     WHEN ho_id IN(9)") \
		_T("     THEN 6") \
		_T("     WHEN ho_id IN(3)") \
		_T("     THEN 7") \
		_T("     WHEN ho_id IN(7)") \
		_T("     THEN 8") \
		_T("     WHEN ho_id IN(4, 12)") \
		_T("     THEN 9") \
		_T("     WHEN ho_id IN(5)") \
		_T("     THEN 10") \
		_T("   END AS pobject,") \
		_T("   CASE") \
		_T("     WHEN ho_id IN(1, 13)") \
		_T("     THEN 'Qu\xE2n'") \
		_T("     WHEN ho_id IN(11)") \
		_T("     THEN '\x42HQN'") \
		_T("     WHEN ho_id IN(10)") \
		_T("     THEN '\x42HQ\x110'") \
		_T("     WHEN ho_id IN(2)") \
		_T("     THEN '\x42H Qu\xE2n'") \
		_T("     WHEN ho_id IN(8)") \
		_T("     THEN '\x42\x1EA1n'") \
		_T("     WHEN ho_id IN(9)") \
		_T("     THEN 'Tr\x1EBB < \x36'") \
		_T("     WHEN ho_id IN(3)") \
		_T("     THEN '\x43h\xEDnh s\xE1\x63h'") \
		_T("     WHEN ho_id IN(7)") \
		_T("     THEN '\x44\x1ECB\x63h v\x1EE5'") \
		_T("     WHEN ho_id IN(4, 12)") \
		_T("     THEN '\x42HYT kh\xE1\x63'") \
		_T("     WHEN ho_id IN(5)") \
		_T("     THEN '\x42H TNSQ'") \
		_T("   END AS pobjectname,") \
		_T("   noitru,") \
		_T("   ngoaitru,") \
		_T("   total") \
		_T(" FROM hms_object") \
		_T(" LEFT JOIN") \
		_T("   (SELECT pobjectid,") \
		_T("     CASE") \
		_T("       WHEN pdept <> 'PK'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS noitru,") \
		_T("     CASE") \
		_T("       WHEN pdept = 'PK'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ngoaitru,") \
		_T("     pcount AS total") \
		_T("   FROM") \
		_T("     ( SELECT DISTINCT ho_object AS pobjectid,") \
		_T("       CASE") \
		_T("         WHEN ho_deptid = 'C1.1'") \
		_T("         AND ho_roomid  IN (54, 147, 148)") \
		_T("         THEN CAST('PK' AS NVARCHAR2(2))") \
		_T("         ELSE htr_deptid") \
		_T("       END                 AS pdept,") \
		_T("       hrt_docno           AS docno,") \
		_T("       TRUNC(hrt_examdate) AS examdate,") \
		_T("       1                   AS pcount") \
		_T("     FROM hms_rehabilitation") \
		_T("     LEFT JOIN hms_operation") \
		_T("     ON(ho_docno                    = hrt_docno") \
		_T("     AND (instr(hrt_optidx, ho_idx) > 0))") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno  = ho_docno") \
		_T("     AND ho_refidx = htr_idx)") \
		_T("     WHERE 1       = 1 %s") \
		_T("     ) tbl %s") \
		_T("   ) ON(pobjectid = ho_id)") \
		_T("   WHERE ho_active  = 'Y'") \
		_T(" ) tbl2") \
		_T(" GROUP BY") \
		_T(" pobject,") \
		_T(" pobjectname") \
		_T(" ORDER BY pobject"), szWhere, szWhere2);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CTMPatientListVLTL::GetQueryString2(){
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szObjects;
	szWhere.AppendFormat(_T(" AND hrt_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
			{
				szObjects += _T(", ");
			}
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	if(!szObjects.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_object IN (%s)"), szObjects);
	if(!m_szBookKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrt_bookno = %s"),m_szBookKey);
	if(!m_szGroupDiseaseKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrt_groupdisease = %s"),m_szGroupDiseaseKey);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND (ho_pdeptid = '%s' OR (ho_deptid = 'C1.1' AND ho_roomid IN (54, 147, 148)))"),m_szDepartmentKey);
	if(m_nAll == 0)
		szWhere2.AppendFormat(_T(" "));
	if(m_nInPatient == 0)
		szWhere2.AppendFormat(_T("WHERE pdept <> 'PK'"));
	if(m_nOutPatient == 0)
		szWhere2.AppendFormat(_T("WHERE pdept = 'PK'"));
	szSQL.Format(_T(" SELECT groupdiseaseid,") \
		_T(" groupdisease,") \
		_T(" SUM(total) AS total,") \
		_T(" round(SUM(total)/ grand_total*100, 2) AS grand_total") \
		_T(" FROM (") \
		_T(" SELECT idx, ") \
		_T(" groupdiseaseid,") \
		_T(" groupdisease,") \
		_T(" pcount AS total,") \
		_T(" SUM(pcount) OVER (PARTITION BY idx) grand_total") \
		_T(" FROM") \
		_T(" ( SELECT DISTINCT 'X' idx, ") \
		_T(" (SELECT ss_code FROM sys_sel WHERE ss_code = hrt_groupdisease AND ss_id = 'hms_groupdiseasec6') AS groupdiseaseid,") \
		_T(" (SELECT ss_desc FROM sys_sel WHERE ss_code = hrt_groupdisease AND ss_id = 'hms_groupdiseasec6') AS groupdisease,") \
		_T(" CASE") \
		_T(" WHEN ho_deptid = 'C1.1'") \
		_T(" AND ho_roomid  IN (54, 147, 148)") \
		_T(" THEN CAST('PK' AS NVARCHAR2(2))") \
		_T(" ELSE htr_deptid") \
		_T(" END                 AS pdept,") \
		_T(" hrt_docno           AS docno,") \
		_T(" TRUNC(hrt_examdate) AS examdate,") \
		_T(" 1                   AS pcount") \
		_T(" FROM hms_rehabilitation") \
		_T(" LEFT JOIN hms_operation") \
		_T(" ON(ho_docno                    = hrt_docno") \
		_T(" AND (instr(hrt_optidx, ho_idx) > 0))") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno  = ho_docno") \
		_T(" AND ho_refidx = htr_idx)") \
		_T(" WHERE hrt_groupdisease IS NOT NULL %s") \
		_T(" ) %s") \
		_T(" )") \
		_T(" GROUP BY idx, groupdiseaseid,") \
		_T(" groupdisease, grand_total") \
		_T(" ORDER BY idx, CAST(groupdiseaseid AS INTEGER)"), szWhere, szWhere2);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CTMPatientListVLTL::GetQueryString3(){
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szObjects;
	szWhere.AppendFormat(_T(" AND ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
			{
				szObjects += _T(", ");
			}
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	if(!szObjects.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_object IN (%s)"), szObjects);
	if(!m_szBookKey.IsEmpty())
		szWhere2.AppendFormat(_T(" AND book_no = %s"),m_szBookKey);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND (ho_pdeptid = '%s' OR (ho_deptid = 'C1.1' AND ho_roomid IN (54, 147, 148)))"),m_szDepartmentKey);
	if(!m_szMethodKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfl_categoryid = '%s'"), m_szMethodKey);
	if(m_nAll == 0)
		szWhere2.AppendFormat(_T(" "));
	if(m_nInPatient == 0)
		szWhere2.AppendFormat(_T("AND pdept <> 'PK'"));
	if(m_nOutPatient == 0)
		szWhere2.AppendFormat(_T("AND pdept = 'PK'"));
	szSQL.Format(_T(" SELECT") \
		_T(" ss_desc AS groupname,") \
		_T(" NVL(c1, 0) AS c1,") \
		_T(" NVL(c2, 0) AS c2,") \
		_T(" NVL(c3, 0) AS c3,") \
		_T(" NVL(c4, 0) AS c4,") \
		_T(" NVL(c5, 0) AS c5,") \
		_T(" NVL(c6, 0) AS c6,") \
		_T(" NVL(c7, 0) AS c7,") \
		_T(" NVL(c8, 0) AS c8,") \
		_T(" NVL(c9, 0) AS c9,") \
		_T(" NVL(c10, 0) AS c10,") \
		_T(" NVL(c11, 0) AS c11,") \
		_T(" NVL(c12, 0) AS c12,") \
		_T(" NVL(c13, 0) AS c13,") \
		_T(" NVL(c14, 0) AS c14,") \
		_T(" NVL(c15, 0) AS c15,") \
		_T(" NVL(c16, 0) AS c16,") \
		_T(" NVL(c17, 0) AS c17,") \
		_T(" NVL(c18, 0) AS c18,") \
		_T(" NVL(c19, 0) AS c19,") \
		_T(" NVL(c20, 0) AS c20,") \
		_T(" NVL(c21, 0) AS c21,") \
		_T(" NVL(c22, 0) AS c22,") \
		_T(" NVL(c23, 0) AS c23") \
		_T(" FROM sys_sel") \
		_T(" LEFT JOIN ") \
		_T(" (") \
		_T(" SELECT (SELECT ss_code FROM sys_sel WHERE ss_code = NVL(groupid, 999) AND ss_id = 'hms_fee_category' AND ss_vndesc = 'C6') AS groupid,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN quan") \
		_T("     ELSE 0") \
		_T("   END) AS c2,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN bhquannhan") \
		_T("     ELSE 0") \
		_T("   END) AS c4,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN bhquandoi") \
		_T("     ELSE 0") \
		_T("   END) AS c6,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN bhytquan") \
		_T("     ELSE 0") \
		_T("   END) AS c8,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN ban") \
		_T("     ELSE 0") \
		_T("   END) AS c10,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN treem") \
		_T("     ELSE 0") \
		_T("   END) AS c12,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN chinhsach") \
		_T("     ELSE 0") \
		_T("   END) AS c14,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN dichvu") \
		_T("     ELSE 0") \
		_T("   END) AS c16,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN bhytkhac") \
		_T("     ELSE 0") \
		_T("   END) AS c18,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN bhytthannhan") \
		_T("     ELSE 0") \
		_T("   END) AS c20,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept = 'PK'") \
		_T("     THEN total") \
		_T("     ELSE 0") \
		_T("   END) AS c22,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN quan") \
		_T("     ELSE 0") \
		_T("   END) AS c1,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN bhquannhan") \
		_T("     ELSE 0") \
		_T("   END) AS c3,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN bhquandoi") \
		_T("     ELSE 0") \
		_T("   END) AS c5,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN bhytquan") \
		_T("     ELSE 0") \
		_T("   END) AS c7,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN ban") \
		_T("     ELSE 0") \
		_T("   END) AS c9,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN treem") \
		_T("     ELSE 0") \
		_T("   END) AS c11,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN chinhsach") \
		_T("     ELSE 0") \
		_T("   END) AS c13,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN dichvu") \
		_T("     ELSE 0") \
		_T("   END) AS c15,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN bhytkhac") \
		_T("     ELSE 0") \
		_T("   END) AS c17,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN bhytthannhan") \
		_T("     ELSE 0") \
		_T("   END) AS c19,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN pdept <> 'PK'") \
		_T("     THEN total") \
		_T("     ELSE 0") \
		_T("   END)       AS c21,") \
		_T("   SUM(total) AS c23") \
		_T(" FROM") \
		_T("  (SELECT hfl_name AS itemname,") \
		_T("     hfl_categoryid AS groupid,") \
		_T("     CASE") \
		_T("       WHEN ho_deptid = 'C1.1'") \
		_T("       AND ho_roomid  IN (54, 147, 148)") \
		_T("       THEN CAST('PK' AS NVARCHAR2(2))") \
		_T("       ELSE htr_deptid") \
		_T("     END AS pdept,") \
		_T("     (SELECT DISTINCT last_value(hrt_bookno) OVER (PARTITION BY hrt_docno)") \
		_T("     FROM hms_rehabilitation p") \
		_T("     WHERE hrt_docno  = ho_docno") \
		_T("     AND hrt_examdate =") \
		_T("       (SELECT MAX(hrt_examdate)") \
		_T("       FROM hms_rehabilitation c") \
		_T("       WHERE p.hrt_docno = c.hrt_docno") \
		_T("       )") \
		_T("     ) AS book_no,") \
		_T("     CASE") \
		_T("       WHEN ho_object IN(1, 13)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS quan,") \
		_T("     CASE") \
		_T("       WHEN ho_object = 2") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhytquan,") \
		_T("     CASE") \
		_T("       WHEN ho_object = 3") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS chinhsach,") \
		_T("     CASE") \
		_T("       WHEN ho_object IN(4, 12)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhytkhac,") \
		_T("     CASE") \
		_T("       WHEN ho_object = 5") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhytthannhan,") \
		_T("     CASE") \
		_T("       WHEN ho_object = 7") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS dichvu,") \
		_T("     CASE") \
		_T("       WHEN ho_object = 8") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS ban,") \
		_T("     CASE") \
		_T("       WHEN ho_object = 9") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS treem,") \
		_T("     CASE") \
		_T("       WHEN ho_object = 10") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhquandoi,") \
		_T("     CASE") \
		_T("       WHEN ho_object = 11") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END    AS bhquannhan,") \
		_T("     ho_qty AS total") \
		_T("   FROM hms_operation") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid = ho_itemid)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON(htr_docno     = ho_docno") \
		_T("   AND ho_refidx    = htr_idx)") \
		_T("   WHERE ho_status <> 'O'") \
		_T("   AND ho_itemid   IS NOT NULL %s") \
		_T("   )") \
		_T(" WHERE 1 = 1 %s") \
		_T(" GROUP BY groupid") \
		_T(" ) ON (ss_code = groupid)") \
		_T(" WHERE ss_id = 'hms_fee_category'") \
		_T(" AND ss_vndesc = 'C6'") \
		_T(" ORDER BY ss_desc"), szWhere, szWhere2);
		_fmsg(_T("%s"), szSQL);
	return szSQL;
}