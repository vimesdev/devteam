#include "HMSDepartmentAdmissionDialog.h"
#include "MainFrm.h"
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
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnAdmissionNoChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionNoChange();
} */
/*static void _OnAdmissionNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionNoSetfocus();} */ 
/*static void _OnAdmissionNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionNoKillfocus();
} */
static int _OnAdmissionNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionNoCheckValue();
} 
/*static void _OnTimesOfAdmisionChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTimesOfAdmisionChange();
} */
/*static void _OnTimesOfAdmisionSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTimesOfAdmisionSetfocus();} */ 
/*static void _OnTimesOfAdmisionKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnTimesOfAdmisionKillfocus();
} */
static int _OnTimesOfAdmisionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnTimesOfAdmisionCheckValue();
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
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSDepartmentAdmissionDialog*)pWnd)->OnOutpatientSelect();
}
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CHMSDepartmentAdmissionDialog*)pWnd)->OnEmergencySelect();
}
static void _OnCancerSelectFnc(CWnd *pWnd){
	 ((CHMSDepartmentAdmissionDialog*)pWnd)->OnCancerSelect();
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
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDepartmentAdmissionDialog *pVw = (CHMSDepartmentAdmissionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDepartmentAdmissionDialog *pVw = (CHMSDepartmentAdmissionDialog *)pWnd;
	pVw->OnCancelSelect();
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
CHMSDepartmentAdmissionDialog::CHMSDepartmentAdmissionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 817;
	m_nDlgHeight = 742;
	SetDefaultValues();
}
CHMSDepartmentAdmissionDialog::~CHMSDepartmentAdmissionDialog(){
}
void CHMSDepartmentAdmissionDialog::OnCreateComponents(){
	m_wndContactInformation.Create(this, _T("Contact Information"), 5, 5, 755, 300);
	m_wndDepartmentAdmitedInformation.Create(this, _T("Department Admited Information"), 5, 485, 755, 650);
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
	m_wndDetailAddressLabel.Create(this, _T("Address"), 370, 150, 490, 175);
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
	m_wndAddressLabel.Create(this, _T("Contact Address"), 10, 270, 160, 295);
	m_wndAddress.Create(this,165, 270, 365, 295); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 370, 270, 490, 295);
	m_wndPhone.Create(this,495, 270, 750, 295); 
	m_wndAdmissionNoLabel.Create(this, _T("Admission No"), 10, 330, 160, 355);
	m_wndAdmissionNo.Create(this,165, 330, 265, 355); 
	m_wndTimes.Create(this, _T("Times"), 270, 330, 330, 355);
	m_wndTimesOfAdmision.Create(this,335, 330, 365, 355); 
	m_wndAdmisionDateLabel.Create(this, _T("Admission Date"), 370, 330, 490, 355);
	m_wndAdmitDate.Create(this,495, 330, 655, 355); 
	m_wndAdmitedDirectionLabel.Create(this, _T("Admited Direction"), 10, 360, 160, 385);
	m_wndAdmitedDirection.Create(this,165, 360, 365, 385); 
	m_wndTransferPlaceLabel.Create(this, _T("Transfer Place"), 370, 360, 490, 385);
	m_wndTransferPlace.Create(this,495, 360, 749, 385); 
	m_wndTransferHospitalLabel.Create(this, _T("TransferHospital"), 10, 390, 160, 415);
	m_wndTransferHospital.Create(this,165, 390, 751, 415); 
	m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 10, 420, 160, 445);
	m_wndTransferDiagnostic.Create(this,165, 420, 749, 445); 
	m_wndExamineDiseaseLabel.Create(this, _T("Examine Disease"), 10, 450, 160, 475);
	m_wndExamineDisease.Create(this,165, 450, 749, 475); 
	m_wndInDateLabel.Create(this, _T("In Date"), 10, 510, 160, 535);
	m_wndInDate.Create(this,165, 510, 290, 535); 
	m_wndOutpatient.Create(this, _T("Outpatient treat"), 295, 510, 445, 535);
	m_wndEmergency.Create(this, _T("Emergency"), 450, 510, 600, 535);
	m_wndCancer.Create(this, _T("Cancer"), 605, 510, 749, 535);
	m_wndAdmissionDiseaseLabel.Create(this, _T("Admission Disease"), 10, 540, 160, 565);
	m_wndAdmissionDisease.Create(this,165, 540, 749, 565); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 570, 160, 595);
	m_wndMainDisease.Create(this,165, 570, 749, 615); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 620, 160, 645);
	m_wndRelationDisease.Create(this,165, 620, 749, 645); 
	m_wndSave.Create(this, _T("&Save"), 600, 655, 675, 680);
	m_wndCancel.Create(this, _T("&Cancel"), 680, 655, 755, 680);

}
void CHMSDepartmentAdmissionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExamDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExamDate.SetCheckValue(true);
	m_wndExamDept.SetLimitText(35);
	m_wndExamDept.SetCheckValue(true);
	m_wndExamRoom.SetLimitText(35);
	m_wndExamRoom.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
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
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(35);
	m_wndDetailAddress.SetLimitText(35);
	m_wndDetailAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(35);
	m_wndWorkplace.SetCheckValue(true);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(35);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(35);
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
	m_wndTransferHospital.SetLimitText(35);
	m_wndTransferHospital.SetCheckValue(true);
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


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOccupation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOccupation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProvince.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProvince.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);









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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDepartmentAdmissionDialog::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndAdmissionNo.GetDlgCtrlID(), m_szAdmissionNo);
	DDX_Text(pDX, m_wndTimesOfAdmision.GetDlgCtrlID(), m_nTimesOfAdmision);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndAdmitedDirection.GetDlgCtrlID(), m_szAdmitedDirectionKey);
	DDX_TextEx(pDX, m_wndTransferPlace.GetDlgCtrlID(), m_szTransferPlaceKey);
	DDX_Text(pDX, m_wndTransferHospital.GetDlgCtrlID(), m_szTransferHospital);
	DDX_Text(pDX, m_wndTransferDiagnostic.GetDlgCtrlID(), m_szTransferDiagnostic);
	DDX_Text(pDX, m_wndExamineDisease.GetDlgCtrlID(), m_szExamineDisease);
	DDX_TextEx(pDX, m_wndInDate.GetDlgCtrlID(), m_szInDate);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_Check(pDX, m_wndCancer.GetDlgCtrlID(), m_bCancer);
	DDX_TextEx(pDX, m_wndAdmissionDisease.GetDlgCtrlID(), m_szAdmissionDiseaseKey);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);

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
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("AdmissionNo")] =  m_szAdmissionNo;
	m_jData[_T("TimesOfAdmision")] =  m_nTimesOfAdmision;
	m_jData[_T("AdmitDate")] =  m_szAdmitDate;
	m_jData[_T("AdmitedDirection")] =  m_szAdmitedDirectionKey;
	m_jData[_T("TransferPlace")] =  m_szTransferPlaceKey;
	m_jData[_T("TransferHospital")] =  m_szTransferHospital;
	m_jData[_T("TransferDiagnostic")] =  m_szTransferDiagnostic;
	m_jData[_T("ExamineDisease")] =  m_szExamineDisease;
	m_jData[_T("InDate")] =  m_szInDate;
	m_jData[_T("Outpatient")] =  m_bOutpatient;
	m_jData[_T("Emergency")] =  m_bEmergency;
	m_jData[_T("Cancer")] =  m_bCancer;
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
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("AdmissionNo")].GetValue(m_szAdmissionNo);
	m_jData[_T("TimesOfAdmision")].GetValue(m_nTimesOfAdmision);
	m_jData[_T("AdmitDate")].GetValue(m_szAdmitDate);
	m_jData[_T("AdmitedDirection")].GetValue(m_szAdmitedDirectionKey);
	m_jData[_T("TransferPlace")].GetValue(m_szTransferPlaceKey);
	m_jData[_T("TransferHospital")].GetValue(m_szTransferHospital);
	m_jData[_T("TransferDiagnostic")].GetValue(m_szTransferDiagnostic);
	m_jData[_T("ExamineDisease")].GetValue(m_szExamineDisease);
	m_jData[_T("InDate")].GetValue(m_szInDate);
	m_jData[_T("Outpatient")].GetValue(m_bOutpatient);
	m_jData[_T("Emergency")].GetValue(m_bEmergency);
	m_jData[_T("Cancer")].GetValue(m_bCancer);
	m_jData[_T("AdmissionDisease")].GetValue(m_szAdmissionDiseaseKey);
	m_jData[_T("MainDisease")].GetValue(m_szMainDisease);
	m_jData[_T("RelationDisease")].GetValue(m_szRelationDisease);
	}

}
void CHMSDepartmentAdmissionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDepartmentAdmissionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDepartmentAdmissionDialog::SetDefaultValues(){

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
	m_szAddress.Empty();
	m_szPhone.Empty();
	m_szAdmissionNo.Empty();
	m_nTimesOfAdmision=0;
	m_szAdmitDate.Empty();
	m_szAdmitedDirectionKey.Empty();
	m_szTransferPlaceKey.Empty();
	m_szTransferHospital.Empty();
	m_szTransferDiagnostic.Empty();
	m_szExamineDisease.Empty();
	m_szInDate.Empty();
	m_bOutpatient=FALSE;
	m_bEmergency=FALSE;
	m_bCancer=FALSE;
	m_szAdmissionDiseaseKey.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();

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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDepartmentAdmissionDialog::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnProvinceSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnProvinceSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnProvinceKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnProvinceLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDepartmentAdmissionDialog::OnProvinceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnDistrictSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnDistrictSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnDistrictKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnDistrictLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
/*void CHMSDepartmentAdmissionDialog::OnAddressChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAddressSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAddressKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnPhoneChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnPhoneSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnPhoneKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnPhoneCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnAdmissionNoChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAdmissionNoSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAdmissionNoKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnAdmissionNoCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnTimesOfAdmisionChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTimesOfAdmisionSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnTimesOfAdmisionKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnTimesOfAdmisionCheckValue(){
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnAdmitDateChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnAdmitDateCheckValue(){
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
	return 0;
} 
	void CHMSDepartmentAdmissionDialog::OnOutpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDepartmentAdmissionDialog::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDepartmentAdmissionDialog::OnCancerSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
void CHMSDepartmentAdmissionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
 		//OnHMSDepartmentAdmissionDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
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
