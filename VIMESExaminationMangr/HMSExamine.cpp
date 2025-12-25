#include "HMSExamine.h"
#include "HMSAdmissionClinicalDialog.h"
#include "HMSCoDisease.h"
#include "HMSDiseasePrehistoryDialog.h"
#include "HMSDocumentPreviewDialog.h"
#include "HMSNoteExtendDlg.h"
#include "HMSTerminateDocumentDialog.h"
#include "HeathExamDialog.h"
#include "MainFrm.h"
#include "Qsofa_News2_Form_Dialog.h"
#include "Qsofa_News2_Form_Result.h"

static void _OnConclusionLabelSelectFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnConclusionSelect();
}

/*static void _OnOwnerChangeFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnOwnerChange();
} */
/*static void _OnOwnerSetfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnOwnerSetfocus();} */
/*static void _OnOwnerKillfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnOwnerKillfocus();
} */
static int _OnOwnerCheckValueFnc(CWnd *pWnd)
{
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
static int _OnFamilyCheckValueFnc(CWnd *pWnd)
{
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
static int _OnDrugAllergyCheckValueFnc(CWnd *pWnd)
{
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
static int _OnDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnDateCheckValue();
}

static void _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                       int nNewItemSel)
{
    ((CHMSExamine *)pWnd)->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnExamTypeSelendokFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnExamTypeSelendok();
}
/*static void _OnExamTypeSetfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnExamTypeKillfocus();
}*/
/*static void _OnExamTypeKillfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnExamTypeKillfocus();
}*/
static long _OnExamTypeLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnExamTypeAddNewFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnExamTypeAddNew();
}*/

static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    ((CHMSExamine *)pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDoctorSelendokFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnDoctorAddNew();
}*/

static void _OnPathologyProcessLabelSelectFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnPathologyProcessLabelSelect();
}

/*static void _OnPathologyProcessChangeFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnPathologyProcessChange();
} */
/*static void _OnPathologyProcessSetfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnPathologyProcessSetfocus();} */
/*static void _OnPathologyProcessKillfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnPathologyProcessKillfocus();
} */
static int _OnPathologyProcessCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnPathologyProcessCheckValue();
}

static void _OnExamineLabelSelectFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnExamineLabelSelect();
}
/*static void _OnExamineChangeFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnExamineChange();
} */
/*static void _OnExamineSetfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnExamineSetfocus();} */
/*static void _OnExamineKillfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnExamineKillfocus();
} */
static int _OnExamineCheckValueFnc(CWnd *pWnd)
{
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
static int _OnPulseCheckValueFnc(CWnd *pWnd)
{
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
static int _OnTemperatureCheckValueFnc(CWnd *pWnd)
{
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
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd)
{
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
static int _OnBloodPressurexCheckValueFnc(CWnd *pWnd)
{
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
static int _OnBreathingIntervalCheckValueFnc(CWnd *pWnd)
{
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
static int _OnWeightCheckValueFnc(CWnd *pWnd)
{
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
static int _OnHeightCheckValueFnc(CWnd *pWnd)
{
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
static int _OnPreDiagnosticCheckValueFnc(CWnd *pWnd)
{
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
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnRelationDiseaseCheckValue();
}
static void _OnICDDiagnosticSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                            int nNewItemSel)
{
    ((CHMSExamine *)pWnd)
        ->OnICDDiagnosticSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnICDDiagnosticSelendokFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnICDDiagnosticSelendok();
}
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnICDDiagnosticKillfocus();
}*/
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnICDDiagnosticKillfocus();
}*/
static long _OnICDDiagnosticLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnICDDiagnosticLoadData();
}
/*static void _OnICDDiagnosticAddNewFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnICDDiagnosticAddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnConclusionChange();
} */
static void _OnConclusionSetfocusFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnConclusionSetfocus();
}
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
    ((CHMSExamine *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnConclusionCheckValue();
}
static void _OnCallPatientSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnCallPatientSelect();
}
static void _OnPrehistorySelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnPrehistorySelect();
}

static void _OnCallInSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnCallInSelect();
}

static void _OnUpdateSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnUpdateSelect();
}
static void _OnTerminateSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnTerminateSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnCancelSelect();
}
static void _OnReloadInfoSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnReloadInfoSelect();
}
static int _OnUpdateDiseasePrehistoryFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnUpdateDiseasePrehistory();
}
static int _OnCertificateofphysicaleyeclinicFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnCertificateofphysicaleyeclinic();
}
static int _OnDeleteExamineFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnDeleteHMSExamine();
}
static int _OnMedicalexamsFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnMedicalexams();
}

static int _OnGeneralRankExamineFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnGeneralRankExamine(L"KSK_CANBO_C12");
}
static int _OnGeneralRankExamine2Fnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnGeneralRankExamine(L"KSK_CAPTUONG_C12");
}
static int _OnGeneralRankExamine3Fnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnGeneralRankExamine(L"KSK_DIHOC_C12");
}
static int _OnGeneralRankExamine4Fnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnGeneralRankExamine(L"KSK_CANBO_CAPUY_A11");
}
static int _OnGeneralRankExamine5Fnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnGeneralRankExamine(L"KSK_DAIHOIDANG_C12");
}
static int _OnHealthExaminationFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnHealthExamination();
}
static int _OnAddAppointMentA20Fnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnAddAppointMentA20();
}

// hiem muon
static int _OnBenhAnHiemMuonSelectFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnBenhAnHiemMuonSelect();
}
static int _OnChuyenBenhNhanFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->SwitchInfertilityPatient();
    return 0;
}

static int _OnCancelInfertilityFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnCancelInfertility();
    return 0;
}

// hiem muon
static int _OnRegistrationPregnancyFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnRegistrationPregnancy();
    return 0;
}
static int _OnCancelPregnancyFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnCancelPregnancy();
    return 0;
}

static int _OnPeriodicExamHealthFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnPeriodicExamHealth();
    return 0;
}

static int _OnCreateAdmissionFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnCreateAdmission();
}
static int _OnAddHMSExamineFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnAddHMSExamine();
}
static int _OnEditHMSExamineFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnEditHMSExamine();
}
static int _OnDeleteHMSExamineFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnDeleteHMSExamine();
}
static int _OnSaveHMSExamineFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnSaveHMSExamine();
}
static int _OnCancelHMSExamineFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnCancelHMSExamine();
}
static void _OnHATDSelectFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnHATDSelect();
}
static long _OnHasAllergyLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnHasAllergyLoadData();
}
static void _OnCoDiseaseAddSelectFnc(CWnd *pWnd)
{
    ((CHMSExamine *)pWnd)->OnCoDiseaseAddSelect();
}
static int _OnBMICheckValueFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnBMICheckValue();
}
static void _OnAddInforLabelSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnAddInforLabelSelect();
}

static void _OnThangDiemSelectFnc(CWnd *pWnd)
{
    CHMSExamine *pVw = (CHMSExamine *)pWnd;
    pVw->OnThangDiemSelect();
}

static long _OnEmergencyTypeLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnEmergencyTypeLoadData();
}

static long _OnDetailEmergencyTypeLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSExamine *)pWnd)->OnDetailEmergencyTypeLoadData();
}

CHMSExamine::CHMSExamine()
{

    m_nDlgWidth = 630;
    m_nDlgHeight = 600;
    SetDefaultValues();
}
CHMSExamine::~CHMSExamine() {}
void CHMSExamine::OnCreateComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndExaminationInformation.Create(this, _T("Examination Information"), 5,
                                       125, 620, 550);
    m_wndDiseasePrehistory.Create(this, _T("History of disease"), 5, 5, 620,
                                  120);
    m_wndOwnerLabel.Create(this, _T("Owner"), 10, 30, 90, 55);
    m_wndOwner.Create(this, 95, 30, 615, 55);
    m_wndFamilyLabel.Create(this, _T("Family"), 10, 60, 90, 85);
    m_wndFamily.Create(this, 95, 60, 615, 85);
    m_wndDrugAllergyLabel.Create(this, _T("DrugAllergy"), 10, 90, 90, 115);
    m_wndDrugAllergy.Create(this, 165, 90, 615, 115);
    m_wndHasAllergy.Create(this, 95, 90, 160, 115);
    m_wndDateLabel.Create(this, _T("T/G khám"), 10, 150, 78, 175);
    m_wndDate.Create(this, 79, 150, 172, 175);
    m_wndExamTypeLabel.Create(this, _T("Exam Type"), 177, 150, 233, 175);
    m_wndExamType.Create(this, 240, 150, 309, 175);
    m_wndEmergencyTypeLabel.Create(this, _T("Kiểu khám C1.3"), 313, 150, 383,
                                   175);
    m_wndEmergencyType.Create(this, 384, 150, 432, 175);
    m_wndDetailEmergencyType.Create(this, 433, 150, 477, 175);
    m_wndDoctorLabel.Create(this, _T("Doctor"), 481, 150, 521, 175);
    m_wndDoctor.Create(this, 521, 150, 615, 175);

    m_wndPathologyProcessLabel.Create(this, _T("Pathology Process"), 10, 180,
                                      90, 205);
    m_wndPathologyProcess.Create(this, 95, 180, 615, 255, TRUE, FALSE, TRUE);
    m_wndExamineLabel.Create(this, _T("Examine"), 10, 260, 90, 285);
    m_wndExamine.Create(this, 95, 260, 615, 335, TRUE, FALSE, TRUE);

    m_wndPulseLabel.Create(this, _T("Pulse"), 10, 340, 90, 365);
    m_wndPulse.Create(this, 95, 340, 204, 365);

    m_wndTemperatureLabel.Create(this, _T("Temperature"), 210, 340, 295, 365);
    m_wndTemperature.Create(this, 301, 340, 356, 365);
    m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 361, 340, 438,
                                   365);
    m_wndBloodPressure.Create(this, 444, 340, 504, 365);
    m_wndBloodPressurex.Create(this, 509, 340, 585, 365);

    m_wndBreathingIntervalLabel.Create(this, _T("Breathing Interval"), 10, 370,
                                       90, 395);
    m_wndBreathingInterval.Create(this, 95, 370, 204, 395);

    m_wndWeightLabel.Create(this, _T("Weight"), 210, 370, 295, 395);
    m_wndWeight.Create(this, 301, 370, 356, 395);
    m_wndHeightLabel.Create(this, _T("Height"), 361, 370, 438, 395);
    m_wndHeight.Create(this, 444, 370, 504, 395);
    m_wndBMILabel.Create(this, _T("BMI"), 508, 370, 538, 395);
    m_wndBMI.Create(this, 537, 370, 585, 395);

    m_wndPreDiagnosticLabel.Create(this, _T("Pre-Diagnostic"), 10, 400, 90,
                                   425);
    m_wndPreDiagnostic.Create(this, 95, 400, 615, 425);
    m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 430, 90,
                                     455);

    if (pMF->m_szDept == _T("C1.2"))
        m_wndRelationDisease.Create(this, 95, 430, 480, 455);
    // m_wndRelationDisease.Create(this,95, 430, 585, 455);
    else
        // m_wndRelationDisease.Create(this,95, 430, 615, 455);
        m_wndRelationDisease.Create(this, 95, 430, 585, 455);
    m_wndCoDiseaseAdd.Create(this, _T("..."), 590, 430, 615, 455);

    m_wndICDDiagnosticLabel.Create(this, _T("ICD Diagnostic"), 10, 460, 90,
                                   485);
    m_wndICDDiagnostic.Create(this, 95, 460, 615, 485);
    m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 490, 80, 515);
    m_wndConclusion.Create(this, 95, 490, 615, 545, TRUE, FALSE, TRUE);
    m_wndPrehistory.Create(this, _T("Prehistory"), 5, 555, 95, 580);
    m_wndReloadInfo.Create(this, _T("Reload Info"), 100, 555, 190, 580);
    m_wndUpdate.Create(this, _T("&Update"), 245, 555, 335, 580);
    m_wndTerminate.Create(this, _T("Terminate"), 340, 555, 430, 580);
    m_wndSave.Create(this, _T("&Save"), 435, 555, 525, 580);
    m_wndCancel.Create(this, _T("&Cancel"), 530, 555, 620, 580);
    {
        m_wndCallPatient.Create(this, _T("Gọi BN"), 5, 520, 90, 545);
    }
    m_wndReloadInfo.ModifyStyle(WS_TABSTOP, 0);
    m_wndHATD.Create(this, _T("HA_TD"), 485, 430, 615, 455);

    // m_wndSolankham.Create(this, _T("Số lần khám"), 102, 6, 289, 24);
    m_wndSolankham.Create(this, _T("Số lần khám"), 122, 6, 289, 24);
    m_wndSolankham.SetTextColor(RGB(255, 0, 0));
    m_wndThangDiemLabel.Create(this, _T("Thang điểm:"), 290, 6, 615, 25);
    m_wndThangDiemLabel.SetTextColor(RGB(255, 0, 0));
    m_wndThangDiemLabel.ShowWindow(SW_HIDE);
    m_wndCallIn.Create(this, _T(""), 0, 0, 0, 0);
    m_wndCallIn.ShowWindow(SW_HIDE);
    m_wndCallIn.EnableWindow(FALSE);
    m_wndAddInforLabel.Create(this, _T("..."), 590, 340, 615, 395);
}
void CHMSExamine::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndOwner.SetLimitText(254);
    // m_wndOwner.SetReadOnly(true);
    m_wndFamily.SetLimitText(254);
    // m_wndFamily.SetReadOnly(true);
    m_wndDrugAllergy.SetLimitText(254);
    // m_wndDrugAllergy.SetReadOnly(true);
    // m_wndDate.SetCheckValue(true);
    /*if(pMF->m_szDept == _T("TYC"))
        m_wndExamType.SetCheckValue(false);
    else*/
    m_wndExamType.SetCheckValue(true);
    m_wndExamType.LimitText(128);
    m_wndDoctor.SetCheckValue(true);
    m_wndDoctor.LimitText(65);
    m_wndPathologyProcessLabel.SetHyperlink(true);
    m_wndPathologyProcess.SetLimitText(512);
    m_wndPathologyProcess.SetMultiLine(true);
    //	m_wndPathologyProcess.SetCheckValue(true);
    m_wndExamineLabel.SetHyperlink(true);
    m_wndExamine.SetLimitText(1024);
    //	m_wndExamine.SetCheckValue(true);
    m_wndPulse.SetLimitText(4);

    //	m_wndPulse.SetCheckValue(true);
    m_wndTemperature.SetLimitText(5);
    m_wndTemperature.SetNumberDecimal(2);
    //	m_wndTemperature.SetCurrencyFormat(true);
    //m_wndTemperature.SetCheckValue(true);
    m_wndBloodPressure.SetLimitText(3);
    m_wndBloodPressurex.SetLimitText(3);
    // m_wndBloodPressurex.SetCheckValue(true);
    //	m_wndBloodPressure.SetCurrencyFormat(true);
    //	m_wndBloodPressurex.SetCurrencyFormat(true);

    m_wndBreathingInterval.SetLimitText(4);
    // m_wndBreathingInterval.SetCheckValue(true);
    //	m_wndBreathingInterval.SetCurrencyFormat(true);
    m_wndWeight.SetLimitText(3);
    m_wndWeight.SetCheckValue(false);
    //	m_wndWeight.SetCurrencyFormat(true);
    m_wndWeight.SetNumberDecimal(2);
    m_wndHeight.SetLimitText(3);
    //m_wndHeight.SetCheckValue(true);
    m_wndHeight.SetNumberDecimal(2);
    //	m_wndHeight.SetCurrencyFormat(true);
    m_wndPreDiagnostic.SetLimitText(254);
    // m_wndPreDiagnostic.SetCheckValue(true);
    m_wndRelationDisease.SetLimitText(254);
    //	m_wndRelationDisease.SetCheckValue(true);
    m_wndICDDiagnostic.SetCheckValue(true);
    m_wndICDDiagnostic.LimitText(254);
    // m_wndICDDiagnostic.SetRequirementLength(2);
    m_wndConclusion.SetLimitText(1024);
    m_wndConclusion.SetCheckValue(true);

    m_wndConclusionLabel.SetHyperlink(true);

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
    m_wndCoDiseaseAdd.ModifyStyle(WS_TABSTOP, 0);
    m_wndHasAllergy.SetCheckValue(true);

    if (pMF->m_szDept == _T("AB"))
    {
        m_wndBloodPressure.SetCheckValue(true);
        m_wndBloodPressurex.SetCheckValue(true);
        m_wndPreDiagnostic.SetCheckValue(true);
    }

    if (pMF->m_szDept == _T("C1.3"))
    {
        m_wndEmergencyType.SetCheckValue(true);
        m_wndDetailEmergencyType.SetCheckValue(true);
    }

    m_wndExamType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndExamType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

    m_wndEmergencyType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndEmergencyType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

    m_wndDetailEmergencyType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndDetailEmergencyType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

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
    // m_hms_examTbl.AddField(_T("he_examdate"), dfDateTime);
    // m_hms_examTbl.AddField(_T("he_reason"), dfText, 81);
    // m_hms_examTbl.AddField(_T("he_pathology"), dfText, 512);
    // m_hms_examTbl.AddField(_T("he_ownerhistory"), dfText, 254);
    // m_hms_examTbl.AddField(_T("he_familyhistory"), dfText, 254);
    m_hms_examTbl.AddField(_T("he_medical"), dfText, 254);
    // m_hms_examTbl.AddField(_T("he_predisease"), dfText, 254);
    m_hms_examTbl.AddField(_T("he_examine"), dfText, 1024);
    // m_hms_examTbl.AddField(_T("he_parts"), dfText, 512);
    m_hms_examTbl.AddField(_T("he_pulse"), dfFloat);
    m_hms_examTbl.AddField(_T("he_temperature"), dfDouble);
    m_hms_examTbl.AddField(_T("he_bloodpressure"), dfInteger);
    m_hms_examTbl.AddField(_T("he_bloodpressurex"), dfInteger);
    m_hms_examTbl.AddField(_T("he_breathinterval"), dfFloat);
    m_hms_examTbl.AddField(_T("he_weight"), dfFloat);
    m_hms_examTbl.AddField(_T("he_height"), dfFloat);
    m_hms_examTbl.AddField(_T("he_bmi"), dfFloat);
    m_hms_examTbl.AddField(_T("he_prediagnostic"), dfText, 128);
    m_hms_examTbl.AddField(_T("he_icd10"), dfText, 15);
    m_hms_examTbl.AddField(_T("he_diagnostic"), dfText, 1024);
    m_hms_examTbl.AddField(_T("he_hatd"), dfText, 1);
    m_hms_examTbl.AddField(_T("he_typeid"), dfInteger);
    m_hms_examTbl.AddField(_T("he_hasallergy"), dfText, 1);
    m_hms_examTbl.AddField(_T("he_examtype3"), dfText, 2);
    m_hms_examTbl.AddField(_T("he_detail_examtype3"), dfText, 2);

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

    CRect rect;
    GetDesktopWindow()->GetWindowRect(&rect);
    if (rect.Height() <= 720)
    {
        ResizeControl(this, &m_wndPathologyProcess, 50);
    }

    SetMode(VM_NONE);

    if (m_bIsReq)
    {
        m_wndICDDiagnostic.SetCheckValue(false);
    }
}

void CHMSExamine::OnSetWindowEvents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    // m_wndOwner.SetEvent(WE_CHANGE, _OnOwnerChangeFnc);
    // m_wndOwner.SetEvent(WE_SETFOCUS, _OnOwnerSetfocusFnc);
    // m_wndOwner.SetEvent(WE_KILLFOCUS, _OnOwnerKillfocusFnc);
    m_wndOwner.SetEvent(WE_CHECKVALUE, _OnOwnerCheckValueFnc);
    // m_wndFamily.SetEvent(WE_CHANGE, _OnFamilyChangeFnc);
    // m_wndFamily.SetEvent(WE_SETFOCUS, _OnFamilySetfocusFnc);
    // m_wndFamily.SetEvent(WE_KILLFOCUS, _OnFamilyKillfocusFnc);
    m_wndFamily.SetEvent(WE_CHECKVALUE, _OnFamilyCheckValueFnc);
    // m_wndDrugAllergy.SetEvent(WE_CHANGE, _OnDrugAllergyChangeFnc);
    // m_wndDrugAllergy.SetEvent(WE_SETFOCUS, _OnDrugAllergySetfocusFnc);
    // m_wndDrugAllergy.SetEvent(WE_KILLFOCUS, _OnDrugAllergyKillfocusFnc);
    m_wndDrugAllergy.SetEvent(WE_CHECKVALUE, _OnDrugAllergyCheckValueFnc);
    // m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
    // m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
    // m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
    m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);

    m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
    // m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
    // m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
    m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
    m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
    // m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);

    m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
    // m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
    // m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
    m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
    m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
    // m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
    m_wndPathologyProcessLabel.SetEvent(WE_CLICK,
                                        _OnPathologyProcessLabelSelectFnc);
    // m_wndPathologyProcess.SetEvent(WE_CHANGE, _OnPathologyProcessChangeFnc);
    // m_wndPathologyProcess.SetEvent(WE_SETFOCUS,
    // _OnPathologyProcessSetfocusFnc);
    // m_wndPathologyProcess.SetEvent(WE_KILLFOCUS,
    // _OnPathologyProcessKillfocusFnc);
    m_wndPathologyProcess.SetEvent(WE_CHECKVALUE,
                                   _OnPathologyProcessCheckValueFnc);
    m_wndExamineLabel.SetEvent(WE_CLICK, _OnExamineLabelSelectFnc);
    // m_wndExamine.SetEvent(WE_CHANGE, _OnExamineChangeFnc);
    // m_wndExamine.SetEvent(WE_SETFOCUS, _OnExamineSetfocusFnc);
    // m_wndExamine.SetEvent(WE_KILLFOCUS, _OnExamineKillfocusFnc);
    m_wndExamine.SetEvent(WE_CHECKVALUE, _OnExamineCheckValueFnc);
    // m_wndPulse.SetEvent(WE_CHANGE, _OnPulseChangeFnc);
    // m_wndPulse.SetEvent(WE_SETFOCUS, _OnPulseSetfocusFnc);
    // m_wndPulse.SetEvent(WE_KILLFOCUS, _OnPulseKillfocusFnc);
    m_wndPulse.SetEvent(WE_CHECKVALUE, _OnPulseCheckValueFnc);
    // m_wndTemperature.SetEvent(WE_CHANGE, _OnTemperatureChangeFnc);
    // m_wndTemperature.SetEvent(WE_SETFOCUS, _OnTemperatureSetfocusFnc);
    // m_wndTemperature.SetEvent(WE_KILLFOCUS, _OnTemperatureKillfocusFnc);
    m_wndTemperature.SetEvent(WE_CHECKVALUE, _OnTemperatureCheckValueFnc);
    // m_wndBloodPressure.SetEvent(WE_CHANGE, _OnBloodPressureChangeFnc);
    // m_wndBloodPressure.SetEvent(WE_SETFOCUS, _OnBloodPressureSetfocusFnc);
    // m_wndBloodPressure.SetEvent(WE_KILLFOCUS, _OnBloodPressureKillfocusFnc);
    m_wndBloodPressure.SetEvent(WE_CHECKVALUE, _OnBloodPressureCheckValueFnc);
    // m_wndBloodPressurex.SetEvent(WE_CHANGE, _OnBloodPressurexChangeFnc);
    // m_wndBloodPressurex.SetEvent(WE_SETFOCUS, _OnBloodPressurexSetfocusFnc);
    // m_wndBloodPressurex.SetEvent(WE_KILLFOCUS,
    // _OnBloodPressurexKillfocusFnc);
    m_wndBloodPressurex.SetEvent(WE_CHECKVALUE, _OnBloodPressurexCheckValueFnc);
    // m_wndBreathingInterval.SetEvent(WE_CHANGE,
    // _OnBreathingIntervalChangeFnc);
    // m_wndBreathingInterval.SetEvent(WE_SETFOCUS,
    // _OnBreathingIntervalSetfocusFnc);
    // m_wndBreathingInterval.SetEvent(WE_KILLFOCUS,
    // _OnBreathingIntervalKillfocusFnc);
    m_wndBreathingInterval.SetEvent(WE_CHECKVALUE,
                                    _OnBreathingIntervalCheckValueFnc);
    // m_wndWeight.SetEvent(WE_CHANGE, _OnWeightChangeFnc);
    // m_wndWeight.SetEvent(WE_SETFOCUS, _OnWeightSetfocusFnc);
    // m_wndWeight.SetEvent(WE_KILLFOCUS, _OnWeightKillfocusFnc);
    m_wndWeight.SetEvent(WE_CHECKVALUE, _OnWeightCheckValueFnc);
    // m_wndHeight.SetEvent(WE_CHANGE, _OnHeightChangeFnc);
    // m_wndHeight.SetEvent(WE_SETFOCUS, _OnHeightSetfocusFnc);
    // m_wndHeight.SetEvent(WE_KILLFOCUS, _OnHeightKillfocusFnc);
    m_wndHeight.SetEvent(WE_CHECKVALUE, _OnHeightCheckValueFnc);
    m_wndBMI.SetEvent(WE_CHECKVALUE, _OnBMICheckValueFnc);
    // m_wndPreDiagnostic.SetEvent(WE_CHANGE, _OnPreDiagnosticChangeFnc);
    // m_wndPreDiagnostic.SetEvent(WE_SETFOCUS, _OnPreDiagnosticSetfocusFnc);
    // m_wndPreDiagnostic.SetEvent(WE_KILLFOCUS, _OnPreDiagnosticKillfocusFnc);
    m_wndPreDiagnostic.SetEvent(WE_CHECKVALUE, _OnPreDiagnosticCheckValueFnc);
    // m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
    // m_wndRelationDisease.SetEvent(WE_SETFOCUS,
    // _OnRelationDiseaseSetfocusFnc);
    // m_wndRelationDisease.SetEvent(WE_KILLFOCUS,
    // _OnRelationDiseaseKillfocusFnc);
    m_wndRelationDisease.SetEvent(WE_CHECKVALUE,
                                  _OnRelationDiseaseCheckValueFnc);
    m_wndICDDiagnostic.SetEvent(WE_SELENDOK, _OnICDDiagnosticSelendokFnc);
    // m_wndICDDiagnostic.SetEvent(WE_SETFOCUS, _OnICDDiagnosticSetfocusFnc);
    // m_wndICDDiagnostic.SetEvent(WE_KILLFOCUS, _OnICDDiagnosticKillfocusFnc);
    m_wndICDDiagnostic.SetEvent(WE_SELCHANGE, _OnICDDiagnosticSelectChangeFnc);
    m_wndICDDiagnostic.SetEvent(WE_LOADDATA, _OnICDDiagnosticLoadDataFnc);
    // m_wndICDDiagnostic.SetEvent(WE_ADDNEW, _OnICDDiagnosticAddNewFnc);
    // m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
    m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
    // m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
    m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);

    m_wndCallPatient.SetEvent(WE_CLICK, _OnCallPatientSelectFnc);
    m_wndPrehistory.SetEvent(WE_CLICK, _OnPrehistorySelectFnc);
    m_wndReloadInfo.SetEvent(WE_CLICK, _OnReloadInfoSelectFnc);
    m_wndThangDiemLabel.SetEvent(WE_CLICK, _OnThangDiemSelectFnc);

    m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
    m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
    m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
    m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

    m_wndConclusionLabel.SetEvent(WE_CLICK, _OnConclusionLabelSelectFnc);
    m_wndCoDiseaseAdd.SetEvent(WE_CLICK, _OnCoDiseaseAddSelectFnc);

    m_wndHATD.SetEvent(WE_CLICK, _OnHATDSelectFnc);
    m_wndHasAllergy.SetEvent(WE_LOADDATA, _OnHasAllergyLoadDataFnc);
    m_wndEmergencyType.SetEvent(WE_LOADDATA, _OnEmergencyTypeLoadDataFnc);
    m_wndDetailEmergencyType.SetEvent(WE_LOADDATA,
                                      _OnDetailEmergencyTypeLoadDataFnc);
    AddEvent(1, _T("Update History Of Disease"), _OnUpdateDiseasePrehistoryFnc);
    AddEvent(0, _T("-"));
    AddEvent(2, _T("Certificate Of Physical Eye Clinice"),
             _OnCertificateofphysicaleyeclinicFnc);
    AddEvent(3, _T("Delete Examine"), _OnDeleteExamineFnc);
    //	AddEvent(2, _T("Khám sức khỏe trong nước"), _OnMedicalexamsFnc);

    CString szSQL, szIsA11Patient;
    CRecord rs(&pMF->m_db);

    if (pMF->m_szDept == _T("C1.2") || pMF->CheckPermission(_T("EMR.01")))
    {
        AddEvent(0, _T("-"), NULL);
        AddEvent(4, _T("Phiếu khám sức khỏe cán bộ"), _OnGeneralRankExamineFnc);
        AddEvent(5, _T("Phiếu khám sức khỏe thăng quân hàm cấp tướng"),
                 _OnGeneralRankExamine2Fnc);
        AddEvent(6, _T("Phiếu khám sức khỏe đi học"),
                 _OnGeneralRankExamine3Fnc);
        AddEvent(12, _T("Phiếu khám sức khỏe cấp ủy"),
                 _OnGeneralRankExamine4Fnc);
        AddEvent(13, _T("Phiếu khám sức khỏe Đại hội Đảng"),
                 _OnGeneralRankExamine5Fnc);
    }
    AddEvent(0, _T("-"));
    AddEvent(20, _T("Phiếu khám sức khỏe"), _OnHealthExaminationFnc);
    AddEvent(11, _T("Khám sức khỏe định kỳ"), _OnPeriodicExamHealthFnc);

    // if(pMF->GetCurrentUser() == _T("admin"))
    //{
    AddEvent(0, _T("-"));
    AddEvent(21, _T("Tạo lịch hẹn A20"), _OnAddAppointMentA20Fnc);
    //}

    // Benh an hiem muon
    if (pMF->CheckPermission(_T("20.01")))
    {
        AddEvent(0, _T("-"));
        AddEvent(6, _T("Khám và điều trị hiếm muộn"),
                 _OnBenhAnHiemMuonSelectFnc);
        AddEvent(0, _T("-"));
        AddEvent(7, _T("Chuyển tới hồ sơ vợ hoặc chồng"), _OnChuyenBenhNhanFnc);
        AddEvent(0, _T("-"));
        AddEvent(8, _T("Bỏ ghép đôi cặp vợ chồng hiếm muộn"),
                 _OnCancelInfertilityFnc);
    }

    // Benh an hiem muon
    // if(pMF->CheckPermission(_T("20.02")))
    {
        AddEvent(0, _T("-"));
        AddEvent(9, _T("Đăng ký mổ đẻ theo yêu cầu"),
                 _OnRegistrationPregnancyFnc);
        AddEvent(0, _T("-"));
        AddEvent(10, _T("Hủy đăng ký mổ đẻ"), _OnCancelPregnancyFnc);
    }
    if (pMF->m_szDept == _T("C1.3"))

    {
        // AddEvent(0, _T("-"));
        // AddEvent(11, _T("Thang điểm QSOFA_NEWS2"), _OnThangDiemSelectFnc);
    }
    // AddEvent(4, _T("Create Admission"), _OnCreateAdmissionFnc);
    /*
        AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExamineFnc, 0, 'A', VK_CONTROL);
        AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExamineFnc, 0, 'E',
       VK_CONTROL); AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExamineFnc, 0,
       'D', VK_CONTROL); AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExamineFnc,
       0, 'S', VK_CONTROL); AddEvent(0, _T("-")); AddEvent(5, _T("Cancel
       Ctrl+T"), _OnCancelHMSExamineFnc, 0, 'T', VK_CONTROL);
    */

    // Layout
    // AddLayoutControl(&m_wndDiseasePrehistory, WS_RESIZEX, 100, 100, 100,
    // 100); AddLayoutControl(&m_wndOwner, WS_RESIZEX, 100, 100, 100, 100);
    // AddLayoutControl(&m_wndFamily, WS_RESIZEX, 100, 100, 100, 100);
    // AddLayoutControl(&m_wndDrugAllergy, WS_RESIZEX, 100, 100, 100, 100);
    // AddLayoutControl(&m_wndExaminationInformation, WS_RESIZEX|WS_RESIZEY,
    // 100, 100, 100, 100);

    m_bDoctor = false;
    szSQL.Format(
        _T("SELECT su_userid as id, su_name as name FROM sys_user WHERE ")
        _T("su_groupid in('P','D') and su_userid='%s' ORDER BY su_name "),
        pMF->GetCurrentUser());
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        m_bDoctor = true;
    }

    if (pMF->m_szHaveLed == _T("Y"))
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
    m_wndAddInforLabel.SetEvent(WE_CLICK, _OnAddInforLabelSelectFnc);
}
void CHMSExamine::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_Text(pDX, m_wndOwner.GetDlgCtrlID(), m_szOwner);
    DDX_Text(pDX, m_wndFamily.GetDlgCtrlID(), m_szFamily);
    DDX_Text(pDX, m_wndDrugAllergy.GetDlgCtrlID(), m_szDrugAllergy);
    DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
    DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
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
    DDX_Check(pDX, m_wndHATD.GetDlgCtrlID(), m_bHATD);
    DDX_TextEx(pDX, m_wndHasAllergy.GetDlgCtrlID(), m_szHasAllergyKey);
    DDX_Text(pDX, m_wndBMI.GetDlgCtrlID(), m_nBMI);
    DDX_TextEx(pDX, m_wndEmergencyType.GetDlgCtrlID(), m_szEmergencyTypeKey);
    DDX_TextEx(pDX, m_wndDetailEmergencyType.GetDlgCtrlID(),
               m_szDetailEmergencyTypeKey);
}
void CHMSExamine::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CRecord rss(&pMF->m_db);
    CRecord rs2(&pMF->m_db);
    CRecord rs5(&pMF->m_db);
    CRecord rs3(&pMF->m_db);
    CString szSQL, tmpStr, szsolankham, szqSOFA_val, szNews2_val;
    // long nDocNo;
    SetDefaultValues();

    szSQL.Format(_T("SELECT * FROM hms_exam ")
                 _T(" LEFT JOIN hms_doc ON (he_docno = hd_docno)")
                 _T(" WHERE he_docno=%ld AND he_receptidx=%ld"),
                 pMF->m_nDocumentNo, m_nReceptIndex);
    rs.ExecSQL(szSQL);

    if (!rs.IsEOF())
    {

        //	rs.GetValue(_T("he_patientno"), m_nPatientNo);
        rs.GetValue(_T("he_deptid"), m_szDept);
        rs.GetValue(_T("he_roomid"), m_nRoomID);
        rs.GetValue(_T("he_receptno"), m_nReceptNo);
        rs.GetValue(_T("he_receptidx"), m_nReceptIndex);

        // m_szDate = CDateTime::Convert(rs.GetValue(_T("he_examdate")),
        // yyyymmdd | hhmmss, ddmmyyyy | hhmmss);
        rs.GetValue(_T("he_examdate"), m_szDate);
        rs.GetValue(_T("he_doctor"), m_szDoctorKey);

        rs.GetValue(_T("he_status"), m_szStatus);
        rs.GetValue(_T("he_hatd"), tmpStr);
        rs.GetValue(_T("he_typeid"), m_szExamTypeKey);
        rs.GetValue(_T("he_exammove"), m_szExammove);
        rs.GetValue(_T("he_examtype3"), m_szEmergencyTypeKey);
        rs.GetValue(_T("he_detail_examtype3"), m_szDetailEmergencyTypeKey);
        rs.GetValue(_T("he_status"), m_szStatus);
        rs.GetValue(_T("hd_healthexam"), m_szHealthExam);

        if (m_szExamTypeKey == _T("0"))
            m_szExamTypeKey.Empty();

        if (tmpStr == _T("Y"))
            m_bHATD = TRUE;
        else
            m_bHATD = FALSE;

        rs.GetValue(_T("he_hasallergy"), m_szHasAllergyKey);
        m_szHasAllergyFromExam = m_szHasAllergyKey;
        m_bIsReq = pMF->m_bIsReq;

        if (m_szStatus != _T("O") ||
            rs.GetValue(_T("hd_healthexam")) == _T("Y") || pMF->m_szDept == L"C1.3")
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
            rs.GetValue(_T("he_bmi"), m_nBMI);
            rs.GetValue(_T("he_prediagnostic"), m_szPreDiagnostic);
            rs.GetValue(_T("he_icd10"), m_szICDDiagnosticKey);
            // if (m_szStatus == _T("T"))
            {
                rs.GetValue(_T("he_diagnostic"), m_szConclusion);
            }

            szSQL.Format(
                _T("SELECT hd_reldisease FROM hms_doc WHERE hd_docno=%ld"),
                pMF->m_nDocumentNo);
            rs2.ExecSQL(szSQL);
            if (!rs2.IsEOF())
            {
                rs2.GetValue(_T("hd_reldisease"), m_szRelationDisease);
            }

            pMF->m_szDoctor = m_szDoctorKey;
        }
        else if ((m_nWeight + m_nHeight + m_nPulse + m_nTemperature +
                  m_nBloodPressure + m_nBloodPressurex +
                  m_nBreathingInterval) <= 0)
        {
            szSQL.Format(
                _T(" SELECT * from")
                _T(" (")
                _T(" SELECT * FROM hms_exam WHERE he_docno=%ld ")
                _T(" and he_bmi + he_pulse + he_temperature + he_weight > 0")
                _T(" order by he_receptidx desc")
                _T(" )")
                _T(" WHERE rownum <2"),
                pMF->m_nDocumentNo);

            rs3.ExecSQL(szSQL);
            if (!rs3.IsEOF())
            {
                rs3.GetValue(_T("he_pulse"), m_nPulse);
                rs3.GetValue(_T("he_temperature"), m_nTemperature);
                rs3.GetValue(_T("he_bloodpressure"), m_nBloodPressure);
                rs3.GetValue(_T("he_bloodpressurex"), m_nBloodPressurex);
                rs3.GetValue(_T("he_breathinterval"), m_nBreathingInterval);
                rs3.GetValue(_T("he_weight"), m_nWeight);
                rs3.GetValue(_T("he_height"), m_nHeight);
                rs3.GetValue(_T("he_bmi"), m_nBMI);
            }
        }
        else
        {
            SetDefaultValues();
        }

        /*szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE
        hdh_patientno=%ld and hdh_docno=%ld "), pMF->m_nPatientNo,
        pMF->m_nDocumentNo); rs2.ExecSQL(szSQL); if(rs2.IsEOF())
        {
            szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE
        hdh_patientno=%ld and NVL(hdh_docno,0)=0 "), pMF->m_nPatientNo);
            rs2.ExecSQL(szSQL);
        }
        if(!rs2.IsEOF())
        {
            rs2.GetValue(_T("hdh_owner"), m_szOwner);
            rs2.GetValue(_T("hdh_family"), m_szFamily);
            rs2.GetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
        }*/

        szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE ")
                     _T("hdh_patientno=%ld and hdh_docno=%ld "),
                     pMF->m_nPatientNo, pMF->m_nDocumentNo);
        rs2.ExecSQL(szSQL);

        if (rs2.IsEOF())
        {
            long maxDocNo;
            szSQL.Format(_T("SELECT max(hdh_docno) FROM hms_disease_hist ")
                         _T("WHERE hdh_patientno = %ld "),
                         pMF->m_nPatientNo);
            rs2.ExecSQL(szSQL);

            maxDocNo = rs2.GetIntValue();

            if (maxDocNo > 0)
                szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE ")
                             _T("hdh_patientno=%ld and hdh_docno = %ld "),
                             pMF->m_nPatientNo, maxDocNo);
            else
                szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE ")
                             _T("hdh_patientno=%ld "),
                             pMF->m_nPatientNo);

            rs2.ExecSQL(szSQL);
        }
        if (!rs2.IsEOF())
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
        // pMF->m_szDept = m_szDept;
        pMF->m_nReceptNo = m_nReceptNo;
        pMF->m_szExamStatus = m_szStatus;

        pMF->m_szEntryDate = m_szDate;
        pMF->m_wndPatientDocument.OnConclusionLoad(pMF->m_nDocumentNo);

        SetMode(VM_VIEW);
    }
    else
        SetMode(VM_NONE);

    //szSQL.Format(
    //    _T("SELECT TRUNC((months_between(hd_admitdate, hp_birthdate))) AS age ")
    //    _T(" FROM hms_doc, ")
    //    _T(" hms_patient ")
    //    _T(" WHERE hd_docno   = %ld ")
    //    _T(" AND hd_patientno = hp_patientno "),
    //    m_nDocumentNo);
    //rs.ExecSQL(szSQL);
    //int nAge;
    //rs.GetValue(_T("age"), nAge);

    //if (nAge <= 12)
    //{
    //    m_wndWeight.SetCheckValue(true);
    //}

    szSQL.Format(_T("SELECT count(hd_docno) as solankham FROM hms_doc WHERE ")
                 _T("hd_patientno=%ld"),
                 pMF->m_nPatientNo);

    rs5.ExecSQL(szSQL);
    if (!rs5.IsEOF())
    {
        rs5.GetValue(_T("solankham"), szsolankham);
    }
    CString tmpStrx;
    tmpStrx.Format(_T("Số lần khám [%s]"), szsolankham);
    m_wndSolankham.SetWindowText(tmpStrx);
    // View ra chỉ số qSOFA && NEWS2
    if (pMF->m_szDept == _T("C1.3") || pMF->m_szDept == _T("C1.3NT"))
    {
        szSQL.Format(_T(" SELECT  ")
                     _T(" diem as qSOFA_val")
                     _T(" FROM VW_HMS_QSOFA_NEWS2_DETAIL WHERE he_docno = %ld")
                     _T(" and tieuchi = 'TONG'")
                     _T(" and phanloai = 'qSOFA'"),
                     m_nDocumentNo);

        rs5.ExecSQL(szSQL);
        if (!rs5.IsEOF())
        {
            rs5.GetValue(_T("qSOFA_val"), szqSOFA_val);
        }

        szSQL.Format(_T(" SELECT  ")
                     _T(" diem as NEWS2_val")
                     _T(" FROM VW_HMS_QSOFA_NEWS2_DETAIL WHERE he_docno = %ld")
                     _T(" and tieuchi = 'TONG'")
                     _T(" and phanloai = 'NEWS2'"),
                     m_nDocumentNo);

        rs5.ExecSQL(szSQL);
        if (!rs5.IsEOF())
        {
            rs5.GetValue(_T("NEWS2_val"), szNews2_val);
        }
        CString tmpStrx2;
        tmpStrx2.Format(_T("QSOFA:[%s]  NEWS2:[%s]"), szqSOFA_val, szNews2_val);

        m_wndThangDiemLabel.ShowWindow(SW_HIDE);

        if ((!szqSOFA_val.IsEmpty()) || (!szNews2_val.IsEmpty()))
        {
            m_wndThangDiemLabel.SetWindowText(tmpStrx2);
            m_wndThangDiemLabel.ShowWindow(SW_SHOW);
        }
    }
}
void CHMSExamine::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // if(GetMode() == VM_EDIT){
    //	CString szWhere;
    //	szWhere.Format(_T(" WHERE he_docno = %ld AND he_receptidx=%ld "),
    // pMF->m_nDocumentNo, m_nReceptIndex); 	m_hms_examTbl.Open(&pMF->m_db,
    // szWhere);
    //
    // }
    // if (m_szStatus == _T("O"))
    //{
    //	m_hms_examTbl.SetValue(_T("he_examdate"), pMF->GetSysDateTime());
    // }
    if (GetMode() == VM_ADD)
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
    // m_hms_examTbl.SetValue(_T("he_examdate"), pMF->GetSysDateTime());
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
    m_hms_examTbl.SetValue(_T("he_bmi"), m_nBMI);
    m_hms_examTbl.SetValue(_T("he_prediagnostic"), m_szPreDiagnostic);
    m_hms_examTbl.SetValue(_T("he_icd10"), m_szICDDiagnosticKey);
    m_hms_examTbl.SetValue(_T("he_diagnostic"), m_szConclusion);

    if (m_bHATD)
        m_hms_examTbl.SetValue(_T("he_hatd"), _T("Y"));
    else
        m_hms_examTbl.SetValue(_T("he_hatd"), _T("N"));

    m_hms_examTbl.SetValue(_T("he_typeid"), m_szExamTypeKey);
    m_hms_examTbl.SetValue(_T("he_hasallergy"), m_szHasAllergyKey);
    m_hms_examTbl.SetValue(_T("he_examtype3"), m_szEmergencyTypeKey);
    m_hms_examTbl.SetValue(_T("he_detail_examtype3"),
                           m_szDetailEmergencyTypeKey);

    m_hms_disease_histTbl.SetValue(_T("hdh_createdby"), pMF->GetCurrentUser());
    m_hms_disease_histTbl.SetValue(_T("hdh_createddate"),
                                   pMF->GetSysDateTime());
    m_hms_disease_histTbl.SetValue(_T("hdh_updatedby"), pMF->GetCurrentUser());
    m_hms_disease_histTbl.SetValue(_T("hdh_updateddate"),
                                   pMF->GetSysDateTime());
    m_hms_disease_histTbl.SetValue(_T("hdh_patientno"), pMF->m_nPatientNo);
    m_hms_disease_histTbl.SetValue(_T("hdh_docno"), pMF->m_nDocumentNo);
    m_hms_disease_histTbl.SetValue(_T("hdh_owner"), m_szOwner);
    m_hms_disease_histTbl.SetValue(_T("hdh_family"), m_szFamily);
    m_hms_disease_histTbl.SetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
    m_hms_disease_histTbl.SetValue(_T("HDH_HASALLERGY"), m_szHasAllergyKey);
}
void CHMSExamine::SetDefaultValues()
{

    m_szOwner.Empty();
    m_szFamily.Empty();
    m_szDrugAllergy.Empty();
    m_szHasAllergyKey.Empty();
    // m_szDate.Empty();
    m_szDoctorKey.Empty();
    m_szExamTypeKey.Empty();
    m_szPathologyProcess.Empty();
    m_szExamine.Empty();
    m_nPulse = 0;
    m_nTemperature = 0;
    m_nBloodPressure = 0;
    m_nBloodPressurex = 0;
    m_nBreathingInterval = 0;
    m_nWeight = 0;
    m_nHeight = 0;
    m_nBMI = 0;
    m_szPreDiagnostic.Empty();
    m_szRelationDisease.Empty();
    m_szICDDiagnosticKey.Empty();
    m_szConclusion.Empty();
    m_bCheckReload = false;
    m_nBeep = 3;

    m_bHATD = FALSE;
    m_bIsReq = false;
    m_szHasAllergyKey.Empty();
    m_szICDDiagnosticKey.Empty();
    m_szConclusion.Empty();
}
int CHMSExamine::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiView::SetMode(nMode);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    m_wndReloadInfo.EnableWindow(FALSE);
    switch (nMode)
    {
    case VM_ADD:
        EnableControls(TRUE);
        EnableButtons(TRUE, 3, 4, -1);

        m_wndHATD.EnableWindow(TRUE);
        m_wndCoDiseaseAdd.EnableWindow(TRUE);
        m_wndICDDiagnostic.EnableWindow(true);
        m_wndICDDiagnostic.SetCheckValue(false);
        m_wndConclusion.SetCheckValue(false);
        m_wndConclusion.EnableWindow(false);

        m_wndConclusion.SetCheckValue(false);
        if (nOldMode == VM_NONE)
            SetDefaultValues();
        if (m_bDoctor)
            m_szDoctorKey = pMF->GetCurrentUser();
        else
        {
            m_wndDoctor.SetCurSel(0);
            m_szDoctorKey.Empty();
            m_wndDoctor.SetFocus();
        }

        if (!m_szDoctorKey.IsEmpty())
            m_wndExamType.SetFocus();

        break;
    case VM_EDIT:
        EnableControls(TRUE);
        EnableButtons(TRUE, 3, 4, -1);
        m_wndHATD.EnableWindow(TRUE);
        m_wndConclusion.SetCheckValue(true);
        //	m_wndConclusion.EnableWindow(true);
        m_wndPreDiagnostic.SetCheckValue(false);
        // m_szDoctorKey = pMF->m_szDoctor;
        m_wndCoDiseaseAdd.EnableWindow(TRUE);

        if (m_szDoctorKey.IsEmpty() && m_bDoctor)
        {
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
        m_wndCoDiseaseAdd.EnableWindow(FALSE);
        // m_wndExamine.EnableWindow(TRUE);
        // m_wndExamine.SetReadOnly(TRUE);
        break;
    case VM_NONE:
        EnableControls(FALSE);
        EnableButtons(TRUE, 1, -1);
        m_wndHATD.EnableWindow(FALSE);
        SetDefaultValues();
        m_wndUpdate.SetFocus();
        m_wndCoDiseaseAdd.EnableWindow(FALSE);
#ifdef HAVE_LED
        m_wndCallIn.EnableWindow(false);
#endif

        break;
    };

    if (m_szStatus == _T("T"))
        m_wndUpdate.EnableWindow(false);
    else
    {
        if (nMode == VM_ADD)
            m_wndReloadInfo.EnableWindow(TRUE);
        else
            m_wndReloadInfo.EnableWindow(FALSE);
    }

    if (pMF->m_szDept == _T("C1.3"))
    {
        m_wndEmergencyType.SetCheckValue(true);
        m_wndDetailEmergencyType.SetCheckValue(true);
    }
    else
    {
        m_wndEmergencyType.SetCheckValue(false);
        m_wndDetailEmergencyType.SetCheckValue(false);

        m_wndEmergencyType.EnableWindow(false);
        m_wndDetailEmergencyType.EnableWindow(false);
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
    if (m_bIsReq)
    {
        m_wndICDDiagnostic.SetCheckValue(false);
    }

    return nOldMode;
}
/*void CHMSExamine::OnOwnerChange(){

} */
/*void CHMSExamine::OnOwnerSetfocus(){

} */
/*void CHMSExamine::OnOwnerKillfocus(){

} */
int CHMSExamine::OnOwnerCheckValue() { return 0; }
/*void CHMSExamine::OnFamilyChange(){

} */
/*void CHMSExamine::OnFamilySetfocus(){

} */
/*void CHMSExamine::OnFamilyKillfocus(){

} */
int CHMSExamine::OnFamilyCheckValue() { return 0; }
/*void CHMSExamine::OnDrugAllergyChange(){

} */
/*void CHMSExamine::OnDrugAllergySetfocus(){

} */
/*void CHMSExamine::OnDrugAllergyKillfocus(){

} */
int CHMSExamine::OnDrugAllergyCheckValue() { return 0; }
/*void CHMSExamine::OnDateChange(){

} */
/*void CHMSExamine::OnDateSetfocus(){

} */
/*void CHMSExamine::OnDateKillfocus(){

} */
int CHMSExamine::OnDateCheckValue()
{
    UpdateData(true);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (CompareDateTime(m_szDate, pMF->m_szEntryDate) < 0)
        return -1;
    if (CompareDateTime(m_szDate, pMF->GetSysDateTime()) > 0)
        return -1;

    return 0;
}

void CHMSExamine::OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSExamine::OnExamTypeSelendok() {}
/*void CHMSExamine::OnExamTypeSetfocus(){

}*/
/*void CHMSExamine::OnExamTypeKillfocus(){

}*/
long CHMSExamine::OnExamTypeLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szWhere;
    //	szWhere.Format(_T(" and cast(ss_code as integer) >=18 "));
    //	szWhere.Format(_T(" and cast(ss_code as integer) not in(select he_typeid
    // from hms_exam where he_docno =%ld and he_status<>'O' and he_receptidx <>
    //%ld) "), 		pMF->m_nDocumentNo, m_nReceptIndex);
    if (pMF->GetCurrentDepartmentID() == _T("TTHTSS"))
    {
        return pMF->LoadSelectionList(&m_wndExamType, _T("HMS_EXAM_TYPE_EX"),
                                      m_szExamTypeKey, szWhere);
    }
    else
        return pMF->LoadSelectionList(&m_wndExamType, _T("HMS_EXAM_TYPE"),
                                      m_szExamTypeKey, szWhere);
}
/*void CHMSExamine::OnExamTypeAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

void CHMSExamine::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSExamine::OnDoctorSelendok() {}
/*void CHMSExamine::OnDoctorSetfocus(){

}*/
/*void CHMSExamine::OnDoctorKillfocus(){

}*/
long CHMSExamine::OnDoctorLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty())
    {
        szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctorKey);
    };
    // szWhere.AppendFormat(_T(" and (su_deptid='%s' or su_hms_xdept='%s' )"),
    // pMF->m_szDept, pMF->m_UserInfo.su_hms_xdept); szWhere.AppendFormat(_T("
    // and (su_deptid='%s' or su_hms_xdept='%s' or '%s' in (select
    // regexp_split_to_table(replace(su_hms_xdepts,'''',''), ',')) )"),
    // pMF->m_szDept, pMF->m_szDept, pMF->m_szDept);

    szWhere.AppendFormat(
        _T(" AND (su_deptid='%s' OR su_hms_xdept='%s' OR EXISTS (")
        _T("SELECT 1 FROM dual WHERE '%s' IN (")
        _T("SELECT REGEXP_SUBSTR(REPLACE(su_hms_xdepts, '''', ''), '[^,]+', ")
        _T("1, LEVEL) ")
        _T("FROM dual CONNECT BY REGEXP_SUBSTR(REPLACE(su_hms_xdepts, '''', ")
        _T("''), '[^,]+', 1, LEVEL) IS NOT NULL)) )"),
        pMF->m_szDept, pMF->m_szDept, pMF->m_szDept);

    szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user ")
                 _T("WHERE su_groupid in('P','D') AND SU_ISACTIVE = 'Y' %s ")
                 _T("ORDER BY su_name "),
                 szWhere);
    //_fmsg(_T("%s"), szSQL);

    m_wndDoctor.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndDoctor.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                             NULL);
        rs.MoveNext();
    }
    return nCount;
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
int CHMSExamine::OnPathologyProcessCheckValue() { return 0; }
/*void CHMSExamine::OnExamineChange(){

} */
/*void CHMSExamine::OnExamineSetfocus(){

} */
/*void CHMSExamine::OnExamineKillfocus(){

} */
int CHMSExamine::OnExamineCheckValue() { return 0; }
/*void CHMSExamine::OnPulseChange(){

} */
/*void CHMSExamine::OnPulseSetfocus(){

} */
/*void CHMSExamine::OnPulseKillfocus(){

} */
int CHMSExamine::OnPulseCheckValue() { return 0; }
/*void CHMSExamine::OnTemperatureChange(){

} */
/*void CHMSExamine::OnTemperatureSetfocus(){

} */
/*void CHMSExamine::OnTemperatureKillfocus(){

} */
int CHMSExamine::OnTemperatureCheckValue() { return 0; }
/*void CHMSExamine::OnBloodPressureChange(){

} */
/*void CHMSExamine::OnBloodPressureSetfocus(){

} */
/*void CHMSExamine::OnBloodPressureKillfocus(){

} */
int CHMSExamine::OnBloodPressureCheckValue() { return 0; }
/*void CHMSExamine::OnBloodPressurexChange(){

} */
/*void CHMSExamine::OnBloodPressurexSetfocus(){

} */
/*void CHMSExamine::OnBloodPressurexKillfocus(){

} */
int CHMSExamine::OnBloodPressurexCheckValue() { return 0; }
/*void CHMSExamine::OnBreathingIntervalChange(){

} */
/*void CHMSExamine::OnBreathingIntervalSetfocus(){

} */
/*void CHMSExamine::OnBreathingIntervalKillfocus(){

} */
int CHMSExamine::OnBreathingIntervalCheckValue() { return 0; }
/*void CHMSExamine::OnWeightChange(){

} */
/*void CHMSExamine::OnWeightSetfocus(){

} */
/*void CHMSExamine::OnWeightKillfocus(){

} */
int CHMSExamine::OnWeightCheckValue()
{
    /*if (m_nWeight <= 0)
    {
        m_wndWeight.SetToolTipMessage(
            _T("Yêu cầu nhập cân nặng cho trẻ em dưới 1 tuổi"));
        return -1;
    }
    return 0;*/
    return 0;
}

/*void CHMSExamine::OnHeightChange(){

} */
/*void CHMSExamine::OnHeightSetfocus(){

} */
/*void CHMSExamine::OnHeightKillfocus(){

} */
int CHMSExamine::OnHeightCheckValue()
{
    if ((m_nHeight <= 10 || m_nHeight >=250))
    {
        m_wndHeight.SetToolTipMessage(_T("Thông tin chiều cao không hợp lệ!"));
        return -1;
    }  
    
    if (m_nWeight > 0 && m_nHeight > 0)
    {
        float nHm = (float)m_nHeight / 100.00;
        float nSquareH = nHm * nHm;
        m_nBMI = float(m_nWeight) / nSquareH;
        UpdateData(FALSE);
    }
    return 0;
}

int CHMSExamine::OnBMICheckValue() { return 0; }
/*void CHMSExamine::OnPreDiagnosticChange(){

} */
/*void CHMSExamine::OnPreDiagnosticSetfocus(){

} */
/*void CHMSExamine::OnPreDiagnosticKillfocus(){

} */
int CHMSExamine::OnPreDiagnosticCheckValue() { return 0; }
/*void CHMSExamine::OnRelationDiseaseChange(){

} */
/*void CHMSExamine::OnRelationDiseaseSetfocus(){

} */
/*void CHMSExamine::OnRelationDiseaseKillfocus(){

} */
int CHMSExamine::OnRelationDiseaseCheckValue() { return 0; }
void CHMSExamine::OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSExamine::OnICDDiagnosticSelendok()
{
    UpdateData(true);
    if (m_szConclusion.IsEmpty())
    {
        m_szConclusion = m_wndICDDiagnostic.GetCurrent(1);
        m_wndConclusion.SetWindowText(m_szConclusion);
    }
    //	UpdateData(false);
}
/*void CHMSExamine::OnICDDiagnosticSetfocus(){

}*/
/*void CHMSExamine::OnICDDiagnosticKillfocus(){

}*/
long CHMSExamine::OnICDDiagnosticLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
/*void CHMSExamine::OnICDDiagnosticAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSExamine::OnConclusionChange(){

} */
void CHMSExamine::OnConclusionSetfocus() { m_wndConclusion.SetSel(-1); }
/*void CHMSExamine::OnConclusionKillfocus(){

} */
int CHMSExamine::OnConclusionCheckValue() { return 0; }
void CHMSExamine::OnPrehistorySelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    if (!pMF->CheckPermission(_T("02.05")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return;
    }
    if ((pMF->GetProp(_T("hms_a11_dept")) == _T("Y")) &&
        (!pMF->CheckPermission(_T("admin.EM.200.2"))))
    {
        ShowMessageBox(_T("Cần phân quyền để sử dụng chức năng này!"));
        return;
    }
    CHMSDocumentPreviewDialog dlg(this);
    dlg.DoModal();
}

void CHMSExamine::OnReloadInfoSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr;

    szSQL.Format(_T(" SELECT *")
                 _T(" FROM")
                 _T(" (")
                 _T("   SELECT * FROM hms_exam")
                 _T("   WHERE he_doctor='%s' AND he_docno < %ld ")
                 _T("   AND he_patientno=%ld")
                 _T("   ORDER BY he_docno DESC")
                 _T(" ) Tbl")
                 _T(" WHERE rownum <= 1"),
                 pMF->GetCurrentUser(), pMF->m_nDocumentNo, pMF->m_nPatientNo);

    rs.ExecSQL(szSQL);

    if (rs.GetRecordCount() < 1)
    {
        ShowMessageBox(_T("Information not found"), MB_ICONERROR | MB_OK);
        return;
    }

    if (!rs.IsEOF())
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
        rs.GetValue(_T("he_bmi"), m_nBMI);
        rs.GetValue(_T("he_prediagnostic"), m_szPreDiagnostic);

        rs.GetValue(_T("he_hatd"), tmpStr);

        if (tmpStr == _T("Y"))
            m_bHATD = TRUE;
        else
            m_bHATD = FALSE;

        CRecord rs2(&pMF->m_db);
        szSQL.Format(
            _T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld "),
            pMF->m_nPatientNo);
        rs2.ExecSQL(szSQL);
        if (!rs2.IsEOF())
        {
            rs2.GetValue(_T("hdh_owner"), m_szOwner);
            rs2.GetValue(_T("hdh_family"), m_szFamily);
            rs2.GetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
        }

        szSQL.Format(_T(" SELECT *")
                     _T(" FROM")
                     _T(" (")
                     _T("   SELECT hd_reldisease")
                     _T("   FROM hms_doc ")
                     _T("   WHERE hd_docno < %ld AND hd_patientno=%ld")
                     _T("   ORDER BY hd_docno DESC")
                     _T(" ) Tbl")
                     _T(" WHERE rownum=1"),
                     pMF->m_nDocumentNo, pMF->m_nPatientNo);
        rs2.ExecSQL(szSQL);
        if (!rs2.IsEOF())
        {
            rs2.GetValue(_T("hd_reldisease"), m_szRelationDisease);
            szSQL.Format(
                _T("select * from hms_codisease where hcd_docno = %s "),
                rs2.GetValue(_T("hd_docno")));
            CRecord rs10(&pMF->m_db);
            rs10.ExecSQL(szSQL);

            if (!rs10.IsEOF())
            {

                szSQL.Format(_T("INSERT INTO hms_codisease( ")
                             _T("hcd_patientno, hcd_docno, hcd_ids, ")
                             _T("hod_doctor, hcd_names) ")
                             _T(" VALUES (%ld, %ld, '%s', '%s', '%s') "),
                             pMF->m_nPatientNo, pMF->m_nDocumentNo,
                             rs10.GetValue(_T("hcd_ids")),
                             pMF->GetCurrentUser(),
                             rs10.GetValue(_T("hcd_names")));
                pMF->ExecSQL(szSQL);
            }
        }
    }
    m_wndPathologyProcess.SetFocus();
    UpdateData(FALSE);
    return;
}

void CHMSExamine::OnCallInSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->CheckPermission(_T("02.06")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return;
    }
    callPatient();
}

void CHMSExamine::OnUpdateSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;

    // m_wndDoctorLabel.SetWindowText(_T("BAC SI"));

    if (pMF->m_nDocumentNo <= 0)
        return;

    if (!pMF->CheckPermission(_T("02.01")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return;
    }
    // Check ticket https://github.com/vimesdev/BV108/issues/1995

    // Theo yeu cau chi khong check khoa C1.3

    if ((pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")) &&
        pMF->m_nLimitNumberDoctorExaminedDay > 0 && pMF->m_szDept != _T("C1.3"))
    {
        CString szCertificate;

        szCertificate = pMF->GetCertificateInfor();

        szSQL.Format(_T("hms_exam_count_V2('%s', '%s', %d)"), pMF->m_szDept,
                     szCertificate, pMF->m_nLimitNumberDoctorExaminedDay);
        int nRet = str2int(pMF->ExecDML(szSQL));
        //_msg(_T("%s"), szSQL);
        if (nRet > 0)
        {
            CString szMsg;
            szMsg.Format(
                _T("Bác sĩ đã khám [%d] bệnh nhân. Vượt quá [%d] BH quy định!"),
                nRet, pMF->m_nLimitNumberDoctorExaminedDay);
            ShowMessageBox(szMsg, MB_OK | MB_ICONWARNING);
            // return;
        }
    }

    bool bUpdate = false;
    if (pMF->IsActiveDocument())
        bUpdate = true;
    else
    {
        if (m_szStatus == _T("O") || m_szStatus == _T("P"))
            bUpdate = true;
    }

    if (bUpdate)
    {
        // Check đủ tiền tạm ứng thì cho khám luôn (áp dụng cho phòng khám
        // Covid)
        szSQL.Format(_T("HMS_CHECKDEPOSITAMOUNT(%ld,'E') "), m_nDocumentNo);
        double nAmount = str2double(pMF->ExecDML(szSQL));

        if ((pMF->GetObjectType() == _T("S") ||
             pMF->GetObjectType() == _T("X")) &&
            pMF->m_szPaymentExamFeeRequest == _T("Y") &&
            !pMF->IsPaymentFee(_T("E"), pMF->m_nRefIndex) && nAmount < 0)
        {
            ShowMessageBox(
                _T("This patients unpaid examination fee. Can not update."),
                MB_OK);
            return;
        }

        // cap nhat trong hms_exam_pending neu benh nhan dang trang thai C ma an
        // cap nhat thi update thanh dang phuc vu

        CString szSQL;
        szSQL.Format(_T(" UPDATE hms_exam_pending ")
                     _T("	SET hep_pending    = 'P' ")
                     _T("	WHERE hep_deptid = '%s' ")
                     _T("	AND hep_roomid   = %d ")
                     _T("	AND hep_pending  ='C' and hep_docno = %ld "),
                     m_szDept, m_nRoomID, m_nDocumentNo);
        pMF->ExecSQL(szSQL);

        if (m_szExamTypeKey.IsEmpty())
        {
            CRecord rs(&pMF->m_db);
            CString szSQL;
            szSQL.Format(_T("SELECT hrl_inscode FROM hms_roomlist WHERE ")
                         _T("hrl_deptid='%s' and hrl_id=%d "),
                         pMF->m_szDept, pMF->m_nRoomID);

            rs.ExecSQL(szSQL);
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("hrl_inscode"), m_szExamTypeKey);
                UpdateData(FALSE);
            }
        }
        SetMode(VM_ADD);
    }
}
void CHMSExamine::OnTerminateSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;

    if (!pMF->CheckPermission(_T("02.02")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return;
    }

    // Check ticket https://github.com/vimesdev/BV108/issues/1995
    // Theo yeu cau doi voi User cua C1.1 se check truoc

    if ((pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")) &&
        pMF->m_nLimitNumberDoctorExaminedDay > 0 && pMF->m_szDept != _T("C1.3"))
    {
        CString szCertificate;

        szCertificate = pMF->GetCertificateInfor();

        szSQL.Format(_T("hms_exam_count_V2('%s', '%s', %d)"), pMF->m_szDept,
                     szCertificate, pMF->m_nLimitNumberDoctorExaminedDay);
        int nRet = str2int(pMF->ExecDML(szSQL));
        //_msg(_T("%s"), szSQL);
        if (nRet > 0)
        {
            CString szMsg;
            szMsg.Format(
                _T("Bác sĩ đã khám [%d] bệnh nhân. Vượt quá [%d] BH quy định!"),
                nRet, pMF->m_nLimitNumberDoctorExaminedDay);
            ShowMessageBox(szMsg, MB_OK | MB_ICONWARNING);
            // return;
        }
    }

    bool bUpdate = false;
    if (pMF->IsActiveDocument())
        bUpdate = true;
    else
    {
        if (m_szStatus == _T("O") || m_szStatus == _T("P"))
            bUpdate = true;
    }

    if (bUpdate)
    {
        szSQL.Format(_T("HMS_CHECKDEPOSITAMOUNT(%ld,'E') "), m_nDocumentNo);
        double nAmount = str2double(pMF->ExecDML(szSQL));

        if ((pMF->GetObjectType() == _T("S") ||
             pMF->GetObjectType() == _T("X")) &&
            pMF->m_szPaymentExamFeeRequest == _T("Y") &&
            !pMF->IsPaymentFee(_T("E"), pMF->m_nRefIndex) && nAmount < 0)
        {
            ShowMessageBox(
                _T("This patients unpaid examination fee. Can not update."),
                MB_OK);
            return;
        }

        if (m_szExamTypeKey.IsEmpty())
        {
            CRecord rs(&pMF->m_db);
            CString szSQL;
            szSQL.Format(_T("SELECT hrl_inscode FROM hms_roomlist WHERE ")
                         _T("hrl_deptid='%s' and hrl_id=%d "),
                         pMF->m_szDept, pMF->m_nRoomID);

            rs.ExecSQL(szSQL);
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("hrl_inscode"), m_szExamTypeKey);
                UpdateData(FALSE);
            }
        }

        SetMode(VM_EDIT);
    }
}
void CHMSExamine::OnSaveSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnSaveHMSExamine();
}
void CHMSExamine::OnCancelSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnCancelHMSExamine();
}

int CHMSExamine::OnUpdateDiseasePrehistory()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->CheckPermission(_T("02.03")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return 0;
    }

    CHMSDiseasePrehistoryDialog dlg(this);
    if (dlg.DoModal() == IDOK)
    {

        CRecord rs(&pMF->m_db);
        CString szSQL;
        szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE ")
                     _T("hdh_patientno=%ld and hdh_docno=%ld "),
                     pMF->m_nPatientNo, pMF->m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("hdh_owner"), m_szOwner);
            rs.GetValue(_T("hdh_family"), m_szFamily);
            rs.GetValue(_T("hdh_drugallergy"), m_szDrugAllergy);
            UpdateData(false);
        }
    }
    return 0;
}

int CHMSExamine::OnCreateAdmission()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;

    if (!pMF->CheckPermission(_T("02.04")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return 0;
    }

    szSQL.Format(
        _T("SELECT * FROM hms_doc WHERE hd_docno=%ld AND hd_suggestion='A' "),
        pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        CHMSAdmissionClinicalDialog dlg(pMF);
        rs.GetValue(_T("hd_indept"), dlg.m_szDeptID);
        dlg.DoModal();
    }
    return 0;
}
#include "ExamSpecialistEye.h"
int CHMSExamine::OnCertificateofphysicaleyeclinic()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (pMF->m_nDocumentNo > 0)
    {
        CExamSpecialistEye dlg(this);
        dlg.DoModal();
    }
    return 0;
}
#include "HMSFastDiagnosticDialog.h"
void CHMSExamine::OnConclusionSelect()
{
    /*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    UpdateData(true);
    if(!m_szICDDiagnosticKey.IsEmpty())
    {
        CHMSFastDiagnosticDialog dlg(this);
        dlg.m_nPatientNo = pMF->m_nPatientNo;
        dlg.m_nDocumentNo = pMF->m_nDocumentNo;
        dlg.m_szICD10Key = m_szICDDiagnosticKey;
        dlg.m_nRoomID = m_nRoomID;
        dlg.m_szConclusionx = m_wndICDDiagnostic.GetCurrent(1);
        if(dlg.DoModal() == IDOK)
        {
            if(!dlg.m_szConclusion.IsEmpty())
            m_szConclusion = dlg.m_szConclusion;
        }
    }
    UpdateData(false);*/

    UpdateData(true);
    CHMSCoDisease dlg(this);
    dlg.m_nPatientNo = m_nPatientNo;
    dlg.m_nDocumentNo = m_nDocumentNo;
    dlg.DoModal();
    m_szRelationDisease = dlg.m_szDisease;
    UpdateData(false);
}
int CHMSExamine::OnMedicalexams()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    /*if (pMF->m_nDocumentNo > 0)
    {
        CHeathExamDialog dlg(this);
        dlg.m_nDocNo = pMF->m_nDocumentNo;
        dlg.m_nPatientNo = pMF->m_nPatientNo;
        dlg.DoModal();
    }*/
    return 0;
}

int CHMSExamine::OnAddHMSExamine()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;

    SetMode(VM_ADD);
    return 0;
}
int CHMSExamine::OnEditHMSExamine()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CHMSExamine::OnDeleteHMSExamine()
{
    if (GetMode() != VM_VIEW)
        return -1;

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szWhere;
    CRecord rs(&pMF->m_db);

    if (ShowMessageBox(_T("Delete sheet examine"),
                       MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return -1;

    szSQL.Format(_T("SELECT count(*) FROM hms_testorder WHERE hpc_docno=%ld "),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
        return -1;

    szSQL.Format(_T("SELECT count(*) FROM hms_operation WHERE ho_docno=%ld "),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
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
    m_hms_examTbl.SetValue(_T("he_bmi"), m_nBMI);
    m_hms_examTbl.SetValue(_T("he_prediagnostic"), m_szPreDiagnostic);
    m_hms_examTbl.SetValue(_T("he_icd10"), m_szICDDiagnosticKey);

    m_hms_examTbl.SetValue(_T("he_diagnostic"), m_szConclusion);

    m_hms_examTbl.SetValue(_T("he_status"), _T("O"));

    if (m_bHATD)
        m_hms_examTbl.SetValue(_T("he_hatd"), _T("Y"));
    else
        m_hms_examTbl.SetValue(_T("he_hatd"), _T("N"));

    szSQL.Format(_T("UPDATE hms_doc SET hd_reldisease='', hd_doctor='' WHERE ")
                 _T("hd_docno=%ld "),
                 pMF->m_nDocumentNo);
    pMF->ExecSQL(szSQL);
    //	szSQL.Format(_T(" UPDATE hms_disease_hist SET hdh_owner='',
    // hdh_family='', hdh_drugallergy='' WHERE hdh_patientno=%ld "),
    // pMF->m_nPatientNo); 	pMF->ExecSQL(szSQL);

    szWhere.Format(
        _T(" WHERE he_docno=%ld AND he_receptidx=%ld and he_status ='P' "),
        pMF->m_nDocumentNo, pMF->m_nRefIndex);
    szSQL = m_hms_examTbl.GetUpdateSQL(
        _T("he_createdby,he_createddate,he_patientno,he_docno,he_receptidx"));
    szSQL += szWhere;

    //_fmsg(_T("%s"), szSQL);

    int ret = pMF->ExecSQL(szSQL);
    if (ret >= 0)
    {
        SetMode(VM_NONE);
        OnCancelHMSExamine();
    }
    return 0;
}
int CHMSExamine::OnSaveHMSExamine()
{
    if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    //	if(GetMode() == VM_ADD)
    {
        m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    }

    if (!IsValidateData())
        return -1;

    CString szSQL;
    CString szWhere;
    CRecord rs(&pMF->m_db);
    int nResult = 1;
    UpdateData(true);
   
    //Kiểm tra chưa nhập huyetap / chieu cao / can nang -> khong cho lưu
    if (GetMode() == VM_EDIT)
    {
        szSQL.Format(_T("HMS_CHECK_BEFORE_EXAM(%ld) "), pMF->m_nDocumentNo);
        nResult = str2int(pMF->ExecDML(szSQL));       

        if (nResult <= 0 && pMF->GetProp(_T("hms_a11_dept")) != _T("Y") && pMF->IsA11Patient() != _T("Y"))
        {

            if (m_nWeight <= 0)
            {
                ShowMessageBox(_T("Bệnh nhân chưa nhập cân nặng, không thể ")
                               _T("thực hiện tác vụ!"),
                               MB_ICONERROR);
                return -1;
            }

            if (m_nHeight <= 0)
            {
                ShowMessageBox(_T("Bệnh nhân chưa nhập chiều cao, không thể ")
                               _T("thực hiện tác vụ!"),
                               MB_ICONERROR);
                return -2;
            }

            if (m_nBloodPressure <= 0)
            {
                ShowMessageBox(_T("Bệnh nhân chưa nhập huyết áp tâm thu, ")
                               _T("không thể thực hiện tác vụ!"),
                               MB_ICONERROR);
                return -3;
            }

            if (m_nBloodPressurex <= 0)
            {
                ShowMessageBox(_T("Bệnh nhân chưa nhập huyết áp tâm trương, ")
                               _T("không thể thực hiện tác vụ!"),
                               MB_ICONERROR);
                return -4;
            }
        }
    }

    /* if ((m_nHeight <= 10) || (m_nHeight >= 250))
     {
         if (m_szHealthExam != _T("Y"))
         {
             ShowMessageBox(_T("Thông tin chiều cao không hợp lệ!"),
                            MB_ICONERROR);
             return -1;
         }
     }*/

    // kiem tra neu kieu kham trung voi cac phong kham truoc thi ko cho luu

    szSQL.Format(_T("SELECT count(*) from hms_exam where he_docno = %ld  and ")
                 _T("he_receptidx <> %ld and he_typeid=%d "),
                 pMF->m_nDocumentNo, m_nReceptIndex, ToInt(m_szExamTypeKey));
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() >= 1)
    {

        int nRet =
            MessageBox(_T("Kiểu khám đã trùng với 1 phòng khám khác bạn có ")
                       _T("chắc chắn không?"),
                       _T(""), MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2);
        if (nRet == IDNO)
        {
            ShowToolTip(&m_wndExamType, _T("Trùng lặp kiểu khám"));
            return -1;
        }
    }

    // Tien su kham
    szSQL.Format(_T("SELECT count(*) FROM hms_disease_hist WHERE ")
                 _T("hdh_patientno=%ld and hdh_docno=%ld "),
                 pMF->m_nPatientNo, pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() <= 0)
    {
        if (!m_szFamily.IsEmpty() || !m_szDrugAllergy.IsEmpty() ||
            !m_szOwner.IsEmpty() || !m_szHasAllergyKey.IsEmpty())
        {
            szSQL = m_hms_disease_histTbl.GetInsertSQL();
        }
    }
    else
    {
        szWhere.Format(_T(" WHERE hdh_patientno=%ld and hdh_docno=%ld "),
                       pMF->m_nPatientNo, pMF->m_nDocumentNo);
        szSQL = m_hms_disease_histTbl.GetUpdateSQL(
            _T("hdd_createdby,hdh_createddate,hdh_patientno,hdh_docno"));
        szSQL += szWhere;
    }

    pMF->ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);

    if (GetMode() == VM_ADD)
    {
        szWhere.Format(_T(" WHERE he_docno=%ld AND he_receptidx=%ld"),
                       pMF->m_nDocumentNo, m_nReceptIndex);
        szSQL = m_hms_examTbl.GetUpdateSQL(
            _T("he_createdby,he_createddate,he_patientno,he_docno,he_")
            _T("receptidx,he_diagnostic"));
        szSQL += szWhere;
    }
    else if (GetMode() == VM_EDIT)
    {

        szWhere.Format(_T(" WHERE he_docno=%ld AND he_receptidx=%ld "),
                       pMF->m_nDocumentNo, m_nReceptIndex);
        szSQL =
            m_hms_examTbl.GetUpdateSQL(_T("he_createdby,he_createddate,he_")
                                       _T("patientno,he_docno,he_receptidx"));
        szSQL += szWhere;
    }

    //_msg(_T("%s"), szSQL);
    int ret = pMF->ExecSQL(szSQL);
    if (ret > 0)
    {
        if (GetMode() == VM_ADD)
        {
            szSQL.Format(
                _T("UPDATE hms_doc SET hd_reldisease='%s', hd_doctor='%s' ")
                _T("WHERE hd_docno=%ld"),
                m_szRelationDisease, m_szDoctorKey, pMF->m_nDocumentNo);
            pMF->ExecSQL(szSQL);
        }
        else
        {
            CString szICD10, szConclusion, szDiagnostic, szDoctor;
            CRecord rs(&pMF->m_db);
            szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld "),
                         pMF->m_nDocumentNo);
            rs.ExecSQL(szSQL);
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("hd_icd"), szICD10);
                rs.GetValue(_T("hd_diagnostic"), szDiagnostic);
                rs.GetValue(_T("hd_conclusion"), szConclusion);
                rs.GetValue(_T("hd_doctor"), szDoctor);
                if (szICD10.IsEmpty())
                    szICD10 = m_szICDDiagnosticKey;
                if (szConclusion.IsEmpty())
                    szConclusion = m_szConclusion;
                if (szDiagnostic.IsEmpty())
                    szDiagnostic = m_wndICDDiagnostic.GetCurrent(1);
                if (szDoctor.IsEmpty())
                    szDoctor = m_szDoctorKey;

                szSQL.Format(_T("UPDATE hms_doc SET hd_reldisease='%s', ")
                             _T("hd_icd='%s', hd_diagnostic='%s', ")
                             _T("hd_conclusion='%s', hd_doctor='%s' ")
                             _T("WHERE hd_docno=%ld"),
                             m_szRelationDisease, szICD10, szDiagnostic,
                             szConclusion, szDoctor, pMF->m_nDocumentNo);

                pMF->ExecSQL(szSQL);
            }
        }
        // Check mã ICD nếu thuộc danh sách được thiết lập -> sinh ra 1 phiếu
        // chuyển khám
        int vcount = 0;
        int tmpvcount = 0;
        int vcount2 = 0;

        szSQL.Format(_T("PRE_CHECK_SENDTO_CANCER_DEPT(%ld, '%s') "),
                     pMF->m_nDocumentNo, m_szICDDiagnosticKey);
        vcount = str2int(pMF->ExecDML(szSQL));

        if (vcount > 0)
        {
            szSQL.Format(_T("HMS_CANCER_EXAM_CREATE(%ld, %ld) "),
                         pMF->m_nPatientNo, pMF->m_nDocumentNo);
            tmpvcount = str2int(pMF->ExecDML(szSQL));
            ShowMessageBox(_T("Gửi bệnh nhân đến khu khám ung thư!"));
        }
        // Khi cập nhật mã bệnh thì đẩy luôn vào các phòng chuyên khoa
        szSQL.Format(_T("UPDATE_ICD_CANCER_ROOM(%ld, '%s') "),
                     pMF->m_nDocumentNo, m_szICDDiagnosticKey);
        vcount2 = str2int(pMF->ExecDML(szSQL));
        if (vcount2 > 0)
        {
            ShowMessageBox(_T("Gửi bệnh nhân đến khu khám ung thư!"));
        }
        GetDataToScreen();
    }
    pMF->m_bExam = TRUE;
    SetMode(VM_VIEW);
    pMF->m_wndPatientDocument.m_wndDocumentNo.SetFocus();
    return ret;
}
int CHMSExamine::OnCancelHMSExamine()
{
    SetMode(VM_VIEW);
    return 0;
}

void CHMSExamine::OnHATDSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}

int CHMSExamine::OnHMSExamineListLoadData() { return 0; }

void CHMSExamine::LoadData(long nDocNo, int nReceptIdx, int nRoomID)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (nDocNo <= 0)
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

void CHMSExamine::InitCommPort()
{
    CString szCommPort;
    LONG lLastError = ERROR_SUCCESS;

    // for (int i =0; i < 3; i++)
    {
        // Attempt to open the serial port (COM1)
        szCommPort.Format(_T("COM1"));
        lLastError = m_SerialPort.Open(szCommPort, 0, 0, false);
        if (lLastError != ERROR_SUCCESS)
        {
            m_SerialPort.Close();
        }
        //		else
        //			break;
    }

    // Setup the serial port (9600,N81) using hardware handshaking
    lLastError = m_SerialPort.Setup(CSerial::EBaud9600, CSerial::EData8,
                                    CSerial::EParNone, CSerial::EStop1);
    if (lLastError != ERROR_SUCCESS)
    {
        m_SerialPort.Close();
        return;
    }

    // CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
    ////Ma benh vien Ninh binh = 37101
    // if(pMF->m_CompanyInfo.sc_id == _T("37101")){
    //		// Setup the serial port (9600,N81) using hardware handshaking
    //	lLastError =
    // m_SerialPort.Setup(CSerial::EBaud19200,CSerial::EData8,CSerial::EParNone,CSerial::EStop1);
    //	if (lLastError != ERROR_SUCCESS)
    //	{
    //		m_SerialPort.Close();
    //		return;
    //	}
    // }
    // else
    //{
    //	// Setup the serial port (9600,N81) using hardware handshaking
    //	lLastError =
    // m_SerialPort.Setup(CSerial::EBaud9600,CSerial::EData8,CSerial::EParNone,CSerial::EStop1);
    //	if (lLastError != ERROR_SUCCESS)
    //	{
    //		m_SerialPort.Close();
    //		return;
    //	}

    //	//WriteDataToPLC(&m_SerialPort, 0, 2, 1, m_nBeep);
    //}
}

void CHMSExamine::CloseCommPort()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (pMF->m_szHaveLed == _T("Y"))
    {
        if (pMF->m_CompanyInfo.sc_id != _T("37101"))
        {
            WriteDataToPLC(&m_SerialPort, 0, 5, 1, 6, _T(""));
        }
        m_SerialPort.Close();
    }
}

bool xstrtoi(char *str, int *result)
{
    char *endptr;
    long int lresult;

    lresult = strtol(str, &endptr, 10);
    if (str[0] == '\0' || endptr[0] != '\0')
        return FALSE;

    *result = (int)lresult;
    return TRUE;
}

void CHMSExamine::WriteDataToPLC(CSerial *serial, int nNumber, int nCtrl1,
                                 int nCtrl2, int nCtrl3, CString szPatientName)
{
    CString tmpStr;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    if (!serial->IsOpen())
        return;

    if (nNumber >= 1000)
    {
        tmpStr.Format(_T("%ld"), nNumber);
        tmpStr = tmpStr.Right(3);
    }
    else
        tmpStr.Format(_T("%.3d"), nNumber);

    // begin send data to lpc
    CString szBuffer;
    szBuffer.Format(_T("*R%s-%s#"), tmpStr, szPatientName);
    DWORD dwChar;
    char buff[3];
    char ch;
    CStringA szWriteString;
    szWriteString.Empty();
    int nL, nH;
    for (int i = 0; i < szBuffer.GetLength(); i++)
    {
        dwChar = (DWORD)szBuffer[i];
        nL = dwChar & 0x00ff;
        nH = (dwChar >> 8) & 0x00ff;
        buff[0] = (char)nL;
        buff[1] = (char)nH;
        szWriteString.AppendFormat("%c%c", buff[0], buff[1]);
    }
    // MessageBoxA(0, szWriteString, 0, 0);

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

void CHMSExamine::callPatient()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szPatientName;
    CString szName;
    szPatientName = pMF->m_wndPatientDocument.m_szStdPatientName;
    if (pMF->IsUseLCD())
    {
        CString szSQL;
        szSQL.Format(_T("HMS_EXAM_PENDING_CALL(%ld, '%s', %d, %ld)"),
                     m_nDocumentNo, pMF->m_szDept, pMF->m_nRoomID,
                     m_nReceptIndex);
        pMF->ExecDML(szSQL);
    }
    else
    {
        WriteDataToPLC(&m_SerialPort, m_nReceptNo, 2, 1, m_nBeep,
                       szPatientName);
    }
}
void CHMSExamine::OnCallPatientSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szText, szSQL;
    if (pMF->m_szDept == _T("C1.2"))
    {
        szSQL.Format(_T(" HMS_EXAMING_WAITINGBOARD(%ld, '%s',%d, %d) "),
                     m_nDocumentNo, m_szDept, m_nRoomID, m_nReceptNo);
        int res = str2int(pMF->ExecDML(szSQL));

        if (res > 0)
        {
            szText.Format(_T("Mời bệnh nhân số [%d] vào phòng số [%d]"),
                          m_nReceptNo, m_nRoomID);
            // pMF->SetStatusText(szText, 0);
            // pMF->OnReadNumberSpeaking(m_nReceptNo, m_nRoomID, false);
        }
    }
    else
    {
        callPatient();
    }
}
BEGIN_MESSAGE_MAP(CHMSExamine, CGuiView)
ON_WM_DESTROY()
END_MESSAGE_MAP()

void CHMSExamine::OnDestroy()
{
    CGuiView::OnDestroy();
    CloseCommPort();
}

#include "HMSGeneralRankExamine.h"

int CHMSExamine::OnGeneralRankExamine(CString szType)
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->CheckPermission(_T("EMR.01")))
    {
        ShowMessageBox(
            _T("Không có quyền thao tác, cần có phiếu khám của khoa A11"));
        return 0;
    }

    if (pMF->IsA11Patient() == _T("N"))
    {
        ShowMessageBox(
            _T("Không có quyền thao tác, cần có phiếu khám của khoa A11"),
            MB_ICONERROR);
        return 0;
    }
    /*if(pMF->GetDocumentStatus() == _T("T"))
    {
        ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép cập nhật thông
    tin")); return 0;
    }*/
    CString szBoNhiem = L"N";
    if (szType == L"KSK_CAPTUONG_C12")
        szBoNhiem = L"Y";
    else if (szType == L"KSK_DIHOC_C12")
        szBoNhiem = L"Z";

    CHMSGeneralRankExamine dlg(this);
    dlg.m_szBoNhiem = szBoNhiem;
    dlg.m_szType = szType;
    dlg.DoModal();
    return 0;
}

#include "HMSHealthExamHtmlDialog.h"

int CHMSExamine::OnHealthExamination()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->CheckPermission(_T("EMR.02")))
    {
        //		ShowMessageBox(_T("Không có quyền thao tác"));
        //		return 0;
    }
    /*if(pMF->GetDocumentStatus() == _T("T"))
    {
        ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép cập nhật thông
    tin")); return 0;
    }*/

    CHMSHealthExamHtmlDialog dlg(this, _T("HMS_HEALTHEXAM"));
    dlg.m_nDocumentNo = m_nDocumentNo;
    dlg.DoModal();
    return 0;
}
#include "HMSAddAppointmentA20.h"

int CHMSExamine::OnAddAppointMentA20()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->CheckPermission(_T("20.12")))
    {
        ShowMessageBox(_T("Không có quyền thao tác [20.12]"));
        return 0;
    }
    // if(pMF->GetDocumentStatus() == _T("T"))
    //{
    //	ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép cập nhật thông
    // tin")); 	return 0;
    // }
    //
    CHMSAddAppointmentA20 dlg(this);
    dlg.m_nDocno = m_nDocumentNo;
    dlg.m_nReceptNo = pMF->m_nRefIndex;
    dlg.SetMode(VM_ADD);
    dlg.DoModal();
    return 0;
}

#include "IVFRecordInfoDialog.h"
int CHMSExamine::OnBenhAnHiemMuonSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);

    szSQL.Format(
        _T(" SELECT")
        _T("   (SELECT hd_patientno FROM hms_doc WHERE hd_docno = hdi_docno")
        _T("   ) AS hdi_patientno,")
        _T("   hdi_docno,")
        _T("   (SELECT hd_patientno FROM hms_doc WHERE hd_docno = hdi_refdoc")
        _T("   ) AS hdi_refpatientno,")
        _T("   hdi_refdoc")
        _T(" FROM hms_doc_infertility")
        _T(" WHERE (hdi_docno = %ld")
        _T(" OR hdi_refdoc    =%ld)"),
        m_nDocumentNo, m_nDocumentNo);

    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        long nPatientNo;
        long nDocNo;
        long nRefPatientNo, nRefDocNo;
        rs.GetValue(_T("hdi_patientno"), nPatientNo);
        rs.GetValue(_T("hdi_docno"), nDocNo);
        rs.GetValue(_T("hdi_refpatientno"), nRefPatientNo);
        rs.GetValue(_T("hdi_refdoc"), nRefDocNo);
        pMF->m_bIVFSwitch = true;
        CIVFRecordInfoDialog dlg(this);
        dlg.m_nPatientNo = nPatientNo;
        dlg.m_nDocNo = nDocNo;
        dlg.DoModal();
    }
    else
    {
        pMF->m_bIVFSwitch = false;
        CIVFRecordInfoDialog dlg(this);
        dlg.m_nPatientNo = pMF->m_nPatientNo;
        dlg.m_nDocNo = pMF->m_nDocumentNo;
        dlg.DoModal();
    }
    return 0;
}

void CHMSExamine::OnMenuSelect(CGuiMenu *pMenu)
{
    TCHAR szItemName[256];
    CPoint point = GetCaretPos(); // Create popup at pointer
    ClientToScreen(
        &point); // convert coordinate from client-related to screen related
    int nPos = pMenu->TrackPopupMenu(TPM_RETURNCMD | TPM_CENTERALIGN |
                                         TPM_TOPALIGN | TPM_NONOTIFY,
                                     point.x, point.y + 20, this);
    if (nPos > 0)
    {
        MENUITEMINFO menuinfo;
        // Init MENUINFO structure
        menuinfo.cbSize = sizeof(menuinfo);
        menuinfo.fMask = MIIM_STRING;
        menuinfo.dwTypeData = szItemName;
        menuinfo.cch = 256;
        GetMenuItemInfo(pMenu->GetSafeHmenu(), nPos, false, &menuinfo);
        m_szMenuString = szItemName;
    }
}

void CHMSExamine::OnResizeLayout()
{
    AddResize(&m_wndExamine, 100, 100);
    AddResize(&m_wndExaminationInformation, 100, 100);

    // AddBottom(&m_wndCallPatient, 0, true);
    AddBottom(&m_wndPrehistory, 5, true);
    AddBottom(&m_wndReloadInfo, 5, true);
    AddBottom(&m_wndUpdate);
    AddBottom(&m_wndTerminate);
    AddBottom(&m_wndSave);
    AddBottom(&m_wndCancel);
    return;

    AddLayoutControls(WS_REPOSY, 0, 100, 0, 0, &m_wndPrehistory,
                      &m_wndReloadInfo, &m_wndUpdate, &m_wndTerminate,
                      &m_wndSave, &m_wndCancel, NULL);

    AddLayoutControls(WS_REPOSY, 0, 100, 0, 0, &m_wndPulseLabel,
                      &m_wndBreathingIntervalLabel, &m_wndPreDiagnosticLabel,
                      &m_wndRelationDiseaseLabel, &m_wndICDDiagnosticLabel,
                      &m_wndConclusionLabel, &m_wndCallPatient, NULL);
    AddLayoutControls(WS_REPOSY, 0, 100, 0, 0, &m_wndPulse,
                      &m_wndTemperatureLabel, &m_wndTemperature,
                      &m_wndBloodPressureLabel, &m_wndBloodPressure,
                      &m_wndBloodPressurex, &m_wndBreathingInterval,
                      &m_wndWeightLabel, &m_wndWeight, &m_wndHeightLabel,
                      &m_wndHeight, &m_wndAddInforLabel, NULL);

    AddLayoutControls(WS_REPOSX | WS_REPOSY, 100, 100, 0, 0, &m_wndHATD,
                      &m_wndCoDiseaseAdd, &m_wndAddInforLabel, NULL);

    // AddLayoutControls(WS_RESIZEX|WS_RESIZEX, 100, 150, 0,
    // 0,&m_wndAddInforLabel, NULL);

    AddLayoutControls(WS_RESIZEX | WS_RESIZEY, 0, 0, 100, 100, &m_wndExamine,
                      NULL);

    AddLayoutControls(WS_RESIZEX | WS_REPOSY, 0, 100, 100, 0,
                      &m_wndPreDiagnostic, &m_wndRelationDisease,
                      &m_wndICDDiagnostic, &m_wndConclusion, NULL);

    AddLayoutControls(WS_RESIZEX, 0, 0, 100, 0, &m_wndDiseasePrehistory,
                      &m_wndOwner, &m_wndFamily, &m_wndDrugAllergy,
                      &m_wndPathologyProcess, NULL);

    AddLayoutControls(WS_RESIZEX | WS_RESIZEY, 0, 0, 100, 100,
                      &m_wndExaminationInformation, NULL);

    AddLayoutControls(WS_REPOSX, 50, 0, 0, 0, &m_wndDoctorLabel, NULL);
    AddLayoutControls(WS_REPOSX | WS_RESIZEX, 50, 0, 50, 0, &m_wndDoctor, NULL);
    AddLayoutControls(WS_RESIZEX, 0, 0, 50, 0, &m_wndExamType, NULL);
}

void CHMSExamine::SwitchInfertilityPatient()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;

    szSQL.Format(
        _T(" SELECT hdi_roomid, ")
        _T("   (SELECT hd_patientno FROM hms_doc WHERE hd_docno = hdi_docno")
        _T("   ) AS hdi_patientno,")
        _T("   hdi_docno,")
        _T("   (SELECT hd_patientno FROM hms_doc WHERE hd_docno = hdi_refdoc")
        _T("   ) AS hdi_refpatientno,")
        _T("   hdi_refdoc")
        _T(" FROM hms_doc_infertility")
        _T(" WHERE (hdi_docno = %ld")
        _T(" OR hdi_refdoc    =%ld)"),
        m_nDocumentNo, m_nDocumentNo);

    long nPatientNo, nDocNo, nRefPatientNo, nRefDocNo;
    int nRoomID;
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("hdi_patientno"), nPatientNo);
        rs.GetValue(_T("hdi_docno"), nDocNo);
        rs.GetValue(_T("hdi_refpatient"), nRefPatientNo);
        rs.GetValue(_T("hdi_refdoc"), nRefDocNo);
        rs.GetValue(_T("hdi_roomid"), nRoomID);
        if (m_nDocumentNo == nDocNo)
        {
            pMF->m_wndPatientDocument.LoadData(nRefPatientNo, nRefDocNo,
                                               nRoomID, 0);
        }
        else
        {
            pMF->m_wndPatientDocument.LoadData(nPatientNo, nDocNo, nRoomID, 0);
        }
    }
}
void CHMSExamine::OnCancelInfertility()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    if (!pMF->CheckPermission(_T("20.10")))
    {
        ShowMessageBox(_T("Không có quyền hủy bệnh án hiếm muộn"));
        return;
    }

    szSQL.Format(_T("HMS_DOC_INFERTILITY_CANCEL('%s',%ld) "),
                 pMF->GetCurrentUser(), pMF->m_nDocumentNo);
    int ret = str2int(pMF->ExecDML(szSQL));
    if (ret <= 0)
    {
        ShowMessageBox(_T("Không thể hủy được bệnh án hiếm muộn"));
    }
    else
        ShowMessageBox(_T("Bệnh án hiếm muộn đã được hủy thành công"));
}

#include "HMSPregnancyHtmlDialog.h"
void CHMSExamine::OnRegistrationPregnancy()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szSex;
    CRecord rs(&pMF->m_db);
    szSQL.Format(_T("SELECT hp_sex FROM hms_patient WHERE hp_patientno=%ld"),
                 pMF->m_nPatientNo);
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("hp_sex"), szSex);
    if (szSex != _T("F"))
        return;

    CHMSPregnancyHtmlDialog dlg(this, _T("PTTYC_GIAYDANGKYMODE"));
    if (dlg.DoModal() == IDOK)
    {
    }
}

void CHMSExamine::OnCancelPregnancy() {}

int CHMSExamine::OnPeriodicExamHealth()
{
    CHMSGeneralRankExamine dlg(this);
    dlg.m_bGeneralExamHealth = false;
    dlg.m_szType = L"KSK_MS3_KSKDK";
    dlg.DoModal();
    return 0;
}

void CHMSExamine::OnPathologyProcessLabelSelect()
{
    CHMSNoteExtendDlg dlg(&m_wndPathologyProcess);
    dlg.DoModal();
}

void CHMSExamine::OnExamineLabelSelect()
{
    CHMSNoteExtendDlg dlg(&m_wndExamine);
    dlg.DoModal();
}

long CHMSExamine::OnHasAllergyLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
        szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s
    ORDER BY id "), szWhere nCount = rs.ExecSQL(szSQL); while(!rs.IsEOF()){
            m_wndHasAllergy.AddItems(
                rs.GetValue(_T("id")),
                rs.GetValue(_T("name")), NULL);
            rs.MoveNext();
        }
        return nCount;
    */
    return 0;
}
void CHMSExamine::OnCoDiseaseAddSelect()
{
    UpdateData(true);
    CHMSCoDisease dlg(this);
    dlg.m_nPatientNo = m_nPatientNo;
    dlg.m_nDocumentNo = m_nDocumentNo;
    dlg.DoModal();
    m_szRelationDisease = dlg.m_szDisease;
    UpdateData(false);
}
void CHMSExamine::OnAddInforLabelSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    if (pMF->m_nDocumentNo > 0)
    {
        CQsofa_News2_Form_Dialog dlg(this);
        dlg.DoModal();
        GetDataToScreen();
    }
    else
    {
    }
}

void CHMSExamine::OnThangDiemSelect()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (pMF->m_nDocumentNo > 0)
    {
        CHMSQsofa_News2_Form_Result dlg(this);
        dlg.DoModal();
    }
}

long CHMSExamine::OnEmergencyTypeLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndEmergencyType.IsSearchKey() && !m_szEmergencyTypeKey.IsEmpty())
    {
        szWhere.Format(_T(" and ss_code='%s' "), m_szEmergencyTypeKey);
    }
    m_wndEmergencyType.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")
                 _T("FROM sys_sel ")
                 _T("WHERE 1=1 AND ss_id='hms_emerdisease_type' and ")
                 _T("cast(ss_code as integer) <= 3 %s ")
                 _T("ORDER BY cast(ss_code as integer) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndEmergencyType.AddItems(rs.GetValue(_T("id")),
                                    rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}

long CHMSExamine::OnDetailEmergencyTypeLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndDetailEmergencyType.IsSearchKey() &&
        !m_szDetailEmergencyTypeKey.IsEmpty())
    {
        szWhere.Format(_T(" and ss_code='%s' "), m_szDetailEmergencyTypeKey);
    }
    m_wndDetailEmergencyType.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")
                 _T("FROM sys_sel ")
                 _T("WHERE 1=1 AND ss_id='hms_emerdisease_type' and ")
                 _T("cast(ss_code as integer) >= 4 %s ")
                 _T("ORDER BY cast(ss_code as integer) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndDetailEmergencyType.AddItems(rs.GetValue(_T("id")),
                                          rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}