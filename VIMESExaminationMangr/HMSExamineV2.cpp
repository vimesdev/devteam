#include "HMSExamineV2.h"
#include "MainFrm.h"
#include "HMSTerminateDocumentDialog.h"
#include "HMSDiseasePrehistoryDialog.h"
#include "HMSAdmissionClinicalDialog.h"
#include "HeathExamDialog.h"
#include "HMSDocumentPreviewDialog.h"
#include "HMSNoteExtendDlg.h"

static void _OnConclusionLabelSelectFnc(CWnd *pWnd)
{
	((CHMSExamineV2 *)pWnd)->OnConclusionSelect();
}
static int _OnTienluongCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnTienluongCheckValue();
} 

/*static void _OnOwnerChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnOwnerChange();
} */
/*static void _OnOwnerSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnOwnerSetfocus();} */ 
/*static void _OnOwnerKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnOwnerKillfocus();
} */
static int _OnOwnerCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSExamineV2 *)pWnd)->OnOwnerCheckValue();
} 
/*static void _OnFamilyChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnFamilyChange();
} */
/*static void _OnFamilySetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnFamilySetfocus();} */ 
/*static void _OnFamilyKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnFamilyKillfocus();
} */
static int _OnFamilyCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnFamilyCheckValue();
} 
/*static void _OnDrugAllergyChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDrugAllergyChange();
} */
/*static void _OnDrugAllergySetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDrugAllergySetfocus();} */ 
/*static void _OnDrugAllergyKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDrugAllergyKillfocus();
} */
static int _OnDrugAllergyCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnDrugAllergyCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnDateCheckValue();
} 


static void _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamineV2* )pWnd)->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamTypeSelendokFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnExamTypeSelendok();
}
/*static void _OnExamTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnExamTypeKillfocus();
}*/
/*static void _OnExamTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnExamTypeKillfocus();
}*/
static long _OnExamTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnExamTypeAddNewFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnExamTypeAddNew();
}*/


static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamineV2* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnDoctorAddNew();
}*/

static int _OnLydovaovienCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnLydovaovienCheckValue();
}

static void _OnPathologyProcessLabelSelectFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPathologyProcessLabelSelect();
}

/*static void _OnPathologyProcessChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPathologyProcessChange();
} */
/*static void _OnPathologyProcessSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPathologyProcessSetfocus();} */ 
/*static void _OnPathologyProcessKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPathologyProcessKillfocus();
} */
static int _OnPathologyProcessCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnPathologyProcessCheckValue();
} 

static void _OnExamineLabelSelectFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnExamineLabelSelect();
}
/*static void _OnExamineChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnExamineChange();
} */
/*static void _OnExamineSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnExamineSetfocus();} */ 
/*static void _OnExamineKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnExamineKillfocus();
} */
static int _OnExamineCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnExamineCheckValue();
} 
/*static void _OnPulseChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPulseChange();
} */
/*static void _OnPulseSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPulseSetfocus();} */ 
/*static void _OnPulseKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPulseKillfocus();
} */
static int _OnPulseCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnPulseCheckValue();
} 
/*static void _OnTemperatureChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnTemperatureChange();
} */
/*static void _OnTemperatureSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnTemperatureSetfocus();} */ 
/*static void _OnTemperatureKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnTemperatureKillfocus();
} */
static int _OnTemperatureCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnTemperatureCheckValue();
} 
/*static void _OnBloodPressureChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBloodPressureChange();
} */
/*static void _OnBloodPressureSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBloodPressureSetfocus();} */ 
/*static void _OnBloodPressureKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBloodPressureKillfocus();
} */
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnBloodPressureCheckValue();
} 
/*static void _OnBloodPressurexChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBloodPressurexChange();
} */
/*static void _OnBloodPressurexSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBloodPressurexSetfocus();} */ 
/*static void _OnBloodPressurexKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBloodPressurexKillfocus();
} */
static int _OnBloodPressurexCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnBloodPressurexCheckValue();
} 
/*static void _OnBreathingIntervalChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBreathingIntervalChange();
} */
/*static void _OnBreathingIntervalSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBreathingIntervalSetfocus();} */ 
/*static void _OnBreathingIntervalKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnBreathingIntervalKillfocus();
} */
static int _OnBreathingIntervalCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnBreathingIntervalCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnHeightCheckValue();
} 
/*static void _OnPreDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPreDiagnosticChange();
} */
/*static void _OnPreDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPreDiagnosticSetfocus();} */ 
/*static void _OnPreDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnPreDiagnosticKillfocus();
} */
static int _OnPreDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnPreDiagnosticCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnRelationDiseaseCheckValue();
} 
static void _OnICDDiagnosticSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamineV2* )pWnd)->OnICDDiagnosticSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDDiagnosticSelendokFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnICDDiagnosticSelendok();
}
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnICDDiagnosticKillfocus();
}*/
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnICDDiagnosticKillfocus();
}*/
static long _OnICDDiagnosticLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnICDDiagnosticLoadData();
}
/*static void _OnICDDiagnosticAddNewFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnICDDiagnosticAddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnConclusionChange();
} */
static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnConclusionSetfocus();} 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnConclusionCheckValue();
} 
static void _OnCallPatientSelectFnc(CWnd *pWnd){
	CHMSExamineV2 *pVw = (CHMSExamineV2 *)pWnd;
	pVw->OnCallPatientSelect();
}
static void _OnPrehistorySelectFnc(CWnd *pWnd){
	CHMSExamineV2 *pVw = (CHMSExamineV2 *)pWnd;
	pVw->OnPrehistorySelect();
} 

static void _OnCallInSelectFnc(CWnd *pWnd){
	CHMSExamineV2 *pVw = (CHMSExamineV2 *)pWnd;
	pVw->OnCallInSelect();
}

static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSExamineV2 *pVw = (CHMSExamineV2 *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CHMSExamineV2 *pVw = (CHMSExamineV2 *)pWnd;
	pVw->OnTerminateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExamineV2 *pVw = (CHMSExamineV2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExamineV2 *pVw = (CHMSExamineV2 *)pWnd;
	pVw->OnCancelSelect();
}
static void _OnReloadInfoSelectFnc(CWnd *pWnd){
	CHMSExamineV2 *pVw = (CHMSExamineV2 *)pWnd;
	pVw->OnReloadInfoSelect();
}
static int _OnUpdateDiseasePrehistoryFnc(CWnd *pWnd){
	 return ((CHMSExamineV2*)pWnd)->OnUpdateDiseasePrehistory();
} 
static int _OnCertificateofphysicaleyeclinicFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnCertificateofphysicaleyeclinic();
}
static int	_OnDeleteExamineFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnDeleteHMSExamine();
}
static int _OnMedicalexamsFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnMedicalexams();
}

static int	_OnGeneralRankExamineFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnGeneralRankExamine();
}
static int	_OnGeneralRankExamine2Fnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnGeneralRankExamine2();
}
static int	_OnGeneralRankExamine3Fnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnGeneralRankExamine3();
}
static int	_OnHealthExaminationFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnHealthExamination();
}
static int	_OnAddAppointMentA20Fnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnAddAppointMentA20();
}


//hiem muon
static int	_OnBenhAnHiemMuonSelectFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnBenhAnHiemMuonSelect();
}
static int	_OnChuyenBenhNhanFnc(CWnd *pWnd){
	 ((CHMSExamineV2 *)pWnd)->SwitchInfertilityPatient();
	 return 0;
}

static int	_OnCancelInfertilityFnc(CWnd *pWnd){
	 ((CHMSExamineV2 *)pWnd)->OnCancelInfertility();
	 return 0;
}

//hiem muon
static int	_OnRegistrationPregnancyFnc(CWnd *pWnd){
	((CHMSExamineV2 *)pWnd)->OnRegistrationPregnancy();
	return 0;
}
static int	_OnCancelPregnancyFnc(CWnd *pWnd)
{
	 ((CHMSExamineV2 *)pWnd)->OnCancelPregnancy();
	 return 0;
}

static int _OnCreateAdmissionFnc(CWnd *pWnd){
	 return ((CHMSExamineV2*)pWnd)->OnCreateAdmission();
} 
static int _OnAddHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamineV2*)pWnd)->OnAddHMSExamine();
} 
static int _OnEditHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamineV2*)pWnd)->OnEditHMSExamine();
} 
static int _OnDeleteHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamineV2*)pWnd)->OnDeleteHMSExamine();
} 
static int _OnSaveHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamineV2*)pWnd)->OnSaveHMSExamine();
} 
static int _OnCancelHMSExamineFnc(CWnd *pWnd){
	 return ((CHMSExamineV2*)pWnd)->OnCancelHMSExamine();
}
static void _OnHATDSelectFnc(CWnd *pWnd){
	 ((CHMSExamineV2*)pWnd)->OnHATDSelect();
}
static long _OnHasAllergyLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnHasAllergyLoadData();
}

static int _OnToanthanCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnToanthanCheckValue();
}
static int _OnHohapCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnHohapCheckValue();
} 
static int _OnTieuhoaCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnTieuhoaCheckValue();
} 
static int _OnTietnieuCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnTietnieuCheckValue();
} 
static int _OnThankinhCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnThankinhCheckValue();
} 
static int _OnKhopCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnKhopCheckValue();
} 
static int _OnCoquankhacCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnCoquankhacCheckValue();
} 
static int _OnDinhduongCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnDinhduongCheckValue();
} 
static int _OnKehoachxnCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnKehoachxnCheckValue();
} 
static int _OnKehoachdieutriCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnKehoachdieutriCheckValue();
}
static int _OnTuanhoanCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineV2 *)pWnd)->OnTuanhoanCheckValue();
} 

CHMSExamineV2::CHMSExamineV2(){

	m_nDlgWidth = 630;
	m_nDlgHeight = 600;
	SetDefaultValues();
	
}
CHMSExamineV2::~CHMSExamineV2()
{
}
void CHMSExamineV2::OnCreateComponents()
{
	/*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 125, 620, 550);
	m_wndDiseasePrehistory.Create(this, _T("History of disease"), 5, 5, 620, 120);
	m_wndOwnerLabel.Create(this, _T("Owner"), 10, 30, 90, 55);
	m_wndOwner.Create(this,95, 30, 615, 55); 
	m_wndFamilyLabel.Create(this, _T("Family"), 10, 60, 90, 85);
	m_wndFamily.Create(this,95, 60, 615, 85); 
	m_wndDrugAllergyLabel.Create(this, _T("DrugAllergy"), 10, 90, 90, 115);
	m_wndDrugAllergy.Create(this,165, 90, 615, 115); 
	m_wndHasAllergy.Create(this,95, 90, 160, 115);
	m_wndDateLabel.Create(this, _T("Examination Date"), 10, 150, 90, 175);
	m_wndDate.Create(this,95, 150, 215, 175); 
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 220, 150, 290, 175);
	m_wndExamType.Create(this, 295, 150, 430, 175); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 435, 150, 480, 175);
	m_wndDoctor.Create(this,485, 150, 615, 175); 
	m_wndPathologyProcessLabel.Create(this, _T("Pathology Process"), 10, 180, 140, 205);
	m_wndPathologyProcess.Create(this,145, 180, 615, 255, TRUE, FALSE, TRUE); 
	m_wndExamineV2Label.Create(this, _T("Examine"), 10, 260, 140, 285);
	m_wndExamineV2.Create(this,145, 260, 615, 335, TRUE, FALSE, TRUE); 
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
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 430, 140, 455);

	if (pMF->m_szDept == _T("C1.2"))
		m_wndRelationDisease.Create(this,145, 430, 480, 455);
	else
		m_wndRelationDisease.Create(this,145, 430, 615, 455);
	
	m_wndICDDiagnosticLabel.Create(this, _T("ICD Diagnostic"), 10, 460, 140, 485);
	m_wndICDDiagnostic.Create(this,146, 460, 615, 485); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 490, 80, 515);
	m_wndConclusion.Create(this,145, 490, 615, 545, TRUE, FALSE, TRUE);	
	m_wndPrehistory.Create(this, _T("Prehistory"), 5, 555, 95, 580);
	m_wndReloadInfo.Create(this, _T("Reload Info"), 100, 555, 190, 580);
	m_wndUpdate.Create(this, _T("&Update"), 245, 555, 335, 580);
	m_wndTerminate.Create(this, _T("Terminate"), 340, 555, 430, 580);
	m_wndSave.Create(this, _T("&Save"), 435, 555, 525, 580);
	m_wndCancel.Create(this, _T("&Cancel"), 530, 555, 620, 580);

	//if (pMF->m_szDept == _T("C1.2"))
	{
		m_wndCallPatient.Create(this, _T("Call"), 15, 525, 135,545);
	} 
	m_wndReloadInfo.ModifyStyle(WS_TABSTOP, 0);
	m_wndHATD.Create(this, _T("HA_TD"), 485, 430, 615, 455);*/

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 106, 620, 767);
	m_wndDiseasePrehistory.Create(this, _T("History of disease"), 5, 5, 620, 106);
	m_wndOwnerLabel.Create(this, _T("Owner"), 10, 26, 90, 51);
	m_wndOwner.Create(this,95, 26, 615, 51); 
	m_wndFamilyLabel.Create(this, _T("Family"), 10, 53, 90, 78);
	m_wndFamily.Create(this,95, 53, 615, 78); 
	m_wndDrugAllergyLabel.Create(this, _T("DrugAllergy"), 10, 80, 90, 105);
	m_wndDrugAllergy.Create(this,165, 80, 615, 105);
	m_wndHasAllergy.Create(this,95, 80, 160, 105);	
	m_wndDateLabel.Create(this, _T("Examination Date"), 10, 131, 90, 156);
	m_wndDate.Create(this,95, 131, 215, 156); 
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 220, 131, 290, 156);
	m_wndExamType.Create(this,295, 131, 430, 156); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 435, 131, 480, 156);
	m_wndDoctor.Create(this,485, 131, 615, 156); 
	m_wndLydovaovienLabel.Create(this, _T("Lý do vào viện"), 10, 159, 140, 184);
	m_wndLydovaovien.Create(this,145, 159, 615, 184); 
	m_wndPathologyProcessLabel.Create(this, _T("Pathology Process"), 10, 187, 140, 212);
	m_wndPathologyProcess.Create(this,145, 187, 615, 262, true, false, true); 
	m_wndExamineV2Label.Create(this, _T("Examine"), 10, 242, 140, 267);
	m_wndExamineV2.Create(this,145, 262, 615, 268);
	m_wndExamineV2.ShowWindow(SW_HIDE);
	m_wndToanthanLabel.Create(this, _T("Toàn thân(*)"), 30, 271, 140, 296);
	m_wndToanthan.Create(this,145, 271, 615, 296); 
	m_wndTuanhoanLabel.Create(this, _T("Tuần hoàn(*)"), 30, 298, 140, 323);
	m_wndTuanhoan.Create(this,145, 298, 615, 323); 
	m_wndHohaplabel.Create(this, _T("Hô hấp(*)"), 30, 325, 140, 350);
	m_wndHohap.Create(this,145, 325, 615, 350); 
	m_wndTieuhoalabel.Create(this, _T("Tiêu hóa(*)"), 30, 352, 140, 377);
	m_wndTieuhoa.Create(this,145, 352, 615, 377); 
	m_wndTietnieuLabel.Create(this, _T("Tiết niệu(*)"), 30, 379, 140, 404);
	m_wndTietnieu.Create(this,145, 379, 615, 404); 
	m_wndThankinhLabel.Create(this, _T("Thần kinh(*)"), 30, 407, 140, 432);
	m_wndThankinh.Create(this,145, 407, 615, 432); 
	m_wndKhopLabel.Create(this, _T("Khớp(*)"), 30, 435, 140, 460);
	m_wndKhop.Create(this,145, 435, 615, 460); 
	m_wndCoquankhacLabel.Create(this, _T("Cơ quan khác(*)"), 30, 463, 140, 488);
	m_wndCoquankhac.Create(this,145, 463, 615, 488); 
	m_wndPulseLabel.Create(this, _T("Pulse"), 10, 490, 140, 515);
	m_wndPulse.Create(this,145, 490, 205, 515); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 210, 490, 295, 515);
	m_wndTemperature.Create(this,300, 490, 360, 515); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 360, 490, 451, 515);
	m_wndBloodPressure.Create(this,455, 490, 527, 515); 
	m_wndBloodPressurex.Create(this,532, 490, 615, 515); 
	m_wndBreathingIntervalLabel.Create(this, _T("Breathing Interval"), 10, 519, 102, 544);
	m_wndBreathingInterval.Create(this,107, 519, 167, 544); 
	m_wndWeightLabel.Create(this, _T("Weight"), 172, 519, 257, 544);
	m_wndWeight.Create(this,262, 519, 317, 544); 
	m_wndHeightLabel.Create(this, _T("Height"), 321, 519, 400, 544);
	m_wndHeight.Create(this,401, 519, 461, 544);
	m_wndDinhduonglabel.Create(this, _T("Dinh dưỡng"), 465, 519, 545, 544);
	m_wndDinhduong.Create(this,546, 519, 615, 544); 
	m_wndPreDiagnosticLabel.Create(this, _T("Pre-Diagnostic"), 10, 547, 140, 572);
	m_wndPreDiagnostic.Create(this,145, 547, 615, 572); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 575, 140, 600);
	m_wndRelationDisease.Create(this,145, 575, 615, 600); 
	m_wndICDDiagnosticLabel.Create(this, _T("ICD Diagnostic"), 10, 603, 140, 628);	
	m_wndICDDiagnostic.Create(this,145, 603, 615, 628); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 631, 140, 656);
	m_wndConclusion.Create(this,145, 631, 615, 675, true, false, true); 
	m_wndKehoachxnLabel.Create(this, _T("Kế hoạch xét nghiệm"), 10, 678, 140, 703);
	m_wndKehoachxn.Create(this,145, 678, 615, 703); 
	m_wndKehoachdieutrilabel.Create(this, _T("Kế hoạch điều trị"), 10, 706, 140, 731);
	m_wndKehoachdieutri.Create(this,145, 706, 342, 731); 
	m_wndTienluonglabel.Create(this, _T("Tiên lượng"), 347, 706, 427, 731);
	m_wndTienluong.Create(this,432, 706, 615, 731); 

	m_wndPrehistory.Create(this, _T("Prehistory"), 5, 731, 95, 756);
	m_wndUpdate.Create(this, _T("&Update"), 245, 731, 335, 756);
	m_wndTerminate.Create(this, _T("Terminate"), 340, 731, 430, 756);
	m_wndSave.Create(this, _T("&Save"), 435, 731, 525, 756);
	m_wndCancel.Create(this, _T("&Cancel"), 530, 731, 620, 756);
	m_wndReloadInfo.Create(this, _T("Reload Info"), 100, 731, 190, 756);
	m_wndReloadInfo.ModifyStyle(WS_TABSTOP, 0);
	m_wndCallPatient.Create(this, _T("Gọi BN"), 15, 658, 135, 678);
	m_wndHATD.Create(this, _T("HA_TD"), 485, 575, 615, 600);

	m_wndCallIn.Create(this, _T(""), 0, 0, 0, 0);
	m_wndCallIn.ShowWindow(SW_HIDE);
	m_wndCallIn.EnableWindow(FALSE);
	
}
void CHMSExamineV2::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOwner.SetLimitText(254);
	//m_wndOwner.SetReadOnly(true);
	m_wndFamily.SetLimitText(254);
	//m_wndFamily.SetReadOnly(true);
	m_wndDrugAllergy.SetLimitText(254);
	//m_wndDrugAllergy.SetReadOnly(true);
	//m_wndDate.SetCheckValue(true);
	/*if(pMF->m_szDept == _T("TYC"))
		m_wndExamType.SetCheckValue(false);
	else*/
	m_wndExamType.SetCheckValue(true);
	m_wndExamType.LimitText(128);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(65);
	m_wndLydovaovien.SetLimitText(128);
	m_wndLydovaovien.SetCheckValue(true);
	m_wndPathologyProcessLabel.SetHyperlink(true);
	m_wndPathologyProcess.SetLimitText(512);
	m_wndPathologyProcess.SetMultiLine(true);
//	m_wndPathologyProcess.SetCheckValue(true);
	m_wndExamineV2Label.SetHyperlink(true);
	m_wndExamineV2.SetLimitText(1024);
//	CHMSExamineV2.SetCheckValue(true);
	m_wndPulse.SetLimitText(4);
	
//	m_wndPulse.SetCheckValue(true);
	m_wndTemperature.SetLimitText(5);
	m_wndTemperature.SetNumberDecimal(2);
//	m_wndTemperature.SetCurrencyFormat(true);
//	m_wndTemperature.SetCheckValue(true);
	m_wndBloodPressure.SetLimitText(3);
	m_wndBloodPressurex.SetLimitText(3);
	//m_wndBloodPressurex.SetCheckValue(true);
//	m_wndBloodPressure.SetCurrencyFormat(true);
//	m_wndBloodPressurex.SetCurrencyFormat(true);

	m_wndBreathingInterval.SetLimitText(4);
	//m_wndBreathingInterval.SetCheckValue(true);
//	m_wndBreathingInterval.SetCurrencyFormat(true);
	m_wndWeight.SetLimitText(5);
	m_wndWeight.SetCheckValue(false);
//	m_wndWeight.SetCurrencyFormat(true);
	m_wndWeight.SetNumberDecimal(2);
	m_wndHeight.SetLimitText(5);
	//m_wndHeight.SetCheckValue(true);
	m_wndHeight.SetNumberDecimal(2);
//	m_wndHeight.SetCurrencyFormat(true);
	m_wndPreDiagnostic.SetLimitText(254);
	//m_wndPreDiagnostic.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(254);
//	m_wndRelationDisease.SetCheckValue(true);
	m_wndICDDiagnostic.SetCheckValue(true);
	m_wndICDDiagnostic.LimitText(254);
	//m_wndICDDiagnostic.SetRequirementLength(2);
	m_wndConclusion.SetLimitText(1024);
	m_wndConclusion.SetCheckValue(true);

	m_wndConclusionLabel.SetHyperlink(true);
	m_wndToanthan.SetLimitText(128);
	m_wndToanthan.SetCheckValue(true);
	m_wndTuanhoan.SetLimitText(128);
	m_wndTuanhoan.SetCheckValue(true);
	m_wndHohap.SetLimitText(128);
	m_wndHohap.SetCheckValue(true);
	m_wndTieuhoa.SetLimitText(128);
	m_wndTieuhoa.SetCheckValue(true);
	m_wndTietnieu.SetLimitText(128);
	m_wndTietnieu.SetCheckValue(true);
	m_wndThankinh.SetLimitText(128);
	m_wndThankinh.SetCheckValue(true);
	m_wndKhop.SetLimitText(128);
	m_wndKhop.SetCheckValue(true);
	m_wndCoquankhac.SetLimitText(128);
	m_wndCoquankhac.SetCheckValue(true);
	m_wndDinhduong.SetLimitText(128);
	m_wndDinhduong.SetCheckValue(true);
	m_wndKehoachxn.SetLimitText(128);
	m_wndKehoachxn.SetCheckValue(true);
	m_wndKehoachdieutri.SetLimitText(128);
	m_wndKehoachdieutri.SetCheckValue(true);

	m_wndTienluong.SetLimitText(128);
	m_wndTienluong.SetCheckValue(true);

////	m_wndBloodPressure.SetCheckValue(true);
//	m_wndBreathingInterval.SetLimitText(5);
////	m_wndBreathingInterval.SetCurrencyFormat(true);
//	m_wndWeight.SetLimitText(5);
////	m_wndWeight.SetCurrencyFormat(true);
////	m_wndWeight.SetCheckValue(true);
//	m_wndHeight.SetLimitText(5);
////	m_wndHeight.SetCurrencyFormat(true);
////	m_wndHeight.SetCheckValue(true);
//	m_wndPreDiagnostic.SetLimitText(254);
//	//m_wndPreDiagnostic.SetCheckValue(true);
	m_wndDate.SetReadOnly(true);
	m_wndHATD.ModifyStyle(WS_TABSTOP, 0);
	m_wndHasAllergy.SetCheckValue(true);

	if(pMF->m_szDept == _T("AB"))
	{
		m_wndBloodPressure.SetCheckValue(true);
		m_wndBloodPressurex.SetCheckValue(true);
		m_wndPreDiagnostic.SetCheckValue(true);
	}


	
	m_wndExamType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndExamType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndHasAllergy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndHasAllergy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndICDDiagnostic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICDDiagnostic.InsertColumn(1, _T("Description"), CFMT_TEXT, 600);

	m_hms_examTbl.SetTableName(_T("hms_exam"));
	m_hms_examTbl.AddField(_T("he_updatedby"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_updateddate"), dfDateTime); 
	m_hms_examTbl.AddField(_T("he_status"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_doctor"), dfText, 15); 
	//m_hms_examTbl.AddField(_T("he_examdate"), dfDateTime);
	//m_hms_examTbl.AddField(_T("he_reason"), dfText, 81); 
	//m_hms_examTbl.AddField(_T("he_pathology"), dfText, 512); 
	//m_hms_examTbl.AddField(_T("he_ownerhistory"), dfText, 254); 
	//m_hms_examTbl.AddField(_T("he_familyhistory"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_medical"), dfText, 254); 
	//m_hms_examTbl.AddField(_T("he_predisease"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_examine"), dfText, 1024); 
	//m_hms_examTbl.AddField(_T("he_parts"), dfText, 512); 
	m_hms_examTbl.AddField(_T("he_pulse"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_temperature"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_bloodpressure"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_bloodpressurex"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_breathinterval"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_weight"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_height"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_prediagnostic"), dfText, 128); 
	m_hms_examTbl.AddField(_T("he_icd10"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_diagnostic"), dfText, 1024);
	m_hms_examTbl.AddField(_T("he_hatd"), dfText, 1);
	m_hms_examTbl.AddField(_T("he_typeid"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_hasallergy"), dfText, 1);

	//Thêm 1 số cột để chỉnh lại phiếu khám của C13
	m_hms_examTbl.AddField(_T("he_lydovaovien"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_toanthan"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_tuanhoan"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_hohap"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_tieuhoa"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_tietnieu"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_thankinh"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_khop"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_coquankhac"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_kehoachxn"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_kehoachdieutri"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_tienluong"), dfText, 128);
	m_hms_examTbl.AddField(_T("he_dinhduong"), dfText, 128);

	m_hms_disease_histTbl.SetTableName(_T("hms_disease_hist"));
	m_hms_disease_histTbl.AddField(_T("hdh_createdby"), dfText, 15); 
	m_hms_disease_histTbl.AddField(_T("hdh_createddate"), dfDateTime); 
	m_hms_disease_histTbl.AddField(_T("hdh_updatedby"), dfText, 15); 
	m_hms_disease_histTbl.AddField(_T("hdh_updateddate"), dfDateTime); 
	m_hms_disease_histTbl.AddField(_T("hdh_patientno"), dfLong); 
	m_hms_disease_histTbl.AddField(_T("hdh_docno"), dfLong); 
	m_hms_disease_histTbl.AddField(_T("hdh_owner"), dfText, 254); 
	m_hms_disease_histTbl.AddField(_T("hdh_family"), dfText, 254); 
	m_hms_disease_histTbl.AddField(_T("hdh_drugallergy"), dfText, 254);
	m_hms_disease_histTbl.AddField(_T("hdh_hasallergy"), dfText, 1);

	


	SetMode(VM_NONE);

	if(m_bIsReq)
	{
			m_wndICDDiagnostic.SetCheckValue(false);
	}

}

void CHMSExamineV2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();


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

	m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
	//m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
	//m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
	m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
	m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
	//m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);

	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	m_wndLydovaovien.SetEvent(WE_CHECKVALUE, _OnLydovaovienCheckValueFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndPathologyProcessLabel.SetEvent(WE_CLICK, _OnPathologyProcessLabelSelectFnc);
	//m_wndPathologyProcess.SetEvent(WE_CHANGE, _OnPathologyProcessChangeFnc);
	//m_wndPathologyProcess.SetEvent(WE_SETFOCUS, _OnPathologyProcessSetfocusFnc);
	//m_wndPathologyProcess.SetEvent(WE_KILLFOCUS, _OnPathologyProcessKillfocusFnc);
	m_wndPathologyProcess.SetEvent(WE_CHECKVALUE, _OnPathologyProcessCheckValueFnc);
	m_wndExamineV2Label.SetEvent(WE_CLICK, _OnExamineLabelSelectFnc);
	//CHMSExamineV2.SetEvent(WE_CHANGE, _OnExamineChangeFnc);
	//CHMSExamineV2.SetEvent(WE_SETFOCUS, _OnExamineSetfocusFnc);
	//CHMSExamineV2.SetEvent(WE_KILLFOCUS, _OnExamineKillfocusFnc);
	m_wndExamineV2.SetEvent(WE_CHECKVALUE, _OnExamineCheckValueFnc);
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
	m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	
	m_wndCallPatient.SetEvent(WE_CLICK, _OnCallPatientSelectFnc);
	m_wndPrehistory.SetEvent(WE_CLICK, _OnPrehistorySelectFnc);
	m_wndReloadInfo.SetEvent(WE_CLICK, _OnReloadInfoSelectFnc);

	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	m_wndConclusionLabel.SetEvent(WE_CLICK, _OnConclusionLabelSelectFnc);
	m_wndToanthan.SetEvent(WE_CHECKVALUE, _OnToanthanCheckValueFnc);
	m_wndTuanhoan.SetEvent(WE_CHECKVALUE, _OnTuanhoanCheckValueFnc);
	m_wndHohap.SetEvent(WE_CHECKVALUE, _OnHohapCheckValueFnc);
	m_wndTieuhoa.SetEvent(WE_CHECKVALUE, _OnTieuhoaCheckValueFnc);
	m_wndTietnieu.SetEvent(WE_CHECKVALUE, _OnTietnieuCheckValueFnc);
	m_wndThankinh.SetEvent(WE_CHECKVALUE, _OnThankinhCheckValueFnc);
	m_wndKhop.SetEvent(WE_CHECKVALUE, _OnKhopCheckValueFnc);
	m_wndCoquankhac.SetEvent(WE_CHECKVALUE, _OnCoquankhacCheckValueFnc);
	m_wndDinhduong.SetEvent(WE_CHECKVALUE, _OnDinhduongCheckValueFnc);
	m_wndKehoachxn.SetEvent(WE_CHECKVALUE, _OnKehoachxnCheckValueFnc);
	m_wndKehoachdieutri.SetEvent(WE_CHECKVALUE, _OnKehoachdieutriCheckValueFnc);
	m_wndTienluong.SetEvent(WE_CHECKVALUE, _OnTienluongCheckValueFnc);

	m_wndHATD.SetEvent(WE_CLICK, _OnHATDSelectFnc);
	m_wndHasAllergy.SetEvent(WE_LOADDATA, _OnHasAllergyLoadDataFnc);
	AddEvent(1, _T("Update History Of Disease"), _OnUpdateDiseasePrehistoryFnc);
	AddEvent(0, _T("-"));
	AddEvent(2, _T("Certificate Of Physical Eye Clinice"), _OnCertificateofphysicaleyeclinicFnc);
	AddEvent(3, _T("Delete Examine"), _OnDeleteExamineFnc);
//	AddEvent(2, _T("Khám sức khỏe trong nước"), _OnMedicalexamsFnc);
	
	if(pMF->m_szDept == _T("C1.2"))
	{
		AddEvent(0, _T("-"),NULL);
		AddEvent(4, _T("Phiếu khám sức khỏe cán bộ"), _OnGeneralRankExamineFnc);
		AddEvent(5, _T("Phiếu khám sức khỏe thăng quân hàm cấp tướng"), _OnGeneralRankExamine2Fnc);
		AddEvent(6, _T("Phiếu khám sức khỏe đi học"), _OnGeneralRankExamine3Fnc);
	}
	AddEvent(0, _T("-"));
	AddEvent(20, _T("Phiếu khám sức khỏe"), _OnHealthExaminationFnc);

	//if(pMF->GetCurrentUser() == _T("admin"))
	//{
		AddEvent(0, _T("-"));
		AddEvent(21, _T("Tạo lịch hẹn A20"), _OnAddAppointMentA20Fnc);
	//}

	//Benh an hiem muon
	if(pMF->CheckPermission(_T("20.01")))
	{
		AddEvent(0, _T("-"));
		AddEvent(6, _T("Khám và điều trị hiếm muộn"), _OnBenhAnHiemMuonSelectFnc);
		AddEvent(0, _T("-"));
		AddEvent(7, _T("Chuyển tới hồ sơ vợ hoặc chồng"), _OnChuyenBenhNhanFnc);
		AddEvent(0, _T("-"));
		AddEvent(8, _T("Bỏ ghép đôi cặp vợ chồng hiếm muộn"), _OnCancelInfertilityFnc);
	}


	//Benh an hiem muon
	//if(pMF->CheckPermission(_T("20.02")))
	{
		AddEvent(0, _T("-"));
		AddEvent(9, _T("Đăng ký mổ đẻ theo yêu cầu"), _OnRegistrationPregnancyFnc);
		AddEvent(0, _T("-"));
		AddEvent(10, _T("Hủy đăng ký mổ đẻ"), _OnCancelPregnancyFnc);
	}

	//AddEvent(4, _T("Create Admission"), _OnCreateAdmissionFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExamineFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExamineFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExamineFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExamineFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExamineFnc, 0, 'T', VK_CONTROL);
*/
	
	CString szSQL;
	CRecord rs(&pMF->m_db);
	//Layout
	//AddLayoutControl(&m_wndDiseasePrehistory, WS_RESIZEX, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndOwner, WS_RESIZEX, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndFamily, WS_RESIZEX, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndDrugAllergy, WS_RESIZEX, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndExaminationInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);


	m_bDoctor = false;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid in('P','D') and su_userid='%s' ORDER BY su_name "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		m_bDoctor = true;
	}	

	if(pMF->m_szHaveLed == _T("Y"))
	{
		m_wndCallIn.SetEvent(WE_CLICK, _OnCallInSelectFnc);
		m_wndCallIn.ModifyStyle(WS_TABSTOP, 0);
		InitCommPort();
	}

	if (pMF->m_szDept == _T("C1.2"))
		m_wndHATD.ShowWindow(SW_SHOW);
	else
		m_wndHATD.ShowWindow(SW_HIDE);

	m_wndDrugAllergy.SetTextColor(RGB(255, 0, 0));

	SetScrollSizes(MM_TEXT, CSize(600, 750));	

}
void CHMSExamineV2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOwner.GetDlgCtrlID(), m_szOwner);
	DDX_Text(pDX, m_wndFamily.GetDlgCtrlID(), m_szFamily);
	DDX_Text(pDX, m_wndDrugAllergy.GetDlgCtrlID(), m_szDrugAllergy);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndPathologyProcess.GetDlgCtrlID(), m_szPathologyProcess);
	DDX_Text(pDX, m_wndExamineV2.GetDlgCtrlID(), m_szExamine);
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
	DDX_Check(pDX, m_wndHATD.GetDlgCtrlID(), m_bHATD);
	DDX_TextEx(pDX, m_wndHasAllergy.GetDlgCtrlID(), m_szHasAllergyKey);
	DDX_Text(pDX, m_wndLydovaovien.GetDlgCtrlID(), m_szLydovaovien);
	DDX_Text(pDX, m_wndToanthan.GetDlgCtrlID(), m_szToanthan);
	DDX_Text(pDX, m_wndTuanhoan.GetDlgCtrlID(), m_szTuanhoan);
	DDX_Text(pDX, m_wndHohap.GetDlgCtrlID(), m_szHohap);
	DDX_Text(pDX, m_wndTieuhoa.GetDlgCtrlID(), m_szTieuhoa);
	DDX_Text(pDX, m_wndTietnieu.GetDlgCtrlID(), m_szTietnieu);
	DDX_Text(pDX, m_wndThankinh.GetDlgCtrlID(), m_szThankinh);
	DDX_Text(pDX, m_wndKhop.GetDlgCtrlID(), m_szKhop);
	DDX_Text(pDX, m_wndCoquankhac.GetDlgCtrlID(), m_szCoquankhac);
	DDX_Text(pDX, m_wndDinhduong.GetDlgCtrlID(), m_szDinhduong);
	DDX_Text(pDX, m_wndKehoachxn.GetDlgCtrlID(), m_szKehoachxn);
	DDX_Text(pDX, m_wndKehoachdieutri.GetDlgCtrlID(), m_szKehoachdieutri);
	DDX_Text(pDX, m_wndTienluong.GetDlgCtrlID(), m_szTienluong);
}
void CHMSExamineV2::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr;
	//long nDocNo;
	SetDefaultValues();

	szSQL.Format(_T("SELECT * FROM hms_exam ") \
				_T(" LEFT JOIN hms_doc ON (he_docno = hd_docno)") \
				_T(" WHERE he_docno=%ld AND he_receptidx=%ld"), pMF->m_nDocumentNo, m_nReceptIndex);
	rs.ExecSQL(szSQL);
	
	if(!rs.IsEOF())
	{

	//	rs.GetValue(_T("he_patientno"), m_nPatientNo); 
		rs.GetValue(_T("he_deptid"), m_szDept); 
		rs.GetValue(_T("he_roomid"), m_nRoomID); 
		rs.GetValue(_T("he_receptno"), m_nReceptNo); 
		rs.GetValue(_T("he_receptidx"), m_nReceptIndex); 		
		
		rs.GetValue(_T("he_examdate"), m_szDate); 
		rs.GetValue(_T("he_doctor"), m_szDoctorKey);

		rs.GetValue(_T("he_status"), m_szStatus);
		rs.GetValue(_T("he_hatd"), tmpStr);
		rs.GetValue(_T("he_typeid"), m_szExamTypeKey);

		rs.GetValue(_T("he_lydovaovien"), m_szLydovaovien);
		rs.GetValue(_T("he_toanthan"), m_szToanthan);
		rs.GetValue(_T("he_tuanhoan"), m_szTuanhoan);
		rs.GetValue(_T("he_hohap"), m_szHohap);
		rs.GetValue(_T("he_tieuhoa"), m_szTieuhoa);
		rs.GetValue(_T("he_tietnieu"), m_szTietnieu);
		rs.GetValue(_T("he_thankinh"), m_szThankinh);
		rs.GetValue(_T("he_khop"), m_szKhop);
		rs.GetValue(_T("he_coquankhac"), m_szCoquankhac);
		rs.GetValue(_T("he_kehoachxn"), m_szKehoachxn);
		rs.GetValue(_T("he_kehoachdieutri"), m_szKehoachdieutri);
		rs.GetValue(_T("he_tienluong"), m_szTienluong);
		rs.GetValue(_T("he_dinhduong"), m_szDinhduong);

		
		if(m_szExamTypeKey == _T("0"))
			m_szExamTypeKey.Empty();

		if (tmpStr == _T("Y"))
			m_bHATD = TRUE;
		else
			m_bHATD = FALSE;

		rs.GetValue(_T("he_hasallergy"), m_szHasAllergyKey);
		m_szHasAllergyFromExam = m_szHasAllergyKey;

		m_bIsReq = pMF->m_bIsReq;

		if(m_szStatus != _T("O") || rs.GetValue(_T("hd_healthexam"))== _T("Y"))
		{			
		//	rs.GetValue(_T("he_reason"), _T("")); 
			rs.GetValue(_T("he_medical"), m_szPathologyProcess); 
			rs.GetValue(_T("he_examine"), m_szExamine); 
			rs.GetValue(_T("he_doctor"), m_szDoctorKey);
			rs.GetValue(_T("he_pulse"), m_nPulse);
			rs.GetValue(_T("he_temperature"), m_nTemperature); 
			rs.GetValue(_T("he_bloodpressure"), m_nBloodPressure); 
			rs.GetValue(_T("he_bloodpressurex"), m_nBloodPressurex); 
			rs.GetValue(_T("he_breathinterval"), m_nBreathingInterval); 
			rs.GetValue(_T("he_weight"), m_nWeight); 
			rs.GetValue(_T("he_height"), m_nHeight); 
			rs.GetValue(_T("he_prediagnostic"), m_szPreDiagnostic); 
			rs.GetValue(_T("he_icd10"), m_szICDDiagnosticKey); 
			if (m_szStatus == _T("T"))
			{
				rs.GetValue(_T("he_diagnostic"), m_szConclusion); 
			}

			szSQL.Format(_T("SELECT hd_reldisease FROM hms_doc WHERE hd_docno=%ld"), pMF->m_nDocumentNo);
			rs2.ExecSQL(szSQL);
			if(!rs2.IsEOF())
			{
				rs2.GetValue(_T("hd_reldisease"), m_szRelationDisease);
			}
			
			pMF->m_szDoctor = m_szDoctorKey;
		}
		else
		{
			SetDefaultValues();			
		}
		
		
		/*szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno=%ld "), pMF->m_nPatientNo, pMF->m_nDocumentNo);
		rs2.ExecSQL(szSQL);
		if(rs2.IsEOF())
		{
			szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and NVL(hdh_docno,0)=0 "), pMF->m_nPatientNo);
			rs2.ExecSQL(szSQL);
		}
		if(!rs2.IsEOF())
		{
			rs2.GetValue(_T("hdh_owner"), m_szOwner);
			rs2.GetValue(_T("hdh_family"), m_szFamily);
			rs2.GetValue(_T("hdh_drugallergy"), m_szDrugAllergy);			
		}*/

		szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno=%ld "), pMF->m_nPatientNo, pMF->m_nDocumentNo);
		rs2.ExecSQL(szSQL);
		
		if(rs2.IsEOF())
		{
			long maxDocNo;
			szSQL.Format(_T("SELECT max(hdh_docno) FROM hms_disease_hist WHERE hdh_patientno = %ld "), pMF->m_nPatientNo);
			rs2.ExecSQL(szSQL);
			
			maxDocNo = rs2.GetIntValue();

			if(maxDocNo > 0)
			szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno = %ld "), pMF->m_nPatientNo, maxDocNo);
			else
			szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld "), pMF->m_nPatientNo);

			rs2.ExecSQL(szSQL);
			
		}
		if(!rs2.IsEOF())
		{
			rs2.GetValue(_T("hdh_owner"), m_szOwner);
			rs2.GetValue(_T("hdh_family"), m_szFamily);
			rs2.GetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
			if (m_szHasAllergyFromExam.IsEmpty())
			{
				rs2.GetValue(_T("HDH_HASALLERGY"), m_szHasAllergyKey);
			}
			//_msg(_T("%s"), m_szHasAllergyKey);
		}
		//pMF->m_szDept = m_szDept;
		pMF->m_nReceptNo = m_nReceptNo;
		pMF->m_szExamStatus = m_szStatus;
		

		pMF->m_szEntryDate = m_szDate;
		pMF->m_wndPatientDocument.OnConclusionLoad(pMF->m_nDocumentNo);
		
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);		

	szSQL.Format(_T("SELECT TRUNC((months_between(hd_admitdate, hp_birthdate))) AS age ") \
		_T(" FROM hms_doc, ") \
		_T(" hms_patient ") \
		_T(" WHERE hd_docno   = %ld ") \
		_T(" AND hd_patientno = hp_patientno "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	int nAge;
	rs.GetValue(_T("age"), nAge);
	
	if(nAge <= 12)
	{
		m_wndWeight.SetCheckValue(true);
	}
	//Default 1 số giá trị của phiếu khám, chỉ set khi phiếu chưa khám, nếu phiếu đã khám rồi thì thôi

	if(m_szStatus == _T("O"))
	{
		
		CString szSQL, szToanthan, szTuanhoan, szHohap, szTieuhoa, 
				szTietnieu, szThankinh, szKhop, szCoquankhac, szDinhduong, szKehoachxn, szKehoachdt, szTienluong;

 		CRecord rs(&pMF->m_db);
		szSQL.Format(_T(" SELECT distinct(GET_SYSSEL_DESC_VL('khamls_default', 'hohap')) as hohap,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'tieuhoa') as tieuhoa,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'tietnieu') as tietnieu,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'thankinh') as thankinh,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'khop') as khop,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'cqkhac') as cqkhac,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'toanthan') as toanthan,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'tuanhoan') as tuanhoan,") \

		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'dinhduong') as dinhduong,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'kehoachxn') as kehoachxn,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'kehoachdt') as kehoachdt,") \
		_T(" GET_SYSSEL_DESC_VL('khamls_default', 'tienluong') as tienluong") \
		_T(" from sys_sel") \
		_T(" where ss_id='khamls_default'"));
		rs.ExecSQL(szSQL);
		
		
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("toanthan"), szToanthan);
			rs.GetValue(_T("tuanhoan"), szTuanhoan);
			rs.GetValue(_T("hohap"), szHohap);
			rs.GetValue(_T("tieuhoa"), szTieuhoa);
			rs.GetValue(_T("tietnieu"), szTietnieu);
			rs.GetValue(_T("thankinh"), szThankinh);
			rs.GetValue(_T("khop"), szKhop);
			rs.GetValue(_T("cqkhac"), szCoquankhac);

			rs.GetValue(_T("dinhduong"), szDinhduong);
			rs.GetValue(_T("kehoachxn"), szKehoachxn);
			rs.GetValue(_T("kehoachdt"), szKehoachdt);
			rs.GetValue(_T("tienluong"), szTienluong);
		}    
    
    		m_szToanthan = szToanthan;
			m_szTuanhoan = szTuanhoan;
			m_szHohap = szHohap;			
			m_szTieuhoa = szTieuhoa;
			m_szTietnieu = szTietnieu;
			m_szThankinh = szThankinh;
			m_szKhop = szKhop;
			m_szCoquankhac = szCoquankhac;
			m_szDinhduong = szDinhduong;
			m_szKehoachxn = szKehoachxn;
			m_szKehoachdieutri = szKehoachdt;
			m_szTienluong = szTienluong;		
	}

}
void CHMSExamineV2::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if(GetMode() == VM_EDIT){
	//	CString szWhere;
	//	szWhere.Format(_T(" WHERE he_docno = %ld AND he_receptidx=%ld "), pMF->m_nDocumentNo, m_nReceptIndex);
	//	m_hms_examTbl.Open(&pMF->m_db, szWhere);
	//	
	//}
	//if (m_szStatus == _T("O"))
	//{
	//	m_hms_examTbl.SetValue(_T("he_examdate"), pMF->GetSysDateTime()); 
	//}
	if(GetMode() == VM_ADD)
	{
		if (m_szStatus == _T("O"))
			m_szStatus = _T("P");
	}
	else
	{
		m_szStatus = _T("T");
	}
	m_szConclusion.Trim();

	m_szPathologyProcess.Trim();
	m_szPathologyProcess.Trim(_T("\r\n"));

	m_szExamine.Trim();
	m_szExamine.Trim(_T("\r\n"));

	m_szPreDiagnostic.Trim();

	m_szICDDiagnosticKey.Trim();


	m_hms_examTbl.SetValue(_T("he_updatedby"), pMF->GetCurrentUser()); 
	m_hms_examTbl.SetValue(_T("he_updateddate"), pMF->GetSysDateTime()); 
	m_hms_examTbl.SetValue(_T("he_status"), m_szStatus); 
	//m_hms_examTbl.SetValue(_T("he_examdate"), pMF->GetSysDateTime()); 
	m_hms_examTbl.SetValue(_T("he_doctor"), m_szDoctorKey); 
//	m_hms_examTbl.SetValue(_T("he_pathology"), m_szPathologyProcess); 
	m_hms_examTbl.SetValue(_T("he_medical"), m_szPathologyProcess); 
	m_hms_examTbl.SetValue(_T("he_examine"), m_szExamine); 
	m_hms_examTbl.SetValue(_T("he_pulse"), m_nPulse);
	m_hms_examTbl.SetValue(_T("he_temperature"), m_nTemperature); 
	m_hms_examTbl.SetValue(_T("he_bloodpressure"), m_nBloodPressure); 
	m_hms_examTbl.SetValue(_T("he_bloodpressurex"), m_nBloodPressurex);
	m_hms_examTbl.SetValue(_T("he_breathinterval"), m_nBreathingInterval);
	m_hms_examTbl.SetValue(_T("he_weight"), m_nWeight); 
	m_hms_examTbl.SetValue(_T("he_height"), m_nHeight); 
	m_hms_examTbl.SetValue(_T("he_prediagnostic"), m_szPreDiagnostic); 
	m_hms_examTbl.SetValue(_T("he_icd10"), m_szICDDiagnosticKey);	
	m_hms_examTbl.SetValue(_T("he_diagnostic"), m_szConclusion);

	if (m_bHATD)
		m_hms_examTbl.SetValue(_T("he_hatd"), _T("Y"));
	else
		m_hms_examTbl.SetValue(_T("he_hatd"), _T("N"));

	m_hms_examTbl.SetValue(_T("he_typeid"), m_szExamTypeKey);
	m_hms_examTbl.SetValue(_T("he_hasallergy"), m_szHasAllergyKey);
	

	m_hms_disease_histTbl.SetValue(_T("hdh_createdby"), pMF->GetCurrentUser());
	m_hms_disease_histTbl.SetValue(_T("hdh_createddate"), pMF->GetSysDateTime());
	m_hms_disease_histTbl.SetValue(_T("hdh_updatedby"), pMF->GetCurrentUser());
	m_hms_disease_histTbl.SetValue(_T("hdh_updateddate"), pMF->GetSysDateTime());
	m_hms_disease_histTbl.SetValue(_T("hdh_patientno"), pMF->m_nPatientNo);
	m_hms_disease_histTbl.SetValue(_T("hdh_docno"), pMF->m_nDocumentNo);
	m_hms_disease_histTbl.SetValue(_T("hdh_owner"), m_szOwner);
	m_hms_disease_histTbl.SetValue(_T("hdh_family"), m_szFamily);
	m_hms_disease_histTbl.SetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
	m_hms_disease_histTbl.SetValue(_T("HDH_HASALLERGY"), m_szHasAllergyKey);
	//Một số thông tin của C13
	m_hms_examTbl.SetValue(_T("he_lydovaovien"), m_szLydovaovien);
	m_hms_examTbl.SetValue(_T("he_toanthan"), m_szToanthan);
	m_hms_examTbl.SetValue(_T("he_tuanhoan"),m_szTuanhoan);
	m_hms_examTbl.SetValue(_T("he_hohap"),m_szHohap);
	m_hms_examTbl.SetValue(_T("he_tieuhoa"), m_szTieuhoa);
	m_hms_examTbl.SetValue(_T("he_tietnieu"), m_szTietnieu);
	m_hms_examTbl.SetValue(_T("he_thankinh"), m_szThankinh);
	m_hms_examTbl.SetValue(_T("he_khop"), m_szKhop);
	m_hms_examTbl.SetValue(_T("he_coquankhac"), m_szCoquankhac);
	m_hms_examTbl.SetValue(_T("he_kehoachxn"), m_szKehoachxn);
	m_hms_examTbl.SetValue(_T("he_kehoachdieutri"), m_szKehoachdieutri);
	m_hms_examTbl.SetValue(_T("he_tienluong"), m_szTienluong);
	m_hms_examTbl.SetValue(_T("he_dinhduong"), m_szDinhduong);
}
void CHMSExamineV2::SetDefaultValues()
{

	m_szOwner.Empty();
	m_szFamily.Empty();
	m_szDrugAllergy.Empty();
	m_szHasAllergyKey.Empty();
	//m_szDate.Empty();
	m_szDoctorKey.Empty();
	m_szLydovaovien.Empty();
	m_szExamTypeKey.Empty();
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
	m_bCheckReload = false;
	m_nBeep = 3;

	m_bHATD=FALSE;
	m_bIsReq = false;
	m_szHasAllergyKey.Empty();
	m_szToanthan.Empty();
	m_szTuanhoan.Empty();
	m_szHohap.Empty();
	m_szTieuhoa.Empty();
	m_szTietnieu.Empty();
	m_szThankinh.Empty();
	m_szKhop.Empty();
	m_szCoquankhac.Empty();
	m_szDinhduong.Empty();
	m_szKehoachxn.Empty();
	m_szKehoachdieutri.Empty();
	m_szTienluong.Empty();
}
int CHMSExamineV2::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL, szToanthan, szTuanhoan, szHohap, szTieuhoa, 
			szTietnieu, szThankinh, szKhop, szCoquankhac;
		 CRecord rs(&pMF->m_db);		  

		m_wndReloadInfo.EnableWindow(FALSE);
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);

			m_wndHATD.EnableWindow(TRUE);
			m_wndICDDiagnostic.EnableWindow(true);
			m_wndICDDiagnostic.SetCheckValue(false);
			m_wndConclusion.SetCheckValue(false);
			m_wndConclusion.EnableWindow(false);

			m_wndConclusion.SetCheckValue(false);
			if(nOldMode == VM_NONE)
 				SetDefaultValues(); 			
			if(m_bDoctor)
				m_szDoctorKey = pMF->GetCurrentUser();
			else
			{
				m_wndDoctor.SetCurSel(0);
				m_szDoctorKey.Empty();
				m_wndDoctor.SetFocus();
			}

			if(!m_szDoctorKey.IsEmpty())
				m_wndExamType.SetFocus();

		/*szSQL.Format(_T(" SELECT distinct(GET_SYSSEL_DESC_VL('khamls_default', 'hohap')) as hohap,") \
					_T(" GET_SYSSEL_DESC_VL('khamls_default', 'tieuhoa') as tieuhoa,") \
					_T(" GET_SYSSEL_DESC_VL('khamls_default', 'tietnieu') as tietnieu,") \
					_T(" GET_SYSSEL_DESC_VL('khamls_default', 'thankinh') as thankinh,") \
					_T(" GET_SYSSEL_DESC_VL('khamls_default', 'khop') as khop,") \
					_T(" GET_SYSSEL_DESC_VL('khamls_default', 'cqkhac') as cqkhac,") \
					_T(" GET_SYSSEL_DESC_VL('khamls_default', 'toanthan') as toanthan,") \
					_T(" GET_SYSSEL_DESC_VL('khamls_default', 'tuanhoan') as tuanhoan") \
					_T(" from sys_sel") \
					_T(" where ss_id='khamls_default'"));
					rs.ExecSQL(szSQL);
		
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("toanthan"), szToanthan);
			rs.GetValue(_T("tuanhoan"), szTuanhoan);
			rs.GetValue(_T("hohap"), szHohap);
			rs.GetValue(_T("tieuhoa"), szTieuhoa);
			rs.GetValue(_T("tietnieu"), szTietnieu);
			rs.GetValue(_T("thankinh"), szThankinh);
			rs.GetValue(_T("khop"), szKhop);
			rs.GetValue(_T("cqkhac"), szCoquankhac);
		}
			m_szToanthan = szToanthan;
			m_szTuanhoan = szTuanhoan;
			m_szHohap = szHohap;			
			m_szTieuhoa = szTieuhoa;
			m_szTietnieu = szTietnieu;
			m_szThankinh = szThankinh;
			m_szKhop = szKhop;
			m_szCoquankhac = szCoquankhac;
		*/
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndHATD.EnableWindow(TRUE);
			m_wndConclusion.SetCheckValue(true);
		//	m_wndConclusion.EnableWindow(true);
			m_wndPreDiagnostic.SetCheckValue(false);
			//m_szDoctorKey = pMF->m_szDoctor;
			
			if(m_szDoctorKey.IsEmpty() && m_bDoctor){				
				m_szDoctorKey = pMF->GetCurrentUser();
			}
			else
				m_wndICDDiagnostic.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndUpdate.SetFocus();
			m_wndHATD.EnableWindow(FALSE);
			//CHMSExamineV2.EnableWindow(TRUE);
			//CHMSExamineV2.SetReadOnly(TRUE);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, -1);
			m_wndHATD.EnableWindow(FALSE);
 			SetDefaultValues();
			m_wndUpdate.SetFocus();
#ifdef HAVE_LED
			m_wndCallIn.EnableWindow(false);
#endif

 			break; 
 		}; 

		if(m_szStatus == _T("T"))
			m_wndUpdate.EnableWindow(false);
		else
		{
			if(nMode == VM_ADD)
				m_wndReloadInfo.EnableWindow(TRUE);
			else
				m_wndReloadInfo.EnableWindow(FALSE);

		}
		
 		UpdateData(FALSE); 

	if (pMF->m_nRoomID != m_nRoomID)
	{
		m_wndUpdate.EnableWindow(false);
		m_wndTerminate.EnableWindow(false);
	}
#ifdef HAVE_LED
		m_wndCallIn.EnableWindow(true);
#endif
		if(m_bIsReq)
		{
			m_wndICDDiagnostic.SetCheckValue(false);
		}

 		return nOldMode; 
} 
/*void CHMSExamineV2::OnOwnerChange(){
	
} */
/*void CHMSExamineV2::OnOwnerSetfocus(){
	
} */
/*void CHMSExamineV2::OnOwnerKillfocus(){
	
} */
int CHMSExamineV2::OnOwnerCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnFamilyChange(){
	
} */
/*void CHMSExamineV2::OnFamilySetfocus(){
	
} */
/*void CHMSExamineV2::OnFamilyKillfocus(){
	
} */
int CHMSExamineV2::OnFamilyCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnDrugAllergyChange(){
	
} */
/*void CHMSExamineV2::OnDrugAllergySetfocus(){
	
} */
/*void CHMSExamineV2::OnDrugAllergyKillfocus(){
	
} */
int CHMSExamineV2::OnDrugAllergyCheckValue(){
	return 0;
}
int CHMSExamineV2::OnToanthanCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnTuanhoanCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnHohapCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnTieuhoaCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnTietnieuCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnThankinhCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnKhopCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnCoquankhacCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnDinhduongCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnKehoachxnCheckValue(){
	return 0;
} 
int CHMSExamineV2::OnKehoachdieutriCheckValue(){
	return 0;
}
int CHMSExamineV2::OnTienluongCheckValue(){
	return 0;
} 

/*void CHMSExamineV2::OnDateChange(){
	
} */
/*void CHMSExamineV2::OnDateSetfocus(){
	
} */
/*void CHMSExamineV2::OnDateKillfocus(){
	
} */
int CHMSExamineV2::OnDateCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(CompareDateTime(m_szDate, pMF->m_szEntryDate) < 0)
		return -1;
	if(CompareDateTime(m_szDate, pMF->GetSysDateTime()) > 0)
		return -1;
	
	return 0;
} 

void CHMSExamineV2::OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamineV2::OnExamTypeSelendok(){
	 
}
/*void CHMSExamineV2::OnExamTypeSetfocus(){
	
}*/
/*void CHMSExamineV2::OnExamTypeKillfocus(){
	
}*/
long CHMSExamineV2::OnExamTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
//	szWhere.Format(_T(" and cast(ss_code as integer) >=18 "));
//	szWhere.Format(_T(" and cast(ss_code as integer) not in(select he_typeid from hms_exam where he_docno =%ld and he_status<>'O' and he_receptidx <> %ld) "),
//		pMF->m_nDocumentNo, m_nReceptIndex);
	if (pMF->GetCurrentDepartmentID() == _T("TTHTSS"))
	{
	return pMF->LoadSelectionList(&m_wndExamType, _T("HMS_EXAM_TYPE_EX"), m_szExamTypeKey,szWhere);
	}
	else 
	return pMF->LoadSelectionList(&m_wndExamType, _T("HMS_EXAM_TYPE"), m_szExamTypeKey,szWhere);
}
/*void CHMSExamineV2::OnExamTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSExamineV2::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamineV2::OnDoctorSelendok(){
	 
}
/*void CHMSExamineV2::OnDoctorSetfocus(){
	
}*/
/*void CHMSExamineV2::OnDoctorKillfocus(){
	
}*/
long CHMSExamineV2::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctorKey);
	};
	szWhere.AppendFormat(_T(" and (su_deptid='%s' or su_hms_xdept='%s' )"), pMF->m_szDept, pMF->m_UserInfo.su_hms_xdept);

	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user ") \
		_T("WHERE su_groupid in('P','D') AND SU_ISACTIVE = 'Y' %s ORDER BY su_name "), szWhere);
//_fmsg(_T("%s"), szSQL);

	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CHMSExamineV2::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExamineV2::OnPathologyProcessChange(){
	
} */
/*void CHMSExamineV2::OnPathologyProcessSetfocus(){
	
} */
/*void CHMSExamineV2::OnPathologyProcessKillfocus(){
	
} */

int CHMSExamineV2::OnLydovaovienCheckValue()
{
	return 0;
} 

int CHMSExamineV2::OnPathologyProcessCheckValue(){
	return 0;
}
/*void CHMSExamineV2::OnExamineChange(){
	
} */
/*void CHMSExamineV2::OnExamineSetfocus(){
	
} */
/*void CHMSExamineV2::OnExamineKillfocus(){
	
} */
int CHMSExamineV2::OnExamineCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnPulseChange(){
	
} */
/*void CHMSExamineV2::OnPulseSetfocus(){
	
} */
/*void CHMSExamineV2::OnPulseKillfocus(){
	
} */
int CHMSExamineV2::OnPulseCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnTemperatureChange(){
	
} */
/*void CHMSExamineV2::OnTemperatureSetfocus(){
	
} */
/*void CHMSExamineV2::OnTemperatureKillfocus(){
	
} */
int CHMSExamineV2::OnTemperatureCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnBloodPressureChange(){
	
} */
/*void CHMSExamineV2::OnBloodPressureSetfocus(){
	
} */
/*void CHMSExamineV2::OnBloodPressureKillfocus(){
	
} */
int CHMSExamineV2::OnBloodPressureCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnBloodPressurexChange(){
	
} */
/*void CHMSExamineV2::OnBloodPressurexSetfocus(){
	
} */
/*void CHMSExamineV2::OnBloodPressurexKillfocus(){
	
} */
int CHMSExamineV2::OnBloodPressurexCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnBreathingIntervalChange(){
	
} */
/*void CHMSExamineV2::OnBreathingIntervalSetfocus(){
	
} */
/*void CHMSExamineV2::OnBreathingIntervalKillfocus(){
	
} */
int CHMSExamineV2::OnBreathingIntervalCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnWeightChange(){
	
} */
/*void CHMSExamineV2::OnWeightSetfocus(){
	
} */
/*void CHMSExamineV2::OnWeightKillfocus(){
	
} */
int CHMSExamineV2::OnWeightCheckValue(){
	if(m_nWeight <= 0)
	{
		m_wndWeight.SetToolTipMessage(_T("Yêu cầu nhập cân nặng cho trẻ em dưới 1 tuổi"));
		return -1;
	}
	return 0;
} 
/*void CHMSExamineV2::OnHeightChange(){
	
} */
/*void CHMSExamineV2::OnHeightSetfocus(){
	
} */
/*void CHMSExamineV2::OnHeightKillfocus(){
	
} */
int CHMSExamineV2::OnHeightCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnPreDiagnosticChange(){
	
} */
/*void CHMSExamineV2::OnPreDiagnosticSetfocus(){
	
} */
/*void CHMSExamineV2::OnPreDiagnosticKillfocus(){
	
} */
int CHMSExamineV2::OnPreDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSExamineV2::OnRelationDiseaseChange(){
	
} */
/*void CHMSExamineV2::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSExamineV2::OnRelationDiseaseKillfocus(){
	
} */
int CHMSExamineV2::OnRelationDiseaseCheckValue(){
	return 0;
} 
void CHMSExamineV2::OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamineV2::OnICDDiagnosticSelendok(){
	UpdateData(true);
	if(m_szConclusion.IsEmpty())
	{
		m_szConclusion = m_wndICDDiagnostic.GetCurrent(1);
		m_wndConclusion.SetWindowText(m_szConclusion);
	}
//	UpdateData(false);	 
}
/*void CHMSExamineV2::OnICDDiagnosticSetfocus(){
	
}*/
/*void CHMSExamineV2::OnICDDiagnosticKillfocus(){
	
}*/
long CHMSExamineV2::OnICDDiagnosticLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndICDDiagnostic, m_szICDDiagnosticKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICDDiagnostic.IsSearchKey() && !m_szICDDiagnosticKey.IsEmpty()){
	};
	m_wndICDDiagnostic.DeleteAllItems(); 
	int nCount = 0;
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
/*void CHMSExamineV2::OnICDDiagnosticAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExamineV2::OnConclusionChange(){
	
} */
void CHMSExamineV2::OnConclusionSetfocus(){
	m_wndConclusion.SetSel(-1);	
} 
/*void CHMSExamineV2::OnConclusionKillfocus(){
	
} */
int CHMSExamineV2::OnConclusionCheckValue()
{
	return 0;
} 
void CHMSExamineV2::OnPrehistorySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("02.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	CHMSDocumentPreviewDialog dlg(this);
	dlg.DoModal();
}

void CHMSExamineV2::OnReloadInfoSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T(" SELECT *") \
					_T(" FROM") \
					_T(" (") \
					_T("   SELECT * FROM hms_exam") \
					_T("   WHERE he_doctor='%s' AND he_docno < %ld ") \
					_T("   AND he_patientno=%ld") \
					_T("   ORDER BY he_docno DESC") \
					_T(" ) Tbl") \
					_T(" WHERE rownum <= 1"),
					pMF->GetCurrentUser(), pMF->m_nDocumentNo,  pMF->m_nPatientNo);


		rs.ExecSQL(szSQL);

		if (rs.GetRecordCount() < 1)
		{
			ShowMessageBox(_T("Information not found"), MB_ICONERROR | MB_OK);
			return;
		}

	
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("he_doctor"), m_szDoctorKey); 
			rs.GetValue(_T("he_medical"), m_szPathologyProcess); 
			rs.GetValue(_T("he_examine"), m_szExamine); 
			rs.GetValue(_T("he_pulse"), m_nPulse); 
			rs.GetValue(_T("he_temperature"), m_nTemperature); 
			rs.GetValue(_T("he_bloodpressure"), m_nBloodPressure); 
			rs.GetValue(_T("he_bloodpressurex"), m_nBloodPressurex); 
			rs.GetValue(_T("he_breathinterval"), m_nBreathingInterval); 
			rs.GetValue(_T("he_weight"), m_nWeight); 
			rs.GetValue(_T("he_height"), m_nHeight); 
			rs.GetValue(_T("he_prediagnostic"), m_szPreDiagnostic); 

			rs.GetValue(_T("he_hatd"), tmpStr);

			if (tmpStr == _T("Y"))
				m_bHATD = TRUE;
			else
				m_bHATD = FALSE;
			
			CRecord rs2(&pMF->m_db);
			szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld "), pMF->m_nPatientNo);
			rs2.ExecSQL(szSQL);
			if(!rs2.IsEOF())
			{
				rs2.GetValue(_T("hdh_owner"), m_szOwner);
				rs2.GetValue(_T("hdh_family"), m_szFamily);
				rs2.GetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
			}

			szSQL.Format(_T(" SELECT *") \
						_T(" FROM") \
						_T(" (") \
						_T("   SELECT hd_reldisease") \
						_T("   FROM hms_doc ") \
						_T("   WHERE hd_docno < %ld AND hd_patientno=%ld") \
						_T("   ORDER BY hd_docno DESC") \
						_T(" ) Tbl") \
						_T(" WHERE rownum=1"), pMF->m_nDocumentNo, pMF->m_nPatientNo);
			rs2.ExecSQL(szSQL);
			if(!rs2.IsEOF())
			{
				rs2.GetValue(_T("hd_reldisease"), m_szRelationDisease);
			}

		}
		m_wndPathologyProcess.SetFocus();
		UpdateData(FALSE);
		return;
	

}

void CHMSExamineV2::OnCallInSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("02.06")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	callPatient();
} 

void CHMSExamineV2::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	//m_wndDoctorLabel.SetWindowText(_T("BAC SI"));
	

	if(pMF->m_nDocumentNo <= 0)
		return;


	if(!pMF->CheckPermission(_T("02.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	bool bUpdate = false;
	if(pMF->IsActiveDocument())
		bUpdate = true;
	else{
	   if(m_szStatus == _T("O") || m_szStatus == _T("P"))
		   bUpdate = true;
	}

	if(bUpdate)	
	{
		//Check đủ tiền tạm ứng thì cho khám luôn (áp dụng cho phòng khám Covid)
		szSQL.Format(_T("HMS_CHECKDEPOSITAMOUNT(%ld,'E') "), m_nDocumentNo);
	    double nAmount = str2double(pMF->ExecDML(szSQL));
		
		if( (pMF->GetObjectType() == _T("S") || pMF->GetObjectType() == _T("X"))  && 
			pMF->m_szPaymentExamFeeRequest == _T("Y") && !pMF->IsPaymentFee(_T("E"), pMF->m_nRefIndex) && nAmount <0) 
		{
			ShowMessageBox(_T("This patients unpaid examination fee. Can not update."), MB_OK);
			return;
		}

		// cap nhat trong hms_exam_pending neu benh nhan dang trang thai C ma an cap nhat thi update thanh dang phuc vu
		
		CString szSQL;
		szSQL.Format(_T(" UPDATE hms_exam_pending ") \
					_T("	SET hep_pending    = 'P' ") \
					_T("	WHERE hep_deptid = '%s' ") \
					_T("	AND hep_roomid   = %d ") \
					_T("	AND hep_pending  ='C' and hep_docno = %ld "), m_szDept,m_nRoomID, m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		if(m_szExamTypeKey.IsEmpty())
		{
			CRecord rs(&pMF->m_db);
			CString szSQL;
			szSQL.Format(_T("SELECT hrl_inscode FROM hms_roomlist WHERE hrl_deptid='%s' and hrl_id=%d "),
				pMF->m_szDept, pMF->m_nRoomID);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("hrl_inscode"), m_szExamTypeKey);
				UpdateData(FALSE);
			}

		}
		SetMode(VM_ADD);
	}
} 
void CHMSExamineV2::OnTerminateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	if(!pMF->CheckPermission(_T("02.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	bool bUpdate = false;
	if(pMF->IsActiveDocument())
		bUpdate = true;
	else{
	   if(m_szStatus == _T("O") || m_szStatus == _T("P"))
		   bUpdate = true;
	}

	if(bUpdate)	
	{
		szSQL.Format(_T("HMS_CHECKDEPOSITAMOUNT(%ld,'E') "), m_nDocumentNo);
	    double nAmount = str2double(pMF->ExecDML(szSQL));

		if((pMF->GetObjectType() == _T("S") || pMF->GetObjectType() == _T("X") ) 
			&& pMF->m_szPaymentExamFeeRequest == _T("Y") 
			&& !pMF->IsPaymentFee(_T("E"), pMF->m_nRefIndex)
			&& nAmount<0)
		{
			ShowMessageBox(_T("This patients unpaid examination fee. Can not update."), MB_OK);
			return;
		}

		if(m_szExamTypeKey.IsEmpty())
		{
			CRecord rs(&pMF->m_db);
			CString szSQL;
			szSQL.Format(_T("SELECT hrl_inscode FROM hms_roomlist WHERE hrl_deptid='%s' and hrl_id=%d "),
				pMF->m_szDept, pMF->m_nRoomID);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("hrl_inscode"), m_szExamTypeKey);
				UpdateData(FALSE);
			}

		}

		SetMode(VM_EDIT);
	}
} 
void CHMSExamineV2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSExamine();
} 
void CHMSExamineV2::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSExamine();} 

int CHMSExamineV2::OnUpdateDiseasePrehistory(){

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("02.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	CHMSDiseasePrehistoryDialog dlg(this);
	if(dlg.DoModal() == IDOK){
		
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno=%ld "), pMF->m_nPatientNo, pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hdh_owner"), m_szOwner);
			rs.GetValue(_T("hdh_family"), m_szFamily);
			rs.GetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
			UpdateData(false);
		}
	}
	return 0;
}

int CHMSExamineV2::OnCreateAdmission(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(!pMF->CheckPermission(_T("02.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld AND hd_suggestion='A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		CHMSAdmissionClinicalDialog dlg(pMF);
		rs.GetValue(_T("hd_indept"), dlg.m_szDeptID );
		dlg.DoModal();
	}
	return 0;
}
#include "ExamSpecialistEye.h"
int CHMSExamineV2::OnCertificateofphysicaleyeclinic()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if (pMF->m_nDocumentNo > 0)
	{
		CExamSpecialistEye dlg(this);
		dlg.DoModal();
	}
	return 0;
}
#include "HMSFastDiagnosticDialog.h"
void CHMSExamineV2::OnConclusionSelect(){	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(!m_szICDDiagnosticKey.IsEmpty())
	{
		CHMSFastDiagnosticDialog dlg(this);
		dlg.m_nPatientNo = pMF->m_nPatientNo;
		dlg.m_nDocumentNo = pMF->m_nDocumentNo;
		dlg.m_szICD10Key = m_szICDDiagnosticKey;
		dlg.m_nRoomID = m_nRoomID;
		dlg.m_szConclusionx = m_wndICDDiagnostic.GetCurrent(1);
		if(dlg.DoModal() == IDOK){			
			if(!dlg.m_szConclusion.IsEmpty())
				m_szConclusion = dlg.m_szConclusion;
		}
	}
	UpdateData(false);
}
int CHMSExamineV2::OnMedicalexams(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	/*if (pMF->m_nDocumentNo > 0)
	{
		CHeathExamDialog dlg(this);
		dlg.m_nDocNo = pMF->m_nDocumentNo;
		dlg.m_nPatientNo = pMF->m_nPatientNo;
		dlg.DoModal();
	}*/
	return 0;
}


int CHMSExamineV2::OnAddHMSExamine(){
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
	
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSExamineV2::OnEditHMSExamine(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
 
} 
int CHMSExamineV2::OnDeleteHMSExamine(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 

 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szWhere; 
	CRecord rs(&pMF->m_db);

 	if(ShowMessageBox(_T("Delete sheet examine"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("SELECT count(*) FROM hms_testorder WHERE hpc_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return -1;

	szSQL.Format(_T("SELECT count(*) FROM hms_operation WHERE ho_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return -1;

 	SetDefaultValues();

	m_hms_examTbl.SetValue(_T("he_updatedby"), pMF->GetCurrentUser()); 
	m_hms_examTbl.SetValue(_T("he_updateddate"), pMF->GetSysDateTime()); 
	m_hms_examTbl.SetValue(_T("he_status"), m_szStatus); 
	m_hms_examTbl.SetValue(_T("he_examdate"), m_szDate); 
	m_hms_examTbl.SetValue(_T("he_doctor"), m_szDoctorKey); 
//	m_hms_examTbl.SetValue(_T("he_pathology"), m_szPathologyProcess); 
	m_hms_examTbl.SetValue(_T("he_medical"), m_szPathologyProcess); 
	m_hms_examTbl.SetValue(_T("he_examine"), m_szExamine); 
	m_hms_examTbl.SetValue(_T("he_pulse"), m_nPulse); 
	m_hms_examTbl.SetValue(_T("he_temperature"), m_nTemperature); 
	m_hms_examTbl.SetValue(_T("he_bloodpressure"), m_nBloodPressure); 
	m_hms_examTbl.SetValue(_T("he_bloodpressurex"), m_nBloodPressurex);
	m_hms_examTbl.SetValue(_T("he_breathinterval"), m_nBreathingInterval);
	m_hms_examTbl.SetValue(_T("he_weight"), m_nWeight); 
	m_hms_examTbl.SetValue(_T("he_height"), m_nHeight); 
	m_hms_examTbl.SetValue(_T("he_prediagnostic"), m_szPreDiagnostic); 
	m_hms_examTbl.SetValue(_T("he_icd10"), m_szICDDiagnosticKey); 
	
	m_hms_examTbl.SetValue(_T("he_diagnostic"), m_szConclusion); 

	m_hms_examTbl.SetValue(_T("he_status"), _T("O"));

	if (m_bHATD)
		m_hms_examTbl.SetValue(_T("he_hatd"), _T("Y"));
	else
		m_hms_examTbl.SetValue(_T("he_hatd"), _T("N"));
	
	szSQL.Format(_T("UPDATE hms_doc SET hd_reldisease='', hd_doctor='' WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
	pMF->ExecSQL(szSQL);
//	szSQL.Format(_T(" UPDATE hms_disease_hist SET hdh_owner='', hdh_family='', hdh_drugallergy='' WHERE hdh_patientno=%ld "), pMF->m_nPatientNo);
//	pMF->ExecSQL(szSQL);

	szWhere.Format(_T(" WHERE he_docno=%ld AND he_receptidx=%ld and he_status ='P' "), pMF->m_nDocumentNo, pMF->m_nRefIndex); 
		szSQL = m_hms_examTbl.GetUpdateSQL(_T("he_createdby,he_createddate,he_patientno,he_docno,he_receptidx")); 
		szSQL += szWhere;
 	
 //_fmsg(_T("%s"), szSQL);
 	
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSExamine(); 
 	}
	return 0;
}
int CHMSExamineV2::OnSaveHMSExamine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
//	if(GetMode() == VM_ADD)
	{
		m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	}

 	if(!IsValidateData()) 
 		return -1; 

 	CString szSQL; 
	CString szWhere; 
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	// kiem tra neu kieu kham trung voi cac phong kham truoc thi ko cho luu
	
	szSQL.Format(_T("SELECT count(*) from hms_exam where he_docno = %ld  and he_receptidx <> %ld and he_typeid=%d "), pMF->m_nDocumentNo,m_nReceptIndex, ToInt(m_szExamTypeKey));
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() >=1)
	{

		int nRet = MessageBox(_T("Kiểu khám đã trùng với 1 phòng khám khác bạn có chắc chắn không?"),_T(""), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
		if (nRet == IDNO)
		{
			ShowToolTip(&m_wndExamType, _T("Trùng lặp kiểu khám"));
			return -1;
		}
	}

	// Tien su kham
	szSQL.Format(_T("SELECT count(*) FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno=%ld "), pMF->m_nPatientNo, pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue()<= 0)
	{
		if(!m_szFamily.IsEmpty() || !m_szDrugAllergy.IsEmpty() || !m_szOwner.IsEmpty() || !m_szHasAllergyKey.IsEmpty())
		{
			szSQL = m_hms_disease_histTbl.GetInsertSQL();
		}
	}
	else
	{
		szWhere.Format(_T(" WHERE hdh_patientno=%ld and hdh_docno=%ld "), pMF->m_nPatientNo, pMF->m_nDocumentNo);
		szSQL = m_hms_disease_histTbl.GetUpdateSQL(_T("hdd_createdby,hdh_createddate,hdh_patientno,hdh_docno"));
		szSQL += szWhere;
	}
	
	pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

 	if(GetMode() == VM_ADD)
	{ 
		szWhere.Format(_T(" WHERE he_docno=%ld AND he_receptidx=%ld"), pMF->m_nDocumentNo, m_nReceptIndex); 
 		szSQL = m_hms_examTbl.GetUpdateSQL(_T("he_createdby,he_createddate,he_patientno,he_docno,he_receptidx,he_diagnostic")); 
 		szSQL += szWhere;
 	} 
 	else if(GetMode() == VM_EDIT)
	{
		
		szWhere.Format(_T(" WHERE he_docno=%ld AND he_receptidx=%ld "), pMF->m_nDocumentNo, m_nReceptIndex); 
		szSQL = m_hms_examTbl.GetUpdateSQL(_T("he_createdby,he_createddate,he_patientno,he_docno,he_receptidx")); 
		szSQL += szWhere;

 	} 

//_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{
		if(GetMode() == VM_ADD)
		{
			szSQL.Format(_T("UPDATE hms_doc SET hd_reldisease='%s', hd_doctor='%s' ") \
					_T("WHERE hd_docno=%ld"), m_szRelationDisease,  m_szDoctorKey, pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);
		}
		else
		{
			CString szICD10, szConclusion, szDiagnostic, szDoctor;
			CRecord rs(&pMF->m_db);
			szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("hd_icd"), szICD10);
				rs.GetValue(_T("hd_diagnostic"), szDiagnostic);
				rs.GetValue(_T("hd_conclusion"), szConclusion);
				rs.GetValue(_T("hd_doctor"), szDoctor);
				if(szICD10.IsEmpty())
					szICD10 = m_szICDDiagnosticKey;
				if(szConclusion.IsEmpty())
					szConclusion = m_szConclusion;
				if(szDiagnostic.IsEmpty())
					szDiagnostic = m_wndICDDiagnostic.GetCurrent(1);
				if(szDoctor.IsEmpty())
					szDoctor = m_szDoctorKey;

				szSQL.Format(_T("UPDATE hms_doc SET hd_reldisease='%s', hd_icd='%s', hd_diagnostic='%s', hd_conclusion='%s', hd_doctor='%s' ") \
					_T("WHERE hd_docno=%ld"), m_szRelationDisease, szICD10, szDiagnostic, szConclusion, szDoctor, pMF->m_nDocumentNo);
				pMF->ExecSQL(szSQL);
			}	
		}
		//Cập nhật lại giá trị đã nhập ở các ô khám chi tiết -> He_exam để sử dụng ở các mẫu biểu
		szSQL.Format(_T("he_exam_update_C13(%ld, %ld) "), pMF->m_nDocumentNo, m_nReceptIndex);
		int ret = str2int(pMF->ExecDML(szSQL));
		if (ret >=0)
			{
			
			}
		GetDataToScreen();		
 	}
 	pMF->m_bExam = TRUE;
	SetMode(VM_VIEW);
	pMF->m_wndPatientDocument.m_wndDocumentNo.SetFocus();
 	return ret; 	
}
int CHMSExamineV2::OnCancelHMSExamine(){
 	SetMode(VM_VIEW); 
 	return 0;
}

void CHMSExamineV2::OnHATDSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

int CHMSExamineV2::OnHMSExamineListLoadData(){
	return 0;
}

void CHMSExamineV2::LoadData(long nDocNo, int nReceptIdx, int nRoomID)
{
	CMainFrame *pMF =(CMainFrame *) AfxGetMainWnd();	
	if(nDocNo <= 0)
	{
		SetDefaultValues();
		UpdateData(false);
		return;
	}
	m_nDocumentNo = nDocNo;
	m_nReceptIndex = nReceptIdx;
	m_nSelRoomID = nRoomID;
	
	GetDataToScreen();
}


void CHMSExamineV2::InitCommPort()
{
	CString szCommPort;
	LONG    lLastError = ERROR_SUCCESS;

	//for (int i =0; i < 3; i++)
	{
	    // Attempt to open the serial port (COM1)
		szCommPort.Format(_T("COM1"));
    	lLastError = m_SerialPort.Open(szCommPort,0,0,false);
		if (lLastError != ERROR_SUCCESS)
		{
			m_SerialPort.Close();
		}
//		else
//			break;
	}

	// Setup the serial port (9600,N81) using hardware handshaking
	lLastError = m_SerialPort.Setup(CSerial::EBaud9600,CSerial::EData8,CSerial::EParNone,CSerial::EStop1);
	if (lLastError != ERROR_SUCCESS)
	{
		m_SerialPort.Close();
		return;
	}


	//CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	////Ma benh vien Ninh binh = 37101
	//if(pMF->m_CompanyInfo.sc_id == _T("37101")){
	//		// Setup the serial port (9600,N81) using hardware handshaking
	//	lLastError = m_SerialPort.Setup(CSerial::EBaud19200,CSerial::EData8,CSerial::EParNone,CSerial::EStop1);
	//	if (lLastError != ERROR_SUCCESS)
	//	{
	//		m_SerialPort.Close();
	//		return;
	//	}
	//}
	//else
	//{
	//	// Setup the serial port (9600,N81) using hardware handshaking
	//	lLastError = m_SerialPort.Setup(CSerial::EBaud9600,CSerial::EData8,CSerial::EParNone,CSerial::EStop1);
	//	if (lLastError != ERROR_SUCCESS)
	//	{
	//		m_SerialPort.Close();
	//		return;
	//	}

	//	//WriteDataToPLC(&m_SerialPort, 0, 2, 1, m_nBeep);
	//}
}

void CHMSExamineV2::CloseCommPort()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(pMF->m_szHaveLed == _T("Y"))
	{
		if(pMF->m_CompanyInfo.sc_id != _T("37101"))
		{
			WriteDataToPLC(&m_SerialPort, 0, 5, 1, 6, _T(""));
		}
		m_SerialPort.Close();
	}
}

bool
xstrtoiV2(char *str, int *result)
{
    char *endptr;
    long int lresult;

    lresult = strtol(str, &endptr, 10);
    if (str[0] == '\0' || endptr[0] != '\0')
    	return FALSE;

    *result = (int) lresult;
    return TRUE;
}


void CHMSExamineV2::WriteDataToPLC(CSerial* serial, int nNumber, int nCtrl1, int nCtrl2, int nCtrl3, CString szPatientName){
	CString tmpStr;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	
	if(!serial->IsOpen())
		return;
	
	if(nNumber >= 1000)
	{
		tmpStr.Format(_T("%ld"), nNumber);
		tmpStr = tmpStr.Right(3);		
	}
	else
		tmpStr.Format(_T("%.3d"), nNumber);


//begin send data to lpc
	CString szBuffer;
	szBuffer.Format(_T("*R%s-%s#"), tmpStr, szPatientName);
	DWORD dwChar;
	char buff[3];
	char ch;
	CStringA szWriteString;
	szWriteString.Empty();
	int nL, nH;
	for (int i =0; i < szBuffer.GetLength();i++)
	{
		dwChar = (DWORD) szBuffer[i];
		nL = dwChar&0x00ff;
		nH = (dwChar>>8)&0x00ff;
		buff[0] = (char)nL;
		buff[1] = (char) nH;
		szWriteString.AppendFormat("%c%c", buff[0], buff[1]);
	}
//MessageBoxA(0, szWriteString, 0, 0);

	serial->Write(szWriteString, szWriteString.GetLength());
	
	serial->Purge();


//	//37101 Ma benh vien NInh Binh
//	if(pMF->m_CompanyInfo.sc_id != _T("37101"))
//	{
//		if(nNumber >= 1000)
//		{
//			tmpStr.Format(_T("%ld"), nNumber);
//			tmpStr = tmpStr.Right(3);		
//		}
//		else
//			tmpStr.Format(_T("%.3d"), nNumber);
//	//begin send data to lpc
//		CString szBuffer;
//		szBuffer.Format(_T("%c"), _T('{'));
//		serial->Write(_T("{"), 1);
//	//Hang tram
//		szBuffer.Format(_T("%c"), tmpStr[0]);
//		serial->Write(szBuffer, 1);
//	//hang chuc
//		szBuffer.Format(_T("%c"), tmpStr[1]);
//		serial->Write(szBuffer, 1);
//	//hang doi vi
//		szBuffer.Format(_T("%c"), tmpStr[2]);
//		serial->Write(szBuffer, 1);
//	//Ctrl1 : 2: Cho phep hoat dong dem, 5: Tat bo dem
//		szBuffer.Format(_T("%c"), nCtrl1);
//		serial->Write(szBuffer, 1);
//	//Ctrl2 : luon khac 0
//		szBuffer.Format(_T("%d"), nCtrl2);
//		serial->Write(szBuffer, 1);
//	//Ctrl3: 3 Dung coi, 6: Khong dung coi
//		szBuffer.Format(_T("%c"), nCtrl3);
//		serial->Write(szBuffer, 1);
//	//End send data to lpc
//		serial->Write(_T("}"), 1);
//		serial->Purge();
//	}
//	else
//	{
//		CString tmpStr;
//		int val =0;
//		char ch;
//		ch = 0x00E;
//		char str[7];
///*
//		//Clear screen
//		tmpStr.Format(_T("07000000"));
//		for (int i =0; i < 8; i+=2)
//		{
//			sprintf(str, "0x%c%c", (char)tmpStr[i], (char)tmpStr[i+1]);
//			sscanf(str, "0x%X", &val);
//			ch = (char)val;
//			serial->Write(&ch, 1);
//		}
//*/
//		//display number
//		CString strHex;
//		strHex.Format(_T("%0.2d%0.2d"), nCtrl1, nNumber);
//		val = str2long(strHex);
//
//		//sprintf(str, "%0.2d%0.2d", nCtrl1, nNumber);
//		//int n = atol(str);
//		
//	//	sprintf(str, "%0.4X", n);
//		
//		tmpStr.Format(_T("0C00%0.4X"), val);
//
//		for (int i =0; i < 8; i+=2)
//		{
//			sprintf(str, "0x%c%c", (char)tmpStr[i], (char)tmpStr[i+1]);
//			sscanf(str, "0x%X", &val);
//			ch = (char)val;
//			serial->Write(&ch, 1);
//		}
///*
//		tmpStr.Format(_T("0E000000"));
//		for (int i =0; i < 8; i+=2)
//		{
//			sprintf(str, "0x%c%c", (char)tmpStr[i], (char)tmpStr[i+1]);
//			sscanf(str, "0x%X", &val);
//			ch = (char)val;
//			serial->Write(&ch, 1);
//		}
//*/
//
//
//
//
//		//Gui lenh nhap nhay
//
//		tmpStr.Format(_T("0800%0.4X"), val);
//
//		for (int i =0; i < 8; i+=2)
//		{
//			sprintf(str, "0x%c%c", (char)tmpStr[i], (char)tmpStr[i+1]);
//			sscanf(str, "0x%X", &val);
//			ch = (char)val;
//			serial->Write(&ch, 1);
//		}
///*
//		tmpStr.Format(_T("08000406"), val);
//		for (int i =0; i < 8; i+=2)
//		{
//			sprintf(str, "0x%c%c", (char)tmpStr[i], (char)tmpStr[i+1]);
//			sscanf(str, "0x%X", &val);
//			ch = (char)val;
//			serial->Write(&ch, 1);
//		}
//*/
//		serial->Purge();
//
//	}
}

void CHMSExamineV2::callPatient()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szPatientName;
	CString szName;
	szPatientName = pMF->m_wndPatientDocument.m_szStdPatientName;	
	if(pMF->IsUseLCD())
	{
		CString szSQL;
		szSQL.Format(_T("HMS_EXAM_PENDING_CALL(%ld, '%s', %d, %ld)"),
			m_nDocumentNo, pMF->m_szDept, pMF->m_nRoomID, m_nReceptIndex);
		pMF->ExecDML(szSQL);
	}
	else
	{
		WriteDataToPLC(&m_SerialPort, m_nReceptNo, 2, 1, m_nBeep, szPatientName);	
	}
}
void CHMSExamineV2::OnCallPatientSelect(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szText, szSQL;
	if (pMF->m_szDept == _T("C1.2"))
	{
		szSQL.Format(_T(" HMS_EXAMING_WAITINGBOARD(%ld, '%s',%d, %d) "), m_nDocumentNo, m_szDept, m_nRoomID, m_nReceptNo);
		int res = str2int(pMF->ExecDML(szSQL));
		
		if(res > 0){		
			szText.Format(_T("Mời bệnh nhân số [%d] vào phòng số [%d]"), m_nReceptNo, m_nRoomID);
			//pMF->SetStatusText(szText, 0);
			//pMF->OnReadNumberSpeaking(m_nReceptNo, m_nRoomID, false);
		}
	}
	else
	{
		callPatient();
	}
	
}
BEGIN_MESSAGE_MAP(CHMSExamineV2, CGuiView)
	ON_WM_DESTROY()
END_MESSAGE_MAP()

void CHMSExamineV2::OnDestroy()
{
	CGuiView::OnDestroy();
	CloseCommPort();
}

#include "HMSGeneralRankExamine.h"

int CHMSExamineV2::OnGeneralRankExamine(){
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("EMR.01")))
	{
		ShowMessageBox(_T("Không có quyền thao tác"));
		return 0;

	}
	/*if(pMF->GetDocumentStatus() == _T("T"))
	{
		ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép cập nhật thông tin"));
		return 0;
	}*/
	
	CHMSGeneralRankExamine dlg(this);
	dlg.m_szBoNhiem = _T("N");
	dlg.DoModal();
	return 0;

}

#include "HMSHealthExamHtmlDialog.h"

int CHMSExamineV2::OnHealthExamination(){
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("EMR.02")))
	{
//		ShowMessageBox(_T("Không có quyền thao tác"));
//		return 0;

	}
	/*if(pMF->GetDocumentStatus() == _T("T"))
	{
		ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép cập nhật thông tin"));
		return 0;
	}*/
	
	CHMSHealthExamHtmlDialog dlg(this, _T("HMS_HEALTHEXAM"));
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.DoModal();
	return 0;
}
#include "HMSAddAppointmentA20.h"

int CHMSExamineV2::OnAddAppointMentA20(){
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("20.12")))
	{
		ShowMessageBox(_T("Không có quyền thao tác [20.12]"));
		return 0;

	}
	//if(pMF->GetDocumentStatus() == _T("T"))
	//{
	//	ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép cập nhật thông tin"));
	//	return 0;
	//}
	//
	CHMSAddAppointmentA20 dlg(this);
	dlg.m_nDocno = m_nDocumentNo;
	dlg.m_nReceptNo= pMF->m_nRefIndex;
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
	return 0;
}

#include "IVFRecordInfoDialog.h"
int CHMSExamineV2::OnBenhAnHiemMuonSelect()
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	
	szSQL.Format(_T(" SELECT") \
_T("   (SELECT hd_patientno FROM hms_doc WHERE hd_docno = hdi_docno") \
_T("   ) AS hdi_patientno,") \
_T("   hdi_docno,") \
_T("   (SELECT hd_patientno FROM hms_doc WHERE hd_docno = hdi_refdoc") \
_T("   ) AS hdi_refpatientno,") \
_T("   hdi_refdoc") \
_T(" FROM hms_doc_infertility") \
_T(" WHERE (hdi_docno = %ld") \
_T(" OR hdi_refdoc    =%ld)"), m_nDocumentNo, m_nDocumentNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		long nPatientNo;
		long nDocNo;
		long nRefPatientNo, nRefDocNo;
		rs.GetValue(_T("hdi_patientno"), nPatientNo);
		rs.GetValue(_T("hdi_docno"), nDocNo);
		rs.GetValue(_T("hdi_refpatientno"), nRefPatientNo);
		rs.GetValue(_T("hdi_refdoc"), nRefDocNo);
		pMF->m_bIVFSwitch=true;
		CIVFRecordInfoDialog dlg(this);
		dlg.m_nPatientNo = nPatientNo;
		dlg.m_nDocNo = nDocNo;
		dlg.DoModal();
	}
	else
	{	
		pMF->m_bIVFSwitch=false;
		CIVFRecordInfoDialog dlg(this);
		dlg.m_nPatientNo = pMF->m_nPatientNo;
		dlg.m_nDocNo = pMF->m_nDocumentNo;
		dlg.DoModal();
	}
	return 0;
}

void CHMSExamineV2::OnMenuSelect(CGuiMenu* pMenu){
	TCHAR szItemName[256];
	CPoint point = GetCaretPos();//Create popup at pointer
	ClientToScreen(&point);//convert coordinate from client-related to screen related
	int nPos = pMenu->TrackPopupMenu(TPM_RETURNCMD|TPM_CENTERALIGN|TPM_TOPALIGN|TPM_NONOTIFY, point.x, point.y+20, this);
	if (nPos > 0){
		MENUITEMINFO menuinfo;
		//Init MENUINFO structure
		menuinfo.cbSize = sizeof(menuinfo);
		menuinfo.fMask = MIIM_STRING;
		menuinfo.dwTypeData = szItemName;
		menuinfo.cch = 256;
		GetMenuItemInfo(pMenu->GetSafeHmenu(), nPos, false, &menuinfo);
		m_szMenuString = szItemName;
	}
}
int CHMSExamineV2::OnGeneralRankExamine2(){
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("EMR.01")))
	{
		ShowMessageBox(_T("Không có quyền thao tác"));
		return 0;

	}
	/*if(pMF->GetDocumentStatus() == _T("T"))
	{
		ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép cập nhật thông tin"));
		return 0;
	}*/
	
	CHMSGeneralRankExamine dlg(this);
	dlg.m_szBoNhiem = _T("Y");
	dlg.DoModal();
	return 0;
}
int CHMSExamineV2::OnGeneralRankExamine3(){
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("EMR.01")))
	{
		ShowMessageBox(_T("Không có quyền thao tác"));
		return 0;

	}
	/*if(pMF->GetDocumentStatus() == _T("T"))
	{
		ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép cập nhật thông tin"));
		return 0;
	}*/
	
	CHMSGeneralRankExamine dlg(this);
	dlg.m_szBoNhiem = _T("Z");
	dlg.DoModal();
	return 0;
}



void CHMSExamineV2::OnResizeLayout()
{
	AddResize(&m_wndExamineV2, 100, 100);
	AddLayoutControls(WS_REPOSY, 0, 100, 0, 0,&m_wndPrehistory,&m_wndReloadInfo,&m_wndUpdate,&m_wndTerminate,&m_wndSave,&m_wndCancel,NULL);

	AddLayoutControls(WS_REPOSY, 0, 100, 0, 0,&m_wndPulseLabel,&m_wndBreathingIntervalLabel,&m_wndPreDiagnosticLabel,&m_wndRelationDiseaseLabel,&m_wndICDDiagnosticLabel,&m_wndConclusionLabel, &m_wndCallPatient,  NULL);
	AddLayoutControls(WS_REPOSY, 0, 100, 0, 0,&m_wndPulse,&m_wndTemperatureLabel,&m_wndTemperature,&m_wndBloodPressureLabel,&m_wndBloodPressure,&m_wndBloodPressurex,&m_wndBreathingInterval,&m_wndWeightLabel,&m_wndWeight,&m_wndHeightLabel,&m_wndHeight,NULL);


	AddLayoutControls(WS_REPOSX|WS_REPOSY, 100, 100, 0, 0,&m_wndHATD,NULL);

	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndExamineV2,NULL);


	AddLayoutControls(WS_RESIZEX|WS_REPOSY, 0, 100, 100, 0,&m_wndPreDiagnostic,&m_wndRelationDisease,&m_wndICDDiagnostic,&m_wndConclusion,NULL);


	AddLayoutControls(WS_RESIZEX, 0, 0, 100, 0,&m_wndDiseasePrehistory,&m_wndOwner,&m_wndFamily,&m_wndDrugAllergy,&m_wndPathologyProcess,NULL);

	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndExaminationInformation,NULL);

	AddLayoutControls(WS_REPOSX, 50, 0, 0, 0,&m_wndDoctorLabel, NULL);
	AddLayoutControls(WS_REPOSX|WS_RESIZEX, 50, 0, 50, 0, &m_wndDoctor,NULL);
	AddLayoutControls(WS_RESIZEX, 0, 0, 50, 0,&m_wndExamType,NULL);
}

void CHMSExamineV2::SwitchInfertilityPatient()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

szSQL.Format(_T(" SELECT hdi_roomid, ") \
_T("   (SELECT hd_patientno FROM hms_doc WHERE hd_docno = hdi_docno") \
_T("   ) AS hdi_patientno,") \
_T("   hdi_docno,") \
_T("   (SELECT hd_patientno FROM hms_doc WHERE hd_docno = hdi_refdoc") \
_T("   ) AS hdi_refpatientno,") \
_T("   hdi_refdoc") \
_T(" FROM hms_doc_infertility") \
_T(" WHERE (hdi_docno = %ld") \
_T(" OR hdi_refdoc    =%ld)"), m_nDocumentNo, m_nDocumentNo);


	long nPatientNo, nDocNo, nRefPatientNo, nRefDocNo;
	int nRoomID;
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hdi_patientno"), nPatientNo);
		rs.GetValue(_T("hdi_docno"), nDocNo);
		rs.GetValue(_T("hdi_refpatient"), nRefPatientNo);
		rs.GetValue(_T("hdi_refdoc"), nRefDocNo);
		rs.GetValue(_T("hdi_roomid"), nRoomID);
		if(m_nDocumentNo == nDocNo)
		{
			pMF->m_wndPatientDocument.LoadData(nRefPatientNo, nRefDocNo, nRoomID, 0);
		}
		else
		{
			pMF->m_wndPatientDocument.LoadData(nPatientNo, nDocNo, nRoomID, 0);
		}

	}
}


void CHMSExamineV2::OnCancelInfertility()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(!pMF->CheckPermission(_T("20.10")))
	{
		ShowMessageBox(_T("Không có quyền hủy bệnh án hiếm muộn"));
		return;
	}

	szSQL.Format(_T("HMS_DOC_INFERTILITY_CANCEL('%s',%ld) "), pMF->GetCurrentUser(), pMF->m_nDocumentNo);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể hủy được bệnh án hiếm muộn"));
	}
	else 
	    ShowMessageBox(_T("Bệnh án hiếm muộn đã được hủy thành công"));
}

#include "HMSPregnancyHtmlDialog.h"
void CHMSExamineV2::OnRegistrationPregnancy()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL, szSex;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hp_sex FROM hms_patient WHERE hp_patientno=%ld"), pMF->m_nPatientNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hp_sex"), szSex);
	if(szSex != _T("F"))
		return;

	CHMSPregnancyHtmlDialog dlg(this, _T("PTTYC_GIAYDANGKYMODE"));
	if(dlg.DoModal() == IDOK)
	{
	}
}

void CHMSExamineV2::OnCancelPregnancy()
{
}

void CHMSExamineV2::OnPathologyProcessLabelSelect()
{
	CHMSNoteExtendDlg dlg(&m_wndPathologyProcess);
	dlg.DoModal();
}

void CHMSExamineV2::OnExamineLabelSelect()
{
	CHMSNoteExtendDlg dlg(&m_wndExamineV2);
	dlg.DoModal();
}

long CHMSExamineV2::OnHasAllergyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndHasAllergy.DeleteAllItems();
	m_wndHasAllergy.AddItems(_T("N"), _T("Không"), NULL);
	m_wndHasAllergy.AddItems(_T("Y"), _T("Có"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHasAllergy.IsSearchKey() && !m_szHasAllergyKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHasAllergyKey
};
	m_wndHasAllergy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHasAllergy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}