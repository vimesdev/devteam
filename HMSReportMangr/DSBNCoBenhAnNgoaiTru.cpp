#include "stdafx.h"
#include "DSBNCoBenhAnNgoaiTru.h"
#include "MainFrm.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CDSBNCoBenhAnNgoaiTru* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CDSBNCoBenhAnNgoaiTru* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExamRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CDSBNCoBenhAnNgoaiTru* )pWnd)->OnExamRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamRoomSelendokFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnExamRoomSelendok();
}
/*static void _OnExamRoomSetfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnExamRoomKillfocus();
}*/
/*static void _OnExamRoomKillfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnExamRoomKillfocus();
}*/
static long _OnExamRoomLoadDataFnc(CWnd *pWnd){
	return ((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnExamRoomLoadData();
}
/*static void _OnExamRoomAddNewFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnExamRoomAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CDSBNCoBenhAnNgoaiTru* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnObjectAddNew();
}*/
static void _OnICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CDSBNCoBenhAnNgoaiTru* )pWnd)->OnICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDSelendokFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnICDSelendok();
}
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnICDKillfocus();
}*/
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnICDKillfocus();
}*/
static long _OnICDLoadDataFnc(CWnd *pWnd){
	return ((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnICDLoadData();
}
/*static void _OnICDAddNewFnc(CWnd *pWnd){
	((CDSBNCoBenhAnNgoaiTru *)pWnd)->OnICDAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CDSBNCoBenhAnNgoaiTru *pVw = (CDSBNCoBenhAnNgoaiTru *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddDSBNCoBenhAnNgoaiTruFnc(CWnd *pWnd){
	 return ((CDSBNCoBenhAnNgoaiTru*)pWnd)->OnAddDSBNCoBenhAnNgoaiTru();
} 
static int _OnEditDSBNCoBenhAnNgoaiTruFnc(CWnd *pWnd){
	 return ((CDSBNCoBenhAnNgoaiTru*)pWnd)->OnEditDSBNCoBenhAnNgoaiTru();
} 
static int _OnDeleteDSBNCoBenhAnNgoaiTruFnc(CWnd *pWnd){
	 return ((CDSBNCoBenhAnNgoaiTru*)pWnd)->OnDeleteDSBNCoBenhAnNgoaiTru();
} 
static int _OnSaveDSBNCoBenhAnNgoaiTruFnc(CWnd *pWnd){
	 return ((CDSBNCoBenhAnNgoaiTru*)pWnd)->OnSaveDSBNCoBenhAnNgoaiTru();
} 
static int _OnCancelDSBNCoBenhAnNgoaiTruFnc(CWnd *pWnd){
	 return ((CDSBNCoBenhAnNgoaiTru*)pWnd)->OnCancelDSBNCoBenhAnNgoaiTru();
} 
CDSBNCoBenhAnNgoaiTru::CDSBNCoBenhAnNgoaiTru(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CDSBNCoBenhAnNgoaiTru::~CDSBNCoBenhAnNgoaiTru(){
}
void CDSBNCoBenhAnNgoaiTru::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 215);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 90, 115);
	m_wndDepartment.Create(this,95, 90, 485, 115); 
	m_wndExamRoomLabel.Create(this, _T("Exam Room"), 10, 120, 90, 145);
	m_wndExamRoom.Create(this,95, 120, 485, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 150, 90, 175);
	m_wndObject.Create(this,95, 150, 485, 175); 
	m_wndICDLabel.Create(this, _T("ICD"), 10, 180, 90, 205);
	m_wndICD.Create(this,95, 180, 485, 205); 
	m_wndExport.Create(this, _T("&Export"), 405, 220, 485, 245);

}
void CDSBNCoBenhAnNgoaiTru::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndYear.SetLimitText(1024);
// 	m_wndYear.SetCheckValue(true);
// 	m_wndReportPeriod.SetCheckValue(true);
// 	m_wndReportPeriod.LimitText(1024);
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);
// 	m_wndDepartment.SetCheckValue(true);
// 	m_wndDepartment.LimitText(1024);
// 	m_wndExamRoom.SetCheckValue(true);
// 	m_wndExamRoom.LimitText(1024);
// 	m_wndObject.SetCheckValue(true);
// 	m_wndObject.LimitText(35);
// 	m_wndICD.SetCheckValue(true);
// 	m_wndICD.LimitText(35);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndExamRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExamRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndICD.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICD.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CDSBNCoBenhAnNgoaiTru::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
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
	m_wndICD.SetEvent(WE_SELENDOK, _OnICDSelendokFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_SELCHANGE, _OnICDSelectChangeFnc);
	m_wndICD.SetEvent(WE_LOADDATA, _OnICDLoadDataFnc);
	//m_wndICD.SetEvent(WE_ADDNEW, _OnICDAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddDSBNCoBenhAnNgoaiTruFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditDSBNCoBenhAnNgoaiTruFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteDSBNCoBenhAnNgoaiTruFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveDSBNCoBenhAnNgoaiTruFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelDSBNCoBenhAnNgoaiTruFnc, 0, 'T', VK_CONTROL);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CDSBNCoBenhAnNgoaiTru::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndExamRoom.GetDlgCtrlID(), m_szExamRoomKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndICD.GetDlgCtrlID(), m_szICDKey);

}
void CDSBNCoBenhAnNgoaiTru::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("ExamRoom")] =  m_szExamRoomKey;
	m_jData[_T("Object")] =  m_szObjectKey;
	m_jData[_T("ICD")] =  m_szICDKey;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("ExamRoom")].GetValue(m_szExamRoomKey);
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	m_jData[_T("ICD")].GetValue(m_szICDKey);
	}

}
void CDSBNCoBenhAnNgoaiTru::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDSBNCoBenhAnNgoaiTru::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CDSBNCoBenhAnNgoaiTru::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szExamRoomKey.Empty();
	m_szObjectKey.Empty();
	m_szICDKey.Empty();

}
int CDSBNCoBenhAnNgoaiTru::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
/*void CDSBNCoBenhAnNgoaiTru::OnYearChange(){
	
} */
/*void CDSBNCoBenhAnNgoaiTru::OnYearSetfocus(){
	
} */
/*void CDSBNCoBenhAnNgoaiTru::OnYearKillfocus(){
	
} */
int CDSBNCoBenhAnNgoaiTru::OnYearCheckValue(){
	return 0;
} 
void CDSBNCoBenhAnNgoaiTru::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CDSBNCoBenhAnNgoaiTru::OnReportPeriodSelendok(){
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
/*void CDSBNCoBenhAnNgoaiTru::OnReportPeriodSetfocus(){
	
}*/
/*void CDSBNCoBenhAnNgoaiTru::OnReportPeriodKillfocus(){
	
}*/
long CDSBNCoBenhAnNgoaiTru::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
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
/*void CDSBNCoBenhAnNgoaiTru::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CDSBNCoBenhAnNgoaiTru::OnFromDateChange(){
	
} */
/*void CDSBNCoBenhAnNgoaiTru::OnFromDateSetfocus(){
	
} */
/*void CDSBNCoBenhAnNgoaiTru::OnFromDateKillfocus(){
	
} */
int CDSBNCoBenhAnNgoaiTru::OnFromDateCheckValue(){
	return 0;
} 
/*void CDSBNCoBenhAnNgoaiTru::OnToDateChange(){
	
} */
/*void CDSBNCoBenhAnNgoaiTru::OnToDateSetfocus(){
	
} */
/*void CDSBNCoBenhAnNgoaiTru::OnToDateKillfocus(){
	
} */
int CDSBNCoBenhAnNgoaiTru::OnToDateCheckValue(){
	return 0;
} 
void CDSBNCoBenhAnNgoaiTru::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CDSBNCoBenhAnNgoaiTru::OnDepartmentSelendok(){
	 
}
/*void CDSBNCoBenhAnNgoaiTru::OnDepartmentSetfocus(){
	
}*/
/*void CDSBNCoBenhAnNgoaiTru::OnDepartmentKillfocus(){
	
}*/
long CDSBNCoBenhAnNgoaiTru::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("Select  sd_id id,sd_name name From sys_dept Where sd_type='KB'"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CDSBNCoBenhAnNgoaiTru::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CDSBNCoBenhAnNgoaiTru::OnExamRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CDSBNCoBenhAnNgoaiTru::OnExamRoomSelendok(){
	 
}
/*void CDSBNCoBenhAnNgoaiTru::OnExamRoomSetfocus(){
	
}*/
/*void CDSBNCoBenhAnNgoaiTru::OnExamRoomKillfocus(){
	
}*/
long CDSBNCoBenhAnNgoaiTru::OnExamRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamRoom.IsSearchKey() && !m_szExamRoomKey.IsEmpty()){
		szWhere.Format(_T("and hrl_id = %d"), ToInt(m_szExamRoomKey));
	};
	m_wndExamRoom.DeleteAllItems(); 
	szSQL.Format(_T("select hrl_name as name, hrl_id as id from hms_roomlist where hrl_deptid = '%s' %s Order by id"), m_szDepartmentKey, szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CDSBNCoBenhAnNgoaiTru::OnExamRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CDSBNCoBenhAnNgoaiTru::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CDSBNCoBenhAnNgoaiTru::OnObjectSelendok(){
	 
}
/*void CDSBNCoBenhAnNgoaiTru::OnObjectSetfocus(){
	
}*/
/*void CDSBNCoBenhAnNgoaiTru::OnObjectKillfocus(){
	
}*/
long CDSBNCoBenhAnNgoaiTru::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY ho_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CDSBNCoBenhAnNgoaiTru::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CDSBNCoBenhAnNgoaiTru::OnICDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CDSBNCoBenhAnNgoaiTru::OnICDSelendok(){
	 
}
/*void CDSBNCoBenhAnNgoaiTru::OnICDSetfocus(){
	
}*/
/*void CDSBNCoBenhAnNgoaiTru::OnICDKillfocus(){
	
}*/
long CDSBNCoBenhAnNgoaiTru::OnICDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD.IsSearchKey() && !m_szICDKey.IsEmpty()){
	 szWhere.Format(_T(" and hi_icd='%s' "), m_szICDKey);
};
	m_wndICD.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd WHERE 1=1 %s ORDER BY hi_icd "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CDSBNCoBenhAnNgoaiTru::OnICDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CDSBNCoBenhAnNgoaiTru::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept, szNameGroupNew, szOldGroup, szNewGroup;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nGroupTotal = 0, nTotal = 0, nGroupTotal2 = 0, nTotal2 = 0, nGroupTotal3 = 0, nTotal3 = 0, nGroupTotal4 = 0, nTotal4 = 0;
	double nTypeTotal = 0, nTypeTotal2 = 0, nTypeTotal3 = 0, nTypeTotal4 = 0;
	CExcel xls;
	if (!xls.Load(_T("Exports\\DSBNCoBenhAnNgoaiTru.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("icd"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("conclusion"), tmpStr);			xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("roomname"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("examdate"), tmpStr);		xls.SetCellText(nCol+6, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);		rs.GetValue(_T("pobject"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cardno"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DSBNCoBenhAnNgoaiTru2.xls"));

} 
int CDSBNCoBenhAnNgoaiTru::OnAddDSBNCoBenhAnNgoaiTru(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CDSBNCoBenhAnNgoaiTru::OnEditDSBNCoBenhAnNgoaiTru(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CDSBNCoBenhAnNgoaiTru::OnDeleteDSBNCoBenhAnNgoaiTru(){
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
 		OnCancelDSBNCoBenhAnNgoaiTru();
 	}
	return 0;
}
int CDSBNCoBenhAnNgoaiTru::OnSaveDSBNCoBenhAnNgoaiTru(){
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
 		//OnDSBNCoBenhAnNgoaiTruListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CDSBNCoBenhAnNgoaiTru::OnCancelDSBNCoBenhAnNgoaiTru(){
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
int CDSBNCoBenhAnNgoaiTru::OnDSBNCoBenhAnNgoaiTruListLoadData(){
	return 0;
}
CString CDSBNCoBenhAnNgoaiTru::GetQueryString(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere;

	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), m_szDepartmentKey);
	if(!m_szExamRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_roomid = '%s'"), m_szExamRoomKey);
	if(!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if(!m_szICDKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_icd = '%s'"), m_szICDKey);

	szSQL.Format(_T(" SELECT") \
		_T(" hp_recordno AS recordno,") \
		_T(" hp_patientno AS patientno,") \
		_T(" hd_docno AS docno,") \
		_T(" get_patientname(hd_docno) AS pname,") \
		_T(" hd_icd AS icd,") \
		_T(" hd_conclusion AS conclusion,") \
		_T(" he_deptid AS deptid,") \
		_T(" he_roomid AS roomid,") \
		_T(" hms_getroomname(he_deptid, he_roomid) AS roomname,") \
		_T(" he_examdate AS examdate,") \
		_T(" hms_getobjectname(hd_object) AS pobject,") \
		_T(" hd_cardno AS cardno") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(he_docno = hd_docno AND hd_admitdept = he_deptid AND hd_icd = he_icd10)") \
		_T(" WHERE hd_enddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hd_status = 'T'") \
		_T(" AND hp_recordno IS NOT NULL %s") \
		_T(" ORDER BY hd_enddate, hd_docno"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}