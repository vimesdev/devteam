#include "stdafx.h"
#include "HCDepartmentReturnList.h"
#include "MainFrame_E10.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHCDepartmentReturnList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHCDepartmentReturnList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHCDepartmentReturnList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CHCDepartmentReturnList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHCDepartmentReturnList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHCDepartmentReturnList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHCDepartmentReturnList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHCDepartmentReturnList *)pWnd)->OnToDateCheckValue();
} 
static void _OnOutsideListSelectFnc(CWnd *pWnd){
	 ((CHCDepartmentReturnList*)pWnd)->OnOutsideListSelect();
}
static void _OnUnImportStockSelectFnc(CWnd *pWnd){
	((CHCDepartmentReturnList*)pWnd)->OnUnImportStockSelect();
}
static void _OnExportbyPatSelectFnc(CWnd *pWnd){
	CHCDepartmentReturnList *pVw = (CHCDepartmentReturnList *)pWnd;
	pVw->OnExportbyPatSelect();
} 
static void _OnExportbyDrugSelectFnc(CWnd *pWnd){
	CHCDepartmentReturnList *pVw = (CHCDepartmentReturnList *)pWnd;
	pVw->OnExportbyDrugSelect();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((CHCDepartmentReturnList*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((CHCDepartmentReturnList*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHCDepartmentReturnList*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((CHCDepartmentReturnList*)pWnd)->OnListFacDeleteItem();
} 
static int _OnListFacCheckAllFnc(CWnd *pWnd){
	return ((CHCDepartmentReturnList*)pWnd)->OnListFacCheckAll();
}
static int _OnListFacUncheckAllFnc(CWnd *pWnd){
	return ((CHCDepartmentReturnList*)pWnd)->OnListFacUncheckAll();
}
static long _OnListStockLoadDataFnc(CWnd *pWnd){
	return ((CHCDepartmentReturnList*)pWnd)->OnListStockLoadData();
} 
static void _OnListStockDblClickFnc(CWnd *pWnd){
	((CHCDepartmentReturnList*)pWnd)->OnListStockDblClick();
} 
static void _OnListStockSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHCDepartmentReturnList*)pWnd)->OnListStockSelectChange(nOldItem, nNewItem);
} 
static int _OnListStockDeleteItemFnc(CWnd *pWnd){
	 return ((CHCDepartmentReturnList*)pWnd)->OnListStockDeleteItem();
} 
static int _OnListStockCheckAllFnc(CWnd *pWnd){
	return ((CHCDepartmentReturnList*)pWnd)->OnListStockCheckAll();
}
static int _OnListStockUncheckAllFnc(CWnd *pWnd){
	return ((CHCDepartmentReturnList*)pWnd)->OnListStockUncheckAll();
}
CHCDepartmentReturnList::CHCDepartmentReturnList(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHCDepartmentReturnList::~CHCDepartmentReturnList(){
}
void CHCDepartmentReturnList::OnCreateComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 550);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndOutsideList.Create(this, _T("Outside List"), 0, 0, 0, 0);
	m_wndExportbyPat.Create(this, _T("Export by Patient"), 0, 0, 0, 0);
	
	m_wndExportbyDrug.Create(this, _T("ExportXLS"), 465, 555, 575, 580);
	m_wndListFac.Create(this,10, 305, 570, 545); 
	m_wndListStock.Create(this,10, 60, 570, 300);
	m_wndUnImportStock.Create(this, _T("UnImport Stock"), 0, 0, 0, 0);

}
void CHCDepartmentReturnList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);

	m_wndListStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndListStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndListStock.SetCheckBox(true);

	m_wndListFac.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndListFac.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndListFac.SetCheckBox(true);

}
void CHCDepartmentReturnList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndOutsideList.SetEvent(WE_CLICK, _OnOutsideListSelectFnc);
	m_wndUnImportStock.SetEvent(WE_CLICK, _OnUnImportStockSelectFnc);
	m_wndExportbyPat.SetEvent(WE_CLICK, _OnExportbyPatSelectFnc);
	m_wndExportbyDrug.SetEvent(WE_CLICK, _OnExportbyDrugSelectFnc);
	m_wndListFac.SetEvent(WE_SELCHANGE, _OnListFacSelectChangeFnc);
	m_wndListFac.SetEvent(WE_LOADDATA, _OnListFacLoadDataFnc);
	m_wndListFac.SetEvent(WE_DBLCLICK, _OnListFacDblClickFnc);
	m_wndListFac.AddEvent(1, _T("Check All"), _OnListFacCheckAllFnc);
	m_wndListFac.AddEvent(2, _T("Uncheck All"), _OnListFacUncheckAllFnc);
	m_wndListStock.SetEvent(WE_SELCHANGE, _OnListStockSelectChangeFnc);
	m_wndListStock.SetEvent(WE_LOADDATA, _OnListStockLoadDataFnc);
	m_wndListStock.SetEvent(WE_DBLCLICK, _OnListStockDblClickFnc);
	m_wndListStock.AddEvent(1, _T("Check All"), _OnListStockCheckAllFnc);
	m_wndListStock.AddEvent(2, _T("Uncheck All"), _OnListStockUncheckAllFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	OnListFacLoadData();
	OnListStockLoadData();
	UpdateData(FALSE);

}
void CHCDepartmentReturnList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndOutsideList.GetDlgCtrlID(), m_bOutsideList);
	DDX_Check(pDX, m_wndUnImportStock.GetDlgCtrlID(), m_bUnImportStock);

}
void CHCDepartmentReturnList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bOutsideList=FALSE;
	m_bUnImportStock=FALSE;

}
int CHCDepartmentReturnList::SetMode(int nMode){
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
/*void CHCDepartmentReturnList::OnFromDateChange(){
	
} */
/*void CHCDepartmentReturnList::OnFromDateSetfocus(){
	
} */
/*void CHCDepartmentReturnList::OnFromDateKillfocus(){
	
} */
int CHCDepartmentReturnList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHCDepartmentReturnList::OnToDateChange(){
	
} */
/*void CHCDepartmentReturnList::OnToDateSetfocus(){
	
} */
/*void CHCDepartmentReturnList::OnToDateKillfocus(){
	
} */
int CHCDepartmentReturnList::OnToDateCheckValue(){
	return 0;
} 
void CHCDepartmentReturnList::OnOutsideListSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CHCDepartmentReturnList::OnUnImportStockSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHCDepartmentReturnList::OnExportbyPatSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, StockStr, StockNameStr, FacStr, FacNameStr, szOldDept, szNewDept, tmpStr, szOldDoc, szNewDoc;
	CStringArray arrCol;
	int nCol = 0, nRow = 0, nIdx = 1, nOldRow = 0;
	double nTemp = 0;
	long double nDeptAmount = 0, nTtlAmount = 0;
	double nDeptQty = 0, nTtlQty = 0; 
	if (!m_bOutsideList)
		szWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndListStock.GetItemCount(); i++)
	{
		if (m_wndListStock.GetCheck(i))
		{
			if (!StockStr.IsEmpty())
			{
				StockStr += _T(", ");
				StockNameStr += _T(", ");
			}
			StockNameStr.AppendFormat(_T("%s"), m_wndListStock.GetItemText(i, 1));
			StockStr.AppendFormat(_T("%s"), m_wndListStock.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			if (!FacStr.IsEmpty())
			{
				FacStr += _T(", ");
				FacNameStr += _T(", ");
			}
			FacNameStr.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i, 1));
			FacStr.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
		}
	}
	if (!StockStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), StockStr);
	if (!FacStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_deptid IN (%s)"), FacStr);
	//if (m_bOutsideList)
	//	szWhere.AppendFormat(_T(" AND hpol_qtyreverse > 0"));
	//else
	//	szWhere.AppendFormat(_T(" AND hpol_processed <> 'P' AND hpol_qtyreverse > 0"));
	if (m_bOutsideList)
		szWhere.AppendFormat(_T(" AND (hpol_processed <> 'P' AND hpol_qtyreverse > 0)"));

	if (m_bUnImportStock)
		szWhere.AppendFormat(_T("AND mt_status IN('O', 'S')"));
	else
		szWhere.AppendFormat(_T(" AND mt_status = 'A'"));

	if(pMF->GetModuleID() == _T("HC"))
		szWhere.AppendFormat(_T(" AND product_org_id = 'HC'"));
	

	szSQL.Format(_T(" SELECT    Get_patientname(hpo_docno)     AS patname, ") \
				_T("           hpo_docno                      AS docno, ") \
				_T("           product_name                   AS prodname, ") \
				_T("           sum(hpol_qtyreverse)                AS qty, ") \
				_T("		   product_vatprice price,") \
				_T("		   sum(hpol_qtyreverse)*product_taxprice amount,") \
				_T("           Get_departmentname(hpo_deptid) AS dept ") \
				_T(" FROM      hms_ipharmaorder ") \
				_T(" LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T(" LEFT JOIN m_transaction ON ( mt_transaction_id = hpol_retorder_id ) ") \
				_T(" LEFT JOIN m_productitem_view") \
				_T(" ON ( product_item_id = hpol_product_item_id )") \
				_T(" WHERE 1=1 %s") \
				_T(" GROUP BY hpo_docno, product_name, hpo_deptid, product_vatprice") \
				_T(" ORDER BY hpo_deptid, hpo_docno, product_name"), szWhere);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."), MB_ICONASTERISK);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 40);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(4, 15);
	xls.SetCellMergedColumns(nCol, nRow, 2);
	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 3);
	xls.SetCellMergedColumns(nCol, nRow + 3, 3);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol, nRow + 2, _T("\x44\x41NH S\xC1\x43H THU\x1ED0\x43 TR\x1EA2 L\x1EA0I T\x1EEA KHO\x41"), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), m_szFromDate, m_szToDate);
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER);
	nRow = 3;
	if (!StockNameStr.IsEmpty())
	{
		nRow++;
		tmpStr.Format(_T("T\x1EEB kho: %s"), StockNameStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT);
	}
	if (!FacNameStr.IsEmpty())
	{
		nRow++;
		tmpStr.Format(_T("T\x1EEB khoa: %s"), FacNameStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT);
	}
	nRow++;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("T\xEAn thu\x1ED1\x63"));
	arrCol.Add(_T("S\x1ED1 l\x1B0\x1EE3ng"));
	arrCol.Add(_T("\x110\x1A1n gi\xE1"));
	arrCol.Add(_T("Th\xE0nh ti\x1EC1n"));
	nRow++;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol + i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true);
	}
	nRow++;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), szNewDept);
		rs.GetValue(_T("docno"), szNewDoc);
		if (szNewDept != szOldDept)
		{
			if (nDeptQty > 0)
			{
				xls.SetCellText(2, nOldRow, double2str(nDeptQty), FMT_NUMBER1, true);
				tmpStr.Format(_T("%f"), nDeptAmount);
				xls.SetCellText(4, nOldRow, tmpStr, FMT_NUMBER1, true);
				nTtlAmount += nDeptAmount;
				nTtlQty += nDeptQty;
				nDeptAmount = 0;
				nDeptQty = 0;
			}
			xls.SetCellText(nCol, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nOldRow = nRow;
			nRow++;
		}
		if (szNewDoc != szOldDoc)
		{
			xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
			tmpStr.Format(_T("[%s] %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("patname")));
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
			szOldDoc = szNewDoc;
			nRow++;
		}
		
		xls.SetCellText(nCol + 1, nRow, _T("- ")+rs.GetValue(_T("prodname")), FMT_TEXT); 
		rs.GetValue(_T("qty"), nTemp);
		nDeptQty += nTemp;
		xls.SetCellText(nCol + 2, nRow, double2str(nTemp), FMT_NUMBER1);
		xls.SetCellText(3, nRow, rs.GetValue(_T("price")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), nTemp);
		nDeptAmount += nTemp;
		xls.SetCellText(4, nRow, double2str(nTemp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nDeptQty > 0)
	{
		xls.SetCellText(2, nOldRow, double2str(nDeptQty), FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nDeptAmount);
		xls.SetCellText(4, nOldRow, tmpStr, FMT_NUMBER1, true);
		nTtlAmount += nDeptAmount;
		nTtlQty += nDeptQty;
	}
	if (nTtlQty > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		xls.SetCellText(2, nRow, double2str(nTtlQty), FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nTtlAmount);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, true);
		
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Danh sach thuoc tra lai tu khoa theo BN.xls"));
} 
void CHCDepartmentReturnList::OnExportbyDrugSelect()
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
	if (!xls.Load(_T("Exports\\Template\\BAOCAO_TRALAITUKHOA_PHIEU_PX.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	//xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 13);
	//xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 13);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupname"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[2] > 0)
			{
				//xls.SetCellText(1, nMarkRow, _T("Tổng nhóm:"), FMT_TEXT, true);

				for(int i = 2; i < 30; i++)
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

		rs.GetValue(_T("receiver"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("totalamount"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[2] > 0)
	{
		//xls.SetCellText(1, nMarkRow, _T("Tổng nhóm:"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nMarkRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[2] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAO_TRALAITUKHOA_PHIEU_PX2.xls"));
	
} 
void CHCDepartmentReturnList::OnListFacDblClick(){
	
} 
void CHCDepartmentReturnList::OnListFacSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CHCDepartmentReturnList::OnListFacDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
int CHCDepartmentReturnList::OnListFacCheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		m_wndListFac.SetCheck(i, true);
	}
	return 0;	
}

int CHCDepartmentReturnList::OnListFacUncheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		m_wndListFac.SetCheck(i, false);
	}
	return 0;	
}

long CHCDepartmentReturnList::OnListFacLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListFac.BeginLoad(); 
	m_wndListFac.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type = 'DT' order by  sd_index,sd_type "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListFac.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndListFac.EndLoad(); 
	return nCount;
}
void CHCDepartmentReturnList::OnListStockDblClick(){
	
} 
void CHCDepartmentReturnList::OnListStockSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CHCDepartmentReturnList::OnListStockDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CHCDepartmentReturnList::OnListStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageIntoListCtrl(&m_wndListStock);
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListStock.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListStock.AddItems(
		rs.MoveNext();
	}
	m_wndListStock.EndLoad(); 
	return nCount;
*/
	return 0;
}

int CHCDepartmentReturnList::OnListStockCheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i=0; i< m_wndListStock.GetItemCount(); i++){
		m_wndListStock.SetCheck(i, true);
	}
	 return 0;	
}

int CHCDepartmentReturnList::OnListStockUncheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i=0; i< m_wndListStock.GetItemCount(); i++){
		m_wndListStock.SetCheck(i, false);
	}
	 return 0;	
}
CString CHCDepartmentReturnList::GetQueryString()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szWhere0, szWhere1, szWhere2, szPrice;
	CString StockStr, StockNameStr, FacStr, FacNameStr, szOldDept, szNewDept, tmpStr, szOldDoc, szNewDoc;

	
	szWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	for (int i = 0; i < m_wndListStock.GetItemCount(); i++)
	{
		if (m_wndListStock.GetCheck(i))
		{
			if (!StockStr.IsEmpty())
			{
				StockStr += _T(", ");
				StockNameStr += _T(", ");
			}
			StockNameStr.AppendFormat(_T("%s"), m_wndListStock.GetItemText(i, 1));
			StockStr.AppendFormat(_T("%s"), m_wndListStock.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			if (!FacStr.IsEmpty())
			{
				FacStr += _T(", ");
				FacNameStr += _T(", ");
			}
			FacNameStr.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i, 1));
			FacStr.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
		}
	}
	if (!StockStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND MT_STORAGE_TO_ID IN (%s)"), StockStr);
	if (!FacStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND MT_DEPARTMENT_ID IN (%s)"), FacStr);
	
	szSQL.Format(_T(" SELECT groupname,") \
				_T("   receiver, ") \
				_T("   SUM(amount)          AS totalamount") \
				_T(" FROM") \
				_T("   (SELECT SD_GROUPNAME_HC AS groupname,") \
				_T("     MT_DEPARTMENT_ID   AS receiver,") \
				_T("     SD_INDEXGROUP_HC reportgroupIdx,") \
				_T("     SD_INDEX_HC AS DeptIdx,    ") \
				_T("     SUM(mtl_qtydelivery * product_vatprice) AS amount") \
				_T("   FROM m_transaction") \
				_T("   LEFT JOIN m_transactionline") \
				_T("   ON ( mt_transaction_id = mtl_transaction_id )") \
				_T("   LEFT JOIN m_productitem_view3") \
				_T("   ON (product_item_id = mtl_product_item_id)") \
				_T("   LEFT JOIN m_storagelist") \
				_T("   ON ( msl_storage_id = mt_storage_to_id )") \
				_T("   LEFT JOIN SYS_DEPT") \
				_T("   ON (sd_id       =mt_department_to_id)") \
				_T("   WHERE mt_status = 'A'") \
				_T("   AND mt_doctype IN ('DRO','CRO')") \
				_T("   %s ") \
				_T("   GROUP BY SD_INDEXGROUP_HC,") \
				_T("     SD_GROUPNAME_HC,") \
				_T("     SD_INDEX_HC,") \
				_T("     MT_DEPARTMENT_ID,") \
				_T("     PRODUCT_CATEGORYID,") \
				_T("     sd_type") \
				_T("   ORDER BY sd_type") \
				_T("   )") \
				_T(" GROUP BY reportgroupIdx,") \
				_T("   groupname,") \
				_T("   DeptIdx,") \
				_T("   receiver") \
				_T(" ORDER BY reportgroupIdx,") \
				_T("   groupname,") \
				_T("   DeptIdx"), szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}