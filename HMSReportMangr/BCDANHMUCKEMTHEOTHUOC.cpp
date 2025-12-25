#include "BCDANHMUCKEMTHEOTHUOC.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCDANHMUCKEMTHEOTHUOC* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCDANHMUCKEMTHEOTHUOC* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCDANHMUCKEMTHEOTHUOC* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnReceiveDateSelectFnc(CWnd *pWnd){
	((CBCDANHMUCKEMTHEOTHUOC*)pWnd)->OnReceiveDateSelect();
}
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CBCDANHMUCKEMTHEOTHUOC *pVw = (CBCDANHMUCKEMTHEOTHUOC *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCDANHMUCKEMTHEOTHUOC *pVw = (CBCDANHMUCKEMTHEOTHUOC *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CBCDANHMUCKEMTHEOTHUOC*)pWnd)->OnAddMADetailHightechMaterial();
} 
static int _OnEditMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CBCDANHMUCKEMTHEOTHUOC*)pWnd)->OnEditMADetailHightechMaterial();
} 
static int _OnDeleteMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CBCDANHMUCKEMTHEOTHUOC*)pWnd)->OnDeleteMADetailHightechMaterial();
} 
static int _OnSaveMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CBCDANHMUCKEMTHEOTHUOC*)pWnd)->OnSaveMADetailHightechMaterial();
} 
static int _OnCancelMADetailHightechMaterialFnc(CWnd *pWnd){
	 return ((CBCDANHMUCKEMTHEOTHUOC*)pWnd)->OnCancelMADetailHightechMaterial();
} 
CBCDANHMUCKEMTHEOTHUOC::CBCDANHMUCKEMTHEOTHUOC(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CBCDANHMUCKEMTHEOTHUOC::~CBCDANHMUCKEMTHEOTHUOC(){
}
void CBCDANHMUCKEMTHEOTHUOC::OnCreateComponents(){
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
	//m_wndPreview.Create(this, _T("&Preview"), 260, 160, 340, 185);
	m_wndExport.Create(this, _T("&Export"), 345, 160, 425, 185);

}
void CBCDANHMUCKEMTHEOTHUOC::OnInitializeComponents(){
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
void CBCDANHMUCKEMTHEOTHUOC::OnSetWindowEvents(){
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
void CBCDANHMUCKEMTHEOTHUOC::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Check(pDX, m_wndReceiveDate.GetDlgCtrlID(), m_bReceiveDate);

}
void CBCDANHMUCKEMTHEOTHUOC::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCDANHMUCKEMTHEOTHUOC::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CBCDANHMUCKEMTHEOTHUOC::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_bReceiveDate=FALSE;

}
int CBCDANHMUCKEMTHEOTHUOC::SetMode(int nMode){
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
/*void CBCDANHMUCKEMTHEOTHUOC::OnYearChange(){
	
} */
/*void CBCDANHMUCKEMTHEOTHUOC::OnYearSetfocus(){
	
} */
/*void CBCDANHMUCKEMTHEOTHUOC::OnYearKillfocus(){
	
} */
int CBCDANHMUCKEMTHEOTHUOC::OnYearCheckValue(){
	return 0;
} 
void CBCDANHMUCKEMTHEOTHUOC::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CBCDANHMUCKEMTHEOTHUOC::OnPeriodReportSelendok(){
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
/*void CBCDANHMUCKEMTHEOTHUOC::OnPeriodReportSetfocus(){
	
}*/
/*void CBCDANHMUCKEMTHEOTHUOC::OnPeriodReportKillfocus(){
	
}*/
long CBCDANHMUCKEMTHEOTHUOC::OnPeriodReportLoadData(){
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
/*void CBCDANHMUCKEMTHEOTHUOC::OnPeriodReportAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CBCDANHMUCKEMTHEOTHUOC::OnFromDateChange(){
	
} */
/*void CBCDANHMUCKEMTHEOTHUOC::OnFromDateSetfocus(){
	
} */
/*void CBCDANHMUCKEMTHEOTHUOC::OnFromDateKillfocus(){
	
} */
int CBCDANHMUCKEMTHEOTHUOC::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCDANHMUCKEMTHEOTHUOC::OnToDateChange(){
	
} */
/*void CBCDANHMUCKEMTHEOTHUOC::OnToDateSetfocus(){
	
} */
/*void CBCDANHMUCKEMTHEOTHUOC::OnToDateKillfocus(){
	
} */
int CBCDANHMUCKEMTHEOTHUOC::OnToDateCheckValue(){
	return 0;
} 
void CBCDANHMUCKEMTHEOTHUOC::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CBCDANHMUCKEMTHEOTHUOC::OnObjectSelendok(){
	 
}
/*void CBCDANHMUCKEMTHEOTHUOC::OnObjectSetfocus(){
	
}*/
/*void CBCDANHMUCKEMTHEOTHUOC::OnObjectKillfocus(){
	
}*/
long CBCDANHMUCKEMTHEOTHUOC::OnObjectLoadData(){
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
/*void CBCDANHMUCKEMTHEOTHUOC::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CBCDANHMUCKEMTHEOTHUOC::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CBCDANHMUCKEMTHEOTHUOC::OnDepartmentSelendok(){
	 
}
/*void CBCDANHMUCKEMTHEOTHUOC::OnDepartmentSetfocus(){
	
}*/
/*void CBCDANHMUCKEMTHEOTHUOC::OnDepartmentKillfocus(){
	
}*/
long CBCDANHMUCKEMTHEOTHUOC::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	pMF->LoadDepartmentList(&m_wndDepartment, m_szDepartmentKey);
	return 0;
}
/*void CBCDANHMUCKEMTHEOTHUOC::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CBCDANHMUCKEMTHEOTHUOC::OnReceiveDateSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CBCDANHMUCKEMTHEOTHUOC::OnPreviewSelect(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CBCDANHMUCKEMTHEOTHUOC::OnExportSelect(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szNewGroup, szOldGroup;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, nIdx2 = 0;
	double nTemp = 0, nTotalGroup = 0, nTotalGroup1 = 0, nTotalGroup2 = 0, nTotalGroup3 = 0;
	double nTotal = 0, nTotal1 = 0, nTotal2 = 0, nTotal3 = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 25);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 14);
	xls.SetColumnWidth(10, 14);
	xls.SetColumnWidth(11, 14);
	xls.SetColumnWidth(12, 14);
	xls.SetColumnWidth(13, 14);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);

	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O \x44\x41NH M\x1EE4\x43 THUỐC "), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("Mã BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("Số lần ĐT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("S\x1ED1 th\x1EBB \x42H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("Nh\xF3m thuốc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 5, _T("T\xEAn thuốc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 5, _T("Đơn vị tính"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 5, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 5, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 5, _T("\x42H tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 5, _T("\x42N tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 13);
	xls.SetMerge(3, 3, 0, 13);
	xls.SetMerge(4, 5, 0, 0);
	xls.SetMerge(4, 5, 1, 1);
	xls.SetMerge(4, 5, 2, 2);
	xls.SetMerge(4, 5, 3, 3);
	xls.SetMerge(4, 5, 4, 4);
	xls.SetMerge(4, 5, 5, 5);
	xls.SetMerge(4, 5, 6, 6);
	xls.SetMerge(4, 4, 7, 13);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("hd_patientno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("doc_no"), szTemp);
		xls.SetCellText(nCol+2, nRow, szTemp, FMT_INTEGER);
		rs.GetValue(_T("hcr_cancer_time"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("patient_name"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("object_id"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		szSQL.Format(_T(" SELECT CASE WHEN SUBSTR(tbl1.hfe_group,1,2) IN('A1','A6') AND tbl1.hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN 1") \
			_T("   WHEN tbl1.hfe_group='A1400' THEN 2 ELSE 0 END AS product_group,") \
			_T("   tbl1.hfe_desc                               AS product_name,") \
			_T("   product_purchase_uomname                    AS product_uom,") \
			_T("   SUM(tbl1.hfe_discount)                      AS dis_count,") \
			_T("   SUM(tbl1.hfe_patpaid)                       AS pat_paid,") \
			_T("   SUM(tbl1.hfe_quantity)                      AS qty,") \
			_T("   tbl1.hfe_unitprice                          AS unit_price,") \
			_T("   SUM(tbl1.hfe_quantity * tbl1.hfe_unitprice) AS total") \
			_T(" FROM hms_fee tbl1") \
			_T(" LEFT JOIN hms_fee_invoice tbl2") \
			_T(" ON (tbl2.hfe_docno     =tbl1.hfe_docno") \
			_T(" AND tbl2.hfe_invoiceno =tbl1.hfe_invoiceno)") \
			_T(" LEFT JOIN m_productitem_view") \
			_T(" ON (product_item_id = hfe_itemid)") \
			_T(" LEFT JOIN m_product") \
			_T(" ON (mp_product_id = product_id)") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON (hd_docno = tbl2.hfe_docno)") \
			_T(" LEFT JOIN hms_object j") \
			_T(" ON (ho_id              = hd_object)") \
			_T(" WHERE tbl1.hfe_type    = 'D'") \
			_T(" AND product_org_id     = 'PM'") \
			_T(" AND tbl1.hfe_category <> 'Y'") \
			_T(" AND tbl1.hfe_docno    = %s") \
			_T(" GROUP BY tbl1.hfe_desc,") \
			_T("   tbl1.hfe_unitprice,") \
			_T("   tbl1.hfe_group,") \
			_T("   product_purchase_uomname") \
			_T(" ORDER BY product_group,") \
			_T("   tbl1.hfe_desc"), szTemp);

		rs1.ExecSQL(szSQL);

		if (rs1.IsEOF())
			nRow++;

		while(!rs1.IsEOF())
		{	
			rs1.GetValue(_T("product_group"), szNewGroup);
			if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
			{
				if (nTotalGroup1 > 0)
				{
					xls.SetCellText(7, nRow, _T("Tổng nhóm: "), FMT_TEXT | FMT_RIGHT, true);
					xls.SetCellText(nCol+9, nRow, ToString(nTotalGroup), FMT_NUMBER1, true);
					xls.SetCellText(nCol+11, nRow, ToString(nTotalGroup1), FMT_NUMBER1, true);
					xls.SetCellText(nCol+12, nRow, ToString(nTotalGroup2), FMT_NUMBER1, true);
					xls.SetCellText(nCol+13, nRow, ToString(nTotalGroup3), FMT_NUMBER1, true);
					nTotal += nTotalGroup;
					nTotal1 += nTotalGroup1;
					nTotal2 += nTotalGroup2;
					nTotal3 += nTotalGroup3;
					nTotalGroup = 0;
					nTotalGroup1 = 0;
					nTotalGroup2 = 0;
					nTotalGroup3 = 0;
					nRow++;
				}
				xls.SetCellMergedColumns(7, nRow, 7);
				if(szNewGroup == _T("1"))
					tmpStr.Format(_T("Trong danh mục BHYT"));
				else if (szNewGroup == _T("2"))
					tmpStr.Format(_T("Thuốc K thải ghép"));
				else
					tmpStr.Format(_T("Khác"));
				xls.SetCellText(7, nRow, tmpStr, FMT_TEXT, true);
				szOldGroup = szNewGroup;
				nIdx2++;
				nRow++;
			}

			rs1.GetValue(_T("product_name"), tmpStr);
			xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
			rs1.GetValue(_T("product_uom"), tmpStr);
			xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
			rs1.GetValue(_T("qty"), nTemp);
			nTotalGroup += nTemp;
			xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);
			rs1.GetValue(_T("unit_price"), tmpStr);
			xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
			rs1.GetValue(_T("total"), nTemp);
			nTotalGroup1 += nTemp;
			xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);
			rs1.GetValue(_T("dis_count"), nTemp);
			nTotalGroup2 += nTemp;
			xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);
			rs1.GetValue(_T("pat_paid"), nTemp);
			nTotalGroup3 += nTemp;
			xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);
			nRow++;
			rs1.MoveNext();
		}

		if (nTotalGroup1 > 0)
		{
			xls.SetCellText(7, nRow, _T("Tổng nhóm: "), FMT_TEXT | FMT_RIGHT, true);
			xls.SetCellText(nCol+9, nRow, ToString(nTotalGroup), FMT_NUMBER1, true);
			xls.SetCellText(nCol+11, nRow, ToString(nTotalGroup1), FMT_NUMBER1, true);
			xls.SetCellText(nCol+12, nRow, ToString(nTotalGroup2), FMT_NUMBER1, true);
			xls.SetCellText(nCol+13, nRow, ToString(nTotalGroup3), FMT_NUMBER1, true);
			nTotal += nTotalGroup;
			nTotal1 += nTotalGroup1;
			nTotal2 += nTotalGroup2;
			nTotal3 += nTotalGroup3;
			nRow++;
		}

		if (nIdx2 > 1)
		{
			xls.SetCellText(7, nRow, _T("Tổng cộng: "), FMT_TEXT | FMT_RIGHT, true);
			xls.SetCellText(nCol+9, nRow, ToString(nTotal), FMT_NUMBER1, true);
			xls.SetCellText(nCol+11, nRow, ToString(nTotal1), FMT_NUMBER1, true);
			xls.SetCellText(nCol+12, nRow, ToString(nTotal2), FMT_NUMBER1, true);
			xls.SetCellText(nCol+13, nRow, ToString(nTotal3), FMT_NUMBER1, true);
			nRow++;
		}

		szNewGroup = szOldGroup = _T("");
		nTotalGroup = nTotalGroup1 = nTotalGroup2 = nTotalGroup3 = nTotal = nTotal1 = nTotal2 = nTotal3 = 0;
		nIdx2 = 0;

		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao danh muc kem theo thuoc.xls"));
} 
int CBCDANHMUCKEMTHEOTHUOC::OnAddMADetailHightechMaterial(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCDANHMUCKEMTHEOTHUOC::OnEditMADetailHightechMaterial(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCDANHMUCKEMTHEOTHUOC::OnDeleteMADetailHightechMaterial(){
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
int CBCDANHMUCKEMTHEOTHUOC::OnSaveMADetailHightechMaterial(){
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
int CBCDANHMUCKEMTHEOTHUOC::OnCancelMADetailHightechMaterial(){
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
int CBCDANHMUCKEMTHEOTHUOC::OnMADetailHightechMaterialListLoadData(){
	return 0;
}
CString CBCDANHMUCKEMTHEOTHUOC::GetQueryString(){
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

	szSQL.Format(_T(" SELECT DISTINCT tbl2.hfe_deptid AS dept_id,") \
		_T("   (SELECT DISTINCT htr_recordno") \
		_T("   FROM hms_treatment_record") \
		_T("   WHERE htr_docno = tbl1.hfe_docno") \
		_T("   )                               AS record_no,") \
		_T("   get_patientname(tbl1.hfe_docno) AS patient_name,") \
		_T("   tbl1.hfe_docno                  AS doc_no,") \
		_T("   get_objectname(tbl1.hfe_object) AS object_id,") \
		_T("   hd_cardno                       AS cardno, hd_patientno, hcr_cancer_time ") \
		_T(" FROM hms_fee tbl1") \
		_T(" LEFT JOIN hms_fee_invoice tbl2") \
		_T(" ON (tbl2.hfe_docno     =tbl1.hfe_docno") \
		_T(" AND tbl2.hfe_invoiceno =tbl1.hfe_invoiceno)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (product_item_id = hfe_itemid)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON (mp_product_id = product_id)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno = tbl2.hfe_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON (hd_docno = hcr_docno)") \
		_T(" WHERE tbl1.hfe_type    = 'D'") \
		_T(" AND product_org_id     = 'PM'") \
		_T(" AND tbl1.hfe_category <> 'Y'") \
		_T(" %s") \
		_T(" ORDER BY hd_patientno, hcr_cancer_time,") \
		_T("   tbl1.hfe_docno"), szWhere);

	return szSQL;
}