#include "stdafx.h"
#include "RMRegistrationPatientListReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CRMRegistrationPatientListReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMRegistrationPatientListReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRMRegistrationPatientListReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRMRegistrationPatientListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRMRegistrationPatientListReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnExamRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMRegistrationPatientListReport* )pWnd)->OnExamRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamRoomSelendokFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnExamRoomSelendok();
}
/*static void _OnExamRoomSetfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnExamRoomKillfocus();
}*/
/*static void _OnExamRoomKillfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnExamRoomKillfocus();
}*/
static long _OnExamRoomLoadDataFnc(CWnd *pWnd){
	return ((CRMRegistrationPatientListReport *)pWnd)->OnExamRoomLoadData();
}
/*static void _OnExamRoomAddNewFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnExamRoomAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMRegistrationPatientListReport* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CRMRegistrationPatientListReport *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CRMRegistrationPatientListReport *)pWnd)->OnObjectAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	 ((CRMRegistrationPatientListReport*)pWnd)->OnAllSelect();
}
static void _OnExaminatedSelectFnc(CWnd *pWnd){
	 ((CRMRegistrationPatientListReport*)pWnd)->OnExaminatedSelect();
}
static void _OnHasfeeSelectFnc(CWnd *pWnd){
	 ((CRMRegistrationPatientListReport*)pWnd)->OnHasfeeSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRMRegistrationPatientListReport *pVw = (CRMRegistrationPatientListReport *)pWnd;
	pVw->OnPrintSelect();
} 

/*
static void _OnPrint1SelectFnc(CWnd *pWnd){
	CRMRegistrationPatientListReport *pVw = (CRMRegistrationPatientListReport *)pWnd;
	pVw->OnPrint1Select();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRMRegistrationPatientListReport *pVw = (CRMRegistrationPatientListReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRMRegistrationPatientListReport *pVw = (CRMRegistrationPatientListReport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHRRegistrationPatientListReportFnc(CWnd *pWnd){
	 return ((CRMRegistrationPatientListReport*)pWnd)->OnAddHRRegistrationPatientListReport();
} 
static int _OnEditHRRegistrationPatientListReportFnc(CWnd *pWnd){
	 return ((CRMRegistrationPatientListReport*)pWnd)->OnEditHRRegistrationPatientListReport();
} 
static int _OnDeleteHRRegistrationPatientListReportFnc(CWnd *pWnd){
	 return ((CRMRegistrationPatientListReport*)pWnd)->OnDeleteHRRegistrationPatientListReport();
} 
static int _OnSaveHRRegistrationPatientListReportFnc(CWnd *pWnd){
	 return ((CRMRegistrationPatientListReport*)pWnd)->OnSaveHRRegistrationPatientListReport();
} 
static int _OnCancelHRRegistrationPatientListReportFnc(CWnd *pWnd){
	 return ((CRMRegistrationPatientListReport*)pWnd)->OnCancelHRRegistrationPatientListReport();
} 
static void _OnReceptionistLoadDataFnc(CWnd* pWnd){
	((CRMRegistrationPatientListReport*)pWnd)->OnReceptionistLoadData();
}
static void _OnReexamSelectFnc(CWnd *pWnd){
	 ((CRMRegistrationPatientListReport*)pWnd)->OnReexamSelect();
}

CRMRegistrationPatientListReport::CRMRegistrationPatientListReport(CWnd *pParent){
	m_nDlgWidth = 945;
	m_nDlgHeight = 220;
	SetDefaultValues();
}
CRMRegistrationPatientListReport::~CRMRegistrationPatientListReport(){
}
void CRMRegistrationPatientListReport::OnCreateComponents()
{
	m_wndReceptionList.Create(this, _T("Report Condition"), 5, 5, 490, 242);
	m_wndReceptionistLabel.Create(this, _T("Receptionist"), 10, 150, 90, 175);
	m_wndReceptionist.Create(this,95, 150, 485, 175); 
	m_wndIsViettel.Create(this, _T("IsViettel"), 10, 180, 90, 205);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndExamRoomLabel.Create(this, _T("Exam Room"), 10, 90, 90, 115);
	m_wndExamRoom.Create(this,95, 90, 485, 115);
	m_wndExamRoom.SetCheckBox(true);
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 90, 145);
	m_wndObject.Create(this,95, 120, 485, 145); 
	m_wndAll.Create(this, _T("All"), 175, 180, 275, 205);
	m_wndExaminated.Create(this, _T("Examinated"), 280, 180, 380, 205);
	m_wndHasfee.Create(this, _T("Has fee"), 385, 180, 485, 205);
	m_wndPrint.Create(this, _T("&Print"), 325, 248, 405, 273);
	m_wndExport.Create(this, _T("&ExportXLS"), 410, 248, 490, 273);
	m_wndReexam.Create(this, _T("Reexam"), 10, 212, 275, 237);

}
void CRMRegistrationPatientListReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(35);
	////m_wndYear.SetCheckValue(true);
	m_wndYear.ModifyStyle(0, ES_NUMBER);
	
	////m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
//	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
//  m_wndToDate.SetCheckValue(true);
	//m_wndExamRoom.SetCheckValue(true);
	m_wndExamRoom.LimitText(65);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndExamRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndExamRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndReceptionist.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndReceptionist.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}
void CRMRegistrationPatientListReport::OnSetWindowEvents(){
	m_wndReceptionist.SetEvent(WE_LOADDATA, _OnReceptionistLoadDataFnc);
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
	m_wndExamRoom.SetEvent(WE_SELENDOK, _OnExamRoomSelendokFnc);
	//m_wndExamRoom.SetEvent(WE_SETFOCUS, _OnExamRoomSetfocusFnc);
	//m_wndExamRoom.SetEvent(WE_KILLFOCUS, _OnExamRoomKillfocusFnc);
	m_wndExamRoom.SetEvent(WE_SELCHANGE, _OnExamRoomSelectChangeFnc);
	m_wndExamRoom.SetEvent(WE_LOADDATA, _OnExamRoomLoadDataFnc);
	//m_wndExamRoom.SetEvent(WE_ADDNEW, _OnExamRoomAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndExaminated.SetEvent(WE_CLICK, _OnExaminatedSelectFnc);
	m_wndHasfee.SetEvent(WE_CLICK, _OnHasfeeSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndPrint1.SetEvent(WE_CLICK, _OnPrint1SelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndReexam.SetEvent(WE_CLICK, _OnReexamSelectFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromDate = m_szToDate = pMF->GetSysDate(yyyymmdd);
	m_szToDate += _T("23:59");
	SetMode(GetMode());

}
void CRMRegistrationPatientListReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndIsViettel.GetDlgCtrlID(), m_bIsViettel);
	DDX_TextEx(pDX, m_wndReceptionist.GetDlgCtrlID(), m_szReceptionistKey);
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndExamRoom.GetDlgCtrlID(), m_szExamRoomKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndExaminated.GetDlgCtrlID(), m_nExaminated);
	DDX_Radio(pDX, m_wndHasfee.GetDlgCtrlID(), m_nHasfee);
	DDX_Check(pDX, m_wndReexam.GetDlgCtrlID(), m_bReexam);

}
void CRMRegistrationPatientListReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRMRegistrationPatientListReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CRMRegistrationPatientListReport::SetDefaultValues(){
	m_bIsViettel = FALSE;
	m_szReceptionistKey.Empty();
	m_szExamRoomKey.Empty();
	m_szObjectKey.Empty();
	m_nAll = 0;
	m_nExaminated = 1;
	m_nHasfee = 1;
	m_bReexam=FALSE;
}
int CRMRegistrationPatientListReport::SetMode(int nMode){
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
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CRMRegistrationPatientListReport::OnYearChange(){
	
} */
/*void CRMRegistrationPatientListReport::OnYearSetfocus(){
	
} */
/*void CRMRegistrationPatientListReport::OnYearKillfocus(){
	
} */
int CRMRegistrationPatientListReport::OnYearCheckValue(){
	return 0;
} 
void CRMRegistrationPatientListReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CRMRegistrationPatientListReport::OnReexamSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CRMRegistrationPatientListReport::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);
}
/*void CRMRegistrationPatientListReport::OnReportPeriodSetfocus(){
	
}*/
/*void CRMRegistrationPatientListReport::OnReportPeriodKillfocus(){
	
}*/
long CRMRegistrationPatientListReport::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szSQL.Format(_T("SELECT hpr_idx, hpr_name FROM hms_period_report ORDER BY hpr_idx"));
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty())
	{
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRMRegistrationPatientListReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRMRegistrationPatientListReport::OnFromDateChange(){
	
} */
/*void CRMRegistrationPatientListReport::OnFromDateSetfocus(){
	
} */
/*void CRMRegistrationPatientListReport::OnFromDateKillfocus(){
	
} */
int CRMRegistrationPatientListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CRMRegistrationPatientListReport::OnToDateChange(){
	
} */
/*void CRMRegistrationPatientListReport::OnToDateSetfocus(){
	
} */
/*void CRMRegistrationPatientListReport::OnToDateKillfocus(){
	
} */
int CRMRegistrationPatientListReport::OnToDateCheckValue(){
	return 0;
}
void CRMRegistrationPatientListReport::OnAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CRMRegistrationPatientListReport::OnExaminatedSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CRMRegistrationPatientListReport::OnHasfeeSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CRMRegistrationPatientListReport::OnExamRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 
void CRMRegistrationPatientListReport::OnExamRoomSelendok(){
	 
}
/*void CRMRegistrationPatientListReport::OnExamRoomSetfocus(){
	
}*/
/*void CRMRegistrationPatientListReport::OnExamRoomKillfocus(){
	
}*/
long CRMRegistrationPatientListReport::OnExamRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamRoom.IsSearchKey() && !m_szExamRoomKey.IsEmpty())
	{
		szWhere.Format(_T("and hrl_id = %d"), ToInt(m_szExamRoomKey)); 
	};
	m_wndExamRoom.DeleteAllItems(); 
	szSQL.Format(_T("select hrl_name as name, hrl_id as id from hms_roomlist left join sys_dept on (sd_id = hrl_deptid) where hrl_deptid = '%s' %s Order by id"), pMF->m_szDept,szWhere);
//_debug(_T("%s"), szSQL);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndExamRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRMRegistrationPatientListReport::OnExamRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CRMRegistrationPatientListReport::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMRegistrationPatientListReport::OnObjectSelendok(){
	 
}
/*void CRMRegistrationPatientListReport::OnObjectSetfocus(){
	
}*/
/*void CRMRegistrationPatientListReport::OnObjectKillfocus(){
	
}*/
long CRMRegistrationPatientListReport::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szSQL.Format(_T("SELECT ho_id, ho_desc FROM hms_object ORDER BY ho_id"));
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("ho_id")), 
			rs.GetValue(_T("ho_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CRMRegistrationPatientListReport::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRMRegistrationPatientListReport::OnPrintSelect()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(!pMF->CheckPermission(_T("RM.100.03")))
	{
		ShowMessageBox(_T("Liên hệ admin để được cấp quyền RM.100.03 sử dụng chức năng này!"));
		return;	
	}
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr;
	CString szSQL;	
	CString szWhere;
	int index = 0;
	if(!rpt.Init(_T("Reports/HMS/RM_DANHSACHBENHNHANTIEPDON.RPT")) )
		return ;
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Object
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportObject")), m_wndObject.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("ReportObject"), tmpStr);
	//pMF->m_CompanyInfo.sc_name
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	//HealthService
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	//if (m_bIsViettel) rpt.GetReportHeader()->SetValue(_T("Viettel_object"), _T("\x110\x1ED1i t\x1B0\x1EE3ng Vi\x65tt\x65l"));

	//Page Header
	//Report Detail

	BeginWaitCursor();	
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	while (!rs.IsEOF()){
		CReportSection* rptDetail = rpt.AddDetail(); 
		index++;
		rptDetail->SetValue(_T("1"), index);

		rs.GetValue(_T("SoHs"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("SoPk"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		tmpStr = CDate::Convert(rs.GetValue(_T("NgayKham")), yyyymmdd,ddmmyyyy);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("HovaTen"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("Tuoi"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("Gioi"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("NgheNghiep"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("SoTheBHYT"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("DiaChi"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.MoveNext();
	}
	EndWaitCursor();

	tmpStr.Format(_T("%s"),pMF->GetSysDate());
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4)); 
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
} 

/*
void CRMRegistrationPatientListReport::OnPrint1Select(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr,szMemory,szDate,szSysDate;
	CString szSQL;	
	CString szWhere;
	double nCost = 0;
	int index = 0;
	if(!rpt.Init(_T("Reports/HMS/Phieudangkydv.RPT")) )
		return ;
	BeginWaitCursor();	
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);

    
	rs.GetValue(_T("patientname"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("1"),tmpStr);

	rs.GetValue(_T("docno"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("2"),tmpStr);

	rs.GetValue(_T("name"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("3"),tmpStr);

	rs.GetValue(_T("phone"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("4"),tmpStr);

	rs.GetValue(_T("khac"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("5"),tmpStr);

	rs.GetValue(_T("deptid"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("13"),tmpStr);

	while (!rs.IsEOF()){
		CReportSection* rptDetail = rpt.AddDetail(); 
		index++;
		rptDetail->SetValue(_T("6"), index);

		rs.GetValue(_T("nameservice"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		tmpStr = CDate::Convert(rs.GetValue(_T("orderdate")), yyyymmdd,ddmmyyyy);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("qty"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("cost"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);


		rs.MoveNext();
	}
	tmpStr.Format(_T("%s"),pMF->GetSysDate());
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4)); 
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	
	EndWaitCursor();
	rpt.PrintPreview();
} */
void CRMRegistrationPatientListReport::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export Danh sách bệnh nhân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export danh sách mũi tiêm theo đơn vị"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("Export vật tư sử dụng đi kèm mũi tiêm"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect1();
			break;
		case 2:
			OnExportSelect2();
			break;
		case 3:
			OnExportSelect3();
			break;	
	}
} 
void CRMRegistrationPatientListReport::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 
int CRMRegistrationPatientListReport::OnAddHRRegistrationPatientListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CRMRegistrationPatientListReport::OnEditHRRegistrationPatientListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CRMRegistrationPatientListReport::OnDeleteHRRegistrationPatientListReport(){
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
 		OnCancelHRRegistrationPatientListReport(); 
 	}
	return 0;
}
int CRMRegistrationPatientListReport::OnSaveHRRegistrationPatientListReport(){
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
 		//OnHRRegistrationPatientListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRMRegistrationPatientListReport::OnCancelHRRegistrationPatientListReport(){
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
int CRMRegistrationPatientListReport::OnHRRegistrationPatientListReportListLoadData(){
	return 0;
}

CString CRMRegistrationPatientListReport::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szRoomName, szRoomID;
	szWhere.Empty();
	if(m_nAll == 0)
		szWhere.Format(_T(" and he_status in('O','P','T')"));
	if(m_nExaminated == 0)
		szWhere.Format(_T(" and he_status in('P','T') "));
	if (m_nHasfee == 0)
		szWhere.Format(_T(" and hfe_status = 'P'"));

	
	for (int i=0 ; i<= m_wndExamRoom.GetCount(); i++)
	 {
		 if(m_wndExamRoom.GetCheck(i))
		 {
			 m_wndExamRoom.SetCurSel(i);
			 if(!szRoomID.IsEmpty())
					szRoomID += _T(",");						
					szRoomID.AppendFormat(_T("'%s'"), m_wndExamRoom.GetCheck(i,0));			
					if(!szRoomName.IsEmpty())
					szRoomName += _T(", ");						
			szRoomName.AppendFormat(_T("%s"), m_wndExamRoom.GetCheck(i, 0));
		 }
	 }
	
	 if (!m_szExamRoomKey.IsEmpty())
	 	 szWhere.AppendFormat(_T(" AND he_roomid in (%s)"), szRoomID);	
	
	/*if(str2int(m_szExamRoomKey) > 0)
	{
		szWhere.AppendFormat(_T(" and he_roomid= %d"), str2int(m_szExamRoomKey));
	}*/

	if(str2int(m_szObjectKey) > 0)
	{
		szWhere.AppendFormat(_T(" and hd_object=%d "), str2int(m_szObjectKey));
	}
	if (!m_szReceptionistKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hd_createdby = '%s'"), m_szReceptionistKey);
	if (m_bIsViettel) szWhere.AppendFormat(_T(" and hd_viettel_object = 'Y'"));

	if (m_bReexam) szWhere.AppendFormat(_T(" and HE_EXAMTYPE='D0000048'"));

	if (pMF->GetCurrentDepartmentID() == _T("TTHTSS") || pMF->GetCurrentDepartmentID() == _T("TTDTHM"))
	{
	szSQL.Format(_T(" SELECT	 distinct hd_docno AS SoHs,") \
					_T("         trim(he_roomid||'.'||he_receptno) AS SoPk,") \
					_T("         (he_examdate ) AS NgayKham,") \
					_T("         trim(hp_surname)||' '||trim(hp_midname)||' '||trim(hp_firstname) AS HovaTen,") \
					_T("       	hms_getage((hd_admitdate),hp_birthdate) AS Tuoi,") \
					_T("         (select distinct ss_desc FROM sys_sel WHERE ss_id = 'sys_sex' AND ss_code = hp_sex) AS Gioi,") \
					_T("         (select distinct ss_desc FROM sys_sel WHERE ss_id = 'sys_occupation' AND cast(ss_code AS integer) = hp_occupation) AS NgheNghiep,") \
					_T("         hd_cardno AS SoTheBHYT,") \
					_T("         hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS DiaChi, get_objectname(hd_object) AS DoiTuong") \
					_T(" FROM hms_patient ") \
					_T(" LEFT JOIN hms_doc ON (hd_patientno = hp_patientno)") \
					_T(" LEFT JOIN hms_exam ON (he_docno = hd_docno)") \
					_T(" LEFT JOIN hms_fee ON (hfe_docno = hd_docno AND hfe_group = 'D0000')") \
					_T(" WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" AND he_deptid= '%s' ") \
					_T(" %s") \
					_T(" ORDER BY hd_docno"), m_szFromDate, m_szToDate, pMF->m_szDept, szWhere);
	}
	else
	{
	szSQL.Format(_T(" SELECT	 distinct hd_docno AS SoHs,") \
					_T("         trim(he_roomid||'.'||he_receptno) AS SoPk,") \
					_T("         to_char(hd_admitdate, 'DD/MM/YYYY HH24:MM:SS') AS NgayKham,") \
					_T("         trim(hp_surname)||' '||trim(hp_midname)||' '||trim(hp_firstname) AS HovaTen,") \
					_T("       	 to_char(hp_birthdate, 'DD/MM/YYYY') AS Tuoi,") \
					_T("         (select distinct ss_desc FROM sys_sel WHERE ss_id = 'sys_sex' AND ss_code = hp_sex) AS Gioi,") \
					_T("         (select distinct ss_desc FROM sys_sel WHERE ss_id = 'sys_occupation' AND cast(ss_code AS integer) = hp_occupation) AS NgheNghiep,") \
					_T("         hd_cardno AS SoTheBHYT,") \
					_T("         hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS DiaChi, get_objectname(hd_object) AS DoiTuong,") \
					_T("   TRIM(hd_telephone") \
					_T("   || ' '") \
					_T("   || hd_contacttel)                               AS telephone,") \
					_T("   hp_sin                                          AS socmnd,") \
					_T("   TO_CHAR(HD_ICARD_ISSUEDATE, 'DD/MM/YYYY')       AS ngaycapcmnd,") \
					_T("   (select SP_NAME from SYS_PROV where sp_id=HD_ICARD_ISSUEPLACE) AS noicap,") \
					//_T("   hp_workplace                         AS noilamviec,") \//
					_T("   case when hp_type='V' and HP_WORKPLACEID is not null then (select VC_ADDRESS_NAME from M_VACCINE_ADDRESS where VC_ADDRESS_CODE=HP_WORKPLACEID) else hp_workplace end AS noilamviec,") \
					_T("   HD_CONTACTADDR as diachilienhe,") \
					_T("   sys_sel_getname('hms_rank', hp_rank) as rank,") \

					_T(" case when VC_THEFIRST=1 THEN to_char(VC_FIRSTDATE, 'DD/MM/YYYY') else NULL end as thoigiantiemlan1,") \
					
					_T(" (SELECT VC_LOT FROM M_VACCINE_LIST WHERE VC_VACCINE1=VC_CODE) AS lot1,") \

					_T("     (select VC_NAME from M_VACCINE_LIST where VC_VACCINE1=VC_CODE) as vaccine1,") \
					_T("     case when VC_THESECOND=1 THEN to_char(VC_SECONDDATE, 'DD/MM/YYYY') else NULL end as thoigiantiemlan2,") \

					_T(" (SELECT VC_LOT FROM M_VACCINE_LIST WHERE VC_VACCINE2=VC_CODE) AS lot2,") \

					_T("     (select VC_NAME from M_VACCINE_LIST where VC_VACCINE2=VC_CODE) as vaccine2,") \

					_T("  CASE") \
					_T("     WHEN VC_THE3=1") \
					_T("     THEN TO_CHAR(VC_DATE3, 'DD/MM/YYYY')") \
					_T("     ELSE NULL") \
					_T("   END AS thoigiantiemlan3,  ") \
					_T("    (SELECT VC_LOT FROM M_VACCINE_LIST WHERE VC_VACCINE3=VC_CODE") \
					_T("   ) AS lot3,") \
					_T("   (SELECT VC_NAME FROM M_VACCINE_LIST WHERE VC_VACCINE3=VC_CODE") \
					_T("   ) AS vaccine3,  ") \
					_T("     CASE") \
					_T("     WHEN VC_THE4=1") \
					_T("     THEN TO_CHAR(VC_DATE4, 'DD/MM/YYYY')") \
					_T("     ELSE NULL") \
					_T("   END AS thoigiantiemlan4,  ") \
					_T("    (SELECT VC_LOT FROM M_VACCINE_LIST WHERE VC_VACCINE4=VC_CODE") \
					_T("   ) AS lot4,") \
					_T("   (SELECT VC_NAME FROM M_VACCINE_LIST WHERE VC_VACCINE4=VC_CODE") \
					_T("   ) AS vaccine4") \


					_T(" FROM hms_patient ") \
					_T(" LEFT JOIN hms_doc ON (hd_patientno = hp_patientno)") \
					_T(" LEFT JOIN RM_VACCINE_INFOR ON (hp_patientno=VC_PATIENTNO) ") \
					_T(" LEFT JOIN hms_exam ON (he_docno = hd_docno)") \
					_T(" LEFT JOIN hms_fee ON (hfe_docno = hd_docno AND hfe_group = 'D0000')") \
					_T(" WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" AND he_deptid= '%s' ") \
					_T(" %s") \
					_T(" AND hd_admitdept = he_deptid ") \
					_T(" ORDER BY hd_docno"), m_szFromDate, m_szToDate, pMF->m_szDept, szWhere);
	}
	return szSQL;
}

/*
CString CRMRegistrationPatientListReport::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	
	szSQL.Format(_T(" select ") \
		_T("       hd_docno as docno,") \
		_T("       get_patientname(hd_docno) as patientname,") \
		_T("       hr_name as name,") \
		_T("       hfe_deptid as deptid,") \
		_T("       hr_phone as phone,") \
		_T("       hr_reference as khac,") \
		_T("       hfel_desc as nameservice,hfe_orderdate as orderdate, hfe_enddate as enddate,hfel_unitprice as unit,") \
		_T("       hfel_cost as cost,") \
		_T("       hfel_quantity as qty") \
		_T("          ") \
		_T("       from hms_patient") \
		_T("       left join hms_doc on (hp_patientno=hd_patientno)") \
		_T("       left join hms_relative on (hr_docno = hd_docno)") \
		_T("       left join hms_fee_extra on (hfe_docno = hd_docno)") \
		_T("       left join hms_fee_extraline on (hfe_docno = hfel_docno and hfe_fee_extra_id = hfel_fee_extra_id )") \
		_T("       where hd_docno = 15151647 and hr_relative_id = 3"));
	return szSQL;
}*/

int CRMRegistrationPatientListReport::OnReceptionistLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	return pMF->LoadUserList(&m_wndReceptionist, m_szReceptionistKey, szFilter);
}

void CRMRegistrationPatientListReport::OnExportSelect1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("RM.100.03")))
	{
		ShowMessageBox(_T("Liên hệ admin để được cấp quyền RM.100.03 sử dụng chức năng này!"));
		return;	
	}

	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Column Width
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 15);

	xls.SetColumnWidth(3, 15);

	xls.SetColumnWidth(4, 25);

	xls.SetColumnWidth(5, 10);

	xls.SetColumnWidth(6, 5);

	xls.SetColumnWidth(7, 17);
	xls.SetColumnWidth(8, 25);

	xls.SetColumnWidth(9, 50);

	xls.SetColumnWidth(10, 20);

	xls.SetColumnWidth(11, 36);

	xls.SetColumnWidth(12, 13);

	xls.SetColumnWidth(13, 15);

	xls.SetColumnWidth(14, 15);

	xls.SetColumnWidth(15, 52);
	xls.SetColumnWidth(16, 35);
	xls.SetColumnWidth(17, 35);

	xls.SetColumnWidth(18, 14);
	xls.SetColumnWidth(19, 28);
	xls.SetColumnWidth(20, 14);

	xls.SetColumnWidth(21, 14);
	xls.SetColumnWidth(22, 28);
	xls.SetColumnWidth(23, 14);

	xls.SetColumnWidth(24, 14);
	xls.SetColumnWidth(25, 28);
	xls.SetColumnWidth(26, 14);

	xls.SetColumnWidth(27, 14);
	xls.SetColumnWidth(28, 28);
	xls.SetColumnWidth(29, 14);

	int nCol = 0;
	int nRow = 0;	
	
	//Report Header
	nRow++;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 11);
	nRow++;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 11);
	nRow++;
	xls.SetCellMergedColumns(nCol, nRow, 16);
	xls.SetCellText(nCol, nRow, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N TI\x1EBEP \x110\xD3N"), FMT_TEXT | FMT_CENTER, true, 14);
	nRow++;
	xls.SetCellMergedColumns(nCol, nRow, 16);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	nRow += 2;
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 1, nRow, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 2, nRow, _T("S\x1ED1 phi\x1EBFu kh\xE1m"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 3, nRow, _T("Ng\xE0y kh\xE1m"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 4, nRow, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 5, nRow, _T("Năm sinh"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 6, nRow, _T("Gi\x1EDBi"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 7, nRow, _T("Ngh\x1EC1 nghi\x1EC7p"), FMT_TEXT |FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 8, nRow, _T("S\x1ED1 th\x1EBB \x42HYT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 9, nRow, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER, true, 10);	
	xls.SetCellText(nCol + 10, nRow, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 11, nRow, _T("Số điện thoại"), FMT_TEXT | FMT_CENTER, true, 10);	
	xls.SetCellText(nCol + 12, nRow, _T("Số CMND"), FMT_TEXT | FMT_CENTER, true, 10);	
	xls.SetCellText(nCol + 13, nRow, _T("Ngày cấp CMND"), FMT_TEXT | FMT_CENTER, true, 10);	
	xls.SetCellText(nCol + 14, nRow, _T("Nơi cấp"), FMT_TEXT | FMT_CENTER, true, 10);	
	xls.SetCellText(nCol + 15, nRow, _T("Nơi làm việc"), FMT_TEXT | FMT_CENTER, true, 10);	
	xls.SetCellText(nCol + 16, nRow, _T("Địa chỉ liên hệ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol + 17, nRow, _T("Cấp bậc"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 18, nRow, _T("Ngày tiêm lần 1"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 19, nRow, _T("Số lô 1"), FMT_TEXT | FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 20, nRow, _T("Thuốc tiêm lần 1"), FMT_TEXT | FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 21, nRow, _T("Ngày tiêm lần 2"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 22, nRow, _T("Số lô 2"), FMT_TEXT | FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 23, nRow, _T("Thuốc tiêm lần 2"), FMT_TEXT | FMT_CENTER, true, 10);


	xls.SetCellText(nCol + 24, nRow, _T("Ngày tiêm lần 3"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 25, nRow, _T("Số lô 3"), FMT_TEXT | FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 26, nRow, _T("Thuốc tiêm lần 3"), FMT_TEXT | FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 27, nRow, _T("Ngày tiêm lần 4"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 28, nRow, _T("Số lô 4"), FMT_TEXT | FMT_CENTER, true, 10);	

	xls.SetCellText(nCol + 29, nRow, _T("Thuốc tiêm lần 4"), FMT_TEXT | FMT_CENTER, true, 10);
	
	//SQL command
	BeginWaitCursor();
	
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	
	//_msg(_T("%s"), szSQL);

	//Detail section
	int nIndex = 1;
	//BeginWaitCursor();
	nRow++;
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("SoHs"),tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER);
 
		rs.GetValue(_T("SoPk"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NgayKham"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
		//xls.SetCellText(nCol + 3, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_DATE | FMT_CENTER);
		
		rs.GetValue(_T("HovaTen"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("Tuoi"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Gioi"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("NgheNghiep"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT );

		rs.GetValue(_T("SoTheBHYT"), tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("DiaChi"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("DoiTuong"), tmpStr);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("telephone"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("socmnd"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT);

		//rs.GetValue(_T("ngaycapcmnd"), tmpStr);
		//xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaycapcmnd"), tmpStr);

		if (tmpStr == _T("14/09/1752"))
		//_msg(_T("%s"), tmpStr);
		{
		xls.SetCellText(nCol + 13, nRow,_T(" ") , FMT_TEXT);
		}
		else		
		xls.SetCellText(nCol + 13, nRow,tmpStr , FMT_TEXT);


		rs.GetValue(_T("noicap"), tmpStr);
		xls.SetCellText(nCol + 14, nRow, tmpStr, FMT_TEXT);



		rs.GetValue(_T("noilamviec"), tmpStr);
		xls.SetCellText(nCol + 15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diachilienhe"), tmpStr);
		xls.SetCellText(nCol + 16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("rank"), tmpStr);
		xls.SetCellText(nCol + 17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thoigiantiemlan1"), tmpStr);
		xls.SetCellText(nCol + 18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("lot1"), tmpStr);
		xls.SetCellText(nCol + 19, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("vaccine1"), tmpStr);
		xls.SetCellText(nCol + 20, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thoigiantiemlan2"), tmpStr);
		xls.SetCellText(nCol + 21, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("lot2"), tmpStr);
		xls.SetCellText(nCol + 22, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("vaccine2"), tmpStr);
		xls.SetCellText(nCol + 23, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thoigiantiemlan3"), tmpStr);
		xls.SetCellText(nCol + 24, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("lot3"), tmpStr);
		xls.SetCellText(nCol + 25, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("vaccine3"), tmpStr);
		xls.SetCellText(nCol + 26, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thoigiantiemlan4"), tmpStr);
		xls.SetCellText(nCol + 27, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("lot4"), tmpStr);
		xls.SetCellText(nCol + 28, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("vaccine4"), tmpStr);
		xls.SetCellText(nCol + 29, nRow, tmpStr, FMT_TEXT);


		nRow++;
		rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANH SACH BENH NHAN TIEP DON.xls"));
} 

void CRMRegistrationPatientListReport::OnExportSelect2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("RM.100.03")))
	{
		ShowMessageBox(_T("Liên hệ admin để được cấp quyền RM.100.03 sử dụng chức năng này!"));
		return;	
	}

	CReport rpt;	
	CRecord rs(&pMF->m_db);	
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept, label1, label2, szRooms;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}	
	

	CExcel xls;
	if(!xls.Load(_T("Exports\\Template\\THONGKEMUITIEMTHEODONVI_MAU1.xls"))) AfxMessageBox(_T("Chưa có File THONGKEMUITIEMTHEODONVI_MAU1.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 11;
	nCol = 0;
	while(!rs.IsEOF())
	{
				
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("donvi"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("SPUTNICK_mui1"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("SPUTNICK_mui2"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("SPUTNICK_mui3"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("SPUTNICK_mui4"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("PFIZER_mui1"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("PFIZER_mui2"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("PFIZER_mui3"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("PFIZER_mui4"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("MODERNA_mui1"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("MODERNA_mui2"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("MODERNA_mui3"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("MODERNA_mui4"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("ASTRA_mui1"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("ASTRA_mui2"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("ASTRA_mui3"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("ASTRA_mui4"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);
		

		nRow++;
		rs.MoveNext();
	}
	if (1 > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\THONGKEMUITIEMTHEODONVI_MAU12.xls"));
} 

CString CRMRegistrationPatientListReport::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szRoomName, szRoomID;
	szWhere.Empty();

	for (int i=0 ; i<= m_wndExamRoom.GetCount(); i++)
	 {
		 if(m_wndExamRoom.GetCheck(i))
		 {
			 m_wndExamRoom.SetCurSel(i);
			 if(!szRoomID.IsEmpty())
					szRoomID += _T(",");						
					szRoomID.AppendFormat(_T("'%s'"), m_wndExamRoom.GetCheck(i,0));			
					if(!szRoomName.IsEmpty())
					szRoomName += _T(", ");						
			szRoomName.AppendFormat(_T("%s"), m_wndExamRoom.GetCheck(i, 0));
		 }
	 }
	
	 if (!m_szExamRoomKey.IsEmpty())
	 	 szWhere.AppendFormat(_T(" AND he_roomid in (%s)"), szRoomID);
	
	/*szSQL.Format(_T(" SELECT") \
				_T(" donvi, ") \
				_T(" SUM(SPUTNICK_mui1) as SPUTNICK_mui1,") \
				_T(" SUM(SPUTNICK_mui2) as SPUTNICK_mui2,") \
				_T(" SUM (SPUTNICK_mui1+SPUTNICK_mui2) as SPUTNICK_total,") \
				_T(" SUM(PFIZER_mui1) as PFIZER_mui1,") \
				_T(" SUM(PFIZER_mui2) as PFIZER_mui2,") \
				_T(" SUM (PFIZER_mui1+PFIZER_mui2) as PFIZER_total,") \
				_T(" SUM(MODERNA_mui1) as MODERNA_mui1,") \
				_T(" SUM(MODERNA_mui2) as MODERNA_mui2,") \
				_T(" SUM (MODERNA_mui1+MODERNA_mui2) as MODERNA_total,") \
				_T(" SUM(ASTRA_mui1) as ASTRA_mui1,") \
				_T(" SUM(ASTRA_mui2) as ASTRA_mui2,") \
				_T(" SUM (ASTRA_mui1+ASTRA_mui2) as ASTRA_total") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT ") \
				_T(" case when hp_type='V' and HP_WORKPLACEID is not null then (select VC_ADDRESS_NAME from M_VACCINE_ADDRESS where VC_ADDRESS_CODE=HP_WORKPLACEID) else hp_workplace end as donvi,") \
				_T(" hd_docno,") \
				_T(" CASE WHEN vc_type='SPUTNICK' AND VC_CODE = VC_VACCINE1 AND VC_THEFIRST=1 AND trunc(he_examdate)=trunc(VC_FIRSTDATE) THEN 1 ELSE 0 END AS SPUTNICK_mui1,") \
				_T(" CASE WHEN vc_type='SPUTNICK' AND VC_CODE = VC_VACCINE2 AND VC_THESECOND=1 AND trunc(he_examdate)=trunc(VC_SECONDDATE) THEN 1 ELSE 0 END AS SPUTNICK_mui2,") \
				_T(" CASE WHEN vc_type='PFIZER' AND VC_CODE = VC_VACCINE1 AND VC_THEFIRST=1 AND trunc(he_examdate)=trunc(VC_FIRSTDATE) THEN 1 ELSE 0 END AS PFIZER_mui1,") \
				_T(" CASE WHEN vc_type='PFIZER' AND VC_CODE = VC_VACCINE2 AND VC_THESECOND=1 AND trunc(he_examdate)=trunc(VC_SECONDDATE) THEN 1 ELSE 0 END AS PFIZER_mui2,") \
				_T(" CASE WHEN vc_type='MODERNA' AND VC_CODE = VC_VACCINE1 AND VC_THEFIRST=1 AND trunc(he_examdate)=trunc(VC_FIRSTDATE) THEN 1 ELSE 0 END AS MODERNA_mui1,") \
				_T(" CASE WHEN vc_type='MODERNA' AND VC_CODE = VC_VACCINE2 AND VC_THESECOND=1 AND trunc(he_examdate)=trunc(VC_SECONDDATE) THEN 1 ELSE 0 END AS MODERNA_mui2,") \
				_T(" CASE WHEN vc_type='ASTRA' AND VC_CODE = VC_VACCINE1 AND VC_THEFIRST=1 AND trunc(he_examdate)=trunc(VC_FIRSTDATE) THEN 1 ELSE 0 END AS ASTRA_mui1,") \
				_T(" CASE WHEN vc_type='ASTRA' AND VC_CODE = VC_VACCINE2 AND VC_THESECOND=1 AND trunc(he_examdate)=trunc(VC_SECONDDATE) THEN 1 ELSE 0 END AS ASTRA_mui2") \
				_T(" from RM_VACCINE_INFOR ") \
				_T(" left join M_VACCINE_LIST ON (VC_CODE = VC_VACCINE1 OR VC_CODE = VC_VACCINE2)") \
				_T(" left join hms_patient ON (VC_PATIENTNO=hp_patientno)") \
				_T(" LEFT JOIN hms_doc ON (hd_patientno = hp_patientno)") \

				_T(" LEFT JOIN hms_exam ON (he_docno = hd_docno)") \

				_T(" left join M_VACCINE_ADDRESS ON (VC_ADDRESS_CODE=HP_WORKPLACEID)") \
				_T(" where he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				
				_T(" AND he_deptid= '%s' %s") \

				_T(" ORDER BY HD_ADMITDATE") \
				_T(" )") \
				_T(" WHERE 1=1") \
				_T(" GROUP BY donvi") \
				_T(" ORDER BY donvi"), m_szFromDate, m_szToDate, pMF->m_szDept, szWhere);*/


				szSQL.Format(_T(" SELECT donvi,") \
				_T("   SUM(SPUTNICK_mui1)                AS SPUTNICK_mui1,") \
				_T("   SUM(SPUTNICK_mui2)                AS SPUTNICK_mui2,") \
				_T("   SUM(SPUTNICK_mui3)                AS SPUTNICK_mui3,") \
				_T("   SUM(SPUTNICK_mui4)                AS SPUTNICK_mui4,") \
				_T("   SUM (SPUTNICK_mui1+SPUTNICK_mui2+SPUTNICK_mui3+SPUTNICK_mui4) AS SPUTNICK_total,") \
				_T("   SUM(PFIZER_mui1)                  AS PFIZER_mui1,") \
				_T("   SUM(PFIZER_mui2)                  AS PFIZER_mui2,") \
				_T("   SUM(PFIZER_mui3)                  AS PFIZER_mui3,") \
				_T("   SUM(PFIZER_mui4)                  AS PFIZER_mui4,") \
				_T("   SUM (PFIZER_mui1+PFIZER_mui2+PFIZER_mui3+PFIZER_mui4)     AS PFIZER_total,") \
				_T("   SUM(MODERNA_mui1)                 AS MODERNA_mui1,") \
				_T("   SUM(MODERNA_mui2)                 AS MODERNA_mui2,") \
				_T("   SUM(MODERNA_mui3)                 AS MODERNA_mui3,") \
				_T("   SUM(MODERNA_mui4)                 AS MODERNA_mui4,") \
				_T("   SUM (MODERNA_mui1+MODERNA_mui2+MODERNA_mui3+MODERNA_mui4)   AS MODERNA_total,") \
				_T("   SUM(ASTRA_mui1)                   AS ASTRA_mui1,") \
				_T("   SUM(ASTRA_mui2)                   AS ASTRA_mui2,") \
				_T("   SUM(ASTRA_mui3)                   AS ASTRA_mui3,") \
				_T("   SUM(ASTRA_mui4)                   AS ASTRA_mui4,") \
				_T("   SUM (ASTRA_mui1+ASTRA_mui2+ASTRA_mui3+ASTRA_mui4)       AS ASTRA_total") \
				_T(" FROM") \
				_T("   (SELECT") \
				_T("     CASE") \
				_T("       WHEN hp_type        ='V'") \
				_T("       AND HP_WORKPLACEID IS NOT NULL") \
				_T("       THEN") \
				_T("         (SELECT VC_ADDRESS_NAME") \
				_T("         FROM M_VACCINE_ADDRESS") \
				_T("         WHERE VC_ADDRESS_CODE=HP_WORKPLACEID") \
				_T("         )") \
				_T("       ELSE hp_workplace") \
				_T("     END AS donvi,") \
				_T("     hd_docno,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='SPUTNICK'") \
				_T("       AND VC_CODE           = VC_VACCINE1") \
				_T("       AND VC_THEFIRST       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_FIRSTDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS SPUTNICK_mui1,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='SPUTNICK'") \
				_T("       AND VC_CODE           = VC_VACCINE2") \
				_T("       AND VC_THESECOND      =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_SECONDDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS SPUTNICK_mui2,    ") \
				_T("      CASE") \
				_T("       WHEN vc_type          ='SPUTNICK'") \
				_T("       AND VC_CODE           = VC_VACCINE3") \
				_T("       AND VC_THE3       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_DATE3)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS SPUTNICK_mui3,") \
				_T("      CASE") \
				_T("       WHEN vc_type          ='SPUTNICK'") \
				_T("       AND VC_CODE           = VC_VACCINE4") \
				_T("       AND VC_THE4       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_DATE4)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS SPUTNICK_mui4,    ") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='PFIZER'") \
				_T("       AND VC_CODE           = VC_VACCINE1") \
				_T("       AND VC_THEFIRST       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_FIRSTDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS PFIZER_mui1,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='PFIZER'") \
				_T("       AND VC_CODE           = VC_VACCINE2") \
				_T("       AND VC_THESECOND      =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_SECONDDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS PFIZER_mui2,    ") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='PFIZER'") \
				_T("       AND VC_CODE           = VC_VACCINE3") \
				_T("       AND VC_THE3       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_DATE3)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS PFIZER_mui3,") \
				_T("      CASE") \
				_T("       WHEN vc_type          ='PFIZER'") \
				_T("       AND VC_CODE           = VC_VACCINE4") \
				_T("       AND VC_THE4       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_DATE4)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS PFIZER_mui4,    ") \
				_T("   CASE") \
				_T("       WHEN vc_type          ='MODERNA'") \
				_T("       AND VC_CODE           = VC_VACCINE1") \
				_T("       AND VC_THEFIRST       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_FIRSTDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS MODERNA_mui1,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='MODERNA'") \
				_T("       AND VC_CODE           = VC_VACCINE2") \
				_T("       AND VC_THESECOND      =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_SECONDDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS MODERNA_mui2,    ") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='MODERNA'") \
				_T("       AND VC_CODE           = VC_VACCINE3") \
				_T("       AND VC_THE3       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_DATE3)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS MODERNA_mui3,") \
				_T("      CASE") \
				_T("       WHEN vc_type          ='MODERNA'") \
				_T("       AND VC_CODE           = VC_VACCINE4") \
				_T("       AND VC_THE4       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_DATE4)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS MODERNA_mui4,    ") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='ASTRA'") \
				_T("       AND VC_CODE           = VC_VACCINE1") \
				_T("       AND VC_THEFIRST       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_FIRSTDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS ASTRA_mui1,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='ASTRA'") \
				_T("       AND VC_CODE           = VC_VACCINE2") \
				_T("       AND VC_THESECOND      =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_SECONDDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS ASTRA_mui2,    ") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='ASTRA'") \
				_T("       AND VC_CODE           = VC_VACCINE3") \
				_T("       AND VC_THE3       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_DATE3)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS ASTRA_mui3,") \
				_T("      CASE") \
				_T("       WHEN vc_type          ='ASTRA'") \
				_T("       AND VC_CODE           = VC_VACCINE4") \
				_T("       AND VC_THE4       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_DATE4)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS ASTRA_mui4    ") \
				_T("   FROM RM_VACCINE_INFOR") \
				_T("   LEFT JOIN M_VACCINE_LIST") \
				_T("   ON (VC_CODE = VC_VACCINE1 ") \
				_T("   OR VC_CODE  = VC_VACCINE2 ") \
				_T("   OR VC_CODE  = VC_VACCINE3 ") \
				_T("   OR VC_CODE  = VC_VACCINE4)") \
				_T("   LEFT JOIN hms_patient") \
				_T("   ON (VC_PATIENTNO=hp_patientno)") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON (hd_patientno = hp_patientno)") \
				_T("   LEFT JOIN hms_exam") \
				_T("   ON (he_docno = hd_docno)") \
				_T(" left join M_VACCINE_ADDRESS ON (VC_ADDRESS_CODE=HP_WORKPLACEID)") \
				_T(" where he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND he_deptid= '%s' %s") \
				_T(" ORDER BY HD_ADMITDATE") \
				_T(" )") \
				_T(" WHERE 1=1") \
				_T(" GROUP BY donvi") \
				_T(" ORDER BY donvi"), m_szFromDate, m_szToDate, pMF->m_szDept, szWhere);
	
	return szSQL;
}

void CRMRegistrationPatientListReport::OnExportSelect3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("RM.100.03")))
	{
		ShowMessageBox(_T("Liên hệ admin để được cấp quyền RM.100.03 sử dụng chức năng này!"));
		return;	
	}

	CReport rpt;	
	CRecord rs(&pMF->m_db);	
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept, label1, label2, szRooms;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}	
	

	CExcel xls;
	if(!xls.Load(_T("Exports\\Template\\THONGKEVATTUSUDUNG_DIKEMMUITIEM.xls"))) AfxMessageBox(_T("Chưa có File THONGKEVATTUSUDUNG_DIKEMMUITIEM.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
				
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("tenvattu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT | FMT_LEFT);


		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_LEFT);


		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1 | FMT_LEFT);


		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	
		

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[4]>0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\THONGKEVATTUSUDUNG_DIKEMMUITIEM1.xls"));
}

CString CRMRegistrationPatientListReport::GetQueryString2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szRoomName, szRoomID;
	szWhere.Empty();

	for (int i=0 ; i<= m_wndExamRoom.GetCount(); i++)
	 {
		 if(m_wndExamRoom.GetCheck(i))
		 {
			 m_wndExamRoom.SetCurSel(i);
			 if(!szRoomID.IsEmpty())
					szRoomID += _T(",");						
					szRoomID.AppendFormat(_T("'%s'"), m_wndExamRoom.GetCheck(i,0));			
					if(!szRoomName.IsEmpty())
					szRoomName += _T(", ");						
			szRoomName.AppendFormat(_T("%s"), m_wndExamRoom.GetCheck(i, 0));
		 }
	 }
	
	 if (!m_szExamRoomKey.IsEmpty())
	 	 szWhere.AppendFormat(_T(" AND he_roomid in (%s)"), szRoomID);
				
				szSQL.Format(_T(" SELECT ") \
				_T(" ma_name as tenvattu,") \
				_T(" ma_qty * (SPUTNICK_total+PFIZER_total+MODERNA_total+ASTRA_total) as soluong,") \
				_T(" ma_price as dongia,") \
				_T(" ma_price * ma_qty * (SPUTNICK_total+PFIZER_total+MODERNA_total+ASTRA_total) as thanhtien") \
				_T(" from M_MATERIAL_LIST") \
				_T(" LEFT JOIN") \
				_T(" (") \
				_T(" SELECT") \
				_T("   vc_type,") \
				_T("   SUM (SPUTNICK_mui1+SPUTNICK_mui2) AS SPUTNICK_total, ") \
				_T("   SUM (PFIZER_mui1+PFIZER_mui2)     AS PFIZER_total,  ") \
				_T("   SUM (MODERNA_mui1+MODERNA_mui2)   AS MODERNA_total,  ") \
				_T("   SUM (ASTRA_mui1+ASTRA_mui2)       AS ASTRA_total") \
				_T(" FROM") \
				_T("   (SELECT vc_type,") \
				_T("     CASE") \
				_T("       WHEN hp_type        ='V'") \
				_T("       AND HP_WORKPLACEID IS NOT NULL") \
				_T("       THEN") \
				_T("         (SELECT VC_ADDRESS_NAME") \
				_T("         FROM M_VACCINE_ADDRESS") \
				_T("         WHERE VC_ADDRESS_CODE=HP_WORKPLACEID") \
				_T("         )") \
				_T("       ELSE hp_workplace") \
				_T("     END AS donvi,") \
				_T("     hd_docno,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='SPUTNICK'") \
				_T("       AND VC_CODE           = VC_VACCINE1") \
				_T("       AND VC_THEFIRST       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_FIRSTDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS SPUTNICK_mui1,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='SPUTNICK'") \
				_T("       AND VC_CODE           = VC_VACCINE2") \
				_T("       AND VC_THESECOND      =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_SECONDDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS SPUTNICK_mui2,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='PFIZER'") \
				_T("       AND VC_CODE           = VC_VACCINE1") \
				_T("       AND VC_THEFIRST       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_FIRSTDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS PFIZER_mui1,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='PFIZER'") \
				_T("       AND VC_CODE           = VC_VACCINE2") \
				_T("       AND VC_THESECOND      =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_SECONDDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS PFIZER_mui2,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='MODERNA'") \
				_T("       AND VC_CODE           = VC_VACCINE1") \
				_T("       AND VC_THEFIRST       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_FIRSTDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS MODERNA_mui1,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='MODERNA'") \
				_T("       AND VC_CODE           = VC_VACCINE2") \
				_T("       AND VC_THESECOND      =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_SECONDDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS MODERNA_mui2,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='ASTRA'") \
				_T("       AND VC_CODE           = VC_VACCINE1") \
				_T("       AND VC_THEFIRST       =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_FIRSTDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS ASTRA_mui1,") \
				_T("     CASE") \
				_T("       WHEN vc_type          ='ASTRA'") \
				_T("       AND VC_CODE           = VC_VACCINE2") \
				_T("       AND VC_THESECOND      =1") \
				_T("       AND TRUNC(he_examdate)=TRUNC(VC_SECONDDATE)") \
				_T("       THEN 1") \
				_T("       ELSE 0") \
				_T("     END AS ASTRA_mui2") \
				_T("   FROM RM_VACCINE_INFOR") \
				_T("   LEFT JOIN M_VACCINE_LIST") \
				_T("   ON (VC_CODE = VC_VACCINE1") \
				_T("   OR VC_CODE  = VC_VACCINE2)") \
				_T("   LEFT JOIN hms_patient") \
				_T("   ON (VC_PATIENTNO=hp_patientno)") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON (hd_patientno = hp_patientno)") \
				_T("   LEFT JOIN hms_exam") \
				_T("   ON (he_docno = hd_docno)") \
				_T("   LEFT JOIN M_VACCINE_ADDRESS") \
				_T("   ON (VC_ADDRESS_CODE=HP_WORKPLACEID)") \
				_T("   WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("   AND he_deptid= '%s' %s") \
				_T("   ORDER BY HD_ADMITDATE") \
				_T("   )") \
				_T(" WHERE 1=1") \
				_T(" GROUP BY vc_type") \
				_T(" ORDER BY vc_type") \
				_T(" )tmp") \
				_T(" ON (MA_TYPE = tmp.vc_type)") \
				_T(" WHERE (ma_qty * (SPUTNICK_total+PFIZER_total+MODERNA_total+ASTRA_total))>0"), m_szFromDate, m_szToDate, pMF->m_szDept, szWhere);

	
	return szSQL;
}