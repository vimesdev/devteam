#include "stdafx.h"
#include "MAMaterialRunningLow.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialRunningLow *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialRunningLow *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAMaterialRunningLow* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialRunningLow *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnStorageAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAMaterialRunningLow* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialRunningLow *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CMAMaterialRunningLow *)pWnd)->OnSupplierAddNew();
}*/
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CMAMaterialRunningLow *pVw = (CMAMaterialRunningLow *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMAMaterialRunningLow *pVw = (CMAMaterialRunningLow *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddMAMaterialRunningLowFnc(CWnd *pWnd){
	 return ((CMAMaterialRunningLow*)pWnd)->OnAddMAMaterialRunningLow();
} 
static int _OnEditMAMaterialRunningLowFnc(CWnd *pWnd){
	 return ((CMAMaterialRunningLow*)pWnd)->OnEditMAMaterialRunningLow();
} 
static int _OnDeleteMAMaterialRunningLowFnc(CWnd *pWnd){
	 return ((CMAMaterialRunningLow*)pWnd)->OnDeleteMAMaterialRunningLow();
} 
static int _OnSaveMAMaterialRunningLowFnc(CWnd *pWnd){
	 return ((CMAMaterialRunningLow*)pWnd)->OnSaveMAMaterialRunningLow();
} 
static int _OnCancelMAMaterialRunningLowFnc(CWnd *pWnd){
	 return ((CMAMaterialRunningLow*)pWnd)->OnCancelMAMaterialRunningLow();
} 
CMAMaterialRunningLow::CMAMaterialRunningLow(CWnd *pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CMAMaterialRunningLow::~CMAMaterialRunningLow(){
}
void CMAMaterialRunningLow::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 1, 1, 431, 116);
 	m_wndFromDateLabel.Create(this, _T("From Date"),0,0,0,0);
 	m_wndFromDate.Create(this,0,0,0,0); 
	m_wndToDateLabel.Create(this, _T("To Date"), 5, 25, 85, 50);
	m_wndToDate.Create(this,90, 25, 425, 50); 
	m_wndStorageLabel.Create(this, _T("Storage"), 5, 55, 85, 80);
	m_wndStorage.Create(this,90, 55, 425, 80); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 5, 85, 85, 110);
	m_wndSupplier.Create(this,90, 85, 425, 110); 
	m_wndPreview.Create(this, _T("&Preview"), 220, 120, 320, 145);
	m_wndExport.Create(this, _T("&Export"), 325, 120, 425, 145);

}
void CMAMaterialRunningLow::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	//m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	//m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(35);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CMAMaterialRunningLow::OnSetWindowEvents(){
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
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	UpdateData(false);

}
void CMAMaterialRunningLow::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);

}
void CMAMaterialRunningLow::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMAMaterialRunningLow::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMAMaterialRunningLow::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szSupplierKey.Empty();

}
int CMAMaterialRunningLow::SetMode(int nMode){
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
/*void CMAMaterialRunningLow::OnFromDateChange(){
	
} */
/*void CMAMaterialRunningLow::OnFromDateSetfocus(){
	
} */
/*void CMAMaterialRunningLow::OnFromDateKillfocus(){
	
} */
int CMAMaterialRunningLow::OnFromDateCheckValue(){
	return 0;
} 
/*void CMAMaterialRunningLow::OnToDateChange(){
	
} */
/*void CMAMaterialRunningLow::OnToDateSetfocus(){
	
} */
/*void CMAMaterialRunningLow::OnToDateKillfocus(){
	
} */
int CMAMaterialRunningLow::OnToDateCheckValue(){
	return 0;
} 
void CMAMaterialRunningLow::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAMaterialRunningLow::OnStorageSelendok(){
	 
}
/*void CMAMaterialRunningLow::OnStorageSetfocus(){
	
}*/
/*void CMAMaterialRunningLow::OnStorageKillfocus(){
	
}*/
long CMAMaterialRunningLow::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
}
/*void CMAMaterialRunningLow::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAMaterialRunningLow::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAMaterialRunningLow::OnSupplierSelendok(){
	 
}
/*void CMAMaterialRunningLow::OnSupplierSetfocus(){
	
}*/
/*void CMAMaterialRunningLow::OnSupplierKillfocus(){
	
}*/
long CMAMaterialRunningLow::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
/*void CMAMaterialRunningLow::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAMaterialRunningLow::OnPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate, szField, szTemp, szStorages, szNewLine, szOldLine;
	long double nAmount = 0, nTotalAmount = 0;
	if (!rpt.Init(_T("Reports/HMS/MA_BAOCAOVATTUSAPHET.RPT")))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
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
		tmpStr.Format(_T("%s"), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
		rptHeader->SetValue(_T("ReportDate"), tmpStr);

		if (!m_szStorageKey.IsEmpty())
			rptHeader->SetValue(_T("StockName"), m_wndStorage.GetCurrent(1));
		else
			rptHeader->SetValue(_T("StockName"), _T("To\xE0n \x62\x1ED9"));
	}

	while(!rs.IsEOF()){
		rs.GetValue(_T("partnername"), szNewLine);
		if(szNewLine != szOldLine)
		{
// 			if(nAmount > 0)
// 			{
// 				tmpStr.Format(_T("%f"), nAmount);
// 				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(0));
// 				rptGroup->SetValue(_T("s9"), tmpStr);
// 				nTotalAmount += nAmount;
// 				nAmount = 0;
// 			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewLine);
			szOldLine = szNewLine;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("pdcode")));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("pdname")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("pdunit")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("onhand")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("minqty")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("needqty")));
		}
		rs.MoveNext();
	}
// 	if (nAmount > 0)
// 	{
// 		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
// 		rptDetail->SetValue(_T("s9"), double2str(nAmount));
// 		nTotalAmount += nAmount;
// 	}
// 	if (nTotalAmount > 0)
// 	{
// 		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
// 		rptDetail->SetValue(_T("s9"), double2str(nTotalAmount));
// 	}	
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CMAMaterialRunningLow::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	CString szNewLine, szOldLine;
	long double nAmount = 0, nTotalAmount = 0;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	double nTmp = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 40);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 10);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT, true, 10);
	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O V\x1EACT T\x1AF T\x1ED2N S\x1EAEP H\x1EBET"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	tmpStr.Format(_T("\x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);

	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("M\xE3 h\xE0ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("T\xEAn VT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("\x110V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("S\x1ED1 l\x1B0\x1EE3ng t\x1ED3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("S\x1ED1 l\x1B0\x1EE3ng t\x1ED1i thi\x1EC3u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("S\x1ED1 l\x1B0\x1EE3ng \x63\x1EA7n mu\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 1);
	xls.SetMerge(1, 1, 0, 1);
	xls.SetMerge(2, 2, 0, 6);
	xls.SetMerge(3, 3, 0, 6);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	nRow = 5;
	nCol = 0;

	while(!rs.IsEOF()){
		rs.GetValue(_T("partnername"), szNewLine);
		if(szNewLine != szOldLine)
		{
// 			if(nAmount > 0)
// 			{
// 				xls.SetCellMergedColumns(nCol, nRow, 7);
// 				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
// 				tmpStr.Format(_T("%f"), nAmount);
// 				xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);
// 				nTotalAmount += nAmount;
// 				nAmount = 0;
// 				nRow++;
// 			}
			xls.SetCellMergedColumns(nCol, nRow, 8);
			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT | FMT_CENTER, true);
			szOldLine = szNewLine;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_TEXT);
		rs.GetValue(_T("pdcode"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pdname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pdunit"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("onhand"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("minqty"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("needqty"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
// 	if (nAmount > 0)
// 	{
// 		xls.SetCellMergedColumns(nCol, nRow, 7);
// 		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
// 		tmpStr.Format(_T("%f"), nAmount);
// 		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);
// 		nTotalAmount += nAmount;
// 		nRow++;
// 	}
// 	if (nTotalAmount > 0)
// 	{
// 		xls.SetCellMergedColumns(nCol, nRow, 7);
// 		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\xE1\x63 \x63\xF4ng ty"), FMT_TEXT, true);
// 		tmpStr.Format(_T("%f"), nTotalAmount);
// 		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);
// 	}
	EndWaitCursor();
	xls.Save(_T("Exports\\baocaovattutonsaphet.xls"));
} 
int CMAMaterialRunningLow::OnAddMAMaterialRunningLow(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMAMaterialRunningLow::OnEditMAMaterialRunningLow(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMAMaterialRunningLow::OnDeleteMAMaterialRunningLow(){
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
 		OnCancelMAMaterialRunningLow();
 	}
	return 0;
}
int CMAMaterialRunningLow::OnSaveMAMaterialRunningLow(){
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
 		//OnMAMaterialRunningLowListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMAMaterialRunningLow::OnCancelMAMaterialRunningLow(){
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
int CMAMaterialRunningLow::OnMAMaterialRunningLowListLoadData(){
	return 0;
}
CString CMAMaterialRunningLow::GetQueryString(){
	CString szSQL, szWhere, szWhere2;

	if(!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND storage_id IN(%s)"), m_szStorageKey);
	if (!m_szSupplierKey.IsEmpty())
		szWhere2.AppendFormat(_T(" AND product_bpartnerid = '%s'"), m_szSupplierKey);

	szSQL.Format(_T(" SELECT get_partnername(product_bpartnerid) AS partnername,") \
		_T(" id AS pdcode,") \
		_T(" name AS pdname,") \
		_T(" unit AS pdunit,") \
		_T(" instockqty AS onhand,") \
		_T(" minqty,") \
		_T(" minqty - instockqty AS needqty") \
		_T(" FROM") \
		_T(" (SELECT") \
		_T(" product_bpartnerid,") \
		_T(" storage_id,") \
		_T(" product_code    AS id,") \
		_T(" product_name    AS name,") \
		_T(" product_uomname AS unit,") \
		_T(" SUM(period_qty)                  AS instockqty,") \
		_T(" mpm_qty AS minqty") \
		_T(" FROM") \
		_T(" (SELECT storage_id,") \
		_T(" item_id,") \
		_T(" COALESCE(imp_qty-exp_qty, 0) period_qty") \
		_T(" FROM") \
		_T(" (SELECT impstockid AS storage_id,") \
		_T(" impdate          AS io_date,") \
		_T(" sitemid item_id,") \
		_T(" impqty imp_qty,") \
		_T(" 0 AS exp_qty") \
		_T(" FROM miv") \
		_T(" UNION ALL") \
		_T(" SELECT expstockid, expdate, sitemid, 0, expqty FROM mev") \
		_T(" ) ptbl") \
		_T(" WHERE io_date     < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" ) instock") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(product_item_id=item_id)") \
		_T(" LEFT JOIN m_product_minqty") \
		_T(" ON(product_id            = mpm_product_id") \
		_T(" AND storage_id       = mpm_storage_id)") \
		_T(" WHERE item_id      >0") \
		_T(" AND product_org_id = 'MA' %s") \
		_T(" GROUP BY product_bpartnerid,") \
		_T(" storage_id,") \
		_T(" product_code,") \
		_T(" product_name,") \
		_T(" product_uomname,") \
		_T(" mpm_qty") \
		_T(" ) tbl") \
		_T(" WHERE minqty > 0 AND instockqty > 0 AND instockqty <= minqty") \
		_T(" ORDER BY product_bpartnerid, id, name"), m_szToDate, szWhere, szWhere2);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
