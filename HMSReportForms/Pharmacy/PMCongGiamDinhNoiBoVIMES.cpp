#include "stdafx.h"
#include "PMCongGiamDinhNoiBoVIMES.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMCongGiamDinhNoiBoVIMES* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMCongGiamDinhNoiBoVIMES *)pWnd)->OnStockAddNew();
}*/
static void _OnDetailSelectFnc(CWnd *pWnd){
	CPMCongGiamDinhNoiBoVIMES *pVw = (CPMCongGiamDinhNoiBoVIMES *)pWnd;
	pVw->OnDetailSelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMCongGiamDinhNoiBoVIMES *pVw = (CPMCongGiamDinhNoiBoVIMES *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMCongGiamDinhNoiBoVIMES *pVw = (CPMCongGiamDinhNoiBoVIMES *)pWnd;
	pVw->OnExportSelect();
} 
CPMCongGiamDinhNoiBoVIMES::CPMCongGiamDinhNoiBoVIMES(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMCongGiamDinhNoiBoVIMES::~CPMCongGiamDinhNoiBoVIMES(){
}
void CPMCongGiamDinhNoiBoVIMES::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 495, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 260, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 265, 30, 345, 55);
	m_wndToDate.Create(this,350, 30, 490, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 0, 0, 0, 0);
	m_wndStock.Create(this, 0, 0, 0, 0); 
	m_wndDetail.Create(this, _T("Detail"), 10, 95, 110, 120);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 495, 120);

}
void CPMCongGiamDinhNoiBoVIMES::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CPMCongGiamDinhNoiBoVIMES::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndDetail.SetEvent(WE_CLICK, _OnDetailSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CPMCongGiamDinhNoiBoVIMES::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Check(pDX, m_wndDetail.GetDlgCtrlID(), m_bDetail);

}
void CPMCongGiamDinhNoiBoVIMES::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_bDetail = FALSE;

}
int CPMCongGiamDinhNoiBoVIMES::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CPMCongGiamDinhNoiBoVIMES::OnFromDateChange(){
	
} */
/*void CPMCongGiamDinhNoiBoVIMES::OnFromDateSetfocus(){
	
} */
/*void CPMCongGiamDinhNoiBoVIMES::OnFromDateKillfocus(){
	
} */
int CPMCongGiamDinhNoiBoVIMES::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMCongGiamDinhNoiBoVIMES::OnToDateChange(){
	
} */
/*void CPMCongGiamDinhNoiBoVIMES::OnToDateSetfocus(){
	
} */
/*void CPMCongGiamDinhNoiBoVIMES::OnToDateKillfocus(){
	
} */
int CPMCongGiamDinhNoiBoVIMES::OnToDateCheckValue(){
	return 0;
} 
void CPMCongGiamDinhNoiBoVIMES::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMCongGiamDinhNoiBoVIMES::OnStockSelendok(){
	 
}
/*void CPMCongGiamDinhNoiBoVIMES::OnStockSetfocus(){
	
}*/
/*void CPMCongGiamDinhNoiBoVIMES::OnStockKillfocus(){
	
}*/
long CPMCongGiamDinhNoiBoVIMES::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);

}
/*void CPMCongGiamDinhNoiBoVIMES::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMCongGiamDinhNoiBoVIMES::OnDetailSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
} 
void CPMCongGiamDinhNoiBoVIMES::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CPMCongGiamDinhNoiBoVIMES::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bDetail)
		OnExport2();
	else
		OnExport1();
} 
void CPMCongGiamDinhNoiBoVIMES::OnExport1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szNew_Type, szOldType;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 17);
	xls.SetColumnWidth(4, 17);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 17);
	xls.SetColumnWidth(8, 17);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT|FMT_CENTER, true);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT|FMT_CENTER, true);

	xls.SetCellText(0, 2, _T("\x43\x1ED4NG GI\xC1M \x110\x1ECANH VIM\x45S_OP\x45N\x42\x45T\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 22);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("M\xE3 thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("M\xE3 thu\x1ED1\x63 trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("T\xEAn thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("T\xEAn thu\x1ED1\x63 trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("\x110\x1A1n gi\xE1 trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("H\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 4, _T("H\xE0m l\x1B0\x1EE3ng trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 4, _T("\x110\x1A1n v\x1ECB t\xEDnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 4, _T("\x110\x1A1n v\x1ECB t\xEDnh trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 4, _T("S\x1ED1 \x111\x103ng k\xFD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 4, _T("S\x1ED1 \x111\x103ng k\xFD trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 4, _T("M\xE3 thu\x1ED1\x63 t\x1EA1i vi\x1EC7n (pro\x64u\x63t_it\x65m_i\x64)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 4, _T("M\xE3 \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 4, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 15);
	xls.SetMerge(3, 3, 0, 15);

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" ptype,") \
		_T(" mathuoc,") \
		_T(" mathuocdm,") \
		_T(" tenthuoc,") \
		_T(" tenthuocdm,") \
		_T(" dongia,") \
		_T(" dongiadm,") \
		_T(" hamluong,") \
		_T(" hamluongdm,") \
		_T(" donvitinh,") \
		_T(" donvitinhdm,") \
		_T(" sodangky,") \
		_T(" sodangkydm") \
		_T(" FROM(") \
		_T(" SELECT") \
		_T(" CASE WHEN length(MA_AX) <= 0 or ma_ax is null THEN 1") \
		_T(" WHEN i.ten_thuoc <> nvl(k.ten_thuoc, 'N') AND i.don_gia = nvl(k.don_gia, 'N') THEN 2") \
		_T(" WHEN i.ten_thuoc = nvl(k.ten_thuoc, 'N') AND i.don_gia <> nvl(k.don_gia, 'N') THEN 3") \
		_T(" WHEN i.ten_thuoc = nvl(k.ten_thuoc, 'N') AND i.ham_luong <> nvl(k.ham_luong, 'N') THEN 4") \
		_T(" WHEN i.ten_thuoc = nvl(k.ten_thuoc, 'N') AND i.don_vi_tinh <> nvl(k.don_vi_tinh, 'N') THEN 5") \
		_T(" WHEN i.ten_thuoc = nvl(k.ten_thuoc, 'N') AND i.so_dang_ky <> nvl(k.so_dang_ky, 'N') THEN 6") \
		_T(" ELSE 7 END AS ptype,") \
		_T(" ma_thuoc AS mathuoc,") \
		_T(" ma_ax AS mathuocdm,") \
		_T(" i.ten_thuoc AS tenthuoc,") \
		_T(" k.ten_thuoc AS tenthuocdm,") \
		_T(" i.don_gia AS dongia,") \
		_T(" k.don_gia AS dongiadm,") \
		_T(" i.ham_luong AS hamluong,") \
		_T(" k.ham_luong AS hamluongdm,") \
		_T(" i.don_vi_tinh AS donvitinh,") \
		_T(" k.don_vi_tinh AS donvitinhdm,") \
		_T(" i.so_dang_ky AS sodangky,") \
		_T(" k.so_dang_ky AS sodangkydm,") \
		_T(" ma_thuoc_cs AS mathuoccs,") \
		_T(" ma_bn,") \
		_T(" ho_ten") \
		_T(" FROM bh_bang_ctthuoc i") \
		_T(" LEFT JOIN bh_thongtinchitiet_tonghop j") \
		_T(" ON(i.ma_lk = j.ma_lk)") \
		_T(" LEFT JOIN bh_dm_thuoc k") \
		_T(" ON(ma_thuoc = ma_ax)") \
		_T(" WHERE TO_TIMESTAMP(j.ngay_ttoan, 'YYYY-MM-DD HH24:MI:SS') BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ) tbl") \
		_T(" WHERE ptype <> 7") \
		_T(" ORDER BY ptype, mathuoc, tenthuoc"), m_szFromDate, m_szToDate);
	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("ptype"), szNew_Type);
		if(szNew_Type != szOldType && !szNew_Type.IsEmpty()){				
			xls.SetCellMergedColumns(0, nRow, 15);
			if(szNew_Type == _T("1"))
				tmpStr.Format(_T("1. Thuốc không nằm trong danh mục được phê duyệt của bảo hiểm"));
			else if(szNew_Type == _T("2"))
				tmpStr.Format(_T("2. Thuốc sai tên so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("3"))
				tmpStr.Format(_T("3. Thuốc sai giá so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("4"))
				tmpStr.Format(_T("4. Thuốc sai hàm lượng so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("5"))
				tmpStr.Format(_T("5. Thuốc sai đơn vị so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("6"))
				tmpStr.Format(_T("6. Thuốc sai số đăng ký so với danh mục được phê duyệt"));
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 14);
			szOldType = szNew_Type;
			nIdx = 1;
			nRow++;
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("mathuoc"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("mathuocdm"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tenthuoc"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tenthuocdm"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dongiadm"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("hamluong"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hamluongdm"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("donvitinh"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("donvitinhdm"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sodangky"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sodangkydm"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("mathuoccs"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("ma_bn"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("ho_ten"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CongGiamDinhVIMES_Thuoc.xls"));
} 
void CPMCongGiamDinhNoiBoVIMES::OnExport2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szNew_Type, szOldType;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 17);
	xls.SetColumnWidth(4, 17);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 17);
	xls.SetColumnWidth(8, 17);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT|FMT_CENTER, true);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT|FMT_CENTER, true);	

	xls.SetCellText(0, 2, _T("\x43\x1ED4NG GI\xC1M \x110\x1ECANH VIM\x45S_OP\x45N\x42\x45T\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 22);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("M\xE3 thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("M\xE3 thu\x1ED1\x63 trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("T\xEAn thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("T\xEAn thu\x1ED1\x63 trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("\x110\x1A1n gi\xE1 trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("H\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 4, _T("H\xE0m l\x1B0\x1EE3ng trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 4, _T("\x110\x1A1n v\x1ECB t\xEDnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 4, _T("\x110\x1A1n v\x1ECB t\xEDnh trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 4, _T("S\x1ED1 \x111\x103ng k\xFD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 4, _T("S\x1ED1 \x111\x103ng k\xFD trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 4, _T("M\xE3 thu\x1ED1\x63 t\x1EA1i vi\x1EC7n (pro\x64u\x63t_it\x65m_i\x64)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 4, _T("M\xE3 \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 4, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 15);
	xls.SetMerge(3, 3, 0, 15);

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" ptype,") \
		_T(" mathuoc,") \
		_T(" mathuocdm,") \
		_T(" tenthuoc,") \
		_T(" tenthuocdm,") \
		_T(" dongia,") \
		_T(" dongiadm,") \
		_T(" hamluong,") \
		_T(" hamluongdm,") \
		_T(" donvitinh,") \
		_T(" donvitinhdm,") \
		_T(" sodangky,") \
		_T(" sodangkydm,") \
		_T(" mathuoccs,") \
		_T(" ma_bn,") \
		_T(" ho_ten") \
		_T(" FROM(") \
		_T(" SELECT") \
		_T(" CASE WHEN length(MA_AX) <= 0 or ma_ax is null THEN 1") \
		_T(" WHEN i.ten_thuoc <> nvl(k.ten_thuoc, 'N') AND i.don_gia = nvl(k.don_gia, 'N') THEN 2") \
		_T(" WHEN i.ten_thuoc = nvl(k.ten_thuoc, 'N') AND i.don_gia <> nvl(k.don_gia, 'N') THEN 3") \
		_T(" WHEN i.ten_thuoc = nvl(k.ten_thuoc, 'N') AND i.ham_luong <> nvl(k.ham_luong, 'N') THEN 4") \
		_T(" WHEN i.ten_thuoc = nvl(k.ten_thuoc, 'N') AND i.don_vi_tinh <> nvl(k.don_vi_tinh, 'N') THEN 5") \
		_T(" WHEN i.ten_thuoc = nvl(k.ten_thuoc, 'N') AND i.so_dang_ky <> nvl(k.so_dang_ky, 'N') THEN 6") \
		_T(" ELSE 7 END AS ptype,") \
		_T(" ma_thuoc AS mathuoc,") \
		_T(" ma_ax AS mathuocdm,") \
		_T(" i.ten_thuoc AS tenthuoc,") \
		_T(" k.ten_thuoc AS tenthuocdm,") \
		_T(" i.don_gia AS dongia,") \
		_T(" k.don_gia AS dongiadm,") \
		_T(" i.ham_luong AS hamluong,") \
		_T(" k.ham_luong AS hamluongdm,") \
		_T(" i.don_vi_tinh AS donvitinh,") \
		_T(" k.don_vi_tinh AS donvitinhdm,") \
		_T(" i.so_dang_ky AS sodangky,") \
		_T(" k.so_dang_ky AS sodangkydm,") \
		_T(" ma_thuoc_cs AS mathuoccs,") \
		_T(" ma_bn,") \
		_T(" ho_ten") \
		_T(" FROM bh_bang_ctthuoc i") \
		_T(" LEFT JOIN bh_thongtinchitiet_tonghop j") \
		_T(" ON(i.ma_lk = j.ma_lk)") \
		_T(" LEFT JOIN bh_dm_thuoc k") \
		_T(" ON(ma_thuoc = ma_ax)") \
		_T(" WHERE TO_TIMESTAMP(j.ngay_ttoan, 'YYYY-MM-DD HH24:MI:SS') BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ) tbl") \
		_T(" WHERE ptype <> 7") \
		_T(" ORDER BY ptype, mathuoc, tenthuoc"), m_szFromDate, m_szToDate);
	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("ptype"), szNew_Type);
		if(szNew_Type != szOldType && !szNew_Type.IsEmpty()){				
			xls.SetCellMergedColumns(0, nRow, 15);
			if(szNew_Type == _T("1"))
				tmpStr.Format(_T("1. Thuốc không nằm trong danh mục được phê duyệt của bảo hiểm"));
			else if(szNew_Type == _T("2"))
				tmpStr.Format(_T("2. Thuốc sai tên so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("3"))
				tmpStr.Format(_T("3. Thuốc sai giá so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("4"))
				tmpStr.Format(_T("4. Thuốc sai hàm lượng so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("5"))
				tmpStr.Format(_T("5. Thuốc sai đơn vị so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("6"))
				tmpStr.Format(_T("6. Thuốc sai số đăng ký so với danh mục được phê duyệt"));
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 14);
			szOldType = szNew_Type;
			nIdx = 1;
			nRow++;
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("mathuoc"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("mathuocdm"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tenthuoc"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tenthuocdm"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dongiadm"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("hamluong"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hamluongdm"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("donvitinh"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("donvitinhdm"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sodangky"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sodangkydm"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("mathuoccs"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("ma_bn"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("ho_ten"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CongGiamDinhVIMES_ThuocChiTiet.xls"));
} 