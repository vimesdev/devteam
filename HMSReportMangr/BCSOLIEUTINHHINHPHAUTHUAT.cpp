#include "BCSOLIEUTINHHINHPHAUTHUAT.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCSOLIEUTINHHINHPHAUTHUAT *pVw = (CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCSOLIEUTINHHINHPHAUTHUAT *pVw = (CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCSOLIEUTINHHINHPHAUTHUAT *pVw = (CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSOLIEUTINHHINHPHAUTHUAT* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCSOLIEUTINHHINHPHAUTHUAT *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCSOLIEUTINHHINHPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnAddBCSOLIEUTINHHINHPHAUTHUAT();
} 
static int _OnEditBCSOLIEUTINHHINHPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnEditBCSOLIEUTINHHINHPHAUTHUAT();
} 
static int _OnDeleteBCSOLIEUTINHHINHPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnDeleteBCSOLIEUTINHHINHPHAUTHUAT();
} 
static int _OnSaveBCSOLIEUTINHHINHPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnSaveBCSOLIEUTINHHINHPHAUTHUAT();
} 
static int _OnCancelBCSOLIEUTINHHINHPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCSOLIEUTINHHINHPHAUTHUAT*)pWnd)->OnCancelBCSOLIEUTINHHINHPHAUTHUAT();
} 
CBCSOLIEUTINHHINHPHAUTHUAT::CBCSOLIEUTINHHINHPHAUTHUAT(){
	m_szOpt_Type_List.Empty();
	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCSOLIEUTINHHINHPHAUTHUAT::~CBCSOLIEUTINHHINHPHAUTHUAT(){
}
void CBCSOLIEUTINHHINHPHAUTHUAT::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndExport.Create(this, _T("&Export"), 731, 30, 821, 55);
	m_wndLoad.Create(this, _T("&Load"), 731, 30, 821, 55);
	m_wndPrint.Create(this, _T("&Print"), 826, 30, 916, 55);
	//m_wndExport.Create(this, _T("&Export"), 921, 30, 1010, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 431, 30, 510, 55);
	m_wndDepartment.Create(this,516, 30, 726, 55); 
	m_wndLoad.ShowWindow(SW_HIDE);
	m_wndPrint.ShowWindow(SW_HIDE);
	m_wndList.ShowWindow(SW_HIDE);
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_ALIGNTOP);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(false);
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Khoa"), CFMT_TEXT, 80);
	
	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(11, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i \x111\x1EB7\x63 \x62i\x1EC7t"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 12, false, false);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(13, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(15, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(16, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(17, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(18, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(19, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(20, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(21, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(22, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(23, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i I"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 13, 1, 23, false, false);
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(24, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(25, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(26, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(27, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(28, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(29, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(30, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(31, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(32, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(33, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(34, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i II"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 24, 1, 34, false, false);
	//------------------------------------------------------------------------
	//------------------------------------------------------------------------
	m_wndList.InsertColumn(35, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(36, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(37, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(38, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(39, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(40, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(41, _T("DV"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(42, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(43, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(44, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(45, _T("T\x1EF6 L\x1EC6 %"), CFMT_MONEY, 50);
	TranslateString(_T("Lo\x1EA1i III"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 35, 1, 45, false, false);
}
void CBCSOLIEUTINHHINHPHAUTHUAT::OnInitializeComponents(){
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
void CBCSOLIEUTINHHINHPHAUTHUAT::OnSetWindowEvents(){
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
	m_szOpt_Type_List = _T("'1.SE','11.SE','2.SE','10.SE','8.SE','9.SE','3.SE','7.SE','4.SE','5.SE','12.SE','+SE','_SE','1.I','11.I','2.I','10.I',") \
		_T("'8.I','9.I','3.I','7.I','4.I','5.I','12.I','+I','_I','1.II','11.II','2.II','10.II','8.II','9.II','3.II','7.II','4.II','5.II','12.II','+II','_II',") \
		_T("'1.III','11.III','2.III','10.III','8.III','9.III','3.III','7.III','4.III','5.III','12.III',") \
		_T("'+III','_III'");
		//'1.X','11.X','2.X','10.X','8.X','9.X','3.X','7.X','4.X','5.X','12.X','+X','_X'");
	//CRecord rs(&pMF->m_db);
	//CString szSQL;
	//szSQL.Format(_T("WITH tbl_object") \
	//_T("     AS (SELECT ho_id id") \
	//_T("         FROM   hms_object),") \
	//_T("     tbl_opt_type") \
	//_T("     AS (SELECT DISTINCT Decode(hfg_id, 'B4100', 'I',") \
	//_T("                                        'B4200', 'II',") \
	//_T("                                        'B4300', 'III',") \
	//_T("                                        'SE') opt_type") \
	//_T("         FROM   hms_fee_group") \
	//_T("         WHERE  Substr(hfg_id, 1, 2) IN ( 'B4' ))") \
	//_T("SELECT Listagg(Chr(39)") \
	//_T("               ||id") \
	//_T("               ||'.'") \
	//_T("               ||opt_type") \
	//_T("               ||Chr(39), ',')") \
	//_T("         within GROUP (ORDER BY NULL) col, 0 ") \
	//_T("FROM   tbl_object,tbl_opt_type ") \
	//_T("ORDER  BY Cast(Regexp_substr(col, '\\d+') AS INTEGER) ASC,Regexp_substr(col, '\\D+') ASC"));
	//szSQL.Format(_T("WITH tmp AS (SELECT '' col FROM dual) SELECT col FROM tmp"));
	//rs.ExecSQL(szSQL);
	//if (!rs.IsEOF()){ 
	//	m_szOpt_Type_List = rs.GetValue(_T("col"));
	//	_msg(_T("col: %s"), m_szOpt_Type_List);
	//}
	UpdateData(false);

}
void CBCSOLIEUTINHHINHPHAUTHUAT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCSOLIEUTINHHINHPHAUTHUAT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCSOLIEUTINHHINHPHAUTHUAT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCSOLIEUTINHHINHPHAUTHUAT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCSOLIEUTINHHINHPHAUTHUAT::SetMode(int nMode){
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
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnFromDateChange(){
	
} */
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnFromDateSetfocus(){
	
} */
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnFromDateKillfocus(){
	
} */
int CBCSOLIEUTINHHINHPHAUTHUAT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnToDateChange(){
	
} */
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnToDateSetfocus(){
	
} */
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnToDateKillfocus(){
	
} */
int CBCSOLIEUTINHHINHPHAUTHUAT::OnToDateCheckValue(){
	return 0;
} 
void CBCSOLIEUTINHHINHPHAUTHUAT::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCSOLIEUTINHHINHPHAUTHUAT::OnPrintSelect(){
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
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x100\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	BeginWaitCursor();
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nCONG[46];
	for(int i = 0 ; i<46; i++)
	{
		nCONG[i] = 0;
	}
	while(!rs.IsEOF()) 
	{	 
		grp = rpt.GetGroupHeader(1);
		rptDetail = rpt.AddDetail(grp);

		rs.GetValue(_T("HO_DEPTID"), tmpStr); 
		rptDetail->SetValue(_T("0"), tmpStr); 
	 
		rs.GetValue(_T("QUAN"), tmpStr); 
		nCONG[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr); 
	 
		rs.GetValue(_T("BHQH"), tmpStr); 
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr); 
	 
		rs.GetValue(_T("BHQD"), tmpStr); 
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr); 
	 
		rs.GetValue(_T("BAN"), tmpStr); 
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr); 
	 
		rs.GetValue(_T("TED6T"), tmpStr); 
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr); 
	 
		rs.GetValue(_T("CS"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr); 
	 
		rs.GetValue(_T("DV"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr); 
	 
		rs.GetValue(_T("BHK"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr); 
	 
		rs.GetValue(_T("BHTN"), tmpStr); 
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr); 
	 
		rs.GetValue(_T("CONG"), tmpStr); 
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr); 

		rs.GetValue(_T("QUAN1"), tmpStr); 
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr); 
	 
		rs.GetValue(_T("BHQH1"), tmpStr); 
		nCONG[13] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr); 
	 
		rs.GetValue(_T("BHQD1"), tmpStr); 
		nCONG[14] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr); 
	 
		rs.GetValue(_T("BAN1"), tmpStr); 
		nCONG[15] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr); 
	 
		rs.GetValue(_T("TED6T1"), tmpStr); 
		nCONG[16] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr); 
	 
		rs.GetValue(_T("CS1"), tmpStr); 
		nCONG[17] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr); 
	 
		rs.GetValue(_T("DV1"), tmpStr); 
		nCONG[18] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr); 
	 
		rs.GetValue(_T("BHK1"), tmpStr); 
		nCONG[19] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr); 
	 
		rs.GetValue(_T("BHTN1"), tmpStr); 
		nCONG[20] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr); 
	 
		rs.GetValue(_T("CONG1"), tmpStr); 
		nCONG[21] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr); 

		rs.GetValue(_T("QUAN2"), tmpStr); 
		nCONG[23] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr); 
	 
		rs.GetValue(_T("BHQH2"), tmpStr); 
		nCONG[24] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr); 
	 
		rs.GetValue(_T("BHQD2"), tmpStr); 
		nCONG[25] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("25"), tmpStr); 
	 
		rs.GetValue(_T("BAN2"), tmpStr); 
		nCONG[26] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("26"), tmpStr); 
	 
		rs.GetValue(_T("TED6T2"), tmpStr); 
		nCONG[27] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("27"), tmpStr); 
	 
		rs.GetValue(_T("CS2"), tmpStr); 
		nCONG[28] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("28"), tmpStr); 
	 
		rs.GetValue(_T("DV2"), tmpStr); 
		nCONG[29] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("29"), tmpStr); 
	 
		rs.GetValue(_T("BHK2"), tmpStr); 
		nCONG[30] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("30"), tmpStr); 
	 
		rs.GetValue(_T("BHTN2"), tmpStr); 
		nCONG[31] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("31"), tmpStr); 
	 
		rs.GetValue(_T("CONG2"), tmpStr); 
		nCONG[32] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("32"), tmpStr); 

		rs.GetValue(_T("QUAN3"), tmpStr); 
		nCONG[34] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("34"), tmpStr); 
	 
		rs.GetValue(_T("BHQH3"), tmpStr); 
		nCONG[35] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("35"), tmpStr); 
	 
		rs.GetValue(_T("BHQD3"), tmpStr); 
		nCONG[36] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("36"), tmpStr); 
	 
		rs.GetValue(_T("BAN3"), tmpStr); 
		nCONG[37] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("37"), tmpStr); 
	 
		rs.GetValue(_T("TED6T3"), tmpStr); 
		nCONG[38] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("38"), tmpStr); 
	 
		rs.GetValue(_T("CS3"), tmpStr); 
		nCONG[39] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("39"), tmpStr); 
	 
		rs.GetValue(_T("DV3"), tmpStr); 
		nCONG[40] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("40"), tmpStr); 
	 
		rs.GetValue(_T("BHK3"), tmpStr); 
		nCONG[41] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("41"), tmpStr); 
	 
		rs.GetValue(_T("BHTN3"), tmpStr); 
		nCONG[42] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("42"), tmpStr); 
	 
		rs.GetValue(_T("CONG3"), tmpStr); 
		nCONG[43] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("43"), tmpStr); 

		rs.GetValue(_T("TONGCONG"), tmpStr); 
		nCONG[45] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("45"), tmpStr); 
	 
		rs.MoveNext();	
	}
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
	_fmsg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()) 
	{	 
		grp = rpt.GetGroupHeader(3);
		rptDetail = rpt.AddDetail(grp);

		rs.GetValue(_T("NAME"), tmpStr); 
		rptDetail->SetValue(_T("0_0"), tmpStr); 
	 
		rs.GetValue(_T("QUAN"), tmpStr); 
		nCONG[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("1_1"), tmpStr); 
	 
		rs.GetValue(_T("BHQH"), tmpStr); 
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2_2"), tmpStr); 
	 
		rs.GetValue(_T("BHQD"), tmpStr); 
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3_3"), tmpStr); 
	 
		rs.GetValue(_T("BAN"), tmpStr); 
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4_4"), tmpStr); 
	 
		rs.GetValue(_T("TED6T"), tmpStr); 
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5_5"), tmpStr); 
	 
		rs.GetValue(_T("CS"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6_6"), tmpStr); 
	 
		rs.GetValue(_T("DV"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7_7"), tmpStr); 
	 
		rs.GetValue(_T("BHK"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8_8"), tmpStr); 
	 
		rs.GetValue(_T("BHTN"), tmpStr); 
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9_9"), tmpStr); 
	 
		rs.GetValue(_T("CONG"), tmpStr); 
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10_10"), tmpStr); 

		rs.GetValue(_T("QUAN1"), tmpStr); 
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12_12"), tmpStr); 
	 
		rs.GetValue(_T("BHQH1"), tmpStr); 
		nCONG[13] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("13_13"), tmpStr); 
	 
		rs.GetValue(_T("BHQD1"), tmpStr); 
		nCONG[14] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("14_14"), tmpStr); 
	 
		rs.GetValue(_T("BAN1"), tmpStr); 
		nCONG[15] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("15_15"), tmpStr); 
	 
		rs.GetValue(_T("TED6T1"), tmpStr); 
		nCONG[16] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("16_16"), tmpStr); 
	 
		rs.GetValue(_T("CS1"), tmpStr); 
		nCONG[17] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("17_17"), tmpStr); 
	 
		rs.GetValue(_T("DV1"), tmpStr); 
		nCONG[18] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("18_18"), tmpStr); 
	 
		rs.GetValue(_T("BHK1"), tmpStr); 
		nCONG[19] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("19_19"), tmpStr); 
	 
		rs.GetValue(_T("BHTN1"), tmpStr); 
		nCONG[20] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("20_20"), tmpStr); 
	 
		rs.GetValue(_T("CONG1"), tmpStr); 
		nCONG[21] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("21_21"), tmpStr); 

		rs.GetValue(_T("QUAN2"), tmpStr); 
		nCONG[23] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("23_23"), tmpStr); 
	 
		rs.GetValue(_T("BHQH2"), tmpStr); 
		nCONG[24] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("24_24"), tmpStr); 
	 
		rs.GetValue(_T("BHQD2"), tmpStr); 
		nCONG[25] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("25_25"), tmpStr); 
	 
		rs.GetValue(_T("BAN2"), tmpStr); 
		nCONG[26] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("26_26"), tmpStr); 
	 
		rs.GetValue(_T("TED6T2"), tmpStr); 
		nCONG[27] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("27_27"), tmpStr); 
	 
		rs.GetValue(_T("CS2"), tmpStr); 
		nCONG[28] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("28_28"), tmpStr); 
	 
		rs.GetValue(_T("DV2"), tmpStr); 
		nCONG[29] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("29_29"), tmpStr); 
	 
		rs.GetValue(_T("BHK2"), tmpStr); 
		nCONG[30] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("30_30"), tmpStr); 
	 
		rs.GetValue(_T("BHTN2"), tmpStr); 
		nCONG[31] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("31_31"), tmpStr); 
	 
		rs.GetValue(_T("CONG2"), tmpStr); 
		nCONG[32] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("32_32"), tmpStr); 

		rs.GetValue(_T("QUAN3"), tmpStr); 
		nCONG[34] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("34_34"), tmpStr); 
	 
		rs.GetValue(_T("BHQH3"), tmpStr); 
		nCONG[35] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("35_35"), tmpStr); 
	 
		rs.GetValue(_T("BHQD3"), tmpStr); 
		nCONG[36] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("36_36"), tmpStr); 
	 
		rs.GetValue(_T("BAN3"), tmpStr); 
		nCONG[37] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("37_37"), tmpStr); 
	 
		rs.GetValue(_T("TED6T3"), tmpStr); 
		nCONG[38] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("38_38"), tmpStr); 
	 
		rs.GetValue(_T("CS3"), tmpStr); 
		nCONG[39] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("39_39"), tmpStr); 
	 
		rs.GetValue(_T("DV3"), tmpStr); 
		nCONG[40] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("40_40"), tmpStr); 
	 
		rs.GetValue(_T("BHK3"), tmpStr); 
		nCONG[41] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("41_41"), tmpStr); 
	 
		rs.GetValue(_T("BHTN3"), tmpStr); 
		nCONG[42] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("42_42"), tmpStr); 
	 
		rs.GetValue(_T("CONG3"), tmpStr); 
		nCONG[43] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("43_43"), tmpStr); 

		rs.GetValue(_T("TONGCONG"), tmpStr); 
		nCONG[45] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("45_45"), tmpStr); 
	 
		rs.MoveNext();	
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 

void CBCSOLIEUTINHHINHPHAUTHUAT::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	int nRow = 8, nCol = 0;
	CString tmpStr;
	if (OnCheckBeforeExport(&xls, &rs) < 0) return;
	xls.SetWorksheet(0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER);
	OnExport(&xls, nRow, &rs);
	//rs.ExecSQL(GetQueryString1_());
	//OnExport(&xls, nRow, &rs);
	xls.Save(_T("Exports\\BCSOLIEUTINHHINHPHAUTHUAT.xls"));
}

int CBCSOLIEUTINHHINHPHAUTHUAT::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
	if (!xls->Load(_T("Exports\\MAU_BCSOLIEUTINHHINHPHAUTHUAT.xls"))){
		AfxMessageBox(_T("MAU_BCSOLIEUTINHHINHPHAUTHUAT.xls"));
		return -1;
	}
	rs->ExecSQL(GetQueryString_());
	if (rs->IsEOF()){
		AfxMessageBox(_T("No Data!"));
		return -1;
	}
	return 0;
}

void CBCSOLIEUTINHHINHPHAUTHUAT::OnExport(CExcel* xls, int& nRow, CRecord* rs){
	int nTypeTotal = 0, nTmp = 0, nCol = 0;
	double nColTotal[75], nLineTotal = 0;
	bool haveMidSum = false;
	CString szFieldName, tmpStr;
	for (int i = 0; i < 75; i++) nColTotal[i] = 0;
	while (!rs->IsEOF()){
		if (!haveMidSum){ 
			rs->GetValue(_T("dept_id"), tmpStr);
			if (tmpStr.Left(2) != _T("B1")){
				xls->SetCellText(0, nRow, _T("T\x1ED5ng:"), 4098, true);
				for (int i = 1; i < 75; i++) xls->SetCellText(i, nRow, ToString(nColTotal[i]), FMT_NUMBER1, true);
				nRow++;
				haveMidSum = true;
			}
		}
		nCol = 0;
		nLineTotal = 0;
		for (int i = 1; i < rs->GetFieldCount(); i++) nLineTotal += str2double(rs->GetValue(rs->GetFieldName(i)));
		for (int i = 0; i < rs->GetFieldCount(); i++){
			szFieldName = rs->GetFieldName(i);
			rs->GetValue(szFieldName, nTmp);
			nTypeTotal += nTmp;
			if ((szFieldName.Find(_T("'+")) == -1) && (szFieldName.Find(_T("'_")) == -1)){
				nColTotal[i] += nTmp;
				xls->SetCellText(nCol++, nRow, rs->GetValue(szFieldName), i==0?FMT_TEXT:FMT_NUMBER1);
			}
			if (szFieldName.Left(3) == _T("'12")){
				xls->SetCellText(nCol++, nRow, ToString(nTypeTotal), FMT_NUMBER1, true);
				xls->SetCellText(nCol++, nRow, ToString(nTypeTotal*100/double(nLineTotal)), FMT_NUMBER1);
				nColTotal[i+1] += nTypeTotal;
				nTypeTotal = 0;
			}
		}
		xls->SetCellText(nCol, nRow, ToString(nLineTotal), FMT_NUMBER1, true);
		nColTotal[53] += nLineTotal;
		nRow++;
		rs->MoveNext();
	}
	xls->SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), 4098, true);
	for (int i = 1; i < 75; i++) xls->SetCellText(i, nRow, ToString(nColTotal[i]), FMT_NUMBER1, true);
	nRow++;
}

void CBCSOLIEUTINHHINHPHAUTHUAT::OnListDblClick(){
	
} 
void CBCSOLIEUTINHHINHPHAUTHUAT::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCSOLIEUTINHHINHPHAUTHUAT::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCSOLIEUTINHHINHPHAUTHUAT::OnListLoadData(){
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
	if(nCount ==0)
	{
		ShowMessageBox(_T("No data"));
		return 0;
	}
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
	_fmsg(_T("%s"),szSQL);
	if(nCount ==0)
	{
		ShowMessageBox(_T("No data"));
		return 0;
	}
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
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
void CBCSOLIEUTINHHINHPHAUTHUAT::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSOLIEUTINHHINHPHAUTHUAT::OnDepartmentSelendok(){
	 
}
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnDepartmentSetfocus(){
	
}*/
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnDepartmentKillfocus(){
	
}*/
long CBCSOLIEUTINHHINHPHAUTHUAT::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type IN ('DT', 'KB') order by id"), szWhere);
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
/*void CBCSOLIEUTINHHINHPHAUTHUAT::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCSOLIEUTINHHINHPHAUTHUAT::OnAddBCSOLIEUTINHHINHPHAUTHUAT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCSOLIEUTINHHINHPHAUTHUAT::OnEditBCSOLIEUTINHHINHPHAUTHUAT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCSOLIEUTINHHINHPHAUTHUAT::OnDeleteBCSOLIEUTINHHINHPHAUTHUAT(){
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
 		OnCancelBCSOLIEUTINHHINHPHAUTHUAT();
 	}
	return 0;
}
int CBCSOLIEUTINHHINHPHAUTHUAT::OnSaveBCSOLIEUTINHHINHPHAUTHUAT(){
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
 		//OnBCSOLIEUTINHHINHPHAUTHUATListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCSOLIEUTINHHINHPHAUTHUAT::OnCancelBCSOLIEUTINHHINHPHAUTHUAT(){
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
int CBCSOLIEUTINHHINHPHAUTHUAT::OnBCSOLIEUTINHHINHPHAUTHUATListLoadData(){
	return 0;
}

CString CBCSOLIEUTINHHINHPHAUTHUAT::GetQueryString_(){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND HO_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	if (!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_deptid = '%s'"), m_szDepartmentKey);
	szSQL.Format(_T("WITH core AS (SELECT distinct ho_docno, ho_deptid dept_id, ho_object object, ") \
				 _T(" DECODE(ho_normal, '1', 'I', '2', 'II', '3', 'III', 'S', 'SE', 'X') opt_type") \
				 _T(" FROM hms_operation") \
				 _T(" LEFT JOIN hms_fee_list ON (ho_itemid = hfl_feeid)") \
				 _T(" WHERE ho_status = 'T' AND substr(hfl_groupid, 1, 2) = 'B4' AND ho_object <> 6 AND ho_subcategory IN (2, 12) AND ho_normal IN ('1', '2', '3', 'S') %s") \
				 _T(" AND ho_deptid IN ('B1-A', 'B1-B', 'B1-C', 'B1-D', 'A2-B', 'B2', 'B3-A', 'B3-B', 'B4', 'B6', 'B7', 'B8', 'B9', 'B11'))") \
				 _T("SELECT * FROM (") \
				 _T(" SELECT dept_id, object||'.'||opt_type col_name FROM core)") \
				 _T(" pivot(") \
				 _T(" count(*) for col_name IN (%s)) ") \
				 _T("ORDER BY DECODE(dept_id, 'B1-A', 1,'B1-B', 2,'B1-C', 3,'B1-D', 4,'A2-B', 5,'B2', 6,'B3-A', 7,'B3-B', 8,'B4', 9,'B6', 10,'B7', 11,'B8', 12,'B9', 13,'B11', 14, 15)"), szWhere, m_szOpt_Type_List);
	return szSQL;
}

CString CBCSOLIEUTINHHINHPHAUTHUAT::GetQueryString1_(){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND HO_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	if (!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_deptid = '%s'"), m_szDepartmentKey);
	szSQL.Format(_T("WITH core AS (SELECT distinct ho_docno, NVL(ho_depttype, 'X') dept_type, ho_object object, ") \
				 _T(" DECODE(hfl_groupid, 'B4100', 'I', 'B4200', 'II', 'B4300', 'III', 'B4400', 'SE', 'X') opt_type") \
				 _T(" FROM hms_operation") \
				 _T(" LEFT JOIN hms_fee_list ON (ho_itemid = hfl_feeid)") \
				 _T(" WHERE ho_status = 'T' AND substr(hfl_groupid, 1, 2) = 'B4'  AND ho_object <> 6 %s)") \
				 _T("SELECT * FROM (") \
				 _T(" SELECT DECODE(dept_type, 'I', 'N\x1ED9i tr\xFA', 'E', 'Ngo\x1EA1i tr\xFA', 'Y\xEAu \x63\x1EA7u') dept_type, object||'.'||opt_type col_name FROM core)") \
				 _T(" pivot(") \
				 _T(" count(*) for col_name IN (%s))"), szWhere, m_szOpt_Type_List);
	return szSQL;	
}

CString CBCSOLIEUTINHHINHPHAUTHUAT::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szDept;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HO_DEPTID='%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HO_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT HO_DEPTID,") \
_T("        SUM(QUAN) QUAN,SUM(QUANTN) QUANTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD, SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+QUANTN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(QUANTN1) QUANTN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1, SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+QUANTN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(QUANTN2) QUANTN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2, SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+QUANTN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(QUANTN3) QUANTN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3, SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+QUANTN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3,") \
_T("        SUM(QUAN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN+QUAN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1+QUAN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2+QUAN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) TONGCONG") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END QUANTN,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END QUAN1,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END QUANTN1,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHQH1,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHQD1,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BAN1,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END TED6T1,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END CS1,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END DV1,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHK1,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHTN1,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END QUAN2,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END QUANTN2,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHQH2,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHQD2,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BAN2,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END TED6T2,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END CS2,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END DV2,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHK2,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHTN2,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END QUAN3,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END QUANTN3,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHQH3,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHQD3,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BAN3,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END TED6T3,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END CS3,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END DV3,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHK3,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHTN3") \
_T(" FROM(SELECT DISTINCT HO_DOCNO,HO_OBJECT,HFL_GROUPID,HO_DEPTID,HO_IDX") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HO_ITEMID=HFL_FEEID AND HFL_TYPEID='O')") \
_T(" WHERE HO_STATUS IN('T')") \
_T("   %s %s") \
_T(" ))") \
_T(" GROUP BY HO_DEPTID") \
_T(" ORDER BY HO_DEPTID"),szDept,szWhere);
return szSQL;
}
CString CBCSOLIEUTINHHINHPHAUTHUAT::GetQueryString1()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szDept;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HO_DEPTID='%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HO_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID='hrl_ietype' AND SS_CODE=CAST(ID AS NUMBER)) NAME,") \
_T("        QUAN,BHQH,BHQD,BAN,TED6T,CS,DV,BHK,BHTN,CONG,") \
_T("        QUAN1,BHQH1,BHQD1,BAN1,TED6T1,CS1,DV1,BHK1,BHTN1,CONG1,") \
_T("        QUAN2,BHQH2,BHQD2,BAN2,TED6T2,CS2,DV2,BHK2,BHTN2,CONG2,") \
_T("        QUAN3,BHQH3,BHQD3,BAN3,TED6T3,CS3,DV3,BHK3,BHTN3,CONG3,") \
_T("        TONGCONG") \
_T(" FROM(SELECT 1 ID,") \
_T("        SUM(QUAN) QUAN,SUM(QUANTN) QUANTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD, SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+QUANTN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(QUANTN1) QUANTN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1, SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+QUANTN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(QUANTN2) QUANTN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2, SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+QUANTN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(QUANTN3) QUANTN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3, SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+QUANTN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3,") \
_T("        SUM(QUAN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN+QUAN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1+QUAN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2+QUAN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) TONGCONG") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END QUANTN,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END QUAN1,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END QUANTN1,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHQH1,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHQD1,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BAN1,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END TED6T1,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END CS1,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END DV1,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHK1,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHTN1,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END QUAN2,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END QUANTN2,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHQH2,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHQD2,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BAN2,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END TED6T2,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END CS2,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END DV2,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHK2,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHTN2,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END QUAN3,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END QUANTN3,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHQH3,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHQD3,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BAN3,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END TED6T3,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END CS3,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END DV3,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHK3,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHTN3") \
_T(" FROM(SELECT DISTINCT HO_DOCNO,HO_OBJECT,HFL_GROUPID,HO_DEPTID,HO_IDX") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HO_ITEMID=HFL_FEEID AND HFL_TYPEID='O')") \
_T(" WHERE HO_STATUS IN('T')") \
_T("   AND HO_DEPTTYPE='I'") \
_T("   %s %s") \
_T(" ))") \
_T(" UNION") \
_T(" SELECT 2 ID,") \
_T("        SUM(QUAN) QUAN,SUM(QUANTN) QUANTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD, SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+QUANTN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(QUANTN1) QUANTN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1, SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+QUANTN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(QUANTN2) QUANTN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2, SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+QUANTN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(QUANTN3) QUANTN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3, SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+QUANTN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3,") \
_T("        SUM(QUAN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN+QUAN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1+QUAN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2+QUAN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) TONGCONG") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END QUANTN,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END QUAN1,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END QUANTN1,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHQH1,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHQD1,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BAN1,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END TED6T1,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END CS1,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END DV1,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHK1,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHTN1,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END QUAN2,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END QUANTN2,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHQH2,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHQD2,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BAN2,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END TED6T2,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END CS2,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END DV2,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHK2,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHTN2,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END QUAN3,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END QUANTN3,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHQH3,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHQD3,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BAN3,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END TED6T3,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END CS3,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END DV3,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHK3,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHTN3") \
_T(" FROM(SELECT DISTINCT HO_DOCNO,HO_OBJECT,HFL_GROUPID,HO_DEPTID,HO_IDX") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HO_ITEMID=HFL_FEEID AND HFL_TYPEID='O')") \
_T(" WHERE HO_STATUS IN('T')") \
_T("   AND HO_DEPTTYPE='E'") \
_T("   %s %s") \
_T(" ))") \
_T(" UNION") \
_T(" SELECT 3 ID,") \
_T("        SUM(QUAN) QUAN,SUM(QUANTN) QUANTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD, SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+QUANTN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN) CONG,") \
_T("        SUM(QUAN1) QUAN1,SUM(QUANTN1) QUANTN1,SUM(BHQH1) BHQH1,SUM(BHQD1) BHQD1, SUM(BAN1) BAN1,SUM(TED6T1) TED6T1,SUM(CS1) CS1,SUM(DV1) DV1,SUM(BHK1) BHK1,SUM(BHTN1) BHTN1,") \
_T("        SUM(QUAN1+QUANTN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1) CONG1,") \
_T("        SUM(QUAN2) QUAN2,SUM(QUANTN2) QUANTN2,SUM(BHQH2) BHQH2,SUM(BHQD2) BHQD2, SUM(BAN2) BAN2,SUM(TED6T2) TED6T2,SUM(CS2) CS2,SUM(DV2) DV2,SUM(BHK2) BHK2,SUM(BHTN2) BHTN2,") \
_T("        SUM(QUAN2+QUANTN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2) CONG2,") \
_T("        SUM(QUAN3) QUAN3,SUM(QUANTN3) QUANTN3,SUM(BHQH3) BHQH3,SUM(BHQD3) BHQD3, SUM(BAN3) BAN3,SUM(TED6T3) TED6T3,SUM(CS3) CS3,SUM(DV3) DV3,SUM(BHK3) BHK3,SUM(BHTN3) BHTN3,") \
_T("        SUM(QUAN3+QUANTN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) CONG3,") \
_T("        SUM(QUAN+QUANTN+BHQH+BHQD+BAN+TED6T+CS+DV+BHK+BHTN+QUAN1+QUANTN1+BHQH1+BHQD1+BAN1+TED6T1+CS1+DV1+BHK1+BHTN1+QUAN2+QUANTN2+BHQH2+BHQD2+BAN2+TED6T2+CS2+DV2+BHK2+BHTN2+QUAN3+QUANTN3+BHQH3+BHQD3+BAN3+TED6T3+CS3+DV3+BHK3+BHTN3) TONGCONG") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END QUANTN,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4400' THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END QUAN1,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END QUANTN1,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHQH1,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHQD1,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BAN1,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END TED6T1,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END CS1,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END DV1,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHK1,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4100' THEN 1 ELSE 0 END BHTN1,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END QUAN2,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END QUANTN2,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHQH2,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHQD2,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BAN2,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END TED6T2,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END CS2,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END DV2,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHK2,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4200' THEN 1 ELSE 0 END BHTN2,") \
_T("        CASE WHEN HO_OBJECT=1 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END QUAN3,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END QUANTN3,") \
_T("        CASE WHEN HO_OBJECT=2 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHQH3,") \
_T("        CASE WHEN HO_OBJECT=10 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHQD3,") \
_T("        CASE WHEN HO_OBJECT=8 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BAN3,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END TED6T3,") \
_T("        CASE WHEN HO_OBJECT=3 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END CS3,") \
_T("        CASE WHEN HO_OBJECT=7 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END DV3,") \
_T("        CASE WHEN HO_OBJECT=4 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHK3,") \
_T("        CASE WHEN HO_OBJECT=5 AND HFL_GROUPID='B4300' THEN 1 ELSE 0 END BHTN3") \
_T(" FROM(SELECT DISTINCT HO_DOCNO,HO_OBJECT,HFL_GROUPID,HO_DEPTID,HO_IDX") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HO_ITEMID=HFL_FEEID AND HFL_TYPEID='O')") \
_T(" WHERE HO_STATUS IN('T')") \
_T("   AND NVL(HO_DEPTTYPE, 'X') NOT IN('I','E')") \
_T("   %s %s") \
_T(" )))"),szDept,szWhere,szDept,szWhere,szDept,szWhere);
	return szSQL;
}