#include "stdafx.h"
#include "FMExportSheetList.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMExportSheetList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMExportSheetList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMExportSheetList* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CFMExportSheetList *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CFMExportSheetList *)pWnd)->OnStockAddNew();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMExportSheetList *)pWnd)->OnStatusLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMExportSheetList *pVw = (CFMExportSheetList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMExportSheetList *pVw = (CFMExportSheetList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CFMExportSheetList*)pWnd)->OnAddPMSExportSheetList();
} 
static int _OnEditPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CFMExportSheetList*)pWnd)->OnEditPMSExportSheetList();
} 
static int _OnDeletePMSExportSheetListFnc(CWnd *pWnd){
	 return ((CFMExportSheetList*)pWnd)->OnDeletePMSExportSheetList();
} 
static int _OnSavePMSExportSheetListFnc(CWnd *pWnd){
	 return ((CFMExportSheetList*)pWnd)->OnSavePMSExportSheetList();
} 
static int _OnCancelPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CFMExportSheetList*)pWnd)->OnCancelPMSExportSheetList();
} 
CFMExportSheetList::CFMExportSheetList(CWnd *pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMExportSheetList::~CFMExportSheetList(){
}
void CFMExportSheetList::OnCreateComponents(){
	m_wndExportSheetList.Create(this, _T("Export Sheet List"), 5, 5, 460, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 230, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 30, 315, 55);
	m_wndToDate.Create(this,320, 30, 455, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.Create(this,95, 60, 230, 85); 
	m_wndStock.SetCheckBox(true);
	m_wndStatusLabel.Create(this, _T("Status"), 235, 60, 315, 85);
	m_wndStatus.Create(this,320, 60, 455, 85); 
	m_wndByServPrice.Create(this, _T("By Serv Price"), 5, 95, 100, 120);
	m_wndNotApproved.Create(this, _T("Chưa cấp phát"), 105, 95, 225, 120);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 270, 95, 380, 120);
	m_wndExport.Create(this, _T("&Export"), 385, 95, 460, 120);

}
void CFMExportSheetList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

}
void CFMExportSheetList::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CFMExportSheetList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Check(pDX, m_wndByServPrice.GetDlgCtrlID(), m_nByServPrice);
	DDX_Check(pDX, m_wndNotApproved.GetDlgCtrlID(), m_bNotApproved);
}
void CFMExportSheetList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMExportSheetList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMExportSheetList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_nByServPrice = 0;
}
int CFMExportSheetList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
/*void CFMExportSheetList::OnFromDateChange(){
	
} */
/*void CFMExportSheetList::OnFromDateSetfocus(){
	
} */
/*void CFMExportSheetList::OnFromDateKillfocus(){
	
} */
int CFMExportSheetList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMExportSheetList::OnToDateChange(){
	
} */
/*void CFMExportSheetList::OnToDateSetfocus(){
	
} */
/*void CFMExportSheetList::OnToDateKillfocus(){
	
} */
int CFMExportSheetList::OnToDateCheckValue(){
	return 0;
} 
void CFMExportSheetList::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMExportSheetList::OnStockSelendok(){
	 
}
/*void CFMExportSheetList::OnStockSetfocus(){
	
}*/
/*void CFMExportSheetList::OnStockKillfocus(){
	
}*/

long CFMExportSheetList::OnStockLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}

long CFMExportSheetList::OnStatusLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);
	return 3;
}

/*void CFMExportSheetList::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMExportSheetList::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szSysDate, szPrice, szRptName, szStock, szNewType, szOldType;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryString();
	int nIdx = 0;
	double nAmount = 0, nTotal = 0;
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	szRptName.Format(_T("Reports/HMS/PM_BANGKEPHIEUXUAT.RPT"));
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
	CReportSection *rptDetail;
	szPrice = _T("vatamount");
	if (m_nByServPrice)
		szPrice = _T("servamount");
	while (!rs.IsEOF()){
		rs.GetValue(_T("ptype"), szNewType);
		if (!szNewType.IsEmpty() && szNewType != szOldType)
		{
			if (nTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%.2lf"), nTotal);
				rptDetail->SetValue(_T("s7"), tmpStr);
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
		rs.GetValue(_T("orderid"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("expdate"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		tmpStr.Empty();
		rs.GetValue(_T("patname"), tmpStr);
		if (!tmpStr.IsEmpty())
			tmpStr += _T(" Tu\x1ED5i");
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("id"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("doctype"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(szPrice, nAmount);
		nTotal += nAmount;
		rptDetail->SetValue(_T("7"), double2str(nAmount));
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%.2lf"), nTotal);
		rptDetail->SetValue(_T("s7"), tmpStr);
	}
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CFMExportSheetList::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrice, szStock, szNewType, szOldType;
	int nCol = 0, nRow = 0, nIdx = 0;
	double nAmount = 0, nTotal = 0;
	szSQL = GetQueryString();
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
	xls.SetColumnWidth(6, 10);
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
	arrCol.Add(_T("H\x1ECD v\xE0 t\xEAn"));
	arrCol.Add(_T("S\x1ED1 ti\x1EC1n"));
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
		rs.GetValue(_T("ptype"), szNewType);
		if (!szNewType.IsEmpty() && szNewType != szOldType)
		{
			if (nTotal > 0)
			{
				xls.SetCellText(nCol + 5, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
				tmpStr.Format(_T("%.2lf"), nTotal);
				xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
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
		rs.GetValue(_T("orderid"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);
		rs.GetValue(_T("expdate"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, CDate::Convert(tmpStr, yyyymmdd , ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("id"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);
		rs.GetValue(_T("doctype"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(szPrice, nAmount);
		nTotal += nAmount;
		xls.SetCellText(nCol + 6, nRow, double2str(nAmount), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		xls.SetCellText(nCol + 5, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		tmpStr.Format(_T("%.2lf"), nTotal);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang Ke Phieu Xuat.xls"));
	
} 
int CFMExportSheetList::OnAddPMSExportSheetList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMExportSheetList::OnEditPMSExportSheetList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMExportSheetList::OnDeletePMSExportSheetList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
int CFMExportSheetList::OnSavePMSExportSheetList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
int CFMExportSheetList::OnCancelPMSExportSheetList(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CFMExportSheetList::OnPMSExportSheetListListLoadData(){
	return 0;
}

CString CFMExportSheetList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szWhere1, szStock;
	szWhere.Empty();
	szWhere1.Empty();
	if (m_szStatusKey == _T("01"))
		szWhere.AppendFormat(_T(" AND fac_locked = 'Y' AND fac_invoicedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	else if (m_szStatusKey == _T("02"))
		szWhere.AppendFormat(_T(" AND fac_locked = 'Y' AND FAC_APPROVED = 'Y' AND fac_approveddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	else if (m_szStatusKey == _T("03"))
		szWhere.AppendFormat(_T(" AND fac_locked = 'Y' AND FAC_posted = 'Y' AND fac_posteddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	else
		szWhere.Format(_T("AND (hfe_createddate) BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.Format(_T("AND hpo_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
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
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStock);
		szWhere1.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStock);
	}
	if (m_bNotApproved)
		szWhere.AppendFormat(_T(" AND hpo_orderstatus <> 'A'"));
// 	szSQL.Format(_T(" SELECT orderid, ") \
// 				_T("        docno, ") \
// 				_T("        expdate, ") \
// 				_T("        doctype, ") \
// 				_T("        id, ") \
// 				_T("        patname, ") \
// 				_T("        SUM(vatamount)  AS vatamount, ") \
// 				_T("        SUM(servamount) AS servamount ") \
// 				_T(" FROM   (SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) AS orderid, ") \
// 				_T("                   hpo_docno                          AS docno, ") \
// 				_T("                   hfe_createddate                    AS expdate, ") \
// 				_T("                   Get_doctype(hpo_doctype)           AS doctype, ") \
// 				_T("                   CASE WHEN hpo_doctype = 'PPO' THEN Get_patientname(hpo_docno) ") \
// 				_T("                                                 ||'- ' ") \
// 				_T("                                                 ||Hms_getagebydoc(hpo_docno) ") \
// 				_T("                                                 ||N' Tu\x1ED5i' ") \
// 				_T("                   ELSE Cast('' AS NVARCHAR2(1)) ") \
// 				_T("                   END                                AS patname, ") \
// 				_T("                   CASE WHEN hpo_doctype = 'PPO' THEN hpo_docno ") \
// 				_T("                   ELSE 0 ") \
// 				_T("                   END                                AS id, ") \
// 				_T("                   hpol_qtyissue * product_taxprice   AS vatamount, ") \
// 				_T("                   hpol_qtyissue * hpol_unitprice     AS servamount ") \
// 				_T("         FROM      hms_pharmaorder ") \
// 				_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
// 				_T("         LEFT JOIN hms_fee_invoice ON ( hfe_docno = hpo_docno AND hfe_invoiceno = hpo_invoiceno ) ") \
// 				_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
// 				_T("         WHERE     hpo_ordertype = 'P' ") \
// 				_T("               AND hfe_refstatus = 'P' ") \
// 				_T("               AND hfe_status = 'P' %s)") \
// 				_T(" GROUP  BY orderid, ") \
// 				_T("           docno, ") \
// 				_T("           expdate, ") \
// 				_T("           doctype, ") \
// 				_T("           id, ") \
// 				_T("           patname") \
// 				_T(" ORDER BY expdate"), szWhere);

	szSQL.Format(_T(" SELECT ptype, ") \
	_T("        orderid, ") \
	_T("        docno, ") \
	_T("        expdate, ") \
	_T("        doctype, ") \
	_T("        id, ") \
	_T("        patname, ") \
	_T("        SUM(vatamount) AS vatamount, ") \
	_T("        SUM(servamount) AS servamount ") \
	_T(" FROM   (SELECT    1 AS ptype, ") \
	_T("                   Cast(hpo_orderid AS NVARCHAR2(15)) AS orderid, ") \
	_T("                   hpo_docno AS docno, ") \
	_T("                   hfe_createddate AS expdate, ") \
	_T("                   Get_doctype(hpo_doctype) AS doctype, ") \
	_T("                   CASE WHEN hpo_doctype = 'PPO' THEN Get_patientname(hpo_docno) ") \
	_T("                                                 ||'- ' ") \
	_T("                                                 ||Hms_getagebydoc(hpo_docno) ") \
	_T("                   ELSE Cast('' AS NVARCHAR2(1)) ") \
	_T("                   END AS patname, ") \
	_T("                   CASE WHEN hpo_doctype = 'PPO' THEN hpo_docno ") \
	_T("                   ELSE 0 ") \
	_T("                   END AS id, ") \
	_T("                   hpol_qtyissue * product_taxprice AS vatamount, ") \
	_T("                   hpol_qtyissue * hpol_unitprice AS servamount ") \
	_T("         FROM      hms_pharmaorder ") \
	_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
	_T("         LEFT JOIN hms_fee_invoice ON ( hfe_docno = hpo_docno AND hfe_invoiceno = hpo_invoiceno ) ") \
	_T("		 LEFT JOIN fa_cash ON (fac_cash_id = hfe_cash_id)") \
	_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
	_T("         WHERE     hpo_ordertype = 'P' AND hfe_refstatus = 'P' AND hfe_status = 'P' %s ") \
	_T("         UNION ALL ") \
	_T("         SELECT    2 AS ptype, ") \
	_T("                   Cast(hpo_orderid AS NVARCHAR2(15)) AS orderid, ") \
	_T("                   hpo_docno AS docno, ") \
	_T("                   Trunc(hpo_approveddate) AS expdate, ") \
	_T("                   Get_doctype(hpo_doctype) AS doctype, ") \
	_T("                   CASE WHEN hpo_doctype IN( 'DRO', 'RRO' ) THEN Get_patientname(hpo_docno) ") \
	_T("                                                            ||'- ' ") \
	_T("                                                            ||Hms_getagebydoc(hpo_docno) ") \
	_T("                   ELSE Cast('' AS NVARCHAR2(1)) ") \
	_T("                   END AS patname, ") \
	_T("                   CASE WHEN hpo_doctype IN( 'DRO', 'RRO' ) THEN hpo_docno ") \
	_T("                   ELSE 0 ") \
	_T("                   END AS id, ") \
	_T("                   SUM(hpol_qtyreturn * product_taxprice) AS vatamount, ") \
	_T("                   SUM(hpol_qtyreturn * hpol_unitprice) AS servamount ") \
	_T("         FROM      hms_pharmareturnorder ") \
	_T("         LEFT JOIN hms_pharmareturnorder_line ON ( hpo_orderid = hpol_orderid ) ") \
	_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
	_T("         WHERE     hpo_org_id = 'PM' AND hpo_doctype IN( 'DRO', 'RRO' ) AND hpo_status = 'A' %s ") \
	_T("         GROUP     BY hpo_orderid,hpo_docno,hpo_approveddate,hpo_doctype) ") \
	_T(" GROUP  BY ptype,orderid,docno,expdate,doctype,id,patname ") \
	_T(" ORDER  BY ptype,expdate "), szWhere, szWhere1);

	return szSQL;

}
BEGIN_MESSAGE_MAP(CFMExportSheetList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CFMExportSheetList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
