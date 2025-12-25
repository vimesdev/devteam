#include "HMSExamine.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSTerminateDocumentDialog.h"

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
/*static void _OnDiseasePrehistoryChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDiseasePrehistoryChange();
} */
/*static void _OnDiseasePrehistorySetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDiseasePrehistorySetfocus();} */ 
/*static void _OnDiseasePrehistoryKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnDiseasePrehistoryKillfocus();
} */
static int _OnDiseasePrehistoryCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnDiseasePrehistoryCheckValue();
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
/*static void _OnPrediagnoseChangeFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPrediagnoseChange();
} */
/*static void _OnPrediagnoseSetfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPrediagnoseSetfocus();} */ 
/*static void _OnPrediagnoseKillfocusFnc(CWnd *pWnd){
	((CHMSExamine *)pWnd)->OnPrediagnoseKillfocus();
} */
static int _OnPrediagnoseCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnPrediagnoseCheckValue();
} 
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
static int _OnCertificateofphysicaleyeclinicFnc(CWnd *pWnd){
	return ((CHMSExamine *)pWnd)->OnCertificateofphysicaleyeclinic();
}

CHMSExamine::CHMSExamine(){

	m_nDlgWidth = 612;
	m_nDlgHeight = 540;
	SetDefaultValues();
}
CHMSExamine::~CHMSExamine(){
}
void CHMSExamine::OnCreateComponents(){
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 5, 595, 545);
	m_wndDateLabel.Create(this, _T("Treatment Date"), 10, 30, 130, 55);
	m_wndDate.Create(this,135, 30, 255, 55); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 260, 30, 340, 55);
	m_wndDoctor.Create(this,345, 30, 594, 55); 
	m_wndPathologyProcessLabel.Create(this, _T("Pathology Process"), 10, 60, 130, 85);
	m_wndPathologyProcess.Create(this,135, 60, 590, 110, TRUE, FALSE, TRUE); 
	m_wndDiseasePrehistoryLabel.Create(this, _T("Disease Prehistory"), 10, 115, 130, 140);
	m_wndDiseasePrehistory.Create(this,135, 115, 590, 165, TRUE, FALSE, TRUE); 
	m_wndExamineLabel.Create(this, _T("Examine_"), 10, 170, 130, 195);
	m_wndExamine.Create(this,135, 170, 590, 370, TRUE, FALSE, TRUE); 
	m_wndPulseLabel.Create(this, _T("Pulse"), 10, 375, 130, 400);
	m_wndPulse.Create(this,135, 375, 185, 400); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 190, 375, 290, 400);
	m_wndTemperature.Create(this,295, 375, 345, 400); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 350, 375, 450, 400);
	m_wndBloodPressure.Create(this,455, 375, 505, 400); 
	m_wndBloodPressurex.Create(this,510, 375, 560, 400); 
	m_wndBreathingIntervalLabel.Create(this, _T("Breathing Interval"), 10, 405, 130, 430);
	m_wndBreathingInterval.Create(this,135, 405, 185, 430); 
	m_wndWeightLabel.Create(this, _T("Weight"), 190, 405, 290, 430);
	m_wndWeight.Create(this,295, 405, 345, 430); 
	m_wndHeightLabel.Create(this, _T("Height"), 350, 405, 450, 430);
	m_wndHeight.Create(this,455, 405, 505, 430); 
	m_wndPrediagnose.Create(this,135, 435, 590, 460); 
	m_wndPrediagnoseLabel.Create(this, _T("Pre-Diagnose"), 10, 435, 130, 460);
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 465, 130, 490);
	m_wndConclusion.Create(this,135, 465, 590, 540, TRUE, FALSE, TRUE); 
	m_wndPrehistory.Create(this, _T("Prehistory"), 5, 550, 85, 575);
	m_wndUpdate.Create(this, _T("&Update"), 260, 550, 340, 575);
	m_wndTerminate.Create(this, _T("Terminate"), 345, 550, 425, 575);
	m_wndSave.Create(this, _T("&Save"), 430, 550, 510, 575);
	m_wndCancel.Create(this, _T("&Cancel"), 515, 550, 595, 575);
}
void CHMSExamine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndDate.SetMax(CDate(pMF->GetSysDateTime()));
//	m_wndDate.SetCheckValue(true);
	m_wndDate.SetReadOnly(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(65);
	m_wndPathologyProcess.SetLimitText(512);
	m_wndPathologyProcess.SetCheckValue(true);
	m_wndDiseasePrehistory.SetLimitText(128);
	m_wndDiseasePrehistory.SetCheckValue(true);
	m_wndExamine.SetLimitText(512);
	m_wndExamine.SetCheckValue(true);
	m_wndPulse.SetLimitText(5);
	m_wndPulse.SetCurrencyFormat(true);
//	m_wndPulse.SetCheckValue(true);
	m_wndTemperature.SetLimitText(5);
	m_wndTemperature.SetCurrencyFormat(true);
//	m_wndTemperature.SetCheckValue(true);
	m_wndBloodPressure.SetLimitText(3);
	m_wndBloodPressurex.SetLimitText(3);

//	m_wndBloodPressure.SetCheckValue(true);
	m_wndBreathingInterval.SetLimitText(5);
	m_wndBreathingInterval.SetCurrencyFormat(true);
	m_wndWeight.SetLimitText(5);
	m_wndWeight.SetCurrencyFormat(true);
//	m_wndWeight.SetCheckValue(true);
	m_wndHeight.SetLimitText(5);
	m_wndHeight.SetCurrencyFormat(true);
//	m_wndHeight.SetCheckValue(true);
	m_wndPrediagnose.SetLimitText(81);
	m_wndPrediagnose.SetCheckValue(true);
	m_wndConclusion.SetLimitText(254);
//	m_wndConclusion.SetCheckValue(true);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_examTbl.SetTableName(_T("hms_exam"));
	m_hms_examTbl.AddField(_T("he_updatedby"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_updateddate"), dfDateTime); 
	m_hms_examTbl.AddField(_T("he_status"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_doctor"), dfText, 15); 
	//m_hms_examTbl.AddField(_T("he_reason"), dfText, 81); 
	//m_hms_examTbl.AddField(_T("he_pathology"), dfText, 512); 
	//m_hms_examTbl.AddField(_T("he_ownerhistory"), dfText, 254); 
	//m_hms_examTbl.AddField(_T("he_familyhistory"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_medical"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_predisease"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_examine"), dfText, 512); 
	//m_hms_examTbl.AddField(_T("he_parts"), dfText, 512); 
	m_hms_examTbl.AddField(_T("he_pulse"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_temperature"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_bloodpressure"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_bloodpressurex"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_breathinterval"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_weight"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_height"), dfFloat); 
	m_hms_examTbl.AddField(_T("he_prediagnose"), dfText, 128); 
	m_hms_examTbl.AddField(_T("he_conclusion"), dfText, 254); 

	SetMode(VM_NONE);
}
void CHMSExamine::OnSetWindowEvents(){
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
	//m_wndDiseasePrehistory.SetEvent(WE_CHANGE, _OnDiseasePrehistoryChangeFnc);
	//m_wndDiseasePrehistory.SetEvent(WE_SETFOCUS, _OnDiseasePrehistorySetfocusFnc);
	//m_wndDiseasePrehistory.SetEvent(WE_KILLFOCUS, _OnDiseasePrehistoryKillfocusFnc);
	m_wndDiseasePrehistory.SetEvent(WE_CHECKVALUE, _OnDiseasePrehistoryCheckValueFnc);
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
	//m_wndPrediagnose.SetEvent(WE_CHANGE, _OnPrediagnoseChangeFnc);
	//m_wndPrediagnose.SetEvent(WE_SETFOCUS, _OnPrediagnoseSetfocusFnc);
	//m_wndPrediagnose.SetEvent(WE_KILLFOCUS, _OnPrediagnoseKillfocusFnc);
	m_wndPrediagnose.SetEvent(WE_CHECKVALUE, _OnPrediagnoseCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndPrehistory.SetEvent(WE_CLICK, _OnPrehistorySelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	AddEvent(1, _T("Certificate Of Physical Eye Clinice"), _OnCertificateofphysicaleyeclinicFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExamineFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExamineFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExamineFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExamineFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExamineFnc, 0, 'T', VK_CONTROL);
	*/

}
void CHMSExamine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndPathologyProcess.GetDlgCtrlID(), m_szPathologyProcess);
	DDX_Text(pDX, m_wndDiseasePrehistory.GetDlgCtrlID(), m_szDiseasePrehistory);
	DDX_Text(pDX, m_wndExamine.GetDlgCtrlID(), m_szExamine);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_nBloodPressure);
	DDX_Text(pDX, m_wndBloodPressurex.GetDlgCtrlID(), m_nBloodPressurex);
	DDX_Text(pDX, m_wndBreathingInterval.GetDlgCtrlID(), m_nBreathingInterval);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_nWeight);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);
	DDX_Text(pDX, m_wndPrediagnose.GetDlgCtrlID(), m_szPrediagnose);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CHMSExamine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	OnCancelHMSExamine();
	szSQL.Format(_T("SELECT * FROM hms_exam WHERE he_docno=%ld AND he_bedid=%d"), pMF->m_nDocumentNo, m_nReceptIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){

	//	rs.GetValue(_T("he_patientno"), m_nPatientNo); 
		rs.GetValue(_T("he_deptid"), m_szDept); 
		rs.GetValue(_T("he_roomid"), m_nRoomID); 
		rs.GetValue(_T("he_receptno"), m_nReceptNo); 
		rs.GetValue(_T("he_bedid"), m_nReceptIndex); 
		rs.GetValue(_T("he_status"), m_szStatus); 
		rs.GetValue(_T("he_AdmitDate"), m_szDate); 
		rs.GetValue(_T("he_doctor"), m_szDoctorKey); 
		
	//	rs.GetValue(_T("he_reason"), _T("")); 
	//	rs.GetValue(_T("he_pathology"), m_szPathologyProcess); 
	//	rs.GetValue(_T("he_ownerhistory"), m_szDiseasePrehistory); 
		rs.GetValue(_T("he_medical"), m_szPathologyProcess); 
		rs.GetValue(_T("he_predisease"), m_szDiseasePrehistory); 
	//	rs.GetValue(_T("he_familyhistory"), _T("")); 
		rs.GetValue(_T("he_examine"), m_szExamine); 
	//	rs.GetValue(_T("he_parts"), _T("")); 
		rs.GetValue(_T("he_pulse"), m_nPulse); 
		rs.GetValue(_T("he_temperature"), m_nTemperature); 
		rs.GetValue(_T("he_bloodpressure"), m_nBloodPressure); 
		rs.GetValue(_T("he_bloodpressurex"), m_nBloodPressurex); 
		rs.GetValue(_T("he_breathinterval"), m_nBreathingInterval); 
		rs.GetValue(_T("he_weight"), m_nWeight); 
		rs.GetValue(_T("he_height"), m_nHeight); 
		rs.GetValue(_T("he_prediagnose"), m_szPrediagnose); 
		rs.GetValue(_T("he_conclusion"), m_szConclusion); 
		SetMode(VM_VIEW);
		UpdateData(false);
		
		pMF->m_szDept = m_szDept;
		pMF->m_szStatus = m_szStatus;
		if(pMF->m_szDoctor.IsEmpty())
			pMF->m_szDoctor = m_szDoctorKey;

		pMF->m_szEntryDate = m_szDate;
		if(pMF->m_nRoomID != m_nRoomID){
			m_wndUpdate.EnableWindow(false);
			m_wndTerminate.EnableWindow(false);
		}
		
	}

}
void CHMSExamine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD)
	{
		if(m_szStatus == _T("O"))
			m_szStatus = _T("P");
	}
	else{
		m_szStatus = _T("T");
	}
	m_hms_examTbl.SetValue(_T("he_updatedby"), pMF->GetCurrentUser()); 
	m_hms_examTbl.SetValue(_T("he_updateddate"), pMF->GetSysDateTime()); 
	m_hms_examTbl.SetValue(_T("he_status"), m_szStatus); 
	m_hms_examTbl.SetValue(_T("he_AdmitDate"), m_szDate); 
	m_hms_examTbl.SetValue(_T("he_doctor"), m_szDoctorKey); 
//	m_hms_examTbl.SetValue(_T("he_pathology"), m_szPathologyProcess); 
//	m_hms_examTbl.SetValue(_T("he_ownerhistory"), m_szDiseasePrehistory); 
	m_hms_examTbl.SetValue(_T("he_medical"), m_szPathologyProcess); 
	m_hms_examTbl.SetValue(_T("he_predisease"), m_szDiseasePrehistory); 
	m_hms_examTbl.SetValue(_T("he_examine"), m_szExamine); 
	m_hms_examTbl.SetValue(_T("he_pulse"), m_nPulse); 
	m_hms_examTbl.SetValue(_T("he_temperature"), m_nTemperature); 
	m_hms_examTbl.SetValue(_T("he_bloodpressure"), m_nBloodPressure); 
	m_hms_examTbl.SetValue(_T("he_bloodpressurex"), m_nBloodPressurex);
	m_hms_examTbl.SetValue(_T("he_breathinterval"), m_nBreathingInterval);
	m_hms_examTbl.SetValue(_T("he_weight"), m_nWeight); 
	m_hms_examTbl.SetValue(_T("he_height"), m_nHeight); 
	m_hms_examTbl.SetValue(_T("he_prediagnose"), m_szPrediagnose); 
	m_hms_examTbl.SetValue(_T("he_conclusion"), m_szConclusion); 

}
void CHMSExamine::SetDefaultValues(){

	m_szDate.Empty();
	m_szDoctorKey.Empty();
	m_szPathologyProcess.Empty();
	m_szDiseasePrehistory.Empty();
	m_szExamine.Empty();
	m_nPulse=0;
	m_nTemperature=0;
	m_nBloodPressure=0;
	m_nBloodPressurex=0;
	m_nBreathingInterval=0;
	m_nWeight=0;
	m_nHeight=0;
	m_szPrediagnose.Empty();
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
			m_wndConclusion.EnableWindow(false);
			m_wndConclusion.SetCheckValue(false);
			if(nOldMode == VM_NONE)
 				SetDefaultValues(); 
			m_szDoctorKey = pMF->m_szDoctor;
			m_wndDoctor.SetCurSel(0);
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndConclusion.SetCheckValue(true);

			m_wndConclusion.EnableWindow(true);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
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
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctorKey);
	};
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid='D' %s ORDER BY su_name "), szWhere);
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
/*void CHMSExamine::OnDiseasePrehistoryChange(){
	
} */
/*void CHMSExamine::OnDiseasePrehistorySetfocus(){
	
} */
/*void CHMSExamine::OnDiseasePrehistoryKillfocus(){
	
} */
int CHMSExamine::OnDiseasePrehistoryCheckValue(){
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
/*void CHMSExamine::OnPrediagnoseChange(){
	
} */
/*void CHMSExamine::OnPrediagnoseSetfocus(){
	
} */
/*void CHMSExamine::OnPrediagnoseKillfocus(){
	
} */
int CHMSExamine::OnPrediagnoseCheckValue(){
	return 0;
} 
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
void CHMSExamine::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("T"))
		SetMode(VM_ADD);	
} 
void CHMSExamine::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("P") || m_szStatus == _T("T"))
	{
		m_wndConclusion.SetCheckValue(true);
		SetMode(VM_EDIT);
	}

} 
void CHMSExamine::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSExamine();
} 
void CHMSExamine::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSExamine();
} 
int CHMSExamine::OnAddHMSExamine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSExamine"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSExamine::OnEditHMSExamine(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
// 	if(!pMF->SetStartWork(this,_T("Edit HMSExamine"))) 
 //		return -1; 
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
	CString szWhere; 
	szWhere.Format(_T(" WHERE he_docno=%ld AND he_bedid=%ld AND he_status<> 'T' "), pMF->m_nDocumentNo, pMF->m_nBedID); 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_examTbl.GetUpdateSQL(_T("he_createdby,he_createddate,he_patientno,he_docno,he_bedid,he_conclusion")); 
 		szSQL += szWhere;
 	} 
 	else if(GetMode() == VM_EDIT){ 
		szSQL.Format(_T(" UPDATE hms_exam SET he_conclusion='%s', he_status='T' %s "), m_szConclusion, szWhere);
 	} 
 //_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT){
			
			CHMSTerminateDocumentDialog dlg;
			dlg.DoModal();
		}
		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExamine::OnCancelHMSExamine(){
 	SetMode(VM_VIEW); 
 	return 0;
} 
int CHMSExamine::OnHMSExamineListLoadData(){
	return 0;
}

void CHMSExamine::LoadData(long nDocNo, int nReceptIdx){
	CMainFrame *pMF =(CMainFrame *) AfxGetMainWnd();
	if(nDocNo <= 0)
	{
		SetDefaultValues();
		UpdateData(false);
		return;
	}
	m_nDocumentNo = nDocNo;
	m_nReceptIndex = nReceptIdx;
	GetDataToScreen();
}
#include "ExamSpecialistEye.h"
int CHMSExamine::OnCertificateofphysicaleyeclinic(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if (pMF->m_nDocumentNo > 0)
	{
		CExamSpecialistEye dlg(this);
		dlg.DoModal();
	}
	return 0;
}

