#include "BCTINHHINHPHATTHUAT.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHPHATTHUAT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHPHATTHUAT *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTINHHINHPHATTHUAT *pVw = (CBCTINHHINHPHATTHUAT *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTINHHINHPHATTHUAT *pVw = (CBCTINHHINHPHATTHUAT *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHPHATTHUAT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTINHHINHPHATTHUAT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHATTHUAT*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTINHHINHPHATTHUAT* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHPHATTHUAT *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCTINHHINHPHATTHUAT *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCTINHHINHPHATTHUATFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHATTHUAT*)pWnd)->OnAddBCTINHHINHPHATTHUAT();
} 
static int _OnEditBCTINHHINHPHATTHUATFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHATTHUAT*)pWnd)->OnEditBCTINHHINHPHATTHUAT();
} 
static int _OnDeleteBCTINHHINHPHATTHUATFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHATTHUAT*)pWnd)->OnDeleteBCTINHHINHPHATTHUAT();
} 
static int _OnSaveBCTINHHINHPHATTHUATFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHATTHUAT*)pWnd)->OnSaveBCTINHHINHPHATTHUAT();
} 
static int _OnCancelBCTINHHINHPHATTHUATFnc(CWnd *pWnd){
	 return ((CBCTINHHINHPHATTHUAT*)pWnd)->OnCancelBCTINHHINHPHATTHUAT();
} 
CBCTINHHINHPHATTHUAT::CBCTINHHINHPHATTHUAT(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTINHHINHPHATTHUAT::~CBCTINHHINHPHATTHUAT(){
}
void CBCTINHHINHPHATTHUAT::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 59);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 82, 55);
	m_wndFromDate.Create(this,86, 30, 196, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 395, 55); 
	m_wndLoad.Create(this, _T("&Load"), 687, 30, 771, 55);
	m_wndPrint.Create(this, _T("&Print"), 776, 30, 860, 55);
	m_wndList.Create(this,5, 65, 1012, 616); 
	m_wndDepartmentLab.Create(this, _T("Department"), 401, 30, 481, 55);
	m_wndDepartment.Create(this,486, 30, 682, 55); 
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_ALIGNTOP);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(false);
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Khoa"), CFMT_TEXT, 80);
	
	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(3, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(4, _T("\x42HQ\x110"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("\x42\x1EA0N"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(6, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(7, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(8, _T("DV"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(9, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(10, _T("BHTN"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(11, _T("\x43\x1ED8NG"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(12, _T("T\x1EF6 L\x1EC6 %"), CFMT_NUMBER, 50);
	TranslateString(_T("Lo\x1EA1i \x111\x1EB7\x63 \x62i\x1EC7t"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 12, false, false);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(13, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(14, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(15, _T("\x42HQ\x110"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(16, _T("\x42\x1EA0N"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(17, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(18, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(19, _T("DV"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(20, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(21, _T("BHTN"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(22, _T("\x43\x1ED8NG"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(23, _T("T\x1EF6 L\x1EC6 %"), CFMT_NUMBER, 50);
	TranslateString(_T("Lo\x1EA1i I"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 13, 1, 23, false, false);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(24, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(25, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(26, _T("\x42HQ\x110"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(27, _T("\x42\x1EA0N"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(28, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(29, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(30, _T("DV"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(31, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(32, _T("BHTN"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(33, _T("\x43\x1ED8NG"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(34, _T("T\x1EF6 L\x1EC6 %"), CFMT_NUMBER, 50);
	TranslateString(_T("Lo\x1EA1i II"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 24, 1, 34, false, false);
	//------------------------------------------------------------------------
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(35, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(36, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(37, _T("\x42HQ\x110"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(38, _T("\x42\x1EA0N"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(39, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(40, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(41, _T("DV"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(42, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(43, _T("BHTN"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(44, _T("\x43\x1ED8NG"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(45, _T("T\x1EF6 L\x1EC6 %"), CFMT_NUMBER, 50);
	TranslateString(_T("Lo\x1EA1i III"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 35, 1, 45, false, false);
}
void CBCTINHHINHPHATTHUAT::OnInitializeComponents(){
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
void CBCTINHHINHPHATTHUAT::OnSetWindowEvents(){
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
void CBCTINHHINHPHATTHUAT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCTINHHINHPHATTHUAT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTINHHINHPHATTHUAT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTINHHINHPHATTHUAT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCTINHHINHPHATTHUAT::SetMode(int nMode){
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
/*void CBCTINHHINHPHATTHUAT::OnFromDateChange(){
	
} */
/*void CBCTINHHINHPHATTHUAT::OnFromDateSetfocus(){
	
} */
/*void CBCTINHHINHPHATTHUAT::OnFromDateKillfocus(){
	
} */
int CBCTINHHINHPHATTHUAT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTINHHINHPHATTHUAT::OnToDateChange(){
	
} */
/*void CBCTINHHINHPHATTHUAT::OnToDateSetfocus(){
	
} */
/*void CBCTINHHINHPHATTHUAT::OnToDateKillfocus(){
	
} */
int CBCTINHHINHPHATTHUAT::OnToDateCheckValue(){
	return 0;
} 
void CBCTINHHINHPHATTHUAT::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTINHHINHPHATTHUAT::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CReportSection *rptDetail = NULL;
	CReportSection* grp=NULL;
	CRecord rs(&pMF->m_db);
	CString szCol, szData;
	if(!rpt.Init(_T("Reports/HMS/TINHHINHPHAUTHUAT.rpt")) )
		return ;
	CReportSection *pTemp = rpt.GetGroupHeader(1);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	BeginWaitCursor();
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	int nCONG[46];
	for(int i = 0 ; i<46; i++)
	{
		nCONG[i] = 0;
	}
	while(!rs.IsEOF()) 	{	 		grp = rpt.GetGroupHeader(1);
		rptDetail = rpt.AddDetail(grp);		rs.GetValue(_T("HO_DEPTID"), tmpStr); 		rptDetail->SetValue(_T("0"), tmpStr); 	 		rs.GetValue(_T("QUAN"), tmpStr); 		nCONG[1] +=ToInt(tmpStr);		rptDetail->SetValue(_T("1"), tmpStr); 	 		rs.GetValue(_T("BHQH"), tmpStr); 		nCONG[2] +=ToInt(tmpStr);		rptDetail->SetValue(_T("2"), tmpStr); 	 		rs.GetValue(_T("BHQD"), tmpStr); 		nCONG[3] +=ToInt(tmpStr);		rptDetail->SetValue(_T("3"), tmpStr); 	 		rs.GetValue(_T("BAN"), tmpStr); 		nCONG[4] +=ToInt(tmpStr);		rptDetail->SetValue(_T("4"), tmpStr); 	 		rs.GetValue(_T("TED6T"), tmpStr); 		nCONG[5] +=ToInt(tmpStr);		rptDetail->SetValue(_T("5"), tmpStr); 	 		rs.GetValue(_T("CS"), tmpStr);		nCONG[6] +=ToInt(tmpStr);		rptDetail->SetValue(_T("6"), tmpStr); 	 		rs.GetValue(_T("DV"), tmpStr);		nCONG[7] +=ToInt(tmpStr);		rptDetail->SetValue(_T("7"), tmpStr); 	 		rs.GetValue(_T("BHK"), tmpStr);		nCONG[8] +=ToInt(tmpStr);		rptDetail->SetValue(_T("8"), tmpStr); 	 		rs.GetValue(_T("BHTN"), tmpStr); 		nCONG[9] +=ToInt(tmpStr);		rptDetail->SetValue(_T("9"), tmpStr); 	 		rs.GetValue(_T("CONG"), tmpStr); 		nCONG[10] +=ToInt(tmpStr);		rptDetail->SetValue(_T("10"), tmpStr); 		rs.GetValue(_T("QUAN1"), tmpStr); 		nCONG[12] +=ToInt(tmpStr);		rptDetail->SetValue(_T("12"), tmpStr); 	 		rs.GetValue(_T("BHQH1"), tmpStr); 		nCONG[13] +=ToInt(tmpStr);		rptDetail->SetValue(_T("13"), tmpStr); 	 		rs.GetValue(_T("BHQD1"), tmpStr); 		nCONG[14] +=ToInt(tmpStr);		rptDetail->SetValue(_T("14"), tmpStr); 	 		rs.GetValue(_T("BAN1"), tmpStr); 		nCONG[15] +=ToInt(tmpStr);		rptDetail->SetValue(_T("15"), tmpStr); 	 		rs.GetValue(_T("TED6T1"), tmpStr); 		nCONG[16] +=ToInt(tmpStr);		rptDetail->SetValue(_T("16"), tmpStr); 	 		rs.GetValue(_T("CS1"), tmpStr); 		nCONG[17] +=ToInt(tmpStr);		rptDetail->SetValue(_T("17"), tmpStr); 	 		rs.GetValue(_T("DV1"), tmpStr); 		nCONG[18] +=ToInt(tmpStr);		rptDetail->SetValue(_T("18"), tmpStr); 	 		rs.GetValue(_T("BHK1"), tmpStr); 		nCONG[19] +=ToInt(tmpStr);		rptDetail->SetValue(_T("19"), tmpStr); 	 		rs.GetValue(_T("BHTN1"), tmpStr); 		nCONG[20] +=ToInt(tmpStr);		rptDetail->SetValue(_T("20"), tmpStr); 	 		rs.GetValue(_T("CONG1"), tmpStr); 		nCONG[21] +=ToInt(tmpStr);		rptDetail->SetValue(_T("21"), tmpStr); 		rs.GetValue(_T("QUAN2"), tmpStr); 		nCONG[23] +=ToInt(tmpStr);		rptDetail->SetValue(_T("23"), tmpStr); 	 		rs.GetValue(_T("BHQH2"), tmpStr); 		nCONG[24] +=ToInt(tmpStr);		rptDetail->SetValue(_T("24"), tmpStr); 	 		rs.GetValue(_T("BHQD2"), tmpStr); 		nCONG[25] +=ToInt(tmpStr);		rptDetail->SetValue(_T("25"), tmpStr); 	 		rs.GetValue(_T("BAN2"), tmpStr); 		nCONG[26] +=ToInt(tmpStr);		rptDetail->SetValue(_T("26"), tmpStr); 	 		rs.GetValue(_T("TED6T2"), tmpStr); 		nCONG[27] +=ToInt(tmpStr);		rptDetail->SetValue(_T("27"), tmpStr); 	 		rs.GetValue(_T("CS2"), tmpStr); 		nCONG[28] +=ToInt(tmpStr);		rptDetail->SetValue(_T("28"), tmpStr); 	 		rs.GetValue(_T("DV2"), tmpStr); 		nCONG[29] +=ToInt(tmpStr);		rptDetail->SetValue(_T("29"), tmpStr); 	 		rs.GetValue(_T("BHK2"), tmpStr); 		nCONG[30] +=ToInt(tmpStr);		rptDetail->SetValue(_T("30"), tmpStr); 	 		rs.GetValue(_T("BHTN2"), tmpStr); 		nCONG[31] +=ToInt(tmpStr);		rptDetail->SetValue(_T("31"), tmpStr); 	 		rs.GetValue(_T("CONG2"), tmpStr); 		nCONG[32] +=ToInt(tmpStr);		rptDetail->SetValue(_T("32"), tmpStr); 		rs.GetValue(_T("QUAN3"), tmpStr); 		nCONG[34] +=ToInt(tmpStr);		rptDetail->SetValue(_T("34"), tmpStr); 	 		rs.GetValue(_T("BHQH3"), tmpStr); 		nCONG[35] +=ToInt(tmpStr);		rptDetail->SetValue(_T("35"), tmpStr); 	 		rs.GetValue(_T("BHQD3"), tmpStr); 		nCONG[36] +=ToInt(tmpStr);		rptDetail->SetValue(_T("36"), tmpStr); 	 		rs.GetValue(_T("BAN3"), tmpStr); 		nCONG[37] +=ToInt(tmpStr);		rptDetail->SetValue(_T("37"), tmpStr); 	 		rs.GetValue(_T("TED6T3"), tmpStr); 		nCONG[38] +=ToInt(tmpStr);		rptDetail->SetValue(_T("38"), tmpStr); 	 		rs.GetValue(_T("CS3"), tmpStr); 		nCONG[39] +=ToInt(tmpStr);		rptDetail->SetValue(_T("39"), tmpStr); 	 		rs.GetValue(_T("DV3"), tmpStr); 		nCONG[40] +=ToInt(tmpStr);		rptDetail->SetValue(_T("40"), tmpStr); 	 		rs.GetValue(_T("BHK3"), tmpStr); 		nCONG[41] +=ToInt(tmpStr);		rptDetail->SetValue(_T("41"), tmpStr); 	 		rs.GetValue(_T("BHTN3"), tmpStr); 		nCONG[42] +=ToInt(tmpStr);		rptDetail->SetValue(_T("42"), tmpStr); 	 		rs.GetValue(_T("CONG3"), tmpStr); 		nCONG[43] +=ToInt(tmpStr);		rptDetail->SetValue(_T("43"), tmpStr); 		rs.GetValue(_T("TONGCONG"), tmpStr); 		nCONG[45] +=ToInt(tmpStr);		rptDetail->SetValue(_T("45"), tmpStr); 	 		rs.MoveNext();		}
	/*CString  szField,szNewGroup,szOldGroup;
	rs.GetValue(_T("ID"), szNewGroup);
	if(szNewGroup !=szOldGroup)
	{
		for( int i = 1; i<=46; i++)
		{
			szField.Format(_T("s%d"), i);
			tmpStr.Format(_T("%d"), nCONG[i]);
			rpt.AddDetail(rpt.GetGroupHeader(2))->SetValue(szField, tmpStr);
		}
	}
	szOldGroup=szNewGroup;*/
	//-------noi tru - ngoai tru - yeu cau
	grp = rpt.GetGroupHeader(3);
	rptDetail = rpt.AddDetail(grp);
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()) 	{	 		grp = rpt.GetGroupHeader(3);
		rptDetail = rpt.AddDetail(grp);		rs.GetValue(_T("TYPE"), tmpStr); 		rptDetail->SetValue(_T("0_0"), tmpStr); 	 		rs.GetValue(_T("QUAN"), tmpStr); 		nCONG[1] +=ToInt(tmpStr);		rptDetail->SetValue(_T("1_1"), tmpStr); 	 		rs.GetValue(_T("BHQH"), tmpStr); 		nCONG[2] +=ToInt(tmpStr);		rptDetail->SetValue(_T("2_2"), tmpStr); 	 		rs.GetValue(_T("BHQD"), tmpStr); 		nCONG[3] +=ToInt(tmpStr);		rptDetail->SetValue(_T("3_3"), tmpStr); 	 		rs.GetValue(_T("BAN"), tmpStr); 		nCONG[4] +=ToInt(tmpStr);		rptDetail->SetValue(_T("4_4"), tmpStr); 	 		rs.GetValue(_T("TED6T"), tmpStr); 		nCONG[5] +=ToInt(tmpStr);		rptDetail->SetValue(_T("5_5"), tmpStr); 	 		rs.GetValue(_T("CS"), tmpStr);		nCONG[6] +=ToInt(tmpStr);		rptDetail->SetValue(_T("6_6"), tmpStr); 	 		rs.GetValue(_T("DV"), tmpStr);		nCONG[7] +=ToInt(tmpStr);		rptDetail->SetValue(_T("7_7"), tmpStr); 	 		rs.GetValue(_T("BHK"), tmpStr);		nCONG[8] +=ToInt(tmpStr);		rptDetail->SetValue(_T("8_8"), tmpStr); 	 		rs.GetValue(_T("BHTN"), tmpStr); 		nCONG[9] +=ToInt(tmpStr);		rptDetail->SetValue(_T("9_9"), tmpStr); 	 		rs.GetValue(_T("CONG"), tmpStr); 		nCONG[10] +=ToInt(tmpStr);		rptDetail->SetValue(_T("10_10"), tmpStr); 		rs.GetValue(_T("QUAN1"), tmpStr); 		nCONG[12] +=ToInt(tmpStr);		rptDetail->SetValue(_T("12_12"), tmpStr); 	 		rs.GetValue(_T("BHQH1"), tmpStr); 		nCONG[13] +=ToInt(tmpStr);		rptDetail->SetValue(_T("13_13"), tmpStr); 	 		rs.GetValue(_T("BHQD1"), tmpStr); 		nCONG[14] +=ToInt(tmpStr);		rptDetail->SetValue(_T("14_14"), tmpStr); 	 		rs.GetValue(_T("BAN1"), tmpStr); 		nCONG[15] +=ToInt(tmpStr);		rptDetail->SetValue(_T("15_15"), tmpStr); 	 		rs.GetValue(_T("TED6T1"), tmpStr); 		nCONG[16] +=ToInt(tmpStr);		rptDetail->SetValue(_T("16_16"), tmpStr); 	 		rs.GetValue(_T("CS1"), tmpStr); 		nCONG[17] +=ToInt(tmpStr);		rptDetail->SetValue(_T("17_17"), tmpStr); 	 		rs.GetValue(_T("DV1"), tmpStr); 		nCONG[18] +=ToInt(tmpStr);		rptDetail->SetValue(_T("18_18"), tmpStr); 	 		rs.GetValue(_T("BHK1"), tmpStr); 		nCONG[19] +=ToInt(tmpStr);		rptDetail->SetValue(_T("19_19"), tmpStr); 	 		rs.GetValue(_T("BHTN1"), tmpStr); 		nCONG[20] +=ToInt(tmpStr);		rptDetail->SetValue(_T("20_20"), tmpStr); 	 		rs.GetValue(_T("CONG1"), tmpStr); 		nCONG[21] +=ToInt(tmpStr);		rptDetail->SetValue(_T("21_21"), tmpStr); 		rs.GetValue(_T("QUAN2"), tmpStr); 		nCONG[23] +=ToInt(tmpStr);		rptDetail->SetValue(_T("23_23"), tmpStr); 	 		rs.GetValue(_T("BHQH2"), tmpStr); 		nCONG[24] +=ToInt(tmpStr);		rptDetail->SetValue(_T("24_24"), tmpStr); 	 		rs.GetValue(_T("BHQD2"), tmpStr); 		nCONG[25] +=ToInt(tmpStr);		rptDetail->SetValue(_T("25_25"), tmpStr); 	 		rs.GetValue(_T("BAN2"), tmpStr); 		nCONG[26] +=ToInt(tmpStr);		rptDetail->SetValue(_T("26_26"), tmpStr); 	 		rs.GetValue(_T("TED6T2"), tmpStr); 		nCONG[27] +=ToInt(tmpStr);		rptDetail->SetValue(_T("27_27"), tmpStr); 	 		rs.GetValue(_T("CS2"), tmpStr); 		nCONG[28] +=ToInt(tmpStr);		rptDetail->SetValue(_T("28_28"), tmpStr); 	 		rs.GetValue(_T("DV2"), tmpStr); 		nCONG[29] +=ToInt(tmpStr);		rptDetail->SetValue(_T("29_29"), tmpStr); 	 		rs.GetValue(_T("BHK2"), tmpStr); 		nCONG[30] +=ToInt(tmpStr);		rptDetail->SetValue(_T("30_30"), tmpStr); 	 		rs.GetValue(_T("BHTN2"), tmpStr); 		nCONG[31] +=ToInt(tmpStr);		rptDetail->SetValue(_T("31_31"), tmpStr); 	 		rs.GetValue(_T("CONG2"), tmpStr); 		nCONG[32] +=ToInt(tmpStr);		rptDetail->SetValue(_T("32_32"), tmpStr); 		rs.GetValue(_T("QUAN3"), tmpStr); 		nCONG[34] +=ToInt(tmpStr);		rptDetail->SetValue(_T("34_34"), tmpStr); 	 		rs.GetValue(_T("BHQH3"), tmpStr); 		nCONG[35] +=ToInt(tmpStr);		rptDetail->SetValue(_T("35_35"), tmpStr); 	 		rs.GetValue(_T("BHQD3"), tmpStr); 		nCONG[36] +=ToInt(tmpStr);		rptDetail->SetValue(_T("36_36"), tmpStr); 	 		rs.GetValue(_T("BAN3"), tmpStr); 		nCONG[37] +=ToInt(tmpStr);		rptDetail->SetValue(_T("37_37"), tmpStr); 	 		rs.GetValue(_T("TED6T3"), tmpStr); 		nCONG[38] +=ToInt(tmpStr);		rptDetail->SetValue(_T("38_38"), tmpStr); 	 		rs.GetValue(_T("CS3"), tmpStr); 		nCONG[39] +=ToInt(tmpStr);		rptDetail->SetValue(_T("39_39"), tmpStr); 	 		rs.GetValue(_T("DV3"), tmpStr); 		nCONG[40] +=ToInt(tmpStr);		rptDetail->SetValue(_T("40_40"), tmpStr); 	 		rs.GetValue(_T("BHK3"), tmpStr); 		nCONG[41] +=ToInt(tmpStr);		rptDetail->SetValue(_T("41_41"), tmpStr); 	 		rs.GetValue(_T("BHTN3"), tmpStr); 		nCONG[42] +=ToInt(tmpStr);		rptDetail->SetValue(_T("42_42"), tmpStr); 	 		rs.GetValue(_T("CONG3"), tmpStr); 		nCONG[43] +=ToInt(tmpStr);		rptDetail->SetValue(_T("43_43"), tmpStr); 		rs.GetValue(_T("TONGCONG"), tmpStr); 		nCONG[45] +=ToInt(tmpStr);		rptDetail->SetValue(_T("45_45"), tmpStr); 	 		rs.MoveNext();		}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
} 
void CBCTINHHINHPHATTHUAT::OnListDblClick(){
	
} 
void CBCTINHHINHPHATTHUAT::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTINHHINHPHATTHUAT::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTINHHINHPHATTHUAT::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("HO_DEPTID")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("BHQH")),
			rs.GetValue(_T("BHQD")),
			rs.GetValue(_T("BAN")),
			rs.GetValue(_T("TED6T")),
			rs.GetValue(_T("CS")),
			rs.GetValue(_T("DV")),
			rs.GetValue(_T("BHK")),
			rs.GetValue(_T("BHTN")),
			rs.GetValue(_T("CONG")),
			rs.GetValue(_T("TL")),
			rs.GetValue(_T("QUAN1")), 
			rs.GetValue(_T("BHQH1")),
			rs.GetValue(_T("BHQD1")),
			rs.GetValue(_T("BAN1")),
			rs.GetValue(_T("TED6T1")),
			rs.GetValue(_T("CS1")),
			rs.GetValue(_T("DV1")),
			rs.GetValue(_T("BHK1")),
			rs.GetValue(_T("BHTN1")),
			rs.GetValue(_T("CONG1")),
			rs.GetValue(_T("TL1")),
			rs.GetValue(_T("QUAN2")),  
			rs.GetValue(_T("BHQH2")),
			rs.GetValue(_T("BHQD2")),
			rs.GetValue(_T("BAN2")),
			rs.GetValue(_T("TED6T2")),
			rs.GetValue(_T("CS2")),
			rs.GetValue(_T("DV2")),
			rs.GetValue(_T("BHK2")),
			rs.GetValue(_T("BHTN2")),
			rs.GetValue(_T("CONG2")),
			rs.GetValue(_T("TL2")),
			rs.GetValue(_T("QUAN3")), 
			rs.GetValue(_T("BHQH3")),
			rs.GetValue(_T("BHQD3")),
			rs.GetValue(_T("BAN3")),
			rs.GetValue(_T("TED6T3")),
			rs.GetValue(_T("CS3")),
			rs.GetValue(_T("DV3")),
			rs.GetValue(_T("BHK3")),
			rs.GetValue(_T("BHTN3")),
			rs.GetValue(_T("CONG3")),
			rs.GetValue(_T("TL3")),
			rs.GetValue(_T("TONGCONG")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString1();
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("TYPE")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("BHQH")),
			rs.GetValue(_T("BHQD")),
			rs.GetValue(_T("BAN")),
			rs.GetValue(_T("TED6T")),
			rs.GetValue(_T("CS")),
			rs.GetValue(_T("DV")),
			rs.GetValue(_T("BHK")),
			rs.GetValue(_T("BHTN")),
			rs.GetValue(_T("CONG")),
			rs.GetValue(_T("TL")),
			rs.GetValue(_T("QUAN1")), 
			rs.GetValue(_T("BHQH1")),
			rs.GetValue(_T("BHQD1")),
			rs.GetValue(_T("BAN1")),
			rs.GetValue(_T("TED6T1")),
			rs.GetValue(_T("CS1")),
			rs.GetValue(_T("DV1")),
			rs.GetValue(_T("BHK1")),
			rs.GetValue(_T("BHTN1")),
			rs.GetValue(_T("CONG1")),
			rs.GetValue(_T("TL1")),
			rs.GetValue(_T("QUAN2")),  
			rs.GetValue(_T("BHQH2")),
			rs.GetValue(_T("BHQD2")),
			rs.GetValue(_T("BAN2")),
			rs.GetValue(_T("TED6T2")),
			rs.GetValue(_T("CS2")),
			rs.GetValue(_T("DV2")),
			rs.GetValue(_T("BHK2")),
			rs.GetValue(_T("BHTN2")),
			rs.GetValue(_T("CONG2")),
			rs.GetValue(_T("TL2")),
			rs.GetValue(_T("QUAN3")), 
			rs.GetValue(_T("BHQH3")),
			rs.GetValue(_T("BHQD3")),
			rs.GetValue(_T("BAN3")),
			rs.GetValue(_T("TED6T3")),
			rs.GetValue(_T("CS3")),
			rs.GetValue(_T("DV3")),
			rs.GetValue(_T("BHK3")),
			rs.GetValue(_T("BHTN3")),
			rs.GetValue(_T("CONG3")),
			rs.GetValue(_T("TL3")),
			rs.GetValue(_T("TONGCONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTINHHINHPHATTHUAT::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTINHHINHPHATTHUAT::OnDepartmentSelendok(){
	 
}
/*void CBCTINHHINHPHATTHUAT::OnDepartmentSetfocus(){
	
}*/
/*void CBCTINHHINHPHATTHUAT::OnDepartmentKillfocus(){
	
}*/
long CBCTINHHINHPHATTHUAT::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type = 'DT' order by id"), szWhere);
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
/*void CBCTINHHINHPHATTHUAT::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCTINHHINHPHATTHUAT::OnAddBCTINHHINHPHATTHUAT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTINHHINHPHATTHUAT::OnEditBCTINHHINHPHATTHUAT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTINHHINHPHATTHUAT::OnDeleteBCTINHHINHPHATTHUAT(){
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
 		OnCancelBCTINHHINHPHATTHUAT();
 	}
	return 0;
}
int CBCTINHHINHPHATTHUAT::OnSaveBCTINHHINHPHATTHUAT(){
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
 		//OnBCTINHHINHPHATTHUATListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTINHHINHPHATTHUAT::OnCancelBCTINHHINHPHATTHUAT(){
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
int CBCTINHHINHPHATTHUAT::OnBCTINHHINHPHATTHUATListLoadData(){
	return 0;
}
CString CBCTINHHINHPHATTHUAT::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND HO_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT 1 ID,HO_DEPTID,") \
_T("        SUM(QUAN) QUAN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1,SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+BHQD1+BHQH1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2,SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+BHQD2+BHQH2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3,SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+BHQD3+BHQH3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3,") \
_T("        SUM(QUAN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN+QUAN1+BHQD1+BHQH1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1+QUAN2+BHQD2+BHQH2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2+QUAN3+BHQD3+BHQH3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) TONGCONG") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        SUM(QUAN) QUAN,") \
_T("        SUM(BHQH) BHQH,") \
_T("        SUM(BHQD) BHQD,") \
_T("        SUM(BAN) BAN,") \
_T("        SUM(TED6T) TED6T,") \
_T("        SUM(CS) CS,") \
_T("        SUM(DV) DV,") \
_T("        SUM(BHK) BHK,") \
_T("        SUM(BHTN) BHTN,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4400' %s)") \
_T(" GROUP BY HO_DEPTID)") \
_T(" UNION") \
_T(" SELECT HO_DEPTID,") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        SUM(QUAN) QUAN1,") \
_T("        SUM(BHQH) BHQH1,") \
_T("        SUM(BHQD) BHQD1,") \
_T("        SUM(BAN) BAN1,") \
_T("        SUM(TED6T) TED6T1,") \
_T("        SUM(CS) CS1,") \
_T("        SUM(DV) DV1,") \
_T("        SUM(BHK) BHK1,") \
_T("        SUM(BHTN) BHTN1,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4100' %s)") \
_T(" GROUP BY HO_DEPTID)") \
_T(" UNION") \
_T(" SELECT HO_DEPTID,") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        SUM(QUAN) QUAN2,") \
_T("        SUM(BHQH) BHQH2,") \
_T("        SUM(BHQD) BHQD2,") \
_T("        SUM(BAN) BAN2,") \
_T("        SUM(TED6T) TED6T2,") \
_T("        SUM(CS) CS2,") \
_T("        SUM(DV) DV2,") \
_T("        SUM(BHK) BHK2,") \
_T("        SUM(BHTN) BHTN2,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4200' %s)") \
_T(" GROUP BY HO_DEPTID)") \
_T(" UNION") \
_T(" SELECT HO_DEPTID,") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        SUM(QUAN) QUAN3,") \
_T("        SUM(BHQH) BHQH3,") \
_T("        SUM(BHQD) BHQD3,") \
_T("        SUM(BAN) BAN3,") \
_T("        SUM(TED6T) TED6T3,") \
_T("        SUM(CS) CS3,") \
_T("        SUM(DV) DV3,") \
_T("        SUM(BHK) BHK3,") \
_T("        SUM(BHTN) BHTN3,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4300' %s)") \
_T(" GROUP BY HO_DEPTID))") \
_T(" GROUP BY HO_DEPTID") \
_T(" ORDER BY HO_DEPTID"), szWhere, szWhere, szWhere, szWhere);
return szSQL;
}
CString CBCTINHHINHPHATTHUAT::GetQueryString1()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND HO_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT 1 id,'N\x1ED9i tr\xFA' TYPE,") \
_T("        SUM(QUAN) QUAN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1,SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+BHQD1+BHQH1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2,SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+BHQD2+BHQH2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3,SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+BHQD3+BHQH3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3") \
_T(" FROM(SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN,") \
_T("        SUM(BHQH) BHQH,") \
_T("        SUM(BHQD) BHQD,") \
_T("        SUM(BAN) BAN,") \
_T("        SUM(TED6T) TED6T,") \
_T("        SUM(CS) CS,") \
_T("        SUM(DV) DV,") \
_T("        SUM(BHK) BHK,") \
_T("        SUM(BHTN) BHTN,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4400' AND HO_DEPTTYPE='I' %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN1,") \
_T("        SUM(BHQH) BHQH1,") \
_T("        SUM(BHQD) BHQD1,") \
_T("        SUM(BAN) BAN1,") \
_T("        SUM(TED6T) TED6T1,") \
_T("        SUM(CS) CS1,") \
_T("        SUM(DV) DV1,") \
_T("        SUM(BHK) BHK1,") \
_T("        SUM(BHTN) BHTN1,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4100' AND HO_DEPTTYPE='I' %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN2,") \
_T("        SUM(BHQH) BHQH2,") \
_T("        SUM(BHQD) BHQD2,") \
_T("        SUM(BAN) BAN2,") \
_T("        SUM(TED6T) TED6T2,") \
_T("        SUM(CS) CS2,") \
_T("        SUM(DV) DV2,") \
_T("        SUM(BHK) BHK2,") \
_T("        SUM(BHTN) BHTN2,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4200' AND HO_DEPTTYPE='I' %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN3,") \
_T("        SUM(BHQH) BHQH3,") \
_T("        SUM(BHQD) BHQD3,") \
_T("        SUM(BAN) BAN3,") \
_T("        SUM(TED6T) TED6T3,") \
_T("        SUM(CS) CS3,") \
_T("        SUM(DV) DV3,") \
_T("        SUM(BHK) BHK3,") \
_T("        SUM(BHTN) BHTN3,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4300' AND HO_DEPTTYPE='I' %s)") \
_T(" ))") \
_T(" UNION") \
_T(" SELECT 2 id,'Ngo\x1EA1i tr\xFA' TYPE,") \
_T("        SUM(QUAN) QUAN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1,SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+BHQD1+BHQH1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2,SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+BHQD2+BHQH2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3,SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+BHQD3+BHQH3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3") \
_T(" FROM(SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN,") \
_T("        SUM(BHQH) BHQH,") \
_T("        SUM(BHQD) BHQD,") \
_T("        SUM(BAN) BAN,") \
_T("        SUM(TED6T) TED6T,") \
_T("        SUM(CS) CS,") \
_T("        SUM(DV) DV,") \
_T("        SUM(BHK) BHK,") \
_T("        SUM(BHTN) BHTN,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4400' AND HO_DEPTTYPE='E' %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN1,") \
_T("        SUM(BHQH) BHQH1,") \
_T("        SUM(BHQD) BHQD1,") \
_T("        SUM(BAN) BAN1,") \
_T("        SUM(TED6T) TED6T1,") \
_T("        SUM(CS) CS1,") \
_T("        SUM(DV) DV1,") \
_T("        SUM(BHK) BHK1,") \
_T("        SUM(BHTN) BHTN1,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4100' AND HO_DEPTTYPE='E' %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN2,") \
_T("        SUM(BHQH) BHQH2,") \
_T("        SUM(BHQD) BHQD2,") \
_T("        SUM(BAN) BAN2,") \
_T("        SUM(TED6T) TED6T2,") \
_T("        SUM(CS) CS2,") \
_T("        SUM(DV) DV2,") \
_T("        SUM(BHK) BHK2,") \
_T("        SUM(BHTN) BHTN2,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4200' AND HO_DEPTTYPE='E' %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN3,") \
_T("        SUM(BHQH) BHQH3,") \
_T("        SUM(BHQD) BHQD3,") \
_T("        SUM(BAN) BAN3,") \
_T("        SUM(TED6T) TED6T3,") \
_T("        SUM(CS) CS3,") \
_T("        SUM(DV) DV3,") \
_T("        SUM(BHK) BHK3,") \
_T("        SUM(BHTN) BHTN3,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4300' AND HO_DEPTTYPE='E' %s)") \
_T(" ))") \
_T(" UNION") \
_T(" SELECT 3 id,'Y\xEAu \x63\x1EA7u' TYPE,") \
_T("        SUM(QUAN) QUAN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1,SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+BHQD1+BHQH1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2,SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+BHQD2+BHQH2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3,SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+BHQD3+BHQH3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3") \
_T(" FROM(SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN,") \
_T("        SUM(BHQH) BHQH,") \
_T("        SUM(BHQD) BHQD,") \
_T("        SUM(BAN) BAN,") \
_T("        SUM(TED6T) TED6T,") \
_T("        SUM(CS) CS,") \
_T("        SUM(DV) DV,") \
_T("        SUM(BHK) BHK,") \
_T("        SUM(BHTN) BHTN,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4400' AND HO_DEPTTYPE not in('I','E') %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN1,") \
_T("        SUM(BHQH) BHQH1,") \
_T("        SUM(BHQD) BHQD1,") \
_T("        SUM(BAN) BAN1,") \
_T("        SUM(TED6T) TED6T1,") \
_T("        SUM(CS) CS1,") \
_T("        SUM(DV) DV1,") \
_T("        SUM(BHK) BHK1,") \
_T("        SUM(BHTN) BHTN1,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4100' AND HO_DEPTTYPE not in('I','E') %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN2,") \
_T("        SUM(BHQH) BHQH2,") \
_T("        SUM(BHQD) BHQD2,") \
_T("        SUM(BAN) BAN2,") \
_T("        SUM(TED6T) TED6T2,") \
_T("        SUM(CS) CS2,") \
_T("        SUM(DV) DV2,") \
_T("        SUM(BHK) BHK2,") \
_T("        SUM(BHTN) BHTN2,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN,") \
_T("        0 QUAN3,0 BHQH3,0 BHQD3,0 BAN3,0 TED6T3,0 CS3,0 DV3,0 BHK3,0 BHTN3") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4200' AND HO_DEPTTYPE not in('I','E') %s)") \
_T(" )") \
_T(" UNION") \
_T(" SELECT ") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3") \
_T(" FROM(SELECT ") \
_T("        SUM(QUAN) QUAN3,") \
_T("        SUM(BHQH) BHQH3,") \
_T("        SUM(BHQD) BHQD3,") \
_T("        SUM(BAN) BAN3,") \
_T("        SUM(TED6T) TED6T3,") \
_T("        SUM(CS) CS3,") \
_T("        SUM(DV) DV3,") \
_T("        SUM(BHK) BHK3,") \
_T("        SUM(BHTN) BHTN3,") \
_T("        0 QUAN1,0 BHQH1,0 BHQD1,0 BAN1,0 TED6T1,0 CS1,0 DV1,0 BHK1,0 BHTN1,") \
_T("        0 QUAN2,0 BHQH2,0 BHQD2,0 BAN2,0 TED6T2,0 CS2,0 DV2,0 BHK2,0 BHTN2,") \
_T("        0 QUAN,0 BHQH,0 BHQD,0 BAN,0 TED6T,0 CS,0 DV,0 BHK,0 BHTN") \
_T(" FROM(SELECT ") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_FEEID=HO_ITEMID) ") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFG_ID=HFL_GROUPID)") \
_T(" WHERE HFG_ID='B4300' AND HO_DEPTTYPE not in('I','E') %s)") \
_T(" ))"), szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere, szWhere);
	return szSQL;
}