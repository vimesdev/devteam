#include "HMSDefaultUserSetupDlg.h"
#include "MainFrm.h"
static void _OnRoomSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel)
{
	((CHMSDefaultUserSetupDlg*)pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnRoomSelendokFnc(CWnd* pWnd) {
	((CHMSDefaultUserSetupDlg*)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSDefaultUserSetupDlg *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSDefaultUserSetupDlg *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSDefaultUserSetupDlg *)pWnd)->OnRoomAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSDefaultUserSetupDlg*)pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDoctorSelendokFnc(CWnd* pWnd) {
	((CHMSDefaultUserSetupDlg*)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSDefaultUserSetupDlg *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSDefaultUserSetupDlg *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSDefaultUserSetupDlg *)pWnd)->OnDoctorAddNew();
}*/
static void _OnApplySelectFnc(CWnd* pWnd) {
	CHMSDefaultUserSetupDlg* pVw = (CHMSDefaultUserSetupDlg*)pWnd;
	pVw->OnApplySelect();
}
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CHMSDefaultUserSetupDlg* pVw = (CHMSDefaultUserSetupDlg*)pWnd;
	pVw->OnCloseSelect();
}
static long _OnListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnListLoadData();
}
static void _OnListDblClickFnc(CWnd* pWnd) {
	((CHMSDefaultUserSetupDlg*)pWnd)->OnListDblClick();
}
static void _OnListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSDefaultUserSetupDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnListDeleteItem();
}
static int _OnAddHMSDefaultDoctorSetupDlgFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnAddHMSDefaultDoctorSetupDlg();
}
static int _OnEditHMSDefaultDoctorSetupDlgFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnEditHMSDefaultDoctorSetupDlg();
}
static int _OnDeleteHMSDefaultDoctorSetupDlgFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnDeleteHMSDefaultDoctorSetupDlg();
}
static int _OnSaveHMSDefaultDoctorSetupDlgFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnSaveHMSDefaultDoctorSetupDlg();
}
static int _OnCancelHMSDefaultDoctorSetupDlgFnc(CWnd* pWnd) {
	return ((CHMSDefaultUserSetupDlg*)pWnd)->OnCancelHMSDefaultDoctorSetupDlg();
}
CHMSDefaultUserSetupDlg::CHMSDefaultUserSetupDlg(CWnd* pParent) :
	CGuiDialog(pParent) {

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDefaultUserSetupDlg::~CHMSDefaultUserSetupDlg() {
}
void CHMSDefaultUserSetupDlg::OnCreateComponents()
{
	m_wndDefaultDoctorSetup.Create(this, _T("Thiết lập thông tin ca làm việc"), 5, 5, 639, 315);
	m_wndRoomLabel.Create(this, _T("Room"), 10, 285, 90, 310);
	m_wndRoom.Create(this, 95, 285, 315, 310);
	m_wndDoctorLabel.Create(this, _T("Người phụ"), 320, 285, 400, 310);
	m_wndDoctor.Create(this, 405, 285, 639, 310);
	m_wndApply.Create(this, _T("&Apply"), 474, 320, 554, 345);
	m_wndClose.Create(this, _T("&Close"), 559, 320, 639, 345);
	m_wndList.Create(this, 10, 30, 639, 280);
}
void CHMSDefaultUserSetupDlg::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	//m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoom.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 100);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndDoctor.InsertColumn(2, _T("Chức vụ"), CFMT_TEXT, 100);
	m_wndDoctor.InsertColumn(3, _T("Khoa"), CFMT_TEXT, 100);

	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("Room"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("User ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Tên người phụ"), CFMT_TEXT, 200);

}
void CHMSDefaultUserSetupDlg::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	OnListLoadData();
	SetMode(VM_NONE);

}
void CHMSDefaultUserSetupDlg::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);

}
void CHMSDefaultUserSetupDlg::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hrl_doctorid doctor_id FROM hms_roomlist WHERE hrl_deptid = '%s' AND hrl_id = '%s'")
		, pMF->GetCurrentDepartmentID(), m_szRoomKey);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("doctor_id"), m_szDoctorKey);
		UpdateData(false);
	}
	else
		SetMode(VM_NONE);
}
void CHMSDefaultUserSetupDlg::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSDefaultUserSetupDlg::SetDefaultValues() {

	m_szRoomKey.Empty();
	m_szDoctorKey.Empty();
	m_nRoomID = 0;
}
int CHMSDefaultUserSetupDlg::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
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
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 1, -1);
		m_wndRoom.SetFocus();
		SetDefaultValues();
		break;
	};
	UpdateData(FALSE);
	return nOldMode;
}
void CHMSDefaultUserSetupDlg::OnRoomSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSDefaultUserSetupDlg::OnRoomSelendok() {
	UpdateData(true);
	GetDataToScreen();
}
/*void CHMSDefaultUserSetupDlg::OnRoomSetfocus(){

}*/
/*void CHMSDefaultUserSetupDlg::OnRoomKillfocus(){

}*/
long CHMSDefaultUserSetupDlg::OnRoomLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szRooms;
	if (m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()) {
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}

	szWhere.AppendFormat(_T(" AND hrl_deptid = '%s'"), pMF->GetCurrentDepartmentID());
	/*szRooms.Empty();
	for (int i  =0; i < m_wndList.GetItemCount(); i++)
	{
		int room = str2int(m_wndList.GetItemText(i, 0));
		if(!szRooms.IsEmpty())
			szRooms.AppendFormat(_T(","));
		szRooms.AppendFormat(_T("%d"), room);
	}
	if(!szRooms.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hrl_id not in(%s) "), szRooms);
	}*/
	m_wndRoom.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as khoa ") \
		_T("FROM hms_roomlist ") \
		_T("WHERE 1=1 and HRL_ACTIVE ='Y' %s ORDER BY hrl_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("khoa")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDefaultUserSetupDlg::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSDefaultUserSetupDlg::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSDefaultUserSetupDlg::OnDoctorSelendok() {

}
/*void CHMSDefaultUserSetupDlg::OnDoctorSetfocus(){

}*/
/*void CHMSDefaultUserSetupDlg::OnDoctorKillfocus(){

}*/
long CHMSDefaultUserSetupDlg::OnDoctorLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()) {
		szWhere.Format(_T(" and su_userid='%s' "), m_szDoctorKey);
	}
	szWhere.AppendFormat(_T(" AND (su_deptid = '%s')") \
		_T(" AND su_groupid IN ('O', 'N', 'D', 'P')"), pMF->GetCurrentDepartmentID(), pMF->GetCurrentDepartmentID());
	m_wndDoctor.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, ss_desc as chucvu, su_deptid as khoa FROM sys_user left join sys_sel ON (SU_GROUPID=ss_code AND ss_id='sys_user_group') WHERE 1=1 and su_isactive='Y' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("chucvu")),
			rs.GetValue(_T("khoa")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSDefaultUserSetupDlg::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSDefaultUserSetupDlg::OnApplySelect() {
	if (!IsValidateData())
		return;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szEvent, szDesc, szOldUserID;
	CRecord rs(&pMF->m_db);
	int nRet = 0;
	szSQL.Format(_T("SELECT hrl_doctorid FROM hms_roomlist WHERE hrl_deptid = '%s' AND hrl_id = %s"), pMF->GetCurrentDepartmentID(), m_szRoomKey);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
		rs.GetValue(_T("hrl_doctorid"), szOldUserID);
	szSQL.Format(_T("SET_DEFAULTDOCTOR('%s', '%s', '%s', 0)"), pMF->GetCurrentDepartmentID(), m_szRoomKey, m_szDoctorKey);
	nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet <= 0)
	{
		AfxMessageBox(_T("Fail to apply."));
		return;
	}
	else
	{
		AfxMessageBox(_T("Apply successfully"));
		OnListLoadData();
	}
	if (nRet == 2)
	{
		szEvent.Format(_T("Edit Default Doctor"));
		szDesc.Format(_T("[%s] %s:[%s]->[%s]"), pMF->GetCurrentDepartmentID(), m_szRoomKey, szOldUserID, m_szDoctorKey);
	}
	pMF->SystemLog(szEvent, szDesc);
	SetMode(VM_NONE);
	/*else if (nRet == 3)
	{
		szEvent.Format(_T("Delete Deault Doctor"));
	}*/

}
void CHMSDefaultUserSetupDlg::OnCloseSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
void CHMSDefaultUserSetupDlg::OnListDblClick() {

}
void CHMSDefaultUserSetupDlg::OnListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_szRoomKey = m_wndList.GetItemText(nNewItem, 0);
	m_szDoctorKey = m_wndList.GetItemText(nNewItem, 3);
	UpdateData(false);
}
int CHMSDefaultUserSetupDlg::OnListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	return 0;
}
long CHMSDefaultUserSetupDlg::OnListLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIdx = 1;
	m_wndList.BeginLoad();
	int nCount = 0;
	szSQL.Format(_T(" SELECT hrl_id room, hrl_name room_name, hrl_doctorid userid, get_username(hrl_doctorid) username FROM hms_roomlist ") \
		_T(" WHERE hrl_deptid = '%s' AND hrl_doctorid IS NOT NULL ORDER BY hrl_name")
		, pMF->GetCurrentDepartmentID());
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndList.AddItems(
			rs.GetValue(_T("Room")),
			int2str(nIdx++),
			rs.GetValue(_T("room_name")),
			rs.GetValue(_T("UserID")),
			rs.GetValue(_T("UserName")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;
}

int CHMSDefaultUserSetupDlg::OnAddHMSDefaultDoctorSetupDlg() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSDefaultUserSetupDlg::OnEditHMSDefaultDoctorSetupDlg() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CHMSDefaultUserSetupDlg::OnDeleteHMSDefaultDoctorSetupDlg() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelHMSDefaultDoctorSetupDlg();
	}
	return 0;
}
int CHMSDefaultUserSetupDlg::OnSaveHMSDefaultDoctorSetupDlg() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (GetMode() == VM_ADD) {
		//szSQL = m_tblTbl.GetInsertSQL();
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE"));
		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
		szSQL += szWhere;
	}
	_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
	{
		//OnHMSDefaultDoctorSetupDlgListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSDefaultUserSetupDlg::OnCancelHMSDefaultDoctorSetupDlg() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
int CHMSDefaultUserSetupDlg::OnHMSDefaultDoctorSetupDlgListLoadData() {
	return 0;
}
