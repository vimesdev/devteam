#include "PMSUnpaidOrderList.h"
#include "Excel.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "stdafx.h"

#include ".\pmssupplierpaymentlist.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMSUnpaidOrderList *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMSUnpaidOrderList *)pWnd)->OnToDateCheckValue();
}
static long _OnSupplierLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSUnpaidOrderList *)pWnd)->OnSupplierLoadData();
}
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    ((CPMSUnpaidOrderList *)pWnd)
        ->OnStorageSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnStorageSelendokFnc(CWnd *pWnd)
{
    ((CPMSUnpaidOrderList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSUnpaidOrderList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                        int nNewItemSel)
{
    ((CPMSUnpaidOrderList *)pWnd)
        ->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnItemGroupSelendokFnc(CWnd *pWnd)
{
    ((CPMSUnpaidOrderList *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSUnpaidOrderList *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    ((CPMSUnpaidOrderList *)pWnd)
        ->OnSourceSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSourceSelendokFnc(CWnd *pWnd)
{
    ((CPMSUnpaidOrderList *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSUnpaidOrderList *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnSourceAddNew();
}*/

static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                       int nNewItemSel)
{
    ((CPMSUnpaidOrderList *)pWnd)
        ->OnContractSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnContractSelendokFnc(CWnd *pWnd)
{
    ((CPMSUnpaidOrderList *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd)
{
    return ((CPMSUnpaidOrderList *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
    ((CPMSUnpaidOrderList *)pWnd)->OnContractAddNew();
}*/
static void _OnCountToDateSelectFnc(CWnd *pWnd)
{
    ((CPMSUnpaidOrderList *)pWnd)->OnCountToDateSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd)
{
    CPMSUnpaidOrderList *pVw = (CPMSUnpaidOrderList *)pWnd;
    pVw->OnPrintPreviewSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CPMSUnpaidOrderList *pVw = (CPMSUnpaidOrderList *)pWnd;
    pVw->OnExportSelect();
}
CPMSUnpaidOrderList::CPMSUnpaidOrderList(CWnd *pParent)
{

    m_nDlgWidth = 585;
    m_nDlgHeight = 359;
    SetDefaultValues();
}
CPMSUnpaidOrderList::~CPMSUnpaidOrderList() {}
void CPMSUnpaidOrderList::OnCreateComponents()
{
    m_wndGeneralDepartmentUsage.Create(this, _T("Unpaid Order List"), 5, 5, 575,
                                       180);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
    m_wndFromDate.Create(this, 105, 30, 290, 55);
    m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
    m_wndToDate.Create(this, 380, 30, 570, 55);
    m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 100, 85);
    m_wndSupplier.Create(this, 105, 60, 570, 85);
    m_wndStorageLabel.Create(this, _T("Storage"), 10, 90, 100, 115);
    m_wndStorage.SetCheckBox();
    m_wndStorage.Create(this, 105, 90, 570, 115);
    m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 120, 100, 145);
    m_wndItemGroup.Create(this, 105, 120, 290, 145);
    m_wndSourceLabel.Create(this, _T("Source"), 295, 120, 375, 145);
    m_wndSource.Create(this, 380, 120, 570, 145);
    m_wndContractLabel.Create(this, _T("Hợp đồng"), 10, 150, 100, 175);
    m_wndContract.Create(this, 105, 150, 290, 175);
    m_wndCountToDate.Create(this, _T("Count To Date"), 5, 185, 125, 210);
    m_wndPrintPreview.Create(this, _T("&Print Preview"), 390, 185, 490, 210);
    m_wndExport.Create(this, _T("&Export"), 495, 185, 575, 210);
    m_wndSource.EnableWindow(FALSE);
}
void CPMSUnpaidOrderList::OnInitializeComponents()
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

    m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
    m_wndItemGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

    m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
    m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

    m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
    m_wndContract.InsertColumn(2, _T("Diễn giải"), CFMT_TEXT, 250);
    m_wndContract.InsertColumn(3, _T("Ngày ký"), CFMT_TEXT, 80);
    m_wndContract.InsertColumn(4, _T("Số tiền"), CFMT_MONEY, 120);
    m_wndContract.InsertColumn(5, _T("Gói thầu"), CFMT_TEXT,
                               70); // Contract_package_uid
}
void CPMSUnpaidOrderList::OnSetWindowEvents()
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
    m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
    m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
    // m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
    // m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
    m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
    m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
    // m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
    m_wndCountToDate.SetEvent(WE_CLICK, _OnCountToDateSelectFnc);
    m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szFromDate += _T(" 00:00");
    m_szToDate += _T(" 23:59");
    UpdateData(false);
}
void CPMSUnpaidOrderList::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
    DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szStorageKey);
    DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
    DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
    DDX_Check(pDX, m_wndCountToDate.GetDlgCtrlID(), m_bCountToDate);
}
void CPMSUnpaidOrderList::SetDefaultValues()
{

    m_szFromDate.Empty();
    m_szToDate.Empty();
    m_szItemGroupKey.Empty();
    m_szSourceKey.Empty();
    m_szContractKey.Empty();
    m_szSupplierKey.Empty();
    m_szStorageKey.Empty();
    m_bCountToDate = FALSE;
}
int CPMSUnpaidOrderList::SetMode(int nMode)
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
/*void CPMSUnpaidOrderList::OnFromDateChange(){

} */
/*void CPMSUnpaidOrderList::OnFromDateSetfocus(){

} */
/*void CPMSUnpaidOrderList::OnFromDateKillfocus(){

} */
int CPMSUnpaidOrderList::OnFromDateCheckValue() { return 0; }
/*void CPMSUnpaidOrderList::OnToDateChange(){

} */
/*void CPMSUnpaidOrderList::OnToDateSetfocus(){

} */
/*void CPMSUnpaidOrderList::OnToDateKillfocus(){

} */
int CPMSUnpaidOrderList::OnToDateCheckValue() { return 0; }
long CPMSUnpaidOrderList::OnSupplierLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
    // 	CRecord rs(&pMF->m_db);
    // 	CString szSQL, szWhere;
    // 	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
    // 		szWhere.Format(_T("AND id = '%s'"), m_szSupplierKey);
    // 	}
    // 	m_wndStorage.DeleteAllItems();
    // 	int nCount = 0;
    // 	szSQL.Format(_T("SELECT adp_partner_id AS id, adp_name AS name FROM
    // ad_partner WHERE adp_org_id = 'PM' AND adp_partner_id NOT IN('KD', '708',
    // 'CHT', 'KDDV', 'ML', 'Q2', 'TK') %s ORDER BY id "), szWhere); 	nCount =
    // rs.ExecSQL(szSQL); 	while(!rs.IsEOF()){ 		m_wndSupplier.AddItems(
    // 			rs.GetValue(_T("id")),
    // 			rs.GetValue(_T("name")), NULL);
    // 		rs.MoveNext();
    // 	}
    // 	return nCount;
}
void CPMSUnpaidOrderList::OnStorageSelectChange(int nOldItemSel,
                                                int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSUnpaidOrderList::OnStorageSelendok() {}
long CPMSUnpaidOrderList::OnStorageLoadData()
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
/*void CPMSUnpaidOrderList::OnStorageAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
void CPMSUnpaidOrderList::OnItemGroupSelectChange(int nOldItemSel,
                                                  int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSUnpaidOrderList::OnItemGroupSelendok() {}
/*void CPMSUnpaidOrderList::OnItemGroupSetfocus(){

}*/
/*void CPMSUnpaidOrderList::OnItemGroupKillfocus(){

}*/
long CPMSUnpaidOrderList::OnItemGroupLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    // return pMF->LoadProductTypeList(&m_wndType, m_szTypeKey);
    CRecord rs(&pMF->m_db);
    CString szSQL;
    int nCount = 0;
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
/*void CPMSUnpaidOrderList::OnItemGroupAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
void CPMSUnpaidOrderList::OnSourceSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSUnpaidOrderList::OnSourceSelendok() {}
/*void CPMSUnpaidOrderList::OnSourceSetfocus(){

}*/
/*void CPMSUnpaidOrderList::OnSourceKillfocus(){

}*/
long CPMSUnpaidOrderList::OnSourceLoadData()
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
/*void CPMSUnpaidOrderList::OnSourceAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */

void CPMSUnpaidOrderList::OnContractSelectChange(int nOldItemSel,
                                                 int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMSUnpaidOrderList::OnContractSelendok() {}
/*void CPMSUnpaidOrderList::OnContractSetfocus(){

}*/
/*void CPMSUnpaidOrderList::OnContractKillfocus(){

}*/
long CPMSUnpaidOrderList::OnContractLoadData()
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
        szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s
    ORDER BY id "), szWhere nCount = rs.ExecSQL(szSQL); while(!rs.IsEOF()){
            m_wndContract.AddItems(
                rs.GetValue(_T("id")),
                rs.GetValue(_T("name")), NULL);
            rs.MoveNext();
        }
        return nCount;
    */
    return 0;
}
/*void CPMSUnpaidOrderList::OnContractAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */

void CPMSUnpaidOrderList::OnCountToDateSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(TRUE);
    if (m_bCountToDate)
        m_wndFromDate.EnableWindow(FALSE);
    else
        m_wndFromDate.EnableWindow(TRUE);
}
void CPMSUnpaidOrderList::OnPrintPreviewSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CGuiMenu menu(this);
    CString tmpStr;
    menu.CreatePopupMenu();
    tmpStr.Format(_T("Mẫu 1 tổng hợp"));
    menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 1 (ngang)"));
    menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Mẫu 2 chi tiết"));
    menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
    CRect rect;
    m_wndPrintPreview.GetWindowRect(&rect);
    int nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_RIGHTALIGN |
                                       TPM_BOTTOMALIGN | TPM_NONOTIFY,
                                   rect.right, rect.top, this);
    switch (nPos)
    {
    case 1:
        OnPrint1();
        break;
    case 2:
        OnPrint1(TRUE);
        break;
    case 3:
        OnPrint2();
        break;
    }
}
void CPMSUnpaidOrderList::OnPrint1(BOOL bLandscape)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CReport rpt;
    CString szSQL, tmpStr, szOrderID, szNewLine, szOldLine, szDate, szOldID,
        szNewID, szTemp, szField, szStorages, m_szPartnerId, szFileName,
        szFilePath;
    double nTmp = 0, nAmt = 0, nReAmt = 0;
    double nTotalAmt = 0, nGroupTotal = 0, nGroupTotal1 = 0, nGroupTotal2 = 0,
           nTotal = 0, nTotal1 = 0, nTotal2 = 0, nTtlTotal = 0;
    int nIdx = 1, nIdx2 = 1, nIndex = 0;
    CRecord rs(&pMF->m_db);
    CReportSection *rptHeader, *rptDetail;
    szFileName = _T("PM_BANGKEHANGMUACHUATRATIEN");
    if (bLandscape == TRUE)
    {
        szFileName += _T("_NGANG");
    }
    szFilePath.Format(_T("Reports/HMS/%s.RPT"), szFileName);
    if (!rpt.Init(szFilePath))
        return;

    rptHeader = rpt.GetReportHeader();
    rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("Department"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));
    if (m_bCountToDate == TRUE)
    {
        tmpStr.Format(_T("Tính đến ngày %s"), CDate::Convert(m_szToDate),
                      yyyymmdd, ddmmyyyy);
    }
    else
    {
        tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
    }

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
    if (!m_szSupplierKey.IsEmpty())
        rptHeader->SetValue(_T("Supplier"), m_wndSupplier.GetCurrent(1));
    else
        rptHeader->SetValue(_T("Supplier"), _T("Toàn bộ"));
    if (m_szFromDate.Left(10) != m_szToDate.Left(10))
        tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    else
        tmpStr.Format(_T("Ngày %s"),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
    rptHeader->SetValue(_T("ReportDate"), tmpStr);
    szSQL = GetQueryString1();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
        return;
    }
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnerid"), szNewID);
        rs.GetValue(_T("partnername"), szNewLine);
        if (szNewLine != szOldLine)
        {
            nIndex++;
            if (nGroupTotal > 0 || nGroupTotal1 > 0 || nGroupTotal2 > 0)
            {
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
                rptDetail->SetValue(_T("tongso"), _T("Cộng"));
                tmpStr.Format(_T("%.2f"), nGroupTotal);
                rptDetail->SetValue(_T("s4"), tmpStr);
                nTotal += nGroupTotal;
                nTtlTotal += nGroupTotal;
                tmpStr.Format(_T("%.2f"), nGroupTotal1);
                rptDetail->SetValue(_T("s5"), tmpStr);
                nTotal1 += nGroupTotal1;
                nTtlTotal -= nGroupTotal1;
                tmpStr.Format(_T("%.2f"), nGroupTotal2);
                rptDetail->SetValue(_T("s9"), tmpStr);
                nTotal2 += nGroupTotal2;
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
                rptDetail->SetValue(_T("tongso2"), _T("Nợ các tháng trước"));

                if (!m_bCountToDate)
                {
                    nReAmt = GetDebtAmount(szOldID, m_szFromDate);
                }

                m_szPartnerId += _T("','");
                m_szPartnerId += szOldID;
                tmpStr.Format(_T("%.2f"), nReAmt);
                rptDetail->SetValue(_T("t4"), tmpStr);
                nTotalAmt += nReAmt;
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
                rptDetail->SetValue(_T("tongso2"), _T("Tổng Cộng"));
                nTtlTotal += nReAmt;
                tmpStr.Format(_T("%.2f"), nTtlTotal);
                rptDetail->SetValue(_T("t4"), tmpStr);
                nGroupTotal = 0;
                nGroupTotal1 = 0;
                nGroupTotal2 = 0;
                nReAmt = 0;
                nTtlTotal = 0;
                nIdx2++;
            }
            szOldID = szNewID;
            szOldLine = szNewLine;
            rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
            tmpStr.Format(rptDetail->GetValue(_T("GroupName")), nIndex,
                          szNewLine);
            rptDetail->SetValue(_T("GroupName"), tmpStr);
            nIdx = 1;
        }
        rptDetail = rpt.AddDetail();
        rptDetail->SetValue(_T("1"), int2str(nIdx++));
        if (!szOrderID.IsEmpty())
            szOrderID += _T(", ");
        szOrderID += rs.GetValue(_T("id"));
        rs.GetValue(_T("invoicedate"), tmpStr);
        rptDetail->SetValue(_T("2"),
                            CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
        rptDetail->SetValue(_T("3"), rs.GetValue(_T("invoiceno")));
        rs.GetValue(_T("amount"), nAmt);
        nGroupTotal += nAmt;
        tmpStr.Format(_T("%.2f"), nAmt);
        rptDetail->SetValue(_T("4"), tmpStr);
        rs.GetValue(_T("rtamountUNC"), nAmt);
        nGroupTotal1 += nAmt;
        tmpStr.Format(_T("%.2f"), nAmt);
        rptDetail->SetValue(_T("5"), tmpStr);
        rs.GetValue(_T("rtamountCN"), nAmt);
        nGroupTotal2 += nAmt;
        tmpStr.Format(_T("%.2f"), nAmt);
        rptDetail->SetValue(_T("9"), tmpStr);
        rs.GetValue(_T("importmonth"), tmpStr);
        rptDetail->SetValue(_T("6"),
                            CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
        rptDetail->SetValue(_T("7"), rs.GetValue(_T("orderno")));
        rptDetail->SetValue(_T("5.1"), rs.GetValue(_T("contractpkg_id")));
        rptDetail->SetValue(_T("5.2"), rs.GetValue(_T("contract_no")));
        rptDetail->SetValue(_T("5.3"), rs.GetValue(_T("contract_sd")));
        rs.MoveNext();
    }
    if (nGroupTotal > 0 || nGroupTotal1 > 0 || nGroupTotal2 > 0)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("tongso"), _T("Cộng"));
        tmpStr.Format(_T("%.2f"), nGroupTotal);
        rptDetail->SetValue(_T("s4"), tmpStr);
        nTotal += nGroupTotal;
        nTtlTotal += nGroupTotal;
        tmpStr.Format(_T("%.2f"), nGroupTotal1);
        rptDetail->SetValue(_T("s5"), tmpStr);
        nTotal1 += nGroupTotal1;
        nTtlTotal -= nGroupTotal1;
        tmpStr.Format(_T("%.2f"), nGroupTotal2);
        rptDetail->SetValue(_T("s9"), tmpStr);
        nTotal2 += nGroupTotal2;
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptDetail->SetValue(_T("tongso2"), _T("Nợ các tháng trước"));

        if (!m_bCountToDate)
        {
            nReAmt = GetDebtAmount(szOldID, m_szFromDate);
        }

        tmpStr.Format(_T("%.2f"), nReAmt);
        rptDetail->SetValue(_T("t4"), tmpStr);
        nTotalAmt += nReAmt;
        m_szPartnerId += _T("','");
        m_szPartnerId += szOldID;
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptDetail->SetValue(_T("tongso2"), _T("Tổng Cộng"));
        nTtlTotal += nReAmt;
        tmpStr.Format(_T("%.2f"), nTtlTotal);
        rptDetail->SetValue(_T("t4"), tmpStr);
        nReAmt = 0;
        nTtlTotal = 0;
    }
    if (nIdx2 > 1)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("tongso"), _T("Cộng tháng này"));
        tmpStr.Format(_T("%.2f"), nTotal);
        nTtlTotal += nTotal;
        rptDetail->SetValue(_T("s4"), tmpStr);
        tmpStr.Format(_T("%.2f"), nTotal1);
        nTtlTotal -= nTotal1;
        rptDetail->SetValue(_T("s5"), tmpStr);
        tmpStr.Format(_T("%.2f"), nTotal2);
        rptDetail->SetValue(_T("s9"), tmpStr);
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptDetail->SetValue(_T("tongso2"), _T("Nợ các tháng trước"));
        tmpStr.Format(_T("%.2f"), nTotalAmt);
        nTtlTotal += nTotalAmt;
        rptDetail->SetValue(_T("t4"), tmpStr);
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptDetail->SetValue(_T("tongso2"), _T("Tổng Cộng"));
        tmpStr.Format(_T("%.2f"), nTtlTotal);
        rptDetail->SetValue(_T("t4"), tmpStr);
    }

    rptDetail = rpt.GetReportFooter();
    if (m_bCountToDate)
    {
        tmpStr.Format(
            _T("Tổng giá trị nhập kho chưa trả tiền tính đến ngày %s là:"),
            CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    }
    else
    {
        tmpStr.Format(_T("Tổng giá trị nhập kho chưa trả tiền từ ngày %s đến ")
                      _T("ngày %s là:"),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    }
    rptDetail->SetValue(_T("summary"), tmpStr);
    FormatCurrency(nTtlTotal, szTemp);
    szTemp += _T(" đồng.");
    rptDetail->SetValue(_T("s7"), szTemp);
    szSQL = GetQueryString2(m_szPartnerId);
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
    szDate = pMF->GetSysDate();
    tmpStr.Format(rptDetail->GetValue(_T("PrintDate")), szDate.Right(2),
                  szDate.Mid(5, 2), szDate.Left(4));
    rptDetail->SetValue(_T("PrintDate"), tmpStr);
    rptDetail->SetValue(_T("Username"),
                        pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}
void CPMSUnpaidOrderList::OnPrint2()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CReport rpt;
    CString szSQL, tmpStr, szOrderID, szNewLine, szOldLine, szDate, szOldID,
        szNewID, szTemp, szField, szStorages, m_szPartnerId, szNewType,
        szOldType;
    double nTmp = 0, nAmt = 0, nReAmt = 0;
    double nTotalAmt = 0, nGroupTotal = 0, nTotal = 0, nTtlTotal = 0,
           nTypeTotal = 0;
    int nIdx = 1, nIdx2 = 1, nIndex = 0;
    CRecord rs(&pMF->m_db);
    CReportSection *rptHeader, *rptDetail;
    if (!rpt.Init(_T("Reports/HMS/PM_BANGKEHANGMUACHUATRATIEN_CHITIET.RPT")))
        return;

    rptHeader = rpt.GetReportHeader();
    rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("Department"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));
    if (m_bCountToDate == TRUE)
    {
        tmpStr.Format(_T("Tính đến ngày %s"), CDate::Convert(m_szToDate),
                      yyyymmdd, ddmmyyyy);
    }
    else
    {
        tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
    }

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
    if (!m_szSupplierKey.IsEmpty())
        rptHeader->SetValue(_T("Supplier"), m_wndSupplier.GetCurrent(1));
    else
        rptHeader->SetValue(_T("Supplier"), _T("Toàn bộ"));
    if (m_szFromDate.Left(10) != m_szToDate.Left(10))
        tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    else
        tmpStr.Format(_T("Ngày %s"),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
    rptHeader->SetValue(_T("ReportDate"), tmpStr);
    szSQL = GetQueryString3();
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
        return;
    }
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnerid"), szNewID);
        rs.GetValue(_T("partnername"), szNewLine);
        if (szNewLine != szOldLine)
        {
            nIndex++;

            if (nTypeTotal > 0)
            {
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
                rptDetail->SetValue(_T("tongso"), _T("Cộng loại"));
                tmpStr.Format(_T("%.2f"), nTypeTotal);
                rptDetail->SetValue(_T("s11"), tmpStr);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
                szOldType = _T("");
            }

            if (nGroupTotal > 0)
            {
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
                rptDetail->SetValue(_T("tongso"), _T("Cộng loại"));
                tmpStr.Format(_T("%.2f"), nGroupTotal);
                rptDetail->SetValue(_T("s11"), tmpStr);
                nTotal += nGroupTotal;
                nTtlTotal += nGroupTotal;
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
                rptDetail->SetValue(_T("tongso2"), _T("Nợ các tháng trước"));

                if (!m_bCountToDate)
                {
                    nReAmt = GetDebtAmount(szOldID, m_szFromDate);
                }

                m_szPartnerId += _T("','");
                m_szPartnerId += szOldID;
                tmpStr.Format(_T("%.2f"), nReAmt);
                rptDetail->SetValue(_T("t11"), tmpStr);
                nTotalAmt += nReAmt;
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
                rptDetail->SetValue(_T("tongso2"), _T("Tổng Cộng"));
                nTtlTotal += nReAmt;
                tmpStr.Format(_T("%.2f"), nTtlTotal);
                rptDetail->SetValue(_T("t11"), tmpStr);
                nGroupTotal = 0;
                nReAmt = 0;
                nTtlTotal = 0;
                nIdx2++;
            }
            szOldID = szNewID;
            szOldLine = szNewLine;
            rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
            tmpStr.Format(rptDetail->GetValue(_T("GroupName")), nIndex,
                          szNewLine);
            rptDetail->SetValue(_T("GroupName"), tmpStr);
        }

        rs.GetValue(_T("ptype"), szNewType);
        if (szNewType != szOldType)
        {
            if (nTypeTotal > 0)
            {
                rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
                rptDetail->SetValue(_T("tongso"), _T("Cộng loại"));
                tmpStr.Format(_T("%.2f"), nTypeTotal);
                rptDetail->SetValue(_T("s11"), tmpStr);
                if (szOldType == _T("1"))
                    nGroupTotal += nTypeTotal;
                else
                    nGroupTotal -= nTypeTotal;
                nTypeTotal = 0;
            }
            szOldType = szNewType;
            rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
            if (szNewType == _T("1"))
            {
                tmpStr.Format(rptDetail->GetValue(_T("GroupName")), 1,
                              _T("Phiếu nhập"));
                rptDetail->SetValue(_T("GroupName"), tmpStr);
            }
            else
            {
                tmpStr.Format(rptDetail->GetValue(_T("GroupName")), 2,
                              _T("Trả lại"));
                rptDetail->SetValue(_T("GroupName"), tmpStr);
            }
            nIdx = 1;
        }

        rptDetail = rpt.AddDetail();
        rptDetail->SetValue(_T("1"), int2str(nIdx++));
        if (!szOrderID.IsEmpty())
            szOrderID += _T(", ");
        szOrderID += rs.GetValue(_T("id"));
        rs.GetValue(_T("invoicedate"), tmpStr);
        rptDetail->SetValue(_T("2"),
                            CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
        rptDetail->SetValue(_T("3"), rs.GetValue(_T("invoiceno")));
        rs.GetValue(_T("amount"), nAmt);
        tmpStr.Format(_T("%.2f"), nAmt);
        rptDetail->SetValue(_T("4"), tmpStr);
        rs.GetValue(_T("rtamountUNC"), nAmt);
        tmpStr.Format(_T("%.2f"), nAmt);
        rptDetail->SetValue(_T("5"), tmpStr);
        rs.GetValue(_T("rtamountCN"), nAmt);
        tmpStr.Format(_T("%.2f"), nAmt);
        rptDetail->SetValue(_T("9"), tmpStr);
        rs.GetValue(_T("importmonth"), tmpStr);
        rptDetail->SetValue(_T("6"),
                            CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
        rptDetail->SetValue(_T("7"), rs.GetValue(_T("orderno")));
        rptDetail->SetValue(_T("8"), _T(""));
        rptDetail->SetValue(_T("10"), rs.GetValue(_T("productname")));
        rs.GetValue(_T("pdamount"), nAmt);
        nTypeTotal += nAmt;
        tmpStr.Format(_T("%.2f"), nAmt);
        rptDetail->SetValue(_T("11"), tmpStr);
        rs.MoveNext();
    }
    if (nTypeTotal > 0)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("tongso"), _T("Cộng loại"));
        tmpStr.Format(_T("%.2f"), nTypeTotal);
        rptDetail->SetValue(_T("s11"), tmpStr);
        if (szOldType == _T("1"))
            nGroupTotal += nTypeTotal;
        else
            nGroupTotal -= nTypeTotal;
    }
    if (nGroupTotal > 0)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("tongso"), _T("Cộng"));
        tmpStr.Format(_T("%.2f"), nGroupTotal);
        rptDetail->SetValue(_T("s11"), tmpStr);
        nTotal += nGroupTotal;
        nTtlTotal += nGroupTotal;
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptDetail->SetValue(_T("tongso2"), _T("Nợ các tháng trước"));

        if (!m_bCountToDate)
        {
            nReAmt = GetDebtAmount(szOldID, m_szFromDate);
        }

        tmpStr.Format(_T("%.2f"), nReAmt);
        rptDetail->SetValue(_T("t11"), tmpStr);
        nTotalAmt += nReAmt;
        m_szPartnerId += _T("','");
        m_szPartnerId += szOldID;
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptDetail->SetValue(_T("tongso2"), _T("Tổng Cộng"));
        nTtlTotal += nReAmt;
        tmpStr.Format(_T("%.2f"), nTtlTotal);
        rptDetail->SetValue(_T("t11"), tmpStr);
        nTtlTotal = 0;
    }
    if (nIdx2 > 1)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("tongso"), _T("Cộng tháng này"));
        tmpStr.Format(_T("%.2f"), nTotal);
        nTtlTotal += nTotal;
        rptDetail->SetValue(_T("s11"), tmpStr);
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptDetail->SetValue(_T("tongso2"), _T("Nợ các tháng trước"));
        tmpStr.Format(_T("%.2f"), nTotalAmt);
        nTtlTotal += nTotalAmt;
        rptDetail->SetValue(_T("t11"), tmpStr);
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
        rptDetail->SetValue(_T("tongso2"), _T("Tổng Cộng"));
        tmpStr.Format(_T("%.2f"), nTtlTotal);
        rptDetail->SetValue(_T("t11"), tmpStr);
    }

    rptDetail = rpt.GetReportFooter();
    if (m_bCountToDate)
    {
        tmpStr.Format(
            _T("Tổng giá trị nhập kho chưa trả tiền tính đến ngày %s là:"),
            CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    }
    else
    {
        tmpStr.Format(_T("Tổng giá trị nhập kho chưa trả tiền từ ngày %s đến ")
                      _T("ngày %s là:"),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                      CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    }
    rptDetail->SetValue(_T("summary"), tmpStr);
    FormatCurrency(nTtlTotal, szTemp);
    szTemp += _T(" đồng.");
    rptDetail->SetValue(_T("s7"), szTemp);
    szSQL = GetQueryString2(m_szPartnerId);
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
    szDate = pMF->GetSysDate();
    tmpStr.Format(rptDetail->GetValue(_T("PrintDate")), szDate.Right(2),
                  szDate.Mid(5, 2), szDate.Left(4));
    rptDetail->SetValue(_T("PrintDate"), tmpStr);
    rptDetail->SetValue(_T("Username"),
                        pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}
void CPMSUnpaidOrderList::OnExportSelect()
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
    double nTmp = 0, nGrpAmt = 0;
    double nTotalAmt = 0;
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
    xls.SetCellText(nCol, nRow + 3, _T("DANH SÁCH HÀNG MUA CHƯA TRẢ TIỀN"),
                    FMT_TEXT | FMT_CENTER, true, 12);
    xls.SetCellMergedColumns(nCol, nRow + 4, 7);
    if (m_bCountToDate == TRUE)
    {
        tmpStr.Format(_T("Tính đến ngày %s"),
                      CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss,
                                         ddmmyyyy | hhmmss));
    }
    else
    {
        tmpStr.Format(_T("Từ %s Đến %s"),
                      CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss,
                                         ddmmyyyy | hhmmss),
                      CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss,
                                         ddmmyyyy | hhmmss));
    }

    xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
    // Col Head
    nRow = 5;
    xls.SetCellText(nCol, nRow, _T("STT"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
    xls.SetCellText(nCol + 1, nRow, _T("Ngày hóa đơn"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 2, nRow, _T("Số hóa đơn"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 3, nRow, _T("Số tiền"), FMT_TEXT | FMT_CENTER, true);
    xls.SetCellText(nCol + 4, nRow, _T("Ngày nhập"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 5, nRow, _T("Số phiếu nhập"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 6, nRow, _T("Ký nhận"), FMT_TEXT | FMT_CENTER, true);
    xls.SetCellText(nCol + 7, nRow, _T("Số hợp đồng"), FMT_TEXT | FMT_CENTER,
                    true);
    xls.SetCellText(nCol + 8, nRow, _T("Số quyết định"), FMT_TEXT | FMT_CENTER,
                    true);
    nRow = 6;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("partnername"), szNewLine);
        if (szNewLine != szOldLine)
        {
            if (nGrpAmt > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 5);
                xls.SetCellText(nCol, nRow, _T("Tổng cộng"),
                                FMT_TEXT | FMT_CENTER, true);
                tmpStr.Format(_T("%.2f"), nGrpAmt);
                xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);
                nRow++;
                nTotalAmt += nGrpAmt;
                nGrpAmt = 0;
            }
            xls.SetCellMergedColumns(nCol, nRow, 8);
            xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT | FMT_CENTER, true);
            szOldLine = szNewLine;
            nIdx = 1;
            nRow++;
            nIndex = 1;
        }
        xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
        rs.GetValue(_T("invoicedate"), tmpStr);
        xls.SetCellText(nCol + 1, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),
                        FMT_TEXT | FMT_CENTER);
        xls.SetCellText(nCol + 2, nRow, rs.GetValue(_T("invoiceno")), FMT_TEXT);
        rs.GetValue(_T("amount"), nTmp);
        nGrpAmt += nTmp;
        xls.SetCellText(nCol + 3, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("importmonth"), tmpStr);
        xls.SetCellText(nCol + 4, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy),
                        FMT_TEXT | FMT_CENTER);
        xls.SetCellText(nCol + 5, nRow, rs.GetValue(_T("orderno")), FMT_TEXT);
        xls.SetCellText(nCol + 7, nRow, rs.GetValue(_T("contract_no")),
                        FMT_TEXT);
        xls.SetCellText(nCol + 8, nRow, rs.GetValue(_T("contractpkg_id")),
                        FMT_TEXT);
        nRow++;
        rs.MoveNext();
    }
    if (nGrpAmt > 0)
    {
        xls.SetCellMergedColumns(nCol, nRow, 5);
        xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT, true);
        tmpStr.Format(_T("%.2f"), nGrpAmt);
        xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1);
        nRow++;
        nTotalAmt += nGrpAmt;
    }
    if (nTotalAmt > 0)
    {
        szTemp.Format(_T("%.2f"), nTotalAmt);
        tmpStr.Format(
            _T("Kết toán bảng này gồm %d công ty với tổng tiền là %s"), nIdx,
            szTemp);
        xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT);
    }
    EndWaitCursor();
    xls.Save(_T("Exports\\BANG KE THANH TOAN NO CAC CONG TY.xls"));
}

CString CPMSUnpaidOrderList::GetQueryString1()
{
    CString szSQL, szWhere, szWhere1, szStorages;
    if (!m_bCountToDate)
    {
        szWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', ")
                       _T("'YYYY-MM-DD HH24:MI:SS')")
                       _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
                       _T(" AND ((po_payment = 'N')")
                       _T(" OR (po_payment = 'Y'")
                       _T(" AND pp_acctdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                       _T("HH24:MI:SS')))"),
                       m_szFromDate, m_szToDate, m_szToDate);
        szWhere1.Format(
            _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
            _T("AND mt_payment = 'Y' AND mt_payment_method <> 'UNC' "),
            m_szFromDate, m_szToDate);
    }
    else
    {
        szWhere.Format(_T(" AND po_approveddate <= TO_TIMESTAMP('%s', ")
                       _T("'YYYY-MM-DD HH24:MI:SS')")
                       _T("  AND ((po_payment = 'N')")
                       _T(" OR (po_payment = 'Y'")
                       _T(" AND pp_acctdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                       _T("HH24:MI:SS')))"),
                       m_szToDate, m_szToDate);
        szWhere1.Format(_T("   AND ((mt_payment_date  <= TO_TIMESTAMP('%s', ")
                        _T("'YYYY-MM-DD HH24:MI:SS')")
                        _T("   AND mt_payment        = 'Y'")
                        _T("   AND mt_payment_method  <> 'UNC')")
                        _T("   OR (mt_approveddate <= TO_TIMESTAMP('%s', ")
                        _T("'YYYY-MM-DD HH24:MI:SS')")
                        _T("   AND ((mt_payment         <> 'Y'")
                        _T("   AND mt_payment_method   = 'UNC')")
                        _T("   OR mt_payment_date     IS NULL")
                        _T("   OR (mt_payment       = 'Y'")
                        _T("   AND mt_payment_method   = 'UNC'")
                        _T("   AND mt_payment_date > TO_TIMESTAMP('%s', ")
                        _T("'YYYY-MM-DD HH24:MI:SS')))))"),
                        m_szToDate, m_szToDate, m_szToDate);
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
        szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere1.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }

    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere1.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }
    // 	szSQL.Format(_T(" SELECT") \
// 				_T("   po_purchase_order_id as id,") \
// 				_T("   po_invoiceno                   AS invoiceno,") \
// 				_T("   trunc(po_invoicedate)                 AS invoicedate,") \
// 				_T("   po_orderno                     AS orderno,") \
// 				_T("   extract(month from po_approveddate)                AS importmonth,") \
// 				_T("   sum(pol_totalamount) AS amount,") \
// 				_T("   po_partner_id				  AS partnerid,") \
// 				_T("   Get_partnername(po_partner_id) AS partnername") \
// 				_T(" FROM   purchase_order") \
// 				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
// 				_T(" LEFT JOIN m_productitem_view3 ON (pol_product_item_id = product_item_id)") \
// 				_T(" WHERE  po_payment = 'N' AND po_status = 'A' AND product_org_id = 'PM' AND NVL(po_saleperson_id, 'P') = 'P' %s") \
// 				_T(" GROUP BY po_purchase_order_id, po_invoiceno, po_invoicedate, po_orderno, po_approveddate, po_partner_id") \
// 				_T(" ORDER  BY po_partner_id "), szWhere);

    szSQL.Format(
        _T(" SELECT invoiceno,")
        _T("        invoicedate,")
        _T("        orderno,")
        _T("        importmonth,")
        _T("        Round(amount, 0) AS amount,")
        _T("        Round(rtamount, 0) AS rtamount,")
        _T("        Round(rtamountUNC, 0) AS rtamountUNC,")
        _T("        Round(rtamountCN, 0) AS rtamountCN,")
        _T("        partnerid,")
        _T("        partnername,")
        _T("        contract_no,")
        _T("        contract_sd,")
        _T("        contractpkg_id")
        _T(" FROM   (SELECT    po_purchase_order_id AS id,")
        _T("                   po_invoiceno AS invoiceno,")
        _T("                   Trunc(po_invoicedate) AS invoicedate,")
        _T("                   po_orderno AS orderno,")
        _T("                   Trunc(po_approveddate) AS importmonth,")
        _T("                   SUM(pol_totalamount) AS amount,")
        _T("                   0 AS rtamount,")
        _T("                   0 AS rtamountUNC,")
        _T("                   0 AS rtamountCN,")
        _T("                   po_partner_id AS partnerid,")
        _T("                   Get_partnername(po_partner_id) AS partnername,")
        _T("                   get_contract_info(po_contract_id, 'NO') AS ")
        _T("contract_no,")
        _T("                   get_contract_info(po_contract_id, 'SD') AS ")
        _T("contract_sd,")
        _T("                   po_contractpkg_id AS contractpkg_id")
        _T("         FROM      purchase_order")
        _T("         LEFT JOIN purchase_orderline ON ( po_purchase_order_id = ")
        _T("pol_purchase_order_id )")
        _T("         LEFT JOIN purchase_payment ON ( pp_purchase_payment_id = ")
        _T("po_refpayment_id )")
        _T("         LEFT JOIN m_productitem_view3 ON ( pol_product_item_id = ")
        _T("product_item_id )")
        _T("         WHERE     po_status = 'A' AND product_org_id = 'PM' AND ")
        _T("Nvl(po_saleperson_id, 'P') = 'P'")
        _T("         %s")
        _T("         GROUP     BY ")
        _T("po_purchase_order_id,po_invoiceno,po_invoicedate,po_orderno,po_")
        _T("approveddate,")
        _T("         po_partner_id,po_contract_id,po_contractpkg_id")
        _T("         UNION ALL")
        _T("         SELECT    mt_transaction_id AS id,")
        _T("                   Cast(' ' AS NVARCHAR2(1)) AS invoiceno,")
        _T("                   Trunc(mt_approveddate) AS invoicedate,")
        _T("                   mt_orderno AS orderno,")
        _T("                   Trunc(mt_approveddate) AS importmonth,")
        _T("                   0 AS amount,")
        _T("                   SUM(mtl_ttlamount) AS rtamount,")
        _T("                   SUM(CASE WHEN Nvl(mt_payment_method, 'UNC') = ")
        _T("'UNC'  OR mt_payment = 'N' THEN")
        _T("                            mtl_ttlamount")
        _T("                       ELSE 0")
        _T("                       END) AS rtamountUNC,")
        _T("                   SUM(CASE WHEN Nvl(mt_payment_method, 'UNC') <> ")
        _T("'UNC' AND mt_payment = 'Y' THEN")
        _T("                            mtl_ttlamount")
        _T("                       ELSE 0")
        _T("                       END) AS rtamountCN,")
        _T("                   mt_partner_id AS partnerid,")
        _T("                   Get_partnername(mt_partner_id) AS partnername,")
        _T("                   NULL AS contract_no,")
        _T("                   NULL AS contract_sd,")
        _T("                   NULL AS contractpkg_id")
        _T("         FROM      m_transaction")
        _T("         LEFT JOIN m_transactionline ON( mt_transaction_id = ")
        _T("mtl_transaction_id )")
        _T("         LEFT JOIN m_productitem_view3 ON ( mtl_product_item_id = ")
        _T("product_item_id )")
        _T("         WHERE     mt_org_id = 'PM' AND mt_status = 'A' AND ")
        _T("mt_doctype = 'PRO' AND")
        _T("                   mt_partner_id NOT IN(")
        _T("                   'KD', '708', 'CHT' )")
        _T("         %s")
        _T("         GROUP     BY ")
        _T("mt_transaction_id,mt_approveddate,mt_orderno,mt_partner_id)")
        _T(" ORDER  BY partnerid,invoicedate "),
        szWhere, szWhere1);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMSUnpaidOrderList::GetQueryString2(CString m_szPartnerId)
{
    CString szSQL, szWhere, szWhere1, szStorages;
    if (!m_bCountToDate)
    {
        szWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', ")
                       _T("'YYYY-MM-DD HH24:MI:SS')")
                       _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
                       _T(" AND ((po_payment = 'N')")
                       _T(" OR (po_payment = 'Y'")
                       _T(" AND pp_acctdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                       _T("HH24:MI:SS')))"),
                       m_szFromDate, m_szToDate, m_szToDate);
        szWhere1.Format(
            _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
            _T("AND mt_payment = 'Y' AND mt_payment_method <> 'UNC' "),
            m_szFromDate, m_szToDate);
    }
    else
    {
        szWhere.Format(_T(" AND po_approveddate <= TO_TIMESTAMP('%s', ")
                       _T("'YYYY-MM-DD HH24:MI:SS')")
                       _T(" AND ((po_payment = 'N')")
                       _T(" OR (po_payment = 'Y'")
                       _T(" AND pp_acctdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                       _T("HH24:MI:SS')))"),
                       m_szToDate, m_szToDate);
        szWhere1.Format(_T("   AND ((mt_payment_date  <= TO_TIMESTAMP('%s', ")
                        _T("'YYYY-MM-DD HH24:MI:SS')")
                        _T("   AND mt_payment        = 'Y'")
                        _T("   AND mt_payment_method  <> 'UNC')")
                        _T("   OR (mt_approveddate <= TO_TIMESTAMP('%s', ")
                        _T("'YYYY-MM-DD HH24:MI:SS')")
                        _T("   AND ((mt_payment         <> 'Y'")
                        _T("   AND mt_payment_method   = 'UNC')")
                        _T("   OR mt_payment_date     IS NULL)))"),
                        m_szToDate, m_szToDate);
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
        szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere1.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }

    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere1.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }
    // 	szSQL.Format(_T(" SELECT SUM(thuoc) drug, ") \
// 				_T("        SUM(hoachat) chemicals, ") \
// 				_T("        SUM(bbg) cotton, ") \
// 				_T("        SUM(duoclieu) herb,") \
// 				_T("        SUM(tpdd) compound,") \
// 				_T("        SUM(ycu) instrument") \
// 				_T(" FROM   (SELECT CASE WHEN (instr(product_producttype, 'A11') > 0 OR product_producttype IN ('A1400', 'A6000'))") \
// 				_T("                     THEN pol_totalamount ") \
// 				_T("                ELSE 0 ") \
// 				_T("                END AS thuoc, ") \
// 				_T("                CASE WHEN instr(product_producttype, 'A12') > 0 THEN pol_totalamount ") \
// 				_T("                ELSE 0 ") \
// 				_T("                END AS hoachat, ") \
// 				_T("                CASE WHEN product_producttype = 'A1500' THEN pol_totalamount ") \
// 				_T("                ELSE 0 ") \
// 				_T("                END AS bbg, ") \
// 				_T("                CASE WHEN product_producttype = 'A1302' THEN pol_totalamount ") \
// 				_T("                ELSE 0 ") \
// 				_T("                END AS duoclieu, ") \
// 				_T("				CASE WHEN product_producttype = 'A1301' THEN pol_totalamount") \
// 				_T("				ELSE 0") \
// 				_T("				END AS tpdd,") \
// 				_T("				CASE WHEN product_producttype = 'A1600' THEN pol_totalamount") \
// 				_T("				ELSE 0") \
// 				_T("				END AS ycu") \
// 				_T("         FROM   purchase_orderline, ") \
// 				_T("                m_productitem_view3, ") \
// 				_T("                pms_drugtype, ") \
// 				_T("				purchase_order") \
// 				_T("         WHERE  pol_product_item_id = product_item_id ") \
// 				_T("            AND Instr(pmdt_desc, product_producttype) > 0 AND po_purchase_order_id = pol_purchase_order_id ") \
// 				_T("			AND po_payment = 'N' AND po_status = 'A' AND product_org_id = 'PM' AND NVL(po_saleperson_id, 'P') = 'P' %s)"), szWhere);

    szSQL.Format(_T(" SELECT ROUND(SUM(thuoc), 0) AS drug,")
                 _T("   ROUND(SUM(hoachat), 0) AS chemicals,")
                 _T("   ROUND(SUM(bbg), 0) AS cotton,")
                 _T("   ROUND(SUM(duoclieu), 0) AS herb,")
                 _T("   ROUND(SUM(tpdd), 0) AS compound,")
                 _T("   ROUND(SUM(ycu), 0) AS instrument")
                 _T(" FROM")
                 _T("   (SELECT")
                 _T("     CASE")
                 _T("       WHEN (instr(product, 'A11') > 0")
                 _T("       OR product                 IN ('A1400', 'A6000'))")
                 _T("       THEN amount")
                 _T("       ELSE 0")
                 _T("     END AS thuoc,")
                 _T("     CASE")
                 _T("       WHEN instr(product, 'A12') > 0")
                 _T("       THEN amount")
                 _T("       ELSE 0")
                 _T("     END AS hoachat,")
                 _T("     CASE")
                 _T("       WHEN product = 'A1500'")
                 _T("       THEN amount")
                 _T("       ELSE 0")
                 _T("     END AS bbg,")
                 _T("     CASE")
                 _T("       WHEN product = 'A1302'")
                 _T("       THEN amount")
                 _T("       ELSE 0")
                 _T("     END AS duoclieu,")
                 _T("     CASE")
                 _T("       WHEN product = 'A1301'")
                 _T("       THEN amount")
                 _T("       ELSE 0")
                 _T("     END AS tpdd,")
                 _T("     CASE")
                 _T("       WHEN product = 'A1600'")
                 _T("       THEN amount")
                 _T("       ELSE 0")
                 _T("     END AS ycu")
                 _T("   FROM")
                 _T("     (SELECT product,")
                 _T("       SUM(amount - reamount) AS amount")
                 _T("     FROM")
                 _T("       (SELECT product_producttype AS product,")
                 _T("         pol_totalamount           AS amount,")
                 _T("         0                         AS reamount")
                 _T("       FROM purchase_order")
                 _T("       LEFT JOIN purchase_orderline")
                 _T("       ON (po_purchase_order_id = pol_purchase_order_id)")
                 _T("	   LEFT JOIN purchase_payment")
                 _T("	   ON (pp_purchase_payment_id = po_refpayment_id)")
                 _T("       LEFT JOIN m_productitem_view3")
                 _T("       ON (product_item_id    = pol_product_item_id)")
                 _T("       WHERE po_status        = 'A'")
                 _T("       AND product_org_id     = 'PM'")
                 _T("       AND NVL(po_saleperson_id, 'P') = 'P' %s")
                 _T("       UNION ALL")
                 _T("       SELECT product_producttype,")
                 _T("         0,")
                 _T("         mtl_ttlamount")
                 _T("       FROM m_transaction")
                 _T("       LEFT JOIN m_transactionline")
                 _T("       ON (mt_transaction_id = mtl_transaction_id)")
                 _T("       LEFT JOIN m_productitem_view3")
                 _T("       ON (product_item_id    = mtl_product_item_id)")
                 _T("       WHERE mt_org_id          = 'PM' and mt_status='A' ")
                 _T("       AND mt_doctype         = 'PRO'")
                 _T("       AND mt_partner_id NOT IN('KD', '708', 'CHT')")
                 _T("       AND (NVL(mt_payment_method, 'UNC') = 'UNC' OR ")
                 _T("mt_payment = 'N')")
                 _T("       %s")
                 _T("       )")
                 _T("     GROUP BY product")
                 _T("     )")
                 _T("   )"),
                 szWhere, szWhere1);
    return szSQL;
}
CString CPMSUnpaidOrderList::GetQueryString3()
{
    CString szSQL, szWhere, szWhere1, szStorages;
    if (!m_bCountToDate)
    {
        szWhere.Format(_T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', ")
                       _T("'YYYY-MM-DD HH24:MI:SS')")
                       _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
                       _T(" AND ((po_payment = 'N')")
                       _T(" OR (po_payment = 'Y'")
                       _T(" AND pp_acctdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                       _T("HH24:MI:SS')))"),
                       m_szFromDate, m_szToDate, m_szToDate);
        szWhere1.Format(
            _T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
            _T("AND mt_payment = 'Y' AND mt_payment_method <> 'UNC' "),
            m_szFromDate, m_szToDate);
    }
    else
    {
        szWhere.Format(_T(" AND po_approveddate <= TO_TIMESTAMP('%s', ")
                       _T("'YYYY-MM-DD HH24:MI:SS')")
                       _T(" AND ((po_payment = 'N')")
                       _T(" OR (po_payment = 'Y'")
                       _T(" AND pp_acctdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                       _T("HH24:MI:SS')))"),
                       m_szToDate, m_szToDate);
        szWhere1.Format(_T("   AND ((mt_payment_date  <= TO_TIMESTAMP('%s', ")
                        _T("'YYYY-MM-DD HH24:MI:SS')")
                        _T("   AND mt_payment        = 'Y'")
                        _T("   AND mt_payment_method  <> 'UNC')")
                        _T("   OR (mt_approveddate <= TO_TIMESTAMP('%s', ")
                        _T("'YYYY-MM-DD HH24:MI:SS')")
                        _T("   AND ((mt_payment         <> 'Y'")
                        _T("   AND mt_payment_method   = 'UNC')")
                        _T("   OR mt_payment_date     IS NULL)))"),
                        m_szToDate, m_szToDate);
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
        szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere1.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere1.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }
    // 	szSQL.Format(_T(" SELECT") \
	// 				_T("   po_purchase_order_id as id,") \
	// 				_T("   po_invoiceno                   AS invoiceno,") \
	// 				_T("   trunc(po_invoicedate)                 AS invoicedate,") \
	// 				_T("   po_orderno                     AS orderno,") \
	// 				_T("   extract(month from po_approveddate)                AS importmonth,") \
	// 				_T("   sum(pol_totalamount) AS amount,") \
	// 				_T("   po_partner_id				  AS partnerid,") \
	// 				_T("   Get_partnername(po_partner_id) AS partnername") \
	// 				_T(" FROM   purchase_order") \
	// 				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
	// 				_T(" LEFT JOIN m_productitem_view3 ON (pol_product_item_id = product_item_id)") \
	// 				_T(" WHERE  po_payment = 'N' AND po_status = 'A' AND product_org_id = 'PM' AND NVL(po_saleperson_id, 'P') = 'P' %s") \
	// 				_T(" GROUP BY po_purchase_order_id, po_invoiceno, po_invoicedate, po_orderno, po_approveddate, po_partner_id") \
	// 				_T(" ORDER  BY po_partner_id "), szWhere);

    szSQL.Format(
        _T(" SELECT ptype, invoiceno,")
        _T("   invoicedate,")
        _T("   orderno,")
        _T("   importmonth,")
        _T("   ROUND(amount, 0)      AS amount,")
        _T("   ROUND(rtamount, 0)    AS rtamount,")
        _T("   ROUND(rtamountUNC, 0) AS rtamountUNC,")
        _T("   ROUND(rtamountCN, 0)  AS rtamountCN,")
        _T("   partnerid,")
        _T("   partnername,")
        _T("   productname,")
        _T("   ROUND(pdamount, 0)    AS pdamount")
        _T(" FROM")
        _T("   (SELECT 1                               AS ptype,")
        _T("     po_purchase_order_id                  AS id,")
        _T("     po_invoiceno                          AS invoiceno,")
        _T("     trunc(po_invoicedate)   AS invoicedate,")
        _T("     po_orderno                            AS orderno,")
        _T("     trunc(po_approveddate ) AS importmonth,")
        _T("     po_totalamount                        AS amount,")
        _T("     0                                     AS rtamount,")
        _T("     0                                     AS rtamountUNC,")
        _T("     0                                     AS rtamountCN,")
        _T("     po_partner_id                         AS partnerid,")
        _T("     Get_partnername(po_partner_id)        AS partnername,")
        _T("     product_name                          AS productname,")
        _T("     SUM(pol_totalamount)                  AS pdamount")
        _T("   FROM purchase_order")
        _T("   LEFT JOIN purchase_orderline")
        _T("   ON (po_purchase_order_id = pol_purchase_order_id)")
        _T("   LEFT JOIN purchase_payment")
        _T("   ON (pp_purchase_payment_id = po_refpayment_id)")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON (pol_product_item_id        = product_item_id)")
        _T("   WHERE po_status                = 'A'")
        _T("   AND product_org_id             = 'PM'")
        _T("   AND NVL(po_saleperson_id, 'P') = 'P' %s ")
        _T("   GROUP BY po_purchase_order_id,")
        _T("     po_invoiceno,")
        _T("     po_invoicedate,")
        _T("     po_orderno,")
        _T("     po_approveddate,")
        _T("     po_partner_id,")
        _T("     po_totalamount,")
        _T("     product_name")
        _T("   UNION ALL")
        _T("   SELECT 2                               AS ptype,")
        _T("     mt_transaction_id                    AS id,")
        _T("     CAST(' ' AS NVARCHAR2(1))            AS invoiceno,")
        _T("     trunc(mt_approveddate) AS invoicedate,")
        _T("     mt_orderno                           AS orderno,")
        _T("     trunc(mt_approveddate) AS importmonth,")
        _T("     0                                    AS amount,")
        _T("     mt_totalamount                       AS rtamount,")
        _T("     CASE")
        _T("       WHEN NVL(mt_payment_method, 'UNC') = 'UNC'")
        _T("       OR mt_payment                      = 'N'")
        _T("       THEN mt_totalamount")
        _T("       ELSE 0")
        _T("     END AS rtamountUNC,")
        _T("     CASE")
        _T("       WHEN NVL(mt_payment_method, 'UNC') <> 'UNC'")
        _T("       AND mt_payment                      = 'Y'")
        _T("       THEN mt_totalamount")
        _T("       ELSE 0")
        _T("     END                            AS rtamountCN,")
        _T("     mt_partner_id                  AS partnerid,")
        _T("     Get_partnername(mt_partner_id) AS partnername,")
        _T("     product_name                   AS productname,")
        _T("     SUM(mtl_ttlamount)             AS pdamount")
        _T("   FROM m_transaction")
        _T("   LEFT JOIN m_transactionline")
        _T("   ON(mt_transaction_id = mtl_transaction_id)")
        _T("   LEFT JOIN m_productitem_view3")
        _T("   ON (mtl_product_item_id = product_item_id)")
        _T("   WHERE mt_org_id         = 'PM'")
        _T("   AND mt_doctype          = 'PRO' AND mt_status='A' ")
        _T("   AND mt_partner_id NOT  IN('KD', '708', 'CHT') %s ")
        _T("   AND (NVL(mt_payment_method, 'UNC') = 'UNC' OR mt_payment = 'N')")
        _T("   GROUP BY mt_transaction_id,")
        _T("     mt_approveddate,")
        _T("     mt_orderno,")
        _T("     mt_partner_id,")
        _T("     mt_totalamount,")
        _T("     mt_payment_method,")
        _T("     mt_payment,")
        _T("     product_name")
        _T("   )")
        _T(" ORDER BY partnerid, ptype,")
        _T("   invoicedate"),
        szWhere, szWhere1);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

BEGIN_MESSAGE_MAP(CPMSUnpaidOrderList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSUnpaidOrderList::OnSetFocus(CWnd *pOldWnd)
{
    CGuiView::OnSetFocus(pOldWnd);

    // TODO: Add your message handler code here
    m_wndFromDate.SetFocus();
}

float CPMSUnpaidOrderList::GetDebtAmount(CString szPartnerID, CString szDate)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere, szWhere1, tmpStr, szStorages;
    float nTtlAmt = 0;
    szWhere.Format(
        _T(" AND po_payment = 'N' AND po_approveddate < TO_TIMESTAMP('%s', ")
        _T("'YYYY-MM-DD HH24:MI:SS') AND po_partner_id = '%s'"),
        szDate, szPartnerID);
    szWhere1.Format(_T(" AND mt_payment_date <= TO_TIMESTAMP('%s', ")
                    _T("'YYYY-MM-DD HH24:MI:SS') AND mt_payment = 'Y' AND ")
                    _T("mt_payment_method <> 'UNC' AND mt_partner_id = '%s'"),
                    szDate, szPartnerID);
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
        szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);
    }
    if (!m_szItemGroupKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND product_groupid = '%s'"),
                             m_szItemGroupKey);
        szWhere1.AppendFormat(_T(" AND product_groupid = '%s'"),
                              m_szItemGroupKey);
    }
    // 	szSQL.Format(_T("SELECT sum(pol_totalamount) ttlamt ") \
// 		_T(" FROM purchase_order ") \
// 		_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id) ") \
// 		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = pol_product_item_id) ") \
// 		_T(" WHERE po_status = 'A' AND po_payment = 'N' AND product_org_id = 'PM' AND NVL(po_saleperson_id, 'P') = 'P' %s"), szWhere);

    szSQL.Format(_T(" SELECT SUM(ttlamt - ttlreamt) AS ttlamt")
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
                 _T("       WHERE mt_org_id          = 'PM' AND mt_status='A' ")
                 _T("       AND mt_doctype         = 'PRO'")
                 _T("       AND mt_partner_id NOT IN('KD', '708', 'CHT')")
                 _T("       %s)"),
                 szWhere, szWhere1);

    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
        rs.GetValue(_T("ttlamt"), nTtlAmt);
    return nTtlAmt;
}