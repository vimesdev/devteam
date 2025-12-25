#include "BCTKTHEODAUMOIDVCB.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTKTHEODAUMOIDVCB *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTKTHEODAUMOIDVCB *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTKTHEODAUMOIDVCB *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTKTHEODAUMOIDVCB *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTKTHEODAUMOIDVCB *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTKTHEODAUMOIDVCB *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTKTHEODAUMOIDVCB *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTKTHEODAUMOIDVCB *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTKTHEODAUMOIDVCB *pVw = (CBCTKTHEODAUMOIDVCB *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTKTHEODAUMOIDVCB *pVw = (CBCTKTHEODAUMOIDVCB *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTKTHEODAUMOIDVCB *pVw = (CBCTKTHEODAUMOIDVCB *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTKTHEODAUMOIDVCB*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTKTHEODAUMOIDVCB*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTKTHEODAUMOIDVCB*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTKTHEODAUMOIDVCB*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCTKTHEODAUMOIDVCBFnc(CWnd *pWnd){
	 return ((CBCTKTHEODAUMOIDVCB*)pWnd)->OnAddBCTKTHEODAUMOIDVCB();
} 
static int _OnEditBCTKTHEODAUMOIDVCBFnc(CWnd *pWnd){
	 return ((CBCTKTHEODAUMOIDVCB*)pWnd)->OnEditBCTKTHEODAUMOIDVCB();
} 
static int _OnDeleteBCTKTHEODAUMOIDVCBFnc(CWnd *pWnd){
	 return ((CBCTKTHEODAUMOIDVCB*)pWnd)->OnDeleteBCTKTHEODAUMOIDVCB();
} 
static int _OnSaveBCTKTHEODAUMOIDVCBFnc(CWnd *pWnd){
	 return ((CBCTKTHEODAUMOIDVCB*)pWnd)->OnSaveBCTKTHEODAUMOIDVCB();
} 
static int _OnCancelBCTKTHEODAUMOIDVCBFnc(CWnd *pWnd){
	 return ((CBCTKTHEODAUMOIDVCB*)pWnd)->OnCancelBCTKTHEODAUMOIDVCB();
} 
CBCTKTHEODAUMOIDVCB::CBCTKTHEODAUMOIDVCB(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTKTHEODAUMOIDVCB::~CBCTKTHEODAUMOIDVCB(){
}
void CBCTKTHEODAUMOIDVCB::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	//m_wndPrint.Create(this, _T("&Print"), 620, 30, 710, 55);
	m_wndExport.Create(this, _T("&Export"), 525, 30, 615, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("\x110\x1A1n v\x1ECB"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("\x43\x1EA5p t\x1B0\x1EDBng"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(3, _T("3//,4//"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(4, _T("1//,2//"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(5, _T("\x43\x1EA5p \xFAy"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(6, _T("HSQ,CS"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(7, _T("\x43\x1ED9ng"), CFMT_NUMBER, 100);

	CString tmpStr;

	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndList.GetHeaderControl()->SetItemHeight(3);

	TranslateString(_T("S\x1ED1 l\x1B0\x1EE3ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 6, true, false);

	m_wndList.SetDisplayColor(true);

}
void CBCTKTHEODAUMOIDVCB::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCTKTHEODAUMOIDVCB::OnSetWindowEvents(){
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
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CBCTKTHEODAUMOIDVCB::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCTKTHEODAUMOIDVCB::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTKTHEODAUMOIDVCB::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTKTHEODAUMOIDVCB::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCTKTHEODAUMOIDVCB::SetMode(int nMode){
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
/*void CBCTKTHEODAUMOIDVCB::OnFromDateChange(){
	
} */
/*void CBCTKTHEODAUMOIDVCB::OnFromDateSetfocus(){
	
} */
/*void CBCTKTHEODAUMOIDVCB::OnFromDateKillfocus(){
	
} */
int CBCTKTHEODAUMOIDVCB::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTKTHEODAUMOIDVCB::OnToDateChange(){
	
} */
/*void CBCTKTHEODAUMOIDVCB::OnToDateSetfocus(){
	
} */
/*void CBCTKTHEODAUMOIDVCB::OnToDateKillfocus(){
	
} */
int CBCTKTHEODAUMOIDVCB::OnToDateCheckValue(){
	return 0;
} 
void CBCTKTHEODAUMOIDVCB::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTKTHEODAUMOIDVCB::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTKTHEODAUMOIDVCB::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CString tmpStr, szSQL, szWhere; 
	CExcel xls; 
	int nCol = 0; 
	int nRow = 7; 
	szWhere.Format(_T(" AND HD_ADMITDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT DONVI,") \
_T("        SUM(CAPTUONG) CT,") \
_T("        SUM(THUONGDAI) TD,") \
_T("        SUM(THIEUTRUNG) TT,") \
_T("        SUM(CAPUY) CU,") \
_T("        SUM(HSQ) HS,") \
_T("        SUM(CAPTUONG+THUONGDAI+THIEUTRUNG+CAPUY+HSQ) CONG") \
_T(" FROM(SELECT HP_WORKPLACE DONVI,") \
_T("        CASE WHEN HP_RANK IN (15,16,17,18,21,22,23,24) THEN 1 ELSE 0 END CAPTUONG,") \
_T("        CASE WHEN HP_RANK IN (13,14) THEN 1 ELSE 0 END THUONGDAI,") \
_T("        CASE WHEN HP_RANK IN (11,12) THEN 1 ELSE 0 END THIEUTRUNG,") \
_T("        CASE WHEN HP_RANK IN (6,7,8,9,10) THEN 1 ELSE 0 END CAPUY,") \
_T("        CASE WHEN HP_RANK IN (1,2,3,4,5) THEN 1 ELSE 0 END HSQ") \
_T(" FROM HMS_PATIENT") \
_T(" LEFT JOIN HMS_DOC ON(HD_PATIENTNO=HP_PATIENTNO)") \
_T(" WHERE HP_WORKPLACE IS NOT NULL AND HD_OBJECT IN(1,10,11) %s)") \
_T(" GROUP BY DONVI ORDER BY DONVI"),szWhere); 
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 27);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("TH\x1ED0NG K\xCA TH\x45O \x110\x1EA6U M\x1ED0I \x43\xC1\x43 \x110\x1A0N V\x1ECA V\xC0 \x43\x1EA4P \x42\x1EAC\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("\x110\x1A1n V\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 7, _T("\x43\x1EA5p t\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 7, _T("3//,4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 7, _T("1//,2//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 7, _T("\x43\x1EA5p \xFAy"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 7, _T("HSQ,CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(3, 3, 0, 6);
	xls.SetMerge(4, 4, 0, 6);
	xls.SetMerge(6, 7, 0, 0);
	xls.SetMerge(6, 6, 1, 6);
	int nTotal[8];
	for (int i = 1; i<= 6; i++)
	{
		nTotal[i] = 0;
	}
	while(!rs.IsEOF()) 
	{
		rs.GetValue(_T("DONVI"), tmpStr); 
		xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT);
	 
		rs.GetValue(_T("CT"), tmpStr); 
		nTotal[1] += ToInt(tmpStr);
		xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TD"), tmpStr); 
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TT"), tmpStr); 
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CU"), tmpStr); 
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("HS"), tmpStr); 
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("CONG"), tmpStr); 
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		nRow++;
		rs.MoveNext();	
	}
	xls.SetCellMergedColumns(nCol, nRow +1, 1);
	xls.SetCellText(nCol, nRow+1, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER, true, 12);
	
	 for( int i = 1; i<= 6; i++)
	 {
		 tmpStr.Format(_T("%d"), nTotal[i]);
		 xls.SetCellText(i , nRow+1 , tmpStr, FMT_TEXT, true, 12);
	 }
	EndWaitCursor();
	xls.Save(_T("Exports\\THONG KE THEO DAU MOI CAC DON VI VA CAP BAC.xls"));	
} 
void CBCTKTHEODAUMOIDVCB::OnListDblClick(){
	
} 
void CBCTKTHEODAUMOIDVCB::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTKTHEODAUMOIDVCB::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTKTHEODAUMOIDVCB::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString tmpStr, szSQL, szWhere; 
	szWhere.Format(_T(" AND HD_ADMITDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT DONVI,") \
_T("        SUM(CAPTUONG) CT,") \
_T("        SUM(THUONGDAI) TD,") \
_T("        SUM(THIEUTRUNG) TT,") \
_T("        SUM(CAPUY) CU,") \
_T("        SUM(HSQ) HS,") \
_T("        SUM(CAPTUONG+THUONGDAI+THIEUTRUNG+CAPUY+HSQ) CONG") \
_T(" FROM(SELECT HP_WORKPLACE DONVI,") \
_T("        CASE WHEN HP_RANK IN (15,16,17,18,21,22,23,24) THEN 1 ELSE 0 END CAPTUONG,") \
_T("        CASE WHEN HP_RANK IN (13,14) THEN 1 ELSE 0 END THUONGDAI,") \
_T("        CASE WHEN HP_RANK IN (11,12) THEN 1 ELSE 0 END THIEUTRUNG,") \
_T("        CASE WHEN HP_RANK IN (6,7,8,9,10) THEN 1 ELSE 0 END CAPUY,") \
_T("        CASE WHEN HP_RANK IN (1,2,3,4,5) THEN 1 ELSE 0 END HSQ") \
_T(" FROM HMS_PATIENT") \
_T(" LEFT JOIN HMS_DOC ON(HD_PATIENTNO=HP_PATIENTNO)") \
_T(" WHERE HP_WORKPLACE IS NOT NULL AND HD_OBJECT IN(1,10,11) %s)") \
_T(" GROUP BY DONVI"),szWhere); 
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("DONVI")), 
			rs.GetValue(_T("CT")), 
			rs.GetValue(_T("TD")), 
			rs.GetValue(_T("TT")), 
			rs.GetValue(_T("CU")), 
			rs.GetValue(_T("HS")), 
			rs.GetValue(_T("CONG")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCTKTHEODAUMOIDVCB::OnAddBCTKTHEODAUMOIDVCB(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTKTHEODAUMOIDVCB::OnEditBCTKTHEODAUMOIDVCB(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTKTHEODAUMOIDVCB::OnDeleteBCTKTHEODAUMOIDVCB(){
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
 		OnCancelBCTKTHEODAUMOIDVCB();
 	}
	return 0;
}
int CBCTKTHEODAUMOIDVCB::OnSaveBCTKTHEODAUMOIDVCB(){
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
 		//OnBCTKTHEODAUMOIDVCBListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTKTHEODAUMOIDVCB::OnCancelBCTKTHEODAUMOIDVCB(){
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
int CBCTKTHEODAUMOIDVCB::OnBCTKTHEODAUMOIDVCBListLoadData(){
	return 0;
}
