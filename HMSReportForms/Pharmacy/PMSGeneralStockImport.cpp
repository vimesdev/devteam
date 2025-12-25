#include "stdafx.h"
#include "PMSGeneralStockImport.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSGeneralStockImport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSGeneralStockImport *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSGeneralStockImport* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSGeneralStockImport *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnStorageAddNew();
}*/
static long _OnImportTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSGeneralStockImport *)pWnd)->OnImportTypeLoadData();
}
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CPMSGeneralStockImport *)pWnd)->OnVendorLoadData();
}
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSGeneralStockImport* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMSGeneralStockImport *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CPMSGeneralStockImport *)pWnd)->OnItemGroupAddNew();
}*/
static long _OnItemTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSGeneralStockImport *)pWnd)->OnItemTypeLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSGeneralStockImport *pVw = (CPMSGeneralStockImport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSGeneralStockImport *pVw = (CPMSGeneralStockImport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSGeneralStockImport *pVw = (CPMSGeneralStockImport *)pWnd;
	pVw->OnExportSelect();
} 
CPMSGeneralStockImport::CPMSGeneralStockImport(CWnd *pParent){

	m_nDlgWidth = 545;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CPMSGeneralStockImport::~CPMSGeneralStockImport(){
}
void CPMSGeneralStockImport::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStorage.SetCheckBox(true);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this,95, 60, 290, 85); 
	m_wndItemTypeLabel.Create(this, _T("Item Type"), 295, 60, 375, 85);
	m_wndItemType.Create(this,380, 60, 570, 85); 
	m_wndImportTypeLabel.Create(this, _T("Import Type"), 10, 90, 90, 115);
	m_wndImportType.Create(this,95, 90, 290, 115); 
	m_wndVendorLabel.Create(this, _T("Vendor"), 295, 90, 375, 115);
	m_wndVendor.Create(this,380, 90, 570, 115); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 120, 90, 145);
	m_wndItemGroup.Create(this,95, 120, 570, 145); 
	m_wndGroupBySupplier.Create(this, _T("Group by Supplier"), 5, 155, 135, 180);
	m_wndByImportDate.Create(this, _T("By Import Date"), 140, 155, 290, 180);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 380, 155, 490, 180);
	m_wndPrint.Create(this, _T("&Print QT"), 380, 185, 490, 210);
	m_wndExport.Create(this, _T("&Export"), 495, 155, 575, 180);

}
void CPMSGeneralStockImport::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.LimitText(35);
	m_wndItemGroup.LimitText(35);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);
	
	m_wndItemGroup.Format(3, 2);
	m_wndItemGroup.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndItemGroup.InsertColumn(1, _T("Code"), CFMT_TEXT, 60);
	m_wndItemGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 400);
	
	m_wndItemType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndItemType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndImportType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndImportType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndVendor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndVendor.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
}
void CPMSGeneralStockImport::OnSetWindowEvents(){
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
	m_wndImportType.SetEvent(WE_LOADDATA, _OnImportTypeLoadDataFnc);
	m_wndVendor.SetEvent(WE_LOADDATA, _OnVendorLoadDataFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	m_wndItemType.SetEvent(WE_LOADDATA, _OnItemTypeLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CPMSGeneralStockImport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndImportType.GetDlgCtrlID(), m_szImportTypeKey);
	DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_TextEx(pDX, m_wndItemType.GetDlgCtrlID(), m_szItemTypeKey);
	DDX_Check(pDX, m_wndGroupBySupplier.GetDlgCtrlID(), m_bGroupBySupplier);
	DDX_Check(pDX, m_wndByImportDate.GetDlgCtrlID(), m_bByImportDate);

}
void CPMSGeneralStockImport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_szItemTypeKey.Empty();
	m_bGroupBySupplier = FALSE;
	m_bByImportDate = FALSE;
	m_szImportTypeKey.Empty();
	m_szVendorKey.Empty();
	m_szStorageIDS.Empty();

}
int CPMSGeneralStockImport::SetMode(int nMode){
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
/*void CPMSGeneralStockImport::OnFromDateChange(){
	
} */
/*void CPMSGeneralStockImport::OnFromDateSetfocus(){
	
} */
/*void CPMSGeneralStockImport::OnFromDateKillfocus(){
	
} */
int CPMSGeneralStockImport::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSGeneralStockImport::OnToDateChange(){
	
} */
/*void CPMSGeneralStockImport::OnToDateSetfocus(){
	
} */
/*void CPMSGeneralStockImport::OnToDateKillfocus(){
	
} */
int CPMSGeneralStockImport::OnToDateCheckValue(){
	return 0;
} 
void CPMSGeneralStockImport::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSGeneralStockImport::OnStorageSelendok(){
	 
}
/*void CPMSGeneralStockImport::OnStorageSetfocus(){
	
}*/
/*void CPMSGeneralStockImport::OnStorageKillfocus(){
	
}*/
long CPMSGeneralStockImport::OnStorageLoadData(){
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
/*void CPMSGeneralStockImport::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

long CPMSGeneralStockImport::OnImportTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//Nhap cty
	m_wndImportType.AddItems(_T("01"), _T("Nhập công ty"), NULL);
	//Nhap noi bo (quay 1 -> quay 2)
	m_wndImportType.AddItems(_T("02"), _T("Nhập nội bộ (Quầy 1->Quầy 2...)"), NULL);
	//Nhap tu kho (bo doi - bao hiem)
	m_wndImportType.AddItems(_T("03"), _T("Nhập từ kho (bộ đội- bảo hiểm)"), NULL);
	//Nhap tra tu A11
	m_wndImportType.AddItems(_T("04"), _T("Nhập trả từ A11"), NULL);
	//Nhap tra lai
	m_wndImportType.AddItems(_T("05"), _T("Nhập do bệnh nhân trả lại"), NULL);
	//Nhap khac
	m_wndImportType.AddItems(_T("06"), _T("Nhập khác (mua lẻ, vay)"), NULL);
	//Dieu chinh
	m_wndImportType.AddItems(_T("07"), _T("Nhập điều chỉnh"), NULL);
	//Dieu chuyen
	m_wndImportType.AddItems(_T("08"), _T("Nhập điều chuyển"), NULL);
	return 8;
}

long CPMSGeneralStockImport::OnVendorLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndVendor, m_szVendorKey);
}

void CPMSGeneralStockImport::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSGeneralStockImport::OnItemGroupSelendok(){
	 
}
/*void CPMSGeneralStockImport::OnItemGroupSetfocus(){
	
}*/
/*void CPMSGeneralStockImport::OnItemGroupKillfocus(){
	
}*/
long CPMSGeneralStockImport::OnItemGroupLoadData(){
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
/*void CPMSGeneralStockImport::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

long CPMSGeneralStockImport::OnItemTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//return pMF->LoadProductTypeList(&m_wndItemType, m_szTypeKey);
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
	m_wndItemType.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndItemType.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
void CPMSGeneralStockImport::OnPrintPreviewSelect(){
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
	if (m_bGroupBySupplier)
		OnCheckPrint();
	else
		OnStdPrint();
}
void CPMSGeneralStockImport::OnPrintSelect(){
	UpdateData(true);
	CGuiMenu menu(this);
	CRect rect;
	int nPos = 0;
	menu.CreatePopupMenu();
	m_wndPrint.GetWindowRect(&rect);
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
	if (m_bGroupBySupplier)
		OnCheckPrint();
	else
		OnStdPrint();
}
void CPMSGeneralStockImport::OnStdPrint(){
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
	if (!rpt.Init(_T("Reports\\HMS\\PMS_BAOCAOTONGKETNHAPKHO.RPT")))
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
	arrDat.Add(_T("Nhập có hóa đơn"));
	arrDat.Add(_T("Nhập khác"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
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
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}

void CPMSGeneralStockImport::OnCheckPrint(){
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
	if (!rpt.Init(_T("Reports\\HMS\\PMS_BAOCAOTONGKETNHAPKHO_2.RPT")))
	{
		return;
	}
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
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}

void CPMSGeneralStockImport::OnExportSelect(){
	UpdateData(true);
	if (m_bGroupBySupplier)
		OnCheckExport();
	else
		OnStdExport();
}

void CPMSGeneralStockImport::OnStdExport(){
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
	xls.SetCellText(nCol, nRow + 3, _T("BÁO CÁO TỔNG KẾT NHẬP KHO"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
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
	xls.SetCellText(nCol+1, nRow, _T("Mã số"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow, _T("Tên thuốc, hàm lượng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("ĐVT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow, _T("Công ty"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow, _T("Tổng số nhập kho"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow+1, _T("Số lượng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+6, nRow+1, _T("Đơn giá"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+7, nRow+1, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+8, nRow, _T("Ghi chú"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	nRow = 7;
	arrDat.Add(_T("Nhập có hóa đơn"));
	arrDat.Add(_T("Nhập khác"));
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
		xls.SetCellText(nCol + 6, nRow, _T("Tổng cộng"), 4098, true);
		tmpStr.Format(_T("%.2f"), nTotalAmt);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGKETNHAPKHO.xls"));
} 

void CPMSGeneralStockImport::OnCheckExport(){
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
	xls.SetCellText(nCol, nRow + 3, _T("BÁO CÁO TỔNG KẾT NHẬP KHO"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
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
	xls.SetCellText(nCol+1, nRow, _T("Mã số"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow, _T("Tên thuốc, hàm lượng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("ĐVT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow, _T("Tổng số nhập kho"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow+1, _T("Số lượng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow+1, _T("Đơn giá"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+6, nRow+1, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+7, nRow, _T("Ghi chú"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
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
		xls.SetCellText(nCol+5, nRow, _T("Tổng cộng"), 4098, true);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGKETNHAPKHO.xls"));
}

CString CPMSGeneralStockImport::GetQueryString(int nSort){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szStock, szOrderBy, szField, szSubSelect;
	szOrderBy.Empty();
	szStock.Empty();
	szWhere.Format(_T(" AND impdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
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
		szWhere.AppendFormat(_T(" AND impstockid IN (%s)"), szStock);
		//Trong truong hop dieu chuyen, ko tinh dc giua nhieu kho dc chon
		if (szStock.Find(',') != -1)
			szWhere.AppendFormat(_T(" AND expstockid NOT IN (%s)"), szStock);
		m_szStorageIDS = szStock;
	}
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_categoryid = %d"), ToInt(m_szItemGroupKey));
	if (!m_szItemTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemTypeKey);
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szOrderBy.Format(_T("type_line, product_name, partner_name"));//order theo loai:nhap hoa don va nhap ko hoa don
	szField.Format(_T("type_line, "));
	if (nSort == 1)
	{
		szOrderBy.Format(_T("partner_name, product_name"));//order theo nha cung cap
		szWhere.AppendFormat(_T(" AND iotype = 'POO'"));
	}
	else
		szSubSelect.Format(_T(" UNION ALL   SELECT    product_name            AS product_name, ") \
					_T("                   product_code, ") \
					_T("                   product_uomname         AS product_uom, ") \
					_T("                   cast('Z' as nvarchar2(1)) partner_id, ") \
					_T("                   product_vatprice AS unit_price, ") \
					_T("                   impqty                  AS qty, ") \
					_T("                   impqty * product_vatprice AS amount, ") \
					_T("				   1") \
					_T("         FROM      miv ") \
					_T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = sitemid ) ") \
					_T("         WHERE     iotype = 'MOV' %s "), szWhere);
	szSQL.Format(_T(" SELECT %s product_name, ") \
	_T("        product_code, ") \
	_T("        product_uom, ") \
	_T("		partner_id,") \
	_T("        Get_partnername(partner_id) partner_name, ") \
	_T("        unit_price, ") \
	_T("        SUM(qty) qty, ") \
	_T("        SUM(amount) amount") \
	_T(" FROM   (SELECT    product_name            AS product_name, ") \
	_T("                   product_code, ") \
	_T("                   product_uomname         AS product_uom, ") \
	_T("                   Nvl(po_partner_id, 'Z') partner_id, ") \
	_T("                   product_vatprice AS unit_price, ") \
	_T("                   impqty                  AS qty, ") \
	_T("                   impqty * product_vatprice AS amount, ") \
	_T("				   case when iotype = 'POO' THEN 0 ELSE 1 END type_line") \
	_T("         FROM      miv ") \
	_T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = sitemid ) ") \
	_T("         LEFT JOIN purchase_order ON ( po_purchase_order_id = invoiceid ") \
	_T("                                       AND iotype = 'POO' ) ") \
	_T("         WHERE     iotype <> 'MOV' %s %s) ") \
	_T(" GROUP  BY %s product_code, ") \
	_T("           product_name, ") \
	_T("           product_uom, ") \
	_T("           partner_id, ") \
	_T("           unit_price ") \
	_T(" ORDER  BY %s"), szField, szWhere, szSubSelect, szField, szOrderBy);
	return szSQL;
}

void CPMSGeneralStockImport::OnPrintbyOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrevMark, szCurMark, szPrevMark1, szCurMark1, szCurDate;
	long nTmp = 0, nGrpTtl = 0, nGrpTtl1 = 0;
	long double nTotal = 0;
	int nIdx = 1;
	CStringArray arrDat;
	CReport rpt;
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptGroup = NULL;
	if (!rpt.Init(_T("Reports\\HMS\\PM_BANGKEPHIEUNHAP.RPT")))
		return;
	szSQL = GetQueryString_(_T(""));
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	arrDat.Add(_T("Nhập công ty"));
	arrDat.Add(_T("Nhập nội bộ (Quầy 1->Quầy 2...)"));
	arrDat.Add(_T("Nhập từ kho (bộ đội- bảo hiểm)"));
	arrDat.Add(_T("Nhập trả từ A11"));
	arrDat.Add(_T("Nhập do bệnh nhân trả lại"));
	arrDat.Add(_T("Nhập khác (mua lẻ, vay)"));
	arrDat.Add(_T("Nhập điều chỉnh"));
	arrDat.Add(_T("Nhập điều chuyển"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		if (!m_szStorageIDS.IsEmpty())
			rptHeader->SetValue(_T("StockName"), m_szStorageIDS);
		else
			rptHeader->SetValue(_T("StockName"), _T("Toàn bộ"));
		if (!m_szItemTypeKey.IsEmpty())
			rptHeader->SetValue(_T("Type"), m_wndItemType.GetCurrent(1));
		else
			rptHeader->SetValue(_T("Type"), _T("Toàn bộ"));
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("type_line"), szCurMark);
		rs.GetValue(_T("partner_name"), szCurMark1);
		if (szCurMark != szPrevMark)
		{
			if (nGrpTtl1 > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
				}
				nGrpTtl1 = 0;
			}
			if (nGrpTtl > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), arrDat.GetAt(str2int(szPrevMark)));
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl));
				}
				nGrpTtl = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), arrDat.GetAt(str2int(szCurMark)));
			szPrevMark = szCurMark;
			szPrevMark1.Empty();
		}
		if (szCurMark1 != szPrevMark1)
		{
			if (nGrpTtl1 > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
				}
				nGrpTtl1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szCurMark1);
			szPrevMark1 = szCurMark1;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("impinvoice")));
		tmpStr = CDate::Convert(rs.GetValue(_T("impdate")));
		rptDetail->SetValue(_T("3"), tmpStr);
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("partner_name")));
		rs.GetValue(_T("amount"), nTmp);
		nGrpTtl += nTmp;
		nGrpTtl1 += nTmp;
		nTotal += nTmp;
		rptDetail->SetValue(_T("5"), double2str(nTmp));
		rs.MoveNext();
	}
	if (nGrpTtl1 > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
			rptGroup->SetValue(_T("TotalGroup"), tmpStr);
			rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
		}
	}
	if (nGrpTtl > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), arrDat.GetAt(str2int(szPrevMark)));
			rptGroup->SetValue(_T("TotalGroup"), tmpStr);
			rptGroup->SetValue(_T("s5"), double2str(nGrpTtl));
		}
	}
	if (nTotal > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%f"), nTotal);
			rptGroup->SetValue(_T("s5"), tmpStr);
		}
	}
	rptGroup = rpt.GetReportFooter();
	if (rptGroup)
	{
		szCurDate = pMF->GetSysDate();
		tmpStr.Format(rptGroup->GetValue(_T("PrintDate")), szCurDate.Right(2), szCurDate.Mid(5, 2), szCurDate.Left(4));
		rptGroup->SetValue(_T("PrintDate"), tmpStr);
	}
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	rpt.PrintPreview();
}
void CPMSGeneralStockImport::OnPrintbyOrder1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrevMark, szCurMark, szPrevMark1, szCurMark1, szCurDate;
	long nTmp = 0, nGrpTtl = 0, nGrpTtl1 = 0;
	long double nTotal = 0;
	int nIdx = 1;
	CStringArray arrDat;
	CReport rpt;
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptGroup = NULL;
	if (!rpt.Init(_T("Reports\\HMS\\PM_BANGKEPHIEUNHAP1.RPT")))
		return;
	szSQL = GetQueryString_(_T(""));
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	arrDat.Add(_T("Nhập công ty"));
	arrDat.Add(_T("Nhập nội bộ (Quầy 1->Quầy 2...)"));
	arrDat.Add(_T("Nhập từ kho (bộ đội- bảo hiểm)"));
	arrDat.Add(_T("Nhập trả từ A11"));
	arrDat.Add(_T("Nhập do bệnh nhân trả lại"));
	arrDat.Add(_T("Nhập khác (mua lẻ, vay)"));
	arrDat.Add(_T("Nhập điều chỉnh"));
	arrDat.Add(_T("Nhập điều chuyển"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		if (!m_szStorageIDS.IsEmpty())
			rptHeader->SetValue(_T("StockName"), m_szStorageIDS);
		else
			rptHeader->SetValue(_T("StockName"), _T("Toàn bộ"));
		if (!m_szItemTypeKey.IsEmpty())
			rptHeader->SetValue(_T("Type"), m_wndItemType.GetCurrent(1));
		else
			rptHeader->SetValue(_T("Type"), _T("Toàn bộ"));
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("type_line"), szCurMark);
		rs.GetValue(_T("partner_name"), szCurMark1);
		if (szCurMark != szPrevMark)
		{
			if (nGrpTtl1 > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
				}
				nGrpTtl1 = 0;
			}
			if (nGrpTtl > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), arrDat.GetAt(str2int(szPrevMark)));
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl));
				}
				nGrpTtl = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), arrDat.GetAt(str2int(szCurMark)));
			szPrevMark = szCurMark;
			szPrevMark1.Empty();
		}
		if (szCurMark1 != szPrevMark1)
		{
			if (nGrpTtl1 > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
				}
				nGrpTtl1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szCurMark1);
			szPrevMark1 = szCurMark1;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("impinvoice")));
		tmpStr = CDate::Convert(rs.GetValue(_T("impdate")));
		rptDetail->SetValue(_T("3"), tmpStr);
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("partner_name")));
		rs.GetValue(_T("amount"), nTmp);
		nGrpTtl += nTmp;
		nGrpTtl1 += nTmp;
		nTotal += nTmp;
		rptDetail->SetValue(_T("5"), double2str(nTmp));
		rs.MoveNext();
	}
	if (nGrpTtl1 > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
			rptGroup->SetValue(_T("TotalGroup"), tmpStr);
			rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
		}
	}
	if (nGrpTtl > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), arrDat.GetAt(str2int(szPrevMark)));
			rptGroup->SetValue(_T("TotalGroup"), tmpStr);
			rptGroup->SetValue(_T("s5"), double2str(nGrpTtl));
		}
	}
	if (nTotal > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%f"), nTotal);
			rptGroup->SetValue(_T("s5"), tmpStr);
		}
	}
	rptGroup = rpt.GetReportFooter();
	if (rptGroup)
	{
		szCurDate = pMF->GetSysDate();
		tmpStr.Format(rptGroup->GetValue(_T("PrintDate")), szCurDate.Right(2), szCurDate.Mid(5, 2), szCurDate.Left(4));
		rptGroup->SetValue(_T("PrintDate"), tmpStr);
	}
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	rpt.PrintPreview();
}
void CPMSGeneralStockImport::OnPrintbyItem(){
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
	if (!rpt.Init(_T("Reports\\HMS\\PMS_BAOCAOTONGKETNHAPKHO.RPT")))
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
	arrDat.Add(_T("Nhập công ty"));
	arrDat.Add(_T("Nhập nội bộ (Quầy 1->Quầy 2...)"));
	arrDat.Add(_T("Nhập từ kho (bộ đội- bảo hiểm)"));
	arrDat.Add(_T("Nhập trả từ A11"));
	arrDat.Add(_T("Nhập do bệnh nhân trả lại"));
	arrDat.Add(_T("Nhập khác (mua lẻ, vay)"));
	arrDat.Add(_T("Nhập điều chỉnh"));
	arrDat.Add(_T("Nhập điều chuyển"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
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
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("product_uomname")));
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
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}
void CPMSGeneralStockImport::OnPrintbyItem1(){
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
	if (!rpt.Init(_T("Reports\\HMS\\PMS_BAOCAOTONGKETNHAPKHO1.RPT")))
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
	arrDat.Add(_T("Nhập công ty"));
	arrDat.Add(_T("Nhập nội bộ (Quầy 1->Quầy 2...)"));
	arrDat.Add(_T("Nhập từ kho (bộ đội- bảo hiểm)"));
	arrDat.Add(_T("Nhập trả từ A11"));
	arrDat.Add(_T("Nhập do bệnh nhân trả lại"));
	arrDat.Add(_T("Nhập khác (mua lẻ, vay)"));
	arrDat.Add(_T("Nhập điều chỉnh"));
	arrDat.Add(_T("Nhập điều chuyển"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
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
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("product_uomname")));
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
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
}
CString CPMSGeneralStockImport::GetQueryString_(CString szQueryID){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szOrderBy, szStock;
	szWhere.Format(_T(" AND impdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
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
		szWhere.AppendFormat(_T(" AND impstockid IN (%s)"), szStock);
		//Trong truong hop dieu chuyen, ko tinh dc giua nhieu kho dc chon
		/*if (szStock.Find(',') != -1)
			szWhere.AppendFormat(_T(" AND expstockid NOT IN (%s)"), szStock);*/
		m_szStorageIDS = szStock;
	}
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_categoryid = %d"), ToInt(m_szItemGroupKey));
	if (!m_szItemTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemTypeKey);
	if (!m_szImportTypeKey.IsEmpty())
	{
		if (m_szImportTypeKey == _T("01"))
			szWhere.AppendFormat(_T(" AND iotype = 'POO' AND NVL(adp_partner_category_id, 'CTY') = 'CTY'"));
		if (m_szImportTypeKey == _T("02"))
			szWhere.AppendFormat(_T(" AND iotype = 'POO' AND NVL(adp_partner_category_id, 'CTY') = 'NB'"));
		if (m_szImportTypeKey == _T("03"))
			szWhere.AppendFormat(_T(" AND iotype = 'POO' AND NVL(adp_partner_category_id, 'CTY') = 'DC'"));
		if (m_szImportTypeKey == _T("04"))
			szWhere.AppendFormat(_T(" AND iotype = 'POO' AND NVL(adp_partner_category_id, 'CTY') = 'A11'"));
		if (m_szImportTypeKey == _T("05"))
			szWhere.AppendFormat(_T(" AND iotype IN ('CRO', 'DRO', 'RRO')"));
		if (m_szImportTypeKey == _T("06"))
			szWhere.AppendFormat(_T(" AND iotype = 'POO' AND NVL(adp_partner_category_id, 'CTY') = 'NK'"));
		if (m_szImportTypeKey == _T("07"))
			szWhere.AppendFormat(_T(" AND iotype IN ('ADO')"));
		if (m_szImportTypeKey == _T("08"))
			szWhere.AppendFormat(_T(" AND iotype IN ('MOV')"));
	}
	if (!m_szVendorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND adp_partner_id = '%s'"), m_szVendorKey);
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	//order theo loai:nhap hoa don va nhap ko hoa don
	szOrderBy = _T(", partner_name");
	if (m_bByImportDate)
		szOrderBy = _T(", impdate, partner_name, product_name");
	else
		szOrderBy = _T(", product_name, partner_name, impdate");
	if (szQueryID == _T("D"))
		szSQL.Format(_T("SELECT type_line, ") \
		_T("        product_code, ") \
		_T("        product_uomname, ") \
		_T("        unit_price, ") \
		_T("        SUM(qty) qty, ") \
		_T("        SUM(amount) amount %s") \
		_T(" FROM (") \
		_T(" SELECT CASE WHEN iotype = 'POO' THEN CASE NVL(adp_partner_category_id, 'CTY') WHEN cast('CTY' as nvarchar2(5)) THEN 0 WHEN cast('NB' as nvarchar2(5)) THEN 1 WHEN cast('DC' as nvarchar2(5)) THEN 2 WHEN cast('A11' as nvarchar2(5)) THEN 3 WHEN cast('NK' as nvarchar2(5)) THEN 5 END ELSE CASE WHEN iotype IN ('CRO', 'DRO', 'RRO') THEN 4 ELSE CASE WHEN iotype = 'ADO' THEN 6 ELSE CASE WHEN iotype = 'MOV' THEN 7 END END END END AS ") \
		_T("		type_line, ") \
		_T("		impdate,") \
		_T("		product_name, ") \
		_T("        product_code, ") \
		_T("        product_uomname, ") \
		_T("        descr AS partner_name, ") \
		_T("        product_vatprice unit_price, ") \
		_T("        qty, ") \
		_T("        qty * product_vatprice amount") \
		_T(" FROM   (SELECT    impdate, impstockid, expstockid, invoiceid, iotype, sitemid, impqty AS qty, descr ") \
		_T("         FROM      miv ") \
		_T("         WHERE     iotype <> 'MOV' ") \
		_T("		 UNION ALL ") \
		_T("		 SELECT    impdate, impstockid, expstockid, invoiceid, iotype, sitemid, impqty AS qty, descr ") \
		_T("         FROM      miv ") \
		_T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = sitemid ) ") \
		_T("         WHERE     iotype = 'MOV' AND expstockid NOT IN (%s)) ") \
		_T(" LEFT JOIN m_productitem_view3 ON ( product_item_id = sitemid ) ") \
		_T(" LEFT JOIN purchase_order ON ( po_purchase_order_id = invoiceid AND iotype = 'POO' ) ") \
		_T(" LEFT JOIN ad_partner ON (adp_partner_id = po_partner_id)") \
		_T(" WHERE 1=1 %s)") \
		_T(" GROUP  BY type_line, product_code, ") \
		_T("           product_name, ") \
		_T("           product_uomname, ") \
		_T("           unit_price %s") \
		_T(" ORDER  BY type_line %s"), szOrderBy, szStock.IsEmpty()?_T("-1"):szStock, szWhere, szOrderBy, szOrderBy);
	else
		szSQL.Format(_T("SELECT type_line, ") \
		_T("		impinvoice,") \
		_T("		impdate,") \
		_T("		adp_partner_id,") \
		_T("		partner_name,") \
		_T("        SUM(amount) amount") \
		_T(" FROM (") \
		_T(" SELECT CASE WHEN iotype = 'POO' THEN CASE NVL(adp_partner_category_id, 'CTY') WHEN cast('CTY' as nvarchar2(5)) THEN 0 WHEN cast('NB' as nvarchar2(5)) THEN 1 WHEN cast('DC' as nvarchar2(5)) THEN 2 WHEN cast('A11' as nvarchar2(5)) THEN 3 WHEN cast('NK' as nvarchar2(5)) THEN 5 END ELSE CASE WHEN iotype IN ('CRO', 'DRO', 'RRO') THEN 4 ELSE CASE WHEN iotype = 'ADO' THEN 6 ELSE CASE WHEN iotype = 'MOV' THEN 7 END END END END AS ") \
		_T("		type_line, ") \
		_T("		impinvoice,") \
		_T("		impdate,") \
		_T("		product_name, ") \
		_T("        product_code, ") \
		_T("        product_uomname, ") \
		_T("		adp_partner_id,") \
		_T("        descr AS partner_name, ") \
		_T("        product_vatprice unit_price, ") \
		_T("        qty, ") \
		_T("        qty * product_vatprice amount") \
		_T(" FROM   (SELECT    impdate, impstockid, expstockid, invoiceid, impinvoice, iotype, sitemid, impqty AS qty, descr ") \
		_T("         FROM      miv ") \
		_T("         WHERE     iotype <> 'MOV' ") \
		_T("		 UNION ALL ") \
		_T("		 SELECT    impdate, impstockid, expstockid, invoiceid, impinvoice, iotype, sitemid, impqty AS qty, descr ") \
		_T("         FROM      miv ") \
		_T("         WHERE     iotype = 'MOV' AND expstockid NOT IN (%s)) ") \
		_T(" LEFT JOIN m_productitem_view3 ON ( product_item_id = sitemid ) ") \
		_T(" LEFT JOIN purchase_order ON ( po_purchase_order_id = invoiceid AND iotype = 'POO' ) ") \
		_T(" LEFT JOIN ad_partner ON (adp_partner_id = po_partner_id)") \
		_T(" WHERE 1=1 %s)") \
		_T(" GROUP  BY type_line, impinvoice, ") \
		_T("           impdate, ") \
		_T("           adp_partner_id, ") \
		_T("           partner_name") \
		_T(" ORDER  BY type_line, adp_partner_id"), szStock.IsEmpty()?_T("-1"):szStock, szWhere);

	return szSQL;
}

BEGIN_MESSAGE_MAP(CPMSGeneralStockImport, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSGeneralStockImport::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
