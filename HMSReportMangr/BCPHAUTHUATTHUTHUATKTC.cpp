#include "BCPHAUTHUATTHUTHUATKTC.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCPHAUTHUATTHUTHUATKTC *pVw = (CBCPHAUTHUATTHUTHUATKTC *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCPHAUTHUATTHUTHUATKTC *pVw = (CBCPHAUTHUATTHUTHUATKTC *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCPHAUTHUATTHUTHUATKTC* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCPHAUTHUATTHUTHUATKTC *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnOutPatientSelect();
}
static int _OnAddBCPHAUTHUATTHUTHUATKTCFnc(CWnd *pWnd){
	 return ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnAddBCPHAUTHUATTHUTHUATKTC();
} 
static int _OnEditBCPHAUTHUATTHUTHUATKTCFnc(CWnd *pWnd){
	 return ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnEditBCPHAUTHUATTHUTHUATKTC();
} 
static int _OnDeleteBCPHAUTHUATTHUTHUATKTCFnc(CWnd *pWnd){
	 return ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnDeleteBCPHAUTHUATTHUTHUATKTC();
} 
static int _OnSaveBCPHAUTHUATTHUTHUATKTCFnc(CWnd *pWnd){
	 return ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnSaveBCPHAUTHUATTHUTHUATKTC();
} 
static int _OnCancelBCPHAUTHUATTHUTHUATKTCFnc(CWnd *pWnd){
	 return ((CBCPHAUTHUATTHUTHUATKTC*)pWnd)->OnCancelBCPHAUTHUATTHUTHUATKTC();
} 
CBCPHAUTHUATTHUTHUATKTC::CBCPHAUTHUATTHUTHUATKTC(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCPHAUTHUATTHUTHUATKTC::~CBCPHAUTHUATTHUTHUATKTC(){
}
void CBCPHAUTHUATTHUTHUATKTC::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1014, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 204, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 206, 30, 286, 55);
	m_wndToDate.Create(this,291, 30, 399, 55); 
	m_wndLoad.Create(this, _T("&Load"), 819, 30, 913, 55);
	m_wndExport.Create(this, _T("&Export"), 917, 30, 1001, 55);
	m_wndList.Create(this,5, 64, 1014, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 589, 30, 669, 55);
	m_wndDepartment.Create(this,674, 30, 814, 55); 
	m_wndInPatient.Create(this, _T("InPatient"), 409, 30, 489, 55);
	m_wndOutPatient.Create(this, _T("OutPatient"), 501, 30, 581, 55);
	
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("T\xEAn k\x1EF9 thu\x1EADt"), FMT_WRAPING | CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Nh\xF3m"), FMT_WRAPING | CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Qu\xE2n"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("\x42HQ T\x1EA1i ng\x169"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("\x42HQ\x110"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("BHQH"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("\x42\x1EA1n"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("TE<6T"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("\x43h\xEDnh s\xE1\x63h"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("\x44\x1ECB\x63h v\x1EE5"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(11, _T("BHK"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("BHTN"), FMT_WRAPING | CFMT_MONEY, 50);
	m_wndList.InsertColumn(13, _T("T\x1ED5ng"), FMT_WRAPING | CFMT_MONEY, 50);

}
void CBCPHAUTHUATTHUTHUATKTC::OnInitializeComponents(){
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
void CBCPHAUTHUATTHUTHUATKTC::OnSetWindowEvents(){
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
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCPHAUTHUATTHUTHUATKTC::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBCPHAUTHUATTHUTHUATKTC::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCPHAUTHUATTHUTHUATKTC::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCPHAUTHUATTHUTHUATKTC::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nInPatient=0;
	m_nOutPatient=1;

}
int CBCPHAUTHUATTHUTHUATKTC::SetMode(int nMode){
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
/*void CBCPHAUTHUATTHUTHUATKTC::OnFromDateChange(){
	
} */
/*void CBCPHAUTHUATTHUTHUATKTC::OnFromDateSetfocus(){
	
} */
/*void CBCPHAUTHUATTHUTHUATKTC::OnFromDateKillfocus(){
	
} */
int CBCPHAUTHUATTHUTHUATKTC::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCPHAUTHUATTHUTHUATKTC::OnToDateChange(){
	
} */
/*void CBCPHAUTHUATTHUTHUATKTC::OnToDateSetfocus(){
	
} */
/*void CBCPHAUTHUATTHUTHUATKTC::OnToDateKillfocus(){
	
} */
int CBCPHAUTHUATTHUTHUATKTC::OnToDateCheckValue(){
	return 0;
} 
void CBCPHAUTHUATTHUTHUATKTC::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCPHAUTHUATTHUTHUATKTC::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 	CRecord rs(&pMF->m_db); 	UpdateData(true);	CExcel xls; 	int nCol = 0; 	int nRow = 7; 	CString szSQL, tmpStr,szOldGroup, szNewGroup;
	xls.CreateSheet(1); 	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 58);	xls.SetColumnWidth(1, 20);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 14);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 8);	xls.SetColumnWidth(12, 8);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 3, _T("PH\x1EAAU THU\x1EACT TH\x1EE6 THU\x1EACT K\x1EF8 THU\x1EACT \x43\x41O"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 6, _T("T\xEAn K\x1EF9 thu\x1EADt "), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("Nh\xF3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("BHQ T\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 6, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(3, 3, 0, 12);	xls.SetMerge(4, 4, 0, 12);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	while(!rs.IsEOF()){		rs.GetValue(_T("ID"), szNewGroup);
		if (szOldGroup != szNewGroup)
		{
			xls.SetCellText(0, nRow, rs.GetValue(_T("TYPE")), FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nRow++;
		}		rs.GetValue(_T("HFL_NAME"), tmpStr);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_WRAPING | FMT_TEXT );		rs.GetValue(_T("HFG_NAME"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_WRAPING | FMT_TEXT );		rs.GetValue(_T("QUAN"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("BHQTN"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("BHQD"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("BHQH"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("BAN"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("TED6T"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("CS"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("DV"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("BHK"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("BHTN"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		rs.GetValue(_T("TONG"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_WRAPING | FMT_NUMBER1);		nRow++; 		rs.MoveNext();		}
	EndWaitCursor();
	xls.Save(_T("Exports\\PHAU THUAT TT KTC.xls"));	
	
} 
void CBCPHAUTHUATTHUTHUATKTC::OnListDblClick(){
	
} 
void CBCPHAUTHUATTHUTHUATKTC::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCPHAUTHUATTHUTHUATKTC::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCPHAUTHUATTHUTHUATKTC::OnListLoadData(){
    UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, tmpStr,szNewGroup, szOldGroup,tmpStr1;
	int nItem=1;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex  = 1;
	int nIndex1 = 1;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("ID"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{				
			rs.GetValue(_T("TYPE"), tmpStr);
			tmpStr1.Format(_T("%d"),nIndex1++);
			nItem = m_wndList.AddItems(tmpStr1, tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 1);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex =1;
		}
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("HFL_NAME")),
			rs.GetValue(_T("HFG_NAME")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("BHQTN")), 
			rs.GetValue(_T("BHQD")), 
			rs.GetValue(_T("BHQH")), 
			rs.GetValue(_T("BAN")), 
			rs.GetValue(_T("TED6T")), 
			rs.GetValue(_T("CS")),
			rs.GetValue(_T("DV")), 
			rs.GetValue(_T("BHK")),
			rs.GetValue(_T("BHTN")), 
			rs.GetValue(_T("TONG")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCPHAUTHUATTHUTHUATKTC::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCPHAUTHUATTHUTHUATKTC::OnDepartmentSelendok(){
	 
}
/*void CBCPHAUTHUATTHUTHUATKTC::OnDepartmentSetfocus(){
	
}*/
/*void CBCPHAUTHUATTHUTHUATKTC::OnDepartmentKillfocus(){
	
}*/
long CBCPHAUTHUATTHUTHUATKTC::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,szCondition;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	if (m_nInPatient == 0)
	{
		szCondition.Format(_T(" AND sd_type IN('DT') "));
	}
	else
	{
		szCondition.Format(_T(" AND sd_type IN('KB') "));
	}
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where 1=1 %s order by id"), szCondition);
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
/*void CBCPHAUTHUATTHUTHUATKTC::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCPHAUTHUATTHUTHUATKTC::OnInPatientSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
void CBCPHAUTHUATTHUTHUATKTC::OnOutPatientSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
int CBCPHAUTHUATTHUTHUATKTC::OnAddBCPHAUTHUATTHUTHUATKTC(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCPHAUTHUATTHUTHUATKTC::OnEditBCPHAUTHUATTHUTHUATKTC(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCPHAUTHUATTHUTHUATKTC::OnDeleteBCPHAUTHUATTHUTHUATKTC(){
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
 		OnCancelBCPHAUTHUATTHUTHUATKTC();
 	}
	return 0;
}
int CBCPHAUTHUATTHUTHUATKTC::OnSaveBCPHAUTHUATTHUTHUATKTC(){
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
 		//OnBCPHAUTHUATTHUTHUATKTCListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCPHAUTHUATTHUTHUATKTC::OnCancelBCPHAUTHUATTHUTHUATKTC(){
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
int CBCPHAUTHUATTHUTHUATKTC::OnBCPHAUTHUATTHUTHUATKTCListLoadData(){
	return 0;
}
CString CBCPHAUTHUATTHUTHUATKTC::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND ho_depttype='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND ho_deptid = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HO_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT 1 ID,'\x43\xE1\x63 ph\x1EABu thu\x1EADt k\x1EF9 thu\x1EADt \x63\x61o' TYPE,") \
_T("        HFL_NAME,HFG_NAME,") \
_T("        SUM(QUAN) QUAN,") \
_T("        SUM(BHQTN) BHQTN,") \
_T("        SUM(BHQD) BHQD,") \
_T("        SUM(BHQH) BHQH,") \
_T("        SUM(BAN) BAN,") \
_T("        SUM(TED6T) TED6T,") \
_T("        SUM(CS) CS,") \
_T("        SUM(DV) DV,") \
_T("        SUM(BHK) BHK,") \
_T("        SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) AS TONG") \
_T(" FROM(SELECT HFL_NAME,HFG_NAME,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HO_ITEMID=HFL_FEEID AND HFL_TYPEID='O')") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFL_GROUPID=HFG_ID)") \
_T(" WHERE HO_STATUS IN('S','T') AND substr(hfl_groupid, 1, 2)='B4' AND hfl_hitech='Y' %s %s %s) ") \
_T(" GROUP BY HFL_NAME,HFG_NAME") \
_T(" UNION") \
_T(" SELECT 2 ID,'\x43\xE1\x63 th\x1EE7 thu\x1EADt k\x1EF9 thu\x1EADt \x63\x61o' TYPE,") \
_T("        HFL_NAME,HFG_NAME,") \
_T("        SUM(QUAN) QUAN,") \
_T("        SUM(BHQTN) BHQTN,") \
_T("        SUM(BHQD) BHQD,") \
_T("        SUM(BHQH) BHQH,") \
_T("        SUM(BAN) BAN,") \
_T("        SUM(TED6T) TED6T,") \
_T("        SUM(CS) CS,") \
_T("        SUM(DV) DV,") \
_T("        SUM(BHK) BHK,") \
_T("        SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) AS TONG") \
_T(" FROM(SELECT HFL_NAME,HFG_NAME,") \
_T("        CASE WHEN HO_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HO_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HO_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HO_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HO_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HO_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HO_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HO_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HO_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HO_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
_T(" FROM HMS_OPERATION") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HO_ITEMID=HFL_FEEID AND HFL_TYPEID='O')") \
_T(" LEFT JOIN HMS_FEE_GROUP ON(HFL_GROUPID=HFG_ID)") \
_T(" WHERE HO_STATUS IN('S','T') AND substr(hfl_groupid, 1, 2)='B5' AND hfl_hitech='Y' %s %s %s) ") \
_T(" GROUP BY HFL_NAME,HFG_NAME"),szWhere, szInOut, szDept,szWhere, szInOut, szDept);
	return szSQL;
}