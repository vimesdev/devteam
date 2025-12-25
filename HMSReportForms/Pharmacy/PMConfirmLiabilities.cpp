#include "PMConfirmLiabilities.h"
#include "Excel.h"
#include "HMSExt\ReportUtils.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "stdafx.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMConfirmLiabilities *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMConfirmLiabilities *)pWnd)->OnToDateCheckValue();
}
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                       int nNewItemSel)
{
    ((CPMConfirmLiabilities *)pWnd)
        ->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSupplierSelendokFnc(CWnd *pWnd)
{
    ((CPMConfirmLiabilities *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd)
{
    return ((CPMConfirmLiabilities *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnSupplierAddNew();
}*/
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                    int nNewItemSel)
{
    ((CPMConfirmLiabilities *)pWnd)
        ->OnStockSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnStockSelendokFnc(CWnd *pWnd)
{
    ((CPMConfirmLiabilities *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd)
{
    return ((CPMConfirmLiabilities *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnStockAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                        int nNewItemSel)
{
    ((CPMConfirmLiabilities *)pWnd)
        ->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnItemGroupSelendokFnc(CWnd *pWnd)
{
    ((CPMConfirmLiabilities *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd)
{
    return ((CPMConfirmLiabilities *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnItemGroupAddNew();
}*/

static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                       int nNewItemSel)
{
    ((CPMConfirmLiabilities *)pWnd)
        ->OnContractSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnContractSelendokFnc(CWnd *pWnd)
{
    ((CPMConfirmLiabilities *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd)
{
    return ((CPMConfirmLiabilities *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
    ((CPMConfirmLiabilities *)pWnd)->OnContractAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd)
{
    CPMConfirmLiabilities *pVw = (CPMConfirmLiabilities *)pWnd;
    pVw->OnPrintPreviewSelect();
}
CPMConfirmLiabilities::CPMConfirmLiabilities(CWnd *pParent)
{

    m_nDlgWidth = 1029;
    m_nDlgHeight = 773;
    SetDefaultValues();
}
CPMConfirmLiabilities::~CPMConfirmLiabilities() {}
void CPMConfirmLiabilities::OnCreateComponents()
{
    m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 150);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
    m_wndFromDate.Create(this, 115, 30, 290, 55);
    m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
    m_wndToDate.Create(this, 400, 30, 570, 55);
    m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 110, 85);
    m_wndSupplier.Create(this, 115, 60, 570, 85);
    m_wndStockLabel.Create(this, _T("Stock"), 10, 90, 110, 115);
    m_wndStock.SetCheckBox();
    m_wndStock.Create(this, 115, 90, 570, 115);
    m_wndItemGroup.SetCheckBox();
    m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 120, 110, 145);
    m_wndItemGroup.Create(this, 115, 120, 570, 145);
    m_wndContract.Create(this, 5, 155, 575, 395);
    m_wndContract.SetCheckBox();
    m_wndPrintPreview.Create(this, _T("Print Pre&view"), 465, 400, 575, 425);
}
void CPMConfirmLiabilities::OnInitializeComponents()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();

    //	m_wndSupplier.SetCheckValue(true);
    m_wndSupplier.LimitText(1024);
    //	m_wndStock.SetCheckValue(true);
    m_wndStock.LimitText(1024);
    //	m_wndItemGroup.SetCheckValue(true);
    m_wndItemGroup.LimitText(35);

    m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
    m_wndSupplier.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

    m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 100);
    m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

    m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
    m_wndItemGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

    m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
    m_wndContract.InsertColumn(2, _T("Diễn giải"), CFMT_TEXT, 0);
    m_wndContract.InsertColumn(3, _T("Ngày ký"), CFMT_TEXT, 100);
    m_wndContract.InsertColumn(4, _T("Số tiền"), CFMT_MONEY, 120);
    m_wndContract.InsertColumn(5, _T("Diễn giải"), CFMT_TEXT, 250);
    m_wndContract.InsertColumn(6, _T("Gói thầu"), CFMT_TEXT,
                               70); // Contract_package_uid
}

void CPMConfirmLiabilities::OnSetWindowEvents()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    // m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
    // m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
    // m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
    m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
    // m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
    // m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
    // m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
    m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
    m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
    // m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
    // m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
    m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
    m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
    // m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
    m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
    // m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
    // m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
    m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
    m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
    // m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
    m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
    // m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
    // m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
    m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
    m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
    // m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
    m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
    // m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
    // m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
    m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
    m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
    // m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
    m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
    m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szFromDate += _T(" 00:00");
    m_szToDate += _T(" 23:59");
    UpdateData(false);
}
void CPMConfirmLiabilities::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
    DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
    DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
    DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
}
void CPMConfirmLiabilities::SetDefaultValues()
{
    m_szFromDate.Empty();
    m_szToDate.Empty();
    m_szSupplierKey.Empty();
    m_szStockKey.Empty();
    m_szItemGroupKey.Empty();
    m_szContractKey.Empty();
}

int CPMConfirmLiabilities::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiView::SetMode(nMode);
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
        EnableButtons(TRUE, 0, 1, 2, 3, -1);
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

/*void CPMConfirmLiabilities::OnFromDateChange(){

} */
/*void CPMConfirmLiabilities::OnFromDateSetfocus(){

} */
/*void CPMConfirmLiabilities::OnFromDateKillfocus(){

} */
int CPMConfirmLiabilities::OnFromDateCheckValue() { return 0; }

/*void CPMConfirmLiabilities::OnToDateChange(){

} */
/*void CPMConfirmLiabilities::OnToDateSetfocus(){

} */
/*void CPMConfirmLiabilities::OnToDateKillfocus(){

} */
int CPMConfirmLiabilities::OnToDateCheckValue() { return 0; }

void CPMConfirmLiabilities::OnSupplierSelectChange(int nOldItemSel,
                                                   int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMConfirmLiabilities::OnSupplierSelendok()
{
    UpdateData();
    OnContractLoadData();
}

/*void CPMConfirmLiabilities::OnSupplierSetfocus(){

}*/
/*void CPMConfirmLiabilities::OnSupplierKillfocus(){

}*/
long CPMConfirmLiabilities::OnSupplierLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
/*void CPMConfirmLiabilities::OnSupplierAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CPMConfirmLiabilities::OnStockSelectChange(int nOldItemSel,
                                                int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMConfirmLiabilities::OnStockSelendok() {}
/*void CPMConfirmLiabilities::OnStockSetfocus(){

}*/
/*void CPMConfirmLiabilities::OnStockKillfocus(){

}*/
long CPMConfirmLiabilities::OnStockLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}
/*void CPMConfirmLiabilities::OnStockAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CPMConfirmLiabilities::OnItemGroupSelectChange(int nOldItemSel,
                                                    int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMConfirmLiabilities::OnItemGroupSelendok() {}
/*void CPMConfirmLiabilities::OnItemGroupSetfocus(){

}*/
/*void CPMConfirmLiabilities::OnItemGroupKillfocus(){

}*/
long CPMConfirmLiabilities::OnItemGroupLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    int nCount = 0;
    szSQL.Format(
        _T(" SELECT DISTINCT product_type_id, ")
        _T("                 product_type_name ")
        _T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( 'A1100', ")
        _T("'A1130', 'A1140', 'A1160', ")
        _T("                                              'A1170', 'A1180', ")
        _T("'A1190', 'A1400', 'A6000' ) THEN N'A0000' ")
        _T("                ELSE mpt_product_type_id ")
        _T("                END product_type_id, ")
        _T("                CASE WHEN mpt_product_type_id IN ( 'A1100', ")
        _T("'A1130', 'A1140', 'A1160', ")
        _T("                                              'A1170', 'A1180', ")
        _T("'A1190', 'A1400', 'A6000' ) THEN N'Thu\x1ED1\x63' ")
        _T("                ELSE mpt_name ")
        _T("                END product_type_name ")
        _T("         FROM   m_product_type ")
        _T("         WHERE  mpt_org_id = '%s' ")
        _T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> ")
        _T("'A1000') ")
        _T(" ORDER BY product_type_id"),
        pMF->GetModuleID());
    nCount = rs.ExecSQL(szSQL);
    m_wndItemGroup.DeleteAllItems();
    while (!rs.IsEOF())
    {
        m_wndItemGroup.AddItems(rs.GetValue(_T("product_type_id")),
                                rs.GetValue(_T("product_type_name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CPMConfirmLiabilities::OnItemGroupAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */

void CPMConfirmLiabilities::OnContractSelectChange(int nOldItemSel,
                                                   int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMConfirmLiabilities::OnContractSelendok() {}
/*void CPMConfirmLiabilities::OnContractSetfocus(){

}*/
/*void CPMConfirmLiabilities::OnContractKillfocus(){

}*/
long CPMConfirmLiabilities::OnContractLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CString szFilter;
    UpdateData();

    if (!m_szSupplierKey.IsEmpty())
    {
        szFilter.Format(L" and adc_partner_id = '%s'", m_szSupplierKey);
    }
    return pMF->LoadContractList(&m_wndContract, m_szContractKey, szFilter);
    /*
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if(m_wndContract.IsSearchKey() && !m_szContractKey.IsEmpty()){
     szWhere.Format(_T(" and id='%s' "), m_szContractKey
};
    m_wndContract.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER
BY id "), szWhere nCount = rs.ExecSQL(szSQL); while(!rs.IsEOF()){
        m_wndContract.AddItems(
            rs.GetValue(_T("id")),
            rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
*/
    return 0;
}
/*void CPMConfirmLiabilities::OnContractAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */

void CPMConfirmLiabilities::OnPrintPreviewSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL,
                   *rptFooter = NULL;
    int nIdx = 1;
    long double nTemp = 0, nTotal = 0;
    CString szSQL, tmpStr, tmpStr2, szDate, szItemGroups, szMoney, szContractID;

    if (!rpt.Init(_T("Reports\\HMS\\PM_BIENBANDOICHIEUCONGNO.RPT")))
        return;
    szSQL.Format(_T(" SELECT")
                 _T(" get_partnername(adp_partner_id) AS partnername,")
                 _T(" adp_website AS director,")
                 _T(" adp_address AS address,")
                 _T(" adp_telephone AS telephone")
                 _T(" FROM ad_partner")
                 _T(" WHERE adp_partner_id = '%s'"),
                 m_szSupplierKey);
    rs.ExecSQL(szSQL);

    rptHeader = rpt.GetReportHeader();
    rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("Department"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));

    tmpStr.Format(rptHeader->GetValue(_T("ReportDate3")),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);

    szContractID = ru.GetCheckList(&m_wndContract);
    szContractID.Replace(L"'", L"");
    if (!szContractID.IsEmpty() && szContractID.Find(L",") == -1)
    {
        tmpStr.AppendFormat(L"\nSố hợp đồng: %s. Ngày ký: %s",
                            ru.GetCheckList(&m_wndContract, 1),
                            ru.GetCheckList(&m_wndContract, 3));
    }
    rptHeader->SetValue(_T("ReportDate3"), tmpStr);

    tmpStr.Format(rptHeader->GetValue(_T("ReportDate2")),
                  CDate::Convert(pMF->GetSysDate(), yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
    rptHeader->SetValue(_T("ReportDate2"), tmpStr);

    tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
    rptHeader->SetValue(_T("ReportDate"), tmpStr);

    rptHeader->SetValue(_T("5"), rs.GetValue(_T("partnername")));
    rptHeader->SetValue(_T("6"), rs.GetValue(_T("director")));
    rptHeader->SetValue(_T("7"), rs.GetValue(_T("address")));
    rptHeader->SetValue(_T("8"), rs.GetValue(_T("telephone")));

    for (int i = 0; i < m_wndItemGroup.GetItemCount(); i++)
    {
        if (m_wndItemGroup.GetCheck(i))
        {
            m_wndItemGroup.SetCurSel(i);
            if (!szItemGroups.IsEmpty())
                szItemGroups += _T(", ");
            szItemGroups += m_wndItemGroup.GetCurrent(1);
        }
    }

    rptHeader->SetValue(_T("9"), szItemGroups);

    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("ttlamt"), tmpStr);
    rptHeader->SetValue(_T("FirstPeriod"), tmpStr);

    szSQL = GetQueryString1();
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("import_amount"), tmpStr);
    rptHeader->SetValue(_T("TotalImport"), tmpStr);

    szSQL = GetQueryString5();
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("return_amount"), szMoney);
    rptHeader->SetValue(_T("ReturnTotal"), szMoney);

    szSQL = GetQueryString2();
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("paid_amount"), tmpStr);
    nTemp = str2double(tmpStr);
    tmpStr.Format(L"%.3f", nTemp - str2double(szMoney));
    rptHeader->SetValue(_T("PayTotal"), tmpStr);

    szSQL = GetQueryString3();
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("ttlamt"), tmpStr2);
    rptHeader->SetValue(_T("LastPeriod"), tmpStr2);

    szSQL = GetQueryString4();
    rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        rptDetail = rpt.AddDetail();
        rptDetail->SetValue(_T("1"), int2str(nIdx++));
        rptDetail->SetValue(_T("2"), rs.GetValue(_T("invoiceno")));
        rs.GetValue(_T("invoicedate"), tmpStr);
        rptDetail->SetValue(_T("3"),
                            CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
        rs.GetValue(_T("totalamount"), tmpStr);
        nTotal += str2double(tmpStr);
        rptDetail->SetValue(_T("4"), tmpStr);
        rptDetail->SetValue(_T("5"), rs.GetValue(_T("contractpkg_id")));
        rptDetail->SetValue(_T("6"), rs.GetValue(_T("contract_no")));
        rptDetail->SetValue(_T("7"), rs.GetValue(_T("contract_sd")));

        rs.MoveNext();
    }
    if (nTotal > 0)
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptGroup->SetValue(_T("Total"), _T("\x43\x1ED9ng"));
        tmpStr.Format(_T("%f"), nTotal);
        rptGroup->SetValue(_T("S4"), tmpStr);
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptGroup->SetValue(_T("Total"), _T("Tr\x1EA3 l\x1EA1i h\xE0ng"));
        rptGroup->SetValue(_T("S4"), szMoney);
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptGroup->SetValue(_T("Total"), _T("T\x1ED5ng \x63\x1ED9ng"));
        rptGroup->SetValue(_T("S4"), tmpStr2);
    }

    rptFooter = rpt.GetReportFooter();
    MoneyToString(tmpStr2, szMoney);
    tmpStr.Format(rptFooter->GetValue(_T("Summary")), szMoney);
    rptFooter->SetValue(_T("Summary"), tmpStr);
    rptFooter->SetValue(_T("HaiBen"), tmpStr2);

    szDate = pMF->GetSysDate();
    tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szDate.Right(2),
                  szDate.Mid(5, 2), szDate.Left(4));
    rptFooter->SetValue(_T("PrintDate"), tmpStr);
    rpt.GetReportFooter()->SetValue(_T("Username"),
                                    pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}

CString CPMConfirmLiabilities::GetQueryString()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere, szWhere1, szStorages, szItemGroups, szChecked;
    szWhere.Format(_T(" AND (po_approveddate < TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                   _T("HH24:MI:SS')")
                   _T(" AND (po_payment = 'N' OR (po_payment = 'Y'")
                   _T(" AND pp_acctdate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                   _T("HH24:MI:SS')))) AND po_partner_id = '%s'"),
                   m_szFromDate, m_szFromDate, m_szSupplierKey);
    szWhere1.Format(_T(" AND mt_partner_id = '%s'")
                    _T("	 AND mt_approveddate <= TO_TIMESTAMP('%s', ")
                    _T("'YYYY-MM-DD HH24:MI:SS')")
                    _T("	 AND ((mt_payment     <> 'Y'")
                    _T("	 AND mt_payment_method = 'UNC')")
                    _T("	 OR mt_payment_date   IS NULL)"),
                    m_szSupplierKey, m_szFromDate);
    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }

    // 	for (int i = 0; i < m_wndItemGroup.GetItemCount(); i++)
    // 	{
    // 		if (m_wndItemGroup.GetCheck(i))
    // 		{
    // 			m_wndItemGroup.SetCurSel(i);
    // 			if (!szItemGroups.IsEmpty())
    // 				szItemGroups += _T(", ");
    // 			szItemGroups += m_wndItemGroup.GetCurrent(0);
    // 		}
    // 	}
    // 	if(!szItemGroups.IsEmpty())
    // 	{
    // 		szWhere.AppendFormat(_T(" AND product_groupid IN(%s)"),
    // szItemGroups); 		szWhere1.AppendFormat(_T(" AND product_groupid
    // IN(%s)"), szItemGroups);
    // 	}
    szChecked = ru.GetCheckList(&m_wndContract);
    if (!szChecked.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id IN (%s)", szChecked);
        szWhere1.AppendFormat(L" and product_contract_id IN (%s)", szChecked);
    }
    szSQL.Format(_T(" SELECT ROUND(SUM(ttlamt - ttlreamt), 0) AS ttlamt")
                 _T(" FROM(")
                 _T(" SELECT SUM(pol_totalamount)  AS ttlamt,")
                 _T(" 0 AS ttlreamt")
                 _T(" FROM purchase_order")
                 _T(" LEFT JOIN purchase_orderline")
                 _T(" ON (po_purchase_order_id = pol_purchase_order_id)")
                 _T(" LEFT JOIN purchase_payment")
                 _T(" ON (pp_purchase_payment_id = po_refpayment_id)")
                 _T(" LEFT JOIN m_productitem_view3")
                 _T(" ON (product_item_id    = pol_product_item_id)")
                 _T(" WHERE po_status        = 'A'")
                 _T(" AND product_org_id     = 'PM'")
                 _T(" AND NVL(po_saleperson_id, 'P') = 'P' %s")
                 _T(" UNION ALL")
                 _T(" SELECT 0,")
                 _T(" mtl_ttlamount")
                 _T(" FROM m_transaction")
                 _T(" LEFT JOIN m_transactionline")
                 _T(" ON (mt_transaction_id = mtl_transaction_id)")
                 _T(" LEFT JOIN m_productitem_view3")
                 _T(" ON (product_item_id    = mtl_product_item_id)")
                 _T(" WHERE mt_org_id        = 'PM'")
                 _T(" AND mt_doctype       = 'PRO'")
                 _T(" AND mt_partner_id NOT  IN('KD', '708', 'CHT') %s)"),
                 szWhere, szWhere1);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMConfirmLiabilities::GetQueryString1()
{
    CString szSQL, szWhere, szWhere1, szStorages, szChecked;
    szWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', ")
                   _T("'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', ")
                   _T("'YYYY-MM-DD HH24:MI:SS') AND po_partner_id = '%s'"),
                   m_szFromDate, m_szToDate, m_szSupplierKey);

    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
    }

    szChecked = ru.GetCheckList(&m_wndContract);
    if (!szChecked.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id IN (%s)",
                             szChecked);
    }

    szSQL.Format(_T(" SELECT ROUND(SUM(po_totalamount), 0) AS import_amount")
                 _T(" FROM purchase_order")
                 _T(" WHERE po_status        = 'A'")
                 _T(" AND po_org_id          = 'PM'")
                 _T(" AND NVL(po_saleperson_id, 'P') = 'P' %s"),
                 szWhere);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMConfirmLiabilities::GetQueryString2()
{
    CString szSQL, szWhere, szWhere1, szStorages, szChecked;
    szWhere.Format(
        _T(" AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T(" AND po_partner_id = '%s'"),
        m_szFromDate, m_szToDate, m_szSupplierKey);

    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
    }

    szChecked = ru.GetCheckList(&m_wndContract);
    if (!szChecked.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id IN (%s)",
                             szChecked);
    }
    szSQL.Format(_T(" SELECT ROUND(SUM(po_paidamount), 0) AS paid_amount")
                 _T(" FROM purchase_payment")
                 _T(" LEFT JOIN purchase_order")
                 _T(" ON ( pp_purchase_payment_id = po_refpayment_id )")
                 _T(" WHERE pp_status            IN ( 'P', 'A' )")
                 _T(" AND po_org_id               = 'PM'")
                 _T(" AND NVL(po_saleperson_id, 'P') = 'P' %s"),
                 szWhere);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMConfirmLiabilities::GetQueryString3()
{
    CString szSQL, szWhere, szWhere1, szStorages, szChecked;
    szWhere.Format(_T(" AND (po_approveddate < TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                   _T("HH24:MI:SS')")
                   _T(" AND (po_payment = 'N' OR (po_payment = 'Y'")
                   _T(" AND pp_acctdate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                   _T("HH24:MI:SS')))) AND po_partner_id = '%s'"),
                   m_szToDate, m_szToDate, m_szSupplierKey);
    szWhere1.Format(_T(" AND mt_partner_id = '%s'")
                    _T("	 AND mt_approveddate <= TO_TIMESTAMP('%s', ")
                    _T("'YYYY-MM-DD HH24:MI:SS')")
                    _T("	 AND ((mt_payment     <> 'Y'")
                    _T("	 AND mt_payment_method = 'UNC')")
                    _T("	 OR mt_payment_date   IS NULL)"),
                    m_szSupplierKey, m_szToDate);

    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }

    szChecked = ru.GetCheckList(&m_wndContract);
    if (!szChecked.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id IN (%s)",
                             szChecked);
        szWhere1.AppendFormat(L" and product_contract_id IN (%s)",
                              szChecked);
    }

    szSQL.Format(_T(" SELECT ROUND(SUM(ttlamt - ttlreamt), 0) AS ttlamt")
                 _T(" FROM")
                 _T(" (SELECT SUM(po_totalamount) ttlamt,")
                 _T(" 0 AS ttlreamt")
                 _T(" FROM purchase_order")
                 _T(" LEFT JOIN purchase_payment")
                 _T(" ON ( pp_purchase_payment_id = po_refpayment_id )")
                 _T(" WHERE po_status          = 'A'")
                 _T(" AND po_org_id            = 'PM'")
                 _T(" AND NVL(po_saleperson_id, 'P') = 'P' %s")
                 _T(" UNION ALL")
                 _T(" SELECT 0,")
                 _T(" SUM(mtl_ttlamount) ttlreamt")
                 _T(" FROM m_transaction")
                 _T(" LEFT JOIN m_transactionline")
                 _T(" ON(mt_transaction_id   = mtl_transaction_id)")
                 _T("   LEFT JOIN m_productitem_view3 ")
                 _T("   ON (mtl_product_item_id = product_item_id) ")
                 _T(" WHERE mt_org_id          = 'PM'")
                 _T(" AND mt_partner_id NOT IN('KD', '708', 'CHT')")
                 _T(" AND mt_doctype         = 'PRO' %s")
                 _T(" )"),
                 szWhere, szWhere1);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMConfirmLiabilities::GetQueryString4()
{
    CString szSQL, szWhere, szWhere1, szStorages, szChecked;
    szWhere.Format(_T(" AND (po_approveddate < TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                   _T("HH24:MI:SS')")
                   _T(" AND (po_payment = 'N' OR (po_payment = 'Y'")
                   _T(" AND pp_acctdate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                   _T("HH24:MI:SS')))) AND po_partner_id = '%s'"),
                   m_szToDate, m_szToDate, m_szSupplierKey);

    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
    }

    szChecked = ru.GetCheckList(&m_wndContract);
    if (!szChecked.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id IN (%s)",
                             szChecked);
    }

    szSQL.Format(_T(" SELECT")
                 _T(" po_invoiceno AS invoiceno,")
                 _T(" po_invoicedate AS invoicedate,")
                 _T(" ROUND(po_totalamount, 0) AS totalamount,")
                 _T(" get_contract_info(po_contract_id, 'NO') AS contract_no,")
                 _T(" get_contract_info(po_contract_id, 'SD') AS contract_sd,")
                 _T(" po_contractpkg_id AS contractpkg_id")
                 _T(" FROM purchase_order")
                 _T(" LEFT JOIN purchase_payment")
                 _T(" ON ( pp_purchase_payment_id = po_refpayment_id )")
                 _T(" WHERE po_status          = 'A'")
                 _T(" AND po_org_id            = 'PM'")
                 _T(" AND NVL(po_saleperson_id, 'P') = 'P' %s")
                 _T(" ORDER BY po_invoicedate"),
                 szWhere);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMConfirmLiabilities::GetQueryString5()
{
    CString szSQL, szWhere, szWhere1, szStorages, szChecked;
    szWhere.Format(
        _T(" AND mt_partner_id = '%s'")
        _T("	AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T("    AND mt_payment     = 'Y'")
        _T("    AND mt_payment_method = 'UNC'"),
        m_szSupplierKey, m_szFromDate, m_szToDate);

    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND mt_storage_id IN(%s) "), szStorages);
    }

    szChecked = ru.GetCheckList(&m_wndContract);
    if (!szChecked.IsEmpty())
    {
        szWhere.AppendFormat(L" and product_contract_id IN (%s)",
                             szChecked);
    }
    szSQL.Format(_T(" SELECT ROUND(SUM(mtl_ttlamount), 0) AS return_amount")
                 _T(" FROM m_transaction")
                 _T(" LEFT JOIN m_transactionline")
                 _T(" ON(mt_transaction_id   = mtl_transaction_id)")
                 _T("   LEFT JOIN m_productitem_view3 ")
                 _T("   ON (mtl_product_item_id = product_item_id) ")
                 _T(" WHERE mt_org_id          = 'PM'")
                 _T(" AND mt_doctype         = 'PRO'")
                 _T(" AND mt_partner_id NOT IN('KD', '708', 'CHT') %s"),
                 szWhere);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}