#include "BCTHONGKEKHAMBENHVADIEUTRI.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHONGKEKHAMBENHVADIEUTRI *pVw = (CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHONGKEKHAMBENHVADIEUTRI *pVw = (CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHONGKEKHAMBENHVADIEUTRI *pVw = (CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTHONGKEKHAMBENHVADIEUTRI* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CBCTHONGKEKHAMBENHVADIEUTRI *)pWnd)->OnObjectAddNew();
}*/
static int _OnAddBCTHONGKEKHAMBENHVADIEUTRIFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnAddBCTHONGKEKHAMBENHVADIEUTRI();
} 
static int _OnEditBCTHONGKEKHAMBENHVADIEUTRIFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnEditBCTHONGKEKHAMBENHVADIEUTRI();
} 
static int _OnDeleteBCTHONGKEKHAMBENHVADIEUTRIFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnDeleteBCTHONGKEKHAMBENHVADIEUTRI();
} 
static int _OnSaveBCTHONGKEKHAMBENHVADIEUTRIFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnSaveBCTHONGKEKHAMBENHVADIEUTRI();
} 
static int _OnCancelBCTHONGKEKHAMBENHVADIEUTRIFnc(CWnd *pWnd){
	 return ((CBCTHONGKEKHAMBENHVADIEUTRI*)pWnd)->OnCancelBCTHONGKEKHAMBENHVADIEUTRI();
} 
CBCTHONGKEKHAMBENHVADIEUTRI::CBCTHONGKEKHAMBENHVADIEUTRI(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHONGKEKHAMBENHVADIEUTRI::~CBCTHONGKEKHAMBENHVADIEUTRI(){
}
void CBCTHONGKEKHAMBENHVADIEUTRI::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1010, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 85, 55);
	m_wndFromDate.Create(this,90, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 440, 55); 
	m_wndLoad.Create(this, _T("&Load"), 445, 30, 530, 55);
	m_wndPrint.Create(this, _T("&Print"), 535, 30, 620, 55);
	m_wndExport.Create(this, _T("&Export"), 625, 30, 705, 55);
	m_wndList.Create(this,5, 64, 1010, 614); 

}
void CBCTHONGKEKHAMBENHVADIEUTRI::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(1, _T("Object"), CFMT_TEXT, 100);

	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("H\x1B0u"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(5, _T("K"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("\x110T"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(7, _T("K"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("\x110T"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(9, _T("K"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("\x110T"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(11, _T("K"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("\x110T"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(13, _T("K"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("\x110T"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(15, _T("K"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(16, _T("\x110T"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(17, _T("K"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(18, _T("\x110T"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(19, _T("\x43\x1EA5p ph\xE1t thu\x1ED1\x63"), CFMT_MONEY, 100);

	CString tmpStr;

	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndList.GetHeaderControl()->SetItemHeight(3);

	TranslateString(_T("T\x1ED5ng s\x1ED1"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 4, true, false);

	TranslateString(_T("\x110\xE3 kh\xE1m v\xE0 \x111i\x1EC1u tr\x1ECB t\x1EA1i \x62\x1EC7nh vi\x1EC7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 5, 1, 18, true, false);

	TranslateString(_T("N\x1ED9i"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 5, 2, 6);

	TranslateString(_T("Ngo\x1EA1i"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 7, 2, 8);

	TranslateString(_T("M\x1EAFt"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 9, 2, 10);

	TranslateString(_T("TMH"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 11, 2, 12);

	TranslateString(_T("RHM"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 13, 2, 14);

	TranslateString(_T("S-Ph\x1EE5"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 15, 2, 16);

	TranslateString(_T("\x43\x1ED9ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 17, 2, 18);

	m_wndList.SetDisplayColor(true);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
/**/
}
void CBCTHONGKEKHAMBENHVADIEUTRI::OnSetWindowEvents(){
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CBCTHONGKEKHAMBENHVADIEUTRI::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	//DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CBCTHONGKEKHAMBENHVADIEUTRI::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHONGKEKHAMBENHVADIEUTRI::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHONGKEKHAMBENHVADIEUTRI::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();

}
int CBCTHONGKEKHAMBENHVADIEUTRI::SetMode(int nMode){
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
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnFromDateChange(){
	
} */
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnFromDateSetfocus(){
	
} */
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnFromDateKillfocus(){
	
} */
int CBCTHONGKEKHAMBENHVADIEUTRI::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnToDateChange(){
	
} */
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnToDateSetfocus(){
	
} */
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnToDateKillfocus(){
	
} */
int CBCTHONGKEKHAMBENHVADIEUTRI::OnToDateCheckValue(){
	return 0;
} 
void CBCTHONGKEKHAMBENHVADIEUTRI::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTHONGKEKHAMBENHVADIEUTRI::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail = NULL;
	CRecord rs(&pMF->m_db);
	int nCount[18];
	for (int i = 0; i < 18; i++)
		nCount[i] = 0;
	CString szSQL,tmpStr, szWhere, szObject, szPos, szSysDate;
	if (!rpt.Init(_T("Reports\\HMS\\BAOCAOTHONGKETINHHINHKHAMBENHVADIEUTRINOITRUCBCC.RPT")))
		return;
	rptDetail = rpt.GetReportHeader();
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	szSQL.Format(_T("push_highclasscadre(to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'), to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))"), m_szFromDate, m_szToDate);
	pMF->ExecDML(szSQL);
	szSQL.Format(_T("select * from tr_highclasscadre_p1 left join tr_highclasscadre_p2 using (cap_bac)"));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("rank"), rs.GetValue(_T("cap_bac")));
		for (int i = 1; i < rs.GetFieldCount(); i++){
			nCount[i-1] += str2int(rs.GetValue(rs.GetFieldName(i))); 
			rptDetail->SetValue(int2str(i), rs.GetValue(rs.GetFieldName(i)));
		}
		rs.MoveNext();
	}
	for (int i = 0; i < 18; i++){
		szPos.Format(_T("s%d"), i+1);
		rpt.GetReportFooter()->SetValue(szPos, nCount[i]);
	}
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	return;
	szSQL = GetQueryString();
	_fmsg(_T("%s"),szSQL);
	int ret =0;
	ret = rs.ExecSQL(szSQL);
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	int nCONG[18];
	for(int i = 0 ; i<18; i++)
	{
		nCONG[i] = 0;
	}

	while (!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();
		//doituong
		rs.GetValue(_T("DOITUONG"), tmpStr);
		rptDetail->SetValue(_T("rank"), tmpStr);
		//Quan
		rs.GetValue(_T("QUAN"), tmpStr);
		nCONG[0] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		//Huu
		rs.GetValue(_T("HUU"), tmpStr);
		nCONG[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//Cong
		rs.GetValue(_T("CONG"), tmpStr);
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		//Noi K
		rs.GetValue(_T("NOIK"), tmpStr);
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		//Noi DT
		rs.GetValue(_T("NOIDT"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		//Ngoai K
		rs.GetValue(_T("NGOAIK"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		//Ngoai DT
		rs.GetValue(_T("NGOAIDT"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//Mat K
		rs.GetValue(_T("MATK"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		//Mat DT
		rs.GetValue(_T("MATDT"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		//TMH K
		rs.GetValue(_T("TMHK"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		//TMH DT
		rs.GetValue(_T("TMHDT"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		//RHM K
		rs.GetValue(_T("RHMK"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		//RMH DT
		rs.GetValue(_T("RHMDT"), tmpStr);
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		//Sanphu K
		rs.GetValue(_T("SANPHUK"), tmpStr);
		nCONG[13] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);
		//Sanphu DT
		rs.GetValue(_T("SANPHUDT"), tmpStr);
		nCONG[14] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);
		//Cong K
		rs.GetValue(_T("CONGK"), tmpStr);
		nCONG[15] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);
		//Cong DT
		rs.GetValue(_T("CONGDT"), tmpStr);
		nCONG[16] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);
		//Cap phat thuoc
		rs.GetValue(_T("CPT"), tmpStr);
		nCONG[17] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);
		rs.MoveNext();
	}
	CString  szField;
	for( int i = 1; i<=18; i++)
	{
		szField.Format(_T("s%d"), i);
		tmpStr.Format(_T("%d"), nCONG[i-1]);
		rpt.GetReportFooter()->SetValue(szField, tmpStr);
	}
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();	
} 

void CBCTHONGKEKHAMBENHVADIEUTRI::OnExportSelect(){
	UpdateData();
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString tmpStr;
	int nRow = 0, nCount[18];
	if (OnCheckBeforeExport(&xls, &rs) < 0) return;
	xls.SetWorksheet(0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098);
	nRow = 7;
	for (int i = 0; i < 18; i++) nCount[i] = 0;
	while (!rs.IsEOF()){
		xls.SetCellText(0, nRow, rs.GetValue(_T("cap_bac")), FMT_TEXT);
		for (int i = 1; i < rs.GetFieldCount(); i++){
			nCount[i-1] += str2int(rs.GetValue(rs.GetFieldName(i))); 
			xls.SetCellText(i, nRow, rs.GetValue(rs.GetFieldName(i)), FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(0, nRow, _T("\x43\x1ED9ng:"), FMT_TEXT, true);
	for (int i = 0; i < 18; i++)
		xls.SetCellText(i+1, nRow, int2str(nCount[i]), FMT_NUMBER1, true);
	xls.Save(_T("Exports\\KHAMCBCC.xls"));
} 

int CBCTHONGKEKHAMBENHVADIEUTRI::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	if (!xls->Load(_T("Exports\\MAU_KHAMCBCC.xls"))){
		AfxMessageBox(_T("MAU_KHAMCBCC.xls"));
		return -1;
	}
	szSQL.Format(_T("push_highclasscadre(to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'), to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))"), m_szFromDate, m_szToDate);
	pMF->ExecDML(szSQL);
	szSQL.Format(_T("select * from tr_highclasscadre_p1 left join tr_highclasscadre_p2 using (cap_bac)"));
	rs->ExecSQL(szSQL);
	if (rs->IsEOF()){
		AfxMessageBox(_T("No Data!"));
		return -1;
	}
	return 0;
}

void CBCTHONGKEKHAMBENHVADIEUTRI::OnListDblClick(){
	
} 
void CBCTHONGKEKHAMBENHVADIEUTRI::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHONGKEKHAMBENHVADIEUTRI::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHONGKEKHAMBENHVADIEUTRI::OnListLoadData(){
	UpdateData();
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nRes = 0, nItem = 0, nIndex = 1;
	int nCount[18];
	for (int i = 0; i < 18; i++)
		nCount[i] = 0;
	CString szSQL,tmpStr, szWhere;
	szSQL.Format(_T("push_highclasscadre(to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'), to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))"), m_szFromDate, m_szToDate);
	nRes = str2int(pMF->ExecDML(szSQL));
	if (nRes <= 0) return nRes;
	szSQL.Format(_T("select * from tr_highclasscadre_p1 left join tr_highclasscadre_p2 using (cap_bac)"));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		nItem = m_wndList.AddItems(int2str(nIndex++), NULL);
		for (int i = 0; i < rs.GetFieldCount(); i++){
			if (i > 0) nCount[i] += str2int(rs.GetValue(rs.GetFieldName(i)));
			m_wndList.SetItemText(nItem, i+1, rs.GetValue(rs.GetFieldName(i)));
		}
		rs.MoveNext();
	}
	//nItem = m_wndList.AddItems(_T("Total"), NULL);
	//for (int i = 0; i < 18; i++)
	//	m_wndList.SetItemText(nItem, i+1, int2str(nCount[i]));
	m_wndList.EndLoad();
	return nRes;

}
void CBCTHONGKEKHAMBENHVADIEUTRI::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHONGKEKHAMBENHVADIEUTRI::OnObjectSelendok(){
	 
}
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnObjectSetfocus(){
	
}*/
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnObjectKillfocus(){
	
}*/
long CBCTHONGKEKHAMBENHVADIEUTRI::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type = 'KB' order by id"));
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCTHONGKEKHAMBENHVADIEUTRI::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCTHONGKEKHAMBENHVADIEUTRI::OnAddBCTHONGKEKHAMBENHVADIEUTRI(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHONGKEKHAMBENHVADIEUTRI::OnEditBCTHONGKEKHAMBENHVADIEUTRI(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHONGKEKHAMBENHVADIEUTRI::OnDeleteBCTHONGKEKHAMBENHVADIEUTRI(){
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
 		OnCancelBCTHONGKEKHAMBENHVADIEUTRI();
 	}
	return 0;
}
int CBCTHONGKEKHAMBENHVADIEUTRI::OnSaveBCTHONGKEKHAMBENHVADIEUTRI(){
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
 		//OnBCTHONGKEKHAMBENHVADIEUTRIListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHONGKEKHAMBENHVADIEUTRI::OnCancelBCTHONGKEKHAMBENHVADIEUTRI(){
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
int CBCTHONGKEKHAMBENHVADIEUTRI::OnBCTHONGKEKHAMBENHVADIEUTRIListLoadData(){
	return 0;
}
CString CBCTHONGKEKHAMBENHVADIEUTRI::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL,szObject,szWhere,szWhere1,szWhere2,szObject1;
	szWhere.Format(_T(" AND HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate, m_szToDate);
	szWhere1.Format(_T(" AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate, m_szToDate);
	szWhere2.Format(_T(" AND HPO_ORDERDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate, m_szToDate);
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND HE_DEPTID = '%s'"), m_szObjectKey);
		szObject1.AppendFormat(_T(" AND hpo_deptid = '%s'"), m_szObjectKey);
	szSQL.Format(_T(" SELECT (SELECT DISTINCT SS_DESC FROM SYS_SEL WHERE SS_ID='hms_rank' AND SS_CODE = HP_RANK) AS DOITUONG,") \
_T(" 				       HP_RANK,") \
_T(" 				       QUAN,HUU,") \
_T(" 				       (QUAN+HUU) AS CONG,") \
_T(" 				       NOIK, NOIDT, NGOAIK, NGOAIDT, MATK, MATDT, TMHK, TMHDT,") \
_T(" 				       RHMK, RHMDT, SANPHUK, SANPHUDT,") \
_T(" 				       (NOIK+NGOAIK+MATK+TMHK+RHMK+SANPHUK) AS CONGK,") \
_T(" 				       (NOIDT+NGOAIDT+MATDT+TMHDT+RHMDT+SANPHUDT) AS CONGDT,") \
_T(" 				       CPT") \
_T(" FROM(SELECT HP_RANK,QUAN,HUU,NOIK,NOIDT,NGOAIK,NGOAIDT,MATK,") \
_T(" 				       MATDT,TMHK,TMHDT,RHMK,RHMDT,SANPHUK,SANPHUDT,CPT") \
_T("      FROM(SELECT HP_RANK,") \
_T(" 				       SUM(QUAN) QUAN,") \
_T(" 				       SUM(HUU) HUU,") \
_T(" 				       SUM(NOIK) NOIK,") \
_T(" 				       SUM(NOIDT) NOIDT,") \
_T(" 				       SUM(NGOAIK) NGOAIK,") \
_T(" 				       SUM(NGOAIDT) NGOAIDT,") \
_T(" 				       SUM(MATK) MATK,") \
_T(" 				       SUM(MATDT) MATDT,") \
_T(" 				       SUM(TMHK) TMHK,") \
_T(" 				       SUM(TMHDT) TMHDT,") \
_T(" 				       SUM(RHMK) RHMK,") \
_T(" 				       SUM(RHMDT) RHMDT,") \
_T(" 				       SUM(SANPHUK) SANPHUK,") \
_T(" 				       SUM(SANPHUDT) SANPHUDT") \
_T("          FROM(SELECT HP_RANK,") \
_T(" 				       CASE WHEN HD_OBJECT= 1 %s THEN 1 ELSE 0 END AS QUAN,") \
_T(" 				       CASE WHEN HD_OBJECT= 2 %s THEN 1 ELSE 0 END AS HUU,") \
_T(" 				       CASE WHEN HRL_TYPE = 2 AND HE_STATUS in('T','P') %s THEN 1 ELSE 0 END AS NOIK,") \
_T(" 				       CASE WHEN HRL_TYPE = 2 AND HCR_NUMINWARD>0 %s THEN 1 ELSE 0 END AS NOIDT,") \
_T(" 				       CASE WHEN HRL_TYPE = 3 AND HE_STATUS in('T','P') %s THEN 1 ELSE 0 END AS NGOAIK,") \
_T(" 				       CASE WHEN HRL_TYPE = 3 AND HCR_NUMINWARD>0 %s THEN 1 ELSE 0 END AS NGOAIDT,") \
_T(" 				       CASE WHEN HRL_TYPE = 4 AND HE_STATUS in('T','P') %s THEN 1 ELSE 0 END AS MATK,") \
_T(" 				       CASE WHEN HRL_TYPE = 4 AND HCR_NUMINWARD>0 %s THEN 1 ELSE 0 END AS MATDT,") \
_T(" 				       CASE WHEN HRL_TYPE = 0 AND HRL_ID = 4 AND HE_STATUS in('T','P') %s THEN 1 ELSE 0 END AS TMHK,") \
_T(" 				       CASE WHEN HRL_TYPE = 0 AND HRL_ID = 4 AND HCR_NUMINWARD>0 %s THEN 1 ELSE 0 END AS TMHDT,") \
_T(" 				       CASE WHEN HRL_TYPE = 6 AND HE_STATUS in('T','P') %s THEN 1 ELSE 0 END AS RHMK,") \
_T(" 				       CASE WHEN HRL_TYPE = 6 AND HCR_NUMINWARD>0 %s THEN 1 ELSE 0 END AS RHMDT,") \
_T(" 				       CASE WHEN HRL_TYPE = 7 AND HE_STATUS in('T','P') %s THEN 1 ELSE 0 END AS SANPHUK,") \
_T(" 				       CASE WHEN HRL_TYPE = 7 AND HCR_NUMINWARD>0 %s THEN 1 ELSE 0 END AS SANPHUDT") \
_T("          FROM HMS_DOC") \
_T("          LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T("          LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_DOCNO=HD_DOCNO)") \
_T("          LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
_T("          LEFT JOIN HMS_PATIENT ON(HP_PATIENTNO=HD_PATIENTNO)") \
_T("          WHERE HP_RANK IN (18,17,16,15,14,13)") \
_T("             %s") \
_T("       )") \
_T("       GROUP BY HP_RANK") \
_T("     )") \
_T(" LEFT JOIN (SELECT HP_RANK,") \
_T("                   COUNT(HPO_DOCNO) AS CPT") \
_T("            FROM HMS_DOC") \
_T(" 				   LEFT JOIN HMS_PATIENT ON(HP_PATIENTNO=HD_PATIENTNO)") \
_T(" 				   LEFT JOIN HMS_PHARMAORDER ON(HPO_DOCNO=HD_DOCNO)") \
_T(" 				   WHERE HPO_ORDERSTATUS in('S', 'A') AND HP_RANK IN (18,17,16,15,14,13) %s %s") \
_T(" 				   GROUP BY HP_RANK ) USING(HP_RANK)") \
_T(" )"), szWhere,szWhere,szWhere,szWhere1,szWhere,szWhere1,szWhere,szWhere1,szWhere,szWhere1,szWhere,szWhere1,szWhere,szWhere1,szObject,szWhere2,szObject1);
	return szSQL;
}