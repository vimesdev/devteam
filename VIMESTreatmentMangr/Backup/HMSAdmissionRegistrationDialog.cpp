#include "HMSDepartmentAdmissionDialog.h"
#include "MainFrm.h"
/*static void _OnRelativeChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelativeChange();
} */
/*static void _OnRelativeSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelativeSetfocus();} */ 
/*static void _OnRelativeKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelativeCheckValue();
} 
static void _OnRelationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnRelationSelectChange(nOldItemSel, nNewItemSel);
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
static void _OnMainDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionRegistrationDialog* )pWnd)->OnMainDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMainDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseSelendok();
}
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseKillfocus();
}*/
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseKillfocus();
}*/
static long _OnMainDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseLoadData();
}
/*static void _OnMainDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionRegistrationDialog *)pWnd)->OnMainDiseaseAddNew();
}*/
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
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdmissionRegistrationDialog *pVw = (CHMSAdmissionRegistrationDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdmissionRegistrationDialog *pVw = (CHMSAdmissionRegistrationDialog *)pWnd;
	pVw->OnCancelSelect();
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

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_nIndex = 0;	
	m_bOutpatient = FALSE;
	m_bHasAdmissionRegistration = true;

}
CHMSAdmissionRegistrationDialog::~CHMSAdmissionRegistrationDialog(){
}
void CHMSAdmissionRegistrationDialog::OnCreateComponents(){
	m_wndAdmissionInformation.Create(this, _T("Admission Information"), 5, 125, 640, 270);
	m_wndContactInformation.Create(this, _T("Contact Information"), 5, 5, 640, 120);
	m_wndDepartmentAdmitedInformation.Create(this, _T("Department Admited Information"), 5, 275, 640, 506);
	m_wndRelativeLabel.Create(this, _T("Relative"), 10, 30, 160, 55);
	m_wndRelative.Create(this,165, 30, 365, 55); 
	m_wndRelationLabel.Create(this, _T("Relation"), 370, 30, 470, 55);
	m_wndRelation.Create(this,475, 30, 635, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 60, 160, 85);
	m_wndAddress.Create(this,165, 60, 635, 85); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 10, 90, 160, 115);
	m_wndPhone.Create(this,165, 90, 365, 115); 
	m_wndAdmissionNoLabel.Create(this, _T("Admission No"), 10, 150, 160, 175);
	m_wndAdmissionNo.Create(this,165, 150, 265, 175); 
	m_wndTimes.Create(this, _T("Times"), 270, 150, 330, 175);
	m_wndTimesOfAdmision.Create(this,335, 150, 365, 175); 
	m_wndAdmisionDateLabel.Create(this, _T("Admission Date"), 370, 150, 470, 175);
	m_wndAdmitDate.Create(this,475, 150, 635, 175); 
	m_wndAdmitedDirectionLabel.Create(this, _T("Admited Direction"), 10, 180, 160, 205);
	m_wndAdmitedDirection.Create(this,165, 180, 365, 205); 
	m_wndTransferPlaceLabel.Create(this, _T("Transfer Place"), 370, 180, 470, 205);
	m_wndTransferPlace.Create(this,475, 180, 635, 205); 
	m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 10, 210, 160, 235);
	m_wndTransferDiagnostic.Create(this,165, 210, 635, 235); 
	m_wndExamineDiseaseLabel.Create(this, _T("Examine Disease"), 10, 240, 160, 265);
	m_wndExamineDisease.Create(this,165, 240, 635, 265); 
	m_wndInDateLabel.Create(this, _T("In Date"), 10, 300, 160, 325);
	m_wndInDate.Create(this,165, 300, 290, 325); 
	m_wndOutpatient.Create(this, _T("Outpatient treat"), 295, 300, 405, 325);
	m_wndEmergency.Create(this, _T("Emergency"), 410, 300, 520, 325);
	m_wndCancer.Create(this, _T("Cancer Rec"), 525, 300, 635, 325);
	m_wndAdmissionDiseaseLabel.Create(this, _T("Admission Disease"), 10, 330, 160, 355);
	m_wndAdmissionDisease.Create(this,165, 330, 635, 355); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 360, 160, 385);
	m_wndMainDisease.Create(this,165, 360, 635, 440, TRUE, FALSE, TRUE); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 445, 160, 470);
	m_wndRelationDisease.Create(this,165, 445, 635, 500, TRUE, FALSE, TRUE); 
	m_wndSave.Create(this, _T("&Save"), 485, 511, 560, 536);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 511, 640, 536);


}
void CHMSAdmissionRegistrationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRelative.SetLimitText(65);
//	m_wndRelative.SetCheckValue(true);
//	m_wndRelation.SetCheckValue(true);
	m_wndRelation.LimitText(35);
	m_wndAddress.SetLimitText(254);
//	m_wndAddress.SetCheckValue(true);
	m_wndPhone.SetLimitText(11);
	//m_wndPhone.SetCheckValue(true);
	m_wndAdmissionNo.SetLimitText(35);
//	m_wndAdmissionNo.SetCheckValue(true);
	m_wndTimesOfAdmision.SetLimitText(3);
//	m_wndTimesOfAdmision.SetCheckValue(true);
//	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndAdmitedDirection.SetCheckValue(true);
	m_wndAdmitedDirection.LimitText(35);
	m_wndTransferPlace.SetCheckValue(true);
	m_wndTransferPlace.LimitText(35);
	m_wndTransferDiagnostic.SetLimitText(254);
//	m_wndTransferDiagnostic.SetCheckValue(true);
	m_wndExamineDisease.SetLimitText(1024);
	m_wndExamineDisease.SetCheckValue(true);
//	m_wndInDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndInDate.SetCheckValue(true);
	m_wndAdmissionNo.SetLimitText(15);
//	m_wndAdmissionNo.SetCheckValue(true);
	m_wndExamineDisease.SetLimitText(254);
	m_wndExamineDisease.SetReadOnly(true);
	//m_wndExamineDisease.SetCheckValue(true);
	m_wndAdmissionDisease.SetCheckValue(true);
	m_wndAdmissionDisease.LimitText(254);
//	m_wndMainDisease.SetCheckValue(true);
	m_wndMainDisease.LimitText(254);
	m_wndRelationDisease.SetLimitText(254);
//	m_wndRelationDisease.SetCheckValue(true);

	m_wndEmergency.ModifyStyle(WS_TABSTOP, 0);
	
	m_wndRelation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRelation.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndAdmitedDirection.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAdmitedDirection.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTransferPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTransferPlace.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndAdmissionDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAdmissionDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);


	/*m_wndMainDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMainDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);*/

	m_hms_treatment_recordTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatment_recordTbl.AddField(_T("htr_updatedby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updateddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_docno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_recordno"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_idx"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_status"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_admitdate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_mainicd"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_maindisease"), dfText, 254); 
	m_hms_treatment_recordTbl.AddField(_T("htr_outpatient"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_emergency"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_ward"), dfText, 7); 
	m_szTitle = m_szTiles;
	m_wndAdmissionNo.SetReadOnly(true);
	m_wndCancer.ModifyStyle(WS_TABSTOP, 0);
	//if(m_bHasAdmissionRegistration){
	//	m_wndRelative.SetReadOnly(true);
	//	m_wndRelation.SetReadOnly(true);
	//	
	//	m_wndAddress.SetReadOnly(true);
	//	m_wndPhone.SetReadOnly(true);
	//	m_wndAdmissionNo.SetReadOnly(true);
	//	m_wndTimesOfAdmision.SetReadOnly(true);
	//	m_wndAdmitDate.SetReadOnly(true);
	//	m_wndTransferDiagnostic.SetReadOnly(true);
	//	m_wndExamineDisease.SetReadOnly(true);

	//	//m_wndInDate.SetReadOnly(true);
	//	m_wndAdmissionNo.SetReadOnly(true);

	//}

}
void CHMSAdmissionRegistrationDialog::OnSetWindowEvents(){
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
	m_wndCancer.SetEvent(WE_CLICK, _OnCancerSelectFnc);
	m_wndAdmissionDisease.SetEvent(WE_SELENDOK, _OnAdmissionDiseaseSelendokFnc);
	//m_wndAdmissionDisease.SetEvent(WE_SETFOCUS, _OnAdmissionDiseaseSetfocusFnc);
	//m_wndAdmissionDisease.SetEvent(WE_KILLFOCUS, _OnAdmissionDiseaseKillfocusFnc);
	m_wndAdmissionDisease.SetEvent(WE_SELCHANGE, _OnAdmissionDiseaseSelectChangeFnc);
	m_wndAdmissionDisease.SetEvent(WE_LOADDATA, _OnAdmissionDiseaseLoadDataFnc);
	//m_wndAdmissionDisease.SetEvent(WE_ADDNEW, _OnAdmissionDiseaseAddNewFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_nTimesOfAdmision = 1;
	GetDataToScreen();
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
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndCancer.GetDlgCtrlID(), m_bCancer);
	DDX_TextEx(pDX, m_wndAdmissionDisease.GetDlgCtrlID(), m_szAdmissionDiseaseKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDiseaseKey);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
}
void CHMSAdmissionRegistrationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, tmpStr;
	szSQL.Format(_T(" SELECT 	")
		_T("hd_relative as relative, hd_relation as relation, ") \
		_T("hd_contacttel as contacttel, ") \
		_T("hd_contactaddr as contactaddress, hd_transdiagn as transdiagn, ") \
_T("	hcr_admitdate as admitdate,") \
_T("	htr_admitdate as indate,") \
_T(" 	hcr_recordno as recordno,") \
_T(" 	hcr_admiticd as admiticd,") \
_T(" 	htr_status as status,") \
_T(" 	hd_conclusion as examdisease,") \
_T(" 	hcr_reldisease as reldisease, ") \
_T("	hcr_admitdirect as admitdirect, ") \
_T("	hcr_transplace as transplace, ") \
_T("	htr_outpatient as outpatient, ") \
_T("	htr_mainicd as mainicd, ") \
_T("	htr_maindisease as maindisease, ") \
_T("	htr_emergency as emergency, htr_ward as ward, hcr_cancer, hcr_cancer_time ") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno)") \
_T(" WHERE htr_docno=%ld AND htr_idx=%d"),  m_nDocumentNo, m_nIndex);
//_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("relative"), m_szRelative);
		rs.GetValue(_T("relation"), m_szRelationKey);
		rs.GetValue(_T("contacttel"), m_szPhone);
		rs.GetValue(_T("contactaddress"), m_szAddress);
		rs.GetValue(_T("transdiagn"), m_szTransferDiagnostic);
		rs.GetValue(_T("transplace"), m_szTransferPlaceKey);
		rs.GetValue(_T("admitdirect"), m_szAdmitedDirectionKey);
		rs.GetValue(_T("treattime"), m_nTimesOfAdmision);
		rs.GetValue(_T("admitdate"), m_szAdmitDate);
		rs.GetValue(_T("indate"), m_szInDate);
		rs.GetValue(_T("hcr_cancer"), tmpStr);
		rs.GetValue(_T("hcr_cancer_time"), m_nCancerTime);
		if(tmpStr == _T("Y"))
		{
			m_bCancer = TRUE;
			CString szLabel;
			TranslateString(_T("Cancer Rec"), szLabel);
			tmpStr.Format(_T("%s [%d]"), szLabel, m_nCancerTime);
			m_wndCancer.SetWindowText(tmpStr);
		}
		else
			m_bCancer = FALSE;
		

		if(m_szStatus == _T("A")){
			//m_szAdmitDate = m_szInDate = pMF->GetSysDateTime();
		}
		
		rs.GetValue(_T("emergency"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bEmergency = true;
		else
			m_bEmergency = false;

		rs.GetValue(_T("recordno"), m_szAdmissionNo);
		rs.GetValue(_T("admiticd"), m_szAdmissionDiseaseKey);
		//rs.GetValue(_T("mainicd"), m_szAdmissionDiseaseKey);
		rs.GetValue(_T("maindisease"), m_szMainDiseaseKey);
		rs.GetValue(_T("examdisease"), m_szExamineDisease);
		rs.GetValue(_T("reldisease"), m_szRelationDisease);
		rs.GetValue(_T("outpatient"), m_szOutPatient);
		if(m_szOutPatient == _T("Y"))
			m_bOutpatient = TRUE;
		else
			m_bOutpatient = FALSE;

		rs.GetValue(_T("ward"), m_szWard);

		m_szRelationDisease.Trim();
		m_szMainDiseaseKey.Trim();
		if(m_nTimesOfAdmision <=0) m_nTimesOfAdmision = 1;
		if(m_szAdmitedDirectionKey.IsEmpty())
			m_szAdmitedDirectionKey = _T("2");
		if(m_szTransferPlaceKey.IsEmpty())
			m_szTransferPlaceKey = _T("2");

		if(m_szStatus == _T("A"))
			m_szMainDiseaseKey = m_szExamineDisease;
		if(GetMode() != VM_VIEW)
			SetMode(VM_EDIT);
		else
			SetMode(VM_VIEW);
	}
	else
		SetMode(VM_ADD);

}
void CHMSAdmissionRegistrationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), pMF->m_nDocumentNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_idx"), m_nIndex); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_recordno"), m_szAdmissionNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), m_szInDate);
	if(m_szStatus == _T("A")){
		m_hms_treatment_recordTbl.SetValue(_T("htr_status"), _T("I")); 
		//m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), pMF->GetSysDateTime());
	}
	else
		m_hms_treatment_recordTbl.SetValue(_T("htr_status"), m_szStatus);
	
	m_hms_treatment_recordTbl.SetValue(_T("htr_emergency"), m_bEmergency?_T("Y"):_T("N")); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_mainicd"), m_szAdmissionDiseaseKey); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_maindisease"), m_szMainDiseaseKey);	
	m_hms_treatment_recordTbl.SetValue(_T("htr_outpatient"), m_bOutpatient?_T("Y"):_T("N")); 
	
	if(m_szWard.IsEmpty())
		m_szWard = pMF->m_szWard;
	m_hms_treatment_recordTbl.SetValue(_T("htr_ward"), m_szWard); 

}
void CHMSAdmissionRegistrationDialog::SetDefaultValues(){

	m_szRelative.Empty();
	m_szRelationKey.Empty();
	m_szAddress.Empty();
	m_szPhone.Empty();
	m_szAdmissionNo.Empty();
	m_nTimesOfAdmision=1;
	m_szAdmitDate.Empty();
	m_szAdmitedDirectionKey = _T("2");
	m_szTransferPlaceKey = _T("2");
	m_szTransferDiagnostic.Empty();
	m_szExamineDisease.Empty();
	m_szInDate.Empty();
	m_szAdmissionDiseaseKey.Empty();
	m_szMainDiseaseKey.Empty();
	m_szRelationDisease.Empty();
	m_bEmergency = false;
	m_bCancer=FALSE;
	m_szWard.Empty();
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
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_szInDate = pMF->GetSysDateTime();
 			break; 
 		case VM_EDIT: 
			if (m_szStatus == _T("A") || m_szStatus == _T("I"))
			{
				if(m_nIndex > 1)
				{
 					EnableControls(FALSE); 
					m_wndAdmissionNo.EnableWindow(true);
					m_wndInDate.EnableWindow(true);
					m_wndAdmissionDisease.EnableWindow(true);
					m_wndMainDisease.EnableWindow(true);
					m_wndRelationDisease.EnableWindow(true);
					m_wndRelation.EnableWindow(TRUE);
					m_wndRelative.EnableWindow(TRUE);
					m_wndPhone.EnableWindow(TRUE);
					m_wndAddress.EnableWindow(TRUE);
				}
				else
					EnableControls(TRUE); 
			}
			else if (m_szStatus == _T("T"))
			{
				EnableControls(FALSE);
				m_wndAdmissionNo.EnableWindow(true);
				EnableButtons(TRUE, 0, 1, -1); 
			}
 			
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		
		/*if(m_bHasAdmissionRegistration)
		{
			m_wndRelation.EnableWindow(false);
		}*/
		m_wndAdmissionNo.EnableWindow(false);
		//m_wndOutpatient.EnableWindow(FALSE);
		
 		UpdateData(FALSE); 
 		return nOldMode; 
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
	return pMF->LoadSelectionList(&m_wndRelation, _T("hrm_relation"), m_szRelationKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRelation.IsSearchKey() && !m_szRelationKey.IsEmpty()){
	};
	m_wndRelation.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRelation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
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
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	if(m_szAdmissionNo.IsEmpty())
		return 0;

	//Kiem tra xem co benh nhan nao dung ma ho so nay chua
	szSQL.Format(_T("SELECT * FROM hms_treatment_record WHERE htr_recordno='%s' "), m_szAdmissionNo);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		long nDocNo;
		rs.GetValue(_T("htr_docno"), nDocNo);
		if(nDocNo != m_nDocumentNo){
			CString szMsg;
			szMsg.Format(_T("This clinical record using by other document [%ld]"), nDocNo);
			m_wndAdmissionNo.SetToolTipMessage(szMsg);
			return -1;
		}
		rs.MoveNext();
	}
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
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT case when TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')+ interval '1' minute  > hd_enddate then 't' else 'f' end as cmpval FROM hms_doc WHERE hd_docno=%ld "), m_szAdmitDate,  m_nDocumentNo);
	rs.ExecSQL(szSQL);	
//_fmsg(_T("%s"), szSQL);
	rs.GetValue(_T("cmpval"), tmpStr);
	if(tmpStr == _T("f")){
		return -1;
	}
	if(CompareDate(m_szAdmitDate, pMF->GetSysDate()) > 0)
		return -1;

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
	return pMF->LoadSelectionList(&m_wndAdmitedDirection, _T("hms_admited_direction"), m_szAdmitedDirectionKey);

	//CRecord rs(&pMF->m_db);
	//CString szSQL, szWhere;
	//if(m_wndAdmitedDirection.IsSearchKey() && ToInt(m_szAdmitedDirectionKey) > 0){
	//	szWhere.Format(_T(" and cast(ss_code as integer) =%d "), ToInt(m_szAdmitedDirectionKey));
	//};

	//szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_admited_direction' %s"), szWhere);

	//m_wndAdmitedDirection.DeleteAllItems(); 
	//int nCount = 0;
	//nCount = rs.ExecSQL(szSQL);
	//while(!rs.IsEOF()){ 
	//	m_wndAdmitedDirection.AddItems(
	//		rs.GetValue(_T("id")), 
	//		rs.GetValue(_T("name")), NULL);
	//	rs.MoveNext();
	//}
	//return nCount;
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
	return pMF->LoadSelectionList(&m_wndTransferPlace, _T("hms_transfer_place"), m_szTransferPlaceKey);


	//CRecord rs(&pMF->m_db);
	//CString szSQL, szWhere;
	//if(m_wndTransferPlace.IsSearchKey() && !m_szTransferPlaceKey.IsEmpty()){
	//	szWhere.Format(_T(" and ss_code ='%s' "), m_szTransferPlaceKey);
	//};

	//szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_transfer_place' %s"), szWhere);
	//m_wndTransferPlace.DeleteAllItems(); 
	//int nCount = 0;
	//nCount = rs.ExecSQL(szSQL);
	//while(!rs.IsEOF()){ 
	//	m_wndTransferPlace.AddItems(
	//		rs.GetValue(_T("id")), 
	//		rs.GetValue(_T("name")), NULL);
	//	rs.MoveNext();
	//}
	//return nCount;
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
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	if(m_nIndex > 1)
		szSQL.Format(_T("SELECT htr_dischargedate as cmpdate FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d"), m_szInDate,  m_nDocumentNo, m_nIndex-1);
	else
		szSQL.Format(_T("SELECT hd_enddate as cmpdate FROM hms_doc WHERE hd_docno=%ld "), m_szInDate,  m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("cmpval"), tmpStr);
	if(CompareDate(m_szInDate, tmpStr) < 0)
		return -1;

	if(CompareDate(m_szInDate, pMF->GetSysDate()) > 0)
		return -1;
	return 0;
} 

void CHMSAdmissionRegistrationDialog::OnCancerSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
	
void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseSelendok(){
//	UpdateData(true);
//	if(m_szMainDiseaseKey.IsEmpty())
//		m_szMainDiseaseKey = m_wndAdmissionDisease.GetCurrent(1);
//	UpdateData(false);
	 
}
/*void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseSetfocus(){
	
}*/
/*void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseKillfocus(){
	
}*/
long CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndAdmissionDisease, m_szAdmissionDiseaseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAdmissionDisease.IsSearchKey() && !m_szAdmissionDiseaseKey.IsEmpty()){
	};
	m_wndAdmissionDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAdmissionDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionRegistrationDialog::OnAdmissionDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAdmissionRegistrationDialog::OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionRegistrationDialog::OnMainDiseaseSelendok(){
	 
}
/*void CHMSAdmissionRegistrationDialog::OnMainDiseaseSetfocus(){
	
}*/
/*void CHMSAdmissionRegistrationDialog::OnMainDiseaseKillfocus(){
	
}*/
long CHMSAdmissionRegistrationDialog::OnMainDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//return pMF->LoadICD(&m_wndMainDisease, m_szMainDiseaseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMainDisease.IsSearchKey() && !m_szMainDiseaseKey.IsEmpty()){
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
/*void CHMSAdmissionRegistrationDialog::OnMainDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdmissionRegistrationDialog::OnRelationDiseaseChange(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSAdmissionRegistrationDialog::OnRelationDiseaseKillfocus(){
	
} */
int CHMSAdmissionRegistrationDialog::OnRelationDiseaseCheckValue(){
	return 0;
} 
void CHMSAdmissionRegistrationDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAdmissionRegistrationDialog();
} 
void CHMSAdmissionRegistrationDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
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
 	//if(GetMode() != VM_ADD || GetMode() != VM_EDIT) 
 	//	return -1; 

	/*if(OnAdmissionNoCheckValue() < 0)
		return -1;*/
 	if(!IsValidateData()) 
 		return -1; 

 	if (CheckRollbackDocument(m_nDocumentNo)==false) 
	{	
//		int ret = ShowMessageBox(_T("Document is rollback. Unable to create document in treatment"), MB_OK|MB_ICONWARNING);
//		return -1;
	}

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 	
 	CString szSQL; 
 	CString szWhere; 
	CString szStatus;
	CRecord rs(&pMF->m_db);
	long nPatientNo;
	int nCancerTime=0;
	szSQL.Format(_T(" SELECT hcr_patientno, hcr_status, hcr_cancer_time ") \
		_T("FROM hms_clinical_record WHERE hcr_docno=%d "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{	
		rs.GetValue(_T("hcr_status"), szStatus);
		if(szStatus== _T("T"))
			szStatus = _T("T");
		else
			szStatus = _T("I");

		rs.GetValue(_T("hcr_patientno"), nPatientNo);
	}	
	else
	{
		return 0;
	}
	if(m_bCancer)
	{
		szSQL.Format(_T("SELECT coalesce(max(hcr_cancer_time),0)+1 ") \
			_T("FROM hms_clinical_record ") \
			_T("WHERE hcr_patientno=%ld and hcr_docno < %ld and hcr_status='T' "),
			nPatientNo, m_nDocumentNo);
		CRecord rsx(&pMF->m_db);
		rsx.ExecSQL(szSQL);
		nCancerTime = rsx.GetIntValue();
	}

 	szWhere.Format(_T(" WHERE htr_docno=%ld AND htr_idx=%d"), m_nDocumentNo, m_nIndex); 
 	szSQL = m_hms_treatment_recordTbl.GetUpdateSQL(_T("htr_createdby,htr_createddate,htr_patientno,htr_docno,htr_idx")); 
 	szSQL += szWhere; 
_tprintf(_T("\r\n%s"), szSQL);

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		CString szSQL;
		CString szCancer;
		if(m_bCancer)
			szCancer = _T("Y");
		else
			szCancer = _T("N");

	//Cap nhat lai trang thai ho so kham
		if(m_nIndex == 1)
		{			
			szSQL.Format(_T("UPDATE hms_doc ") \
				_T("SET hd_isinpatient='Y', hd_relative='%s', hd_relation=%d,hd_contactaddr='%s', hd_contacttel='%s', hd_transdiagn='%s' ") \
				_T("WHERE hd_docno=%ld "),
				m_szRelative, ToInt(m_szRelationKey), m_szAddress, m_szPhone, m_szTransferDiagnostic, m_nDocumentNo);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("UPDATE hms_clinical_record ") \
			_T(" SET hcr_status='%s', hcr_recordno='%s', hcr_admitdate= cast_string2timestamp('%s'),hcr_admiticd='%s', hcr_admitdisease='%s', hcr_mainicd='%s', hcr_maindisease='%s', hcr_reldisease='%s', hcr_admitdirect=%d, hcr_transplace=%d, hcr_treattime=%d, hcr_dischargedept ='%s', ") \
			_T(" hcr_cancer='%s', hcr_cancer_time=%d ") \
			_T(" WHERE hcr_docno=%ld "), 
			szStatus,m_szAdmissionNo, m_szAdmitDate, m_szAdmissionDiseaseKey, m_wndAdmissionDisease.GetCurrent(1), 
			m_szAdmissionDiseaseKey, m_szMainDiseaseKey, m_szRelationDisease, ToInt(m_szAdmitedDirectionKey), ToInt(m_szTransferPlaceKey), m_nTimesOfAdmision,
			pMF->m_szDept, szCancer, nCancerTime, m_nDocumentNo);
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_clinical_record ") \
				_T("SET hcr_status='%s', hcr_recordno='%s',hcr_admiticd='%s', hcr_admitdisease='%s', hcr_mainicd='%s', hcr_maindisease='%s', hcr_reldisease='%s' , hcr_admitdirect=%d, ") \
				_T("hcr_transplace=%d, hcr_treattime=%d, hcr_dischargedept='%s', hcr_cancer='%s', hcr_cancer_time=%d ") \
				_T("WHERE hcr_docno=%ld "), 
			szStatus,m_szAdmissionNo,m_szAdmissionDiseaseKey, m_wndAdmissionDisease.GetCurrent(1), 
			m_szAdmissionDiseaseKey, m_szMainDiseaseKey, m_szRelationDisease, ToInt(m_szAdmitedDirectionKey), ToInt(m_szTransferPlaceKey), m_nTimesOfAdmision,
			pMF->m_szDept, szCancer, nCancerTime, m_nDocumentNo);
		}
		
		pMF->ExecSQL(szSQL);
//		szSQL.Format(_T("UPDATE hms_treatment_record SET htr_mainicd='%s', htr_maindisease='%s', htr_status='I' WHERE htr_docno=%ld AND htr_idx=%d AND htr_status IN('A','I') "), 
//			m_szMainDiseaseKey, m_wndMainDisease.GetCurrent(1), m_nDocumentNo, m_nIndex);
//		pMF->ExecSQL(szSQL);	
		
		if(m_bOutpatient)
		{
			szSQL.Format(_T("UPDATE hms_doc SET hd_outpatient='Y' WHERE hd_docno=%ld "), m_nDocumentNo);
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_doc SET hd_outpatient='N' WHERE hd_docno=%ld "), m_nDocumentNo);
		}

		pMF->ExecSQL(szSQL);

		if(m_bCancer)
		{
			szSQL.Format(_T("UPDATE hms_patient SET hp_cancer='Y' WHERE hp_patientno=%ld "), nPatientNo);
			pMF->ExecSQL(szSQL);
		}
		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
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
bool CHMSAdmissionRegistrationDialog::CheckRollbackDocument(int m_nDocno){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSuggestion, szIndept, szStatus;

	szSQL.Format(_T(" SELECT hd_suggestion, hd_indept, hd_status from hms_doc WHERE hd_docno=%d "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		rs.GetValue(_T("hd_suggestion"), szSuggestion);
		rs.GetValue(_T("hd_indept"),szIndept);
		rs.GetValue(_T("hd_Status"),szStatus);
		rs.MoveNext();
	}
	if (szSuggestion==_T("A") && szStatus ==_T("T") && szIndept.GetLength() > 0) return true;

	return false;

}