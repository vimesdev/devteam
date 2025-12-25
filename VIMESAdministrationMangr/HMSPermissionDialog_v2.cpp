#include "HMSPermissionDialog_v2.h"
#include "HMSSelectionListDialog.h"
#include "HMSSelectionListDialog_v2.h"
#include "MainFrm.h"
#include "StringToken.h"

/*static void _OnExaminationDeptChangeFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationDeptChange();
} */
/*static void _OnExaminationDeptSetfocusFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationDeptSetfocus();} */
/*static void _OnExaminationDeptKillfocusFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationDeptKillfocus();
} */
static int _OnExaminationDeptCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationDeptCheckValue();
}
/*static void _OnExaminationRoomChangeFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationRoomChange();
} */
/*static void _OnExaminationRoomSetfocusFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationRoomSetfocus();} */
/*static void _OnExaminationRoomKillfocusFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationRoomKillfocus();
} */
static int _OnExaminationRoomCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationRoomCheckValue();
}
static void _OnRoomSelectSelectFnc(CWnd *pWnd)
{
    CHMSPermissionDialog_v2 *pVw = (CHMSPermissionDialog_v2 *)pWnd;
    pVw->OnRoomSelectSelect();
}

static void _OnDeptSelectFnc(CWnd *pWnd)
{
    CHMSPermissionDialog_v2 *pVw = (CHMSPermissionDialog_v2 *)pWnd;
    pVw->OnExaminationDeptSelect();
}

/*static void _OnObjectsChangeFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnObjectsChange();
} */
/*static void _OnObjectsSetfocusFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnObjectsSetfocus();} */
/*static void _OnObjectsKillfocusFnc(CWnd *pWnd){
    ((CHMSPermissionDialog_v2 *)pWnd)->OnObjectsKillfocus();
} */

static int _OnObjectsCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnObjectsCheckValue();
}
static void _OnObjectSelectSelectFnc(CWnd *pWnd)
{
    CHMSPermissionDialog_v2 *pVw = (CHMSPermissionDialog_v2 *)pWnd;
    pVw->OnObjectSelectSelect();
}
static void _OnApplySelectFnc(CWnd *pWnd)
{
    CHMSPermissionDialog_v2 *pVw = (CHMSPermissionDialog_v2 *)pWnd;
    pVw->OnApplySelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd)
{
    CHMSPermissionDialog_v2 *pVw = (CHMSPermissionDialog_v2 *)pWnd;
    pVw->OnCloseSelect();
}
static int _OnAddHMSPermissionDialogFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnAddHMSPermissionDialog();
}
static int _OnEditHMSPermissionDialogFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnEditHMSPermissionDialog();
}
static int _OnDeleteHMSPermissionDialogFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnDeleteHMSPermissionDialog();
}
static int _OnSaveHMSPermissionDialogFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnSaveHMSPermissionDialog();
}
static int _OnCancelHMSPermissionDialogFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnCancelHMSPermissionDialog();
}
static long _OnListLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnListLoadData();
}

static int _OnExaminationRoom2CheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPermissionDialog_v2 *)pWnd)->OnExaminationRoom2CheckValue();
}
static void _OnRoom2SelectSelectFnc(CWnd *pWnd)
{
    CHMSPermissionDialog_v2 *pVw = (CHMSPermissionDialog_v2 *)pWnd;
    pVw->OnRoom2SelectSelect();
}

CHMSPermissionDialog_v2::CHMSPermissionDialog_v2(CWnd *pParent)
    : CGuiDialog(pParent)
{

    m_nDlgWidth = 555;
    m_nDlgHeight = 395;
    SetDefaultValues();
}
CHMSPermissionDialog_v2::~CHMSPermissionDialog_v2() {}
void CHMSPermissionDialog_v2::OnCreateComponents()
{
    /*m_wndPermissionInformation.Create(this, _T("Permission Information"), 5,
    5, 545, 450); m_wndExaminationDeptLabel.Create(this, _T("Examination Dept"),
    10, 360, 140, 385); m_wndExaminationDept.Create(this,145, 360, 330, 385);
    m_wndExaminationDeptSelect.Create(this, _T("@"), 335, 360, 360, 385);
    m_wndExaminationRoomLabel.Create(this, _T("Examination Room"), 10, 390, 140,
    415); m_wndExaminationRoom.Create(this,145, 390, 510, 415);
    m_wndRoomSelect.Create(this, _T("@"), 515, 390, 540, 415);
    m_wndObjectsLabel.Create(this, _T("Objects"), 10, 420, 140, 445);
    m_wndObjects.Create(this,145, 420, 510, 445);
    m_wndObjectSelect.Create(this, _T("@"), 515, 420, 540, 445);
    m_wndApply.Create(this, _T("&Apply"), 390, 455, 465, 480);
    m_wndClose.Create(this, _T("&Close"), 470, 455, 545, 480);
    m_wndList.Create(this,10, 30, 540, 355);
    m_wndList.SetCheckBox();*/

    m_wndExaminationDeptLabel.Create(this, _T("Examination Dept"), 10, 360, 140,
                                     385);
    m_wndExaminationDept.Create(this, 145, 360, 330, 385);
    m_wndExaminationDeptSelect.Create(this, _T("@"), 335, 360, 360, 385);
    m_wndExaminationRoomLabel.Create(this, _T("Examination Room"), 10, 390, 140,
                                     415);
    m_wndExaminationRoom.Create(this, 145, 390, 510, 415);
    m_wndPermissionInformation.Create(this, _T("Permission Information"), 5, 5,
                                      544, 478);
    m_wndRoomSelect.Create(this, _T("@"), 515, 390, 540, 415);
    m_wndExaminationRoom2Label.Create(this, _T("Phòng khám ***"), 10, 420, 140,
                                      445);
    m_wndExaminationRoom2.Create(this, 145, 420, 510, 445);
    m_wndRoom2Select.Create(this, _T("@"), 514, 420, 539, 445);
    m_wndObjectsLabel.Create(this, _T("Objects"), 10, 450, 140, 475);
    m_wndObjects.Create(this, 145, 450, 510, 475);
    m_wndObjectSelect.Create(this, _T("@"), 514, 450, 539, 475);
    m_wndApply.Create(this, _T("&Apply"), 383, 481, 458, 506);
    m_wndClose.Create(this, _T("&Close"), 463, 481, 538, 506);
    m_wndList.Create(this, 10, 30, 540, 355);
    m_wndList.SetCheckBox();
}
void CHMSPermissionDialog_v2::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndExaminationDept.SetLimitText(12);
    m_wndExaminationDept.SetCheckValue(true);
    m_wndExaminationRoom.SetLimitText(35);
    m_wndObjects.SetLimitText(35);
    m_wndExaminationRoom.SetReadOnly(true);
    m_wndExaminationRoom2.SetReadOnly(true);
    m_wndObjects.SetReadOnly(true);
    // m_wndExaminationDept.SetReadOnly(true);

    m_wndList.InsertColumn(0, _T("Module ID"), CFMT_TEXT, 80);
    m_wndList.InsertColumn(1, _T("Module Name"), CFMT_TEXT, 400);
    m_wndList.InsertColumn(2, _T("Permission Column"), CFMT_TEXT, 0);

    m_sys_userTbl.SetTableName(_T("sys_user"));
    m_sys_userTbl.AddField(_T("su_userid"), dfText, 15);
    m_sys_userTbl.AddField(_T("su_hms_xdept"), dfText, 7);
    m_sys_userTbl.AddField(_T("su_hms_xdepts"), dfText, 250);
    m_sys_userTbl.AddField(_T("su_hms_xroom"), dfText, 35);
    m_sys_userTbl.AddField(_T("su_hms_xroom2"), dfText, 35);
    m_sys_userTbl.AddField(_T("su_hms_xobject"), dfText, 35);
}

void CHMSPermissionDialog_v2::OnSetWindowEvents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // m_wndExaminationDept.SetEvent(WE_CHANGE, _OnExaminationDeptChangeFnc);
    // m_wndExaminationDept.SetEvent(WE_SETFOCUS,
    // _OnExaminationDeptSetfocusFnc);
    // m_wndExaminationDept.SetEvent(WE_KILLFOCUS,
    // _OnExaminationDeptKillfocusFnc);
    m_wndExaminationDept.SetEvent(WE_CHECKVALUE,
                                  _OnExaminationDeptCheckValueFnc);
    // m_wndExaminationRoom.SetEvent(WE_CHANGE, _OnExaminationRoomChangeFnc);
    // m_wndExaminationRoom.SetEvent(WE_SETFOCUS,
    // _OnExaminationRoomSetfocusFnc);
    // m_wndExaminationRoom.SetEvent(WE_KILLFOCUS,
    // _OnExaminationRoomKillfocusFnc);
    m_wndExaminationRoom.SetEvent(WE_CHECKVALUE,
                                  _OnExaminationRoomCheckValueFnc);
    m_wndRoomSelect.SetEvent(WE_CLICK, _OnRoomSelectSelectFnc);
    // m_wndObjects.SetEvent(WE_CHANGE, _OnObjectsChangeFnc);
    // m_wndObjects.SetEvent(WE_SETFOCUS, _OnObjectsSetfocusFnc);
    // m_wndObjects.SetEvent(WE_KILLFOCUS, _OnObjectsKillfocusFnc);

    m_wndExaminationDeptSelect.SetEvent(WE_CLICK, _OnDeptSelectFnc);

    m_wndObjects.SetEvent(WE_CHECKVALUE, _OnObjectsCheckValueFnc);
    m_wndObjectSelect.SetEvent(WE_CLICK, _OnObjectSelectSelectFnc);

    m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);

    m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
    m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

    m_wndExaminationRoom2.SetEvent(WE_CHECKVALUE,
                                   _OnExaminationRoom2CheckValueFnc);
    m_wndRoom2Select.SetEvent(WE_CLICK, _OnRoom2SelectSelectFnc);

    GetDataToScreen();
    OnListLoadData();
}
void CHMSPermissionDialog_v2::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_Text(pDX, m_wndExaminationDept.GetDlgCtrlID(), m_szExaminationDept);
    DDX_Text(pDX, m_wndExaminationRoom.GetDlgCtrlID(), m_szExaminationRoom);
    DDX_Text(pDX, m_wndExaminationRoom2.GetDlgCtrlID(), m_szExaminationRoom2);
    DDX_Text(pDX, m_wndObjects.GetDlgCtrlID(), m_szObjects);
}
void CHMSPermissionDialog_v2::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(
        _T("SELECT * FROM sys_user WHERE lower(su_userid) = lower('%s') "),
        m_szUserID);
    rs.ExecSQL(szSQL);
    SetDefaultValues();
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("su_hms_xdept"), m_szExaminationDept);
        rs.GetValue(_T("su_hms_xdepts"), m_szExaminationDeptX);
        rs.GetValue(_T("su_hms_xroom"), m_szExaminationRoom);
        rs.GetValue(_T("su_hms_xroom2"), m_szExaminationRoom2);
        rs.GetValue(_T("su_hms_xobject"), m_szObjects);
    }
    SetMode(VM_EDIT);
}

void CHMSPermissionDialog_v2::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_sys_userTbl.SetValue(_T("su_userid"), m_szUserID);
    m_sys_userTbl.SetValue(_T("su_hms_xdept"), m_szExaminationDept);
    m_sys_userTbl.SetValue(_T("su_hms_xdepts"), m_szExaminationDeptX);
    m_sys_userTbl.SetValue(_T("su_hms_xroom"), m_szExaminationRoom);
    m_sys_userTbl.SetValue(_T("su_hms_xroom2"), m_szExaminationRoom2);
    m_sys_userTbl.SetValue(_T("su_hms_xobject"), m_szObjects);
}

void CHMSPermissionDialog_v2::SetDefaultValues()
{
    m_szExaminationDept.Empty();
    m_szExaminationDeptX.Empty();
    m_szExaminationRoom.Empty();
    m_szExaminationRoom2.Empty();
    m_szObjects.Empty();
}

int CHMSPermissionDialog_v2::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiDialog::SetMode(nMode);
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    switch (nMode)
    {
    case VM_ADD:
        EnableControls(TRUE);
        EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, -1);
        SetDefaultValues();
        break;
    case VM_EDIT:
        EnableControls(TRUE);
        EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, -1);
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

/*void CHMSPermissionDialog_v2::OnExaminationDeptChange(){

} */
/*void CHMSPermissionDialog_v2::OnExaminationDeptSetfocus(){

} */
/*void CHMSPermissionDialog_v2::OnExaminationDeptKillfocus(){

} */
int CHMSPermissionDialog_v2::OnExaminationDeptCheckValue()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    UpdateData(true);
    if (m_szExaminationDept == _T("ALL"))
        return 0;
    szSQL.Format(_T("SELECT count(*) FROM sys_dept WHERE sd_id='%s' "),
                 m_szExaminationDept);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() <= 0)
        return -1;
    return 0;
}

/*void CHMSPermissionDialog_v2::OnExaminationRoomChange(){

} */
/*void CHMSPermissionDialog_v2::OnExaminationRoomSetfocus(){

} */
/*void CHMSPermissionDialog_v2::OnExaminationRoomKillfocus(){

} */
int CHMSPermissionDialog_v2::OnExaminationRoomCheckValue() { return 0; }

void CHMSPermissionDialog_v2::OnRoomSelectSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    if (m_szExaminationDeptX.IsEmpty())
        m_szExaminationDeptX = _T("''");

    szSQL.Format(
        _T("SELECT hrl_id as id, hrl_name as name, HRL_section AS note, ")
        _T("SD_ID_ALIAS as deptid FROM hms_roomlist LEFT JOIN sys_dept ")
        _T("ON(sd_id=hrl_deptid) WHERE (hrl_deptid='%s' OR hrl_deptid IN(%s)) ")
        _T("AND sd_type = 'KB' and NVL(SD_ISACTIVE, 'X') ='Y' and ")
        _T("NVL(hrl_active, 'X') = 'Y' ORDER BY SD_ID_ALIAS, hrl_id "),
        m_szExaminationDept, m_szExaminationDeptX);
    //_msg(_T("%s"), szSQL);
    CHMSSelectionListDialog dlg(this);
    dlg.m_szSQL = szSQL;

    CString szDeptX, szLine;
    szSQL.Format(_T("SELECT su_hms_xroom FROM sys_user WHERE su_userid = '%s'"),
                 m_szUserID);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("su_hms_xroom"), szDeptX);

        CStringToken tk(szDeptX, _T(","));
        for (int i = 0; i < tk.GetSize(); i++)
        {
            tk.GetAt(i, szLine);
            szLine.Replace(_T("'"), _T(""));
            CHMSSelectionListDialog::SELITEM si;
            si.szID = szLine;
            dlg.m_arraySelection.Add(si);
        }
    }

    if (dlg.DoModal() == IDOK)
    {
        m_szExaminationRoom.Empty();
        for (int i = 0; i < dlg.m_arraySelection.GetCount(); i++)
        {
            CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
            if (!m_szExaminationRoom.IsEmpty())
                m_szExaminationRoom += _T(",");
            m_szExaminationRoom.AppendFormat(_T("%s"), si.szID);
        }
        // MessageBox(_T("OK"));
        UpdateData(false);
    }
}

void CHMSPermissionDialog_v2::OnRoom2SelectSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    if (m_szExaminationDeptX.IsEmpty())
        m_szExaminationDeptX = _T("''");

    szSQL.Format(
        _T("SELECT hrl_key as id, hrl_id as roomid, hrl_name as name, ")
        _T("HRL_section AS note, SD_ID_ALIAS as deptid FROM hms_roomlist LEFT ")
        _T("JOIN sys_dept ON(sd_id=hrl_deptid) WHERE (hrl_deptid='%s' OR ")
        _T("hrl_deptid IN(%s)) AND sd_type = 'KB' and NVL(SD_ISACTIVE, 'X') ")
        _T("='Y' and NVL(hrl_active, 'X') = 'Y' ORDER BY SD_ID_ALIAS, hrl_id "),
        m_szExaminationDept, m_szExaminationDeptX);
    //_msg(_T("%s"), szSQL);
    CHMSSelectionListDialog_v2 dlg(this);
    dlg.m_szSQL = szSQL;

    CString szDeptX, szLine;
    szSQL.Format(
        _T("SELECT su_hms_xroom2 FROM sys_user WHERE su_userid = '%s'"),
        m_szUserID);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("su_hms_xroom2"), szDeptX);

        CStringToken tk(szDeptX, _T(","));
        for (int i = 0; i < tk.GetSize(); i++)
        {
            tk.GetAt(i, szLine);
            szLine.Replace(_T("'"), _T(""));
            CHMSSelectionListDialog_v2::SELITEM si;
            si.szID = szLine;
            dlg.m_arraySelection.Add(si);
        }
    }

    if (dlg.DoModal() == IDOK)
    {
        m_szExaminationRoom2.Empty();
        for (int i = 0; i < dlg.m_arraySelection.GetCount(); i++)
        {
            CHMSSelectionListDialog_v2::SELITEM si = dlg.m_arraySelection[i];
            if (!m_szExaminationRoom2.IsEmpty())
                m_szExaminationRoom2 += _T(",");
            m_szExaminationRoom2.AppendFormat(_T("%s"), si.szID);
        }
        // MessageBox(_T("OK"));
        UpdateData(false);
    }
}

#include "StringToken.h"

void CHMSPermissionDialog_v2::OnExaminationDeptSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szWhere;
    CRecord rs(&pMF->m_db);
    /*if (pMF->GetCurrentUser().CompareNoCase(_T("admin")) != 0)
    {
        szWhere.AppendFormat(_T("AND sd_id NOT IN ('C1.2')"));
    };*/

    szSQL.Format(
        _T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 AND ")
        _T("sd_type IN('DT', 'KB', 'HA', 'XN', 'KD', 'HC') %s ORDER BY id "),
        szWhere);
    //_msg(_T("%s"), szSQL);

    CHMSSelectionListDialog dlg(this);
    dlg.m_szSQL = szSQL;

    CString szDeptX, szLine;
    szSQL.Format(
        _T("SELECT su_hms_xdepts FROM sys_user WHERE su_userid = '%s'"),
        m_szUserID);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("su_hms_xdepts"), szDeptX);

        CStringToken tk(szDeptX, _T(","));
        for (int i = 0; i < tk.GetSize(); i++)
        {
            tk.GetAt(i, szLine);
            szLine.Replace(_T("'"), _T(""));
            CHMSSelectionListDialog::SELITEM si;
            si.szID = szLine;
            dlg.m_arraySelection.Add(si);
        }
    }

    if (dlg.DoModal() == IDOK)
    {
        m_szExaminationDeptX.Empty();
        for (int i = 0; i < dlg.m_arraySelection.GetCount(); i++)
        {
            CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
            if (!m_szExaminationDeptX.IsEmpty())
                m_szExaminationDeptX += _T(",");
            m_szExaminationDeptX.AppendFormat(_T("'%s'"), si.szID);
        }

        UpdateData(false);
    }
}

int CHMSPermissionDialog_v2::OnExaminationRoom2CheckValue() { return 0; }

/*void CHMSPermissionDialog_v2::OnObjectsChange(){

} */
/*void CHMSPermissionDialog_v2::OnObjectsSetfocus(){

} */
/*void CHMSPermissionDialog_v2::OnObjectsKillfocus(){

} */
int CHMSPermissionDialog_v2::OnObjectsCheckValue() { return 0; }

void CHMSPermissionDialog_v2::OnObjectSelectSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    szSQL.Format(
        _T("SELECT ho_id as id, ho_desc as name FROM hms_object ORDER BY id "));
    CHMSSelectionListDialog dlg(this);
    dlg.m_szSQL = szSQL;
    if (dlg.DoModal() == IDOK)
    {
        m_szObjects.Empty();
        for (int i = 0; i < dlg.m_arraySelection.GetCount(); i++)
        {
            CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
            if (!m_szObjects.IsEmpty())
                m_szObjects += _T(",");
            m_szObjects.AppendFormat(_T("'%s'"), si.szID);
        }
        UpdateData(false);
    }
}

void CHMSPermissionDialog_v2::OnApplySelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnSaveHMSPermissionDialog();
}

void CHMSPermissionDialog_v2::OnCloseSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnCancel();
}

int CHMSPermissionDialog_v2::OnAddHMSPermissionDialog()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}

int CHMSPermissionDialog_v2::OnEditHMSPermissionDialog()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}

int CHMSPermissionDialog_v2::OnDeleteHMSPermissionDialog()
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
        OnCancelHMSPermissionDialog();
    }
    return 0;
}

int CHMSPermissionDialog_v2::OnSaveHMSPermissionDialog()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    if (GetMode() != VM_EDIT)
        return -1;
    if (!IsValidateData())
        return -1;

    //_msg(_T("%s"), m_szExaminationDept);
    /*if (pMF->GetCurrentUser().CompareNoCase(_T("admin")) != 0 &&
    m_szExaminationDept == _T("C1.2"))
    {
        ShowMessageBox(_T("Liên hệ user admin để thiết lập khoa C1.2"));
        return -1;
    }*/

    CString szSQL, szWhere, tmpStr;
    CDbfMap tblUser;
    tblUser.SetTableName(_T("sys_user"));
    tblUser.AddField(_T("su_userid"), dfText, 15);
    tblUser.AddField(_T("su_hms_xdept"), dfText, 7);
    tblUser.AddField(_T("su_hms_xdepts"), dfText, 250);
    tblUser.AddField(_T("su_hms_xroom"), dfText, 35);
    tblUser.AddField(_T("su_hms_xroom2"), dfText, 35);
    tblUser.AddField(_T("su_hms_xobject"), dfText, 35);

    tblUser.SetValue(_T("su_userid"), m_szUserID);
    tblUser.SetValue(_T("su_hms_xdept"), m_szExaminationDept);
    tblUser.SetValue(_T("su_hms_xdepts"), m_szExaminationDeptX);
    tblUser.SetValue(_T("su_hms_xroom"), m_szExaminationRoom);
    tblUser.SetValue(_T("su_hms_xroom2"), m_szExaminationRoom2);

    tblUser.SetValue(_T("su_hms_xobject"), m_szObjects);
    for (int i = 0; i < m_wndList.GetItemCount(); i++)
    {
        tmpStr = m_wndList.GetItemText(i, 2);
        if (!tmpStr.IsEmpty())
        {
            tblUser.AddField(tmpStr, dfText, 1);
        }
        tblUser.SetValue(tmpStr, m_wndList.GetCheck(i) ? _T("1") : _T("0"));
    }

    szWhere.Format(_T(" WHERE lower(su_userid)=lower('%s') "), m_szUserID);
    szSQL = tblUser.GetUpdateSQL(
        _T("su_userid,su_groupid,su_name,su_password,su_deptid,su_roomid"));
    szSQL += szWhere;
    //_msg(_T("%s"), szSQL);
    int ret = pMF->ExecSQL(szSQL);
    if (ret > 0)
    {
        OnOK();
    }
    else
    {
    }
    return ret;
}

int CHMSPermissionDialog_v2::OnCancelHMSPermissionDialog()
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

int CHMSPermissionDialog_v2::OnHMSPermissionDialogListLoadData() { return 0; }

long CHMSPermissionDialog_v2::OnListLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db), rsl(&pMF->m_db);
    CString szSQL, tmpStr;
    int nItem = 0;
    szSQL.Format(_T("SELECT ss_code as module_id,")
                 _T("       ss_desc as module_name,")
                 _T("       Getpermissioncolumn(ss_code) as permission_column,")
                 _T(" case when ss_code in (select ")
                 _T("regexp_substr(GetModulePermissions('%s'),'[^,]+',1,level)")
                 _T(" as val from dual connect by ")
                 _T("regexp_substr(GetModulePermissions('%s'),'[^,]+',1,level)")
                 _T(" is not null) then 1 else 0 end as flag")
                 _T(" FROM   sys_sel")
                 _T(" WHERE  ss_id = 'sys_module_type'")
                 _T(" ORDER  BY ss_index,ss_code"),
                 m_szUserID, m_szUserID);

    szSQL.Format(_T("SELECT ss_code as module_id,")
                 _T("       ss_desc as module_name,")
                 _T("       Getpermissioncolumn(ss_code) as permission_column")
                 _T(" FROM   sys_sel")
                 _T(" WHERE  ss_id = 'sys_module_type'")
                 _T(" ORDER  BY ss_index,ss_code"));
    rs.ExecSQL(szSQL);
    m_wndList.BeginLoad();
    while (!rs.IsEOF())
    {
        tmpStr = rs.GetValue(_T("permission_column"));
        nItem =
            m_wndList.AddItems(rs.GetValue(_T("module_id")),
                               rs.GetValue(_T("module_name")), tmpStr, NULL);
        szSQL.Format(_T("select %s from sys_user where su_userid = '%s'"),
                     tmpStr.IsEmpty() ? _T("0") : tmpStr, m_szUserID);
        rsl.ExecSQL(szSQL);
        if (rsl.GetStringValue() == _T("1"))
        {
            m_wndList.SetCheck(nItem);
        }
        rs.MoveNext();
    }
    m_wndList.EndLoad();
    return rs.GetRecordCount();
}