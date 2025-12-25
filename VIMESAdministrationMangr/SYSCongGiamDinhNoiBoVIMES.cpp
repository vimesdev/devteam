#include "stdafx.h"
#include "SYSCongGiamDinhNoiBoVIMES.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYSCongGiamDinhNoiBoVIMES* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CSYSCongGiamDinhNoiBoVIMES *)pWnd)->OnStockAddNew();
}*/
static void _OnDetailSelectFnc(CWnd *pWnd){
	CSYSCongGiamDinhNoiBoVIMES *pVw = (CSYSCongGiamDinhNoiBoVIMES *)pWnd;
	pVw->OnDetailSelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CSYSCongGiamDinhNoiBoVIMES *pVw = (CSYSCongGiamDinhNoiBoVIMES *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSYSCongGiamDinhNoiBoVIMES *pVw = (CSYSCongGiamDinhNoiBoVIMES *)pWnd;
	pVw->OnExportSelect();
} 
CSYSCongGiamDinhNoiBoVIMES::CSYSCongGiamDinhNoiBoVIMES(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSYSCongGiamDinhNoiBoVIMES::~CSYSCongGiamDinhNoiBoVIMES(){
}
void CSYSCongGiamDinhNoiBoVIMES::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 495, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 260, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 265, 30, 345, 55);
	m_wndToDate.Create(this,350, 30, 490, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 0, 0, 0, 0);
	m_wndStock.Create(this, 0, 0, 0, 0); 
	m_wndDetail.Create(this, _T("Detail"), 10, 95, 110, 120);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 495, 120);

	m_wndPrintPreview.Create(this, _T(""), 0, 0, 0, 0);
	m_wndPrintPreview.ShowWindow(SW_HIDE);
	m_wndPrintPreview.EnableWindow(FALSE);

}
void CSYSCongGiamDinhNoiBoVIMES::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CSYSCongGiamDinhNoiBoVIMES::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
void CSYSCongGiamDinhNoiBoVIMES::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Check(pDX, m_wndDetail.GetDlgCtrlID(), m_bDetail);

}
void CSYSCongGiamDinhNoiBoVIMES::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_bDetail = FALSE;

}
int CSYSCongGiamDinhNoiBoVIMES::SetMode(int nMode){
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
/*void CSYSCongGiamDinhNoiBoVIMES::OnFromDateChange(){
	
} */
/*void CSYSCongGiamDinhNoiBoVIMES::OnFromDateSetfocus(){
	
} */
/*void CSYSCongGiamDinhNoiBoVIMES::OnFromDateKillfocus(){
	
} */
int CSYSCongGiamDinhNoiBoVIMES::OnFromDateCheckValue(){
	return 0;
} 
/*void CSYSCongGiamDinhNoiBoVIMES::OnToDateChange(){
	
} */
/*void CSYSCongGiamDinhNoiBoVIMES::OnToDateSetfocus(){
	
} */
/*void CSYSCongGiamDinhNoiBoVIMES::OnToDateKillfocus(){
	
} */
int CSYSCongGiamDinhNoiBoVIMES::OnToDateCheckValue(){
	return 0;
} 
void CSYSCongGiamDinhNoiBoVIMES::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSYSCongGiamDinhNoiBoVIMES::OnStockSelendok(){
	 
}
/*void CSYSCongGiamDinhNoiBoVIMES::OnStockSetfocus(){
	
}*/
/*void CSYSCongGiamDinhNoiBoVIMES::OnStockKillfocus(){
	
}*/
long CSYSCongGiamDinhNoiBoVIMES::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);

}
/*void CSYSCongGiamDinhNoiBoVIMES::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSYSCongGiamDinhNoiBoVIMES::OnDetailSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CSYSCongGiamDinhNoiBoVIMES::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
void CSYSCongGiamDinhNoiBoVIMES::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bDetail)
		OnExport2();
	else
		OnExport1();
} 
void CSYSCongGiamDinhNoiBoVIMES::OnExport1(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 30);
	xls.SetColumnWidth(4, 30);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 30);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT|FMT_CENTER, true);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT|FMT_CENTER, true);

	xls.SetCellText(0, 2, _T("\x43\x1ED4NG GI\xC1M \x110\x1ECANH VIM\x45S_OP\x45N\x42\x45T\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 22);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("M\xE3 dịch vụ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("M\xE3 dịch vụ trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("T\xEAn dịch vụ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("T\xEAn dịch vụ trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("\x110\x1A1n gi\xE1 trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("M\xE3 dịch vụ t\x1EA1i vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 4, _T("M\xE3 \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 4, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 10);
	xls.SetMerge(3, 3, 0, 10);

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" ptype,") \
		_T(" madichvu,") \
		_T(" madichvudm,") \
		_T(" tendichvu,") \
		_T(" tendichvudm,") \
		_T(" dongia,") \
		_T(" dongiadm") \
		_T(" FROM(") \
		_T(" SELECT") \
		_T(" CASE WHEN length(ma_ax) <= 0 or ma_ax is null THEN 1") \
		_T(" WHEN i.ten_dich_vu <> k.ten_ax AND i.don_gia = k.gia_ax THEN 2") \
		_T(" WHEN i.ten_dich_vu = k.ten_ax AND i.don_gia <> k.gia_ax THEN 3") \
		_T(" ELSE 4 END AS ptype,") \
		_T(" ma_dich_vu AS madichvu,") \
		_T(" ma_ax AS madichvudm,") \
		_T(" i.ten_dich_vu AS tendichvu,") \
		_T(" k.ten_ax AS tendichvudm,") \
		_T(" i.don_gia AS dongia,") \
		_T(" k.gia_ax AS dongiadm,") \
		_T(" ma_dich_vu_cs AS madichvucs,") \
		_T(" ma_bn,") \
		_T(" ho_ten") \
		_T(" FROM bh_bang_ctdv i") \
		_T(" LEFT JOIN bh_thongtinchitiet_tonghop j") \
		_T(" ON(i.ma_lk = j.ma_lk)") \
		_T(" LEFT JOIN bh_dm_dichvu k") \
		_T(" ON(ma_dich_vu = ma_ax)") \
		_T(" WHERE TO_TIMESTAMP(j.ngay_ttoan, 'YYYY-MM-DD HH24:MI:SS') BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ) tbl") \
		_T(" WHERE ptype <> 4") \
		_T(" ORDER BY ptype, madichvu, tendichvu"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("ptype"), szNew_Type);
		if(szNew_Type != szOldType && !szNew_Type.IsEmpty()){				
			xls.SetCellMergedColumns(0, nRow, 15);
			if(szNew_Type == _T("1"))
				tmpStr.Format(_T("1. Dịch vụ không nằm trong danh mục được phê duyệt của bảo hiểm"));
			else if(szNew_Type == _T("2"))
				tmpStr.Format(_T("2. Dịch vụ sai tên so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("3"))
				tmpStr.Format(_T("3. Dịch vụ sai giá so với danh mục được phê duyệt"));
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 14);
			szOldType = szNew_Type;
			nIdx = 1;
			nRow++;
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("madichvu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("madichvudm"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tendichvu"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tendichvudm"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dongiadm"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("madichvucs"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("ma_bn"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("ho_ten"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CongGiamDinhVIMES_DichVu.xls"));
} 
void CSYSCongGiamDinhNoiBoVIMES::OnExport2(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 30);
	xls.SetColumnWidth(4, 30);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 30);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT|FMT_CENTER, true);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT|FMT_CENTER, true);

	xls.SetCellText(0, 2, _T("\x43\x1ED4NG GI\xC1M \x110\x1ECANH VIM\x45S_OP\x45N\x42\x45T\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 22);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("M\xE3 dịch vụ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("M\xE3 dịch vụ trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("T\xEAn dịch vụ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("T\xEAn dịch vụ trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("\x110\x1A1n gi\xE1 trong \x64\x61nh m\x1EE5\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("M\xE3 dịch vụ t\x1EA1i vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 4, _T("M\xE3 \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 4, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 10);
	xls.SetMerge(3, 3, 0, 10);

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" ptype,") \
		_T(" madichvu,") \
		_T(" madichvudm,") \
		_T(" tendichvu,") \
		_T(" tendichvudm,") \
		_T(" dongia,") \
		_T(" dongiadm,") \
		_T(" madichvucs,") \
		_T(" ma_bn,") \
		_T(" ho_ten") \
		_T(" FROM(") \
		_T(" SELECT") \
		_T(" CASE WHEN length(ma_ax) <= 0 OR ma_ax is null THEN 1") \
		_T(" WHEN i.ten_dich_vu <> k.ten_ax AND i.don_gia = k.gia_ax THEN 2") \
		_T(" WHEN i.ten_dich_vu = k.ten_ax AND i.don_gia <> k.gia_ax THEN 3") \
		_T(" ELSE 4 END AS ptype,") \
		_T(" ma_dich_vu AS madichvu,") \
		_T(" ma_ax AS madichvudm,") \
		_T(" i.ten_dich_vu AS tendichvu,") \
		_T(" k.ten_ax AS tendichvudm,") \
		_T(" i.don_gia AS dongia,") \
		_T(" k.gia_ax AS dongiadm,") \
		_T(" ma_dich_vu_cs AS madichvucs,") \
		_T(" ma_bn,") \
		_T(" ho_ten") \
		_T(" FROM bh_bang_ctdv i") \
		_T(" LEFT JOIN bh_thongtinchitiet_tonghop j") \
		_T(" ON(i.ma_lk = j.ma_lk)") \
		_T(" LEFT JOIN bh_dm_dichvu k") \
		_T(" ON(ma_dich_vu = ma_ax)") \
		_T(" WHERE TO_TIMESTAMP(j.ngay_ttoan, 'YYYY-MM-DD HH24:MI:SS') BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ) tbl") \
		_T(" WHERE ptype <> 4") \
		_T(" ORDER BY ptype, madichvu, tendichvu"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("ptype"), szNew_Type);
		if(szNew_Type != szOldType && !szNew_Type.IsEmpty()){				
			xls.SetCellMergedColumns(0, nRow, 15);
			if(szNew_Type == _T("1"))
				tmpStr.Format(_T("1. Dịch vụ không nằm trong danh mục được phê duyệt của bảo hiểm"));
			else if(szNew_Type == _T("2"))
				tmpStr.Format(_T("2. Dịch vụ sai tên so với danh mục được phê duyệt"));
			else if(szNew_Type == _T("3"))
				tmpStr.Format(_T("3. Dịch vụ sai giá so với danh mục được phê duyệt"));
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 14);
			szOldType = szNew_Type;
			nIdx = 1;
			nRow++;
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("madichvu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("madichvudm"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tendichvu"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tendichvudm"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dongiadm"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("madichvucs"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("ma_bn"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("ho_ten"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\CongGiamDinhVIMES_DichVuchitiet.xls"));
} 