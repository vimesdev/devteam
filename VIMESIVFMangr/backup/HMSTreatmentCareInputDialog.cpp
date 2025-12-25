#include "HMSTreatmentCareInputDialog.h"
#include "MainFrm.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnDateCheckValue();
}
static void _OnNormalSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentCareInputDialog*)pWnd)->OnNormalSelect();
}
static void _On6hSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentCareInputDialog*)pWnd)->On6hSelect();
}
static void _On18hSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentCareInputDialog*)pWnd)->On18hSelect();
}
static void _On25hSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentCareInputDialog*)pWnd)->On25hSelect();
}
static void _OnOperationNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentCareInputDialog* )pWnd)->OnOperationNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationNameSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnOperationNameSelendok();
}
/*static void _OnOperationNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnOperationNameKillfocus();
}*/
/*static void _OnOperationNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnOperationNameKillfocus();
}*/
static long _OnOperationNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnOperationNameLoadData();
}
/*static void _OnOperationNameAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnOperationNameAddNew();
}*/
static void _OnNumberDateLabelClickFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnNumberDateLabelClick();
}
static int _OnNumberDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnNumberDateCheckValue();
}


/*static void _OnDiseaseTrackingChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnDiseaseTrackingChange();
} */
/*static void _OnDiseaseTrackingSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnDiseaseTrackingSetfocus();} */ 
/*static void _OnDiseaseTrackingKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnDiseaseTrackingKillfocus();
} */
static int _OnDiseaseTrackingCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnDiseaseTrackingCheckValue();
} 
/*static void _OnPatientTakeCareChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnPatientTakeCareChange();
} */
/*static void _OnPatientTakeCareSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnPatientTakeCareSetfocus();} */ 
/*static void _OnPatientTakeCareKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnPatientTakeCareKillfocus();
} */
static int _OnPatientTakeCareCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnPatientTakeCareCheckValue();
} 
/*static void _OnCareChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnCareChange();
} */
/*static void _OnCareSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnCareSetfocus();} */ 
/*static void _OnCareKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnCareKillfocus();
} */
static int _OnCareCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnCareCheckValue();
} 
/*
static void _OnInputPulseTemperatureSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentCareInputDialog*)pWnd)->OnInputPulseTemperatureSelect();
}
*/
/*static void _OnPulseChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnPulseChange();
} */
/*static void _OnPulseSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnPulseSetfocus();} */ 
/*static void _OnPulseKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnPulseKillfocus();
} */
static int _OnPulseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnPulseCheckValue();
} 
/*static void _OnTemperatureChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnTemperatureChange();
} */
/*static void _OnTemperatureSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnTemperatureSetfocus();} */ 
/*static void _OnTemperatureKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnTemperatureKillfocus();
} */
static int _OnTemperatureCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnTemperatureCheckValue();
} 
/*static void _OnBloodPressureChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBloodPressureChange();
} */
/*static void _OnBloodPressureSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBloodPressureSetfocus();} */ 
/*static void _OnBloodPressureKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBloodPressureKillfocus();
} */
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnBloodPressureCheckValue();
} 
/*static void _OnBloodPressureHightChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBloodPressureHightChange();
} */
/*static void _OnBloodPressureHightSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBloodPressureHightSetfocus();} */ 
/*static void _OnBloodPressureHightKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBloodPressureHightKillfocus();
} */
static int _OnBloodPressureHightCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnBloodPressureHightCheckValue();
} 
/*static void _OnBreathingRateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBreathingRateChange();
} */
/*static void _OnBreathingRateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBreathingRateSetfocus();} */ 
/*static void _OnBreathingRateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnBreathingRateKillfocus();
} */
static int _OnBreathingRateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnBreathingRateCheckValue();
} 
/*static void _OnSP02ChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnSP02Change();
} */
/*static void _OnSP02SetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnSP02Setfocus();} */ 
/*static void _OnSP02KillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareInputDialog *)pWnd)->OnSP02Killfocus();
} */
static int _OnSP02CheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnSP02CheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareInputDialog *pVw = (CHMSTreatmentCareInputDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareInputDialog *pVw = (CHMSTreatmentCareInputDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentCareInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareInputDialog*)pWnd)->OnAddHMSTreatmentCareInputDialog();
} 
static int _OnEditHMSTreatmentCareInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareInputDialog*)pWnd)->OnEditHMSTreatmentCareInputDialog();
} 
static int _OnDeleteHMSTreatmentCareInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareInputDialog*)pWnd)->OnDeleteHMSTreatmentCareInputDialog();
} 
static int _OnSaveHMSTreatmentCareInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareInputDialog*)pWnd)->OnSaveHMSTreatmentCareInputDialog();
} 
static int _OnCancelHMSTreatmentCareInputDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareInputDialog*)pWnd)->OnCancelHMSTreatmentCareInputDialog();
}
static int _OnDauhieunhiemkhuanCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareInputDialog *)pWnd)->OnDauhieunhiemkhuanCheckValue();
}
static void _Ondanhmucnhiemkhuan108SelectFnc(CWnd *pWnd)
{
	CHMSTreatmentCareInputDialog *pVw = (CHMSTreatmentCareInputDialog *)pWnd;
	pVw->Ondanhmucnhiemkhuan108Select();

}
CHMSTreatmentCareInputDialog::CHMSTreatmentCareInputDialog(CWnd *pParent, int nMode, long nDocumentNo, long nUID):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nTreatIdx = nUID;
	m_nDlgWidth = 485;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_nDocumentNo = nDocumentNo;
	m_nPrintCount = 0;
}

CHMSTreatmentCareInputDialog::~CHMSTreatmentCareInputDialog()
{
}
void CHMSTreatmentCareInputDialog::OnCreateComponents()
{
	/*m_wndDateLabel.Create(this, _T("Ng\xE0y gi\x1EDD"), 5, 5, 125, 30);
	m_wndDate.Create(this,130, 5, 250, 30); 
	m_wndNormal.Create(this, _T("Normal"), 5, 35, 125, 60);
	m_wndSauPT.Create(this, _T("Sau PT"), 130, 35, 210, 60);
	m_wnd6h.Create(this, _T("\x36 gi\x1EDD \x111\x1EA7u"), 215, 35, 335, 60);
	m_wnd18h.Create(this, _T("\x31\x38 gi\x1EDD ti\x1EBFp"), 340, 35, 460, 60);
	m_wnd25h.Create(this, _T("S\x61u \x32\x35 gi\x1EDD"), 465, 35, 585, 60);
	m_wndOperationNameLabel.Create(this, _T("Operation Name"), 5, 65, 125, 90);
	m_wndOperationName.Create(this,130, 65, 700, 90); 
	m_wndDiseaseTrackingLabel.Create(this, _T("\x44i\x1EC5n \x62i\x1EBFn"), 5, 95, 315, 120);
	m_wndDiseaseTracking.Create(this,5, 124, 700, 250, 1, 0, 1); 
	m_wndPatientTakeCareGroup.Create(this, _T("Th\x1EF1\x63 hi\x1EC7n \x63h\x103m s\xF3\x63"), 5, 255, 315, 280);
	m_wndPatientTakeCare.Create(this,5, 285, 700, 411, 1, 0, 1); 
	m_wndDauhieunhiemkhuanLabel.Create(this, _T("Dấu hiệu nhiễm khuẩn Bệnh Viện"), 5, 416, 315, 441);	
	m_wndDauhieunhiemkhuan.Create(this,5, 446, 700, 494, 1, 0, 1);  
	m_wndPulseLabel.Create(this, _T("M\x1EA1\x63h"), 5, 501, 125, 526);
	m_wndPulse.Create(this,130, 501, 240, 526); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 245, 501, 349, 526);
	m_wndTemperature.Create(this,354, 501, 421, 526); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 5, 531, 125, 556);
	m_wndBloodPressure.Create(this,130, 531, 175, 556); 
	m_wndLabelSpec.Create(this, _T("/"), 180, 531, 190, 556);
	m_wndBloodPressureHight.Create(this,195, 531, 240, 556); 
	m_wndBreathingRateLabel.Create(this, _T("Breathing rate"), 245, 531, 349, 556);
	m_wndBreathingRate.Create(this,354, 531, 421, 556); 
	m_wndSP02Label.Create(this, _T("SP02"), 426, 531, 500, 556);
	m_wndSP02.Create(this,505, 531, 600, 556); 
	m_wndSave.Create(this, _T("&Save"), 440, 561, 520, 586);
	m_wndClose.Create(this, _T("&Close"), 525, 561, 605, 586);*/

	m_wndDateLabel.Create(this, _T("Ng\xE0y gi\x1EDD"), 5, 5, 125, 30);
	m_wndDate.Create(this,130, 5, 250, 30); 
	m_wndNormal.Create(this, _T("Normal"), 5, 35, 125, 60);
	m_wndSauPT.Create(this, _T("Sau PT"), 130, 35, 210, 60);
	m_wnd6h.Create(this, _T("\x36 gi\x1EDD \x111\x1EA7u"), 215, 35, 335, 60);
	m_wnd18h.Create(this, _T("\x31\x38 gi\x1EDD ti\x1EBFp"), 340, 35, 460, 60);
	m_wnd25h.Create(this, _T("S\x61u \x32\x35 gi\x1EDD"), 465, 35, 585, 60);
	m_wndOperationNameLabel.Create(this, _T("Operation Name"), 5, 65, 125, 90);
	m_wndOperationName.Create(this,130, 65, 700, 90); 
	m_wndDiseaseTrackingLabel.Create(this, _T("\x44i\x1EC5n \x62i\x1EBFn"), 5, 95, 315, 120);
	m_wndDiseaseTracking.Create(this,5, 124, 700, 250, 1, 0, 1); 
	m_wndPatientTakeCareGroup.Create(this, _T("Th\x1EF1\x63 hi\x1EC7n \x63h\x103m s\xF3\x63"), 5, 255, 315, 280);
	m_wndPatientTakeCare.Create(this,5, 285, 700, 411, 1, 0, 1); 
	m_wndDauhieunhiemkhuanLabel.Create(this, _T("Dấu hiệu nhiễm khuẩn Bệnh Viện"), 5, 416, 315, 441);
	m_wndDauhieunhiemkhuan.Create(this,5, 446, 700, 494, 1, 0, 1); 
	m_wndPulseLabel.Create(this, _T("M\x1EA1\x63h"), 5, 501, 125, 526);
	m_wndPulse.Create(this,130, 501, 240, 526); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 245, 501, 349, 526);
	m_wndTemperature.Create(this,354, 501, 421, 526); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 5, 531, 125, 556);
	m_wndBloodPressure.Create(this,130, 531, 175, 556); 
	m_wndLabelSpec.Create(this, _T("/"), 180, 531, 190, 556);
	m_wndBloodPressureHight.Create(this,195, 531, 240, 556); 
	m_wndBreathingRateLabel.Create(this, _T("Breathing rate"), 245, 531, 349, 556);
	m_wndBreathingRate.Create(this,354, 531, 421, 556); 
	m_wndSP02Label.Create(this, _T("SP02"), 426, 531, 500, 556);
	m_wndSP02.Create(this,505, 531, 600, 556); 
	m_wndSave.Create(this, _T("&Save"), 440, 561, 520, 586);
	m_wndClose.Create(this, _T("&Close"), 525, 561, 605, 586);
	m_wnddanhmucnhiemkhuan108.Create(this, _T("Danh mục dấu hiệu nhiễm khuẩn bệnh viện"), 322, 416, 700, 441);	
}
void CHMSTreatmentCareInputDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
// 	m_wndDiseaseTracking.SetLimitText(2000);
// 	m_wndDiseaseTracking.SetCheckValue(true);
// 	m_wndPulse.SetLimitText(5);
// 	m_wndPulse.SetCheckValue(false);
// 	m_wndTemperature.SetLimitText(5);
// 	m_wndTemperature.SetCheckValue(false);
// 	m_wndBloodPressure.SetLimitText(8);
// 	m_wndBloodPressure.SetCheckValue(false);
// 	m_wndBreathingRate.SetLimitText(5);
// 	m_wndBreathingRate.SetCheckValue(false);
// 	m_wndSP02.SetLimitText(5);
// 	m_wndSP02.SetCheckValue(false);
	m_wndOperationName.SetCheckValue(true);
	//m_wndDauhieunhiemkhuanLabel.SetHyperlink(true);	
	m_wndDauhieunhiemkhuanLabel.SetTextColor(255);
//	m_wndBloodPressure.SetMask(_T("###/###"));
	m_hms_careinfoTbl.SetTableName(_T("HMS_CAREINFO"));
	m_hms_careinfoTbl.AddField(_T("hci_createdby"), dfText, 15); 
	m_hms_careinfoTbl.AddField(_T("hci_patientno"), dfLong); 
	m_hms_careinfoTbl.AddField(_T("hci_docno"), dfLong); 
	m_hms_careinfoTbl.AddField(_T("hci_deptid"), dfText, 7); 
	m_hms_careinfoTbl.AddField(_T("hci_refidx"), dfInteger);	
	m_hms_careinfoTbl.AddField(_T("hci_roomid"), dfInteger); 
	m_hms_careinfoTbl.AddField(_T("hci_bedid"), dfInteger); 
	m_hms_careinfoTbl.AddField(_T("hci_treatidx"), dfLong); 
	m_hms_careinfoTbl.AddField(_T("hci_date"), dfDateTime); 
	m_hms_careinfoTbl.AddField(_T("hci_doctor"), dfText, 15); 
	m_hms_careinfoTbl.AddField(_T("hci_nurse"), dfText, 15); 
	m_hms_careinfoTbl.AddField(_T("hci_disease"), dfText, 1024); 
	m_hms_careinfoTbl.AddField(_T("hci_care"), dfText, 1024); 
	m_hms_careinfoTbl.AddField(_T("hci_pulse"), dfInteger); 
	m_hms_careinfoTbl.AddField(_T("hci_temperature"), dfDouble); 
	m_hms_careinfoTbl.AddField(_T("hci_bloodpressure"), dfInteger); 
	m_hms_careinfoTbl.AddField(_T("hci_bloodpressurex"), dfInteger); 
	m_hms_careinfoTbl.AddField(_T("hci_breathinterval"),dfInteger);
	m_hms_careinfoTbl.AddField(_T("hci_sp02"),dfInteger);
	m_hms_careinfoTbl.AddField(_T("hci_type"),dfText, 3);
	m_hms_careinfoTbl.AddField(_T("hci_reference"),dfText, 30);
	m_hms_careinfoTbl.AddField(_T("hci_treattime"),dfInteger);
	m_hms_careinfoTbl.AddField(_T("hci_refsiexam"),dfLong);
	m_hms_careinfoTbl.AddField(_T("HCI_DAUHIEUNHIEMKHUAN"),dfText, 254);	

	//m_wndInputPulseTemperature.ModifyStyle(WS_TABSTOP, 0);
	m_wndDate.ModifyStyle(WS_TABSTOP, 0);

	m_wndOperationName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOperationName.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndOperationName.InsertColumn(2, _T("Fee ID"), CFMT_TEXT, 100);
	
}
void CHMSTreatmentCareInputDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndNormal.SetEvent(WE_CLICK, _OnNormalSelectFnc);
	m_wnd6h.SetEvent(WE_CLICK, _On6hSelectFnc);
	m_wnd18h.SetEvent(WE_CLICK, _On18hSelectFnc);
	m_wnd25h.SetEvent(WE_CLICK, _On25hSelectFnc);
	m_wndOperationName.SetEvent(WE_SELENDOK, _OnOperationNameSelendokFnc);
	//m_wndOperationName.SetEvent(WE_SETFOCUS, _OnOperationNameSetfocusFnc);
	//m_wndOperationName.SetEvent(WE_KILLFOCUS, _OnOperationNameKillfocusFnc);
	m_wndOperationName.SetEvent(WE_SELCHANGE, _OnOperationNameSelectChangeFnc);
	m_wndOperationName.SetEvent(WE_LOADDATA, _OnOperationNameLoadDataFnc);
	//m_wndDiseaseTracking.SetEvent(WE_CHANGE, _OnDiseaseTrackingChangeFnc);
	//m_wndDiseaseTracking.SetEvent(WE_SETFOCUS, _OnDiseaseTrackingSetfocusFnc);
	//m_wndDiseaseTracking.SetEvent(WE_KILLFOCUS, _OnDiseaseTrackingKillfocusFnc);
	m_wndDiseaseTracking.SetEvent(WE_CHECKVALUE, _OnDiseaseTrackingCheckValueFnc);
	//m_wndPatientTakeCare.SetEvent(WE_CHANGE, _OnPatientTakeCareChangeFnc);
	//m_wndPatientTakeCare.SetEvent(WE_SETFOCUS, _OnPatientTakeCareSetfocusFnc);
	//m_wndPatientTakeCare.SetEvent(WE_KILLFOCUS, _OnPatientTakeCareKillfocusFnc);
	m_wndPatientTakeCare.SetEvent(WE_CHECKVALUE, _OnPatientTakeCareCheckValueFnc);
	//m_wndInputPulseTemperature.SetEvent(WE_CLICK, _OnInputPulseTemperatureSelectFnc);
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
	//m_wndSP02.SetEvent(WE_CHANGE, _OnSP02ChangeFnc);
	//m_wndSP02.SetEvent(WE_SETFOCUS, _OnSP02SetfocusFnc);
	//m_wndSP02.SetEvent(WE_KILLFOCUS, _OnSP02KillfocusFnc);
	m_wndSP02.SetEvent(WE_CHECKVALUE, _OnSP02CheckValueFnc);
	//m_wndInputPulseTemperature.SetEvent(WE_CLICK, _OnInputPulseTemperatureSelectFnc);
	m_wndDauhieunhiemkhuan.SetEvent(WE_CHECKVALUE, _OnDauhieunhiemkhuanCheckValueFnc);
	m_wnddanhmucnhiemkhuan108.SetEvent(WE_CLICK, _Ondanhmucnhiemkhuan108SelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

	CDate fDate, tDate, dte, curDate;
	fDate.ParseDate(pMF->GetSysDate());
	tDate.ParseDate(pMF->GetSysDate());
	curDate.ParseDate(pMF->GetSysDate());

	CRecord rs(&pMF->m_db);
	CString szSQL, szgroupid;
	szSQL.Format(_T("SELECT su_groupid as groupid FROM sys_user WHERE su_userid = '%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("groupid"), szgroupid);
	
	if(szgroupid == _T("A") && pMF->CheckPermission(_T("admin.TM.100.1")))
	
	{
		fDate -= 365;
		tDate += 365;
	}
	else
	{
		fDate -= 7;
		tDate += 7;
	}	
		
	dte.ParseDate(m_szDate.Left(10));
	
	if(dte < fDate || dte > tDate)
	{
		m_wndDate.EnableWindow(FALSE);
		m_wndSave.EnableWindow(FALSE);
	}
	

}
void CHMSTreatmentCareInputDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Radio(pDX, m_wndNormal.GetDlgCtrlID(), m_nNormal);
	DDX_TextEx(pDX, m_wndOperationName.GetDlgCtrlID(), m_szOperationNameKey);
	DDX_Text(pDX, m_wndDiseaseTracking.GetDlgCtrlID(), m_szDiseaseTracking);
	DDX_Text(pDX, m_wndPatientTakeCare.GetDlgCtrlID(), m_szPatientTakeCare);
	//DDX_Check(pDX, m_wndInputPulseTemperature.GetDlgCtrlID(), m_bInputPulseTemperature);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_nBloodPressure);
	DDX_Text(pDX, m_wndBloodPressureHight.GetDlgCtrlID(), m_nBloodPressureHight);
	DDX_Text(pDX, m_wndBreathingRate.GetDlgCtrlID(), m_nBreathingRate);
	DDX_Text(pDX, m_wndSP02.GetDlgCtrlID(), m_nSP02);
	DDX_Text(pDX, m_wndDauhieunhiemkhuan.GetDlgCtrlID(), m_szDauhieunhiemkhuan);
	
}
void CHMSTreatmentCareInputDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szHpt;
	szSQL.Format(_T("SELECT hci_createdby, hci_date, hci_disease, hci_care, hci_pulse, hci_temperature, hci_bloodpressure, ") \
		_T(" hci_bloodpressurex, hci_breathinterval, hci_sp02, hci_printcount, REGEXP_SUBSTR(hci_reference,'[^|_]+',1,2) AS hpt,") \
		_T(" REGEXP_SUBSTR(hci_reference,'[^|]+',1,2) AS pttt, HCI_DAUHIEUNHIEMKHUAN as dauhieunhiemkhuan FROM HMS_CAREINFO where hci_docno = %ld and hci_idx = %d ")
		, m_nDocumentNo, m_nTreatIdx);	
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF()){		
		rs.GetValue(_T("hci_createdby"), m_szCreatedBy);
		rs.GetValue(_T("hci_date"), m_szDate);
		rs.GetValue(_T("hci_disease"), m_szDiseaseTracking);
		rs.GetValue(_T("hci_care"), m_szPatientTakeCare);
		rs.GetValue(_T("hci_pulse"), m_nPulse);
		rs.GetValue(_T("hci_temperature"), m_nTemperature),
		rs.GetValue(_T("hci_bloodpressure"), m_nBloodPressure);
		rs.GetValue(_T("hci_bloodpressurex"), m_nBloodPressureHight);
		rs.GetValue(_T("hci_breathinterval"), m_nBreathingRate);
		rs.GetValue(_T("hci_sp02"), m_nSP02);
		rs.GetValue(_T("hci_printcount"), m_nPrintCount);
		rs.GetValue(_T("pttt"), m_szOperationNameKey);
		rs.GetValue(_T("hpt"), szHpt);
		rs.GetValue(_T("dauhieunhiemkhuan"), m_szDauhieunhiemkhuan);
		_debug(_T("%s"), szHpt);
		if(szHpt == _T("6H"))
			m_nNormal = 1;
		else if(szHpt == _T("18H"))
			m_nNormal = 2;
		else if(szHpt == _T("25H"))
			m_nNormal = 3;
		else 
			m_nNormal = 0;
		SetMode(VM_VIEW);
	}
/*
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
*/
	


}
int CHMSTreatmentCareInputDialog::OnDauhieunhiemkhuanCheckValue()
{
	return 0;
}
#include "HMSExpandSelectionListDialog.h"
void CHMSTreatmentCareInputDialog::Ondanhmucnhiemkhuan108Select()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSExpandSelectionListDialog dlg(this);	
	dlg.m_szSQL.Format(_T("SELECT sp_id as id, sp_name as name, ss_desc as groupname FROM sys_DanhMucNhiemKhuanBenhVien LEFT JOIN sys_sel ON (SP_GROUP=ss_code) WHERE 1= 1 AND ss_id='sys_phanloai_nhomnk' ORDER BY sp_group, sp_id"));
	if(dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		m_szDauhieunhiemkhuan.Empty();
		for (int i =0; i < dlg.m_arraySelection.GetCount();i++)
		{
			if(!m_szDauhieunhiemkhuan.IsEmpty())
			{
				m_szDauhieunhiemkhuan += _T("; ");
			}
			m_szDauhieunhiemkhuan.AppendFormat(_T("%s"), dlg.GetSelectionName(i));
			
		}
		UpdateData(FALSE);
	}
	
} 
void CHMSTreatmentCareInputDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	long nTreatIdx = 0;
	szSQL.Format(_T("SELECT hsie_idx as treat_idx") \
				_T(" FROM hms_siexam ") \
				_T(" WHERE hsie_docno=%ld ") \
				_T(" and trunc_date(hsie_date) = trunc_date(sysdate) ") \
				_T(" order by hsie_date desc"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	rs.GetValue(_T("treat_idx"), nTreatIdx);
	m_hms_careinfoTbl.SetValue(_T("hci_createdby"), pMF->GetCurrentUser());
	m_hms_careinfoTbl.SetValue(_T("hci_createddate"), pMF->GetSysDateTime());
	m_hms_careinfoTbl.SetValue(_T("hci_patientno"), pMF->m_nPatientNo);
	m_hms_careinfoTbl.SetValue(_T("hci_docno"), pMF->m_nDocumentNo);
	m_hms_careinfoTbl.SetValue(_T("hci_doctor"), pMF->m_szDoctor);
	m_hms_careinfoTbl.SetValue(_T("hci_nurse"), pMF->GetCurrentUser());
	m_hms_careinfoTbl.SetValue(_T("hci_deptid"), pMF->m_szDept);
	m_hms_careinfoTbl.SetValue(_T("hci_roomid"), pMF->GetCurrentRoomID());
	m_hms_careinfoTbl.SetValue(_T("hci_bedid"), pMF->m_nBedID);
	m_hms_careinfoTbl.SetValue(_T("hci_refidx"), pMF->m_nRefIndex);
	m_hms_careinfoTbl.SetValue(_T("hci_treatidx"), m_nTreatIdx);
	m_hms_careinfoTbl.SetValue(_T("hci_date"), m_szDate);
	m_hms_careinfoTbl.SetValue(_T("hci_pulse"), m_nPulse);
	m_hms_careinfoTbl.SetValue(_T("hci_disease"), m_szDiseaseTracking);
	m_hms_careinfoTbl.SetValue(_T("hci_care"), m_szPatientTakeCare);
	m_hms_careinfoTbl.SetValue(_T("hci_temperature"), m_nTemperature);
	m_hms_careinfoTbl.SetValue(_T("hci_bloodpressure"), m_nBloodPressure);
	m_hms_careinfoTbl.SetValue(_T("hci_bloodpressurex"), m_nBloodPressureHight);
	m_hms_careinfoTbl.SetValue(_T("hci_breathinterval"), m_nBreathingRate);
	m_hms_careinfoTbl.SetValue(_T("hci_sp02"), m_nSP02);
	m_hms_careinfoTbl.SetValue(_T("hci_type"), _T("CS"));
	m_hms_careinfoTbl.SetValue(_T("hci_reference"), m_szRefCode);
	m_hms_careinfoTbl.SetValue(_T("hci_treattime"), pMF->GetTreatTime());
	m_hms_careinfoTbl.SetValue(_T("hci_refsiexam"), nTreatIdx);
	m_hms_careinfoTbl.SetValue(_T("HCI_DAUHIEUNHIEMKHUAN"), m_szDauhieunhiemkhuan);
}
void CHMSTreatmentCareInputDialog::SetDefaultValues()
{

	m_szDate.Empty();
	m_nNormal=0;
	m_n6h=1;
	m_n18h=1;
	m_n25h=1;
	m_szDiseaseTracking.Empty();
	m_szPatientTakeCare.Empty();
	m_szCare.Empty();
	//m_bInputPulseTemperature=FALSE;
	m_nPulse=0;
	m_nTemperature=0;
	m_nBloodPressure = 0;
	m_nBloodPressureHight = 0;
	m_nBreathingRate=0;
	m_nSP02=0;
	m_nNumberDate = 1;
	m_bNumberDateSelect = FALSE;
	m_szDauhieunhiemkhuan.Empty();

}
int CHMSTreatmentCareInputDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			SetDefaultValues();
			m_wndOperationName.EnableWindow(FALSE);
			m_szDate = pMF->GetSysDateTime();
			m_nTreatIdx = 0;
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_wndOperationName.EnableWindow(FALSE);
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
// 		if(!m_bInputPulseTemperature)
// 		{
// 			m_wndPulse.EnableWindow(FALSE);
// 			m_wndTemperature.EnableWindow(FALSE);
// 			m_wndBloodPressure.EnableWindow(FALSE);
// 			m_wndBloodPressureHight.EnableWindow(FALSE);
// 			m_wndBreathingRate.EnableWindow(FALSE);
// 			
// 		}
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSTreatmentCareInputDialog::OnDateChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnDateSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnDateKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	CDate fDate, tDate, dte, curDate;
	fDate.ParseDate(pMF->GetSysDate());
	tDate.ParseDate(pMF->GetSysDate());
	curDate.ParseDate(pMF->GetSysDate());
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szgroupid;
	szSQL.Format(_T("SELECT su_groupid as groupid FROM sys_user WHERE su_userid = '%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("groupid"), szgroupid);
	
	if(szgroupid == _T("A") && pMF->CheckPermission(_T("admin.TM.100.1")))
	
	{
		fDate -= 365;
		tDate += 365;
	}
	else
	{
		fDate -= 7;
		tDate += 7;
	}
	dte.ParseDate(m_szDate.Left(10));
	
	if(dte < fDate || dte > tDate)
		return -1;
	if(dte > curDate)
	{
	//	m_szDate.Format(_T("%s 06:00"), dte.GetDate());
//		UpdateData(FALSE);
	}
	return 0;
} 
void CHMSTreatmentCareInputDialog::OnNormalSelect(){
	m_szRefType.Empty();
	m_wndOperationName.EnableWindow(FALSE);
	m_nNormal = 0;
	m_szOperationNameKey.Empty();
	UpdateData(FALSE);
}
void CHMSTreatmentCareInputDialog::On6hSelect(){
	m_szRefType.Format(_T("AFTEROPT_6H"));
	m_wndOperationName.EnableWindow(TRUE);
	m_nNormal = 1;
}
void CHMSTreatmentCareInputDialog::On18hSelect(){
	m_szRefType.Format(_T("AFTEROPT_18H"));
	m_wndOperationName.EnableWindow(TRUE);
	m_nNormal = 1;
	
}
void CHMSTreatmentCareInputDialog::On25hSelect(){
	m_szRefType.Format(_T("AFTEROPT_25H"));
	m_wndOperationName.EnableWindow(TRUE);
	m_nNormal = 1;
}
void CHMSTreatmentCareInputDialog::OnOperationNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szRefCode.Format(_T("%s|%s"), m_szRefType,m_wndOperationName.GetCurrent(0));
	_fmsg(_T("%s"), m_szRefCode);
} 
void CHMSTreatmentCareInputDialog::OnOperationNameSelendok(){
	 
}
/*void CHMSTreatmentCareInputDialog::OnOperationNameSetfocus(){
	
}*/
/*void CHMSTreatmentCareInputDialog::OnOperationNameKillfocus(){
	
}*/
long CHMSTreatmentCareInputDialog::OnOperationNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperationName.IsSearchKey() && !m_szOperationNameKey.IsEmpty()){
	 szWhere.Format(_T(" and ho_idx= %s "), m_szOperationNameKey);
	}
	m_wndOperationName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT to_char(ho_idx, 'FM999999999999') as idx, hfl_name, hfl_feeid ") \
				_T(" FROM hms_operation, hms_fee_list ") \
				_T(" WHERE 1=1 AND ho_docno = %ld %s") \
				_T(" AND ho_itemid  = hfl_feeid "), m_nDocumentNo, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationName.AddItems(
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_feeid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTreatmentCareInputDialog::OnOperationNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentCareInputDialog::OnDiseaseTrackingChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnDiseaseTrackingSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnDiseaseTrackingKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnDiseaseTrackingCheckValue(){
	return 0;
} 
/*void CHMSTreatmentCareInputDialog::OnPatientTakeCareChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnPatientTakeCareSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnPatientTakeCareKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnPatientTakeCareCheckValue(){
	return 0;
} 
/*void CHMSTreatmentCareInputDialog::OnCareChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnCareSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnCareKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnCareCheckValue(){
	return 0;
} 
/*
void CHMSTreatmentCareInputDialog::OnInputPulseTemperatureSelect(){
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
*/
/*void CHMSTreatmentCareInputDialog::OnPulseChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnPulseSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnPulseKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnPulseCheckValue(){
	return 0;
} 
/*void CHMSTreatmentCareInputDialog::OnTemperatureChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnTemperatureSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnTemperatureKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnTemperatureCheckValue(){
	return 0;
} 
/*void CHMSTreatmentCareInputDialog::OnBloodPressureChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnBloodPressureSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnBloodPressureKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnBloodPressureCheckValue(){
	return 0;
} 
/*void CHMSTreatmentCareInputDialog::OnBloodPressureHightChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnBloodPressureHightSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnBloodPressureHightKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnBloodPressureHightCheckValue(){
	return 0;
} 
/*void CHMSTreatmentCareInputDialog::OnBreathingRateChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnBreathingRateSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnBreathingRateKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnBreathingRateCheckValue(){
	return 0;
} 
/*void CHMSTreatmentCareInputDialog::OnSP02Change(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnSP02Setfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnSP02Killfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnSP02CheckValue(){
	return 0;
}
void CHMSTreatmentCareInputDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSTreatmentCareInputDialog() > 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CHMSTreatmentCareInputDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTreatmentCareInputDialog::OnAddHMSTreatmentCareInputDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentCareInputDialog::OnEditHMSTreatmentCareInputDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hci_locked FROM hms_siexam WHERE hci_docno=%ld and hci_idx=%ld"),
		m_nDocumentNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return 0;
	}
	CString szLocked;
	rs.GetValue(_T("hci_locked"), szLocked);
	if(szLocked == _T("Y"))
	{
		ShowMessageBox(_T("Phi\x1EBFu \x111\xE3 \x111\x1B0\x1EE3\x63 kh\xF3\x61. Kh\xF4ng \x63ho ph\xE9p s\x1EED\x61 \x111\x1ED5i th\xF4ng tin"));
		return -1;
	}

 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentCareInputDialog::OnDeleteHMSTreatmentCareInputDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	CRecord rs(&pMF->m_db);
	
	szSQL.Format(_T("SELECT hci_locked FROM hms_siexam WHERE hci_docno=%ld and hci_idx=%ld"),
		m_nDocumentNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return 0;
	}
	CString szLocked;
	rs.GetValue(_T("hci_locked"), szLocked);
	if(szLocked == _T("Y"))
	{
		ShowMessageBox(_T("Phi\x1EBFu \x111\xE3 \x111\x1B0\x1EE3\x63 kh\xF3\x61. Kh\xF4ng \x63ho ph\xE9p th\x61y \x111\x1ED5i th\xF4ng tin"));
		return -1;
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("HMS_SIEXAM(%ld,%ld,'%s')"),
		m_nDocumentNo, m_nTreatIdx, pMF->GetCurrentUser());

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSTreatmentCareInputDialog();
 	}
	else
	{

	}
	return 0;
}
int CHMSTreatmentCareInputDialog::OnSaveHMSTreatmentCareInputDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;


 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	if (pMF->m_UserInfo.su_groupid == _T("A") && pMF->CheckPermission(_T("admin.TM.100.1")))
		{
	szSQL.Format(_T("HMS_CAREINFO_UPDATE_V2_ADMIN(%s) "), m_hms_careinfoTbl.FormatSQL());
		}
	else
		{
	szSQL.Format(_T("HMS_CAREINFO_UPDATE_V2(%s) "), m_hms_careinfoTbl.FormatSQL());
		}

// _msg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		if(m_nNumberDate > 1)
		{
			//m_hms_careinfoTbl.SetValue(_T("hci_treatidx"), 0);
			
			m_hms_careinfoTbl.SetValue(_T("hci_pulse"), 0);
			m_hms_careinfoTbl.SetValue(_T("hci_disease"), _T(""));
			m_hms_careinfoTbl.SetValue(_T("hci_temperature"), 0);

			m_hms_careinfoTbl.SetValue(_T("hci_bloodpressure"), 0);
			m_hms_careinfoTbl.SetValue(_T("hci_bloodpressurex"), 0);
			m_hms_careinfoTbl.SetValue(_T("hci_breathinterval"), 0);
			m_hms_careinfoTbl.SetValue(_T("hci_sp02"), 0);
			m_hms_careinfoTbl.SetValue(_T("hci_weight"), 0);
			m_hms_careinfoTbl.SetValue(_T("hci_height"), 0);
			m_hms_careinfoTbl.SetValue(_T("hci_care"), m_szCare);

			CString szDate;
			CDate dte;
			dte.ParseDate(m_szDate.Left(10));
			CRecord rs(&pMF->m_db);
			for (int i = 1; i <= m_nNumberDate; i++)
			{
				CString szSQL; 
				szDate.Format(_T("%s 06:00:00"), dte.GetDate(yyyymmdd));
				m_hms_careinfoTbl.SetValue(_T("hci_date"), szDate);
				szSQL.Format(_T("SELECT count(*) FROM hms_careinfo ") \
					_T("WHERE hci_docno=%ld and trunc(hci_date) = TO_DATE('%s', 'YYYY-MM-DD') and trunc(hci_date) >= trunc(sysdate) "), 
					m_nDocumentNo, dte.GetDate(yyyymmdd));

				rs.ExecSQL(szSQL);
				if(rs.GetIntValue() <= 0)
				{
					if (pMF->m_UserInfo.su_groupid == _T("A") && pMF->CheckPermission(_T("admin.TM.100.1")))
					{
					szSQL.Format(_T("HMS_CAREINFO_UPDATE_V2_ADMIN(%s) "), m_hms_careinfoTbl.FormatSQL());
					}
					else
					{
					szSQL.Format(_T("HMS_CAREINFO_UPDATE_V2(%s) "), m_hms_careinfoTbl.FormatSQL());
					}
		 			pMF->ExecDML(szSQL);
				}
				dte ++;

			}
		}

 		//OnHMSTreatmentCareInputDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
		
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentCareInputDialog::OnCancelHMSTreatmentCareInputDialog(){
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
int CHMSTreatmentCareInputDialog::OnHMSTreatmentCareInputDialogListLoadData(){
	return 0;
}
/*
void CHMSTreatmentCareInputDialog::EnableInputPulse(BOOL bFlag)
{
	EnableControls(bFlag);
	m_wndDiseaseTracking.EnableWindow(TRUE);
	m_wndPatientTakeCare.EnableWindow(TRUE);
	//m_wndInputPulseTemperature.EnableWindow(TRUE);
	if(m_nNormal == 0)
		m_wndOperationName.EnableWindow(FALSE);
	else
		m_wndOperationName.EnableWindow(TRUE);
}
*/