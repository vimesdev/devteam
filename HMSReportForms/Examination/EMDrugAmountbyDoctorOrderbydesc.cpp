#include "stdafx.h"
#include "EMDrugAmountbyDoctorOrderbydesc.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugAmountbyDoctorOrderbydesc* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnToDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugAmountbyDoctorOrderbydesc* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnRoomAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugAmountbyDoctorOrderbydesc* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnDoctorAddNew();
}*/
static void _OnPTTYCSelendokFnc(CWnd *pWnd){
	((CEMDrugAmountbyDoctorOrderbydesc *)pWnd)->OnPTTYCSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMDrugAmountbyDoctorOrderbydesc *pVw = (CEMDrugAmountbyDoctorOrderbydesc *)pWnd;
	pVw->OnExportSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugAmountbyDoctorOrderbydesc*)pWnd)->OnListLoadData();
}
static void _OnNoiTruSelectFnc(CWnd *pWnd){
	 ((CEMDrugAmountbyDoctorOrderbydesc*)pWnd)->OnNoiTruSelect();
}
CEMDrugAmountbyDoctorOrderbydesc::CEMDrugAmountbyDoctorOrderbydesc(CWnd *pWnd)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMDrugAmountbyDoctorOrderbydesc::~CEMDrugAmountbyDoctorOrderbydesc(){
}
void CEMDrugAmountbyDoctorOrderbydesc::OnCreateComponents()
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
	m_wndPTTYC.EnableWindow(false);
	m_wndNoiTru.EnableWindow(false);

}
void CEMDrugAmountbyDoctorOrderbydesc::OnInitializeComponents(){
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
void CEMDrugAmountbyDoctorOrderbydesc::OnSetWindowEvents(){
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
void CEMDrugAmountbyDoctorOrderbydesc::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);
	DDX_Check(pDX, m_wndNoiTru.GetDlgCtrlID(), m_bNoiTru);

}
void CEMDrugAmountbyDoctorOrderbydesc::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szRoomKey.Empty();
	m_szDoctorKey.Empty();
	m_bPTTYC = FALSE;
	m_bNoiTru=FALSE;
}
int CEMDrugAmountbyDoctorOrderbydesc::SetMode(int nMode){
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
/*void CEMDrugAmountbyDoctorOrderbydesc::OnYearChange(){
	
} */
/*void CEMDrugAmountbyDoctorOrderbydesc::OnYearSetfocus(){
	
} */
/*void CEMDrugAmountbyDoctorOrderbydesc::OnYearKillfocus(){
	
} */
int CEMDrugAmountbyDoctorOrderbydesc::OnYearCheckValue(){
	return 0;
} 
void CEMDrugAmountbyDoctorOrderbydesc::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CEMDrugAmountbyDoctorOrderbydesc::OnNoiTruSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
}
void CEMDrugAmountbyDoctorOrderbydesc::OnReportPeriodSelendok(){
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
/*void CEMDrugAmountbyDoctorOrderbydesc::OnReportPeriodSetfocus(){
	
}*/
/*void CEMDrugAmountbyDoctorOrderbydesc::OnReportPeriodKillfocus(){
	
}*/
long CEMDrugAmountbyDoctorOrderbydesc::OnReportPeriodLoadData(){
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
/*void CEMDrugAmountbyDoctorOrderbydesc::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMDrugAmountbyDoctorOrderbydesc::OnFromDateChange(){
	
} */
/*void CEMDrugAmountbyDoctorOrderbydesc::OnFromDateSetfocus(){
	
} */
/*void CEMDrugAmountbyDoctorOrderbydesc::OnFromDateKillfocus(){
	
} */
int CEMDrugAmountbyDoctorOrderbydesc::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMDrugAmountbyDoctorOrderbydesc::OnToDateChange(){
	
} */
/*void CEMDrugAmountbyDoctorOrderbydesc::OnToDateSetfocus(){
	
} */
/*void CEMDrugAmountbyDoctorOrderbydesc::OnToDateKillfocus(){
	
} */
int CEMDrugAmountbyDoctorOrderbydesc::OnToDateCheckValue(){
	return 0;
} 
void CEMDrugAmountbyDoctorOrderbydesc::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugAmountbyDoctorOrderbydesc::OnRoomSelendok(){
	 
}
/*void CEMDrugAmountbyDoctorOrderbydesc::OnRoomSetfocus(){
	
}*/
/*void CEMDrugAmountbyDoctorOrderbydesc::OnRoomKillfocus(){
	
}*/
long CEMDrugAmountbyDoctorOrderbydesc::OnRoomLoadData(){
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
/*void CEMDrugAmountbyDoctorOrderbydesc::OnRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMDrugAmountbyDoctorOrderbydesc::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugAmountbyDoctorOrderbydesc::OnDoctorSelendok(){
	 
}
/*void CEMDrugAmountbyDoctorOrderbydesc::OnDoctorSetfocus(){
	
}*/
/*void CEMDrugAmountbyDoctorOrderbydesc::OnDoctorKillfocus(){
	
}*/
long CEMDrugAmountbyDoctorOrderbydesc::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name ") \
				_T(" FROM sys_user ") \
				_T(" WHERE 1=1 AND su_groupid = 'D' AND su_deptid IN ('%s', 'PTTYC') %s ") \
				_T(" ORDER BY id ")
				, pMF->GetCurrentDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CEMDrugAmountbyDoctorOrderbydesc::OnDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CEMDrugAmountbyDoctorOrderbydesc::OnPTTYCSelect(){

}
long CEMDrugAmountbyDoctorOrderbydesc::OnListLoadData()
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

void CEMDrugAmountbyDoctorOrderbydesc::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[36], nGroupTotal[36];
	for(int i = 0; i < 36; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\BAOCAOSUDUNGTHUOC_ORDERTHEOBACSI.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục /Export/Template"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("sophieu"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenbacsi"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thuoc"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("so_luong"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("gia_ban"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		
		
		rs.GetValue(_T("manufacture"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("congty"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phanloai"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ketluan"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		

		nRow++;
		rs.MoveNext();
	}

	/*if (nGroupTotal[9] > 0)
	{
		xls.SetCellText(8, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 9; i < 36; i++)
		{
			if (nGroupTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_CURRENCY1, true);
				nTotal[i] += nGroupTotal[i];
			}
		}
		nRow++;
	}

	if (nTotal[9] > 0)
	{
		xls.SetCellText(8, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 9; i < 36; i++)
		{
			if (nTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_CURRENCY1, true);
			}
		}
		nRow++;
	}*/

	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOSUDUNGTHUOC_ORDERTHEOBACSI2.xls"));
} 

CString CEMDrugAmountbyDoctorOrderbydesc::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szUser, szStock;
	szWhere.Format(_T(" AND hfe_createddate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND hpo_deptid = '%s'"), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID());
	
	/*szUser = pMF->GetCurrentUser();
	szUser.MakeLower();
	if (szUser != _T("bvtan") && szUser != _T("bvtanc14") && szUser != _T("lhtruong"))
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
		szWhere.AppendFormat(_T("AND HPO_STORAGE_ID IN(%s)"), szStock);*/	

		szSQL.Format(_T(" with tbl1 as") \
		_T(" (") \
		_T(" select") \
		_T(" hpo_docno,") \
		_T(" orderid,") \
		_T(" tenbacsi,") \
		_T(" ketluan,") \
		_T(" SUM(tong_ban) as total") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T("   distinct(hpo_orderid) as orderid,") \
		_T("   GET_USERNAME(hpo_doctor) as tenbacsi,") \
		_T("    HD_CONCLUSION as ketluan,") \
		_T("    hpo_docno,  ") \
		_T("    product_name thuoc,") \
		_T("   hpol_unitprice  *SUM(hpol_qtyissue) tong_ban") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON (hpo_orderid = hpol_orderid") \
		_T(" AND hpo_docno   = hpol_docno)") \
		_T(" LEFT JOIN hms_fee_invoice") \
		_T(" ON (hfe_docno     = hpo_docno") \
		_T(" AND hfe_invoiceno = hpo_invoiceno)") \
		_T(" LEFT JOIN hms_doc ON (hpo_docno=hd_docno)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (hpol_product_item_id = product_item_id)") \
		_T(" WHERE hfe_status         = 'P'") \
		_T(" AND hpol_qtyissue        > 0 %s ") \
		
		_T(" AND hpo_deptid      = 'TYC'") \
		_T(" AND HPO_STORAGE_ID=23") \
		_T(" GROUP BY hpo_doctor, hpo_docno, hpo_orderid,HD_CONCLUSION,") \
		_T("   product_name, ") \
		_T("   hpol_unitprice") \
		_T(" ORDER BY hpo_orderid") \
		_T(" )") \
		_T(" group by hpo_docno,orderid, tenbacsi, ketluan") \
		_T(" order by SUM(tong_ban) desc") \
		_T(" ),") \
		_T(" tbl2 as") \
		_T(" (") \
		_T(" select") \
		_T(" hpo_docno,") \
		_T(" orderid,") \
		_T(" thuoc,") \
		_T(" so_luong,") \
		_T(" manufacture,") \
		_T(" gia_ban,") \
		_T(" phanloai,") \
		_T(" congty") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T("   distinct(hpo_orderid) as orderid,") \
		_T("   GET_USERNAME(hpo_doctor) as tenbacsi,") \
		_T("    hpo_docno,  ") \
		_T("    product_name thuoc,") \
		_T("  SUM(hpol_qtyissue)                                     AS so_luong,") \
		_T("   hpol_unitprice                                       AS gia_ban,") \
		_T("   PRODUCT_MANUFACTURENAME                                AS manufacture,") \
		_T("   CASE") \
		_T("     WHEN PRODUCT_PRODUCTTYPE='A1700'") \
		_T("     THEN CAST('Thực phẩm chức năng' AS NVARCHAR2(40))") \
		_T("     ELSE NULL") \
		_T("   END AS phanloai,") \
		_T("   GET_PARTNERNAME(PO_PARTNER_ID) as congty,") \
		_T("   hpol_unitprice  *SUM(hpol_qtyissue) tong_ban") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON (hpo_orderid = hpol_orderid") \
		_T(" AND hpo_docno   = hpol_docno)") \
		_T(" LEFT JOIN hms_fee_invoice") \
		_T(" ON (hfe_docno     = hpo_docno") \
		_T(" AND hfe_invoiceno = hpo_invoiceno)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (hpol_product_item_id = product_item_id)") \
		_T(" LEFT JOIN purchase_orderline ON (pol_product_item_id=product_item_id)") \
		_T(" LEFT JOIN purchase_order ON (pol_purchase_order_id=po_purchase_order_id)") \
		_T(" WHERE hfe_status         = 'P'") \
		_T(" AND hpol_qtyissue        > 0 %s ") \
		
		_T(" AND hpo_deptid      = 'TYC'") \
		_T(" AND HPO_STORAGE_ID=23") \
		
		_T(" GROUP BY hpo_doctor, hpo_docno, hpo_orderid,product_taxprice,") \
		_T(" PRODUCT_MANUFACTURENAME,PRODUCT_PRODUCTTYPE,PO_PARTNER_ID,") \
		_T("   product_name, ") \
		_T("   hpol_unitprice") \
		_T(" ORDER BY hpo_orderid") \
		_T(" )") \
		_T(" group by hpo_docno,orderid, thuoc, so_luong,") \
		_T(" manufacture,") \
		_T(" gia_ban,") \
		_T(" phanloai,") \
		_T(" congty") \
		_T(" )") \
		_T(" select ") \
		_T(" tbl1.hpo_docno as docno,") \
		_T(" tbl1.orderid as sophieu,") \
		_T(" tbl1.tenbacsi as tenbacsi,") \
		_T(" tbl1.total as total,") \
		_T(" tbl2.thuoc as thuoc,") \
		_T(" tbl2.so_luong as so_luong,") \
		_T(" tbl2.gia_ban as gia_ban,") \
		_T(" tbl2.manufacture as manufacture,") \
		_T(" tbl2.congty as congty,") \
		_T(" tbl2.phanloai as phanloai,") \
		_T(" tbl1.ketluan as ketluan") \
		_T(" FROM tbl1, tbl2") \
		_T(" WHERE tbl1.hpo_docno=tbl2.hpo_docno") \
		_T(" AND tbl1.orderid = tbl2.orderid") \
		_T(" order by tbl1.tenbacsi, tbl1.total desc"), szWhere, szWhere);
	
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CEMDrugAmountbyDoctorOrderbydesc::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szUser, szStock;
	szWhere.Format(_T(" AND hfe_createddate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND hpo_deptid = 'PTTYC'"), m_szFromDate, m_szToDate );
	szUser = pMF->GetCurrentUser();
	szUser.MakeLower();
	if (szUser != _T("bvtan") && szUser != _T("bvtanc14") && szUser != _T("lhtruong"))
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
		_T("   product_taxprice                                       AS gia_ban,") \
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