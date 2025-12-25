#include "HMSPatientDocument.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSTerminateDocumentDialog.h"
#include "HMSCardEntryDialog.h"
#include "HMSFoodtravelsupport.h"
#include "HMSMoveTreatmentDialog.h"
#include "HMSInsuranceCardSettingDialog.h"
#include "HMSUnterminatedDialog.h"
#include "HMSSelectionListDialog.h"
#include "HMSDentalTreatmentDlg.h"
#include "HMSTreatmentAppointment.h"
#include "HMSTreatmentPlanDlg.h"
#include "HMSTreatmentCareDialog.h"
#include "TMBenhAnDialog.h"
#include "HMSBraceletInfoDlg.h"
#include "TMThongTinHoiChan.h"
#include "HMSFormData.h"
#include "HMSTreatmentHtmlDialog.h"
#include "HMSReportForms/PrintForms.h"
#include "HMSExtraInfoDialog.h"
#include "TMDeathRecord.h"
#include "HTMLFormsDialog.h"
#include "IVFRecordInfoDialog.h"
#include "IVFAppointmentDialog.h"
#include "HMSDocumentPreviewDialog.h"
#include "IVFSingleRecordInfoDialog.h"
#include "HMSBenhAnHTMLDialog.h"

static int _OnViewSecurePatientProfileFnc(CWnd *pWnd){
	 ((CHMSPatientDocument*)pWnd)->OnViewSecurePatientProfile();
	 return 0;
}


/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnSexCheckValue();
} 
/*static void _OnOccupationChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationChange();
} */
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationSetfocus();} */ 
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnOccupationCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnWorkplaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardInfoBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnCardInfoBtnSelect();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnAdmitDateCheckValue();
} 
/*static void _OnDischargeDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDischargeDateChange();
} */
/*static void _OnDischargeDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDischargeDateSetfocus();} */ 
/*static void _OnDischargeDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnDischargeDateKillfocus();
} */
static int _OnDischargeDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnDischargeDateCheckValue();
} 
/*static void _OnMainDiseaseDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnMainDiseaseDiagnosticChange();
} */
/*static void _OnMainDiseaseDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnMainDiseaseDiagnosticSetfocus();} */ 
/*static void _OnMainDiseaseDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnMainDiseaseDiagnosticKillfocus();
} */
static int _OnMainDiseaseDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnMainDiseaseDiagnosticCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnSuggestionChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionChange();
} */
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionSetfocus();} */ 
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnSuggestionKillfocus();
} */
static int _OnSuggestionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnSuggestionCheckValue();
} 
static void _OnSuggestionBtnSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnSuggestionBtnSelect();
}

static void _OnAntibioticUseSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnAntibioticUseSelect();
}

static void _OnAdditionInfoSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnAdditionInfoSelect();
}

static void _OnExtraInfoSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnExtraInfoSelect();
}

static void _OnTreatmentTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPatientDocument*)pWnd)->OnTreatmentTabSelectChange(nOld, nNew);
} 
static int _OnBraceletInfoSelectFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnBraceletInfoSelect();
} 
static int _OnConsultationInfoSelectFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnConsultationInfoSelect();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientDocument*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
/*static void _OnEthnicChangeFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnEthnicChange();
} */
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnEthnicSetfocus();} */ 
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDocument *)pWnd)->OnEthnicKillfocus();
} */
static int _OnEthnicCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDocument *)pWnd)->OnEthnicCheckValue();
} 

static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnAddHMSPatientDocument();
} 
static int _OnEditHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnEditHMSPatientDocument();
} 
static int _OnDeleteHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnDeleteHMSPatientDocument();
} 
static int _OnSaveHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnSaveHMSPatientDocument();
} 
static int _OnCancelHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnCancelHMSPatientDocument();
} 


static int _OnAddNewReceptionFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnAddNewReception();
} 
static int _OnChangeModePatientFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnChangeModePatient();
}
static int _OnRollbackHMSPatientDocumentFnc(CWnd *pWnd){
	 return ((CHMSPatientDocument*)pWnd)->OnRollbackHMSPatientDocument();
}
static int _OnChangeTypePatientDocumentFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnChangeTypePatientDocument();
}
static int _OnCreateNewTreatmentDocnoFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnCreateTreatmentDocument();
}
static int _OnSendPatientTreatmentFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnSendPatientTreatment();
}
static int _OnRecordSummaryDischargeFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnRecordSummaryDischarge();
	return 0;
}

static int _OnCreateDischargeSheetFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->CreateDischargeSheet();
	return 0;
}
static int _OnCreateDeathRecodFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnCreateDeathRecord();
	return 0;
}

static int _OnFoodtravelsupportFnc(CWnd *pWnd){
	return ((CHMSPatientDocument*)pWnd)->OnFoodtravelsupport();
}
static int _OnAddDentalTreatmentFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnAddDentalTreatment();
	return 0;
}
static int _OnCreateTreatmentAppointmentFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnCreateTreatmentAppointment();
	return 0;
}
static int _OnPrintFormsFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnPrintForms();
	return 0;
}
static int _OnCreateTreatmentPlanFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnCreateTreatmentPlan();
	return 0;
}


static void _OnTreatmentTrackingSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnTreatmentTrackingSelect();
}

static void _OnPatientCareSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnPatientCareSelect();
}
static void _OnClinicalRecordSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnClinicalRecordSelect();
}
static void _OnPrehistorySelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnPrehistorySelect();
}
static void _OnElectronicRecordSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnElectronicRecordSelect();
}

static void _OnTreatInfoSelectFnc(CWnd *pWnd){
	CHMSPatientDocument *pVw = (CHMSPatientDocument *)pWnd;
	pVw->OnTreatInfoSelect();
}

static int _OnPhieuDieuTriKhoaRangFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnPhieuDieuTriKhoaRang();
	return 0;
}
static int _OnGiaychungnhannghiviecFnc(CWnd *pWnd){
	 ((CHMSPatientDocument*)pWnd)->OnGiayChungNhanNghiViec();
	 return 0;
}
static int _OnAppointmentReTreatmentFnc(CWnd *pWnd){
	((CHMSPatientDocument*)pWnd)->OnAppointmentReTreatment();
	return 0;
}
CHMSPatientDocument::CHMSPatientDocument(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 625;
	SetDefaultValues();
	
}
CHMSPatientDocument::~CHMSPatientDocument(){
}
void CHMSPatientDocument::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 380, 265);
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 270, 380, 500);
	m_wndDepartments.Create(this, _T("Departments"), 5, 505, 380, 527);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 110, 55);
	m_wndPatientNo.Create(this,115, 30, 195, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 200, 30, 280, 55);
	m_wndDocumentNo.Create(this,285, 30, 375, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 345, 85); 
	m_wndAdditionInfo.Create(this, _T("..."), 350, 60, 375, 85);
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	m_wndAge.Create(this,115, 90, 167, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 172, 90, 206, 115);
	m_wndSex.Create(this,211, 90, 252, 115); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 257, 90, 309, 115);
	m_wndEthnic.Create(this,314, 90, 375, 115); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 10, 120, 110, 145);
	m_wndOccupation.Create(this,115, 120, 375, 145); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 150, 110, 175);
	m_wndAddress.Create(this,115, 150, 375, 200, TRUE, FALSE, TRUE); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 10, 205, 110, 230);
	m_wndWorkplace.Create(this,115, 205, 375, 230); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 235, 110, 260);
	m_wndObject.Create(this,115, 235, 190, 260); 
	m_wndCardNo.Create(this,195, 235, 345, 260); 
	m_wndCardInfoBtn.Create(this, _T("..."), 350, 235, 375, 260);
	m_wndStatusLabel.Create(this, _T("Status"), 10, 295, 110, 320);
	m_wndStatus.Create(this,115, 295, 375, 320); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 325, 110, 350);
	m_wndDoctor.Create(this,115, 325, 375, 350); 
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 10, 355, 110, 380);
	m_wndAdmitDate.Create(this,115, 355, 195, 380); 
	m_wndDischargeDateLabel.Create(this, _T("Discharge Date"), 200, 355, 290, 380);
	m_wndDischargeDate.Create(this,295, 355, 375, 380); 
	m_wndMainDiseaseDiagnosticLabel.Create(this, _T("CĐ. Bệnh chính"), 10, 385, 110, 410);
	m_wndAntibioticUse.Create(this, _T("HDSD Kháng sinh"), 5, 385+25, 113, 410+25);
	m_wndAntibioticUse.ModifyStyle(WS_TABSTOP, 0);
	m_wndMainDiseaseDiagnostic.Create(this,115, 385, 375, 435, TRUE, FALSE, TRUE); 
	m_wndRelationDiseaseLabel.Create(this, _T("Bệnh kèm theo"), 10, 440, 110, 465);
	m_wndRelationDisease.Create(this,115, 440, 375, 465); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 470, 110, 495);
	m_wndSuggestion.Create(this,115, 470, 295, 495); 
	m_wndSuggestionBtn.Create(this, _T("&Term Doc"), 299, 470, 374, 495);
	m_wndDeptList.Create(this,5, 530, 380, 640); 
	m_wndTreatmentTab.Create(this, 385, 5, 1020, 605); 

	m_wndPrehistory.Create(this, _T("Tiền sử bệnh"), 385, 610, 475, 635);
	m_wndClinicalRecord.Create(this, _T("Bệnh án"), 480, 610, 555, 635);
	m_wndElectronicRecord.Create(this, _T("Mẫu biểu chuyên môn"), 560, 610, 700, 635);
	m_wndTreatmentTracking.Create(this, _T("Bệnh trình điều trị"), 705, 610, 820, 635);
	m_wndPatientCare.Create(this, _T("Phiếu chăm sóc"), 825, 610, 930, 635);
	m_wndExtButton.Create(this, _T("Gói dịch vụ"), 935, 610, 1020, 635);
	m_wndExtButton.ModifyStyle(WS_TABSTOP, 0);

	m_wndDetailAddress.Create(this, 0, 0, 0, 0);
	m_wndDetailAddress.ShowWindow(SW_HIDE);
	m_wndDetailAddress.EnableWindow(FALSE);
//	m_wndTreatInfo.ShowWindow(SW_SHOW);

}
void CHMSPatientDocument::OnInitializeComponents(){
    m_wndOverview.Create(&m_wndTreatmentTab);
	m_wndExamine.Create(&m_wndTreatmentTab);
//	m_wndBed.Create(&m_wndTreatmentTab);	
	m_wndParaclinicalOrder.Create(&m_wndTreatmentTab);
	m_wndOperationOrder.Create(&m_wndTreatmentTab);
	m_wndDrug.Create(&m_wndTreatmentTab);
	m_wndFeeDocument.Create(&m_wndTreatmentTab);
	m_wndTreatPackageView.Create(&m_wndTreatmentTab);
	//m_wndFeeDocument2.Create(&m_wndTreatmentTab);
	
	
	//m_wndTheodoidieutri.Create(&m_wndTreatmentTab);
	m_wndTheodoidieutri_V2.Create(&m_wndTreatmentTab);
    m_wndTreatmentTab.Add(_T("Tổng quan"), &m_wndOverview);
	m_wndTreatmentTab.Add(_T("Theo dõi điều trị"), &m_wndTheodoidieutri_V2);
	
	m_wndTreatmentTab.Add(_T("Bệnh trình ĐT"), &m_wndExamine);
	m_wndTreatmentTab.Add(_T("Cận lâm sàng"), &m_wndParaclinicalOrder);
	m_wndTreatmentTab.Add(_T("PTTT"), &m_wndOperationOrder);
	m_wndTreatmentTab.Add(_T("Thuốc/Vật tư"), &m_wndDrug);
	m_wndTreatmentTab.Add(_T("Viện phí"), &m_wndFeeDocument);	
	m_wndTreatmentTab.Add(_T("Gói điều trị"), &m_wndTreatPackageView);
//	m_wndTreatmentTab.Add(_T("Hospital Fee"), &m_wndFeeDocument2);	
	//m_wndFeeDocument.ShowWindow(SW_HIDE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndAge.ModifyStyle(0, ES_RIGHT);
	m_wndSex.SetLimitText(1024);
	m_wndSex.SetCheckValue(true);
	m_wndOccupation.SetLimitText(1024);
	m_wndOccupation.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndDetailAddress.SetLimitText(1024);
	m_wndDetailAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(1024);
	m_wndWorkplace.SetCheckValue(true);
	m_wndObject.SetLimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndCardNo.SetLimitText(18);
	m_wndCardNo.SetCheckValue(true);
	m_wndDoctor.SetLimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetCheckValue(true);
//	m_wndAdmitDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAdmitDate.SetCheckValue(true);
//	m_wndDischargeDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDischargeDate.SetCheckValue(true);
	m_wndMainDiseaseDiagnostic.SetLimitText(35);
	m_wndMainDiseaseDiagnostic.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(35);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndSuggestion.SetLimitText(35);
	m_wndSuggestion.SetCheckValue(true);


	m_wndDeptList.InsertColumn(0, _T("Department"), CFMT_TEXT, 120);
	m_wndDeptList.InsertColumn(1, _T("Admit Date"), CFMT_DATE, 80);
	m_wndDeptList.InsertColumn(2, _T("Discharge Date"), CFMT_DATE, 80);
	m_wndDeptList.InsertColumn(3, _T("Status"), CFMT_TEXT, 70);
	m_wndDeptList.InsertColumn(4, _T("refidx"), CFMT_NUMBER, 0);
	m_wndDeptList.InsertColumn(5, _T("treattime"), CFMT_NUMBER, 0);
	m_wndDeptList.InsertColumn(6, _T("cancertime"), CFMT_NUMBER, 0);
	

}
void CHMSPatientDocument::OnSetWindowEvents(){
	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndOccupation.SetEvent(WE_CHANGE, _OnOccupationChangeFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_CHECKVALUE, _OnOccupationCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDetailAddress.SetEvent(WE_CHANGE, _OnDetailAddressChangeFnc);
	//m_wndDetailAddress.SetEvent(WE_SETFOCUS, _OnDetailAddressSetfocusFnc);
	//m_wndDetailAddress.SetEvent(WE_KILLFOCUS, _OnDetailAddressKillfocusFnc);
	m_wndDetailAddress.SetEvent(WE_CHECKVALUE, _OnDetailAddressCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCardInfoBtn.SetEvent(WE_CLICK, _OnCardInfoBtnSelectFnc);
	//m_wndDoctor.SetEvent(WE_CHANGE, _OnDoctorChangeFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_CHECKVALUE, _OnDoctorCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	//m_wndDischargeDate.SetEvent(WE_CHANGE, _OnDischargeDateChangeFnc);
	//m_wndDischargeDate.SetEvent(WE_SETFOCUS, _OnDischargeDateSetfocusFnc);
	//m_wndDischargeDate.SetEvent(WE_KILLFOCUS, _OnDischargeDateKillfocusFnc);
	m_wndDischargeDate.SetEvent(WE_CHECKVALUE, _OnDischargeDateCheckValueFnc);
	//m_wndMainDiseaseDiagnostic.SetEvent(WE_CHANGE, _OnMainDiseaseDiagnosticChangeFnc);
	//m_wndMainDiseaseDiagnostic.SetEvent(WE_SETFOCUS, _OnMainDiseaseDiagnosticSetfocusFnc);
	//m_wndMainDiseaseDiagnostic.SetEvent(WE_KILLFOCUS, _OnMainDiseaseDiagnosticKillfocusFnc);
	m_wndMainDiseaseDiagnostic.SetEvent(WE_CHECKVALUE, _OnMainDiseaseDiagnosticCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndSuggestion.SetEvent(WE_CHANGE, _OnSuggestionChangeFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);

	//m_wndEthnic.SetEvent(WE_CHANGE, _OnEthnicChangeFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_CHECKVALUE, _OnEthnicCheckValueFnc);

	m_wndSuggestion.SetEvent(WE_CHECKVALUE, _OnSuggestionCheckValueFnc);
	m_wndSuggestionBtn.SetEvent(WE_CLICK, _OnSuggestionBtnSelectFnc);
	m_wndTreatmentTab.SetEvent(WE_SELCHANGE, _OnTreatmentTabSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdditionInfo.SetEvent(WE_CLICK, _OnAdditionInfoSelectFnc);

	m_wndAntibioticUse.SetEvent(WE_CLICK, _OnAntibioticUseSelectFnc);
	m_wndExtButton.SetEvent(WE_CLICK, _OnExtraInfoSelectFnc);


	m_wndTreatmentTracking.SetEvent(WE_CLICK, _OnTreatmentTrackingSelectFnc);
	///
	m_wndPatientCare.SetEvent(WE_CLICK, _OnPatientCareSelectFnc);
	m_wndPrehistory.SetEvent(WE_CLICK, _OnPrehistorySelectFnc);
	m_wndClinicalRecord.SetEvent(WE_CLICK, _OnClinicalRecordSelectFnc);
	m_wndElectronicRecord.SetEvent(WE_CLICK, _OnElectronicRecordSelectFnc);
//	m_wndTreatInfo.SetEvent(WE_CLICK, _OnTreatInfoSelectFnc);
	//Chuyen che do cho benh nhan
	AddEvent(1, _T("Change the mode to patients"), _OnChangeModePatientFnc);
	AddEvent(0, _T("-"));
	AddEvent(2, _T("Rollback Patient Profiles"), _OnRollbackHMSPatientDocumentFnc);
	AddEvent(0, _T("-"));
	//AddEvent(2, _T("Change the type of treatment"), _OnChangeTypePatientDocumentFnc);
	
	////if(pMF->m_szCreatenewtreantment == _T("Y")){
	//	AddEvent(3, _T("Create new profile treatment"), _OnCreateNewTreatmentDocnoFnc);
	AddEvent(4, _T("Speciality Examine Movement"), _OnSendPatientTreatmentFnc);	
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Phiếu tổng kết ra viện"), _OnRecordSummaryDischargeFnc);
	AddEvent(0, _T("-"));
	AddEvent(6, _T("Create Discharge Sheet"), _OnCreateDischargeSheetFnc);
//	AddEvent(0, _T("-"));
//	AddEvent(15, _T("Create Death Record"), _OnCreateDeathRecodFnc);
/*
	if(pMF->m_szDept == _T("B10"))
	{
		AddEvent(0, _T("-"));
		AddEvent(7, _T("Thu dung điều trị ngoại trú"), _OnAddDentalTreatmentFnc);
		AddEvent(0, _T("-"), NULL);
		AddEvent(12, _T("In phiếu điều trị khoa răng"), _OnPhieuDieuTriKhoaRangFnc);
	}
	if (pMF->m_szDept == _T("A20")){
		AddEvent(0, _T("-"));
		AddEvent(8, _T("Treatment Plan"), _OnCreateTreatmentPlanFnc);
		AddEvent(0, _T("-"));
		AddEvent(9, _T("Treatment Appointment"), _OnCreateTreatmentAppointmentFnc);
	}
/*
	m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientDocumentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientDocumentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientDocumentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientDocumentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientDocumentFnc, 0, 'T', VK_CONTROL);
*/
	AddEvent(0, _T("-"));
	AddEvent(10, _T("Bracelet Info"), _OnBraceletInfoSelectFnc);
	AddEvent(0, _T("-"));
	AddEvent(11, _T("Thông tin hội chẩn"), _OnConsultationInfoSelectFnc);

//	AddEvent(0, _T("-"));
//	AddEvent(14, _T("Cấp giấy chứng nhận nghỉ việc BHXH"), _OnGiaychungnhannghiviecFnc);
	AddEvent(0, _T("-"));
	AddEvent(13, _T("Phiếu hẹn"), _OnAppointmentReTreatmentFnc);
	//AddEvent(0, _T("-"));
	//AddEvent(12, _T("Print Forms Dialog"), _OnPrintFormsFnc);
	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, true);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));
	
	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+2, true);
	//m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

	m_wndTreatmentTab.SetCurSel(0);
	SetMode(VM_NONE);

	

}


void CHMSPatientDocument::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	//DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndDischargeDate.GetDlgCtrlID(), m_szDischargeDate);
	DDX_Text(pDX, m_wndMainDiseaseDiagnostic.GetDlgCtrlID(), m_szMainDiseaseDiagnostic);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);
	DDX_Text(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnic);

}
void CHMSPatientDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CString szWhere;
	CRecord rs(&pMF->m_db);
	SetDefaultValues();
	pMF->m_bIsDocumentReadOnly = false;

	szSQL.Format(_T(" SELECT hcr_recordno as recordno,	hp_patientno as patientno,") \
				_T(" 	GET_PATIENTNAME(hd_docno) as pname,") \
				_T(" 	hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	sys_sel_getname('sys_ethnic', hp_ethnic) as ethnic, ") \
				_T(" 	sys_sel_getname('sys_occupation', hp_occupation) as occupation,") \
				_T(" 	sys_sel_getname('hms_rank', hd_rank) as rank,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
				_T(" 	hd_object as objectid,") \
				_T(" 	hms_getobjectname(hd_object) as objectname,") \
				_T(" 	hd_cardno as cardno,") \
				_T(" 	hd_cardidx as cardidx,") \
				_T("	hd_rank as rank_id, ") \
				_T(" 	htr_outpatient as outpatient,") \
				_T(" 	htr_status as statusid,") \
				_T(" 	sys_sel_getname('hms_treatment_status', htr_status) as status,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T(" 	get_username(hcr_treatdoctor) as doctor,") \
				_T(" 	trunc_date(htr_admitdate) as admitdate,") \
				_T(" 	trunc_date(htr_dischargedate) as dischargedate,") \
				_T(" 	hcr_conclusion as conclusion,") \
				_T(" 	htr_maindisease as maindisease,") \
				_T(" 	hcr_reldisease as reldisease,") \
				_T("	htr_suggestion as suggestionkey, ") \
				_T(" 	sys_sel_getname('hms_suggestion', htr_suggestion) as suggestion, ") \
				_T("	htr_deptid, htr_tdeptid as todeptid, ") \
				_T("	trunc_date(htr_updateddate) as updated_date, hd_isinpatient, htr_combinedtreat, htr_ctdeptid, htr_treattime, hd_istransplant, hcr_cancer AS cancer ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno)") \
				_T(" WHERE htr_docno=%ld AND htr_idx=%d "), pMF->m_nDocumentNo, pMF->m_nRefIndex);

//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("recordno"), pMF->m_szRecordNo);

		CString szIsTransplant;
		rs.GetValue(_T("htr_treattime"), pMF->m_nTreatTime);
		rs.GetValue(_T("pname"), tmpStr);

		
		rs.GetValue(_T("hd_istransplant"), szIsTransplant);
		if(szIsTransplant == _T("Y"))
		{
			tmpStr.AppendFormat(_T(" (Ghép tạng)"));
		}
		
		StringUpper(tmpStr, m_szPatientName);
		//rs.GetValue(_T("birthdate"), m_szBirthDate); 
		rs.GetValue(_T("yearofbirth"), m_szAge); 
		rs.GetValue(_T("sex"), m_szSex); 
		rs.GetValue(_T("ethnic"), m_szEthnic);
		rs.GetValue(_T("occupation"), m_szOccupation); 
		rs.GetValue(_T("workplace"), m_szWorkplace); 
		rs.GetValue(_T("detailaddress"), m_szDetailAddress);
		m_szAddress  = m_szDetailAddress;
		if(!m_szAddress.IsEmpty())
			m_szAddress += _T(" - ");
		rs.GetValue(_T("address"), tmpStr);
		m_szAddress += tmpStr;
		rs.GetValue(_T("objectid"), tmpStr); 
		pMF->m_szObject = tmpStr;
		
		rs.GetValue(_T("objectname"), m_szObject);
		rs.GetValue(_T("cardno"), m_szCardNo);
		rs.GetValue(_T("statusid"), m_szDocStatus);
		rs.GetValue(_T("status"), m_szStatus);
		if(pMF->m_szObject == _T("1"))
		{
			rs.GetValue(_T("rank"), m_szCardNo);
		}

		rs.GetValue(_T("doctor"), m_szDoctor);
		rs.GetValue(_T("admitdate"), m_szAdmitDate);
		rs.GetValue(_T("dischargedate"), m_szDischargeDate);
		rs.GetValue(_T("maindisease"), m_szMainDiseaseDiagnostic);
		rs.GetValue(_T("reldisease"), m_szRelationDisease);
		rs.GetValue(_T("suggestionkey"), m_szSuggestionKey);
		rs.GetValue(_T("suggestion"), m_szSuggestion);
		pMF->m_szEntryDate = m_szAdmitDate;
		pMF->m_szDiagnostic = m_szMainDiseaseDiagnostic;

		rs.GetValue(_T("todeptid"), tmpStr);
		if(!tmpStr.IsEmpty() && m_szSuggestionKey == _T("A"))
		{
			m_szSuggestion.AppendFormat(_T(" [%s]"), tmpStr);
			tmpStr.Empty();
		}

		rs.GetValue(_T("outpatient"), pMF->m_szOutpatient);
		if(pMF->m_szOutpatient == _T("Y")){
			TranslateString(_T("Outpatient"), tmpStr);
			m_szStatus.AppendFormat(_T(" [%s]"), tmpStr);
		}

		CString ctdeptid;
		rs.GetValue(_T("htr_deptid"), m_szDepartment_ID);

		
		rs.GetValue(_T("htr_ctdeptid"), ctdeptid);
		rs.GetValue(_T("htr_combinedtreat"), tmpStr);
		if(tmpStr == _T("Y") && ctdeptid == pMF->m_szDept)
		{
			pMF->m_szOutpatient = _T("Y");
			m_bCombinedTreatment = true;
		}

		
		if(m_szDepartment_ID != pMF->m_szDept && !m_bCombinedTreatment)
		{
			pMF->m_bIsDocumentReadOnly = true;
		}

		rs.GetValue(_T("updateddate"), m_szUpdatedDate);
		pMF->m_szEntryDate = m_szAdmitDate;
		rs.GetValue(_T("treatdoctor"), pMF->m_szDoctor);

		tmpStr = pMF->GetCurrentUser();
		

		if(tmpStr != pMF->m_szDoctor)
		{
			CRecord rsx(&pMF->m_db);
			CString szSQL;
			szSQL.Format(_T("SELECT count(*) FROM sys_user WHERE su_userid='%s' and su_deptid='%s' "), pMF->m_szDoctor, pMF->m_szDept);
			rsx.ExecSQL(szSQL);
			if(rsx.GetIntValue() <= 0)
			{
				if(pMF->m_UserInfo.su_groupid == _T("D"))
				{
					pMF->m_szDoctor = tmpStr;
				}

			}

		}

		tmpStr.MakeLower();
		if(m_szDocStatus == _T("T") && pMF->CheckPermission(_T("02.01")))
			SetMenuState(2, true);
		else
			SetMenuState(2, false);
		if(m_szDocStatus != _T("T"))
			m_szDischargeDate.Empty();

		rs.GetValue(_T("hd_isinpatient"), pMF->m_szInPatient);

		if(m_szDocStatus != _T("T"))
		{
			m_szDischargeDate.Empty();
		}

		//Kiem tra han dung the BHYT
		if (!m_szCardNo.IsEmpty())
		{
			long nCardIdx;
			int nNumberExpDate;

			CRecord rsc(&pMF->m_db);
			rs.GetValue(_T("cardidx"), nCardIdx);
			m_nCardIdx = nCardIdx;
			szSQL.Format(_T("SELECT trunc(sysdate)-hc_expdate as number_expdate FROM hms_card WHERE hc_patientno=%ld and hc_cardno='%s' and hc_idx=%ld"),
				m_nPatientNo, m_szCardNo, nCardIdx);
			rsc.ExecSQL(szSQL);
			if(!rsc.IsEOF())
			{
				rsc.GetValue(_T("number_expdate"), nNumberExpDate);
				if(nNumberExpDate >= 0)
				{
					ShowMessageBox(_T("Patient's card has expired"));

				}
			}
		}

		int rank;
		rs.GetValue(_T("rank_id"), rank);	
		if(rank >= 15 && rank <= 23 && rank != 19)
		{
			tmpStr.Format(_T("Bệnh nhân cấp [%s]"), rs.GetValue(_T("rank")));
			ShowMessageBox(tmpStr, MB_ICONINFORMATION);
		}
		if(!m_szCardNo.IsEmpty() )
		{
			int priority = (int)m_szCardNo[2];
			if(priority == 1 || priority == 2 && priority == 3)
			{
				ShowMessageBox(_T("Bệnh nhân là đối tượng thẻ ưu tiên"));
			}
		}
		rs.GetValue(_T("cancer"), pMF->m_szCancer);
	}

	m_wndTreatmentTab.SetCurSel(0);
	OnDeptListLoadData();
	SetMode(VM_VIEW);
	
	if(m_szDocStatus != _T("I"))
	{
		SetMenuState(4, false);
	}
	else
	{
		SetMenuState(4, true);
	}

	for (int i =0; i < m_arEvent.GetCount(); i++)
	{
		WEVENT event = m_arEvent[i];
		if(event.nID == 20)
		{
			m_arEvent.RemoveAt(i);
			break;
		}
	}

	if(m_nPatientNo > 0)
	{
		CString szSQL;
		szSQL.Format(_T("SELECT count(*) FROM hms_patient_secure WHERE hps_patientno=%ld and hps_userid='%s' "), m_nPatientNo, pMF->GetCurrentUser());
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			AddEvent(20, _T("View patient profile encrypted"), _OnViewSecurePatientProfileFnc);
		}
	}

	

}
void CHMSPatientDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientDocument::SetDefaultValues(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szOccupation.Empty();
	m_szAddress.Empty();
	m_szDetailAddress.Empty();
	m_szWorkplace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szDoctor.Empty();
	m_szStatus.Empty();
	m_szAdmitDate.Empty();
	m_szDischargeDate.Empty();
	m_szMainDiseaseDiagnostic.Empty();
	m_szRelationDisease.Empty();
	m_szSuggestion.Empty();
	m_szEthnic.Empty();
	m_bCombinedTreatment = false;

}
int CHMSPatientDocument::SetMode(int nMode){ 
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
 			EnableButtons(FALSE, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
		m_wndExtButton.EnableWindow(TRUE);
		m_wndExtButton.ModifyStyle(WS_TABSTOP, 0);
		if(nMode != VM_NONE)
		{
			m_wndClinicalRecord.EnableWindow(TRUE);
			m_wndElectronicRecord.EnableWindow(TRUE);
		}
 		return nOldMode; 
 	} 
/*void CHMSPatientDocument::OnPatientNoChange(){
	
} */
/*void CHMSPatientDocument::OnPatientNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnPatientNoKillfocus(){
	
} */
int CHMSPatientDocument::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDocument::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDocument::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnPatientNameChange(){
	
} */
/*void CHMSPatientDocument::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientDocument::OnPatientNameKillfocus(){
	
} */
int CHMSPatientDocument::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAgeChange(){
	
} */
/*void CHMSPatientDocument::OnAgeSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAgeKillfocus(){
	
} */
int CHMSPatientDocument::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnSexChange(){
	
} */
/*void CHMSPatientDocument::OnSexSetfocus(){
	
} */
/*void CHMSPatientDocument::OnSexKillfocus(){
	
} */
int CHMSPatientDocument::OnSexCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnOccupationChange(){
	
} */
/*void CHMSPatientDocument::OnOccupationSetfocus(){
	
} */
/*void CHMSPatientDocument::OnOccupationKillfocus(){
	
} */
int CHMSPatientDocument::OnOccupationCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAddressChange(){
	
} */
/*void CHMSPatientDocument::OnAddressSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAddressKillfocus(){
	
} */
int CHMSPatientDocument::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnDetailAddressChange(){
	
} */
/*void CHMSPatientDocument::OnDetailAddressSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDetailAddressKillfocus(){
	
} */
int CHMSPatientDocument::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnWorkplaceChange(){
	
} */
/*void CHMSPatientDocument::OnWorkplaceSetfocus(){
	
} */
/*void CHMSPatientDocument::OnWorkplaceKillfocus(){
	
} */
int CHMSPatientDocument::OnWorkplaceCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnObjectChange(){
	
} */
/*void CHMSPatientDocument::OnObjectSetfocus(){
	
} */
/*void CHMSPatientDocument::OnObjectKillfocus(){
	
} */
int CHMSPatientDocument::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnCardNoChange(){
	
} */
/*void CHMSPatientDocument::OnCardNoSetfocus(){
	
} */
/*void CHMSPatientDocument::OnCardNoKillfocus(){
	
} */
int CHMSPatientDocument::OnCardNoCheckValue(){
	return 0;
} 
void CHMSPatientDocument::OnCardInfoBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}

	if(pMF->GetObjectType() != _T("I") && pMF->GetObjectType() != _T("C"))
	{
		return;
	}

	CHMSCardEntryDialog dlg(this, VM_EDIT);
	dlg.m_nPatientNo = m_nPatientNo;
	dlg.m_nIndex = m_nCardIdx;
	dlg.DoModal();
	
} 
/*void CHMSPatientDocument::OnEthnicChange(){
	
} */
/*void CHMSPatientDocument::OnEthnicSetfocus(){
	
} */
/*void CHMSPatientDocument::OnEthnicKillfocus(){
	
} */
int CHMSPatientDocument::OnEthnicCheckValue(){
	return 0;
} 

/*void CHMSPatientDocument::OnDoctorChange(){
	
} */
/*void CHMSPatientDocument::OnDoctorSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDoctorKillfocus(){
	
} */
int CHMSPatientDocument::OnDoctorCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnStatusChange(){
	
} */
/*void CHMSPatientDocument::OnStatusSetfocus(){
	
} */
/*void CHMSPatientDocument::OnStatusKillfocus(){
	
} */
int CHMSPatientDocument::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnAdmitDateChange(){
	
} */
/*void CHMSPatientDocument::OnAdmitDateSetfocus(){
	
} */
/*void CHMSPatientDocument::OnAdmitDateKillfocus(){
	
} */
int CHMSPatientDocument::OnAdmitDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnDischargeDateChange(){
	
} */
/*void CHMSPatientDocument::OnDischargeDateSetfocus(){
	
} */
/*void CHMSPatientDocument::OnDischargeDateKillfocus(){
	
} */
int CHMSPatientDocument::OnDischargeDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnMainDiseaseDiagnosticChange(){
	
} */
/*void CHMSPatientDocument::OnMainDiseaseDiagnosticSetfocus(){
	
} */
/*void CHMSPatientDocument::OnMainDiseaseDiagnosticKillfocus(){
	
} */
int CHMSPatientDocument::OnMainDiseaseDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnRelationDiseaseChange(){
	
} */
/*void CHMSPatientDocument::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSPatientDocument::OnRelationDiseaseKillfocus(){
	
} */
int CHMSPatientDocument::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSPatientDocument::OnSuggestionChange(){
	
} */
/*void CHMSPatientDocument::OnSuggestionSetfocus(){
	
} */
/*void CHMSPatientDocument::OnSuggestionKillfocus(){
	
} */
int CHMSPatientDocument::OnSuggestionCheckValue(){
	return 0;
} 

#include "HMSTreatMovementDialog.h"
void CHMSPatientDocument::OnSuggestionBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, tmpStr;

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}
	// kiem tra neu m_nRefIndex ma da chuyen khoa khac roi thi ko cho thuc hien nua
	szSQL.Format(_T("SELECT count(*) from hms_treatment_record where htr_docno = %ld and htr_idx > %d and htr_status <>'A' "),
										m_nDocumentNo,pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue())
	{
		ShowMessageBox(_T("Luot dieu tri nay da ket thuc khong the thao tac"));
		return;
	}
	// Kiểm tra nếu bệnh nhân có htr_status='A', khoa chưa tiếp nhận nhưng lại kết thúc bệnh án ngay thông báo//
	szSQL.Format(_T("SELECT count(*) from hms_treatment_record where htr_docno = %ld and htr_idx = %d and htr_deptid = 'TTDTHM' and htr_status ='A' "),
										m_nDocumentNo,pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue())
	{
		ShowMessageBox(_T("Bệnh nhân chưa được tiếp nhận vào khoa (trạng thái A) nên không thể kết thúc được"));
		return;
	}


	if(m_bCombinedTreatment)
	{
		CHMSTreatMovementDialog dlg(this);
		dlg.m_nDocumentNo = m_nDocumentNo;
		dlg.m_nRefIdx = pMF->m_nRefIndex;
		dlg.m_bReturnMode = true;
		if (dlg.DoModal() == IDOK)
		{

		}
		return;
	}

	if(!pMF->CheckPermission(_T("02.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	// Kiem tra neu van con goi dich vu trang thai S thi khong cho ket thuc
	szSQL.Format(_T("select count(*) from VIMES.hms_fee_extra ") \
				_T("	left join hms_fee_extraline ON (hfel_fee_extra_id   = hfe_fee_extra_id) ") \
				_T("	Left join hms_fee_list ON (hfl_feeid= hfel_itemid) ") \
				_T("	where hfe_docno=%ld and hfe_refidx=%d and hfe_deptid='%s' and hfel_itemid in (  ") \
				_T("	select  hfl_feeid from hms_fee_list   ") \
				_T(" where hfl_typeid='X' and hfl_active='Y' and hfl_subitem='VIP'  ") \
				_T("	and hfl_subgroup <>'PKG_OLD'	 ) ") \
				_T("	and hfe_status not in ('T','R')  "), pMF->m_nDocumentNo, pMF->m_nRefIndex,m_szDepartment_ID);
	rs.ExecSQL(szSQL);
	
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Benh nhan co goi dich vu chua chot (khac trang thai T). Yeu cau chot goi dich vu truoc khi ket thuc ho so"), MB_OK);	
		return;
	}


//Kiem tra neu dat ket thuc het cac giuong thi cho ket thuoc ho so
	szSQL.Format(_T("SELECT count(*) FROM hms_bed WHERE hb_docno=%ld AND hb_refidx=%d AND hb_status='O' "), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("You mush terminate bed before close patient file."), MB_OK);	
		return;
	}

/*
	szSQL.Format(_T("SELECT count(*) FROM hms_term_warning WHERE htw_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if(nCount > 0)
	{
		CHMSUnTerminatedDialog termdlg(this);
		termdlg.m_nDocumentNo = m_nDocumentNo;
		if(termdlg.DoModal() == IDOK)
		{

		}
		return;
	}
*/
	CHMSTerminateDocumentDialog dlg;
	dlg.m_szSuggestion = m_szSuggestionKey;
	if(dlg.DoModal() == IDOK)
	{

	}
	UpdateData(false);
	
	
} 

#include "HMSDepartmentAdmissionDialog.h"
#include "HMSAdmissionRegistrationDialog.h"
#include "HMSAntibioticListDialog.h"
void CHMSPatientDocument::OnAntibioticUseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSAntibioticListDialog dlg(this);
	dlg.DoModal();
}

void CHMSPatientDocument::OnAdditionInfoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CHMSDepartmentAdmissionDialog dlg(this);
//	CHMSAdmissionRegistrationDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nIndex = pMF->m_nRefIndex;
	dlg.SetMode(VM_VIEW);
	if(dlg.DoModal() == IDOK){		
	}

}


void CHMSPatientDocument::OnExtraInfoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSExtraInfoDialog dlg(this);
	dlg.DoModal();
}

void CHMSPatientDocument::OnTreatmentTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNew < 0)
		return;
	switch(nNew){
    case 0:
        m_wndOverview.RefreshData();
        break;
	case 1:
		m_wndTheodoidieutri_V2.RefreshData();
		break;
	case 2:
		m_wndExamine.RefreshData();
		break;
	case 3:
		m_wndParaclinicalOrder.RefreshData();
		break;
	case 4:
		m_wndOperationOrder.RefreshData();
		break;
	case 5:
		m_wndDrug.RefreshData();
		break;
	case 6:
		m_wndFeeDocument.RefreshData();
		break;
	case 7:
		m_wndTreatPackageView.RefreshData();
        break;
	}
	
} 
void CHMSPatientDocument::OnDeptListDblClick(){
	int nSel = m_wndDeptList.GetCurSel();
	if(nSel < 0) return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDocument::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	pMF->m_nRefIndex = str2int(m_wndDeptList.GetItemText(nNewItem, 4));
	pMF->m_nTreatTime = str2int(m_wndDeptList.GetItemText(nNewItem, 5));
	m_nCancerTime = str2int(m_wndDeptList.GetItemText(nNewItem, 6));
	pMF->m_szStatus = m_wndDeptList.GetItemText(nNewItem, 3);

	if(m_wndParaclinicalOrder.IsWindowVisible())
		m_wndParaclinicalOrder.RefreshData();
	if(m_wndOperationOrder.IsWindowVisible())
		m_wndOperationOrder.RefreshData();
	if(m_wndDrug.IsWindowVisible())
		m_wndDrug.RefreshData();
	if(m_wndFeeDocument.IsWindowVisible())
		m_wndFeeDocument.RefreshData();
} 

int CHMSPatientDocument::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientDocument::OnDeptListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szDischargeDate;

	m_wndDeptList.BeginLoad(); 
	
	int nCount = 0;
	int nRefIdx, nCurrSel=0;
	szSQL.Format(_T(" SELECT 	htr_deptid as deptid, ") \
				_T(" 	(select sd_name from sys_dept where sd_id=htr_deptid) as department,") \
				_T(" 	 trunc_date(htr_admitdate) as admitdate,") \
				_T(" 	 case when htr_status='T' then trunc_date(htr_dischargedate) else to_date('1752-09-14','YYYY-MM-DD') end as dischargedate,") \
				_T(" 	htr_status as status,") \
				_T(" 	htr_idx as refidx, htr_treattime, hcr_cancer, htr_cancer_time ") \
				_T(" FROM hms_treatment_record") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno = htr_docno)") \
				_T(" WHERE htr_docno=%ld ORDER BY htr_idx "), pMF->m_nDocumentNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("refidx"), nRefIdx);
		rs.GetValue(_T("hcr_cancer"), m_szCancer);
		m_wndDeptList.AddItems(
			rs.GetValue(_T("department")), 
			rs.GetValue(_T("admitdate")), 
			rs.GetValue(_T("dischargedate")), 
			rs.GetValue(_T("status")), 
			rs.GetValue(_T("refidx")), 
			rs.GetValue(_T("htr_treattime")), 
			rs.GetValue(_T("htr_cancer_time")), 
			NULL);
		rs.MoveNext();
		if(nRefIdx == pMF->m_nRefIndex)
		{
			nCurrSel = m_wndDeptList.GetItemCount()-1;
		}
	}
	m_wndDeptList.EndLoad(); 
	m_wndDeptList.SetCurSel(nCurrSel);
	return nCount;
}
int CHMSPatientDocument::OnAddHMSPatientDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPatientDocument"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPatientDocument::OnEditHMSPatientDocument(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSPatientDocument::OnDeleteHMSPatientDocument(){
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
 		OnCancelHMSPatientDocument(); 
 	}
	return 0;
 } 
int CHMSPatientDocument::OnSaveHMSPatientDocument(){
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
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPatientDocumentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientDocument::OnCancelHMSPatientDocument(){
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

int CHMSPatientDocument::OnHMSPatientDocumentListLoadData(){
	return 0;
}
int CHMSPatientDocument::OnChangeModePatient(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	
	
	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	if(!pMF->CheckPermission(_T("01.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	//int ret = ShowMessageBox(_T("Bạn có muốn khôi phục lại hồ sơ bệnh nhân không?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	//if(ret == IDNO)
	//	return 0;
	
	CHMSInsuranceCardSettingDialog dlg(this);
	dlg.m_szApplyDate = m_szAdmitDate.Left(10);
	dlg.m_nPatientNo = m_nPatientNo;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nCardIdx = m_nCardIdx;
	
	szSQL.Format(_T("SELECT hd_insregdate FROM hms_doc WHERE hd_docno =%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if( !rs.IsEOF())
	{
		rs.GetValue(_T("hd_insregdate"), tmpStr);
		dlg.m_szApplyDate = tmpStr;
		if(tmpStr.IsEmpty()) 
			dlg.m_szApplyDate = m_szAdmitDate.Left(10);
	}
	if(dlg.DoModal() == IDOK)
	{
		CString szEvent, szDesc;
		//szEvent.Format(_T(""));
		//szDesc.Format(_T(""));
		pMF->SystemLog(szEvent, szDesc);
		GetDataToScreen();
		
	}
	return 0;

}
int CHMSPatientDocument::OnRollbackHMSPatientDocument(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	if(!pMF->CheckPermission(_T("02.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	int ret = ShowMessageBox(_T("Bạn có muốn khôi phục lại hồ sơ bệnh nhân không?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(ret == IDNO)
		return 0;


	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	
	if(rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}


	szSQL.Format(_T("SELECT count(*) FROM hms_fee_approve WHERE hfe_docno=%ld and hfe_deptid='%s' and hfe_refidx=%d "), 
		m_nDocumentNo, pMF->m_szDept, pMF->m_nRefIndex);

	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("This patient has been approved fees. Do not allow rollback."));
		return 0;
	}

	szSQL.Format(_T(" hms_treatment_record_rollback(%ld, %d)"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	ret = str2int(pMF->ExecDML(szSQL));	


		
	if(ret == -1)
	{
		ShowMessageBox(_T("Patient not found"));
		return 0;
	}
	if(ret == -2 || ret == -3)
	{
		ShowMessageBox(_T("Can not manipulate with current status."));
		return 0 ;
	}
	if(ret == -4)
	{
		ShowMessageBox(_T("Patients has paid hospital fees. Can not rollback"));
		return 0  ;
	}

	if(ret == -5)
	{
		ShowMessageBox(_T("This patient is treating in other department. Do not allow rollback."));
		return 0 ;
	}
	GetDataToScreen();
	return 0;
}
int CHMSPatientDocument::OnChangeTypePatientDocument(){	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, tmpStr, szStatus, szMsg;
	CRecord rs(&pMF->m_db);

	if(!pMF->CheckPermission(_T("02.06")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(m_szDocStatus ==_T("T")){
		ShowMessageBox(_T("This patient is terminate. Do not change."));
		return 0;
	}

	szSQL.Format(_T("SELECT htr_outpatient FROM hms_treatment_record WHERE htr_docno=%ld and htr_status = 'I' and htr_idx=%d "), m_nDocumentNo,pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	szStatus = rs.GetStringValue();

	if( szStatus == _T("Y")){
		szMsg.Format(_T("Benh nhan dang dieu tri ngoai tru trong khoa. Co muon chuyen sang dieu tri noi tru khong(Y/N)"));	
		szStatus = _T("N");
	}
	else
	{
		szStatus = _T("Y");
		szMsg.Format(_T("Benh nhan dang dieu tri trong khoa. Co muon chuyen benh nhan sang dieu tri ngoai tru khong(Y/N)"));
	}

	int ret = ShowMessageBox(szMsg, MB_YESNO|MB_DEFBUTTON2);
	if(ret == IDNO)
		return 0;
	
	
	szSQL.Format(_T(" UPDATE hms_treatment_record SET htr_outpatient='%s'  WHERE htr_docno=%ld AND htr_idx=%d AND htr_status='I'"), 
		szStatus, pMF->m_nDocumentNo, pMF->m_nRefIndex);
	pMF->ExecSQL(szSQL);
	szSQL.Format(_T(" UPDATE hms_doc SET hd_outpatient='%s'  WHERE hd_docno=%ld AND hd_status='T' "), 
		szStatus, pMF->m_nDocumentNo);
	pMF->ExecSQL(szSQL);

	szSQL.Format(_T("SELECT htr_outpatient FROM hms_treatment_record WHERE htr_docno=%ld and htr_status = 'I' and htr_idx=%d "), m_nDocumentNo,pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	szStatus = rs.GetStringValue();

	
	return 0;
}

void CHMSPatientDocument::LoadData(long nPatientNo, long nDocNo, int nIndex){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_nPatientNo = nPatientNo;
	m_nDocumentNo = nDocNo;

	GetDataToScreen();
	m_wndTheodoidieutri_V2.RefreshData();
	m_wndOperationOrder.SetMode(VM_NONE);
	
	CreateOperationTemplates();
	
	CString szSQL;
	szSQL.Format(_T("HMS_SERVICE_PKG_CHECKACTIVE(%ld)"), m_nDocumentNo);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		ShowMessageBox(_T("Cảnh báo bệnh nhân đang sử dụng gói dịch vụ đã quá hạn ngày dự kiến."));
	}
}

BEGIN_MESSAGE_MAP(CHMSPatientDocument, CGuiView)
	ON_WM_SHOWWINDOW()
END_MESSAGE_MAP()

void CHMSPatientDocument::OnShowWindow(BOOL bShow, UINT nStatus)
{
	CGuiView::OnShowWindow(bShow, nStatus);

}

#include "HMSSupplementExamineDialog.h"

int CHMSPatientDocument::OnAddNewReception(){
	return 0;
}
int CHMSPatientDocument::OnFoodtravelsupport(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL,tmpStr, szCode;
	CRecord rs(&pMF->m_db);
	int nEthnic = 0;
	if(m_szObject == _T("S"))
		return -1;

	CHMSFoodtravelsupport dlg(this);
	
	szSQL.Format(_T(" SELECT hc_code from hms_card where hc_cardno='%s' "),m_szCardNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		CString tmpStr;
		rs.GetValue(_T("hc_code"), tmpStr);
		szCode = tmpStr.Mid(0, 2);
	}
	
	if(!pMF->m_szFoodTravel.IsEmpty())	
	{
		szSQL.Format(_T(" SELECT count(hp_ethnic) from hms_patient where hp_patientno=%ld and hp_ethnic in(%s) "),m_nPatientNo, pMF->m_szFoodTravel);
		rs.ExecSQL(szSQL);
		nEthnic = rs.GetIntValue();
	}
	
	if (szCode ==_T("HN") || nEthnic > 0 )
	{
		dlg.m_nDocno=m_nDocumentNo;
		dlg.m_szPatientname=m_szPatientName;
		dlg.m_szSex=m_szSex;
		dlg.m_szAge=m_szAge;
		dlg.m_szAddress=m_szAddress;
		dlg.m_szInsurance=m_szCardNo;
		dlg.m_szAdmitdate=m_szAdmitDate;
		dlg.m_szDepid=pMF->m_szDept;
		dlg.DoModal();
	}
	return 0;
}
int CHMSPatientDocument::OnCreateTreatmentDocument(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL,tmpStr, szCode;
	CRecord rs(&pMF->m_db);


	if(pMF->m_szDailyserdeptid != pMF->m_szDept)
		return -1;

    if(!pMF->CheckPermission(_T("02.08")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	
	if(m_szDocStatus !=_T("T")){
		ShowMessageBox(_T("Patients do not finish. Can not create treatment."));
		return 0;
	}
	
	
	CString szMsg;
	szMsg.Format(_T("Would you like to create it again medical science does not treat the next?(Y/N)"));
	int ret = ShowMessageBox(szMsg, MB_YESNO|MB_DEFBUTTON2);
	if(ret == IDNO)
		return 0;
	szSQL.Format(_T(" SELECT hms_createnewtreatment(%d) ;"), m_nDocumentNo);
	int rc = rs.ExecSQL(szSQL);
	
	if(rc > 0){
		ShowMessageBox(_T("Successfully creates a new profile."));
		return 0;
	}

	return 0;
}

#include "HMSTreatMovementDialog.h"

int CHMSPatientDocument::OnSendPatientTreatment(){
	if(m_szDocStatus != _T("I"))
		return 0;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();


	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}


	CHMSTreatMovementDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nRefIdx = pMF->m_nRefIndex;
	if(dlg.DoModal() == IDOK)
	{
	}

//	CHMSMoveTreatmentDialog dlg(this);
//	dlg.DoModal();
	return 0;
}
bool CHMSPatientDocument::OnCheckTerminateDocument(long nDocument){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr;
	if(nDocument <= 0)
		return false;
	

	//Kiem tra xem co Test Order nao dang trang thai =O ko. Neu =O thi khong ket thuc duoc
	szSQL.Format(_T("select count(*) from hms_testorder where hpc_docno=%ld and hpc_status ='O' "), nDocument);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		CString szMsg;
		szMsg.Format(_T("Test order don't is status open. Can not terminate document"));
		ShowMessageBox(szMsg, MB_OK);
		return false;
	}

	//Kiem tra xem co PACS Order nao dang trang thai =O ko. Neu =O thi khong ket thuc duoc
	szSQL.Format(_T("select count(*) from hms_pacsorder where hpc_docno=%ld and hpc_status ='O' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		CString szMsg;
		szMsg.Format(_T("PACS order don't is status open. Can not terminate document"));
		ShowMessageBox(szMsg, MB_OK);
		return false;
	}
	
	//Kiem tra xem Operation nao dang trang thai = O. Neu co thi khong cho ket thuc ho so.
	szSQL.Format(_T("select count(*) from hms_operation where ho_docno=%ld and ho_status ='O' "), nDocument);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		CString szMsg;
		szMsg.Format(_T("Operation status is open. Can not terminate document"));
		ShowMessageBox(szMsg, MB_OK);
		return false;
	}

	//Kiem tra neu con ton tai don thuoc chua cap thi ko cho ket thuc ho so
	szSQL.Format(_T("SELECT * FROM hms_ipharmaorder WHERE hpo_docno=%ld AND hpo_orderstatus in('O','S') and nvl(hpo_outpatient_order,'N') <>'Y' "), nDocument);
	rs.ExecSQL(szSQL);	
	if(!rs.IsEOF())
	{
		CString szMsg, szType;
		rs.GetValue(_T("hpo_ordertype"), szType);
		if(szType == _T("P"))
		{
			TranslateString(_T("Prescription [%s] don't issue. Can not terminate document"), tmpStr);
			szMsg.Format(tmpStr, rs.GetValue(_T("hpo_orderid")));
		}
		else if (szType == _T("M"))
		{
			TranslateString(_T("Đơn thuốc PTTT [%s] trong số phiếu [%s] ngày tạo [%s] chưa cấp. Không thể kết thúc giường"), tmpStr);
			szMsg.Format(tmpStr, rs.GetValue(_T("hpo_orderid")), rs.GetValue(_T("hpo_feeid")).Trim(), CDate::Convert(rs.GetValue(_T("hpo_orderdate")), yyyymmdd, ddmmyyyy));	
		}
		else
		{
			szSQL.Format(_T("SELECT mt_orderno FROM m_transaction WHERE mt_transaction_id = %ld "), ToLong(rs.GetValue(_T("hpo_transaction_id"))));
			rs2.ExecSQL(szSQL);		

			TranslateString(_T("Prescription [%s] in the daily order [%s] date [%s] don't issue. Can not terminate bed"), tmpStr);
			szMsg.Format(tmpStr, rs.GetValue(_T("hpo_orderid")), rs2.GetValue(_T("mt_orderno")), CDate::Convert(rs.GetValue(_T("hpo_orderdate")), yyyymmdd, ddmmyyyy));	
		}
		ShowMessageBox(szMsg, MB_OK);
		return false;
	}

	////Kiem phieu bao an co trang thai nao chua duy thi ko cho ket thuc ra vien
	//szSQL.Format(_T("SELECT hfo_docno, ") \
 //      _T(" hfo_orderid, hfo_reforder_id ") \
 //     _T(" FROM hms_feefood ") \
 //     _T(" WHERE  hfo_docno = %ld  AND hfo_orderstatus <>'A' AND hfo_reforder_id > 0 "), pMF->m_nDocumentNo);
	//rs.ExecSQL(szSQL);
	//while (!rs.IsEOF())
	//{
	//	CString szMsg;
	//	long nOID;		
	//	
	//	rs.GetValue(_T("hfo_retorder_id"), nOID);
	//	szSQL.Format(_T("SELECT * FROM hms_foodordersheet WHERE hfos_orderid=%ld "), nOID);
	//	rs2.ExecSQL(szSQL);
	//	
	//	if(!rs2.IsEOF())
	//	{			
	//		szMsg.Format(_T("Đang tồn tại phiếu báo ăn chưa duyệt ngày [%s] số phiếu [%s]. Nhưng chưa tạo phiếu cắt ăn"), rs2.GetValue(_T("hfos_orderdate")), rs2.GetValue(_T("hfos_sheetno")));
	//		ShowMessageBox(szMsg, MB_OK);
	//		return false;
	//	}
	//	
	//	rs.MoveNext();
	//}

	////Kiem phieu bao cat an co trang thai nao chua duy thi ko cho ket thuc ra vien
	//szSQL.Format(_T("SELECT hfoc_docno, ") \
 //      _T(" hfoc_orderid, hfoc_orderlineid, hfoc_retorder_id ") \
 //     _T(" FROM hms_feefoodcancel ") \
 //     _T(" WHERE  hfoc_docno = %ld  AND hfoc_status <>'A' "), pMF->m_nDocumentNo);
	//rs.ExecSQL(szSQL);
	//while (!rs.IsEOF())
	//{
	//	CString szMsg;
	//	long nOID;		
	//	
	//	rs.GetValue(_T("hfoc_retorder_id"), nOID);
	//	szSQL.Format(_T("SELECT * FROM hms_foodordersheet WHERE hfos_orderid=%ld "), nOID);
	//	rs2.ExecSQL(szSQL);
	//	if(!rs2.IsEOF())
	//	{	
	//		if(rs2.GetValue(_T("hfos_ordertype")) == _T("D"))			
	//			szMsg.Format(_T("Đang tồn tại phiếu cắt ăn chưa duyệt [%s] ngày [%s]"), rs2.GetValue(_T("hfos_sheetno")),rs2.GetValue(_T("hfos_orderdate")));
	//		
	//		else				
	//			szMsg.Format(_T("Đang tồn tại cắt ăn ngày[%s] số phiếu [%s]. Nhưng chưa tạo phiếu cắt ăn"), rs2.GetValue(_T("hfos_sheetno")),rs2.GetValue(_T("hfos_orderdate")));			
	//	}
	//	
	//	ShowMessageBox(szMsg, MB_OK);
	//	return false;

	//	rs.MoveNext();
	//}

	return true;
}



#include "HMSDischargeDialog.h"
#include "HMSPatientDeathDialog.h"
#include "TMRecordSummary.h"
#include "TMRecordSummary2.h"

void CHMSPatientDocument::OnRecordSummaryDischarge()
{	

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}
	
	if (pMF->GetCurrentDepartmentID() == _T("B11") && pMF->m_szObject == _T("6")){
		CTMRecordSummary2 dlg(this);
		dlg.m_nDocNo = m_nDocumentNo;
		if(dlg.DoModal() == IDOK)
		{
		}
	}
	else{
		CTMRecordSummary dlg(this, m_nDocumentNo);
		if(dlg.DoModal() == IDOK)
		{
		}
	}
	
	
}

void CHMSPatientDocument::CreateDischargeSheet()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}

	CHMSDischargeDialog dlg(pMF);
	if(dlg.DoModal() == IDOK)
	{

	}
	
//	pMF->CreateDischargeSheet(pMF->m_nDocumentNo, pMF->m_nRefIndex);

}

#include "HMSPatientEncryptDialog.h"

void CHMSPatientDocument::OnViewSecurePatientProfile()
{
	CHMSPatientEncryptDialog dlg(this, m_nPatientNo, VM_VIEW);
	if(dlg.DoModal() == IDOK)
	{

	}
}


void CHMSPatientDocument::CreateOperationTemplates()
{

	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CDbfMap	hms_operationTbl;

	if(pMF->m_szDept != _T("C6"))
	{
		return;
	}
	if (pMF->IsPatientDischarge())
	{
		CString szVn;
		TranslateString(_T("Patient profile was closed.Can not proceed!"), szVn);
		AfxMessageBox(szVn);
		return;
	}
	hms_operationTbl.SetTableName(_T("hms_operation"));
	hms_operationTbl.AddField(_T("ho_createdby"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_createddate"), dfDateTime); 
	hms_operationTbl.AddField(_T("ho_updatedby"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_updateddate"), dfDateTime); 
	hms_operationTbl.AddField(_T("ho_recordno"), dfText, 7);
//	hms_operationTbl.AddField(_T("hfe_group"), dfText, 7); 
	hms_operationTbl.AddField(_T("ho_patientno"), dfLong); 
	hms_operationTbl.AddField(_T("ho_docno"), dfLong); 
	hms_operationTbl.AddField(_T("ho_deptid"), dfText, 7); 
	hms_operationTbl.AddField(_T("ho_roomid"), dfInteger); 
	hms_operationTbl.AddField(_T("ho_bedid"), dfInteger); 
	hms_operationTbl.AddField(_T("ho_refidx"), dfInteger); 
	hms_operationTbl.AddField(_T("ho_orderdate"), dfDateTime); 
	hms_operationTbl.AddField(_T("ho_doctor"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_itemid"), dfText, 13); 
	hms_operationTbl.AddField(_T("ho_qty"), dfFloat); 
	hms_operationTbl.AddField(_T("ho_inmethod"), dfText, 254); 
	hms_operationTbl.AddField(_T("ho_beforeopera"), dfText, 254); 
	hms_operationTbl.AddField(_T("ho_pdeptid"), dfText, 7); 
	hms_operationTbl.AddField(_T("ho_proomid"), dfInteger); 
	hms_operationTbl.AddField(_T("ho_afteropera"), dfText, 254); 
	hms_operationTbl.AddField(_T("ho_practitioner"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_anesthetist"), dfText, 15); 
	hms_operationTbl.AddField(_T("ho_assistant"), dfText, 15); 	
	hms_operationTbl.AddField(_T("ho_performdate"), dfDateTime); 
	hms_operationTbl.AddField(_T("ho_status"), dfText, 1); 
	hms_operationTbl.AddField(_T("ho_payment"), dfText, 1); 
	hms_operationTbl.AddField(_T("ho_hasfee"), dfText, 1); 
	hms_operationTbl.AddField(_T("ho_diagnostic"), dfText, 254);
	hms_operationTbl.AddField(_T("ho_depttype"), dfText, 1);
	hms_operationTbl.AddField(_T("ho_object"), dfInteger); 

	m_szStatus = _T("S");
	hms_operationTbl.SetValue(_T("ho_createdby"),  pMF->GetCurrentUser()); 
		hms_operationTbl.SetValue(_T("ho_createddate"), pMF->GetSysDateTime()); 
		hms_operationTbl.SetValue(_T("ho_updatedby"),  pMF->GetCurrentUser()); 
		hms_operationTbl.SetValue(_T("ho_updateddate"), pMF->GetSysDateTime()); 
		hms_operationTbl.SetValue(_T("ho_patientno"), pMF->m_nPatientNo); 
		hms_operationTbl.SetValue(_T("ho_docno"), pMF->m_nDocumentNo); 
		hms_operationTbl.SetValue(_T("ho_orderdate"), pMF->GetSysDateTime()); 
		hms_operationTbl.SetValue(_T("ho_doctor"),  pMF->m_szDoctor); 
		hms_operationTbl.SetValue(_T("ho_deptid"),  pMF->m_szDept); 
		hms_operationTbl.SetValue(_T("ho_roomid"), pMF->m_nRoomID); 
		hms_operationTbl.SetValue(_T("ho_bedid"), pMF->m_nBedID); 
		hms_operationTbl.SetValue(_T("ho_refidx"), pMF->m_nRefIndex); 
		hms_operationTbl.SetValue(_T("ho_qty"),  1); 
		hms_operationTbl.SetValue(_T("ho_recordno"), pMF->m_szRecordNo); 
		hms_operationTbl.SetValue(_T("ho_beforeopera"), _T("")); 
		hms_operationTbl.SetValue(_T("ho_pdeptid"),  pMF->m_szDept); 
		hms_operationTbl.SetValue(_T("ho_practitioner"),  _T("")); 
		hms_operationTbl.SetValue(_T("ho_anesthetist"),  _T("")); 
		hms_operationTbl.SetValue(_T("ho_assistant"),  _T("")); 
		hms_operationTbl.SetValue(_T("ho_performdate"),  pMF->GetSysDateTime()); 
		hms_operationTbl.SetValue(_T("ho_status"),  m_szStatus); 
		hms_operationTbl.SetValue(_T("ho_payment"),  _T("O")); 
		hms_operationTbl.SetValue(_T("ho_hasfee"),  _T("Y")); 
		hms_operationTbl.SetValue(_T("ho_diagnostic"),  _T("")); 

		if(pMF->GetModuleID() == _T("TM") && !pMF->IsOutPatient())
			hms_operationTbl.SetValue(_T("ho_depttype"),  _T("I")); 
		else
			hms_operationTbl.SetValue(_T("ho_depttype"),  _T("E")); 

		hms_operationTbl.SetValue(_T("ho_object"),  str2int(pMF->m_szObject)); 



	CString szSQL;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("SELECT count(*) FROM hms_operation WHERe ho_docno = %ld and ho_deptid = '%s' and trunc(ho_orderdate) = trunc(sysdate) "),
		m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return;

	szSQL.Format(_T("SELECT distinct ho_itemid as id, hfl_name as name ") \
		_T(" FROM hms_operation ") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid = ho_itemid) ") \
		_T(" WHERE ho_docno = %ld and ho_deptid = '%s' "), m_nDocumentNo,pMF->m_szDept);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	CHMSSelectionListDialog dlg(this);
	dlg.m_szSQL = szSQL;

	while(!rs.IsEOF())
	{
		CHMSSelectionListDialog::SELITEM si;
		rs.GetValue(_T("id"), si.szID);
		rs.GetValue(_T("name"), si.szName);
		dlg.m_arraySelection.Add(si);
		rs.MoveNext();
	}
	if(dlg.DoModal() == IDOK)
	{
		for (int i =0; i < dlg.m_arraySelection.GetCount(); i++)
		{
			CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
			hms_operationTbl.SetValue(_T("ho_itemid"), si.szID);
			szSQL.Format(_T("%s"), hms_operationTbl.GetInsertSQL(_T("ho_idx")));
			pMF->ExecSQL(szSQL);

		}

	}
}

void CHMSPatientDocument::OnAddDentalTreatment(){
	CHMSDentalTreatmentDlg dlg(this);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.DoModal();
}

int CHMSPatientDocument::OnPhieuDieuTriKhoaRang(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CPrintForms printer;
	printer.EM_OnPrintDetailOperation(m_nDocumentNo);
	return 0;
}

void CHMSPatientDocument::OnResizeLayout()
{
	AddResize(&m_wndDeptList, 100, 100);
	AddResize(&m_wndTreatmentTab, 100, 100);
	AddBottom(&m_wndPrehistory);
	AddBottom(&m_wndClinicalRecord);
	AddBottom(&m_wndElectronicRecord);
	AddBottom(&m_wndTreatmentTracking);
	AddBottom(&m_wndPatientCare);
	AddBottom(&m_wndExtButton);
	return;
//	AddLayoutControls(WS_RESIZEX, 0, 0, 20, 0,&m_wndProfiles,&m_wndTreatmentInformation,&m_wndPatientName,&m_wndEthnic,&m_wndOccupation,&m_wndAddress,&m_wndWorkplace,&m_wndCardNo,&m_wndDoctor,&m_wndStatus,&m_wndMainDiseaseDiagnostic,&m_wndRelationDisease,NULL);
//	AddLayoutControls(WS_REPOSX|WS_RESIZEX, 10, 0, 10, 0,&m_wndDocumentNo,&m_wndDischargeDate,&m_wndSuggestionBtn,NULL);
//	AddLayoutControls(WS_RESIZEX, 0, 0, 10, 0,&m_wndDocumentNoLabel,&m_wndDischargeDateLabel,&m_wndSuggestion,NULL);
//	AddLayoutControls(WS_REPOSX, 20, 0, 0, 0,&m_wndCardInfoBtn,&m_wndAdditionInfo,NULL);
//	AddLayoutControls(WS_RESIZEX, 0, 0, 20, 0,&m_wndDepartments,NULL);
	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 0, 100, &m_wndDeptList,NULL);
	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndTreatmentTab,NULL);
	//AddLayoutControls(WS_REPOSX|WS_REPOSY, 0, 100, 0, 0, &m_wndTreatmentTracking, &m_wndPatientCare,&m_wndClinicalRecord, &m_wndElectronicRecord, &m_wndExtButton, &m_wndTreatInfo,NULL);
	AddLayoutControl(&m_wndPrehistory, WS_REPOSY|WS_RESIZEX, 0, 100, 10, 0);
	AddLayoutControl(&m_wndClinicalRecord, WS_REPOSY|WS_RESIZEX, 10, 100, 10, 0);
	AddLayoutControl(&m_wndElectronicRecord, WS_REPOSY|WS_RESIZEX|WS_REPOSX, 20, 100, 10, 0);
//	AddLayoutControl(&m_wndTreatInfo, WS_REPOSY|WS_RESIZEX|WS_REPOSX, 20, 100, 10, 0);
	AddLayoutControl(&m_wndTreatmentTracking, WS_REPOSY|WS_RESIZEX|WS_REPOSX, 30, 100, 10, 0);
	AddLayoutControl(&m_wndPatientCare, WS_REPOSY|WS_RESIZEX|WS_REPOSX, 40, 100, 10, 0);
	AddLayoutControl(&m_wndExtButton, WS_REPOSY|WS_RESIZEX|WS_REPOSX, 50, 100, 10, 0);
}

void CHMSPatientDocument::OnCreateTreatmentAppointment(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*
	CHMSTreatmentAppointment dlg(this);
	dlg.SetMode(VM_ADD);
	dlg.m_nPatientNo = m_nPatientNo;
	dlg.m_nDocumentNo = m_nDocumentNo;
	//dlg.m_nIndex = pMF->GetTreatTime();
	dlg.DoModal();
	*/
	CIVFAppointmentDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nIdx = 0;
	dlg.DoModal();
}

void CHMSPatientDocument::OnCreateTreatmentPlan(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nDocumentNo <= 0)
		return;
	CHMSTreatmentPlanDlg dlg(this);
	dlg.SetMode(VM_ADD);
	dlg.m_nPatientNo = m_nPatientNo;
	dlg.m_nDocNo = m_nDocumentNo;
	//dlg.m_nIDx = pMF->GetTreatTime();
	dlg.DoModal();
}

#include "HMSTreatmentTrackingDialog.h"
#include ".\hmspatientdocument.h"
void CHMSPatientDocument::OnTreatmentTrackingSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nDocumentNo <= 0)
		return;
	
	CHMSTreatmentTrackingDialog dlg(this, VM_VIEW, m_nDocumentNo);
	if(dlg.DoModal() == IDOK)
	{

	}
}

void CHMSPatientDocument::OnPatientCareSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nDocumentNo <= 0)
		return;

	CHMSTreatmentCareDialog dlg(this, VM_VIEW, m_nDocumentNo);
	if(dlg.DoModal() == IDOK)
	{

	}
}
void CHMSPatientDocument::OnClinicalRecordSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nDocumentNo <= 0)
		return;

	CPhanKhamChuyenKhoa *pChuyenkhoa = new CPhanKhamChuyenKhoa();
    CHMSBenhAnHTMLDialog dlg(this, pChuyenkhoa);
    pChuyenkhoa->Init(GetMode(), pMF->m_nDocumentNo, pMF->m_szRecordNo,
                      m_nHtrIdx, pMF->m_nTreatTime);
    dlg.DoModal();
    return;

	pMF->m_bIVFSwitch=TRUE;

	CGuiMenu menu(this);
	CRect rect;
	CString tmpStr;
	m_wndClinicalRecord.GetWindowRect(&rect);
	int nPos = 0;
	menu.CreatePopupMenu();
	//Check co chong hoac vo ko cho tao ba don than
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select count(*) from hms_doc_infertility where (hdi_docno = %ld or hdi_refdoc = %ld) and hdi_refdoc > 0")
		, m_nDocumentNo, m_nDocumentNo);
	rs.ExecSQL(szSQL);
	TranslateString(_T("Bệnh án hiếm muộn cặp vợ chồng"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Bệnh án hiếm muộn đơn thân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);

	if (nPos == 1)
	{
		CIVFRecordInfoDialog dlg(this);
		dlg.m_nPatientNo = pMF->m_nPatientNo;
		dlg.m_nDocNo = pMF->m_nDocumentNo;
		dlg.DoModal();
	}
	if (nPos == 2)
	{
		if (rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Hồ sơ đã nhập thông tin vợ( chồng)!"));
			return;
		}
		CIVFSingleRecordInfoDialog dlg(this);
		dlg.m_nPatientNo = pMF->m_nPatientNo;
		dlg.m_nDocNo = pMF->m_nDocumentNo;
		dlg.DoModal();
	}

}

void CHMSPatientDocument::OnElectronicRecordSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nDocumentNo <= 0)
		return;

	CHTMLFormsDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}

void CHMSPatientDocument::OnTreatInfoSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nDocumentNo <= 0)
		return;
	CHTMLFormsDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}


int CHMSPatientDocument::OnBraceletInfoSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSBraceletInfoDlg dlg(this);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.m_nRefIDx = pMF->m_nRefIndex;
	dlg.DoModal();
	return 0;
}

int CHMSPatientDocument::OnConsultationInfoSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CTMThongTinHoiChan dlg(this, m_nDocumentNo, m_szPatientName, pMF->m_szDept);
	dlg.DoModal();
	return 0;
}
#include "HMSChungNhanNghiViec.h"
int CHMSPatientDocument::OnGiayChungNhanNghiViec()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CHMSChungNhanNghiViec dlg(this);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.DoModal();
	return 1;
}
#include "HMSAppointmentReTreatment.h"
int CHMSPatientDocument::OnAppointmentReTreatment()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CIVFAppointmentDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nIdx = 0;
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
//	CHMSAppointmentReTreatment dlg(this);
//	dlg.DoModal();
	return 1;
}

BOOL CHMSPatientDocument::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN)
	{
		switch(pMsg->wParam)
		{
		case VK_F2:
			OnTreatmentTrackingSelect();
			break;
		case VK_F3:
			OnPatientCareSelect();
			break;
		}

			
		
	}
	return CGuiView::PreTranslateMessage(pMsg);
}

int CHMSPatientDocument::OnPrintForms(){
	if (m_nDocumentNo <= 0) return -1;
	CHMSFormData dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.DoModal();
	return 0;
}

int CHMSPatientDocument::OnCreateDeathRecord()
{
	CTMDeathRecord dlg;
	dlg.DoModal();
	return 0;
}

void CHMSPatientDocument::OnPrehistorySelect()
{
	CHMSDocumentPreviewDialog dlg(this);
	dlg.DoModal();
}

#include "EMRPatientProfile.h"
void CHMSPatientDocument::OnViewEMR()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    /*
    if (pEMRViewed)
    {
        pEMRViewed->BringWindowToTop();
        return;
    }
    */

    pMF->ShowBackstage(new CEMRPatientProfile(m_nDocumentNo));
}