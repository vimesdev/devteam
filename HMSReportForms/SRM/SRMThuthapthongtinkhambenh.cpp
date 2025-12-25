#include "stdafx.h"
#include "SRMThuthapthongtinkhambenh.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinkhambenh *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinkhambenh *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinkhambenh *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinkhambenh *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinkhambenh *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinkhambenh *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinkhambenh *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinkhambenh *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinkhambenh *pVw = (CSRMThuthapthongtinkhambenh *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinkhambenh *pVw = (CSRMThuthapthongtinkhambenh *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinkhambenh *pVw = (CSRMThuthapthongtinkhambenh *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinkhambenh*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtinkhambenh*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMThuthapthongtinkhambenh*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinkhambenh*)pWnd)->OnListDeleteItem();
} 
static int _OnAddSRMThuthapthongtinkhambenhFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinkhambenh*)pWnd)->OnAddSRMThuthapthongtinkhambenh();
} 
static int _OnEditSRMThuthapthongtinkhambenhFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinkhambenh*)pWnd)->OnEditSRMThuthapthongtinkhambenh();
} 
static int _OnDeleteSRMThuthapthongtinkhambenhFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinkhambenh*)pWnd)->OnDeleteSRMThuthapthongtinkhambenh();
} 
static int _OnSaveSRMThuthapthongtinkhambenhFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinkhambenh*)pWnd)->OnSaveSRMThuthapthongtinkhambenh();
} 
static int _OnCancelSRMThuthapthongtinkhambenhFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinkhambenh*)pWnd)->OnCancelSRMThuthapthongtinkhambenh();
} 
CSRMThuthapthongtinkhambenh::CSRMThuthapthongtinkhambenh(CWnd *pParent){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSRMThuthapthongtinkhambenh::~CSRMThuthapthongtinkhambenh(){
}
void CSRMThuthapthongtinkhambenh::OnCreateComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 455, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 435, 55); 
	//m_wndLoad.Create(this, _T("&Load"), 215, 65, 305, 90);
	m_wndExport.Create(this, _T("&Export"), 310, 65, 400, 90);
}
void CSRMThuthapthongtinkhambenh::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CSRMThuthapthongtinkhambenh::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
void CSRMThuthapthongtinkhambenh::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CSRMThuthapthongtinkhambenh::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMThuthapthongtinkhambenh::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMThuthapthongtinkhambenh::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CSRMThuthapthongtinkhambenh::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CSRMThuthapthongtinkhambenh::OnFromDateChange(){
	
} */
/*void CSRMThuthapthongtinkhambenh::OnFromDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinkhambenh::OnFromDateKillfocus(){
	
} */
int CSRMThuthapthongtinkhambenh::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtinkhambenh::OnToDateChange(){
	
} */
/*void CSRMThuthapthongtinkhambenh::OnToDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinkhambenh::OnToDateKillfocus(){
	
} */
int CSRMThuthapthongtinkhambenh::OnToDateCheckValue(){
	return 0;
} 
void CSRMThuthapthongtinkhambenh::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CSRMThuthapthongtinkhambenh::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinkhambenh::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	BeginWaitCursor();	CRecord rs(&pMF->m_db);	UpdateData(true);	CExcel xls; 	int nCol = 0; 	int nRow = 6; 	CString szSQL, tmpStr;
	szSQL = GetQueryString();	rs.ExecSQL(szSQL); 	xls.CreateSheet(1); 	xls.SetWorksheet(0); 	xls.SetColumnWidth(0, 35); 	xls.SetColumnWidth(1, 6); 	xls.SetColumnWidth(2, 7); 	xls.SetColumnWidth(3, 7); 	xls.SetColumnWidth(4, 7); 	xls.SetColumnWidth(5, 7); 	xls.SetColumnWidth(6, 7); 	xls.SetColumnWidth(7, 15); 	xls.SetColumnWidth(8, 15); 	xls.SetColumnWidth(9, 12); 	xls.SetColumnWidth(10, 7); 	xls.SetColumnWidth(11, 7); 	xls.SetColumnWidth(12, 10);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 3, _T("Thu th\x1EADp th\xF4ng tin kh\xE1m \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss),CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 6, _T("\x110\x1A1n v\x1ECB kh\xE1m \ \x110\x1ED1i t\x1B0\x1EE3ng kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("Tr\x1EBB <6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 6, _T("\x43h\xEDnh s\xE1\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 6, _T("\x44\xE2n thu VP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 6, _T("BHYT kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 6, _T("BH n\x1EE3 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 6, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 4);	xls.SetMerge(1, 1, 0, 4);	xls.SetMerge(3, 3, 0, 11);	xls.SetMerge(4, 4, 0, 11); 	int nTotal[13];
	for (int i = 1; i<= 12; i++)
	{
		nTotal[i] = 0;
	}	while(!rs.IsEOF()) 	{	 	rs.GetValue(_T("KHOA"), tmpStr); 	xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT);	 	rs.GetValue(_T("c1"), tmpStr); 	nTotal[1] += ToInt(tmpStr);	xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c2"), tmpStr); 	nTotal[2] += ToInt(tmpStr);	xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c3"), tmpStr); 	nTotal[3] += ToInt(tmpStr);	xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c4"), tmpStr); 	nTotal[4] += ToInt(tmpStr);	xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c5"), tmpStr); 	nTotal[5] += ToInt(tmpStr);	xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c6"), tmpStr); 	nTotal[6] += ToInt(tmpStr);	xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c7"), tmpStr); 	nTotal[7] += ToInt(tmpStr);	xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c8"), tmpStr); 	nTotal[8] += ToInt(tmpStr);	xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c9"), tmpStr); 	nTotal[9] += ToInt(tmpStr);	xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c10"), tmpStr); 	nTotal[10] += ToInt(tmpStr);	xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c11"), tmpStr); 	nTotal[11] += ToInt(tmpStr);	xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	rs.GetValue(_T("c12"), tmpStr); 	nTotal[12] += ToInt(tmpStr);	xls.SetCellText(nCol + 12, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	nRow++; 	rs.MoveNext();		}
	xls.SetCellText(nCol, nRow+1, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT , true, 12);
	
	 for( int i = 1; i<= 12; i++)
	 {
		 tmpStr.Format(_T("%d"), nTotal[i]);
		 xls.SetCellText(i , nRow+1 , tmpStr, FMT_NUMBER1 | FMT_CENTER, true, 9);
	 }
	EndWaitCursor();
	xls.Save(_T("Exports\\SRMThuthapthongtinkhambenh.xls"));	
	
} 
void CSRMThuthapthongtinkhambenh::OnListDblClick(){
	
} 
void CSRMThuthapthongtinkhambenh::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMThuthapthongtinkhambenh::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMThuthapthongtinkhambenh::OnListLoadData(){
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
			rs.GetValue(_T("KHOA")), 
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
			rs.GetValue(_T("c12")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CSRMThuthapthongtinkhambenh::OnAddSRMThuthapthongtinkhambenh(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSRMThuthapthongtinkhambenh::OnEditSRMThuthapthongtinkhambenh(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMThuthapthongtinkhambenh::OnDeleteSRMThuthapthongtinkhambenh(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelSRMThuthapthongtinkhambenh();
 	}
	return 0;
}
int CSRMThuthapthongtinkhambenh::OnSaveSRMThuthapthongtinkhambenh(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnSRMThuthapthongtinkhambenhListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSRMThuthapthongtinkhambenh::OnCancelSRMThuthapthongtinkhambenh(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CSRMThuthapthongtinkhambenh::OnSRMThuthapthongtinkhambenhListLoadData(){
	return 0;
}
//CString CSRMThuthapthongtinkhambenh::GetQueryString(){
//	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
//	CString szSQL, szWhere, szWhere1, szWhere3, szWhere4, szSoNgay;
//	szWhere.Format(_T(" AND he_examdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
//	szSoNgay.Format(_T("(TRUNC_DATE(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))-TRUNC_DATE(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))+1)"), m_szToDate , m_szFromDate);
//	szSQL.Format(_T(" SELECT ID,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID='hms_deptid' AND SS_CODE=CAST(ID AS NUMBER)) KHOA,") \
//_T("        SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH, SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,") \
//_T("        SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TED6T+CS+DV+BHK+BHTN) CONG") \
//_T(" FROM(SELECT 1 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 AND HE_DEPTID='C1.1' AND HRL_ID NOT IN(25,54,52,51,50) THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 2 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 3 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 AND HE_DEPTID='C1.3' THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 5 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 AND HRL_ID=25 THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 AND HRL_ID=25 THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 AND HRL_ID=25 THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 AND HRL_ID=25 THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 AND HRL_ID=25 THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) AND HRL_ID=25 THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 AND HRL_ID=25 THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 AND HRL_ID=25 THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 AND HRL_ID=25 THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 AND HRL_ID=25 THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 6 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 AND HRL_ID=54 THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 AND HRL_ID=54 THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 AND HRL_ID=54 THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 AND HRL_ID=54 THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 AND HRL_ID=54 THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) AND HRL_ID=54 THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 AND HRL_ID=54 THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 AND HRL_ID=54 THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 AND HRL_ID=54 THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 AND HRL_ID=54 THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 7 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 AND HRL_ID=52 THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 AND HRL_ID=52 THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 AND HRL_ID=52 THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 AND HRL_ID=52 THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 AND HRL_ID=52 THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) AND HRL_ID=52 THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 AND HRL_ID=52 THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 AND HRL_ID=52 THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 AND HRL_ID=52 THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 AND HRL_ID=52 THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 8 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 AND HRL_ID=51 THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 AND HRL_ID=51 THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 AND HRL_ID=51 THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 AND HRL_ID=51 THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 AND HRL_ID=51 THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) AND HRL_ID=51 THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 AND HRL_ID=51 THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 AND HRL_ID=51 THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 AND HRL_ID=51 THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 AND HRL_ID=51 THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 9 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 AND HRL_ID=50 THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 AND HRL_ID=50 THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 AND HRL_ID=50 THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 AND HRL_ID=50 THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 AND HRL_ID=50 THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) AND HRL_ID=50 THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 AND HRL_ID=50 THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 AND HRL_ID=50 THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 AND HRL_ID=50 THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 AND HRL_ID=50 THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 10 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 THEN 1 ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 THEN 1 ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 THEN 1 ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 THEN 1 ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 THEN 1 ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) THEN 1 ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 THEN 1 ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 THEN 1 ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 THEN 1 ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 THEN 1 ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P'))") \
//_T(" UNION") \
//_T(" SELECT 11 ID,HE_EXAMDATE,") \
//_T("        CASE WHEN HD_OBJECT=1 THEN ROUND(1/%s,3) ELSE 0 END QUAN,") \
//_T("        CASE WHEN HD_OBJECT=11 THEN ROUND(1/%s,3) ELSE 0 END BHQTN,") \
//_T("        CASE WHEN HD_OBJECT=10 THEN ROUND(1/%s,3) ELSE 0 END BHQD,") \
//_T("        CASE WHEN HD_OBJECT=2 THEN ROUND(1/%s,3) ELSE 0 END BHQH,") \
//_T("        CASE WHEN HD_OBJECT=8 THEN ROUND(1/%s,3) ELSE 0 END BAN,") \
//_T("        CASE WHEN HD_OBJECT IN (9,6) THEN ROUND(1/%s,3) ELSE 0 END TED6T,") \
//_T("        CASE WHEN HD_OBJECT=3 THEN ROUND(1/%s,3) ELSE 0 END CS,") \
//_T("        CASE WHEN HD_OBJECT=7 THEN ROUND(1/%s,3) ELSE 0 END DV,") \
//_T("        CASE WHEN HD_OBJECT=4 THEN ROUND(1/%s,3) ELSE 0 END BHK,") \
//_T("        CASE WHEN HD_OBJECT=5 THEN ROUND(1/%s,3) ELSE 0 END BHTN") \
//_T(" FROM(SELECT DISTINCT HE_DOCNO,HD_OBJECT,HE_DEPTID,HE_EXAMDATE,HE_STATUS,HRL_ID") \
//_T(" FROM HMS_DOC") \
//_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO AND HE_DOCTOR=HD_DOCTOR)") \
//_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID)") \
//_T(" WHERE HE_STATUS IN('T','P')))") \
//_T(" WHERE 1=1 %s") \
//_T(" GROUP BY ID") \
//_T(" ORDER BY ID"),szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szSoNgay,szWhere);
//	return szSQL;
//}

//CString CSRMThuthapthongtinkhambenh::GetQueryString(){
//	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
//	CString szSQL, szWhere, szWhere1, szWhere3, szWhere4, szSoNgay;
//	szWhere.Format(_T(" AND he_examdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
//	szSoNgay.Format(_T("(TRUNC_DATE(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))-TRUNC_DATE(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))+1)"), m_szToDate , m_szFromDate);
//	szSQL.Format(_T(" SELECT (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID='hms_deptid' AND SS_CODE=CAST(title AS NUMBER)) KHOA,") \
//_T("        c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12") \
//_T(" FROM(SELECT title,") \
//_T("        sum(c1) as c1,") \
//_T(" 			 sum(c2) as c2,") \
//_T(" 			 sum(c3) as c3,") \
//_T(" 			 sum(c4) as c4,") \
//_T(" 			 sum(c5) as c5,") \
//_T(" 			 sum(c6) as c6,") \
//_T(" 			 sum(c7) as c7,") \
//_T(" 			 sum(c8) as c8,") \
//_T(" 			 sum(c9) as c9,") \
//_T(" 			 sum(c10) as c10,") \
//_T(" 			 sum(c11) as c11,") \
//_T(" 			 sum(c12) as c12 ") \
//_T(" FROM(SELECT 1 title,") \
//_T(" 			 case when hd_object=1 then 1 else 0 end as c1,") \
//_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
//_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
//_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
//_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
//_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
//_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
//_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
//_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
//_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
//_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
//_T(" 			 1 as c12 ") \
//_T(" FROM(SELECT he_docno docno, ") \
//_T(" 					  Min(he_receptidx) receptidx ") \
//_T(" FROM   hms_exam ") \
//_T(" WHERE  he_status IN ( 'T', 'P' ) ") \
//_T(" AND he_deptid = 'C1.1'") \
//_T(" GROUP  BY he_docno) ") \
//_T(" LEFT JOIN hms_exam ON( he_docno = docno AND he_receptidx = receptidx ) ") \
//_T(" LEFT JOIN hms_doc ON ( he_docno = hd_docno ) ") \
//_T(" WHERE 1=1 AND he_roomid not in(52,25,54,35,50,51,53,57,58,58) %s AND he_deptid = 'C1.1'") \
//_T(" UNION ALL") \
//_T(" SELECT 2 title,") \
//_T(" 			 case when hd_object=1 then 1 else 0 end as c1,") \
//_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
//_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
//_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
//_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
//_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
//_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
//_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
//_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
//_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
//_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
//_T(" 			 1 as c12 ") \
//_T(" FROM(SELECT he_docno docno, ") \
//_T(" 					  Min(he_receptidx) receptidx ") \
//_T(" FROM   hms_exam ") \
//_T(" WHERE  he_status <> 'O' ") \
//_T(" AND he_deptid = 'C1.2'") \
//_T(" GROUP  BY he_docno) ") \
//_T(" LEFT JOIN hms_exam ON( he_docno = docno AND he_receptidx = receptidx ) ") \
//_T(" LEFT JOIN hms_doc ON ( he_docno = hd_docno ) ") \
//_T(" WHERE 1=1 AND he_roomid not in(52,25,54,35,50,51,53,57,58) %s AND he_deptid = 'C1.2'") \
//_T(" UNION ALL") \
//_T(" SELECT 3 title,") \
//_T(" 			 case when hd_object=1 then 1 else 0 end as c1,") \
//_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
//_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
//_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
//_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
//_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
//_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
//_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
//_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
//_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
//_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
//_T(" 			 1 as c12 ") \
//_T(" FROM(SELECT he_docno docno, ") \
//_T(" 					  Min(he_receptidx) receptidx ") \
//_T(" FROM   hms_exam ") \
//_T(" WHERE  he_status IN ( 'T', 'P' ) ") \
//_T(" AND he_deptid = 'C1.3'") \
//_T(" GROUP  BY he_docno) ") \
//_T(" LEFT JOIN hms_exam ON( he_docno = docno AND he_receptidx = receptidx ) ") \
//_T(" LEFT JOIN hms_doc ON ( he_docno = hd_docno ) ") \
//_T(" WHERE 1=1 AND he_roomid not in(52,25,54,35,50,51,53,57,58) %s AND he_deptid = 'C1.3'") \
//_T(" )") \
//_T(" GROUP BY title") \
//_T(" UNION") \
//_T(" SELECT he_roomid title,") \
//_T("        sum(c1) as c1,") \
//_T(" 			 sum(c2) as c2,") \
//_T(" 			 sum(c3) as c3,") \
//_T(" 			 sum(c4) as c4,") \
//_T(" 			 sum(c5) as c5,") \
//_T(" 			 sum(c6) as c6,") \
//_T(" 			 sum(c7) as c7,") \
//_T(" 			 sum(c8) as c8,") \
//_T(" 			 sum(c9) as c9,") \
//_T(" 			 sum(c10) as c10,") \
//_T(" 			 sum(c11) as c11,") \
//_T(" 			 sum(c12) as c12 ") \
//_T(" FROM(SELECT he_roomid,") \
//_T(" 			 case when hd_object=1 then 1 else 0 end as c1,") \
//_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
//_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
//_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
//_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
//_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
//_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
//_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
//_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
//_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
//_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
//_T(" 			 1 as c12 ") \
//_T(" FROM(SELECT he_docno docno, ") \
//_T(" 					  Min(he_receptidx) receptidx ") \
//_T(" FROM   hms_exam ") \
//_T(" WHERE  he_status IN ( 'T', 'P' ) ") \
//_T(" AND he_deptid = 'C1.1'") \
//_T(" GROUP  BY he_docno) ") \
//_T(" LEFT JOIN hms_exam ON( he_docno = docno AND he_receptidx = receptidx ) ") \
//_T(" LEFT JOIN hms_doc ON ( he_docno = hd_docno ) ") \
//_T(" WHERE 1=1 AND he_roomid in(52,25,54,35,50,51,53,57,58) %s AND he_deptid = 'C1.1')") \
//_T(" GROUP BY he_roomid)"),szWhere,szWhere,szWhere,szWhere);
//	return szSQL;
//}

CString CSRMThuthapthongtinkhambenh::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szWhere3, szWhere4, szSoNgay;
	szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSoNgay.Format(_T("(TRUNC_DATE(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))-TRUNC_DATE(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))+1)"), m_szToDate , m_szFromDate);
	szSQL.Format(_T(" SELECT (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID='hms_deptid' AND SS_CODE=CAST(title AS NUMBER)) KHOA,") \
_T("        c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12") \
_T(" FROM(SELECT title,") \
_T("        sum(c1) as c1,") \
_T(" 			 sum(c2) as c2,") \
_T(" 			 sum(c3) as c3,") \
_T(" 			 sum(c4) as c4,") \
_T(" 			 sum(c5) as c5,") \
_T(" 			 sum(c6) as c6,") \
_T(" 			 sum(c7) as c7,") \
_T(" 			 sum(c8) as c8,") \
_T(" 			 sum(c9) as c9,") \
_T(" 			 sum(c10) as c10,") \
_T(" 			 sum(c11) as c11,") \
_T(" 			 sum(c12) as c12 ") \
_T(" FROM(SELECT 1 title,") \
_T(" 			 case when hd_object=1 then 1 else 0 end as c1,") \
_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
_T(" 			 1 as c12 ") \
_T(" FROM(SELECT he_docno docno, ") \
_T(" 			 Min(he_receptidx) receptidx ") \
_T(" FROM   hms_exam ") \
_T(" WHERE  he_status IN ( 'T', 'P' ) ") \
_T(" AND he_deptid = 'C1.1'") \
_T(" GROUP  BY he_docno) ") \
_T(" LEFT JOIN hms_exam ON( he_docno = docno AND he_receptidx = receptidx ) ") \
_T(" LEFT JOIN hms_doc ON ( he_docno = hd_docno ) ") \
_T(" WHERE 1=1 AND he_roomid not in(52,25,54,50,51,53,57,58,58) %s AND he_deptid = 'C1.1'") \
_T(" UNION ALL") \
_T(" Select title,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,(c1+c2+c3+c4+c5+c6+c7+c8+c9+c10+c11) c12") \
_T(" FROM(select 2 title,") \
_T("        case when hd_object=1 then 1 else 0 end as c1,") \
_T("        case when hd_object=11 then 1 else 0 end as c2,") \
_T("        case when hd_object=10 then 1 else 0 end as c3,") \
_T("        case when hd_object=2 and substr(hd_cardno, 1, 2) = 'HT' then 1 else 0 end as c4,") \
_T("        case when hd_object=8 then 1 else 0 end as c5,") \
_T("        case when hd_object in(6,9) then 1 else 0 end as c6,") \
_T("        case when hd_object=3 then 1 else 0 end as c7,") \
_T("        case when hd_object=7 then 1 else 0 end as c8,") \
_T("        case when hd_object=4 then 1 else 0 end as c9,") \
_T("        case when hd_object=5 then 1 else 0 end as c10,") \
_T("        case when hd_object=12 then 1 else 0 end as c11,") \
_T("        1 as c12 ") \
_T(" from hms_exam ") \
_T(" left join hms_doc on he_docno = hd_docno ") \
_T(" where   he_status IN('P','T')  ") \
_T(" and he_deptid  = 'C1.2'   ") \
_T(" %s)") \
_T(" UNION ALL") \
_T(" SELECT 3 title,") \
_T(" 			 case when hd_object=1 then 1 else 0 end as c1,") \
_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
_T(" 			 1 as c12 ") \
_T(" FROM(SELECT hd_docno as docno,") \
_T(" 			 hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_exam ON(hd_docno=he_docno)") \
_T(" WHERE 1=1 AND he_status IN('P','T') %s AND he_deptid = 'C1.3')") \
_T(" UNION ALL") \
_T(" SELECT he_roomid title,") \
_T(" 			 case when hd_object=1 then 1 else 0 end as c1,") \
_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
_T(" 			 1 as c12 ") \
_T(" FROM(SELECT hd_docno as docno,he_roomid,") \
_T(" 			 hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_exam ON(hd_docno=he_docno)") \
_T(" WHERE 1=1 AND he_status IN('P','T') %s  AND he_roomid in(52,25,54,50,51,58))") \
_T(" UNION ALL") \
_T(" SELECT 57 title,") \
_T(" 			 case when hd_object=1 then 1 else 0 end as c1,") \
_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
_T(" 			 1 as c12 ") \
_T(" FROM(SELECT hd_docno as docno,he_roomid,") \
_T(" 			 hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_exam ON(hd_docno=he_docno)") \
_T(" WHERE 1=1 AND he_status IN('P','T') %s AND he_roomid in(53,57)))") \
_T(" GROUP BY title)") \
_T(" ORDER BY title"),szWhere,szWhere,szWhere,szWhere,szWhere);
	return szSQL;
}