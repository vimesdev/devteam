#include "HMSHospitalTransfer.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "GuiDialog.h"
#include "HMSUnTerminatedDialog.h"
#include "HMSHelper.h"

static void _OnICDDiagnosticSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalTransfer* )pWnd)->OnICDDiagnosticSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDDiagnosticSelendokFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosticSelendok();
}
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosticKillfocus();
}*/
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosticKillfocus();
}*/
static long _OnICDDiagnosticLoadDataFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnICDDiagnosticLoadData();
}
/*static void _OnICDDiagnosticAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosticAddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnConclusionSetfocus();} */
	/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnConclusionKillfocus();
	} */
static int _OnConclusionCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnConclusionCheckValue();
}
static void _OnHospitalNameSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSHospitalTransfer*)pWnd)->OnHospitalNameSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnHospitalNameSelendokFnc(CWnd* pWnd) {
	((CHMSHospitalTransfer*)pWnd)->OnHospitalNameSelendok();
}
/*static void _OnHospitalNameSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameKillfocus();
}*/
/*static void _OnHospitalNameKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameKillfocus();
}*/
static long _OnHospitalNameLoadDataFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnHospitalNameLoadData();
}
/*static void _OnHospitalNameAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameAddNew();
}*/
/*static void _OnOutDateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnOutDateChange();
} */
/*static void _OnOutDateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnOutDateSetfocus();} */
	/*static void _OnOutDateKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnOutDateKillfocus();
	} */
static int _OnOutDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnOutDateCheckValue();
}
/*static void _OnClinicalSymbolChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolChange();
} */
/*static void _OnClinicalSymbolSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolSetfocus();} */
	/*static void _OnClinicalSymbolKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolKillfocus();
	} */
static int _OnClinicalSymbolCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnClinicalSymbolCheckValue();
}
/*static void _OnTestsChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTestsChange();
} */
/*static void _OnTestsSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTestsSetfocus();} */
	/*static void _OnTestsKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnTestsKillfocus();
	} */
static int _OnTestsCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnTestsCheckValue();
}
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseSetfocus();} */
	/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseKillfocus();
	} */
static int _OnMainDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnMainDiseaseCheckValue();
}
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnRelationDiseaseSetfocus();} */
	/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnRelationDiseaseKillfocus();
	} */
static int _OnRelationDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnRelationDiseaseCheckValue();
}
/*static void _OnMedicineUsedChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedChange();
} */
/*static void _OnMedicineUsedSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedSetfocus();} */
	/*static void _OnMedicineUsedKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedKillfocus();
	} */
static int _OnMedicineUsedCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnMedicineUsedCheckValue();
}
static void _OnResultSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSHospitalTransfer*)pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnResultSelendokFnc(CWnd* pWnd) {
	((CHMSHospitalTransfer*)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnResultAddNew();
}*/
static void _OnHospitalLineSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSHospitalTransfer*)pWnd)->OnHospitalLineSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnHospitalLineSelendokFnc(CWnd* pWnd) {
	((CHMSHospitalTransfer*)pWnd)->OnHospitalLineSelendok();
}
/*static void _OnHospitalLineSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalLineKillfocus();
}*/
/*static void _OnHospitalLineKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalLineKillfocus();
}*/
static long _OnHospitalLineLoadDataFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnHospitalLineLoadData();
}
/*static void _OnHospitalLineAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalLineAddNew();
}*/

/*static void _OnPatientStateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnPatientStateChange();
} */
/*static void _OnPatientStateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnPatientStateSetfocus();} */
	/*static void _OnPatientStateKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnPatientStateKillfocus();
	} */
static int _OnPatientStateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnPatientStateCheckValue();
}
/*static void _OnTransferDateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransferDateChange();
} */
/*static void _OnTransferDateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransferDateSetfocus();} */
	/*static void _OnTransferDateKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnTransferDateKillfocus();
	} */
static int _OnTransferDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnTransferDateCheckValue();
}
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnReasonSetfocus();} */
	/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnReasonKillfocus();
	} */

static int _OnReasonLoadDataFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnReasonLoadData();
}

static int _OnReasonCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnReasonCheckValue();
}
static void _OnTransportSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSHospitalTransfer*)pWnd)->OnTransportSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTransportSelendokFnc(CWnd* pWnd) {
	((CHMSHospitalTransfer*)pWnd)->OnTransportSelendok();
}
/*static void _OnTransportSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportKillfocus();
}*/
/*static void _OnTransportKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportKillfocus();
}*/
static long _OnTransportLoadDataFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnTransportLoadData();
}
/*static void _OnTransportAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportAddNew();
}*/
/*static void _OnAttenderSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnAttenderKillfocus();
}*/
/*static void _OnAttenderKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnAttenderKillfocus();
}*/

static void _OnEntertainTreatSelectFnc(CWnd* pWnd) {
	CHMSHospitalTransfer* pVw = (CHMSHospitalTransfer*)pWnd;
	pVw->OnEntertainTreatSelect();
}
/*static void _OnHuongDieuTriChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHuongDieuTriChange();
} */
/*static void _OnHuongDieuTriSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHuongDieuTriSetfocus();} */
	/*static void _OnHuongDieuTriKillfocusFnc(CWnd *pWnd){
		((CHMSHospitalTransfer *)pWnd)->OnHuongDieuTriKillfocus();
	} */
static int _OnHuongDieuTriCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnHuongDieuTriCheckValue();
}
static void _OnUpdateSelectFnc(CWnd* pWnd) {
	CHMSHospitalTransfer* pVw = (CHMSHospitalTransfer*)pWnd;
	pVw->OnUpdateSelect();
}
static void _OnSaveSelectFnc(CWnd* pWnd) {
	CHMSHospitalTransfer* pVw = (CHMSHospitalTransfer*)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd* pWnd) {
	CHMSHospitalTransfer* pVw = (CHMSHospitalTransfer*)pWnd;
	pVw->OnCancelSelect();
}
static void _OnPrintSelectFnc(CWnd* pWnd) {
	CHMSHospitalTransfer* pVw = (CHMSHospitalTransfer*)pWnd;
	pVw->OnPrintSelect();
}
static int _OnAddHMSHospitalTransferFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnAddHMSHospitalTransfer();
}
static int _OnEditHMSHospitalTransferFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnEditHMSHospitalTransfer();
}
static int _OnDeleteHMSHospitalTransferFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnDeleteHMSHospitalTransfer();
}
static int _OnSaveHMSHospitalTransferFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnSaveHMSHospitalTransfer();
}
static int _OnCancelHMSHospitalTransferFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnCancelHMSHospitalTransfer();
}
static void _OnCoDiseaseAddSelectFnc(CWnd* pWnd) {
	((CHMSHospitalTransfer*)pWnd)->OnCoDiseaseAddSelect();
}
static int _OnOperationNameCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnOperationNameCheckValue();
}

static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnFromDateCheckValue();
}

static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSHospitalTransfer*)pWnd)->OnToDateCheckValue();
}

static void _Onone_year_applySelectFnc(CWnd* pWnd) {
	((CHMSHospitalTransfer*)pWnd)->Onone_year_applySelect();
}
CHMSHospitalTransfer::CHMSHospitalTransfer() {

	m_nDlgWidth = 605;
	m_nDlgHeight = 490;
	m_bEntertainTreat = false;
	SetDefaultValues();
}
CHMSHospitalTransfer::~CHMSHospitalTransfer() {
}
void CHMSHospitalTransfer::OnCreateComponents()
{
	m_wndICDDiagnosticLabel.Create(this, _T("ICD Diagnostic"), 10, 30, 130, 55);
	m_wndICDDiagnostic.Create(this, 135, 30, 460, 55);
	m_wndHospitalTransferInformation.Create(this, _T("Hospital Transfer Information"), 5, 5, 600, 597);
	m_wndNumberTransLabel.Create(this, _T("Number Trans"), 465, 30, 540, 55);
	m_wndNumberTrans.Create(this, 545, 30, 595, 55);
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 60, 130, 85);
	m_wndConclusion.Create(this, 135, 60, 595, 110, true, false, true);
	m_wndHospitalNameLabel.Create(this, _T("Hospital Name"), 10, 115, 130, 140);
	m_wndHospitalName.Create(this, 135, 115, 380, 140);
	m_wndHospitalLineLabel.Create(this, _T("Hospital Line"), 385, 115, 465, 140);
	m_wndHospitalLine.Create(this, 470, 115, 595, 140);
	m_wndClinicalSymbolLabel.Create(this, _T("Clinical Symbol"), 10, 145, 130, 170);
	m_wndClinicalSymbol.Create(this, 135, 145, 595, 220, true, false, true);
	m_wndTestsLabel.Create(this, _T("Tests"), 10, 225, 130, 250);
	m_wndTests.Create(this, 135, 225, 595, 275, true, false, true);
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 280, 130, 305);
	m_wndMainDisease.Create(this, 135, 280, 595, 305);
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 310, 130, 335);
	m_wndRelationDisease.Create(this, 135, 310, 565, 335, true, false, true);
	m_wndCoDiseaseAdd.Create(this, _T("@"), 570, 310, 595, 335);

	m_wndOperationLabel.Create(this, _T("PTTT"), 10, 340, 130, 365);
	m_wndOperationName.Create(this, 135, 340, 595, 390, true, false, true);
	m_wndFromDateLabel.Create(this, _T("T/G bắt đầu"), 10, 397, 130, 422);
	m_wndFromDate.Create(this, 135, 397, 255, 422);
	m_wndToDateLabel.Create(this, _T("T/G kết thúc"), 260, 397, 380, 422);
	m_wndToDate.Create(this, 385, 397, 505, 422);

	m_wndMedicineUsedLabel.Create(this, _T("Medicine Used"), 10, 428, 130, 453);
	m_wndMedicineUsed.Create(this, 135, 428, 595, 478, true, false, true);

	m_wndResultLabel.Create(this, _T("Result"), 10, 483, 130, 508);
	m_wndResult.Create(this, 135, 483, 260, 508);
	m_wndPatientStateLabel.Create(this, _T("Patient State"), 265, 483, 345, 508);
	m_wndPatientState.Create(this, 350, 483, 595, 508);
	m_wndTransferDateLabel.Create(this, _T("Transfer Date"), 10, 513, 130, 538);
	m_wndTransferDate.Create(this, 135, 513, 260, 538);
	m_wndReasonLabel.Create(this, _T("Reason"), 265, 513, 345, 538);
	m_wndReason.Create(this, 350, 513, 595, 538);
	m_wndTransportLabel.Create(this, _T("Transport"), 10, 543, 130, 568);
	m_wndTransport.Create(this, 135, 543, 260, 568);
	m_wndAttenderLabel.Create(this, _T("Attender"), 265, 543, 345, 568);
	m_wndAttender.Create(this, 350, 543, 595, 568);
	m_wndHuongDieuTriLabel.Create(this, _T("H\x1B0\x1EDBng \x111i\x1EC1u tr\x1ECB"), 10, 573, 130, 598);
	m_wndHuongDieuTri.Create(this, 135, 573, 595, 598);
	m_wndone_year_apply.Create(this, _T("Dùng cho 1 năm"), 10, 603, 260, 628);
	m_wndUpdate.Create(this, _T("&Update"), 285, 603, 360, 628);
	m_wndSave.Create(this, _T("&Save"), 365, 603, 440, 628);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 603, 520, 628);
	m_wndPrint.Create(this, _T("&Print"), 525, 603, 600, 628);
}
void CHMSHospitalTransfer::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_wndICDDiagnostic.SetCheckValue(true);
	m_wndICDDiagnostic.SetRequirementLength(1);
	m_wndICDDiagnostic.LimitText(1024);
	m_wndICDDiagnostic.SetVisibleLines(15);
	m_wndConclusion.SetLimitText(254);
	m_wndConclusion.SetCheckValue(true);
	m_wndHospitalName.SetCheckValue(true);
	m_wndHospitalName.LimitText(254);
	m_wndOutDate.SetCheckValue(true);
	m_wndClinicalSymbol.SetLimitText(1024);
	//	m_wndClinicalSymbol.SetCheckValue(true);
	m_wndTests.SetLimitText(1024);
	//	m_wndTests.SetCheckValue(true);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(254);
	//	m_wndRelationDisease.SetCheckValue(true);
	m_wndMedicineUsed.SetLimitText(1024);
	//	m_wndMedicineUsed.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(35);
	m_wndHospitalLine.SetCheckValue(true);
	m_wndHospitalLine.LimitText(35);
	m_wndPatientState.SetLimitText(254);
	//	m_wndPatientState.SetCheckValue(true);
	//	m_wndTransferDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//	m_wndTransferDate.SetCheckValue(true);

	m_wndTransport.LimitText(35);
	//	m_wndAttender.SetCheckValue(true);
	m_wndAttender.LimitText(65);
	m_wndCoDiseaseAdd.ModifyStyle(WS_TABSTOP, 0);

	m_wndICDDiagnostic.Format(2, 1, 18);
	m_wndICDDiagnostic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICDDiagnostic.InsertColumn(1, _T("Description"), CFMT_TEXT, 500);


	m_wndHospitalName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndHospitalName.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndHospitalLine.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndHospitalLine.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndResult.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTransport.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTransport.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndReason.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReason.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_hms_clinical_recordTbl.SetTableName(_T("hms_clinical_record"));
	m_hms_clinical_recordTbl.AddField(_T("hcr_status"), dfText, 1);
	m_hms_clinical_recordTbl.AddField(_T("hcr_dischargedept"), dfText, 7);
	m_hms_clinical_recordTbl.AddField(_T("hcr_dischargedate"), dfDateTime);
	m_hms_clinical_recordTbl.AddField(_T("hcr_mainicd"), dfText, 13);
	m_hms_clinical_recordTbl.AddField(_T("hcr_maindisease"), dfText, 1024);	//Benh chinh
	m_hms_clinical_recordTbl.AddField(_T("hcr_conclusion"), dfText, 1024);	//Ket luan
	m_hms_clinical_recordTbl.AddField(_T("hcr_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	m_hms_clinical_recordTbl.AddField(_T("hcr_suggestion2"), dfText, 256);
	m_hms_clinical_recordTbl.AddField(_T("hcr_result"), dfText, 1);	//1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
	m_hms_clinical_recordTbl.AddField(_T("hcr_hospitalid"), dfText, 13);	//Benh vien chuyen toi
	m_hms_clinical_recordTbl.AddField(_T("hcr_ttrang_rv"), dfInteger);
	m_hms_clinical_recordTbl.AddField(_T("hcr_refidx"), dfInteger);


	m_hms_htdocTbl.SetTableName(_T("hms_htdoc"));
	m_hms_htdocTbl.AddField(_T("hhtd_docno"), dfLong);
	m_hms_htdocTbl.AddField(_T("hhtd_clinical"), dfText, 512);
	m_hms_htdocTbl.AddField(_T("hhtd_tests"), dfText, 1024);
	m_hms_htdocTbl.AddField(_T("hhtd_medicine"), dfText, 1024);
	m_hms_htdocTbl.AddField(_T("hhtd_patstate"), dfText, 128);
	m_hms_htdocTbl.AddField(_T("hhtd_transdate"), dfDateTime);
	m_hms_htdocTbl.AddField(_T("hhtd_reason"), dfText, 128);
	m_hms_htdocTbl.AddField(_T("hhtd_transport"), dfLong);
	m_hms_htdocTbl.AddField(_T("hhtd_attender"), dfText, 65);
	m_hms_htdocTbl.AddField(_T("hhtd_line"), dfText, 65);
	m_hms_htdocTbl.AddField(_T("hhtd_pttt"), dfText, 1024);
	m_hms_htdocTbl.AddField(_T("hhtd_begin_date"), dfDateTime);
	m_hms_htdocTbl.AddField(_T("hhtd_end_date"), dfDateTime);
	m_hms_htdocTbl.AddField(_T("hhtd_one_year_apply"), dfText, 1);
	m_hms_htdocTbl.AddField(_T("hhtd_treattime"), dfInteger);





}
void CHMSHospitalTransfer::OnSetWindowEvents() {
	m_wndICDDiagnostic.SetEvent(WE_SELENDOK, _OnICDDiagnosticSelendokFnc);
	//m_wndICDDiagnostic.SetEvent(WE_SETFOCUS, _OnICDDiagnosticSetfocusFnc);
	//m_wndICDDiagnostic.SetEvent(WE_KILLFOCUS, _OnICDDiagnosticKillfocusFnc);
	m_wndICDDiagnostic.SetEvent(WE_SELCHANGE, _OnICDDiagnosticSelectChangeFnc);
	m_wndICDDiagnostic.SetEvent(WE_LOADDATA, _OnICDDiagnosticLoadDataFnc);
	//m_wndICDDiagnostic.SetEvent(WE_ADDNEW, _OnICDDiagnosticAddNewFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndHospitalName.SetEvent(WE_SELENDOK, _OnHospitalNameSelendokFnc);
	//m_wndHospitalName.SetEvent(WE_SETFOCUS, _OnHospitalNameSetfocusFnc);
	//m_wndHospitalName.SetEvent(WE_KILLFOCUS, _OnHospitalNameKillfocusFnc);
	m_wndHospitalName.SetEvent(WE_SELCHANGE, _OnHospitalNameSelectChangeFnc);
	m_wndHospitalName.SetEvent(WE_LOADDATA, _OnHospitalNameLoadDataFnc);
	//m_wndHospitalName.SetEvent(WE_ADDNEW, _OnHospitalNameAddNewFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	//m_wndClinicalSymbol.SetEvent(WE_CHANGE, _OnClinicalSymbolChangeFnc);
	//m_wndClinicalSymbol.SetEvent(WE_SETFOCUS, _OnClinicalSymbolSetfocusFnc);
	//m_wndClinicalSymbol.SetEvent(WE_KILLFOCUS, _OnClinicalSymbolKillfocusFnc);
	m_wndClinicalSymbol.SetEvent(WE_CHECKVALUE, _OnClinicalSymbolCheckValueFnc);
	//m_wndTests.SetEvent(WE_CHANGE, _OnTestsChangeFnc);
	//m_wndTests.SetEvent(WE_SETFOCUS, _OnTestsSetfocusFnc);
	//m_wndTests.SetEvent(WE_KILLFOCUS, _OnTestsKillfocusFnc);
	m_wndTests.SetEvent(WE_CHECKVALUE, _OnTestsCheckValueFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndMedicineUsed.SetEvent(WE_CHANGE, _OnMedicineUsedChangeFnc);
	//m_wndMedicineUsed.SetEvent(WE_SETFOCUS, _OnMedicineUsedSetfocusFnc);
	//m_wndMedicineUsed.SetEvent(WE_KILLFOCUS, _OnMedicineUsedKillfocusFnc);
	m_wndMedicineUsed.SetEvent(WE_CHECKVALUE, _OnMedicineUsedCheckValueFnc);
	m_wndHospitalLine.SetEvent(WE_SELENDOK, _OnHospitalLineSelendokFnc);
	//m_wndHospitalLine.SetEvent(WE_SETFOCUS, _OnHospitalLineSetfocusFnc);
	//m_wndHospitalLine.SetEvent(WE_KILLFOCUS, _OnHospitalLineKillfocusFnc);
	m_wndHospitalLine.SetEvent(WE_SELCHANGE, _OnHospitalLineSelectChangeFnc);
	m_wndHospitalLine.SetEvent(WE_LOADDATA, _OnHospitalLineLoadDataFnc);
	//m_wndHospitalLine.SetEvent(WE_ADDNEW, _OnHospitalLineAddNewFnc);
	//m_wndPatientState.SetEvent(WE_CHANGE, _OnPatientStateChangeFnc);
	//m_wndPatientState.SetEvent(WE_SETFOCUS, _OnPatientStateSetfocusFnc);
	//m_wndPatientState.SetEvent(WE_KILLFOCUS, _OnPatientStateKillfocusFnc);
	m_wndPatientState.SetEvent(WE_CHECKVALUE, _OnPatientStateCheckValueFnc);
	//m_wndTransferDate.SetEvent(WE_CHANGE, _OnTransferDateChangeFnc);
	//m_wndTransferDate.SetEvent(WE_SETFOCUS, _OnTransferDateSetfocusFnc);
	//m_wndTransferDate.SetEvent(WE_KILLFOCUS, _OnTransferDateKillfocusFnc);
	m_wndTransferDate.SetEvent(WE_CHECKVALUE, _OnTransferDateCheckValueFnc);

	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);

	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_LOADDATA, _OnReasonLoadDataFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndTransport.SetEvent(WE_SELENDOK, _OnTransportSelendokFnc);
	//m_wndTransport.SetEvent(WE_SETFOCUS, _OnTransportSetfocusFnc);
	//m_wndTransport.SetEvent(WE_KILLFOCUS, _OnTransportKillfocusFnc);
	m_wndTransport.SetEvent(WE_SELCHANGE, _OnTransportSelectChangeFnc);
	m_wndTransport.SetEvent(WE_LOADDATA, _OnTransportLoadDataFnc);
	//m_wndTransport.SetEvent(WE_ADDNEW, _OnTransportAddNewFnc);
	//m_wndAttender.SetEvent(WE_SETFOCUS, _OnAttenderSetfocusFnc);
	//m_wndAttender.SetEvent(WE_KILLFOCUS, _OnAttenderKillfocusFnc);
	//m_wndHuongDieuTri.SetEvent(WE_CHANGE, _OnHuongDieuTriChangeFnc);
	//m_wndHuongDieuTri.SetEvent(WE_SETFOCUS, _OnHuongDieuTriSetfocusFnc);
	//m_wndHuongDieuTri.SetEvent(WE_KILLFOCUS, _OnHuongDieuTriKillfocusFnc);
	m_wndHuongDieuTri.SetEvent(WE_CHECKVALUE, _OnHuongDieuTriCheckValueFnc);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndCoDiseaseAdd.SetEvent(WE_CLICK, _OnCoDiseaseAddSelectFnc);
	m_wndOperationName.SetEvent(WE_CHECKVALUE, _OnOperationNameCheckValueFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndone_year_apply.SetEvent(WE_CLICK, _Onone_year_applySelectFnc);

	/*
		AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSHospitalTransferFnc, 0, 'A', VK_CONTROL);
		AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSHospitalTransferFnc, 0, 'E', VK_CONTROL);
		AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSHospitalTransferFnc, 0, 'D', VK_CONTROL);
		AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSHospitalTransferFnc, 0, 'S', VK_CONTROL);
		AddEvent(0, _T("-"));
		AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSHospitalTransferFnc, 0, 'T', VK_CONTROL);
	*/

	m_szTransferDate = pMF->GetSysDateTime();
	//m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	//m_szFromDate += _T("00:00");
	//m_szToDate += _T("23:59");
//	if(GetMode() == VM_NONE)
//		return;
	GetDataToScreen();

}
void CHMSHospitalTransfer::OnDoDataExchange(CDataExchange* pDX) {
	DDX_TextEx(pDX, m_wndICDDiagnostic.GetDlgCtrlID(), m_szICDDiagnosticKey);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_TextEx(pDX, m_wndHospitalName.GetDlgCtrlID(), m_szHospitalNameKey);
	//DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_Text(pDX, m_wndClinicalSymbol.GetDlgCtrlID(), m_szClinicalSymbol);
	DDX_Text(pDX, m_wndTests.GetDlgCtrlID(), m_szTests);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndMedicineUsed.GetDlgCtrlID(), m_szMedicineUsed);
	DDX_TextEx(pDX, m_wndHospitalLine.GetDlgCtrlID(), m_szHospitalLineKey);
	DDX_Text(pDX, m_wndPatientState.GetDlgCtrlID(), m_szPatientState);
	DDX_TextEx(pDX, m_wndTransferDate.GetDlgCtrlID(), m_szTransferDate);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_TextEx(pDX, m_wndTransport.GetDlgCtrlID(), m_szTransportKey);
	DDX_Text(pDX, m_wndAttender.GetDlgCtrlID(), m_szAttenderKey);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndReason.GetDlgCtrlID(), m_szReasonKey);
	DDX_Text(pDX, m_wndHuongDieuTri.GetDlgCtrlID(), m_szHuongDieuTri);
	DDX_Text(pDX, m_wndOperationName.GetDlgCtrlID(), m_szOperationName);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndone_year_apply.GetDlgCtrlID(), m_bone_year_apply);

}
void CHMSHospitalTransfer::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT * FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status IN('I','T') "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_conclusion"), m_szConclusion);
		rs.GetValue(_T("hcr_mainicd"), m_szICDDiagnosticKey);
		rs.GetValue(_T("hcr_status"), szStatus);
		rs.GetValue(_T("hcr_dischargedate"), m_szOutDate);
		rs.GetValue(_T("hcr_hospitalid"), m_szHospitalNameKey);

		rs.GetValue(_T("hcr_result"), m_szResultKey);
		rs.GetValue(_T("hcr_suggestion2"), m_szHuongDieuTri);
		rs.GetValue(_T("hcr_maindisease"), m_szMainDisease);
		rs.GetValue(_T("hcr_reldisease"), m_szRelationDisease);
		m_szHospitalNameKey.Trim();

		if (m_szMainDisease.IsEmpty())
			m_szMainDisease = pMF->m_szDiagnostic;


		m_szICDDiagnosticKey.Trim();
		szSQL.Format(_T("SELECT * FROM hms_htdoc WHERE hhtd_docno=%ld "), pMF->m_nDocumentNo);
		CRecord rs2(&pMF->m_db);
		CString szone_year_apply;
		rs2.ExecSQL(szSQL);
		if (!rs2.IsEOF()) {
			rs2.GetValue(_T("hhtd_clinical"), m_szClinicalSymbol);
			rs2.GetValue(_T("hhtd_tests"), m_szTests);
			rs2.GetValue(_T("hhtd_medicine"), m_szMedicineUsed);
			rs2.GetValue(_T("hhtd_patstate"), m_szPatientState);
			rs2.GetValue(_T("hhtd_transdate"), m_szTransferDate);
			rs2.GetValue(_T("hhtd_reason"), m_szReasonKey);
			rs2.GetValue(_T("hhtd_transport"), m_szTransportKey);
			rs2.GetValue(_T("hhtd_attender"), m_szAttenderKey);
			rs2.GetValue(_T("hhtd_line"), m_szHospitalLineKey);
			rs2.GetValue(_T("hhtd_numbertrans"), m_nNumberTrans);
			rs2.GetValue(_T("hhtd_pttt"), m_szOperationName);
			rs2.GetValue(_T("hhtd_begin_date"), m_szFromDate);
			rs2.GetValue(_T("hhtd_end_date"), m_szToDate);

			rs2.GetValue(_T("hhtd_one_year_apply"), szone_year_apply);
			if (szone_year_apply == _T("Y"))
				m_bone_year_apply = TRUE;
			else
				m_bone_year_apply = FALSE;
		}
	}


	if (szStatus != _T("T"))
		m_szOutDate = pMF->GetSysDateTime();

	if (m_szMainDisease.IsEmpty())
		m_szMainDisease = pMF->m_szDiagnostic;
	m_szICDDiagnosticKey.Trim();
	SetMode(VM_VIEW);

}
void CHMSHospitalTransfer::GetScreenToData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	m_hms_clinical_recordTbl.SetValue(_T("hcr_status"), _T("T"));
	m_hms_clinical_recordTbl.SetValue(_T("hcr_conclusion"), m_szConclusion);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_mainicd"), m_szICDDiagnosticKey);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_dischargedept"), pMF->m_szDept);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_dischargedate"), m_szOutDate);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_hospitalid"), m_szHospitalNameKey);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_suggestion2"), m_szHuongDieuTri);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_result"), m_szResultKey);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_treatdoctor"), pMF->m_szDoctor);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_maindisease"), m_szMainDisease);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_suggestion"), _T("F"));
	m_hms_clinical_recordTbl.SetValue(_T("hcr_ttrang_rv"), 2);
	m_hms_clinical_recordTbl.SetValue(_T("hcr_refidx"), pMF->m_nRefIndex);

	m_hms_htdocTbl.SetValue(_T("hhtd_docno"), pMF->m_nDocumentNo);
	m_hms_htdocTbl.SetValue(_T("hhtd_clinical"), m_szClinicalSymbol);
	m_hms_htdocTbl.SetValue(_T("hhtd_tests"), m_szTests);
	m_hms_htdocTbl.SetValue(_T("hhtd_medicine"), m_szMedicineUsed);
	m_hms_htdocTbl.SetValue(_T("hhtd_patstate"), m_szPatientState);
	m_hms_htdocTbl.SetValue(_T("hhtd_transdate"), m_szTransferDate);
	m_hms_htdocTbl.SetValue(_T("hhtd_reason"), m_szReasonKey);
	m_hms_htdocTbl.SetValue(_T("hhtd_transport"), m_szTransportKey);
	m_hms_htdocTbl.SetValue(_T("hhtd_attender"), m_szAttenderKey);
	m_hms_htdocTbl.SetValue(_T("hhtd_line"), m_szHospitalLineKey);
	m_hms_htdocTbl.SetValue(_T("hhtd_pttt"), m_szOperationName);
	m_hms_htdocTbl.SetValue(_T("hhtd_begin_date"), m_szFromDate);
	m_hms_htdocTbl.SetValue(_T("hhtd_end_date"), m_szToDate);
	m_hms_htdocTbl.SetValue(_T("hhtd_treattime"), pMF->GetTreatTime());
	

	CString szone_year_apply;
	if (m_bone_year_apply)
		szone_year_apply = _T("Y");
	else
		szone_year_apply = _T("N");

	m_hms_htdocTbl.SetValue(_T("hhtd_one_year_apply"), szone_year_apply);

}


void CHMSHospitalTransfer::SetDefaultValues() {

	m_szICDDiagnosticKey.Empty();
	m_szConclusion.Empty();
	m_szHospitalNameKey.Empty();
	m_szOutDate.Empty();
	m_szClinicalSymbol.Empty();
	m_szTests.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szMedicineUsed.Empty();
	m_szHospitalLineKey.Empty();
	m_szPatientState.Empty();
	m_szTransferDate.Empty();
	m_szReason.Empty();
	m_szTransportKey.Empty();
	m_szAttenderKey.Empty();
	m_szHospitalLineKey = _T("1");
	m_szHuongDieuTri.Empty();
	m_nNumberTrans = 0;
	m_bone_year_apply = FALSE;
	m_szOperationName.Empty();

}
int CHMSHospitalTransfer::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiView::SetMode(nMode);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
	case VM_ADD:
		//SetDefaultValues(); 
		m_wndICDDiagnostic.SetFocus();
		szSQL.Format(_T("SELECT coalesce(max(hhtd_numbertrans),0) +1 FROM hms_htdoc WHERE date_part('year', hhtd_transdate)=date_part('year', sysdate)"));
		rs.ExecSQL(szSQL);
		if (rs.GetIntValue() > 0)
			m_nNumberTrans = rs.GetIntValue();

		EnableControls(TRUE);
		EnableButtons(TRUE, 1, 2, -1);
		m_wndCoDiseaseAdd.EnableWindow(TRUE);
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 1, 2, -1);
		m_wndICDDiagnostic.SetFocus();
		m_wndCoDiseaseAdd.EnableWindow(TRUE);

		if (m_nNumberTrans <= 0)
		{
			szSQL.Format(_T("SELECT coalesce(max(hhtd_numbertrans),0) +1 FROM hms_htdoc WHERE date_part('year', hhtd_transdate)=date_part('year', sysdate)"));
			rs.ExecSQL(szSQL);
			if (rs.GetIntValue() > 0)
				m_nNumberTrans = rs.GetIntValue();
		}
		break;
	case VM_VIEW:
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 3, -1);
		m_wndCoDiseaseAdd.EnableWindow(FALSE);
		break;
	case VM_NONE:
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, -1);
		SetDefaultValues();
		m_wndCoDiseaseAdd.EnableWindow(FALSE);
		break;
	};
	m_wndNumberTrans.EnableWindow(false);
	UpdateData(FALSE);
	return nOldMode;
}
void CHMSHospitalTransfer::OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSHospitalTransfer::OnICDDiagnosticSelendok() {
	UpdateData(true);
	m_szMainDisease = m_wndICDDiagnostic.GetCurrent(1);
	UpdateData(false);

}
/*void CHMSHospitalTransfer::OnICDDiagnosticSetfocus(){

}*/
/*void CHMSHospitalTransfer::OnICDDiagnosticKillfocus(){

}*/
long CHMSHospitalTransfer::OnICDDiagnosticLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadICD(&m_wndICDDiagnostic, m_szICDDiagnosticKey);

	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndICDDiagnostic.IsSearchKey() && !m_szICDDiagnosticKey.IsEmpty()){
		};
		m_wndICDDiagnostic.DeleteAllItems();
		int nCount = 0;
		nCount = m_hms_clinical_recordTblExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndICDDiagnostic.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("description")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CHMSHospitalTransfer::OnICDDiagnosticAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSHospitalTransfer::OnConclusionChange(){

} */
/*void CHMSHospitalTransfer::OnConclusionSetfocus(){

} */
/*void CHMSHospitalTransfer::OnConclusionKillfocus(){

} */
int CHMSHospitalTransfer::OnConclusionCheckValue() {
	return 0;
}
void CHMSHospitalTransfer::OnHospitalNameSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSHospitalTransfer::OnHospitalNameSelendok() {

}
/*void CHMSHospitalTransfer::OnHospitalNameSetfocus(){

}*/
/*void CHMSHospitalTransfer::OnHospitalNameKillfocus(){

}*/
long CHMSHospitalTransfer::OnHospitalNameLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadHospitalList(&m_wndHospitalName, m_szHospitalNameKey);

	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndHospitalName.IsSearchKey() && !m_szHospitalNameKey.IsEmpty()){
		};
		m_wndHospitalName.DeleteAllItems();
		int nCount = 0;
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndHospitalName.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CHMSHospitalTransfer::OnHospitalNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSHospitalTransfer::OnOutDateChange(){

} */
/*void CHMSHospitalTransfer::OnOutDateSetfocus(){

} */
/*void CHMSHospitalTransfer::OnOutDateKillfocus(){

} */
int CHMSHospitalTransfer::OnOutDateCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (CompareDate(pMF->m_szEntryDate, m_szOutDate) > 0)
		return -1;
	return 0;
}
/*void CHMSHospitalTransfer::OnClinicalSymbolChange(){

} */
/*void CHMSHospitalTransfer::OnClinicalSymbolSetfocus(){

} */
/*void CHMSHospitalTransfer::OnClinicalSymbolKillfocus(){

} */
int CHMSHospitalTransfer::OnClinicalSymbolCheckValue() {
	return 0;
}
/*void CHMSHospitalTransfer::OnTestsChange(){

} */
/*void CHMSHospitalTransfer::OnTestsSetfocus(){

} */
/*void CHMSHospitalTransfer::OnTestsKillfocus(){

} */
int CHMSHospitalTransfer::OnTestsCheckValue() {
	return 0;
}
/*void CHMSHospitalTransfer::OnMainDiseaseChange(){

} */
/*void CHMSHospitalTransfer::OnMainDiseaseSetfocus(){

} */
/*void CHMSHospitalTransfer::OnMainDiseaseKillfocus(){

} */
int CHMSHospitalTransfer::OnMainDiseaseCheckValue() {
	return 0;
}
/*void CHMSHospitalTransfer::OnRelationDiseaseChange(){

} */
/*void CHMSHospitalTransfer::OnRelationDiseaseSetfocus(){

} */
/*void CHMSHospitalTransfer::OnRelationDiseaseKillfocus(){

} */
int CHMSHospitalTransfer::OnRelationDiseaseCheckValue() {
	return 0;
}
#include "HMSFastDiagnosticDialog.h"
void CHMSHospitalTransfer::OnCoDiseaseAddSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	CHMSFastDiagnosticDialog dlg(this);
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;
	dlg.m_nPatientNo = pMF->m_nPatientNo;
	if (dlg.DoModal() == IDOK)
	{
		m_szRelationDisease = dlg.m_szConclusion;
		UpdateData(FALSE);
	}
	return;
}
/*void CHMSHospitalTransfer::OnMedicineUsedChange(){

} */
/*void CHMSHospitalTransfer::OnMedicineUsedSetfocus(){

} */
/*void CHMSHospitalTransfer::OnMedicineUsedKillfocus(){

} */
int CHMSHospitalTransfer::OnMedicineUsedCheckValue() {
	return 0;
}

void CHMSHospitalTransfer::OnHospitalLineSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSHospitalTransfer::OnHospitalLineSelendok() {

}
/*void CHMSHospitalTransfer::OnHospitalLineSetfocus(){

}*/
/*void CHMSHospitalTransfer::OnHospitalLineKillfocus(){

}*/
long CHMSHospitalTransfer::OnHospitalLineLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndHospitalLine, _T("hms_hospital_line"), m_szHospitalLineKey);
	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndHospitalLine.IsSearchKey() && !m_szHospitalLineKey.IsEmpty()){
		};
		m_wndHospitalLine.DeleteAllItems();
		int nCount = 0;
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndHospitalLine.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("description")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CHMSHospitalTransfer::OnHospitalLineAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

/*void CHMSHospitalTransfer::OnPatientStateChange(){

} */
/*void CHMSHospitalTransfer::OnPatientStateSetfocus(){

} */
/*void CHMSHospitalTransfer::OnPatientStateKillfocus(){

} */
int CHMSHospitalTransfer::OnPatientStateCheckValue() {
	return 0;
}
/*void CHMSHospitalTransfer::OnTransferDateChange(){

} */
/*void CHMSHospitalTransfer::OnTransferDateSetfocus(){

} */
/*void CHMSHospitalTransfer::OnTransferDateKillfocus(){

} */
int CHMSHospitalTransfer::OnTransferDateCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//CDateTime dtTransfer, dtOut, dtAdmit;
	//dtTransfer.ParseDateTime(m_szTransferDate);
	//dtOut.ParseDateTime(m_szOutDate);
	//dtAdmit.ParseDateTime(m_szAdmitDate);
	////if(CompareDate(pMF->m_szEntryDate, m_szOutDate) > 0
	//if (dtTransfer < dtAdmit)
	//{
	//	return -1;
	//}
	return 0;
}
int CHMSHospitalTransfer::OnOperationNameCheckValue() {
	return 0;
}

int CHMSHospitalTransfer::OnFromDateCheckValue() {
	return 0;
}

int CHMSHospitalTransfer::OnToDateCheckValue() {
	return 0;
}

void CHMSHospitalTransfer::Onone_year_applySelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
/*void CHMSHospitalTransfer::OnReasonChange(){

} */
/*void CHMSHospitalTransfer::OnReasonSetfocus(){

} */
/*void CHMSHospitalTransfer::OnReasonKillfocus(){

} */

long CHMSHospitalTransfer::OnResultLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndResult, _T("hms_result"), m_szResultKey);
	return 0;
}

long CHMSHospitalTransfer::OnReasonLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndReason, _T("hms_transfer_reason"), m_szReasonKey);
	return 0;
}

int CHMSHospitalTransfer::OnReasonCheckValue() {
	return 0;
}
void CHMSHospitalTransfer::OnTransportSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSHospitalTransfer::OnTransportSelendok() {

}
/*void CHMSHospitalTransfer::OnTransportSetfocus(){

}*/
/*void CHMSHospitalTransfer::OnTransportKillfocus(){

}*/
long CHMSHospitalTransfer::OnTransportLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndTransport, _T("hms_transport_type"), m_szTransportKey);
	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndTransport.IsSearchKey() && !m_szTransportKey.IsEmpty()){
		};
		m_wndTransport.DeleteAllItems();
		int nCount = 0;
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndTransport.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CHMSHospitalTransfer::OnTransportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

/*void CHMSHospitalTransfer::OnAttenderSetfocus(){

}*/
/*void CHMSHospitalTransfer::OnAttenderKillfocus(){

}*/
/*void CHMSHospitalTransfer::OnHuongDieuTriChange(){

} */
/*void CHMSHospitalTransfer::OnHuongDieuTriSetfocus(){

} */
/*void CHMSHospitalTransfer::OnHuongDieuTriKillfocus(){

} */
int CHMSHospitalTransfer::OnHuongDieuTriCheckValue() {
	return 0;
}

void CHMSHospitalTransfer::OnEntertainTreatSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	/*if(m_bEntertainTreat)
	{
		CHMSEntertainTreatDialog dlg(this);
		dlg.DoModal();
	}*/
}

void CHMSHospitalTransfer::OnUpdateSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnEditHMSHospitalTransfer();

}
void CHMSHospitalTransfer::OnSaveSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnSaveHMSHospitalTransfer();

}
void CHMSHospitalTransfer::OnCancelSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnCancelHMSHospitalTransfer();

}

void CHMSHospitalTransfer::OnPrintSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("In mẫu 1 (1 tờ)"));
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 2, _T("In mẫu 2 (2 tờ)"));
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top - 2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY | TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTBUTTON, pt.x, pt.y, this);
	switch (ret)
	{
	case 1:
		OnPrintSelect_V1();
		break;
	case 2:
		OnPrintSelect_V2();
		break;
	}
}

void CHMSHospitalTransfer::OnPrintSelect_V1()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	pMF->PrintHospitalTransferSheet(pMF->m_nDocumentNo, pMF->m_nRefIndex);
}

void CHMSHospitalTransfer::OnPrintSelect_V2()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	pMF->PrintHospitalTransferSheet_V2(pMF->m_nDocumentNo, pMF->m_nRefIndex);
}
int CHMSHospitalTransfer::OnAddHMSHospitalTransfer() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSHospitalTransfer::OnEditHMSHospitalTransfer() {
	//	if(GetMode() != VM_VIEW) 
	//		return -1; 
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	//if(!pMF->m_wndPatientDocument.OnCheckTerminateDocument(pMF->m_nDocumentNo))
	//{
	//	ShowMessageBox(_T("Cannot process with current status"));
	//	return -1;
	//}

	if (pMF->IsPaidFees()) {
		ShowMessageBox(_T("Patients paid hospital fees. Do not allow reupdate."));
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}


	CString szAcceptedFee, szStatus;

	szSQL.Format(_T("SELECT htr_status, htrf_acceptedfee FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_status"), szStatus);

	rs.GetValue(_T("htrf_acceptedfee"), szAcceptedFee);

	if (szAcceptedFee == _T("A") || szAcceptedFee == _T("P") || szAcceptedFee == _T("Y"))
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 \x111\x1B0\x1EE3\x63 \x78\xE1\x63 nh\x1EADn \x63hi ph\xED ho\x1EB7\x63 th\x61nh to\xE1n vi\x1EC7n ph\xED."));
		return -1;
	}





	//	szSQL.Format(_T(" SELECT COUNT(*)") \
	//_T(" FROM hms_ipharmaorderline_r") \
	//_T(" LEFT JOIN m_transaction") \
	//_T(" ON(hpolr_retorder_id= mt_transaction_id)") \
	//_T(" LEFT JOIN m_productitem_view") \
	//_T(" ON(product_item_id       = hpolr_product_item_id)") \
	//_T(" WHERE hpolr_docno        = %ld") \
	//_T(" AND NVL(mt_status, 'O') <> 'A'"), pMF->m_nDocumentNo);
	//	rs.ExecSQL(szSQL);
	//	
	//	if(rs.GetIntValue() > 0)
	//	{
	//		ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i thu\x1ED1\x63, v\x1EADt t\x1B0 \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 tr\x1EA3 l\x1EA1i. \x42\x1EA1n ph\x1EA3i tr\x1EA3 thu\x1ED1\x63, v\x1EADt t\x1B0 tr\x1B0\x1EDB\x63 khi k\x1EBFt th\xFA\x63"), MB_OK);	
	//		return -1;
	//	}
	//Check khi kết thúc hồ sơ bệnh án đối với bệnh nhân bảo hiểm
	if (pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
	{
		int vcount = 0;
		szSQL.Format(_T("HMS_CHECK_INS_BEFORE_TER_I(%ld, %d) "), pMF->m_nDocumentNo, pMF->m_nTreatTime);
		vcount = str2int(pMF->ExecDML(szSQL));

		if (vcount > 0)
		{
			ShowMessageBox(_T("Bệnh nhân có đề mục cận lâm sàng chưa trả kết quả, không thể kết thúc hồ sơ!"), MB_ICONERROR);
			return -1;
		}
	}



	//	CString szSQL;
	if (pMF->GetCurrentDepartmentID() == _T("A11"))
	{
		szSQL.Format(_T("HMS_CLINICAL_CHECKBFTERM_A11(%ld, %d) "), pMF->m_nDocumentNo, pMF->GetTreatTime());
	}
	else
	{
		szSQL.Format(_T("HMS_CLINICAL_CHECKBFTERM(%ld, %d) "), pMF->m_nDocumentNo, pMF->GetTreatTime());
	}
	//szSQL.Format(_T("HMS_CLINICAL_CHECKBFTERM(%ld,%d) "), pMF->m_nDocumentNo, pMF->GetTreatTime());
	int nCount = str2int(pMF->ExecDML(szSQL));

	if (nCount > 0)
	{
		CHMSUnTerminatedDialog termdlg(this);
		termdlg.m_nDocumentNo = pMF->m_nDocumentNo;
		if (termdlg.DoModal() == IDOK)
		{

		}
		else
		{
			SetMode(VM_VIEW);
		}
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_term_warning WHERE htw_docno=%ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		return 0;
	}

	nCount = 0;
	CHMSHelper helper;
	if (helper.CheckMaDoiTuongKCB(pMF->m_nDocumentNo, true) <= 0)
	{
		return 0;
	}

	szSQL.Format(_T("SELECT count(*) as nCount FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		SetMode(VM_EDIT);
	else
		SetMode(VM_ADD);

	return 0;
}
int CHMSHospitalTransfer::OnDeleteHMSHospitalTransfer() {
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
		OnCancelHMSHospitalTransfer();
	}
	return 0;
}
int CHMSHospitalTransfer::OnSaveHMSHospitalTransfer() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//m_wndOutDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}

	if (!IsValidateData())
		return -1;
	//Cap nhat lai ho so dieu tri
	//Cap nhat lai ho so dieu tri cua khoa
	szSQL.Format(_T("UPDATE hms_clinical_record ") \
		_T(" SET hcr_status='T', ") \
		_T(" hcr_dischargedate=to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'), ") \
		_T(" hcr_dischargedept='%s', ") \
		_T(" hcr_result='%s', ") \
		_T(" hcr_suggestion='F', ") \
		_T(" hcr_conclusion='%s', ") \
		_T(" hcr_hospitalid='%s', ") \
		_T(" hcr_mainicd='%s', ") \
		_T(" hcr_refidx = %d, ") \
		_T(" hcr_maindisease='%s', ") \
		_T(" hcr_suggestion2 ='%s', ") \
		_T(" hcr_ttrang_rv =2 ") \
		_T(" WHERE hcr_docno=%ld "),
		m_szTransferDate,
		pMF->m_szDept,
		m_szResultKey,
		m_szConclusion,
		m_szHospitalNameKey,
		m_szICDDiagnosticKey,
		pMF->m_nRefIndex,
		m_szMainDisease,
		m_szHuongDieuTri,
		pMF->m_nDocumentNo);

	pMF->BeginTransaction();
	szSQL.Format(_T("hms_clinical_record_update(%ld, %d, q'$%s$')")
		, pMF->m_nDocumentNo, pMF->m_nTreatTime, pMF->DbfMap2Json(&m_hms_clinical_recordTbl));
	_fmsg(_T("%s"), szSQL);
	//int ret = pMF->ExecSQL(szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret > 0)
	{
		szSQL.Format(_T("UPDATE hms_treatment_record ") \
			_T(" SET htr_updateddate=systimestamp, htr_status='T', ") \
			_T(" htr_dischargedate=to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'), ") \
			_T(" htr_mainicd='%s', ") \
			_T(" htr_maindisease='%s', ") \
			_T(" htr_suggestion='F', ") \
			_T(" htr_sumtreat= trunc_date(htr_dischargedate)- trunc_date(htr_admitdate) ") \
			_T(" WHERE htr_docno=%ld AND htr_idx=%d AND htr_status in('I','T') "),
			m_szTransferDate,
			m_szICDDiagnosticKey,
			m_szMainDisease,
			pMF->m_nDocumentNo,
			pMF->m_nRefIndex);
		pMF->ExecSQL(szSQL);
		//_fmsg(_T("%s"), szSQL);
		szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		//Vi benh nhan ra vien nen ko de record luu cac thong tin chuyen vien.
		if (GetMode() == VM_ADD)
			szSQL = m_hms_htdocTbl.GetInsertSQL();
		else
		{
			szWhere.Format(_T(" WHERE hhtd_docno = %ld "), pMF->m_nDocumentNo);
			szSQL = m_hms_htdocTbl.GetUpdateSQL(_T("hhtd_docno"));
			szSQL += szWhere;
		}

		pMF->ExecSQL(szSQL);

		pMF->Commit();

		SetMode(VM_VIEW);
		pMF->m_wndPatientDocument.LoadData(pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->m_nRefIndex);
		//((CGuiDialog *)	GetParent()->GetParent())->OnOK();
		//OnPrintSelect();
	}
	else
	{
		//	pMF->Rollback();
	}

	return ret;
}
int CHMSHospitalTransfer::OnCancelHMSHospitalTransfer() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	return 0;
}
int CHMSHospitalTransfer::OnHMSHospitalTransferListLoadData() {
	return 0;
}
