#include "HMSExaminationDocument.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnPatientNoChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnPatientNoChange();
} */
/*static int _OnPatientNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnPatientNoKillfocus();} */ 
/*static int _OnPatientNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnPatientNoCheckValue();
} 
/*static int _OnDocumentNoChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDocumentNoChange();
} */
/*static int _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDocumentNoKillfocus();} */ 
/*static int _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDocumentNoCheckValue();
} 
/*static int _OnPatientNameChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnPatientNameChange();
} */
/*static int _OnPatientNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnPatientNameKillfocus();} */ 
/*static int _OnPatientNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnPatientNameCheckValue();
} 
/*static int _OnAgeChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnAgeChange();
} */
/*static int _OnAgeSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnAgeKillfocus();} */ 
/*static int _OnAgeKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnAgeCheckValue();
} 
/*static int _OnBirthDateChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnBirthDateChange();
} */
/*static int _OnBirthDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnBirthDateKillfocus();} */ 
/*static int _OnBirthDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnBirthDateCheckValue();
} 
/*static int _OnSexChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnSexChange();
} */
/*static int _OnSexSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnSexKillfocus();} */ 
/*static int _OnSexKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnSexCheckValue();
} 
/*static int _OnNationChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnNationChange();
} */
/*static int _OnNationSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnNationKillfocus();} */ 
/*static int _OnNationKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnNationKillfocus();
} */
static int _OnNationCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnNationCheckValue();
} 
/*static int _OnOccupationChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnOccupationChange();
} */
/*static int _OnOccupationSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnOccupationKillfocus();} */ 
/*static int _OnOccupationKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnOccupationCheckValue();
} 
/*static int _OnAddressChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnAddressChange();
} */
/*static int _OnAddressSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnAddressKillfocus();} */ 
/*static int _OnAddressKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnAddressCheckValue();
} 
/*static int _OnDetailAddressChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDetailAddressChange();
} */
/*static int _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDetailAddressKillfocus();} */ 
/*static int _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDetailAddressCheckValue();
} 
/*static int _OnWorkplaceChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnWorkplaceChange();
} */
/*static int _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnWorkplaceKillfocus();} */ 
/*static int _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnWorkplaceCheckValue();
} 
/*static int _OnObjectChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnObjectChange();
} */
/*static int _OnObjectSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnObjectKillfocus();} */ 
/*static int _OnObjectKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnObjectCheckValue();
} 
/*static int _OnCardNoChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnCardNoChange();
} */
/*static int _OnCardNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnCardNoKillfocus();} */ 
/*static int _OnCardNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnCardNoCheckValue();
} 
static int _OnCardInfoBtnSelectFnc(CWnd *pWnd){
	CHMSExaminationDocument *pVw = (CHMSExaminationDocument *)pWnd;
	return pVw->OnCardInfoBtnSelect();
} 
/*static int _OnDoctorChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDoctorChange();
} */
/*static int _OnDoctorSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDoctorKillfocus();} */ 
/*static int _OnDoctorKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDoctorCheckValue();
} 
/*static int _OnStatusChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnStatusChange();
} */
/*static int _OnStatusSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnStatusKillfocus();} */ 
/*static int _OnStatusKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnStatusCheckValue();
} 
/*static int _OnExamDateChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnExamDateChange();
} */
/*static int _OnExamDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnExamDateKillfocus();} */ 
/*static int _OnExamDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnExamDateCheckValue();
} 
/*static int _OnTerminatedDateChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnTerminatedDateChange();
} */
/*static int _OnTerminatedDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnTerminatedDateKillfocus();} */ 
/*static int _OnTerminatedDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnTerminatedDateKillfocus();
} */
static int _OnTerminatedDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnTerminatedDateCheckValue();
} 
/*static int _OnResultChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnResultChange();
} */
/*static int _OnResultSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnResultKillfocus();} */ 
/*static int _OnResultKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnResultCheckValue();
} 
/*static int _OnICDChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnICDChange();
} */
/*static int _OnICDSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnICDKillfocus();} */ 
/*static int _OnICDKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnICDKillfocus();
} */
static int _OnICDCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnICDCheckValue();
} 
/*static int _OnConcludeChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnConcludeChange();
} */
/*static int _OnConcludeSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnConcludeKillfocus();} */ 
/*static int _OnConcludeKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnConcludeKillfocus();
} */
static int _OnConcludeCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnConcludeCheckValue();
} 
static int _OnConcludeBtnSelectFnc(CWnd *pWnd){
	CHMSExaminationDocument *pVw = (CHMSExaminationDocument *)pWnd;
	return pVw->OnConcludeBtnSelect();
} 
/*static int _OnDescriptionChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDescriptionChange();
} */
/*static int _OnDescriptionSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDescriptionKillfocus();} */ 
/*static int _OnDescriptionKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument *)pWnd)->OnDescriptionCheckValue();
} 
static int _OnExaminationTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	 return ((CHMSExaminationDocument*)pWnd)->OnExaminationTabSelectChange(nOld, nNew);
} 
static int _OnAddHMSExaminationDocumentFnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument*)pWnd)->OnAddHMSExaminationDocument();
} 
static int _OnEditHMSExaminationDocumentFnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument*)pWnd)->OnEditHMSExaminationDocument();
} 
static int _OnDeleteHMSExaminationDocumentFnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument*)pWnd)->OnDeleteHMSExaminationDocument();
} 
static int _OnSaveHMSExaminationDocumentFnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument*)pWnd)->OnSaveHMSExaminationDocument();
} 
static int _OnCancelHMSExaminationDocumentFnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument*)pWnd)->OnCancelHMSExaminationDocument();
} 
CHMSExaminationDocument::CHMSExaminationDocument(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 455;
	SetDefaultValues();
}
CHMSExaminationDocument::~CHMSExaminationDocument(){
}
void CHMSExaminationDocument::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 337, 240);
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 245, 337, 448);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 8, 24, 81, 46);
	m_wndPatientNo.Create(this,86, 24, 156, 46); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 161, 24, 226, 46);
	m_wndDocumentNo.Create(this,231, 24, 288, 46); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 8, 51, 81, 73);
	m_wndPatientName.Create(this,86, 51, 333, 73); 
	m_wndAgeLabel.Create(this, _T("Age"), 161, 78, 226, 100);
	m_wndAge.Create(this,231, 78, 261, 100); 
	m_wndBirthDate.Create(this,266, 78, 333, 100); 
	m_wndSexLabel.Create(this, _T("Sex"), 8, 78, 81, 100);
	m_wndSex.Create(this,86, 78, 156, 100); 
	m_wndNationLabel.Create(this, _T("Nation"), 8, 105, 81, 127);
	m_wndNation.Create(this,86, 105, 156, 127); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 161, 105, 226, 127);
	m_wndOccupation.Create(this,231, 105, 333, 127); 
	m_wndAddressLabel.Create(this, _T("Address"), 8, 132, 81, 154);
	m_wndAddress.Create(this,86, 132, 333, 154); 
	m_wndDetailAddrlLabel.Create(this, _T("Detail Address"), 8, 159, 81, 181);
	m_wndDetailAddress.Create(this,86, 159, 333, 181); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 8, 186, 81, 208);
	m_wndWorkplace.Create(this,86, 186, 333, 208); 
	m_wndObjectLabel.Create(this, _T("Object"), 8, 213, 81, 235);
	m_wndObject.Create(this,86, 213, 156, 235); 
	m_wndCardNo.Create(this,161, 213, 306, 235); 
	m_wndCardInfoBtn.Create(this, _T("..."), 311, 213, 333, 235);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 8, 265, 81, 287);
	m_wndDoctor.Create(this,86, 265, 186, 287); 
	m_wndStatusLabel.Create(this, _T("Status"), 191, 265, 243, 287);
	m_wndStatus.Create(this,248, 265, 333, 287); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 8, 292, 81, 314);
	m_wndExamDate.Create(this,86, 292, 156, 314); 
	m_wndTermDateLabel.Create(this, _T("Terminated Date"), 161, 292, 243, 314);
	m_wndTerminatedDate.Create(this,248, 292, 333, 314); 
	m_wndResultLabel.Create(this, _T("Result"), 8, 319, 81, 341);
	m_wndResult.Create(this,86, 319, 333, 363); 
	m_wndICDLabel.Create(this, _T("ICD 10"), 8, 368, 81, 390);
	m_wndICD.Create(this,86, 368, 333, 390); 
	m_wndConcludeLabel.Create(this, _T("Conclude"), 8, 395, 81, 417);
	m_wndConclude.Create(this,86, 395, 306, 417); 
	m_wndConcludeBtn.Create(this, _T("..."), 311, 395, 333, 417);
	m_wndDescriptionLabel.Create(this, _T("Description"), 8, 422, 81, 444);
	m_wndDescription.Create(this,86, 422, 333, 444); 
	m_wndExaminationTab.Create(this,342, 5, 750, 448); 

}
void CHMSExaminationDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetLimitText(1024);
	m_wndSex.SetCheckValue(true);
	m_wndNation.SetLimitText(1024);
	m_wndNation.SetCheckValue(true);
	m_wndOccupation.SetLimitText(1024);
	m_wndOccupation.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndDetailAddress.SetLimitText(1024);
	m_wndDetailAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(1024);
	m_wndWorkplace.SetCheckValue(true);
	m_wndObject.SetLimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndCardNo.SetLimitText(18);
	m_wndCardNo.SetCheckValue(true);
	m_wndDoctor.SetLimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndExamDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExamDate.SetCheckValue(true);
	m_wndTerminatedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndTerminatedDate.SetCheckValue(true);
	m_wndResult.SetLimitText(35);
	m_wndResult.SetCheckValue(true);
	m_wndICD.SetLimitText(35);
	m_wndICD.SetCheckValue(true);
	m_wndConclude.SetLimitText(35);
	m_wndConclude.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);

}
void CHMSExaminationDocument::OnSetWindowEvents(){
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
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndNation.SetEvent(WE_CHANGE, _OnNationChangeFnc);
	//m_wndNation.SetEvent(WE_SETFOCUS, _OnNationSetfocusFnc);
	//m_wndNation.SetEvent(WE_KILLFOCUS, _OnNationKillfocusFnc);
	m_wndNation.SetEvent(WE_CHECKVALUE, _OnNationCheckValueFnc);
	//m_wndOccupation.SetEvent(WE_CHANGE, _OnOccupationChangeFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_CHECKVALUE, _OnOccupationCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDetailAddress.SetEvent(WE_CHANGE, _OnDetailAddressChangeFnc);
	//m_wndDetailAddress.SetEvent(WE_SETFOCUS, _OnDetailAddressSetfocusFnc);
	//m_wndDetailAddress.SetEvent(WE_KILLFOCUS, _OnDetailAddressKillfocusFnc);
	m_wndDetailAddress.SetEvent(WE_CHECKVALUE, _OnDetailAddressCheckValueFnc);
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
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndTerminatedDate.SetEvent(WE_CHANGE, _OnTerminatedDateChangeFnc);
	//m_wndTerminatedDate.SetEvent(WE_SETFOCUS, _OnTerminatedDateSetfocusFnc);
	//m_wndTerminatedDate.SetEvent(WE_KILLFOCUS, _OnTerminatedDateKillfocusFnc);
	m_wndTerminatedDate.SetEvent(WE_CHECKVALUE, _OnTerminatedDateCheckValueFnc);
	//m_wndResult.SetEvent(WE_CHANGE, _OnResultChangeFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);
	//m_wndICD.SetEvent(WE_CHANGE, _OnICDChangeFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_CHECKVALUE, _OnICDCheckValueFnc);
	//m_wndConclude.SetEvent(WE_CHANGE, _OnConcludeChangeFnc);
	//m_wndConclude.SetEvent(WE_SETFOCUS, _OnConcludeSetfocusFnc);
	//m_wndConclude.SetEvent(WE_KILLFOCUS, _OnConcludeKillfocusFnc);
	m_wndConclude.SetEvent(WE_CHECKVALUE, _OnConcludeCheckValueFnc);
	m_wndConcludeBtn.SetEvent(WE_CLICK, _OnConcludeBtnSelectFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndExaminationTab.SetEvent(WE_SELCHANGE, _OnExaminationTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationDocumentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationDocumentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationDocumentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationDocumentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationDocumentFnc, 0, 'T', VK_CONTROL);

}
void CHMSExaminationDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndNation.GetDlgCtrlID(), m_szNation);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_TextEx(pDX, m_wndTerminatedDate.GetDlgCtrlID(), m_szTerminatedDate);
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
	DDX_Text(pDX, m_wndICD.GetDlgCtrlID(), m_szICD);
	DDX_Text(pDX, m_wndConclude.GetDlgCtrlID(), m_szConclude);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSExaminationDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExaminationDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExaminationDocument::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szBirthDate.Empty();
	m_szSex.Empty();
	m_szNation.Empty();
	m_szOccupation.Empty();
	m_szAddress.Empty();
	m_szDetailAddress.Empty();
	m_szWorkplace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szDoctor.Empty();
	m_szStatus.Empty();
	m_szExamDate.Empty();
	m_szTerminatedDate.Empty();
	m_szResult.Empty();
	m_szICD.Empty();
	m_szConclude.Empty();
	m_szDescription.Empty();

}
int CHMSExaminationDocument::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
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
/*int CHMSExaminationDocument::OnPatientNoChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnPatientNoSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnPatientNoKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnPatientNoCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnDocumentNoChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnDocumentNoSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnDocumentNoKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnDocumentNoCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnPatientNameChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnPatientNameSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnPatientNameKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnPatientNameCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnAgeChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnAgeSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnAgeKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnAgeCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnBirthDateChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnBirthDateSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnBirthDateKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnBirthDateCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnSexChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnSexSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnSexKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnSexCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnNationChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnNationSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnNationKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnNationCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnOccupationChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnOccupationSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnOccupationKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnOccupationCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnAddressChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnAddressSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnAddressKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnAddressCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnDetailAddressChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnDetailAddressSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnDetailAddressKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnDetailAddressCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnWorkplaceChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnWorkplaceSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnWorkplaceKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnWorkplaceCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnObjectChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnObjectSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnObjectKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnObjectCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnCardNoChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnCardNoSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnCardNoKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnCardNoCheckValue(){
	return 0;
} 
int CHMSExaminationDocument::OnCardInfoBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
/*int CHMSExaminationDocument::OnDoctorChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnDoctorSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnDoctorKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnDoctorCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnStatusChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnStatusSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnStatusKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnStatusCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnExamDateChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnExamDateSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnExamDateKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnExamDateCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnTerminatedDateChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnTerminatedDateSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnTerminatedDateKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnTerminatedDateCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnResultChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnResultSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnResultKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnResultCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnICDChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnICDSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnICDKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnICDCheckValue(){
	return 0;
} 
/*int CHMSExaminationDocument::OnConcludeChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnConcludeSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnConcludeKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnConcludeCheckValue(){
	return 0;
} 
int CHMSExaminationDocument::OnConcludeBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
/*int CHMSExaminationDocument::OnDescriptionChange(){
	return 0;
} */
/*int CHMSExaminationDocument::OnDescriptionSetfocus(){
	return 0;
} */
/*int CHMSExaminationDocument::OnDescriptionKillfocus(){
	return 0;
} */
int CHMSExaminationDocument::OnDescriptionCheckValue(){
	return 0;
} 
int CHMSExaminationDocument::OnExaminationTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationDocument::OnAddHMSExaminationDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSExaminationDocument"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSExaminationDocument::OnEditHMSExaminationDocument(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSExaminationDocument"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSExaminationDocument::OnDeleteHMSExaminationDocument(){
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
 		OnCancelHMSExaminationDocument(); 
 	}
return 0;
 } 
int CHMSExaminationDocument::OnSaveHMSExaminationDocument(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSExaminationDocumentListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExaminationDocument::OnCancelHMSExaminationDocument(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSExaminationDocument::OnHMSExaminationDocumentListLoadData(){
	return 0;
}
