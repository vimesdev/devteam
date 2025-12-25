#include "HMSRoomSetupDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "SearchPopup.h"
static void _OnAddSelectFnc(CWnd* pWnd) {
	CHMSRoomSetupDialog* pVw = (CHMSRoomSetupDialog*)pWnd;
	pVw->OnAddSelect();
}
static void _OnEditSelectFnc(CWnd* pWnd) {
	CHMSRoomSetupDialog* pVw = (CHMSRoomSetupDialog*)pWnd;
	pVw->OnEditSelect();
}
static void _OnDeleteSelectFnc(CWnd* pWnd) {
	CHMSRoomSetupDialog* pVw = (CHMSRoomSetupDialog*)pWnd;
	pVw->OnDeleteSelect();
}
static void _OnSaveSelectFnc(CWnd* pWnd) {
	CHMSRoomSetupDialog* pVw = (CHMSRoomSetupDialog*)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd* pWnd) {
	CHMSRoomSetupDialog* pVw = (CHMSRoomSetupDialog*)pWnd;
	pVw->OnCancelSelect();
}
static long _OnRoomListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnRoomListLoadData();
}
static void _OnRoomListDblClickFnc(CWnd* pWnd) {
	((CHMSRoomSetupDialog*)pWnd)->OnRoomListDblClick();
}
static void _OnRoomListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSRoomSetupDialog*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
}
static int _OnRoomListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnRoomListDeleteItem();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog *)pWnd)->OnNameSetfocus();} */
	/*static void _OnNameKillfocusFnc(CWnd *pWnd){
		((CHMSRoomSetupDialog *)pWnd)->OnNameKillfocus();
	} */
static int _OnNameCheckValueFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnNameCheckValue();
}
static void _OnTypeSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSRoomSetupDialog*)pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTypeSelendokFnc(CWnd* pWnd) {
	((CHMSRoomSetupDialog*)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnTypeLoadData();
}

static long _OnExamTypeLoadDataFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnExamTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnSectionChangeFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog *)pWnd)->OnSectionChange();
} */
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog *)pWnd)->OnSectionSetfocus();} */
	/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
		((CHMSRoomSetupDialog *)pWnd)->OnSectionKillfocus();
	} */
static int _OnSectionCheckValueFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnSectionCheckValue();
}
static int _OnAddHMSRoomSetupDialogFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnAddHMSRoomSetupDialog();
}
static int _OnEditHMSRoomSetupDialogFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnEditHMSRoomSetupDialog();
}
static int _OnDeleteHMSRoomSetupDialogFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnDeleteHMSRoomSetupDialog();
}
static int _OnSaveHMSRoomSetupDialogFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnSaveHMSRoomSetupDialog();
}
static int _OnCancelHMSRoomSetupDialogFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnCancelHMSRoomSetupDialog();
}
static int _OnZoneCheckValueFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnZoneCheckValue();
}
static long _OnZoneLoadDataFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnZoneLoadData();
}
static long _OnGroupTypeLoadDataFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnGroupTypeLoadData();
}
static int _OnAddressCheckValueFnc(CWnd* pWnd) {
	return ((CHMSRoomSetupDialog*)pWnd)->OnAddressCheckValue();
}

static int _OnRoomListSearchFnc(CWnd* pWnd)
{
	((CHMSRoomSetupDialog*)pWnd)->OnRoomListSearch();
	return 0;
}

static int _OnIndexNoCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSRoomSetupDialog*)pWnd)->OnIndexNoCheckValue();
}

static int _OnMo_taCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSRoomSetupDialog*)pWnd)->OnMo_taCheckValue();
}

static long _OnBckhthLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSRoomSetupDialog*)pWnd)->OnBckhthLoadData();
}

static long _OnChuyenkhoaLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSRoomSetupDialog*)pWnd)->OnChuyenkhoaLoadData();
}
static void _OnForOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSRoomSetupDialog*)pWnd)->OnForOutpatientSelect();
}

CHMSRoomSetupDialog::CHMSRoomSetupDialog(CWnd* pParent)
{
	m_nDlgWidth = 415;
	m_nDlgHeight = 415;
	SetDefaultValues();
	m_szTypeKey.Empty();
	m_szSection.Empty();
	m_bActive = TRUE;

}
CHMSRoomSetupDialog::~CHMSRoomSetupDialog()
{
}
void CHMSRoomSetupDialog::OnCreateComponents()
{
	/*m_wndRoomList.Create(this,5, 5, 826, 276);
	m_wndTypeLabel.Create(this, _T("Type"), 5, 280, 105, 305);
	m_wndType.Create(this,110, 280, 484, 305);
	m_wndSectionLabel.Create(this, _T("Section"), 491, 280, 571, 305);
	m_wndSection.Create(this,576, 280, 826, 305);
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 5, 310, 105, 335);
	m_wndExamType.Create(this,110, 310, 484, 335);
	m_wndZoneLabel.Create(this, _T("Báo cáo khu"), 491, 310, 571, 335);
	m_wndZone.Create(this,576, 310, 826, 335);
	m_wndBckhthLabel.Create(this, _T("Báo cáo KHTH"), 5, 340, 105, 365);
	m_wndBckhth.Create(this,110, 340, 825, 365);
	m_wndNameLabel.Create(this, _T("Name"), 5, 369, 105, 394);
	m_wndName.Create(this,110, 369, 665, 394);
	m_wndIndexLabel.Create(this, _T("Số thứ tự"), 671, 369, 751, 394);
	m_wndIndexNo.Create(this,756, 369, 826, 394);
	m_wndGroupLabel.Create(this, _T("Group"), 5, 399, 105, 424);
	m_wndGroupType.Create(this,110, 399, 825, 424);
	m_wndAdressLabel.Create(this, _T("Địa chỉ"), 5, 429, 105, 454);
	m_wndAddress.Create(this,110, 429, 825, 454);
	m_wndDescription.Create(this, _T("Mô tả"), 5, 459, 105, 484);
	m_wndMo_ta.Create(this,110, 459, 825, 518);
	m_wndSOD.Create(this, _T("SOD"), 635, 523, 715, 548);
	m_wndActive.Create(this, _T("Active"), 720, 523, 825, 548);
	m_wndAdd.Create(this, _T("&Add"), 455, 554, 525, 579);
	m_wndEdit.Create(this, _T("&Edit"), 530, 554, 600, 579);
	m_wndDelete.Create(this, _T("&Delete"), 605, 554, 675, 579);
	m_wndSave.Create(this, _T("&Save"), 680, 554, 750, 579);
	m_wndCancel.Create(this, _T("&Cancel"), 755, 554, 825, 579);*/

	m_wndRoomList.Create(this, 5, 5, 826, 276);
	m_wndTypeLabel.Create(this, _T("Type"), 5, 280, 105, 305);
	m_wndType.Create(this, 110, 280, 464, 305);
	m_wndSectionLabel.Create(this, _T("Section"), 471, 280, 568, 305);
	m_wndSection.Create(this, 573, 280, 826, 305);
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 5, 310, 105, 335);
	m_wndExamType.Create(this, 110, 310, 464, 335);
	m_wndZoneLabel.Create(this, _T("Báo cáo khu"), 471, 310, 568, 335);
	m_wndZone.Create(this, 573, 310, 826, 335);
	m_wndBckhthLabel.Create(this, _T("Báo cáo KHTH"), 5, 340, 105, 365);
	m_wndBckhth.Create(this, 110, 340, 464, 365);
	m_wndChuyenkhoaLabel.Create(this, _T("Chuyên khoa*"), 471, 340, 568, 365);
	m_wndChuyenkhoa.Create(this, 573, 340, 826, 365);
	m_wndNameLabel.Create(this, _T("Name"), 5, 369, 105, 394);
	m_wndName.Create(this, 110, 369, 665, 394);
	m_wndIndexLabel.Create(this, _T("Số thứ tự"), 671, 369, 751, 394);
	m_wndIndexNo.Create(this, 756, 369, 826, 394);
	m_wndGroupLabel.Create(this, _T("Group"), 5, 399, 105, 424);
	m_wndGroupType.Create(this, 110, 399, 825, 424);
	m_wndAdressLabel.Create(this, _T("Địa chỉ"), 5, 429, 105, 454);
	m_wndAddress.Create(this, 110, 429, 825, 454);
	m_wndDescription.Create(this, _T("Mô tả"), 5, 459, 105, 484);
	m_wndMo_ta.Create(this, 110, 459, 825, 518);
	m_wndSOD.Create(this, _T("SOD"), 635, 523, 715, 548);
	m_wndActive.Create(this, _T("Active"), 720, 523, 825, 548);
	m_wndAdd.Create(this, _T("&Add"), 455, 554, 525, 579);
	m_wndEdit.Create(this, _T("&Edit"), 530, 554, 600, 579);
	m_wndDelete.Create(this, _T("&Delete"), 605, 554, 675, 579);
	m_wndSave.Create(this, _T("&Save"), 680, 554, 750, 579);
	m_wndCancel.Create(this, _T("&Cancel"), 755, 554, 825, 579);


}
void CHMSRoomSetupDialog::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndName.SetLimitText(128);
	m_wndName.SetInitCap(true);
	m_wndName.SetCheckValue(true);
	//	m_wndType.SetCheckValue(true);
	m_wndSection.SetLimitText(12);
	m_wndSection.SetInitCap(true);
	//	m_wndSection.SetCheckValue(true);

	m_wndAddress.SetLimitText(21);

	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoomList.InsertColumn(2, _T("Số TT"), CFMT_NUMBER, 40);
	m_wndRoomList.InsertColumn(3, _T("Section"), CFMT_TEXT, 70);
	m_wndRoomList.InsertColumn(4, _T("Địa chỉ"), CFMT_TEXT, 120);
	m_wndRoomList.InsertColumn(5, _T("Type"), CFMT_TEXT, 0);
	m_wndRoomList.InsertColumn(6, _T("Active"), CFMT_TEXT, 60);
	m_wndRoomList.InsertColumn(7, _T("Báo cáo theo khu"), CFMT_TEXT, 100);
	m_wndRoomList.InsertColumn(8, _T("Exam Type"), CFMT_TEXT, 120);
	m_wndRoomList.InsertColumn(9, _T("Nhóm"), CFMT_TEXT, 120);
	m_wndRoomList.InsertColumn(10, _T("Chuyên khoa"), CFMT_TEXT, 120);


	m_wndExamType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExamType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndZone.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndZone.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndGroupType.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndGroupType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndBckhth.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndBckhth.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndChuyenkhoa.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndChuyenkhoa.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_hms_roomlistTbl.SetTableName(_T("hms_roomlist"));
	m_hms_roomlistTbl.AddField(_T("hrl_createdby"), dfText, 15);
	m_hms_roomlistTbl.AddField(_T("hrl_createddate"), dfDateTime);
	m_hms_roomlistTbl.AddField(_T("hrl_updatedby"), dfText, 15);
	m_hms_roomlistTbl.AddField(_T("hrl_updateddate"), dfDateTime);
	m_hms_roomlistTbl.AddField(_T("hrl_id"), dfLong);
	m_hms_roomlistTbl.AddField(_T("hrl_deptid"), dfText, 7);
	m_hms_roomlistTbl.AddField(_T("hrl_name"), dfText, 128);
	m_hms_roomlistTbl.AddField(_T("hrl_type"), dfInteger);
	m_hms_roomlistTbl.AddField(_T("hrl_section"), dfText, 7);
	m_hms_roomlistTbl.AddField(_T("hrl_active"), dfText, 1);
	m_hms_roomlistTbl.AddField(_T("hrl_isreq"), dfText, 1);
	m_hms_roomlistTbl.AddField(_T("hrl_zone"), dfText, 16);
	m_hms_roomlistTbl.AddField(_T("hrl_inscode"), dfText, 2);
	m_hms_roomlistTbl.AddField(_T("hrl_group"), dfText, 10);
	m_hms_roomlistTbl.AddField(_T("hrl_address"), dfText, 21);
	m_hms_roomlistTbl.AddField(_T("hrl_index"), dfLong);
	m_hms_roomlistTbl.AddField(_T("hrl_desc"), dfText, 512);
	m_hms_roomlistTbl.AddField(_T("hrl_for_report"), dfText, 3);
	m_hms_roomlistTbl.AddField(_T("hrl_chuyenkhoa"), dfText, 3);
}
void CHMSRoomSetupDialog::OnSetWindowEvents() {
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.SetWindowText(_T("Room List"));
	m_wndRoomList.AddEvent(7, _T("Search"), _OnRoomListSearchFnc);
	//m_wndRoomList.AddEvent(1, _T("Delete"), _OnRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
	//m_wndSection.SetEvent(WE_CHANGE, _OnSectionChangeFnc);
	//m_wndSection.SetEvent(WE_SETFOCUS, _OnSectionSetfocusFnc);
	//m_wndSection.SetEvent(WE_KILLFOCUS, _OnSectionKillfocusFnc);
	m_wndSection.SetEvent(WE_CHECKVALUE, _OnSectionCheckValueFnc);
	m_wndZone.SetEvent(WE_CHECKVALUE, _OnZoneCheckValueFnc);
	m_wndZone.SetEvent(WE_LOADDATA, _OnZoneLoadDataFnc);
	m_wndGroupType.SetEvent(WE_LOADDATA, _OnGroupTypeLoadDataFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndIndexNo.SetEvent(WE_CHECKVALUE, _OnIndexNoCheckValueFnc);
	m_wndMo_ta.SetEvent(WE_CHECKVALUE, _OnMo_taCheckValueFnc);
	m_wndBckhth.SetEvent(WE_LOADDATA, _OnBckhthLoadDataFnc);
	m_wndChuyenkhoa.SetEvent(WE_LOADDATA, _OnChuyenkhoaLoadDataFnc);
	SetMode(VM_NONE);
	OnRoomListLoadData();
}
void CHMSRoomSetupDialog::OnDoDataExchange(CDataExchange* pDX) {
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSection.GetDlgCtrlID(), m_szSection);
	DDX_Text(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
	DDX_TextEx(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);
	DDX_TextEx(pDX, m_wndGroupType.GetDlgCtrlID(), m_szGroupTypeKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndIndexNo.GetDlgCtrlID(), m_nIndexNo);
	DDX_Text(pDX, m_wndMo_ta.GetDlgCtrlID(), m_szMo_ta);
	DDX_TextEx(pDX, m_wndBckhth.GetDlgCtrlID(), m_szBckhthKey);
	DDX_TextEx(pDX, m_wndChuyenkhoa.GetDlgCtrlID(), m_szChuyenkhoaKey);
}
void CHMSRoomSetupDialog::GetDataToScreen()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_roomlist WHERE hrl_id=%d and hrl_deptid='%s'"), m_nID, m_szDeptID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()) {
		rs.GetValue(_T("hrl_name"), m_szName);
		rs.GetValue(_T("hrl_type"), m_szTypeKey);
		rs.GetValue(_T("hrl_section"), m_szSection);
		rs.GetValue(_T("hrl_active"), tmpStr);
		m_bActive = tmpStr == _T("Y") ? true : false;
		rs.GetValue(_T("hrl_isreq"), tmpStr);
		m_bSOD = tmpStr == _T("Y") ? true : false;
		rs.GetValue(_T("hrl_zone"), m_szZoneKey);
		rs.GetValue(_T("hrl_inscode"), m_szExamTypeKey);
		rs.GetValue(_T("hrl_group"), m_szGroupTypeKey);
		rs.GetValue(_T("hrl_address"), m_szAddress);
		rs.GetValue(_T("hrl_index"), m_nIndexNo);
		rs.GetValue(_T("hrl_desc"), m_szMo_ta);
		rs.GetValue(_T("hrl_for_report"), m_szBckhthKey);
		rs.GetValue(_T("hrl_chuyenkhoa"), m_szChuyenkhoaKey);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSRoomSetupDialog::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		m_hms_roomlistTbl.SetValue(_T("hrl_createdby"), pMF->GetCurrentUser());
		m_hms_roomlistTbl.SetValue(_T("hrl_createddate"), pMF->GetSysDateTime());
		szSQL.Format(_T("select coalesce(max(hrl_id), 0)+1 FROM hms_roomlist WHERE hrl_deptid='%s' "), m_szDeptID);
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_hms_roomlistTbl.SetValue(_T("hrl_updatedby"), pMF->GetCurrentUser());
	m_hms_roomlistTbl.SetValue(_T("hrl_updateddate"), pMF->GetSysDateTime());
	m_hms_roomlistTbl.SetValue(_T("hrl_id"), m_nID);
	m_hms_roomlistTbl.SetValue(_T("hrl_deptid"), m_szDeptID);
	m_hms_roomlistTbl.SetValue(_T("hrl_name"), m_szName);
	m_hms_roomlistTbl.SetValue(_T("hrl_type"), m_szTypeKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_section"), m_szSection);
	m_hms_roomlistTbl.SetValue(_T("hrl_active"), m_bActive ? _T("Y") : _T("N"));
	m_hms_roomlistTbl.SetValue(_T("hrl_isreq"), m_bSOD ? _T("Y") : _T("N"));
	m_hms_roomlistTbl.SetValue(_T("hrl_zone"), m_szZoneKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_inscode"), m_szExamTypeKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_group"), m_szGroupTypeKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_address"), m_szAddress);
	m_hms_roomlistTbl.SetValue(_T("hrl_index"), m_nIndexNo);
	m_hms_roomlistTbl.SetValue(_T("hrl_desc"), m_szMo_ta);
	m_hms_roomlistTbl.SetValue(_T("hrl_for_report"), m_szBckhthKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_chuyenkhoa"), m_szChuyenkhoaKey);
}
void CHMSRoomSetupDialog::SetDefaultValues() {
	m_nID = 1;
	m_szName.Empty();
	m_szTypeKey.Empty();
	m_bSOD = FALSE;
	m_bActive = FALSE;
	//m_szSection.Empty();
	m_szExamTypeKey.Empty();
	m_szAddress.Empty();
	m_szMo_ta.Empty();

}
int CHMSRoomSetupDialog::SetMode(int nMode) {
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
		m_wndType.SetFocus();
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 3, 4, -1);
		m_wndName.SetFocus();
		break;
	case VM_VIEW:
		EnableControls(FALSE);
		EnableButtons(FALSE, 3, 4, -1);
		break;
	case VM_NONE:
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 6, -1);
		SetDefaultValues();
		m_wndAdd.SetFocus();
		break;
	};
	UpdateData(FALSE);
	return nOldMode;
}
void CHMSRoomSetupDialog::OnAddSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnAddHMSRoomSetupDialog();
}

int CHMSRoomSetupDialog::OnIndexNoCheckValue()
{
	return 0;
}

void CHMSRoomSetupDialog::OnEditSelect() {
	OnEditHMSRoomSetupDialog();
}
void CHMSRoomSetupDialog::OnDeleteSelect() {
	OnDeleteHMSRoomSetupDialog();
}
void CHMSRoomSetupDialog::OnSaveSelect() {
	OnSaveHMSRoomSetupDialog();
}
void CHMSRoomSetupDialog::OnCancelSelect() {
	OnCancelHMSRoomSetupDialog();
}
void CHMSRoomSetupDialog::OnRoomListDblClick() {

}
int CHMSRoomSetupDialog::OnAddressCheckValue() {
	return 0;
}
long CHMSRoomSetupDialog::OnGroupTypeLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndGroupType.DeleteAllItems();
	int nCount = 0;
	if (m_wndGroupType.IsSearchKey() && !m_szGroupTypeKey.IsEmpty()) {
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupTypeKey);
	}
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as groupname from hms_fee_group where substr(hfg_id, 1,2) in ('B1', 'B2', 'B3') AND HFG_ACTIVE='Y' %s order by hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndGroupType.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("groupname")),
			NULL);
		rs.MoveNext();
	}

	return nCount;
}
void CHMSRoomSetupDialog::OnRoomListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nID = ToLong(m_wndRoomList.GetItemText(nNewItem, 0));
	GetDataToScreen();
}
int CHMSRoomSetupDialog::OnRoomListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnDeleteHMSRoomSetupDialog();
	return 0;
}
long CHMSRoomSetupDialog::OnRoomListLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad();
	m_wndRoomList.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT r.*, ") \
		_T(" get_syssel_desc('HMS_EXAM_TYPE', hrl_inscode) as exam_type, ") \
		_T(" get_syssel_desc('hms_chuyenkhoa_list', hrl_chuyenkhoa) as chuyenkhoa_type, ") \
		_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id=hrl_group) as groupname") \
		_T(" FROM hms_roomlist r ") \
		_T(" WHERE hrl_deptid='%s' ") \
		_T(" ORDER BY hrl_id "), m_szDeptID);
	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF()) {
		m_wndRoomList.AddItems(
			rs.GetValue(_T("hrl_id")),
			rs.GetValue(_T("hrl_name")),
			rs.GetValue(_T("hrl_index")),
			rs.GetValue(_T("hrl_section")),
			rs.GetValue(_T("hrl_address")),
			rs.GetValue(_T("hrl_type")),
			rs.GetValue(_T("hrl_active")),
			rs.GetValue(_T("hrl_zone")),
			rs.GetValue(_T("exam_type")),
			rs.GetValue(_T("groupname")),
			rs.GetValue(_T("chuyenkhoa_type")),

			NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad();
	return nCount;

}
/*void CHMSRoomSetupDialog::OnNameChange(){

} */
/*void CHMSRoomSetupDialog::OnNameSetfocus(){

} */
/*void CHMSRoomSetupDialog::OnNameKillfocus(){

} */
int CHMSRoomSetupDialog::OnNameCheckValue() {
	return 0;
}
void CHMSRoomSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSRoomSetupDialog::OnTypeSelendok() {

}
/*void CHMSRoomSetupDialog::OnTypeSetfocus(){

}*/
/*void CHMSRoomSetupDialog::OnTypeKillfocus(){

}*/
long CHMSRoomSetupDialog::OnTypeLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndType.DeleteAllItems();
	int nCount = 0;
	if (m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()) {
		//szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description from sys_sel where ss_id='hms_dept_category' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndType.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("description")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSRoomSetupDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

} */
/*void CHMSRoomSetupDialog::OnSectionChange(){

} */
/*void CHMSRoomSetupDialog::OnSectionSetfocus(){

} */
/*void CHMSRoomSetupDialog::OnSectionKillfocus(){

} */
int CHMSRoomSetupDialog::OnSectionCheckValue() {
	return 0;
}
int CHMSRoomSetupDialog::OnZoneCheckValue() {
	return 0;
}
int CHMSRoomSetupDialog::OnAddHMSRoomSetupDialog() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;

}
int CHMSRoomSetupDialog::OnEditHMSRoomSetupDialog() {
	if (GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;

}
int CHMSRoomSetupDialog::OnDeleteHMSRoomSetupDialog() {
	if (GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nSel = m_wndRoomList.GetCurSel();
	if (nSel < 0) return 0;
	m_nID = ToInt(m_wndRoomList.GetItemText(nSel, 0));
	szSQL.Format(_T("SELECT count(*) FROM hms_exam WHERE he_deptid='%s' AND he_roomid =%d"), m_szDeptID, m_nID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0) {
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_bed WHERE hb_deptid='%s' AND hb_roomid =%d"), m_szDeptID, m_nID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0) {
		return -1;
	}

	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  hms_roomlist WHERE hrl_deptid='%s' AND hrl_id=%d"), m_szDeptID, m_nID);
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelHMSRoomSetupDialog();
		m_wndRoomList.DeleteItem(nSel);
	}
	return 0;
}
int CHMSRoomSetupDialog::OnSaveHMSRoomSetupDialog() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (GetMode() == VM_ADD) {
		szSQL = m_hms_roomlistTbl.GetInsertSQL();
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE hrl_id=%ld and hrl_deptid='%s' "), m_nID, m_szDeptID);
		szSQL = m_hms_roomlistTbl.GetUpdateSQL(_T("hrl_createdby,hrl_createddate,hrl_id,hrl_deptid"));
		szSQL += szWhere;
	}

	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
	{
		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
		OnRoomListLoadData();
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSRoomSetupDialog::OnCancelHMSRoomSetupDialog() {
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
int CHMSRoomSetupDialog::OnHMSRoomSetupDialogListLoadData() {
	return 0;
}

int CHMSRoomSetupDialog::OnMo_taCheckValue() {
	return 0;
}


long CHMSRoomSetupDialog::OnExamTypeLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndExamType, _T("HMS_EXAM_TYPE"), m_szExamTypeKey);
}

long CHMSRoomSetupDialog::OnZoneLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndZone, _T("HMS_TREAT_ZONE"), m_szZoneKey);
}

long CHMSRoomSetupDialog::OnBckhthLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndBckhth, _T("khth_report_list"), m_szBckhthKey);
}

long CHMSRoomSetupDialog::OnChuyenkhoaLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndChuyenkhoa, _T("hms_chuyenkhoa_list"), m_szChuyenkhoaKey);
}

void CHMSRoomSetupDialog::OnRoomListSearch()
{
	CSearchPopup* newPopup = new CSearchPopup(&m_wndRoomList);
	newPopup->m_nSearchCol = 1;
	newPopup->ShowPopup(&m_wndRoomList);
}