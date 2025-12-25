#include "stdafx.h"
#include "RPTFAMAssetInventoryM2.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTFAMAssetInventoryM2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRPTFAMAssetInventoryM2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTFAMAssetInventoryM2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTFAMAssetInventoryM2* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTFAMAssetInventoryM2 *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryM2 *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTFAMAssetInventoryM2 *pVw = (CRPTFAMAssetInventoryM2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRPTFAMAssetInventoryM2 *pVw = (CRPTFAMAssetInventoryM2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRPTFAMAssetInventoryM2Fnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryM2*)pWnd)->OnAddRPTFAMAssetInventoryM2();
} 
static int _OnEditRPTFAMAssetInventoryM2Fnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryM2*)pWnd)->OnEditRPTFAMAssetInventoryM2();
} 
static int _OnDeleteRPTFAMAssetInventoryM2Fnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryM2*)pWnd)->OnDeleteRPTFAMAssetInventoryM2();
} 
static int _OnSaveRPTFAMAssetInventoryM2Fnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryM2*)pWnd)->OnSaveRPTFAMAssetInventoryM2();
} 
static int _OnCancelRPTFAMAssetInventoryM2Fnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryM2*)pWnd)->OnCancelRPTFAMAssetInventoryM2();
} 
CRPTFAMAssetInventoryM2::CRPTFAMAssetInventoryM2(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTFAMAssetInventoryM2::~CRPTFAMAssetInventoryM2(){
}
void CRPTFAMAssetInventoryM2::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 430, 90);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 30, 340, 55);
	m_wndReportPeriod.Create(this,345, 30, 425, 55); 
	m_wndToDateLabel.Create(this, _T("Inventory Date"), 10, 30, 110, 55);
	m_wndToDate.Create(this,115, 30, 235, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 425, 85); 
	m_wndExport.Create(this, _T("&Export"), 265, 95, 345, 120);
	m_wndClose.Create(this, _T("&Close"), 350, 95, 430, 120);

}
void CRPTFAMAssetInventoryM2::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}
void CRPTFAMAssetInventoryM2::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CRPTFAMAssetInventoryM2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CRPTFAMAssetInventoryM2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTFAMAssetInventoryM2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTFAMAssetInventoryM2::SetDefaultValues(){

	m_szReportPeriodKey.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CRPTFAMAssetInventoryM2::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_szToDate = pMF->GetSysDate();
			m_wndReportPeriod.EnableWindow(FALSE);
			m_wndToDate.SetFocus();
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
void CRPTFAMAssetInventoryM2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTFAMAssetInventoryM2::OnReportPeriodSelendok(){
	  CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 CString szDate, tmpStr;
	CDate dte, dt;
	UpdateData(true);
	szDate = pMF->GetSysDate();
	dt.ParseDate(szDate);
	int nMonth = ToInt(m_szReportPeriodKey);
	int nYear = dt.GetYear();
	if(nMonth > 0 && nMonth <= 12)
	{
		dte.ParseDate(szDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13)
	{
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14)
	{
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15)
	{
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16)
	{
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17)
	{
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void CRPTFAMAssetInventoryM2::OnReportPeriodSetfocus(){
	
}*/
/*void CRPTFAMAssetInventoryM2::OnReportPeriodKillfocus(){
	
}*/
long CRPTFAMAssetInventoryM2::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	}
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
/*void CRPTFAMAssetInventoryM2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRPTFAMAssetInventoryM2::OnToDateChange(){
	
} */
/*void CRPTFAMAssetInventoryM2::OnToDateSetfocus(){
	
} */
/*void CRPTFAMAssetInventoryM2::OnToDateKillfocus(){
	
} */
int CRPTFAMAssetInventoryM2::OnToDateCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szRes;
	szSQL.Format(_T("FAM_TAKE_LASTYEAR('%s')"), m_szToDate);
	szRes = pMF->ExecDML(szSQL);
	m_szPastDate = szRes;
	UpdateData(TRUE);
	return 0;
} 
void CRPTFAMAssetInventoryM2::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTFAMAssetInventoryM2::OnDepartmentSelendok(){
	 
}
/*void CRPTFAMAssetInventoryM2::OnDepartmentSetfocus(){
	
}*/
/*void CRPTFAMAssetInventoryM2::OnDepartmentKillfocus(){
	
}*/
long CRPTFAMAssetInventoryM2::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept %s ORDER BY sd_id"),
		         szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTFAMAssetInventoryM2::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTFAMAssetInventoryM2::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOldLine, szNewLine, szOldLine1, szNewLine1, szOldLine2, szNewLine2, szOldLine3, szNewLine3;	CString szDate, szTitle;	CString szSQL1, szSQL2;	CString lpszChapter1[] = {_T("PH\x1EA6N I"), _T("PH\x1EA6N II"), _T("PH\x1EA6N III"), _T("PH\x1EA6N IV"), _T("PH\x1EA6N V"), 							_T("PH\x1EA6N VI"),_T("PH\x1EA6N VII"), _T("PH\x1EA6N VIII"), _T("PH\x1EA6N I\x58"), _T("PH\x1EA6N \x58"), 							_T("PH\x1EA6N \x58I"), _T("PH\x1EA6N \x58II"),_T("PH\x1EA6N \x58III"), _T("PH\x1EA6N \x58IV"), _T("PH\x1EA6N \x58V"), 							_T("PH\x1EA6N \x58VI"), _T("PH\x1EA6N \x58VII"), _T("PH\x1EA6N \x58VIII"), _T("PH\x1EA6N \x58I\x58"), _T("PH\x1EA6N \x58\x58")};	CString lpszChapter2[] = {_T("I/"), _T("II/"), _T("III/"), _T("IV/"), _T("V/"), _T("VI/"),_T("VII/"), _T("VIII/"), _T("IX/"), _T("X/"),							_T("XI/"), _T("XII/"), _T("XIII/"), _T("XIV/"), _T("XV/"), _T("XVI/"), _T("XVII/"), _T("XVIII/"), _T("XIV/"), 							_T("XX/"), _T("XXI/"), _T("XXII/"), _T("XXIII/"),_T("XXIV/"), _T("XXV/"), _T("XXVI/"), _T("XXVII/"), _T("XXVIII/"), 							_T("XXVIV/"), _T("XXX/")};	CString lpszChapter3[] = {_T("\x31/"), _T("\x32/"), _T("\x33/"), _T("\x34/"), _T("\x35/"), _T("\x36/"), _T("\x37/"), _T("\x38/"), _T("\x39/"), _T("\x31\x30/"), 							_T("11/"), _T("12/"), _T("13/"), _T("14/"), _T("15/"), _T("16/"), _T("17/"), _T("18/"), _T("19/"), _T("20/"), _T("21/"), _T("22/"), _T("23/"), _T("24/"), _T("25/"),							_T("26/"), _T("27/"), _T("28/"), _T("29/"), _T("30/"), _T("31/"), _T("32/"), _T("33/"), _T("34/"),_T("35/"), _T("36/"), _T("37/"), _T("38/"), _T("39/"), _T("40/")};	CString lpszChapter4[] = {_T("a/"), _T("b/"), _T("c/"), _T("d/"), _T("e/"), _T("f/"), _T("g/"), _T("h/"), _T("i/"), _T("j/"),  							_T("k/"), _T("l/"), _T("m/"), _T("n/"), _T("o/"), _T("p/"), _T("q/"), _T("r/"), _T("s/"), _T("t/"), 							_T("u/"), _T("v/"), _T("w/"), _T("x/"), _T("y/"), _T("z/"), _T("a1/"), _T("b1/"), _T("c1/"), _T("d1/"), _T("e1/"),							_T("f1/"), _T("g1/"), _T("h1"), _T("i1/"), _T("k1/")};	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 3);	xls.SetColumnWidth(1, 3);	xls.SetColumnWidth(2, 3);	xls.SetColumnWidth(3, 3);	xls.SetColumnWidth(4, 3);	xls.SetColumnWidth(5, 3);	xls.SetColumnWidth(6, 32);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 8);	xls.SetColumnWidth(12, 8);	xls.SetColumnWidth(13, 8);	xls.SetColumnWidth(14, 8);	xls.SetColumnWidth(15, 8);	xls.SetColumnWidth(16, 8);	xls.SetColumnWidth(17, 8);	xls.SetColumnWidth(18, 8);	xls.SetColumnWidth(19, 8);	xls.SetColumnWidth(20, 8);	xls.SetColumnWidth(21, 8);	xls.SetColumnWidth(22, 8);	xls.SetColumnWidth(23, 8);	xls.SetColumnWidth(24, 8);	xls.SetColumnWidth(25, 8);	xls.SetColumnWidth(26, 8);	szDate = CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy);	szTitle.Format(_T("\x44\x41NH M\x1EE4\x43 KI\x1EC2M K\xCA THI\x1EBET \x42\x1ECA \x44O\x41NH \x43\x1EE4, \x44\x1EE4NG \x43\x1EE4, V\x1EACT T\x1AF QU\xC2N Y \x110\x1EE2T \x30 GI\x1EDC NG\xC0Y %s"), szDate);	xls.SetCellText(0, 1, szTitle, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("M\xE3 s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 5, _T("\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 5, _T("\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 2, _T("\x44\x61nh M\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 5, _T("\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 2, _T("\x110VT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 5, _T("\x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 2, _T("\x111\x1A1n gi\xE1 \x78\x31\x30\x30\x30"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	szDate = CDate::Convert(m_szPastDate, yyyymmdd, ddmmyyyy);	szTitle.Format(_T("T\x1ED3n ki\x1EC3m k\xEA k\x1EF3 tr\x1B0\x1EDB\x63 \x30h %s"), szDate);	xls.SetCellText(9, 2, szTitle, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 3, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 5, _T("\x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 3, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 5, _T("\x36"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 2, _T("S\x1ED1 l\x1B0\x1EE3ng t\x103ng gi\x1EA3m n\x103m ki\x1EC3m k\xEA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 3, _T("T\x103ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("S\x1ED1 l\x1B0\x1A1ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 5, _T("\x37"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 5, _T("\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 3, _T("Gi\x1EA3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 5, _T("\x39"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 4, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 5, _T("\x31\x30"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 2, _T("T\x1ED3n ki\x1EC3m k\xEA k\x1EF3 n\xE0y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 3, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 5, _T("\x31\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(16, 3, _T("Quy tr\x1ECDng l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(17, 3, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(17, 5, _T("\x31\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(18, 2, _T("Trong \x111\xF3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(18, 3, _T("\x110\x61ng s\x1EED \x64\x1EE5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(18, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(18, 5, _T("\x31\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(19, 4, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(19, 5, _T("\x31\x39"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(20, 3, _T("Kho\x61, \x42\x1ED9, Ng\xE0nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(20, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(20, 5, _T("\x32\x30"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(21, 4, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(21, 5, _T("\x32\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(22, 3, _T("Kho \x111\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(22, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(22, 5, _T("\x32\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(23, 4, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(23, 5, _T("\x32\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(24, 0, _T("M\x1EABu \x30\x31/KK-\x32\x30\x31\x34/QP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(24, 2, _T("\x110\x1EC1 ngh\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(24, 3, _T("\x110i\x1EC1u \x111i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(24, 5, _T("\x32\x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(25, 3, _T("Th\x61nh l\xFD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(25, 5, _T("\x32\x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(26, 2, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(26, 5, _T("\x32\x36"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 0);	xls.SetMerge(1, 1, 0, 26);	xls.SetMerge(2, 4, 0, 5);	xls.SetMerge(5, 5, 1, 5);	xls.SetMerge(2, 4, 6, 6);	xls.SetMerge(2, 4, 7, 7);	xls.SetMerge(2, 4, 8, 8);	xls.SetMerge(2, 2, 9, 10);	xls.SetMerge(3, 4, 9, 9);	xls.SetMerge(3, 4, 10, 10);	xls.SetMerge(2, 2, 11, 14);	xls.SetMerge(3, 3, 11, 12);	xls.SetMerge(3, 3, 13, 14);	xls.SetMerge(2, 2, 15, 17);	xls.SetMerge(3, 4, 15, 15);	xls.SetMerge(3, 4, 16, 16);	xls.SetMerge(3, 4, 17, 17);	xls.SetMerge(2, 2, 18, 23);	xls.SetMerge(3, 3, 18, 19);	xls.SetMerge(3, 3, 20, 21);	xls.SetMerge(3, 3, 22, 23);	xls.SetMerge(0, 0, 24, 26);	xls.SetMerge(2, 2, 24, 25);	xls.SetMerge(3, 4, 24, 24);	xls.SetMerge(3, 4, 25, 25);	xls.SetMerge(2, 4, 26, 26);	if(!m_szDepartmentKey.IsEmpty())	{		szWhere.Format(_T("AND fil_dept = '%s'"), m_szDepartmentKey);	}
	szSQL.Format(_T(" SELECT id1,id2,id3,id4,id5,id6,assetname,dvt,purchaseprice,uprice,oldprice,sum(sl) as sl, sum(tonkkpast) as tonkkpast, ") \
				_T(" cap1,cap2,cap3,cap4,cap5, loaitb,maloaitb,tenloai,nhomtb,nhom FROM ( ") \
				_T(" SELECT Substr(fil_assetno, 0, 3)             AS id1, ") \
				_T("                 Substr(fil_assetno, 4, 2)             AS id2, ") \
				_T("                 Substr(fil_assetno, 6, 2)             AS id3, ") \
				_T("                 Substr(fil_assetno, 8, 2)             AS id4, ") \
				_T("                 Substr(fil_assetno, 10, 2)            AS id5, ") \
				_T("                 Substr(fil_assetno, 12, 3)            AS id6, ") \
				_T("                 fil_name                              AS assetname, ") \
				_T("                 fil_assetno, ") \
				_T("                 (SELECT ss_desc ") \
				_T("                  FROM   sys_sel ") \
				_T("                  WHERE  ss_id = 'fam_uom' ") \
				_T("                         AND ss_code = fal_unit)       AS dvt, ") \
				_T("				 sum(fa_purchaseprice/1000) as purchaseprice, ") \
				_T("				 sum((fa_purchaseprice - 0.125*uyear*fa_purchaseprice)/1000) as uprice, ") \
				_T("				 sum((fa_purchaseprice - 0.125*oldyear*fa_purchaseprice)/1000) as oldprice, ") \
				_T("                 Sum(cap1 + cap2 + cap3 + cap4 + cap5) AS sl, ") \
				_T("                 Sum(c1 + c2 + c3 + c4 + c5)           AS tonkkpast, ") \
				_T("                 cap1, ") \
				_T("                 cap2, ") \
				_T("                 cap3, ") \
				_T("                 cap4, ") \
				_T("                 cap5, ") \
				_T("                 (SELECT fast_desc ") \
				_T("                  FROM   fam_assettype ")
				_T("                  WHERE  fast_id = famc_typeid)        AS loaitb, ") \
				_T("                 famc_id                               AS maloaitb, ") \
				_T("                 famc_name                             AS tenloai, ") \
				_T("                 (SELECT ss_desc ") \
				_T("                  FROM   sys_sel ") \
				_T("                  WHERE  ss_id = 'fam_group' ") \
				_T("                         AND ss_code = famc_groupid)   AS nhomtb, ") \
				_T("                 (SELECT ss_desc ") \
				_T("                  FROM   sys_sel ") \
				_T("                  WHERE  ss_id = 'fam_equipid' ") \
				_T("                         AND ss_code = famc_equipid)   AS nhom ") \
				_T(" FROM   (SELECT fl.fil_assetno, ") \
				_T("                fl.fil_name, ") \
				_T("                fal_unit, ") \
				_T("				fa_purchaseprice, ") \
                _T("				(extract(year from systimestamp) - extract(year from fa_useddate)) as uyear, ") \
				_T("				(extract(year from systimestamp) - extract(year from fa_useddate) -1) as oldyear, ") \
				_T("                CASE WHEN fl.fil_qtylevel = '1' THEN 1 ") \
				_T("                ELSE 0 ") \
				_T("                END AS cap1, ") \
				_T("                CASE WHEN fl.fil_qtylevel = '2' THEN 1 ") \
				_T("                ELSE 0 ") \
				_T("                END AS cap2, ") \
				_T("                CASE WHEN fl.fil_qtylevel = '3' THEN 1 ") \
				_T("                ELSE 0 ") \
				_T("                END AS cap3, ") \
				_T("                CASE WHEN fl.fil_qtylevel = '4' THEN 1 ") \
				_T("                ELSE 0 ") \
				_T("                END AS cap4, ") \
				_T("                CASE WHEN fl.fil_qtylevel = '5' THEN 1 ") \
				_T("                ELSE 0 ") \
				_T("                END AS cap5, ") \
				_T("                famc_typeid, ") \
				_T("                famc_id, ") \
				_T("                famc_name, ") \
				_T("                famc_groupid, ") \
				_T("                famc_equipid, ") \
				_T("                c1, ") \
				_T("                c2, ") \
				_T("                c3, ") \
				_T("                c4, ") \
				_T("                c5 ") \
				_T("         FROM   fam_invent_line fl ") \
				_T("                LEFT JOIN fam_asset_list ") \
				_T("                       ON( fal_assetno = Substr(fl.fil_assetno, 0, 14) ") \
				_T("                           AND fal_org_id = 'FAM' ) ") \
				_T("				LEFT JOIN fam_asset ON(fa_assetno = fl.fil_assetno) ") \
				_T("                LEFT JOIN fam_category ") \
				_T("                       ON( famc_id = fal_category ) ") \
				_T("                LEFT JOIN fam_invent ") \
				_T("                       ON( fi_orderno = fl.fil_orderno AND fi_status = 'Y') ") \
				_T("                LEFT JOIN (SELECT CASE WHEN fil_qtylevel = '1' THEN 1 ") \
				_T("                                  ELSE 0 ") \
				_T("                                  END AS c1, ") \
				_T("                                  CASE WHEN fil_qtylevel = '2' THEN 1 ") \
				_T("                                  ELSE 0 ") \
				_T("                                  END AS c2, ") \
				_T("                                  CASE WHEN fil_qtylevel = '3' THEN 1 ") \
				_T("                                  ELSE 0 ") \
				_T("                                  END AS c3, ") \
				_T("                                  CASE WHEN fil_qtylevel = '4' THEN 1 ") \
				_T("                                  ELSE 0 ") \
				_T("                                  END AS c4, ") \
				_T("                                  CASE WHEN fil_qtylevel = '5' THEN 1 ") \
				_T("                                  ELSE 0 ") \
				_T("                                  END AS c5, ") \
				_T("                                  fil_assetno, ") \
				_T("                                  fil_name ") \
				_T("                           FROM   fam_invent_line ") \
				_T("                                  LEFT JOIN fam_invent ") \
				_T("                                         ON( fi_orderno = fil_orderno ) ") \
				_T("                           WHERE  fi_inventdate BETWEEN To_timestamp('%s 00:00:00', 'YYYY/MM/DD HH24:MI:SS') AND To_timestamp('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS') ") \
				_T("                                  AND fi_org_id IS NULL AND fi_status = 'Y') tbl ") \
				_T("                       ON ( tbl.fil_assetno = fl.fil_assetno ) ") \
				_T("         WHERE  fi_inventdate BETWEEN To_timestamp('%s 00:00:00', 'YYYY/MM/DD HH24:MI:SS') AND To_timestamp('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS')  ") \
				_T("				AND fi_orderdate = (select max(fi_orderdate) from fam_invent ") \
				_T("									left join fam_invent_line ON(fil_orderno = fi_orderno) ") \
				_T("									where fil_assetno = fa_assetno) %s)") \
				_T(" GROUP  BY fil_assetno, ") \
				_T("           famc_typeid, ") \
				_T("           famc_id, ") \
				_T("           famc_name, ") \
				_T("           famc_equipid, ") \
				_T("           famc_groupid, ") \
				_T("           fil_name, ") \
				_T("           fal_unit,") \
				_T("           cap1, ") \
				_T("           cap2, ") \
				_T("           cap3, ") \
				_T("           cap4, ") \
				_T("           cap5 ") \
				_T(" ORDER  BY ") \
				_T("           loaitb, ") \
				_T("           nhomtb, ") \
				_T("           nhom, ") \
				_T("           tenloai  ) GROUP BY id1,id2,id3,id4,id5,id6,assetname,dvt,purchaseprice,uprice,oldprice, ") \
				_T(" cap1,cap2,cap3,cap4,cap5, loaitb,maloaitb,tenloai,nhomtb,nhom ") \
				_T(" ORDER BY loaitb, nhomtb,nhom,tenloai,id1,id2,id3,id4,id5,id6"), m_szPastDate, m_szPastDate, m_szToDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);	nRow = 6;	nCol = 0;	int nChapter1 = 0, nChapter2 = 0, nChapter3 =0, nChapter4 = 0;	int nKKnow, nKKpast;	int nCo = 0;	CString szNewLine4,szOldLine4;		while(!rs.IsEOF()){		if(!rs.GetValue(_T("loaitb")).IsEmpty() && !rs.GetValue(_T("nhomtb")).IsEmpty() && !rs.GetValue(_T("nhom")).IsEmpty() && !rs.GetValue(_T("tenloai")).IsEmpty())		{			rs.GetValue(_T("loaitb"), szNewLine);			if(szNewLine != szOldLine)			{				tmpStr.Format(_T("%s%s%s"), lpszChapter1[nChapter1], _T(": "),szNewLine);				xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true, 10);				szOldLine1.Empty();				szOldLine2.Empty();				szOldLine3.Empty();				nChapter2 = 0, nChapter3 =0, nChapter4 = 0;				szOldLine = szNewLine;				nChapter1++;				nRow++;			}						rs.GetValue(_T("nhomtb"), szNewLine1);			if(szNewLine1 != szOldLine1)			{				tmpStr.Format(_T("%s%s%s"), lpszChapter2[nChapter2], _T(" "),szNewLine1);				xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true, 10);				szOldLine2.Empty();				szOldLine3.Empty();				nChapter3 =0, nChapter4 = 0;				szOldLine1 = szNewLine1;				nChapter2++;				nRow++;			}			rs.GetValue(_T("nhom"), szNewLine2);			if(szNewLine2 != szOldLine2)			{				tmpStr.Format(_T("%s%s"), lpszChapter3[nChapter3], szNewLine2);				xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true, 10);				szOldLine3.Empty();				nChapter4 = 0;				szOldLine2 = szNewLine2;				nChapter3++;				nRow++;			}						rs.GetValue(_T("tenloai"), szNewLine3);			if(szNewLine3 != szOldLine3)			{				tmpStr.Format(_T("%s%s"), lpszChapter4[nChapter4], szNewLine3);				xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true, 10);				szOldLine3 = szNewLine3;				nChapter4++;				nRow++;			}		}else		{				szNewLine4.Format(_T("TT\x42 \x63h\x1B0\x61 \x63\xF3 nh\xF3m"));			if(szNewLine4 != szOldLine4)			{				xls.SetCellText(nCol+6, nRow, _T("TT\x42 \x63h\x1B0\x61 \x63\xF3 nh\xF3m"), FMT_TEXT, true, 10);				szOldLine4 = szNewLine4;				nRow++;			}		}		nKKnow = ToInt(rs.GetValue(_T("sl")));		if(rs.GetValue(_T("tonkkpast")).IsEmpty())		{						nKKpast = 0;		}else			nKKpast = ToInt(rs.GetValue(_T("tonkkpast")));					rs.GetValue(_T("id1"), tmpStr);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id2"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id3"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id4"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id5"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id6"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("assetname"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("dvt"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("purchaseprice"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER2);		rs.GetValue(_T("tonkkpast"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		if(ToLong(rs.GetValue(_T("oldprice"))) < 0)			tmpStr.Format(_T("0"));		else			rs.GetValue(_T("oldprice"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER2);		if(nKKnow > nKKpast)		{			tmpStr.Format(_T("%ld"), nKKnow - nKKpast);			xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);			rs.GetValue(_T("purchaseprice"), tmpStr);			xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		}else if(nKKnow < nKKpast)		{			tmpStr.Format(_T("%ld"), nKKpast - nKKnow);			xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);			rs.GetValue(_T(""), tmpStr);			xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);		}else if(nKKnow == nKKpast)		{			xls.SetCellText(nCol+11, nRow, _T("0"), FMT_TEXT);			xls.SetCellText(nCol+12, nRow, _T("0"), FMT_TEXT);			xls.SetCellText(nCol+13, nRow, _T("0"), FMT_TEXT);			xls.SetCellText(nCol+14, nRow, _T("0"), FMT_TEXT);		}		rs.GetValue(_T("sl"), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);				if(ToLong(rs.GetValue(_T("uprice"))) < 0)			tmpStr.Format(_T("0"));		else			rs.GetValue(_T("uprice"), tmpStr);		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER2);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER2);		rs.GetValue(_T("sl"), tmpStr);		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}		EndWaitCursor();	xls.Save(_T("Exports\\dmkk.xls"));
} 
void CRPTFAMAssetInventoryM2::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		
} 
int CRPTFAMAssetInventoryM2::OnAddRPTFAMAssetInventoryM2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTFAMAssetInventoryM2::OnEditRPTFAMAssetInventoryM2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTFAMAssetInventoryM2::OnDeleteRPTFAMAssetInventoryM2(){
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
 		OnCancelRPTFAMAssetInventoryM2();
 	}
	return 0;
}
int CRPTFAMAssetInventoryM2::OnSaveRPTFAMAssetInventoryM2(){
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
 		//OnRPTFAMAssetInventoryM2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTFAMAssetInventoryM2::OnCancelRPTFAMAssetInventoryM2(){
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
int CRPTFAMAssetInventoryM2::OnRPTFAMAssetInventoryM2ListLoadData(){
	return 0;
}
