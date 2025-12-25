#include "stdafx.h"
#include "PMSGeneralStockExport.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
#include ".\pmsgeneralstockexport.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSGeneralStockExport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSGeneralStockExport *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSGeneralStockExport* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSGeneralStockExport *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSGeneralStockExport* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMSGeneralStockExport *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CPMSGeneralStockExport *)pWnd)->OnItemGroupAddNew();
}*/
static long _OnExportTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSGeneralStockExport *)pWnd)->OnExportTypeLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSGeneralStockExport *pVw = (CPMSGeneralStockExport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSGeneralStockExport *pVw = (CPMSGeneralStockExport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSGeneralStockExport *pVw = (CPMSGeneralStockExport *)pWnd;
	pVw->OnExportSelect();
} 
CPMSGeneralStockExport::CPMSGeneralStockExport(CWnd *pParent){

	m_nDlgWidth = 545;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CPMSGeneralStockExport::~CPMSGeneralStockExport(){
}
void CPMSGeneralStockExport::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStorage.SetCheckBox(true);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this,95, 60, 570, 85); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 90, 90, 115);
	m_wndItemGroup.Create(this,95, 90, 570, 115); 
	m_wndExportTypeLabel.Create(this, _T("Export Type"), 10, 120, 90, 145);
	m_wndExportType.Create(this,95, 120, 570, 145);
	m_wndPrint.Create(this, _T("Print (QT)"), 265, 155, 375, 180);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 380, 155, 490, 180);
	m_wndExport.Create(this, _T("&Export"), 495, 155, 575, 180);

}
void CPMSGeneralStockExport::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.LimitText(35);
	m_wndItemGroup.LimitText(35);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);
	
	m_wndExportType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExportType.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);

	m_wndItemGroup.Format(3, 2);
	m_wndItemGroup.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndItemGroup.InsertColumn(1, _T("Code"), CFMT_TEXT, 60);
	m_wndItemGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 400);



}
void CPMSGeneralStockExport::OnSetWindowEvents(){
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
	m_wndExportType.SetEvent(WE_LOADDATA, _OnExportTypeLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CPMSGeneralStockExport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndExportType.GetDlgCtrlID(), m_szExportTypeKey);

}
void CPMSGeneralStockExport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_szExportTypeKey.Empty();

}
int CPMSGeneralStockExport::SetMode(int nMode){
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
/*void CPMSGeneralStockExport::OnFromDateChange(){
	
} */
/*void CPMSGeneralStockExport::OnFromDateSetfocus(){
	
} */
/*void CPMSGeneralStockExport::OnFromDateKillfocus(){
	
} */
int CPMSGeneralStockExport::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSGeneralStockExport::OnToDateChange(){
	
} */
/*void CPMSGeneralStockExport::OnToDateSetfocus(){
	
} */
/*void CPMSGeneralStockExport::OnToDateKillfocus(){
	
} */
int CPMSGeneralStockExport::OnToDateCheckValue(){
	return 0;
} 
void CPMSGeneralStockExport::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSGeneralStockExport::OnStorageSelendok(){
	 
}
/*void CPMSGeneralStockExport::OnStorageSetfocus(){
	
}*/
/*void CPMSGeneralStockExport::OnStorageKillfocus(){
	
}*/
long CPMSGeneralStockExport::OnStorageLoadData(){
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
/*void CPMSGeneralStockExport::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSGeneralStockExport::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSGeneralStockExport::OnItemGroupSelendok(){
	 
}
/*void CPMSGeneralStockExport::OnItemGroupSetfocus(){
	
}*/
/*void CPMSGeneralStockExport::OnItemGroupKillfocus(){
	
}*/
long CPMSGeneralStockExport::OnItemGroupLoadData(){
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

long CPMSGeneralStockExport::OnExportTypeLoadData(){
	//Xuat ban cho BN
	m_wndExportType.AddItems(_T("01"), _T("Xuất bán cho BN"), NULL);
	//Xuat noi bo (Quay 1 -> Quay 2...)
	m_wndExportType.AddItems(_T("02"), _T("Xuất nội bộ (Quầy 1->Quầy 2...)"), NULL);
	//Xuat cho kho (bo doi- bao hiem)
	m_wndExportType.AddItems(_T("03"), _T("Xuất cho kho (bộ đội - bảo hiểm"), NULL);
	//Xuat cho khoa A11
	m_wndExportType.AddItems(_T("04"), _T("Xuất cho khoa A11"), NULL);
	//Xuat tra lai cong ty
	m_wndExportType.AddItems(_T("05"), _T("Xuất trả lại công ty"), NULL);
	//Xuat khac
	//m_wndExportType.AddItems(_T("06"), _T("Xuất chương trình"), NULL);
	//Xuat huy
	//m_wndExportType.AddItems(_T("07"), _T("Xuất hủy"), NULL);
	//Xuat khac 2 21-1 doi thanh xuat ban hang
	m_wndExportType.AddItems(_T("08"), _T("Xuất bán hàng"), NULL);
	return 8;
}

/*void CPMSGeneralStockExport::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSGeneralStockExport::OnPrintPreviewSelect(){
	UpdateData(true);
	CGuiMenu menu(this);
	CRect rect;
	int nPos = 0;
	menu.CreatePopupMenu();
	m_wndPrintPreview.GetWindowRect(&rect);
	//In dau phieu
	menu.AppendMenu(MF_BYPOSITION, 1, _T("In theo đầu phiếu"));
	menu.AppendMenu(MF_SEPARATOR);
	//In theo thuoc
	menu.AppendMenu(MF_BYPOSITION, 2, _T("In theo thuốc"));
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrintbyOrder();
			break;
		case 2:
			OnPrintbyItem();
			break;
	}
	return;

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail, *rptHeader, *rptGroup;
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldCat, szNewCat;
	double nGrpAmt = 0;
	int nIdx = 1, j = 0;
	if (!rpt.Init(_T("Reports\\HMS\\PM_BAOCAOTONGKETXUATKHO.RPT")))
	{
		return;
	}
	szSQL = GetQueryString();
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
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr = _T("Toàn bộ");
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
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("price")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("qty")));
		rs.GetValue(_T("amt"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		nGrpAmt += str2double(tmpStr);
		rs.MoveNext();
	}
	//Footer
	if (nGrpAmt > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("s6"), double2str(nGrpAmt));
	}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CPMSGeneralStockExport::OnPrintSelect(){
	UpdateData(true);
	CGuiMenu menu(this);
	CRect rect;
	int nPos = 0;
	menu.CreatePopupMenu();
	m_wndPrintPreview.GetWindowRect(&rect);
	//In dau phieu
	menu.AppendMenu(MF_BYPOSITION, 1, _T("In theo đầu phiếu"));
	menu.AppendMenu(MF_SEPARATOR);
	//In theo thuoc
	menu.AppendMenu(MF_BYPOSITION, 2, _T("In theo thuốc"));
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnPrintbyOrder1();
		break;
	case 2:
		OnPrintbyItem1();
		break;
	}
	return;
}
void CPMSGeneralStockExport::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr;
	CString szOldGroup1, szNewGroup1, szOldGroup2, szNewGroup2;
	CStringArray arrLabel;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0;
	double nTotalAmt = 0, nGrpAmt1 = 0, nGrpAmt2 = 0;

	szSQL = GetQueryString_(_T("D"));
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

	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellText(nCol, nRow + 3, _T("BÁO CÁO TỔNG KẾT XUẤT KHO	"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
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
	xls.SetCellText(nCol+1, nRow, _T("Tên thuốc, hàm lượng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow, _T("ĐVT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("Đơn giá"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow, _T("Tổng số xuất kho"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow+1, _T("Số lượng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow+1, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+6, nRow, _T("Ghi chú"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	nRow = 7;
	szOldGroup1.Empty();
	szOldGroup2.Empty();
	arrLabel.Add(_T("Xuất bán cho BN"));
	arrLabel.Add(_T("Xuất nội bộ(Quầy 1-> Quầy 2)"));
	arrLabel.Add(_T("Xuất cho kho(bộ đôi- bảo hiểm)"));
	arrLabel.Add(_T("Xuất cho khoa A11"));
	arrLabel.Add(_T("Xuất trả lại công ty"));
	arrLabel.Add(_T("Xuất chương trình khác"));
	arrLabel.Add(_T("Xuất hủy"));
	arrLabel.Add(_T("Xuất bán hàng"));
	arrLabel.Add(_T("Xuất bán TPCN"));
	while (!rs.IsEOF())
	{
		/*rs.GetValue(_T("product_categoryname"), szNewCat);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			if (nTotalAmt > 0)
			{
				xls.SetCellText(nCol+3, nRow, _T("Tổng cộng"), FMT_TEXT);
				xls.SetCellText(nCol+5, nRow, ToString(nTotalAmt), FMT_NUMBER1);
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 7);
			xls.SetCellText(nCol, nRow, szNewCat, FMT_TEXT, true);
			nRow++;
			nTotalAmt = 0;
			szOldCat = szNewCat;
		}*/
		rs.GetValue(_T("lv1"), szNewGroup1);
		rs.GetValue(_T("lv2"), szNewGroup2);
		if (szNewGroup1 != szOldGroup1)
		{
			if (nGrpAmt2 > 0)
			{
				xls.SetCellText(nCol + 4, nRow, szOldGroup2, FMT_TEXT, true);
				xls.SetCellText(nCol + 5, nRow, double2str(nGrpAmt2), FMT_NUMBER1, true);
				nRow++;
				nGrpAmt2 = 0;
			}
			if (nGrpAmt1 > 0)
			{
				xls.SetCellText(nCol + 4, nRow, arrLabel.GetAt(str2int(szOldGroup1)), FMT_TEXT, true);
				xls.SetCellText(nCol + 5, nRow, double2str(nGrpAmt1), FMT_NUMBER1, true);
				nRow++;
				nGrpAmt1 = 0;
				nGrpAmt2 = 0;
			}
			xls.SetCellText(nCol, nRow, arrLabel.GetAt(str2int(szNewGroup1)), FMT_TEXT, true);
			nRow++;
			szOldGroup1 = szNewGroup1;
		}
		if (szNewGroup2 != szOldGroup2)
		{
			if (nGrpAmt2 > 0)
			{
				xls.SetCellText(nCol + 4, nRow, szOldGroup2, FMT_TEXT, true);
				xls.SetCellText(nCol + 5, nRow, double2str(nGrpAmt2), FMT_NUMBER1, true);
				nRow++;
				nGrpAmt2 = 0;
			}
			xls.SetCellText(nCol, nRow, szNewGroup2, FMT_TEXT, true);
			nRow++;
			szOldGroup2 = szNewGroup2;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("pname")), FMT_TEXT);
		xls.SetCellText(nCol+2, nRow, rs.GetValue(_T("uom")), FMT_TEXT);
		xls.SetCellText(nCol+3, nRow, rs.GetValue(_T("price")), FMT_NUMBER1);
		xls.SetCellText(nCol+4, nRow, rs.GetValue(_T("qty")), FMT_NUMBER1);
		rs.GetValue(_T("amt"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		nTotalAmt += str2double(tmpStr);
		nGrpAmt1 += str2double(tmpStr);
		nGrpAmt2 += str2double(tmpStr);
		nRow++;
		rs.MoveNext();
	}
	if (nGrpAmt2 > 0)
	{
		xls.SetCellText(nCol + 4, nRow, szOldGroup2, FMT_TEXT, true);
		xls.SetCellText(nCol + 5, nRow, double2str(nGrpAmt2), FMT_NUMBER1, true);
		nRow++;
	}
	if (nGrpAmt1 > 0)
	{
		xls.SetCellText(nCol + 4, nRow, arrLabel.GetAt(str2int(szOldGroup1)), FMT_TEXT, true);
		xls.SetCellText(nCol + 5, nRow, double2str(nGrpAmt1), FMT_NUMBER1, true);
		nRow++;
	}
	if (nTotalAmt > 0)
	{
		xls.SetCellText(nCol+3, nRow, _T("Tổng cộng"), FMT_TEXT);
		xls.SetCellText(nCol+5, nRow, ToString(nTotalAmt), FMT_NUMBER1);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGKETXUATKHO.xls"));
} 

CString CPMSGeneralStockExport::GetQueryString(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szStock;
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
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_categoryid = %d"), ToInt(m_szItemGroupKey));
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT product_name        AS pname,") \
		_T("   product_uomname          AS uom,") \
		_T("   unit_price               AS price,") \
		_T("   SUM(expqty)              AS qty,") \
		_T("   SUM(expqty) * unit_price AS amt") \
		_T(" FROM") \
		_T("   (SELECT PRODUCT_ITEM_ID AS sitemid,") \
		_T("     QTYEXPORT             AS expqty,") \
		_T("     unit_price,") \
		_T("     APPROVED_DATE AS expdate,") \
		_T("     STORAGE_ID    AS expstockid") \
		_T("   FROM m_export_view5") \
		_T("   WHERE iotype <> 'MOV'") \
		_T("   UNION ALL") \
		_T("   SELECT PRODUCT_ITEM_ID AS sitemid,") \
		_T("     QTYEXPORT            AS expqty,") \
		_T("     unit_price,") \
		_T("     APPROVED_DATE AS expdate,") \
		_T("     STORAGE_ID    AS expstockid") \
		_T("   FROM m_export_view5") \
		_T("   WHERE iotype           = 'MOV'") \
		_T("   AND STORAGE_TO_ID NOT IN ( %s )") \
		_T("   ) tbl") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( product_item_id = sitemid )") \
		_T(" WHERE 1              =1 %s") \
		_T(" GROUP BY product_name,") \
		_T("   product_uomname,") \
		_T("   unit_price") \
		_T(" ORDER BY pname"), szStock.IsEmpty()?_T("-1"):szStock, szWhere);

	return szSQL;
}

CString CPMSGeneralStockExport::GetQueryString_(CString szQueryID){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szStock;
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
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_categoryid = %d"), ToInt(m_szItemGroupKey));
	if (!m_szExportTypeKey.IsEmpty())
	{
		if (m_szExportTypeKey == _T("01"))
			szWhere.AppendFormat(_T(" AND iotype = 'SOO'"));
		if (m_szExportTypeKey == _T("02"))
			szWhere.AppendFormat(_T(" AND cat_id = 'KQ2'"));
		if (m_szExportTypeKey == _T("03"))
			szWhere.AppendFormat(_T(" AND cat_id = 'KD11'"));
		if (m_szExportTypeKey == _T("04"))
			szWhere.AppendFormat(_T(" AND cat_id = 'XA11'"));
		if (m_szExportTypeKey == _T("05"))
			szWhere.AppendFormat(_T(" AND iotype = 'PRO'"));
		if (m_szExportTypeKey == _T("08"))
			szWhere.AppendFormat(_T(" AND (iotype NOT IN ('SOO', 'PRO', 'EXP') OR (iotype = 'EXP' AND NVL(cat_id, 'X') NOT IN ('KQ2, KD11, XA11')))"));
	}
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	if (szQueryID == _T("D"))
		szSQL.Format(_T(" SELECT lv1,") \
		_T("   lv2,") \
		_T("   product_name             AS pname,") \
		_T("   product_uomname          AS uom,") \
		_T("   unit_price               AS price,") \
		_T("   SUM(expqty)              AS qty,") \
		_T("   SUM(expqty) * unit_price AS amt") \
		_T(" FROM") \
		_T("   (SELECT") \
		_T("     CASE") \
		_T("       WHEN iotype = 'EXP'") \
		_T("       THEN") \
		_T("         CASE adp_partner_category_id") \
		_T("           WHEN CAST('KQ2' AS NVARCHAR2(3))") \
		_T("           THEN 1") \
		_T("           WHEN CAST('KD11' AS NVARCHAR2(4))") \
		_T("           THEN 2") \
		_T("           WHEN CAST('XA11' AS NVARCHAR2(4))") \
		_T("           THEN 3") \
		_T("           ELSE 7") \
		_T("         END") \
		_T("       ELSE") \
		_T("         CASE") \
		_T("           WHEN iotype = 'SOO'") \
		_T("           THEN 0") \
		_T("           ELSE") \
		_T("             CASE") \
		_T("               WHEN iotype = 'PRO'") \
		_T("               THEN 4") \
		_T("               ELSE 7") \
		_T("             END") \
		_T("         END") \
		_T("     END AS lv1,") \
		_T("     CASE") \
		_T("       WHEN iotype NOT                           IN ('SOO', 'PRO', 'EXP')") \
		_T("       OR (iotype                                 = 'EXP'") \
		_T("       AND NVL(adp_partner_category_id, 'X') NOT IN ('KQ2, KD11, XA11'))") \
		_T("       THEN get_doctype(iotype)") \
		_T("       ELSE NULL") \
		_T("     END lv2,") \
		_T("     v5.PRODUCT_ITEM_ID AS sitemid,") \
		_T("     QTYEXPORT       AS expqty,") \
		_T("     unit_price,") \
		_T("     APPROVED_DATE           AS expdate,") \
		_T("     adp_partner_category_id AS cat_id,") \
		_T("     iotype,") \
		_T("     STORAGE_ID AS expstockid") \
		_T("   FROM m_export_view5 v5") \
		_T("   LEFT JOIN m_productitem_view v") \
		_T("   ON ( v5.product_item_id = v.product_item_id)") \
		_T("   LEFT JOIN ad_partner") \
		_T("   ON (iotype        = 'EXP'") \
		_T("   AND department_id = adp_partner_id)") \
		_T("   WHERE iotype     <> 'MOV' AND product_producttype <> 'A1700'") \
		_T("   UNION ALL") \
		_T("   SELECT 7,") \
		_T("     get_doctype('MOV'),") \
		_T("     v5.PRODUCT_ITEM_ID AS sitemid,") \
		_T("     QTYEXPORT       AS expqty,") \
		_T("     unit_price,") \
		_T("     APPROVED_DATE AS expdate,") \
		_T("     CAST('' AS NVARCHAR2(1)),") \
		_T("     CAST('MOV' AS NVARCHAR2(3)),") \
		_T("     STORAGE_ID AS expstockid") \
		_T("   FROM m_export_view5 v5") \
		_T(" LEFT JOIN m_productitem_view v") \
		_T(" ON ( v5.product_item_id = v.product_item_id)") \
		_T("   WHERE iotype           = 'MOV' AND product_producttype <> 'A1700' ") \
		_T("   AND STORAGE_TO_ID NOT IN ( %s )") \
		_T("   UNION ALL") \
		_T("   SELECT 8,") \
		_T("     get_doctype(iotype),") \
		_T("     v5.PRODUCT_ITEM_ID AS sitemid,") \
		_T("     QTYEXPORT       AS expqty,") \
		_T("     unit_price,") \
		_T("     APPROVED_DATE AS expdate,") \
		_T("     CAST('' AS NVARCHAR2(1)),") \
		_T("     CAST('MOV' AS NVARCHAR2(3)),") \
		_T("     STORAGE_ID AS expstockid") \
		_T("   FROM m_export_view5 v5") \
		_T("   LEFT JOIN m_productitem_view v") \
		_T("   ON ( v5.product_item_id = v.product_item_id)") \
		_T("   LEFT JOIN ad_partner") \
		_T("   ON (iotype        = 'EXP'") \
		_T("   AND department_id = adp_partner_id)") \
		_T("   WHERE iotype     <> 'MOV' AND product_producttype = 'A1700'") \
		_T("   UNION ALL") \
		_T("   SELECT 8,") \
		_T("     get_doctype(iotype),") \
		_T("     v5.PRODUCT_ITEM_ID AS sitemid,") \
		_T("     QTYEXPORT       AS expqty,") \
		_T("     unit_price,") \
		_T("     APPROVED_DATE AS expdate,") \
		_T("     CAST('' AS NVARCHAR2(1)),") \
		_T("     CAST('MOV' AS NVARCHAR2(3)),") \
		_T("     STORAGE_ID AS expstockid") \
		_T("   FROM m_export_view5 v5") \
		_T("   LEFT JOIN m_productitem_view v") \
		_T("   ON ( v5.product_item_id = v.product_item_id)") \
		_T("   WHERE iotype     = 'MOV' AND product_producttype = 'A1700' ") \
		_T("   AND STORAGE_TO_ID NOT IN ( %s )") \
		_T("   ) tbl") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( product_item_id = sitemid )") \
		_T(" WHERE 1              =1  %s") \
		_T(" GROUP BY product_name,") \
		_T("   product_uomname,") \
		_T("   unit_price,") \
		_T("   lv1,") \
		_T("   lv2") \
		_T(" ORDER BY lv1,") \
		_T("   lv2,") \
		_T("   pname"), szStock.IsEmpty()?_T("-1"):szStock, szStock.IsEmpty()?_T("-1"):szStock, szWhere);
	else
		szSQL.Format(_T(" SELECT lv1,") \
		_T("   lv2,") \
		_T("   product_name             AS pname,") \
		_T("   product_uomname          AS uom,") \
		_T("   unit_price               AS price,") \
		_T("   SUM(expqty)              AS qty,") \
		_T("   SUM(expqty) * unit_price AS amt") \
		_T(" FROM") \
		_T("   (SELECT") \
		_T("     CASE") \
		_T("       WHEN iotype = 'EXP'") \
		_T("       THEN") \
		_T("         CASE adp_partner_category_id") \
		_T("           WHEN CAST('KQ2' AS NVARCHAR2(3))") \
		_T("           THEN 1") \
		_T("           WHEN CAST('KD11' AS NVARCHAR2(4))") \
		_T("           THEN 2") \
		_T("           WHEN CAST('XA11' AS NVARCHAR2(4))") \
		_T("           THEN 3") \
		_T("           ELSE 7") \
		_T("         END") \
		_T("       ELSE") \
		_T("         CASE") \
		_T("           WHEN iotype = 'SOO'") \
		_T("           THEN 0") \
		_T("           ELSE") \
		_T("             CASE") \
		_T("               WHEN iotype = 'PRO'") \
		_T("               THEN 4") \
		_T("               ELSE 7") \
		_T("             END") \
		_T("         END") \
		_T("     END AS lv1,") \
		_T("     CASE") \
		_T("       WHEN iotype NOT                           IN ('SOO', 'PRO', 'EXP')") \
		_T("       OR (iotype                                 = 'EXP'") \
		_T("       AND NVL(adp_partner_category_id, 'X') NOT IN ('KQ2, KD11, XA11'))") \
		_T("       THEN get_doctype(iotype)") \
		_T("       ELSE NULL") \
		_T("     END lv2,") \
		_T("     PRODUCT_ITEM_ID AS sitemid,") \
		_T("     QTYEXPORT       AS expqty,") \
		_T("     unit_price,") \
		_T("     APPROVED_DATE           AS expdate,") \
		_T("     adp_partner_category_id AS cat_id,") \
		_T("     iotype,") \
		_T("     STORAGE_ID AS expstockid") \
		_T("   FROM m_export_view5") \
		_T("   LEFT JOIN ad_partner") \
		_T("   ON (iotype        = 'EXP'") \
		_T("   AND department_id = adp_partner_id)") \
		_T("   WHERE iotype     <> 'MOV'") \
		_T("   UNION ALL") \
		_T("   SELECT 7,") \
		_T("     get_doctype('MOV'),") \
		_T("     PRODUCT_ITEM_ID AS sitemid,") \
		_T("     QTYEXPORT       AS expqty,") \
		_T("     unit_price,") \
		_T("     APPROVED_DATE AS expdate,") \
		_T("     CAST('' AS NVARCHAR2(1)),") \
		_T("     CAST('MOV' AS NVARCHAR2(3)),") \
		_T("     STORAGE_ID AS expstockid") \
		_T("   FROM m_export_view5") \
		_T("   WHERE iotype           = 'MOV'") \
		_T("   AND STORAGE_TO_ID NOT IN ( %s )") \
		_T("   ) tbl") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( product_item_id = sitemid )") \
		_T(" WHERE 1              =1 %s") \
		_T(" GROUP BY product_name,") \
		_T("   product_uomname,") \
		_T("   unit_price,") \
		_T("   lv1,") \
		_T("   lv2") \
		_T(" ORDER BY lv1,") \
		_T("   lv2,") \
		_T("   pname"), szStock.IsEmpty()?_T("-1"):szStock, szWhere);
		
	return szSQL;
}

void CPMSGeneralStockExport::OnPrintbyItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail, *rptHeader, *rptGroup;
	CString szSQL, tmpStr;
	CStringArray arrLabel;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldCat, szNewCat, szNewCat1, szOldCat1;
	double nGrpAmt = 0, nTotalAmt = 0, nGrpAmt1 = 0;
	int nIdx = 1, j = 0;
	if (!rpt.Init(_T("Reports\\HMS\\PM_BAOCAOTONGKETXUATKHO.RPT")))
	{
		return;
	}
	szSQL = GetQueryString_(_T("D"));
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	arrLabel.Add(_T("Xuất bán cho BN"));
	arrLabel.Add(_T("Xuất nội bộ(Quầy 1-> Quầy 2)"));
	arrLabel.Add(_T("Xuất cho kho(bộ đôi- bảo hiểm)"));
	arrLabel.Add(_T("Xuất cho khoa A11"));
	arrLabel.Add(_T("Xuất trả lại công ty"));
	arrLabel.Add(_T("Xuất chương trình khác"));
	arrLabel.Add(_T("Xuất hủy"));
	arrLabel.Add(_T("Xuất bán hàng"));
	arrLabel.Add(_T("Xuất bán TPCN"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr = _T("Toàn bộ");
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
		rs.GetValue(_T("lv1"), szNewCat);
		rs.GetValue(_T("lv2"), szNewCat1);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			if (nGrpAmt1 > 0)
			{
				//_msg(_T("\nszNewCat1:|%s|"), szNewCat1);
				if (!szOldCat1.IsEmpty())
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, szOldCat1);
					rptGroup->SetValue(_T("tongso"), tmpStr);
					rptGroup->SetValue(_T("s6"), double2str(nGrpAmt1));
				}
				nGrpAmt1 = 0;
			}
			if (nGrpAmt > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, arrLabel.GetAt(str2int(szOldCat)));
				rptGroup->SetValue(_T("tongso"), tmpStr);
				rptGroup->SetValue(_T("s6"), double2str(nGrpAmt));
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptGroup->SetValue(_T("GroupName"), arrLabel.GetAt(str2int(szNewCat)));
			nGrpAmt = 0;
			szOldCat1.Empty();
			szOldCat = szNewCat;
			
		}
		if (szNewCat1 != szOldCat1)
		{
			if (nGrpAmt1 > 0)
			{
				if (!szOldCat1.IsEmpty())
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, szOldCat1);
					rptGroup->SetValue(_T("tongso"), tmpStr);
					rptGroup->SetValue(_T("s6"), double2str(nGrpAmt1));
				}
				nGrpAmt1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptGroup->SetValue(_T("GroupName"), szNewCat1);
			szOldCat1 = szNewCat1;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		//tmpStr.Format(_T("%s %s"), rs.GetValue(_T("pname")), rs.GetValue(_T("pname2")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("uom")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("price")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("qty")));
		rs.GetValue(_T("amt"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		nGrpAmt += str2double(tmpStr);
		nGrpAmt1 += str2double(tmpStr);
		nTotalAmt += str2double(tmpStr);
		rs.MoveNext();
	}
	//Footer
	if (nGrpAmt1 > 0)
	{
		if (!szOldCat1.IsEmpty())
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, szOldCat1);
			rptGroup->SetValue(_T("tongso"), tmpStr);
			rptGroup->SetValue(_T("s6"), double2str(nGrpAmt1));
		}
		nGrpAmt1 = 0;
	}
	if (nGrpAmt > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, arrLabel.GetAt(str2int(szOldCat)));
		rptGroup->SetValue(_T("tongso"), tmpStr);
		rptGroup->SetValue(_T("s6"), double2str(nGrpAmt));
	}
	if (nTotalAmt > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("tongso"), _T("Tổng cộng:"));
		rptGroup->SetValue(_T("s6"), double2str(nTotalAmt));
	}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}
void CPMSGeneralStockExport::OnPrintbyItem1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail, *rptHeader, *rptGroup;
	CString szSQL, tmpStr;
	CStringArray arrLabel;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldCat, szNewCat, szNewCat1, szOldCat1;
	double nGrpAmt = 0, nTotalAmt = 0, nGrpAmt1 = 0;
	int nIdx = 1, j = 0;
	if (!rpt.Init(_T("Reports\\HMS\\PM_BAOCAOTONGKETXUATKHO1.RPT")))
	{
		return;
	}
	szSQL = GetQueryString_(_T("D"));
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	arrLabel.Add(_T("Xuất bán cho BN"));
	arrLabel.Add(_T("Xuất nội bộ(Quầy 1-> Quầy 2)"));
	arrLabel.Add(_T("Xuất cho kho(bộ đôi- bảo hiểm)"));
	arrLabel.Add(_T("Xuất cho khoa A11"));
	arrLabel.Add(_T("Xuất trả lại công ty"));
	arrLabel.Add(_T("Xuất chương trình khác"));
	arrLabel.Add(_T("Xuất hủy"));
	arrLabel.Add(_T("Xuất bán hàng"));
	arrLabel.Add(_T("Xuất bán TPCN"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr = _T("Toàn bộ");
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
		rs.GetValue(_T("lv1"), szNewCat);
		rs.GetValue(_T("lv2"), szNewCat1);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			if (nGrpAmt1 > 0)
			{
				//_msg(_T("\nszNewCat1:|%s|"), szNewCat1);
				if (!szOldCat1.IsEmpty())
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, szOldCat1);
					rptGroup->SetValue(_T("tongso"), tmpStr);
					rptGroup->SetValue(_T("s6"), double2str(nGrpAmt1));
				}
				nGrpAmt1 = 0;
			}
			if (nGrpAmt > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, arrLabel.GetAt(str2int(szOldCat)));
				rptGroup->SetValue(_T("tongso"), tmpStr);
				rptGroup->SetValue(_T("s6"), double2str(nGrpAmt));
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptGroup->SetValue(_T("GroupName"), arrLabel.GetAt(str2int(szNewCat)));
			nGrpAmt = 0;
			szOldCat1.Empty();
			szOldCat = szNewCat;

		}
		if (szNewCat1 != szOldCat1)
		{
			if (nGrpAmt1 > 0)
			{
				if (!szOldCat1.IsEmpty())
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, szOldCat1);
					rptGroup->SetValue(_T("tongso"), tmpStr);
					rptGroup->SetValue(_T("s6"), double2str(nGrpAmt1));
				}
				nGrpAmt1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptGroup->SetValue(_T("GroupName"), szNewCat1);
			szOldCat1 = szNewCat1;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		//tmpStr.Format(_T("%s %s"), rs.GetValue(_T("pname")), rs.GetValue(_T("pname2")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("uom")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("price")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("qty")));
		rs.GetValue(_T("amt"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		nGrpAmt += str2double(tmpStr);
		nGrpAmt1 += str2double(tmpStr);
		nTotalAmt += str2double(tmpStr);
		rs.MoveNext();
	}
	//Footer
	if (nGrpAmt1 > 0)
	{
		if (!szOldCat1.IsEmpty())
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, szOldCat1);
			rptGroup->SetValue(_T("tongso"), tmpStr);
			rptGroup->SetValue(_T("s6"), double2str(nGrpAmt1));
		}
		nGrpAmt1 = 0;
	}
	if (nGrpAmt > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s %s"), rptGroup->GetItem(_T("tongso"))->m_szText, arrLabel.GetAt(str2int(szOldCat)));
		rptGroup->SetValue(_T("tongso"), tmpStr);
		rptGroup->SetValue(_T("s6"), double2str(nGrpAmt));
	}
	if (nTotalAmt > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("tongso"), _T("Tổng cộng:"));
		rptGroup->SetValue(_T("s6"), double2str(nTotalAmt));
	}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}

void CPMSGeneralStockExport::OnPrintbyOrder(){

}
void CPMSGeneralStockExport::OnPrintbyOrder1(){

}
BEGIN_MESSAGE_MAP(CPMSGeneralStockExport, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSGeneralStockExport::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
