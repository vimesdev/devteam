#include "MA_BCVTTuTrucB5.h"
#include "MainFrame_E10.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMA_BCVTTuTrucB5 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMA_BCVTTuTrucB5 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMA_BCVTTuTrucB5 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMA_BCVTTuTrucB5 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMA_BCVTTuTrucB5 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMA_BCVTTuTrucB5 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMA_BCVTTuTrucB5 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMA_BCVTTuTrucB5 *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMA_BCVTTuTrucB5 *pVw = (CMA_BCVTTuTrucB5 *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMA_BCVTTuTrucB5*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMA_BCVTTuTrucB5*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMA_BCVTTuTrucB5*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMA_BCVTTuTrucB5*)pWnd)->OnListDeleteItem();
} 
static int _OnAddMA_BCVTTuTrucB5Fnc(CWnd *pWnd){
	 return ((CMA_BCVTTuTrucB5*)pWnd)->OnAddMA_BCVTTuTrucB5();
} 
static int _OnEditMA_BCVTTuTrucB5Fnc(CWnd *pWnd){
	 return ((CMA_BCVTTuTrucB5*)pWnd)->OnEditMA_BCVTTuTrucB5();
} 
static int _OnDeleteMA_BCVTTuTrucB5Fnc(CWnd *pWnd){
	 return ((CMA_BCVTTuTrucB5*)pWnd)->OnDeleteMA_BCVTTuTrucB5();
} 
static int _OnSaveMA_BCVTTuTrucB5Fnc(CWnd *pWnd){
	 return ((CMA_BCVTTuTrucB5*)pWnd)->OnSaveMA_BCVTTuTrucB5();
} 
static int _OnCancelMA_BCVTTuTrucB5Fnc(CWnd *pWnd){
	 return ((CMA_BCVTTuTrucB5*)pWnd)->OnCancelMA_BCVTTuTrucB5();
} 
CMA_BCVTTuTrucB5::CMA_BCVTTuTrucB5(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMA_BCVTTuTrucB5::~CMA_BCVTTuTrucB5(){
}
void CMA_BCVTTuTrucB5::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 430, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndExport.Create(this, _T("&Export"), 340, 65, 430, 90);


}
void CMA_BCVTTuTrucB5::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CMA_BCVTTuTrucB5::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);


    CString szSysDate = pMF->GetSysDate();
    m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szFromDate += _T("00:00");
    m_szToDate += _T("23:59");
    SetMode(VM_EDIT);

}
void CMA_BCVTTuTrucB5::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CMA_BCVTTuTrucB5::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CMA_BCVTTuTrucB5::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMA_BCVTTuTrucB5::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMA_BCVTTuTrucB5::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CMA_BCVTTuTrucB5::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CMA_BCVTTuTrucB5::OnFromDateChange(){
	
} */
/*void CMA_BCVTTuTrucB5::OnFromDateSetfocus(){
	
} */
/*void CMA_BCVTTuTrucB5::OnFromDateKillfocus(){
	
} */
int CMA_BCVTTuTrucB5::OnFromDateCheckValue(){
	return 0;
} 
/*void CMA_BCVTTuTrucB5::OnToDateChange(){
	
} */
/*void CMA_BCVTTuTrucB5::OnToDateSetfocus(){
	
} */
/*void CMA_BCVTTuTrucB5::OnToDateKillfocus(){
	
} */
int CMA_BCVTTuTrucB5::OnToDateCheckValue(){
	return 0;
} 
void CMA_BCVTTuTrucB5::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szTableQuery, szResultQuery, tmpStr, szOldItem, szNewItem;
    GetQueryString(szTableQuery, szResultQuery);
    
    int nCount = 0, nRow = 0, nCol = 6, nIndex = 1, nTotal = 0, nVal = 0;
    //_msg(_T("1: %s"), szIndexQuery);
    
    CExcel xls;
    if (!xls.Load(_T("Exports\\Template\\VatTuChuaLinhB5.xls")))
    {
        return;
    }
    xls.SetWorksheet(0);
    tmpStr.Format(
        _T("Từ ngày %s đến ngày %s"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
    xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    xls.SetCellText(0, 4, _T("STT"),
                    FMT_TEXT | FMT_CENTER, true, 12);
    xls.SetCellText(1, 4, _T("Tên vật tư"), FMT_CENTER | FMT_CENTER, true, 12);
    xls.SetCellText(2, 4, _T("ĐVT"), FMT_CENTER | FMT_CENTER, true, 12);
    xls.SetCellText(3, 4, _T("Nhà cung cấp"), FMT_CENTER | FMT_CENTER, true, 12);
    xls.SetCellText(4, 4, _T("Nước SX"), FMT_CENTER | FMT_CENTER, true, 12);
    xls.SetCellText(5, 4, _T("Đơn giá"), FMT_CENTER | FMT_CENTER, true, 12);

    nRow = 4;

    long tmp = 0;
    rs.ExecSQL(szTableQuery);
    
    while (!rs.IsEOF())
    {
        xls.SetCellText(nCol, nRow, rs.GetValue(_T("msl_name")), FMT_TEXT, true, 11);
        nCol++;
        rs.MoveNext();
    }
    xls.SetCellText(nCol, 4, _T("Tổng"), FMT_CENTER | FMT_CENTER, true, 11);

    rs.ExecSQL(szResultQuery);
    nRow = 5;
    while (!rs.IsEOF())
    {
        nCol = 1;
        nTotal = 0;
        xls.SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT, 11);
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            if (i >= 6)
            {
                nVal = str2int(rs.GetValue(i));
                nTotal += nVal;
            }
            
            xls.SetCellText(nCol, nRow, rs.GetValue(i), FMT_TEXT, 11);
            
            nCol++;
        }
        xls.SetCellText(nCol, nRow, int2str(nTotal), FMT_CENTER | FMT_CENTER,
                        true, 11);
        
        nRow++;
        rs.MoveNext();
    }

    

    EndWaitCursor();
    xls.Save(_T("Exports\\VatTuChuaLinhB5.xls"));
} 

int CMA_BCVTTuTrucB5::OnAddMA_BCVTTuTrucB5(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMA_BCVTTuTrucB5::OnEditMA_BCVTTuTrucB5(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMA_BCVTTuTrucB5::OnDeleteMA_BCVTTuTrucB5(){
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
 		OnCancelMA_BCVTTuTrucB5();
 	}
	return 0;
}
int CMA_BCVTTuTrucB5::OnSaveMA_BCVTTuTrucB5(){
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
 		//OnMA_BCVTTuTrucB5ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMA_BCVTTuTrucB5::OnCancelMA_BCVTTuTrucB5(){
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
int CMA_BCVTTuTrucB5::OnMA_BCVTTuTrucB5ListLoadData(){
	return 0;
}

void CMA_BCVTTuTrucB5::GetQueryString(CString &table_query, CString &result_query)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szWhere, szCompanys, szIndexes, szTables, szWhere2, szTableQuery, szSQL;
    UpdateData(TRUE);
    table_query.Format(
        _T("select lower(msl_name) as msl_name from m_storagelist where ")
        _T("msl_type = 'C' and msl_dept_id = 'B5' ")
                        _T(" and lower(msl_name) like '%%bàn mổ%%' "));
    rs.ExecSQL(table_query);
    while (!rs.IsEOF())
    {
        if (!szTables.IsEmpty())
        {
            szTables += _T(",");
        }
        szTables.AppendFormat(_T("'%s' AS \"%s\""), rs.GetValue(_T("msl_name")),
                              rs.GetValue(_T("msl_name")));

        rs.MoveNext();
    }

    result_query.Format(
        _T("SELECT * FROM ( ")
        _T(" SELECT  ")
        _T("        mpv.product_name AS ten_vat_tu, ")
        _T("        mpv.product_purchase_uomname AS don_vi, ")
        _T("        mpv.product_manufacturename AS hang_san_xuat, ")
        _T("        mpv.product_countryname AS nuoc_san_xuat, ")
        _T("        mpv.product_unitprice AS don_gia, ")
        _T("        LOWER(ms.msl_name) AS ban_mo, ")
        _T("        hmt.hmt_qtyissue AS so_luong ")
        _T(" FROM hms_medical_transaction hmt ")
        _T(" LEFT JOIN m_product_view mpv ON mpv.product_id = ")
        _T("hmt.hmt_suppproduct_id ")
        _T(" LEFT JOIN m_storagelist ms ON ms.msl_storage_id = ")
        _T("hmt.hmt_cstorage_id ")
        _T(" WHERE hmt.hmt_deptid = 'B5' ")
        _T("   AND hmt.hmt_orderdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T("                             AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T("   AND ms.msl_type = 'C' ")
        _T("   AND LOWER(ms.msl_name) LIKE '%%bàn mổ%%' ")
        _T(") PIVOT ( ")
        _T("  SUM(so_luong) FOR ban_mo IN (%s) ")
        _T(") ")
        _T("ORDER BY ten_vat_tu "),
        m_szFromDate, m_szToDate, szTables);

    _tprintf(L"%s", szSQL);
}