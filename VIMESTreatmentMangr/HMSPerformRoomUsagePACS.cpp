#include "HMSPerformRoomUsagePACS.h"
#include "HMSMainFrame.h"
static void _OnDeptSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSPerformRoomUsagePACS*)pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDeptSelendokFnc(CWnd* pWnd) {
	((CHMSPerformRoomUsagePACS*)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSPerformRoomUsagePACS *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSPerformRoomUsagePACS *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSPerformRoomUsagePACS *)pWnd)->OnDeptAddNew();
}*/
static long _OnListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnListLoadData();
}
static void _OnListDblClickFnc(CWnd* pWnd) {
	((CHMSPerformRoomUsagePACS*)pWnd)->OnListDblClick();
}
static void _OnListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSPerformRoomUsagePACS*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnListDeleteItem();
}
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CHMSPerformRoomUsagePACS* pVw = (CHMSPerformRoomUsagePACS*)pWnd;
	pVw->OnCloseSelect();
}
static void _OnAvailableSelectFnc(CWnd* pWnd) {
	CHMSPerformRoomUsagePACS* pVw = (CHMSPerformRoomUsagePACS*)pWnd;
	pVw->OnAvailableSelect();
}
static int _OnAddPerformRoomUsageFnc(CWnd* pWnd) {
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnAddPerformRoomUsage();
}
static int _OnEditPerformRoomUsageFnc(CWnd* pWnd) {
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnEditPerformRoomUsage();
}
static int _OnDeletePerformRoomUsageFnc(CWnd* pWnd) {
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnDeletePerformRoomUsage();
}
static int _OnSavePerformRoomUsageFnc(CWnd* pWnd) {
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnSavePerformRoomUsage();
}
static int _OnCancelPerformRoomUsageFnc(CWnd* pWnd) {
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnCancelPerformRoomUsage();
}

static int _OnFromDateCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnFromDateCheckValue();
}

static int _OnToDateCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSPerformRoomUsagePACS*)pWnd)->OnToDateCheckValue();
}

static void _OnRefreshSelectFnc(CWnd* pWnd)
{
	CHMSPerformRoomUsagePACS* pVw = (CHMSPerformRoomUsagePACS*)pWnd;
	pVw->OnRefreshSelect();
}

static void _OnAutogenerateNumberSelectFnc(CWnd* pWnd) {
	((CHMSPerformRoomUsagePACS*)pWnd)->OnAutogenerateNumberSelect();
}

CHMSPerformRoomUsagePACS::CHMSPerformRoomUsagePACS(CWnd* pParent) :
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPerformRoomUsagePACS::~CHMSPerformRoomUsagePACS()
{

}
void CHMSPerformRoomUsagePACS::OnCreateComponents()
{
	PerformDeptUsage.Create(this, _T("Danh sách phòng thực hiện"), 5, 5, 760, 550);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 30, 90, 55);
	m_wndDept.Create(this, 95, 30, 755, 55);
	m_wndList.Create(this, 10, 90, 755, 550);
	m_wndClose.Create(this, _T("&Close"), 675, 555, 755, 580);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this, 95, 60, 175, 85);
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 61, 260, 86);
	m_wndToDate.Create(this, 265, 61, 345, 86);
	m_wndRefresh.Create(this, _T("Search"), 624, 61, 755, 86);
	m_wndAutogenerateNumber.Create(this, _T("Phát số tự động"), 10, 555, 160, 580);
	m_wndAvailable.Create(this, _T(""), 0, 0, 0, 0);
}
void CHMSPerformRoomUsagePACS::OnInitializeComponents() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);

	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);



	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT | CFMT_CENTER, 80);
	m_wndList.InsertColumn(1, _T("Tên phòng"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Hạn mức"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(3, _T("Tổng số"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(4, _T("Đã thực hiện"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(5, _T("Đã hủy"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(6, _T("Còn lại"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(7, _T("Tỷ lệ thực hiện(%)"), CFMT_TEXT, 75);
	m_wndList.SetItemHeight(30);

	//UpdateData(true);	
	if (!pMF->m_szDept.IsEmpty())
	{
		m_szDeptKey = pMF->m_szDept;
	}
	else
	{
		m_szDeptKey = _T("C8");

	}
}
void CHMSPerformRoomUsagePACS::OnSetWindowEvents() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAvailable.SetEvent(WE_CLICK, _OnAvailableSelectFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndAutogenerateNumber.SetEvent(WE_CLICK, _OnAutogenerateNumberSelectFnc);

	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate.Format(_T("%s"), pMF->GetSysDate());
	m_szToDate.Format(_T("%s"), pMF->GetSysDate());

	UpdateData(FALSE);
	OnListLoadData();
}
void CHMSPerformRoomUsagePACS::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndAvailable.GetDlgCtrlID(), m_bAvailable);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndAutogenerateNumber.GetDlgCtrlID(), m_bAutogenerateNumber);
}
void CHMSPerformRoomUsagePACS::GetDataToScreen() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPerformRoomUsagePACS::GetScreenToData() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

}
void CHMSPerformRoomUsagePACS::SetDefaultValues() {
	//m_szDeptKey.Empty();
	m_bAvailable = FALSE;
	m_szFromDate.IsEmpty();
	m_szToDate.IsEmpty();
	m_bAutogenerateNumber = true;

}
int CHMSPerformRoomUsagePACS::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
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
	UpdateData(FALSE);
	return nOldMode;
}
void CHMSPerformRoomUsagePACS::OnDeptSelectChange(int nOldItemSel, int nNewItemSel) {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
}
void CHMSPerformRoomUsagePACS::OnDeptSelendok() {
	OnListLoadData();
}
/*void CHMSPerformRoomUsagePACS::OnDeptSetfocus(){

}*/
/*void CHMSPerformRoomUsagePACS::OnDeptKillfocus(){

}*/

void CHMSPerformRoomUsagePACS::OnAutogenerateNumberSelect()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	OnListLoadData();

}

int CHMSPerformRoomUsagePACS::OnFromDateCheckValue() {
	return 0;
}

int CHMSPerformRoomUsagePACS::OnToDateCheckValue() {
	return 0;
}

void CHMSPerformRoomUsagePACS::OnRefreshSelect()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	OnListLoadData();

}

long CHMSPerformRoomUsagePACS::OnDeptLoadData()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND sd_id = '%s'"), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T(" SELECT sd_id AS id,") \
		_T(" sd_name    AS name") \
		_T(" FROM sys_dept") \
		_T(" WHERE 1        =1 %s ") \
		_T(" AND sd_isactive='Y'") \
		_T(" AND (sd_type   ='HA'") \
		_T(" OR (sd_type='DT' ") \
		_T(" and sd_id IN (select distinct(hrl_deptid) from hms_roomlist ") \
		_T(" where  NVL(hrl_section, 'XX') = 'HA' and hrl_active = 'Y')))") \
		_T(" order by sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPerformRoomUsagePACS::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
void CHMSPerformRoomUsagePACS::OnListDblClick() {

}
void CHMSPerformRoomUsagePACS::OnListSelectChange(int nOldItem, int nNewItem) {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

}
int CHMSPerformRoomUsagePACS::OnListDeleteItem() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	return 0;
}

//long CHMSPerformRoomUsagePACS::OnListLoadData()
//{
//	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
//	UpdateData(true);
//	CRecord rs(&pMF->m_db);
//	CString szSQL, szWhere;
//
//	szWhere.Format(_T(" AND HEP_DATE between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
//
//	m_wndList.BeginLoad();
//
//	if (!m_szDeptKey.IsEmpty())
//	{
//		szWhere.AppendFormat(_T(" AND HEP_DEPTID = '%s'"), m_szDeptKey);
//	}
//
//	if (m_bAutogenerateNumber)
//	{
//		szWhere.AppendFormat(_T(" and NVL(HPCL_GENERATE_NUMBER, 'N') = 'Y' "));
//	}
//
//	szSQL.Format(_T("SELECT khoa, groupid, NVL(hfg_name, 'Không xác định') AS groupname, orderdate, roomid, phongkham, hanmuc, ") \
//		_T("SUM(dathuchien + conlai + dahuy) AS tong, ") \
//		_T("SUM(dathuchien) AS dathuchien, ") \
//		_T("SUM(dahuy) AS dahuy, ") \
//		_T("SUM(conlai) AS conlai, ") \
//		_T("ROUND((SUM(dathuchien) / SUM(dathuchien + conlai + dahuy))*100, 2) as tyle ") \
//		_T("FROM (SELECT HEP_DEPTID AS khoa, HRL_GROUP AS groupid, ") \
//		_T("to_char(HEP_DATE, 'DD/MM/YYYY') AS orderdate, HEP_ROOMID AS roomid, ") \
//		_T("NVL(hrl_limited, 0) AS hanmuc, get_roomname(HEP_DEPTID, HEP_ROOMID) AS phongkham, ") \
//		_T("CASE WHEN NVL(hpcl_status, 'X') = 'T' THEN hpcl_qty*NVL(hfl_ratio, 1) ELSE 0 END dathuchien, ") \
//		_T("CASE WHEN NVL(hpcl_status, 'X') IN ('C') THEN hpcl_qty*NVL(hfl_ratio, 1) ELSE 0 END dahuy, ") \
//		_T("CASE WHEN NVL(hpcl_status, 'X') NOT IN ('C', 'T') THEN hpcl_qty*NVL(hfl_ratio, 1) ELSE 0 END conlai ") \
//		_T("FROM HMS_EXAM_PENDING_VIEW_V2 ") \
//		_T("LEFT JOIN hms_machine_list_for_ins ON (HEP_DEPTID=MA_DEPTID AND HEP_ROOMID = MA_ROOMID) ") \
//		_T("WHERE 1=1 %s) ") \
//		_T(" LEFT JOIN hms_fee_group ON (groupid=hfg_id)") \
//		_T("WHERE hanmuc > 0 ") \
//		_T("GROUP BY khoa, orderdate, groupid, hfg_name, roomid, phongkham, hanmuc ") \
//		_T("ORDER BY khoa, orderdate, groupid, roomid"), szWhere);
//
//	int nCount = rs.ExecSQL(szSQL);
//	//_msg(_T("%s"), szSQL);
//
//	CString prevDate, prevGroupID, curDate, curGroupID;
//	int insertIndex = 0;
//
//	while (!rs.IsEOF())
//	{
//		rs.GetValue(_T("orderdate"), curDate);
//		rs.GetValue(_T("groupname"), curGroupID);
//
//		// Nếu ngày mới, thêm dòng ngày
//		if (curDate != prevDate)
//		{
//			int nItem = m_wndList.AddItems(_T(""), curDate, NULL);
//			for (int i = 0; i < 8; i++)
//			{
//				m_wndList.SetSubItemBkColor(nItem, i, RGB(50, 205, 50), FALSE);
//				m_wndList.SetSubItemTextColor(nItem, i, RGB(255, 255, 255), FALSE);
//			}
//			prevDate = curDate;
//		}
//
//		// Nếu nhóm mới, thêm dòng nhóm
//		if (curGroupID != prevGroupID)
//		{
//			int nItem = m_wndList.AddItems(_T(" "), curGroupID, NULL);
//			for (int i = 0; i < 8; i++)
//			{
//				m_wndList.SetSubItemBkColor(nItem, i, RGB(255, 215, 0), FALSE);
//				m_wndList.SetSubItemTextColor(nItem, i, RGB(0, 0, 0), FALSE);
//			}
//			prevGroupID = curGroupID;
//		}
//
//		// Thêm dữ liệu phòng
//		CString tyleFormatted;
//		double tyle;
//		rs.GetValue(_T("tyle"), tyle);
//		tyleFormatted.Format(_T("%.2f%%"), tyle);
//
//		m_wndList.AddItems(rs.GetValue(_T("roomid")),
//			rs.GetValue(_T("phongkham")),
//			rs.GetValue(_T("hanmuc")),
//			rs.GetValue(_T("tong")),
//			rs.GetValue(_T("dathuchien")),
//			rs.GetValue(_T("dahuy")),
//			rs.GetValue(_T("conlai")),
//			tyleFormatted, NULL);
//
//		rs.MoveNext();
//	}
//
//	m_wndList.EndLoad();
//	return nCount;
//}

long CHMSPerformRoomUsagePACS::OnListLoadData()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szPrevDate, szNextDate, szPrevGroupid, szNextGroupid;

	szWhere.Format(_T(" AND HEP_DATE between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);

	m_wndList.BeginLoad();
	int nCount = 0, nItem = 0;

	if (!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND HEP_DEPTID = '%s'"), m_szDeptKey);
	}

	if (m_bAutogenerateNumber)
	{
		szWhere.AppendFormat(_T(" and NVL(HPCL_GENERATE_NUMBER, 'N') = 'Y' "));
	}

	szSQL.Format(_T("SELECT khoa, groupid, NVL(hfg_name, 'Không xác định') AS groupname, orderdate, roomid, phongkham, hanmuc, ") \
		_T("SUM(dathuchien + conlai + dahuy) AS tong, ") \
		_T("SUM(dathuchien) AS dathuchien, ") \
		_T("SUM(dahuy) AS dahuy, ") \
		_T("SUM(conlai) AS conlai, ") \
		_T("ROUND((SUM(dathuchien) / SUM(dathuchien + conlai + dahuy))*100, 2) as tyle ") \
		_T("FROM (SELECT HEP_DEPTID AS khoa, HRL_GROUP AS groupid, ") \
		_T("to_char(HEP_DATE, 'DD/MM/YYYY') AS orderdate, HEP_ROOMID AS roomid, ") \
		_T("NVL(hrl_limited, 0) AS hanmuc, get_roomname(HEP_DEPTID, HEP_ROOMID) AS phongkham, ") \
		_T("CASE WHEN NVL(hpcl_status, 'X') = 'T' THEN hpcl_qty*NVL(hfl_ratio, 1) ELSE 0 END dathuchien, ") \
		_T("CASE WHEN NVL(hpcl_status, 'X') IN ('C') THEN hpcl_qty*NVL(hfl_ratio, 1) ELSE 0 END dahuy, ") \
		_T("CASE WHEN NVL(hpcl_status, 'X') NOT IN ('C', 'T') THEN hpcl_qty*NVL(hfl_ratio, 1) ELSE 0 END conlai ") \
		_T("FROM HMS_EXAM_PENDING_VIEW_V2 ") \
		_T("LEFT JOIN hms_machine_list_for_ins ON (HEP_DEPTID=MA_DEPTID AND HEP_ROOMID = MA_ROOMID) ") \
		_T("WHERE 1=1 %s) ") \
		_T(" LEFT JOIN hms_fee_group ON (groupid=hfg_id)") \
		_T("WHERE hanmuc > 0 ") \
		_T("GROUP BY khoa, orderdate, groupid, hfg_name, roomid, phongkham, hanmuc ") \
		_T("ORDER BY khoa, orderdate, groupid, roomid"), szWhere);

	nCount = rs.ExecSQL(szSQL);

	// Biến lưu tổng của từng nhóm
	int total_hanmuc = 0, total_tong = 0, total_dathuchien = 0, total_dahuy = 0, total_conlai = 0;
	double total_tyle = 0;
	int insertIndex = 0; // Vị trí chèn dòng tổng

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("orderdate"), szNextDate);
		rs.GetValue(_T("groupname"), szNextGroupid);

		// Nếu ngày thay đổi, chèn tổng nhóm trước khi reset
		if (szNextDate != szPrevDate)
		{
			if (!szPrevGroupid.IsEmpty())
			{

				CString tyleFormatted;
				tyleFormatted.Format(_T("%.2f%%"), total_tong != 0 ? (static_cast<double>(total_dathuchien) * 100.0 / total_tong) : 0.0);
				nItem = m_wndList.InsertItems(insertIndex, _T(" "), szPrevGroupid,
					int2str(total_hanmuc), int2str(total_tong),
					int2str(total_dathuchien), int2str(total_dahuy),
					int2str(total_conlai),
					tyleFormatted, NULL);

				for (int i = 0; i < 8; i++)
				{
					m_wndList.SetSubItemBkColor(nItem, i, RGB(255, 215, 0), FALSE);
					m_wndList.SetSubItemTextColor(nItem, i, RGB(0, 0, 0), FALSE);
				}

			}

			// Thêm ngày mới
			nItem = m_wndList.AddItems(_T(""), szNextDate, NULL);

			for (int i = 0; i < 8; i++)
			{
				m_wndList.SetSubItemBkColor(nItem, i, RGB(0, 156, 255), FALSE);
				m_wndList.SetSubItemTextColor(nItem, i, RGB(255, 255, 255), FALSE);
			}



			szPrevDate = szNextDate;

			// Reset tổng nhóm
			total_hanmuc = total_tong = total_dathuchien = total_dahuy = total_conlai = total_tyle = 0;
			szPrevGroupid.Empty(); // Reset nhóm trước để tránh lỗi nhóm trùng			
			insertIndex = max(0, m_wndList.GetItemCount() - 1);
		}

		// Nếu nhóm thay đổi, chèn tổng nhóm trước đó
		if (szNextGroupid != szPrevGroupid && !szPrevGroupid.IsEmpty())
		{
			CString tyleFormatted;
			tyleFormatted.Format(_T("%.2f%%"), total_tong != 0 ? (static_cast<double>(total_dathuchien) * 100.0 / total_tong) : 0.0);

			nItem = m_wndList.InsertItems(insertIndex, _T(" "), szPrevGroupid,
				int2str(total_hanmuc), int2str(total_tong),
				int2str(total_dathuchien), int2str(total_dahuy),
				int2str(total_conlai),
				tyleFormatted, NULL);
			for (int i = 0; i < 8; i++)
			{
				m_wndList.SetSubItemBkColor(nItem, i, RGB(255, 215, 0), FALSE);
				m_wndList.SetSubItemTextColor(nItem, i, RGB(0, 0, 0), FALSE);
			}
			// Reset tổng nhóm
			total_hanmuc = total_tong = total_dathuchien = total_dahuy = total_conlai = total_tyle = 0;
			insertIndex = max(0, m_wndList.GetItemCount() - 1);
		}

		// Cộng dồn giá trị cho nhóm hiện tại
		int hanmuc = 0, tong = 0, dathuchien = 0, dahuy = 0, conlai = 0;
		double tyle = 0;
		rs.GetValue(_T("hanmuc"), hanmuc);
		rs.GetValue(_T("tong"), tong);
		rs.GetValue(_T("dathuchien"), dathuchien);
		rs.GetValue(_T("dahuy"), dahuy);
		rs.GetValue(_T("conlai"), conlai);
		rs.GetValue(_T("tyle"), tyle);

		total_hanmuc += hanmuc;
		total_tong += tong;
		total_dathuchien += dathuchien;
		total_dahuy += dahuy;
		total_conlai += conlai;
		total_tyle += tyle;

		// Thêm dòng chi tiết phòng

		rs.GetValue(_T("tyle"), tyle);
		CString tyleFormatted;
		tyleFormatted.Format(_T("%.2f%%"), tyle);

		m_wndList.AddItems(rs.GetValue(_T("roomid")),
			rs.GetValue(_T("phongkham")),
			rs.GetValue(_T("hanmuc")),
			rs.GetValue(_T("tong")),
			rs.GetValue(_T("dathuchien")),
			rs.GetValue(_T("dahuy")),
			rs.GetValue(_T("conlai")),
			tyleFormatted, NULL);

		// Cập nhật nhóm hiện tại
		szPrevGroupid = szNextGroupid;
		rs.MoveNext();
	}
	// Chèn dòng tổng cuối cùng nếu có dữ liệu
	if (!szPrevGroupid.IsEmpty())
	{
		CString tyleFormatted;
		tyleFormatted.Format(_T("%.2f%%"), total_tong != 0 ? (static_cast<double>(total_dathuchien) * 100.0 / total_tong) : 0.0);
		nItem = m_wndList.InsertItems(insertIndex, _T(" "), szPrevGroupid,
			int2str(total_hanmuc), int2str(total_tong),
			int2str(total_dathuchien), int2str(total_dahuy),
			int2str(total_conlai),
			tyleFormatted, NULL);
		for (int i = 0; i < 8; i++)
		{
			m_wndList.SetSubItemBkColor(nItem, i, RGB(255, 215, 0), FALSE);
			m_wndList.SetSubItemTextColor(nItem, i, RGB(0, 0, 0), FALSE);
		}
	}

	m_wndList.EndLoad();
	return nCount;
}

void CHMSPerformRoomUsagePACS::OnCloseSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
int CHMSPerformRoomUsagePACS::OnAddPerformRoomUsage() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSPerformRoomUsagePACS::OnEditPerformRoomUsage() {
	if (GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CHMSPerformRoomUsagePACS::OnDeletePerformRoomUsage() {
	if (GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelPerformRoomUsage();
	}
	return 0;
}
int CHMSPerformRoomUsagePACS::OnSavePerformRoomUsage() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
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
		//OnPerformRoomUsageListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSPerformRoomUsagePACS::OnCancelPerformRoomUsage() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	return 0;
}
int CHMSPerformRoomUsagePACS::OnPerformRoomUsageListLoadData() {
	return 0;
}
void CHMSPerformRoomUsagePACS::OnAvailableSelect() {
	OnListLoadData();
}