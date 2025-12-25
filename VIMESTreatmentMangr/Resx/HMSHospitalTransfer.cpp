#include "HMSHospitalTransfer.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnICDDiagnosisSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalTransfer* )pWnd)->OnICDDiagnosisSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDDiagnosisSelendokFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosisSelendok();
}
/*static void _OnICDDiagnosisSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosisKillfocus();
}*/
/*static void _OnICDDiagnosisKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosisKillfocus();
}*/
static long _OnICDDiagnosisLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosisLoadData();
}
/*static void _OnICDDiagnosisAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnICDDiagnosisAddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnConclusionCheckValue();
} 
static void _OnHospitalNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalTransfer* )pWnd)->OnHospitalNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHospitalNameSelendokFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameSelendok();
}
/*static void _OnHospitalNameSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameKillfocus();
}*/
/*static void _OnHospitalNameKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameKillfocus();
}*/
static long _OnHospitalNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnHospitalNameLoadData();
}
/*static void _OnHospitalNameAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnHospitalNameAddNew();
}*/
/*static void _OnOutDateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnOutDateChange();
} */
/*static void _OnOutDateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnOutDateSetfocus();} */ 
/*static void _OnOutDateKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnOutDateKillfocus();
} */
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnOutDateCheckValue();
} 
/*static void _OnClinicalSymbolChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolChange();
} */
/*static void _OnClinicalSymbolSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolSetfocus();} */ 
/*static void _OnClinicalSymbolKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolKillfocus();
} */
static int _OnClinicalSymbolCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnClinicalSymbolCheckValue();
} 
/*static void _OnTestsChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTestsChange();
} */
/*static void _OnTestsSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTestsSetfocus();} */ 
/*static void _OnTestsKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTestsKillfocus();
} */
static int _OnTestsCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnTestsCheckValue();
} 
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnMedicineUsedChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedChange();
} */
/*static void _OnMedicineUsedSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedSetfocus();} */ 
/*static void _OnMedicineUsedKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedKillfocus();
} */
static int _OnMedicineUsedCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnMedicineUsedCheckValue();
} 
/*static void _OnPatientStateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnPatientStateChange();
} */
/*static void _OnPatientStateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnPatientStateSetfocus();} */ 
/*static void _OnPatientStateKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnPatientStateKillfocus();
} */
static int _OnPatientStateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnPatientStateCheckValue();
} 
/*static void _OnTransferDateChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransferDateChange();
} */
/*static void _OnTransferDateSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransferDateSetfocus();} */ 
/*static void _OnTransferDateKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransferDateKillfocus();
} */
static int _OnTransferDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnTransferDateCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnReasonCheckValue();
} 
static void _OnTransportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalTransfer* )pWnd)->OnTransportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportSelendokFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportSelendok();
}
/*static void _OnTransportSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportKillfocus();
}*/
/*static void _OnTransportKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportKillfocus();
}*/
static long _OnTransportLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnTransportLoadData();
}
/*static void _OnTransportAddNewFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnTransportAddNew();
}*/
/*static void _OnAttenderChangeFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnAttenderChange();
} */
/*static void _OnAttenderSetfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnAttenderSetfocus();} */ 
/*static void _OnAttenderKillfocusFnc(CWnd *pWnd){
	((CHMSHospitalTransfer *)pWnd)->OnAttenderKillfocus();
} */
static int _OnAttenderCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalTransfer *)pWnd)->OnAttenderCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSHospitalTransfer *pVw = (CHMSHospitalTransfer *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnAddHMSHospitalTransfer();
} 
static int _OnEditHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnEditHMSHospitalTransfer();
} 
static int _OnDeleteHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnDeleteHMSHospitalTransfer();
} 
static int _OnSaveHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnSaveHMSHospitalTransfer();
} 
static int _OnCancelHMSHospitalTransferFnc(CWnd *pWnd){
	 return ((CHMSHospitalTransfer*)pWnd)->OnCancelHMSHospitalTransfer();
} 
CHMSHospitalTransfer::CHMSHospitalTransfer(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 490;
	SetDefaultValues();
}
CHMSHospitalTransfer::~CHMSHospitalTransfer(){
}
void CHMSHospitalTransfer::OnCreateComponents(){
	m_wndHospitalTransferInformation.Create(this, _T("Hospital Transfer Information"), 5, 5, 600, 455);
	m_wndICDDiagnosisLabel.Create(this, _T("ICD Diagnosis"), 10, 30, 130, 55);
	m_wndICDDiagnosis.Create(this,135, 30, 595, 55); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 60, 130, 85);
	m_wndConclusion.Create(this,135, 60, 595, 110); 
	m_wndHospitalNameLabel.Create(this, _T("Hospital Name"), 10, 115, 130, 140);
	m_wndHospitalName.Create(this,135, 115, 380, 140); 
	m_wndOutDateLabel.Create(this, _T("Out Date"), 385, 115, 465, 140);
	m_wndOutDate.Create(this,470, 115, 595, 140); 
	m_wndClinicalSymbolLabel.Create(this, _T("Clinical Symbol"), 10, 145, 130, 170);
	m_wndClinicalSymbol.Create(this,135, 145, 595, 220); 
	m_wndTestsLabel.Create(this, _T("Tests"), 10, 225, 130, 250);
	m_wndTests.Create(this,135, 225, 595, 275); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 280, 130, 305);
	m_wndMainDisease.Create(this,135, 280, 595, 305); 
	m_wndMedicineUsedLabel.Create(this, _T("Medicine Used"), 10, 310, 130, 335);
	m_wndMedicineUsed.Create(this,135, 310, 595, 360); 
	m_wndPatientStateLabel.Create(this, _T("Patient State"), 10, 365, 130, 390);
	m_wndPatientState.Create(this,135, 364, 595, 389); 
	m_wndTransferDateLabel.Create(this, _T("Transfer Date"), 10, 395, 130, 420);
	m_wndTransferDate.Create(this,135, 395, 260, 420); 
	m_wndReasonLabel.Create(this, _T("Reason"), 265, 395, 345, 420);
	m_wndReason.Create(this,350, 395, 595, 420); 
	m_wndTransportLabel.Create(this, _T("Transport"), 10, 425, 130, 450);
	m_wndTransport.Create(this,135, 425, 260, 450); 
	m_wndAttenderLabel.Create(this, _T("Attender"), 265, 425, 345, 450);
	m_wndAttender.Create(this,350, 425, 595, 450); 
	m_wndUpdate.Create(this, _T("&Update"), 285, 460, 360, 485);
	m_wndSave.Create(this, _T("&Save"), 365, 460, 440, 485);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 460, 520, 485);
	m_wndPrint.Create(this, _T("&Print"), 525, 460, 600, 485);

}
void CHMSHospitalTransfer::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndICDDiagnosis.SetCheckValue(true);
	m_wndICDDiagnosis.LimitText(35);
	m_wndConclusion.SetLimitText(1024);
	m_wndConclusion.SetCheckValue(true);
	m_wndHospitalName.SetCheckValue(true);
	m_wndHospitalName.LimitText(1024);
	m_wndOutDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOutDate.SetCheckValue(true);
	m_wndClinicalSymbol.SetLimitText(1024);
	m_wndClinicalSymbol.SetCheckValue(true);
	m_wndTests.SetLimitText(1024);
	m_wndTests.SetCheckValue(true);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndMedicineUsed.SetLimitText(1024);
	m_wndMedicineUsed.SetCheckValue(true);
	m_wndPatientState.SetLimitText(1024);
	m_wndPatientState.SetCheckValue(true);
	m_wndTransferDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTransferDate.SetCheckValue(true);
	m_wndReason.SetLimitText(1024);
	m_wndReason.SetCheckValue(true);
	m_wndTransport.SetCheckValue(true);
	m_wndTransport.LimitText(1024);
	m_wndAttender.SetLimitText(1024);
	m_wndAttender.SetCheckValue(true);


	m_wndICDDiagnosis.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICDDiagnosis.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndHospitalName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndHospitalName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTransport.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTransport.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSHospitalTransfer::OnSetWindowEvents(){
	m_wndICDDiagnosis.SetEvent(WE_SELENDOK, _OnICDDiagnosisSelendokFnc);
	//m_wndICDDiagnosis.SetEvent(WE_SETFOCUS, _OnICDDiagnosisSetfocusFnc);
	//m_wndICDDiagnosis.SetEvent(WE_KILLFOCUS, _OnICDDiagnosisKillfocusFnc);
	m_wndICDDiagnosis.SetEvent(WE_SELCHANGE, _OnICDDiagnosisSelectChangeFnc);
	m_wndICDDiagnosis.SetEvent(WE_LOADDATA, _OnICDDiagnosisLoadDataFnc);
	//m_wndICDDiagnosis.SetEvent(WE_ADDNEW, _OnICDDiagnosisAddNewFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndHospitalName.SetEvent(WE_SELENDOK, _OnHospitalNameSelendokFnc);
	//m_wndHospitalName.SetEvent(WE_SETFOCUS, _OnHospitalNameSetfocusFnc);
	//m_wndHospitalName.SetEvent(WE_KILLFOCUS, _OnHospitalNameKillfocusFnc);
	m_wndHospitalName.SetEvent(WE_SELCHANGE, _OnHospitalNameSelectChangeFnc);
	m_wndHospitalName.SetEvent(WE_LOADDATA, _OnHospitalNameLoadDataFnc);
	//m_wndHospitalName.SetEvent(WE_ADDNEW, _OnHospitalNameAddNewFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	//m_wndClinicalSymbol.SetEvent(WE_CHANGE, _OnClinicalSymbolChangeFnc);
	//m_wndClinicalSymbol.SetEvent(WE_SETFOCUS, _OnClinicalSymbolSetfocusFnc);
	//m_wndClinicalSymbol.SetEvent(WE_KILLFOCUS, _OnClinicalSymbolKillfocusFnc);
	m_wndClinicalSymbol.SetEvent(WE_CHECKVALUE, _OnClinicalSymbolCheckValueFnc);
	//m_wndTests.SetEvent(WE_CHANGE, _OnTestsChangeFnc);
	//m_wndTests.SetEvent(WE_SETFOCUS, _OnTestsSetfocusFnc);
	//m_wndTests.SetEvent(WE_KILLFOCUS, _OnTestsKillfocusFnc);
	m_wndTests.SetEvent(WE_CHECKVALUE, _OnTestsCheckValueFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndMedicineUsed.SetEvent(WE_CHANGE, _OnMedicineUsedChangeFnc);
	//m_wndMedicineUsed.SetEvent(WE_SETFOCUS, _OnMedicineUsedSetfocusFnc);
	//m_wndMedicineUsed.SetEvent(WE_KILLFOCUS, _OnMedicineUsedKillfocusFnc);
	m_wndMedicineUsed.SetEvent(WE_CHECKVALUE, _OnMedicineUsedCheckValueFnc);
	//m_wndPatientState.SetEvent(WE_CHANGE, _OnPatientStateChangeFnc);
	//m_wndPatientState.SetEvent(WE_SETFOCUS, _OnPatientStateSetfocusFnc);
	//m_wndPatientState.SetEvent(WE_KILLFOCUS, _OnPatientStateKillfocusFnc);
	m_wndPatientState.SetEvent(WE_CHECKVALUE, _OnPatientStateCheckValueFnc);
	//m_wndTransferDate.SetEvent(WE_CHANGE, _OnTransferDateChangeFnc);
	//m_wndTransferDate.SetEvent(WE_SETFOCUS, _OnTransferDateSetfocusFnc);
	//m_wndTransferDate.SetEvent(WE_KILLFOCUS, _OnTransferDateKillfocusFnc);
	m_wndTransferDate.SetEvent(WE_CHECKVALUE, _OnTransferDateCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndTransport.SetEvent(WE_SELENDOK, _OnTransportSelendokFnc);
	//m_wndTransport.SetEvent(WE_SETFOCUS, _OnTransportSetfocusFnc);
	//m_wndTransport.SetEvent(WE_KILLFOCUS, _OnTransportKillfocusFnc);
	m_wndTransport.SetEvent(WE_SELCHANGE, _OnTransportSelectChangeFnc);
	m_wndTransport.SetEvent(WE_LOADDATA, _OnTransportLoadDataFnc);
	//m_wndTransport.SetEvent(WE_ADDNEW, _OnTransportAddNewFnc);
	//m_wndAttender.SetEvent(WE_CHANGE, _OnAttenderChangeFnc);
	//m_wndAttender.SetEvent(WE_SETFOCUS, _OnAttenderSetfocusFnc);
	//m_wndAttender.SetEvent(WE_KILLFOCUS, _OnAttenderKillfocusFnc);
	m_wndAttender.SetEvent(WE_CHECKVALUE, _OnAttenderCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSHospitalTransferFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSHospitalTransferFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSHospitalTransferFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSHospitalTransferFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSHospitalTransferFnc, 0, 'T', VK_CONTROL);

}
void CHMSHospitalTransfer::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndICDDiagnosis.GetDlgCtrlID(), m_szICDDiagnosisKey);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_TextEx(pDX, m_wndHospitalName.GetDlgCtrlID(), m_szHospitalNameKey);
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_Text(pDX, m_wndClinicalSymbol.GetDlgCtrlID(), m_szClinicalSymbol);
	DDX_Text(pDX, m_wndTests.GetDlgCtrlID(), m_szTests);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndMedicineUsed.GetDlgCtrlID(), m_szMedicineUsed);
	DDX_Text(pDX, m_wndPatientState.GetDlgCtrlID(), m_szPatientState);
	DDX_TextEx(pDX, m_wndTransferDate.GetDlgCtrlID(), m_szTransferDate);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_TextEx(pDX, m_wndTransport.GetDlgCtrlID(), m_szTransportKey);
	DDX_Text(pDX, m_wndAttender.GetDlgCtrlID(), m_szAttender);

}
void CHMSHospitalTransfer::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSHospitalTransfer::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSHospitalTransfer::SetDefaultValues(){

	m_szICDDiagnosisKey.Empty();
	m_szConclusion.Empty();
	m_szHospitalNameKey.Empty();
	m_szOutDate.Empty();
	m_szClinicalSymbol.Empty();
	m_szTests.Empty();
	m_szMainDisease.Empty();
	m_szMedicineUsed.Empty();
	m_szPatientState.Empty();
	m_szTransferDate.Empty();
	m_szReason.Empty();
	m_szTransportKey.Empty();
	m_szAttender.Empty();

}
int CHMSHospitalTransfer::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
void CHMSHospitalTransfer::OnICDDiagnosisSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnICDDiagnosisSelendok(){
	 
}
/*void CHMSHospitalTransfer::OnICDDiagnosisSetfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnICDDiagnosisKillfocus(){
	
}*/
long CHMSHospitalTransfer::OnICDDiagnosisLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICDDiagnosis.IsSearchKey() && !m_szICDDiagnosisKey.IsEmpty()){
	};
	m_wndICDDiagnosis.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICDDiagnosis.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitalTransfer::OnICDDiagnosisAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSHospitalTransfer::OnConclusionChange(){
	
} */
/*void CHMSHospitalTransfer::OnConclusionSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnConclusionKillfocus(){
	
} */
int CHMSHospitalTransfer::OnConclusionCheckValue(){
	return 0;
} 
void CHMSHospitalTransfer::OnHospitalNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnHospitalNameSelendok(){
	 
}
/*void CHMSHospitalTransfer::OnHospitalNameSetfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnHospitalNameKillfocus(){
	
}*/
long CHMSHospitalTransfer::OnHospitalNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospitalName.IsSearchKey() && !m_szHospitalNameKey.IsEmpty()){
	};
	m_wndHospitalName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospitalName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitalTransfer::OnHospitalNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSHospitalTransfer::OnOutDateChange(){
	
} */
/*void CHMSHospitalTransfer::OnOutDateSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnOutDateKillfocus(){
	
} */
int CHMSHospitalTransfer::OnOutDateCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnClinicalSymbolChange(){
	
} */
/*void CHMSHospitalTransfer::OnClinicalSymbolSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnClinicalSymbolKillfocus(){
	
} */
int CHMSHospitalTransfer::OnClinicalSymbolCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnTestsChange(){
	
} */
/*void CHMSHospitalTransfer::OnTestsSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnTestsKillfocus(){
	
} */
int CHMSHospitalTransfer::OnTestsCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnMainDiseaseChange(){
	
} */
/*void CHMSHospitalTransfer::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnMainDiseaseKillfocus(){
	
} */
int CHMSHospitalTransfer::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnMedicineUsedChange(){
	
} */
/*void CHMSHospitalTransfer::OnMedicineUsedSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnMedicineUsedKillfocus(){
	
} */
int CHMSHospitalTransfer::OnMedicineUsedCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnPatientStateChange(){
	
} */
/*void CHMSHospitalTransfer::OnPatientStateSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnPatientStateKillfocus(){
	
} */
int CHMSHospitalTransfer::OnPatientStateCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnTransferDateChange(){
	
} */
/*void CHMSHospitalTransfer::OnTransferDateSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnTransferDateKillfocus(){
	
} */
int CHMSHospitalTransfer::OnTransferDateCheckValue(){
	return 0;
} 
/*void CHMSHospitalTransfer::OnReasonChange(){
	
} */
/*void CHMSHospitalTransfer::OnReasonSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnReasonKillfocus(){
	
} */
int CHMSHospitalTransfer::OnReasonCheckValue(){
	return 0;
} 
void CHMSHospitalTransfer::OnTransportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnTransportSelendok(){
	 
}
/*void CHMSHospitalTransfer::OnTransportSetfocus(){
	
}*/
/*void CHMSHospitalTransfer::OnTransportKillfocus(){
	
}*/
long CHMSHospitalTransfer::OnTransportLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransport.IsSearchKey() && !m_szTransportKey.IsEmpty()){
	};
	m_wndTransport.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransport.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitalTransfer::OnTransportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSHospitalTransfer::OnAttenderChange(){
	
} */
/*void CHMSHospitalTransfer::OnAttenderSetfocus(){
	
} */
/*void CHMSHospitalTransfer::OnAttenderKillfocus(){
	
} */
int CHMSHospitalTransfer::OnAttenderCheckValue(){
	return 0;
} 
void CHMSHospitalTransfer::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitalTransfer::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSHospitalTransfer::OnAddHMSHospitalTransfer(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSHospitalTransfer"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSHospitalTransfer::OnEditHMSHospitalTransfer(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSHospitalTransfer"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSHospitalTransfer::OnDeleteHMSHospitalTransfer(){
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
 		OnCancelHMSHospitalTransfer(); 
 	}
return 0;
 } 
int CHMSHospitalTransfer::OnSaveHMSHospitalTransfer(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSHospitalTransferListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSHospitalTransfer::OnCancelHMSHospitalTransfer(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSHospitalTransfer::OnHMSHospitalTransferListLoadData(){
	return 0;
}
