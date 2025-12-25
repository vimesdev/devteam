#include "HMSPendingInfoView.h"
#include "MainFrm.h"
#include "HMSPerformRoomUsagePACS.h"

CString ReadDepartmentID()
{
	CString cSvar = _T("");
	HKEY hKey;
	if (::RegOpenKeyEx(HKEY_CURRENT_USER, _T("Software\\Local AppWizard-Generated Applications\\VIMESWaitingBoard\\VIMES_WAITINGBOARD"),
		0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
	{
		TCHAR szData[256];
		DWORD dwKeyDataType;
		DWORD dwDataBufSize = 256;
		if (::RegQueryValueEx(hKey, _T("Department"), NULL, &dwKeyDataType, // /"ProxyServer"
			(LPBYTE)&szData, &dwDataBufSize) == ERROR_SUCCESS)
		{
			switch (dwKeyDataType)
			{
			case REG_SZ:
				cSvar = CString(szData);
				break;
			}
		}
		::RegCloseKey(hKey);
	}
	return cSvar;
}


CString ReadRoomID()
{
	CString cSvar = _T("");
	HKEY hKey;
	if (::RegOpenKeyEx(HKEY_CURRENT_USER, _T("Software\\Local AppWizard-Generated Applications\\VIMESWaitingBoard\\VIMES_WAITINGBOARD"),
		0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
	{
		TCHAR szData[256];
		DWORD dwKeyDataType;
		DWORD dwDataBufSize = 256;
		if (::RegQueryValueEx(hKey, _T("Room"), NULL, &dwKeyDataType, // /"ProxyServer"
			(LPBYTE)&szData, &dwDataBufSize) == ERROR_SUCCESS)
		{
			switch (dwKeyDataType)
			{
			case REG_SZ:
				cSvar = CString(szData);
				break;
			}
		}
		::RegCloseKey(hKey);
	}
	return cSvar;
}


static void _OnClearSelectFnc(CWnd* pWnd) {
	CHMSPendingInfoView* pVw = (CHMSPendingInfoView*)pWnd;
	pVw->OnClearSelect();
}
static void _OnCallSelectFnc(CWnd* pWnd) {
	CHMSPendingInfoView* pVw = (CHMSPendingInfoView*)pWnd;
	pVw->OnCallSelect();
}
static long _OnPendingListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnPendingListLoadData();
}
static void _OnPendingListDblClickFnc(CWnd* pWnd) {
	((CHMSPendingInfoView*)pWnd)->OnPendingListDblClick();
}
static void _OnPendingListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSPendingInfoView*)pWnd)->OnPendingListSelectChange(nOldItem, nNewItem);
}
static int _OnPendingListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnPendingListDeleteItem();
}
static long _OnCancelListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnCancelListLoadData();
}
static void _OnCancelListDblClickFnc(CWnd* pWnd) {
	((CHMSPendingInfoView*)pWnd)->OnCancelListDblClick();
}
static void _OnCancelListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSPendingInfoView*)pWnd)->OnCancelListSelectChange(nOldItem, nNewItem);
}
static int _OnCancelListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnCancelListDeleteItem();
}
static int _OnAddHMSPendingInfoViewFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnAddHMSPendingInfoView();
}
static int _OnEditHMSPendingInfoViewFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnEditHMSPendingInfoView();
}
static int _OnDeleteHMSPendingInfoViewFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnDeleteHMSPendingInfoView();
}
static int _OnSaveHMSPendingInfoViewFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnSaveHMSPendingInfoView();
}
static int _OnCancelHMSPendingInfoViewFnc(CWnd* pWnd) {
	return ((CHMSPendingInfoView*)pWnd)->OnCancelHMSPendingInfoView();
}
static void _OnpacsmapdateSelectFnc(CWnd* pWnd)
{
	((CHMSPendingInfoView*)pWnd)->OnpacsmapdateSelect();
}
static void _OnViewPerformRoomStatusSelectFnc(CWnd* pWnd)
{
	CHMSPendingInfoView* pVw = (CHMSPendingInfoView*)pWnd;
	pVw->OnViewPerformRoomStatusSelect();
}
CHMSPendingInfoView::CHMSPendingInfoView() {

	m_nDlgWidth = 1010;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSPendingInfoView::~CHMSPendingInfoView() {
}
void CHMSPendingInfoView::OnCreateComponents() {
	m_wndPending.Create(this, _T("Pending"), 5, 35, 505, 215);
	m_wndClear.Create(this, _T("Clear"), 90, 5, 170, 30);
	m_wndCancel.Create(this, _T("Cancel"), 509, 36, 1010, 216);
	m_wndCall.Create(this, _T("Call"), 5, 5, 85, 30);
	m_wndPendingList.Create(this, 10, 62, 500, 212);
	m_wndCancelList.Create(this, 515, 60, 1005, 210);
	m_wndpacsmapdate.Create(this, _T("Sắp xếp theo thời gian phát số"), 174, 5, 505, 30);
	m_wndViewPerformRoomStatus.Create(this, _T("Xem phòng thực hiện"), 865, 5, 1010, 30);
	m_wndpacsmapdate.EnableWindow(false);

}
void CHMSPendingInfoView::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();


	m_wndPendingList.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 100);
	m_wndPendingList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPendingList.InsertColumn(2, _T("Recept No"), CFMT_TEXT, 70);


	m_wndCancelList.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 100);
	m_wndCancelList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndCancelList.InsertColumn(2, _T("Recept No"), CFMT_TEXT, 70);

}
void CHMSPendingInfoView::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndClear.SetEvent(WE_CLICK, _OnClearSelectFnc);
	m_wndCall.SetEvent(WE_CLICK, _OnCallSelectFnc);
	m_wndPendingList.SetEvent(WE_SELCHANGE, _OnPendingListSelectChangeFnc);
	m_wndPendingList.SetEvent(WE_LOADDATA, _OnPendingListLoadDataFnc);
	m_wndPendingList.SetEvent(WE_DBLCLICK, _OnPendingListDblClickFnc);
	m_wndPendingList.AddEvent(1, _T("Cancel"), _OnPendingListDeleteItemFnc);
	m_wndCancelList.SetEvent(WE_SELCHANGE, _OnCancelListSelectChangeFnc);
	m_wndCancelList.SetEvent(WE_LOADDATA, _OnCancelListLoadDataFnc);
	m_wndCancelList.SetEvent(WE_DBLCLICK, _OnCancelListDblClickFnc);
	m_wndpacsmapdate.SetEvent(WE_CLICK, _OnpacsmapdateSelectFnc);
	m_wndCancelList.AddEvent(1, _T("Undo"), _OnCancelListDeleteItemFnc);
	m_wndViewPerformRoomStatus.SetEvent(WE_CLICK, _OnViewPerformRoomStatusSelectFnc);

	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPendingInfoViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPendingInfoViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPendingInfoViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPendingInfoViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPendingInfoViewFnc, 0, 'T', VK_CONTROL);
	*/
	OnPendingListLoadData();
	OnCancelListLoadData();

}
void CHMSPendingInfoView::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Check(pDX, m_wndpacsmapdate.GetDlgCtrlID(), m_bpacsmapdate);
}
void CHMSPendingInfoView::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPendingInfoView::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSPendingInfoView::SetDefaultValues() {


}
int CHMSPendingInfoView::SetMode(int nMode) {
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
	UpdateData(FALSE);
	return nOldMode;
}
void CHMSPendingInfoView::OnpacsmapdateSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//UpdateData(true);
	//pMF->m_wndPatientList.OnListLoadData();	

}
void CHMSPendingInfoView::OnClearSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	if (m_nRoomID <= 0)
	{
		ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn ph\xF2ng th\x1EF1\x63 hi\x1EC7n"));
		return;
	}

	CString szDept = ReadDepartmentID();
	CString szRoom = ReadRoomID();
	if (szDept != pMF->m_szDept)
	{
		return;
	}
	if (str2int(szRoom) != m_nRoomID)
	{
		ShowMessageBox(_T("Kh\xF4ng \x63ho ph\xE9p th\x1EF1\x63 hi\x1EC7n v\x1EDBi \x62\x1EC7nh nh\xE2n ph\xF2ng kh\xE1\x63"));
		return;
	}

	int retMsg = ShowMessageBox(_T("T\xE1\x63 v\x1EE5 n\xE0y s\x1EBD \x78\xF3\x61 \x64\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n \x111\x61ng \x111\x1EE3i \x111\x1EC3 g\x1ECDi \x111\x1EE3t m\x1EDBi. \x42\x1EA1n \x63\xF3 \x63h\x1EAF\x63 \x63h\x1EAFn mu\x1ED1n th\x1EF1\x63 hi\x1EC7n kh\xF4ng?(Y/N)"),
		MB_YESNO | MB_DEFBUTTON2);
	if (retMsg == IDNO)
		return;

	szSQL.Format(_T("HMS_PACS_PENDING_CLEARLIST('%s', %d)"),
		pMF->m_szDept, m_nRoomID);
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret < 0)
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 ph\xE1t s\x1ED1"));
		return;
	}
	OnPendingListLoadData();

}
void CHMSPendingInfoView::OnCallSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CString szSQL;
	CRecord rs(&pMF->m_db);

	if (m_nRoomID <= 0)
	{
		ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn ph\xF2ng th\x1EF1\x63 hi\x1EC7n"));
		return;
	}


	CString szDept = ReadDepartmentID();
	CString szRoom = ReadRoomID();
	if (szDept != pMF->m_szDept)
	{
		return;
	}
	if (str2int(szRoom) != m_nRoomID)
	{
		ShowMessageBox(_T("Kh\xF4ng \x63ho ph\xE9p g\x1ECDi \x62\x1EC7nh nh\xE2n ph\xF2ng kh\xE1\x63"));
		return;
	}

	if (m_wndPendingList.GetItemCount() > 0)
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n trong \x64\x61nh s\xE1\x63h \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 \x78\xE1\x63 nh\x1EADn \x111\xE3 th\x1EF1\x63 hi\x1EC7n"));
		return;
	}

	szSQL.Format(_T("HMS_PACS_PENDING_CALLLIST('%s', %d)"),
		pMF->m_szDept, m_nRoomID, 0);
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret < 0)
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 ph\xE1t s\x1ED1"));
		return;
	}

	OnPendingListLoadData();
	OnCancelListLoadData();

}
void CHMSPendingInfoView::OnPendingListDblClick() {

}
void CHMSPendingInfoView::OnViewPerformRoomStatusSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CHMSPerformRoomUsagePACS dlg(this);
	dlg.DoModal();
}
void CHMSPendingInfoView::OnPendingListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
int CHMSPendingInfoView::OnPendingListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndPendingList.GetCurSel();
	if (nSel < 0)
		return 0;
	long nDocumentNo = str2long(m_wndPendingList.GetItemText(nSel, 0));

	szSQL.Format(_T("HMS_PACS_PENDING_CANCEL(%ld, '%s',%d)"),
		nDocumentNo, m_szDeptID, m_nRoomID);
	int res = str2int(pMF->ExecDML(szSQL));
	if (res <= 0)
	{
		ShowMessageBox(_T("Cannot cancel pending"));
		return 0;
	}
	OnPendingListLoadData();
	OnCancelListLoadData();
	return 0;
}
long CHMSPendingInfoView::OnPendingListLoadData() {

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPendingList.BeginLoad();
	int nCount = 0;
	szSQL.Format(_T("SELECT hep_docno as docno, ") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T(" hep_receptno as receptno ") \
		_T(" FROM hms_exam_pending ") \
		_T(" LEFT JOIN hms_doc ON(hd_docno = hep_docno) ") \
		_T(" LEFT JOIN hms_patient ON(hp_patientno = hd_patientno) ") \
		_T(" WHERE hep_deptid='%s' and hep_roomid = %ld and hep_pending='C' ") \
		_T(" ORDER BY hep_receptno "),
		m_szDeptID, m_nRoomID);

	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndPendingList.AddItems(
			rs.GetValue(_T("DocNo")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("ReceptNo")), NULL);
		rs.MoveNext();
	}
	m_wndPendingList.EndLoad();
	return nCount;
}
void CHMSPendingInfoView::OnCancelListDblClick() {

}
void CHMSPendingInfoView::OnCancelListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}

int CHMSPendingInfoView::OnCancelListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndCancelList.GetCurSel();
	if (nSel < 0)
		return 0;
	long nDocumentNo = str2long(m_wndCancelList.GetItemText(nSel, 0));

	szSQL.Format(_T("UPDATE hms_exam_pending SET hep_pending='O' ") \
		_T("WHERE hep_deptid='%s' and hep_roomid=%d and hep_docno = %ld and hep_pending='X' "),
		m_szDeptID, m_nRoomID, nDocumentNo);
	int res = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (res <= 0)
	{
		ShowMessageBox(_T("Cannot cancel pending"));
		return 0;
	}
	OnPendingListLoadData();
	OnCancelListLoadData();
	return 0;
}
long CHMSPendingInfoView::OnCancelListLoadData() {

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndCancelList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT hep_docno as docno, ") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T(" hep_receptno as receptno ") \
		_T(" FROM hms_exam_pending ") \
		_T(" LEFT JOIN hms_doc ON(hd_docno = hep_docno) ") \
		_T(" LEFT JOIN hms_patient ON(hp_patientno = hd_patientno) ") \
		_T(" WHERE hep_deptid='%s' and hep_roomid = %ld and hep_pending='X' ") \
		_T(" ORDER BY hep_receptno "),
		m_szDeptID, m_nRoomID);

	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndCancelList.AddItems(
			rs.GetValue(_T("DocNo")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("ReceptNo")), NULL);
		rs.MoveNext();
	}
	m_wndCancelList.EndLoad();
	return nCount;

	return 0;
}
int CHMSPendingInfoView::OnAddHMSPendingInfoView() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSPendingInfoView::OnEditHMSPendingInfoView() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CHMSPendingInfoView::OnDeleteHMSPendingInfoView() {
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
		OnCancelHMSPendingInfoView();
	}
	return 0;
}
int CHMSPendingInfoView::OnSaveHMSPendingInfoView() {
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
		//OnHMSPendingInfoViewListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSPendingInfoView::OnCancelHMSPendingInfoView() {
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
int CHMSPendingInfoView::OnHMSPendingInfoViewListLoadData() {
	return 0;
}

void CHMSPendingInfoView::Refresh()
{
	OnPendingListLoadData();
	OnCancelListLoadData();
}
void CHMSPendingInfoView::OnResizeLayout()
{
	AddResize(&m_wndPendingList, 100, 100);
	AddResize(&m_wndCancelList, 100, 100);
	AddResize(&m_wndPending, 100, 100);
	AddResize(&m_wndCancel, 100, 100);

}