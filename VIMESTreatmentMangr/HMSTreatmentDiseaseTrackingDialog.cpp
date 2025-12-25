#include "HMSTreatmentTrackingDiseaseDialog.h"
#include "MainFrm.h"
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
/*static void _OnDietChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietChange();
} */
/*static void _OnDietSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietSetfocus();} */ 
/*static void _OnDietKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietKillfocus();
} */
static int _OnDietCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDiseaseDialog *)pWnd)->OnDietCheckValue();
} 
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
static void _OnInputPulseTemperatureSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentTrackingDiseaseDialog*)pWnd)->OnInputPulseTemperatureSelect();
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
CHMSTreatmentTrackingDiseaseDialog::CHMSTreatmentTrackingDiseaseDialog(CWnd *pParent, int nMode, long nDocumentNo):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 485;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_nDocumentNo = nDocumentNo;
}
CHMSTreatmentTrackingDiseaseDialog::~CHMSTreatmentTrackingDiseaseDialog(){
}
void CHMSTreatmentTrackingDiseaseDialog::OnCreateComponents(){
	m_wndDiseaseTrackingLabel.Create(this, _T("Disease Tracking"), 5, 5, 109, 30);
	m_wndDiseaseTracking.Create(this,6, 35, 437, 325, true, false , true); 
	m_wndDietLabel.Create(this, _T("Diet"), 5, 330, 109, 355);
	m_wndDiet.Create(this,114, 330, 436, 356); 
	m_wndPulseLabel.Create(this, _T("Pulse"), 5, 361, 109, 386);
	m_wndPulse.Create(this,114, 361, 218, 386); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 223, 361, 327, 386);
	m_wndTemperature.Create(this,332, 361, 436, 386); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 5, 391, 109, 416);
	m_wndBloodPressure.Create(this,114, 391, 218, 416); 
	m_wndBreathingRateLabel.Create(this, _T("Breathing rate"), 223, 391, 327, 416);
	m_wndBreathingRate.Create(this,332, 391, 436, 416); 
	m_wndInputPulseTemperature.Create(this, _T("Input Pulse&&Temperature"), 5, 421, 218, 446);
	m_wndSave.Create(this, _T("&Save"), 271, 421, 351, 446);
	m_wndClose.Create(this, _T("&Close"), 356, 421, 436, 446);

}
void CHMSTreatmentTrackingDiseaseDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiseaseTracking.SetLimitText(35);
	m_wndDiseaseTracking.SetCheckValue(true);
	m_wndDiet.SetLimitText(35);
	m_wndDiet.SetCheckValue(true);
	m_wndPulse.SetLimitText(16);
	m_wndPulse.SetCheckValue(true);
	m_wndTemperature.SetLimitText(16);
	m_wndTemperature.SetCheckValue(true);
	m_wndBloodPressure.SetLimitText(16);
	m_wndBloodPressure.SetCheckValue(true);
	m_wndBreathingRate.SetLimitText(16);
	m_wndBreathingRate.SetCheckValue(true);
	
}
void CHMSTreatmentTrackingDiseaseDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDiseaseTracking.SetEvent(WE_CHANGE, _OnDiseaseTrackingChangeFnc);
	//m_wndDiseaseTracking.SetEvent(WE_SETFOCUS, _OnDiseaseTrackingSetfocusFnc);
	//m_wndDiseaseTracking.SetEvent(WE_KILLFOCUS, _OnDiseaseTrackingKillfocusFnc);
	m_wndDiseaseTracking.SetEvent(WE_CHECKVALUE, _OnDiseaseTrackingCheckValueFnc);
	//m_wndDiet.SetEvent(WE_CHANGE, _OnDietChangeFnc);
	//m_wndDiet.SetEvent(WE_SETFOCUS, _OnDietSetfocusFnc);
	//m_wndDiet.SetEvent(WE_KILLFOCUS, _OnDietKillfocusFnc);
	m_wndDiet.SetEvent(WE_CHECKVALUE, _OnDietCheckValueFnc);
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
	//m_wndBreathingRate.SetEvent(WE_CHANGE, _OnBreathingRateChangeFnc);
	//m_wndBreathingRate.SetEvent(WE_SETFOCUS, _OnBreathingRateSetfocusFnc);
	//m_wndBreathingRate.SetEvent(WE_KILLFOCUS, _OnBreathingRateKillfocusFnc);
	m_wndBreathingRate.SetEvent(WE_CHECKVALUE, _OnBreathingRateCheckValueFnc);
	m_wndInputPulseTemperature.SetEvent(WE_CLICK, _OnInputPulseTemperatureSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CHMSTreatmentTrackingDiseaseDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDiseaseTracking.GetDlgCtrlID(), m_szDiseaseTracking);
	DDX_Text(pDX, m_wndDiet.GetDlgCtrlID(), m_szDiet);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_szBloodPressure);
	DDX_Text(pDX, m_wndBreathingRate.GetDlgCtrlID(), m_nBreathingRate);
	DDX_Check(pDX, m_wndInputPulseTemperature.GetDlgCtrlID(), m_bInputPulseTemperature);

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

	m_szDiseaseTracking.Empty();
	m_szDiet.Empty();
	m_nPulse=0;
	m_nTemperature=0;
	m_szBloodPressure.Empty();
	m_nBreathingRate=0;
	m_bInputPulseTemperature=FALSE;

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
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiseaseTrackingChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiseaseTrackingSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDiseaseTrackingKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnDiseaseTrackingCheckValue(){
	return 0;
} 
/*void CHMSTreatmentTrackingDiseaseDialog::OnDietChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDietSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnDietKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnDietCheckValue(){
	return 0;
} 
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
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateChange(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateSetfocus(){
	
} */
/*void CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateKillfocus(){
	
} */
int CHMSTreatmentTrackingDiseaseDialog::OnBreathingRateCheckValue(){
	return 0;
} 
	void CHMSTreatmentTrackingDiseaseDialog::OnInputPulseTemperatureSelect(){
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
