#include "MSBCTonghoptheomaPTTT.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCTonghoptheomaPTTT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTonghoptheomaPTTT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTonghoptheomaPTTT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTonghoptheomaPTTT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCTonghoptheomaPTTT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTonghoptheomaPTTT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTonghoptheomaPTTT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTonghoptheomaPTTT *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBCTonghoptheomaPTTT *pVw = (CMSBCTonghoptheomaPTTT *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCTonghoptheomaPTTT *pVw = (CMSBCTonghoptheomaPTTT *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBCTonghoptheomaPTTT *pVw = (CMSBCTonghoptheomaPTTT *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCTonghoptheomaPTTT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCTonghoptheomaPTTT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCTonghoptheomaPTTT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCTonghoptheomaPTTT*)pWnd)->OnListDeleteItem();
} 
static int _OnAddMSBCTonghoptheomaPTTTFnc(CWnd *pWnd){
	 return ((CMSBCTonghoptheomaPTTT*)pWnd)->OnAddMSBCTonghoptheomaPTTT();
} 
static int _OnEditMSBCTonghoptheomaPTTTFnc(CWnd *pWnd){
	 return ((CMSBCTonghoptheomaPTTT*)pWnd)->OnEditMSBCTonghoptheomaPTTT();
} 
static int _OnDeleteMSBCTonghoptheomaPTTTFnc(CWnd *pWnd){
	 return ((CMSBCTonghoptheomaPTTT*)pWnd)->OnDeleteMSBCTonghoptheomaPTTT();
} 
static int _OnSaveMSBCTonghoptheomaPTTTFnc(CWnd *pWnd){
	 return ((CMSBCTonghoptheomaPTTT*)pWnd)->OnSaveMSBCTonghoptheomaPTTT();
} 
static int _OnCancelMSBCTonghoptheomaPTTTFnc(CWnd *pWnd){
	 return ((CMSBCTonghoptheomaPTTT*)pWnd)->OnCancelMSBCTonghoptheomaPTTT();
} 
CMSBCTonghoptheomaPTTT::CMSBCTonghoptheomaPTTT(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMSBCTonghoptheomaPTTT::~CMSBCTonghoptheomaPTTT(){
}
void CMSBCTonghoptheomaPTTT::OnCreateComponents(){
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
	m_wndList.InsertColumn(1, _T("KHOA"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(2, _T("Dac biet"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Loai I"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(4, _T("Loai II"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("Loai III"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(6, _T("Tong"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(7, _T("Quan"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(8, _T("BHQH"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(9, _T("BHQD"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(10, _T("Ban"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(11, _T("TE<6T"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(12, _T("CS"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(13, _T("DV"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(14, _T("BHK"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(15, _T("BHK"), CFMT_NUMBER, 50);

}
void CMSBCTonghoptheomaPTTT::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CMSBCTonghoptheomaPTTT::OnSetWindowEvents(){
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
void CMSBCTonghoptheomaPTTT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CMSBCTonghoptheomaPTTT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCTonghoptheomaPTTT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCTonghoptheomaPTTT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CMSBCTonghoptheomaPTTT::SetMode(int nMode){
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
/*void CMSBCTonghoptheomaPTTT::OnFromDateChange(){
	
} */
/*void CMSBCTonghoptheomaPTTT::OnFromDateSetfocus(){
	
} */
/*void CMSBCTonghoptheomaPTTT::OnFromDateKillfocus(){
	
} */
int CMSBCTonghoptheomaPTTT::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCTonghoptheomaPTTT::OnToDateChange(){
	
} */
/*void CMSBCTonghoptheomaPTTT::OnToDateSetfocus(){
	
} */
/*void CMSBCTonghoptheomaPTTT::OnToDateKillfocus(){
	
} */
int CMSBCTonghoptheomaPTTT::OnToDateCheckValue(){
	return 0;
} 
void CMSBCTonghoptheomaPTTT::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBCTonghoptheomaPTTT::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCTonghoptheomaPTTT::OnExportSelect(){
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
	xls.SetColumnWidth(0, 9); 
	xls.SetColumnWidth(1, 8); 
	xls.SetColumnWidth(2, 6); 
	xls.SetColumnWidth(3, 6); 
	xls.SetColumnWidth(4, 6); 
	xls.SetColumnWidth(5, 6); 
	xls.SetColumnWidth(6, 6); 
	xls.SetColumnWidth(7, 6); 
	xls.SetColumnWidth(8, 6); 
	xls.SetColumnWidth(9, 6); 
	xls.SetColumnWidth(10, 6); 
	xls.SetColumnWidth(11, 6); 
	xls.SetColumnWidth(12, 6); 
	xls.SetColumnWidth(13, 6); 
	xls.SetColumnWidth(14, 6); 
	xls.SetColumnWidth(15, 6); 
	xls.SetColumnWidth(16, 6); 
	xls.SetColumnWidth(17, 6); 
	xls.SetColumnWidth(18, 6);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("\x42\xE1o \x63\xE1o t\x1ED5ng h\x1EE3p th\x65o m\xE3 PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 6, _T("KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("\x110\x1EB7\x63 \x62i\x1EC7t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("Lo\x1EA1i I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("Lo\x1EA1i II"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 6, _T("Lo\x1EA1i III"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(3, 3, 0, 14);
	xls.SetMerge(4, 4, 0, 14); 
	int nTotal[31];
	for (int i = 1; i<= 15; i++)
	{
		nTotal[i] = 0;
	}
	while(!rs.IsEOF()) 
	{	 
	rs.GetValue(_T("KHOA"), tmpStr); 
	xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT | FMT_CENTER);
	 
	rs.GetValue(_T("DACBIET"), tmpStr); 
	nTotal[1] += ToInt(tmpStr);
	xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("LOAI1"), tmpStr); 
	nTotal[2] += ToInt(tmpStr);
	xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("LOAI2"), tmpStr); 
	nTotal[3] += ToInt(tmpStr);
	xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("LOAI3"), tmpStr); 
	nTotal[4] += ToInt(tmpStr);
	xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("CONG"), tmpStr); 
	nTotal[5] += ToInt(tmpStr);
	xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("QUAN"), tmpStr); 
	nTotal[6] += ToInt(tmpStr);
	xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHQH"), tmpStr); 
	nTotal[7] += ToInt(tmpStr);
	xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHQD"), tmpStr); 
	nTotal[8] += ToInt(tmpStr);
	xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BAN"), tmpStr); 
	nTotal[9] += ToInt(tmpStr);
	xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("TED6T"), tmpStr);
	nTotal[10] += ToInt(tmpStr);
	xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("CS"), tmpStr); 
	nTotal[11] += ToInt(tmpStr);
	xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("DV"), tmpStr); 
	nTotal[12] += ToInt(tmpStr);
	xls.SetCellText(nCol + 12, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHK"), tmpStr); 
	nTotal[13] += ToInt(tmpStr);
	xls.SetCellText(nCol + 13, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("BHTN"), tmpStr); 
	nTotal[14] += ToInt(tmpStr);
	xls.SetCellText(nCol + 14, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	nRow++; 
	rs.MoveNext();	
	}
	xls.SetCellMergedColumns(nCol, nRow +1, 1);
	xls.SetCellText(nCol, nRow+1, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER, false, 11);
	for( int i = 1; i<= 14; i++)
	 {
		 tmpStr.Format(_T("%d"), nTotal[i]);
		 xls.SetCellText(i , nRow+1 , tmpStr, FMT_TEXT, false, 11);
	 }
	EndWaitCursor();
	xls.Save(_T("Exports\\BCTONGHOPTHEOMAPTTT.xls"));	
} 
void CMSBCTonghoptheomaPTTT::OnListDblClick(){
	
} 
void CMSBCTonghoptheomaPTTT::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCTonghoptheomaPTTT::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCTonghoptheomaPTTT::OnListLoadData(){
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
			rs.GetValue(_T("KHOA")), 
			rs.GetValue(_T("DACBIET")), 
			rs.GetValue(_T("LOAI1")), 
			rs.GetValue(_T("LOAI2")), 
			rs.GetValue(_T("LOAI3")), 
			rs.GetValue(_T("CONG")), 
			rs.GetValue(_T("QUAN")),
			rs.GetValue(_T("BHQH")), 
			rs.GetValue(_T("BHQD")), 
			rs.GetValue(_T("BAN")),
			rs.GetValue(_T("TED6T")), 
			rs.GetValue(_T("CS")), 
			rs.GetValue(_T("DV")),
			rs.GetValue(_T("BHK")), 
			rs.GetValue(_T("BHTN")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CMSBCTonghoptheomaPTTT::OnAddMSBCTonghoptheomaPTTT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCTonghoptheomaPTTT::OnEditMSBCTonghoptheomaPTTT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCTonghoptheomaPTTT::OnDeleteMSBCTonghoptheomaPTTT(){
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
 		OnCancelMSBCTonghoptheomaPTTT();
 	}
	return 0;
}
int CMSBCTonghoptheomaPTTT::OnSaveMSBCTonghoptheomaPTTT(){
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
 		//OnMSBCTonghoptheomaPTTTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCTonghoptheomaPTTT::OnCancelMSBCTonghoptheomaPTTT(){
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
int CMSBCTonghoptheomaPTTT::OnMSBCTonghoptheomaPTTTListLoadData(){
	return 0;
}
CString CMSBCTonghoptheomaPTTT::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL,szWhere, tmpStr;
	szWhere.Format(_T(" AND HO_ORDERDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT HO_DEPTID KHOA,") \
_T("        SUM(DACBIET) DACBIET,SUM(LOAI1) LOAI1,SUM(LOAI2) LOAI2,SUM(LOAI3) LOAI3,") \
_T("        (SUM(DACBIET)+SUM(LOAI1)+SUM(LOAI2)+SUM(LOAI3)) CONG,") \
_T("        SUM(QUAN) QUAN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TED6T) TED6T,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN") \
_T(" FROM(SELECT HO_DEPTID,") \
_T("        CASE WHEN HFG_ID='B4400' THEN 1 ELSE 0 END DACBIET,") \
_T("        CASE WHEN HFG_ID='B4100' THEN 1 ELSE 0 END LOAI1,") \
_T("        CASE WHEN HFG_ID='B4200' THEN 1 ELSE 0 END LOAI2,") \
_T("        CASE WHEN HFG_ID='B4300' THEN 1 ELSE 0 END LOAI3,") \
_T("        CASE WHEN HO_OBJECT=1  THEN 1 ELSE 0 END QUAN,") \
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
_T(" WHERE HO_DEPTID IS NOT NULL %s)") \
_T(" GROUP BY HO_DEPTID") \
_T(" ORDER BY HO_DEPTID"),szWhere);
	return szSQL;
}