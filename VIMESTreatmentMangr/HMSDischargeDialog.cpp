#include "HMSDischargeDialog.h"
// #include "stdafx.h"
#include "GuiDialog.h"
#include "HMSCoDisease.h"
#include "HMSPatientDeathDialog.h"
#include "MainFrm.h"
#include "StringToken.h"

/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnAdmitDateSetfocus();} */
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnAdmitDateCheckValue();
}

/*static void _OnEndDateChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnEndDateSetfocus();} */
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnEndDateCheckValue();
}
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    ((CHMSDischargeDialog *)pWnd)
        ->OnResultSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnResultSelendokFnc(CWnd *pWnd)
{
    ((CHMSDischargeDialog *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnResultAddNew();
}*/
/*static void _OnTotalDayChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnTotalDayChange();
} */
/*static void _OnTotalDaySetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnTotalDaySetfocus();} */
/*static void _OnTotalDayKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnTotalDayKillfocus();
} */
static int _OnTotalDayCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnTotalDayCheckValue();
}
static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                    int nNewItemSel)
{
    ((CHMSDischargeDialog *)pWnd)
        ->OnICD10SelectChange(nOldItemSel, nNewItemSel);
}
static void _OnICD10SelendokFnc(CWnd *pWnd)
{
    ((CHMSDischargeDialog *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnICD10AddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnMainDiseaseSetfocus();} */
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnMainDiseaseCheckValue();
}
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseSetfocus();} */
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseCheckValue();
}

static void _OnRelationDiseaseSelectFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnRelationDiseaseSelect();
}

/*static void _OnTreatMethodChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnTreatMethodChange();
} */
/*static void _OnTreatMethodSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnTreatMethodSetfocus();} */
/*static void _OnTreatMethodKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnTreatMethodKillfocus();
} */
static int _OnTreatMethodCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnTreatMethodCheckValue();
}
/*static void _OnAdmissionStatusChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnAdmissionStatusChange();
} */
/*static void _OnAdmissionStatusSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnAdmissionStatusSetfocus();} */
/*static void _OnAdmissionStatusKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnAdmissionStatusKillfocus();
} */
static int _OnAdmissionStatusCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnAdmissionStatusCheckValue();
}
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnConclusionSetfocus();} */
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnConclusionCheckValue();
}
/*static void _OnYKienDenGhiChangeFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnYKienDenGhiChange();
} */
/*static void _OnYKienDenGhiSetfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnYKienDenGhiSetfocus();} */
/*static void _OnYKienDenGhiKillfocusFnc(CWnd *pWnd){
    ((CHMSDischargeDialog *)pWnd)->OnYKienDenGhiKillfocus();
} */
static int _OnYKienDenGhiCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnYKienDenGhiCheckValue();
}
static void _OnUpdateSelectFnc(CWnd *pWnd)
{
    CHMSDischargeDialog *pVw = (CHMSDischargeDialog *)pWnd;
    pVw->OnUpdateSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd)
{
    CHMSDischargeDialog *pVw = (CHMSDischargeDialog *)pWnd;
    pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd *pWnd)
{
    CHMSDischargeDialog *pVw = (CHMSDischargeDialog *)pWnd;
    pVw->OnCancelSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd)
{
    CHMSDischargeDialog *pVw = (CHMSDischargeDialog *)pWnd;
    pVw->OnPrintSelect();
}
static int _OnAddHMSDischargeDialogFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnAddHMSDischargeDialog();
}
static int _OnEditHMSDischargeDialogFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnEditHMSDischargeDialog();
}
static int _OnDeleteHMSDischargeDialogFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnDeleteHMSDischargeDialog();
}
static int _OnSaveHMSDischargeDialogFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnSaveHMSDischargeDialog();
}
static int _OnCancelHMSDischargeDialogFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnCancelHMSDischargeDialog();
}
static int _OnUpdateDeathInformationFnc(CWnd *pWnd)
{
    return ((CHMSDischargeDialog *)pWnd)->OnUpdateDeathInformation();
}

CHMSDischargeDialog::CHMSDischargeDialog(CWnd *pParent)
{

    m_nDlgWidth = 610;
    m_nDlgHeight = 560;
    m_szTitle = _T("Create Discharge Sheet");
    SetDefaultValues();
}
CHMSDischargeDialog::~CHMSDischargeDialog() {}
void CHMSDischargeDialog::OnCreateComponents()
{
    m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 10, 30, 130, 55);
    m_wndAdmitDate.Create(this, 135, 30, 235, 55);
    m_wndEndDateLabel.Create(this, _T("End Date"), 240, 30, 360, 55);
    m_wndEndDate.Create(this, 365, 30, 490, 55);
    m_wndResultLabel.Create(this, _T("Result"), 495, 30, 615, 55);
    m_wndResult.Create(this, 620, 30, 795, 55);
    m_wndDischargeInformation.Create(this, _T("Discharge Information"), 5, 5,
                                     1005, 675);
    m_wndTotalDayLabel.Create(this, _T("Total Day"), 800, 30, 925, 55);
    m_wndTotalDay.Create(this, 930, 30, 1000, 55);
    m_wndICD10Label.Create(this, _T("ICD10"), 10, 60, 130, 85);
    m_wndICD10.Create(this, 135, 60, 1000, 85);
    m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 165);
    m_wndMainDisease.Create(this, 135, 90, 1000, 165, TRUE, FALSE, TRUE);
    m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 170, 130,
                                     245);
    m_wndRelationDisease.Create(this, 135, 170, 1000, 245, TRUE, FALSE, TRUE);
    m_wndTreatMethodLabel.Create(this, _T("Treat Method"), 10, 250, 130, 350);
    m_wndTreatMethod.Create(this, 135, 250, 1000, 350, TRUE, FALSE, TRUE);
    m_wndNoteLabel.Create(this, _T("Note"), 10, 355, 130, 455);
    m_wndNote.Create(this, 135, 355, 1000, 455, TRUE, FALSE, TRUE);
    m_wndAdmissionStatusLabel.Create(this, _T("Admission Status"), 10, 460, 130,
                                     525);
    m_wndAdmissionStatus.Create(this, 135, 460, 1000, 525, TRUE, FALSE, TRUE);
    m_wndYKienDenGhiLabel.Create(this, _T("Y kien den ghi"), 10, 530, 130, 595);
    m_wndYKienDenGhi.Create(this, 135, 530, 1000, 595, TRUE, FALSE, TRUE);
    m_wndConclusionLabel.Create(this, _T("Conclusion /Advice"), 10, 600, 130,
                                670);
    m_wndConclusion.Create(this, 135, 600, 1000, 670, TRUE, FALSE, TRUE);
    m_wndUpdate.Create(this, _T("&Update"), 590, 680, 690, 705);
    m_wndSave.Create(this, _T("&Save"), 695, 680, 795, 705);
    m_wndCancel.Create(this, _T("&Cancel"), 800, 680, 900, 705);
    m_wndPrint.Create(this, _T("&Print"), 905, 680, 1005, 705);
}
void CHMSDischargeDialog::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndAdmitDate.SetReadOnly(false);
    //	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
    m_wndEndDate.SetCheckValue(true);
    m_wndResult.SetCheckValue(true);
    m_wndResult.LimitText(1024);
    m_wndTotalDay.SetLimitText(1024);
    m_wndTotalDay.SetCheckValue(true);
    m_wndICD10.SetCheckValue(true);
    m_wndICD10.LimitText(254);
    m_wndICD10.SetRequirementLength(1);
    m_wndICD10.SetVisibleLines(15);
    m_wndMainDisease.SetLimitText(1024);
    m_wndMainDisease.SetCheckValue(true);
    m_wndRelationDisease.SetLimitText(512);
    m_wndAdmissionStatus.SetLimitText(254);
    //	m_wndRelationDisease.SetCheckValue(true);
    m_wndTreatMethod.SetLimitText(1024);
    //	m_wndTreatMethod.SetCheckValue(true);
    m_wndConclusion.SetLimitText(512);
    //	m_wndConclusion.SetCheckValue(true);
    m_wndTotalDay.SetCheckValue(true);
    m_wndTotalDay.SetLimitText(3);
    m_wndNote.SetLimitText(1024);
    m_wndNote.SetCheckValue(true);

    m_wndResult.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndResult.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

    m_wndICD10.Format(2, 1, 18);
    m_wndICD10.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

    m_hms_clinical_recordTbl.SetTableName(_T("hms_clinical_record"));
    m_hms_clinical_recordTbl.AddField(_T("hcr_updatedby"), dfText, 15);
    m_hms_clinical_recordTbl.AddField(_T("hcr_updateddate"), dfDateTime);
    m_hms_clinical_recordTbl.AddField(_T("hcr_conclusion"), dfText, 512);
    m_hms_clinical_recordTbl.AddField(_T("hcr_mainicd"), dfText, 13);
    m_hms_clinical_recordTbl.AddField(_T("hcr_maindisease"), dfText, 1024);
    m_hms_clinical_recordTbl.AddField(_T("hcr_result"), dfText, 1);
    m_hms_clinical_recordTbl.AddField(_T("hcr_reason"), dfText, 254);
    // m_hms_clinical_recordTbl.AddField(_T("hcr_status"), dfText, 1);
    m_hms_clinical_recordTbl.AddField(_T("hcr_dischargedate"), dfDateTime);
    m_hms_clinical_recordTbl.AddField(_T("hcr_dischargedept"), dfText, 7);
    m_hms_clinical_recordTbl.AddField(_T("hcr_reldisease"), dfText, 254);
    m_hms_clinical_recordTbl.AddField(_T("hcr_gmethod"), dfText, 1024);
    m_hms_clinical_recordTbl.AddField(_T("hcr_gsuggestion2"), dfText, 254);
    m_hms_clinical_recordTbl.AddField(_T("hcr_refidx"), dfInteger);
    m_hms_clinical_recordTbl.AddField(_T("hcr_discharge"), dfText, 1);
    m_hms_clinical_recordTbl.AddField(_T("hcr_sumtreat"), dfInteger);
    m_hms_clinical_recordTbl.AddField(_T("hcr_comment"), dfText, 1024);
    m_hms_clinical_recordTbl.AddField(_T("hcr_admitdate"), dfDateTime);

    m_hms_treatmentTbl.SetTableName(_T("hms_treatment_record"));
    m_hms_treatmentTbl.AddField(_T("htr_status"), dfText, 1);
    m_hms_treatmentTbl.AddField(_T("htr_outstate"), dfInteger);
    m_hms_treatmentTbl.AddField(_T("htr_enddept"), dfText, 7);
    m_hms_treatmentTbl.AddField(_T("htr_dischargedate"), dfDateTime);
    m_hms_treatmentTbl.AddField(_T("htr_admiticd"), dfText, 13);
    m_hms_treatmentTbl.AddField(_T("htr_maindisease"), dfText,
                                1024); // Benh chinh
    m_hms_treatmentTbl.AddField(_T("htr_reldisease"), dfText,
                                254); // benh kem theo
    m_hms_treatmentTbl.AddField(_T("htr_conclusion"), dfText, 512); // Ket luan
    m_hms_treatmentTbl.AddField(_T("hcr_gsuggestion2"), dfText,
                                512); // hcr_gsuggestion2
    m_hms_treatmentTbl.AddField(
        _T("htr_suggestion"), dfText,
        1); // Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien),
            // T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
    m_hms_treatmentTbl.AddField(
        _T("htr_result"), dfText,
        1); // 1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
    m_hms_treatmentTbl.AddField(_T("htr_doctor"), dfText, 15);
    m_hms_treatmentTbl.AddField(_T("htr_indept"), dfText, 7); // Khoa dieu tri
    m_hms_treatmentTbl.AddField(_T("htr_tohosid"), dfText,
                                13); // Benh vien chuyen toi
    m_hms_treatmentTbl.AddField(_T("htr_areceptidx"), dfInteger);
}
void CHMSDischargeDialog::OnSetWindowEvents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
    // m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
    // m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
    m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
    // m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
    // m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
    // m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
    m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
    m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
    // m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
    // m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
    m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
    m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
    // m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
    // m_wndTotalDay.SetEvent(WE_CHANGE, _OnTotalDayChangeFnc);
    // m_wndTotalDay.SetEvent(WE_SETFOCUS, _OnTotalDaySetfocusFnc);
    // m_wndTotalDay.SetEvent(WE_KILLFOCUS, _OnTotalDayKillfocusFnc);
    m_wndTotalDay.SetEvent(WE_CHECKVALUE, _OnTotalDayCheckValueFnc);
    m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
    // m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
    // m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
    m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
    m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
    // m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);
    // m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
    // m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
    // m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
    m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
    // m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
    // m_wndRelationDisease.SetEvent(WE_SETFOCUS,
    // _OnRelationDiseaseSetfocusFnc);
    // m_wndRelationDisease.SetEvent(WE_KILLFOCUS,
    // _OnRelationDiseaseKillfocusFnc);
    m_wndRelationDisease.SetEvent(WE_CHECKVALUE,
                                  _OnRelationDiseaseCheckValueFnc);
    m_wndRelationDiseaseLabel.SetHyperlink(true);
    m_wndRelationDiseaseLabel.SetEvent(WE_CLICK, _OnRelationDiseaseSelectFnc);

    // m_wndTreatMethod.SetEvent(WE_CHANGE, _OnTreatMethodChangeFnc);
    // m_wndTreatMethod.SetEvent(WE_SETFOCUS, _OnTreatMethodSetfocusFnc);
    // m_wndTreatMethod.SetEvent(WE_KILLFOCUS, _OnTreatMethodKillfocusFnc);
    m_wndTreatMethod.SetEvent(WE_CHECKVALUE, _OnTreatMethodCheckValueFnc);
    // m_wndAdmissionStatus.SetEvent(WE_CHANGE, _OnAdmissionStatusChangeFnc);
    // m_wndAdmissionStatus.SetEvent(WE_SETFOCUS,
    // _OnAdmissionStatusSetfocusFnc);
    // m_wndAdmissionStatus.SetEvent(WE_KILLFOCUS,
    // _OnAdmissionStatusKillfocusFnc);
    m_wndAdmissionStatus.SetEvent(WE_CHECKVALUE,
                                  _OnAdmissionStatusCheckValueFnc);
    // m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
    // m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
    // m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
    m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
    // m_wndYKienDenGhi.SetEvent(WE_CHANGE, _OnYKienDenGhiChangeFnc);
    // m_wndYKienDenGhi.SetEvent(WE_SETFOCUS, _OnYKienDenGhiSetfocusFnc);
    // m_wndYKienDenGhi.SetEvent(WE_KILLFOCUS, _OnYKienDenGhiKillfocusFnc);
    m_wndYKienDenGhi.SetEvent(WE_CHECKVALUE, _OnYKienDenGhiCheckValueFnc);
    m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
    m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
    m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
    m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

    //	AddEvent(1, _T("Update Death Information"),
    //_OnUpdateDeathInformationFnc);

    /*
        AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDischargeDialogFnc, 0, 'A',
       VK_CONTROL); AddEvent(2, _T("Edit	Ctrl+E"),
       _OnEditHMSDischargeDialogFnc, 0, 'E', VK_CONTROL); AddEvent(3, _T("Delete
       Ctrl+D"), _OnDeleteHMSDischargeDialogFnc, 0, 'D', VK_CONTROL);
        AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDischargeDialogFnc, 0, 'S',
       VK_CONTROL); AddEvent(0, _T("-")); AddEvent(5, _T("Cancel	Ctrl+T"),
       _OnCancelHMSDischargeDialogFnc, 0, 'T', VK_CONTROL);
    */

    //	if(GetMode() == VM_NONE)
    //		return;
    GetDataToScreen();
    GetScreenToData();
}
void CHMSDischargeDialog::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
    DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
    DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
    DDX_Text(pDX, m_wndTotalDay.GetDlgCtrlID(), m_nTotalDay);
    DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
    DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
    DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
    DDX_Text(pDX, m_wndTreatMethod.GetDlgCtrlID(), m_szTreatMethod);
    DDX_Text(pDX, m_wndAdmissionStatus.GetDlgCtrlID(), m_szAdmissionStatus);
    DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
    DDX_Text(pDX, m_wndYKienDenGhi.GetDlgCtrlID(), m_szYkiendenghi);
    DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
}
void CHMSDischargeDialog::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szStatus;
    szSQL.Format(_T(" SELECT * ")
                 _T(" FROM hms_clinical_record_hist ")
                 _T(" WHERE hcr_docno = %ld")
                 _T(" AND hcr_treattime = %d"),
                 pMF->m_nDocumentNo, pMF->m_nTreatTime);
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        szSQL.Format(_T(" SELECT * ")
                     _T(" FROM hms_clinical_record ")
                     _T(" WHERE hcr_docno = %ld"),
                     pMF->m_nDocumentNo);
        rs.ExecSQL(szSQL);
    }
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("hcr_conclusion"), m_szConclusion);
        rs.GetValue(_T("hcr_mainicd"), m_szICD10Key);
        rs.GetValue(_T("hcr_maindisease"), m_szMainDisease);
        rs.GetValue(_T("hcr_result"), m_szResultKey);
        rs.GetValue(_T("hcr_reason"), m_szAdmissionStatus);
        rs.GetValue(_T("hcr_status"), szStatus);
        rs.GetValue(_T("hcr_admitdate"), m_szAdmitDate);
        rs.GetValue(_T("hcr_dischargedate"), m_szEndDate);
        rs.GetValue(_T("hcr_reldisease"), m_szRelationDisease);
        rs.GetValue(_T("hcr_gmethod"), m_szTreatMethod);
        rs.GetValue(_T("hcr_gsuggestion2"), m_szYkiendenghi);
        rs.GetValue(_T("hcr_sumtreat"), m_nTotalDay);
        rs.GetValue(_T("hcr_comment"), m_szNote);

        CString tmpStr;
        rs.GetValue(_T("hcr_discharge"), tmpStr);
        if (tmpStr != _T("Y"))
        {
            CString tmpDate;
            CDate dte;
            dte.ParseDate(pMF->GetSysDate());
            dte += 1;
            tmpDate.Format(_T("%s"), dte.GetDate());
            m_szEndDate.Format(_T("%s 06:00"), tmpDate);
        }
        m_szICD10Key.Trim();
    }

    if (m_szMainDisease.IsEmpty())
        m_szMainDisease = pMF->m_szDiagnostic;
    m_szICD10Key.Trim();
    m_szMainDisease.Trim();
    m_szRelationDisease.Trim();
    m_szConclusion.Trim();
    m_szTreatMethod.Trim();
    m_szAdmissionStatus.Trim();

    m_szOutPatient = _T("N");

    szSQL.Format(
        _T("SELECT htr_admitdate, htr_sumtreat, htr_outpatient FROM ")
        _T("hms_treatment_record WHERE htr_docno = %ld AND htr_idx = %ld"),
        pMF->m_nDocumentNo, pMF->m_nRefIndex);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {

        rs.GetValue(_T("htr_outpatient"), m_szOutPatient);
        rs.GetValue(_T("htr_sumtreat"), m_nTotalDay);
    }
    if (m_szOutPatient == _T("Y"))
    {
        /*szSQL.Format(_T("SELECT min(htr_admitdate) AS admitdate  FROM
        hms_treatment_record where htr_docno=%ld and htr_status in('I','T') and
        htr_treattime=0 "), pMF->m_nDocumentNo); rs.ExecSQL(szSQL);
        rs.GetValue(_T("admitdate"), m_szAdmitDate);*/
    }

    szSQL.Format(_T("SELECT CEIL(TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS') - ")
                 _T("TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS')) FROM dual "),
                 m_szEndDate, m_szAdmitDate);
    rs.ExecSQL(szSQL);
    int nDay = rs.GetIntValue();
    m_nSumTreat = nDay;
    if (m_nTotalDay > nDay)
        m_nTotalDay = nDay;

    int nTreatTime = pMF->GetTreatTime();
    //_tprintf(_T("\nTreattime: %d\n"), nTreatTime);
    if (nTreatTime > 0)
    {
        szSQL.Format(
            _T("WITH tbl as (")
            _T("	SELECT htr_admitdate as admit_date, htr_dischargedate as ")
            _T("discharge_date, ")
            _T("	last_value(htr_status) over (order by null) as status")
            _T("	FROM hms_treatment_record")
            _T("	WHERE htr_docno = %ld AND htr_treattime = %d ")
            _T("	ORDER BY htr_treattime, htr_idx) ")
            _T(" SELECT min(admit_date) as admit_date, ")
            _T(" case when status = 'T' then max(discharge_date) else ")
            _T("trunc(current_timestamp) + interval '1' day + interval '6' ")
            _T("hour end as discharge_date,")
            _T(" extract(day from max(discharge_date) - min(admit_date)) + 1 ")
            _T("as treatment_days ")
            _T(" FROM tbl ")
            _T(" GROUP BY status"),
            pMF->m_nDocumentNo, nTreatTime);
        //_tprintf(_T("\nszSQL: %s\n"), szSQL);
        rs.ExecSQL(szSQL);
        rs.GetValue(_T("admit_date"), m_szAdmitDate);
        rs.GetValue(_T("discharge_date"), m_szEndDate);
        rs.GetValue(_T("treatment_days"), m_nTotalDay);
    }
    SetMode(VM_VIEW);
}
void CHMSDischargeDialog::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_hms_clinical_recordTbl.SetValue(_T("hcr_updatedby"),
                                      pMF->GetCurrentUser());
    m_hms_clinical_recordTbl.SetValue(_T("hcr_updateddate"),
                                      pMF->GetSysDateTime());
    m_hms_clinical_recordTbl.SetValue(_T("hcr_conclusion"), m_szConclusion);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_mainicd"), m_szICD10Key);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_maindisease"), m_szMainDisease);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_result"), m_szResultKey);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_reason"), m_szAdmissionStatus);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_dischargedate"), m_szEndDate);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_dischargedept"), pMF->m_szDept);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_reldisease"),
                                      m_szRelationDisease);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_gmethod"), m_szTreatMethod);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_gsuggestion2"), m_szYkiendenghi);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_refidx"), pMF->m_nRefIndex);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_discharge"), _T("Y"));
    m_hms_clinical_recordTbl.SetValue(_T("hcr_sumtreat"), m_nTotalDay);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_comment"), m_szNote);
    m_hms_clinical_recordTbl.SetValue(_T("hcr_admitdate"), m_szAdmitDate);

    m_hms_treatmentTbl.SetValue(_T("htr_doctor"), pMF->m_szDoctor);
    m_hms_treatmentTbl.SetValue(_T("htr_status"), _T("T"));
    m_hms_treatmentTbl.SetValue(_T("htr_conclusion"), m_szConclusion);
    m_hms_treatmentTbl.SetValue(_T("htr_icd"), m_szICD10Key);
    m_hms_treatmentTbl.SetValue(_T("htr_diagnostic"), m_szMainDisease);
    m_hms_treatmentTbl.SetValue(_T("htr_reldisease"), m_szRelationDisease);
    m_hms_treatmentTbl.SetValue(_T("htr_suggestion"), _T("D"));
    m_hms_treatmentTbl.SetValue(_T("htr_result"), m_szResultKey);
    m_hms_treatmentTbl.SetValue(_T("htr_enddept"), pMF->m_szDept);
    m_hms_treatmentTbl.SetValue(_T("htr_enddate"), m_szEndDate);
    m_hms_treatmentTbl.SetValue(_T("hcr_gsuggestion2"), m_szYkiendenghi);

    if (GetMode() == VM_VIEW)
    {
        m_parser.PushRowData(&m_hms_clinical_recordTbl);
    }
    else if (GetMode() == VM_EDIT)
    {
        m_parser.PushRowData(&m_hms_clinical_recordTbl, true);
    }
}
void CHMSDischargeDialog::SetDefaultValues()
{
    m_szNote.Empty();
    m_szAdmitDate.Empty();
    m_szEndDate.Empty();
    m_szResultKey.Empty();
    m_nTotalDay = 1;
    m_szICD10Key.Empty();
    m_szMainDisease.Empty();
    m_szRelationDisease.Empty();
    m_szTreatMethod.Empty();
    m_szAdmissionStatus.Empty();
    m_szConclusion.Empty();
    m_szYkiendenghi.Empty();
}
int CHMSDischargeDialog::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiDialog::SetMode(nMode);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    switch (nMode)
    {
    case VM_ADD:
        EnableControls(TRUE);
        EnableButtons(TRUE, 0, -1);
        SetDefaultValues();
        break;
    case VM_EDIT:
        EnableControls(TRUE);
        EnableButtons(TRUE, 1, 2, -1);
        m_wndEndDate.SetFocus();

        if (m_szEndDate.IsEmpty())
            m_szEndDate = pMF->GetSysDateTime();

        if (m_nTotalDay <= 0)
            m_nTotalDay =
                CompareDate(m_szEndDate.Left(10), m_szAdmitDate.Left(10));
        if (pMF->GetCurrentUser() == _T("admin"))
        {
            m_wndEndDate.EnableWindow(false);
            m_wndResult.EnableWindow(false);
            m_wndICD10.EnableWindow(false);
        }

        break;
    case VM_VIEW:
        EnableControls(FALSE);
        EnableButtons(TRUE, 0, 3, -1);
        break;
    case VM_NONE:
        EnableControls(FALSE);
        EnableButtons(TRUE, 0, 6, -1);
        SetDefaultValues();
        break;
    };
    UpdateData(FALSE);
    if (m_szOutPatient == _T("Y"))
    {
        m_wndTotalDay.SetCheckValue(TRUE);
        m_wndTotalDay.EnableWindow(TRUE);
    }
    else
    {
        m_wndTotalDay.SetReadOnly(TRUE);
        m_wndTotalDay.SetCheckValue(FALSE);
        m_wndTotalDay.EnableWindow(FALSE);
    }
    m_wndAdmitDate.EnableWindow(FALSE);
    return nOldMode;
}
/*void CHMSDischargeDialog::OnAdmitDateChange(){

} */
/*void CHMSDischargeDialog::OnAdmitDateSetfocus(){

} */
/*void CHMSDischargeDialog::OnAdmitDateKillfocus(){

} */
int CHMSDischargeDialog::OnAdmitDateCheckValue() { return 0; }
/*void CHMSDischargeDialog::OnEndDateChange(){

} */
/*void CHMSDischargeDialog::OnEndDateSetfocus(){

} */
/*void CHMSDischargeDialog::OnEndDateKillfocus(){

} */
int CHMSDischargeDialog::OnEndDateCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;

    CString tmpDate = m_szEndDate.Left(10);
    tmpDate.Trim();

    if (tmpDate.IsEmpty())
    {
        CDate dte;
        dte.ParseDate(pMF->GetSysDate());
        dte += 1;
        tmpDate.Format(_T("%s"), dte.GetDate());
        m_szEndDate.Format(_T("%s 06:00"), tmpDate);
    }

    szSQL.Format(_T("SELECT CEIL(TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS') - ")
                 _T("TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS')) FROM dual "),
                 m_szEndDate, m_szAdmitDate);
    rs.ExecSQL(szSQL);
    int nDay = rs.GetIntValue();
    m_nSumTreat = nDay;
    if (nDay < 0)
        return -1;
    if (m_nTotalDay <= 0)
        m_nTotalDay = nDay;

    UpdateData(false);
    return 0;
}
void CHMSDischargeDialog::OnResultSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSDischargeDialog::OnResultSelendok() {}
/*void CHMSDischargeDialog::OnResultSetfocus(){

}*/
/*void CHMSDischargeDialog::OnResultKillfocus(){

}*/
long CHMSDischargeDialog::OnResultLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return pMF->LoadSelectionList(&m_wndResult, _T("hms_result"),
                                  m_szResultKey);
    /*
        CRecord rs(&pMF->m_db);
        CString szSQL, szWhere;
        if(m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()){
        };
        m_wndResult.DeleteAllItems();
        int nCount = 0;
        nCount = rs.ExecSQL(szSQL);
        while(!rs.IsEOF()){
            m_wndResult.AddItems(
                rs.GetValue(_T("id")),
                rs.GetValue(_T("description")), NULL);
            rs.MoveNext();
        }
        return nCount;
    */
    return 0;
}
/*void CHMSDischargeDialog::OnResultAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSDischargeDialog::OnTotalDayChange(){

} */
/*void CHMSDischargeDialog::OnTotalDaySetfocus(){

} */
/*void CHMSDischargeDialog::OnTotalDayKillfocus(){

} */
int CHMSDischargeDialog::OnTotalDayCheckValue()
{
    if (m_nTotalDay < m_nSumTreat - 2 || m_nTotalDay > m_nSumTreat + 2)
        return -1;

    if (m_nTotalDay <= 0)
        return -1;
    return 0;
}
void CHMSDischargeDialog::OnICD10SelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSDischargeDialog::OnICD10Selendok()
{
    UpdateData(true);
    m_szMainDisease = m_wndICD10.GetCurrent(1);
    UpdateData(false);
}
/*void CHMSDischargeDialog::OnICD10Setfocus(){

}*/
/*void CHMSDischargeDialog::OnICD10Killfocus(){

}*/
long CHMSDischargeDialog::OnICD10LoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return pMF->LoadICD(&m_wndICD10, m_szICD10Key);

    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty())
    {
        szWhere.Format(_T("hi_icd='%s' "), m_szICD10Key);
    };
    szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd  %s  ")
                 _T("ORDER BY hi_icd "),
                 szWhere);

    m_wndICD10.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndICD10.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                            NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSDischargeDialog::OnICD10AddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSDischargeDialog::OnMainDiseaseChange(){

} */
/*void CHMSDischargeDialog::OnMainDiseaseSetfocus(){

} */
/*void CHMSDischargeDialog::OnMainDiseaseKillfocus(){

} */
int CHMSDischargeDialog::OnMainDiseaseCheckValue()
{
    UpdateData();
    if (m_szMainDisease.Trim().IsEmpty())
    {
        return -1;
    }
    return 0;
}
/*void CHMSDischargeDialog::OnRelationDiseaseChange(){

} */
/*void CHMSDischargeDialog::OnRelationDiseaseSetfocus(){

} */
/*void CHMSDischargeDialog::OnRelationDiseaseKillfocus(){

} */
int CHMSDischargeDialog::OnRelationDiseaseCheckValue() { return 0; }

#include "HMSFastDiagnosticDialog.h"
void CHMSDischargeDialog::OnRelationDiseaseSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(TRUE);
    /*CHMSFastDiagnosticDialog dlg(this);
    dlg.m_nDocumentNo = pMF->m_nDocumentNo;
    dlg.m_nPatientNo = pMF->m_nPatientNo;

    if(dlg.DoModal() == IDOK)
    {
        m_szRelationDisease = dlg.m_szConclusion;
        UpdateData(FALSE);
    }*/

    CHMSCoDisease dlg(this);
    dlg.m_nPatientNo = pMF->m_nPatientNo;
    dlg.m_nDocumentNo = pMF->m_nDocumentNo;

    if (dlg.DoModal() == IDOK)
    {
        m_szRelationDisease = dlg.m_szDisease;
        UpdateData(FALSE);
    }

    return;
}

/*void CHMSDischargeDialog::OnTreatMethodChange(){

} */
/*void CHMSDischargeDialog::OnTreatMethodSetfocus(){

} */
/*void CHMSDischargeDialog::OnTreatMethodKillfocus(){

} */
int CHMSDischargeDialog::OnTreatMethodCheckValue() { return 0; }
/*void CHMSDischargeDialog::OnAdmissionStatusChange(){

} */
/*void CHMSDischargeDialog::OnAdmissionStatusSetfocus(){

} */
/*void CHMSDischargeDialog::OnAdmissionStatusKillfocus(){

} */
int CHMSDischargeDialog::OnAdmissionStatusCheckValue() { return 0; }
/*void CHMSDischargeDialog::OnConclusionChange(){

} */
/*void CHMSDischargeDialog::OnConclusionSetfocus(){

} */
/*void CHMSDischargeDialog::OnConclusionKillfocus(){

} */
int CHMSDischargeDialog::OnConclusionCheckValue() { return 0; }
/*void CHMSDischargeDialog::OnYKienDenGhiChange(){

} */
/*void CHMSDischargeDialog::OnYKienDenGhiSetfocus(){

} */
/*void CHMSDischargeDialog::OnYKienDenGhiKillfocus(){

} */
int CHMSDischargeDialog::OnYKienDenGhiCheckValue() { return 0; }

void CHMSDischargeDialog::OnUpdateSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnEditHMSDischargeDialog();
}
void CHMSDischargeDialog::OnSaveSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnSaveHMSDischargeDialog();
}
void CHMSDischargeDialog::OnCancelSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnCancelHMSDischargeDialog();
}
void CHMSDischargeDialog::OnPrintSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    static CReport rpt;
    CGuiMenu menu(this);
    menu.CreatePopupMenu();
    menu.AppendMenu(MF_BYPOSITION, 1, _T("In phiếu ra viện (1 tờ)"));
    menu.AppendMenu(MF_BYPOSITION, 2, _T("In phiếu ra viện (2 tờ)"));

    CString szFileTitle = _T("HMS_DISCHARGESHEET1");
    CString szRPTName, szFilePath;
    CPoint pt;
    CRect rect;
    m_wndPrint.GetWindowRect(&rect);
    pt.x = rect.left;
    pt.y = rect.top - 2;
    int ret = menu.TrackPopupMenu(TPM_NONOTIFY | TPM_RETURNCMD |
                                      TPM_BOTTOMALIGN | TPM_RIGHTBUTTON,
                                  pt.x, pt.y, this);
    switch (ret)
    {
    case 1:

        szFileTitle += _T(".RPT");
        szFilePath.Format(_T("Reports\\HMS\\%s"), szFileTitle);

        if (!rpt.Init(szFilePath))
        {
            _debug(L"Load report: %s", szFilePath);
            return;
        }

        pMF->OnPostGenDocX(&rpt, _T("giayravien"), pMF->m_nDocumentNo,
                           pMF->m_nRefIndex, szFileTitle, _T(""), _T(""));

        break;
    case 2:
        if (m_szResultKey == _T("5") || m_szResultKey == _T("6"))
        {
            //		pMF->PrintPatientDeath(pMF->m_nPatientNo);
        }
        else
        {
            pMF->PrintDischargeSheet(pMF->m_nDocumentNo, pMF->m_nRefIndex);
        }
        break;
    }
}
int CHMSDischargeDialog::OnAddHMSDischargeDialog()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CHMSDischargeDialog::OnEditHMSDischargeDialog()
{

    //	if(GetMode() != VM_VIEW)
    //		return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;

    // if(!pMF->m_wndPatientDocument.OnCheckTerminateDocument(pMF->m_nDocumentNo))
    //	return -1;

    // if(pMF->IsPaidFees()){
    //	ShowMessageBox(_T("Patients paid hospital fees. Do not allow
    //reupdate.")); 	return -1;
    // }

    /*szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE
    htr_docno=%ld AND htr_idx>%d AND htr_status in('I','T') "),
    pMF->m_nDocumentNo, pMF->m_nRefIndex); rs.ExecSQL(szSQL);
    if(rs.GetIntValue() > 0)
    {
        ShowMessageBox(_T("This patient has been treated by other department.
    Can not update it."), MB_OK); return -1;
    }*/

    szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE ")
                 _T("htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "),
                 pMF->m_nDocumentNo, pMF->m_szDept);
    rs.ExecSQL(szSQL);

    if (rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
    {
        ShowMessageBox(_T("This patient has been treated by other department. ")
                       _T("Can not update it."),
                       MB_OK);
        return -1;
    }

    CString szAcceptedFee, szStatus;

    szSQL.Format(_T("SELECT htr_status, htrf_acceptedfee FROM ")
                 _T("hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d"),
                 pMF->m_nDocumentNo, pMF->m_nRefIndex);
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("htr_status"), szStatus);

    rs.GetValue(_T("htrf_acceptedfee"), szAcceptedFee);

    // if((szAcceptedFee == _T("A") || szAcceptedFee == _T("P") || szAcceptedFee
    // == _T("Y")) && pMF->m_UserInfo.su_groupid != _T("A") &&
    // !pMF->CheckPermission(_T("admin.TM.100.1")))
    if ((szAcceptedFee == _T("A") || szAcceptedFee == _T("P") ||
         szAcceptedFee == _T("Y")))
    {
        if (pMF->m_UserInfo.su_groupid == _T("A") &&
            pMF->CheckPermission(_T("admin.TM.100.1")))
        {
        }
        else
        {
            ShowMessageBox(
                _T("\x42\x1EC7nh nh\xE2n \x111\xE3 \x111\x1B0\x1EE3\x63 ")
                _T("\x78\xE1\x63 nh\x1EADn \x63hi ph\xED ho\x1EB7\x63 ")
                _T("th\x61nh to\xE1n vi\x1EC7n ph\xED."));
            return -1;
        }
    }

    // 16/07/2019 hayhv: them chuc nang kiem tra khoa cuoi cung moi duoc ket
    // thuc ra vien
    szSQL.Format(_T("SELECT max(htr_idx) as max_idx FROM hms_treatment_record ")
                 _T("WHERE htr_docno=%ld and htr_status='T' "),
                 pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);
    int nMaxIdx;
    rs.GetValue(_T("max_idx"), nMaxIdx);

    if (nMaxIdx > pMF->m_nRefIndex)
    {
        ShowMessageBox(_T("Không phải điều trị cuối cùng.Không cho phép kết ")
                       _T("thúc hồ sơ ra viện"));
        return -1;
    }

    SetMode(VM_EDIT);
    return 0;
}
int CHMSDischargeDialog::OnDeleteHMSDischargeDialog()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return -1;
    szSQL.Format(_T("DELETE FROM  WHERE  AND"));
    int ret = pMF->ExecSQL(szSQL);
    if (ret >= 0)
    {
        SetMode(VM_NONE);
        OnCancelHMSDischargeDialog();
    }
    return 0;
}
int CHMSDischargeDialog::OnSaveHMSDischargeDialog()
{
    if (GetMode() != VM_EDIT)
        return -1;

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szStatus, szWhere, szExceptUpdate;

    szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE ")
                 _T("htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "),
                 pMF->m_nDocumentNo, pMF->m_szDept);
    rs.ExecSQL(szSQL);

    if (rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
    {
        ShowMessageBox(_T("This patient has been treated by other department. ")
                       _T("Can not update it."),
                       MB_OK);
        return -1;
    }
    if (!IsValidateData())
        return -1;
    m_szMainDisease.Trim();
    m_szRelationDisease.Trim();
    m_szConclusion.Trim();
    m_szTreatMethod.Trim();
    m_szAdmissionStatus.Trim();

    // Cap nhat lai ho so dieu tri
    // Cap nhat lai ho so dieu tri cua khoa
    szStatus = _T("T");
    if (pMF->m_szOutpatient == _T("Y"))
    {
        szSQL.Format(_T("SELECT max(htr_idx) FROM hms_treatment_record WHERE ")
                     _T("htr_docno=%ld "),
                     pMF->m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (pMF->m_nRefIndex != rs.GetIntValue())
            szStatus = _T("I");
    }
    /*szSQL.Format(_T("UPDATE hms_clinical_record ") \
        _T(" SET hcr_dischargedate= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'),
       hcr_discharge='Y', ") \
        _T(" hcr_dischargedept='%s', ") \
        _T(" hcr_reason='%s', ") \
        _T(" hcr_result='%s', ") \
        _T(" hcr_suggestion='T', ") \
        _T(" hcr_conclusion='%s', ") \
        _T(" hcr_mainicd='%s', ") \
        _T(" hcr_maindisease='%s', ") \
        _T(" hcr_gmethod='%s', ") \
        _T(" hcr_gsuggestion2='%s', ") \
        _T(" hcr_refidx=%d, ") \
        _T(" hcr_reldisease='%s' ")
        _T(" WHERE hcr_docno=%ld "),
            m_szEndDate,
            pMF->m_szDept,
            m_szAdmissionStatus,
            m_szResultKey,
            m_szConclusion,
            m_szICD10Key,
            m_szMainDisease,
            m_szTreatMethod,
            m_szYkiendenghi,
            pMF->m_nRefIndex,
            m_szRelationDisease,
            pMF->m_nDocumentNo);*/

    m_hms_clinical_recordTbl.SetValue(_T("hcr_refidx"), pMF->m_nRefIndex);

    szWhere.Format(_T(" WHERE hcr_docno = %ld "), pMF->m_nDocumentNo);
    szExceptUpdate = _T("hcr_docno");
    // if (pMF->IsOnceRollback(pMF->m_nDocumentNo))
    //	szExceptUpdate += _T(", hcr_dischargedate");
    szSQL = m_hms_clinical_recordTbl.GetUpdateSQL(szExceptUpdate);
    szSQL += szWhere;

    //_fmsg(_T("%s"), szSQL);
    szSQL.Format(_T("hms_clinical_record_update(%ld, %d, q'$%s$')"),
                 pMF->m_nDocumentNo, pMF->m_nTreatTime,
                 pMF->DbfMap2Json(&m_hms_clinical_recordTbl));
    _fmsg(_T("%s"), szSQL);
    // int ret = pMF->ExecSQL(szSQL);
    int ret = str2int(pMF->ExecDML(szSQL));
    if (ret > 0)
    {
        // if (pMF->IsOnceRollback(pMF->m_nDocumentNo))
        //	szSQL.Format(_T("UPDATE hms_treatment_record ") \
		//		_T(" SET htr_updateddate=systimestamp,   ") \
		//		_T(" htr_mainicd='%s', ") \
		//		_T(" htr_maindisease='%s', ") \
		//		_T(" htr_suggestion='T', ") \
		//		_T(" htr_sumtreat= %d ") \
		//		_T(" WHERE htr_docno=%ld AND htr_idx=%d AND htr_status
        //in('I','T') "), 			m_szICD10Key, 			m_szMainDisease, 			m_nTotalDay,
        //			pMF->m_nDocumentNo,
        //			pMF->m_nRefIndex);
        // else
        szSQL.Format(
            _T("UPDATE hms_treatment_record ")
            _T(" SET htr_updateddate=systimestamp,  ")
            _T(" htr_dischargedate= to_timestamp('%s', 'yyyy/mm/dd ")
            _T("hh24:mi:ss'), ")
            _T(" htr_mainicd='%s', ") //_T(" htr_maindisease='%s', ") \//
            _T(" htr_suggestion='T', ")
            _T(" htr_sumtreat= %d ")
            _T(" WHERE htr_docno=%ld AND htr_idx=%d AND htr_status ")
            _T("in('I','T') "),
            m_szEndDate, m_szICD10Key,
            // m_szMainDisease,//
            m_nTotalDay, pMF->m_nDocumentNo, pMF->m_nRefIndex);
        pMF->ExecSQL(szSQL);
        //_msg(_T("%s"));
        szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld ")
                     _T("AND htr_status='A' "),
                     pMF->m_nDocumentNo);
        pMF->ExecSQL(szSQL);

        // Vi benh nhan ra vien nen ko de record luu cac thong tin chuyen vien.
        szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"),
                     pMF->m_nDocumentNo);
        pMF->ExecSQL(szSQL);

        SetMode(VM_VIEW);
        CString szEvent, szDescr, szRowChange = m_parser.GetRowChange();
        if (!szRowChange.IsEmpty())
        {
            if (szRowChange.GetLength() >= 2000)
            {
                CStringToken tok(szRowChange, _T("|"));
                CString tmpStr;
                szEvent.Format(_T("hms_clinical_record_edit"));
                for (int i = 0; i < tok.GetSize(); i++)
                {
                    tok.GetAt(i, tmpStr);
                    szDescr.Format(_T("[hcr_docno=%ld|hcr_treattime=%d] %s"),
                                   pMF->m_nDocumentNo, pMF->m_nTreatTime,
                                   tmpStr);
                    pMF->SystemLog(szEvent, szDescr);
                }
            }
            else
            {
                szEvent.Format(_T("hms_clinical_record_edit"));
                szDescr.Format(_T("[hcr_docno=%ld|hcr_treattime=%d] %s"),
                               pMF->m_nDocumentNo, pMF->m_nTreatTime,
                               szRowChange);
                pMF->SystemLog(szEvent, szDescr);
            }
        }
        OnUpdateDeathInformation();

        //		pMF->m_wndPatientDocument.LoadData(pMF->m_nPatientNo,
        //pMF->m_nDocumentNo, pMF->m_nRefIndex);
    }

    return ret;
}
int CHMSDischargeDialog::OnCancelHMSDischargeDialog()
{
    if (GetMode() == VM_EDIT)
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
int CHMSDischargeDialog::OnHMSDischargeDialogListLoadData() { return 0; }

int CHMSDischargeDialog::OnUpdateDeathInformation()
{
    if (m_szResultKey == _T("5") || m_szResultKey == _T("6"))
    {
        CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
        CHMSPatientDeathDialog dlg(this);
        dlg.m_nPatientNo = pMF->m_wndPatientDocument.m_nPatientNo;
        dlg.m_szDieState = m_szResultKey;
        dlg.DoModal();
    }
    return 0;
}