#include "HMSSpecialExamDialog.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                         int nNewItemSel)
{
    ((CHMSSpecialExamDialog *)pWnd)
        ->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDepartmentSelendokFnc(CWnd *pWnd)
{
    ((CHMSSpecialExamDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSSpecialExamDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    ((CHMSSpecialExamDialog *)pWnd)
        ->OnRoomSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnRoomSelendokFnc(CWnd *pWnd)
{
    ((CHMSSpecialExamDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSSpecialExamDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                       int nNewItemSel)
{
    ((CHMSSpecialExamDialog *)pWnd)
        ->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnExamTypeSelendokFnc(CWnd *pWnd)
{
    ((CHMSSpecialExamDialog *)pWnd)->OnExamTypeSelendok();
}
/*static void _OnExamTypeSetfocusFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnExamTypeKillfocus();
}*/
/*static void _OnExamTypeKillfocusFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnExamTypeKillfocus();
}*/
static long _OnExamTypeLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSSpecialExamDialog *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnExamTypeAddNewFnc(CWnd *pWnd){
    ((CHMSSpecialExamDialog *)pWnd)->OnExamTypeAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd)
{
    CHMSSpecialExamDialog *pVw = (CHMSSpecialExamDialog *)pWnd;
    pVw->OnSaveSelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd)
{
    CHMSSpecialExamDialog *pVw = (CHMSSpecialExamDialog *)pWnd;
    pVw->OnCloseSelect();
}
static int _OnAddHMSSpecialExamDialogFnc(CWnd *pWnd)
{
    return ((CHMSSpecialExamDialog *)pWnd)->OnAddHMSSpecialExamDialog();
}
static int _OnEditHMSSpecialExamDialogFnc(CWnd *pWnd)
{
    return ((CHMSSpecialExamDialog *)pWnd)->OnEditHMSSpecialExamDialog();
}
static int _OnDeleteHMSSpecialExamDialogFnc(CWnd *pWnd)
{
    return ((CHMSSpecialExamDialog *)pWnd)->OnDeleteHMSSpecialExamDialog();
}
static int _OnSaveHMSSpecialExamDialogFnc(CWnd *pWnd)
{
    return ((CHMSSpecialExamDialog *)pWnd)->OnSaveHMSSpecialExamDialog();
}
static int _OnCancelHMSSpecialExamDialogFnc(CWnd *pWnd)
{
    return ((CHMSSpecialExamDialog *)pWnd)->OnCancelHMSSpecialExamDialog();
}
CHMSSpecialExamDialog::CHMSSpecialExamDialog(CWnd *pParent, bool bRequest)
    : CGuiDialog(pParent)
{

    m_nDlgWidth = 380;
    m_nDlgHeight = 155;
    SetDefaultValues();
    m_bRequest = bRequest;
}
CHMSSpecialExamDialog::~CHMSSpecialExamDialog() {}
void CHMSSpecialExamDialog::OnCreateComponents()
{
    m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 370, 120);
    m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 111, 55);
    m_wndDepartment.Create(this, 116, 30, 366, 55);
    m_wndRoomLabel.Create(this, _T("Room"), 10, 60, 111, 85);
    m_wndRoom.Create(this, 116, 60, 366, 85);
    m_wndExamTypeLabel.Create(this, _T("Exam Type"), 10, 90, 111, 115);
    m_wndExamType.Create(this, 116, 90, 366, 115);
    m_wndSave.Create(this, _T("&Save"), 205, 125, 285, 150);
    m_wndClose.Create(this, _T("&Close"), 290, 125, 370, 150);
}
void CHMSSpecialExamDialog::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndDepartment.SetCheckValue(true);
    m_wndDepartment.LimitText(35);
    m_wndRoom.SetCheckValue(true);
    m_wndRoom.LimitText(35);
    m_wndExamType.SetCheckValue(true);
    m_wndExamType.LimitText(35);

    m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

    m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

    m_wndExamType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndExamType.InsertColumn(1, _T(""), CFMT_TEXT, 0);
    m_wndExamType.InsertColumn(2, _T("Description"), CFMT_TEXT, 200);
    m_wndExamType.Format(3, 2);
}
void CHMSSpecialExamDialog::OnSetWindowEvents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
    // m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
    // m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
    m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
    m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
    // m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
    m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
    // m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
    // m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
    m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
    m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
    // m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
    m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
    // m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
    // m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
    m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
    m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
    // m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);
    m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
    m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
    SetMode(VM_ADD);

    if (m_bRequest)
    {
        //		m_wndExamTypeLabel.ShowWindow(SW_HIDE);
        //		m_wndExamType.ShowWindow(SW_HIDE);
    }
}
void CHMSSpecialExamDialog::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
    DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
    DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
}
void CHMSSpecialExamDialog::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT * FROM "));
    rs.ExecSQL(szSQL);
}
void CHMSSpecialExamDialog::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSSpecialExamDialog::SetDefaultValues()
{

    m_szDepartmentKey.Empty();
    m_szRoomKey.Empty();
}
int CHMSSpecialExamDialog::SetMode(int nMode)
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
        EnableButtons(TRUE, 0, 1, -1);
        m_wndRoom.SetFocus();

        SetDefaultValues();
        m_szDepartmentKey = _T("C1.1");

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
    // if(ToInt(m_szExamTypeKey) == 0)
    m_wndExamType.EnableWindow(FALSE);
    // else
    //	m_wndExamType.EnableWindow(false);

    UpdateData(FALSE);
    return nOldMode;
}
void CHMSSpecialExamDialog::OnDepartmentSelectChange(int nOldItemSel,
                                                     int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSSpecialExamDialog::OnDepartmentSelendok()
{
    OnRoomLoadData();
    OnExamTypeLoadData();
}
/*void CHMSSpecialExamDialog::OnDepartmentSetfocus(){

}*/
/*void CHMSSpecialExamDialog::OnDepartmentKillfocus(){

}*/
long CHMSSpecialExamDialog::OnDepartmentLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
    {
        szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
    };
    m_wndDepartment.DeleteAllItems();
    int nCount = 0;
    szWhere.AppendFormat(
        _T(" and sd_id in ('C1.1','C1.3','AB','TYC', 'KB_A4') "));
    szSQL.Format(_T("SELECT sd_id as id, sd_name as name ")
                 _T("FROM sys_dept WHERE sd_type='KB' AND sd_id <> '%s' %s ")
                 _T("ORDER BY sd_id"),
                 pMF->m_UserInfo.su_hms_xdept, szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndDepartment.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                                 NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSSpecialExamDialog::OnDepartmentAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSSpecialExamDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSSpecialExamDialog::OnRoomSelendok() {}
/*void CHMSSpecialExamDialog::OnRoomSetfocus(){

}*/
/*void CHMSSpecialExamDialog::OnRoomKillfocus(){

}*/
long CHMSSpecialExamDialog::OnRoomLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndRoom.IsSearchKey() && str2int(m_szRoomKey) > 0)
    {
        szWhere.Format(_T(" and hrl_id=%d "), str2int(m_szRoomKey));
    };
    m_wndRoom.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name ")
                 _T("FROM hms_roomlist WHERE hrl_deptid='%s' and ")
                 _T("hrl_active='Y' %s ORDER BY hrl_id"),
                 m_szDepartmentKey, szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndRoom.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                           NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSSpecialExamDialog::OnRoomAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSSpecialExamDialog::OnExamTypeSelectChange(int nOldItemSel,
                                                   int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSSpecialExamDialog::OnExamTypeSelendok() {}
/*void CHMSSpecialExamDialog::OnExamTypeSetfocus(){

}*/
/*void CHMSSpecialExamDialog::OnExamTypeKillfocus(){

}*/
long CHMSSpecialExamDialog::OnExamTypeLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndExamType.IsSearchKey() && str2int(m_szExamTypeKey) > 0)
    {
        szWhere.Format(_T(" and hfl_idx=%d "), str2int(m_szExamTypeKey));
    };
    m_wndExamType.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT hfl_idx as idx, hfl_feeid as id, hfl_name as name ")
                 _T("FROM hms_fee_list ")
                 _T("WHERE hfl_typeid='E' and hfl_active='Y'  and (hfl_deptid ")
                 _T("IN('%s', 'GL') or hfl_deptid is null OR hfl_feeid = ")
                 _T("'D0000001') %s ORDER BY hfl_feeid "),
                 m_szDepartmentKey, szWhere);

    //_msg(_T("%s"), szSQL);

    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndExamType.AddItems(rs.GetValue(_T("idx")), rs.GetValue(_T("id")),
                               rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }

    if (m_szDepartmentKey == _T("C1.1"))
    {
        m_szExamTypeKey = _T("1");
    }

    else if (m_szDepartmentKey == _T("C1.3"))
    {
        m_szExamTypeKey = _T("6");
    }

    else if (m_szDepartmentKey == _T("AB"))
    {
        m_szExamTypeKey = _T("37");
    }

    else if (m_szDepartmentKey == _T("TYC"))
    {
        m_szExamTypeKey = _T("14");
    }
    else
    {
        m_szExamTypeKey = _T("1");
    }

    m_wndExamType.SetCurrent(0, m_szExamTypeKey);

    return nCount;
}
/*void CHMSSpecialExamDialog::OnExamTypeAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSSpecialExamDialog::OnSaveSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnSaveHMSSpecialExamDialog();
}
void CHMSSpecialExamDialog::OnCloseSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CGuiDialog::OnCancel();
}
int CHMSSpecialExamDialog::OnAddHMSSpecialExamDialog()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CHMSSpecialExamDialog::OnEditHMSSpecialExamDialog()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CHMSSpecialExamDialog::OnDeleteHMSSpecialExamDialog()
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
        OnCancelHMSSpecialExamDialog();
    }
    return 0;
}
int CHMSSpecialExamDialog::OnSaveHMSSpecialExamDialog()
{
    if (GetMode() != VM_ADD)
        return -1;
    if (!IsValidateData())
        return -1;

    if (m_bRequest)
    {
        CGuiDialog::OnOK();
        return 1;
    }
    if (m_szExamTypeKey.IsEmpty())
    {
        ShowToolTip(&m_wndExamType, _T("Please enter department"));
        return -1;
    }

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szFeeID;
    szFeeID = m_wndExamType.GetCurrent(1);

    // szSQL.Format(_T("HMS_CREATE_SPECIALEXAM(%ld, '%s', %d, '%s', %d, '%s')
    // "), 	pMF->m_nDocumentNo, m_szDepartmentKey, str2int(m_szRoomKey), szFeeID,
    //str2int(m_szExamTypeKey), pMF->GetCurrentUser());

    szSQL.Format(
        _T("HMS_CREATE_SPECIALEXAM(%ld, '%s', %d, '%s', %d, '%s','%s',%d,%d) "),
        pMF->m_nDocumentNo, m_szDepartmentKey, str2int(m_szRoomKey), szFeeID,
        str2int(m_szExamTypeKey), pMF->GetCurrentUser(),
        pMF->GetCurrentDepartmentID(), pMF->m_nRoomID, m_nReceptIdx);
    int ret = str2int(pMF->ExecDML(szSQL));
    if (ret > 0)
    {
        CGuiDialog::OnOK();
    }
    else
    {
        if (ret == -10)
            ShowMessageBox(_T("Exam sheet existed. Cannot create other"));
        else
            ShowMessageBox(_T("Cannot create special examination."));
    }
    return ret;
}
int CHMSSpecialExamDialog::OnCancelHMSSpecialExamDialog()
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
int CHMSSpecialExamDialog::OnHMSSpecialExamDialogListLoadData() { return 0; }
