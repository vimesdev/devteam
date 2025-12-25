#include "GeneralOperationList.h"
#include "MainFrm.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CGeneralOperationList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CGeneralOperationList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CGeneralOperationList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CGeneralOperationList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CGeneralOperationList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CGeneralOperationList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CGeneralOperationList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CGeneralOperationList *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CGeneralOperationList *pVw = (CGeneralOperationList *)pWnd;
	pVw->OnExportSelect();
} 
CGeneralOperationList::CGeneralOperationList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CGeneralOperationList::~CGeneralOperationList(){
}
void CGeneralOperationList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 515, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndExport.Create(this, _T("&Export"), 430, 30, 510, 55);

}
void CGeneralOperationList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

}
void CGeneralOperationList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CGeneralOperationList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CGeneralOperationList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CGeneralOperationList::SetMode(int nMode){
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
/*void CGeneralOperationList::OnFromDateChange(){
	
} */
/*void CGeneralOperationList::OnFromDateSetfocus(){
	
} */
/*void CGeneralOperationList::OnFromDateKillfocus(){
	
} */
int CGeneralOperationList::OnFromDateCheckValue(){
	return 0;
} 
/*void CGeneralOperationList::OnToDateChange(){
	
} */
/*void CGeneralOperationList::OnToDateSetfocus(){
	
} */
/*void CGeneralOperationList::OnToDateKillfocus(){
	
} */
int CGeneralOperationList::OnToDateCheckValue(){
	return 0;
} 
void CGeneralOperationList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	//szSQL = GetQueryString();
	szSQL.Format(_T(" SELECT    Get_patientname(ho_docno) ho_ten, ") \
	_T("           ho_docno so_ho_so, ") \
	_T("           hcr_recordno so_benh_an, ") \
	_T("           hfl_name ten_dv, ") \
	_T("           ho_qty so_luong, ") \
	_T("           ho_deptid khoa_chi_dinh, ") \
	_T("           ho_pdeptid khoa_thuc_hien, ") \
	_T("           hcr_admitdate ngay_vao, ") \
	_T("           Decode('T', hcr_status, hcr_dischargedate, ") \
	_T("                       NULL) ngay_ra, ") \
	_T("           ho_orderdate ngay_chi_dinh, ") \
	_T("           ho_performdate ngay_thuc_hien, ") \
	_T("           CASE WHEN hfe_refstatus IN ( 'A', 'P' ) THEN Nvl(hcrf_accepteddate, hdf_accepteddate) ") \
	_T("           ELSE NULL ") \
	_T("           END ngay_xac_nhan, ") \
	_T("           CASE WHEN hfe_refstatus = 'P' THEN hfe_date ") \
	_T("           ELSE NULL ") \
	_T("           END ngay_thanh_toan ") \
	_T(" FROM      hms_operation ") \
	_T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = ho_itemid ) ") \
	_T(" LEFT JOIN hms_fee_invoice ON ( ho_invoiceno = hfe_invoiceno ) ") \
	_T(" LEFT JOIN hms_clinical_record ON ( ho_docno = hcr_docno ) ") \
	_T(" LEFT JOIN hms_doc ON ( hd_docno = ho_docno ) ") \
	_T(" LEFT JOIN hms_object o ON (hd_object = ho_id)") \
	_T(" WHERE     hd_suggestion IN ('C', 'D') AND o.ho_type IN ('I', 'C') AND ho_status NOT IN ( 'O', 'C' ) AND ho_orderdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(4, 25);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 13);
	xls.SetCellMergedColumns(0, 3, 13);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N \x43H\x1EC8 \x110\x1ECANH PTTT");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("H\x1ECD t\xEAn"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(3, 4, _T("S\x1ED1 \x42\x41"), 4098, true);
	xls.SetCellText(4, 4, _T("T\xEAn \x44VKT"), 4098, true);
	xls.SetCellText(5, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(6, 4, _T("Kho\x61 \x63h\x1EC9 \x111\x1ECBnh"), 4098, true);
	xls.SetCellText(7, 4, _T("Kho\x61 th\x1EF1\x63 hi\x1EC7n"), 4098, true);
	xls.SetCellText(8, 4, _T("Ng\xE0y v\xE0o vi\x1EC7n"), 4098, true);
	xls.SetCellText(9, 4, _T("Ng\xE0y r\x61 vi\x1EC7n"), 4098, true);
	xls.SetCellText(10, 4, _T("Ng\xE0y \x63h\x1EC9 \x111\x1ECBnh"), 4098, true);
	xls.SetCellText(11, 4, _T("Ng\xE0y th\x1EF1\x63 hi\x1EC7n"), 4098, true);
	xls.SetCellText(12, 4, _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), 4098, true);
	xls.SetCellText(13, 4, _T("Ng\xE0y th\x61nh to\xE1n"), 4098, true);

	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("ho_ten")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("so_ho_so")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("so_benh_an")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("ten_dv")), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("so_luong")), FMT_NUMBER1);
		xls.SetCellText(6, nRow, rs.GetValue(_T("khoa_chi_dinh")), FMT_TEXT);
		xls.SetCellText(7, nRow, rs.GetValue(_T("khoa_thuc_hien")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("ngay_vao")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("ngay_ra")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("ngay_chi_dinh")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("ngay_thuc_hien")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("ngay_xac_nhan")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("ngay_thanh_toan")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(13, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh sach BN chi dinh PTTT.xls"));
}
