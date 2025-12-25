#include "stdafx.h"
#include "MADebtMaterialReport.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMADebtMaterialReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMADebtMaterialReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMADebtMaterialReport* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CMADebtMaterialReport *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CMADebtMaterialReport *)pWnd)->OnStorageAddNew();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CMADebtMaterialReport*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CMADebtMaterialReport*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMADebtMaterialReport*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CMADebtMaterialReport*)pWnd)->OnDepartmentDeleteItem();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CMADebtMaterialReport *pVw = (CMADebtMaterialReport *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMADebtMaterialReport *pVw = (CMADebtMaterialReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddMADebtMaterialReportFnc(CWnd *pWnd){
	 return ((CMADebtMaterialReport*)pWnd)->OnAddMADebtMaterialReport();
} 
static int _OnEditMADebtMaterialReportFnc(CWnd *pWnd){
	 return ((CMADebtMaterialReport*)pWnd)->OnEditMADebtMaterialReport();
} 
static int _OnDeleteMADebtMaterialReportFnc(CWnd *pWnd){
	 return ((CMADebtMaterialReport*)pWnd)->OnDeleteMADebtMaterialReport();
} 
static int _OnSaveMADebtMaterialReportFnc(CWnd *pWnd){
	 return ((CMADebtMaterialReport*)pWnd)->OnSaveMADebtMaterialReport();
} 
static int _OnCancelMADebtMaterialReportFnc(CWnd *pWnd){
	 return ((CMADebtMaterialReport*)pWnd)->OnCancelMADebtMaterialReport();
}
static int _OnDepartmentCheckAllFnc(CWnd *pWnd){
	((CMADebtMaterialReport*)pWnd)->OnDepartmentCheckAll();
	return 0;
}
static int _OnDepartmentUncheckAllFnc(CWnd *pWnd){
	((CMADebtMaterialReport*)pWnd)->OnDepartmentUncheckAll();
	return 0;
}
CMADebtMaterialReport::CMADebtMaterialReport(CWnd *pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CMADebtMaterialReport::~CMADebtMaterialReport(){
}
void CMADebtMaterialReport::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 1, 1, 431, 366);
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 25, 85, 50);
	m_wndFromDate.Create(this,90, 25, 210, 50); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 25, 300, 50);
	m_wndToDate.Create(this,305, 25, 425, 50); 
	m_wndStorageLabel.Create(this, _T("Storage"), 5, 55, 85, 80);
	m_wndStorage.Create(this,90, 55, 425, 80);
	m_wndDepartment.Create(this,5, 85, 425, 360);
	m_wndDepartment.SetCheckBox(TRUE);
	m_wndPreview.Create(this, _T("&Preview"), 220, 370, 320, 395);
	m_wndExport.Create(this, _T("&Export"), 325, 370, 425, 395);

}
void CMADebtMaterialReport::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);

}
void CMADebtMaterialReport::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartment.SetEvent(WE_DBLCLICK, _OnDepartmentDblClickFnc);
	m_wndDepartment.AddEvent(1, _T("Check All"), _OnDepartmentCheckAllFnc);
	m_wndDepartment.AddEvent(2, _T("UnCheck All"), _OnDepartmentUncheckAllFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	OnDepartmentLoadData();
	UpdateData(FALSE);

}
void CMADebtMaterialReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);

}
void CMADebtMaterialReport::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMADebtMaterialReport::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMADebtMaterialReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();

}
int CMADebtMaterialReport::SetMode(int nMode){
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
/*void CMADebtMaterialReport::OnFromDateChange(){
	
} */
/*void CMADebtMaterialReport::OnFromDateSetfocus(){
	
} */
/*void CMADebtMaterialReport::OnFromDateKillfocus(){
	
} */
int CMADebtMaterialReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CMADebtMaterialReport::OnToDateChange(){
	
} */
/*void CMADebtMaterialReport::OnToDateSetfocus(){
	
} */
/*void CMADebtMaterialReport::OnToDateKillfocus(){
	
} */
int CMADebtMaterialReport::OnToDateCheckValue(){
	return 0;
} 
void CMADebtMaterialReport::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMADebtMaterialReport::OnStorageSelendok(){
	 
}
/*void CMADebtMaterialReport::OnStorageSetfocus(){
	
}*/
/*void CMADebtMaterialReport::OnStorageKillfocus(){
	
}*/
long CMADebtMaterialReport::OnStorageLoadData(){
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CMADebtMaterialReport::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMADebtMaterialReport::OnDepartmentDblClick(){
	
} 
void CMADebtMaterialReport::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CMADebtMaterialReport::OnDepartmentDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CMADebtMaterialReport::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartment.BeginLoad(); 
	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type IN ('DT', 'KB', 'KD', 'XN') OR sd_id IN ('C10', 'C8') order by  sd_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartment.EndLoad(); 
	return nCount;
}
void CMADebtMaterialReport::OnPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	if (!rpt.Init(_T("Reports\\HMS\\MA_BAOCAOVATTUNOHANG.RPT")))
		return;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate, szOldOrder, szNewOrder;
	CReportSection* rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL, *rptFooter = NULL;
	int nIdx = 1;
	long double nAmount = 0, nAmount1 = 0, nAmount2 = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rptHeader->SetValue(_T("ReportDate"), tmpStr);

	tmpStr = _T("To\xE0n \x62\x1ED9");
	if (!m_szStorageKey.IsEmpty())
		rptHeader->SetValue(_T("StockName"), m_wndStorage.GetCurrent(1));
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);



	while (!rs.IsEOF())
	{
		rs.GetValue(_T("orderno"), szNewOrder);
		if (szOldOrder != szNewOrder)
		{
			if (nAmount > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%f"), nAmount);
				rptGroup->SetValue(_T("s1"), tmpStr);
				tmpStr.Format(_T("%f"), nAmount1);
				rptGroup->SetValue(_T("s2"), tmpStr);
				tmpStr.Format(_T("%f"), nAmount2);
				rptGroup->SetValue(_T("s3"), tmpStr);
				nAmount = 0;
				nAmount1 = 0;
				nAmount2 = 0;

			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewOrder);
			nIdx = 1;
			szOldOrder = szNewOrder;
		}

		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("c1")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("c2")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("c3")));
		rs.GetValue(_T("c4"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		nAmount += str2double(tmpStr);
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("c5")));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("c6")));
		rptDetail->SetValue(_T("8"), rs.GetValue(_T("c7")));
		rs.GetValue(_T("c8"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		nAmount1 += str2double(tmpStr);
		rptDetail->SetValue(_T("10"), rs.GetValue(_T("c9")));
		rptDetail->SetValue(_T("11"), rs.GetValue(_T("c10")));
		rptDetail->SetValue(_T("12"), rs.GetValue(_T("c11")));
		rs.GetValue(_T("c12"), tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		nAmount2 += str2double(tmpStr);
		rs.MoveNext();
	}
	if(nAmount > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%f"), nAmount);
		rptDetail->SetValue(_T("s1"), tmpStr);
		tmpStr.Format(_T("%f"), nAmount1);
		rptDetail->SetValue(_T("s2"), tmpStr);
		tmpStr.Format(_T("%f"), nAmount2);
		rptDetail->SetValue(_T("s3"), tmpStr);
	}
	rptFooter = rpt.GetReportFooter();
	szSysDate = pMF->GetSysDateTime();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szSysDate.Mid(11, 5),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rptFooter->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CMADebtMaterialReport::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOldOrder, szNewOrder;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow = 0, nCol = 0;	int nIdx = 1;
	long double nAmount = 0, nAmount1 = 0, nAmount2 = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 26);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 12);	xls.SetColumnWidth(5, 26);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 9);	xls.SetColumnWidth(8, 12);	xls.SetColumnWidth(9, 26);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 8);	xls.SetColumnWidth(12, 12);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	if (!m_szStorageKey.IsEmpty())
		{
			tmpStr.Format(_T("Kho: %s"), m_wndStorage.GetCurrent(1));
			xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_WRAPING, true, 11);
		}
	else
		xls.SetCellText(0, 4, _T("Kho: To\xE0n \x62\x1ED9"), FMT_TEXT | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O V\x1EACT T\x1AF N\x1EE2 H\xC0NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 5, _T("S\x1ED1 l\x1B0\x1EE3ng y\xEAu \x63\x1EA7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("VT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("\x110G"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 5, _T("S\x1ED1 l\x1B0\x1EE3ng th\x1EF1\x63 \x63\x1EA5p"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("VT th\x61y th\x1EBF"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 6, _T("\x110G"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 6, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 5, _T("VT \x63\xF2n n\x1EE3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 6, _T("VT n\x1EE3 h\xE0ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 6, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 6, _T("\x110G"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 6, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 3);	xls.SetMerge(1, 1, 0, 3);	xls.SetMerge(2, 2, 0, 12);	xls.SetMerge(3, 3, 0, 12);	xls.SetMerge(4, 4, 0, 12);	xls.SetMerge(5, 6, 0, 0);	xls.SetMerge(5, 5, 1, 4);	xls.SetMerge(5, 5, 5, 8);	xls.SetMerge(5, 5, 9, 12);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("orderno"), szNewOrder);
		if (szOldOrder != szNewOrder)
		{
			if (nAmount > 0)
			{
				xls.SetCellText(nCol+1, nRow, _T("Tổng cộng: "), FMT_TEXT, true);
				tmpStr.Format(_T("%f"), nAmount);
				xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1, true);
				tmpStr.Format(_T("%f"), nAmount1);
				xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1, true);
				tmpStr.Format(_T("%f"), nAmount2);
				xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1, true);
				nAmount = 0;
				nAmount1 = 0;
				nAmount2 = 0;
				nRow++;
			}

			xls.SetCellMergedColumns(nCol, nRow, 13);
			xls.SetCellText(nCol+0, nRow, szNewOrder, FMT_TEXT, true);
			nIdx = 1;
			szOldOrder = szNewOrder;			nRow++;		}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("c1"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("c2"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("c3"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("c4"), tmpStr);		nAmount += str2double(tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("c5"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("c6"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("c7"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("c8"), tmpStr);		nAmount1 += str2double(tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("c9"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("c10"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("c11"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("c12"), tmpStr);		nAmount2 += str2double(tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs.MoveNext();	}	if (nAmount > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("Tổng cộng: "), FMT_TEXT, true);
		tmpStr.Format(_T("%f"), nAmount);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nAmount1);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nAmount2);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1, true);
	}	EndWaitCursor();	xls.Save(_T("Exports\\BC Vat Tu No Hang.xls"));
} 
int CMADebtMaterialReport::OnAddMADebtMaterialReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMADebtMaterialReport::OnEditMADebtMaterialReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMADebtMaterialReport::OnDeleteMADebtMaterialReport(){
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
 		OnCancelMADebtMaterialReport();
 	}
	return 0;
}
int CMADebtMaterialReport::OnSaveMADebtMaterialReport(){
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
 		//OnMADebtMaterialReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMADebtMaterialReport::OnCancelMADebtMaterialReport(){
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
int CMADebtMaterialReport::OnMADebtMaterialReportListLoadData(){
	return 0;
}
CString CMADebtMaterialReport::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL, szWhere, szDepts;
	szWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if(!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T("AND mt_storage_id = '%s' "), m_szStorageKey);
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
			{
				szDepts += _T(", ");
			}
			szDepts.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND mt_department_to_id IN (%s)"), szDepts);
	}
	szSQL.Format(_T(" SELECT") \
		_T(" ordernoBS orderno,") \
		_T(" pdnameBS c1,") \
		_T(" qtyorderBS c2,") \
		_T(" unitpriceBS c3,") \
		_T(" totalamountBS c4,") \
		_T(" pdnameTC c5,") \
		_T(" qtyorderTC c6,") \
		_T(" unitpriceTC c7,") \
		_T(" totalamountTC c8,") \
		_T(" pdnameNH c9,") \
		_T(" qtyorderNH c10,") \
		_T(" unitpriceNH c11,") \
		_T(" totalamountNH c12") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" mt_orderno AS ordernoBS,") \
		_T(" product_name AS pdnameBS,") \
		_T(" mtl_qtyorder AS qtyorderBS,") \
		_T(" mtl_saleprice AS unitpriceBS,") \
		_T(" mtl_ttlamount AS totalamountBS,") \
		_T(" mtl_transactionline_id AS idBS,") \
		_T(" product_id AS pdidBS") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mt_transaction_id = mtl_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(mtl_product_item_id = product_item_id)") \
		_T(" WHERE mt_status        = 'A' %s") \
		_T(" AND NVL(mtl_client_id, 'X')  <> 'REP'") \
		_T(" AND mtl_status IN('N', 'R')") \
		_T(" ) tbl") \
		_T(" LEFT JOIN") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" ordernoTC,") \
		_T(" pdnameTC,") \
		_T(" qtyorderTC,") \
		_T(" unitpriceTC,") \
		_T(" totalamountTC,") \
		_T(" idTC") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT mt_orderno       AS ordernoTC,") \
		_T(" product_name            AS pdnameTC,") \
		_T(" mtlr_qtyorder           AS qtyorderTC,") \
		_T(" mtl_saleprice           AS unitpriceTC,") \
		_T(" mtl_ttlamount           AS totalamountTC,") \
		_T(" mtlr_transactionline_id AS idTC") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline_ref") \
		_T(" ON(mt_transaction_id = mtlr_transaction_id)") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mtl_transactionline_id = mtlr_reftransactionline_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(mtlr_refproduct_item_id = product_item_id)") \
		_T(" WHERE mt_status            = 'A' %s") \
		_T(" AND mtl_client_id   = 'REP'") \
		_T(" AND mtl_status      = 'Y'") \
		_T(" UNION ALL") \
		_T(" SELECT mt_orderno       AS ordernoTC,") \
		_T(" product_name            AS pdnameTC,") \
		_T(" mtl_qtydelivery         AS qtyorderTC,") \
		_T(" mtl_saleprice           AS unitpriceTC,") \
		_T(" mtl_qtydelivery * mtl_saleprice              AS totalamountTC,") \
		_T(" mtl_transactionline_id  AS idTC") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mt_transaction_id = mtl_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(mtl_product_item_id = product_item_id)") \
		_T(" WHERE mt_status            = 'A'") \
		_T(" AND mtl_status      = 'R'") \
		_T(" AND  mtl_qtydelivery > 0 %s") \
		_T(" )) tbl1 ON(ordernoTC = ordernoBS AND  idTC = idBS) ") \
		_T(" LEFT JOIN") \
		_T(" (SELECT ") \
		_T(" mt_orderno AS ordernoNH,") \
		_T(" product_name AS pdnameNH,") \
		_T(" mtd_qtydebit AS qtyorderNH,") \
		_T(" product_saleprice2 AS unitpriceNH,") \
		_T(" product_saleprice2 * mtd_qtydebit AS totalamountNH,") \
		_T(" mtd_product_id pdidNH") \
		_T(" FROM m_transaction idNH") \
		_T(" LEFT JOIN m_transaction_debit") \
		_T(" ON(mt_transaction_id = mtd_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(mtd_product_item_id = product_item_id)") \
		_T(" WHERE mt_status        = 'A' %s") \
		_T(" ) tbl2 ON(ordernoBS = ordernoNH AND pdidNH = pdidBS)") \
		_T(" ORDER BY ordernoBS, pdnameBS, pdnameTC, pdnameNH"), szWhere, szWhere, szWhere, szWhere);
	return szSQL;
}
void CMADebtMaterialReport::OnDepartmentCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (!m_wndDepartment.GetCheck(i))
		{
			m_wndDepartment.SetCheck(i, TRUE);
		}
	}
	return;
}

void CMADebtMaterialReport::OnDepartmentUncheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			m_wndDepartment.SetCheck(i, FALSE);
		}
	}
	return;
}
