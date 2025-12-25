#include "stdafx.h"
#include "MABangketratiencaccongty.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

#include ".\MASSupplierPaymentList.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMABangketratiencaccongty *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMABangketratiencaccongty *)pWnd)->OnToDateCheckValue();
} 
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CMABangketratiencaccongty *)pWnd)->OnSupplierLoadData();
}
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMABangketratiencaccongty* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CMABangketratiencaccongty *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMABangketratiencaccongty* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CMABangketratiencaccongty *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMABangketratiencaccongty* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CMABangketratiencaccongty *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CMABangketratiencaccongty *)pWnd)->OnSourceAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMABangketratiencaccongty *pVw = (CMABangketratiencaccongty *)pWnd;
	pVw->OnPrintPreviewSelect();
}
static int _OnSophieuCheckValueFnc(CWnd *pWnd){
	return ((CMABangketratiencaccongty *)pWnd)->OnSophieuCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMABangketratiencaccongty *pVw = (CMABangketratiencaccongty *)pWnd;
	pVw->OnExportSelect();
} 
CMABangketratiencaccongty::CMABangketratiencaccongty(CWnd *pParent)
{

	m_nDlgWidth = 585;
	m_nDlgHeight = 359;
	SetDefaultValues();
}
CMABangketratiencaccongty::~CMABangketratiencaccongty(){
}
void CMABangketratiencaccongty::OnCreateComponents()
{
	
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 90, 85);
	m_wndSupplier.Create(this,95, 60, 570, 85); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 90, 90, 115);
	m_wndStorage.SetCheckBox(true);
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 179);
	m_wndStorage.Create(this,95, 90, 570, 115); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 120, 90, 145);
	m_wndItemGroup.Create(this,95, 120, 290, 145); 
	m_wndSourceLabel.Create(this, _T("Source"), 295, 120, 375, 145);
	m_wndSource.Create(this,380, 120, 570, 145); 
	m_wndSophieuLabel.Create(this, _T("Sophieu"), 10, 150, 90, 175);
	m_wndSophieu.Create(this,95, 150, 569, 175); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 395, 185, 490, 210);
	m_wndExport.Create(this, _T("&ExportXLS"), 495, 185, 575, 210);

	m_wndSupplier.EnableWindow(false);
	m_wndStorage.EnableWindow(false);
	m_wndItemGroup.EnableWindow(false);
	m_wndSource.EnableWindow(false);
	m_wndSophieu.EnableWindow(false);
	m_wndPrintPreview.EnableWindow(false);
}
void CMABangketratiencaccongty::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	//m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	//m_wndItemGroup.SetCheckValue(true);
	m_wndItemGroup.LimitText(1024);
	//m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(1024);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 60);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndItemGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CMABangketratiencaccongty::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
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
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	m_wndSophieu.SetEvent(WE_CHECKVALUE, _OnSophieuCheckValueFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CMABangketratiencaccongty::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Text(pDX, m_wndSophieu.GetDlgCtrlID(), m_szSophieu);

}
void CMABangketratiencaccongty::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szItemGroupKey.Empty();
	m_szSourceKey.Empty();
	m_szSupplierKey.Empty();
	m_szStorageKey.Empty();
	m_szSophieu.Empty();

}
int CMABangketratiencaccongty::SetMode(int nMode){
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
int CMABangketratiencaccongty::OnSophieuCheckValue()
{
	return 0;
} 
/*void CMABangketratiencaccongty::OnFromDateChange(){
	
} */
/*void CMABangketratiencaccongty::OnFromDateSetfocus(){
	
} */
/*void CMABangketratiencaccongty::OnFromDateKillfocus(){
	
} */
int CMABangketratiencaccongty::OnFromDateCheckValue(){
	return 0;
} 
/*void CMABangketratiencaccongty::OnToDateChange(){
	
} */
/*void CMABangketratiencaccongty::OnToDateSetfocus(){
	
} */
/*void CMABangketratiencaccongty::OnToDateKillfocus(){
	
} */
int CMABangketratiencaccongty::OnToDateCheckValue(){
	return 0;
} 
long CMABangketratiencaccongty::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
void CMABangketratiencaccongty::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMABangketratiencaccongty::OnStorageSelendok(){
	 
}
long CMABangketratiencaccongty::OnStorageLoadData(){
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
/*void CMABangketratiencaccongty::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMABangketratiencaccongty::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMABangketratiencaccongty::OnItemGroupSelendok(){
	 
}
/*void CMABangketratiencaccongty::OnItemGroupSetfocus(){
	
}*/
/*void CMABangketratiencaccongty::OnItemGroupKillfocus(){
	
}*/
long CMABangketratiencaccongty::OnItemGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
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
	int nCount = rs.ExecSQL(szSQL);
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
/*void CMABangketratiencaccongty::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMABangketratiencaccongty::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMABangketratiencaccongty::OnSourceSelendok(){
	 
}
/*void CMABangketratiencaccongty::OnSourceSetfocus(){
	
}*/
/*void CMABangketratiencaccongty::OnSourceKillfocus(){
	
}*/
long CMABangketratiencaccongty::OnSourceLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPaymentResourceList(&m_wndSource, m_szSourceKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CMABangketratiencaccongty::OnSourceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMABangketratiencaccongty::OnPrintPreviewSelect(){
	/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString szSQL, tmpStr, szOrderID, szNewLine, szOldLine, szDate;
	double nAmt = 0, nGroupTotal = 0;
	double nTotal = 0;
	int nIdx = 0, nIndex = 0;
	CRecord rs(&pMF->m_db);
	CReportSection* rptHeader, * rptDetail;
	if (!rpt.Init(_T("Reports/HMS/PM_BANGKETHANHTOANCONGNO.RPT")))
		return;

	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
	if (!m_szSourceKey.IsEmpty())
		rptHeader->SetValue(_T("Source"), m_wndSource.GetCurrent(1));
	if (m_szFromDate.Left(10) != m_szToDate.Left(10))
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	else
		tmpStr.Format(_T("Ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		_fmsg(_T("%s"), szSQL);
		return;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("partnername"), szNewLine);
		if (szNewLine != szOldLine)
		{
			nIndex++;
			nIdx = 0;
			if (nGroupTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("s6"), double2str(nGroupTotal));
				nTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			szOldLine = szNewLine;
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			tmpStr.Format(rptDetail->GetValue(_T("GroupName")), nIndex, szNewLine);
			rptDetail->SetValue(_T("GroupName"), tmpStr);
		}
		rptDetail = rpt.AddDetail();
		nIdx++;
		rptDetail->SetValue(_T("1"), int2str(nIdx));
		if (!szOrderID.IsEmpty())
			szOrderID += _T(", ");
		szOrderID += rs.GetValue(_T("id"));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("invoiceno")));
		rs.GetValue(_T("invoicedate"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("orderno")));
		rs.GetValue(_T("importdate"), tmpStr);
		rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("amount"), nAmt);
		nGroupTotal += nAmt;
		rptDetail->SetValue(_T("6"), double2str(nAmt));
		rptDetail->SetValue(_T("7"), _T(""));
		rptDetail->SetValue(_T("8"), _T(""));
		rs.MoveNext();	
	}
	if (nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s6"), double2str(nGroupTotal));
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}
	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s6"), ToString(nTotal));
	}	
	rptDetail = rpt.GetReportFooter();
	rptDetail->SetValue(_T("TotalItem"), int2str(nIndex));
	tmpStr.Format(_T("%f"), nTotal);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
	if (!szOrderID.IsEmpty())
	{
		szSQL = GetQueryString2();
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			rptDetail->SetValue(_T("s1"), rs.GetValue(_T("thuoc")));
			rptDetail->SetValue(_T("s2"), rs.GetValue(_T("hoachat")));
			rptDetail->SetValue(_T("s3"), rs.GetValue(_T("bbg")));
			rptDetail->SetValue(_T("s4"), rs.GetValue(_T("duoclieu")));
		}
	}
	szDate = pMF->GetSysDate();
	tmpStr.Format(rptDetail->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rptDetail->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	*/
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, nIdx2 = 0;
	CString szSQL, tmpStr, szReportName, szDate, szOldLev1, szNewLev1, szField, szTemp, szStorages, szSources, szMoney;
	double nTotal = 0, nGroupTotal1 = 0;
	if (!rpt.Init(_T("Reports/HMS/MA_BANGKETHANHTOANCONGNO.RPT")))
		return;
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		rptHeader->SetValue(_T("DeptName"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
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
			rptHeader->SetValue(_T("Storage"), szStorages);
		else
			rptHeader->SetValue(_T("Storage"), _T("To\xE0n \x62\x1ED9"));
		if (!m_szItemGroupKey.IsEmpty())
			rptHeader->SetValue(_T("ItemType"), m_wndItemGroup.GetCurrent(1));
		else
			rptHeader->SetValue(_T("ItemType"), _T("To\xE0n \x62\x1ED9"));
		for (int i = 0; i < m_wndSource.GetItemCount(); i++)
		{
			if (m_wndSource.GetCheck(i))
			{
				m_wndSource.SetCurSel(i);
				if (!szSources.IsEmpty())
					szSources += _T(", ");
				szSources += m_wndSource.GetCurrent(1);
			}
		}
		if (!szSources.IsEmpty())
			rptHeader->SetValue(_T("Source"), szSources);
		else
			rptHeader->SetValue(_T("Source"), _T("To\xE0n \x62\x1ED9"));
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("partnername"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1 > 0)
			{
				tmpStr.Format(_T("%f"), nGroupTotal1);
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("s6"), tmpStr);
				nTotal+= nGroupTotal1;
				nGroupTotal1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewLev1);
			nIdx2++;
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));

			rptDetail->SetValue(_T("2"), rs.GetValue(_T("invoiceno")));

						
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("invoicedate")));
			

			rptDetail->SetValue(_T("4"), rs.GetValue(_T("orderno")));

			rptDetail->SetValue(_T("5"), rs.GetValue(_T("importdate")));

			//rs.GetValue(_T("importdate"), tmpStr);
			//rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

			rs.GetValue(_T("amount"), nTmp);
			nGroupTotal1+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("productname")));
		}
		rs.MoveNext();
	}
	if (nGroupTotal1 > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s6"), double2str(nGroupTotal1));
		nTotal += nGroupTotal1;
	}
	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s6"), ToString(nTotal));
	}	
	rptDetail = rpt.GetReportFooter();
	rptDetail->SetValue(_T("TotalItem"), int2str(nIdx2++));
	tmpStr.Format(_T("%f"), nTotal);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);	

	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		//l1..l4
		int nIdx = 1;
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			szTemp = rs.GetFieldName(i);
			szField.Format(_T("%s%s"), szTemp.Left(1), szTemp.Right(szTemp.GetLength()-1).MakeLower());
			rs.GetValue(szField, nTmp);
			if (nTmp > 0)
			{
				tmpStr.Format(_T("l%d"), nIdx);
				TranslateString(szField, szTemp);
				szTemp.AppendFormat(_T(" :"));
				rptDetail->SetValue(tmpStr, szTemp);
				tmpStr.Format(_T("s%d"), nIdx);
				FormatCurrency(nTmp, szTemp);
				szTemp += _T(" \x111\x1ED3ng.");
				rptDetail->SetValue(tmpStr, szTemp);
				nIdx++;
			}
		}
	}

	szMoney.Format(_T("%.2f"), floor(nTotal));
	MoneyToString(szMoney, tmpStr);
	#ifdef UNICODE
	if(!tmpStr.IsEmpty()
		)
		tmpStr += _T(" \x111\x1ED3ng.");
	#else
		if(!tmpStr.IsEmpty())
			tmpStr += _T(" ®ång.");
	#endif
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);

	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CMABangketratiencaccongty::OnExportSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	ShowMessageBox(_T("Báo cáo fix 2 kho 15 và 5!"));
	CExcel xls;
	if (!xls.Load(_T("Exports\\BANGKE_THANHTOAN_TRATIEN_CACCONGTY_V2.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringTotal();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("partnername"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		//T1
		rs.GetValue(_T("total_t1_dv"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_t1_bh"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);
		//T2
		rs.GetValue(_T("total_t2_dv"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("total_t2_bh"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		//T3
		rs.GetValue(_T("total_t3_dv"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_t3_bh"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		//T4
		rs.GetValue(_T("total_t4_dv"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_t4_bh"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		//T5
		rs.GetValue(_T("total_t5_dv"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("total_t5_bh"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		//T6
		rs.GetValue(_T("total_t6_dv"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("total_t6_bh"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		//T7
		rs.GetValue(_T("total_t7_dv"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("total_t7_bh"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		//T8
		rs.GetValue(_T("total_t8_dv"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("total_t8_bh"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_NUMBER1);

		//T9
		rs.GetValue(_T("total_t9_dv"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("total_t9_bh"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);
		//T10
		rs.GetValue(_T("total_t10_dv"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("total_t10_bh"), nTemp);
		nGroupTotal[21] += nTemp;
		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);
		//T11
		rs.GetValue(_T("total_t11_dv"), nTemp);
		nGroupTotal[22] += nTemp;
		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("total_t11_bh"), nTemp);
		nGroupTotal[23] += nTemp;
		xls.SetCellText(nCol+23, nRow, double2str(nTemp), FMT_NUMBER1);
		//T12
		rs.GetValue(_T("total_t12_dv"), nTemp);
		nGroupTotal[24] += nTemp;
		xls.SetCellText(nCol+24, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("total_t12_bh"), nTemp);
		nGroupTotal[25] += nTemp;
		xls.SetCellText(nCol+25, nRow, double2str(nTemp), FMT_NUMBER1);
		//Total
		rs.GetValue(_T("tongcong"), nTemp);
		nGroupTotal[26] += nTemp;
		xls.SetCellText(nCol+26, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[26] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 2; i < 27; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	/*if (nTotal[26] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 2; i < 27; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}*/

	EndWaitCursor();
	xls.Save(_T("Exports\\BANGKE_THANHTOAN_TRATIEN_CACCONGTY_V22.xls"));
} 

CString CMABangketratiencaccongty::GetQueryString1()
{
	CString szSQL, szWhere, szStorages, szSources;
	szWhere.Format(_T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
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
	if(!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	for (int i = 0; i < m_wndSource.GetItemCount(); i++)
	{
		if (m_wndSource.GetCheck(i))
		{
			m_wndSource.SetCurSel(i);
			if (!szSources.IsEmpty())
				szSources += _T(", ");
			szSources += m_wndSource.GetCurrent(0);
		}
	}
	if (!szSources.IsEmpty())
		szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"), szSources);
	
	if (!m_szSophieu.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(pp_orderno) like(chr(37)||lower('%s')||chr(37)) "), m_szSophieu);
	}

	szSQL.Format(_T(" SELECT po_purchase_order_id as id,") \
				_T("   po_invoiceno AS invoiceno,") \
				_T("   to_char(po_invoicedate, 'DD/MM/YYYY')          AS invoicedate,") \
				_T("   po_orderno AS orderno,") \
				_T("   to_char(po_approveddate, 'DD/MM/YYYY')         AS importdate,") \
				_T("   SUM(ROUND(pol_totalamount))  AS amount,") \
				_T("   Get_partnername(po_partner_id) AS partnername") \
				/*_T("   First_value(product_name)") \
				_T("     OVER (") \
				_T("       partition BY po_purchase_order_id") \
				_T("       ORDER BY product_name ASC) AS productname") \*/
				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = pol_product_item_id)") \
				_T(" LEFT JOIN purchase_payment ON (po_refpayment_id=pp_purchase_payment_id)") \
				_T(" WHERE  po_payment = 'Y' %s") \
				_T(" GROUP BY po_purchase_order_id, po_invoiceno, po_invoicedate, ") \
				_T("		  po_orderno, po_approveddate, po_partner_id") \
				_T(" ORDER  BY po_partner_id, po_approveddate "), szWhere);



	return szSQL;
}

CString CMABangketratiencaccongty::GetQueryString2(){
	CString szSQL, szWhere, szStorages, szSources;
	szWhere.Format(_T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
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
	if(!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	for (int i = 0; i < m_wndSource.GetItemCount(); i++)
	{
		if (m_wndSource.GetCheck(i))
		{
			m_wndSource.SetCurSel(i);
			if (!szSources.IsEmpty())
				szSources += _T(", ");
			szSources += m_wndSource.GetCurrent(0);
		}
	}
	if (!szSources.IsEmpty())
		szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"), szSources);
	szSQL.Format(_T(" SELECT SUM(thuoc) drug, ") \
				_T("        SUM(hoachat) chemicals, ") \
				_T("        SUM(bbg) cotton, ") \
				_T("        SUM(duoclieu) herb,") \
				_T("        SUM(tpdd) compound,") \
				_T("        SUM(ycu) instrument") \
				_T(" FROM   (SELECT CASE WHEN (instr(product_producttype, 'A11') > 0 OR product_producttype IN ('A1400', 'A6000'))") \
				_T("                     THEN pol_totalamount ") \
				_T("                ELSE 0 ") \
				_T("                END AS thuoc, ") \
				_T("                CASE WHEN instr(product_producttype, 'A12') > 0 THEN pol_totalamount ") \
				_T("                ELSE 0 ") \
				_T("                END AS hoachat, ") \
				_T("                CASE WHEN product_producttype = 'A1500' THEN pol_totalamount ") \
				_T("                ELSE 0 ") \
				_T("                END AS bbg, ") \
				_T("                CASE WHEN product_producttype = 'A1302' THEN pol_totalamount ") \
				_T("                ELSE 0 ") \
				_T("                END AS duoclieu, ") \
				_T("				CASE WHEN product_producttype = 'A1301' THEN pol_totalamount") \
				_T("				ELSE 0") \
				_T("				END AS tpdd,") \
				_T("				CASE WHEN product_producttype = 'A1600' THEN pol_totalamount") \
				_T("				ELSE 0") \
				_T("				END AS ycu") \
				_T("         FROM   purchase_orderline, ") \
				_T("                m_productitem_view3, ") \
				_T("				purchase_order,") \
				_T("				purchase_payment") \
				_T("         WHERE  pol_product_item_id = product_item_id ") \
				_T("			AND po_purchase_order_id = pol_purchase_order_id") \
				_T("			AND po_refpayment_id=pp_purchase_payment_id AND po_payment = 'Y' %s) "), szWhere);
	return szSQL;
}
BEGIN_MESSAGE_MAP(CMABangketratiencaccongty, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CMABangketratiencaccongty::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}

CString CMABangketratiencaccongty::GetQueryStringTotal()
{
	CString szSQL, szWhere, szStorages, szSources;
	szWhere.Format(_T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	

	
	szSQL.Format(_T(" SELECT ") \
			_T("   macongty,") \
			_T("   Cast('Báo cáo tổng hợp tiền' as nvarchar2(128)) as reportname,") \
			_T("   partnername,") \
			_T("   SUM(t1_dv)  AS total_t1_dv,") \
			_T("   SUM(t1_bh)  AS total_t1_bh,") \
			_T("   SUM(t2_dv)  AS total_t2_dv,") \
			_T("   SUM(t2_bh)  AS total_t2_bh,") \
			_T("   SUM(t3_dv)  AS total_t3_dv,") \
			_T("   SUM(t3_bh)  AS total_t3_bh,") \
			_T("   SUM(t4_dv)  AS total_t4_dv,") \
			_T("   SUM(t4_bh)  AS total_t4_bh,") \
			_T("   SUM(t5_dv)  AS total_t5_dv,") \
			_T("   SUM(t5_bh)  AS total_t5_bh,") \
			_T("   SUM(t6_dv)  AS total_t6_dv,") \
			_T("   SUM(t6_bh)  AS total_t6_bh,") \
			_T("   SUM(t7_dv)  AS total_t7_dv,") \
			_T("   SUM(t7_bh)  AS total_t7_bh,") \
			_T("   SUM(t8_dv)  AS total_t8_dv,") \
			_T("   SUM(t8_bh)  AS total_t8_bh,") \
			_T("   SUM(t9_dv)  AS total_t9_dv,") \
			_T("   SUM(t9_bh)  AS total_t9_bh,") \
			_T("   SUM(t10_dv) AS total_t10_dv,") \
			_T("   SUM(t10_bh) AS total_t10_bh,") \
			_T("   SUM(t11_dv) AS total_t11_dv,") \
			_T("   SUM(t11_bh) AS total_t11_bh,") \
			_T("   SUM(t12_dv) AS total_t12_dv,") \
			_T("   SUM(t12_bh) AS total_t12_bh,") \
			_T("   SUM(tong) AS tongcong") \
			_T(" FROM") \
			_T("   (SELECT ") \
			_T("   macongty,") \
			_T("   partnername,  ") \
			_T("     CASE") \
			_T("       WHEN thang = 1") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t1_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 1") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t1_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 2") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t2_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 2") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t2_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 3") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t3_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 3") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t3_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 4") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t4_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 4") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t4_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 5") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t5_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 5") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t5_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 6") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t6_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 6") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t6_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 7") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t7_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 7") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t7_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 8") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t8_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 8") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t8_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 9") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t9_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 9") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t9_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 10") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t10_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 10") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t10_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 11") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t11_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 11") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t11_bh,") \
			_T("     CASE") \
			_T("       WHEN thang = 12") \
			_T("       AND kho    =15") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t12_dv,") \
			_T("     CASE") \
			_T("       WHEN thang = 12") \
			_T("       AND kho    =5") \
			_T("       THEN SUM(sotien)") \
			_T("       ELSE 0") \
			_T("     END t12_bh,") \
			_T("     SUM(sotien) as tong") \
			_T("   FROM") \
			_T("     (SELECT Get_partnername(po_partner_id) AS partnername,") \
			_T("       po_partner_id as macongty,") \
			_T("       EXTRACT (MONTH FROM pp_acctdate)     AS thang,") \
			_T("       po_storage_id                        AS kho,") \
			_T("       po_totalamount                       AS sotien") \
			_T("     FROM purchase_order") \
			_T("     LEFT JOIN purchase_payment") \
			_T("     ON (po_refpayment_id=pp_purchase_payment_id)") \
			_T("     WHERE po_payment    = 'Y'") \
			_T("     %s ") \
			_T("     AND po_storage_id IN(5, 15)") \
			_T("     )") \
			_T("   WHERE sotien > 0") \
			_T("  GROUP BY macongty, partnername,") \
			_T("     thang,") \
			_T("     kho") \
			_T("   )") \
			_T(" WHERE (t1_dv + t1_bh + t2_dv + t2_bh + t3_dv + t3_bh + t4_dv + t4_bh + t5_dv + t5_bh + t6_dv + t6_bh + t7_dv + t7_bh + t8_dv + t8_bh + t9_dv + t9_bh + t10_dv + t10_bh + t11_dv + t11_bh + t12_dv + t12_bh )>0") \
			_T(" GROUP BY macongty, partnername") \
			_T(" ORDER BY partnername"), szWhere);
		
	return szSQL;
}