#include "stdafx.h"
#include "MADetailHightechMaterial3.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CMADetailHightechMaterial3 *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMADetailHightechMaterial3* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CMADetailHightechMaterial3 *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMADetailHightechMaterial3 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMADetailHightechMaterial3 *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMADetailHightechMaterial3* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CMADetailHightechMaterial3 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMADetailHightechMaterial3* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CMADetailHightechMaterial3 *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3 *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnReceiveDateSelectFnc(CWnd *pWnd){
	((CMADetailHightechMaterial3*)pWnd)->OnReceiveDateSelect();
}
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CMADetailHightechMaterial3 *pVw = (CMADetailHightechMaterial3 *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMADetailHightechMaterial3 *pVw = (CMADetailHightechMaterial3 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CMADetailHightechMaterial3*)pWnd)->OnAddMADetailHightechMaterial();
} 
static int _OnEditMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CMADetailHightechMaterial3*)pWnd)->OnEditMADetailHightechMaterial();
} 
static int _OnDeleteMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CMADetailHightechMaterial3*)pWnd)->OnDeleteMADetailHightechMaterial();
} 
static int _OnSaveMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CMADetailHightechMaterial3*)pWnd)->OnSaveMADetailHightechMaterial();
} 
static int _OnCancelMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CMADetailHightechMaterial3*)pWnd)->OnCancelMADetailHightechMaterial();
} 
CMADetailHightechMaterial3::CMADetailHightechMaterial3(CWnd *pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CMADetailHightechMaterial3::~CMADetailHightechMaterial3(){
}
void CMADetailHightechMaterial3::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 155);
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
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 90, 145);
	m_wndDepartment.Create(this,95, 120, 425, 145); 
	m_wndReceiveDate.Create(this, _T("Receive Date"), 10, 160, 110, 185);
	m_wndPreview.Create(this, _T("&Preview"), 260, 160, 340, 185);
	m_wndExport.Create(this, _T("&Export"), 345, 160, 425, 185);

}
void CMADetailHightechMaterial3::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndYear.SetLimitText(35);
	//m_wndYear.SetCheckValue(true);
	//m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CMADetailHightechMaterial3::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndReceiveDate.SetEvent(WE_CLICK, _OnReceiveDateSelectFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CMADetailHightechMaterial3::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Check(pDX, m_wndReceiveDate.GetDlgCtrlID(), m_bReceiveDate);

}
void CMADetailHightechMaterial3::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMADetailHightechMaterial3::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMADetailHightechMaterial3::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_bReceiveDate=FALSE;

}
int CMADetailHightechMaterial3::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CMADetailHightechMaterial3::OnYearChange(){
	
} */
/*void CMADetailHightechMaterial3::OnYearSetfocus(){
	
} */
/*void CMADetailHightechMaterial3::OnYearKillfocus(){
	
} */
int CMADetailHightechMaterial3::OnYearCheckValue(){
	return 0;
} 
void CMADetailHightechMaterial3::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMADetailHightechMaterial3::OnPeriodReportSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CDate dte;
	CString tmpStr;
	int nMonth = ToInt(m_szPeriodReportKey);
	int nYear = m_nYear;
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false); 
}
/*void CMADetailHightechMaterial3::OnPeriodReportSetfocus(){
	
}*/
/*void CMADetailHightechMaterial3::OnPeriodReportKillfocus(){
	
}*/
long CMADetailHightechMaterial3::OnPeriodReportLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CMADetailHightechMaterial3::OnPeriodReportAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CMADetailHightechMaterial3::OnFromDateChange(){
	
} */
/*void CMADetailHightechMaterial3::OnFromDateSetfocus(){
	
} */
/*void CMADetailHightechMaterial3::OnFromDateKillfocus(){
	
} */
int CMADetailHightechMaterial3::OnFromDateCheckValue(){
	return 0;
} 
/*void CMADetailHightechMaterial3::OnToDateChange(){
	
} */
/*void CMADetailHightechMaterial3::OnToDateSetfocus(){
	
} */
/*void CMADetailHightechMaterial3::OnToDateKillfocus(){
	
} */
int CMADetailHightechMaterial3::OnToDateCheckValue(){
	return 0;
} 
void CMADetailHightechMaterial3::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMADetailHightechMaterial3::OnObjectSelendok(){
	 
}
/*void CMADetailHightechMaterial3::OnObjectSetfocus(){
	
}*/
/*void CMADetailHightechMaterial3::OnObjectKillfocus(){
	
}*/
long CMADetailHightechMaterial3::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ho_id id, ho_desc descr FROM hms_object ORDER BY cast(ho_id as integer)"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndObject.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndObject.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("descr")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMADetailHightechMaterial3::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMADetailHightechMaterial3::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMADetailHightechMaterial3::OnDepartmentSelendok(){
	 
}
/*void CMADetailHightechMaterial3::OnDepartmentSetfocus(){
	
}*/
/*void CMADetailHightechMaterial3::OnDepartmentKillfocus(){
	
}*/
long CMADetailHightechMaterial3::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	pMF->LoadDepartmentList(&m_wndDepartment, m_szDepartmentKey);
	return 0;
}
/*void CMADetailHightechMaterial3::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMADetailHightechMaterial3::OnReceiveDateSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMADetailHightechMaterial3::OnPreviewSelect(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	if (!rpt.Init(_T("Reports\\HMS\\MA_DETAILHIGHTECHMATERIAL2.RPT")))
		return;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate, szNewDept, szOldDept, szNewDoc, szOldDoc;
	CReportSection *rptDetail = NULL, *rptHeader = NULL;
	int nIdx = 1;
	double nTemp = 0, nTotal = 0;
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szNewDept != szOldDept && !szNewDept.IsEmpty())
		{
			if (nTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%f"), nTotal);
				rptDetail->SetValue(_T("s9"), tmpStr);
				nTotal = 0;
			}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("dept_id")));
			szOldDept = szNewDept;
			nIdx = 1;
		}
		rs.GetValue(_T("doc_no"), szNewDoc);
		if(szNewDoc != szOldDoc && !szNewDoc.IsEmpty())
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			tmpStr.Format(_T("%s - %s - %s - %s"), rs.GetValue(_T("doc_no")), rs.GetValue(_T("record_no")), rs.GetValue(_T("patient_name")), rs.GetValue(_T("object_id")));
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			szOldDoc = szNewDoc;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("product_name")));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("qty")));
		rptDetail->SetValue(_T("8"), rs.GetValue(_T("unit_price")));
		rs.GetValue(_T("total"), nTemp);
		nTotal += nTemp;
		rptDetail->SetValue(_T("9"), double2str(nTemp));
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%f"), nTotal);
		rptDetail->SetValue(_T("s9"), tmpStr);
	}
	szSysDate = pMF->GetSysDateTime();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CMADetailHightechMaterial3::OnExportSelect(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szSysDate, szNewDept, szOldDept, szNewDoc, szOldDoc, szNewType, szOldType;
	int nIdx = 1;
	double nTemp = 0, nTotal = 0;	UpdateData(TRUE);	BeginWaitCursor();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 40);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 12);	xls.SetColumnWidth(4, 16);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O \x43HI TI\x1EBET TH\x41NH TO\xC1N VT GI\xC1 TR\x1ECA L\x1EDAN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("T\xEAn v\x1EADt t\x1B0 gi\xE1 tr\x1ECB l\x1EDBn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 4);	xls.SetMerge(3, 3, 0, 4);

	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	nRow = 5;	nCol = 0;

	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept_id"), szNewDept);
		if (szNewDept != szOldDept && !szNewDept.IsEmpty())
		{
			if (nTotal > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 4);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true);
				tmpStr.Format(_T("%f"), nTotal);
				xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT, true);
				nTotal = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 4);
			xls.SetCellText(nCol, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		rs.GetValue(_T("doc_no"), szNewDoc);
		if(szNewDoc != szOldDoc && !szNewDoc.IsEmpty())
		{
			xls.SetCellMergedColumns(nCol, nRow, 6);
			tmpStr.Format(_T("%s - %s - %s - %s"), rs.GetValue(_T("doc_no")), rs.GetValue(_T("record_no")), rs.GetValue(_T("patient_name")), rs.GetValue(_T("object_id")));
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szOldDoc = szNewDoc;
			nIdx = 1;
			nRow++;
		}
		rs.GetValue(_T("ptype"), szNewType);
		if(szNewType != szOldType && !szNewType.IsEmpty())
		{
			xls.SetCellMergedColumns(nCol, nRow, 6);
			if(szNewType == _T("1"))
				tmpStr.Format(_T("Trong g\xF3i"));
			else if(szNewType == _T("2"))
				tmpStr.Format(_T("\x42\x1EA3o hi\x1EC3m tr\x1EA3"));
			else if(szNewType == _T("3"))
				tmpStr.Format(_T("\x42\x1EC7nh nh\xE2n tr\x1EA3"));
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szOldType = szNewType;
			nRow++;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_TEXT);		rs.GetValue(_T("product_name"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("qty"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		rs.GetValue(_T("unit_price"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);
		rs.GetValue(_T("total"), nTemp);
		nTotal += nTemp;
		xls.SetCellText(nCol + 4, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
		nRow++;
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 4);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\baocaovattukythuatcao.xls"));
} 
int CMADetailHightechMaterial3::OnAddMADetailHightechMaterial(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMADetailHightechMaterial3::OnEditMADetailHightechMaterial(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMADetailHightechMaterial3::OnDeleteMADetailHightechMaterial(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelMADetailHightechMaterial();
 	}
	return 0;
}
int CMADetailHightechMaterial3::OnSaveMADetailHightechMaterial(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnMADetailHightechMaterialListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMADetailHightechMaterial3::OnCancelMADetailHightechMaterial(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CMADetailHightechMaterial3::OnMADetailHightechMaterialListLoadData(){
	return 0;
}
CString CMADetailHightechMaterial3::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL, szWhere, szObjects;
	if(m_bReceiveDate)
		{
			szWhere.Format(	_T(" AND tbl2.hfe_date BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		}
	else
		{
			szWhere.Format(	_T(" AND tbl2.hfe_approveddate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND tbl2.hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
		}

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
		szWhere.AppendFormat(_T("AND tbl1.hfe_object IN (%s)"), szObjects);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T("AND tbl2.hfe_deptid = '%s'"), m_szDepartmentKey);

	szSQL.Format(_T(" SELECT") \
		_T("   CASE") \
		_T("     WHEN tbl1.hfe_category = 'Y'") \
		_T("     THEN 1") \
		_T("     WHEN tbl1.hfe_category <> 'Y'") \
		_T("     AND tbl1.hfe_inspaid    > 0") \
		_T("     THEN 2") \
		_T("     ELSE 3") \
		_T("   END             AS ptype,") \
		_T("   tbl2.hfe_deptid AS dept_id,") \
		_T("   (SELECT DISTINCT htr_recordno") \
		_T("   FROM hms_treatment_record") \
		_T("   WHERE htr_docno = tbl1.hfe_docno") \
		_T("   )                                           AS record_no,") \
		_T("   get_patientname(tbl1.hfe_docno)             AS patient_name,") \
		_T("   tbl1.hfe_docno                              AS doc_no,") \
		_T("   get_objectname(tbl1.hfe_object)             AS object_id,") \
		_T("   tbl1.hfe_desc                               AS product_name,") \
		_T("   SUM(tbl1.hfe_quantity)                      AS qty,") \
		_T("   product_saleprice2                          AS unit_price,") \
		_T("   SUM(tbl1.hfe_quantity * product_saleprice2) AS total,") \
		_T("   tbl1.hfe_category,") \
		_T("   tbl1.hfe_inspaid,") \
		_T("   tbl1.hfe_patpaid") \
		_T(" FROM hms_fee tbl1") \
		_T(" LEFT JOIN hms_fee_invoice tbl2") \
		_T(" ON (tbl2.hfe_docno     =tbl1.hfe_docno") \
		_T(" AND tbl2.hfe_invoiceno =tbl1.hfe_invoiceno)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (product_item_id = hfe_itemid)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON (mp_product_id   = product_id)") \
		_T(" WHERE tbl1.hfe_type = 'D'") \
		_T(" AND product_org_id  = 'MA' %s") \
		_T(" GROUP BY tbl2.hfe_deptid,") \
		_T("   tbl1.hfe_docno,") \
		_T("   tbl1.hfe_object,") \
		_T("   tbl1.hfe_desc,") \
		_T("   product_saleprice2,") \
		_T("   tbl1.hfe_category,") \
		_T("   tbl1.hfe_inspaid,") \
		_T("   tbl1.hfe_patpaid") \
		_T(" ORDER BY tbl2.hfe_deptid,") \
		_T("   tbl1.hfe_docno,") \
		_T("   ptype"), szWhere);
	return szSQL;
}