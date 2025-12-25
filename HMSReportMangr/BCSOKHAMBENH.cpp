#include "BCSOKHAMBENH.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCSOKHAMBENH *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCSOKHAMBENH *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCSOKHAMBENH *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSOKHAMBENH *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCSOKHAMBENH *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCSOKHAMBENH *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCSOKHAMBENH *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSOKHAMBENH *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCSOKHAMBENH *pVw = (CBCSOKHAMBENH *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCSOKHAMBENH *pVw = (CBCSOKHAMBENH *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCSOKHAMBENH *pVw = (CBCSOKHAMBENH *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCSOKHAMBENH*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCSOKHAMBENH*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCSOKHAMBENH*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCSOKHAMBENH*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCSOKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCSOKHAMBENH*)pWnd)->OnAddBCSOKHAMBENH();
} 
static int _OnEditBCSOKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCSOKHAMBENH*)pWnd)->OnEditBCSOKHAMBENH();
} 
static int _OnDeleteBCSOKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCSOKHAMBENH*)pWnd)->OnDeleteBCSOKHAMBENH();
} 
static int _OnSaveBCSOKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCSOKHAMBENH*)pWnd)->OnSaveBCSOKHAMBENH();
} 
static int _OnCancelBCSOKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCSOKHAMBENH*)pWnd)->OnCancelBCSOKHAMBENH();
} 
CBCSOKHAMBENH::CBCSOKHAMBENH(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCSOKHAMBENH::~CBCSOKHAMBENH(){
}
void CBCSOKHAMBENH::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 3, 6, 1012, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	m_wndPrint.EnableWindow(false);
	m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 

}
void CBCSOKHAMBENH::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(1, _T("Ngày/ Khoa"), CFMT_DATE, 100);
	m_wndList.InsertColumn(2, _T("C1.1"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("C1.2"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("C1.3"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("TYC"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("Đông Y"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("YHTN C15"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("Phóng xạ A20"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("Răng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("VLTL C6"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(11, _T("Xạ trị A6C"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("PKQT A16"), CFMT_MONEY, 50);
}
void CBCSOKHAMBENH::OnSetWindowEvents(){
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
	//m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCSOKHAMBENH::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCSOKHAMBENH::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCSOKHAMBENH::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCSOKHAMBENH::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCSOKHAMBENH::SetMode(int nMode){
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
/*void CBCSOKHAMBENH::OnFromDateChange(){
	
} */
/*void CBCSOKHAMBENH::OnFromDateSetfocus(){
	
} */
/*void CBCSOKHAMBENH::OnFromDateKillfocus(){
	
} */
int CBCSOKHAMBENH::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCSOKHAMBENH::OnToDateChange(){
	
} */
/*void CBCSOKHAMBENH::OnToDateSetfocus(){
	
} */
/*void CBCSOKHAMBENH::OnToDateKillfocus(){
	
} */
int CBCSOKHAMBENH::OnToDateCheckValue(){
	return 0;
} 
void CBCSOKHAMBENH::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCSOKHAMBENH::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSOKHAMBENH::OnExportSelect(){
	OnExport();
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 7; 
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 16);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 18);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O S\x1ED4 KH\xC1M \x42\x1EC6NH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("C1.1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("C1.2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("C1.3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 6, _T("C6"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("C15"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("R\x103ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("A10"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("A20"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("TS Khám/Ngày"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 0, 9);
	xls.SetMerge(4, 4, 0, 9);
	int nTotal[10];
	for (int i = 1; i<= 9; i++)
	{
		nTotal[i] = 0;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("NGAY"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("C1"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("C2"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("C3"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("C6"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("C15"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("B10"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("A10"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("A20"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("TSKHAM"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		nRow++; 
		rs.MoveNext();	
	}
	xls.SetCellText(nCol, nRow, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER, true, 11);
	 for( int i = 1; i<= 9; i++)
	 {
		 tmpStr.Format(_T("%d"), nTotal[i]);
		 xls.SetCellText(i , nRow , tmpStr, FMT_NUMBER1 | FMT_CENTER, true, 11);
	 }
	CString songay,tmpStr2;
	int tmpStr1=0;
	CRecord rs1(&pMF->m_db); 
	songay.Format(_T("SELECT ((CAST_STRING2DATE ('%s')-CAST_STRING2DATE ('%s'))+1) SONGAY FROM DUAL"), m_szToDate, m_szFromDate);
	rs1.ExecSQL(songay); 
	if (!rs1.IsEOF())
	{
		rs1.GetValue(_T("SONGAY"),tmpStr1);
		for( int i = 1; i<= 9; i++)
		{
			xls.SetCellText(nCol, nRow+1, _T("T\x42 \x31 ng\xE0y kh\xE1m"), FMT_TEXT | FMT_CENTER, true, 11);
			tmpStr2.Format(_T("%d"),nTotal[i]%tmpStr1 );
			xls.SetCellText(i , nRow+1 , tmpStr2, FMT_TEXT | FMT_CENTER, true, 11);
		}
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BCSOKHAMBENH.xls"));	
}

void CBCSOKHAMBENH::OnExport(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL = GetQueryString_(), tmpStr;
	int nRow = 7, nDaywithPatient[11], nTmp = 0;
	long nColTotal[11];
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	if (!xls.Load(_T("Exports\\MAU_BCSOKHAMBENH.xls"))){
		AfxMessageBox(_T("MAU_BCSOKHAMBENH.xls"));
		return;
	}
	xls.SetWorksheet(0);
	for (int i = 0; i < 11; i++){ 
		nColTotal[i] = 0;
		nDaywithPatient[i] = 0;
	}
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr, 4098);
	while (!rs.IsEOF()){
		for (int i = 0; i < rs.GetFieldCount(); i++){
			xls.SetCellText(i, nRow, rs.GetValue(rs.GetFieldName(i)), i==0?FMT_TEXT:FMT_NUMBER1);
			if (i > 0){
				rs.GetValue(rs.GetFieldName(i), nTmp);
				if (nTmp > 0) nDaywithPatient[i-1]++;
				nColTotal[i-1] += nTmp;
			}
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(0, nRow, _T("Tổng:"), 4098, true);
	for (int i = 0; i < 11; i++) xls.SetCellText(i+1, nRow, ToString(nColTotal[i]), FMT_NUMBER1);
	nRow++;
	xls.SetCellText(0, nRow, _T("TB 1 ngày khám:"), 4098, true);
	for (int i = 0; i < 11; i++) xls.SetCellText(i+1, nRow, nDaywithPatient[i]==0?_T(""):ToString(floor((nColTotal[i]/double(nDaywithPatient[i]))+0.5)), FMT_NUMBER1);
	xls.Save(_T("Exports\\BCSOKHAMBENH.xls"));
}

void CBCSOKHAMBENH::OnListDblClick(){
	
} 
//void CBCSOKHAMBENH::OnListSelectChange(int nOldItem, int nNewItem){
//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	
//} 
int CBCSOKHAMBENH::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCSOKHAMBENH::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex=1, nItem = 0, nTmp = 0, nDaywithPatient = 0;
	long nColTotal[11];
	szSQL = GetQueryString_();
	rs.ExecSQL(szSQL);
	nCount = rs.GetRecordCount();
	for (int i = 0; i < 11; i++) nColTotal[i] = 0;
	while(!rs.IsEOF()){
		nItem = m_wndList.AddItems(int2str(nIndex++), NULL);
		for (int i = 0; i < rs.GetFieldCount(); i++){
			m_wndList.SetItemText(nItem, i+1, rs.GetValue(rs.GetFieldName(i)));
			if (i>0) nColTotal[i-1] += str2int(rs.GetValue(rs.GetFieldName(i)));
		}
		rs.MoveNext();
	}
	nItem = m_wndList.AddItems(_T(""), _T("Tổng số:"), NULL);
	for (int i = 0; i < 11; i++) m_wndList.SetItemText(nItem, i+2, ToString(nColTotal[i]));
	nItem = m_wndList.AddItems(_T(""), _T("TB 1 ngày khám:"), NULL);
	for (int i = 0; i < 11; i++){
		nDaywithPatient = 0;
		for (int j = 0; j < nCount; j++){
			nTmp = str2int(m_wndList.GetItemText(j, i+2));
			if (nTmp > 0) nDaywithPatient++;
		}
		m_wndList.SetItemText(nItem, i+2, nDaywithPatient==0?_T(""):ToString(floor(nColTotal[i]/double(nDaywithPatient)+0.5)));
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCSOKHAMBENH::OnAddBCSOKHAMBENH(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCSOKHAMBENH::OnEditBCSOKHAMBENH(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCSOKHAMBENH::OnDeleteBCSOKHAMBENH(){
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
 		OnCancelBCSOKHAMBENH();
 	}
	return 0;
}
int CBCSOKHAMBENH::OnSaveBCSOKHAMBENH(){
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
 		//OnBCSOKHAMBENHListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCSOKHAMBENH::OnCancelBCSOKHAMBENH(){
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
int CBCSOKHAMBENH::OnBCSOKHAMBENHListLoadData(){
	return 0;
}
CString CBCSOKHAMBENH::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, tmpStr, szWhere,szSoNgay;
	szWhere.Format(_T("WHERE HE_EXAMDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSoNgay.Format(_T("NULLIF((TRUNC_DATE(CAST_STRING2DATE ('%s'))-TRUNC_DATE(CAST_STRING2DATE ('%s'))+1),0)"), m_szToDate , m_szFromDate);
	szSQL.Format(_T(" SELECT TRUNC(HE_EXAMDATE) NGAY,") \
_T("        SUM(C1) C1,SUM(C2) C2,SUM(C3) C3,SUM(C6) C6,SUM(C15) C15,SUM(B10) B10,SUM(A10) A10,SUM(A20) A20,") \
_T("        ROUND(SUM(C1+C2+C3)/%s,3) TSKHAM") \
_T(" FROM(SELECT HE_EXAMDATE,") \
_T("        CASE WHEN HE_STATUS IN('P','T') AND HD_ADMITDEPT='C1.1' THEN 1 ELSE 0 END C1,") \
_T("        CASE WHEN HE_STATUS IN('P','T') AND HD_ADMITDEPT='C1.2' THEN 1 ELSE 0 END C2,") \
_T("        CASE WHEN HE_STATUS IN('P','T') AND HD_ADMITDEPT='C1.3' THEN 1 ELSE 0 END C3,") \
_T("        CASE WHEN HE_STATUS IN('P','T') AND HRL_ID=54 THEN 1 ELSE 0 END C6,") \
_T("        CASE WHEN HE_STATUS IN('P','T') AND HRL_ID=50 THEN 1 ELSE 0 END C15,") \
_T("        CASE WHEN HE_STATUS IN('P','T') AND HRL_ID=52 THEN 1 ELSE 0 END B10,") \
_T("        CASE WHEN HE_STATUS IN('P','T') AND HRL_ID=25 THEN 1 ELSE 0 END A10,") \
_T("        CASE WHEN HE_STATUS IN('P','T') AND HRL_ID=51 THEN 1 ELSE 0 END A20") \
_T(" FROM(SELECT DISTINCT HD_ADMITDEPT,HE_EXAMDATE,HE_STATUS,HRL_ID") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_ROOMLIST ON(HRL_DEPTID=HE_DEPTID AND HRL_ID=HE_ROOMID) %s))") \
_T(" GROUP BY TRUNC(HE_EXAMDATE)") \
_T(" ORDER BY TRUNC(HE_EXAMDATE)"),szSoNgay, szWhere);
	return szSQL;
}

CString CBCSOKHAMBENH::GetQueryString_(){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND he_examdate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T("WITH tbl_xidx AS (SELECT Min(he_receptidx) idx,") \
	_T("                he_docno docno") \
	_T("         FROM   hms_exam") \
	_T("         WHERE  he_status IN ( 'P', 'T' )") \
	_T("         GROUP  BY he_docno),") \
	_T("     tbl_main AS (SELECT    he_examdate exam_date,") \
	_T("                   he_deptid dept_id,") \
	_T("                   he_roomid room_id, hrl_type room_type") \
	_T("         FROM      tbl_xidx") \
	_T("         RIGHT JOIN hms_exam ON ( he_docno = docno AND he_receptidx = idx )") \
	_T("		 LEFT JOIN hms_doc ON (he_docno = hd_docno)") \
	_T("         LEFT JOIN hms_roomlist ON ( he_deptid = hrl_deptid AND he_roomid = hrl_id )") \
	_T("         WHERE     he_status IN ( 'P', 'T' ) %s),") \
	_T("	tbl_pivot AS (SELECT trunc(exam_date) exam_date, CASE WHEN room_id IN (25, 50, 51, 52, 54, 57, 58) THEN dept_id||'|'||room_id ") \
	_T("		ELSE dept_id END dept_name FROM tbl_main)") \
	_T("	SELECT to_char(exam_date, 'DD/MM/YYYY') exam_date, c11, c12, c13, tyc, dongy, c15, a20, rang, c6, a6c, a16 ") \
	_T("	FROM tbl_pivot") \
	_T("	PIVOT( count(*) FOR dept_name IN ('C1.1' c11, 'C1.2' c12, 'C1.3' c13, 'TYC' tyc, 'C1.1|25' AS dongy, 'C1.1|50' AS c15, 'C1.1|51' AS a20, ") \
	_T("		'C1.1|52' AS rang, 'C1.1|54' AS c6, 'C1.1|57' AS a6c, 'C1.1|58' AS a16)) ORDER BY to_date(exam_date, 'DD/MM/YYYY')"), szWhere);
	return szSQL;
}