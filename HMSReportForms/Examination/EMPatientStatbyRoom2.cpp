#include "stdafx.h"
#include "EMPatientStatbyRoom2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMPatientStatbyRoom2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMPatientStatbyRoom2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMPatientStatbyRoom2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMPatientStatbyRoom2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMPatientStatbyRoom2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnExamRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMPatientStatbyRoom2* )pWnd)->OnExamRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamRoomSelendokFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnExamRoomSelendok();
}
/*static void _OnExamRoomSetfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnExamRoomKillfocus();
}*/
/*static void _OnExamRoomKillfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnExamRoomKillfocus();
}*/
static long _OnExamRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMPatientStatbyRoom2 *)pWnd)->OnExamRoomLoadData();
}
/*static void _OnExamRoomAddNewFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnExamRoomAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMPatientStatbyRoom2* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CEMPatientStatbyRoom2 *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnDoctorAddNew();
}*/
static void _OnPTTYCSelendokFnc(CWnd *pWnd){
	((CEMPatientStatbyRoom2 *)pWnd)->OnPTTYCSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMPatientStatbyRoom2 *pVw = (CEMPatientStatbyRoom2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMPatientStatbyRoom2 *pVw = (CEMPatientStatbyRoom2 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CEMPatientStatbyRoom2*)pWnd)->OnAddEMPatientStatbyRoom2();
} 
static int _OnEditEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CEMPatientStatbyRoom2*)pWnd)->OnEditEMPatientStatbyRoom2();
} 
static int _OnDeleteEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CEMPatientStatbyRoom2*)pWnd)->OnDeleteEMPatientStatbyRoom2();
} 
static int _OnSaveEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CEMPatientStatbyRoom2*)pWnd)->OnSaveEMPatientStatbyRoom2();
} 
static int _OnCancelEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CEMPatientStatbyRoom2*)pWnd)->OnCancelEMPatientStatbyRoom2();
} 
CEMPatientStatbyRoom2::CEMPatientStatbyRoom2(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMPatientStatbyRoom2::~CEMPatientStatbyRoom2(){
}
void CEMPatientStatbyRoom2::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 155);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 210, 30, 290, 55);
	m_wndReportPeriod.Create(this,295, 30, 405, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 60, 290, 85);
	m_wndToDate.Create(this,295, 60, 405, 85); 
	m_wndExamRoomLabel.Create(this, _T("Exam Room"), 10, 90, 90, 115);
	m_wndExamRoom.Create(this,95, 90, 405, 115); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 120, 90, 145);
	m_wndDoctor.Create(this,95, 120, 405, 145); 
	m_wndPTTYC.Create(this, _T("Nhóm PK PTTYC"), 10, 160, 140, 185);
	//m_wndPrint.Create(this, _T("&Print"), 240, 160, 320, 185);
	m_wndExport.Create(this, _T("&Export"), 325, 160, 405, 185);

}
void CEMPatientStatbyRoom2::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndExamRoom.SetCheckValue(true);
	m_wndExamRoom.LimitText(1024);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndExamRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndExamRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CEMPatientStatbyRoom2::OnSetWindowEvents(){
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
	m_wndExamRoom.SetEvent(WE_SELENDOK, _OnExamRoomSelendokFnc);
	//m_wndExamRoom.SetEvent(WE_SETFOCUS, _OnExamRoomSetfocusFnc);
	//m_wndExamRoom.SetEvent(WE_KILLFOCUS, _OnExamRoomKillfocusFnc);
	m_wndExamRoom.SetEvent(WE_SELCHANGE, _OnExamRoomSelectChangeFnc);
	m_wndExamRoom.SetEvent(WE_LOADDATA, _OnExamRoomLoadDataFnc);
	//m_wndExamRoom.SetEvent(WE_ADDNEW, _OnExamRoomAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndPTTYC.SetEvent(WE_CLICK, _OnPTTYCSelendokFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);


}
void CEMPatientStatbyRoom2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndExamRoom.GetDlgCtrlID(), m_szExamRoomKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);

}
void CEMPatientStatbyRoom2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMPatientStatbyRoom2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMPatientStatbyRoom2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szExamRoomKey.Empty();
	m_szDoctorKey.Empty();
	m_bPTTYC = FALSE;

}
int CEMPatientStatbyRoom2::SetMode(int nMode){
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
/*void CEMPatientStatbyRoom2::OnYearChange(){
	
} */
/*void CEMPatientStatbyRoom2::OnYearSetfocus(){
	
} */
/*void CEMPatientStatbyRoom2::OnYearKillfocus(){
	
} */
int CEMPatientStatbyRoom2::OnYearCheckValue(){
	return 0;
} 
void CEMPatientStatbyRoom2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMPatientStatbyRoom2::OnReportPeriodSelendok(){
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
/*void CEMPatientStatbyRoom2::OnReportPeriodSetfocus(){
	
}*/
/*void CEMPatientStatbyRoom2::OnReportPeriodKillfocus(){
	
}*/
long CEMPatientStatbyRoom2::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
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
/*void CEMPatientStatbyRoom2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMPatientStatbyRoom2::OnFromDateChange(){
	
} */
/*void CEMPatientStatbyRoom2::OnFromDateSetfocus(){
	
} */
/*void CEMPatientStatbyRoom2::OnFromDateKillfocus(){
	
} */
int CEMPatientStatbyRoom2::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMPatientStatbyRoom2::OnToDateChange(){
	
} */
/*void CEMPatientStatbyRoom2::OnToDateSetfocus(){
	
} */
/*void CEMPatientStatbyRoom2::OnToDateKillfocus(){
	
} */
int CEMPatientStatbyRoom2::OnToDateCheckValue(){
	return 0;
} 
void CEMPatientStatbyRoom2::OnExamRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMPatientStatbyRoom2::OnExamRoomSelendok(){
	 
}
/*void CEMPatientStatbyRoom2::OnExamRoomSetfocus(){
	
}*/
/*void CEMPatientStatbyRoom2::OnExamRoomKillfocus(){
	
}*/
long CEMPatientStatbyRoom2::OnExamRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamRoom.IsSearchKey() && !m_szExamRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and hrl_id='%s' "), m_szExamRoomKey);
};
	m_wndExamRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id AS id, hrl_name AS name FROM hms_roomlist WHERE hrl_deptid = '%s' %s ORDER BY id "), pMF->GetCurrentDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CEMPatientStatbyRoom2::OnExamRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMPatientStatbyRoom2::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMPatientStatbyRoom2::OnDoctorSelendok(){
	 
}
/*void CEMPatientStatbyRoom2::OnDoctorSetfocus(){
	
}*/
/*void CEMPatientStatbyRoom2::OnDoctorKillfocus(){
	
}*/
long CEMPatientStatbyRoom2::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and su_userid='%s' "), m_szDoctorKey);
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid AS id, su_name AS name FROM sys_user WHERE su_deptid = '%s' %s ORDER BY id "), pMF->GetCurrentDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMPatientStatbyRoom2::OnDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CEMPatientStatbyRoom2::OnPTTYCSelect(){

}

void CEMPatientStatbyRoom2::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMPatientStatbyRoom2::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1, nTotal = 0, nTemp = 0;

	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 12);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 12);
	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_TEXT, true, 10);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(0, 2, _T("\x42\x1EA2NG S\x1ED0 L\x1AF\x1EE2NG \x42\x1EC6NH NH\xC2N KH\xC1M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("\x42u\x1ED3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 1);
	xls.SetMerge(1, 1, 0, 1);
	xls.SetMerge(2, 2, 0, 2);
	xls.SetMerge(3, 3, 0, 2);

	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);
		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("patient"), nTemp);
		nTotal += nTemp;
		xls.SetCellText(nCol+2, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
		nRow++;
		rs.MoveNext();
	}
	if(nTotal > 0)
		{
			xls.SetCellMergedColumns(nCol, nRow, 2);
			xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true);
			xls.SetCellText(nCol + 2, nRow, int2str(nTotal), FMT_NUMBER1| FMT_RIGHT, true);
		}
	EndWaitCursor();
	xls.Save(_T("Exports\\So luong benh nhan kham.xls"));
	
} 
int CEMPatientStatbyRoom2::OnAddEMPatientStatbyRoom2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMPatientStatbyRoom2::OnEditEMPatientStatbyRoom2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMPatientStatbyRoom2::OnDeleteEMPatientStatbyRoom2(){
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
 		OnCancelEMPatientStatbyRoom2();
 	}
	return 0;
}
int CEMPatientStatbyRoom2::OnSaveEMPatientStatbyRoom2(){
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
 		//OnEMPatientStatbyRoom2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMPatientStatbyRoom2::OnCancelEMPatientStatbyRoom2(){
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
int CEMPatientStatbyRoom2::OnEMPatientStatbyRoom2ListLoadData(){
	return 0;
}
CString CEMPatientStatbyRoom2::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szSuppliers, szUser;
	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!m_szExamRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrl_id IN ('%s')"), m_szExamRoomKey);
	szUser = pMF->GetCurrentUser();
	szUser.MakeLower();
	if (szUser != _T("bvtan") && szUser != _T("bvtanc14"))
		szWhere.AppendFormat(_T(" AND he_doctor = '%s'"), szUser);
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_doctor IN ('%s')"), m_szDoctorKey);
	if (m_bPTTYC == TRUE)
		szWhere.AppendFormat(_T(" AND hrl_id IN(33, 34, 35)"));
	else
		szWhere.AppendFormat(_T(" AND hrl_id NOT IN(33, 34, 35)"));

	szSQL.Format(_T(" SELECT") \
		_T(" hrl_name AS roomname,") \
		_T(" COUNT(*) AS patient") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON(he_deptid = hrl_deptid AND he_roomid = hrl_id)") \
		_T(" WHERE hrl_deptid = '%s'") \
		_T(" AND he_status IN('T', 'P') %s") \
		_T(" GROUP BY hrl_name") \
		_T(" ORDER BY hrl_name"), pMF->GetCurrentDepartmentID(), szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
