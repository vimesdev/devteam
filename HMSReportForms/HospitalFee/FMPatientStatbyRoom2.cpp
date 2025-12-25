#include "stdafx.h"
#include "FMPatientStatbyRoom2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPatientStatbyRoom2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPatientStatbyRoom2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPatientStatbyRoom2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPatientStatbyRoom2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPatientStatbyRoom2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnExamRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPatientStatbyRoom2* )pWnd)->OnExamRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamRoomSelendokFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnExamRoomSelendok();
}
/*static void _OnExamRoomSetfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnExamRoomKillfocus();
}*/
/*static void _OnExamRoomKillfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnExamRoomKillfocus();
}*/
static long _OnExamRoomLoadDataFnc(CWnd *pWnd){
	return ((CFMPatientStatbyRoom2 *)pWnd)->OnExamRoomLoadData();
}
/*static void _OnExamRoomAddNewFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnExamRoomAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPatientStatbyRoom2* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CFMPatientStatbyRoom2 *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CFMPatientStatbyRoom2 *)pWnd)->OnDoctorAddNew();
}*/
static void _OnSODSelectFnc(CWnd *pWnd){
	CFMPatientStatbyRoom2 *pVw = (CFMPatientStatbyRoom2 *)pWnd;
	pVw->OnSODSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPatientStatbyRoom2 *pVw = (CFMPatientStatbyRoom2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPatientStatbyRoom2 *pVw = (CFMPatientStatbyRoom2 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CFMPatientStatbyRoom2*)pWnd)->OnAddEMPatientStatbyRoom2();
} 
static int _OnEditEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CFMPatientStatbyRoom2*)pWnd)->OnEditEMPatientStatbyRoom2();
} 
static int _OnDeleteEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CFMPatientStatbyRoom2*)pWnd)->OnDeleteEMPatientStatbyRoom2();
} 
static int _OnSaveEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CFMPatientStatbyRoom2*)pWnd)->OnSaveEMPatientStatbyRoom2();
} 
static int _OnCancelEMPatientStatbyRoom2Fnc(CWnd *pWnd){
	 return ((CFMPatientStatbyRoom2*)pWnd)->OnCancelEMPatientStatbyRoom2();
} 
CFMPatientStatbyRoom2::CFMPatientStatbyRoom2(CWnd *pParent)
{
	m_szDeptID = _T("TYC");
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMPatientStatbyRoom2::~CFMPatientStatbyRoom2(){
}
void CFMPatientStatbyRoom2::OnCreateComponents(){
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
	//m_wndPrint.Create(this, _T("&Print"), 240, 160, 320, 185);
	m_wndSOD.Create(this, _T("Service On Demand"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 325, 160, 405, 185);

}
void CFMPatientStatbyRoom2::OnInitializeComponents(){
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
void CFMPatientStatbyRoom2::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);


}
void CFMPatientStatbyRoom2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndExamRoom.GetDlgCtrlID(), m_szExamRoomKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);

}
void CFMPatientStatbyRoom2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPatientStatbyRoom2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPatientStatbyRoom2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szExamRoomKey.Empty();
	m_szDoctorKey.Empty();
	m_bSOD = TRUE;

}
int CFMPatientStatbyRoom2::SetMode(int nMode){
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
/*void CFMPatientStatbyRoom2::OnYearChange(){
	
} */
/*void CFMPatientStatbyRoom2::OnYearSetfocus(){
	
} */
/*void CFMPatientStatbyRoom2::OnYearKillfocus(){
	
} */
int CFMPatientStatbyRoom2::OnYearCheckValue(){
	return 0;
} 
void CFMPatientStatbyRoom2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPatientStatbyRoom2::OnReportPeriodSelendok(){
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
/*void CFMPatientStatbyRoom2::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPatientStatbyRoom2::OnReportPeriodKillfocus(){
	
}*/
long CFMPatientStatbyRoom2::OnReportPeriodLoadData(){
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
/*void CFMPatientStatbyRoom2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPatientStatbyRoom2::OnFromDateChange(){
	
} */
/*void CFMPatientStatbyRoom2::OnFromDateSetfocus(){
	
} */
/*void CFMPatientStatbyRoom2::OnFromDateKillfocus(){
	
} */
int CFMPatientStatbyRoom2::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMPatientStatbyRoom2::OnToDateChange(){
	
} */
/*void CFMPatientStatbyRoom2::OnToDateSetfocus(){
	
} */
/*void CFMPatientStatbyRoom2::OnToDateKillfocus(){
	
} */
int CFMPatientStatbyRoom2::OnToDateCheckValue(){
	return 0;
} 
void CFMPatientStatbyRoom2::OnExamRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPatientStatbyRoom2::OnExamRoomSelendok(){
	 
}
/*void CFMPatientStatbyRoom2::OnExamRoomSetfocus(){
	
}*/
/*void CFMPatientStatbyRoom2::OnExamRoomKillfocus(){
	
}*/
long CFMPatientStatbyRoom2::OnExamRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamRoom.IsSearchKey() && !m_szExamRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and hrl_id='%s' "), m_szExamRoomKey);
};
	m_wndExamRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id AS id, hrl_name AS name FROM hms_roomlist WHERE hrl_deptid = '%s' %s ORDER BY id "), m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFMPatientStatbyRoom2::OnExamRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPatientStatbyRoom2::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPatientStatbyRoom2::OnDoctorSelendok(){
	 
}
/*void CFMPatientStatbyRoom2::OnDoctorSetfocus(){
	
}*/
/*void CFMPatientStatbyRoom2::OnDoctorKillfocus(){
	
}*/
long CFMPatientStatbyRoom2::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" and su_userid='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid AS id, su_name AS name FROM sys_user WHERE su_deptid = '%s' %s ORDER BY id "), m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMPatientStatbyRoom2::OnDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPatientStatbyRoom2::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 

void CFMPatientStatbyRoom2::OnSODSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bSOD)
		m_szDeptID = _T("TYC");
	else
		m_szDeptID = _T("C1.1");
	OnExamRoomLoadData();
	OnDoctorLoadData();
}

void CFMPatientStatbyRoom2::OnExportSelect()
{	

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//_msg(_T("Chào Lộc nhé"));
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export bảng chi tiết (theo lượt khám)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Export bảng tổng hợp (theo lượt khám)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("Export bảng chi tiết -(theo lượt khám: theo số hồ sơ)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);


	TranslateString(_T("Export bảng tổng hợp (theo bệnh nhân)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportDetail();
			break;
		case 2:
			OnExportTotal();
			break;

		case 3:
			OnExportDetailBydocno();
			break;

		case 4:
			OnExportTotalByPatient();
			break;	
	}	
}
void CFMPatientStatbyRoom2::OnExportDetail()
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
	if (!xls.Load(_T("Exports\\SOLUONGKHAM_CHITIET_THEOPHONG.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringDetail();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[14] > 0)
			{
				xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 2; i < 15; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("hrl_name"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("totalquan"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_quanhuu"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_quan"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	


		rs.GetValue(_T("totalchinhsach"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("totalbhyt_khac"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbhyt_thannhansyquan"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totaldichvu"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalban"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totaltreem"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbhyt_quandoi_cnvqp"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_nothe"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbancoyeuchinhphu"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[14] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[14] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\SOLUONGKHAM_CHITIET_THEOPHONG2.xls"));
}

void CFMPatientStatbyRoom2::OnExportTotal()
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
	if (!xls.Load(_T("Exports\\SOLUONGKHAM_THEOKHOA.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringTotal();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("totalquan"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_quanhuu"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_quan"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	


		rs.GetValue(_T("totalchinhsach"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("totalbhyt_khac"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbhyt_thannhansyquan"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totaldichvu"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalban"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totaltreem"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbhyt_quandoi_cnvqp"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_nothe"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbancoyeuchinhphu"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[14] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[14] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\SOLUONGKHAM_THEOKHOA2.xls"));
}

int CFMPatientStatbyRoom2::OnAddEMPatientStatbyRoom2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMPatientStatbyRoom2::OnEditEMPatientStatbyRoom2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPatientStatbyRoom2::OnDeleteEMPatientStatbyRoom2(){
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
int CFMPatientStatbyRoom2::OnSaveEMPatientStatbyRoom2(){
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
int CFMPatientStatbyRoom2::OnCancelEMPatientStatbyRoom2(){
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
int CFMPatientStatbyRoom2::OnEMPatientStatbyRoom2ListLoadData(){
	return 0;
}
CString CFMPatientStatbyRoom2::GetQueryStringDetail()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szSuppliers, szUser;
	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
						 _T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!m_szExamRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrl_id IN ('%s')"), m_szExamRoomKey);
	
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_doctor IN ('%s')"), m_szDoctorKey);
	
	/*szSQL.Format(_T(" SELECT") \
		_T(" hrl_deptid as deptid,") \
		_T(" hrl_name AS roomname,") \
		_T(" COUNT(*) AS patient") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON(he_deptid = hrl_deptid AND he_roomid = hrl_id)") \
		_T(" WHERE HE_DEPTID in ('C1.1', 'C1.2', 'C1.3', 'AB', 'TYC','TTHTSS')") \
		_T(" AND he_status IN('T', 'P') %s") \
		_T(" GROUP BY hrl_deptid, hrl_name") \
		_T(" ORDER BY hrl_deptid, hrl_name"), szWhere);*/
	
		szSQL.Format(_T(" with tbl_xidx as") \
		_T(" (") \
		//_T(" SELECT MIN(he_receptidx) idx,") \//
		_T(" SELECT he_receptidx as idx,") \
		_T("     he_docno docno,    ") \
		_T("     case when HD_OBJECT=1 then 1 else 0 end as quan,") \
		_T("     case when HD_OBJECT=2 then 1 else 0 end as bhyt_quanhuu,") \
		_T("     case when HD_OBJECT=11 then 1 else 0 end as bhyt_quan,") \
		_T("     case when HD_OBJECT=3 then 1 else 0 end as chinhsach,") \
		_T("     case when HD_OBJECT=4 then 1 else 0 end as bhyt_khac,") \
		_T("     case when HD_OBJECT=5 then 1 else 0 end as bhyt_thannhansyquan,") \
		_T("     case when HD_OBJECT=7 then 1 else 0 end as dichvu,") \
		_T("     case when HD_OBJECT=8 then 1 else 0 end as ban,    ") \
		_T("     case when HD_OBJECT in (6,9) then 1 else 0 end as treem,") \
		_T("     case when HD_OBJECT=10 then 1 else 0 end as bhyt_quandoi_cnvqp,") \
		_T("     case when HD_OBJECT=12 then 1 else 0 end as bhyt_nothe,") \
		_T("     case when HD_OBJECT=13 then 1 else 0 end as bancoyeuchinhphu,") \
		//_T("     he_deptid as deptid") \//
		
		_T(" CASE WHEN he_deptid='TYC' AND hrl_zone='KBTYC' THEN cast('Phòng khám TYC' as NVARCHAR2(81))") \
		_T("     WHEN he_deptid='TYC' AND hrl_zone='KSK' THEN cast('Phòng khám sức khỏe TYC' as NVARCHAR2(81))") \
		_T("     WHEN he_deptid='TYC' AND hrl_zone='PTTYC' THEN cast('Phòng khám PTTYC' as NVARCHAR2(81))") \
		_T("     ELSE he_deptid END AS deptid ") \

		_T("   FROM hms_exam") \
		_T("   LEFT JOIN hms_doc ON (he_docno=hd_docno)") \
		_T("   LEFT JOIN hms_roomlist ON(he_deptid     = hrl_deptid AND he_roomid  = hrl_id)") \
		_T("   LEFT join sys_dept ON (HE_DEPTID=sd_id)") \
		_T(" WHERE 1=1 and sd_type = 'KB'") \
		_T("   %s") \
		_T("   GROUP BY he_deptid,hrl_zone, he_docno,HD_OBJECT, he_receptidx") \
		_T(" ), tbl_main AS") \
		_T("   (SELECT ") \
		_T("     idx,") \
		_T("     docno,") \
		_T("     deptid,") \
		_T("     hrl_name,") \
		_T("     quan, bhyt_quanhuu, bhyt_quan, chinhsach, bhyt_khac, bhyt_thannhansyquan, dichvu, ban, treem, bhyt_quandoi_cnvqp,bhyt_nothe,bancoyeuchinhphu ") \
		_T("   FROM tbl_xidx") \
		_T("   RIGHT JOIN hms_exam") \
		_T("   ON ( he_docno    = docno") \
		_T("   AND he_receptidx = idx )  ") \
		_T("   LEFT JOIN hms_roomlist") \
		_T("   ON ( he_deptid   = hrl_deptid") \
		_T("   AND he_roomid    = hrl_id )  ") \
		_T("   WHERE he_status IN ( 'P', 'T' )") \
		//_T("   --AND he_docno=20515288") \//
		_T("   %s") \
		_T("   )") \
		_T("  select deptid, hrl_name,") \
		_T("  SUM(quan) as totalquan,") \
		_T("  SUM(bhyt_quanhuu) as totalbhyt_quanhuu,") \
		_T("  SUM(bhyt_quan) as totalbhyt_quan,") \
		_T("  SUM(chinhsach) as totalchinhsach,") \
		_T("  SUM(bhyt_khac) as totalbhyt_khac,") \
		_T("  SUM(bhyt_thannhansyquan) as totalbhyt_thannhansyquan,") \
		_T("  SUM(dichvu) as totaldichvu,") \
		_T("  SUM(ban) as totalban,") \
		_T("  SUM(treem) as totaltreem,") \
		_T("  SUM(bhyt_quandoi_cnvqp) as totalbhyt_quandoi_cnvqp,") \
		_T("  SUM(bhyt_nothe) as totalbhyt_nothe,") \
		_T("  SUM(bancoyeuchinhphu) as totalbancoyeuchinhphu,") \
		_T("  SUM(quan+bhyt_quanhuu+bhyt_quan+chinhsach+bhyt_khac+bhyt_thannhansyquan+dichvu+ban+treem+bhyt_quandoi_cnvqp+bhyt_nothe+bancoyeuchinhphu) as total") \
		_T("  from tbl_main ") \
		_T("  where NVL(docno, 0)>0") \
		_T("  GROUP BY deptid, hrl_name") \
		_T("  ORDER BY deptid, hrl_name"), szWhere, szWhere);
	return szSQL;
}
CString CFMPatientStatbyRoom2::GetQueryStringTotal()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szSuppliers, szUser;
	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
						 _T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!m_szExamRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrl_id IN ('%s')"), m_szExamRoomKey);
	
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_doctor IN ('%s')"), m_szDoctorKey);
	
	/*szSQL.Format(_T(" SELECT") \
		_T(" hrl_deptid as deptid,") \
		_T(" hrl_name AS roomname,") \
		_T(" COUNT(*) AS patient") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON(he_deptid = hrl_deptid AND he_roomid = hrl_id)") \
		_T(" WHERE HE_DEPTID in ('C1.1', 'C1.2', 'C1.3', 'AB', 'TYC','TTHTSS')") \
		_T(" AND he_status IN('T', 'P') %s") \
		_T(" GROUP BY hrl_deptid, hrl_name") \
		_T(" ORDER BY hrl_deptid, hrl_name"), szWhere);*/
	
		szSQL.Format(_T(" with tbl_xidx as") \
		_T(" (") \
		//_T(" SELECT MIN(he_receptidx) idx,") \//
		_T(" SELECT he_receptidx as idx,") \
		_T("     he_docno docno,    ") \
		_T("     case when HD_OBJECT=1 then 1 else 0 end as quan,") \
		_T("     case when HD_OBJECT=2 then 1 else 0 end as bhyt_quanhuu,") \
		_T("     case when HD_OBJECT=11 then 1 else 0 end as bhyt_quan,") \
		_T("     case when HD_OBJECT=3 then 1 else 0 end as chinhsach,") \
		_T("     case when HD_OBJECT=4 then 1 else 0 end as bhyt_khac,") \
		_T("     case when HD_OBJECT=5 then 1 else 0 end as bhyt_thannhansyquan,") \
		_T("     case when HD_OBJECT=7 then 1 else 0 end as dichvu,") \
		_T("     case when HD_OBJECT=8 then 1 else 0 end as ban,    ") \
		_T("     case when HD_OBJECT in (6,9) then 1 else 0 end as treem,") \
		_T("     case when HD_OBJECT=10 then 1 else 0 end as bhyt_quandoi_cnvqp,") \
		_T("     case when HD_OBJECT=12 then 1 else 0 end as bhyt_nothe,") \
		_T("     case when HD_OBJECT=13 then 1 else 0 end as bancoyeuchinhphu,") \
		_T(" CASE WHEN he_deptid='TYC' AND hrl_zone='KBTYC' THEN cast('Phòng khám TYC' as NVARCHAR2(81))") \
		_T("     WHEN he_deptid='TYC' AND hrl_zone='KSK' THEN cast('Phòng khám sức khỏe TYC' as NVARCHAR2(81))") \
		_T("     WHEN he_deptid='TYC' AND hrl_zone='PTTYC' THEN cast('Phòng khám PTTYC' as NVARCHAR2(81))") \
		_T("     ELSE he_deptid END AS deptid ") \
		//_T("     he_deptid as deptid") \//
		_T("   FROM hms_exam") \
		_T("   LEFT JOIN hms_doc ON (he_docno=hd_docno)") \
		_T("   LEFT JOIN hms_roomlist ON(he_deptid     = hrl_deptid AND he_roomid    = hrl_id)") \
		_T("   LEFT join sys_dept ON (HE_DEPTID=sd_id)") \
		_T(" WHERE 1=1 AND sd_type = 'KB'") \
		_T("   %s") \
		_T("   GROUP BY he_receptidx,he_deptid,hrl_zone,he_docno,HD_OBJECT") \
		_T(" ), tbl_main AS") \
		_T("   (SELECT ") \
		_T("     idx,") \
		_T("     docno,") \
		_T("     deptid,") \
		_T("     quan, bhyt_quanhuu, bhyt_quan, chinhsach, bhyt_khac, bhyt_thannhansyquan, dichvu, ban, treem, bhyt_quandoi_cnvqp,bhyt_nothe,bancoyeuchinhphu ") \
		_T("   FROM tbl_xidx") \
		_T("   RIGHT JOIN hms_exam") \
		_T("   ON ( he_docno    = docno") \
		_T("   AND he_receptidx = idx )  ") \
		_T("   LEFT JOIN hms_roomlist") \
		_T("   ON ( he_deptid   = hrl_deptid") \
		_T("   AND he_roomid    = hrl_id )  ") \
		_T("   WHERE he_status IN ( 'P', 'T' )") \
		//_T("   --AND he_docno=20515288") \//
		_T("   %s") \
		_T("   )") \
		_T("  select deptid,") \
		_T("  SUM(quan) as totalquan,") \
		_T("  SUM(bhyt_quanhuu) as totalbhyt_quanhuu,") \
		_T("  SUM(bhyt_quan) as totalbhyt_quan,") \
		_T("  SUM(chinhsach) as totalchinhsach,") \
		_T("  SUM(bhyt_khac) as totalbhyt_khac,") \
		_T("  SUM(bhyt_thannhansyquan) as totalbhyt_thannhansyquan,") \
		_T("  SUM(dichvu) as totaldichvu,") \
		_T("  SUM(ban) as totalban,") \
		_T("  SUM(treem) as totaltreem,") \
		_T("  SUM(bhyt_quandoi_cnvqp) as totalbhyt_quandoi_cnvqp,") \
		_T("  SUM(bhyt_nothe) as totalbhyt_nothe,") \
		_T("  SUM(bancoyeuchinhphu) as totalbancoyeuchinhphu,") \
		_T("  SUM(quan+bhyt_quanhuu+bhyt_quan+chinhsach+bhyt_khac+bhyt_thannhansyquan+dichvu+ban+treem+bhyt_quandoi_cnvqp+bhyt_nothe+bancoyeuchinhphu) as total") \
		_T("  from tbl_main ") \
		_T("  where NVL(docno, 0)>0") \
		_T("  GROUP BY deptid") \
		_T("  ORDER BY deptid"), szWhere, szWhere);
	return szSQL;
}
void CFMPatientStatbyRoom2::OnExportTotalByPatient()
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
	ShowMessageBox(_T("Tiêu chí lấy theo bệnh nhân, 1 bệnh nhân khám nhiều khu -> tính là 1 và tính cho khoa tiếp đón đầu tiên!"));
	CExcel xls;
	if (!xls.Load(_T("Exports\\SOLUONGKHAM_THEOKHOA_THEOBENHNHAN.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringTotalByPatient();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("totalquan"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_quanhuu"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_quan"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	


		rs.GetValue(_T("totalchinhsach"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("totalbhyt_khac"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbhyt_thannhansyquan"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totaldichvu"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalban"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totaltreem"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbhyt_quandoi_cnvqp"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalbhyt_nothe"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("totalbancoyeuchinhphu"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[14] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[14] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\SOLUONGKHAM_THEOKHOA_THEOBENHNHAN2.xls"));
}
CString CFMPatientStatbyRoom2::GetQueryStringTotalByPatient()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szSuppliers, szUser;
	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
						 _T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	/*if (!m_szExamRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrl_id IN ('%s')"), m_szExamRoomKey);
	
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_doctor IN ('%s')"), m_szDoctorKey);*/	

		szSQL.Format(_T(" SELECT deptid,") \
					_T("   SUM(quan)                                                                                                                                AS totalquan,") \
					_T("   SUM(bhyt_quanhuu)                                                                                                                        AS totalbhyt_quanhuu,") \
					_T("   SUM(bhyt_quan)                                                                                                                           AS totalbhyt_quan,") \
					_T("   SUM(chinhsach)                                                                                                                           AS totalchinhsach,") \
					_T("   SUM(bhyt_khac)                                                                                                                           AS totalbhyt_khac,") \
					_T("   SUM(bhyt_thannhansyquan)                                                                                                                 AS totalbhyt_thannhansyquan,") \
					_T("   SUM(dichvu)                                                                                                                              AS totaldichvu,") \
					_T("   SUM(ban)                                                                                                                                 AS totalban,") \
					_T("   SUM(treem)                                                                                                                               AS totaltreem,") \
					_T("   SUM(bhyt_quandoi_cnvqp)                                                                                                                  AS totalbhyt_quandoi_cnvqp,") \
					_T("   SUM(bhyt_nothe)                                                                                                                          AS totalbhyt_nothe,") \
					_T("   SUM(bancoyeuchinhphu)                                                                                                                    AS totalbancoyeuchinhphu,") \
					_T("   SUM(quan+bhyt_quanhuu+bhyt_quan+chinhsach+bhyt_khac+bhyt_thannhansyquan+dichvu+ban+treem+bhyt_quandoi_cnvqp+bhyt_nothe+bancoyeuchinhphu) AS total") \
					_T("   FROM") \
					_T("   (") \
					_T(" SELECT ") \
					_T("     distinct(hd_docno) docno,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=1") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS quan,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=2") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS bhyt_quanhuu,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=11") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS bhyt_quan,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=3") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS chinhsach,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=4") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS bhyt_khac,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=5") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS bhyt_thannhansyquan,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=7") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS dichvu,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=8") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS ban,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT IN (6,9)") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS treem,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=10") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS bhyt_quandoi_cnvqp,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=12") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS bhyt_nothe,") \
					_T("     CASE") \
					_T("       WHEN HD_OBJECT=13") \
					_T("       THEN 1") \
					_T("       ELSE 0") \
					_T("     END AS bancoyeuchinhphu,") \
					_T("     he_deptid AS deptid") \
					_T("   FROM hms_doc  LEFT JOIN hms_exam ON (hd_docno = he_docno)") \
					_T("   LEFT JOIN hms_roomlist") \
					_T("   ON(he_deptid  = hrl_deptid)") \
					_T("   LEFT JOIN sys_dept") \
					_T("   ON (he_deptid=sd_id)") \
					_T("   WHERE he_status IN ('P', 'T') %s ") \
					_T(" AND he_receptidx in (SELECT min(he_receptidx) FROM hms_exam where he_docno = hd_docno AND he_status IN ('P', 'T'))") \
					_T("   GROUP BY hd_docno, HD_OBJECT, he_deptid, hrl_zone") \
					_T("   )") \
					_T(" GROUP BY deptid") \
					_T(" ORDER BY deptid"),szWhere);						

	return szSQL;
}
void CFMPatientStatbyRoom2::OnExportDetailBydocno()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal=0;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_KHAM_CHITIET.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryStringBydocno();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	//AfxMessageBox(szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
				
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);		
		xls.SetCellText(3, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_KHAM_CHITIET2.xls"));

}

CString CFMPatientStatbyRoom2::GetQueryStringBydocno()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szSuppliers, szUser;
	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
						 _T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!m_szExamRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrl_id IN ('%s')"), m_szExamRoomKey);
	
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_doctor IN ('%s')"), m_szDoctorKey);	

		szSQL.Format(_T(" WITH tbl_xidx AS") \
		_T("   (SELECT he_receptidx AS idx,") \
		_T("     he_docno docno,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=1") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS quan,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=2") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bhyt_quanhuu,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=11") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bhyt_quan,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=3") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS chinhsach,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=4") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bhyt_khac,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=5") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bhyt_thannhansyquan,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=7") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS dichvu,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=8") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ban,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT IN (6,9)") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS treem,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=10") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bhyt_quandoi_cnvqp,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=12") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bhyt_nothe,") \
		_T("     CASE") \
		_T("       WHEN HD_OBJECT=13") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bancoyeuchinhphu,") \
		_T("     CASE") \
		_T("       WHEN he_deptid='TYC'") \
		_T("       AND hrl_zone  ='KBTYC'") \
		_T("       THEN CAST('Phòng khám TYC' AS NVARCHAR2(81))") \
		_T("       WHEN he_deptid='TYC'") \
		_T("       AND hrl_zone  ='KSK'") \
		_T("       THEN CAST('Phòng khám sức khỏe TYC' AS NVARCHAR2(81))") \
		_T("       WHEN he_deptid='TYC'") \
		_T("       AND hrl_zone  ='PTTYC'") \
		_T("       THEN CAST('Phòng khám PTTYC' AS NVARCHAR2(81))") \
		_T("       ELSE he_deptid") \
		_T("     END AS deptid") \
		_T("   FROM hms_exam") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON (he_docno=hd_docno)") \
		_T("   LEFT JOIN hms_roomlist") \
		_T("   ON(he_deptid  = hrl_deptid") \
		_T("   AND he_roomid = hrl_id)") \
		_T("   LEFT JOIN sys_dept") \
		_T("   ON (HE_DEPTID=sd_id)") \
		_T("   WHERE sd_type='KB'") \
		_T("   %s ") \
		_T("   GROUP BY he_deptid,") \
		_T("     hrl_zone,") \
		_T("     he_docno,") \
		_T("     HD_OBJECT,") \
		_T("     he_receptidx") \
		_T("   ),") \
		_T("   tbl_main AS") \
		_T("   (SELECT idx,") \
		_T("     docno,") \
		_T("     deptid,") \
		_T("     hrl_name,") \
		_T("     quan,") \
		_T("     bhyt_quanhuu,") \
		_T("     bhyt_quan,") \
		_T("     chinhsach,") \
		_T("     bhyt_khac,") \
		_T("     bhyt_thannhansyquan,") \
		_T("     dichvu,") \
		_T("     ban,") \
		_T("     treem,") \
		_T("     bhyt_quandoi_cnvqp,") \
		_T("     bhyt_nothe,") \
		_T("     bancoyeuchinhphu,") \
		_T("     he_examdate") \
		_T("   FROM tbl_xidx") \
		_T("   RIGHT JOIN hms_exam") \
		_T("   ON ( he_docno    = docno") \
		_T("   AND he_receptidx = idx )") \
		_T("   LEFT JOIN hms_roomlist") \
		_T("   ON ( he_deptid   = hrl_deptid") \
		_T("   AND he_roomid    = hrl_id )") \
		_T("   WHERE he_status IN ( 'P', 'T' )") \
		_T("   %s ") \
		_T("   )") \
		_T(" SELECT") \
		_T(" docno,") \
		_T(" GET_PATIENTNAME(docno) as patname,") \
		_T(" deptid,") \
		_T(" to_char(he_examdate, 'DD/MM/YYYY HH24:MI:SS') as examdate   ") \
		_T(" FROM tbl_main") \
		_T(" WHERE NVL(docno, 0)>0") \
		_T(" order by docno, he_examdate"), szWhere, szWhere);

	return szSQL;
}