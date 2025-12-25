#include "stdafx.h"
#include "EMDrugAmountbyDoctor.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctor *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugAmountbyDoctor* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctor *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctor *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctor *)pWnd)->OnToDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugAmountbyDoctor* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctor *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnRoomAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugAmountbyDoctor* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctor *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnDoctorAddNew();
}*/
static void _OnPTTYCSelendokFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctor *)pWnd)->OnPTTYCSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMDrugAmountbyDoctor *pVw = (CEMDrugAmountbyDoctor *)pWnd;
	pVw->OnExportSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctor*)pWnd)->OnListLoadData();
}
static void _OnNoiTruSelectFnc(CWnd *pWnd){
	 ((CEMDrugAmountbyDoctor*)pWnd)->OnNoiTruSelect();
}
CEMDrugAmountbyDoctor::CEMDrugAmountbyDoctor(CWnd *pWnd)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMDrugAmountbyDoctor::~CEMDrugAmountbyDoctor(){
}
void CEMDrugAmountbyDoctor::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.Create(this,95, 90, 410, 115); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 120, 90, 145);
	m_wndDoctor.Create(this,95, 120, 410, 145); 
	m_wndPTTYC.Create(this, _T("Nhóm PK PTTYC"), 11, 379, 141, 404);
	m_wndExport.Create(this, _T("&ExportXLS"), 336, 380, 416, 405);
	m_wndList.Create(this,5, 156, 415, 375); 
	m_wndNoiTru.Create(this, _T("Thuốc nội trú"), 11, 413, 141, 438);
	m_wndList.SetCheckBox(TRUE);

}
void CEMDrugAmountbyDoctor::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndList.InsertColumn(1, _T("Stock"), CFMT_TEXT, 500);

}
void CEMDrugAmountbyDoctor::OnSetWindowEvents(){
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
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndPTTYC.SetEvent(WE_CLICK, _OnPTTYCSelendokFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndNoiTru.SetEvent(WE_CLICK, _OnNoiTruSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), str2int(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnListLoadData();

}
void CEMDrugAmountbyDoctor::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);
	DDX_Check(pDX, m_wndNoiTru.GetDlgCtrlID(), m_bNoiTru);

}
void CEMDrugAmountbyDoctor::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szRoomKey.Empty();
	m_szDoctorKey.Empty();
	m_bPTTYC = FALSE;
	m_bNoiTru=FALSE;
}
int CEMDrugAmountbyDoctor::SetMode(int nMode){
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
/*void CEMDrugAmountbyDoctor::OnYearChange(){
	
} */
/*void CEMDrugAmountbyDoctor::OnYearSetfocus(){
	
} */
/*void CEMDrugAmountbyDoctor::OnYearKillfocus(){
	
} */
int CEMDrugAmountbyDoctor::OnYearCheckValue(){
	return 0;
} 
void CEMDrugAmountbyDoctor::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CEMDrugAmountbyDoctor::OnNoiTruSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
}
void CEMDrugAmountbyDoctor::OnReportPeriodSelendok(){
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
/*void CEMDrugAmountbyDoctor::OnReportPeriodSetfocus(){
	
}*/
/*void CEMDrugAmountbyDoctor::OnReportPeriodKillfocus(){
	
}*/
long CEMDrugAmountbyDoctor::OnReportPeriodLoadData(){
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
/*void CEMDrugAmountbyDoctor::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMDrugAmountbyDoctor::OnFromDateChange(){
	
} */
/*void CEMDrugAmountbyDoctor::OnFromDateSetfocus(){
	
} */
/*void CEMDrugAmountbyDoctor::OnFromDateKillfocus(){
	
} */
int CEMDrugAmountbyDoctor::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMDrugAmountbyDoctor::OnToDateChange(){
	
} */
/*void CEMDrugAmountbyDoctor::OnToDateSetfocus(){
	
} */
/*void CEMDrugAmountbyDoctor::OnToDateKillfocus(){
	
} */
int CEMDrugAmountbyDoctor::OnToDateCheckValue(){
	return 0;
} 
void CEMDrugAmountbyDoctor::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugAmountbyDoctor::OnRoomSelendok(){
	 
}
/*void CEMDrugAmountbyDoctor::OnRoomSetfocus(){
	
}*/
/*void CEMDrugAmountbyDoctor::OnRoomKillfocus(){
	
}*/
long CEMDrugAmountbyDoctor::OnRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE 1=1 AND hrl_deptid = '%s' %s ORDER BY id "), pMF->GetCurrentDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMDrugAmountbyDoctor::OnRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMDrugAmountbyDoctor::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugAmountbyDoctor::OnDoctorSelendok(){
	 
}
/*void CEMDrugAmountbyDoctor::OnDoctorSetfocus(){
	
}*/
/*void CEMDrugAmountbyDoctor::OnDoctorKillfocus(){
	
}*/
long CEMDrugAmountbyDoctor::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere2;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szDoctorKey);
	}

	if (!pMF->m_UserInfo.su_hms_xdepts.IsEmpty())
	{
		szWhere2.AppendFormat(_T(" OR instr(su_hms_xdepts, chr(39)||'%s'||chr(39)) > 0 "), pMF->GetDepartmentID());
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name ") \
				_T(" FROM sys_user ") \
				_T(" WHERE 1=1 AND su_groupid = 'D' AND (su_deptid IN ('%s', 'PTTYC') %s ) %s ") \
				_T(" ORDER BY id ")
				, pMF->GetCurrentDepartmentID(), szWhere2, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
{ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CEMDrugAmountbyDoctor::OnDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CEMDrugAmountbyDoctor::OnPTTYCSelect(){

}
long CEMDrugAmountbyDoctor::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("Select msl_storage_id as ID, msl_name as Name FROM m_storagelist WHERE msl_isactive = 'Y'  and msl_org_id in('GL','PM')   AND msl_type = 'A'"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CEMDrugAmountbyDoctor::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldLine, szNewLine;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	double nTmp =0, nGrpAmt = 0, nGrpAmt2 = 0, nGrpAmt3 = 0;
	long double nTotalAmt = 0, nTotalAmt2 = 0, nTotalAmt3 = 0;
	
	if (m_bNoiTru)
	{
		szSQL = GetQueryString1();
	}
	else
	{
		szSQL = GetQueryString();
	}

	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 40);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 12);
	xls.SetColumnWidth(7, 14);
	xls.SetColumnWidth(8, 20);
	xls.SetColumnWidth(9, 40);
	xls.SetColumnWidth(10, 30);

	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(0, 2, _T("TH\x1ED0NG K\xCA S\x1ED0 TI\x1EC0N THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("Thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("Gi\xE1 g\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("TT Gi\xE1 g\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("Gi\xE1 \x62\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("TT Gi\xE1 \x62\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("L\xE3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 4, _T("Kho"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 4, _T("Hãng sản xuất"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 4, _T("Phân loại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 5);
	xls.SetMerge(3, 3, 0, 5);

	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("bac_si"), szNewLine);
		if (szNewLine != szOldLine)
		{
			if (nGrpAmt3)
			{
				xls.SetCellMergedColumns(nCol, nRow, 3);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng nh\xF3m:"), FMT_TEXT | FMT_CENTER, true);
 				tmpStr.Format(_T("%.2f"), nGrpAmt);
 				xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1, true);
 				tmpStr.Format(_T("%.2f"), nGrpAmt2);
 				xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
				tmpStr.Format(_T("%.2f"), nGrpAmt3);
				xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
				nTotalAmt += nGrpAmt;
				nTotalAmt2 += nGrpAmt2;
				nTotalAmt3 += nGrpAmt3;
				nGrpAmt = nGrpAmt2 = nGrpAmt3 = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 4);
			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT, true);
			szOldLine = szNewLine;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);
		rs.GetValue(_T("thuoc"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("so_luong"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("gia_goc"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tong_goc"), nTmp);
		nGrpAmt += nTmp;
		tmpStr.Format(_T("%.2f"), nTmp);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("gia_ban"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tong_ban"), nTmp);
		nGrpAmt2 += nTmp;
		tmpStr.Format(_T("%.2f"), nTmp);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tong_lai"), nTmp);
		nGrpAmt3 += nTmp;
		tmpStr.Format(_T("%.2f"), nTmp);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("kho"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(nCol+9, nRow, rs.GetValue(_T("manufacture")), FMT_TEXT);

		xls.SetCellText(nCol+10, nRow, rs.GetValue(_T("phanloai")), FMT_TEXT);

// 		rs.GetValue(_T("tong_goc"), nTmp);
// 		nTotalAmt += nTmp;
// 		rs.GetValue(_T("tong_ban"), nTmp);
// 		nTotalAmt2 += nTmp;
// 		rs.GetValue(_T("tong_lai"), tmpStr);
// 		nTotalAmt3 += nTmp;
		nRow++;
		rs.MoveNext();
	}
	if (nGrpAmt3)
	{
		xls.SetCellMergedColumns(nCol, nRow, 3);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng nh\xF3m:"), FMT_TEXT | FMT_CENTER, true);
 		tmpStr.Format(_T("%.2f"), nGrpAmt);
 		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1, true);
 		tmpStr.Format(_T("%.2f"), nGrpAmt2);
 		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%.2f"), nGrpAmt3);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
		nRow++;
	}
	if (nTotalAmt3)
	{
		xls.SetCellMergedColumns(nCol, nRow, 3);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true);
 		tmpStr.Format(_T("%.2f"), nTotalAmt);
 		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1, true);
 		tmpStr.Format(_T("%.2f"), nTotalAmt2);
 		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%.2f"), nTotalAmt3);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Thong ke so tien thuoc.xls"));
} 

CString CEMDrugAmountbyDoctor::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szUser, szStock;
	szWhere.Format(_T(" AND hfe_createddate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND hpo_deptid = '%s'"), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID());
	szUser = pMF->GetCurrentUser();
	//szUser.MakeLower();
	if (szUser != _T("bvtan") && szUser != _T("ltthaityc") && szUser != _T("lhtruong"))
		szWhere.AppendFormat(_T(" AND hpo_doctor = '%s'"), szUser);
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_doctor = '%s'"), m_szDoctorKey);
	if (!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_roomid = '%s'"), m_szRoomKey);
	if (m_bPTTYC == TRUE)
		szWhere.AppendFormat(_T(" AND hpo_roomid IN(33, 34, 35)"));
	else
		szWhere.AppendFormat(_T(" AND hpo_roomid NOT IN(33, 34, 35)"));

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock += _T(",");
			szStock.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("AND HPO_STORAGE_ID IN(%s)"), szStock);
		
	szSQL.Format(_T(" SELECT product_id,") \
		_T("   get_username(hpo_doctor)||'['||hpo_doctor||']'         AS bac_si,") \
		_T("   product_name                                           AS thuoc,") \
		_T("   GET_STORAGENAME(HPO_STORAGE_ID)                        AS kho,") \
		_T("   SUM(hpol_qtyissue)                                     AS so_luong,") \
		_T("   product_taxprice                                       AS gia_goc,") \
		_T("   hpol_unitprice                                         AS gia_ban,") \
		_T("   hpol_unitprice - product_taxprice					  AS lai,") \
		_T("   product_taxprice*SUM(hpol_qtyissue)                    AS tong_goc,") \
		_T("   hpol_unitprice  *SUM(hpol_qtyissue)                    AS tong_ban,") \
		_T("   (hpol_unitprice - product_taxprice)*SUM(hpol_qtyissue) AS tong_lai,") \
		_T("	PRODUCT_MANUFACTURENAME as manufacture, ") \
		_T("	case when PRODUCT_PRODUCTTYPE='A1700' then cast('Thực phẩm chức năng' as NVARCHAR2(40)) else NULL END  as phanloai") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline ON (hpo_orderid = hpol_orderid AND hpo_docno   = hpol_docno)") \
		_T(" LEFT JOIN hms_fee_invoice ON (hpo_docno = hfe_docno AND hpo_invoiceno = hfe_invoiceno)") \
		_T(" LEFT JOIN m_productitem_view ON (hpol_product_item_id = product_item_id)") \
		_T(" WHERE hfe_status    = 'P' AND PRODUCT_ORG_ID='PM' ") \
		_T(" AND hpol_qtyissue        > 0 %s") \
		_T(" GROUP BY PRODUCT_MANUFACTURENAME, product_id, PRODUCT_PRODUCTTYPE,") \
		_T("   hpo_doctor,") \
		_T("   product_name,HPO_STORAGE_ID,") \
		_T("   product_taxprice,") \
		_T("   hpol_unitprice") \
		_T(" ORDER BY hpo_doctor,") \
		_T(" product_name, product_id"), szWhere);
	
	_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CEMDrugAmountbyDoctor::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szUser, szStock;
	szWhere.Format(_T(" AND hfe_createddate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND hpo_deptid = 'PTTYC'"), m_szFromDate, m_szToDate );
	szUser = pMF->GetCurrentUser();
	//szUser.MakeLower();
	if (szUser != _T("bvtan") && szUser != _T("ltthaityc") && szUser != _T("lhtruong"))
		szWhere.AppendFormat(_T(" AND hpo_doctor = '%s'"), szUser);

	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_doctor = '%s'"), m_szDoctorKey);
	

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock += _T(",");
			szStock.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("AND HPO_STORAGE_ID IN(%s)"), szStock);
		
	szSQL.Format(_T(" SELECT product_id,") \
		_T("   get_username(hpo_doctor)||'['||hpo_doctor||']'         AS bac_si,") \
		_T("   product_name                                           AS thuoc,") \
		_T("   GET_STORAGENAME(HPO_STORAGE_ID)                        AS kho,") \
		_T("   SUM(hpol_qtyissue)                                     AS so_luong,") \
		_T("   product_taxprice                                       AS gia_goc,") \
		_T("   hpol_unitprice                                         AS gia_ban,") \
		_T("   hpol_unitprice - product_taxprice					  AS lai,") \
		_T("   product_taxprice*SUM(hpol_qtyissue)                    AS tong_goc,") \
		_T("   hpol_unitprice  *SUM(hpol_qtyissue)                    AS tong_ban,") \
		_T("   (hpol_unitprice - product_taxprice)*SUM(hpol_qtyissue) AS tong_lai,") \
		_T("	PRODUCT_MANUFACTURENAME as manufacture, ") \
		_T("	case when PRODUCT_PRODUCTTYPE='A1700' then cast('Thực phẩm chức năng' as NVARCHAR2(40)) else NULL END as phanloai") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_ipharmaorderline ON (hpo_orderid = hpol_orderid AND hpo_docno   = hpol_docno)") \
		_T(" LEFT JOIN hms_fee_invoice ON (hpo_docno = hfe_docno AND hpo_invoiceno = hfe_invoiceno)") \
		_T(" LEFT JOIN m_productitem_view ON (hpol_product_item_id = product_item_id)") \
		_T(" WHERE hfe_status    = 'P' AND PRODUCT_ORG_ID='PM' ") \
		_T(" AND hpol_qtyissue        > 0 %s") \
		_T(" GROUP BY PRODUCT_MANUFACTURENAME, product_id, PRODUCT_PRODUCTTYPE,") \
		_T("   hpo_doctor,") \
		_T("   product_name,HPO_STORAGE_ID,") \
		_T("   product_taxprice,") \
		_T("   hpol_unitprice") \
		_T(" ORDER BY hpo_doctor,") \
		_T(" product_name, product_id"), szWhere);
	
	//_msg(_T("%s"), szSQL);
	return szSQL;
}