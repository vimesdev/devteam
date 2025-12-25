#include "HMSPatientDocument2.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnSexCheckValue();
} 
/*static void _OnEthnicChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnEthnicChange();
} */
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnEthnicSetfocus();} */ 
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnEthnicKillfocus();
} */
static int _OnEthnicCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnEthnicCheckValue();
} 
/*static void _OnOccupationChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnOccupationChange();
} */
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnOccupationSetfocus();} */ 
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnOccupationCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnWorkplaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardInfoBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocument2 *pVw = (CHMSPatientDocument2 *)pWnd;
	pVw->OnCardInfoBtnSelect();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnFinishedDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnFinishedDateChange();
} */
/*static void _OnFinishedDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnFinishedDateSetfocus();} */ 
/*static void _OnFinishedDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnFinishedDateKillfocus();
} */
static int _OnFinishedDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnFinishedDateCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnConclusionCheckValue();
} 
/*static void _OnICDChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnICDChange();
} */
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnICDSetfocus();} */ 
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnICDKillfocus();
} */
static int _OnICDCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnICDCheckValue();
} 
/*static void _OnSuggestionChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnSuggestionChange();
} */
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnSuggestionSetfocus();} */ 
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument2 *)pWnd)->OnSuggestionKillfocus();
} */
static int _OnSuggestionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument2 *)pWnd)->OnSuggestionCheckValue();
} 
static void _OnSuggestionBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocument2 *pVw = (CHMSPatientDocument2 *)pWnd;
	pVw->OnSuggestionBtnSelect();
} 
static void _OnExaminationTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPatientDocument2*)pWnd)->OnExaminationTabSelectChange(nOld, nNew);
} 
static int _OnAddHMSPatientDocument2Fnc(CWnd *pWnd){
	 return ((CHMSPatientDocument2*)pWnd)->OnAddHMSPatientDocument2();
} 
static int _OnEditHMSPatientDocument2Fnc(CWnd *pWnd){
	 return ((CHMSPatientDocument2*)pWnd)->OnEditHMSPatientDocument2();
} 
static int _OnDeleteHMSPatientDocument2Fnc(CWnd *pWnd){
	 return ((CHMSPatientDocument2*)pWnd)->OnDeleteHMSPatientDocument2();
} 
static int _OnSaveHMSPatientDocument2Fnc(CWnd *pWnd){
	 return ((CHMSPatientDocument2*)pWnd)->OnSaveHMSPatientDocument2();
} 
static int _OnCancelHMSPatientDocument2Fnc(CWnd *pWnd){
	 return ((CHMSPatientDocument2*)pWnd)->OnCancelHMSPatientDocument2();
} 
CHMSPatientDocument2::CHMSPatientDocument2(){

	m_nDlgWidth = 795;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSPatientDocument2::~CHMSPatientDocument2(){
}
void CHMSPatientDocument2::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 357, 245);
	m_wndExaminationInformation.Create(this, _T("Treatment Information"), 5, 250, 357, 454);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 8, 28, 93, 50);
	m_wndPatientNo.Create(this,98, 28, 173, 50); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 178, 28, 258, 50);
	m_wndDocumentNo.Create(this,263, 28, 353, 50); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 8, 55, 93, 77);
	m_wndPatientName.Create(this,98, 55, 353, 77); 
	m_wndAgeLabel.Create(this, _T("Age"), 8, 82, 93, 104);
	m_wndAge.Create(this,98, 82, 173, 104); 
	m_wndSexLabel.Create(this, _T("Sex"), 178, 82, 258, 104);
	m_wndSex.Create(this,263, 82, 353, 104); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 8, 109, 93, 131);
	m_wndEthnic.Create(this,98, 109, 173, 131); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 178, 109, 258, 131);
	m_wndOccupation.Create(this,263, 109, 353, 131); 
	m_wndAddressLabel.Create(this, _T("Address"), 8, 136, 93, 158);
	m_wndAddress.Create(this,98, 136, 353, 158); 
	m_wndDetailAddrlLabel.Create(this, _T("Detail Address"), 8, 163, 93, 185);
	m_wndDetailAddress.Create(this,98, 163, 353, 185); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 8, 190, 93, 212);
	m_wndWorkplace.Create(this,98, 190, 353, 212); 
	m_wndObjectLabel.Create(this, _T("Object"), 8, 217, 93, 239);
	m_wndObject.Create(this,98, 217, 173, 239); 
	m_wndCardNo.Create(this,178, 217, 326, 239); 
	m_wndCardInfoBtn.Create(this, _T("..."), 331, 217, 353, 239);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 178, 274, 258, 296);
	m_wndDoctor.Create(this,263, 274, 353, 296); 
	m_wndStatusLabel.Create(this, _T("Status"), 8, 274, 93, 296);
	m_wndStatus.Create(this,98, 274, 173, 296); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 8, 301, 93, 323);
	m_wndExamDate.Create(this,98, 301, 173, 323); 
	m_wndFinishedDateLabel.Create(this, _T("Finished Date"), 178, 301, 258, 323);
	m_wndFinishedDate.Create(this,263, 301, 353, 323); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 8, 328, 93, 394);
	m_wndConclusion.Create(this,98, 328, 353, 394); 
	m_wndICDLabel.Create(this, _T("ICD10"), 8, 399, 93, 421);
	m_wndICD.Create(this,98, 399, 353, 421); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 8, 426, 93, 448);
	m_wndSuggestion.Create(this,98, 426, 325, 448); 
	m_wndSuggestionBtn.Create(this, _T("..."), 330, 426, 352, 448);
	m_wndExaminationTab.Create(this,361, 5, 790, 455); 

}
void CHMSPatientDocument2::OnInitializeComponents(){
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
	m_wndSex.SetLimitText(1024);
	m_wndSex.SetCheckValue(true);
	m_wndEthnic.SetLimitText(1024);
	m_wndEthnic.SetCheckValue(true);
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
	m_wndFinishedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFinishedDate.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);
	m_wndICD.SetLimitText(35);
	m_wndICD.SetCheckValue(true);
	m_wndSuggestion.SetLimitText(35);
	m_wndSuggestion.SetCheckValue(true);

}
void CHMSPatientDocument2::OnSetWindowEvents(){
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
	//m_wndFinishedDate.SetEvent(WE_CHANGE, _OnFinishedDateChangeFnc);
	//m_wndFinishedDate.SetEvent(WE_SETFOCUS, _OnFinishedDateSetfocusFnc);
	//m_wndFinishedDate.SetEvent(WE_KILLFOCUS, _OnFinishedDateKillfocusFnc);
	m_wndFinishedDate.SetEvent(WE_CHECKVALUE, _OnFinishedDateCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	//m_wndICD.SetEvent(WE_CHANGE, _OnICDChangeFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_CHECKVALUE, _OnICDCheckValueFnc);
	//m_wndSuggestion.SetEvent(WE_CHANGE, _OnSuggestionChangeFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_CHECKVALUE, _OnSuggestionCheckValueFnc);
	m_wndSuggestionBtn.SetEvent(WE_CLICK, _OnSuggestionBtnSelectFnc);
	m_wndExaminationTab.SetEvent(WE_SELCHANGE, _OnExaminationTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientDocument2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientDocument2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientDocument2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientDocument2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientDocument2Fnc, 0, 'T', VK_CONTROL);

}
void CHMSPatientDocument2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnic);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_TextEx(pDX, m_wndFinishedDate.GetDlgCtrlID(), m_szFinishedDate);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_Text(pDX, m_wndICD.GetDlgCtrlID(), m_szICD);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);

}
void CHMSPatientDocument2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientDocument2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientDocument2::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szEthnic.Empty();
	m_szOccupation.Empty();
	m_szAddress.Empty();
	m_szDetailAddress.Empty();
	m_szWorkplace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szDoctor.Empty();
	m_szStatus.Empty();
	m_szExamDate.Empty();
	m_szFinishedDate.Empty();
	m_szConclusion.Empty();
	m_szICD.Empty();
	m_szSuggestion.Empty();

}
int CHMSPatientDocument2::SetMode(int nMode){ 
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
/*void CHMSPatientDocument2::OnPatientNoChange(){
	
} */
/*void CHMSPatientDocument2::OnPatientNoSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnPatientNoKillfocus(){
	
} */
int CHMSPatientDocument2::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDocument2::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDocument2::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnPatientNameChange(){
	
} */
/*void CHMSPatientDocument2::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnPatientNameKillfocus(){
	
} */
int CHMSPatientDocument2::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnAgeChange(){
	
} */
/*void CHMSPatientDocument2::OnAgeSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnAgeKillfocus(){
	
} */
int CHMSPatientDocument2::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnSexChange(){
	
} */
/*void CHMSPatientDocument2::OnSexSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnSexKillfocus(){
	
} */
int CHMSPatientDocument2::OnSexCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnEthnicChange(){
	
} */
/*void CHMSPatientDocument2::OnEthnicSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnEthnicKillfocus(){
	
} */
int CHMSPatientDocument2::OnEthnicCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnOccupationChange(){
	
} */
/*void CHMSPatientDocument2::OnOccupationSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnOccupationKillfocus(){
	
} */
int CHMSPatientDocument2::OnOccupationCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnAddressChange(){
	
} */
/*void CHMSPatientDocument2::OnAddressSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnAddressKillfocus(){
	
} */
int CHMSPatientDocument2::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnDetailAddressChange(){
	
} */
/*void CHMSPatientDocument2::OnDetailAddressSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnDetailAddressKillfocus(){
	
} */
int CHMSPatientDocument2::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnWorkplaceChange(){
	
} */
/*void CHMSPatientDocument2::OnWorkplaceSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnWorkplaceKillfocus(){
	
} */
int CHMSPatientDocument2::OnWorkplaceCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnObjectChange(){
	
} */
/*void CHMSPatientDocument2::OnObjectSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnObjectKillfocus(){
	
} */
int CHMSPatientDocument2::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnCardNoChange(){
	
} */
/*void CHMSPatientDocument2::OnCardNoSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnCardNoKillfocus(){
	
} */
int CHMSPatientDocument2::OnCardNoCheckValue(){
	return 0;
} 
void CHMSPatientDocument2::OnCardInfoBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPatientDocument2::OnDoctorChange(){
	
} */
/*void CHMSPatientDocument2::OnDoctorSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnDoctorKillfocus(){
	
} */
int CHMSPatientDocument2::OnDoctorCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnStatusChange(){
	
} */
/*void CHMSPatientDocument2::OnStatusSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnStatusKillfocus(){
	
} */
int CHMSPatientDocument2::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnExamDateChange(){
	
} */
/*void CHMSPatientDocument2::OnExamDateSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnExamDateKillfocus(){
	
} */
int CHMSPatientDocument2::OnExamDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnFinishedDateChange(){
	
} */
/*void CHMSPatientDocument2::OnFinishedDateSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnFinishedDateKillfocus(){
	
} */
int CHMSPatientDocument2::OnFinishedDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnConclusionChange(){
	
} */
/*void CHMSPatientDocument2::OnConclusionSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnConclusionKillfocus(){
	
} */
int CHMSPatientDocument2::OnConclusionCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnICDChange(){
	
} */
/*void CHMSPatientDocument2::OnICDSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnICDKillfocus(){
	
} */
int CHMSPatientDocument2::OnICDCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument2::OnSuggestionChange(){
	
} */
/*void CHMSPatientDocument2::OnSuggestionSetfocus(){
	
} */
/*void CHMSPatientDocument2::OnSuggestionKillfocus(){
	
} */
int CHMSPatientDocument2::OnSuggestionCheckValue(){
	return 0;
} 
void CHMSPatientDocument2::OnSuggestionBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument2::OnExaminationTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientDocument2::OnAddHMSPatientDocument2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPatientDocument2"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPatientDocument2::OnEditHMSPatientDocument2(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPatientDocument2"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPatientDocument2::OnDeleteHMSPatientDocument2(){
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
 		OnCancelHMSPatientDocument2(); 
 	}
return 0;
 } 
int CHMSPatientDocument2::OnSaveHMSPatientDocument2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSPatientDocument2ListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientDocument2::OnCancelHMSPatientDocument2(){
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
int CHMSPatientDocument2::OnHMSPatientDocument2ListLoadData(){
	return 0;
}
