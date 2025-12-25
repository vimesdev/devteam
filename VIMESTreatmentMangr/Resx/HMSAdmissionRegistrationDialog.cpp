#include "HMSAdmissionRegistrationDialog.h"
#include "MainFrm.h"
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAdmissionRegistrationDialog *pVw = (CHMSAdmissionRegistrationDialog *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnRelativeChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelativeChange();
} */
/*static void _OnRelativeSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelativeSetfocus();} */ 
/*static void _OnRelativeKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelativeCheckValue();
} 
static void _OnRelationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionRegistrationDialog* )pWnd)->OnRelationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRelationSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationSelendok();
}
/*static void _OnRelationSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationKillfocus();
}*/
/*static void _OnRelationKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationKillfocus();
}*/
static long _OnRelationLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationLoadData();
}
/*static void _OnRelationAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnAdmissionNoChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionNoChange();
} */
/*static void _OnAdmissionNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionNoSetfocus();} */ 
/*static void _OnAdmissionNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionNoKillfocus();
} */
static int _OnAdmissionNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionNoCheckValue();
} 
/*static void _OnTimesOfAdmisionChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTimesOfAdmisionChange();
} */
/*static void _OnTimesOfAdmisionSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTimesOfAdmisionSetfocus();} */ 
/*static void _OnTimesOfAdmisionKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTimesOfAdmisionKillfocus();
} */
static int _OnTimesOfAdmisionCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnTimesOfAdmisionCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitDateCheckValue();
} 
static void _OnAdmitedDirectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionRegistrationDialog* )pWnd)->OnAdmitedDirectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdmitedDirectionSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitedDirectionSelendok();
}
/*static void _OnAdmitedDirectionSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitedDirectionKillfocus();
}*/
/*static void _OnAdmitedDirectionKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitedDirectionKillfocus();
}*/
static long _OnAdmitedDirectionLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitedDirectionLoadData();
}
/*static void _OnAdmitedDirectionAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmitedDirectionAddNew();
}*/
static void _OnTransferPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionRegistrationDialog* )pWnd)->OnTransferPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransferPlaceSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferPlaceSelendok();
}
/*static void _OnTransferPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferPlaceKillfocus();
}*/
/*static void _OnTransferPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferPlaceKillfocus();
}*/
static long _OnTransferPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferPlaceLoadData();
}
/*static void _OnTransferPlaceAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferPlaceAddNew();
}*/
/*static void _OnTransferDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferDiagnosticChange();
} */
/*static void _OnTransferDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferDiagnosticSetfocus();} */ 
/*static void _OnTransferDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferDiagnosticKillfocus();
} */
static int _OnTransferDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnTransferDiagnosticCheckValue();
} 
/*static void _OnExamineDiseaseChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnExamineDiseaseChange();
} */
/*static void _OnExamineDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnExamineDiseaseSetfocus();} */ 
/*static void _OnExamineDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnExamineDiseaseKillfocus();
} */
static int _OnExamineDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnExamineDiseaseCheckValue();
} 
/*static void _OnInDateChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnInDateChange();
} */
/*static void _OnInDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnInDateSetfocus();} */ 
/*static void _OnInDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnInDateKillfocus();
} */
static int _OnInDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnInDateCheckValue();
} 
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSAdmissionRegistrationDialog*)pWnd)->OnOutpatientSelect();
}
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CHMSAdmissionRegistrationDialog*)pWnd)->OnEmergencySelect();
}
static void _OnCancerSelectFnc(CWnd *pWnd){
	 ((CHMSAdmissionRegistrationDialog*)pWnd)->OnCancerSelect();
}
static void _OnAdmissionDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionRegistrationDialog* )pWnd)->OnAdmissionDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdmissionDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionDiseaseSelendok();
}
/*static void _OnAdmissionDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionDiseaseKillfocus();
}*/
/*static void _OnAdmissionDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionDiseaseKillfocus();
}*/
static long _OnAdmissionDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionDiseaseLoadData();
}
/*static void _OnAdmissionDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnAdmissionDiseaseAddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnIssueNumberChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnIssueNumberChange();
} */
/*static void _OnIssueNumberSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnIssueNumberSetfocus();} */ 
/*static void _OnIssueNumberKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnIssueNumberKillfocus();
} */
static int _OnIssueNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnIssueNumberCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdmissionRegistrationDialog *pVw = (CHMSAdmissionRegistrationDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdmissionRegistrationDialog *pVw = (CHMSAdmissionRegistrationDialog *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _OnCancerTimeChangeFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnCancerTimeChange();
} */
/*static void _OnCancerTimeSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnCancerTimeSetfocus();} */ 
/*static void _OnCancerTimeKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnCancerTimeKillfocus();
} */
static int _OnCancerTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnCancerTimeCheckValue();
} 
static int _OnAddHMSAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionRegistrationDialog*)pWnd)->OnAddHMSAdmissionRegistrationDialog();
} 
static int _OnEditHMSAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionRegistrationDialog*)pWnd)->OnEditHMSAdmissionRegistrationDialog();
} 
static int _OnDeleteHMSAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionRegistrationDialog*)pWnd)->OnDeleteHMSAdmissionRegistrationDialog();
} 
static int _OnSaveHMSAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionRegistrationDialog*)pWnd)->OnSaveHMSAdmissionRegistrationDialog();
} 
static int _OnCancelHMSAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionRegistrationDialog*)pWnd)->OnCancelHMSAdmissionRegistrationDialog();
} 
CHMSAdmissionRegistrationDialog::CHMSAdmissionRegistrationDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 705;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSAdmissionRegistrationDialog::~CHMSAdmissionRegistrationDialog(){
}
void CHMSAdmissionRegistrationDialog::OnCreateComponents(){
	m_wndAdmissionInformation.Create(this, _T("Admission Information"), 5, 125, 680, 270);
	m_wndContactInformation.Create(this, _T("Contact Information"), 5, 5, 680, 120);
	m_wndDepartmentAdmitedInformation.Create(this, _T("Department Admited Information"), 5, 275, 680, 535);
	m_wndPrint.Create(this, _T("&Print"), 602, 540, 682, 565);
	m_wndRelativeLabel.Create(this, _T("Relative"), 10, 30, 160, 55);
	m_wndRelative.Create(this,165, 30, 365, 55); 
	m_wndRelationLabel.Create(this, _T("Relation"), 370, 30, 470, 55);
	m_wndRelation.Create(this,475, 29, 675, 54); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 59, 160, 84);
	m_wndAddress.Create(this,165, 59, 675, 84); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 10, 89, 160, 114);
	m_wndPhone.Create(this,165, 89, 365, 114); 
	m_wndAdmissionNoLabel.Create(this, _T("Admission No"), 10, 150, 160, 175);
	m_wndAdmissionNo.Create(this,165, 150, 265, 175); 
	m_wndTimes.Create(this, _T("Times"), 270, 150, 330, 175);
	m_wndTimesOfAdmision.Create(this,335, 150, 365, 175); 
	m_wndAdmisionDateLabel.Create(this, _T("Admission Date"), 370, 150, 470, 175);
	m_wndAdmitDate.Create(this,475, 150, 675, 175); 
	m_wndAdmitedDirectionLabel.Create(this, _T("Admited Direction"), 10, 180, 160, 205);
	m_wndAdmitedDirection.Create(this,165, 180, 365, 205); 
	m_wndTransferPlaceLabel.Create(this, _T("Transfer Place"), 370, 180, 470, 205);
	m_wndTransferPlace.Create(this,475, 180, 675, 205); 
	m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 10, 210, 160, 235);
	m_wndTransferDiagnostic.Create(this,165, 210, 675, 235); 
	m_wndExamineDiseaseLabel.Create(this, _T("Examine Disease"), 10, 240, 160, 265);
	m_wndExamineDisease.Create(this,165, 240, 675, 265); 
	m_wndInDateLabel.Create(this, _T("In Date"), 10, 300, 160, 325);
	m_wndInDate.Create(this,165, 300, 290, 325); 
	m_wndOutpatient.Create(this, _T("Outpatient treat"), 295, 300, 405, 325);
	m_wndEmergency.Create(this, _T("Emergency"), 410, 300, 485, 325);
	m_wndCancer.Create(this, _T("Cancer Rec"), 490, 300, 605, 325);
	m_wndAdmissionDiseaseLabel.Create(this, _T("Admission Disease"), 10, 330, 160, 355);
	m_wndAdmissionDisease.Create(this,165, 330, 675, 355); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 360, 160, 385);
	m_wndMainDisease.Create(this,165, 360, 675, 440); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 445, 160, 470);
	m_wndRelationDisease.Create(this,165, 445, 675, 500); 
	m_wndIssueNumberLabel.Create(this, _T("Issue Number"), 10, 505, 160, 530);
	m_wndIssueNumber.Create(this,165, 505, 290, 530); 
	m_wndNoteLabel.Create(this, _T("Note"), 295, 505, 375, 530);
	m_wndNote.Create(this,380, 505, 675, 530); 
	m_wndSave.Create(this, _T("&Save"), 442, 540, 517, 565);
	m_wndCancel.Create(this, _T("&Cancel"), 522, 540, 597, 565);
	m_wndCancerTimeLabel.Create(this, _T("Lan"), 610, 300, 640, 325);
	m_wndCancerTime.Create(this,645, 300, 675, 325); 

}
void CHMSAdmissionRegistrationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRelative.SetLimitText(1024);
	m_wndRelative.SetCheckValue(true);
	m_wndRelation.SetCheckValue(true);
	m_wndRelation.LimitText(1024);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetCheckValue(true);
	m_wndAdmissionNo.SetLimitText(1024);
	m_wndAdmissionNo.SetCheckValue(true);
	m_wndTimesOfAdmision.SetLimitText(1024);
	m_wndTimesOfAdmision.SetCheckValue(true);
	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndAdmitedDirection.SetCheckValue(true);
	m_wndAdmitedDirection.LimitText(1024);
	m_wndTransferPlace.SetCheckValue(true);
	m_wndTransferPlace.LimitText(1024);
	m_wndTransferDiagnostic.SetLimitText(1024);
	m_wndTransferDiagnostic.SetCheckValue(true);
	m_wndExamineDisease.SetLimitText(1024);
	m_wndExamineDisease.SetCheckValue(true);
	m_wndInDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndInDate.SetCheckValue(true);
	m_wndAdmissionDisease.SetCheckValue(true);
	m_wndAdmissionDisease.LimitText(1024);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(1024);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndIssueNumber.SetLimitText(1024);
	m_wndIssueNumber.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_wndCancerTime.SetLimitText(16);
	m_wndCancerTime.SetCheckValue(true);









}
void CHMSAdmissionRegistrationDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndRelative.SetEvent(WE_CHANGE, _OnRelativeChangeFnc);
	//m_wndRelative.SetEvent(WE_SETFOCUS, _OnRelativeSetfocusFnc);
	//m_wndRelative.SetEvent(WE_KILLFOCUS, _OnRelativeKillfocusFnc);
	m_wndRelative.SetEvent(WE_CHECKVALUE, _OnRelativeCheckValueFnc);
	m_wndRelation.SetEvent(WE_SELENDOK, _OnRelationSelendokFnc);
	//m_wndRelation.SetEvent(WE_SETFOCUS, _OnRelationSetfocusFnc);
	//m_wndRelation.SetEvent(WE_KILLFOCUS, _OnRelationKillfocusFnc);
	m_wndRelation.SetEvent(WE_SELCHANGE, _OnRelationSelectChangeFnc);
	m_wndRelation.SetEvent(WE_LOADDATA, _OnRelationLoadDataFnc);
	//m_wndRelation.SetEvent(WE_ADDNEW, _OnRelationAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndAdmissionNo.SetEvent(WE_CHANGE, _OnAdmissionNoChangeFnc);
	//m_wndAdmissionNo.SetEvent(WE_SETFOCUS, _OnAdmissionNoSetfocusFnc);
	//m_wndAdmissionNo.SetEvent(WE_KILLFOCUS, _OnAdmissionNoKillfocusFnc);
	m_wndAdmissionNo.SetEvent(WE_CHECKVALUE, _OnAdmissionNoCheckValueFnc);
	//m_wndTimesOfAdmision.SetEvent(WE_CHANGE, _OnTimesOfAdmisionChangeFnc);
	//m_wndTimesOfAdmision.SetEvent(WE_SETFOCUS, _OnTimesOfAdmisionSetfocusFnc);
	//m_wndTimesOfAdmision.SetEvent(WE_KILLFOCUS, _OnTimesOfAdmisionKillfocusFnc);
	m_wndTimesOfAdmision.SetEvent(WE_CHECKVALUE, _OnTimesOfAdmisionCheckValueFnc);
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	m_wndAdmitedDirection.SetEvent(WE_SELENDOK, _OnAdmitedDirectionSelendokFnc);
	//m_wndAdmitedDirection.SetEvent(WE_SETFOCUS, _OnAdmitedDirectionSetfocusFnc);
	//m_wndAdmitedDirection.SetEvent(WE_KILLFOCUS, _OnAdmitedDirectionKillfocusFnc);
	m_wndAdmitedDirection.SetEvent(WE_SELCHANGE, _OnAdmitedDirectionSelectChangeFnc);
	m_wndAdmitedDirection.SetEvent(WE_LOADDATA, _OnAdmitedDirectionLoadDataFnc);
	//m_wndAdmitedDirection.SetEvent(WE_ADDNEW, _OnAdmitedDirectionAddNewFnc);
	m_wndTransferPlace.SetEvent(WE_SELENDOK, _OnTransferPlaceSelendokFnc);
	//m_wndTransferPlace.SetEvent(WE_SETFOCUS, _OnTransferPlaceSetfocusFnc);
	//m_wndTransferPlace.SetEvent(WE_KILLFOCUS, _OnTransferPlaceKillfocusFnc);
	m_wndTransferPlace.SetEvent(WE_SELCHANGE, _OnTransferPlaceSelectChangeFnc);
	m_wndTransferPlace.SetEvent(WE_LOADDATA, _OnTransferPlaceLoadDataFnc);
	//m_wndTransferPlace.SetEvent(WE_ADDNEW, _OnTransferPlaceAddNewFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_CHANGE, _OnTransferDiagnosticChangeFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_SETFOCUS, _OnTransferDiagnosticSetfocusFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_KILLFOCUS, _OnTransferDiagnosticKillfocusFnc);
	m_wndTransferDiagnostic.SetEvent(WE_CHECKVALUE, _OnTransferDiagnosticCheckValueFnc);
	//m_wndExamineDisease.SetEvent(WE_CHANGE, _OnExamineDiseaseChangeFnc);
	//m_wndExamineDisease.SetEvent(WE_SETFOCUS, _OnExamineDiseaseSetfocusFnc);
	//m_wndExamineDisease.SetEvent(WE_KILLFOCUS, _OnExamineDiseaseKillfocusFnc);
	m_wndExamineDisease.SetEvent(WE_CHECKVALUE, _OnExamineDiseaseCheckValueFnc);
	//m_wndInDate.SetEvent(WE_CHANGE, _OnInDateChangeFnc);
	//m_wndInDate.SetEvent(WE_SETFOCUS, _OnInDateSetfocusFnc);
	//m_wndInDate.SetEvent(WE_KILLFOCUS, _OnInDateKillfocusFnc);
	m_wndInDate.SetEvent(WE_CHECKVALUE, _OnInDateCheckValueFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndCancer.SetEvent(WE_CLICK, _OnCancerSelectFnc);
	m_wndAdmissionDisease.SetEvent(WE_SELENDOK, _OnAdmissionDiseaseSelendokFnc);
	//m_wndAdmissionDisease.SetEvent(WE_SETFOCUS, _OnAdmissionDiseaseSetfocusFnc);
	//m_wndAdmissionDisease.SetEvent(WE_KILLFOCUS, _OnAdmissionDiseaseKillfocusFnc);
	m_wndAdmissionDisease.SetEvent(WE_SELCHANGE, _OnAdmissionDiseaseSelectChangeFnc);
	m_wndAdmissionDisease.SetEvent(WE_LOADDATA, _OnAdmissionDiseaseLoadDataFnc);
	//m_wndAdmissionDisease.SetEvent(WE_ADDNEW, _OnAdmissionDiseaseAddNewFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndIssueNumber.SetEvent(WE_CHANGE, _OnIssueNumberChangeFnc);
	//m_wndIssueNumber.SetEvent(WE_SETFOCUS, _OnIssueNumberSetfocusFnc);
	//m_wndIssueNumber.SetEvent(WE_KILLFOCUS, _OnIssueNumberKillfocusFnc);
	m_wndIssueNumber.SetEvent(WE_CHECKVALUE, _OnIssueNumberCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndCancerTime.SetEvent(WE_CHANGE, _OnCancerTimeChangeFnc);
	//m_wndCancerTime.SetEvent(WE_SETFOCUS, _OnCancerTimeSetfocusFnc);
	//m_wndCancerTime.SetEvent(WE_KILLFOCUS, _OnCancerTimeKillfocusFnc);
	m_wndCancerTime.SetEvent(WE_CHECKVALUE, _OnCancerTimeCheckValueFnc);
	SetMode(VM_NONE);

}
void CHMSAdmissionRegistrationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRelative.GetDlgCtrlID(), m_szRelative);
	DDX_TextEx(pDX, m_wndRelation.GetDlgCtrlID(), m_szRelationKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndAdmissionNo.GetDlgCtrlID(), m_szAdmissionNo);
	DDX_Text(pDX, m_wndTimesOfAdmision.GetDlgCtrlID(), m_nTimesOfAdmision);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndAdmitedDirection.GetDlgCtrlID(), m_szAdmitedDirectionKey);
	DDX_TextEx(pDX, m_wndTransferPlace.GetDlgCtrlID(), m_szTransferPlaceKey);
	DDX_Text(pDX, m_wndTransferDiagnostic.GetDlgCtrlID(), m_szTransferDiagnostic);
	DDX_Text(pDX, m_wndExamineDisease.GetDlgCtrlID(), m_szExamineDisease);
	DDX_TextEx(pDX, m_wndInDate.GetDlgCtrlID(), m_szInDate);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_Check(pDX, m_wndCancer.GetDlgCtrlID(), m_bCancer);
	DDX_TextEx(pDX, m_wndAdmissionDisease.GetDlgCtrlID(), m_szAdmissionDiseaseKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndIssueNumber.GetDlgCtrlID(), m_nIssueNumber);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndCancerTime.GetDlgCtrlID(), m_nCancerTime);

}
void CHMSAdmissionRegistrationDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Relative")] =  m_szRelative;
	m_jData[_T("Relation")] =  m_szRelationKey;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("AdmissionNo")] =  m_szAdmissionNo;
	m_jData[_T("TimesOfAdmision")] =  m_nTimesOfAdmision;
	m_jData[_T("AdmitDate")] =  m_szAdmitDate;
	m_jData[_T("AdmitedDirection")] =  m_szAdmitedDirectionKey;
	m_jData[_T("TransferPlace")] =  m_szTransferPlaceKey;
	m_jData[_T("TransferDiagnostic")] =  m_szTransferDiagnostic;
	m_jData[_T("ExamineDisease")] =  m_szExamineDisease;
	m_jData[_T("InDate")] =  m_szInDate;
	m_jData[_T("Outpatient")] =  m_bOutpatient;
	m_jData[_T("Emergency")] =  m_bEmergency;
	m_jData[_T("Cancer")] =  m_bCancer;
	m_jData[_T("AdmissionDisease")] =  m_szAdmissionDiseaseKey;
	m_jData[_T("MainDisease")] =  m_szMainDisease;
	m_jData[_T("RelationDisease")] =  m_szRelationDisease;
	m_jData[_T("IssueNumber")] =  m_nIssueNumber;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("CancerTime")] =  m_nCancerTime;
	}
	else
	{
			
	m_jData[_T("Relative")].GetValue(m_szRelative);
	m_jData[_T("Relation")].GetValue(m_szRelationKey);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("AdmissionNo")].GetValue(m_szAdmissionNo);
	m_jData[_T("TimesOfAdmision")].GetValue(m_nTimesOfAdmision);
	m_jData[_T("AdmitDate")].GetValue(m_szAdmitDate);
	m_jData[_T("AdmitedDirection")].GetValue(m_szAdmitedDirectionKey);
	m_jData[_T("TransferPlace")].GetValue(m_szTransferPlaceKey);
	m_jData[_T("TransferDiagnostic")].GetValue(m_szTransferDiagnostic);
	m_jData[_T("ExamineDisease")].GetValue(m_szExamineDisease);
	m_jData[_T("InDate")].GetValue(m_szInDate);
	m_jData[_T("Outpatient")].GetValue(m_bOutpatient);
	m_jData[_T("Emergency")].GetValue(m_bEmergency);
	m_jData[_T("Cancer")].GetValue(m_bCancer);
	m_jData[_T("AdmissionDisease")].GetValue(m_szAdmissionDiseaseKey);
	m_jData[_T("MainDisease")].GetValue(m_szMainDisease);
	m_jData[_T("RelationDisease")].GetValue(m_szRelationDisease);
	m_jData[_T("IssueNumber")].GetValue(m_nIssueNumber);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("CancerTime")].GetValue(m_nCancerTime);
	}

}
void CHMSAdmissionRegistrationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdmissionRegistrationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdmissionRegistrationDialog::SetDefaultValues(){

	m_szRelative.Empty();
	m_szRelationKey.Empty();
	m_szAddress.Empty();
	m_szPhone.Empty();
	m_szAdmissionNo.Empty();
	m_nTimesOfAdmision=0;
	m_szAdmitDate.Empty();
	m_szAdmitedDirectionKey.Empty();
	m_szTransferPlaceKey.Empty();
	m_szTransferDiagnostic.Empty();
	m_szExamineDisease.Empty();
	m_szInDate.Empty();
	m_bOutpatient=FALSE;
	m_bEmergency=FALSE;
	m_bCancer=FALSE;
	m_szAdmissionDiseaseKey.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_nIssueNumber=0;
	m_szNote.Empty();
	m_nCancerTime=0;

}
int CHMSAdmissionRegistrationDialog::SetMode(int nMode){
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
void CHMSAdmissionRegistrationDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSAdmissionRegistrationDialog::OnRelativeChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnRelativeSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnRelativeKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnRelativeCheckValue(){
	return 0;
} 
void CHMSAdmissionRegistrationDialog::OnRelationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionRegistrationDialog::OnRelationSelendok(){
	 
}
/*void CHMSAdmissionRegistrationDialog::OnRelationSetfocus(){
	
}*/
/*void CHMSAdmissionRegistrationDialog::OnRelationKillfocus(){
	
}*/
long CHMSAdmissionRegistrationDialog::OnRelationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRelation.IsSearchKey() && !m_szRelationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRelationKey
};
	m_wndRelation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRelation.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionRegistrationDialog::OnRelationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdmissionRegistrationDialog::OnAddressChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnAddressSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnAddressKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnPhoneChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnPhoneSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnPhoneKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnPhoneCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnAdmissionNoChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnAdmissionNoSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnAdmissionNoKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnAdmissionNoCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnTimesOfAdmisionChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnTimesOfAdmisionSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnTimesOfAdmisionKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnTimesOfAdmisionCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnAdmitDateChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnAdmitDateCheckValue(){
	return 0;
} 
void CHMSAdmissionRegistrationDialog::OnAdmitedDirectionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionRegistrationDialog::OnAdmitedDirectionSelendok(){
	 
}
/*void CHMSAdmissionRegistrationDialog::OnAdmitedDirectionSetfocus(){
	
}*/
/*void CHMSAdmissionRegistrationDialog::OnAdmitedDirectionKillfocus(){
	
}*/
long CHMSAdmissionRegistrationDialog::OnAdmitedDirectionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAdmitedDirection.IsSearchKey() && !m_szAdmitedDirectionKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAdmitedDirectionKey
};
	m_wndAdmitedDirection.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAdmitedDirection.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionRegistrationDialog::OnAdmitedDirectionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAdmissionRegistrationDialog::OnTransferPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionRegistrationDialog::OnTransferPlaceSelendok(){
	 
}
/*void CHMSAdmissionRegistrationDialog::OnTransferPlaceSetfocus(){
	
}*/
/*void CHMSAdmissionRegistrationDialog::OnTransferPlaceKillfocus(){
	
}*/
long CHMSAdmissionRegistrationDialog::OnTransferPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransferPlace.IsSearchKey() && !m_szTransferPlaceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTransferPlaceKey
};
	m_wndTransferPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransferPlace.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionRegistrationDialog::OnTransferPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdmissionRegistrationDialog::OnTransferDiagnosticChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnTransferDiagnosticSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnTransferDiagnosticKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnTransferDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnExamineDiseaseChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnExamineDiseaseSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnExamineDiseaseKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnExamineDiseaseCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnInDateChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnInDateSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnInDateKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnInDateCheckValue(){
	return 0;
} 
	void CHMSAdmissionRegistrationDialog::OnOutpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdmissionRegistrationDialog::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdmissionRegistrationDialog::OnCancerSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseSelendok(){
	 
}
/*void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseSetfocus(){
	
}*/
/*void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseKillfocus(){
	
}*/
long CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAdmissionDisease.IsSearchKey() && !m_szAdmissionDiseaseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAdmissionDiseaseKey
};
	m_wndAdmissionDisease.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAdmissionDisease.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdmissionRegistrationDialog::OnMainDiseaseChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnMainDiseaseKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnRelationDiseaseChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnRelationDiseaseKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnIssueNumberChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnIssueNumberSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnIssueNumberKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnIssueNumberCheckValue(){
	return 0;
} 
/*void CHMSAdmissionRegistrationDialog::OnNoteChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnNoteSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnNoteKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSAdmissionRegistrationDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionRegistrationDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSAdmissionRegistrationDialog::OnCancerTimeChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnCancerTimeSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnCancerTimeKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnCancerTimeCheckValue(){
	return 0;
} 
int CHMSAdmissionRegistrationDialog::OnAddHMSAdmissionRegistrationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdmissionRegistrationDialog::OnEditHMSAdmissionRegistrationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdmissionRegistrationDialog::OnDeleteHMSAdmissionRegistrationDialog(){
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
 		OnCancelHMSAdmissionRegistrationDialog();
 	}
	return 0;
}
int CHMSAdmissionRegistrationDialog::OnSaveHMSAdmissionRegistrationDialog(){
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
 		//OnHMSAdmissionRegistrationDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAdmissionRegistrationDialog::OnCancelHMSAdmissionRegistrationDialog(){
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
int CHMSAdmissionRegistrationDialog::OnHMSAdmissionRegistrationDialogListLoadData(){
	return 0;
}
