#include "BCTINHHINHKHAMBENH.h"
#include "MainFrm.h"
#include "ReportDocument.h"
static long _OnDeptLoadDataFnc(CWnd* pWnd){
	return ((CBCTINHHINHKHAMBENH *)pWnd)->OnDeptLoadData();
}

static int _OnExportDetailFnc(CWnd *pWnd){
	 return ((CBCTINHHINHKHAMBENH*)pWnd)->OnExportDetail();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHKHAMBENH *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHKHAMBENH *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHKHAMBENH *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHKHAMBENH *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHKHAMBENH *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHKHAMBENH *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHKHAMBENH *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHKHAMBENH *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTINHHINHKHAMBENH *pVw = (CBCTINHHINHKHAMBENH *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTINHHINHKHAMBENH *pVw = (CBCTINHHINHKHAMBENH *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTINHHINHKHAMBENH *pVw = (CBCTINHHINHKHAMBENH *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHKHAMBENH*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTINHHINHKHAMBENH*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTINHHINHKHAMBENH*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTINHHINHKHAMBENH*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCTINHHINHKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTINHHINHKHAMBENH*)pWnd)->OnAddBCTINHHINHKHAMBENH();
} 
static int _OnEditBCTINHHINHKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTINHHINHKHAMBENH*)pWnd)->OnEditBCTINHHINHKHAMBENH();
} 
static int _OnDeleteBCTINHHINHKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTINHHINHKHAMBENH*)pWnd)->OnDeleteBCTINHHINHKHAMBENH();
} 
static int _OnSaveBCTINHHINHKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTINHHINHKHAMBENH*)pWnd)->OnSaveBCTINHHINHKHAMBENH();
} 
static int _OnCancelBCTINHHINHKHAMBENHFnc(CWnd *pWnd){
	 return ((CBCTINHHINHKHAMBENH*)pWnd)->OnCancelBCTINHHINHKHAMBENH();
} 
CBCTINHHINHKHAMBENH::CBCTINHHINHKHAMBENH(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTINHHINHKHAMBENH::~CBCTINHHINHKHAMBENH(){
}
void CBCTINHHINHKHAMBENH::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1015, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 435, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 440, 30, 520, 55);
	m_wndDept.Create(this,525, 30, 725, 55); 
	m_wndLoad.Create(this, _T("&Load"), 730, 30, 820, 55);
	//m_wndPrint.Create(this, _T(""), 0, 0, 25, 25);
	m_wndExport.Create(this, _T("&Export"), 825, 30, 915, 55);
	m_wndPatient.Create(this, _T("Patient"), 920, 30, 1010, 55);
	m_wndList.Create(this,5, 65, 1015, 615); 

}
void CBCTINHHINHKHAMBENH::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndList.InsertColumn(0, _T("STT"), CFMT_MONEY , 50);
	m_wndList.InsertColumn(1, _T("Đơn vị khám/ Đối tượng"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Quân"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("BHYT Quân"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("Chính sách"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("BHYT khác"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("BHYT TNSQ"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("Dịch vụ"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("Bạn"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("TE < 6 tuổi"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(10, _T("BHYT Quân đội"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(11, _T("BHYT Quân nhân"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("BHYT (Nợ thẻ)"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(13, _T("Tổng cộng"), CFMT_MONEY, 70);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CBCTINHHINHKHAMBENH::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
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
	
	m_wndList.AddEvent(1, _T("Export Chi tiết"), _OnExportDetailFnc);

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CBCTINHHINHKHAMBENH::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndPatient.GetDlgCtrlID(), m_bPatient);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
}
void CBCTINHHINHKHAMBENH::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTINHHINHKHAMBENH::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTINHHINHKHAMBENH::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bPatient = FALSE;
	m_szDeptKey.Empty();

}
int CBCTINHHINHKHAMBENH::SetMode(int nMode){
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
/*void CBCTINHHINHKHAMBENH::OnFromDateChange(){
	
} */
/*void CBCTINHHINHKHAMBENH::OnFromDateSetfocus(){
	
} */
/*void CBCTINHHINHKHAMBENH::OnFromDateKillfocus(){
	
} */
int CBCTINHHINHKHAMBENH::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTINHHINHKHAMBENH::OnToDateChange(){
	
} */
/*void CBCTINHHINHKHAMBENH::OnToDateSetfocus(){
	
} */
/*void CBCTINHHINHKHAMBENH::OnToDateKillfocus(){
	
} */
int CBCTINHHINHKHAMBENH::OnToDateCheckValue(){
	return 0;
} 
void CBCTINHHINHKHAMBENH::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTINHHINHKHAMBENH::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTINHHINHKHAMBENH::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	//if (m_szDeptKey.IsEmpty()){
	//	m_wndDept.SetFocus();
	//	//pMF->SetStatusText(_T("Yêu cầu chọn khoa!"), 0);
	//	return;
	//}
	CExcel xls; 
	int nCol = 0, nRow = 7, nLineTotal = 0, nTmp = 0; 
	CString szSQL = GetQueryString_(), tmpStr, szPos;
	BeginWaitCursor();
	rs.ExecSQL(szSQL); 
	EndWaitCursor();
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
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
	xls.SetColumnWidth(11, 7); 
	xls.SetColumnWidth(12, 10);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("T\xCCNH H\xCCNH KH\xC1M \x42\x1EC6NH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss),CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("\x110\x1A1n v\x1ECB kh\xE1m \\ \x110\x1ED1i t\x1B0\x1EE3ng kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("BHYT Quân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("Chính sách"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 6, _T("BHYT khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("BHYT TNSQ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("Dịch vụ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("Bạn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("TE < 6 tuổi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("BHYT Quân đội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("BHYT Quân nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("BHYT( Nợ thẻ)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 6, _T("Tổng số"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(3, 3, 0, 11);
	xls.SetMerge(4, 4, 0, 11); ;
	int nTotal[12];
	for (int i = 0; i< 12; i++) nTotal[i] = 0;
	while(!rs.IsEOF()){	 
		xls.SetCellText(nCol + 0, nRow, rs.GetValue(_T("dept_name")), FMT_TEXT);
		nLineTotal = 0;
		for (int i = 0; i < 12; i++){
			szPos.Format(_T("%d"), i+1);
			rs.GetValue(szPos, nTmp); 
			nTotal[i] += nTmp;
			nLineTotal += nTmp;
			xls.SetCellText(nCol + i + 1, nRow, ToString(nTmp), FMT_NUMBER1);
		}
		xls.SetCellText(nCol+12, nRow, ToString(nLineTotal), FMT_NUMBER1);
		nTotal[11] += nLineTotal;
		nRow++; 
		rs.MoveNext();	
	}
	xls.SetCellText(nCol, nRow, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT , true, 12);
	for( int i = 0; i< 12; i++){
		tmpStr.Format(_T("%d"), nTotal[i]);
		xls.SetCellText(i + 1, nRow , tmpStr, FMT_NUMBER1, true, 9);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\TINH HINH KHAM BENH.xls"));	
	
}
 
void CBCTINHHINHKHAMBENH::OnListDblClick(){
	
} 
//void CBCTINHHINHKHAMBENH::OnListSelectChange(int nOldItem, int nNewItem){
//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//} 
int CBCTINHHINHKHAMBENH::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTINHHINHKHAMBENH::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	//if (m_szDeptKey.IsEmpty()){
	//	m_wndDept.SetFocus();
	//	//pMF->SetStatusText(_T("Yêu cầu chọn khoa!"), 0);
	//	return 0;
	//}
	CRecord rs(&pMF->m_db);
	CString szSQL = GetQueryString_();
	//_msg(_T("%s"), szSQL);
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL), nIndex=1, nItem = 0, nLineTotal = 0;
	EndWaitCursor();
	m_wndList.BeginLoad(); 
	while(!rs.IsEOF()){
		nLineTotal = 0;
		nItem = m_wndList.AddItems(
			int2str(nIndex++),
			rs.GetValue(_T("dept_name")), 
			rs.GetValue(_T("1")), 
			rs.GetValue(_T("2")), 
			rs.GetValue(_T("3")), 
			rs.GetValue(_T("4")), 
			rs.GetValue(_T("5")), 
			rs.GetValue(_T("6")), 
			rs.GetValue(_T("7")), 
			rs.GetValue(_T("8")),
			rs.GetValue(_T("9")), 
			rs.GetValue(_T("10")),
			rs.GetValue(_T("11")), NULL);
		for (int i = 0; i < 11; i++) nLineTotal += str2int(rs.GetValue(int2str(i+1)));
		m_wndList.SetItemText(nItem, 13, ToString(nLineTotal)); 
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCTINHHINHKHAMBENH::OnAddBCTINHHINHKHAMBENH(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTINHHINHKHAMBENH::OnEditBCTINHHINHKHAMBENH(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTINHHINHKHAMBENH::OnDeleteBCTINHHINHKHAMBENH(){
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
 		OnCancelBCTINHHINHKHAMBENH();
 	}
	return 0;
}
int CBCTINHHINHKHAMBENH::OnSaveBCTINHHINHKHAMBENH(){
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
 		//OnBCTINHHINHKHAMBENHListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTINHHINHKHAMBENH::OnCancelBCTINHHINHKHAMBENH(){
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
int CBCTINHHINHKHAMBENH::OnBCTINHHINHKHAMBENHListLoadData(){
	return 0;
}

CString CBCTINHHINHKHAMBENH::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szWhere3, szWhere4, szSoNgay;
	szWhere.Format(_T(" AND he_examdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSoNgay.Format(_T("(TRUNC_DATE(CAST_STRING2DATE ('%s'))-TRUNC_DATE(CAST_STRING2DATE ('%s'))+1)"), m_szToDate , m_szFromDate);
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

CString CBCTINHHINHKHAMBENH::GetQueryString_(){
	CString szSQL, szWhere, szWheredept;
	szWhere.Format(_T(" AND he_examdate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), m_szDeptKey);
	}
	else
	{
		szWhere.AppendFormat(_T(" AND 1=1"));
	}
	
	szSQL.Format(_T("WITH tbl_xidx AS (SELECT Min(he_receptidx) idx,") \
	_T("                he_docno docno") \
	_T("         FROM   hms_exam") \
	_T("         WHERE  he_status IN ( 'P', 'T' ) %s") \
	_T("         GROUP  BY he_docno),") \
	_T("     tbl_main AS (SELECT    hd_object object,") \
	_T("                   he_deptid dept_id,") \
	_T("                   he_roomid room_id, hrl_type room_type") \
	_T("         FROM      tbl_xidx") \
	_T("         %s JOIN hms_exam ON ( he_docno = docno AND he_receptidx = idx )") \
	_T("         LEFT JOIN hms_doc ON ( he_docno = hd_docno )") \
	_T("         LEFT JOIN hms_roomlist ON ( he_deptid = hrl_deptid AND he_roomid = hrl_id )") \
	_T("         WHERE     he_status IN ( 'P', 'T' ) %s),") \
	_T("     tbl_pivot AS (SELECT case when object = 13 then N'1' else case when object < 6 then cast(object as nvarchar2(2)) else cast(object - 1 as nvarchar2(2)) end end object,") \
	_T("                CASE WHEN room_id IN (1, 2, 4, 12, 25, 50, 51, 52, 54, 57, 58) THEN hms_getroomname(dept_id, room_id)") \
	_T("                ELSE Get_departmentname(dept_id)") \
	_T("                END dept_name") \
	_T("         FROM   tbl_main)") \
	_T("SELECT *") \
	_T("FROM   tbl_pivot ") \
	_T("PIVOT(") \
	_T("  count(*)") \
	_T("  FOR object IN (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11)") \
	_T(")") \
	_T("ORDER BY dept_name"), szWheredept, m_bPatient?_T("LEFT"):_T("RIGHT"), szWhere);
	//_T("                CASE WHEN room_type > 3 THEN Get_syssel_desc('hms_dept_category', room_type)")
	return szSQL;
}

long CBCTINHHINHKHAMBENH::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select sd_id dept_id, sd_name dept_name from sys_dept where sd_type = 'KB' and sd_isactive = 'Y'"));
	rs.ExecSQL(szSQL);
	m_wndDept.DeleteAllItems();
	while (!rs.IsEOF()){
		m_wndDept.AddItems(
			rs.GetValue(_T("dept_id")),
			rs.GetValue(_T("dept_name")), NULL);
		rs.MoveNext();
	}
	return rs.GetRecordCount();
}

int CBCTINHHINHKHAMBENH::OnExportDetail()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal=0;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_KHAM_CHITIET_KHTH.xls"))) AfxMessageBox(_T("Chưa có file này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryStringBydocno();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	//AfxMessageBox(szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("he_deptid"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
				
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);		
		xls.SetCellText(3, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_KHAM_CHITIET_KHTH2.xls"));
	return 0;
}
CString CBCTINHHINHKHAMBENH::GetQueryStringBydocno()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szSuppliers, szUser;
	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
						 _T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_deptid IN ('%s')"), m_szDeptKey);	
	

		szSQL.Format(_T(" WITH tbl_xidx AS") \
					_T("   (SELECT MIN(he_receptidx) idx,") \
					_T("     he_docno docno") \
					_T("   FROM hms_exam") \
					_T("   WHERE he_status IN ( 'P', 'T' )") \
					_T("   AND he_deptid    = ''") \
					_T("   GROUP BY he_docno") \
					_T("   ),") \
					_T("   tbl_main AS") \
					_T("   (SELECT ") \
					_T("     hd_docno as docno,") \
					_T("     GET_PATIENTNAME(hd_docno) as patname,") \
					_T("     he_deptid,") \
					_T("     to_char(he_examdate, 'DD/MM/YYYY HH24:MI:SS') as examdate ") \
					_T("   FROM tbl_xidx") \
					_T("   RIGHT JOIN hms_exam") \
					_T("   ON ( he_docno    = docno") \
					_T("   AND he_receptidx = idx )") \
					_T("   LEFT JOIN hms_doc") \
					_T("   ON ( he_docno = hd_docno )") \
					_T("   LEFT JOIN hms_roomlist") \
					_T("   ON ( he_deptid   = hrl_deptid") \
					_T("   AND he_roomid    = hrl_id )") \
					_T("   WHERE he_status IN ( 'P', 'T' )") \
					_T("   %s") \
					_T("   ),") \
					_T("   tbl_pivot AS") \
					_T("   (SELECT") \
					_T("     docno, patname, he_deptid, examdate  ") \
					_T("   FROM tbl_main") \
					_T("   )") \
					_T(" SELECT                      *") \
					_T(" FROM tbl_pivot ") \
					_T(" order by docno, examdate"), szWhere, szWhere);
	return szSQL;
}