#include "stdafx.h"
#include "PMSThuocBHChuaMap.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSThuocBHChuaMap *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSThuocBHChuaMap *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSThuocBHChuaMap* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSThuocBHChuaMap *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMSThuocBHChuaMap *)pWnd)->OnStockAddNew();
}*/
static void _OnStorageSelectFnc(CWnd *pWnd){
	CPMSThuocBHChuaMap *pVw = (CPMSThuocBHChuaMap *)pWnd;
	pVw->OnStorageSelect();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	CPMSThuocBHChuaMap *pVw = (CPMSThuocBHChuaMap *)pWnd;
	pVw->OnAllSelect();
} 
static void _OnErrorSelectFnc(CWnd *pWnd){
	CPMSThuocBHChuaMap *pVw = (CPMSThuocBHChuaMap *)pWnd;
	pVw->OnErrorSelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSThuocBHChuaMap *pVw = (CPMSThuocBHChuaMap *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSThuocBHChuaMap *pVw = (CPMSThuocBHChuaMap *)pWnd;
	pVw->OnExportSelect();
} 
CPMSThuocBHChuaMap::CPMSThuocBHChuaMap(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSThuocBHChuaMap::~CPMSThuocBHChuaMap(){
}
void CPMSThuocBHChuaMap::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 495, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 260, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 265, 30, 345, 55);
	m_wndToDate.Create(this,350, 30, 490, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.SetCheckBox(true);
	m_wndStock.Create(this,115, 60, 490, 85); 
	m_wndStorage.Create(this, _T("Theo kho"), 10, 95, 110, 120);
	m_wndAll.Create(this, _T("Thông tin thuốc thanh toán BH"), 115, 95, 400, 120);
	m_wndError.Create(this, _T("Map lỗi"), 10, 125, 110, 150);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 495, 120);

}
void CPMSThuocBHChuaMap::OnInitializeComponents(){
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
void CPMSThuocBHChuaMap::OnSetWindowEvents(){
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
	m_wndStorage.SetEvent(WE_CLICK, _OnStorageSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndError.SetEvent(WE_CLICK, _OnErrorSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CPMSThuocBHChuaMap::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Check(pDX, m_wndStorage.GetDlgCtrlID(), m_bStorage);
	DDX_Check(pDX, m_wndAll.GetDlgCtrlID(), m_bAll);
	DDX_Check(pDX, m_wndError.GetDlgCtrlID(), m_bError);

}
void CPMSThuocBHChuaMap::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_bStorage = FALSE;
	m_bAll = FALSE;
	m_bError = FALSE;

}
int CPMSThuocBHChuaMap::SetMode(int nMode){
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
/*void CPMSThuocBHChuaMap::OnFromDateChange(){
	
} */
/*void CPMSThuocBHChuaMap::OnFromDateSetfocus(){
	
} */
/*void CPMSThuocBHChuaMap::OnFromDateKillfocus(){
	
} */
int CPMSThuocBHChuaMap::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSThuocBHChuaMap::OnToDateChange(){
	
} */
/*void CPMSThuocBHChuaMap::OnToDateSetfocus(){
	
} */
/*void CPMSThuocBHChuaMap::OnToDateKillfocus(){
	
} */
int CPMSThuocBHChuaMap::OnToDateCheckValue(){
	return 0;
} 
void CPMSThuocBHChuaMap::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSThuocBHChuaMap::OnStockSelendok(){
	 
}
/*void CPMSThuocBHChuaMap::OnStockSetfocus(){
	
}*/
/*void CPMSThuocBHChuaMap::OnStockKillfocus(){
	
}*/
long CPMSThuocBHChuaMap::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);

}
/*void CPMSThuocBHChuaMap::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSThuocBHChuaMap::OnStorageSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bAll = FALSE;
	m_bError = FALSE;
	UpdateData(FALSE);
} 
void CPMSThuocBHChuaMap::OnAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bStorage = FALSE;
	m_bError = FALSE;
	UpdateData(FALSE);
}
void CPMSThuocBHChuaMap::OnErrorSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bStorage = FALSE;
	m_bAll = FALSE;
	UpdateData(FALSE);
} 
void CPMSThuocBHChuaMap::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CPMSThuocBHChuaMap::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bStorage)
		OnExport2();
	if(m_bAll)
		OnExport3();
	if(m_bError)
		OnExport4();
	else
		OnExport1();
} 
void CPMSThuocBHChuaMap::OnExport1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString tmpStr,szSQL;
	int nCount=0 ;
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	int nCol=0;
	int nRow=0;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);

	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellMergedColumns(nCol, nRow+ 3, 5);

	xls.SetCellText(nCol,nRow+3,_T("\x44\x61nh s\xE1\x63h thu\x1ED1\x63 \x63h\x1B0\x61 m\x61p"),FMT_TEXT|FMT_CENTER,true,12);

	// 		szSQL.Format(_T(" SELECT DISTINCT(itemid) AS itemid,") \
	// 			_T("   hfe_insprice,") \
	// 			_T("   feename,") \
	// 			_T("   groupid") \
	// 			_T(" FROM") \
	// 			_T("   (SELECT") \
	// 			_T("     CASE") \
	// 			_T("       WHEN hfe_feegroup='DYN'") \
	// 			_T("       THEN b.hfe_deptid") \
	// 			_T("         ||'.'") \
	// 			_T("         ||b.hfe_itemid") \
	// 			_T("       ELSE b.hfe_itemid") \
	// 			_T("     END        AS itemid,") \
	// 			_T("     b.hfe_desc AS feename,") \
	// 			_T("     hfe_insprice,") \
	// 			_T("     b.hfe_group AS groupid") \
	// 			_T("   SELECT *") \
	// 			_T("   FROM hms_fee_invoice a") \
	// 			_T("   LEFT JOIN hms_fee b") \
	// 			_T("   ON (b.hfe_docno =a.hfe_docno)") \
	// 			_T("   LEFT JOIN hms_fee_list") \
	// 			_T("   ON (hfl_feeid      =b.hfe_itemid") \
	// 			_T("   AND a.hfe_invoiceno=b.HFE_INVOICENO)") \
	// 			_T("   LEFT JOIN hms_doc") \
	// 			_T("   ON (hd_docno=a.hfe_docno)") \
	// 			_T("   LEFT JOIN hms_circular_map") \
	// 			_T("   ON (hcm_fee_id=b.hfe_itemid") \
	// 			_T("   OR(hcm_fee_id = b.hfe_deptid") \
	// 			_T("     ||'.'") \
	// 			_T("     ||b.hfe_itemid") \
	// 			_T("   AND hfe_feegroup='DYN'))") \
	// 			_T("   WHERE a.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	// 			_T("   AND a.hfe_discount     >0") \
	// 			_T("   AND a.hfe_status       ='P'") \
	// 			_T("   AND b.hfe_discount     >0") \
	// 			_T("   AND LENGTH(hd_cardno)  >15") \
	// 			_T("   AND b.hfe_type NOT    IN ('D','M')") \
	// 			_T("   AND (( hcm_map_id     IS NULL") \
	// 			_T("   AND hfe_feegroup       ='DYN' )") \
	// 			_T("   OR (hfe_feegroup      <> 'DYN'") \
	// 			_T("   AND LENGTH(hfl_insmap)<=0) )") \
	// 			_T("   )") \
	// 			_T(" ORDER BY groupid"), m_szFromDate, m_szToDate);
	// 
	// 		rs.ExecSQL(szSQL);

	nRow=5;
	xls.SetColumnWidth(0,6);
	xls.SetColumnWidth(1,15);
	xls.SetColumnWidth(2,42);
	xls.SetColumnWidth(3,23);
	xls.SetColumnWidth(4,20);
	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +1 ,nRow,_T("M\xE3 Thu\x1ED1\x63 \x42V"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +2 ,nRow,_T("T\xEAn thu\x1ED1\x63 \x42V"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +3 ,nRow,_T("\x110\x1A1n gi\xE1 \x42N th\x61nh to\xE1n"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +4 ,nRow,_T("Sit\x65m nh\x1EADp kho"),FMT_TEXT|FMT_CENTER,true,11);
	int nIndex=1;
	// 		while(!rs.IsEOF())
	// 		{
	// 			nRow++;
	// 			tmpStr.Format(_T("%d"),nIndex++);
	// 			xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
	// 			rs.GetValue(_T("itemid"),tmpStr);
	// 			xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
	// 			rs.GetValue(_T("feename"),tmpStr);
	// 			xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
	// 			rs.GetValue(_T("hfe_insprice"),tmpStr);
	// 			xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_NUMBER1,false);
	// 			rs.GetValue(_T("groupid"),tmpStr);
	// 			xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_TEXT,false);
	// 			rs.MoveNext();
	// 		}

	szSQL.Format(_T(" SELECT DISTINCT mp_code,") \
		_T("   mp_name,") \
		_T("   hfe_insprice,") \
		_T("   mpi_product_item_id,") \
		_T("   b.hfe_group AS groupid") \
		_T(" FROM hms_fee_invoice a") \
		_T(" LEFT JOIN hms_fee b") \
		_T(" ON (b.hfe_docno    =a.hfe_docno") \
		_T(" AND a.hfe_invoiceno=b.HFE_INVOICENO)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno=a.hfe_docno)") \
		_T(" LEFT JOIN m_product_item") \
		_T(" ON (MPI_PRODUCT_ITEM_ID=cast(b.hfe_itemid as integer))") \
		_T(" LEFT JOIN m_product") \
		_T(" ON (mp_product_id=mpi_product_id)") \
		_T(" LEFT JOIN m_product_extra_info") \
		_T(" ON (mpei_id=MPI_PRODUCTEXTRA_ID)") \
		_T(" WHERE a.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND b.hfe_type       IN ('D','M')") \
		_T(" AND a.hfe_status      in ('P','A') ") \
		_T(" AND LENGTH(hd_cardno) >15") \
		_T(" AND b.hfe_discount    >0") \
		_T(" AND hfe_category      ='N'") \
		_T(" AND decode(mp_org_id, 'PM', mpei_id, 'MA', mp_atccode, mpei_id) IS NULL") \
		_T(" AND mp_org_id = '%s'") \
		_T(" ORDER BY groupid"), m_szFromDate, m_szToDate, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
_msg(_T("%s"),szSQL);
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
		rs.GetValue(_T("mp_code"),tmpStr);
		xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
		rs.GetValue(_T("mp_name"),tmpStr);
		xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("hfe_insprice"),tmpStr);
		xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpi_product_item_id"),tmpStr);
		xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_TEXT,false);

				szSQL.Format(_T("select LISTAGG( cast(po_orderno as varchar(50)),',')  WITHIN GROUP (ORDER BY po_orderno)  as nt  ") \
					_T("	from purchase_orderline ") \
					_T("	left join purchase_order on (po_purchase_order_id=pol_purchase_order_id) ") \
					_T("	where pol_product_item_id = %ld ") ,str2long(tmpStr) );
		rs2.ExecSQL(szSQL);
		if(!rs2.IsEOF())
		{
			rs2.GetValue(_T("nt"),tmpStr);
			xls.SetCellText(nCol + 5,nRow,tmpStr,FMT_TEXT,false);
		}
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHTHUOCCHUAMAP1.xls"));
} 
void CPMSThuocBHChuaMap::OnExport2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString tmpStr,szSQL, szWhere, szStorages;
	int nCount=0 ;
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	int nCol=0;
	int nRow=0;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);

	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellMergedColumns(nCol, nRow+ 3, 5);

	xls.SetCellText(nCol,nRow+3,_T("\x44\x61nh s\xE1\x63h thu\x1ED1\x63 \x63h\x1B0\x61 m\x61p"),FMT_TEXT|FMT_CENTER,true,12);

	// 		szSQL.Format(_T(" SELECT DISTINCT(itemid) AS itemid,") \
	// 			_T("   hfe_insprice,") \
	// 			_T("   feename,") \
	// 			_T("   groupid") \
	// 			_T(" FROM") \
	// 			_T("   (SELECT") \
	// 			_T("     CASE") \
	// 			_T("       WHEN hfe_feegroup='DYN'") \
	// 			_T("       THEN b.hfe_deptid") \
	// 			_T("         ||'.'") \
	// 			_T("         ||b.hfe_itemid") \
	// 			_T("       ELSE b.hfe_itemid") \
	// 			_T("     END        AS itemid,") \
	// 			_T("     b.hfe_desc AS feename,") \
	// 			_T("     hfe_insprice,") \
	// 			_T("     b.hfe_group AS groupid") \
	// 			_T("   SELECT *") \
	// 			_T("   FROM hms_fee_invoice a") \
	// 			_T("   LEFT JOIN hms_fee b") \
	// 			_T("   ON (b.hfe_docno =a.hfe_docno)") \
	// 			_T("   LEFT JOIN hms_fee_list") \
	// 			_T("   ON (hfl_feeid      =b.hfe_itemid") \
	// 			_T("   AND a.hfe_invoiceno=b.HFE_INVOICENO)") \
	// 			_T("   LEFT JOIN hms_doc") \
	// 			_T("   ON (hd_docno=a.hfe_docno)") \
	// 			_T("   LEFT JOIN hms_circular_map") \
	// 			_T("   ON (hcm_fee_id=b.hfe_itemid") \
	// 			_T("   OR(hcm_fee_id = b.hfe_deptid") \
	// 			_T("     ||'.'") \
	// 			_T("     ||b.hfe_itemid") \
	// 			_T("   AND hfe_feegroup='DYN'))") \
	// 			_T("   WHERE a.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	// 			_T("   AND a.hfe_discount     >0") \
	// 			_T("   AND a.hfe_status       ='P'") \
	// 			_T("   AND b.hfe_discount     >0") \
	// 			_T("   AND LENGTH(hd_cardno)  >15") \
	// 			_T("   AND b.hfe_type NOT    IN ('D','M')") \
	// 			_T("   AND (( hcm_map_id     IS NULL") \
	// 			_T("   AND hfe_feegroup       ='DYN' )") \
	// 			_T("   OR (hfe_feegroup      <> 'DYN'") \
	// 			_T("   AND LENGTH(hfl_insmap)<=0) )") \
	// 			_T("   )") \
	// 			_T(" ORDER BY groupid"), m_szFromDate, m_szToDate);
	// 
	// 		rs.ExecSQL(szSQL);

	nRow=5;
	xls.SetColumnWidth(0,6);
	xls.SetColumnWidth(1,15);
	xls.SetColumnWidth(2,42);
	xls.SetColumnWidth(3,23);
	xls.SetColumnWidth(4,20);
	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +1 ,nRow,_T("M\xE3 Thu\x1ED1\x63 \x42V"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +2 ,nRow,_T("T\xEAn thu\x1ED1\x63 \x42V"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +3 ,nRow,_T("Gi\xE1 \x62\x1EA3o hi\x1EC3m"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +4 ,nRow,_T("Sit\x65m nh\x1EADp kho"),FMT_TEXT|FMT_CENTER,true,11);
	int nIndex=1;
	// 		while(!rs.IsEOF())
	// 		{
	// 			nRow++;
	// 			tmpStr.Format(_T("%d"),nIndex++);
	// 			xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
	// 			rs.GetValue(_T("itemid"),tmpStr);
	// 			xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
	// 			rs.GetValue(_T("feename"),tmpStr);
	// 			xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
	// 			rs.GetValue(_T("hfe_insprice"),tmpStr);
	// 			xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_NUMBER1,false);
	// 			rs.GetValue(_T("groupid"),tmpStr);
	// 			xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_TEXT,false);
	// 			rs.MoveNext();
	// 		}

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(0);
		}
	}
	if(!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND msl_storage_id IN(%s)"), szStorages);
	}

	szSQL.Format(_T(" SELECT DISTINCT mp_code,") \
		_T("   mp_name,") \
		_T("   mpi_saleprice2,") \
		_T("   mpi_product_item_id,") \
		_T("   mp_producttype AS groupid") \
		_T(" FROM m_storageline") \
		_T(" LEFT JOIN m_product_item") \
		_T(" ON (mpi_product_item_id = msl_product_item_id)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON (mp_product_id = mpi_product_id)") \
		_T(" LEFT JOIN m_product_extra_info") \
		_T(" ON (mpei_id = mpi_productextra_id)") \
		_T(" WHERE decode(mp_org_id, 'PM', mpei_id, 'MA', mp_atccode, mpei_id) IS NULL") \
		_T(" AND mp_org_id = '%s' AND msl_qtyonhand > 0 and msl_storage_id not in ( 14,3,23) %s") \
		_T(" ORDER BY groupid"), pMF->GetModuleID(), szWhere);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
		rs.GetValue(_T("mp_code"),tmpStr);
		xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
		rs.GetValue(_T("mp_name"),tmpStr);
		xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpi_saleprice2"),tmpStr);
		xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpi_product_item_id"),tmpStr);
		xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_TEXT,false);
		
		szSQL.Format(_T("select LISTAGG( cast(po_orderno as varchar(50)),',')  WITHIN GROUP (ORDER BY po_orderno)  as nt  ") \
					_T("	from purchase_orderline ") \
					_T("	left join purchase_order on (po_purchase_order_id=pol_purchase_order_id) ") \
					_T("	where pol_product_item_id = %ld ") ,str2long(tmpStr) );
		rs2.ExecSQL(szSQL);
		if(!rs2.IsEOF())
		{
			rs2.GetValue(_T("nt"),tmpStr);
			xls.SetCellText(nCol + 5,nRow,tmpStr,FMT_TEXT,false);
		}

		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHTHUOCCHUAMAP_THEOKHO2.xls"));
} 
void CPMSThuocBHChuaMap::OnExport3(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString tmpStr,szSQL;
	int nCount=0 ;
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	int nCol=0;
	int nRow=0;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);

	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellMergedColumns(nCol, nRow+ 3, 5);

	xls.SetCellText(nCol,nRow+3,_T("\x44\x61nh s\xE1\x63h thu\x1ED1\x63 \x63h\x1B0\x61 m\x61p"),FMT_TEXT|FMT_CENTER,true,12);

	// 		szSQL.Format(_T(" SELECT DISTINCT(itemid) AS itemid,") \
	// 			_T("   hfe_insprice,") \
	// 			_T("   feename,") \
	// 			_T("   groupid") \
	// 			_T(" FROM") \
	// 			_T("   (SELECT") \
	// 			_T("     CASE") \
	// 			_T("       WHEN hfe_feegroup='DYN'") \
	// 			_T("       THEN b.hfe_deptid") \
	// 			_T("         ||'.'") \
	// 			_T("         ||b.hfe_itemid") \
	// 			_T("       ELSE b.hfe_itemid") \
	// 			_T("     END        AS itemid,") \
	// 			_T("     b.hfe_desc AS feename,") \
	// 			_T("     hfe_insprice,") \
	// 			_T("     b.hfe_group AS groupid") \
	// 			_T("   SELECT *") \
	// 			_T("   FROM hms_fee_invoice a") \
	// 			_T("   LEFT JOIN hms_fee b") \
	// 			_T("   ON (b.hfe_docno =a.hfe_docno)") \
	// 			_T("   LEFT JOIN hms_fee_list") \
	// 			_T("   ON (hfl_feeid      =b.hfe_itemid") \
	// 			_T("   AND a.hfe_invoiceno=b.HFE_INVOICENO)") \
	// 			_T("   LEFT JOIN hms_doc") \
	// 			_T("   ON (hd_docno=a.hfe_docno)") \
	// 			_T("   LEFT JOIN hms_circular_map") \
	// 			_T("   ON (hcm_fee_id=b.hfe_itemid") \
	// 			_T("   OR(hcm_fee_id = b.hfe_deptid") \
	// 			_T("     ||'.'") \
	// 			_T("     ||b.hfe_itemid") \
	// 			_T("   AND hfe_feegroup='DYN'))") \
	// 			_T("   WHERE a.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	// 			_T("   AND a.hfe_discount     >0") \
	// 			_T("   AND a.hfe_status       ='P'") \
	// 			_T("   AND b.hfe_discount     >0") \
	// 			_T("   AND LENGTH(hd_cardno)  >15") \
	// 			_T("   AND b.hfe_type NOT    IN ('D','M')") \
	// 			_T("   AND (( hcm_map_id     IS NULL") \
	// 			_T("   AND hfe_feegroup       ='DYN' )") \
	// 			_T("   OR (hfe_feegroup      <> 'DYN'") \
	// 			_T("   AND LENGTH(hfl_insmap)<=0) )") \
	// 			_T("   )") \
	// 			_T(" ORDER BY groupid"), m_szFromDate, m_szToDate);
	// 
	// 		rs.ExecSQL(szSQL);

	nRow=5;
	xls.SetColumnWidth(0,6);
	xls.SetColumnWidth(1,15);
	xls.SetColumnWidth(2,30);
	xls.SetColumnWidth(3,10);
	xls.SetColumnWidth(4,12);
	xls.SetColumnWidth(5,12);
	xls.SetColumnWidth(6,12);
	xls.SetColumnWidth(7,30);
	xls.SetColumnWidth(8,10);
	xls.SetColumnWidth(9,10);
	xls.SetColumnWidth(10,30);
	xls.SetColumnWidth(11,10);
	xls.SetColumnWidth(12,12);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,30);
	xls.SetColumnWidth(16,16);
	xls.SetColumnWidth(17,16);

	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +1 ,nRow,_T("Mã thuốc"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +2 ,nRow,_T("Tên thuốc"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +3 ,nRow,_T("Đơn vị"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +4 ,nRow,_T("Đơn giá"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +5 ,nRow,_T("Product ID"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +6 ,nRow,_T("Product Item ID"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +7 ,nRow,_T("Nhà cung cấp theo HĐ"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +8 ,nRow,_T("Nhóm thuốc"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +9 ,nRow,_T("Mã MAP"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +10 ,nRow,_T("Tên thuốc"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +11,nRow,_T("Đơn vị"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +12,nRow,_T("Đơn giá"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +13,nRow,_T("Đơn giá thực tế"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +14,nRow,_T("Số lượng"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +15,nRow,_T("Nhà cung cấp"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +16,nRow,_T("Quyết định"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +17,nRow,_T("Ngày công bố"),FMT_TEXT|FMT_CENTER,true,11);
	int nIndex=1;
	// 		while(!rs.IsEOF())
	// 		{
	// 			nRow++;
	// 			tmpStr.Format(_T("%d"),nIndex++);
	// 			xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
	// 			rs.GetValue(_T("itemid"),tmpStr);
	// 			xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
	// 			rs.GetValue(_T("feename"),tmpStr);
	// 			xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
	// 			rs.GetValue(_T("hfe_insprice"),tmpStr);
	// 			xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_NUMBER1,false);
	// 			rs.GetValue(_T("groupid"),tmpStr);
	// 			xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_TEXT,false);
	// 			rs.MoveNext();
	// 		}

	szSQL.Format(_T(" SELECT DISTINCT mp_code,") \
		_T("   mp_name,") \
		_T("   get_uomname(mp_uom_id) AS unit,") \
		_T("   hfe_insprice,") \
		_T("   mpi_product_id,") \
		_T("   mpi_product_item_id,") \
		_T("   get_partnername(mp_bpartner_id) AS partner,") \
		_T("   b.hfe_group AS groupid,") \
		_T("   mpei_id,") \
		_T("   mpei_ten_thuoc,") \
		_T("   mpei_don_vi_tinh,") \
		_T("   mpei_don_gia,") \
		_T("   mpei_don_gia_tt,") \
		_T("   mpei_so_luong,") \
		_T("   mpei_nha_thau,") \
		_T("   mpei_quyet_dinh,") \
		_T("   mpei_cong_bo") \
		_T(" FROM hms_fee_invoice a") \
		_T(" LEFT JOIN hms_fee b") \
		_T(" ON (b.hfe_docno    =a.hfe_docno") \
		_T(" AND a.hfe_invoiceno=b.HFE_INVOICENO)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno=a.hfe_docno)") \
		_T(" LEFT JOIN m_product_item") \
		_T(" ON (MPI_PRODUCT_ITEM_ID=cast(b.hfe_itemid as integer))") \
		_T(" LEFT JOIN m_product") \
		_T(" ON (mp_product_id=mpi_product_id)") \
		_T(" LEFT JOIN m_product_extra_info") \
		_T(" ON (mpei_id=MPI_PRODUCTEXTRA_ID)") \
		_T(" WHERE a.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND b.hfe_type       IN ('D','M')") \
		_T(" AND a.hfe_status      ='P'") \
		_T(" AND LENGTH(hd_cardno) >15") \
		_T(" AND b.hfe_discount    >0") \
		_T(" AND hfe_category      ='N'") \
		_T(" AND mp_org_id        = '%s'") \
		_T(" ORDER BY groupid, mpei_id"), m_szFromDate, m_szToDate, pMF->GetModuleID());
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_INTEGER,false);
		rs.GetValue(_T("mp_code"),tmpStr);
		xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mp_name"),tmpStr);
		xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("unit"),tmpStr);
		xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("hfe_insprice"),tmpStr);
		xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpi_product_id"),tmpStr);
		xls.SetCellText(nCol + 5,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpi_product_item_id"),tmpStr);
		xls.SetCellText(nCol + 6,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("partner"),tmpStr);
		xls.SetCellText(nCol + 7,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("groupid"),tmpStr);
		xls.SetCellText(nCol + 8,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_id"),tmpStr);
		xls.SetCellText(nCol + 9,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpei_ten_thuoc"),tmpStr);
		xls.SetCellText(nCol + 10,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_don_vi_tinh"),tmpStr);
		xls.SetCellText(nCol + 11,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_don_gia"),tmpStr);
		xls.SetCellText(nCol + 12,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpei_don_gia_tt"),tmpStr);
		xls.SetCellText(nCol + 13,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpei_so_luong"),tmpStr);
		xls.SetCellText(nCol + 14,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpei_nha_thau"),tmpStr);
		xls.SetCellText(nCol + 15,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_quyet_dinh"),tmpStr);
		xls.SetCellText(nCol + 16,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_cong_bo"),tmpStr);
		xls.SetCellText(nCol + 17,nRow,CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),FMT_TEXT,false);


		rs.GetValue(_T("mpi_product_item_id"),tmpStr);
	
		
		szSQL.Format(_T("select LISTAGG( cast(po_orderno as varchar(50)),',')  WITHIN GROUP (ORDER BY po_orderno)  as nt  ") \
					_T("	from purchase_orderline ") \
					_T("	left join purchase_order on (po_purchase_order_id=pol_purchase_order_id) ") \
					_T("	where pol_product_item_id = %ld ") ,str2long(tmpStr) );
		rs2.ExecSQL(szSQL);
		if(!rs2.IsEOF())
		{
			rs2.GetValue(_T("nt"),tmpStr);
			xls.SetCellText(nCol + 18,nRow,tmpStr,FMT_TEXT,false);
		}



		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHTHUOCCHUAMAP3.xls"));
} 
void CPMSThuocBHChuaMap::OnExport4(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString tmpStr,szSQL;
	int nCount=0 ;
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	int nCol=0;
	int nRow=0;
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);

	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellMergedColumns(nCol, nRow+ 3, 5);

	xls.SetCellText(nCol,nRow+3,_T("\x44\x61nh s\xE1\x63h thu\x1ED1\x63 \x63h\x1B0\x61 m\x61p"),FMT_TEXT|FMT_CENTER,true,12);

	// 		szSQL.Format(_T(" SELECT DISTINCT(itemid) AS itemid,") \
	// 			_T("   hfe_insprice,") \
	// 			_T("   feename,") \
	// 			_T("   groupid") \
	// 			_T(" FROM") \
	// 			_T("   (SELECT") \
	// 			_T("     CASE") \
	// 			_T("       WHEN hfe_feegroup='DYN'") \
	// 			_T("       THEN b.hfe_deptid") \
	// 			_T("         ||'.'") \
	// 			_T("         ||b.hfe_itemid") \
	// 			_T("       ELSE b.hfe_itemid") \
	// 			_T("     END        AS itemid,") \
	// 			_T("     b.hfe_desc AS feename,") \
	// 			_T("     hfe_insprice,") \
	// 			_T("     b.hfe_group AS groupid") \
	// 			_T("   SELECT *") \
	// 			_T("   FROM hms_fee_invoice a") \
	// 			_T("   LEFT JOIN hms_fee b") \
	// 			_T("   ON (b.hfe_docno =a.hfe_docno)") \
	// 			_T("   LEFT JOIN hms_fee_list") \
	// 			_T("   ON (hfl_feeid      =b.hfe_itemid") \
	// 			_T("   AND a.hfe_invoiceno=b.HFE_INVOICENO)") \
	// 			_T("   LEFT JOIN hms_doc") \
	// 			_T("   ON (hd_docno=a.hfe_docno)") \
	// 			_T("   LEFT JOIN hms_circular_map") \
	// 			_T("   ON (hcm_fee_id=b.hfe_itemid") \
	// 			_T("   OR(hcm_fee_id = b.hfe_deptid") \
	// 			_T("     ||'.'") \
	// 			_T("     ||b.hfe_itemid") \
	// 			_T("   AND hfe_feegroup='DYN'))") \
	// 			_T("   WHERE a.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	// 			_T("   AND a.hfe_discount     >0") \
	// 			_T("   AND a.hfe_status       ='P'") \
	// 			_T("   AND b.hfe_discount     >0") \
	// 			_T("   AND LENGTH(hd_cardno)  >15") \
	// 			_T("   AND b.hfe_type NOT    IN ('D','M')") \
	// 			_T("   AND (( hcm_map_id     IS NULL") \
	// 			_T("   AND hfe_feegroup       ='DYN' )") \
	// 			_T("   OR (hfe_feegroup      <> 'DYN'") \
	// 			_T("   AND LENGTH(hfl_insmap)<=0) )") \
	// 			_T("   )") \
	// 			_T(" ORDER BY groupid"), m_szFromDate, m_szToDate);
	// 
	// 		rs.ExecSQL(szSQL);

	nRow=5;
	xls.SetColumnWidth(0,6);
	xls.SetColumnWidth(1,15);
	xls.SetColumnWidth(2,30);
	xls.SetColumnWidth(3,10);
	xls.SetColumnWidth(4,12);
	xls.SetColumnWidth(5,12);
	xls.SetColumnWidth(6,12);
	xls.SetColumnWidth(7,30);
	xls.SetColumnWidth(8,10);
	xls.SetColumnWidth(9,10);
	xls.SetColumnWidth(10,30);
	xls.SetColumnWidth(11,10);
	xls.SetColumnWidth(12,12);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,30);
	xls.SetColumnWidth(16,16);
	xls.SetColumnWidth(17,16);

	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +1 ,nRow,_T("Mã thuốc"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +2 ,nRow,_T("Tên thuốc"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +3 ,nRow,_T("Đơn vị"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +4 ,nRow,_T("Đơn giá"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +5 ,nRow,_T("Product ID"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +6 ,nRow,_T("Product Item ID"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +7 ,nRow,_T("Nhà cung cấp theo HĐ"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +8 ,nRow,_T("Nhóm thuốc"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +9 ,nRow,_T("Mã MAP"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +10 ,nRow,_T("Tên thuốc"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +11,nRow,_T("Đơn vị"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +12,nRow,_T("Đơn giá"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +13,nRow,_T("Đơn giá thực tế"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +14,nRow,_T("Số lượng"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +15,nRow,_T("Nhà cung cấp"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +16,nRow,_T("Quyết định"),FMT_TEXT|FMT_CENTER,true,11);
	xls.SetCellText(nCol +17,nRow,_T("Ngày công bố"),FMT_TEXT|FMT_CENTER,true,11);
	int nIndex=1;
	// 		while(!rs.IsEOF())
	// 		{
	// 			nRow++;
	// 			tmpStr.Format(_T("%d"),nIndex++);
	// 			xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
	// 			rs.GetValue(_T("itemid"),tmpStr);
	// 			xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
	// 			rs.GetValue(_T("feename"),tmpStr);
	// 			xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
	// 			rs.GetValue(_T("hfe_insprice"),tmpStr);
	// 			xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_NUMBER1,false);
	// 			rs.GetValue(_T("groupid"),tmpStr);
	// 			xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_TEXT,false);
	// 			rs.MoveNext();
	// 		}

	szSQL.Format(_T(" SELECT DISTINCT mp_code,") \
		_T("   mp_name,") \
		_T("   get_uomname(mp_uom_id) AS unit,") \
		_T("   mpi_saleprice2 as hfe_insprice,") \
		_T("   mpi_product_id,") \
		_T("   mpi_product_item_id,") \
		_T("   get_partnername(mp_bpartner_id) AS partner,") \
		_T("   mpei_id,") \
		_T("   mpei_ten_thuoc,") \
		_T("   mpei_don_vi_tinh,") \
		_T("   mpei_don_gia,") \
		_T("   mpei_don_gia_tt,") \
		_T("   mpei_so_luong,") \
		_T("   mpei_nha_thau,") \
		_T("   mpei_quyet_dinh,") \
		_T("	mpei_cong_bo,mpei_ma_hoat_chat ") \
		_T(" FROM m_product_item") \
		_T(" LEFT JOIN purchase_orderline ON (pol_product_item_id = mpi_product_item_id) ") \
		_T(" LEFT JOIN purchase_order ON (po_purchase_order_id=pol_purchase_order_id) ") \
		_T(" LEFT JOIN m_product") \
		_T(" ON (mp_product_id=mpi_product_id)") \
		_T(" LEFT JOIN m_product_extra_info") \
		_T(" ON (mpei_id=MPI_PRODUCTEXTRA_ID)") \
		_T("	LEFT JOIN m_storageline ON (msl_product_item_id= mpi_product_item_id) ") \
		_T("	LEFT JOIN VIMES.m_storagelist ON (m_storagelist.msl_storage_id= m_storageline.msl_storage_id) ") \
		_T(" WHERE 1=1") \
		_T(" AND mpi_org_id        = 'PM' and po_status='A' and m_storageline.msl_product_item_id >0 and  m_storagelist.msl_type <> 'S' and m_storagelist.msl_category <>'S'  ") \
		_T(" and mpi_createddate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND abs(mpi_saleprice2 - COALESCE(mpei_don_gia_tt,0)) > 1 and nvl(MPI_PRODUCTEXTRA_ID,0) > 0 ") \
		_T(" ORDER BY  mpei_id"),m_szFromDate);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_INTEGER,false);
		rs.GetValue(_T("mp_code"),tmpStr);
		xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mp_name"),tmpStr);
		xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("unit"),tmpStr);
		xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("hfe_insprice"),tmpStr);
		xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpi_product_id"),tmpStr);
		xls.SetCellText(nCol + 5,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpi_product_item_id"),tmpStr);
		xls.SetCellText(nCol + 6,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("partner"),tmpStr);
		xls.SetCellText(nCol + 7,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("groupid"),tmpStr);
		xls.SetCellText(nCol + 8,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_id"),tmpStr);
		xls.SetCellText(nCol + 9,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpei_ten_thuoc"),tmpStr);
		xls.SetCellText(nCol + 10,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_don_vi_tinh"),tmpStr);
		xls.SetCellText(nCol + 11,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_don_gia"),tmpStr);
		xls.SetCellText(nCol + 12,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpei_don_gia_tt"),tmpStr);
		xls.SetCellText(nCol + 13,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpei_so_luong"),tmpStr);
		xls.SetCellText(nCol + 14,nRow,tmpStr,FMT_NUMBER1,false);
		rs.GetValue(_T("mpei_nha_thau"),tmpStr);
		xls.SetCellText(nCol + 15,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_quyet_dinh"),tmpStr);
		xls.SetCellText(nCol + 16,nRow,tmpStr,FMT_TEXT,false);
		rs.GetValue(_T("mpei_cong_bo"),tmpStr);
		xls.SetCellText(nCol + 17,nRow,CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),FMT_TEXT,false);
		rs.GetValue(_T("mpei_ma_hoat_chat"),tmpStr);
		xls.SetCellText(nCol + 18,nRow,tmpStr,FMT_TEXT,false);

		rs.GetValue(_T("mpi_product_item_id"),tmpStr);
	
		
		szSQL.Format(_T("select LISTAGG( cast(po_orderno as varchar(50)),',')  WITHIN GROUP (ORDER BY po_orderno)  as nt  ") \
					_T("	from purchase_orderline ") \
					_T("	left join purchase_order on (po_purchase_order_id=pol_purchase_order_id) ") \
					_T("	where pol_product_item_id = %ld ") ,str2long(tmpStr) );
		rs2.ExecSQL(szSQL);
		if(!rs2.IsEOF())
		{
			rs2.GetValue(_T("nt"),tmpStr);
			xls.SetCellText(nCol + 19,nRow,tmpStr,FMT_TEXT,false);
		}

		
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHTHUOCCHUAMAP4.xls"));
} 
CString CPMSThuocBHChuaMap::GetQueryString(){
	CString szSQL, szWhere, szStorages;
	return szSQL;
}