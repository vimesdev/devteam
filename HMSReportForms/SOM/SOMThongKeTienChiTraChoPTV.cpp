#include "stdafx.h"
#include "SOMThongKeTienChiTraChoPTV.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMThongKeTienChiTraChoPTV* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMThongKeTienChiTraChoPTV* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnDeptAddNew();
}*/
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMThongKeTienChiTraChoPTV* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoPTV *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnChuaTTSelectFnc(CWnd *pWnd){
	CSOMThongKeTienChiTraChoPTV *pVw = (CSOMThongKeTienChiTraChoPTV *)pWnd;
	pVw->OnChuaTTSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CSOMThongKeTienChiTraChoPTV *pVw = (CSOMThongKeTienChiTraChoPTV *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddSOMThongKeTienChiTraChoPTVFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoPTV*)pWnd)->OnAddSOMThongKeTienChiTraChoPTV();
} 
static int _OnEditSOMThongKeTienChiTraChoPTVFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoPTV*)pWnd)->OnEditSOMThongKeTienChiTraChoPTV();
} 
static int _OnDeleteSOMThongKeTienChiTraChoPTVFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoPTV*)pWnd)->OnDeleteSOMThongKeTienChiTraChoPTV();
} 
static int _OnSaveSOMThongKeTienChiTraChoPTVFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoPTV*)pWnd)->OnSaveSOMThongKeTienChiTraChoPTV();
} 
static int _OnCancelSOMThongKeTienChiTraChoPTVFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoPTV*)pWnd)->OnCancelSOMThongKeTienChiTraChoPTV();
} 
CSOMThongKeTienChiTraChoPTV::CSOMThongKeTienChiTraChoPTV(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSOMThongKeTienChiTraChoPTV::~CSOMThongKeTienChiTraChoPTV(){
}
void CSOMThongKeTienChiTraChoPTV::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 2, 490, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 85, 55);
	m_wndYear.Create(this,90, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 245, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 85, 85);
	m_wndFromDate.Create(this,90, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 85, 115);
	m_wndDept.Create(this,90, 91, 485, 116); 
	m_wndPractitionerLabel.Create(this, _T("PTV"), 10, 120, 85, 145);
	m_wndPractitioner.Create(this,90, 120, 485, 145);
	m_wndChuaTT.Create(this, _T("Chưa tính tiền"), 10,  155, 120, 180);
	m_wndExport.Create(this, _T("&Export"), 405, 155, 485, 180);

}
void CSOMThongKeTienChiTraChoPTV::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
// 	m_wndYear.SetLimitText(1024);
// 	m_wndYear.SetCheckValue(true);
// 	m_wndReportPeriod.SetCheckValue(true);
// 	m_wndReportPeriod.LimitText(1024);
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);
// 	m_wndDept.SetCheckValue(true);
// 	m_wndDept.LimitText(1024);
// 	m_wndPractitioner.SetCheckValue(true);
// 	m_wndPractitioner.LimitText(1024);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPractitioner.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);





}
void CSOMThongKeTienChiTraChoPTV::OnSetWindowEvents(){
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
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	m_wndChuaTT.SetEvent(WE_CLICK, _OnChuaTTSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSOMThongKeTienChiTraChoPTVFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSOMThongKeTienChiTraChoPTVFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSOMThongKeTienChiTraChoPTVFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSOMThongKeTienChiTraChoPTVFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSOMThongKeTienChiTraChoPTVFnc, 0, 'T', VK_CONTROL);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), str2int(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CSOMThongKeTienChiTraChoPTV::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_Check(pDX, m_wndChuaTT.GetDlgCtrlID(), m_bChuaTT);

}
void CSOMThongKeTienChiTraChoPTV::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Practitioner")] =  m_szPractitionerKey;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Practitioner")].GetValue(m_szPractitionerKey);
	}

}
void CSOMThongKeTienChiTraChoPTV::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSOMThongKeTienChiTraChoPTV::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSOMThongKeTienChiTraChoPTV::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szPractitionerKey.Empty();
	m_bChuaTT = FALSE;

}
int CSOMThongKeTienChiTraChoPTV::SetMode(int nMode){
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
/*void CSOMThongKeTienChiTraChoPTV::OnYearChange(){
	
} */
/*void CSOMThongKeTienChiTraChoPTV::OnYearSetfocus(){
	
} */
/*void CSOMThongKeTienChiTraChoPTV::OnYearKillfocus(){
	
} */
int CSOMThongKeTienChiTraChoPTV::OnYearCheckValue(){
	return 0;
} 
void CSOMThongKeTienChiTraChoPTV::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMThongKeTienChiTraChoPTV::OnReportPeriodSelendok(){
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
/*void CSOMThongKeTienChiTraChoPTV::OnReportPeriodSetfocus(){
	
}*/
/*void CSOMThongKeTienChiTraChoPTV::OnReportPeriodKillfocus(){
	
}*/
long CSOMThongKeTienChiTraChoPTV::OnReportPeriodLoadData(){
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
/*void CSOMThongKeTienChiTraChoPTV::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSOMThongKeTienChiTraChoPTV::OnFromDateChange(){
	
} */
/*void CSOMThongKeTienChiTraChoPTV::OnFromDateSetfocus(){
	
} */
/*void CSOMThongKeTienChiTraChoPTV::OnFromDateKillfocus(){
	
} */
int CSOMThongKeTienChiTraChoPTV::OnFromDateCheckValue(){
	return 0;
} 
/*void CSOMThongKeTienChiTraChoPTV::OnToDateChange(){
	
} */
/*void CSOMThongKeTienChiTraChoPTV::OnToDateSetfocus(){
	
} */
/*void CSOMThongKeTienChiTraChoPTV::OnToDateKillfocus(){
	
} */
int CSOMThongKeTienChiTraChoPTV::OnToDateCheckValue(){
	return 0;
} 
void CSOMThongKeTienChiTraChoPTV::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMThongKeTienChiTraChoPTV::OnDeptSelendok(){
	 
}
/*void CSOMThongKeTienChiTraChoPTV::OnDeptSetfocus(){
	
}*/
/*void CSOMThongKeTienChiTraChoPTV::OnDeptKillfocus(){
	
}*/
long CSOMThongKeTienChiTraChoPTV::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSOMThongKeTienChiTraChoPTV::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSOMThongKeTienChiTraChoPTV::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMThongKeTienChiTraChoPTV::OnPractitionerSelendok(){
	 
}
/*void CSOMThongKeTienChiTraChoPTV::OnPractitionerSetfocus(){
	
}*/
/*void CSOMThongKeTienChiTraChoPTV::OnPractitionerKillfocus(){
	
}*/
long CSOMThongKeTienChiTraChoPTV::OnPractitionerLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty()){
		szWhere.Format(_T(" WHERE user_id = '%s' "), m_szPractitionerKey);
	}
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ") \
		_T(" user_id AS id,") \
		_T(" user_name AS name") \
		_T(" FROM") \
		_T("   (SELECT su_userid AS user_id,") \
		_T("     su_name         AS user_name,") \
		_T("     su_deptid       AS user_dept,") \
		_T("     su_groupid") \
		_T("   FROM sys_user") \
		_T("   WHERE su_isactive='Y'") \
		_T("   AND su_groupid  IN('D')") \
		_T("   UNION ALL") \
		_T("   SELECT hou_userid,") \
		_T("     hou_name,") \
		_T("     hou_dept,") \
		_T("     hou_group") \
		_T("   FROM hms_opt_user") \
		_T("   WHERE hou_isactive='Y'") \
		_T("   ) tbl %s") \
		_T(" ORDER BY") \
		_T(" user_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSOMThongKeTienChiTraChoPTV::OnPractitionerAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSOMThongKeTienChiTraChoPTV::OnChuaTTSelect(){

}
void CSOMThongKeTienChiTraChoPTV::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nGroupTotal = 0, nTotal = 0, nGroupTotal2 = 0, nTotal2 = 0, nGroupTotal3 = 0, nTotal3 = 0;
	CExcel xls;
	if (!xls.Load(_T("Exports\\ThongKeTienChiTraChoPTV.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("bsmo"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal > 0)
			{
				xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);
				xls.SetCellText(3, nRow, double2str(nGroupTotal), FMT_NUMBER1, true);
				xls.SetCellText(8, nRow, double2str(nGroupTotal2), FMT_NUMBER1, true);
				xls.SetCellText(9, nRow, double2str(nGroupTotal3), FMT_NUMBER1, true);
				nTotal += nGroupTotal;
				nTotal2 += nGroupTotal2;
				nTotal3 += nGroupTotal3;
				nGroupTotal = 0;
				nGroupTotal2 = 0;
				nGroupTotal3 = 0;
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("tenbn"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("giagoc"), nTemp);		nGroupTotal += nTemp;		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("ca"), tmpStr);		if(tmpStr == _T("A"))			xls.SetCellText(nCol+4, nRow, _T("X"), FMT_TEXT);		else if(tmpStr == _T("B"))			xls.SetCellText(nCol+5, nRow, _T("X"), FMT_TEXT);		else if(tmpStr == _T("C"))			xls.SetCellText(nCol+6, nRow, _T("X"), FMT_TEXT);		rs.GetValue(_T("phantrambs"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("tienchipttyc"), nTemp);		nGroupTotal2 += nTemp;		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("tiencongbs"), nTemp);		nGroupTotal3 += nTemp;		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);		if(m_bChuaTT)			{				rs.GetValue(_T("optname"), tmpStr);				xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);			}		nRow++;		rs.MoveNext();	}

	if (nGroupTotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);
		xls.SetCellText(3, nRow, double2str(nGroupTotal), FMT_NUMBER1, true);
		xls.SetCellText(8, nRow, double2str(nGroupTotal2), FMT_NUMBER1, true);
		xls.SetCellText(9, nRow, double2str(nGroupTotal3), FMT_NUMBER1, true);
		nTotal += nGroupTotal;
		nTotal2 += nGroupTotal2;
		nTotal3 += nGroupTotal3;
		nRow++;
	}

	if (nTotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		xls.SetCellText(3, nRow, double2str(nTotal), FMT_NUMBER1, true);
		xls.SetCellText(8, nRow, double2str(nTotal2), FMT_NUMBER1, true);
		xls.SetCellText(9, nRow, double2str(nTotal3), FMT_NUMBER1, true);
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\ThongKeTienChiTraChoPTV2.xls"));
} 
int CSOMThongKeTienChiTraChoPTV::OnAddSOMThongKeTienChiTraChoPTV(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSOMThongKeTienChiTraChoPTV::OnEditSOMThongKeTienChiTraChoPTV(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSOMThongKeTienChiTraChoPTV::OnDeleteSOMThongKeTienChiTraChoPTV(){
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
 		OnCancelSOMThongKeTienChiTraChoPTV();
 	}
	return 0;
}
int CSOMThongKeTienChiTraChoPTV::OnSaveSOMThongKeTienChiTraChoPTV(){
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
 		//OnSOMThongKeTienChiTraChoPTVListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSOMThongKeTienChiTraChoPTV::OnCancelSOMThongKeTienChiTraChoPTV(){
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
int CSOMThongKeTienChiTraChoPTV::OnSOMThongKeTienChiTraChoPTVListLoadData(){
	return 0;
}
CString CSOMThongKeTienChiTraChoPTV::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szUser;
	
	if (!m_szPractitionerKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_practitioner = '%s'"), m_szPractitionerKey);
	if (!m_szDeptKey.IsEmpty())
		szWhere2.AppendFormat(_T(" AND user_dept = '%s'"), m_szDeptKey);
	if (m_bChuaTT)
		szWhere.AppendFormat(_T("AND hoc_docno IS NULL AND ((ho_deptid = 'TYC' AND ho_roomid  IN(33, 34, 35)) OR ho_deptid = 'PTTYC' OR (htr_deptid  = 'PTTYC' AND ho_deptid   = 'B5'))"));
	else
		szWhere.AppendFormat(_T("AND hoc_docno IS NOT NULL"));

	szSQL.Format(_T(" SELECT") \
		_T(" bsmo,") \
		_T(" docno,") \
		_T(" tenbn,") \
		_T(" giagoc,") \
		_T(" ca,") \
		_T(" SUM(phantrambs) AS phantrambs,") \
		_T(" SUM(tiencongbs - tienchipttyc) AS tiencongbs,") \
		_T(" SUM(tienchipttyc) AS tienchipttyc,") \
		_T(" optname") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" (SELECT user_name") \
		_T(" FROM") \
		_T("   (SELECT su_userid AS user_id,") \
		_T("     su_name         AS user_name,") \
		_T("     su_deptid       AS user_dept,") \
		_T("     su_groupid") \
		_T("   FROM sys_user") \
		_T("   WHERE su_isactive='Y'") \
		_T("   UNION ALL") \
		_T("   SELECT hou_userid,") \
		_T("     hou_name,") \
		_T("     hou_dept,") \
		_T("     hou_group") \
		_T("   FROM hms_opt_user") \
		_T("   WHERE hou_isactive='Y'") \
		_T("   ) tbl WHERE user_id = ho_practitioner %s) AS bsmo,") \
		_T(" ho_docno AS docno,") \
		_T(" get_patientname(ho_docno) AS tenbn,") \
		_T(" CASE WHEN NVL(ho_amount, 0) = 0 THEN hfl_servprice ELSE ho_amount END AS giagoc,") \
		_T(" ho_opt_shift AS ca,") \
		_T(" CASE WHEN hoc_type = 'BM' THEN hoc_percent ELSE 0 END AS phantrambs,") \
		_T(" CASE WHEN hoc_type = 'BM' THEN hoc_amount ELSE 0 END AS tiencongbs,") \
		_T(" CASE WHEN hocl_type = 'BM' THEN hocl_amount ELSE 0 END AS tienchipttyc,") \
		_T(" hfl_name AS optname") \
		_T(" FROM hms_operation") \
		_T(" LEFT JOIN hms_operation_charge") \
		_T(" ON(hoc_docno = ho_docno AND hoc_optidx = ho_idx) ") \
		_T(" LEFT JOIN hms_operation_chargeline") \
		_T(" ON(hoc_docno = hocl_docno AND hoc_optidx = ho_idx AND hoc_type = hocl_type) ") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno = ho_docno AND htr_idx = ho_refidx) ") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(ho_itemid = hfl_feeid) ") \
		_T(" WHERE ho_status NOT IN('O')") \
		_T(" AND ho_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" %s") \
		_T(" )") \
		_T(" GROUP BY") \
		_T(" bsmo,") \
		_T(" docno,") \
		_T(" tenbn,") \
		_T(" giagoc,") \
		_T(" ca,") \
		_T(" optname") \
		_T(" ORDER BY") \
		_T(" bsmo,") \
		_T(" docno,") \
		_T(" tenbn,") \
		_T(" giagoc,") \
		_T(" ca"), szWhere2, m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}