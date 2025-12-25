#include "AdmissionRegistration.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnNumInwardChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnNumInwardChange();
} */
/*static void _OnNumInwardSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnNumInwardSetfocus();} */ 
/*static void _OnNumInwardKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnNumInwardKillfocus();
} */
static int _OnNumInwardCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnNumInwardCheckValue();
} 
/*static void _OnInwardDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnInwardDateChange();
} */
/*static void _OnInwardDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnInwardDateSetfocus();} */ 
/*static void _OnInwardDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnInwardDateKillfocus();
} */
static int _OnInwardDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnInwardDateCheckValue();
} 
/*static void _OnInwardTimeChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnInwardTimeChange();
} */
/*static void _OnInwardTimeSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnInwardTimeSetfocus();} */ 
/*static void _OnInwardTimeKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnInwardTimeKillfocus();
} */
static int _OnInwardTimeCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnInwardTimeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnNameCheckValue();
} 
/*static void _OnTreatmentDeptChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTreatmentDeptChange();
} */
/*static void _OnTreatmentDeptSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTreatmentDeptSetfocus();} */ 
/*static void _OnTreatmentDeptKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTreatmentDeptKillfocus();
} */
static int _OnTreatmentDeptCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnTreatmentDeptCheckValue();
} 
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnRoomIDChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRoomIDChange();
} */
/*static void _OnRoomIDSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRoomIDSetfocus();} */ 
/*static void _OnRoomIDKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRoomIDKillfocus();
} */
static int _OnRoomIDCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnRoomIDCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDeptAddNew();
}*/
static void _OnSearchSelectFnc(CWnd *pWnd){
	CAdmissionRegistration *pVw = (CAdmissionRegistration *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	 ((CAdmissionRegistration*)pWnd)->OnAllSelect();
}
static void _OnWaitingSelectFnc(CWnd *pWnd){
	 ((CAdmissionRegistration*)pWnd)->OnWaitingSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CAdmissionRegistration*)pWnd)->OnOutpatientSelect();
}
static void _OnCreatedSelectFnc(CWnd *pWnd){
	 ((CAdmissionRegistration*)pWnd)->OnCreatedSelect();
}
static void _OnInwardSelectFnc(CWnd *pWnd){
	 ((CAdmissionRegistration*)pWnd)->OnInwardSelect();
}
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnEthnicAddNew();
}*/
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnOccupationAddNew();
}*/
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnVillageAddNew();
}*/
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnWorkplaceCheckValue();
} 
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRankAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnRelativeChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelativeChange();
} */
/*static void _OnRelativeSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelativeSetfocus();} */ 
/*static void _OnRelativeKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnRelativeCheckValue();
} 
static void _OnRelationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnRelationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRelationSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelationSelendok();
}
/*static void _OnRelationSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelationKillfocus();
}*/
/*static void _OnRelationKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelationKillfocus();
}*/
static long _OnRelationLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnRelationLoadData();
}
/*static void _OnRelationAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelationAddNew();
}*/
/*static void _OnRelPhoneChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelPhoneChange();
} */
/*static void _OnRelPhoneSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelPhoneSetfocus();} */ 
/*static void _OnRelPhoneKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelPhoneKillfocus();
} */
static int _OnRelPhoneCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnRelPhoneCheckValue();
} 
/*static void _OnRelAddressChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelAddressChange();
} */
/*static void _OnRelAddressSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelAddressSetfocus();} */ 
/*static void _OnRelAddressKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnRelAddressKillfocus();
} */
static int _OnRelAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnRelAddressCheckValue();
} 
/*static void _OnTransferHospitalChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTransferHospitalChange();
} */
/*static void _OnTransferHospitalSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTransferHospitalSetfocus();} */ 
/*static void _OnTransferHospitalKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTransferHospitalKillfocus();
} */
static int _OnTransferHospitalCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnTransferHospitalCheckValue();
} 
/*static void _OnTransferDiagnosticChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTransferDiagnosticChange();
} */
/*static void _OnTransferDiagnosticSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTransferDiagnosticSetfocus();} */ 
/*static void _OnTransferDiagnosticKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnTransferDiagnosticKillfocus();
} */
static int _OnTransferDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnTransferDiagnosticCheckValue();
} 
/*static void _OnICDDiagnosticChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnICDDiagnosticChange();
} */
/*static void _OnICDDiagnosticSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnICDDiagnosticSetfocus();} */ 
/*static void _OnICDDiagnosticKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnICDDiagnosticKillfocus();
} */
static int _OnICDDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnICDDiagnosticCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnConclusionCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnObjChange();
} */
/*static void _OnObjSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnObjSetfocus();} */ 
/*static void _OnObjKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnObjKillfocus();
} */
static int _OnObjCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnObjCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnCardNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdmissionRegistration*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdmissionRegistration*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdmissionRegistration*)pWnd)->OnListDeleteItem();
} 
static long _OnLogListLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration*)pWnd)->OnLogListLoadData();
} 
static void _OnLogListDblClickFnc(CWnd *pWnd){
	((CAdmissionRegistration*)pWnd)->OnLogListDblClick();
} 
static void _OnLogListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdmissionRegistration*)pWnd)->OnLogListSelectChange(nOldItem, nNewItem);
} 
static int _OnLogListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdmissionRegistration*)pWnd)->OnLogListDeleteItem();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CAdmissionRegistration *pVw = (CAdmissionRegistration *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdmissionRegistration *pVw = (CAdmissionRegistration *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAdmissionRegistration *pVw = (CAdmissionRegistration *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintExmSheetSelectFnc(CWnd *pWnd){
	CAdmissionRegistration *pVw = (CAdmissionRegistration *)pWnd;
	pVw->OnPrintExmSheetSelect();
} 
static void _OnPrintFilesSelectFnc(CWnd *pWnd){
	CAdmissionRegistration *pVw = (CAdmissionRegistration *)pWnd;
	pVw->OnPrintFilesSelect();
} 
static void _OnPrintFoodSheetSelectFnc(CWnd *pWnd){
	CAdmissionRegistration *pVw = (CAdmissionRegistration *)pWnd;
	pVw->OnPrintFoodSheetSelect();
} 
static void _OnLunchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnLunchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLunchSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnLunchSelendok();
}
/*static void _OnLunchSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnLunchKillfocus();
}*/
/*static void _OnLunchKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnLunchKillfocus();
}*/
static long _OnLunchLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnLunchLoadData();
}
/*static void _OnLunchAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnLunchAddNew();
}*/
static void _OnDinnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistration* )pWnd)->OnDinnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDinnerSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDinnerSelendok();
}
/*static void _OnDinnerSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDinnerKillfocus();
}*/
/*static void _OnDinnerKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDinnerKillfocus();
}*/
static long _OnDinnerLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnDinnerLoadData();
}
/*static void _OnDinnerAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnDinnerAddNew();
}*/
/*static void _OnEatingDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnEatingDateChange();
} */
/*static void _OnEatingDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnEatingDateSetfocus();} */ 
/*static void _OnEatingDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistration *)pWnd)->OnEatingDateKillfocus();
} */
static int _OnEatingDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistration *)pWnd)->OnEatingDateCheckValue();
} 
static int _OnAddAdmissionRegistrationFnc(CWnd *pWnd){
	 return ((CAdmissionRegistration*)pWnd)->OnAddAdmissionRegistration();
} 
static int _OnEditAdmissionRegistrationFnc(CWnd *pWnd){
	 return ((CAdmissionRegistration*)pWnd)->OnEditAdmissionRegistration();
} 
static int _OnDeleteAdmissionRegistrationFnc(CWnd *pWnd){
	 return ((CAdmissionRegistration*)pWnd)->OnDeleteAdmissionRegistration();
} 
static int _OnSaveAdmissionRegistrationFnc(CWnd *pWnd){
	 return ((CAdmissionRegistration*)pWnd)->OnSaveAdmissionRegistration();
} 
static int _OnCancelAdmissionRegistrationFnc(CWnd *pWnd){
	 return ((CAdmissionRegistration*)pWnd)->OnCancelAdmissionRegistration();
} 
CAdmissionRegistration::CAdmissionRegistration(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CAdmissionRegistration::~CAdmissionRegistration(){
}
void CAdmissionRegistration::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 294, 5, 1014, 510);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 290, 210);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 300, 29, 425, 54);
	m_wndFromLabel.Create(this, _T("From"), 10, 30, 65, 55);
	m_wndFromDate.Create(this,70, 30, 150, 55); 
	m_wndToLabel.Create(this, _T("To"), 150, 30, 195, 55);
	m_wndToDate.Create(this,200, 30, 285, 55); 
	m_wndDocNo.Create(this,430, 30, 505, 55); 
	m_wndNumInwardLabel.Create(this, _T("Num Inward"), 510, 30, 580, 55);
	m_wndNumInward.Create(this,585, 30, 655, 55); 
	m_wndInwardDateLabel.Create(this, _T("Inward Date"), 660, 30, 785, 55);
	m_wndInwardDate.Create(this,790, 30, 880, 55); 
	m_wndInwardTimeLabel.Create(this, _T("Time Idx"), 885, 30, 955, 55);
	m_wndInwardTime.Create(this,960, 30, 1010, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 65, 85);
	m_wndName.Create(this,70, 60, 285, 85); 
	m_wndTreatmentDeptLabel.Create(this, _T("Treatment Dept"), 300, 60, 425, 85);
	m_wndTreatmentDept.Create(this,430, 60, 655, 85); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 660, 60, 785, 85);
	m_wndExamDate.Create(this,790, 60, 880, 85); 
	m_wndRoomIDLabel.Create(this, _T("Room"), 885, 60, 955, 85);
	m_wndRoomID.Create(this,960, 60, 1010, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 65, 145);
	m_wndDept.Create(this,70, 120, 260, 145); 
	m_wndSearch.Create(this, _T("@"), 265, 120, 285, 145);
	m_wndAll.Create(this, _T("All"), 10, 150, 100, 175);
	m_wndWaiting.Create(this, _T("Waiting"), 108, 150, 188, 175);
	m_wndOutpatient.Create(this, _T("Outpatient"), 195, 150, 285, 175);
	m_wndCreated.Create(this, _T("Created"), 10, 180, 100, 205);
	m_wndInward.Create(this, _T("Inward"), 108, 180, 188, 205);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 300, 90, 425, 115);
	m_wndPatientName.Create(this,430, 90, 655, 115); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 660, 90, 785, 115);
	m_wndBirthDate.Create(this,790, 90, 880, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 885, 90, 955, 115);
	m_wndSex.Create(this,960, 90, 1010, 115); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 300, 120, 425, 145);
	m_wndEthnic.Create(this,430, 120, 655, 145); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 660, 120, 785, 145);
	m_wndOccupation.Create(this,790, 120, 1010, 145); 
	m_wndProvinceLabel.Create(this, _T("Province"), 300, 150, 425, 175);
	m_wndProvince.Create(this,430, 150, 655, 175); 
	m_wndDistrictLabel.Create(this, _T("District"), 660, 150, 785, 175);
	m_wndDistrict.Create(this,790, 150, 1010, 175); 
	m_wndVillageLabel.Create(this, _T("Village"), 300, 180, 425, 205);
	m_wndVillage.Create(this,430, 180, 655, 205); 
	m_wndDetailAddressLabel.Create(this, _T("Detail Address"), 660, 180, 785, 205);
	m_wndDetailAddress.Create(this,790, 180, 1010, 205); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 300, 210, 425, 235);
	m_wndWorkplace.Create(this,430, 210, 1010, 235); 
	m_wndRankLabel.Create(this, _T("Rank"), 300, 240, 425, 265);
	m_wndRank.Create(this,430, 240, 656, 265); 
	m_wndPositionLabel.Create(this, _T("Position"), 660, 240, 785, 265);
	m_wndPosition.Create(this,790, 240, 1010, 265); 
	m_wndRelativeLabel.Create(this, _T("Relative"), 300, 270, 425, 295);
	m_wndRelative.Create(this,430, 270, 655, 295); 
	m_wndRelationLabel.Create(this, _T("Relation"), 660, 270, 785, 295);
	m_wndRelation.Create(this,790, 270, 1010, 295); 
	m_wndRelPhoneLabel.Create(this, _T("Rel Phone"), 300, 300, 425, 325);
	m_wndRelPhone.Create(this,430, 300, 656, 325); 
	m_wndRelAddressLabel.Create(this, _T("Rel Address"), 660, 300, 785, 325);
	m_wndRelAddress.Create(this,790, 300, 1010, 325); 
	m_wndTranferHospitalLabel.Create(this, _T("From Hospital"), 300, 330, 425, 355);
	m_wndTransferHospital.Create(this,430, 330, 1010, 355); 
	m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 300, 360, 425, 385);
	m_wndTransferDiagnostic.Create(this,430, 360, 1010, 385); 
	m_wndICDDiagnosticLabel.Create(this, _T("ICD10 Diagnostic"), 300, 390, 425, 415);
	m_wndICDDiagnostic.Create(this,430, 390, 1010, 415); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 300, 420, 425, 445);
	m_wndConclusion.Create(this,430, 420, 1010, 445); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 65, 115);
	m_wndObject.Create(this,70, 90, 285, 115); 
	m_wndObjLabel.Create(this, _T("Object"), 300, 450, 425, 475);
	m_wndObj.Create(this,430, 450, 655, 475); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 660, 450, 785, 475);
	m_wndCardNo.Create(this,790, 450, 1010, 475); 
	m_wndList.Create(this,5, 215, 290, 585); 
	m_wndLogList.Create(this,295, 515, 1015, 585); 
	m_wndUpdate.Create(this, _T("&Update"), 344, 590, 439, 615);
	m_wndSave.Create(this, _T("&Save"), 444, 590, 539, 615);
	m_wndCancel.Create(this, _T("&Cancel"), 544, 590, 639, 615);
	m_wndPrintExmSheet.Create(this, _T("Print exm sheet"), 645, 590, 765, 615);
	m_wndPrintFiles.Create(this, _T("Print Files"), 770, 590, 890, 615);
	m_wndPrintFoodSheet.Create(this, _T("Print food sheet"), 895, 590, 1015, 615);
	m_wndLunchLabel.Create(this, _T("Lunch"), 300, 480, 425, 505);
	m_wndLunch.Create(this,430, 480, 655, 505); 
	m_wndDinnerLabel.Create(this, _T("Dinner"), 660, 480, 785, 505);
	m_wndDinner.Create(this,790, 480, 1010, 505); 
	m_wndEatingDateLabel.Create(this, _T("Eating Date"), 5, 589, 95, 614);
	m_wndEatingDate.Create(this,100, 589, 190, 614); 

}
void CAdmissionRegistration::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocNo.SetLimitText(1024);
	m_wndDocNo.SetCheckValue(true);
	m_wndNumInward.SetLimitText(1024);
	m_wndNumInward.SetCheckValue(true);
	m_wndInwardDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndInwardDate.SetCheckValue(true);
	m_wndInwardTime.SetLimitText(1024);
	m_wndInwardTime.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndTreatmentDept.SetLimitText(1024);
	m_wndTreatmentDept.SetCheckValue(true);
	m_wndExamDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndExamDate.SetCheckValue(true);
	m_wndRoomID.SetLimitText(1024);
	m_wndRoomID.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);
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
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndObj.SetLimitText(1024);
	m_wndObj.SetCheckValue(true);
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetCheckValue(true);
	m_wndLunch.SetCheckValue(true);
	m_wndLunch.LimitText(1024);
	m_wndDinner.SetCheckValue(true);
	m_wndDinner.LimitText(1024);
	m_wndEatingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndEatingDate.SetCheckValue(true);































}
void CAdmissionRegistration::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
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
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
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
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndCreated.SetEvent(WE_CLICK, _OnCreatedSelectFnc);
	m_wndInward.SetEvent(WE_CLICK, _OnInwardSelectFnc);
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndObj.SetEvent(WE_CHANGE, _OnObjChangeFnc);
	//m_wndObj.SetEvent(WE_SETFOCUS, _OnObjSetfocusFnc);
	//m_wndObj.SetEvent(WE_KILLFOCUS, _OnObjKillfocusFnc);
	m_wndObj.SetEvent(WE_CHECKVALUE, _OnObjCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndLogList.SetEvent(WE_SELCHANGE, _OnLogListSelectChangeFnc);
	m_wndLogList.SetEvent(WE_LOADDATA, _OnLogListLoadDataFnc);
	m_wndLogList.SetEvent(WE_DBLCLICK, _OnLogListDblClickFnc);
	m_wndLogList.AddEvent(1, _T("Delete"), _OnLogListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintExmSheet.SetEvent(WE_CLICK, _OnPrintExmSheetSelectFnc);
	m_wndPrintFiles.SetEvent(WE_CLICK, _OnPrintFilesSelectFnc);
	m_wndPrintFoodSheet.SetEvent(WE_CLICK, _OnPrintFoodSheetSelectFnc);
	m_wndLunch.SetEvent(WE_SELENDOK, _OnLunchSelendokFnc);
	//m_wndLunch.SetEvent(WE_SETFOCUS, _OnLunchSetfocusFnc);
	//m_wndLunch.SetEvent(WE_KILLFOCUS, _OnLunchKillfocusFnc);
	m_wndLunch.SetEvent(WE_SELCHANGE, _OnLunchSelectChangeFnc);
	m_wndLunch.SetEvent(WE_LOADDATA, _OnLunchLoadDataFnc);
	//m_wndLunch.SetEvent(WE_ADDNEW, _OnLunchAddNewFnc);
	m_wndDinner.SetEvent(WE_SELENDOK, _OnDinnerSelendokFnc);
	//m_wndDinner.SetEvent(WE_SETFOCUS, _OnDinnerSetfocusFnc);
	//m_wndDinner.SetEvent(WE_KILLFOCUS, _OnDinnerKillfocusFnc);
	m_wndDinner.SetEvent(WE_SELCHANGE, _OnDinnerSelectChangeFnc);
	m_wndDinner.SetEvent(WE_LOADDATA, _OnDinnerLoadDataFnc);
	//m_wndDinner.SetEvent(WE_ADDNEW, _OnDinnerAddNewFnc);
	//m_wndEatingDate.SetEvent(WE_CHANGE, _OnEatingDateChangeFnc);
	//m_wndEatingDate.SetEvent(WE_SETFOCUS, _OnEatingDateSetfocusFnc);
	//m_wndEatingDate.SetEvent(WE_KILLFOCUS, _OnEatingDateKillfocusFnc);
	m_wndEatingDate.SetEvent(WE_CHECKVALUE, _OnEatingDateCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdmissionRegistrationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdmissionRegistrationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdmissionRegistrationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdmissionRegistrationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdmissionRegistrationFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdmissionRegistration::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndNumInward.GetDlgCtrlID(), m_szNumInward);
	DDX_TextEx(pDX, m_wndInwardDate.GetDlgCtrlID(), m_szInwardDate);
	DDX_Text(pDX, m_wndInwardTime.GetDlgCtrlID(), m_nInwardTime);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndTreatmentDept.GetDlgCtrlID(), m_szTreatmentDept);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndRoomID.GetDlgCtrlID(), m_nRoomID);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndAll.GetDlgCtrlID(), m_bAll);
	DDX_Check(pDX, m_wndWaiting.GetDlgCtrlID(), m_bWaiting);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndCreated.GetDlgCtrlID(), m_bCreated);
	DDX_Check(pDX, m_wndInward.GetDlgCtrlID(), m_bInward);
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
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObj.GetDlgCtrlID(), m_szObj);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndLunch.GetDlgCtrlID(), m_szLunchKey);
	DDX_TextEx(pDX, m_wndDinner.GetDlgCtrlID(), m_szDinnerKey);
	DDX_TextEx(pDX, m_wndEatingDate.GetDlgCtrlID(), m_szEatingDate);

}
void CAdmissionRegistration::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdmissionRegistration::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdmissionRegistration::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocNo=0;
	m_szNumInward.Empty();
	m_szInwardDate.Empty();
	m_nInwardTime=0;
	m_szName.Empty();
	m_szTreatmentDept.Empty();
	m_szExamDate.Empty();
	m_nRoomID=0;
	m_szDeptKey.Empty();
	m_bAll=FALSE;
	m_bWaiting=FALSE;
	m_bOutpatient=FALSE;
	m_bCreated=FALSE;
	m_bInward=FALSE;
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
	m_szObjectKey.Empty();
	m_szObj.Empty();
	m_szCardNo.Empty();
	m_szLunchKey.Empty();
	m_szDinnerKey.Empty();
	m_szEatingDate.Empty();

}
int CAdmissionRegistration::SetMode(int nMode){
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
/*void CAdmissionRegistration::OnFromDateChange(){
	
} */
/*void CAdmissionRegistration::OnFromDateSetfocus(){
	
} */
/*void CAdmissionRegistration::OnFromDateKillfocus(){
	
} */
int CAdmissionRegistration::OnFromDateCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnToDateChange(){
	
} */
/*void CAdmissionRegistration::OnToDateSetfocus(){
	
} */
/*void CAdmissionRegistration::OnToDateKillfocus(){
	
} */
int CAdmissionRegistration::OnToDateCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnDocNoChange(){
	
} */
/*void CAdmissionRegistration::OnDocNoSetfocus(){
	
} */
/*void CAdmissionRegistration::OnDocNoKillfocus(){
	
} */
int CAdmissionRegistration::OnDocNoCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnNumInwardChange(){
	
} */
/*void CAdmissionRegistration::OnNumInwardSetfocus(){
	
} */
/*void CAdmissionRegistration::OnNumInwardKillfocus(){
	
} */
int CAdmissionRegistration::OnNumInwardCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnInwardDateChange(){
	
} */
/*void CAdmissionRegistration::OnInwardDateSetfocus(){
	
} */
/*void CAdmissionRegistration::OnInwardDateKillfocus(){
	
} */
int CAdmissionRegistration::OnInwardDateCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnInwardTimeChange(){
	
} */
/*void CAdmissionRegistration::OnInwardTimeSetfocus(){
	
} */
/*void CAdmissionRegistration::OnInwardTimeKillfocus(){
	
} */
int CAdmissionRegistration::OnInwardTimeCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnNameChange(){
	
} */
/*void CAdmissionRegistration::OnNameSetfocus(){
	
} */
/*void CAdmissionRegistration::OnNameKillfocus(){
	
} */
int CAdmissionRegistration::OnNameCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnTreatmentDeptChange(){
	
} */
/*void CAdmissionRegistration::OnTreatmentDeptSetfocus(){
	
} */
/*void CAdmissionRegistration::OnTreatmentDeptKillfocus(){
	
} */
int CAdmissionRegistration::OnTreatmentDeptCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnExamDateChange(){
	
} */
/*void CAdmissionRegistration::OnExamDateSetfocus(){
	
} */
/*void CAdmissionRegistration::OnExamDateKillfocus(){
	
} */
int CAdmissionRegistration::OnExamDateCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnRoomIDChange(){
	
} */
/*void CAdmissionRegistration::OnRoomIDSetfocus(){
	
} */
/*void CAdmissionRegistration::OnRoomIDKillfocus(){
	
} */
int CAdmissionRegistration::OnRoomIDCheckValue(){
	return 0;
} 
void CAdmissionRegistration::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnDeptSelendok(){
	 
}
/*void CAdmissionRegistration::OnDeptSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnDeptKillfocus(){
	
}*/
long CAdmissionRegistration::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistration::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistration::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CAdmissionRegistration::OnAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CAdmissionRegistration::OnWaitingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CAdmissionRegistration::OnOutpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CAdmissionRegistration::OnCreatedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CAdmissionRegistration::OnInwardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CAdmissionRegistration::OnPatientNameChange(){
	
} */
/*void CAdmissionRegistration::OnPatientNameSetfocus(){
	
} */
/*void CAdmissionRegistration::OnPatientNameKillfocus(){
	
} */
int CAdmissionRegistration::OnPatientNameCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnBirthDateChange(){
	
} */
/*void CAdmissionRegistration::OnBirthDateSetfocus(){
	
} */
/*void CAdmissionRegistration::OnBirthDateKillfocus(){
	
} */
int CAdmissionRegistration::OnBirthDateCheckValue(){
	return 0;
} 
void CAdmissionRegistration::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnSexSelendok(){
	 
}
/*void CAdmissionRegistration::OnSexSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnSexKillfocus(){
	
}*/
long CAdmissionRegistration::OnSexLoadData(){
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
/*void CAdmissionRegistration::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistration::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnEthnicSelendok(){
	 
}
/*void CAdmissionRegistration::OnEthnicSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnEthnicKillfocus(){
	
}*/
long CAdmissionRegistration::OnEthnicLoadData(){
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
/*void CAdmissionRegistration::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistration::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnOccupationSelendok(){
	 
}
/*void CAdmissionRegistration::OnOccupationSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnOccupationKillfocus(){
	
}*/
long CAdmissionRegistration::OnOccupationLoadData(){
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
/*void CAdmissionRegistration::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistration::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnProvinceSelendok(){
	 
}
/*void CAdmissionRegistration::OnProvinceSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnProvinceKillfocus(){
	
}*/
long CAdmissionRegistration::OnProvinceLoadData(){
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
/*void CAdmissionRegistration::OnProvinceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistration::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnDistrictSelendok(){
	 
}
/*void CAdmissionRegistration::OnDistrictSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnDistrictKillfocus(){
	
}*/
long CAdmissionRegistration::OnDistrictLoadData(){
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
/*void CAdmissionRegistration::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistration::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnVillageSelendok(){
	 
}
/*void CAdmissionRegistration::OnVillageSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnVillageKillfocus(){
	
}*/
long CAdmissionRegistration::OnVillageLoadData(){
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
/*void CAdmissionRegistration::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionRegistration::OnDetailAddressChange(){
	
} */
/*void CAdmissionRegistration::OnDetailAddressSetfocus(){
	
} */
/*void CAdmissionRegistration::OnDetailAddressKillfocus(){
	
} */
int CAdmissionRegistration::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnWorkplaceChange(){
	
} */
/*void CAdmissionRegistration::OnWorkplaceSetfocus(){
	
} */
/*void CAdmissionRegistration::OnWorkplaceKillfocus(){
	
} */
int CAdmissionRegistration::OnWorkplaceCheckValue(){
	return 0;
} 
void CAdmissionRegistration::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnRankSelendok(){
	 
}
/*void CAdmissionRegistration::OnRankSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnRankKillfocus(){
	
}*/
long CAdmissionRegistration::OnRankLoadData(){
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
/*void CAdmissionRegistration::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistration::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnPositionSelendok(){
	 
}
/*void CAdmissionRegistration::OnPositionSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnPositionKillfocus(){
	
}*/
long CAdmissionRegistration::OnPositionLoadData(){
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
/*void CAdmissionRegistration::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionRegistration::OnRelativeChange(){
	
} */
/*void CAdmissionRegistration::OnRelativeSetfocus(){
	
} */
/*void CAdmissionRegistration::OnRelativeKillfocus(){
	
} */
int CAdmissionRegistration::OnRelativeCheckValue(){
	return 0;
} 
void CAdmissionRegistration::OnRelationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnRelationSelendok(){
	 
}
/*void CAdmissionRegistration::OnRelationSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnRelationKillfocus(){
	
}*/
long CAdmissionRegistration::OnRelationLoadData(){
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
/*void CAdmissionRegistration::OnRelationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionRegistration::OnRelPhoneChange(){
	
} */
/*void CAdmissionRegistration::OnRelPhoneSetfocus(){
	
} */
/*void CAdmissionRegistration::OnRelPhoneKillfocus(){
	
} */
int CAdmissionRegistration::OnRelPhoneCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnRelAddressChange(){
	
} */
/*void CAdmissionRegistration::OnRelAddressSetfocus(){
	
} */
/*void CAdmissionRegistration::OnRelAddressKillfocus(){
	
} */
int CAdmissionRegistration::OnRelAddressCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnTransferHospitalChange(){
	
} */
/*void CAdmissionRegistration::OnTransferHospitalSetfocus(){
	
} */
/*void CAdmissionRegistration::OnTransferHospitalKillfocus(){
	
} */
int CAdmissionRegistration::OnTransferHospitalCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnTransferDiagnosticChange(){
	
} */
/*void CAdmissionRegistration::OnTransferDiagnosticSetfocus(){
	
} */
/*void CAdmissionRegistration::OnTransferDiagnosticKillfocus(){
	
} */
int CAdmissionRegistration::OnTransferDiagnosticCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnICDDiagnosticChange(){
	
} */
/*void CAdmissionRegistration::OnICDDiagnosticSetfocus(){
	
} */
/*void CAdmissionRegistration::OnICDDiagnosticKillfocus(){
	
} */
int CAdmissionRegistration::OnICDDiagnosticCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnConclusionChange(){
	
} */
/*void CAdmissionRegistration::OnConclusionSetfocus(){
	
} */
/*void CAdmissionRegistration::OnConclusionKillfocus(){
	
} */
int CAdmissionRegistration::OnConclusionCheckValue(){
	return 0;
} 
void CAdmissionRegistration::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnObjectSelendok(){
	 
}
/*void CAdmissionRegistration::OnObjectSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnObjectKillfocus(){
	
}*/
long CAdmissionRegistration::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistration::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionRegistration::OnObjChange(){
	
} */
/*void CAdmissionRegistration::OnObjSetfocus(){
	
} */
/*void CAdmissionRegistration::OnObjKillfocus(){
	
} */
int CAdmissionRegistration::OnObjCheckValue(){
	return 0;
} 
/*void CAdmissionRegistration::OnCardNoChange(){
	
} */
/*void CAdmissionRegistration::OnCardNoSetfocus(){
	
} */
/*void CAdmissionRegistration::OnCardNoKillfocus(){
	
} */
int CAdmissionRegistration::OnCardNoCheckValue(){
	return 0;
} 
void CAdmissionRegistration::OnListDblClick(){
	
} 
void CAdmissionRegistration::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdmissionRegistration::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdmissionRegistration::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CAdmissionRegistration::OnLogListDblClick(){
	
} 
void CAdmissionRegistration::OnLogListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdmissionRegistration::OnLogListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdmissionRegistration::OnLogListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndLogList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLogList.AddItems(
		rs.MoveNext();
	}
	m_wndLogList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CAdmissionRegistration::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnPrintExmSheetSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnPrintFilesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnPrintFoodSheetSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnLunchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnLunchSelendok(){
	 
}
/*void CAdmissionRegistration::OnLunchSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnLunchKillfocus(){
	
}*/
long CAdmissionRegistration::OnLunchLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLunch.IsSearchKey() && !m_szLunchKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szLunchKey
};
	m_wndLunch.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLunch.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistration::OnLunchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionRegistration::OnDinnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistration::OnDinnerSelendok(){
	 
}
/*void CAdmissionRegistration::OnDinnerSetfocus(){
	
}*/
/*void CAdmissionRegistration::OnDinnerKillfocus(){
	
}*/
long CAdmissionRegistration::OnDinnerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDinner.IsSearchKey() && !m_szDinnerKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDinnerKey
};
	m_wndDinner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDinner.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionRegistration::OnDinnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionRegistration::OnEatingDateChange(){
	
} */
/*void CAdmissionRegistration::OnEatingDateSetfocus(){
	
} */
/*void CAdmissionRegistration::OnEatingDateKillfocus(){
	
} */
int CAdmissionRegistration::OnEatingDateCheckValue(){
	return 0;
} 
int CAdmissionRegistration::OnAddAdmissionRegistration(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdmissionRegistration::OnEditAdmissionRegistration(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdmissionRegistration::OnDeleteAdmissionRegistration(){
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
 		OnCancelAdmissionRegistration();
 	}
	return 0;
}
int CAdmissionRegistration::OnSaveAdmissionRegistration(){
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
 		//OnAdmissionRegistrationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdmissionRegistration::OnCancelAdmissionRegistration(){
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
int CAdmissionRegistration::OnAdmissionRegistrationListLoadData(){
	return 0;
}
