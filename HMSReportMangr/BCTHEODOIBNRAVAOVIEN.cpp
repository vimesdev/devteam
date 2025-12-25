#include "BCTHEODOIBNRAVAOVIEN.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnFromDateChange();
} */

/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHEODOIBNRAVAOVIEN *pVw = (CBCTHEODOIBNRAVAOVIEN *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHEODOIBNRAVAOVIEN *pVw = (CBCTHEODOIBNRAVAOVIEN *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHEODOIBNRAVAOVIEN *pVw = (CBCTHEODOIBNRAVAOVIEN *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnListDeleteItem();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTHEODOIBNRAVAOVIEN* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIEN *)pWnd)->OnDeptAddNew();
}*/
static int _OnAddBCTHEODOIBNRAVAOVIENFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnAddBCTHEODOIBNRAVAOVIEN();
} 
static int _OnEditBCTHEODOIBNRAVAOVIENFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnEditBCTHEODOIBNRAVAOVIEN();
} 
static int _OnDeleteBCTHEODOIBNRAVAOVIENFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnDeleteBCTHEODOIBNRAVAOVIEN();
} 
static int _OnSaveBCTHEODOIBNRAVAOVIENFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnSaveBCTHEODOIBNRAVAOVIEN();
} 
static int _OnCancelBCTHEODOIBNRAVAOVIENFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIEN*)pWnd)->OnCancelBCTHEODOIBNRAVAOVIEN();
} 
CBCTHEODOIBNRAVAOVIEN::CBCTHEODOIBNRAVAOVIEN(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHEODOIBNRAVAOVIEN::~CBCTHEODOIBNRAVAOVIEN(){
}
void CBCTHEODOIBNRAVAOVIEN::OnCreateComponents(){
	m_wndList.Create(this,0, 0, 0, 50); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 435, 55); 
	m_wndOutpatient.Create(this, _T("Outpatient"), 440, 30, 540, 55);
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 6, 5, 1015, 60);
	m_wndDepartmentLab.Create(this, _T("&Department"), 545, 30, 625, 55);
	m_wndDept.Create(this,630, 30, 840, 55); 
	//m_wndLoad.Create(this, _T("&Load"), 845, 30, 925, 55);
	m_wndExport.Create(this, _T("&Export"), 930, 30, 1010, 55);
	
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(false);

	m_wndList.InsertColumn(0, _T("Ng\xE0y"), CFMT_TEXT, 40);

	m_wndList.InsertColumn(1, _T("S\x1ED1 \x63\x169"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(2, _T("V\xE0o"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("\x43K \x111\x1EBFn"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);
	TranslateString(_T("T\x103ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 1, 1, 4, false, false);

	m_wndList.InsertColumn(5, _T("R\x61 vi\x1EC7n"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(6, _T("N\x1EB7ng XV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("\x43K \x111i"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("\x43V"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(9, _T("T\x1EED vong"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(10, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);
	TranslateString(_T("Gi\x1EA3m"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 5, 1, 10, false, false);

	m_wndList.InsertColumn(11, _T("\x43\xF2n l\x1EA1i"), CFMT_MONEY, 50);
	
	m_wndList.InsertColumn(12, _T("T\x1B0\x1EDBng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(13, _T("3//,4//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("\x32//-\x43.S\x129"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(15, _T("\x42HQTN"), CFMT_MONEY, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 12, 1, 15, false, false);
	
	m_wndList.InsertColumn(16, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	
	m_wndList.InsertColumn(17, _T("T\x1B0\x1EDBng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(18, _T("3//,4//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(19, _T("\x32//-\x43.S\x129"), CFMT_MONEY, 50);
	TranslateString(_T("H\x1B0u"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 17, 1, 19, false, false);
	
	m_wndList.InsertColumn(20, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(21, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(22, _T("\x43.S\xE1\x63h"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(23, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(24, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(25, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(26, _T("N\x1EE3 th\x1EBB"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(27, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);

}
void CBCTHEODOIBNRAVAOVIEN::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CBCTHEODOIBNRAVAOVIEN::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCTHEODOIBNRAVAOVIEN::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);

}
void CBCTHEODOIBNRAVAOVIEN::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHEODOIBNRAVAOVIEN::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHEODOIBNRAVAOVIEN::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_bOutpatient = FALSE;

}
int CBCTHEODOIBNRAVAOVIEN::SetMode(int nMode){
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
/*void CBCTHEODOIBNRAVAOVIEN::OnFromDateChange(){
	
} */
/*void CBCTHEODOIBNRAVAOVIEN::OnFromDateSetfocus(){
	
} */
/*void CBCTHEODOIBNRAVAOVIEN::OnFromDateKillfocus(){
	
} */
int CBCTHEODOIBNRAVAOVIEN::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHEODOIBNRAVAOVIEN::OnToDateChange(){
	
} */
/*void CBCTHEODOIBNRAVAOVIEN::OnToDateSetfocus(){
	
} */
/*void CBCTHEODOIBNRAVAOVIEN::OnToDateKillfocus(){
	
} */
int CBCTHEODOIBNRAVAOVIEN::OnToDateCheckValue(){
	return 0;
} 
void CBCTHEODOIBNRAVAOVIEN::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTHEODOIBNRAVAOVIEN::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHEODOIBNRAVAOVIEN::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_szDeptKey.IsEmpty())
		return;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CExcel xls;
	CDate dte;
	//init with m_szFromDate
	dte.ParseDate(m_szFromDate);
	CString szSQL, tmpStr;
	int nTmp = 0, nPrev_Qty = 0, nRemain = 0, nRemain2 = 0;
	int nDataCol[29];
	for (int i = 0; i < 29; i++)
		nDataCol[i] = 0;
	int nRow = 0;
	if (!xls.Load(_T("Exports\\MAU_THEODOIBENHNHANRAVAOVIEN.xls"))){
		AfxMessageBox(_T("Exports\\MAU_THEODOIBENHNHANRAVAOVIEN.xls"));
		return;
	}
	//xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//xls.SetMerge(0, 0, 0, 5);
	//xls.SetMerge(1, 1, 0, 5);
	//xls.SetMerge(2, 2, 0, 26);
	//xls.SetMerge(3, 3, 0, 26);
	//xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER , true, 10);
	//xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER, true, 10);
	////TODO: Write Excel Name
	tmpStr.Format(_T("%s %s"), _T("TH\x45O \x44\xD5I \x42N R\x41 V\xC0O VI\x1EC6N KHO\x41"), m_szDeptKey);
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr, 4098, true);
	////TODO: Write Column Header
	//xls.SetColumnWidth(0, 6);
	//xls.SetColumnWidth(1, 6);
	//xls.SetColumnWidth(2, 6);
	//xls.SetColumnWidth(3, 6);
	//xls.SetColumnWidth(4, 6);
	//xls.SetColumnWidth(5, 6);
	//xls.SetColumnWidth(6, 6);
	//xls.SetColumnWidth(7, 6);
	//xls.SetColumnWidth(8, 6);
	//xls.SetColumnWidth(9, 6);
	//xls.SetColumnWidth(10, 6);
	//xls.SetColumnWidth(11, 6);
	//xls.SetColumnWidth(12, 6);
	//xls.SetColumnWidth(13, 6);
	//xls.SetColumnWidth(14, 6);
	//xls.SetColumnWidth(15, 6);
	//xls.SetColumnWidth(16, 6);
	//xls.SetColumnWidth(17, 6);
	//xls.SetColumnWidth(18, 6);
	//xls.SetColumnWidth(19, 6);
	//xls.SetColumnWidth(20, 6);
	//xls.SetColumnWidth(21, 6);
	//xls.SetColumnWidth(22, 6);
	//xls.SetColumnWidth(23, 6);
	//xls.SetColumnWidth(24, 6);
	//xls.SetColumnWidth(25, 6);
	//xls.SetColumnWidth(26, 6);

	//xls.SetCellMergedRows(0, 4, 2);
	//xls.SetCellMergedColumns(1, 4, 4);
	//xls.SetCellMergedColumns(5, 4, 6);
	//xls.SetCellMergedRows(11, 4, 2);
	//xls.SetCellMergedColumns(12, 4, 4);
	//xls.SetCellMergedRows(16, 4, 2);
	//xls.SetCellMergedColumns(17, 4, 3);
	//xls.SetCellMergedRows(20, 4, 2);
	//xls.SetCellMergedRows(21, 4, 2);
	//xls.SetCellMergedRows(22, 4, 2);
	//xls.SetCellMergedRows(23, 4, 2);
	//xls.SetCellMergedRows(24, 4, 2);
	//xls.SetCellMergedRows(25, 4, 2);
	//xls.SetCellMergedRows(26, 4, 2);
	//xls.SetCellText(0, 4, _T("Ng\xE0y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(1, 4, _T("T\x103ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(1, 5, _T("S\x1ED1 \x63\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(2, 5, _T("V\xE0o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(3, 5, _T("\x43K \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(4, 5, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(5, 4, _T("Gi\x1EA3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(5, 5, _T("V\x1EC1 \x111\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(6, 5, _T("\x43K \x111i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(7, 5, _T("\x43V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(8, 5, _T("T\x1EED vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(9, 5, _T("N\x1EB7ng \x58V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(10, 5, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(11, 4, _T("\x43\xF2n l\x1EA1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(12, 4, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(12, 5, _T("T\x1B0\x1EDBng \x63\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(13, 5, _T("\x33//-\x34//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(14, 5, _T("\x32//-\x43.s\x129"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(15, 5, _T("\x42HQ t\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(16, 4, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(17, 4, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(17, 5, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(18, 5, _T("\x33//-\x34//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(19, 5, _T("\x32//-\x43.s\x129"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(20, 4, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(21, 4, _T("T\x45<\x36T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(22, 4, _T("\x43.s\xE1\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(23, 4, _T("\x44\x1ECB\x63h v\x1EE5"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(24, 4, _T("\x42HYT kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(25, 4, _T("\x42HTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(26, 4, _T("N\x1EE3 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	//xls.SetCellText(27, 4, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, 4098);
	nRow = 10;

	//so cu
	szSQL = GetQuery_PrevQty();
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("prev_qty"), nPrev_Qty);
	//so cu theo doi tuong
	szSQL = GetQuery_PrevQtybyObj();
	rs1.ExecSQL(szSQL);
	rs1.GetValue(_T("c1"), nDataCol[9]);
	rs1.GetValue(_T("c2"), nDataCol[10]);
	rs1.GetValue(_T("c3"), nDataCol[11]);
	rs1.GetValue(_T("c4"), nDataCol[12]);
	rs1.GetValue(_T("c5"), nDataCol[13]);
	rs1.GetValue(_T("c6"), nDataCol[14]);
	rs1.GetValue(_T("c7"), nDataCol[15]);
	rs1.GetValue(_T("c8"), nDataCol[16]);
	rs1.GetValue(_T("c9"), nDataCol[17]);
	rs1.GetValue(_T("c10"), nDataCol[18]);
	rs1.GetValue(_T("c11"), nDataCol[19]);
	rs1.GetValue(_T("c12"), nDataCol[20]);
	rs1.GetValue(_T("c13"), nDataCol[21]);
	rs1.GetValue(_T("c14"), nDataCol[22]);
	rs1.GetValue(_T("c15"), nDataCol[23]);
	rs1.GetValue(_T("c16"), nDataCol[24]);
	rs1.GetValue(_T("c17"), nDataCol[25]);
	rs1.GetValue(_T("c18"), nDataCol[26]);
	//gia tri tang giam
	szSQL = GetQuery_VarianceNumber();
	rs.ExecSQL(szSQL);
	
	while (!rs.IsEOF())
	{	
		rs.GetValue(_T("admit_date"), tmpStr);
		while (dte.Compare(tmpStr) < 0)
		{
			xls.SetCellText(0, nRow, int2str(dte.GetDay()), 4098);
			xls.SetCellText(1, nRow, int2str(nPrev_Qty), FMT_NUMBER1 | FMT_RIGHT, true);
			xls.SetCellText(2, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(3, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(4, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(5, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(6, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(7, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(8, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(9, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(10, nRow, _T("0"), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(11, nRow, int2str(nPrev_Qty), FMT_NUMBER1 | FMT_RIGHT, true);
			xls.SetCellText(12, nRow, int2str(nDataCol[9]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(13, nRow, int2str(nDataCol[10]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(14, nRow, int2str(nDataCol[11]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(15, nRow, int2str(nDataCol[12]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(16, nRow, int2str(nDataCol[13]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(17, nRow, int2str(nDataCol[14]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(18, nRow, int2str(nDataCol[15]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(19, nRow, int2str(nDataCol[16]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(20, nRow, int2str(nDataCol[17]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(21, nRow, int2str(nDataCol[18]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(22, nRow, int2str(nDataCol[19]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(23, nRow, int2str(nDataCol[20]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(24, nRow, int2str(nDataCol[21]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(25, nRow, int2str(nDataCol[22]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(26, nRow, int2str(nDataCol[23]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(27, nRow, int2str(nDataCol[24]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(28, nRow, int2str(nDataCol[25]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(29, nRow, int2str(nDataCol[26]), FMT_NUMBER1 | FMT_RIGHT);
			xls.SetCellText(30, nRow, int2str(nPrev_Qty), FMT_NUMBER1 | FMT_RIGHT, true);
			nRow++;
			dte++;//Tang ngay den khi = ngay ra vao 
		}
		rs.GetValue(_T("in_qty"), nDataCol[0]);
		rs.GetValue(_T("movein_qty"), nDataCol[1]);
		nDataCol[2] = nDataCol[0] + nDataCol[1];
		rs.GetValue(_T("return_unit"), nDataCol[3]);
		rs.GetValue(_T("moveout_qty"), nDataCol[5]);
		rs.GetValue(_T("transfer_qty"), nDataCol[6]);
		rs.GetValue(_T("dead"), nDataCol[7]);
		rs.GetValue(_T("nxv"), nDataCol[4]);
		nDataCol[8] = nDataCol[3] + nDataCol[4] + nDataCol[5] + nDataCol[6] + nDataCol[7];
		nRemain = nPrev_Qty + nDataCol[2] - nDataCol[8];

		rs.GetValue(_T("c1"), nTmp);
		nDataCol[9] += nTmp;
		rs.GetValue(_T("c2"), nTmp);
		nDataCol[10] += nTmp;
		rs.GetValue(_T("c3"), nTmp);
		nDataCol[11] += nTmp;
		rs.GetValue(_T("c4"), nTmp);
		nDataCol[12] += nTmp;
		rs.GetValue(_T("c5"), nTmp);
		nDataCol[13] += nTmp;
		rs.GetValue(_T("c6"), nTmp);
		nDataCol[14] += nTmp;
		rs.GetValue(_T("c7"), nTmp);
		nDataCol[15] += nTmp;
		rs.GetValue(_T("c8"), nTmp);
		nDataCol[16] += nTmp;
		rs.GetValue(_T("c9"), nTmp);
		nDataCol[17] += nTmp;
		rs.GetValue(_T("c10"), nTmp);
		nDataCol[18] += nTmp;
		rs.GetValue(_T("c11"), nTmp);
		nDataCol[19] += nTmp;
		rs.GetValue(_T("c12"), nTmp);
		nDataCol[20] += nTmp;
		rs.GetValue(_T("c13"), nTmp);
		nDataCol[21] += nTmp;
		rs.GetValue(_T("c14"), nTmp);
		nDataCol[22] += nTmp;
		rs.GetValue(_T("c15"), nTmp);
		nDataCol[23] += nTmp;
		rs.GetValue(_T("c16"), nTmp);
		nDataCol[24] += nTmp;
		rs.GetValue(_T("c17"), nTmp);
		nDataCol[25] += nTmp;
		rs.GetValue(_T("c18"), nTmp);
		nDataCol[26] += nTmp;

		xls.SetCellText(0, nRow, int2str(dte.GetDay()), 4098);
		xls.SetCellText(1, nRow, int2str(nPrev_Qty), FMT_NUMBER1 | FMT_RIGHT, true);
		xls.SetCellText(2, nRow, int2str(nDataCol[0]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(3, nRow, int2str(nDataCol[1]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(4, nRow, int2str(nDataCol[2]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(5, nRow, int2str(nDataCol[3]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(6, nRow, int2str(nDataCol[4]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(7, nRow, int2str(nDataCol[5]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(8, nRow, int2str(nDataCol[6]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(9, nRow, int2str(nDataCol[7]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(10, nRow, int2str(nDataCol[8]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(11, nRow, int2str(nRemain), FMT_NUMBER1 | FMT_RIGHT, true);
		xls.SetCellText(12, nRow, int2str(nDataCol[9]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(13, nRow, int2str(nDataCol[10]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(14, nRow, int2str(nDataCol[11]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(15, nRow, int2str(nDataCol[12]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(16, nRow, int2str(nDataCol[13]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(17, nRow, int2str(nDataCol[14]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(18, nRow, int2str(nDataCol[15]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(19, nRow, int2str(nDataCol[16]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(20, nRow, int2str(nDataCol[17]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(21, nRow, int2str(nDataCol[18]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(22, nRow, int2str(nDataCol[19]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(23, nRow, int2str(nDataCol[20]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(24, nRow, int2str(nDataCol[21]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(25, nRow, int2str(nDataCol[22]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(26, nRow, int2str(nDataCol[23]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(27, nRow, int2str(nDataCol[24]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(28, nRow, int2str(nDataCol[25]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(29, nRow, int2str(nDataCol[26]), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(30, nRow, int2str(nRemain), FMT_NUMBER1 | FMT_RIGHT, true);
		nPrev_Qty = nRemain;
		nRow++;
		dte++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Theo doi bn ra vao vien.xls"));	
} 
void CBCTHEODOIBNRAVAOVIEN::OnListDblClick(){
	
} 
void CBCTHEODOIBNRAVAOVIEN::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHEODOIBNRAVAOVIEN::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHEODOIBNRAVAOVIEN::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CDate dte;
	//init with m_szFromDate
	dte.ParseDate(m_szFromDate);
	CString szSQL, tmpStr, tmpStr2;
	int nTmp = 0, nPrev_Qty = 0, nRemain = 0, nRemain2 = 0;
	int nDataCol[28];
	for (int i = 0; i < 28; i++)
		nDataCol[i] = 0;
	//so cu
	szSQL = GetQuery_PrevQty();
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("prev_qty"), nPrev_Qty);
	//so cu theo doi tuong
	szSQL = GetQuery_PrevQtybyObj();
	rs1.ExecSQL(szSQL);
	rs1.GetValue(_T("c1"), nDataCol[9]); 
	rs1.GetValue(_T("c2"), nDataCol[10]);
	rs1.GetValue(_T("c3"), nDataCol[11]);
	rs1.GetValue(_T("c4"), nDataCol[12]);
	rs1.GetValue(_T("c5"), nDataCol[13]);
	rs1.GetValue(_T("c6"), nDataCol[14]);
	rs1.GetValue(_T("c7"), nDataCol[15]);
	rs1.GetValue(_T("c8"), nDataCol[16]);
	rs1.GetValue(_T("c9"), nDataCol[17]);
	rs1.GetValue(_T("c10"), nDataCol[18]);
	rs1.GetValue(_T("c11"), nDataCol[19]);
	rs1.GetValue(_T("c12"), nDataCol[20]);
	rs1.GetValue(_T("c13"), nDataCol[21]);
	rs1.GetValue(_T("c14"), nDataCol[22]);
	rs1.GetValue(_T("c15"), nDataCol[23]);
	//gia tri tang giam
	szSQL = GetQuery_VarianceNumber();
	rs.ExecSQL(szSQL);

	while (!rs.IsEOF()&&!rs1.IsEOF())
	{	
		rs.GetValue(_T("admit_date"), tmpStr);
		while (dte.Compare(tmpStr) < 0)
		{
			m_wndList.AddItems(int2str(dte.GetDay()),
								int2str(nPrev_Qty),
								int2str(0), 
								int2str(0), 
								int2str(0), 
								int2str(0), 
								int2str(0), 
								int2str(0), 
								int2str(0), 
								int2str(0), 
								int2str(0),
								int2str(nPrev_Qty),
								int2str(nDataCol[9]), 
								int2str(nDataCol[10]), 
								int2str(nDataCol[11]), 
								int2str(nDataCol[12]),
								int2str(nDataCol[13]),
								int2str(nDataCol[14]), 
								int2str(nDataCol[15]), 
								int2str(nDataCol[16]), 
								int2str(nDataCol[17]),
								int2str(nDataCol[18]),
								int2str(nDataCol[19]), 
								int2str(nDataCol[20]), 
								int2str(nDataCol[21]), 
								int2str(nDataCol[22]),
								int2str(nDataCol[23]),
								int2str(nPrev_Qty), NULL);
			dte++;//Tang ngay den khi = ngay ra vao 
		}
		rs.GetValue(_T("in_qty"), nDataCol[0]);
		rs.GetValue(_T("movein_qty"), nDataCol[1]);
		nDataCol[2] = nDataCol[0] + nDataCol[1];
		rs.GetValue(_T("return_unit"), nDataCol[3]);
		rs.GetValue(_T("moveout_qty"), nDataCol[5]);
		rs.GetValue(_T("transfer_qty"), nDataCol[6]);
		rs.GetValue(_T("dead"), nDataCol[7]);
		rs.GetValue(_T("nxv"), nDataCol[4]);
		nDataCol[8] = nDataCol[3] + nDataCol[4] + nDataCol[5] + nDataCol[6] + nDataCol[7];
		nRemain = nPrev_Qty + nDataCol[2] - nDataCol[8];
		rs.GetValue(_T("c1"), nTmp);
		nDataCol[9] += nTmp;
		rs.GetValue(_T("c2"), nTmp);
		nDataCol[10] += nTmp;
		rs.GetValue(_T("c3"), nTmp);
		nDataCol[11] += nTmp;
		rs.GetValue(_T("c4"), nTmp);
		nDataCol[12] += nTmp;
		rs.GetValue(_T("c5"), nTmp);
		nDataCol[13] += nTmp;
		rs.GetValue(_T("c6"), nTmp);
		nDataCol[14] += nTmp;
		rs.GetValue(_T("c7"), nTmp);
		nDataCol[15] += nTmp;
		rs.GetValue(_T("c8"), nTmp);
		nDataCol[16] += nTmp;
		rs.GetValue(_T("c9"), nTmp);
		nDataCol[17] += nTmp;
		rs.GetValue(_T("c10"), nTmp);
		nDataCol[18] += nTmp;
		rs.GetValue(_T("c11"), nTmp);
		nDataCol[19] += nTmp;
		rs.GetValue(_T("c12"), nTmp);
		nDataCol[20] += nTmp;
		rs.GetValue(_T("c13"), nTmp);
		nDataCol[21] += nTmp;
		rs.GetValue(_T("c14"), nTmp);
		nDataCol[22] += nTmp;
		rs.GetValue(_T("c15"), nTmp);
		nDataCol[23] += nTmp;

		m_wndList.AddItems(int2str(dte.GetDay()),
								int2str(nPrev_Qty),
								int2str(nDataCol[0]), 
								int2str(nDataCol[1]), 
								int2str(nDataCol[2]), 
								int2str(nDataCol[3]), 
								int2str(nDataCol[4]), 
								int2str(nDataCol[5]), 
								int2str(nDataCol[6]), 
								int2str(nDataCol[7]),
								int2str(nDataCol[8]),
								int2str(nRemain),
								int2str(nDataCol[9]), 
								int2str(nDataCol[10]), 
								int2str(nDataCol[11]), 
								int2str(nDataCol[12]),
								int2str(nDataCol[13]),
								int2str(nDataCol[14]), 
								int2str(nDataCol[15]), 
								int2str(nDataCol[16]), 
								int2str(nDataCol[17]),
								int2str(nDataCol[18]),
								int2str(nDataCol[19]), 
								int2str(nDataCol[20]), 
								int2str(nDataCol[21]), 
								int2str(nDataCol[22]),
								int2str(nDataCol[23]),
								int2str(nRemain),NULL);
		nPrev_Qty = nRemain;
		dte++;
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTHEODOIBNRAVAOVIEN::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHEODOIBNRAVAOVIEN::OnDeptSelendok(){
	 
}
/*void CBCTHEODOIBNRAVAOVIEN::OnDeptSetfocus(){
	
}*/
/*void CBCTHEODOIBNRAVAOVIEN::OnDeptKillfocus(){
	
}*/
long CBCTHEODOIBNRAVAOVIEN::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CBCTHEODOIBNRAVAOVIEN::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCTHEODOIBNRAVAOVIEN::OnAddBCTHEODOIBNRAVAOVIEN(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHEODOIBNRAVAOVIEN::OnEditBCTHEODOIBNRAVAOVIEN(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHEODOIBNRAVAOVIEN::OnDeleteBCTHEODOIBNRAVAOVIEN(){
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
 		OnCancelBCTHEODOIBNRAVAOVIEN();
 	}
	return 0;
}
int CBCTHEODOIBNRAVAOVIEN::OnSaveBCTHEODOIBNRAVAOVIEN(){
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
 		//OnBCTHEODOIBNRAVAOVIENListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHEODOIBNRAVAOVIEN::OnCancelBCTHEODOIBNRAVAOVIEN(){
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
int CBCTHEODOIBNRAVAOVIEN::OnBCTHEODOIBNRAVAOVIENListLoadData(){
	return 0;
}
CString CBCTHEODOIBNRAVAOVIEN::GetQuery_PrevQty(){
	CString szSQL, szWhere;
	//Lay Bn dang dieu tri truoc nut trai thoi diem chay bc
	//Lay Bn vao truoc nut trai, ket thuc sau nut trai
	//Bn ton dau ki
	szWhere = _T(" AND htr_docno NOT IN (SELECT hnr_docno FROM hms_newborn_record)");
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'N') = '%s'"), m_bOutpatient?_T("Y"):_T("N"));

	szSQL.Format(_T(" SELECT SUM(prev_qty) prev_qty") \
		_T(" FROM") \
		_T("   (SELECT COUNT(DISTINCT htr_docno) prev_qty") \
		_T("   FROM hms_treatment_record") \
		_T("   WHERE htr_status  = 'I'") \
		_T("   AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND htr_deptid    = '%s' %s") \
		_T("   UNION ALL") \
		_T("   SELECT COUNT(DISTINCT htr_docno)") \
		_T("   FROM hms_treatment_record") \
		_T("   WHERE htr_status       = 'T'") \
		_T("   AND htr_admitdate      < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND htr_deptid         = '%s' %s") \
		_T("   )"), m_szFromDate, m_szDeptKey, szWhere, m_szFromDate, m_szFromDate, m_szDeptKey, szWhere);
	return szSQL;
}

CString CBCTHEODOIBNRAVAOVIEN::GetQuery_PrevQtybyObj(){
	CString szSQL, szWhere;
	//Lay Bn dang dieu tri truoc nut phai thoi diem chay bc
	//Lay Bn vao truoc nut phai, ket thuc sau nut phai
	//Bn ton dau ki theo doi tuong
	szWhere = _T(" AND htr_docno NOT IN (SELECT hnr_docno FROM hms_newborn_record)");
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'N') = '%s'"), m_bOutpatient?_T("Y"):_T("N"));
	szSQL.Format(_T(" SELECT SUM(c1)  c1, ") \
		_T("        SUM(c2)  c2, ") \
		_T("        SUM(c3)  c3, ") \
		_T("        SUM(c4)  c4, ") \
		_T("        SUM(c5)  c5, ") \
		_T("        SUM(c6)  c6, ") \
		_T("        SUM(c7)  c7, ") \
		_T("        SUM(c8)  c8, ") \
		_T("        SUM(c9)  c9, ") \
		_T("        SUM(c10) c10, ") \
		_T("        SUM(c11) c11, ") \
		_T("        SUM(c12) c12, ") \
		_T("        SUM(c13) c13, ") \
		_T("        SUM(c14) c14, ") \
		_T("        SUM(c15) c15, ") \
		_T("        SUM(c16) c16, ") \
		_T("        SUM(c17) c17, ") \
		_T("        SUM(c18) c18, ") \
		_T("        SUM(total) total") \
		_T(" FROM   (    SELECT CASE WHEN hd_object IN (1, 13) AND doc_rank BETWEEN 15 AND 24 AND doc_rank NOT IN (19, 20) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c1, ") \
		_T("                CASE WHEN hd_object IN (1, 13) AND (doc_rank IN ( 13, 14 ) OR ss_vndesc IN (13, 14))THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c2, ") \
		_T("                CASE WHEN hd_object IN (1, 13) AND (doc_rank <13 OR doc_rank IN (19) OR NVL(to_number(ss_vndesc), 99) < 13) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c3, ") \
		_T("				0 c4,") \
		_T("                CASE WHEN hd_object IN (11) AND doc_rank BETWEEN 15 AND 24 AND doc_rank NOT IN (19, 20) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c5, ") \
		_T("                CASE WHEN hd_object IN (11) AND (doc_rank IN ( 13, 14 ) OR ss_vndesc IN (13, 14))THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c6, ") \
		_T("                CASE WHEN hd_object IN (11) AND (doc_rank <13 OR doc_rank IN (19) OR NVL(to_number(ss_vndesc), 99) < 13) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c7, ") \
		_T("                CASE WHEN hd_object =10 THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c8, ") \
		_T("                CASE WHEN hd_object IN(2) and doc_rank BETWEEN 15 AND 24 AND doc_rank NOT IN (19, 20) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c9, ") \
		_T("                CASE WHEN hd_object IN(2) and (doc_rank IN ( 13, 14 ) or ss_vndesc IN (13, 14)) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c10, ") \
		_T("                CASE WHEN hd_object IN(2) and (doc_rank <13 or doc_rank IN (19) or NVL(to_number(ss_vndesc), 99) < 13) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c11, ") \
		_T("                CASE WHEN hd_object = 8 THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c12, ") \
		_T("                CASE WHEN hd_object IN (6, 9) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c13, ") \
		_T("                CASE WHEN hd_object = 3 THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c14, ") \
		_T("                CASE WHEN hd_object = 7  THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c15, ") \
		_T("                CASE WHEN hd_object IN (4) THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c16, ") \
		_T("                CASE WHEN hd_object = 5 THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c17, ") \
		_T("                CASE WHEN hd_object = 12 THEN 1 ") \
		_T("                ELSE 0 ") \
		_T("                END c18, ") \
		_T("                1   total ") \
		_T("         FROM   (SELECT    distinct htr_docno, ") \
		_T("                                    hd_object, ") \
		_T("                                    hp_occupation, ") \
		_T("                                    NVL(hp_rank, hd_rank) doc_rank ") \
		_T("                 FROM      hms_treatment_record ") \
		_T("                 LEFT JOIN hms_doc ON ( htr_docno = hd_docno ) ") \
		_T("                 LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
		_T("                 WHERE     htr_status = 'I' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T("				 AND htr_deptid = '%s' %s") \
		_T("        UNION ALL ") \
		_T("        SELECT distinct htr_docno, hd_object, hp_occupation, NVL(hp_rank, hd_rank) doc_rank ") \
		_T("        FROM   hms_treatment_record ") \
		_T("        LEFT JOIN hms_doc ON ( htr_docno = hd_docno ) ") \
		_T("        LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
		_T("        WHERE  htr_status = 'T' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T("		AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("		AND htr_deptid = '%s' %s)") \
		_T("		LEFT JOIN sys_sel ON (ss_id = 'hms_rank' AND ss_code = doc_rank AND to_number(ss_code) > 25)) "), m_szFromDate, m_szDeptKey, szWhere, 
		m_szFromDate, m_szFromDate, m_szDeptKey, szWhere);
	return szSQL;
}

CString CBCTHEODOIBNRAVAOVIEN::GetQuery_VarianceNumber(){
	//Lay BN ra vao khoa
	//Lay BN chuyen kham giua cac khoa
	/*+tach bn cnvqp*/
	/*-fix code */
	CString szSQL, szWhere;
	szWhere = _T(" AND hd_docno NOT IN (SELECT hnr_docno FROM hms_newborn_record)");
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'N') = '%s'"), m_bOutpatient?_T("Y"):_T("N"));
	szSQL.Format(_T("WITH tbl_inout_patient AS") \
		_T("     (SELECT TRUNC(htr_admitdate) admit_date,") \
		_T("       1 in_qty,") \
		_T("       0 movein_qty,") \
		_T("       0 return_unit,") \
		_T("       0 moveout_qty,") \
		_T("       0 transfer_qty,") \
		_T("       0 dead,") \
		_T("       0 nxv,") \
		_T("       1 congtru,") \
		_T("       htr_docno, htr_outpatient") \
		_T("     FROM hms_treatment_record") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON(hcr_docno      = htr_docno )") \
		_T("     WHERE htr_status <> 'A' ") \
		_T("     AND ( htr_idx = 1 OR ( htr_idx > 1  AND hcr_admitdept = htr_deptid ) )") \
		_T("     AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     AND htr_deptid = '%s'") \
		_T("     UNION ALL") \
		_T("     SELECT TRUNC(htr_dischargedate) admit_date,") \
		_T("       0 in_qty,") \
		_T("       0 movein_qty,") \
		_T("       CASE") \
		_T("         WHEN (htr_suggestion NOT IN('M','F')") \
		_T("         AND NVL(hcr_result, 2) NOT      IN ( 4, 5, 6, 7 ) ) or (htr_suggestion='T'  AND NVL(hcr_result,2)     IN ( 5, 6 ) and htr_treattime <> hcr_treattime )") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END return_unit,") \
		_T("       0 moveout_qty,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion = 'F'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END transfer_qty,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion = 'T' and htr_treattime= hcr_treattime ") \
		_T("         AND hcr_result     IN ( 5, 6 )") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END dead,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion = 'T'") \
		_T("         AND hcr_result     IN ( 4, 7 )") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END nxv,") \
		_T("       CASE WHEN htr_suggestion <> 'M' THEN -1 ELSE 0 END cong_tru,") \
		_T("       htr_docno, htr_outpatient") \
		_T("     FROM hms_treatment_record") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON(hcr_docno     = htr_docno )") \
		_T("     WHERE htr_status = 'T' ") \
		_T("     AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     AND htr_deptid = '%s'") \
		_T("     UNION ALL") \
		_T("     SELECT TRUNC(htr_admitdate) admit_date,") \
		_T("       0 in_qty,") \
		_T("       1 movein_qty,") \
		_T("       0 return_unit,") \
		_T("       0 moveout_qty,") \
		_T("       0 transfer_qty,") \
		_T("       0 dead,") \
		_T("       0 nxv,") \
		_T("       1 cong_tru,") \
		_T("       htr_docno, htr_outpatient") \
		_T("     FROM hms_treatment_record") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON( hcr_docno      = htr_docno )") \
		_T("     WHERE htr_status  <> 'A' ") \
		_T("     AND htr_idx        > 1") \
		_T("     AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     AND htr_deptid = '%s'") \
		_T("     UNION ALL") \
		_T("     SELECT TRUNC(htr_dischargedate) admit_date,") \
		_T("       0 in_qty,") \
		_T("       0 movein_qty,") \
		_T("       0 return_qty,") \
		_T("       1 moveout_qty,") \
		_T("       0 transfer_qty,") \
		_T("       0 dead,") \
		_T("       0 nxv,") \
		_T("       -1 cong_tru,") \
		_T("       htr_docno, htr_outpatient") \
		_T("     FROM hms_treatment_record") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON (hcr_docno        = htr_docno)") \
		_T("     WHERE htr_suggestion ='M' ") \
		_T("     AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     AND htr_deptid = '%s'") \
		_T("     ),") \
		_T(" tbl_in_out_reduce AS") \
		_T("   (SELECT admit_date,") \
		_T("     in_qty,") \
		_T("     movein_qty,") \
		_T("     return_unit,") \
		_T("     moveout_qty,") \
		_T("     transfer_qty,") \
		_T("     dead,") \
		_T("     nxv,") \
		_T("	 hd_object, NVL(hp_rank, hd_rank) doc_rank,") \
		_T("     congtru") \
		_T("   FROM tbl_inout_patient") \
		_T("   LEFT JOIN hms_doc ON(hd_docno = htr_docno)") \
		_T("   LEFT JOIN hms_patient ON (hp_patientno = hd_patientno)") \
		_T("   WHERE 1=1 %s),") \
		_T(" tbl_inout_summary AS") \
		_T("   (SELECT admit_date,") \
		_T("     in_qty,") \
		_T("     movein_qty,") \
		_T("     return_unit,") \
		_T("     moveout_qty,") \
		_T("     transfer_qty,") \
		_T("     dead,") \
		_T("     nxv,") \
		_T("     CASE WHEN hd_object IN (1, 13) AND doc_rank   BETWEEN 15 AND 24 AND doc_rank NOT IN (19, 20) THEN congtru ELSE 0 END c1,") \
		_T("     CASE WHEN hd_object IN (1, 13) AND (doc_rank   IN ( 13, 14 ) or ss_vndesc IN (13, 14)) THEN congtru ELSE 0 END c2,") \
		_T("     CASE WHEN hd_object IN (1, 13) AND (doc_rank    <13 OR doc_rank IN (19) or NVL(to_number(ss_vndesc), 99) < 13) THEN congtru ELSE 0 END c3,") \
		_T("     0 c4,") \
		_T("     CASE WHEN hd_object IN (11) AND doc_rank   BETWEEN 15 AND 24 AND doc_rank NOT IN (19, 20) THEN congtru ELSE 0 END c5,") \
		_T("     CASE WHEN hd_object IN (11) AND (doc_rank   IN ( 13, 14 ) or ss_vndesc IN (13, 14)) THEN congtru ELSE 0 END c6,") \
		_T("     CASE WHEN hd_object IN (11) AND (doc_rank    <13 OR doc_rank IN (19) or NVL(to_number(ss_vndesc), 99) < 13) THEN congtru ELSE 0 END c7,") \
		_T("     CASE WHEN hd_object =10 THEN congtru ELSE 0 END c8,") \
		_T("     CASE WHEN hd_object IN(2) AND doc_rank   BETWEEN 15 AND 24 AND doc_rank NOT IN (19, 20) THEN congtru ELSE 0 END c9,") \
		_T("     CASE WHEN hd_object IN(2) AND (doc_rank    IN ( 13, 14 ) or ss_vndesc IN (13, 14)) THEN congtru ELSE 0 END c10,") \
		_T("     CASE WHEN hd_object IN(2) AND (doc_rank    <13 OR doc_rank IN (19) or NVL(to_number(ss_vndesc), 99) < 13) THEN congtru ELSE 0 END c11,") \
		_T("     CASE WHEN hd_object = 8 THEN congtru ELSE 0 END c12,") \
		_T("     CASE WHEN hd_object IN (6, 9) THEN congtru ELSE 0 END c13,") \
		_T("     CASE WHEN hd_object = 3 THEN congtru ELSE 0 END c14,") \
		_T("     CASE WHEN hd_object = 7 THEN congtru ELSE 0 END c15,") \
		_T("     CASE WHEN hd_object IN(4) THEN congtru ELSE 0 END c16,") \
		_T("     CASE WHEN hd_object = 5 THEN congtru ELSE 0 END c17,") \
		_T("     CASE WHEN hd_object = 12 THEN congtru ELSE 0 END c18,") \
		_T("     congtru total") \
		_T("  FROM tbl_in_out_reduce") \
		_T("  LEFT JOIN sys_sel ON (ss_id = 'hms_rank' AND ss_code = doc_rank AND to_number(ss_code) >=25))") \
		_T(" SELECT admit_date,") \
		_T("   SUM(in_qty) in_qty,") \
		_T("   SUM(movein_qty) movein_qty,") \
		_T("   SUM(return_unit) return_unit,") \
		_T("   SUM(moveout_qty) moveout_qty,") \
		_T("   SUM(transfer_qty) transfer_qty,") \
		_T("   SUM(dead) dead,") \
		_T("   SUM(nxv) nxv,") \
		_T("   SUM(c1) c1,") \
		_T("   SUM(c2) c2,") \
		_T("   SUM(c3) c3,") \
		_T("   SUM(c4) c4,") \
		_T("   SUM(c5) c5,") \
		_T("   SUM(c6) c6,") \
		_T("   SUM(c7) c7,") \
		_T("   SUM(c8) c8,") \
		_T("   SUM(c9) c9,") \
		_T("   SUM(c10) c10,") \
		_T("   SUM(c11) c11,") \
		_T("   SUM(c12) c12,") \
		_T("   SUM(c13) c13,") \
		_T("   SUM(c14) c14,") \
		_T("   SUM(c15) c15,") \
		_T("   SUM(c16) c16,") \
		_T("   SUM(c17) c17,") \
		_T("   SUM(c18) c18,") \
   		_T("   SUM(total) total") \
		_T(" FROM tbl_inout_summary") \
		_T(" GROUP BY admit_date") \
		_T(" ORDER BY admit_date"), m_szFromDate, m_szToDate, m_szDeptKey, m_szFromDate, m_szToDate, m_szDeptKey,
		m_szFromDate, m_szToDate, m_szDeptKey, m_szFromDate, m_szToDate, m_szDeptKey, szWhere);
	return szSQL;
}