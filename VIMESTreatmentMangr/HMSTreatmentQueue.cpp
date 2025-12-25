#include "HMSTreatmentQueue.h"
#include "MainFrm.h"
#include "HMSDepartmentAdmissionDialog.h"
#include "HMSTreatMovementDialog.h"
#include "HMSCreateOutpatientRecordDialog.h"
#include "HMSNewbornRecord.h"
#include "HMSAdmissionRegistrationDialog.h"
#include "HMSExtraInfoDialog.h"
#include "HMSExt/ReportUtils.h"

static void _OnAdmissionSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnAdmissionSelect();
}
static void _OnTreatingSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnTreatingSelect();
}
static void _OnTransferSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnTransferSelect();
}
static void _OnDischargedSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnDischargedSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnFromDateSetfocus();} */
	/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
		((CHMSTreatmentQueue *)pWnd)->OnFromDateKillfocus();
	} */
static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnToDateSetfocus();} */
	/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
		((CHMSTreatmentQueue *)pWnd)->OnToDateKillfocus();
	} */
static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnToDateCheckValue();
}
static void _OnObjectSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSTreatmentQueue*)pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnObjectSelendokFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnObjectAddNew();
}*/



static void _OnDepartmentSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSTreatmentQueue*)pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDepartmentSelendokFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnDepartmentSelendok();
}

static long _OnDepartmentLoadDataFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnDepartmentLoadData();
}


static void _OnCombinedTreatmentSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnCombinedTreatmentSelect();
}
static void _OnOutpatientSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnOutpatientSelect();
}
static void _OnWaitingForPaymentSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnWaitingForPaymentSelect();
}
static void _OnSendingTreatmentSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnSendingTreatmentSelect();
}
static void _OnCancerSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnCancerSelect();
}

static void _OnExaminationSurgerySelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnExaminationSurgerySelect();
}

/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnRecordNoSetfocus();} */
	/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
		((CHMSTreatmentQueue *)pWnd)->OnRecordNoKillfocus();
	} */
static int _OnRecordNoCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnRecordNoCheckValue();
}
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDocumentNoSetfocus();} */
	/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
		((CHMSTreatmentQueue *)pWnd)->OnDocumentNoKillfocus();
	} */
static int _OnDocumentNoCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnDocumentNoCheckValue();
}
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnPatientNameSetfocus();} */
	/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
		((CHMSTreatmentQueue *)pWnd)->OnPatientNameKillfocus();
	} */
static int _OnPatientNameCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnPatientNameCheckValue();
}
static void _OnRefrehSelectFnc(CWnd* pWnd) {
	CHMSTreatmentQueue* pVw = (CHMSTreatmentQueue*)pWnd;
	pVw->OnRefrehSelect();
}
static long _OnPatientListLoadDataFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnPatientListLoadData();
}
static void _OnPatientListDblClickFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnPatientListDblClick();
}
static void _OnPatientListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CHMSTreatmentQueue*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
}
static int _OnPatientListAdmissionFnc(CWnd* pWnd)
{
	return ((CHMSTreatmentQueue*)pWnd)->OnPatientListAdmission();
}

static int _OnDebriefingDischargeFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnDebriefingDischarge();
}

static int _OnUpdateRelativeInfoFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnUpdateRelativeInfo();
}

static int _OnCreateOutpatientRecordFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnCreateOutpatientRecord();
}

static int _OnPatientListDeleteItemFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnPatientListDeleteItem();
}

static int _OnCancelClinicalRecordFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnCancelClinicalRecord();
}

static int _OnDeleteMistakeTransferDeptFnc(CWnd* pWnd)

{
	return ((CHMSTreatmentQueue*)pWnd)->OnDeleteMistakeTransferDept();
}

static int _OnCombinedTreatMovementFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnCombinedTreatMovement();
}


static int _OnAddHMSTreatmentQueueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnAddHMSTreatmentQueue();
}
static int _OnEditHMSTreatmentQueueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnEditHMSTreatmentQueue();
}
static int _OnDeleteHMSTreatmentQueueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnDeleteHMSTreatmentQueue();
}
static int _OnSaveHMSTreatmentQueueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnSaveHMSTreatmentQueue();
}
static int _OnCancelHMSTreatmentQueueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->OnCancelHMSTreatmentQueue();
}
static int _OnGiveBirthFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnGiveBirth();
	return 0;
}
static void _OnDachidinhxnSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnDachidinhxnSelect();
}
static void _OnChuachidinhxnSelectFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnChuachidinhxnSelect();
}
//
//static int _OnSortByPatientFnc(CWnd *pWnd){
//	((CHMSTreatmentQueue*)pWnd)->OnSortByPatient();
//	return 0;
//}
//
//static int _OnSortByObjectFnc(CWnd *pWnd){
//	((CHMSTreatmentQueue*)pWnd)->OnSortByObject();
//	return 0;
//}

static int _Onn_total_IndexCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->Onn_total_IndexCheckValue();
}
static int _Onn_total_tongtienCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->Onn_total_tongtienCheckValue();
}
static int _Onn_total_tongtamguiCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->Onn_total_tongtamguiCheckValue();
}
static int _Onn_total_tongtien_dattCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->Onn_total_tongtien_dattCheckValue();
}
static int _Onn_total_tongtien_chuattCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentQueue*)pWnd)->Onn_total_tongtien_chuattCheckValue();
}
static long _OnLoaidieutriLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSTreatmentQueue*)pWnd)->OnLoaidieutriLoadData();
}

static void _OnLoaidieutriSelendokFnc(CWnd* pWnd) {
	((CHMSTreatmentQueue*)pWnd)->OnLoaidieutriSelendok();
}
static long _OnPhanloaiUngthuLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSTreatmentQueue*)pWnd)->OnPhanloaiUngthuLoadData();
}

static void _OnPhanloaiUngthuSelendokFnc(CWnd* pWnd)
{
	((CHMSTreatmentQueue*)pWnd)->OnPhanloaiUngthuSelendok();
}

static int _OnTotalNumberCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSTreatmentQueue*)pWnd)->OnTotalNumberCheckValue();
}

static void _OnDuketquaSelectFnc(CWnd* pWnd)
{
	((CHMSTreatmentQueue*)pWnd)->OnDuketquaSelect();
}
static void _OnDu1phanketquaSelectFnc(CWnd* pWnd)
{
	((CHMSTreatmentQueue*)pWnd)->OnDu1phanketquaSelect();
}
static int _OnCICCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnCICCheckValue();
} 

CHMSTreatmentQueue::CHMSTreatmentQueue() {

	m_nDlgWidth = 1005;
	m_nDlgHeight = 685;
	SetDefaultValues();
}
CHMSTreatmentQueue::~CHMSTreatmentQueue() 
{
}
void CHMSTreatmentQueue::OnCreateComponents()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	m_wndStatus.Create(this, _T("Status"), 5, 5, 270, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 275, 5, 1005, 90);
	//m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 98, 1005, 530);
	m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 98, 1005, 622);
	m_wndAdmission.Create(this, _T("Admission"), 10, 30, 135, 55);
	m_wndTreating.Create(this, _T("Treating"), 140, 30, 265, 55);
	m_wndTransfer.Create(this, _T("Ward Movement"), 10, 60, 135, 85);
	m_wndDischarged.Create(this, _T("Discharged"), 140, 60, 265, 85);

	/*m_wndFromDateLabel.Create(this, _T("From Date"), 280, 30, 380, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 485, 30, 585, 55);
	m_wndFromDate.Create(this, 385, 30, 480, 55);
	m_wndToDate.Create(this, 590, 30, 685, 55);
	m_wndObjectLabel.Create(this, _T("Object"), 690, 30, 790, 55);
	m_wndObject.Create(this, 795, 30, 945, 55);
	m_wndRecordNoLabel.Create(this, _T("Record No"), 280, 60, 380, 85);
	m_wndRecordNo.Create(this, 386, 60, 480, 85);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 485, 60, 585, 85);
	m_wndDocumentNo.Create(this, 590, 60, 685, 85);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 690, 60, 790, 85);
	m_wndPatientName.Create(this, 795, 60, 945, 85);
	m_wndRefreh.Create(this, _T("@"), 950, 60, 1005, 85);*/

	m_wndFromDateLabel.Create(this, _T("From Date"), 280, 30, 356, 55);
	m_wndFromDate.Create(this,361, 30, 446, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 451, 30, 528, 55);
	m_wndToDate.Create(this,533, 30, 618, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 623, 30, 709, 55);
	m_wndObject.Create(this,714, 30, 811, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 815, 30, 878, 55);
	m_wndRecordNo.Create(this,876, 30, 951, 55); 
	m_wndTotalNumber.Create(this,956, 30, 1000, 55); 
	m_wndTransfer.Create(this, _T("Ward Movement"), 10, 60, 135, 85);
	m_wndDischarged.Create(this, _T("Discharged"), 140, 60, 265, 85);
	m_wndCICLabel.Create(this, _T("Số CCCD"), 280, 60, 356, 85);
	m_wndCIC.Create(this,361, 60, 528, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 533, 60, 618, 85);
	m_wndDocumentNo.Create(this,623, 60, 709, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 714, 60, 811, 85);
	m_wndPatientName.Create(this,815, 60, 951, 85); 
	m_wndRefreh.Create(this, _T("@"), 956, 60, 1000, 85);

	//m_wndPatientList.Create(this,10, 120, 990, 590);
	m_wndPatientList.Create(this, 10, 120, 1000, 526);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 531, 85, 556);
	m_wndDepartment.Create(this, 90, 531, 250, 556);
	m_wndLoaidieutriLabel.Create(this, _T("Phân loại điều trị"), 255, 531, 335, 556);
	m_wndLoaidieutri.Create(this, 340, 531, 590, 556);
	m_wndCancer.Create(this, _T("Phân loại ung thư"), 595, 531, 695, 556);
	m_wndPhanloaiUngthu.Create(this, 700, 531, 1000, 556);
	m_wndOutpatient.Create(this, _T("Out patient"), 10, 561, 130, 586);
	m_wndWaitingForPayment.Create(this, _T("Waiting for pay"), 135, 561, 250, 586);
	m_wndCombinedTreatment.Create(this, _T("Receipt Treatment"), 243, 561, 355, 586);
	m_wndSendingTreatment.Create(this, _T("Sending Treatment"), 380, 561, 530, 586);

	m_wndCancer.SetTextColor(RGB(255, 0, 0));

	m_wndDachidinhxn.Create(this, _T("Đã chỉ định xét nghiệm"), 637, 96, 815, 121);
	m_wndChuachidinhxn.Create(this, _T("Chưa chỉ định xét nghiệm"), 820, 96, 998, 121);
	m_wndDuketqua.Create(this, _T("Đủ kết quả xét nghiệm"), 275, 96, 443, 121);
	m_wndDu1phanketqua.Create(this, _T("Đủ 1 phần KQ xét nghiệm"), 449, 96, 633, 121);

	//	m_wndExaminationSurgery.Create(this, _T(""), 0, 0, 25, 25);

	m_wndTongluotdieutrilabel.Create(this, _T("Lượt điều trị"), 5, 593, 85, 618);
	m_wndn_total_Index.Create(this, 90, 593, 170, 618);
	m_wndTongtienlabel.Create(this, _T("Tổng tiền"), 175, 593, 253, 618);
	m_wndn_total_tongtien.Create(this, 258, 593, 353, 618);
	m_wndTongtamguilabel.Create(this, _T("Tổng tạm gửi"), 359, 593, 448, 618);
	m_wndn_total_tongtamgui.Create(this, 453, 593, 548, 618);
	m_wndTongtien_datt_label.Create(this, _T("Tổng tiền đã TT"), 555, 593, 662, 618);
	m_wndn_total_tongtien_datt.Create(this, 667, 593, 762, 618);
	m_wndTongtien_chuatt_label.Create(this, _T("Tổng tiền chưa TT"), 769, 593, 895, 618);
	m_wndn_total_tongtien_chuatt.Create(this, 900, 593, 1000, 618);

	m_wndTotalNumber.Create(this, 950, 29, 1005, 54);
	SetWindowFont(&m_wndTotalNumber, GetFaceName(), GetFaceSize(), true);
	m_wndTotalNumber.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndCIC, GetFaceName(), GetFaceSize() + 2, true);
	m_wndCIC.SetTextColor(RGB(0, 0, 255));

	if (!pMF->CheckPermission(_T("TM.100.100")))
	{
		m_wndTongluotdieutrilabel.ShowWindow(SW_HIDE);
		m_wndTongtienlabel.ShowWindow(SW_HIDE);
		m_wndTongtamguilabel.ShowWindow(SW_HIDE);
		m_wndTongtien_datt_label.ShowWindow(SW_HIDE);
		m_wndTongtien_chuatt_label.ShowWindow(SW_HIDE);
		m_wndn_total_Index.ShowWindow(SW_HIDE);
		m_wndn_total_tongtien.ShowWindow(SW_HIDE);
		m_wndn_total_tongtamgui.ShowWindow(SW_HIDE);
		m_wndn_total_tongtien_chuatt.ShowWindow(SW_HIDE);
		m_wndn_total_tongtien_datt.ShowWindow(SW_HIDE);
	}
	

}
void CHMSTreatmentQueue::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndCIC.SetLimitText(12);

	m_wndRecordNo.SetNotEmpty(false);
	m_wndDocumentNo.SetNotEmpty(false);
	m_wndDepartment.SetReadOnly(TRUE);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndLoaidieutri.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndLoaidieutri.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(2, _T("Description"), CFMT_TEXT, 200);

	m_wndPatientList.m_nItemHeight = 35;
	m_wndPatientList.m_clrText = RGB(0, 0, 0);
	m_wndPhanloaiUngthu.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_CENTER, 80);
	m_wndPhanloaiUngthu.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER | CFMT_FIXSIZE, 40);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 85);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 140);
	m_wndPatientList.InsertColumn(3, _T("Yob"), CFMT_TEXT | CFMT_CENTER | CFMT_FIXSIZE, 65);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT | CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(5, _T("Object"), CFMT_TEXT, 130);
	m_wndPatientList.InsertColumn(6, _T("(%)"), CFMT_NUMBER, 40);
	m_wndPatientList.InsertColumn(7, _T("Admit Date"), CFMT_DATETIME | CFMT_CENTER, 125);
	m_wndPatientList.InsertColumn(8, _T("Discharge Date"), CFMT_DATETIME | CFMT_CENTER, 125);
	m_wndPatientList.InsertColumn(9, _T("Status"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(10, _T("AdmitNumber"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(11, _T("Room - Bed"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(12, _T("PatientNo"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(13, _T("Idx"), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(14, _T("Doctor"), CFMT_TEXT, 80);
	m_wndPatientList.InsertColumn(15, _T("From Dept"), CFMT_TEXT, 80);
	m_wndPatientList.InsertColumn(16, _T("Rel Phone"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(17, _T("Phone"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(18, _T("Số lưu trữ"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(19, _T("Lượt điều trị"), CFMT_TEXT, 0);

	if (pMF->CheckPermission(_T("TM.100.100")))
	{
		m_wndPatientList.InsertColumn(20, _T("Tổng tiền"), CFMT_MONEY, 120);
		m_wndPatientList.InsertColumn(21, _T("Tổng tạm gửi"), CFMT_MONEY, 120);
		m_wndPatientList.InsertColumn(22, _T("Số tiền đã TT"), CFMT_MONEY, 120);
		m_wndPatientList.InsertColumn(23, _T("Số tiền chưa TT"), CFMT_MONEY, 120);
	}
	else
	{
		m_wndPatientList.InsertColumn(20, _T("Tổng tiền"), CFMT_MONEY, 0);
		m_wndPatientList.InsertColumn(21, _T("Tổng tạm gửi"), CFMT_MONEY, 0);
		m_wndPatientList.InsertColumn(22, _T("Số tiền đã TT"), CFMT_MONEY, 0);
		m_wndPatientList.InsertColumn(23, _T("Số tiền chưa TT"), CFMT_MONEY, 0);
	}
	m_wndPatientList.InsertColumn(24, _T("Kết quả xét nghiệm"), CFMT_TEXT, 120);
	m_wndPatientList.InsertColumn(25, _T("Phân loại điều trị"), CFMT_TEXT, 120);

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
	/*m_wndPatientList.AddFixedColumn(0);
	m_wndPatientList.AddFixedColumn(1);
	m_wndPatientList.AddFixedColumn(2);*/


}
void CHMSTreatmentQueue::OnSetWindowEvents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndAdmission.SetEvent(WE_CLICK, _OnAdmissionSelectFnc);
	m_wndTreating.SetEvent(WE_CLICK, _OnTreatingSelectFnc);
	m_wndTransfer.SetEvent(WE_CLICK, _OnTransferSelectFnc);
	m_wndDischarged.SetEvent(WE_CLICK, _OnDischargedSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndWaitingForPayment.SetEvent(WE_CLICK, _OnWaitingForPaymentSelectFnc);
	m_wndCombinedTreatment.SetEvent(WE_CLICK, _OnCombinedTreatmentSelectFnc);
	m_wndSendingTreatment.SetEvent(WE_CLICK, _OnSendingTreatmentSelectFnc);
	m_wndCancer.SetEvent(WE_CLICK, _OnCancerSelectFnc);
	m_wndCIC.SetEvent(WE_CHECKVALUE, _OnCICCheckValueFnc);
	//	m_wndExaminationSurgery.SetEvent(WE_CLICK, _OnExaminationSurgerySelectFnc);

		//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
		//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
		//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
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


	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);

	m_wndLoaidieutri.SetEvent(WE_LOADDATA, _OnLoaidieutriLoadDataFnc);
	m_wndLoaidieutri.SetEvent(WE_SELENDOK, _OnLoaidieutriSelendokFnc);

	m_wndDachidinhxn.SetEvent(WE_CLICK, _OnDachidinhxnSelectFnc);
	m_wndChuachidinhxn.SetEvent(WE_CLICK, _OnChuachidinhxnSelectFnc);

	m_wndDuketqua.SetEvent(WE_CLICK, _OnDuketquaSelectFnc);
	m_wndDu1phanketqua.SetEvent(WE_CLICK, _OnDu1phanketquaSelectFnc);
	m_wndPhanloaiUngthu.SetEvent(WE_LOADDATA, _OnPhanloaiUngthuLoadDataFnc);
	m_wndPhanloaiUngthu.SetEvent(WE_SELENDOK, _OnPhanloaiUngthuSelendokFnc);

	m_wndPatientList.SetWindowText(_T("Patient List"));
	m_wndPatientList.AddEvent(1, _T("Create clinical record"), _OnPatientListAdmissionFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(2, _T("Cancel clinical record"), _OnCancelClinicalRecordFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(3, _T("Create next outpatient record"), _OnCreateOutpatientRecordFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(4, _T("Phiếu tổng kết bệnh nhân ra viện"), _OnDebriefingDischargeFnc);

	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(5, _T("Cập nhân thông tin người nhà"), _OnUpdateRelativeInfoFnc);

	if (pMF->m_UserInfo.su_groupid == _T("A"))
	{
		m_wndPatientList.AddEvent(0, _T("-"), NULL);
		m_wndPatientList.AddEvent(7, _T("Xóa bệnh án do tạo lượt điều trị nhầm"), _OnDeleteMistakeTransferDeptFnc);
	}

	CString szDeptId = pMF->GetCurrentDepartmentID();
	if (szDeptId == _T("B11"))
	{
		m_wndPatientList.AddEvent(0, _T("-"), NULL);
		m_wndPatientList.AddEvent(6, _T("Give Birth"), _OnGiveBirthFnc);
	}

	//	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	//	m_wndPatientList.AddEvent(3, _T("Combined Treat Movement"), _OnCombinedTreatMovementFnc);

	/*
		AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentQueueFnc, 0, 'A', VK_CONTROL);
		AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentQueueFnc, 0, 'E', VK_CONTROL);
		AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentQueueFnc, 0, 'D', VK_CONTROL);
		AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentQueueFnc, 0, 'S', VK_CONTROL);
		AddEvent(0, _T("-"));
		AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentQueueFnc, 0, 'T', VK_CONTROL);
	*/
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_bOutpatient = FALSE;
	m_szObjectKey.Empty();
	m_szDepartmentKey = pMF->m_szDept;

	if (pMF->CheckPermission(_T("20.01")))
	{
		m_wndDepartment.SetReadOnly(FALSE);
	}

	m_wndn_total_Index.SetEvent(WE_CHECKVALUE, _Onn_total_IndexCheckValueFnc);
	m_wndn_total_tongtien.SetEvent(WE_CHECKVALUE, _Onn_total_tongtienCheckValueFnc);
	m_wndn_total_tongtamgui.SetEvent(WE_CHECKVALUE, _Onn_total_tongtamguiCheckValueFnc);
	m_wndn_total_tongtien_datt.SetEvent(WE_CHECKVALUE, _Onn_total_tongtien_dattCheckValueFnc);
	m_wndn_total_tongtien_chuatt.SetEvent(WE_CHECKVALUE, _Onn_total_tongtien_chuattCheckValueFnc);

	SetWindowFont(&m_wndn_total_Index, GetFaceName(), GetFaceSize() + 2, true);
	m_wndn_total_Index.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndn_total_tongtien, GetFaceName(), GetFaceSize() + 2, true);
	m_wndn_total_tongtien.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndn_total_tongtamgui, GetFaceName(), GetFaceSize() + 2, true);
	m_wndn_total_tongtamgui.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndn_total_tongtien_datt, GetFaceName(), GetFaceSize() + 2, true);
	m_wndn_total_tongtien_datt.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndn_total_tongtien_chuatt, GetFaceName(), GetFaceSize() + 2, true);
	m_wndn_total_tongtien_chuatt.SetTextColor(RGB(0, 0, 255));

	m_wndTotalNumber.SetEvent(WE_CHECKVALUE, _OnTotalNumberCheckValueFnc);

	SetMode(VM_EDIT);
	OnPatientListLoadData();


}
void CHMSTreatmentQueue::OnDoDataExchange(CDataExchange* pDX)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	DDX_Radio(pDX, m_wndAdmission.GetDlgCtrlID(), m_nStatus);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

	if (pMF->CheckPermission(_T("20.01")) && m_wndDepartment.GetSafeHwnd())
	{
		DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	}
	DDX_TextEx(pDX, m_wndLoaidieutri.GetDlgCtrlID(), m_szLoaidieutriKey);

	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndWaitingForPayment.GetDlgCtrlID(), m_bWaitingForPayment);
	DDX_Check(pDX, m_wndCombinedTreatment.GetDlgCtrlID(), m_bCombinedTreatment);
	DDX_Check(pDX, m_wndSendingTreatment.GetDlgCtrlID(), m_bSendingTreatment);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Check(pDX, m_wndCancer.GetDlgCtrlID(), m_bCancer);
	DDX_Check(pDX, m_wndDachidinhxn.GetDlgCtrlID(), m_bDachidinhxn);
	DDX_Check(pDX, m_wndChuachidinhxn.GetDlgCtrlID(), m_bChuachidinhxn);
	DDX_Check(pDX, m_wndDuketqua.GetDlgCtrlID(), m_bDuketqua);
	DDX_Check(pDX, m_wndDu1phanketqua.GetDlgCtrlID(), m_bDu1phanketqua);
	DDX_TextEx(pDX, m_wndPhanloaiUngthu.GetDlgCtrlID(), m_szPhanloaiUngthuKey);

	DDX_Text(pDX, m_wndn_total_Index.GetDlgCtrlID(), m_nn_total_Index);
	DDX_Text(pDX, m_wndn_total_tongtien.GetDlgCtrlID(), m_nn_total_tongtien);
	DDX_Text(pDX, m_wndn_total_tongtamgui.GetDlgCtrlID(), m_nn_total_tongtamgui);
	DDX_Text(pDX, m_wndn_total_tongtien_datt.GetDlgCtrlID(), m_nn_total_tongtien_datt);
	DDX_Text(pDX, m_wndn_total_tongtien_chuatt.GetDlgCtrlID(), m_nn_total_tongtien_chuatt);
	DDX_Text(pDX, m_wndTotalNumber.GetDlgCtrlID(), m_nTotalNumber);
	DDX_Text(pDX, m_wndCIC.GetDlgCtrlID(), m_szCIC);
}
void CHMSTreatmentQueue::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentQueue::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSTreatmentQueue::SetDefaultValues() {
	m_bCancer = FALSE;
	m_nStatus = 1;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_bOutpatient = FALSE;
	m_bWaitingForPayment = FALSE;
	m_bCombinedTreatment = FALSE;
	m_bSendingTreatment = FALSE;
    
	m_bExaminationSurgery = FALSE;
	m_szRecordNo.Empty();
	m_nDocumentNo = 0;
	m_szPatientName.Empty();
	m_bDachidinhxn = FALSE;
	m_bChuachidinhxn = FALSE;
	m_bDuketqua = FALSE;
	m_bDu1phanketqua = FALSE;
	m_szLoaidieutriKey.Empty();
	m_szPhanloaiUngthuKey.Empty();
	m_nTotalNumber = 0;

}
int CHMSTreatmentQueue::SetMode(int nMode) {
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
	if (!pMF->CheckPermission(_T("20.01")))
	{
		m_wndDepartment.EnableWindow(FALSE);
	}
	return nOldMode;
}

int CHMSTreatmentQueue::Onn_total_IndexCheckValue() {
	return 0;
}
int CHMSTreatmentQueue::Onn_total_tongtienCheckValue()
{
	return 0;
}

int CHMSTreatmentQueue::Onn_total_tongtamguiCheckValue()
{
	return 0;
}

int CHMSTreatmentQueue::Onn_total_tongtien_dattCheckValue()
{
	return 0;
}

int CHMSTreatmentQueue::Onn_total_tongtien_chuattCheckValue()
{
	return 0;
}

int CHMSTreatmentQueue::OnTotalNumberCheckValue()
{
	return 0;
}


void CHMSTreatmentQueue::OnAdmissionSelect() {
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnTreatingSelect() {
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnTransferSelect() {
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnDischargedSelect() {
	OnPatientListLoadData();
}
/*void CHMSTreatmentQueue::OnFromDateChange(){

} */
/*void CHMSTreatmentQueue::OnFromDateSetfocus(){

} */
/*void CHMSTreatmentQueue::OnFromDateKillfocus(){

} */
int CHMSTreatmentQueue::OnFromDateCheckValue() {
	return 0;
}
/*void CHMSTreatmentQueue::OnToDateChange(){

} */
/*void CHMSTreatmentQueue::OnToDateSetfocus(){

} */
/*void CHMSTreatmentQueue::OnToDateKillfocus(){

} */
int CHMSTreatmentQueue::OnToDateCheckValue() {
	return 0;
}

void CHMSTreatmentQueue::OnObjectSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSTreatmentQueue::OnObjectSelendok() {

}
/*void CHMSTreatmentQueue::OnObjectSetfocus(){

}*/
/*void CHMSTreatmentQueue::OnObjectKillfocus(){

}*/
long CHMSTreatmentQueue::OnObjectLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()) {
		szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_object %s ORDER BY ho_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndObject.AddItems(
			rs.GetValue(_T("ho_id")),
			rs.GetValue(_T("ho_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentQueue::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

void CHMSTreatmentQueue::OnCombinedTreatmentSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	m_bSendingTreatment = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnOutpatientSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnWaitingForPaymentSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnPatientListLoadData();
}

void CHMSTreatmentQueue::OnSendingTreatmentSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	m_bCombinedTreatment = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();
}

void CHMSTreatmentQueue::OnCancerSelect() {
	UpdateData(TRUE);
	OnPatientListLoadData();
}

void CHMSTreatmentQueue::OnExaminationSurgerySelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	m_bExaminationSurgery = TRUE;
	m_bCombinedTreatment = FALSE;
	m_bSendingTreatment = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();
}

/*void CHMSTreatmentQueue::OnRecordNoChange(){

} */
/*void CHMSTreatmentQueue::OnRecordNoSetfocus(){

} */
/*void CHMSTreatmentQueue::OnRecordNoKillfocus(){

} */
int CHMSTreatmentQueue::OnRecordNoCheckValue() {
	OnPatientListLoadData();
	return 1;
}
/*void CHMSTreatmentQueue::OnDocumentNoChange(){

} */
/*void CHMSTreatmentQueue::OnDocumentNoSetfocus(){

} */
/*void CHMSTreatmentQueue::OnDocumentNoKillfocus(){

} */
int CHMSTreatmentQueue::OnDocumentNoCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString tmpStr, szDate;
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	if (tmpStr.GetLength() < 7 && m_nDocumentNo > 0) {
		szDate = pMF->GetSysDate();
		tmpStr.Format(_T("%d%.7ld"), ToLong(szDate.Mid(2, 2)), m_nDocumentNo);
		m_nDocumentNo = ToLong(tmpStr);
		UpdateData(false);
	}
	m_wndDocumentNo.SetSel(0, 8);
	OnPatientListLoadData();
	if (m_nDocumentNo == 0)
		return 0;
	return 1;
}
/*void CHMSTreatmentQueue::OnPatientNameChange(){

} */
/*void CHMSTreatmentQueue::OnPatientNameSetfocus(){

} */
/*void CHMSTreatmentQueue::OnPatientNameKillfocus(){

} */
int CHMSTreatmentQueue::OnPatientNameCheckValue() {

	OnPatientListLoadData();
	//	if(m_szPatientName.IsEmpty())
	//		return 0;
	return 1;
}
void CHMSTreatmentQueue::OnRefrehSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnPatientListDblClick() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szphanloaicovid;
	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return;
	long nDocumentNo = m_nDocumentNo;
	szSQL.Format(_T(" SELECT NVL(HCR_PHANLOAIBENHCOVID19,'N') as phanloaicovid from HMS_CLINICAL_RECORD where hcr_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("phanloaicovid"), szphanloaicovid);

	if (szphanloaicovid == _T("01"))
	{
		ShowMessageBox(_T("Bệnh nhân covid 19 được kết luận có bệnh lý nền!"), MB_ICONERROR | MB_OK);
	}

	else if (szphanloaicovid == _T("02"))
	{
		ShowMessageBox(_T("Bệnh nhân covid 19 được kết luận không có bệnh lý nền!"), MB_ICONERROR | MB_OK);
	}

	//Phân loại bệnh nhân mổ từ thiện		
	CString szIsmotuthienb8;

	szSQL.Format(_T("SELECT ISMOTUTHIENB8(%ld) as isMotuthienb8 FROM dual"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("isMotuthienb8"), szIsmotuthienb8);

	if (szIsmotuthienb8 == _T("Y"))
	{
		ShowMessageBox(_T("Bệnh nhân thuộc đối tượng mổ từ thiện!"));
	}
    CString szIsDiscountPat;
	// Thông báo đôi tượng miễn
    if (pMF->m_szDept == _T("TMNT") || pMF->m_szDept == _T("TTTM"))
    {
        szSQL.Format(
            _T("SELECT IS_DISCOUNT_PATIENT(%ld) as IsDiscountPat FROM dual"),
            pMF->m_nDocumentNo);
        rs.ExecSQL(szSQL);

        rs.GetValue(_T("IsDiscountPat"), szIsDiscountPat);

        if (szIsDiscountPat == _T("Y"))
        {
            ShowMessageBox(_T("Bệnh nhân thuộc đối tượng miễn giảm!"));
        }
    }	
	 
	//Phân loại bệnh nhân ung thư
	CString szIscancerpatient;

	szSQL.Format(_T("SELECT ISCANCERPATIENT(%ld) as Iscancerpatient FROM dual"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("Iscancerpatient"), szIscancerpatient);

	if (szIscancerpatient == _T("Y"))
	{
		ShowMessageBox(_T("Bệnh nhân có bệnh án ung thư, cần cập nhật thông tin phân loại ung thư!"), MB_ICONERROR);
	}

	//Phân loại bệnh nhân sinh con trọn gói
	CString szsinhcontrongoi_b11;
	szSQL.Format(_T("SELECT ISSINHCONTRONGOI(%ld) as issinhcontrongoi_b11 FROM dual"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("issinhcontrongoi_b11"), szsinhcontrongoi_b11);

	if (szsinhcontrongoi_b11 == _T("Y"))
	{
		ShowMessageBox(_T("Bệnh nhân thuộc đối tượng sinh con trọn gói!"));
	}

	//Phân loại bệnh nhân được hưởng 5 năm liên tục

	CString szIsover5yearpat;

	szSQL.Format(_T("SELECT ISOVER5YEARPATIENT(%ld) as Isover5yearpat FROM dual"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("Isover5yearpat"), szIsover5yearpat);

	if (szIsover5yearpat == _T("Y"))
	{
		ShowMessageBox(_T("Đối tượng có thời gian tham gia bảo hiểm y tế 05 năm liên tục trở lên!"));
	}

	if (m_nStatus == 1 && pMF->GetCurrentDepartmentID() == _T("A16"))
	{
		CString szSQL, szTreatMode;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT htr_treat_mode FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%ld"),
			pMF->m_nDocumentNo, pMF->m_nRefIndex);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("htr_treat_mode"), szTreatMode);
		if (szTreatMode == _T("A") ||
			szTreatMode == _T("B1") ||
			szTreatMode == _T("B2") ||
			szTreatMode == _T("B3") ||
			szTreatMode == _T("C"))
		{
			CString szMsg;
			szMsg.Format(_T("Bệnh nhân đang điều trị chế độ [%s]"), szTreatMode);
			ShowMessageBox(szMsg);
		}
	}


	UpdateData(true);

	if (m_nStatus == 0) {
		OnAdmissionRegistration();
		return;
	}
	/*
	CReportUtils ru;
	pMF->m_nDocumentNo = nDocumentNo;
	if (ru.CheckAllergy(nDocumentNo) < 0)
	{
		pMF->m_nDocumentNo = 0;
		return;
	}
	*/
    nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	long nPatientNo = ToLong(m_wndPatientList.GetItemText(nSel, 12));
	int nRefIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));
	m_szDischargeDate = m_wndPatientList.GetItemText(nSel, 8);
	pMF->LoadPatientProfile(nPatientNo, nDocumentNo, nRefIndex);
	
}
void CHMSTreatmentQueue::OnPatientListSelectChange(int nOldItem, int nNewItem) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	int nSel = m_wndPatientList.GetCurSel();
	pMF->m_nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	m_szDischargeDate = m_wndPatientList.GetItemText(nSel, 8);
	m_szSex = m_wndPatientList.GetItemText(nSel, 4);
	m_szTreatNo = m_wndPatientList.GetItemText(nSel, 10);

	m_wndPatientList.SetMenuState(1, false);
	m_wndPatientList.SetMenuState(2, false);
	m_wndPatientList.SetMenuState(3, false);

	if (m_nStatus == 0)
	{
		m_wndPatientList.SetMenuState(1, true);
		m_wndPatientList.SetMenuState(2, true);
		m_wndPatientList.SetMenuState(7, true);
	}
	if (m_nStatus == 1)
	{
		m_wndPatientList.SetMenuState(1, true);
		//		m_wndPatientList.SetMenuState(2, true);
		m_wndPatientList.SetMenuState(7, false);
	}
	if (m_nStatus == 3)
	{
		m_wndPatientList.SetMenuState(3, true);
		m_wndPatientList.SetMenuState(7, false);
	}

}
int CHMSTreatmentQueue::OnPatientListDeleteItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
long CHMSTreatmentQueue::OnPatientListLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szSheetNo;
    cout << "outpatient:" << m_bOutpatient << endl; 
	UpdateData(true);

	cout << "outpatient:" << m_bOutpatient << endl; 

	if (m_nStatus < 0)
    {
        m_nStatus = 1;
    }


	if (!m_szPatientName.IsEmpty()) {
		//szWhere.AppendFormat(_T(" AND lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(lower(chr(37)||'%s'||chr(37))) "), m_szPatientName);

		m_nDocumentNo = 0;
	}


	if (m_bCombinedTreatment)
	{
		//szWhere.Format(_T(" and htr_ctdeptid = '%s' "), m_szDepartmentKey);
		//szWhere.AppendFormat(_T(" and htr_status='I' AND htr_combinedtreat='Y' and htr_ctdeptid='%s' "), m_szDepartmentKey);

		if (m_nStatus == 3)
		{
			szWhere.Format(
				_T(" and htr_docno IN (select htm_docno ") \
				_T(" from hms_treat_movement ") \
				_T(" where htm_docno = htr_docno and HTM_PERFORM_DEPTID = '%s' ") \
				_T(" and htm_terminated_date between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))")
				, m_szDepartmentKey, m_szFromDate, m_szToDate);
		}
		else
		{
			szWhere.Format(
				//_T(" AND htr_status = 'I' AND HTM_PERFORM_DEPTID = '%s' "),m_szDepartmentKey);
				_T(" AND htr_status = 'I' AND ((HTM_PERFORM_DEPTID = '%s' AND htm_status='O') OR (htr_combinedtreat='Y' and htr_ctdeptid='%s'))  "), m_szDepartmentKey, m_szDepartmentKey);
		}

	}
	else if (m_bSendingTreatment)
	{
		//szWhere.Format(_T(" and htr_deptid = '%s' "), m_szDepartmentKey);
		//szWhere.AppendFormat(_T(" and htr_status='I' AND htr_combinedtreat='Y' and htr_deptid='%s' "), m_szDepartmentKey);
		szWhere.Format(
			_T(" AND htr_status = 'I' AND ((HTM_SEND_DEPTID = '%s' AND htm_status='O') OR (htr_combinedtreat='Y' and htr_deptid='%s'))  "), m_szDepartmentKey, m_szDepartmentKey);
	}
	else
	{
		szWhere.Format(_T(" and htr_deptid = '%s' "), m_szDepartmentKey);
		//Trang thai doi nhap vien 
		if (m_nStatus == 0) {
			szWhere.AppendFormat(_T(" AND htr_status='A' "));
		}
		//Trang thai dang dieu tri
		else if (m_nStatus == 1)
		{
			szWhere.AppendFormat(_T(" AND htr_status='I' "));
		}
		//Trang thai chuyen khoa
		else if (m_nStatus == 2) {
			szWhere.AppendFormat(_T(" AND ( htr_suggestion ='M') "));
			szWhere.AppendFormat(_T(" AND (htr_dischargedate) between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		}
		//Trang thai da ra vien
		else if (m_nStatus == 3)
		{
			szWhere.AppendFormat(_T(" AND htr_status='T' AND htr_suggestion <> 'M'"));
			if (m_bWaitingForPayment) {
				szWhere.AppendFormat(_T(" and (hcrf_acceptedfee = 'Y' ) "));
			}
			//			else
			szWhere.AppendFormat(_T(" AND (htr_dischargedate) between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		}


		if (!m_szObjectKey.IsEmpty()) 
		{
			szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_szObjectKey);
		}
		if (m_bOutpatient)
			szWhere.AppendFormat(_T(" AND htr_outpatient='Y' "));
		else
			szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
		//		szWhere.AppendFormat(_T(" and NVL(htr_combinedtreat,'N') <> 'Y' "));

	}

	if (!m_szCIC.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_sin like chr(37)||'%s'||chr(37) "), m_szCIC);
        m_nDocumentNo = 0;
		m_szPatientName.Empty();
	}

	if (m_nDocumentNo > 0) 
	{
		szWhere.Format(
			_T(" and (htr_deptid='%s' or ") \
			_T("  (select count(*) ") \
			_T(" from hms_treat_movement ") \
			_T(" where htm_docno = %ld and HTM_PERFORM_DEPTID = '%s') > 0) and hd_docno=%ld")
			, m_szDepartmentKey, m_nDocumentNo, m_szDepartmentKey, m_nDocumentNo);
		m_szPatientName.Empty();
	}
	if (!m_szRecordNo.IsEmpty())
	{
		szWhere.Format(_T(" and htr_deptid='%s' and lower(hcr_recordno) like(chr(37)||lower('%s')||chr(37)) "), m_szDepartmentKey, m_szRecordNo);
	}
	if (m_bCancer)
		szWhere.AppendFormat(_T(" and hcr_cancer = 'Y'"));

	if (!m_szPhanloaiUngthuKey.IsEmpty() && m_szPhanloaiUngthuKey != _T("99"))
	{
		szWhere.AppendFormat(_T(" AND HCR_PHANLOAIUNGTHU='%s' "), m_szPhanloaiUngthuKey);
	}


	if (m_bChuachidinhxn)
	{
		szWhere.AppendFormat(_T(" AND hd_docno NOT IN") \
			_T(" (SELECT distinct(hpc_docno) from HMSV_PARACLINIC_ORDER") \
			_T(" WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND HPC_DEPTID = '%s')"), m_szFromDate, m_szToDate, m_szDepartmentKey);
	}

	if (m_bDachidinhxn)
	{
		szWhere.AppendFormat(_T(" AND hd_docno IN") \
			_T(" (SELECT distinct(hpc_docno) from HMSV_PARACLINIC_ORDER") \
			_T(" WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND HPC_DEPTID = '%s')"), m_szFromDate, m_szToDate, m_szDepartmentKey);
	}

	//loai dieu tri
	if (m_bDuketqua)
	{
		szWhere.AppendFormat(_T(" AND ") \
			_T("   (SELECT count(*)") \
			_T("   FROM HMSV_PARACLINIC_ORDER") \
			_T("   WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("   AND HPC_DEPTID = '%s'") \
			_T("   and htr_docno = hpc_docno") \
			_T("   AND hpc_status NOT IN ('T', 'C')") \
			_T("   )=0"), m_szFromDate, m_szToDate, m_szDepartmentKey);

	}

	if (m_bDu1phanketqua)
	{
		szWhere.AppendFormat(_T(" AND ") \
			_T("   (SELECT count(*)") \
			_T("   FROM HMSV_PARACLINIC_ORDER") \
			_T("   WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("   AND HPC_DEPTID = '%s'") \
			_T("   and htr_docno = hpc_docno") \
			_T("   AND hpc_status NOT IN ('T', 'C')") \
			_T("   )>0") \
			_T("   ") \
			_T(" AND ") \
			_T("   (SELECT count(*)") \
			_T("   FROM HMSV_PARACLINIC_ORDER") \
			_T("   WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("   AND HPC_DEPTID = '%s'") \
			_T("  and htr_docno = hpc_docno") \
			_T("   AND hpc_status IN ('T')") \
			_T("   )>0"), m_szFromDate, m_szToDate, m_szDepartmentKey, m_szFromDate, m_szToDate, m_szDepartmentKey);

	}
	if (!m_szLoaidieutriKey.IsEmpty() && m_szLoaidieutriKey != _T("ALL"))
	{
		szWhere.AppendFormat(_T(" AND htr_treatment_type='%s' "), m_szLoaidieutriKey);
	}
    

	if ((m_bCombinedTreatment) || (m_bSendingTreatment))

	{
		if (m_bOutpatient)
			szWhere.AppendFormat(_T(" AND htr_outpatient='Y' "));
		else
			szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));

		szSQL.Format(_T(" SELECT hp_patientno AS patientno,") \
			_T("   hd_docno          AS docno,") \
			_T("   GET_PATIENTNAME(hd_docno)             AS pname,") \
			_T("   extract(YEAR FROM hp_birthdate)       AS age,") \
			_T("   get_selection_desc('sys_sex', hp_sex) AS sex,") \
			_T("   hms_getobjectname(hd_object)          AS object,") \
			_T("   case when NVL(HD_INSLINE, 'N') = 'Y' AND NVL(HD_EMERGENCY,'N')='N' and NVL(hc_area, 'X') NOT IN ('K1', 'K2', 'K3') THEN HC_DISCOUNT*(select HMS_INSOFFLINE from hms_config)/100 else cast(hd_disrate as integer) end as disrate, ") \
			_T("   (htr_admitdate)                                 AS admitdate,") \
			_T("   (htr_dischargedate)                             AS dischargedate,") \
			_T("   htr_idx                                              AS idx,") \
			_T("   htr_status                                           AS status,") \
			_T("   hcr_recordno                                         AS admitnumber,") \
			_T("   htr_emergency                                        AS emergency,") \
			_T("   hms_getActiveBed(htr_docno, htr_deptid)              AS bedName,") \
			_T("   get_selection_desc('hms_suggestion', htr_suggestion) AS suggestion,") \
			_T("   htr_doctor                                           AS doctor, ") \
			_T("   hd_telephone phone, hd_contacttel contact_tel,") \
			_T("case when htr_idx=1 then hd_enddept else hcr_admitdept end as from_dept,") \
			_T("   is_patient_general(hd_docno) is_general ") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON(hcr_docno=hd_docno)") \
			_T(" LEFT JOIN hms_treatment_record") \
			_T(" ON(htr_docno         =hd_docno)") \
			_T(" LEFT JOIN hms_treat_movement ON (htr_docno=htm_docno AND htr_idx = htm_refidx)") \
			_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
			_T(" WHERE htr_docno > 0 %s ") \
			_T(" ORDER BY admitdate,") \
			_T("   pname,") \
			_T("   htr_idx"), szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT hp_patientno AS patientno,") \
			_T("   hd_docno          AS docno,") \
			_T("   GET_PATIENTNAME(hd_docno)             AS pname,") \
			_T("   extract(YEAR FROM hp_birthdate)       AS age,") \
			_T("   get_selection_desc('sys_sex', hp_sex) AS sex,") \
			_T("   hms_getobjectname(hd_object)          AS object,") \
			/*_T("   CASE") \
			_T("     WHEN hd_disrate > 0") \
			_T("     THEN TO_CHAR(hd_disrate,'999')") \
			_T("     ELSE ''") \
			_T("   END                                                  AS disrate,") \*/
			//_T("   case when NVL(HD_INSLINE, 'N') = 'Y' AND NVL(HD_EMERGENCY,'N')='N' THEN HC_DISCOUNT*(select HMS_INSOFFLINE from hms_config)/100 else cast(hd_disrate as integer) end as disrate, ") \//
			_T("   case when NVL(HD_INSLINE, 'N') = 'Y' AND NVL(HD_EMERGENCY,'N')='N' and NVL(hc_area, 'X') NOT IN ('K1', 'K2', 'K3') THEN HC_DISCOUNT*(select HMS_INSOFFLINE from hms_config)/100 else cast(hd_disrate as integer) end as disrate, ") \
			_T("   (htr_admitdate)                                 AS admitdate,") \
			_T("   (htr_dischargedate)                             AS dischargedate,") \
			_T("   htr_idx                                              AS idx,") \
			_T("   htr_status                                           AS status,") \
			_T("   hcr_recordno                                         AS admitnumber,") \
			_T("   htr_emergency                                        AS emergency,") \
			_T("   hms_getActiveBed(htr_docno, htr_deptid)              AS bedName,") \
			_T("   get_selection_desc('hms_suggestion', htr_suggestion) AS suggestion,") \
			_T("   htr_doctor                                           AS doctor, ") \
			_T("   hd_telephone phone, hd_contacttel contact_tel,") \
			_T("case when htr_idx=1 then hd_enddept else hcr_admitdept end as from_dept,") \
			_T("	(select hpr_docrec ") \
			_T("	from hms_patient_record") \
			_T("	where hpr_docno = hd_docno and hpr_treattime = htr_treattime and rownum<=1) as p_docrec, ")
			_T(" ISMOTUTHIENB8(hd_docno) as motuthienb8, ") \
			_T(" ISSINHCONTRONGOI(hd_docno) as sinhcontrongoi_b11, ") \
			_T("   is_patient_general(hd_docno) is_general, ") \

			_T("   (select coalesce(sum(hfe_amount),0) from hms_fee_deposit") \
			_T("   where hfe_docno=hd_docno") \
			_T("   and hfe_class ='I' and hfe_deptid = htr_deptid and hfe_treattime = htr_treattime") \
			_T("   and hfe_status='P') as tongtamgui,") \
			_T("   ") \
			_T("   (select round(coalesce(sum(hfe_cost), 0)) from hms_fee") \
			_T("   where hfe_docno=hd_docno") \
			_T("   and hfe_class='I'") \
			_T("   and hfe_deptid=htr_deptid AND (hfe_treattime = htr_treattime or hfe_treattime = 0)") \
			_T("   and hfe_status <> 'C'") \
			_T("   and hfe_category <> 'Y'") \
			_T("   ) as tongtien,") \
			_T("   ") \
			_T("   (select round(coalesce(sum(hfe_cost), 0)) from hms_fee") \
			_T("   where hfe_docno=hd_docno") \
			_T("   and hfe_class='I'") \
			_T("   and hfe_deptid=htr_deptid and hfe_treattime = htr_treattime ") \
			_T("   and hfe_status IN ('P')") \
			_T("   and hfe_category <> 'Y'") \
			_T("   ) as tongtien_datt,") \
			_T("   ") \
			_T("  (select round(coalesce(sum(hfe_cost), 0)) from hms_fee") \
			_T("   where hfe_docno=hd_docno") \
			_T("   and hfe_class='I'") \
			_T("   and hfe_deptid=htr_deptid AND (hfe_treattime = htr_treattime or hfe_treattime = 0)") \
			_T("   and hfe_status NOT IN ('C', 'P')") \
			_T("   and hfe_category <> 'Y'") \
			_T("   ) as tongtien_chuatt,") \
			_T("   htr_treattime treattime,") \
			_T("   duketqua,") \
			_T("   du1phanketqua,") \
			_T("   dachidinh,") \
			_T(" htr_treatment_type as loaidieutri,") \
			_T("   (select ss_desc from sys_sel ") \
			_T("   where ss_id='hms_phanloai_dieutri' and ss_code = htr_treatment_type and htr_treatment_type IN ('10', '11')) as tenloaidieutri, ") \
			_T("   hp_sin as socccd ") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON(hcr_docno=hd_docno)") \
			_T(" LEFT JOIN hms_treatment_record") \
			_T(" ON(htr_docno         =hd_docno)") \
			_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
			_T(" LEFT JOIN tbl_para ON ( hpc_docno = hd_docno ")
            _T(")") \
			_T(" WHERE htr_docno > 0 %s ") \
			_T(" ORDER BY admitdate,") \
			_T("   pname,") \
			_T("   htr_idx"), szWhere);
	}

	//_msg(_T("Danh sach BN = %s"), szSQL);

	m_wndPatientList.BeginLoad();

	long nCount = 0, nItem = 1, ntreattime;
	CString szEmergency, tmpStr;
	CString szDischargeDate;
	long nIndex = 0;
	long nsolandieutri = 0;
	double ntongtien = 0;
	double ntongtamgui = 0;
	double ntongtien_datt = 0;
	double ntongtien_chuatt = 0;

	long n_total_Index = 0;
	double n_total_tongtien = 0;
	double n_total_tongtamgui = 0;
	double n_total_tongtien_datt = 0;
	double n_total_tongtien_chuatt = 0;
	int nduketqua, ndu1phanketqua, ndachidinh;
	CString szDescCLS, szLoaidieutri, szTenloaidieutri;

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName, szIsGeneral;
	if (!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}


	CString szFromDept;

	int nLimit = 10000;
	int nOffset = 0;
	long nTotalCount = 0;

	//for (;;)
	{
		CString sql;
		sql.Format(
            L" WITH tbl_para"
            L"      AS (SELECT hpc_docno,"
            L"                 SUM(CASE WHEN hpc_status NOT IN( 'T', 'C' ) "
            L"THEN 1"
            L"                     ELSE 0"
            L"                     END) AS duketqua,"
            L"                 SUM(CASE WHEN hpc_status IN( 'T' ) THEN 1"
            L"                     ELSE 0"
            L"                     END) AS du1phanketqua,"
            L"                 SUM(1) AS dachidinh"
            L"            FROM hmsv_paraclinic_order"
            L"           WHERE hpc_orderdate BETWEEN "
            L"To_timestamp('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')"
            L"                                       AND"
            L"                                               "
            L"To_timestamp('%s 23:59:59',"
            L"                                               'YYYY-MM-DD "
            L"HH24:MI:SS'"
            L"                                               )"
            L"                 AND hpc_deptid = '%s'"
            L"           GROUP BY hpc_docno)" 
			L"SELECT * FROM (SELECT A.*, ROWNUM AS MY_RNUM FROM (%s) A WHERE ROWNUM <= %d + %d) WHERE MY_RNUM > %d",
			m_szFromDate, m_szToDate, m_szDepartmentKey, szSQL, nLimit, nOffset, nOffset);

		nCount = rs.ExecSQL(sql);
        //_msg(_T("%s"), sql);
		//if (nCount <= 0)
		//	break;
		nOffset += nLimit;
		nTotalCount += nCount;

		while (!rs.IsEOF()) {

			rs.GetValue(_T("pname"), tmpStr);
			if (!m_szPatientName.IsEmpty()) {

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

			tmpStr.Format(_T("%d"), nItem++);
			rs.GetValue(_T("dischargedate"), szDischargeDate);
			CString szStatus, szMotuthienb8, szsinhcontrongoi_b11;
			rs.GetValue(_T("status"), szStatus);
			if (szStatus != _T("T"))
				szDischargeDate.Empty();

			rs.GetValue(_T("from_dept"), szFromDept);
			rs.GetValue(_T("motuthienb8"), szMotuthienb8);
			rs.GetValue(_T("sinhcontrongoi_b11"), szsinhcontrongoi_b11);
			rs.GetValue(_T("is_general"), szIsGeneral);
			rs.GetValue(_T("treattime"), ntreattime);

			rs.GetValue(_T("tongtien"), ntongtien);
			rs.GetValue(_T("tongtamgui"), ntongtamgui);
			rs.GetValue(_T("tongtien_datt"), ntongtien_datt);
			rs.GetValue(_T("tongtien_chuatt"), ntongtien_chuatt);
			rs.GetValue(_T("duketqua"), nduketqua);
			rs.GetValue(_T("du1phanketqua"), ndu1phanketqua);
			rs.GetValue(_T("dachidinh"), ndachidinh);
			rs.GetValue(_T("loaidieutri"), szLoaidieutri);
			rs.GetValue(_T("tenloaidieutri"), szTenloaidieutri);

			if (nduketqua == 0 && ndachidinh > 0)
			{
				szDescCLS = _T("Đã đủ xét nghiệm");
			}
			else if (nduketqua != 0 && ndachidinh > 0 && ndu1phanketqua > 0)
			{
				szDescCLS = _T("Làm được 1 phần XN");
			}
			else if (ndachidinh == 0)
			{
				szDescCLS = _T("Chưa chỉ định XN");
			}
			else
			{
				szDescCLS = _T("Đã chỉ định XN(chưa có KQ)");
			}

			n_total_tongtien += ntongtien;
			n_total_tongtamgui += ntongtamgui;
			n_total_tongtien_datt += ntongtien_datt;
			n_total_tongtien_chuatt += ntongtien_chuatt;
			n_total_Index += nIndex;

			int nItem = m_wndPatientList.AddItems(
				tmpStr,
				rs.GetValue(_T("docno")),
				rs.GetValue(_T("pname")),
				rs.GetValue(_T("age")),
				rs.GetValue(_T("sex")),
				rs.GetValue(_T("object")),
				rs.GetValue(_T("disrate")),
				rs.GetValue(_T("admitdate")),
				szDischargeDate,
				rs.GetValue(_T("status")),
				rs.GetValue(_T("admitnumber")),
				rs.GetValue(_T("BedName")),
				rs.GetValue(_T("patientno")),
				rs.GetValue(_T("idx")),
				rs.GetValue(_T("doctor")),
				szFromDept,
				rs.GetValue(_T("contact_tel")),
				rs.GetValue(_T("phone")),
				rs.GetValue(_T("p_docrec")),
				ToString(ntreattime),
				ToString(ntongtien), ToString(ntongtamgui), ToString(ntongtien_datt), ToString(ntongtien_chuatt),
				szDescCLS,
				szTenloaidieutri,
				NULL);


			rs.GetValue(_T("emergency"), szEmergency);
			if (szEmergency == _T("Y"))
			{
				m_wndPatientList.SetSubItemBkColor(nItem, 1, RGB(128, 0, 0));
				m_wndPatientList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255));
			}

			if (szMotuthienb8 == _T("Y"))
			{
				m_wndPatientList.SetSubItemBkColor(nItem, 2, RGB(0, 255, 127), FALSE);
				m_wndPatientList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);

				m_wndPatientList.SetSubItemBkColor(nItem, 3, RGB(0, 255, 127), FALSE);
				m_wndPatientList.SetSubItemTextColor(nItem, 3, RGB(0, 0, 0), FALSE);

				m_wndPatientList.SetSubItemBkColor(nItem, 4, RGB(0, 255, 127), FALSE);
				m_wndPatientList.SetSubItemTextColor(nItem, 4, RGB(0, 0, 0), FALSE);

				m_wndPatientList.SetSubItemBkColor(nItem, 5, RGB(0, 255, 127), FALSE);
				m_wndPatientList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);
			}
			if (szIsGeneral == _T("Y"))
			{
				m_wndPatientList.SetSubItemBkColor(nItem, 5, RGB(226, 239, 218), FALSE);
			}

			if (szsinhcontrongoi_b11 == _T("Y"))
			{
				m_wndPatientList.SetSubItemBkColor(nItem, 2, RGB(0, 128, 0), FALSE);
				m_wndPatientList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);
			}

			if (szDescCLS == _T("Đã đủ xét nghiệm"))
			{
					//m_wndPatientList.SetSubItemBkColor(nItem, i, RGB(0, 128, 128), FALSE);
					m_wndPatientList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 139), FALSE);
			}
			else if (szDescCLS == _T("Làm được 1 phần XN"))
			{
					//m_wndPatientList.SetSubItemBkColor(nItem, i, RGB(255, 178, 102), FALSE);
					m_wndPatientList.SetSubItemTextColor(nItem, 1, RGB(0, 128, 0), FALSE);
			}
			else if (szDescCLS == _T("Chưa chỉ định XN"))
			{
					//m_wndPatientList.SetSubItemBkColor(nItem, i, RGB(255, 178, 102), FALSE);
                m_wndPatientList.SetSubItemTextColor(nItem, 1, RGB(255, 0, 0),
                                                     FALSE);


			}
			else
			{

			}

			if (szLoaidieutri == _T("10"))
			{
				m_wndPatientList.SetSubItemTextColor(nItem, 2, RGB(0, 102, 204), FALSE);  // Cột 2
				m_wndPatientList.SetSubItemBkColor(nItem, 2, RGB(255, 255, 153), FALSE);  // Cột 2

				m_wndPatientList.SetSubItemTextColor(nItem, 25, RGB(0, 102, 204), FALSE);  // Cột 2
				m_wndPatientList.SetSubItemBkColor(nItem, 25, RGB(255, 255, 153), FALSE);  // Cột 2
			}
			else if (szLoaidieutri == _T("11"))
			{
				m_wndPatientList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 0), FALSE);  // Cột 2
				m_wndPatientList.SetSubItemBkColor(nItem, 2, RGB(0, 0, 128), FALSE);

				m_wndPatientList.SetSubItemTextColor(nItem, 25, RGB(255, 255, 0), FALSE);  // Cột 2
				m_wndPatientList.SetSubItemBkColor(nItem, 25, RGB(0, 0, 128), FALSE);
			}
			else
			{

			}



			rs.MoveNext();
		}
	}

	if (nTotalCount > 10000)
	{
		m_wndPatientList.EnablePaginator(10000);
	}

	m_nn_total_Index = nTotalCount;
	m_nTotalNumber = nTotalCount;
	m_nn_total_tongtien = n_total_tongtien;
	m_nn_total_tongtamgui = n_total_tongtamgui;
	m_nn_total_tongtien_datt = n_total_tongtien_datt;
	m_nn_total_tongtien_chuatt = n_total_tongtien_chuatt;

	m_wndPatientList.EndLoad();
	UpdateData(false);
	return nCount;
}
int CHMSTreatmentQueue::OnAdmissionRegistration() {

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szStatus, tmpStr;

	if (pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0) return 0;

	pMF->m_nRefIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));
	if (!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	CString szSQL;

	long nDocumentNo = str2long(m_wndPatientList.GetItemText(nSel, 1));

	szSQL.Format(_T("SELECT hcr_status FROM hms_clinical_record WHERE hcr_docno = %ld"), nDocumentNo);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hcr_status"), szStatus);
	_tprintf(_T("\nszStatus: %s\n"), szStatus);
	if (szStatus == _T("A"))
	{
		CHMSDepartmentAdmissionDialog dlg(this);
		dlg.m_nDocumentNo = nDocumentNo;
		dlg.m_nIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));

		tmpStr.Format(_T("Họ tên:%s - Số BA:%s"), m_wndPatientList.GetItemText(nSel, 2), m_wndPatientList.GetItemText(nSel, 10));
		dlg.m_szTiles = tmpStr;
		szStatus = m_wndPatientList.GetItemText(nSel, 9);

		if (szStatus == _T("A"))
			dlg.SetMode(VM_ADD);

		if (dlg.DoModal() == IDOK) {
			if (szStatus == _T("A"))
				m_wndPatientList.DeleteItem(nSel);
		}
	}
	else
	{
		CHMSAdmissionRegistrationDialog dlg(this);
		dlg.m_nDocumentNo = nDocumentNo;
		dlg.m_nIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));

		tmpStr.Format(_T("Họ tên:%s - Số BA:%s"), m_wndPatientList.GetItemText(nSel, 2), m_wndPatientList.GetItemText(nSel, 10));
		dlg.m_szTiles = tmpStr;
		szStatus = m_wndPatientList.GetItemText(nSel, 9);

		if (szStatus == _T("A"))
			dlg.SetMode(VM_ADD);

		if (dlg.DoModal() == IDOK) {
			if (szStatus == _T("A"))
				m_wndPatientList.DeleteItem(nSel);
		}
	}
	/*
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		CString szStatus, tmpStr;
		int nSel = m_wndPatientList.GetCurSel();
		if(nSel < 0) return 0;

		if(!pMF->CheckPermission(_T("01.01")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if(pMF->IsDocumentReadOnly())
		{
			ShowMessageBox(_T("Cannot process with current status"));
			return 0;
		}

		CHMSDepartmentAdmissionDialog dlg(this);

		tmpStr.Format(_T("Họ tên:%s - Số BA:%s"), m_wndPatientList.GetItemText(nSel, 2), m_wndPatientList.GetItemText(nSel, 10));
		dlg.m_szTiles = tmpStr;
		dlg.m_nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
		dlg.m_nIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));

		szStatus = m_wndPatientList.GetItemText(nSel, 9);
		if(szStatus == _T("A"))
			dlg.SetMode(VM_ADD);

		if(dlg.DoModal() == IDOK){
			if(szStatus==_T("A"))
				m_wndPatientList.DeleteItem(nSel);
		}
		return 0;
		*/
	return 0;
}
int CHMSTreatmentQueue::OnAddHMSTreatmentQueue() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentQueue::OnEditHMSTreatmentQueue() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CHMSTreatmentQueue::OnDeleteHMSTreatmentQueue() {
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
		OnCancelHMSTreatmentQueue();
	}
	return 0;
}
int CHMSTreatmentQueue::OnSaveHMSTreatmentQueue() {
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
		//OnHMSTreatmentQueueListLoadData(); 
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSTreatmentQueue::OnCancelHMSTreatmentQueue() {
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
int CHMSTreatmentQueue::OnHMSTreatmentQueueListLoadData() {
	return 0;
}


int CHMSTreatmentQueue::OnCancelClinicalRecord() {
	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	if (!pMF->CheckPermission(_T("01.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if (pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Không thể thao tác với trạng thái hiện thời"));
		return 0;
	}

	int retMsg = ShowMessageBox(_T("Do you want to cancel record?(Y/N)"), MB_YESNO);
	if (retMsg == IDNO)
		return 0;
	int nRefIndex;
	long nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	nRefIndex = str2int(m_wndPatientList.GetItemText(nSel, 13));

	szSQL.Format(_T(" HMS_TREATMENT_RECORD_CANCEL(%ld, %d)"), nDocumentNo, nRefIndex);
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret <= 0)
	{
		ShowMessageBox(_T("Không thể hủy được bệnh án!"));
	}
	else
		m_wndPatientList.DeleteItem(nSel);
	return 1;
	/*
		szSQL.Format(_T("SELECT max(htr_idx) FROM hms_treatment_record WHERE htr_docno=%ld "), nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 1)
			return 0;


		int nRefIndex = ToInt(m_wndPatientList.GetItemText(nSel, 11));
		if(nRefIndex > 1)
			return 0;
		szSQL.Format(_T("SELECT htr_status as status FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d"), nDocumentNo, nRefIndex);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("status"), tmpStr);
		if(tmpStr != _T("A"))
			return 0;
		int nMsg = ShowMessageBox(_T("Do you want to cancel treatment record?(Y/N)"), MB_YESNO);
		if(nMsg == IDNO)
			return 0;

		szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d and htr_status='A' "), nDocumentNo, nRefIndex);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_clinical_record WHERE hcr_docno=%ld and hcr_status='A' "), nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("UPDATE hms_doc SET hd_suggestion='D', hd_indept='' WHERE hd_docno=%ld"), nDocumentNo);
		pMF->ExecSQL(szSQL);
	*/
	return 1;
}

int CHMSTreatmentQueue::OnDeleteMistakeTransferDept()
{
	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szStatus;

	if (pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời"));
		return 0;
	}

	long nDocNo = str2long(m_wndPatientList.GetItemText(nSel, 1));
	long nIdx = str2long(m_wndPatientList.GetItemText(nSel, 13));
	szStatus = m_wndPatientList.GetItemText(nSel, 9);
	//szDept = m_wndList.GetItemText(nSel, 2);

	if (nDocNo <= 0 || nIdx <= 0)
		return 0;

	int retMsg = ShowMessageBox(_T("Bạn có muốn hủy lượt điều trị kế tiếp do tạo nhầm khoa không?(Y/N)"), MB_YESNO);
	if (retMsg == IDNO)
		return 0;

	szSQL.Format(_T("HMS_TREATMENT_DELMISTAKE_REC(%ld, %ld , '%s')"), nDocNo, nIdx, m_szDepartmentKey);
	int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);

	if (ret <= 0)
	{
		switch (ret)
		{
		case -1:
			ShowMessageBox(_T("Bệnh nhân đã nhập viện, không thực hiện được tác vụ"));
			break;

		case -2:
			ShowMessageBox(_T("Bệnh nhân đã thanh toán, không thực hiện được tác vụ"));
			break;

		case -3:
			ShowMessageBox(_T("Đã tồn tại hồ sơ điều trị, không cho khôi phục"));
			break;

		case -4:
			ShowMessageBox(_T("Bệnh nhân chuyển từ phòng khám vào, hủy ở module bệnh án nhé"));
			break;

		case -5:
			ShowMessageBox(_T("Bệnh nhân chuyển khoa mà, chuyển lại khoa cũ là được thôi"));
			break;

		default:
			ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời"));

		};
	}
	else
		m_wndPatientList.DeleteItem(nSel);
	return 1;
}

#include "HandinContent.h"
int CHMSTreatmentQueue::OnDebriefingDischarge() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return -1;

	if (pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	long nDocNo = str2long(m_wndPatientList.GetItemText(nSel, 1));
	if (nDocNo <= 0)
		return 0;
	CHandinContent dlg(this);
	dlg.m_szDocumentNo.Format(_T("%ld"), nDocNo);
	dlg.m_szOutDate = m_szDischargeDate;
	dlg.DoModal();
	return 0;
}


int CHMSTreatmentQueue::OnUpdateRelativeInfo() {
	CHMSExtraInfoDialog dlg(this);
	dlg.DoModal();
	return 0;
}

int CHMSTreatmentQueue::OnCombinedTreatMovement() {
	return 0;
}

int CHMSTreatmentQueue::OnPatientListAdmission() {
	OnAdmissionRegistration();
	return 0;
}


int CHMSTreatmentQueue::OnCreateOutpatientRecord() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CString szStatus, tmpStr, szSQL;

	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0) return 0;
	long nDocumentNo;


	nDocumentNo = str2long(m_wndPatientList.GetItemText(nSel, 1));
	pMF->m_nRefIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));
	if (!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}


	if (pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Hồ sơ chỉ được xem. không cho phép sửa đổi"));
		return 0;
	}
	//Bổ sung trường hợp bệnh nhân dịch vụ không phải yêu cầu, 
	//nếu đã thanh toán hết & trạng thái hcr_status='T' & HTRF_ACCEPTEDFEE<> 'P' & HCRF_ACCEPTEDFEE <> 'P' -> thì cập nhật lại là đã thanh toán


	szSQL.Format(_T("HMS_UPDATE_PAYMENT_STATUS(%ld, %ld) "), nDocumentNo, pMF->m_nRefIndex);
	int tmp = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);

	if (tmp > 0)
	{

	}
	szSQL.Format(_T("HMS_TREATMENT_CHECKBF_CREATE(%ld) "), nDocumentNo);
	int res = str2int(pMF->ExecDML(szSQL));
	if (res <= 0)
	{
		CString szMsg;
		//szMsg.Format(_T("[%d] Không thể thao tác với trạng thái hiện thời"), res);
		szMsg = pMF->GetErrorMessage();
		ShowMessageBox(szMsg);
		return -1;
	}

	CHMSCreateOutpatientRecordDialog dlg(this);
	dlg.m_nDocumentNo = nDocumentNo;
	dlg.m_nIndex = res;

	tmpStr.Format(_T("Họ tên:%s - Số BA:%s"), m_wndPatientList.GetItemText(nSel, 2), m_wndPatientList.GetItemText(nSel, 10));
	dlg.m_szTiles = tmpStr;
	szStatus = m_wndPatientList.GetItemText(nSel, 9);

	if (szStatus == _T("A"))
		dlg.SetMode(VM_ADD);

	if (dlg.DoModal() == IDOK) {
	}
	/*
		CString szSQL, szAdmitDate, szStatus, tmpStr;
		szAdmitDate = pMF->GetSysDate();
		long nDocumentNo;
		int nSel = m_wndPatientList.GetCurSel();
		if(nSel < 0) return 0;

		nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));

		szSQL.Format(_T("HMS_TREATMENT_RECORD_CREATENEW(%ld, '%s', TO_DATE('%s', 'YYYY-MM-DD'))"),
			nDocumentNo, pMF->GetCurrentUser(), szAdmitDate);
		int res = str2int(pMF->ExecDML(szSQL));
		if (res <= 0) return 0;
	*/
	return 1;

}

void CHMSTreatmentQueue::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
    /*    
    UpdateData(true);
	if (pMF->m_szDept != m_szDepartmentKey)
		pMF->m_bPrivateNoneView = true;
	else
		pMF->m_bPrivateNoneView = false;
*/
    
}
void CHMSTreatmentQueue::OnDepartmentSelendok() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	if (pMF->m_szDept != m_szDepartmentKey)
		pMF->m_bPrivateNoneView = true;
	else
		pMF->m_bPrivateNoneView = false;
	OnPatientListLoadData();
    
	UpdateData(false);

}
/*void CHMSTreatmentQueue::OnDepartmentSetfocus(){

}*/
/*void CHMSTreatmentQueue::OnDepartmentKillfocus(){

}*/
long CHMSTreatmentQueue::OnDepartmentLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type ='DT' "));
	if (pMF->m_szDept != _T("A11"))
	{
		szFilter.AppendFormat(_T(" and sd_id <> 'A11' "));
	}
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szFilter);

}

long CHMSTreatmentQueue::OnPhanloaiUngthuLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndPhanloaiUngthu.IsSearchKey() && !m_szPhanloaiUngthuKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s'"), m_szPhanloaiUngthuKey);
	};
	m_wndPhanloaiUngthu.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='PLUT' %s ORDER BY cast(ss_code as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndPhanloaiUngthu.AddItems
		(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}

void CHMSTreatmentQueue::OnPhanloaiUngthuSelendok()
{
	UpdateData(true);
	OnPatientListLoadData();
}

long CHMSTreatmentQueue::OnLoaidieutriLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndLoaidieutri.IsSearchKey() && !m_szLoaidieutriKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s'"), m_szLoaidieutriKey);
	};
	m_wndLoaidieutri.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_phanloai_dieutri' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndLoaidieutri.AddItems
		(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CHMSTreatmentQueue::OnLoaidieutriSelendok()
{
	UpdateData(true);
	OnPatientListLoadData();
}

void CHMSTreatmentQueue::OnGiveBirth() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (m_szSex == _T("Nữ") && m_szTreatNo.Left(2) != _T("TE"))
	{
		CHMSNewbornRecord dlg(this, pMF->m_nDocumentNo);
		//CTMNewbornRecord2 dlg(this, pMF->m_nDocumentNo);
		dlg.DoModal();
	}
	return;
}
void CHMSTreatmentQueue::OnDachidinhxnSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	m_bChuachidinhxn = FALSE;
	m_bDuketqua = FALSE;
	m_bDu1phanketqua = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnChuachidinhxnSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	m_bDachidinhxn = FALSE;
	m_bDuketqua = FALSE;
	m_bDu1phanketqua = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnDuketquaSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	m_bDachidinhxn = TRUE;
	m_bChuachidinhxn = FALSE;
	m_bDu1phanketqua = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnDu1phanketquaSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	m_bDachidinhxn = TRUE;
	m_bChuachidinhxn = FALSE;
	m_bDuketqua = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();
}

void CHMSTreatmentQueue::OnDeptNameRefresh(CString szDeptName)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(TRUE);
	m_szDepartmentKey = szDeptName;
	UpdateData(FALSE);
}

int CHMSTreatmentQueue::OnCICCheckValue()
{
	return 0;
}

void CHMSTreatmentQueue::OnResizeLayout()
{
	AddResize(&m_wndPatientList, 100, 100);
	AddResize(&m_wndPatientListGroupBox, 100, 100);
	AddResize(&m_wndDepartmentLabel, 100, 100);
	AddResize(&m_wndDepartment, 100, 100);
	AddResize(&m_wndLoaidieutriLabel, 100, 100);
	AddResize(&m_wndLoaidieutri, 100, 100);
	AddResize(&m_wndOutpatient, 100, 100);
	AddResize(&m_wndWaitingForPayment, 100, 100);
	AddResize(&m_wndCombinedTreatment, 100, 100);
	AddResize(&m_wndSendingTreatment, 100, 100);
}