#include "stdafx.h"
#include "PMSummaryImportExportInstockForB5StocksReportDialog.h"
#include "Excel.h"
#include "MainFrm.h"
#include ".\pmsummaryimportexportinstockforB5stocksreportdialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnOriginalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog* )pWnd)->OnOriginalSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOriginalSelendokFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnOriginalSelendok();
}
/*static void _OnOriginalSetfocusFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnOriginalKillfocus();
}*/
/*static void _OnOriginalKillfocusFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnOriginalKillfocus();
}*/
static long _OnOriginalLoadDataFnc(CWnd *pWnd){
	return ((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnOriginalLoadData();
}
/*static void _OnOriginalAddNewFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd)->OnOriginalAddNew();
}*/
static long _OnStockListLoadDataFnc(CWnd *pWnd){
	return ((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnStockListLoadData();
} 
static void _OnStockListDblClickFnc(CWnd *pWnd){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnStockListDblClick();
} 
static void _OnStockListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnStockListSelectChange(nOldItem, nNewItem);
} 
static int _OnStockListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnStockListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSSummaryImportExportInstockForB5StocksReportDialog *pVw = (CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportXLSSelectFnc(CWnd *pWnd){
	CPMSSummaryImportExportInstockForB5StocksReportDialog *pVw = (CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd;
	pVw->OnExportXLSSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSSummaryImportExportInstockForB5StocksReportDialog *pVw = (CPMSSummaryImportExportInstockForB5StocksReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSSummaryImportExportInstockForStocksReportDialogFnc(CWnd *pWnd){
	 return ((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnAddPMSSummaryImportExportInstockForStocksReportDialog();
} 
static int _OnEditPMSSummaryImportExportInstockForStocksReportDialogFnc(CWnd *pWnd){
	 return ((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnEditPMSSummaryImportExportInstockForStocksReportDialog();
} 
static int _OnDeletePMSSummaryImportExportInstockForStocksReportDialogFnc(CWnd *pWnd){
	 return ((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnDeletePMSSummaryImportExportInstockForStocksReportDialog();
} 
static int _OnSavePMSSummaryImportExportInstockForStocksReportDialogFnc(CWnd *pWnd){
	 return ((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnSavePMSSummaryImportExportInstockForStocksReportDialog();
} 
static int _OnCancelPMSSummaryImportExportInstockForStocksReportDialogFnc(CWnd *pWnd){
	 return ((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnCancelPMSSummaryImportExportInstockForStocksReportDialog();
}
static void _OnDadung_chuabosungSelectFnc(CWnd *pWnd){
	 ((CPMSSummaryImportExportInstockForB5StocksReportDialog*)pWnd)->OnDadung_chuabosungSelect();
}
CPMSSummaryImportExportInstockForB5StocksReportDialog::CPMSSummaryImportExportInstockForB5StocksReportDialog(CWnd *pParent)
{
	m_nDlgWidth = 585;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CPMSSummaryImportExportInstockForB5StocksReportDialog::~CPMSSummaryImportExportInstockForB5StocksReportDialog(){
}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 574, 550);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 285, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 290, 30, 370, 55);
	m_wndToDate.Create(this,375, 30, 570, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 90, 85);
	m_wndType.Create(this,95, 60, 570, 85); 
	m_wndOriginalLabel.Create(this, _T("Original"), 10, 90, 90, 115);
	m_wndOriginal.Create(this,95, 90, 570, 115); 
	m_wndStockList.Create(this,10, 120, 570, 545); 	
	m_wndExportXLS.Create(this, _T("Export XLS"), 495, 555, 575, 580);
	m_wndCheck.Create(this, _T("Sort by group"), 5, 555, 301, 580);
	m_wndDadung_chuabosung.Create(this, _T("Đã dùng chưa bổ sung"), 5, 586, 301, 611);
}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndOriginal.SetCheckValue(true);
	m_wndOriginal.LimitText(35);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndOriginal.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndOriginal.InsertColumn(1, _T("Description"), CFMT_TEXT, 125);


	m_wndStockList.InsertColumn(0, _T("Stock ID"), CFMT_NUMBER, 80);
	m_wndStockList.InsertColumn(1, _T("Stock Name"), CFMT_TEXT, 340);
	m_wndStockList.SetCheckBox(true);

}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndOriginal.SetEvent(WE_SELENDOK, _OnOriginalSelendokFnc);
	//m_wndOriginal.SetEvent(WE_SETFOCUS, _OnOriginalSetfocusFnc);
	//m_wndOriginal.SetEvent(WE_KILLFOCUS, _OnOriginalKillfocusFnc);
	m_wndOriginal.SetEvent(WE_SELCHANGE, _OnOriginalSelectChangeFnc);
	m_wndOriginal.SetEvent(WE_LOADDATA, _OnOriginalLoadDataFnc);
	//m_wndOriginal.SetEvent(WE_ADDNEW, _OnOriginalAddNewFnc);
	m_wndStockList.SetEvent(WE_SELCHANGE, _OnStockListSelectChangeFnc);
	m_wndStockList.SetEvent(WE_LOADDATA, _OnStockListLoadDataFnc);
	m_wndStockList.SetEvent(WE_DBLCLICK, _OnStockListDblClickFnc);
	m_wndStockList.AddEvent(1, _T("Delete"), _OnStockListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExportXLS.SetEvent(WE_CLICK, _OnExportXLSSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDadung_chuabosung.SetEvent(WE_CLICK, _OnDadung_chuabosungSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate.Format(_T("%s 00:00"), pMF->GetSysDate());
	m_szToDate.Format(_T("%s 23:59"), pMF->GetSysDate());
	OnStockListLoadData();
	SetMode(VM_EDIT);
}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndOriginal.GetDlgCtrlID(), m_szOriginalKey);
	DDX_Check(pDX, m_wndCheck.GetDlgCtrlID(), m_bCheck);
	DDX_Check(pDX, m_wndDadung_chuabosung.GetDlgCtrlID(), m_bDadung_chuabosung);

}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szOriginalKey.Empty();
	m_bDadung_chuabosung=FALSE;

}
int CPMSSummaryImportExportInstockForB5StocksReportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
		m_wndCheck.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnFromDateChange(){
	
} */
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnFromDateSetfocus(){
	
} */
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnFromDateKillfocus(){
	
} */
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnToDateChange(){
	
} */
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnToDateSetfocus(){
	
} */
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnToDateKillfocus(){
	
} */
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnTypeSelendok(){
	 
}
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnTypeSetfocus(){
	
}*/
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnTypeKillfocus(){
	
}*/
long CPMSSummaryImportExportInstockForB5StocksReportDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		//szWhere.Format(_T(" WHERE pmdt_id='%s' "), m_szTypeKey);
	};
	//szWhere.Format(_T(" AND hfg_moduleid = '%s'"), pMF->GetModuleID());
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERe substr(hfg_id,1, 1)='A' %s ORDER BY hfg_index, hfg_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("group")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnOriginalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnOriginalSelendok(){
	 
}
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnOriginalSetfocus(){
	
}*/
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnOriginalKillfocus(){
	
}*/
long CPMSSummaryImportExportInstockForB5StocksReportDialog::OnOriginalLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOriginal.IsSearchKey() && str2int(m_szOriginalKey) > 0){
		szWhere.Format(_T(" and mpr_product_resource_id=%d"), str2int(m_szOriginalKey));
	};
	szWhere.AppendFormat(_T(" AND mpr_org_id = '%s'"), pMF->GetModuleID());
	m_wndOriginal.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM m_product_resource WHERE mpr_isactive='Y' %s ORDER BY mpr_product_resource_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOriginal.AddItems(
			rs.GetValue(_T("mpr_product_resource_id")), 
			rs.GetValue(_T("mpr_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnOriginalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnStockListDblClick(){
	
} 
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnStockListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnStockListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSSummaryImportExportInstockForB5StocksReportDialog::OnStockListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndStockList.BeginLoad(); 
	m_wndStockList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_org_id as orgid, msl_name as name FROM m_storagelist WHERE MSL_DEPT_ID='B5' and MSL_ISACTIVE='Y' %s ORDER BY msl_storage_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndStockList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndStockList.EndLoad(); 
	return nCount;

	return 0;
	//return pMF->LoadStorageIntoListCtrl(&m_wndStockList);

}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnExportXLSSelect()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bDadung_chuabosung)
	{
		OnExportXLSOption1Select();
		//OnExportXLSOption1Select(true);
	}
	else
	OnExportXLSOption2Select();	

}
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnExportXLSOption1Select(bool bDebt)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, 
		szOldDept, szNewDept, szFileName, szFilePath;
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
	szFileName = _T("BANGTH_HANGSUDUNG_CHUABOSUNG");
	szFilePath.Format(_T("Exports\\Template\\%s.xls"), szFileName);
	if (!xls.Load(szFilePath)) 
		AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString(bDebt);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("hmt_product_id"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("product_name"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);	
		
		rs.GetValue(_T("product_uomname"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hmt_qtyissue"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		
		
		rs.GetValue(_T("pending_order"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	if (bDebt)
		szFileName = _T("BANGTH_HANGSUDUNG_TRANGBINO");
	else
		szFileName= _T("BANGTH_HANGSUDUNG_CHUABOSUNG2");
	szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szFilePath);

}

void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnExportXLSOption2Select()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szSubSQL, szSumGroup, szOrderby, szTemp;
	CString szTypeID, szItemID;						  
	double nPrice=0;
	int nStockID;
	BeginWaitCursor();
	CString szType, szTypeName;
	for (int i=0 ; i<= m_wndType.GetCount(); i++)
	{
		 if(m_wndType.GetCheck(i))
		 {
			 m_wndType.SetCurSel(i);
			 if(!szType.IsEmpty())
			 {
				szType += _T(",");
				szTypeName +=_T(", ");
			 }
			 szType.AppendFormat(_T("'%s'"), m_wndType.GetCurrent(0));				
			 szTypeName.AppendFormat(_T("%s"), m_wndType.GetCurrent(1));
		}		
	 }
	

	if(!szType.IsEmpty())	
		szWhere.AppendFormat(_T(" and product_producttype in(%s)"), szType);	
	else
		szTypeName.Format(_T("Tất cả loại thuốc"));

	if(str2int(m_szOriginalKey) > 0)
	{
		szWhere.AppendFormat(_T(" and product_resourceid=%d "), str2int(m_szOriginalKey));
	}
	if(pMF->GetModuleID() == _T("PM"))
		szWhere.AppendFormat(_T(" AND product_org_id = 'PM'"));
	else if(pMF->GetModuleID() == _T("MA"))
		szWhere.AppendFormat(_T(" AND product_org_id = 'MA'"));
	else
		szWhere.AppendFormat(_T(" AND product_org_id IN('PM', 'MA')"));
	if (m_bCheck)
		szOrderby.Format(_T("ORDER BY product_categoryid, product_categoryname, name, unit, unitprice"));
	else
		szOrderby.Format(_T("ORDER BY name, unit, unitprice"));
	
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	df.SetFontSize(9);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetFontSize(9);
	cf.SetFontName(_T("Segoe UI"));
	cf.SetFontSize(9);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 12);
	xls.SetColumnWidth(7, 12);
	int col = 8;
	for (int i =0; i < m_wndStockList.GetItemCount(); i++){
		if(m_wndStockList.GetCheck(i))
		{
			xls.SetColumnWidth(col++, 8);
			xls.SetColumnWidth(col++, 10);
		}
	}

	if(col == 8){
		ShowMessageBox(_T("You must select a stock"));
		return;
	}

	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 16);	
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 9);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 9);
	TranslateString(_T("Summary of import - export - instock for multiple stock report"), szTemp);
	StringUpper(szTemp, tmpStr);
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT|FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0,3,16);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 3, tmpStr, &df);
	int nRow = 3;

	if(!m_szTypeKey.IsEmpty())
	{
		nRow++;
		tmpStr.Format(_T("Loại: %s"), szTypeName);
		xls.SetCellMergedColumns(0, nRow, 15);
		xls.SetCellText(0, nRow, tmpStr, &cf);
	}

	if(!m_szOriginalKey.IsEmpty())
	{
		nRow++;
		tmpStr.Format(_T("Nguồn: %s"), m_wndOriginal.GetCurrent(1));
		xls.SetCellMergedColumns(0, nRow, 15);
		xls.SetCellText(0, nRow, tmpStr, &cf);
	}
	nRow++;
	xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellText(0, nRow, _T("STT"), &hf);
	xls.SetCellMergedRows(1, nRow, 2);
	xls.SetCellText(1, nRow, _T("Tên thuốc/ HL"), &hf);
	xls.SetCellMergedRows(2, nRow, 2);
	xls.SetCellText(2, nRow, _T("Hoạt chất"), &hf);
	xls.SetCellMergedRows(3, nRow, 2);
	xls.SetCellText(3, nRow, _T("Đơn vị"), &hf); 
	xls.SetCellMergedRows(4, nRow, 2);
	xls.SetCellText(4, nRow, _T("Hãng SX"), &hf);  
	xls.SetCellMergedRows(5, nRow, 2);
	xls.SetCellText(5, nRow, _T("Nước SX"), &hf);  
	xls.SetCellMergedRows(6, nRow, 2);
	xls.SetCellText(6, nRow, _T("Số đăng ký"), &hf);  
	xls.SetCellMergedRows(7, nRow, 2);
	xls.SetCellText(7, nRow, _T("Đơn giá"), &hf);      
	col = 8;
	for (int i =0; i < m_wndStockList.GetItemCount(); i++){

		if(m_wndStockList.GetCheck(i))
		{
			tmpStr.Format(_T("%s"), m_wndStockList.GetItemText(i, 1));
			xls.SetCellMergedColumns(col, nRow, 4);
			xls.SetCellText(col, nRow, tmpStr, &hf); 

			//Ton day ky
			//xls.SetCellMergedColumns(col, nRow+1, 2);
			xls.SetColumnWidth(col, 7);
			xls.SetCellText(col, nRow+1, _T("Tồn đầu"), &hf);      
			//xls.SetCellText(col, nRow+2, _T("Số lượng"), &hf);      
			//xls.SetCellText(col+1, nRow+2, _T("Số tiền"), &hf);

			col+=1;			
			//Nhap trong ky
			//xls.SetCellMergedColumns(col, nRow+1, 2);
			xls.SetColumnWidth(col, 7);
			xls.SetCellText(col, nRow+1, _T("Nhập"), &hf);      
			//xls.SetCellText(col, nRow+2, _T("Số lượng"), &hf);      
			//xls.SetCellText(col+1, nRow+2, _T("Số tiền"), &hf); 
			col+=1;		
			//Xuat trong ky
			//xls.SetCellMergedColumns(col, nRow+1, 2);
			xls.SetColumnWidth(col, 7);
			xls.SetCellText(col, nRow+1, _T("Xuất"), &hf);      
			//xls.SetCellText(col, nRow+2, _T("Số lượng"), &hf);      
			//xls.SetCellText(col+1, nRow+2, _T("Số tiền"), &hf); 
			col+=1;			
			//Ton cuoi ky
			//xls.SetCellMergedColumns(col, nRow+1, 2);
			xls.SetColumnWidth(col, 7);
			xls.SetCellText(col, nRow+1, _T("Tồn cuối"), &hf);      
			//xls.SetCellText(col, nRow+2, _T("Số lượng"), &hf);      
			//xls.SetCellText(col+1, nRow+2, _T("Số tiền"), &hf); 
			col+=1;
		}
	}

	if(col > 8)
	{
		xls.SetCellMergedColumns(col, nRow, 4);
		xls.SetCellText(col, nRow, _T("Tổng cộng"), &hf);      
//Ton day ky
			//xls.SetCellMergedColumns(col, nRow+1, 2);
			xls.SetColumnWidth(col, 7);
			xls.SetCellText(col, nRow+1, _T("Tồn đầu"), &hf);      
			//xls.SetCellText(col, nRow+2, _T("Số lượng"), &hf);      
			//xls.SetCellText(col+1, nRow+2, _T("Số tiền"), &hf);
			

			col+=1;			
			//Nhap trong ky
			//xls.SetCellMergedColumns(col, nRow+1, 2);
			xls.SetColumnWidth(col, 7);
			xls.SetCellText(col, nRow+1, _T("Nhập"), &hf);      
			//xls.SetCellText(col, nRow+2, _T("Số lượng"), &hf);      
			//xls.SetCellText(col+1, nRow+2, _T("Số tiền"), &hf); 
			col+=1;		
			//Xuat trong ky
			//xls.SetCellMergedColumns(col, nRow+1, 2);
			xls.SetColumnWidth(col, 7);
			xls.SetCellText(col, nRow+1, _T("Xuất"), &hf);      
			//xls.SetCellText(col, nRow+2, _T("Số lượng"), &hf);      
			//xls.SetCellText(col+1, nRow+2, _T("Số tiền"), &hf); 
			col+=1;			
			//Ton cuoi ky
			//xls.SetCellMergedColumns(col, nRow+1, 2);
			xls.SetColumnWidth(col, 7);
			xls.SetCellText(col, nRow+1, _T("Tồn cuối"), &hf);      
			//xls.SetCellText(col, nRow+2, _T("Số lượng"), &hf);      
			//xls.SetCellText(col+1, nRow+2, _T("Số tiền"), &hf); 
			col+=1;
	}
	nRow += 2;
	
	bool bFirst=true;
	int n=0;
	CString szStocks;

	for (int i=0 ; i < m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i)){
			if(!szStocks.IsEmpty())
				szStocks += _T(",");						
			szStocks.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));			
		}
	}	

	for (int i =0; i < m_wndStockList.GetItemCount(); i++)
	{

		if(m_wndStockList.GetCheck(i))
		{
			n = str2int(m_wndStockList.GetItemText(i, 0));
			szSumGroup.AppendFormat(_T(", sum(begin_qty%d) as beginqty%d"), n, n);
			szSumGroup.AppendFormat(_T(", sum(imp_qty%d) as impqty%d"), n, n);
			szSumGroup.AppendFormat(_T(", sum(exp_qty%d) as expqty%d"), n, n);
			szSumGroup.AppendFormat(_T(", sum(begin_qty%d+imp_qty%d-exp_qty%d) as endqty%d"), n, n, n, n);

			nStockID = str2int(m_wndStockList.GetItemText(i, 0));
			if(bFirst){
				szSubSQL.Format(_T(" SELECT *") \
								_T(" FROM") \
								_T(" (") \
								_T(" 	SELECT 	sitemid, ") \
								_T(" 		sum(begin_qty) as  begin_qty%d,") \
								_T(" 		sum(imp_qty) as imp_qty%d,") \
								_T(" 		sum(exp_qty) as exp_qty%d ") \
								_T(" 	FROM") \
								_T(" 	(") \
								_T("  		SELECT * FROM") \
								_T("  		(") \
								_T("  			SELECT impstockid as stockid, impdate as iodate, sitemid, 0 as begin_qty, impqty as imp_qty, 0 as exp_qty") \
								_T("  			FROM miv WHERE iotype <> 'MOV'") \
								_T("  			UNION ALL") \
								_T("  			SELECT impstockid as stockid, impdate as iodate, sitemid, 0 as begin_qty, impqty as imp_qty, 0 as exp_qty") \
								_T("  			FROM miv WHERE iotype = 'MOV' AND expstockid NOT IN (%s)") \
								_T("  			UNION ALL") \
								_T("  			SELECT expstockid, expdate, sitemid, 0, 0, expqty FROM mev WHERE iotype <> 'MOV'") \
								_T("  			UNION ALL") \
								_T("  			SELECT expstockid, expdate, sitemid, 0, 0, expqty FROM mev WHERE iotype = 'MOV' AND impstockid NOT IN (%s)") \
								_T("  		) iotbl") \
								_T("  		WHERE iodate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
								_T("  		UNION ALL") \
								_T("  		SELECT stockid, iodate, sitemid, coalesce(impqty-expqty, 0), 0, 0 FROM") \
								_T("  		(") \
								_T("  			SELECT impstockid as stockid, impdate as iodate, sitemid,  0 as periodqty, impqty, 0 as expqty") \
								_T("  			FROM miv") \
								_T("  			UNION ALL") \
								_T("  			SELECT expstockid, expdate, sitemid, 0, 0, expqty") \
								_T("  			FROM mev") \
								_T("  		) ptbl") \
								_T("  		WHERE iodate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
								_T(" 	 ) tblx%d") \
								_T(" 	 WHERE stockid=%d ") \
								_T(" 	 and sitemid > 0") \
								_T(" 	 GROUP BY sitemid") \
								_T(" 	 HAVING sum(begin_qty+imp_qty+exp_qty) > 0") \
								_T(" ) tbl%d"), n, n, n, szStocks, szStocks, m_szFromDate, m_szToDate, m_szFromDate, n, nStockID, n);
				bFirst = false;
			}
			else
			{
				szSubSQL.AppendFormat(_T(" full join") \
								_T(" (") \
								_T(" 	SELECT 	sitemid, ") \
								_T(" 		sum(begin_qty) as  begin_qty%d,") \
								_T(" 		sum(imp_qty) as imp_qty%d,") \
								_T(" 		sum(exp_qty) as exp_qty%d") \
								_T(" 	FROM") \
								_T(" 	(") \
								_T("  		SELECT * FROM") \
								_T("  		(") \
								_T("  			SELECT impstockid as stockid, impdate as iodate, sitemid, 0 as begin_qty, impqty as imp_qty, 0 as exp_qty") \
								_T("  			FROM miv WHERE iotype <> 'MOV'") \
								_T("  			UNION ALL") \
								_T("  			SELECT impstockid as stockid, impdate as iodate, sitemid, 0 as begin_qty, impqty as imp_qty, 0 as exp_qty") \
								_T("  			FROM miv WHERE iotype = 'MOV' AND expstockid NOT IN (%s)") \
								_T("  			UNION ALL") \
								_T("  			SELECT expstockid, expdate, sitemid, 0, 0, expqty FROM mev WHERE iotype <> 'MOV'") \
								_T("  			UNION ALL") \
								_T("  			SELECT expstockid, expdate, sitemid, 0, 0, expqty FROM mev WHERE iotype = 'MOV' AND impstockid NOT IN (%s)") \
								_T("  		) iotbl") \
								_T("  		WHERE iodate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
								_T("  		UNION ALL") \
								_T("  		SELECT stockid, iodate, sitemid, coalesce(impqty-expqty, 0), 0, 0 FROM") \
								_T("  		(") \
								_T("  			SELECT impstockid as stockid, impdate as iodate, sitemid,  0 as periodqty, impqty, 0 as expqty") \
								_T("  			FROM miv") \
								_T("  			UNION ALL") \
								_T("  			SELECT expstockid, expdate, sitemid, 0, 0, expqty") \
								_T("  			FROM mev") \
								_T("  		) ptbl") \
								_T("  		WHERE iodate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
								_T(" 	 ) tblx%d") \
								_T(" 	 WHERE stockid=%d") \
								_T(" 	 and sitemid > 0") \
								_T(" 	 GROUP BY sitemid") \
								_T(" 	 HAVING sum(begin_qty+imp_qty+exp_qty) > 0") \
								_T(" ) tbl%d using(sitemid)"), n, n, n, szStocks, szStocks, m_szFromDate, m_szToDate, m_szFromDate, n, nStockID, n);
			}
		}
	}
				szSQL.Format(_T(" SELECT") \
				_T("   product_categoryid                                         AS idx,") \
				_T("   product_categoryname                                                        AS groupname,") \
				_T("   product_code                                                         AS id,") \
				_T("   product_name                                                         AS NAME,") \
				_T("   product_uomname                                          AS unit,") \
				_T("   product_manufacturename                         AS Origin,") \
				_T("   product_countryname AS country,") \
				_T("   product_taxprice                                                    AS unitprice, ") \
				_T("   product_classname                                 AS generic,adp_name, ") \
				_T("   mp_serial AS serial") \
				_T("		 %s ") \
				_T(" FROM (%s) tblreport  ") \
				_T(" LEFT JOIN m_productitem_view ON (sitemid=product_item_id)  ") \
				_T(" LEFT JOIN m_product ON(product_id = mp_product_id)  ") \
				_T(" LEFT JOIN ad_partner ON (mp_bpartner_id=adp_partner_id) ") \
				_T(" WHERE length(product_code) > 0 %s") \
				_T(" GROUP BY product_categoryid, product_categoryname, product_code, product_name, product_uomname, product_manufacturename, product_countryname, product_taxprice, product_classname, mp_serial,adp_name") \
				_T(" %s"), szSumGroup, szSubSQL, szWhere, szOrderby);
	_fmsg(_T("%s"),szSQL);
	//AfxMessageBox(szSQL);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CString szNewLine, szOldLine;
	long nGroupBeginQty=0, nGroupImportQty=0, nGroupExportQty=0, nGroupEndQty=0;
	long nBeginQty=0, nImportQty=0, nExportQty=0, nEndQty=0;
	int nItem = 1;
	while(!rs.IsEOF())
	{
		if (m_bCheck)
		{
			rs.GetValue(_T("idx"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){				
				CString szField, szAmount;			
				tmpStr.Format(_T("%s"), szNewLine);
				xls.SetCellMergedColumns(0,nRow, 3);
				tmpStr.Format(_T("%s. %s"), szNewLine, rs.GetValue(_T("groupname")));
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true, 9,0);
				szOldLine = szNewLine;
				nItem=1;
				nRow ++;
			}
		}
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0,nRow,tmpStr, FMT_INTEGER, false, 9);		
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("generic"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(3,nRow,tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("Origin"), tmpStr);
		xls.SetCellText(4,nRow,tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("country"), tmpStr);
		xls.SetCellText(5,nRow,tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("serial"), tmpStr);
		xls.SetCellText(6,nRow,tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("unitprice"), tmpStr);		
		xls.SetCellText(7,nRow,tmpStr, FMT_NUMBER1, false, 9);
		col = 8;
		int nIndex=11;
		CString szFieldName;
		int nStockID = 0;
		long nTotalBeginQty=0, nTotalImportQty=0, nTotalExportQty=0, nTotalEndQty=0;
		
		for (int i =0; i < m_wndStockList.GetItemCount(); i++){
			if(m_wndStockList.GetCheck(i)){
				
				nStockID = str2int(m_wndStockList.GetItemText(i, 0));
				szFieldName.Format(_T("beginqty%d"), nStockID);
				rs.GetValue(szFieldName, tmpStr);
				nTotalBeginQty += str2long(tmpStr);
				if(str2float(tmpStr) == 0)
					tmpStr.Empty();

				xls.SetCellText(col++, nRow, tmpStr, FMT_NUMBER1, false, 9);
				szFieldName.Format(_T("impqty%d"), nStockID);
				rs.GetValue(szFieldName, tmpStr);
				nTotalImportQty += str2long(tmpStr);
				if(str2float(tmpStr) == 0)
					tmpStr.Empty();
				xls.SetCellText(col++, nRow, tmpStr, FMT_NUMBER1, false, 9);
		
				szFieldName.Format(_T("expqty%d"), nStockID);
				rs.GetValue(szFieldName, tmpStr);
				nTotalExportQty += str2long(tmpStr);
				if(str2float(tmpStr) == 0)
					tmpStr.Empty();
				xls.SetCellText(col++, nRow, tmpStr, FMT_NUMBER1, false, 9);
				szFieldName.Format(_T("endqty%d"), nStockID);
				rs.GetValue(szFieldName, tmpStr);
				nTotalEndQty += str2long(tmpStr);
				if(str2float(tmpStr) == 0)
					tmpStr.Empty();
				xls.SetCellText(col++, nRow, tmpStr, FMT_NUMBER1, false, 9);
				nIndex ++;
			}
		}
		if(col > 8){
			if(nTotalBeginQty > 0)
				tmpStr.Format(_T("%ld"), nTotalBeginQty);
			else
				tmpStr.Empty();
			xls.SetCellText(col++, nRow, tmpStr, FMT_NUMBER1, false, 9);
			if(nTotalImportQty > 0)
				tmpStr.Format(_T("%ld"), nTotalImportQty);
			else
				tmpStr.Empty();
			xls.SetCellText(col++, nRow, tmpStr, FMT_NUMBER1, false, 9);
			if(nTotalExportQty > 0)
				tmpStr.Format(_T("%ld"), nTotalExportQty);
			else
				tmpStr.Empty();
			xls.SetCellText(col++, nRow, tmpStr, FMT_NUMBER1, false, 9);
			if(nTotalEndQty > 0)
				tmpStr.Format(_T("%ld"), nTotalEndQty);
			else
				tmpStr.Empty();
			xls.SetCellText(col++, nRow, tmpStr, FMT_NUMBER1, false, 9);
		}
		
		rs.GetValue(_T("adp_name"), tmpStr);
		xls.SetCellText(col++, nRow, tmpStr, FMT_TEXT, false, 9);
		nRow++;
		rs.MoveNext();
	}
	
	xls.Save(_T("Exports\\TONGHOPNHAPXUATTONTHEONHIEUKHO.XLS"));
	EndWaitCursor();

} 
void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnAddPMSSummaryImportExportInstockForStocksReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnEditPMSSummaryImportExportInstockForStocksReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnDeletePMSSummaryImportExportInstockForStocksReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPMSSummaryImportExportInstockForStocksReportDialog(); 
 	}
	return 0;
}
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnSavePMSSummaryImportExportInstockForStocksReportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 		//OnPMSSummaryImportExportInstockForStocksReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnCancelPMSSummaryImportExportInstockForStocksReportDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CPMSSummaryImportExportInstockForB5StocksReportDialog::OnPMSSummaryImportExportInstockForStocksReportDialogListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CPMSSummaryImportExportInstockForB5StocksReportDialog, CGuiDialog)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnSetFocus(CWnd* pOldWnd)
{
	CGuiDialog::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
	void CPMSSummaryImportExportInstockForB5StocksReportDialog::OnDadung_chuabosungSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
}

CString CPMSSummaryImportExportInstockForB5StocksReportDialog::GetQueryString(bool bDebt)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1,  szWhere2, szStockID;	

	for (int i = 0; i < m_wndStockList.GetItemCount(); i++)
	{
		if (m_wndStockList.GetCheck(i))
		{
			if (!szStockID.IsEmpty())
				szStockID += _T(",");
			szStockID.AppendFormat(_T("%d"), str2int(m_wndStockList.GetItemText(i, 0)));
		}
	}
	if (!szStockID.IsEmpty())
	{
		szWhere1.AppendFormat(_T(" AND hpo_storage_id in(%s) "), szStockID);
		szWhere2.AppendFormat(_T(" AND mtd_cstorage_id in(%s) "), szStockID);
	}
	
	szSQL.Format(
		_T(" SELECT mtd_product_id AS hmt_product_id,") \
		_T("        mtd_product_name AS product_name,") \
		_T("        mtd_product_uomname AS product_uomname,") \
		_T("        SUM (mtd_qtyissue) AS hmt_qtyissue,") \
		_T("        Hms_medical_get_pending_order (mtd_cstorage_id, mtd_product_id) AS pending_order") \
		_T(" FROM   v_medical_transaction_pending") \
		_T(" WHERE  1 = 1 %s ") \
		_T(" GROUP  BY mtd_cstorage_id,mtd_product_id,mtd_product_name,mtd_product_uomname") \
		_T(" ORDER  BY mtd_product_name,mtd_product_uomname "),
		 szWhere2);


	return szSQL;
}