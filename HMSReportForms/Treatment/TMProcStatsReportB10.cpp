#include "TMProcStatsReportB10.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnYearSetfocus();} */
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnYearCheckValue();
}
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                           int nNewItemSel)
{
    ((CTMProcStatsReportB10 *)pWnd)
        ->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
    ((CTMProcStatsReportB10 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CTMProcStatsReportB10 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnToDateCheckValue();
}
static void _OnC11SelectFnc(CWnd *pWnd)
{
    ((CTMProcStatsReportB10 *)pWnd)->OnC11Select();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CTMProcStatsReportB10 *pVw = (CTMProcStatsReportB10 *)pWnd;
    pVw->OnExportSelect();
}
static int _OnAddTMProcStatsReportB10Fnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnAddTMProcStatsReportB10();
}
static int _OnEditTMProcStatsReportB10Fnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnEditTMProcStatsReportB10();
}
static int _OnDeleteTMProcStatsReportB10Fnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnDeleteTMProcStatsReportB10();
}
static int _OnSaveTMProcStatsReportB10Fnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnSaveTMProcStatsReportB10();
}
static int _OnCancelTMProcStatsReportB10Fnc(CWnd *pWnd)
{
    return ((CTMProcStatsReportB10 *)pWnd)->OnCancelTMProcStatsReportB10();
}
CTMProcStatsReportB10::CTMProcStatsReportB10(CWnd *pParent)
{

    m_nDlgWidth = 1029;
    m_nDlgHeight = 773;
    SetDefaultValues();
}
CTMProcStatsReportB10::~CTMProcStatsReportB10(){
}
void CTMProcStatsReportB10::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 510, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 255, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 260, 30, 350, 55);
	m_wndReportPeriod.Create(this,355, 30, 505, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 60, 350, 85);
	m_wndToDate.Create(this,355, 60, 505, 85); 
	m_wndC11.Create(this, _T("C11 52"), 397, 90, 502, 115);
	m_wndExport.Create(this, _T("&Export"), 410, 125, 510, 150);

}
void CTMProcStatsReportB10::OnInitializeComponents()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    m_wndYear.SetLimitText(1024);
    m_wndYear.SetCheckValue(true);
    m_wndReportPeriod.SetCheckValue(true);
    m_wndReportPeriod.LimitText(1024);
    m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndFromDate.SetCheckValue(true);
    m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndToDate.SetCheckValue(true);

    m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void CTMProcStatsReportB10::OnSetWindowEvents()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    // m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
    // m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
    // m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
    m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
    m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
    // m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
    // m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
    m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
    m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
    // m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
    // m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
    // m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
    // m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
    m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
    // m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
    // m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
    // m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
    m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
    m_wndC11.SetEvent(WE_CLICK, _OnC11SelectFnc);
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    SetMode(VM_ADD);
}
void CTMProcStatsReportB10::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
    DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_Check(pDX, m_wndC11.GetDlgCtrlID(), m_bC11);
}
void CTMProcStatsReportB10::UpdateJson(BOOL bSave)
{
    if (bSave)
    {

        m_jData[_T("Year")] = m_nYear;
        m_jData[_T("ReportPeriod")] = m_szReportPeriodKey;
        m_jData[_T("FromDate")] = m_szFromDate;
        m_jData[_T("ToDate")] = m_szToDate;
        m_jData[_T("C11")] = m_bC11;
    }
    else
    {

        m_jData[_T("Year")].GetValue(m_nYear);
        m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
        m_jData[_T("FromDate")].GetValue(m_szFromDate);
        m_jData[_T("ToDate")].GetValue(m_szToDate);
        m_jData[_T("C11")].GetValue(m_bC11);
    }
}
void CTMProcStatsReportB10::GetDataToScreen()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT * FROM "));
    rs.ExecSQL(szSQL);
}
void CTMProcStatsReportB10::GetScreenToData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CTMProcStatsReportB10::SetDefaultValues()
{

    m_nYear = 0;
    m_szReportPeriodKey.Empty();
    m_szFromDate.Empty();
    m_szToDate.Empty();
    m_bC11 = FALSE;
}
int CTMProcStatsReportB10::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiView::SetMode(nMode);
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL, szSysDate;
    CRecord rs(&pMF->m_db);
    switch (nMode)
    {
    case VM_ADD:
        EnableControls(TRUE);
        EnableButtons(TRUE, 0, 1, -1);
        SetDefaultValues();
        szSysDate = pMF->GetSysDate();
        m_nYear = ToInt(szSysDate.Left(4));
        m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
        m_szFromDate = m_szToDate = pMF->GetSysDate();
        m_szFromDate += _T(" 00:00");
        m_szToDate += _T(" 23:59");
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
/*void CTMProcStatsReportB10::OnYearChange(){

} */
/*void CTMProcStatsReportB10::OnYearSetfocus(){

} */
/*void CTMProcStatsReportB10::OnYearKillfocus(){

} */
int CTMProcStatsReportB10::OnYearCheckValue()
{
    UpdateData(TRUE);
    if (m_nYear > 0)
    {
        CDateTime dt;
        CDate date;
        CString szTemp;

        dt.ParseDateTime(m_szFromDate);
        date = dt.GetDate();
        if (date.GetYear() != 1752)
        {
            dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
            m_szFromDate = dt.GetDateTime();
            szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(),
                          dt.GetDate().GetMonth(), dt.GetDate().GetYear(),
                          dt.GetTime().GetHour(), dt.GetTime().GetMinute());
            m_wndFromDate.SetWindowText(szTemp);
        }
        dt.ParseDateTime(m_szToDate);
        date = dt.GetDate();
        if (date.GetYear() != 1752)
        {
            dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
            m_szToDate = dt.GetDateTime();
            szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(),
                          dt.GetDate().GetMonth(), dt.GetDate().GetYear(),
                          dt.GetTime().GetHour(), dt.GetTime().GetMinute());
            m_wndToDate.SetWindowText(szTemp);
        }
    }

    UpdateData(FALSE);
    return 0;
}
void CTMProcStatsReportB10::OnReportPeriodSelectChange(int nOldItemSel,
                                                       int nNewItemSel)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CTMProcStatsReportB10::OnReportPeriodSelendok()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString tmpStr;
    CDate dte, date;

    UpdateData(true);

    date.ParseDate(pMF->GetSysDate());
    int nYear = date.GetYear();
    int nMonth = ToInt(m_szReportPeriodKey);

    if (nMonth > 0 && nMonth <= 12)
    {
        m_szFromDate.Format(_T("%.4d/%.2d/01 00:00"), nYear, nMonth);
        dte.ParseDate(m_szFromDate);
        m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 13)
    {
        m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
        tmpStr.Format(_T("%.4d/03/01"), nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 14)
    {
        m_szFromDate.Format(_T("%.4d/04/01 00:00"), nYear);
        tmpStr.Format(_T("%.4d/06/01"), nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 15)
    {
        m_szFromDate.Format(_T("%.4d/07/01 00:00"), nYear);
        tmpStr.Format(_T("%.4d/09/01"), nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 16)
    {
        m_szFromDate.Format(_T("%.4d/10/01 00:00"), nYear);
        tmpStr.Format(_T("%.4d/10/01"), nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 17)
    {
        m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
        tmpStr.Format(_T("%.4d/12/01"), nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear,
                          dte.GetMonthLastDay());
    }

    UpdateData(false);
}
/*void CTMProcStatsReportB10::OnReportPeriodSetfocus(){

}*/
/*void CTMProcStatsReportB10::OnReportPeriodKillfocus(){

}*/
long CTMProcStatsReportB10::OnReportPeriodLoadData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
    {
        szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szReportPeriodKey));
    }
    m_wndReportPeriod.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndReportPeriod.AddItems(rs.GetValue(_T("hpr_idx")),
                                   rs.GetValue(_T("hpr_name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CTMProcStatsReportB10::OnReportPeriodAddNew(){
    CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
/*void CTMProcStatsReportB10::OnFromDateChange(){

} */
/*void CTMProcStatsReportB10::OnFromDateSetfocus(){

} */
/*void CTMProcStatsReportB10::OnFromDateKillfocus(){

} */
int CTMProcStatsReportB10::OnFromDateCheckValue() { return 0; }
/*void CTMProcStatsReportB10::OnToDateChange(){

} */
/*void CTMProcStatsReportB10::OnToDateSetfocus(){

} */
/*void CTMProcStatsReportB10::OnToDateKillfocus(){

} */
int CTMProcStatsReportB10::OnToDateCheckValue(){
	return 0;
} 
	void CTMProcStatsReportB10::OnC11Select(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CTMProcStatsReportB10::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("Xuất tổng hợp"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Xuất C1.1 phòng 52"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Xuất chi tiết"));
    menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_RIGHTALIGN | TPM_BOTTOMALIGN | TPM_NONOTIFY, rect.right, rect.top, this);
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
int CTMProcStatsReportB10::OnAddTMProcStatsReportB10(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMProcStatsReportB10::OnEditTMProcStatsReportB10()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CTMProcStatsReportB10::OnDeleteTMProcStatsReportB10()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL;
    if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return -1;
    szSQL.Format(_T("DELETE FROM  WHERE  AND"));
    int ret = pMF->ExecSQL(szSQL);
    if (ret >= 0)
    {
        SetMode(VM_NONE);
        OnCancelTMProcStatsReportB10();
    }
    return 0;
}
int CTMProcStatsReportB10::OnSaveTMProcStatsReportB10()
{
    if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
        return -1;
    if (!IsValidateData())
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL;
    if (GetMode() == VM_ADD)
    {
        // szSQL = m_tblTbl.GetInsertSQL();
    }
    else if (GetMode() == VM_EDIT)
    {
        CString szWhere;
        szWhere.Format(_T(" WHERE"));
        // szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
        szSQL += szWhere;
    }
    _fmsg(_T("%s"), szSQL);
    int ret = pMF->ExecSQL(szSQL);
    if (ret > 0)
    {
        // OnTMProcStatsReportB10ListLoadData();
        SetMode(VM_VIEW);
    }
    else
    {
    }
    return ret;
    return 0;
}
int CTMProcStatsReportB10::OnCancelTMProcStatsReportB10()
{
    if (GetMode() == VM_EDIT)
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
int CTMProcStatsReportB10::OnTMProcStatsReportB10ListLoadData() { return 0; }

CString CTMProcStatsReportB10::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere;
    szSQL.Format(
        _T(" WITH fee_data AS(  ")
        _T(" 	SELECT ")
        _T(" 	ho_itemid AS itemid,  CASE WHEN ho_object IN (2, 4, 5, 9, 10, ")
        _T("11, 12) THEN 'BHYT' ELSE 'DV' END AS object_type,")
        _T(" 	hfe_desc AS feename, ")
        _T(" 	sum(hfe_quantity) AS qty, ")
        _T(" 	SUM(hfe_unitprice * hfe_quantity ) ")
        _T("AS totalprice")
        _T(" 	FROM hms_operation ")
        _T("  LEFT JOIN hms_fee ON(ho_idx = hfe_orderid and hfe_itemid = ")
        _T("ho_itemid and hfe_docno = ho_docno) ")
        //_T(" 	LEFT JOIN hms_doc ON(hd_docno = ho_docno) ")
        _T(" 	WHERE ho_performdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') ")
        _T(" 	AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T(" 	AND ho_status = 'T' ")
        _T(" 	AND ho_pdeptid = 'B10' %s ")
        _T(" 	GROUP BY ho_itemid, hfe_desc, ho_object  ")
        _T(" 	UNION ALL ")
        _T(" 	SELECT ")
        _T(" 	hpcl_itemid AS itemid, CASE WHEN hpc_object IN (2, 4, 5, 9, ")
        _T("10, 11, 12) THEN 'BHYT' ELSE 'DV' END AS object_type,")
        _T(" 	hfe_desc AS feename, ")
        _T(" 	sum(hpcl_qty) AS qty, ")
        _T(" 	SUM(hfe_unitprice * hpcl_qty ")
        _T(") AS totalprice ")
        _T(" 	FROM hms_pacsorder ")
        _T(" 	LEFT JOIN hms_pacsorderline ON(hpc_docno = hpcl_docno AND ")
        _T("hpc_orderid = hpcl_orderid) ")
        _T("  LEFT JOIN hms_fee ON(hfe_itemid = hpcl_itemid and hfe_docno = ")
        _T("hpc_docno) ")
        //_T(" 	LEFT JOIN hms_doc ON(hd_docno = hpc_docno) ")
        _T(" 	WHERE hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') ")
        _T(" 	AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T(" 	AND hpc_status = 'T' ")
        _T(" 	AND hpc_pdeptid = 'B10' %s")
        _T(" 	GROUP BY hpcl_itemid, hfe_desc, hpc_object ")
        _T(" 	UNION ALL ")
        _T(" 	SELECT ")
        _T(" 	hpcl_itemid AS itemid, CASE WHEN hpc_object IN (2, 4, 5, 9, ")
        _T("10, 11, 12) THEN 'BHYT' ELSE 'DV' END AS object_type,")
        _T(" 	hfe_desc AS feename, ")
        _T(" 	sum(hpcl_qty) AS qty, ")
        _T(" 	SUM(hfe_unitprice * hpcl_qty ")
        _T(") AS totalprice ")
        _T(" 	FROM hms_testorder ")
        _T(" 	LEFT JOIN hms_testorderline ON(hpcl_docno = hpc_docno AND ")
        _T("hpc_orderid = hpcl_orderid) ")
        _T("  LEFT JOIN hms_fee ON(hfe_itemid = hpcl_itemid and hfe_docno = ")
        _T("hpc_docno) ")
        //_T(" 	LEFT JOIN hms_doc ON(hd_docno = hpc_docno) ")
        _T(" 	WHERE hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') ")
        _T(" 	AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T(" 	AND hpc_status = 'T' ")
        _T(" 	AND hpc_pdeptid = 'B10' %s")
        _T(" 	GROUP BY hpcl_itemid, hfe_desc, hpc_object ")
        _T(" ), ")
        _T(" total_sum AS(SELECT SUM(totalPrice) AS grand_total FROM ")
        _T("fee_data)  ")
        _T(" SELECT f.itemid, f.feename,  f.object_type, f.qty, f.totalPrice, ")
        _T(" ")
        _T(" ROUND(f.totalPrice / t.grand_total * 100, 3) AS ratio_percent  ")
        _T(" FROM fee_data f, total_sum t  ")
        _T(" ORDER BY f.totalPrice DESC "),
        m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate,
        m_szToDate);
	if(!szWhere.IsEmpty())
		szSQL += szWhere;
    _tprintf(L"\r\n 1 : %s", szSQL);
	return szSQL;
}

CString CTMProcStatsReportB10::GetQueryString2()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL, szWhere;
    szSQL.Format(
        _T(" WITH fee_data AS(  ")
        _T(" 	SELECT ")
        _T(" 	hpcl_itemid AS itemid,")
        _T(" 	hfl_name AS feename, CASE WHEN hd_object IN (2, 4, 5, 9, 10, ")
        _T("11, 12) THEN 'BHYT' ELSE 'DV' END AS object_type,")
        _T(" 	SUM(hpcl_qty) AS qty, ")
        _T(" 	SUM(CASE  WHEN hd_object IN (2, 4, 5, 9, 10, 11, 12) THEN ")
        _T("NVL(hfl_insprice, 0)  ELSE NVL(hfl_servprice, 0)  END * ho_qty ) ")
        _T("AS totalprice ")
        _T(" 	FROM hms_testorder ")
        _T(" 	LEFT JOIN hms_testorderline ON(hpc_docno = hpcl_docno AND ")
        _T("hpc_orderid = hpcl_orderid) ")
        _T(" 	LEFT JOIN hms_fee_list ON(hfl_feeid = hpcl_itemid) ")
        _T(" 	LEFT JOIN hms_doc ON(hd_docno = hpc_docno) ")
        _T(" 	WHERE hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') ")
        _T(" 	AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T(" 	AND hpc_status = 'T' ")
        _T(" 	AND hpc_deptid = 'C1.1' and hpc_roomid = 52 ")
        _T(" 	GROUP BY hpcl_itemid, hfl_name, CASE WHEN hd_object IN (2, 4, ")
        _T("5, 9, 10, 11, 12) THEN 'BHYT' ELSE 'DV' END ")
        _T(" 	UNION ALL ")
        _T(" 	SELECT  ")
        _T(" 	hpcl_itemid || ' C1.1' AS itemid,  hpc_deptid")
        _T(" 	hfl_name AS feename,  CASE WHEN hd_object IN (2, 4, 5, 9, 10, ")
        _T("11, 12) THEN 'BHYT' ELSE 'DV' END AS object_type,")
        _T(" 	SUM(hpcl_qty) AS qty,  ")
        _T(" 	SUM(CASE  WHEN hd_object IN (2, 4, 5, 9, 10, 11, 12) THEN ")
        _T("NVL(hfl_insprice, 0)  ELSE NVL(hfl_servprice, 0)  END * ho_qty ) ")
        _T("AS totalprice  ")
        _T(" 	FROM hms_pacsorder  ")
        _T(" 	LEFT JOIN hms_pacsorderline ON(hpc_docno = hpcl_docno AND ")
        _T("hpc_orderid = hpcl_orderid)  ")
        _T(" 	LEFT JOIN hms_fee_list ON(hfl_feeid = hpcl_itemid)  ")
        _T(" 	LEFT JOIN hms_doc ON(hd_docno = hpc_docno) ")
        _T(" 	WHERE  hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss')  AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T(" 	AND hpc_status = 'T' ")
        _T(" 	AND hpc_deptid = 'C1.1' and hpc_roomid = 52 ")
        _T(" 	GROUP BY hpcl_itemid, hfl_name, CASE WHEN hd_object IN (2, 4, ")
        _T("5, 9, 10, 11, 12) THEN 'BHYT' ELSE 'DV' END ")
        _T(" ), ")
        _T(" total_sum AS(SELECT SUM(totalPrice) AS grand_total FROM ")
        _T("fee_data)  ")
        _T(" SELECT f.itemid, f.feename,  f.object_type,f.qty, f.totalPrice,  ")
        _T(" ROUND(f.totalPrice / t.grand_total * 100, 3) AS ratio_percent  ")
        _T(" FROM fee_data f, total_sum t  ")
        _T(" ORDER BY f.totalPrice DESC "),
        m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate,
        m_szToDate, m_szFromDate, m_szToDate);
    if (!szWhere.IsEmpty())
        szSQL += szWhere;
    return szSQL;
}

CString CTMProcStatsReportB10::GetQueryString3()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL, szWhere, szWhere1;

    if (m_bC11)
    {
        szWhere.Format(_T(" AND ho_object IN (2, 4, 5, 9, 10, 11, 12)  "));
        szWhere1.Format(_T(" AND hpc_object IN (2, 4, 5, 9, 10, 11, 12) "));
    }
    else
    {
        szWhere.Format(_T(" AND ho_object NOT IN (2, 4, 5, 9, 10, 11, 12)  "));
        szWhere1.Format(_T(" AND hpc_object NOT IN (2, 4, 5, 9, 10, 11, 12) "));
    }

    szSQL.Format(
        _T("WITH fee_data AS( ")
        _T("  SELECT ho_docno AS docno, get_patientname(ho_docno) AS pname, ")
        _T("get_objectname(ho_object) as oname,")
        _T("         ho_itemid AS itemid, hfe_desc AS feename, ")
        _T("         get_username(ho_practitioner) AS practitioner, ")
        _T("         ")
        _T("         (SELECT LISTAGG(get_username(opu_userid), ', ') WITHIN ")
        _T("GROUP (ORDER BY opu_userid) ")
        _T("          FROM hms_operation_user_setup ")
        _T("          WHERE opu_operation_id = ho_idx AND opu_type = 'PM') AS ")
        _T("assistant, ")
        _T("         ")
        _T("         (SELECT LISTAGG(get_username(opu_userid), ', ') WITHIN ")
        _T("GROUP (ORDER BY opu_userid) ")
        _T("          FROM hms_operation_user_setup ")
        _T("          WHERE opu_operation_id = ho_idx AND opu_type = 'GV') AS ")
        _T("helper, ")
        _T("         ")
        _T("         trunc(ho_performdate) AS ngaythuchien, ")
        _T(" CASE WHEN ho_object IN (2, 4, 5, 9, 10, 11, 12) THEN 'BHYT' ELSE ")
        _T("'DV' END AS object_type, ")
        _T("         ho_qty AS qty, hfe_unitprice  AS price ")
        _T("  FROM hms_operation ")
        _T("  LEFT JOIN hms_fee ON (hfe_orderid = ho_idx and hfe_docno = ")
        _T("ho_docno) ")
        _T("  WHERE ho_performdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') ")
        _T("    AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T("    AND ho_status = 'T' AND ho_pdeptid = 'B10' %s ")
        _T("  GROUP BY ho_docno, ho_object, ho_itemid, hfe_desc, ")
        _T("ho_practitioner, ho_performdate, ho_object, ho_qty, ")
        _T("hfe_unitprice, ho_idx ")
        _T("  UNION ALL ")
        _T("  SELECT hpc_docno AS docno, get_patientname(hpc_docno) AS pname, ")
        _T("get_objectname(hpc_object) as oname,")
        _T("         hpcl_itemid AS itemid, hfe_desc AS feename, ")
        _T("         get_username(hpc_practitioner) AS practitioner, ")
        _T("         ")
        _T("         (SELECT LISTAGG(get_username(opu_userid), ', ') WITHIN ")
        _T("GROUP (ORDER BY opu_userid) ")
        _T("          FROM hms_operation_user_setup ")
        _T("          WHERE opu_operation_id = hpcl_orderlineid AND opu_type ")
        _T("= 'PM') AS assistant, ")
        _T("         ")
        _T("         (SELECT LISTAGG(get_username(opu_userid), ', ') WITHIN ")
        _T("GROUP (ORDER BY opu_userid) ")
        _T("          FROM hms_operation_user_setup ")
        _T("          WHERE opu_operation_id = hpcl_orderlineid AND opu_type ")
        _T("= 'GV') AS helper, ")
        _T("         ")
        _T("         trunc(hpc_performdate) AS ngaythuchien, ")
        _T(" CASE WHEN hpc_object IN (2, 4, 5, 9, 10, 11, 12) THEN 'BHYT' ")
        _T("ELSE 'DV' END AS object_type, ")
        _T("         hpcl_qty AS qty, hfe_unitprice AS price ")
        _T("  FROM hms_pacsorder ")
        _T("  LEFT JOIN hms_pacsorderline ON(hpc_docno = hpcl_docno AND ")
        _T("hpc_orderid = hpcl_orderid) ")
        _T("  LEFT JOIN hms_fee ON(hfe_orderid = hpc_orderid and hfe_itemid = ")
        _T("hpcl_itemid AND hfe_docno = hpcl_docno) ")
        _T("  WHERE hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') ")
        _T("    AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T("    AND hpc_status = 'T' AND hpc_pdeptid = 'B10' %s ")
        _T("  GROUP BY hpc_docno, hpc_object, hpcl_itemid, hfe_desc, ")
        _T("hpc_practitioner, hpc_performdate,hpcl_qty,hfe_unitprice, ")
        _T("hpcl_orderlineid ")
        _T("  UNION ALL ")
        _T("  SELECT hpc_docno AS docno, get_patientname(hpc_docno) AS pname, ")
        _T("get_objectname(hpc_object) as oname,")
        _T("         hpcl_itemid AS itemid, hfe_desc AS feename, ")
        _T("         get_username(hpc_practitioner) AS practitioner, ")
        _T("         ")
        _T("         (SELECT LISTAGG(get_username(opu_userid), ', ') WITHIN ")
        _T("GROUP (ORDER BY opu_userid) ")
        _T("          FROM hms_operation_user_setup ")
        _T("          WHERE opu_operation_id = hpcl_orderlineid AND opu_type ")
        _T("= 'PM') AS assistant, ")
        _T("         ")
        _T("         (SELECT LISTAGG(get_username(opu_userid), ', ') WITHIN ")
        _T("GROUP (ORDER BY opu_userid) ")
        _T("          FROM hms_operation_user_setup ")
        _T("          WHERE opu_operation_id = hpcl_orderlineid AND opu_type ")
        _T("= 'GV') AS helper, ")
        _T("         ")
        _T("         trunc(hpc_performdate) AS ngaythuchien, ")
        _T(" CASE WHEN hpc_object IN (2, 4, 5, 9, 10, 11, 12) THEN 'BHYT' ")
        _T("ELSE 'DV' END AS object_type, ")
        _T("         hpcl_qty  AS qty, hfe_unitprice AS price ")
        _T("  FROM hms_testorder ")
        _T("  LEFT JOIN hms_testorderline ON(hpc_docno = hpcl_docno AND ")
        _T("hpc_orderid = hpcl_orderid) ")
        _T("  LEFT JOIN hms_fee ON(hfe_orderid = hpc_orderid and hfe_itemid = ")
        _T("hpcl_itemid and hfe_docno = ")
        _T("hpcl_docno) ")
        _T("  WHERE hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') ")
        _T("    AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') ")
        _T("    AND hpc_status = 'T' AND hpc_pdeptid = 'B10' %s ")
        _T("  GROUP BY hpc_docno, hpc_object, hpcl_itemid, hfe_desc, ")
        _T("hpc_practitioner, hpc_performdate ")
        _T(",hpcl_qty,hfe_unitprice,hpcl_orderlineid ")
        _T(") ")
        _T("SELECT f.docno, f.pname, f.oname, f.practitioner, f.assistant, ")
        _T("f.helper, ")
        _T("       f.ngaythuchien, f.itemid, f.feename, sum(f.qty) as fqty, ")
        _T("sum(f.qty * f.price) as totalprice, ")
        _T("       ROUND(RATIO_TO_REPORT(SUM(f.qty * f.price)) OVER () * 100, ")
        _T("3) AS ratio_percent ")
        _T("FROM fee_data f")
        _T(" GROUP BY f.docno, f.pname, f.oname, ")
        _T("f.practitioner,f.assistant,f.helper,f.ngaythuchien,f.itemid,f.")
        _T("feename ")
        _T("ORDER BY ratio_percent DESC "),
        m_szFromDate, m_szToDate, // cho operation
        m_szFromDate, m_szToDate, // cho pacsorder
        m_szFromDate, m_szToDate  // cho testorder
    );
    _fmsg(L"%s", szSQL);

    return szSQL;
}

void CTMProcStatsReportB10::OnExport1()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();

    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szTemp, szTemp2, szDept;

    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data."));
        return;
    }

    CExcel xls;
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    // Thiết lập độ rộng cột
    xls.SetColumnWidth(0, 50); // Tên PT, TT, CLS
    xls.SetColumnWidth(1, 10); // Số lượng
    xls.SetColumnWidth(2, 20); // Thành tiền
    xls.SetColumnWidth(3, 10); // Tỷ lệ

    // Header trên cùng
    xls.SetCellMergedColumns(0, 0, 4);
    xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    xls.SetCellMergedColumns(0, 1, 4);
    xls.SetCellText(0, 1, _T("Khoa B10 (Răng)"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    xls.SetCellMergedColumns(0, 2, 4);
    xls.SetCellText(0, 2, _T("Danh sách thống kê phẫu thuật thủ thuật"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
                  CDateTime::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDateTime::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellMergedColumns(0, 3, 4);
    xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    // Dòng tiêu đề bảng
    int nRow = 5;
    xls.SetCellText(0, nRow, _T("Tên Phẫu thuật thủ thuật, CLS"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(1, nRow, _T("Số lượng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(2, nRow, _T("Thành tiền"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(3, nRow, _T("Đối tượng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(4, nRow, _T("Tỷ lệ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);

    nRow = 6;
    _fmsg(L"%s", szSQL);
    while (!rs.IsEOF())
    {
        xls.SetCellText(0, nRow, rs.GetValue(_T("feename")),
                        FMT_TEXT | FMT_WRAPING);
        xls.SetCellText(1, nRow, rs.GetValue(_T("fqty")), FMT_NUMBER1);
        xls.SetCellText(2, nRow, rs.GetValue(_T("ftotal")), FMT_NUMBER1);
        xls.SetCellText(3, nRow, rs.GetValue(_T("object_type")), FMT_TEXT);
        xls.SetCellText(4, nRow, rs.GetValue(_T("ratio_percent")), FMT_PERCENT);
        nRow++;
        rs.MoveNext();
    }
    EndWaitCursor();
    xls.Save(_T("Exports\\TMProcStatsReportB10.xls"));
}

void CTMProcStatsReportB10::OnExport2()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szTemp, szTemp2, szDept;

    szSQL = GetQueryString2();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data."));
        return;
    }
    CExcel xls;
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    // Thiết lập độ rộng cột
    xls.SetColumnWidth(0, 50); // Tên PT, TT, CLS
    xls.SetColumnWidth(1, 10); // Số lượng
    xls.SetColumnWidth(2, 20); // Thành tiền
    xls.SetColumnWidth(3, 10); // Tỷ lệ

    // Header trên cùng
    xls.SetCellMergedColumns(0, 0, 4);
    xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    xls.SetCellMergedColumns(0, 1, 4);
    xls.SetCellText(0, 1, _T("Khoa B10 (Răng)"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    xls.SetCellMergedColumns(0, 2, 4);
    xls.SetCellText(0, 2, _T("Danh sách thống kê phẫu thuật thủ thuật"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
                  CDateTime::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDateTime::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellMergedColumns(0, 3, 4);
    xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    // Dòng tiêu đề bảng
    int nRow = 5;
    xls.SetCellText(0, nRow, _T("Tên Phẫu thuật thủ thuật, CLS"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(1, nRow, _T("Số lượng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(2, nRow, _T("Thành tiền"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(3, nRow, _T("Tỷ lệ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);

    nRow = 6;
    _fmsg(L"%s", szSQL);
    while (!rs.IsEOF())
    {
        xls.SetCellText(0, nRow, rs.GetValue(_T("feename")),
                        FMT_TEXT | FMT_WRAPING);
        xls.SetCellText(1, nRow, rs.GetValue(_T("qty")), FMT_NUMBER1);
        xls.SetCellText(2, nRow, rs.GetValue(_T("totalPrice")), FMT_NUMBER1);
        xls.SetCellText(3, nRow, rs.GetValue(_T("ratio_percent")), FMT_PERCENT);
        nRow++;
        rs.MoveNext();
    }
    EndWaitCursor();
    xls.Save(_T("Exports\\TMProcStatsReportB10_C11.xls"));
}

void CTMProcStatsReportB10::OnExport3()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szTemp, szTemp2, szDept;

    szSQL = GetQueryString3();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data."));
        return;
    }

    CExcel xls;
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    // Thiết lập độ rộng cột
    xls.SetColumnWidth(0, 12);  // Số hồ sơ
    xls.SetColumnWidth(1, 25);  // Tên bệnh nhân
    xls.SetColumnWidth(2, 15);  // Đói tượng
    xls.SetColumnWidth(3, 20);  // Bác sĩ chính
    xls.SetColumnWidth(4, 20);  // Phụ mổ
    xls.SetColumnWidth(5, 20);  // Giúp việc
    xls.SetColumnWidth(6, 12);  // Ngày thực hiện
    xls.SetColumnWidth(7, 50);  // Tên PT, TT, CLS
    xls.SetColumnWidth(8, 10);  // Số lượng
    xls.SetColumnWidth(9, 20);  // Thành tiền
    xls.SetColumnWidth(10, 10); // Tỷ lệ

    // Header trên cùng
    xls.SetCellMergedColumns(0, 0, 10);
    xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    xls.SetCellMergedColumns(0, 1, 10);
    xls.SetCellText(0, 1, _T("Khoa B10 (Răng)"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    xls.SetCellMergedColumns(0, 2, 10);
    xls.SetCellText(0, 2,
                    _T("Danh sách chi tiết thống kê phẫu thuật thủ thuật"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
                  CDateTime::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDateTime::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellMergedColumns(0, 3, 10);
    xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

    // Dòng tiêu đề bảng
    int nRow = 5;
    xls.SetCellText(0, nRow, _T("Số hồ sơ"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(1, nRow, _T("Tên bệnh nhân"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(2, nRow, _T("Đối tượng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(3, nRow, _T("Bác sĩ chính"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(4, nRow, _T("Phụ mổ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(5, nRow, _T("Giúp việc"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, nRow, _T("Ngày thực hiện"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(7, nRow, _T("Tên Phẫu thuật thủ thuật, CLS"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(8, nRow, _T("Số lượng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(9, nRow, _T("Thành tiền"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(10, nRow, _T("Tỷ lệ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);

    nRow = 6;
    _fmsg(L"%s", szSQL);
    while (!rs.IsEOF())
    {
        xls.SetCellText(0, nRow, rs.GetValue(_T("docno")),
                        FMT_TEXT | FMT_WRAPING);
        xls.SetCellText(1, nRow, rs.GetValue(_T("pname")),
                        FMT_TEXT | FMT_WRAPING);
        xls.SetCellText(2, nRow, rs.GetValue(_T("oname")),
                        FMT_TEXT | FMT_WRAPING);
        xls.SetCellText(3, nRow, rs.GetValue(_T("practitioner")),
                        FMT_TEXT | FMT_WRAPING);
        xls.SetCellText(4, nRow, rs.GetValue(_T("assistant")),
                        FMT_TEXT | FMT_WRAPING);
        xls.SetCellText(5, nRow, rs.GetValue(_T("helper")),
                        FMT_TEXT | FMT_WRAPING);

        // Chuyển đổi ngày từ database format sang display format
        CString szNgayThucHien = rs.GetValue(_T("ngaythuchien"));
        if (!szNgayThucHien.IsEmpty())
        {
            szNgayThucHien =
                CDateTime::Convert(szNgayThucHien, yyyymmdd, ddmmyyyy);
        }
        xls.SetCellText(6, nRow, szNgayThucHien, FMT_TEXT | FMT_WRAPING);

        xls.SetCellText(7, nRow, rs.GetValue(_T("feename")),
                        FMT_TEXT | FMT_WRAPING);
        xls.SetCellText(8, nRow, rs.GetValue(_T("fqty")), FMT_NUMBER1);
        xls.SetCellText(9, nRow, rs.GetValue(_T("totalPrice")), FMT_NUMBER1);
        xls.SetCellText(10, nRow, rs.GetValue(_T("ratio_percent")),
                        FMT_PERCENT);

        nRow++;
        rs.MoveNext();
    }

    EndWaitCursor();
    xls.Save(_T("Exports\\TMProcStatsReportB10_Detail.xls"));
}