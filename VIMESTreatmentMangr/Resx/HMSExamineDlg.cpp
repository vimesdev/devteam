#include "HMSExamineDlg.h"
#include "MainFrm.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamineDlg* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnPathologyProcessChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPathologyProcessChange();
} */
/*static void _OnPathologyProcessSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPathologyProcessSetfocus();} */ 
/*static void _OnPathologyProcessKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPathologyProcessKillfocus();
} */
static int _OnPathologyProcessCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnPathologyProcessCheckValue();
} 
/*static void _OnDiseasePrehistoryChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDiseasePrehistoryChange();
} */
/*static void _OnDiseasePrehistorySetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDiseasePrehistorySetfocus();} */ 
/*static void _OnDiseasePrehistoryKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnDiseasePrehistoryKillfocus();
} */
static int _OnDiseasePrehistoryCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnDiseasePrehistoryCheckValue();
} 
/*static void _OnExamineChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnExamineChange();
} */
/*static void _OnExamineSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnExamineSetfocus();} */ 
/*static void _OnExamineKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnExamineKillfocus();
} */
static int _OnExamineCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnExamineCheckValue();
} 
/*static void _OnPulseChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPulseChange();
} */
/*static void _OnPulseSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPulseSetfocus();} */ 
/*static void _OnPulseKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPulseKillfocus();
} */
static int _OnPulseCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnPulseCheckValue();
} 
/*static void _OnTemperatureChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnTemperatureChange();
} */
/*static void _OnTemperatureSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnTemperatureSetfocus();} */ 
/*static void _OnTemperatureKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnTemperatureKillfocus();
} */
static int _OnTemperatureCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnTemperatureCheckValue();
} 
/*static void _OnBloodPressureChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBloodPressureChange();
} */
/*static void _OnBloodPressureSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBloodPressureSetfocus();} */ 
/*static void _OnBloodPressureKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBloodPressureKillfocus();
} */
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnBloodPressureCheckValue();
} 
/*static void _OnBloodPressurexChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBloodPressurexChange();
} */
/*static void _OnBloodPressurexSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBloodPressurexSetfocus();} */ 
/*static void _OnBloodPressurexKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBloodPressurexKillfocus();
} */
static int _OnBloodPressurexCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnBloodPressurexCheckValue();
} 
/*static void _OnBreathingIntervalChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBreathingIntervalChange();
} */
/*static void _OnBreathingIntervalSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBreathingIntervalSetfocus();} */ 
/*static void _OnBreathingIntervalKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnBreathingIntervalKillfocus();
} */
static int _OnBreathingIntervalCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnBreathingIntervalCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnHeightCheckValue();
} 
/*static void _OnPrediagnoseChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPrediagnoseChange();
} */
/*static void _OnPrediagnoseSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPrediagnoseSetfocus();} */ 
/*static void _OnPrediagnoseKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnPrediagnoseKillfocus();
} */
static int _OnPrediagnoseCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnPrediagnoseCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSExamineDlg *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamineDlg *)pWnd)->OnConclusionCheckValue();
} 
static void _OnPrehistorySelectFnc(CWnd *pWnd){
	CHMSExamineDlg *pVw = (CHMSExamineDlg *)pWnd;
	pVw->OnPrehistorySelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSExamineDlg *pVw = (CHMSExamineDlg *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CHMSExamineDlg *pVw = (CHMSExamineDlg *)pWnd;
	pVw->OnTerminateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExamineDlg *pVw = (CHMSExamineDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExamineDlg *pVw = (CHMSExamineDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSExamineDlgFnc(CWnd *pWnd){
	 return ((CHMSExamineDlg*)pWnd)->OnAddHMSExamineDlg();
} 
static int _OnEditHMSExamineDlgFnc(CWnd *pWnd){
	 return ((CHMSExamineDlg*)pWnd)->OnEditHMSExamineDlg();
} 
static int _OnDeleteHMSExamineDlgFnc(CWnd *pWnd){
	 return ((CHMSExamineDlg*)pWnd)->OnDeleteHMSExamineDlg();
} 
static int _OnSaveHMSExamineDlgFnc(CWnd *pWnd){
	 return ((CHMSExamineDlg*)pWnd)->OnSaveHMSExamineDlg();
} 
static int _OnCancelHMSExamineDlgFnc(CWnd *pWnd){
	 return ((CHMSExamineDlg*)pWnd)->OnCancelHMSExamineDlg();
} 
CHMSExamineDlg::CHMSExamineDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSExamineDlg::~CHMSExamineDlg(){
}
void CHMSExamineDlg::OnCreateComponents(){
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 5, 595, 545);
	m_wndDateLabel.Create(this, _T("Examination Date"), 10, 30, 130, 55);
	m_wndDate.Create(this,135, 30, 255, 55); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 260, 30, 340, 55);
	m_wndDoctor.Create(this,345, 30, 594, 55); 
	m_wndPathologyProcessLabel.Create(this, _T("Pathology Process"), 10, 60, 130, 85);
	m_wndPathologyProcess.Create(this,135, 60, 590, 110); 
	m_wndDiseasePrehistoryLabel.Create(this, _T("Disease Prehistory"), 10, 115, 130, 140);
	m_wndDiseasePrehistory.Create(this,135, 115, 590, 165); 
	m_wndExamineLabel.Create(this, _T("Examine_"), 10, 170, 130, 195);
	m_wndExamine.Create(this,135, 170, 590, 370); 
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
	m_wndConclusion.Create(this,135, 465, 590, 540); 
	m_wndPrehistory.Create(this, _T("Prehistory"), 5, 550, 85, 575);
	m_wndUpdate.Create(this, _T("&Update"), 260, 550, 340, 575);
	m_wndTerminate.Create(this, _T("Terminate"), 345, 550, 425, 575);
	m_wndSave.Create(this, _T("&Save"), 430, 550, 510, 575);
	m_wndCancel.Create(this, _T("&Cancel"), 515, 550, 595, 575);

}
void CHMSExamineDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndPathologyProcess.SetLimitText(35);
	m_wndPathologyProcess.SetCheckValue(true);
	m_wndDiseasePrehistory.SetLimitText(35);
	m_wndDiseasePrehistory.SetCheckValue(true);
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
	m_wndPrediagnose.SetLimitText(35);
	m_wndPrediagnose.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
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
void CHMSExamineDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	SetMode(VM_NONE);

}
void CHMSExamineDlg::OnDoDataExchange(CDataExchange* pDX){
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
void CHMSExamineDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
		
	m_jData[_T("Doctor")] =  m_szDoctorKey;
	m_jData[_T("PathologyProcess")] =  m_szPathologyProcess;
	m_jData[_T("DiseasePrehistory")] =  m_szDiseasePrehistory;
	m_jData[_T("Examine")] =  m_szExamine;
	m_jData[_T("Pulse")] =  m_nPulse;
	m_jData[_T("Temperature")] =  m_nTemperature;
	m_jData[_T("BloodPressure")] =  m_nBloodPressure;
	m_jData[_T("BloodPressurex")] =  m_nBloodPressurex;
	m_jData[_T("BreathingInterval")] =  m_nBreathingInterval;
	m_jData[_T("Weight")] =  m_nWeight;
	m_jData[_T("Height")] =  m_nHeight;
	m_jData[_T("Prediagnose")] =  m_szPrediagnose;
	m_jData[_T("Conclusion")] =  m_szConclusion;
	}
	else
	{
		
	m_jData[_T("Doctor")].GetValue(m_szDoctorKey);
	m_jData[_T("PathologyProcess")].GetValue(m_szPathologyProcess);
	m_jData[_T("DiseasePrehistory")].GetValue(m_szDiseasePrehistory);
	m_jData[_T("Examine")].GetValue(m_szExamine);
	m_jData[_T("Pulse")].GetValue(m_nPulse);
	m_jData[_T("Temperature")].GetValue(m_nTemperature);
	m_jData[_T("BloodPressure")].GetValue(m_nBloodPressure);
	m_jData[_T("BloodPressurex")].GetValue(m_nBloodPressurex);
	m_jData[_T("BreathingInterval")].GetValue(m_nBreathingInterval);
	m_jData[_T("Weight")].GetValue(m_nWeight);
	m_jData[_T("Height")].GetValue(m_nHeight);
	m_jData[_T("Prediagnose")].GetValue(m_szPrediagnose);
	m_jData[_T("Conclusion")].GetValue(m_szConclusion);
	}

}
void CHMSExamineDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExamineDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_examTbl.SetValue(_T("he_createdby"), pMF->GetCurrentUser());
	m_hms_examTbl.SetValue(_T("he_createddate"), pMF->GetSysDateTime());
	m_hms_examTbl.SetValue(_T("he_updatedby"), pMF->GetCurrentUser());
	m_hms_examTbl.SetValue(_T("he_updateddate"), pMF->GetSysDateTime());

}
void CHMSExamineDlg::SetDefaultValues(){

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
int CHMSExamineDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
/*void CHMSExamineDlg::OnDateChange(){
	
} */
/*void CHMSExamineDlg::OnDateSetfocus(){
	
} */
/*void CHMSExamineDlg::OnDateKillfocus(){
	
} */
int CHMSExamineDlg::OnDateCheckValue(){
	return 0;
} 
void CHMSExamineDlg::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamineDlg::OnDoctorSelendok(){
	 
}
/*void CHMSExamineDlg::OnDoctorSetfocus(){
	
}*/
/*void CHMSExamineDlg::OnDoctorKillfocus(){
	
}*/
long CHMSExamineDlg::OnDoctorLoadData(){
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
/*void CHMSExamineDlg::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExamineDlg::OnPathologyProcessChange(){
	
} */
/*void CHMSExamineDlg::OnPathologyProcessSetfocus(){
	
} */
/*void CHMSExamineDlg::OnPathologyProcessKillfocus(){
	
} */
int CHMSExamineDlg::OnPathologyProcessCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnDiseasePrehistoryChange(){
	
} */
/*void CHMSExamineDlg::OnDiseasePrehistorySetfocus(){
	
} */
/*void CHMSExamineDlg::OnDiseasePrehistoryKillfocus(){
	
} */
int CHMSExamineDlg::OnDiseasePrehistoryCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnExamineChange(){
	
} */
/*void CHMSExamineDlg::OnExamineSetfocus(){
	
} */
/*void CHMSExamineDlg::OnExamineKillfocus(){
	
} */
int CHMSExamineDlg::OnExamineCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnPulseChange(){
	
} */
/*void CHMSExamineDlg::OnPulseSetfocus(){
	
} */
/*void CHMSExamineDlg::OnPulseKillfocus(){
	
} */
int CHMSExamineDlg::OnPulseCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnTemperatureChange(){
	
} */
/*void CHMSExamineDlg::OnTemperatureSetfocus(){
	
} */
/*void CHMSExamineDlg::OnTemperatureKillfocus(){
	
} */
int CHMSExamineDlg::OnTemperatureCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnBloodPressureChange(){
	
} */
/*void CHMSExamineDlg::OnBloodPressureSetfocus(){
	
} */
/*void CHMSExamineDlg::OnBloodPressureKillfocus(){
	
} */
int CHMSExamineDlg::OnBloodPressureCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnBloodPressurexChange(){
	
} */
/*void CHMSExamineDlg::OnBloodPressurexSetfocus(){
	
} */
/*void CHMSExamineDlg::OnBloodPressurexKillfocus(){
	
} */
int CHMSExamineDlg::OnBloodPressurexCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnBreathingIntervalChange(){
	
} */
/*void CHMSExamineDlg::OnBreathingIntervalSetfocus(){
	
} */
/*void CHMSExamineDlg::OnBreathingIntervalKillfocus(){
	
} */
int CHMSExamineDlg::OnBreathingIntervalCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnWeightChange(){
	
} */
/*void CHMSExamineDlg::OnWeightSetfocus(){
	
} */
/*void CHMSExamineDlg::OnWeightKillfocus(){
	
} */
int CHMSExamineDlg::OnWeightCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnHeightChange(){
	
} */
/*void CHMSExamineDlg::OnHeightSetfocus(){
	
} */
/*void CHMSExamineDlg::OnHeightKillfocus(){
	
} */
int CHMSExamineDlg::OnHeightCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnPrediagnoseChange(){
	
} */
/*void CHMSExamineDlg::OnPrediagnoseSetfocus(){
	
} */
/*void CHMSExamineDlg::OnPrediagnoseKillfocus(){
	
} */
int CHMSExamineDlg::OnPrediagnoseCheckValue(){
	return 0;
} 
/*void CHMSExamineDlg::OnConclusionChange(){
	
} */
/*void CHMSExamineDlg::OnConclusionSetfocus(){
	
} */
/*void CHMSExamineDlg::OnConclusionKillfocus(){
	
} */
int CHMSExamineDlg::OnConclusionCheckValue(){
	return 0;
} 
void CHMSExamineDlg::OnPrehistorySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamineDlg::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamineDlg::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamineDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamineDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExamineDlg::OnAddHMSExamineDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExamineDlg::OnEditHMSExamineDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExamineDlg::OnDeleteHMSExamineDlg(){
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
 		OnCancelHMSExamineDlg();
 	}
	return 0;
}
int CHMSExamineDlg::OnSaveHMSExamineDlg(){
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
 		//OnHMSExamineDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExamineDlg::OnCancelHMSExamineDlg(){
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
int CHMSExamineDlg::OnHMSExamineDlgListLoadData(){
	return 0;
}
