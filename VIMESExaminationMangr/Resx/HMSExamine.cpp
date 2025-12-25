#include "HMSExamine.h"
#include "MainFrm.h"
/*static void _OnOwnerChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnOwnerChange();
} */
/*static void _OnOwnerSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnOwnerSetfocus();} */ 
/*static void _OnOwnerKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnOwnerKillfocus();
} */
static int _OnOwnerCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnOwnerCheckValue();
} 
/*static void _OnFamilyChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnFamilyChange();
} */
/*static void _OnFamilySetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnFamilySetfocus();} */ 
/*static void _OnFamilyKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnFamilyKillfocus();
} */
static int _OnFamilyCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnFamilyCheckValue();
} 
/*static void _OnDrugAllergyChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDrugAllergyChange();
} */
/*static void _OnDrugAllergySetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDrugAllergySetfocus();} */ 
/*static void _OnDrugAllergyKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDrugAllergyKillfocus();
} */
static int _OnDrugAllergyCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnDrugAllergyCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamine* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnPathologyProcessChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPathologyProcessChange();
} */
/*static void _OnPathologyProcessSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPathologyProcessSetfocus();} */ 
/*static void _OnPathologyProcessKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPathologyProcessKillfocus();
} */
static int _OnPathologyProcessCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnPathologyProcessCheckValue();
} 
/*static void _OnExamineChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnExamineChange();
} */
/*static void _OnExamineSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnExamineSetfocus();} */ 
/*static void _OnExamineKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnExamineKillfocus();
} */
static int _OnExamineCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnExamineCheckValue();
} 
/*static void _OnPulseChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPulseChange();
} */
/*static void _OnPulseSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPulseSetfocus();} */ 
/*static void _OnPulseKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPulseKillfocus();
} */
static int _OnPulseCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnPulseCheckValue();
} 
/*static void _OnTemperatureChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnTemperatureChange();
} */
/*static void _OnTemperatureSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnTemperatureSetfocus();} */ 
/*static void _OnTemperatureKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnTemperatureKillfocus();
} */
static int _OnTemperatureCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnTemperatureCheckValue();
} 
/*static void _OnBloodPressureChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBloodPressureChange();
} */
/*static void _OnBloodPressureSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBloodPressureSetfocus();} */ 
/*static void _OnBloodPressureKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBloodPressureKillfocus();
} */
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnBloodPressureCheckValue();
} 
/*static void _OnBloodPressurexChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBloodPressurexChange();
} */
/*static void _OnBloodPressurexSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBloodPressurexSetfocus();} */ 
/*static void _OnBloodPressurexKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBloodPressurexKillfocus();
} */
static int _OnBloodPressurexCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnBloodPressurexCheckValue();
} 
/*static void _OnBreathingIntervalChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBreathingIntervalChange();
} */
/*static void _OnBreathingIntervalSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBreathingIntervalSetfocus();} */ 
/*static void _OnBreathingIntervalKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnBreathingIntervalKillfocus();
} */
static int _OnBreathingIntervalCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnBreathingIntervalCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnHeightCheckValue();
} 
/*static void _OnPreDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPreDiagnosticChange();
} */
/*static void _OnPreDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPreDiagnosticSetfocus();} */ 
/*static void _OnPreDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPreDiagnosticKillfocus();
} */
static int _OnPreDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnPreDiagnosticCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnRelationDiseaseCheckValue();
} 
static void _OnICDDiagnosticSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamine* )pWnd)->OnICDDiagnosticSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDDiagnosticSelendokFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnICDDiagnosticSelendok();
}
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnICDDiagnosticKillfocus();
}*/
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnICDDiagnosticKillfocus();
}*/
static long _OnICDDiagnosticLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnICDDiagnosticLoadData();
}
/*static void _OnICDDiagnosticAddNewFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnICDDiagnosticAddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnConclusionCheckValue();
} 
static void _OnPrehistorySelectFnc(CWnd *pWnd){
	CHMSExamine *pVw = (CHMSExamine *)pWnd;
	pVw->OnPrehistorySelect();
} 
static void _OnReloadInfoSelectFnc(CWnd *pWnd){
	CHMSExamine *pVw = (CHMSExamine *)pWnd;
	pVw->OnReloadInfoSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSExamine *pVw = (CHMSExamine *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CHMSExamine *pVw = (CHMSExamine *)pWnd;
	pVw->OnTerminateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExamine *pVw = (CHMSExamine *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExamine *pVw = (CHMSExamine *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamine*)pWnd)->OnAddHMSExamine();
} 
static int _OnEditHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamine*)pWnd)->OnEditHMSExamine();
} 
static int _OnDeleteHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamine*)pWnd)->OnDeleteHMSExamine();
} 
static int _OnSaveHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamine*)pWnd)->OnSaveHMSExamine();
} 
static int _OnCancelHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamine*)pWnd)->OnCancelHMSExamine();
} 
CHMSExamine::CHMSExamine(){

	m_nDlgWidth = 655;
	m_nDlgHeight = 655;
	SetDefaultValues();
}
CHMSExamine::~CHMSExamine(){
}
void CHMSExamine::OnCreateComponents(){
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 125, 620, 550);
	m_wndDiseasePrehistory.Create(this, _T("History of disease"), 5, 5, 620, 120);
	m_wndOwnerLabel.Create(this, _T("Owner"), 10, 30, 140, 55);
	m_wndOwner.Create(this,145, 30, 615, 55); 
	m_wndFamilyLabel.Create(this, _T("Family"), 10, 60, 140, 85);
	m_wndFamily.Create(this,145, 60, 615, 85); 
	m_wndDrugAllergyLabel.Create(this, _T("DrugAllergy"), 10, 90, 140, 115);
	m_wndDrugAllergy.Create(this,145, 90, 615, 115); 
	m_wndDateLabel.Create(this, _T("Examination Date"), 10, 150, 140, 175);
	m_wndDate.Create(this,145, 150, 265, 175); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 270, 150, 350, 175);
	m_wndDoctor.Create(this,355, 150, 615, 175); 
	m_wndPathologyProcessLabel.Create(this, _T("Pathology Process"), 10, 180, 140, 205);
	m_wndPathologyProcess.Create(this,145, 180, 615, 255); 
	m_wndExamineLabel.Create(this, _T("Examine"), 10, 260, 140, 285);
	m_wndExamine.Create(this,145, 260, 615, 335); 
	m_wndPulseLabel.Create(this, _T("Pulse"), 10, 340, 140, 365);
	m_wndPulse.Create(this,145, 340, 205, 365); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 210, 340, 310, 365);
	m_wndTemperature.Create(this,315, 340, 375, 365); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 380, 340, 480, 365);
	m_wndBloodPressure.Create(this,485, 340, 545, 365); 
	m_wndBloodPressurex.Create(this,550, 340, 615, 365); 
	m_wndBreathingIntervalLabel.Create(this, _T("Breathing Interval"), 10, 370, 140, 395);
	m_wndBreathingInterval.Create(this,145, 370, 205, 395); 
	m_wndWeightLabel.Create(this, _T("Weight"), 210, 370, 310, 395);
	m_wndWeight.Create(this,315, 370, 375, 395); 
	m_wndHeightLabel.Create(this, _T("Height"), 380, 370, 480, 395);
	m_wndHeight.Create(this,485, 370, 545, 395); 
	m_wndPreDiagnosticLabel.Create(this, _T("Pre-Diagnostic"), 10, 400, 140, 425);
	m_wndPreDiagnostic.Create(this,145, 400, 615, 425); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 11, 430, 141, 455);
	m_wndRelationDisease.Create(this,146, 430, 615, 455); 
	m_wndICDDiagnosticLabel.Create(this, _T("ICD Diagnostic"), 11, 460, 141, 485);
	m_wndICDDiagnostic.Create(this,146, 460, 615, 485); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 490, 140, 515);
	m_wndConclusion.Create(this,145, 490, 615, 545); 
	m_wndPrehistory.Create(this, _T("Prehistory"), 5, 555, 95, 580);
	m_wndReloadInfo.Create(this, _T("ReloadInfo"), 100, 555, 190, 580);
	m_wndUpdate.Create(this, _T("&Update"), 245, 555, 335, 580);
	m_wndTerminate.Create(this, _T("Terminate"), 340, 555, 430, 580);
	m_wndSave.Create(this, _T("&Save"), 435, 555, 525, 580);
	m_wndCancel.Create(this, _T("&Cancel"), 530, 555, 620, 580);

}
void CHMSExamine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOwner.SetLimitText(35);
	m_wndOwner.SetCheckValue(true);
	m_wndFamily.SetLimitText(35);
	m_wndFamily.SetCheckValue(true);
	m_wndDrugAllergy.SetLimitText(35);
	m_wndDrugAllergy.SetCheckValue(true);
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndPathologyProcess.SetLimitText(35);
	m_wndPathologyProcess.SetCheckValue(true);
	m_wndExamine.SetLimitText(35);
	m_wndExamine.SetCheckValue(true);
	m_wndPulse.SetLimitText(16);
	m_wndPulse.SetCheckValue(true);
	m_wndTemperature.SetLimitText(16);
	m_wndTemperature.SetCheckValue(true);
	m_wndBloodPressure.SetLimitText(16);
	m_wndBloodPressure.SetCheckValue(true);
	m_wndBloodPressurex.SetLimitText(3);
	m_wndBloodPressurex.SetCheckValue(true);
	m_wndBreathingInterval.SetLimitText(16);
	m_wndBreathingInterval.SetCheckValue(true);
	m_wndWeight.SetLimitText(16);
	m_wndWeight.SetCheckValue(true);
	m_wndHeight.SetLimitText(16);
	m_wndHeight.SetCheckValue(true);
	m_wndPreDiagnostic.SetLimitText(35);
	m_wndPreDiagnostic.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(35);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndICDDiagnostic.SetCheckValue(true);
	m_wndICDDiagnostic.LimitText(35);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndICDDiagnostic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICDDiagnostic.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_examTbl.SetTableName(_T("hms_exam"));
	m_hms_examTbl.AddField(_T("he_createdby"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_createddate"), dfText, 4); 
	m_hms_examTbl.AddField(_T("he_updatedby"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_updateddate"), dfText, 4); 
	m_hms_examTbl.AddField(_T("he_docno"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_patientno"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_deptid"), dfText, 7); 
	m_hms_examTbl.AddField(_T("he_roomid"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_receptno"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_receptidx"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_examtype"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_hasfee"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_payment"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_status"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_examdate"), dfText, 4); 
	m_hms_examTbl.AddField(_T("he_doctor"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_reason"), dfText, 81); 
	m_hms_examTbl.AddField(_T("he_pathology"), dfText, 512); 
	m_hms_examTbl.AddField(_T("he_ownerhistory"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_familyhistory"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_examine"), dfText, 512); 
	m_hms_examTbl.AddField(_T("he_parts"), dfText, 512); 
	m_hms_examTbl.AddField(_T("he_pulse"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_temperature"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_bloodpremax"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_bloodpremin"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_weigh"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_height"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_prediagnose"), dfText, 128); 
	m_hms_examTbl.AddField(_T("he_conclusion"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_type"), dfInteger); 

}
void CHMSExamine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOwner.SetEvent(WE_CHANGE, _OnOwnerChangeFnc);
	//m_wndOwner.SetEvent(WE_SETFOCUS, _OnOwnerSetfocusFnc);
	//m_wndOwner.SetEvent(WE_KILLFOCUS, _OnOwnerKillfocusFnc);
	m_wndOwner.SetEvent(WE_CHECKVALUE, _OnOwnerCheckValueFnc);
	//m_wndFamily.SetEvent(WE_CHANGE, _OnFamilyChangeFnc);
	//m_wndFamily.SetEvent(WE_SETFOCUS, _OnFamilySetfocusFnc);
	//m_wndFamily.SetEvent(WE_KILLFOCUS, _OnFamilyKillfocusFnc);
	m_wndFamily.SetEvent(WE_CHECKVALUE, _OnFamilyCheckValueFnc);
	//m_wndDrugAllergy.SetEvent(WE_CHANGE, _OnDrugAllergyChangeFnc);
	//m_wndDrugAllergy.SetEvent(WE_SETFOCUS, _OnDrugAllergySetfocusFnc);
	//m_wndDrugAllergy.SetEvent(WE_KILLFOCUS, _OnDrugAllergyKillfocusFnc);
	m_wndDrugAllergy.SetEvent(WE_CHECKVALUE, _OnDrugAllergyCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndPathologyProcess.SetEvent(WE_CHANGE, _OnPathologyProcessChangeFnc);
	//m_wndPathologyProcess.SetEvent(WE_SETFOCUS, _OnPathologyProcessSetfocusFnc);
	//m_wndPathologyProcess.SetEvent(WE_KILLFOCUS, _OnPathologyProcessKillfocusFnc);
	m_wndPathologyProcess.SetEvent(WE_CHECKVALUE, _OnPathologyProcessCheckValueFnc);
	//m_wndExamine.SetEvent(WE_CHANGE, _OnExamineChangeFnc);
	//m_wndExamine.SetEvent(WE_SETFOCUS, _OnExamineSetfocusFnc);
	//m_wndExamine.SetEvent(WE_KILLFOCUS, _OnExamineKillfocusFnc);
	m_wndExamine.SetEvent(WE_CHECKVALUE, _OnExamineCheckValueFnc);
	//m_wndPulse.SetEvent(WE_CHANGE, _OnPulseChangeFnc);
	//m_wndPulse.SetEvent(WE_SETFOCUS, _OnPulseSetfocusFnc);
	//m_wndPulse.SetEvent(WE_KILLFOCUS, _OnPulseKillfocusFnc);
	m_wndPulse.SetEvent(WE_CHECKVALUE, _OnPulseCheckValueFnc);
	//m_wndTemperature.SetEvent(WE_CHANGE, _OnTemperatureChangeFnc);
	//m_wndTemperature.SetEvent(WE_SETFOCUS, _OnTemperatureSetfocusFnc);
	//m_wndTemperature.SetEvent(WE_KILLFOCUS, _OnTemperatureKillfocusFnc);
	m_wndTemperature.SetEvent(WE_CHECKVALUE, _OnTemperatureCheckValueFnc);
	//m_wndBloodPressure.SetEvent(WE_CHANGE, _OnBloodPressureChangeFnc);
	//m_wndBloodPressure.SetEvent(WE_SETFOCUS, _OnBloodPressureSetfocusFnc);
	//m_wndBloodPressure.SetEvent(WE_KILLFOCUS, _OnBloodPressureKillfocusFnc);
	m_wndBloodPressure.SetEvent(WE_CHECKVALUE, _OnBloodPressureCheckValueFnc);
	//m_wndBloodPressurex.SetEvent(WE_CHANGE, _OnBloodPressurexChangeFnc);
	//m_wndBloodPressurex.SetEvent(WE_SETFOCUS, _OnBloodPressurexSetfocusFnc);
	//m_wndBloodPressurex.SetEvent(WE_KILLFOCUS, _OnBloodPressurexKillfocusFnc);
	m_wndBloodPressurex.SetEvent(WE_CHECKVALUE, _OnBloodPressurexCheckValueFnc);
	//m_wndBreathingInterval.SetEvent(WE_CHANGE, _OnBreathingIntervalChangeFnc);
	//m_wndBreathingInterval.SetEvent(WE_SETFOCUS, _OnBreathingIntervalSetfocusFnc);
	//m_wndBreathingInterval.SetEvent(WE_KILLFOCUS, _OnBreathingIntervalKillfocusFnc);
	m_wndBreathingInterval.SetEvent(WE_CHECKVALUE, _OnBreathingIntervalCheckValueFnc);
	//m_wndWeight.SetEvent(WE_CHANGE, _OnWeightChangeFnc);
	//m_wndWeight.SetEvent(WE_SETFOCUS, _OnWeightSetfocusFnc);
	//m_wndWeight.SetEvent(WE_KILLFOCUS, _OnWeightKillfocusFnc);
	m_wndWeight.SetEvent(WE_CHECKVALUE, _OnWeightCheckValueFnc);
	//m_wndHeight.SetEvent(WE_CHANGE, _OnHeightChangeFnc);
	//m_wndHeight.SetEvent(WE_SETFOCUS, _OnHeightSetfocusFnc);
	//m_wndHeight.SetEvent(WE_KILLFOCUS, _OnHeightKillfocusFnc);
	m_wndHeight.SetEvent(WE_CHECKVALUE, _OnHeightCheckValueFnc);
	//m_wndPreDiagnostic.SetEvent(WE_CHANGE, _OnPreDiagnosticChangeFnc);
	//m_wndPreDiagnostic.SetEvent(WE_SETFOCUS, _OnPreDiagnosticSetfocusFnc);
	//m_wndPreDiagnostic.SetEvent(WE_KILLFOCUS, _OnPreDiagnosticKillfocusFnc);
	m_wndPreDiagnostic.SetEvent(WE_CHECKVALUE, _OnPreDiagnosticCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
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
	m_wndPrehistory.SetEvent(WE_CLICK, _OnPrehistorySelectFnc);
	m_wndReloadInfo.SetEvent(WE_CLICK, _OnReloadInfoSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExamineFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExamineFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExamineFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExamineFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExamineFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSExamine::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOwner.GetDlgCtrlID(), m_szOwner);
	DDX_Text(pDX, m_wndFamily.GetDlgCtrlID(), m_szFamily);
	DDX_Text(pDX, m_wndDrugAllergy.GetDlgCtrlID(), m_szDrugAllergy);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndPathologyProcess.GetDlgCtrlID(), m_szPathologyProcess);
	DDX_Text(pDX, m_wndExamine.GetDlgCtrlID(), m_szExamine);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_nBloodPressure);
	DDX_Text(pDX, m_wndBloodPressurex.GetDlgCtrlID(), m_nBloodPressurex);
	DDX_Text(pDX, m_wndBreathingInterval.GetDlgCtrlID(), m_nBreathingInterval);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_nWeight);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);
	DDX_Text(pDX, m_wndPreDiagnostic.GetDlgCtrlID(), m_szPreDiagnostic);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_TextEx(pDX, m_wndICDDiagnostic.GetDlgCtrlID(), m_szICDDiagnosticKey);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CHMSExamine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExamine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_examTbl.SetValue(_T("he_createdby"), pMF->GetCurrentUser());
	m_hms_examTbl.SetValue(_T("he_createddate"), pMF->GetSysDateTime());
	m_hms_examTbl.SetValue(_T("he_updatedby"), pMF->GetCurrentUser());
	m_hms_examTbl.SetValue(_T("he_updateddate"), pMF->GetSysDateTime());

}
void CHMSExamine::SetDefaultValues(){

	m_szOwner.Empty();
	m_szFamily.Empty();
	m_szDrugAllergy.Empty();
	m_szDate.Empty();
	m_szDoctorKey.Empty();
	m_szPathologyProcess.Empty();
	m_szExamine.Empty();
	m_nPulse=0;
	m_nTemperature=0;
	m_nBloodPressure=0;
	m_nBloodPressurex=0;
	m_nBreathingInterval=0;
	m_nWeight=0;
	m_nHeight=0;
	m_szPreDiagnostic.Empty();
	m_szRelationDisease.Empty();
	m_szICDDiagnosticKey.Empty();
	m_szConclusion.Empty();

}
int CHMSExamine::SetMode(int nMode){
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
/*void CHMSExamine::OnOwnerChange(){
	
} */
/*void CHMSExamine::OnOwnerSetfocus(){
	
} */
/*void CHMSExamine::OnOwnerKillfocus(){
	
} */
int CHMSExamine::OnOwnerCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnFamilyChange(){
	
} */
/*void CHMSExamine::OnFamilySetfocus(){
	
} */
/*void CHMSExamine::OnFamilyKillfocus(){
	
} */
int CHMSExamine::OnFamilyCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnDrugAllergyChange(){
	
} */
/*void CHMSExamine::OnDrugAllergySetfocus(){
	
} */
/*void CHMSExamine::OnDrugAllergyKillfocus(){
	
} */
int CHMSExamine::OnDrugAllergyCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnDateChange(){
	
} */
/*void CHMSExamine::OnDateSetfocus(){
	
} */
/*void CHMSExamine::OnDateKillfocus(){
	
} */
int CHMSExamine::OnDateCheckValue(){
	return 0;
} 
void CHMSExamine::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamine::OnDoctorSelendok(){
	 
}
/*void CHMSExamine::OnDoctorSetfocus(){
	
}*/
/*void CHMSExamine::OnDoctorKillfocus(){
	
}*/
long CHMSExamine::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDoctorKey
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExamine::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExamine::OnPathologyProcessChange(){
	
} */
/*void CHMSExamine::OnPathologyProcessSetfocus(){
	
} */
/*void CHMSExamine::OnPathologyProcessKillfocus(){
	
} */
int CHMSExamine::OnPathologyProcessCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnExamineChange(){
	
} */
/*void CHMSExamine::OnExamineSetfocus(){
	
} */
/*void CHMSExamine::OnExamineKillfocus(){
	
} */
int CHMSExamine::OnExamineCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnPulseChange(){
	
} */
/*void CHMSExamine::OnPulseSetfocus(){
	
} */
/*void CHMSExamine::OnPulseKillfocus(){
	
} */
int CHMSExamine::OnPulseCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnTemperatureChange(){
	
} */
/*void CHMSExamine::OnTemperatureSetfocus(){
	
} */
/*void CHMSExamine::OnTemperatureKillfocus(){
	
} */
int CHMSExamine::OnTemperatureCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnBloodPressureChange(){
	
} */
/*void CHMSExamine::OnBloodPressureSetfocus(){
	
} */
/*void CHMSExamine::OnBloodPressureKillfocus(){
	
} */
int CHMSExamine::OnBloodPressureCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnBloodPressurexChange(){
	
} */
/*void CHMSExamine::OnBloodPressurexSetfocus(){
	
} */
/*void CHMSExamine::OnBloodPressurexKillfocus(){
	
} */
int CHMSExamine::OnBloodPressurexCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnBreathingIntervalChange(){
	
} */
/*void CHMSExamine::OnBreathingIntervalSetfocus(){
	
} */
/*void CHMSExamine::OnBreathingIntervalKillfocus(){
	
} */
int CHMSExamine::OnBreathingIntervalCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnWeightChange(){
	
} */
/*void CHMSExamine::OnWeightSetfocus(){
	
} */
/*void CHMSExamine::OnWeightKillfocus(){
	
} */
int CHMSExamine::OnWeightCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnHeightChange(){
	
} */
/*void CHMSExamine::OnHeightSetfocus(){
	
} */
/*void CHMSExamine::OnHeightKillfocus(){
	
} */
int CHMSExamine::OnHeightCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnPreDiagnosticChange(){
	
} */
/*void CHMSExamine::OnPreDiagnosticSetfocus(){
	
} */
/*void CHMSExamine::OnPreDiagnosticKillfocus(){
	
} */
int CHMSExamine::OnPreDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSExamine::OnRelationDiseaseChange(){
	
} */
/*void CHMSExamine::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSExamine::OnRelationDiseaseKillfocus(){
	
} */
int CHMSExamine::OnRelationDiseaseCheckValue(){
	return 0;
} 
void CHMSExamine::OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamine::OnICDDiagnosticSelendok(){
	 
}
/*void CHMSExamine::OnICDDiagnosticSetfocus(){
	
}*/
/*void CHMSExamine::OnICDDiagnosticKillfocus(){
	
}*/
long CHMSExamine::OnICDDiagnosticLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICDDiagnostic.IsSearchKey() && !m_szICDDiagnosticKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szICDDiagnosticKey
};
	m_wndICDDiagnostic.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
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
/*void CHMSExamine::OnICDDiagnosticAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExamine::OnConclusionChange(){
	
} */
/*void CHMSExamine::OnConclusionSetfocus(){
	
} */
/*void CHMSExamine::OnConclusionKillfocus(){
	
} */
int CHMSExamine::OnConclusionCheckValue(){
	return 0;
} 
void CHMSExamine::OnPrehistorySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamine::OnReloadInfoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamine::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamine::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamine::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamine::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExamine::OnAddHMSExamine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExamine::OnEditHMSExamine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExamine::OnDeleteHMSExamine(){
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
 		OnCancelHMSExamine();
 	}
	return 0;
}
int CHMSExamine::OnSaveHMSExamine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_examTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_examTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSExamineListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExamine::OnCancelHMSExamine(){
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
int CHMSExamine::OnHMSExamineListLoadData(){
	return 0;
}
