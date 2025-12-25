#include "HMSTreatmentTrackingDiseaseDialog.h"
#include "MainFrm.h"
#include "HMSParaclinicResultDialog.h"
#define INFO_BUFFER_SIZE 32767

/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDateCheckValue();
} 
static void _OnNumberDateLabelSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnNumberDateLabelSelect();
}
/*static void _OnNumberDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNumberDateChange();
} */
/*static void _OnNumberDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNumberDateSetfocus();} */ 
/*static void _OnNumberDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNumberDateKillfocus();
} */
static int _OnNumberDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNumberDateCheckValue();
}


/*static void _OnDiseaseTrackingChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDiseaseTrackingChange();
} */
/*static void _OnDiseaseTrackingSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDiseaseTrackingSetfocus();} */ 
/*static void _OnDiseaseTrackingKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDiseaseTrackingKillfocus();
} */
static int _OnDiseaseTrackingCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDiseaseTrackingCheckValue();
} 
/*static void _OnDiagnosisIdentifyChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDiagnosisIdentifyChange();
} */
/*static void _OnDiagnosisIdentifySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDiagnosisIdentifySetfocus();} */ 
/*static void _OnDiagnosisIdentifyKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDiagnosisIdentifyKillfocus();
} */
static int _OnDiagnosisIdentifyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDiagnosisIdentifyCheckValue();
} 
/*static void _OnNextPlanChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNextPlanChange();
} */
/*static void _OnNextPlanSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNextPlanSetfocus();} */ 
/*static void _OnNextPlanKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNextPlanKillfocus();
} */
static int _OnNextPlanCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNextPlanCheckValue();
} 
static void _OnParaclinicalResultButtonSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDiseaseDialog *pVw = (CHMSTreatmentTrackingDiseaseDialog *)pWnd;
	pVw->OnParaclinicalResultButtonSelect();
} 
static void _OnSelectFromOrderSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDiseaseDialog *pVw = (CHMSTreatmentTrackingDiseaseDialog *)pWnd;
	pVw->OnSelectFromOrderSelect();
} 
/*static void _OnParaclinicResChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnParaclinicResChange();
} */
/*static void _OnParaclinicResSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnParaclinicResSetfocus();} */ 
/*static void _OnParaclinicResKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnParaclinicResKillfocus();
} */
static int _OnParaclinicResCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnParaclinicResCheckValue();
} 
static void _OnDietSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentTrackingDiseaseDialog* )pWnd)->OnDietSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDietSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietSelendok();
}
/*static void _OnDietSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietKillfocus();
} */
/*static void _OnDietKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietKillfocus();
} */
static long _OnDietLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietLoadData();
} 
/*static void _OnDietAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietAddNew();
}*/
/*static void _OnNurseAssistanceChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNurseAssistanceChange();
} */
/*static void _OnNurseAssistanceSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNurseAssistanceSetfocus();} */ 
/*static void _OnNurseAssistanceKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNurseAssistanceKillfocus();
} */

static void _OnNurseAssistanceSelectFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNurseAssistanceSelect();
}

static int _OnNurseAssistanceCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNurseAssistanceCheckValue();
}

static void _OnInputPulseTemperatureSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnInputPulseTemperatureSelect();
}
static void _OnTemperatureSelectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentTrackingDiseaseDialog* )pWnd)->OnTemperatureSelectSelectChange(nOldItemSel, nNewItemSel);
} 

static void _OnTemperatureSelectSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureSelectSelendok();
}

static int _OnTemperatureSelectCheckValueFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureSelectSelendok();
	return 0;
}
/*static void _OnTemperatureSelectSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureSelectKillfocus();
}*/
/*static void _OnTemperatureSelectKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureSelectKillfocus();
}*/
static long _OnTemperatureSelectLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureSelectLoadData();
}
/*static void _OnTemperatureSelectAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureSelectAddNew();
}*/
/*static void _OnPulseChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnPulseChange();
} */
/*static void _OnPulseSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnPulseSetfocus();} */ 
/*static void _OnPulseKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnPulseKillfocus();
} */
static int _OnPulseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnPulseCheckValue();
} 
/*static void _OnTemperatureChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureChange();
} */
/*static void _OnTemperatureSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureSetfocus();} */ 
/*static void _OnTemperatureKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureKillfocus();
} */
static int _OnTemperatureCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnTemperatureCheckValue();
} 
/*static void _OnBloodPressureChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBloodPressureChange();
} */
/*static void _OnBloodPressureSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBloodPressureSetfocus();} */ 
/*static void _OnBloodPressureKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBloodPressureKillfocus();
} */
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBloodPressureCheckValue();
} 
/*static void _OnBloodPressureHightChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBloodPressureHightChange();
} */
/*static void _OnBloodPressureHightSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBloodPressureHightSetfocus();} */ 
/*static void _OnBloodPressureHightKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBloodPressureHightKillfocus();
} */
static int _OnBloodPressureHightCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBloodPressureHightCheckValue();
} 
/*static void _OnBreathingRateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBreathingRateChange();
} */
/*static void _OnBreathingRateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBreathingRateSetfocus();} */ 
/*static void _OnBreathingRateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBreathingRateKillfocus();
} */
static int _OnBreathingRateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnBreathingRateCheckValue();
} 
static void _OnDeanNoteSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnDeanNoteSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDiseaseDialog *pVw = (CHMSTreatmentTrackingDiseaseDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDiseaseDialog *pVw = (CHMSTreatmentTrackingDiseaseDialog *)pWnd;
	pVw->OnCloseSelect();
} 

static void _OnParaclinicResultButtonSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDiseaseDialog *pVw = (CHMSTreatmentTrackingDiseaseDialog *)pWnd;
	pVw->OnParaclinicResultButtonSelect();
} 


static int _OnAddHMSTreatmentTrackingDiseaseDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnAddHMSTreatmentTrackingDiseaseDialog();
} 
static int _OnEditHMSTreatmentTrackingDiseaseDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnEditHMSTreatmentTrackingDiseaseDialog();
} 
static int _OnDeleteHMSTreatmentTrackingDiseaseDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnDeleteHMSTreatmentTrackingDiseaseDialog();
} 
static int _OnSaveHMSTreatmentTrackingDiseaseDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnSaveHMSTreatmentTrackingDiseaseDialog();
} 
static int _OnCancelHMSTreatmentTrackingDiseaseDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnCancelHMSTreatmentTrackingDiseaseDialog();
}

static void _OnYesSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnYesSelect();
}
static void _OnNoSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnNoSelect();
}
static void _OnLyDoChuyenSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CHMSTreatmentTrackingDiseaseDialog* )pWnd)->OnLyDoChuyenSelectChange(nOldItemSel, nNewItemSel);
}
static long _OnLyDoChuyenLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnLyDoChuyenLoadData();
}
static void _OnLyDoSelectFnc(CWnd *pWnd)
{
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnLyDoSelect();
}

bool parseBloodPresure(CString szIn, int&l, int&h)
{
	int pos = szIn.Find(_T("/"));
	if(pos <= 0)
		return false;
	l = str2int(szIn.Left(pos));
	h = str2int(szIn.Mid(pos+1));
	if(l > h)
		return false;
	return true;
}
CHMSTreatmentTrackingDiseaseDialog::CHMSTreatmentTrackingDiseaseDialog(CWnd *pParent, int nMode, long nDocumentNo, long nUID):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nTreatIdx = nUID;
	m_nDlgWidth = 485;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_nDocumentNo = nDocumentNo;
	m_nPrintCount = 0;
}


CHMSTreatmentTrackingDiseaseDialog::~CHMSTreatmentTrackingDiseaseDialog()
{
}
void CHMSTreatmentTrackingDiseaseDialog::OnCreateComponents(){
	
	m_wndDateLabel.Create(this, _T("Ngày giờ"), 5, 4, 145, 29);
	m_wndDate.Create(this,150, 5, 270, 30); 
	m_wndNumberDateLabel.Create(this, _T("Số ngày"), 275, 5, 385, 30);
	m_wndNumberDate.Create(this,390, 5, 440, 30); 
	m_wndDiseaseTrackingLabel.Create(this, _T("Diễn biến của bệnh"), 5, 35, 420, 60);
	m_wndDiseaseTracking.Create(this,5, 65, 834, 215, TRUE, FALSE, TRUE);  
	m_wndDiagnosisIdentifyLabel.Create(this, _T("Nhận định chẩn đoán"), 5, 220, 145, 245);
	m_wndDiagnosisIdentify.Create(this,150, 220, 440, 245); 
	m_wndNextPlanLabel.Create(this, _T("Kế hoạch tiếp theo"), 445, 220, 565, 245);
	m_wndNextPlan.Create(this,570, 220, 834, 245); 
	m_wndksdptoksdt.Create(this, _T("Chuyển KSDP sang KSĐT"), 5, 251, 191, 276);
	m_wndYes.Create(this, _T("Yes"), 197, 251, 277, 276);
	m_wndNo.Create(this, _T("No"), 283, 251, 363, 276);
	m_wndLyDo.Create(this, _T("Lý do"), 369, 251, 439, 276);	
	m_wndLyDoChuyen.Create(this,445, 251, 834, 276);
	m_wndLyDoChuyen.SetReadOnly(true);
	m_wndParaclinicalResult.Create(this, _T("Kết quả cận lâm sàng chính"), 5, 281, 191, 306);
	m_wndParaclinicalResultButton.Create(this, _T("Chọn kết  quả"), 570, 281, 667, 306);
	m_wndParaclinicRes.Create(this,5, 311, 834, 461 , TRUE, FALSE, TRUE); 
	m_wndDietLabel.Create(this, _T("Chế độ ăn"), 5, 466, 145, 491);
	m_wndDiet.Create(this,150, 466, 440, 491); 
	m_wndNurseAssistanceLabel.Create(this, _T("Chế độ hộ lý"), 5, 496, 145, 521);
	m_wndNurseAssistance.Create(this,150, 496, 834, 552, TRUE, FALSE, TRUE); 
	m_wndTemperatureSelectLabel.Create(this, _T("Chức năng sống"), 5, 557, 145, 582);
	m_wndTemperatureSelect.Create(this,150, 557, 440, 582); 
	m_wndInputPulseTemperature.Create(this, _T("Nhập chức năng sống"), 445, 557, 604, 582);
	m_wndPulseLabel.Create(this, _T("Mạch"), 5, 587, 145, 612);
	m_wndPulse.Create(this,150, 587, 230, 612); 
	m_wndTemperatureLabel.Create(this, _T("Nhiệt độ"), 235, 587, 350, 612);
	m_wndTemperature.Create(this,355, 587, 440, 612); 
	m_wndBloodPressureLabel.Create(this, _T("Huyết áp"), 445, 587, 550, 612);
	m_wndBloodPressure.Create(this,555, 587, 600, 612); 
	m_wndLabelSpec.Create(this, _T("/"), 605, 587, 615, 612);
	m_wndBloodPressureHight.Create(this,620, 587, 665, 612); 
	m_wndBreathingRateLabel.Create(this, _T("Nhịp thở"), 670, 587, 774, 612);
	m_wndBreathingRate.Create(this,779, 587, 835, 612); 
	m_wndDeanNote.Create(this, _T("Chủ nhiệm khoa điểm bệnh"), 442, 617, 639, 642);
	m_wndSave.Create(this, _T("&Save"), 670, 617, 750, 642);
	m_wndClose.Create(this, _T("&Close"), 755, 617, 835, 642);
	m_wndSelectFromOrder.ModifyStyle(WS_TABSTOP, 0);
	m_wndNumberDate.ModifyStyle(WS_TABSTOP, 0);
	m_wndSelectFromOrder.ShowWindow(SW_HIDE);
	m_wndDeanNote.ModifyStyle(WS_TABSTOP, 0);
}
void CHMSTreatmentTrackingDiseaseDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndNumberDate.SetCheckValue(TRUE);
	m_wndDiseaseTracking.SetLimitText(2000);
	m_wndParaclinicRes.SetLimitText(2000);
	m_wndDiseaseTracking.SetCheckValue(true);
//	m_wndDiet.SetLimitText(128);
	m_wndDiet.SetCheckValue(true);
	m_wndNurseAssistance.SetCheckValue(true);
	m_wndPulse.SetLimitText(5);
	m_wndPulse.SetCheckValue(false);
	m_wndTemperature.SetLimitText(5);
	m_wndTemperature.SetCheckValue(false);
	m_wndBloodPressure.SetLimitText(8);
	m_wndBloodPressure.SetCheckValue(false);
	m_wndBreathingRate.SetLimitText(5);
	m_wndBreathingRate.SetCheckValue(false);
	
	m_wndLyDo.SetHyperlink(true);
	m_wndLyDoChuyen.SetCheckValue(true);
	
//	m_wndBloodPressure.SetMask(_T("###/###"));
	m_wndTemperatureSelect.InsertColumn(0, _T(""), DT_CENTER, 0);//stt
	m_wndTemperatureSelect.InsertColumn(1, _T("Time"), DT_CENTER, 80);
	m_wndTemperatureSelect.InsertColumn(2, _T("Mạch"), DT_CENTER, 60);
	m_wndTemperatureSelect.InsertColumn(3, _T("Nhiệt độ"), DT_CENTER, 60);
	m_wndTemperatureSelect.InsertColumn(4, _T("Huyết áp"), DT_CENTER, 60);
	m_wndTemperatureSelect.InsertColumn(5, _T("Nhịp thở"), DT_CENTER, 60);

	m_hms_siexamTbl.SetTableName(_T("hms_siexam"));
	m_hms_siexamTbl.AddField(_T("hsie_createdby"), dfText, 15); 
	m_hms_siexamTbl.AddField(_T("hsie_patientno"), dfLong); 
	m_hms_siexamTbl.AddField(_T("hsie_docno"), dfLong); 
	m_hms_siexamTbl.AddField(_T("hsie_deptid"), dfText, 7); 
	m_hms_siexamTbl.AddField(_T("hsie_refidx"), dfInteger);	
	m_hms_siexamTbl.AddField(_T("hsie_roomid"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_bedid"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_treatidx"), dfLong); 
	m_hms_siexamTbl.AddField(_T("hsie_date"), dfDateTime); 
	m_hms_siexamTbl.AddField(_T("hsie_doctor"), dfText, 15); 
	m_hms_siexamTbl.AddField(_T("hsie_nurse"), dfText, 15); 
	m_hms_siexamTbl.AddField(_T("hsie_desc"), dfText, 1024); 
	m_hms_siexamTbl.AddField(_T("hsie_para_res"), dfText, 1024);
	m_hms_siexamTbl.AddField(_T("hsie_dael"), dfText, 1024); 
	m_hms_siexamTbl.AddField(_T("hsie_diet"), dfText, 128); 
	m_hms_siexamTbl.AddField(_T("hsie_nurseassistance"), dfText, 254); 
	m_hms_siexamTbl.AddField(_T("hsie_pulse"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_temperature"), dfDouble); 
	m_hms_siexamTbl.AddField(_T("hsie_bloodpressure"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_bloodpressurex"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_breathinterval"),dfInteger);
	m_hms_siexamTbl.AddField(_T("hsie_deannote"),dfText, 1);
	m_hms_siexamTbl.AddField(_T("hsie_type"),dfText, 3);
//	m_hms_siexamTbl.AddField(_T("hsie_weight"), dfInteger); 
//	m_hms_siexamTbl.AddField(_T("hsie_height"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_diagnosis_identify"),dfText, 254);
	m_hms_siexamTbl.AddField(_T("hsie_next_plan"),dfText, 254);
	m_hms_siexamTbl.AddField(_T("hsie_treattime"),dfInteger);
	m_hms_siexamTbl.AddField(_T("HSIE_CHUYEN_KSDT"), dfText, 1);
	m_hms_siexamTbl.AddField(_T("HSIE_LYDO_CHUYEN"), dfText, 3);
	

	m_wndInputPulseTemperature.ModifyStyle(WS_TABSTOP, 0);
	m_wndDate.ModifyStyle(WS_TABSTOP, 0);


	m_wndDiet.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDiet.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);


	m_wndLyDoChuyen.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndLyDoChuyen.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	
}
void CHMSTreatmentTrackingDiseaseDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndNumberDateLabel.SetEvent(WE_CLICK, _OnNumberDateLabelSelectFnc);
	//m_wndNumberDate.SetEvent(WE_CHANGE, _OnNumberDateChangeFnc);
	//m_wndNumberDate.SetEvent(WE_SETFOCUS, _OnNumberDateSetfocusFnc);
	//m_wndNumberDate.SetEvent(WE_KILLFOCUS, _OnNumberDateKillfocusFnc);
	m_wndNumberDate.SetEvent(WE_CHECKVALUE, _OnNumberDateCheckValueFnc);
	//m_wndDiseaseTracking.SetEvent(WE_CHANGE, _OnDiseaseTrackingChangeFnc);
	//m_wndDiseaseTracking.SetEvent(WE_SETFOCUS, _OnDiseaseTrackingSetfocusFnc);
	//m_wndDiseaseTracking.SetEvent(WE_KILLFOCUS, _OnDiseaseTrackingKillfocusFnc);
	m_wndDiseaseTracking.SetEvent(WE_CHECKVALUE, _OnDiseaseTrackingCheckValueFnc);
	//m_wndDiagnosisIdentify.SetEvent(WE_CHANGE, _OnDiagnosisIdentifyChangeFnc);
	//m_wndDiagnosisIdentify.SetEvent(WE_SETFOCUS, _OnDiagnosisIdentifySetfocusFnc);
	//m_wndDiagnosisIdentify.SetEvent(WE_KILLFOCUS, _OnDiagnosisIdentifyKillfocusFnc);
	m_wndDiagnosisIdentify.SetEvent(WE_CHECKVALUE, _OnDiagnosisIdentifyCheckValueFnc);
	//m_wndNextPlan.SetEvent(WE_CHANGE, _OnNextPlanChangeFnc);
	//m_wndNextPlan.SetEvent(WE_SETFOCUS, _OnNextPlanSetfocusFnc);
	//m_wndNextPlan.SetEvent(WE_KILLFOCUS, _OnNextPlanKillfocusFnc);
	m_wndNextPlan.SetEvent(WE_CHECKVALUE, _OnNextPlanCheckValueFnc);
	m_wndParaclinicalResultButton.SetEvent(WE_CLICK, _OnParaclinicalResultButtonSelectFnc);
	m_wndSelectFromOrder.SetEvent(WE_CLICK, _OnSelectFromOrderSelectFnc);
	//m_wndParaclinicRes.SetEvent(WE_CHANGE, _OnParaclinicResChangeFnc);
	//m_wndParaclinicRes.SetEvent(WE_SETFOCUS, _OnParaclinicResSetfocusFnc);
	//m_wndParaclinicRes.SetEvent(WE_KILLFOCUS, _OnParaclinicResKillfocusFnc);
	m_wndParaclinicRes.SetEvent(WE_CHECKVALUE, _OnParaclinicResCheckValueFnc);
	m_wndDiet.SetEvent(WE_SELENDOK, _OnDietSelendokFnc);
	//m_wndDiet.SetEvent(WE_SETFOCUS, _OnDietSetfocusFnc);
	//m_wndDiet.SetEvent(WE_KILLFOCUS, _OnDietKillfocusFnc);
	m_wndDiet.SetEvent(WE_SELCHANGE, _OnDietSelectChangeFnc);
	m_wndDiet.SetEvent(WE_LOADDATA, _OnDietLoadDataFnc);
	//m_wndDiet.SetEvent(WE_ADDNEW, _OnDietAddNewFnc);
	//m_wndNurseAssistance.SetEvent(WE_CHANGE, _OnNurseAssistanceChangeFnc);
	//m_wndNurseAssistance.SetEvent(WE_SETFOCUS, _OnNurseAssistanceSetfocusFnc);
	//m_wndNurseAssistance.SetEvent(WE_KILLFOCUS, _OnNurseAssistanceKillfocusFnc);
	m_wndNurseAssistanceLabel.SetHyperlink(true);
	m_wndNurseAssistanceLabel.SetEvent(WE_CLICK, _OnNurseAssistanceSelectFnc);
	m_wndNurseAssistance.SetEvent(WE_CHECKVALUE, _OnNurseAssistanceCheckValueFnc);
	m_wndInputPulseTemperature.SetEvent(WE_CLICK, _OnInputPulseTemperatureSelectFnc);
	m_wndTemperatureSelect.SetEvent(WE_SELENDOK, _OnTemperatureSelectSelendokFnc);
	//m_wndTemperatureSelect.SetEvent(WE_SETFOCUS, _OnTemperatureSelectSetfocusFnc);
	//m_wndTemperatureSelect.SetEvent(WE_KILLFOCUS, _OnTemperatureSelectKillfocusFnc);
	m_wndTemperatureSelect.SetEvent(WE_SELCHANGE, _OnTemperatureSelectSelectChangeFnc);
	m_wndTemperatureSelect.SetEvent(WE_LOADDATA, _OnTemperatureSelectLoadDataFnc);
	m_wndTemperatureSelect.SetEvent(WE_CHECKVALUE, _OnTemperatureSelectCheckValueFnc);

	m_wndYes.SetEvent(WE_CLICK, _OnYesSelectFnc);
	m_wndNo.SetEvent(WE_CLICK, _OnNoSelectFnc);
	m_wndLyDo.SetEvent(WE_CLICK, _OnLyDoSelectFnc);
	m_wndLyDoChuyen.SetEvent(WE_SELCHANGE, _OnLyDoChuyenSelectChangeFnc);
	m_wndLyDoChuyen.SetEvent(WE_LOADDATA, _OnLyDoChuyenLoadDataFnc);
	//m_wndLyDoChuyen.SetEvent(WE_ADDNEW, _OnLyDoChuyenAddNewFnc);
	//m_wndTemperatureSelect.SetEvent(WE_ADDNEW, _OnTemperatureSelectAddNewFnc);
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
	//m_wndBloodPressureHight.SetEvent(WE_CHANGE, _OnBloodPressureHightChangeFnc);
	//m_wndBloodPressureHight.SetEvent(WE_SETFOCUS, _OnBloodPressureHightSetfocusFnc);
	//m_wndBloodPressureHight.SetEvent(WE_KILLFOCUS, _OnBloodPressureHightKillfocusFnc);
	m_wndBloodPressureHight.SetEvent(WE_CHECKVALUE, _OnBloodPressureHightCheckValueFnc);
	//m_wndBreathingRate.SetEvent(WE_CHANGE, _OnBreathingRateChangeFnc);
	//m_wndBreathingRate.SetEvent(WE_SETFOCUS, _OnBreathingRateSetfocusFnc);
	//m_wndBreathingRate.SetEvent(WE_KILLFOCUS, _OnBreathingRateKillfocusFnc);
	m_wndBreathingRate.SetEvent(WE_CHECKVALUE, _OnBreathingRateCheckValueFnc);
	m_wndInputPulseTemperature.SetEvent(WE_CLICK, _OnInputPulseTemperatureSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndParaclinicalResultButton.SetEvent(WE_CLICK, _OnParaclinicResultButtonSelectFnc);

	int nMode = GetMode();
	m_szLocked.Empty();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
//	if(m_szLocked == _T("Y"))
//	{
//		SetMode(VM_VIEW);	
//	}
//	else
		SetMode(nMode);
	m_wndNumberDate.EnableWindow(FALSE);

	CDate fDate, tDate, dte, curDate;
	fDate.ParseDate(pMF->GetSysDate());
	tDate.ParseDate(pMF->GetSysDate());
	curDate.ParseDate(pMF->GetSysDate());
	
	if (pMF->GetCurrentDepartmentID() == _T("A15 NEW"))
	{
		fDate -= 30;
		tDate += 30;
	}
	//else if (pMF->GetCurrentUser() == _T("admin"))
	else if (pMF->m_UserInfo.su_groupid == _T("A"))
	{
		fDate -= 10000;
		tDate += 10000;
	}
	else
	    fDate -= 7;
		tDate += 7;
	dte.ParseDate(m_szDate.Left(10));
	//_msg(_T("%s"), dte.GetDate());
	//_msg(_T("%s"), fDate.GetDate());
	//_msg(_T("%s"), tDate.GetDate());
	
	if(dte < fDate || dte > tDate)
	{
		m_wndDate.EnableWindow(FALSE);
		m_wndSave.EnableWindow(FALSE);
	}
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select htr_outpatient from hms_treatment_record where htr_docno = %ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.GetStringValue() == _T("Y"))
	{
		m_wndDiet.SetCheckValue(false);
		m_wndNurseAssistance.SetCheckValue(false);
	}
	

}
void CHMSTreatmentTrackingDiseaseDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Check(pDX, m_wndNumberDateLabel.GetDlgCtrlID(), m_bNumberDateSelect);
	DDX_Text(pDX, m_wndNumberDate.GetDlgCtrlID(), m_nNumberDate);
	DDX_Text(pDX, m_wndDiseaseTracking.GetDlgCtrlID(), m_szDiseaseTracking);
	DDX_Text(pDX, m_wndDiagnosisIdentify.GetDlgCtrlID(), m_szDiagnosisIdentify);
	DDX_Text(pDX, m_wndNextPlan.GetDlgCtrlID(), m_szNextPlan);
	DDX_Text(pDX, m_wndParaclinicRes.GetDlgCtrlID(), m_szParaclinicRes);
	DDX_TextEx(pDX, m_wndDiet.GetDlgCtrlID(), m_szDietKey);
	DDX_Text(pDX, m_wndNurseAssistance.GetDlgCtrlID(), m_szNurseAssistance);
	DDX_Check(pDX, m_wndInputPulseTemperature.GetDlgCtrlID(), m_bInputPulseTemperature);
	DDX_TextEx(pDX, m_wndTemperatureSelect.GetDlgCtrlID(), m_szTemperatureSelectKey);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
   _tprintf(_T("\r\n%f"), m_nTemperature);

	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_nBloodPressure);
	DDX_Text(pDX, m_wndBloodPressureHight.GetDlgCtrlID(), m_nBloodPressureHight);
	DDX_Text(pDX, m_wndBreathingRate.GetDlgCtrlID(), m_nBreathingRate);
	DDX_Check(pDX, m_wndDeanNote.GetDlgCtrlID(), m_bDeanNote);
	DDX_Radio(pDX, m_wndYes.GetDlgCtrlID(), m_nYes);
	DDX_Radio(pDX, m_wndNo.GetDlgCtrlID(), m_nNo);
	DDX_TextEx(pDX, m_wndLyDoChuyen.GetDlgCtrlID(), m_szLyDoChuyenKey);
}
void CHMSTreatmentTrackingDiseaseDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp ;
	
	szSQL.Format(_T("SELECT * FROM hms_siexam where hsie_docno = %ld and hsie_idx = %d "), m_nDocumentNo, m_nTreatIdx);	
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF()){		
		rs.GetValue(_T("hsie_createdby"), m_szCreatedBy);
		rs.GetValue(_T("hsie_date"), m_szDate);
		rs.GetValue(_T("hsie_doctor"), pMF->GetCurrentUser());
		rs.GetValue(_T("hsie_desc"), m_szDiseaseTracking);
		rs.GetValue(_T("hsie_para_res"), m_szParaclinicRes);
		rs.GetValue(_T("hsie_pulse"), m_nPulse);
		rs.GetValue(_T("hsie_temperature"), m_nTemperature),
		rs.GetValue(_T("hsie_bloodpressure"), m_nBloodPressure);
		rs.GetValue(_T("hsie_bloodpressurex"), m_nBloodPressureHight);
		rs.GetValue(_T("hsie_breathinterval"), m_nBreathingRate);
		rs.GetValue(_T("hsie_locked"), m_szLocked);

//		rs.GetValue(_T("hsie_weight"), 0);
//		rs.GetValue(_T("hsie_height"), 0);
		rs.GetValue(_T("hsie_diet"), m_szDietKey);
		rs.GetValue(_T("hsie_nurseassistance"), m_szNurseAssistance);
		rs.GetValue(_T("hsie_printcount"), m_nPrintCount);
		rs.GetValue(_T("hsie_diagnosis_identify"), m_szDiagnosisIdentify);
		rs.GetValue(_T("hsie_next_plan"), m_szNextPlan);
		rs.GetValue(_T("hsie_chuyen_ksdt"), szTemp);
		rs.GetValue(_T("hsie_lydo_chuyen"), m_szLyDoChuyenKey);

		CString tmpStr;
		rs.GetValue(_T("hsie_deannote"), tmpStr);
		if(tmpStr == _T("Y"))
		{
			m_bDeanNote = TRUE;
		}
		
		if (szTemp == _T("Y"))
		{
			m_nYes = 0;
			m_nNo =1;
		}		
		else
		{
			m_nYes = 1;
			m_nNo = 0;
		}	
		
	}

	szSQL.Format(_T("SELECT * FROM ad_settings WHERE ads_ID='INPUT_PULSETEMPERATURE' and ads_client_id='%s' "),
		pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		CString tmpStr;
		rs.GetValue(_T("ads_value"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bInputPulseTemperature = TRUE;
		else
			m_bInputPulseTemperature = FALSE;
		EnableInputPulse(m_bInputPulseTemperature);

	}

	
	


}
void CHMSTreatmentTrackingDiseaseDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_siexamTbl.SetValue(_T("hsie_createdby"), pMF->GetCurrentUser());
	m_hms_siexamTbl.SetValue(_T("hsie_createddate"), pMF->GetSysDateTime());
	m_hms_siexamTbl.SetValue(_T("hsie_patientno"), pMF->m_nPatientNo);
	m_hms_siexamTbl.SetValue(_T("hsie_docno"), pMF->m_nDocumentNo);
	m_hms_siexamTbl.SetValue(_T("hsie_doctor"), pMF->GetCurrentUser());
	m_hms_siexamTbl.SetValue(_T("hsie_deptid"), pMF->m_szDept);
	m_hms_siexamTbl.SetValue(_T("hsie_roomid"), pMF->GetCurrentRoomID());
	m_hms_siexamTbl.SetValue(_T("hsie_bedid"), pMF->m_nBedID);
	m_hms_siexamTbl.SetValue(_T("hsie_refidx"), pMF->m_nRefIndex);
	m_hms_siexamTbl.SetValue(_T("hsie_treatidx"), m_nTreatIdx);
	m_hms_siexamTbl.SetValue(_T("hsie_date"), m_szDate);
	m_hms_siexamTbl.SetValue(_T("hsie_pulse"), m_nPulse);
	m_hms_siexamTbl.SetValue(_T("hsie_desc"), m_szDiseaseTracking);
	m_hms_siexamTbl.SetValue(_T("hsie_para_res"), m_szParaclinicRes);
	m_hms_siexamTbl.SetValue(_T("hsie_temperature"), m_nTemperature);

	m_hms_siexamTbl.SetValue(_T("hsie_bloodpressure"), m_nBloodPressure);
	m_hms_siexamTbl.SetValue(_T("hsie_bloodpressurex"), m_nBloodPressureHight);
	m_hms_siexamTbl.SetValue(_T("hsie_breathinterval"), m_nBreathingRate);
	m_hms_siexamTbl.SetValue(_T("hsie_weight"), 0);
	m_hms_siexamTbl.SetValue(_T("hsie_height"), 0);
	m_hms_siexamTbl.SetValue(_T("hsie_diet"), m_szDietKey);
	m_hms_siexamTbl.SetValue(_T("hsie_nurseassistance"), m_szNurseAssistance);

	CString tmpStr;
	if(m_bDeanNote)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");
	m_hms_siexamTbl.SetValue(_T("hsie_deannote"), tmpStr);
	m_hms_siexamTbl.SetValue(_T("hsie_type"), _T("DT"));
	m_hms_siexamTbl.SetValue(_T("hsie_diagnosis_identify"), m_szDiagnosisIdentify);
	m_hms_siexamTbl.SetValue(_T("hsie_next_plan"), m_szNextPlan);
	m_hms_siexamTbl.SetValue(_T("hsie_treattime"), pMF->GetTreatTime());
	if (m_nYes == 0)
	m_hms_siexamTbl.SetValue(_T("hsie_chuyen_ksdt"), _T("Y"));
	else
	m_hms_siexamTbl.SetValue(_T("hsie_chuyen_ksdt"), _T("N"));
	m_hms_siexamTbl.SetValue(_T("hsie_lydo_chuyen"), m_szLyDoChuyenKey);


}
void CHMSTreatmentTrackingDiseaseDialog::SetDefaultValues(){

	m_szDate.Empty();
	m_szDiseaseTracking.Empty();
	m_szDiagnosisIdentify.Empty();
	m_szNextPlan.Empty();
	m_szParaclinicRes.Empty();
	m_szDietKey.Empty();
	m_szNurseAssistance.Empty();
	m_bInputPulseTemperature=FALSE;
	m_szTemperatureSelectKey.Empty();
	m_nPulse=0;
	m_nTemperature=0;
	m_nBloodPressure = 0;
	m_nBloodPressureHight = 0;
	m_nBreathingRate=0;
	m_nNumberDate = 1;
	m_bNumberDateSelect = FALSE;
	m_bDeanNote = FALSE;	
	m_nNo=0;

	m_szLyDoChuyenKey.Empty();

}
int CHMSTreatmentTrackingDiseaseDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_szDate = pMF->GetSysDateTime();
			m_nTreatIdx = 0;
			m_wndLyDoChuyen.SetReadOnly(true);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndLyDoChuyen.SetReadOnly(true);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		if(!m_bInputPulseTemperature)
		{
			m_wndPulse.EnableWindow(FALSE);
			m_wndTemperature.EnableWindow(FALSE);
			m_wndBloodPressure.EnableWindow(FALSE);
			m_wndBloodPressureHight.EnableWindow(FALSE);
			m_wndBreathingRate.EnableWindow(FALSE);
			
		}
		if(nMode != VM_ADD)
		{
			m_wndNumberDate.EnableWindow(FALSE);
			m_wndNumberDateLabel.EnableWindow(FALSE);
		}
		if (m_nTreatIdx > 0)
		{
			szSQL.Format(_T("select count(*) ") \
						_T(" from hms_ipharmaorder ") \
						_T(" where hpo_docno = %ld and hpo_treatidx = %ld and hpo_orderstatus <> 'C'")
						, m_nDocumentNo, m_nTreatIdx);
			rs.ExecSQL(szSQL);
			if (rs.GetIntValue() > 0)
			{
				m_wndDate.EnableWindow(FALSE);
			}
		}
 		UpdateData(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
/*void CHMSTreatmentTrackingDiseaseDialog::OnDateChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDateSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDateKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	CDate fDate, tDate, dte, curDate;
	fDate.ParseDate(pMF->GetSysDate());
	tDate.ParseDate(pMF->GetSysDate());
	curDate.ParseDate(pMF->GetSysDate());
	//if (pMF->GetCurrentUser() == _T("admin"))
	if (pMF->m_UserInfo.su_groupid == _T("A") && pMF->CheckPermission(_T("admin.TM.100.1")))
	{
		fDate -= 10000;
		tDate += 10000;
	}
	else
	fDate -= 30;
	tDate += 30;
	dte.ParseDate(m_szDate.Left(10));
	
	if(dte < fDate || dte > tDate)
		return -1;
	if(dte > curDate)
	{
		m_szDate.Format(_T("%s 06:00"), dte.GetDate());
		UpdateData(FALSE);
	}
	return 0;
} 

void CHMSTreatmentTrackingDiseaseDialog::OnNumberDateLabelSelect(){
	UpdateData(TRUE);
	if(m_bNumberDateSelect)
	{
		m_wndNumberDate.EnableWindow(TRUE);
	}
	else
	{
		m_nNumberDate =1;
		m_wndNumberDate.EnableWindow(FALSE);
	}
	UpdateData(FALSE);
}



/*void CHMSTreatmentTrackingDiseaseDialog::OnNumberDateChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNumberDateSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNumberDateKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnNumberDateCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if (m_nNumberDate >0 && m_nNumberDate <=31 && pMF->GetCurrentDepartmentID() == _T("A15 NEW"))
		return 1;

	else if(m_nNumberDate < 0 || m_nNumberDate >5)
		return -1;	
	return 0;
}
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiseaseTrackingChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiseaseTrackingSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiseaseTrackingKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnDiseaseTrackingCheckValue(){
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiagnosisIdentifyChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiagnosisIdentifySetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiagnosisIdentifyKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnDiagnosisIdentifyCheckValue(){
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnNextPlanChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNextPlanSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNextPlanKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnNextPlanCheckValue(){
	return 0;
} 
void CHMSTreatmentTrackingDiseaseDialog::OnParaclinicalResultButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTrackingDiseaseDialog::OnSelectFromOrderSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnParaclinicResChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnParaclinicResSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnParaclinicResKillfocus(){
	
} */
void CHMSTreatmentTrackingDiseaseDialog::OnLyDoChuyenSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSTreatmentTrackingDiseaseDialog::OnYesSelect()
{
	UpdateData(true);
	m_wndLyDoChuyen.SetReadOnly(false);
	m_nYes = 0;
	m_nNo = 1;
	UpdateData(false);
}
void CHMSTreatmentTrackingDiseaseDialog::OnNoSelect()
{
	UpdateData(true);
	m_wndLyDoChuyen.SetReadOnly(true);
	m_nYes = 1;
	m_nNo = 0;
	UpdateData(false);
	
}
long CHMSTreatmentTrackingDiseaseDialog::OnLyDoChuyenLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndLyDoChuyen.IsSearchKey() && !m_szLyDoChuyenKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szLyDoChuyenKey);
	}

	m_wndLyDoChuyen.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ") \
		         _T("FROM sys_sel WHERE 1=1 and ss_id='hms_lydochuyen_ksdt' %s ") \
				 _T("ORDER BY cast(ss_code as integer)"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLyDoChuyen.AddItems
	(
			rs.GetValue(_T("id")), 			
			rs.GetValue(_T("name")),NULL);
		
		rs.MoveNext();
	}
	return 0;
}
#include "HMSThietLap_LyDoChuyen_KSDT.h"
void CHMSTreatmentTrackingDiseaseDialog::OnLyDoSelect()
{
	CHMSThietLap_LyDoChuyen_KSDT dlg(this, m_nTreatIdx);
	dlg.DoModal();
}
int CHMSTreatmentTrackingDiseaseDialog::OnParaclinicResCheckValue(){
	return 0;
} 
void CHMSTreatmentTrackingDiseaseDialog::OnDietSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTrackingDiseaseDialog::OnDietSelendok(){
	 
}
/*void CHMSTreatmentTrackingDiseaseDialog::OnDietSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDietKillfocus(){
	
} */
long CHMSTreatmentTrackingDiseaseDialog::OnDietLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter = _T(" and ss_isactive = 'Y'");
	return pMF->LoadSelectionList(&m_wndDiet, _T("HMS_DIET_MODE"), m_szDietKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiet.IsSearchKey() && !m_szDietKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDietKey
};
	m_wndDiet.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiet.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnDietAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void CHMSTreatmentTrackingDiseaseDialog::OnNurseAssistanceChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNurseAssistanceSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNurseAssistanceKillfocus(){
	
} */

#include "HMSSelectionListDialog.h"
void CHMSTreatmentTrackingDiseaseDialog::OnNurseAssistanceSelect()
{
	CHMSSelectionListDialog dlg(this);
	dlg.m_szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel where ss_id='HMS_CHEDOHOLY' ORDER BY ss_index, ss_code, ss_desc "));
	if(dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		m_szNurseAssistance.Empty();
		for (int i =0; i < dlg.m_arraySelection.GetCount();i++)
		{
			if(!m_szNurseAssistance.IsEmpty())
			{
				m_szNurseAssistance += _T("; ");
			}
			m_szNurseAssistance.AppendFormat(_T("%s"), dlg.GetSelectionName(i));
			
		}
		UpdateData(FALSE);
	}
}

int CHMSTreatmentTrackingDiseaseDialog::OnNurseAssistanceCheckValue(){
	return 0;
} 

void CHMSTreatmentTrackingDiseaseDialog::OnInputPulseTemperatureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szFlag = _T("N");
	UpdateData(TRUE);
	if(m_bInputPulseTemperature)
	{
		szFlag = _T("Y");
	}
	else
	{
		m_nPulse = 0;
		m_nTemperature = 0;
		m_nBreathingRate = 0;
		m_nBloodPressure = 0;
		UpdateData(FALSE);
	}
	szSQL.Format(_T("AD_SETTINGS_CREATE('INPUT_PULSETEMPERATURE', '%s','%s', '%s') "),
		pMF->m_szDept, pMF->GetCurrentUser(), szFlag);
	pMF->ExecDML(szSQL);
	EnableInputPulse(m_bInputPulseTemperature);

}

void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectSelendok(){
	 UpdateData(TRUE);
	 m_nPulse = str2int(m_wndTemperatureSelect.GetCurrent(2));
	 m_nTemperature = str2float(m_wndTemperatureSelect.GetCurrent(3));
	 CString tmpStr;
	 tmpStr = m_wndTemperatureSelect.GetCurrent(4);
	 m_nBloodPressure = m_nBloodPressureHight = 0;
	 parseBloodPresure(tmpStr, m_nBloodPressure, m_nBloodPressureHight);
	 m_nBreathingRate = str2int(m_wndTemperatureSelect.GetCurrent(5));
	UpdateData(FALSE);
}


/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectSetfocus(){
	
}*/
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectKillfocus(){
	
}*/
long CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTemperatureSelect.IsSearchKey() && str2long(m_szTemperatureSelectKey) > 0){
		 szWhere.Format(_T(" and hci_idx=%ld "), str2long(m_szTemperatureSelectKey));
	};

	m_wndTemperatureSelect.DeleteAllItems(); 
	int nCount = 0;
	
	szWhere.AppendFormat(_T(" and hci_docno=%ld "), m_nDocumentNo);
	szWhere.AppendFormat(_T(" and hci_deptid='%s' "), pMF->m_szDept);

	szSQL.Format(_T(" SELECT hci_idx                 AS stt,") \
_T("   TO_CHAR(hci_date, 'HH24:MI') AS thoigian,") \
_T("   hci_pulse                    AS mach,") \
_T("   hci_temperature              AS nhietdo,") \
_T("   hci_bloodpressure") \
_T("   ||'/'") \
_T("   ||hci_bloodpressurex AS huyetap,") \
_T("   hci_breathinterval   AS nhiptho") \
_T(" FROM hms_careinfo") \
_T(" WHERE TRUNC(hci_date) = TRUNC(sysdate)") \
_T(" %s ") \
_T(" and hci_date < systimestamp ") \
_T(" AND hci_type ='CS'") \
_T(" AND hci_pulse+hci_bloodpressure+hci_bloodpressurex+hci_breathinterval > 0") \

_T(" ORDER BY hci_date"), szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTemperatureSelect.AddItems(
			rs.GetValue(_T("stt")),
			rs.GetValue(_T("thoigian")), 
			rs.GetValue(_T("mach")), 
			rs.GetValue(_T("nhietdo")), 
			rs.GetValue(_T("huyetap")), 
			rs.GetValue(_T("nhiptho")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnPulseChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnPulseSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnPulseKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnPulseCheckValue(){
	if(m_nPulse <= 0 || m_nPulse > 200)
		return -1;

	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnTemperatureCheckValue(){
	if(m_nTemperature < 35 || m_nTemperature > 42)
		return -1;
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureCheckValue(){
	if(m_nBloodPressure <= 0 || m_nBloodPressure > 300)
		return -1;
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureHightChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureHightSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureHightKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureHightCheckValue(){
	if(m_nBloodPressureHight < m_nBloodPressure)
		return -1;
	if(m_nBloodPressureHight > 300)
		return -1;

	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateCheckValue(){
	if(m_nBreathingRate <= 0 || m_nBreathingRate > 100)
		return -1;
	return 0;
} 
void CHMSTreatmentTrackingDiseaseDialog::OnDeanNoteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSTreatmentTrackingDiseaseDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSTreatmentTrackingDiseaseDialog() > 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CHMSTreatmentTrackingDiseaseDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}


void CHMSTreatmentTrackingDiseaseDialog::OnParaclinicResultButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSParaclinicResultDialog dlg(this, m_nDocumentNo, true);
	if(dlg.DoModal() == IDOK)
	{
		m_szParaclinicRes = dlg.m_szData;
		UpdateData(FALSE);
	}
}


int CHMSTreatmentTrackingDiseaseDialog::OnAddHMSTreatmentTrackingDiseaseDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentTrackingDiseaseDialog::OnEditHMSTreatmentTrackingDiseaseDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hsie_locked FROM hms_siexam WHERE hsie_docno=%ld and hsie_idx=%ld"),
		m_nDocumentNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return 0;
	}
	CString szLocked;
	rs.GetValue(_T("hsie_locked"), szLocked);
	if(szLocked == _T("Y"))
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không cho phép sửa đổi thông tin"));
		return -1;
	}

 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentTrackingDiseaseDialog::OnDeleteHMSTreatmentTrackingDiseaseDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	CRecord rs(&pMF->m_db);
	
	szSQL.Format(_T("SELECT hsie_locked FROM hms_siexam WHERE hsie_docno=%ld and hsie_idx=%ld"),
		m_nDocumentNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return 0;
	}
	CString szLocked;
	rs.GetValue(_T("hsie_locked"), szLocked);
	if(szLocked == _T("Y"))
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không cho phép thay đổi thông tin"));
		return -1;
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("HMS_SIEXAM(%ld,%ld,'%s')"),
		m_nDocumentNo, m_nTreatIdx, pMF->GetCurrentUser());

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSTreatmentTrackingDiseaseDialog();
 	}
	else
	{

	}
	return 0;
}
int CHMSTreatmentTrackingDiseaseDialog::OnSaveHMSTreatmentTrackingDiseaseDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;


 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL; 
	szSQL.Format(_T("HMS_SIEXAM_UPDATE(%s) "), m_hms_siexamTbl.FormatSQL());
 
 	int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
 	if(ret > 0)
	
 	{
		if(m_nNumberDate > 1)
		{
			m_hms_siexamTbl.SetValue(_T("hsie_treatidx"), 0);
			
			m_hms_siexamTbl.SetValue(_T("hsie_pulse"), 0);
			m_hms_siexamTbl.SetValue(_T("hsie_desc"), _T(""));
			m_hms_siexamTbl.SetValue(_T("hsie_para_res"), _T(""));
			m_hms_siexamTbl.SetValue(_T("hsie_temperature"), 0);

			m_hms_siexamTbl.SetValue(_T("hsie_bloodpressure"), 0);
			m_hms_siexamTbl.SetValue(_T("hsie_bloodpressurex"), 0);
			m_hms_siexamTbl.SetValue(_T("hsie_breathinterval"), 0);
			m_hms_siexamTbl.SetValue(_T("hsie_weight"), 0);
			m_hms_siexamTbl.SetValue(_T("hsie_height"), 0);
			m_hms_siexamTbl.SetValue(_T("hsie_diet"), m_szDietKey);

			CString szDate;
			CDate dte;
			dte.ParseDate(m_szDate.Left(10));
			CRecord rs(&pMF->m_db);
			for (int i = 1; i <= m_nNumberDate; i++)
			{
				CString szSQL; 
				szDate.Format(_T("%s 06:00:00"), dte.GetDate(yyyymmdd));
				m_hms_siexamTbl.SetValue(_T("hsie_date"), szDate);
				szSQL.Format(_T("SELECT count(*) FROM hms_siexam ") \
					_T("WHERE hsie_docno=%ld and trunc(hsie_date) = TO_DATE('%s', 'YYYY-MM-DD') and trunc(hsie_date) >= trunc(sysdate) "), 
					m_nDocumentNo, dte.GetDate(yyyymmdd));

				rs.ExecSQL(szSQL);
				if(rs.GetIntValue() <= 0)
				{
					szSQL.Format(_T("HMS_SIEXAM_UPDATE(%s) "), m_hms_siexamTbl.FormatSQL());
		 			pMF->ExecDML(szSQL);
				}
				dte ++;

			}
		}
		//if (pMF->GetCurrentUser() == _T("admin"))
		if (pMF->m_UserInfo.su_groupid == _T("A") && pMF->CheckPermission(_T("admin.TM.100.1")))
		{
			TCHAR  infoBuf[INFO_BUFFER_SIZE];
			DWORD  bufCharCount = INFO_BUFFER_SIZE;
		 
			// Get and display the name of the computer. 
			bufCharCount = INFO_BUFFER_SIZE;
			GetComputerName( infoBuf, &bufCharCount );
			//_tprintf(_T("%s"), infoBuf);
			szSQL.Format(_T(" INSERT INTO HMS_SIEXAM_HISLOG ") \
				_T("VALUES(%ld, %ld,'%s',TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'),'%s', '%s') ")
				, m_nDocumentNo, m_nTreatIdx, pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->GetLocalIP(), infoBuf);
			pMF->ExecSQL(szSQL);	
		}
 		//OnHMSTreatmentTrackingDiseaseDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
		
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentTrackingDiseaseDialog::OnCancelHMSTreatmentTrackingDiseaseDialog(){
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
int CHMSTreatmentTrackingDiseaseDialog::OnHMSTreatmentTrackingDiseaseDialogListLoadData(){
	return 0;
}

void CHMSTreatmentTrackingDiseaseDialog::EnableInputPulse(BOOL bFlag)
{
	EnableControls(bFlag);
	m_wndDiseaseTracking.EnableWindow(TRUE);
	m_wndDiet.EnableWindow(TRUE);
	m_wndParaclinicRes.EnableWindow(TRUE);
	m_wndNurseAssistance.EnableWindow(TRUE);
	m_wndTemperatureSelect.EnableWindow(TRUE);
	m_wndInputPulseTemperature.EnableWindow(TRUE);
	
}
