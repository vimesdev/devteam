#include "HMSTreatmentTrackingDiseaseDialog.h"
#include "MainFrm.h"
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
/*static void _OnNhandinhchandoanChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNhandinhchandoanChange();
} */
/*static void _OnNhandinhchandoanSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNhandinhchandoanSetfocus();} */ 
/*static void _OnNhandinhchandoanKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNhandinhchandoanKillfocus();
} */
static int _OnNhandinhchandoanCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnNhandinhchandoanCheckValue();
} 
/*static void _OnKetquatieptheoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnKetquatieptheoChange();
} */
/*static void _OnKetquatieptheoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnKetquatieptheoSetfocus();} */ 
/*static void _OnKetquatieptheoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnKetquatieptheoKillfocus();
} */
static int _OnKetquatieptheoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnKetquatieptheoCheckValue();
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
}*/
/*static void _OnDietKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietKillfocus();
}*/
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
CHMSTreatmentTrackingDiseaseDialog::CHMSTreatmentTrackingDiseaseDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 845;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CHMSTreatmentTrackingDiseaseDialog::~CHMSTreatmentTrackingDiseaseDialog(){
}
void CHMSTreatmentTrackingDiseaseDialog::OnCreateComponents(){
	m_wndDateLabel.Create(this, _T("Ngày gi?"), 5, 5, 145, 30);
	m_wndDate.Create(this,150, 5, 270, 30); 
	m_wndNumberDateLabel.Create(this, _T("S? ngày"), 275, 5, 385, 30);
	m_wndNumberDate.Create(this,390, 5, 440, 30); 
	m_wndDiseaseTrackingLabel.Create(this, _T("Di?n bi?n c?a b?nh"), 5, 35, 420, 60);
	m_wndDiseaseTracking.Create(this,5, 65, 834, 215); 
	m_wndNhandinhchandoanLabel.Create(this, _T("Nh?n d?nh ch?n doán"), 5, 220, 145, 245);
	m_wndNhandinhchandoan.Create(this,150, 220, 440, 245); 
	m_wndKetquatieptheoLabel.Create(this, _T("K?t qu? ti?p theo"), 445, 220, 565, 245);
	m_wndKetquatieptheo.Create(this,570, 220, 834, 245); 
	m_wndParaclinicalResult.Create(this, _T("K?t qu? c?n lâm sàng chính"), 5, 250, 191, 275);
	m_wndParaclinicalResultButton.Create(this, _T("Ch?n k?t qu?"), 570, 250, 667, 275);
	m_wndSelectFromOrder.Create(this, _T("KQ t? phi?u yêu c?u"), 672, 250, 818, 275);
	m_wndParaclinicRes.Create(this,5, 280, 834, 430); 
	m_wndDietLabel.Create(this, _T("Ch? d? an"), 5, 435, 145, 460);
	m_wndDiet.Create(this,150, 435, 440, 460); 
	m_wndNurseAssistanceLabel.Create(this, _T("Ch? d? h? lý"), 5, 465, 145, 490);
	m_wndNurseAssistance.Create(this,150, 465, 834, 521); 
	m_wndInputPulseTemperature.Create(this, _T("Nh?p ch?c nang s?ng"), 445, 526, 604, 551);
	m_wndTemperatureSelectLabel.Create(this, _T("Ch?c nang s?ng"), 5, 526, 145, 551);
	m_wndTemperatureSelect.Create(this,150, 526, 440, 551); 
	m_wndPulseLabel.Create(this, _T("M?ch"), 5, 556, 145, 581);
	m_wndPulse.Create(this,150, 556, 230, 581); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 235, 556, 350, 581);
	m_wndTemperature.Create(this,355, 556, 440, 581); 
	m_wndBloodPressureLabel.Create(this, _T("Huy?t áp"), 445, 556, 550, 581);
	m_wndBloodPressure.Create(this,555, 556, 600, 581); 
	m_wndLabelSpec.Create(this, _T("/"), 605, 556, 615, 581);
	m_wndBloodPressureHight.Create(this,620, 556, 665, 581); 
	m_wndBreathingRateLabel.Create(this, _T("Nh?p th?"), 670, 556, 774, 581);
	m_wndBreathingRate.Create(this,779, 556, 835, 581); 
	m_wndDeanNote.Create(this, _T("Ch? nhi?m khoa di?m b?nh"), 442, 586, 639, 611);
	m_wndSave.Create(this, _T("&Save"), 670, 586, 750, 611);
	m_wndClose.Create(this, _T("&Close"), 755, 586, 835, 611);

}
void CHMSTreatmentTrackingDiseaseDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndNumberDate.SetLimitText(1024);
	m_wndNumberDate.SetCheckValue(true);
	m_wndDiseaseTracking.SetLimitText(1024);
	m_wndDiseaseTracking.SetCheckValue(true);
	m_wndNhandinhchandoan.SetLimitText(35);
	m_wndNhandinhchandoan.SetCheckValue(true);
	m_wndKetquatieptheo.SetLimitText(35);
	m_wndKetquatieptheo.SetCheckValue(true);
	m_wndParaclinicRes.SetLimitText(1024);
	m_wndParaclinicRes.SetCheckValue(true);
	m_wndDiet.SetCheckValue(true);
	m_wndDiet.LimitText(1024);
	m_wndNurseAssistance.SetLimitText(1024);
	m_wndNurseAssistance.SetCheckValue(true);
	m_wndTemperatureSelect.SetCheckValue(true);
	m_wndTemperatureSelect.LimitText(1024);
	m_wndPulse.SetLimitText(1024);
	m_wndPulse.SetCheckValue(true);
	m_wndTemperature.SetLimitText(1024);
	m_wndTemperature.SetCheckValue(true);
	m_wndBloodPressure.SetLimitText(1024);
	m_wndBloodPressure.SetCheckValue(true);
	m_wndBloodPressureHight.SetLimitText(1024);
	m_wndBloodPressureHight.SetCheckValue(true);
	m_wndBreathingRate.SetLimitText(1024);
	m_wndBreathingRate.SetCheckValue(true);


	m_wndDiet.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDiet.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);



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
	//m_wndNhandinhchandoan.SetEvent(WE_CHANGE, _OnNhandinhchandoanChangeFnc);
	//m_wndNhandinhchandoan.SetEvent(WE_SETFOCUS, _OnNhandinhchandoanSetfocusFnc);
	//m_wndNhandinhchandoan.SetEvent(WE_KILLFOCUS, _OnNhandinhchandoanKillfocusFnc);
	m_wndNhandinhchandoan.SetEvent(WE_CHECKVALUE, _OnNhandinhchandoanCheckValueFnc);
	//m_wndKetquatieptheo.SetEvent(WE_CHANGE, _OnKetquatieptheoChangeFnc);
	//m_wndKetquatieptheo.SetEvent(WE_SETFOCUS, _OnKetquatieptheoSetfocusFnc);
	//m_wndKetquatieptheo.SetEvent(WE_KILLFOCUS, _OnKetquatieptheoKillfocusFnc);
	m_wndKetquatieptheo.SetEvent(WE_CHECKVALUE, _OnKetquatieptheoCheckValueFnc);
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
	m_wndNurseAssistance.SetEvent(WE_CHECKVALUE, _OnNurseAssistanceCheckValueFnc);
	m_wndInputPulseTemperature.SetEvent(WE_CLICK, _OnInputPulseTemperatureSelectFnc);
	m_wndTemperatureSelect.SetEvent(WE_SELENDOK, _OnTemperatureSelectSelendokFnc);
	//m_wndTemperatureSelect.SetEvent(WE_SETFOCUS, _OnTemperatureSelectSetfocusFnc);
	//m_wndTemperatureSelect.SetEvent(WE_KILLFOCUS, _OnTemperatureSelectKillfocusFnc);
	m_wndTemperatureSelect.SetEvent(WE_SELCHANGE, _OnTemperatureSelectSelectChangeFnc);
	m_wndTemperatureSelect.SetEvent(WE_LOADDATA, _OnTemperatureSelectLoadDataFnc);
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
	m_wndDeanNote.SetEvent(WE_CLICK, _OnDeanNoteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTreatmentTrackingDiseaseDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Check(pDX, m_wndNumberDateLabel.GetDlgCtrlID(), m_bNumberDateLabel);
	DDX_Text(pDX, m_wndNumberDate.GetDlgCtrlID(), m_nNumberDate);
	DDX_Text(pDX, m_wndDiseaseTracking.GetDlgCtrlID(), m_szDiseaseTracking);
	DDX_Text(pDX, m_wndNhandinhchandoan.GetDlgCtrlID(), m_szNhandinhchandoan);
	DDX_Text(pDX, m_wndKetquatieptheo.GetDlgCtrlID(), m_szKetquatieptheo);
	DDX_Text(pDX, m_wndParaclinicRes.GetDlgCtrlID(), m_szParaclinicRes);
	DDX_TextEx(pDX, m_wndDiet.GetDlgCtrlID(), m_szDietKey);
	DDX_Text(pDX, m_wndNurseAssistance.GetDlgCtrlID(), m_szNurseAssistance);
	DDX_Check(pDX, m_wndInputPulseTemperature.GetDlgCtrlID(), m_bInputPulseTemperature);
	DDX_TextEx(pDX, m_wndTemperatureSelect.GetDlgCtrlID(), m_szTemperatureSelectKey);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_nBloodPressure);
	DDX_Text(pDX, m_wndBloodPressureHight.GetDlgCtrlID(), m_nBloodPressureHight);
	DDX_Text(pDX, m_wndBreathingRate.GetDlgCtrlID(), m_nBreathingRate);
	DDX_Check(pDX, m_wndDeanNote.GetDlgCtrlID(), m_bDeanNote);

}
void CHMSTreatmentTrackingDiseaseDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("NumberDateLabel")] =  m_bNumberDateLabel;
	m_jData[_T("NumberDate")] =  m_nNumberDate;
	m_jData[_T("DiseaseTracking")] =  m_szDiseaseTracking;
	m_jData[_T("Nhandinhchandoan")] =  m_szNhandinhchandoan;
	m_jData[_T("Ketquatieptheo")] =  m_szKetquatieptheo;
	m_jData[_T("ParaclinicRes")] =  m_szParaclinicRes;
	m_jData[_T("Diet")] =  m_szDietKey;
	m_jData[_T("NurseAssistance")] =  m_szNurseAssistance;
	m_jData[_T("InputPulseTemperature")] =  m_bInputPulseTemperature;
	m_jData[_T("TemperatureSelect")] =  m_szTemperatureSelectKey;
	m_jData[_T("Pulse")] =  m_nPulse;
	m_jData[_T("Temperature")] =  m_nTemperature;
	m_jData[_T("BloodPressure")] =  m_nBloodPressure;
	m_jData[_T("BloodPressureHight")] =  m_nBloodPressureHight;
	m_jData[_T("BreathingRate")] =  m_nBreathingRate;
	m_jData[_T("DeanNote")] =  m_bDeanNote;
	}
	else
	{
			
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("NumberDateLabel")].GetValue(m_bNumberDateLabel);
	m_jData[_T("NumberDate")].GetValue(m_nNumberDate);
	m_jData[_T("DiseaseTracking")].GetValue(m_szDiseaseTracking);
	m_jData[_T("Nhandinhchandoan")].GetValue(m_szNhandinhchandoan);
	m_jData[_T("Ketquatieptheo")].GetValue(m_szKetquatieptheo);
	m_jData[_T("ParaclinicRes")].GetValue(m_szParaclinicRes);
	m_jData[_T("Diet")].GetValue(m_szDietKey);
	m_jData[_T("NurseAssistance")].GetValue(m_szNurseAssistance);
	m_jData[_T("InputPulseTemperature")].GetValue(m_bInputPulseTemperature);
	m_jData[_T("TemperatureSelect")].GetValue(m_szTemperatureSelectKey);
	m_jData[_T("Pulse")].GetValue(m_nPulse);
	m_jData[_T("Temperature")].GetValue(m_nTemperature);
	m_jData[_T("BloodPressure")].GetValue(m_nBloodPressure);
	m_jData[_T("BloodPressureHight")].GetValue(m_nBloodPressureHight);
	m_jData[_T("BreathingRate")].GetValue(m_nBreathingRate);
	m_jData[_T("DeanNote")].GetValue(m_bDeanNote);
	}

}
void CHMSTreatmentTrackingDiseaseDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentTrackingDiseaseDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentTrackingDiseaseDialog::SetDefaultValues(){

	m_szDate.Empty();
	m_bNumberDateLabel=FALSE;
	m_nNumberDate=0;
	m_szDiseaseTracking.Empty();
	m_szNhandinhchandoan.Empty();
	m_szKetquatieptheo.Empty();
	m_szParaclinicRes.Empty();
	m_szDietKey.Empty();
	m_szNurseAssistance.Empty();
	m_bInputPulseTemperature=FALSE;
	m_szTemperatureSelectKey.Empty();
	m_nPulse=0;
	m_nTemperature=0;
	m_nBloodPressure=0;
	m_nBloodPressureHight=0;
	m_nBreathingRate=0;
	m_bDeanNote=FALSE;

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
/*void CHMSTreatmentTrackingDiseaseDialog::OnDateChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDateSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDateKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnDateCheckValue(){
	return 0;
} 
	void CHMSTreatmentTrackingDiseaseDialog::OnNumberDateLabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSTreatmentTrackingDiseaseDialog::OnNumberDateChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNumberDateSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNumberDateKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnNumberDateCheckValue(){
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
/*void CHMSTreatmentTrackingDiseaseDialog::OnNhandinhchandoanChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNhandinhchandoanSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnNhandinhchandoanKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnNhandinhchandoanCheckValue(){
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnKetquatieptheoChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnKetquatieptheoSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnKetquatieptheoKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnKetquatieptheoCheckValue(){
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
int CHMSTreatmentTrackingDiseaseDialog::OnParaclinicResCheckValue(){
	return 0;
} 
void CHMSTreatmentTrackingDiseaseDialog::OnDietSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTrackingDiseaseDialog::OnDietSelendok(){
	 
}
/*void CHMSTreatmentTrackingDiseaseDialog::OnDietSetfocus(){
	
}*/
/*void CHMSTreatmentTrackingDiseaseDialog::OnDietKillfocus(){
	
}*/
long CHMSTreatmentTrackingDiseaseDialog::OnDietLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
int CHMSTreatmentTrackingDiseaseDialog::OnNurseAssistanceCheckValue(){
	return 0;
} 
	void CHMSTreatmentTrackingDiseaseDialog::OnInputPulseTemperatureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectSelendok(){
	 
}
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectSetfocus(){
	
}*/
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectKillfocus(){
	
}*/
long CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSelectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTemperatureSelect.IsSearchKey() && !m_szTemperatureSelectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTemperatureSelectKey
};
	m_wndTemperatureSelect.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTemperatureSelect.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnTemperatureKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnTemperatureCheckValue(){
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureCheckValue(){
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureHightChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureHightSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureHightKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnBloodPressureHightCheckValue(){
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateCheckValue(){
	return 0;
} 
	void CHMSTreatmentTrackingDiseaseDialog::OnDeanNoteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSTreatmentTrackingDiseaseDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTrackingDiseaseDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentTrackingDiseaseDialog::OnDeleteHMSTreatmentTrackingDiseaseDialog(){
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
 		OnCancelHMSTreatmentTrackingDiseaseDialog();
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
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
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
