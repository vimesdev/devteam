#include "PMSImportSheetList.h"
#include "Excel.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "ReportUtils.h"
#include "stdafx.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnToDateCheckValue();
}
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    ((CPMSImportSheetList *)pWnd)
        ->OnStorageSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnStorageSelendokFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                        int nNewItemSel)
{
    ((CPMSImportSheetList *)pWnd)
        ->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnItemGroupSelendokFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                       int nNewItemSel)
{
    ((CPMSImportSheetList *)pWnd)
        ->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSupplierSelendokFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
        ((CPMSImportSheetList *)pWnd)->OnSupplierAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnAllSelect();
}
static void _OnInternalSelectFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnInternalSelect();
}
static void _OnKho708SelectFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnKho708Select();
}
static void _OnPaidSelectFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnPaidSelect();
}
static void _OnGroupByTypeSelectFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnGroupByTypeSelect();
}
static void _OnGeneralReportsSelectFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnGeneralReportsSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd)
{
    CPMSImportSheetList *pVw = (CPMSImportSheetList *)pWnd;
    pVw->OnPrintPreviewSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CPMSImportSheetList *pVw = (CPMSImportSheetList *)pWnd;
    pVw->OnExportSelect();
}
static void _OnExportFnc(CWnd *pWnd)
{
    CPMSImportSheetList *pVw = (CPMSImportSheetList *)pWnd;
    return pVw->OnExportDrugDetail(false);
}
static int _OnAddPMSImportSheetListFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnAddPMSImportSheetList();
}
static int _OnEditPMSImportSheetListFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnEditPMSImportSheetList();
}
static int _OnDeletePMSImportSheetListFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnDeletePMSImportSheetList();
}
static int _OnSavePMSImportSheetListFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnSavePMSImportSheetList();
}
static int _OnCancelPMSImportSheetListFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnCancelPMSImportSheetList();
}

static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                        int nNewItemSel)
{
    ((CPMSImportSheetList *)pWnd)
        ->OnContractSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnContractSelendokFnc(CWnd *pWnd)
{
    ((CPMSImportSheetList *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
    ((CPMSImportSheetList *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
    ((CPMSImportSheetList *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSImportSheetList *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
    ((CPMSImportSheetList *)pWnd)->OnContractAddNew();
}*/

CPMSImportSheetList::CPMSImportSheetList(CWnd *pParent)
{
    m_nDlgWidth = 1029;
    m_nDlgHeight = 773;
    SetDefaultValues();
}
CPMSImportSheetList::~CPMSImportSheetList() {}
void CPMSImportSheetList::OnCreateComponents()
{
    m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 570,
                                       150);
    m_wndItemGroupLabel.Create(this, _T("Item Group"), 300, 60, 380, 85);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
    m_wndFromDate.Create(this, 115, 30, 295, 55);
    m_wndToDateLabel.Create(this, _T("To Date"), 300, 30, 380, 55);
    m_wndToDate.Create(this, 385, 30, 565, 55);
    m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 110, 85);
    m_wndStorage.SetCheckBox(TRUE);
    m_wndStorage.Create(this, 115, 60, 295, 85);
    m_wndItemGroup.Create(this, 385, 60, 565, 85);
    m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 90, 110, 115);
    m_wndSupplier.Create(this, 115, 90, 565, 115);
    m_wndContractLabel.Create(this, _T("Hợp đồng"), 10, 120, 110, 145);
    m_wndContract.Create(this, 115, 120, 295, 145);
    m_wndAll.Create(this, _T("All"), 10, 155, 90, 180);
    m_wndInternal.Create(this, _T("Internal"), 95, 155, 175, 180);
    m_wndKho708.Create(this, _T("Kho 708"), 180, 155, 260, 180);
    m_wndPaid.Create(this, _T("Paid"), 265, 155, 365, 180);
    m_wndGroupByType.Create(this, _T("Group by Type"), 455, 155, 565, 180);
    m_wndGeneralReports.Create(this, _T("General Reports"), 10, 185, 160, 210);
    m_wndPrintPreview.Create(this, _T("&Print Preview"), 360, 185, 460, 210);
    m_wndExport.Create(this, _T("&Export"), 465, 185, 565, 210);
}
void CPMSImportSheetList::OnInitializeComponents()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    // m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndFromDate.SetCheckValue(true);
    // m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndToDate.SetCheckValue(true);
    m_wndStorage.SetCheckValue(true);
    m_wndStorage.LimitText(1024);
    m_wndItemGroup.SetCheckValue(true);
    m_wndItemGroup.LimitText(1024);
    m_wndSupplier.SetCheckValue(true);
    m_wndSupplier.LimitText(1024);
    m_wndContract.SetCheckValue(true);
    m_wndContract.LimitText(35);

    m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 170);

    m_wndItemGroup.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
    m_wndItemGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);

    m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
    m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

    m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
    m_wndContract.InsertColumn(2, _T("Diễn giải"), CFMT_TEXT, 250);
    m_wndContract.InsertColumn(3, _T("Ngày ký"), CFMT_TEXT, 80);
    m_wndContract.InsertColumn(4, _T("Số tiền"), CFMT_MONEY, 120);
    m_wndContract.InsertColumn(5, _T("Gói thầu"), CFMT_TEXT,
                                70); // Contract_package_uid
}

void CPMSImportSheetList::OnSetWindowEvents()
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
    m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
    // m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
    // m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
    m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
    m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
    // m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
    m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
    m_wndInternal.SetEvent(WE_CLICK, _OnInternalSelectFnc);
    m_wndKho708.SetEvent(WE_CLICK, _OnKho708SelectFnc);
    m_wndPaid.SetEvent(WE_CLICK, _OnPaidSelectFnc);
    m_wndGroupByType.SetEvent(WE_CLICK, _OnGroupByTypeSelectFnc);
    m_wndGeneralReports.SetEvent(WE_CLICK, _OnGeneralReportsSelectFnc);
    m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
    // m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
    // m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
    m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
    m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
    // m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
    m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szFromDate += _T(" 00:00");
    m_szToDate += _T(" 23:59");
    UpdateData(false);
}
void CPMSImportSheetList::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
    DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
    DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
    DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
    DDX_Radio(pDX, m_wndInternal.GetDlgCtrlID(), m_nInternal);
    DDX_Radio(pDX, m_wndKho708.GetDlgCtrlID(), m_nKho708);
    DDX_Radio(pDX, m_wndPaid.GetDlgCtrlID(), m_nPaid);
    DDX_Check(pDX, m_wndGroupByType.GetDlgCtrlID(), m_bGroupByType);
    DDX_Check(pDX, m_wndGeneralReports.GetDlgCtrlID(), m_bGeneralReports);
    DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
}
void CPMSImportSheetList::GetDataToScreen()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT * FROM "));
    rs.ExecSQL(szSQL);
}
void CPMSImportSheetList::GetScreenToData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSImportSheetList::SetDefaultValues()
{
    m_szFromDate.Empty();
    m_szToDate.Empty();
    m_szStorageKey.Empty();
    m_szItemGroupKey.Empty();
    m_szSupplierKey.Empty();
    m_nAll = 0;
    m_nInternal = 1;
    m_nKho708 = 1;
    m_nPaid = 1;
    m_bGroupByType = FALSE;
    m_bGeneralReports = FALSE;
    m_szContractKey.Empty();
}
int CPMSImportSheetList::SetMode(int nMode)
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
    UpdateData(FALSE);
    return nOldMode;
}
/*void CPMSImportSheetList::OnFromDateChange(){

} */
/*void CPMSImportSheetList::OnFromDateSetfocus(){

} */
/*void CPMSImportSheetList::OnFromDateKillfocus(){

} */
int CPMSImportSheetList::OnFromDateCheckValue() { return 0; }
/*void CPMSImportSheetList::OnToDateChange(){

} */
/*void CPMSImportSheetList::OnToDateSetfocus(){

} */
/*void CPMSImportSheetList::OnToDateKillfocus(){

} */
int CPMSImportSheetList::OnToDateCheckValue() { return 0; }
void CPMSImportSheetList::OnStorageSelectChange(int nOldItemSel,
                                                int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSImportSheetList::OnStorageSelendok() {}
/*void CPMSImportSheetList::OnStorageSetfocus(){

}*/
/*void CPMSImportSheetList::OnStorageKillfocus(){

}*/
long CPMSImportSheetList::OnStorageLoadData()
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
            szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1
    %s ORDER BY id "), szWhere nCount = rs.ExecSQL(szSQL); while(!rs.IsEOF()){
                    m_wndStorage.AddItems(
                    rs.MoveNext();
            }
            return nCount;
    */
    return 0;
}
/*void CPMSImportSheetList::OnStorageAddNew(){
        CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
void CPMSImportSheetList::OnItemGroupSelectChange(int nOldItemSel,
                                                  int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSImportSheetList::OnItemGroupSelendok() {}
/*void CPMSImportSheetList::OnItemGroupSetfocus(){

}*/
/*void CPMSImportSheetList::OnItemGroupKillfocus(){

}*/
long CPMSImportSheetList::OnItemGroupLoadData()
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
/*void CPMSImportSheetList::OnItemGroupAddNew(){
        CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
void CPMSImportSheetList::OnSupplierSelectChange(int nOldItemSel,
                                                 int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSImportSheetList::OnSupplierSelendok() {}
/*void CPMSImportSheetList::OnSupplierSetfocus(){

}*/
/*void CPMSImportSheetList::OnSupplierKillfocus(){

}*/
long CPMSImportSheetList::OnSupplierLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
    /*
            CRecord rs(&pMF->m_db);
            CString szSQL, szWhere;
            if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
             szWhere.Format(_T(" and id='%s' "), m_szSupplierKey
    };
            m_wndSupplier.DeleteAllItems();
            int nCount = 0;
            szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1
    %s ORDER BY id "), szWhere nCount = rs.ExecSQL(szSQL); while(!rs.IsEOF()){
                    m_wndSupplier.AddItems(
                    rs.MoveNext();
            }
            return nCount;
    */
    return 0;
}
/*void CPMSImportSheetList::OnSupplierAddNew(){
        CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
void CPMSImportSheetList::OnAllSelect() {}
void CPMSImportSheetList::OnInternalSelect() {}
void CPMSImportSheetList::OnKho708Select() {}
void CPMSImportSheetList::OnPaidSelect() {}
void CPMSImportSheetList::OnGroupByTypeSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSImportSheetList::OnGeneralReportsSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSImportSheetList::OnPrintPreviewSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(TRUE);
    if (!m_bGeneralReports)
    {
        CReportUtils ru;
        CString szMenuStr;
        szMenuStr =
            _T("In chi tiết theo hàng|In tổng hợp theo phiếu|In tổng hợp theo ")
            _T("phiếu( mẫu ngang)");
        int nId = ru.CreatePopupMenu(&m_wndPrintPreview, szMenuStr);
        CString szFileName = _T("TONGKETSUDUNGTHUOCTAIDONVI_CT.xls");
        switch (nId)
        {
        case 1:
            ru.PrintOnExport(this, _OnExportFnc, szFileName);
            break;
        case 2:
            OnPrint();
            break;
        case 3:
            OnPrint(TRUE);
            break;
        }
    }
    else
    {
        OnPrint1();
    }
}
void CPMSImportSheetList::OnExportSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(TRUE);
    if (!m_bGeneralReports)
    {
        CGuiMenu menu(this);
        menu.CreatePopupMenu();
        CRect rect;
        int x, y;
        menu.AppendMenu(MF_BYCOMMAND, 1, _T("Xuất chi tiết theo hàng"));
        menu.AppendMenu(MF_SEPARATOR);
        menu.AppendMenu(MF_BYCOMMAND, 2, _T("Xuất tổng hợp theo phiếu"));
        m_wndExport.GetWindowRect(&rect);
        // ClientToScreen(&rect);
        int nId = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_RIGHTALIGN |
                                          TPM_BOTTOMALIGN,
                                      rect.right, rect.top, this);
        switch (nId)
        {
        case 1:
            OnExportDrugDetail();
            break;
        case 2:
            OnExport();
            break;
        }
    }
    else
    {
        OnExport1();
    }
}

void CPMSImportSheetList::OnExportDrugDetail(bool bOpen)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CExcel xls;
    CString szSQL, tmpStr;
    CString szOldGroup, szNewGroup, szNewOrder, szOldOrder, szFileName,
        szFilePath;
    CRecord rs(&pMF->m_db);
    int nIdx = 1, j = 0, nOldGroupRow = 0, nCol = 0, nRow = 0;
    double nGrpAmt = 0, nTtlAmt = 0, nGrpAmt2 = 0, nTtlAmt2 = 0,
           nOrderAmount = 0;
    szSQL = GetQueryString_DrugDetail();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
        return;
    }
    /*
    xls.CreateSheet(1);
    xls.SetWorksheet(0);
    //Header Section
    xls.SetColumnWidth(0, 5);
    xls.SetColumnWidth(1, 10);
    xls.SetColumnWidth(2, 10);
    xls.SetColumnWidth(3, 10);
    xls.SetColumnWidth(4, 30);
    xls.SetColumnWidth(7, 15);
    xls.SetColumnWidth(8, 15);


    xls.SetCellMergedColumns(nCol, nRow, 3);
    xls.SetCellMergedColumns(nCol, nRow+1, 3);
    xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER,
    true, 10); xls.SetCellText(nCol, nRow+1, pMF->m_szHospitalName, FMT_TEXT |
    FMT_CENTER, true, 10);

    xls.SetCellMergedColumns(nCol, nRow+2, 7);
    xls.SetCellText(nCol, nRow+2, _T("\x42\x1EA2NG K\xCA PHI\x1EBEU NH\x1EACP"),
    FMT_TEXT | FMT_CENTER, true, 12); xls.SetCellMergedColumns(nCol, nRow+3, 7);
    tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDate::Convert(m_szFromDate,
    yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellText(nCol, nRow+3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    //Col Head
    nRow = 4;
    xls.SetCellMergedRows(nCol, nRow, 2);
    xls.SetCellMergedColumns(nCol+1, nRow, 2);
    xls.SetCellMergedRows(nCol+3, nRow, 2);
    xls.SetCellMergedRows(nCol+4, nRow, 2);
    xls.SetCellMergedRows(nCol+5, nRow, 2);
    xls.SetCellMergedRows(nCol+6, nRow, 2);
    xls.SetCellMergedRows(nCol+7, nRow, 2);
    xls.SetCellMergedRows(nCol+8, nRow, 2);
    xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER |
    FMT_WRAPING, true); xls.SetCellText(nCol+1, nRow, _T("Phiếu nhập"), FMT_TEXT
    | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true); xls.SetCellText(nCol+1,
    nRow+1, _T("Số chứng từ"), FMT_TEXT | FMT_CENTER | FMT_VCENTER |
    FMT_WRAPING, true); xls.SetCellText(nCol+2, nRow+1, _T("Ngày"), FMT_TEXT |
    FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true); xls.SetCellText(nCol+3, nRow,
    _T("Số hóa đơn"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol+4, nRow, _T("Tên hàng"), FMT_TEXT | FMT_CENTER |
    FMT_VCENTER | FMT_WRAPING, true); xls.SetCellText(nCol+5, nRow, _T("Đơn
    vị"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol+6, nRow, _T("Số lượng"), FMT_TEXT | FMT_CENTER |
    FMT_VCENTER | FMT_WRAPING, true); xls.SetCellText(nCol+7, nRow, _T("Đơn
    giá"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol+8, nRow, _T("Thành tiền"), FMT_TEXT | FMT_CENTER |
    FMT_VCENTER | FMT_WRAPING, true);
    */
    szFileName = _T("TONGKETSUDUNGTHUOCTAIDONVI_CT");
    szFilePath.Format(_T("Exports\\Template\\MAU_%s.xls"), szFileName);
    if (!xls.Load(szFilePath))
    {
        CString szMsg;
        szMsg.Format(_T("Thiếu file %s"), szFilePath);
        ShowMessageBox(szMsg);
        return;
    }
    xls.SetWorksheet(0);
    tmpStr.Format(_T("Từ %s đến %s"),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    nRow = 6;
    while (!rs.IsEOF())
    {
        if (m_bGroupByType)
            tmpStr = _T("product_groupid");
        else
            tmpStr = _T("dept");

        rs.GetValue(tmpStr, szNewGroup);
        rs.GetValue(_T("ordno"), szNewOrder);
        if (szNewGroup != szOldGroup)
        {
            if (nGrpAmt > 0)
            {
                // xls.SetCellText(nCol+3, nOldGroupRow, _T("T\x1ED5ng
                // \x63\x1ED9ng"), FMT_TEXT, true);
                xls.SetCellText(nCol + 8, nOldGroupRow, ToString(nGrpAmt),
                                FMT_NUMBER1, true);
                // xls.SetCellText(nCol+5, nOldGroupRow, ToString(nGrpAmt2),
                // FMT_NUMBER1, true);
                nTtlAmt += nGrpAmt;
                nTtlAmt2 += nGrpAmt2;
                nGrpAmt = 0;
                nGrpAmt2 = 0;
            }
            if (nOrderAmount > 0)
            {
                xls.SetCellText(nCol + 7, nRow, _T("T\x1ED5ng \x63\x1ED9ng"),
                                FMT_TEXT, true);
                xls.SetCellText(nCol + 8, nRow, ToString(nOrderAmount),
                                FMT_NUMBER1, true);
                // xls.SetCellText(nCol+5, nOldGroupRow, ToString(nGrpAmt2),
                // FMT_NUMBER1, true);
                nOrderAmount = 0;
                nRow++;
            }
            if (m_bGroupByType)
                rs.GetValue(_T("product_groupname"), tmpStr);
            else
                tmpStr = szNewGroup;
            xls.SetCellMergedColumns(nCol, nRow, 7);
            xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
            nOldGroupRow = nRow;
            nRow++;
            szOldGroup = szNewGroup;
            nIdx = 1;
        }
        if (szNewOrder != szOldOrder)
        {
            if (nOrderAmount > 0)
            {
                xls.SetCellText(nCol + 7, nRow, _T("T\x1ED5ng \x63\x1ED9ng"),
                                FMT_TEXT, true);
                xls.SetCellText(nCol + 8, nRow, ToString(nOrderAmount),
                                FMT_NUMBER1, true);
                // xls.SetCellText(nCol+5, nOldGroupRow, ToString(nGrpAmt2),
                // FMT_NUMBER1, true);
                nOrderAmount = 0;
                nRow++;
            }
            szOldOrder = szNewOrder;
        }
        xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
        xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("ordno")), FMT_TEXT);
        rs.GetValue(_T("impdte"), tmpStr);
        xls.SetCellText(nCol + 2, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
        xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("invno")), FMT_TEXT);
        rs.GetValue(_T("product_name"), tmpStr);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
        xls.SetCellText(nCol + 5, nRow, rs.GetValue(_T("product_uomname")),
                        FMT_TEXT);
        xls.SetCellText(nCol + 6, nRow, rs.GetValue(_T("qty_delivery")),
                        FMT_NUMBER1);
        xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("product_taxprice")),
                        FMT_NUMBER1);
        tmpStr = rs.GetValue(_T("ttlamt"));
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1);
        nGrpAmt += str2double(tmpStr);
        nOrderAmount += str2double(tmpStr);
        rs.MoveNext();
        nRow++;
    }
    if (nGrpAmt > 0)
    {
        // xls.SetCellText(nCol+3, nOldGroupRow, _T("T\x1ED5ng \x63\x1ED9ng"),
        // FMT_TEXT, true);
        xls.SetCellText(nCol + 8, nOldGroupRow, ToString(nGrpAmt), FMT_NUMBER1,
                        true);
        // xls.SetCellText(nCol+5, nOldGroupRow, ToString(nGrpAmt2),
        // FMT_NUMBER1, true);
        nTtlAmt += nGrpAmt;
        nTtlAmt2 += nGrpAmt2;
        nGrpAmt = 0;
        nGrpAmt2 = 0;
    }
    if (nOrderAmount > 0)
    {
        xls.SetCellText(nCol + 7, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT,
                        true);
        xls.SetCellText(nCol + 8, nRow, ToString(nOrderAmount), FMT_NUMBER1,
                        true);
        // xls.SetCellText(nCol+5, nOldGroupRow, ToString(nGrpAmt2),
        // FMT_NUMBER1, true);
        nOrderAmount = 0;
        nRow++;
    }
    if (nTtlAmt > 0)
    {
        xls.SetCellText(nCol + 7, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT,
                        true);
        tmpStr.Format(_T("%f"), nTtlAmt);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_NUMBER1, true);
    }
    EndWaitCursor();
    szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
    xls.Save(szFilePath, bOpen);
}

CString CPMSImportSheetList::GetQueryString_DrugDetail()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages,
        szCondition;

    szTransactionWhere.Format(
        _T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    szPurchaseWhere.Format(
        _T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);

    if (!m_szSupplierKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"),
                                        m_szSupplierKey);
        szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"),
                                     m_szSupplierKey);
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
        szTransactionWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"),
                                        szStorages);
        szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"),
                                     szStorages);
    }

    if (!m_szItemGroupKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                        m_szItemGroupKey);
        szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                     m_szItemGroupKey);
    }

    szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                    pMF->GetModuleID());
    szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                 pMF->GetModuleID());

    if (m_bGroupByType)
        szCondition = _T(" product_groupid, product_groupname,");

    if (m_nAll == 0)
        szWhere.Format(_T(" WHERE 1=1"));
    if (m_nInternal == 0)
        szWhere.Format(_T("WHERE resouces = 'I'"));
    if (m_nKho708 == 0)
        szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
    if (m_nPaid == 0)
        szWhere.Format(_T("WHERE resouces = 'P'"));
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and contract_id = '%s'", m_szContractKey);
    }

    szSQL.Format(
        _T(" SELECT doctype,")
        _T("        ordno,")
        _T("        invno,")
        _T("        deptid,")
        _T("        dept,")
        _T("        impdte,%s")
        _T("        Round(SUM(ttlamt), 0) AS ttlamt,")
        _T("        payment,")
        _T("        contract_no,")
        _T("        contractpkg_id,")
        _T("		product_name, product_uomname, ")
        _T("		sum(qty_delivery) as qty_delivery, product_taxprice ")
        _T(" FROM   (SELECT    mt_doctype AS doctype,")
        _T("                   mt_orderno AS ordno,")
        _T("                   Cast(0 AS NVARCHAR2(1)) AS invno,")
        _T("                   mt_department_id AS deptid,")
        _T("                   CASE WHEN mt_doctype = 'MOV' THEN ")
        _T("Get_storagename(mt_storage_id)")
        _T("                   ELSE Get_departmentname(mt_department_id)")
        _T("                   END AS dept,")
        _T("                   Trunc(mt_approveddate) AS impdte,")
        _T("                   product_groupid,")
        _T("                   product_groupname,")
        _T("                   mtl_qtydelivery * product_taxprice AS ttlamt,")
        _T("                   Cast ('I' AS NVARCHAR2(1)) AS resouces,")
        _T("                   Cast ('Y' AS NVARCHAR2(1)) AS payment,")
        _T("                   NULL AS contract_no,")
        _T("                   NULL AS contractpkg_id,")
        _T("				   product_name, product_uomname, ")
        _T("mtl_qtydelivery as qty_delivery,")
        _T("				   product_taxprice,")
        _T("                   product_contract_id as contract_id ")  
        _T("         FROM      m_transaction")
        _T("         LEFT JOIN m_transactionline ON ( mt_transaction_id = ")
        _T("mtl_transaction_id )")
        _T("         LEFT JOIN m_productitem_view3 ON ( mtl_product_item_id = ")
        _T("product_item_id )")
        _T("         WHERE     mt_status = 'A' AND ( mt_doctype IN( 'IMP', ")
        _T("'DRO', 'CRO' )  OR (")
        _T("                                         mt_doctype = 'MOV' AND ")
        _T("mt_storage_id NOT IN ( %s )")
        _T("                                                 ) ) %s")
        _T("         UNION ALL")
        _T("         SELECT    po_doctype,")
        _T("                   po_orderno,")
        _T("                   po_invoiceno,")
        _T("                   po_partner_id,")
        _T("                   Get_partnername(po_partner_id),")
        _T("                   Trunc(po_approveddate),")
        _T("                   product_groupid,")
        _T("                   product_groupname,")
        _T("                   pol_qtyimport * product_taxprice,")
        _T("                   Nvl(po_saleperson_id, 'P'),")
        _T("                   po_payment,")
        _T("                   get_contract_info(po_contract_id) AS ")
        _T("contract_no,")
        _T("                   po_contractpkg_id AS contractpkg_id,")
        _T("				   product_name, product_uomname, ")
        _T("pol_qtyimport as qty_delivery,")
        _T("				   product_taxprice,")
        _T("                   po_contract_id as contract_id")  
        _T("         FROM      purchase_order")
        _T("         LEFT JOIN purchase_orderline ON ( po_purchase_order_id = ")
        _T("pol_purchase_order_id )")
        _T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
        _T("pol_product_item_id )")
        _T("         WHERE     po_status = 'A' %s")
        _T("        ) %s")
        _T(" GROUP  BY ")
        _T("doctype,ordno,invno,deptid,dept,impdte,%spayment,contract_no,")
        _T("contractpkg_id,")
        _T("		product_name, product_uomname, product_taxprice")
        _T(" ORDER  BY doctype,%sdept,impdte"),
        szCondition, szStorages, szTransactionWhere, szPurchaseWhere, szWhere,
        szCondition, szCondition);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

void CPMSImportSheetList::OnPrint(BOOL bLandscape)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL,
                   *rptFooter = NULL;
    CString szSQL, tmpStr, szField, szTemp;
    CRecord rs(&pMF->m_db);
    CStringArray arrDat;
    CString szCurDte, szOldGroup, szNewGroup, szStorages, szFilePath,
        szFileName;
    double nTmp = 0;
    double nGrpAmt = 0, nTtlAmt = 0, nGrpAmt2 = 0, nTtlAmt2 = 0;
    int nIdx = 1, j = 0;
    szFileName = _T("PM_BANGKEPHIEUNHAP");
    if (bLandscape == TRUE)
    {
        szFileName += _T("_NGANG");
    }
    szFilePath.Format(_T("Reports\\HMS\\%s.RPT"), szFileName);
    if (!rpt.Init(szFilePath))
        return;
    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);
    if (pMF->GetCurrentUser() == _T("donglp"))
    {
        _msg(_T("%s"), szSQL);
    }
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
        return;
    }
    // Header Section
    rptHeader = rpt.GetReportHeader();
    rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("DeptName"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));
    tmpStr = _T("To\xE0n \x62\x1ED9");
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
        rptHeader->SetValue(_T("StockName"), szStorages);
    else
        rptHeader->SetValue(_T("StockName"), tmpStr);
    if (!m_szItemGroupKey.IsEmpty())
        rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
    else
        rptHeader->SetValue(_T("Type"), tmpStr);
    // 	if (!m_szTypeKey.IsEmpty())
    // 		rptHeader->SetValue(_T("Type"), m_wndType.GetCurrent(1));
    // 	else
    // 		rptHeader->SetValue(_T("Type"), tmpStr);
    tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    rptHeader->SetValue(_T("ReportDate"), tmpStr);
    // Detail
    while (!rs.IsEOF())
    {
        if (m_bGroupByType)
            tmpStr = _T("product_groupid");
        else
            tmpStr = _T("dept");
        rs.GetValue(tmpStr, szNewGroup);
        if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
        {
            if (nGrpAmt > 0)
            {
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
                tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")),
                              szOldGroup);
                rptDetail->SetValue(_T("TotalGroup"), tmpStr);
                rptDetail->SetValue(_T("s5"), ToString(nGrpAmt));
                rptDetail->SetValue(_T("s6"), ToString(nGrpAmt2));
                nTtlAmt += nGrpAmt;
                nTtlAmt2 += nGrpAmt2;
                nGrpAmt = 0;
                nGrpAmt2 = 0;
            }
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
            if (rptGroup)
            {
                if (m_bGroupByType)
                    tmpStr = rs.GetValue(_T("product_groupname"));
                else
                    tmpStr = szNewGroup;
                rptGroup->SetValue(_T("GroupName"), tmpStr);
            }
            nIdx = 1;
            szOldGroup = szNewGroup;
        }
        rptDetail = rpt.AddDetail();
        rptDetail->SetValue(_T("1"), int2str(nIdx++));
        rptDetail->SetValue(_T("2"), rs.GetValue(_T("ordno")));
        rs.GetValue(_T("impdte"), tmpStr);
        rptDetail->SetValue(_T("3"),
                            CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
        rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept")));
        rs.GetValue(_T("ttlamt"), tmpStr);
        rptDetail->SetValue(_T("5"), tmpStr);
        nGrpAmt += str2double(tmpStr);
        if (rs.GetValue(_T("payment")) == _T("N"))
        {
            rptDetail->SetValue(_T("6"), tmpStr);
            nGrpAmt2 += str2double(tmpStr);
        }
        rptDetail->SetValue(_T("7"), rs.GetValue(_T("invno")));
        rptDetail->SetValue(_T("8"), rs.GetValue(_T("contractpkg_id")));
        rptDetail->SetValue(_T("9"), rs.GetValue(_T("contract_no")));
        rptDetail->SetValue(_T("10"), rs.GetValue(_T("contract_sd")));
        rptDetail->SetValue(_T("11"), rs.GetValue(_T("congkhoan")));
        rs.MoveNext();
    }
    if (nGrpAmt > 0)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(rptDetail->GetValue(_T("TotalGroup")), szOldGroup);
        rptDetail->SetValue(_T("TotalGroup"), tmpStr);
        tmpStr.Format(_T("%f"), nGrpAmt);
        rptDetail->SetValue(_T("s5"), tmpStr);
        tmpStr.Format(_T("%f"), nGrpAmt2);
        rptDetail->SetValue(_T("s6"), tmpStr);
        nTtlAmt += nGrpAmt;
        nTtlAmt2 += nGrpAmt2;
        nGrpAmt = 0;
        nGrpAmt2 = 0;
    }
    if (nTtlAmt > 0)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng \x63\xE1\x63 \x63\xF4ng ty:"));
        rptDetail->SetValue(_T("TotalGroup"), tmpStr);
        tmpStr.Format(_T("%f"), nTtlAmt);
        rptDetail->SetValue(_T("s5"), tmpStr);
        tmpStr.Format(_T("%f"), nTtlAmt2);
        rptDetail->SetValue(_T("s6"), tmpStr);
    }
    // Footer
    rptFooter = rpt.GetReportFooter();

    szSQL = GetQueryString1();
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
                rptFooter->SetValue(tmpStr, szTemp);
                tmpStr.Format(_T("s%d"), nIdx);
                FormatCurrency(nTmp, szTemp);
                szTemp += _T(" \x111\x1ED3ng.");
                rptFooter->SetValue(tmpStr, szTemp);
                nIdx++;
            }
        }
    }

    szSQL = GetQueryString3();
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
                tmpStr.Format(_T("t%d"), nIdx);
                TranslateString(szField, szTemp);
                rptFooter->SetValue(tmpStr, szTemp);
                tmpStr.Format(_T("x%d"), nIdx);
                FormatCurrency(nTmp, szTemp);
                szTemp += _T(" \x111\x1ED3ng.");
                rptFooter->SetValue(tmpStr, szTemp);
                nIdx++;
            }
        }
    }

    szCurDte = pMF->GetSysDate();
    tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurDte.Right(2),
                  szCurDte.Mid(5, 2), szCurDte.Left(4));
    rptFooter->SetValue(_T("PrintDate"), tmpStr);
    rptFooter->SetValue(_T("Username"),
                        pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}
void CPMSImportSheetList::OnPrint1()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL,
                   *rptFooter = NULL;
    CString szSQL, tmpStr, szField, szTemp;
    CRecord rs(&pMF->m_db);
    CStringArray arrDat;
    CString szCurDte, szOldGroup, szNewGroup, szStorages;
    double nTmp = 0;
    double nGrpAmt = 0, nTtlAmt = 0, nGrpAmt2 = 0, nTtlAmt2 = 0;
    int nIdx = 1, j = 0;
    if (!rpt.Init(_T("Reports\\HMS\\PM_BANGKETONGHOPPHIEUNHAP.RPT")))
        return;
    szSQL = GetQueryString2();
    rs.ExecSQL(szSQL);

    if (pMF->GetCurrentUser() == _T("donglp"))
    {
        _msg(_T("%s"), szSQL);
    }

    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
        return;
    }
    // Header Section
    rptHeader = rpt.GetReportHeader();
    rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("DeptName"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));
    tmpStr = _T("To\xE0n \x62\x1ED9");
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
        rptHeader->SetValue(_T("StockName"), szStorages);
    else
        rptHeader->SetValue(_T("StockName"), tmpStr);
    if (!m_szItemGroupKey.IsEmpty())
        rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
    else
        rptHeader->SetValue(_T("Type"), tmpStr);
    tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    rptHeader->SetValue(_T("ReportDate"), tmpStr);
    // Detail
    while (!rs.IsEOF())
    {
        rptDetail = rpt.AddDetail();
        rptDetail->SetValue(_T("1"), int2str(nIdx++));
        rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept")));
        rs.GetValue(_T("ttlamt"), tmpStr);
        rptDetail->SetValue(_T("5"), tmpStr);
        nGrpAmt += str2double(tmpStr);
        rs.GetValue(_T("payment"), tmpStr);
        rptDetail->SetValue(_T("6"), tmpStr);
        nGrpAmt2 += str2double(tmpStr);
        rs.MoveNext();
    }
    if (nGrpAmt > 0)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng \x63\xE1\x63 \x63\xF4ng ty:"));
        rptDetail->SetValue(_T("TotalGroup"), tmpStr);
        tmpStr.Format(_T("%f"), nGrpAmt);
        rptDetail->SetValue(_T("s5"), tmpStr);
        tmpStr.Format(_T("%f"), nGrpAmt2);
        rptDetail->SetValue(_T("s6"), tmpStr);
    }
    // Footer
    rptFooter = rpt.GetReportFooter();

    szSQL = GetQueryString1();
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
                rptFooter->SetValue(tmpStr, szTemp);
                tmpStr.Format(_T("s%d"), nIdx);
                FormatCurrency(nTmp, szTemp);
                szTemp += _T(" \x111\x1ED3ng.");
                rptFooter->SetValue(tmpStr, szTemp);
                nIdx++;
            }
        }
    }
    szSQL = GetQueryString3();
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
                tmpStr.Format(_T("t%d"), nIdx);
                TranslateString(szField, szTemp);
                rptFooter->SetValue(tmpStr, szTemp);
                tmpStr.Format(_T("x%d"), nIdx);
                FormatCurrency(nTmp, szTemp);
                szTemp += _T(" \x111\x1ED3ng.");
                rptFooter->SetValue(tmpStr, szTemp);
                nIdx++;
            }
        }
    }
    szCurDte = pMF->GetSysDate();
    tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szCurDte.Right(2),
                  szCurDte.Mid(5, 2), szCurDte.Left(4));
    rptFooter->SetValue(_T("PrintDate"), tmpStr);
    rptFooter->SetValue(_T("Username"),
                        pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}
void CPMSImportSheetList::OnExport()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CExcel xls;
    CString szSQL, tmpStr;
    CString szOldGroup, szNewGroup;
    CRecord rs(&pMF->m_db);
    int nIdx = 1, j = 0;
    double nGrpAmt = 0, nTtlAmt = 0, nGrpAmt2 = 0, nTtlAmt2 = 0;

    szSQL = GetQueryString();
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
    xls.SetColumnWidth(1, 10);
    xls.SetColumnWidth(2, 10);
    xls.SetColumnWidth(3, 40);
    xls.SetColumnWidth(4, 30);
    int nCol = 0;
    int nRow = 0;

    xls.SetCellMergedColumns(nCol, nRow, 3);
    xls.SetCellMergedColumns(nCol, nRow + 1, 3);
    xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER,
                    true, 10);
    xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName,
                    FMT_TEXT | FMT_CENTER, true, 10);

    xls.SetCellMergedColumns(nCol, nRow + 2, 7);
    xls.SetCellText(nCol, nRow + 2,
                    _T("\x42\x1EA2NG K\xCA PHI\x1EBEU NH\x1EACP"),
                    FMT_TEXT | FMT_CENTER, true, 12);
    xls.SetCellMergedColumns(nCol, nRow + 3, 7);
    tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    // Col Head
    nRow = 4;
    xls.SetCellMergedRows(nCol, nRow, 2);
    xls.SetCellMergedColumns(nCol + 1, nRow, 2);
    xls.SetCellMergedRows(nCol + 3, nRow, 2);
    xls.SetCellMergedRows(nCol + 4, nRow, 2);
    xls.SetCellMergedRows(nCol + 5, nRow, 2);
    xls.SetCellMergedRows(nCol + 6, nRow, 2);
    xls.SetCellMergedRows(nCol + 7, nRow, 2);
    xls.SetCellMergedRows(nCol + 8, nRow, 2);
    xls.SetCellMergedRows(nCol + 9, nRow, 2);
    xls.SetCellText(nCol, nRow, _T("STT"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 1, nRow, _T("Phi\x1EBFu nh\x1EADp"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 1, nRow + 1, _T("S\x1ED1 \x63h\x1EE9ng t\x1EEB"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 2, nRow + 1, _T("Ng\xE0y"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 3, nRow, _T("Ngu\x1ED3n h\xE0ng"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 4, nRow, _T("S\x1ED1 ti\x1EC1n"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 5, nRow, _T("N\x1EE3"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 6, nRow, _T("S\x1ED1 h\xF3\x61 \x111\x1A1n"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 7, nRow, _T("Số hợp đồng"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 8, nRow, _T("Số quyết định"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 9, nRow, _T("Cộng khoản"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    nRow = 6;
    while (!rs.IsEOF())
    {
        if (m_bGroupByType)
            tmpStr = _T("product_groupid");
        else
            tmpStr = _T("dept");

        rs.GetValue(tmpStr, szNewGroup);

        if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
        {
            if (nGrpAmt > 0)
            {
                xls.SetCellText(nCol + 3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"),
                                FMT_TEXT, true);
                xls.SetCellText(nCol + 4, nRow, ToString(nGrpAmt), FMT_NUMBER1,
                                true);
                xls.SetCellText(nCol + 5, nRow, ToString(nGrpAmt2), FMT_NUMBER1,
                                true);
                nTtlAmt += nGrpAmt;
                nTtlAmt2 += nGrpAmt2;
                nGrpAmt = 0;
                nGrpAmt2 = 0;
                nRow++;
            }
            if (m_bGroupByType)
                rs.GetValue(_T("product_groupname"), tmpStr);
            else
                tmpStr = szNewGroup;
            xls.SetCellMergedColumns(nCol, nRow, 7);
            xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
            nRow++;
            szOldGroup = szNewGroup;
            nIdx = 1;
        }
        xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
        xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("ordno")), FMT_TEXT);
        rs.GetValue(_T("impdte"), tmpStr);
        xls.SetCellText(nCol + 2, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
        xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("dept")), FMT_TEXT);
        rs.GetValue(_T("ttlamt"), tmpStr);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1);
        nGrpAmt += str2double(tmpStr);
        if (rs.GetValue(_T("payment")) == _T("N"))
        {
            xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);
            nGrpAmt2 += str2double(tmpStr);
        }
        xls.SetCellText(nCol + 6, nRow, rs.GetValue(_T("invno")), FMT_TEXT);
        xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("contract_no")),
                        FMT_TEXT);
        xls.SetCellText(nCol + 8, nRow, rs.GetValue(_T("contractpkg_id")),
                        FMT_TEXT);
        xls.SetCellText(nCol + 9, nRow, rs.GetValue(_T("congkhoan")), FMT_TEXT);
        rs.MoveNext();
        nRow++;
    }
    if (nGrpAmt > 0)
    {
        xls.SetCellText(nCol + 3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT,
                        true);
        tmpStr.Format(_T("%f"), nGrpAmt);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1, true);
        nTtlAmt += nGrpAmt;
        tmpStr.Format(_T("%f"), nGrpAmt2);
        xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1, true);
        nTtlAmt2 += nGrpAmt2;
        nRow++;
    }
    if (nTtlAmt > 0)
    {
        xls.SetCellText(nCol + 3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT,
                        true);
        tmpStr.Format(_T("%f"), nTtlAmt);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTtlAmt2);
        xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1, true);
    }
    EndWaitCursor();
    xls.Save(_T("Exports\\TONGKETSUDUNGTHUOCTAIDONVI.xls"));
}

void CPMSImportSheetList::OnExport1()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CExcel xls;
    CString szSQL, tmpStr;
    CString szOldGroup, szNewGroup;
    CRecord rs(&pMF->m_db);
    int nIdx = 1, j = 0;
    double nGrpAmt = 0, nTtlAmt = 0, nGrpAmt2 = 0, nTtlAmt2 = 0;

    szSQL = GetQueryString2();
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
    xls.SetColumnWidth(1, 70);
    xls.SetColumnWidth(2, 40);
    xls.SetColumnWidth(3, 40);
    int nCol = 0;
    int nRow = 0;

    xls.SetCellMergedColumns(nCol, nRow, 2);
    xls.SetCellMergedColumns(nCol, nRow + 1, 2);
    xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER,
                    true, 10);
    xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName,
                    FMT_TEXT | FMT_CENTER, true, 10);

    xls.SetCellMergedColumns(nCol, nRow + 2, 4);
    xls.SetCellText(
        nCol, nRow + 2,
        _T("\x42\x1EA2NG K\xCA T\x1ED4NG H\x1EE2P PHI\x1EBEU NH\x1EACP"),
        FMT_TEXT | FMT_CENTER, true, 12);
    xls.SetCellMergedColumns(nCol, nRow + 3, 4);
    tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    // Col Head
    nRow = 4;
    xls.SetCellText(nCol, nRow, _T("STT"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 1, nRow, _T("\x43\xF4ng ty"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 2, nRow, _T("S\x1ED1 ti\x1EC1n"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 3, nRow, _T("N\x1EE3"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    nRow = 5;
    while (!rs.IsEOF())
    {
        xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
        xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("dept")), FMT_TEXT);
        rs.GetValue(_T("ttlamt"), tmpStr);
        xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_NUMBER1);
        nGrpAmt += str2double(tmpStr);
        rs.GetValue(_T("payment"), tmpStr);
        xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1);
        nGrpAmt2 += str2double(tmpStr);
        rs.MoveNext();
        nRow++;
    }
    if (nGrpAmt > 0)
    {
        xls.SetCellMergedColumns(nCol, nRow, 2);
        xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT,
                        true);
        tmpStr.Format(_T("%f"), nGrpAmt);
        xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nGrpAmt2);
        xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1, true);
    }
    EndWaitCursor();
    xls.Save(_T("Exports\\TONGKETSUDUNGTHUOCTAIDONVI.xls"));
}
int CPMSImportSheetList::OnAddPMSImportSheetList()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CPMSImportSheetList::OnEditPMSImportSheetList()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CPMSImportSheetList::OnDeletePMSImportSheetList()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CString szSQL;
    if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return -1;
    szSQL.Format(_T("DELETE FROM  WHERE  AND"));
    int ret = pMF->ExecSQL(szSQL);
    if (ret >= 0)
    {
        SetMode(VM_NONE);
        OnCancelPMSImportSheetList();
    }
    return 0;
}
int CPMSImportSheetList::OnSavePMSImportSheetList()
{
    if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
        return -1;
    if (!IsValidateData())
        return -1;
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
        // OnPMSImportSheetListListLoadData();
        SetMode(VM_VIEW);
    }
    else
    {
    }
    return ret;
    return 0;
}
int CPMSImportSheetList::OnCancelPMSImportSheetList()
{
    if (GetMode() == VM_EDIT)
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
int CPMSImportSheetList::OnPMSImportSheetListListLoadData() { return 0; }
CString CPMSImportSheetList::GetQueryString()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages,
        szCondition;

    szTransactionWhere.Format(
        _T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    szPurchaseWhere.Format(
        _T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);

    if (!m_szSupplierKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"),
                                        m_szSupplierKey);
        szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"),
                                     m_szSupplierKey);
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
        szTransactionWhere.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"),
                                        szStorages);
        szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"),
                                     szStorages);
    }

    if (!m_szItemGroupKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                        m_szItemGroupKey);
        szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                     m_szItemGroupKey);
    }

    szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                    pMF->GetModuleID());
    szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                 pMF->GetModuleID());

    if (m_bGroupByType)
        szCondition = _T(" product_groupid, product_groupname,");

    if (m_nAll == 0)
        szWhere.Format(_T(" WHERE 1=1"));
    if (m_nInternal == 0)
        szWhere.Format(_T("WHERE resouces = 'I'"));
    if (m_nKho708 == 0)
        szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
    if (m_nPaid == 0)
        szWhere.Format(_T("WHERE resouces = 'P'"));
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and contract_id = '%s'", m_szContractKey);
    }

    szSQL.Format(
        _T(" SELECT doctype,")
        _T("        ordno,")
        _T("        invno,")
        _T("        deptid,")
        _T("        dept,")
        _T("        impdte,%s")
        _T("        Round(SUM(ttlamt), 0) AS ttlamt,")
        _T("        payment,")
        _T("        contract_no,")
        _T("        contract_sd,")
        _T("        contractpkg_id, count(ordno) as congkhoan ")
        _T(" FROM   (SELECT    mt_doctype AS doctype,")
        _T("                   mt_orderno AS ordno,")
        _T("                   Cast(0 AS NVARCHAR2(1)) AS invno,")
        _T("                   mt_department_id AS deptid,")
        _T("                   CASE WHEN mt_doctype = 'MOV' THEN ")
        _T("Get_storagename(mt_storage_id)")
        _T("                   ELSE Get_departmentname(mt_department_id)")
        _T("                   END AS dept,")
        _T("                   Trunc(mt_approveddate) AS impdte,")
        _T("                   product_groupid,")
        _T("                   product_groupname,")
        _T("                   mtl_qtydelivery * product_taxprice AS ttlamt,")
        _T("                   Cast ('I' AS NVARCHAR2(1)) AS resouces,")
        _T("                   Cast ('Y' AS NVARCHAR2(1)) AS payment,")
        _T("                   NULL AS contract_no,")
        _T("                   NULL AS contract_sd,")
        _T("                   NULL AS contractpkg_id,")
        _T("                   product_contract_id as contract_id ")  
        _T("         FROM      m_transaction")
        _T("         LEFT JOIN m_transactionline ON ( mt_transaction_id = ")
        _T("mtl_transaction_id )")
        _T("         LEFT JOIN m_productitem_view3 ON ( mtl_product_item_id = ")
        _T("product_item_id )")
        _T("         WHERE     mt_status = 'A' AND ( mt_doctype IN( 'IMP', ")
        _T("'DRO', 'CRO' )  OR (")
        _T("                                         mt_doctype = 'MOV' AND ")
        _T("mt_storage_id NOT IN ( %s )")
        _T("                                                 ) ) %s")
        _T("         UNION ALL")
        _T("         SELECT    po_doctype,")
        _T("                   po_orderno,")
        _T("                   po_invoiceno,")
        _T("                   po_partner_id,")
        _T("                   Get_partnername(po_partner_id),")
        _T("                   Trunc(po_approveddate),")
        _T("                   product_groupid,")
        _T("                   product_groupname,")
        _T("                   pol_qtyimport * product_taxprice,")
        _T("                   Nvl(po_saleperson_id, 'P'),")
        _T("                   po_payment,")
        _T("                   adc_contract_no AS contract_no,")
        _T("                   cast(to_char (adc_signeddate, 'dd/mm/yyyy') as ")
        _T("nvarchar2(10)) AS contract_sd,")
        _T("                   po_contractpkg_id AS contractpkg_id,")
        _T("                   po_contract_id as contract_id")  
        _T("         FROM      purchase_order")
        _T("         LEFT JOIN purchase_orderline ON ( po_purchase_order_id = ")
        _T("pol_purchase_order_id )")
        _T("		 LEFT JOIN ad_contract ON (adc_contract_id = ")
        _T("po_contract_id)")
        _T("         LEFT JOIN m_productitem_view3 ON ( product_item_id = ")
        _T("pol_product_item_id )")
        _T("         WHERE     po_status = 'A' %s")
        _T("        ) %s")
        _T(" GROUP  BY ")
        _T("doctype,ordno,invno,deptid,dept,impdte,%spayment,contract_no,")
        _T("contract_sd, contractpkg_id")
        _T(" ORDER  BY doctype,%sdept,impdte"),
        szCondition, szStorages, szTransactionWhere, szPurchaseWhere, szWhere,
        szCondition, szCondition);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMSImportSheetList::GetQueryString1()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages,
        szCondition;

    szTransactionWhere.Format(
        _T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    szPurchaseWhere.Format(
        _T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);

    if (!m_szSupplierKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"),
                                        m_szSupplierKey);
        szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"),
                                     m_szSupplierKey);
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
        szTransactionWhere.AppendFormat(
            _T(" AND mt_storage_to_id IN (%s) AND mt_storage_id NOT IN (%s)"),
            szStorages, szStorages);
        szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"),
                                     szStorages);
    }

    if (!m_szItemGroupKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                        m_szItemGroupKey);
        szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                     m_szItemGroupKey);
    }

    szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                    pMF->GetModuleID());
    szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                 pMF->GetModuleID());

    if (m_nAll == 0)
        szWhere.Format(_T(" WHERE 1=1 "));
    if (m_nInternal == 0)
        szWhere.Format(_T("WHERE resouces = 'I'"));
    if (m_nKho708 == 0)
        szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
    if (m_nPaid == 0)
        szWhere.Format(_T("WHERE resouces = 'P'"));
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and contract_id = '%s'", m_szContractKey);
    }

    szSQL.Format(
        _T(" SELECT ROUND(SUM(noibo), 0) AS noibo,")
        _T("   ROUND(SUM(kho708), 0)     AS kho708,")
        _T("   ROUND(SUM(thanhtoan), 0)  AS thanhtoan")
        _T(" FROM")
        _T("   (SELECT mtl_qtydelivery*product_taxprice AS noibo,")
        _T("     CASE")
        _T("       WHEN mt_department_id IN ('708')")
        _T("       THEN mtl_qtydelivery   *product_taxprice")
        _T("       ELSE 0")
        _T("     END AS kho708,")
        _T("     0   AS thanhtoan,")
        _T("     mt_department_id                     AS deptid,")
        _T("     CAST ('I' AS NVARCHAR2(1))       AS resouces,")
        _T("     product_contract_id as contract_id ")  
        _T("   FROM m_transaction")
        _T("   LEFT JOIN m_transactionline")
        _T("   ON ( mt_transaction_id = mtl_transaction_id )")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON ( mtl_product_item_id = product_item_id )")
        _T("   WHERE mt_status          = 'A'")
        _T("   AND (mt_doctype IN('IMP', 'DRO', 'CRO') OR (mt_doctype = 'MOV' ")
        _T("AND mt_storage_id NOT IN (%s))) %s")
        _T("   UNION ALL")
        _T("   SELECT")
        _T("     CASE")
        _T("       WHEN NVL(po_saleperson_id, 'P') = 'I'")
        _T("       THEN pol_qtyimport*product_taxprice")
        _T("       ELSE 0")
        _T("     END AS noibo,")
        _T("     CASE")
        _T("       WHEN NVL(po_saleperson_id, 'P') = 'I'")
        _T("       AND po_partner_id    IN ('708')")
        _T("       THEN pol_qtyimport     *product_taxprice")
        _T("       ELSE 0")
        _T("     END AS kho708,")
        _T("     CASE")
        _T("       WHEN NVL(po_saleperson_id, 'P') = 'P'")
        _T("       THEN pol_qtyimport*product_taxprice")
        _T("       ELSE 0")
        _T("     END AS thanhtoan,")
        _T("     po_partner_id,")
        _T("     NVL(po_saleperson_id, 'P'),")
        _T("     po_contract_id as contract_id") 
        _T("   FROM purchase_order")
        _T("   LEFT JOIN purchase_orderline")
        _T("   ON ( po_purchase_order_id = pol_purchase_order_id )")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON ( product_item_id = pol_product_item_id )")
        _T("   WHERE po_status      = 'A' %s")
        _T("   ) tbl %s"),
        szStorages, szTransactionWhere, szPurchaseWhere, szWhere);
    _fmsg(_T("%s"), szSQL);

    return szSQL;
}

CString CPMSImportSheetList::GetQueryString3()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages,
        szCondition;

    szTransactionWhere.Format(
        _T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    szPurchaseWhere.Format(
        _T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);

    if (!m_szSupplierKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"),
                                        m_szSupplierKey);
        szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"),
                                     m_szSupplierKey);
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
        szTransactionWhere.AppendFormat(
            _T(" AND mt_storage_to_id IN (%s) AND mt_storage_id NOT IN (%s)"),
            szStorages, szStorages);
        szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"),
                                     szStorages);
    }

    if (!m_szItemGroupKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                        m_szItemGroupKey);
        szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                     m_szItemGroupKey);
    }

    szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                    pMF->GetModuleID());
    szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                 pMF->GetModuleID());

    if (m_nAll == 0)
        szWhere.Format(_T(" WHERE 1=1"));
    if (m_nInternal == 0)
        szWhere.Format(_T("WHERE resouces = 'I'"));
    if (m_nKho708 == 0)
        szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
    if (m_nPaid == 0)
        szWhere.Format(_T("WHERE resouces = 'P'"));
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and contract_id = '%s'", m_szContractKey);
    }

    szSQL.Format(_T(" SELECT ROUND(SUM(thuoc), 0) AS drug,")
                 _T("   ROUND(SUM(hoachat), 0)    AS chemicals,")
                 _T("   ROUND(SUM(bbg), 0)        AS cotton,")
                 _T("   ROUND(SUM(duoclieu), 0)   AS herb,")
                 _T("   ROUND(SUM(tpdd), 0)       AS compound,")
                 _T("   ROUND(SUM(ycu), 0)        AS instrument,")
                 _T("   ROUND(SUM(tpcn),0)       AS tpcn ")
                 _T(" FROM")
                 _T("   (SELECT")
                 _T("     CASE")
                 _T("       WHEN (instr(product_producttype, 'A11') > 0")
                 _T("       OR product_producttype IN ('A1400', 'A6000'))")
                 _T("       THEN mtl_qtydelivery * product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS thuoc,")
                 _T("     CASE")
                 _T("       WHEN instr(product_producttype, 'A12') > 0")
                 _T("       THEN mtl_qtydelivery * product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS hoachat,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1500'")
                 _T("       THEN mtl_qtydelivery * product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS bbg,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1302'")
                 _T("       THEN mtl_qtydelivery * product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS duoclieu,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1301'")
                 _T("       THEN mtl_qtydelivery * product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS tpdd,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1600'")
                 _T("       THEN mtl_qtydelivery * product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS ycu,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1700'")
                 _T("       THEN mtl_qtydelivery * product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS tpcn,")
                 _T("     mt_department_id           AS deptid,")
                 _T("     CAST ('I' AS NVARCHAR2(1)) AS resouces,")
                 _T("     product_contract_id as contract_id ")  
                 _T("   FROM m_transaction")
                 _T("   LEFT JOIN m_transactionline")
                 _T("   ON ( mt_transaction_id = mtl_transaction_id )")
                 _T("   LEFT JOIN m_productitem_view3")
                 _T("   ON (product_item_id = mtl_product_item_id)")
                 _T("   WHERE mt_status          = 'A'")
                 _T("   AND (mt_doctype         IN('IMP', 'DRO', 'CRO')")
                 _T("   OR (mt_doctype           = 'MOV'")
                 _T("   AND mt_storage_id NOT   IN (%s))) %s")
                 _T("   UNION ALL")
                 _T("   SELECT")
                 _T("     CASE")
                 _T("       WHEN (instr(product_producttype, 'A11') > 0")
                 _T("       OR product_producttype IN ('A1400', 'A6000'))")
                 _T("       THEN pol_qtyimport*product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS thuoc,")
                 _T("     CASE")
                 _T("       WHEN instr(product_producttype, 'A12') > 0")
                 _T("       THEN pol_qtyimport*product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS hoachat,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1500'")
                 _T("       THEN pol_qtyimport*product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS bbg,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1302'")
                 _T("       THEN pol_qtyimport*product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS duoclieu,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1301'")
                 _T("       THEN pol_qtyimport*product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS tpdd,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1600'")
                 _T("       THEN pol_qtyimport*product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS ycu,")
                 _T("     CASE")
                 _T("       WHEN product_producttype = 'A1700'")
                 _T("       THEN pol_qtyimport*product_taxprice")
                 _T("       ELSE 0")
                 _T("     END AS tpcn,")
                 _T("     po_partner_id,")
                 _T("     NVL(po_saleperson_id, 'P'),")
                 _T("     po_contract_id as contract_id")  
                 _T("   FROM purchase_order")
                 _T("   LEFT JOIN purchase_orderline")
                 _T("   ON ( po_purchase_order_id = pol_purchase_order_id )")
                 _T("   LEFT JOIN m_productitem_view3")
                 _T("   ON (product_item_id = pol_product_item_id)")
                 _T("   WHERE po_status      = 'A' %s")
                 _T("   ) tbl %s"),
                 szStorages, szTransactionWhere, szPurchaseWhere, szWhere);

    return szSQL;
}

CString CPMSImportSheetList::GetQueryString2()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CString szSQL, szWhere, szTransactionWhere, szPurchaseWhere, szStorages,
        szCondition;

    szTransactionWhere.Format(
        _T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    szPurchaseWhere.Format(
        _T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);

    if (!m_szSupplierKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND mt_partner_id = '%s'"),
                                        m_szSupplierKey);
        szPurchaseWhere.AppendFormat(_T(" AND po_partner_id = '%s'"),
                                     m_szSupplierKey);
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
        szTransactionWhere.AppendFormat(
            _T(" AND mt_storage_to_id IN (%s) AND mt_storage_id NOT IN (%s)"),
            szStorages, szStorages);
        szPurchaseWhere.AppendFormat(_T(" AND po_storage_id IN (%s)"),
                                     szStorages);
    }

    if (!m_szItemGroupKey.IsEmpty())
    {
        szTransactionWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                        m_szItemGroupKey);
        szPurchaseWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                                     m_szItemGroupKey);
    }

    szTransactionWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                    pMF->GetModuleID());
    szPurchaseWhere.AppendFormat(_T(" AND product_org_id = '%s'"),
                                 pMF->GetModuleID());

    if (m_bGroupByType)
        szCondition = _T(" product_groupid, product_groupname,");

    if (m_nAll == 0)
        szWhere.Format(_T(" WHERE 1=1"));
    if (m_nInternal == 0)
        szWhere.Format(_T("WHERE resouces = 'I'"));
    if (m_nKho708 == 0)
        szWhere.Format(_T("WHERE resouces = 'I' AND deptid = '708'"));
    if (m_nPaid == 0)
        szWhere.Format(_T("WHERE resouces = 'P'"));
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and contract_id = '%s'", m_szContractKey);
    }

    szSQL.Format(
        _T(" SELECT dept,")
        _T(" ROUND(SUM(ttlamt), 0) AS ttlamt,")
        _T(" ROUND(SUM(payment), 0) AS payment")
        _T(" FROM")
        _T(" (SELECT dept,")
        _T(" ttlamt,")
        _T(" CASE")
        _T(" WHEN payment = 'N'")
        _T(" THEN ttlamt")
        _T(" ELSE 0")
        _T(" END payment")
        _T(" FROM")
        _T(" (")
        _T("   SELECT mt_doctype                     AS doctype,")
        _T("     mt_orderno                           AS ordno,")
        _T("     CAST(0 AS NVARCHAR2(1))              AS invno,")
        _T("     mt_department_id                     AS deptid,")
        _T("     Get_departmentname(mt_department_id) AS dept,")
        _T("     TRUNC(mt_approveddate)               AS impdte,")
        _T("     product_groupid,")
        _T("     product_groupname,")
        _T("     mtl_qtydelivery*product_taxprice AS ttlamt,")
        _T("     CAST ('I' AS NVARCHAR2(1))       AS resouces,")
        _T("	 CAST ('Y' AS NVARCHAR2(1))		  AS payment, ")
        _T("     product_contract_id as contract_id ") 
        _T("   FROM m_transaction")
        _T("   LEFT JOIN m_transactionline")
        _T("   ON ( mt_transaction_id = mtl_transaction_id )")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON ( mtl_product_item_id = product_item_id )")
        _T("   WHERE mt_status          = 'A'")
        _T("   AND (mt_doctype IN('IMP', 'DRO', 'CRO') OR (mt_doctype = 'MOV' ")
        _T("AND mt_storage_id NOT IN (%s))) %s")
        _T("   UNION ALL")
        _T("   SELECT po_doctype,")
        _T("     po_orderno,")
        _T("     po_invoiceno,")
        _T("     po_partner_id,")
        _T("     Get_partnername(po_partner_id),")
        _T("     TRUNC(po_approveddate),")
        _T("     product_groupid,")
        _T("     product_groupname,")
        _T("     pol_qtyimport*product_taxprice,")
        _T("     NVL(po_saleperson_id, 'P'),")
        _T("	 po_payment,")
        _T("     po_contract_id as contract_id")  
        _T("   FROM purchase_order")
        _T("   LEFT JOIN purchase_orderline")
        _T("   ON ( po_purchase_order_id = pol_purchase_order_id )")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON ( product_item_id = pol_product_item_id )")
        _T("   WHERE po_status      = 'A' %s")
        _T("   ) %s")
        _T("   )")
        _T(" GROUP BY dept")
        _T(" ORDER BY dept"),
        szStorages, szTransactionWhere, szPurchaseWhere, szWhere);
    return szSQL;
}

void CPMSImportSheetList::OnContractSelectChange(int nOldItemSel,
                                                  int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSImportSheetList::OnContractSelendok() {}
/*void CPMSImportSheetList::OnContractSetfocus(){

}*/
/*void CPMSImportSheetList::OnContractKillfocus(){

}*/
long CPMSImportSheetList::OnContractLoadData()
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
/*void CPMSImportSheetList::OnContractAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */