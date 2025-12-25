#include "stdafx.h"
#include "MASExportSheetListForInsurance.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMASExportSheetListForInsurance *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMASExportSheetListForInsurance *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMASExportSheetListForInsurance* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CMASExportSheetListForInsurance *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CMASExportSheetListForInsurance *)pWnd)->OnStockAddNew();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CMASExportSheetListForInsurance *)pWnd)->OnTypeLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMASExportSheetListForInsurance *pVw = (CMASExportSheetListForInsurance *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMASExportSheetListForInsurance *pVw = (CMASExportSheetListForInsurance *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CMASExportSheetListForInsurance*)pWnd)->OnAddPMSExportSheetListForInsurance();
} 
static int _OnEditPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CMASExportSheetListForInsurance*)pWnd)->OnEditPMSExportSheetListForInsurance();
} 
static int _OnDeletePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CMASExportSheetListForInsurance*)pWnd)->OnDeletePMSExportSheetListForInsurance();
} 
static int _OnSavePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CMASExportSheetListForInsurance*)pWnd)->OnSavePMSExportSheetListForInsurance();
} 
static int _OnCancelPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CMASExportSheetListForInsurance*)pWnd)->OnCancelPMSExportSheetListForInsurance();
}
static long _OnExportTypeLoadDataFnc(CWnd *pWnd){
	return ((CMASExportSheetListForInsurance *)pWnd)->OnExportTypeLoadData();
}
CMASExportSheetListForInsurance::CMASExportSheetListForInsurance(CWnd *pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CMASExportSheetListForInsurance::~CMASExportSheetListForInsurance()
{
}
void CMASExportSheetListForInsurance::OnCreateComponents()
{
	m_wndExportSheetListForInsurance.Create(this, _T("Export Sheet List"), 5, 5, 575, 119);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.Create(this,95, 60, 290, 85); 
	m_wndTypeLabel.Create(this, _T("Loại hàng"), 295, 60, 375, 85);
	m_wndType.Create(this,380, 60, 570, 85); 
	m_wndExportTypeLabel.Create(this, _T("Loại phiếu"), 10, 90, 90, 115);
	m_wndExportType.Create(this,95, 90, 570, 115); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 385, 125, 495, 150);
	m_wndExport.Create(this, _T("&ExportXLS"), 500, 125, 575, 150);

}
void CMASExportSheetListForInsurance::OnInitializeComponents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndExportType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndExportType.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

}
void CMASExportSheetListForInsurance::OnSetWindowEvents(){
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
	m_wndExportType.SetEvent(WE_LOADDATA, _OnExportTypeLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CMASExportSheetListForInsurance::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndExportType.GetDlgCtrlID(), m_szExportTypeKey);
	//DDX_Check(pDX, m_wndByServPrice.GetDlgCtrlID(), m_nByServPrice);
}
void CMASExportSheetListForInsurance::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMASExportSheetListForInsurance::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMASExportSheetListForInsurance::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_nByServPrice = 0;
	m_szExportTypeKey.Empty();
}
int CMASExportSheetListForInsurance::SetMode(int nMode){
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
/*void CMASExportSheetListForInsurance::OnFromDateChange(){
	
} */
/*void CMASExportSheetListForInsurance::OnFromDateSetfocus(){
	
} */
/*void CMASExportSheetListForInsurance::OnFromDateKillfocus(){
	
} */
int CMASExportSheetListForInsurance::OnFromDateCheckValue()
{
	return 0;
} 
/*void CMASExportSheetListForInsurance::OnToDateChange(){
	
} */
/*void CMASExportSheetListForInsurance::OnToDateSetfocus(){
	
} */
/*void CMASExportSheetListForInsurance::OnToDateKillfocus(){
	
} */
int CMASExportSheetListForInsurance::OnToDateCheckValue(){
	return 0;
} 
void CMASExportSheetListForInsurance::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMASExportSheetListForInsurance::OnStockSelendok(){
	 
}
/*void CMASExportSheetListForInsurance::OnStockSetfocus(){
	
}*/
/*void CMASExportSheetListForInsurance::OnStockKillfocus(){
	
}*/

long CMASExportSheetListForInsurance::OnStockLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}
/*void CMASExportSheetListForInsurance::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long CMASExportSheetListForInsurance::OnTypeLoadData(){
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

long CMASExportSheetListForInsurance::OnExportTypeLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExportType.IsSearchKey() && !m_szExportTypeKey.IsEmpty())
	{
	 szWhere.Format(_T(" AND addt_doctype_id = '%s' "), m_szExportTypeKey);
	}
	m_wndExportType.DeleteAllItems(); 
	int nCount = 0;	

	szSQL.Format(_T(" SELECT addt_doctype_id AS id,") \
	_T("   addt_name            AS name") \
	_T(" FROM ad_doctype") \
	_T(" WHERE addt_isactive  ='Y' %s ") \
	_T(" AND addt_doctype_id IN('DDO', 'DPO','DMO', 'CSO')") \
	_T(" ORDER BY addt_line,") \
	_T(" addt_doctype_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndExportType.AddItems
			(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

void CMASExportSheetListForInsurance::OnPrintPreviewSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrintPreview.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("In mẫu 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("In mẫu 2 (tài chính)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)

	{
		case 1:
			OnPrintPreviewSelect_V1();
			break;
		case 2:
			OnPrintPreviewSelect_V2();
			break;
	}

}

void CMASExportSheetListForInsurance::OnPrintPreviewSelect_V1()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szSysDate, szRptName, szPreviousType, szCurrentType;
	CRecord rs(&pMF->m_db);
	if(m_szStockKey == int2str(12) || m_szStockKey == int2str(13))
	{
		szSQL = GetQueryString1();
	}
	else
	{
		szSQL = GetQueryString();
	}
	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0, nGroup = 0, nTotal2 = 0, nGroup2 = 0;
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	szRptName.Format(_T("Reports/HMS/MAS_BANGKEPHIEUXUAT.RPT"));
	if (!rpt.Init(szRptName))
		return;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	if (!m_szStockKey.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStock.GetCurrent(1));
	CReportSection *rptDetail;
	while (!rs.IsEOF()){
// 		rs.GetValue(_T("order_type"), szCurrentType);
// 		if (szCurrentType != szPreviousType)
// 		{
// 			if (nGroup > 0)
// 			{
// 				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
// 				tmpStr.Format(_T("%f"), nGroup);
// 				rptDetail->SetValue(_T("s7"), tmpStr);
// 				nTotal += nGroup;
// 				nGroup = 0;
// 			}
// 			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
// 			rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("order_type")));
// 			szPreviousType = szCurrentType;
// 		}
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("document_no"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("export_date"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		tmpStr.Empty();
		rs.GetValue(_T("receiver"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("order_type"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("amount"), nAmount);
		nGroup += nAmount;
		rptDetail->SetValue(_T("7"), double2str(nAmount));
		rs.GetValue(_T("order_no"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("realprofit"), nAmount);
		nGroup2 += nAmount;
		rptDetail->SetValue(_T("9"), double2str(nAmount));
		rs.MoveNext();
	}
	if (nGroup > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%f"), nGroup);
		rptDetail->SetValue(_T("s7"), tmpStr);
		tmpStr.Format(_T("%f"), nGroup2);
		rptDetail->SetValue(_T("s9"), tmpStr);
		nTotal += nGroup;
		nTotal2 += nGroup2;
		nGroup = 0;
		nGroup2 = 0;
	}
// 	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
// 	tmpStr.Format(_T("%s"), _T("Tổng cộng"));
// 	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
// 	//FormatCurrency(nTotal, tmpStr);
// 	tmpStr.Format(_T("%f"), nTotal);
// 	rptDetail->SetValue(_T("s7"), tmpStr);
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CMASExportSheetListForInsurance::OnExportSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Xuất ra Excel theo phiếu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Xuất ra Excel theo khoa"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect_V1();
			break;
		case 2:
			OnExportSelect_V2();
			break;		

	}
}

void CMASExportSheetListForInsurance::OnExportSelect_V1()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPreviousType, szCurrentType;
	int nCol = 0, nRow = 0, nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0, nGroup = 0, nTotal2 = 0, nGroup2 = 0;
	if(m_szStockKey == int2str(12) || m_szStockKey == int2str(13))
	{
		szSQL = GetQueryString1();
	}
	else
	{
		szSQL = GetQueryString();
	}
	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 36);
	xls.SetColumnWidth(5, 25);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);

	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 9);
	xls.SetCellMergedColumns(nCol, nRow + 3, 9);
	xls.SetCellMergedColumns(nCol, nRow + 4, 4);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("BẢNG KÊ PHIẾU XUẤT"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	
	tmpStr.Format(_T("Kho : %s"), m_wndStock.GetCurrent(1));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, false, 11);

	//Column Heading
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số phiếu"));
	arrCol.Add(_T("Ngày xuất"));
	arrCol.Add(_T("Đơn vị nhận hàng"));
	arrCol.Add(_T("Mã số"));
	//arrCol.Add(_T("Họ và tên"));
	arrCol.Add(_T("Số tiền"));
	arrCol.Add(_T("Ghi chú"));
	arrCol.Add(_T("Khoa"));
	arrCol.Add(_T("Thực lãi"));
	arrCol.Add(_T("Số Hồ sơ"));

	arrCol.Add(_T("Ngày vào"));
	arrCol.Add(_T("Ngày ra"));
	arrCol.Add(_T("Ngày TT"));
	nRow = 5;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol+i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	nRow = 6;
	while (!rs.IsEOF()){
		rs.GetValue(_T("order_type"), szCurrentType);
		if (szCurrentType != szPreviousType)
		{
			if (nGroup > 0)
			{
				xls.SetCellText(4, nRow, _T("Tổng nhóm"), 4098, true);
				tmpStr.Format(_T("%f"), nGroup);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
				tmpStr.Format(_T("%f"), nGroup2);
				xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
				nTotal += nGroup;
				nTotal2 += nGroup2;
				nGroup = 0;
				nGroup2 = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(0, nRow, 6);
			xls.SetCellText(0, nRow, rs.GetValue(_T("order_type")), FMT_TEXT, true);
			nRow++;
			szPreviousType = szCurrentType;
		}
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("document_no"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("export_date"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, CDate::Convert(tmpStr, yyyymmdd , ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("receiver"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("id"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);
		rs.GetValue(_T("amount"), nAmount);
		nGroup += nAmount;
		xls.SetCellText(nCol + 5, nRow, double2str(nAmount), FMT_NUMBER1);
		rs.GetValue(_T("order_no"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("realprofit"), nAmount);
		nGroup2 += nAmount;
		xls.SetCellText(nCol + 8, nRow, double2str(nAmount), FMT_NUMBER1);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT | FMT_CENTER);


		rs.GetValue(_T("ngayvao"), tmpStr);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		
		rs.GetValue(_T("ngayra"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		
		rs.GetValue(_T("ngaytt"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		nRow++;
		rs.MoveNext();
	}
	if (nGroup > 0)
	{
		xls.SetCellText(4, nRow, _T("Tổng nhóm"), 4098, true);
		tmpStr.Format(_T("%f"), nGroup);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nGroup2);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
		nTotal += nGroup;
		nTotal2 += nGroup2;
		nRow++;
	}
	if (nTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("Tổng cộng"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nTotal2);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Xuat cho BH.xls"));
	
} 
int CMASExportSheetListForInsurance::OnAddPMSExportSheetListForInsurance(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CMASExportSheetListForInsurance::OnEditPMSExportSheetListForInsurance(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CMASExportSheetListForInsurance::OnDeletePMSExportSheetListForInsurance(){
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
int CMASExportSheetListForInsurance::OnSavePMSExportSheetListForInsurance(){
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
int CMASExportSheetListForInsurance::OnCancelPMSExportSheetListForInsurance(){
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
int CMASExportSheetListForInsurance::OnPMSExportSheetListForInsuranceListLoadData(){
	return 0;
}

CString CMASExportSheetListForInsurance::GetQueryString()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1, szWhere2, szPrice;
	szWhere0.Format(_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere2.Format(_T(" AND so_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (!m_szStockKey.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND hpo_storage_id = %d"), ToInt(m_szStockKey));
		szWhere1.AppendFormat(_T(" AND mt_storage_id = %d"), ToInt(m_szStockKey));
		szWhere2.AppendFormat(_T(" AND so_storage_id = %d"), ToInt(m_szStockKey));
	}
	if (!m_szTypeKey.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	}

	if (!m_szExportTypeKey.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND 0>1"));
		szWhere1.AppendFormat(_T(" AND mt_doctype = '%s'"), m_szExportTypeKey);
		szWhere2.AppendFormat(_T(" AND 0>1"));
	
	}
	szSQL.Format(_T("SELECT * FROM ( SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) AS order_no, ") \
				_T("	       Cast(0 AS NVARCHAR2(15)) AS document_no, ") \
				_T("           trunc_date(hpo_approvedate)                     AS export_date, ") \
				_T("           Get_patientname(hpo_docno)          AS receiver, ") \
				_T("           hpo_docno                           AS docno, ") \
				_T("           Get_doctype(hpo_doctype)            AS order_type, ") \
				_T("           SUM(hpol_qtyissue *  hpol_unitprice) AS amount, ") \
				_T("           SUM(hpol_qtyissue *  (hpol_unitprice - product_vatprice)) AS realprofit, ") \
				_T("		   hpo_deptid AS deptid,")

				_T(" to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
				_T("     to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
				_T("     to_char(i.HFE_DATE, 'DD/MM/YYYY') as ngaytt") \

				_T(" FROM      hms_pharmaorder ") \
				_T(" LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = hpol_product_item_id)") \

				_T("  LEFT JOIN hms_fee f ON (hpo_docno = f.hfe_docno AND hpo_orderid = f.hfe_orderid AND f.HFE_ORDERLINE = HPOL_ORDERLINEID)") \
				_T("  LEFT JOIN hms_fee_invoice i ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno)") \


				_T(" WHERE     hpo_orderstatus = 'A' %s") \
				_T(" GROUP     BY hpo_orderid, ") \
				_T("              hpo_approvedate, ") \
				_T("              hpo_docno, ") \
				_T("              hpo_doctype, ") \
				_T("     hpo_deptid, i.HFE_ADMITDATE, i.HFE_DISCHARGEDATE,i.HFE_DATE") \
				_T(" UNION ALL ") \
				_T(" SELECT    mt_orderno AS order_no, ") \
				_T("	       mt_documentno AS document_no, ") \
				_T("           trunc_date(mt_approveddate), ") \
				_T("           mt_department_to_id AS receiver, ") \
				_T("           0, ") \
				_T("           CASE WHEN mt_doctype = 'DMO' THEN ") \
				_T("               CASE WHEN mt_ordertype = 'M' THEN Cast(N'Dự trù PTTT' AS NVARCHAR2(128))") \
				_T("					WHEN mt_ordertype = 'B' THEN Cast(N'Đầu giường' AS NVARCHAR2(128)) ") \
				_T("               ELSE Cast(N'Dự trù thuốc, vật tư' AS NVARCHAR2(128))") \
				_T("               END ") \
				_T("             WHEN mt_doctype = 'DDO' THEN Cast(N'Cấp VTTTH' AS NVARCHAR2(128)) ") \
				_T("           ELSE Get_doctype(mt_doctype) ") \
				_T("           END, ") \
				_T("           CASE WHEN mt_storage_id = 15 AND mt_doctype IN('BOO', 'DOO', 'EOH', 'EOO', 'EXO', 'EXP', 'LOO', 'SLO', 'MOV') THEN SUM(mtl_qtydelivery * (mtl_unitprice + (mtl_unitprice * product_taxrate))) ") \
				_T("           ELSE SUM(mtl_qtydelivery * mtl_saleprice) END, ") \
				_T("           CASE WHEN mt_storage_id = 15 AND mt_doctype IN('BOO', 'DOO', 'EOH', 'EOO', 'EXO', 'EXP', 'LOO', 'SLO', 'MOV') THEN SUM(mtl_qtydelivery * ((mtl_unitprice + (mtl_unitprice * product_taxrate)) - product_vatprice)) ") \
				_T("           ELSE SUM(mtl_qtydelivery * (mtl_saleprice - product_vatprice)) END, ") \
				_T("		   mt_department_to_id, NULL, NULL, NULL") \
				_T(" FROM      m_transaction ") \
				_T(" LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = mtl_product_item_id)") \
				_T(" LEFT JOIN m_storagelist ON ( msl_storage_id = mt_storage_to_id ) ") \
				//_T(" WHERE     mt_status = 'A' AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO') %s") \//
				_T(" WHERE     mt_status = 'A' AND mt_doctype NOT IN ('DRO', 'CON', 'MRO') %s") \
				_T(" GROUP     BY mt_orderno, mt_documentno, ") \
				_T("              mt_approveddate, ") \
				_T("              mt_doctype, ") \
				_T("              mt_department_to_id, ") \
				_T("              mt_storage_id, mt_storage_to_id, ") \
				_T("              mt_partner_id, ") \
				_T("              mt_ordertype, ") \
				_T("              msl_category ") \
				_T(" UNION ALL")
				//Xuất ký gửi thay số phiếu = số hóa đơn ký gửi nhập kho
				_T(" SELECT    po_orderno AS order_no, ") \
				_T("	       mt_documentno AS document_no, ") \
				_T(" trunc_date(mt_approveddate),") \
				_T(" TRIM(mt_department_to_id || ' ' ||") \
				_T(" CASE") \
				_T(" WHEN mt_doctype = 'CON'") \
				_T(" THEN get_patientname(pol_docno)") \
				_T(" ELSE get_doctype(mt_doctype) END) AS receiver,") \
				_T(" pol_docno,") \
				_T(" CAST(N'Xuất ký gửi' AS NVARCHAR2(128)),") \
				_T("  CASE") \
				_T("       WHEN pol_unitprice > 0") \
				_T("       THEN SUM(pol_qty * pol_unitprice)") \
				_T("       ELSE") \
				_T("         SUM(pol_qty * (SELECT DISTINCT hpol_unitprice") \
				_T("         FROM hms_pharmaorderline_view2") \
				_T("         WHERE hpol_docno             = pol_docno") \
				_T("         AND hpol_orderid             = pol_orderid") \
				_T("         AND hpol_product_id          = pol_product_id") \
				_T("         AND (hpol_unitprice          = pol_unitprice") \
				_T("         OR COALESCE(pol_unitprice,0) =0)") \
				_T("         ))") \
				_T("     END AS pol_unitprice,") \
				_T("  CASE") \
				_T("       WHEN pol_unitprice > 0") \
				_T("       THEN SUM(pol_qty * (pol_unitprice - product_vatprice))") \
				_T("       ELSE") \
				_T("         SUM(pol_qty * ((SELECT DISTINCT hpol_unitprice") \
				_T("         FROM hms_pharmaorderline_view2") \
				_T("         WHERE hpol_docno             = pol_docno") \
				_T("         AND hpol_orderid             = pol_orderid") \
				_T("         AND hpol_product_id          = pol_product_id") \
				_T("         AND (hpol_unitprice          = pol_unitprice") \
				_T("         OR COALESCE(pol_unitprice,0) =0)") \
				_T("         ) - product_vatprice))") \
				_T("     END,") \
				_T("   CASE WHEN mt_department_to_id IS NOT NULL THEN mt_department_to_id ELSE CAST('TYC' AS NVARCHAR2(3)) END AS deptid,") \

					//_T(" to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
					//_T("     to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
					//_T("     to_char(i.HFE_DATE, 'DD/MM/YYYY') as ngaytt") \//
				_T("     NULL, NULL, NULL") \

				_T(" FROM purchase_orderline2") \
				_T(" LEFT JOIN m_transaction ON(mt_transaction_id = pol_transaction_id)") \
				_T(" LEFT JOIN PURCHASE_ORDER ON (PO_PURCHASE_ORDER_ID=MT_EXPENSE_ID)") \
				_T(" LEFT JOIN m_productitem_view3 ON(pol_product_item_id=product_item_id)") \
				
				//_T(" LEFT JOIN hms_fee f ON (pol_docno = f.hfe_docno AND pol_orderid = f.hfe_orderid AND f.HFE_ORDERLINE = HPOL_ORDERLINEID)") \
				//_T("   LEFT JOIN hms_fee_invoice i ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno)  ") \
			


				_T(" WHERE mt_status     = 'A'") \
				_T(" AND mt_doctype IN ('CON') %s") \
				_T(" GROUP BY") \
				_T(" po_orderno, mt_documentno,") \
				_T(" trunc_date(mt_approveddate),") \
				_T(" pol_docno,") \
				_T(" mt_doctype,") \
				_T(" mt_department_to_id,") \
				_T(" mt_storage_to_id,") \
				_T(" mt_partner_id,") \
				_T(" mt_ordertype,") \
				_T(" pol_unitprice,  NULL, NULL, NULL ") \
				_T(" UNION ALL") \
				_T(" SELECT") \
				_T(" so_orderno AS orderno,") \
				_T(" so_documentno AS documentno,") \
				_T(" trunc_date(so_approveddate),") \
				_T(" so_partnername,") \
				_T(" SO_DOCNO,") \
				_T(" get_doctype(so_doctype),") \
				_T(" SUM(sol_qtydelivery * sol_unitprice),") \
				_T(" SUM(sol_qtydelivery * (sol_unitprice - product_vatprice)),") \
				_T(" CAST('0' AS NVARCHAR2(1)), NULL, NULL, NULL") \
				_T(" FROM sale_order") \
				_T(" LEFT JOIN sale_orderline ON (so_sale_order_id = sol_sale_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON ( product_item_id = sol_product_item_id)") \
				_T(" WHERE so_status = 'A' %s") \
				_T(" GROUP BY") \
				_T(" so_orderno,") \
				_T(" so_documentno,") \
				_T(" so_approveddate,") \
				_T(" so_partnername,") \
				_T(" so_doctype, SO_DOCNO") \
				_T(" ) ") \
				_T(" WHERE amount > 0") \
				_T(" ORDER BY document_no"),szWhere0, szWhere1, szWhere1, szWhere2);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CMASExportSheetListForInsurance::GetQueryString1(){
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
		//_T("   AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO') %s") \//
		_T("   AND mt_doctype NOT IN ('DRO', 'CON', 'MRO') %s") \
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
BEGIN_MESSAGE_MAP(CMASExportSheetListForInsurance, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CMASExportSheetListForInsurance::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}

void CMASExportSheetListForInsurance::OnExportSelect_V2()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPreviousType, szCurrentType;
	int nCol = 0, nRow = 0, nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0, nGroup = 0, nTotal2 = 0, nGroup2 = 0;
	if(m_szStockKey == int2str(12) || m_szStockKey == int2str(13))
	{
		szSQL = GetQueryString1_V2();
	}
	else
	{
		szSQL = GetQueryString_V2();
	}
	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 36);
	xls.SetColumnWidth(5, 25);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);

	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 9);
	xls.SetCellMergedColumns(nCol, nRow + 3, 9);
	xls.SetCellMergedColumns(nCol, nRow + 4, 4);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("BẢNG KÊ PHIẾU XUẤT"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	
	tmpStr.Format(_T("Kho : %s"), m_wndStock.GetCurrent(1));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, false, 11);

	//Column Heading
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số phiếu"));
	arrCol.Add(_T("Ngày xuất"));
	arrCol.Add(_T("Đơn vị nhận hàng"));
	arrCol.Add(_T("Mã số"));
	//arrCol.Add(_T("Họ và tên"));
	arrCol.Add(_T("Số tiền"));
	arrCol.Add(_T("Ghi chú"));
	arrCol.Add(_T("Khoa"));
	arrCol.Add(_T("Thực lãi"));
	arrCol.Add(_T("Số Hồ sơ"));

	arrCol.Add(_T("Ngày vào"));
	arrCol.Add(_T("Ngày ra"));
	arrCol.Add(_T("Ngày TT"));
	nRow = 5;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol+i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	nRow = 6;
	while (!rs.IsEOF()){
		rs.GetValue(_T("deptid"), szCurrentType);
		if (szCurrentType != szPreviousType)
		{
			if (nGroup > 0)
			{
				xls.SetCellText(4, nRow, _T("Tổng nhóm"), 4098, true);
				tmpStr.Format(_T("%f"), nGroup);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
				tmpStr.Format(_T("%f"), nGroup2);
				xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
				nTotal += nGroup;
				nTotal2 += nGroup2;
				nGroup = 0;
				nGroup2 = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(0, nRow, 6);
			xls.SetCellText(0, nRow, rs.GetValue(_T("deptid")), FMT_TEXT, true);
			nRow++;
			szPreviousType = szCurrentType;
		}
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("document_no"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("export_date"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, CDate::Convert(tmpStr, yyyymmdd , ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("receiver"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("id"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);
		rs.GetValue(_T("amount"), nAmount);
		nGroup += nAmount;
		xls.SetCellText(nCol + 5, nRow, double2str(nAmount), FMT_NUMBER1);
		rs.GetValue(_T("order_no"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("realprofit"), nAmount);
		nGroup2 += nAmount;
		xls.SetCellText(nCol + 8, nRow, double2str(nAmount), FMT_NUMBER1);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT | FMT_CENTER);


		rs.GetValue(_T("ngayvao"), tmpStr);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		
		rs.GetValue(_T("ngayra"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		
		rs.GetValue(_T("ngaytt"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		nRow++;
		rs.MoveNext();
	}
	if (nGroup > 0)
	{
		xls.SetCellText(4, nRow, _T("Tổng nhóm"), 4098, true);
		tmpStr.Format(_T("%f"), nGroup);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nGroup2);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
		nTotal += nGroup;
		nTotal2 += nGroup2;
		nRow++;
	}
	if (nTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("Tổng cộng"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nTotal2);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Xuat cho BH_V2.xls"));
	
} 

CString CMASExportSheetListForInsurance::GetQueryString_V2()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1, szWhere2, szPrice;
	szWhere0.Format(_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere2.Format(_T(" AND so_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (!m_szStockKey.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND hpo_storage_id = %d"), ToInt(m_szStockKey));
		szWhere1.AppendFormat(_T(" AND mt_storage_id = %d"), ToInt(m_szStockKey));
		szWhere2.AppendFormat(_T(" AND so_storage_id = %d"), ToInt(m_szStockKey));
	}
	if (!m_szTypeKey.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	}

	if (!m_szExportTypeKey.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND 0>1"));
		szWhere1.AppendFormat(_T(" AND mt_doctype = '%s'"), m_szExportTypeKey);
		szWhere2.AppendFormat(_T(" AND 0>1"));
	
	}
	szSQL.Format(_T("SELECT * FROM ( SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) AS order_no, ") \
				_T("	       Cast(0 AS NVARCHAR2(15)) AS document_no, ") \
				_T("           trunc_date(hpo_approvedate)                     AS export_date, ") \
				_T("           Get_patientname(hpo_docno)          AS receiver, ") \
				_T("           hpo_docno                           AS docno, ") \
				_T("           Get_doctype(hpo_doctype)            AS order_type, ") \
				_T("           SUM(hpol_qtyissue *  hpol_unitprice) AS amount, ") \
				_T("           SUM(hpol_qtyissue *  (hpol_unitprice - product_vatprice)) AS realprofit, ") \
				_T("		   hpo_deptid AS deptid,")

				_T(" to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
				_T("     to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
				_T("     to_char(i.HFE_DATE, 'DD/MM/YYYY') as ngaytt") \

				_T(" FROM      hms_pharmaorder ") \
				_T(" LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = hpol_product_item_id)") \

				_T("  LEFT JOIN hms_fee f ON (hpo_docno = f.hfe_docno AND hpo_orderid = f.hfe_orderid AND f.HFE_ORDERLINE = HPOL_ORDERLINEID)") \
				_T("  LEFT JOIN hms_fee_invoice i ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno)") \


				_T(" WHERE     hpo_orderstatus = 'A' %s") \
				_T(" GROUP     BY hpo_orderid, ") \
				_T("              hpo_approvedate, ") \
				_T("              hpo_docno, ") \
				_T("              hpo_doctype, ") \
				_T("     hpo_deptid, i.HFE_ADMITDATE, i.HFE_DISCHARGEDATE,i.HFE_DATE") \
				_T(" UNION ALL ") \
				_T(" SELECT    mt_orderno AS order_no, ") \
				_T("	       mt_documentno AS document_no, ") \
				_T("           trunc_date(mt_approveddate), ") \
				_T("           mt_department_to_id AS receiver, ") \
				_T("           0, ") \
				_T("           CASE WHEN mt_doctype = 'DMO' THEN ") \
				_T("               CASE WHEN mt_ordertype = 'M' THEN Cast(N'Dự trù PTTT' AS NVARCHAR2(128))") \
				_T("					WHEN mt_ordertype = 'B' THEN Cast(N'Đầu giường' AS NVARCHAR2(128)) ") \
				_T("               ELSE Cast(N'Dự trù thuốc, vật tư' AS NVARCHAR2(128))") \
				_T("               END ") \
				_T("             WHEN mt_doctype = 'DDO' THEN Cast(N'Cấp VTTTH' AS NVARCHAR2(128)) ") \
				_T("           ELSE Get_doctype(mt_doctype) ") \
				_T("           END, ") \
				_T("           CASE WHEN mt_storage_id = 15 AND mt_doctype IN('BOO', 'DOO', 'EOH', 'EOO', 'EXO', 'EXP', 'LOO', 'SLO', 'MOV') THEN SUM(mtl_qtydelivery * (mtl_unitprice + (mtl_unitprice * product_taxrate))) ") \
				_T("           ELSE SUM(mtl_qtydelivery * mtl_saleprice) END, ") \
				_T("           CASE WHEN mt_storage_id = 15 AND mt_doctype IN('BOO', 'DOO', 'EOH', 'EOO', 'EXO', 'EXP', 'LOO', 'SLO', 'MOV') THEN SUM(mtl_qtydelivery * ((mtl_unitprice + (mtl_unitprice * product_taxrate)) - product_vatprice)) ") \
				_T("           ELSE SUM(mtl_qtydelivery * (mtl_saleprice - product_vatprice)) END, ") \
				_T("		   mt_department_to_id, NULL, NULL, NULL") \
				_T(" FROM      m_transaction ") \
				_T(" LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = mtl_product_item_id)") \
				_T(" LEFT JOIN m_storagelist ON ( msl_storage_id = mt_storage_to_id ) ") \
				//_T(" WHERE     mt_status = 'A' AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO') %s") \//
				_T(" WHERE     mt_status = 'A' AND mt_doctype NOT IN ('DRO', 'CON', 'MRO') %s") \
				_T(" GROUP     BY mt_orderno, mt_documentno, ") \
				_T("              mt_approveddate, ") \
				_T("              mt_doctype, ") \
				_T("              mt_department_to_id, ") \
				_T("              mt_storage_id, mt_storage_to_id, ") \
				_T("              mt_partner_id, ") \
				_T("              mt_ordertype, ") \
				_T("              msl_category ") \
				_T(" UNION ALL")
				//Xuất ký gửi thay số phiếu = số hóa đơn ký gửi nhập kho
				_T(" SELECT    po_orderno AS order_no, ") \
				_T("	       mt_documentno AS document_no, ") \
				_T(" trunc_date(mt_approveddate),") \
				_T(" TRIM(mt_department_to_id || ' ' ||") \
				_T(" CASE") \
				_T(" WHEN mt_doctype = 'CON'") \
				_T(" THEN get_patientname(pol_docno)") \
				_T(" ELSE get_doctype(mt_doctype) END) AS receiver,") \
				_T(" pol_docno,") \
				_T(" CAST(N'Xuất ký gửi' AS NVARCHAR2(128)),") \
				_T("  CASE") \
				_T("       WHEN pol_unitprice > 0") \
				_T("       THEN SUM(pol_qty * pol_unitprice)") \
				_T("       ELSE") \
				_T("         SUM(pol_qty * (SELECT DISTINCT hpol_unitprice") \
				_T("         FROM hms_pharmaorderline_view2") \
				_T("         WHERE hpol_docno             = pol_docno") \
				_T("         AND hpol_orderid             = pol_orderid") \
				_T("         AND hpol_product_id          = pol_product_id") \
				_T("         AND (hpol_unitprice          = pol_unitprice") \
				_T("         OR COALESCE(pol_unitprice,0) =0)") \
				_T("         ))") \
				_T("     END AS pol_unitprice,") \
				_T("  CASE") \
				_T("       WHEN pol_unitprice > 0") \
				_T("       THEN SUM(pol_qty * (pol_unitprice - product_vatprice))") \
				_T("       ELSE") \
				_T("         SUM(pol_qty * ((SELECT DISTINCT hpol_unitprice") \
				_T("         FROM hms_pharmaorderline_view2") \
				_T("         WHERE hpol_docno             = pol_docno") \
				_T("         AND hpol_orderid             = pol_orderid") \
				_T("         AND hpol_product_id          = pol_product_id") \
				_T("         AND (hpol_unitprice          = pol_unitprice") \
				_T("         OR COALESCE(pol_unitprice,0) =0)") \
				_T("         ) - product_vatprice))") \
				_T("     END,") \
				_T(" CASE WHEN GET_ORDER_DEPTID(hpo_reference_id) is not null ") \
				_T("     then GET_ORDER_DEPTID(hpo_reference_id)") \
				_T("       WHEN mt_department_to_id IS NOT NULL ") \
				_T("       and GET_ORDER_DEPTID(hpo_reference_id) is null") \
				_T("       THEN mt_department_to_id") \
				_T("       ELSE CAST('TYC' AS NVARCHAR2(3))") \
				_T("     END AS deptid,") \
				_T("     NULL, NULL, NULL") \

				_T(" FROM purchase_orderline2") \
				_T(" LEFT JOIN HMS_PHARMAORDER_VIEW_VP ON (pol_docno = hpo_docno and pol_orderid = hpo_orderid)") \
				_T(" LEFT JOIN m_transaction ON(mt_transaction_id = pol_transaction_id)") \
				_T(" LEFT JOIN PURCHASE_ORDER ON (PO_PURCHASE_ORDER_ID=MT_EXPENSE_ID)") \
				_T(" LEFT JOIN m_productitem_view3 ON(pol_product_item_id=product_item_id)") \

				_T(" WHERE mt_status     = 'A'") \
				_T(" AND mt_doctype IN ('CON') %s") \
				_T(" GROUP BY") \
				_T(" po_orderno, mt_documentno,") \
				_T(" trunc_date(mt_approveddate),") \
				_T(" pol_docno,") \
				_T(" mt_doctype,") \
				_T(" mt_department_to_id,") \
				_T(" mt_storage_to_id,") \
				_T(" mt_partner_id,") \
				_T(" mt_ordertype,") \
				_T(" pol_unitprice, hpo_reference_id, NULL, NULL, NULL ") \
				_T(" UNION ALL") \
				_T(" SELECT") \
				_T(" so_orderno AS orderno,") \
				_T(" so_documentno AS documentno,") \
				_T(" trunc_date(so_approveddate),") \
				_T(" so_partnername,") \
				_T(" SO_DOCNO,") \
				_T(" get_doctype(so_doctype),") \
				_T(" SUM(sol_qtydelivery * sol_unitprice),") \
				_T(" SUM(sol_qtydelivery * (sol_unitprice - product_vatprice)),") \
				_T(" CAST('0' AS NVARCHAR2(1)), NULL, NULL, NULL") \
				_T(" FROM sale_order") \
				_T(" LEFT JOIN sale_orderline ON (so_sale_order_id = sol_sale_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON ( product_item_id = sol_product_item_id)") \
				_T(" WHERE so_status = 'A' %s") \
				_T(" GROUP BY") \
				_T(" so_orderno,") \
				_T(" so_documentno,") \
				_T(" so_approveddate,") \
				_T(" so_partnername,") \
				_T(" so_doctype, SO_DOCNO") \
				_T(" ) ") \
				_T(" WHERE amount > 0") \
				_T(" ORDER BY deptid"),szWhere0, szWhere1, szWhere1, szWhere2);
	
	return szSQL;
}
CString CMASExportSheetListForInsurance::GetQueryString1_V2(){
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
		//_T("   AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO') %s") \//
		_T("   AND mt_doctype NOT IN ('DRO', 'CON', 'MRO') %s") \
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
		_T(" deptid"), szWhere0, szWhere0, szWhere1);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
void CMASExportSheetListForInsurance::OnPrintPreviewSelect_V2()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szSysDate, szRptName, szPreviousType, szCurrentType;
	CRecord rs(&pMF->m_db);
	if(m_szStockKey == int2str(12) || m_szStockKey == int2str(13))
	
	{
		szSQL = GetQueryString1_V2();
	}
	else
	{
		szSQL = GetQueryString_V2();
	}

	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0, nGroup = 0, nTotal2 = 0, nGroup2 = 0;
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	szRptName.Format(_T("Reports/HMS/MAS_BANGKEPHIEUXUAT_V2.RPT"));
	if (!rpt.Init(szRptName))
		return;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	if (!m_szStockKey.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStock.GetCurrent(1));
	CReportSection *rptDetail;
	while (!rs.IsEOF())
	{
 		rs.GetValue(_T("deptid"), szCurrentType);
 		if (szCurrentType != szPreviousType)
 		{
 			if (nGroup > 0)
 			{
 				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
 				tmpStr.Format(_T("%f"), nGroup);
 				rptDetail->SetValue(_T("s7"), tmpStr);
 				nTotal += nGroup;
 				nGroup = 0;
 			}
 			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
 			rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("deptid")));
 			szPreviousType = szCurrentType;
 		}
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("document_no"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("export_date"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		tmpStr.Empty();
		rs.GetValue(_T("receiver"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("order_type"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("amount"), nAmount);
		nGroup += nAmount;
		rptDetail->SetValue(_T("7"), double2str(nAmount));

		rs.GetValue(_T("order_no"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("realprofit"), nAmount);
		nGroup2 += nAmount;
		rptDetail->SetValue(_T("9"), double2str(nAmount));
		rs.MoveNext();
	}
	if (nGroup > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%f"), nGroup);
		rptDetail->SetValue(_T("s7"), tmpStr);
		tmpStr.Format(_T("%f"), nGroup2);
		rptDetail->SetValue(_T("s9"), tmpStr);
		nTotal += nGroup;
		nTotal2 += nGroup2;
		nGroup = 0;
		nGroup2 = 0;
	}
 	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
 	tmpStr.Format(_T("%s"), _T("Tổng cộng"));
 	//rptDetail->SetValue(_T("TotalAmount"), tmpStr);
 	//FormatCurrency(nTotal, tmpStr);
 	tmpStr.Format(_T("%f"), nTotal);
 	rptDetail->SetValue(_T("s7"), tmpStr);

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}
