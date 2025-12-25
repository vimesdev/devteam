#include "stdafx.h"
#include "EMDanhsachBNdoHA.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnYearSetfocus();} */
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnYearCheckValue();
}
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                           int nNewItemSel)
{
    ((CEMDanhsachBNdoHA *)pWnd)
        ->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
    ((CEMDanhsachBNdoHA *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnToDateCheckValue();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CEMDanhsachBNdoHA *pVw = (CEMDanhsachBNdoHA *)pWnd;
    pVw->OnExportSelect();
}
static void _OnZoneSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    ((CEMDanhsachBNdoHA *)pWnd)->OnZoneSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnZoneSelendokFnc(CWnd *pWnd)
{
    ((CEMDanhsachBNdoHA *)pWnd)->OnZoneSelendok();
}
/*static void _OnZoneSetfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnZoneKillfocus();
}*/
/*static void _OnZoneKillfocusFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnZoneKillfocus();
}*/
static long _OnZoneLoadDataFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnZoneLoadData();
}
/*static void _OnZoneAddNewFnc(CWnd *pWnd){
    ((CEMDanhsachBNdoHA *)pWnd)->OnZoneAddNew();
}*/
static int _OnAddEMDanhsachBNdoHAFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnAddEMDanhsachBNdoHA();
}
static int _OnEditEMDanhsachBNdoHAFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnEditEMDanhsachBNdoHA();
}
static int _OnDeleteEMDanhsachBNdoHAFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnDeleteEMDanhsachBNdoHA();
}
static int _OnSaveEMDanhsachBNdoHAFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnSaveEMDanhsachBNdoHA();
}
static int _OnCancelEMDanhsachBNdoHAFnc(CWnd *pWnd)
{
    return ((CEMDanhsachBNdoHA *)pWnd)->OnCancelEMDanhsachBNdoHA();
}
CEMDanhsachBNdoHA::CEMDanhsachBNdoHA(CWnd *pParent)
{

    m_nDlgWidth = 1029;
    m_nDlgHeight = 773;
    SetDefaultValues();
}
CEMDanhsachBNdoHA::~CEMDanhsachBNdoHA() {}
void CEMDanhsachBNdoHA::OnCreateComponents()
{
    m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 510, 120);
    m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
    m_wndYear.Create(this, 105, 30, 255, 55);
    m_wndReportPeriodLabel.Create(this, _T("Report Period"), 260, 30, 350, 55);
    m_wndReportPeriod.Create(this, 355, 30, 505, 55);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
    m_wndFromDate.Create(this, 105, 60, 255, 85);
    m_wndToDateLabel.Create(this, _T("To Date"), 260, 60, 350, 85);
    m_wndToDate.Create(this, 355, 60, 505, 85);
    m_wndExport.Create(this, _T("&Export"), 410, 125, 510, 150);
    m_wndZoneLabel.Create(this, _T("Zone"), 10, 90, 100, 115);
    m_wndZone.Create(this, 105, 90, 505, 115);
}
void CEMDanhsachBNdoHA::OnInitializeComponents()
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

    m_wndZone.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndZone.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
    m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void CEMDanhsachBNdoHA::OnSetWindowEvents()
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
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    m_wndZone.SetEvent(WE_SELENDOK, _OnZoneSelendokFnc);
    // m_wndZone.SetEvent(WE_SETFOCUS, _OnZoneSetfocusFnc);
    // m_wndZone.SetEvent(WE_KILLFOCUS, _OnZoneKillfocusFnc);
    m_wndZone.SetEvent(WE_SELCHANGE, _OnZoneSelectChangeFnc);
    m_wndZone.SetEvent(WE_LOADDATA, _OnZoneLoadDataFnc);
    // m_wndZone.SetEvent(WE_ADDNEW, _OnZoneAddNewFnc);
    SetMode(VM_ADD);
}
void CEMDanhsachBNdoHA::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
    DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);
}
void CEMDanhsachBNdoHA::UpdateJson(BOOL bSave)
{
    if (bSave)
    {

        m_jData[_T("Year")] = m_nYear;
        m_jData[_T("ReportPeriod")] = m_szReportPeriodKey;
        m_jData[_T("FromDate")] = m_szFromDate;
        m_jData[_T("ToDate")] = m_szToDate;
        m_jData[_T("Zone")] = m_szZoneKey;
    }
    else
    {

        m_jData[_T("Year")].GetValue(m_nYear);
        m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
        m_jData[_T("FromDate")].GetValue(m_szFromDate);
        m_jData[_T("ToDate")].GetValue(m_szToDate);
        m_jData[_T("Zone")].GetValue(m_szZoneKey);
    }
}
void CEMDanhsachBNdoHA::GetDataToScreen()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT * FROM "));
    rs.ExecSQL(szSQL);
}
void CEMDanhsachBNdoHA::GetScreenToData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CEMDanhsachBNdoHA::SetDefaultValues()
{

    m_nYear = 0;
    m_szReportPeriodKey.Empty();
    m_szFromDate.Empty();
    m_szToDate.Empty();
    m_szZoneKey.Empty();
}
int CEMDanhsachBNdoHA::SetMode(int nMode)
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
/*void CEMDanhsachBNdoHA::OnYearChange(){

} */
/*void CEMDanhsachBNdoHA::OnYearSetfocus(){

} */
/*void CEMDanhsachBNdoHA::OnYearKillfocus(){

} */
int CEMDanhsachBNdoHA::OnYearCheckValue()
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
void CEMDanhsachBNdoHA::OnReportPeriodSelectChange(int nOldItemSel,
                                                   int nNewItemSel)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CEMDanhsachBNdoHA::OnReportPeriodSelendok()
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
/*void CEMDanhsachBNdoHA::OnReportPeriodSetfocus(){

}*/
/*void CEMDanhsachBNdoHA::OnReportPeriodKillfocus(){

}*/
long CEMDanhsachBNdoHA::OnReportPeriodLoadData()
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
/*void CEMDanhsachBNdoHA::OnReportPeriodAddNew(){
    CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
/*void CEMDanhsachBNdoHA::OnFromDateChange(){

} */
/*void CEMDanhsachBNdoHA::OnFromDateSetfocus(){

} */
/*void CEMDanhsachBNdoHA::OnFromDateKillfocus(){

} */
int CEMDanhsachBNdoHA::OnFromDateCheckValue() { return 0; }
/*void CEMDanhsachBNdoHA::OnToDateChange(){

} */
/*void CEMDanhsachBNdoHA::OnToDateSetfocus(){

} */
/*void CEMDanhsachBNdoHA::OnToDateKillfocus(){

} */
int CEMDanhsachBNdoHA::OnToDateCheckValue() { return 0; }
void CEMDanhsachBNdoHA::OnExportSelect()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    UpdateData(true);

    // Validate input
    if (m_szFromDate.IsEmpty() || m_szToDate.IsEmpty())
    {
        ShowMessageBox(_T("Vui lòng chọn khoảng thời gian từ ngày đến ngày"),
                       MB_ICONWARNING);
        return;
    }

    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr;

    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);

    if (rs.IsEOF())
    {
        EndWaitCursor();
        AfxMessageBox(_T("Không có dữ liệu!"));
        return;
    }

    // Create Excel file
    CExcel xls;
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    // Set column widths
    xls.SetColumnWidth(0, 8);  // STT
    xls.SetColumnWidth(1, 25); // Khoa
    xls.SetColumnWidth(2, 25);
    xls.SetColumnWidth(3, 25); // TÃªn BS
    xls.SetColumnWidth(4, 25); // Tá»•ng khÃ¡m
    xls.SetColumnWidth(5, 25); // Tá»•ng sá»‘ BN Ä‘o huyáº¿t Ã¡p
    xls.SetColumnWidth(6, 25); // Tá»•ng sá»‘ BN Ä‘o cÃ¢n náº·ng
    xls.SetColumnWidth(7, 25); // Tá»•ng sá»‘ BN Ä‘o nhiá»‡t Ä‘á»™

    // Header
    xls.SetCellMergedColumns(0, 0, 5);
    xls.SetCellText(0, 0, _T("BỆNH VIÊN TRUNG ƯƠNG QUÂN ĐỘI 108"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);

    xls.SetCellMergedColumns(0, 1, 5);
    xls.SetCellText(0, 1, _T("THỐNG KÊ BỆNH NHÂN ĐO CÁC CHỈ SỐ THEO KHOA"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);

    tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
                  CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy),
                  CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy));
    xls.SetCellMergedColumns(0, 2, 5);
    xls.SetCellText(0, 2, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    12);

    // Column headers
    int nRow = 4;
    xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(1, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(2, nRow, _T("Phòng khám"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    xls.SetCellText(3, nRow, _T("Họ tên bác sĩ"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 15);
    xls.SetCellText(4, nRow, _T("Tổng số bệnh nhân đã khám"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(5, nRow, _T("Tổng số bệnh nhân được đo huyết áp"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, nRow, _T("Tổng số bệnh nhân được đo cân nặng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(7, nRow, _T("Tổng số bệnh nhân được đo nhiệt độ"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    // Data rows
    nRow = 5;
    int nSTT = 1;
    int nTotalBloodPressure = 0, nTotalWeight = 0, nTotalTemperature = 0,
        nTotalExamed = 0;

    while (!rs.IsEOF())
    {
        xls.SetCellText(0, nRow, int2str(nSTT++), FMT_NUMBER1 | FMT_CENTER);
        xls.SetCellText(1, nRow, rs.GetValue(_T("dept_name")), FMT_TEXT);
        xls.SetCellText(2, nRow, rs.GetValue(_T("roomname")), FMT_TEXT);
        xls.SetCellText(3, nRow, rs.GetValue(_T("doctor")), FMT_TEXT);

        int nExamed = str2int(rs.GetValue(_T("totalBN")));
        int nBP = str2int(rs.GetValue(_T("total_blood_pressure")));
        int nWeight = str2int(rs.GetValue(_T("total_weight")));
        int nTemp = str2int(rs.GetValue(_T("total_temperature")));

        xls.SetCellText(4, nRow, int2str(nExamed), FMT_NUMBER1 | FMT_CENTER);
        xls.SetCellText(5, nRow, int2str(nBP), FMT_NUMBER1 | FMT_CENTER);
        xls.SetCellText(6, nRow, int2str(nWeight), FMT_NUMBER1 | FMT_CENTER);
        xls.SetCellText(7, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

        // Accumulate totals
        nTotalExamed += nExamed;
        nTotalBloodPressure += nBP;
        nTotalWeight += nWeight;
        nTotalTemperature += nTemp;

        nRow++;
        rs.MoveNext();
    }

    // Add total row
    xls.SetCellText(0, nRow, _T(""), FMT_TEXT);
    xls.SetCellText(1, nRow, _T("Tổng cộng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    xls.SetCellText(4, nRow, int2str(nTotalExamed),
                    FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(5, nRow, int2str(nTotalBloodPressure),
                    FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, nRow, int2str(nTotalWeight),
                    FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(7, nRow, int2str(nTotalTemperature),
                    FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, true, 11);
    EndWaitCursor();

    xls.Save(_T("Exports\\DanhSachBenhNhanDaDoHA.xls"));
}
void CEMDanhsachBNdoHA::OnZoneSelectChange(int nOldItemSel, int nNewItemSel)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CEMDanhsachBNdoHA::OnZoneSelendok() {}
/*void CEMDanhsachBNdoHA::OnZoneSetfocus(){

}*/
/*void CEMDanhsachBNdoHA::OnZoneKillfocus(){

}*/
long CEMDanhsachBNdoHA::OnZoneLoadData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndZone.IsSearchKey() && !m_szZoneKey.IsEmpty())
    {
        szWhere.Format(_T(" and sd_id='%s' "), m_szZoneKey);
    };
    m_wndZone.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE ")
                 _T("sd_isactive = 'Y'  and sd_type = 'KB' %s ")
                 _T("ORDER BY sd_id "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndZone.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                           NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CEMDanhsachBNdoHA::OnZoneAddNew(){
    CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
int CEMDanhsachBNdoHA::OnAddEMDanhsachBNdoHA()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CEMDanhsachBNdoHA::OnEditEMDanhsachBNdoHA()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CEMDanhsachBNdoHA::OnDeleteEMDanhsachBNdoHA()
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
        OnCancelEMDanhsachBNdoHA();
    }
    return 0;
}
int CEMDanhsachBNdoHA::OnSaveEMDanhsachBNdoHA()
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
        // OnEMDanhsachBNdoHAListLoadData();
        SetMode(VM_VIEW);
    }
    else
    {
    }
    return ret;
    return 0;
}
int CEMDanhsachBNdoHA::OnCancelEMDanhsachBNdoHA()
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
int CEMDanhsachBNdoHA::OnEMDanhsachBNdoHAListLoadData() { return 0; }

CString CEMDanhsachBNdoHA::GetQueryString()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL, szWhere, szDept;
    szWhere.Empty();
    if (!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
    {
        szWhere.AppendFormat(
            _T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd ")
            _T("hh24:mi:ss') ")
            _T(" AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') "),
            m_szFromDate, m_szToDate);
    }

    // Add zone filter if selected
    if (!m_szZoneKey.IsEmpty())
    {
        szDept.AppendFormat(_T(" AND he_deptid = '%s' "), m_szZoneKey);
    }

    // SQL query to get patients with minimum HE_RECEPTIDX per patient
    szSQL.Format(
        _T("WITH min_recept AS ( ")
        _T("  SELECT he_patientno, he_deptid, MIN(he_receptidx) as ")
        _T("min_receptidx ")
        _T("  FROM hms_exam ")
        _T("  WHERE 1=1 %s ")
        _T("  GROUP BY he_patientno, he_deptid ")
        _T("), ")
        _T("exam_summary AS ( ")
        _T("  SELECT e.he_deptid, e.he_roomid,")
        _T("         (SELECT sd_name FROM sys_dept WHERE sd_id = e.he_deptid) ")
        _T(" as dept_name, ")
        _T(" (SELECT hrl_name FROM hms_roomlist WHERE hrl_deptid = ")
        _T("e.he_deptid and hrl_id = e.he_roomid) ")
        _T(" as roomname, ")
        _T("  get_username(e.he_doctor) as doctor, ")
        _T(" count(distinct case when e.he_status = 'T' then e.he_patientno ")
        _T("END) as totalBN, ")
        _T("         COUNT(DISTINCT CASE WHEN e.he_bloodpressure IS NOT NULL ")
        _T("AND e.he_bloodpressure > 0 ")
        _T("                             THEN e.he_patientno END) as ")
        _T("total_blood_pressure, ")
        _T("         COUNT(DISTINCT CASE WHEN e.he_weight IS NOT NULL AND ")
        _T("e.he_weight > 0 ")
        _T("                             THEN e.he_patientno END) as ")
        _T("total_weight, ")
        _T("         COUNT(DISTINCT CASE WHEN e.he_temperature IS NOT NULL ")
        _T("AND e.he_temperature > 0 ")
        _T("                             THEN e.he_patientno END) as ")
        _T("total_temperature ")
        _T("  FROM hms_exam e ")
        _T("  INNER JOIN min_recept mr ON e.he_patientno = mr.he_patientno ")
        _T("                            AND e.he_deptid = mr.he_deptid ")
        _T("                            AND e.he_receptidx = mr.min_receptidx ")
        _T("  WHERE 1=1 %s ")
        _T("  GROUP BY e.he_deptid, e.he_roomid, e.he_doctor ")
        _T(") ")
        _T("SELECT he_deptid, dept_name, roomname, doctor, totalBN, ")
        _T("total_blood_pressure, total_weight, ")
        _T("total_temperature ")
        _T("FROM exam_summary LEFT JOIN sys_dept ON (sd_id = he_deptid)")
        _T("WHERE dept_name IS NOT NULL  and sd_type = 'KB' and sd_isactive = ")
        _T("'Y' %s")
        _T("ORDER BY he_deptid, roomname, doctor"),
        szWhere, szWhere, szDept);
    _tprintf(L"%s", szSQL);
    return szSQL;
}
