#include "stdafx.h"
#include "PMSInwardExportSheetList.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "StringToken.h"
#include <fstream>

void WriteUnicodetoFile(const char* myFile,  wstring& ws){
	std::ofstream outFile(myFile, std::ios::out | std::ios::binary);
	outFile.write((char *) ws.c_str(), ws.length() * sizeof(wchar_t));
	outFile.close();
}

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSInwardExportSheetList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSInwardExportSheetList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSInwardExportSheetList* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSInwardExportSheetList *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMSInwardExportSheetList *)pWnd)->OnStockAddNew();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CPMSInwardExportSheetList *)pWnd)->OnDeptLoadData();
}
static long _OnTreatmenttypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSInwardExportSheetList *)pWnd)->OnTreatmenttypeLoadData();
}
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CPMSInwardExportSheetList *)pWnd)->OnCategoryLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSInwardExportSheetList *pVw = (CPMSInwardExportSheetList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSInwardExportSheetList *pVw = (CPMSInwardExportSheetList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CPMSInwardExportSheetList*)pWnd)->OnAddPMSExportSheetList();
} 
static int _OnEditPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CPMSInwardExportSheetList*)pWnd)->OnEditPMSExportSheetList();
} 
static int _OnDeletePMSExportSheetListFnc(CWnd *pWnd){
	 return ((CPMSInwardExportSheetList*)pWnd)->OnDeletePMSExportSheetList();
} 
static int _OnSavePMSExportSheetListFnc(CWnd *pWnd){
	 return ((CPMSInwardExportSheetList*)pWnd)->OnSavePMSExportSheetList();
} 
static int _OnCancelPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CPMSInwardExportSheetList*)pWnd)->OnCancelPMSExportSheetList();
} 
CPMSInwardExportSheetList::CPMSInwardExportSheetList(CWnd *pParent)
{

	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CPMSInwardExportSheetList::~CPMSInwardExportSheetList(){
}
void CPMSInwardExportSheetList::OnCreateComponents(){
	m_wndExportSheetList.Create(this, _T("Export Sheet List"), 5, 5, 575, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.SetCheckBox(true);
	m_wndStock.Create(this,95, 60, 290, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 295, 60, 375, 85);
	m_wndDept.Create(this,380, 60, 570, 85); 
	m_wndTreatmenttypeLabel.Create(this, _T("Treatment_type"), 10, 90, 90, 115);
	m_wndTreatmenttype.Create(this,95, 90, 290, 115); 
	m_wndCategoryList.Create(this,5, 125, 575, 490); 
	m_wndDailyOrder.Create(this, _T("Daily Order"), 5, 495, 115, 520);
	m_wndSaleInward.Create(this, _T("Sale TC"), 120, 495, 230, 520);
	m_wndSaleWander.Create(this, _T("All TC"), 235, 495, 345, 520);
	m_wndOtherSale.Create(this, _T("Other sale"), 350, 495, 460, 520);
	m_wndAll.Create(this, _T("All"), 465, 495, 575, 520);
	m_wndByServPrice.Create(this, _T("By Serv Price"), 5, 525, 100, 548);
	m_wndCondition.Create(this, _T("\x42\xE1n l\x1EBB \x64\x1B0\x1EE3\x63"), 105, 525, 200, 548);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 385, 525, 495, 550);
	m_wndExport.Create(this, _T("&ExportXLS"), 500, 525, 580, 550);
	m_wndCondition.ShowWindow(SW_HIDE);
	m_wndCategoryList.SetCheckBox();
	m_wndDept.SetCheckBox();
}
void CPMSInwardExportSheetList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndCategoryList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategoryList.InsertColumn(1, _T("Code"), CFMT_TEXT, 50);
	m_wndCategoryList.InsertColumn(2, _T("Name"), CFMT_TEXT, 450);

	m_wndTreatmenttype.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTreatmenttype.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPMSInwardExportSheetList::OnSetWindowEvents(){
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
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndTreatmenttype.SetEvent(WE_LOADDATA, _OnTreatmenttypeLoadDataFnc);
	m_wndCategoryList.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnCategoryLoadData();
}
void CPMSInwardExportSheetList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndByServPrice.GetDlgCtrlID(), m_nByServPrice);
	DDX_Check(pDX, m_wndCondition.GetDlgCtrlID(), m_bCondition);
	DDX_Radio(pDX, m_wndDailyOrder.GetDlgCtrlID(), m_nChoice);
	DDX_TextEx(pDX, m_wndTreatmenttype.GetDlgCtrlID(), m_szTreatmenttypeKey);
}
void CPMSInwardExportSheetList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSInwardExportSheetList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSInwardExportSheetList::SetDefaultValues(){
	m_szDeptKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_nByServPrice = 0;
	m_bCondition = FALSE;
	m_nChoice = 0;
	m_szTreatmenttypeKey.Empty();
}
int CPMSInwardExportSheetList::SetMode(int nMode){
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
/*void CPMSInwardExportSheetList::OnFromDateChange(){
	
} */
/*void CPMSInwardExportSheetList::OnFromDateSetfocus(){
	
} */
/*void CPMSInwardExportSheetList::OnFromDateKillfocus(){
	
} */
int CPMSInwardExportSheetList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSInwardExportSheetList::OnToDateChange(){
	
} */
/*void CPMSInwardExportSheetList::OnToDateSetfocus(){
	
} */
/*void CPMSInwardExportSheetList::OnToDateKillfocus(){
	
} */
int CPMSInwardExportSheetList::OnToDateCheckValue(){
	return 0;
} 
void CPMSInwardExportSheetList::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSInwardExportSheetList::OnStockSelendok(){
	 
}
/*void CPMSInwardExportSheetList::OnStockSetfocus(){
	
}*/
/*void CPMSInwardExportSheetList::OnStockKillfocus(){
	
}*/

long CPMSInwardExportSheetList::OnStockLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}
/*void CPMSInwardExportSheetList::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSInwardExportSheetList::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("In t\x1ED5ng h\x1EE3p"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("In \x63hi ti\x1EBFt"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndPrintPreview.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnPrint1();
		break;
	case 2:
		OnPrint2();
		break;
	}
} 
void CPMSInwardExportSheetList::OnPrint1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szSysDate, szPrice, szRptName, szOldType, szNewType, szOldGroup, szNewGroup, szMoney;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryString();
	int nIdx = 1;
	double nAmount = 0;
	double nGrpTotal = 0, nTypeTotal = 0, nTotal = 0;
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	szRptName.Format(_T("Reports/HMS/PMS_BANGKEPHIEULINH.RPT"));
	if (!rpt.Init(szRptName))
		return;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	if (!m_szStockKey.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStock.GetCurrent(1));
	CReportSection *rptDetail;
	szPrice = _T("vatamount");
	if (m_nByServPrice)
		szPrice = _T("servamount");
	while (!rs.IsEOF()){
		rs.GetValue(_T("idx"), szNewType);
		rs.GetValue(_T("doctype"), szNewGroup);
		if (szOldType != szNewType)
		{
			if (nGrpTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("T\x1ED5ng nh\xF3m phi\x1EBFu: "));
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				tmpStr.Format(_T("%.2f"), nGrpTotal);
				rptDetail->SetValue(_T("s7"), tmpStr);
				nGrpTotal = 0;
			}

			if (nTypeTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("T\x1ED5ng nh\xF3m: "));
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				tmpStr.Format(_T("%.2f"), nTypeTotal);
				rptDetail->SetValue(_T("s7"), tmpStr);
				nTotal += nTypeTotal;
				nGrpTotal = 0;
				nTypeTotal = 0;
			}

			if (szNewType == _T("1"))
				tmpStr = _T("\x43\x1EA5p ph\xE1t");
			else
				tmpStr = _T("Tr\x1EA3 l\x1EA1i");
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));			
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			szOldType = szNewType;
		}

		if (szOldGroup != szNewGroup)
		{
			if (nGrpTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("T\x1ED5ng nh\xF3m phi\x1EBFu: "));
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				tmpStr.Format(_T("%.2f"), nGrpTotal);
				rptDetail->SetValue(_T("s7"), tmpStr);
				nGrpTotal = 0;
			}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));			
			rptDetail->SetValue(_T("GroupName"), szNewGroup);
			szOldGroup = szNewGroup;
			nIdx = 1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("orderno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("expdate"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		tmpStr.Empty();
		rs.GetValue(_T("deptname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("doctype"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(szPrice, nAmount);
		nTypeTotal += nAmount;
		nGrpTotal += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.MoveNext();
	}

	if (nGrpTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng nh\xF3m phi\x1EBFu: "));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%.2f"), nGrpTotal);
		rptDetail->SetValue(_T("s7"), tmpStr);
	}

	if (nTypeTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng nh\xF3m: "));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%.2f"), nTypeTotal);
		rptDetail->SetValue(_T("s7"), tmpStr);
		nTotal -= nTypeTotal;
	}

	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%.2f"), nTotal);
		rptDetail->SetValue(_T("s7"), tmpStr);
	}
	tmpStr.Format(_T("%.2f"), nTotal);
	MoneyToString(tmpStr, szMoney);
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("SumInWord")), szMoney);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CPMSInwardExportSheetList::OnPrint2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szSysDate, szPrice, szAmount, szRptName, szOldType, szNewType, szMoney;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryString2();
	int nIdx = 1, nQty = 0, nTotalQty = 0, nTotalQty2 = 0;
	double nAmount = 0;
	double nTotal = 0, nTotal2 = 0;
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	szRptName.Format(_T("Reports/HMS/PMS_BANGKECHITIETTHUOCBANLE.RPT"));
	if (!rpt.Init(szRptName))
		return;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	if (!m_szStockKey.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStock.GetCurrent(1));
	CReportSection *rptDetail;
	szPrice = _T("vatprice");
	szAmount = _T("vatamount");
	if (m_nByServPrice)
	{
		szPrice = _T("servprice");
		szAmount = _T("servamount");
	}
	while (!rs.IsEOF()){
		rs.GetValue(_T("idx"), szNewType);
		if (szOldType != szNewType)
		{
			if (nTotal > 0)
			{

				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("T\x1ED5ng nh\xF3m: "));
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				tmpStr.Format(_T("%d"), nTotalQty);
				rptDetail->SetValue(_T("s4"), tmpStr);
				tmpStr.Format(_T("%.2lf"), nTotal);
				rptDetail->SetValue(_T("s6"), tmpStr);
				nTotalQty2 += nTotalQty;
				nTotal2 += nTotal;
				nTotalQty = 0;
				nTotal = 0;
			}
			if (szNewType == _T("1"))
				tmpStr = _T("\x43\x1EA5p ph\xE1t");
			else
				tmpStr = _T("Tr\x1EA3 l\x1EA1i");
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));	
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			szOldType = szNewType;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pdname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("qty"), nQty);
		nTotalQty += nQty;
		rptDetail->SetValue(_T("4"), int2str(nQty));
		rs.GetValue(szPrice, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);;
		rs.GetValue(szAmount, nAmount);
		nTotal += nAmount;
		rptDetail->SetValue(_T("6"), double2str(nAmount));
		rs.GetValue(_T("partner"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng nh\xF3m: "));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		tmpStr.Format(_T("%d"), nTotalQty);
		rptDetail->SetValue(_T("s4"), tmpStr);
		tmpStr.Format(_T("%.2lf"), nTotal);
		rptDetail->SetValue(_T("s6"), tmpStr);
		nTotalQty2 -= nTotalQty;
		nTotal2 -= nTotal;
	}
	if (nTotal2 > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%d"), nTotalQty2);
		rptDetail->SetValue(_T("s4"), tmpStr);
		tmpStr.Format(_T("%.2lf"), nTotal2);
		rptDetail->SetValue(_T("s6"), tmpStr);
	}
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CPMSInwardExportSheetList::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("Xuất tổng hợp"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Xuất chi tiết"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Xuất chi tiết nhiều kho"));
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport1();
		break;
	case 2:
		OnExport2();
		break;
	case 3:
		OnExport3();
		break;
	}
} 
void CPMSInwardExportSheetList::OnExport1(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrice, szOldType, szNewType, szOldGroup, szNewGroup;
	int nCol = 0, nRow = 0, nIdx = 1;
	double nAmount = 0;
	double nTypeTotal = 0, nGrpTotal = 0, nTotal = 0;
	szSQL = GetQueryString();
	//_msg(_T("%s"),szSQL); 
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
	xls.SetColumnWidth(3, 45);
	xls.SetColumnWidth(4, 35);
	xls.SetColumnWidth(5, 35);
	xls.SetColumnWidth(6, 16);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 7);
	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellMergedColumns(nCol, nRow + 4, 4);
	xls.SetCellText(nCol, nRow, _T("HEALTHSERVICE"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, _T("HOSPITALNAME"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("\x42\x1EA2NG K\xCA PHI\x1EBEU \x58U\x1EA4T"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	
	tmpStr.Format(_T("Kho : %s"), m_wndStock.GetCurrent(1));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, false, 11);

	//Column Heading
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("S\x1ED1 phi\x1EBFu"));
	arrCol.Add(_T("Ng\xE0y \x78u\x1EA5t"));
	arrCol.Add(_T("\x110\x1A1n v\x1ECB nh\x1EADn h\xE0ng"));
	arrCol.Add(_T("Loại phiếu"));
	arrCol.Add(_T("Họ và tên"));
	arrCol.Add(_T("S\x1ED1 ti\x1EC1n"));
	arrCol.Add(_T("Người thu"));
	nRow = 5;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol+i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	nRow = 6;
	szPrice = _T("vatamount");
	if (m_nByServPrice)
		szPrice = _T("servamount");
	while (!rs.IsEOF()){
		rs.GetValue(_T("idx"), szNewType);
		rs.GetValue(_T("doctype"), szNewGroup);
		if (szOldType != szNewType)
		{
			if (nGrpTotal > 0)
			{
				xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m phi\x1EBFu: "), FMT_TEXT, true);
				tmpStr.Format(_T("%.2f"), nGrpTotal);
				xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
				nGrpTotal = 0;
				nRow++;
			}

			if (nTypeTotal > 0)
			{
				xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m: "), FMT_TEXT, true);
				tmpStr.Format(_T("%.2f"), nTypeTotal);
				xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
				nTotal += nTypeTotal;
				nGrpTotal = 0;
				nTypeTotal = 0;
				nRow++;
			}
			if (szNewType == _T("1"))
				tmpStr = _T("\x43\x1EA5p ph\xE1t");
			else
				tmpStr = _T("Tr\x1EA3 l\x1EA1i");
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			szOldType = szNewType;
			nRow++;
		}

		if (szOldGroup != szNewGroup)
		{
			if (nGrpTotal > 0)
			{
				xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m phi\x1EBFu: "), FMT_TEXT, true);
				tmpStr.Format(_T("%.2f"), nGrpTotal);
				xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
				nGrpTotal = 0;
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewGroup, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nIdx = 1;
			nRow++;
		}
		tmpStr.Format(_T("%d"), nIdx++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("orderno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("expdate"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, CDate::Convert(tmpStr, yyyymmdd , ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("deptname"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("doctype"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(szPrice, nAmount);
		nGrpTotal += nAmount;
		nTypeTotal += nAmount;
		xls.SetCellText(nCol + 6, nRow, double2str(nAmount), FMT_NUMBER1);
		xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("invoice_staff")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	if (nGrpTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m phi\x1EBFu: "), FMT_TEXT, true);
		tmpStr.Format(_T("%.2f"), nGrpTotal);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
		nRow++;
	}
	if (nTypeTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m: "), FMT_TEXT, true);
		tmpStr.Format(_T("%.2f"), nTypeTotal);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
		nTotal -= nTypeTotal;
		nRow++;
	}
	if (nTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), FMT_TEXT, true);
		tmpStr.Format(_T("%.2f"), nTotal);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Linh.xls"));

} 
void CPMSInwardExportSheetList::OnExport2(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrice, szAmount, szOldType, szNewType;
	int nCol = 0, nRow = 0, nIdx = 1, nQty = 0, nTotalQty = 0, nTotalQty2 = 0;
	double nAmount = 0, nTotal = 0, nTotal2 =0;
	szSQL = GetQueryString2();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 18);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(6, 14);
	xls.SetColumnWidth(7, 16);
	xls.SetColumnWidth(8, 70);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 8);
	xls.SetCellMergedColumns(nCol, nRow + 3, 8);
	xls.SetCellMergedColumns(nCol, nRow + 4, 8);
	xls.SetCellText(nCol, nRow, _T("HEALTHSERVICE"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, _T("HOSPITALNAME"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("\x42\x1EA2NG K\xCA PHI\x1EBEU \x58U\x1EA4T"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	
	tmpStr.Format(_T("Kho : %s"), m_wndStock.GetCurrent(1));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, false, 11);

	//Column Heading
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("T\xEAn thu\x1ED1\x63 - h\xE0m l\x1B0\x1EE3ng"));
	arrCol.Add(_T("\x110\x1A1n v\x1ECB"));
	arrCol.Add(_T("S\x1ED1 l\x1B0\x1EE3ng"));
	arrCol.Add(_T("Gi\xE1 nh\x1EADp tr\x1B0\x1EDB\x63 V\x41T"));
	arrCol.Add(_T("Gi\xE1 nh\x1EADp \x63\xF3 V\x41T"));
	arrCol.Add(_T("Gi\xE1 \x62\xE1n"));
	arrCol.Add(_T("Th\xE0nh ti\x1EC1n"));
	arrCol.Add(_T("Nh\xE0 \x63ung \x63\x1EA5p"));
	arrCol.Add(_T("Nước sản xuất"));
	nRow = 5;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol+i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	nRow = 6;
	szPrice = _T("vatprice");
	szAmount = _T("vatamount");
	if (m_nByServPrice)
	{
		szPrice = _T("servprice");
		szAmount = _T("servamount");
	}
	while (!rs.IsEOF()){
		rs.GetValue(_T("idx"), szNewType);
		if (!szNewType.IsEmpty() && szNewType != szOldType)
		{
			if (nTotal > 0)
			{
				xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng nh\xF3m: "), FMT_TEXT, true);
				tmpStr.Format(_T("%d"), nTotalQty);
				xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1, true);
				tmpStr.Format(_T("%.2lf"), nTotal);
				xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
				nTotalQty2 += nTotalQty;
				nTotal2 += nTotal;
				nTotalQty = 0;
				nTotal = 0;
				nRow++;
			}
			if (szNewType == _T("1"))
				tmpStr = _T("\x43\x1EA5p ph\xE1t");
			else
				tmpStr = _T("Tr\x1EA3 l\x1EA1i");
			xls.SetCellMergedColumns(nCol, nRow, 7);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT , true);
			szOldType = szNewType;
			nIdx = 1;
			nRow++;
		}
		tmpStr.Format(_T("%d"), nIdx++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pdname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("qty"), nQty);
		nTotalQty += nQty;
		xls.SetCellText(nCol + 3, nRow, int2str(nQty), FMT_NUMBER1);
		rs.GetValue(_T("unitprice"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("vatprice"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("servprice"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("servamount"), nAmount);
		nTotal += nAmount;
		xls.SetCellText(nCol + 7, nRow, double2str(nAmount), FMT_NUMBER1);
		rs.GetValue(_T("partner"), tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(nCol + 9, nRow, rs.GetValue(_T("product_countryname")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng nh\xF3m: "), FMT_TEXT, true);
		tmpStr.Format(_T("%d"), nTotalQty);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%.2lf"), nTotal);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
		nTotalQty2 -= nTotalQty;
		nTotal2 -= nTotal;
		nRow++;
	}
	if (nTotal2 > 0)
	{
		xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), FMT_TEXT, true);
		tmpStr.Format(_T("%d"), nTotalQty2);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%.2lf"), nTotal2);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Xuat Chi Tiet.xls"));

} 

void CPMSInwardExportSheetList::OnExport3()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrice, szAmount, szStock, szNewType, szOldType, szFilePath, szFileTitle;
	int nCol = 0, nRow = 0, nIdx = 0, nQty = 0, nTotalQty = 0, nTotalQty2 = 0;
	double nAmount = 0, nTotal2 =0;
	long double nSubTotal[45], nTotal[45];
	szFileTitle = _T("Mau_Bang_ke_phieu_linh_chi_tiet_nhieu_kho");
	szFilePath.Format(_T("Exports\\Template\\%s.xls"), szFileTitle);
	if (!xls.Load(szFilePath))
	{
		CString szMsg;
		szMsg.Format(_T("Thiếu file %s"), szFilePath);
		ShowMessageBox(szMsg);
		return;
	}
	xls.SetWorksheet(0);
	szSQL = GetQueryString3();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	for (int i = 0; i < 45; i++)
	{
		nSubTotal[i] = 0;
		nTotal[i] = 0;
	}
	xls.SetCellText(nCol, nRow, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true, 10);
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
	CStringToken tok(Resort());
	nRow = 5;
	for (int i = 0; i < tok.GetSize(); i++)
	{
		tok.GetAt(i, tmpStr);
		xls.SetCellText(nCol + 7 + i*2, nRow, GetStorageName(str2long(tmpStr)), FMT_TEXT | FMT_CENTER, true);
		xls.SetCellMergedColumns(nCol + 7+ i*2, nRow, 2);
		xls.SetCellText(nCol + 7 + i*2, nRow + 1, _T("Số lượng"), FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(nCol + 8 + i*2, nRow + 1, _T("Thành tiền"), FMT_TEXT | FMT_CENTER, true);
	}
	nRow = 7;
	while (!rs.IsEOF()){
		rs.GetValue(_T("idx_h_"), szNewType);
		if (!szNewType.IsEmpty() && szNewType != szOldType)
		{
			if (nSubTotal[0] > 0)
			{
				for (int i = 1; i < 45; i++)
				{
					tmpStr.Format(_T("%f"), nSubTotal[i]);
					if (nSubTotal[i] > 0)
					{
						xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
						nSubTotal[i] = 0;
					}
				}
				nRow++;
			}
			if (szNewType == _T("1"))
				tmpStr = _T("\x43\x1EA5p ph\xE1t");
			else
				tmpStr = _T("Tr\x1EA3 l\x1EA1i");
			xls.SetCellMergedColumns(0, nRow, 7);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT , true);
			szOldType = szNewType;
			nIdx = 1;
			nRow++;
		}
		tmpStr.Format(_T("%d"), nIdx++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
		nCol = 1;
		bool bSum = false, bNum = false;
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			bSum = false;
			bNum = false;
			tmpStr = rs.GetFieldName(i);
			if (tmpStr.MakeLower().Find(_T("_h_")) != -1)
			{
				continue;
			}
			if (tmpStr.MakeLower().Find(_T("_s_")) != -1)
			{
				bSum = true;
			}
			if (tmpStr.MakeLower().Find(_T("_n_")) != -1)
			{
				bNum = true;
			}
			tmpStr = rs.GetValue(i);
			if (bSum)
			{
				nSubTotal[nCol] += str2float(tmpStr);
				nSubTotal[0] += str2float(tmpStr);
				if (szNewType == _T("1"))
				{
					nTotal[nCol] += str2float(tmpStr);
					nTotal[0] += str2float(tmpStr);
				}
				else
				{
					nTotal[nCol] -= str2float(tmpStr);
					nTotal[0] -= str2float(tmpStr);
				}
			}
			xls.SetCellText(nCol, nRow, rs.GetValue(i), bSum|bNum?FMT_NUMBER1:FMT_TEXT);
			nCol++;
		}
		nRow++;
		rs.MoveNext();
	}
	if (nSubTotal[0] > 0)
	{
		for (int i = 1; i < 45; i++)
		{
			tmpStr.Format(_T("%f"), nSubTotal[i]);
			if (nSubTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
				nSubTotal[i] = 0;
			}
		}
		nRow++;
	}
	if (nTotal[0] > 0)
	{
		for (int i = 1; i < 45; i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			if (nTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
				nTotal[i] = 0;
			}
		}
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Linh Chi Tiet Theo Nhieu Kho.xls"));

}

int CPMSInwardExportSheetList::OnAddPMSExportSheetList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSInwardExportSheetList::OnEditPMSExportSheetList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSInwardExportSheetList::OnDeletePMSExportSheetList(){
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
 		OnCancelPMSExportSheetList(); 
 	}
	return 0;
}
int CPMSInwardExportSheetList::OnSavePMSExportSheetList(){
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
 		//OnPMSExportSheetListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSInwardExportSheetList::OnCancelPMSExportSheetList(){
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
int CPMSInwardExportSheetList::OnPMSExportSheetListListLoadData(){
	return 0;
}

CString CPMSInwardExportSheetList::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szCondition, szCondition2, szStock, szDeptIds;
	szWhere.Format(_T(" AND order_status = 'A' AND expdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(0));
		}
	}
	if (!szStock.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND storage_id IN(%s)"), szStock);
	}
	
	if (m_nChoice == 0)
		szWhere.AppendFormat(_T(" AND transaction_id > 0"));
	else if (m_nChoice == 1)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') IN('I', 'W')"));
	else if (m_nChoice == 2)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') <> 'R' "));
	else if (m_nChoice == 3)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') = 'R' "));
	szDeptIds = m_wndDept.GetCheckData(0);
	if (!szDeptIds.IsEmpty())
	{
		szDeptIds.Replace(_T(","), _T("','"));
		szWhere.AppendFormat(_T(" and dept_id in ('%s')"), szDeptIds);
	}
	//if(m_bCondition){
	//	szCondition.Format(_T("AND hfe_createdby = 'banleduoc'"));
	//	szCondition2.Format(_T("1 = 0 AND"));
	//}
	//else szCondition.Format(_T("AND hfe_createdby <> 'banleduoc'"));
	/*TODO: Filter treament type*/
	if (!m_szTreatmenttypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and treatment_category = '%s'"), m_szTreatmenttypeKey);
	}
	szSQL.Format(
		_T(" SELECT idx,") \
		_T("        orderno,") \
		_T("        expdate,") \
		_T("        mt_doctype,") \
		_T("        CASE WHEN mt_doctype IN ( 'PPOHTS' ) THEN Cast('Đơn thuốc khoa HTSS' AS NVARCHAR2(30))") \
		_T("          WHEN mt_doctype IN ( 'PPOC13' ) THEN Cast('Phiếu phát thuốc C1.3' AS NVARCHAR2(30))") \
		_T("          WHEN mt_doctype IN ( 'PPOAB' ) THEN Cast('Phiếu phát thuốc AB' AS NVARCHAR2(30))") \
		
		_T("   WHEN mt_doctype IN ( 'PPUNGTHU' )") \
		_T("    THEN CAST('Phiếu phát thuốc cho BN ung thư ngoại trú' AS NVARCHAR2(60))") \

		_T("          WHEN mt_doctype = 'DMO' AND Substr(orderno, 1, 2) = 'DP' THEN Cast('Phiếu lĩnh PTTT' AS") \
		_T("                                                                             NVARCHAR2(30))") \
		_T("        ELSE Get_doctype(mt_doctype)") \
		_T("        END AS doctype,") \
		_T("        deptname,") \
		_T("        patname,") \
		_T("		invoice_staff,") \
		_T("        SUM(vatamount) AS vatamount,") \
		_T("        SUM(servamount) AS servamount") \
		_T("   FROM (   SELECT 1 AS idx,") \
		_T("                      CASE WHEN hpo_transaction_id > 0 THEN (SELECT mt_orderno") \
		_T("                                                          FROM m_transaction") \
		_T("                                                         WHERE mt_transaction_id = hpo_transaction_id") \
		_T("                                                            )") \
		_T("                      ELSE Cast(hpo_orderid AS NVARCHAR2(15))") \
		_T("                      END AS orderno,") \
		_T("                      hpo_approvedate AS expdate,") \
		_T("                      hpo_storage_id storage_id,") \
		_T("                      hpo_orderstatus order_status,") \
		_T("                      CASE WHEN hpo_transaction_id > 0 THEN (SELECT mt_doctype") \
		_T("                                                          FROM m_transaction") \
		_T("                                                         WHERE mt_transaction_id = hpo_transaction_id") \
		_T("                                                            )") \
		_T("                      ELSE hpo_doctype") \
		_T("                      END AS mt_doctype,") \
		_T("                      hpo_transaction_id transaction_id,") \
		_T("                      Cast('X' AS NVARCHAR2(3)) sale_type,") \
		_T("                      Get_departmentname(hpo_deptid) AS deptname,") \
		_T("                      hpol_qtyorder * product_taxprice AS vatamount,") \
		_T("                      hpol_qtyorder * hpol_unitprice AS servamount,") \
		_T("                      hpo_deptid AS dept_id,") \
		_T("                      'I' AS treatment_category,") \
		_T("                      CASE WHEN hpo_doctype = 'PPO' AND hpo_ordertype = 'M' AND") \
		_T("                                hpo_transaction_id = 0 THEN") \
		_T("                           Get_patientname(hpo_docno)") \
		_T("                      ELSE NULL") \
		_T("                      END AS patname,") \
		_T("                      NULL AS invoice_staff") \
		_T("                 FROM hms_ipharmaorder") \
		_T("            LEFT JOIN hms_ipharmaorderline ON ( hpol_orderid = hpo_orderid )") \
		_T("            LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id )") \
		_T("                WHERE hpo_ordertype IN ( 'D', 'M', 'B', 'P' ) AND product_org_id = 'PM' AND") \
		_T("                      Nvl(hpo_outpatient_order, 'N') = 'N'") \
		_T("            UNION ALL") \
		_T("               SELECT 1 AS idx,") \
		_T("                      Cast(hpo_orderid AS NVARCHAR2(20)) AS orderno,") \
		_T("                      hpo_approvedate AS expdate,") \
		_T("                      hpo_storage_id storage_id,") \
		_T("                      hpo_orderstatus order_status,") \

		_T("  CASE WHEN NVL(hpo_outpatient_order, 'N') = 'Y' and hpo_deptid   <> 'TTDTHM' ") \
		_T("     THEN CAST('PPUNGTHU' AS NVARCHAR2(8)) ") \

		_T("                      WHEN hpo_doctype = 'PPO' AND hpo_deptid = 'TTDTHM' THEN") \
		_T("                           Cast('PPOHTS' AS NVARCHAR2(6))") \

		_T("                      ELSE hpo_doctype") \
		_T("                      END AS mt_doctype,") \
		_T("                      hpo_transaction_id transaction_id,") \
		_T("                      Cast('X' AS NVARCHAR2(3)) sale_type,") \
		_T("                      Get_departmentname(hpo_deptid) AS deptname,") \
		_T("                      hpol_qtyorder * product_taxprice AS vatamount,") \
		_T("                      hpol_qtyorder * hpol_unitprice AS servamount,") \
		_T("                      hpo_deptid AS dept_id,") \
		//_T("                      'I' AS treatment_category,") \//
		_T(" CASE") \
		_T("       WHEN NVL(hpo_outpatient_order, 'N') = 'Y'") \
		_T("       AND hpo_deptid                     <> 'TTDTHM' then 'U' else 'I' end as treatment_category,") \


		_T("                      Get_patientname(hpo_docno) AS patname,") \
		_T("                      NULL AS invoice_staff") \
		_T("                 FROM hms_ipharmaorder") \
		_T("            LEFT JOIN hms_ipharmaorderline ON ( hpol_orderid = hpo_orderid )") \
		_T("            LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id )") \
		_T("                WHERE hpo_ordertype = 'P' AND hpo_outpatient_order = 'Y' AND product_org_id = 'PM'") \
		_T("            UNION ALL") \
		_T("               SELECT 1 AS idx,") \
		_T("                      Cast(hpo_orderid AS NVARCHAR2(10)) AS orderno,") \
		_T("                      hpo_approvedate AS expdate,") \
		_T("                      hpo_storage_id storage_id,") \
		_T("                      hpo_orderstatus order_status,") \
		_T("                      CASE WHEN hpo_doctype = 'PPO' AND hpo_deptid = 'C1.3' THEN Cast('PPOC13' AS") \
		_T("                                                                                      NVARCHAR2(6))") \
		_T("                        WHEN hpo_doctype = 'PPO' AND hpo_deptid = 'AB' THEN Cast(") \
		_T("                        'PPOAB' AS NVARCHAR2(5))") \
		_T("                        WHEN hpo_doctype = 'PPO' AND hpo_deptid = 'TTHTSS' THEN Cast('PPOHTS' AS") \
		_T("                                                                                     NVARCHAR2(6))") \
		_T("                      ELSE hpo_doctype") \
		_T("                      END AS mt_doctype,") \
		_T("                      hpo_transaction_id transaction_id,") \
		_T("                      Cast('X' AS NVARCHAR2(3)) sale_type,") \
		_T("                      Get_departmentname(hpo_deptid) AS deptname,") \
		_T("                      hpol_qtyorder * product_taxprice AS vatamount,") \
		_T("                      hpol_qtyorder * hpol_unitprice AS servamount,") \
		_T("                      hpo_deptid AS dept_id,") \
		_T("                      'E' AS treatment_category,") \
		_T("                      Get_patientname(hpo_docno) AS patname,") \
		_T("                      get_username(hfe_staff) AS invoice_staff") \
		_T("                 FROM hms_pharmaorder") \
		_T("            LEFT JOIN hms_pharmaorderline ON ( hpol_orderid = hpo_orderid )") \
		_T("            LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id )") \
		_T("			LEFT JOIN hms_fee_invoice ON (hpo_invoiceno = hfe_invoiceno AND hfe_docno = hpo_docno)") \
		_T("                WHERE product_org_id = 'PM'") \
		_T("            UNION ALL") \
		_T("               SELECT 1,") \
		_T("                      mt_orderno AS orderno,") \
		_T("                      mt_approveddate AS expdate,") \
		_T("                      mt_storage_id storage_id,") \
		_T("                      mt_status order_status,") \
		_T("                      mt_doctype,") \
		_T("                      0 transaction_id,") \
		_T("                      Cast('X' AS NVARCHAR2(3)) sale_type,") \
		_T("                      Get_departmentname(mt_department_to_id) AS deptname,") \
		_T("                      mtl_qtydelivery * product_taxprice AS vatamount,") \
		_T("                      mtl_qtydelivery * mtl_saleprice AS servamount,") \
		_T("                      mt_department_to_id,") \
		_T("                      'I' AS treatment_category,") \
		_T("                      NULL AS patname,") \
		_T("                      NULL AS invoice_staff") \
		_T("                 FROM m_transaction") \
		_T("            LEFT JOIN M_TRANSACTIONLINE ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("            LEFT JOIN m_productitem_view ON ( product_item_id = mtl_product_item_id )") \
		_T("                WHERE mt_status = 'A' AND mt_doctype IN ( 'DDO', 'CSO' ) AND product_org_id = 'PM'") \
		_T("            UNION ALL") \
		_T("               SELECT 2,") \
		_T("                      mt_orderno AS orderno,") \
		_T("                      mt_approveddate AS expdate,") \
		_T("                      mt_storage_to_id storage_id,") \
		_T("                      mt_status order_status,") \
		_T("                      mt_doctype,") \
		_T("                      hpo_transaction_id transaction_id,") \
		_T("                      Cast('X' AS NVARCHAR2(3)) sale_type,") \
		_T("                      Get_departmentname(mt_department_id) AS deptname,") \
		_T("                      hpolr_qtyreverse * product_taxprice AS vatamount,") \
		_T("                      hpolr_qtyreverse * hpolr_unitprice AS servamount,") \
		_T("                      mt_department_id,") \
		_T("                      'I' AS treatment_category,") \
		_T("                      NULL AS patname,") \
		_T("                      NULL AS invoice_staff") \
		_T("                 FROM hms_ipharmaorder") \
		_T("            LEFT JOIN hms_ipharmaorderline_r ON( hpo_orderid = hpolr_orderid )") \
		_T("            LEFT JOIN m_transaction ON ( mt_transaction_id = hpolr_retorder_id )") \
		_T("            LEFT JOIN m_productitem_view ON ( product_item_id = hpolr_product_item_id )") \
		_T("                WHERE hpolr_qtyreverse > 0 AND mt_doctype = 'DRO' AND product_org_id = 'PM'") \
		_T("            UNION ALL") \
		_T("               SELECT 1,") \
		_T("                      so_orderno AS orderno,") \
		_T("                      Decode('R', so_partner_type_id, so_approveddate,") \
		_T("                                  hfe_createddate) AS expdate,") \
		_T("                      so_storage_id storage_id,") \
		_T("                      so_status order_status,") \
		_T("                      so_doctype,") \
		_T("                      0 transaction_id,") \
		_T("                      so_partner_type_id sale_type,") \
		_T("                      so_partnername AS deptname,") \
		_T("                      sol_qtydelivery * product_taxprice AS vatamount,") \
		_T("                      sol_qtydelivery * sol_unitprice AS servamount,") \
		_T("                      so_partneraddress,") \
		_T("                      CASE WHEN Nvl(so_partner_type_id, 'X') = 'W' THEN 'E'") \
		_T("                      ELSE 'I'") \
		_T("                      END AS treatment_category,") \
		_T("                      NULL AS patname,") \
		_T("                      get_username(hfe_staff) AS invoice_staff") \
		_T("                 FROM sale_order") \
		_T("            LEFT JOIN sale_orderline ON ( so_sale_order_id = sol_sale_order_id )") \
		_T("            LEFT JOIN hms_fee_invoice ON ( hfe_docno = so_docno AND hfe_invoiceno = so_invoiceno )") \
		_T("            LEFT JOIN m_productitem_view ON ( product_item_id = sol_product_item_id )") \
		_T("                WHERE sol_product_id > 0 AND Decode('R', so_partner_type_id, 'P',") \
		_T("                                      hfe_status) = 'P' AND product_org_id = 'PM'") \
		_T("            UNION ALL") \
		_T("               SELECT 2,") \
		_T("                      Cast(hpo_pharmareturnorder_id AS NVARCHAR2(10)),") \
		_T("                      hpo_approveddate,") \
		_T("                      hpo_storage_id storage_id,") \
		_T("                      hpo_status order_status,") \
		_T("                      hpo_doctype,") \
		_T("                      0 transaction_id,") \
		_T("                      so_partner_type_id sale_type,") \
		_T("                      Get_patientname(hpo_docno),") \
		_T("                      hpol_qtyreturn * product_taxprice,") \
		_T("                      hpol_qtyreturn * hpol_unitprice,") \
		_T("                      so_partneraddress,") \
		_T("                      'E' AS treatment_category,") \
		_T("                      NULL AS patname,") \
		_T("                      NULL AS invoice_staff") \
		_T("                 FROM hms_pharmareturnorder") \
		_T("            LEFT JOIN hms_pharmareturnorder_line ON (") \
		_T("            hpo_pharmareturnorder_id = hpol_pharmareturnorder_id )") \
		_T("            LEFT JOIN sale_order ON ( so_sale_order_id = hpo_orderid )") \
		_T("            LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id )") \
		_T("                WHERE hpo_doctype = 'RRO' AND product_org_id = 'PM'") \
		_T("         UNION ALL") \
		_T("            SELECT 2,") \
		_T("                   Cast(hpo_pharmareturnorder_id AS NVARCHAR2(10)),") \
		_T("                   hpo_approveddate,") \
		_T("                   hpo_storage_id storage_id,") \
		_T("                   hpo_status order_status,") \
		_T("                   Cast('RRO' AS NVARCHAR2(6)),") \
		_T("                   0 transaction_id,") \
		_T("                   so_partner_type_id sale_type,") \
		_T("                   Get_departmentname(hpo_deptid)") \
		_T("                   ||'-'") \
		_T("                   || Get_patientname(hpo_docno) AS deptname,") \
		_T("                   hpol_qtyreturn * product_taxprice,") \
		_T("                   hpol_qtyreturn * hpol_unitprice,") \
		_T("                   so_partneraddress,") \
		_T("                   'E' AS treatment_category,") \
		_T("                   NULL AS patname,") \
		_T("                   NULL AS invoice_staff") \
		_T("              FROM hms_pharmareturnorder") \
		_T("         LEFT JOIN hms_pharmareturnorder_line ON (") \
		_T("         hpo_pharmareturnorder_id = hpol_pharmareturnorder_id )") \
		_T("         LEFT JOIN sale_order ON ( so_sale_order_id = hpo_orderid )") \
		_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id )") \
		_T("             WHERE hpo_doctype IN ( 'DRO' ) AND product_org_id = 'PM')") \
		_T("  WHERE 1 = 1 %s") \
		_T("  GROUP BY idx,orderno,expdate,mt_doctype,deptname,patname, invoice_staff") \
		_T("  ORDER BY idx,doctype,expdate ")
		, szWhere);

		//WriteUnicodetoFile("Log\\sql.txt", std::wstring(szSQL));
	return szSQL;
}

CString CPMSInwardExportSheetList::GetQueryString2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szCondition, szCondition2, szStock, szCategoryIds, szDeptIds;
	szWhere.Format(_T(" AND order_status = 'A' AND expdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(0));
		}
	}
	if (!szStock.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND storage_id IN(%s)"), szStock);
	}

	if (m_nChoice == 0)
		szWhere.AppendFormat(_T(" AND transaction_id > 0"));
	else if (m_nChoice == 1)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') IN('I', 'W')"));
	else if (m_nChoice == 2)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') <> 'R' "));
	else if (m_nChoice == 3)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') = 'R' "));
	//if(m_bCondition)
	//{
	//	szCondition.Format(_T("AND hfe_createdby = 'banleduoc'"));
	//	szCondition2.Format(_T("1 = 0 AND"));
	//}
	//else
	//{
	//	szCondition.Format(_T("AND hfe_createdby <> 'banleduoc'"));
	//}
	for (int i = 0; i < m_wndCategoryList.GetItemCount(); i++)
	{
		if (m_wndCategoryList.GetCheck(i) == FALSE)
		{
			continue;
		}
		if (!szCategoryIds.IsEmpty())
		{
			szCategoryIds += _T(",");
		}
		szCategoryIds.AppendFormat(_T("%d"), str2int(m_wndCategoryList.GetItemText(i, 0)));
	}
	if (!szCategoryIds.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and product_categoryid in (%s)"), szCategoryIds);
	}
	szDeptIds = m_wndDept.GetCheckData(0);
	if (!szDeptIds.IsEmpty())
	{
		szDeptIds.Replace(_T(","), _T("','"));
		szWhere.AppendFormat(_T(" and dept_id in ('%s')"), szDeptIds);
	}
	if (!m_szTreatmenttypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and treatment_category = '%s'"), m_szTreatmenttypeKey);
	}
	szSQL.Format(_T(" SELECT") \
		_T("   idx,") \
		_T("   pdname,") \
		_T("   unit,") \
		_T("   SUM(qty) AS qty,") \
		_T("   unitprice,") \
		_T("   vatprice,") \
		_T("   servprice,") \
		_T("   SUM(vatamount)  AS vatamount,") \
		_T("   SUM(servamount) AS servamount,") \
		_T("   partner,") \
		_T("   product_countryname") \
		_T(" FROM(") \
		_T(" SELECT idx,") \
		_T("   pdname,") \
		_T("   unit,") \
		_T("   SUM(qty) AS qty,") \
		_T("   unitprice,") \
		_T("   vatprice,") \
		_T("   servprice,") \
		_T("   SUM(vatamount)  AS vatamount,") \
		_T("   SUM(servamount) AS servamount,") \
		_T(" (SELECT") \
		_T(" LISTAGG(CAST(partnerid AS VARCHAR2(1024)), ', ') WITHIN GROUP (ORDER BY partnerid)") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT get_partnername(po_partner_id) AS partnerid,") \
		_T(" pol_product_item_id") \
		_T(" FROM purchase_order") \
		_T(" LEFT JOIN purchase_orderline") \
		_T(" ON(po_purchase_order_id = pol_purchase_order_id)") \
		_T(" WHERE pol_storage_id IN(3, 14, 23)") \
		_T(" )") \
		_T(" WHERE pol_product_item_id = product_item_id") \
		_T(" ) AS partner,") \
		_T("	product_countryname ") \
		_T(" FROM") \
		_T("   (SELECT 1                          AS idx,") \
		_T("     hpo_approvedate                  AS expdate,") \
		_T("     hpo_storage_id                   AS storage_id,") \
		_T("     hpo_orderstatus                  AS order_status,") \
		_T("     hpo_transaction_id               AS transaction_id,") \
		_T("     CAST('X' AS NVARCHAR2(3))        AS sale_type,") \
		_T("     product_name                     AS pdname,") \
		_T("     GET_UOMNAME(product_purchase_uomid)         AS unit,") \
		_T("     hpol_qtyorder                    AS qty,") \
		_T("     product_unitprice                AS unitprice,") \
		_T("     product_taxprice                 AS vatprice,") \
		/*
		_T("     mtl_saleprice                    AS servprice,") \
		_T("     hpol_qtyorder * product_taxprice AS vatamount,") \
		_T("     hpol_qtyorder * mtl_saleprice    AS servamount,") \
		*/
		_T("     hpol_unitprice	                   AS servprice,") \
		_T("     hpol_qtyorder * product_taxprice AS vatamount,") \
		_T("     hpol_qtyorder * hpol_unitprice    AS servamount,") \
		_T("     product_item_id,") \
		_T("	 product_countryname,") \
		_T("	 product_categoryid,") \
		_T("	 hpo_deptid as dept_id,") \
		_T("	 'I' as treatment_category ") \
		_T("   FROM hms_ipharmaorder") \
		/*_T("   LEFT JOIN m_transaction") \
		_T("   ON ( mt_transaction_id = hpo_transaction_id )") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON (hpol_orderid         = hpo_orderid") \
		_T("   AND hpol_product_item_id = mtl_product_item_id)") \
		_T("   LEFT JOIN m_productitem_view") \
		_T("   ON ( product_item_id = mtl_product_item_id )") \
		*/
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON (hpol_orderid         = hpo_orderid") \
		_T("   AND hpol_docno = hpo_docno)") \
		_T("   LEFT JOIN m_productitem_view") \
		_T("   ON ( product_item_id = hpol_product_item_id )") \
		_T("   WHERE hpo_ordertype IN ('D', 'M', 'B', 'P') AND product_org_id = 'PM'") \
		_T("	and nvl(hpo_outpatient_order, 'N') ='N'") \
		_T(" UNION ALL") \
		_T("   SELECT 1                          AS idx,") \
		_T("     hpo_approvedate                  AS expdate,") \
		_T("     hpo_storage_id                   AS storage_id,") \
		_T("     hpo_orderstatus                  AS order_status,") \
		_T("     hpo_transaction_id               AS transaction_id,") \
		_T("     CAST('X' AS NVARCHAR2(3))        AS sale_type,") \
		_T("     product_name                     AS pdname,") \
		_T("     GET_UOMNAME(product_purchase_uomid)         AS unit,") \
		_T("     hpol_qtyorder                    AS qty,") \
		_T("     product_unitprice                AS unitprice,") \
		_T("     product_taxprice                 AS vatprice,") \
		_T("     hpol_unitprice                    AS servprice,") \
		_T("     hpol_qtyorder * product_taxprice AS vatamount,") \
		_T("     hpol_qtyorder * hpol_unitprice    AS servamount,") \
		_T("     product_item_id,") \
		_T("	 product_countryname,") \
		_T("	 product_categoryid,") \
		_T("	 hpo_deptid,") \
		_T("	 'I' as treatment_category ") \
		_T("   FROM hms_ipharmaorder") \
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON (hpol_orderid         = hpo_orderid) ") \
		_T("   LEFT JOIN m_productitem_view") \
		_T("   ON ( product_item_id = hpol_product_item_id )") \
		_T("   WHERE hpo_ordertype ='P' and hpo_outpatient_order='Y' AND product_org_id = 'PM'") \
		_T(" UNION ALL") \
		_T("   SELECT 1                          AS idx,") \
		_T("     hpo_approvedate                  AS expdate,") \
		_T("     hpo_storage_id                   AS storage_id,") \
		_T("     hpo_orderstatus                  AS order_status,") \
		_T("     0               AS transaction_id,") \
		_T("     CAST('X' AS NVARCHAR2(3))        AS sale_type,") \
		_T("     product_name                     AS pdname,") \
		_T("     GET_UOMNAME(product_purchase_uomid)         AS unit,") \
		_T("     hpol_qtyorder                    AS qty,") \
		_T("     product_unitprice                AS unitprice,") \
		_T("     product_taxprice                 AS vatprice,") \
		_T("     hpol_unitprice                   AS servprice,") \
		_T("     hpol_qtyorder * product_taxprice AS vatamount,") \
		_T("     hpol_qtyorder * hpol_unitprice   AS servamount,") \
		_T("     product_item_id,") \
		_T("	 product_countryname,") \
		_T("	 product_categoryid,") \
		_T("	 hpo_deptid,") \
		_T("	 'E' as treatment_category ") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON (hpol_orderid = hpo_orderid)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( product_item_id = hpol_product_item_id ) WHERE product_org_id = 'PM'") \
		_T("   UNION ALL") \
		_T("   SELECT 2,") \
		_T("     mt_approveddate                    AS expdate,") \
		_T("     mt_storage_to_id                   AS storage_id,") \
		_T("     mt_status                          AS order_status,") \
		_T("     hpo_transaction_id                 AS transaction_id,") \
		_T("     CAST('X' AS NVARCHAR2(3))          AS sale_type,") \
		_T("     product_name                       AS pdname,") \
		_T("     GET_UOMNAME(product_purchase_uomid)           AS unit,") \
		_T("     hpolr_qtyreverse                    AS qty,") \
		_T("     product_unitprice                  AS unitprice,") \
		_T("     product_taxprice                   AS vatprice,") \
		_T("     hpolr_unitprice                     AS servprice,") \
		_T("     hpolr_qtyreverse * product_taxprice AS vatamount,") \
		_T("     hpolr_qtyreverse * hpolr_unitprice   AS servamount,") \
		_T("     product_item_id,") \
		_T("	 product_countryname,") \
		_T("	 product_categoryid,") \
		_T("	 hpo_deptid,") \
		_T("	 'I' as treatment_category ") \
		_T("   FROM hms_ipharmaorder") \
		_T("   LEFT JOIN hms_ipharmaorderline_r") \
		_T("   ON (hpo_orderid = hpolr_orderid)") \
		_T("   LEFT JOIN m_transaction") \
		_T("   ON ( mt_transaction_id = hpolr_retorder_id )") \
		_T("   LEFT JOIN m_productitem_view") \
		_T("   ON ( product_item_id  = hpolr_product_item_id )") \
		_T("   WHERE hpolr_qtyreverse > 0") \
		_T("   AND mt_doctype        = 'DRO' AND product_org_id = 'PM'") \
		_T("   UNION ALL") \
		_T("   SELECT 1,") \
		_T("     DECODE('R', so_partner_type_id, so_approveddate, hfe_createddate)     AS expdate,") \
		_T("     so_storage_id                      AS storage_id,") \
		_T("     so_status                          AS order_status,") \
		_T("     0                                  AS transaction_id,") \
		_T("     so_partner_type_id                 AS sale_type,") \
		_T("     product_name                       AS pdname,") \
		_T("     GET_UOMNAME(product_purchase_uomid)           AS unit,") \
		_T("     sol_qtydelivery                    AS qty,") \
		_T("     product_unitprice                  AS unitprice,") \
		_T("     product_taxprice                   AS vatprice,") \
		_T("     sol_unitprice                      AS servprice,") \
		_T("     sol_qtydelivery * product_taxprice AS vatamount,") \
		_T("     sol_qtydelivery * sol_unitprice    AS servamount,") \
		_T("     product_item_id,") \
		_T("	 product_countryname,") \
		_T("	 product_categoryid,") \
		_T("	 SO_PARTNERADDRESS,") \
		_T("	 case when nvl(so_partner_type_id, 'X') = 'W' then 'E' else 'I' end as treatment_category ") \
		_T("   FROM sale_order") \
		_T("   LEFT JOIN sale_orderline") \
		_T("   ON (so_sale_order_id = sol_sale_order_id)") \
		_T("   LEFT JOIN hms_fee_invoice") \
		_T("   ON(hfe_docno      = so_docno") \
		_T("   AND hfe_invoiceno = so_invoiceno)") \
		_T("   LEFT JOIN m_productitem_view") \
		_T("   ON ( product_item_id = sol_product_item_id )") \
		_T("   WHERE sol_product_id > 0") \
		_T("   AND DECODE('R', so_partner_type_id, 'P', hfe_status) = 'P' AND product_org_id = 'PM'") \
		_T("   UNION ALL") \
		_T("   SELECT 2,") \
		_T("     hpo_approveddate                  AS expdate,") \
		_T("     hpo_storage_id                    AS storage_id,") \
		_T("     hpo_status                        AS order_status,") \
		_T("     0                                 AS transaction_id,") \
		_T("     so_partner_type_id                AS sale_type,") \
		_T("     product_name                      AS pdname,") \
		_T("     GET_UOMNAME(product_purchase_uomid)          AS unit,") \
		_T("     hpol_qtyreturn                    AS qty,") \
		_T("     product_unitprice                 AS unitprice,") \
		_T("     product_taxprice                  AS vatprice,") \
		_T("     hpol_unitprice                    AS servprice,") \
		_T("     hpol_qtyreturn * product_taxprice AS vatamount,") \
		_T("     hpol_qtyreturn * hpol_unitprice   AS servamount,") \
		_T("     product_item_id,") \
		_T("	 product_countryname,") \
		_T("	 product_categoryid,") \
		_T("	 hpo_deptid,") \
		_T("	 'E' as treatment_category ") \
		_T("   FROM hms_pharmareturnorder") \
		_T("   LEFT JOIN hms_pharmareturnorder_line") \
		_T("   ON (hpo_pharmareturnorder_id = hpol_pharmareturnorder_id)") \
		_T("   LEFT JOIN sale_order") \
		_T("   ON (so_sale_order_id = hpo_orderid)") \
		_T("   LEFT JOIN m_productitem_view") \
		_T("   ON (product_item_id = hpol_product_item_id)") \
		_T("   WHERE hpo_doctype   = 'RRO' AND product_org_id = 'PM'") \
		_T(" UNION ALL") \
		_T("     SELECT 2,") \
		_T("       hpo_approveddate                    AS expdate,") \
		_T("       hpo_storage_id                      AS storage_id,") \
		_T("       hpo_status                          AS order_status,") \
		_T("       0                                   AS transaction_id,") \
		_T("       so_partner_type_id                  AS sale_type,") \
		_T("       product_name                        AS pdname,") \
		_T("       GET_UOMNAME(product_purchase_uomid) AS unit,") \
		_T("       hpol_qtyreturn                      AS qty,") \
		_T("       product_unitprice                   AS unitprice,") \
		_T("       product_taxprice                    AS vatprice,") \
		_T("       hpol_unitprice                      AS servprice,") \
		_T("       hpol_qtyreturn * product_taxprice   AS vatamount,") \
		_T("       hpol_qtyreturn * hpol_unitprice     AS servamount,") \
		_T("     product_item_id,") \
		_T("	 product_countryname,") \
		_T("	 product_categoryid,") \
		_T("	 hpo_deptid,") \
		_T("	 'E' as treatment_category ") \
		_T("     FROM hms_pharmareturnorder") \
		_T("     LEFT JOIN hms_pharmareturnorder_line") \
		_T("     ON (hpo_pharmareturnorder_id = hpol_pharmareturnorder_id)") \
		_T("     LEFT JOIN sale_order") \
		_T("     ON (so_sale_order_id = hpo_orderid)") \
		_T("     LEFT JOIN m_productitem_view") \
		_T("     ON (product_item_id = hpol_product_item_id)") \
		_T("     WHERE hpo_doctype   = 'DRO'") \
		_T("     AND product_org_id  = 'PM'") \

		_T(" UNION ALL")
		_T(" SELECT    1 AS idx,") \
		_T("           MT_APPROVEDDATE AS expdate,") \
		_T("           mt_storage_id AS storage_id,") \
		_T("           MT_STATUS AS order_status,") \
		_T("           0 AS transaction_id,") \
		_T("           Cast ('X' AS NVARCHAR2 (3)) AS sale_type,") \
		_T("           product_name AS pdname,") \
		_T("           Get_uomname (product_purchase_uomid) AS unit,") \
		_T("           mtl_qtydelivery AS qty,") \
		_T("           product_unitprice AS unitprice,") \
		_T("           product_taxprice AS vatprice,") \
		_T("           mtl_saleprice AS servprice,") \
		_T("           mtl_qtydelivery * product_taxprice AS vatamount,") \
		_T("           mtl_qtydelivery * mtl_saleprice AS servamount,") \
		_T("           product_item_id,") \
		_T("           product_countryname,") \
		_T("           product_categoryid,") \
		_T("           MT_DEPARTMENT_TO_ID,") \
		_T("           CASE WHEN sd_type = 'DT' THEN 'I'") \
		_T("           ELSE 'E'") \
		_T("           END AS treatment_category") \
		_T(" FROM      m_transaction") \
		_T(" LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" LEFT JOIN m_productitem_view ON ( mtl_product_item_id = product_item_id )") \
		_T(" LEFT JOIN sys_dept ON ( sd_id = mt_department_to_id ) ") \
		_T(" WHERE mt_doctype IN ('DDO', 'CSO')") \

		_T("   )") \
		_T(" WHERE 1 = 1 %s") \
		_T(" GROUP BY idx,") \
		_T("   pdname,") \
		_T("   unit,") \
		_T("   unitprice,") \
		_T("   vatprice,") \
		_T("   servprice,") \
		_T("   product_item_id,")
		_T("   product_countryname") \
		_T(" ) tbl2") \
		_T(" GROUP BY idx,") \
		_T("   pdname,") \
		_T("   unit,") \
		_T("   unitprice,") \
		_T("   vatprice,") \
		_T("   servprice,") \
		_T("   partner,") \
		_T("   product_countryname ") \
		_T(" ORDER BY idx,") \
		_T("   pdname,") \
		_T("   unit,") \
		_T("   unitprice,") \
		_T("   vatprice,") \
		_T("   servprice"), szWhere);
	//_msg(_T("%s"), szSQL);
	WriteUnicodetoFile("Log\\sql.txt", std::wstring(szSQL));
	return szSQL;
}

CString CPMSInwardExportSheetList::GetQueryString3(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szCondition, szCondition2, szStock, szDeptIds;
	szWhere.Format(_T(" AND expdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(0));
		}
	}
	if (!szStock.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND storage_id IN(%s)"), szStock);
	}
	/*TODO:Filter by order_type*/
	if (m_nChoice == 0)
		szWhere.AppendFormat(_T(" AND transaction_id > 0"));
	else if (m_nChoice == 1)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') IN('I', 'W')"));
	else if (m_nChoice == 2)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') <> 'R' "));
	else if (m_nChoice == 3)
		szWhere.AppendFormat(_T(" AND NVL(sale_type, 'W') = 'R' "));
	//if(m_bCondition)
	//{
	//	szCondition.Format(_T("AND hfe_createdby = 'banleduoc'"));
	//	szCondition2.Format(_T("1 = 0 AND"));
	//}
	//else
	//{
	//	szCondition.Format(_T("AND hfe_createdby <> 'banleduoc'"));
	//}
	szDeptIds = m_wndDept.GetCheckData(0);
	if (!szDeptIds.IsEmpty())
	{
		szDeptIds.Replace(_T(","), _T("','"));
		szWhere.AppendFormat(_T(" and department_id in ('%s')"), szDeptIds);
	}
	if (!m_szTreatmenttypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and treatment_category = '%s'"), m_szTreatmenttypeKey);
	}
	szSQL.Format(_T(" WITH tbl_partner") \
	_T("      AS (SELECT    DISTINCT Get_partnername(po_partner_id) AS partnerid,") \
	_T("                             pol_product_item_id") \
	_T("          FROM      purchase_orderline") \
	_T("          LEFT JOIN purchase_order ON( po_purchase_order_id = pol_purchase_order_id )") \
	_T("          WHERE     po_storage_id IN( %s ) AND po_status = 'A'),") \
	_T("      tbl_main") \
	_T("      AS (SELECT 1 AS idx,") \
	_T("                 product_item_id,") \
	_T("                 qty_export AS qty,") \
	_T("                 unit_price AS servprice,") \
	_T("                 approved_date AS expdate,") \
	_T("                 storage_id,") \
	_T("                 doc_type,") \
	_T("                 order_type,") \
	_T("				 department_id,") \
	_T("				 transaction_id,") \
	_T("				 treatment_category") \
	_T("          FROM   m_export_patient_view") \
	_T("          UNION ALL") \
	_T("          SELECT 2 AS idx,") \
	_T("                 product_item_id,") \
	_T("                 qty_import AS qty,") \
	_T("                 unit_price AS servprice,") \
	_T("                 approved_date AS expdate,") \
	_T("                 storage_id,") \
	_T("                 doc_type,") \
	_T("                 order_type AS sale_type,") \
	_T("				 department_id,") \
	_T("				 transaction_id,") \
	_T("				 treatment_category") \
	_T("          FROM   m_import_patient_view)") \
	_T(" SELECT *") \
	_T(" FROM   ( ") \
	_T("   SELECT    idx as idx_h_,") \
	_T("		product_name AS pdname,") \
	_T("		Get_uomname(product_purchase_uomid) AS unit,") \
	_T("		product_unitprice AS unitprice_n_,") \
	_T("		product_taxprice AS vatprice_n_,") \
	_T("		servprice as servprice_n_,") \
	_T("		qty,") \
	_T("		qty*servprice as servamount,") \
	_T("		(SELECT Listagg(Cast(partnerid AS VARCHAR2(1024)), ', ')") \
	_T("		WITHIN GROUP (ORDER BY partnerid)") \
	_T("		FROM   tbl_partner") \
	_T("		WHERE  pol_product_item_id = t.product_item_id) AS partner,") \
	_T("		storage_id") \
	_T("   FROM tbl_main t") \
	_T("   LEFT JOIN m_productitem_view v ON ( t.product_item_id = v.product_item_id )") \
	_T("   WHERE     1 = 1 %s) ") \
	_T(" pivot  ") \
	_T(" ( ") \
    _T(" sum(qty) as qty_s_, ") \
    _T(" sum(servamount) as servamount_s_ ") \
    _T(" for storage_id in (%s) ") \
	_T(" ) ") \
	_T(" ORDER BY idx_h_,  ") \
    _T("	pdname	"), szStock, szWhere, Resort());
	//_msg(_T("%s"), szSQL);
	return szSQL;
}

BEGIN_MESSAGE_MAP(CPMSInwardExportSheetList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSInwardExportSheetList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}

long CPMSInwardExportSheetList::OnDeptLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and (sd_type = 'KB' or sd_id = 'TTDTHM')"));
	return pMF->LoadDepartmentList(&m_wndDept, m_szDeptKey, szFilter);
}

CString CPMSInwardExportSheetList::Resort()
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szRet, szStock, szSQL;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock.AppendFormat(_T(", "));
			szStock.AppendFormat(_T("%s"), m_wndStock.GetCurrent(0));
		}
	}
	szSQL.Format(_T("SELECT listagg(msl_storage_id, ',') within group (order by msl_type, msl_category, msl_name)") \
				_T(" FROM m_storagelist") \
				_T(" WHERE msl_storage_id IN (%s)") \
				, szStock);
	rs.ExecSQL(szSQL);
	szRet = rs.GetStringValue();
	return szRet;
}

CString CPMSInwardExportSheetList::GetStorageName(long nStorage_id)
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("get_storagename(%ld)"), nStorage_id);
	return pMF->ExecDML(szSQL);
}
long CPMSInwardExportSheetList::OnCategoryLoadData()
{
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" select mpc_product_category_id as id, mpc_parent_id, mpc_level, mpc_code as code, mpc_name as name ") \
	_T(" from m_product_category") \
	_T(" where mpc_isactive='Y'  ") \
	_T(" and mpc_org_id in('GL','%s') %s "), pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	m_wndCategoryList.BeginLoad();
	while (!rs.IsEOF())
	{
		m_wndCategoryList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("code")),
			rs.GetValue(_T("name")),
			NULL
			);
		rs.MoveNext();
	}
	m_wndCategoryList.EndLoad();
	return rs.GetRecordCount();
}

long CPMSInwardExportSheetList::OnTreatmenttypeLoadData()
{
	m_wndTreatmenttype.DeleteAllItems();
	m_wndTreatmenttype.AddItems(_T("E"), _T("Ngoại trú"), NULL);
	m_wndTreatmenttype.AddItems(_T("I"), _T("Nội trú"), NULL);
	m_wndTreatmenttype.AddItems(_T("U"), _T("Phiếu phát ung thư"), NULL);
	return 2;
}