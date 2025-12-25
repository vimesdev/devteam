#include "HMSCreateOutpatientRecordDialog.h"
#include "MainFrm.h"
#include "HMSReportForms/PrintForms.h"

static long _OnIVFTypeLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnIVFTypeLoadData();
}
/*static void _OnRelativeChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelativeChange();
} */
/*static void _OnRelativeSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelativeSetfocus();} */ 
/*static void _OnRelativeKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelativeCheckValue();
} 
static void _OnRelationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCreateOutpatientRecordDialog* )pWnd)->OnRelationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRelationSelendokFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationSelendok();
}
/*static void _OnRelationSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationKillfocus();
}*/
/*static void _OnRelationKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationKillfocus();
}*/
static long _OnRelationLoadDataFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationLoadData();
}
/*static void _OnRelationAddNewFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnAdmissionNoChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionNoChange();
} */
/*static void _OnAdmissionNoSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionNoSetfocus();} */ 
/*static void _OnAdmissionNoKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionNoKillfocus();
} */
static int _OnAdmissionNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionNoCheckValue();
} 
/*static void _OnTimesOfAdmisionChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTimesOfAdmisionChange();
} */
/*static void _OnTimesOfAdmisionSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTimesOfAdmisionSetfocus();} */ 
/*static void _OnTimesOfAdmisionKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTimesOfAdmisionKillfocus();
} */
static int _OnTimesOfAdmisionCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTimesOfAdmisionCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitDateCheckValue();
} 
static void _OnAdmitedDirectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCreateOutpatientRecordDialog* )pWnd)->OnAdmitedDirectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdmitedDirectionSelendokFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitedDirectionSelendok();
}
/*static void _OnAdmitedDirectionSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitedDirectionKillfocus();
}*/
/*static void _OnAdmitedDirectionKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitedDirectionKillfocus();
}*/
static long _OnAdmitedDirectionLoadDataFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitedDirectionLoadData();
}
/*static void _OnAdmitedDirectionAddNewFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmitedDirectionAddNew();
}*/
static void _OnTransferPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCreateOutpatientRecordDialog* )pWnd)->OnTransferPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransferPlaceSelendokFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferPlaceSelendok();
}
/*static void _OnTransferPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferPlaceKillfocus();
}*/
/*static void _OnTransferPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferPlaceKillfocus();
}*/
static long _OnTransferPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferPlaceLoadData();
}
/*static void _OnTransferPlaceAddNewFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferPlaceAddNew();
}*/
/*static void _OnTransferDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferDiagnosticChange();
} */
/*static void _OnTransferDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferDiagnosticSetfocus();} */ 
/*static void _OnTransferDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferDiagnosticKillfocus();
} */
static int _OnTransferDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnTransferDiagnosticCheckValue();
} 
/*static void _OnExamineDiseaseChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnExamineDiseaseChange();
} */
/*static void _OnExamineDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnExamineDiseaseSetfocus();} */ 
/*static void _OnExamineDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnExamineDiseaseKillfocus();
} */
static int _OnExamineDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnExamineDiseaseCheckValue();
} 
/*static void _OnInDateChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnInDateChange();
} */
/*static void _OnInDateSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnInDateSetfocus();} */ 
/*static void _OnInDateKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnInDateKillfocus();
} */
static int _OnInDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnInDateCheckValue();
} 
static void _OnAdmissionDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCreateOutpatientRecordDialog* )pWnd)->OnAdmissionDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdmissionDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionDiseaseSelendok();
}
/*static void _OnAdmissionDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionDiseaseKillfocus();
}*/
/*static void _OnAdmissionDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionDiseaseKillfocus();
}*/
static long _OnAdmissionDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionDiseaseLoadData();
}
/*static void _OnAdmissionDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnAdmissionDiseaseAddNew();
}*/
static long _OnDoctorLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnDoctorLoadData();
}

static void _OnMainDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCreateOutpatientRecordDialog* )pWnd)->OnMainDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMainDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnMainDiseaseSelendok();
}
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnMainDiseaseKillfocus();
}*/
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnMainDiseaseKillfocus();
}*/
static long _OnMainDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnMainDiseaseLoadData();
}
/*static void _OnMainDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnMainDiseaseAddNew();
}*/
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationDiseaseChange();
} */
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSCreateOutpatientRecordDialog *)pWnd)->OnRelationDiseaseCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCreateOutpatientRecordDialog *pVw = (CHMSCreateOutpatientRecordDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCreateOutpatientRecordDialog *pVw = (CHMSCreateOutpatientRecordDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSCreateOutpatientRecordDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateOutpatientRecordDialog*)pWnd)->OnAddHMSCreateOutpatientRecordDialog();
} 
static int _OnEditHMSCreateOutpatientRecordDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateOutpatientRecordDialog*)pWnd)->OnEditHMSCreateOutpatientRecordDialog();
} 
static int _OnDeleteHMSCreateOutpatientRecordDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateOutpatientRecordDialog*)pWnd)->OnDeleteHMSCreateOutpatientRecordDialog();
} 
static int _OnSaveHMSCreateOutpatientRecordDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateOutpatientRecordDialog*)pWnd)->OnSaveHMSCreateOutpatientRecordDialog();
} 
static int _OnCancelHMSCreateOutpatientRecordDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateOutpatientRecordDialog*)pWnd)->OnCancelHMSCreateOutpatientRecordDialog();
} 
CHMSCreateOutpatientRecordDialog::CHMSCreateOutpatientRecordDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_nIndex = 0;	
	m_bOutpatient = FALSE;
	m_bHasAdmissionRegistration = true;
}
CHMSCreateOutpatientRecordDialog::~CHMSCreateOutpatientRecordDialog(){
}
void CHMSCreateOutpatientRecordDialog::OnCreateComponents(){
	m_wndAdmissionInformation.Create(this, _T("Admission Information"), 5, 125, 640, 270);
	m_wndContactInformation.Create(this, _T("Contact Information"), 5, 5, 640, 120);
	m_wndDepartmentAdmitedInformation.Create(this, _T("Department Admited Information"), 5, 275, 640, 480);
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
	m_wndDeptLabel.Create(this, _T("Dept"), 295, 300, 365, 325);
	m_wndDept.Create(this,370, 300, 635, 325); 
	m_wndAdmissionDiseaseLabel.Create(this, _T("Admission Disease"), 10, 330, 160, 355);
	m_wndAdmissionDisease.Create(this,165, 330, 365, 355);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 370, 330, 470, 355);
	m_wndDoctor.Create(this,475, 330, 635, 355); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 360, 160, 385);
	m_wndMainDisease.Create(this,165, 360, 635, 385); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 390, 160, 415);
	m_wndRelationDisease.Create(this,165, 390, 635, 445, TRUE, FALSE, TRUE); 
	m_wndFirstDayLastPeriodLabel.Create(this, _T("First Day Last Period"), 10, 450, 160, 475);
	m_wndFirstDayLastPeriod.Create(this,165, 450, 290, 475); 
	m_wndIVFTypeLabel.Create(this, _T("IVF Type"), 295, 450, 365, 475);
	m_wndIVFType.Create(this,370, 450, 635, 475); 
	m_wndOutpatient.Create(this, _T("Outpatient treat"), 5, 485, 130, 510);
	m_wndEmergency.Create(this, _T("Emergency"), 135, 485, 210, 510);
	m_wndSave.Create(this, _T("&Save"), 485, 485, 560, 510);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 485, 640, 510);

}
void CHMSCreateOutpatientRecordDialog::OnInitializeComponents(){
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
	m_wndDept.SetCheckValue(true);
	m_wndRelation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRelation.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndAdmitedDirection.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAdmitedDirection.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTransferPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTransferPlace.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndAdmissionDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAdmissionDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	/*m_wndMainDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMainDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);*/

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndIVFType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndIVFType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

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
	m_hms_treatment_recordTbl.AddField(_T("htr_ivf_type"), dfText, 5);
	m_hms_treatment_recordTbl.AddField(_T("htr_firstday_lastperiod"), dfDate);
	m_szTitle = m_szTiles;
	m_wndAdmissionNo.SetReadOnly(true);
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
void CHMSCreateOutpatientRecordDialog::OnSetWindowEvents(){
	m_wndIVFType.SetEvent(WE_LOADDATA, _OnIVFTypeLoadDataFnc);
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
	m_wndAdmissionDisease.SetEvent(WE_SELENDOK, _OnAdmissionDiseaseSelendokFnc);
	//m_wndAdmissionDisease.SetEvent(WE_SETFOCUS, _OnAdmissionDiseaseSetfocusFnc);
	//m_wndAdmissionDisease.SetEvent(WE_KILLFOCUS, _OnAdmissionDiseaseKillfocusFnc);
	m_wndAdmissionDisease.SetEvent(WE_SELCHANGE, _OnAdmissionDiseaseSelectChangeFnc);
	m_wndAdmissionDisease.SetEvent(WE_LOADDATA, _OnAdmissionDiseaseLoadDataFnc);
	//m_wndAdmissionDisease.SetEvent(WE_ADDNEW, _OnAdmissionDiseaseAddNewFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	m_wndMainDisease.SetEvent(WE_SELENDOK, _OnMainDiseaseSelendokFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_SELCHANGE, _OnMainDiseaseSelectChangeFnc);
	m_wndMainDisease.SetEvent(WE_LOADDATA, _OnMainDiseaseLoadDataFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
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
void CHMSCreateOutpatientRecordDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFirstDayLastPeriod.GetDlgCtrlID(), m_szFirstDayLastPeriod);
	DDX_TextEx(pDX, m_wndIVFType.GetDlgCtrlID(), m_szIVFTypeKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
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
	DDX_TextEx(pDX, m_wndAdmissionDisease.GetDlgCtrlID(), m_szAdmissionDiseaseKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDiseaseKey);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);

}
void CHMSCreateOutpatientRecordDialog::GetDataToScreen(){
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
_T("	htr_emergency as emergency, htr_ward as ward, hcr_cancer as cancer, htr_doctor as doctor, ") \
_T("	htr_ivf_type, htr_firstday_lastperiod") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno)") \
_T(" WHERE htr_docno=%ld AND htr_idx=%d"),  m_nDocumentNo, m_nIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("doctor"), m_szDoctorKey);
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("relative"), m_szRelative);
		rs.GetValue(_T("relation"), m_szRelationKey);
		rs.GetValue(_T("contacttel"), m_szPhone);
		rs.GetValue(_T("contactaddress"), m_szAddress);
		rs.GetValue(_T("transdiagn"), m_szTransferDiagnostic);
		rs.GetValue(_T("transplace"), m_szTransferPlaceKey);
		rs.GetValue(_T("admitdirect"), m_szAdmitedDirectionKey);
		rs.GetValue(_T("treattime"), m_nTimesOfAdmision);
	//	rs.GetValue(_T("admitdate"), m_szAdmitDate);
		rs.GetValue(_T("indate"), m_szInDate);

		//if(m_szStatus == _T("A")){
		m_szAdmitDate = m_szInDate = pMF->GetSysDateTime();
	//	}
		
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
		rs.GetValue(_T("cancer"), m_szCancer);
		
		m_szCancer = _T("N");
		rs.GetValue(_T("htr_ivf_type"), m_szIVFTypeKey);
		rs.GetValue(_T("htr_firstday_lastperiod"), m_szFirstDayLastPeriod);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);

}
void CHMSCreateOutpatientRecordDialog::GetScreenToData(){
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
	m_hms_treatment_recordTbl.SetValue(_T("htr_ivf_type"), m_szIVFTypeKey); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_firstday_lastperiod"), m_szFirstDayLastPeriod); 

}
void CHMSCreateOutpatientRecordDialog::SetDefaultValues(){
	m_szFirstDayLastPeriod.Empty();
	m_szIVFTypeKey.Empty();
	m_szDoctorKey.Empty();
	m_szCancer.Empty();
	m_szDeptKey.Empty();
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
	m_szWard.Empty();
}
int CHMSCreateOutpatientRecordDialog::SetMode(int nMode){
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
			EnableControls(FALSE); 
			m_wndInDate.EnableWindow(true);
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
		m_wndOutpatient.EnableWindow(m_szCancer==_T("Y")?TRUE:FALSE);
		m_wndDept.EnableWindow(m_szCancer==_T("Y")?TRUE:FALSE);
		if(pMF->m_szDept == _T("A15"))
			m_wndDept.EnableWindow(true);


		
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSCreateOutpatientRecordDialog::OnRelativeChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnRelativeSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnRelativeKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnRelativeCheckValue(){
	return 0;
} 
void CHMSCreateOutpatientRecordDialog::OnRelationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCreateOutpatientRecordDialog::OnRelationSelendok(){
	 
}
/*void CHMSCreateOutpatientRecordDialog::OnRelationSetfocus(){
	
}*/
/*void CHMSCreateOutpatientRecordDialog::OnRelationKillfocus(){
	
}*/
long CHMSCreateOutpatientRecordDialog::OnRelationLoadData(){
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
/*void CHMSCreateOutpatientRecordDialog::OnRelationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnAddressChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnAddressSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnAddressKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSCreateOutpatientRecordDialog::OnPhoneChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnPhoneSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnPhoneKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnPhoneCheckValue(){
	return 0;
} 
/*void CHMSCreateOutpatientRecordDialog::OnAdmissionNoChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnAdmissionNoSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnAdmissionNoKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnAdmissionNoCheckValue(){
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
/*void CHMSCreateOutpatientRecordDialog::OnTimesOfAdmisionChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnTimesOfAdmisionSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnTimesOfAdmisionKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnTimesOfAdmisionCheckValue(){
	return 0;
} 
/*void CHMSCreateOutpatientRecordDialog::OnAdmitDateChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnAdmitDateCheckValue(){
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
	_tprintf(_T("\nAdmitDate: %s| sysdate: %s\n"), m_szAdmitDate, pMF->GetSysDate());
	if(CompareDate(m_szAdmitDate, pMF->GetSysDate()) > 0)
		return -1;

	return 0;
} 
void CHMSCreateOutpatientRecordDialog::OnAdmitedDirectionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCreateOutpatientRecordDialog::OnAdmitedDirectionSelendok(){
	 
}
/*void CHMSCreateOutpatientRecordDialog::OnAdmitedDirectionSetfocus(){
	
}*/
/*void CHMSCreateOutpatientRecordDialog::OnAdmitedDirectionKillfocus(){
	
}*/
long CHMSCreateOutpatientRecordDialog::OnAdmitedDirectionLoadData(){
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
/*void CHMSCreateOutpatientRecordDialog::OnAdmitedDirectionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCreateOutpatientRecordDialog::OnTransferPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCreateOutpatientRecordDialog::OnTransferPlaceSelendok(){
	 
}
/*void CHMSCreateOutpatientRecordDialog::OnTransferPlaceSetfocus(){
	
}*/
/*void CHMSCreateOutpatientRecordDialog::OnTransferPlaceKillfocus(){
	
}*/
long CHMSCreateOutpatientRecordDialog::OnTransferPlaceLoadData(){
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
/*void CHMSCreateOutpatientRecordDialog::OnTransferPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnTransferDiagnosticChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnTransferDiagnosticSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnTransferDiagnosticKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnTransferDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSCreateOutpatientRecordDialog::OnExamineDiseaseChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnExamineDiseaseSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnExamineDiseaseKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnExamineDiseaseCheckValue(){
	return 0;
} 
/*void CHMSCreateOutpatientRecordDialog::OnInDateChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnInDateSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnInDateKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnInDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	CDateTime dtInDate, dtCurrent, dtEndDate;
	dtCurrent.ParseDateTime(pMF->GetSysDateTime());
	dtInDate.ParseDateTime(m_szInDate);
	if(m_nIndex > 1)
		szSQL.Format(_T("SELECT to_char(htr_dischargedate, 'DD/MM/YYYY HH24:MI') as cmpdate FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d"), m_nDocumentNo, m_nIndex);
	else
		szSQL.Format(_T("SELECT to_char(hd_enddate, 'DD/MM/YYYY HH24:MI') as cmpdate FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("cmpdate"), tmpStr);
	dtEndDate.ParseDateTime(tmpStr);
	if(dtInDate < dtEndDate)
		return -1;

	if (m_szCancer != _T("Y"))
		if(dtInDate > dtCurrent)
			return -1;
	return 0;
} 
void CHMSCreateOutpatientRecordDialog::OnAdmissionDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCreateOutpatientRecordDialog::OnAdmissionDiseaseSelendok(){
//	UpdateData(true);
//	if(m_szMainDiseaseKey.IsEmpty())
//		m_szMainDiseaseKey = m_wndAdmissionDisease.GetCurrent(1);
//	UpdateData(false);
	 
}
/*void CHMSCreateOutpatientRecordDialog::OnAdmissionDiseaseSetfocus(){
	
}*/
/*void CHMSCreateOutpatientRecordDialog::OnAdmissionDiseaseKillfocus(){
	
}*/
long CHMSCreateOutpatientRecordDialog::OnAdmissionDiseaseLoadData(){
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
/*void CHMSCreateOutpatientRecordDialog::OnAdmissionDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCreateOutpatientRecordDialog::OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCreateOutpatientRecordDialog::OnMainDiseaseSelendok(){
	 
}
/*void CHMSCreateOutpatientRecordDialog::OnMainDiseaseSetfocus(){
	
}*/
/*void CHMSCreateOutpatientRecordDialog::OnMainDiseaseKillfocus(){
	
}*/
long CHMSCreateOutpatientRecordDialog::OnMainDiseaseLoadData(){
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
/*void CHMSCreateOutpatientRecordDialog::OnMainDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnRelationDiseaseChange(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSCreateOutpatientRecordDialog::OnRelationDiseaseKillfocus(){
	
} */
int CHMSCreateOutpatientRecordDialog::OnRelationDiseaseCheckValue(){
	return 0;
} 
void CHMSCreateOutpatientRecordDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCreateOutpatientRecordDialog();
} 
void CHMSCreateOutpatientRecordDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSCreateOutpatientRecordDialog::OnAddHMSCreateOutpatientRecordDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCreateOutpatientRecordDialog::OnEditHMSCreateOutpatientRecordDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCreateOutpatientRecordDialog::OnDeleteHMSCreateOutpatientRecordDialog(){
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
 		OnCancelHMSCreateOutpatientRecordDialog(); 
 	}
	return 0;
}
int CHMSCreateOutpatientRecordDialog::OnSaveHMSCreateOutpatientRecordDialog(){
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
	CString tmpStr;
	CRecord rs(&pMF->m_db);
	CString szDeptId;
	szDeptId= pMF->m_szDept;
	if(!m_szDeptKey.IsEmpty())
		szDeptId= m_szDeptKey;
		

	//szSQL.Format(_T("HMS_TREATMENT_RECORD_CREATE_V2(%ld, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'),'Y','%s', '%s')"),
	szSQL.Format(_T("HMS_TREATMENT_RECORD_CREATEIVF(%ld, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'),'Y','%s', '%s')"),
			m_nDocumentNo, pMF->GetCurrentUser(), m_szInDate,szDeptId, m_szDoctorKey);
	//HMS_TREATMENT_RECORD_CREATENEW2
	int res = str2int(pMF->ExecDML(szSQL));
	_tprintf(_T("\r\nszSQL: %s"), szSQL);
	if(res <= 0)
	{
		switch(res)
		{
		case -1:
			ShowMessageBox(_T("Đang tồn tại hồ sơ điều trị chưa kết thúc. Không tạo được bệnh án kế tiếp"));
			break;
		case -2:
			ShowMessageBox(_T("Bệnh nhân nội trú. Không tạo được bệnh án kế tiếp"));
			break;
		case -3:
			ShowMessageBox(_T("Bệnh nhân chưa thanh toán lần điều trị trước. Không tạo được bệnh án kế tiếp"));
			break;
		default:
			ShowMessageBox(_T("Có lỗi xảy ra. không tạo được bệnh án kế tiếp"));
		}
		return -1;
	}

	m_nIndex = res;
	pMF->m_nDocumentNo = m_nDocumentNo;
	pMF->PrintMedicalFile(true);
	CPrintForms printer;
	printer.TM_OnPrintAppointmentSheet(m_nDocumentNo, m_szDeptKey, true, false, m_szAdmitDate);
	OnOK();
 	return res; 
}
int CHMSCreateOutpatientRecordDialog::OnCancelHMSCreateOutpatientRecordDialog(){
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
int CHMSCreateOutpatientRecordDialog::OnHMSCreateOutpatientRecordDialogListLoadData(){
	return 0;
}
bool CHMSCreateOutpatientRecordDialog::CheckRollbackDocument(int m_nDocno){
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

long CHMSCreateOutpatientRecordDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDepartment(&m_wndDept, m_szDeptKey, _T(" and sd_type = 'DT'"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

long CHMSCreateOutpatientRecordDialog::OnDoctorLoadData()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	//return pMF->LoadDoctorList(&m_wndDoctor, m_szDoctorKey, pMF->GetCurrentDepartmentID(), _T(" AND su_groupid IN ('D', 'P')"));
	CGuiComboBox* pWnd = &m_wndDoctor;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND su_groupid IN ('D', 'P') AND su_deptid IN ('%s')"), pMF->GetCurrentDepartmentID());
	szSQL.Format(_T("SELECT su_userid, su_name FROM sys_user WHERE su_isactive='Y' %s ORDER BY su_name "), szWhere);
//_fmsg(_T("%s"), szSQL);
	pWnd->DeleteAllItems();
	long ret  = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		pWnd->AddItems(
			rs.GetValue(_T("su_userid")), 
			rs.GetValue(_T("su_name")), 
			NULL);
		rs.MoveNext();
	}
	return ret;
}

long CHMSCreateOutpatientRecordDialog::OnIVFTypeLoadData()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndIVFType, _T("IVF_TYPE"), m_szIVFTypeKey);	
}