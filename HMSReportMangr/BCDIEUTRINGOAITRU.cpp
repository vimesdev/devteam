#include "BCDIEUTRINGOAITRU.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCDIEUTRINGOAITRU *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCDIEUTRINGOAITRU *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCDIEUTRINGOAITRU *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDIEUTRINGOAITRU *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCDIEUTRINGOAITRU *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCDIEUTRINGOAITRU *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCDIEUTRINGOAITRU *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDIEUTRINGOAITRU *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCDIEUTRINGOAITRU *pVw = (CBCDIEUTRINGOAITRU *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCDIEUTRINGOAITRU *pVw = (CBCDIEUTRINGOAITRU *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCDIEUTRINGOAITRU *pVw = (CBCDIEUTRINGOAITRU *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCDIEUTRINGOAITRU*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCDIEUTRINGOAITRU*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCDIEUTRINGOAITRU*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCDIEUTRINGOAITRU*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCDIEUTRINGOAITRUFnc(CWnd *pWnd){
	 return ((CBCDIEUTRINGOAITRU*)pWnd)->OnAddBCDIEUTRINGOAITRU();
} 
static int _OnEditBCDIEUTRINGOAITRUFnc(CWnd *pWnd){
	 return ((CBCDIEUTRINGOAITRU*)pWnd)->OnEditBCDIEUTRINGOAITRU();
} 
static int _OnDeleteBCDIEUTRINGOAITRUFnc(CWnd *pWnd){
	 return ((CBCDIEUTRINGOAITRU*)pWnd)->OnDeleteBCDIEUTRINGOAITRU();
} 
static int _OnSaveBCDIEUTRINGOAITRUFnc(CWnd *pWnd){
	 return ((CBCDIEUTRINGOAITRU*)pWnd)->OnSaveBCDIEUTRINGOAITRU();
} 
static int _OnCancelBCDIEUTRINGOAITRUFnc(CWnd *pWnd){
	 return ((CBCDIEUTRINGOAITRU*)pWnd)->OnCancelBCDIEUTRINGOAITRU();
} 
CBCDIEUTRINGOAITRU::CBCDIEUTRINGOAITRU(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCDIEUTRINGOAITRU::~CBCDIEUTRINGOAITRU(){
}
void CBCDIEUTRINGOAITRU::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 3, 6, 1012, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	//m_wndPrint.Create(this, _T("&Print"), 620, 30, 710, 55);
	m_wndExport.Create(this, _T("&Export"), 525, 30, 615, 55);
	m_wndList.Create(this,3, 64, 1012, 614);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Khoa"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("BHQN"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("\x42HQ\x110"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("BHQH"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("\x42\x1EA0N"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(7, _T("Tr\x1EBB<6T"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("CS"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(9, _T("\x44\xE2n thu VP"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(10, _T("BHYT kh\xE1\x63"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(11, _T("BHTN"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(12, _T("T\x1ED5ng s\x1ED1"), CFMT_TEXT, 70);

}
void CBCDIEUTRINGOAITRU::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCDIEUTRINGOAITRU::OnSetWindowEvents(){
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
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCDIEUTRINGOAITRU::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCDIEUTRINGOAITRU::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCDIEUTRINGOAITRU::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCDIEUTRINGOAITRU::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCDIEUTRINGOAITRU::SetMode(int nMode){
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
/*void CBCDIEUTRINGOAITRU::OnFromDateChange(){
	
} */
/*void CBCDIEUTRINGOAITRU::OnFromDateSetfocus(){
	
} */
/*void CBCDIEUTRINGOAITRU::OnFromDateKillfocus(){
	
} */
int CBCDIEUTRINGOAITRU::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCDIEUTRINGOAITRU::OnToDateChange(){
	
} */
/*void CBCDIEUTRINGOAITRU::OnToDateSetfocus(){
	
} */
/*void CBCDIEUTRINGOAITRU::OnToDateKillfocus(){
	
} */
int CBCDIEUTRINGOAITRU::OnToDateCheckValue(){
	return 0;
} 
void CBCDIEUTRINGOAITRU::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCDIEUTRINGOAITRU::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCDIEUTRINGOAITRU::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 6; 
	CString szSQL, tmpStr,tmpStr1;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 35); 
	xls.SetColumnWidth(1, 6); 
	xls.SetColumnWidth(2, 7); 
	xls.SetColumnWidth(3, 7); 
	xls.SetColumnWidth(4, 7); 
	xls.SetColumnWidth(5, 7); 
	xls.SetColumnWidth(6, 7); 
	xls.SetColumnWidth(7, 15); 
	xls.SetColumnWidth(8, 15); 
	xls.SetColumnWidth(9, 12); 
	xls.SetColumnWidth(10, 7); 
	xls.SetColumnWidth(11, 10);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O \x110I\x1EC0U TR\x1ECA NGO\x1EA0I TR\xDA (K\xEA \x111\x1A1n \x63\x1EA5p thu\x1ED1\x63)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("\x110\x1A1n v\x1ECB kh\xE1m \ \x110\x1ED1i t\x1B0\x1EE3ng kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(1, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(2, 6, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER , true, 11);
	xls.SetCellText(3, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(4, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(5, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(6, 6, _T("Tr\x1EBB <6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(7, 6, _T("\x43h\xEDnh s\xE1\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(8, 6, _T("\x44\xE2n thu VP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(9, 6, _T("BHYT kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(10, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetCellText(11, 6, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(3, 3, 0, 11);
	xls.SetMerge(4, 4, 0, 11); 
	while(!rs.IsEOF()) 
	{	 

	rs.GetValue(_T("KHOA"), tmpStr); 
	xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT | FMT_BORDER);
	 
	rs.GetValue(_T("QUAN"), tmpStr); 
	xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("BHQTN"), tmpStr); 
	xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("BHQD"), tmpStr); 
	xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("BHQH"), tmpStr); 
	xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("BAN"), tmpStr); 
	xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("TE"), tmpStr); 
	xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("CS"), tmpStr); 
	xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("DV"), tmpStr); 
	xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("BHK"), tmpStr); 
	xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("BHTN"), tmpStr); 
	xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	rs.GetValue(_T("CONG"), tmpStr); 
	xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER | FMT_BORDER);
	 
	nRow++; 
	rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DIEU TRI NGOAI TRU.xls"));
	
} 
void CBCDIEUTRINGOAITRU::OnListDblClick(){
	
} 
void CBCDIEUTRINGOAITRU::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCDIEUTRINGOAITRU::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCDIEUTRINGOAITRU::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, tmpStr,szDesc;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem=1;
	szDesc.Format(_T("K\xEA \x111\x1A1n \x63\x1EA5p thu\x1ED1\x63"));
	nItem = m_wndList.AddItems(szDesc, NULL);
			m_wndList.MergeCell(nItem,0, nItem, 1);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("KHOA")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("BHQTN")), 
			rs.GetValue(_T("BHQD")), 
			rs.GetValue(_T("BHQH")), 
			rs.GetValue(_T("BAN")), 
			rs.GetValue(_T("TE")),
			rs.GetValue(_T("CS")), 
			rs.GetValue(_T("DV")), 
			rs.GetValue(_T("BHK")),
			rs.GetValue(_T("BHTN")), 
			rs.GetValue(_T("CONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCDIEUTRINGOAITRU::OnAddBCDIEUTRINGOAITRU(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCDIEUTRINGOAITRU::OnEditBCDIEUTRINGOAITRU(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCDIEUTRINGOAITRU::OnDeleteBCDIEUTRINGOAITRU(){
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
 		OnCancelBCDIEUTRINGOAITRU();
 	}
	return 0;
}
int CBCDIEUTRINGOAITRU::OnSaveBCDIEUTRINGOAITRU(){
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
 		//OnBCDIEUTRINGOAITRUListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCDIEUTRINGOAITRU::OnCancelBCDIEUTRINGOAITRU(){
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
int CBCDIEUTRINGOAITRU::OnBCDIEUTRINGOAITRUListLoadData(){
	return 0;
}
CString CBCDIEUTRINGOAITRU::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szSoNgay;
	szWhere.Format(_T(" AND HPO_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSoNgay.Format(_T("(TRUNC_DATE(CAST_STRING2DATE ('%s'))-TRUNC_DATE(CAST_STRING2DATE ('%s'))+1)"), m_szToDate , m_szFromDate);
	szSQL.Format(_T(" SELECT ID,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID='hms_deptid' AND SS_CODE=CAST(ID AS NUMBER)) KHOA,") \
_T("        SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH, SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,") \
_T("        SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT 1 ID,HPO_ORDERDATE,") \
_T("        CASE WHEN HPO_OBJECT_ID=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPO_OBJECT_ID=11 THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPO_OBJECT_ID=10 THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPO_OBJECT_ID=2 THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPO_OBJECT_ID=8 THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPO_OBJECT_ID IN(9,6) THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPO_OBJECT_ID=3 THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPO_OBJECT_ID=7 THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPO_OBJECT_ID=4 THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPO_OBJECT_ID=5 THEN 1 ELSE 0 END AS BHTN ") \
_T(" FROM(SELECT HPO_DOCNO,HPO_ORDERDATE,HPO_ORDERID,HPO_OBJECT_ID,HPO_ROOMID,HPO_DEPTID,HPO_ORDERSTATUS") \
_T(" FROM HMS_PHARMAORDER") \
_T(" WHERE HPO_ORDERSTATUS IN('S', 'A') AND HPO_DEPTID='C1.1')") \
_T(" UNION") \
_T(" SELECT 2 ID,HPO_ORDERDATE,") \
_T("        CASE WHEN HPO_OBJECT_ID=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPO_OBJECT_ID=11 THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPO_OBJECT_ID=10 THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPO_OBJECT_ID=2 THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPO_OBJECT_ID=8 THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPO_OBJECT_ID IN(9,6) THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPO_OBJECT_ID=3 THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPO_OBJECT_ID=7 THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPO_OBJECT_ID=4 THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPO_OBJECT_ID=5 THEN 1 ELSE 0 END AS BHTN ") \
_T(" FROM(SELECT HPO_DOCNO,HPO_ORDERDATE,HPO_ORDERID,HPO_OBJECT_ID,HPO_ROOMID,HPO_DEPTID,HPO_ORDERSTATUS") \
_T(" FROM HMS_PHARMAORDER") \
_T(" WHERE HPO_ORDERSTATUS IN('S', 'A') AND HPO_DEPTID='C1.2')") \
_T(" UNION") \
_T(" SELECT 3 ID,HPO_ORDERDATE,") \
_T("        CASE WHEN HPO_OBJECT_ID=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPO_OBJECT_ID=11 THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPO_OBJECT_ID=10 THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPO_OBJECT_ID=2 THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPO_OBJECT_ID=8 THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPO_OBJECT_ID IN(9,6) THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPO_OBJECT_ID=3 THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPO_OBJECT_ID=7 THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPO_OBJECT_ID=4 THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPO_OBJECT_ID=5 THEN 1 ELSE 0 END AS BHTN ") \
_T(" FROM(SELECT HPO_DOCNO,HPO_ORDERDATE,HPO_ORDERID,HPO_OBJECT_ID,HPO_ROOMID,HPO_DEPTID,HPO_ORDERSTATUS") \
_T(" FROM HMS_PHARMAORDER") \
_T(" WHERE HPO_ORDERSTATUS IN('S', 'A') AND HPO_DEPTID='C1.3')") \
_T(" UNION") \
_T(" SELECT 5 ID,HPO_ORDERDATE,") \
_T("        CASE WHEN HPO_OBJECT_ID=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPO_OBJECT_ID=11 THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPO_OBJECT_ID=10 THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPO_OBJECT_ID=2 THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPO_OBJECT_ID=8 THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPO_OBJECT_ID IN(9,6) THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPO_OBJECT_ID=3 THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPO_OBJECT_ID=7 THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPO_OBJECT_ID=4 THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPO_OBJECT_ID=5 THEN 1 ELSE 0 END AS BHTN ") \
_T(" FROM(SELECT HPO_DOCNO,HPO_ORDERDATE,HPO_ORDERID,HPO_OBJECT_ID,HPO_ROOMID,HPO_DEPTID,HPO_ORDERSTATUS") \
_T(" FROM HMS_PHARMAORDER") \
_T(" WHERE HPO_ORDERSTATUS IN('S', 'A') AND HPO_ROOMID=25)") \
_T(" UNION") \
_T(" SELECT 8 ID,HPO_ORDERDATE,") \
_T("        CASE WHEN HPO_OBJECT_ID=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPO_OBJECT_ID=11 THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPO_OBJECT_ID=10 THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPO_OBJECT_ID=2 THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPO_OBJECT_ID=8 THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPO_OBJECT_ID IN(9,6) THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPO_OBJECT_ID=3 THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPO_OBJECT_ID=7 THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPO_OBJECT_ID=4 THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPO_OBJECT_ID=5 THEN 1 ELSE 0 END AS BHTN ") \
_T(" FROM(SELECT HPO_DOCNO,HPO_ORDERDATE,HPO_ORDERID,HPO_OBJECT_ID,HPO_ROOMID,HPO_DEPTID,HPO_ORDERSTATUS") \
_T(" FROM HMS_PHARMAORDER") \
_T(" WHERE HPO_ORDERSTATUS IN('S', 'A') AND HPO_ROOMID=51)") \
_T(" UNION") \
_T(" SELECT 10 ID,HPO_ORDERDATE,") \
_T("        CASE WHEN HPO_OBJECT_ID=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPO_OBJECT_ID=11 THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPO_OBJECT_ID=10 THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPO_OBJECT_ID=2 THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPO_OBJECT_ID=8 THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPO_OBJECT_ID IN(9,6) THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPO_OBJECT_ID=3 THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPO_OBJECT_ID=7 THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPO_OBJECT_ID=4 THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPO_OBJECT_ID=5 THEN 1 ELSE 0 END AS BHTN ") \
_T(" FROM(SELECT HPO_DOCNO,HPO_ORDERDATE,HPO_ORDERID,HPO_OBJECT_ID,HPO_ROOMID,HPO_DEPTID,HPO_ORDERSTATUS") \
_T(" FROM HMS_PHARMAORDER") \
_T(" WHERE HPO_ORDERSTATUS IN('S', 'A'))") \
_T(" UNION") \
_T(" SELECT 13 ID,HPO_ORDERDATE,") \
_T("        CASE WHEN HPO_OBJECT_ID=1 THEN ROUND(1/%s,3) ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPO_OBJECT_ID=11 THEN ROUND(1/%s,3) ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPO_OBJECT_ID=10 THEN ROUND(1/%s,3) ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPO_OBJECT_ID=2 THEN ROUND(1/%s,3) ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPO_OBJECT_ID=8 THEN ROUND(1/%s,3) ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPO_OBJECT_ID IN(9,6) THEN ROUND(1/%s,3) ELSE 0 END AS TE,") \
_T("        CASE WHEN HPO_OBJECT_ID=3 THEN ROUND(1/%s,3) ELSE 0 END AS CS,") \
_T("        CASE WHEN HPO_OBJECT_ID=7 THEN ROUND(1/%s,3) ELSE 0 END AS DV,") \
_T("        CASE WHEN HPO_OBJECT_ID=4 THEN ROUND(1/%s,3) ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPO_OBJECT_ID=5 THEN ROUND(1/%s,3) ELSE 0 END AS BHTN ") \
_T(" FROM(SELECT HPO_DOCNO,HPO_ORDERDATE,HPO_ORDERID,HPO_OBJECT_ID,HPO_ROOMID,HPO_DEPTID,HPO_ORDERSTATUS") \
_T(" FROM HMS_PHARMAORDER") \
_T(" WHERE HPO_ORDERSTATUS IN('S', 'A')))") \
_T(" WHERE 1=1 %s") \
_T(" GROUP BY ID") \
_T(" ORDER BY ID"),szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szWhere);
	return szSQL;
}