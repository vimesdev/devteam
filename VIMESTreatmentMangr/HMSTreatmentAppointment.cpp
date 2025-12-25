#include "HMSTreatmentAppointment.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDocumentNoSetfocus();} */ 
static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDocumentNoKillfocus();
}
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentIDChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDocumentIDChange();
} */
/*static void _OnDocumentIDSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDocumentIDSetfocus();} */ 
/*static void _OnDocumentIDKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDocumentIDKillfocus();
} */
static int _OnDocumentIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnDocumentIDCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnAppointmentDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnAppointmentDateChange();
} */
/*static void _OnAppointmentDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnAppointmentDateSetfocus();} */ 
/*static void _OnAppointmentDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnAppointmentDateKillfocus();
} */
static int _OnAppointmentDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnAppointmentDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentAppointment* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnShapeChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnShapeChange();
} */
/*static void _OnShapeSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnShapeSetfocus();} */ 
/*static void _OnShapeKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnShapeKillfocus();
} */
static int _OnShapeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnShapeCheckValue();
} 
static void _OnMetastasisSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentAppointment* )pWnd)->OnMetastasisSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMetastasisSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnMetastasisSelendok();
}
/*static void _OnMetastasisSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnMetastasisKillfocus();
}*/
/*static void _OnMetastasisKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnMetastasisKillfocus();
}*/
static long _OnMetastasisLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnMetastasisLoadData();
}
/*static void _OnMetastasisAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnMetastasisAddNew();
}*/
/*static void _OnTGATGChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnTGATGChange();
} */
/*static void _OnTGATGSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnTGATGSetfocus();} */ 
/*static void _OnTGATGKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnTGATGKillfocus();
} */
static int _OnTGATGCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnTGATGCheckValue();
} 
/*static void _OnScheduleTreatmentChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleTreatmentChange();
} */
/*static void _OnScheduleTreatmentSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleTreatmentSetfocus();} */ 
/*static void _OnScheduleTreatmentKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleTreatmentKillfocus();
} */
static int _OnScheduleTreatmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnScheduleTreatmentCheckValue();
} 
static void _OnScheduleDiagnoseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentAppointment* )pWnd)->OnScheduleDiagnoseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnScheduleDiagnoseSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleDiagnoseSelendok();
}
/*static void _OnScheduleDiagnoseSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleDiagnoseKillfocus();
}*/
/*static void _OnScheduleDiagnoseKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleDiagnoseKillfocus();
}*/
static long _OnScheduleDiagnoseLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnScheduleDiagnoseLoadData();
}
/*static void _OnScheduleDiagnoseAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleDiagnoseAddNew();
}*/
/*static void _OnScheduleI131ChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleI131Change();
} */
/*static void _OnScheduleI131SetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleI131Setfocus();} */ 
/*static void _OnScheduleI131KillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnScheduleI131Killfocus();
} */
static int _OnScheduleI131CheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnScheduleI131CheckValue();
} 
static void _OnDoctorDateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentAppointment* )pWnd)->OnDoctorDateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorDateSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDoctorDateSelendok();
}
/*static void _OnDoctorDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDoctorDateKillfocus();
}*/
/*static void _OnDoctorDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDoctorDateKillfocus();
}*/
static long _OnDoctorDateLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnDoctorDateLoadData();
}
/*static void _OnDoctorDateAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnDoctorDateAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnNoteCheckValue();
} 
static void _OnPharmacistDateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentAppointment* )pWnd)->OnPharmacistDateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPharmacistDateSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPharmacistDateSelendok();
}
/*static void _OnPharmacistDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPharmacistDateKillfocus();
}*/
/*static void _OnPharmacistDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPharmacistDateKillfocus();
}*/
static long _OnPharmacistDateLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment *)pWnd)->OnPharmacistDateLoadData();
}
/*static void _OnPharmacistDateAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment *)pWnd)->OnPharmacistDateAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentAppointment *pVw = (CHMSTreatmentAppointment *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTreatmentAppointment *pVw = (CHMSTreatmentAppointment *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentAppointment *pVw = (CHMSTreatmentAppointment *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnAppointmentListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentAppointment*)pWnd)->OnAppointmentListLoadData();
} 
static void _OnAppointmentListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentAppointment*)pWnd)->OnAppointmentListDblClick();
} 
static void _OnAppointmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentAppointment*)pWnd)->OnAppointmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnAppointmentListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentAppointment*)pWnd)->OnAppointmentListDeleteItem();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSTreatmentAppointment *pVw = (CHMSTreatmentAppointment *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMSTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentAppointment*)pWnd)->OnAddHMSTreatmentAppointment();
} 
static int _OnEditHMSTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentAppointment*)pWnd)->OnEditHMSTreatmentAppointment();
} 
static int _OnDeleteHMSTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentAppointment*)pWnd)->OnDeleteHMSTreatmentAppointment();
} 
static int _OnSaveHMSTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentAppointment*)pWnd)->OnSaveHMSTreatmentAppointment();
} 
static int _OnCancelHMSTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentAppointment*)pWnd)->OnCancelHMSTreatmentAppointment();
} 
CHMSTreatmentAppointment::CHMSTreatmentAppointment(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTreatmentAppointment::~CHMSTreatmentAppointment(){
}
void CHMSTreatmentAppointment::OnCreateComponents(){
	m_wndTreatmentAppointment.Create(this, _T("Treatment Appointment"), 5, 279, 630, 544);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 305, 130, 330);
	m_wndDocumentNo.Create(this,135, 305, 315, 330); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 320, 305, 440, 330);
	m_wndPatientName.Create(this,445, 305, 625, 330); 
	m_wndDocumentIDLabel.Create(this, _T("Document ID"), 10, 335, 130, 360);
	m_wndDocumentID.Create(this,135, 335, 315, 360); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 320, 335, 440, 360);
	m_wndPhone.Create(this,445, 335, 625, 360); 
	m_wndAppointmentDateLabel.Create(this, _T("Appointment Date"), 10, 365, 130, 390);
	m_wndAppointmentDate.Create(this,135, 365, 315, 390); 
	m_wndTypeLabel.Create(this, _T("Type"), 320, 365, 440, 390);
	m_wndType.Create(this,445, 365, 625, 390); 
	m_wndShapeLabel.Create(this, _T("Shape"), 10, 395, 130, 420);
	m_wndShape.Create(this,135, 395, 315, 420); 
	m_wndMetastasisLabel.Create(this, _T("Metastasis"), 320, 395, 440, 420);
	m_wndMetastasis.Create(this,445, 395, 625, 420); 
	m_wndTGATGLabel.Create(this, _T("TG/A-TG"), 10, 425, 130, 450);
	m_wndTGATG.Create(this,135, 425, 315, 450); 
	m_wndScheduleTreatmentLabel.Create(this, _T("Schedule Treatment"), 319, 425, 439, 450);
	m_wndScheduleTreatment.Create(this,444, 425, 624, 450); 
	m_wndScheduleDiagnoseLabel.Create(this, _T("Schedule Diagnose"), 10, 455, 130, 480);
	m_wndScheduleDiagnose.Create(this,135, 455, 315, 480); 
	m_wndScheduleI131Label.Create(this, _T("Schedule I131"), 320, 455, 440, 480);
	m_wndScheduleI131.Create(this,445, 455, 625, 480); 
	m_wndDoctorDateLabel.Create(this, _T("Doctor Date"), 10, 485, 130, 510);
	m_wndDoctorDate.Create(this,135, 485, 315, 510); 
	m_wndPharmacistDateLabel.Create(this, _T("Pharmacist Date"), 320, 485, 440, 510);
	m_wndPharmacistDate.Create(this,445, 485, 625, 510); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 515, 130, 540);
	m_wndNote.Create(this,135, 515, 625, 540); 
	m_wndSave.Create(this, _T("Save"), 380, 550, 460, 575);
	m_wndCancel.Create(this, _T("Cancel"), 465, 550, 545, 575);
	m_wndClose.Create(this, _T("Close"), 550, 550, 630, 575);
	m_wndAppointmentList.Create(this,5, 5, 630, 275); 
	m_wndUpdate.Create(this, _T("Update"), 295, 550, 375, 575);

}
void CHMSTreatmentAppointment::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(35);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocumentID.SetLimitText(35);
	m_wndDocumentID.SetCheckValue(true);
	m_wndPhone.SetLimitText(35);
	m_wndPhone.SetCheckValue(true);
	m_wndAppointmentDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndShape.SetLimitText(35);
	m_wndShape.SetCheckValue(true);
	m_wndMetastasis.SetCheckValue(true);
	m_wndMetastasis.LimitText(35);
	m_wndTGATG.SetLimitText(35);
	m_wndTGATG.SetCheckValue(true);
	m_wndScheduleTreatment.SetLimitText(35);
	m_wndScheduleTreatment.SetCheckValue(true);
	m_wndScheduleDiagnose.SetCheckValue(true);
	m_wndScheduleDiagnose.LimitText(35);
	m_wndScheduleI131.SetLimitText(35);
	m_wndScheduleI131.SetCheckValue(true);
	m_wndDoctorDate.SetCheckValue(true);
	m_wndDoctorDate.LimitText(35);
	m_wndNote.SetLimitText(35);

	m_wndPharmacistDate.SetCheckValue(true);
	m_wndPharmacistDate.LimitText(35);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDoctorDate.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDoctorDate.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

	m_wndPharmacistDate.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPharmacistDate.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

	m_wndMetastasis.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndMetastasis.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

	m_wndScheduleDiagnose.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndScheduleDiagnose.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

	m_wndAppointmentList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndAppointmentList.InsertColumn(1, _T("IDX"), CFMT_TEXT, 0);
	m_wndAppointmentList.InsertColumn(2, _T("Patient No"), CFMT_TEXT, 100);
	m_wndAppointmentList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndAppointmentList.InsertColumn(4, _T("Appointment Date"), CFMT_DATE, 150);
	m_wndAppointmentList.InsertColumn(5, _T("Treatment Schedule"), CFMT_TEXT, 100);

	m_tbl_appointment.SetTableName(_T("hms_treatment_appointment"));
	m_tbl_appointment.AddField(_T("hta_idx"), dfLong);
	m_tbl_appointment.AddField(_T("hta_docno"), dfLong);
	m_tbl_appointment.AddField(_T("hta_patientno"), dfLong);
	m_tbl_appointment.AddField(_T("hta_docid"), dfLong);
	m_tbl_appointment.AddField(_T("hta_phone"), dfText, 50);
	m_tbl_appointment.AddField(_T("hta_appoint_date"), dfDate);
	m_tbl_appointment.AddField(_T("hta_type"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_shape"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_metastasis"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_tgatg"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_sche_treatment"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_sche_diagnose"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_sche_i131"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_doctor_date"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_pharmacist_date"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_status"), dfText, 15);
	m_tbl_appointment.AddField(_T("hta_note"), dfText, 100);

}
void CHMSTreatmentAppointment::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocumentID.SetEvent(WE_CHANGE, _OnDocumentIDChangeFnc);
	//m_wndDocumentID.SetEvent(WE_SETFOCUS, _OnDocumentIDSetfocusFnc);
	//m_wndDocumentID.SetEvent(WE_KILLFOCUS, _OnDocumentIDKillfocusFnc);
	m_wndDocumentID.SetEvent(WE_CHECKVALUE, _OnDocumentIDCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndAppointmentDate.SetEvent(WE_CHANGE, _OnAppointmentDateChangeFnc);
	//m_wndAppointmentDate.SetEvent(WE_SETFOCUS, _OnAppointmentDateSetfocusFnc);
	//m_wndAppointmentDate.SetEvent(WE_KILLFOCUS, _OnAppointmentDateKillfocusFnc);
	m_wndAppointmentDate.SetEvent(WE_CHECKVALUE, _OnAppointmentDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndShape.SetEvent(WE_CHANGE, _OnShapeChangeFnc);
	//m_wndShape.SetEvent(WE_SETFOCUS, _OnShapeSetfocusFnc);
	//m_wndShape.SetEvent(WE_KILLFOCUS, _OnShapeKillfocusFnc);
	m_wndShape.SetEvent(WE_CHECKVALUE, _OnShapeCheckValueFnc);
	m_wndMetastasis.SetEvent(WE_SELENDOK, _OnMetastasisSelendokFnc);
	//m_wndMetastasis.SetEvent(WE_SETFOCUS, _OnMetastasisSetfocusFnc);
	//m_wndMetastasis.SetEvent(WE_KILLFOCUS, _OnMetastasisKillfocusFnc);
	m_wndMetastasis.SetEvent(WE_SELCHANGE, _OnMetastasisSelectChangeFnc);
	m_wndMetastasis.SetEvent(WE_LOADDATA, _OnMetastasisLoadDataFnc);
	//m_wndMetastasis.SetEvent(WE_ADDNEW, _OnMetastasisAddNewFnc);
	//m_wndTGATG.SetEvent(WE_CHANGE, _OnTGATGChangeFnc);
	//m_wndTGATG.SetEvent(WE_SETFOCUS, _OnTGATGSetfocusFnc);
	//m_wndTGATG.SetEvent(WE_KILLFOCUS, _OnTGATGKillfocusFnc);
	m_wndTGATG.SetEvent(WE_CHECKVALUE, _OnTGATGCheckValueFnc);
	//m_wndScheduleTreatment.SetEvent(WE_CHANGE, _OnScheduleTreatmentChangeFnc);
	//m_wndScheduleTreatment.SetEvent(WE_SETFOCUS, _OnScheduleTreatmentSetfocusFnc);
	//m_wndScheduleTreatment.SetEvent(WE_KILLFOCUS, _OnScheduleTreatmentKillfocusFnc);
	m_wndScheduleTreatment.SetEvent(WE_CHECKVALUE, _OnScheduleTreatmentCheckValueFnc);
	m_wndScheduleDiagnose.SetEvent(WE_SELENDOK, _OnScheduleDiagnoseSelendokFnc);
	//m_wndScheduleDiagnose.SetEvent(WE_SETFOCUS, _OnScheduleDiagnoseSetfocusFnc);
	//m_wndScheduleDiagnose.SetEvent(WE_KILLFOCUS, _OnScheduleDiagnoseKillfocusFnc);
	m_wndScheduleDiagnose.SetEvent(WE_SELCHANGE, _OnScheduleDiagnoseSelectChangeFnc);
	m_wndScheduleDiagnose.SetEvent(WE_LOADDATA, _OnScheduleDiagnoseLoadDataFnc);
	//m_wndScheduleDiagnose.SetEvent(WE_ADDNEW, _OnScheduleDiagnoseAddNewFnc);
	//m_wndScheduleI131.SetEvent(WE_CHANGE, _OnScheduleI131ChangeFnc);
	//m_wndScheduleI131.SetEvent(WE_SETFOCUS, _OnScheduleI131SetfocusFnc);
	//m_wndScheduleI131.SetEvent(WE_KILLFOCUS, _OnScheduleI131KillfocusFnc);
	m_wndScheduleI131.SetEvent(WE_CHECKVALUE, _OnScheduleI131CheckValueFnc);
	m_wndDoctorDate.SetEvent(WE_SELENDOK, _OnDoctorDateSelendokFnc);
	//m_wndDoctorDate.SetEvent(WE_SETFOCUS, _OnDoctorDateSetfocusFnc);
	//m_wndDoctorDate.SetEvent(WE_KILLFOCUS, _OnDoctorDateKillfocusFnc);
	m_wndDoctorDate.SetEvent(WE_SELCHANGE, _OnDoctorDateSelectChangeFnc);
	m_wndDoctorDate.SetEvent(WE_LOADDATA, _OnDoctorDateLoadDataFnc);
	//m_wndDoctorDate.SetEvent(WE_ADDNEW, _OnDoctorDateAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndPharmacistDate.SetEvent(WE_SELENDOK, _OnPharmacistDateSelendokFnc);
	//m_wndPharmacistDate.SetEvent(WE_SETFOCUS, _OnPharmacistDateSetfocusFnc);
	//m_wndPharmacistDate.SetEvent(WE_KILLFOCUS, _OnPharmacistDateKillfocusFnc);
	m_wndPharmacistDate.SetEvent(WE_SELCHANGE, _OnPharmacistDateSelectChangeFnc);
	m_wndPharmacistDate.SetEvent(WE_LOADDATA, _OnPharmacistDateLoadDataFnc);
	//m_wndPharmacistDate.SetEvent(WE_ADDNEW, _OnPharmacistDateAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAppointmentList.SetEvent(WE_SELCHANGE, _OnAppointmentListSelectChangeFnc);
	m_wndAppointmentList.SetEvent(WE_LOADDATA, _OnAppointmentListLoadDataFnc);
	m_wndAppointmentList.SetEvent(WE_DBLCLICK, _OnAppointmentListDblClickFnc);
	m_wndAppointmentList.AddEvent(1, _T("Delete"), _OnAppointmentListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	
	/*if(!m_szDocumentNo.IsEmpty())
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("GET_PATIENTNAME('%s')"), m_szDocumentNo);
		_fmsg(_T("SQL :%s"), szSQL);
		m_szPatientName = pMF->ExecDML(szSQL);
		_fmsg(_T("Name : %s"), m_szPatientName);

		szSQL.Format(_T("SELECT hd_telephone FROM hms_doc WHERE hd_docno = '%s'"), m_szDocumentNo);
		rs.ExecSQL(szSQL);
		m_szPhone = rs.GetValue(_T("hd_telephone"));
		UpdateData(FALSE);
	}*/

	if(m_nPatientNo > 0)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, hd_telephone FROM hms_patient ") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno = hp_patientno) ") 
			_T(" WHERE hp_patientno = %ld "), m_nPatientNo);
		_fmsg(_T("SQL :%s"), szSQL);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("pname"), m_szPatientName);
			rs.GetValue(_T("hd_telephone"), m_szPhone);
			UpdateData(FALSE);
		}
	}
	OnAppointmentListLoadData();
}
void CHMSTreatmentAppointment::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentID.GetDlgCtrlID(), m_szDocumentID);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndAppointmentDate.GetDlgCtrlID(), m_szAppointmentDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndShape.GetDlgCtrlID(), m_szShape);
	DDX_TextEx(pDX, m_wndMetastasis.GetDlgCtrlID(), m_szMetastasisKey);
	DDX_Text(pDX, m_wndTGATG.GetDlgCtrlID(), m_szTGATG);
	DDX_Text(pDX, m_wndScheduleTreatment.GetDlgCtrlID(), m_szScheduleTreatment);
	DDX_TextEx(pDX, m_wndScheduleDiagnose.GetDlgCtrlID(), m_szScheduleDiagnoseKey);
	DDX_Text(pDX, m_wndScheduleI131.GetDlgCtrlID(), m_szScheduleI131);
	DDX_TextEx(pDX, m_wndDoctorDate.GetDlgCtrlID(), m_szDoctorDateKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndPharmacistDate.GetDlgCtrlID(), m_szPharmacistDateKey);

}
void CHMSTreatmentAppointment::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hta_docno, hta_docid, GET_PATIENTNAME(hta_docno) as pname,hta_shape, hta_metastasis, hta_tgatg, hta_sche_treatment, hta_sche_diagnose, hta_sche_i131, ") \
		_T(" hta_doctor_date, hta_pharmacist_date, hta_note, hta_status, hta_type, hta_test_date, hta_treatment_date, hta_phone, hta_appoint_date ") \
		_T(" FROM HMS_TREATMENT_APPOINTMENT WHERE HTA_PATIENTNO = %ld AND HTA_IDX = %ld"), m_nPatientNo, m_nIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hta_docno"), m_nDocumentNo);
		//rs.GetValue(_T("hta_patientno"), m_nPatientNo);
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("hta_docid"), m_szDocumentID);
		rs.GetValue(_T("hta_shape"), m_szShape);
		rs.GetValue(_T("hta_metastasis"), m_szMetastasisKey);
		rs.GetValue(_T("hta_tgatg"), m_szTGATG);
		rs.GetValue(_T("hta_sche_treatment"), m_szScheduleTreatment);
		rs.GetValue(_T("hta_sche_diagnose"), m_szScheduleDiagnoseKey);
		rs.GetValue(_T("hta_sche_i131"), m_szScheduleI131);
		rs.GetValue(_T("hta_doctor_date"), m_szDoctorDateKey);
		rs.GetValue(_T("hta_pharmacist_date"), m_szPharmacistDateKey);
		rs.GetValue(_T("hta_note"), m_szNote);
		rs.GetValue(_T("hta_type"), m_szTypeKey);
		rs.GetValue(_T("hta_phone"), m_szPhone);
		rs.GetValue(_T("hta_appoint_date"), m_szAppointmentDate);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}

}
void CHMSTreatmentAppointment::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT coalesce(max(hta_idx), 0)+1 as nIdx FROM HMS_TREATMENT_APPOINTMENT  "));
	rs.ExecSQL(szSQL);
	long nIdx = str2long(rs.GetValue(_T("nIdx")));

	m_tbl_appointment.SetValue(_T("hta_idx"), nIdx);
	m_tbl_appointment.SetValue(_T("hta_docno"), m_nDocumentNo);
	m_tbl_appointment.SetValue(_T("hta_patientno"), m_nPatientNo);
	m_tbl_appointment.SetValue(_T("hta_docid"), m_szDocumentID);
	m_tbl_appointment.SetValue(_T("hta_phone"), m_szPhone);
	m_tbl_appointment.SetValue(_T("hta_appoint_date"), m_szAppointmentDate);
	m_tbl_appointment.SetValue(_T("hta_type"), m_szTypeKey);
	m_tbl_appointment.SetValue(_T("hta_shape"), m_szShape);
	m_tbl_appointment.SetValue(_T("hta_metastasis"), m_szMetastasisKey);
	m_tbl_appointment.SetValue(_T("hta_tgatg"), m_szTGATG);
	m_tbl_appointment.SetValue(_T("hta_sche_treatment"), m_szScheduleTreatment);
	m_tbl_appointment.SetValue(_T("hta_sche_diagnose"), m_szScheduleDiagnoseKey);
	m_tbl_appointment.SetValue(_T("hta_sche_i131"), m_szScheduleI131);
	m_tbl_appointment.SetValue(_T("hta_doctor_date"), m_szDoctorDateKey);
	m_tbl_appointment.SetValue(_T("hta_pharmacist_date"), m_szPharmacistDateKey);
	m_tbl_appointment.SetValue(_T("hta_note"), m_szNote);
}
void CHMSTreatmentAppointment::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szDocumentID.Empty();
	m_szPhone.Empty();
	m_szAppointmentDate.Empty();
	m_szTypeKey.Empty();
	m_szShape.Empty();
	m_szMetastasisKey.Empty();
	m_szTGATG.Empty();
	m_szScheduleTreatment.Empty();
	m_szScheduleDiagnoseKey.Empty();
	m_szScheduleI131.Empty();
	m_szDoctorDateKey.Empty();
	m_szNote.Empty();
	m_szPharmacistDateKey.Empty();

}
int CHMSTreatmentAppointment::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_wndPatientName.EnableWindow(FALSE);
			m_wndDocumentNo.EnableWindow(FALSE);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_wndPatientName.EnableWindow(FALSE);
			m_wndDocumentNo.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, -1);
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
/*void CHMSTreatmentAppointment::OnDocumentNoChange(){
	
} */
/*void CHMSTreatmentAppointment::OnDocumentNoSetfocus(){
	
} */
void CHMSTreatmentAppointment::OnDocumentNoKillfocus(){
	
}
int CHMSTreatmentAppointment::OnDocumentNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 
/*void CHMSTreatmentAppointment::OnPatientNameChange(){
	
} */
/*void CHMSTreatmentAppointment::OnPatientNameSetfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnPatientNameKillfocus(){
	
} */
int CHMSTreatmentAppointment::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentAppointment::OnDocumentIDChange(){
	
} */
/*void CHMSTreatmentAppointment::OnDocumentIDSetfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnDocumentIDKillfocus(){
	
} */
int CHMSTreatmentAppointment::OnDocumentIDCheckValue(){
	return 0;
} 
/*void CHMSTreatmentAppointment::OnPhoneChange(){
	
} */
/*void CHMSTreatmentAppointment::OnPhoneSetfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnPhoneKillfocus(){
	
} */
int CHMSTreatmentAppointment::OnPhoneCheckValue(){
	return 0;
} 
/*void CHMSTreatmentAppointment::OnAppointmentDateChange(){
	
} */
/*void CHMSTreatmentAppointment::OnAppointmentDateSetfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnAppointmentDateKillfocus(){
	
} */
int CHMSTreatmentAppointment::OnAppointmentDateCheckValue(){
	return 0;
} 
void CHMSTreatmentAppointment::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentAppointment::OnTypeSelendok(){
	 
}
/*void CHMSTreatmentAppointment::OnTypeSetfocus(){
	
}*/
/*void CHMSTreatmentAppointment::OnTypeKillfocus(){
	
}*/
long CHMSTreatmentAppointment::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hta_type' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTreatmentAppointment::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentAppointment::OnShapeChange(){
	
} */
/*void CHMSTreatmentAppointment::OnShapeSetfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnShapeKillfocus(){
	
} */
int CHMSTreatmentAppointment::OnShapeCheckValue(){
	return 0;
} 
void CHMSTreatmentAppointment::OnMetastasisSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentAppointment::OnMetastasisSelendok(){
		 
}
/*void CHMSTreatmentAppointment::OnMetastasisSetfocus(){
	
}*/
/*void CHMSTreatmentAppointment::OnMetastasisKillfocus(){
	
}*/
long CHMSTreatmentAppointment::OnMetastasisLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMetastasis.IsSearchKey() && !m_szMetastasisKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szMetastasisKey);
	}
	m_wndMetastasis.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hta_metastasis' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMetastasis.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTreatmentAppointment::OnMetastasisAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentAppointment::OnTGATGChange(){
	
} */
/*void CHMSTreatmentAppointment::OnTGATGSetfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnTGATGKillfocus(){
	
} */
int CHMSTreatmentAppointment::OnTGATGCheckValue(){
	return 0;
} 
/*void CHMSTreatmentAppointment::OnScheduleTreatmentChange(){
	
} */
/*void CHMSTreatmentAppointment::OnScheduleTreatmentSetfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnScheduleTreatmentKillfocus(){
	
} */
int CHMSTreatmentAppointment::OnScheduleTreatmentCheckValue(){
	return 0;
} 
void CHMSTreatmentAppointment::OnScheduleDiagnoseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentAppointment::OnScheduleDiagnoseSelendok(){
	 
}
/*void CHMSTreatmentAppointment::OnScheduleDiagnoseSetfocus(){
	
}*/
/*void CHMSTreatmentAppointment::OnScheduleDiagnoseKillfocus(){
	
}*/
long CHMSTreatmentAppointment::OnScheduleDiagnoseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndScheduleDiagnose.IsSearchKey() && !m_szScheduleDiagnoseKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szScheduleDiagnoseKey);
	}
	m_wndScheduleDiagnose.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hta_schedule_diagnose' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndScheduleDiagnose.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentAppointment::OnScheduleDiagnoseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentAppointment::OnScheduleI131Change(){
	
} */
/*void CHMSTreatmentAppointment::OnScheduleI131Setfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnScheduleI131Killfocus(){
	
} */
int CHMSTreatmentAppointment::OnScheduleI131CheckValue(){
	return 0;
} 
void CHMSTreatmentAppointment::OnDoctorDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentAppointment::OnDoctorDateSelendok(){
	 
}
/*void CHMSTreatmentAppointment::OnDoctorDateSetfocus(){
	
}*/
/*void CHMSTreatmentAppointment::OnDoctorDateKillfocus(){
	
}*/
long CHMSTreatmentAppointment::OnDoctorDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctorDate.IsSearchKey() && !m_szDoctorDateKey.IsEmpty()){
	 szWhere.Format(_T(" and su_userid='%s' "), m_szDoctorDateKey);
	}
	m_wndDoctorDate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 %s ORDER BY su_userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctorDate.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTreatmentAppointment::OnDoctorDateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentAppointment::OnNoteChange(){
	
} */
/*void CHMSTreatmentAppointment::OnNoteSetfocus(){
	
} */
/*void CHMSTreatmentAppointment::OnNoteKillfocus(){
	
} */
int CHMSTreatmentAppointment::OnNoteCheckValue(){
	return 0;
} 
void CHMSTreatmentAppointment::OnPharmacistDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentAppointment::OnPharmacistDateSelendok(){
	 
}
/*void CHMSTreatmentAppointment::OnPharmacistDateSetfocus(){
	
}*/
/*void CHMSTreatmentAppointment::OnPharmacistDateKillfocus(){
	
}*/
long CHMSTreatmentAppointment::OnPharmacistDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPharmacistDate.IsSearchKey() && !m_szPharmacistDateKey.IsEmpty()){
	 szWhere.Format(_T(" and su_userid='%s' "), m_szPharmacistDateKey);
	}
	m_wndPharmacistDate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 %s ORDER BY su_userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPharmacistDate.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTreatmentAppointment::OnPharmacistDateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentAppointment::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTreatmentAppointment();
} 
void CHMSTreatmentAppointment::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSTreatmentAppointment();
} 
void CHMSTreatmentAppointment::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSTreatmentAppointment::OnAppointmentListDblClick(){
	
} 
void CHMSTreatmentAppointment::OnAppointmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_curPatientNo = str2long(m_wndAppointmentList.GetItemText(nNewItem, 2));
	m_nPatientNo = str2long(m_wndAppointmentList.GetItemText(nNewItem, 2));
	m_nIndex = str2long(m_wndAppointmentList.GetItemText(nNewItem, 1));
	GetDataToScreen();
} 
int CHMSTreatmentAppointment::OnAppointmentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentAppointment::OnAppointmentListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szIndex;
	m_wndAppointmentList.DeleteAllItems();
	m_wndAppointmentList.BeginLoad(); 
	int nCount = 0;
	int nIdx = 1;
	szSQL.Format(_T("SELECT hta_idx, hta_patientno, GET_PATIENTNAME(hta_docno) as pname, hta_appoint_date, hta_sche_treatment FROM HMS_TREATMENT_APPOINTMENT WHERE HTA_PATIENTNO = %ld"), m_nPatientNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIdx);
		m_wndAppointmentList.AddItems(
			szIndex,
			rs.GetValue(_T("hta_idx")),
			rs.GetValue(_T("hta_patientno")),
			rs.GetValue(_T("pname")),
			CDate::Convert(rs.GetValue(_T("hta_appoint_date")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("hta_sche_treatment")), NULL);
		nIdx++;
		rs.MoveNext();
	}
	m_wndAppointmentList.EndLoad(); 
	return nCount;
}
void CHMSTreatmentAppointment::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSTreatmentAppointment();
} 
int CHMSTreatmentAppointment::OnAddHMSTreatmentAppointment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentAppointment::OnEditHMSTreatmentAppointment(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentAppointment::OnDeleteHMSTreatmentAppointment(){
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
 		OnCancelHMSTreatmentAppointment();
 	}
	return 0;
}
int CHMSTreatmentAppointment::OnSaveHMSTreatmentAppointment(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_appointment.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE hta_patientno = %ld AND hta_idx = %ld"), m_curPatientNo, m_nIndex);
 		szSQL = m_tbl_appointment.GetUpdateSQL(_T("hta_patientno, hta_idx, hta_docno"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSTreatmentAppointmentListLoadData();
		
 		SetMode(VM_VIEW);
		OnAppointmentListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentAppointment::OnCancelHMSTreatmentAppointment(){
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
int CHMSTreatmentAppointment::OnHMSTreatmentAppointmentListLoadData(){
	return 0;
}
