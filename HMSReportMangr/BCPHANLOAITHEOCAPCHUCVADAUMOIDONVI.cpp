#include "BCPHANLOAITHEOCAPCHUCVADAUMOIDONVI.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *pVw = (CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *pVw = (CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *pVw = (CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCPHANLOAITHEOCAPCHUCVADAUMOIDONVIFnc(CWnd *pWnd){
	 return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnAddBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI();
} 
static int _OnEditBCPHANLOAITHEOCAPCHUCVADAUMOIDONVIFnc(CWnd *pWnd){
	 return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnEditBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI();
} 
static int _OnDeleteBCPHANLOAITHEOCAPCHUCVADAUMOIDONVIFnc(CWnd *pWnd){
	 return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnDeleteBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI();
} 
static int _OnSaveBCPHANLOAITHEOCAPCHUCVADAUMOIDONVIFnc(CWnd *pWnd){
	 return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnSaveBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI();
} 
static int _OnCancelBCPHANLOAITHEOCAPCHUCVADAUMOIDONVIFnc(CWnd *pWnd){
	 return ((CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI*)pWnd)->OnCancelBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI();
} 
CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::~CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI(){
}
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 731, 30, 821, 55);
	m_wndPrint.Create(this, _T("&Print"), 826, 30, 916, 55);
	m_wndExport.Create(this, _T("&Export"), 921, 30, 1011, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 431, 30, 511, 55);
	m_wndDepartment.Create(this,516, 30, 726, 55); 

	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_ALIGNMASK);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(1, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("M\xE3"), CFMT_TEXT, 60);

	m_wndList.InsertColumn(3, _T("Qu\xE2n"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(4, _T("H\x1B0u"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(5, _T("\x43\x1ED9ng"), CFMT_MONEY, 70);
	TranslateString(_T("T\x1ED5ng s\x1ED1"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 3, 1, 5, false, true);

	m_wndList.InsertColumn(6, _T("\x43\xE1\x63 TC BTTM"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("\x43\xE1\x63 QK"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(8, _T("\x43\xE1\x63 Q\x110"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(9, _T("\x43\xE1\x63 QC"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(10, _T("\x43\xE1\x63 BC"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(11, _T("\x43\xE1\x63 HV"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(12, _T("\x43\xE1\x63 nh\xE0 tr\x1B0\x1EDDng"), CFMT_MONEY, 90);
	TranslateString(_T("Ph\xE2n lo\x1EA1i th\x65o \x111\x1EA7u m\x1ED1i \x111\x1A1n v\x1ECB"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 6, 1, 12, false, true);
	

}
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnInitializeComponents(){
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
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnSetWindowEvents(){
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
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::SetMode(int nMode){
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
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnFromDateChange(){
	
} */
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnFromDateSetfocus(){
	
} */
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnFromDateKillfocus(){
	
} */
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnToDateChange(){
	
} */
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnToDateSetfocus(){
	
} */
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnToDateKillfocus(){
	
} */
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnToDateCheckValue(){
	return 0;
} 
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 8; 
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL); 
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 29);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 14);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 16);
	xls.SetColumnWidth(12, 8);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O PH\xC2N LO\x1EA0I TH\x45O \x43\x1EA4P \x43H\x1EE8\x43 V\xC0 \x110\x1EA6U M\x1ED0I \x110\x1A0N V\x1ECA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("M\xE3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 7, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 7, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("Ph\xE2n lo\x1EA1i th\x65o \x111\x1EA7u m\x1ED1i \x111\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("\x43\xE1\x63 TC BTTM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("\x43\xE1\x63 QK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 7, _T("\x43\xE1\x63 QÐ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 7, _T("\x43\xE1\x63 QC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 7, _T("\x43\xE1\x63 BC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 7, _T("\x43\xE1\x63 HV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 7, _T("\x43\xE1\x63 nh\xE0 tr\x1B0\x1EDDng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 7, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 0, 12);
	xls.SetMerge(4, 4, 0, 12);
	xls.SetMerge(6, 7, 0, 0);
	xls.SetMerge(6, 7, 1, 1);
	xls.SetMerge(6, 6, 2, 4);
	xls.SetMerge(6, 6, 5, 11);
	while(!rs.IsEOF()){
		rs.GetValue(_T("DOITUONG"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("HP_RANK"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("QUAN"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("HUU"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CONG"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BTTM"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("QK"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("QD"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("QC"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BC"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("HV"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("NT"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
	
		nRow++; 
		rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BC PHAN LOAI THEO CAP CHUC VA DAU MOI DV.xls"));	
	
} 
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnListDblClick(){
	
} 
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnListLoadData(){
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
			rs.GetValue(_T("DOITUONG")), 
			rs.GetValue(_T("HP_RANK")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("HUU")), 
			rs.GetValue(_T("CONG")), 
			rs.GetValue(_T("BTTM")), 
			rs.GetValue(_T("QK")), 
			rs.GetValue(_T("QD")),
			rs.GetValue(_T("QC")), 
			rs.GetValue(_T("BC")), 
			rs.GetValue(_T("HV")),
			rs.GetValue(_T("NT")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnDepartmentSelendok(){
	 
}
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnDepartmentSetfocus(){
	
}*/
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnDepartmentKillfocus(){
	
}*/
long CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept order by id"), szWhere);
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
/*void CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnAddBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnEditBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnDeleteBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI(){
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
 		OnCancelBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI();
 	}
	return 0;
}
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnSaveBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI(){
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
 		//OnBCPHANLOAITHEOCAPCHUCVADAUMOIDONVIListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnCancelBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI(){
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
int CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::OnBCPHANLOAITHEOCAPCHUCVADAUMOIDONVIListLoadData(){
	return 0;
}
CString CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, tmpStr, szWhere,szDept;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HCR_ADMITDEPT = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T("AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSQL.Format(_T(" SELECT HP_RANK,(SELECT DISTINCT SS_DESC FROM SYS_SEL WHERE SS_ID='hms_rank' AND SS_CODE = HP_RANK) AS DOITUONG,") \
_T("        SUM(QUAN) QUAN,SUM(HUU) HUU,SUM(QUAN+HUU) CONG,SUM(BTTM) BTTM,") \
_T("        SUM(QK) QK,SUM(QD) QD,SUM(QC) QC,SUM(BC) BC,SUM(HV) HV,SUM(NT) NT") \
_T(" FROM(SELECT hp_rank,") \
_T("        CASE WHEN hd_object=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=2 THEN 1 ELSE 0 END HUU,") \
_T("        CASE WHEN SUBSTR(hp_workplaceid,1,2)=70 THEN 1 ELSE 0 END BTTM,") \
_T("        CASE WHEN lower(hp_workplace) like(chr(37)||lower('QK')||chr(37)) THEN 1 ELSE 0 END QK,") \
_T("        CASE WHEN lower(hp_workplace) like(chr(37)||lower('Q\x110')||chr(37)) THEN 1 ELSE 0 END QD,") \
_T("        CASE WHEN lower(hp_workplace) like(chr(37)||lower('QC')||chr(37)) THEN 1 ELSE 0 END QC,") \
_T("        CASE WHEN lower(hp_workplace) like(chr(37)||lower('BC')||chr(37)) THEN 1 ELSE 0 END BC,") \
_T("        CASE WHEN lower(hp_workplace) like(chr(37)||lower('HV')||chr(37)) THEN 1 ELSE 0 END HV,") \
_T("        CASE WHEN lower(hp_workplace) like(chr(37)||lower('Tr\x1B0\x1EDDng')||chr(37)) THEN 1 ELSE 0 END NT") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate, hp_workplaceid,hp_workplace,hp_rank") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hp_rank IN(18,17,16,15,14,13) %s %s ") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0 AND hp_rank is not null))") \
_T(" GROUP BY HP_RANK ORDER BY HP_RANK"),szWhere,szDept);
	return szSQL;
}
