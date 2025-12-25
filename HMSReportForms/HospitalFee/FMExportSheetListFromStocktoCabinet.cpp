#include "stdafx.h"
#include "FMExportSheetListFromStocktoCabinet.h"
#include "MainFrame_E10.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "SearchPopup.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMExportSheetListFromStocktoCabinet* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnStockAddNew();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet *)pWnd)->OnTypeLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMExportSheetListFromStocktoCabinet *pVw = (CFMExportSheetListFromStocktoCabinet *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMExportSheetListFromStocktoCabinet *pVw = (CFMExportSheetListFromStocktoCabinet *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnAddPMSExportSheetListForInsurance();
} 
static int _OnEditPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnEditPMSExportSheetListForInsurance();
} 
static int _OnDeletePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnDeletePMSExportSheetListForInsurance();
} 
static int _OnSavePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnSavePMSExportSheetListForInsurance();
} 
static int _OnCancelPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnCancelPMSExportSheetListForInsurance();
}
static int _OnStockSearchItemFnc(CWnd *pWnd){
	 ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnStockSearchItem();
	 return 0;
}

static int _OnCabinetSearchItemFnc(CWnd *pWnd){
	 ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnCabinetSearchItem();
	 return 0;
}
static long _OnCabinetLoadDataFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnCabinetLoadData();
}

static int _OnStockListCheckAllFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnStockListCheckAll();
}
static int _OnStockListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnStockListUnCheckAll();
}

static int _OnCabinetListCheckAllFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnCabinetListCheckAll();
}
static int _OnCabinetListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMExportSheetListFromStocktoCabinet*)pWnd)->OnCabinetListUnCheckAll();
}

CFMExportSheetListFromStocktoCabinet::CFMExportSheetListFromStocktoCabinet(CWnd *pParent)
{
	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMExportSheetListFromStocktoCabinet::~CFMExportSheetListFromStocktoCabinet()
{
}
void CFMExportSheetListFromStocktoCabinet::OnCreateComponents()
{
	m_wndExportSheetListForInsurance.Create(this, _T("Export Sheet List"), 6, 5, 483, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 30, 91, 55);
	m_wndFromDate.Create(this,96, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 479, 55); 
	m_wndStock.Create(this,5, 95, 482, 269); 
	m_wndTypeLabel.Create(this, _T("Type"), 11, 60, 91, 85);
	m_wndType.Create(this,96, 60, 479, 85); 
	m_wndExport.Create(this, _T("&ExportXLS"), 407, 431, 482, 456);
	m_wndCabinet.Create(this,5, 281, 482, 427);
	m_wndStock.SetCheckBox(true);
	m_wndCabinet.SetCheckBox(true);
	m_wndType.EnableWindow(false);

}
void CFMExportSheetListFromStocktoCabinet::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndStock.InsertColumn(1, _T("Danh sách kho"), CFMT_TEXT, 400);
	m_wndStock.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 70);

	m_wndCabinet.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndCabinet.InsertColumn(1, _T("Danh sách tủ trực"), CFMT_TEXT, 400);
	m_wndCabinet.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 70);

	m_wndStock.AddEvent(1, _T("Check All"), _OnStockListCheckAllFnc);
	m_wndStock.AddEvent(2, _T("UnCheck All"), _OnStockListUnCheckAllFnc);

	m_wndCabinet.AddEvent(1, _T("Check All"), _OnCabinetListCheckAllFnc);
	m_wndCabinet.AddEvent(2, _T("UnCheck All"), _OnCabinetListUnCheckAllFnc);

}
void CFMExportSheetListFromStocktoCabinet::OnSetWindowEvents(){
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
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndCabinet.SetEvent(WE_LOADDATA, _OnCabinetLoadDataFnc);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStock.AddEvent(3, _T("Search"), _OnStockSearchItemFnc);
	m_wndCabinet.AddEvent(3, _T("Search"), _OnCabinetSearchItemFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	OnStockLoadData();
	OnCabinetLoadData();
	UpdateData(false);

}
void CFMExportSheetListFromStocktoCabinet::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

	//DDX_Check(pDX, m_wndByServPrice.GetDlgCtrlID(), m_nByServPrice);
}
void CFMExportSheetListFromStocktoCabinet::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMExportSheetListFromStocktoCabinet::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CFMExportSheetListFromStocktoCabinet::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_nByServPrice = 0;
}
int CFMExportSheetListFromStocktoCabinet::SetMode(int nMode){
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
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFMExportSheetListFromStocktoCabinet::OnFromDateChange(){
	
} */
/*void CFMExportSheetListFromStocktoCabinet::OnFromDateSetfocus(){
	
} */
/*void CFMExportSheetListFromStocktoCabinet::OnFromDateKillfocus(){
	
} */
int CFMExportSheetListFromStocktoCabinet::OnFromDateCheckValue()
{
	return 0;
} 
/*void CFMExportSheetListFromStocktoCabinet::OnToDateChange(){
	
} */
/*void CFMExportSheetListFromStocktoCabinet::OnToDateSetfocus(){
	
} */
/*void CFMExportSheetListFromStocktoCabinet::OnToDateKillfocus(){
	
} */
int CFMExportSheetListFromStocktoCabinet::OnToDateCheckValue(){
	return 0;
} 
void CFMExportSheetListFromStocktoCabinet::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFMExportSheetListFromStocktoCabinet::OnStockSelendok(){
	 
}
/*void CFMExportSheetListFromStocktoCabinet::OnStockSetfocus(){
	
}*/
/*void CFMExportSheetListFromStocktoCabinet::OnStockKillfocus(){
	
}*/

long CFMExportSheetListFromStocktoCabinet::OnStockLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndStock.BeginLoad(); 
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_org_id as orgid, msl_name as name FROM m_storagelist WHERE (msl_org_id IN ('MA') AND msl_type<>'C') %s ORDER BY msl_storage_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndStock.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("orgid")), NULL);
		rs.MoveNext();
	}
	m_wndStock.EndLoad(); 
	return nCount;
}

long CFMExportSheetListFromStocktoCabinet::OnCabinetLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndCabinet.BeginLoad(); 
	m_wndCabinet.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_org_id as orgid, msl_name as name FROM m_storagelist WHERE (msl_type='C') %s ORDER BY msl_org_id,msl_storage_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndCabinet.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
		    rs.GetValue(_T("orgid")), NULL);
		rs.MoveNext();
	}
	m_wndCabinet.EndLoad(); 
	return nCount;
}
/*void CFMExportSheetListFromStocktoCabinet::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long CFMExportSheetListFromStocktoCabinet::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT product_type_id, ") \
	_T("                 product_type_name ") \
	_T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
	_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'A0000' ") \
	_T("                ELSE mpt_product_type_id ") \
	_T("                END product_type_id, ") \
	_T("                CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
	_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thuốc' ") \
	_T("                ELSE mpt_name ") \
	_T("                END product_type_name ") \
	_T("         FROM   m_product_type ") \
	_T("         WHERE  mpt_org_id = '%s' ") \
	_T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> 'A1000') ") \
	_T(" ORDER BY product_type_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	m_wndType.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndType.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;	
}
void CFMExportSheetListFromStocktoCabinet::OnPrintPreviewSelect()
{
	return;
} 

void CFMExportSheetListFromStocktoCabinet::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export mẫu từ tủ trực -> Bệnh nhân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export mẫu từ kho -> tủ trực"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport_1();
			break;
		case 2:
			OnExport_2();
			break;		
	}
} 

void CFMExportSheetListFromStocktoCabinet::OnExport_1()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, szWhere, szOldDept, szNewDept;
	CString tmpStr, m_szFacList, szDeptID;
	CString  m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;	
	CString szType, szTypeName, szStorages;		
	int m_nCountList=0;

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	CellFormat df(&xls), cf(&xls), hf(&xls);
	if (!xls.Load(_T("Exports\\Template\\MA_BANGKEPHIEUXUAT_TUKHO_DENTUTRUC_MAU1.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), m_wndStock.GetItemText(i, 1));
		}
	}

	if (!szStorages.IsEmpty())
	{
		TranslateString(_T("From Stock"), tmpStr);
		xls.SetCellMergedColumns(0, 4, 11);
		xls.SetCellText(0, 4, tmpStr + _T(":") + szStorages);
	}
	
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("sophieu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("ngayyeucau"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("ngaylapphieu"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayduyet"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoso"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("mathuoc"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenthuoc"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoatchat"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("donvi"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("qtyissue"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("amount"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("khoaxuat"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoxuat"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenkhoxuat"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoanhap"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("makhonhap"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenkhonhap"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("loaiphieu"), tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_TEXT);		
		
			
		nRow++;
		rs.MoveNext();
	}
	
	if (nGroupTotal[13] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 13; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[13] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 13; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}


	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\MA_BANGKEPHIEUXUAT_TUKHO_DENTUTRUC_MAU12.xls"));
	
} 
void CFMExportSheetListFromStocktoCabinet::OnExport_2()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, szWhere, szOldDept, szNewDept;
	CString tmpStr, m_szFacList, szDeptID;
	CString  m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;	
	CString szType, szTypeName, szStorages;		
	int m_nCountList=0;

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	CellFormat df(&xls), cf(&xls), hf(&xls);
	if (!xls.Load(_T("Exports\\Template\\MA_BANGKEPHIEUXUAT_TUKHO_DENTUTRUC_MAU2.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), m_wndStock.GetItemText(i, 1));
		}
	}

	if (!szStorages.IsEmpty())
	{
		TranslateString(_T("From Stock"), tmpStr);
		xls.SetCellMergedColumns(0, 4, 11);
		xls.SetCellText(0, 4, tmpStr + _T(":") + szStorages);
	}
	
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("sophieu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("ngayyeucau"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("ngaylapphieu"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayduyet"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoso"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("mathuoc"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenthuoc"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoatchat"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("donvi"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("qtyissue"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("amount"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("khoaxuat"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoxuat"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenkhoxuat"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoanhap"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("makhonhap"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenkhonhap"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("loaiphieu"), tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_TEXT);		
		
			
		nRow++;
		rs.MoveNext();
	}
	
	if (nGroupTotal[13] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 13; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[13] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 13; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}


	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\MA_BANGKEPHIEUXUAT_TUKHO_DENTUTRUC_MAU22.xls"));
	
} 
int CFMExportSheetListFromStocktoCabinet::OnAddPMSExportSheetListForInsurance(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMExportSheetListFromStocktoCabinet::OnEditPMSExportSheetListForInsurance(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMExportSheetListFromStocktoCabinet::OnDeletePMSExportSheetListForInsurance(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPMSExportSheetListForInsurance(); 
 	}
	return 0;
}
int CFMExportSheetListFromStocktoCabinet::OnSavePMSExportSheetListForInsurance(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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
 		//OnPMSExportSheetListForInsuranceListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMExportSheetListFromStocktoCabinet::OnCancelPMSExportSheetListForInsurance(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	return 0;
} 
int CFMExportSheetListFromStocktoCabinet::OnPMSExportSheetListForInsuranceListLoadData(){
	return 0;
}

CString CFMExportSheetListFromStocktoCabinet::GetQueryString()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1, szWhere2, szPrice, szStorages, szCabinets;
	
	szWhere1.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), m_wndStock.GetItemText(i, 0));
		}
	}

	if (!szStorages.IsEmpty())
	{
		
		szWhere1.AppendFormat(_T(" and mt_storage_id IN(%s) "), szStorages);
		
	}

	for (int i = 0; i < m_wndCabinet.GetItemCount(); i++)
	{
		if (m_wndCabinet.GetCheck(i))
		{
			if (!szCabinets.IsEmpty())
				szCabinets += _T(", ");
			szCabinets.AppendFormat(_T("%s"), m_wndCabinet.GetItemText(i, 0));
		}
	}

	if (!szCabinets.IsEmpty())
	{
		
		szWhere1.AppendFormat(_T(" and mt_storage_to_id IN(%s) "), szCabinets);	
	}

szSQL.Format(_T(" SELECT * FROM") \
			_T(" (") \
			_T(" SELECT MT_ORDERNO                        AS sophieu,") \
			_T("   MT_ORDERDATE                           AS ngayyeucau,") \
			_T("   MT_ORDERDATE                           AS ngaylapphieu,") \
			_T("   mt_approveddate                        AS ngayduyet,") \
			_T("   hpo_docno                              AS hoso,") \
			_T("   GET_PATIENTNAME(hpo_docno)             AS tenbn,") \
			_T("   GET_OBJECTNAME(HPO_OBJECT_ID)          AS doituong,") \
			_T("   PRODUCT_code                           AS mathuoc,") \
			_T("   PRODUCT_NAME                           AS tenthuoc,") \
			_T("   product_classname                      AS hoatchat,") \
			_T("   product_uomname                        AS donvi,") \
			_T("   SUM(hpol_qtyissue)                     AS qtyissue,") \
			_T("   SUM((hpol_qtyissue)*product_unitprice) AS amount,") \
			_T("   MT_DEPARTMENT_ID                       AS khoaxuat,") \
			_T("   MT_STORAGE_ID                          AS khoxuat,") \
			_T("   GET_STORAGENAME(MT_STORAGE_ID)         AS tenkhoxuat,") \
			_T("   MT_DEPARTMENT_TO_ID                    AS khoanhap,") \
			_T("   MT_STORAGE_TO_ID                       AS makhonhap,") \
			_T("   GET_STORAGENAME(MT_STORAGE_TO_ID)      AS tenkhonhap,") \
			_T("   MT_DOCTYPE                             AS loaiphieu") \
			_T(" FROM HMS_PHARMAORDER") \
			_T(" LEFT JOIN HMS_PHARMAORDERLINE") \
			_T(" ON(hpol_docno   =hpo_docno") \
			_T(" AND hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN m_productitem_view") \
			_T(" ON(hpol_product_item_id=product_item_id)") \
			_T(" LEFT JOIN HMS_MEDICAL_TRANSACTION_VIEW") \
			_T(" ON(hmt_docno       =hpo_docno") \
			_T(" AND hmt_orderid    =hpo_orderid") \
			_T(" AND hmt_product_id =hpol_product_id )") \
			_T(" LEFT JOIN m_transaction") \
			_T(" ON (hmt_reftransaction_id=MT_TRANSACTION_ID)") \
			_T(" WHERE 1                  =1") \
			_T(" AND mt_status           IN('A') %s ") \
			_T(" AND mt_doctype       IN('CSO','CRO')") \
			_T(" AND hpol_line         > 0") \
			_T(" GROUP BY MT_ORDERNO,") \
			_T("   MT_ORDERDATE,") \
			_T("   mt_approveddate,") \
			_T("   MT_DEPARTMENT_TO_ID,") \
			_T("   hpo_docno,") \
			_T("   HPO_OBJECT_ID,") \
			_T("   PRODUCT_code,") \
			_T("   product_name,") \
			_T("   product_classname,") \
			_T("   product_uomname,") \
			_T("   hpol_line,") \
			_T("   product_unitprice,") \
			_T("   MT_DEPARTMENT_ID,") \
			_T("   MT_STORAGE_TO_ID,") \
			_T("   MT_STORAGE_ID,") \
			_T("   MT_DOCTYPE") \
			_T(" UNION ALL") \
			_T(" SELECT MT_ORDERNO                        AS sophieu,") \
			_T("   MT_ORDERDATE                           AS ngayyeucau,") \
			_T("   MT_ORDERDATE                           AS ngaylapphieu,") \
			_T("   mt_approveddate                        AS ngayduyet,") \
			_T("   hpo_docno                              AS hoso,") \
			_T("   GET_PATIENTNAME(hpo_docno)             AS tenbn,") \
			_T("   GET_OBJECTNAME(HPO_OBJECT_ID)          AS doituong,") \
			_T("   PRODUCT_code                           AS mathuoc,") \
			_T("   PRODUCT_NAME                           AS tenthuoc,") \
			_T("   product_classname                      AS hoatchat,") \
			_T("   product_uomname                        AS donvi,") \
			_T("   SUM(hpol_qtyissue)                     AS qtyissue,") \
			_T("   SUM((hpol_qtyissue)*product_unitprice) AS amount,") \
			_T("   MT_DEPARTMENT_ID                       AS khoaxuat,") \
			_T("   MT_STORAGE_ID                          AS khoxuat,") \
			_T("   GET_STORAGENAME(MT_STORAGE_ID)         AS tenkhoxuat,") \
			_T("   MT_DEPARTMENT_TO_ID                    AS khoanhap,") \
			_T("   MT_STORAGE_TO_ID                       AS makhonhap,") \
			_T("   GET_STORAGENAME(MT_STORAGE_TO_ID)      AS tenkhonhap,") \
			_T("   MT_DOCTYPE                             AS loaiphieu") \
			_T(" FROM HMS_IPHARMAORDER") \
			_T(" LEFT JOIN HMS_IPHARMAORDERLINE") \
			_T(" ON(hpol_docno   =hpo_docno") \
			_T(" AND hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN m_productitem_view") \
			_T(" ON(hpol_product_item_id=product_item_id)") \
			_T(" LEFT JOIN HMS_MEDICAL_TRANSACTION_VIEW") \
			_T(" ON(hmt_docno       =hpo_docno") \
			_T(" AND hmt_orderid    =hpo_orderid") \
			_T(" AND hmt_product_id =hpol_product_id )") \
			_T(" LEFT JOIN m_transaction") \
			_T(" ON (hmt_reftransaction_id=MT_TRANSACTION_ID)") \
			_T(" WHERE 1                  =1") \
			_T(" AND mt_status           IN('A') %s ") \
			_T(" AND mt_doctype       IN('CSO','CRO')") \
			_T(" AND hpol_line         > 0") \
			_T(" GROUP BY MT_ORDERNO,") \
			_T("   MT_ORDERDATE,") \
			_T("   mt_approveddate,") \
			_T("   MT_DEPARTMENT_TO_ID,") \
			_T("   hpo_docno,") \
			_T("   HPO_OBJECT_ID,") \
			_T("   PRODUCT_code,") \
			_T("   product_name,") \
			_T("   product_classname,") \
			_T("   product_uomname,") \
			_T("   hpol_line,") \
			_T("   product_unitprice,") \
			_T("   MT_DEPARTMENT_ID,") \
			_T("   MT_STORAGE_TO_ID,") \
			_T("   MT_STORAGE_ID,") \
			_T("   MT_DOCTYPE") \
			_T(" )") \
			_T(" ORDER BY sophieu, hoso, tenthuoc"), szWhere1, szWhere1);							

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CFMExportSheetListFromStocktoCabinet::GetQueryString1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1;
	szWhere0.Format(_T(" AND hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (!m_szStockKey.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND hpo_storage_id = %d"), ToInt(m_szStockKey));
		szWhere1.AppendFormat(_T(" AND mt_storage_id = %d"), ToInt(m_szStockKey));
	}
	if (!m_szTypeKey.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	}
	szSQL.Format(_T(" SELECT *") \
		_T(" FROM") \
		_T("   (SELECT CAST(hpo_orderid AS NVARCHAR2(15)) AS order_no,") \
		_T("	 Cast(0 AS NVARCHAR2(15)) AS document_no, ") \
		_T("     hpo_approvedate AS export_date,") \
		_T("     Get_patientname(hpo_docno) AS receiver,") \
		_T("     hpo_docno AS docno,") \
		_T("     hpo_deptid AS order_type,") \
		_T("     SUM(hpol_qtyorder * hpol_unitprice) AS amount,") \
		_T("     SUM(hpol_qtyorder *  (hpol_unitprice - product_vatprice)) AS realprofit, ") \
		_T("     hpo_deptid AS deptid,") \

		_T(" to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
		_T("     to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
		_T("     to_char(i.HFE_DATE, 'DD/MM/YYYY') as ngaytt") \

		_T("   FROM hms_ipharmaorder") \
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON ( hpo_orderid = hpol_orderid )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON (product_item_id   = hpol_product_item_id)") \

		_T("  LEFT JOIN hms_fee f ON (hpo_docno = f.hfe_docno AND hpo_orderid = f.hfe_orderid AND f.HFE_ORDERLINE = HPOL_ORDERLINEID)") \
		_T("   LEFT JOIN hms_fee_invoice i ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno)") \


		_T("   WHERE hpo_orderstatus = 'A' %s") \
		_T("   GROUP BY hpo_orderid,") \
		_T("     hpo_approvedate,") \
		_T("     hpo_docno,") \
		_T("     hpo_deptid, i.HFE_ADMITDATE, i.HFE_DISCHARGEDATE,i.HFE_DATE") \
		_T("   UNION ALL") \
		_T(" SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) AS order_no, ") \
		_T("	       Cast(0 AS NVARCHAR2(15)) AS document_no, ") \
		_T("           trunc_date(hpo_approvedate)                     AS export_date, ") \
		_T("           Get_patientname(hpo_docno)          AS receiver, ") \
		_T("           hpo_docno                           AS docno, ") \
		_T("           Get_doctype(hpo_doctype)            AS order_type, ") \
		_T("           SUM(hpol_qtyissue *  hpol_unitprice) AS amount, ") \
		_T("           SUM(hpol_qtyissue *  (hpol_unitprice - product_vatprice)), ") \
		_T("		   hpo_deptid AS deptid,")

		_T(" to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
		_T("     to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
		_T("     to_char(i.HFE_DATE, 'DD/MM/YYYY') as ngaytt") \
		


		_T(" FROM      hms_pharmaorder ") \
		_T(" LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = hpol_product_item_id)") \
		
		_T("  LEFT JOIN hms_fee f ON (hpo_docno = f.hfe_docno AND hpo_orderid = f.hfe_orderid AND f.HFE_ORDERLINE = HPOL_ORDERLINEID)") \
		_T("   LEFT JOIN hms_fee_invoice i ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno)") \
		

		_T(" WHERE     hpo_orderstatus = 'A' %s") \
		_T(" GROUP     BY hpo_orderid, ") \
		_T("              hpo_approvedate, ") \
		_T("              hpo_docno, ") \
		_T("              hpo_doctype, ") \
		_T("     hpo_deptid, i.HFE_ADMITDATE, i.HFE_DISCHARGEDATE,i.HFE_DATE") \
		_T("   UNION ALL") \
		_T(" SELECT    mt_orderno AS order_no, ") \
		_T("	       mt_documentno AS document_no, ") \
		_T("           mt_approveddate, ") \
		_T("           mt_department_to_id AS receiver, ") \
		_T("           0, ") \
		_T("           CASE WHEN mt_doctype = 'DMO' THEN ") \
		_T("               CASE WHEN mt_ordertype = 'M' THEN Cast(N'Dự trù PTTT' AS NVARCHAR2(128))") \
		_T("					WHEN mt_ordertype = 'B' THEN Cast(N'Đầu giường' AS NVARCHAR2(128)) ") \
		_T("               ELSE Cast(N'Dự trù thuốc, vật tư' AS NVARCHAR2(128))") \
		_T("               END ") \
		_T("             WHEN mt_doctype = 'DDO' THEN Cast(N'Cấp VTTTH' AS NVARCHAR2(128)) ") \
		_T("       ELSE Get_doctype(mt_doctype)") \
		_T("     END,") \
		_T("	SUM(mtl_qtydelivery * mtl_saleprice), ") \
		_T("	SUM(mtl_qtydelivery * (mtl_saleprice - product_vatprice)), ") \
		_T("           mt_department_to_id, NULL, NULL, NULL ") \
		_T("   FROM m_transaction") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON (product_item_id = mtl_product_item_id)") \
		_T("   LEFT JOIN m_storagelist") \
		_T("   ON ( msl_storage_id = mt_storage_to_id )") \
		_T("   WHERE mt_status     = 'A'") \
		_T("   AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO') %s") \
		_T("   GROUP BY mt_orderno, mt_documentno,") \
		_T("     mt_approveddate,") \
		_T("     mt_doctype,") \
		_T("     mt_department_to_id,") \
		_T("     mt_storage_to_id,") \
		_T("     mt_partner_id,") \
		_T("     mt_ordertype,") \
		_T("     msl_category") \
		_T("   )") \
		_T(" WHERE amount > 0") \
		_T(" ORDER BY ") \
		_T(" document_no"), szWhere0, szWhere0, szWhere1);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
BEGIN_MESSAGE_MAP(CFMExportSheetListFromStocktoCabinet, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CFMExportSheetListFromStocktoCabinet::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
void CFMExportSheetListFromStocktoCabinet::OnStockSearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndStock);
	newPopup->ShowPopup(&m_wndStock);
}
void CFMExportSheetListFromStocktoCabinet::OnCabinetSearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndCabinet);
	newPopup->ShowPopup(&m_wndCabinet);
}
int CFMExportSheetListFromStocktoCabinet::OnStockListCheckAll()
{
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (!m_wndStock.GetCheck(i))
			m_wndStock.SetCheck(i, TRUE);
	}

	return 0;
}
int CFMExportSheetListFromStocktoCabinet::OnStockListUnCheckAll()
{
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
			m_wndStock.SetCheck(i, FALSE);
	}

	return 0;
}

int CFMExportSheetListFromStocktoCabinet::OnCabinetListCheckAll()
{
	for (int i = 0; i < m_wndCabinet.GetItemCount(); i++)
	{
		if (!m_wndCabinet.GetCheck(i))
			m_wndCabinet.SetCheck(i, TRUE);
	}

	return 0;
}
int CFMExportSheetListFromStocktoCabinet::OnCabinetListUnCheckAll()
{
	for (int i = 0; i < m_wndCabinet.GetItemCount(); i++)
	{
		if (m_wndCabinet.GetCheck(i))
			m_wndCabinet.SetCheck(i, FALSE);
	}

	return 0;
}
CString CFMExportSheetListFromStocktoCabinet::GetQueryString2()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1, szWhere2, szPrice, szStorages, szCabinets;
	
	szWhere1.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), m_wndStock.GetItemText(i, 0));
		}
	}

	if (!szStorages.IsEmpty())
	{
		
		szWhere1.AppendFormat(_T(" and mt_storage_id IN(%s) "), szStorages);
		
	}

	for (int i = 0; i < m_wndCabinet.GetItemCount(); i++)
	{
		if (m_wndCabinet.GetCheck(i))
		{
			if (!szCabinets.IsEmpty())
				szCabinets += _T(", ");
			szCabinets.AppendFormat(_T("%s"), m_wndCabinet.GetItemText(i, 0));
		}
	}

	if (!szCabinets.IsEmpty())
	{
		
		szWhere1.AppendFormat(_T(" and mt_storage_to_id IN(%s) "), szCabinets);	
	}

szSQL.Format(_T(" SELECT MT_ORDERNO                        AS sophieu,") \
			_T("     MT_ORDERDATE                           AS ngayyeucau,") \
			_T("     MT_ORDERDATE                           AS ngaylapphieu,") \
			_T("     mt_approveddate                        AS ngayduyet,") \
			_T("     hmt_docno                              AS hoso,") \
			_T("     GET_PATIENTNAME(hmt_docno)             AS tenbn,") \
			_T("     GET_OBJECTNAME(hmt_objectid)           AS doituong,") \
			_T("     PRODUCT_code                           AS mathuoc,") \
			_T("     PRODUCT_NAME                           AS tenthuoc,") \
			_T("     product_classname                      AS hoatchat,") \
			_T("     product_uomname                        AS donvi,") \
			_T("     SUM(mtl_qtydelivery)                   AS qtyissue,") \
			_T("     SUM((mtl_qtydelivery)*mtl_taxprice)    AS amount,") \
			_T("     MT_DEPARTMENT_ID                       AS khoaxuat,") \
			_T("     MT_STORAGE_ID                          AS khoxuat,") \
			_T("     GET_STORAGENAME(MT_STORAGE_ID)         AS tenkhoxuat,") \
			_T("     MT_DEPARTMENT_TO_ID                    AS khoanhap,") \
			_T("     MT_STORAGE_TO_ID                       AS makhonhap,") \
			_T("     GET_STORAGENAME(MT_STORAGE_TO_ID)      AS tenkhonhap,") \
			_T("     MT_DOCTYPE                             AS loaiphieu") \
			_T("   FROM m_transactionline") \
			_T("   LEFT JOIN m_transaction ON (MTL_TRANSACTION_ID=MT_TRANSACTION_ID)") \
			_T("   LEFT JOIN m_productitem_view") \
			_T("   ON (product_item_id = mtl_product_item_id)") \
			_T("   LEFT JOIN HMS_MEDICAL_TRANSACTION_VIEW") \
			_T("   ON(hmt_reftransaction_id=MT_TRANSACTION_ID AND hmt_suppproduct_id=mtl_product_id)  ") \
			_T("   WHERE 1                  =1") \
			_T("   AND mt_status           IN('A') %s ") \
			_T("   AND mt_doctype       IN('CSO','CRO') ") \
			_T("   GROUP BY MT_ORDERNO,") \
			_T("     MT_ORDERDATE,") \
			_T("     mt_approveddate,") \
			_T("     MT_DEPARTMENT_TO_ID,") \
			_T("     hmt_docno,") \
			_T("     hmt_objectid,") \
			_T("     PRODUCT_code,") \
			_T("     product_name,") \
			_T("     product_classname,") \
			_T("     product_uomname, ") \
			_T("     MT_DEPARTMENT_ID,") \
			_T("     MT_STORAGE_TO_ID,") \
			_T("     MT_STORAGE_ID,") \
			_T("     MT_DOCTYPE") \
			_T("  ORDER BY MT_ORDERNO, hmt_docno, PRODUCT_NAME"), szWhere1);							

	//_msg(_T("%s"), szSQL);
	return szSQL;
}