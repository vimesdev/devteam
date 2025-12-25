#include "HMSGeneralSurgeryReportDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                           int nNewItemSel)
{
    ((CHMSGeneralSurgeryReportDialog *)pWnd)
        ->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSGeneralSurgeryReportDialog *)pWnd)->OnToDateCheckValue();
}
static void _OnLoadReportSelectFnc(CWnd *pWnd)
{
    CHMSGeneralSurgeryReportDialog *pVw =
        (CHMSGeneralSurgeryReportDialog *)pWnd;
    pVw->OnLoadReportSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CHMSGeneralSurgeryReportDialog *pVw =
        (CHMSGeneralSurgeryReportDialog *)pWnd;
    pVw->OnExportSelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd)
{
    CHMSGeneralSurgeryReportDialog *pVw =
        (CHMSGeneralSurgeryReportDialog *)pWnd;
    pVw->OnCloseSelect();
}
static int _OnAddHMSGeneralSurgeryReportDialogFnc(CWnd *pWnd)
{
    return ((CHMSGeneralSurgeryReportDialog *)pWnd)
        ->OnAddHMSGeneralSurgeryReportDialog();
}
static int _OnEditHMSGeneralSurgeryReportDialogFnc(CWnd *pWnd)
{
    return ((CHMSGeneralSurgeryReportDialog *)pWnd)
        ->OnEditHMSGeneralSurgeryReportDialog();
}
static int _OnDeleteHMSGeneralSurgeryReportDialogFnc(CWnd *pWnd)
{
    return ((CHMSGeneralSurgeryReportDialog *)pWnd)
        ->OnDeleteHMSGeneralSurgeryReportDialog();
}
static int _OnSaveHMSGeneralSurgeryReportDialogFnc(CWnd *pWnd)
{
    return ((CHMSGeneralSurgeryReportDialog *)pWnd)
        ->OnSaveHMSGeneralSurgeryReportDialog();
}
static int _OnCancelHMSGeneralSurgeryReportDialogFnc(CWnd *pWnd)
{
    return ((CHMSGeneralSurgeryReportDialog *)pWnd)
        ->OnCancelHMSGeneralSurgeryReportDialog();
}
CHMSGeneralSurgeryReportDialog::CHMSGeneralSurgeryReportDialog(CWnd *pParent,
                                                               int m_nID)
    : CGuiDialog(pParent)
{

    m_nDlgWidth = 405;
    m_nDlgHeight = 125;
    m_nIdx = m_nID;
    SetDefaultValues();
}
CHMSGeneralSurgeryReportDialog::~CHMSGeneralSurgeryReportDialog() {}
void CHMSGeneralSurgeryReportDialog::OnCreateComponents()
{
    m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 505, 90);
    m_wndReportPeriodLabel.Create(this, _T("Report Period"), 10, 30, 110, 55);
    m_wndReportPeriod.Create(this, 115, 30, 495, 55);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
    m_wndFromDate.Create(this, 115, 60, 250, 85);
    m_wndToDateLabel.Create(this, _T("To Date"), 255, 60, 355, 85);
    m_wndToDate.Create(this, 360, 60, 495, 85);
    m_wndLoadReport.Create(this, _T("&Load Report"), 200, 95, 300, 120);
    m_wndExport.Create(this, _T("&Export XLS"), 305, 95, 405, 120);
    m_wndClose.Create(this, _T("&Close"), 410, 95, 495, 120);
}
void CHMSGeneralSurgeryReportDialog::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndReportPeriod.SetCheckValue(true);
    m_wndReportPeriod.LimitText(35);
    m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndFromDate.SetCheckValue(true);
    m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndToDate.SetCheckValue(true);

    m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void CHMSGeneralSurgeryReportDialog::OnSetWindowEvents()
{
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
    m_wndLoadReport.SetEvent(WE_CLICK, _OnLoadReportSelectFnc);
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString tmpStr;
    tmpStr = pMF->GetSysDate();
    m_nYear = ToInt(tmpStr.Left(4));
    m_szFromDate = m_szToDate = tmpStr;
    m_szFromDate += _T(" 00:00:00");
    m_szToDate += _T(" 23:59:59");
    SetMode(VM_EDIT);
}
void CHMSGeneralSurgeryReportDialog::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CHMSGeneralSurgeryReportDialog::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT * FROM "));
    rs.ExecSQL(szSQL);
}
void CHMSGeneralSurgeryReportDialog::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSGeneralSurgeryReportDialog::SetDefaultValues()
{

    m_szReportPeriodKey.Empty();
    m_szFromDate.Empty();
    m_szToDate.Empty();
    CDate nMonth;
    m_nYear = 0;
}
int CHMSGeneralSurgeryReportDialog::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiDialog::SetMode(nMode);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
        EnableButtons(TRUE, 0, 1, 2, -1);
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
void CHMSGeneralSurgeryReportDialog::OnReportPeriodSelectChange(int nOldItemSel,
                                                                int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSGeneralSurgeryReportDialog::OnReportPeriodSelendok()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString tmpStr;
    CDate dte;
    UpdateData(true);
    int nMonth = ToInt(m_szReportPeriodKey);
    if (nMonth > 0 && nMonth <= 12)
    {
        m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
        dte.ParseDate(m_szFromDate);
        m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 13)
    {
        m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
        tmpStr.Format(_T("%.4d/03/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear, dte.GetMonthLastDay());
    }
    if (nMonth == 14)
    {
        m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
        tmpStr.Format(_T("%.4d/06/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
    }

    if (nMonth == 15)
    {
        m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
        tmpStr.Format(_T("%.4d/09/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
    }
    if (nMonth == 16)
    {
        m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
        tmpStr.Format(_T("%.4d/10/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
    }
    if (nMonth == 17)
    {
        m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
        tmpStr.Format(_T("%.4d/12/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
    }
    UpdateData(false);
}
/*void CHMSGeneralSurgeryReportDialog::OnReportPeriodSetfocus(){

}*/
/*void CHMSGeneralSurgeryReportDialog::OnReportPeriodKillfocus(){

}*/
long CHMSGeneralSurgeryReportDialog::OnReportPeriodLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
    {
        szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
    };
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
/*void CHMSGeneralSurgeryReportDialog::OnReportPeriodAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSGeneralSurgeryReportDialog::OnFromDateChange(){

} */
/*void CHMSGeneralSurgeryReportDialog::OnFromDateSetfocus(){

} */
/*void CHMSGeneralSurgeryReportDialog::OnFromDateKillfocus(){

} */
int CHMSGeneralSurgeryReportDialog::OnFromDateCheckValue() { return 0; }
/*void CHMSGeneralSurgeryReportDialog::OnToDateChange(){

} */
/*void CHMSGeneralSurgeryReportDialog::OnToDateSetfocus(){

} */
/*void CHMSGeneralSurgeryReportDialog::OnToDateKillfocus(){

} */
int CHMSGeneralSurgeryReportDialog::OnToDateCheckValue() { return 0; }
void CHMSGeneralSurgeryReportDialog::OnLoadReportSelect()
{
    switch (m_nIdx)
    {
    case 0:
        OnTonghopmothuong();
        break;
    case 1:
        OnTonghopmokythuatcao();
        break;
    case 2:
        OnTonghopphuongphapvocam();
        break;
    }
}

void CHMSGeneralSurgeryReportDialog::OnTonghopmothuong()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    static CReport rpt;
    CString tmpStr;
    if (!rpt.Init(_T("Reports/HMS/PTTT/GENERALSURGERYREPORT.RPT")))
    {
        // ShowMessageBox(_T("Can not open file report"), MB_OK);
        return;
    }

    CString szSQL;
    CRecord rs(&pMF->m_db);

    UpdateData(true);
    BeginWaitCursor();

    /*szSQL.Format(_T(" SELECT (select sd_name from sys_dept where
       sd_id=hsd_tdeptid) as deptid,") \
                _T(" 	sum(mophienlon) as mophienlon,") \
                _T(" 	sum(mophienvua) as mophienvua,") \
                _T(" 	sum(mocapcuulon) as mocapcuulon,") \
                _T(" 	sum(mocapcuuvua) as mocapcuuvua,") \
                _T(" 	sum(moyeucaulon) as moyeucaulon,") \
                _T(" 	sum(moyeucauvua) as moyeucauvua,") \
                _T(" 	sum(tongcong) as tongcong") \
                _T(" FROM") \
                _T(" (") \
                _T(" 	SELECT hsd_tdeptid,") \
                _T(" 		case when hsd_category = 1 and hsd_normal='N' then 1
       else 0 end as mophienlon,") \
                _T(" 		case when hsd_category = 1 and hsd_normal='Y' then 1
       else 0 end as mophienvua,") \
                _T(" 		case when hsd_category = 2 and hsd_normal='N' then 1
       else 0 end as mocapcuulon,") \
                _T(" 		case when hsd_category = 2 and hsd_normal='Y' then 1
       else 0 end as mocapcuuvua,") \
                _T(" 		case when hsd_category = 3 and hsd_normal='N' then 1
       else 0 end as moyeucaulon,") \
                _T(" 		case when hsd_category = 3 and hsd_normal='Y' then 1
       else 0 end as moyeucauvua,") \
                _T(" 		case when hsd_category in(1, 2, 3) then 1 else 0 end
       as tongcong") \
                _T(" 	FROM hms_patient_surgery") \
                _T(" 	LEFT JOIN hms_surgery_detail ON(hsd_docno=hps_docno)") \
                _T(" 	WHERE hsd_status ='A' and date(hsd_date) between
       date('%s')  and date('%s') ORDER BY hsd_date") \
                _T(" ) as tbl") \
                _T(" GROUP BY deptid") \
                _T(" ORDER BY deptid") , m_szFromDate, m_szToDate);*/

    szSQL.Format(
        _T(" SELECT (select sd_name from sys_dept where sd_id=ho_deptid) as ")
        _T("deptid,")
        _T("        sum(c1) as c1,")
        _T("        sum(c2) as c2,")
        _T("        sum(c3) as c3,")
        _T("        sum(c4) as c4,")
        _T("        sum(c5) as c5,")
        _T("        sum(c6) as c6,")
        _T("        sum(c7) as c7,")
        _T("        sum(c8) as c8,")
        _T("        sum(c9) as c9,")
        _T("        sum(c10) as c10,")
        _T("        sum(c11) as c11,")
        _T("        sum(c12) as c12,")
        _T("        sum(tongcong) as tongcong")
        _T(" FROM")
        _T(" (")
        _T("   SELECT ho_deptid,")
        _T("     case when ho_type = 1 and ho_normal='S' then 1 else 0 end as ")
        _T("c1,")
        _T("     case when ho_type = 1 and ho_normal='1' then 1 else 0 end as ")
        _T("c2,")
        _T("	 case when ho_type = 1 and ho_normal='2' then 1 else 0 end as ")
        _T("c3,")
        _T("	 case when ho_type = 1 and ho_normal='3' then 1 else 0 end as ")
        _T("c4,")
        _T("     case when ho_type = 2 and ho_normal='S' then 1 else 0 end as ")
        _T("c5,")
        _T("     case when ho_type = 2 and ho_normal='1' then 1 else 0 end as ")
        _T("c6,")
        _T("	 case when ho_type = 2 and ho_normal='2' then 1 else 0 end as ")
        _T("c7,")
        _T("	 case when ho_type = 2 and ho_normal='3' then 1 else 0 end as ")
        _T("c8,")
        _T("     case when ho_type = 3 and ho_normal='S' then 1 else 0 end as ")
        _T("c9,")
        _T("     case when ho_type = 3 and ho_normal='1' then 1 else 0 end as ")
        _T("c10,")
        _T("	 case when ho_type = 3 and ho_normal='2' then 1 else 0 end as ")
        _T("c11,")
        _T("	 case when ho_type = 3 and ho_normal='3' then 1 else 0 end as ")
        _T("c12,")
        _T("     case when ho_type in (1, 2, 3) AND ho_normal IN ('S', '1', ")
        _T("'2', '3') then 1 else 0 end as tongcong")
        _T("   FROM hms_operation")
        _T("   LEFT JOIN hms_fee_list on (hfl_feeid = ho_itemid) ")
        _T("   LEFT JOIN hms_clinical_record ON(hcr_docno=ho_docno and ")
        _T("hcr_patientno=ho_patientno)")
        _T("   WHERE ho_status in('A','T') and ho_performdate BETWEEN ")
        _T("TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND ")
        _T("TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T("   AND ho_pdeptid NOT IN('PTTYC') AND NVL(hfl_categoryid, 0) <> ")
        _T("'500' and nvl(hfl_tyc,'N') <> 'TYC'  ")
        _T("   ORDER BY ho_performdate")
        _T(" ) tbl")
        _T(" WHERE tongcong > 0")
        _T(" GROUP BY ho_deptid")
        _T(" ORDER BY ho_deptid"),
        m_szFromDate, m_szToDate);

    //_fmsg(_T("%s"), szSQL);
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        ShowMessageBox(_T("No Data"), MB_OK);
        return;
    }

    rpt.GetReportHeader()->SetValue(_T("HealthService"),
                                    pMF->m_CompanyInfo.sc_pname);
    rpt.GetReportHeader()->SetValue(_T("HospitalName"),
                                    pMF->m_CompanyInfo.sc_name);
    rpt.GetReportHeader()->SetValue(_T("Department"),
                                    pMF->GetDepartmentName(pMF->m_szDept));
    rpt.GetReportHeader()->Format(
        _T("ReportDate"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
    // Page Header
    // Report Detail
    CReportSection *rptDetail;
    int nTotal[13];
    int nIndex = 1;
    for (int i = 0; i < 13; i++)
        nTotal[i] = 0;

    while (!rs.IsEOF())
    {
        rptDetail = rpt.AddDetail();
        rs.GetValue(_T("deptid"), tmpStr);
        rptDetail->SetValue(_T("1"), tmpStr);

        rs.GetValue(_T("c1"), tmpStr);
        nTotal[0] += str2int(tmpStr);
        rptDetail->SetValue(_T("2"), tmpStr);

        rs.GetValue(_T("c2"), tmpStr);
        nTotal[1] += str2int(tmpStr);
        rptDetail->SetValue(_T("3"), tmpStr);

        rs.GetValue(_T("c3"), tmpStr);
        nTotal[2] += str2int(tmpStr);
        rptDetail->SetValue(_T("2.1"), tmpStr);

        rs.GetValue(_T("c4"), tmpStr);
        nTotal[3] += str2int(tmpStr);
        rptDetail->SetValue(_T("3.1"), tmpStr);

        rs.GetValue(_T("c5"), tmpStr);
        nTotal[4] += str2int(tmpStr);
        rptDetail->SetValue(_T("4"), tmpStr);

        rs.GetValue(_T("c6"), tmpStr);
        nTotal[5] += str2int(tmpStr);
        rptDetail->SetValue(_T("5"), tmpStr);

        rs.GetValue(_T("c7"), tmpStr);
        nTotal[6] += str2int(tmpStr);
        rptDetail->SetValue(_T("4.1"), tmpStr);

        rs.GetValue(_T("c8"), tmpStr);
        nTotal[7] += str2int(tmpStr);
        rptDetail->SetValue(_T("5.1"), tmpStr);

        rs.GetValue(_T("c9"), tmpStr);
        nTotal[8] += str2int(tmpStr);
        rptDetail->SetValue(_T("6"), tmpStr);

        rs.GetValue(_T("c10"), tmpStr);
        nTotal[9] += str2int(tmpStr);
        rptDetail->SetValue(_T("7"), tmpStr);

        rs.GetValue(_T("c11"), tmpStr);
        nTotal[10] += str2int(tmpStr);
        rptDetail->SetValue(_T("6.1"), tmpStr);

        rs.GetValue(_T("c12"), tmpStr);
        nTotal[11] += str2int(tmpStr);
        rptDetail->SetValue(_T("7.1"), tmpStr);

        rs.GetValue(_T("tongcong"), tmpStr);
        nTotal[12] += str2int(tmpStr);
        rptDetail->SetValue(_T("8"), tmpStr);
        rs.MoveNext();
    }
    if (nTotal[12] > 0)
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
        rptDetail->SetValue(_T("s2"), int2str(nTotal[0]));
        rptDetail->SetValue(_T("s3"), int2str(nTotal[1]));
        rptDetail->SetValue(_T("s2.1"), int2str(nTotal[2]));
        rptDetail->SetValue(_T("s3.1"), int2str(nTotal[3]));
        rptDetail->SetValue(_T("s4"), int2str(nTotal[4]));
        rptDetail->SetValue(_T("s5"), int2str(nTotal[5]));
        rptDetail->SetValue(_T("s4.1"), int2str(nTotal[6]));
        rptDetail->SetValue(_T("s5.1"), int2str(nTotal[7]));
        rptDetail->SetValue(_T("s6"), int2str(nTotal[8]));
        rptDetail->SetValue(_T("s7"), int2str(nTotal[9]));
        rptDetail->SetValue(_T("s6.1"), int2str(nTotal[10]));
        rptDetail->SetValue(_T("s7.1"), int2str(nTotal[11]));
        rptDetail->SetValue(_T("s8"), int2str(nTotal[12]));
    }
    // Page Footer
    // Report Footer
    CDate sysDate;
    sysDate.ParseDate(pMF->GetSysDate());
    rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(),
                                  sysDate.GetMonth(), sysDate.GetYear());

    EndWaitCursor();
    rpt.PrintPreview();
}
void CHMSGeneralSurgeryReportDialog::OnTonghopmokythuatcao()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    static CReport rpt;
    CString tmpStr;
    if (!rpt.Init(_T("Reports/HMS/PTTT/RPT_PHANLOAI_MO_KTC.RPT")))
    {
        // ShowMessageBox(_T("Can not open file report"), MB_OK);
        return;
    }

    CString szSQL;
    CRecord rs(&pMF->m_db);

    UpdateData(true);
    BeginWaitCursor();
    /*szSQL.Format(_T(" SELECT (select  hho_name FROM hms_hitech_operation WHERE
hho_idx=hitech_operation) as name ,") \
_T(" 	sum(surgery) as totalsurgery") \
_T(" FROM (") \
_T(" 	SELECT hsd_subcategory as hitech_operation, 1 as surgery") \
_T(" 	FROM hms_surgery_detail") \
_T(" 	WHERE hsd_status ='A' and date(hsd_date) between date('%s')  and
date('%s') ") \
_T(" 		and hsd_subcategory > 0 hsd_deptid ='%s'") \
_T(" 	ORDER BY hsd_date") \
_T(" ) as tbl") \
_T(" GROUP BY name") \
_T(" ORDER BY name"), m_szFromDate, m_szToDate, pMF->m_szDepartment);*/

    szSQL.Format(
        _T(" SELECT hho_name as name,")
        _T(" 	     sum(surgery) as totalsurgery")
        _T(" FROM")
        _T(" (")
        _T(" 	SELECT ho_subcategory as hitech_operation,")
        _T("          1 as surgery")
        _T(" 	FROM hms_operation")
        _T(" 	WHERE ho_status in('A','T') and ho_performdate BETWEEN ")
        _T("TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND ")
        _T("TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
        _T(" 		    and ho_subcategory > 0 and ho_pdeptid='%s'")
        _T("    AND ho_pdeptid NOT IN('PTTYC')")
        _T(" 	ORDER BY ho_performdate")
        _T(" ) tbl")
        _T(" LEFT JOIN hms_hitech_operation ON(hho_idx=hitech_operation)")
        _T(" GROUP BY hho_name")
        _T(" ORDER BY hho_name"),
        m_szFromDate, m_szToDate, pMF->m_szDepartment);

    //_fmsg(_T("%s"), szSQL);
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        ShowMessageBox(_T("No Data"), MB_OK);
        return;
    }

    rpt.GetReportHeader()->SetValue(_T("HealthService"),
                                    pMF->m_CompanyInfo.sc_pname);
    rpt.GetReportHeader()->SetValue(_T("HospitalName"),
                                    pMF->m_CompanyInfo.sc_name);
    rpt.GetReportHeader()->SetValue(_T("Department"),
                                    pMF->GetDepartmentName(pMF->m_szDept));
    rpt.GetReportHeader()->Format(
        _T("ReportDate"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
    // Page Header
    // Report Detail
    CReportSection *rptDetail;
    long nTotal;
    int nIndex = 1;

    nTotal = 0;
    nIndex = 1;
    while (!rs.IsEOF())
    {

        rptDetail = rpt.AddDetail();
        tmpStr.Format(_T("%d"), nIndex++);
        rptDetail->SetValue(_T("1"), tmpStr);
        rs.GetValue(_T("name"), tmpStr);
        rptDetail->SetValue(_T("2"), tmpStr);
        rs.GetValue(_T("totalsurgery"), tmpStr);
        nTotal += str2int(tmpStr);
        rptDetail->SetValue(_T("3"), tmpStr);
        rs.MoveNext();
    }

    CDate sysDate;
    sysDate.ParseDate(pMF->GetSysDate());
    rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(),
                                  sysDate.GetMonth(), sysDate.GetYear());

    EndWaitCursor();
    rpt.PrintPreview();
}

void CHMSGeneralSurgeryReportDialog::OnTonghopphuongphapvocam()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    static CReport rpt;
    CString tmpStr;
    int nTemp = 0;
    if (!rpt.Init(_T("Reports/HMS/PTTT/RPT_TONGHOP_PHUONGPHA_VOCAM.RPT")))
    {
        // ShowMessageBox(_T("Can not open file report"), MB_OK);
        return;
    }

    CString szSQL;
    CRecord rs(&pMF->m_db);

    UpdateData(true);

    BeginWaitCursor();
    /*szSQL.Format(_T(" SELECT (select ham_name from hms_anesthesia_method where
ham_idx=anes_method) as name,") \
_T(" 	sum(surgery) as totalsurgery,") \
_T(" 	sum(goodresult) as good,") \
_T(" 	sum(sideeffectresult) as sideeffect,") \
_T(" 	sum(dieresult) as die") \
_T(" FROM (") \
_T(" 	SELECT hsd_anes_method as anes_method, 1 as surgery,") \
_T(" 		case when hsd_anes_result=1 then 1 else 0 end as goodresult,") \
_T(" 		case when hsd_anes_result=2 then 1 else 0 end as sideeffectresult,")
\
_T(" 		case when hsd_anes_result=3 then 1 else 0 end as dieresult") \
_T(" 	FROM hms_surgery_detail") \7
_T(" 	WHERE hsd_status ='A' and date(hsd_date) between date('%s')  and
date('%s') ") \
_T(" ) as tbl") \
_T(" GROUP BY anes_method, name") \
_T(" ORDER BY anes_method"), m_szFromDate, m_szToDate);*/

    szSQL.Format(
        _T(" SELECT ham_name as name,")
        _T("        sum(goodresult + sideeffectresult + dieresult) as ")
        _T("totalsurgery,")
        _T(" 	     sum(goodresult) as good,")
        _T(" 	     sum(sideeffectresult) as sideeffect,")
        _T(" 	     sum(dieresult) as die")
        _T(" FROM")
        _T(" (")
        _T(" 	SELECT ho_anes_method as anes_method,")
        _T("          1 as surgery,")
        _T(" 		     case when ho_anes_result=1 then 1 else 0 end as ")
        _T("goodresult,")
        _T(" 		     case when ho_anes_result=2 then 1 else 0 end as ")
        _T("sideeffectresult,")
        _T(" 		     case when ho_anes_result=3 then 1 else 0 end as ")
        _T("dieresult")
        _T(" 	FROM hms_operation")
        _T("    LEFT JOIN hms_fee_list on (hfl_feeid= ho_itemid) ")
        _T(" 	WHERE coalesce(ho_anes_method, 0) > 0 AND ho_status ")
        _T("in('A','T') AND substr(hfl_groupid, 1, 2) IN ('B4', 'B5') AND ")
        _T("hfl_groupid not in ('B5000', 'B5500', 'B4000') and ho_performdate ")
        _T("BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND ")
        _T("TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T("    AND ho_pdeptid NOT IN('PTTYC') AND NVL(hfl_categoryid, 0) <> ")
        _T("'500' and nvl(hfl_tyc,'N') <> 'TYC' ")
        _T(" ) tbl")
        _T(" LEFT JOIN hms_anesthesia_method ON(ham_idx=anes_method)")
        _T(" GROUP BY anes_method, ham_name")
        _T(" ORDER BY anes_method"),
        m_szFromDate, m_szToDate);

    //_msg(_T("%s"), szSQL);
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        ShowMessageBox(_T("No Data"), MB_OK);
        return;
    }

    rpt.GetReportHeader()->SetValue(_T("HealthService"),
                                    pMF->m_CompanyInfo.sc_pname);
    rpt.GetReportHeader()->SetValue(_T("HospitalName"),
                                    pMF->m_CompanyInfo.sc_name);
    rpt.GetReportHeader()->SetValue(_T("Department"),
                                    pMF->GetDepartmentName(pMF->m_szDept));
    rpt.GetReportHeader()->Format(
        _T("ReportDate"),
        CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
        CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
    // Page Header
    // Report Detail
    CReportSection *rptDetail;
    int nTotal[4];
    int nIndex = 1;
    for (int i = 0; i < 4; i++)
        nTotal[i] = 0;

    while (!rs.IsEOF())
    {
        rptDetail = rpt.AddDetail();
        rs.GetValue(_T("name"), tmpStr);
        rptDetail->SetValue(_T("1"), tmpStr);
        rs.GetValue(_T("totalsurgery"), nTemp);
        nTotal[0] += nTemp;
        rptDetail->SetValue(_T("2"), int2str(nTemp));
        rs.GetValue(_T("good"), nTemp);
        nTotal[1] += nTemp;
        rptDetail->SetValue(_T("3"), int2str(nTemp));
        rs.GetValue(_T("sideeffect"), nTemp);
        nTotal[2] += nTemp;
        rptDetail->SetValue(_T("4"), int2str(nTemp));
        nTotal[3] += nTemp;
        rptDetail->SetValue(_T("5"), int2str(nTemp));
        rs.MoveNext();
    }
    if (nTotal[0] > 0)
    {
        rptDetail = rpt.AddDetail();
        rptDetail->SetValue(_T("1"), _T("T\x1ED5ng \x63\x1ED9ng"));
        for (int i = 0; i < 4; i++)
        {
            tmpStr.Format(_T("%d"), i + 2);
            rptDetail->SetValue(tmpStr, int2str(nTotal[i]));
        }
    }

    // Page Footer
    // Report Footer
    CDate sysDate;
    sysDate.ParseDate(pMF->GetSysDate());
    rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(),
                                  sysDate.GetMonth(), sysDate.GetYear());

    EndWaitCursor();
    rpt.PrintPreview();
}
void CHMSGeneralSurgeryReportDialog::OnExportSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSGeneralSurgeryReportDialog::OnCloseSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CGuiDialog::OnCancel();
}
int CHMSGeneralSurgeryReportDialog::OnAddHMSGeneralSurgeryReportDialog()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CHMSGeneralSurgeryReportDialog::OnEditHMSGeneralSurgeryReportDialog()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CHMSGeneralSurgeryReportDialog::OnDeleteHMSGeneralSurgeryReportDialog()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return -1;
    szSQL.Format(_T("DELETE FROM  WHERE  AND"));
    int ret = pMF->ExecSQL(szSQL);
    if (ret >= 0)
    {
        SetMode(VM_NONE);
        OnCancelHMSGeneralSurgeryReportDialog();
    }
    return 0;
}
int CHMSGeneralSurgeryReportDialog::OnSaveHMSGeneralSurgeryReportDialog()
{
    if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
        return -1;
    if (!IsValidateData())
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
        // OnHMSGeneralSurgeryReportDialogListLoadData();
        SetMode(VM_VIEW);
    }
    else
    {
    }
    return ret;
    return 0;
}
int CHMSGeneralSurgeryReportDialog::OnCancelHMSGeneralSurgeryReportDialog()
{
    if (GetMode() == VM_EDIT)
    {
        SetMode(VM_VIEW);
    }
    else
    {
        SetMode(VM_NONE);
    }
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSGeneralSurgeryReportDialog::
    OnHMSGeneralSurgeryReportDialogListLoadData()
{
    return 0;
}
