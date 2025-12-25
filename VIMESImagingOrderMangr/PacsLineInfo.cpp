#include "PacsLineInfo.h"
#include "MainFrm.h"
#include "HMSOperationUserSetup.h"
static void _OnCategorySelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CPacsLineInfo*)pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
}
static void _OnCategorySelendokFnc(CWnd* pWnd) {
	((CPacsLineInfo*)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CPacsLineInfo *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CPacsLineInfo *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd* pWnd) {
	return ((CPacsLineInfo*)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CPacsLineInfo *)pWnd)->OnCategoryAddNew();
}*/
static void _OnTechguySelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CPacsLineInfo*)pWnd)->OnTechguySelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTechguySelendokFnc(CWnd* pWnd) {
	((CPacsLineInfo*)pWnd)->OnTechguySelendok();
}
/*static void _OnTechguySetfocusFnc(CWnd *pWnd){
	((CPacsLineInfo *)pWnd)->OnTechguyKillfocus();
}*/
/*static void _OnTechguyKillfocusFnc(CWnd *pWnd){
	((CPacsLineInfo *)pWnd)->OnTechguyKillfocus();
}*/
static long _OnTechguyLoadDataFnc(CWnd* pWnd) {
	return ((CPacsLineInfo*)pWnd)->OnTechguyLoadData();
}
/*static void _OnTechguyAddNewFnc(CWnd *pWnd){
	((CPacsLineInfo *)pWnd)->OnTechguyAddNew();
}*/
static void _OnSaveSelectFnc(CWnd* pWnd) {
	CPacsLineInfo* pVw = (CPacsLineInfo*)pWnd;
	pVw->OnSaveSelect();
}
static void _OnNhanLucLabelSelectFnc(CWnd* pWnd)
{
	CPacsLineInfo* pVw = (CPacsLineInfo*)pWnd;
	pVw->OnNhanLucLabelSelect();
}
CPacsLineInfo::CPacsLineInfo(CWnd* pParent) {

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPacsLineInfo::~CPacsLineInfo() {
}
void CPacsLineInfo::OnCreateComponents()
{
	/*m_wndPacsLineInfo.Create(this, _T("XXX"), 5, 5, 370, 90);
	m_wndPacsLineInfo.SetWindowText(m_szItemName);
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 30, 90, 55);
	m_wndCategory.Create(this,95, 30, 365, 55);
	m_wndTechguyLabel.Create(this, _T("Techguy"), 10, 60, 90, 85);
	m_wndTechguy.Create(this,95, 60, 335, 85);
	m_wndSave.Create(this, _T("&Save"), 340, 60, 365, 85);*/

	m_wndPacsLineInfo.Create(this, _T("XXX"), 5, 5, 519, 119);
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 30, 90, 55);
	m_wndCategory.Create(this, 95, 30, 514, 55);
	m_wndTechguyLabel.Create(this, _T("Techguy"), 10, 60, 90, 85);
	m_wndTechguy.Create(this, 95, 60, 439, 85);
	m_wndSave.Create(this, _T("&Save"), 443, 60, 514, 85);
	m_wndNhanLucLabel.Create(this, _T("Nhân lực"), 95, 90, 514, 115);

}
void CPacsLineInfo::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(35);
	m_wndTechguy.SetCheckValue(true);
	m_wndTechguy.LimitText(35);


	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndTechguy.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndTechguy.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CPacsLineInfo::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndTechguy.SetEvent(WE_SELENDOK, _OnTechguySelendokFnc);
	//m_wndTechguy.SetEvent(WE_SETFOCUS, _OnTechguySetfocusFnc);
	//m_wndTechguy.SetEvent(WE_KILLFOCUS, _OnTechguyKillfocusFnc);
	m_wndTechguy.SetEvent(WE_SELCHANGE, _OnTechguySelectChangeFnc);
	m_wndTechguy.SetEvent(WE_LOADDATA, _OnTechguyLoadDataFnc);
	//m_wndTechguy.SetEvent(WE_ADDNEW, _OnTechguyAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndNhanLucLabel.SetEvent(WE_CLICK, _OnNhanLucLabelSelectFnc);
	GetDataToScreen();

}

void CPacsLineInfo::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select * from hms_pacsorderline where hpcl_orderlineid = %ld"), m_nOrderLineID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpcl_formid"), m_szCategoryKey);
	rs.GetValue(_T("hpcl_staffid"), m_szTechguyKey);
	UpdateData(0);
}

void CPacsLineInfo::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndTechguy.GetDlgCtrlID(), m_szTechguyKey);

}
void CPacsLineInfo::UpdateJson(BOOL bSave) {
	if (bSave)
	{

		m_jData[_T("Category")] = m_szCategoryKey;
		m_jData[_T("Techguy")] = m_szTechguyKey;
	}
	else
	{

		m_jData[_T("Category")].GetValue(m_szCategoryKey);
		m_jData[_T("Techguy")].GetValue(m_szTechguyKey);
	}

}
void CPacsLineInfo::SetDefaultValues() {

	m_szCategoryKey.Empty();
	m_szTechguyKey.Empty();

}
int CPacsLineInfo::SetMode(int nMode) {
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
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 6, -1);
		SetDefaultValues();
		break;
	};
	m_wndSave.EnableWindow();
	UpdateData(FALSE);
	return nOldMode;
}
void CPacsLineInfo::OnCategorySelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CPacsLineInfo::OnCategorySelendok() {

}
/*void CPacsLineInfo::OnCategorySetfocus(){

}*/
/*void CPacsLineInfo::OnCategoryKillfocus(){

}*/
long CPacsLineInfo::OnCategoryLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndCategory, _T("pacs_line_category"), m_szCategoryKey);
	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
		 szWhere.Format(_T(" and id='%s' "), m_szCategoryKey
	};
		m_wndCategory.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndCategory.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CPacsLineInfo::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CPacsLineInfo::OnTechguySelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CPacsLineInfo::OnTechguySelendok() {

}
/*void CPacsLineInfo::OnTechguySetfocus(){

}*/
/*void CPacsLineInfo::OnTechguyKillfocus(){

}*/
long CPacsLineInfo::OnTechguyLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_deptid = 'C8'"));
	return pMF->LoadUserList(&m_wndTechguy, m_szTechguyKey, szFilter);
	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndTechguy.IsSearchKey() && !m_szTechguyKey.IsEmpty()){
		 szWhere.Format(_T(" and id='%s' "), m_szTechguyKey
	};
		m_wndTechguy.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndTechguy.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CPacsLineInfo::OnTechguyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CPacsLineInfo::OnSaveSelect() {
	UpdateData();
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("Update hms_pacsorderline set hpcl_formid = '%s', hpcl_updatedby = '%s', hpcl_staffid = '%s' where hpcl_orderlineid = %ld"),
		m_szCategoryKey, pMF->GetCurrentUser(), m_szTechguyKey, m_nOrderLineID);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0) CGuiDialog::OnOK();
}
void CPacsLineInfo::OnNhanLucLabelSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CHMSOperationUserSetup dlg(this);
	dlg.m_nOperationID = m_nOrderLineID;
	if (dlg.DoModal() == IDOK)
	{

	}
}