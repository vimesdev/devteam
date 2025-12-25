#include "HMSPatientDocument.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnSexCheckValue();
} 
/*static void _OnEthnicChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnEthnicChange();
} */
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnEthnicSetfocus();} */ 
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnEthnicKillfocus();
} */
static int _OnEthnicCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnEthnicCheckValue();
} 
/*static void _OnOccupationChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationChange();
} */
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationSetfocus();} */ 
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnOccupationCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnWorkplaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardInfoBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnCardInfoBtnSelect();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAdmitDateCheckValue();
} 
/*static void _OnDischargeDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDischargeDateChange();
} */
/*static void _OnDischargeDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDischargeDateSetfocus();} */ 
/*static void _OnDischargeDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDischargeDateKillfocus();
} */
static int _OnDischargeDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDischargeDateCheckValue();
} 
/*static void _OnMainDiseaseDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnMainDiseaseDiagnosticChange();
} */
/*static void _OnMainDiseaseDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnMainDiseaseDiagnosticSetfocus();} */ 
/*static void _OnMainDiseaseDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnMainDiseaseDiagnosticKillfocus();
} */
static int _OnMainDiseaseDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnMainDiseaseDiagnosticCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnSuggestionChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionChange();
} */
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionSetfocus();} */ 
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionKillfocus();
} */
static int _OnSuggestionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnSuggestionCheckValue();
} 
static void _OnSuggestionBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnSuggestionBtnSelect();
} 
static void _OnTreatmentTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPatientDocument*)pWnd)->OnTreatmentTabSelectChange(nOld, nNew);
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientDocument*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnDeptListDeleteItem();
} 
static void _OnAdditionInfoSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnAdditionInfoSelect();
} 
static void _OnAntibioticUseSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnAntibioticUseSelect();
} 
static void _OnTreatmentTrackingSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnTreatmentTrackingSelect();
} 
static void _OnPatientCareSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnPatientCareSelect();
} 
static void _OnClinicalRecordSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnClinicalRecordSelect();
} 
static void _OnElectronicRecordSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnElectronicRecordSelect();
} 
static void _OnExtButtonSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnExtButtonSelect();
} 
static int _OnAddHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnAddHMSPatientDocument();
} 
static int _OnEditHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnEditHMSPatientDocument();
} 
static int _OnDeleteHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnDeleteHMSPatientDocument();
} 
static int _OnSaveHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnSaveHMSPatientDocument();
} 
static int _OnCancelHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnCancelHMSPatientDocument();
} 
CHMSPatientDocument::CHMSPatientDocument(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPatientDocument::~CHMSPatientDocument(){
}
void CHMSPatientDocument::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 425, 265);
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 270, 425, 500);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 115, 55);
	m_wndPatientNo.Create(this,120, 30, 210, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 215, 30, 300, 55);
	m_wndDocumentNo.Create(this,305, 30, 420, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 115, 85);
	m_wndPatientName.Create(this,120, 60, 390, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 115, 115);
	m_wndAge.Create(this,120, 90, 210, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 215, 90, 250, 115);
	m_wndSex.Create(this,255, 90, 302, 115); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 307, 90, 362, 115);
	m_wndEthnic.Create(this,367, 90, 419, 115); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 10, 120, 115, 145);
	m_wndOccupation.Create(this,120, 120, 420, 145); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 150, 115, 175);
	m_wndAddress.Create(this,120, 150, 420, 200); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 10, 205, 115, 230);
	m_wndWorkplace.Create(this,120, 205, 420, 230); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 235, 115, 260);
	m_wndObject.Create(this,120, 235, 216, 260); 
	m_wndCardNo.Create(this,221, 235, 391, 260); 
	m_wndCardInfoBtn.Create(this, _T("@"), 396, 235, 421, 260);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 325, 115, 350);
	m_wndDoctor.Create(this,120, 325, 420, 350); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 295, 115, 320);
	m_wndStatus.Create(this,120, 295, 420, 320); 
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 10, 355, 115, 380);
	m_wndAdmitDate.Create(this,120, 355, 210, 380); 
	m_wndDischargeDateLabel.Create(this, _T("Discharge Date"), 215, 355, 300, 380);
	m_wndDischargeDate.Create(this,305, 355, 420, 380); 
	m_wndMainDiseaseDiagnostic.Create(this,120, 385, 420, 435); 
	m_wndRelationDiseaseLabel.Create(this, _T("Bệnh kèm theo"), 10, 440, 115, 465);
	m_wndRelationDisease.Create(this,120, 440, 420, 465); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 470, 115, 495);
	m_wndSuggestion.Create(this,120, 470, 340, 495); 
	m_wndSuggestionBtn.Create(this, _T("&Term Doc"), 345, 470, 420, 495);
	m_wndTreatmentTab.Create(this,430, 5, 1020, 605); 
	m_wndDeptList.Create(this,5, 505, 425, 643); 
	m_wndAdditionInfo.Create(this, _T("@"), 395, 60, 421, 85);
	m_wndAntibioticUse.Create(this, _T("HDSD Kháng sinh"), 10, 385, 115, 410);
	m_wndTreatmentTracking.Create(this, _T("Phiếu điều trị (F2)"), 430, 610, 550, 640);
	m_wndPatientCare.Create(this, _T("Phiếu chăm sóc (F3)"), 555, 610, 700, 640);
	m_wndClinicalRecord.Create(this, _T("Bệnh án"), 705, 610, 850, 640);
	m_wndElectronicRecord.Create(this, _T("Mẫu biểu chuyên môn"), 855, 610, 995, 640);
	m_wndExtButton.Create(this, _T("@"), 1000, 610, 1025, 640);
	m_wndHasAllergyLabel.Create(this, _T("Bệnh nhân có tiền sử dị ứng"), 180, 7, 425, 26);

}
void CHMSPatientDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(1024);
	m_wndSex.SetCheckValue(true);
	m_wndEthnic.SetLimitText(1024);
	m_wndEthnic.SetCheckValue(true);
	m_wndOccupation.SetLimitText(1024);
	m_wndOccupation.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(1024);
	m_wndWorkplace.SetCheckValue(true);
	m_wndObject.SetLimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetCheckValue(true);
	m_wndDoctor.SetLimitText(1024);
	m_wndDoctor.SetCheckValue(true);
	m_wndStatus.SetLimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndAdmitDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndDischargeDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDischargeDate.SetCheckValue(true);
	m_wndMainDiseaseDiagnostic.SetLimitText(1024);
	m_wndMainDiseaseDiagnostic.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(1024);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndSuggestion.SetLimitText(1024);
	m_wndSuggestion.SetCheckValue(true);



}
void CHMSPatientDocument::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndEthnic.SetEvent(WE_CHANGE, _OnEthnicChangeFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_CHECKVALUE, _OnEthnicCheckValueFnc);
	//m_wndOccupation.SetEvent(WE_CHANGE, _OnOccupationChangeFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_CHECKVALUE, _OnOccupationCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCardInfoBtn.SetEvent(WE_CLICK, _OnCardInfoBtnSelectFnc);
	//m_wndDoctor.SetEvent(WE_CHANGE, _OnDoctorChangeFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_CHECKVALUE, _OnDoctorCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	//m_wndDischargeDate.SetEvent(WE_CHANGE, _OnDischargeDateChangeFnc);
	//m_wndDischargeDate.SetEvent(WE_SETFOCUS, _OnDischargeDateSetfocusFnc);
	//m_wndDischargeDate.SetEvent(WE_KILLFOCUS, _OnDischargeDateKillfocusFnc);
	m_wndDischargeDate.SetEvent(WE_CHECKVALUE, _OnDischargeDateCheckValueFnc);
	//m_wndMainDiseaseDiagnostic.SetEvent(WE_CHANGE, _OnMainDiseaseDiagnosticChangeFnc);
	//m_wndMainDiseaseDiagnostic.SetEvent(WE_SETFOCUS, _OnMainDiseaseDiagnosticSetfocusFnc);
	//m_wndMainDiseaseDiagnostic.SetEvent(WE_KILLFOCUS, _OnMainDiseaseDiagnosticKillfocusFnc);
	m_wndMainDiseaseDiagnostic.SetEvent(WE_CHECKVALUE, _OnMainDiseaseDiagnosticCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndSuggestion.SetEvent(WE_CHANGE, _OnSuggestionChangeFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_CHECKVALUE, _OnSuggestionCheckValueFnc);
	m_wndSuggestionBtn.SetEvent(WE_CLICK, _OnSuggestionBtnSelectFnc);
	m_wndTreatmentTab.SetEvent(WE_SELCHANGE, _OnTreatmentTabSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdditionInfo.SetEvent(WE_CLICK, _OnAdditionInfoSelectFnc);
	m_wndAntibioticUse.SetEvent(WE_CLICK, _OnAntibioticUseSelectFnc);
	m_wndTreatmentTracking.SetEvent(WE_CLICK, _OnTreatmentTrackingSelectFnc);
	m_wndPatientCare.SetEvent(WE_CLICK, _OnPatientCareSelectFnc);
	m_wndClinicalRecord.SetEvent(WE_CLICK, _OnClinicalRecordSelectFnc);
	m_wndElectronicRecord.SetEvent(WE_CLICK, _OnElectronicRecordSelectFnc);
	m_wndExtButton.SetEvent(WE_CLICK, _OnExtButtonSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientDocumentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientDocumentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientDocumentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientDocumentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientDocumentFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnic);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndDischargeDate.GetDlgCtrlID(), m_szDischargeDate);
	DDX_Text(pDX, m_wndMainDiseaseDiagnostic.GetDlgCtrlID(), m_szMainDiseaseDiagnostic);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);

}
void CHMSPatientDocument::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientNo")] =  m_nPatientNo;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Age")] =  m_szAge;
	m_jData[_T("Sex")] =  m_szSex;
	m_jData[_T("Ethnic")] =  m_szEthnic;
	m_jData[_T("Occupation")] =  m_szOccupation;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Workplace")] =  m_szWorkplace;
	m_jData[_T("Object")] =  m_szObject;
	m_jData[_T("CardNo")] =  m_szCardNo;
	m_jData[_T("Doctor")] =  m_szDoctor;
	m_jData[_T("Status")] =  m_szStatus;
	m_jData[_T("AdmitDate")] =  m_szAdmitDate;
	m_jData[_T("DischargeDate")] =  m_szDischargeDate;
	m_jData[_T("MainDiseaseDiagnostic")] =  m_szMainDiseaseDiagnostic;
	m_jData[_T("RelationDisease")] =  m_szRelationDisease;
	m_jData[_T("Suggestion")] =  m_szSuggestion;
	}
	else
	{
			
	m_jData[_T("PatientNo")].GetValue(m_nPatientNo);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Age")].GetValue(m_szAge);
	m_jData[_T("Sex")].GetValue(m_szSex);
	m_jData[_T("Ethnic")].GetValue(m_szEthnic);
	m_jData[_T("Occupation")].GetValue(m_szOccupation);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Workplace")].GetValue(m_szWorkplace);
	m_jData[_T("Object")].GetValue(m_szObject);
	m_jData[_T("CardNo")].GetValue(m_szCardNo);
	m_jData[_T("Doctor")].GetValue(m_szDoctor);
	m_jData[_T("Status")].GetValue(m_szStatus);
	m_jData[_T("AdmitDate")].GetValue(m_szAdmitDate);
	m_jData[_T("DischargeDate")].GetValue(m_szDischargeDate);
	m_jData[_T("MainDiseaseDiagnostic")].GetValue(m_szMainDiseaseDiagnostic);
	m_jData[_T("RelationDisease")].GetValue(m_szRelationDisease);
	m_jData[_T("Suggestion")].GetValue(m_szSuggestion);
	}

}
void CHMSPatientDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientDocument::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szEthnic.Empty();
	m_szOccupation.Empty();
	m_szAddress.Empty();
	m_szWorkplace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szDoctor.Empty();
	m_szStatus.Empty();
	m_szAdmitDate.Empty();
	m_szDischargeDate.Empty();
	m_szMainDiseaseDiagnostic.Empty();
	m_szRelationDisease.Empty();
	m_szSuggestion.Empty();

}
int CHMSPatientDocument::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
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
/*void CHMSPatientDocument::OnPatientNoChange(){
	
} */
/*void CHMSPatientDocument::OnPatientNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnPatientNoKillfocus(){
	
} */
int CHMSPatientDocument::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDocument::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDocument::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnPatientNameChange(){
	
} */
/*void CHMSPatientDocument::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientDocument::OnPatientNameKillfocus(){
	
} */
int CHMSPatientDocument::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAgeChange(){
	
} */
/*void CHMSPatientDocument::OnAgeSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAgeKillfocus(){
	
} */
int CHMSPatientDocument::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnSexChange(){
	
} */
/*void CHMSPatientDocument::OnSexSetfocus(){
	
} */
/*void CHMSPatientDocument::OnSexKillfocus(){
	
} */
int CHMSPatientDocument::OnSexCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnEthnicChange(){
	
} */
/*void CHMSPatientDocument::OnEthnicSetfocus(){
	
} */
/*void CHMSPatientDocument::OnEthnicKillfocus(){
	
} */
int CHMSPatientDocument::OnEthnicCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnOccupationChange(){
	
} */
/*void CHMSPatientDocument::OnOccupationSetfocus(){
	
} */
/*void CHMSPatientDocument::OnOccupationKillfocus(){
	
} */
int CHMSPatientDocument::OnOccupationCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAddressChange(){
	
} */
/*void CHMSPatientDocument::OnAddressSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAddressKillfocus(){
	
} */
int CHMSPatientDocument::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnWorkplaceChange(){
	
} */
/*void CHMSPatientDocument::OnWorkplaceSetfocus(){
	
} */
/*void CHMSPatientDocument::OnWorkplaceKillfocus(){
	
} */
int CHMSPatientDocument::OnWorkplaceCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnObjectChange(){
	
} */
/*void CHMSPatientDocument::OnObjectSetfocus(){
	
} */
/*void CHMSPatientDocument::OnObjectKillfocus(){
	
} */
int CHMSPatientDocument::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnCardNoChange(){
	
} */
/*void CHMSPatientDocument::OnCardNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnCardNoKillfocus(){
	
} */
int CHMSPatientDocument::OnCardNoCheckValue(){
	return 0;
} 
void CHMSPatientDocument::OnCardInfoBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPatientDocument::OnDoctorChange(){
	
} */
/*void CHMSPatientDocument::OnDoctorSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDoctorKillfocus(){
	
} */
int CHMSPatientDocument::OnDoctorCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnStatusChange(){
	
} */
/*void CHMSPatientDocument::OnStatusSetfocus(){
	
} */
/*void CHMSPatientDocument::OnStatusKillfocus(){
	
} */
int CHMSPatientDocument::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAdmitDateChange(){
	
} */
/*void CHMSPatientDocument::OnAdmitDateSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAdmitDateKillfocus(){
	
} */
int CHMSPatientDocument::OnAdmitDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnDischargeDateChange(){
	
} */
/*void CHMSPatientDocument::OnDischargeDateSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDischargeDateKillfocus(){
	
} */
int CHMSPatientDocument::OnDischargeDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnMainDiseaseDiagnosticChange(){
	
} */
/*void CHMSPatientDocument::OnMainDiseaseDiagnosticSetfocus(){
	
} */
/*void CHMSPatientDocument::OnMainDiseaseDiagnosticKillfocus(){
	
} */
int CHMSPatientDocument::OnMainDiseaseDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnRelationDiseaseChange(){
	
} */
/*void CHMSPatientDocument::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSPatientDocument::OnRelationDiseaseKillfocus(){
	
} */
int CHMSPatientDocument::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnSuggestionChange(){
	
} */
/*void CHMSPatientDocument::OnSuggestionSetfocus(){
	
} */
/*void CHMSPatientDocument::OnSuggestionKillfocus(){
	
} */
int CHMSPatientDocument::OnSuggestionCheckValue(){
	return 0;
} 
void CHMSPatientDocument::OnSuggestionBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnTreatmentTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnDeptListDblClick(){
	
} 
void CHMSPatientDocument::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientDocument::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientDocument::OnDeptListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDeptList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPatientDocument::OnAdditionInfoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnAntibioticUseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnTreatmentTrackingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnPatientCareSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnClinicalRecordSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnElectronicRecordSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnExtButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientDocument::OnAddHMSPatientDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientDocument::OnEditHMSPatientDocument(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientDocument::OnDeleteHMSPatientDocument(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSPatientDocument();
 	}
	return 0;
}
int CHMSPatientDocument::OnSaveHMSPatientDocument(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPatientDocumentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientDocument::OnCancelHMSPatientDocument(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSPatientDocument::OnHMSPatientDocumentListLoadData(){
	return 0;
}
