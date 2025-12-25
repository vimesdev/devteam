#include "PMLiabilitiesTrack.h"
#include "Excel.h"
#include "MainFrame_E10.h"
#include "stdafx.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMLiabilitiesTrack *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPMLiabilitiesTrack *)pWnd)->OnToDateCheckValue();
}
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                       int nNewItemSel)
{
    ((CPMLiabilitiesTrack *)pWnd)
        ->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSupplierSelendokFnc(CWnd *pWnd)
{
    ((CPMLiabilitiesTrack *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd)
{
    return ((CPMLiabilitiesTrack *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnSupplierAddNew();
}*/
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                    int nNewItemSel)
{
    ((CPMLiabilitiesTrack *)pWnd)
        ->OnStockSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnStockSelendokFnc(CWnd *pWnd)
{
    ((CPMLiabilitiesTrack *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd)
{
    return ((CPMLiabilitiesTrack *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
    ((CPMLiabilitiesTrack *)pWnd)->OnStockAddNew();
}*/

static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMLiabilitiesTrack* )pWnd)->OnContractSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractSelendokFnc(CWnd *pWnd){
	((CPMLiabilitiesTrack *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
	((CPMLiabilitiesTrack *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
	((CPMLiabilitiesTrack *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd){
	return ((CPMLiabilitiesTrack *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
	((CPMLiabilitiesTrack *)pWnd)->OnContractAddNew();
}*/
static void _OnGeneralReportsSelectFnc(CWnd *pWnd)
{
    ((CPMLiabilitiesTrack *)pWnd)->OnGeneralReportsSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd)
{
    CPMLiabilitiesTrack *pVw = (CPMLiabilitiesTrack *)pWnd;
    pVw->OnPrintPreviewSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CPMLiabilitiesTrack *pVw = (CPMLiabilitiesTrack *)pWnd;
    pVw->OnExportSelect();
}
CPMLiabilitiesTrack::CPMLiabilitiesTrack(CWnd *pParent)
{

    m_nDlgWidth = 1029;
    m_nDlgHeight = 773;
    SetDefaultValues();
}
CPMLiabilitiesTrack::~CPMLiabilitiesTrack() {}
void CPMLiabilitiesTrack::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this,400, 30, 570, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 110, 85);
	m_wndSupplier.Create(this,115, 60, 570, 85); 
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 150);
    m_wndStock.SetCheckBox();
	m_wndStockLabel.Create(this, _T("Stock"), 10, 90, 110, 115);
	m_wndStock.Create(this,115, 90, 570, 115); 
	m_wndContractLabel.Create(this, _T("Hợp đồng"), 10, 120, 110, 145);
	m_wndContract.Create(this,115, 120, 290, 145); 
	m_wndGeneralReports.Create(this, _T("General Reports"), 10, 155, 150, 180);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 385, 155, 495, 180);
	m_wndExport.Create(this, _T("&Export"), 500, 155, 575, 180);

}
void CPMLiabilitiesTrack::OnInitializeComponents()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();

    //	m_wndSupplier.SetCheckValue(true);
    m_wndSupplier.LimitText(1024);
    //	m_wndStock.SetCheckValue(true);
    m_wndStock.LimitText(1024);
	m_wndContract.SetCheckValue(true);
	m_wndContract.LimitText(35);

    m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
    m_wndSupplier.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

    m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 100);
    m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
    
    m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
    m_wndContract.InsertColumn(2, _T("Diễn giải"), CFMT_TEXT, 250);
    m_wndContract.InsertColumn(3, _T("Ngày ký"), CFMT_TEXT, 80);
    m_wndContract.InsertColumn(4, _T("Số tiền"), CFMT_MONEY, 120);
    m_wndContract.InsertColumn(5, _T("Gói thầu"), CFMT_TEXT,
                               70); // Contract_package_uid
}

void CPMLiabilitiesTrack::OnSetWindowEvents()
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
    m_wndGeneralReports.SetEvent(WE_CLICK, _OnGeneralReportsSelectFnc);
	m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
	//m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
	//m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
	m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
	m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
	//m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
    m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szFromDate += _T(" 00:00");
    m_szToDate += _T(" 23:59");
    UpdateData(false);
}
void CPMLiabilitiesTrack::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
    DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
    DDX_Check(pDX, m_wndGeneralReports.GetDlgCtrlID(), m_bGeneralReports);
}
void CPMLiabilitiesTrack::SetDefaultValues()
{
    m_szFromDate.Empty();
    m_szToDate.Empty();
    m_szSupplierKey.Empty();
    m_szStockKey.Empty();
	m_szContractKey.Empty();
    m_bGeneralReports = FALSE;
}

int CPMLiabilitiesTrack::SetMode(int nMode)
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

/*void CPMLiabilitiesTrack::OnFromDateChange(){

} */
/*void CPMLiabilitiesTrack::OnFromDateSetfocus(){

} */
/*void CPMLiabilitiesTrack::OnFromDateKillfocus(){

} */
int CPMLiabilitiesTrack::OnFromDateCheckValue() { return 0; }

/*void CPMLiabilitiesTrack::OnToDateChange(){

} */
/*void CPMLiabilitiesTrack::OnToDateSetfocus(){

} */
/*void CPMLiabilitiesTrack::OnToDateKillfocus(){

} */
int CPMLiabilitiesTrack::OnToDateCheckValue() { return 0; }

void CPMLiabilitiesTrack::OnSupplierSelectChange(int nOldItemSel,
                                                 int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMLiabilitiesTrack::OnSupplierSelendok() {}

/*void CPMLiabilitiesTrack::OnSupplierSetfocus(){

}*/
/*void CPMLiabilitiesTrack::OnSupplierKillfocus(){

}*/
long CPMLiabilitiesTrack::OnSupplierLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
/*void CPMLiabilitiesTrack::OnSupplierAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CPMLiabilitiesTrack::OnStockSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMLiabilitiesTrack::OnStockSelendok() {}
/*void CPMLiabilitiesTrack::OnStockSetfocus(){

}*/
/*void CPMLiabilitiesTrack::OnStockKillfocus(){

}*/
long CPMLiabilitiesTrack::OnStockLoadData()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
}
/*void CPMLiabilitiesTrack::OnStockAddNew(){
    CMainFrame_E10 *pMF = (CMainFrame*) AfxGetMainWnd();

} */

void CPMLiabilitiesTrack::OnContractSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMLiabilitiesTrack::OnContractSelendok(){
	 
}
/*void CPMLiabilitiesTrack::OnContractSetfocus(){
	
}*/
/*void CPMLiabilitiesTrack::OnContractKillfocus(){
	
}*/
long CPMLiabilitiesTrack::OnContractLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContract.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMLiabilitiesTrack::OnContractAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CPMLiabilitiesTrack::OnGeneralReportsSelect()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
}
void CPMLiabilitiesTrack::OnPrintPreviewSelect()
{
    UpdateData(TRUE);
    if (!m_bGeneralReports)
        OnPrint();
    else
        OnPrint1();
}
void CPMLiabilitiesTrack::OnPrint()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL,
                   *rptFooter = NULL, *pRptGroupByDate = NULL;
    double nTmp = 0, nAmt = 0;
    double nFirst_period = 0, nLast_period = 0, nLast_period2 = 0,
           nGroupByDateTCD = 0, nGroupByDateNS = 0;
    int nIdx = 1, nIdx2 = 1;
    CString szSQL, tmpStr, tmpStr2, tmpStr3, szDate, szPos, szStorages,
        szOldGroup, szNewGroup, szOldID, szNewID, m_szPartnerId, szNewAcctDate,
        szOldAcctDate;
    double nTotal[5], nTotal2[5];
    for (int i = 0; i < 5; i++)
    {
        nTotal[i] = 0;
        nTotal2[i] = 0;
    }
    if (!rpt.Init(_T("Reports\\HMS\\PM_BANGKETHEODOICONGNOPHAITRA.RPT")))
        return;
    szSQL = GetQueryString_FP();
    rs.ExecSQL(szSQL);
    rptHeader = rpt.GetReportHeader();

    rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("Department"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));
    tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
    rptHeader->SetValue(_T("ReportDate"), tmpStr);
    tmpStr = _T("T\x1EA5t \x63\x1EA3");
    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(1);
        }
    }
    if (!szStorages.IsEmpty())
        rptHeader->SetValue(_T("StockItems"), szStorages);
    else
        rptHeader->SetValue(_T("StockItems"), tmpStr);
    if (!m_szSupplierKey.IsEmpty())
        rptHeader->SetValue(_T("Company"), m_wndSupplier.GetCurrent(1));
    else
        rptHeader->SetValue(_T("Company"), tmpStr);

    rs.GetValue(_T("ttlamt"), tmpStr3);
    nFirst_period = str2double(tmpStr3);
    if (m_szSupplierKey.IsEmpty())
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
        tmpStr.Format(rptGroup->GetValue(_T("GroupName")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
        rptGroup->SetValue(_T("GroupName"), tmpStr);
        rptGroup->SetValue(_T("First_period"), tmpStr3);
    }

    szSQL = GetQueryString_Main();
    rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        // Group Seperation
        rs.GetValue(_T("paid_date"), szNewAcctDate);
        rs.GetValue(_T("partnerid"), szNewID);
        rs.GetValue(_T("partnername"), szNewGroup);
        if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
        {
            if (rptGroup)
            {
                tmpStr.Format(rptGroup->GetValue(_T("GroupName2")),
                              CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
                rptGroup->SetValue(_T("GroupName2"), tmpStr);
                nAmt = GetDebtAmount(szOldID, m_szFromDate);
                m_szPartnerId += _T("','");
                m_szPartnerId += szOldID;
                tmpStr.Format(_T("%.2f"), nAmt);
                rptGroup->SetValue(_T("First_period2"), tmpStr);

                if (nTotal[1] > 0 || nTotal[2] > 0 || nTotal[3] > 0 ||
                    nTotal[4] > 0)
                {
                    rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
                    tmpStr.Format(_T("%f"), nTotal[1]);
                    rptGroup->SetValue(_T("s6"), tmpStr);
                    tmpStr.Format(_T("%f"), nTotal[2]);
                    rptGroup->SetValue(_T("s7"), tmpStr);
                    tmpStr.Format(_T("%f"), nTotal[3]);
                    rptGroup->SetValue(_T("s8"), tmpStr);
                    tmpStr.Format(_T("%f"), nTotal[4]);
                    rptGroup->SetValue(_T("s10"), tmpStr);
                    nLast_period2 =
                        nAmt + nTotal[1] - nTotal[2] - nTotal[3] - nTotal[4];
                    tmpStr.Format(_T("%f"), nLast_period2);
                    rptGroup->SetValue(_T("t10"), tmpStr);
                    nTotal2[1] += nTotal[1];
                    nTotal2[2] += nTotal[2];
                    nTotal2[3] += nTotal[3];
                    nTotal2[4] += nTotal[4];
                    nTotal[1] = 0;
                    nTotal[2] = 0;
                    nTotal[3] = 0;
                    nTotal[4] = 0;
                    nLast_period2 = 0;
                    nIdx2++;
                }
            }

            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
            rptGroup->SetValue(_T("GroupName"), szNewGroup);
            nIdx = 1;
            szOldID = szNewID;
            szOldGroup = szNewGroup;
            szOldAcctDate.Empty();
        }
        if (szNewAcctDate != szOldAcctDate)
        {
            if (nGroupByDateTCD > 0 || nGroupByDateNS > 0)
            {
                pRptGroupByDate->SetValue(_T("s7_2"),
                                          double2str(nGroupByDateTCD));
                pRptGroupByDate->SetValue(_T("s8_2"),
                                          double2str(nGroupByDateNS));
                nGroupByDateTCD = 0;
                nGroupByDateNS = 0;
            }
            pRptGroupByDate = rpt.AddDetail(rpt.GetGroupHeader(2));
            if (pRptGroupByDate)
                pRptGroupByDate->SetValue(
                    _T("s3"),
                    CDate::Convert(szNewAcctDate, yyyymmdd, ddmmyyyy));
            szOldAcctDate = szNewAcctDate;
        }
        rptDetail = rpt.AddDetail();
        if (rptDetail)
        {
            rptDetail->SetValue(_T("1"), int2str(nIdx++));
            rs.GetValue(_T("import_date"), tmpStr);
            rptDetail->SetValue(_T("2"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rs.GetValue(_T("paid_date"), tmpStr);
            rptDetail->SetValue(_T("3"),
                                CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("order_no")));
            rptDetail->SetValue(_T("5"), rs.GetValue(_T("invoice_no")));
            rs.GetValue(_T("import_amount"), nTmp);
            nTotal[1] += nTmp;
            rptDetail->SetValue(_T("5.1"), rs.GetValue(_T("contractpkg_id")));
            rptDetail->SetValue(_T("5.2"), rs.GetValue(_T("contract_no")));
            rptDetail->SetValue(_T("5.3"), rs.GetValue(_T("contract_sd")));
            rptDetail->SetValue(_T("6"), double2str(nTmp));
            rs.GetValue(_T("paid_amountTCD"), nTmp);
            nTotal[2] += nTmp;
            nGroupByDateTCD += nTmp;
            rptDetail->SetValue(_T("7"), double2str(nTmp));
            rs.GetValue(_T("paid_amountNS"), nTmp);
            nTotal[3] += nTmp;
            nGroupByDateNS += nTmp;
            rptDetail->SetValue(_T("8"), double2str(nTmp));
            rptDetail->SetValue(_T("9"), rs.GetValue(_T("pmethod")));
            rs.GetValue(_T("return_amount"), nTmp);
            nTotal[4] += nTmp;
            rptDetail->SetValue(_T("10"), double2str(nTmp));
        }
        rs.MoveNext();
    }

    if (nGroupByDateTCD > 0 || nGroupByDateNS > 0)
    {
        pRptGroupByDate->SetValue(_T("s7_2"), double2str(nGroupByDateTCD));
        pRptGroupByDate->SetValue(_T("s8_2"), double2str(nGroupByDateNS));
    }

    if (rptGroup)
    {
        tmpStr.Format(rptGroup->GetValue(_T("GroupName2")),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
        rptGroup->SetValue(_T("GroupName2"), tmpStr);
        nAmt = GetDebtAmount(szOldID, m_szFromDate);
        m_szPartnerId += _T("','");
        m_szPartnerId += szOldID;
        tmpStr.Format(_T("%.2f"), nAmt);
        rptGroup->SetValue(_T("First_period2"), tmpStr);

        if (nTotal[1] > 0 || nTotal[2] > 0 || nTotal[3] > 0 || nTotal[4] > 0)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
            tmpStr.Format(_T("%f"), nTotal[1]);
            rptGroup->SetValue(_T("s6"), tmpStr);
            tmpStr.Format(_T("%f"), nTotal[2]);
            rptGroup->SetValue(_T("s7"), tmpStr);
            tmpStr.Format(_T("%f"), nTotal[3]);
            rptGroup->SetValue(_T("s8"), tmpStr);
            tmpStr.Format(_T("%f"), nTotal[4]);
            rptGroup->SetValue(_T("s10"), tmpStr);
            nLast_period2 =
                nAmt + nTotal[1] - nTotal[2] - nTotal[3] - nTotal[4];
            tmpStr.Format(_T("%f"), nLast_period2);
            rptGroup->SetValue(_T("t10"), tmpStr);
            nTotal2[1] += nTotal[1];
            nTotal2[2] += nTotal[2];
            nTotal2[3] += nTotal[3];
            nTotal2[4] += nTotal[4];
        }
    }

    if (nIdx2 > 1)
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
        tmpStr.Format(_T("%f"), nTotal2[1]);
        rptGroup->SetValue(_T("s6"), tmpStr);
        tmpStr.Format(_T("%f"), nTotal2[2]);
        rptGroup->SetValue(_T("s7"), tmpStr);
        tmpStr.Format(_T("%f"), nTotal2[3]);
        rptGroup->SetValue(_T("s8"), tmpStr);
        tmpStr.Format(_T("%f"), nTotal2[4]);
        rptGroup->SetValue(_T("s10"), tmpStr);
        nLast_period =
            nFirst_period + nTotal2[1] - nTotal2[2] - nTotal2[3] - nTotal2[4];
        tmpStr.Format(_T("%f"), nLast_period);
        rptGroup->SetValue(_T("t10"), tmpStr);
    }
    rptFooter = rpt.GetReportFooter();
    if (nIdx2 > 1)
        FormatCurrency(nLast_period, tmpStr2);
    else
        FormatCurrency(nLast_period2, tmpStr2);
    tmpStr.Format(rptFooter->GetValue(_T("Summary")),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy), tmpStr2);
    rptFooter->SetValue(_T("Summary"), tmpStr);
    szDate = pMF->GetSysDate();
    tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szDate.Right(2),
                  szDate.Mid(5, 2), szDate.Left(4));
    rptFooter->SetValue(_T("PrintDate"), tmpStr);
    rpt.GetReportFooter()->SetValue(_T("Username"),
                                    pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}

void CPMLiabilitiesTrack::SetGroupbyDateHeader(CReportSection *pMarkSection,
                                               CString pNewAcctDate)
{
}

void CPMLiabilitiesTrack::SetGroupbyDateFooter(CReportSection *pRptSection,
                                               double &pGroupbyDate)
{
    if (pGroupbyDate > 0)
        pRptSection->SetValue(_T("s6_2"), ToString(pGroupbyDate));
    pGroupbyDate = 0;
}

void CPMLiabilitiesTrack::OnPrint1()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    CReport rpt;
    CReportSection *rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL,
                   *rptFooter = NULL;
    double nTmp = 0;
    int nIdx = 1;
    CString szSQL, tmpStr, szDate, szStorages;
    double nTotal[7];
    for (int i = 0; i < 7; i++)
    {
        nTotal[i] = 0;
    }
    if (!rpt.Init(_T("Reports\\HMS\\PM_BANGKETONGHOPTHEODOICONGNOPHAITRA.RPT")))
        return;
    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);
    rptHeader = rpt.GetReportHeader();

    rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("Department"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));
    tmpStr.Format(rptHeader->GetValue(_T("ReportDate")),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
    rptHeader->SetValue(_T("ReportDate"), tmpStr);
    tmpStr = _T("T\x1EA5t \x63\x1EA3");
    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(1);
        }
    }
    if (!szStorages.IsEmpty())
        rptHeader->SetValue(_T("StockItems"), szStorages);
    else
        rptHeader->SetValue(_T("StockItems"), tmpStr);
    if (!m_szSupplierKey.IsEmpty())
        rptHeader->SetValue(_T("Company"), m_wndSupplier.GetCurrent(1));
    else
        rptHeader->SetValue(_T("Company"), tmpStr);

    while (!rs.IsEOF())
    {
        // Group Seperation

        rptDetail = rpt.AddDetail();
        if (rptDetail)
        {
            rptDetail->SetValue(_T("1"), int2str(nIdx++));
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
            rs.GetValue(_T("ttlamt"), nTmp);
            nTotal[1] += nTmp;
            FormatCurrency(nTmp, tmpStr);
            rptDetail->SetValue(_T("3"), tmpStr);
            rs.GetValue(_T("import_amount"), nTmp);
            nTotal[2] += nTmp;
            FormatCurrency(nTmp, tmpStr);
            rptDetail->SetValue(_T("4"), tmpStr);
            rs.GetValue(_T("total"), nTmp);
            nTotal[3] += nTmp;
            FormatCurrency(nTmp, tmpStr);
            rptDetail->SetValue(_T("5"), tmpStr);
            rs.GetValue(_T("paid_amount"), nTmp);
            nTotal[4] += nTmp;
            FormatCurrency(nTmp, tmpStr);
            rptDetail->SetValue(_T("6"), tmpStr);
            rs.GetValue(_T("return_amount"), nTmp);
            nTotal[5] += nTmp;
            FormatCurrency(nTmp, tmpStr);
            rptDetail->SetValue(_T("7"), tmpStr);
            rs.GetValue(_T("total2"), nTmp);
            nTotal[6] += nTmp;
            FormatCurrency(nTmp, tmpStr);
            rptDetail->SetValue(_T("8"), tmpStr);
        }
        rs.MoveNext();
    }

    if (nTotal > 0)
    {
        rptGroup = rpt.AddDetail(rpt.GetGroupFooter(2));
        tmpStr.Format(_T("%f"), nTotal[1]);
        rptGroup->SetValue(_T("t3"), tmpStr);
        tmpStr.Format(_T("%f"), nTotal[2]);
        rptGroup->SetValue(_T("t4"), tmpStr);
        tmpStr.Format(_T("%f"), nTotal[3]);
        rptGroup->SetValue(_T("t5"), tmpStr);
        tmpStr.Format(_T("%f"), nTotal[4]);
        rptGroup->SetValue(_T("t6"), tmpStr);
        tmpStr.Format(_T("%f"), nTotal[5]);
        rptGroup->SetValue(_T("t7"), tmpStr);
        tmpStr.Format(_T("%f"), nTotal[6]);
        rptGroup->SetValue(_T("t8"), tmpStr);
    }

    rptFooter = rpt.GetReportFooter();
    szDate = pMF->GetSysDate();
    tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szDate.Right(2),
                  szDate.Mid(5, 2), szDate.Left(4));
    rptFooter->SetValue(_T("PrintDate"), tmpStr);
    rpt.GetReportFooter()->SetValue(_T("Username"),
                                    pMF->GetUserName(pMF->GetCurrentUser()));
    EndWaitCursor();
    rpt.PrintPreview();
}

void CPMLiabilitiesTrack::OnExportSelect()
{
    UpdateData(TRUE);
    if (!m_bGeneralReports)
        OnExport();
    else
        OnExport1();
}
void CPMLiabilitiesTrack::OnExport()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    double nTmp = 0, nAmt = 0;
    double nFirst_period = 0, nLast_period = 0, nLast_period2 = 0,
           nGroupByDateTCD = 0, nGroupByDateNS = 0;
    int nIdx = 1, nIdx2 = 1;
    CString szSQL, tmpStr, tmpStr2, tmpStr3, szDate, szPos, szStorages,
        szOldGroup, szNewGroup, szOldID, szNewID, m_szPartnerId, szNewAcctDate,
        szOldAcctDate;
    double nTotal[5], nTotal2[5];
    for (int i = 0; i < 5; i++)
    {
        nTotal[i] = 0;
        nTotal2[i] = 0;
    }
    szSQL = GetQueryString_FP();
    rs.ExecSQL(szSQL);

    int nRow = 0, nCol = 0;
    CExcel xls;
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    xls.SetColumnWidth(0, 6);
    xls.SetColumnWidth(1, 20);
    xls.SetColumnWidth(2, 10);
    xls.SetColumnWidth(3, 10);
    xls.SetColumnWidth(4, 10);
    xls.SetColumnWidth(5, 20);
    xls.SetColumnWidth(6, 20);
    xls.SetColumnWidth(7, 20);
    xls.SetColumnWidth(8, 20);
    xls.SetColumnWidth(9, 20);

    xls.SetCellText(0, 0, pMF->m_szHospitalName,
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    11);

    tmpStr = _T("T\x1EA5t \x63\x1EA3");
    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(1);
        }
    }
    if (!szStorages.IsEmpty())
        xls.SetCellText(0, 5, szStorages, FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                        true, 11);
    else
        xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                        11);
    if (!m_szSupplierKey.IsEmpty())
        xls.SetCellText(0, 6, m_wndSupplier.GetCurrent(1),
                        FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    else
        xls.SetCellText(0, 6, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                        11);

    xls.SetCellText(
        0, 2, _T("\x42\x1EA2NG K\xCA TH\x45O \x44\xD5I \x43\xD4NG N\x1EE2"),
        FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(0, 3,
                    _T("TK: \x33\x33\x31 (Ph\x1EA3i tr\x1EA3 \x63ho ")
                    _T("ng\x1B0\x1EDDi \x62\xE1n)"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(0, 7, _T("TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    11);
    xls.SetCellText(1, 7, _T("Ng\xE0y NK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(2, 7, _T("Ng\xE0y TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(3, 7, _T("S\x1ED1 H\x110"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(4, 7, _T("S\x1ED1 NL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(5, 7, _T("Ph\xE1t sinh \x63\xF3 (Nh\x1EADp kho)"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, 7, _T("Ph\xE1t sinh n\x1EE3 (Th\x61nh to\xE1n)"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, 8, _T("Th\x61nh to\xE1n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, 9, _T("T\x1EF1 \x63\xE2n \x111\x1ED1i"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(7, 9, _T("Ng\xE2n s\xE1\x63h"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(8, 8, _T("H\xECnh th\x1EE9\x63 TT"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(9, 8, _T("Ho\xE0n tr\x1EA3 h\xE0ng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    xls.SetMerge(0, 0, 0, 2);
    xls.SetMerge(1, 1, 0, 2);
    xls.SetMerge(2, 2, 0, 9);
    xls.SetMerge(3, 3, 0, 9);
    xls.SetMerge(4, 4, 0, 9);
    xls.SetMerge(5, 5, 0, 9);
    xls.SetMerge(6, 6, 0, 9);
    xls.SetMerge(7, 9, 0, 0);
    xls.SetMerge(7, 9, 1, 1);
    xls.SetMerge(7, 9, 2, 2);
    xls.SetMerge(7, 9, 3, 3);
    xls.SetMerge(7, 9, 4, 4);
    xls.SetMerge(7, 9, 5, 5);
    xls.SetMerge(7, 7, 6, 9);
    xls.SetMerge(8, 9, 8, 8);
    xls.SetMerge(8, 9, 9, 9);
    xls.SetMerge(8, 8, 6, 7);

    nRow = 10;
    nCol = 0;

    rs.GetValue(_T("ttlamt"), tmpStr3);
    nFirst_period = str2double(tmpStr3);
    if (m_szSupplierKey.IsEmpty())
    {
        tmpStr.Format(_T("S\x1ED1 \x64\x1B0 \x111\x1EA7u k\x1EF3 \x111\x1EBFn ")
                      _T("ng\xE0y(%s)"),
                      CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
        xls.SetCellMergedColumns(nCol, nRow, 5);
        xls.SetCellText(nCol + 0, nRow, tmpStr, FMT_TEXT, true);
        xls.SetCellText(nCol + 5, nRow, tmpStr3, FMT_NUMBER1, true);
        nRow++;
        xls.SetCellMergedColumns(nCol, nRow, 10);
        xls.SetCellText(nCol + 0, nRow, _T("Ph\xE1t sinh trong k\x1EF3"),
                        FMT_TEXT, true);
        nRow++;
    }

    szSQL = GetQueryString_Main();
    rs.ExecSQL(szSQL);
    int nPrevRow = 0;
    while (!rs.IsEOF())
    {
        // Group Seperation
        rs.GetValue(_T("paid_date"), szNewAcctDate);
        rs.GetValue(_T("partnerid"), szNewID);
        rs.GetValue(_T("partnername"), szNewGroup);
        if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
        {
            if (nTotal[1] > 0 || nTotal[2] > 0 || nTotal[3] > 0 ||
                nTotal[4] > 0)
            {
                xls.SetCellMergedColumns(nCol, nRow, 5);
                xls.SetCellText(nCol + 0, nRow,
                                _T("\x43\x1ED9ng nh\x1EADp kho: "), FMT_TEXT,
                                true);
                tmpStr.Format(_T("%f"), nTotal[1]);
                xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1, true);
                nRow++;
                xls.SetCellMergedColumns(nCol, nRow, 5);
                xls.SetCellText(nCol + 0, nRow,
                                _T("\x43\x1ED9ng th\x61nh to\xE1n: "), FMT_TEXT,
                                true);
                tmpStr.Format(_T("%f"), nTotal[2]);
                xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
                tmpStr.Format(_T("%f"), nTotal[3]);
                xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
                tmpStr.Format(_T("%f"), nTotal[4]);
                xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1, true);
                nRow++;
                xls.SetCellMergedColumns(nCol, nRow, 6);
                xls.SetCellText(
                    nCol + 0, nRow,
                    _T("\x43\xF2n n\x1EE3 \x63h\x1B0\x61 th\x61nh to\xE1n: "),
                    FMT_TEXT, true);
                nLast_period2 =
                    nAmt + nTotal[1] - nTotal[2] - nTotal[3] - nTotal[4];
                xls.SetCellMergedColumns(nCol + 6, nRow, 4);
                tmpStr.Format(_T("%f"), nLast_period2);
                xls.SetCellText(nCol + 6, nRow, tmpStr,
                                FMT_NUMBER1 | FMT_CENTER, true);
                nTotal2[1] += nTotal[1];
                nTotal2[2] += nTotal[2];
                nTotal2[3] += nTotal[3];
                nTotal2[4] += nTotal[4];
                nTotal[1] = 0;
                nTotal[2] = 0;
                nTotal[3] = 0;
                nTotal[4] = 0;
                nLast_period2 = 0;
                nIdx2++;
                nRow++;
            }

            xls.SetCellMergedColumns(nCol, nRow, 10);
            xls.SetCellText(nCol + 0, nRow, szNewGroup, FMT_TEXT, true);
            nIdx = 1;
            szOldID = szNewID;
            szOldGroup = szNewGroup;
            szOldAcctDate.Empty();
            nRow++;

            tmpStr.Format(_T("S\x1ED1 \x64\x1B0 \x111\x1EA7u k\x1EF3 ")
                          _T("\x111\x1EBFn ng\xE0y(%s)"),
                          CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
            xls.SetCellMergedColumns(nCol, nRow, 5);
            xls.SetCellText(nCol + 0, nRow, tmpStr, FMT_TEXT, true);
            nAmt = GetDebtAmount(szNewID, m_szFromDate);
            m_szPartnerId += _T("','");
            m_szPartnerId += szOldID;
            tmpStr.Format(_T("%.2f"), nAmt);
            xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1, true);
            nRow++;
            xls.SetCellMergedColumns(nCol, nRow, 10);
            xls.SetCellText(nCol + 0, nRow, _T("Ph\xE1t sinh trong k\x1EF3"),
                            FMT_TEXT, true);
            nRow++;
        }

        if (szNewAcctDate != szOldAcctDate)
        {
            if (nGroupByDateTCD > 0 || nGroupByDateNS > 0)
            {
                xls.SetCellText(nCol + 6, nPrevRow, double2str(nGroupByDateTCD),
                                FMT_NUMBER1 | FMT_CENTER, true);
                xls.SetCellText(nCol + 7, nPrevRow, double2str(nGroupByDateNS),
                                FMT_NUMBER1 | FMT_CENTER, true);
                nGroupByDateTCD = 0;
                nGroupByDateNS = 0;
            }

            tmpStr.Format(_T("%s"),
                          CDate::Convert(szNewAcctDate, yyyymmdd, ddmmyyyy));
            xls.SetCellMergedColumns(nCol, nRow, 5);
            xls.SetCellText(nCol + 0, nRow, tmpStr, FMT_TEXT | FMT_CENTER,
                            true);
            szOldAcctDate = szNewAcctDate;
            nPrevRow = nRow;
            nRow++;
        }

        xls.SetCellText(nCol + 0, nRow, int2str(nIdx++), FMT_INTEGER);
        rs.GetValue(_T("import_date"), tmpStr);
        xls.SetCellText(nCol + 1, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
        rs.GetValue(_T("paid_date"), tmpStr);
        xls.SetCellText(nCol + 2, nRow,
                        CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
        rs.GetValue(_T("order_no"), tmpStr);
        xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("invoice_no"), tmpStr);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("import_amount"), nTmp);
        nTotal[1] += nTmp;
        xls.SetCellText(nCol + 5, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("paid_amountTCD"), nTmp);
        nTotal[2] += nTmp;
        nGroupByDateTCD += nTmp;
        xls.SetCellText(nCol + 6, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("paid_amountNS"), nTmp);
        nTotal[3] += nTmp;
        nGroupByDateNS += nTmp;
        xls.SetCellText(nCol + 7, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("pmethod"), tmpStr);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("return_amount"), nTmp);
        nTotal[4] += nTmp;
        xls.SetCellText(nCol + 9, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.MoveNext();
        nRow++;
    }

    if (nGroupByDateTCD > 0 || nGroupByDateNS > 0)
    {
        xls.SetCellText(nCol + 6, nPrevRow, double2str(nGroupByDateTCD),
                        FMT_NUMBER1 | FMT_CENTER, true);
        xls.SetCellText(nCol + 7, nPrevRow, double2str(nGroupByDateNS),
                        FMT_NUMBER1 | FMT_CENTER, true);
    }

    if (nTotal[1] > 0 || nTotal[2] > 0 || nTotal[3] > 0 || nTotal[4] > 0)
    {
        xls.SetCellMergedColumns(nCol, nRow, 5);
        xls.SetCellText(nCol + 0, nRow, _T("\x43\x1ED9ng nh\x1EADp kho: "),
                        FMT_TEXT, true);
        tmpStr.Format(_T("%f"), nTotal[1]);
        xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1, true);
        nRow++;
        xls.SetCellMergedColumns(nCol, nRow, 5);
        xls.SetCellText(nCol + 0, nRow, _T("\x43\x1ED9ng th\x61nh to\xE1n: "),
                        FMT_TEXT, true);
        tmpStr.Format(_T("%f"), nTotal[2]);
        xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal[3]);
        xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal[4]);
        xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1, true);
        nRow++;
        xls.SetCellMergedColumns(nCol, nRow, 6);
        xls.SetCellText(
            nCol + 0, nRow,
            _T("\x43\xF2n n\x1EE3 \x63h\x1B0\x61 th\x61nh to\xE1n: "), FMT_TEXT,
            true);
        nLast_period2 = nAmt + nTotal[1] - nTotal[2] - nTotal[3] - nTotal[4];
        xls.SetCellMergedColumns(nCol + 6, nRow, 4);
        tmpStr.Format(_T("%f"), nLast_period2);
        xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER, true);
        nTotal2[1] += nTotal[1];
        nTotal2[2] += nTotal[2];
        nTotal2[3] += nTotal[3];
        nTotal2[4] += nTotal[4];
        nRow++;
    }

    if (nIdx2 > 1)
    {
        xls.SetCellMergedColumns(nCol, nRow, 5);
        xls.SetCellText(nCol + 0, nRow, _T("\x43\x1ED9ng nh\x1EADp kho: "),
                        FMT_TEXT, true);
        tmpStr.Format(_T("%f"), nTotal2[1]);
        xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1, true);
        nRow++;
        xls.SetCellMergedColumns(nCol, nRow, 5);
        xls.SetCellText(nCol + 0, nRow, _T("\x43\x1ED9ng th\x61nh to\xE1n: "),
                        FMT_TEXT, true);
        tmpStr.Format(_T("%f"), nTotal2[2]);
        xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal2[3]);
        xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal2[4]);
        xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1, true);
        nRow++;
        xls.SetCellMergedColumns(nCol, nRow, 6);
        xls.SetCellText(
            nCol + 0, nRow,
            _T("\x43\xF2n n\x1EE3 \x63h\x1B0\x61 th\x61nh to\xE1n: "), FMT_TEXT,
            true);
        nLast_period =
            nFirst_period + nTotal2[1] - nTotal2[2] - nTotal2[3] - nTotal2[4];
        xls.SetCellMergedColumns(nCol + 6, nRow, 4);
        tmpStr.Format(_T("%f"), nLast_period);
        xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER, true);
        nRow++;
    }

    if (nIdx2 > 1)
        FormatCurrency(nLast_period, tmpStr2);
    else
        FormatCurrency(nLast_period2, tmpStr2);
    tmpStr.Format(_T("T\xEDnh \x111\x1EBFn ng\xE0y %s \x62\x1EC7nh vi\x1EC7n ")
                  _T("TW Qu\xE2n \x111\x1ED9i \x31\x30\x38 \x63\xF2n n\x1EE3 ")
                  _T("\x63\xF4ng ty l\xE0: %s \x111\x1ED3ng"),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy), tmpStr2);
    xls.SetCellText(nCol + 0, nRow, tmpStr, FMT_TEXT, true);

    nRow++;
    nRow++;
    nRow++;
    szDate = pMF->GetSysDate();
    tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), szDate.Right(2),
                  szDate.Mid(5, 2), szDate.Left(4));
    xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT, true);
    nRow++;
    nRow++;
    nRow++;
    nRow++;
    nRow++;
    xls.SetCellText(nCol + 9, nRow, pMF->GetUserName(pMF->GetCurrentUser()),
                    FMT_TEXT, true);
    EndWaitCursor();
    xls.Save(_T("Exports\\Bangketheodoicongno.xls"));
}

void CPMLiabilitiesTrack::OnExport1()
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CRecord rs(&pMF->m_db);
    double nTmp = 0;
    int nIdx = 1;
    CString szSQL, tmpStr, szDate, szStorages;
    double nTotal[7];
    for (int i = 0; i < 7; i++)
    {
        nTotal[i] = 0;
    }
    int nRow = 0, nCol = 0;
    CExcel xls;
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    xls.SetColumnWidth(0, 4);
    xls.SetColumnWidth(1, 50);
    xls.SetColumnWidth(2, 20);
    xls.SetColumnWidth(3, 20);
    xls.SetColumnWidth(4, 20);
    xls.SetColumnWidth(5, 20);
    xls.SetColumnWidth(6, 20);
    xls.SetColumnWidth(7, 20);

    xls.SetCellText(0, 0, pMF->m_szHospitalName,
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
                  CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
                  CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
    xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    11);

    tmpStr = _T("T\x1EA5t \x63\x1EA3");
    for (int i = 0; i < m_wndStock.GetItemCount(); i++)
    {
        if (m_wndStock.GetCheck(i))
        {
            m_wndStock.SetCurSel(i);
            if (!szStorages.IsEmpty())
                szStorages += _T(", ");
            szStorages += m_wndStock.GetCurrent(1);
        }
    }
    if (!szStorages.IsEmpty())
        xls.SetCellText(0, 5, szStorages, FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                        true, 11);
    else
        xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                        11);
    if (!m_szSupplierKey.IsEmpty())
        xls.SetCellText(0, 6, m_wndSupplier.GetCurrent(1),
                        FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    else
        xls.SetCellText(0, 6, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                        11);

    xls.SetCellText(0, 2,
                    _T("\x42\x1EA2NG K\xCA T\x1ED4NG H\x1EE2P TH\x45O ")
                    _T("\x44\xD5I \x43\xD4NG N\x1EE2"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
    xls.SetCellText(0, 3,
                    _T("TK: \x33\x33\x31 (Ph\x1EA3i tr\x1EA3 \x63ho ")
                    _T("ng\x1B0\x1EDDi \x62\xE1n)"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
    xls.SetCellText(0, 7, _T("TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    11);
    xls.SetCellText(1, 7, _T("T\xEAn \x63\xF4ng ty"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(2, 7, _T("S\x1ED1 l\x1B0\x1EE3ng nh\x1EADp"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(2, 8, _T("T\x1ED3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(3, 8, _T("\x43\x1ED9ng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(4, 8, _T("Nh\x1EADp"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 11);
    xls.SetCellText(5, 7, _T("\x110\xE3 th\x61nh to\xE1n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(6, 7, _T("Tr\x1EA3 h\xE0ng"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(7, 7, _T("\x43h\x1B0\x61 th\x61nh to\xE1n"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

    xls.SetMerge(0, 0, 0, 2);
    xls.SetMerge(1, 1, 0, 2);
    xls.SetMerge(2, 2, 0, 7);
    xls.SetMerge(3, 3, 0, 7);
    xls.SetMerge(4, 4, 0, 7);
    xls.SetMerge(5, 5, 0, 7);
    xls.SetMerge(6, 6, 0, 7);
    xls.SetMerge(7, 8, 0, 0);
    xls.SetMerge(7, 8, 1, 1);
    xls.SetMerge(7, 7, 2, 4);
    xls.SetMerge(7, 8, 5, 5);
    xls.SetMerge(7, 8, 6, 6);
    xls.SetMerge(7, 8, 7, 7);

    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);
    nRow = 9;
    nCol = 0;
    while (!rs.IsEOF())
    {
        xls.SetCellText(nCol + 0, nRow, int2str(nIdx++), FMT_INTEGER);
        rs.GetValue(_T("pname"), tmpStr);
        xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
        rs.GetValue(_T("ttlamt"), nTmp);
        nTotal[1] += nTmp;
        xls.SetCellText(nCol + 2, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("import_amount"), nTmp);
        nTotal[2] += nTmp;
        xls.SetCellText(nCol + 3, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("total"), nTmp);
        nTotal[3] += nTmp;
        xls.SetCellText(nCol + 4, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("paid_amount"), nTmp);
        nTotal[4] += nTmp;
        xls.SetCellText(nCol + 5, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("return_amount"), nTmp);
        nTotal[5] += nTmp;
        xls.SetCellText(nCol + 6, nRow, double2str(nTmp), FMT_NUMBER1);
        rs.GetValue(_T("total2"), nTmp);
        nTotal[6] += nTmp;
        xls.SetCellText(nCol + 7, nRow, double2str(nTmp), FMT_NUMBER1);
        nRow++;
        rs.MoveNext();
    }

    if (nTotal > 0)
    {
        xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT,
                        true);
        tmpStr.Format(_T("%f"), nTotal[1]);
        xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal[2]);
        xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal[3]);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal[4]);
        xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal[5]);
        xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1, true);
        tmpStr.Format(_T("%f"), nTotal[6]);
        xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_NUMBER1, true);
        nRow++;
    }

    nRow++;
    nRow++;
    nRow++;
    szDate = pMF->GetSysDate();
    tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), szDate.Right(2),
                  szDate.Mid(5, 2), szDate.Left(4));
    xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT, true);
    nRow++;
    nRow++;
    nRow++;
    nRow++;
    nRow++;
    xls.SetCellText(nCol + 7, nRow, pMF->GetUserName(pMF->GetCurrentUser()),
                    FMT_TEXT, true);
    EndWaitCursor();
    xls.Save(_T("Exports\\Bangketonghoptheodoicongno.xls"));
}

CString CPMLiabilitiesTrack::GetQueryString_Main()
{
    CString szSQL, szWhere1, szWhere2, szWhere3, szStorages;
    szWhere1.Format(
        _T(" AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate);
    szWhere3.Format(
        _T(" AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
        m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);
    szWhere2.Format(
        _T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T("   AND ((mt_payment     <> 'Y'")
        _T("   AND mt_payment_method = 'UNC')")
        _T("   OR mt_payment_date   IS NULL)"),
        m_szFromDate, m_szToDate);

    // szWhere2.Format(_T(" AND pp_createddate BETWEEN to_timestamp('%s',
    // 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD
    // HH24:MI:SS')"), m_szFromDate, m_szToDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere1.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere3.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
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
        szWhere1.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
        szWhere3.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
        szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s) "), szStorages);
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere1.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere3.AppendFormat(L" and po_contract_id = %ld",
                              str2long(m_szContractKey));
        szWhere2.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }
    // 	szSQL.Format(_T(" SELECT * ") \
// 	_T(" FROM   (SELECT 1 order_type, ") \
// 	_T("                po_approveddate import_date, ") \
// 	_T("				po_invoiceno invoice_no, ") \
// 	_T("                po_orderno order_no, ") \
// 	_T("                po_totalamount import_amount, ") \
// 	_T("                0 paid_amount ") \
// 	_T("         FROM   purchase_order ") \
// 	_T("         WHERE  po_status = 'A' %s") \
// 	_T("         UNION ALL ") \
// 	_T("         SELECT    2, ") \
// 	_T("                   po_approveddate, ") \
// 	_T("				   po_invoiceno, ") \
// 	_T("                   po_orderno, ") \
// 	_T("                   0, ") \
// 	_T("                   po_paidamount ") \
// 	_T("         FROM      purchase_payment ") \
// 	_T("         LEFT JOIN purchase_order ON ( pp_purchase_payment_id = po_refpayment_id ) ") \
// 	_T("         WHERE     pp_status IN ( 'P', 'A' ) %s) ") \
// 	_T(" ORDER  BY order_type,import_date"), szWhere1, szWhere2);

    szSQL.Format(
        _T(" SELECT import_date,")
        _T("   paid_date,")
        _T("   invoice_no,")
        _T("   order_no,")
        _T("   SUM(import_amount)  AS import_amount,")
        _T("   SUM(paid_amountTCD) AS paid_amountTCD,")
        _T("   SUM(paid_amountNS)  AS paid_amountNS,")
        _T("   SUM(return_amount)  AS return_amount,")
        _T("   partnerid,")
        _T("   partnername,")
        _T("   pmethod,")
        _T("   get_contract_info(po_contract_id, 'NO') AS contract_no,")
        _T("   get_contract_info(po_contract_id, 'SD') AS contract_sd,")
        _T("   po_contractpkg_id AS contractpkg_id")
        _T(" FROM")
        _T("   (SELECT po_approveddate AS import_date,")
        _T("     CASE WHEN pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS')")
        _T("	 AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') THEN ")
        _T("pp_acctdate END AS paid_date,")
        _T("     po_invoiceno AS invoice_no,")
        _T("     po_orderno AS order_no,")
        _T("     po_totalamount AS import_amount,")
        _T("     0 AS paid_amountTCD,")
        _T("     0 AS paid_amountNS,")
        _T("     0 AS return_amount,")
        _T("     po_partner_id AS partnerid,")
        _T("     get_partnername(po_partner_id) AS partnername,")
        _T("     CAST(' ' AS NVARCHAR2(1)) AS pmethod,")
        _T("	 po_contractpkg_id, ")
        _T("	 po_contract_id ")
        _T("   FROM purchase_order")
        _T("   LEFT JOIN purchase_payment")
        _T("   ON ( pp_purchase_payment_id    = po_refpayment_id )")
        _T("   WHERE po_status                = 'A'")
        _T("   AND po_org_id                  = 'PM'")
        _T("   AND NVL(po_saleperson_id, 'P') = 'P' %s")
        _T("   UNION ALL")
        _T("   SELECT po_approveddate,")
        _T("     pp_acctdate,")
        _T("     po_invoiceno,")
        _T("     po_orderno,")
        _T("     0,")
        _T("     CASE WHEN pp_payment_resource_id = 01 THEN po_paidamount ")
        _T("ELSE 0 END AS paid_amountTCD,")
        _T("     CASE WHEN pp_payment_resource_id = 5 THEN po_paidamount ELSE ")
        _T("0 END AS paid_amountNS,")
        _T("     0,")
        _T("     po_partner_id,")
        _T("     get_partnername(po_partner_id),")
        _T("     (SELECT adpm_description FROM ad_payment_method WHERE ")
        _T("adpm_payment_method_id = pp_payment_method_id) AS pmethod,")
        _T("	 po_contractpkg_id, ")
        _T("	 po_contract_id ")
        _T("   FROM purchase_payment")
        _T("   LEFT JOIN purchase_order")
        _T("   ON ( pp_purchase_payment_id    = po_refpayment_id )")
        _T("   WHERE pp_status               IN ( 'P', 'A' )")
        _T("   AND po_org_id                  = 'PM'")
        _T("   AND po_payment                 = 'Y'")
        _T("   AND NVL(po_saleperson_id, 'P') = 'P' %s")
        _T("   UNION ALL")
        _T("   SELECT mt_approveddate,")
        _T("     mt_payment_date,")
        _T("     CAST(' ' AS NVARCHAR2(1)),")
        _T("     mt_orderno,")
        _T("     0,")
        _T("     0,")
        _T("     0,")
        _T("     mtl_ttlamount,")
        _T("     mt_partner_id,")
        _T("     get_partnername(mt_partner_id),")
        _T("     CAST(' ' AS NVARCHAR2(1)) AS pmethod,")
        _T("	 NULL as po_contractpkg_id, ")
        _T("	 NULL as po_contract_id ")
        _T("   FROM m_transaction")
        _T("   LEFT JOIN m_transactionline")
        _T("   ON(mt_transaction_id   = mtl_transaction_id)")
        _T("   LEFT JOIN m_productitem_view3 ")
        _T("   ON (mtl_product_item_id = product_item_id) ")
        _T("   WHERE mt_org_id          = 'PM'")
        _T("   AND mt_doctype         = 'PRO'")
        _T("   AND mt_partner_id NOT IN('KD', '708', 'CHT')")
        _T("   %s")
        _T("   )")
        _T(" GROUP BY import_date,")
        _T("   paid_date,")
        _T("   invoice_no,")
        _T("   order_no,")
        _T("   partnerid,")
        _T("   partnername,")
        _T("   pmethod,")
        _T("	 po_contractpkg_id, ")
        _T("	 po_contract_id ")
        _T(" ORDER BY paid_date,")
        _T("   import_date,")
        _T("   partnername"),
        m_szFromDate, m_szToDate, szWhere1, szWhere3, szWhere2);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}

CString CPMLiabilitiesTrack::GetQueryString_FP()
{
    CString szSQL, szWhere, szWhere1, szStorages;
    szWhere.Format(_T(" AND (po_approveddate   < TO_TIMESTAMP('%s', ")
                   _T("'YYYY-MM-DD HH24:MI:SS')")
                   _T(" AND (po_payment        = 'N'")
                   _T(" OR (po_payment         = 'Y'")
                   _T(" AND pp_acctdate       >= TO_TIMESTAMP('%s', ")
                   _T("'YYYY-MM-DD HH24:MI:SS'))))"),
                   m_szFromDate, m_szFromDate);
    szWhere1.Format(_T(" AND mt_approveddate <= TO_TIMESTAMP('%s', ")
                    _T("'YYYY-MM-DD HH24:MI:SS')")
                    _T("	 AND ((mt_payment     <> 'Y'")
                    _T("	 AND mt_payment_method = 'UNC')")
                    _T("	 OR mt_payment_date   IS NULL)"),
                    m_szFromDate);
    // 	szWhere1.Format(_T(" AND pp_createddate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
// 				    _T(" AND po_approveddate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szFromDate);
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere1.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
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
        szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s) "), szStorages);
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere1.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }
    // 	szSQL.Format(_T("SELECT SUM(ttlamt) ttlamt FROM (SELECT SUM(po_totalamount) ttlamt ") \
// 		_T(" FROM purchase_order ") \
// 		_T(" WHERE po_status = 'A' AND NVL(po_payment, 'N') = 'N' %s") \
// 		_T(" UNION ALL") \
// 		_T(" SELECT SUM(po_totalamount) ") \
// 		_T(" FROM purchase_order") \
// 		_T(" LEFT JOIN purchase_payment ON (po_refpayment_id = pp_purchase_payment_id)") \
// 		_T(" WHERE po_status = 'A' AND po_payment = 'Y' %s )"), szWhere, szWhere1);
    szSQL.Format(_T(" SELECT")
                 _T(" SUM(ttlamt - ttlreamt) AS ttlamt")
                 _T(" FROM(")
                 _T(" SELECT SUM(pol_totalamount) ttlamt,")
                 _T(" 0 AS ttlreamt")
                 _T(" FROM purchase_order")
                 _T(" LEFT JOIN purchase_orderline")
                 _T(" ON (po_purchase_order_id = pol_purchase_order_id)")
                 _T(" LEFT JOIN purchase_payment")
                 _T(" ON (pp_purchase_payment_id = po_refpayment_id)")
                 _T(" WHERE po_status = 'A'")
                 _T(" AND po_org_id     = 'PM'")
                 _T(" AND NVL(po_saleperson_id, 'P') = 'P' %s")
                 _T(" UNION ALL")
                 _T(" SELECT ")
                 _T(" 0,")
                 _T(" SUM(mtl_ttlamount) ttlreamt")
                 _T(" FROM m_transaction")
                 _T(" LEFT JOIN m_transactionline")
                 _T(" ON(mt_transaction_id = mtl_transaction_id)")
                 _T("   LEFT JOIN m_productitem_view3 ")
                 _T("   ON (mtl_product_item_id = product_item_id) ")
                 _T(" WHERE mt_payment      = 'Y'")
                 _T(" AND mt_org_id        = 'PM'")
                 _T(" AND mt_partner_id NOT  IN('KD', '708', 'CHT')")
                 _T(" AND mt_doctype       = 'PRO'")
                 _T(" %s)"),
                 szWhere, szWhere1);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}
BEGIN_MESSAGE_MAP(CPMLiabilitiesTrack, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMLiabilitiesTrack::OnSetFocus(CWnd *pOldWnd)
{
    CGuiView::OnSetFocus(pOldWnd);

    // TODO: Add your message handler code here
    m_wndFromDate.SetFocus();
}

float CPMLiabilitiesTrack::GetDebtAmount(CString szPartnerID, CString szDate)
{
    CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere, szWhere1, tmpStr, szStorages;
    float nTtlAmt = 0;
    szWhere.Format(_T(" AND (po_approveddate    < TO_TIMESTAMP('%s', ")
                   _T("'YYYY-MM-DD HH24:MI:SS')")
                   _T(" AND (po_payment = 'N' OR (po_payment = 'Y'")
                   _T(" AND pp_acctdate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
                   _T("HH24:MI:SS')))) AND po_partner_id = '%s'"),
                   szDate, szDate, szPartnerID);
    szWhere1.Format(_T(" AND mt_partner_id = '%s'")
                    _T("	 AND mt_approveddate <= TO_TIMESTAMP('%s', ")
                    _T("'YYYY-MM-DD HH24:MI:SS')")
                    _T("	 AND ((mt_payment     <> 'Y'")
                    _T("	 AND mt_payment_method = 'UNC')")
                    _T("	 OR mt_payment_date   IS NULL)"),
                    szPartnerID, szDate);
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

    szSQL.Format(_T(" SELECT SUM(ttlamt - ttlreamt) AS ttlamt")
                 _T(" FROM(")
                 _T(" SELECT SUM(pol_totalamount)  AS ttlamt,")
                 _T(" 0 AS ttlreamt")
                 _T(" FROM purchase_order")
                 _T(" LEFT JOIN purchase_orderline")
                 _T(" ON (po_purchase_order_id = pol_purchase_order_id)")
                 _T(" LEFT JOIN purchase_payment")
                 _T(" ON (pp_purchase_payment_id = po_refpayment_id)")
                 _T(" LEFT JOIN m_productitem_view")
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
                 _T(" LEFT JOIN m_productitem_view")
                 _T(" ON (product_item_id    = mtl_product_item_id)")
                 _T(" WHERE mt_org_id        = 'PM'")
                 _T(" AND mt_doctype       = 'PRO'")
                 _T(" AND mt_partner_id NOT  IN('KD', '708', 'CHT')")
                 _T(" %s)"),
                 szWhere, szWhere1);
    _fmsg(_T("%s"), szSQL);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
        rs.GetValue(_T("ttlamt"), nTtlAmt);
    return nTtlAmt;
}

CString CPMLiabilitiesTrack::GetQueryString()
{
    CString szSQL, szWhere, szWhere1, szStorages;
    if (!m_szSupplierKey.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
        szWhere1.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
    }
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
        szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s) "), szStorages);
    }
    if (!m_szContractKey.IsEmpty())
    {
        szWhere.AppendFormat(L" and po_contract_id = %ld",
                             str2long(m_szContractKey));
        szWhere1.AppendFormat(L" and product_contract_id = %ld",
                              str2long(m_szContractKey));
    }

    szSQL.Format(
        _T(" SELECT ")
        _T(" pname,")
        _T(" ROUND(SUM(ttlamt), 0) AS ttlamt,")
        _T(" ROUND(SUM(import_amount), 0) AS import_amount,")
        _T(" ROUND(SUM(ttlamt) + SUM(import_amount), 0) AS total,")
        _T(" ROUND(SUM(paid_amount), 0) AS paid_amount,")
        _T(" ROUND(SUM(ttlamt) + SUM(import_amount) - SUM(paid_amount) - ")
        _T("SUM(return_amount), 0) AS total2,")
        _T(" ROUND(SUM(return_amount), 0) AS return_amount")
        _T(" FROM(")
        _T(" SELECT pname,")
        _T("   0 ttlamt,")
        _T("   SUM(import_amount) import_amount,")
        _T("   SUM(paid_amount) paid_amount,")
        _T("   SUM(return_amount) return_amount")
        _T(" FROM")
        _T("   (SELECT po_invoicedate import_date,")
        _T("     po_invoiceno invoice_no,")
        _T("     po_orderno order_no,")
        _T("     po_totalamount import_amount,")
        _T("     0 paid_amount,")
        _T("     0 return_amount,")
        _T("     get_partnername(po_partner_id) pname")
        _T("   FROM purchase_order")
        _T("   LEFT JOIN purchase_payment")
        _T("   ON ( pp_purchase_payment_id    = po_refpayment_id )")
        _T("   WHERE po_status        = 'A'")
        _T("   AND po_org_id     = 'PM'")
        _T("   AND NVL(po_saleperson_id, 'P') = 'P'")
        _T("   AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T("   %s")
        _T("   UNION ALL")
        _T("   SELECT po_invoicedate,")
        _T("     po_invoiceno,")
        _T("     po_orderno,")
        _T("     0,")
        _T("     po_paidamount,")
        _T("     0,")
        _T("     get_partnername(po_partner_id)")
        _T("   FROM purchase_payment")
        _T("   LEFT JOIN purchase_order")
        _T("   ON ( pp_purchase_payment_id = po_refpayment_id )")
        _T("   WHERE pp_status            IN ( 'P', 'A' )")
        _T("   AND po_org_id     = 'PM'")
        _T("   AND NVL(po_saleperson_id, 'P') = 'P'")
        _T("   AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T("   %s")
        _T("   UNION ALL")
        _T("   SELECT mt_payment_date,")
        _T("     CAST(' ' AS NVARCHAR2(1)),")
        _T("     mt_orderno,")
        _T("     0,")
        _T("     0,")
        _T("     mtl_ttlamount,")
        _T("     get_partnername(mt_partner_id)")
        _T("   FROM m_transaction")
        _T("   LEFT JOIN m_transactionline")
        _T("   ON(mt_transaction_id   = mtl_transaction_id)")
        _T("   LEFT JOIN m_productitem_view3 ")
        _T("   ON (mtl_product_item_id = product_item_id) ")
        _T("   WHERE mt_org_id          = 'PM'")
        _T("   AND mt_doctype         = 'PRO'")
        _T("   AND mt_partner_id NOT IN('KD', '708', 'CHT')")
        _T("   AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T("   AND ((mt_payment     <> 'Y'")
        _T("   AND mt_payment_method = 'UNC')")
        _T("   OR mt_payment_date   IS NULL) %s")
        _T("   )")
        _T(" GROUP BY")
        _T("   pname")
        _T(" UNION ALL")
        _T(" SELECT pname,")
        _T(" SUM(ttlamt - ttlreamt) AS ttlamt,")
        _T(" 0,0,0")
        _T(" FROM")
        _T(" (SELECT SUM(pol_totalamount) ttlamt,")
        _T(" 0 AS ttlreamt,")
        _T(" get_partnername(po_partner_id) pname")
        _T(" FROM purchase_order")
        _T(" LEFT JOIN purchase_orderline")
        _T(" ON (po_purchase_order_id = pol_purchase_order_id)")
        _T(" LEFT JOIN purchase_payment")
        _T(" ON (pp_purchase_payment_id     = po_refpayment_id)")
        _T(" WHERE po_status                = 'A'")
        _T(" AND po_org_id                  = 'PM'")
        _T(" AND NVL(po_saleperson_id, 'P') = 'P'")
        _T(" AND (po_approveddate           < TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS')")
        _T(" AND (po_payment                = 'N'")
        _T(" OR (po_payment                 = 'Y'")
        _T(" AND pp_acctdate               >= TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS')))) %s")
        _T(" GROUP BY po_partner_id")
        _T(" UNION ALL")
        _T(" SELECT 0,")
        _T(" SUM(mtl_ttlamount) ttlreamt,")
        _T(" get_partnername(mt_partner_id)")
        _T(" FROM m_transaction")
        _T(" LEFT JOIN m_transactionline")
        _T(" ON(mt_transaction_id   = mtl_transaction_id)")
        _T("   LEFT JOIN m_productitem_view3 ")
        _T("   ON (mtl_product_item_id = product_item_id) ")
        _T(" WHERE mt_org_id          = 'PM'")
        _T(" AND mt_partner_id NOT IN('KD', '708', 'CHT')")
        _T(" AND mt_doctype         = 'PRO'")
        _T(" AND mt_approveddate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS')")
        _T(" AND ((mt_payment     <> 'Y'")
        _T(" AND mt_payment_method = 'UNC')")
        _T(" OR mt_payment_date   IS NULL) %s")
        _T(" GROUP BY mt_partner_id")
        _T(" )")
        _T(" GROUP BY pname")
        _T("   )")
        _T("   GROUP BY pname")
        _T(" ORDER BY pname"),
        m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere,
        m_szFromDate, m_szToDate, szWhere1, m_szFromDate, m_szFromDate, szWhere,
        m_szFromDate, szWhere1);
    _fmsg(_T("%s"), szSQL);
    return szSQL;
}