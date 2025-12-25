#include "stdafx.h"
#include "MAMaterialFinalAccount2.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialFinalAccount2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialFinalAccount2 *)pWnd)->OnToDateCheckValue();
} 
static long _OnStorageListLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialFinalAccount2*)pWnd)->OnStorageListLoadData();
} 
static void _OnStorageListDblClickFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2*)pWnd)->OnStorageListDblClick();
} 
static void _OnStorageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMAMaterialFinalAccount2*)pWnd)->OnStorageListSelectChange(nOldItem, nNewItem);
} 
static int _OnStorageListDeleteItemFnc(CWnd *pWnd){
	 return ((CMAMaterialFinalAccount2*)pWnd)->OnStorageListDeleteItem();
} 
static int _OnStorageListCheckAllFnc(CWnd *pWnd){
	 ((CMAMaterialFinalAccount2*)pWnd)->OnStorageListCheckAll();
	 return 0;
}
static int _OnStorageListUncheckAllFnc(CWnd *pWnd){
	 ((CMAMaterialFinalAccount2*)pWnd)->OnStorageListUncheckAll();
	 return 0;
} 
static int _OnDepartmentListCheckAllFnc(CWnd *pWnd){
	 ((CMAMaterialFinalAccount2*)pWnd)->OnDepartmentListCheckAll();
	 return 0;
} 
static int _OnDepartmentListUncheckAllFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2*)pWnd)->OnDepartmentListUncheckAll();
	return 0;
} 
static long _OnDepartmentListLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialFinalAccount2*)pWnd)->OnDepartmentListLoadData();
} 
static void _OnDepartmentListDblClickFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2*)pWnd)->OnDepartmentListDblClick();
} 
static void _OnDepartmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMAMaterialFinalAccount2*)pWnd)->OnDepartmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentListDeleteItemFnc(CWnd *pWnd){
	 return ((CMAMaterialFinalAccount2*)pWnd)->OnDepartmentListDeleteItem();
} 
static long _OnTypeListLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialFinalAccount2*)pWnd)->OnTypeListLoadData();
}
static void _OnTypeListDblClickFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2*)pWnd)->OnTypeListDblClick();
}
static int _OnTypeListCheckAllFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2*)pWnd)->OnTypeListCheckAll();
	return 0;
}
static int _OnTypeListUncheckAllFnc(CWnd *pWnd){
	((CMAMaterialFinalAccount2*)pWnd)->OnTypeListUncheckAll();
	return 0;
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMAMaterialFinalAccount2 *pVw = (CMAMaterialFinalAccount2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMAMaterialFinalAccount2 *pVw = (CMAMaterialFinalAccount2 *)pWnd;
	pVw->OnExportSelect();
} 
CMAMaterialFinalAccount2::CMAMaterialFinalAccount2(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMAMaterialFinalAccount2::~CMAMaterialFinalAccount2(){
}
void CMAMaterialFinalAccount2::OnCreateComponents(){
	m_wndMaterialFinalAccount.Create(this, _T("Material Final Account"), 5, 5, 575, 545);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 390, 550, 490, 575);
	m_wndExport.Create(this, _T("&Export"), 495, 550, 575, 575);
	m_wndStorageList.Create(this,10, 60, 290, 295); 
	m_wndStorageList.SetCheckBox(true);
	m_wndTypeList.Create(this,295, 60, 570, 295); 
	m_wndTypeList.SetCheckBox(true);
	m_wndDepartmentList.Create(this,10, 300, 570, 540); 
	m_wndDepartmentList.SetCheckBox(true);
	
	
}
void CMAMaterialFinalAccount2::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndStorageList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);

	m_wndTypeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndTypeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 190);
}

void CMAMaterialFinalAccount2::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorageList.SetEvent(WE_SELCHANGE, _OnStorageListSelectChangeFnc);
	m_wndStorageList.SetEvent(WE_LOADDATA, _OnStorageListLoadDataFnc);
	m_wndStorageList.SetEvent(WE_DBLCLICK, _OnStorageListDblClickFnc);
	m_wndStorageList.AddEvent(1, _T("Check All"), _OnStorageListCheckAllFnc);
	m_wndStorageList.AddEvent(2, _T("UnCheck All"), _OnStorageListUncheckAllFnc);
	m_wndDepartmentList.SetEvent(WE_SELCHANGE, _OnDepartmentListSelectChangeFnc);
	m_wndDepartmentList.SetEvent(WE_LOADDATA, _OnDepartmentListLoadDataFnc);
	m_wndDepartmentList.SetEvent(WE_DBLCLICK, _OnDepartmentListDblClickFnc);
	m_wndDepartmentList.AddEvent(1, _T("Check All"), _OnDepartmentListCheckAllFnc);
	m_wndDepartmentList.AddEvent(2, _T("UnCheck All"), _OnDepartmentListUncheckAllFnc);
	m_wndTypeList.SetEvent(WE_LOADDATA, _OnTypeListLoadDataFnc);
	m_wndTypeList.SetEvent(WE_DBLCLICK, _OnTypeListDblClickFnc);
	m_wndTypeList.AddEvent(1, _T("Check All"), _OnTypeListCheckAllFnc);
	m_wndTypeList.AddEvent(2, _T("Uncheck All"), _OnTypeListUncheckAllFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnStorageListLoadData();
	OnDepartmentListLoadData();
	OnTypeListLoadData();

}
void CMAMaterialFinalAccount2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CMAMaterialFinalAccount2::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}

int CMAMaterialFinalAccount2::SetMode(int nMode){
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

/*void CMAMaterialFinalAccount2::OnFromDateChange(){
	
} */
/*void CMAMaterialFinalAccount2::OnFromDateSetfocus(){
	
} */
/*void CMAMaterialFinalAccount2::OnFromDateKillfocus(){
	
} */
int CMAMaterialFinalAccount2::OnFromDateCheckValue(){
	return 0;
}
 
/*void CMAMaterialFinalAccount2::OnToDateChange(){
	
} */
/*void CMAMaterialFinalAccount2::OnToDateSetfocus(){
	
} */
/*void CMAMaterialFinalAccount2::OnToDateKillfocus(){
	
} */
int CMAMaterialFinalAccount2::OnToDateCheckValue(){
	return 0;
}
 
void CMAMaterialFinalAccount2::OnStorageListDblClick(){
	
} 
void CMAMaterialFinalAccount2::OnStorageListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	
} 
int CMAMaterialFinalAccount2::OnStorageListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	 return 0;
} 
long CMAMaterialFinalAccount2::OnStorageListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND msl_org_id = 'MA'"));
	return pMF->LoadStorageIntoListCtrl(&m_wndStorageList, szFilter);
}
void CMAMaterialFinalAccount2::OnDepartmentListDblClick(){
	
} 
void CMAMaterialFinalAccount2::OnDepartmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	
} 
int CMAMaterialFinalAccount2::OnDepartmentListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	 return 0;
} 
long CMAMaterialFinalAccount2::OnDepartmentListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where 1 = 1 order by  sd_name"));
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

void CMAMaterialFinalAccount2::OnTypeListDblClick(){
	
}
long CMAMaterialFinalAccount2::OnTypeListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTypeList.BeginLoad(); 
	m_wndTypeList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpt_product_type_id as id, mpt_name as name ") \
		_T("FROM m_product_type ") \
		_T("WHERE mpt_isactive='Y' AND mpt_org_id in('GL', '%s') ORDER BY mpt_product_type_id "), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndTypeList.EndLoad(); 
	return nCount;
	
}
void CMAMaterialFinalAccount2::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrintDate, szPos;
	int nIdx = 1;
	double nCost = 0;
	long double nTtlCost[14];
	CReport rpt;
	CReportSection *rptDetail = NULL;
	if (!rpt.Init(_T("Reports\\HMS\\MA_BANGTHANHQUYETTOANDUNGCUVTTH1.RPT")))
	{
		return;
	}
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 14; i++)
		nTtlCost[i] = 0;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			if (i > 0)
			{
				rs.GetValue(rs.GetFieldName(i), nCost);
				nTtlCost[i-1] += nCost;
			}
			rptDetail->SetValue(int2str(i+2), rs.GetValue(rs.GetFieldName(i)));
		}
		rs.MoveNext();
	}

		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
		for (int i = 0; i < 14;i++)
		{
			tmpStr.Format(_T("%f"), nTtlCost[i]);
			szPos.Format(_T("s%d"), i+3);
			rptDetail->SetValue(szPos, tmpStr);
		}

	szPrintDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szPrintDate.Mid(8, 2), szPrintDate.Mid(5, 2), szPrintDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}
 
void CMAMaterialFinalAccount2::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr, szNewType, szOldType;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0;
	long double nTotal[14];
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	for (int i = 0; i < 14; i++)
		nTotal[i] = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 15);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 15);
	xls.SetColumnWidth(8, 15);
	xls.SetColumnWidth(9, 15);
	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 15);
	xls.SetColumnWidth(14, 15);
	xls.SetColumnWidth(15, 15);
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 4);
	xls.SetCellText(nCol, nRow + 3, _T("\x42\x1EA2NG QUY\x1EBET TO\xC1N \x58U\x1EA4T KHO \x44\x1EE4NG \x43\x1EE4 V\xC0 V\x1EACT T\x1AF TI\xCAU H\x41O"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 4);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	CStringArray arrCol, arrDat;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("T\xCAN KHO\x41"));
	arrCol.Add(_T("\x42\x1ED8 \x110\x1ED8I"));
	arrCol.Add(_T("\x43H\xCDNH S\xC1\x43H"));
	arrCol.Add(_T("\x42H QU\xC2N H\x1AFU"));
	arrCol.Add(_T("\x42H KH\xC1\x43"));
	arrCol.Add(_T("\x44\x1ECA\x43H V\x1EE4"));
	arrCol.Add(_T("KH\xC1\x43"));
	arrCol.Add(_T("\x42H TR\x1EBA \x45M"));
	arrCol.Add(_T("\x42HYT Q\x110"));
	arrCol.Add(_T("\x42H TH\xC2N NH\xC2N"));
	arrCol.Add(_T("\x42\x1EA0N"));
	arrCol.Add(_T("T\x1ED4NG KINH PH\xCD \x110\xC3 S\x1EEC \x44\x1EE4NG"));
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(nCol + i, nRow + 5, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	nRow = 6;
	arrDat.Add(_T("c1"));
	arrDat.Add(_T("c2"));
	arrDat.Add(_T("c3"));
	arrDat.Add(_T("c4"));
	arrDat.Add(_T("c5"));
	arrDat.Add(_T("c6"));
	arrDat.Add(_T("c7"));
	arrDat.Add(_T("c8"));
	arrDat.Add(_T("c9"));
	arrDat.Add(_T("c10"));
	arrDat.Add(_T("c11"));
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("deptid")), FMT_TEXT);
		for (int i = 0; i < arrDat.GetCount(); i++)
		{
			xls.SetCellText(nCol+i+2, nRow, rs.GetValue(arrDat.GetAt(i)), FMT_NUMBER1);
			nTotal[i] += str2double(rs.GetValue(arrDat.GetAt(i)));
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER, true);
	for (int i = 0; i < 14; i ++)
	{
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol + i + 2, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BANG QUYET TOAN XUAT KHO DUNG CU VA VAT TU TIEU HAO.xls"));
}
 
CString CMAMaterialFinalAccount2::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szTransactionWhere, szTransactionWhere2;
	CString szStorageStr, szDepts, szTypes;
	for (int i = 0; i < m_wndStorageList.GetItemCount(); i++)
	{
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCurSel(i);
			if (!szStorageStr.IsEmpty())
				szStorageStr += _T(", ");
			szStorageStr.AppendFormat(_T("'%s'"), m_wndStorageList.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDepartmentList.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (m_wndTypeList.GetCheck(i))
		{
			m_wndTypeList.SetCurSel(i);
			if (!szTypes.IsEmpty())
				szTypes += _T(",");
			szTypes.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 0));
		}
	}
	
	szTransactionWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), 
							  m_szFromDate, m_szToDate);
	szTransactionWhere2.Format(_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
							  m_szFromDate, m_szToDate);
	
	if (!szStorageStr.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND mt_storage_id IN (%s)"), szStorageStr);
		szTransactionWhere2.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorageStr);
	}	
	if (!szDepts.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" and mt_department_to_id in(%s) "), szDepts);
		szTransactionWhere2.AppendFormat(_T(" and hpo_deptid in(%s) "), szDepts);
	}
	if (!szTypes.IsEmpty())
	{
		szTransactionWhere.AppendFormat(_T(" AND product_producttype IN (%s)"), szTypes);
		szTransactionWhere2.AppendFormat(_T(" AND product_producttype IN (%s) "), szTypes);
	}


	szSQL.Format(_T(" SELECT") \
		_T(" deptid,") \
		_T(" SUM(quan) AS c1,") \
		_T(" SUM(chinhsach) AS c2,") \
		_T(" SUM(BHYTquan) AS c3,") \
		_T(" SUM(BHYTkhac) AS c4,") \
		_T(" SUM(dichvu) AS c5,") \
		_T(" SUM(khac) AS c6,") \
		_T(" SUM(treemcothe) AS c7,") \
		_T(" SUM(BHYTquandoi) AS c8,") \
		_T(" SUM(BHYTthannhansiquan) AS c9,") \
		_T(" SUM(ban) AS c10,") \
		_T(" SUM(Total) AS c11") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" hpo_deptid AS deptid,") \
		_T(" CASE WHEN hpo_object_id IN(1, 13) THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS quan,") \
		_T(" CASE WHEN hpo_object_id = 3 THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS chinhsach,") \
		_T(" CASE WHEN hpo_object_id = 2 THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS BHYTquan,") \
		_T(" CASE WHEN hpo_object_id IN(4, 12) THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS BHYTkhac,") \
		_T(" CASE WHEN hpo_object_id = 7 THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS dichvu,") \
		_T(" 0 AS khac,") \
		_T(" CASE WHEN hpo_object_id = 9 THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS treemcothe,") \
		_T(" CASE WHEN hpo_object_id IN(10, 11) THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS BHYTquandoi,") \
		_T(" CASE WHEN hpo_object_id = 5 THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS BHYTthannhansiquan,") \
		_T(" CASE WHEN hpo_object_id = 8 THEN hpol_qtyissue * hpol_unitprice ELSE 0 END AS ban,") \
		_T(" hpol_qtyissue * hpol_unitprice AS Total") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON ( hpo_orderid = hpol_orderid )") \
		_T(" LEFT JOIN m_productitem_view ") \
		_T(" ON (product_item_id   = hpol_product_item_id)") \
		_T(" WHERE hpo_orderstatus = 'A' %s") \
		_T(" AND product_org_id = 'MA'")\
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" mt_department_to_id AS deptid,") \
		_T(" CASE WHEN hd_object IN(1, 13) THEN pol_unitprice * pol_qty ELSE 0 END AS quan,") \
		_T(" CASE WHEN hd_object = 3 THEN pol_unitprice * pol_qty ELSE 0 END AS chinhsach,") \
		_T(" CASE WHEN hd_object = 2 THEN pol_unitprice * pol_qty ELSE 0 END AS BHYTquan,") \
		_T(" CASE WHEN hd_object IN(4, 12) THEN pol_unitprice * pol_qty ELSE 0 END AS BHYTkhac,") \
		_T(" CASE WHEN hd_object = 7 THEN pol_unitprice * pol_qty ELSE 0 END AS dichvu,") \
		_T(" 0 AS khac,") \
		_T(" CASE WHEN hd_object = 9 THEN pol_unitprice * pol_qty ELSE 0 END AS treemcothe,") \
		_T(" CASE WHEN hd_object IN(10, 11) THEN pol_unitprice * pol_qty ELSE 0 END AS BHYTquandoi,") \
		_T(" CASE WHEN hd_object = 5 THEN pol_unitprice * pol_qty ELSE 0 END AS BHYTthannhansiquan,") \
		_T(" CASE WHEN hd_object = 8 THEN pol_unitprice * pol_qty ELSE 0 END AS ban,") \
		_T(" pol_unitprice * pol_qty AS Total") \
		_T(" FROM purchase_orderline2") \
		_T(" LEFT JOIN m_transaction") \
		_T(" ON(mt_transaction_id = pol_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (pol_product_item_id=product_item_id)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno = pol_docno)") \
		_T(" WHERE mt_status     = 'A'") \
		_T(" AND mt_doctype     IN ('CON') %s") \
		_T(" AND product_org_id = 'MA'")\
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" mt_department_to_id,") \
		_T(" mtl_qtysold * mtl_saleprice AS quan,") \
		_T(" mtl_qtypolicy * mtl_saleprice AS chinhsach,") \
		_T(" mtl_qtysoldins * mtl_saleprice AS BHYTquan,") \
		_T(" CASE WHEN mt_storage_id = 5 THEN (mtl_qtyother + mtl_qtyotherins) * mtl_saleprice ELSE mtl_qtyotherins * mtl_saleprice END AS BHYTkhac,") \
		_T(" CASE WHEN mt_storage_id = 15 THEN (mtl_qtyother + mtl_qtyservice) * mtl_saleprice ELSE mtl_qtyservice * mtl_saleprice END AS dichvu,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" CASE WHEN mt_storage_id = 6 THEN mtl_qtyother * mtl_saleprice ELSE 0 END AS ban,") \
		_T(" mtl_qtydelivery * mtl_saleprice AS Total") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (product_item_id = mtl_product_item_id)") \
		_T(" WHERE mt_status     = 'A'") \
		_T(" AND (mt_doctype IN ('DMO', 'DPO', 'DDO', 'CRO')") \
		_T(" OR (mt_doctype IN ('CSO')") \
		_T(" AND NVL(mtl_client_id, 'X') NOT IN ('REP','TT')") \
		_T(" AND mtl_qtydelivery - mtl_qtysold - mtl_qtypolicy - mtl_qtysoldins - mtl_qtyotherins -mtl_qtyservice - mtl_qtyother = 0)) %s") \
		_T(" AND product_org_id = 'MA'")\
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" mt_department_to_id,") \
		_T(" CASE WHEN mt_storage_id = '6' THEN mtl_qtydelivery * mtl_saleprice ELSE 0 END AS quan,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" CASE WHEN mt_storage_id = '5' THEN mtl_qtydelivery * mtl_saleprice ELSE 0 END AS BHYTkhac,") \
		_T(" CASE WHEN mt_storage_id = '15' THEN mtl_qtydelivery * mtl_saleprice ELSE 0 END AS dichvu,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" mtl_qtydelivery * mtl_saleprice AS Total") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (product_item_id = mtl_product_item_id)") \
		_T(" WHERE mt_status     = 'A'") \
		_T(" AND mt_doctype IN ('CSO')") \
		_T(" AND (NVL(mtl_client_id, 'X') IN ('REP')") \
		_T(" OR (mt_doctype IN ('CSO') AND NVL(mtl_client_id, 'X') NOT IN ('REP','TT')") \
		_T(" AND mtl_qtydelivery - mtl_qtysold - mtl_qtypolicy - mtl_qtysoldins - mtl_qtyotherins -mtl_qtyservice - mtl_qtyother <> 0)) %s") \
		_T(" AND product_org_id = 'MA'")\
		_T(" )") \
		_T(" GROUP BY deptid") \
		_T(" ORDER BY deptid"), szTransactionWhere2, szTransactionWhere, szTransactionWhere, szTransactionWhere);
		return szSQL;
}

void CMAMaterialFinalAccount2::OnStorageListCheckAll()
{
	for (int i = 0; i < m_wndStorageList.GetItemCount(); i++)
	{
		if (!m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCheck(i, TRUE);
		}
	}
	return;
}

void CMAMaterialFinalAccount2::OnStorageListUncheckAll()
{
	for (int i = 0; i < m_wndStorageList.GetItemCount(); i++)
	{
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCheck(i, FALSE);
		}
	}
	return;
}

void CMAMaterialFinalAccount2::OnDepartmentListCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (!m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCheck(i, TRUE);
		}
	}
	return;
}

void CMAMaterialFinalAccount2::OnDepartmentListUncheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCheck(i, FALSE);
		}
	}
	return;
}

void CMAMaterialFinalAccount2::OnTypeListCheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (!m_wndTypeList.GetCheck(i))
		{
			m_wndTypeList.SetCheck(i, TRUE);
		}
	}
	return;
}

void CMAMaterialFinalAccount2::OnTypeListUncheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (m_wndTypeList.GetCheck(i))
		{
			m_wndTypeList.SetCheck(i, FALSE);
		}
	}
	return;
}