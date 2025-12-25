#include "BCTHEODOIBNRAVAOVIENCACKHOA.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHEODOIBNRAVAOVIENCACKHOA *pVw = (CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHEODOIBNRAVAOVIENCACKHOA *pVw = (CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHEODOIBNRAVAOVIENCACKHOA *pVw = (CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnListDeleteItem();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTHEODOIBNRAVAOVIENCACKHOA* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CBCTHEODOIBNRAVAOVIENCACKHOA *)pWnd)->OnDeptAddNew();
}*/
static int _OnAddBCTHEODOIBNRAVAOVIENCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnAddBCTHEODOIBNRAVAOVIENCACKHOA();
} 
static int _OnEditBCTHEODOIBNRAVAOVIENCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnEditBCTHEODOIBNRAVAOVIENCACKHOA();
} 
static int _OnDeleteBCTHEODOIBNRAVAOVIENCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnDeleteBCTHEODOIBNRAVAOVIENCACKHOA();
} 
static int _OnSaveBCTHEODOIBNRAVAOVIENCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnSaveBCTHEODOIBNRAVAOVIENCACKHOA();
} 
static int _OnCancelBCTHEODOIBNRAVAOVIENCACKHOAFnc(CWnd *pWnd){
	 return ((CBCTHEODOIBNRAVAOVIENCACKHOA*)pWnd)->OnCancelBCTHEODOIBNRAVAOVIENCACKHOA();
} 
CBCTHEODOIBNRAVAOVIENCACKHOA::CBCTHEODOIBNRAVAOVIENCACKHOA(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHEODOIBNRAVAOVIENCACKHOA::~CBCTHEODOIBNRAVAOVIENCACKHOA(){
}
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnCreateComponents(){
	m_wndList.Create(this,0, 0, 0, 50); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 80, 55);
	m_wndFromDate.Create(this,85, 30, 210, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 30, 285, 55);
	m_wndToDate.Create(this,290, 30, 415, 55); 
	m_wndOutpatient.Create(this, _T("Outpatient"), 420, 30, 520, 55);
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1015, 60);
	m_wndDepartmentLab.Create(this, _T("&Department"), 525, 30, 600, 55);
	m_wndDept.Create(this,605, 30, 915, 55); 
	m_wndExport.Create(this, _T("&Export"), 920, 30, 1010, 55);


	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(false);

	m_wndList.InsertColumn(0, _T("Ng\xE0y"), FMT_TEXT, 40);

	m_wndList.InsertColumn(1, _T("S\x1ED1 \x63\x169"), FMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("V\xE0o"), FMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("\x43K \x111\x1EBFn"), FMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("\x43\x1ED9ng"), FMT_TEXT, 50);
	TranslateString(_T("T\x103ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 1, 1, 4, false, false);

	m_wndList.InsertColumn(5, _T("V\x1EC1 \x111\x1A1n v\x1ECB"), FMT_TEXT, 60);
	m_wndList.InsertColumn(6, _T("\x43K \x111i"), FMT_TEXT, 50);
	m_wndList.InsertColumn(7, _T("\x43V"), FMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("T\x1EED vong"), FMT_TEXT, 60);
	m_wndList.InsertColumn(9, _T("\x43\x1ED9ng"), FMT_TEXT, 50);
	TranslateString(_T("Gi\x1EA3m"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 5, 1, 9, false, false);

	m_wndList.InsertColumn(10, _T("\x43\xF2n l\x1EA1i"), FMT_TEXT, 50);

	m_wndList.InsertColumn(11, _T("T\x1B0\x1EDBng"), FMT_TEXT, 50);
	m_wndList.InsertColumn(12, _T("3//,4//"), FMT_TEXT, 50);
	m_wndList.InsertColumn(13, _T("\x32//-\x43.S\x129"), FMT_TEXT, 50);
	m_wndList.InsertColumn(14, _T("\x42HQTN"), FMT_TEXT, 50);
	TranslateString(_T("Qu\xE2n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 11, 1, 14, false, false);

	m_wndList.InsertColumn(15, _T("\x42HQ\x110"), FMT_TEXT, 50);

	m_wndList.InsertColumn(16, _T("T\x1B0\x1EDBng"), FMT_TEXT, 50);
	m_wndList.InsertColumn(17, _T("3//,4//"), FMT_TEXT, 50);
	m_wndList.InsertColumn(18, _T("\x32//-\x43.S\x129"), FMT_TEXT, 50);
	TranslateString(_T("H\x1B0u"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 16, 1, 18, false, false);

	m_wndList.InsertColumn(19, _T("\x42\x1EA1n"), FMT_TEXT, 50);
	m_wndList.InsertColumn(20, _T("TE<6T"), FMT_TEXT, 50);
	m_wndList.InsertColumn(21, _T("\x43.S\xE1\x63h"), FMT_TEXT, 50);
	m_wndList.InsertColumn(22, _T("DV"), FMT_TEXT, 50);
	m_wndList.InsertColumn(23, _T("BHK"), FMT_TEXT, 50);
	m_wndList.InsertColumn(24, _T("BHTN"), FMT_TEXT, 50);
	m_wndList.InsertColumn(25, _T("\x43\x1ED9ng"), FMT_TEXT, 50);

}
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);

	m_wndDept.InsertColumn(0, _T("ID"), FMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), FMT_TEXT, 150);
	m_wndDept.SetCheckBox(true);


/**/
}
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnSetWindowEvents(){
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
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	OnDeptLoadData();
	UpdateData(false);

}
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);

}
void CBCTHEODOIBNRAVAOVIENCACKHOA::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHEODOIBNRAVAOVIENCACKHOA::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHEODOIBNRAVAOVIENCACKHOA::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_bOutpatient = FALSE;

}
int CBCTHEODOIBNRAVAOVIENCACKHOA::SetMode(int nMode){
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
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnFromDateChange(){
	
} */
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnFromDateSetfocus(){
	
} */
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnFromDateKillfocus(){
	
} */
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnToDateChange(){
	
} */
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnToDateSetfocus(){
	
} */
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnToDateKillfocus(){
	
} */
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnToDateCheckValue(){
	return 0;
} 
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnPrintSelect(){
	//CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//CRecord rs(&pMF->m_db);
	//CRecord rs1(&pMF->m_db);
	//CString szSQL, szSQL1, tmpStr,tmpStr1, szTemp, szWhere;
	//UpdateData(TRUE);
	//BeginWaitCursor();
	//szWhere.Empty();
	//int nRow =0, nCol = 0;
	//CExcel xls;
	//xls.CreateSheet(1);
	//xls.SetWorksheet(0);

	//xls.SetColumnWidth(0, 12);
	//xls.SetColumnWidth(1, 3);
	//xls.SetColumnWidth(2, 4);
	//xls.SetColumnWidth(3, 4);
	//xls.SetColumnWidth(4, 6);
	//xls.SetColumnWidth(5, 5);
	//xls.SetColumnWidth(6, 4);
	//xls.SetColumnWidth(7, 4);
	//xls.SetColumnWidth(8, 6);
	//xls.SetColumnWidth(9, 6);
	//xls.SetColumnWidth(10, 6);
	//xls.SetColumnWidth(11, 8);
	//xls.SetColumnWidth(12, 4);
	//xls.SetColumnWidth(13, 4);
	//xls.SetColumnWidth(14, 6);
	//xls.SetColumnWidth(15, 3);
	//xls.SetColumnWidth(16, 8);
	//xls.SetColumnWidth(17, 3);
	//xls.SetColumnWidth(18, 4);
	//xls.SetColumnWidth(19, 4);
	//xls.SetColumnWidth(20, 4);
	//xls.SetColumnWidth(21, 3);
	//xls.SetColumnWidth(22, 3);
	//xls.SetColumnWidth(23, 3);
	//xls.SetColumnWidth(24, 4);
	//xls.SetColumnWidth(25, 6);
	//xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	//xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(0, 3, _T("TH\x45O \x44\xD5I \x42\x1EC6NH NH\xC2N R\x41 V\xC0O VI\x1EC6N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	//xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(0, 6, _T("Ng\xE0y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(1, 6, _T("T\x103ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(1, 7, _T("S\x1ED1 \x63\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(2, 7, _T("V\xE0o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(3, 7, _T("\x43K \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(4, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(5, 6, _T("Gi\x1EA3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(5, 7, _T("V\x1EC1 \x111\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(6, 7, _T("CK \x111i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(7, 7, _T("CV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(8, 7, _T("T\x1EED vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(9, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(10, 6, _T("\x43\xF2n l\x1EA1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(11, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(11, 7, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(12, 7, _T("3// - 4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(13, 7, _T("2// - C.s\x129"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(14, 7, _T("BHQTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(15, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(16, 6, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(16, 7, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(17, 7, _T("3// - 4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(18, 7, _T("2// - C.s\x129"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(19, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(20, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(21, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(22, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(23, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(24, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	//xls.SetCellText(25, 6, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	//xls.SetMerge(0, 0, 0, 4);
	//xls.SetMerge(1, 1, 0, 4);
	//xls.SetMerge(3, 3, 0, 25);
	//xls.SetMerge(4, 4, 0, 25);
	//xls.SetMerge(6, 7, 0, 0);
	//xls.SetMerge(6, 6, 1, 4);
	//xls.SetMerge(6, 6, 5, 9);
	//xls.SetMerge(6, 7, 10, 10);
	//xls.SetMerge(6, 6, 11, 14);
	//xls.SetMerge(6, 7, 15, 15);
	//xls.SetMerge(6, 6, 16, 18);
	//xls.SetMerge(6, 7, 19, 19);
	//xls.SetMerge(6, 7, 20, 20);
	//xls.SetMerge(6, 7, 21, 21);
	//xls.SetMerge(6, 7, 22, 22);
	//xls.SetMerge(6, 7, 23, 23);
	//xls.SetMerge(6, 7, 24, 24);
	//xls.SetMerge(6, 7, 25, 25);
	//nRow = 8;
	//nCol = 0;
	//CDate dte;
	//dte.ParseDate(m_szFromDate);

	//szSQL1 = GetQueryString1();
	//rs1.ExecSQL(szSQL1);
	//while (!rs1.IsEOF())
	//{
	//	rs1.GetValue(_T("ngay"), tmpStr);
	//	while (dte.Compare(tmpStr) < 0)
	//	{
	//		xls.SetCellText(0, nRow, int2str(dte.GetDay()), 4098);
	//		nRow++;
	//		dte++;//Tang ngay den khi = ngay ra vao 
	//	}
	//	xls.SetCellText(nCol+0, nRow, int2str(dte.GetDay()), FMT_TEXT);

	//	rs1.GetValue(_T("vaovien"), tmpStr);
	//	xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

	//	rs1.GetValue(_T("ckden"), tmpStr);
	//	xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

	//	rs1.GetValue(_T("congt"), tmpStr);
	//	xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

	//	rs1.GetValue(_T("ckden"), tmpStr);
	//	xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

	//	rs1.GetValue(_T("ravien"), tmpStr);
	//	xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

	//	rs1.GetValue(_T("ckdi"), tmpStr);
	//	xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

	//	rs1.GetValue(_T("chuyenvien"), tmpStr);
	//	xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

	//	rs1.GetValue(_T("tuvong"), tmpStr);
	//	xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

	//	rs1.GetValue(_T("congg"), tmpStr);
	//	xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
	//	dte++;
	//	nRow++;
	//	rs1.MoveNext();		
	//}
	//CString szFromDate;
	//nRow = 8;
	//nCol = 0;
	//dte.ParseDate(m_szFromDate);
	//dte++;
	//szSQL = GetQueryString();
	//rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"),szSQL);
	//while (!rs.IsEOF())
	//{
	//	rs.GetValue(_T("bncu"), tmpStr);
	//	xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

	//	dte++;
	//	nRow++;
	//	rs.MoveNext();		
	//}
	//EndWaitCursor();
	//xls.Save(_T("Exports\\THEO DOI BENH NHAN RA VAO VIEN.xls"));
	
}
 
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnExportSelect(){
	OnExportSelect_();
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("NG\xC0Y \x110I\x1EC0U TR\x1ECA \x43\x1EE6\x41 \x42N GI\x1EA2M KHO\x41 %s"), m_szDeptKey);
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 7, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 7, _T("3// - 4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 7, _T("2// - C.s\x129"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 7, _T("BHQTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 7, _T("3// - 4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 7, _T("2// - C.s\x129"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 6, _T("Kho\x61 \x63huy\x1EC3n \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(16, 6, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(3, 3, 0, 14);
	xls.SetMerge(4, 4, 0, 14);
	xls.SetMerge(6, 7, 0, 0);
	xls.SetMerge(6, 6, 1, 4);
	xls.SetMerge(6, 7, 5, 5);
	xls.SetMerge(6, 6, 6, 8);
	xls.SetMerge(6, 7, 9, 9);
	xls.SetMerge(6, 7, 10, 10);
	xls.SetMerge(6, 7, 11, 11);
	xls.SetMerge(6, 7, 12, 12);
	xls.SetMerge(6, 7, 13, 13);
	xls.SetMerge(6, 7, 14, 14);
	xls.SetMerge(6, 7, 15, 15);
	xls.SetMerge(6, 7, 16, 16);
	nRow = 8;
	nCol = 0;
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	int nIdx = 1;
	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);

		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c3"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c4"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c5"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c6"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c7"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c8"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c9"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c10"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c11"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c12"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c13"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("c14"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tdeptid"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Ngay nam dieu tri cua bn giam khoa.xls"));

	
}

void CBCTHEODOIBNRAVAOVIENCACKHOA::OnExportSelect_(){
	UpdateData();
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szNewGroup, szOldGroup;
	bool bNewCol = false;
	int nColPos = 0, nTmp = 0, nRow = 0, nIdx = 1;
	double nTotalBN[17], nTotalNDT[17], nTotalP[17], nTotalD[17];
	int nTotalPatient = 0;
	for (int i = 0; i < 18; i++)
	{
		nTotalBN[i] = 0;
		nTotalNDT[i] = 0;
		nTotalP[i] = 0;
		nTotalD[i] = 0;
	}
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CExcel xls;
	if (!xls.Load(_T("Exports\\MAU_NGAYNAMDIEUTRICUABENHNHANGIAM.xls"))){
		AfxMessageBox(_T("Exports\\MAU_NGAYNAMDIEUTRICUABENHNHANGIAM.xls"));
		return;
	}
	xls.SetWorksheet(0);
	CString szSQL = GetQueryString_();
	CString szSQL1 = GetQueryStringTotalPatient();
	
	rs.ExecSQL(szSQL);
	rs1.ExecSQL(szSQL1);

	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data!"));
		return;
	}
	tmpStr.Format(_T("NG\xC0Y N\x1EB0M \x110I\x1EC0U TR\x1ECA \x43\x1EE6\x41 \x42\x1EC6NH NH\xC2N GI\x1EA2M KHO\x41 %s"), m_szDeptKey);
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr, 4098, true);
	nRow = 7;

	double nTotal, nTotalDateByDept, nTotalDate = 0;

	while (!rs.IsEOF()){
		nTotal = 0;
		nTotalDateByDept = 0;
		xls.SetCellText(0, nRow, rs.GetValue(_T("dept")), FMT_TEXT);
		
		rs.GetValue(_T("S1"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		nTotalBN[1] = str2double(tmpStr);
		nTotalP[1] += nTotalBN[1];

		rs.GetValue(_T("ndt_s1"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[1] = str2double(tmpStr);
		nTotalD[1] += nTotalNDT[1];

		rs.GetValue(_T("S2"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
		nTotalBN[2] = str2double(tmpStr);
		nTotalP[2] += nTotalBN[2];

		rs.GetValue(_T("ndt_s2"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[2] = str2double(tmpStr);
		nTotalD[2] += nTotalNDT[2];

		rs.GetValue(_T("S3"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);
		nTotalBN[3] = str2double(tmpStr);
		nTotalP[3] += nTotalBN[3];

		rs.GetValue(_T("ndt_s3"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[3] = str2double(tmpStr);
		nTotalD[3] += nTotalNDT[3];

		rs.GetValue(_T("S4"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		nTotalBN[4] = str2double(tmpStr);
		nTotalP[4] += nTotalBN[4];

		rs.GetValue(_T("ndt_s4"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[4] = str2double(tmpStr);
		nTotalD[4] += nTotalNDT[4];

		rs.GetValue(_T("S5"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT);
		nTotalBN[5] = str2double(tmpStr);
		nTotalP[5] += nTotalBN[5];

		rs.GetValue(_T("ndt_s5"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[5] = str2double(tmpStr);
		nTotalD[5] += nTotalNDT[5];

		rs.GetValue(_T("S6"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT);
		nTotalBN[6] = str2double(tmpStr);
		nTotalP[6] += nTotalBN[6];

		rs.GetValue(_T("ndt_s6"), tmpStr);
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[6] = str2double(tmpStr);
		nTotalD[6] += nTotalNDT[6];

		rs.GetValue(_T("S7"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr, FMT_TEXT);
		nTotalBN[7] = str2double(tmpStr);
		nTotalP[7] += nTotalBN[7];

		rs.GetValue(_T("ndt_s7"), tmpStr);
		xls.SetCellText(14, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[7] = str2double(tmpStr);
		nTotalD[7] += nTotalNDT[7];

		rs.GetValue(_T("S8"), tmpStr);
		xls.SetCellText(15, nRow, tmpStr, FMT_TEXT);
		nTotalBN[8] = str2double(tmpStr);
		nTotalP[8] += nTotalBN[8];

		rs.GetValue(_T("ndt_s8"), tmpStr);
		xls.SetCellText(16, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[8] = str2double(tmpStr);
		nTotalD[8] += nTotalNDT[8];

		rs.GetValue(_T("S9"), tmpStr);
		xls.SetCellText(17, nRow, tmpStr, FMT_TEXT);
		nTotalBN[9] = str2double(tmpStr);
		nTotalP[9] += nTotalBN[9];

		rs.GetValue(_T("ndt_s9"), tmpStr);
		xls.SetCellText(18, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[9] = str2double(tmpStr);
		nTotalD[9] += nTotalNDT[9];

		rs.GetValue(_T("S10"), tmpStr);
		xls.SetCellText(19, nRow, tmpStr, FMT_TEXT);
		nTotalBN[10] = str2double(tmpStr);
		nTotalP[10] += nTotalBN[10];

		rs.GetValue(_T("ndt_s10"), tmpStr);
		xls.SetCellText(20, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[10] = str2double(tmpStr);
		nTotalD[10] += nTotalNDT[10];

		rs.GetValue(_T("S11"), tmpStr);
		xls.SetCellText(21, nRow, tmpStr, FMT_TEXT);
		nTotalBN[11] = str2double(tmpStr);
		nTotalP[11] += nTotalBN[11];

		rs.GetValue(_T("ndt_s11"), tmpStr);
		xls.SetCellText(22, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[11] = str2double(tmpStr);
		nTotalD[11] += nTotalNDT[11];

		rs.GetValue(_T("S12"), tmpStr);
		xls.SetCellText(23, nRow, tmpStr, FMT_TEXT);
		nTotalBN[12] = str2double(tmpStr);
		nTotalP[12] += nTotalBN[12];

		rs.GetValue(_T("ndt_s12"), tmpStr);
		xls.SetCellText(24, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[12] = str2double(tmpStr);
		nTotalD[12] += nTotalNDT[12];

		rs.GetValue(_T("S13"), tmpStr);
		xls.SetCellText(25, nRow, tmpStr, FMT_TEXT);
		nTotalBN[13] = str2double(tmpStr);
		nTotalP[13] += nTotalBN[13];

		rs.GetValue(_T("ndt_s13"), tmpStr);
		xls.SetCellText(26, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[13] = str2double(tmpStr);
		nTotalD[13] += nTotalNDT[13];

		rs.GetValue(_T("S14"), tmpStr);
		xls.SetCellText(27, nRow, tmpStr, FMT_TEXT);
		nTotalBN[14] = str2double(tmpStr);
		nTotalP[14] += nTotalBN[14];

		rs.GetValue(_T("ndt_s14"), tmpStr);
		xls.SetCellText(28, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[14] = str2double(tmpStr);
		nTotalD[14] += nTotalNDT[14];

		rs.GetValue(_T("S15"), tmpStr);
		xls.SetCellText(29, nRow, tmpStr, FMT_TEXT);
		nTotalBN[15] = str2double(tmpStr);
		nTotalP[15] += nTotalBN[15];

		rs.GetValue(_T("ndt_s15"), tmpStr);
		xls.SetCellText(30, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[15] = str2double(tmpStr);
		nTotalD[15] += nTotalNDT[15];

		rs.GetValue(_T("S16"), tmpStr);
		xls.SetCellText(31, nRow, tmpStr, FMT_TEXT);
		nTotalBN[16] = str2double(tmpStr);
		nTotalP[16] += nTotalBN[16];

		rs.GetValue(_T("ndt_s16"), tmpStr);
		xls.SetCellText(32, nRow, tmpStr, FMT_TEXT);
		nTotalNDT[16] = str2double(tmpStr);
		nTotalD[16] += nTotalNDT[16];

		for (int i = 1; i < 17; i++)
		{
			nTotal += nTotalBN[i];
			nTotalDateByDept += nTotalNDT[i];
			
		}
		nTotalDate += nTotalDateByDept;
		xls.SetCellText(33, nRow+1, double2str(nTotal), FMT_INTEGER);
		xls.SetCellText(34, nRow+1, double2str(nTotalDateByDept), FMT_DECIMAL);

		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(0, nRow, L"Tổng cộng", FMT_TEXT);
	
	int nCol = 0;
	for(int i = 1; i <= 16; i++)
	{
		nCol = (i - 1) * 2 + 1;
		xls.SetCellText(nCol, nRow, int2str(nTotalP[i]), FMT_INTEGER);
		nCol = (i - 1) * 2 + 2;
		xls.SetCellText(nCol, nRow, double2str(nTotalD[i]), FMT_DECIMAL);
	}


	nTotalPatient = ToInt(rs1.GetValue(_T("sobn")));
	xls.SetCellText(32, nRow + 2, L"Tổng cộng", FMT_TEXT);
	xls.SetCellText(33, nRow + 2, int2str(nTotalPatient), FMT_INTEGER);
	xls.SetCellText(34, nRow + 2, double2str(nTotalDate), FMT_DECIMAL);
	
	xls.Save(_T("Exports\\NGAYNAMDIEUTRICUABENHNHANGIAM.xls"));
}

void CBCTHEODOIBNRAVAOVIENCACKHOA::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnDeptSelendok(){
	 
}
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnDeptSetfocus(){
	
}*/
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnDeptKillfocus(){
	
}*/
long CBCTHEODOIBNRAVAOVIENCACKHOA::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_szAllDepts.Empty();
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_isactive = 'Y' and sd_type IN ('DT') %s ORDER BY id "), szWhere);
	_fmsg(L"%s", szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);

		if (!m_szAllDepts.IsEmpty())
			m_szAllDepts += _T(",");
		m_szAllDepts.AppendFormat(_T("'%s'"), rs.GetValue(_T("id")));

		rs.MoveNext();
	}
	return nCount;
}
/*void CBCTHEODOIBNRAVAOVIENCACKHOA::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnListDblClick(){
	
} 
void CBCTHEODOIBNRAVAOVIENCACKHOA::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHEODOIBNRAVAOVIENCACKHOA::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnAddBCTHEODOIBNRAVAOVIENCACKHOA(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnEditBCTHEODOIBNRAVAOVIENCACKHOA(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnDeleteBCTHEODOIBNRAVAOVIENCACKHOA(){
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
 		OnCancelBCTHEODOIBNRAVAOVIENCACKHOA();
 	}
	return 0;
}
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnSaveBCTHEODOIBNRAVAOVIENCACKHOA(){
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
 		//OnBCTHEODOIBNRAVAOVIENCACKHOAListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnCancelBCTHEODOIBNRAVAOVIENCACKHOA(){
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
int CBCTHEODOIBNRAVAOVIENCACKHOA::OnBCTHEODOIBNRAVAOVIENCACKHOAListLoadData(){
	return 0;
}
CString CBCTHEODOIBNRAVAOVIENCACKHOA::GetQueryString(){
	CString szSQL,szFromDate, szDepts;

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}

	if (szDepts.IsEmpty())
		szDepts = m_szAllDepts;

	szSQL.Format(_T(" SELECT substr(ngay,9,2)+1 ngay,bncu") \
_T(" FROM(SELECT '%s' ngay,SUM(prev_qty) bncu") \
_T(" FROM(SELECT Count(DISTINCT htr_docno) prev_qty ") \
_T(" FROM   hms_treatment_record ") \
_T(" WHERE  htr_status = 'I' AND htr_admitdate < Cast_string2timestamp('%s') AND (htr_deptid IN (%s) or htr_ctdeptid IN (%s))") \
_T(" UNION ALL ") \
_T(" SELECT Count(distinct htr_docno) ") \
_T(" FROM   hms_treatment_record ") \
_T(" WHERE  htr_status = 'T' AND htr_suggestion <> 'M' AND htr_admitdate < Cast_string2timestamp('%s') ") \
_T(" AND htr_dischargedate >= cast_string2timestamp('%s') AND (htr_deptid IN (%s) or htr_ctdeptid IN (%s))))"),m_szFromDate,
																											m_szFromDate, szDepts, szDepts,
																											m_szFromDate,m_szFromDate, szDepts, szDepts);
	_fmsg(L"%s", szSQL);
	return szSQL;
}
//CString CBCTHEODOIBNRAVAOVIENCACKHOA::GetQueryString1()
//{
//	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
//	CString szSQL, szFromDate,szWhere;
//	szWhere.Format(_T(" and (htr_deptid ='%s' or htr_ctdeptid ='%s')"), m_szDeptKey, m_szDeptKey);
//	szSQL.Format(_T(" SELECT admit_date ngay, ") \
//_T(" 		       SUM(in_qty)       vaovien, ") \
//_T(" 		       SUM(movein_qty)   ckden, ") \
//_T(" 		       SUM(in_qty+movein_qty) congt, ") \
//_T(" 		       SUM(return_unit)  ravien, ") \
//_T(" 		       SUM(moveout_qty)  ckdi, ") \
//_T(" 		       SUM(transfer_qty) chuyenvien,  ") \
//_T(" 			   SUM(dead)         tuvong,") \
//_T(" 			   SUM(return_unit+moveout_qty+transfer_qty+dead) congg") \
//_T(" FROM (SELECT Trunc(htr_admitdate) admit_date, ") \
//_T(" 		         1                    in_qty, ") \
//_T(" 		         0                    movein_qty, ") \
//_T(" 		         0                    return_unit, ") \
//_T(" 		         0                    moveout_qty, ") \
//_T(" 		         0                    transfer_qty, ") \
//_T(" 		         0                    dead") \
//_T(" FROM   hms_doc ") \
//_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
//_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
//_T(" WHERE  htr_status <> 'A' %s and (htr_deptid not in('B10') or htr_ctdeptid not in('B10')) and htr_outpatient='N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
//_T(" UNION ALL") \
//_T(" SELECT Trunc(htr_dischargedate),") \
//_T(" 		   0, ") \
//_T("        0, ") \
//_T(" 		 	 CASE WHEN htr_suggestion <> 'M' AND hcr_result NOT IN ( 5, 6 ) THEN 1 ELSE 0 END, ") \
//_T(" 		 	 0, ") \
//_T(" 		 	 CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END, ") \
//_T(" 		 	 CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END ") \
//_T(" FROM   hms_doc ") \
//_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno)") \
//_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
//_T(" WHERE  htr_status = 'T' %s and (htr_deptid not in('B10') or htr_ctdeptid not in('B10')) and htr_outpatient='N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
//_T(" UNION ALL ") \
//_T(" SELECT admit_date, ") \
//_T("        0, ") \
//_T(" 		 	 1, ") \
//_T(" 		 	 0, ") \
//_T(" 		 	 0, ") \
//_T(" 		 	 0, ") \
//_T(" 		 	 0 ") \
//_T(" FROM(SELECT htr_deptid,Trunc(htr_admitdate) admit_date, ") \
//_T(" 		        htr_docno ") \
//_T(" FROM   hms_treatment_record ") \
//_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = htr_docno)") \
//_T(" WHERE  htr_status <> 'A' %s and (htr_deptid not in('B10') or htr_ctdeptid not in('B10')) AND htr_outpatient='N' AND htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
//_T(" AND htr_idx > 2 ) ") \
//_T(" UNION ALL ") \
//_T(" SELECT discharge_date, ") \
//_T(" 	     0, ") \
//_T("        0, ") \
//_T(" 	     0, ") \
//_T(" 	     1, ") \
//_T(" 	     0, ") \
//_T(" 	     0 ") \
//_T(" FROM(SELECT htr_deptid,Trunc(htr_dischargedate) discharge_date, ") \
//_T(" 	          htr_docno ") \
//_T(" FROM   hms_treatment_record ") \
//_T(" LEFT JOIN hms_clinical_record ON (hcr_docno = htr_docno)") \
//_T(" WHERE htr_suggestion ='M' %s and (htr_deptid not in('B10') or htr_ctdeptid not in('B10')) AND htr_outpatient='N' AND htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')") \
//_T(" ))  ") \
//_T(" GROUP BY admit_date") \
//_T(" order by admit_date"),szWhere, m_szFromDate, m_szToDate,
//						   szWhere, m_szFromDate, m_szToDate,
//						   szWhere, m_szFromDate, m_szToDate,
//						   szWhere, m_szFromDate, m_szToDate);
//	return szSQL;
//}

CString CBCTHEODOIBNRAVAOVIENCACKHOA::GetQueryString1(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDepts;

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}
	if (szDepts.IsEmpty())
		szDepts = m_szAllDepts;

	szSQL.Format(
		_T(" SELECT htr_deptid deptid,") \
		_T("   CASE WHEN htr_suggestion = 'M' THEN htr_tdeptid END tdeptid,") \
		_T("   hd_docno docno,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 1") \
		_T("     AND hd_rank   >=15") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c1,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 1") \
		_T("     AND hd_rank   IN ( 13, 14 )") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c2,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 1") \
		_T("     AND hd_rank   <= 12") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c3,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 11") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c4,") \
		_T("   CASE") \
		_T("     WHEN hd_object =10") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c5,") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2,12)") \
		_T("     AND hd_rank    >=15") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c6,") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2,12)") \
		_T("     AND hd_rank    IN (13,14)") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c7,") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2,12)") \
		_T("     AND hd_rank    <= 12") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c8,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 8") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c9,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 6") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c10,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 3") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c11,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 7") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c12,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 4") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c13,") \
		_T("   CASE") \
		_T("     WHEN hd_object = 5") \
		_T("     THEN NVL(hb_treatqty, 1)") \
		_T("     ELSE 0") \
		_T("   END c14,") \
		_T("   NVL(hb_treatqty, 1) total") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON(hcr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno       = hd_docno)") \
		_T(" LEFT JOIN hms_bed") \
		_T(" ON(hb_docno = htr_docno AND hb_refidx = htr_idx)") \
		_T(" WHERE htr_status   ='T'") \
		_T(" AND htr_outpatient ='N'") \
		_T(" AND htr_dischargedate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_deptid IN (%s) AND hd_docno NOT IN (SELECT hnr_docno FROM hms_newborn_record)") \
		_T(" ORDER BY hd_docno"), m_szFromDate, m_szToDate, szDepts);	
	_fmsg(L"%s", szSQL);
	return szSQL;
}

CString CBCTHEODOIBNRAVAOVIENCACKHOA::GetQueryString_(){
	/*+Ngay dieu tri bn ngoai tru*/
	/*+bang tam luu du lieu ngay dt de lay khi can (ngay_dt_bn_ngt)*/
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDepts;

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}

	if (szDepts.IsEmpty())
		szDepts = m_szAllDepts;

	szWhere.Format(_T(" AND NVL(htr_outpatient, 'N') = '%s'"), m_bOutpatient?_T("Y"):_T("N"));
	szSQL.Format(_T(" WITH tbl_ra_vien_lan_cuoi AS ( ") \
		_T(" SELECT distinct HMS_GETALIAS_NAME(htr_deptid) dept, htr_docno, hd_object, NVL(hp_rank, hd_rank) doc_rank, htr_idx, max(htr_idx) over (partition by (trunc(htr_dischargedate)||htr_docno)) lan_ra_vien_cuoi, ") \
		_T("		extract(day from htr_dischargedate - htr_admitdate) + 1 ngay_dt_ngt ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno       = hd_docno)") \
		_T(" LEFT JOIN hms_bed ON(hb_docno = htr_docno AND hb_refidx = htr_idx)") \
		_T(" WHERE htr_status   ='T'") \
		_T(" AND htr_dischargedate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_deptid IN (%s) AND (extract(day from htr_dischargedate - htr_admitdate)  < 180 OR hb_treatqty < 180) ") \
		_T(" AND hd_docno NOT IN (SELECT hnr_docno FROM hms_newborn_record) %s),") \
		_T("	tbl_ra_vien_co_he_so AS(") \
		_T("	SELECT dept, htr_docno, hd_object, case when doc_rank >=25 then to_number(ss_vndesc) else doc_rank end doc_rank, htr_idx, lan_ra_vien_cuoi, ngay_dt_ngt ") \
		_T("	FROM tbl_ra_vien_lan_cuoi") \
		_T("	LEFT JOIN sys_sel ON (ss_id = 'hms_rank' AND to_number(ss_code) >= 25 AND ss_code = doc_rank)") \
		_T("	), tbl_total AS (") \
		_T(" SELECT dept, count(distinct htr_docno) soBN, case when hd_object IN (1, 2, 11, 13) then hd_object||'.'||case when doc_rank >=15 then 0 else case when doc_rank < 13 then 2 else 1 end end else hd_object end doi_tuong_chia_bac,") \
		_T("   CASE WHEN hd_object IN (1, 13) AND doc_rank >=15 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"1\",") \
		_T("   CASE WHEN hd_object IN (1, 13) AND doc_rank IN ( 13, 14 ) THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"3\",") \
		_T("   CASE WHEN hd_object IN (1, 13) AND doc_rank <= 12 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"5\",") \
		_T("   CASE WHEN hd_object IN (11) AND doc_rank >=15 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"7\",") \
		_T("   CASE WHEN hd_object IN (11) AND doc_rank IN ( 13, 14 ) THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"9\",") \
		_T("   CASE WHEN hd_object IN (11) AND doc_rank <= 12 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"11\",") \
		_T("   CASE WHEN hd_object =10 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"19\",") \
		_T("   CASE WHEN hd_object IN(2) AND doc_rank >=15 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"13\",") \
		_T("   CASE WHEN hd_object IN(2) AND doc_rank IN (13,14) THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"15\",") \
		_T("   CASE WHEN hd_object IN(2) AND doc_rank  <= 12 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"17\",") \
		_T("   CASE WHEN hd_object = 8 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"21\",") \
		_T("   CASE WHEN hd_object = 9 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"23\",") \
		_T("   CASE WHEN hd_object = 3 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"25\",") \
		_T("   CASE WHEN hd_object = 7 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"27\",") \
		_T("   CASE WHEN hd_object = 4 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"29\",") \
		_T("   CASE WHEN hd_object = 5 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"31\",") \
		_T("   CASE WHEN hd_object = 12 THEN SUM(coalesce(hb_treatqty, ngay_dt_ngt, 1)) ELSE 0 END \"33\"") \
		_T(" FROM tbl_ra_vien_co_he_so ") \
		_T(" LEFT JOIN hms_bed ON(hb_docno = htr_docno AND hb_refidx = htr_idx) ") \
		_T(" GROUP BY dept, htr_docno, hd_object, htr_idx, doc_rank ") \
		_T(" ORDER BY dept, DECODE(hd_object, 1, 0, 11, 1, 2, 2, 10, 3, 8, 4, 9, 5, 3, 6, 7, 7, 4, 8, 5, 9, 12, 10) asc, doc_rank desc ") \
		_T(" ) ,tbl_final AS (") \
		_T(" SELECT distinct dept, doi_tuong_chia_bac, sum(sobn) so_bn, ") \
		_T(" sum(\"1\") S1, sum(\"3\") S3, sum(\"5\") S5, sum(\"7\") S7, sum(\"9\") S9, sum(\"11\") S11, sum(\"19\") S19, ") \
		_T(" sum(\"13\") S13, sum(\"15\") S15, sum(\"17\") S17, sum(\"21\") S21, sum(\"23\") S23, sum(\"25\") S25, sum(\"27\") S27, ") \
		_T(" sum(\"29\") S29, sum(\"31\") S31, sum(\"33\") S33 ") \
		_T(" from tbl_total ") \
		_T(" group by dept, doi_tuong_chia_bac ") \
		_T(" order by dept, doi_tuong_chia_bac ") \
		_T(" )  ") \
		_T(" SELECT ") \
		_T(" DEPT, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '1.0' THEN SO_BN ELSE 0 END) AS S1, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '1.0' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s1, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '1.1' THEN SO_BN ELSE 0 END) AS S2, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '1.1' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s2, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '1.2' THEN SO_BN ELSE 0 END) AS S3, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '1.2' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s3, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '11.0' THEN SO_BN ELSE 0 END) AS S4, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '11.0' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s4, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '11.1' THEN SO_BN ELSE 0 END) AS S5, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '11.1' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s5, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '11.2' THEN SO_BN ELSE 0 END) AS S6, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '11.2' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s6, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '2.0' THEN SO_BN ELSE 0 END) AS S7, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '2.0' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s7, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '2.1' THEN SO_BN ELSE 0 END) AS S8, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '2.1' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s8, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '2.2' THEN SO_BN ELSE 0 END) AS S9, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '2.2' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s9, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '10' THEN SO_BN ELSE 0 END) AS S10, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '10' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s10, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '8' THEN SO_BN ELSE 0 END) AS S11, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '8' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s11, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '9' THEN SO_BN ELSE 0 END) AS S12, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '9' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s12, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '3' THEN SO_BN ELSE 0 END) AS S13, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '3' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s13, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '7' THEN SO_BN ELSE 0 END) AS S14, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '7' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s14, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '4' THEN SO_BN ELSE 0 END) AS S15, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '4' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s15, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '5' THEN SO_BN ELSE 0 END) AS S16, ") \
		_T(" SUM(CASE WHEN DOI_TUONG_CHIA_BAC = '5' THEN S1 + S3 + S5 + S7 + S9 + S11 + S19 + S13 + S15 + S17 + S21 + S23 + S25 + S27 + S29 + S31 + S33 ELSE 0 END) AS ndt_s16 ") \
		_T(" FROM tbl_final ") \
		_T(" GROUP BY DEPT ") \
		_T(" ORDER BY DEPT "), m_szFromDate, m_szToDate, szDepts, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CBCTHEODOIBNRAVAOVIENCACKHOA::GetQueryStringTotalPatient() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDepts;

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}

	if (szDepts.IsEmpty())
		szDepts = m_szAllDepts;

	szWhere.Format(_T(" AND NVL(htr_outpatient, 'N') = '%s'"), m_bOutpatient ? _T("Y") : _T("N"));
	szSQL.Format(_T(" SELECT count(distinct htr_docno) as sobn ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno       = hd_docno)") \
		_T(" LEFT JOIN hms_bed ON(hb_docno = htr_docno AND hb_refidx = htr_idx)") \
		_T(" WHERE htr_status   ='T'") \
		_T(" AND htr_dischargedate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_deptid IN (%s) AND (extract(day from htr_dischargedate - htr_admitdate)  < 180 OR hb_treatqty < 180) ") \
		_T(" AND hd_docno NOT IN(SELECT hnr_docno FROM hms_newborn_record) %s "), m_szFromDate, m_szToDate, szDepts, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}