#include "CaptureDeviceSetting.h"
#include "MainFrm.h"
static void _OnSourceSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CCaptureDeviceSetting*)pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSourceSelendokFnc(CWnd* pWnd) {
	((CCaptureDeviceSetting*)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd* pWnd) {
	return ((CCaptureDeviceSetting*)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnSourceAddNew();
}*/
static void _OnProtocolSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CCaptureDeviceSetting*)pWnd)->OnProtocolSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnProtocolSelendokFnc(CWnd* pWnd) {
	((CCaptureDeviceSetting*)pWnd)->OnProtocolSelendok();
}
/*static void _OnProtocolSetfocusFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnProtocolKillfocus();
}*/
/*static void _OnProtocolKillfocusFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnProtocolKillfocus();
}*/
static long _OnProtocolLoadDataFnc(CWnd* pWnd) {
	return ((CCaptureDeviceSetting*)pWnd)->OnProtocolLoadData();
}
/*static void _OnProtocolAddNewFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnProtocolAddNew();
}*/
static void _OnCaptureEventSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CCaptureDeviceSetting*)pWnd)->OnCaptureEventSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnCaptureEventSelendokFnc(CWnd* pWnd) {
	((CCaptureDeviceSetting*)pWnd)->OnCaptureEventSelendok();
}
/*static void _OnCaptureEventSetfocusFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnCaptureEventKillfocus();
}*/
/*static void _OnCaptureEventKillfocusFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnCaptureEventKillfocus();
}*/
static long _OnCaptureEventLoadDataFnc(CWnd* pWnd) {
	return ((CCaptureDeviceSetting*)pWnd)->OnCaptureEventLoadData();
}
/*static void _OnCaptureEventAddNewFnc(CWnd *pWnd){
	((CCaptureDeviceSetting *)pWnd)->OnCaptureEventAddNew();
}*/
static void _OnApplySelectFnc(CWnd* pWnd) {
	CCaptureDeviceSetting* pVw = (CCaptureDeviceSetting*)pWnd;
	pVw->OnApplySelect();
}
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CCaptureDeviceSetting* pVw = (CCaptureDeviceSetting*)pWnd;
	pVw->OnCloseSelect();
}
static int _OnAddCaptureDeviceSettingFnc(CWnd* pWnd) {
	return ((CCaptureDeviceSetting*)pWnd)->OnAddCaptureDeviceSetting();
}
static int _OnEditCaptureDeviceSettingFnc(CWnd* pWnd) {
	return ((CCaptureDeviceSetting*)pWnd)->OnEditCaptureDeviceSetting();
}
static int _OnDeleteCaptureDeviceSettingFnc(CWnd* pWnd) {
	return ((CCaptureDeviceSetting*)pWnd)->OnDeleteCaptureDeviceSetting();
}
static int _OnSaveCaptureDeviceSettingFnc(CWnd* pWnd) {
	return ((CCaptureDeviceSetting*)pWnd)->OnSaveCaptureDeviceSetting();
}
static int _OnCancelCaptureDeviceSettingFnc(CWnd* pWnd) {
	return ((CCaptureDeviceSetting*)pWnd)->OnCancelCaptureDeviceSetting();
}
CCaptureDeviceSetting::CCaptureDeviceSetting(CWnd* pParent) :
	CGuiDialog(pParent) {

	m_nDlgWidth = 275;
	m_nDlgHeight = 135;
	SetDefaultValues();
}
CCaptureDeviceSetting::~CCaptureDeviceSetting() {
}
void CCaptureDeviceSetting::OnCreateComponents() {
	m_wndSourceLabel.Create(this, _T("Source"), 5, 5, 95, 30);
	m_wndSource.Create(this, 100, 5, 265, 30);
	m_wndProtocolLabel.Create(this, _T("Loại"), 5, 35, 95, 60);
	m_wndProtocol.Create(this, 100, 35, 265, 60);
	m_wndCaptureEventLabel.Create(this, _T("Hình thức chụp"), 5, 65, 95, 90);
	m_wndCaptureEvent.Create(this, 100, 65, 265, 90);
	m_wndApply.Create(this, _T("&Apply"), 100, 97, 180, 122);
	m_wndClose.Create(this, _T("&Close"), 185, 97, 265, 122);

}
void CCaptureDeviceSetting::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);
	m_wndProtocol.SetCheckValue(true);
	m_wndProtocol.LimitText(35);
	m_wndCaptureEvent.SetCheckValue(true);
	m_wndCaptureEvent.LimitText(35);


	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProtocol.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProtocol.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCaptureEvent.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCaptureEvent.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CCaptureDeviceSetting::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndProtocol.SetEvent(WE_SELENDOK, _OnProtocolSelendokFnc);
	//m_wndProtocol.SetEvent(WE_SETFOCUS, _OnProtocolSetfocusFnc);
	//m_wndProtocol.SetEvent(WE_KILLFOCUS, _OnProtocolKillfocusFnc);
	m_wndProtocol.SetEvent(WE_SELCHANGE, _OnProtocolSelectChangeFnc);
	m_wndProtocol.SetEvent(WE_LOADDATA, _OnProtocolLoadDataFnc);
	//m_wndProtocol.SetEvent(WE_ADDNEW, _OnProtocolAddNewFnc);
	m_wndCaptureEvent.SetEvent(WE_SELENDOK, _OnCaptureEventSelendokFnc);
	//m_wndCaptureEvent.SetEvent(WE_SETFOCUS, _OnCaptureEventSetfocusFnc);
	//m_wndCaptureEvent.SetEvent(WE_KILLFOCUS, _OnCaptureEventKillfocusFnc);
	m_wndCaptureEvent.SetEvent(WE_SELCHANGE, _OnCaptureEventSelectChangeFnc);
	m_wndCaptureEvent.SetEvent(WE_LOADDATA, _OnCaptureEventLoadDataFnc);
	//m_wndCaptureEvent.SetEvent(WE_ADDNEW, _OnCaptureEventAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	//_msg(_T("%s:%s:%s"), m_szSourceKey, m_szProtocolKey, m_szCaptureEventKey);

	SetMode(VM_EDIT);

}
void CCaptureDeviceSetting::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_TextEx(pDX, m_wndProtocol.GetDlgCtrlID(), m_szProtocolKey);
	DDX_TextEx(pDX, m_wndCaptureEvent.GetDlgCtrlID(), m_szCaptureEventKey);
}
void CCaptureDeviceSetting::UpdateJson(BOOL bSave) {
	if (bSave)
	{

		m_jData[_T("Source")] = m_szSourceKey;
		m_jData[_T("Protocol")] = m_szProtocolKey;
		m_jData[_T("CaptureEvent")] = m_szCaptureEventKey;
	}
	else
	{

		m_jData[_T("Source")].GetValue(m_szSourceKey);
		m_jData[_T("Protocol")].GetValue(m_szProtocolKey);
		m_jData[_T("CaptureEvent")].GetValue(m_szCaptureEventKey);
	}

}
void CCaptureDeviceSetting::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCaptureDeviceSetting::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CCaptureDeviceSetting::SetDefaultValues() {

	m_szSourceKey.Empty();
	m_szProtocolKey.Empty();
	m_szCaptureEventKey.Empty();

}
int CCaptureDeviceSetting::SetMode(int nMode) {
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
		EnableButtons(TRUE, 0, 1, -1);
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
void CCaptureDeviceSetting::OnSourceSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CCaptureDeviceSetting::OnSourceSelendok() {

}
/*void CCaptureDeviceSetting::OnSourceSetfocus(){

}*/
/*void CCaptureDeviceSetting::OnSourceKillfocus(){

}*/
long CCaptureDeviceSetting::OnSourceLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString desc;
	m_wndSource.DeleteAllItems();

	if (m_wndSource.IsSearchKey() && str2int(m_szSourceKey) > 0) {
		desc = m_devices[str2int(m_szSourceKey)];
		m_wndSource.AddItems(m_szSourceKey, desc, NULL);
		return 1;
	};
	for (int i = 0; i < m_devices.GetCount(); i++)
	{
		desc = m_devices[i];
		m_wndSource.AddItems(int2str(i), desc, NULL);
	}
	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
		 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
	};
		m_wndSource.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndSource.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CCaptureDeviceSetting::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CCaptureDeviceSetting::OnProtocolSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CCaptureDeviceSetting::OnProtocolSelendok() {

}
/*void CCaptureDeviceSetting::OnProtocolSetfocus(){

}*/
/*void CCaptureDeviceSetting::OnProtocolKillfocus(){

}*/
long CCaptureDeviceSetting::OnProtocolLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	
	m_wndProtocol.DeleteAllItems();

	if (m_wndProtocol.IsSearchKey() && str2int(m_szProtocolKey) > 0) {
		int src = str2int(m_szProtocolKey);
		if (src == 0)
			return m_wndProtocol.AddItems(_T("0"), _T("Webcam"), NULL);
		if (src == 1)
			return m_wndProtocol.AddItems(_T("1"), _T("SVideo"), NULL);
		if (src == 2)
			return m_wndProtocol.AddItems(_T("2"), _T("Composit Video"), NULL);
		if (src == 3)
			return m_wndProtocol.AddItems(_T("3"), _T("TVTuner"), NULL);
		if (src == 4)
			return m_wndProtocol.AddItems(_T("4"), _T("HDMI"), NULL);
		

	};

	m_wndProtocol.AddItems(_T("0"), _T("Webcam"), NULL);
	m_wndProtocol.AddItems(_T("1"), _T("SVideo"), NULL);
	m_wndProtocol.AddItems(_T("2"), _T("Composit Video"), NULL);
	m_wndProtocol.AddItems(_T("3"), _T("TVTuner"), NULL);
	m_wndProtocol.AddItems(_T("4"), _T("HDMI"), NULL);


	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndProtocol.IsSearchKey() && !m_szProtocolKey.IsEmpty()){
		 szWhere.Format(_T(" and id='%s' "), m_szProtocolKey
	};
		m_wndProtocol.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndProtocol.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CCaptureDeviceSetting::OnProtocolAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CCaptureDeviceSetting::OnCaptureEventSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CCaptureDeviceSetting::OnCaptureEventSelendok() {

}
/*void CCaptureDeviceSetting::OnCaptureEventSetfocus(){

}*/
/*void CCaptureDeviceSetting::OnCaptureEventKillfocus(){

}*/
long CCaptureDeviceSetting::OnCaptureEventLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CStringArray lstItems;
	m_wndCaptureEvent.DeleteAllItems();

	if (m_wndCaptureEvent.IsSearchKey() && str2int(m_szCaptureEventKey) > 0) {
		
		if (m_szCaptureEventKey == L"0")
		{
			lstItems.Add(L"Nút bấm F5");
		}
		if (m_szCaptureEventKey == L"1")
		{
			lstItems.Add(L"Chuột trái");
		}
		if (m_szCaptureEventKey == L"2")
		{
			lstItems.Add(L"Kích đúp chuột trái");
		}
		if (lstItems.GetCount() > 0)
		{
			return m_wndCaptureEvent.AddItems(
				m_szCaptureEventKey,
				lstItems[0], NULL);
		}
	}
	else
	{
		lstItems.Add(L"Capture Button");
		lstItems.Add(L"Left Buton Click");
		lstItems.Add(L"Left Button Double Click");
	}
	
	CString tmpStr;
	for (int i = 0; i < lstItems.GetCount(); i++)
	{
		tmpStr.Format(_T("%d"), i);
		m_wndCaptureEvent.AddItems(
			tmpStr,
			lstItems[i], NULL);
	}


	return 0;
}
/*void CCaptureDeviceSetting::OnCaptureEventAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CCaptureDeviceSetting::OnApplySelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiDialog::OnOK();
}
void CCaptureDeviceSetting::OnCloseSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
int CCaptureDeviceSetting::OnAddCaptureDeviceSetting() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CCaptureDeviceSetting::OnEditCaptureDeviceSetting() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CCaptureDeviceSetting::OnDeleteCaptureDeviceSetting() {
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
		OnCancelCaptureDeviceSetting();
	}
	return 0;
}
int CCaptureDeviceSetting::OnSaveCaptureDeviceSetting() {
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
		//OnCaptureDeviceSettingListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CCaptureDeviceSetting::OnCancelCaptureDeviceSetting() {
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
int CCaptureDeviceSetting::OnCaptureDeviceSettingListLoadData() {
	return 0;
}
