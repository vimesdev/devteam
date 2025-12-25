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
static void _OnInputPulseTemperatureSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentCareInputDialog*)pWnd)->OnInputPulseTemperatureSelect();
}
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
CHMSTreatmentCareInputDialog::CHMSTreatmentCareInputDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 977;
	m_nDlgHeight = 695;
	SetDefaultValues();
}
CHMSTreatmentCareInputDialog::~CHMSTreatmentCareInputDialog(){
}
void CHMSTreatmentCareInputDialog::OnCreateComponents(){
	m_wndDateLabel.Create(this, _T("Ng\xE0y gi\x1EDD"), 5, 5, 125, 30);
	m_wndDate.Create(this,130, 5, 250, 30); 
	m_wndDiseaseTrackingLabel.Create(this, _T("\x44i\x1EC5n \x62i\x1EBFn"), 5, 35, 315, 60);
	m_wndDiseaseTracking.Create(this,5, 65, 605, 215); 
	m_wndPatientTakeCareGroup.Create(this, _T("Th\x1EF1\x63 hi\x1EC7n \x63h\x103m s\xF3\x63"), 5, 220, 315, 245);
	m_wndPatientTakeCare.Create(this,5, 250, 605, 400); 
	m_wndInputPulseTemperature.Create(this, _T("\x43ho ph\xE9p nh\x1EADp \x63h\x1EE9\x63 n\x103ng s\x1ED1ng"), 5, 405, 315, 430);
	m_wndPulseLabel.Create(this, _T("M\x1EA1\x63h"), 5, 435, 125, 460);
	m_wndPulse.Create(this,130, 435, 240, 460); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 245, 435, 349, 460);
	m_wndTemperature.Create(this,354, 435, 421, 460); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 5, 465, 125, 490);
	m_wndBloodPressure.Create(this,130, 465, 175, 490); 
	m_wndLabelSpec.Create(this, _T("/"), 180, 465, 190, 490);
	m_wndBloodPressureHight.Create(this,195, 465, 240, 490); 
	m_wndBreathingRateLabel.Create(this, _T("Breathing rate"), 245, 465, 349, 490);
	m_wndBreathingRate.Create(this,354, 465, 421, 490); 
	m_wndSave.Create(this, _T("&Save"), 440, 495, 520, 520);
	m_wndClose.Create(this, _T("&Close"), 525, 495, 605, 520);

}
void CHMSTreatmentCareInputDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndDiseaseTracking.SetLimitText(1024);
	m_wndDiseaseTracking.SetCheckValue(true);
	m_wndPatientTakeCare.SetLimitText(1024);
	m_wndPatientTakeCare.SetCheckValue(true);
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

}
void CHMSTreatmentCareInputDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndDiseaseTracking.SetEvent(WE_CHANGE, _OnDiseaseTrackingChangeFnc);
	//m_wndDiseaseTracking.SetEvent(WE_SETFOCUS, _OnDiseaseTrackingSetfocusFnc);
	//m_wndDiseaseTracking.SetEvent(WE_KILLFOCUS, _OnDiseaseTrackingKillfocusFnc);
	m_wndDiseaseTracking.SetEvent(WE_CHECKVALUE, _OnDiseaseTrackingCheckValueFnc);
	//m_wndPatientTakeCare.SetEvent(WE_CHANGE, _OnPatientTakeCareChangeFnc);
	//m_wndPatientTakeCare.SetEvent(WE_SETFOCUS, _OnPatientTakeCareSetfocusFnc);
	//m_wndPatientTakeCare.SetEvent(WE_KILLFOCUS, _OnPatientTakeCareKillfocusFnc);
	m_wndPatientTakeCare.SetEvent(WE_CHECKVALUE, _OnPatientTakeCareCheckValueFnc);
	m_wndInputPulseTemperature.SetEvent(WE_CLICK, _OnInputPulseTemperatureSelectFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTreatmentCareInputDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndDiseaseTracking.GetDlgCtrlID(), m_szDiseaseTracking);
	DDX_Text(pDX, m_wndPatientTakeCare.GetDlgCtrlID(), m_szPatientTakeCare);
	DDX_Check(pDX, m_wndInputPulseTemperature.GetDlgCtrlID(), m_bInputPulseTemperature);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_nBloodPressure);
	DDX_Text(pDX, m_wndBloodPressureHight.GetDlgCtrlID(), m_nBloodPressureHight);
	DDX_Text(pDX, m_wndBreathingRate.GetDlgCtrlID(), m_nBreathingRate);

}
void CHMSTreatmentCareInputDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentCareInputDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentCareInputDialog::SetDefaultValues(){

	m_szDate.Empty();
	m_szDiseaseTracking.Empty();
	m_szPatientTakeCare.Empty();
	m_bInputPulseTemperature=FALSE;
	m_nPulse=0;
	m_nTemperature=0;
	m_nBloodPressure=0;
	m_nBloodPressureHight=0;
	m_nBreathingRate=0;

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
/*void CHMSTreatmentCareInputDialog::OnDateChange(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnDateSetfocus(){
	
} */
/*void CHMSTreatmentCareInputDialog::OnDateKillfocus(){
	
} */
int CHMSTreatmentCareInputDialog::OnDateCheckValue(){
	return 0;
} 
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
	void CHMSTreatmentCareInputDialog::OnInputPulseTemperatureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
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
void CHMSTreatmentCareInputDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentCareInputDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentCareInputDialog::OnDeleteHMSTreatmentCareInputDialog(){
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
 		OnCancelHMSTreatmentCareInputDialog();
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
