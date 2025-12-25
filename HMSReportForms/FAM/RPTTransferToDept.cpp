#include "stdafx.h"
#include "RPTTransferToDept.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTTransferToDept *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTTransferToDept *)pWnd)->OnToDateCheckValue();
} 
static void _OnFromDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTTransferToDept* )pWnd)->OnFromDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromDeptSelendokFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnFromDeptSelendok();
}
/*static void _OnFromDeptSetfocusFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnFromDeptKillfocus();
}*/
/*static void _OnFromDeptKillfocusFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnFromDeptKillfocus();
}*/
static long _OnFromDeptLoadDataFnc(CWnd *pWnd){
	return ((CRPTTransferToDept *)pWnd)->OnFromDeptLoadData();
}
/*static void _OnFromDeptAddNewFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnFromDeptAddNew();
}*/
static void _OnToDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTTransferToDept* )pWnd)->OnToDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDeptSelendokFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnToDeptSelendok();
}
/*static void _OnToDeptSetfocusFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnToDeptKillfocus();
}*/
/*static void _OnToDeptKillfocusFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnToDeptKillfocus();
}*/
static long _OnToDeptLoadDataFnc(CWnd *pWnd){
	return ((CRPTTransferToDept *)pWnd)->OnToDeptLoadData();
}
/*static void _OnToDeptAddNewFnc(CWnd *pWnd){
	((CRPTTransferToDept *)pWnd)->OnToDeptAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTTransferToDept *pVw = (CRPTTransferToDept *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTTransferToDept *pVw = (CRPTTransferToDept *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddRPTTransferToDeptFnc(CWnd *pWnd){
	 return ((CRPTTransferToDept*)pWnd)->OnAddRPTTransferToDept();
} 
static int _OnEditRPTTransferToDeptFnc(CWnd *pWnd){
	 return ((CRPTTransferToDept*)pWnd)->OnEditRPTTransferToDept();
} 
static int _OnDeleteRPTTransferToDeptFnc(CWnd *pWnd){
	 return ((CRPTTransferToDept*)pWnd)->OnDeleteRPTTransferToDept();
} 
static int _OnSaveRPTTransferToDeptFnc(CWnd *pWnd){
	 return ((CRPTTransferToDept*)pWnd)->OnSaveRPTTransferToDept();
} 
static int _OnCancelRPTTransferToDeptFnc(CWnd *pWnd){
	 return ((CRPTTransferToDept*)pWnd)->OnCancelRPTTransferToDept();
} 
CRPTTransferToDept::CRPTTransferToDept(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTTransferToDept::~CRPTTransferToDept(){
}
void CRPTTransferToDept::OnCreateComponents(){
	m_wndInformationReport.Create(this, _T("Information report"), 5, 5, 495, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,94, 30, 244, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 490, 55); 
	m_wndFromDeptLabel.Create(this, _T("From Dept"), 10, 60, 90, 85);
	m_wndFromDept.Create(this,95, 60, 245, 85); 
	m_wndToDeptLabel.Create(this, _T("To Dept"), 250, 60, 330, 85);
	m_wndToDept.Create(this,335, 60, 490, 85); 
	m_wndExport.Create(this, _T("&Export"), 415, 95, 495, 120);
	m_wndPrint.Create(this, _T("&Print"), 330, 95, 410, 120);

}
void CRPTTransferToDept::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndFromDept.SetCheckValue(true);
	m_wndFromDept.LimitText(1024);
	m_wndToDept.SetCheckValue(true);
	m_wndToDept.LimitText(1024);

	m_wndFromDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndToDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CRPTTransferToDept::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndFromDept.SetEvent(WE_SELENDOK, _OnFromDeptSelendokFnc);
	//m_wndFromDept.SetEvent(WE_SETFOCUS, _OnFromDeptSetfocusFnc);
	//m_wndFromDept.SetEvent(WE_KILLFOCUS, _OnFromDeptKillfocusFnc);
	m_wndFromDept.SetEvent(WE_SELCHANGE, _OnFromDeptSelectChangeFnc);
	m_wndFromDept.SetEvent(WE_LOADDATA, _OnFromDeptLoadDataFnc);
	//m_wndFromDept.SetEvent(WE_ADDNEW, _OnFromDeptAddNewFnc);
	m_wndToDept.SetEvent(WE_SELENDOK, _OnToDeptSelendokFnc);
	//m_wndToDept.SetEvent(WE_SETFOCUS, _OnToDeptSetfocusFnc);
	//m_wndToDept.SetEvent(WE_KILLFOCUS, _OnToDeptKillfocusFnc);
	m_wndToDept.SetEvent(WE_SELCHANGE, _OnToDeptSelectChangeFnc);
	m_wndToDept.SetEvent(WE_LOADDATA, _OnToDeptLoadDataFnc);
	//m_wndToDept.SetEvent(WE_ADDNEW, _OnToDeptAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	SetMode(VM_EDIT);

}
void CRPTTransferToDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFromDept.GetDlgCtrlID(), m_szFromDeptKey);
	DDX_TextEx(pDX, m_wndToDept.GetDlgCtrlID(), m_szToDeptKey);

}
void CRPTTransferToDept::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTTransferToDept::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTTransferToDept::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromDeptKey.Empty();
	m_szToDeptKey.Empty();

}
int CRPTTransferToDept::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
			m_szFromDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate = pMF->GetSysDateTime();
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
/*void CRPTTransferToDept::OnFromDateChange(){
	
} */
/*void CRPTTransferToDept::OnFromDateSetfocus(){
	
} */
/*void CRPTTransferToDept::OnFromDateKillfocus(){
	
} */
int CRPTTransferToDept::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTTransferToDept::OnToDateChange(){
	
} */
/*void CRPTTransferToDept::OnToDateSetfocus(){
	
} */
/*void CRPTTransferToDept::OnToDateKillfocus(){
	
} */
int CRPTTransferToDept::OnToDateCheckValue(){
	return 0;
} 
void CRPTTransferToDept::OnFromDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTransferToDept::OnFromDeptSelendok(){
	 
}
/*void CRPTTransferToDept::OnFromDeptSetfocus(){
	
}*/
/*void CRPTTransferToDept::OnFromDeptKillfocus(){
	
}*/
long CRPTTransferToDept::OnFromDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromDept.IsSearchKey() && !m_szFromDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szFromDeptKey);
	}
	m_wndFromDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTTransferToDept::OnFromDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTTransferToDept::OnToDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTransferToDept::OnToDeptSelendok(){
	 
}
/*void CRPTTransferToDept::OnToDeptSetfocus(){
	
}*/
/*void CRPTTransferToDept::OnToDeptKillfocus(){
	
}*/
long CRPTTransferToDept::OnToDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToDept.IsSearchKey() && !m_szToDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szToDeptKey);
	}
	if(!m_szFromDeptKey.IsEmpty()){
		szWhere.AppendFormat(_T(" and sd_id <> '%s'"), m_szFromDeptKey);
	}
	m_wndToDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTTransferToDept::OnToDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTTransferToDept::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0;
	int nIndex = 1;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 38);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6, 5);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 11);
	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 3, _T("TH\x1ED0NG K\xCA \x110I\x1EC0U \x43HUY\x1EC2N M\xC1Y M\xD3\x43, TR\x41NG THI\x1EBET \x42\x1ECA Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 5, _T("M\xE3 \x111i\x1EC1u \x63huy\x1EC3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 2, _T("\x42\xC1O \x43\xC1O \x110I\x1EC0U \x43HUY\x1EC2N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 5, _T("T\xEAn thi\x1EBFt \x62\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 5, _T("Model"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 5, _T("Serial"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 5, _T("N\x1A1i \x63huy\x1EC3n \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 5, _T("\x43\x1EA5p \x63h\x1EA5t l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 5, _T("Ng\xE0y/th\xE1ng/n\x103m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 0);
	xls.SetMerge(3, 3, 1, 5);
	xls.SetMerge(2, 2, 2, 4);
	xls.SetMerge(5, 5, 5, 6);

	if(!m_szFromDeptKey.IsEmpty() && !m_szToDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" AND st_exp_storage_id = '%s' AND st_imp_storage_id = '%s'"), m_szFromDeptKey, m_szToDeptKey);
	}
	szSQL.Format(_T("SELECT st_orderno as madc, fal_assetname as tentb, st_exp_storage_id as tukhoa, st_imp_storage_id as denkhoa, ") \
				_T(" fil_qtylevel, st_orderdate, stl_seri, fal_model ") \
				_T(" FROM storage_transaction ") \
				_T(" LEFT JOIN storage_transactionline ON(st_transaction_id = stl_transaction_id) ") \
				_T(" LEFT JOIN fam_asset_list ON(fal_assetno = stl_item_id) ") \
				_T(" LEFT JOIN fam_invent_line ON(fil_assetno = fal_assetno) ") \
				_T(" WHERE st_doctype = 'EMO' AND st_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);
	nRow = 7;
	nCol = 0;

	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIndex++), FMT_TEXT);

		rs.GetValue(_T("madc"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tentb"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("fal_model"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("stl_serial"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tukhoa"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("denkhoa"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("fil_qtylevel"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("st_orderdate"), tmpStr);
		xls.SetCellText(nCol+8, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\dieuchuyen.xls"));
} 
void CRPTTransferToDept::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate, szWhere;
	int nIndex = 1;

	if(!m_szFromDeptKey.IsEmpty() && !m_szToDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" AND st_exp_storage_id = '%s' AND st_imp_storage_id = '%s'"), m_szFromDeptKey, m_szToDeptKey);
	}
	szSQL.Format(_T("SELECT st_orderno as madc, fal_assetname as tentb, st_exp_storage_id as tukhoa, st_imp_storage_id as denkhoa, ") \
				_T(" fil_qtylevel, st_orderdate, fal_model, stl_seri ") \
				_T(" FROM storage_transaction ") \
				_T(" LEFT JOIN storage_transactionline ON(st_transaction_id = stl_transaction_id) ") \
				_T(" LEFT JOIN fam_asset_list ON(fal_assetno = stl_item_id) ") \
				_T(" LEFT JOIN fam_asset ON(fa_strgtransline_id = stl_transactionline_id) ") \
				_T(" LEFT JOIN fam_invent_line ON(fil_assetno = fa_assetno) ") \
				_T(" WHERE st_doctype = 'EMO' AND st_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate, szWhere);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_BAOCAODIEUCHUYEN.RPT")))
		return;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("madc"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("tentb"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fal_model"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("stl_seri"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("tukhoa"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("denkhoa"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("fil_qtylevel"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("st_orderdate"), tmpStr);
		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("9"), szTemp);

		rs.MoveNext();
	}

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
int CRPTTransferToDept::OnAddRPTTransferToDept(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTTransferToDept::OnEditRPTTransferToDept(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTTransferToDept::OnDeleteRPTTransferToDept(){
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
 		OnCancelRPTTransferToDept();
 	}
	return 0;
}
int CRPTTransferToDept::OnSaveRPTTransferToDept(){
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
 		//OnRPTTransferToDeptListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTTransferToDept::OnCancelRPTTransferToDept(){
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
int CRPTTransferToDept::OnRPTTransferToDeptListLoadData(){
	return 0;
}
