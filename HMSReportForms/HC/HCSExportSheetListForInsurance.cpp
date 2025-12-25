#include "stdafx.h"
#include "HCSExportSheetListForInsurance.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"

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
	((CHCSExportSheetListForInsurance *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHCSExportSheetListForInsurance *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHCSExportSheetListForInsurance *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCSExportSheetListForInsurance* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHCSExportSheetListForInsurance *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHCSExportSheetListForInsurance *)pWnd)->OnStockAddNew();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHCSExportSheetListForInsurance *)pWnd)->OnTypeLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHCSExportSheetListForInsurance *pVw = (CHCSExportSheetListForInsurance *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHCSExportSheetListForInsurance *pVw = (CHCSExportSheetListForInsurance *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CHCSExportSheetListForInsurance*)pWnd)->OnAddPMSExportSheetListForInsurance();
} 
static int _OnEditPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CHCSExportSheetListForInsurance*)pWnd)->OnEditPMSExportSheetListForInsurance();
} 
static int _OnDeletePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CHCSExportSheetListForInsurance*)pWnd)->OnDeletePMSExportSheetListForInsurance();
} 
static int _OnSavePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CHCSExportSheetListForInsurance*)pWnd)->OnSavePMSExportSheetListForInsurance();
} 
static int _OnCancelPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CHCSExportSheetListForInsurance*)pWnd)->OnCancelPMSExportSheetListForInsurance();
}
static void _OnPreviewV2SelectFnc(CWnd *pWnd)
{
	CHCSExportSheetListForInsurance *pVw = (CHCSExportSheetListForInsurance *)pWnd;
	pVw->OnPreviewV2Select();
}
CHCSExportSheetListForInsurance::CHCSExportSheetListForInsurance(CWnd *pParent)
{
	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}

CHCSExportSheetListForInsurance::~CHCSExportSheetListForInsurance()
{
}
void CHCSExportSheetListForInsurance::OnCreateComponents()
{
	m_wndExportSheetListForInsurance.Create(this, _T("Export Sheet List"), 5, 5, 575, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.Create(this,95, 60, 290, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 295, 60, 375, 85);
	m_wndType.Create(this,380, 60, 570, 85); 
	//m_wndByServPrice.Create(this, _T("By Serv Price"), 5, 95, 100, 120);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 385, 95, 495, 120);
	m_wndExport.Create(this, _T("&Export"), 500, 95, 575, 120);
	m_wndPreviewV2.Create(this, _T("Preview (PCNMT)"), 385, 124, 575, 149);

}
void CHCSExportSheetListForInsurance::OnInitializeComponents(){
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

}
void CHCSExportSheetListForInsurance::OnSetWindowEvents(){
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
	m_wndPreviewV2.SetEvent(WE_CLICK, _OnPreviewV2SelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CHCSExportSheetListForInsurance::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	//DDX_Check(pDX, m_wndByServPrice.GetDlgCtrlID(), m_nByServPrice);
}
void CHCSExportSheetListForInsurance::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHCSExportSheetListForInsurance::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHCSExportSheetListForInsurance::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_nByServPrice = 0;
}
int CHCSExportSheetListForInsurance::SetMode(int nMode){
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
/*void CHCSExportSheetListForInsurance::OnFromDateChange(){
	
} */
/*void CHCSExportSheetListForInsurance::OnFromDateSetfocus(){
	
} */
/*void CHCSExportSheetListForInsurance::OnFromDateKillfocus(){
	
} */
int CHCSExportSheetListForInsurance::OnFromDateCheckValue(){
	return 0;
} 

void CHCSExportSheetListForInsurance::OnPreviewV2Select()
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
		szSQL = GetQueryStringV2();
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
	
	CString szZoneOfUser;
	szZoneOfUser = pMF->GetZoneOfUser(pMF->GetCurrentUser());	

	if (pMF->GetModuleID() == _T("PCNMT") && szZoneOfUser == _T("THUVIEN"))
	{
		szReportTitle.Format(_T("%s_%s_BANGKEPHIEUXUATV2"), pMF->GetModuleID(), szZoneOfUser);	
	}
	else
	{
		szReportTitle.Format(_T("%s_BANGKEPHIEUXUATV2"), pMF->GetModuleID());
	}
	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
			if(!rpt.Init(szPath))
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
 		rs.GetValue(_T("v_nguonchi"), szCurrentType);
 		if (szCurrentType != szPreviousType)
 		{
 			if (nGroup > 0)
 			{
 				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
 				tmpStr.Format(_T("%.2f"), nGroup);
 				rptDetail->SetValue(_T("s7"), tmpStr);
				FormatCurrency(nGroup, tmpStr);
 				nTotal += nGroup;
 				nGroup = 0;
 			}
 			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
 			rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("v_nguonchi")));
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
 	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
 	tmpStr.Format(_T("%s"), _T("Tổng cộng"));
 	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
 	FormatCurrency(nTotal, tmpStr);
 	tmpStr.Format(_T("%.0f"), nTotal);
 	rptDetail->SetValue(_T("s7"), tmpStr);

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);

	tmpStr.Format(_T("%ld"), TotalItem);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);

	tmpStr.Format(_T("%.0f"), floor(nTotal+0.5));
	rpt.GetReportFooter()->SetValue(_T("nTotal"), tmpStr);
	FormatCurrency(nTotal, tmpStr);

	szMoney.Format(_T("%.0f"), floor(nTotal+0.5));
	MoneyToString(szMoney, tmpStr);
	
	//Nếu module HC thì đọc lại
	if (pMF->GetModuleID() == _T("HC"))
	{
		if(tmpStr.Find(_T("tỷ")) != -1)
		{
			tmpStr.Replace(_T("tỷ"), _T("tỷ, "));
		}
		
		if(tmpStr.Find(_T("triệu")) != -1)
		{
			tmpStr.Replace(_T("triệu"), _T("triệu, "));
		}

		if(tmpStr.Find(_T("nghìn")) != -1)
		{
			tmpStr.Replace(_T("nghìn"), _T("nghìn, "));
		}
		if(tmpStr.Find(_T("phẩy")) != -1)
		{
			tmpStr.Replace(_T("phẩy"), _T(", "));
		}

		if(tmpStr.Find(_T("không đồng")) != -1)
		{
			tmpStr.Replace(_T("không"), _T(""));
		}
	
	}


	if (!tmpStr.IsEmpty())
	{
		tmpStr += _T(" đồng");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	}

	EndWaitCursor();
	rpt.PrintPreview();
} 
/*void CHCSExportSheetListForInsurance::OnToDateChange(){
	
} */
/*void CHCSExportSheetListForInsurance::OnToDateSetfocus(){
	
} */
/*void CHCSExportSheetListForInsurance::OnToDateKillfocus(){
	
} */
int CHCSExportSheetListForInsurance::OnToDateCheckValue(){
	return 0;
} 
void CHCSExportSheetListForInsurance::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCSExportSheetListForInsurance::OnStockSelendok(){
	 
}
/*void CHCSExportSheetListForInsurance::OnStockSetfocus(){
	
}*/
/*void CHCSExportSheetListForInsurance::OnStockKillfocus(){
	
}*/

long CHCSExportSheetListForInsurance::OnStockLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}
/*void CHCSExportSheetListForInsurance::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long CHCSExportSheetListForInsurance::OnTypeLoadData(){
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
void CHCSExportSheetListForInsurance::OnPrintPreviewSelect()
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
	


	/*szReportTitle.Format(_T("%s_BANGKEPHIEUXUAT"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;*/
	CString szZoneOfUser;
	szZoneOfUser = pMF->GetZoneOfUser(pMF->GetCurrentUser());	

	if (pMF->GetModuleID() == _T("PCNMT") && szZoneOfUser == _T("THUVIEN"))
	{
		szReportTitle.Format(_T("%s_%s_BANGKEPHIEUXUAT"), pMF->GetModuleID(), szZoneOfUser);	
	}
	else
	{
		szReportTitle.Format(_T("%s_BANGKEPHIEUXUAT"), pMF->GetModuleID());
	}
	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
			if(!rpt.Init(szPath))
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
	
	//Nếu module HC thì đọc lại
	if (pMF->GetModuleID() == _T("HC"))
	{
		if(tmpStr.Find(_T("tỷ")) != -1)
		{
			tmpStr.Replace(_T("tỷ"), _T("tỷ, "));
		}
		
		if(tmpStr.Find(_T("triệu")) != -1)
		{
			tmpStr.Replace(_T("triệu"), _T("triệu, "));
		}

		if(tmpStr.Find(_T("nghìn")) != -1)
		{
			tmpStr.Replace(_T("nghìn"), _T("nghìn, "));
		}
		if(tmpStr.Find(_T("phẩy")) != -1)
		{
			tmpStr.Replace(_T("phẩy"), _T(", "));
		}

		if(tmpStr.Find(_T("không đồng")) != -1)
		{
			tmpStr.Replace(_T("không"), _T(""));
		}
	//_msg(_T("%s"), tmpStr);	
	}


	if (!tmpStr.IsEmpty())
	{
		tmpStr += _T(" đồng");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	}

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CHCSExportSheetListForInsurance::OnExportSelect()
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
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 25);

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
	//arrCol.Add(_T("Mã số"));
	//arrCol.Add(_T("Họ và tên"));
	arrCol.Add(_T("Số tiền"));
	arrCol.Add(_T("Ghi chú"));
	//arrCol.Add(_T("Khoa"));
	//arrCol.Add(_T("Thực lãi"));
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
				xls.SetCellText(3, nRow, _T("Tổng nhóm"), 4098, true);
				tmpStr.Format(_T("%.0f"), floor(nGroup+0.5));
				xls.SetCellText(4, nRow, SetNumberDelim(tmpStr), FMT_TEXT, true);
				//tmpStr.Format(_T("%.2f"), nGroup2);
				//xls.SetCellText(5, nRow, tmpStr, FMT_TEXT, true);
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

		rs.GetValue(_T("order_no"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_CENTER);


		rs.GetValue(_T("export_date"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, CDate::Convert(tmpStr, yyyymmdd , ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("receiver"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("amount"), nAmount);
		nGroup += nAmount;
		xls.SetCellText(nCol + 4, nRow, SetNumberDelim(rs.GetValue(_T("amount"))), FMT_TEXT);

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		
		
		//nGroup2 += nAmount;
		//xls.SetCellText(nCol + 6, nRow, double2str(nAmount), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nGroup > 0)
	{
		xls.SetCellText(3, nRow, _T("Tổng nhóm"), 4098, true);
		tmpStr.Format(_T("%.0f"), floor(nGroup+0.5));
		xls.SetCellText(4, nRow, SetNumberDelim(tmpStr), FMT_TEXT, true);
		//tmpStr.Format(_T("%.2f"), nGroup2);
		//xls.SetCellText(5, nRow, tmpStr, FMT_TEXT, true);
		nTotal += nGroup;
		nTotal2 += nGroup2;
		nRow++;
	}
	if (nTotal > 0)
	{
		xls.SetCellText(3, nRow, _T("Tổng cộng"), 4098, true);
		tmpStr.Format(_T("%.0f"), floor(nTotal+0.5));
		xls.SetCellText(4, nRow, SetNumberDelim(tmpStr), FMT_TEXT, true);
		//tmpStr.Format(_T("%.2f"), nTotal2);
		//xls.SetCellText(5, nRow, tmpStr, FMT_TEXT, true);
	}
	//xls.SetCellText(1, nRow, _T("Chủ nhiệm khoa"), 4098, true);
	//xls.SetCellText(3, nRow, _T("Thủ kho"), 4098, true);
	//xls.SetCellText(5, nRow, _T("Người lập"), 4098, true);

	xls.SetCellText(nCol+1, nRow+4, _T("Chủ nhiệm khoa"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+3, nRow+4, _T("Thủ khoa"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+5, nRow+4, _T("Người lập"), FMT_TEXT, true, 10);	

	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Xuat cho BH.xls"));
	
} 
int CHCSExportSheetListForInsurance::OnAddPMSExportSheetListForInsurance(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHCSExportSheetListForInsurance::OnEditPMSExportSheetListForInsurance(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHCSExportSheetListForInsurance::OnDeletePMSExportSheetListForInsurance(){
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
int CHCSExportSheetListForInsurance::OnSavePMSExportSheetListForInsurance(){
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
int CHCSExportSheetListForInsurance::OnCancelPMSExportSheetListForInsurance(){
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
int CHCSExportSheetListForInsurance::OnPMSExportSheetListForInsuranceListLoadData(){
	return 0;
}

CString CHCSExportSheetListForInsurance::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1, szWhere2, szPrice, szOrderBy;
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

	if (pMF->GetModuleID() == _T("PCNMT"))
	{
		szOrderBy.AppendFormat(_T(" ORDER BY order_no"));	
	}
	else
	{
		szOrderBy.AppendFormat(_T(" ORDER BY export_date,deptid "));	
	}

	szSQL.Format(_T("SELECT * FROM ( SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) AS order_no, ") \
				_T("	       Cast(0 AS NVARCHAR2(15)) AS document_no, ") \
				_T("           trunc_date(hpo_approvedate)                     AS export_date, ") \
				_T("           Get_patientname(hpo_docno)          AS receiver, ") \
				_T("           hpo_docno                           AS docno, ") \
				_T("           Get_doctype(hpo_doctype)            AS order_type, ") \
				_T("           SUM(hpol_qtyissue *  hpol_unitprice) AS amount, ") \
				_T("           SUM(hpol_qtyissue *  (hpol_unitprice - product_vatprice)) AS realprofit, ") \
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
				_T("		   mt_department_to_id") \
				_T(" FROM      m_transaction ") \
				_T(" LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = mtl_product_item_id)") \
				_T(" LEFT JOIN m_storagelist ON ( msl_storage_id = mt_storage_to_id ) ") \
				_T(" WHERE     mt_status = 'A' AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO', 'EXO') %s") \
				_T(" GROUP     BY mt_orderno, mt_documentno, ") \
				_T("              mt_approveddate, ") \
				_T("              mt_doctype, ") \
				_T("              mt_department_to_id, ") \
				_T("              mt_storage_id, mt_storage_to_id, ") \
				_T("              mt_partner_id, ") \
				_T("              mt_ordertype, ") \
				_T("              msl_category ") \
				_T(" UNION ALL")
				_T(" SELECT    mt_orderno AS order_no, ") \
				_T("	       mt_documentno AS document_no, ") \
				_T(" trunc_date(mt_approveddate),") \
				_T(" TRIM(mt_department_to_id || ' ' ||") \
				_T(" CASE") \
				_T(" WHEN mt_doctype = 'CON'") \
				_T(" THEN get_patientname(pol_docno)") \
				_T(" ELSE get_doctype(mt_doctype) END) AS receiver,") \
				_T(" 0,") \
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
				_T("   CASE WHEN mt_department_to_id IS NOT NULL THEN mt_department_to_id ELSE CAST('TYC' AS NVARCHAR2(3)) END AS deptid") \
				_T(" FROM purchase_orderline2") \
				_T(" LEFT JOIN m_transaction ON(mt_transaction_id = pol_transaction_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON(pol_product_item_id=product_item_id)") \
				_T(" WHERE mt_status     = 'A'") \
				_T(" AND mt_doctype IN ('CON') %s") \
				_T(" GROUP BY") \
				_T(" mt_orderno, mt_documentno,") \
				_T(" trunc_date(mt_approveddate),") \
				_T(" pol_docno,") \
				_T(" mt_doctype,") \
				_T(" mt_department_to_id,") \
				_T(" mt_storage_to_id,") \
				_T(" mt_partner_id,") \
				_T(" mt_ordertype,") \
				_T(" pol_unitprice") \
				_T(" UNION ALL") \
				_T(" SELECT") \
				_T(" so_orderno AS orderno,") \
				_T(" so_documentno AS documentno,") \
				_T(" trunc_date(so_approveddate),") \
				_T(" so_partnername,") \
				_T(" 0,") \
				_T(" get_doctype(so_doctype),") \
				_T(" SUM(sol_qtydelivery * sol_unitprice),") \
				_T(" SUM(sol_qtydelivery * (sol_unitprice - product_vatprice)),") \
				_T(" CAST('0' AS NVARCHAR2(1))") \
				_T(" FROM sale_order") \
				_T(" LEFT JOIN sale_orderline ON (so_sale_order_id = sol_sale_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON ( product_item_id = sol_product_item_id)") \
				_T(" WHERE so_status = 'A' %s") \
				_T(" GROUP BY") \
				_T(" so_orderno,") \
				_T(" so_documentno,") \
				_T(" so_approveddate,") \
				_T(" so_partnername,") \
				_T(" so_doctype") \
				_T(" ) ") \
				_T(" WHERE amount > 0") \
				_T(" %s"),szWhere0, szWhere1, szWhere1, szWhere2, szOrderBy);
//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CHCSExportSheetListForInsurance::GetQueryString1(){
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
BEGIN_MESSAGE_MAP(CHCSExportSheetListForInsurance, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CHCSExportSheetListForInsurance::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}

CString CHCSExportSheetListForInsurance::GetQueryStringV2()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1, szWhere2, szPrice, szOrderBy;
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

	if (pMF->GetModuleID() == _T("PCNMT"))
	{
		szOrderBy.AppendFormat(_T(" ORDER BY order_no"));	
	}
	else
	{
		szOrderBy.AppendFormat(_T(" ORDER BY export_date,deptid "));
	}
		szSQL.Format(_T(" SELECT ") \
		_T(" CASE WHEN nguonchi = 'A'") \
		_T(" THEN CAST ('I. Kinh phí trên cấp(Tự chi)' as nvarchar2(128))") \
		_T(" else CAST ('II. Kinh phí tự cân đối' as nvarchar2(128)) end as v_nguonchi,") \
		_T(" order_no, document_no, export_date, receiver, docno, order_type, amount, realprofit, deptid") \
		_T(" FROM") \
		_T("   (") \
		_T("     SELECT  ") \
		_T("     CASE WHEN po_resource_id = 6") \
		_T("     THEN CAST ('A' AS NVARCHAR2(1))") \
		_T("     ELSE CAST ('B' AS NVARCHAR2(1))") \
		_T("   END AS nguonchi,") \
		_T("  CAST(hpo_orderid AS NVARCHAR2(15))                 AS order_no,") \
		_T("     CAST(0 AS NVARCHAR2(15))                                 AS document_no,") \
		_T("     trunc_date(hpo_approvedate)                              AS export_date,") \
		_T("     Get_patientname(hpo_docno)                               AS receiver,") \
		_T("     hpo_docno                                                AS docno,") \
		_T("     Get_doctype(hpo_doctype)                                 AS order_type,") \
		_T("     SUM(hpol_qtyissue * hpol_unitprice)                      AS amount,") \
		_T("     SUM(hpol_qtyissue * (hpol_unitprice - product_vatprice)) AS realprofit,") \
		_T("     hpo_deptid                                               AS deptid") \
		_T("   FROM hms_pharmaorder") \
		_T("   LEFT JOIN hms_pharmaorderline") \
		_T("   ON ( hpo_orderid = hpol_orderid )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON (product_item_id   = hpol_product_item_id)  ") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON (product_item_id=pol_product_item_id)") \
		_T("   LEFT JOIN purchase_order") \
		_T("   ON (po_purchase_order_id=pol_purchase_order_id)  ") \
		_T("   WHERE hpo_orderstatus = 'A' %s ") \
		_T("   GROUP BY po_resource_id,hpo_orderid,") \
		_T("     hpo_approvedate,") \
		_T("     hpo_docno,") \
		_T("     hpo_doctype,") \
		_T("     hpo_deptid") \
		_T("   UNION ALL") \
		_T("   SELECT  ") \
		_T("     CASE WHEN po_resource_id = 6") \
		_T("     THEN CAST ('A' AS NVARCHAR2(1))") \
		_T("     ELSE CAST ('B' AS NVARCHAR2(1))") \
		_T("   END AS nguonchi,  ") \
		_T("     mt_orderno AS order_no,") \
		_T("     mt_documentno   AS document_no,") \
		_T("     trunc_date(mt_approveddate),") \
		_T("     mt_department_to_id AS receiver,") \
		_T("     0,") \
		_T("     CASE") \
		_T("       WHEN mt_doctype = 'DMO'") \
		_T("       THEN") \
		_T("         CASE") \
		_T("           WHEN mt_ordertype = 'M'") \
		_T("           THEN CAST(N'Dự trù PTTT' AS NVARCHAR2(128))") \
		_T("           WHEN mt_ordertype = 'B'") \
		_T("           THEN CAST(N'Đầu giường' AS NVARCHAR2(128))") \
		_T("           ELSE CAST(N'Dự trù thuốc, vật tư' AS NVARCHAR2(128))") \
		_T("         END") \
		_T("       WHEN mt_doctype = 'DDO'") \
		_T("       THEN CAST(N'Cấp VTTTH' AS NVARCHAR2(128))") \
		_T("       ELSE Get_doctype(mt_doctype)") \
		_T("     END,") \
		_T("     CASE") \
		_T("       WHEN mt_storage_id = 15") \
		_T("       AND mt_doctype          IN('BOO', 'DOO', 'EOH', 'EOO', 'EXO', 'EXP', 'LOO', 'SLO', 'MOV')") \
		_T("       THEN SUM(mtl_qtydelivery * (mtl_unitprice + (mtl_unitprice * product_taxrate)))") \
		_T("       ELSE SUM(mtl_qtydelivery * mtl_saleprice)") \
		_T("     END,") \
		_T("     CASE") \
		_T("       WHEN mt_storage_id = 15") \
		_T("       AND mt_doctype          IN('BOO', 'DOO', 'EOH', 'EOO', 'EXO', 'EXP', 'LOO', 'SLO', 'MOV')") \
		_T("       THEN SUM(mtl_qtydelivery * ((mtl_unitprice + (mtl_unitprice * product_taxrate)) - product_vatprice))") \
		_T("       ELSE SUM(mtl_qtydelivery * (mtl_saleprice - product_vatprice))") \
		_T("     END,") \
		_T("     mt_department_to_id") \
		_T("   FROM m_transaction") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("   LEFT JOIN m_productitem_view3") \

		_T(" ON (product_item_id = mtl_product_item_id)  ") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON (product_item_id=pol_product_item_id)") \
		_T("   LEFT JOIN purchase_order") \
		_T("   ON (po_purchase_order_id=pol_purchase_order_id)  ") \
		_T("   LEFT JOIN m_storagelist") \
		_T("   ON ( msl_storage_id = mt_storage_to_id )") \
		_T("   WHERE mt_status     = 'A'") \
		_T("   AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO', 'EXO') %s") \
		_T("   GROUP BY po_resource_id, mt_orderno,") \
		_T("     mt_documentno,") \
		_T("     mt_approveddate,") \
		_T("     mt_doctype,") \
		_T("     mt_department_to_id,") \
		_T("     mt_storage_id,") \
		_T("     mt_storage_to_id,") \
		_T("     mt_partner_id,") \
		_T("     mt_ordertype,") \
		_T("     msl_category") \
		_T("   UNION ALL") \
		_T("    SELECT  ") \
		_T("     CASE WHEN po_resource_id = 6") \
		_T("     THEN CAST ('A' AS NVARCHAR2(1))") \
		_T("     ELSE CAST ('B' AS NVARCHAR2(1))") \
		_T("   END AS nguonchi,  ") \
		_T("     mt_orderno AS order_no,") \
		_T("     mt_documentno   AS document_no,") \
		_T("     trunc_date(mt_approveddate),") \
		_T("     TRIM(mt_department_to_id") \
		_T("     || ' '") \
		_T("     ||") \
		_T("     CASE") \
		_T("       WHEN mt_doctype = 'CON'") \
		_T("       THEN get_patientname(pol_docno)") \
		_T("       ELSE get_doctype(mt_doctype)") \
		_T("     END) AS receiver,") \
		_T("     0,") \
		_T("     CAST(N'Xuất ký gửi' AS NVARCHAR2(128)),") \
		_T("     CASE") \
		_T("       WHEN pol_unitprice > 0") \
		_T("       THEN SUM(pol_qty * pol_unitprice)") \
		_T("       ELSE SUM(pol_qty *") \
		_T("         (SELECT DISTINCT hpol_unitprice") \
		_T("         FROM hms_pharmaorderline_view2") \
		_T("         WHERE hpol_docno             = pol_docno") \
		_T("         AND hpol_orderid             = pol_orderid") \
		_T("         AND hpol_product_id          = pol_product_id") \
		_T("         AND (hpol_unitprice          = pol_unitprice") \
		_T("         OR COALESCE(pol_unitprice,0) =0)") \
		_T("         ))") \
		_T("     END AS pol_unitprice,") \
		_T("     CASE") \
		_T("       WHEN pol_unitprice > 0") \
		_T("       THEN SUM(pol_qty * (pol_unitprice - product_vatprice))") \
		_T("       ELSE SUM(pol_qty * (") \
		_T("         (SELECT DISTINCT hpol_unitprice") \
		_T("         FROM hms_pharmaorderline_view2") \
		_T("         WHERE hpol_docno             = pol_docno") \
		_T("         AND hpol_orderid             = pol_orderid") \
		_T("         AND hpol_product_id          = pol_product_id") \
		_T("         AND (hpol_unitprice          = pol_unitprice") \
		_T("         OR COALESCE(pol_unitprice,0) =0)") \
		_T("         ) - product_vatprice))") \
		_T("     END,") \
		_T("     CASE") \
		_T("       WHEN mt_department_to_id IS NOT NULL") \
		_T("       THEN mt_department_to_id") \
		_T("       ELSE CAST('TYC' AS NVARCHAR2(3))") \
		_T("     END AS deptid") \
		_T("   FROM purchase_orderline2 ") \
		_T("   LEFT JOIN m_transaction") \
		_T("   ON(mt_transaction_id = pol_transaction_id)") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON(pol_product_item_id=product_item_id) ") \
		_T("   LEFT JOIN purchase_order") \
		_T("   ON (po_purchase_order_id=pol_purchase_order_id)  ") \
		_T("   WHERE mt_status       = 'A'") \
		_T("   AND mt_doctype       IN ('CON') %s") \
		_T("   GROUP BY po_resource_id, mt_orderno,") \
		_T("     mt_documentno,") \
		_T("     trunc_date(mt_approveddate),") \
		_T("     pol_docno,") \
		_T("     mt_doctype,") \
		_T("     mt_department_to_id,") \
		_T("     mt_storage_to_id,") \
		_T("     mt_partner_id,") \
		_T("     mt_ordertype,") \
		_T("     pol_unitprice") \
		_T("   UNION ALL") \
		_T("    SELECT  ") \
		_T("     CASE WHEN po_resource_id = 6") \
		_T("     THEN CAST ('A' AS NVARCHAR2(1))") \
		_T("     ELSE CAST ('B' AS NVARCHAR2(1))") \
		_T("   END AS nguonchi, ") \
		_T("     so_orderno AS orderno,") \
		_T("     so_documentno   AS documentno,") \
		_T("     trunc_date(so_approveddate),") \
		_T("     so_partnername,") \
		_T("     0,") \
		_T("     get_doctype(so_doctype),") \
		_T("     SUM(sol_qtydelivery * sol_unitprice),") \
		_T("     SUM(sol_qtydelivery * (sol_unitprice - product_vatprice)),") \
		_T("     CAST('0' AS NVARCHAR2(1))") \
		_T("   FROM sale_order") \
		_T("   LEFT JOIN sale_orderline") \
		_T("   ON (so_sale_order_id = sol_sale_order_id)") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON ( product_item_id = sol_product_item_id)  ") \
		_T("   LEFT JOIN purchase_orderline") \
		_T("   ON (product_item_id=pol_product_item_id)") \
		_T("   LEFT JOIN purchase_order") \
		_T("   ON (po_purchase_order_id=pol_purchase_order_id)  ") \
		_T("   WHERE so_status      = 'A' %s") \
		_T("   GROUP BY po_resource_id, so_orderno,") \
		_T("     so_documentno,") \
		_T("     so_approveddate,") \
		_T("     so_partnername,") \
		_T("     so_doctype") \
		_T("   )") \
		_T(" WHERE amount > 0") \
		_T(" ORDER BY nguonchi, order_no"),szWhere0, szWhere1, szWhere1, szWhere2);

//_msg(_T("%s"), szSQL);
	return szSQL;
}