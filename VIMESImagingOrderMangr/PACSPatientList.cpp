#include "PACSPatientList.h"
#include "MainFrm.h"
#include "PACSChangProomDialog.h"
static void _OnWaittingSelectFnc(CWnd* pWnd) {
	((CPACSPatientList*)pWnd)->OnWaittingSelect();
}
static void _OnPerformedSelectFnc(CWnd* pWnd) {
	((CPACSPatientList*)pWnd)->OnPerformedSelect();
}
static void _OnDepartmentSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CPACSPatientList*)pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDepartmentSelendokFnc(CWnd* pWnd) {
	((CPACSPatientList*)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateSetfocus();} */
	/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
		((CPACSPatientList *)pWnd)->OnFromDateKillfocus();
	} */
static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateSetfocus();} */
	/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
		((CPACSPatientList *)pWnd)->OnToDateKillfocus();
	} */
static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnToDateCheckValue();
}
static void _OnTypeSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CPACSPatientList*)pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTypeSelendokFnc(CWnd* pWnd) {
	((CPACSPatientList*)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnPatientNameSetfocus();} */
	/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
		((CPACSPatientList *)pWnd)->OnPatientNameKillfocus();
	} */
static int _OnPatientNameCheckValueFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnPatientNameCheckValue();
}
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDocumentNoSetfocus();} */
	/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
		((CPACSPatientList *)pWnd)->OnDocumentNoKillfocus();
	} */
static int _OnDocumentNoCheckValueFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnDocumentNoCheckValue();
}
static void _OnRefreshSelectFnc(CWnd* pWnd) {
	CPACSPatientList* pVw = (CPACSPatientList*)pWnd;
	pVw->OnRefreshSelect();
}
/*static void _OnNumberChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnNumberChange();
} */
/*static void _OnNumberSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnNumberSetfocus();} */
	/*static void _OnNumberKillfocusFnc(CWnd *pWnd){
		((CPACSPatientList *)pWnd)->OnNumberKillfocus();
	} */
static int _OnNumberCheckValueFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnNumberCheckValue();
}
static long _OnListLoadDataFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnListLoadData();
}
static void _OnListDblClickFnc(CWnd* pWnd) {
	((CPACSPatientList*)pWnd)->OnListDblClick();
}
static void _OnListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CPACSPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListDeleteItemFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnListDeleteItem();
}

static int _OnListCallPatientFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnListCallPatient();
}


static int _OnListCancelPendingFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnListCancelPending();
}


static int _OnAddPACSPatientListFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnAddPACSPatientList();
}
static int _OnEditPACSPatientListFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnEditPACSPatientList();
}
static int _OnDeletePACSPatientListFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnDeletePACSPatientList();
}
static int _OnSavePACSPatientListFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnSavePACSPatientList();
}
static int _OnCancelPACSPatientListFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnCancelPACSPatientList();
}

static void _OnLoadByPACSMapSelectFnc(CWnd* pWnd) {
	((CPACSPatientList*)pWnd)->OnLoadByPACSMapSelect();
}
static int _OnExportPatientListSelectFnc(CWnd* pWnd) {
	((CPACSPatientList*)pWnd)->OnExportPatientListSelect();
	return 0;
}

static int _OnListCheckAllFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd* pWnd) {
	return ((CPACSPatientList*)pWnd)->OnListUnCheckAll();
}

static int _OnChangePerformRoomFnc(CWnd* pWnd)
{
	((CPACSPatientList*)pWnd)->OnChangePerformRoom();
	return 0;
}
CPACSPatientList::CPACSPatientList() {

	m_nDlgWidth = 1020;
	m_nDlgHeight = 655;
	SetDefaultValues();
}
CPACSPatientList::~CPACSPatientList() {
}
void CPACSPatientList::OnCreateComponents() {
	m_wndSearchInformation.Create(this, _T("Search Information"), 180, 5, 1015, 90);
	m_wndStatus.Create(this, _T("Status"), 5, 5, 175, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 95, 1015, 440);


	m_wndWaitting.Create(this, _T("Waitting"), 10, 29, 168, 54);
	m_wndPerformed.Create(this, _T("Performed"), 10, 59, 168, 84);
	m_wndDepartmentLabel.Create(this, _T("Room"), 185, 30, 285, 55);
	m_wndDepartment.Create(this, 290, 30, 490, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 495, 30, 595, 55);
	m_wndFromDate.Create(this, 600, 30, 710, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 715, 30, 815, 55);
	m_wndToDate.Create(this, 820, 30, 930, 55);
	m_wndTypeLabel.Create(this, _T("Type"), 185, 60, 285, 85);
	m_wndType.Create(this, 290, 60, 490, 85);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 495, 60, 595, 85);
	m_wndPatientName.Create(this, 600, 60, 710, 85);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 715, 60, 815, 85);
	m_wndDocumentNo.Create(this, 820, 60, 930, 85);
	m_wndRefresh.Create(this, _T("&Refresh"), 935, 60, 1010, 85);
	m_wndNumber.Create(this, 935, 30, 1010, 55);
	m_wndList.Create(this, 10, 120, 1010, 435);
	m_wndList.SetCheckBox(true);
	m_wndLoadByPACSMap.Create(this, _T("Hiển thị theo PACSMAP"), 597, 97, 1010, 120);

	CRect rect;
	m_wndPatientList.GetWindowRect(&rect);
	rect.top = rect.bottom + 5;
	rect.left -= 5;
	rect.bottom = m_wndPendingInfo.GetHeight();
	rect.right += 5;
	ScreenToClient(&rect);
	m_wndPendingInfo.Create(this, rect);
}
void CPACSPatientList::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0, -1);
	//	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(128);
	//	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(128);
	//	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndFromDate.SetNotEmpty(false);
	//	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndToDate.SetNotEmpty(false);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);
	m_wndDocumentNo.SetLimitText(8);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetNotEmpty(false);
	m_wndNumber.SetCurrencyFormat(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	m_wndDepartment.InsertColumn(2, _T("Mã máy"), CFMT_TEXT, 90);
	m_wndDepartment.InsertColumn(3, _T("Khoa"), CFMT_TEXT, 90);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT | CFMT_CENTER, 90);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(3, _T("Nam sinh"), CFMT_TEXT, 65);
	m_wndList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("Adress"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(6, _T("Khoa yêu cầu"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(7, _T("Phòng yêu cầu"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(8, _T("Ngày yêu cầu"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(9, _T("Phòng thực hiện"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(10, _T("Mục chỉ định"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(11, _T("Ghi chú"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(12, _T("Chẩn đoán khi chỉ định"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(13, _T("Số phiếu"), CFMT_TEXT, 90);

	m_wndPendingInfo.m_szDeptID = pMF->m_szDept;


}
void CPACSPatientList::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndWaitting.SetEvent(WE_CLICK, _OnWaittingSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	//m_wndNumber.SetEvent(WE_CHANGE, _OnNumberChangeFnc);
	//m_wndNumber.SetEvent(WE_SETFOCUS, _OnNumberSetfocusFnc);
	//m_wndNumber.SetEvent(WE_KILLFOCUS, _OnNumberKillfocusFnc);
	m_wndNumber.SetEvent(WE_CHECKVALUE, _OnNumberCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndLoadByPACSMap.SetEvent(WE_CLICK, _OnLoadByPACSMapSelectFnc);
	//m_wndList.AddEvent(1, _T("Select"), _OnListSelectItemFnc, 0, VK_RETURN, 0);


	/*m_wndList.AddEvent(1, _T("Call"), _OnListCallPatientFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Cancel Pending"), _OnListCancelPendingFnc);
	*/
	m_wndList.AddEvent(1, _T("Export Danh sách bệnh nhân"), _OnExportPatientListSelectFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(3, _T("UnCheck All"), _OnListUnCheckAllFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Đổi phòng thực hiện"), _OnChangePerformRoomFnc);
	m_szFromDate.Format(_T("%s"), pMF->GetSysDate());
	m_szToDate.Format(_T("%s"), pMF->GetSysDate());
	m_wndPatientName.SetFocus();
	m_wndNumber.EnableWindow(false);
	UpdateData(FALSE);

}
void CPACSPatientList::OnDoDataExchange(CDataExchange* pDX) {
	DDX_Radio(pDX, m_wndWaitting.GetDlgCtrlID(), m_nWaitting);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumber.GetDlgCtrlID(), m_nNumber);
	DDX_Check(pDX, m_wndLoadByPACSMap.GetDlgCtrlID(), m_bLoadByPACSMap);

}
void CPACSPatientList::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSPatientList::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CPACSPatientList::SetDefaultValues() {
	m_nWaitting = 0;
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo = 0;
	m_nNumber = 0;
	m_bLoadByPACSMap = FALSE;
}
int CPACSPatientList::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiView::SetMode(nMode);
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
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 6, -1);
		SetDefaultValues();
		break;
	};

	m_wndNumber.EnableWindow(false);
	UpdateData(FALSE);
	return nOldMode;
}
void CPACSPatientList::OnWaittingSelect() {
	OnListLoadData();
}
void CPACSPatientList::OnPerformedSelect() {
	OnListLoadData();
}
void CPACSPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CPACSPatientList::OnDepartmentSelendok() {
	UpdateData(true);
	m_wndPendingInfo.m_nRoomID = str2int(m_szDepartmentKey);
	m_wndPendingInfo.Refresh();
	OnListLoadData();
}
/*void CPACSPatientList::OnDepartmentSetfocus(){

}*/
/*void CPACSPatientList::OnDepartmentKillfocus(){

}*/
void CPACSPatientList::OnLoadByPACSMapSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnListLoadData();

}
long CPACSPatientList::OnDepartmentLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hrl_id ='%s' "), m_szDepartmentKey);
	};
	szWhere.Format(_T(" AND NVL(HRL_ACTIVE, 'N') ='Y' "));
	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	//szSQL.Format(_T(" SELECT sd_id as id,sd_name as name FROM sys_dept WHERE sd_type IN('DT','KB') %s ORDER BY sd_index "), szWhere);
	if (pMF->m_szZoneID == _T("PTTYC") || !pMF->m_UserInfo.su_hms_xdepts.IsEmpty())
	{
		szSQL.Format(_T(" SELECT hrl_id AS id,") \
			_T("   hrl_name    AS name, ") \
			_T("   hrl_deptid as deptid ") \
			_T(" FROM hms_roomlist") \
			_T(" LEFT JOIN sys_dept") \
			_T(" ON(sd_id                          =hrl_deptid)") \
			_T(" WHERE 1=1") \
			_T(" AND hrl_section                   ='HA'") \
			_T(" AND hrl_active                    ='Y'") \
			_T(" and ((sd_id='%s')") \
			_T(" OR CAST(hrl_id AS NVARCHAR2(3)) IN") \
			_T("   (SELECT                         *") \
			_T("   FROM TABLE") \
			_T("     (SELECT split_str(EX_PERFORMDEPT)") \
			_T("     FROM E_USERPERFORMDEPTPERM") \
			_T("     WHERE EX_USERID='%s'") \
			_T("     )") \
			_T("   ))") \
			_T(" and hrl_deptid ='%s'") \
			_T(" %s ORDER BY hrl_deptid, hrl_id"), pMF->m_szDept, pMF->GetCurrentUser(), pMF->m_szDept, szWhere);
	}
	else
		szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid,  ") \
			_T(" ma_shortname as serialcode") \
			_T(" FROM hms_roomlist LEFT JOIN sys_dept ON(sd_id=hrl_deptid) ") \
			_T(" LEFT JOIN hms_machine_list_for_ins") \
			_T(" ON (hrl_deptid = ma_deptid and hrl_id = ma_roomid )") \
			_T("WHERE (sd_id='%s') and hrl_section='HA' AND hrl_active ='Y' %s ORDER BY hrl_deptid, hrl_id "), pMF->m_szDept, szWhere);

	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF()) {
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("serialcode")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CPACSPatientList::OnFromDateChange(){

} */
/*void CPACSPatientList::OnFromDateSetfocus(){

} */
/*void CPACSPatientList::OnFromDateKillfocus(){

} */
int CPACSPatientList::OnFromDateCheckValue() {
	OnListLoadData();
	return 0;
}
/*void CPACSPatientList::OnToDateChange(){

} */
/*void CPACSPatientList::OnToDateSetfocus(){

} */
/*void CPACSPatientList::OnToDateKillfocus(){

} */
int CPACSPatientList::OnToDateCheckValue() {
	OnListLoadData();
	return 0;
}
void CPACSPatientList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CPACSPatientList::OnTypeSelendok() {

}
/*void CPACSPatientList::OnTypeSetfocus(){

}*/
/*void CPACSPatientList::OnTypeKillfocus(){

}*/
long CPACSPatientList::OnTypeLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()) {
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szTypeKey);
	};
	szWhere.AppendFormat(_T(" and hfg_active = 'Y' and hfg_id in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
	m_wndType.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE (substr(hfg_id, 1, 2) IN('B2','B3') or substr(hfg_id, 1, 3) IN('B1E','B1F','B1H')  ) %s ORDER BY hfg_id"), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndType.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPACSPatientList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CPACSPatientList::OnPatientNameChange(){

} */
/*void CPACSPatientList::OnPatientNameSetfocus(){

} */
/*void CPACSPatientList::OnPatientNameKillfocus(){

} */
int CPACSPatientList::OnPatientNameCheckValue() {
	OnListLoadData();
	return 0;
}
/*void CPACSPatientList::OnDocumentNoChange(){

} */
/*void CPACSPatientList::OnDocumentNoSetfocus(){

} */
/*void CPACSPatientList::OnDocumentNoKillfocus(){

} */

/*void CPACSPatientList::OnNumberChange(){

} */
/*void CPACSPatientList::OnNumberSetfocus(){

} */
/*void CPACSPatientList::OnNumberKillfocus(){

} */
int CPACSPatientList::OnNumberCheckValue() {
	return 0;
}
int CPACSPatientList::OnDocumentNoCheckValue() {
	OnListLoadData();
	return 0;
}
void CPACSPatientList::OnRefreshSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnListLoadData();
}
void CPACSPatientList::OnListDblClick()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	long nDocumentNo = ToLong(m_wndList.GetItemText(nSel, 1));
	pMF->m_wndPatientProfile.LoadData(nDocumentNo);
	pMF->m_wndPatientProfile.OnOrderListLoadData();
	pMF->m_bTabActiveImage = false;
	pMF->SetActivePane(1);

}
void CPACSPatientList::OnListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
//int CPACSPatientList::OnListSelectItem(){
//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	 return 0;
//} 
long CPACSPatientList::OnListLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad();
	int nCount = 0;
	UpdateData(true);

	if (!m_szPatientName.IsEmpty())
	{
	}

	if (m_bLoadByPACSMap)
		//if (m_wndPendingInfo.m_bpacsmapdate)
	{

		if (m_nWaitting == 1)
		{
			szWhere.AppendFormat(_T(" AND hpc_status='T' AND (hpc_performdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		}
		else
		{
			szWhere.AppendFormat(_T(" AND hpc_status='S' AND (hep_date) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);

		}
		if (!m_szDepartmentKey.IsEmpty()) {
			szWhere.AppendFormat(_T(" AND hpcl_proomid=%ld "), ToLong(m_szDepartmentKey));
		}

		if (!m_szTypeKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpc_groupid='%s'"), m_szTypeKey);
		}

		if (m_nDocumentNo > 0) {
			szWhere.Format(_T(" AND hpc_docno=%ld"), m_nDocumentNo);
		}

		szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
		szWhere.AppendFormat(_T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or substr(hpc_groupid, 1, 3) IN('B1E','B1F','B1G','B1H')) "));

		szSQL.Format(_T(" SELECT distinct hd_docno as docno, hpcl_orderlineid as orderlineid, ") \
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
			_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
			_T(" 	(select distinct ss_desc from sys_sel where ss_id='hrm_sex' and ss_code=hp_sex) as sex,") \
			_T(" 	hd_object as objectid,") \
			_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
			_T(" 	hd_diagnostic as diagnostic,") \
			_T(" 	trunc(hpc_orderdate) as orderdate,") \
			_T(" 	hpc_doctor as doctor,") \
			_T(" 	hpcl_receptno as idx,") \
			_T(" 	hpcl_proomid as proomid,") \
			_T(" 	(select distinct sd_name from sys_dept where sd_id=hpc_deptid and rownum < 2) as dept,") \
			_T(" 	(select distinct hrl_name from hms_roomlist where hrl_deptid=hpc_deptid and hrl_id= hpc_roomid) as roomid") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_pacsorder ON(hpc_docno=hd_docno)") \
			_T(" LEFT JOIN hms_pacsorderline ON(hpc_docno = hpcl_docno AND hpcl_orderid=hpc_orderid) ") \
			_T(" LEFT JOIN HMS_EXAM_PENDING ON (hpcl_docno = hep_docno AND HPCL_ORDERLINEID = HEP_RECEPTIDX)") \
			_T(" WHERE 	hpc_status IN('S','T') and NVL(hpcl_status, 'X') NOT IN ('C') ") \
			_T(" AND hpc_orderid > 0 ") \
			_T(" 	%s ") \
			_T("ORDER BY hpcl_receptno, pname"), szWhere);
	}
	else
	{
		if (m_nWaitting == 1)
		{
			szWhere.AppendFormat(_T(" AND hpc_status='T' AND (hpc_performdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		}
		else
		{
			szWhere.AppendFormat(_T(" AND hpc_status='S' AND (hpc_orderdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);

		}
		if (!m_szDepartmentKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and hpcl_perform_deptid = '%s' AND hpcl_proomid=%ld "), pMF->GetCurrentDepartmentID(), ToLong(m_szDepartmentKey));
		}

		if (!m_szTypeKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpc_groupid='%s'"), m_szTypeKey);
		}

		if (m_nDocumentNo > 0) {
			szWhere.Format(_T(" AND hpc_docno=%ld"), m_nDocumentNo);
		}

		szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
		szWhere.AppendFormat(_T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or substr(hpc_groupid, 1, 3) IN('B1E','B1F','B1G','B1H')) "));

		szSQL.Format(_T(" SELECT distinct hd_docno as docno, hpcl_orderlineid as orderlineid, ") \
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
			_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
			_T(" 	(select distinct ss_desc from sys_sel where ss_id='hrm_sex' and ss_code=hp_sex) as sex,") \
			_T(" 	hd_object as objectid,") \
			_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
			_T(" 	hd_diagnostic as diagnostic,") \
			_T(" 	to_char(hpc_orderdate, 'DD/MM/YYYY') as orderdate,") \
			_T(" 	hpc_doctor as doctor,") \
			_T(" 	hpcl_perform_deptid as pdeptid,") \
			_T(" 	hpcl_receptno as idx,") \
			_T(" 	hpcl_proomid as proomid,") \
			_T(" 	(select distinct sd_name from sys_dept where sd_id=hpc_deptid and rownum < 2) as dept,") \
			_T(" 	(select distinct hrl_name from hms_roomlist where hrl_deptid=hpc_deptid and hrl_id= hpc_roomid) as roomid,") \
			_T("  hpcl_proomid ||' '||get_roomname(hpcl_perform_deptid,hpcl_proomid) AS proomname,") \
			_T("   (select hfl_name from hms_fee_list where hfl_feeid = hpcl_itemid) item_name,") \
			_T("   trim(hpcl_noteex) as ghichu,") \
			_T("   trim(hpcl_prediagnosis) as chandoankhichidinh") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_pacsorder ON(hpc_docno=hd_docno)") \
			_T(" LEFT JOIN hms_pacsorderline ON(hpc_docno = hpcl_docno AND hpcl_orderid=hpc_orderid) ") \
			_T(" WHERE 	hpc_status IN('S','T')  and NVL(hpcl_status, 'X') NOT IN ('C') ") \
			_T(" AND hpc_orderid > 0 ") \
			_T(" 	%s ") \
			_T("ORDER BY hpcl_receptno, pname"), szWhere);
	}

	CString szFirstName, szMidName, szSurName, szSearchName, tmpStr;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	CString m_szAge;
	CString szSheetNo;
	if (!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while (!rs.IsEOF())
	{


		rs.GetValue(_T("yearofbirth"), m_szAge);

		rs.GetValue(_T("pname"), tmpStr);

		if (!m_szPatientName.IsEmpty())
		{

			CString szPatientName;

			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);
			if (szShortName != m_szPatientName)
			{
				if (!szFirstName.IsEmpty() && szFirstName != szFirstName2) {
					rs.MoveNext();
					continue;
				}
			}


			if (!szSurName.IsEmpty() && szSurName != szSurName2) {
				rs.MoveNext();
				continue;
			}
			if (!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1) {
				rs.MoveNext();
				continue;
			}

		}

		szSheetNo.Format(_T("%s.%s.%s"), rs.GetValue(_T("pdeptid")), rs.GetValue(_T("proomid")), rs.GetValue(_T("idx")));
		m_wndList.AddItems(
			rs.GetValue(_T("idx")),
			//szSheetNo,
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("pname")),
			//rs.GetValue(_T("Age")), 
			m_szAge,
			rs.GetValue(_T("Sex")),
			rs.GetValue(_T("Address")),
			rs.GetValue(_T("dept")),
			rs.GetValue(_T("roomid")),
			rs.GetValue(_T("orderdate")),
			rs.GetValue(_T("proomname")),
			rs.GetValue(_T("item_name")),
			rs.GetValue(_T("ghichu")),
			rs.GetValue(_T("chandoankhichidinh")),
			rs.GetValue(_T("orderlineid")),
			NULL);
		rs.MoveNext();
	}
	m_nNumber = nCount;
	m_wndList.EndLoad();
	UpdateData(false);
	return nCount;


}
int CPACSPatientList::OnAddPACSPatientList() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CPACSPatientList::OnEditPACSPatientList() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CPACSPatientList::OnDeletePACSPatientList() {
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
		OnCancelPACSPatientList();
	}
	return 0;
}
int CPACSPatientList::OnSavePACSPatientList() {
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
		//OnPACSPatientListListLoadData(); 
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CPACSPatientList::OnCancelPACSPatientList()
{
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
int CPACSPatientList::OnPACSPatientListListLoadData() {
	return 0;
}


int CPACSPatientList::OnListCallPatient()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return 0;
	UpdateData(TRUE);
	if (m_szDepartmentKey.IsEmpty())
	{
		ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn ph\xF2ng th\x1EF1\x63 hi\x1EC7n"));
		return -1;
	}




	long nDocumentNo = str2long(m_wndList.GetItemText(nSel, 1));

	szSQL.Format(_T("HMS_PACS_PENDING_CALL(%ld, '%s', %d, %ld)"),
		nDocumentNo, pMF->m_szDept, str2long(m_szDepartmentKey), 0);
	_debug(_T("\r\n%s"), szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret < 0)
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 ph\xE1t s\x1ED1"));
	}

	return 0;
}

int CPACSPatientList::OnListCancelPending()
{

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return 0;
	UpdateData(TRUE);
	if (m_szDepartmentKey.IsEmpty())
	{
		ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn ph\xF2ng th\x1EF1\x63 hi\x1EC7n"));
		return -1;
	}

	int nWaiting = AfxGetApp()->GetProfileInt(_T("VIMES_WAITINGBOARD"), _T("WaitingNumber"), 0);



	long nDocumentNo = str2long(m_wndList.GetItemText(nSel, 1));

	szSQL.Format(_T("HMS_PACS_PENDING_CANCEL(%ld, '%s', %d)"),
		nDocumentNo, pMF->m_szDept, str2long(m_szDepartmentKey));
	_debug(_T("\r\n%s"), szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret < 0)
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 ph\xE1t s\x1ED1"));
	}
	return 0;
}
void CPACSPatientList::OnEmptyPerformRoom()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	m_szDepartmentKey.Empty();
	UpdateData(FALSE);
}

int CPACSPatientList::OnExportPatientListSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	ShowMessageBox(_T("Chức năng này sẽ Export ra Excel danh sách trên màn hình!"), MB_OK);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CStringArray arrCol;
	CExcel xls;
	CString szSQL, tmpStr, strtype;
	double nTmp = 0;
	long double nTotalAmount = 0;
	int nIdx = 1, nRow = 0, nCol = 0, nTotalOrder = 0;


	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 22);
	xls.SetColumnWidth(6, 12);

	xls.SetColumnWidth(7, 14);
	xls.SetColumnWidth(8, 14);
	xls.SetColumnWidth(9, 20);
	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(11, 15);

	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 15);
	xls.SetColumnWidth(14, 15);
	xls.SetColumnWidth(15, 15);



	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 11);
	xls.SetCellMergedColumns(0, 3, 11);
	xls.SetCellMergedColumns(0, 4, 11);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	xls.SetCellText(0, 2, _T("Danh sách bệnh nhân chỉ định pacs"), 4098, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	xls.SetCellText(0, 4, strtype, 4098, true);

	//TODO: Write Column Header

	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số HS"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Năm sinh"));
	arrCol.Add(_T("Giới"));
	arrCol.Add(_T("Địa chỉ"));

	arrCol.Add(_T("Khoa yêu cầu"));
	arrCol.Add(_T("Phòng yêu cầu"));
	arrCol.Add(_T("TG yêu cầu"));
	arrCol.Add(_T("Phòng thực hiện"));
	arrCol.Add(_T("Mục chỉ định"));
	arrCol.Add(_T("Ghi chú"));
	arrCol.Add(_T("Chẩn đoán khi chỉ định"));


	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 5, arrCol.GetAt(i), 4098, true);
	nRow = 6;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{

		for (int j = 0; j < m_wndList.GetColumnCount(); j++)
		{

			tmpStr = m_wndList.GetItemText(i, j);

			switch (j)
			{

			case 1:

				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;

			default:
				xls.SetCellText(j, nRow, tmpStr, FMT_TEXT);
				break;
			}

		}
		nRow++;

	}

	EndWaitCursor();

	xls.Save(_T("Exports\\Danhsachbenhnhanpacs.xls"));

	return 1;
}

int CPACSPatientList::OnListCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CPACSPatientList::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, FALSE);
		}
	}
	return 0;
}

int CPACSPatientList::OnChangePerformRoom()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szPerformRoomKey, szPerformDate;

	if (!pMF->CheckPermission(_T("11")))
	{
		ShowMessageBox(_T("Cần cấp quyền 11 ở phân hệ hình ảnh để sử dụng chức năng này! "), 0);
		return -1;
	}

	int nRet = 0;
	long nDocumentNo = 0;
	double nOrderLineID = 0;
	int nPerformRoomKey = 0;

	CPACSChangProomDialog dlg(this);

	if (dlg.DoModal() == IDOK)
	{
		nPerformRoomKey = str2int(dlg.m_szPerformRoomKey);
		szPerformDate = (dlg.m_szPerformDate);

		for (int i = 0; i < m_wndList.GetItemCount(); i++)
		{
			if (m_wndList.GetCheck(i) == FALSE)
			{
				continue;
			}
			nDocumentNo = str2long(m_wndList.GetItemText(i, 1));
			nOrderLineID = str2double(m_wndList.GetItemText(i, 13));

			szSQL.Format(_T("ChangPerformRoomInfor(%ld, %.2f, %d, TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s') "), nDocumentNo, nOrderLineID, nPerformRoomKey, szPerformDate, pMF->GetCurrentUser());
			nRet += str2long(pMF->ExecDML(szSQL));
			//_msg(_T("%s"), szSQL);
		}
		OnListLoadData();
	}
	return 1;
}

void CPACSPatientList::OnResizeLayout()
{
	AddResize(&m_wndPatientList, 100, 100);
	AddResize(&m_wndList, 100, 100);
}