#include "stdafx.h"
#include "RPTFAMAssetInventoryDialog.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTFAMAssetInventoryDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRPTFAMAssetInventoryDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTFAMAssetInventoryDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTFAMAssetInventoryDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTFAMAssetInventoryDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTFAMAssetInventoryDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTFAMAssetInventoryDialog *pVw = (CRPTFAMAssetInventoryDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRPTFAMAssetInventoryDialog *pVw = (CRPTFAMAssetInventoryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRPTFAMAssetInventoryDialogFnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryDialog*)pWnd)->OnAddRPTFAMAssetInventoryDialog();
} 
static int _OnEditRPTFAMAssetInventoryDialogFnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryDialog*)pWnd)->OnEditRPTFAMAssetInventoryDialog();
} 
static int _OnDeleteRPTFAMAssetInventoryDialogFnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryDialog*)pWnd)->OnDeleteRPTFAMAssetInventoryDialog();
} 
static int _OnSaveRPTFAMAssetInventoryDialogFnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryDialog*)pWnd)->OnSaveRPTFAMAssetInventoryDialog();
} 
static int _OnCancelRPTFAMAssetInventoryDialogFnc(CWnd *pWnd){
	 return ((CRPTFAMAssetInventoryDialog*)pWnd)->OnCancelRPTFAMAssetInventoryDialog();
} 
CRPTFAMAssetInventoryDialog::CRPTFAMAssetInventoryDialog(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTFAMAssetInventoryDialog::~CRPTFAMAssetInventoryDialog(){
}
void CRPTFAMAssetInventoryDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 430, 90);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 30, 340, 55);
	m_wndReportPeriod.Create(this,345, 30, 425, 55); 
	m_wndToDateLabel.Create(this, _T("Inventory Date"), 10, 30, 110, 55);
	m_wndToDate.Create(this,115, 30, 235, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 425, 85); 
	m_wndExport.Create(this, _T("&Export"), 205, 95, 285, 120);
	m_wndClose.Create(this, _T("&Close"), 290, 95, 370, 120);

}
void CRPTFAMAssetInventoryDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CRPTFAMAssetInventoryDialog::OnSetWindowEvents(){
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
void CRPTFAMAssetInventoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CRPTFAMAssetInventoryDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTFAMAssetInventoryDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTFAMAssetInventoryDialog::SetDefaultValues(){

	m_szReportPeriodKey.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CRPTFAMAssetInventoryDialog::SetMode(int nMode){
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
void CRPTFAMAssetInventoryDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTFAMAssetInventoryDialog::OnReportPeriodSelendok(){
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
/*void CRPTFAMAssetInventoryDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CRPTFAMAssetInventoryDialog::OnReportPeriodKillfocus(){
	
}*/
long CRPTFAMAssetInventoryDialog::OnReportPeriodLoadData(){
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
/*void CRPTFAMAssetInventoryDialog::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRPTFAMAssetInventoryDialog::OnToDateChange(){
	
} */
/*void CRPTFAMAssetInventoryDialog::OnToDateSetfocus(){
	
} */
/*void CRPTFAMAssetInventoryDialog::OnToDateKillfocus(){
	
} */
int CRPTFAMAssetInventoryDialog::OnToDateCheckValue(){
	return 0;
} 
void CRPTFAMAssetInventoryDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTFAMAssetInventoryDialog::OnDepartmentSelendok(){
	 
}
/*void CRPTFAMAssetInventoryDialog::OnDepartmentSetfocus(){
	
}*/
/*void CRPTFAMAssetInventoryDialog::OnDepartmentKillfocus(){
	
}*/
long CRPTFAMAssetInventoryDialog::OnDepartmentLoadData(){
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
/*void CRPTFAMAssetInventoryDialog::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTFAMAssetInventoryDialog::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOldLine, szNewLine, szOldLine1, szNewLine1, szOldLine2, szNewLine2, szOldLine3, szNewLine3;	CString szDate, szTitle;	CString szSQL1, szSQL2;	CString lpszChapter1[] = {_T("PH\x1EA6N I"), _T("PH\x1EA6N II"), _T("PH\x1EA6N III"), _T("PH\x1EA6N IV"), _T("PH\x1EA6N V"), _T("PH\x1EA6N VI"),							_T("PH\x1EA6N VII"), _T("PH\x1EA6N VIII"), _T("PH\x1EA6N I\x58"), _T("PH\x1EA6N \x58")};	CString lpszChapter2[] = {_T("I/"), _T("II/"), _T("III/"), _T("IV/"), _T("V/"), _T("VI/"),_T("VII/"), _T("VIII/"), _T("IX/"), _T("X/"),							_T("XI/"),_T("XII/"), _T("XII/"), _T("XIV/"), _T("XV/"), _T("XVI/"), _T("XVII/"), _T("XVIII/")};	CString lpszChapter3[] = {_T("\x31/"), _T("\x32/"), _T("\x33/"), _T("\x34/"), _T("\x35/"), _T("\x36/"), _T("\x37/"),							_T("\x38/"), _T("\x39/"), _T("\x31\x30/")};	CString lpszChapter4[] = {_T("a/"), _T("b/"), _T("c/"), _T("d/"), _T("e/"), _T("f/"), _T("g/"), _T("h/"), _T("i/"), _T("j/"),  							_T("k/"), _T("l/"), _T("m/"), _T("n/"), _T("o/"), _T("p/"), _T("q/"), _T("r/"), _T("s/"), _T("t/"), 							_T("u/"), _T("v/"), _T("w/"), _T("x/"), _T("y/"), _T("z/")};		UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 2);
	xls.SetColumnWidth(2, 2);
	xls.SetColumnWidth(3, 2);
	xls.SetColumnWidth(4, 2);
	xls.SetColumnWidth(5, 4);
	xls.SetColumnWidth(6, 44);
	xls.SetColumnWidth(7, 6);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 3);
	xls.SetColumnWidth(10, 4);
	xls.SetColumnWidth(11, 4);
	xls.SetColumnWidth(12, 4);
	xls.SetColumnWidth(13, 4);
	xls.SetColumnWidth(14, 4);
	xls.SetColumnWidth(15, 4);
	xls.SetColumnWidth(16, 4);
	xls.SetColumnWidth(17, 4);
	xls.SetColumnWidth(18, 4);
	xls.SetColumnWidth(19, 4);
	xls.SetColumnWidth(20, 4);
	xls.SetColumnWidth(21, 4);
	xls.SetColumnWidth(22, 4);
	xls.SetColumnWidth(23, 4);
	xls.SetColumnWidth(24, 4);
	xls.SetColumnWidth(25, 4);
	xls.SetColumnWidth(26, 4);
	xls.SetColumnWidth(27, 8);
	szDate = CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy);
	szTitle.Format(_T("\x44\x41NH M\x1EE4\x43 KI\x1EC2M K\xCA THI\x1EBET \x42\x1ECA \x44O\x41NH \x43\x1EE4, \x44\x1EE4NG \x43\x1EE4, V\x1EACT T\x1AF QU\xC2N Y \x110\x1EE2T \x30 GI\x1EDC NG\xC0Y %s"), szDate);
	xls.SetCellText(0, 0, szTitle, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 2, _T("M\xE3 s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 5, _T("\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 2, _T("\x44\x41NH M\x1EE4\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 5, _T("\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 2, _T("\x110VT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 5, _T("\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	szTitle.Format(_T("S\x1ED1 l\x1B0\x1EE3ng KK \x30 gi\x1EDD %s"), szDate);
	xls.SetCellText(8, 2, szTitle, FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, false, 10);
	xls.SetCellText(8, 5, _T("\x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 2, _T("PH\xC2N \x43\x1EA4P \x43H\x1EA4T L\x1AF\x1EE2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 3, _T("\x110\x61ng s\x1EED \x64\x1EE5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 4, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 5, _T("\x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 4, _T("\x43\x1EA5p \x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 5, _T("\x36"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 4, _T("\x43\x1EA5p \x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 5, _T("\x37"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 4, _T("\x43\x1EA5p \x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 5, _T("\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 4, _T("\x43\x1EA5p \x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 5, _T("\x39"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 4, _T("\x43\x1EA5p \x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 5, _T("\x31\x30"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 3, _T("Kho \x42\x1ED9, ng\xE0nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 4, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 5, _T("\x31\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, 4, _T("\x43\x1EA5p \x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, 5, _T("\x31\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 4, _T("\x43\x1EA5p \x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 5, _T("\x31\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, 4, _T("\x43\x1EA5p \x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, 5, _T("\x31\x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 4, _T("\x43\x1EA5p \x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 5, _T("\x31\x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, 4, _T("\x43\x1EA5p \x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, 5, _T("\x31\x36"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 3, _T("Kho \x111\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 4, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 5, _T("\x31\x37"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, 4, _T("\x43\x1EA5p \x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, 5, _T("\x31\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(23, 4, _T("\x43\x1EA5p \x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(23, 5, _T("\x31\x39"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(24, 4, _T("\x43\x1EA5p \x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(24, 5, _T("\x32\x30"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(25, 0, _T("M\x1EABu \x33/KK-\x32\x30\x31\x34/QP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(25, 4, _T("\x43\x1EA5p \x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(25, 5, _T("\x32\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(26, 4, _T("\x43\x1EA5p \x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(26, 5, _T("\x32\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(27, 2, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(27, 5, _T("\x32\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(28, 2, _T("Khoa"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(28, 5, _T("24"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 24);
	xls.SetMerge(2, 4, 0, 5);
	xls.SetMerge(5, 5, 0, 5);
	xls.SetMerge(2, 4, 6, 6);
	xls.SetMerge(2, 4, 7, 7);
	xls.SetMerge(2, 4, 8, 8);
	xls.SetMerge(2, 2, 9, 26);
	xls.SetMerge(3, 3, 9, 14);
	xls.SetMerge(3, 3, 15, 20);
	xls.SetMerge(3, 3, 21, 26);
	xls.SetMerge(0, 0, 25, 27);
	xls.SetMerge(2, 4, 27, 27);	xls.SetMerge(2, 4, 28, 28);	if(!m_szDepartmentKey.IsEmpty())	{		szWhere.Format(_T("AND fil_dept = '%s'"), m_szDepartmentKey);	}	szSQL.Format(_T("SELECT DISTINCT Substr(fil_assetno, 0, 3) AS id1, ") \
				_T("                Substr(fil_assetno, 4, 2) AS id2, ") \
				_T("                Substr(fil_assetno, 6, 2) AS id3, ") \
				_T("                Substr(fil_assetno, 8, 2) AS id4, ") \
				_T("                Substr(fil_assetno, 10, 2) AS id5, ") \
				_T("                Substr(fil_assetno, 12, 3) AS id6, ") \
				_T("                fil_name AS assetname, fil_assetno,") \
				_T("                (SELECT ss_desc FROM sys_sel WHERE ss_id = 'fam_uom' AND ss_code = fal_unit) AS dvt, fil_dept,") \
				_T("                Sum(cap1 + cap2 + cap3 + cap4 + cap5) AS sl, ") \
				_T("                cap1, cap2, cap3, cap4, cap5, ") \
				_T("                (SELECT fast_desc FROM fam_assettype WHERE fast_id = famc_typeid) AS loaitb, ") \
				_T("                famc_id AS maloaitb, ") \
				_T("                famc_name AS tenloai, ") \
				_T("                (SELECT ss_desc FROM sys_sel WHERE ss_id = 'fam_group' AND ss_code = famc_groupid) AS nhomtb, ") \
				_T("                (SELECT ss_desc FROM sys_sel WHERE ss_id = 'fam_equipid' AND ss_code = famc_equipid) AS nhom ") \
				_T("FROM   (SELECT upper(fil_assetno) AS fil_assetno , fil_name, fal_unit, fil_dept,") \
				_T("               CASE WHEN fil_qtylevel = 1 THEN 1 ELSE 0 END AS cap1, ") \
				_T("               CASE WHEN fil_qtylevel = 2 THEN 1 ELSE 0 END AS cap2, ") \
				_T("               CASE WHEN fil_qtylevel = 3 THEN 1 ELSE 0 END AS cap3, ") \
				_T("               CASE WHEN fil_qtylevel = 4 THEN 1 ELSE 0 END AS cap4, ") \
				_T("               CASE WHEN fil_qtylevel = 5 THEN 1 ELSE 0 END AS cap5, ") \
				_T("               famc_typeid, famc_id, famc_name, famc_groupid, famc_equipid ") \
				_T("        FROM   fam_invent_line ") \
				_T("               LEFT JOIN fam_asset_list  ON(fal_assetno = substr(fil_assetno,0,14) AND fal_org_id = 'FAM') ") \
				_T("               LEFT JOIN fam_category  ON( famc_id = fal_category ) ") \
				_T("               LEFT JOIN fam_invent ON(fi_orderno = fil_orderno) ") \
				_T("        WHERE  fi_status = 'Y' AND fi_inventdate between to_timestamp('%s 00:00:00', 'YYYY/MM/DD HH24:MI:SS') and to_timestamp('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS')  %s) ") \
				_T("GROUP  BY fil_assetno, famc_typeid, famc_id, famc_name, famc_equipid, famc_groupid, fil_name, fal_unit, fil_dept, cap1, cap2, cap3, cap4, cap5 ") \
				_T("ORDER  BY fil_assetno, famc_id, loaitb, nhomtb, nhom, maloaitb "), m_szToDate, m_szToDate, szWhere);	rs.ExecSQL(szSQL);	_fmsg(_T("%s"), szSQL);	if(rs.IsEOF())	{		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;	}	nRow = 6;	nCol = 0;	int nID1 =0, nID2 =0, nID3 =0, nID4 =0;	CString szID2, szID3, szID4;	int nChapter1 = 0, nChapter2 = 0, nChapter3 =0, nChapter4 = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("id1"), szNewLine);		if(szNewLine != szOldLine)		{			tmpStr.Format(_T("%s%s%s"), lpszChapter1[nChapter1], _T(": "),rs.GetValue(_T("loaitb")));			xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true, 10);			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT);			xls.SetCellText(nCol+1, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+2, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+3, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+4, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+5, nRow, _T("000"), FMT_TEXT);			szOldLine1.Empty();			szOldLine2.Empty();			szOldLine3.Empty();			szOldLine = szNewLine;			nChapter2 = 0, nChapter3 =0, nChapter4 = 0;			nChapter1++;			nRow++;		}				rs.GetValue(_T("id2"), szNewLine1);		if(szNewLine1 != szOldLine1)		{			nID2 = str2int(szNewLine1);			szID2.Format(_T("%02d"), nID2);			tmpStr.Format(_T("%s%s%s"), lpszChapter2[nChapter2], _T(" "),rs.GetValue(_T("nhomtb")));			xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true, 10);			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT);			xls.SetCellText(nCol+1, nRow, szID2, FMT_TEXT);			xls.SetCellText(nCol+2, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+3, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+4, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+5, nRow, _T("000"), FMT_TEXT);			szOldLine2.Empty();			szOldLine3.Empty();			szOldLine1 = szNewLine1;			nChapter3 =0, nChapter4 = 0;			nChapter2++;			nRow++;					}				rs.GetValue(_T("id3"), szNewLine2);		if(szNewLine2 != szOldLine2)		{			nID3 = str2int(szNewLine2);			szID3.Format(_T("%02d"), nID3);			tmpStr.Format(_T("%s%s"), lpszChapter3[nChapter3], rs.GetValue(_T("nhom")));			xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true, 10);			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT);			xls.SetCellText(nCol+1, nRow, szID2, FMT_TEXT);			xls.SetCellText(nCol+2, nRow, szID3, FMT_TEXT);			xls.SetCellText(nCol+3, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+4, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+5, nRow, _T("000"), FMT_TEXT);			szOldLine2.Empty();			szOldLine2 = szNewLine2;			nChapter3++;			nChapter4 = 0;			nRow++;		}				rs.GetValue(_T("id4"), szNewLine3);		if(szNewLine3 != szOldLine3)		{			nID4 = str2int(szNewLine3);			szID4.Format(_T("%02d"), nID4);			tmpStr.Format(_T("%s%s"), lpszChapter4[nChapter4], rs.GetValue(_T("tenloai")));			xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true, 10);			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT);			xls.SetCellText(nCol+1, nRow, szID2, FMT_TEXT);			xls.SetCellText(nCol+2, nRow, szID3, FMT_TEXT);			xls.SetCellText(nCol+3, nRow, szID4, FMT_TEXT);			xls.SetCellText(nCol+4, nRow, _T("00"), FMT_TEXT);			xls.SetCellText(nCol+5, nRow, _T("000"), FMT_TEXT);			szOldLine3 = szNewLine3;			nChapter4++;			nRow++;		}		rs.GetValue(_T("id1"), tmpStr);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id2"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id3"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id4"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id5"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("id6"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("assetname"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("dvt"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("sl"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT | FMT_NUMBER1);		rs.GetValue(_T("sl"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT | FMT_NUMBER1);		rs.GetValue(_T("cap1"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT | FMT_NUMBER1);		rs.GetValue(_T("cap2"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT | FMT_NUMBER1);		rs.GetValue(_T("cap3"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT | FMT_NUMBER1);		rs.GetValue(_T("cap4"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT | FMT_NUMBER1);		rs.GetValue(_T("cap5"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT | FMT_NUMBER1);		rs.GetValue(_T("fil_dept"), tmpStr);		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\Danh muc kiem ke.xls"));
} 
void CRPTFAMAssetInventoryDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CRPTFAMAssetInventoryDialog::OnAddRPTFAMAssetInventoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTFAMAssetInventoryDialog::OnEditRPTFAMAssetInventoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTFAMAssetInventoryDialog::OnDeleteRPTFAMAssetInventoryDialog(){
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
 		OnCancelRPTFAMAssetInventoryDialog();
 	}
	return 0;
}
int CRPTFAMAssetInventoryDialog::OnSaveRPTFAMAssetInventoryDialog(){
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
 		//OnRPTFAMAssetInventoryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTFAMAssetInventoryDialog::OnCancelRPTFAMAssetInventoryDialog(){
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
int CRPTFAMAssetInventoryDialog::OnRPTFAMAssetInventoryDialogListLoadData(){
	return 0;
}
