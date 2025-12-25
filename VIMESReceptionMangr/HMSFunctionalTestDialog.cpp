#include "HMSFunctionalTestDialog.h"
#include "MainFrm.h"
/*static void _OnPulseChangeFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnPulseChange();
} */
/*static void _OnPulseSetfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnPulseSetfocus();} */ 
/*static void _OnPulseKillfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnPulseKillfocus();
} */
static int _OnPulseCheckValueFnc(CWnd *pWnd){
	return ((CHMSFunctionalTestDialog *)pWnd)->OnPulseCheckValue();
} 
/*static void _OnTemperatureChangeFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnTemperatureChange();
} */
/*static void _OnTemperatureSetfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnTemperatureSetfocus();} */ 
/*static void _OnTemperatureKillfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnTemperatureKillfocus();
} */
static int _OnTemperatureCheckValueFnc(CWnd *pWnd){
	return ((CHMSFunctionalTestDialog *)pWnd)->OnTemperatureCheckValue();
} 
/*static void _OnBloodPressureChangeFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBloodPressureChange();
} */
/*static void _OnBloodPressureSetfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBloodPressureSetfocus();} */ 
/*static void _OnBloodPressureKillfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBloodPressureKillfocus();
} */
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd){
	return ((CHMSFunctionalTestDialog *)pWnd)->OnBloodPressureCheckValue();
} 
/*static void _OnBloodPressuerexChangeFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBloodPressuerexChange();
} */
/*static void _OnBloodPressuerexSetfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBloodPressuerexSetfocus();} */ 
/*static void _OnBloodPressuerexKillfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBloodPressuerexKillfocus();
} */
static int _OnBloodPressuerexCheckValueFnc(CWnd *pWnd){
	return ((CHMSFunctionalTestDialog *)pWnd)->OnBloodPressuerexCheckValue();
} 
/*static void _OnBreathingIntervalChangeFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBreathingIntervalChange();
} */
/*static void _OnBreathingIntervalSetfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBreathingIntervalSetfocus();} */ 
/*static void _OnBreathingIntervalKillfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnBreathingIntervalKillfocus();
} */
static int _OnBreathingIntervalCheckValueFnc(CWnd *pWnd){
	return ((CHMSFunctionalTestDialog *)pWnd)->OnBreathingIntervalCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSFunctionalTestDialog *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CHMSFunctionalTestDialog *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSFunctionalTestDialog *)pWnd)->OnHeightCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFunctionalTestDialog *pVw = (CHMSFunctionalTestDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFunctionalTestDialog *pVw = (CHMSFunctionalTestDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFunctionalTestDialogFnc(CWnd *pWnd){
	 return ((CHMSFunctionalTestDialog*)pWnd)->OnAddHMSFunctionalTestDialog();
} 
static int _OnEditHMSFunctionalTestDialogFnc(CWnd *pWnd){
	 return ((CHMSFunctionalTestDialog*)pWnd)->OnEditHMSFunctionalTestDialog();
} 
static int _OnDeleteHMSFunctionalTestDialogFnc(CWnd *pWnd){
	 return ((CHMSFunctionalTestDialog*)pWnd)->OnDeleteHMSFunctionalTestDialog();
} 
static int _OnSaveHMSFunctionalTestDialogFnc(CWnd *pWnd){
	 return ((CHMSFunctionalTestDialog*)pWnd)->OnSaveHMSFunctionalTestDialog();
} 
static int _OnCancelHMSFunctionalTestDialogFnc(CWnd *pWnd){
	 return ((CHMSFunctionalTestDialog*)pWnd)->OnCancelHMSFunctionalTestDialog();
} 
CHMSFunctionalTestDialog::CHMSFunctionalTestDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 225;
	m_nDlgHeight = 250;
	SetDefaultValues();
}
CHMSFunctionalTestDialog::~CHMSFunctionalTestDialog(){
}
void CHMSFunctionalTestDialog::OnCreateComponents(){
	m_wndFuntionalTestInformation.Create(this, _T("Funtional Test Information"), 5, 5, 215, 210);
	m_wndPulseLabel.Create(this, _T("Pulse"), 10, 30, 120, 55);
	m_wndPulse.Create(this,125, 30, 210, 55); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 10, 60, 120, 85);
	m_wndTemperature.Create(this,125, 60, 210, 85); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 10, 90, 120, 115);
	m_wndBloodPressure.Create(this,125, 90, 165, 115); 
	m_wndBloodPressuerex.Create(this,170, 90, 210, 115); 
	m_wndBreathingIntervalLabel.Create(this, _T("Breathing Interval"), 10, 120, 120, 145);
	m_wndBreathingInterval.Create(this,125, 120, 210, 145); 
	m_wndWeightLabel.Create(this, _T("Weight"), 10, 149, 120, 174);
	m_wndWeight.Create(this,125, 149, 210, 174); 
	m_wndHeightLabel.Create(this, _T("Height"), 10, 180, 120, 205);
	m_wndHeight.Create(this,125, 180, 210, 205); 
	m_wndSave.Create(this, _T("&Save"), 60, 215, 135, 240);
	m_wndClose.Create(this, _T("&Close"), 140, 215, 215, 240);

}
void CHMSFunctionalTestDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPulse.SetLimitText(16);
	m_wndPulse.SetCheckValue(true);
	m_wndTemperature.SetLimitText(16);
	m_wndTemperature.SetCheckValue(true);
	m_wndBloodPressure.SetLimitText(16);
	m_wndBloodPressure.SetCheckValue(true);
	m_wndBloodPressuerex.SetLimitText(16);
	m_wndBloodPressuerex.SetCheckValue(true);
	m_wndBreathingInterval.SetLimitText(16);
	m_wndBreathingInterval.SetCheckValue(true);
	m_wndWeight.SetLimitText(16);
	m_wndWeight.SetCheckValue(true);
	m_wndHeight.SetLimitText(16);
	m_wndHeight.SetCheckValue(true);

}
void CHMSFunctionalTestDialog::OnSetWindowEvents(){
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
	//m_wndBloodPressuerex.SetEvent(WE_CHANGE, _OnBloodPressuerexChangeFnc);
	//m_wndBloodPressuerex.SetEvent(WE_SETFOCUS, _OnBloodPressuerexSetfocusFnc);
	//m_wndBloodPressuerex.SetEvent(WE_KILLFOCUS, _OnBloodPressuerexKillfocusFnc);
	m_wndBloodPressuerex.SetEvent(WE_CHECKVALUE, _OnBloodPressuerexCheckValueFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CHMSFunctionalTestDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_nBloodPressure);
	DDX_Text(pDX, m_wndBloodPressuerex.GetDlgCtrlID(), m_nBloodPressuerex);
	DDX_Text(pDX, m_wndBreathingInterval.GetDlgCtrlID(), m_nBreathingInterval);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_nWeight);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);

}
void CHMSFunctionalTestDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_exam WHERE he_docno=%ld And he_receptidx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("he_pulse"), m_nPulse);
		rs.GetValue(_T("he_temperature"), m_nTemperature);
		rs.GetValue(_T("he_bloodpressure"), m_nBloodPressure);
		rs.GetValue(_T("he_bloodpressurex"), m_nBloodPressuerex);
		rs.GetValue(_T("he_breathinterval"), m_nBreathingInterval);
		rs.GetValue(_T("he_weight"), m_nWeight);
		rs.GetValue(_T("he_height"), m_nHeight);
		SetMode(VM_EDIT);
	}
	else
	{
		SetDefaultValues();
		SetMode(VM_EDIT);
	}

}
void CHMSFunctionalTestDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFunctionalTestDialog::SetDefaultValues(){

	m_nPulse=0;
	m_nTemperature=0;
	m_nBloodPressure=0;
	m_nBloodPressuerex=0;
	m_nBreathingInterval=0;
	m_nWeight=0;
	m_nHeight=0;

}
int CHMSFunctionalTestDialog::SetMode(int nMode){
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
/*void CHMSFunctionalTestDialog::OnPulseChange(){
	
} */
/*void CHMSFunctionalTestDialog::OnPulseSetfocus(){
	
} */
/*void CHMSFunctionalTestDialog::OnPulseKillfocus(){
	
} */
int CHMSFunctionalTestDialog::OnPulseCheckValue(){
	return 0;
} 
/*void CHMSFunctionalTestDialog::OnTemperatureChange(){
	
} */
/*void CHMSFunctionalTestDialog::OnTemperatureSetfocus(){
	
} */
/*void CHMSFunctionalTestDialog::OnTemperatureKillfocus(){
	
} */
int CHMSFunctionalTestDialog::OnTemperatureCheckValue(){
	return 0;
} 
/*void CHMSFunctionalTestDialog::OnBloodPressureChange(){
	
} */
/*void CHMSFunctionalTestDialog::OnBloodPressureSetfocus(){
	
} */
/*void CHMSFunctionalTestDialog::OnBloodPressureKillfocus(){
	
} */
int CHMSFunctionalTestDialog::OnBloodPressureCheckValue(){
	return 0;
} 
/*void CHMSFunctionalTestDialog::OnBloodPressuerexChange(){
	
} */
/*void CHMSFunctionalTestDialog::OnBloodPressuerexSetfocus(){
	
} */
/*void CHMSFunctionalTestDialog::OnBloodPressuerexKillfocus(){
	
} */
int CHMSFunctionalTestDialog::OnBloodPressuerexCheckValue(){
	return 0;
} 
/*void CHMSFunctionalTestDialog::OnBreathingIntervalChange(){
	
} */
/*void CHMSFunctionalTestDialog::OnBreathingIntervalSetfocus(){
	
} */
/*void CHMSFunctionalTestDialog::OnBreathingIntervalKillfocus(){
	
} */
int CHMSFunctionalTestDialog::OnBreathingIntervalCheckValue(){
	return 0;
} 
/*void CHMSFunctionalTestDialog::OnWeightChange(){
	
} */
/*void CHMSFunctionalTestDialog::OnWeightSetfocus(){
	
} */
/*void CHMSFunctionalTestDialog::OnWeightKillfocus(){
	
} */
int CHMSFunctionalTestDialog::OnWeightCheckValue(){
	return 0;
} 
/*void CHMSFunctionalTestDialog::OnHeightChange(){
	
} */
/*void CHMSFunctionalTestDialog::OnHeightSetfocus(){
	
} */
/*void CHMSFunctionalTestDialog::OnHeightKillfocus(){
	
} */
int CHMSFunctionalTestDialog::OnHeightCheckValue(){
	return 0;
} 
void CHMSFunctionalTestDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFunctionalTestDialog();
} 
void CHMSFunctionalTestDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSFunctionalTestDialog::OnAddHMSFunctionalTestDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFunctionalTestDialog::OnEditHMSFunctionalTestDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFunctionalTestDialog::OnDeleteHMSFunctionalTestDialog(){
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
 		OnCancelHMSFunctionalTestDialog(); 
 	}
	return 0;
}
int CHMSFunctionalTestDialog::OnSaveHMSFunctionalTestDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	szSQL.Format(_T("UPDATE hms_exam SET he_pulse=%.2f, he_temperature=%.2f, he_bloodpressure=%d, ") \
		_T(" he_bloodpressurex=%d, he_breathinterval=%.2f, he_weight=%.2f, he_height=%.2f ") \
		_T(" WHERE he_docno=%ld AND he_receptidx=%d "), 
			m_nPulse, m_nTemperature, m_nBloodPressure,
			m_nBloodPressuerex, m_nBreathingInterval, m_nWeight, m_nHeight,
			pMF->m_nDocumentNo, pMF->m_nRefIndex);

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSFunctionalTestDialog::OnCancelHMSFunctionalTestDialog(){
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
int CHMSFunctionalTestDialog::OnHMSFunctionalTestDialogListLoadData(){
	return 0;
}
