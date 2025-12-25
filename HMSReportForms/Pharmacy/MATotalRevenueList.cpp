#include "stdafx.h"
#include "MATotalRevenueList.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMATotalRevenueList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMATotalRevenueList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMATotalRevenueList* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CMATotalRevenueList *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CMATotalRevenueList *)pWnd)->OnStockAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMATotalRevenueList *pVw = (CMATotalRevenueList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMATotalRevenueList *pVw = (CMATotalRevenueList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CMATotalRevenueList*)pWnd)->OnAddPMSExportSheetList();
} 
static int _OnEditPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CMATotalRevenueList*)pWnd)->OnEditPMSExportSheetList();
} 
static int _OnDeletePMSExportSheetListFnc(CWnd *pWnd){
	 return ((CMATotalRevenueList*)pWnd)->OnDeletePMSExportSheetList();
} 
static int _OnSavePMSExportSheetListFnc(CWnd *pWnd){
	 return ((CMATotalRevenueList*)pWnd)->OnSavePMSExportSheetList();
} 
static int _OnCancelPMSExportSheetListFnc(CWnd *pWnd){
	 return ((CMATotalRevenueList*)pWnd)->OnCancelPMSExportSheetList();
} 
CMATotalRevenueList::CMATotalRevenueList(CWnd *pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CMATotalRevenueList::~CMATotalRevenueList(){
}
void CMATotalRevenueList::OnCreateComponents(){
	m_wndExportSheetList.Create(this, _T("Export Sheet List"), 5, 5, 575, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.Create(this,95, 60, 570, 85); 
	//m_wndPrintPreview.Create(this, _T("&Print Preview"), 385, 95, 495, 120);
	m_wndExport.Create(this, _T("&Export"), 500, 95, 575, 120);

}
void CMATotalRevenueList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(TRUE);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
}
void CMATotalRevenueList::OnSetWindowEvents(){
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CMATotalRevenueList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
}
void CMATotalRevenueList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMATotalRevenueList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMATotalRevenueList::SetDefaultValues(){
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
}
int CMATotalRevenueList::SetMode(int nMode){
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
/*void CMATotalRevenueList::OnFromDateChange(){
	
} */
/*void CMATotalRevenueList::OnFromDateSetfocus(){
	
} */
/*void CMATotalRevenueList::OnFromDateKillfocus(){
	
} */
int CMATotalRevenueList::OnFromDateCheckValue(){
	return 0;
} 
/*void CMATotalRevenueList::OnToDateChange(){
	
} */
/*void CMATotalRevenueList::OnToDateSetfocus(){
	
} */
/*void CMATotalRevenueList::OnToDateKillfocus(){
	
} */
int CMATotalRevenueList::OnToDateCheckValue(){
	return 0;
} 
void CMATotalRevenueList::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMATotalRevenueList::OnStockSelendok(){
	 
}
/*void CMATotalRevenueList::OnStockSetfocus(){
	
}*/
/*void CMATotalRevenueList::OnStockKillfocus(){
	
}*/

long CMATotalRevenueList::OnStockLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}
/*void CMATotalRevenueList::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMATotalRevenueList::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return;
} 
void CMATotalRevenueList::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szOldType, szNewType;
	int nCol = 0, nRow = 0, nIdx = 1;
	
	long double nTotal[10], nSum[10];
	for (int i=0;i<10;i++)
	{
		nTotal[i]=0;
		nSum[i]=0;
	}

	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 15);	xls.SetColumnWidth(2, 15);	xls.SetColumnWidth(3, 15);	xls.SetColumnWidth(4, 15);	xls.SetColumnWidth(5, 15);	xls.SetColumnWidth(6, 15);	xls.SetColumnWidth(7, 15);	xls.SetColumnWidth(8, 15);	xls.SetColumnWidth(9, 15);	xls.SetCellText(0, 0, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);		xls.SetCellText(0, 2, _T("\x42\x1EA2NG T\x1ED4NG H\x1EE2P \x44O\x41NH THU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("Ng\xE0y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("\x42\xE1n l\x1EBB (\x58\x30\x30)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("\x43\xE1\x63 kho\x61 (\x44T)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("\x42\x35 (\x44\x1EF1 tr\xF9)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("\x43\xE1\x63 kho\x61 \x31\x36h\x33\x30 - \x37h\x33\x30 (\x44T)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("\x43\x31-\x33 (TT, P\x58)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("\x42\x35 (TT, P\x58)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("Ngu\x1ED3n kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 3);	xls.SetMerge(1, 1, 0, 3);	xls.SetMerge(2, 2, 0, 9);	xls.SetMerge(3, 3, 0, 9);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("transaction_type"), szNewType);
		if (szOldType != szNewType)
		{
			if (nTotal[9] > 0)
			{
				xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT, true);
				for (int i=2;i<10;i++)
				{
					tmpStr.Format(_T("%.2f"), nTotal[i]);
					xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
					nSum[i] += nTotal[i];
					nTotal[i]=0;
				}
				nRow++;
			}
			rs.GetValue(_T("transaction_type"), tmpStr);
			if(tmpStr == _T("1"))
				xls.SetCellText(nCol, nRow, _T("Phi\x1EBFu ph\xE1t"), FMT_TEXT, true);
			else	
				xls.SetCellText(nCol, nRow, _T("Phi\x1EBFu tr\x1EA3"), FMT_TEXT, true);
			szOldType = szNewType;
			nIdx = 1;
			nRow++;
		}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("approveddate"), tmpStr);		xls.SetCellText(nCol+1, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("banle"), tmpStr);		nTotal[2] += str2double(tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("phieudt"), tmpStr);		nTotal[3] += str2double(tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("kygui"), tmpStr);		nTotal[4] += str2double(tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("phieudtng"), tmpStr);		nTotal[5] += str2double(tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("phieuttc13"), tmpStr);		nTotal[6] += str2double(tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("phieuttb5"), tmpStr);		nTotal[7] += str2double(tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("xuatkhac"), tmpStr);		nTotal[8] += str2double(tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("tongcong"), tmpStr);		nTotal[9] += str2double(tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1, true);		nRow++;		rs.MoveNext();	}	if (nTotal[9] > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT, true);
		for (int i=2;i<10;i++)
		{
			tmpStr.Format(_T("%.2f"), nTotal[i]);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
			nSum[i] -= nTotal[i];
		}
		nRow++;
	}	if (nSum[9] > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng"), FMT_TEXT, true);
		for (int i=2;i<10;i++)
		{
			tmpStr.Format(_T("%.2f"), nSum[i]);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
		}
		nRow++;
	}	EndWaitCursor();	xls.Save(_T("Exports\\Bangtonghopdoanhthu.xls"));
} 
int CMATotalRevenueList::OnAddPMSExportSheetList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CMATotalRevenueList::OnEditPMSExportSheetList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CMATotalRevenueList::OnDeletePMSExportSheetList(){
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
int CMATotalRevenueList::OnSavePMSExportSheetList(){
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
int CMATotalRevenueList::OnCancelPMSExportSheetList(){
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
int CMATotalRevenueList::OnPMSExportSheetListListLoadData(){
	return 0;
}

CString CMATotalRevenueList::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szWhere2, szWhere3, szWhere4;

	if(!m_szStockKey.IsEmpty())
		{
			szWhere.AppendFormat(_T("AND so_storage_id = %s"), m_szStockKey);
			szWhere2.AppendFormat(_T("AND mt_storage_id = %s"), m_szStockKey);
			szWhere3.AppendFormat(_T("AND hpo_storage_id = %s"), m_szStockKey);
			szWhere4.AppendFormat(_T("AND mt_storage_to_id = %s"), m_szStockKey);
		}

	szWhere.AppendFormat(_T(" AND so_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	szWhere2.AppendFormat(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	szWhere3.AppendFormat(_T(" AND hpo_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	szWhere4.AppendFormat(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	szSQL.Format(_T(" SELECT") \
		_T(" transaction_type,") \
		_T(" approveddate,") \
		_T(" SUM(banle) AS banle,") \
		_T(" SUM(phieudt) AS phieudt,") \
		_T(" SUM(kygui) AS kygui,") \
		_T(" SUM(phieudtng) AS phieudtng,") \
		_T(" SUM(phieuttc13) AS phieuttc13,") \
		_T(" SUM(phieuttb5) AS phieuttb5,") \
		_T(" SUM(xuatkhac) AS xuatkhac,") \
		_T(" SUM(banle+phieudt+kygui+phieudtng+phieuttc13+phieuttb5+xuatkhac) AS tongcong") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" 1 AS transaction_type,") \
		_T(" TRUNC(so_approveddate) AS approveddate,") \
		_T(" SUM(sol_qtyorder*sol_unitprice) AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" 0 AS kygui,") \
		_T(" 0 AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" 0 AS xuatkhac") \
		_T(" FROM sale_order") \
		_T(" LEFT JOIN sale_orderline") \
		_T(" ON ( so_sale_order_id = sol_sale_order_id )") \
		_T(" WHERE so_status = 'A'") \
		_T(" AND so_doctype = 'SOO' %s") \
		_T(" GROUP BY TRUNC(so_approveddate)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 1 AS transaction_type,") \
		_T(" TRUNC(mt_approveddate) AS approveddate,") \
		_T(" 0 AS banle,") \
		_T(" SUM(CASE WHEN mt_approveddate BETWEEN to_timestamp(trunc(mt_approveddate)||'07:30:01', 'DD-MM-YY HH24:MI:SS')") \
		_T(" AND to_timestamp(trunc(mt_approveddate)||'16:29:59', 'DD-MM-YY HH24:MI:SS') THEN ") \
		_T(" mtl_qtydelivery*mtl_saleprice ELSE 0 END) AS phieudt,") \
		_T(" 0 AS kygui,") \
		_T(" 0 AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" 0 AS xuatkhac") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" WHERE mt_doctype IN ('DMO')") \
		_T(" AND mtl_qtydelivery    > 0") \
		_T(" AND mt_status          = 'A' %s") \
		_T(" GROUP BY TRUNC(mt_approveddate)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 1 AS transaction_type,") \
		_T(" TRUNC(mt_approveddate) AS approveddate,") \
		_T(" 0 AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" SUM(hpol_qtyorder * hpol_unitprice) AS kygui,") \
		_T(" 0 AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" 0 AS xuatkhac") \
		_T(" FROM purchase_orderline2") \
		_T(" LEFT JOIN m_transaction") \
		_T(" ON ( mt_transaction_id = pol_transaction_id )") \
		_T(" LEFT JOIN hms_ipharmaorderline") \
		_T(" ON ( pol_orderid   = hpol_orderid") \
		_T(" AND pol_product_id = hpol_product_id )") \
		_T(" LEFT JOIN hms_ipharmaorder") \
		_T(" ON (hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN hms_operation") \
		_T(" ON (ho_idx = hpo_reference_id)") \
		_T(" WHERE mt_doctype IN ('CON')") \
		_T(" AND mt_status          = 'A'") \
		_T(" AND mt_department_to_id = 'B5' %s") \
		_T(" GROUP BY TRUNC(mt_approveddate)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 1 AS transaction_type,") \
		_T(" TRUNC(mt_approveddate) AS approveddate,") \
		_T(" 0 AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" 0 AS kygui,") \
		_T(" SUM(CASE WHEN mt_approveddate BETWEEN to_timestamp(trunc(mt_approveddate)||'16:30:00', 'DD-MM-YY HH24:MI:SS')") \
		_T(" AND to_timestamp(trunc(mt_approveddate)||'16:30:00', 'DD-MM-YY HH24:MI:SS') + INTERVAL '15' HOUR THEN") \
		_T(" mtl_qtydelivery*mtl_saleprice ELSE 0 END) AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" 0 AS xuatkhac") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" WHERE mt_doctype IN ('DMO')") \
		_T(" AND mtl_qtydelivery    > 0") \
		_T(" AND mt_status          = 'A' %s") \
		_T(" GROUP BY TRUNC(mt_approveddate)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 1 AS transaction_type,") \
		_T(" TRUNC(mt_approveddate) AS approveddate,") \
		_T(" 0 AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" 0 AS kygui,") \
		_T(" 0 AS phieudtng,") \
		_T(" SUM(mtl_qtydelivery*mtl_saleprice) AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" 0 AS xuatkhac") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" WHERE substr(mt_orderno, 1, 2) IN('TT', 'PX')") \
		_T(" AND mtl_qtydelivery    > 0") \
		_T(" AND mt_status          = 'A'") \
		_T(" AND mt_department_to_id = 'C1.3' %s") \
		_T(" GROUP BY TRUNC(mt_approveddate)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 1 AS transaction_type,") \
		_T(" TRUNC(mt_approveddate) AS approveddate,") \
		_T(" 0 AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" 0 AS banlekho12,") \
		_T(" 0 AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" SUM(mtl_qtydelivery*mtl_saleprice) AS phieuttb5,") \
		_T(" 0 AS xuatkhac") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" WHERE substr(mt_orderno, 1, 2) IN('TT', 'PX')") \
		_T(" AND mtl_qtydelivery    > 0") \
		_T(" AND mt_status          = 'A'") \
		_T(" AND mt_department_to_id = 'B5' %s") \
		_T(" GROUP BY TRUNC(mt_approveddate)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 1 AS transaction_type,") \
		_T(" TRUNC(mt_approveddate) AS approveddate,") \
		_T(" 0 AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" 0 AS kygui,") \
		_T(" 0 AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" CASE") \
		_T(" WHEN mt_doctype IN('MOV', 'BOO', 'DOO', 'EOH', 'EOO', 'EXO', 'EXP', 'LOO', 'SLO')") \
		_T(" THEN SUM(mtl_qtydelivery*mtl_unitprice)") \
		_T(" ELSE SUM(mtl_qtydelivery*mtl_saleprice)") \
		_T(" END AS xuatkhac") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" WHERE mt_doctype NOT IN('DRO', 'SRO', 'CRO', 'PRO', 'BIO', 'DMO')") \
		_T(" AND (substr(mt_orderno, 1, 2) IN('TT', 'PX') AND mt_department_to_id NOT IN('B5', 'C1.3') OR substr(mt_orderno, 1, 2) NOT IN('TT', 'PX')") \
		_T(" OR mt_doctype IN('CON') AND mt_department_to_id <> 'B5')") \
		_T(" AND mtl_qtydelivery    > 0") \
		_T(" AND mt_status          = 'A' %s") \
		_T(" GROUP BY TRUNC(mt_approveddate), mt_doctype") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 2 AS transaction_type,") \
		_T(" TRUNC(hpo_approveddate) AS approveddate,") \
		_T(" SUM(hpol_qtyreturn * hpol_unitprice) AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" 0 AS kygui,") \
		_T(" 0 AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" 0 AS xuatkhac") \
		_T(" FROM hms_pharmareturnorder") \
		_T(" LEFT JOIN hms_pharmareturnorder_line") \
		_T(" ON ( hpo_pharmareturnorder_id = hpol_pharmareturnorder_id )") \
		_T(" WHERE hpo_doctype = 'RRO'") \
		_T(" AND hpo_status = 'A' %s") \
		_T(" GROUP BY TRUNC(hpo_approveddate)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 2 AS transaction_type,") \
		_T(" TRUNC(mt_approveddate) AS approveddate,") \
		_T(" 0 AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" 0 AS kygui,") \
		_T(" 0 AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" SUM(hpol_qtyreverse *hpol_unitprice) AS xuatkhac") \
		_T(" FROM hms_ipharmaorderline") \
		_T(" LEFT JOIN m_transaction") \
		_T(" ON ( mt_transaction_id = hpol_retorder_id)") \
		_T(" WHERE mt_doctype       = 'DRO'") \
		_T(" AND mt_status          = 'A' %s") \
		_T(" GROUP BY TRUNC(mt_approveddate)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 2 AS transaction_type,") \
		_T(" TRUNC(mt_approveddate) AS approveddate,") \
		_T(" 0 AS banle,") \
		_T(" 0 AS phieudt,") \
		_T(" 0 AS kygui,") \
		_T(" 0 AS phieudtng,") \
		_T(" 0 AS phieuttc13,") \
		_T(" 0 AS phieuttb5,") \
		_T(" SUM(mtl_qtydelivery * DECODE(0, mtl_saleprice, mtl_taxprice, mtl_saleprice)) AS xuatkhac") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" WHERE mt_doctype IN ('SRO', 'CRO', 'PRO')") \
		_T(" AND mt_status          = 'A' %s") \
		_T(" GROUP BY TRUNC(mt_approveddate)") \
		_T(" )") \
		_T(" GROUP BY transaction_type, approveddate") \
		_T(" ORDER BY transaction_type, approveddate"), szWhere, szWhere2, szWhere2, szWhere2, szWhere2, szWhere2, szWhere2, szWhere3, szWhere4, szWhere4);
		_fmsg(_T("%s"), szSQL);
	return szSQL;
}

BEGIN_MESSAGE_MAP(CMATotalRevenueList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()
