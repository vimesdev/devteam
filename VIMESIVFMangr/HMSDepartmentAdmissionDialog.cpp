#include "HMSDepartmentAdmissionDialog.h"
#include "MainFrm.h"
#include "HMSReportForms/PrintForms.h"

/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnExamDeptChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamDeptChange();
} */
/*static void _OnExamDeptSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamDeptSetfocus();} */ 
/*static void _OnExamDeptKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamDeptKillfocus();
} */
static int _OnExamDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamDeptCheckValue();
} 
/*static void _OnExamRoomChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamRoomChange();
} */
/*static void _OnExamRoomSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamRoomSetfocus();} */ 
/*static void _OnExamRoomKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamRoomKillfocus();
} */
static int _OnExamRoomCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamRoomCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnEthnicAddNew();
}*/
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnOccupationAddNew();
}*/
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnVillageAddNew();
}*/
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnWorkplaceCheckValue();
} 
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRankAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPositionAddNew();
}*/
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
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationSelendok();
}
/*static void _OnRelationSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationKillfocus();
}*/
/*static void _OnRelationKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationKillfocus();
}*/
static long _OnRelationLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationLoadData();
}
/*static void _OnRelationAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationAddNew();
}*/
/*static void _OnContactAddressChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnContactAddressChange();
} */
/*static void _OnContactAddressSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnContactAddressSetfocus();} */ 
/*static void _OnContactAddressKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnContactAddressKillfocus();
} */
static int _OnContactAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnContactAddressCheckValue();
} 
/*static void _OnContactPhoneChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnContactPhoneChange();
} */
/*static void _OnContactPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnContactPhoneSetfocus();} */ 
/*static void _OnContactPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnContactPhoneKillfocus();
} */
static int _OnContactPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnContactPhoneCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnTreatTimeChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTreatTimeChange();
} */
/*static void _OnTreatTimeSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTreatTimeSetfocus();} */ 
/*static void _OnTreatTimeKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTreatTimeKillfocus();
} */
static int _OnTreatTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnTreatTimeCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitDateCheckValue();
} 
static void _OnAdmitedDirectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnAdmitedDirectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdmitedDirectionSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitedDirectionSelendok();
}
/*static void _OnAdmitedDirectionSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitedDirectionKillfocus();
}*/
/*static void _OnAdmitedDirectionKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitedDirectionKillfocus();
}*/
static long _OnAdmitedDirectionLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitedDirectionLoadData();
}
/*static void _OnAdmitedDirectionAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmitedDirectionAddNew();
}*/
static void _OnTransferPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnTransferPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransferPlaceSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferPlaceSelendok();
}
/*static void _OnTransferPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferPlaceKillfocus();
}*/
/*static void _OnTransferPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferPlaceKillfocus();
}*/
static long _OnTransferPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferPlaceLoadData();
}
/*static void _OnTransferPlaceAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferPlaceAddNew();
}*/
/*static void _OnTransferHospitalChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferHospitalChange();
} */
/*static void _OnTransferHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferHospitalSetfocus();} */ 
/*static void _OnTransferHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferHospitalKillfocus();
} */
static int _OnTransferHospitalCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferHospitalCheckValue();
} 
/*static void _OnTransferDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferDiagnosticChange();
} */
/*static void _OnTransferDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferDiagnosticSetfocus();} */ 
/*static void _OnTransferDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferDiagnosticKillfocus();
} */
static int _OnTransferDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnTransferDiagnosticCheckValue();
} 
/*static void _OnExamineDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamineDiseaseChange();
} */
/*static void _OnExamineDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamineDiseaseSetfocus();} */ 
/*static void _OnExamineDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamineDiseaseKillfocus();
} */
static int _OnExamineDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamineDiseaseCheckValue();
} 
/*static void _OnInDateChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnInDateChange();
} */
/*static void _OnInDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnInDateSetfocus();} */ 
/*static void _OnInDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnInDateKillfocus();
} */
static int _OnInDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnInDateCheckValue();
} 
static long _OnDoctorLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnDoctorLoadData();
}
static void _OnIUISelectFnc(CWnd *pWnd){
	 ((CHMSDepartmentAdmissionDialog*)pWnd)->OnIUISelect();
}
static void _OnSCSISelectFnc(CWnd *pWnd){
	 ((CHMSDepartmentAdmissionDialog*)pWnd)->OnSCSISelect();
}
static void _OnCancerSelectFnc(CWnd *pWnd){
	 ((CHMSDepartmentAdmissionDialog*)pWnd)->OnCancerSelect();
}

static int _OnCancerTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnCancerTimeCheckValue();
} 

static void _OnAdmissionDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnAdmissionDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdmissionDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseSelendok();
}
/*static void _OnAdmissionDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseKillfocus();
}*/
/*static void _OnAdmissionDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseKillfocus();
}*/
static long _OnAdmissionDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseLoadData();
}
/*static void _OnAdmissionDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseAddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseCheckValue();
}

static void _OnRelationDiseaseSelectFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseSelect();
}

/*static void _OnIssueNumberChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnIssueNumberChange();
} */
/*static void _OnIssueNumberSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnIssueNumberSetfocus();} */ 
/*static void _OnIssueNumberKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnIssueNumberKillfocus();
} */
static int _OnIssueNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnIssueNumberCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDepartmentAdmissionDialog *pVw = (CHMSDepartmentAdmissionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDepartmentAdmissionDialog *pVw = (CHMSDepartmentAdmissionDialog *)pWnd;
	pVw->OnCancelSelect();
}

static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDepartmentAdmissionDialog *pVw = (CHMSDepartmentAdmissionDialog *)pWnd;
	pVw->OnPrintSelect();
}

static int _OnAddHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnAddHMSDepartmentAdmissionDialog();
} 
static int _OnEditHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnEditHMSDepartmentAdmissionDialog();
} 
static int _OnDeleteHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnDeleteHMSDepartmentAdmissionDialog();
} 
static int _OnSaveHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnSaveHMSDepartmentAdmissionDialog();
} 
static int _OnCancelHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnCancelHMSDepartmentAdmissionDialog();
} 

static long _OnIVFTypeLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnIVFTypeLoadData();
}

CHMSDepartmentAdmissionDialog::CHMSDepartmentAdmissionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 2053;
	SetDefaultValues();
	m_nIndex = 0;	
	
	m_bHasAdmissionRegistration = true;
	m_bRegisted = true;


}
CHMSDepartmentAdmissionDialog::~CHMSDepartmentAdmissionDialog(){
}
void CHMSDepartmentAdmissionDialog::OnCreateComponents(){
	m_wndPatientProfiles.Create(this, _T("Hồ sơ bệnh nhân"), 5, 5, 755, 300);
	m_wndDepartmentAdmitedInformation.Create(this, _T("Thông tin vào khoa"), 5, 485, 755, 660);
	m_wndAdmissionInformation.Create(this, _T("Admission Information"), 5, 305, 755, 480);
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 10, 30, 160, 55);
	m_wndExamDate.Create(this,165, 30, 271, 55); 
	m_wndExamDeptLabel.Create(this, _T("Exam Dept"), 370, 30, 490, 55);
	m_wndExamDept.Create(this,495, 30, 590, 55); 
	m_wndExamRoomLabel.Create(this, _T("Exam Room"), 595, 30, 665, 55);
	m_wndExamRoom.Create(this,670, 30, 750, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 160, 85);
	m_wndPatientName.Create(this,165, 60, 365, 85); 
	m_wndBirthDateLabel.Create(this, _T("BirthDate"), 370, 60, 490, 85);
	m_wndBirthDate.Create(this,495, 60, 590, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 595, 60, 665, 85);
	m_wndSex.Create(this,670, 60, 750, 85); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 10, 90, 160, 115);
	m_wndEthnic.Create(this,165, 90, 365, 115); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 370, 90, 490, 115);
	m_wndOccupation.Create(this,495, 90, 750, 115); 
	m_wndProvinceLabel.Create(this, _T("Province"), 10, 120, 160, 145);
	m_wndProvince.Create(this,165, 120, 365, 145); 
	m_wndDistrictLabel.Create(this, _T("District"), 370, 120, 490, 145);
	m_wndDistrict.Create(this,495, 120, 750, 145); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 150, 160, 175);
	m_wndVillage.Create(this,165, 150, 365, 175); 
	m_wndDetailAddressLabel.Create(this, _T("Detail Address"), 370, 150, 490, 175);
	m_wndDetailAddress.Create(this,495, 150, 750, 175); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 10, 180, 160, 205);
	m_wndWorkplace.Create(this,165, 180, 750, 205); 
	m_wndRankLabel.Create(this, _T("Rank"), 10, 210, 160, 235);
	m_wndRank.Create(this,165, 210, 365, 235); 
	m_wndPositionLabel.Create(this, _T("Position"), 370, 210, 490, 235);
	m_wndPosition.Create(this,495, 210, 750, 235); 
	m_wndRelativeLabel.Create(this, _T("Relative"), 10, 240, 160, 265);
	m_wndRelative.Create(this,165, 240, 365, 265); 
	m_wndRelationLabel.Create(this, _T("Relation"), 370, 240, 490, 265);
	m_wndRelation.Create(this,495, 240, 750, 265); 
	m_wndContactAddressLabel.Create(this, _T("Contact Address"), 10, 270, 160, 295);
	m_wndContactAddress.Create(this,165, 270, 365, 295); 
	m_wndContactPhoneLabel.Create(this, _T("Contact Phone"), 370, 270, 490, 295);
	m_wndContactPhone.Create(this,495, 270, 750, 295); 
	m_wndRecordNoLabel.Create(this, _T("Admission No"), 10, 330, 160, 355);
	m_wndRecordNo.Create(this,165, 330, 265, 355); 
	m_wndTimes.Create(this, _T("Times"), 270, 330, 330, 355);
	m_wndTreatTime.Create(this,335, 330, 365, 355); 
	m_wndAdmisionDateLabel.Create(this, _T("Admission Date"), 370, 330, 490, 355);
	m_wndAdmitDate.Create(this,495, 330, 655, 355); 
	m_wndAdmitedDirectionLabel.Create(this, _T("Admited Direction"), 10, 360, 160, 385);
	m_wndAdmitedDirection.Create(this,165, 360, 365, 385); 
	m_wndTransferPlaceLabel.Create(this, _T("Transfer Place"), 370, 360, 490, 385);
	m_wndTransferPlace.Create(this,495, 360, 749, 385); 
	m_wndTransferHospitalLabel.Create(this, _T("Trans Hospital"), 10, 390, 160, 415);
	m_wndTransferHospital.Create(this,165, 390, 751, 415); 
	m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 10, 420, 160, 445);
	m_wndTransferDiagnostic.Create(this,165, 420, 749, 445); 
	m_wndExamineDiseaseLabel.Create(this, _T("Examine Disease"), 10, 450, 160, 475);
	m_wndExamineDisease.Create(this,165, 450, 749, 475); 
	m_wndInDateLabel.Create(this, _T("In Date"), 10, 510, 160, 535);
	m_wndInDate.Create(this,165, 510, 290, 535); 
	m_wndIndeptRecordLabel.Create(this, _T("Indept Record"), 295, 510, 375, 535);
	m_wndIndeptRecord.Create(this,380, 510, 500, 535); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 505, 510, 575, 535);
	m_wndDoctor.Create(this,580, 510, 750, 535); 
	m_wndAdmissionDiseaseLabel.Create(this, _T("Admission Disease"), 10, 540, 160, 565);
	m_wndAdmissionDisease.Create(this,165, 540, 375, 565); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 380, 540, 500, 565);
	m_wndMainDisease.Create(this,505, 540, 750, 565); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 570, 160, 595);
	m_wndRelationDisease.Create(this,165, 570, 375, 595); 
	m_wndRegimenLabel.Create(this, _T("Regimen"), 380, 570, 500, 595);
	m_wndRegimen.Create(this,505, 570, 750, 595); 
	m_wndIssueNumberLabel.Create(this, _T("Issue Number"), 10, 600, 160, 625);
	m_wndIssueNumber.Create(this,165, 600, 290, 625); 
	m_wndNoteLabel.Create(this, _T("Note"), 295, 600, 375, 625);
	m_wndNote.Create(this,380, 600, 750, 625); 
	m_wndFirstDayLastPeriodLabel.Create(this, _T("First Day Last Period"), 10, 630, 160, 655);
	m_wndFirstDayLastPeriod.Create(this,165, 630, 290, 655); 
	m_wndIVFTypeLabel.Create(this, _T("Treat type"), 295, 630, 375, 655);
	m_wndIVFType.Create(this,380, 630, 750, 655); 
	m_wndSave.Create(this, _T("&Save"), 515, 665, 595, 690);
	m_wndCancel.Create(this, _T("&Cancel"), 600, 665, 675, 690);
	m_wndPrint.Create(this, _T("&Print"), 680, 665, 755, 690);
}
void CHMSDepartmentAdmissionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExamDate.SetReadOnly(true);
	m_wndExamDept.SetLimitText(35);
	m_wndExamDept.SetReadOnly(true);
	m_wndExamRoom.SetLimitText(35);
	m_wndExamRoom.SetReadOnly(true);
	m_wndPatientName.SetLimitText(64);
	m_wndPatientName.SetReadOnly(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(35);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(35);
	m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(35);
	m_wndProvince.SetCheckValue(true);
	m_wndProvince.LimitText(35);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	m_wndVillage.SetCheckValue(false);
	m_wndVillage.LimitText(35);
	m_wndDetailAddress.SetLimitText(254);
	m_wndDetailAddress.SetCheckValue(false);
	m_wndWorkplace.SetLimitText(254);
	m_wndWorkplace.SetCheckValue(false);
	m_wndRank.SetCheckValue(false);
	m_wndRank.LimitText(64);
	m_wndPosition.SetCheckValue(false);
	m_wndPosition.LimitText(64);
	m_wndRelative.SetLimitText(64);
	m_wndRelative.SetCheckValue(false);
	m_wndRelation.SetCheckValue(false);
	m_wndRelation.LimitText(254);
	m_wndContactAddress.SetLimitText(254);
	m_wndContactAddress.SetCheckValue(false);
	m_wndContactPhone.SetLimitText(25);
	m_wndContactPhone.SetCheckValue(false);
	m_wndRecordNo.SetLimitText(10);
	m_wndRecordNo.SetCheckValue(true);
	m_wndTreatTime.SetLimitText(3);
	m_wndTreatTime.SetCheckValue(true);
	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndAdmitedDirection.SetCheckValue(true);
	m_wndAdmitedDirection.LimitText(35);
	m_wndTransferPlace.SetCheckValue(true);
	m_wndTransferPlace.LimitText(35);
	m_wndTransferDiagnostic.SetLimitText(254);
//	m_wndTransferDiagnostic.SetCheckValue(true);
	m_wndExamineDisease.SetLimitText(1024);
	m_wndExamineDisease.SetCheckValue(true);
	m_wndInDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndInDate.SetCheckValue(true);
	m_wndExamineDisease.SetLimitText(254);
	m_wndExamineDisease.SetReadOnly(true);
	//m_wndExamineDisease.SetCheckValue(true);
	m_wndAdmissionDisease.SetCheckValue(true);
	m_wndAdmissionDisease.LimitText(254);
//	m_wndMainDisease.SetCheckValue(true);
	m_wndMainDisease.LimitText(254);
	m_wndRelationDisease.SetLimitText(254);
//	m_wndRelationDisease.SetCheckValue(true);
	m_wndIVFType.SetCheckValue(true);

//	m_wndCancerTime.ModifyStyle(WS_TABSTOP, 0);
//	m_wndCancerTime.SetCheckValue(TRUE);

	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOccupation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOccupation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProvince.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvince.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndProvince.InsertColumn(2, _T("Code"), CFMT_TEXT, 50);

	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistrict.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndDistrict.InsertColumn(2, _T("Code"), CFMT_TEXT, 50);

	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndVillage.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndVillage.InsertColumn(2, _T("Code"), CFMT_TEXT, 50);



	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	
//	m_wndSCSI.ModifyStyle(WS_TABSTOP, 0);
	
	m_wndRelation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRelation.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndAdmitedDirection.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAdmitedDirection.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTransferPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTransferPlace.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndAdmissionDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAdmissionDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndIVFType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndIVFType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	/*m_wndMainDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMainDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);*/


	m_hms_patientTbl.AddField(_T("p_userid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("p_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("p_docno"), dfLong); 
	m_hms_patientTbl.AddField(_T("p_docno"), dfLong); 
	m_hms_patientTbl.AddField(_T("p_birthdate"), dfDate);
    m_hms_patientTbl.AddField(_T("p_sex"), dfText, 1);
    m_hms_patientTbl.AddField(_T("p_ethnic"), dfInteger);
    m_hms_patientTbl.AddField(_T("p_occupation"), dfInteger);
    m_hms_patientTbl.AddField(_T("p_provice_id"), dfInteger);
	m_hms_patientTbl.AddField(_T("p_district_id"), dfLong);
	m_hms_patientTbl.AddField(_T("p_village_id"), dfLong);
    m_hms_patientTbl.AddField(_T("p_dtladdress"), dfText, 254);
    m_hms_patientTbl.AddField(_T("p_workplace"), dfText, 254);
    m_hms_patientTbl.AddField(_T("p_rank"), dfInteger);
    m_hms_patientTbl.AddField(_T("p_position"), dfInteger);
    m_hms_patientTbl.AddField(_T("p_relative"), dfText, 64);
    m_hms_patientTbl.AddField(_T("p_relation"), dfInteger);
    m_hms_patientTbl.AddField(_T("p_contact_address"), dfText, 254);
    m_hms_patientTbl.AddField(_T("p_contact_phone"), dfText, 35);


	m_hms_clinicalTbl.AddField(_T("p_userid"), dfText, 15);
	m_hms_clinicalTbl.AddField(_T("p_docno"), dfLong);
    m_hms_clinicalTbl.AddField(_T("p_recordno"), dfText, 15);
	m_hms_clinicalTbl.AddField(_T("p_numinward"), dfLong);
    m_hms_clinicalTbl.AddField(_T("p_treat_time"), dfInteger);
    m_hms_clinicalTbl.AddField(_T("p_exam_date"), dfText, 15);
	m_hms_clinicalTbl.AddField(_T("p_admit_direct"), dfInteger);
	m_hms_clinicalTbl.AddField(_T("p_transfer_place"), dfInteger);
    m_hms_clinicalTbl.AddField(_T("p_transfer_hospital"), dfText, 254);
    m_hms_clinicalTbl.AddField(_T("p_transfer_diagnostic"), dfText, 254);
    m_hms_clinicalTbl.AddField(_T("p_admit_date"), dfText, 15);
    m_hms_clinicalTbl.AddField(_T("p_outpatient"), dfText, 1);
    m_hms_clinicalTbl.AddField(_T("p_emergency"), dfText, 1);
    m_hms_clinicalTbl.AddField(_T("p_cancer"), dfText, 1);
	m_hms_clinicalTbl.AddField(_T("p_cancer_time"), dfInteger);
    m_hms_clinicalTbl.AddField(_T("p_admit_icd10"), dfText, 10);
    m_hms_clinicalTbl.AddField(_T("p_main_disease"), dfText, 254);
    m_hms_clinicalTbl.AddField(_T("p_relation_disease"), dfText, 254);
	m_hms_clinicalTbl.AddField(_T("p_pregnancy"), dfText, 1);
	m_hms_clinicalTbl.AddField(_T("p_doctor"), dfText, 35);
	m_hms_clinicalTbl.AddField(_T("p_ivf_recordno"), dfText, 15);


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
	m_hms_treatment_recordTbl.AddField(_T("htr_brace_no"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_brace_note"), dfText, 250); 
	m_hms_treatment_recordTbl.AddField(_T("htr_brace_date"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_cancer_time"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_doctor"), dfText, 35); 
	m_hms_treatment_recordTbl.AddField(_T("htr_ivf_type"), dfText, 5); 
	m_hms_treatment_recordTbl.AddField(_T("htr_firstday_lastperiod"), dfDate);
	m_hms_treatment_recordTbl.AddField(_T("htr_regimen"), dfText, 512);

	m_szTitle = m_szTiles;
	m_wndRecordNo.SetReadOnly(true);
//	m_wndCancer.ModifyStyle(WS_TABSTOP, 0);
	//if(m_bHasAdmissionRegistration){
	//	m_wndRelative.SetReadOnly(true);
	//	m_wndRelation.SetReadOnly(true);
	//	
	//	m_wndContactAddress.SetReadOnly(true);
	//	m_wndContactPhone.SetReadOnly(true);
	//	m_wndRecordNo.SetReadOnly(true);
	//	m_wndTreatTime.SetReadOnly(true);
	//	m_wndAdmitDate.SetReadOnly(true);
	//	m_wndTransferDiagnostic.SetReadOnly(true);
	//	m_wndExamineDisease.SetReadOnly(true);

	//	//m_wndInDate.SetReadOnly(true);
	//	m_wndRecordNo.SetReadOnly(true);

	//}
}
void CHMSDepartmentAdmissionDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndExamDept.SetEvent(WE_CHANGE, _OnExamDeptChangeFnc);
	//m_wndExamDept.SetEvent(WE_SETFOCUS, _OnExamDeptSetfocusFnc);
	//m_wndExamDept.SetEvent(WE_KILLFOCUS, _OnExamDeptKillfocusFnc);
	m_wndExamDept.SetEvent(WE_CHECKVALUE, _OnExamDeptCheckValueFnc);
	//m_wndExamRoom.SetEvent(WE_CHANGE, _OnExamRoomChangeFnc);
	//m_wndExamRoom.SetEvent(WE_SETFOCUS, _OnExamRoomSetfocusFnc);
	//m_wndExamRoom.SetEvent(WE_KILLFOCUS, _OnExamRoomKillfocusFnc);
	m_wndExamRoom.SetEvent(WE_CHECKVALUE, _OnExamRoomCheckValueFnc);
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
	//m_wndContactAddress.SetEvent(WE_CHANGE, _OnContactAddressChangeFnc);
	//m_wndContactAddress.SetEvent(WE_SETFOCUS, _OnContactAddressSetfocusFnc);
	//m_wndContactAddress.SetEvent(WE_KILLFOCUS, _OnContactAddressKillfocusFnc);
	m_wndContactAddress.SetEvent(WE_CHECKVALUE, _OnContactAddressCheckValueFnc);
	//m_wndContactPhone.SetEvent(WE_CHANGE, _OnContactPhoneChangeFnc);
	//m_wndContactPhone.SetEvent(WE_SETFOCUS, _OnContactPhoneSetfocusFnc);
	//m_wndContactPhone.SetEvent(WE_KILLFOCUS, _OnContactPhoneKillfocusFnc);
	m_wndContactPhone.SetEvent(WE_CHECKVALUE, _OnContactPhoneCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndTreatTime.SetEvent(WE_CHANGE, _OnTreatTimeChangeFnc);
	//m_wndTreatTime.SetEvent(WE_SETFOCUS, _OnTreatTimeSetfocusFnc);
	//m_wndTreatTime.SetEvent(WE_KILLFOCUS, _OnTreatTimeKillfocusFnc);
	m_wndTreatTime.SetEvent(WE_CHECKVALUE, _OnTreatTimeCheckValueFnc);
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
	//m_wndTransferHospital.SetEvent(WE_CHANGE, _OnTransferHospitalChangeFnc);
	//m_wndTransferHospital.SetEvent(WE_SETFOCUS, _OnTransferHospitalSetfocusFnc);
	//m_wndTransferHospital.SetEvent(WE_KILLFOCUS, _OnTransferHospitalKillfocusFnc);
	m_wndTransferHospital.SetEvent(WE_CHECKVALUE, _OnTransferHospitalCheckValueFnc);
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
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
//	m_wndIUI.SetEvent(WE_CLICK, _OnIUISelectFnc);
//	m_wndSCSI.SetEvent(WE_CLICK, _OnSCSISelectFnc);
//	m_wndCancer.SetEvent(WE_CLICK, _OnCancerSelectFnc);
//	m_wndCancerTime.SetEvent(WE_CHECKVALUE, _OnCancerTimeCheckValueFnc);
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
	m_wndRelationDiseaseLabel.SetHyperlink(true);
	m_wndRelationDiseaseLabel.SetEvent(WE_CLICK, _OnRelationDiseaseSelectFnc);
	//m_wndIssueNumber.SetEvent(WE_CHANGE, _OnIssueNumberChangeFnc);
	//m_wndIssueNumber.SetEvent(WE_SETFOCUS, _OnIssueNumberSetfocusFnc);
	//m_wndIssueNumber.SetEvent(WE_KILLFOCUS, _OnIssueNumberKillfocusFnc);
	m_wndIssueNumber.SetEvent(WE_CHECKVALUE, _OnIssueNumberCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndIVFType.SetEvent(WE_LOADDATA, _OnIVFTypeLoadDataFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

	m_nTreatTime = 1;
	m_nIssueNumber = 1;
	GetDataToScreen();

	if(!m_szPreRecordNo.IsEmpty())
	{
//		m_wndIUI.EnableWindow(FALSE);
//		m_wndCancer.EnableWindow(FALSE);
	}
	
}
void CHMSDepartmentAdmissionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRegimen.GetDlgCtrlID(), m_szRegimen);
	DDX_Text(pDX, m_wndIndeptRecord.GetDlgCtrlID(), m_szIndeptRecord);
	DDX_TextEx(pDX, m_wndFirstDayLastPeriod.GetDlgCtrlID(), m_szFirstDayLastPeriod);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndExamDept.GetDlgCtrlID(), m_szExamDept);
	DDX_Text(pDX, m_wndExamRoom.GetDlgCtrlID(), m_szExamRoom);
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
	DDX_Text(pDX, m_wndContactAddress.GetDlgCtrlID(), m_szContactAddress);
	DDX_Text(pDX, m_wndContactPhone.GetDlgCtrlID(), m_szContactPhone);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndTreatTime.GetDlgCtrlID(), m_nTreatTime);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndAdmitedDirection.GetDlgCtrlID(), m_szAdmitedDirectionKey);
	DDX_TextEx(pDX, m_wndTransferPlace.GetDlgCtrlID(), m_szTransferPlaceKey);
	DDX_Text(pDX, m_wndTransferHospital.GetDlgCtrlID(), m_szTransferHospital);
	DDX_Text(pDX, m_wndTransferDiagnostic.GetDlgCtrlID(), m_szTransferDiagnostic);
	DDX_Text(pDX, m_wndExamineDisease.GetDlgCtrlID(), m_szExamineDisease);
	DDX_TextEx(pDX, m_wndInDate.GetDlgCtrlID(), m_szInDate);
	//DDX_Check(pDX, m_wndIUI.GetDlgCtrlID(), m_bIUI);
	//DDX_Check(pDX, m_wndSCSI.GetDlgCtrlID(), m_bSCSI);
//	DDX_Check(pDX, m_wndCancer.GetDlgCtrlID(), m_bCancer);
	DDX_TextEx(pDX, m_wndAdmissionDisease.GetDlgCtrlID(), m_szAdmissionDiseaseKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
//	DDX_Text(pDX, m_wndCancerTime.GetDlgCtrlID(), m_nCancerTime);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndIssueNumber.GetDlgCtrlID(), m_nIssueNumber);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndIVFType.GetDlgCtrlID(), m_szIVFTypeKey);
}
void CHMSDepartmentAdmissionDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ExamDate")] =  m_szExamDate;
	m_jData[_T("ExamDept")] =  m_szExamDept;
	m_jData[_T("ExamRoom")] =  m_szExamRoom;
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
	m_jData[_T("ContactAddress")] =  m_szContactAddress;
	m_jData[_T("ContactPhone")] =  m_szContactPhone;
	m_jData[_T("RecordNo")] =  m_szRecordNo;
	m_jData[_T("TreatTime")] =  m_nTreatTime;
	m_jData[_T("AdmitDate")] =  m_szAdmitDate;
	m_jData[_T("AdmitedDirection")] =  m_szAdmitedDirectionKey;
	m_jData[_T("TransferPlace")] =  m_szTransferPlaceKey;
	m_jData[_T("TransferHospital")] =  m_szTransferHospital;
	m_jData[_T("TransferDiagnostic")] =  m_szTransferDiagnostic;
	m_jData[_T("ExamineDisease")] =  m_szExamineDisease;
	m_jData[_T("InDate")] =  m_szInDate;
	m_jData[_T("AdmissionDisease")] =  m_szAdmissionDiseaseKey;
	m_jData[_T("MainDisease")] =  m_szMainDisease;
	m_jData[_T("RelationDisease")] =  m_szRelationDisease;
	}
	else
	{
			
	m_jData[_T("ExamDate")].GetValue(m_szExamDate);
	m_jData[_T("ExamDept")].GetValue(m_szExamDept);
	m_jData[_T("ExamRoom")].GetValue(m_szExamRoom);
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
	m_jData[_T("ContactAddress")].GetValue(m_szContactAddress);
	m_jData[_T("ContactPhone")].GetValue(m_szContactPhone);
	m_jData[_T("RecordNo")].GetValue(m_szRecordNo);
	m_jData[_T("TreatTime")].GetValue(m_nTreatTime);
	m_jData[_T("AdmitDate")].GetValue(m_szAdmitDate);
	m_jData[_T("AdmitedDirection")].GetValue(m_szAdmitedDirectionKey);
	m_jData[_T("TransferPlace")].GetValue(m_szTransferPlaceKey);
	m_jData[_T("TransferHospital")].GetValue(m_szTransferHospital);
	m_jData[_T("TransferDiagnostic")].GetValue(m_szTransferDiagnostic);
	m_jData[_T("ExamineDisease")].GetValue(m_szExamineDisease);
	m_jData[_T("InDate")].GetValue(m_szInDate);
	m_jData[_T("AdmissionDisease")].GetValue(m_szAdmissionDiseaseKey);
	m_jData[_T("MainDisease")].GetValue(m_szMainDisease);
	m_jData[_T("RelationDisease")].GetValue(m_szRelationDisease);
	}

}
void CHMSDepartmentAdmissionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, tmpStr;
	szSQL.Format(_T(" SELECT hp_patientno, hp_surname||' '||hp_midname||' '||hp_firstname as pname, ") \
		_T(" hp_birthdate as birthdate, hp_sex as sex, ") \
		_T(" hp_ethnic as ethnic, hp_occupation as occupation, ") \
		_T(" hp_provid as provid, hp_distid as distid, hp_villid as villid, ") \
		_T(" nvl(hd_dtladdr, hp_dtladdr) as dtladdress, hp_workplace as workplace, ") \
		_T("hd_relative as relative, hd_relation as relation, ") \
		_T("hd_contacttel as contact_phone, ") \
		_T("hd_contactaddr as contact_address,  ") \
		_T(" hd_admitdate as examdate, ") \
		_T(" hd_enddept as examdept, ") \
		_T(" hd_rank as rank, hd_position as position, hd_object as object, ho_type as object_type, ") \
		_T(" hd_transplace, hd_transdiagn, ") \
		_T("	case when  hd_enddate > hcr_admitdate then hd_enddate else hcr_admitdate end as admitdate,") \
		_T("	htr_admitdate as indate,") \
		_T(" 	hcr_recordno as recordno,") \
		_T(" 	hcr_admiticd as admiticd,") \
		_T(" 	htr_status as status,") \
		_T("	hcr_status as doc_status, ") \
		_T(" 	hd_conclusion as examdisease,") \
		_T(" 	hcr_reldisease as reldisease, ") \
		_T("	hcr_admitdirect as admitdirect, ") \
		_T("	hcr_transplace as transplace, ") \
		_T("	htr_mainicd as mainicd, htr_brace_no, htr_brace_note,") \
		_T("	htr_maindisease as maindisease, ") \
		_T("	htr_ward as ward, hcr_cancer, hcr_cancer_time, hcr_treattime as treattime, htr_cancer_time,  ") \
		_T("	hcr_treatdoctor as doctor, htr_ivf_type, htr_firstday_lastperiod, ") \
		_T("	hcr_ivf_recordno as ivf_recordno, htr_regimen as regimen ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno = hp_patientno) ") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_object ON(hd_object = ho_id) ")\
		_T(" WHERE htr_docno=%ld AND htr_idx=%d"),  m_nDocumentNo, m_nIndex);
_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("doctor"), m_szDoctorKey);
		rs.GetValue(_T("hp_patientno"), m_nPatientNo);
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("birthdate"), m_szBirthDate);
		rs.GetValue(_T("sex"), m_szSexKey);
		rs.GetValue(_T("ethnic"), m_szEthnicKey);
		rs.GetValue(_T("occupation"), m_szOccupationKey);
		rs.GetValue(_T("provid"), m_szProvinceKey);
		rs.GetValue(_T("distid"), m_szDistrictKey);
		rs.GetValue(_T("villid"), m_szVillageKey);
		
		rs.GetValue(_T("dtladdress"), m_szDetailAddress);
		rs.GetValue(_T("workplace"), m_szWorkplace);
		rs.GetValue(_T("examdate"), m_szExamDate);
		rs.GetValue(_T("examdept"), m_szExamDept);
		rs.GetValue(_T("rank"), m_szRankKey);
		rs.GetValue(_T("position"), m_szPositionKey);
		rs.GetValue(_T("object_type"), m_szObjectType);
		rs.GetValue(_T("object"), m_nObject);
		rs.GetValue(_T("status"), m_szStatus);
		m_szCurStatus = m_szStatus;
		rs.GetValue(_T("doc_status"), m_szDocStatus);
		rs.GetValue(_T("relative"), m_szRelative);
		rs.GetValue(_T("relation"), m_szRelationKey);
		rs.GetValue(_T("contact_phone"), m_szContactPhone);
		rs.GetValue(_T("contact_address"), m_szContactAddress);
		rs.GetValue(_T("transdiagn"), m_szTransferDiagnostic);
		rs.GetValue(_T("transplace"), m_szTransferPlaceKey);
		rs.GetValue(_T("admitdirect"), m_szAdmitedDirectionKey);
		rs.GetValue(_T("treattime"), m_nTreatTime);
		rs.GetValue(_T("admitdate"), m_szAdmitDate);
		rs.GetValue(_T("hd_transplace"), m_szTransferHospital);
		rs.GetValue(_T("hd_transdiagn"), m_szTransferDiagnostic);
		rs.GetValue(_T("htr_brace_no"), m_nIssueNumber);
		rs.GetValue(_T("htr_brace"), m_szNote);

		rs.GetValue(_T("indate"), m_szInDate);
		
		
		if(m_szRelationKey == _T("0"))
		{
			m_szRelationKey.Empty();
		}

		rs.GetValue(_T("htr_ivf_type"), m_szIVFTypeKey);
		rs.GetValue(_T("htr_firstday_lastperiod"), m_szFirstDayLastPeriod);
		rs.GetValue(_T("recordno"), m_szRecordNo);
		m_szPreRecordNo = m_szRecordNo;

		rs.GetValue(_T("admiticd"), m_szAdmissionDiseaseKey);
		//rs.GetValue(_T("mainicd"), m_szAdmissionDiseaseKey);
		rs.GetValue(_T("maindisease"), m_szMainDisease);
		rs.GetValue(_T("examdisease"), m_szExamineDisease);
		rs.GetValue(_T("reldisease"), m_szRelationDisease);

		rs.GetValue(_T("ward"), m_szWard);

		m_szRelationDisease.Trim();
		m_szMainDisease.Trim();
		if(m_nTreatTime <=0) m_nTreatTime = 1;
		if(m_szAdmitedDirectionKey.IsEmpty())
			m_szAdmitedDirectionKey = _T("2");
		if(m_szTransferPlaceKey.IsEmpty())
			m_szTransferPlaceKey = _T("2");

		if(m_szStatus == _T("A"))
			m_szMainDisease = m_szExamineDisease;

		m_bRegisted  = true;
		rs.GetValue(_T("ivf_recordno"), m_szIndeptRecord);
		rs.GetValue(_T("regimen"), m_szRegimen);
		if(GetMode() != VM_VIEW)
		{
			
			if(m_szRecordNo.IsEmpty() && (m_szCurStatus==_T("A") && m_nIndex==1))
			{
				m_bRegisted = false;
				m_szRecordNo = PrepareRecordNo();			
			}

			SetMode(VM_EDIT);
		}
		else
			SetMode(VM_VIEW);
	}
	else
		SetMode(VM_ADD);

}
void CHMSDepartmentAdmissionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	

	m_hms_patientTbl.SetValue(_T("p_userid"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("p_patientno"), m_nPatientNo); 
	m_hms_patientTbl.SetValue(_T("p_docno"), m_nDocumentNo); 
	m_hms_patientTbl.SetValue(_T("p_birthdate"), m_szBirthDate);
    m_hms_patientTbl.SetValue(_T("p_sex"), m_szSexKey);
    m_hms_patientTbl.SetValue(_T("p_ethnic"), m_szEthnicKey);
    m_hms_patientTbl.SetValue(_T("p_occupation"), m_szOccupationKey);
    m_hms_patientTbl.SetValue(_T("p_provice_id"), m_szProvinceKey);
	m_hms_patientTbl.SetValue(_T("p_district_id"), m_szDistrictKey);
    m_hms_patientTbl.SetValue(_T("p_village_id"), m_szVillageKey);
	m_hms_patientTbl.SetValue(_T("p_dtladdress"), m_szDetailAddress);
    m_hms_patientTbl.SetValue(_T("p_workplace"), m_szWorkplace);
    m_hms_patientTbl.SetValue(_T("p_rank"), m_szRankKey);
    m_hms_patientTbl.SetValue(_T("p_position"), m_szPositionKey);
	m_hms_patientTbl.SetValue(_T("p_relative"), m_szRelative);
	m_hms_patientTbl.SetValue(_T("p_relation"), m_szRelationKey);
    m_hms_patientTbl.SetValue(_T("p_contact_address"), m_szContactAddress);
    m_hms_patientTbl.SetValue(_T("p_contact_phone"), m_szContactPhone);


	m_hms_clinicalTbl.SetValue(_T("p_userid"), pMF->GetCurrentUser());
    m_hms_clinicalTbl.SetValue(_T("p_docno"), m_nDocumentNo);
	m_hms_clinicalTbl.SetValue(_T("p_recordno"), m_szRecordNo);
	m_hms_clinicalTbl.SetValue(_T("p_numinward"), m_nNumInward);
	m_hms_clinicalTbl.SetValue(_T("p_treat_time"), m_nTreatTime);
	m_hms_clinicalTbl.SetValue(_T("p_exam_date"), m_szExamDate);
	m_hms_clinicalTbl.SetValue(_T("p_admit_direct"), m_szAdmitedDirectionKey);
	m_hms_clinicalTbl.SetValue(_T("p_transfer_place"), m_szTransferPlaceKey);
	m_hms_clinicalTbl.SetValue(_T("p_transfer_hospital"), m_szTransferHospital);
	m_hms_clinicalTbl.SetValue(_T("p_transfer_diagnostic"), m_szTransferDiagnostic);
	m_hms_clinicalTbl.SetValue(_T("p_admit_date"), m_szAdmitDate);
	m_hms_clinicalTbl.SetValue(_T("p_outpatient"), _T("Y"));
	m_hms_clinicalTbl.SetValue(_T("p_emergency"), _T("N"));

	//m_hms_clinicalTbl.SetValue(_T("p_IUI"), m_bIUI?_T("Y"):_T("N"));
	//m_hms_clinicalTbl.SetValue(_T("p_SCSI"), m_bSCSI?_T("Y"):_T("N"));
	m_hms_clinicalTbl.SetValue(_T("p_cancer"), _T("N"));
//	m_hms_clinicalTbl.SetValue(_T("p_cancer_time"), m_nCancerTime);
	m_hms_clinicalTbl.SetValue(_T("p_admit_icd10"), m_szAdmissionDiseaseKey);
	m_hms_clinicalTbl.SetValue(_T("p_main_disease"), m_szMainDisease);
	m_hms_clinicalTbl.SetValue(_T("p_relation_disease"), m_szRelationDisease);
	m_hms_clinicalTbl.SetValue(_T("p_pregnancy"), _T("N"));
	m_hms_clinicalTbl.SetValue(_T("p_doctor"), m_szDoctorKey);
	m_hms_clinicalTbl.SetValue(_T("p_ivf_recordno"), m_szIndeptRecord);

	m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), pMF->m_nDocumentNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_idx"), m_nIndex); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_recordno"), m_szRecordNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), m_szInDate);
	if(m_szStatus == _T("A")){
		m_hms_treatment_recordTbl.SetValue(_T("htr_status"), _T("I")); 
		//m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), pMF->GetSysDateTime());
	}
	else
		m_hms_treatment_recordTbl.SetValue(_T("htr_status"), m_szStatus);
	
	m_hms_treatment_recordTbl.SetValue(_T("htr_outpatient"), _T("Y")); 

	m_hms_treatment_recordTbl.SetValue(_T("htr_mainicd"), m_szAdmissionDiseaseKey); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_maindisease"), m_szMainDisease);	
	//m_hms_treatment_recordTbl.SetValue(_T("htr_IUI"), m_bIUI?_T("Y"):_T("N")); 
	
	if(m_szWard.IsEmpty())
		m_szWard = pMF->m_szWard;
	m_hms_treatment_recordTbl.SetValue(_T("htr_ward"), m_szWard); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_brace_no"), m_nIssueNumber); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_brace_note"), m_szNote); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_brace_date"), pMF->GetSysDateTime()); 
//	m_hms_treatment_recordTbl.SetValue(_T("htr_cancer_time"), m_nCancerTime); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_doctor"), m_szDoctorKey);
	m_hms_treatment_recordTbl.SetValue(_T("htr_firstday_lastperiod"), m_szFirstDayLastPeriod);
	m_hms_treatment_recordTbl.SetValue(_T("htr_ivf_type"), m_szIVFTypeKey);
	m_hms_treatment_recordTbl.SetValue(_T("htr_regimen"), m_szRegimen);

}
void CHMSDepartmentAdmissionDialog::SetDefaultValues(){
	m_szRegimen.Empty();
	m_szIndeptRecord.Empty();
	m_szFirstDayLastPeriod.Empty();
	m_szDoctorKey.Empty();
	m_szExamDate.Empty();
	m_szExamDept.Empty();
	m_szExamRoom.Empty();
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
	m_szContactAddress.Empty();
	m_szContactPhone.Empty();
	m_szRecordNo.Empty();
	m_nTreatTime=1;
	m_szAdmitDate.Empty();
	m_szAdmitedDirectionKey = _T("2");
	m_szTransferPlaceKey = _T("2");
	m_szTransferDiagnostic.Empty();
	m_szExamineDisease.Empty();
	m_szInDate.Empty();
	m_szAdmissionDiseaseKey.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szWard.Empty();
	m_nNumInward =0;
	m_nIssueNumber = 1;
	m_szNote.Empty();
}
int CHMSDepartmentAdmissionDialog::SetMode(int nMode){
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
			m_nIssueNumber = 1;
			//m_wndIssueNumber.EnableWindow(FALSE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			//m_wndIssueNumber.EnableWindow(FALSE);
			m_nIssueNumber = 1;
			m_wndIssueNumber.EnableWindow(FALSE);
			m_wndNote.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, -1);
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
		m_wndRecordNo.EnableWindow(false);
		m_wndPrint.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSDepartmentAdmissionDialog::OnExamDateChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamDateSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamDateKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnExamDateCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnExamDeptChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamDeptSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamDeptKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnExamDeptCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnExamRoomChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamRoomSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamRoomKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnExamRoomCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnPatientNameChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnPatientNameKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnBirthDateChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnBirthDateSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnBirthDateKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnBirthDateCheckValue(){
	return 0;
} 
void CHMSDepartmentAdmissionDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnSexSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnSexSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnSexKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSexKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_sex' %s ORDER BY ss_code "), szWhere);
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDepartmentAdmissionDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnEthnicSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnEthnicSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnEthnicKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szEthnicKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_ethnic' %s ORDER BY cast(ss_code as integer) "),szWhere);
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDepartmentAdmissionDialog::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnOccupationSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnOccupationSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnOccupationKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnOccupationLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOccupation.IsSearchKey() && !m_szOccupationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szOccupationKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_occupation' %s ORDER BY cast(ss_code as integer) "),szWhere);

	m_wndOccupation.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOccupation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDepartmentAdmissionDialog::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnProvinceSelendok(){
	 
	if(m_szProvinceKey != m_szDistrictKey.Left(3))
	{
		m_szDistrictKey.Empty();
		m_szVillageKey.Empty();
		m_wndDistrict.ResetContent();
		m_wndVillage.ResetContent();
	}
}
/*void CHMSDepartmentAdmissionDialog::OnProvinceSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnProvinceKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnProvinceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProvince.SetSearchEx(true, 2);
	return pMF->LoadProvillList(&m_wndProvince, m_szProvinceKey);
}
/*void CHMSDepartmentAdmissionDialog::OnProvinceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnDistrictSelendok(){
	 if(m_szDistrictKey != m_szVillageKey.Left(5))
	{
		m_szVillageKey.Empty();
		m_wndVillage.ResetContent();
	}	 
}
/*void CHMSDepartmentAdmissionDialog::OnDistrictSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnDistrictKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	m_wndDistrict.SetSearchEx(true, 2);
	return pMF->LoadDistrictList(&m_wndDistrict, m_szProvinceKey, m_szDistrictKey);
}
/*void CHMSDepartmentAdmissionDialog::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnVillageSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnVillageSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnVillageKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	m_wndVillage.SetSearchEx(true, 2);
	return pMF->LoadVillageList(&m_wndVillage, m_szProvinceKey, m_szDistrictKey, m_szVillageKey);
}
/*void CHMSDepartmentAdmissionDialog::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDepartmentAdmissionDialog::OnDetailAddressChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnDetailAddressSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnDetailAddressKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnWorkplaceChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnWorkplaceSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnWorkplaceKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnWorkplaceCheckValue(){
	return 0;
} 
void CHMSDepartmentAdmissionDialog::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnRankSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnRankSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnRankKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty() && m_szRankKey != _T("0")){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szRankKey);
	};
	m_wndRank.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_rank' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDepartmentAdmissionDialog::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnPositionSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnPositionSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnPositionKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnPositionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPosition.IsSearchKey() && m_szPositionKey != _T("0")){
		szWhere.Format(_T(" AND ss_code='%s'"), m_szPositionKey);
	};
	m_wndPosition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_position' %s ORDER BY cast(ss_code as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPosition.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDepartmentAdmissionDialog::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRelativeChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRelativeSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRelativeKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnRelativeCheckValue(){
	return 0;
} 
void CHMSDepartmentAdmissionDialog::OnRelationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnRelationSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnRelationSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnRelationKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnRelationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndRelation, _T("hrm_relation"), m_szRelationKey);

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
/*void CHMSDepartmentAdmissionDialog::OnRelationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDepartmentAdmissionDialog::OnContactAddressChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnContactAddressSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnContactAddressKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnContactAddressCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnContactPhoneChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnContactPhoneSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnContactPhoneKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnContactPhoneCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnRecordNoChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRecordNoSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRecordNoKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnRecordNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	if(m_szRecordNo.IsEmpty())
		return 0;

	//Kiem tra xem co benh nhan nao dung ma ho so nay chua
	szSQL.Format(_T("SELECT * FROM hms_treatment_record WHERE htr_recordno='%s' "), m_szRecordNo);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		long nDocNo;
		rs.GetValue(_T("htr_docno"), nDocNo);
		if(nDocNo != m_nDocumentNo){
			CString szMsg;
			szMsg.Format(_T("This clinical record using by other document [%ld]"), nDocNo);
			m_wndRecordNo.SetToolTipMessage(szMsg);
			return -1;
		}
		rs.MoveNext();
	}
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnTreatTimeChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTreatTimeSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTreatTimeKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnTreatTimeCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnAdmitDateChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnAdmitDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT case when TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')+ interval '1' minute  > hd_enddate then 't' else 'f' end as cmpval FROM hms_doc WHERE hd_docno=%ld "), m_szAdmitDate,  m_nDocumentNo);
	rs.ExecSQL(szSQL);	
	_fmsg(_T("%s"), szSQL);
	rs.GetValue(_T("cmpval"), tmpStr);
	if(tmpStr == _T("f")){
		return -1;
	}
	if(CompareDate(m_szAdmitDate, pMF->GetSysDate()) > 0)
		return -1;

	return 0;
} 
void CHMSDepartmentAdmissionDialog::OnAdmitedDirectionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnAdmitedDirectionSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnAdmitedDirectionSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnAdmitedDirectionKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnAdmitedDirectionLoadData(){
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
/*void CHMSDepartmentAdmissionDialog::OnAdmitedDirectionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnTransferPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnTransferPlaceSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnTransferPlaceSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnTransferPlaceKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnTransferPlaceLoadData(){
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
/*void CHMSDepartmentAdmissionDialog::OnTransferPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTransferHospitalChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTransferHospitalSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTransferHospitalKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnTransferHospitalCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnTransferDiagnosticChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTransferDiagnosticSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTransferDiagnosticKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnTransferDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnExamineDiseaseChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamineDiseaseSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamineDiseaseKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnExamineDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnInDateChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnInDateSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnInDateKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnInDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	CDateTime dtInDate, dtCurrent, dtEndDate;
	dtCurrent.ParseDateTime(pMF->GetSysDateTime());
	dtInDate.ParseDateTime(m_szInDate);
	if(m_nIndex > 1)
		szSQL.Format(_T("SELECT trunc(htr_dischargedate, 'MI') as cmpdate FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d"), m_nDocumentNo, m_nIndex - 1);
	else
		szSQL.Format(_T("SELECT trunc(hd_enddate, 'MI') as cmpdate FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("cmpdate"), tmpStr);
	dtEndDate.ParseDateTime(tmpStr);
	if(dtInDate < dtEndDate)
	{
		AfxMessageBox(_T("Ngày vào viện nhỏ hơn ngày kết thúc khám hoặc đợt điều trị trước"));
		return -1;
	}

	if(dtInDate > dtCurrent)
	{
		AfxMessageBox(_T("Ngày vào lớn hơn ngày hiện tại"));
		return -1;
	}
	return 0;
} 
void CHMSDepartmentAdmissionDialog::OnIUISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_szRecordNo = PrepareRecordNo();	
	UpdateData(FALSE);
}
	void CHMSDepartmentAdmissionDialog::OnSCSISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDepartmentAdmissionDialog::OnCancerSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
//	m_wndCancerTime.EnableWindow(m_bCancer);
}

int CHMSDepartmentAdmissionDialog::OnCancerTimeCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	return 0;
} 

void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndAdmissionDisease, m_szAdmissionDiseaseKey);
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
/*void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDepartmentAdmissionDialog::OnMainDiseaseChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnMainDiseaseKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnRelationDiseaseChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRelationDiseaseKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnRelationDiseaseCheckValue(){
	return 0;
}

#include "HMSFastDiagnosticDialog.h"
void CHMSDepartmentAdmissionDialog::OnRelationDiseaseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CHMSFastDiagnosticDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nPatientNo = pMF->m_nPatientNo;
	if(dlg.DoModal() == IDOK)
	{
		m_szRelationDisease = dlg.m_szConclusion;
		UpdateData(FALSE);
	}
	return;
}

/*void CHMSDepartmentAdmissionDialog::OnIssueNumberChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnIssueNumberSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnIssueNumberKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnIssueNumberCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnNoteChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnNoteSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnNoteKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSDepartmentAdmissionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDepartmentAdmissionDialog();
} 
void CHMSDepartmentAdmissionDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
}


void CHMSDepartmentAdmissionDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_nDocumentNo = m_nDocumentNo;
	pMF->PrintMedicalFile(true);
}

int CHMSDepartmentAdmissionDialog::OnAddHMSDepartmentAdmissionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDepartmentAdmissionDialog::OnEditHMSDepartmentAdmissionDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDepartmentAdmissionDialog::OnDeleteHMSDepartmentAdmissionDialog(){
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
 		OnCancelHMSDepartmentAdmissionDialog();
 	}
	return 0;
}
int CHMSDepartmentAdmissionDialog::OnSaveHMSDepartmentAdmissionDialog(){
 	//if(GetMode() != VM_ADD || GetMode() != VM_EDIT) 
 	//	return -1; 

	/*if(OnRecordNoCheckValue() < 0)
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
		if(szStatus != _T("T"))
			szStatus = _T("I");

		rs.GetValue(_T("hcr_patientno"), nPatientNo);
	}	
	else
	{
		return 0;
	}
	/*if(m_bCancer)
	{
		szSQL.Format(_T("SELECT coalesce(max(hcr_cancer_time),0)+1 ") \
			_T("FROM hms_clinical_record ") \
			_T("WHERE hcr_patientno=%ld and hcr_docno < %ld and hcr_status='T' "),
			nPatientNo, m_nDocumentNo);
		CRecord rsx(&pMF->m_db);
		rsx.ExecSQL(szSQL);
		nCancerTime = rsx.GetIntValue();
	}*/

	if(!m_bRegisted && m_szCurStatus == _T("A") && m_nIndex == 1)
	{
		m_szRecordNo = PrepareRecordNo(_T("Y"));
		m_hms_treatment_recordTbl.SetValue(_T("htr_recordno"), m_szRecordNo);
		m_hms_clinicalTbl.SetValue(_T("p_recordno"), m_szRecordNo);
		m_hms_clinicalTbl.SetValue(_T("p_numinward"), m_nNumInward);
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
		szCancer = _T("N");

		szSQL.Format(_T("HMS_PATIENT_UPDATE(%s)"), m_hms_patientTbl.FormatSQL());
		pMF->ExecDML(szSQL);

		//szSQL.Format(_T("HMS_CLINICAL_CREATE_ADMISSION2(%s)"), m_hms_clinicalTbl.FormatSQL());
		szSQL.Format(_T("HMS_CLINICAL_CREATE_ADMISSION3(%s)"), m_hms_clinicalTbl.FormatSQL());
_tprintf(_T("\r\n%s"), szSQL);
		pMF->ExecDML(szSQL);

		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSDepartmentAdmissionDialog::OnCancelHMSDepartmentAdmissionDialog(){
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
int CHMSDepartmentAdmissionDialog::OnHMSDepartmentAdmissionDialogListLoadData(){
	return 0;
}

bool CHMSDepartmentAdmissionDialog::CheckRollbackDocument(int m_nDocno){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSuggestion, szIndept, szStatus;
	CString szPrefix;
	szSQL.Format(_T(" SELECT hd_suggestion, hd_indept, hd_status from hms_doc WHERE hd_docno=%d "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hd_suggestion"), szSuggestion);
		rs.GetValue(_T("hd_indept"),szIndept);
		rs.GetValue(_T("hd_Status"),szStatus);
	}
	if (szSuggestion==_T("A") && szStatus ==_T("T") && szIndept.GetLength() > 0) 
		return true;

	return false;

}


CString CHMSDepartmentAdmissionDialog::PrepareRecordNo(CString szInc){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szSuggestion, szIndept, szStatus;
	CString szPrefix, szRecordNo;
	szPrefix.Empty();
	szWhere.Empty();
	//Goi ham hms_create_recordno trong ham nay da kiem tra neu co so benh an thi return so do roi
	//Truong hop muon sua so benh an sang so khac phai update hcr_numinward=1 roi moi update duoc
	szSQL.Format(_T("HMS_CREATE_RECORDNO(%ld,'%s','%s')"), m_nDocumentNo, _T("Y"), szInc);
	szRecordNo =  pMF->ExecDML(szSQL);
	int n = szRecordNo.Find(_T("-"));
	if(n > 0)
	{
		m_nNumInward = str2long(szRecordNo.Mid(n+1));
	}
	//
	return szRecordNo;
	
}

CString CHMSDepartmentAdmissionDialog::PreparePrefix(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szPrefix, szWhere;
	szPrefix = _T("NGT");
	TCHAR cObjectType = m_szObjectType[0];
	switch (cObjectType)
	{
		case _T('S'):
			szPrefix += _T("DV");
			break;
		case _T('P'):
			szPrefix += _T("CS");
			break;
		case _T('C'): 
			szPrefix += _T("TE");
			break;
		case _T('D'):
			szPrefix+=m_nObject==8?_T("BAN"):_T("QUAN");
			break;
		case _T('I'):
			szPrefix+=m_nObject==9?_T("TE"):_T("BH");
			break;
	}
	return szPrefix;
}

long CHMSDepartmentAdmissionDialog::PrepareNumber(CString szPrefix){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	long nAdmitNumber = 0;
	szWhere.Format(_T(" AND substr(hcr_recordno, 0, instr(hcr_recordno, '-')-1) = '%s'"), szPrefix);		
	
	szSQL.Format(_T(" SELECT COALESCE(MAX(hcr_numinward),0)+1") \
	_T(" FROM hms_clinical_record") \
	_T(" LEFT JOIN hms_treatment_record") \
	_T(" ON(htr_docno=hcr_docno)") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hcr_docno=hd_docno)") \
	_T(" LEFT JOIN hms_object") \
	_T(" ON(CAST(ho_id AS INTEGER)           =hd_object)") \
	_T(" WHERE htr_outpatient                  = '%s' %s") \
	_T(" AND extract(YEAR FROM hcr_admitdate)=extract(YEAR FROM SYSDATE)"), _T("Y"), szWhere);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		nAdmitNumber = (long)rs.GetDoubleValue();
		m_nTreatTime = 1;
	}
	return nAdmitNumber;
}


BOOL CHMSDepartmentAdmissionDialog::IsRegister(long nDocumentNo, CString& szRecordNo, long& nNumInward){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT") \
			_T("   hcr_numinward as numinward, hcr_recordno as recordno") \
			_T(" FROM   hms_clinical_record") \
			_T(" WHERE  hcr_docno IN") \
			_T("        (SELECT") \
			_T("           hd_docno") \
			_T("         FROM   hms_doc") \
			_T("         WHERE  hd_patientno IN") \
			_T("                (SELECT") \
			_T("                   hd_patientno") \
			_T("                 FROM   hms_doc") \
			_T("                 WHERE  hd_docno=%ld))") \
			_T("        AND Substr(hcr_recordno, 1, 3)='NGT'") \
			_T("		AND extract(year from hcr_admitdate)=extract(year from sysdate)"), nDocumentNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("numinward"), nNumInward);
		rs.GetValue(_T("recordno"), szRecordNo);
		return true;
	}
	return false;
}

long CHMSDepartmentAdmissionDialog::OnDoctorLoadData()
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


long CHMSDepartmentAdmissionDialog::OnIVFTypeLoadData()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndIVFType, _T("IVF_TYPE"), m_szIVFTypeKey);
}