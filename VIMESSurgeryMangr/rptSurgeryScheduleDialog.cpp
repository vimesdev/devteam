#include "rptSurgeryScheduleDialog.h"
#include "Excel.h"
#include "MainFrm.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CrptSurgeryScheduleDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CrptSurgeryScheduleDialog *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CrptSurgeryScheduleDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CrptSurgeryScheduleDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CrptSurgeryScheduleDialog *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CrptSurgeryScheduleDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnToDateCheckValue();
}
static void _OnPrintSelectFnc(CWnd *pWnd)
{
    CrptSurgeryScheduleDialog *pVw = (CrptSurgeryScheduleDialog *)pWnd;
    pVw->OnPrintSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd)
{
    CrptSurgeryScheduleDialog *pVw = (CrptSurgeryScheduleDialog *)pWnd;
    pVw->OnExportSelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd)
{
    CrptSurgeryScheduleDialog *pVw = (CrptSurgeryScheduleDialog *)pWnd;
    pVw->OnCloseSelect();
}
static long _OnDeptListLoadDataFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnDeptListLoadData();
}
static void _OnDeptListDblClickFnc(CWnd *pWnd)
{
    ((CrptSurgeryScheduleDialog *)pWnd)->OnDeptListDblClick();
}
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    ((CrptSurgeryScheduleDialog *)pWnd)
        ->OnDeptListSelectChange(nOldItem, nNewItem);
}
static int _OnDeptListDeleteItemFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnDeptListDeleteItem();
}
static long _OnTableListLoadDataFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnTableListLoadData();
}
static void _OnTableListDblClickFnc(CWnd *pWnd)
{
    ((CrptSurgeryScheduleDialog *)pWnd)->OnTableListDblClick();
}
static void _OnTableListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    ((CrptSurgeryScheduleDialog *)pWnd)
        ->OnTableListSelectChange(nOldItem, nNewItem);
}
static int _OnTableListDeleteItemFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnTableListDeleteItem();
}

static void _OnTerminatedSelectFnc(CWnd *pWnd)
{
    ((CrptSurgeryScheduleDialog *)pWnd)->OnTerminatedSelect();
}

static int _OnAddrptSurgeryScheduleDialogFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnAddrptSurgeryScheduleDialog();
}
static int _OnEditrptSurgeryScheduleDialogFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)
        ->OnEditrptSurgeryScheduleDialog();
}
static int _OnDeleterptSurgeryScheduleDialogFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)
        ->OnDeleterptSurgeryScheduleDialog();
}
static int _OnSaverptSurgeryScheduleDialogFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)
        ->OnSaverptSurgeryScheduleDialog();
}
static int _OnCancelrptSurgeryScheduleDialogFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)
        ->OnCancelrptSurgeryScheduleDialog();
}

static int _OnDeptCheckAllFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnDeptCheckAll();
}

static int _OnDeptUncheckAllFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnDeptUncheckAll();
}

static int _OnTableCheckAllFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnTableCheckAll();
}

static int _OnTableUncheckAllFnc(CWnd *pWnd)
{
    return ((CrptSurgeryScheduleDialog *)pWnd)->OnTableUncheckAll();
}

CrptSurgeryScheduleDialog::CrptSurgeryScheduleDialog(CWnd *pParent)
    : CGuiDialog(pParent)
{

    m_nDlgWidth = 450;
    m_nDlgHeight = 600;
    SetDefaultValues();
}
CrptSurgeryScheduleDialog::~CrptSurgeryScheduleDialog() {}
void CrptSurgeryScheduleDialog::OnCreateComponents()
{
    m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 440, 560);
    m_wndDeptInfo.Create(this, _T("Dept"), 10, 60, 435, 315);
    m_wndTableInfo.Create(this, _T("Table"), 10, 320, 435, 555);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
    m_wndFromDate.Create(this, 115, 30, 230, 55);
    // m_wndToDateLabel.Create(this, _T("To Date"), 235, 30, 315, 55);
    // m_wndToDate.Create(this,320, 30, 435, 55);
    m_wndPrint.Create(this, _T("&Print"), 130, 565, 230, 590);
    m_wndExport.Create(this, _T("&Export"), 235, 565, 335, 590);
    m_wndClose.Create(this, _T("&Close"), 340, 565, 440, 590);
    m_wndDeptList.Create(this, 15, 85, 430, 310);
    m_wndTableList.Create(this, 15, 345, 430, 550);

    m_wndTerminated.Create(this, _T("Terminated"), 5, 565, 125, 590);
    m_wndTerminated.EnableWindow(FALSE);
}
void CrptSurgeryScheduleDialog::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndFromDate.SetCheckValue(true);
    // m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    // m_wndToDate.SetCheckValue(true);

    m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
    m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);
    m_wndDeptList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
    m_wndDeptList.SetCheckBox(TRUE);
    m_wndDeptList.ModifyStyle(0, LVS_NOSORTHEADER);

    m_wndTableList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
    m_wndTableList.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);
    m_wndTableList.SetCheckBox(TRUE);
    m_wndTableList.ModifyStyle(0, LVS_NOSORTHEADER);
}
void CrptSurgeryScheduleDialog::OnSetWindowEvents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
    // m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
    // m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
    m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
    // m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
    // m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
    // m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
    // m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
    m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
    m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
    m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
    m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
    m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
    m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
    m_wndTerminated.SetEvent(WE_CLICK, _OnTerminatedSelectFnc);

    m_wndDeptList.SetWindowText(_T("Dept List"));
    m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptCheckAllFnc);
    m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptUncheckAllFnc);

    m_wndTableList.SetEvent(WE_SELCHANGE, _OnTableListSelectChangeFnc);
    m_wndTableList.SetEvent(WE_LOADDATA, _OnTableListLoadDataFnc);
    m_wndTableList.SetEvent(WE_DBLCLICK, _OnTableListDblClickFnc);

    m_wndTableList.SetWindowText(_T("Table"));
    m_wndTableList.AddEvent(1, _T("Check All"), _OnTableCheckAllFnc);
    m_wndTableList.AddEvent(2, _T("UnCheck All"), _OnTableUncheckAllFnc);

    SetMode(VM_EDIT);
    OnDeptListLoadData();
    OnTableListLoadData();

    OnTableUncheckAll();
}
void CrptSurgeryScheduleDialog::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    // DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_Check(pDX, m_wndTerminated.GetDlgCtrlID(), m_bTerminated);
}
void CrptSurgeryScheduleDialog::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT * FROM "));
    rs.ExecSQL(szSQL);
}
void CrptSurgeryScheduleDialog::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CrptSurgeryScheduleDialog::SetDefaultValues()
{

    m_szFromDate.Empty();
    // m_szToDate.Empty();
    m_bTerminated = FALSE;
}
int CrptSurgeryScheduleDialog::SetMode(int nMode)
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
        m_szFromDate = pMF->GetSysDate();
        // m_szToDate = pMF->GetSysDate() + _T("23:59");
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
/*void CrptSurgeryScheduleDialog::OnFromDateChange(){

} */
/*void CrptSurgeryScheduleDialog::OnFromDateSetfocus(){

} */
/*void CrptSurgeryScheduleDialog::OnFromDateKillfocus(){

} */
int CrptSurgeryScheduleDialog::OnFromDateCheckValue() { return 0; }
/*void CrptSurgeryScheduleDialog::OnToDateChange(){

} */
/*void CrptSurgeryScheduleDialog::OnToDateSetfocus(){

} */
/*void CrptSurgeryScheduleDialog::OnToDateKillfocus(){

} */
int CrptSurgeryScheduleDialog::OnToDateCheckValue() { return 0; }
void CrptSurgeryScheduleDialog::OnPrintSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CGuiMenu menu(this);
    CString tmpStr;

    menu.CreatePopupMenu();
    tmpStr.Format(_T("In t?ng h?p"));
    menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("In chi ti?t"));
    menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
    CRect rect;
    m_wndPrint.GetWindowRect(&rect);
    int nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_RIGHTALIGN |
                                       TPM_BOTTOMALIGN | TPM_NONOTIFY,
                                   rect.right, rect.top, this);
    switch (nPos)
    {
    case 1:
        PrintFormat1();
        break;
    case 2:
        PrintFormat2();
        break;
    }
}
void CrptSurgeryScheduleDialog::PrintFormat1()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CReport rpt;
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, tmpStr2, szDate, szReportName;
    int nIndex = 1;
    CString szOldDept, szNewDept;
    CString szOldDeptName, szNewDeptName;
    CString szOldTableName, szNewTableName;
    int nOldTable = -1, nNewTable = -1;
    int nCount = 0, nCount2 = 0;

    szReportName = _T("Reports/HMS/PTTT/SURGERYSCHEDULEPM.RPT");
    if (!rpt.Init(szReportName))
        return;
    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);
    //_msg(_T("%s"),szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        PrintFormat1_V2();
        return;
    }
    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_szHealthService);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
    rpt.GetReportHeader()->SetValue(
        _T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
    szDate.Format(rpt.GetReportHeader()->GetValue(_T("Orderdate")),
                  m_szFromDate.Right(2), m_szFromDate.Mid(5, 2),
                  m_szFromDate.Left(4));
    rpt.GetReportHeader()->SetValue(_T("Orderdate"), szDate);

    CReportSection *rptDetail = NULL, *rptGroup = NULL;
    while (!rs.IsEOF())
    {

        rs.GetValue(_T("deptid"), szNewDept);
        rs.GetValue(_T("deptname"), szNewDeptName);

        if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
            if (rptGroup)
            {
                tmpStr = szNewDeptName;
                rptGroup->SetValue(_T("GroupName"), tmpStr);
            }

            szOldDept = szNewDept;
            szOldDeptName = szNewDeptName;
            nOldTable = -1;
            nIndex = 1;
        }

        rs.GetValue(_T("tableid"), nNewTable);
        rs.GetValue(_T("tablename"), szNewTableName);

        if (nNewTable > 0 && nOldTable != nNewTable)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(2));
            if (rptGroup)
            {
                tmpStr = szNewTableName;
                rptGroup->SetValue(_T("GroupName2"), tmpStr);
            }
            nOldTable = nNewTable;
            nIndex = 1;
        }

        rptDetail = rpt.AddDetail();
        if (rptDetail)
        {
            rptDetail->SetValue(_T("1"), int2str(nIndex++));
            nCount++;
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
            rptDetail->SetValue(_T("3"), rs.GetValue(_T("recordno")));
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("age")));
            rptDetail->SetValue(_T("5"), rs.GetValue(_T("objname")));
            rptDetail->SetValue(_T("6"), rs.GetValue(_T("diagnostic")));
            rptDetail->SetValue(_T("7"), rs.GetValue(_T("itemname")));
            rptDetail->SetValue(_T("8"), rs.GetValue(_T("anesname")));
            rs.GetValue(_T("practitioner"), tmpStr);
            rptDetail->SetValue(_T("9"), pMF->GetDoctorName(tmpStr, true));
            rptDetail->SetValue(_T("10"), rs.GetValue(_T("beforeop")));

            rs.GetValue(_T("antibiotic"), tmpStr2);
            /*if (!tmpStr.IsEmpty())
            {
                if (tmpStr == _T("Y"))
                {
                    tmpStr2.Format(_T("Có"));
                    nCount2++;
                }
                else
                    tmpStr2.Format(_T("Không"));
            }*/

            rptDetail->SetValue(_T("11"), tmpStr2);
            rptDetail->SetValue(_T("13"), rs.GetValue(_T("schedule_date")));
            rptDetail->SetValue(_T("14"), rs.GetValue(_T("tycname")));
            rptDetail->SetValue(_T("15"), rs.GetValue(_T("ref_operation")));
        }
        rs.MoveNext();
    }
    rpt.GetReportHeader()->SetValue(_T("Total"), nCount);
    rpt.GetReportHeader()->SetValue(_T("ksdp"), nCount2);
    szDate = pMF->GetSysDate();
    tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
    EndWaitCursor();
    rpt.PrintPreview();
    PrintFormat1_V2();
}
void CrptSurgeryScheduleDialog::PrintFormat1_V2()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CReport rpt;
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, tmpStr2, szDate, szReportName;
    int nIndex = 1;
    CString szOldDept, szNewDept;
    CString szOldDeptName, szNewDeptName;
    CString szOldTableName, szNewTableName;
    int nOldTable = -1, nNewTable = -1;
    int nCount = 0, nCount2 = 0;

    szReportName = _T("Reports/HMS/PTTT/SURGERYSCHEDULEPM_V2.RPT");
    if (!rpt.Init(szReportName))
        return;
    szSQL = GetQueryString_V2();
    rs.ExecSQL(szSQL);
    //_msg(_T("%s"),szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_szHealthService);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
    rpt.GetReportHeader()->SetValue(
        _T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
    szDate.Format(rpt.GetReportHeader()->GetValue(_T("Orderdate")),
                  m_szFromDate.Right(2), m_szFromDate.Mid(5, 2),
                  m_szFromDate.Left(4));
    rpt.GetReportHeader()->SetValue(_T("Orderdate"), szDate);

    CReportSection *rptDetail = NULL, *rptGroup = NULL;
    while (!rs.IsEOF())
    {

        rs.GetValue(_T("deptid"), szNewDept);
        rs.GetValue(_T("deptname"), szNewDeptName);

        if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
            if (rptGroup)
            {
                tmpStr = szNewDeptName;
                rptGroup->SetValue(_T("GroupName"), tmpStr);
            }

            szOldDept = szNewDept;
            szOldDeptName = szNewDeptName;
            nOldTable = -1;
            nIndex = 1;
        }

        rs.GetValue(_T("tableid"), nNewTable);
        rs.GetValue(_T("tablename"), szNewTableName);

        if (nNewTable > 0 && nOldTable != nNewTable)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(2));
            if (rptGroup)
            {
                tmpStr = szNewTableName;
                rptGroup->SetValue(_T("GroupName2"), tmpStr);
            }
            nOldTable = nNewTable;
            nIndex = 1;
        }

        rptDetail = rpt.AddDetail();
        if (rptDetail)
        {
            rptDetail->SetValue(_T("1"), int2str(nIndex++));
            nCount++;
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
            rptDetail->SetValue(_T("3"), rs.GetValue(_T("recordno")));
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("age")));
            rptDetail->SetValue(_T("5"), rs.GetValue(_T("objname")));
            rptDetail->SetValue(_T("6"), rs.GetValue(_T("diagnostic")));
            rptDetail->SetValue(_T("7"), rs.GetValue(_T("itemname")));
            rptDetail->SetValue(_T("8"), rs.GetValue(_T("anesname")));
            rs.GetValue(_T("practitioner"), tmpStr);
            rptDetail->SetValue(_T("9"), pMF->GetDoctorName(tmpStr, true));
            rptDetail->SetValue(_T("10"), rs.GetValue(_T("beforeop")));

            rs.GetValue(_T("antibiotic"), tmpStr2);
            /*if (!tmpStr.IsEmpty())
            {
                if (tmpStr == _T("Y"))
                {
                    tmpStr2.Format(_T("Có"));
                    nCount2++;
                }
                else
                    tmpStr2.Format(_T("Không"));
            }*/

            rptDetail->SetValue(_T("11"), tmpStr2);
            rptDetail->SetValue(_T("13"), rs.GetValue(_T("schedule_date")));
            rptDetail->SetValue(_T("14"), rs.GetValue(_T("tycname")));
            rptDetail->SetValue(_T("15"), rs.GetValue(_T("ref_operation")));
        }
        rs.MoveNext();
    }
    rpt.GetReportHeader()->SetValue(_T("Total"), nCount);
    rpt.GetReportHeader()->SetValue(_T("ksdp"), nCount2);
    szDate = pMF->GetSysDate();
    tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
    EndWaitCursor();
    rpt.PrintPreview();
}
void CrptSurgeryScheduleDialog::PrintFormat2()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CReport rpt;
    CRecord rs(&pMF->m_db);
    CRecord rss(&pMF->m_db);
    CString szSQL, tmpStr, tmpStr2, szDate, szReportName, szTemp;
    int nIndex = 1;
    CString szOldDept, szNewDept;
    CString szOldDeptName, szNewDeptName;
    CString szOldTableName, szNewTableName;
    int nOldTable = -1, nNewTable = -1;
    int nCount = 0, nCount2 = 0;
    long nDocNo, nOperationID;

    szReportName = _T("Reports/HMS/PTTT/SURGERYSCHEDULEDETAIL.RPT");
    if (!rpt.Init(szReportName))
        return;
    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_szHealthService);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
    rpt.GetReportHeader()->SetValue(
        _T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
    szDate.Format(rpt.GetReportHeader()->GetValue(_T("Orderdate")),
                  m_szFromDate.Right(2), m_szFromDate.Mid(5, 2),
                  m_szFromDate.Left(4));
    rpt.GetReportHeader()->SetValue(_T("Orderdate"), szDate);

    CReportSection *rptDetail = NULL, *rptGroup = NULL;
    while (!rs.IsEOF())
    {

        rs.GetValue(_T("deptid"), szNewDept);
        rs.GetValue(_T("deptname"), szNewDeptName);

        if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
            if (rptGroup)
            {
                tmpStr = szNewDeptName;
                rptGroup->SetValue(_T("GroupName"), tmpStr);
            }

            szOldDept = szNewDept;
            szOldDeptName = szNewDeptName;
            nOldTable = -1;
            nIndex = 1;
        }

        rs.GetValue(_T("tableid"), nNewTable);
        rs.GetValue(_T("tablename"), szNewTableName);

        if (nNewTable > 0 && nOldTable != nNewTable)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(2));
            if (rptGroup)
            {
                tmpStr = szNewTableName;
                rptGroup->SetValue(_T("table"), tmpStr);
            }
            nOldTable = nNewTable;
            nIndex = 1;
        }

        rptDetail = rpt.AddDetail();

        if (rptDetail)
        {
            rs.GetValue(_T("docno"), nDocNo);
            rs.GetValue(_T("idx"), nOperationID);
            rptDetail->SetValue(_T("1"), int2str(nIndex++));
            nCount++;
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
            rptDetail->SetValue(_T("3"), nDocNo);
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("age")));
            rptDetail->SetValue(_T("5"), rs.GetValue(_T("objname")));
            rptDetail->SetValue(_T("6"), rs.GetValue(_T("diagnostic")));
            rptDetail->SetValue(_T("7"), rs.GetValue(_T("anesname")));
            rptDetail->SetValue(_T("8"), rs.GetValue(_T("itemname")));
            rs.GetValue(_T("practitioner"), tmpStr);
            rptDetail->SetValue(_T("9"), pMF->GetDoctorName(tmpStr, true));
            rptDetail->SetValue(_T("10"), rs.GetValue(_T("beforeop")));

            rs.GetValue(_T("antibiotic"), tmpStr2);
            /*if (!tmpStr.IsEmpty())
            {
                if (tmpStr == _T("Y"))
                {
                    tmpStr2.Format(_T("Có"));
                    nCount2++;
                }
                else
                    tmpStr2.Format(_T("Không"));
            }*/

            rptDetail->SetValue(_T("11"), tmpStr2);
            rptDetail->SetValue(_T("12"), rs.GetValue(_T("groupname")));

            szSQL.Format(
                _T(" select mp_name as itemname,")
                _T("        sum(hopm_qtyorder) as qty")
                _T(" from hms_operation")
                _T(" left join hms_op_materialorder on(hopm_docno=ho_docno ")
                _T("and hopm_operation_id=ho_idx)")
                _T(" left join m_product on(mp_product_id=hopm_product_id)")
                _T(" where hopm_docno=%ld and hopm_operation_id=%ld")
                _T(" group by mp_name, mp_producttype")
                _T(" order by mp_producttype"),
                nDocNo, nOperationID);
            rss.ExecSQL(szSQL);

            szTemp.Empty();
            while (!rss.IsEOF())
            {
                tmpStr.Format(_T("%s [%s]"), rss.GetValue(_T("itemname")),
                              rss.GetValue(_T("qty")));

                if (!szTemp.IsEmpty())
                    szTemp += _T(",");

                szTemp.AppendFormat(_T("%s"), tmpStr);

                rss.MoveNext();
            }

            if (!szTemp.IsEmpty())
                rptDetail->SetValue(_T("13"), szTemp);
            rptDetail->SetValue(_T("14"), rs.GetValue(_T("schedule_date")));
            rptDetail->SetValue(_T("15"), rs.GetValue(_T("tycname")));
            rptDetail->SetValue(_T("16"), rs.GetValue(_T("ref_operation")));
        }
        rs.MoveNext();
    }
    rpt.GetReportHeader()->SetValue(_T("Total"), nCount);
    rpt.GetReportHeader()->SetValue(_T("ksdp"), nCount2);
    szDate = pMF->GetSysDate();
    tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
    EndWaitCursor();
    rpt.PrintPreview();
    PrintFormat2_V2();
}

void CrptSurgeryScheduleDialog::PrintFormat2_V2()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    BeginWaitCursor();
    CReport rpt;
    CRecord rs(&pMF->m_db);
    CRecord rss(&pMF->m_db);
    CString szSQL, tmpStr, tmpStr2, szDate, szReportName, szTemp;
    int nIndex = 1;
    CString szOldDept, szNewDept;
    CString szOldDeptName, szNewDeptName;
    CString szOldTableName, szNewTableName;
    int nOldTable = -1, nNewTable = -1;
    int nCount = 0, nCount2 = 0;
    long nDocNo, nOperationID;

    szReportName = _T("Reports/HMS/PTTT/SURGERYSCHEDULEDETAIL_V2.RPT");
    if (!rpt.Init(szReportName))
        return;
    szSQL = GetQueryString_V2();
    rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_szHealthService);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
    rpt.GetReportHeader()->SetValue(
        _T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
    szDate.Format(rpt.GetReportHeader()->GetValue(_T("Orderdate")),
                  m_szFromDate.Right(2), m_szFromDate.Mid(5, 2),
                  m_szFromDate.Left(4));
    rpt.GetReportHeader()->SetValue(_T("Orderdate"), szDate);

    CReportSection *rptDetail = NULL, *rptGroup = NULL;
    while (!rs.IsEOF())
    {

        rs.GetValue(_T("deptid"), szNewDept);
        rs.GetValue(_T("deptname"), szNewDeptName);

        if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
            if (rptGroup)
            {
                tmpStr = szNewDeptName;
                rptGroup->SetValue(_T("GroupName"), tmpStr);
            }

            szOldDept = szNewDept;
            szOldDeptName = szNewDeptName;
            nOldTable = -1;
            nIndex = 1;
        }

        rs.GetValue(_T("tableid"), nNewTable);
        rs.GetValue(_T("tablename"), szNewTableName);

        if (nNewTable > 0 && nOldTable != nNewTable)
        {
            rptGroup = rpt.AddDetail(rpt.GetGroupHeader(2));
            if (rptGroup)
            {
                tmpStr = szNewTableName;
                rptGroup->SetValue(_T("table"), tmpStr);
            }
            nOldTable = nNewTable;
            nIndex = 1;
        }

        rptDetail = rpt.AddDetail();

        if (rptDetail)
        {
            rs.GetValue(_T("docno"), nDocNo);
            rs.GetValue(_T("idx"), nOperationID);
            rptDetail->SetValue(_T("1"), int2str(nIndex++));
            nCount++;
            rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
            rptDetail->SetValue(_T("3"), nDocNo);
            rptDetail->SetValue(_T("4"), rs.GetValue(_T("age")));
            rptDetail->SetValue(_T("5"), rs.GetValue(_T("objname")));
            rptDetail->SetValue(_T("6"), rs.GetValue(_T("diagnostic")));
            rptDetail->SetValue(_T("7"), rs.GetValue(_T("anesname")));
            rptDetail->SetValue(_T("8"), rs.GetValue(_T("itemname")));
            rs.GetValue(_T("practitioner"), tmpStr);
            rptDetail->SetValue(_T("9"), pMF->GetDoctorName(tmpStr, true));
            rptDetail->SetValue(_T("10"), rs.GetValue(_T("beforeop")));

            rs.GetValue(_T("antibiotic"), tmpStr2);
            /*if (!tmpStr.IsEmpty())
            {
                if (tmpStr == _T("Y"))
                {
                    tmpStr2.Format(_T("Có"));
                    nCount2++;
                }
                else
                    tmpStr2.Format(_T("Không"));
            }*/

            rptDetail->SetValue(_T("11"), tmpStr2);
            rptDetail->SetValue(_T("12"), rs.GetValue(_T("groupname")));

            szSQL.Format(
                _T(" select mp_name as itemname,")
                _T("        sum(hopm_qtyorder) as qty")
                _T(" from hms_operation")
                _T(" left join hms_op_materialorder on(hopm_docno=ho_docno ")
                _T("and hopm_operation_id=ho_idx)")
                _T(" left join m_product on(mp_product_id=hopm_product_id)")
                _T(" where hopm_docno=%ld and hopm_operation_id=%ld")
                _T(" group by mp_name, mp_producttype")
                _T(" order by mp_producttype"),
                nDocNo, nOperationID);
            rss.ExecSQL(szSQL);

            szTemp.Empty();
            while (!rss.IsEOF())
            {
                tmpStr.Format(_T("%s [%s]"), rss.GetValue(_T("itemname")),
                              rss.GetValue(_T("qty")));

                if (!szTemp.IsEmpty())
                    szTemp += _T(",");

                szTemp.AppendFormat(_T("%s"), tmpStr);

                rss.MoveNext();
            }

            if (!szTemp.IsEmpty())
                rptDetail->SetValue(_T("13"), szTemp);
            rptDetail->SetValue(_T("14"), rs.GetValue(_T("schedule_date")));
            rptDetail->SetValue(_T("15"), rs.GetValue(_T("tycname")));
            rptDetail->SetValue(_T("16"), rs.GetValue(_T("ref_operation")));
        }
        rs.MoveNext();
    }
    rpt.GetReportHeader()->SetValue(_T("Total"), nCount);
    rpt.GetReportHeader()->SetValue(_T("ksdp"), nCount2);
    szDate = pMF->GetSysDate();
    tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
    EndWaitCursor();
    rpt.PrintPreview();
}

void CrptSurgeryScheduleDialog::OnExportSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(TRUE);

    CExcel xls;
    CRecord rs(&pMF->m_db);
    CRecord rss(&pMF->m_db);

    CString szSQL, tmpStr, szTemp;

    int nCol = 0, nRow = 0;

    BeginWaitCursor();

    szSQL = GetQueryString();
    rs.ExecSQL(szSQL);

    if (rs.IsEOF())
    {
        ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
        return;
    }

    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    xls.SetColumnWidth(0, 10);
    xls.SetColumnWidth(1, 5);

    xls.SetColumnWidth(2, 9);
    xls.SetColumnWidth(3, 10);

    xls.SetColumnWidth(4, 14);
    xls.SetColumnWidth(5, 5);
    xls.SetColumnWidth(6, 10);
    xls.SetColumnWidth(7, 20);
    xls.SetColumnWidth(8, 8);
    xls.SetColumnWidth(9, 27);
    xls.SetColumnWidth(10, 10);
    xls.SetColumnWidth(11, 6);
    xls.SetColumnWidth(12, 6);
    xls.SetColumnWidth(13, 7);
    xls.SetColumnWidth(14, 23);
    xls.SetColumnWidth(15, 24);

    xls.SetRowHeight(4, 40);

    xls.SetCellMergedColumns(nCol, nRow, 4);
    xls.SetCellMergedColumns(nCol, nRow + 1, 4);

    xls.SetCellMergedColumns(nCol, nRow + 2, 15);
    xls.SetCellMergedColumns(nCol, nRow + 3, 15);

    xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname,
                    FMT_TEXT | FMT_CENTER, true, 11);
    xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_name,
                    FMT_TEXT | FMT_CENTER, true, 11);

    xls.SetCellText(nCol, nRow + 2, _T("GIẤY BÁO MỔ"), FMT_TEXT | FMT_CENTER,
                    true, 16);
    tmpStr.Format(_T("Ngày %s tháng %s năm %s"), m_szFromDate.Right(2),
                  m_szFromDate.Mid(5, 2), m_szFromDate.Left(4));
    xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);

    TranslateString(_T("Dept"), tmpStr);
    xls.SetCellText(nCol, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    TranslateString(_T("Index"), tmpStr);
    xls.SetCellText(nCol + 1, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    TranslateString(_T("Document No"), tmpStr);
    xls.SetCellText(nCol + 2, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    TranslateString(_T("Number Inward"), tmpStr);
    xls.SetCellText(nCol + 3, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    TranslateString(_T("Full Name"), tmpStr);
    xls.SetCellText(nCol + 4, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    TranslateString(_T("Age"), tmpStr);
    xls.SetCellText(nCol + 5, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    TranslateString(_T("Object"), tmpStr);
    xls.SetCellText(nCol + 6, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    TranslateString(_T("Diagnostic"), tmpStr);
    xls.SetCellText(nCol + 7, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    TranslateString(_T("Anesthesia Method"), tmpStr);
    xls.SetCellText(nCol + 8, nRow + 4, tmpStr,
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    xls.SetCellText(nCol + 9, nRow + 4, _T("Cách mổ"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    xls.SetCellText(nCol + 10, nRow + 4, _T("PTV"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    xls.SetCellText(nCol + 11, nRow + 4, _T("PL"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    xls.SetCellText(nCol + 12, nRow + 4, _T("KSDP"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    xls.SetCellText(nCol + 13, nRow + 4, _T("PLPT"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    xls.SetCellText(nCol + 14, nRow + 4, _T("Dự trù PT"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);
    xls.SetCellText(nCol + 15, nRow + 4, _T("D?ch v? TYC"),
                    FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                    11);

    nRow = 4;
    int nIndex = 1;
    long nDocNo, nOperationID;
    CString szOldDept, szNewDept;
    CString szOldDeptName, szNewDeptName;
    CString szOldTableName, szNewTableName;
    int nOldTable = -1, nNewTable = -1;
    int nCount = 0;
    int nTmpRow = -1;

    szOldDept.Empty();
    szNewDept.Empty();

    /*CStringArray arrStr;
    arrStr.RemoveAll();*/

    while (!rs.IsEOF())
    {
        rs.GetValue(_T("deptid"), szNewDept);
        rs.GetValue(_T("deptname"), szNewDeptName);

        if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
        {
            if (nCount > 0)
            {
                xls.SetCellMergedRows(nCol, nTmpRow, nCount);
                xls.SetCellText(nCol, nTmpRow, szOldDeptName,
                                FMT_TEXT | FMT_CENTER | FMT_VCENTER |
                                    FMT_WRAPING,
                                true, 11);
                nCount = 0;
                nTmpRow = -1;
            }

            szOldDept = szNewDept;
            szOldDeptName = szNewDeptName;
            nOldTable = -1;
            nIndex = 1;
        }

        rs.GetValue(_T("tableid"), nNewTable);
        rs.GetValue(_T("tablename"), szNewTableName);

        if (nNewTable > 0 && nOldTable != nNewTable)
        {
            ++nRow;
            if (nTmpRow == -1)
                nTmpRow = nRow;

            nCount++;

            xls.SetCellMergedColumns(nCol + 1, nRow, 14);
            xls.SetCellText(nCol + 1, nRow, szNewTableName,
                            FMT_TEXT | FMT_CENTER, true, 11);
            nOldTable = nNewTable;
            nIndex = 1;
        }

        rs.GetValue(_T("docno"), nDocNo);
        rs.GetValue(_T("idx"), nOperationID);

        ++nRow;
        tmpStr.Format(_T("%d"), nIndex++);
        xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

        rs.GetValue(_T("docno"), tmpStr);
        xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

        rs.GetValue(_T("recordno"), tmpStr);
        xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("pname"), tmpStr);
        xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("age"), tmpStr);
        xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("objname"), tmpStr);
        xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("diagnostic"), tmpStr);
        xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("anesname"), tmpStr);
        xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("itemname"), tmpStr);
        xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("tycname"), tmpStr);
        xls.SetCellText(nCol + 15, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        szTemp.Empty();

        rs.GetValue(_T("practitioner"), tmpStr);
        if (!tmpStr.IsEmpty())
            szTemp.Format(_T("%s"), tmpStr);

        rs.GetValue(_T("assistant"), tmpStr);
        if (!tmpStr.IsEmpty())
        {
            if (!szTemp.IsEmpty())
                szTemp += _T(",");
            szTemp.AppendFormat(_T("%s"), tmpStr);
        }

        rs.GetValue(_T("user4"), tmpStr);
        if (!tmpStr.IsEmpty())
        {
            if (!szTemp.IsEmpty())
                szTemp += _T(",");
            szTemp.AppendFormat(_T("%s"), tmpStr);
        }

        if (!szTemp.IsEmpty())
            xls.SetCellText(nCol + 10, nRow, szTemp, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("beforeop"), tmpStr);
        xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        rs.GetValue(_T("antibiotic"), tmpStr);
        if (!tmpStr.IsEmpty())
        {
            if (tmpStr == _T("Y"))
                xls.SetCellText(nCol + 12, nRow, _T("Có"),
                                FMT_TEXT | FMT_WRAPING);
            else
                xls.SetCellText(nCol + 12, nRow, _T("Không"),
                                FMT_TEXT | FMT_WRAPING);
        }

        rs.GetValue(_T("groupname"), tmpStr);
        xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

        szSQL.Format(
            _T(" select mp_name as itemname,")
            _T("        sum(hopm_qtyorder) as qty")
            _T(" from hms_operation")
            _T(" left join hms_op_materialorder on(hopm_docno=ho_docno and ")
            _T("hopm_operation_id=ho_idx)")
            _T(" left join m_product on(mp_product_id=hopm_product_id)")
            _T(" where hopm_docno=%ld and hopm_operation_id=%ld")
            _T(" group by mp_name, mp_producttype")
            _T(" order by mp_producttype"),
            nDocNo, nOperationID);
        rss.ExecSQL(szSQL);

        szTemp.Empty();
        while (!rss.IsEOF())
        {
            tmpStr.Format(_T("%s [%s]"), rss.GetValue(_T("itemname")),
                          rss.GetValue(_T("qty")));

            if (!szTemp.IsEmpty())
                szTemp += _T(",");

            szTemp.AppendFormat(_T("%s"), tmpStr);

            rss.MoveNext();
        }

        if (!szTemp.IsEmpty())
            xls.SetCellText(nCol + 14, nRow, szTemp, FMT_TEXT | FMT_WRAPING);

        nCount++;
        rs.MoveNext();
    }

    if (nCount > 0)
    {
        xls.SetCellMergedRows(nCol, nTmpRow, nCount);
        xls.SetCellText(nCol, nTmpRow, szOldDeptName,
                        FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true,
                        11);
        nCount = 0;
        nTmpRow = -1;
    }

    EndWaitCursor();
    xls.Save(_T("Exports\\GiayBaoMo.xls"));
}
void CrptSurgeryScheduleDialog::OnCloseSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnCancel();
}
void CrptSurgeryScheduleDialog::OnDeptListDblClick() {}
void CrptSurgeryScheduleDialog::OnDeptListSelectChange(int nOldItem,
                                                       int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
int CrptSurgeryScheduleDialog::OnDeptListDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
long CrptSurgeryScheduleDialog::OnDeptListLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    m_wndDeptList.BeginLoad();
    int nCount = 0;

    szSQL.Format(_T(" select sd_id as deptid,")
                 _T("        sd_name as deptname,")
                 _T("        sd_type as depttype")
                 _T(" from sys_dept")
                 _T(" where sd_type in('KB','DT')")
                 _T(" order by sd_type, sd_id"));

    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndDeptList.AddItems(rs.GetValue(_T("deptid")),
                               rs.GetValue(_T("deptname")),
                               rs.GetValue(_T("depttype")), NULL);
        rs.MoveNext();
    }
    m_wndDeptList.EndLoad();
    return nCount;
}
void CrptSurgeryScheduleDialog::OnTableListDblClick() {}
void CrptSurgeryScheduleDialog::OnTableListSelectChange(int nOldItem,
                                                        int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
int CrptSurgeryScheduleDialog::OnTableListDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
long CrptSurgeryScheduleDialog::OnTableListLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    m_wndTableList.BeginLoad();
    int nCount = 0;

    szSQL.Format(_T("select hst_idx as id, ")
                 _T("hst_name as name ")
                 _T("from hms_surgery_table ")
                 _T("order by hst_idx"));

    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndTableList.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                                NULL);
        rs.MoveNext();
    }
    m_wndTableList.EndLoad();
    return nCount;
}

void CrptSurgeryScheduleDialog::OnTerminatedSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}

int CrptSurgeryScheduleDialog::OnAddrptSurgeryScheduleDialog()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CrptSurgeryScheduleDialog::OnEditrptSurgeryScheduleDialog()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CrptSurgeryScheduleDialog::OnDeleterptSurgeryScheduleDialog()
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
        OnCancelrptSurgeryScheduleDialog();
    }
    return 0;
}
int CrptSurgeryScheduleDialog::OnSaverptSurgeryScheduleDialog()
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
        // OnrptSurgeryScheduleDialogListLoadData();
        SetMode(VM_VIEW);
    }
    else
    {
    }
    return ret;
    return 0;
}
int CrptSurgeryScheduleDialog::OnCancelrptSurgeryScheduleDialog()
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
int CrptSurgeryScheduleDialog::OnrptSurgeryScheduleDialogListLoadData()
{
    return 0;
}

CString CrptSurgeryScheduleDialog::GetQueryString()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CString szWhere;
    CString szDepts, szTables;

    for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
    {
        if (m_wndDeptList.GetCheck(i))
        {
            if (!szDepts.IsEmpty())
                szDepts += _T(",");

            szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
        }
    }

    if (!szDepts.IsEmpty())
        szWhere.AppendFormat(_T(" and ho_deptid in(%s) "), szDepts);

    for (int i = 0; i < m_wndTableList.GetItemCount(); i++)
    {
        if (m_wndTableList.GetCheck(i))
        {
            if (!szTables.IsEmpty())
                szTables += _T(",");

            szTables.AppendFormat(_T("%s"), m_wndTableList.GetItemText(i, 0));
        }
    }

    if (!szTables.IsEmpty())
    {
        szWhere.AppendFormat(_T(" and ho_opera_table in(%s) "), szTables);
    }

    // 	if (!m_bTerminated)
    // 		szWhere.AppendFormat(_T(" and ho_status in('S') "));
    // 	else
    // 		szWhere.AppendFormat(_T(" and ho_status not in('O') "));
    szWhere.AppendFormat(_T(" and nvl(hfl_categoryid, '0') <> '501'"));
    szSQL.Format(
        _T(" select ho_deptid as deptid,")
        _T("        sd_name as deptname,")
        _T("        ho_opera_table as tableid,")
        _T("        hst_name as tablename,")
        _T("        ho_docno as docno,")
        _T("        hcr_recordno as recordno,")
        _T("        ho_idx as idx,")
        _T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as ")
        _T("pname,")
        _T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,")
        _T("        ho_desc as objname,")
        _T("        ho_diagnostic as diagnostic,")
        _T("        (select ham_name from hms_anesthesia_method where ")
        _T("ho_anes_method=ham_idx) as anesname,")
        _T("        case when length(ho_comment) > 0 then ho_comment else ")
        _T("hfl_name end as itemname,")
        _T("        LISTAGG(CAST(hoa_descr AS VARCHAR2(1024)), ', ') WITHIN ")
        _T("GROUP (ORDER BY hoa_idx) AS tycname,")
        _T("        ho_practitioner as practitioner,")
        _T("        (select distinct su_name from sys_user where ")
        _T("su_userid=ho_assistant) as assistant,")
        _T("        (select distinct su_name from sys_user where ")
        _T("su_userid=ho_user4) as user4,")
        _T("        (select distinct ss_desc from sys_sel where ")
        _T("ss_id='hms_before_operation' and ss_code=ho_before_optype) as ")
        _T("beforeop,") //_T("        case when NVL(ho_antibiotic, 'X')='Y' then
                        //'Có' when NVL(ho_antibiotic, 'X')='N' then 'Không'
                        //else 'Không dùng b?t k? KS nào' end as antibiotic,")
                        //\//
        _T("        case when NVL(ho_antibiotic, 'X')='Y' then 'Có s? d?ng ")
        _T("KSDP' when NVL(ho_antibiotic, 'X')='N' then 'Không dùng b?t k? KS ")
        _T("nào' when NVL(ho_antibiotic, 'X')='O' then 'S? d?ng KS di?u tr?' ")
        _T("else 'Không' end as antibiotic,")
        _T("        (select distinct hfg_name from hms_fee_group where ")
        _T("hfg_id=substr(ho_itemid,1,5)) as groupname,")
        _T("		to_char(ho_schedule_date, 'dd/mm/yyyy hh24:mi') as ")
        _T("schedule_date,")
        _T("		(select listagg(cast(hfl_name as varchar2(2000)), ")
        _T("chr(13)) within group (order by i.ho_idx) ")
        _T("		from hms_operation i ")
        _T("		left join hms_fee_list on (hfl_feeid = i.ho_itemid)")
        _T("		where i.ho_docno = o.ho_docno and i.ho_reforderid = ")
        _T("o.ho_idx) as ref_operation ")
        _T(" from hms_patient")
        _T(" left join hms_doc on(hp_patientno=hd_patientno)")
        _T(" left join hms_clinical_record on(hcr_docno=hd_docno)")
        _T(" left join hms_object on(ho_id=hd_object)")
        _T(" left join hms_operation o on(ho_docno=hd_docno)")
        _T(" LEFT JOIN hms_op_material ON (ho_matorder_id=hom_op_material_id)")
        _T(" LEFT JOIN HMS_OPERATION_ATTACH ON (ho_docno=hoa_docno and ")
        _T("ho_idx=hoa_idx)")
        _T(" left join hms_fee_list on(hfl_feeid=ho_itemid)")
        _T(" left join sys_dept on(sd_id=ho_deptid)")
        _T(" left join hms_surgery_table on(ho_opera_table=hst_idx)")
        _T(" left join sys_user on(ho_createdby=su_userid)")
        _T(" where ho_pdeptid='B5' and ho_orderdate BETWEEN to_timestamp('%s ")
        _T("00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s ")
        _T("23:59:59', 'YYYY-MM-DD HH24:MI:SS') and su_deptid NOT IN('B5') ")
        _T("AND NVL(hom_status, 'X') = 'S' %s")
        _T(" and ho_deptid NOT IN ('TYC', 'PTTYC')")
        _T(" GROUP BY ho_deptid,")
        _T("   sd_name,")
        _T("   ho_opera_table,")
        _T("   ho_docno,")
        _T("   ho_idx,")
        _T("   hp_surname,")
        _T("   hp_midname,")
        _T("   hp_firstname,")
        _T("   hd_admitdate,")
        _T("   hp_birthdate,")
        _T("   ho_desc,")
        _T("   ho_diagnostic,")
        _T("   ho_comment,")
        _T("   hfl_name,")
        _T("   ho_practitioner,")
        _T("   ho_assistant,")
        _T("   ho_user4,")
        _T("   ho_before_optype,")
        _T("   ho_antibiotic,")
        _T("   hfl_groupid,")
        _T("   ho_startat,")
        _T("   ho_endat,")
        _T("   ho_schedule_date,")
        _T("   ho_anes_method,")
        _T("   ho_opera_index,")
        _T("   hst_name,")
        _T("   hcr_recordno,")
        _T("   ho_opera_table,")
        _T("   sd_type,  ")
        _T("   ho_itemid")
        _T(" order by sd_type, ho_deptid, ho_opera_table, ho_practitioner"),
        m_szFromDate, m_szFromDate, szWhere);
    return szSQL;
}

int CrptSurgeryScheduleDialog::OnDeptCheckAll()
{
    for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
    {
        if (!m_wndDeptList.GetCheck(i))
            m_wndDeptList.SetCheck(i, true);
    }
    return 0;
}

int CrptSurgeryScheduleDialog::OnDeptUncheckAll()
{
    for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
    {
        if (m_wndDeptList.GetCheck(i))
            m_wndDeptList.SetCheck(i, false);
    }
    return 0;
}

int CrptSurgeryScheduleDialog::OnTableCheckAll()
{
    for (int i = 0; i < m_wndTableList.GetItemCount(); i++)
    {
        if (!m_wndTableList.GetCheck(i))
            m_wndTableList.SetCheck(i, true);
    }
    return 0;
}

int CrptSurgeryScheduleDialog::OnTableUncheckAll()
{
    for (int i = 0; i < m_wndTableList.GetItemCount(); i++)
    {
        if (m_wndTableList.GetCheck(i))
            m_wndTableList.SetCheck(i, false);
    }
    return 0;
}
CString CrptSurgeryScheduleDialog::GetQueryString_V2()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CString szWhere;
    CString szDepts, szTables;

    for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
    {
        if (m_wndDeptList.GetCheck(i))
        {
            if (!szDepts.IsEmpty())
                szDepts += _T(",");

            szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
        }
    }

    if (!szDepts.IsEmpty())
        szWhere.AppendFormat(_T(" and ho_deptid in(%s) "), szDepts);

    for (int i = 0; i < m_wndTableList.GetItemCount(); i++)
    {
        if (m_wndTableList.GetCheck(i))
        {
            if (!szTables.IsEmpty())
                szTables += _T(",");

            szTables.AppendFormat(_T("%s"), m_wndTableList.GetItemText(i, 0));
        }
    }

    if (!szTables.IsEmpty())
    {
        szWhere.AppendFormat(_T(" and ho_opera_table in(%s) "), szTables);
    }

    // 	if (!m_bTerminated)
    // 		szWhere.AppendFormat(_T(" and ho_status in('S') "));
    // 	else
    // 		szWhere.AppendFormat(_T(" and ho_status not in('O') "));
    szWhere.AppendFormat(_T(" and nvl(hfl_categoryid, '0') <> '501'"));

    szSQL.Format(
        _T(" SELECT * from")
        _T(" (")
        _T(" SELECT case when su_org_deptid is not null ")
        _T(" then su_org_deptid")
        _T(" else su_deptid end AS deptid,")
        _T(" case when su_org_deptid is not null ")
        _T(" then HMS_GETDEPARTMENTNAME(su_org_deptid)")
        _T(" else HMS_GETDEPARTMENTNAME(su_deptid) end AS deptname,")

        _T("        ho_opera_table as tableid,")
        _T("        hst_name as tablename,")
        _T("        ho_docno as docno,")
        _T("        hcr_recordno as recordno,")
        _T("        ho_idx as idx,")
        _T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as ")
        _T("pname,")
        _T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,")
        _T("        ho_desc as objname,")
        _T("        ho_diagnostic as diagnostic,")
        _T("        (select ham_name from hms_anesthesia_method where ")
        _T("ho_anes_method=ham_idx) as anesname,")
        _T("        case when length(ho_comment) > 0 then ho_comment else ")
        _T("hfl_name end as itemname,")
        _T("        LISTAGG(CAST(hoa_descr AS VARCHAR2(1024)), ', ') WITHIN ")
        _T("GROUP (ORDER BY hoa_idx) AS tycname,")
        _T("        ho_practitioner as practitioner,")
        _T("        (select distinct su_name from sys_user where ")
        _T("su_userid=ho_assistant) as assistant,")
        _T("        (select distinct su_name from sys_user where ")
        _T("su_userid=ho_user4) as user4,")
        _T("        (select distinct ss_desc from sys_sel where ")
        _T("ss_id='hms_before_operation' and ss_code=ho_before_optype) as ")
        _T("beforeop,")
        _T("        case when NVL(ho_antibiotic, 'X')='Y' then 'Có' when ")
        _T("NVL(ho_antibiotic, 'X')='N' then 'Không' else 'Không dùng b?t k? ")
        _T("KS nào' end as antibiotic,")
        _T("        (select distinct hfg_name from hms_fee_group where ")
        _T("hfg_id=substr(ho_itemid,1,5)) as groupname,")
        _T("		to_char(ho_schedule_date, 'dd/mm/yyyy hh24:mi') as ")
        _T("schedule_date,")
        _T("		(select listagg(cast(hfl_name as varchar2(2000)), ")
        _T("chr(13)) within group (order by i.ho_idx) ")
        _T("		from hms_operation i ")
        _T("		left join hms_fee_list on (hfl_feeid = i.ho_itemid)")
        _T("		where i.ho_docno = o.ho_docno and i.ho_reforderid = ")
        _T("o.ho_idx) as ref_operation ")
        _T(" from hms_patient")
        _T(" left join hms_doc on(hp_patientno=hd_patientno)")
        _T(" left join hms_clinical_record on(hcr_docno=hd_docno)")
        _T(" left join hms_object on(ho_id=hd_object)")
        _T(" left join hms_operation o on(ho_docno=hd_docno)")
        _T(" LEFT JOIN hms_op_material ON (ho_matorder_id=hom_op_material_id)")
        _T(" LEFT JOIN HMS_OPERATION_ATTACH ON (ho_docno=hoa_docno and ")
        _T("ho_idx=hoa_idx)")
        _T(" left join hms_fee_list on(hfl_feeid=ho_itemid)")
        _T(" left join sys_dept on(sd_id=ho_deptid)")
        _T(" left join hms_surgery_table on(ho_opera_table=hst_idx)")
        _T(" left join sys_user on(ho_practitioner=su_userid)")
        _T(" where ho_pdeptid='B5' and ho_orderdate BETWEEN to_timestamp('%s ")
        _T("00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s ")
        _T("23:59:59', 'YYYY-MM-DD HH24:MI:SS') and su_deptid NOT IN('B5') ")
        _T("AND NVL(hom_status, 'X') = 'S' %s")
        _T(" and ho_deptid IN ('TYC', 'PTTYC')")
        _T(" GROUP BY su_org_deptid, su_deptid, ")
        _T("   sd_name,")
        _T("   ho_opera_table,")
        _T("   ho_docno,")
        _T("   ho_idx,")
        _T("   hp_surname,")
        _T("   hp_midname,")
        _T("   hp_firstname,")
        _T("   hd_admitdate,")
        _T("   hp_birthdate,")
        _T("   ho_desc,")
        _T("   ho_diagnostic,")
        _T("   ho_comment,")
        _T("   hfl_name,")
        _T("   ho_practitioner,")
        _T("   ho_assistant,")
        _T("   ho_user4,")
        _T("   ho_before_optype,")
        _T("   ho_antibiotic,")
        _T("   hfl_groupid,")
        _T("   ho_startat,")
        _T("   ho_endat,")
        _T("   ho_schedule_date,")
        _T("   ho_anes_method,")
        _T("   ho_opera_index,")
        _T("   hst_name,")
        _T("   hcr_recordno,")
        _T("   ho_opera_table,")
        _T("   sd_type,  ")
        _T("   ho_itemid")
        _T(" )")
        _T(" order by")
        _T(" deptid"),
        m_szFromDate, m_szFromDate, szWhere);
    return szSQL;
}