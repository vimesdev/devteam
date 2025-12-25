#include "BCMAUVACHEPHAMSD.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCMAUVACHEPHAMSD *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCMAUVACHEPHAMSD *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCMAUVACHEPHAMSD *pVw = (CBCMAUVACHEPHAMSD *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCMAUVACHEPHAMSD *pVw = (CBCMAUVACHEPHAMSD *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCMAUVACHEPHAMSD *pVw = (CBCMAUVACHEPHAMSD *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCMAUVACHEPHAMSD*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCMAUVACHEPHAMSD*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAMSD*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCMAUVACHEPHAMSD* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCMAUVACHEPHAMSD *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAMSD *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCMAUVACHEPHAMSDFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAMSD*)pWnd)->OnAddBCMAUVACHEPHAMSD();
} 
static int _OnEditBCMAUVACHEPHAMSDFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAMSD*)pWnd)->OnEditBCMAUVACHEPHAMSD();
} 
static int _OnDeleteBCMAUVACHEPHAMSDFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAMSD*)pWnd)->OnDeleteBCMAUVACHEPHAMSD();
} 
static int _OnSaveBCMAUVACHEPHAMSDFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAMSD*)pWnd)->OnSaveBCMAUVACHEPHAMSD();
} 
static int _OnCancelBCMAUVACHEPHAMSDFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAMSD*)pWnd)->OnCancelBCMAUVACHEPHAMSD();
} 
CBCMAUVACHEPHAMSD::CBCMAUVACHEPHAMSD(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCMAUVACHEPHAMSD::~CBCMAUVACHEPHAMSD(){
}
void CBCMAUVACHEPHAMSD::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 731, 30, 821, 55);
	m_wndPrint.Create(this, _T("&Print"), 826, 30, 916, 55);
	m_wndPrint.EnableWindow(false);
	m_wndExport.Create(this, _T("&Export"), 921, 30, 1011, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 431, 30, 511, 55);
	//m_wndDepartmentLab.EnableWindow(false);
	m_wndDepartment.Create(this,516, 30, 726, 55);
	//m_wndDepartment.EnableWindow(false);

	CString tmpStr;
	m_wndList.ModifyStyle(4, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(1, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(2, _T("S\x1ED1 ng\x1B0\x1EDDi"), CFMT_MONEY, 75);
	m_wndList.InsertColumn(3, _T("250"), CFMT_MONEY, 65);
	m_wndList.InsertColumn(4, _T("350"), CFMT_MONEY, 65);
	TranslateString(_T("S\x1ED1 l\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 3, 2, 4, false, true);
	m_wndList.InsertColumn(5, _T("S\x1ED1 l\x1B0\x1EE3ng(ml)"), CFMT_MONEY, 85);
	TranslateString(_T("M\xE1u to\xE0n ph\x1EA7n v\xE0 kh\x1ED1i h\x1ED3ng \x63\x1EA7u"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 5, false, true);

	m_wndList.InsertColumn(6, _T("S\x1ED1 ng\x1B0\x1EDDi"), CFMT_MONEY, 75);
	m_wndList.InsertColumn(7, _T("150"), CFMT_MONEY, 75);	
	m_wndList.InsertColumn(8, _T("250"), CFMT_MONEY, 75);
	TranslateString(_T("S\x1ED1 l\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 7, 2, 8, false, true);
	m_wndList.InsertColumn(9, _T("S\x1ED1 l\x1B0\x1EE3ng"), CFMT_MONEY, 75);
	TranslateString(_T("Huy\x1EBFt t\x1B0\x1A1ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 6, 1, 9, false, true);

	m_wndList.InsertColumn(10, _T("S\x1ED1 ng\x1B0\x1EDDi"), CFMT_MONEY, 75);
	m_wndList.InsertColumn(11, _T("TC M\xE1y"), CFMT_MONEY, 75);	
	m_wndList.InsertColumn(12, _T("TC Pool"), CFMT_MONEY, 75);
	TranslateString(_T("S\x1ED1 l\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 11, 2, 12, false, true);
	m_wndList.InsertColumn(13, _T("S\x1ED1 l\x1B0\x1EE3ng"), CFMT_MONEY, 75);
	TranslateString(_T("Ti\x1EC3u \x63\x1EA7u"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 10, 1, 13, false, true);

	m_wndList.InsertColumn(14, _T("T\x1ED5ng s\x1ED1 ng\x1B0\x1EDDi"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(15, _T("T\x1ED5ng s\x1ED1 l\x1EA7n"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(16, _T("T\x1ED5ng s\x1ED1 l\x1B0\x1EE3ng"), CFMT_MONEY, 100);

}
void CBCMAUVACHEPHAMSD::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);




	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CBCMAUVACHEPHAMSD::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCMAUVACHEPHAMSD::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCMAUVACHEPHAMSD::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCMAUVACHEPHAMSD::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCMAUVACHEPHAMSD::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCMAUVACHEPHAMSD::SetMode(int nMode){
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
/*void CBCMAUVACHEPHAMSD::OnFromDateChange(){
	
} */
/*void CBCMAUVACHEPHAMSD::OnFromDateSetfocus(){
	
} */
/*void CBCMAUVACHEPHAMSD::OnFromDateKillfocus(){
	
} */
int CBCMAUVACHEPHAMSD::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCMAUVACHEPHAMSD::OnToDateChange(){
	
} */
/*void CBCMAUVACHEPHAMSD::OnToDateSetfocus(){
	
} */
/*void CBCMAUVACHEPHAMSD::OnToDateKillfocus(){
	
} */
int CBCMAUVACHEPHAMSD::OnToDateCheckValue(){
	return 0;
} 
void CBCMAUVACHEPHAMSD::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCMAUVACHEPHAMSD::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCMAUVACHEPHAMSD::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 9; 
	CString szSQL, tmpStr, szOldGroup, szNewGroup;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 16);
	xls.SetColumnWidth(1, 6);
	xls.SetColumnWidth(2, 5);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 13);
	xls.SetColumnWidth(5, 6);
	xls.SetColumnWidth(6, 5);
	xls.SetColumnWidth(7, 5);
	xls.SetColumnWidth(8, 13);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 7);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 11);
	xls.SetColumnWidth(13, 12);
	xls.SetColumnWidth(14, 11);
	xls.SetColumnWidth(15, 16);
	xls.SetColumnWidth(16, 5);
	xls.SetColumnWidth(17, 5);
	xls.SetColumnWidth(18, 5);
	xls.SetColumnWidth(19, 5);
	xls.SetColumnWidth(20, 5);
	xls.SetColumnWidth(21, 5);
	xls.SetColumnWidth(22, 5);
	xls.SetColumnWidth(23, 5);
	xls.SetColumnWidth(24, 5);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("M\xC1U V\xC0 \x43H\x1EBE PH\x1EA8M S\x1EEC \x44\x1EE4NG TRONG TH\xC1NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("M\xE1u to\xE0n ph\x1EA7n v\xE0 kh\x1ED1i h\x1ED3ng \x63\x1EA7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 7, _T("S\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 8, _T("ng\x1B0\x1EDDi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 7, _T("S\x1ED1 l\x1EA7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 8, _T("250"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 8, _T("350"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 7, _T("S\x1ED1 l\x1B0\x1EE3ng (ml)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("Huy\x1EBFt t\x1B0\x1A1ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("S\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 8, _T("ng\x1B0\x1EDDi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("S\x1ED1 l\x1EA7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 8, _T("150"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 8, _T("250"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 7, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("Ti\x1EC3u \x63\x1EA7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 7, _T("S\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 8, _T("ng\x1B0\x1EDDi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 7, _T("S\x1ED1 l\x1EA7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 8, _T("TC M\xE1y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 8, _T("TC Pool"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 7, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 6, _T("T\x1ED5ng s\x1ED1 ng\x1B0\x1EDDi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 6, _T("T\x1ED5ng s\x1ED1 l\x1EA7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 6, _T("T\x1ED5ng s\x1ED1 l\x1B0\x1EE3ng (ml)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 0, 15);
	xls.SetMerge(4, 4, 0, 15);
	xls.SetMerge(6, 8, 0, 0);
	xls.SetMerge(6, 6, 1, 4);
	xls.SetMerge(7, 7, 2, 3);
	xls.SetMerge(7, 8, 4, 4);
	xls.SetMerge(6, 6, 5, 8);
	xls.SetMerge(7, 7, 6, 7);
	xls.SetMerge(7, 8, 8, 8);
	xls.SetMerge(6, 6, 9, 12);
	xls.SetMerge(7, 7, 10, 11);
	xls.SetMerge(7, 8, 12, 12);
	xls.SetMerge(6, 8, 13, 13);
	xls.SetMerge(6, 8, 14, 14);
	xls.SetMerge(6, 8, 15, 15);
	while(!rs.IsEOF()){
	rs.GetValue(_T("ID"), szNewGroup);
	if (szOldGroup != szNewGroup)
	{
		xls.SetCellText(0, nRow, rs.GetValue(_T("KHOI")), FMT_TEXT, true);
		szOldGroup = szNewGroup;
		nRow++;
	}
	rs.GetValue(_T("DOITUONG"), tmpStr);
	xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);

	rs.GetValue(_T("SONGUOI"), tmpStr);
	xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SOLAN250"), tmpStr);
	xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SOLAN350"), tmpStr);
	xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SOLUONG"), tmpStr);
	xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SONGUOIH"), tmpStr);
	xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SOLANH150"), tmpStr);
	xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SOLANH250"), tmpStr);
	xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SOLUONGH"), tmpStr);
	xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SONGUOIT"), tmpStr);
	xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("TCMAY"), tmpStr);
	xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("TCPOOL"), tmpStr);
	xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("SOLUONGT"), tmpStr);
	xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("TONGSONGUOI"), tmpStr);
	xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("TONGSOLAN"), tmpStr);
	xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1);

	rs.GetValue(_T("TONGSOLUONG"), tmpStr);
	xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1);

	nRow++; 
	rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\MAU VA CHE PHAM.xls"));
} 
void CBCMAUVACHEPHAMSD::OnListDblClick(){
	
} 
void CBCMAUVACHEPHAMSD::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCMAUVACHEPHAMSD::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCMAUVACHEPHAMSD::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szNewGroup, szOldGroup;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem=1;
	while(!rs.IsEOF()){
		rs.GetValue(_T("ID"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{	
			rs.GetValue(_T("KHOI"), tmpStr);
			nItem = m_wndList.AddItems(tmpStr, NULL);
			m_wndList.MergeCell(nItem, 0, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("DOITUONG")), 
			rs.GetValue(_T("SONGUOI")), 
			rs.GetValue(_T("SOLAN250")), 
			rs.GetValue(_T("SOLAN350")), 
			rs.GetValue(_T("SOLUONG")), 
			rs.GetValue(_T("SONGUOIH")), 
			rs.GetValue(_T("SOLANH150")),
			rs.GetValue(_T("SOLANH250")),
			rs.GetValue(_T("SOLUONGH")),
			rs.GetValue(_T("SONGUOIT")),
			rs.GetValue(_T("TCMAY")),
			rs.GetValue(_T("TCPOOL")),
			rs.GetValue(_T("SOLUONGT")),
			rs.GetValue(_T("TONGSONGUOI")),
			rs.GetValue(_T("TONGSOLAN")),
			rs.GetValue(_T("TONGSOLUONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCMAUVACHEPHAMSD::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCMAUVACHEPHAMSD::OnDepartmentSelendok(){
	 
}
/*void CBCMAUVACHEPHAMSD::OnDepartmentSetfocus(){
	
}*/
/*void CBCMAUVACHEPHAMSD::OnDepartmentKillfocus(){
	
}*/
long CBCMAUVACHEPHAMSD::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept order by id"), szWhere);
	_fmsg(_T("%s"),szSQL);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCMAUVACHEPHAMSD::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCMAUVACHEPHAMSD::OnAddBCMAUVACHEPHAMSD(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCMAUVACHEPHAMSD::OnEditBCMAUVACHEPHAMSD(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCMAUVACHEPHAMSD::OnDeleteBCMAUVACHEPHAMSD(){
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
 		OnCancelBCMAUVACHEPHAMSD();
 	}
	return 0;
}
int CBCMAUVACHEPHAMSD::OnSaveBCMAUVACHEPHAMSD(){
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
 		//OnBCMAUVACHEPHAMSDListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCMAUVACHEPHAMSD::OnCancelBCMAUVACHEPHAMSD(){
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
int CBCMAUVACHEPHAMSD::OnBCMAUVACHEPHAMSDListLoadData(){
	return 0;
}
CString CBCMAUVACHEPHAMSD::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, tmpStr, szWhere,szDept,szDept1;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HD_ADMITDEPT = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T("AND HPC_ORDERDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSQL.Format(_T(" SELECT ID,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID='hrl_depttype' AND SS_CODE= CAST(ID AS NUMBER)) AS KHOI,") \
_T("         (SELECT HO_DESC FROM HMS_OBJECT WHERE HO_ID=HPC_OBJECT) AS DOITUONG,") \
_T("         SONGUOI,SOLAN250,SOLAN350,SOLUONG,SONGUOIH,SOLANH150,SOLANH250,SOLUONGH,SONGUOIT,") \
_T("        TCMAY,TCPOOL,SOLUONGT,TONGSONGUOI,TONGSOLAN,TONGSOLUONG") \
_T(" FROM(SELECT 4 ID,HPC_OBJECT,SUM(SONGUOI) SONGUOI,SOLAN250,SOLAN350,SOLUONG,SUM(SONGUOIH) SONGUOIH,SOLANH150,SOLANH250,SOLUONGH,SUM(SONGUOIT) SONGUOIT,TCMAY,TCPOOL,SOLUONGT,SUM(SONGUOI+SONGUOIH+SONGUOIT) TONGSONGUOI,TONGSOLAN,TONGSOLUONG") \
_T(" FROM(SELECT DISTINCT HPCL_DOCNO,HPC_OBJECT,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) IN('M','K') THEN 1 ELSE 0 END AS SONGUOI,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) ='H' THEN 1 ELSE 0 END AS SONGUOIH,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) ='T' THEN 1 ELSE 0 END AS SONGUOIT") \
_T(" FROM(SELECT DISTINCT HPCL_DOCNO,HPC_OBJECT,HPC_ORDERDATE,HPC_GROUPID,HPC_CLASS,HPCL_ITEMID,HPCL_QTY,") \
_T("       (SELECT HFL_NAME FROM HMS_FEE_LIST WHERE HFL_FEEID=HPCL_ITEMID) NAME") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_TESTORDER ON(HPC_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND hpcl_orderid=hpc_orderid)") \
_T(" WHERE HPC_GROUPID='B1800' %s %s") \
_T(" ))") \
_T(" LEFT JOIN (SELECT HPC_OBJECT,") \
_T("        SUM(SOLAN250) SOLAN250,SUM(SOLAN350) SOLAN350,(SUM(SOLAN250)*250+SUM(SOLAN350)*350) SOLUONG,") \
_T("        SUM(SOLANH150) SOLANH150,SUM(SOLANH250) SOLANH250,(SUM(SOLANH150)*150+SUM(SOLANH250)*250) SOLUONGH,") \
_T("        SUM(TCMAY) TCMAY,SUM(TCPOOL) TCPOOL,(SUM(TCMAY)*250+SUM(TCPOOL)*150) SOLUONGT,") \
_T("        SUM(SOLAN250+SOLAN350+SOLANH150+SOLANH250+TCMAY+TCPOOL) TONGSOLAN,") \
_T("        ((SUM(SOLAN250)*250+SUM(SOLAN350)*350)+(SUM(SOLANH150)*150+SUM(SOLANH250)*250)+(SUM(TCMAY)*250+SUM(TCPOOL)*150)) TONGSOLUONG") \
_T(" FROM(SELECT HPC_OBJECT,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) IN('M','K') AND lower(NAME) like(chr(37)||lower('250')||chr(37)) THEN HPCL_QTY ELSE 0 END AS SOLAN250,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) IN('M','K') AND lower(NAME) like(chr(37)||lower('350')||chr(37)) THEN HPCL_QTY ELSE 0 END AS SOLAN350,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) ='H' AND lower(NAME) like(chr(37)||lower('150')||chr(37)) THEN HPCL_QTY ELSE 0 END AS SOLANH150,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) ='H' AND lower(NAME) like(chr(37)||lower('250')||chr(37)) THEN HPCL_QTY ELSE 0 END AS SOLANH250,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) ='T' AND lower(NAME) like(chr(37)||lower('250')||chr(37)) THEN HPCL_QTY ELSE 0 END AS TCMAY,") \
_T("        CASE WHEN HPC_CLASS='I' AND SUBSTR(NAME,1,1) ='T' AND lower(NAME) like(chr(37)||lower('150')||chr(37)) THEN HPCL_QTY ELSE 0 END AS TCPOOL ") \
_T(" FROM(SELECT DISTINCT HPCL_DOCNO,HPC_OBJECT,HPC_ORDERDATE,HPC_GROUPID,HPC_CLASS,HPCL_ITEMID,HPCL_QTY,") \
_T("       (SELECT HFL_NAME FROM HMS_FEE_LIST WHERE HFL_FEEID=HPCL_ITEMID) NAME") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_TESTORDER ON(HPC_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND hpcl_orderid=hpc_orderid)") \
_T(" WHERE HPC_GROUPID='B1800' %s %s") \
_T(" ))") \
_T("  GROUP BY HPC_OBJECT) USING(HPC_OBJECT)") \
_T(" GROUP BY HPC_OBJECT,SOLAN250,SOLAN350,SOLUONG,SOLANH150,SOLANH250,SOLUONGH,TCMAY,TCPOOL,SOLUONGT,TONGSOLAN,TONGSOLUONG") \
_T(" UNION") \
_T(" SELECT 5 ID,HPC_OBJECT,SUM(SONGUOI) SONGUOI,SOLAN250,SOLAN350,SOLUONG,SUM(SONGUOIH) SONGUOIH,SOLANH150,SOLANH250,SOLUONGH,SUM(SONGUOIT) SONGUOIT,TCMAY,TCPOOL,SOLUONGT,SUM(SONGUOI+SONGUOIH+SONGUOIT) TONGSONGUOI,TONGSOLAN,TONGSOLUONG") \
_T(" FROM(SELECT DISTINCT HPCL_DOCNO,HPC_OBJECT,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) IN('M','K') THEN 1 ELSE 0 END AS SONGUOI,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) ='H' THEN 1 ELSE 0 END AS SONGUOIH,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) ='T' THEN 1 ELSE 0 END AS SONGUOIT") \
_T(" FROM(SELECT DISTINCT HPCL_DOCNO,HPC_OBJECT,HPC_ORDERDATE,HPC_GROUPID,HPC_CLASS,HPCL_ITEMID,HPCL_QTY,") \
_T("       (SELECT HFL_NAME FROM HMS_FEE_LIST WHERE HFL_FEEID=HPCL_ITEMID) NAME") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_TESTORDER ON(HPC_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND hpcl_orderid=hpc_orderid)") \
_T(" WHERE HPC_GROUPID='B1800' %s %s") \
_T(" ))") \
_T(" LEFT JOIN (SELECT HPC_OBJECT,") \
_T("        SUM(SOLAN250) SOLAN250,SUM(SOLAN350) SOLAN350,(SUM(SOLAN250)*250+SUM(SOLAN350)*350) SOLUONG,") \
_T("        SUM(SOLANH150) SOLANH150,SUM(SOLANH250) SOLANH250,(SUM(SOLANH150)*150+SUM(SOLANH250)*250) SOLUONGH,") \
_T("        SUM(TCMAY) TCMAY,SUM(TCPOOL) TCPOOL,(SUM(TCMAY)*250+SUM(TCPOOL)*150) SOLUONGT,") \
_T("        SUM(SOLAN250+SOLAN350+SOLANH150+SOLANH250+TCMAY+TCPOOL) TONGSOLAN,") \
_T("        ((SUM(SOLAN250)*250+SUM(SOLAN350)*350)+(SUM(SOLANH150)*150+SUM(SOLANH250)*250)+(SUM(TCMAY)*250+SUM(TCPOOL)*150)) TONGSOLUONG") \
_T(" FROM(SELECT HPC_OBJECT,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) IN('M','K') AND lower(NAME) like(chr(37)||lower('250')||chr(37)) THEN HPCL_QTY ELSE 0 END AS SOLAN250,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) IN('M','K') AND lower(NAME) like(chr(37)||lower('350')||chr(37)) THEN HPCL_QTY ELSE 0 END AS SOLAN350,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) ='H' AND lower(NAME) like(chr(37)||lower('150')||chr(37)) THEN HPCL_QTY ELSE 0 END AS SOLANH150,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) ='H' AND lower(NAME) like(chr(37)||lower('250')||chr(37)) THEN HPCL_QTY ELSE 0 END AS SOLANH250,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) ='T' AND lower(NAME) like(chr(37)||lower('250')||chr(37)) THEN HPCL_QTY ELSE 0 END AS TCMAY,") \
_T("        CASE WHEN HPC_CLASS='E' AND SUBSTR(NAME,1,1) ='T' AND lower(NAME) like(chr(37)||lower('150')||chr(37)) THEN HPCL_QTY ELSE 0 END AS TCPOOL ") \
_T(" FROM(SELECT DISTINCT HPCL_DOCNO,HPC_OBJECT,HPC_ORDERDATE,HPC_GROUPID,HPC_CLASS,HPCL_ITEMID,HPCL_QTY,") \
_T("       (SELECT HFL_NAME FROM HMS_FEE_LIST WHERE HFL_FEEID=HPCL_ITEMID) NAME") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_TESTORDER ON(HPC_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND hpcl_orderid=hpc_orderid)") \
_T(" WHERE HPC_GROUPID='B1800' %s %s") \
_T(" ))") \
_T("  GROUP BY HPC_OBJECT) USING(HPC_OBJECT)") \
_T(" GROUP BY HPC_OBJECT,SOLAN250,SOLAN350,SOLUONG,SOLANH150,SOLANH250,SOLUONGH,TCMAY,TCPOOL,SOLUONGT,TONGSOLAN,TONGSOLUONG)"), szWhere, szDept, szWhere, szDept, szWhere, szDept, szWhere, szDept);
	return szSQL;
}