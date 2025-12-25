#include "stdafx.h"
#include "PMSExportSheetListForInsurance.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSExportSheetListForInsurance *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSExportSheetListForInsurance *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSExportSheetListForInsurance* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSExportSheetListForInsurance *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance *)pWnd)->OnStockAddNew();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSExportSheetListForInsurance *)pWnd)->OnTypeLoadData();
}
static long _OnDepartmentListLoadDataFnc(CWnd *pWnd){
	return ((CPMSExportSheetListForInsurance*)pWnd)->OnDepartmentListLoadData();
} 
static void _OnDepartmentListDblClickFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance*)pWnd)->OnDepartmentListDblClick();
} 
static void _OnDepartmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSExportSheetListForInsurance*)pWnd)->OnDepartmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentListDeleteItemFnc(CWnd *pWnd){
	return ((CPMSExportSheetListForInsurance*)pWnd)->OnDepartmentListDeleteItem();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance*)pWnd)->OnAllSelect();
}
static void _OnDeptSelectFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance*)pWnd)->OnDeptSelect();
}
static int _OnDeptSetCheckFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance*) pWnd)->OnDeptSetCheck();
	return 0;
}
static void _OnExportTypeSelectFnc(CWnd *pWnd){
	((CPMSExportSheetListForInsurance*)pWnd)->OnExportTypeSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSExportSheetListForInsurance *pVw = (CPMSExportSheetListForInsurance *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSExportSheetListForInsurance *pVw = (CPMSExportSheetListForInsurance *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CPMSExportSheetListForInsurance*)pWnd)->OnAddPMSExportSheetListForInsurance();
} 
static int _OnEditPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CPMSExportSheetListForInsurance*)pWnd)->OnEditPMSExportSheetListForInsurance();
} 
static int _OnDeletePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CPMSExportSheetListForInsurance*)pWnd)->OnDeletePMSExportSheetListForInsurance();
} 
static int _OnSavePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CPMSExportSheetListForInsurance*)pWnd)->OnSavePMSExportSheetListForInsurance();
} 
static int _OnCancelPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CPMSExportSheetListForInsurance*)pWnd)->OnCancelPMSExportSheetListForInsurance();
} 
CPMSExportSheetListForInsurance::CPMSExportSheetListForInsurance(CWnd *pParent)
{
	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CPMSExportSheetListForInsurance::~CPMSExportSheetListForInsurance(){
}
void CPMSExportSheetListForInsurance::OnCreateComponents(){
	m_wndExportSheetListForInsurance.Create(this, _T("Export Sheet List"), 5, 5, 575, 390);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.SetCheckBox(TRUE);
	m_wndStock.Create(this,95, 60, 290, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 295, 60, 375, 85);
	m_wndType.Create(this,380, 60, 570, 85);
	m_wndDepartmentList.Create(this,10, 90, 570, 385);
	m_wndDepartmentList.SetCheckBox(TRUE);
	m_wndAll.Create(this, _T("All"), 10, 395, 110, 420);
	m_wndDept.Create(this, _T("Dept"), 115, 395, 215, 420);
	m_wndExportType.Create(this, _T("Export Type"), 220, 395, 320, 420);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 385, 395, 495, 420);
	m_wndExport.Create(this, _T("&ExportXLS"), 500, 395, 575, 420); 
	//m_wndByServPrice.Create(this, _T("By Serv Price"), 5, 95, 100, 120);

}
void CPMSExportSheetListForInsurance::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
}
void CPMSExportSheetListForInsurance::OnSetWindowEvents(){
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
	m_wndDepartmentList.SetEvent(WE_SELCHANGE, _OnDepartmentListSelectChangeFnc);
	m_wndDepartmentList.SetEvent(WE_LOADDATA, _OnDepartmentListLoadDataFnc);
	m_wndDepartmentList.SetEvent(WE_DBLCLICK, _OnDepartmentListDblClickFnc);
	m_wndDepartmentList.AddEvent(1, _T("Check/ Uncheck All"), _OnDeptSetCheckFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndDept.SetEvent(WE_CLICK, _OnDeptSelectFnc);
	m_wndExportType.SetEvent(WE_CLICK, _OnExportTypeSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnDepartmentListLoadData();

}
void CPMSExportSheetListForInsurance::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndDept.GetDlgCtrlID(), m_nDept);
	DDX_Radio(pDX, m_wndExportType.GetDlgCtrlID(), m_nExportType);
	//DDX_Check(pDX, m_wndByServPrice.GetDlgCtrlID(), m_nByServPrice);
}
void CPMSExportSheetListForInsurance::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSExportSheetListForInsurance::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSExportSheetListForInsurance::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_nAll=0;
	m_nDept=1;
	m_nExportType=1;
	m_nByServPrice = 0;
	m_bDeptCheck = FALSE;
}
int CPMSExportSheetListForInsurance::SetMode(int nMode){
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
/*void CPMSExportSheetListForInsurance::OnFromDateChange(){
	
} */
/*void CPMSExportSheetListForInsurance::OnFromDateSetfocus(){
	
} */
/*void CPMSExportSheetListForInsurance::OnFromDateKillfocus(){
	
} */
int CPMSExportSheetListForInsurance::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSExportSheetListForInsurance::OnToDateChange(){
	
} */
/*void CPMSExportSheetListForInsurance::OnToDateSetfocus(){
	
} */
/*void CPMSExportSheetListForInsurance::OnToDateKillfocus(){
	
} */
int CPMSExportSheetListForInsurance::OnToDateCheckValue(){
	return 0;
} 
void CPMSExportSheetListForInsurance::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSExportSheetListForInsurance::OnStockSelendok(){
	 
}
/*void CPMSExportSheetListForInsurance::OnStockSetfocus(){
	
}*/
/*void CPMSExportSheetListForInsurance::OnStockKillfocus(){
	
}*/

long CPMSExportSheetListForInsurance::OnStockLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}
/*void CPMSExportSheetListForInsurance::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long CPMSExportSheetListForInsurance::OnTypeLoadData(){
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
void CPMSExportSheetListForInsurance::OnDepartmentListDblClick(){
	
} 
void CPMSExportSheetListForInsurance::OnDepartmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSExportSheetListForInsurance::OnDepartmentListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSExportSheetListForInsurance::OnDepartmentListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	if(m_nDept == 0)
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where SD_ISACTIVE='Y' order by sd_id"));
	}
	if(m_nExportType == 0)
	{
		szSQL.Format(_T(" SELECT  1 AS trans, CAST ('XK' AS nvarchar2(2)) AS id, CAST ('\x58u\x1EA5t Kho\x61' AS nvarchar2(10)) AS name FROM dual") \
			_T(" UNION ALL") \
			_T(" SELECT  2 AS trans, CAST ('XK2' AS nvarchar2(3)) AS id, CAST ('\x58u\x1EA5t Kh\xE1\x63' AS nvarchar2(10)) AS name FROM dual") \
			_T(" UNION ALL") \
			_T(" SELECT  3 AS trans, CAST ('XDC' AS nvarchar2(3)) AS id, CAST ('\x58u\x1EA5t \x111i\x1EC1u \x63huy\x1EC3n' AS nvarchar2(20)) AS name FROM dual") \
			_T(" UNION ALL") \
			_T(" SELECT  5 AS trans, CAST ('XNT' AS nvarchar2(3)) AS id, CAST ('Xuat don ngoai tru ra ve' AS nvarchar2(10)) AS name FROM dual") \
			_T(" UNION ALL") \
			_T(" SELECT 4 AS trans, adp_partner_id AS id, adp_name AS name FROM ad_partner ") \
			_T(" WHERE adp_partner_type_id = 'CT' AND adp_isactive = 'Y' ORDER BY trans, id"));
	}
	else
		{
			m_wndDepartmentList.DeleteAllItems();
		}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartmentList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartmentList.EndLoad(); 
	return nCount;

}
void CPMSExportSheetListForInsurance::OnAllSelect(){
	UpdateData(TRUE);
	OnDepartmentListLoadData();
}
void CPMSExportSheetListForInsurance::OnDeptSelect(){
	UpdateData(TRUE);
	OnDepartmentListLoadData();
}
void CPMSExportSheetListForInsurance::OnExportTypeSelect(){
	UpdateData(TRUE);
	OnDepartmentListLoadData();
}
void CPMSExportSheetListForInsurance::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szSysDate, szRptName, szPreviousType, szCurrentType, szStock;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryString();
	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0, nGroup = 0;
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	szRptName.Format(_T("Reports/HMS/PMS_BANGKEPHIEUXUAT.RPT"));
	if (!rpt.Init(szRptName))
		return;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(1));
		}
	}
	if (!szStock.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("StockName"), szStock);
	else
		rpt.GetReportHeader()->SetValue(_T("StockName"), _T("To\xE0n \x62\x1ED9"));
	if (!m_szTypeKey.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("Type"), m_wndType.GetCurrent(1));
	else
		rpt.GetReportHeader()->SetValue(_T("Type"), _T("To\xE0n \x62\x1ED9"));
	CReportSection *rptDetail;
	while (!rs.IsEOF()){
		rs.GetValue(_T("order_type"), szCurrentType);
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
			rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("order_type")));
			szPreviousType = szCurrentType;
		}
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("order_no"), tmpStr);
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
		rs.GetValue(_T("cong_khoan"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.MoveNext();
	}
	if (nGroup > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%f"), nGroup);
		rptDetail->SetValue(_T("s7"), tmpStr);
		nTotal += nGroup;
		nGroup = 0;
	}
	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	tmpStr.Format(_T("%s"), _T("T\x1ED5ng \x63\x1ED9ng"));
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
	//FormatCurrency(nTotal, tmpStr);
	tmpStr.Format(_T("%f"), nTotal);
	rptDetail->SetValue(_T("s7"), tmpStr);
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CPMSExportSheetListForInsurance::OnExportSelect()
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

void CPMSExportSheetListForInsurance::OnExportSelect_V1()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPreviousType, szCurrentType, szStock;
	int nCol = 0, nRow = 0, nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0, nGroup = 0;

	szSQL = GetQueryString();
	//_msg(_T("%s"), szSQL);

	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 36);
	xls.SetColumnWidth(5, 25);
	xls.SetColumnWidth(6, 30);
	xls.SetColumnWidth(7, 30);
	xls.SetColumnWidth(8, 30);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 7);
	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellMergedColumns(nCol, nRow + 4, 4);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("\x42\x1EA2NG K\xCA PHI\x1EBEU \x58U\x1EA4T"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(1));
		}
	}
	if (!szStock.IsEmpty())
		tmpStr.Format(_T("Kho : %s"), szStock);
	else
		tmpStr.Format(_T("Kho : To\xE0n \x62\x1ED9"));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, false, 11);

	//Column Heading
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("S\x1ED1 phi\x1EBFu"));
	arrCol.Add(_T("Ng\xE0y \x78u\x1EA5t"));
	arrCol.Add(_T("\x110\x1A1n v\x1ECB nh\x1EADn h\xE0ng"));
	arrCol.Add(_T("M\xE3 s\x1ED1"));
	//arrCol.Add(_T("H\x1ECD v\xE0 t\xEAn"));
	arrCol.Add(_T("S\x1ED1 ti\x1EC1n"));
	arrCol.Add(_T("Kho / tủ trực"));
	arrCol.Add(_T("Diễn giải"));
	arrCol.Add(_T("Cộng khoản"));
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
				xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m"), 4098, true);
				tmpStr.Format(_T("%f"), nGroup);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
				nTotal += nGroup;
				nGroup = 0;
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
		rs.GetValue(_T("order_no"), tmpStr);
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

		rs.GetValue(_T("storagename"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ghichu"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cong_khoan"), tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}
	if (nGroup > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m"), 4098, true);
		tmpStr.Format(_T("%f"), nGroup);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
		nTotal += nGroup;
		nRow++;
	}
	if (nTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Xuat cho BH.xls"));
	
} 

void CPMSExportSheetListForInsurance::OnExportSelect_V2()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPreviousType, szCurrentType, szStock;
	int nCol = 0, nRow = 0, nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0, nGroup = 0;

	szSQL = GetQueryString_V2();
	//_msg(_T("%s"), szSQL);

	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 36);
	xls.SetColumnWidth(5, 25);
	xls.SetColumnWidth(6, 30);
	xls.SetColumnWidth(7, 30);
	xls.SetColumnWidth(8, 30);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 7);
	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellMergedColumns(nCol, nRow + 4, 4);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("\x42\x1EA2NG K\xCA PHI\x1EBEU \x58U\x1EA4T"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(1));
		}
	}
	if (!szStock.IsEmpty())
		tmpStr.Format(_T("Kho : %s"), szStock);
	else
		tmpStr.Format(_T("Kho : To\xE0n \x62\x1ED9"));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, false, 11);

	//Column Heading
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("S\x1ED1 phi\x1EBFu"));
	arrCol.Add(_T("Ng\xE0y \x78u\x1EA5t"));
	arrCol.Add(_T("\x110\x1A1n v\x1ECB nh\x1EADn h\xE0ng"));
	arrCol.Add(_T("M\xE3 s\x1ED1"));
	//arrCol.Add(_T("H\x1ECD v\xE0 t\xEAn"));
	arrCol.Add(_T("S\x1ED1 ti\x1EC1n"));
	arrCol.Add(_T("Kho / tủ trực"));
	arrCol.Add(_T("Diễn giải"));
	arrCol.Add(_T("Cộng khoản"));
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
				xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m"), 4098, true);
				tmpStr.Format(_T("%f"), nGroup);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
				nTotal += nGroup;
				nGroup = 0;
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
		rs.GetValue(_T("order_no"), tmpStr);
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

		rs.GetValue(_T("storagename"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ghichu"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cong_khoan"), tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}
	if (nGroup > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m"), 4098, true);
		tmpStr.Format(_T("%f"), nGroup);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
		nTotal += nGroup;
		nRow++;
	}
	if (nTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Xuat cho BH.xls"));
	
} 

int CPMSExportSheetListForInsurance::OnAddPMSExportSheetListForInsurance(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSExportSheetListForInsurance::OnEditPMSExportSheetListForInsurance(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSExportSheetListForInsurance::OnDeletePMSExportSheetListForInsurance(){
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
int CPMSExportSheetListForInsurance::OnSavePMSExportSheetListForInsurance(){
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
int CPMSExportSheetListForInsurance::OnCancelPMSExportSheetListForInsurance(){
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
int CPMSExportSheetListForInsurance::OnPMSExportSheetListForInsuranceListLoadData(){
	return 0;
}

#include "SQLDebugger.h"
CString CPMSExportSheetListForInsurance::GetQueryString() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere0, szWhere1, szStock, szDept, szTemp;
	szWhere0.Format(
		_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
		_T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
		m_szFromDate, m_szToDate);
	szWhere1.Format(
		_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
		_T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
		m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStock.GetItemCount(); i++) {
		if (m_wndStock.GetCheck(i)) {
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty()) szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(0));
		}
	}
	if (!szStock.IsEmpty()) {
		szWhere0.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStock);
		szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStock);
	}

	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++) {
		if (m_wndDepartmentList.GetCheck(i)) {
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDept.IsEmpty()) szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);
		}
	}
	if (!szDept.IsEmpty()) {
		if (m_nDept == 0) {
			szWhere.AppendFormat(_T(" AND deptid IN (%s)"), szDept);
		}
		if (m_nExportType == 0) {
			szWhere.AppendFormat(_T(" AND exporttype IN(%s)"), szDept);
		}
		else {
			szWhere.AppendFormat(_T(" "));
		}
	}

	if (!m_szTypeKey.IsEmpty()) {
		szWhere0.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	}
	szSQL.Format(
		_T("SELECT * FROM ( SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) ")
		_T("order_no, ")
		_T("           hpo_approvedate                     export_date, ")
		_T("           Get_patientname(hpo_docno)          receiver, ")
		_T("           hpo_docno                           docno, ")
		_T("           Get_doctype(hpo_doctype)            order_type, ")
		_T("           SUM(hpol_qtyorder * product_taxprice) amount, ")
		_T("           hpo_deptid AS deptid, ")
		_T("           CAST ('XK' AS nvarchar2(2)) AS exporttype, NULL as ")
		_T("storagename,")
		_T(" NULL as ghichu,")
		_T(" COUNT(*) AS cong_khoan ")
		_T(" FROM      hms_pharmaorder ")
		_T(" LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ")
		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = ")
		_T("hpol_product_item_id)")
		_T(" WHERE     hpo_orderstatus = 'A' %s")
		_T(" GROUP     BY hpo_orderid, ")
		_T("              hpo_approvedate, ")
		_T("              hpo_docno, ")
		_T("              hpo_doctype, ")
		_T("              hpo_deptid ")
		_T(" UNION ALL ")
		_T(" SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) order_no, ")
		_T("           hpo_approvedate                     export_date, ")
		_T("           Get_patientname(hpo_docno)          receiver, ")
		_T("           hpo_docno                           docno, ")
		_T("           Get_doctype(hpo_doctype)            order_type, ")
		_T("           SUM(hpol_qtyorder * product_taxprice) amount, ")
		_T("           hpo_deptid AS deptid, ")
		_T("           CAST ('XNT' AS nvarchar2(3)) AS exporttype, NULL as ")
		_T("storagename, ")
		_T(" NULL as ghichu,")
		_T(" COUNT(*) AS cong_khoan ")
		_T(" FROM      hms_ipharmaorder ")
		_T(" LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid ) ")
		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = ")
		_T("hpol_product_item_id)")
		_T(" WHERE     hpo_orderstatus = 'A' and hpo_doctype='PPO' and ")
		_T("hpo_ordertype='P' %s")
		_T(" GROUP     BY hpo_orderid, ")
		_T("              hpo_approvedate, ")
		_T("              hpo_docno, ")
		_T("              hpo_doctype, ")
		_T("              hpo_deptid ")
		_T(" UNION ALL ")
		_T(" SELECT    mt_orderno order_no, ")
		_T("           mt_approveddate, ")
		_T("           CASE WHEN mt_doctype IN ( 'DMO', 'DDO', 'CSO' ) THEN ")
		_T("mt_department_to_id ")
		_T("             WHEN mt_doctype = 'EXP' THEN ")
		_T("Get_partnername(mt_partner_id) ")
		_T("             WHEN mt_doctype IN ( 'BOO', 'DOO', 'EOO', 'LOO', ")
		_T("                                  'EXO', 'SLO' ) THEN Cast('XK' AS ")
		_T("NVARCHAR2(128)) ")
		_T("           ELSE Cast('NA' AS NVARCHAR2(128)) ")
		_T("           END        AS receiver, ")
		_T("           0, ")
		_T("           CASE WHEN mt_doctype = 'DMO' THEN ")
		_T("               CASE WHEN mt_ordertype = 'M' THEN Cast(N'\x44\x1EF1 ")
		_T("tr\xF9 PTTT' AS NVARCHAR2(128))")
		_T("					WHEN mt_ordertype = 'B' THEN ")
		_T("Cast(N'\x110\x1EA7u gi\x1B0\x1EDDng' AS NVARCHAR2(128)) ")
		_T("               ELSE Cast(N'\x44\x1EF1 tr\xF9 thu\x1ED1\x63, ")
		_T("v\x1EADt t\x1B0' AS NVARCHAR2(128))")
		_T("               END ")
		_T("             WHEN mt_doctype = 'DDO' THEN Cast(N'\x43\x1EA5p VTTTH' ")
		_T("AS NVARCHAR2(128)) ")
		_T("           ELSE Get_doctype(mt_doctype) ")
		_T("           END, ")
		_T("           SUM(mtl_qtydelivery * product_taxprice), ")
		_T("           mt_department_to_id, ")
		_T("		   CASE WHEN mt_partner_id IS NOT NULL THEN ")
		_T("mt_partner_id WHEN mt_doctype = 'EXO' ")
		_T("		   THEN CAST ('XK2' AS NVARCHAR2(3)) ELSE CAST ('XK' ")
		_T("AS nvarchar2(2)) END AS exporttype, ")
		_T("	 CASE WHEN mt_doctype = 'CSO' THEN ")
		_T("     GET_STORAGENAME(mt_storage_to_id)")
		_T("     ELSE NULL END as storagename,")
		_T("  MT_DESCRIPTION as ghichu,")
		_T(" COUNT(*) AS cong_khoan ")
		_T(" FROM      m_transaction ")
		_T(" LEFT JOIN m_transactionline ON ( mt_transaction_id = ")
		_T("mtl_transaction_id ) ")
		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = ")
		_T("mtl_product_item_id)")
		_T(" LEFT JOIN m_storagelist ON (msl_storage_id = mt_storage_id)")
		_T(" WHERE     mt_status = 'A' AND mt_doctype NOT IN ('DRO', 'CON', ")
		_T("'MRO', 'MOV') %s")
		_T(" GROUP     BY mt_orderno, ")
		_T("              mt_approveddate, ")
		_T("              mt_doctype, ")
		_T("              mt_department_to_id, ")
		_T("              mt_storage_to_id, ")
		_T("              mt_partner_id, ")
		_T("              mt_ordertype, ")
		_T("              MT_DESCRIPTION  ")
		_T(" UNION ALL ")
		_T(" SELECT    mt_orderno order_no, ")
		_T("           mt_approveddate, ")
		_T("           get_storagename(mt_storage_to_id) receiver, ")
		_T("           0, ")
		_T("           Get_doctype(mt_doctype), ")
		_T("           SUM(mtl_qtydelivery * product_taxprice) as amount, ")
		_T("           mt_department_to_id, ")
		_T("   CASE")
		_T("     WHEN mt_partner_id IS NOT NULL")
		_T("     THEN mt_partner_id")
		_T("     ELSE CAST ('XDC' AS NVARCHAR2(3))")
		_T("   END AS exporttype, NULL as storagename,")
		_T("  MT_DESCRIPTION as ghichu,")
		_T(" COUNT(*) AS cong_khoan ")
		_T(" FROM      m_transaction ")
		_T(" LEFT JOIN m_transactionline ON ( mt_transaction_id = ")
		_T("mtl_transaction_id ) ")
		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = ")
		_T("mtl_product_item_id)")
		_T(" LEFT JOIN m_storagelist ON (msl_storage_id = mt_storage_id)")
		_T(" WHERE     mt_status = 'A' AND mt_doctype = 'MOV' AND ")
		_T("mt_storage_to_id NOT IN (%s) %s")
		_T(" GROUP     BY mt_orderno, ")
		_T("              mt_approveddate, ")
		_T("              mt_doctype, ")
		_T("              mt_department_to_id, ")
		_T("              mt_storage_to_id, ")
		_T("              mt_partner_id, ")
		_T("              mt_ordertype,MT_DESCRIPTION ) ")
		_T(" WHERE amount > 0 %s")
		_T(" ORDER BY order_type, order_no"),
		szWhere0, szWhere0, szWhere1, szStock.IsEmpty() ? _T("-1") : szStock,
		szWhere1, szWhere);
	CSQLDebugger sqldebugger(szSQL);
	return szSQL;
}
BEGIN_MESSAGE_MAP(CPMSExportSheetListForInsurance, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSExportSheetListForInsurance::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
void CPMSExportSheetListForInsurance::OnDeptSetCheck(){
	m_bDeptCheck = !m_bDeptCheck;
	for (int i = 0; i < m_wndDepartmentList.GetItemCount();i++)
		m_wndDepartmentList.SetCheck(i, m_bDeptCheck);
}

CString CPMSExportSheetListForInsurance::GetQueryString_V2() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere0, szWhere1, szStock, szDept, szTemp;
	szWhere0.Format(
		_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
		_T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
		m_szFromDate, m_szToDate);
	szWhere1.Format(
		_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
		_T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
		m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStock.GetItemCount(); i++) {
		if (m_wndStock.GetCheck(i)) {
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty()) szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(0));
		}
	}
	if (!szStock.IsEmpty()) {
		szWhere0.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStock);
		szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStock);
	}

	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++) {
		if (m_wndDepartmentList.GetCheck(i)) {
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDept.IsEmpty()) szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);
		}
	}
	if (!szDept.IsEmpty()) {
		if (m_nDept == 0) {
			szWhere.AppendFormat(_T(" AND deptid IN (%s)"), szDept);
		}
		if (m_nExportType == 0) {
			szWhere.AppendFormat(_T(" AND exporttype IN(%s)"), szDept);
		}
		else {
			szWhere.AppendFormat(_T(" "));
		}
	}

	if (!m_szTypeKey.IsEmpty()) {
		szWhere0.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	}
	szSQL.Format(
		_T(" SELECT *")
		_T("   FROM (   SELECT Cast(hpo_orderid AS NVARCHAR2(15)) order_no,")
		_T("                      hpo_approvedate export_date,")
		_T("                      Get_patientname(hpo_docno) receiver,")
		_T("                      hpo_docno docno,")
		_T("                      Get_doctype(hpo_doctype) order_type,")
		_T("                      SUM(hpol_qtyorder * product_taxprice) amount,")
		_T("                      hpo_deptid AS deptid,")
		_T("                      Cast ('XK' AS NVARCHAR2(2)) AS exporttype,")
		_T("                      NULL AS storagename,")
		_T("                      NULL AS ghichu,")
		_T("					  COUNT(*) AS cong_khoan ")
		_T("                 FROM hms_pharmaorder")
		_T("            LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = ")
		_T("hpol_orderid )")
		_T("            LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
		_T("hpol_product_item_id )")
		_T("                WHERE hpo_orderstatus = 'A' ")
		_T(" %s")
		_T("                GROUP BY ")
		_T("hpo_orderid,hpo_approvedate,hpo_docno,hpo_doctype,hpo_deptid")
		_T("            UNION ALL")
		_T("               SELECT Cast(hpo_orderid AS NVARCHAR2(15)) order_no,")
		_T("                      hpo_approvedate export_date,")
		_T("                      Get_patientname(hpo_docno) receiver,")
		_T("                      hpo_docno docno,")
		_T("                      Get_doctype(hpo_doctype) order_type,")
		_T("                      SUM(hpol_qtyorder * product_taxprice) amount,")
		_T("                      hpo_deptid AS deptid,")
		_T("                      Cast ('XNT' AS NVARCHAR2(3)) AS exporttype,")
		_T("                      NULL AS storagename,")
		_T("                      NULL AS ghichu,")
		_T("					  COUNT(*) AS cong_khoan ")
		_T("                 FROM hms_ipharmaorder")
		_T("            LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = ")
		_T("hpol_orderid )")
		_T("            LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
		_T("hpol_product_item_id )")
		_T("                WHERE hpo_orderstatus = 'A' AND hpo_doctype = 'PPO' ")
		_T("AND hpo_ordertype = 'P' ")
		_T(" %s")
		_T("                GROUP BY ")
		_T("hpo_orderid,hpo_approvedate,hpo_docno,hpo_doctype,hpo_deptid")
		_T("            UNION ALL")
		_T("               SELECT mt_orderno order_no,")
		_T("                      mt_approveddate,")
		_T("                      CASE WHEN mt_doctype IN ( 'DMO', 'DDO', 'CSO' ")
		_T(") THEN mt_department_to_id")
		_T("                        WHEN mt_doctype = 'EXP' THEN ")
		_T("Get_partnername(mt_partner_id)")
		_T("                        WHEN mt_doctype IN ( 'BOO', 'DOO', 'EOO', ")
		_T("'LOO',")
		_T("                                             'EXO', 'SLO' ) THEN ")
		_T("Cast('XK' AS NVARCHAR2(128))")
		_T("                      ELSE Cast('NA' AS NVARCHAR2(128))")
		_T("                      END AS receiver,")
		_T("                      0,")
		_T("                      CASE WHEN mt_doctype = 'DMO' THEN")
		_T("                          CASE WHEN mt_ordertype = 'M' THEN ")
		_T("Cast(N'x44x1EF1 trxF9 PTTT' AS")
		_T("                                                                 ")
		_T("NVARCHAR2(128))")
		_T("                            WHEN mt_ordertype = 'B' THEN Cast(")
		_T("                            N'x110x1EA7u gix1B0x1EDDng' AS ")
		_T("NVARCHAR2(128))")
		_T("                          ELSE Cast(N'x44x1EF1 trxF9 thux1ED1x63, ")
		_T("vx1EADt tx1B0' AS NVARCHAR2(128))")
		_T("                          END")
		_T("                        WHEN mt_doctype = 'DDO' THEN ")
		_T("Cast(N'x43x1EA5p VTTTH' AS NVARCHAR2(128))")
		_T("                      ELSE Get_doctype(mt_doctype)")
		_T("                      END,")
		_T("                      SUM(mtl_qtydelivery * product_taxprice),")
		_T("                      mt_department_to_id,")
		_T("                      CASE WHEN mt_partner_id IS NOT NULL THEN ")
		_T("mt_partner_id")
		_T("                        WHEN mt_doctype = 'EXO' THEN Cast ('XK2' AS ")
		_T("NVARCHAR2(3))")
		_T("                      ELSE Cast ('XK' AS NVARCHAR2(2))")
		_T("                      END AS exporttype,")
		_T("                      CASE WHEN mt_doctype = 'CSO' THEN ")
		_T("Get_storagename(mt_storage_to_id)")
		_T("                      ELSE NULL")
		_T("                      END AS storagename,")
		_T("                      MT_DESCRIPTION AS ghichu,")
		_T("					  COUNT(*) AS cong_khoan ")
		_T("                 FROM m_transaction")
		_T("            LEFT JOIN m_transactionline ON ( mt_transaction_id = ")
		_T("mtl_transaction_id )")
		_T("            LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
		_T("mtl_product_item_id )")
		_T("            LEFT JOIN m_storagelist ON ( msl_storage_id = ")
		_T("mt_storage_id )")
		_T("                WHERE mt_status = 'A' AND mt_doctype NOT IN ( ")
		_T("'DRO', 'CON', 'MRO', 'MOV' ) ")
		_T(" %s")
		_T("                GROUP BY ")
		_T("mt_orderno,mt_approveddate,mt_doctype,mt_department_to_id,mt_")
		_T("storage_to_id,")
		_T("                mt_partner_id,mt_ordertype,MT_DESCRIPTION")
		_T("         UNION ALL")
		_T("            SELECT mt_orderno order_no,")
		_T("                   mt_approveddate,")
		_T("                   Get_storagename(mt_storage_to_id) receiver,")
		_T("                   0,")
		_T("                   Get_doctype(mt_doctype),")
		_T("                   SUM(mtl_qtydelivery * product_taxprice) AS ")
		_T("amount,")
		_T("                   mt_department_to_id,")
		_T("                   CASE WHEN mt_partner_id IS NOT NULL THEN ")
		_T("mt_partner_id")
		_T("                   ELSE Cast ('XDC' AS NVARCHAR2(3))")
		_T("                   END AS exporttype,")
		_T("                   NULL AS storagename,")
		_T("                   MT_DESCRIPTION AS ghichu,")
		_T("				   COUNT(*) AS cong_khoan ")
		_T("              FROM m_transaction")
		_T("         LEFT JOIN m_transactionline ON ( mt_transaction_id = ")
		_T("mtl_transaction_id )")
		_T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
		_T("mtl_product_item_id )")
		_T("         LEFT JOIN m_storagelist ON ( msl_storage_id = ")
		_T("mt_storage_id )")
		_T("             WHERE mt_status = 'A' AND mt_doctype = 'MOV' AND ")
		_T("mt_storage_to_id NOT IN ( %s ) ")
		_T(" %s")
		_T("             GROUP BY ")
		_T("mt_orderno,mt_approveddate,mt_doctype,mt_department_to_id,mt_")
		_T("storage_to_id,")
		_T("             mt_partner_id,mt_ordertype,MT_DESCRIPTION)")
		_T("  WHERE amount > 0 ")
		_T(" %s")
		_T("  ORDER BY deptid,order_type"),
		szWhere0, szWhere0, szWhere1, szStock.IsEmpty() ? _T("-1") : szStock,
		szWhere1, szWhere);
	CSQLDebugger sqldebugger(szSQL);
	return szSQL;
}
