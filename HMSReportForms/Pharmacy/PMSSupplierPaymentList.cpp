#include "PMSSupplierPaymentList.h"
#include "Excel.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "stdafx.h"

#include ".\pmssupplierpaymentlist.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnToDateCheckValue();
}
static long _OnSupplierLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnSupplierLoadData();
}
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    ((CPMSSupplierPaymentList *)pWnd)
        ->OnStorageSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnStorageSelendokFnc(CWnd *pWnd)
{
    ((CPMSSupplierPaymentList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                        int nNewItemSel)
{
    ((CPMSSupplierPaymentList *)pWnd)
        ->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnItemGroupSelendokFnc(CWnd *pWnd)
{
    ((CPMSSupplierPaymentList *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    ((CPMSSupplierPaymentList *)pWnd)
        ->OnSourceSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSourceSelendokFnc(CWnd *pWnd)
{
    ((CPMSSupplierPaymentList *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnSourceAddNew();
}*/
static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                       int nNewItemSel)
{
    ((CPMSSupplierPaymentList *)pWnd)
        ->OnContractSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnContractSelendokFnc(CWnd *pWnd)
{
    ((CPMSSupplierPaymentList *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
    ((CPMSSupplierPaymentList *)pWnd)->OnContractAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd)
{
    CPMSSupplierPaymentList *pVw = (CPMSSupplierPaymentList *)pWnd;
    pVw->OnPrintPreviewSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CPMSSupplierPaymentList *pVw = (CPMSSupplierPaymentList *)pWnd;
    pVw->OnExportSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd)
{
    ((CPMSSupplierPaymentList *)pWnd)->OnAllSelect();
}
static void _OnCashSelectFnc(CWnd *pWnd)
{
    ((CPMSSupplierPaymentList *)pWnd)->OnCashSelect();
}
static void _OnTransferSelectFnc(CWnd *pWnd)
{
    ((CPMSSupplierPaymentList *)pWnd)->OnTransferSelect();
}

static int _OnimpFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnimpFromDateCheckValue();
}
static int _OnimpToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMSSupplierPaymentList *)pWnd)->OnimpToDateCheckValue();
}
static void _OnImportDateSelectFnc(CWnd *pWnd)
{
    ((CPMSSupplierPaymentList *)pWnd)->OnImportDateSelect();
}

CPMSSupplierPaymentList::CPMSSupplierPaymentList(CWnd *pParent)
{

    m_nDlgWidth = 585;
    m_nDlgHeight = 705;
    SetDefaultValues();
}
CPMSSupplierPaymentList::~CPMSSupplierPaymentList() {}
void CPMSSupplierPaymentList::OnCreateComponents()
{
    m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575,
                                       210);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
    m_wndFromDate.Create(this, 105, 30, 290, 55);
    m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 385, 55);
    m_wndToDate.Create(this, 390, 30, 570, 55);
    m_wndImportDate.Create(this, _T("Purcharge"), 10, 60, 100, 85);
    m_wndimpFromDate.Create(this, 105, 60, 290, 85);
    m_wndImportToDateLabel.Create(this, _T("Import ToDate"), 295, 60, 385, 85);
    m_wndimpToDate.Create(this, 390, 60, 570, 85);
    m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 90, 100, 115);
    m_wndSupplier.Create(this, 105, 90, 570, 115);
    m_wndStorage.SetCheckBox();
    m_wndStorageLabel.Create(this, _T("Storage"), 10, 120, 100, 145);
    m_wndStorage.Create(this, 105, 120, 570, 145);
    m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 150, 100, 175);
    m_wndItemGroup.Create(this, 105, 150, 290, 175);
    m_wndSource.SetCheckBox();
    m_wndSourceLabel.Create(this, _T("Source"), 295, 150, 385, 175);
    m_wndSource.Create(this, 390, 150, 570, 175);
    m_wndContractLabel.Create(this, _T("Hợp đồng"), 10, 180, 100, 205);
    m_wndContract.Create(this, 105, 180, 290, 205);
    m_wndAll.Create(this, _T("All"), 10, 215, 90, 240);
    m_wndCash.Create(this, _T("Tiền mặt"), 95, 215, 175, 240);
    m_wndTransfer.Create(this, _T("Chuyển khoản"), 180, 215, 300, 240);
    m_wndPrintPreview.Create(this, _T("&Print Preview"), 390, 215, 490, 240);
    m_wndExport.Create(this, _T("&Export"), 495, 215, 575, 240);
}
void CPMSSupplierPaymentList::OnInitializeComponents()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    m_wndFromDate.SetCheckValue(true);
    m_wndToDate.SetCheckValue(true);
    // m_wndStorage.SetCheckValue(true);
    m_wndStorage.LimitText(1024);
    // m_wndItemGroup.SetCheckValue(true);
    m_wndItemGroup.LimitText(1024);
    // m_wndSource.SetCheckValue(true);
    m_wndSource.LimitText(1024);
    m_wndContract.SetCheckValue(true);
    m_wndContract.LimitText(35);

    m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
    m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

    m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
    m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

    m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 60);
    m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

    m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndItemGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

    m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
    m_wndContract.InsertColumn(2, _T("Diễn giải"), CFMT_TEXT, 250);
    m_wndContract.InsertColumn(3, _T("Ngày ký"), CFMT_TEXT, 80);
    m_wndContract.InsertColumn(4, _T("Số tiền"), CFMT_MONEY, 120);
    m_wndContract.InsertColumn(5, _T("Gói thầu"), CFMT_TEXT,
                               70); // Contract_package_uid
}
void CPMSSupplierPaymentList::OnSetWindowEvents()
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
    m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
    m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
    // m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
    // m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
    m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
    m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
    // m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
    m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
    // m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
    // m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
    m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
    m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
    // m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
    m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
    // m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
    // m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
    m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
    m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
    // m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
    m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
    // m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
    // m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
    m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
    m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
    // m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
    m_wndimpFromDate.SetEvent(WE_CHECKVALUE, _OnimpFromDateCheckValueFnc);
    m_wndimpToDate.SetEvent(WE_CHECKVALUE, _OnimpToDateCheckValueFnc);
    m_wndImportDate.SetEvent(WE_CLICK, _OnImportDateSelectFnc);

    m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
    m_wndCash.SetEvent(WE_CLICK, _OnCashSelectFnc);
    m_wndTransfer.SetEvent(WE_CLICK, _OnTransferSelectFnc);
    m_szFromDate = m_szToDate = m_szimpFromDate = m_szimpToDate =
        pMF->GetSysDate();
    m_szFromDate += _T(" 00:00");
    m_szimpFromDate += _T(" 00:00");
    m_szToDate += _T(" 23:59");
    m_szimpToDate += _T(" 23:59");

    UpdateData(false);
}
void CPMSSupplierPaymentList::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
    DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
    DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
    DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
    DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
    DDX_Radio(pDX, m_wndCash.GetDlgCtrlID(), m_nCash);
    DDX_Radio(pDX, m_wndTransfer.GetDlgCtrlID(), m_nTransfer);

    DDX_TextEx(pDX, m_wndimpFromDate.GetDlgCtrlID(), m_szimpFromDate);
    DDX_TextEx(pDX, m_wndimpToDate.GetDlgCtrlID(), m_szimpToDate);
    DDX_Check(pDX, m_wndImportDate.GetDlgCtrlID(), m_bImportDate);
}
void CPMSSupplierPaymentList::SetDefaultValues()
{

    m_szFromDate.Empty();
    m_szToDate.Empty();
    m_szItemGroupKey.Empty();
    m_szSourceKey.Empty();
    m_szSupplierKey.Empty();
    m_szStorageKey.Empty();
    m_szContractKey.Empty();
    m_nAll = 0;
    m_nCash = 1;
    m_nTransfer = 1;
    m_szimpFromDate.Empty();
    m_szimpToDate.Empty();
    m_bImportDate = FALSE;
}
int CPMSSupplierPaymentList::SetMode(int nMode)
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

    m_wndimpFromDate.EnableWindow(false);
    m_wndimpToDate.EnableWindow(false);
    UpdateData(FALSE);
    return nOldMode;
}
/*void CPMSSupplierPaymentList::OnFromDateChange(){

} */
/*void CPMSSupplierPaymentList::OnFromDateSetfocus(){

} */
/*void CPMSSupplierPaymentList::OnFromDateKillfocus(){

} */
int CPMSSupplierPaymentList::OnFromDateCheckValue() { return 0; }
/*void CPMSSupplierPaymentList::OnToDateChange(){

} */
/*void CPMSSupplierPaymentList::OnToDateSetfocus(){

} */
/*void CPMSSupplierPaymentList::OnToDateKillfocus(){

} */
int CPMSSupplierPaymentList::OnToDateCheckValue() { return 0; }
long CPMSSupplierPaymentList::OnSupplierLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
void CPMSSupplierPaymentList::OnStorageSelectChange(int nOldItemSel,
                                                    int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSSupplierPaymentList::OnStorageSelendok() {}
long CPMSSupplierPaymentList::OnStorageLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
    /*
        CRecord rs(&pMF->m_db);
        CString szSQL, szWhere;
        if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
         szWhere.Format(_T(" and id='%s' "), m_szStorageKey
    };
        m_wndStorage.DeleteAllItems();
        int nCount = 0;
        szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s
    ORDER BY id "), szWhere nCount = rs.ExecSQL(szSQL); while(!rs.IsEOF()){
            m_wndStorage.AddItems(
                rs.GetValue(_T("id")),
                rs.GetValue(_T("name")), NULL);
            rs.MoveNext();
        }
        return nCount;
    */
    return 0;
}
/*void CPMSSupplierPaymentList::OnStorageAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
void CPMSSupplierPaymentList::OnItemGroupSelectChange(int nOldItemSel,
                                                      int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSSupplierPaymentList::OnItemGroupSelendok() {}
/*void CPMSSupplierPaymentList::OnItemGroupSetfocus(){

}*/
/*void CPMSSupplierPaymentList::OnItemGroupKillfocus(){

}*/
long CPMSSupplierPaymentList::OnItemGroupLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szSQL.Format(_T(" SELECT DISTINCT product_type_id, ")
                 _T("                 product_type_name ")
                 _T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( ")
                 _T("'A1100', 'A1130', 'A1140', 'A1160', ")
                 _T("                                              'A1170', ")
                 _T("'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'A0000' ")
                 _T("                ELSE mpt_product_type_id ")
                 _T("                END product_type_id, ")
                 _T("                CASE WHEN mpt_product_type_id IN ( ")
                 _T("'A1100', 'A1130', 'A1140', 'A1160', ")
                 _T("                                              'A1170', ")
                 _T("'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thuốc' ")
                 _T("                ELSE mpt_name ")
                 _T("                END product_type_name ")
                 _T("         FROM   m_product_type ")
                 _T("         WHERE  mpt_org_id = '%s' ")
                 _T("            AND mpt_isactive = 'Y' AND ")
                 _T("mpt_product_type_id <> 'A1000') ")
                 _T(" ORDER BY product_type_id"),
                 pMF->GetModuleID());
    int nCount = rs.ExecSQL(szSQL);
    m_wndItemGroup.DeleteAllItems();
    while (!rs.IsEOF())
    {
        m_wndItemGroup.AddItems(rs.GetValue(_T("product_type_id")),
                                rs.GetValue(_T("product_type_name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CPMSSupplierPaymentList::OnItemGroupAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
void CPMSSupplierPaymentList::OnSourceSelectChange(int nOldItemSel,
                                                   int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSSupplierPaymentList::OnSourceSelendok() {}
/*void CPMSSupplierPaymentList::OnSourceSetfocus(){

}*/
/*void CPMSSupplierPaymentList::OnSourceKillfocus(){

}*/
long CPMSSupplierPaymentList::OnSourceLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadPaymentResourceList(&m_wndSource, m_szSourceKey);
    /*
        CRecord rs(&pMF->m_db);
        CString szSQL, szWhere;
        if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
         szWhere.Format(_T(" and id='%s' "), m_szSourceKey
    };
        m_wndSource.DeleteAllItems();
        int nCount = 0;
        szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s
    ORDER BY id "), szWhere nCount = rs.ExecSQL(szSQL); while(!rs.IsEOF()){
            m_wndSource.AddItems(
            rs.MoveNext();
        }
        return nCount;
    */
    return 0;
}
/*void CPMSSupplierPaymentList::OnSourceAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */

void CPMSSupplierPaymentList::OnContractSelectChange(int nOldItemSel,
                                                     int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSSupplierPaymentList::OnContractSelendok() {}
/*void CPMSSupplierPaymentList::OnContractSetfocus(){

}*/
/*void CPMSSupplierPaymentList::OnContractKillfocus(){

}*/
long CPMSSupplierPaymentList::OnContractLoadData()
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
/*void CPMSSupplierPaymentList::OnContractAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CPMSSupplierPaymentList::OnAllSelect() {}
void CPMSSupplierPaymentList::OnCashSelect() {}
void CPMSSupplierPaymentList::OnTransferSelect() {}

int CPMSSupplierPaymentList::OnimpFromDateCheckValue() { return 0; }

int CPMSSupplierPaymentList::OnimpToDateCheckValue() { return 0; }
void CPMSSupplierPaymentList::OnImportDateSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    if (m_bImportDate)
    {
        m_wndimpFromDate.EnableWindow(true);
        m_wndimpToDate.EnableWindow(true);
    }
    else
    {
        m_wndimpFromDate.EnableWindow(FALSE);
        m_wndimpToDate.EnableWindow(FALSE);
    }
}

void CPMSSupplierPaymentList::OnPrintPreviewSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CGuiMenu menu(this);
    CString tmpStr;
    menu.CreatePopupMenu();
    tmpStr.Format(_T("Mẫu 1"));
    menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 1 (ngang)"));
    menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 2 cho thuế"));
    menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 3 chi tiết"));
    menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 3 chi tiết (ngang)"));
    menu.AppendMenu(MF_BYPOSITION, 5, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 4 theo ngày nhập kho"));
    menu.AppendMenu(MF_BYPOSITION, 6, tmpStr);
    CRect rect;
    m_wndExport.GetWindowRect(&rect);
    int nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_RIGHTALIGN |
                                       TPM_BOTTOMALIGN | TPM_NONOTIFY,
                                   rect.right, rect.top, this);
    switch (nPos)
    {
    case 1:
        OnPrint();
        break;
    case 2:
        OnPrint(TRUE);
        break;
    case 3:
        OnPrint2();
        break;
    case 4:
        OnPrint3();
        break;
    case 5:
        OnPrint3(TRUE);
        break;
    case 6:
        OnPrint4();
        break;
    }
}
void CPMSSupplierPaymentList::OnPrint(BOOL bLandscape)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL;
    double nTmp = 0;
    int nIdx = 1, nIdx2 = 0;
    CString szSQL, tmpStr, szReportName, szDate, szOldLev1, szNewLev1, szField,
        szTemp, szStorages, szSources, szFilePath, szFileName, szPrevGroup2,
        szGroup2;
    double nTotal = 0, nGroupTotal1 = 0, nTotal2 = 0, nGroupTotal2 = 0,
           nContract_total = 0;
    szFileName = _T("PM_BANGKETHANHTOANCONGNO");
    if (bLandscape == TRUE)
    {
        szFileName += _T("_NGANG");
    }
    szFilePath.Format(_T("Reports/HMS/%s.RPT"), szFileName);
    if (!rpt.Init(szFilePath))
        return;
    szSQL = GetQueryString1();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    rptHeader = rpt.GetReportHeader();
    if (rptHeader)
    {
        rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
        rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
        rptHeader->SetValue(_T("DeptName"),
                            pMF->GetDepartmentName(pMF->GetDepartmentID()));
        tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
        rptHeader->SetValue(_T("ReportDate"), tmpStr);
        for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
        {
            if (m_wndStorage.GetCheck(i))
            {
                m_wndStorage.SetCurSel(i);
                if (!szStorages.IsEmpty())
                    szStorages += _T(", ");
                szStorages += m_wndStorage.GetCurrent(1);
            }
        }
        if (!szStorages.IsEmpty())
            rptHeader->SetValue(_T("Storage"), szStorages);
        else
            rptHeader->SetValue(_T("Storage"), _T("Toàn bộ"));
        if (!m_szItemGroupKey.IsEmpty())
            rptHeader->SetValue(_T("ItemType"), m_wndItemGroup.GetCurrent(1));
        else
            rptHeader->SetValue(_T("ItemType"), _T("Toàn bộ"));
        for (int i = 0; i < m_wndSource.GetItemCount(); i++)
        {
            if (m_wndSource.GetCheck(i))
            {
                m_wndSource.SetCurSel(i);
                if (!szSources.IsEmpty())
                    szSources += _T(", ");
                szSources += m_wndSource.GetCurrent(1);
            }
        }
        if (!szSources.IsEmpty())
            rptHeader->SetValue(_T("Source"), szSources);
        else
            rptHeader->SetValue(_T("Source"), _T("Toàn bộ"));
    }
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnername"), szNewLev1);
        rs.GetValue(_T("contract_no"), szGroup2);
        if (szOldLev1 != szNewLev1)
        {
            if (nContract_total > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nContract_total);
                rptGroup->SetValue(_T("s6"), tmpStr);
                rptGroup->SetValue(_T("tongso"), _T("Tổng HĐ"));
                nContract_total = 0;
            }
            if (nGroupTotal1 > 0 || nGroupTotal2 > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nGroupTotal1);
                rptGroup->SetValue(_T("s6"), tmpStr);
                tmpStr.Format(_T("%f"), nGroupTotal2);
                rptGroup->SetValue(_T("s7"), tmpStr);

                if (nGroupTotal2 > 0)
                {
                    rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                    tmpStr.Format(_T("%f"), nGroupTotal1 - nGroupTotal2);
                    rptGroup->SetValue(_T("s6"), tmpStr);
                }
                rptGroup->SetValue(_T("tongso"), _T("Tổng cộng"));
                nTotal += nGroupTotal1;
                nTotal2 += nGroupTotal2;
                nGroupTotal1 = 0;
                nGroupTotal2 = 0;
            }
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
            if (rptGroup)
                rptGroup->SetValue(_T("GroupName"), szNewLev1);
            nIdx2++;
            szOldLev1 = szNewLev1;
            szPrevGroup2 = _T("XXX");
        }
        if (szGroup2 != szPrevGroup2)
        {
            if (nContract_total > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nContract_total);
                rptGroup->SetValue(_T("s6"), tmpStr);
                rptGroup->SetValue(_T("tongso"), _T("Tổng HĐ"));
                nContract_total = 0;
            }
            szPrevGroup2 = szGroup2;
        }
        rptDetail = rpt.AddDetail();
        if (rptDetail)
        {
            rptDetail->SetValue(_T("1"), int2str(nIdx++));
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("invoiceno")));
            rs.GetValue(_T("invoicedate"), tmpStr);
            rptDetail->SetValue(_T("3"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("orderno")));
            rs.GetValue(_T("importdate"), tmpStr);
            rptDetail->SetValue(_T("5"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rs.GetValue(_T("amount"), nTmp);
            nGroupTotal1 += nTmp;
            nContract_total += nTmp;
            rptDetail->SetValue(_T("6"), double2str(nTmp));
            rs.GetValue(_T("reamount"), nTmp);
            nGroupTotal2 += nTmp;
            rptDetail->SetValue(_T("7"), double2str(nTmp));
            rptDetail->SetValue(_T("8"), rs.GetValue(_T("contractpkg_id")));
            rptDetail->SetValue(_T("9"), rs.GetValue(_T("contract_no")));
            rptDetail->SetValue(_T("10"),
                                rs.GetValue(_T("contract_signedate")));
            // rptDetail->SetValue(_T("8.3"),
            // rs.GetValue(_T("contract_performdate")));
        }
        rs.MoveNext();
    }
    if (nGroupTotal1 > 0 || nGroupTotal2 > 0)
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(_T("%f"), nGroupTotal1);
        rptGroup->SetValue(_T("s6"), tmpStr);
        tmpStr.Format(_T("%f"), nGroupTotal2);
        rptGroup->SetValue(_T("s7"), tmpStr);

        if (nGroupTotal2 > 0)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
            tmpStr.Format(_T("%f"), nGroupTotal1 - nGroupTotal2);
            rptGroup->SetValue(_T("s6"), tmpStr);
        }

        nTotal += nGroupTotal1;
        nTotal2 += nGroupTotal2;
    }
    if (nIdx2 > 1)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("s6"), ToString(nTotal));
        rptDetail->SetValue(_T("s7"), ToString(nTotal2));

        if (nTotal2 > 0)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
            tmpStr.Format(_T("%f"), nTotal - nTotal2);
            rptGroup->SetValue(_T("s6"), tmpStr);
        }
    }
    rptDetail = rpt.GetReportFooter();
    rptDetail->SetValue(_T("TotalItem"), int2str(nIdx2++));
    tmpStr.Format(_T("%f"), nTotal - nTotal2);
    rptDetail->SetValue(_T("TotalAmount"), tmpStr);
    szSQL = GetQueryString2();
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        // l1..l4
        int nIdx = 1;
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szTemp = rs.GetFieldName(i);
            szField.Format(_T("%s%s"), szTemp.Left(1),
                           szTemp.Right(szTemp.GetLength() - 1).MakeLower());
            rs.GetValue(szField, nTmp);
            if (nTmp > 0)
            {
                tmpStr.Format(_T("l%d"), nIdx);
                TranslateString(szField, szTemp);
                szTemp.AppendFormat(_T(" :"));
                rptDetail->SetValue(tmpStr, szTemp);
                tmpStr.Format(_T("s%d"), nIdx);
                FormatCurrency(nTmp, szTemp);
                szTemp += _T(" đồng.");
                rptDetail->SetValue(tmpStr, szTemp);
                nIdx++;
            }
        }
    }
    tmpStr = pMF->GetSysDate();
    szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  tmpStr.Right(2), tmpStr.Mid(5, 2), tmpStr.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
    rpt.GetReportFooter()->SetValue(_T("Username"),
                                    pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}
void CPMSSupplierPaymentList::OnPrint2()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CRecord rs2(&pMF->m_db);
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL;
    double nTmp = 0;
    int nIdx = 1, nIdx2 = 0;
    CString szSQL, tmpStr, szReportName, szDate, szOldLev1, szNewType,
        szOldType, szNewLev1, szField, szTemp, szStorages, szSources,
        szFromDate, szToDate;
    szOldLev1.Empty();
    szOldType.Empty();
    double nTotal = 0, nGroupTotal1 = 0, nGroupType = 0;
    if (!rpt.Init(_T("Reports/HMS/PM_BANGKETHANHTOANCONGNO_THUE.RPT")))
        return;
    szSQL = GetQueryString6();
    rs2.ExecSQL(szSQL);
    if (rs2.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }

    while (!rs2.IsEOF())
    {
        rs2.GetValue(_T("startdate"), szFromDate);
        rs2.GetValue(_T("enddate"), szToDate);
        rs2.MoveNext();
    }

    szSQL = GetQueryString3();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    rptHeader = rpt.GetReportHeader();
    if (rptHeader)
    {
        rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
        rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
        rptHeader->SetValue(_T("DeptName"),
                            pMF->GetDepartmentName(pMF->GetDepartmentID()));
        tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                      CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(szToDate), yyyymmdd, ddmmyyyy);
        rptHeader->SetValue(_T("ReportDate"), tmpStr);
        for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
        {
            if (m_wndStorage.GetCheck(i))
            {
                m_wndStorage.SetCurSel(i);
                if (!szStorages.IsEmpty())
                    szStorages += _T(", ");
                szStorages += m_wndStorage.GetCurrent(1);
            }
        }
        if (!szStorages.IsEmpty())
            rptHeader->SetValue(_T("Storage"), szStorages);
        else
            rptHeader->SetValue(_T("Storage"), _T("Toàn bộ"));
        if (!m_szItemGroupKey.IsEmpty())
            rptHeader->SetValue(_T("ItemType"), m_wndItemGroup.GetCurrent(1));
        else
            rptHeader->SetValue(_T("ItemType"), _T("Toàn bộ"));
        for (int i = 0; i < m_wndSource.GetItemCount(); i++)
        {
            if (m_wndSource.GetCheck(i))
            {
                m_wndSource.SetCurSel(i);
                if (!szSources.IsEmpty())
                    szSources += _T(", ");
                szSources += m_wndSource.GetCurrent(1);
            }
        }
        if (!szSources.IsEmpty())
            rptHeader->SetValue(_T("Source"), szSources);
        else
            rptHeader->SetValue(_T("Source"), _T("Toàn bộ"));
    }
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnername"), szNewLev1);
        if (szOldLev1 != szNewLev1)
        {
            if (nGroupType > 0)
            {
                tmpStr.Format(_T("%f"), nGroupType);
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                rptGroup->SetValue(_T("tongso"), _T("Tổng nhóm"));
                rptGroup->SetValue(_T("s6"), tmpStr);
                if (szOldType == _T("1"))
                    nGroupTotal1 += nGroupType;
                else
                    nGroupTotal1 -= nGroupType;
                nGroupType = 0;
            }

            if (szOldType == _T("2"))
            {
                tmpStr.Format(_T("%f"), nGroupTotal1);
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                rptGroup->SetValue(_T("tongso"), _T("Tổng nhà cung cấp"));
                rptGroup->SetValue(_T("s6"), tmpStr);
                nTotal += nGroupTotal1;
                nGroupTotal1 = 0;
            }
            else
            {
                nTotal += nGroupTotal1;
                nGroupTotal1 = 0;
            }
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
            if (rptGroup)
                rptGroup->SetValue(_T("GroupName"), szNewLev1);
            nIdx2++;
            szOldLev1 = szNewLev1;
            szOldType.Empty();
        }

        rs.GetValue(_T("ptype"), szNewType);
        if (szOldType != szNewType)
        {
            if (nGroupType > 0)
            {
                tmpStr.Format(_T("%f"), nGroupType);
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                rptGroup->SetValue(_T("tongso"), _T("Tổng nhóm"));
                rptGroup->SetValue(_T("s6"), tmpStr);
                if (szOldType == _T("1"))
                    nGroupTotal1 += nGroupType;
                else
                    nGroupTotal1 -= nGroupType;
                nGroupType = 0;
            }
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
            if (szNewType == _T("1"))
                rptGroup->SetValue(_T("GroupName"), _T("Nhập hóa đơn"));
            else
                rptGroup->SetValue(_T("GroupName"), _T("Trả lại hàng"));
            szOldType = szNewType;
            nIdx = 1;
        }

        rptDetail = rpt.AddDetail();
        if (rptDetail)
        {
            rptDetail->SetValue(_T("1"), int2str(nIdx++));
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("invoiceno")));
            rs.GetValue(_T("invoicedate"), tmpStr);
            rptDetail->SetValue(_T("3"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("orderno")));
            rs.GetValue(_T("importdate"), tmpStr);
            rptDetail->SetValue(_T("5"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rs.GetValue(_T("amount"), nTmp);
            nGroupType += nTmp;
            rptDetail->SetValue(_T("6"), double2str(nTmp));
            rptDetail->SetValue(_T("7"), rs.GetValue(_T("typename")));
            rptDetail->SetValue(_T("8"), rs.GetValue(_T("pcount")));
        }
        rs.MoveNext();
    }

    if (nGroupType > 0)
    {
        tmpStr.Format(_T("%f"), nGroupType);
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptGroup->SetValue(_T("tongso"), _T("Tổng nhóm"));
        rptGroup->SetValue(_T("s6"), tmpStr);
        if (szOldType == _T("1"))
            nGroupTotal1 += nGroupType;
        else
            nGroupTotal1 -= nGroupType;
    }

    if (szOldType == _T("2"))
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptGroup->SetValue(_T("tongso"), _T("Tổng nhà cung cấp"));
        rptGroup->SetValue(_T("s6"), double2str(nGroupTotal1));
        nTotal += nGroupTotal1;
    }
    else
        nTotal += nGroupTotal1;

    if (nIdx2 > 2)
    {
        if (nTotal > 0)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
            rptGroup->SetValue(_T("s6"), ToString(nTotal));
        }
    }

    rptDetail = rpt.GetReportFooter();
    rptDetail->SetValue(_T("TotalItem"), int2str(nIdx2++));
    tmpStr.Format(_T("%f"), nTotal);
    rptDetail->SetValue(_T("TotalAmount"), tmpStr);
    szSQL = GetQueryString2();
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        // l1..l4
        int nIdx = 1;
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szTemp = rs.GetFieldName(i);
            szField.Format(_T("%s%s"), szTemp.Left(1),
                           szTemp.Right(szTemp.GetLength() - 1).MakeLower());
            rs.GetValue(szField, nTmp);
            if (nTmp > 0)
            {
                tmpStr.Format(_T("l%d"), nIdx);
                TranslateString(szField, szTemp);
                szTemp.AppendFormat(_T(" :"));
                rptDetail->SetValue(tmpStr, szTemp);
                tmpStr.Format(_T("s%d"), nIdx);
                FormatCurrency(nTmp, szTemp);
                szTemp += _T(" đồng.");
                rptDetail->SetValue(tmpStr, szTemp);
                nIdx++;
            }
        }
    }

    szTemp.Format(_T("%.2f"), nTotal);
    MoneyToString(szTemp, tmpStr);
    tmpStr += _T(" đồng.");
    rpt.GetReportFooter()->SetValue(_T("SumInWords"), tmpStr);
    tmpStr = pMF->GetSysDate();
    szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  tmpStr.Right(2), tmpStr.Mid(5, 2), tmpStr.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
    rpt.GetReportFooter()->SetValue(_T("Username"),
                                    pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}
void CPMSSupplierPaymentList::OnPrint3(BOOL bLandscape)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL;
    double nTmp = 0;
    int nIdx = 1, nIdx2 = 0;
    CString szSQL, tmpStr, szReportName, szDate, szOldLev1, szNewLev1, szField,
        szTemp, szStorages, szSources, szOldType, szNewType, szFilePath,
        szFileName;
    double nTotal = 0, nGroupTotal = 0, nTypeTotal = 0;
    szFileName = _T("PM_BANGKETHANHTOANCONGNO_CHITIET");
    if (bLandscape == TRUE)
    {
        szFileName += _T("_NGANG");
    }
    szFilePath.Format(_T("Reports\\HMS\\%s.RPT"), szFileName);
    if (!rpt.Init(szFilePath))
        return;
    szSQL = GetQueryString4();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    rptHeader = rpt.GetReportHeader();
    if (rptHeader)
    {
        rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
        rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
        rptHeader->SetValue(_T("DeptName"),
                            pMF->GetDepartmentName(pMF->GetDepartmentID()));
        tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
        rptHeader->SetValue(_T("ReportDate"), tmpStr);
        for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
        {
            if (m_wndStorage.GetCheck(i))
            {
                m_wndStorage.SetCurSel(i);
                if (!szStorages.IsEmpty())
                    szStorages += _T(", ");
                szStorages += m_wndStorage.GetCurrent(1);
            }
        }
        if (!szStorages.IsEmpty())
            rptHeader->SetValue(_T("Storage"), szStorages);
        else
            rptHeader->SetValue(_T("Storage"), _T("Toàn bộ"));
        if (!m_szItemGroupKey.IsEmpty())
            rptHeader->SetValue(_T("ItemType"), m_wndItemGroup.GetCurrent(1));
        else
            rptHeader->SetValue(_T("ItemType"), _T("Toàn bộ"));
        for (int i = 0; i < m_wndSource.GetItemCount(); i++)
        {
            if (m_wndSource.GetCheck(i))
            {
                m_wndSource.SetCurSel(i);
                if (!szSources.IsEmpty())
                    szSources += _T(", ");
                szSources += m_wndSource.GetCurrent(1);
            }
        }
        if (!szSources.IsEmpty())
            rptHeader->SetValue(_T("Source"), szSources);
        else
            rptHeader->SetValue(_T("Source"), _T("Toàn bộ"));
    }
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnername"), szNewLev1);
        if (szOldLev1 != szNewLev1)
        {
            if (nTypeTotal > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nTypeTotal);
                rptGroup->SetValue(_T("s9"), tmpStr);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
                szOldType = _T("");
            }

            if (nGroupTotal > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nGroupTotal);
                rptGroup->SetValue(_T("s9"), tmpStr);
                nTotal += nGroupTotal;
                nGroupTotal = 0;
            }
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
            if (rptGroup)
                rptGroup->SetValue(_T("GroupName"), szNewLev1);
            nIdx2++;
            szOldLev1 = szNewLev1;
        }

        rs.GetValue(_T("ptype"), szNewType);
        if (szOldType != szNewType)
        {
            if (nTypeTotal > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nTypeTotal);
                rptGroup->SetValue(_T("s9"), tmpStr);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
            }
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
            if (szNewType == _T("1"))
                rptGroup->SetValue(_T("GroupName"), _T("Phiếu nhập"));
            else
                rptGroup->SetValue(_T("GroupName"), _T("Trả lại"));
            szOldType = szNewType;
            nIdx = 1;
        }

        rptDetail = rpt.AddDetail();
        if (rptDetail)
        {
            rptDetail->SetValue(_T("1"), int2str(nIdx++));
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("invoiceno")));
            rs.GetValue(_T("invoicedate"), tmpStr);
            rptDetail->SetValue(_T("3"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rptDetail->SetValue(_T("3.1"), rs.GetValue(_T("contractpkg_id")));
            rptDetail->SetValue(_T("3.2"), rs.GetValue(_T("contract_no")));
            rptDetail->SetValue(_T("3.3"), rs.GetValue(_T("contract_sd")));
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("orderno")));
            rs.GetValue(_T("importdate"), tmpStr);
            rptDetail->SetValue(_T("5"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rs.GetValue(_T("amount"), nTmp);
            rptDetail->SetValue(_T("6"), double2str(nTmp));
            rs.GetValue(_T("reamount"), nTmp);
            rptDetail->SetValue(_T("7"), double2str(nTmp));
            rptDetail->SetValue(_T("8"), rs.GetValue(_T("productname")));
            rs.GetValue(_T("pdamount"), nTmp);
            nTypeTotal += nTmp;
            rptDetail->SetValue(_T("9"), double2str(nTmp));
        }
        rs.MoveNext();
    }
    if (nTypeTotal > 0)
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(_T("%f"), nTypeTotal);
        rptGroup->SetValue(_T("s9"), tmpStr);
        if (szOldType == _T("1"))
            nGroupTotal += nTypeTotal;
        else
            nGroupTotal -= nTypeTotal;
    }
    if (nGroupTotal > 0)
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(_T("%f"), nGroupTotal);
        rptGroup->SetValue(_T("s9"), tmpStr);
        nTotal += nGroupTotal;
    }
    if (nIdx2 > 1)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("s9"), ToString(nTotal));
    }
    rptDetail = rpt.GetReportFooter();
    rptDetail->SetValue(_T("TotalItem"), int2str(nIdx2++));
    tmpStr.Format(_T("%f"), nTotal);
    rptDetail->SetValue(_T("TotalAmount"), tmpStr);
    szSQL = GetQueryString2();
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        // l1..l4
        int nIdx = 1;
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szTemp = rs.GetFieldName(i);
            szField.Format(_T("%s%s"), szTemp.Left(1),
                           szTemp.Right(szTemp.GetLength() - 1).MakeLower());
            rs.GetValue(szField, nTmp);
            if (nTmp > 0)
            {
                tmpStr.Format(_T("l%d"), nIdx);
                TranslateString(szField, szTemp);
                szTemp.AppendFormat(_T(" :"));
                rptDetail->SetValue(tmpStr, szTemp);
                tmpStr.Format(_T("s%d"), nIdx);
                FormatCurrency(nTmp, szTemp);
                szTemp += _T(" đồng.");
                rptDetail->SetValue(tmpStr, szTemp);
                nIdx++;
            }
        }
    }
    tmpStr = pMF->GetSysDate();
    szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  tmpStr.Right(2), tmpStr.Mid(5, 2), tmpStr.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
    rpt.GetReportFooter()->SetValue(_T("Username"),
                                    pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}
void CPMSSupplierPaymentList::OnPrint4()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL;
    double nTmp = 0;
    int nIdx = 1, nIdx2 = 0;
    CString szSQL, tmpStr, szReportName, szDate, szOldLev1, szNewLev1, szField,
        szTemp, szStorages, szSources, szOldType, szNewType;
    double nTotal = 0, nGroupTotal = 0, nTypeTotal = 0;
    if (!rpt.Init(_T("Reports/HMS/PM_BANGKETHANHTOANCONGNO_CHITIET.RPT")))
        return;
    szSQL = GetQueryString7();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    rptHeader = rpt.GetReportHeader();
    if (rptHeader)
    {
        rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
        rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
        rptHeader->SetValue(_T("DeptName"),
                            pMF->GetDepartmentName(pMF->GetDepartmentID()));
        tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
        rptHeader->SetValue(_T("ReportDate"), tmpStr);
        for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
        {
            if (m_wndStorage.GetCheck(i))
            {
                m_wndStorage.SetCurSel(i);
                if (!szStorages.IsEmpty())
                    szStorages += _T(", ");
                szStorages += m_wndStorage.GetCurrent(1);
            }
        }
        if (!szStorages.IsEmpty())
            rptHeader->SetValue(_T("Storage"), szStorages);
        else
            rptHeader->SetValue(_T("Storage"), _T("Toàn bộ"));
        if (!m_szItemGroupKey.IsEmpty())
            rptHeader->SetValue(_T("ItemType"), m_wndItemGroup.GetCurrent(1));
        else
            rptHeader->SetValue(_T("ItemType"), _T("Toàn bộ"));
        for (int i = 0; i < m_wndSource.GetItemCount(); i++)
        {
            if (m_wndSource.GetCheck(i))
            {
                m_wndSource.SetCurSel(i);
                if (!szSources.IsEmpty())
                    szSources += _T(", ");
                szSources += m_wndSource.GetCurrent(1);
            }
        }
        if (!szSources.IsEmpty())
            rptHeader->SetValue(_T("Source"), szSources);
        else
            rptHeader->SetValue(_T("Source"), _T("Toàn bộ"));
    }
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnername"), szNewLev1);
        if (szOldLev1 != szNewLev1)
        {
            if (nTypeTotal > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nTypeTotal);
                rptGroup->SetValue(_T("s9"), tmpStr);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
                szOldType = _T("");
            }

            if (nGroupTotal > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nGroupTotal);
                rptGroup->SetValue(_T("s9"), tmpStr);
                nTotal += nGroupTotal;
                nGroupTotal = 0;
            }
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
            if (rptGroup)
                rptGroup->SetValue(_T("GroupName"), szNewLev1);
            nIdx2++;
            szOldLev1 = szNewLev1;
        }

        rs.GetValue(_T("ptype"), szNewType);
        if (szOldType != szNewType)
        {
            if (nTypeTotal > 0)
            {
                rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(_T("%f"), nTypeTotal);
                rptGroup->SetValue(_T("s9"), tmpStr);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
            }
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
            if (szNewType == _T("1"))
                rptGroup->SetValue(_T("GroupName"), _T("Phiếu nhập"));
            else
                rptGroup->SetValue(_T("GroupName"), _T("Trả lại"));
            szOldType = szNewType;
            nIdx = 1;
        }

        rptDetail = rpt.AddDetail();
        if (rptDetail)
        {
            rptDetail->SetValue(_T("1"), int2str(nIdx++));
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("invoiceno")));
            rs.GetValue(_T("invoicedate"), tmpStr);
            rptDetail->SetValue(_T("3"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("orderno")));
            rs.GetValue(_T("importdate"), tmpStr);
            rptDetail->SetValue(_T("5"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rs.GetValue(_T("amount"), nTmp);
            rptDetail->SetValue(_T("6"), double2str(nTmp));
            rs.GetValue(_T("reamount"), nTmp);
            rptDetail->SetValue(_T("7"), double2str(nTmp));
            rptDetail->SetValue(_T("8"), rs.GetValue(_T("productname")));
            rs.GetValue(_T("pdamount"), nTmp);
            nTypeTotal += nTmp;
            rptDetail->SetValue(_T("9"), double2str(nTmp));
        }
        rs.MoveNext();
    }
    if (nTypeTotal > 0)
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(_T("%f"), nTypeTotal);
        rptGroup->SetValue(_T("s9"), tmpStr);
        if (szOldType == _T("1"))
            nGroupTotal += nTypeTotal;
        else
            nGroupTotal -= nTypeTotal;
    }
    if (nGroupTotal > 0)
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(_T("%f"), nGroupTotal);
        rptGroup->SetValue(_T("s9"), tmpStr);
        nTotal += nGroupTotal;
    }
    if (nIdx2 > 1)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("s9"), ToString(nTotal));
    }
    rptDetail = rpt.GetReportFooter();
    rptDetail->SetValue(_T("TotalItem"), int2str(nIdx2++));
    tmpStr.Format(_T("%f"), nTotal);
    rptDetail->SetValue(_T("TotalAmount"), tmpStr);
    szSQL = GetQueryString8();
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        // l1..l4
        int nIdx = 1;
        for (int i = 0; i < rs.GetFieldCount(); i++)
        {
            szTemp = rs.GetFieldName(i);
            szField.Format(_T("%s%s"), szTemp.Left(1),
                           szTemp.Right(szTemp.GetLength() - 1).MakeLower());
            rs.GetValue(szField, nTmp);
            if (nTmp > 0)
            {
                tmpStr.Format(_T("l%d"), nIdx);
                TranslateString(szField, szTemp);
                szTemp.AppendFormat(_T(" :"));
                rptDetail->SetValue(tmpStr, szTemp);
                tmpStr.Format(_T("s%d"), nIdx);
                FormatCurrency(nTmp, szTemp);
                szTemp += _T(" đồng.");
                rptDetail->SetValue(tmpStr, szTemp);
                nIdx++;
            }
        }
    }
    tmpStr = pMF->GetSysDate();
    szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  tmpStr.Right(2), tmpStr.Mid(5, 2), tmpStr.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
    rpt.GetReportFooter()->SetValue(_T("Username"),
                                    pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}
void CPMSSupplierPaymentList::OnExportSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CGuiMenu menu(this);
    CString tmpStr;
    menu.CreatePopupMenu();
    tmpStr.Format(_T("Mẫu 1"));
    menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 3 chi tiết"));
    menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 4 theo ngày nhập kho"));
    menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);
    CRect rect;
    m_wndExport.GetWindowRect(&rect);
    int nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_RIGHTALIGN |
                                       TPM_BOTTOMALIGN | TPM_NONOTIFY,
                                   rect.right, rect.top, this);
    switch (nPos)
    {
    case 1:
        OnExport();
        break;
    case 3:
        OnExport3();
        break;
    case 4:
        OnExport4();
        break;
    }
}

void CPMSSupplierPaymentList::OnExport()
{
    _debug(_T("%s"), CString(typeid(this).name()));
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CExcel xls;
    CString szSQL, tmpStr, szTemp, szOrderID;
    CString szOldLine, szNewLine;
    CRecord rs(&pMF->m_db);
    int nIdx = 0, nIndex = 1;
    double nTmp = 0, nGrpAmt = 0, nGrpAmt2 = 0;
    double nTotalAmt = 0, nTotalAmt2 = 0;
    szSQL = GetQueryString1();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
        return;
    }
    xls.CreateSheet(1);
    xls.SetWorksheet(0);
    // Header Section
    xls.SetColumnWidth(0, 5);
    xls.SetColumnWidth(1, 25);
    xls.SetColumnWidth(2, 12);
    xls.SetColumnWidth(3, 15);
    xls.SetColumnWidth(4, 12);
    xls.SetColumnWidth(5, 15);
    int nCol = 0;
    int nRow = 0;

    xls.SetCellMergedColumns(nCol, nRow + 1, 2);
    xls.SetCellMergedColumns(nCol, nRow + 2, 2);
    xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService,
                    FMT_TEXT | FMT_CENTER, true, 10);
    xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName,
                    FMT_TEXT | FMT_CENTER, true, 10);

    xls.SetCellMergedColumns(nCol, nRow + 3, 7);
    xls.SetCellText(nCol, nRow + 3, _T("DANH SÁCH THANH TOÁN NỢ CÁC CÔNG TY"),
                    FMT_TEXT | FMT_CENTER, true, 12);
    xls.SetCellMergedColumns(nCol, nRow + 4, 7);
    tmpStr.Format(
        _T("Từ %s Đến %s"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
    xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    // Col Head
    nRow = 5;
    xls.SetCellText(nCol, nRow, _T("STT"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 1, nRow, _T("Số hóa đơn"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 2, nRow, _T("Ngày hóa đơn"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 3, nRow, _T("Số phiếu nhập"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 4, nRow, _T("Ngày nhập"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 5, nRow, _T("Số tiền"), FMT_TEXT | FMT_CENTER, true);
    xls.SetCellText(nCol + 6, nRow, _T("Số UNC"), FMT_TEXT | FMT_CENTER, true);
    xls.SetCellText(nCol + 7, nRow, _T("Ký nhận"), FMT_TEXT | FMT_CENTER, true);
    xls.SetCellText(nCol + 8, nRow, _T("Số hợp đồng"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 9, nRow, _T("Số quyết định"), FMT_TEXT | FMT_CENTER,
                    true);
    nRow = 6;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnername"), szNewLine);
        if (szNewLine != szOldLine)
        {
            if (nGrpAmt > 0 || nGrpAmt2 > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 5);
                xls.SetCellText(nCol, nRow, _T("Tổng cộng"),
                                FMT_TEXT | FMT_CENTER, true);
                tmpStr.Format(_T("%.2f"), nGrpAmt);
                xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);
                tmpStr.Format(_T("%.2f"), nGrpAmt2);
                xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1);
                nRow++;
                nTotalAmt += nGrpAmt;
                nTotalAmt2 += nGrpAmt2;
                nGrpAmt = 0;
                nGrpAmt2 = 0;
            }
            xls.SetCellMergedColumns(nCol, nRow, 8);
            xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT | FMT_CENTER, true);
            szOldLine = szNewLine;
            nIdx++;
            nRow++;
            nIndex = 1;
        }
        xls.SetCellText(nCol, nRow, int2str(nIndex), FMT_TEXT | FMT_RIGHT);
        if (!szOrderID.IsEmpty())
            szOrderID += _T(", ");
        szOrderID += rs.GetValue(_T("id"));
        xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("invoiceno")), FMT_TEXT);
        rs.GetValue(_T("invoicedate"), tmpStr);
        xls.SetCellText(nCol + 2, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),
                        FMT_TEXT | FMT_CENTER);
        xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("orderno")), FMT_TEXT);
        rs.GetValue(_T("importdate"), tmpStr);
        xls.SetCellText(nCol + 4, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),
                        FMT_TEXT | FMT_CENTER);
        rs.GetValue(_T("amount"), nTmp);
        nGrpAmt += nTmp;
        xls.SetCellText(nCol + 5, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("reamountCN"), nTmp);
        nGrpAmt2 += nTmp;
        xls.SetCellText(nCol + 6, nRow, double2str(nTmp), FMT_NUMBER1);
        xls.SetCellText(nCol + 8, nRow, rs.GetValue(_T("contract_no")),
                        FMT_TEXT);
        xls.SetCellText(nCol + 9, nRow, rs.GetValue(_T("contractpkg_id")),
                        FMT_TEXT);
        nRow++;
        rs.MoveNext();
    }
    if (nGrpAmt > 0 || nGrpAmt2 > 0)
    {
        xls.SetCellMergedColumns(nCol, nRow, 5);
        xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER,
                        true);
        tmpStr.Format(_T("%.2f"), nGrpAmt);
        xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);
        tmpStr.Format(_T("%.2f"), nGrpAmt2);
        xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1);
        nRow++;
        nTotalAmt += nGrpAmt;
        nTotalAmt2 += nGrpAmt2;
    }
    if (nTotalAmt > 0 || nTotalAmt2 > 0)
    {
        szTemp.Format(_T("%f"), nTotalAmt - nTotalAmt2);
        tmpStr.Format(
            _T("Kết toán bảng này gồm %d công ty với tổng tiền là %s"), nIdx,
            szTemp);
        xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT);
    }
    // Detail by group

    // szSQL = GetQueryString2();
    // rs.ExecSQL(szSQL);
    // if (!rs.IsEOF())
    //{
    //	nRow++;
    //	rs.GetValue(_T("thuoc"), nTmp);
    //	szTemp.Format(_T("%ld"), nTmp);
    //	if (szTemp.IsEmpty())
    //		szTemp = _T("0");
    //	tmpStr.Format(_T("Thuốc: %s đồng"), szTemp);
    //	xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
    //	nRow++;
    //	rs.GetValue(_T("hoachat"), nTmp);
    //	szTemp.Format(_T("%ld"), nTmp);
    //	if (szTemp.IsEmpty())
    //		szTemp = _T("0");
    //	tmpStr.Format(_T("Hóa chất: %s đồng"), szTemp);
    //	xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
    //	nRow++;
    //	rs.GetValue(_T("bbg"), nTmp);
    //	szTemp.Format(_T("%ld"), nTmp);
    //	if (szTemp.IsEmpty())
    //		szTemp = _T("0");
    //	tmpStr.Format(_T("Bông băng gạc: %s đồng"), szTemp);
    //	xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
    //	nRow++;
    //	rs.GetValue(_T("duoclieu"), nTmp);
    //	szTemp.Format(_T("%ld"), nTmp);
    //	if (szTemp.IsEmpty())
    //		szTemp = _T("0");
    //	tmpStr.Format(_T("Dược liệu: %s đồng"), szTemp);
    //	xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
    // }

    EndWaitCursor();
    xls.Save(_T("Exports\\BANG KE THANH TOAN NO CAC CONG TY.xls"));
}

void CPMSSupplierPaymentList::OnExport3()
{
    _debug(_T("%s"), CString(typeid(this).name()));
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CExcel xls;
    CString szSQL, tmpStr, szTemp, szOrderID;
    CString szOldLine, szNewLine, szNewType, szOldType;
    CRecord rs(&pMF->m_db);
    int nIdx = 0, nIndex = 1, nIdx2 = 1;
    double nTmp = 0;
    double nTotal = 0, nGroupTotal = 0, nTypeTotal = 0;
    szSQL = GetQueryString5();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
        return;
    }
    xls.CreateSheet(1);
    xls.SetWorksheet(0);
    // Header Section
    xls.SetColumnWidth(0, 5);
    xls.SetColumnWidth(1, 16);
    xls.SetColumnWidth(2, 16);
    xls.SetColumnWidth(3, 16);
    xls.SetColumnWidth(4, 16);
    xls.SetColumnWidth(5, 25);
    xls.SetColumnWidth(6, 15);
    xls.SetColumnWidth(7, 15);
    xls.SetColumnWidth(8, 15);
    int nCol = 0;
    int nRow = 0;

    xls.SetCellMergedColumns(nCol, nRow + 1, 2);
    xls.SetCellMergedColumns(nCol, nRow + 2, 2);
    xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService,
                    FMT_TEXT | FMT_CENTER, true, 10);
    xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName,
                    FMT_TEXT | FMT_CENTER, true, 10);

    xls.SetCellMergedColumns(nCol, nRow + 3, 7);
    xls.SetCellText(nCol, nRow + 3,
                    _T("DANH SÁCH THANH TOÁN NỢ CÁC CÔNG TY CHI TIẾT"),
                    FMT_TEXT | FMT_CENTER, true, 12);
    xls.SetCellMergedColumns(nCol, nRow + 4, 7);
    tmpStr.Format(
        _T("Từ %s Đến %s"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
    xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    // Col Head
    nRow = 5;
    xls.SetCellText(nCol, nRow, _T("STT"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 1, nRow, _T("Số hóa đơn"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 2, nRow, _T("Ngày hóa đơn"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 3, nRow, _T("Số phiếu nhập"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 4, nRow, _T("Ngày nhập"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 5, nRow, _T("Tên hàng"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 6, nRow, _T("Số lượng"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 7, nRow, _T("Đơn vị"), FMT_TEXT | FMT_CENTER, true);
    xls.SetCellText(nCol + 8, nRow, _T("Số tiền"), FMT_TEXT | FMT_CENTER, true);
    nRow = 6;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnername"), szNewLine);
        if (szNewLine != szOldLine)
        {
            if (nTypeTotal > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 7);
                xls.SetCellText(nCol, nRow, _T("Tổng nhóm"),
                                FMT_TEXT | FMT_CENTER, true);
                tmpStr.Format(_T("%f"), nTypeTotal);
                xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
                szOldType = _T("");
                nRow++;
            }

            if (nGroupTotal > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 7);
                xls.SetCellText(nCol, nRow, _T("Tổng cộng"),
                                FMT_TEXT | FMT_CENTER, true);
                tmpStr.Format(_T("%f"), nGroupTotal);
                xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
                nTotal += nGroupTotal;
                nGroupTotal = 0;
                nRow++;
            }
            xls.SetCellMergedColumns(nCol, nRow, 9);
            xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT | FMT_CENTER, true);
            szOldLine = szNewLine;
            nIdx2++;
            nRow++;
            nIndex = 1;
        }

        rs.GetValue(_T("ptype"), szNewType);
        if (szOldType != szNewType)
        {
            if (nTypeTotal > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 7);
                xls.SetCellText(nCol, nRow, _T("Tổng nhóm"),
                                FMT_TEXT | FMT_CENTER, true);
                tmpStr.Format(_T("%f"), nTypeTotal);
                xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
                nRow++;
            }
            xls.SetCellMergedColumns(nCol, nRow, 9);
            if (szNewType == _T("1"))
                xls.SetCellText(nCol, nRow, _T("Phiếu nhập"),
                                FMT_TEXT | FMT_CENTER, true);
            else
                xls.SetCellText(nCol, nRow, _T("Trả Lại"),
                                FMT_TEXT | FMT_CENTER, true);
            szOldType = szNewType;
            nIdx = 1;
            nRow++;
        }

        xls.SetCellText(nCol, nRow, int2str(nIndex), FMT_TEXT | FMT_RIGHT);
        if (!szOrderID.IsEmpty())
            szOrderID += _T(", ");
        szOrderID += rs.GetValue(_T("id"));
        xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("invoiceno")), FMT_TEXT);
        rs.GetValue(_T("invoicedate"), tmpStr);
        xls.SetCellText(nCol + 2, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),
                        FMT_TEXT | FMT_CENTER);
        xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("orderno")), FMT_TEXT);
        rs.GetValue(_T("importdate"), tmpStr);
        xls.SetCellText(nCol + 4, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),
                        FMT_TEXT | FMT_CENTER);
        xls.SetCellText(nCol + 5, nRow, rs.GetValue(_T("productname")),
                        FMT_TEXT);
        rs.GetValue(_T("qtydelivery"), nTmp);
        xls.SetCellText(nCol + 6, nRow, double2str(nTmp), FMT_NUMBER1);
        xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("uomname")), FMT_TEXT);
        rs.GetValue(_T("pdamount"), nTmp);
        nTypeTotal += nTmp;
        xls.SetCellText(nCol + 8, nRow, double2str(nTmp), FMT_NUMBER1);
        nRow++;
        rs.MoveNext();
    }
    if (nTypeTotal > 0)
    {
        xls.SetCellMergedColumns(nCol, nRow, 7);
        xls.SetCellText(nCol, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_CENTER,
                        true);
        tmpStr.Format(_T("%f"), nTypeTotal);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
        if (szOldType == _T("1"))
            nGroupTotal += nTypeTotal;
        else
            nGroupTotal -= nTypeTotal;
        nTypeTotal = 0;
        nRow++;
    }
    if (nGroupTotal > 0)
    {
        xls.SetCellMergedColumns(nCol, nRow, 7);
        xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER,
                        true);
        tmpStr.Format(_T("%f"), nGroupTotal);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
        nTotal += nGroupTotal;
        nGroupTotal = 0;
        nRow++;
    }
    if (nIdx2 > 1)
    {
        xls.SetCellMergedColumns(nCol, nRow, 7);
        xls.SetCellText(nCol, nRow, _T("Tổng"), FMT_TEXT | FMT_CENTER, true);
        tmpStr.Format(_T("%f"), nTotal);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
        nRow++;
    }

    EndWaitCursor();
    xls.Save(_T("Exports\\BANG KE THANH TOAN NO CAC CONG TY CHI TIET.xls"));
}

void CPMSSupplierPaymentList::OnExport4()
{
    _debug(_T("%s"), CString(typeid(this).name()));
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CExcel xls;
    CString szSQL, tmpStr, szTemp, szOrderID;
    CString szOldLine, szNewLine, szNewType, szOldType;
    CRecord rs(&pMF->m_db);
    int nIdx = 0, nIndex = 1, nIdx2 = 1;
    double nTmp = 0;
    double nTotal = 0, nGroupTotal = 0, nTypeTotal = 0;
    szSQL = GetQueryString7();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
        return;
    }
    xls.CreateSheet(1);
    xls.SetWorksheet(0);
    // Header Section
    xls.SetColumnWidth(0, 5);
    xls.SetColumnWidth(1, 16);
    xls.SetColumnWidth(2, 16);
    xls.SetColumnWidth(3, 16);
    xls.SetColumnWidth(4, 16);
    xls.SetColumnWidth(5, 25);
    xls.SetColumnWidth(6, 15);
    xls.SetColumnWidth(7, 15);
    xls.SetColumnWidth(8, 15);
    int nCol = 0;
    int nRow = 0;

    xls.SetCellMergedColumns(nCol, nRow + 1, 2);
    xls.SetCellMergedColumns(nCol, nRow + 2, 2);
    xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService,
                    FMT_TEXT | FMT_CENTER, true, 10);
    xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName,
                    FMT_TEXT | FMT_CENTER, true, 10);

    xls.SetCellMergedColumns(nCol, nRow + 3, 7);
    xls.SetCellText(nCol, nRow + 3,
                    _T("DANH SÁCH THANH TOÁN NỢ CÁC CÔNG TY CHI TIẾT"),
                    FMT_TEXT | FMT_CENTER, true, 12);
    xls.SetCellMergedColumns(nCol, nRow + 4, 7);
    tmpStr.Format(
        _T("Từ %s Đến %s"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
    xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    // Col Head
    nRow = 5;
    xls.SetCellText(nCol, nRow, _T("STT"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 1, nRow, _T("Số hóa đơn"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 2, nRow, _T("Ngày hóa đơn"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 3, nRow, _T("Số phiếu nhập"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 4, nRow, _T("Ngày nhập"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 5, nRow, _T("Tên hàng"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 6, nRow, _T("Số lượng"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 7, nRow, _T("Đơn vị"), FMT_TEXT | FMT_CENTER, true);
    xls.SetCellText(nCol + 8, nRow, _T("Số tiền"), FMT_TEXT | FMT_CENTER, true);
    nRow = 6;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnername"), szNewLine);
        if (szNewLine != szOldLine)
        {
            if (nTypeTotal > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 7);
                xls.SetCellText(nCol, nRow, _T("Tổng nhóm"),
                                FMT_TEXT | FMT_CENTER, true);
                tmpStr.Format(_T("%f"), nTypeTotal);
                xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
                szOldType = _T("");
                nRow++;
            }

            if (nGroupTotal > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 7);
                xls.SetCellText(nCol, nRow, _T("Tổng cộng"),
                                FMT_TEXT | FMT_CENTER, true);
                tmpStr.Format(_T("%f"), nGroupTotal);
                xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
                nTotal += nGroupTotal;
                nGroupTotal = 0;
                nRow++;
            }
            xls.SetCellMergedColumns(nCol, nRow, 9);
            xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT | FMT_CENTER, true);
            szOldLine = szNewLine;
            nIdx2++;
            nRow++;
            nIndex = 1;
        }

        rs.GetValue(_T("ptype"), szNewType);
        if (szOldType != szNewType)
        {
            if (nTypeTotal > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 7);
                xls.SetCellText(nCol, nRow, _T("Tổng nhóm"),
                                FMT_TEXT | FMT_CENTER, true);
                tmpStr.Format(_T("%f"), nTypeTotal);
                xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
                nRow++;
            }
            xls.SetCellMergedColumns(nCol, nRow, 9);
            if (szNewType == _T("1"))
                xls.SetCellText(nCol, nRow, _T("Phiếu nhập"),
                                FMT_TEXT | FMT_CENTER, true);
            else
                xls.SetCellText(nCol, nRow, _T("Trả Lại"),
                                FMT_TEXT | FMT_CENTER, true);
            szOldType = szNewType;
            nIdx = 1;
            nRow++;
        }

        xls.SetCellText(nCol, nRow, int2str(nIndex), FMT_TEXT | FMT_RIGHT);
        if (!szOrderID.IsEmpty())
            szOrderID += _T(", ");
        szOrderID += rs.GetValue(_T("id"));
        xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("invoiceno")), FMT_TEXT);
        rs.GetValue(_T("invoicedate"), tmpStr);
        xls.SetCellText(nCol + 2, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),
                        FMT_TEXT | FMT_CENTER);
        xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("orderno")), FMT_TEXT);
        rs.GetValue(_T("importdate"), tmpStr);
        xls.SetCellText(nCol + 4, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),
                        FMT_TEXT | FMT_CENTER);
        xls.SetCellText(nCol + 5, nRow, rs.GetValue(_T("productname")),
                        FMT_TEXT);
        rs.GetValue(_T("qtydelivery"), nTmp);
        xls.SetCellText(nCol + 6, nRow, double2str(nTmp), FMT_NUMBER1);
        xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("uomname")), FMT_TEXT);
        rs.GetValue(_T("pdamount"), nTmp);
        nTypeTotal += nTmp;
        xls.SetCellText(nCol + 8, nRow, double2str(nTmp), FMT_NUMBER1);
        nRow++;
        rs.MoveNext();
    }
    if (nTypeTotal > 0)
    {
        xls.SetCellMergedColumns(nCol, nRow, 7);
        xls.SetCellText(nCol, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_CENTER,
                        true);
        tmpStr.Format(_T("%f"), nTypeTotal);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
        if (szOldType == _T("1"))
            nGroupTotal += nTypeTotal;
        else
            nGroupTotal -= nTypeTotal;
        nTypeTotal = 0;
        nRow++;
    }
    if (nGroupTotal > 0)
    {
        xls.SetCellMergedColumns(nCol, nRow, 7);
        xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER,
                        true);
        tmpStr.Format(_T("%f"), nGroupTotal);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
        nTotal += nGroupTotal;
        nGroupTotal = 0;
        nRow++;
    }
    if (nIdx2 > 1)
    {
        xls.SetCellMergedColumns(nCol, nRow, 7);
        xls.SetCellText(nCol, nRow, _T("Tổng"), FMT_TEXT | FMT_CENTER, true);
        tmpStr.Format(_T("%f"), nTotal);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
        nRow++;
    }

    EndWaitCursor();
    xls.Save(_T("Exports\\BANG KE THANH TOAN NO CAC CONG TY CHI TIET.xls"));
}

CString CPMSSupplierPaymentList::GetQueryString1()
{
    CString szSQL, szWhere, szWhere2, szStorages, szSources;
    szWhere.Format(
        _T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (m_bImportDate)
        szWhere.AppendFormat(
            _T("AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
            m_szimpFromDate, m_szimpToDate);

    szWhere2.Format(
        _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }

    for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
    {
        if (m_wndStorage.GetCheck(i))
        {
            m_wndStorage.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStorage.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }

    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }

    for (int i = 0; i < m_wndSource.GetItemCount(); i++)
    {
        if (m_wndSource.GetCheck(i))
        {
            m_wndSource.SetCurSel(i);
            if (!szSources.IsEmpty())
                szSources += _T(", ");
            szSources += m_wndSource.GetCurrent(0);
        }
    }
    if (!szSources.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"),
                             szSources);
        szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
    }

    if (m_nAll == 0)
        szWhere.AppendFormat(_T(""));
    if (m_nCash == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id = 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method = 'TM'"));
    }
    if (m_nTransfer == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id <> 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method <> 'TM'"));
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(
        _T(" SELECT ptype,")
        _T("        id,")
        _T("        invoiceno,")
        _T("        invoicedate,")
        _T("        orderno,")
        _T("        importdate,")
        _T("        amount,")
        _T("        reamount,")
        _T("        partnername,")
        _T("        typename,")
        _T("        pcount,")
        _T("        contract_no,")
        _T("        contract_signedate,")
        _T("        contract_performdate,")
        _T("        contractpkg_id")
        _T(" FROM   (SELECT    1 AS ptype,")
        _T("                   po_purchase_order_id AS id,")
        _T("                   po_invoiceno AS invoiceno,")
        _T("                   Trunc(po_invoicedate) AS invoicedate,")
        _T("                   po_orderno AS orderno,")
        _T("                   Trunc(po_approveddate) AS importdate,")
        _T("                   SUM(Round(pol_totalamount)) AS amount,")
        _T("                   0 AS reamount,")
        _T("                   Get_partnername(po_partner_id) AS partnername,")
        _T("                   Min(product_typename) AS typename,")
        _T("                   Count(pol_line) AS pcount,")
        _T("                   get_contract_info(po_contract_id, 'NO') AS ")
        _T("contract_no,")
        _T("                   get_contract_info(po_contract_id, 'SD') AS ")
        _T("contract_signedate,")
        _T("                   get_contract_info(po_contract_id, 'PD') AS ")
        _T("contract_performdate,")
        _T("                   po_contractpkg_id AS contractpkg_id")
        _T("         FROM      purchase_order")
        _T("         LEFT JOIN purchase_orderline ON ( po_purchase_order_id = ")
        _T("pol_purchase_order_id )")
        _T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
        _T("pol_product_item_id )")
        _T("         LEFT JOIN purchase_payment ON ( po_refpayment_id = ")
        _T("pp_purchase_payment_id )")
        _T("         WHERE     po_payment = 'Y' AND product_org_id = 'PM' %s")
        _T("         GROUP     BY ")
        _T("po_purchase_order_id,po_invoiceno,po_invoicedate,po_orderno,po_")
        _T("approveddate,")
        _T("         po_partner_id,po_contract_id,po_contractpkg_id")
        _T("         UNION ALL")
        _T("         SELECT    2 AS ptype,")
        _T("                   mt_transaction_id AS id,")
        _T("                   Cast('' AS NVARCHAR2(1)) AS invoiceno,")
        _T("                   Cast('' AS DATE) AS invoicedate,")
        _T("                   mt_orderno AS orderno,")
        _T("                   Trunc(mt_payment_date) AS importdate,")
        _T("                   0 AS amount,")
        _T("                   SUM(Round(mtl_ttlamount)) AS reamount,")
        _T("                   Get_partnername(mt_partner_id) AS partnername,")
        _T("                   Min(product_typename) AS typename,")
        _T("                   Count(mtl_line) AS pcount,")
        _T("                   NULL AS contract_no,")
        _T("                   NULL AS contract_signedate,")
        _T("                   NULL AS contract_performdate,")
        _T("                   NULL AS contractpkg_id")
        _T("         FROM      m_transaction")
        _T("         LEFT JOIN m_transactionline ON( mt_transaction_id = ")
        _T("mtl_transaction_id )")
        _T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
        _T("mtl_product_item_id )")
        _T("         WHERE     mt_doctype = 'PRO' AND mt_payment = 'Y' AND ")
        _T("product_org_id = 'PM' AND")
        _T("                   mt_payment_method = 'UNC' %s")
        _T("         GROUP     BY ")
        _T("mt_transaction_id,mt_orderno,mt_payment_date,mt_partner_id)")
        _T(" ORDER  BY partnername,ptype,contract_no, importdate"),
        szWhere, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMSSupplierPaymentList::GetQueryString2()
{
    CString szSQL, szWhere, szWhere2, szStorages, szSources;
    szWhere.Format(
        _T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (m_bImportDate)
        szWhere.AppendFormat(
            _T("AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
            m_szimpFromDate, m_szimpToDate);
    szWhere2.Format(
        _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
    {
        if (m_wndStorage.GetCheck(i))
        {
            m_wndStorage.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStorage.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    for (int i = 0; i < m_wndSource.GetItemCount(); i++)
    {
        if (m_wndSource.GetCheck(i))
        {
            m_wndSource.SetCurSel(i);
            if (!szSources.IsEmpty())
                szSources += _T(", ");
            szSources += m_wndSource.GetCurrent(0);
        }
    }
    if (!szSources.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"),
                             szSources);
        szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
    }

    if (m_nAll == 0)
        szWhere.AppendFormat(_T(""));
    if (m_nCash == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id = 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method = 'TM'"));
    }
    if (m_nTransfer == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id <> 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method <> 'TM'"));
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(
        _T(" SELECT SUM(ROUND(thuoc) - ROUND(rethuoc))    AS drug,")
        _T("   SUM(ROUND(hoachat)    - ROUND(rehoachat))  AS chemicals,")
        _T("   SUM(ROUND(bbg)        - ROUND(rebbg))      AS cotton,")
        _T("   SUM(ROUND(duoclieu)   - ROUND(reduoclieu)) AS herb,")
        _T("   SUM(ROUND(tpdd)       - ROUND(retpdd))     AS compound,")
        _T("   SUM(ROUND(ycu)        - ROUND(reycu))      AS instrument")
        _T(" FROM")
        _T("   (SELECT")
        _T("     CASE")
        _T("       WHEN (instr(product_producttype, 'A11') > 0")
        _T("       OR product_producttype                 IN ('A1400', ")
        _T("'A6000'))")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS thuoc,")
        _T("     CASE")
        _T("       WHEN instr(product_producttype, 'A12') > 0")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS hoachat,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1500'")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS bbg,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1302'")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS duoclieu,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1301'")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS tpdd,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1600'")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS ycu,")
        _T("     0   AS rethuoc,")
        _T("     0   AS rehoachat,")
        _T("     0   AS rebbg,")
        _T("     0   AS reduoclieu,")
        _T("     0   AS retpdd,")
        _T("     0   AS reycu")
        _T("   FROM purchase_order")
        _T("   LEFT JOIN purchase_orderline")
        _T("   ON (po_purchase_order_id = pol_purchase_order_id)")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON (product_item_id = pol_product_item_id)")
        _T("   LEFT JOIN purchase_payment")
        _T("   ON (po_refpayment_id=pp_purchase_payment_id)")
        _T("   WHERE po_payment    = 'Y'")
        _T("   AND product_org_id  = 'PM' %s")
        _T("   UNION ALL")
        _T("   SELECT 0 AS thuoc,")
        _T("     0      AS hoachat,")
        _T("     0      AS bbg,")
        _T("     0      AS duoclieu,")
        _T("     0      AS tpdd,")
        _T("     0      AS ycu,")
        _T("     CASE")
        _T("       WHEN (instr(product_producttype, 'A11') > 0")
        _T("       OR product_producttype                 IN ('A1400', ")
        _T("'A6000'))")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS rethuoc,")
        _T("     CASE")
        _T("       WHEN instr(product_producttype, 'A12') > 0")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS rehoachat,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1500'")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS rebbg,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1302'")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS reduoclieu,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1301'")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS retpdd,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1600'")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS reycu")
        _T("   FROM m_transaction")
        _T("   LEFT JOIN m_transactionline")
        _T("   ON(mt_transaction_id = mtl_transaction_id)")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON (product_item_id = mtl_product_item_id)")
        _T("   WHERE mt_doctype    = 'PRO'")
        _T("   AND mt_payment      = 'Y'")
        _T("   AND product_org_id  = 'PM'")
        _T("   AND mt_payment_method = 'UNC' %s")
        _T("   )"),
        szWhere, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}
CString CPMSSupplierPaymentList::GetQueryString3()
{
    CString szSQL, szWhere, szWhere2, szStorages, szSources;
    szWhere.Format(
        _T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (m_bImportDate)
        szWhere.AppendFormat(
            _T("AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
            m_szimpFromDate, m_szimpToDate);
    szWhere2.Format(
        _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
    {
        if (m_wndStorage.GetCheck(i))
        {
            m_wndStorage.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStorage.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    for (int i = 0; i < m_wndSource.GetItemCount(); i++)
    {
        if (m_wndSource.GetCheck(i))
        {
            m_wndSource.SetCurSel(i);
            if (!szSources.IsEmpty())
                szSources += _T(", ");
            szSources += m_wndSource.GetCurrent(0);
        }
    }
    if (!szSources.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"),
                             szSources);
        szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
    }

    if (m_nAll == 0)
        szWhere.AppendFormat(_T(""));
    if (m_nCash == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id = 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method = 'TM'"));
    }
    if (m_nTransfer == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id <> 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method <> 'TM'"));
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(_T(" SELECT ptype,")
                 _T("   id,")
                 _T("   invoiceno,")
                 _T("   invoicedate,")
                 _T("   orderno,")
                 _T("   importdate,")
                 _T("   amount,")
                 _T("   partnername,")
                 _T("   typename,")
                 _T("   pcount")
                 _T(" FROM")
                 _T("   (SELECT 1                            AS ptype,")
                 _T("   po_purchase_order_id                 AS id,")
                 _T("   po_invoiceno                         AS invoiceno,")
                 _T("   trunc(po_invoicedate)  AS invoicedate,")
                 _T("   po_orderno                           AS orderno,")
                 _T("   trunc(po_approveddate) AS importdate,")
                 _T("   SUM(ROUND(pol_totalamount))          AS amount,")
                 _T("   Get_partnername(po_partner_id)       AS partnername,")
                 _T("   MIN(product_typename)                AS typename,")
                 _T("   COUNT(pol_line)                      AS pcount")
                 _T(" FROM purchase_order")
                 _T(" LEFT JOIN purchase_orderline")
                 _T(" ON (po_purchase_order_id = pol_purchase_order_id)")
                 _T(" LEFT JOIN m_productitem_view3")
                 _T(" ON (product_item_id = pol_product_item_id)")
                 _T(" LEFT JOIN purchase_payment")
                 _T(" ON (po_refpayment_id=pp_purchase_payment_id)")
                 _T(" WHERE po_payment    = 'Y'")
                 _T(" AND product_org_id  = 'PM' %s")
                 _T(" GROUP BY po_purchase_order_id,")
                 _T("   po_invoiceno,")
                 _T("   po_invoicedate,")
                 _T("   po_orderno,")
                 _T("   po_approveddate,")
                 _T("   po_partner_id")
                 _T(" UNION ALL")
                 _T("   SELECT 2                               AS ptype,")
                 _T("     mt_transaction_id                    AS id,")
                 _T("     CAST('' AS NVARCHAR2(1))             AS invoiceno,")
                 _T("     CAST('' AS DATE)                     AS invoicedate,")
                 _T("     mt_orderno                           AS orderno,")
                 _T("     trunc(mt_payment_date) AS importdate,")
                 _T("     SUM(ROUND(mtl_ttlamount))            AS amount,")
                 _T("     Get_partnername(mt_partner_id)       AS partnername,")
                 _T("     MIN(product_typename)                AS typename,")
                 _T("     COUNT(mtl_line)                      AS pcount")
                 _T("   FROM m_transaction")
                 _T("   LEFT JOIN m_transactionline")
                 _T("   ON(mt_transaction_id = mtl_transaction_id)")
                 _T("   LEFT JOIN m_productitem_view3")
                 _T("   ON (product_item_id   = mtl_product_item_id)")
                 _T("   WHERE mt_doctype      = 'PRO'")
                 _T("   AND mt_payment        = 'Y'")
                 _T("   AND product_org_id    = 'PM'")
                 _T("   AND mt_payment_method = 'UNC' %s")
                 _T("   GROUP BY mt_transaction_id,")
                 _T("     mt_orderno,")
                 _T("     mt_payment_date,")
                 _T("     mt_partner_id")
                 _T("   )")
                 _T(" ORDER BY partnername,")
                 _T("   ptype,")
                 _T("   importdate"),
                 szWhere, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMSSupplierPaymentList::GetQueryString4()
{
    CString szSQL, szWhere, szWhere2, szStorages, szSources;
    szWhere.Format(
        _T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (m_bImportDate)
        szWhere.AppendFormat(
            _T("AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
            m_szimpFromDate, m_szimpToDate);
    szWhere2.Format(
        _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
    {
        if (m_wndStorage.GetCheck(i))
        {
            m_wndStorage.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStorage.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    for (int i = 0; i < m_wndSource.GetItemCount(); i++)
    {
        if (m_wndSource.GetCheck(i))
        {
            m_wndSource.SetCurSel(i);
            if (!szSources.IsEmpty())
                szSources += _T(", ");
            szSources += m_wndSource.GetCurrent(0);
        }
    }
    if (!szSources.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"),
                             szSources);
        szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
    }

    if (m_nAll == 0)
        szWhere.AppendFormat(_T(""));
    if (m_nCash == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id = 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method = 'TM'"));
    }
    if (m_nTransfer == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id <> 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method <> 'TM'"));
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(
        _T(" SELECT ptype,")
        _T("        id,")
        _T("        invoiceno,")
        _T("        invoicedate,")
        _T("        orderno,")
        _T("        importdate,")
        _T("        amount,")
        _T("        reamount,")
        _T("        partnername,")
        _T("        productname,")
        _T("        pdamount,")
        _T("        contract_no,")
        _T("        contract_sd,")
        _T("        contractpkg_id")
        _T("   FROM (   SELECT 1 AS ptype,")
        _T("                      po_purchase_order_id AS id,")
        _T("                      po_invoiceno AS invoiceno,")
        _T("                      Trunc (po_invoicedate) AS invoicedate,")
        _T("                      po_orderno AS orderno,")
        _T("                      Trunc (po_approveddate) AS importdate,")
        _T("                      Round (po_totalamount) AS amount,")
        _T("                      0 AS reamount,")
        _T("                      Get_partnername (po_partner_id) AS ")
        _T("partnername,")
        _T("                      product_name AS productname,")
        _T("                      adc_contract_no AS contract_no,")
        _T("                      To_char (adc_signeddate, 'dd/mm/yyyy') AS ")
        _T("contract_sd,")
        _T("                      po_contractpkg_id AS contractpkg_id,")
        _T("                      SUM (Round (pol_totalamount)) AS pdamount")
        _T("                 FROM purchase_order")
        _T("            LEFT JOIN purchase_orderline ON ( ")
        _T("po_purchase_order_id = pol_purchase_order_id )")
        _T("            LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
        _T("pol_product_item_id )")
        _T("            LEFT JOIN purchase_payment ON ( po_refpayment_id = ")
        _T("pp_purchase_payment_id )")
        _T("            LEFT JOIN ad_contract ON ( adc_contract_id = ")
        _T("po_contract_id )")
        _T("                WHERE po_payment = 'Y' AND product_org_id = 'PM' ")
        _T("%s")
        _T("                GROUP BY ")
        _T("po_purchase_order_id,po_invoiceno,po_invoicedate,po_orderno,po_")
        _T("approveddate,")
        _T("                ")
        _T("po_partner_id,po_totalamount,product_name,adc_contract_no,adc_")
        _T("signeddate,")
        _T("                po_contractpkg_id")
        _T("         UNION ALL")
        _T("            SELECT 2 AS ptype,")
        _T("                   mt_transaction_id AS id,")
        _T("                   Cast ('' AS NVARCHAR2 (1)) AS invoiceno,")
        _T("                   Cast ('' AS DATE) AS invoicedate,")
        _T("                   mt_orderno AS orderno,")
        _T("                   Trunc (mt_payment_date) AS importdate,")
        _T("                   0 AS amount,")
        _T("                   Round (mt_totalamount) AS reamount,")
        _T("                   Get_partnername (mt_partner_id) AS partnername,")
        _T("                   product_name AS productname,")
        _T("                   NULL AS contract_no,")
        _T("                   NULL AS contract_sd,")
        _T("                   NULL AS contractpkg_id,")
        _T("                   SUM (Round (mtl_ttlamount)) AS pdamount")
        _T("              FROM m_transaction")
        _T("         LEFT JOIN m_transactionline ON ( mt_transaction_id = ")
        _T("mtl_transaction_id )")
        _T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
        _T("mtl_product_item_id )")
        _T("             WHERE mt_doctype = 'PRO' AND mt_payment = 'Y' AND ")
        _T("product_org_id = 'PM' AND")
        _T("                   mt_payment_method = 'UNC' %s")
        _T("             GROUP BY ")
        _T("mt_transaction_id,mt_orderno,mt_payment_date,mt_partner_id,mt_")
        _T("totalamount,")
        _T("             product_name")
        _T("        )")
        _T("  ORDER BY partnername,ptype,importdate,productname "),
        szWhere, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMSSupplierPaymentList::GetQueryString5()
{
    CString szSQL, szWhere, szWhere2, szStorages, szSources;
    szWhere.Format(
        _T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (m_bImportDate)
        szWhere.AppendFormat(
            _T("AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
            m_szimpFromDate, m_szimpToDate);
    szWhere2.Format(
        _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
    {
        if (m_wndStorage.GetCheck(i))
        {
            m_wndStorage.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStorage.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    for (int i = 0; i < m_wndSource.GetItemCount(); i++)
    {
        if (m_wndSource.GetCheck(i))
        {
            m_wndSource.SetCurSel(i);
            if (!szSources.IsEmpty())
                szSources += _T(", ");
            szSources += m_wndSource.GetCurrent(0);
        }
    }
    if (!szSources.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"),
                             szSources);
        szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
    }

    if (m_nAll == 0)
        szWhere.AppendFormat(_T(""));
    if (m_nCash == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id = 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method = 'TM'"));
    }
    if (m_nTransfer == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id <> 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method <> 'TM'"));
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(_T(" SELECT ptype,")
                 _T("   id,")
                 _T("   invoiceno,")
                 _T("   invoicedate,")
                 _T("   orderno,")
                 _T("   importdate,")
                 _T("   amount,")
                 _T("   reamount,")
                 _T("   partnername,")
                 _T("   productname,")
                 _T("   pdamount,")
                 _T("   qtydelivery,")
                 _T("   uomname")
                 _T(" FROM")
                 _T("   (SELECT 1                              AS ptype,")
                 _T("     po_purchase_order_id                 AS id,")
                 _T("     po_invoiceno                         AS invoiceno,")
                 _T("     trunc(po_invoicedate)  AS invoicedate,")
                 _T("     po_orderno                           AS orderno,")
                 _T("     trunc(po_approveddate) AS importdate,")
                 _T("     ROUND(po_totalamount)                AS amount,")
                 _T("     0                                    AS reamount,")
                 _T("     Get_partnername(po_partner_id)       AS partnername,")
                 _T("     product_name                         AS productname,")
                 _T("     SUM(ROUND(pol_totalamount))          AS pdamount,")
                 _T("     SUM(pol_qtydelivery)                 AS qtydelivery,")
                 _T("     product_uomname                      AS uomname")
                 _T("   FROM purchase_order")
                 _T("   LEFT JOIN purchase_orderline")
                 _T("   ON (po_purchase_order_id = pol_purchase_order_id)")
                 _T("   LEFT JOIN m_productitem_view3")
                 _T("   ON (product_item_id = pol_product_item_id)")
                 _T("   LEFT JOIN purchase_payment")
                 _T("   ON (po_refpayment_id=pp_purchase_payment_id)")
                 _T("   WHERE po_payment    = 'Y'")
                 _T("   AND product_org_id  = 'PM' %s ")
                 _T("   GROUP BY po_purchase_order_id,")
                 _T("     po_invoiceno,")
                 _T("     po_invoicedate,")
                 _T("     po_orderno,")
                 _T("     po_approveddate,")
                 _T("     po_partner_id,")
                 _T("     po_totalamount,")
                 _T("     product_name,")
                 _T("     product_uomname")
                 _T("   UNION ALL")
                 _T("   SELECT 2                               AS ptype,")
                 _T("     mt_transaction_id                    AS id,")
                 _T("     CAST('' AS NVARCHAR2(1))             AS invoiceno,")
                 _T("     CAST('' AS DATE)                     AS invoicedate,")
                 _T("     mt_orderno                           AS orderno,")
                 _T("     trunc(mt_payment_date) AS importdate,")
                 _T("     0                                    AS amount,")
                 _T("     ROUND(mt_totalamount)                AS reamount,")
                 _T("     Get_partnername(mt_partner_id)       AS partnername,")
                 _T("     product_name                         AS productname,")
                 _T("     SUM(ROUND(mtl_ttlamount))            AS pdamount,")
                 _T("     SUM(mtl_qtydelivery)                 AS qtydelivery,")
                 _T("     product_uomname                      AS uomname")
                 _T("   FROM m_transaction")
                 _T("   LEFT JOIN m_transactionline")
                 _T("   ON(mt_transaction_id = mtl_transaction_id)")
                 _T("   LEFT JOIN m_productitem_view3")
                 _T("   ON (product_item_id   = mtl_product_item_id)")
                 _T("   WHERE mt_doctype      = 'PRO'")
                 _T("   AND mt_payment        = 'Y'")
                 _T("   AND product_org_id    = 'PM'")
                 _T("   AND mt_payment_method = 'UNC' %s ")
                 _T("   GROUP BY mt_transaction_id,")
                 _T("     mt_orderno,")
                 _T("     mt_payment_date,")
                 _T("     mt_partner_id,")
                 _T("     mt_totalamount,")
                 _T("     product_name,")
                 _T("     product_uomname")
                 _T("   )")
                 _T(" ORDER BY partnername,")
                 _T("   ptype,")
                 _T("   importdate,")
                 _T("   productname"),
                 szWhere, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMSSupplierPaymentList::GetQueryString6()
{
    CString szSQL, szWhere, szWhere2, szStorages, szSources;
    szWhere.Format(
        _T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (m_bImportDate)
        szWhere.AppendFormat(
            _T("AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
            m_szimpFromDate, m_szimpToDate);
    szWhere2.Format(
        _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
    {
        if (m_wndStorage.GetCheck(i))
        {
            m_wndStorage.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStorage.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    for (int i = 0; i < m_wndSource.GetItemCount(); i++)
    {
        if (m_wndSource.GetCheck(i))
        {
            m_wndSource.SetCurSel(i);
            if (!szSources.IsEmpty())
                szSources += _T(", ");
            szSources += m_wndSource.GetCurrent(0);
        }
    }
    if (!szSources.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"),
                             szSources);
        szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
    }

    if (m_nAll == 0)
        szWhere.AppendFormat(_T(""));
    if (m_nCash == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id = 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method = 'TM'"));
    }
    if (m_nTransfer == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id <> 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method <> 'TM'"));
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(_T(" SELECT MIN(invoicedate) AS startdate,")
                 _T("   MAX(invoicedate) AS enddate")
                 _T(" FROM")
                 _T("   (SELECT 1                            AS ptype,")
                 _T("   po_purchase_order_id                 AS id,")
                 _T("   po_invoiceno                         AS invoiceno,")
                 _T("   trunc(po_invoicedate)  AS invoicedate,")
                 _T("   po_orderno                           AS orderno,")
                 _T("   trunc(po_approveddate) AS importdate,")
                 _T("   SUM(ROUND(pol_totalamount))          AS amount,")
                 _T("   Get_partnername(po_partner_id)       AS partnername,")
                 _T("   MIN(product_typename)                AS typename,")
                 _T("   COUNT(pol_line)                      AS pcount")
                 _T(" FROM purchase_order")
                 _T(" LEFT JOIN purchase_orderline")
                 _T(" ON (po_purchase_order_id = pol_purchase_order_id)")
                 _T(" LEFT JOIN m_productitem_view3")
                 _T(" ON (product_item_id = pol_product_item_id)")
                 _T(" LEFT JOIN purchase_payment")
                 _T(" ON (po_refpayment_id=pp_purchase_payment_id)")
                 _T(" WHERE po_payment    = 'Y'")
                 _T(" AND product_org_id  = 'PM' %s")
                 _T(" GROUP BY po_purchase_order_id,")
                 _T("   po_invoiceno,")
                 _T("   po_invoicedate,")
                 _T("   po_orderno,")
                 _T("   po_approveddate,")
                 _T("   po_partner_id")
                 _T(" UNION ALL")
                 _T("   SELECT 2                               AS ptype,")
                 _T("     mt_transaction_id                    AS id,")
                 _T("     CAST('' AS NVARCHAR2(1))             AS invoiceno,")
                 _T("     CAST('' AS DATE)                     AS invoicedate,")
                 _T("     mt_orderno                           AS orderno,")
                 _T("     trunc(mt_payment_date) AS importdate,")
                 _T("     SUM(ROUND(mtl_ttlamount))            AS amount,")
                 _T("     Get_partnername(mt_partner_id)       AS partnername,")
                 _T("     MIN(product_typename)                AS typename,")
                 _T("     COUNT(mtl_line)                      AS pcount")
                 _T("   FROM m_transaction")
                 _T("   LEFT JOIN m_transactionline")
                 _T("   ON(mt_transaction_id = mtl_transaction_id)")
                 _T("   LEFT JOIN m_productitem_view3")
                 _T("   ON (product_item_id   = mtl_product_item_id)")
                 _T("   WHERE mt_doctype      = 'PRO'")
                 _T("   AND mt_payment        = 'Y'")
                 _T("   AND product_org_id    = 'PM'")
                 _T("   AND mt_payment_method = 'UNC' %s")
                 _T("   GROUP BY mt_transaction_id,")
                 _T("     mt_orderno,")
                 _T("     mt_payment_date,")
                 _T("     mt_partner_id")
                 _T("     ) tbl"),
                 szWhere, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMSSupplierPaymentList::GetQueryString7()
{
    CString szSQL, szWhere, szWhere2, szStorages, szSources;
    szWhere.Format(
        _T("AND po_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    szWhere2.Format(
        _T("AND mt_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
    {
        if (m_wndStorage.GetCheck(i))
        {
            m_wndStorage.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStorage.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    for (int i = 0; i < m_wndSource.GetItemCount(); i++)
    {
        if (m_wndSource.GetCheck(i))
        {
            m_wndSource.SetCurSel(i);
            if (!szSources.IsEmpty())
                szSources += _T(", ");
            szSources += m_wndSource.GetCurrent(0);
        }
    }
    if (!szSources.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"),
                             szSources);
        szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
    }

    if (m_nAll == 0)
        szWhere.AppendFormat(_T(""));
    if (m_nCash == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id = 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method = 'TM'"));
    }
    if (m_nTransfer == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id <> 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method <> 'TM'"));
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(_T(" SELECT ptype,")
                 _T("   id,")
                 _T("   invoiceno,")
                 _T("   invoicedate,")
                 _T("   orderno,")
                 _T("   importdate,")
                 _T("   amount,")
                 _T("   reamount,")
                 _T("   partnername,")
                 _T("   productname,")
                 _T("   pdamount")
                 _T(" FROM")
                 _T("   (SELECT 1                              AS ptype,")
                 _T("     po_purchase_order_id                 AS id,")
                 _T("     po_invoiceno                         AS invoiceno,")
                 _T("     trunc(po_invoicedate)  AS invoicedate,")
                 _T("     po_orderno                           AS orderno,")
                 _T("     trunc(po_orderdate)    AS importdate,")
                 _T("     ROUND(po_totalamount)                AS amount,")
                 _T("     0                                    AS reamount,")
                 _T("     Get_partnername(po_partner_id)       AS partnername,")
                 _T("     product_name                         AS productname,")
                 _T("     SUM(ROUND(pol_totalamount))          AS pdamount")
                 _T("   FROM purchase_order")
                 _T("   LEFT JOIN purchase_orderline")
                 _T("   ON (po_purchase_order_id = pol_purchase_order_id)")
                 _T("   LEFT JOIN m_productitem_view3")
                 _T("   ON (product_item_id = pol_product_item_id)")
                 _T("   LEFT JOIN purchase_payment")
                 _T("   ON (po_refpayment_id=pp_purchase_payment_id)")
                 _T("   WHERE po_payment    = 'Y'")
                 _T("   AND product_org_id  = 'PM' %s ")
                 _T("   GROUP BY po_purchase_order_id,")
                 _T("     po_invoiceno,")
                 _T("     po_invoicedate,")
                 _T("     po_orderno,")
                 _T("     po_orderdate,")
                 _T("     po_partner_id,")
                 _T("     po_totalamount,")
                 _T("     product_name")
                 _T("   UNION ALL")
                 _T("   SELECT 2                               AS ptype,")
                 _T("     mt_transaction_id                    AS id,")
                 _T("     CAST('' AS NVARCHAR2(1))             AS invoiceno,")
                 _T("     CAST('' AS DATE)                     AS invoicedate,")
                 _T("     mt_orderno                           AS orderno,")
                 _T("     trunc(mt_orderdate)    AS importdate,")
                 _T("     0                                    AS amount,")
                 _T("     ROUND(mt_totalamount)                AS reamount,")
                 _T("     Get_partnername(mt_partner_id)       AS partnername,")
                 _T("     product_name                         AS productname,")
                 _T("     SUM(ROUND(mtl_ttlamount))            AS pdamount")
                 _T("   FROM m_transaction")
                 _T("   LEFT JOIN m_transactionline")
                 _T("   ON(mt_transaction_id = mtl_transaction_id)")
                 _T("   LEFT JOIN m_productitem_view3")
                 _T("   ON (product_item_id   = mtl_product_item_id)")
                 _T("   WHERE mt_doctype      = 'PRO'")
                 _T("   AND mt_payment        = 'Y'")
                 _T("   AND product_org_id    = 'PM'")
                 _T("   AND mt_payment_method = 'UNC' %s ")
                 _T("   GROUP BY mt_transaction_id,")
                 _T("     mt_orderno,")
                 _T("     mt_orderdate,")
                 _T("     mt_partner_id,")
                 _T("     mt_totalamount,")
                 _T("     product_name")
                 _T("   )")
                 _T(" ORDER BY partnername,")
                 _T("   ptype,")
                 _T("   importdate,")
                 _T("   productname"),
                 szWhere, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMSSupplierPaymentList::GetQueryString8()
{
    CString szSQL, szWhere, szWhere2, szStorages, szSources;
    szWhere.Format(
        _T("AND po_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    szWhere2.Format(
        _T("AND mt_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
    {
        if (m_wndStorage.GetCheck(i))
        {
            m_wndStorage.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStorage.GetCurrent(0);
        }
    }
    if (!szStorages.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    for (int i = 0; i < m_wndSource.GetItemCount(); i++)
    {
        if (m_wndSource.GetCheck(i))
        {
            m_wndSource.SetCurSel(i);
            if (!szSources.IsEmpty())
                szSources += _T(", ");
            szSources += m_wndSource.GetCurrent(0);
        }
    }
    if (!szSources.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"),
                             szSources);
        szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
    }

    if (m_nAll == 0)
        szWhere.AppendFormat(_T(""));
    if (m_nCash == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id = 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method = 'TM'"));
    }
    if (m_nTransfer == 0)
    {
        szWhere.AppendFormat(_T("AND pp_payment_method_id <> 'TM'"));
        szWhere2.AppendFormat(_T("AND mt_payment_method <> 'TM'"));
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(
        _T(" SELECT SUM(ROUND(thuoc) - ROUND(rethuoc))    AS drug,")
        _T("   SUM(ROUND(hoachat)    - ROUND(rehoachat))  AS chemicals,")
        _T("   SUM(ROUND(bbg)        - ROUND(rebbg))      AS cotton,")
        _T("   SUM(ROUND(duoclieu)   - ROUND(reduoclieu)) AS herb,")
        _T("   SUM(ROUND(tpdd)       - ROUND(retpdd))     AS compound,")
        _T("   SUM(ROUND(ycu)        - ROUND(reycu))      AS instrument")
        _T(" FROM")
        _T("   (SELECT")
        _T("     CASE")
        _T("       WHEN (instr(product_producttype, 'A11') > 0")
        _T("       OR product_producttype                 IN ('A1400', ")
        _T("'A6000'))")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS thuoc,")
        _T("     CASE")
        _T("       WHEN instr(product_producttype, 'A12') > 0")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS hoachat,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1500'")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS bbg,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1302'")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS duoclieu,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1301'")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS tpdd,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1600'")
        _T("       THEN pol_totalamount")
        _T("       ELSE 0")
        _T("     END AS ycu,")
        _T("     0   AS rethuoc,")
        _T("     0   AS rehoachat,")
        _T("     0   AS rebbg,")
        _T("     0   AS reduoclieu,")
        _T("     0   AS retpdd,")
        _T("     0   AS reycu")
        _T("   FROM purchase_order")
        _T("   LEFT JOIN purchase_orderline")
        _T("   ON (po_purchase_order_id = pol_purchase_order_id)")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON (product_item_id = pol_product_item_id)")
        _T("   LEFT JOIN purchase_payment")
        _T("   ON (po_refpayment_id=pp_purchase_payment_id)")
        _T("   WHERE po_payment    = 'Y'")
        _T("   AND product_org_id  = 'PM' %s")
        _T("   UNION ALL")
        _T("   SELECT 0 AS thuoc,")
        _T("     0      AS hoachat,")
        _T("     0      AS bbg,")
        _T("     0      AS duoclieu,")
        _T("     0      AS tpdd,")
        _T("     0      AS ycu,")
        _T("     CASE")
        _T("       WHEN (instr(product_producttype, 'A11') > 0")
        _T("       OR product_producttype                 IN ('A1400', ")
        _T("'A6000'))")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS rethuoc,")
        _T("     CASE")
        _T("       WHEN instr(product_producttype, 'A12') > 0")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS rehoachat,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1500'")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS rebbg,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1302'")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS reduoclieu,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1301'")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS retpdd,")
        _T("     CASE")
        _T("       WHEN product_producttype = 'A1600'")
        _T("       THEN mtl_ttlamount")
        _T("       ELSE 0")
        _T("     END AS reycu")
        _T("   FROM m_transaction")
        _T("   LEFT JOIN m_transactionline")
        _T("   ON(mt_transaction_id = mtl_transaction_id)")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON (product_item_id = mtl_product_item_id)")
        _T("   WHERE mt_doctype    = 'PRO'")
        _T("   AND mt_payment      = 'Y'")
        _T("   AND product_org_id  = 'PM'")
        _T("   AND mt_payment_method = 'UNC' %s")
        _T("   )"),
        szWhere, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}
BEGIN_MESSAGE_MAP(CPMSSupplierPaymentList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSSupplierPaymentList::OnSetFocus(CWnd *pOldWnd)
{
    CGuiView::OnSetFocus(pOldWnd);

    // TODO: Add your message handler code here
    m_wndFromDate.SetFocus();
}
