#include "PACSOperationList.h"
#include "../PACS/UPDATEPTTT.h"
#include "Excel.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "stdafx.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnYearSetfocus();} */
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnYearCheckValue();
}
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                           int nNewItemSel)
{
    ((CPACSOperationList *)pWnd)
        ->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
    ((CPACSOperationList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnToDateCheckValue();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    ((CPACSOperationList *)pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDeptSelendokFnc(CWnd *pWnd)
{
    ((CPACSOperationList *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnDeptAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    ((CPACSOperationList *)pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTypeSelendokFnc(CWnd *pWnd)
{
    ((CPACSOperationList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
    ((CPACSOperationList *)pWnd)->OnTypeAddNew();
}*/
static void _OnInsuranceSelectFnc(CWnd *pWnd)
{
    ((CPACSOperationList *)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd)
{
    ((CPACSOperationList *)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd)
{
    ((CPACSOperationList *)pWnd)->OnPolicySelect();
}
static void _OnAllSelectFnc(CWnd *pWnd)
{
    ((CPACSOperationList *)pWnd)->OnAllSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CPACSOperationList *pVw = (CPACSOperationList *)pWnd;
    pVw->OnExportSelect();
}
static void _OnClassifySelectFnc(CWnd *pWnd)
{
    CPACSOperationList *pVw = (CPACSOperationList *)pWnd;
    pVw->OnClassifySelect();
}
static int _OnAddPACSOperationListFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnAddPACSOperationList();
}
static int _OnEditPACSOperationListFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnEditPACSOperationList();
}
static int _OnDeletePACSOperationListFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnDeletePACSOperationList();
}
static int _OnSavePACSOperationListFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnSavePACSOperationList();
}
static int _OnCancelPACSOperationListFnc(CWnd *pWnd)
{
    return ((CPACSOperationList *)pWnd)->OnCancelPACSOperationList();
}
CPACSOperationList::CPACSOperationList(CWnd *pParent)
{

    m_nDlgWidth = 1029;
    m_nDlgHeight = 773;
    SetDefaultValues();
}
CPACSOperationList::~CPACSOperationList() {}
void CPACSOperationList::OnCreateComponents()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 460, 150);
    m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
    m_wndYear.Create(this, 105, 30, 230, 55);
    m_wndReportPeriodLabel.Create(this, _T("Report Period"), 235, 30, 325, 55);
    m_wndReportPeriod.Create(this, 330, 30, 455, 55);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
    m_wndFromDate.Create(this, 105, 60, 230, 85);
    m_wndToDateLabel.Create(this, _T("To Date"), 235, 60, 325, 85);
    m_wndToDate.Create(this, 330, 60, 455, 85);
    m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 100, 115);
    m_wndDept.Create(this, 105, 90, 455, 115);
    m_wndTypeLabel.Create(this, _T("Type"), 10, 120, 100, 145);
    m_wndType.SetCheckBox(TRUE);
    m_wndType.Create(this, 105, 120, 455, 145);
    m_wndInsurance.Create(this, _T("Insurance"), 10, 155, 100, 180);
    m_wndService.Create(this, _T("Service"), 105, 155, 195, 180);
    m_wndPolicy.Create(this, _T("Policies"), 200, 155, 280, 180);
    m_wndAll.Create(this, _T("All"), 285, 155, 355, 180);
    m_wndExport.Create(this, _T("&Export"), 360, 155, 460, 180);
}
void CPACSOperationList::OnInitializeComponents()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    m_wndYear.SetLimitText(1024);
    // m_wndYear.SetCheckValue(true);
    // m_wndReportPeriod.SetCheckValue(true);
    m_wndReportPeriod.LimitText(1024);
    // m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndFromDate.SetCheckValue(true);
    // m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndToDate.SetCheckValue(true);
    // m_wndDept.SetCheckValue(true);
    m_wndDept.LimitText(1024);
    // m_wndType.SetCheckValue(true);
    m_wndType.LimitText(35);

    m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

    m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
    m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

    m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
    m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}
void CPACSOperationList::OnSetWindowEvents()
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
    m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
    // m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
    // m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
    m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
    m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
    // m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
    m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
    // m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
    // m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
    m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
    m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
    // m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
    m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
    m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
    m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
    m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    m_wndClassify.SetEvent(WE_CLICK, _OnClassifySelectFnc);
    AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSOperationListFnc, 0, 'A',
             VK_CONTROL);
    AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSOperationListFnc, 0, 'E',
             VK_CONTROL);
    AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSOperationListFnc, 0, 'D',
             VK_CONTROL);
    AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSOperationListFnc, 0, 'S',
             VK_CONTROL);
    AddEvent(0, _T("-"));
    AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSOperationListFnc, 0, 'T',
             VK_CONTROL);
    CString szSysDate;
    szSysDate = pMF->GetSysDate();
    m_nYear = ToInt(szSysDate.Left(4));
    m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
    m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szFromDate += _T(" 00:00");
    m_szToDate += _T(" 23:59");
    UpdateData(FALSE);
}
void CPACSOperationList::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
    DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
    DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
    DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
    DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
    DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
    DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
}
void CPACSOperationList::GetDataToScreen()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT * FROM "));
    rs.ExecSQL(szSQL);
}
void CPACSOperationList::GetScreenToData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CPACSOperationList::SetDefaultValues()
{

    m_nYear = 0;
    m_szReportPeriodKey.Empty();
    m_szFromDate.Empty();
    m_szToDate.Empty();
    m_szDeptKey.Empty();
    m_szTypeKey.Empty();
    m_nInsurance = 1;
    m_nService = 1;
    m_nPolicy = 1;
    m_nAll = 0;
}
int CPACSOperationList::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiView::SetMode(nMode);
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    switch (nMode)
    {
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
/*void CPACSOperationList::OnYearChange(){

} */
/*void CPACSOperationList::OnYearSetfocus(){

} */
/*void CPACSOperationList::OnYearKillfocus(){

} */
int CPACSOperationList::OnYearCheckValue()
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
void CPACSOperationList::OnReportPeriodSelectChange(int nOldItemSel,
                                                    int nNewItemSel)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CPACSOperationList::OnReportPeriodSelendok()
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
/*void CPACSOperationList::OnReportPeriodSetfocus(){

}*/
/*void CPACSOperationList::OnReportPeriodKillfocus(){

}*/
long CPACSOperationList::OnReportPeriodLoadData()
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
/*void CPACSOperationList::OnReportPeriodAddNew(){
    CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
/*void CPACSOperationList::OnFromDateChange(){

} */
/*void CPACSOperationList::OnFromDateSetfocus(){

} */
/*void CPACSOperationList::OnFromDateKillfocus(){

} */
int CPACSOperationList::OnFromDateCheckValue() { return 0; }
/*void CPACSOperationList::OnToDateChange(){

} */
/*void CPACSOperationList::OnToDateSetfocus(){

} */
/*void CPACSOperationList::OnToDateKillfocus(){

} */
int CPACSOperationList::OnToDateCheckValue() { return 0; }
void CPACSOperationList::OnDeptSelectChange(int nOldItemSel, int nNewItemSel)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CPACSOperationList::OnDeptSelendok() {}
/*void CPACSOperationList::OnDeptSetfocus(){

}*/
/*void CPACSOperationList::OnDeptKillfocus(){

}*/
long CPACSOperationList::OnDeptLoadData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
    {
        szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
    }
    m_wndDept.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE ")
                 _T("1=1 %s ORDER BY id "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndDept.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")));
        rs.MoveNext();
    }
    return nCount;
}
/*void CPACSOperationList::OnDeptAddNew(){
    CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
void CPACSOperationList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
}
void CPACSOperationList::OnTypeSelendok() {}
/*void CPACSOperationList::OnTypeSetfocus(){

}*/
/*void CPACSOperationList::OnTypeKillfocus(){

}*/
long CPACSOperationList::OnTypeLoadData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
    {
        szWhere.Format(_T(" and ss_code='%s' "), m_szTypeKey);
    };
    m_wndType.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ")
                 _T("ss_id = 'pacs_line_category' %s ORDER BY ss_code "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndType.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                           NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CPACSOperationList::OnTypeAddNew(){
    CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
void CPACSOperationList::OnInsuranceSelect() {}
void CPACSOperationList::OnServiceSelect() {}
void CPACSOperationList::OnPolicySelect() {}
void CPACSOperationList::OnAllSelect() {}

void CPACSOperationList::OnExportSelect()
{
    OnExport1();
    return;

    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CGuiMenu menu(this);
    CString tmpStr;

    menu.CreatePopupMenu();
    TranslateString(_T("Export UIV"), tmpStr);
    menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    TranslateString(_T("Export CT - MRI"), tmpStr);
    menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
    CRect rect;
    m_wndExport.GetWindowRect(&rect);
    int nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_RIGHTALIGN |
                                       TPM_BOTTOMALIGN | TPM_NONOTIFY,
                                   rect.right, rect.top, this);
    switch (nPos)
    {
    case 1:
        OnExport1();
        break;
    case 2:
        OnExport2();
        break;
    }
}
void CPACSOperationList::OnExport1()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szTemp, szWhere, szTypes, szNewGroup, szOldGroup;
    UpdateData(TRUE);
    BeginWaitCursor();
    szWhere.Empty();
    int nRow = 0, nCol = 0, nIdx = 1, nQty1 = 0, nQty2 = 0, nQty3 = 0;
    double nTotal = 0;
    CExcel xls;
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    xls.SetColumnWidth(0, 6);
    xls.SetColumnWidth(1, 12);
    xls.SetColumnWidth(2, 30);
    xls.SetColumnWidth(3, 15);
    xls.SetColumnWidth(4, 30);
    xls.SetColumnWidth(5, 10);
    xls.SetColumnWidth(6, 10);
    xls.SetColumnWidth(7, 10);
    xls.SetColumnWidth(8, 10);
    xls.SetColumnWidth(9, 20);
    xls.SetColumnWidth(10, 20);
    xls.SetColumnWidth(11, 20);
    xls.SetColumnWidth(12, 10);
    xls.SetColumnWidth(13, 30);

    xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()),
                    FMT_TEXT | FMT_CENTER, true);

    tmpStr.Format(
        _T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
    xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

    if (m_nInsurance == 0)
        szTemp.Format(_T("\x42\x1EA3o hi\x1EC3m"));
    if (m_nService == 0)
        szTemp.Format(_T("\x44\x1ECB\x63h v\x1EE5"));
    if (m_nPolicy == 0)
        szTemp.Format(_T("\x43h\xEDnh s\xE1\x63h"));
    if (m_nAll == 0)
        szTemp.Format(_T("T\x1EA5t \x63\x1EA3"));

    for (int i = 0; i < m_wndType.GetItemCount(); i++)
    {
        if (m_wndType.GetCheck(i))
        {
            m_wndType.SetCurSel(i);
            if (!szTypes.IsEmpty())
                szTypes += _T(", ");
            szTypes += m_wndType.GetCurrent(1);
        }
    }
    tmpStr.Format(_T("\x42\x1EC7nh nh\xE2n: %s %s"), szTemp, szTypes);
    xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

    xls.SetCellText(0, 2,
                    _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA ")
                    _T("\x42\x1ED2I \x44\x1AF\x1EE0NG TH\x1EE6 THU\x1EACT"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
    xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    11);
    xls.SetCellText(1, 5, _T("S\x1ED1 h\x1ED3 s\x1A1"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(2, 5, _T("T\xEAn \x62\x1EC7nh nh\xE2n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(3, 5, _T("M\xE3 th\x1EBB/\x110\x1A1n v\x1ECB"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(4, 5, _T("T\xEAn PT-TT"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(5, 5, _T("Th\x1EE7 thu\x1EADt lo\x1EA1i \x31"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, 0,
                    _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 ")
                    _T("NGH\x128\x41 VI\x1EC6T N\x41M"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(
        6, 1,
        _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"),
        FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, 5, _T("Th\x1EE7 thu\x1EADt lo\x1EA1i \x32"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(7, 5, _T("Thủ thuật loại 3"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(8, 5, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(9, 5, _T("K\xEDp th\x1EF1\x63 hi\x1EC7n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(9, 6, _T("\x43h\xEDnh"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(10, 6, _T("Ph\x1EE5"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(11, 6, _T("Gi\xFAp vi\x1EC7\x63"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(12, 5, _T("S\x1ED1 ti\x1EC1n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(13, 5, _T("T\xEAn PT-TT th\x65o m\xE1y"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    xls.SetMerge(0, 0, 0, 2);
    xls.SetMerge(1, 1, 0, 2);
    xls.SetMerge(2, 2, 0, 12);
    xls.SetMerge(3, 3, 0, 12);
    xls.SetMerge(4, 4, 0, 12);
    xls.SetMerge(5, 6, 0, 0);
    xls.SetMerge(5, 6, 1, 1);
    xls.SetMerge(5, 6, 2, 2);
    xls.SetMerge(5, 6, 3, 3);
    xls.SetMerge(5, 6, 4, 4);
    xls.SetMerge(5, 6, 5, 5);
    xls.SetMerge(0, 0, 6, 12);
    xls.SetMerge(1, 1, 6, 12);
    xls.SetMerge(5, 6, 6, 6);
    xls.SetMerge(5, 6, 8, 8);
    xls.SetMerge(5, 5, 9, 11);
    xls.SetMerge(5, 6, 12, 12);
    xls.SetMerge(5, 6, 13, 13);

    szSQL = GetQuerySring();
    rs.ExecSQL(szSQL);
    nRow = 7;
    nCol = 0;
    double nP1 = 51300, nP2 = 26100, nP3 = 17100;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("pacsname"), szNewGroup);
        if (szNewGroup != szOldGroup)
        {
            xls.SetCellMergedColumns(0, nRow, 12);
            xls.SetCellText(0, nRow, _T(""), FMT_TEXT, true, 11);
            szOldGroup = szNewGroup;
            nIdx = 1;
            nRow++;
        }
        xls.SetCellText(nCol + 0, nRow, int2str(nIdx++), FMT_INTEGER);
        rs.GetValue(_T("docno"), tmpStr);
        xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER);
        rs.GetValue(_T("pname"), tmpStr);
        xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("cardno"), tmpStr);
        xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("pacsname"), tmpStr);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("groupid"), tmpStr);
        if (tmpStr == _T("B51"))
        {
            xls.SetCellText(nCol + 5, nRow, _T("I"), FMT_TEXT);
            nQty1++;
        }
        if (tmpStr == _T("B52"))
        {
            xls.SetCellText(nCol + 6, nRow, _T("II"), FMT_TEXT);
            nQty2++;
        }
        if (tmpStr == _T("B53"))
        {
            xls.SetCellText(nCol + 7, nRow, _T("III"), FMT_TEXT);
            nQty3++;
        }
        rs.GetValue(_T("khoa"), tmpStr);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("practitioner"), tmpStr);
        // tmpStr=GetNameUser(tmpStr);
        xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("assistant"), tmpStr);
        // tmpStr=GetNameUser(tmpStr);
        xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("helper"), tmpStr);
        // tmpStr=GetNameUser(tmpStr);
        xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("amount"), tmpStr);
        nTotal += str2double(tmpStr);
        xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_NUMBER1);
        rs.GetValue(_T("operation_name"), tmpStr);
        xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_TEXT);
        nRow++;
        rs.MoveNext();
    }
    _tprintf(_T("nRow = %d qty2 %d qty3 %d"), nQty1, nQty2, nQty3);
    xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT, true, 11);
    xls.SetCellText(12, nRow, double2str(nTotal), FMT_NUMBER1, true, 11);
    nRow++;

    xls.SetCellText(0, nRow, _T("Lo\x1EA1i"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 2, _T("Lo\x1EA1i \x31"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 3, _T("Lo\x1EA1i \x32"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 4, _T("Lo\x1EA1i \x33"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 5, _T("Cộng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 6,
                    _T("S\x1ED1 ti\x1EC1n \x62\x1EB1ng \x63h\x1EEF: "),
                    FMT_TEXT | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 7, _T("TR\x1AF\x1EDENG PH\xD2NG KHTH"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(2, nRow, _T("\x110\x1A1n gi\xE1"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(2, nRow + 1, _T("Ph\x1EABu thu\x1EADt"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(3, nRow + 1, _T("Th\x1EE7 thu\x1EADt"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(3, nRow + 7, _T("H\xC0NH \x43H\xCDNH TR\x1AF\x1EDENG"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(4, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(4, nRow + 1, _T("Ph\x1EABu thu\x1EADt"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(5, nRow + 1, _T("Th\x1EE7 thu\x1EADt"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(6, nRow, _T("Thành tiền"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    xls.SetCellText(2, nRow + 2, double2str(nP1), FMT_NUMBER1);
    xls.SetCellText(2, nRow + 3, double2str(nP2), FMT_NUMBER1);
    xls.SetCellText(2, nRow + 4, double2str(nP3), FMT_NUMBER1);

    xls.SetCellText(5, nRow + 2, int2str(nQty1), FMT_NUMBER1);
    xls.SetCellText(5, nRow + 3, int2str(nQty2), FMT_NUMBER1);
    xls.SetCellText(5, nRow + 4, int2str(nQty3), FMT_NUMBER1);

    xls.SetCellText(6, nRow + 2, double2str(nQty1 * nP1), FMT_NUMBER1);
    xls.SetCellText(6, nRow + 3, double2str(nQty2 * nP2), FMT_NUMBER1);
    xls.SetCellText(6, nRow + 4, double2str(nQty3 * nP3), FMT_NUMBER1);
    xls.SetCellText(6, nRow + 5,
                    double2str((nQty3 * nP3) + (nQty2 * nP2) + (nQty1 * nP1)),
                    FMT_NUMBER1);

    CString szMoney;
    szMoney.Format(_T("%.2f"), (nQty3 * nP3) + (nQty2 * nP2) + (nQty1 * nP1));
    MoneyToString(szMoney, tmpStr);
    xls.SetCellText(2, nRow + 6, tmpStr, FMT_TEXT, true);

    // xls.SetCellText(7, nRow, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER
    // | FMT_WRAPING, true, 10);
    xls.SetCellText(6, nRow + 7, _T("\x43H\x1EE6 NHI\x1EC6M KHO\x41"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    xls.SetMerge(nRow, nRow + 1, 0, 1);
    xls.SetMerge(nRow + 2, nRow + 2, 0, 1);
    xls.SetMerge(nRow + 3, nRow + 3, 0, 1);
    xls.SetMerge(nRow + 4, nRow + 4, 0, 1);

    xls.SetMerge(nRow + 2, nRow + 2, 2, 3);
    xls.SetMerge(nRow + 3, nRow + 3, 2, 3);
    xls.SetMerge(nRow + 4, nRow + 4, 2, 3);

    xls.SetMerge(nRow + 5, nRow + 5, 0, 1);
    xls.SetMerge(nRow + 6, nRow + 6, 0, 1);
    xls.SetMerge(nRow + 6, nRow + 6, 2, 8);
    xls.SetMerge(nRow + 7, nRow + 7, 0, 2);
    xls.SetMerge(nRow, nRow, 2, 3);
    xls.SetMerge(nRow + 7, nRow + 7, 3, 5);
    xls.SetMerge(nRow, nRow, 4, 5);
    xls.SetMerge(nRow, nRow + 1, 6, 7);
    xls.SetMerge(nRow + 7, nRow + 7, 6, 8);

    EndWaitCursor();
    xls.Save(_T("Exports\\Boi duong PTTT C8.xls"));
}
void CPACSOperationList::OnExport2()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szTemp, szWhere, szTypes, szNewGroup, szOldGroup;
    UpdateData(TRUE);
    BeginWaitCursor();
    szWhere.Empty();
    int nRow = 0, nCol = 0, nIdx = 1, nQty1 = 0, nQty2 = 0, nQty3 = 0;
    double nTotal = 0;
    CExcel xls;
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    xls.SetColumnWidth(0, 6);
    xls.SetColumnWidth(1, 12);
    xls.SetColumnWidth(2, 30);
    xls.SetColumnWidth(3, 15);
    xls.SetColumnWidth(4, 10);
    xls.SetColumnWidth(5, 10);
    xls.SetColumnWidth(6, 10);
    xls.SetColumnWidth(7, 10);
    xls.SetColumnWidth(8, 10);
    xls.SetColumnWidth(9, 10);
    xls.SetColumnWidth(10, 10);
    xls.SetColumnWidth(11, 10);
    xls.SetColumnWidth(12, 30);

    xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()),
                    FMT_TEXT | FMT_CENTER, true);

    tmpStr.Format(
        _T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
    xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

    if (m_nInsurance == 0)
        szTemp.Format(_T("\x42\x1EA3o hi\x1EC3m"));
    if (m_nService == 0)
        szTemp.Format(_T("\x44\x1ECB\x63h v\x1EE5"));
    if (m_nPolicy == 0)
        szTemp.Format(_T("\x43h\xEDnh s\xE1\x63h"));
    if (m_nAll == 0)
        szTemp.Format(_T("T\x1EA5t \x63\x1EA3"));

    for (int i = 0; i < m_wndType.GetItemCount(); i++)
    {
        if (m_wndType.GetCheck(i))
        {
            m_wndType.SetCurSel(i);
            if (!szTypes.IsEmpty())
                szTypes += _T(", ");
            szTypes += m_wndType.GetCurrent(1);
        }
    }
    tmpStr.Format(_T("\x42\x1EC7nh nh\xE2n: %s %s"), szTemp, szTypes);
    xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

    xls.SetCellText(0, 2,
                    _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA ")
                    _T("\x42\x1ED2I \x44\x1AF\x1EE0NG TH\x1EE6 THU\x1EACT"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
    xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    11);
    xls.SetCellText(1, 5, _T("S\x1ED1 h\x1ED3 s\x1A1"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(2, 5, _T("T\xEAn \x62\x1EC7nh nh\xE2n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(3, 5, _T("M\xE3 th\x1EBB/\x110\x1A1n v\x1ECB"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(4, 5, _T("T\xEAn PT-TT"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(5, 5, _T("Th\x1EE7 thu\x1EADt lo\x1EA1i \x31"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, 0,
                    _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 ")
                    _T("NGH\x128\x41 VI\x1EC6T N\x41M"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(
        6, 1,
        _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"),
        FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, 5, _T("Th\x1EE7 thu\x1EADt lo\x1EA1i \x32"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(7, 5, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(8, 5, _T("K\xEDp th\x1EF1\x63 hi\x1EC7n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(8, 6, _T("\x43h\xEDnh"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(9, 6, _T("Ph\x1EE5"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(10, 6, _T("Gi\xFAp vi\x1EC7\x63"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(11, 5, _T("S\x1ED1 ti\x1EC1n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(12, 5, _T("T\xEAn PT-TT th\x65o m\xE1y"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    xls.SetMerge(0, 0, 0, 2);
    xls.SetMerge(1, 1, 0, 2);
    xls.SetMerge(2, 2, 0, 12);
    xls.SetMerge(3, 3, 0, 12);
    xls.SetMerge(4, 4, 0, 12);
    xls.SetMerge(5, 6, 0, 0);
    xls.SetMerge(5, 6, 1, 1);
    xls.SetMerge(5, 6, 2, 2);
    xls.SetMerge(5, 6, 3, 3);
    xls.SetMerge(5, 6, 4, 4);
    xls.SetMerge(5, 6, 5, 5);
    xls.SetMerge(0, 0, 6, 12);
    xls.SetMerge(1, 1, 6, 12);
    xls.SetMerge(5, 6, 6, 6);
    xls.SetMerge(5, 6, 7, 7);
    xls.SetMerge(5, 5, 8, 10);
    xls.SetMerge(5, 6, 11, 11);
    xls.SetMerge(5, 6, 12, 12);

    szSQL = GetQuerySring1();
    rs.ExecSQL(szSQL);
    nRow = 7;
    nCol = 0;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("pacsname2"), szNewGroup);
        if (szNewGroup != szOldGroup)
        {
            xls.SetCellMergedColumns(0, nRow, 12);
            xls.SetCellText(0, nRow, _T(""), FMT_TEXT, true, 11);
            szOldGroup = szNewGroup;
            nIdx = 1;
            nRow++;
        }
        xls.SetCellText(nCol + 0, nRow, int2str(nIdx++), FMT_INTEGER);
        rs.GetValue(_T("docno"), tmpStr);
        xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER);
        rs.GetValue(_T("pname"), tmpStr);
        xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("cardno"), tmpStr);
        xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("pacsname"), tmpStr);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("groupid"), tmpStr);
        if (tmpStr == _T("B51"))
        {
            xls.SetCellText(nCol + 5, nRow, _T("I"), FMT_TEXT);
            nQty1++;
        }
        if (tmpStr == _T("B52"))
        {
            xls.SetCellText(nCol + 6, nRow, _T("II"), FMT_TEXT);
            nQty2++;
        }
        if (tmpStr == _T("B53"))
        {
            xls.SetCellText(nCol + 6, nRow, _T("III"), FMT_TEXT);
            nQty3++;
        }
        rs.GetValue(_T("khoa"), tmpStr);
        xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("practitioner"), tmpStr);
        tmpStr = GetNameUser(tmpStr);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("assistant"), tmpStr);
        tmpStr = GetNameUser(tmpStr);
        xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("helper"), tmpStr);
        tmpStr = GetNameUser(tmpStr);
        xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("amount"), tmpStr);
        nTotal += str2double(tmpStr);
        xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_NUMBER1);
        rs.GetValue(_T("operation_name"), tmpStr);
        xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT);
        nRow++;
        rs.MoveNext();
    }

    xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT, true, 11);
    xls.SetCellText(11, nRow, double2str(nTotal), FMT_NUMBER1, true, 11);
    nRow++;

    xls.SetCellText(0, nRow, _T("Lo\x1EA1i"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 2, _T("Lo\x1EA1i \x31"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 3, _T("Lo\x1EA1i \x32"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 4, _T("\x43\x1ED9ng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 5,
                    _T("S\x1ED1 ti\x1EC1n \x62\x1EB1ng \x63h\x1EEF: "),
                    FMT_TEXT | FMT_WRAPING, true, 10);
    xls.SetCellText(0, nRow + 7, _T("TR\x1AF\x1EDENG PH\xD2NG KHTH"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(2, nRow, _T("\x110\x1A1n gi\xE1"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(2, nRow + 1, _T("Ph\x1EABu thu\x1EADt"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(3, nRow + 1, _T("Th\x1EE7 thu\x1EADt"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(3, nRow + 7, _T("H\xC0NH \x43H\xCDNH TR\x1AF\x1EDENG"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(4, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(4, nRow + 1, _T("Ph\x1EABu thu\x1EADt"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(5, nRow + 1, _T("Th\x1EE7 thu\x1EADt"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    xls.SetCellText(5, nRow + 2, int2str(nQty1), FMT_NUMBER1);
    xls.SetCellText(5, nRow + 3, int2str(nQty2), FMT_NUMBER1);
    xls.SetCellText(5, nRow + 4, int2str(nQty1 + nQty2), FMT_NUMBER1);

    xls.SetCellText(6, nRow, _T("Th\xE0nh ti\x1EC1n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(6, nRow + 7, _T("\x43H\x1EE6 NHI\x1EC6M KHO\x41"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    xls.SetMerge(nRow, nRow + 1, 0, 1);
    xls.SetMerge(nRow + 2, nRow + 2, 0, 1);
    xls.SetMerge(nRow + 3, nRow + 3, 0, 1);
    xls.SetMerge(nRow + 4, nRow + 4, 0, 1);
    xls.SetMerge(nRow + 5, nRow + 5, 0, 8);
    xls.SetMerge(nRow + 7, nRow + 7, 0, 2);
    xls.SetMerge(nRow, nRow, 2, 3);
    xls.SetMerge(nRow + 7, nRow + 7, 3, 5);
    xls.SetMerge(nRow, nRow, 4, 5);
    xls.SetMerge(nRow, nRow + 1, 6, 7);
    xls.SetMerge(nRow + 7, nRow + 7, 6, 8);

    EndWaitCursor();
    xls.Save(_T("Exports\\Boi duong PTTT C8.xls"));
}
int CPACSOperationList::OnAddPACSOperationList()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CPACSOperationList::OnEditPACSOperationList()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CPACSOperationList::OnDeletePACSOperationList()
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
        OnCancelPACSOperationList();
    }
    return 0;
}
int CPACSOperationList::OnSavePACSOperationList()
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
        // OnPACSOperationListListLoadData();
        SetMode(VM_VIEW);
    }
    else
    {
    }
    return ret;
    return 0;
}
int CPACSOperationList::OnCancelPACSOperationList()
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
int CPACSOperationList::OnPACSOperationListListLoadData() { return 0; }
CString CPACSOperationList::GetQuerySring()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    CString szSQL, szWhere, szTypes;

    szWhere.AppendFormat(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', ")
                         _T("'YYYY-MM-DD HH24:MI:SS')")
                         _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
                         m_szFromDate, m_szToDate);

    if (m_nInsurance == 0)
        szWhere.AppendFormat(_T(" AND ho_type in('I','C') "));
    else if (m_nService == 0)
        szWhere.AppendFormat(_T(" AND ho_type in('S') "));
    else if (m_nPolicy == 0)
        szWhere.AppendFormat(_T(" AND ho_type not in('I','C','S') "));

    if (!m_szDeptKey.IsEmpty())
    {
        szWhere.AppendFormat(_T("AND hpc_deptid = '%s'"), m_szDeptKey);
    }

    szTypes = GetSelectedTypesString();
    if (!szTypes.IsEmpty())
        szWhere.AppendFormat(_T(" AND hpcl_formid IN(%s) "), szTypes);

    szSQL.Format(
        _T(" SELECT hpc_docno             AS docno,")
        _T("   get_patientname(hpc_docno) AS pname,")
        _T("   CASE WHEN ho_type IN ('I','C') THEN hd_cardno WHEN ho_type NOT ")
        _T("IN ('I','C','S') THEN hp_workplace END AS cardno,")
        _T("   hfl_name                   AS operation_name,")
        _T("   (SELECT ss_desc")
        _T("   FROM sys_sel")
        _T("   WHERE ss_id = 'pacs_line_category'")
        _T("   AND ss_code = hpcl_formid")
        _T("   )                         AS pacsname,")
        _T("   SUBSTR(hfl_opt_group,1,3) AS groupid,")
        _T("   CASE")
        _T("     WHEN hpc_deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB')")
        _T("     THEN TRIM(hpc_deptid")
        _T("       || ' '")
        _T("       || hms_getroomname(hpc_deptid, hpc_roomid))")
        _T("     ELSE hpc_deptid")
        _T("   END                            AS khoa,")
        _T("   get_username(hpc_practitioner) AS practitioner,")
        _T("   get_username(hpcl_staffid)	  AS assistant,")
        _T("   CAST(' ' AS NVARCHAR2(1))      AS anethetist,")
        _T("   CAST(' ' AS NVARCHAR2(1))      AS anethetist1,")
        _T("   hpcl_qty                       AS quantity,")
        _T("   hpcl_qty * hfl_retprice        AS amount,")
        _T("   hpc_performdate                AS performdate")
        _T(" FROM hms_pacsorder")
        _T(" LEFT JOIN hms_pacsorderline")
        _T(" ON(hpc_orderid = hpcl_orderid)")
        _T(" LEFT JOIN hms_fee_list")
        _T(" ON(hfl_feeid      = hpcl_itemid)")
        _T(" LEFT JOIN hms_doc")
        _T(" ON(hpc_docno = hd_docno)")
        _T(" LEFT JOIN hms_patient")
        _T(" ON(hp_patientno = hd_patientno)")
        _T(" LEFT JOIN hms_object")
        _T(" ON(ho_id = hd_object)")
        _T(" WHERE hpcl_status IN ('T', 'I')")
        _T(" AND NVL(hpc_pdeptid, HPCL_PERFORM_DEPTID) = '%s'")
        _T(" %s")
        _T(" ORDER BY hpcl_formid, hpc_performdate"),
        pMF->GetCurrentDepartmentID(), szWhere);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}
CString CPACSOperationList::GetQuerySring1()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    CString szSQL, szWhere, szTypes;

    szWhere.AppendFormat(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', ")
                         _T("'YYYY-MM-DD HH24:MI:SS')")
                         _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
                         m_szFromDate, m_szToDate);

    if (m_nInsurance == 0)
        szWhere.AppendFormat(_T(" AND ho_type in('I','C') "));
    else if (m_nService == 0)
        szWhere.AppendFormat(_T(" AND ho_type in('S') "));
    else if (m_nPolicy == 0)
        szWhere.AppendFormat(_T(" AND ho_type not in('I','C','S') "));

    if (!m_szDeptKey.IsEmpty())
    {
        szWhere.AppendFormat(_T("AND hpc_deptid = '%s'"), m_szDeptKey);
    }

    szTypes = GetSelectedTypesString();
    if (!szTypes.IsEmpty())
        szWhere.AppendFormat(_T(" AND hfl_index2 IN(%s) "), szTypes);

    szSQL.Format(
        _T(" SELECT hpc_docno             AS docno,")
        _T("   get_patientname(hpc_docno) AS pname,")
        _T("   CASE WHEN ho_type IN ('I','C') THEN hd_cardno WHEN ho_type NOT ")
        _T("IN ('I','C','S') THEN hp_workplace END AS cardno,")
        _T("   hfl_name                   AS operation_name,")
        _T("   hms_getroomname(hpc_pdeptid, hpc_proomid) AS pacsname,")
        _T("   hfl_index2 AS pacsname2,")
        _T("   SUBSTR(hfl_opt_group,1,3) AS groupid,")
        _T("   CASE")
        _T("     WHEN hpc_deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')")
        _T("     THEN TRIM(hpc_deptid")
        _T("       || ' '")
        _T("       || hms_getroomname(hpc_deptid, hpc_roomid))")
        _T("     ELSE hpc_deptid")
        _T("   END                            AS khoa,")
        _T("   get_username(hpc_practitioner) AS practitioner,")
        _T("   CAST(' ' AS NVARCHAR2(1))      AS assistant,")
        _T("   CAST(' ' AS NVARCHAR2(1))      AS anethetist,")
        _T("   CAST(' ' AS NVARCHAR2(1))      AS anethetist1,")
        _T("   hpcl_qty                       AS quantity,")
        _T("   hpcl_qty * hfl_retprice        AS amount,")
        _T("   hpc_performdate                AS performdate")
        _T(" FROM hms_pacsorder")
        _T(" LEFT JOIN hms_pacsorderline")
        _T(" ON(hpc_orderid = hpcl_orderid)")
        _T(" LEFT JOIN hms_fee_list")
        _T(" ON(hfl_feeid      = hpcl_itemid)")
        _T(" LEFT JOIN hms_doc")
        _T(" ON(hpc_docno = hd_docno)")
        _T(" LEFT JOIN hms_patient")
        _T(" ON(hp_patientno = hd_patientno)")
        _T(" LEFT JOIN hms_object")
        _T(" ON(ho_id = hd_object)")
        _T(" WHERE hpcl_status IN ('T', 'I')")
        _T(" AND hpc_pdeptid                = 'C8'")
        _T(" AND (hfl_opt_group            IS NOT NULL")
        _T(" OR SUBSTR(hfl_opt_group, 1, 1) = 'B') %s")
        _T(" ORDER BY hfl_index2, hpc_performdate"),
        szWhere);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPACSOperationList::GetNameUser(CString UserName, CString LastName)
{
    CString szValue, tmpStr;
    int nIndex = 0;
    bool flag = true;
    CString szFind;
    szFind = _T(" ");
    if (UserName.GetLength() > 0)
    {
        for (int i = 1; i < UserName.GetLength(); i++)
        {
            tmpStr = UserName.Right(i);
            if (tmpStr.Find(szFind) == 1 && flag == true && i > 2)
            {
                nIndex = i;
                flag = false;
            }
        }
    }
    if (nIndex > 0)
    {
        szValue = UserName.Right(nIndex - 1);
    }
    return szValue;
}
void CPACSOperationList::OnClassifySelect()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CUPDATEPTTT dlg(this);
    dlg.DoModal();
}
CString CPACSOperationList::GetSelectedTypesString()
{
    CString szTypes;
    CString szIDs = m_wndType.GetCheckData(0);

    if (szIDs.IsEmpty())
        return _T("");

    CString szResult;
    CString szToken;
    int nPos = 0;

    szToken = szIDs.Tokenize(_T(","), nPos);
    while (!szToken.IsEmpty())
    {
        szToken.Trim();

        if (!szResult.IsEmpty())
            szResult += _T(", ");
        szResult += _T("'") + szToken + _T("'");

        szToken = szIDs.Tokenize(_T(","), nPos);
    }
    //_msg(_T("Selected types: %s"), szResult);
    return szResult;
}