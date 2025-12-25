#include "stdafx.h"
#include "HCSGeneralStockImport.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHCSGeneralStockImport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHCSGeneralStockImport *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCSGeneralStockImport* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHCSGeneralStockImport *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCSGeneralStockImport* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CHCSGeneralStockImport *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CHCSGeneralStockImport *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHCSGeneralStockImport *pVw = (CHCSGeneralStockImport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHCSGeneralStockImport *pVw = (CHCSGeneralStockImport *)pWnd;
	pVw->OnExportSelect();
} 
CHCSGeneralStockImport::CHCSGeneralStockImport(CWnd *pParent){

	m_nDlgWidth = 545;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHCSGeneralStockImport::~CHCSGeneralStockImport(){
}
void CHCSGeneralStockImport::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStorage.SetCheckBox(true);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this,95, 60, 570, 85); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 90, 90, 115);
	m_wndItemGroup.Create(this,95, 90, 570, 115); 
	m_wndGroupBySupplier.Create(this, _T("Group by Supplier"), 5, 125, 135, 150);
	m_wndReturnImport.Create(this, _T("Return Import"), 140, 125, 250, 150);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 380, 125, 490, 150);
	m_wndExport.Create(this, _T("&Export"), 495, 125, 575, 150);

}
void CHCSGeneralStockImport::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.LimitText(35);
	m_wndItemGroup.LimitText(35);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);
	
	m_wndItemGroup.Format(3, 2);
	m_wndItemGroup.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndItemGroup.InsertColumn(1, _T("Code"), CFMT_TEXT, 60);
	m_wndItemGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 400);

}
void CHCSGeneralStockImport::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CHCSGeneralStockImport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_Check(pDX, m_wndGroupBySupplier.GetDlgCtrlID(), m_bGroupBySupplier);
	DDX_Check(pDX, m_wndReturnImport.GetDlgCtrlID(), m_bReturnImport);

}
void CHCSGeneralStockImport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_bGroupBySupplier = FALSE;
	m_bReturnImport = FALSE;

}
int CHCSGeneralStockImport::SetMode(int nMode){
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
/*void CHCSGeneralStockImport::OnFromDateChange(){
	
} */
/*void CHCSGeneralStockImport::OnFromDateSetfocus(){
	
} */
/*void CHCSGeneralStockImport::OnFromDateKillfocus(){
	
} */
int CHCSGeneralStockImport::OnFromDateCheckValue()
{
	return 0;
} 
/*void CHCSGeneralStockImport::OnToDateChange(){
	
} */
/*void CHCSGeneralStockImport::OnToDateSetfocus(){
	
} */
/*void CHCSGeneralStockImport::OnToDateKillfocus(){
	
} */
int CHCSGeneralStockImport::OnToDateCheckValue(){
	return 0;
} 
void CHCSGeneralStockImport::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCSGeneralStockImport::OnStorageSelendok(){
	 
}
/*void CHCSGeneralStockImport::OnStorageSetfocus(){
	
}*/
/*void CHCSGeneralStockImport::OnStorageKillfocus(){
	
}*/
long CHCSGeneralStockImport::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHCSGeneralStockImport::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CHCSGeneralStockImport::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCSGeneralStockImport::OnItemGroupSelendok(){
	 
}
/*void CHCSGeneralStockImport::OnItemGroupSetfocus(){
	
}*/
/*void CHCSGeneralStockImport::OnItemGroupKillfocus(){
	
}*/
long CHCSGeneralStockImport::OnItemGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndItemGroup, m_szItemGroupKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemGroup.IsSearchKey() && !m_szItemGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemGroupKey
};
	m_wndItemGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHCSGeneralStockImport::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CHCSGeneralStockImport::OnPrintPreviewSelect(){
	UpdateData(true);
	if (m_bGroupBySupplier)
		OnCheckPrint();
	else
		OnStdPrint();
}

void CHCSGeneralStockImport::OnStdPrint(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail, *rptHeader, *rptGroup=NULL, *rptOldGroup = NULL;
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldCat, szNewCat;
	double nGrpAmt = 0;
	long double nTotalAmt = 0;
	int nIdx = 1, j = 0;
	//if (!rpt.Init(_T("Reports\\HMS\\PMS_BAOCAOTONGKETNHAPKHO.RPT")))
	//{
	//	return;
	//
	//}
	if(pMF->GetModuleID() == _T("PM"))
	{
		if(!rpt.Init(_T("Reports/HMS/PMS_BAOCAOTONGKETNHAPKHO.RPT"),true) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/PMS_BAOCAOTONGKETNHAPKHO_MA.RPT"),true) )
			return;
	}	
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	arrDat.Add(_T("Nh\x1EADp \x63\xF3 h\xF3\x61 \x111\x1A1n"));
	arrDat.Add(_T("Tr\x1EA3 l\x1EA1i h\xE0ng"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr = _T("To\xE0n \x62\x1ED9");
	if (!m_szStorageKey.IsEmpty())
		rptHeader->SetValue(_T("StockName"), m_wndStorage.GetCurrent(1));
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);
	if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
	else
		rptHeader->SetValue(_T("Type"), tmpStr);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
	CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("type_line"), szNewCat);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				tmpStr.Format(_T("%f"), nGrpAmt);
				rptOldGroup->SetValue(_T("s7"), tmpStr);
				nTotalAmt += nGrpAmt;
				nGrpAmt = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptGroup->SetValue(_T("GroupName"), arrDat.GetAt(str2int(rs.GetValue(_T("type_line")))));
			rptOldGroup = rptGroup;
			szOldCat = szNewCat;
			
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		//tmpStr.Format(_T("%s %s"), rs.GetValue(_T("pname")), rs.GetValue(_T("pname2")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("product_code")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("product_name")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("product_uom")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("partner_name")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("qty")));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("unit_price")));
		rs.GetValue(_T("amount"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		nGrpAmt += str2double(tmpStr);
		rs.MoveNext();
	}
	//Footer
	if (nGrpAmt > 0)
	{
		tmpStr.Format(_T("%f"), nGrpAmt);
		rptOldGroup->SetValue(_T("s7"), tmpStr);
		nTotalAmt += nGrpAmt;
	}
	if (nTotalAmt > 0)
	{
		tmpStr.Format(_T("%.2f"), nTotalAmt);
		rpt.GetReportFooter()->SetValue(_T("total"), tmpStr);
	}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CHCSGeneralStockImport::OnCheckPrint(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail, *rptHeader, *rptGroup=NULL, *rptOldGroup = NULL;
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldSupplier, szNewSupplier;
	double nGrpAmt = 0;
	long double nTotalAmt = 0;
	int nIdx = 1, j = 0;
	
	
	if(!rpt.Init(_T("Reports/HMS/HC_BAOCAOTONGKETNHAPKHO_HC.RPT"),true) )
			return;
	

	szSQL = GetQueryString(1);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr = _T("To\xE0n \x62\x1ED9");
	if (!m_szStorageKey.IsEmpty())
		rptHeader->SetValue(_T("StockName"), m_wndStorage.GetCurrent(1));
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);
	if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
	else
		rptHeader->SetValue(_T("Type"), tmpStr);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
	CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("partner_id"), szNewSupplier);
		if (szNewSupplier != szOldSupplier && !szNewSupplier.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				tmpStr.Format(_T("%f"), nGrpAmt);
				rptOldGroup->SetValue(_T("s7"), tmpStr);
				nTotalAmt += nGrpAmt;
				nGrpAmt = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptGroup->SetValue(_T("GroupName"), rs.GetValue(_T("partner_name")));
			rptOldGroup = rptGroup;			
			szOldSupplier = szNewSupplier;
			
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("product_code")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("product_name")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("product_uom")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("qty")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("unit_price")));
		rs.GetValue(_T("amount"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		nGrpAmt += str2double(tmpStr);
		rs.MoveNext();
	}
	//Footer
	if (nGrpAmt > 0)
	{
		tmpStr.Format(_T("%f"), nGrpAmt);
		rptOldGroup->SetValue(_T("s7"), tmpStr);
		nTotalAmt += nGrpAmt;
	}
	if (nTotalAmt > 0)
	{
		tmpStr.Format(_T("%.2f"), nTotalAmt);
		rpt.GetReportFooter()->SetValue(_T("total"), tmpStr);
	}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}

void CHCSGeneralStockImport::OnExportSelect(){
	UpdateData(true);
	if (m_bGroupBySupplier)
		OnCheckExport();
	else
		OnStdExport();
}

void CHCSGeneralStockImport::OnStdExport(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr;
	CString szOldCat, szNewCat;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	int nIdx = 1, j = 0, nOldRow = 0;
	double nGrpAmt = 0;
	long double nTotalAmt = 0;

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(4, 30);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 15);

	int nCol = 0;
	int nRow = 0;	
	
	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellText(nCol, nRow + 3, _T("\x42\xC1O \x43\xC1O T\x1ED4NG K\x1EBET NH\x1EACP KHO"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	//Col Head
	nRow = 5;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellMergedRows(nCol+1, nRow, 2);
	xls.SetCellMergedRows(nCol+2, nRow, 2);
	xls.SetCellMergedRows(nCol+3, nRow, 2);
	xls.SetCellMergedRows(nCol+4, nRow, 2);
	xls.SetCellMergedColumns(nCol+5, nRow, 3);
	xls.SetCellMergedRows(nCol+8, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow, _T("M\xE3 s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow, _T("T\xEAn thu\x1ED1\x63, h\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("\x110VT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow, _T("\x43\xF4ng ty"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow, _T("T\x1ED5ng s\x1ED1 nh\x1EADp kho"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow+1, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+6, nRow+1, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+7, nRow+1, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+8, nRow, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	nRow = 7;
	arrDat.Add(_T("Nh\x1EADp \x63\xF3 h\xF3\x61 \x111\x1A1n"));
	arrDat.Add(_T("Tr\x1EA3 l\x1EA1i h\xE0ng"));
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("type_line"), szNewCat);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				tmpStr.Format(_T("%f"), nGrpAmt);
				xls.SetCellText(nCol+7, nOldRow, tmpStr, FMT_NUMBER1, true);
				nTotalAmt += nGrpAmt;
				nGrpAmt = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 7);
			xls.SetCellText(nCol, nRow, arrDat.GetAt(str2int(rs.GetValue(_T("type_line")))), FMT_TEXT, true);
			nOldRow = nRow;
			nRow++;
			szOldCat = szNewCat;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("product_code")), FMT_TEXT);
		xls.SetCellText(nCol+2, nRow, rs.GetValue(_T("product_name")), FMT_TEXT);
		xls.SetCellText(nCol+3, nRow, rs.GetValue(_T("product_uom")), FMT_TEXT);
		xls.SetCellText(nCol+4, nRow, rs.GetValue(_T("partner_name")), FMT_TEXT);
		xls.SetCellText(nCol+5, nRow, rs.GetValue(_T("qty")), FMT_NUMBER1);
		xls.SetCellText(nCol+6, nRow, rs.GetValue(_T("unit_price")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		nGrpAmt += str2double(tmpStr);
		nRow++;
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		tmpStr.Format(_T("%f"), nGrpAmt);
		xls.SetCellText(nCol+7, nOldRow, tmpStr, FMT_NUMBER1, true);
		nTotalAmt += nGrpAmt;
	}
	if (nTotalAmt > 0)
	{
		xls.SetCellText(nCol + 6, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		tmpStr.Format(_T("%.2f"), nTotalAmt);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGKETNHAPKHO.xls"));
} 

void CHCSGeneralStockImport::OnCheckExport(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr;
	CString szOldCat, szNewCat;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0, nOldRow = 0;
	double nGrpAmt = 0;
	long double nTotalAmt = 0;

	szSQL = GetQueryString(1);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellText(nCol, nRow + 3, _T("\x42\xC1O \x43\xC1O T\x1ED4NG K\x1EBET NH\x1EACP KHO"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	//Col Head
	nRow = 5;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellMergedRows(nCol+1, nRow, 2);
	xls.SetCellMergedRows(nCol+2, nRow, 2);
	xls.SetCellMergedRows(nCol+3, nRow, 2);
	xls.SetCellMergedColumns(nCol+4, nRow, 3);
	xls.SetCellMergedRows(nCol+7, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow, _T("M\xE3 s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow, _T("T\xEAn thu\x1ED1\x63, h\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("\x110VT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow, _T("T\x1ED5ng s\x1ED1 nh\x1EADp kho"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow+1, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow+1, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+6, nRow+1, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+7, nRow, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	nRow = 7;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("partner_id"), szNewCat);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				tmpStr.Format(_T("%f"), nGrpAmt);
				xls.SetCellText(nCol+6, nOldRow, tmpStr, FMT_NUMBER1, true);
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, rs.GetValue(_T("partner_name")), FMT_TEXT, true);
			nOldRow = nRow;
			nRow++;
			nTotalAmt += nGrpAmt;
			nGrpAmt = 0;
			szOldCat = szNewCat;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("product_uom")), FMT_TEXT);
		xls.SetCellText(nCol+2, nRow, rs.GetValue(_T("product_name")), FMT_TEXT);
		xls.SetCellText(nCol+3, nRow, rs.GetValue(_T("product_uom")), FMT_TEXT);
		xls.SetCellText(nCol+4, nRow, rs.GetValue(_T("qty")), FMT_NUMBER1);
		xls.SetCellText(nCol+5, nRow, rs.GetValue(_T("unit_price")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		nGrpAmt += str2double(tmpStr);
		nRow++;
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		tmpStr.Format(_T("%f"), nGrpAmt);
		xls.SetCellText(nCol+6, nOldRow, tmpStr, FMT_NUMBER1, true);
	}
	if (nTotalAmt > 0)
	{
		tmpStr.Format(_T("%.2f"), nTotalAmt);
		xls.SetCellText(nCol+5, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGKETNHAPKHO.xls"));
}

CString CHCSGeneralStockImport::GetQueryString(int nSort){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szWhere2, szStock, szOrderBy, szField, szSubSelect, szReturnImport, szPrice, szPrice1, szPrice2;
	szOrderBy.Empty();
	szStock.Empty();
	szWhere.Format(_T(" AND i.approved_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere2.Format(_T(" AND hpo_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(0));
		}
	}
	if (!szStock.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND i.storage_id IN (%s) AND i.storage_to_id NOT IN (%s)"), szStock, szStock);
		szWhere1.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"), szStock);
		szWhere2.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStock);
	}
	if (szStock == _T("15"))
	{
		szPrice.Format(_T("product_vatprice"));
		szPrice1.Format(_T("product_vatprice"));
		szPrice2.Format(_T("product_vatprice"));
	}
	else
	{
		szPrice.Format(_T("i.unit_price"));
		szPrice1.Format(_T("DECODE(0, mtl_saleprice, mtl_taxprice, mtl_saleprice)"));
		szPrice2.Format(_T("hpol_unitprice"));
	}
	if (!m_szItemGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND p.product_categoryid = %d"), ToInt(m_szItemGroupKey));
		szWhere1.AppendFormat(_T(" AND product_categoryid = %d"), ToInt(m_szItemGroupKey));
		szWhere2.AppendFormat(_T(" AND product_categoryid = %d"), ToInt(m_szItemGroupKey));
	}
	szWhere.AppendFormat(_T(" AND p.product_org_id = '%s'"), pMF->GetModuleID());
	szWhere1.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szWhere2.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	if (nSort == 1)
	{
		szOrderBy.Format(_T("partner_name, product_name"));//order theo nha cung cap
		szWhere.AppendFormat(_T(" AND i.iotype = 'POO'"));
	}
	else
		szSubSelect.Format(_T(" UNION ALL   SELECT    p.product_name            AS product_name, ") \
					_T("                   p.product_code, ") \
					_T("                   p.product_uomname         AS product_uom, ") \
					_T("                   cast('Z' as nvarchar2(1)) AS partner_id, ") \
					_T("				   %s AS unit_price, ") \
					_T("				   i.qtyimport       AS qty, ") \
					_T("				   %s *  i.qtyimport AS amount, ") \
					_T("				   1") \
					_T("         FROM      m_import_view3 i") \
					_T("         LEFT JOIN m_productitem_view p ON ( p.product_item_id = i.product_item_id ) ") \
					_T("         WHERE     i.iotype = 'MOV' %s "), szPrice, szPrice, szWhere);
	if (m_bReturnImport)
		{
			szReturnImport.Format(_T(" UNION ALL") \
				_T("  SELECT product_name AS product_name,") \
				_T("     product_code,") \
				_T("     product_uomname AS product_uom,") \
				_T("     CAST('Z' AS NVARCHAR2(1)) partner_id,") \
				_T("     %s                  AS unit_price,") \
				_T("     mtl_qtyorder                 AS qty,") \
				_T("     %s * mtl_qtyorder AS amount,") \
				_T("     1") \
				_T("   FROM m_transaction") \
				_T("   LEFT JOIN m_transactionline") \
				_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
				_T("   LEFT JOIN m_productitem_view") \
				_T("   ON ( mtl_product_item_id = product_item_id )") \
				_T("   WHERE mt_doctype        IN ('DRO')") \
				_T("   AND mt_status            = 'A' %s") \
		_T("   UNION ALL") \
		_T("   SELECT   ") \
		_T("     product_name AS product_name,") \
		_T("     product_code,") \
		_T("     product_uomname AS product_uom,") \
		_T("     cast('Z' as nvarchar2(1)) partner_id,") \
		_T("     %s AS unit_price,") \
		_T("     mtl_qtyorder AS qty,") \
		_T("     %s * mtl_qtyorder AS amount,") \
		_T("     1") \
		_T("   FROM m_transaction") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("   LEFT JOIN m_productitem_view") \
		_T("   ON ( mtl_product_item_id = product_item_id )") \
		_T("   WHERE mt_doctype        IN ('SRO', 'CRO', 'PRO')") \
		_T("   AND mt_status            = 'A' %s")
		_T(" UNION ALL") \
		_T("   SELECT   ") \
		_T("     product_name AS product_name,") \
		_T("     product_code,") \
		_T("     product_uomname AS product_uom,") \
		_T("     cast('Z' as nvarchar2(1)) partner_id,") \
		_T("     %s AS unit_price,") \
		_T("     hpol_qtyreturn  AS qty,") \
		_T("     %s * hpol_qtyreturn AS amount,") \
		_T("     1") \
		_T(" FROM hms_pharmareturnorder") \
		_T(" LEFT JOIN hms_pharmareturnorder_line ") \
		_T(" ON(hpo_pharmareturnorder_id = hpol_pharmareturnorder_id AND hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (hpol_product_item_id = product_item_id)") \
		_T("  WHERE hpo_doctype        IN ('RRO','DRO')") \
		_T("   AND hpo_status            = 'A' %s"), szPrice1, szPrice1, szWhere1, szPrice1, szPrice1, szWhere1, szPrice2, szPrice2, szWhere2);
		}
	szOrderBy.Format(_T("type_line, product_name, partner_name"));//order theo loai:nhap hoa don va nhap ko hoa don
	szField.Format(_T("type_line, "));

	szSQL.Format(_T(" SELECT %s product_name, ") \
	_T("        product_code, ") \
	_T("        product_uom, ") \
	_T("		partner_id,") \
	_T("        Get_partnername(partner_id) partner_name, ") \
	_T("        unit_price, ") \
	_T("        SUM(qty) qty, ") \
	_T("        SUM(amount) amount") \
	_T(" FROM   (SELECT    p.product_name            AS product_name, ") \
	_T("                   p.product_code, ") \
	_T("                   p.product_uomname         AS product_uom, ") \
	_T("                   Nvl(po_partner_id, 'Z') AS partner_id, ") \
	_T("                   %s AS unit_price, ") \
	_T("                   i.qtyimport                  AS qty, ") \
	_T("                   i.qtyimport * %s AS amount, ") \
	_T("				   0 type_line") \
	_T("         FROM      m_import_view3 i ") \
	_T("         LEFT JOIN m_productitem_view p ON ( p.product_item_id = i.product_item_id ) ") \
	_T("         LEFT JOIN purchase_order ON ( po_purchase_order_id = i.oid )") \
	_T("         WHERE i.iotype = 'POO' %s %s %s) ") \
	_T(" GROUP  BY %s product_code, ") \
	_T("           product_name, ") \
	_T("           product_uom, ") \
	_T("           partner_id, ") \
	_T("           unit_price ") \
	_T(" ORDER  BY %s"), szField, szPrice, szPrice, szWhere, szSubSelect, szReturnImport, szField, szOrderBy);
	return szSQL;
}
BEGIN_MESSAGE_MAP(CHCSGeneralStockImport, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CHCSGeneralStockImport::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
