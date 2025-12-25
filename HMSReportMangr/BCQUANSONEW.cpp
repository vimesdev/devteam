#include "BCQUANSONEW.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCQUANSONEW *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCQUANSONEW *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCQUANSONEW *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCQUANSONEW *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCQUANSONEW *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCQUANSONEW *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCQUANSONEW *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCQUANSONEW *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCQUANSONEW *pVw = (CBCQUANSONEW *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCQUANSONEW *pVw = (CBCQUANSONEW *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCQUANSONEW *pVw = (CBCQUANSONEW *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCQUANSONEW*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCQUANSONEW*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCQUANSONEW*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCQUANSONEW*)pWnd)->OnListDeleteItem();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CBCQUANSONEW*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CBCQUANSONEW*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CBCQUANSONEW*)pWnd)->OnOutPatientSelect();
}
static int _OnAddBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSONEW*)pWnd)->OnAddBCQUANSOTHEONGAY();
} 
static int _OnEditBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSONEW*)pWnd)->OnEditBCQUANSOTHEONGAY();
} 
static int _OnDeleteBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSONEW*)pWnd)->OnDeleteBCQUANSOTHEONGAY();
} 
static int _OnSaveBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSONEW*)pWnd)->OnSaveBCQUANSOTHEONGAY();
} 
static int _OnCancelBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSONEW*)pWnd)->OnCancelBCQUANSOTHEONGAY();
} 
CBCQUANSONEW::CBCQUANSONEW(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCQUANSONEW::~CBCQUANSONEW(){
}
void CBCQUANSONEW::OnCreateComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
// 	m_wndFromDateLabel.Create(this, _T("Nh\x1EADp ng\xE0y"), 10, 30, 90, 55);
// 	m_wndFromDate.Create(this,95, 30, 215, 55); 
// 	/*m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
// 	m_wndToDate.Create(this,305, 30, 425, 55); */
// 	m_wndLoad.Create(this, _T("&Load"), 220, 30, 300, 55);
// 	//m_wndPrint.Create(this, _T("&Print"), 620, 30, 710, 55);
// 	m_wndExport.Create(this, _T("&Export"), 305, 30, 425, 55);
// 	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55);
	m_wndAll.Create(this, _T("All"), 430, 30, 510, 55);
	m_wndInPatient.Create(this, _T("InPatient"), 515, 30, 595, 55);
	m_wndOutPatient.Create(this, _T("OutPatient"), 600, 30, 680, 55);
	m_wndLoad.Create(this, _T("&Load"), 685, 30, 775, 55);
	//m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	//m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndExport.Create(this, _T("&Export"), 780, 30, 870, 55);
	m_wndList.Create(this,3, 64, 1012, 614);

	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(5);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_MONEY, 60);	m_wndList.InsertColumn(1, _T("Kho\x61"), CFMT_RIGHT, 80);	m_wndList.InsertColumn(2, _T("\x42N \x63\x169 \x63\xF2n l\x1EA1i"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(3, _T("T\x1B0\x1EDBng"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(4, _T("4//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("2//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("\x42HQN"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("\x42HQ\x110"), CFMT_MONEY, 80);
	m_wndList.GetHeaderControl()->MergeCell(_T("Qu\xE2n"), 1, 3, 2, 6, true);
	m_wndList.InsertColumn(8, _T("T\x1B0\x1EDBng"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(9, _T("4//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("2//"), CFMT_MONEY, 50);
	m_wndList.GetHeaderControl()->MergeCell(_T("\x42HQH"), 1, 8, 2, 10, true);
	m_wndList.InsertColumn(11, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("T\x45 < \x36 tu\x1ED5i"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(13, _T("\x43h\xEDnh s\xE1\x63h"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(14, _T("\x44VYT"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(15, _T("\x42H kh\xE1\x63 + \x42H n\x1EE3 th\x1EBB"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(16, _T("\x42HTN"), CFMT_MONEY, 80);	m_wndList.GetHeaderControl()->MergeCell(_T("Th\xE0nh ph\x1EA7n"), 0, 3, 1, 16, true);
	m_wndList.InsertColumn(17, _T("\x110\x1A1n v\x1ECB \x111\x1EBFn"), CFMT_MONEY, 120);
	m_wndList.InsertColumn(18, _T("Vi\x1EC7n kh\xE1\x63 \x63huy\x1EC3n \x111\x1EBFn"), CFMT_MONEY, 120);
	m_wndList.InsertColumn(19, _T("\x43huy\x1EC3n kho\x61 \x111\x1EBFn"), CFMT_MONEY, 100);
	m_wndList.GetHeaderControl()->MergeCell(_T("T\x103ng"), 0, 17, 2, 19, true);
	m_wndList.InsertColumn(20, _T("Kh\x1ECFi v\x1EC1 \x111\x1A1n v\x1ECB"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(21, _T("N\x1EB7ng \x78in v\x1EC1"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(22, _T("\x43huy\x1EC3n vi\x1EC7n kh\xE1\x63"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(23, _T("\x43huy\x1EC3n kho\x61 kh\xE1\x63"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(24, _T("T\x1EED vong"), CFMT_MONEY, 100);
	m_wndList.GetHeaderControl()->MergeCell(_T("Gi\x1EA3m"), 0, 20, 2, 24, true);
	m_wndList.InsertColumn(25, _T("\x43\xF2n l\x1EA1i"), CFMT_MONEY, 100);
}
void CBCQUANSONEW::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
}
void CBCQUANSONEW::OnSetWindowEvents(){
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
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CBCQUANSONEW::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBCQUANSONEW::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCQUANSONEW::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCQUANSONEW::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CBCQUANSONEW::SetMode(int nMode){
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
/*void CBCQUANSONEW::OnFromDateChange(){
	
} */
/*void CBCQUANSONEW::OnFromDateSetfocus(){
	
} */
/*void CBCQUANSONEW::OnFromDateKillfocus(){
	
} */
int CBCQUANSONEW::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCQUANSONEW::OnToDateChange(){
	
} */
/*void CBCQUANSONEW::OnToDateSetfocus(){
	
} */
/*void CBCQUANSONEW::OnToDateKillfocus(){
	
} */
int CBCQUANSONEW::OnToDateCheckValue(){
	return 0;
} 
void CBCQUANSONEW::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CBCQUANSONEW::OnAllSelect(){

}
void CBCQUANSONEW::OnInPatientSelect(){

}
void CBCQUANSONEW::OnOutPatientSelect(){

}
void CBCQUANSONEW::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCQUANSONEW::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere,szOldGroup,szNewGroup;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 4);
	xls.SetColumnWidth(5, 4);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 4);
	xls.SetColumnWidth(10, 4);
	xls.SetColumnWidth(11, 4);
	xls.SetColumnWidth(12, 6);
	xls.SetColumnWidth(13, 6);
	xls.SetColumnWidth(14, 6);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 12);
	xls.SetColumnWidth(19, 12);
	xls.SetColumnWidth(20, 10);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 10);
	xls.SetColumnWidth(23, 10);
	xls.SetColumnWidth(24, 8);
	xls.SetColumnWidth(25, 8);

	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O QU\xC2N S\x1ED0"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 5, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 5, _T("\x42N \x63\x169 \x63\xF2n l\x1EA1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 5, _T("Th\xE0nh ph\x1EA7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 7, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 7, _T("4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("2//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("\x42HQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("\x42HQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 7, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 7, _T("4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 7, _T("2//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 6, _T("T\x45 < \x36 tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 6, _T("\x43h\xEDnh s\xE1\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 6, _T("\x44VYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 6, _T("\x42H kh\xE1\x63 + \x42H n\x1EE3 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(16, 6, _T("\x42HTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(17, 5, _T("T\x103ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(17, 6, _T("\x110\x1A1n v\x1ECB \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(18, 6, _T("Vi\x1EC7n kh\xE1\x63 \x63huy\x1EC3n \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(19, 6, _T("\x43huy\x1EC3n kho\x61 \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(20, 5, _T("Gi\x1EA3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(20, 6, _T("Kh\x1ECFi v\x1EC1 \x111\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(21, 6, _T("N\x1EB7ng \x78in v\x1EC1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(22, 6, _T("\x43huy\x1EC3n vi\x1EC7n kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(23, 6, _T("\x43huy\x1EC3n kho\x61 kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(24, 6, _T("T\x1EED vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(25, 5, _T("\x43\xF2n l\x1EA1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(26, 5, _T("Ngo\xE0i gi\x1EDD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(3, 3, 0, 25);
	xls.SetMerge(4, 4, 0, 25);
	xls.SetMerge(5, 7, 0, 0);
	xls.SetMerge(71, 71, 0, 0);
	xls.SetMerge(5, 7, 1, 1);
	xls.SetMerge(5, 7, 2, 2);
	xls.SetMerge(5, 5, 3, 16);
	xls.SetMerge(6, 6, 3, 6);
	xls.SetMerge(6, 7, 7, 7);
	xls.SetMerge(6, 6, 8, 10);
	xls.SetMerge(6, 7, 11, 11);
	xls.SetMerge(6, 7, 12, 12);
	xls.SetMerge(6, 7, 13, 13);
	xls.SetMerge(6, 7, 14, 14);
	xls.SetMerge(6, 7, 15, 15);
	xls.SetMerge(6, 7, 16, 16);
	xls.SetMerge(5, 5, 17, 19);
	xls.SetMerge(6, 7, 17, 17);
	xls.SetMerge(6, 7, 18, 18);
	xls.SetMerge(6, 7, 19, 19);
	xls.SetMerge(5, 5, 20, 23);
	xls.SetMerge(6, 7, 20, 20);
	xls.SetMerge(6, 7, 21, 21);
	xls.SetMerge(6, 7, 22, 22);
	xls.SetMerge(6, 7, 23, 23);
	xls.SetMerge(6, 7, 24, 24);
	xls.SetMerge(5, 7, 25, 25);

	szSQL =GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 8;
	nCol = 0;
	int nTotal[26];
	for (int i = 1; i< 26; i++)
		nTotal[i] = 0;
	int nIdx = 1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIdx++);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);

		rs.GetValue(_T("socu"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c1"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c2"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c3"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c4"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c5"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c6"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c7"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c8"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c9"), tmpStr);
		nTotal[10] += ToInt(tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c10"), tmpStr);
		nTotal[11] += ToInt(tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c11"), tmpStr);
		nTotal[12] += ToInt(tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c12"), tmpStr);
		nTotal[13] += ToInt(tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c13"), tmpStr);
		nTotal[14] += ToInt(tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("c14"), tmpStr);
		nTotal[15] += ToInt(tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vaovien"), tmpStr);
		nTotal[16] += ToInt(tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T(""), tmpStr);
		nTotal[17] += ToInt(tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("ckden"), tmpStr);
		nTotal[18] += ToInt(tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("ravien"), tmpStr);
		nTotal[19] += ToInt(tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("nxv"), tmpStr);
		nTotal[20] += ToInt(tmpStr);
		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("chuyenvien"), tmpStr);
		nTotal[21] += ToInt(tmpStr);
		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("ckdi"), tmpStr);
		nTotal[22] += ToInt(tmpStr);
		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("tuvong"), tmpStr);
		nTotal[23] += ToInt(tmpStr);
		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("hientai"), tmpStr);
		nTotal[24] += ToInt(tmpStr);
		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vao_vien_ngoai_gio"), tmpStr);
		nTotal[25] += ToInt(tmpStr);
		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellMergedColumns(nCol, nRow , 2);
	xls.SetCellText(nCol, nRow, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER, true, 11);

	for( int i = 1; i< 26; i++)
	{
		tmpStr.Format(_T("%d"), nTotal[i]);
		xls.SetCellText(i+1 , nRow , tmpStr, FMT_NUMBER1|FMT_CENTER, true, 11);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOQUANSOTOANVIEN.xls"));
}
 
void CBCQUANSONEW::OnListDblClick(){
	
} 
void CBCQUANSONEW::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCQUANSONEW::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCQUANSONEW::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad();
	int nCount = 0;
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("socu")), 
			rs.GetValue(_T("c1")), 
			rs.GetValue(_T("c2")), 
			rs.GetValue(_T("c3")),
			rs.GetValue(_T("c4")), 
			rs.GetValue(_T("c5")), 
			rs.GetValue(_T("c6")),
			rs.GetValue(_T("c7")), 
			rs.GetValue(_T("c8")), 
			rs.GetValue(_T("c9")),
			rs.GetValue(_T("c10")), 
			rs.GetValue(_T("c11")), 
			rs.GetValue(_T("c12")),
			rs.GetValue(_T("c13")), 
			rs.GetValue(_T("c14")),
			rs.GetValue(_T("vaovien")), 
			rs.GetValue(_T("")), 
			rs.GetValue(_T("ckden")), 
			rs.GetValue(_T("ravien")), 
			rs.GetValue(_T("nxv")),
			rs.GetValue(_T("chuyenvien")), 
			rs.GetValue(_T("ckdi")), 
			rs.GetValue(_T("tuvong")), 
			rs.GetValue(_T("hientai")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCQUANSONEW::OnAddBCQUANSOTHEONGAY(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCQUANSONEW::OnEditBCQUANSOTHEONGAY(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCQUANSONEW::OnDeleteBCQUANSOTHEONGAY(){
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
 		OnCancelBCQUANSOTHEONGAY();
 	}
	return 0;
}
int CBCQUANSONEW::OnSaveBCQUANSOTHEONGAY(){
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
 		//OnBCQUANSOTHEONGAYListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCQUANSONEW::OnCancelBCQUANSOTHEONGAY(){
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
int CBCQUANSONEW::OnBCQUANSOTHEONGAYListLoadData(){
	return 0;
}
CString CBCQUANSONEW::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString  szSQL, szWhere;

	//Trang thai dieu tri toan vien
	if (m_nAll == 0)
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_nInPatient == 0)
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_nOutPatient == 0)
		szWhere.AppendFormat(_T(" AND htr_outpatient='Y'"));	szWhere.AppendFormat(_T(" AND hd_docno NOT IN (SELECT hnr_docno FROM hms_newborn_record)"));
	szSQL.Format(_T(" SELECT") \
		_T("  deptid,") \
		_T("  SUM(socu) socu,") \
		_T("  SUM(c1) c1,") \
		_T("  SUM(c2) c2,") \
		_T("  SUM(c3) c3,") \
		_T("  SUM(c4) c4,") \
		_T("  SUM(c5) c5,") \
		_T("  SUM(c6) c6,") \
		_T("  SUM(c7) c7,") \
		_T("  SUM(c8) c8,") \
		_T("  SUM(c9) c9,") \
		_T("  SUM(c10) c10,") \
		_T("  SUM(c11) c11,") \
		_T("  SUM(c12) c12,") \
		_T("  SUM(c13) c13,") \
		_T("  SUM(c14) c14,") \
		_T("  SUM(vaovien) vaovien,") \
		_T("  SUM(vao_vien_ngoai_gio) vao_vien_ngoai_gio,") \
		_T("  SUM(ckden) ckden,") \
		_T("  SUM(ravien) ravien,") \
		_T("  SUM(ckdi) ckdi,") \
		_T("  SUM(chuyenvien) chuyenvien,") \
		_T("  SUM(tuvong) tuvong,") \
		_T("  SUM(nxv) nxv,") \
		_T("  SUM((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T("     deptid,") \
		_T("     COUNT(DISTINCT hd_docno) socu,") \
		_T("     SUM(Quantuong) c1,") \
		_T("     SUM(Quan4sao) c2,") \
		_T("     SUM(Quan2sao) c3,") \
		_T("     SUM(BHYTquannhan) c4,") \
		_T("     SUM(BHYTquandoi) c5,") \
		_T("     SUM(BHYTquannothetuong) c6,") \
		_T("     SUM(BHYTquannothe4sao) c7,") \
		_T("     SUM(BHYTquannothe2sao) c8,") \
		_T("     SUM(ban) c9,") \
		_T("     SUM(treemcothe) c10,") \
		_T("     SUM(chinhsach) c11,") \
		_T("     SUM(dichvu) c12,") \
		_T("     SUM(BHYTkhac) c13,") \
		_T("     SUM(BHYTthannhansiquan) c14,") \
		_T("     0 vaovien,") \
		_T("	 0 vao_vien_ngoai_gio,") \
		_T("     0 ckden,") \
		_T("     0 ravien,") \
		_T("     0 ckdi,") \
		_T("     0 chuyenvien,") \
		_T("     0 tuvong,") \
		_T("     0 nxv") \
		_T("   FROM") \
		_T("     (SELECT hd_docno, deptid,") \
		_T("       CASE WHEN hd_object = 1 AND hp_rank IN(15, 16, 17, 18) THEN 1 ELSE 0 END Quantuong,") \
		_T("       CASE WHEN hd_object = 1 AND hp_rank IN(13, 14) THEN 1 ELSE 0 END Quan4sao,") \
		_T("       CASE WHEN hd_object = 1 AND hp_rank NOT IN(13, 14, 15, 16, 17, 18) THEN 1 ELSE 0 END Quan2sao,") \
		_T("       CASE WHEN hd_object = 11 THEN 1 ELSE 0 END BHYTquannhan,") \
		_T("       ") \
		_T("       CASE WHEN hd_object = 10 THEN 1 ELSE 0 END BHYTquandoi,") \
		_T("       ") \
		_T("       CASE WHEN hd_object = 2 AND hp_rank IN(15, 16, 17, 18) THEN 1 ELSE 0 END BHYTquannothetuong,") \
		_T("       CASE WHEN hd_object = 2 AND hp_rank IN(13, 14) THEN 1 ELSE 0 END BHYTquannothe4sao,") \
		_T("       CASE WHEN hd_object = 2 AND hp_rank NOT IN(13, 14, 15, 16, 17, 18) THEN 1 ELSE 0 END BHYTquannothe2sao,") \
		_T("       ") \
		_T("       ") \
		_T("       CASE WHEN hd_object = 3 THEN 1 ELSE 0 END chinhsach,") \
		_T("       CASE WHEN hd_object IN(4, 12) THEN 1 ELSE 0 END BHYTkhac,") \
		_T("       CASE WHEN hd_object = 5 THEN 1 ELSE 0 END BHYTthannhansiquan,") \
		_T("       CASE WHEN hd_object = 7 THEN 1 ELSE 0 END dichvu,") \
		_T("       CASE WHEN hd_object = 8 THEN 1 ELSE 0 END ban,") \
		_T("       CASE WHEN hd_object = 9 THEN 1 ELSE 0 END treemcothe") \
		_T("     FROM") \
		_T("       (SELECT DISTINCT hd_docno,") \
		_T("         hd_object,") \
		_T("         hp_rank,") \
		_T("         trunc_date(htr_admitdate)     AS admitdate,") \
		_T("         trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("         htr_deptid deptid") \
		_T("       FROM hms_patient") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_patientno=hp_patientno)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hd_docno)") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON(htr_docno         =hd_docno)") \
		_T("       WHERE 1 = 1") \
		_T("       AND htr_deptid NOT  IN('A4') %s") \
		_T("       AND htr_status       ='I'") \
		_T("       AND htr_admitdate    < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("       UNION ALL") \
		_T("       SELECT DISTINCT hd_docno,") \
		_T("         hd_object,") \
		_T("         hp_rank,") \
		_T("         trunc_date(htr_admitdate)     AS admitdate,") \
		_T("         trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("         htr_deptid deptid") \
		_T("       FROM hms_patient") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_patientno=hp_patientno)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hd_docno)") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON(htr_docno           =hd_docno)") \
		_T("       WHERE 1 = 1") \
		_T("       AND htr_deptid NOT    IN('A4') %s") \
		_T("       AND htr_status         ='T'") \
		_T("       AND htr_admitdate      < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("       AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("       )") \
		_T("     )") \
		_T("   GROUP BY deptid") \
		_T("   UNION ALL") \
		_T("   SELECT deptid,") \
		_T("     0 socu,") \
		_T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
		_T("     SUM(in_qty) vaovien,") \
		_T("	 SUM(in_qty_in_shift) vao_vien_ngoai_gio,") \
		_T("     SUM(movein_qty) ckden,") \
		_T("     SUM(return_unit) ravien,") \
		_T("     SUM(moveout_qty) ckdi,") \
		_T("     SUM(transfer_qty) chuyenvien,") \
		_T("     SUM(dead) tuvong,") \
		_T("     SUM(nxv) nxv") \
		_T("   FROM") \
		_T("     (SELECT htr_deptid deptid,") \
		_T("       TRUNC(htr_admitdate) admit_date,") \
		_T("       1 in_qty,") \
		_T("	   case when hms_shift_check(htr_admitdate, '16:30', '06:30') > 0 then 1 else 0 end in_qty_in_shift,") \
		_T("       0 movein_qty,") \
		_T("       0 return_unit,") \
		_T("       0 moveout_qty,") \
		_T("       0 transfer_qty,") \
		_T("       0 dead,") \
		_T("       0 nxv") \
		_T("     FROM hms_doc") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno=hd_docno)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON ( hcr_docno       = hd_docno)") \
		_T("     WHERE 1 = 1") \
		_T("	 AND htr_status      <> 'A' %s") \
		_T("     AND hcr_admitdept    =htr_deptid") \
		_T("     AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     UNION ALL") \
		_T("     SELECT htr_deptid,") \
		_T("       TRUNC(htr_admitdate) admit_date,") \
		_T("       0 in_qty,") \
		_T("	   0 in_qty_in_shift,") \
		_T("       1 movein_qty,") \
		_T("       0 return_unit,") \
		_T("       0 moveout_qty,") \
		_T("       0 transfer_qty,") \
		_T("       0 dead,") \
		_T("       0 nxv") \
		_T("     FROM hms_doc") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno=hd_docno)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON ( hcr_docno       = hd_docno )") \
		_T("     WHERE 1 = 1") \
		_T("     AND htr_status      <> 'A' %s") \
		_T("     AND htr_idx          > 1") \
		_T("     AND hcr_admitdept   <>htr_deptid") \
		_T("     AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     UNION ALL") \
		_T("     SELECT htr_deptid,") \
		_T("       TRUNC(htr_admitdate) admit_date,") \
		_T("       0 in_qty,") \
		_T("	   0 in_qty_in_shift,") \
		_T("       0 movein_qty,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion NOT IN('M','F')") \
		_T("         AND hcr_result NOT      IN ( 4, 5, 6,7 )") \
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
		_T("         WHEN htr_suggestion = 'T'") \
		_T("         AND hcr_result     IN ( 5, 6 )") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END dead,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion = 'T'") \
		_T("         AND hcr_result     IN ( 4, 7 )") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END nxv") \
		_T("     FROM hms_doc") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno=hd_docno)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON ( hcr_docno       = hd_docno )") \
		_T("     WHERE 1 = 1") \
		_T("     AND htr_status       = 'T' %s") \
		_T("     AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     UNION ALL") \
		_T("     SELECT htr_deptid,") \
		_T("       TRUNC(htr_dischargedate) admit_date,") \
		_T("       0 in_qty,") \
		_T("	   0 in_qty_in_shift,") \
		_T("       0 movein_qty,") \
		_T("       0 return_unit,") \
		_T("       1 moveout_qty,") \
		_T("       0 transfer_qty,") \
		_T("       0 dead,") \
		_T("       0 nxv") \
		_T("     FROM hms_doc") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno=hd_docno)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON ( hcr_docno       = hd_docno )") \
		_T("     WHERE 1 = 1") \
		_T("     AND ( htr_suggestion ='M') %s") \
		_T("     AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     )") \
		_T("   GROUP BY deptid") \
		_T("   ) Tbl") \
		_T("   GROUP BY deptid") \
		_T("   ORDER BY deptid"),  szWhere,m_szFromDate,
		szWhere,m_szFromDate,m_szFromDate,
		szWhere,m_szFromDate,m_szToDate,
		szWhere,m_szFromDate,m_szToDate,
		szWhere,m_szFromDate,m_szToDate,
		szWhere,m_szFromDate,m_szToDate);
//_msg(_T("szSQL: %s"), szSQL);
	return szSQL;
}