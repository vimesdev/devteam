#include "AdmissionRegistrationDialog.h"
#include "MainFrm.h"
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnNumInwardChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnNumInwardChange();
} */
/*static void _OnNumInwardSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnNumInwardSetfocus();} */ 
/*static void _OnNumInwardKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnNumInwardKillfocus();
} */
static int _OnNumInwardCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnNumInwardCheckValue();
} 
/*static void _OnInwardDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnInwardDateChange();
} */
/*static void _OnInwardDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnInwardDateSetfocus();} */ 
/*static void _OnInwardDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnInwardDateKillfocus();
} */
static int _OnInwardDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnInwardDateCheckValue();
} 
/*static void _OnInwardTimeChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnInwardTimeChange();
} */
/*static void _OnInwardTimeSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnInwardTimeSetfocus();} */ 
/*static void _OnInwardTimeKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnInwardTimeKillfocus();
} */
static int _OnInwardTimeCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnInwardTimeCheckValue();
} 
/*static void _OnTreatmentDeptChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTreatmentDeptChange();
} */
/*static void _OnTreatmentDeptSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTreatmentDeptSetfocus();} */ 
/*static void _OnTreatmentDeptKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTreatmentDeptKillfocus();
} */
static int _OnTreatmentDeptCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnTreatmentDeptCheckValue();
} 
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnRoomIDChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRoomIDChange();
} */
/*static void _OnRoomIDSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRoomIDSetfocus();} */ 
/*static void _OnRoomIDKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRoomIDKillfocus();
} */
static int _OnRoomIDCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnRoomIDCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnEthnicAddNew();
}*/
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnOccupationAddNew();
}*/
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnVillageAddNew();
}*/
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnWorkplaceCheckValue();
} 
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRankAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnRelativeChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelativeChange();
} */
/*static void _OnRelativeSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelativeSetfocus();} */ 
/*static void _OnRelativeKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnRelativeCheckValue();
} 
static void _OnRelationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationDialog* )pWnd)->OnRelationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRelationSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelationSelendok();
}
/*static void _OnRelationSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelationKillfocus();
}*/
/*static void _OnRelationKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelationKillfocus();
}*/
static long _OnRelationLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnRelationLoadData();
}
/*static void _OnRelationAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelationAddNew();
}*/
/*static void _OnRelPhoneChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelPhoneChange();
} */
/*static void _OnRelPhoneSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelPhoneSetfocus();} */ 
/*static void _OnRelPhoneKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelPhoneKillfocus();
} */
static int _OnRelPhoneCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnRelPhoneCheckValue();
} 
/*static void _OnRelAddressChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelAddressChange();
} */
/*static void _OnRelAddressSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelAddressSetfocus();} */ 
/*static void _OnRelAddressKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnRelAddressKillfocus();
} */
static int _OnRelAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnRelAddressCheckValue();
} 
/*static void _OnTransferHospitalChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTransferHospitalChange();
} */
/*static void _OnTransferHospitalSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTransferHospitalSetfocus();} */ 
/*static void _OnTransferHospitalKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTransferHospitalKillfocus();
} */
static int _OnTransferHospitalCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnTransferHospitalCheckValue();
} 
/*static void _OnTransferDiagnosticChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTransferDiagnosticChange();
} */
/*static void _OnTransferDiagnosticSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTransferDiagnosticSetfocus();} */ 
/*static void _OnTransferDiagnosticKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnTransferDiagnosticKillfocus();
} */
static int _OnTransferDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnTransferDiagnosticCheckValue();
} 
/*static void _OnICDDiagnosticChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnICDDiagnosticChange();
} */
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnICDDiagnosticSetfocus();} */ 
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnICDDiagnosticKillfocus();
} */
static int _OnICDDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnICDDiagnosticCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationDialog *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationDialog *)pWnd)->OnConclusionCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CAdmissionRegistrationDialog *pVw = (CAdmissionRegistrationDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdmissionRegistrationDialog *pVw = (CAdmissionRegistrationDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAdmissionRegistrationDialog *pVw = (CAdmissionRegistrationDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintExmSheetSelectFnc(CWnd *pWnd){
	CAdmissionRegistrationDialog *pVw = (CAdmissionRegistrationDialog *)pWnd;
	pVw->OnPrintExmSheetSelect();
} 
static void _OnPrintFilesSelectFnc(CWnd *pWnd){
	CAdmissionRegistrationDialog *pVw = (CAdmissionRegistrationDialog *)pWnd;
	pVw->OnPrintFilesSelect();
} 
static void _OnPrintFoodSheetSelectFnc(CWnd *pWnd){
	CAdmissionRegistrationDialog *pVw = (CAdmissionRegistrationDialog *)pWnd;
	pVw->OnPrintFoodSheetSelect();
} 
static int _OnAddAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationDialog*)pWnd)->OnAddAdmissionRegistrationDialog();
} 
static int _OnEditAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationDialog*)pWnd)->OnEditAdmissionRegistrationDialog();
} 
static int _OnDeleteAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationDialog*)pWnd)->OnDeleteAdmissionRegistrationDialog();
} 
static int _OnSaveAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationDialog*)pWnd)->OnSaveAdmissionRegistrationDialog();
} 
static int _OnCancelAdmissionRegistrationDialogFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationDialog*)pWnd)->OnCancelAdmissionRegistrationDialog();
} 
CAdmissionRegistrationDialog::CAdmissionRegistrationDialog(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CAdmissionRegistrationDialog::~CAdmissionRegistrationDialog(){
}
void CAdmissionRegistrationDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 7, 4, 727, 325);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 13, 28, 138, 53);
	m_wndDocNo.Create(this,143, 29, 218, 54); 
	m_wndNumInwardLabel.Create(this, _T("Num Inward"), 223, 29, 293, 54);
	m_wndNumInward.Create(this,298, 29, 368, 54); 
	m_wndInwardDateLabel.Create(this, _T("Inward Date"), 373, 29, 498, 54);
	m_wndInwardDate.Create(this,503, 29, 593, 54); 
	m_wndInwardTimeLabel.Create(this, _T("Time Idx"), 598, 29, 668, 54);
	m_wndInwardTime.Create(this,673, 29, 723, 54); 
	m_wndTreatmentDeptLabel.Create(this, _T("Treatment Dept"), 13, 59, 138, 84);
	m_wndTreatmentDept.Create(this,143, 59, 368, 84); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 373, 59, 498, 84);
	m_wndExamDate.Create(this,503, 59, 593, 84); 
	m_wndRoomIDLabel.Create(this, _T("Room"), 598, 59, 668, 84);
	m_wndRoomID.Create(this,673, 59, 723, 84); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 13, 89, 138, 114);
	m_wndPatientName.Create(this,143, 89, 368, 114); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 373, 89, 498, 114);
	m_wndBirthDate.Create(this,503, 89, 593, 114); 
	m_wndSexLabel.Create(this, _T("Sex"), 598, 89, 668, 114);
	m_wndSex.Create(this,673, 89, 723, 114); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 13, 119, 138, 144);
	m_wndEthnic.Create(this,143, 119, 368, 144); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 373, 119, 498, 144);
	m_wndOccupation.Create(this,503, 119, 723, 144); 
	m_wndProvinceLabel.Create(this, _T("Province"), 13, 149, 138, 174);
	m_wndProvince.Create(this,143, 149, 368, 174); 
	m_wndDistrictLabel.Create(this, _T("District"), 373, 149, 498, 174);
	m_wndDistrict.Create(this,503, 149, 723, 174); 
	m_wndVillageLabel.Create(this, _T("Village"), 13, 179, 138, 204);
	m_wndVillage.Create(this,143, 179, 368, 204); 
	m_wndDetailAddressLabel.Create(this, _T("Detail Address"), 373, 179, 498, 204);
	m_wndDetailAddress.Create(this,503, 179, 723, 204); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 13, 209, 138, 234);
	m_wndWorkplace.Create(this,143, 209, 723, 234); 
	m_wndRankLabel.Create(this, _T("Rank"), 13, 239, 138, 264);
	m_wndRank.Create(this,143, 239, 369, 264); 
	m_wndPositionLabel.Create(this, _T("Position"), 373, 239, 498, 264);
	m_wndPosition.Create(this,503, 239, 723, 264); 
	m_wndRelativeLabel.Create(this, _T("Relative"), 13, 269, 138, 294);
	m_wndRelative.Create(this,143, 269, 368, 294); 
	m_wndRelationLabel.Create(this, _T("Relation"), 373, 269, 498, 294);
	m_wndRelation.Create(this,503, 269, 723, 294); 
	m_wndRelPhoneLabel.Create(this, _T("Rel Phone"), 13, 299, 138, 324);
	m_wndRelPhone.Create(this,143, 299, 369, 324); 
	m_wndRelAddressLabel.Create(this, _T("Rel Address"), 373, 299, 498, 324);
	m_wndRelAddress.Create(this,503, 299, 723, 324); 
	m_wndTranferHospitalLabel.Create(this, _T("From Hospital"), 13, 329, 138, 354);
	m_wndTransferHospital.Create(this,143, 329, 723, 354); 
	m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 13, 359, 138, 384);
	m_wndTransferDiagnostic.Create(this,143, 359, 723, 384); 
	m_wndICDDiagnosticLabel.Create(this, _T("ICD10 Diagnostic"), 13, 389, 138, 414);
	m_wndICDDiagnostic.Create(this,143, 389, 723, 414); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 13, 419, 138, 444);
	m_wndConclusion.Create(this,143, 419, 723, 444); 
	m_wndUpdate.Create(this, _T("&Update"), 344, 590, 439, 615);
	m_wndSave.Create(this, _T("&Save"), 444, 590, 539, 615);
	m_wndCancel.Create(this, _T("&Cancel"), 544, 590, 639, 615);
	m_wndPrintExmSheet.Create(this, _T("Print exm sheet"), 645, 590, 765, 615);
	m_wndPrintFiles.Create(this, _T("Print Files"), 770, 590, 890, 615);
	m_wndPrintFoodSheet.Create(this, _T("Print food sheet"), 895, 590, 1015, 615);

}
void CAdmissionRegistrationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocNo.SetLimitText(1024);
	m_wndDocNo.SetCheckValue(true);
	m_wndNumInward.SetLimitText(1024);
	m_wndNumInward.SetCheckValue(true);
	m_wndInwardDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndInwardDate.SetCheckValue(true);
	m_wndInwardTime.SetLimitText(1024);
	m_wndInwardTime.SetCheckValue(true);
	m_wndTreatmentDept.SetLimitText(1024);
	m_wndTreatmentDept.SetCheckValue(true);
	m_wndExamDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndExamDate.SetCheckValue(true);
	m_wndRoomID.SetLimitText(1024);
	m_wndRoomID.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(1024);
	m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(1024);
	m_wndProvince.SetCheckValue(true);
	m_wndProvince.LimitText(1024);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(1024);
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(1024);
	m_wndDetailAddress.SetLimitText(1024);
	m_wndDetailAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(1024);
	m_wndWorkplace.SetCheckValue(true);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(1024);
	m_wndRelative.SetLimitText(1024);
	m_wndRelative.SetCheckValue(true);
	m_wndRelation.SetCheckValue(true);
	m_wndRelation.LimitText(1024);
	m_wndRelPhone.SetLimitText(1024);
	m_wndRelPhone.SetCheckValue(true);
	m_wndRelAddress.SetLimitText(1024);
	m_wndRelAddress.SetCheckValue(true);
	m_wndTransferHospital.SetLimitText(1024);
	m_wndTransferHospital.SetCheckValue(true);
	m_wndTransferDiagnostic.SetLimitText(1024);
	m_wndTransferDiagnostic.SetCheckValue(true);
	m_wndICDDiagnostic.SetLimitText(1024);
	m_wndICDDiagnostic.SetCheckValue(true);
	m_wndConclusion.SetLimitText(1024);
	m_wndConclusion.SetCheckValue(true);



















}
void CAdmissionRegistrationDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndNumInward.SetEvent(WE_CHANGE, _OnNumInwardChangeFnc);
	//m_wndNumInward.SetEvent(WE_SETFOCUS, _OnNumInwardSetfocusFnc);
	//m_wndNumInward.SetEvent(WE_KILLFOCUS, _OnNumInwardKillfocusFnc);
	m_wndNumInward.SetEvent(WE_CHECKVALUE, _OnNumInwardCheckValueFnc);
	//m_wndInwardDate.SetEvent(WE_CHANGE, _OnInwardDateChangeFnc);
	//m_wndInwardDate.SetEvent(WE_SETFOCUS, _OnInwardDateSetfocusFnc);
	//m_wndInwardDate.SetEvent(WE_KILLFOCUS, _OnInwardDateKillfocusFnc);
	m_wndInwardDate.SetEvent(WE_CHECKVALUE, _OnInwardDateCheckValueFnc);
	//m_wndInwardTime.SetEvent(WE_CHANGE, _OnInwardTimeChangeFnc);
	//m_wndInwardTime.SetEvent(WE_SETFOCUS, _OnInwardTimeSetfocusFnc);
	//m_wndInwardTime.SetEvent(WE_KILLFOCUS, _OnInwardTimeKillfocusFnc);
	m_wndInwardTime.SetEvent(WE_CHECKVALUE, _OnInwardTimeCheckValueFnc);
	//m_wndTreatmentDept.SetEvent(WE_CHANGE, _OnTreatmentDeptChangeFnc);
	//m_wndTreatmentDept.SetEvent(WE_SETFOCUS, _OnTreatmentDeptSetfocusFnc);
	//m_wndTreatmentDept.SetEvent(WE_KILLFOCUS, _OnTreatmentDeptKillfocusFnc);
	m_wndTreatmentDept.SetEvent(WE_CHECKVALUE, _OnTreatmentDeptCheckValueFnc);
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndRoomID.SetEvent(WE_CHANGE, _OnRoomIDChangeFnc);
	//m_wndRoomID.SetEvent(WE_SETFOCUS, _OnRoomIDSetfocusFnc);
	//m_wndRoomID.SetEvent(WE_KILLFOCUS, _OnRoomIDKillfocusFnc);
	m_wndRoomID.SetEvent(WE_CHECKVALUE, _OnRoomIDCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
	m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
	//m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);
	m_wndOccupation.SetEvent(WE_SELENDOK, _OnOccupationSelendokFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_SELCHANGE, _OnOccupationSelectChangeFnc);
	m_wndOccupation.SetEvent(WE_LOADDATA, _OnOccupationLoadDataFnc);
	//m_wndOccupation.SetEvent(WE_ADDNEW, _OnOccupationAddNewFnc);
	m_wndProvince.SetEvent(WE_SELENDOK, _OnProvinceSelendokFnc);
	//m_wndProvince.SetEvent(WE_SETFOCUS, _OnProvinceSetfocusFnc);
	//m_wndProvince.SetEvent(WE_KILLFOCUS, _OnProvinceKillfocusFnc);
	m_wndProvince.SetEvent(WE_SELCHANGE, _OnProvinceSelectChangeFnc);
	m_wndProvince.SetEvent(WE_LOADDATA, _OnProvinceLoadDataFnc);
	//m_wndProvince.SetEvent(WE_ADDNEW, _OnProvinceAddNewFnc);
	m_wndDistrict.SetEvent(WE_SELENDOK, _OnDistrictSelendokFnc);
	//m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
	//m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
	m_wndDistrict.SetEvent(WE_SELCHANGE, _OnDistrictSelectChangeFnc);
	m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);
	//m_wndDistrict.SetEvent(WE_ADDNEW, _OnDistrictAddNewFnc);
	m_wndVillage.SetEvent(WE_SELENDOK, _OnVillageSelendokFnc);
	//m_wndVillage.SetEvent(WE_SETFOCUS, _OnVillageSetfocusFnc);
	//m_wndVillage.SetEvent(WE_KILLFOCUS, _OnVillageKillfocusFnc);
	m_wndVillage.SetEvent(WE_SELCHANGE, _OnVillageSelectChangeFnc);
	m_wndVillage.SetEvent(WE_LOADDATA, _OnVillageLoadDataFnc);
	//m_wndVillage.SetEvent(WE_ADDNEW, _OnVillageAddNewFnc);
	//m_wndDetailAddress.SetEvent(WE_CHANGE, _OnDetailAddressChangeFnc);
	//m_wndDetailAddress.SetEvent(WE_SETFOCUS, _OnDetailAddressSetfocusFnc);
	//m_wndDetailAddress.SetEvent(WE_KILLFOCUS, _OnDetailAddressKillfocusFnc);
	m_wndDetailAddress.SetEvent(WE_CHECKVALUE, _OnDetailAddressCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	m_wndPosition.SetEvent(WE_SELENDOK, _OnPositionSelendokFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_SELCHANGE, _OnPositionSelectChangeFnc);
	m_wndPosition.SetEvent(WE_LOADDATA, _OnPositionLoadDataFnc);
	//m_wndPosition.SetEvent(WE_ADDNEW, _OnPositionAddNewFnc);
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
	//m_wndRelPhone.SetEvent(WE_CHANGE, _OnRelPhoneChangeFnc);
	//m_wndRelPhone.SetEvent(WE_SETFOCUS, _OnRelPhoneSetfocusFnc);
	//m_wndRelPhone.SetEvent(WE_KILLFOCUS, _OnRelPhoneKillfocusFnc);
	m_wndRelPhone.SetEvent(WE_CHECKVALUE, _OnRelPhoneCheckValueFnc);
	//m_wndRelAddress.SetEvent(WE_CHANGE, _OnRelAddressChangeFnc);
	//m_wndRelAddress.SetEvent(WE_SETFOCUS, _OnRelAddressSetfocusFnc);
	//m_wndRelAddress.SetEvent(WE_KILLFOCUS, _OnRelAddressKillfocusFnc);
	m_wndRelAddress.SetEvent(WE_CHECKVALUE, _OnRelAddressCheckValueFnc);
	//m_wndTransferHospital.SetEvent(WE_CHANGE, _OnTransferHospitalChangeFnc);
	//m_wndTransferHospital.SetEvent(WE_SETFOCUS, _OnTransferHospitalSetfocusFnc);
	//m_wndTransferHospital.SetEvent(WE_KILLFOCUS, _OnTransferHospitalKillfocusFnc);
	m_wndTransferHospital.SetEvent(WE_CHECKVALUE, _OnTransferHospitalCheckValueFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_CHANGE, _OnTransferDiagnosticChangeFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_SETFOCUS, _OnTransferDiagnosticSetfocusFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_KILLFOCUS, _OnTransferDiagnosticKillfocusFnc);
	m_wndTransferDiagnostic.SetEvent(WE_CHECKVALUE, _OnTransferDiagnosticCheckValueFnc);
	//m_wndICDDiagnostic.SetEvent(WE_CHANGE, _OnICDDiagnosticChangeFnc);
	//m_wndICDDiagnostic.SetEvent(WE_SETFOCUS, _OnICDDiagnosticSetfocusFnc);
	//m_wndICDDiagnostic.SetEvent(WE_KILLFOCUS, _OnICDDiagnosticKillfocusFnc);
	m_wndICDDiagnostic.SetEvent(WE_CHECKVALUE, _OnICDDiagnosticCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintExmSheet.SetEvent(WE_CLICK, _OnPrintExmSheetSelectFnc);
	m_wndPrintFiles.SetEvent(WE_CLICK, _OnPrintFilesSelectFnc);
	m_wndPrintFoodSheet.SetEvent(WE_CLICK, _OnPrintFoodSheetSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdmissionRegistrationDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdmissionRegistrationDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdmissionRegistrationDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdmissionRegistrationDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdmissionRegistrationDialogFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdmissionRegistrationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndNumInward.GetDlgCtrlID(), m_szNumInward);
	DDX_TextEx(pDX, m_wndInwardDate.GetDlgCtrlID(), m_szInwardDate);
	DDX_Text(pDX, m_wndInwardTime.GetDlgCtrlID(), m_nInwardTime);
	DDX_Text(pDX, m_wndTreatmentDept.GetDlgCtrlID(), m_szTreatmentDept);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndRoomID.GetDlgCtrlID(), m_nRoomID);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupationKey);
	DDX_TextEx(pDX, m_wndProvince.GetDlgCtrlID(), m_szProvinceKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_Text(pDX, m_wndRelative.GetDlgCtrlID(), m_szRelative);
	DDX_TextEx(pDX, m_wndRelation.GetDlgCtrlID(), m_szRelationKey);
	DDX_Text(pDX, m_wndRelPhone.GetDlgCtrlID(), m_szRelPhone);
	DDX_Text(pDX, m_wndRelAddress.GetDlgCtrlID(), m_szRelAddress);
	DDX_Text(pDX, m_wndTransferHospital.GetDlgCtrlID(), m_szTransferHospital);
	DDX_Text(pDX, m_wndTransferDiagnostic.GetDlgCtrlID(), m_szTransferDiagnostic);
	DDX_Text(pDX, m_wndICDDiagnostic.GetDlgCtrlID(), m_szICDDiagnostic);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CAdmissionRegistrationDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocNo")] =  m_nDocNo;
	m_jData[_T("NumInward")] =  m_szNumInward;
	m_jData[_T("InwardDate")] =  m_szInwardDate;
	m_jData[_T("InwardTime")] =  m_nInwardTime;
	m_jData[_T("TreatmentDept")] =  m_szTreatmentDept;
	m_jData[_T("ExamDate")] =  m_szExamDate;
	m_jData[_T("RoomID")] =  m_nRoomID;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("BirthDate")] =  m_szBirthDate;
	m_jData[_T("Sex")] =  m_szSexKey;
	m_jData[_T("Ethnic")] =  m_szEthnicKey;
	m_jData[_T("Occupation")] =  m_szOccupationKey;
	m_jData[_T("Province")] =  m_szProvinceKey;
	m_jData[_T("District")] =  m_szDistrictKey;
	m_jData[_T("Village")] =  m_szVillageKey;
	m_jData[_T("DetailAddress")] =  m_szDetailAddress;
	m_jData[_T("Workplace")] =  m_szWorkplace;
	m_jData[_T("Rank")] =  m_szRankKey;
	m_jData[_T("Position")] =  m_szPositionKey;
	m_jData[_T("Relative")] =  m_szRelative;
	m_jData[_T("Relation")] =  m_szRelationKey;
	m_jData[_T("RelPhone")] =  m_szRelPhone;
	m_jData[_T("RelAddress")] =  m_szRelAddress;
	m_jData[_T("TransferHospital")] =  m_szTransferHospital;
	m_jData[_T("TransferDiagnostic")] =  m_szTransferDiagnostic;
	m_jData[_T("ICDDiagnostic")] =  m_szICDDiagnostic;
	m_jData[_T("Conclusion")] =  m_szConclusion;
	}
	else
	{
			
	m_jData[_T("DocNo")].GetValue(m_nDocNo);
	m_jData[_T("NumInward")].GetValue(m_szNumInward);
	m_jData[_T("InwardDate")].GetValue(m_szInwardDate);
	m_jData[_T("InwardTime")].GetValue(m_nInwardTime);
	m_jData[_T("TreatmentDept")].GetValue(m_szTreatmentDept);
	m_jData[_T("ExamDate")].GetValue(m_szExamDate);
	m_jData[_T("RoomID")].GetValue(m_nRoomID);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
	m_jData[_T("Sex")].GetValue(m_szSexKey);
	m_jData[_T("Ethnic")].GetValue(m_szEthnicKey);
	m_jData[_T("Occupation")].GetValue(m_szOccupationKey);
	m_jData[_T("Province")].GetValue(m_szProvinceKey);
	m_jData[_T("District")].GetValue(m_szDistrictKey);
	m_jData[_T("Village")].GetValue(m_szVillageKey);
	m_jData[_T("DetailAddress")].GetValue(m_szDetailAddress);
	m_jData[_T("Workplace")].GetValue(m_szWorkplace);
	m_jData[_T("Rank")].GetValue(m_szRankKey);
	m_jData[_T("Position")].GetValue(m_szPositionKey);
	m_jData[_T("Relative")].GetValue(m_szRelative);
	m_jData[_T("Relation")].GetValue(m_szRelationKey);
	m_jData[_T("RelPhone")].GetValue(m_szRelPhone);
	m_jData[_T("RelAddress")].GetValue(m_szRelAddress);
	m_jData[_T("TransferHospital")].GetValue(m_szTransferHospital);
	m_jData[_T("TransferDiagnostic")].GetValue(m_szTransferDiagnostic);
	m_jData[_T("ICDDiagnostic")].GetValue(m_szICDDiagnostic);
	m_jData[_T("Conclusion")].GetValue(m_szConclusion);
	}

}
void CAdmissionRegistrationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdmissionRegistrationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdmissionRegistrationDialog::SetDefaultValues(){

	m_nDocNo=0;
	m_szNumInward.Empty();
	m_szInwardDate.Empty();
	m_nInwardTime=0;
	m_szTreatmentDept.Empty();
	m_szExamDate.Empty();
	m_nRoomID=0;
	m_szPatientName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szEthnicKey.Empty();
	m_szOccupationKey.Empty();
	m_szProvinceKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szDetailAddress.Empty();
	m_szWorkplace.Empty();
	m_szRankKey.Empty();
	m_szPositionKey.Empty();
	m_szRelative.Empty();
	m_szRelationKey.Empty();
	m_szRelPhone.Empty();
	m_szRelAddress.Empty();
	m_szTransferHospital.Empty();
	m_szTransferDiagnostic.Empty();
	m_szICDDiagnostic.Empty();
	m_szConclusion.Empty();

}
int CAdmissionRegistrationDialog::SetMode(int nMode){
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
/*void CAdmissionRegistrationDialog::OnDocNoChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnDocNoSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnDocNoKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnDocNoCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnNumInwardChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnNumInwardSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnNumInwardKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnNumInwardCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnInwardDateChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnInwardDateSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnInwardDateKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnInwardDateCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnInwardTimeChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnInwardTimeSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnInwardTimeKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnInwardTimeCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnTreatmentDeptChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnTreatmentDeptSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnTreatmentDeptKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnTreatmentDeptCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnExamDateChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnExamDateSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnExamDateKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnExamDateCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnRoomIDChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnRoomIDSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnRoomIDKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnRoomIDCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnPatientNameChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnPatientNameSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnPatientNameKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnBirthDateChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnBirthDateSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnBirthDateKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnBirthDateCheckValue(){
	return 0;
} 
void CAdmissionRegistrationDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnSexSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnSexSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnSexKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSexKey
};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistrationDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistrationDialog::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnEthnicSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnEthnicSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnEthnicKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEthnicKey
};
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistrationDialog::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistrationDialog::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnOccupationSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnOccupationSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnOccupationKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnOccupationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOccupation.IsSearchKey() && !m_szOccupationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOccupationKey
};
	m_wndOccupation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOccupation.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistrationDialog::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistrationDialog::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnProvinceSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnProvinceSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnProvinceKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnProvinceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvince.IsSearchKey() && !m_szProvinceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProvinceKey
};
	m_wndProvince.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvince.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistrationDialog::OnProvinceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistrationDialog::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnDistrictSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnDistrictSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnDistrictKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDistrictKey
};
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistrationDialog::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistrationDialog::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnVillageSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnVillageSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnVillageKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVillage.IsSearchKey() && !m_szVillageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szVillageKey
};
	m_wndVillage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVillage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistrationDialog::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionRegistrationDialog::OnDetailAddressChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnDetailAddressSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnDetailAddressKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnWorkplaceChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnWorkplaceSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnWorkplaceKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnWorkplaceCheckValue(){
	return 0;
} 
void CAdmissionRegistrationDialog::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnRankSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnRankSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnRankKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRankKey
};
	m_wndRank.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistrationDialog::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistrationDialog::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnPositionSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnPositionSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnPositionKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnPositionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPosition.IsSearchKey() && !m_szPositionKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPositionKey
};
	m_wndPosition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPosition.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistrationDialog::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionRegistrationDialog::OnRelativeChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnRelativeSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnRelativeKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnRelativeCheckValue(){
	return 0;
} 
void CAdmissionRegistrationDialog::OnRelationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnRelationSelendok(){
	 
}
/*void CAdmissionRegistrationDialog::OnRelationSetfocus(){
	
}*/
/*void CAdmissionRegistrationDialog::OnRelationKillfocus(){
	
}*/
long CAdmissionRegistrationDialog::OnRelationLoadData(){
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
/*void CAdmissionRegistrationDialog::OnRelationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionRegistrationDialog::OnRelPhoneChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnRelPhoneSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnRelPhoneKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnRelPhoneCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnRelAddressChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnRelAddressSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnRelAddressKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnRelAddressCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnTransferHospitalChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnTransferHospitalSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnTransferHospitalKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnTransferHospitalCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnTransferDiagnosticChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnTransferDiagnosticSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnTransferDiagnosticKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnTransferDiagnosticCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnICDDiagnosticChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnICDDiagnosticSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnICDDiagnosticKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnICDDiagnosticCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationDialog::OnConclusionChange(){
	
} */
/*void CAdmissionRegistrationDialog::OnConclusionSetfocus(){
	
} */
/*void CAdmissionRegistrationDialog::OnConclusionKillfocus(){
	
} */
int CAdmissionRegistrationDialog::OnConclusionCheckValue(){
	return 0;
} 
void CAdmissionRegistrationDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnPrintExmSheetSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnPrintFilesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationDialog::OnPrintFoodSheetSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdmissionRegistrationDialog::OnAddAdmissionRegistrationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdmissionRegistrationDialog::OnEditAdmissionRegistrationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdmissionRegistrationDialog::OnDeleteAdmissionRegistrationDialog(){
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
 		OnCancelAdmissionRegistrationDialog();
 	}
	return 0;
}
int CAdmissionRegistrationDialog::OnSaveAdmissionRegistrationDialog(){
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
 		//OnAdmissionRegistrationDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdmissionRegistrationDialog::OnCancelAdmissionRegistrationDialog(){
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
int CAdmissionRegistrationDialog::OnAdmissionRegistrationDialogListLoadData(){
	return 0;
}
