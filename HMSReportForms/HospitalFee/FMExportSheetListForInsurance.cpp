#include "stdafx.h"
#include "FMExportSheetListForInsurance.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "SearchPopup.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMExportSheetListForInsurance *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMExportSheetListForInsurance *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMExportSheetListForInsurance* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CFMExportSheetListForInsurance *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CFMExportSheetListForInsurance *)pWnd)->OnStockAddNew();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMExportSheetListForInsurance *)pWnd)->OnTypeLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMExportSheetListForInsurance *pVw = (CFMExportSheetListForInsurance *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMExportSheetListForInsurance *pVw = (CFMExportSheetListForInsurance *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListForInsurance*)pWnd)->OnAddPMSExportSheetListForInsurance();
} 
static int _OnEditPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListForInsurance*)pWnd)->OnEditPMSExportSheetListForInsurance();
} 
static int _OnDeletePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListForInsurance*)pWnd)->OnDeletePMSExportSheetListForInsurance();
} 
static int _OnSavePMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListForInsurance*)pWnd)->OnSavePMSExportSheetListForInsurance();
} 
static int _OnCancelPMSExportSheetListForInsuranceFnc(CWnd *pWnd){
	 return ((CFMExportSheetListForInsurance*)pWnd)->OnCancelPMSExportSheetListForInsurance();
}
static int _OnStockSearchItemFnc(CWnd *pWnd){
	 ((CFMExportSheetListForInsurance*)pWnd)->OnStockSearchItem();
	 return 0;
} 

CFMExportSheetListForInsurance::CFMExportSheetListForInsurance(CWnd *pParent)
{
	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMExportSheetListForInsurance::~CFMExportSheetListForInsurance()
{
}
void CFMExportSheetListForInsurance::OnCreateComponents()
{
	m_wndExportSheetListForInsurance.Create(this, _T("Export Sheet List"), 5, 5, 482, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 244, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 249, 30, 329, 55);
	m_wndToDate.Create(this,334, 30, 478, 55); 
	m_wndStock.Create(this,5, 96, 482, 425); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 90, 85);
	m_wndType.Create(this,95, 60, 478, 85); 
	m_wndExport.Create(this, _T("&ExportXLS"), 406, 431, 481, 456);
	m_wndStock.SetCheckBox(true);
	m_wndType.EnableWindow(false);
}
void CFMExportSheetListForInsurance::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);

}
void CFMExportSheetListForInsurance::OnSetWindowEvents(){
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
	m_wndStock.AddEvent(1, _T("Search"), _OnStockSearchItemFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	OnStockLoadData();
	UpdateData(false);

}
void CFMExportSheetListForInsurance::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	//DDX_Check(pDX, m_wndByServPrice.GetDlgCtrlID(), m_nByServPrice);
}
void CFMExportSheetListForInsurance::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMExportSheetListForInsurance::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CFMExportSheetListForInsurance::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_nByServPrice = 0;
}
int CFMExportSheetListForInsurance::SetMode(int nMode){
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
/*void CFMExportSheetListForInsurance::OnFromDateChange(){
	
} */
/*void CFMExportSheetListForInsurance::OnFromDateSetfocus(){
	
} */
/*void CFMExportSheetListForInsurance::OnFromDateKillfocus(){
	
} */
int CFMExportSheetListForInsurance::OnFromDateCheckValue()
{
	return 0;
} 
/*void CFMExportSheetListForInsurance::OnToDateChange(){
	
} */
/*void CFMExportSheetListForInsurance::OnToDateSetfocus(){
	
} */
/*void CFMExportSheetListForInsurance::OnToDateKillfocus(){
	
} */
int CFMExportSheetListForInsurance::OnToDateCheckValue(){
	return 0;
} 
void CFMExportSheetListForInsurance::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFMExportSheetListForInsurance::OnStockSelendok(){
	 
}
/*void CFMExportSheetListForInsurance::OnStockSetfocus(){
	
}*/
/*void CFMExportSheetListForInsurance::OnStockKillfocus(){
	
}*/

long CFMExportSheetListForInsurance::OnStockLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndStock.BeginLoad(); 
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_org_id as orgid, msl_name as name FROM m_storagelist WHERE (msl_org_id IN ('MA') OR msl_type='C') %s ORDER BY msl_storage_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndStock.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndStock.EndLoad(); 
	return nCount;

}
/*void CFMExportSheetListForInsurance::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long CFMExportSheetListForInsurance::OnTypeLoadData(){
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
void CFMExportSheetListForInsurance::OnPrintPreviewSelect()
{
	return;
} 
void CFMExportSheetListForInsurance::OnExportSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp, szWhere, szOldDept, szNewDept;
	CString tmpStr, m_szFacList, szDeptID;
	CString  m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;	
	CString szType, szTypeName, szStorages;		
	int m_nCountList=0;

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	CellFormat df(&xls), cf(&xls), hf(&xls);
	if (!xls.Load(_T("Exports\\Template\\MA_BANGKEPHIEUXUAT_TRANGBI.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), m_wndStock.GetItemText(i, 1));
		}
	}

	if (!szStorages.IsEmpty())
	{
		TranslateString(_T("From Stock"), tmpStr);
		xls.SetCellMergedColumns(0, 4, 11);
		xls.SetCellText(0, 4, tmpStr + _T(":") + szStorages);
	}
	
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("sophieuxuat"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("ngayxuat"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mathuoc"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenthuoc"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoatchat"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("donvi"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("giatri"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diengiai"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		
			
		nRow++;
		rs.MoveNext();
	}
	
	if (nGroupTotal[10] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 9; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[10] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 9; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}


	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\MA_BANGKEPHIEUXUAT_TRANGBI2.xls"));
	
} 
int CFMExportSheetListForInsurance::OnAddPMSExportSheetListForInsurance(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMExportSheetListForInsurance::OnEditPMSExportSheetListForInsurance(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMExportSheetListForInsurance::OnDeletePMSExportSheetListForInsurance(){
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
int CFMExportSheetListForInsurance::OnSavePMSExportSheetListForInsurance(){
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
int CFMExportSheetListForInsurance::OnCancelPMSExportSheetListForInsurance(){
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
int CFMExportSheetListForInsurance::OnPMSExportSheetListForInsuranceListLoadData(){
	return 0;
}

CString CFMExportSheetListForInsurance::GetQueryString()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere0, szWhere1, szWhere2, szPrice, szStorages;
	szWhere0.Format(_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere2.Format(_T(" AND so_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), m_wndStock.GetItemText(i, 0));
		}
	}

	if (!szStorages.IsEmpty())
	{
		szWhere0.AppendFormat(_T(" and hpo_storage_id IN(%s) "), szStorages);
		szWhere1.AppendFormat(_T(" and mt_storage_id IN(%s) "), szStorages);
		szWhere2.AppendFormat(_T(" and so_storage_id IN(%s) "), szStorages);
	}	
	
	szSQL.Format(_T(" SELECT order_no as sophieuxuat,") \
						_T(" to_char(export_date,'DD/MM/YYYY') as ngayxuat,") \
						_T(" docno as sohoso,") \
						_T(" GET_PATIENTNAME(docno) as tenbenhnhan,") \
						_T(" mathuoc as mathuoc,") \
						_T(" tenthuoc as tenthuoc,") \
						_T(" hoatchat as hoatchat,") \
						_T(" donvi as donvi,") \
						_T(" soluong as soluong,") \
						_T(" amount as giatri,") \
						_T(" deptid as khoa,") \
						_T(" order_type as diengiai") \
						_T(" FROM") \
						_T("   (SELECT CAST(hpo_orderid AS NVARCHAR2(15))                 AS order_no,") \
						_T("     CAST(0 AS NVARCHAR2(15))                                 AS document_no,") \
						_T("     trunc_date(hpo_approvedate)                              AS export_date,") \
						_T("     Get_patientname(hpo_docno)                               AS receiver,") \
						_T("     hpo_docno                                                AS docno,") \
						_T("     Get_doctype(hpo_doctype)                                 AS order_type,") \
						_T("     SUM(hpol_qtyissue * hpol_unitprice)                      AS amount,") \
						_T("     SUM(hpol_qtyissue * (hpol_unitprice - product_vatprice)) AS realprofit,") \
						_T("     hpo_deptid                                               AS deptid,") \
						_T("     TO_CHAR(i.HFE_ADMITDATE, 'DD/MM/YYYY')                   AS ngayvao,") \
						_T("     TO_CHAR(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY')               AS ngayra,") \
						_T("     TO_CHAR(i.HFE_DATE, 'DD/MM/YYYY')                        AS ngaytt,") \
						_T("     PRODUCT_code AS mathuoc,") \
						_T("     PRODUCT_NAME as tenthuoc,") \
						_T("     product_classname as hoatchat,") \
						_T("     product_uomname as donvi,") \
						_T("     SUM(hpol_qtyissue) as soluong  ") \
						_T("   FROM hms_pharmaorder") \
						_T("   LEFT JOIN hms_pharmaorderline") \
						_T("   ON ( hpo_orderid = hpol_orderid )") \
						_T("   LEFT JOIN m_productitem_view3") \
						_T("   ON (product_item_id = hpol_product_item_id)") \
						_T("   LEFT JOIN hms_fee f") \
						_T("   ON (hpo_docno       = f.hfe_docno") \
						_T("   AND hpo_orderid     = f.hfe_orderid") \
						_T("   AND f.HFE_ORDERLINE = HPOL_ORDERLINEID)") \
						_T("   LEFT JOIN hms_fee_invoice i") \
						_T("   ON (f.hfe_docno       = i.hfe_docno") \
						_T("   AND f.hfe_invoiceno   = i.hfe_invoiceno)") \
						_T("   WHERE hpo_orderstatus = 'A' %s") \
						_T("   GROUP BY hpo_orderid,") \
						_T("     hpo_approvedate,") \
						_T("     hpo_docno,") \
						_T("     hpo_doctype,") \
						_T("     hpo_deptid,") \
						_T("     i.HFE_ADMITDATE,") \
						_T("     i.HFE_DISCHARGEDATE,") \
						_T("     i.HFE_DATE,") \
						_T("     PRODUCT_code, PRODUCT_NAME, product_classname, product_uomname") \
						_T("   UNION ALL") \
						_T(" SELECT mt_orderno AS order_no,") \
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
						_T("           ELSE CAST(N'Dự trù thuốc, VTTH' AS NVARCHAR2(128))") \
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
						_T("     mt_department_to_id,") \
						_T("     NULL,") \
						_T("     NULL,") \
						_T("     NULL,") \
						_T("     PRODUCT_code AS mathuoc,") \
						_T("     PRODUCT_NAME as tenthuoc,") \
						_T("     product_classname as hoatchat,") \
						_T("     product_uomname as donvi,") \
						_T("     SUM(mtl_qtydelivery) as soluong  ") \
						_T("   FROM m_transaction") \
						_T("   LEFT JOIN m_transactionline") \
						_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
						_T("   LEFT JOIN m_productitem_view3") \
						_T("   ON (product_item_id = mtl_product_item_id)") \
						_T("   LEFT JOIN m_storagelist") \
						_T("   ON ( msl_storage_id = mt_storage_to_id )") \
						_T("   WHERE mt_status     = 'A' %s ") \
						_T("   AND mt_doctype NOT IN ('DRO', 'CON', 'PRO', 'MRO')") \
						_T("   GROUP BY mt_orderno,") \
						_T("     mt_documentno,") \
						_T("     mt_approveddate,") \
						_T("     mt_doctype,") \
						_T("     mt_department_to_id,") \
						_T("     mt_storage_id,") \
						_T("     mt_storage_to_id,") \
						_T("     mt_partner_id,") \
						_T("     mt_ordertype,") \
						_T("     msl_category,") \
						_T("     PRODUCT_CODE, PRODUCT_NAME, product_classname, product_uomname  ") \
						_T("   UNION ALL") \
						_T(" SELECT po_orderno AS order_no,") \
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
						_T("     pol_docno,") \
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
						_T("     END AS deptid,") \
						_T("     NULL,") \
						_T("     NULL,") \
						_T("     NULL,") \
						_T("     PRODUCT_code AS mathuoc,") \
						_T("     PRODUCT_NAME as tenthuoc,") \
						_T("     product_classname as hoatchat,") \
						_T("     product_uomname as donvi,") \
						_T("     SUM(pol_qty) as soluong ") \
						_T("   FROM purchase_orderline2") \
						_T("   LEFT JOIN m_transaction") \
						_T("   ON(mt_transaction_id = pol_transaction_id)") \
						_T("   LEFT JOIN PURCHASE_ORDER") \
						_T("   ON (PO_PURCHASE_ORDER_ID=MT_EXPENSE_ID)") \
						_T("   LEFT JOIN m_productitem_view3") \
						_T("   ON(pol_product_item_id=product_item_id)") \
						_T("   WHERE mt_status       = 'A' %s ") \
						_T("   AND mt_doctype       IN ('CON')") \
						_T("   GROUP BY po_orderno,") \
						_T("     mt_documentno,") \
						_T("     trunc_date(mt_approveddate),") \
						_T("     pol_docno,") \
						_T("     mt_doctype,") \
						_T("     mt_department_to_id,") \
						_T("     mt_storage_to_id,") \
						_T("     mt_partner_id,") \
						_T("     mt_ordertype,") \
						_T("     pol_unitprice,") \
						_T("     NULL,") \
						_T("     NULL,") \
						_T("     NULL,") \
						_T("     PRODUCT_CODE, PRODUCT_NAME, product_classname, product_uomname") \
						_T("   UNION ALL") \
						_T("  SELECT so_orderno AS orderno,") \
						_T("     so_documentno   AS documentno,") \
						_T("     trunc_date(so_approveddate),") \
						_T("     so_partnername,") \
						_T("     SO_DOCNO,") \
						_T("     get_doctype(so_doctype),") \
						_T("     SUM(sol_qtydelivery * sol_unitprice),") \
						_T("     SUM(sol_qtydelivery * (sol_unitprice - product_vatprice)),") \
						_T("     CAST('0' AS NVARCHAR2(1)),") \
						_T("     NULL,") \
						_T("     NULL,") \
						_T("     NULL,") \
						_T("     PRODUCT_code AS mathuoc,") \
						_T("     PRODUCT_NAME as tenthuoc,") \
						_T("     product_classname as hoatchat,") \
						_T("     product_uomname as donvi,") \
						_T("     SUM(sol_qtydelivery) as soluong ") \
						_T("   FROM sale_order") \
						_T("   LEFT JOIN sale_orderline") \
						_T("   ON (so_sale_order_id = sol_sale_order_id)") \
						_T("   LEFT JOIN m_productitem_view3") \
						_T("   ON ( product_item_id = sol_product_item_id)") \
						_T("   WHERE so_status      = 'A' %s ") \
						_T("   GROUP BY so_orderno,") \
						_T("     so_documentno,") \
						_T("     so_approveddate,") \
						_T("     so_partnername,") \
						_T("     so_doctype,") \
						_T("     SO_DOCNO,") \
						_T("     PRODUCT_CODE, PRODUCT_NAME, product_classname, product_uomname") \
						_T("   )") \
						_T(" WHERE amount > 0") \
						_T(" ORDER BY sohoso"), szWhere0, szWhere1, szWhere1, szWhere2);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CFMExportSheetListForInsurance::GetQueryString1(){
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
		_T("     hpo_deptid AS deptid,") \

		_T(" to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
		_T("     to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
		_T("     to_char(i.HFE_DATE, 'DD/MM/YYYY') as ngaytt") \

		_T("   FROM hms_ipharmaorder") \
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON ( hpo_orderid = hpol_orderid )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON (product_item_id   = hpol_product_item_id)") \

		_T("  LEFT JOIN hms_fee f ON (hpo_docno = f.hfe_docno AND hpo_orderid = f.hfe_orderid AND f.HFE_ORDERLINE = HPOL_ORDERLINEID)") \
		_T("   LEFT JOIN hms_fee_invoice i ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno)") \


		_T("   WHERE hpo_orderstatus = 'A' %s") \
		_T("   GROUP BY hpo_orderid,") \
		_T("     hpo_approvedate,") \
		_T("     hpo_docno,") \
		_T("     hpo_deptid, i.HFE_ADMITDATE, i.HFE_DISCHARGEDATE,i.HFE_DATE") \
		_T("   UNION ALL") \
		_T(" SELECT    Cast(hpo_orderid AS NVARCHAR2(15)) AS order_no, ") \
		_T("	       Cast(0 AS NVARCHAR2(15)) AS document_no, ") \
		_T("           trunc_date(hpo_approvedate)                     AS export_date, ") \
		_T("           Get_patientname(hpo_docno)          AS receiver, ") \
		_T("           hpo_docno                           AS docno, ") \
		_T("           Get_doctype(hpo_doctype)            AS order_type, ") \
		_T("           SUM(hpol_qtyissue *  hpol_unitprice) AS amount, ") \
		_T("           SUM(hpol_qtyissue *  (hpol_unitprice - product_vatprice)), ") \
		_T("		   hpo_deptid AS deptid,")

		_T(" to_char(i.HFE_ADMITDATE, 'DD/MM/YYYY') as ngayvao,") \
		_T("     to_char(i.HFE_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,") \
		_T("     to_char(i.HFE_DATE, 'DD/MM/YYYY') as ngaytt") \
		


		_T(" FROM      hms_pharmaorder ") \
		_T(" LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = hpol_product_item_id)") \
		
		_T("  LEFT JOIN hms_fee f ON (hpo_docno = f.hfe_docno AND hpo_orderid = f.hfe_orderid AND f.HFE_ORDERLINE = HPOL_ORDERLINEID)") \
		_T("   LEFT JOIN hms_fee_invoice i ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno)") \
		

		_T(" WHERE     hpo_orderstatus = 'A' %s") \
		_T(" GROUP     BY hpo_orderid, ") \
		_T("              hpo_approvedate, ") \
		_T("              hpo_docno, ") \
		_T("              hpo_doctype, ") \
		_T("     hpo_deptid, i.HFE_ADMITDATE, i.HFE_DISCHARGEDATE,i.HFE_DATE") \
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
		_T("           mt_department_to_id, NULL, NULL, NULL ") \
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

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
BEGIN_MESSAGE_MAP(CFMExportSheetListForInsurance, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CFMExportSheetListForInsurance::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
void CFMExportSheetListForInsurance::OnStockSearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndStock);
	newPopup->ShowPopup(&m_wndStock);
}