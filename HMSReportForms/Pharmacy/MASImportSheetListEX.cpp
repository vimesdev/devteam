#include "stdafx.h"
#include "MASImportSheetListEX.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
#include ".\masimportsheetlist.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMASImportSheetListEX *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMASImportSheetListEX *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMASImportSheetListEX* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CMASImportSheetListEX *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnStorageAddNew();
}*/
/*static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CMASImportSheetListEX*)pWnd)->OnTypeLoadData();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CMASImportSheetListEX *)pWnd)->OnSupplierLoadData();
}
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMASImportSheetListEX* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CMASImportSheetListEX *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CMASImportSheetListEX *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnNonInvoiceImportSelectFnc(CWnd *pWnd){
	((CMASImportSheetListEX*)pWnd)->OnNonInvoiceImportSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMASImportSheetListEX *pVw = (CMASImportSheetListEX *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMASImportSheetListEX *pVw = (CMASImportSheetListEX *)pWnd;
	pVw->OnExportSelect();
} 
CMASImportSheetListEX::CMASImportSheetListEX(CWnd *pParent)
{

	m_nDlgWidth = 545;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CMASImportSheetListEX::~CMASImportSheetListEX(){
}
void CMASImportSheetListEX::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 285, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 290, 30, 370, 55);
	m_wndToDate.Create(this,375, 30, 570, 55); 
	m_wndStorage.SetCheckBox(true);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this,95, 60, 285, 85); 
	//m_wndTypeLabel.Create(this, _T("Type"), 290, 60, 370, 85);
	//m_wndType.Create(this,375, 60, 570, 85);
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 290, 60, 370, 85);
	m_wndItemGroup.Create(this,375, 60, 570, 85);
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 90, 90, 115);
	m_wndSupplier.Create(this,95, 90, 570, 115);
	m_wndNonInvoiceImport.Create(this, _T("NonInvoice Import"), 5, 125, 155, 150);
	m_wndGroupByType.Create(this, _T("Group by Type"), 160, 125, 260, 150);
	m_wndReturnImport.Create(this, _T("Return Import"), 265, 125, 365, 150);
	m_wndGroupByCompany.Create(this, _T("Group by Company"), 370, 125, 470, 150);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 380, 155, 490, 180);
	m_wndExport.Create(this, _T("&ExportXLS"), 495, 155, 575, 180);
}
void CMASImportSheetListEX::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndStorage.LimitText(35);
	m_wndItemGroup.LimitText(35);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 170);
	
// 	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
// 	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndItemGroup.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
	m_wndItemGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
}
void CMASImportSheetListEX::OnSetWindowEvents(){
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
	//m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	m_wndNonInvoiceImport.SetEvent(WE_CLICK, _OnNonInvoiceImportSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CMASImportSheetListEX::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	//DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_Check(pDX, m_wndNonInvoiceImport.GetDlgCtrlID(), m_bNonInvoice);
	DDX_Check(pDX, m_wndGroupByType.GetDlgCtrlID(), m_bGroupbyType);
	DDX_Check(pDX, m_wndReturnImport.GetDlgCtrlID(), m_bReturnImport);
	DDX_Check(pDX, m_wndGroupByCompany.GetDlgCtrlID(), m_bGroupByCompany);
}
void CMASImportSheetListEX::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	//m_szTypeKey.Empty();
	m_szItemGroupKey.Empty();
	m_szSupplierKey.Empty();
	m_bNonInvoice = FALSE;
	m_bGroupbyType = FALSE;
	m_bReturnImport = FALSE;
	m_bGroupByCompany = FALSE;

}
int CMASImportSheetListEX::SetMode(int nMode){
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
/*void CMASImportSheetListEX::OnFromDateChange(){
	
} */
/*void CMASImportSheetListEX::OnFromDateSetfocus(){
	
} */
/*void CMASImportSheetListEX::OnFromDateKillfocus(){
	
} */
int CMASImportSheetListEX::OnFromDateCheckValue(){
	return 0;
} 
/*void CMASImportSheetListEX::OnToDateChange(){
	
} */
/*void CMASImportSheetListEX::OnToDateSetfocus(){
	
} */
/*void CMASImportSheetListEX::OnToDateKillfocus(){
	
} */
int CMASImportSheetListEX::OnToDateCheckValue(){
	return 0;
} 
void CMASImportSheetListEX::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMASImportSheetListEX::OnStorageSelendok(){
	 
}
/*void CMASImportSheetListEX::OnStorageSetfocus(){
	
}*/
/*void CMASImportSheetListEX::OnStorageKillfocus(){
	
}*/
long CMASImportSheetListEX::OnStorageLoadData(){
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
void CMASImportSheetListEX::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMASImportSheetListEX::OnItemGroupSelendok(){
	 
}
/*void CMASImportSheetListEX::OnItemGroupSetfocus(){
	
}*/
/*void CMASImportSheetListEX::OnItemGroupKillfocus(){
	
}*/
long CMASImportSheetListEX::OnItemGroupLoadData(){
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
		_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thu\x1ED1\x63' ") \
		_T("                ELSE mpt_name ") \
		_T("                END product_type_name ") \
		_T("         FROM   m_product_type ") \
		_T("         WHERE  mpt_org_id = '%s' ") \
		_T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> 'A1000') ") \
		_T(" ORDER BY product_type_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	m_wndItemGroup.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndItemGroup.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMASImportSheetListEX::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long CMASImportSheetListEX::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
void CMASImportSheetListEX::OnNonInvoiceImportSelect(){
}
void CMASImportSheetListEX::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL, *rptFooter = NULL;
	CString szSQL, tmpStr, szField, szTemp;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldGroup, szNewGroup, szStorages, szMoney;
	double nTmp = 0;
	double nGrpAmt = 0, nTtlAmt = 0;
	int nIdx = 1, j = 0, nIdx2 = 0;

	if (!rpt.Init(_T("Reports\\HMS\\MA_BANGKEPHIEUNHAP_VER1.0.RPT")))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	//Header Section
	rptHeader = rpt.GetReportHeader();
	//rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("DeptName"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr = _T("To\xE0n \x62\x1ED9");
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(1);
		}
	}
	if (!szStorages.IsEmpty())
		rptHeader->SetValue(_T("StockName"), szStorages);
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);
	if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
	else
		rptHeader->SetValue(_T("Type"), tmpStr);
// 	if (!m_szTypeKey.IsEmpty())
// 		rptHeader->SetValue(_T("Type"), m_wndType.GetCurrent(1));
// 	else
// 		rptHeader->SetValue(_T("Type"), tmpStr);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
	CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{
		if (m_bGroupbyType)
			tmpStr = _T("product_groupid");
		else
			tmpStr = _T("dept");
		rs.GetValue(tmpStr, szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				tmpStr.Format(_T("%f"), nGrpAmt);
				rptDetail->SetValue(_T("s10"), tmpStr);
				nTtlAmt += nGrpAmt;
				nGrpAmt = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				if (m_bGroupbyType)
					tmpStr = rs.GetValue(_T("product_groupname"));
				else
					tmpStr = szNewGroup;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			nIdx = 1;
			szOldGroup = szNewGroup;
			nIdx2++;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));

		rptDetail->SetValue(_T("2"), rs.GetValue(_T("ma_so_thue")));

		rptDetail->SetValue(_T("3"), rs.GetValue(_T("so_hopdong_moi")));

		rs.GetValue(_T("impdte"), tmpStr);
		rptDetail->SetValue(_T("4"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("documentno")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("invno")));

		rs.GetValue(_T("ngay_hoa_don"), tmpStr);
		rptDetail->SetValue(_T("7"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rptDetail->SetValue(_T("8"), rs.GetValue(_T("product_code")));

		rptDetail->SetValue(_T("9"), rs.GetValue(_T("productname")));

		rs.GetValue(_T("ttlamt"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		nGrpAmt += str2double(tmpStr);

		rptDetail->SetValue(_T("11"), rs.GetValue(_T("ngay_thanh_toan")));
		//rptDetail->SetValue(_T("8"), rs.GetValue(_T("ordno")));
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nGrpAmt);
		rptDetail->SetValue(_T("s10"), tmpStr);
		nTtlAmt += nGrpAmt;
	}
	if (nTtlAmt > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng \x63\xE1\x63 \x63\xF4ng ty:"));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%f"), nTtlAmt);
		rptDetail->SetValue(_T("s10"), tmpStr);
	}
 	//Footer
 	rptFooter = rpt.GetReportFooter();

	rptFooter->SetValue(_T("TotalItem"), int2str(nIdx2++));
	szMoney.Format(_T("%.2f"), floor(nTtlAmt));
	MoneyToString(szMoney, tmpStr);
	#ifdef UNICODE
	if(!tmpStr.IsEmpty()
		)
		tmpStr += _T(" \x111\x1ED3ng.");
	#else
		if(!tmpStr.IsEmpty())
			tmpStr += _T(" ®ång.");
	#endif
	rptFooter->SetValue(_T("SumInWord"), tmpStr);
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rptFooter->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CMASImportSheetListEX::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr;
	CString szOldGroup, szNewGroup;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0;
	double nGrpAmt = 0, nTtlAmt = 0;
	int nRow = 0, nCol = 0;
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
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 40);
	xls.SetColumnWidth(4, 30);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 12);

	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 8);
	xls.SetCellText(0, 2, _T("\x42\x1EA2NG K\xCA PHI\x1EBEU NH\x1EACP"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(0, 3, 8);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	//Col Head
	nRow = 4;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellMergedColumns(nCol+1, nRow, 2);
	xls.SetCellMergedRows(nCol+3, nRow, 2);
	xls.SetCellMergedRows(nCol+4, nRow, 2);
	xls.SetCellMergedRows(nCol+5, nRow, 2);
	xls.SetCellMergedRows(nCol+6, nRow, 2);
	xls.SetCellMergedRows(nCol+7, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow, _T("Phi\x1EBFu nh\x1EADp"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow+1, _T("S\x1ED1 \x63h\x1EE9ng t\x1EEB"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+2, nRow+1, _T("Ng\xE0y"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+3, nRow, _T("Ngu\x1ED3n h\xE0ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+4, nRow, _T("S\x1ED1 ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+5, nRow, _T("N\x1EE3"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+6, nRow, _T("S\x1ED1 h\xF3\x61 \x111\x1A1n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+7, nRow, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		if (m_bGroupbyType)
			tmpStr = _T("product_groupid");
		else
			tmpStr = _T("dept");
		rs.GetValue(tmpStr, szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				xls.SetCellText(nCol+3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
				xls.SetCellText(nCol+4, nRow, ToString(nGrpAmt), FMT_NUMBER1, true);
				nTtlAmt += nGrpAmt;
				nGrpAmt = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 8);
			if (m_bGroupbyType)
				rs.GetValue(_T("product_groupname"), tmpStr);
			else
				tmpStr = szNewGroup;
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("documentno")), FMT_TEXT);
		rs.GetValue(_T("impdte"), tmpStr);
		xls.SetCellText(nCol+2, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		xls.SetCellText(nCol+3, nRow, rs.GetValue(_T("productname")), FMT_TEXT);
		rs.GetValue(_T("ttlamt"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		nGrpAmt += str2double(tmpStr);
		xls.SetCellText(nCol+6, nRow, rs.GetValue(_T("invno")), FMT_TEXT);
		xls.SetCellText(nCol+7, nRow, rs.GetValue(_T("ordno")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		xls.SetCellText(nCol+3, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT, true);
		tmpStr.Format(_T("%f"), nGrpAmt);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1, true);
		nTtlAmt += nGrpAmt;
		nRow++;
	}
	if (nTtlAmt > 0)
	{
		xls.SetCellText(nCol+3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		tmpStr.Format(_T("%f"), nTtlAmt);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGKETSUDUNGTHUOCTAIDONVI.xls"));
} 

CString CMASImportSheetListEX::GetQueryString(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szTransactionWhere, szPurchaseWhere, szReturnWhere, szReturnWhere1, szStorages, szCondition, szReturnImport, szPrice, szPrice1, szPrice2, szDept;
	szTransactionWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szPurchaseWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szReturnWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szReturnWhere1.Format(_T(" AND hpo_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if(!m_szSupplierKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
		szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	}
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"), szStorages);
		szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"), szStorages);
		szReturnWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"), szStorages);
		szReturnWhere1.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStorages);
	}
	if (szStorages == _T("15"))
	{
		szPrice.Format(_T("product_vatprice*POL_QTYIMPORT"));
		szPrice1.Format(_T("product_vatprice"));
		szPrice2.Format(_T("product_vatprice"));
	}
	else
	{
		szPrice.Format(_T("CASE WHEN NVL(POL_TAXRATE, 0)> 0 THEN ((POL_UNITPRICE + POL_UNITPRICE * POL_TAXRATE / 100)/ POL_UOM_RATE)*POL_QTYIMPORT ELSE (POL_UNITPRICE/ POL_UOM_RATE)*POL_QTYIMPORT END "));
		szPrice1.Format(_T("DECODE(0, mtl_saleprice, mtl_taxprice, mtl_saleprice)"));
		szPrice2.Format(_T("hpol_unitprice"));
	}
	//if (!m_szItemGroupKey.IsEmpty())
	//	szWhere.AppendFormat(_T(" AND product_categoryid = %d"), ToInt(m_szItemGroupKey));
	szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szReturnWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szReturnWhere1.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	if (!m_szItemGroupKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szReturnWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szReturnWhere1.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	}
	//Neu nhap k thanh toan
	if (m_bNonInvoice)
	{
		szTransactionWhere.AppendFormat(_T(" AND (mt_doctype IN('DRO', 'CRO') OR (mt_doctype = 'MOV' AND mt_storage_id NOT IN (%s)))"), szStorages);
	}
	else //Nhap thanh toan
	{
		szTransactionWhere.AppendFormat(_T(" AND (mt_doctype = 'MOV' AND mt_storage_id NOT IN (%s)) "), szStorages);
	}
	if (m_bReturnImport)
	{
		szReturnImport.Format(_T("  UNION ALL") \
			_T("    SELECT mt_doctype doctype,") \
			_T("     mt_orderno,") \
			_T("     mt_documentno,") \
			_T("     CAST (0 AS NVARCHAR2(1)),") \
			_T("     Get_departmentname(mt_department_id),") \
			_T("     First_value(product_name) OVER ( partition BY mt_transaction_id ORDER BY product_name ASC),") \
			_T("     trunc(mt_approveddate),") \
			_T("     product_groupid,") \
			_T("     product_groupname,") \
			_T("     %s * mtl_qtyorder AS ttlamt") \
			_T("   FROM m_transaction") \
			_T("   LEFT JOIN m_transactionline") \
			_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
			_T("   LEFT JOIN m_productitem_view3") \
			_T("   ON ( mtl_product_item_id = product_item_id )") \
			_T("   WHERE mt_doctype        IN ('DRO')") \
			_T("   AND mt_status            = 'A' %s") \
			_T("   UNION ALL") \
			_T(" SELECT mt_doctype doctype,") \
			_T(" mt_orderno,") \
			_T(" mt_documentno,") \
			_T(" CAST (0 AS NVARCHAR2(1)),") \
			_T(" Get_departmentname(mt_department_id),") \
			_T(" First_value(product_name) OVER ( partition BY mt_transaction_id ORDER BY product_name ASC),") \
			_T(" trunc(mt_approveddate),") \
			_T(" product_groupid,") \
			_T(" product_groupname,") \
			_T(" %s * mtl_qtyorder AS ttlamt") \
			_T(" FROM m_transaction") \
			_T(" LEFT JOIN m_transactionline") \
			_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
			_T(" LEFT JOIN m_productitem_view3") \
			_T(" ON ( mtl_product_item_id = product_item_id )") \
			_T(" WHERE mt_doctype      IN ('SRO', 'CRO', 'PRO')") \
			_T(" AND mt_status          = 'A' %s")
			_T(" UNION ALL") \
			_T("   SELECT hpo_doctype doctype,") \
			_T("     CAST (hpo_docno AS NVARCHAR2(35)),") \
			_T("     CAST (0 AS NVARCHAR2(35)),") \
			_T("     CAST (hpo_invoiceno AS NVARCHAR2(35)),") \
			_T("     Get_departmentname(hpo_deptid),") \
			_T("     First_value(product_name) OVER ( partition BY hpo_pharmareturnorder_id ORDER BY product_name ASC),") \
			_T("     trunc(hpo_approveddate),") \
			_T("     product_groupid,") \
			_T("     product_groupname,") \
			_T("     %s * hpol_qtyreturn AS ttlamt") \
			_T(" FROM hms_pharmareturnorder") \
			_T(" LEFT JOIN hms_pharmareturnorder_line ") \
			_T(" ON(hpo_pharmareturnorder_id = hpol_pharmareturnorder_id AND hpo_orderid = hpol_orderid)") \
			_T(" LEFT JOIN m_productitem_view3") \
			_T(" ON (hpol_product_item_id = product_item_id)") \
			_T("  WHERE hpo_doctype        IN ('RRO','DRO')") \
			_T("   AND hpo_status            = 'A' %s"), szPrice1, szReturnWhere, szPrice1, szReturnWhere, szPrice2, szReturnWhere1);
	}
	if (m_bGroupbyType)
		szCondition = _T(" product_groupid, product_groupname,");
	if (m_bGroupByCompany)
		szDept = _T("  dept,");
	szSQL.Format(_T(" SELECT doctype, ") \
				_T("   ma_so_thue,  ") \
				_T("    so_hopdong_moi,") \
				_T("    ngay_hoa_don,") \
				_T("    ngay_thanh_toan,") \
				_T("        ordno, ") \
				_T("        documentno, ") \
				_T("        invno, ") \
				_T("        dept, product_code, ") \
				_T("		productname,") \
				_T("		%s") \
				_T("        impdte, ") \
				_T("        sum(ttlamt) ttlamt ") \
				_T(" FROM   (SELECT    mt_doctype                           doctype, ") \
				_T("   NULL as ma_so_thue,") \
				_T("     NULL as so_hopdong_moi,") \
				_T("     NULL as ngay_hoa_don,") \
				_T("     0 as ngay_thanh_toan,") \
				_T("                   mt_orderno                           AS ordno, ") \
				_T("                   mt_documentno                           AS documentno, ") \
				_T("                   Cast (0 AS NVARCHAR2(1))             AS invno, ") \
				_T("                   Get_departmentname(mt_department_id) AS dept, ") \
				_T("				   First_value(product_code) OVER ( partition BY mt_transaction_id ORDER BY product_code ASC) AS product_code,") \
				_T("				   First_value(product_name) OVER ( partition BY mt_transaction_id ORDER BY product_name ASC) AS productname,")
				_T("                   trunc(mt_approveddate) AS impdte, ") \
				_T("				   product_groupid,") \
				_T("				   product_groupname,") \
				_T("                   %s * mtl_qtydelivery                   AS ttlamt ") \
				_T("         FROM      m_transaction ") \
				_T("         LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T("         LEFT JOIN m_productitem_view3 ON ( mtl_product_item_id = product_item_id ) ") \
				_T("         WHERE     mt_status = 'A' %s ") \
				_T("         UNION ALL ") \
				_T("         SELECT    po_doctype, ") \
				_T("     adp_taxcode as ma_so_thue,") \
				_T("     (select ADC_CONTRACT_NO from ad_contract WHERE adc_contract_id=po_contract_id) as so_hopdong_moi,") \
				_T("     TRUNC(po_orderdate) as ngay_hoa_don,") \
				_T("     ADC_DURATION as ngay_thanh_toan,") \
				_T("                   po_orderno, ") \
				_T("                   po_documentno, ") \
				_T("                   po_invoiceno, ") \
				_T("                   Get_partnername(po_partner_id), ") \
				_T("				   First_value(product_code) OVER ( partition BY po_purchase_order_id ORDER BY product_code ASC) as product_code,") \
				_T("				   First_value(product_name) OVER ( partition BY po_purchase_order_id ORDER BY product_name ASC),")
				_T("                   trunc(po_approveddate), ") \
				_T("				   product_groupid,") \
				_T("				   product_groupname,") \
				_T("                   %s") \
				_T("         FROM      purchase_order ") \
				_T("         LEFT JOIN purchase_orderline ON ( po_purchase_order_id = pol_purchase_order_id ) ") \
				_T("   LEFT JOIN ad_partner ON (PO_PARTNER_ID=adp_partner_id)") \
				_T("   LEFT JOIN ad_contract ON (po_contract_id=adc_contract_id)") \
				_T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = pol_product_item_id ) ") \
				_T("         WHERE     po_status = 'A' %s %s) ") \
				_T(" GROUP BY doctype, ma_so_thue, so_hopdong_moi, ngay_hoa_don, ngay_thanh_toan,") \
				_T("          ordno, ") \
				_T("          documentno, ") \
				_T("          invno, ") \
				_T("          dept, product_code, productname, ") \
				_T("		  %s") \
				_T("		  impdte") \
				_T(" ORDER  BY %s documentno, doctype, ordno,") \
				_T("		   %s") \
				_T("           impdte, productname "), szCondition, szPrice1, szTransactionWhere, szPrice, szPurchaseWhere, szReturnImport, szCondition, szDept, szCondition);
	return szSQL;
}

CString CMASImportSheetListEX::GetQueryString1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szTransactionWhere, szPurchaseWhere, szStorages;
	szTransactionWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szPurchaseWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if(!m_szSupplierKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
		szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	}
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"), szStorages);
		szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"), szStorages);
	}
	//if (!m_szItemGroupKey.IsEmpty())
	//	szWhere.AppendFormat(_T(" AND product_categoryid = %d"), ToInt(m_szItemGroupKey));
	szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	if (!m_szItemGroupKey.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	}
	//Neu nhap k thanh toan
	if (m_bNonInvoice)
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_doctype = 'DRO'"));
		szPurchaseWhere.AppendFormat(_T(" AND 1 = 0"));
	}
	else //Nhap thanh toan
	{
		szTransactionWhere.AppendFormat(_T(" AND (mt_doctype = 'MOV' AND mt_storage_id IN (3, 14, 15))"));
		szPurchaseWhere.AppendFormat(_T(""));
	}
// 	szSQL.Format(_T("SELECT sum(amt) amt, sum(non_invoice) noninvoice, sum(invoice) invoice FROM (") \
// 		_T(" SELECT CASE WHEN po_partner_id = '708' THEN po_totalamount ELSE 0 END amt, ") \
// 		_T(" 0 non_invoice, 0 invoice FROM purchase_order ") \
// 		_T(" LEFT JOIN purchase_orderline ON (pol_purchase_order_id = po_purchase_order_id)") \
// 		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = pol_product_item_id) WHERE 1=1 %s") \
// 		_T(" UNION ALL") \
// 		_T(" SELECT 0, CASE WHEN mt_doctype = 'DRO' THEN mt_totalamount ELSE 0 END,") \
// 		_T(" CASE WHEN (mt_doctype = 'MOV' AND mt_storage_id IN (3, 14, 15)) THEN mt_totalamount ELSE 0 END FROM m_transaction") \
// 		_T(" LEFT JOIN m_transactionline ON (mt_transaction_id = mtl_transaction_id)") \
// 		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = mtl_product_item_id)") \
// 		_T(" WHERE 1=1 %s) tbl0"), szPurchaseWhere, szTransactionWhere);

	szSQL.Format(_T(" SELECT SUM(kho708)kho708,") \
		_T("   SUM(caccongty) caccongty,") \
		_T("   SUM(muale) muale") \
		_T(" FROM") \
		_T("   ( SELECT") \
		_T("   CASE") \
		_T("       WHEN mt_department_id = '708'") \
		_T("       THEN mtl_ttlamount") \
		_T("       ELSE 0") \
		_T("     END kho708,") \
		_T("     CASE") \
		_T("       WHEN mt_department_id NOT IN ('708', 'ML')") \
		_T("       THEN mtl_ttlamount") \
		_T("       ELSE 0") \
		_T("     END caccongty,") \
		_T("     CASE") \
		_T("       WHEN mt_department_id = 'ML'") \
		_T("       THEN mtl_ttlamount") \
		_T("       ELSE 0") \
		_T("     END muale") \
		_T("   FROM m_transaction") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( mtl_product_item_id = product_item_id )") \
		_T("   WHERE mt_status          = 'A' %s ") \
		_T("   UNION ALL") \
		_T("   SELECT") \
		_T("     CASE") \
		_T("       WHEN po_partner_id = '708'") \
		_T("       THEN pol_netamount") \
		_T("       ELSE 0") \
		_T("     END kho708,") \
		_T("     CASE") \
		_T("       WHEN po_partner_id NOT IN ('708', 'ML')") \
		_T("       THEN pol_netamount") \
		_T("       ELSE 0") \
		_T("     END caccongty,") \
		_T("     CASE") \
		_T("       WHEN po_partner_id = 'ML'") \
		_T("       THEN pol_netamount") \
		_T("       ELSE 0") \
		_T("     END muale") \
		_T("   FROM purchase_order") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON ( po_purchase_order_id = pol_purchase_order_id )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( product_item_id = pol_product_item_id )") \
		_T("   WHERE po_status      = 'A' %s") \
		_T("   ) tbl"), szTransactionWhere, szPurchaseWhere);
	return szSQL;

}

BEGIN_MESSAGE_MAP(CMASImportSheetListEX, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CMASImportSheetListEX::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
