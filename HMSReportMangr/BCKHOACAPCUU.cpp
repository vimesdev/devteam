#include "BCKHOACAPCUU.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCKHOACAPCUU *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCKHOACAPCUU *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCKHOACAPCUU *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCKHOACAPCUU *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCKHOACAPCUU *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCKHOACAPCUU *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCKHOACAPCUU *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCKHOACAPCUU *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCKHOACAPCUU *pVw = (CBCKHOACAPCUU *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCKHOACAPCUU *pVw = (CBCKHOACAPCUU *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCKHOACAPCUU *pVw = (CBCKHOACAPCUU *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCKHOACAPCUU*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCKHOACAPCUU*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCKHOACAPCUU*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCKHOACAPCUU*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCKHOACAPCUUFnc(CWnd *pWnd){
	 return ((CBCKHOACAPCUU*)pWnd)->OnAddBCKHOACAPCUU();
} 
static int _OnEditBCKHOACAPCUUFnc(CWnd *pWnd){
	 return ((CBCKHOACAPCUU*)pWnd)->OnEditBCKHOACAPCUU();
} 
static int _OnDeleteBCKHOACAPCUUFnc(CWnd *pWnd){
	 return ((CBCKHOACAPCUU*)pWnd)->OnDeleteBCKHOACAPCUU();
} 
static int _OnSaveBCKHOACAPCUUFnc(CWnd *pWnd){
	 return ((CBCKHOACAPCUU*)pWnd)->OnSaveBCKHOACAPCUU();
} 
static int _OnCancelBCKHOACAPCUUFnc(CWnd *pWnd){
	 return ((CBCKHOACAPCUU*)pWnd)->OnCancelBCKHOACAPCUU();
} 
CBCKHOACAPCUU::CBCKHOACAPCUU(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCKHOACAPCUU::~CBCKHOACAPCUU(){
}
void CBCKHOACAPCUU::OnCreateComponents(){
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
	m_wndList.InsertColumn(1, _T("\x110\x1A1n v\x1ECB kh\xE1m \ \x110\x1ED1i t\x1B0\x1EE3ng kh\xE1m"), CFMT_TEXT, 200);
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
void CBCKHOACAPCUU::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCKHOACAPCUU::OnSetWindowEvents(){
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
void CBCKHOACAPCUU::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCKHOACAPCUU::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCKHOACAPCUU::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCKHOACAPCUU::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCKHOACAPCUU::SetMode(int nMode){
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
/*void CBCKHOACAPCUU::OnFromDateChange(){
	
} */
/*void CBCKHOACAPCUU::OnFromDateSetfocus(){
	
} */
/*void CBCKHOACAPCUU::OnFromDateKillfocus(){
	
} */
int CBCKHOACAPCUU::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCKHOACAPCUU::OnToDateChange(){
	
} */
/*void CBCKHOACAPCUU::OnToDateSetfocus(){
	
} */
/*void CBCKHOACAPCUU::OnToDateKillfocus(){
	
} */
int CBCKHOACAPCUU::OnToDateCheckValue(){
	return 0;
} 
void CBCKHOACAPCUU::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCKHOACAPCUU::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCKHOACAPCUU::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 6; 
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 29); 
	xls.SetColumnWidth(1, 6); 
	xls.SetColumnWidth(2, 6); 
	xls.SetColumnWidth(3, 6); 
	xls.SetColumnWidth(4, 6); 
	xls.SetColumnWidth(5, 6); 
	xls.SetColumnWidth(6, 6); 
	xls.SetColumnWidth(7, 11); 
	xls.SetColumnWidth(8, 13); 
	xls.SetColumnWidth(9, 10); 
	xls.SetColumnWidth(10, 6); 
	xls.SetColumnWidth(11, 10);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("T\xCCNH H\xCCNH KH\xC1M \x42\x1EC6NH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("\x110\x1A1n v\x1ECB kh\xE1m \ \x110\x1ED1i t\x1B0\x1EE3ng kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("Tr\x1EBB <6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("\x43h\xEDnh s\xE1\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("\x44\xE2n thu VP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("BHYT kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(3, 3, 0, 11);
	xls.SetMerge(4, 4, 0, 11); 
	while(!rs.IsEOF()) 
	{	 
	rs.GetValue(_T("Name"), tmpStr); 
	xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT);
	 
	rs.GetValue(_T("QUAN"), tmpStr); 
	xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHQTN"), tmpStr); 
	xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHQD"), tmpStr); 
	xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHQH"), tmpStr); 
	xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BAN"), tmpStr); 
	xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("TED6T"), tmpStr); 
	xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("CS"), tmpStr); 
	xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("DV"), tmpStr); 
	xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHK"), tmpStr); 
	xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHTN"), tmpStr); 
	xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("CONG"), tmpStr); 
	xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	nRow++; 
	rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\KHOA CAP CUU.xls"));
	
} 
void CBCKHOACAPCUU::OnListDblClick(){
	
} 
void CBCKHOACAPCUU::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCKHOACAPCUU::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCKHOACAPCUU::OnListLoadData(){
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
			rs.GetValue(_T("Name")), 
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
			rs.GetValue(_T("CONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCKHOACAPCUU::OnAddBCKHOACAPCUU(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCKHOACAPCUU::OnEditBCKHOACAPCUU(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCKHOACAPCUU::OnDeleteBCKHOACAPCUU(){
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
 		OnCancelBCKHOACAPCUU();
 	}
	return 0;
}
int CBCKHOACAPCUU::OnSaveBCKHOACAPCUU(){
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
 		//OnBCKHOACAPCUUListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCKHOACAPCUU::OnCancelBCKHOACAPCUU(){
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
int CBCKHOACAPCUU::OnBCKHOACAPCUUListLoadData(){
	return 0;
}
CString CBCKHOACAPCUU::GetQueryString(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL,szWhere3;
	szWhere3.Format(_T(" AND HD_ADMITDATE BETWEEN cast_string2timestamp('%s') and cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT 1 TYPE,0 TYPEID,") \
_T("        'T\x1ED5ng s\x1ED1 \x42N \x111\x1EBFn' Name,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT") \
_T(" FROM HMS_DOC") \
_T(" WHERE HD_ADMITDEPT='C1.3' %s))") \
_T(" UNION") \
_T(" SELECT DISTINCT 2 TYPE,0 TYPEID,") \
_T("        '\x43\x1EA5p t\xEDnh + \x64\x1EA7u kh\xED' Name,") \
_T("        0 QUAN,") \
_T("        0 BHQTN,") \
_T("        0 BHQD,") \
_T("        0 BHQH,") \
_T("        0 BAN,") \
_T("        0 TED6T,") \
_T("        0 CS,") \
_T("        0 DV,") \
_T("        0 BHK,") \
_T("        0 BHTN,") \
_T("        0 CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT,") \
_T("        FIRST_VALUE(HE_EXAMDATE) OVER (PARTITION BY HD_DOCNO ORDER BY HE_RECEPTIDX) AS EXDATE") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" WHERE HD_ADMITDEPT='C1.3' %s))") \
_T(" UNION") \
_T(" SELECT 3 TYPE, 0 TYPEID,") \
_T("        '\x43\x1EA5p \x63\x1EE9u' NAME,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT 3 type, 1 typeid,") \
_T("        '+ N\x1ED9i kho\x61' Name,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT,") \
_T("        FIRST_VALUE(HE_EXAMDATE) OVER (PARTITION BY HD_DOCNO ORDER BY HE_RECEPTIDX) AS EXDATE") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_ID=HE_ROOMID)") \
_T(" WHERE HD_ADMITDEPT='C1.3' AND HRL_TYPE=2 %s))") \
_T(" UNION ") \
_T(" SELECT 3 type, 2 typeid,") \
_T("        '+ Ngo\x1EA1i kho\x61' Name,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT,") \
_T("        FIRST_VALUE(HE_EXAMDATE) OVER (PARTITION BY HD_DOCNO ORDER BY HE_RECEPTIDX) AS EXDATE") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_ID=HE_ROOMID)") \
_T(" WHERE HD_ADMITDEPT='C1.3' AND HRL_TYPE=3 %s))") \
_T(" UNION ") \
_T(" SELECT 3 type, 3 typeid,") \
_T("        '+ \x43huy\xEAn Kho\x61' Name,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT,") \
_T("        FIRST_VALUE(HE_EXAMDATE) OVER (PARTITION BY HD_DOCNO ORDER BY HE_RECEPTIDX) AS EXDATE") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_ID=HE_ROOMID)") \
_T(" WHERE HD_ADMITDEPT='C1.3' AND HRL_TYPE>3 %s)))") \
_T(" UNION") \
_T(" SELECT 3 type, 1 typeid,") \
_T("        '     - N\x1ED9i kho\x61' Name,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT,") \
_T("        FIRST_VALUE(HE_EXAMDATE) OVER (PARTITION BY HD_DOCNO ORDER BY HE_RECEPTIDX) AS EXDATE") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_ID=HE_ROOMID)") \
_T(" WHERE HD_ADMITDEPT='C1.3' AND HRL_TYPE=2 %s))") \
_T(" UNION") \
_T(" SELECT 3 type, 2 typeid,") \
_T("        '     - Ngo\x1EA1i kho\x61' Name,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT,") \
_T("        FIRST_VALUE(HE_EXAMDATE) OVER (PARTITION BY HD_DOCNO ORDER BY HE_RECEPTIDX) AS EXDATE") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_ID=HE_ROOMID)") \
_T(" WHERE HD_ADMITDEPT='C1.3' AND HRL_TYPE=3 %s))") \
_T(" UNION ") \
_T(" SELECT 3 type, 3 typeid,") \
_T("        '     - \x43huy\xEAn kho\x61' Name,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT,") \
_T("        FIRST_VALUE(HE_EXAMDATE) OVER (PARTITION BY HD_DOCNO ORDER BY HE_RECEPTIDX) AS EXDATE") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_ID=HE_ROOMID)") \
_T(" WHERE HD_ADMITDEPT='C1.3' AND HRL_TYPE>3 %s))") \
_T(" UNION") \
_T(" SELECT 4 type, 0 typeid,") \
_T("        'S\x1ED1 \x42N m\x1ED5 \x63\x1EA5p \x63\x1EE9u' Name,") \
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
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT CASE WHEN HD_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN ") \
_T(" FROM(SELECT DISTINCT HD_DOCNO,HD_STATUS,HD_OBJECT,") \
_T("        FIRST_VALUE(HE_EXAMDATE) OVER (PARTITION BY HD_DOCNO ORDER BY HE_RECEPTIDX) AS EXDATE") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_OPERATION ON(HO_DOCNO=HD_DOCNO)") \
_T(" WHERE HD_ADMITDEPT='C1.3' AND HO_TYPE=2 %s))") , szWhere3,szWhere3,szWhere3,szWhere3,szWhere3,szWhere3,szWhere3,szWhere3,szWhere3);
	return szSQL;
}