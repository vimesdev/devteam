#include "stdafx.h"
#include "IVFGeneralStockExport.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
#include ".\IVFGeneralStockExport.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFGeneralStockExport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFGeneralStockExport *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFGeneralStockExport* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CIVFGeneralStockExport *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFGeneralStockExport* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CIVFGeneralStockExport *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CIVFGeneralStockExport *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CIVFGeneralStockExport *pVw = (CIVFGeneralStockExport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CIVFGeneralStockExport *pVw = (CIVFGeneralStockExport *)pWnd;
	pVw->OnExportSelect();
} 
CIVFGeneralStockExport::CIVFGeneralStockExport(CWnd *pParent)
{
	m_nDlgWidth = 545;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CIVFGeneralStockExport::~CIVFGeneralStockExport(){
}
void CIVFGeneralStockExport::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStorage.SetCheckBox(true);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this,95, 60, 570, 85); 
	m_wndItemGroup.SetCheckBox(true);
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 90, 90, 115);
	m_wndItemGroup.Create(this,95, 90, 570, 115);
	
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 380, 125, 490, 150);
	m_wndExport.Create(this, _T("&Export"), 495, 125, 575, 150);

}
void CIVFGeneralStockExport::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.LimitText(35);
	m_wndItemGroup.LimitText(35);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);
	
	

	m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 70);
	m_wndItemGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

}
void CIVFGeneralStockExport::OnSetWindowEvents(){
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
void CIVFGeneralStockExport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);

}
void CIVFGeneralStockExport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();

}
int CIVFGeneralStockExport::SetMode(int nMode){
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
/*void CIVFGeneralStockExport::OnFromDateChange(){
	
} */
/*void CIVFGeneralStockExport::OnFromDateSetfocus(){
	
} */
/*void CIVFGeneralStockExport::OnFromDateKillfocus(){
	
} */
int CIVFGeneralStockExport::OnFromDateCheckValue(){
	return 0;
} 
/*void CIVFGeneralStockExport::OnToDateChange(){
	
} */
/*void CIVFGeneralStockExport::OnToDateSetfocus(){
	
} */
/*void CIVFGeneralStockExport::OnToDateKillfocus(){
	
} */
int CIVFGeneralStockExport::OnToDateCheckValue(){
	return 0;
} 
void CIVFGeneralStockExport::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CIVFGeneralStockExport::OnStorageSelendok(){
	 
}
/*void CIVFGeneralStockExport::OnStorageSetfocus(){
	
}*/
/*void CIVFGeneralStockExport::OnStorageKillfocus(){
	
}*/
long CIVFGeneralStockExport::OnStorageLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty())	{       		szWhere.Format(_T(" AND msl_storage_id=%d"), ToInt(m_szStorageKey));	};	m_wndStorage.DeleteAllItems(); 	int nCount = 0;	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1=1  AND msl_storage_id in (91, 986) %s ORDER BY msl_type, msl_storage_id"), szWhere);	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CIVFGeneralStockExport::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CIVFGeneralStockExport::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CIVFGeneralStockExport::OnItemGroupSelendok(){
	 
}
/*void CIVFGeneralStockExport::OnItemGroupSetfocus(){
	
}*/
/*void CIVFGeneralStockExport::OnItemGroupKillfocus(){
	
}*/
long CIVFGeneralStockExport::OnItemGroupLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemGroup.IsSearchKey() && !m_szItemGroupKey.IsEmpty()){
		//szWhere.Format(_T(" WHERE pmdt_id='%s' "), m_szTypeKey);
	};
	//szWhere.Format(_T(" AND hfg_moduleid = '%s'"), pMF->GetModuleID());
	m_wndItemGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERe substr(hfg_id,1, 1)='A' %s ORDER BY hfg_index, hfg_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("group")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CIVFGeneralStockExport::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CIVFGeneralStockExport::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail, *rptHeader, *rptGroup;
	CString szSQL, tmpStr, tmpStr2;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldCat, szNewCat;
	double nGrpAmt = 0;
	int nIdx = 1, j = 0;
	if (!rpt.Init(_T("Reports\\HMS\\IVF_BAOCAOTONGKETXUATKHO.RPT")))
	{
		return;
	}
	szSQL = GetQueryString();
	//_msg(_T("%s"),szSQL); 
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
	CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{
		/*rs.GetValue(_T("product_categoryname"), szNewCat);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("s6"), double2str(nGrpAmt));
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptGroup->SetValue(_T("GroupName"), szNewCat);
			nGrpAmt = 0;
			szOldCat = szNewCat;
			
		}*/
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		//tmpStr.Format(_T("%s %s"), rs.GetValue(_T("pname")), rs.GetValue(_T("pname2")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("uom")));
		rs.GetValue(_T("price"), tmpStr);
		FormatCurrency(ToDouble(tmpStr), tmpStr2);
		rptDetail->SetValue(_T("4"), tmpStr2);
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("qty")));
		rs.GetValue(_T("amt"), tmpStr);
		FormatCurrency(ToDouble(tmpStr), tmpStr2);
		rptDetail->SetValue(_T("6"), tmpStr2);
		nGrpAmt += str2double(tmpStr);
		rs.MoveNext();
	}
	//Footer
	if (nGrpAmt > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		FormatCurrency(nGrpAmt, tmpStr);
		rptGroup->SetValue(_T("s6"), tmpStr);
	}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CIVFGeneralStockExport::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr, tmpStr2;
	CString szOldCat, szNewCat;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0;
	double nAmt, nGrpAmt = 0;

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
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 20);
	xls.SetColumnWidth(6, 30);

	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellText(nCol, nRow + 3, _T("\x42\xC1O \x43\xC1O T\x1ED4NG K\x1EBET \x58U\x1EA4T KHO	"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	//Col Head
	nRow = 5;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellMergedRows(nCol+1, nRow, 2);
	xls.SetCellMergedRows(nCol+2, nRow, 2);
	xls.SetCellMergedRows(nCol+3, nRow, 2);
	xls.SetCellMergedColumns(nCol+4, nRow, 2);
	xls.SetCellMergedRows(nCol+6, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow, _T("Tên hàng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow, _T("ĐVT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("Số lượng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow, _T("Tổng số xuất kho"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow+1, _T("Đơn giá"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow+1, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+6, nRow, _T("Ghi chú"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);

	nRow = 7;
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("pname")), FMT_TEXT);

		xls.SetCellText(nCol+2, nRow, rs.GetValue(_T("uom")), FMT_TEXT);

		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(nCol+3,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(nCol+4,nRow,tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("amt"), nAmt);
		xls.SetCellText(nCol+5,nRow, double2str(nAmt), FMT_NUMBER1);

		nGrpAmt += nAmt;

		nRow++;
		rs.MoveNext();	
		
	}
	if (nGrpAmt > 0)
	{
		xls.SetCellText(nCol+4, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		xls.SetCellText(nCol+5,nRow, double2str(nGrpAmt), FMT_NUMBER1);		
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\IVF_BAOCAOTONGKETXUATKHO.xls"));
} 

CString CIVFGeneralStockExport::GetQueryString(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szPrice, szStock, szGroup;
	szStock.Empty();
	szWhere.Format(_T(" AND expdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
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
		szWhere.AppendFormat(_T(" AND expstockid IN (%s)"), szStock);

	for (int i = 0; i < m_wndItemGroup.GetItemCount(); i++)
	{
		if(m_wndItemGroup.GetCheck(i))
		{
			m_wndItemGroup.SetCurSel(i);
			if(!szGroup.IsEmpty())
				szGroup += _T(",");						
			szGroup.AppendFormat(_T("'%s'"), m_wndItemGroup.GetCurrent(0));		
			
		}
	}

	if (!szGroup.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_producttype in (%s)"), szGroup);
	//szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());

// 	szSQL.Format(_T(" SELECT   product_name AS pname, ") \
// 				_T("           product_uomname AS uom, ") \
// 				_T("           unit_price AS price, ") \
// 				_T("           SUM(expqty) AS qty, ") \
// 				_T("           SUM(expqty) *  unit_price AS amt ") \
// 				_T(" FROM      (SELECT sitemid, ") \
// 				_T("                   expqty, ") \
// 				_T("                   unit_price, ") \
// 				_T("				   expdate,") \
// 				_T("				   expstockid") \
// 				_T("            FROM   mev ") \
// 				_T("            WHERE iotype NOT IN ('MOV')") \
// 				_T("            UNION ALL ") \
// 				_T("            SELECT sitemid, ") \
// 				_T("                   expqty, ") \
// 				_T("                   unit_price, ") \
// 				_T("				   expdate,") \
// 				_T("				   expstockid") \
// 				_T("            FROM   mev ") \
// 				_T("            WHERE  iotype = 'MOV' AND impstockid NOT IN ( %s )) tbl ") \
// 				_T(" LEFT JOIN m_productitem_view ON ( product_item_id = sitemid ) ") \
// 				_T(" WHERE 1=1 AND expqty > 0 %s") \
// 				_T(" GROUP     BY product_name,product_uomname, unit_price ") \
// 				_T(" ORDER     BY pname "), szStock, szWhere);

	szSQL.Format(_T(" SELECT product_name        AS pname,") \
		_T("   product_uomname          AS uom,") \
		_T("   unit_price               AS price,") \
		_T("   SUM(expqty)              AS qty,") \
		_T("   SUM(expqty) * unit_price AS amt") \
		_T(" FROM") \
		_T("   (SELECT product_item_id AS sitemid,") \
		_T("     qtyexport AS expqty,") \
		_T("     unit_price,") \
		_T("     approved_date AS expdate,") \
		_T("     storage_id AS expstockid") \
		_T("   FROM m_export_view3") \
		_T("   WHERE iotype NOT IN ('MOV')") \
		_T("   UNION ALL") \
		_T("   SELECT product_item_id,") \
		_T("     qtyexport,") \
		_T("     unit_price,") \
		_T("     approved_date,") \
		_T("     storage_id") \
		_T("   FROM m_export_view3") \
		_T("   WHERE iotype        = 'MOV'") \
		_T("   AND storage_to_id NOT IN ( %s )") \
		_T("   ) tbl") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( product_item_id = sitemid )") \
		_T(" WHERE 1              =1") \
		_T(" AND expqty           > 0 %s") \
		_T(" GROUP BY product_name,") \
		_T("   product_uomname,") \
		_T("   unit_price") \
		_T(" ORDER BY pname"), szStock, szWhere);
	return szSQL;
}
BEGIN_MESSAGE_MAP(CIVFGeneralStockExport, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CIVFGeneralStockExport::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
