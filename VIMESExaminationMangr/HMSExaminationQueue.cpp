#include "HMSExaminationQueue.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSReportForms\PrintForms.h"
#include "HMSClinicZoneDialog.h"
#include "UpdateZoneInfor.h"

static void _OnReExamSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnReExamSelect();
}
static void _OnOutPatientSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnOutPatientSelect();
}

static void _OnAllSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnOpeningSelect();
}
static void _OnExaminedSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnExaminedSelect();
}
static void _OnTerminatedSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnTerminatedSelect();
}
static void _OnRoomSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSExaminationQueueList*)pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnRoomSelendokFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnRoomAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSExaminationQueueList*)pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnObjectSelendokFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnFromDateSetfocus();} */
	/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
		((CHMSExaminationQueueList *)pWnd)->OnFromDateKillfocus();
	} */
static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnToDateSetfocus();} */
	/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
		((CHMSExaminationQueueList *)pWnd)->OnToDateKillfocus();
	} */
static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnToDateCheckValue();
}
static void _OnTimeSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSExaminationQueueList*)pWnd)->OnTimeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTimeSelendokFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnTimeSelendok();
}
/*static void _OnTimeSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnTimeKillfocus();
}*/
/*static void _OnTimeKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnTimeKillfocus();
}*/
static long _OnTimeLoadDataFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnTimeLoadData();
}
/*static void _OnTimeAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnTimeAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnDocumentNoSetfocus();} */
	/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
		((CHMSExaminationQueueList *)pWnd)->OnDocumentNoKillfocus();
	} */
static int _OnDocumentNoCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnDocumentNoCheckValue();
}
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnPatientNameSetfocus();} */
	/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
		((CHMSExaminationQueueList *)pWnd)->OnPatientNameKillfocus();
	} */
static int _OnPatientNameCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnPatientNameCheckValue();
}
static void _OnRefrehSelectFnc(CWnd* pWnd) {
	CHMSExaminationQueueList* pVw = (CHMSExaminationQueueList*)pWnd;
	pVw->OnRefrehSelect();
}
static long _OnPatientListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnPatientListLoadData();
}
static void _OnPatientListDblClickFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnPatientListDblClick();
}
static void _OnPatientListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSExaminationQueueList*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
}
static int _OnPatientListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnPatientListDeleteItem();
}
static int _OnPatientListSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnPatientListDblClick();
	return 0;
}

static int _OnInVongDeoTayFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->InVongDeoTay();
	return 0;
}
static int _OnAddHMSExaminationQueueListFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnAddHMSExaminationQueueList();
}
static int _OnEditHMSExaminationQueueListFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnEditHMSExaminationQueueList();
}
static int _OnDeleteHMSExaminationQueueListFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnDeleteHMSExaminationQueueList();
}
static int _OnSaveHMSExaminationQueueListFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnSaveHMSExaminationQueueList();
}
static int _OnCancelHMSExaminationQueueListFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnCancelHMSExaminationQueueList();
}
static void _OnNotPaidSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnNotPaidSelect();
}

static int _OnRecaculateFeeListSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnRecaculateFeeListSelect();
	return 0;
}
static int _OnExportFeeListSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnExportFeeListSelect();
	return 0;
}
static void _OnCovid10SelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnCovid10Select();
}

static int _OnExportPatientListSelectFnc(CWnd* pWnd) {
	((CHMSExaminationQueueList*)pWnd)->OnExportPatientListSelect();
	return 0;
}

static void _OnZoneSelectFnc(CWnd* pWnd)
{
	CHMSExaminationQueueList* pVw = (CHMSExaminationQueueList*)pWnd;
	pVw->OnZoneSelect();
}

static int _OnChangeZoneSelectFnc(CWnd* pWnd)
{
	((CHMSExaminationQueueList*)pWnd)->OnChangeZoneSelect();
	return 0;
}


static int _Onn_total_IndexCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->Onn_total_IndexCheckValue();
}
static int _Onn_total_tongtienCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->Onn_total_tongtienCheckValue();
}
static int _Onn_total_tongtamguiCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->Onn_total_tongtamguiCheckValue();
}
static int _Onn_total_tongtien_dattCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->Onn_total_tongtien_dattCheckValue();
}
static int _Onn_total_tongtien_chuattCheckValueFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->Onn_total_tongtien_chuattCheckValue();
}
static int _OnCurrentZoneCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSExaminationQueueList*)pWnd)->OnCurrentZoneCheckValue();
}

static int _OnSobenhnhanCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSExaminationQueueList*)pWnd)->OnSobenhnhanCheckValue();
}

static long _OnsubzoneLoadDataFnc(CWnd* pWnd) {
	return ((CHMSExaminationQueueList*)pWnd)->OnsubzoneLoadData();
}

static long _OnDeptNameLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSExaminationQueueList*)pWnd)->OnDeptNameLoadData();
}

static void _OnDeptNameSelendokFnc(CWnd* pWnd)
{
	((CHMSExaminationQueueList*)pWnd)->OnDeptNameSelendok();
}

static void _OnNextPageSelectFnc(CWnd* pWnd)
{
	((CHMSExaminationQueueList*)pWnd)->OnNextPageSelect();
}
static void _OnLastPageSelectFnc(CWnd* pWnd)
{
	((CHMSExaminationQueueList*)pWnd)->OnLastPageSelect();
}
static void _OnPrevPageSelectFnc(CWnd* pWnd)
{
	((CHMSExaminationQueueList*)pWnd)->OnPrevPageSelect();
}
static void _OnFirstPageSelectFnc(CWnd* pWnd)
{
	((CHMSExaminationQueueList*)pWnd)->OnFirstPageSelect();
}
static int _OnPageSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem)
{
	return ((CHMSExaminationQueueList*)pWnd)->OnPageSelectChange(nOldItem, nNewItem);
}

static long _OnPageLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSExaminationQueueList*)pWnd)->OnPageLoadData();
}

static int _OnExamListCancelItemFnc(CWnd* pWnd)
{
	return ((CHMSExaminationQueueList*)pWnd)->OnExamListCancelItem();
}

static void _OnCancerPatientSelectFnc(CWnd* pWnd) 
{
	((CHMSExaminationQueueList*)pWnd)->OnCancerPatientSelect();
}

CHMSExaminationQueueList::CHMSExaminationQueueList() {

	m_nDlgWidth = 1005;
	m_nDlgHeight = 625;
	SetDefaultValues();
	m_nNumber = 0;
	m_nSobenhnhan = 0;
	m_nn_total_Index = 0;
	m_nn_total_tongtien = 0;
	m_nn_total_tongtamgui = 0;
	m_nn_total_tongtien_datt = 0;
	m_nn_total_tongtien_chuatt = 0;
	m_nRowSel = -1;
	m_nDefaultLimit = 3000;
	m_nDefaultOffset = 3000;
	m_nTotalPage = 0;
	m_nCurPage = 0;
	m_bLoadPage = false;
}
CHMSExaminationQueueList::~CHMSExaminationQueueList()
{
}
void CHMSExaminationQueueList::OnCreateComponents()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndSearchInformation.Create(this, _T("Search Information"), 210, 5, 1005, 120);
	m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 125, 1005, 646);
	m_wndCurrentZone.Create(this, 360, 6, 1005, 27);
	m_wndDeptlabel.Create(this, _T("Khoa"), 214, 30, 284, 55);
	m_wndStatusGroupBox.Create(this, _T("Status"), 5, 5, 205, 120);
	m_wndDeptName.Create(this, 289, 30, 539, 55);
	m_wndSubZoneLabel.Create(this, _T("Khu"), 545, 31, 645, 56);
	m_wndsubzone.Create(this, 650, 31, 1000, 56);

	m_wndAll.Create(this, _T("All"), 10, 30, 100, 70);
	m_wndOpening.Create(this, _T("Waitting"), 105, 30, 195, 70);

	if (pMF->m_bPrintSummarize)
	{
		m_wndExamined.Create(this, _T("Paid"), 10, 71, 100, 111);
	}
	else
	{
		m_wndExamined.Create(this, _T("Examined"), 10, 71, 100, 111);
	}
	m_wndTerminated.Create(this, _T("Terminated"), 105, 71, 195, 111);

	m_wndRoomLabel.Create(this, _T("Room"), 214, 60, 284, 85);
	m_wndRoom.Create(this, 290, 60, 540, 85);
	m_wndObjectLabel.Create(this, _T("Object"), 545, 60, 645, 85);
	m_wndObject.Create(this, 650, 60, 765, 85);
	m_wndTimeLabel.Create(this, _T("Time"), 770, 60, 860, 85);
	m_wndTime.Create(this, 865, 60, 955, 85);
	m_wndNumber.Create(this, 960, 60, 1000, 85);



	m_wndFromDateLabel.Create(this, _T("From Date"), 214, 90, 284, 115);
	m_wndFromDate.Create(this, 290, 90, 375, 115);
	m_wndToDateLabel.Create(this, _T("To Date"), 380, 90, 450, 115);
	m_wndToDate.Create(this, 455, 90, 540, 115);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 545, 90, 645, 115);
	m_wndPatientName.Create(this, 650, 90, 765, 115);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 770, 90, 860, 115);
	m_wndDocumentNo.Create(this, 865, 90, 955, 115);
	m_wndRefreh.Create(this, _T("@"), 960, 90, 1000, 115);

	if (pMF->CheckPermission(_T("EM.100.02")))
	{
		m_wndNotPaid.Create(this, _T(""), 482, 126, 613, 145);
		m_wndNotPaid.ModifyStyle(WS_TABSTOP, 0);
	}	
	m_wndCovid10.Create(this, _T("Có xét nghiệm covid (+)"), 200, 126, 380, 146);
	m_wndCovid10.SetTextColor(RGB(255, 0, 0));

	if (pMF->GetCurrentDepartmentID() == _T("TTHTSS") || pMF->GetCurrentDepartmentID() == _T("TTDTHM"))
	{
		m_wndReExam.Create(this, _T("Reexam"), 624, 126, 749, 146);
		m_wndReExam.ModifyStyle(WS_TABSTOP, 0);
	}
	m_wndOutPatient.Create(this, _T("Outpatient"), 760, 126, 866, 146);
	m_wndOutPatient.ModifyStyle(WS_TABSTOP, 0);

	m_wndCancerPatient.Create(this, _T("Khám ung thư"), 875, 126, 1000, 146);
	m_wndCancerPatient.ModifyStyle(WS_TABSTOP, 0);

	m_wndPatientList.Create(this, 10, 151, 995, 608);
	m_wndSobenhnhanlabel.Create(this, _T("Số BN"), 6, 614, 50, 639);
	m_wndSobenhnhan.Create(this, 55, 614, 116, 639);
	m_wndTongluotkhamlabel.Create(this, _T("Lượt khám"), 117, 614, 189, 639);
	m_wndn_total_Index.Create(this, 189, 614, 254, 639);
	if (pMF->CheckPermission(_T("EM.100.100")))
	{
		m_wndTongtienlabel.Create(this, _T("Tổng tiền"), 254, 614, 329, 639);
		m_wndn_total_tongtien.Create(this, 329, 614, 419, 639);
		m_wndTongtamguilabel.Create(this, _T("Tổng tạm gửi"), 420, 614, 505, 639);
		m_wndn_total_tongtamgui.Create(this, 505, 614, 595, 639);
		m_wndTongtien_datt_label.Create(this, _T("Tổng tiền đã TT"), 595, 614, 699, 639);
		m_wndn_total_tongtien_datt.Create(this, 699, 614, 784, 639);
		m_wndTongtien_chuatt_label.Create(this, _T("Tổng tiền chưa TT"), 784, 614, 903, 639);
		m_wndn_total_tongtien_chuatt.Create(this, 908, 614, 993, 639);		
	}
	else
	{
		m_wndTongtienlabel.Create(this, _T("Tổng tiền"), 0, 0, 0, 0);
		m_wndn_total_tongtien.Create(this, 0, 0, 0, 0);
		m_wndTongtamguilabel.Create(this, _T("Tổng tạm gửi"), 0, 0, 0, 0);
		m_wndn_total_tongtamgui.Create(this, 0, 0, 0, 0);
		m_wndTongtien_datt_label.Create(this, _T("Tổng tiền đã TT"), 0, 0, 0, 0);
		m_wndn_total_tongtien_datt.Create(this, 0, 0, 0, 0);
		m_wndTongtien_chuatt_label.Create(this, _T("Tổng tiền chưa TT"), 0, 0, 0, 0);
		m_wndn_total_tongtien_chuatt.Create(this, 0, 0, 0, 0);

	}
	m_wndFirstPage.Create(this, _T("|<"), 415, 125, 445, 150);
	m_wndPrevPage.Create(this, _T("<"), 450, 125, 480, 150);
	m_wndPage.Create(this, 485, 125, 515, 145);
	m_wndNextPage.Create(this, _T(">"), 520, 125, 550, 150);
	m_wndLastPage.Create(this, _T(">|"), 555, 125, 585, 150);
	ShowPageControlBar(false);
}
void CHMSExaminationQueueList::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//	m_wndFromDate.SetCheckValue(true);
	//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//	m_wndToDate.SetCheckValue(true);
	//	m_wndTime.SetCheckValue(true);
	m_wndTime.LimitText(35);
	//	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(128);
	m_wndDocumentNo.SetLimitText(80);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetNotEmpty(false);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);

	//	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndNumber.SetCurrencyFormat(true);
	m_wndNumber.SetReadOnly(true);

	m_wndn_total_Index.SetCurrencyFormat(true);
	m_wndn_total_Index.SetReadOnly(true);

	m_wndn_total_tongtien.SetCurrencyFormat(true);
	m_wndn_total_tongtien.SetReadOnly(true);

	m_wndn_total_tongtamgui.SetCurrencyFormat(true);
	m_wndn_total_tongtamgui.SetReadOnly(true);

	m_wndn_total_tongtien_datt.SetCurrencyFormat(true);
	m_wndn_total_tongtien_datt.SetReadOnly(true);

	m_wndn_total_tongtien_chuatt.SetCurrencyFormat(true);
	m_wndn_total_tongtien_chuatt.SetReadOnly(true);

	m_wndSobenhnhan.SetCurrencyFormat(true);
	m_wndSobenhnhan.SetReadOnly(true);
	//m_wndPatientList.EnableRowHeader(true, -1, 50);
	//m_wndPatientList.SetItemTextColor(0, RGB(0, 0, 0));
	//m_wndPatientList.EnablePaginator(3000);
	//m_wndPatientList.m_nItemHeight = 30;
	m_wndPatientList.InsertColumn(0, _T("Sheet No"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(1, _T("Phòng khám"), CFMT_TEXT, 250);
	m_wndPatientList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 170);
	m_wndPatientList.InsertColumn(4, _T("Age"), CFMT_TEXT | CFMT_CENTER, 40);
	m_wndPatientList.InsertColumn(5, _T("Sex"), CFMT_TEXT | CFMT_CENTER, 45);
	m_wndPatientList.InsertColumn(6, _T("Object"), CFMT_TEXT, 90);

	//m_wndPatientList.EnableVirtualMode();
	//m_wndPatientList.SetVirtualRows(5000000000);

	if (pMF->CheckPermission(_T("EM.100.100")))
	{
		m_wndPatientList.InsertColumn(7, _T("Số lần khám"), CFMT_MONEY | CFMT_CENTER, 90);
	}
	else
	{
		m_wndPatientList.InsertColumn(7, _T("Số lần khám"), CFMT_MONEY | CFMT_CENTER, 0);
	}

	m_wndPatientList.InsertColumn(8, _T("TG đăng kí"), CFMT_TEXT, 120);
	//m_wndPatientList.InsertColumn(8, _T("Exam Date"), CFMT_DATE | CFMT_CENTER, 125);
	m_wndPatientList.InsertColumn(9, _T("TG khám"), CFMT_TEXT | CFMT_CENTER, 120);
	//m_wndPatientList.InsertColumn(9, _T("End Date"), CFMT_DATE | CFMT_CENTER, 125);
	m_wndPatientList.InsertColumn(10, _T("TG kết thúc"), CFMT_TEXT | CFMT_CENTER, 120);
	m_wndPatientList.InsertColumn(11, _T("Status"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(12, _T("Suggestion"), CFMT_TEXT, 180);
	//Ghép trường hướng điều trị + vào khoa
	//Thêm trường kết luận
	m_wndPatientList.InsertColumn(13, _T("Kết luận"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(14, _T("PatientNo"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(15, _T("RoomID"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(16, _T("ReceptIdx"), CFMT_TEXT, 0);
	//m_wndPatientList.InsertColumn(15, _T("Admit Date"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(17, _T(""), CFMT_TEXT, 0); //treat_mode
	m_wndPatientList.InsertColumn(18, _T("Bác sĩ khám"), CFMT_TEXT, 180);

	if (pMF->CheckPermission(_T("EM.100.100")))
	{
		m_wndPatientList.InsertColumn(19, _T("Tổng tiền"), CFMT_MONEY, 120);
		m_wndPatientList.InsertColumn(20, _T("Tổng tạm gửi"), CFMT_MONEY, 120);
		m_wndPatientList.InsertColumn(21, _T("Số tiền đã TT"), CFMT_MONEY, 120);
		m_wndPatientList.InsertColumn(22, _T("Số tiền chưa TT"), CFMT_MONEY, 120);
	}
	else
	{
		m_wndPatientList.InsertColumn(19, _T("Tổng tiền"), CFMT_MONEY, 0);
		m_wndPatientList.InsertColumn(20, _T("Tổng tạm gửi"), CFMT_MONEY, 0);
		m_wndPatientList.InsertColumn(21, _T("Số tiền đã TT"), CFMT_MONEY, 0);
		m_wndPatientList.InsertColumn(22, _T("Số tiền chưa TT"), CFMT_MONEY, 0);
	}

	m_wndTime.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_CENTER, 50);
	m_wndTime.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndRoom.InsertColumn(1, _T("STT"), CFMT_NUMBER, 80);
	m_wndRoom.InsertColumn(2, _T("Name"), CFMT_TEXT, 320);

	m_wndRoom.InsertColumn(3, _T("Khoa"), CFMT_TEXT, 90);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Đối tượng"), CFMT_TEXT, 390);

	m_wndDeptName.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptName.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndsubzone.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndsubzone.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndsubzone.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 450);

	m_wndPage.InsertColumn(0, _T("Page"), CFMT_TEXT, 40);
	m_wndPage.Format(1, 0);
}
void CHMSExaminationQueueList::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndReExam.SetEvent(WE_CLICK, _OnReExamSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndExamined.SetEvent(WE_CLICK, _OnExaminedSelectFnc);
	m_wndTerminated.SetEvent(WE_CLICK, _OnTerminatedSelectFnc);

	m_wndDeptName.SetEvent(WE_SELENDOK, _OnDeptNameSelendokFnc);

	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTime.SetEvent(WE_SELENDOK, _OnTimeSelendokFnc);
	//m_wndTime.SetEvent(WE_SETFOCUS, _OnTimeSetfocusFnc);
	//m_wndTime.SetEvent(WE_KILLFOCUS, _OnTimeKillfocusFnc);
	m_wndTime.SetEvent(WE_SELCHANGE, _OnTimeSelectChangeFnc);
	m_wndTime.SetEvent(WE_LOADDATA, _OnTimeLoadDataFnc);
	//m_wndTime.SetEvent(WE_ADDNEW, _OnTimeAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndRefreh.SetEvent(WE_CLICK, _OnRefrehSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.SetWindowText(_T("Patient Information"));
	m_wndPatientList.AddEvent(1, _T("Select Patient"), _OnPatientListSelectFnc);
	m_wndCovid10.SetEvent(WE_CLICK, _OnCovid10SelectFnc);
	m_wndDeptName.SetEvent(WE_LOADDATA, _OnDeptNameLoadDataFnc);
	m_wndZone.SetEvent(WE_CLICK, _OnZoneSelectFnc);
	m_wndsubzone.SetEvent(WE_LOADDATA, _OnsubzoneLoadDataFnc);
	m_wndCancerPatient.SetEvent(WE_CLICK, _OnCancerPatientSelectFnc);

	m_wndn_total_Index.SetEvent(WE_CHECKVALUE, _Onn_total_IndexCheckValueFnc);
	m_wndn_total_tongtien.SetEvent(WE_CHECKVALUE, _Onn_total_tongtienCheckValueFnc);
	m_wndn_total_tongtamgui.SetEvent(WE_CHECKVALUE, _Onn_total_tongtamguiCheckValueFnc);
	m_wndn_total_tongtien_datt.SetEvent(WE_CHECKVALUE, _Onn_total_tongtien_dattCheckValueFnc);
	m_wndn_total_tongtien_chuatt.SetEvent(WE_CHECKVALUE, _Onn_total_tongtien_chuattCheckValueFnc);
	m_wndCurrentZone.SetEvent(WE_CHECKVALUE, _OnCurrentZoneCheckValueFnc);

	m_wndSobenhnhan.SetEvent(WE_CHECKVALUE, _OnSobenhnhanCheckValueFnc);


	//m_wndPatientList.AddEvent(0, _T("-"));
	//m_wndPatientList.AddEvent(2, _T("In Vòng Đeo Tay"), _OnInVongDeoTayFnc);
	//m_wndPatientList.AddEvent(2, _T("Tính lại chi phí"), _OnRecaculateFeeListSelectFnc);
	if (pMF->CheckPermission(_T("EM.100.02")))
	{
		m_wndPatientList.AddEvent(3, _T("Export Danh sách BN chưa thu phí"), _OnExportFeeListSelectFnc);
	}
	m_wndNotPaid.SetEvent(WE_CLICK, _OnNotPaidSelectFnc);

	m_wndPatientList.AddEvent(4, _T("Export Danh sách bệnh nhân"), _OnExportPatientListSelectFnc);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(5, _T("Phân khu khám bệnh nhân"), _OnChangeZoneSelectFnc);

	if (pMF->CheckPermission(_T("EM.UT.100.01")))
	{
		m_wndPatientList.AddEvent(0, _T("-"));
		m_wndPatientList.AddEvent(6, _T("Hủy phiếu khám bệnh sàng lọc ung thư"), _OnExamListCancelItemFnc);
	}

	/*
		m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
		AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationQueueListFnc, 0, 'A', VK_CONTROL);
		AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationQueueListFnc, 0, 'E', VK_CONTROL);
		AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationQueueListFnc, 0, 'D', VK_CONTROL);
		AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationQueueListFnc, 0, 'S', VK_CONTROL);
		AddEvent(0, _T("-"));
		AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationQueueListFnc, 0, 'T', VK_CONTROL);
	  */
	  //Layout
	  //AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	  //AddLayoutControl(&m_wndPatientListGroupBox, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	  //AddLayoutControl(&m_wndRoom, WS_RESIZEX, 100, 100, 50, 100);
	  //AddLayoutControl(&m_wndObjectLabel, WS_REPOSX, 50, 100, 100, 100);
	  //AddLayoutControl(&m_wndObject, WS_REPOSX|WS_RESIZEX, 50, 100, 25, 100);
	  //AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 25, 100, 100, 100);
	  //AddLayoutControl(&m_wndToDate, WS_REPOSX|WS_RESIZEX, 25, 100, 25, 100);
	  //AddLayoutControl(&m_wndTimeLabel, WS_REPOSX, 75, 100, 100, 100);
	  //AddLayoutControl(&m_wndTime, WS_REPOSX|WS_RESIZEX, 75, 100, 25, 100);
	  //AddLayoutControl(&m_wndDocumentNoLabel, WS_REPOSX, 75, 100, 100, 100);
	  //AddLayoutControl(&m_wndDocumentNo, WS_REPOSX|WS_RESIZEX, 75, 100, 25, 100);
	  //AddLayoutControl(&m_wndPatientNameLabel, WS_REPOSX, 50, 100, 100, 100);
	  //AddLayoutControl(&m_wndPatientName, WS_REPOSX|WS_RESIZEX, 50, 100, 25, 100);
	  //AddLayoutControl(&m_wndRefreh, WS_REPOSX, 100, 100, 100, 100);
	  //AddLayoutControl(&m_wndPatientList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	  //m_wndPatientList.SetAutoColumnSize(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szTimeKey = _T("1");
	m_szObjectKey.Empty();
	m_nStatus = 0;
	m_szCurrentZone = pMF->GetCurrentDepartmentName();
	m_szDeptNameKey = pMF->m_szDept;


	//m_szFromDate = _T("2012-01-01");
	m_szStatusKey.Empty();
	m_szRoomKey.Format(_T("%d"), pMF->GetCurrentRoomID());

	SetWindowFont(&m_wndNumber, GetFaceName(), GetFaceSize(), true);
	m_wndNumber.SetTextColor(RGB(0, 0, 255));
	SetWindowFont(&m_wndCovid10, GetFaceName(), GetFaceSize(), true);
	m_wndCovid10.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndn_total_Index, GetFaceName(), GetFaceSize() + 2, true);
	m_wndn_total_Index.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndn_total_tongtien, GetFaceName(), GetFaceSize() + 1, true);
	m_wndn_total_tongtien.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndn_total_tongtamgui, GetFaceName(), GetFaceSize() + 1, true);
	m_wndn_total_tongtamgui.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndn_total_tongtien_datt, GetFaceName(), GetFaceSize() + 1, true);
	m_wndn_total_tongtien_datt.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndn_total_tongtien_chuatt, GetFaceName(), GetFaceSize() + 1, true);
	m_wndn_total_tongtien_chuatt.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndCurrentZone, GetFaceName(), GetFaceSize() + 2, true);
	m_wndCurrentZone.SetTextColor(RGB(255, 128, 0));

	SetWindowFont(&m_wndSobenhnhan, GetFaceName(), GetFaceSize() + 2, true);
	m_wndSobenhnhan.SetTextColor(RGB(255, 128, 0));

	m_wndNextPage.SetEvent(WE_CLICK, _OnNextPageSelectFnc);
	m_wndLastPage.SetEvent(WE_CLICK, _OnLastPageSelectFnc);
	m_wndPrevPage.SetEvent(WE_CLICK, _OnPrevPageSelectFnc);
	m_wndFirstPage.SetEvent(WE_CLICK, _OnFirstPageSelectFnc);
	m_wndPage.SetEvent(WE_SELCHANGE, _OnPageSelectChangeFnc);
	m_wndPage.SetEvent(WE_LOADDATA, _OnPageLoadDataFnc);
    
	SetMode(VM_EDIT);    

}
void CHMSExaminationQueueList::OnDoDataExchange(CDataExchange* pDX) {
	if (m_wndReExam.GetSafeHwnd())
	{
		DDX_Check(pDX, m_wndReExam.GetDlgCtrlID(), m_bReExam);
	}
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nStatus);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTime.GetDlgCtrlID(), m_szTimeKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndNumber.GetDlgCtrlID(), m_nNumber);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);

	DDX_Text(pDX, m_wndn_total_Index.GetDlgCtrlID(), m_nn_total_Index);
	DDX_Text(pDX, m_wndn_total_tongtien.GetDlgCtrlID(), m_nn_total_tongtien);
	DDX_Text(pDX, m_wndn_total_tongtamgui.GetDlgCtrlID(), m_nn_total_tongtamgui);
	DDX_Text(pDX, m_wndn_total_tongtien_datt.GetDlgCtrlID(), m_nn_total_tongtien_datt);
	DDX_Text(pDX, m_wndn_total_tongtien_chuatt.GetDlgCtrlID(), m_nn_total_tongtien_chuatt);
	DDX_Text(pDX, m_wndSobenhnhan.GetDlgCtrlID(), m_nSobenhnhan);
	DDX_TextEx(pDX, m_wndsubzone.GetDlgCtrlID(), m_szsubzoneKey);
	DDX_TextEx(pDX, m_wndDeptName.GetDlgCtrlID(), m_szDeptNameKey);


	if (m_wndNotPaid.GetSafeHwnd())
	{
		DDX_Check(pDX, m_wndNotPaid.GetDlgCtrlID(), m_bNotPaid);
	}
	DDX_Check(pDX, m_wndCovid10.GetDlgCtrlID(), m_bCovid10);
	DDX_Text(pDX, m_wndCurrentZone.GetDlgCtrlID(), m_szCurrentZone);
	DDX_TextEx(pDX, m_wndPage.GetDlgCtrlID(), m_szPageKey);
	DDX_Check(pDX, m_wndCancerPatient.GetDlgCtrlID(), m_bCancerPatient);
}

void CHMSExaminationQueueList::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSExaminationQueueList::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSExaminationQueueList::SetDefaultValues() {
	m_bReExam = FALSE;
	m_nStatus = 0;
	m_szRoomKey.Empty();
	m_szObjectKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTimeKey.Empty();
	m_nDocumentNo = 0;
	m_szPatientName.Empty();
	m_bOutPatient = FALSE;
	m_bNotPaid = FALSE;
	m_bCovid10 = FALSE;
	m_szDeptNameKey.Empty();
	m_szsubzoneKey.Empty();
	m_szPageKey.Empty();
	m_bCancerPatient = FALSE;
}
int CHMSExaminationQueueList::SetMode(int nMode) {
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
		EnableButtons(FALSE, -1);
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

	if (pMF->m_bPrintSummarize) {
		if (pMF->CheckPermission(_T("15"))) {
			m_szObjectKey = _T("7");
			m_nStatus = 3;
			m_szPrescriptionKey = _T("S");
			m_wndObject.EnableWindow(FALSE);
		}
		else if (pMF->CheckPermission(_T("16")))
		{
			m_nStatus = 3;
			m_szPrescriptionKey = _T("D");
			m_wndObject.EnableWindow(TRUE);
		}
	}

	if (pMF->CheckPermission(_T("EM.100.99")))
	{
		//m_wndZone.EnableWindow(true);
		m_wndDeptName.EnableWindow(true);
		m_wndsubzone.EnableWindow(true);
	}
	else
	{
		m_wndZone.EnableWindow(false);
		m_wndDeptName.EnableWindow(false);
		m_wndsubzone.EnableWindow(false);
	}

	if (pMF->m_szDept == _T("C1.3"))
	{
		m_wndsubzone.EnableWindow(true);
	}

	m_wndCurrentZone.EnableWindow(FALSE);
	m_wndCurrentZone.SetReadOnly(true);
	UpdateData(FALSE);
	return nOldMode;
}

int CHMSExaminationQueueList::OnCurrentZoneCheckValue()
{
	return 0;
}
int CHMSExaminationQueueList::Onn_total_IndexCheckValue() {
	return 0;
}
/*void CHMSExaminationQueueList::Onn_total_tongtienChange(){

} */
/*void CHMSExaminationQueueList::Onn_total_tongtienSetfocus(){

} */
/*void CHMSExaminationQueueList::Onn_total_tongtienKillfocus(){

} */
int CHMSExaminationQueueList::Onn_total_tongtienCheckValue()
{
	return 0;
}

int CHMSExaminationQueueList::Onn_total_tongtamguiCheckValue()
{
	return 0;
}

int CHMSExaminationQueueList::Onn_total_tongtien_dattCheckValue()
{
	return 0;
}

int CHMSExaminationQueueList::Onn_total_tongtien_chuattCheckValue()
{
	return 0;
}

int CHMSExaminationQueueList::OnSobenhnhanCheckValue()
{
	return 0;
}


void CHMSExaminationQueueList::OnAllSelect() {
	UpdateData(TRUE);
	/*m_szStatusKey = _T("A");
	m_szPrescriptionKey.Empty();*/
	OnPatientListLoadData();
	UpdateData(FALSE);
}
void CHMSExaminationQueueList::OnOpeningSelect() {
	UpdateData(TRUE);
	OnPatientListLoadData();
	UpdateData(FALSE);
}
void CHMSExaminationQueueList::OnExaminedSelect() {
	UpdateData(TRUE);
	OnPatientListLoadData();
	UpdateData(FALSE);
}
void CHMSExaminationQueueList::OnTerminatedSelect() {
	UpdateData(TRUE);
	OnPatientListLoadData();
	UpdateData(FALSE);
}

void CHMSExaminationQueueList::OnZoneSelect()
{

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	if (pMF->m_UserInfo.su_deptid == _T("C1.1") || pMF->m_UserInfo.su_hms_xdept == _T("C1.1") ||
		pMF->m_UserInfo.su_deptid == _T("TYC") || pMF->m_UserInfo.su_hms_xdept == _T("TYC") ||
		pMF->m_UserInfo.su_deptid == _T("AB") || pMF->m_UserInfo.su_hms_xdept == _T("AB"))
	{
		CHMSClinicZoneDialog dlg(this);
		dlg.m_szZoneKey = pMF->m_szDept;

		if (!pMF->CheckPermission(_T("EM.100.100")))
		{
			dlg.m_szRoomKey.Format(_T("%d"), pMF->m_nRoomID);
		}

		if (dlg.DoModal() == IDOK)
		{
			pMF->m_szDept = dlg.m_szZoneKey;
			pMF->m_nRoomID = str2int(dlg.m_szRoomKey);
			pMF->m_UserInfo.su_hms_xroom = dlg.m_szRoomKey;
		}
	}
	m_szCurrentZone = pMF->GetDepartmentName(pMF->m_szDept);
	UpdateData(false);
}

void CHMSExaminationQueueList::OnNotPaidSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	ShowMessageBox(_T("Chức năng này sẽ tính lại chi phí của bệnh nhân trên danh sách và chỉ dành cho khoa C1.3"));
	if (pMF->GetCurrentDepartmentID() != _T("C1.3"))
	{
		return;
	}
	OnRecaculateFeeListSelect();
	OnPatientListLoadData();
	UpdateData(FALSE);
}

void CHMSExaminationQueueList::OnPatientListDblClick()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return;
	m_wndPatientList.SetFocus();
	m_wndPatientList.SetCurSel(m_nRowSel);
	long nPatientNo = ToLong(m_wndPatientList.GetItemText(nSel, 13));
	int nRoomID = ToLong(m_wndPatientList.GetItemText(nSel, 15));
	int nReceptIdx = ToLong(m_wndPatientList.GetItemText(nSel, 16));
	long nDocNo = ToLong(m_wndPatientList.GetItemText(nSel, 2));
	pMF->m_nRefIndex = nReceptIdx;
	//Nếu user của khoa C1.3 thì bắt buộc phải chọn Zone -> phân khu cấp cứu

	if (pMF->m_szDept == _T("C1.3"))
	{
		CString szSQL, szzonename;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT NVL(hd_zonename, 'N') as zonename FROM hms_doc WHERE hd_docno=%ld "), nDocNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("zonename"), szzonename);

		if (szzonename == _T("N"))
		{
			ShowMessageBox(_T("Bệnh nhân chưa được chọn khu (khu chấn thương, khu đỏ...), bạn cần chọn khu trước"), MB_ICONERROR);
			CUpdateZoneInfor dlg(this);
			dlg.m_nDocumentNo = nDocNo;
			if (dlg.DoModal() == IDOK)
			{

			}
			else
				return;


		}

	}

	if (m_nStatus == 1)
	{
		CString szSQL, szTreatMode;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT hd_treatmode FROM hms_doc WHERE hd_docno=%ld "), nDocNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hd_treatmode"), szTreatMode);

		if (szTreatMode == _T("A") ||
			szTreatMode == _T("B1") ||
			szTreatMode == _T("B2") ||
			szTreatMode == _T("B3") ||
			szTreatMode == _T("C"))
		{
			CString szMsg;
			szMsg.Format(_T("Bệnh nhân đang khám và điều trị chế độ [%s]"), szTreatMode);
			ShowMessageBox(szMsg);
		}
	}
	//Bệnh nhân mổ từ thiện
	CRecord rs(&pMF->m_db);
	CString szIsmotuthienb8, szIsDiscountPat, szSQL;

	szSQL.Format(_T("SELECT ISMOTUTHIENB8_V2(%ld) as isMotuthienb8 FROM dual"), nDocNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("isMotuthienb8"), szIsmotuthienb8);

	if (szIsmotuthienb8 == _T("Y"))
	{
		ShowMessageBox(_T("Bệnh nhân thuộc đối tượng mổ từ thiện!"));
	}

	//Thông báo đôi tượng miễn
    if (pMF->m_szDept == _T("TMNT") || pMF->m_szDept == _T("TTTM"))
    {
        szSQL.Format(
            _T("SELECT IS_DISCOUNT_PATIENT(%ld) as IsDiscountPat FROM dual"),
            nDocNo);
        rs.ExecSQL(szSQL);
        //_msg(_T("%s"), szSQL);

        rs.GetValue(_T("IsDiscountPat"), szIsDiscountPat);

        if (szIsDiscountPat == _T("Y"))
        {
            ShowMessageBox(_T("Bệnh nhân thuộc đối tượng miễn giảm!"));
        }
    }
	pMF->m_wndPatientDocument.LoadData(nPatientNo, nDocNo, nRoomID, nReceptIdx);

	/*if (pMF->CheckPermission(_T("17")))
	{
		pMF->m_wndCommanderExam.m_nDocumentNo = nDocNo;
		pMF->m_wndCommanderExam.GetDataToScreen();
	}*/

	pMF->SetActivePane(1);

}
void CHMSExaminationQueueList::OnPatientListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//pMF->m_nDocumentNo = str2long(m_wndPatientList.GetItemText(nNewItem, 1));
	m_nRowSel = nNewItem;
}
int CHMSExaminationQueueList::OnPatientListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}

void CHMSExaminationQueueList::OnCovid10Select()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnPatientListLoadData();
}

void CHMSExaminationQueueList::OnCancerPatientSelect() 
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnPatientListLoadData();
}

long CHMSExaminationQueueList::OnPatientListLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rs3(&pMF->m_db);
	CString szSQL, szWhere, szFromTime, szToTime, szSheetNo, szWhere2, szWhere3, szLimitcondition,
		szWhere5, szCurrentDeptId = pMF->GetCurrentDepartmentID();
	UpdateData(true);
	long nOffset = 0;
	if (m_bLoadPage == false) m_nCurPage = 1;
	if (m_nCurPage > 0) {
		nOffset = (m_nCurPage - 1) * m_nDefaultOffset;
	}
	

	if (m_szTimeKey == _T("2")) {
		szFromTime = _T("00:00:00");
		szToTime = _T("11:59:00");
	}
	else if (m_szTimeKey == _T("3")) {
		szFromTime = _T("12:00:00");
		szToTime = _T("23:59:59");
	}
	else {
		szFromTime = _T("00:00:00");
		szToTime = _T("23:59:59");
	}

	if (!m_szRoomKey.IsEmpty())
		szWhere.Format(_T(" AND he_roomid=%d"), ToInt(m_szRoomKey));

	if (!m_szPatientName.IsEmpty()) {
		//	CString tmpStr;
		//	PreInitCap(m_szPatientName, tmpStr);
		//	szWhere.AppendFormat(_T(" AND lower(hp_surname||'
		//'||hp_midname||' '||hp_firstname) like(lower(chr(37)||'%s'||chr(37)))
		//"), tmpStr);
		m_nDocumentNo = 0;
	}


	// Neu trong hop dung duyet don thuoc thi khong can kiem tra trang thai.
	// Trang thai bat buoc phai = 'T' thi moi cho duyen don thuoc.
	if (pMF->m_bPrintSummarize) {
		szWhere.AppendFormat(_T(" AND hd_status='T' "));
		m_szPrescriptionKey = _T("A");
	}
	else if (m_nStatus == 0) {
		szWhere.AppendFormat(_T(" AND he_status IN('O','P','T') "));
		m_szPrescriptionKey.Empty();
	}
	if (m_nStatus == 1) {
		szWhere.AppendFormat(_T(" AND he_status='O' "));
		m_szPrescriptionKey = _T("S");
	}
	else if (m_nStatus == 2) {
		szWhere.AppendFormat(_T(" AND he_status IN('P','T') "));
		m_szPrescriptionKey = _T("P");
	}
	else if (m_nStatus == 3) {
		szWhere.AppendFormat(_T(" AND hd_status='T' "));
		m_szPrescriptionKey = _T("A");
	}

	/*if(!m_szStatusKey.IsEmpty())
	{
			szWhere.AppendFormat(_T(" AND he_status='%s' "), m_szStatusKey);
	}	*/

	if (!m_szObjectKey.IsEmpty()) {
		if (pMF->m_bPrintSummarize) {
			if (pMF->m_szInsuranceMethod2015 == _T("Y"))
				szWhere.AppendFormat(
					_T(" AND (hd_object='%s' or (hd_emergency<>'Y' and ")
					_T("hd_insline='Y')) "),
					m_szObjectKey);
			else
				szWhere.AppendFormat(_T(" AND hd_object='%s'  "),
					m_szObjectKey);

		}
		else {
			szWhere.AppendFormat(_T(" AND hd_object='%s'  "), m_szObjectKey);
		}
	}

	// if(pMF->m_bPrintSummarize){
	//	szWhere.AppendFormat(_T(" and hd_status='T' "));
	// }

	szWhere.AppendFormat(
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s %s', 'YYYY-MM-DD ")
		_T("HH24:MI:SS') AND TO_TIMESTAMP('%s %s', 'YYYY-MM-DD HH24:MI:SS') "),
		m_szFromDate, szFromTime, m_szToDate, szToTime);

	szWhere2.AppendFormat(
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s %s', 'YYYY-MM-DD ")
		_T("HH24:MI:SS') AND TO_TIMESTAMP('%s %s', 'YYYY-MM-DD HH24:MI:SS') "),
		m_szFromDate, szFromTime, m_szToDate, szToTime);

	if (m_nDocumentNo > 0) {
		szWhere.Format(_T(" AND he_docno=%ld  "), m_nDocumentNo);
		m_szPatientName.Empty();
	}

	if (pMF->m_szDept != _T("ALL"))
		szWhere.AppendFormat(_T(" AND he_deptid='%s' "), pMF->m_szDept);

	/*if(!pMF->m_UserInfo.su_hms_xroom.IsEmpty())
			szWhere.AppendFormat(_T(" AND he_roomid in(%s) "),
	   pMF->m_UserInfo.su_hms_xroom);*/

	if (!pMF->m_UserInfo.su_hms_xroom2.IsEmpty()) {
		szWhere.AppendFormat(_T(" AND hrl_key in (%s) "),
			pMF->m_UserInfo.su_hms_xroom2);
	}
	else {
		szWhere.AppendFormat(_T(" AND he_roomid in(%s) "),
			pMF->m_UserInfo.su_hms_xroom);
	}

	if (m_bOutPatient) {
		szWhere.AppendFormat(_T(" and hd_outpatient ='Y' "));
	}
	if (m_bReExam) {
		szWhere.AppendFormat(_T(" and he_feeidx =48 "));
	}

	if (m_bCancerPatient) {
		szWhere.AppendFormat(
			_T(" and he_deptid NOT IN ('QLKBUT') and he_roomid not in (20) "));
	}

	if (!m_szsubzoneKey.IsEmpty()) 
	{
		szWhere.AppendFormat(_T(" and hms_check_first_dept(hd_docno)  <> 'Y' and nvl(hd_status, 'X') <> 'T'"));
		szWhere.AppendFormat(
			_T(" and (nvl(hrl_zone, 'xxx') = '%s' or NVL(hd_zonename, 'xxx') ")
			_T("= '%s' ) "),
			m_szsubzoneKey, m_szsubzoneKey);
	}

	if (pMF->m_szDept == _T("C1.3") && !m_szsubzoneKey.IsEmpty()) {
		szWhere.AppendFormat(_T(" and NVL(hd_status, 'X') <> 'T' "));
	}

	if (m_bNotPaid && szCurrentDeptId == _T("C1.3")) {
		szSQL.Format(
			_T(" SELECT * from")
			_T(" (")
			_T(" SELECT hp_patientno AS patientno,")
			_T("   hd_docno          AS docno,")
			_T("   trim(hp_surname")
			_T("   ||' '")
			_T("   ||hp_midname")
			_T("   ||' '")
			_T("   ||hp_firstname)                                    AS ")
			_T("pname,")
			_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,")
			_T("   extract(YEAR FROM hp_birthdate)                    AS ")
			_T("yearofbirth,")
			_T("   hd_admitdate admit_date,")
			_T("   hms_getsex(hp_sex)                                 AS sex,")
			_T("   hd_object                                          AS ")
			_T("objectid,")
			_T("   hms_getobjectname(hd_object)                       AS ")
			_T("object,")
			_T("   he_examdate                                        AS ")
			_T("examdate,")  //_T("   hd_enddate AS enddate,") \//
			_T(" CASE WHEN hd_status IN ('T') THEN hd_enddate")
			_T("   ELSE NULL END AS enddate,")
			_T("   sys_sel_getname('hms_suggestion', hd_suggestion)   AS ")
			_T("suggestion,")
			_T("   he_roomid                                          AS ")
			_T("roomid,")
			_T("   he_receptno                                        AS ")
			_T("receptno,")
			_T("   he_status                                          AS ")
			_T("statusid,")
			_T("   sys_sel_getname('hms_reception_status', he_status) AS ")
			_T("status,")
			_T("   he_emergency                                       AS ")
			_T("emergency,")
			_T("   he_priority                                        AS ")
			_T("priority,")
			_T("   he_receptidx                                       AS ")
			_T("receptidx,")
			_T("   hpc_iscomplete,")
			_T("   hpo_iscomplete,")
			_T("   hd_outpatient,")
			_T("   CASE")
			_T("     WHEN hd_areceptidx=he_receptidx")
			_T("     THEN hd_suggestion")
			_T("     ELSE CAST(' ' AS NVARCHAR2(1))")
			_T("   END AS suggestion_,")
			_T("   hd_treatmode,")
			_T("   SUM(f.hfe_cost) as total")
			_T(" FROM hms_patient")
			_T(" LEFT JOIN hms_doc")
			_T(" ON(hd_patientno=hp_patientno)")
			_T(" LEFT JOIN hms_exam")
			_T(" ON(hd_docno    =he_docno)")
			_T(" LEFT JOIN hms_fee f")
			_T("   ON(hd_docno =f.hfe_docno)")
			_T("   LEFT JOIN hms_object")
			_T("   ON(ho_id                        =HD_OBJECT)")
			_T("   WHERE 1                         =1 %s")
			_T("   AND NVL(hd_suggestion,'X') NOT IN ('C', 'D')")
			_T("   AND NVL(f.HFE_CATEGORY,'X')    <> 'Y'")
			_T(" AND f.hfe_status='O'")
			_T(" GROUP BY ")
			_T(" hp_patientno,")
			_T("   hd_docno,")
			_T("   hp_surname,  ")
			_T("   hp_midname,  ")
			_T("   hp_firstname,")
			_T("   hd_admitdate, ")
			_T("   hp_birthdate,")
			_T("   hp_birthdate,")
			_T("   hd_admitdate,")
			_T("   hp_sex,")
			_T("   hd_object,")
			_T("   hd_object,")
			_T("   he_examdate,")
			_T("   hd_enddate,")
			_T("   hd_suggestion,")
			_T("   he_roomid,")
			_T("   he_receptno,")
			_T("   he_status,  ")
			_T("   he_emergency,")
			_T("   he_priority,")
			_T("   he_receptidx,")
			_T("   hpc_iscomplete,")
			_T("   hpo_iscomplete,")
			_T("   hd_outpatient,")
			_T("   hd_areceptidx,")
			_T("   he_receptidx,")
			_T("   hd_suggestion,    ")
			_T("   hd_treatmode")
			_T(" HAVING SUM(f.hfe_cost) > 0")
			_T(" ORDER BY TRUNC(examdate),")
			_T("   he_roomid,")
			_T("   he_receptno,")
			_T("   pname")
			_T(" )")
			_T(" ORDER BY total desc"),
			szWhere);
	}
	else if (m_bCovid10 == TRUE) {
		szSQL.Format(
			_T(" SELECT hp_patientno as patientno,	")
			_T(" 	hd_docno as docno,")
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) ")
			_T("as pname,")
			_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as ")
			_T("age,")
			_T(" 	extract(year from hp_birthdate) as yearofbirth,")
			_T("	hd_admitdate admit_date,")
			_T(" 	hms_getsex(hp_sex) as sex,")
			_T("		hd_object as objectid, ")
			_T("	hms_getobjectname(hd_object) as object, ")
			_T("	he_examdate as examdate, ")  //_T("	hd_enddate as
			//enddate, ") \//
			_T(" CASE WHEN hd_status IN ('T') THEN hd_enddate")
			_T("   ELSE NULL END AS enddate,")
			_T("	sys_sel_getname('hms_suggestion', hd_suggestion) as ")
			_T("suggestion, ")
			_T("	he_roomid as roomid, ")
			_T("	he_receptno as receptno, ")
			_T("	he_status as statusid, ")
			_T("	sys_sel_getname('hms_reception_status', he_status) as ")
			_T("status, ")
			_T("	he_emergency as emergency, ")
			_T("	he_priority as priority, ")
			_T("	he_receptidx as receptidx, ")
			_T("	hpc_iscomplete, hpo_iscomplete,")
			_T("	hd_outpatient,")
			_T(" case when hd_areceptidx=he_receptidx then hd_suggestion else ")
			_T("cast(' ' as nvarchar2(1)) end as suggestion_, hd_treatmode ")
			_T(" FROM hms_patient ")
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
			_T(" LEFT JOIN hms_exam ON(hd_docno=he_docno)")
			_T(" LEFT JOIN HMS_TESTORDERLINE ON(hd_docno=hpcl_docno)")
			_T(" LEFT JOIN hms_fee_list ON (hpcl_itemid=hfl_feeid)")
			_T(" WHERE 1=1 %s AND NVL(HFL_XNCOVID19,'X') = 'Y' AND ")
			_T("HPCL_RESULT like ('%%Dương%%') ")
			_T(" ORDER BY trunc(examdate), he_roomid, he_receptno, pname "),
			szWhere);
	}
	else {
		szSQL.Format(
			_T(" SELECT hp_patientno as patientno,	")
			_T(" 	hd_docno as docno,")
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) ")
			_T("as pname,")
			_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as ")
			_T("age,")
			_T(" 	extract(year from hp_birthdate) as yearofbirth,")
			_T("	hd_admitdate admit_date,")
			_T(" 	hms_getsex(hp_sex) as sex,")
			_T("		hd_object as objectid, ")
			_T("	hms_getobjectname(hd_object) as object, ")
			_T("	HMS_GETROOMNAME(he_deptid, he_roomid) as roomname, ")
			_T("NVL(hd_zonename, 'N') as zonename, ")

			_T("  (select count(hd_docno) from hms_doc")
			_T("   where hd_patientno=hp_patientno) as solankham,")
			_T("   ")
			_T("   (select coalesce(sum(hfe_amount),0) from hms_fee_deposit")
			_T("   where hfe_docno=hd_docno")
			_T("   and hfe_class ='E'")
			_T("   and hfe_status='P') as tongtamgui,")
			_T("   ")
			_T("   (select round(coalesce(sum(hfe_cost), 0)) from hms_fee")
			_T("   where hfe_docno=hd_docno")
			_T("   and hfe_class='E'")
			_T("   and hfe_deptid=he_deptid")
			_T("   and hfe_status <> 'C'")
			_T("   and hfe_category <> 'Y'")
			_T("   ) as tongtien,")
			_T("   ")
			_T("   (select round(coalesce(sum(hfe_cost), 0)) from hms_fee")
			_T("   where hfe_docno=hd_docno")
			_T("   and hfe_class='E'")
			_T("   and hfe_deptid=he_deptid")
			_T("   and hfe_status IN ('P')")
			_T("   and hfe_category <> 'Y'")
			_T("   ) as tongtien_datt,")
			_T("   ")
			_T("  (select round(coalesce(sum(hfe_cost), 0)) from hms_fee")
			_T("   where hfe_docno=hd_docno")
			_T("   and hfe_class='E'")
			_T("   and hfe_deptid=he_deptid")
			_T("   and hfe_status NOT IN ('C', 'P')")
			_T("   and hfe_category <> 'Y'")
			_T("   ) as tongtien_chuatt,")
			_T("	he_examdate as examdate, ")  //_T("	hd_enddate as
			//enddate, ") \//
			_T(" CASE WHEN hd_status IN ('T') THEN hd_enddate")
			_T("   ELSE NULL END AS enddate,")
			_T("	sys_sel_getname('hms_suggestion', hd_suggestion) as ")
			_T("suggestion, ")
			_T("	he_roomid as roomid, ")
			_T("	he_receptno as receptno, ")
			_T("	he_status as statusid, ")
			_T("	sys_sel_getname('hms_reception_status', he_status) as status, ")
			_T("	he_emergency as emergency, ")
			_T("	he_priority as priority, ")
			_T("	he_receptidx as receptidx, ")
			_T("	hpc_iscomplete, hpo_iscomplete,")
			_T("	hd_outpatient,")
			_T(" case when hd_areceptidx=he_receptidx then hd_suggestion else ")
			_T("cast(' ' as nvarchar2(1)) end as suggestion_, hd_treatmode, ")
			_T(" ISMOTUTHIENB8_V2(hd_docno) as motuthienb8, ")
			_T(" extract (day FROM (systimestamp-hd_admitdate))*24 + extract ")
			_T("(hour FROM (systimestamp-hd_admitdate)) as limithour,")
			_T(" case when HE_DOCTOR is not null then get_username(HE_DOCTOR) ")
			_T("else null end AS bskham ") /*_T(" CASE WHEN
										   NVL(HD_IS_CHANGE_SER_OBJ,'N') = 'Y'
										   THEN") \
										   _T("   extract (DAY FROM
										   (systimestamp-HD_IS_CHANGE_SER_OBJ_TIME))*24
										   + extract (hour FROM
										   (systimestamp-HD_IS_CHANGE_SER_OBJ_TIME))")
										   \
										   _T("   ELSE extract (DAY FROM
										   (systimestamp-hd_admitdate))*24 +
										   extract (hour FROM
										   (systimestamp-hd_admitdate))") \
										   _T("   END AS limithour") \*/
			_T(" FROM hms_patient ")
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
			_T(" LEFT JOIN hms_exam ON(hd_docno=he_docno)")
			_T(" LEFT JOIN hms_roomlist")
			_T(" ON (he_deptid = hrl_deptid and he_roomid = hrl_id)")
			_T(" LEFT JOIN sys_dept ON(hrl_deptid = sd_id)")
			_T(" WHERE 1=1 and sd_type = 'KB' %s ")
			_T(" ORDER BY trunc(examdate), he_roomid, he_receptno, pname "),
			szWhere);

		szSQL.Format(
			_T(" WITH tbl_exam")
			_T("      AS (SELECT *")
			_T("            FROM (SELECT tbl.*,")
			_T("                         ROWNUM AS my_rnum")
			_T("                    FROM (   SELECT he_docno,")
			_T("                    he_examdate,")
			_T("                    he_receptno,")
			_T("                    he_roomid,")
			_T("                    hrl_name,")
			_T("                    he_doctor,")
			_T("                    he_receptidx,")
			_T("                    he_priority,")
			_T("                    he_emergency,")
			_T("                                    he_status,")
			_T("                                    Trim (hp_surname")
			_T("                                          || ' '")
			_T("                                          || hp_midname")
			_T("                                          || ' '")
			_T("                                          || hp_firstname) AS ")
			_T("pname")
			_T("               FROM hms_exam")
			_T("          LEFT JOIN hms_roomlist ON ( he_deptid = hrl_deptid ")
			_T("AND he_roomid = hrl_id )")
			_T("          LEFT JOIN sys_dept ON ( he_deptid = sd_id )")
			_T("		  LEFT JOIN hms_doc ON ( hd_docno = he_docno )")
			_T("          LEFT JOIN hms_patient ON ( hd_patientno = ")
			_T("hp_patientno )")

			_T("                              WHERE 1 = 1 AND sd_type = 'KB' ")
			_T("%s ")
			_T("                              ORDER BY Trunc ")
			_T("(he_examdate),he_roomid,he_receptno,pname) tbl")
			_T("                   WHERE ROWNUM <= %ld + %ld)")
			_T("           WHERE my_rnum > %ld),")
			_T("      tbl_fee")
			_T("      AS (SELECT hfe_docno,")
			_T("                 SUM (hfe_cost) AS tongtien,")
			_T("                 SUM (CASE WHEN hfe_status = 'P' THEN hfe_cost")
			_T("                      ELSE 0")
			_T("                      END) AS tongtien_datt,")
			_T("                 SUM (CASE WHEN hfe_status <> 'P' THEN ")
			_T("hfe_cost")
			_T("                      ELSE 0")
			_T("                      END) AS tongtien_chuatt")
			_T("            FROM hms_fee")
			_T("           WHERE hfe_docno IN (SELECT he_docno")
			_T("                                 FROM tbl_exam) AND ")
			_T("hfe_status IN ( 'O', 'A', 'P' ) AND")
			_T("                 hfe_category <> 'Y'")
			_T("                 AND hfe_class = 'E'")
			_T("           GROUP BY hfe_docno)")
			_T("    SELECT he_docno AS docno,")
			_T("           tongtien,")
			_T("           tongtien_datt,")
			_T("           tongtien_chuatt,")
			_T("           hp_patientno AS patientno,")
			_T("           pname,")
			_T("           Hms_getage (Trunc_date (hd_admitdate), ")
			_T("hp_birthdate) AS age,")
			_T("           Extract (YEAR FROM hp_birthdate) AS yearofbirth,")
			_T("           hd_admitdate admit_date,")
			_T("           (SELECT ss_desc")
			_T("              FROM sys_sel")
			_T("             WHERE ss_id = 'sys_sex' AND ss_code = hp_sex) AS ")
			_T("sex,")
			_T("           hd_object AS objectid,")
			_T("           ho_desc AS object,")
			_T("           hrl_name AS roomname,")
			_T("           (SELECT Count (hd_docno)")
			_T("              FROM hms_doc")
			_T("             WHERE hd_patientno = hp_patientno) AS solankham,")
			_T("           (SELECT Coalesce (SUM (hfe_amount), 0)")
			_T("              FROM hms_fee_deposit")
			_T("             WHERE hfe_docno = hd_docno AND hfe_class = 'E' ")
			_T("AND hfe_status = 'P') AS tongtamgui,")
			_T("           he_examdate AS examdate,")
			_T("           CASE WHEN hd_status IN ( 'T' ) THEN hd_enddate")
			_T("           ELSE NULL")
			_T("           END AS enddate,")
			_T("           (SELECT ss_desc")
			_T("              FROM sys_sel")
			_T("             WHERE ss_id = 'hms_suggestion' AND ss_code = ")
			_T("hd_suggestion) AS suggestion,")
			_T("           he_roomid AS roomid,")
			_T("           he_receptno AS receptno,")
			_T("           he_status AS statusid,")
			_T("           (SELECT ss_desc")
			_T("              FROM sys_sel")
			_T("             WHERE ss_id = 'hms_reception_status' AND ss_code ")
			_T("= he_status) AS status,")
			_T("           he_emergency AS emergency,")
			_T("           he_priority AS priority,")
			_T("           he_receptidx AS receptidx,")
			_T("           hpc_iscomplete,")
			_T("           hpo_iscomplete,")
			_T("           hd_outpatient,")
			_T("           CASE WHEN hd_areceptidx = he_receptidx THEN ")
			_T("hd_suggestion")
			_T("           ELSE Cast (' ' AS NVARCHAR2 (1))")
			_T("           END AS suggestion_,")
			_T("           hd_treatmode,")
			_T("           CASE WHEN (SELECT Count (*)")
			_T("                   FROM hms_exam")
			_T("                  WHERE he_docno = hd_docno AND HE_CREATEDBY ")
			_T("= 'motuthienb8' AND he_deptid = 'C1.1'")
			_T("                        AND")
			_T("                        he_roomid = 184 ) > 0 THEN 'Y'")
			_T("           ELSE 'N'")
			_T("           END AS motuthienb8,")
			_T("           Extract (DAY FROM ( systimestamp - hd_admitdate )) ")
			_T("* 24 + Extract (")
			_T("           HOUR FROM ( systimestamp")
			_T("                       - hd_admitdate )) AS")
			_T("           limithour,")
			_T("           CASE WHEN HE_DOCTOR IS NOT NULL THEN (SELECT ")
			_T("su_name")
			_T("              FROM sys_user")
			_T("             WHERE su_userid = he_doctor)")
			_T("           ELSE NULL")
			_T("           END AS bskham,")
			_T("		   NVL(hd_zonename, ' ') as zonename, ")
			_T("		   NVL(hd_indept, 'N') as vaokhoa, ")
			_T("		   NVL(hd_conclusion, ' ') as chandoan ")
			_T("      FROM tbl_exam")
			_T(" LEFT JOIN tbl_fee ON ( he_docno = hfe_docno )")
			_T(" LEFT JOIN hms_doc ON ( hd_docno = he_docno )")
			_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )")
			_T(" LEFT JOIN hms_object ON ( ho_id = hd_object ) "),
			szWhere, nOffset, m_nDefaultLimit, nOffset, szLimitcondition);
	}
	

	pMF->m_bExam = FALSE;
	m_wndPatientList.BeginLoad();
	int nCount = 0, nItem;
	int nPriority;
	int nlimithour = 0;
	CString szEmergency, szStatus, tmpStr, szSuggestion,szSuggestion2, szbskham, szroomname, szvaokhoa, szchandoan,
		szzonename, szroomname2;
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	CString szObjectID;
	CString szIsComplete;
	CString szIsHPOComplete;
	CString szOutPatient;
	CString szViewStype;
	CString szMotuthienb8;
	CString szTmpEndDate;
	DWORD clbkPaid = RGB(220, 220, 220), cltxtPaid = RGB(0, 0, 200),
		clbkEmergency = RGB(128, 0, 0), cltxtEmergency = RGB(255, 255, 255),
		clbkPriority1 = RGB(0, 64, 128), cltxtPriority = RGB(255, 255, 255),
		clbkPriority2 = RGB(64, 128, 255),
		clbkParaComplete = RGB(255, 128, 64),
		cltxtComplete = RGB(255, 255, 255),
		clbkPharmaComplete = RGB(0, 128, 192),
		clbkOutpatient = RGB(255, 128, 0),
		cltxtOutpatient = RGB(255, 255, 255), clbkCharity = RGB(0, 255, 127),
		cltxtCharity = RGB(0, 0, 0), clbkLimitHour = RGB(255, 127, 0),
		cltxtLimitHour = RGB(0, 0, 0);
	int nIndex = 0;
	int nsolankham = 0;
	int nsobenhnhan = 0;
	double ntongtien = 0;
	double ntongtamgui = 0;
	double ntongtien_datt = 0;
	double ntongtien_chuatt = 0;

	int n_total_Index = 0;
	int n_total_nsobenhnhan = 0;
	double n_total_tongtien = 0;
	double n_total_tongtamgui = 0;
	double n_total_tongtien_datt = 0;
	double n_total_tongtien_chuatt = 0;

	if (!m_szPatientName.IsEmpty()) {
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}
	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF()) {
		rs.GetValue(_T("pname"), tmpStr);
		if (!m_szPatientName.IsEmpty()) {
			CString szPatientName;

			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);
			if (szShortName != m_szPatientName) {
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

		szSheetNo.Format(_T("%s.%s"), rs.GetValue(_T("roomid")),
			rs.GetValue(_T("receptno")));
		rs.GetValue(_T("emergency"), szEmergency);
		rs.GetValue(_T("priority"), nPriority);
		rs.GetValue(_T("statusid"), szStatus);
		rs.GetValue(_T("suggestion"), szSuggestion2);
		rs.GetValue(_T("objectid"), szObjectID);
		rs.GetValue(_T("hpc_iscomplete"), szIsComplete);
		rs.GetValue(_T("hpo_iscomplete"), szIsHPOComplete);
		rs.GetValue(_T("hd_outpatient"), szOutPatient);
		rs.GetValue(_T("motuthienb8"), szMotuthienb8);
		rs.GetValue(_T("limithour"), nlimithour);
		rs.GetValue(_T("bskham"), szbskham);
		rs.GetValue(_T("roomname"), szroomname);
		rs.GetValue(_T("zonename"), szzonename);
		rs.GetValue(_T("vaokhoa"), szvaokhoa);
		rs.GetValue(_T("chandoan"), szchandoan);

		if (pMF->m_szDept == _T("C1.3") && szzonename != _T("N")) {
			szroomname2 = szroomname + _T(" - Khu ") + szzonename;
		}
		else {
			szroomname2 = szroomname;
		}

		if (szvaokhoa != _T("N"))
        {
			szSuggestion = szSuggestion2 + _T(" - Khoa ") + szvaokhoa;
        }
        else
        {
            szSuggestion = szSuggestion2;
        }

		if (szCurrentDeptId == _T("TTHTSS") ||
			szCurrentDeptId == _T("TTDTHM")) {
			rs.GetValue(_T("yearofbirth"), szViewStype);

		}

		else {
			rs.GetValue(_T("age"), szViewStype);
		}
		//_msg(_T("%s"), szViewStype);

		rs.GetValue(_T("solankham"), nsolankham);

		rs.GetValue(_T("tongtien"), ntongtien);
		rs.GetValue(_T("tongtamgui"), ntongtamgui);
		rs.GetValue(_T("tongtien_datt"), ntongtien_datt);
		rs.GetValue(_T("tongtien_chuatt"), ntongtien_chuatt);

		n_total_tongtien += ntongtien;
		n_total_tongtamgui += ntongtamgui;
		n_total_tongtien_datt += ntongtien_datt;
		n_total_tongtien_chuatt += ntongtien_chuatt;
		n_total_Index += nIndex;

		if (szStatus == _T("O")) 
		{
			nItem = m_wndPatientList.AddItems(
			(LPCTSTR)FormatOrderNumber(szSheetNo),
			szroomname,
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("pname")),
			// rs.GetValue(_T("age")), //
			szViewStype,
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("object")),
			ToString(nsolankham),
			CDateTime::Convert(rs.GetValue(_T("admit_date")), yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
			CDateTime::Convert(rs.GetValue(_T("examdate")), yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
			_T(""),
			rs.GetValue(_T("status")),
			_T(""),
			_T(""),
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("roomid")),
			rs.GetValue(_T("receptidx")),
			_T(""),
			_T(""),
			ToString(ntongtien),
			ToString(ntongtamgui),
			ToString(ntongtien_datt),
			ToString(ntongtien_chuatt),	NULL);
		}
		else 
		{
			if (rs.GetValue(_T("enddate")).IsEmpty())
				szTmpEndDate = _T("");
			else
				szTmpEndDate =
				CDateTime::Convert(rs.GetValue(_T("enddate")),
					yyyymmdd | hhmmss, ddmmyyyy | hhmmss);
			nItem = m_wndPatientList.AddItems(
			(LPCTSTR)FormatOrderNumber(szSheetNo),
			szroomname2,
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("pname")),
			// rs.GetValue(_T("age")), //
			szViewStype,
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("object")),
			ToString(nsolankham),
			CDateTime::Convert(rs.GetValue(_T("admit_date")), yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
			CDateTime::Convert(rs.GetValue(_T("examdate")), yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
			szTmpEndDate,
			rs.GetValue(_T("status")),
			//rs.GetValue(_T("suggestion")),
			szSuggestion,
			szchandoan,
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("roomid")),
			rs.GetValue(_T("receptidx")),
			rs.GetValue(_T("hd_treatmode")),
			szbskham,
			ToString(ntongtien),
			ToString(ntongtamgui),
			ToString(ntongtien_datt),
			ToString(ntongtien_chuatt),
			NULL);
		}
		if (szStatus == _T("P")) {
			m_wndPatientList.SetItemBkColor(nItem, clbkPaid, FALSE);
			m_wndPatientList.SetItemTextColor(nItem, cltxtPaid, FALSE);
		}

		if (szEmergency == _T("Y")) {
			m_wndPatientList.SetItemBkColor(nItem, clbkEmergency, FALSE);
			m_wndPatientList.SetItemTextColor(nItem, cltxtEmergency, FALSE);
		}
		else if (nPriority == 1) {
			m_wndPatientList.SetItemBkColor(nItem, clbkPriority1, FALSE);
			m_wndPatientList.SetItemTextColor(nItem, cltxtPriority, FALSE);
		}
		else if (nPriority == 2) {
			m_wndPatientList.SetItemBkColor(nItem, clbkPriority1, FALSE);
			m_wndPatientList.SetItemTextColor(nItem, cltxtPriority, FALSE);
		}
		/*if(szIsComplete == _T("Y")){
				m_wndPatientList.SetSubItemBkColor(nItem, 1, RGB(185, 122, 87),
		FALSE); m_wndPatientList.SetSubItemTextColor(nItem, 1, RGB(255, 255,
		255), FALSE);
		}*/

		if (szIsComplete == _T("Y")) {
			m_wndPatientList.SetSubItemBkColor(nItem, 2, clbkParaComplete,
				FALSE);
			m_wndPatientList.SetSubItemTextColor(nItem, 2, cltxtComplete,
				FALSE);
		}

		if (szIsHPOComplete == _T("Y")) {
			m_wndPatientList.SetSubItemBkColor(nItem, 2, clbkPharmaComplete,
				FALSE);
			m_wndPatientList.SetSubItemTextColor(nItem, 2, cltxtComplete,
				FALSE);
		}

		if (szOutPatient == _T("Y")) {
			m_wndPatientList.SetSubItemBkColor(nItem, 11, clbkOutpatient,
				FALSE);
			m_wndPatientList.SetSubItemTextColor(nItem, 11, cltxtOutpatient,
				FALSE);
		}

		if (szMotuthienb8 == _T("Y")) {
			for (int i = 3; i <= 6; i++) {
				m_wndPatientList.SetSubItemBkColor(nItem, i, clbkCharity,
					FALSE);
				m_wndPatientList.SetSubItemTextColor(nItem, i, cltxtCharity,
					FALSE);
			}
		}

		if (nlimithour >= 4 && szCurrentDeptId == _T("C1.3")) {
			for (int i = 3; i <= 8; i++) {
				m_wndPatientList.SetSubItemBkColor(nItem, i, clbkLimitHour,
					FALSE);
				m_wndPatientList.SetSubItemTextColor(nItem, i, cltxtLimitHour,
					FALSE);
			}
		}

		rs.MoveNext();
	}
	
	m_nNumber = nCount;

	m_nn_total_tongtien = n_total_tongtien;
	m_nn_total_tongtamgui = n_total_tongtamgui;
	m_nn_total_tongtien_datt = n_total_tongtien_datt;
	m_nn_total_tongtien_chuatt = n_total_tongtien_chuatt;

	// Thêm đoạn này để lấy ra số bệnh nhân
	if (m_bLoadPage == false) {
		/*
		if (m_szDeptNameKey == _T("ALL"))
		{
				szWhere5.AppendFormat(_T(" and 1=1 "));
		}
		else
		{
				szWhere5.AppendFormat(_T(" and he_deptid = '%s' "),
		m_szDeptNameKey);
		}

		if (!m_szsubzoneKey.IsEmpty())
		{
				szWhere2.AppendFormat(_T(" and nvl(hrl_zone, 'xxx') = '%s' "),
		m_szsubzoneKey);
		}
		else
		{
				szWhere2.AppendFormat(_T(" and 1=1 "));
		}


		szSQL.Format(
				_T(" SELECT count(distinct(he_docno)) as total_nsobenhnhan, ") \
				_T("		count(he_docno) as total_luotkham") \
				_T(" from hms_exam") \
				_T(" LEFT JOIN hms_roomlist ") \
				_T(" ON (he_deptid = hrl_deptid and he_roomid=hrl_id)") \
				_T(" LEFT JOIN sys_dept ON(he_deptid = sd_id)") \
				_T(" where sd_type = 'KB' %s ") \
				_T(" AND he_status IN('O','P','T') %s"), szWhere5, szWhere2);

		rs2.ExecSQL(szSQL);
		if (!rs2.IsEOF())
		{
				rs2.GetValue(_T("total_nsobenhnhan"), n_total_nsobenhnhan);
				rs2.GetValue(_T("total_luotkham"), nCount);
				if (m_szRoomKey.IsEmpty())
				{
						m_nSobenhnhan = n_total_nsobenhnhan;
				}
				else
				{
						m_nSobenhnhan = m_nn_total_Index;
				}
				m_nTotalPage = ceil(nCount / (m_nDefaultLimit*1.0));
		}
		*/
		// Thêm đoạn này để lấy ra số tiền hiển thị trên màn hình, cần đảm bảo
		// như sau:
		// 1. Nếu chọn 1 khoa
		// 2. Nếu chọn 1 khu
		// 3. Nếu chọn 1 phòng khám
		// 4. Chẳng chọn gì chỉ gõ mỗi số hồ sơ để tra cứu

		/*if(!m_szPatientName.IsEmpty())
		{
				szWhere3.AppendFormat(_T(" AND lower(hp_surname||'
		'||hp_midname||' '||hp_firstname) like(lower(chr(37)||'%s'||chr(37)))
		"), tmpStr);
		}*/

		szSQL.Format(
			_T(" SELECT ")
			_T(" sum(tongtamgui) as tongtamgui,")
			_T(" sum(tongtien) as tongtien,")
			_T(" sum(tongtien_datt) as tongtien_datt,")
			_T(" sum(tongtien_chuatt) as tongtien_chuatt ")
			_T(" FROM")
			_T(" (")
			_T(" SELECT DISTINCT(he_docno) AS docno,")
			_T("   (SELECT COALESCE(SUM(hfe_amount),0)")
			_T("   FROM hms_fee_deposit")
			_T("   WHERE hfe_docno=he_docno")
			_T("   AND hfe_class  ='E'")
			_T("   AND hfe_status ='P'")
			_T("   ) AS tongtamgui,")
			_T("   (SELECT ROUND(COALESCE(SUM(hfe_cost), 0))")
			_T("   FROM hms_fee")
			_T("   WHERE hfe_docno   =he_docno")
			_T("   AND hfe_class     ='E'")
			_T("   AND hfe_deptid    =he_deptid")
			_T("   AND hfe_status   <> 'C'")
			_T("   AND hfe_category <> 'Y'")
			_T("   ) AS tongtien,")
			_T("   (SELECT ROUND(COALESCE(SUM(hfe_cost), 0))")
			_T("   FROM hms_fee")
			_T("   WHERE hfe_docno   =he_docno")
			_T("   AND hfe_class     ='E'")
			_T("   AND hfe_deptid    =he_deptid")
			_T("   AND hfe_status   IN ('P')")
			_T("   AND hfe_category <> 'Y'")
			_T("   ) AS tongtien_datt,")
			_T("   (SELECT ROUND(COALESCE(SUM(hfe_cost), 0))")
			_T("   FROM hms_fee")
			_T("   WHERE hfe_docno     =he_docno")
			_T("   AND hfe_class       ='E'")
			_T("   AND hfe_deptid      =he_deptid")
			_T("   AND hfe_status NOT IN ('C', 'P')")
			_T("   AND hfe_category   <> 'Y'")
			_T("   ) AS tongtien_chuatt")
			_T(" FROM hms_exam")
			_T(" LEFT JOIN hms_roomlist")
			_T(" ON (he_deptid = hrl_deptid and he_roomid = hrl_id)")
			_T(" LEFT JOIN sys_dept ON(hrl_deptid = sd_id)")
			_T(" LEFT JOIN hms_doc")
			_T(" ON (he_docno   = hd_docno)")
			_T(" WHERE 1        =1 and sd_type = 'KB' %s %s")
			_T(" )"),
			szWhere, szWhere3);

		szSQL.Format(
			_T(" WITH tbl_exam")
			_T("      AS (   SELECT he_docno,")
			_T("                    he_examdate,")
			_T("                    he_receptno,")
			_T("                    he_roomid,")
			_T("                    hrl_name,")
			_T("                    he_doctor,")
			_T("                    he_receptidx,")
			_T("                    he_priority,")
			_T("                    he_emergency,")
			_T("                    he_status,")
			_T("                    Trim (hp_surname")
			_T("                          || ' '")
			_T("                          || hp_midname")
			_T("                          || ' '")
			_T("                          || hp_firstname) AS pname")
			_T("               FROM hms_exam")
			_T("          LEFT JOIN hms_roomlist ON ( he_deptid = hrl_deptid ")
			_T("AND he_roomid = hrl_id )")
			_T("          LEFT JOIN sys_dept ON ( he_deptid = sd_id )")
			_T("          LEFT JOIN hms_doc ON ( hd_docno = he_docno )")
			_T("          LEFT JOIN hms_patient ON ( hd_patientno = ")
			_T("hp_patientno )")
			_T("              WHERE 1 = 1 AND sd_type = 'KB' %s")
			_T("              ),")
			_T("      tbl_fee")
			_T("      AS (SELECT SUM (hfe_cost) AS tongtien,")
			_T("                 SUM (CASE WHEN hfe_status = 'P' THEN hfe_cost")
			_T("                      ELSE 0")
			_T("                      END) AS tongtien_datt,")
			_T("                 SUM (CASE WHEN hfe_status <> 'P' THEN ")
			_T("hfe_cost")
			_T("                      ELSE 0")
			_T("                      END) AS tongtien_chuatt")
			_T("            FROM hms_fee")
			_T("           WHERE hfe_docno IN (SELECT he_docno")
			_T("                                 FROM tbl_exam) AND ")
			_T("hfe_status IN ( 'O', 'A', 'P' ) AND")
			_T("                 hfe_category <> 'Y'")
			_T("                 AND hfe_class = 'E'),")
			_T("      tbl_deposit")
			_T("      AS (SELECT Coalesce (SUM (hfe_amount), 0) AS tongtamgui")
			_T("            FROM hms_fee_deposit")
			_T("           WHERE hfe_docno IN (SELECT he_docno")
			_T("                                 FROM tbl_exam) AND hfe_class ")
			_T("= 'E' AND hfe_status = 'P')")
			_T(" SELECT tbl_fee.*,")
			_T("        tbl_deposit.*,")
			_T("        (SELECT Count (DISTINCT he_docno)")
			_T("           FROM tbl_exam) AS total_nsobenhnhan,")
			_T("        (SELECT Count (he_docno)")
			_T("           FROM tbl_exam) AS total_luotkham")
			_T("   FROM tbl_fee,tbl_deposit"),
			szWhere);

		rs3.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);

		if (!rs3.IsEOF()) {
			rs3.GetValue(_T("tongtamgui"), m_nn_total_tongtamgui);
			rs3.GetValue(_T("tongtien"), m_nn_total_tongtien);
			rs3.GetValue(_T("tongtien_datt"), m_nn_total_tongtien_datt);
			rs3.GetValue(_T("tongtien_chuatt"), m_nn_total_tongtien_chuatt);

			rs3.GetValue(_T("total_nsobenhnhan"), n_total_nsobenhnhan);
			rs3.GetValue(_T("total_luotkham"), nCount);
			if (m_szRoomKey.IsEmpty()) {
				m_nSobenhnhan = n_total_nsobenhnhan;
			}
			else {
				m_nSobenhnhan = m_nn_total_Index;
			}
			m_nTotalPage = ceil(nCount / (m_nDefaultLimit * 1.0));
			m_nn_total_Index = nCount;
		}

	}
	else {
	}

	if (m_nRowSel >= 0) {
		// m_wndPatientList.SetItemBkColor(m_nRowSel,  RGB(0, 128, 192), FALSE);
		// m_wndPatientList.SetItemTextColor(m_nRowSel, RGB(255, 255, 255),
		// FALSE);
		m_wndPatientList.SetFocus();
		m_wndPatientList.SetCurSel(m_nRowSel);
		// m_wndPatientList.EnsureVisible(m_nRowSel, FALSE);
	}
	// m_nRowSel = -1;
	
	if (m_bLoadPage == false) {
		if (m_nTotalPage <= 1) {
			ShowPageControlBar(false);
		}
		else {
			m_nCurPage = 1;
			m_wndPage.SetCurrent(0, int2str(m_nCurPage));
			ShowPageControlBar(true);
		}
	}
	m_bLoadPage = false;
	m_wndPatientList.SetSortColumn(0, 1, false);
	m_wndPatientList.EndLoad();
	UpdateData(FALSE);
	return nCount;
}


/*void CHMSExaminationQueueList::OnFromDateChange(){

} */
/*void CHMSExaminationQueueList::OnFromDateSetfocus(){

} */
/*void CHMSExaminationQueueList::OnFromDateKillfocus(){

} */
int CHMSExaminationQueueList::OnFromDateCheckValue() {
	OnPatientListLoadData();
	return 1;
}

/*int CHMSExaminationQueueList::OnToDateChange(){
	return 0;
} */
/*int CHMSExaminationQueueList::OnToDateSetfocus(){
	return 0;
} */
/*int CHMSExaminationQueueList::OnToDateKillfocus(){
	return 0;
} */
int CHMSExaminationQueueList::OnToDateCheckValue() {
	OnPatientListLoadData();
	return 1;
}

void CHMSExaminationQueueList::OnTimeSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSExaminationQueueList::OnTimeSelendok()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szTimeKey);

	if ((nMonth == 1) || (nMonth == 2) || (nMonth == 3))
	{
		m_szFromDate = m_szToDate = pMF->GetSysDate();
	}

	//Lấy tuần hiện tại
	if (nMonth == 6)
	{
		// Lấy ngày hiện tại
		time_t t = time(NULL);
		tm* now = localtime(&t);

		// Kiểm tra nếu 'now' là NULL
		if (now == NULL)
		{
			AfxMessageBox(_T("Lỗi: Không thể lấy thời gian hiện tại xyz"));
			return;
		}

		// Lấy ngày đầu tuần (Thứ Hai)
		tm fromDateTm = *now;
		fromDateTm.tm_mday -= (now->tm_wday == 0 ? 6 : now->tm_wday - 1);  // Nếu Chủ Nhật thì trừ 6 ngày, nếu không thì trừ (tm_wday - 1)
		mktime(&fromDateTm);

		// Lấy ngày cuối tuần (Chủ Nhật)
		tm toDateTm = *now;
		toDateTm.tm_mday += (now->tm_wday == 0 ? 0 : 7 - now->tm_wday);  // Nếu Chủ Nhật thì cộng 0 ngày, nếu không thì cộng (7 - tm_wday)
		mktime(&toDateTm);

		// Định dạng ngày tháng và lưu vào biến CString
		m_szFromDate.Format(_T("%.4d/%.2d/%.2d"), fromDateTm.tm_year + 1900, fromDateTm.tm_mon + 1, fromDateTm.tm_mday);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), toDateTm.tm_year + 1900, toDateTm.tm_mon + 1, toDateTm.tm_mday);
	}
	//Lấy ngày hôm qua
	if (nMonth == 4)
	{
		// Lấy ngày hiện tại 
		time_t t = time(NULL);
		tm* now = localtime(&t);
		// Kiểm tra nếu 'now' là NULL 
		if (now == NULL)
		{
			AfxMessageBox(_T("Lỗi: Không thể lấy thời gian hiện tại."));
			return;
		}
		// Lấy ngày hôm qua 
		tm yesterdayTm = *now;
		yesterdayTm.tm_mday -= 1;
		mktime(&yesterdayTm);
		// Định dạng ngày tháng và lưu vào biến CString	 
		m_szFromDate.Format(_T("%.4d/%.2d/%.2d 00:00"), yesterdayTm.tm_year + 1900, yesterdayTm.tm_mon + 1, yesterdayTm.tm_mday);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), yesterdayTm.tm_year + 1900, yesterdayTm.tm_mon + 1, yesterdayTm.tm_mday);
	}
	//Lấy tuần trước
	if (nMonth == 5)
	{
		// Lấy ngày hiện tại
		time_t t = time(NULL);
		tm* now = localtime(&t);

		// Kiểm tra nếu 'now' là NULL
		if (now == NULL)
		{
			AfxMessageBox(_T("Lỗi: Không thể lấy thời gian hiện tại."));
			return;
		}

		// Lấy ngày đầu tuần hiện tại (Thứ Hai)
		tm fromDateTm = *now;
		fromDateTm.tm_mday -= (now->tm_wday == 0 ? 6 : now->tm_wday - 1);  // Lùi lại để lấy Thứ Hai của tuần hiện tại
		mktime(&fromDateTm);

		// Lùi lại một tuần để lấy ngày đầu tuần trước (Thứ Hai tuần trước)
		fromDateTm.tm_mday -= 7;
		mktime(&fromDateTm);

		// Lấy ngày cuối tuần trước (Chủ Nhật)
		tm toDateTm = fromDateTm;
		toDateTm.tm_mday += 6;  // Cộng thêm 6 ngày để lấy Chủ Nhật của tuần trước
		mktime(&toDateTm);

		// Định dạng ngày tháng và lưu vào biến CString
		m_szFromDate.Format(_T("%.4d/%.2d/%.2d 00:00"), fromDateTm.tm_year + 1900, fromDateTm.tm_mon + 1, fromDateTm.tm_mday);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), toDateTm.tm_year + 1900, toDateTm.tm_mon + 1, toDateTm.tm_mday);
	}
	//Lấy tháng hiện tại, trong tháng
		// Lấy ngày hiện tại
	if (nMonth == 8)
	{
		time_t t = time(NULL);
		tm* now = localtime(&t);

		// Kiểm tra nếu 'now' là NULL
		if (now == NULL)
		{
			AfxMessageBox(_T("Lỗi: Không thể lấy thời gian hiện tại."));
			return;
		}
		// Ngày đầu tháng
		tm fromDateTm = *now;
		fromDateTm.tm_mday = 1;
		mktime(&fromDateTm);

		// Ngày cuối tháng
		tm toDateTm = fromDateTm;
		toDateTm.tm_mon += 1;  // Chuyển đến tháng tiếp theo
		toDateTm.tm_mday = 0;  // Lùi lại một ngày để có ngày cuối tháng hiện tại
		mktime(&toDateTm);

		// Định dạng ngày tháng và lưu vào biến CString
		m_szFromDate.Format(_T("%.4d/%.2d/%.2d 00:00"), fromDateTm.tm_year + 1900, fromDateTm.tm_mon + 1, fromDateTm.tm_mday);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), toDateTm.tm_year + 1900, toDateTm.tm_mon + 1, toDateTm.tm_mday);

	}

	if (nMonth == 9)
	{
		// Lấy ngày hiện tại
		time_t t = time(NULL);
		tm* now = localtime(&t);

		// Kiểm tra nếu 'now' là NULL
		if (now == NULL)
		{
			AfxMessageBox(_T("Lỗi: Không thể lấy thời gian hiện tại."));
			return;
		}

		// Ngày đầu tháng trước
		tm fromDateTm = *now;
		fromDateTm.tm_mon -= 1;  // Lùi lại một tháng
		if (fromDateTm.tm_mon < 0)
		{
			fromDateTm.tm_mon += 12;
			fromDateTm.tm_year -= 1;
		}
		fromDateTm.tm_mday = 1;
		mktime(&fromDateTm);

		// Ngày cuối tháng trước
		tm toDateTm = fromDateTm;
		toDateTm.tm_mon += 1;  // Chuyển đến tháng hiện tại
		toDateTm.tm_mday = 0;  // Lùi lại một ngày để có ngày cuối tháng trước
		mktime(&toDateTm);

		// Định dạng ngày tháng và lưu vào biến CString
		m_szFromDate.Format(_T("%.4d/%.2d/%.2d 00:00"), fromDateTm.tm_year + 1900, fromDateTm.tm_mon + 1, fromDateTm.tm_mday);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), toDateTm.tm_year + 1900, toDateTm.tm_mon + 1, toDateTm.tm_mday);
	}
	if (nMonth == 7)
	{
		// Lấy ngày hiện tại
		time_t t = time(NULL);
		tm* now = localtime(&t);

		// Kiểm tra nếu 'now' là NULL
		if (now == NULL)
		{
			AfxMessageBox(_T("Lỗi: Không thể lấy thời gian hiện tại."));
			return;
		}

		// Ngày hiện tại
		tm toDateTm = *now;
		mktime(&toDateTm);

		// Ngày bắt đầu từ 7 ngày trước
		tm fromDateTm = toDateTm;
		fromDateTm.tm_mday -= 7;
		mktime(&fromDateTm);

		// Định dạng ngày tháng và lưu vào biến CString
		m_szFromDate.Format(_T("%.4d/%.2d/%.2d 00:00"), fromDateTm.tm_year + 1900, fromDateTm.tm_mon + 1, fromDateTm.tm_mday);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), toDateTm.tm_year + 1900, toDateTm.tm_mon + 1, toDateTm.tm_mday);
	}
	UpdateData(false);


}
/*void CHMSExaminationQueueList::OnTimeSetfocus(){

}*/
/*void CHMSExaminationQueueList::OnTimeKillfocus(){

}*/
long CHMSExaminationQueueList::OnTimeLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndTime.IsSearchKey() && !m_szTimeKey.IsEmpty()) {
		szWhere.Format(_T(" and ss_code='%s' "), m_szTimeKey);
	};
	m_wndTime.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_reception_time' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndTime.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSExaminationQueueList::OnTimeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */


void CHMSExaminationQueueList::OnRoomSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSExaminationQueueList::OnRoomSelendok()
{
	OnPatientListLoadData();

}
/*void CHMSExaminationQueueList::OnRoomSetfocus(){

}*/
/*void CHMSExaminationQueueList::OnRoomKillfocus(){

}*/

long CHMSExaminationQueueList::OnRoomLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	/*if(!pMF->m_UserInfo.su_hms_xroom.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrl_id in(%s) "), pMF->m_UserInfo.su_hms_xroom);*/

	if (!pMF->m_UserInfo.su_hms_xroom2.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hrl_key IN (%s) "), pMF->m_UserInfo.su_hms_xroom2);
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hrl_id in(%s) "), pMF->m_UserInfo.su_hms_xroom);
	}

	if (m_wndRoom.IsSearchKey() && ToInt(m_szRoomKey) > 0)
	{
		szWhere.Format(_T(" AND hrl_id=%ld "), ToLong(m_szRoomKey));
	};

	szSQL.Format(_T("SELECT hrl_id as id, hrl_index as roomidx, hrl_name as name, HRL_DEPTID as deptid FROM hms_roomlist WHERE NVL(HRL_ACTIVE, 'N') = 'Y' and hrl_deptid='%s' %s ORDER BY hrl_index "), pMF->m_szDept, szWhere);
	m_wndRoom.DeleteAllItems();
	m_wndRoom.Format(3, 2, 10, 2);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF()) {
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("roomidx")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExaminationQueueList::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSExaminationQueueList::OnDocumentNoChange(){

} */
/*void CHMSExaminationQueueList::OnDocumentNoSetfocus(){

} */
/*void CHMSExaminationQueueList::OnDocumentNoKillfocus(){

} */
int CHMSExaminationQueueList::OnDocumentNoCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString tmpStr, szDate;

	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	if (tmpStr.GetLength() < 8 && m_nDocumentNo > 0) {
		szDate = pMF->GetSysDate();
		tmpStr.Format(_T("%d%.7ld"), ToLong(szDate.Mid(2, 2)), m_nDocumentNo);
		m_nDocumentNo = ToLong(tmpStr);
		UpdateData(false);
	}
	m_wndDocumentNo.SetSel(0, 8);
	printf("\r\n%ld", m_nDocumentNo);
	OnPatientListLoadData();
	printf("\r\n%ld", m_nDocumentNo);
	if (m_wndPatientList.GetItemCount() <= 0) {
	}
	if (m_nDocumentNo == 0)
		return 0;
	return 1;
}
/*void CHMSExaminationQueueList::OnPatientNameChange(){

} */
/*void CHMSExaminationQueueList::OnPatientNameSetfocus(){

} */
/*void CHMSExaminationQueueList::OnPatientNameKillfocus(){

} */
int CHMSExaminationQueueList::OnPatientNameCheckValue() {

	OnPatientListLoadData();
	//	if(m_szPatientName.IsEmpty())
	//		return 0;
	return 1;
}


void CHMSExaminationQueueList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSExaminationQueueList::OnObjectSelendok() {
	OnPatientListLoadData();

}
/*void CHMSExaminationQueueList::OnObjectSetfocus(){

}*/
/*void CHMSExaminationQueueList::OnObjectKillfocus(){

}*/
long CHMSExaminationQueueList::OnObjectLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()) {
		szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems();
	int nCount = 0;
	//szSQL.Format(_T("SELECT * FROM hms_object %s ORDER BY ho_id "), szWhere);
	szSQL.Format(_T("SELECT * FROM hms_object WHERE ho_active='Y' %s ORDER BY cast(ho_id as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndObject.AddItems(
			rs.GetValue(_T("ho_id")),
			rs.GetValue(_T("ho_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExaminationQueueList::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


} */


void CHMSExaminationQueueList::OnRefrehSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	OnPatientListLoadData();
	UpdateData(false);

}


int CHMSExaminationQueueList::OnAddHMSExaminationQueueList() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (!pMF->SetStartWork(this, _T("Add HMSExaminationQueueList")))
		return -1;
	SetMode(VM_ADD);
	return 0;

}
int CHMSExaminationQueueList::OnEditHMSExaminationQueueList() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (!pMF->SetStartWork(this, _T("Edit HMSExaminationQueueList")))
		return -1;
	SetMode(VM_EDIT);
	return 0;

}
int CHMSExaminationQueueList::OnDeleteHMSExaminationQueueList() {
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
		OnCancelHMSExaminationQueueList();
	}
	return 0;
}
int CHMSExaminationQueueList::OnSaveHMSExaminationQueueList() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (GetMode() == VM_ADD) {
		// 		szSQL = m_tblTbl.GetInsertSQL(); 
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE"));
		//		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
		szSQL += szWhere;
	}
	// _fmsg(_T("%s"), szSQL); 
	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
	{
		//OnHMSExaminationQueueListListLoadData(); 
		SetMode(VM_VIEW);
		pMF->FinishWork(this);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSExaminationQueueList::OnCancelHMSExaminationQueueList() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	pMF->FinishWork(this);
	return 0;
}
int CHMSExaminationQueueList::OnHMSExaminationQueueListListLoadData() {
	return 0;
}



void CHMSExaminationQueueList::OnResizeLayout()
{
	AddResize(&m_wndPatientList, 100, 100);
	AddResize(&m_wndPatientListGroupBox, 100, 100);
	//AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndPatientListGroupBox,&m_wndPatientList,NULL);

}

void CHMSExaminationQueueList::OnOutPatientSelect() {
	UpdateData(TRUE);
	OnPatientListLoadData();
	UpdateData(FALSE);
}

void CHMSExaminationQueueList::OnReExamSelect()
{
	UpdateData();
	OnPatientListLoadData();
}
int CHMSExaminationQueueList::OnRecaculateFeeListSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFromTime, szToTime, szSheetNo;
	long nDocumentNo;
	UpdateData(true);
	pMF->BeginWaitCursor();
	

	szFromTime = _T("00:00:00");
	szToTime = _T("23:59:59");


	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s %s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s %s', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, szFromTime, m_szToDate, szToTime);


	if (pMF->m_szDept != _T("ALL"))
		szWhere.AppendFormat(_T(" AND he_deptid='%s' "), pMF->m_szDept);
	if (!pMF->m_UserInfo.su_hms_xroom.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_roomid in(%s) "), pMF->m_UserInfo.su_hms_xroom);


	szSQL.Format(_T(" SELECT hd_docno as docno") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_exam ON(hd_docno=he_docno)") \
		_T(" WHERE 1=1 AND NVL(hd_suggestion,'X') NOT IN ('C', 'D') %s "), szWhere);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), nDocumentNo);
		szSQL.Format(_T("HMS_FEE_CREATE(%ld,'ETPODXM', '%s') "), nDocumentNo, _T("EM"));
		pMF->ExecDML(szSQL);
		//_msg(_T("%s"),szSQL);
		rs.MoveNext();
	}
	pMF->EndWaitCursor();
	return 0;
}

int CHMSExaminationQueueList::OnExportFeeListSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFromTime, szToTime, szSheetNo, tmpStr;
	long nDocumentNo;
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1 = 0;
	double nTotal[30], nGroupTotal[30];
	for (int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}

	UpdateData(true);
	pMF->BeginWaitCursor();
	

	szFromTime = _T("00:00:00");
	szToTime = _T("23:59:59");


	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s %s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s %s', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, szFromTime, m_szToDate, szToTime);


	if (pMF->m_szDept != _T("ALL"))
		szWhere.AppendFormat(_T(" AND he_deptid='%s' "), pMF->m_szDept);
	if (!pMF->m_UserInfo.su_hms_xroom.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_roomid in(%s) "), pMF->m_UserInfo.su_hms_xroom);

	szSQL.Format(_T(" SELECT *") \
		_T(" FROM") \
		_T("   (SELECT ") \
		_T("     hd_docno           AS docno,") \
		_T("     trim(hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname)                                    AS pname,") \
		_T("     hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
		_T("     extract(YEAR FROM hp_birthdate)                    AS yearofbirth,") \
		_T("     hms_getsex(hp_sex)                                 AS sex,   ") \
		_T("     he_examdate                                        AS examdate,") \
		_T("     he_deptid                                          AS deptid,    ") \
		_T("     SUM(f.hfe_cost) AS total,") \
		_T("     SUM(f.hfe_cost-f.hfe_discount) AS                  patpaid,") \
		_T("     hms_getobjectname(hd_object)                       AS object,") \
		_T("     sys_sel_getname('hms_reception_status', he_status) AS status,") \
		_T("     hp_workplace                                       AS workplace,") \
		_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid))    AS address,") \
		_T("     HD_CONTACTTEL                                      AS Mobile, HD_CONTACTADDR as contactadd, ") \
		_T("     GET_USERNAME(HE_CREATEDBY)                         AS nguoitao, ") \
		_T("     get_username(HE_DOCTOR)                            AS bskham ") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_exam") \
		_T("   ON(hd_docno =he_docno)") \
		_T("   LEFT JOIN hms_fee f") \
		_T("   ON(hd_docno =f.hfe_docno)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(ho_id =HD_OBJECT)") \
		_T("   WHERE 1  =1 %s ") \
		_T("   AND NVL(hd_suggestion,'X') NOT IN ('C', 'D')") \
		_T("   AND NVL(f.HFE_CATEGORY,'X')    <> 'Y'") \
		_T("   AND f.hfe_status                ='O'") \
		_T("   GROUP BY ") \
		_T("     hd_docno,") \
		_T("     hp_surname,") \
		_T("     hp_midname,") \
		_T("     hp_firstname,   ") \
		_T("     hp_sex,") \
		_T("     hd_object, ") \
		_T("     he_examdate,   ") \
		_T("     he_roomid,  ") \
		_T("     he_status,") \
		_T("     hd_admitdate,") \
		_T("     hp_birthdate,") \
		_T("     he_deptid,") \
		_T("     hp_workplace,") \
		_T("     hp_provid, hp_distid, hp_villid,") \
		_T("     HD_CONTACTTEL, HD_CONTACTADDR, HE_CREATEDBY, HE_DOCTOR") \
		_T("   HAVING SUM(f.hfe_cost) > 0") \
		_T("   ORDER BY TRUNC(examdate),") \
		_T("     he_roomid,") \
		_T("     he_receptno,") \
		_T("     pname") \
		_T("   )") \
		_T(" ORDER BY total DESC"), szWhere);

	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\BaoCaoThatThuPhongKhamC13.xls"))) AfxMessageBox(_T("Chưa có File BaoCaoThatThuPhongKhamC13.xls trong thư mục Export\\Template!"));
	xls.SetWorksheet(0);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 8;
	nCol = 0;
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol + 0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		/*rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);*/

		rs.GetValue(_T("total"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol + 7, nRow, double2str(nTemp), FMT_NUMBER2);


		/*rs.GetValue(_T("patpaid"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);*/

		rs.GetValue(_T("patpaid"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol + 8, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("object"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("status"), tmpStr);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("workplace"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Mobile"), tmpStr);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("contactadd"), tmpStr);
		xls.SetCellText(nCol + 14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("nguoitao"), tmpStr);
		xls.SetCellText(nCol + 15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bskham"), tmpStr);
		xls.SetCellText(nCol + 16, nRow, tmpStr, FMT_TEXT);


		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(6, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for (int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	/*if (nTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}*/

	EndWaitCursor();
	xls.Save(_T("Exports\\Template\\BaoCaoThatThuPhongKhamC132.xls"));
	return 0;
}

void CHMSExaminationQueueList::InVongDeoTay()
{
	CPrintForms printer;
	printer.InVongDeoTay();
}

int CHMSExaminationQueueList::OnExportPatientListSelect()
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
	xls.SetCellText(0, 2, _T("Danh sách bệnh nhân khám bệnh"), 4098, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	xls.SetCellText(0, 4, strtype, 4098, true);

	//TODO: Write Column Header

	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số HS"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Tuổi"));
	arrCol.Add(_T("Giới"));
	arrCol.Add(_T("Đối tượng"));
	arrCol.Add(_T("Lượt khám"));
	arrCol.Add(_T("TG khám"));
	arrCol.Add(_T("TG kết thúc"));
	arrCol.Add(_T("Trạng thái"));
	arrCol.Add(_T("Hướng điều trị"));
	arrCol.Add(_T("Mã Bệnh nhân"));
	arrCol.Add(_T("Mã phòng"));
	arrCol.Add(_T("Phiếu khám"));
	arrCol.Add(_T("TG tạo hồ sơ"));
	arrCol.Add(_T("Chế độ"));
	arrCol.Add(_T("Bác sĩ khám"));
	arrCol.Add(_T("Tổng tiền"));
	arrCol.Add(_T("Tổng tạm gửi"));
	arrCol.Add(_T("Số tiền đã thanh toán"));
	arrCol.Add(_T("Số tiền chưa thanh toán"));

	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 5, arrCol.GetAt(i), 4098, true);
	nRow = 6;

	for (int i = 0; i < m_wndPatientList.GetItemCount(); i++)
	{
		for (int j = 0; j < m_wndPatientList.GetColumnCount(); j++)
		{

			tmpStr = m_wndPatientList.GetItemText(i, j);

			switch (j)
			{

			case 6:

				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;

			case 17:

				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;

			case 18:

				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;
			case 19:

				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;

			case 20:

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

	xls.Save(_T("Exports\\Danhsachbenhnhanphongkham.xls"));

	return 1;
}

void CHMSExaminationQueueList::OnDeptNameSelendok()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(TRUE);
	if (m_szDeptNameKey == _T("ALL"))
	{
		m_szCurrentZone = _T("Tất cả các khoa khám bệnh");

	}
	else
		m_szCurrentZone = pMF->GetDepartmentName(m_szDeptNameKey);

	pMF->m_szDept = m_szDeptNameKey;
	m_szsubzoneKey.Empty();
	m_szRoomKey.Empty();

	UpdateData(FALSE);
}

void CHMSExaminationQueueList::OnDeptNameRefresh(CString szCurrentZone)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(TRUE);
	m_szCurrentZone = pMF->GetDepartmentName(szCurrentZone);
	m_szsubzoneKey.Empty();
	m_szRoomKey.Empty();

	UpdateData(FALSE);
}



long CHMSExaminationQueueList::OnDeptNameLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if (pMF->CheckPermission(_T("EM.100.99")))
	{
		m_wndDeptName.AddItems(_T("ALL"), _T("Tất cả các khoa"), NULL);
		m_wndDeptName.AddItems(_T("C1.1"), _T("Khoa Khám Bệnh Đa Khoa C1.1-A"), NULL);
		m_wndDeptName.AddItems(_T("TYC"), _T("Khoa Khám Bệnh TYC C1.1-B"), NULL);
		m_wndDeptName.AddItems(_T("AB"), _T("Khu khám bệnh A-B"), NULL);
		m_wndDeptName.AddItems(_T("C1.2"), _T("Khoa Khám Bệnh C1.2"), NULL);
		m_wndDeptName.AddItems(_T("C1.3"), _T("Khoa Cấp cứu C1.3"), NULL);
		m_wndDeptName.AddItems(_T("KB_A16"), _T("Khoa Khám Bệnh Đối Ngoại - Quốc Tế A16"), NULL);
		m_wndDeptName.AddItems(_T("TTHTSS"), _T("Trung Tâm Hỗ Trợ Sinh Sản"), NULL);
		m_wndDeptName.AddItems(_T("TTTM"), _T("PK TRUNG TÂM THẨM MỸ"), NULL);
		m_wndDeptName.AddItems(_T("TTTVDT"), _T("Trung tâm tư vấn di truyền và sàng lọc ung thư"), NULL);
		m_wndDeptName.AddItems(_T("KSK"), _T("Trung tâm Khám sức khoẻ"), NULL);
		m_wndDeptName.AddItems(_T("QLKBUT"), _T("Trung tâm khám bệnh ung thư"), NULL);
	}
	else
	{

		if (m_wndDeptName.IsSearchKey() && !m_szDeptNameKey.IsEmpty())
		{
			szWhere.Format(_T(" and sd_id='%s' "), m_szDeptNameKey);
		}
		else
		{

		}


		m_wndDeptName.DeleteAllItems();
		int nCount = 0;

		szSQL.Format(_T(" select ") \
			_T(" sd_id as id,") \
			_T(" sd_name as name,") \
			_T(" sd_kb_index") \
			_T(" from sys_dept") \
			_T(" where sd_isactive='Y' and sd_id = '%s' %s ") \
			_T(" and sd_type='KB'") \
			_T(" order by sd_kb_index"), pMF->m_szDept, szWhere);

		nCount = rs.ExecSQL(szSQL);
		while (!rs.IsEOF())
		{
			m_wndDeptName.AddItems
			(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}

	}
	return 0;
}

long CHMSExaminationQueueList::OnsubzoneLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndsubzone.IsSearchKey() && !m_szsubzoneKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szsubzoneKey);
	};
	m_wndsubzone.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name, ss_vndesc as khoa FROM sys_sel WHERE ss_id='HMS_TREAT_ZONE' and ss_vndesc = '%s' %s ORDER BY ss_code "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndsubzone.AddItems
		(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("khoa")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

#include "UpdateZoneInfor.h"

int CHMSExaminationQueueList::OnChangeZoneSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return 0;
	m_wndPatientList.SetFocus();
	m_wndPatientList.SetCurSel(m_nRowSel);
	long nDocNo = ToLong(m_wndPatientList.GetItemText(nSel, 2));

	CUpdateZoneInfor dlg(this);
	dlg.m_nDocumentNo = nDocNo;
	if (dlg.DoModal() == IDOK)
	{

	}
	return 0;
}

void CHMSExaminationQueueList::ShowPageControlBar(bool bShow)
{
	int nShow = bShow ? SW_SHOW : SW_HIDE;
	m_wndNextPage.ShowWindow(nShow);
	m_wndLastPage.ShowWindow(nShow);
	m_wndPage.ShowWindow(nShow);
	m_wndPrevPage.ShowWindow(nShow);
	m_wndFirstPage.ShowWindow(nShow);
}

void CHMSExaminationQueueList::OnNextPageSelect()
{
	if (m_nCurPage >= m_nTotalPage)
		return;
	m_nCurPage++;
	m_bLoadPage = true;
	OnPatientListLoadData();
	m_szPageKey = int2str(m_nCurPage);
	UpdateData(FALSE);
}

void CHMSExaminationQueueList::OnLastPageSelect()
{
	if (m_nCurPage >= m_nTotalPage)
		return;
	m_nCurPage = m_nTotalPage;
	m_bLoadPage = true;
	OnPatientListLoadData();
	m_szPageKey = int2str(m_nCurPage);
	UpdateData(FALSE);
}

void CHMSExaminationQueueList::OnPrevPageSelect()
{
	if (m_nCurPage <= 1)
		return;
	m_nCurPage--;
	m_bLoadPage = true;
	OnPatientListLoadData();
	m_szPageKey = int2str(m_nCurPage);
	UpdateData(FALSE);
}

void CHMSExaminationQueueList::OnFirstPageSelect()
{
	if (m_nCurPage <= 1)
		return;
	m_nCurPage = 1;
	m_bLoadPage = true;
	OnPatientListLoadData();
	m_szPageKey = int2str(m_nCurPage);
	UpdateData(FALSE);
}

int CHMSExaminationQueueList::OnPageSelectChange(int nOldItem, int nNewItem)
{
	UpdateData();
	m_nCurPage = str2int(m_szPageKey);
	m_bLoadPage = true;
	OnPatientListLoadData();
	return 0;
}

long CHMSExaminationQueueList::OnPageLoadData()
{
	m_wndPage.DeleteAllItems();
	for (int i = 1; i <= m_nTotalPage; i++)
	{
		m_wndPage.AddItems(int2str(i), NULL);
	}
	return m_nTotalPage;
}

CString CHMSExaminationQueueList::FormatOrderNumber(CString orderNumber) {
	// Find the position of the dot (.)
	int dotPos = orderNumber.Find(_T('.'));
	if (dotPos == -1) {
		// Return the original number if there's no dot
		return orderNumber;
	}

	// Extract integer part and decimal part
	CString integerPart = orderNumber.Left(dotPos);
	CString decimalPart = orderNumber.Mid(dotPos + 1);

	// Pad the decimal part with leading zeros to ensure it has 3 digits
	if (decimalPart.GetLength() == 1) {
		decimalPart = _T("00") + decimalPart;  // 1 digit -> pad with two zeros
	}
	else if (decimalPart.GetLength() == 2) {
		decimalPart = _T("0") + decimalPart;  // 2 digits -> pad with one zero
	}

	// Reassemble the order number with formatted parts
	CString formattedOrderNumber;
	formattedOrderNumber.Format(_T("%s.%s"), integerPart, decimalPart);
	//_tprintf(L"-----------%s", formattedOrderNumber);
	return formattedOrderNumber;
}
int CHMSExaminationQueueList::OnExamListCancelItem()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, szFeeStatus, szDeptid;

	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return -1;

	m_wndPatientList.SetFocus();
	m_wndPatientList.SetCurSel(m_nRowSel);

	int nReceptIdx = ToLong(m_wndPatientList.GetItemText(nSel, 15));
	long nDocNo = ToLong(m_wndPatientList.GetItemText(nSel, 2));


	szSQL.Format(_T("SELECT he_status, HFE_REFSTATUS, HE_DEPTID FROM hms_exam ") \
		_T("WHERE he_docno=%ld and he_receptidx = %ld "),
		nDocNo, nReceptIdx);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("he_status"), szStatus);
		rs.GetValue(_T("HFE_REFSTATUS"), szFeeStatus);
		rs.GetValue(_T("HE_DEPTID"), szDeptid);
	}
	//_msg(_T("%s"), szStatus);
		rs.GetValue(_T("HE_DEPTID"), szDeptid);
	if (szFeeStatus == _T("P") && szDeptid != _T("QLKBUT") && szStatus != _T("O"))
	{
		ShowMessageBox(_T("Không thể hủy phiếu ở trạng thái hiện thời (phiếu đã thanh toán, hoặc đã được khám)!"));
		return -1;
	}

	int vret = ShowMessageBox(_T("Chức năng này sẽ hủy phiếu khám và ghi log lại sự kiện, bạn chắc chắn không? "), MB_YESNO);
	if (vret == IDNO)
		return -2;

	szSQL.Format(_T("HMS_EXAM_CANCEL_ITEM_V2('%s', %ld, %ld, '%s') "),
		pMF->m_szDept, nDocNo, nReceptIdx, pMF->GetCurrentUser());

	int ret = str2int(pMF->ExecDML(szSQL));
	

	if (ret > 0)
	{
		CString szEvent, szDesc;
		szEvent.Format(_T("Hủy phiếu khám"));
		szDesc.Format(_T("SHS: %ld So phieu :%ld"), nDocNo, nReceptIdx);
		pMF->SystemLog(szEvent, szDesc);

		//SetMode(VM_VIEW);
		OnPatientListLoadData();
	}
	else
	{
		CString szMsg;
		szMsg.Format(_T("[%d] Không hủy được phiếu tiếp đón"), ret);
		ShowMessageBox(szMsg, MB_OK);
	}
	return ret;
	return 0;
}