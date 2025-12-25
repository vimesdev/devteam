#include "stdafx.h"
#include "PACSExportByDept.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "HMSMainFrame.h"

static CString SetNumberDelim(CString szNumber)
{
	CString szRet;
	szRet = szNumber;
	int nPeriodPos = 0, nDecimalPos = szRet.Find(_T("."));
	if (nDecimalPos == -1)
	{
		nDecimalPos = szRet.GetLength();
	}
	else
	{
		szRet.Replace(_T("."), _T(","));
	}
	for (int i = nDecimalPos; i>=1; i--)
	{
		if (nPeriodPos > 0 && nPeriodPos%3==0)
		{
			szRet.Insert(i, _T("."));
		}
		nPeriodPos++;
	}
	return szRet;
}


/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSExportByDept *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSExportByDept *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSExportByDept* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPACSExportByDept *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPACSExportByDept *)pWnd)->OnStockAddNew();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPACSExportByDept *)pWnd)->OnTypeLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPACSExportByDept *pVw = (CPACSExportByDept *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSExportByDept *pVw = (CPACSExportByDept *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddExportByDeptFnc(CWnd *pWnd){
	 return ((CPACSExportByDept*)pWnd)->OnAddExportByDept();
} 
static int _OnEditExportByDeptFnc(CWnd *pWnd){
	 return ((CPACSExportByDept*)pWnd)->OnEditExportByDept();
} 
static int _OnDeleteExportByDeptFnc(CWnd *pWnd){
	 return ((CPACSExportByDept*)pWnd)->OnDeleteExportByDept();
} 
static int _OnSaveExportByDeptFnc(CWnd *pWnd){
	 return ((CPACSExportByDept*)pWnd)->OnSaveExportByDept();
} 
static int _OnCancelExportByDeptFnc(CWnd *pWnd){
	 return ((CPACSExportByDept*)pWnd)->OnCancelExportByDept();
} 
CPACSExportByDept::CPACSExportByDept(CWnd *pParent)
{
	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CPACSExportByDept::~CPACSExportByDept()
{

}
void CPACSExportByDept::OnCreateComponents(){
	/*m_wndExportSheetListForInsurance.Create(this, _T("Export Sheet List"), 5, 5, 575, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.Create(this,95, 60, 290, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 295, 60, 375, 85);
	m_wndType.Create(this,380, 60, 570, 85); 
	//m_wndByServPrice.Create(this, _T("By Serv Price"), 5, 95, 100, 120);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 500, 95, 575, 120);*/


	m_wndExportSheetListForInsurance.Create(this, _T("Export Sheet List"), 6, 5, 514, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 260, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 264, 30, 344, 55);
	m_wndToDate.Create(this,349, 30, 509, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.Create(this,95, 60, 260, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 264, 60, 344, 85);
	m_wndType.Create(this,349, 60, 509, 85);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 439, 95, 514, 120);
	m_wndStock.SetCheckBox();
}
void CPACSExportByDept::OnInitializeComponents(){
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
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 500);

}
void CPACSExportByDept::OnSetWindowEvents(){
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CPACSExportByDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	//DDX_Check(pDX, m_wndByServPrice.GetDlgCtrlID(), m_nByServPrice);
}
void CPACSExportByDept::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSExportByDept::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPACSExportByDept::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_nByServPrice = 0;
}
int CPACSExportByDept::SetMode(int nMode){
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
/*void CPACSExportByDept::OnFromDateChange(){
	
} */
/*void CPACSExportByDept::OnFromDateSetfocus(){
	
} */
/*void CPACSExportByDept::OnFromDateKillfocus(){
	
} */
int CPACSExportByDept::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSExportByDept::OnToDateChange(){
	
} */
/*void CPACSExportByDept::OnToDateSetfocus(){
	
} */
/*void CPACSExportByDept::OnToDateKillfocus(){
	
} */
int CPACSExportByDept::OnToDateCheckValue(){
	return 0;
} 
void CPACSExportByDept::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPACSExportByDept::OnStockSelendok(){
	 
}
/*void CPACSExportByDept::OnStockSetfocus(){
	
}*/
/*void CPACSExportByDept::OnStockKillfocus(){
	
}*/

long CPACSExportByDept::OnStockLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.AppendFormat(_T(" and msl_storage_id in(%s) and msl_type <> 'C'"), pMF->m_szStoragePerm);
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey, szFilter);
}
/*void CPACSExportByDept::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long CPACSExportByDept::OnTypeLoadData(){
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
void CPACSExportByDept::OnPrintPreviewSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szSysDate, szRptName, szPreviousType, szCurrentType, szReportTitle, szPath, szMoney;
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
	int TotalItem=0;
	double nAmount = 0;
	long double nTotal = 0, nGroup = 0, nTotal2 = 0, nGroup2 = 0;
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	//szRptName.Format(_T("Reports/HMS/HC_BANGKEPHIEUXUAT.RPT"));
	//if (!rpt.Init(szRptName))
	//	return;
	szReportTitle.Format(_T("%s_BANGKEPHIEUXUAT"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath, true))
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
	TotalItem += nIdx;	
	if (nGroup > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%.0f"), floor(nGroup+0.5));
		rptDetail->SetValue(_T("s7"), tmpStr);
		tmpStr.Format(_T("%.0f"), floor(nGroup2+0.5));
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

	tmpStr.Format(_T("%ld"), TotalItem);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);

	tmpStr.Format(_T("%.0f"), floor(nTotal+0.5));
	rpt.GetReportFooter()->SetValue(_T("nTotal"), tmpStr);	

	szMoney.Format(_T("%.0f"), floor(nTotal+0.5));
	MoneyToString(szMoney, tmpStr);
	if (!tmpStr.IsEmpty())
	{
		tmpStr += _T(" đồng");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	}

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CPACSExportByDept::OnExportSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, nMarkRow = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\BAOCAO_SUDUNG_TAIDONVI_PHIEU_PX.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	//xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 13);
	//xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 13);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupname"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[11] > 0)
			{
				//xls.SetCellText(1, nMarkRow, _T("Tổng nhóm:"), FMT_TEXT, true);

				for(int i = 4; i < 30; i++)
				{
					xls.SetCellText(i, nMarkRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nMarkRow = nRow;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		

		rs.GetValue(_T("product_name"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("product_uomname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("product_vatprice"), nTemp);			
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("qtysoldins"), nTemp);		
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("soldins_amount"), nTemp);		
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("qtyotherins"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("otherins_amount"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("qtyservice"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("service_amount"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("totalqty"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("amount"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[11] > 0)
	{
		//xls.SetCellText(1, nMarkRow, _T("Tổng nhóm:"), FMT_TEXT, true);
		for(int i = 4; i < 30; i++)
		{
			xls.SetCellText(i, nMarkRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[11] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 4; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAO_SUDUNG_TAIDONVI_PHIEU_PX2.xls"));
	
} 
int CPACSExportByDept::OnAddExportByDept()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSExportByDept::OnEditExportByDept()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSExportByDept::OnDeleteExportByDept(){
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
 		OnCancelExportByDept(); 
 	}
	return 0;
}
int CPACSExportByDept::OnSaveExportByDept(){
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
 		//OnExportByDeptListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSExportByDept::OnCancelExportByDept(){
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
int CPACSExportByDept::OnExportByDeptListLoadData(){
	return 0;
}

CString CPACSExportByDept::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CString szSQL, szWhere, szWhere0, szWhere1, szWhere2, szPrice, szStockIDs;
	
	szWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szStockIDs = m_wndStock.GetCheckData(0);
	if (!szStockIDs.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND mtl_storage_id in (%s)"), szStockIDs);		
	}

	if (!m_szTypeKey.IsEmpty())
	{		
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);		
	}

		szSQL.Format(_T(" SELECT ") \
					_T("   product_name,") \
					_T("   product_uomname,") \
					_T("   product_vatprice,  ") \
					_T("   SUM(mtl_qtysoldins)                              AS qtysoldins,") \
					_T("   SUM(mtl_qtysoldins*product_vatprice)             AS soldins_amount,  ") \
					_T("   SUM(mtl_qtyotherins)                             AS qtyotherins,") \
					_T("   SUM(mtl_qtyotherins*product_vatprice)            AS otherins_amount,  ") \
					_T("   SUM(mtl_qtyservice)                              AS qtyservice,") \
					_T("   SUM(mtl_qtyservice*product_vatprice)             AS service_amount,  ") \
					_T("   SUM(mtl_qtyorder) AS totalqty, ") \
					_T("   SUM(mtl_qtyorder*product_vatprice) AS amount") \
					_T(" FROM m_transaction") \
					_T(" LEFT JOIN m_transactionline") \
					_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
					_T(" LEFT JOIN m_productitem_view") \
					_T(" ON(mtl_product_item_id     =product_item_id)") \
					_T(" WHERE mtl_transactionline_id > 0") \
					_T(" AND mt_status     = 'A'") \
					_T(" AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO')") \
					_T(" AND MT_DEPARTMENT_TO_ID ='%s'") \
					_T(" %s") \
					_T(" GROUP BY ") \
					_T(" product_name,") \
					_T(" product_uomname,") \
					_T(" product_vatprice") \
					_T(" ORDER BY product_name"), pMF->GetCurrentDepartmentID(), szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CPACSExportByDept::GetQueryString1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1, szStockIDs;
	szWhere0.Format(_T(" AND hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szStockIDs = m_wndStock.GetCheckData(0);
	if (!szStockIDs.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" AND hpo_storage_id in (%s)"), szStockIDs);
		szWhere1.AppendFormat(_T(" AND mt_storage_id in (%s)"), szStockIDs);
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
		_T("     hpo_deptid AS deptid") \
		_T("   FROM hms_ipharmaorder") \
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON ( hpo_orderid = hpol_orderid )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON (product_item_id   = hpol_product_item_id)") \
		_T("   WHERE hpo_orderstatus = 'A' %s") \
		_T("   GROUP BY hpo_orderid,") \
		_T("     hpo_approvedate,") \
		_T("     hpo_docno,") \
		_T("     hpo_deptid") \
		_T("   UNION ALL") \
		_T(" SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) AS order_no, ") \
		_T("	       Cast(0 AS NVARCHAR2(15)) AS document_no, ") \
		_T("           trunc_date(hpo_approvedate)                     AS export_date, ") \
		_T("           Get_patientname(hpo_docno)          AS receiver, ") \
		_T("           hpo_docno                           AS docno, ") \
		_T("           Get_doctype(hpo_doctype)            AS order_type, ") \
		_T("           SUM(hpol_qtyissue *  hpol_unitprice) AS amount, ") \
		_T("           SUM(hpol_qtyissue *  (hpol_unitprice - product_vatprice)), ") \
		_T("		   hpo_deptid AS deptid")
		_T(" FROM      hms_pharmaorder ") \
		_T(" LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = hpol_product_item_id)") \
		_T(" WHERE     hpo_orderstatus = 'A' %s") \
		_T(" GROUP     BY hpo_orderid, ") \
		_T("              hpo_approvedate, ") \
		_T("              hpo_docno, ") \
		_T("              hpo_doctype, ") \
		_T("			  hpo_deptid ") \
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
		_T("           mt_department_to_id ") \
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
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
BEGIN_MESSAGE_MAP(CPACSExportByDept, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPACSExportByDept::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}