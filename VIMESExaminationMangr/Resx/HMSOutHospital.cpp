#include "HMSOutHospital.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSOutHospital *pVw = (CHMSOutHospital *)pWnd;
	return pVw->OnUpdateSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOutHospital *pVw = (CHMSOutHospital *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOutHospital *pVw = (CHMSOutHospital *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOutHospital* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnResultSelendokFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnResultSelendok();
}
/*static int _OnResultSetfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnResultKillfocus();
}*/
/*static int _OnResultKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnResultKillfocus();
}*/
static int _OnResultLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnResultLoadData();
}
/*static int _OnResultAddNewFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnResultAddNew();
}*/
/*static int _OnOutDateChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnOutDateChange();
} */
/*static int _OnOutDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnOutDateKillfocus();} */ 
/*static int _OnOutDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnOutDateKillfocus();
} */
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnOutDateCheckValue();
} 
/*static int _OnDieDateChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDieDateChange();
} */
/*static int _OnDieDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDieDateKillfocus();} */ 
/*static int _OnDieDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDieDateKillfocus();
} */
static int _OnDieDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDieDateCheckValue();
} 
/*static int _OnReasonInHospitalChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnReasonInHospitalChange();
} */
/*static int _OnReasonInHospitalSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnReasonInHospitalKillfocus();} */ 
/*static int _OnReasonInHospitalKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnReasonInHospitalKillfocus();
} */
static int _OnReasonInHospitalCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnReasonInHospitalCheckValue();
} 
/*static int _OnClinicalProcessChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnClinicalProcessChange();
} */
/*static int _OnClinicalProcessSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnClinicalProcessKillfocus();} */ 
/*static int _OnClinicalProcessKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnClinicalProcessKillfocus();
} */
static int _OnClinicalProcessCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnClinicalProcessCheckValue();
} 
/*static int _OnMainTestResultChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnMainTestResultChange();
} */
/*static int _OnMainTestResultSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnMainTestResultKillfocus();} */ 
/*static int _OnMainTestResultKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnMainTestResultKillfocus();
} */
static int _OnMainTestResultCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnMainTestResultCheckValue();
} 
/*static int _OnSurgicalResultChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnSurgicalResultChange();
} */
/*static int _OnSurgicalResultSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnSurgicalResultKillfocus();} */ 
/*static int _OnSurgicalResultKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnSurgicalResultKillfocus();
} */
static int _OnSurgicalResultCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnSurgicalResultCheckValue();
} 
static int _OnDiagnosticInHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOutHospital* )pWnd)->OnDiagnosticInHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDiagnosticInHospitalSelendokFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiagnosticInHospitalSelendok();
}
/*static int _OnDiagnosticInHospitalSetfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiagnosticInHospitalKillfocus();
}*/
/*static int _OnDiagnosticInHospitalKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiagnosticInHospitalKillfocus();
}*/
static int _OnDiagnosticInHospitalLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiagnosticInHospitalLoadData();
}
/*static int _OnDiagnosticInHospitalAddNewFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiagnosticInHospitalAddNew();
}*/
static int _OnMainDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOutHospital* )pWnd)->OnMainDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnMainDiseaseSelendokFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnMainDiseaseSelendok();
}
/*static int _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnMainDiseaseKillfocus();
}*/
/*static int _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnMainDiseaseKillfocus();
}*/
static int _OnMainDiseaseLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnMainDiseaseLoadData();
}
/*static int _OnMainDiseaseAddNewFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnMainDiseaseAddNew();
}*/
/*static int _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnRelationDiseaseChange();
} */
/*static int _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnRelationDiseaseKillfocus();} */ 
/*static int _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnRelationDiseaseCheckValue();
} 
static int _OnDiseaseAccompaniedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOutHospital* )pWnd)->OnDiseaseAccompaniedSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDiseaseAccompaniedSelendokFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiseaseAccompaniedSelendok();
}
/*static int _OnDiseaseAccompaniedSetfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiseaseAccompaniedKillfocus();
}*/
/*static int _OnDiseaseAccompaniedKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiseaseAccompaniedKillfocus();
}*/
static int _OnDiseaseAccompaniedLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiseaseAccompaniedLoadData();
}
/*static int _OnDiseaseAccompaniedAddNewFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDiseaseAccompaniedAddNew();
}*/
/*static int _OnPatientStatusChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnPatientStatusChange();
} */
/*static int _OnPatientStatusSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnPatientStatusKillfocus();} */ 
/*static int _OnPatientStatusKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnPatientStatusKillfocus();
} */
static int _OnPatientStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnPatientStatusCheckValue();
} 
/*static int _OnDirectionAndRegimenChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDirectionAndRegimenChange();
} */
/*static int _OnDirectionAndRegimenSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDirectionAndRegimenKillfocus();} */ 
/*static int _OnDirectionAndRegimenKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDirectionAndRegimenKillfocus();
} */
static int _OnDirectionAndRegimenCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDirectionAndRegimenCheckValue();
} 
/*static int _OnTotalDateOfTreatmentChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnTotalDateOfTreatmentChange();
} */
/*static int _OnTotalDateOfTreatmentSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnTotalDateOfTreatmentKillfocus();} */ 
/*static int _OnTotalDateOfTreatmentKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnTotalDateOfTreatmentKillfocus();
} */
static int _OnTotalDateOfTreatmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnTotalDateOfTreatmentCheckValue();
} 
static int _OnDieBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOutHospital* )pWnd)->OnDieBySelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDieBySelendokFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDieBySelendok();
}
/*static int _OnDieBySetfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDieByKillfocus();
}*/
/*static int _OnDieByKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDieByKillfocus();
}*/
static int _OnDieByLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDieByLoadData();
}
/*static int _OnDieByAddNewFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnDieByAddNew();
}*/
/*static int _OnDieMainReasonChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDieMainReasonChange();
} */
/*static int _OnDieMainReasonSetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDieMainReasonKillfocus();} */ 
/*static int _OnDieMainReasonKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDieMainReasonKillfocus();
} */
static int _OnDieMainReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDieMainReasonCheckValue();
} 
static int _OnSurgerySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOutHospital* )pWnd)->OnSurgerySelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnSurgerySelendokFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnSurgerySelendok();
}
/*static int _OnSurgerySetfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnSurgeryKillfocus();
}*/
/*static int _OnSurgeryKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnSurgeryKillfocus();
}*/
static int _OnSurgeryLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnSurgeryLoadData();
}
/*static int _OnSurgeryAddNewFnc(CWnd *pWnd){
	 return ((CHMSOutHospital *)pWnd)->OnSurgeryAddNew();
}*/
static int _OnAutopsySelectFnc(CWnd *pWnd){
	 return ((CHMSOutHospital*)pWnd)->OnAutopsySelect();
}
/*static int _OnDiagnosticOfAutopsyChangeFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDiagnosticOfAutopsyChange();
} */
/*static int _OnDiagnosticOfAutopsySetfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDiagnosticOfAutopsyKillfocus();} */ 
/*static int _OnDiagnosticOfAutopsyKillfocusFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDiagnosticOfAutopsyKillfocus();
} */
static int _OnDiagnosticOfAutopsyCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutHospital *)pWnd)->OnDiagnosticOfAutopsyCheckValue();
} 
static int _OnAddHMSOutHospitalFnc(CWnd *pWnd){
	 return ((CHMSOutHospital*)pWnd)->OnAddHMSOutHospital();
} 
static int _OnEditHMSOutHospitalFnc(CWnd *pWnd){
	 return ((CHMSOutHospital*)pWnd)->OnEditHMSOutHospital();
} 
static int _OnDeleteHMSOutHospitalFnc(CWnd *pWnd){
	 return ((CHMSOutHospital*)pWnd)->OnDeleteHMSOutHospital();
} 
static int _OnSaveHMSOutHospitalFnc(CWnd *pWnd){
	 return ((CHMSOutHospital*)pWnd)->OnSaveHMSOutHospital();
} 
static int _OnCancelHMSOutHospitalFnc(CWnd *pWnd){
	 return ((CHMSOutHospital*)pWnd)->OnCancelHMSOutHospital();
} 
CHMSOutHospital::CHMSOutHospital(){

	m_nDlgWidth = 742;
	m_nDlgHeight = 597;
	SetDefaultValues();
}
CHMSOutHospital::~CHMSOutHospital(){
}
void CHMSOutHospital::OnCreateComponents(){
	m_wndOutOfHospitalInformation.Create(this, _T("Out Of Hospital Information"), 6, 5, 599, 28);
	m_wndUpdate.Create(this, _T("&Update"), 396, 481, 461, 503);
	m_wndSave.Create(this, _T("&Save"), 466, 481, 531, 503);
	m_wndCancel.Create(this, _T("&Cancel"), 536, 481, 601, 503);
	m_wndResultLabel.Create(this, _T("Result"), 7, 33, 114, 53);
	m_wndResult.Create(this,119, 33, 240, 53); 
	m_wndOutDateLabel.Create(this, _T("Out Date"), 245, 33, 325, 53);
	m_wndOutDate.Create(this,330, 33, 430, 53); 
	m_wndDieDateLabel.Create(this, _T("Die Date"), 6, 58, 113, 78);
	m_wndDieDate.Create(this,118, 58, 222, 78); 
	m_wndReasonInHospitalLabel.Create(this, _T("Reason In Hospital"), 7, 133, 114, 153);
	m_wndReasonInHospital.Create(this,119, 133, 591, 169); 
	m_wndClinicalProcessLabel.Create(this, _T("Clinical Process"), 7, 174, 114, 194);
	m_wndClinicalProcess.Create(this,119, 174, 591, 222); 
	m_wndMainTestResultLabel.Create(this, _T("Main Test Result"), 7, 227, 114, 247);
	m_wndMainTestResult.Create(this,119, 227, 591, 263); 
	m_wndSurgicalResultLabel.Create(this, _T("Surgical Result"), 7, 268, 114, 288);
	m_wndSurgicalResult.Create(this,119, 268, 591, 304); 
	m_wndDiagnosticInHospitalLabel.Create(this, _T("Diagnostic In Hospital"), 7, 309, 114, 329);
	m_wndDiagnosticInHospital.Create(this,119, 309, 591, 329); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 7, 334, 114, 354);
	m_wndMainDisease.Create(this,119, 334, 591, 354); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 7, 384, 114, 404);
	m_wndRelationDisease.Create(this,119, 384, 591, 404); 
	m_wndDiseaseAccompaniedLabel.Create(this, _T("Disease Accompanied"), 7, 359, 114, 379);
	m_wndDiseaseAccompanied.Create(this,119, 359, 591, 379); 
	m_wndPatientStatusLabel.Create(this, _T("Patient Status"), 7, 409, 114, 429);
	m_wndPatientStatus.Create(this,119, 409, 281, 429); 
	m_wndDirectionAndRegimenLabel.Create(this, _T("Direction And Regimen"), 7, 434, 114, 454);
	m_wndDirectionAndRegimen.Create(this,119, 434, 591, 470); 
	m_wndTotalDateOfTreatmentLabel.Create(this, _T("Total Date Of Treatment"), 286, 409, 336, 429);
	m_wndTotalDateOfTreatment.Create(this,341, 409, 416, 429); 
	m_wndDieByLabel.Create(this, _T("Die By"), 244, 58, 324, 78);
	m_wndDieBy.Create(this,329, 58, 429, 78); 
	m_wndDieMainReasonLabel.Create(this, _T("Die Main Reason"), 5, 83, 112, 103);
	m_wndDieMainReason.Create(this,117, 83, 429, 103); 
	m_wndSurgeryLabel.Create(this, _T("Surgery"), 435, 33, 494, 53);
	m_wndSurgery.Create(this,499, 33, 596, 53); 
	m_wndAutopsy.Create(this, _T("Autopsy"), 434, 83, 493, 103);
	m_wndDiagnosticOfAutopsyLabel.Create(this, _T("Diagnostic Of Autopsy"), 5, 108, 112, 128);
	m_wndDiagnosticOfAutopsy.Create(this,117, 108, 591, 128); 

}
void CHMSOutHospital::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndResult.SetDataRequirement(TRUE);
	m_wndResult.LimitText(1024);
	m_wndOutDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndOutDate.SetDataRequirement(TRUE);
	m_wndDieDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndDieDate.SetDataRequirement(TRUE);
	m_wndReasonInHospital.SetLimitText(1024);
	m_wndReasonInHospital.SetDataRequirement(TRUE);
	m_wndClinicalProcess.SetLimitText(1024);
	m_wndClinicalProcess.SetDataRequirement(TRUE);
	m_wndMainTestResult.SetLimitText(1024);
	m_wndMainTestResult.SetDataRequirement(TRUE);
	m_wndSurgicalResult.SetLimitText(1024);
	m_wndSurgicalResult.SetDataRequirement(TRUE);
	m_wndDiagnosticInHospital.SetDataRequirement(TRUE);
	m_wndDiagnosticInHospital.LimitText(1024);
	m_wndMainDisease.SetDataRequirement(TRUE);
	m_wndMainDisease.LimitText(1024);
	m_wndRelationDisease.SetLimitText(1024);
	m_wndRelationDisease.SetDataRequirement(TRUE);
	m_wndDiseaseAccompanied.SetDataRequirement(TRUE);
	m_wndDiseaseAccompanied.LimitText(1024);
	m_wndPatientStatus.SetLimitText(1024);
	m_wndPatientStatus.SetDataRequirement(TRUE);
	m_wndDirectionAndRegimen.SetLimitText(1024);
	m_wndDirectionAndRegimen.SetDataRequirement(TRUE);
	m_wndTotalDateOfTreatment.SetLimitText(1024);
	m_wndTotalDateOfTreatment.SetDataRequirement(TRUE);
	m_wndDieBy.SetDataRequirement(TRUE);
	m_wndDieBy.LimitText(1024);
	m_wndDieMainReason.SetLimitText(1024);
	m_wndDieMainReason.SetDataRequirement(TRUE);
	m_wndSurgery.SetDataRequirement(TRUE);
	m_wndSurgery.LimitText(1024);
	m_wndDiagnosticOfAutopsy.SetLimitText(1024);
	m_wndDiagnosticOfAutopsy.SetDataRequirement(TRUE);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDiagnosticInHospital.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiagnosticInHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMainDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMainDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDiseaseAccompanied.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiseaseAccompanied.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDieBy.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDieBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSurgery.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSurgery.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSOutHospital::OnSetWindowEvents(){
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	//m_wndDieDate.SetEvent(WE_CHANGE, _OnDieDateChangeFnc);
	//m_wndDieDate.SetEvent(WE_SETFOCUS, _OnDieDateSetfocusFnc);
	//m_wndDieDate.SetEvent(WE_KILLFOCUS, _OnDieDateKillfocusFnc);
	m_wndDieDate.SetEvent(WE_CHECKVALUE, _OnDieDateCheckValueFnc);
	//m_wndReasonInHospital.SetEvent(WE_CHANGE, _OnReasonInHospitalChangeFnc);
	//m_wndReasonInHospital.SetEvent(WE_SETFOCUS, _OnReasonInHospitalSetfocusFnc);
	//m_wndReasonInHospital.SetEvent(WE_KILLFOCUS, _OnReasonInHospitalKillfocusFnc);
	m_wndReasonInHospital.SetEvent(WE_CHECKVALUE, _OnReasonInHospitalCheckValueFnc);
	//m_wndClinicalProcess.SetEvent(WE_CHANGE, _OnClinicalProcessChangeFnc);
	//m_wndClinicalProcess.SetEvent(WE_SETFOCUS, _OnClinicalProcessSetfocusFnc);
	//m_wndClinicalProcess.SetEvent(WE_KILLFOCUS, _OnClinicalProcessKillfocusFnc);
	m_wndClinicalProcess.SetEvent(WE_CHECKVALUE, _OnClinicalProcessCheckValueFnc);
	//m_wndMainTestResult.SetEvent(WE_CHANGE, _OnMainTestResultChangeFnc);
	//m_wndMainTestResult.SetEvent(WE_SETFOCUS, _OnMainTestResultSetfocusFnc);
	//m_wndMainTestResult.SetEvent(WE_KILLFOCUS, _OnMainTestResultKillfocusFnc);
	m_wndMainTestResult.SetEvent(WE_CHECKVALUE, _OnMainTestResultCheckValueFnc);
	//m_wndSurgicalResult.SetEvent(WE_CHANGE, _OnSurgicalResultChangeFnc);
	//m_wndSurgicalResult.SetEvent(WE_SETFOCUS, _OnSurgicalResultSetfocusFnc);
	//m_wndSurgicalResult.SetEvent(WE_KILLFOCUS, _OnSurgicalResultKillfocusFnc);
	m_wndSurgicalResult.SetEvent(WE_CHECKVALUE, _OnSurgicalResultCheckValueFnc);
	m_wndDiagnosticInHospital.SetEvent(WE_SELENDOK, _OnDiagnosticInHospitalSelendokFnc);
	//m_wndDiagnosticInHospital.SetEvent(WE_SETFOCUS, _OnDiagnosticInHospitalSetfocusFnc);
	//m_wndDiagnosticInHospital.SetEvent(WE_KILLFOCUS, _OnDiagnosticInHospitalKillfocusFnc);
	m_wndDiagnosticInHospital.SetEvent(WE_SELCHANGE, _OnDiagnosticInHospitalSelectChangeFnc);
	m_wndDiagnosticInHospital.SetEvent(WE_LOADDATA, _OnDiagnosticInHospitalLoadDataFnc);
	//m_wndDiagnosticInHospital.SetEvent(WE_ADDNEW, _OnDiagnosticInHospitalAddNewFnc);
	m_wndMainDisease.SetEvent(WE_SELENDOK, _OnMainDiseaseSelendokFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_SELCHANGE, _OnMainDiseaseSelectChangeFnc);
	m_wndMainDisease.SetEvent(WE_LOADDATA, _OnMainDiseaseLoadDataFnc);
	//m_wndMainDisease.SetEvent(WE_ADDNEW, _OnMainDiseaseAddNewFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_SELENDOK, _OnDiseaseAccompaniedSelendokFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_SETFOCUS, _OnDiseaseAccompaniedSetfocusFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_KILLFOCUS, _OnDiseaseAccompaniedKillfocusFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_SELCHANGE, _OnDiseaseAccompaniedSelectChangeFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_LOADDATA, _OnDiseaseAccompaniedLoadDataFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_ADDNEW, _OnDiseaseAccompaniedAddNewFnc);
	//m_wndPatientStatus.SetEvent(WE_CHANGE, _OnPatientStatusChangeFnc);
	//m_wndPatientStatus.SetEvent(WE_SETFOCUS, _OnPatientStatusSetfocusFnc);
	//m_wndPatientStatus.SetEvent(WE_KILLFOCUS, _OnPatientStatusKillfocusFnc);
	m_wndPatientStatus.SetEvent(WE_CHECKVALUE, _OnPatientStatusCheckValueFnc);
	//m_wndDirectionAndRegimen.SetEvent(WE_CHANGE, _OnDirectionAndRegimenChangeFnc);
	//m_wndDirectionAndRegimen.SetEvent(WE_SETFOCUS, _OnDirectionAndRegimenSetfocusFnc);
	//m_wndDirectionAndRegimen.SetEvent(WE_KILLFOCUS, _OnDirectionAndRegimenKillfocusFnc);
	m_wndDirectionAndRegimen.SetEvent(WE_CHECKVALUE, _OnDirectionAndRegimenCheckValueFnc);
	//m_wndTotalDateOfTreatment.SetEvent(WE_CHANGE, _OnTotalDateOfTreatmentChangeFnc);
	//m_wndTotalDateOfTreatment.SetEvent(WE_SETFOCUS, _OnTotalDateOfTreatmentSetfocusFnc);
	//m_wndTotalDateOfTreatment.SetEvent(WE_KILLFOCUS, _OnTotalDateOfTreatmentKillfocusFnc);
	m_wndTotalDateOfTreatment.SetEvent(WE_CHECKVALUE, _OnTotalDateOfTreatmentCheckValueFnc);
	m_wndDieBy.SetEvent(WE_SELENDOK, _OnDieBySelendokFnc);
	//m_wndDieBy.SetEvent(WE_SETFOCUS, _OnDieBySetfocusFnc);
	//m_wndDieBy.SetEvent(WE_KILLFOCUS, _OnDieByKillfocusFnc);
	m_wndDieBy.SetEvent(WE_SELCHANGE, _OnDieBySelectChangeFnc);
	m_wndDieBy.SetEvent(WE_LOADDATA, _OnDieByLoadDataFnc);
	//m_wndDieBy.SetEvent(WE_ADDNEW, _OnDieByAddNewFnc);
	//m_wndDieMainReason.SetEvent(WE_CHANGE, _OnDieMainReasonChangeFnc);
	//m_wndDieMainReason.SetEvent(WE_SETFOCUS, _OnDieMainReasonSetfocusFnc);
	//m_wndDieMainReason.SetEvent(WE_KILLFOCUS, _OnDieMainReasonKillfocusFnc);
	m_wndDieMainReason.SetEvent(WE_CHECKVALUE, _OnDieMainReasonCheckValueFnc);
	m_wndSurgery.SetEvent(WE_SELENDOK, _OnSurgerySelendokFnc);
	//m_wndSurgery.SetEvent(WE_SETFOCUS, _OnSurgerySetfocusFnc);
	//m_wndSurgery.SetEvent(WE_KILLFOCUS, _OnSurgeryKillfocusFnc);
	m_wndSurgery.SetEvent(WE_SELCHANGE, _OnSurgerySelectChangeFnc);
	m_wndSurgery.SetEvent(WE_LOADDATA, _OnSurgeryLoadDataFnc);
	//m_wndSurgery.SetEvent(WE_ADDNEW, _OnSurgeryAddNewFnc);
	m_wndAutopsy.SetEvent(WE_CLICK, _OnAutopsySelectFnc);
	//m_wndDiagnosticOfAutopsy.SetEvent(WE_CHANGE, _OnDiagnosticOfAutopsyChangeFnc);
	//m_wndDiagnosticOfAutopsy.SetEvent(WE_SETFOCUS, _OnDiagnosticOfAutopsySetfocusFnc);
	//m_wndDiagnosticOfAutopsy.SetEvent(WE_KILLFOCUS, _OnDiagnosticOfAutopsyKillfocusFnc);
	m_wndDiagnosticOfAutopsy.SetEvent(WE_CHECKVALUE, _OnDiagnosticOfAutopsyCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOutHospitalFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOutHospitalFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOutHospitalFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOutHospitalFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOutHospitalFnc, 0, 'T', VK_CONTROL);

}
void CHMSOutHospital::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_TextEx(pDX, m_wndDieDate.GetDlgCtrlID(), m_szDieDate);
	DDX_Text(pDX, m_wndReasonInHospital.GetDlgCtrlID(), m_szReasonInHospital);
	DDX_Text(pDX, m_wndClinicalProcess.GetDlgCtrlID(), m_szClinicalProcess);
	DDX_Text(pDX, m_wndMainTestResult.GetDlgCtrlID(), m_szMainTestResult);
	DDX_Text(pDX, m_wndSurgicalResult.GetDlgCtrlID(), m_szSurgicalResult);
	DDX_TextEx(pDX, m_wndDiagnosticInHospital.GetDlgCtrlID(), m_szDiagnosticInHospitalKey);
	DDX_TextEx(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDiseaseKey);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_TextEx(pDX, m_wndDiseaseAccompanied.GetDlgCtrlID(), m_szDiseaseAccompaniedKey);
	DDX_Text(pDX, m_wndPatientStatus.GetDlgCtrlID(), m_szPatientStatus);
	DDX_Text(pDX, m_wndDirectionAndRegimen.GetDlgCtrlID(), m_szDirectionAndRegimen);
	DDX_Text(pDX, m_wndTotalDateOfTreatment.GetDlgCtrlID(), m_nTotalDateOfTreatment);
	DDX_TextEx(pDX, m_wndDieBy.GetDlgCtrlID(), m_szDieByKey);
	DDX_Text(pDX, m_wndDieMainReason.GetDlgCtrlID(), m_szDieMainReason);
	DDX_TextEx(pDX, m_wndSurgery.GetDlgCtrlID(), m_szSurgeryKey);
	DDX_Check(pDX, m_wndAutopsy.GetDlgCtrlID(), m_bAutopsy);
	DDX_Text(pDX, m_wndDiagnosticOfAutopsy.GetDlgCtrlID(), m_szDiagnosticOfAutopsy);

}
void CHMSOutHospital::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOutHospital::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOutHospital::SetDefaultValues(){

	m_szResultKey.Empty();
	m_szOutDate.Empty();
	m_szDieDate.Empty();
	m_szReasonInHospital.Empty();
	m_szClinicalProcess.Empty();
	m_szMainTestResult.Empty();
	m_szSurgicalResult.Empty();
	m_szDiagnosticInHospitalKey.Empty();
	m_szMainDiseaseKey.Empty();
	m_szRelationDisease.Empty();
	m_szDiseaseAccompaniedKey.Empty();
	m_szPatientStatus.Empty();
	m_szDirectionAndRegimen.Empty();
	m_nTotalDateOfTreatment=0;
	m_szDieByKey.Empty();
	m_szDieMainReason.Empty();
	m_szSurgeryKey.Empty();
	m_bAutopsy=FALSE;
	m_szDiagnosticOfAutopsy.Empty();

}
int CHMSOutHospital::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnResultSelendok(){
	 return 0;
}
/*int CHMSOutHospital::OnResultSetfocus(){
	 return 0;
}*/
/*int CHMSOutHospital::OnResultKillfocus(){
	 return 0;
}*/
int CHMSOutHospital::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey()){
	};
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResult.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSOutHospital::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSOutHospital::OnOutDateChange(){
	return 0;
} */
/*int CHMSOutHospital::OnOutDateSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnOutDateKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnOutDateCheckValue(){
	return 0;
} 
/*int CHMSOutHospital::OnDieDateChange(){
	return 0;
} */
/*int CHMSOutHospital::OnDieDateSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnDieDateKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnDieDateCheckValue(){
	return 0;
} 
/*int CHMSOutHospital::OnReasonInHospitalChange(){
	return 0;
} */
/*int CHMSOutHospital::OnReasonInHospitalSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnReasonInHospitalKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnReasonInHospitalCheckValue(){
	return 0;
} 
/*int CHMSOutHospital::OnClinicalProcessChange(){
	return 0;
} */
/*int CHMSOutHospital::OnClinicalProcessSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnClinicalProcessKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnClinicalProcessCheckValue(){
	return 0;
} 
/*int CHMSOutHospital::OnMainTestResultChange(){
	return 0;
} */
/*int CHMSOutHospital::OnMainTestResultSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnMainTestResultKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnMainTestResultCheckValue(){
	return 0;
} 
/*int CHMSOutHospital::OnSurgicalResultChange(){
	return 0;
} */
/*int CHMSOutHospital::OnSurgicalResultSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnSurgicalResultKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnSurgicalResultCheckValue(){
	return 0;
} 
int CHMSOutHospital::OnDiagnosticInHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnDiagnosticInHospitalSelendok(){
	 return 0;
}
/*int CHMSOutHospital::OnDiagnosticInHospitalSetfocus(){
	 return 0;
}*/
/*int CHMSOutHospital::OnDiagnosticInHospitalKillfocus(){
	 return 0;
}*/
int CHMSOutHospital::OnDiagnosticInHospitalLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiagnosticInHospital.IsSearchKey()){
	};
	m_wndDiagnosticInHospital.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticInHospital.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSOutHospital::OnDiagnosticInHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSOutHospital::OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnMainDiseaseSelendok(){
	 return 0;
}
/*int CHMSOutHospital::OnMainDiseaseSetfocus(){
	 return 0;
}*/
/*int CHMSOutHospital::OnMainDiseaseKillfocus(){
	 return 0;
}*/
int CHMSOutHospital::OnMainDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMainDisease.IsSearchKey()){
	};
	m_wndMainDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMainDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSOutHospital::OnMainDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSOutHospital::OnRelationDiseaseChange(){
	return 0;
} */
/*int CHMSOutHospital::OnRelationDiseaseSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnRelationDiseaseKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnRelationDiseaseCheckValue(){
	return 0;
} 
int CHMSOutHospital::OnDiseaseAccompaniedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnDiseaseAccompaniedSelendok(){
	 return 0;
}
/*int CHMSOutHospital::OnDiseaseAccompaniedSetfocus(){
	 return 0;
}*/
/*int CHMSOutHospital::OnDiseaseAccompaniedKillfocus(){
	 return 0;
}*/
int CHMSOutHospital::OnDiseaseAccompaniedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiseaseAccompanied.IsSearchKey()){
	};
	m_wndDiseaseAccompanied.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiseaseAccompanied.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSOutHospital::OnDiseaseAccompaniedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSOutHospital::OnPatientStatusChange(){
	return 0;
} */
/*int CHMSOutHospital::OnPatientStatusSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnPatientStatusKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnPatientStatusCheckValue(){
	return 0;
} 
/*int CHMSOutHospital::OnDirectionAndRegimenChange(){
	return 0;
} */
/*int CHMSOutHospital::OnDirectionAndRegimenSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnDirectionAndRegimenKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnDirectionAndRegimenCheckValue(){
	return 0;
} 
/*int CHMSOutHospital::OnTotalDateOfTreatmentChange(){
	return 0;
} */
/*int CHMSOutHospital::OnTotalDateOfTreatmentSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnTotalDateOfTreatmentKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnTotalDateOfTreatmentCheckValue(){
	return 0;
} 
int CHMSOutHospital::OnDieBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnDieBySelendok(){
	 return 0;
}
/*int CHMSOutHospital::OnDieBySetfocus(){
	 return 0;
}*/
/*int CHMSOutHospital::OnDieByKillfocus(){
	 return 0;
}*/
int CHMSOutHospital::OnDieByLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDieBy.IsSearchKey()){
	};
	m_wndDieBy.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDieBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSOutHospital::OnDieByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSOutHospital::OnDieMainReasonChange(){
	return 0;
} */
/*int CHMSOutHospital::OnDieMainReasonSetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnDieMainReasonKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnDieMainReasonCheckValue(){
	return 0;
} 
int CHMSOutHospital::OnSurgerySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOutHospital::OnSurgerySelendok(){
	 return 0;
}
/*int CHMSOutHospital::OnSurgerySetfocus(){
	 return 0;
}*/
/*int CHMSOutHospital::OnSurgeryKillfocus(){
	 return 0;
}*/
int CHMSOutHospital::OnSurgeryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgery.IsSearchKey()){
	};
	m_wndSurgery.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgery.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSOutHospital::OnSurgeryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
	int CHMSOutHospital::OnAutopsySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
}
/*int CHMSOutHospital::OnDiagnosticOfAutopsyChange(){
	return 0;
} */
/*int CHMSOutHospital::OnDiagnosticOfAutopsySetfocus(){
	return 0;
} */
/*int CHMSOutHospital::OnDiagnosticOfAutopsyKillfocus(){
	return 0;
} */
int CHMSOutHospital::OnDiagnosticOfAutopsyCheckValue(){
	return 0;
} 
int CHMSOutHospital::OnAddHMSOutHospital(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSOutHospital"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSOutHospital::OnEditHMSOutHospital(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSOutHospital"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSOutHospital::OnDeleteHMSOutHospital(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSOutHospital(); 
 		OnHMSOutHospitalLoadData(); 
 	} */ return 0;
 } 
int CHMSOutHospital::OnSaveHMSOutHospital(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_vimes_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("HMSOutHospital"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?Ä?kListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CHMSOutHospital::OnCancelHMSOutHospital(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
